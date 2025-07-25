// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Menu.GauntletMenuTournamentLeaderboardView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Menu;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.TournamentLeaderboard;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.Menu
{
  [OverrideView(typeof (MenuTournamentLeaderboardView))]
  public class GauntletMenuTournamentLeaderboardView : MenuView
  {
    private GauntletLayer _layerAsGauntletLayer;
    private TournamentLeaderboardVM _dataSource;
    private IGauntletMovie _movie;

    protected override void OnInitialize()
    {
      base.OnInitialize();
      this._dataSource = new TournamentLeaderboardVM()
      {
        IsEnabled = true
      };
      GauntletLayer gauntletLayer = new GauntletLayer(206);
      gauntletLayer.Name = "MenuTournamentLeaderboard";
      this.Layer = (ScreenLayer) gauntletLayer;
      this._layerAsGauntletLayer = this.Layer as GauntletLayer;
      this.Layer.InputRestrictions.SetInputRestrictions();
      this.Layer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
      this._dataSource.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
      this._movie = this._layerAsGauntletLayer.LoadMovie("GameMenuTournamentLeaderboard", (ViewModel) this._dataSource);
      this.Layer.IsFocusLayer = true;
      ScreenManager.TrySetFocus(this.Layer);
      this.MenuViewContext.AddLayer(this.Layer);
    }

    protected override void OnFinalize()
    {
      this.Layer.IsFocusLayer = false;
      ScreenManager.TryLoseFocus(this.Layer);
      ((ViewModel) this._dataSource).OnFinalize();
      this._dataSource = (TournamentLeaderboardVM) null;
      this._layerAsGauntletLayer.ReleaseMovie(this._movie);
      this.MenuViewContext.RemoveLayer(this.Layer);
      this._movie = (IGauntletMovie) null;
      this.Layer = (ScreenLayer) null;
      base.OnFinalize();
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (this.Layer.Input.IsHotKeyReleased("Exit") || this.Layer.Input.IsHotKeyReleased("Confirm"))
      {
        UISoundsHelper.PlayUISound("event:/ui/default");
        this._dataSource.IsEnabled = false;
      }
      if (this._dataSource.IsEnabled)
        return;
      this.MenuViewContext.CloseTournamentLeaderboard();
    }
  }
}
