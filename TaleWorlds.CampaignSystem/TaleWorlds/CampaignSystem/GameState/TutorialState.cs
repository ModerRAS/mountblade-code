// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.TutorialState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class TutorialState : TaleWorlds.Core.GameState
  {
    private MBObjectManager _objectManager = MBObjectManager.Instance;
    public MenuContext MenuContext = MBObjectManager.Instance.CreateObject<MenuContext>();

    public override bool IsMenuState => true;

    protected override void OnActivate()
    {
      base.OnActivate();
      this.MenuContext.Refresh();
    }

    protected override void OnFinalize()
    {
      this.MenuContext.Destroy();
      this._objectManager.UnregisterObject((MBObjectBase) this.MenuContext);
      this.MenuContext = (MenuContext) null;
      base.OnFinalize();
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      this.MenuContext.OnTick(dt);
    }
  }
}
