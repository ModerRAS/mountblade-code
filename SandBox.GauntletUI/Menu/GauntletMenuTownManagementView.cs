// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntletMenuTownManagementView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using SandBox.View.Menu;
using System;
using System.Linq;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TownManagement;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuTownManagementView))]
  public class GauntletMenuTownManagementView : MenuView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private TownManagementVM _dataSource;

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this._dataSource = new TownManagementVM();
      GauntletLayer gauntletLayer = new GauntletLayer(206);
      gauntletLayer.Name = "TownManagementLayer";
      this.Layer = (ScreenLayer) gauntletLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.MenuViewContext.AddLayer(this.Layer);
      if (!this.Layer.Input.IsCategoryRegistered(HotKeyManager.GetCategory("GenericPanelGameKeyCategory")))
        this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._layerAsGauntletLayer.LoadMovie("TownManagement", (ViewModel) this._dataSource);
      this.Layer.IsFocusLayer = true;
      ScreenManager.TrySetFocus(this.Layer);
      this._dataSource.Show = true;
      if (!(ScreenManager.TopScreen is MapScreen topScreen))
        return;
      topScreen.SetIsInTownManagement(true);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this.MenuViewContext.RemoveLayer(this.Layer);
      this.Layer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus(this.Layer);
      if (ScreenManager.TopScreen is MapScreen topScreen)
        topScreen.SetIsInTownManagement(false);
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (TownManagementVM) null;
      this._layerAsGauntletLayer = (GauntletLayer) null;
      this.Layer = (ScreenLayer) null;
      base.OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this.Layer.Input.IsHotKeyReleased("Confirm"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        if (this._dataSource.ReserveControl.IsEnabled)
          this._dataSource.ReserveControl.ExecuteUpdateReserve();
        else
          this._dataSource.ExecuteDone();
      }
      else if (this.Layer.Input.IsHotKeyReleased("Exit"))
      {
        if (this._dataSource.IsSelectingGovernor)
          this._dataSource.IsSelectingGovernor = false;
        else if (this._dataSource.ReserveControl.IsEnabled)
        {
          this._dataSource.ReserveControl.IsEnabled = false;
        }
        else
        {
          SettlementBuildingProjectVM buildingProjectVm = this._dataSource.ProjectSelection.AvailableProjects.FirstOrDefault<SettlementBuildingProjectVM>((Func<SettlementBuildingProjectVM, bool>) (x => x.IsSelected));
          if (buildingProjectVm != null)
          {
            buildingProjectVm.IsSelected = false;
          }
          else
          {
            UISoundsHelper.PlayUISound("event:/ui/default");
            this._dataSource.ExecuteDone();
          }
        }
      }
      if (this._dataSource.Show)
        return;
      this.MenuViewContext.CloseTownManagement();
    }
  }
}
