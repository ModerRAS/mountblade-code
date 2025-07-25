// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntletMenuBaseView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Menu;
using System;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuBaseView))]
  public class GauntletMenuBaseView : MenuView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private IGauntletMovie _movie;

    public GameMenuVM GameMenuDataSource { get; private set; }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this.GameMenuDataSource = new GameMenuVM(this.MenuContext);
      this.GameMenuDataSource.AddHotKey(GameMenuOption.LeaveType.Leave, HotKeyManager.GetCategory("Generic").GetGameKey(4));
      this.Layer = (ScreenLayer) this.MenuViewContext.FindLayer<GauntletLayer>("BasicLayer");
      if (this.Layer == null)
      {
        GauntletLayer gauntletLayer = new GauntletLayer(100);
        gauntletLayer.Name = "BasicLayer";
        this.Layer = (ScreenLayer) gauntletLayer;
        this.MenuViewContext.AddLayer(this.Layer);
      }
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this._movie = this._layerAsGauntletLayer.LoadMovie("GameMenu", (ViewModel) this.GameMenuDataSource);
      ScreenManager.TrySetFocus(this.Layer);
      this._layerAsGauntletLayer.UIContext.ContextAlpha = 1f;
      MBInformationManager.HideInformations();
      this.GainGamepadNavigationAfterSeconds(0.25f);
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.GameMenuDataSource.Refresh(true);
    }

    protected override void OnResume()
    {
      base.OnResume();
      this.GameMenuDataSource.Refresh(true);
    }

    protected override void OnFinalize()
    {
      ((ViewModel) this.GameMenuDataSource).OnFinalize();
      this.GameMenuDataSource = (GameMenuVM) null;
      ScreenManager.TryLoseFocus(this.Layer);
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      this._movie = (IGauntletMovie) null;
      base.OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this.GameMenuDataSource.OnFrameTick();
    }

    protected override void OnMapConversationActivated()
    {
      base.OnMapConversationActivated();
      if (this._layerAsGauntletLayer?.UIContext == null)
        return;
      this._layerAsGauntletLayer.UIContext.ContextAlpha = 0.0f;
    }

    protected override void OnMapConversationDeactivated()
    {
      base.OnMapConversationDeactivated();
      if (this._layerAsGauntletLayer?.UIContext == null)
        return;
      this._layerAsGauntletLayer.UIContext.ContextAlpha = 1f;
    }

    protected override void OnMenuContextUpdated(MenuContext newMenuContext)
    {
      base.OnMenuContextUpdated(newMenuContext);
      this.GameMenuDataSource.UpdateMenuContext(newMenuContext);
    }

    protected override void OnBackgroundMeshNameSet(string name)
    {
      base.OnBackgroundMeshNameSet(name);
      this.GameMenuDataSource.Background = name;
    }

    private void GainGamepadNavigationAfterSeconds(float seconds)
    {
      this._layerAsGauntletLayer.UIContext.GamepadNavigation.GainNavigationAfterTime(seconds, (Func<bool>) (() => this.GameMenuDataSource.ItemList.Count > 0));
    }
  }
}
