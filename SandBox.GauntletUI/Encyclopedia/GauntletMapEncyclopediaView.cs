// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Encyclopedia.GauntletMapEncyclopediaView
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

using SandBox.View.Map;
using System;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Pages;
using TaleWorlds.Core;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace SandBox.GauntletUI.Encyclopedia
{
  [OverrideView(typeof (MapEncyclopediaView))]
  public class GauntletMapEncyclopediaView : MapEncyclopediaView
  {
    private EncyclopediaHomeVM _homeDatasource;
    private EncyclopediaNavigatorVM _navigatorDatasource;
    private EncyclopediaData _encyclopediaData;
    public EncyclopediaListViewDataController ListViewDataController;
    private SpriteCategory _spriteCategory;
    private Game _game;

    protected override void CreateLayout()
    {
      base.CreateLayout();
      this._spriteCategory = UIResourceManager.SpriteData.SpriteCategories["ui_encyclopedia"];
      this._spriteCategory.Load((ITwoDimensionResourceContext) UIResourceManager.ResourceContext, UIResourceManager.UIResourceDepot);
      this._homeDatasource = new EncyclopediaHomeVM(new EncyclopediaPageArgs((object) null));
      this._navigatorDatasource = new EncyclopediaNavigatorVM(new Func<string, object, bool, EncyclopediaPageVM>(this.ExecuteLink), new Action(((MapEncyclopediaView) this).CloseEncyclopedia));
      this.ListViewDataController = new EncyclopediaListViewDataController();
      this._game = Game.Current;
      this._game.AfterTick += new Action<float>(this.OnTick);
    }

    internal void OnTick(float dt) => this._encyclopediaData?.OnTick();

    private EncyclopediaPageVM ExecuteLink(string pageId, object obj, bool needsRefresh)
    {
      this._navigatorDatasource.NavBarString = string.Empty;
      if (this._encyclopediaData == null)
        this._encyclopediaData = new EncyclopediaData(this, ScreenManager.TopScreen, this._homeDatasource, this._navigatorDatasource);
      if (pageId == "LastPage")
      {
        Tuple<string, object> lastPage = this._navigatorDatasource.GetLastPage();
        pageId = lastPage.Item1;
        obj = lastPage.Item2;
      }
      this.IsEncyclopediaOpen = true;
      if (!this._spriteCategory.IsLoaded)
        this._spriteCategory.Load((ITwoDimensionResourceContext) UIResourceManager.ResourceContext, UIResourceManager.UIResourceDepot);
      return this._encyclopediaData.ExecuteLink(pageId, obj, needsRefresh);
    }

    protected override void OnFinalize()
    {
      this._game.AfterTick -= new Action<float>(this.OnTick);
      this._game = (Game) null;
      this._homeDatasource = (EncyclopediaHomeVM) null;
      ((ViewModel) this._navigatorDatasource).OnFinalize();
      this._navigatorDatasource = (EncyclopediaNavigatorVM) null;
      this._encyclopediaData = (EncyclopediaData) null;
      base.OnFinalize();
    }

    public override void CloseEncyclopedia()
    {
      this._encyclopediaData.CloseEncyclopedia();
      this._encyclopediaData = (EncyclopediaData) null;
      this.IsEncyclopediaOpen = false;
    }
  }
}
