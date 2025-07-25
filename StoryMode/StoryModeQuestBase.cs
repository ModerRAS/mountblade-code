// Decompiled with JetBrains decompiler
// Type: StoryMode.StoryModeQuestBase
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Localization;

#nullable disable
namespace StoryMode
{
  public abstract class StoryModeQuestBase : QuestBase
  {
    public override bool IsSpecialQuest => true;

    public override bool IsRemainingTimeHidden => true;

    protected StoryModeQuestBase(string questId, Hero questGiver, CampaignTime duration)
      : base(questId, questGiver, duration, 0)
    {
    }

    protected override void OnTimedOut()
    {
      base.OnTimedOut();
      this.AddLog(new TextObject("{=JTPmw3cb}You couldn't complete the quest in time."));
    }
  }
}
