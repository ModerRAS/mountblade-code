// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModePartySizeLimitModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using StoryMode.Quests.SecondPhase.ConspiracyQuests;
using System;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModePartySizeLimitModel : DefaultPartySizeLimitModel
  {
    public override ExplainedNumber GetPartyMemberSizeLimit(
      PartyBase party,
      bool includeDescriptions = false)
    {
      if (party.IsMobile)
      {
        QuestBase questBase = Campaign.Current.QuestManager.Quests.FirstOrDefault<QuestBase>((Func<QuestBase, bool>) (q => !q.IsFinalized && q.GetType() == typeof (DisruptSupplyLinesConspiracyQuest)));
        if (questBase != null && ((DisruptSupplyLinesConspiracyQuest) questBase).ConspiracyCaravan?.Party == party)
          return new ExplainedNumber((float) ((DisruptSupplyLinesConspiracyQuest) questBase).CaravanPartySize);
      }
      return base.GetPartyMemberSizeLimit(party, includeDescriptions);
    }
  }
}
