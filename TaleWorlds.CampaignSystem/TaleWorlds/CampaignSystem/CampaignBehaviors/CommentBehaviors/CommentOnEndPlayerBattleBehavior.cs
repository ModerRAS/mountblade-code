// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors.CommentOnEndPlayerBattleBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.LogEntries;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.CommentBehaviors
{
  public class CommentOnEndPlayerBattleBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnPlayerBattleEndEvent.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnPlayerBattleEnded));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnPlayerBattleEnded(MapEvent mapEvent)
    {
      if (mapEvent.IsHideoutBattle && mapEvent.BattleState == BattleState.None)
        return;
      LogEntry.AddLogEntry((LogEntry) new PlayerBattleEndedLogEntry(mapEvent));
    }
  }
}
