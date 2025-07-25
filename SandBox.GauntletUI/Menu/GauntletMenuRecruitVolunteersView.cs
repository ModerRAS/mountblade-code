// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntletMenuRecruitVolunteersView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.View.Menu;
using System;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Recruitment;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuRecruitVolunteersView))]
  public class GauntletMenuRecruitVolunteersView : MenuView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private RecruitmentVM _dataSource;
    private IGauntletMovie _movie;

    public override bool ShouldUpdateMenuAfterRemoved => true;

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this._dataSource = new RecruitmentVM();
      this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
      this._dataSource.SetRecruitAllInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("TakeAll"));
      this._dataSource.SetGetKeyTextFromKeyIDFunc(new Func<string, TextObject>(((GameKeyTextExtensions) Game.Current.GameTextManager).GetHotKeyGameTextFromKeyID));
      GauntletLayer gauntletLayer = new GauntletLayer(206);
      gauntletLayer.Name = "RecuritLayer";
      this.Layer = (ScreenLayer) gauntletLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.MenuViewContext.AddLayer(this.Layer);
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
      this._movie = this._layerAsGauntletLayer.LoadMovie("RecruitmentPopup", (ViewModel) this._dataSource);
      this.Layer.IsFocusLayer = true;
      ScreenManager.TrySetFocus(this.Layer);
      this._dataSource.RefreshScreen();
      this._dataSource.Enabled = true;
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.RecruitmentWindow));
      if (!(ScreenManager.TopScreen is MapScreen topScreen))
        return;
      topScreen.SetIsInRecruitment(true);
    }

    protected override void OnFinalize()
    {
      this.Layer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus(this.Layer);
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (RecruitmentVM) null;
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this.MenuViewContext.RemoveLayer(this.Layer);
      this._movie = (IGauntletMovie) null;
      this.Layer = (ScreenLayer) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.MapWindow));
      if (ScreenManager.TopScreen is MapScreen topScreen)
        topScreen.SetIsInRecruitment(false);
      base.OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this.Layer.Input.IsHotKeyReleased("Exit"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteForceQuit();
      }
      else if (this.Layer.Input.IsHotKeyReleased("Confirm"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteDone();
      }
      else if (this.Layer.Input.IsHotKeyReleased("Reset"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteReset();
      }
      else if (this.Layer.Input.IsHotKeyReleased("TakeAll"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.ExecuteRecruitAll();
      }
      else if (this.Layer.Input.IsGameKeyReleased(39))
      {
        if (this._dataSource.FocusedVolunteerOwner != null)
          this._dataSource.FocusedVolunteerOwner.ExecuteOpenEncyclopedia();
        else if (this._dataSource.FocusedVolunteerTroop != null)
          this._dataSource.FocusedVolunteerTroop.ExecuteOpenEncyclopedia();
      }
      if (this._dataSource.Enabled)
        return;
      this.MenuViewContext.CloseRecruitVolunteers();
    }
  }
}
