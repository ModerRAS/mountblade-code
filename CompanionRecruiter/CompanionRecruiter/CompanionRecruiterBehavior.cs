// Decompiled with JetBrains decompiler
// Type: CompanionRecruiter.CompanionRecruiterBehavior
// Assembly: CompanionRecruiter, Version=0.0.1.0, Culture=neutral, PublicKeyToken=null
// MVID: 166D40CD-4BA1-4C18-83FA-627646F9F05D
// Assembly location: E:\code\vs\CompanionRecruiter\CompanionRecruiter\bin\x64\Debug\net472\CompanionRecruiter.dll

using Helpers;
using MCM.Abstractions.Base.Global;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;

#nullable enable
namespace CompanionRecruiter
{
  public class CompanionRecruiterBehavior : CampaignBehaviorBase
  {
    public virtual void RegisterEvents()
    {
      CampaignEvents.DailyTickClanEvent.AddNonSerializedListener((object) this, new Action<Clan>(this.DailyClanTick));
      CampaignEvents.HeroPrisonerReleased.AddNonSerializedListener((object) this, new Action<Hero, PartyBase, IFaction, EndCaptivityDetail>(this.HeroPrisonerRelease));
    }

    public virtual void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<string, List<CompanionStruct>>>("CompanionDictionary", ref HeroManager.CompanionDictionary);
    }

    private Hero FindExistingCompanions()
    {
      return ((List<Hero>) Hero.AllAliveHeroes).Find((Predicate<Hero>) (h => h.Occupation == 16 && h.HeroState == 1 && !h.IsPrisoner && h.CompanionOf != Clan.PlayerClan && h.CompanionOf == null));
    }

    private void HeroPrisonerRelease(
      Hero hero,
      PartyBase partyBase,
      IFaction faction,
      EndCaptivityDetail endCaptivityDetail)
    {
      if (hero.Occupation != 16 || hero.CompanionOf == Clan.PlayerClan)
        return;
      hero.CompanionOf = (Clan) null;
    }

    private void DailyClanTick(Clan clan)
    {
      if (clan.IsEliminated || clan.IsBanditFaction || clan.Kingdom == null || clan.Leader == null || clan == Clan.PlayerClan || clan.IsUnderMercenaryService || clan.IsMinorFaction || clan.IsBanditFaction || (double) MBRandom.RandomFloat >= 0.14000000059604645)
        return;
      this.EvaluateRecruitCompanion(clan);
    }

    private void EvaluateRecruitCompanion(Clan clan)
    {
      if (clan?.Leader?.PartyBelongedTo == null || clan == Clan.PlayerClan || clan.Leader.IsPrisoner || clan.WarPartyComponents == null || ((List<Hero>) clan.Companions).Count >= clan.CompanionLimit)
        return;
      WarPartyComponent warPartyComponent = ((IEnumerable<WarPartyComponent>) clan.WarPartyComponents).FirstOrDefault<WarPartyComponent>((Func<WarPartyComponent, bool>) (x => ((PartyComponent) x).Leader == clan.Leader));
      if (((PartyComponent) warPartyComponent)?.MobileParty == null)
        return;
      MobileParty mobileParty = ((PartyComponent) warPartyComponent).MobileParty;
      if (!mobileParty.IsActive || !((MBObjectBase) mobileParty).IsReady)
        return;
      List<(SkillEffect.PerkRole, float)> valueTupleList = new List<(SkillEffect.PerkRole, float)>();
      if (this.IsRoleFree(mobileParty, (SkillEffect.PerkRole) 9) && !this.ReturnCompanion(clan, mobileParty, "Scout"))
        valueTupleList.Add(((SkillEffect.PerkRole) 9, 1f));
      if (this.IsRoleFree(mobileParty, (SkillEffect.PerkRole) 7) && !this.ReturnCompanion(clan, mobileParty, "Surgeon"))
        valueTupleList.Add(((SkillEffect.PerkRole) 7, 1f));
      if (this.IsRoleFree(mobileParty, (SkillEffect.PerkRole) 8) && !this.ReturnCompanion(clan, mobileParty, "Engineer"))
        valueTupleList.Add(((SkillEffect.PerkRole) 8, 1f));
      if (this.IsRoleFree(mobileParty, (SkillEffect.PerkRole) 10) && !this.ReturnCompanion(clan, mobileParty, "Quartermaster"))
        valueTupleList.Add(((SkillEffect.PerkRole) 10, 1f));
      if (valueTupleList.Count == 0)
        return;
      SkillEffect.PerkRole perkRole = MBRandom.ChooseWeighted<SkillEffect.PerkRole>((IReadOnlyList<(SkillEffect.PerkRole, float)>) valueTupleList);
      CharacterObject adequateTemplate = this.GetAdequateTemplate(new Dictionary<SkillEffect.PerkRole, List<TraitObject>>()
      {
        {
          (SkillEffect.PerkRole) 9,
          new List<TraitObject>() { DefaultTraits.Honor }
        },
        {
          (SkillEffect.PerkRole) 7,
          new List<TraitObject>() { DefaultTraits.Mercy }
        },
        {
          (SkillEffect.PerkRole) 8,
          new List<TraitObject>() { DefaultTraits.Generosity }
        },
        {
          (SkillEffect.PerkRole) 10,
          new List<TraitObject>() { DefaultTraits.Calculating }
        }
      }[perkRole], clan.Culture);
      if (adequateTemplate == null)
        return;
      Equipment equipmentIfPossible = this.GetEquipmentIfPossible(clan, false);
      if (equipmentIfPossible == null)
        return;
      Hero hero = this.FindExistingCompanions();
      if (hero == null)
      {
        hero = HeroCreator.CreateSpecialHero(adequateTemplate, (Settlement) null, (Clan) null, (Clan) null, Campaign.Current.Models.AgeModel.HeroComesOfAge + 5 + MBRandom.RandomInt(27));
        EquipmentHelper.AssignHeroEquipmentFromEquipment(hero, equipmentIfPossible);
      }
      hero.CompanionOf = clan;
      if (GlobalSettings<MCMSettings>.Instance.EnableLog)
        InformationManager.DisplayMessage(new InformationMessage(string.Format("{0} 招募了{1}!", (object) clan.Name, (object) hero.Name)));
      string role = this.AssignToRole(mobileParty, perkRole, hero);
      if (role.Length <= 0)
        return;
      HeroManager.AddCompanion(((MBObjectBase) clan).StringId, ((MBObjectBase) hero).StringId, role);
    }

