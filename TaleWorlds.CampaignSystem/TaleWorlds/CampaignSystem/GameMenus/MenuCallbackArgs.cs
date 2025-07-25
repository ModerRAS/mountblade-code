// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameMenus.MenuCallbackArgs
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameMenus
{
  public class MenuCallbackArgs
  {
    public float DeltaTime;
    public bool IsEnabled = true;
    public TextObject Text;
    public TextObject Tooltip = TextObject.Empty;
    public GameMenuOption.IssueQuestFlags OptionQuestData;
    public GameMenuOption.LeaveType optionLeaveType;
    public TextObject MenuTitle = TextObject.Empty;

    public MenuContext MenuContext { get; private set; }

    public MapState MapState { get; private set; }

    public MenuCallbackArgs(MenuContext menuContext, TextObject text)
    {
      this.MenuContext = menuContext;
      this.Text = text;
    }

    public MenuCallbackArgs(MapState mapState, TextObject text)
    {
      this.MapState = mapState;
      this.Text = text;
    }

    public MenuCallbackArgs(MapState mapState, TextObject text, float dt)
    {
      this.MapState = mapState;
      this.Text = text;
      this.DeltaTime = dt;
    }
  }
}
