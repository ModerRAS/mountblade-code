// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.GauntletMapConversationView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.ViewModelCollection.Barter;
using TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapConversation;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.Map
{
  [OverrideView(typeof (MapConversationView))]
  public class GauntletMapConversationView : MapConversationView, IConversationStateHandler
  {
    private GauntletLayer _layerAsGauntletLayer;
    private MapConversationVM _dataSource;
    private SpriteCategory _conversationCategory;
    private MapConversationTableauData _tableauData;
    private bool _isBarterActive;
    private Queue<GauntletMapConversationView.ConversationStates> _conversationStateQueue;
    private ConversationCharacterData? _playerCharacterData;
    private ConversationCharacterData? _conversationPartnerData;
    private bool _isConversationInstalled;
    private BarterManager _barter;
    private SpriteCategory _barterCategory;
    private BarterVM _barterDataSource;
    private IGauntletMovie _barterMovie;

    public GauntletMapConversationView(
      ConversationCharacterData playerCharacterData,
      ConversationCharacterData conversationPartnerData)
    {
      this._conversationStateQueue = new Queue<GauntletMapConversationView.ConversationStates>();
      this._playerCharacterData = new ConversationCharacterData?(playerCharacterData);
      this._conversationPartnerData = new ConversationCharacterData?(conversationPartnerData);
      this._barter = Campaign.Current.BarterManager;
      this._barter.BarterBegin += new BarterManager.BarterBeginEventDelegate(this.OnBarterBegin);
      this._barter.Closed += new BarterManager.BarterCloseEventDelegate(this.OnBarterClosed);
    }

    private void OnBarterClosed()
    {
      this._layerAsGauntletLayer.ReleaseMovie(this._barterMovie);
      this._barterCategory.Unload();
      this._barterDataSource = (BarterVM) null;
      this._isBarterActive = false;
      this._dataSource.IsBarterActive = false;
      BarterItemVM.IsFiveStackModifierActive = false;
      BarterItemVM.IsEntireStackModifierActive = false;
    }

    private void OnBarterBegin(BarterData args)
    {
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._barterCategory = spriteData.SpriteCategories["ui_barter"];
      this._barterCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      this._barterDataSource = new BarterVM(args);
      this._barterDataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._barterDataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._barterDataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._barterMovie = this._layerAsGauntletLayer.LoadMovie("BarterScreen", (ViewModel) this._barterDataSource);
      this._isBarterActive = true;
      this._dataSource.IsBarterActive = true;
    }

    protected override void CreateLayout()
    {
      base.CreateLayout();
      SpriteData spriteData = UIResourceManager.SpriteData;
      TwoDimensionEngineResourceContext resourceContext = UIResourceManager.ResourceContext;
      ResourceDepot uiResourceDepot = UIResourceManager.UIResourceDepot;
      this._conversationCategory = spriteData.SpriteCategories["ui_conversation"];
      this._conversationCategory.Load((ITwoDimensionResourceContext) resourceContext, uiResourceDepot);
      Campaign.Current.ConversationManager.Handler = (IConversationStateHandler) this;
      Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
    }

    private void OnContinue()
    {
      MapConversationVM dataSource = this._dataSource;
      int num1;
      if (dataSource == null)
      {
        num1 = 0;
      }
      else
      {
        int? count = dataSource.DialogController?.AnswerList.Count;
        int num2 = 0;
        num1 = count.GetValueOrDefault() <= num2 & count.HasValue ? 1 : 0;
      }
      if (num1 == 0 || this._isBarterActive || !this._isConversationInstalled)
        return;
      ((IConversationStateHandler) this).ExecuteConversationContinue();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this.Tick();
    }

    protected override void OnIdleTick(float dt)
    {
      base.OnIdleTick(dt);
      this.Tick();
    }

    protected override bool IsEscaped() => !this._isConversationInstalled;

    protected override bool IsOpeningEscapeMenuOnFocusChangeAllowed() => true;

    private void Tick()
    {
      if (this._conversationStateQueue.Count > 0)
        this.ProcessConversationState(this._conversationStateQueue.Dequeue());
      if (this._isConversationInstalled && ScreenManager.TopScreen == this.MapScreen && ScreenManager.FocusedLayer != this.Layer)
        ScreenManager.TrySetFocus(this.Layer);
      MapConversationVM dataSource = this._dataSource;
      int num1;
      if (dataSource == null)
      {
        num1 = 0;
      }
      else
      {
        int? count = dataSource.DialogController?.AnswerList.Count;
        int num2 = 0;
        num1 = count.GetValueOrDefault() <= num2 & count.HasValue ? 1 : 0;
      }
      if (num1 != 0 && !this._isBarterActive && this._isConversationInstalled && this.IsReleasedInGauntletLayer("ContinueKey"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        ((IConversationStateHandler) this).ExecuteConversationContinue();
      }
      if (this._barterDataSource != null)
      {
        if (this.IsReleasedInGauntletLayer("Exit"))
        {
          UISoundsHelper.PlayUISound("event:/ui/default");
          this._barterDataSource.ExecuteCancel();
        }
        else
        {
          if (this.IsReleasedInGauntletLayer("Confirm"))
          {
            BarterVM barterDataSource = this._barterDataSource;
            if ((barterDataSource != null ? (!barterDataSource.IsOfferDisabled ? 1 : 0) : 0) != 0)
            {
              UISoundsHelper.PlayUISound("event:/ui/default");
              this._barterDataSource.ExecuteOffer();
              goto label_22;
            }
          }
          if (this.IsReleasedInGauntletLayer("Reset"))
          {
            UISoundsHelper.PlayUISound("event:/ui/default");
            this._barterDataSource.ExecuteReset();
          }
        }
      }
      else if (this.IsReleasedInGauntletLayer("ToggleEscapeMenu"))
      {
        MapScreen mapScreen = this.MapScreen;
        if ((mapScreen != null ? (mapScreen.IsEscapeMenuOpened ? 1 : 0) : 0) != 0)
          this.MapScreen.CloseEscapeMenu();
        else
          this.MapScreen?.OpenEscapeMenu();
      }
label_22:
      BarterItemVM.IsFiveStackModifierActive = this.IsDownInGauntletLayer("FiveStackModifier");
      BarterItemVM.IsEntireStackModifierActive = this.IsDownInGauntletLayer("EntireStackModifier");
    }

    protected override void OnMenuModeTick(float dt)
    {
      base.OnMenuModeTick(dt);
      this.Tick();
    }

    protected override void OnMapConversationUpdate(
      ConversationCharacterData playerConversationData,
      ConversationCharacterData partnerConversationData)
    {
      base.OnMapConversationUpdate(playerConversationData, partnerConversationData);
      float timeOfDay = CampaignTime.Now.CurrentHourInDay * 1f;
      MapWeatherModel.WeatherEvent weatherEventInPosition = Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(MobileParty.MainParty.Position2D);
      bool isCurrentTerrainUnderSnow = weatherEventInPosition == MapWeatherModel.WeatherEvent.Snowy || weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard;
      bool isInside = false;
      if (partnerConversationData.Character.HeroObject != null)
      {
        string stringId = LocationComplex.Current?.GetLocationOfCharacter(partnerConversationData.Character.HeroObject)?.StringId;
        isInside = Hero.MainHero.CurrentSettlement != null && (stringId == "lordshall" || stringId == "tavern");
      }
      MapConversationTableauData from = MapConversationTableauData.CreateFrom(playerConversationData, partnerConversationData, Campaign.Current.MapSceneWrapper.GetFaceTerrainType(MobileParty.MainParty.CurrentNavigationFace), timeOfDay, isCurrentTerrainUnderSnow, Hero.MainHero.CurrentSettlement, isInside, weatherEventInPosition == MapWeatherModel.WeatherEvent.HeavyRain, weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard);
      if (GauntletMapConversationView.IsSame(from, this._tableauData))
        return;
      this._dataSource.TableauData = (object) from;
    }

    private bool IsReleasedInGauntletLayer(string hotKeyID)
    {
      ScreenLayer layer = this.Layer;
      return layer != null && layer.Input.IsHotKeyReleased(hotKeyID);
    }

    private bool IsDownInGauntletLayer(string hotKeyID)
    {
      ScreenLayer layer = this.Layer;
      return layer != null && layer.Input.IsHotKeyDown(hotKeyID);
    }

    private void OnClose()
    {
      Game.Current.GameStateManager.LastOrDefault<MapState>()?.OnMapConversationOver();
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.Layer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus(this.Layer);
      this._barter.BarterBegin -= new BarterManager.BarterBeginEventDelegate(this.OnBarterBegin);
      this._barter.Closed -= new BarterManager.BarterCloseEventDelegate(this.OnBarterClosed);
      ((ViewModel) this._dataSource).OnFinalize();
      ((ViewModel) this._barterDataSource)?.OnFinalize();
      this.MapScreen.RemoveLayer(this.Layer);
      this._conversationCategory?.Unload();
      this.Layer = (ScreenLayer) null;
      this._barterMovie = (IGauntletMovie) null;
      this._dataSource = (MapConversationVM) null;
      this._barterDataSource = (BarterVM) null;
      Campaign.Current.ConversationManager.Handler = (IConversationStateHandler) null;
      Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
    }

    private string GetContinueKeyText()
    {
      if (!Input.IsGamepadActive)
        return GameTexts.FindText("str_click_to_continue").ToString();
      GameTexts.SetVariable("CONSOLE_KEY_NAME", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("ConversationHotKeyCategory", "ContinueKey")));
      return GameTexts.FindText("str_click_to_continue_console").ToString();
    }

    private void ProcessConversationState(
      GauntletMapConversationView.ConversationStates state)
    {
      switch (state)
      {
        case GauntletMapConversationView.ConversationStates.OnInstall:
          this.CreateConversationTableau();
          break;
        case GauntletMapConversationView.ConversationStates.OnUninstall:
          this.UninstallConversation();
          break;
        case GauntletMapConversationView.ConversationStates.OnDeactivate:
          MBInformationManager.HideInformations();
          break;
        case GauntletMapConversationView.ConversationStates.OnContinue:
          this._dataSource.DialogController.OnConversationContinue();
          break;
        case GauntletMapConversationView.ConversationStates.ExecuteContinue:
          this._dataSource.DialogController.ExecuteContinue();
          break;
      }
    }

    private void CreateConversationTableau()
    {
      float timeOfDay = CampaignTime.Now.CurrentHourInDay * 1f;
      MapWeatherModel.WeatherEvent weatherEventInPosition = Campaign.Current.Models.MapWeatherModel.GetWeatherEventInPosition(MobileParty.MainParty.Position2D);
      bool isCurrentTerrainUnderSnow = weatherEventInPosition == MapWeatherModel.WeatherEvent.Snowy || weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard;
      bool isInside = false;
      if (this._conversationPartnerData.Value.Character.HeroObject != null)
      {
        string stringId = LocationComplex.Current?.GetLocationOfCharacter(this._conversationPartnerData.Value.Character.HeroObject)?.StringId;
        isInside = Hero.MainHero.CurrentSettlement != null && (stringId == "lordshall" || stringId == "tavern");
      }
      this._tableauData = MapConversationTableauData.CreateFrom(this._playerCharacterData.Value, this._conversationPartnerData.Value, Campaign.Current.MapSceneWrapper.GetFaceTerrainType(MobileParty.MainParty.CurrentNavigationFace), timeOfDay, isCurrentTerrainUnderSnow, Hero.MainHero.CurrentSettlement, isInside, weatherEventInPosition == MapWeatherModel.WeatherEvent.HeavyRain, weatherEventInPosition == MapWeatherModel.WeatherEvent.Blizzard);
      this._dataSource.TableauData = (object) this._tableauData;
      this._dataSource.IsTableauEnabled = true;
      this._layerAsGauntletLayer.GamepadNavigationContext.GainNavigationAfterFrames(1, (Func<bool>) null);
    }

    private void UninstallConversation()
    {
      if (!this._isConversationInstalled)
        return;
      this.OnClose();
      this._isConversationInstalled = false;
    }

    void IConversationStateHandler.OnConversationInstall()
    {
      if (this._isConversationInstalled)
        return;
      this.CreateConversationMission();
      this._dataSource = new MapConversationVM(new Action(this.OnContinue), new Func<string>(this.GetContinueKeyText));
      this.Layer = (ScreenLayer) new GauntletLayer(205);
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._layerAsGauntletLayer.LoadMovie("MapConversation", (ViewModel) this._dataSource);
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("Generic"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("ConversationHotKeyCategory"));
      this.MapScreen.AddLayer(this.Layer);
      this.Layer.IsFocusLayer = true;
      ScreenManager.TrySetFocus(this.Layer);
      this._conversationStateQueue.Enqueue(GauntletMapConversationView.ConversationStates.OnInstall);
      this._isConversationInstalled = true;
    }

    void IConversationStateHandler.OnConversationUninstall()
    {
      this._conversationStateQueue.Enqueue(GauntletMapConversationView.ConversationStates.OnUninstall);
    }

    void IConversationStateHandler.OnConversationActivate()
    {
      if (this._conversationStateQueue.Count > 0)
        this._conversationStateQueue.Enqueue(GauntletMapConversationView.ConversationStates.OnActivate);
      else
        this.ProcessConversationState(GauntletMapConversationView.ConversationStates.OnActivate);
    }

    void IConversationStateHandler.OnConversationDeactivate()
    {
      if (this._conversationStateQueue.Count > 0)
        this._conversationStateQueue.Enqueue(GauntletMapConversationView.ConversationStates.OnDeactivate);
      else
        this.ProcessConversationState(GauntletMapConversationView.ConversationStates.OnDeactivate);
    }

    void IConversationStateHandler.OnConversationContinue()
    {
      if (this._conversationStateQueue.Count > 0)
        this._conversationStateQueue.Enqueue(GauntletMapConversationView.ConversationStates.OnContinue);
      else
        this.ProcessConversationState(GauntletMapConversationView.ConversationStates.OnContinue);
    }

    void IConversationStateHandler.ExecuteConversationContinue()
    {
      if (this._conversationStateQueue.Count > 0)
        this._conversationStateQueue.Enqueue(GauntletMapConversationView.ConversationStates.ExecuteContinue);
      else
        this.ProcessConversationState(GauntletMapConversationView.ConversationStates.ExecuteContinue);
    }

    private static bool IsSame(MapConversationTableauData first, MapConversationTableauData second)
    {
      return first != null && second != null && GauntletMapConversationView.IsSame(first.PlayerCharacterData, second.PlayerCharacterData) && GauntletMapConversationView.IsSame(first.ConversationPartnerData, second.ConversationPartnerData) && first.ConversationTerrainType == second.ConversationTerrainType && first.IsCurrentTerrainUnderSnow == second.IsCurrentTerrainUnderSnow && (double) first.TimeOfDay == (double) second.TimeOfDay;
    }

    private static bool IsSame(ConversationCharacterData first, ConversationCharacterData second)
    {
      return first.Character == second.Character && first.NoHorse == second.NoHorse && first.NoWeapon == second.NoWeapon && first.Party == second.Party && first.SpawnedAfterFight == second.SpawnedAfterFight && first.IsCivilianEquipmentRequiredForLeader == second.IsCivilianEquipmentRequiredForLeader;
    }

    private enum ConversationStates
    {
      OnInstall,
      OnUninstall,
      OnActivate,
      OnDeactivate,
      OnContinue,
      ExecuteContinue,
    }
  }
}
