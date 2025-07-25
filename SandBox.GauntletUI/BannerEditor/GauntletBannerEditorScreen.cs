// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.BannerEditor.GauntletBannerEditorScreen
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Engine;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.GauntletUI.BannerEditor
{
  [GameStateScreen(typeof (BannerEditorState))]
  public class GauntletBannerEditorScreen : ScreenBase, IGameStateListener
  {
    private const int ViewOrderPriority = 15;
    private readonly BannerEditorView _bannerEditorLayer;
    private readonly Clan _clan;

    public GauntletBannerEditorScreen(BannerEditorState bannerEditorState)
    {
      LoadingWindow.EnableGlobalLoadingWindow();
      this._clan = bannerEditorState.GetClan();
      // ISSUE: method pointer
      // ISSUE: method pointer
      this._bannerEditorLayer = new BannerEditorView((BasicCharacterObject) bannerEditorState.GetCharacter(), bannerEditorState.GetClan().Banner, new ControlCharacterCreationStage((object) this, __methodptr(OnDone)), new TextObject("{=WiNRdfsm}Done"), new ControlCharacterCreationStage((object) this, __methodptr(OnCancel)), new TextObject("{=3CpNUnVl}Cancel"));
      this._bannerEditorLayer.DataSource.SetClanRelatedRules(bannerEditorState.GetClan().Kingdom == null);
    }

    protected override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      this._bannerEditorLayer.OnTick(dt);
    }

    public void OnDone()
    {
      uint primaryColor = this._bannerEditorLayer.DataSource.BannerVM.GetPrimaryColor();
      uint sigilColor = this._bannerEditorLayer.DataSource.BannerVM.GetSigilColor();
      this._clan.Color = primaryColor;
      this._clan.Color2 = sigilColor;
      this._clan.UpdateBannerColor(primaryColor, sigilColor);
      Game.Current.GameStateManager.PopState();
    }

    public void OnCancel() => Game.Current.GameStateManager.PopState();

    protected override void OnInitialize()
    {
      base.OnInitialize();
      Game.Current.GameStateManager.RegisterActiveStateDisableRequest((object) this);
    }

    protected override void OnFinalize()
    {
      base.OnFinalize();
      this._bannerEditorLayer.OnFinalize();
      if (LoadingWindow.GetGlobalLoadingWindowState())
        LoadingWindow.DisableGlobalLoadingWindow();
      Game.Current.GameStateManager.UnregisterActiveStateDisableRequest((object) this);
    }

    protected override void OnActivate()
    {
      base.OnActivate();
      this.AddLayer((ScreenLayer) this._bannerEditorLayer.GauntletLayer);
      this.AddLayer((ScreenLayer) this._bannerEditorLayer.SceneLayer);
    }

    protected override void OnDeactivate() => this._bannerEditorLayer.OnDeactivate();

    void IGameStateListener.OnActivate()
    {
    }

    void IGameStateListener.OnDeactivate()
    {
    }

    void IGameStateListener.OnInitialize()
    {
    }

    void IGameStateListener.OnFinalize()
    {
    }
  }
}
