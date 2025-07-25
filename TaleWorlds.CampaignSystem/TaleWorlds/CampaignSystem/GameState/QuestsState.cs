// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameState.QuestsState
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Issues;
using TaleWorlds.CampaignSystem.LogEntries;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameState
{
  public class QuestsState : TaleWorlds.Core.GameState
  {
    private IQuestsStateHandler _handler;

    public IssueBase InitialSelectedIssue { get; private set; }

    public QuestBase InitialSelectedQuest { get; private set; }

    public JournalLogEntry InitialSelectedLog { get; private set; }

    public override bool IsMenuState => true;

    public IQuestsStateHandler Handler
    {
      get => this._handler;
      set => this._handler = value;
    }

    public QuestsState()
    {
    }

    public QuestsState(IssueBase initialSelectedIssue)
    {
      this.InitialSelectedIssue = initialSelectedIssue;
    }

    public QuestsState(QuestBase initialSelectedQuest)
    {
      this.InitialSelectedQuest = initialSelectedQuest;
    }

    public QuestsState(JournalLogEntry initialSelectedLog)
    {
      this.InitialSelectedLog = initialSelectedLog;
    }
  }
}
