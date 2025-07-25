// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PrisonerCaptureCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PrisonerCaptureCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.OnClanChangedKingdomEvent.AddNonSerializedListener((object) this, new Action<Clan, Kingdom, Kingdom, ChangeKingdomAction.ChangeKingdomActionDetail, bool>(this.OnClanChangedKingdom));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    private void OnClanChangedKingdom(
      Clan clan,
      Kingdom oldKingdom,
      Kingdom newKingdom,
      ChangeKingdomAction.ChangeKingdomActionDetail detail,
      bool showNotification)
    {
      foreach (Settlement settlement in clan.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsFortification)))
        this.HandleSettlementHeroes(settlement);
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail detail)
    {
      foreach (Settlement settlement in faction1.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsFortification)))
        this.HandleSettlementHeroes(settlement);
      foreach (Settlement settlement in faction2.Settlements.Where<Settlement>((Func<Settlement, bool>) (x => x.IsFortification)))
        this.HandleSettlementHeroes(settlement);
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      if (!settlement.IsFortification)
        return;
      this.HandleSettlementHeroes(settlement);
    }

    private void HandleSettlementHeroes(Settlement settlement)
    {
      foreach (Hero prisonerCharacter in settlement.HeroesWithoutParty.Where<Hero>(new Func<Hero, bool>(this.SettlementHeroCaptureCommonCondition)).ToList<Hero>())
        TakePrisonerAction.Apply(prisonerCharacter.CurrentSettlement.Party, prisonerCharacter);
      foreach (MobileParty mobileParty in settlement.Parties.Where<MobileParty>((Func<MobileParty, bool>) (x => x.IsLordParty && (x.Army == null || x.Army != null && x.Army.LeaderParty == x && !x.Army.Parties.Contains(MobileParty.MainParty)) && x.MapEvent == null && this.SettlementHeroCaptureCommonCondition(x.LeaderHero))).ToList<MobileParty>())
      {
        LeaveSettlementAction.ApplyForParty(mobileParty);
        SetPartyAiAction.GetActionForPatrollingAroundSettlement(mobileParty, settlement);
      }
    }

    private bool SettlementHeroCaptureCommonCondition(Hero hero)
    {
      return hero != null && hero != Hero.MainHero && !hero.IsWanderer && !hero.IsNotable && hero.HeroState != Hero.CharacterStates.Prisoner && hero.HeroState != Hero.CharacterStates.Dead && hero.MapFaction != null && hero.CurrentSettlement != null && hero.MapFaction.IsAtWarWith(hero.CurrentSettlement.MapFaction);
    }
  }
}
