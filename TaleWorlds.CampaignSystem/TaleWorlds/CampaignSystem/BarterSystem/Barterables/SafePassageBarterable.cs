// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.Barterables.SafePassageBarterable
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem.Barterables
{
  public class SafePassageBarterable : Barterable
  {
    private readonly Hero _otherHero;
    private readonly PartyBase _otherParty;

    public override string StringID => "safe_passage_barterable";

    public override TextObject Name
    {
      get
      {
        TextObject name;
        if (this._otherHero != null)
        {
          StringHelpers.SetCharacterProperties("HERO", this._otherHero.CharacterObject);
          name = new TextObject("{=BJbbahYe}Let {HERO.NAME} Go");
        }
        else
        {
          name = new TextObject("{=QKNWsJRb}Let {PARTY} Go");
          name.SetTextVariable("PARTY", this._otherParty.Name);
        }
        return name;
      }
    }

    public SafePassageBarterable(
      Hero originalOwner,
      Hero otherHero,
      PartyBase ownerParty,
      PartyBase otherParty)
      : base(originalOwner, ownerParty)
    {
      this._otherHero = otherHero;
      this._otherParty = otherParty;
    }

    public override int GetUnitValueForFaction(IFaction faction)
    {
      float num1 = MathF.Clamp(PlayerEncounter.Current.GetPlayerStrengthRatioInEncounter(), 0.0f, 1f);
      int num2 = (int) MathF.Clamp((float) (Hero.MainHero.Gold + PartyBase.MainParty.ItemRoster.Sum<ItemRosterElement>((Func<ItemRosterElement, int>) (t => t.EquipmentElement.Item.Value * t.Amount))), 0.0f, (float) int.MaxValue);
      float num3 = (double) num1 < 1.0 ? (float) (0.05000000074505806 + (1.0 - (double) num1) * 0.20000000298023224) : 0.1f;
      float num4 = faction.Leader == null ? 1f : MathF.Clamp((float) ((50.0 + (double) faction.Leader.GetRelation(this._otherHero)) / 50.0), 0.05f, 1.1f);
      if (!PlayerEncounter.EncounteredParty.IsMobile || !PlayerEncounter.EncounteredParty.MobileParty.IsBandit)
      {
        num2 += 3000 + (int) ((double) Hero.MainHero.Clan.Renown * 50.0);
        num3 *= 1.5f;
      }
      if (MobileParty.MainParty.MapEvent != null || MobileParty.MainParty.SiegeEvent != null)
        num3 *= 1.2f;
      int num5 = (int) ((double) num2 * (double) num3 + 1000.0);
      MobileParty mobileParty = PlayerEncounter.EncounteredParty.MobileParty;
      int num6;
      if ((mobileParty != null ? (mobileParty.IsBandit ? 1 : 0) : 0) != 0)
      {
        num6 = num5 / 8;
        if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.SweetTalker))
          num6 += MathF.Round((float) num6 * DefaultPerks.Roguery.SweetTalker.PrimaryBonus);
      }
      else
        num6 = num5 / 2 + (int) (0.30000001192092896 * (double) num3 * (double) Campaign.Current.Models.ValuationModel.GetMilitaryValueOfParty(this._otherParty.MobileParty)) + (int) (0.30000001192092896 * (double) num3 * (double) Campaign.Current.Models.ValuationModel.GetValueOfHero(this._otherHero));
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Trade.MarketDealer))
        num6 += MathF.Round((float) num6 * DefaultPerks.Trade.MarketDealer.PrimaryBonus);
      if (faction == this.OriginalOwner?.Clan || faction == this.OriginalOwner?.MapFaction || faction == this.OriginalParty.MapFaction)
        return -(int) ((double) num6 / ((double) num4 * (double) num4));
      return faction == this._otherHero?.Clan || faction == this._otherHero?.MapFaction || faction == this._otherParty.MapFaction ? (int) (0.89999997615814209 * (double) num6) : num6;
    }

    public override bool IsCompatible(Barterable barterable) => true;

    public override ImageIdentifier GetVisualIdentifier() => (ImageIdentifier) null;

    public override void Apply()
    {
      if (PlayerEncounter.Current != null)
      {
        List<MobileParty> partiesToJoinPlayerSide = new List<MobileParty>();
        List<MobileParty> partiesToJoinEnemySide = new List<MobileParty>()
        {
          this.OriginalParty.MobileParty
        };
        PlayerEncounter.Current.FindAllNpcPartiesWhoWillJoinEvent(ref partiesToJoinPlayerSide, ref partiesToJoinEnemySide);
        if (this.OriginalParty?.SiegeEvent != null && this.OriginalParty.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(this.OriginalParty, MapEvent.BattleTypes.Siege) && this._otherParty != null && this.OriginalParty.SiegeEvent.BesiegedSettlement.HasInvolvedPartyForEventType(this._otherParty, MapEvent.BattleTypes.Siege))
        {
          if (this.OriginalParty.SiegeEvent.BesiegedSettlement.MapFaction == Hero.MainHero.MapFaction)
            GainKingdomInfluenceAction.ApplyForSiegeSafePassageBarter(MobileParty.MainParty, -10f);
          Campaign.Current.GameMenuManager.SetNextMenu("menu_siege_safe_passage_accepted");
          PlayerSiege.ClosePlayerSiege();
          foreach (MobileParty mobileParty in partiesToJoinEnemySide)
            mobileParty.Ai.SetDoNotAttackMainParty(32);
        }
        else
        {
          Settlement settlement = Settlement.All.Where<Settlement>((Func<Settlement, bool>) (t => this.OriginalParty.MobileParty.IsBandit == t.IsHideout && !this.OriginalParty.MobileParty.MapFaction.IsAtWarWith(t.MapFaction))).ToList<Settlement>().OrderBy<Settlement, float>((Func<Settlement, float>) (t => t.GatePosition.DistanceSquared(this.OriginalParty.Position2D))).First<Settlement>();
          foreach (MobileParty mobileParty in partiesToJoinEnemySide)
          {
            mobileParty.Ai.SetDoNotAttackMainParty(32);
            mobileParty.Ai.SetMoveModeHold();
            mobileParty.IgnoreForHours(32f);
            mobileParty.Ai.SetInitiative(0.0f, 0.8f, 8f);
            if (settlement != null)
              mobileParty.Ai.SetMovePatrolAroundSettlement(settlement);
          }
          PlayerEncounter.LeaveEncounter = true;
          if (MobileParty.MainParty.SiegeEvent != null && MobileParty.MainParty.SiegeEvent.BesiegerCamp.HasInvolvedPartyForEventType(PartyBase.MainParty, MapEvent.BattleTypes.Siege))
            MobileParty.MainParty.BesiegerCamp = (BesiegerCamp) null;
          if (this.OriginalParty?.MobileParty?.Ai.AiBehaviorPartyBase == null || this.OriginalParty == PartyBase.MainParty)
            return;
          this.OriginalParty.MobileParty.Ai.SetMoveModeHold();
          if (this.OriginalParty.MobileParty.Army == null || MobileParty.MainParty.Army == this.OriginalParty.MobileParty.Army)
            return;
          this.OriginalParty.MobileParty.Army.LeaderParty.Ai.SetMoveModeHold();
        }
      }
      else
        Debug.FailedAssert("Can not find player encounter for safe passage barterable", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\BarterSystem\\Barterables\\SafePassageBarterable.cs", nameof (Apply), 189);
    }

    internal static void AutoGeneratedStaticCollectObjectsSafePassageBarterable(
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
