// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxBattleInitializationModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxBattleInitializationModel : BattleInitializationModel
  {
    public override List<FormationClass> GetAllAvailableTroopTypes()
    {
      List<FormationClass> availableTroopTypes = new List<FormationClass>();
      MapEventSide mapEventSide = PlayerEncounter.Battle.GetMapEventSide(PlayerEncounter.Battle.PlayerSide);
      bool flag = ((PlayerEncounter.Battle.GetLeaderParty(PlayerEncounter.Battle.PlayerSide) == PartyBase.MainParty ? 1 : 0) & (PartyBase.MainParty.MobileParty.Army == null ? (false ? 1 : 0) : (PartyBase.MainParty.MobileParty.Army.LeaderParty == PartyBase.MainParty.MobileParty ? 1 : 0))) != 0;
      for (int index1 = 0; index1 < mapEventSide.Parties.Count; ++index1)
      {
        MapEventParty party = mapEventSide.Parties[index1];
        if (flag || party.Party == PartyBase.MainParty)
        {
          for (int index2 = 0; index2 < party.Party.MemberRoster.Count; ++index2)
          {
            CharacterObject characterAtIndex = party.Party.MemberRoster.GetCharacterAtIndex(index2);
            TroopRosterElement elementCopyAtIndex = party.Party.MemberRoster.GetElementCopyAtIndex(index2);
            if (!characterAtIndex.IsHero && elementCopyAtIndex.WoundedNumber < elementCopyAtIndex.Number)
            {
              if (characterAtIndex.IsInfantry && !characterAtIndex.IsMounted && !availableTroopTypes.Contains(FormationClass.Infantry))
                availableTroopTypes.Add(FormationClass.Infantry);
              if (characterAtIndex.IsRanged && !characterAtIndex.IsMounted && !availableTroopTypes.Contains(FormationClass.Ranged))
                availableTroopTypes.Add(FormationClass.Ranged);
              if (characterAtIndex.IsMounted && !characterAtIndex.IsRanged && !availableTroopTypes.Contains(FormationClass.Cavalry))
                availableTroopTypes.Add(FormationClass.Cavalry);
              if (characterAtIndex.IsMounted && characterAtIndex.IsRanged && !availableTroopTypes.Contains(FormationClass.HorseArcher))
                availableTroopTypes.Add(FormationClass.HorseArcher);
              if (availableTroopTypes.Count == 4)
                return availableTroopTypes;
            }
          }
        }
      }
      return availableTroopTypes;
    }

    protected override bool CanPlayerSideDeployWithOrderOfBattleAux()
    {
      if (Mission.Current.IsSallyOutBattle)
        return false;
      MapEvent playerMapEvent = MapEvent.PlayerMapEvent;
      if (MapEvent.PlayerMapEvent == null)
        return false;
      PartyBase leaderParty = playerMapEvent.GetLeaderParty(playerMapEvent.PlayerSide);
      return (leaderParty == PartyBase.MainParty || leaderParty.IsSettlement && leaderParty.Settlement.OwnerClan.Leader == Hero.MainHero || playerMapEvent.IsPlayerSergeant()) && Mission.Current.GetMissionBehavior<MissionAgentSpawnLogic>().GetNumberOfPlayerControllableTroops() >= 20;
    }
  }
}
