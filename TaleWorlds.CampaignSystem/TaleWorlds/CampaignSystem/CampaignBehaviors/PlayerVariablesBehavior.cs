// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PlayerVariablesBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PlayerVariablesBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.PlayerDesertedBattleEvent.AddNonSerializedListener((object) this, new Action<int>(this.OnPlayerDesertedBattle));
      CampaignEvents.VillageLooted.AddNonSerializedListener((object) this, new Action<Village>(this.OnVillageLooted));
      CampaignEvents.OnPlayerBattleEndEvent.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnPlayerBattleEnd));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnPlayerDesertedBattle(int sacrificedMenCount)
    {
      SkillLevelingManager.OnTacticsUsed(MobileParty.MainParty, (float) (sacrificedMenCount * 50));
      TraitLevelingHelper.OnTroopsSacrificed();
    }

    private void OnVillageLooted(Village village)
    {
      if (PlayerEncounter.Current == null || !PlayerEncounter.PlayerIsAttacker || PlayerEncounter.EncounterSettlement == null || PlayerEncounter.EncounterSettlement.Village != village)
        return;
      TraitLevelingHelper.OnVillageRaided();
    }

    private void OnPlayerBattleEnd(MapEvent mapEvent)
    {
      float contributionRate = (mapEvent.AttackerSide.IsMainPartyAmongParties() ? mapEvent.AttackerSide : mapEvent.DefenderSide).GetPlayerPartyContributionRate();
      TraitLevelingHelper.OnBattleWon(mapEvent, contributionRate);
    }
  }
}