    private bool ReturnCompanion(Clan clan, MobileParty mobileParty, string roleId)
    {
      bool flag = false;
      if (HeroManager.HasRoleCompanion(((MBObjectBase) clan).StringId, roleId))
      {
        string heroId = HeroManager.GetRoleCompanionId(((MBObjectBase) clan).StringId, roleId);
        Hero hero = ((List<Hero>) Hero.AllAliveHeroes).Find((Predicate<Hero>) (h => ((MBObjectBase) h).StringId == heroId));
        if (hero != null && !hero.IsPrisoner && hero.PartyBelongedTo == null)
          TeleportHeroAction.ApplyImmediateTeleportToParty(hero, mobileParty);
        if (hero != null)
          flag = true;
      }
      return flag;
    }

    private string AssignToRole(MobileParty party, SkillEffect.PerkRole role, Hero hero)
    {
      AddHeroToPartyAction.Apply(hero, party, false);
      string role1 = "";
      switch (role - 7)
      {
        case 0:
          party.SetPartySurgeon(hero);
          role1 = "Surgeon";
          break;
        case 1:
          party.SetPartyEngineer(hero);
          role1 = "Engineer";
          break;
        case 2:
          party.SetPartyScout(hero);
          role1 = "Scout";
          break;
        case 3:
          party.SetPartyQuartermaster(hero);
          role1 = "Quartermaster";
          break;
      }
      return role1;
    }

    private Equipment GetEquipmentIfPossible(Clan clan, bool noble, Town town = null)
    {
      IEnumerable<MBEquipmentRoster> source = ((IEnumerable<MBEquipmentRoster>) MBObjectManager.Instance.GetObjectTypeList<MBEquipmentRoster>()).Where<MBEquipmentRoster>((Func<MBEquipmentRoster, bool>) (e => e.EquipmentCulture == clan.Culture));
      if (source == null)
        return (Equipment) null;
      MBEquipmentRoster randomElement = Extensions.GetRandomElement<MBEquipmentRoster>((IReadOnlyList<MBEquipmentRoster>) source.Where<MBEquipmentRoster>((Func<MBEquipmentRoster, bool>) (e => e.EquipmentCulture == clan.Culture)).ToList<MBEquipmentRoster>());
      if (randomElement == null)
        return (Equipment) null;
      if (town == null)
        town = ((IEnumerable<Town>) Town.AllTowns).FirstOrDefault<Town>((Func<Town, bool>) (x => x.Culture == clan.Culture));
      if (town == null)
        return (Equipment) null;
      float price = this.GetPrice(((SettlementComponent) town).Settlement, randomElement);
      return (double) clan.Leader.Gold >= (double) price * 2.0 ? Extensions.GetRandomElement<Equipment>(randomElement.AllEquipments) : (Equipment) null;
    }

    private float GetPrice(Settlement settlement, MBEquipmentRoster roster)
    {
      if (settlement == null)
        return 0.0f;
      float num = 0.0f;
      Equipment randomElement = Extensions.GetRandomElement<Equipment>(roster.AllEquipments);
      for (int index = 0; index < 12; ++index)
      {
        EquipmentElement equipmentElement = randomElement[index];
        if (!((EquipmentElement) ref equipmentElement).IsEmpty && ((EquipmentElement) ref equipmentElement).Item != null)
          num += (float) settlement.Town.MarketData.GetPrice(((EquipmentElement) ref equipmentElement).Item, (MobileParty) null, false, (PartyBase) null);
      }
      return num * 0.5f;
    }

    private CharacterObject GetAdequateTemplate(List<TraitObject> traits, CultureObject culture)
    {
      CharacterObject adequateTemplate = (CharacterObject) null;
      foreach (TraitObject trait in traits)
      {
        TraitObject traitObject = trait;
        if (adequateTemplate == null)
          adequateTemplate = Extensions.GetRandomElementInefficiently<CharacterObject>(((IEnumerable<CharacterObject>) culture.NotableAndWandererTemplates).Where<CharacterObject>((Func<CharacterObject, bool>) (x => x.Occupation == 16 && x.GetTraitLevel(traitObject) >= 1)));
        else
          break;
      }
      return adequateTemplate;
    }

    private bool IsRoleFree(MobileParty party, SkillEffect.PerkRole role)
    {
      SkillEffect.PerkRole perkRole = role;
      if (perkRole == null)
        return true;
      switch (perkRole - 7)
      {
        case 0:
          return party.EffectiveSurgeon == party.LeaderHero || party.EffectiveSurgeon == null;
        case 1:
          return party.EffectiveEngineer == party.LeaderHero || party.EffectiveEngineer == null;
        case 2:
          return party.EffectiveScout == party.LeaderHero || party.EffectiveScout == null;
        case 3:
          return party.EffectiveQuartermaster == party.LeaderHero || party.EffectiveQuartermaster == null;
        default:
          return true;
      }
    }
  }
}
