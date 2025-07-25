// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.Barterables.JoinKingdomAsClanBarterable
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem.Barterables
{
  public class JoinKingdomAsClanBarterable : Barterable
  {
    public readonly Kingdom TargetKingdom;
    public readonly bool IsDefecting;

    public override string StringID => "join_faction_barterable";

    public JoinKingdomAsClanBarterable(Hero owner, Kingdom targetKingdom, bool isDefecting = false)
      : base(owner, (PartyBase) null)
    {
      this.TargetKingdom = targetKingdom;
      this.IsDefecting = isDefecting;
    }

    public override TextObject Name
    {
      get
      {
        TextObject name = new TextObject("{=8Az4q2wp}Join {FACTION}");
        name.SetTextVariable("FACTION", this.TargetKingdom.Name);
        return name;
      }
    }

    public override int GetUnitValueForFaction(IFaction factionForEvaluation)
    {
      float unitValueForFaction = -1000000f;
      if (factionForEvaluation == this.OriginalOwner.Clan)
      {
        unitValueForFaction = Campaign.Current.Models.DiplomacyModel.GetScoreOfClanToJoinKingdom(this.OriginalOwner.Clan, this.TargetKingdom);
        if (this.OriginalOwner.Clan.Kingdom != null)
        {
          int valueForFaction = new LeaveKingdomAsClanBarterable(this.OriginalOwner, this.OriginalParty).GetValueForFaction(factionForEvaluation);
          if (!this.TargetKingdom.IsAtWarWith((IFaction) this.OriginalOwner.Clan.Kingdom))
          {
            float settlementValueForFaction = this.OriginalOwner.Clan.CalculateTotalSettlementValueForFaction(this.OriginalOwner.Clan.Kingdom);
            unitValueForFaction -= settlementValueForFaction * (this.TargetKingdom.Leader == Hero.MainHero ? 0.5f : 1f);
          }
          unitValueForFaction += (float) valueForFaction;
        }
      }
      else if (factionForEvaluation.MapFaction == this.TargetKingdom)
        unitValueForFaction = Campaign.Current.Models.DiplomacyModel.GetScoreOfKingdomToGetClan(this.TargetKingdom, this.OriginalOwner.Clan);
      if (this.TargetKingdom == Clan.PlayerClan.Kingdom && Hero.MainHero.GetPerkValue(DefaultPerks.Trade.SilverTongue))
        unitValueForFaction += unitValueForFaction * DefaultPerks.Trade.SilverTongue.PrimaryBonus;
      return (int) unitValueForFaction;
    }

    public override void CheckBarterLink(Barterable linkedBarterable)
    {
    }

    public override bool IsCompatible(Barterable barterable)
    {
      return !(barterable is LeaveKingdomAsClanBarterable asClanBarterable) || asClanBarterable.OriginalOwner.MapFaction != this.TargetKingdom;
    }

    public override ImageIdentifier GetVisualIdentifier()
    {
      return new ImageIdentifier(BannerCode.CreateFrom(this.TargetKingdom.Banner));
    }

    public override string GetEncyclopediaLink() => this.TargetKingdom.EncyclopediaLink;

    public override void Apply()
    {
      if (this.TargetKingdom != null && this.TargetKingdom != null && this.TargetKingdom.Leader == Hero.MainHero)
      {
        int valueForFaction = this.GetValueForFaction((IFaction) this.OriginalOwner.Clan);
        ChangeRelationAction.ApplyPlayerRelation(this.OriginalOwner.Clan.Leader, valueForFaction < 0 ? 20 - valueForFaction / 20000 : 20);
        if (this.OriginalOwner.Clan.MapFaction != null)
          ChangeRelationAction.ApplyRelationChangeBetweenHeroes(this.OriginalOwner.Clan.Leader, this.OriginalOwner.Clan.MapFaction.Leader, -100);
      }
      if (PlayerEncounter.Current != null && PlayerEncounter.Current.PlayerSide == BattleSideEnum.Defender && PlayerSiege.PlayerSiegeEvent != null && PlayerSiege.PlayerSide == BattleSideEnum.Attacker)
        PlayerEncounter.Current.SetPlayerSiegeInterruptedByEnemyDefection();
      if (this.OriginalOwner.Clan.Kingdom != null)
      {
        if (this.OriginalOwner.Clan.Kingdom != null && this.TargetKingdom != null && this.OriginalOwner.Clan.Kingdom.IsAtWarWith((IFaction) this.TargetKingdom))
          ChangeKingdomAction.ApplyByLeaveWithRebellionAgainstKingdom(this.OriginalOwner.Clan);
        else
          ChangeKingdomAction.ApplyByLeaveKingdom(this.OriginalOwner.Clan);
      }
      if (this.IsDefecting)
        ChangeKingdomAction.ApplyByJoinToKingdomByDefection(this.OriginalOwner.Clan, this.TargetKingdom);
      else
        ChangeKingdomAction.ApplyByJoinToKingdom(this.OriginalOwner.Clan, this.TargetKingdom);
    }

    internal static void AutoGeneratedStaticCollectObjectsJoinKingdomAsClanBarterable(
      object o,
      List<object> collectedObjects)
    {
      ((Barterable) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
    }
  }
}
