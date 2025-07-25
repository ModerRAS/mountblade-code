using System;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Siege;

namespace TaleWorlds.CampaignSystem.CampaignBehaviors.AiBehaviors
{
  public class AiArmyMemberBehavior : CampaignBehaviorBase
  {
    // 定义跟随军队领袖的默认评分常量
    private const float FollowingArmyLeaderDefaultScore = 0.25f;

    // 注册事件
    public override void RegisterEvents()
    {
      // 注册 AI 每小时滴答事件的监听器
      CampaignEvents.AiHourlyTickEvent.AddNonSerializedListener((object) this, new Action<MobileParty, PartyThinkParams>(this.AiHourlyTick));
      // 注册围攻事件开始的监听器
      CampaignEvents.OnSiegeEventStartedEvent.AddNonSerializedListener((object) this, new Action<SiegeEvent>(this.OnSiegeEventStarted));
    }

    // 同步数据方法，当前未使用
    public override void SyncData(IDataStore dataStore)
    {
      
    }

    // 围攻事件开始时的处理方法
    private void OnSiegeEventStarted(SiegeEvent siegeEvent)
    {
      // 遍历被围困定居点的所有队伍
      for (int index = 0; index < siegeEvent.BesiegedSettlement.Parties.Count; ++index)
      {
        // 如果队伍是领主队伍，设置其 AI 移动模式为“防守”
        if (siegeEvent.BesiegedSettlement.Parties[index].IsLordParty)
          siegeEvent.BesiegedSettlement.Parties[index].Ai.SetMoveModeHold();
      }
    }

    // AI 每小时滴答事件的处理方法
    public void AiHourlyTick(MobileParty mobileParty, PartyThinkParams p)
    {
      // 如果队伍没有军队，或者队伍是军队的领袖队伍，或者队伍在一个被围攻的定居点内，则返回
      if (mobileParty.Army == null || mobileParty.Army.LeaderParty == mobileParty || mobileParty.CurrentSettlement != null && mobileParty.CurrentSettlement.IsUnderSiege)
        return;
      // 创建一个 AI 行为元组，目标为军队的领袖队伍，行为为护送队伍
      AIBehaviorTuple aiBehaviorTuple = new AIBehaviorTuple((IMapPoint) mobileParty.Army.LeaderParty, AiBehavior.EscortParty);
      // 添加行为评分
      p.AddBehaviorScore((aiBehaviorTuple, 0.25f));
    }
  }
}
