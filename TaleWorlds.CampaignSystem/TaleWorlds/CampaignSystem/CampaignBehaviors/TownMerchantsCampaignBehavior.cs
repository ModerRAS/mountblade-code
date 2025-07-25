// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.TownMerchantsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class TownMerchantsCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.LocationCharactersAreReadyToSpawnEvent.AddNonSerializedListener((object) this, new Action<Dictionary<string, int>>(this.LocationCharactersAreReadyToSpawn));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void LocationCharactersAreReadyToSpawn(Dictionary<string, int> unusedUsablePointCount)
    {
      if (CampaignMission.Current.Location != PlayerEncounter.LocationEncounter.Settlement.LocationComplex.GetLocationWithId("center") || !Campaign.Current.IsDay)
        return;
      this.AddTradersToCenter(unusedUsablePointCount);
    }

    private void AddTradersToCenter(Dictionary<string, int> unusedUsablePointCount)
    {
      Location locationWithId = Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("center");
      int count;
      if (unusedUsablePointCount.TryGetValue("sp_merchant", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(TownMerchantsCampaignBehavior.CreateMerchant), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (unusedUsablePointCount.TryGetValue("sp_horse_merchant", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(TownMerchantsCampaignBehavior.CreateHorseTrader), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (unusedUsablePointCount.TryGetValue("sp_armorer", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(TownMerchantsCampaignBehavior.CreateArmorer), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (unusedUsablePointCount.TryGetValue("sp_weaponsmith", out count))
        locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(TownMerchantsCampaignBehavior.CreateWeaponsmith), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, count);
      if (!unusedUsablePointCount.TryGetValue("sp_blacksmith", out count))
        return;
      locationWithId.AddLocationCharacters(new CreateLocationCharacterDelegate(TownMerchantsCampaignBehavior.CreateBlacksmith), Settlement.CurrentSettlement.Culture, LocationCharacter.CharacterRelations.Neutral, count);
    }

    private static LocationCharacter CreateBlacksmith(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject blacksmith = culture.Blacksmith;
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(blacksmith.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(blacksmith, out minimumAge, out maximumAge);
      return new LocationCharacter(new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) blacksmith)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge)), new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "sp_blacksmith", true, relation, (string) null, true);
    }

    private static LocationCharacter CreateMerchant(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject merchant = culture.Merchant;
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(merchant.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(merchant, out minimumAge, out maximumAge);
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) merchant)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "sp_merchant", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_seller"), true);
    }

    private static LocationCharacter CreateHorseTrader(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject horseMerchant = culture.HorseMerchant;
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(horseMerchant.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(horseMerchant, out minimumAge, out maximumAge);
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) horseMerchant)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "sp_horse_merchant", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_seller"), true);
    }

    private static LocationCharacter CreateArmorer(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject armorer = culture.Armorer;
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(armorer.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(armorer, out minimumAge, out maximumAge);
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) armorer)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "sp_armorer", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_seller"), true);
    }

    private static LocationCharacter CreateWeaponsmith(
      CultureObject culture,
      LocationCharacter.CharacterRelations relation)
    {
      CharacterObject weaponsmith = culture.Weaponsmith;
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(weaponsmith.Race, "_settlement");
      int minimumAge;
      int maximumAge;
      Campaign.Current.Models.AgeModel.GetAgeLimitForLocation(weaponsmith, out minimumAge, out maximumAge);
      AgentData agentData = new AgentData((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) weaponsmith)).Monster(monsterWithSuffix).Age(MBRandom.RandomInt(minimumAge, maximumAge));
      return new LocationCharacter(agentData, new LocationCharacter.AddBehaviorsDelegate(SandBoxManager.Instance.AgentBehaviorManager.AddWandererBehaviors), "sp_weaponsmith", true, relation, ActionSetCode.GenerateActionSetNameWithSuffix(agentData.AgentMonster, agentData.AgentIsFemale, "_weaponsmith"), true);
    }
  }
}
