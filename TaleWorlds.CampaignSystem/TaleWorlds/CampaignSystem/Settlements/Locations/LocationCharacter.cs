// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Settlements.Locations.LocationCharacter
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Settlements.Locations
{
  public class LocationCharacter
  {
    public bool IsVisualTracked;
    public Dictionary<sbyte, string> PrefabNamesForBones;
    public LocationCharacter.CharacterRelations CharacterRelation;

    public CharacterObject Character => (CharacterObject) this.AgentData.AgentCharacter;

    public IAgentOriginBase AgentOrigin => this.AgentData.AgentOrigin;

    public AgentData AgentData { get; }

    public bool UseCivilianEquipment { get; }

    public string ActionSetCode { get; }

    public string AlarmedActionSetCode { get; }

    public string SpecialTargetTag { get; set; }

    public LocationCharacter.AddBehaviorsDelegate AddBehaviors { get; }

    public bool FixedLocation { get; }

    public Alley MemberOfAlley { get; private set; }

    public ItemObject SpecialItem { get; }

    public bool IsHidden { get; set; }

    public LocationCharacter(
      AgentData agentData,
      LocationCharacter.AddBehaviorsDelegate addBehaviorsDelegate,
      string spawnTag,
      bool fixedLocation,
      LocationCharacter.CharacterRelations characterRelation,
      string actionSetCode,
      bool useCivilianEquipment,
      bool isFixedCharacter = false,
      ItemObject specialItem = null,
      bool isHidden = false,
      bool isVisualTracked = false,
      bool overrideBodyProperties = true)
    {
      this.AgentData = agentData;
      if (Campaign.Current.GameMode == CampaignGameMode.Campaign)
      {
        int seed = -2;
        if (overrideBodyProperties)
          seed = isFixedCharacter ? Settlement.CurrentSettlement.StringId.GetDeterministicHashCode() + this.Character.StringId.GetDeterministicHashCode() : agentData.AgentEquipmentSeed;
        this.AgentData.BodyProperties(this.Character.GetBodyProperties(this.Character.Equipment, seed));
      }
      this.AddBehaviors = addBehaviorsDelegate;
      this.SpecialTargetTag = spawnTag;
      this.FixedLocation = fixedLocation;
      this.ActionSetCode = actionSetCode ?? TaleWorlds.Core.ActionSetCode.GenerateActionSetNameWithSuffix(this.AgentData.AgentMonster, this.AgentData.AgentCharacter.IsFemale, "_villager");
      this.AlarmedActionSetCode = TaleWorlds.Core.ActionSetCode.GenerateActionSetNameWithSuffix(this.AgentData.AgentMonster, this.AgentData.AgentIsFemale, "_villager");
      this.PrefabNamesForBones = new Dictionary<sbyte, string>();
      this.CharacterRelation = characterRelation;
      this.SpecialItem = specialItem;
      this.UseCivilianEquipment = useCivilianEquipment;
      this.IsHidden = isHidden;
      this.IsVisualTracked = isVisualTracked;
    }

    public void SetAlleyOfCharacter(Alley alley) => this.MemberOfAlley = alley;

    public static LocationCharacter CreateBodyguardHero(
      Hero hero,
      MobileParty party,
      LocationCharacter.AddBehaviorsDelegate addBehaviorsDelegate)
    {
      UniqueTroopDescriptor uniqueNo = new UniqueTroopDescriptor(FlattenedTroopRoster.GenerateUniqueNoFromParty(party, 0));
      Monster monsterWithSuffix = FaceGen.GetMonsterWithSuffix(hero.CharacterObject.Race, "_settlement");
      return new LocationCharacter(new AgentData((IAgentOriginBase) new PartyAgentOrigin(PartyBase.MainParty, hero.CharacterObject, uniqueNo: uniqueNo)).Monster(monsterWithSuffix).NoHorses(true), addBehaviorsDelegate, (string) null, false, LocationCharacter.CharacterRelations.Friendly, (string) null, !PlayerEncounter.LocationEncounter.Settlement.IsVillage);
    }

    public override string ToString() => this.Character.Name.ToString();

    public delegate void AddBehaviorsDelegate(IAgent agent);

    public enum CharacterRelations
    {
      Neutral,
      Friendly,
      Enemy,
    }
  }
}
