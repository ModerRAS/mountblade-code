// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSiegeLordsHallFightModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSiegeLordsHallFightModel : SiegeLordsHallFightModel
  {
    public override float AreaLostRatio => 3f;

    public override float AttackerDefenderTroopCountRatio => 0.7f;

    public override float DefenderMaxArcherRatio => 0.7f;

    public override int MaxDefenderSideTroopCount => 27;

    public override int MaxDefenderArcherCount
    {
      get => MathF.Round((float) this.MaxDefenderSideTroopCount * this.DefenderMaxArcherRatio);
    }

    public override int MaxAttackerSideTroopCount => 19;

    public override int DefenderTroopNumberForSuccessfulPullBack => 20;

    public override FlattenedTroopRoster GetPriorityListForLordsHallFightMission(
      MapEvent playerMapEvent,
      BattleSideEnum side,
      int troopCount)
    {
      List<MapEventParty> list1 = playerMapEvent.PartiesOnSide(side).Where<MapEventParty>((Func<MapEventParty, bool>) (x => x.Party.IsMobile)).ToList<MapEventParty>();
      FlattenedTroopRoster source = new FlattenedTroopRoster(list1.Sum<MapEventParty>((Func<MapEventParty, int>) (x => x.Party.MemberRoster.TotalHealthyCount)));
      foreach (MapEventParty mapEventParty in list1)
        source.Add(mapEventParty.Party.MemberRoster.GetTroopRoster());
      List<FlattenedTroopRosterElement> list2 = source.Where<FlattenedTroopRosterElement>((Func<FlattenedTroopRosterElement, bool>) (x => !x.Troop.IsHero && x.Troop.IsRanged && !x.IsWounded)).ToList<FlattenedTroopRosterElement>();
      list2.Shuffle<FlattenedTroopRosterElement>();
      List<FlattenedTroopRosterElement> list3 = source.Where<FlattenedTroopRosterElement>((Func<FlattenedTroopRosterElement, bool>) (x => !x.Troop.IsHero && !x.Troop.IsRanged && !x.IsWounded)).ToList<FlattenedTroopRosterElement>();
      list3.Shuffle<FlattenedTroopRosterElement>();
      source.RemoveIf((Predicate<FlattenedTroopRosterElement>) (x => !x.Troop.IsHero || x.IsWounded));
      int num1 = troopCount - source.Count<FlattenedTroopRosterElement>();
      if (num1 > 0)
      {
        int count1 = list2.Count;
        int count2 = list3.Count;
        int defenderArcherCount = Campaign.Current.Models.SiegeLordsHallFightModel.MaxDefenderArcherCount;
        int num2 = MathF.Min(count1, defenderArcherCount);
        int index1 = 0;
        for (int index2 = 0; num1 > 0 && (index1 < num2 || index2 < count2); ++index2)
        {
          if (index1 < num2)
          {
            FlattenedTroopRosterElement troopRosterElement = list2[index1];
            source.Add(troopRosterElement.Troop, false, troopRosterElement.Xp);
            --num1;
          }
          if (index2 < count2 && num1 > 0)
          {
            FlattenedTroopRosterElement troopRosterElement = list3[index2];
            source.Add(troopRosterElement.Troop, false, troopRosterElement.Xp);
            --num1;
          }
          ++index1;
        }
      }
      return source;
    }
  }
}
