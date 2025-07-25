// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BanditsCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class BanditsCampaignBehavior : CampaignBehaviorBase
  {
    private const float BanditSpawnRadius = 45f;
    private const float BanditStartGoldPerBandit = 10f;
    private const float BanditLongTermGoldPerBandit = 50f;
    private const int HideoutInfestCooldownAfterFightAsHours = 36;
    private bool _hideoutsAndBanditsAreInitialized;
    private Dictionary<MobileParty, BanditsCampaignBehavior.PlayerInteraction> _interactedBandits = new Dictionary<MobileParty, BanditsCampaignBehavior.PlayerInteraction>();
    private static int _goldAmount;

    private int IdealBanditPartyCount
    {
      get
      {
        return this._numberOfMaxHideoutsAtEachBanditFaction * (this._numberOfMaxBanditPartiesAroundEachHideout + this._numberOfMaximumBanditPartiesInEachHideout) + this._numberOfMaximumLooterParties;
      }
    }

    private int _numberOfMaximumLooterParties
    {
      get => Campaign.Current.Models.BanditDensityModel.NumberOfMaximumLooterParties;
    }

    private float _radiusAroundPlayerPartySquared
    {
      get
      {
        return (float) ((double) MobileParty.MainParty.SeeingRange * (double) MobileParty.MainParty.SeeingRange * 1.25);
      }
    }

    private float _numberOfMinimumBanditPartiesInAHideoutToInfestIt
    {
      get
      {
        return (float) Campaign.Current.Models.BanditDensityModel.NumberOfMinimumBanditPartiesInAHideoutToInfestIt;
      }
    }

    private int _numberOfMaxBanditPartiesAroundEachHideout
    {
      get
      {
        return Campaign.Current.Models.BanditDensityModel.NumberOfMaximumBanditPartiesAroundEachHideout;
      }
    }

    private int _numberOfMaxHideoutsAtEachBanditFaction
    {
      get => Campaign.Current.Models.BanditDensityModel.NumberOfMaximumHideoutsAtEachBanditFaction;
    }

    private int _numberOfInitialHideoutsAtEachBanditFaction
    {
      get => Campaign.Current.Models.BanditDensityModel.NumberOfInitialHideoutsAtEachBanditFaction;
    }

    private int _numberOfMaximumBanditPartiesInEachHideout
    {
      get => Campaign.Current.Models.BanditDensityModel.NumberOfMaximumBanditPartiesInEachHideout;
    }

    public override void RegisterEvents()
    {
      CampaignEvents.SettlementEntered.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, Hero>(this.OnSettlementEntered));
      CampaignEvents.WeeklyTickEvent.AddNonSerializedListener((object) this, new Action(this.WeeklyTick));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.OnSessionLaunchedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnSessionLaunched));
      CampaignEvents.OnNewGameCreatedEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreated));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnPartyDestroyed));
    }

    private void OnNewGameCreated(CampaignGameStarter starter)
    {
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<Dictionary<MobileParty, BanditsCampaignBehavior.PlayerInteraction>>("_interactedBandits", ref this._interactedBandits);
      dataStore.SyncData<bool>("_hideoutsAndBanditsAreInited", ref this._hideoutsAndBanditsAreInitialized);
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int i)
    {
      if (i == 0)
      {
        this.MakeBanditFactionsEnemyToKingdomFactions();
        this._hideoutsAndBanditsAreInitialized = false;
      }
      if (i < 10)
      {
        if (this._numberOfMaxHideoutsAtEachBanditFaction <= 0)
          return;
        int num1 = Clan.BanditFactions.Count<Clan>((Func<Clan, bool>) (x => !BanditsCampaignBehavior.IsLooterFaction((IFaction) x)));
        int num2 = num1 / 10 + (num1 % 10 > i ? 1 : 0);
        int num3 = num1 / 10 * i;
        for (int index = 0; index < i; ++index)
          num3 += num1 % 10 > index ? 1 : 0;
        for (int index = 0; index < num2; ++index)
          this.SpawnHideoutsAndBanditsPartiallyOnNewGame(Clan.BanditFactions.ElementAt<Clan>(num3 + index));
      }
      else
      {
        int num4 = i - 10;
        int banditPartyCount = this.IdealBanditPartyCount;
        int num5 = banditPartyCount / 90 + (banditPartyCount % 90 > num4 ? 1 : 0);
        int num6 = banditPartyCount / 90 * num4;
        for (int index = 0; index < num4; ++index)
          num6 += banditPartyCount % 90 > index ? 1 : 0;
        for (int index = 0; index < num5; ++index)
          this.SpawnBanditOrLooterPartiesAroundAHideoutOrSettlement(num6 + index);
      }
    }

    private void SpawnHideoutsAndBanditsPartiallyOnNewGame(Clan banditClan)
    {
      if (BanditsCampaignBehavior.IsLooterFaction((IFaction) banditClan))
        return;
      for (int index = 0; index < this._numberOfInitialHideoutsAtEachBanditFaction; ++index)
        this.FillANewHideoutWithBandits(banditClan);
    }

    private void MakeBanditFactionsEnemyToKingdomFactions()
    {
      foreach (Clan banditFaction in Clan.BanditFactions)
      {
        if (banditFaction.IsBanditFaction && !banditFaction.IsMinorFaction)
        {
          foreach (IFaction faction1 in (List<Kingdom>) Kingdom.All)
            FactionManager.DeclareWar(faction1, (IFaction) banditFaction);
          FactionManager.DeclareWar((IFaction) Hero.MainHero.Clan, (IFaction) banditFaction);
        }
      }
    }

    private void OnPartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      if (!this._interactedBandits.ContainsKey(mobileParty))
        return;
      this._interactedBandits.Remove(mobileParty);
    }

    private void SetPlayerInteraction(
      MobileParty mobileParty,
      BanditsCampaignBehavior.PlayerInteraction interaction)
    {
      if (this._interactedBandits.ContainsKey(mobileParty))
        this._interactedBandits[mobileParty] = interaction;
      else
        this._interactedBandits.Add(mobileParty, interaction);
    }

    private BanditsCampaignBehavior.PlayerInteraction GetPlayerInteraction(MobileParty mobileParty)
    {
      BanditsCampaignBehavior.PlayerInteraction playerInteraction;
      return this._interactedBandits.TryGetValue(mobileParty, out playerInteraction) ? playerInteraction : BanditsCampaignBehavior.PlayerInteraction.None;
    }

    public void OnSettlementEntered(MobileParty mobileParty, Settlement settlement, Hero hero)
    {
      this.CheckForSpawningBanditBoss(settlement, mobileParty);
      if (!Campaign.Current.GameStarted || mobileParty == null || !mobileParty.IsBandit || !settlement.IsHideout)
        return;
      if (!settlement.Hideout.IsSpotted && settlement.Hideout.IsInfested)
      {
        float lengthSquared = (MobileParty.MainParty.Position2D - settlement.Position2D).LengthSquared;
        double seeingRange = (double) MobileParty.MainParty.SeeingRange;
        if (seeingRange * seeingRange / (double) lengthSquared / (double) Campaign.Current.Models.MapVisibilityModel.GetPartySpottingDifficulty(MobileParty.MainParty, mobileParty) >= 1.0)
        {
          settlement.Hideout.IsSpotted = true;
          settlement.Party.UpdateVisibilityAndInspected();
          CampaignEventDispatcher.Instance.OnHideoutSpotted(MobileParty.MainParty.Party, settlement.Party);
        }
      }
      int num1 = 0;
      foreach (ItemRosterElement itemRosterElement in mobileParty.ItemRoster)
      {
        EquipmentElement equipmentElement = itemRosterElement.EquipmentElement;
        int num2;
        if (!equipmentElement.Item.IsFood)
        {
          num2 = 0;
        }
        else
        {
          double totalManCount = (double) mobileParty.MemberRoster.TotalManCount;
          double num3 = 3.0 + 6.0 * (double) MBRandom.RandomFloat;
          equipmentElement = itemRosterElement.EquipmentElement;
          double num4 = (double) equipmentElement.Item.Value;
          double num5 = num3 / num4;
          num2 = MBRandom.RoundRandomized((float) (totalManCount * num5));
        }
        int num6 = num2;
        if (itemRosterElement.Amount > num6)
        {
          int num7 = itemRosterElement.Amount - num6;
          int num8 = num1;
          int num9 = num7;
          equipmentElement = itemRosterElement.EquipmentElement;
          int num10 = equipmentElement.Item.Value;
          int num11 = num9 * num10;
          num1 = num8 + num11;
        }
      }
      if (num1 <= 0)
        return;
      if (mobileParty.IsPartyTradeActive)
        mobileParty.PartyTradeGold += (int) (0.25 * (double) num1);
      settlement.SettlementComponent.ChangeGold((int) (0.25 * (double) num1));
    }

    private void CheckForSpawningBanditBoss(Settlement settlement, MobileParty mobileParty)
    {
      if (!settlement.IsHideout || !settlement.Hideout.IsSpotted || !settlement.Parties.Any<MobileParty>((Func<MobileParty, bool>) (x => x.IsBandit || x.IsBanditBossParty)))
        return;
      CultureObject culture = settlement.Culture;
      MobileParty mobileParty1 = settlement.Parties.FirstOrDefault<MobileParty>((Func<MobileParty, bool>) (x => x.IsBanditBossParty));
      if (mobileParty1 == null)
      {
        this.AddBossParty(settlement, culture);
      }
      else
      {
        if (mobileParty1.MemberRoster.Contains(culture.BanditBoss))
          return;
        mobileParty1.MemberRoster.AddToCounts(culture.BanditBoss, 1);
      }
    }

    private void AddBossParty(Settlement settlement, CultureObject culture)
    {
      PartyTemplateObject bossPartyTemplate = culture.BanditBossPartyTemplate;
      if (bossPartyTemplate == null)
        return;
      this.AddBanditToHideout(settlement.Hideout, bossPartyTemplate, true).Ai.DisableAi();
    }

    public void DailyTick()
    {
      foreach (MobileParty allBanditParty in (List<MobileParty>) MobileParty.AllBanditParties)
      {
        if (allBanditParty.IsPartyTradeActive)
        {
          allBanditParty.PartyTradeGold = (int) ((double) allBanditParty.PartyTradeGold * 0.95 + 50.0 * (double) allBanditParty.Party.MemberRoster.TotalManCount * 0.05000000074505806);
          if ((double) MBRandom.RandomFloat < 0.029999999329447746 && allBanditParty.MapEvent != null)
          {
            foreach (ItemObject itemObject in (List<ItemObject>) Items.All)
            {
              if (itemObject.IsFood)
              {
                int num = BanditsCampaignBehavior.IsLooterFaction(allBanditParty.MapFaction) ? 8 : 16;
                int number = MBRandom.RoundRandomized((float) allBanditParty.MemberRoster.TotalManCount * (1f / (float) itemObject.Value) * (float) num * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat);
                if (number > 0)
                  allBanditParty.ItemRoster.AddToCounts(itemObject, number);
              }
            }
          }
        }
      }
    }

    private void TryToSpawnHideoutAndBanditHourly()
    {
      this._hideoutsAndBanditsAreInitialized = true;
      int num = 0;
      foreach (Clan banditFaction in Clan.BanditFactions)
      {
        if (!BanditsCampaignBehavior.IsLooterFaction((IFaction) banditFaction))
        {
          for (int index = 0; index < this._numberOfInitialHideoutsAtEachBanditFaction; ++index)
          {
            this.FillANewHideoutWithBandits(banditFaction);
            ++num;
          }
        }
      }
      int numberOfBanditsWillBeSpawned = (int) (0.5 * (double) (this._numberOfMaxBanditPartiesAroundEachHideout * num + this._numberOfMaximumLooterParties));
      if (numberOfBanditsWillBeSpawned <= 0)
        return;
      this.SpawnBanditOrLooterPartiesAroundAHideoutOrSettlement(numberOfBanditsWillBeSpawned);
    }

    public void HourlyTick()
    {
      if (!this._hideoutsAndBanditsAreInitialized && this._numberOfMaxHideoutsAtEachBanditFaction > 0)
        this.TryToSpawnHideoutAndBanditHourly();
      if (!Campaign.Current.IsNight)
        return;
      int num = 0;
      foreach (Clan banditFaction in Clan.BanditFactions)
        num += banditFaction.WarPartyComponents.Count;
      int numberOfBanditsWillBeSpawned = MBRandom.RoundRandomized((float) (this.IdealBanditPartyCount - num) * 0.01f);
      if (numberOfBanditsWillBeSpawned <= 0)
        return;
      this.SpawnBanditOrLooterPartiesAroundAHideoutOrSettlement(numberOfBanditsWillBeSpawned);
    }

    public void WeeklyTick() => this.AddNewHideouts();

    public void OnSessionLaunched(CampaignGameStarter campaignGameStarter)
    {
      this.AddDialogs(campaignGameStarter);
    }

    private void AddNewHideouts()
    {
      foreach (Clan banditFaction in Clan.BanditFactions)
      {
        if (!BanditsCampaignBehavior.IsLooterFaction((IFaction) banditFaction))
        {
          int num1 = 0;
          foreach (Hideout allHideout in (List<Hideout>) Campaign.Current.AllHideouts)
          {
            if (allHideout.IsInfested && allHideout.Settlement.Culture == banditFaction.Culture)
              ++num1;
          }
          float num2 = 0.0f;
          if ((double) num1 < (double) this._numberOfMaxHideoutsAtEachBanditFaction * 0.5)
          {
            float num3 = (float) (1.0 - (double) num1 / (double) MathF.Ceiling((float) this._numberOfMaxHideoutsAtEachBanditFaction * 0.5f));
            num2 = MathF.Max(0.0f, num3 * num3);
          }
          if ((double) MBRandom.RandomFloat < (double) num2)
            this.FillANewHideoutWithBandits(banditFaction);
        }
      }
    }

    private void FillANewHideoutWithBandits(Clan faction)
    {
      Hideout hideoutComponent = this.SelectARandomHideout(faction, false, true, true);
      if (hideoutComponent == null)
        return;
      for (int index = 0; (double) index < (double) this._numberOfMinimumBanditPartiesInAHideoutToInfestIt; ++index)
        this.AddBanditToHideout(hideoutComponent);
    }

    public MobileParty AddBanditToHideout(
      Hideout hideoutComponent,
      PartyTemplateObject overridenPartyTemplate = null,
      bool isBanditBossParty = false)
    {
      if (!hideoutComponent.Owner.Settlement.Culture.IsBandit)
        return (MobileParty) null;
      Clan clan = (Clan) null;
      foreach (Clan banditFaction in Clan.BanditFactions)
      {
        if (hideoutComponent.Owner.Settlement.Culture == banditFaction.Culture)
          clan = banditFaction;
      }
      PartyTemplateObject pt = overridenPartyTemplate ?? clan.DefaultPartyTemplate;
      MobileParty banditParty = BanditPartyComponent.CreateBanditParty(clan.StringId + "_1", clan, hideoutComponent, isBanditBossParty);
      banditParty.InitializeMobilePartyAtPosition(pt, hideoutComponent.Owner.Settlement.Position2D);
      this.InitBanditParty(banditParty, clan, hideoutComponent.Owner.Settlement);
      banditParty.Ai.SetMoveGoToSettlement(hideoutComponent.Owner.Settlement);
      banditParty.Ai.RecalculateShortTermAi();
      EnterSettlementAction.ApplyForParty(banditParty, hideoutComponent.Owner.Settlement);
      return banditParty;
    }

    private Hideout SelectARandomHideout(
      Clan faction,
      bool isInfestedHideoutNeeded,
      bool sameFactionIsNeeded,
      bool selectingFurtherToOthersNeeded = false)
    {
      float num1 = (float) ((double) Campaign.AverageDistanceBetweenTwoFortifications * 0.33000001311302185 * (double) Campaign.AverageDistanceBetweenTwoFortifications * 0.33000001311302185);
      List<(Hideout, float)> weightList = new List<(Hideout, float)>();
      foreach (Hideout hideout1 in (List<Hideout>) Hideout.All)
      {
        if ((!sameFactionIsNeeded || hideout1.Settlement.Culture == faction.Culture) && (!isInfestedHideoutNeeded || hideout1.IsInfested))
        {
          int num2 = 1;
          if ((double) hideout1.Settlement.LastThreatTime.ElapsedHoursUntilNow > 36.0 && selectingFurtherToOthersNeeded)
          {
            float num3 = Campaign.MapDiagonalSquared;
            float num4 = Campaign.MapDiagonalSquared;
            foreach (Hideout hideout2 in (List<Hideout>) Hideout.All)
            {
              if (hideout1 != hideout2 && hideout2.IsInfested)
              {
                float num5 = hideout1.Settlement.Position2D.DistanceSquared(hideout2.Settlement.Position2D);
                if (hideout1.Settlement.Culture == hideout2.Settlement.Culture && (double) num5 < (double) num3)
                  num3 = num5;
                if ((double) num5 < (double) num4)
                  num4 = num5;
              }
            }
            num2 = (int) MathF.Max(1f, (float) ((double) num3 / (double) num1 + 5.0 * ((double) num4 / (double) num1)));
          }
          weightList.Add((hideout1, (float) num2));
        }
      }
      return MBRandom.ChooseWeighted<Hideout>((IReadOnlyList<(Hideout, float)>) weightList);
    }

    private void SpawnBanditOrLooterPartiesAroundAHideoutOrSettlement(
      int numberOfBanditsWillBeSpawned)
    {
      List<Clan> list = Clan.BanditFactions.ToList<Clan>();
      Dictionary<Clan, int> dictionary = new Dictionary<Clan, int>(list.Count);
      foreach (Clan key in list)
        dictionary.Add(key, 0);
      foreach (Hideout allHideout in (List<Hideout>) Campaign.Current.AllHideouts)
      {
        if (allHideout.IsInfested && allHideout.MapFaction is Clan)
          dictionary[allHideout.MapFaction as Clan]++;
      }
      int num1 = this._numberOfMaxBanditPartiesAroundEachHideout + this._numberOfMaximumBanditPartiesInEachHideout + 1;
      int num2 = this._numberOfMaxHideoutsAtEachBanditFaction * num1;
      int num3 = 0;
      foreach (Clan clan in list)
        num3 += clan.WarPartyComponents.Count;
      numberOfBanditsWillBeSpawned = MathF.Max(0, MathF.Min(numberOfBanditsWillBeSpawned, list.Count<Clan>((Func<Clan, bool>) (f => !BanditsCampaignBehavior.IsLooterFaction((IFaction) f))) * num2 + this._numberOfMaximumLooterParties - num3));
      numberOfBanditsWillBeSpawned = MathF.Ceiling((float) numberOfBanditsWillBeSpawned * 0.667f) + MBRandom.RandomInt(numberOfBanditsWillBeSpawned / 3);
      for (int index1 = 0; index1 < numberOfBanditsWillBeSpawned; ++index1)
      {
        Clan selectedFaction = (Clan) null;
        float num4 = 1f;
        for (int index2 = 0; index2 < list.Count; ++index2)
        {
          float num5 = 1f;
          if (BanditsCampaignBehavior.IsLooterFaction((IFaction) list[index2]))
          {
            num5 = (float) list[index2].WarPartyComponents.Count / (float) this._numberOfMaximumLooterParties;
          }
          else
          {
            int num6 = dictionary[list[index2]];
            if (num6 > 0)
              num5 = (float) list[index2].WarPartyComponents.Count / (float) (num6 * num1);
          }
          if ((double) num5 < 1.0 && (selectedFaction == null || (double) num5 < (double) num4))
          {
            selectedFaction = list[index2];
            num4 = num5;
          }
        }
        if (selectedFaction == null)
          break;
        this.SpawnAPartyInFaction(selectedFaction);
      }
    }

    private void SpawnAPartyInFaction(Clan selectedFaction)
    {
      PartyTemplateObject defaultPartyTemplate = selectedFaction.DefaultPartyTemplate;
      Settlement settlement = !BanditsCampaignBehavior.IsLooterFaction((IFaction) selectedFaction) ? this.SelectARandomHideout(selectedFaction, true, true)?.Owner.Settlement ?? this.SelectARandomHideout(selectedFaction, false, true)?.Owner.Settlement ?? this.SelectARandomHideout(selectedFaction, false, false)?.Owner.Settlement : this.SelectARandomSettlementForLooterParty();
      MobileParty banditParty = settlement.IsHideout ? BanditPartyComponent.CreateBanditParty(selectedFaction.StringId + "_1", selectedFaction, settlement.Hideout, false) : BanditPartyComponent.CreateLooterParty(selectedFaction.StringId + "_1", selectedFaction, settlement, false);
      if (settlement == null)
        return;
      float num = (float) (45.0 * (BanditsCampaignBehavior.IsLooterFaction((IFaction) selectedFaction) ? 1.5 : 1.0));
      banditParty.InitializeMobilePartyAroundPosition(defaultPartyTemplate, settlement.GatePosition, num);
      Vec2 centerPosition = banditParty.Position2D;
      float playerPartySquared = this._radiusAroundPlayerPartySquared;
      for (int index = 0; index < 15; ++index)
      {
        Vec2 pointAroundPosition = MobilePartyHelper.FindReachablePointAroundPosition(centerPosition, num);
        if ((double) pointAroundPosition.DistanceSquared(MobileParty.MainParty.Position2D) > (double) playerPartySquared)
        {
          centerPosition = pointAroundPosition;
          break;
        }
      }
      if (centerPosition != banditParty.Position2D)
        banditParty.Position2D = centerPosition;
      this.InitBanditParty(banditParty, selectedFaction, settlement);
      banditParty.Aggressiveness = (float) (1.0 - 0.20000000298023224 * (double) MBRandom.RandomFloat);
      banditParty.Ai.SetMovePatrolAroundPoint(settlement.IsTown ? settlement.GatePosition : settlement.Position2D);
    }

    private static bool IsLooterFaction(IFaction faction) => !faction.Culture.CanHaveSettlement;

    private Settlement SelectARandomSettlementForLooterParty()
    {
      int maxValue = 0;
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsTown || settlement.IsVillage)
        {
          int distanceScore = BanditsCampaignBehavior.CalculateDistanceScore(settlement.Position2D.DistanceSquared(MobileParty.MainParty.Position2D));
          maxValue += distanceScore;
        }
      }
      int num = MBRandom.RandomInt(maxValue);
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsTown || settlement.IsVillage)
        {
          int distanceScore = BanditsCampaignBehavior.CalculateDistanceScore(settlement.Position2D.DistanceSquared(MobileParty.MainParty.Position2D));
          num -= distanceScore;
          if (num <= 0)
            return settlement;
        }
      }
      return (Settlement) null;
    }

    private void InitBanditParty(MobileParty banditParty, Clan faction, Settlement homeSettlement)
    {
      banditParty.Party.SetVisualAsDirty();
      banditParty.ActualClan = faction;
      BanditsCampaignBehavior.CreatePartyTrade(banditParty);
      foreach (ItemObject itemObject in (List<ItemObject>) Items.All)
      {
        if (itemObject.IsFood)
        {
          int num = BanditsCampaignBehavior.IsLooterFaction(banditParty.MapFaction) ? 8 : 16;
          int number = MBRandom.RoundRandomized((float) banditParty.MemberRoster.TotalManCount * (1f / (float) itemObject.Value) * (float) num * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat * MBRandom.RandomFloat);
          if (number > 0)
            banditParty.ItemRoster.AddToCounts(itemObject, number);
        }
      }
    }

    private static void CreatePartyTrade(MobileParty banditParty)
    {
      int initialGold = (int) (10.0 * (double) banditParty.Party.MemberRoster.TotalManCount * (0.5 + 1.0 * (double) MBRandom.RandomFloat));
      banditParty.InitializePartyTrade(initialGold);
    }

    private static int CalculateDistanceScore(float distance)
    {
      int distanceScore = 2;
      if ((double) distance < 10000.0)
        distanceScore = 8;
      else if ((double) distance < 40000.0)
        distanceScore = 6;
      else if ((double) distance < 160000.0)
        distanceScore = 4;
      else if ((double) distance < 420000.0)
        distanceScore = 3;
      return distanceScore;
    }

    protected void AddDialogs(CampaignGameStarter campaignGameSystemStarter)
    {
      campaignGameSystemStarter.AddDialogLine("bandit_start_defender", "start", "bandit_defender", "{=!}{ROBBERY_THREAT}", new ConversationSentence.OnConditionDelegate(this.bandit_start_defender_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("bandit_start_defender_1", "bandit_defender", "bandit_start_fight", "{=DEnFOGhS}Fight me if you dare!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("bandit_start_defender_2", "bandit_defender", "barter_with_bandit_prebarter", "{=aQYMefHU}Maybe we can work out something.", new ConversationSentence.OnConditionDelegate(this.bandit_start_barter_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("bandit_start_fight", "bandit_start_fight", "close_window", "{=!}{ROBBERY_START_FIGHT}[ib:aggressive]", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_bandit_set_hostile_on_consequence));
      campaignGameSystemStarter.AddDialogLine("barter_with_bandit_prebarter", "barter_with_bandit_prebarter", "barter_with_bandit_screen", "{=!}{ROBBERY_PAY_AGREEMENT}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("barter_with_bandit_screen", "barter_with_bandit_screen", "barter_with_bandit_postbarter", "{=!}Barter screen goes here", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.bandit_start_barter_consequence));
      campaignGameSystemStarter.AddDialogLine("barter_with_bandit_postbarter_1", "barter_with_bandit_postbarter", "close_window", "{=!}{ROBBERY_CONCLUSION}", new ConversationSentence.OnConditionDelegate(this.bandit_barter_successful_condition), new ConversationSentence.OnConsequenceDelegate(this.bandit_barter_successful_on_consequence));
      campaignGameSystemStarter.AddDialogLine("barter_with_bandit_postbarter_2", "barter_with_bandit_postbarter", "close_window", "{=!}{ROBBERY_START_FIGHT}", (ConversationSentence.OnConditionDelegate) (() => !this.bandit_barter_successful_condition()), new ConversationSentence.OnConsequenceDelegate(this.conversation_bandit_set_hostile_on_consequence));
      campaignGameSystemStarter.AddDialogLine("bandit_start_attacker", "start", "bandit_attacker", "{=!}{BANDIT_NEUTRAL_GREETING}", new ConversationSentence.OnConditionDelegate(this.bandit_neutral_greet_on_condition), new ConversationSentence.OnConsequenceDelegate(this.bandit_neutral_greet_on_consequence));
      campaignGameSystemStarter.AddPlayerLine("common_encounter_ultimatum", "bandit_attacker", "common_encounter_ultimatum_answer", "{=!}{BANDIT_ULTIMATUM}", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("common_encounter_fight", "bandit_attacker", "bandit_attacker_leave", "{=3W3eEIIZ}Never mind. You can go.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("common_encounter_ultimatum_we_can_join_you", "common_encounter_ultimatum_answer", "bandits_we_can_join_you", "{=B5UMlqHc}I'll be honest... We don't want to die. Would you take us on as hired fighters? That way everyone gets what they want.", new ConversationSentence.OnConditionDelegate(this.conversation_bandits_will_join_player_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("common_encounter_ultimatum_war", "common_encounter_ultimatum_answer", "close_window", "{=n99VA8KP}You'll never take us alive![if:convo_angry][ib:aggressive]", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_bandit_set_hostile_on_consequence));
      campaignGameSystemStarter.AddPlayerLine("common_bandit_join_player_accepted", "bandits_we_can_join_you", "close_window", "{=XdKCuzg1}Very well. You may join us. But I'll be keeping an eye on you lot.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        MobileParty party = MobileParty.ConversationParty;
        Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => this.conversation_bandits_join_player_party_on_consequence(party));
      }));
      campaignGameSystemStarter.AddPlayerLine("common_bandit_join_player_declined_1", "bandits_we_can_join_you", "player_do_not_let_bandits_to_join", "{=JZvywHNy}You think I'm daft? I'm not trusting you an inch.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("common_bandit_join_player_declined_2", "bandits_we_can_join_you", "player_do_not_let_bandits_to_join", "{=z0WacPaW}No, justice demands you pay for your crimes.", (ConversationSentence.OnConditionDelegate) null, new ConversationSentence.OnConsequenceDelegate(this.conversation_bandit_set_hostile_on_consequence));
      campaignGameSystemStarter.AddPlayerLine("common_bandit_join_player_leave", "bandits_we_can_join_you", "bandit_attacker_leave", "{=D33fIGQe}Never mind.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("common_encounter_declined_looters_to_join_war_surrender", "player_do_not_let_bandits_to_join", "close_window", "{=ji2eenPE}All right - we give up. We can't fight you. Maybe the likes of us don't deserve mercy, but... show what mercy you can.", new ConversationSentence.OnConditionDelegate(this.conversation_bandits_surrender_on_condition), (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        MobileParty party = MobileParty.ConversationParty;
        Campaign.Current.ConversationManager.ConversationEndOneShot += (Action) (() => this.conversation_bandits_surrender_on_consequence(party));
      }));
      campaignGameSystemStarter.AddDialogLine("common_encounter_ultimatum_war_2", "player_do_not_let_bandits_to_join", "close_window", "{=LDhU5urT}So that's how it is, is it? Right then - I'll make one of you bleed before I go down.[if:convo_angry][ib:aggressive]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("bandit_attacker_try_leave_success", "bandit_attacker_leave", "close_window", "{=IDdyHef9}We'll be on our way, then!", new ConversationSentence.OnConditionDelegate(this.bandit_attacker_try_leave_condition), (ConversationSentence.OnConsequenceDelegate) (() => PlayerEncounter.LeaveEncounter = true));
      campaignGameSystemStarter.AddDialogLine("bandit_attacker_try_leave_fail", "bandit_attacker_leave", "bandit_defender", "{=6Wc1XErN}Wait, wait... You're not going anywhere just yet.", (ConversationSentence.OnConditionDelegate) (() => !this.bandit_attacker_try_leave_condition()), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("common_encounter_cheat1", "bandit_attacker", "close_window", "{=4Wvdk30M}Cheat: Follow me", new ConversationSentence.OnConditionDelegate(this.bandit_cheat_conversations_condition), (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        PlayerEncounter.EncounteredMobileParty.Ai.SetMoveEscortParty(MobileParty.MainParty);
        PlayerEncounter.EncounteredMobileParty.Ai.SetInitiative(0.0f, 0.0f, 48f);
        PlayerEncounter.LeaveEncounter = true;
      }));
      campaignGameSystemStarter.AddPlayerLine("common_encounter_cheat2", "bandit_attacker", "close_window", "{=ORj5F5il}Cheat: Besiege Town", new ConversationSentence.OnConditionDelegate(this.bandit_cheat_conversations_condition), (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        PlayerEncounter.EncounteredMobileParty.Ai.SetMoveBesiegeSettlement(Settlement.FindFirst((Func<Settlement, bool>) (s => s.IsTown && (double) s.Position2D.Distance(PlayerEncounter.EncounteredMobileParty.Position2D) < 80.0)));
        PlayerEncounter.EncounteredMobileParty.Ai.SetInitiative(0.0f, 0.0f, 48f);
        PlayerEncounter.LeaveEncounter = true;
      }));
      campaignGameSystemStarter.AddPlayerLine("common_encounter_cheat3", "bandit_attacker", "close_window", "{=RxuM5RzJ}Cheat: Raid Nearby Village", new ConversationSentence.OnConditionDelegate(this.bandit_cheat_conversations_condition), (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        PlayerEncounter.EncounteredMobileParty.Ai.SetMoveRaidSettlement(Settlement.FindFirst((Func<Settlement, bool>) (s => s.IsVillage && (double) s.Position2D.Distance(PlayerEncounter.EncounteredMobileParty.Position2D) < 50.0)));
        PlayerEncounter.LeaveEncounter = true;
      }));
      campaignGameSystemStarter.AddPlayerLine("common_encounter_cheat4", "bandit_attacker", "close_window", "{=DIfTkzJJ}Cheat: Besiege Nearby Town", new ConversationSentence.OnConditionDelegate(this.bandit_cheat_conversations_condition), (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        PlayerEncounter.EncounteredMobileParty.Ai.SetMoveBesiegeSettlement(Settlement.FindFirst((Func<Settlement, bool>) (s => s.IsTown && (double) s.Position2D.Distance(PlayerEncounter.EncounteredMobileParty.Position2D) < 50.0)));
        PlayerEncounter.LeaveEncounter = true;
        PlayerEncounter.EncounteredMobileParty.Ai.SetInitiative(0.0f, 0.0f, 72f);
      }));
      campaignGameSystemStarter.AddPlayerLine("common_encounter_cheat5", "bandit_attacker", "close_window", "{=eXaiRXF9}Cheat: Besiege Nearby Castle", new ConversationSentence.OnConditionDelegate(this.bandit_cheat_conversations_condition), (ConversationSentence.OnConsequenceDelegate) (() =>
      {
        PlayerEncounter.EncounteredMobileParty.Ai.SetMoveBesiegeSettlement(Settlement.FindFirst((Func<Settlement, bool>) (s => s.IsCastle && (double) s.Position2D.Distance(PlayerEncounter.EncounteredMobileParty.Position2D) < 50.0)));
        PlayerEncounter.LeaveEncounter = true;
        PlayerEncounter.EncounteredMobileParty.Ai.SetInitiative(0.0f, 0.0f, 72f);
      }));
      campaignGameSystemStarter.AddDialogLine("minor_faction_hostile", "start", "minor_faction_talk_hostile_response", "{=!}{MINOR_FACTION_ENCOUNTER}", new ConversationSentence.OnConditionDelegate(this.conversation_minor_faction_hostile_on_condition), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("minor_faction_talk_hostile_response_1", "minor_faction_talk_hostile_response", "close_window", "{=aaf5R99a}I'll give you nothing but cold steel, you scum!", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("minor_faction_talk_hostile_response_2", "minor_faction_talk_hostile_response", "minor_faction_talk_background", "{=EVLzPv1t}Hold - tell me more about yourselves.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("minor_faction_talk_background", "minor_faction_talk_background", "minor_faction_talk_background_next", "{=!}{MINOR_FACTION_SELFDESCRIPTION}", new ConversationSentence.OnConditionDelegate(this.conversation_minor_faction_set_selfdescription), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("minor_faction_talk_background_next_1", "minor_faction_talk_background_next", "minor_faction_talk_how_to_befriend", "{=vEsmC6M6}Is there any way we could not be enemies?", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddPlayerLine("minor_faction_talk_background_next_2", "minor_faction_talk_background_next", "close_window", "{=p2WPU1CU}Very good then. Now I know whom I slay.", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("minor_faction_talk_how_to_befriend", "minor_faction_talk_how_to_befriend", "minor_faction_talk_background_repeat_threat", "{=!}{MINOR_FACTION_HOWTOBEFRIEND}", new ConversationSentence.OnConditionDelegate(this.conversation_minor_faction_set_how_to_befriend), (ConversationSentence.OnConsequenceDelegate) null);
      campaignGameSystemStarter.AddDialogLine("minor_faction_talk_background_repeat_threat", "minor_faction_talk_background_repeat_threat", "minor_faction_talk_hostile_response", "{=ByOYHslS}That's enough talking for now. Make your choice.[if:convo_angry][[ib:aggressive]", (ConversationSentence.OnConditionDelegate) null, (ConversationSentence.OnConsequenceDelegate) null);
    }

    private bool bandit_barter_successful_condition()
    {
      return Campaign.Current.BarterManager.LastBarterIsAccepted;
    }

    private bool bandit_cheat_conversations_condition() => Game.Current.IsDevelopmentMode;

    private bool conversation_bandits_will_join_player_on_condition()
    {
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.PartnersInCrime))
        return true;
      int num = PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.06f) ? 33 : 67;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.Scarface))
        num = MathF.Round((float) num * (1f + DefaultPerks.Roguery.Scarface.PrimaryBonus));
      return MobileParty.ConversationParty.Party.RandomIntWithSeed(3U, 100) <= 100 - num && PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.09f);
    }

    private bool conversation_bandits_surrender_on_condition()
    {
      int num = PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.04f) ? 33 : 67;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.Scarface))
        num = MathF.Round((float) num * (1f + DefaultPerks.Roguery.Scarface.PrimaryBonus));
      return MobileParty.ConversationParty.Party.RandomIntWithSeed(4U, 100) <= 100 - num && PartyBaseHelper.DoesSurrenderIsLogicalForParty(MobileParty.ConversationParty, MobileParty.MainParty, 0.06f);
    }

    private bool bandit_neutral_greet_on_condition()
    {
      if (Campaign.Current.CurrentConversationContext != ConversationContext.PartyEncounter || PlayerEncounter.Current == null || PlayerEncounter.EncounteredMobileParty == null || !PlayerEncounter.EncounteredMobileParty.MapFaction.IsBanditFaction || !PlayerEncounter.PlayerIsAttacker || MobileParty.ConversationParty == null)
        return false;
      MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=ZPj0ZAO7}Yeah? What do you want with us?", false);
      MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=5zUIQtTa}I want you to surrender or die, brigand!", false);
      int num = MBRandom.RandomInt(8);
      switch (this.GetPlayerInteraction(MobileParty.ConversationParty))
      {
        case BanditsCampaignBehavior.PlayerInteraction.None:
          switch (num)
          {
            case 1:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=cO61R3va}We've got no quarrel with you.", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=oJ6lpXmp}But I have one with you, brigand! Give up now.", false);
              break;
            case 2:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=6XdHP9Pv}We're not looking for a fight.", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=fiLWg11t}Neither am I, if you surrender. Otherwise...", false);
              break;
            case 3:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=GUiT211X}You got a problem?", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=idwOxnX5}Not if you give up now. If not, prepare to fight!", false);
              break;
            case 4:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=mHBHKacJ}We're just harmless travellers...", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=A5IJmN0X}I think not, brigand. Surrender or die!", false);
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "mountain_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=8rgH8CGc}We're just harmless shepherds...", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "forest_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=kRASveAC}We're just harmless foresters...", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "sea_raiders")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=k96R57KM}We're just harmless traders...", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "steppe_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=odzS6rhH}We're just harmless herdsmen...", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "desert_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=Vttb0P15}We're just harmless nomads...", false);
                break;
              }
              break;
            case 5:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=wSwzyr6M}Mess with us and we'll sell our lives dearly.", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=GLqb67cg}I don't care, brigand. Surrender or die!", false);
              break;
            case 6:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=xQ0aBavD}Back off, stranger, unless you want trouble.", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=BwIT8F0k}I don't mind, brigand. Surrender or die!", false);
              break;
            case 7:
              MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=8yPqbZmm}You best back off. There's dozens more of us hiding, just waiting for our signal.", false);
              MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=ASRpFaGF}Nice try, brigand. Surrender or die!", false);
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "mountain_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=TXzZwb7n}You best back off. Scores of our brothers are just over that ridge over there, waiting for our signal.", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "forest_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=lZj61xTm}You don't know who you're messing with. There are scores of our brothers hiding in the woods, just waiting for our signal to pepper you with arrows.", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "sea_raiders")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=7Sp6aNYo}You best let us be. There's dozens more of us hiding here, just waiting for our signal.", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "steppe_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=EUbdov2r}Back off, stranger. There's dozens more of us hiding in that gully over there, just waiting for our signal.", false);
                break;
              }
              if (PlayerEncounter.EncounteredMobileParty.MapFaction.StringId == "desert_bandits")
              {
                MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=RWxYalkR}Be warned, stranger. There's dozens more of us hiding in that wadi over there, just waiting for our signal.", false);
                break;
              }
              break;
          }
          break;
        case BanditsCampaignBehavior.PlayerInteraction.PaidOffParty:
          MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=Bm7U7TgG}If you're going to keep pestering us, traveller, we might need to take a bit more coin from you.", false);
          MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=KRfcro26}We're here to fight. Surrender or die!", false);
          break;
        default:
          if (PlayerEncounter.PlayerIsAttacker)
            MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=38DvG2ba}Yeah? What is it now?", false);
          else
            MBTextManager.SetTextVariable("BANDIT_NEUTRAL_GREETING", "{=5laJ37D8}Back for more, are you?", false);
          MBTextManager.SetTextVariable("BANDIT_ULTIMATUM", "{=KRfcro26}We're here to fight. Surrender or die!", false);
          break;
      }
      return true;
    }

    private void bandit_barter_successful_on_consequence()
    {
      this.SetPlayerInteraction(MobileParty.ConversationParty, BanditsCampaignBehavior.PlayerInteraction.PaidOffParty);
    }

    private void bandit_neutral_greet_on_consequence()
    {
      if (this.GetPlayerInteraction(MobileParty.ConversationParty) == BanditsCampaignBehavior.PlayerInteraction.PaidOffParty)
        return;
      this.SetPlayerInteraction(MobileParty.ConversationParty, BanditsCampaignBehavior.PlayerInteraction.Friendly);
    }

    private void conversation_bandit_set_hostile_on_consequence()
    {
      this.SetPlayerInteraction(MobileParty.ConversationParty, BanditsCampaignBehavior.PlayerInteraction.Hostile);
    }

    private void GetMemberAndPrisonerRostersFromParties(
      List<MobileParty> parties,
      ref TroopRoster troopsTakenAsMember,
      ref TroopRoster troopsTakenAsPrisoner,
      bool doBanditsJoinPlayerSide)
    {
      foreach (MobileParty party in parties)
      {
        for (int index = 0; index < party.MemberRoster.Count; ++index)
        {
          if (!party.MemberRoster.GetCharacterAtIndex(index).IsHero)
          {
            if (doBanditsJoinPlayerSide)
              troopsTakenAsMember.AddToCounts(party.MemberRoster.GetCharacterAtIndex(index), party.MemberRoster.GetElementNumber(index));
            else
              troopsTakenAsPrisoner.AddToCounts(party.MemberRoster.GetCharacterAtIndex(index), party.MemberRoster.GetElementNumber(index));
          }
        }
        for (int index = party.PrisonRoster.Count - 1; index > -1; --index)
        {
          CharacterObject characterAtIndex = party.PrisonRoster.GetCharacterAtIndex(index);
          if (!characterAtIndex.IsHero)
            troopsTakenAsMember.AddToCounts(party.PrisonRoster.GetCharacterAtIndex(index), party.PrisonRoster.GetElementNumber(index));
          else if (characterAtIndex.HeroObject.Clan == Clan.PlayerClan)
          {
            if (doBanditsJoinPlayerSide)
              EndCaptivityAction.ApplyByPeace(characterAtIndex.HeroObject);
            else
              EndCaptivityAction.ApplyByReleasedAfterBattle(characterAtIndex.HeroObject);
            characterAtIndex.HeroObject.ChangeState(Hero.CharacterStates.Active);
            AddHeroToPartyAction.Apply(characterAtIndex.HeroObject, MobileParty.MainParty);
          }
          else if (Clan.PlayerClan.IsAtWarWith((IFaction) characterAtIndex.HeroObject.Clan))
            TransferPrisonerAction.Apply(characterAtIndex, party.Party, PartyBase.MainParty);
        }
      }
    }

    private void OpenRosterScreenAfterBanditEncounter(
      MobileParty conversationParty,
      bool doBanditsJoinPlayerSide)
    {
      List<MobileParty> partiesToJoinPlayerSide = new List<MobileParty>()
      {
        MobileParty.MainParty
      };
      List<MobileParty> partiesToJoinEnemySide = new List<MobileParty>();
      if (PlayerEncounter.EncounteredMobileParty != null)
        partiesToJoinEnemySide.Add(PlayerEncounter.EncounteredMobileParty);
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Current.FindAllNpcPartiesWhoWillJoinEvent(ref partiesToJoinPlayerSide, ref partiesToJoinEnemySide);
      TroopRoster dummyTroopRoster1 = TroopRoster.CreateDummyTroopRoster();
      TroopRoster dummyTroopRoster2 = TroopRoster.CreateDummyTroopRoster();
      this.GetMemberAndPrisonerRostersFromParties(partiesToJoinEnemySide, ref dummyTroopRoster2, ref dummyTroopRoster1, doBanditsJoinPlayerSide);
      if (!doBanditsJoinPlayerSide)
      {
        Dictionary<PartyBase, ItemRoster> itemRostersToLoot = new Dictionary<PartyBase, ItemRoster>();
        ItemRoster itemRoster = new ItemRoster();
        int amount = 0;
        foreach (MobileParty mobileParty in partiesToJoinEnemySide)
        {
          amount += mobileParty.PartyTradeGold;
          itemRoster.Add((IEnumerable<ItemRosterElement>) mobileParty.ItemRoster);
        }
        GiveGoldAction.ApplyForPartyToCharacter(conversationParty.Party, Hero.MainHero, amount);
        itemRostersToLoot.Add(PartyBase.MainParty, itemRoster);
        if (itemRoster.Count > 0)
        {
          InventoryManager.OpenScreenAsLoot(itemRostersToLoot);
          for (int index = 0; index < partiesToJoinEnemySide.Count - 1; ++index)
            partiesToJoinEnemySide[index].ItemRoster.Clear();
        }
        PartyScreenManager.OpenScreenWithCondition(new IsTroopTransferableDelegate(this.IsTroopTransferable), new PartyPresentationDoneButtonConditionDelegate(this.DoneButtonCondition), new PartyPresentationDoneButtonDelegate(this.OnDoneClicked), (PartyPresentationCancelButtonDelegate) null, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.Transferable, PlayerEncounter.EncounteredParty.Name, dummyTroopRoster2.TotalManCount, false, false, PartyScreenMode.Loot, dummyTroopRoster2, dummyTroopRoster1);
        for (int index = partiesToJoinEnemySide.Count - 1; index >= 0; --index)
          DestroyPartyAction.Apply(MobileParty.MainParty.Party, partiesToJoinEnemySide[index]);
      }
      else
      {
        PartyScreenManager.OpenScreenWithCondition(new IsTroopTransferableDelegate(this.IsTroopTransferable), new PartyPresentationDoneButtonConditionDelegate(this.DoneButtonCondition), new PartyPresentationDoneButtonDelegate(this.OnDoneClicked), (PartyPresentationCancelButtonDelegate) null, PartyScreenLogic.TransferState.Transferable, PartyScreenLogic.TransferState.Transferable, PlayerEncounter.EncounteredParty.Name, dummyTroopRoster2.TotalManCount, false, false, PartyScreenMode.TroopsManage, dummyTroopRoster2);
        for (int index = partiesToJoinEnemySide.Count - 1; index >= 0; --index)
        {
          MobileParty mobileParty = partiesToJoinEnemySide[index];
          CampaignEventDispatcher.Instance.OnBanditPartyRecruited(mobileParty);
          DestroyPartyAction.Apply(MobileParty.MainParty.Party, mobileParty);
        }
      }
    }

    private void conversation_bandits_surrender_on_consequence(MobileParty conversationParty)
    {
      this.OpenRosterScreenAfterBanditEncounter(conversationParty, false);
      PlayerEncounter.LeaveEncounter = true;
    }

    private void conversation_bandits_join_player_party_on_consequence(MobileParty conversationParty)
    {
      this.OpenRosterScreenAfterBanditEncounter(conversationParty, true);
      PlayerEncounter.LeaveEncounter = true;
    }

    private bool OnDoneClicked(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      FlattenedTroopRoster takenPrisonerRoster,
      FlattenedTroopRoster releasedPrisonerRoster,
      bool isForced,
      PartyBase leftParty,
      PartyBase rightParty)
    {
      return true;
    }

    private Tuple<bool, TextObject> DoneButtonCondition(
      TroopRoster leftMemberRoster,
      TroopRoster leftPrisonRoster,
      TroopRoster rightMemberRoster,
      TroopRoster rightPrisonRoster,
      int leftLimitNum,
      int rightLimitNum)
    {
      foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) rightMemberRoster.GetTroopRoster())
      {
        if (troopRosterElement.Character.IsHero && troopRosterElement.Character.HeroObject.HeroState == Hero.CharacterStates.Fugitive)
          troopRosterElement.Character.HeroObject.ChangeState(Hero.CharacterStates.Active);
      }
      return new Tuple<bool, TextObject>(true, (TextObject) null);
    }

    private bool IsTroopTransferable(
      CharacterObject character,
      PartyScreenLogic.TroopType type,
      PartyScreenLogic.PartyRosterSide side,
      PartyBase LeftOwnerParty)
    {
      return true;
    }

    private bool bandit_start_defender_condition()
    {
      PartyBase encounteredParty = PlayerEncounter.EncounteredParty;
      if (Hero.OneToOneConversationHero != null && Hero.OneToOneConversationHero.MapFaction != null && !Hero.OneToOneConversationHero.MapFaction.IsBanditFaction || encounteredParty == null || !encounteredParty.IsMobile || !encounteredParty.MapFaction.IsBanditFaction)
        return false;
      List<TextObject> textObjectList1 = new List<TextObject>();
      List<TextObject> textObjectList2 = new List<TextObject>();
      List<TextObject> textObjectList3 = new List<TextObject>();
      List<TextObject> textObjectList4 = new List<TextObject>();
      for (int index = 1; index <= 6; ++index)
      {
        TextObject textObject;
        if (GameTexts.TryGetText("str_robbery_threat", out textObject, index.ToString()))
        {
          textObjectList1.Add(textObject);
          textObjectList2.Add(GameTexts.FindText("str_robbery_pay_agreement", index.ToString()));
          textObjectList3.Add(GameTexts.FindText("str_robbery_conclusion", index.ToString()));
          textObjectList4.Add(GameTexts.FindText("str_robbery_start_fight", index.ToString()));
        }
      }
      for (int index1 = 1; index1 <= 6; ++index1)
      {
        string variation = encounteredParty.MapFaction.StringId + "_" + index1.ToString();
        TextObject textObject;
        if (GameTexts.TryGetText("str_robbery_threat", out textObject, variation))
        {
          for (int index2 = 0; index2 < 3; ++index2)
          {
            textObjectList1.Add(textObject);
            textObjectList2.Add(GameTexts.FindText("str_robbery_pay_agreement", variation));
            textObjectList3.Add(GameTexts.FindText("str_robbery_conclusion", variation));
            textObjectList4.Add(GameTexts.FindText("str_robbery_start_fight", variation));
          }
        }
      }
      int index3 = MBRandom.RandomInt(0, textObjectList1.Count);
      MBTextManager.SetTextVariable("ROBBERY_THREAT", textObjectList1[index3], false);
      MBTextManager.SetTextVariable("ROBBERY_PAY_AGREEMENT", textObjectList2[index3], false);
      MBTextManager.SetTextVariable("ROBBERY_CONCLUSION", textObjectList3[index3], false);
      MBTextManager.SetTextVariable("ROBBERY_START_FIGHT", textObjectList4[index3], false);
      List<MobileParty> partiesToJoinPlayerSide = new List<MobileParty>()
      {
        MobileParty.MainParty
      };
      List<MobileParty> partiesToJoinEnemySide = new List<MobileParty>();
      if (MobileParty.ConversationParty != null)
        partiesToJoinEnemySide.Add(MobileParty.ConversationParty);
      if (PlayerEncounter.Current != null)
        PlayerEncounter.Current.FindAllNpcPartiesWhoWillJoinEvent(ref partiesToJoinPlayerSide, ref partiesToJoinEnemySide);
      float num1 = 0.0f;
      foreach (MobileParty mobileParty in partiesToJoinPlayerSide)
        num1 += mobileParty.Party.TotalStrength;
      float num2 = 0.0f;
      foreach (MobileParty mobileParty in partiesToJoinEnemySide)
        num2 += mobileParty.Party.TotalStrength;
      float num3 = (float) (((double) num2 + 1.0) / ((double) num1 + 1.0));
      int num4 = Hero.MainHero.Gold / 100;
      double num5 = 2.0 * (double) MathF.Max(0.0f, MathF.Min(6f, num3 - 1f));
      float num6 = 0.0f;
      Settlement nearestSettlement = SettlementHelper.FindNearestSettlement((Func<Settlement, bool>) (x => x.IsTown || x.IsVillage));
      SettlementComponent settlementComponent = !nearestSettlement.IsTown ? (SettlementComponent) nearestSettlement.Village : (SettlementComponent) nearestSettlement.Town;
      foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
        num6 += (float) (settlementComponent.GetItemPrice(itemRosterElement.EquipmentElement, MobileParty.MainParty, true) * itemRosterElement.Amount);
      float num7 = num6 / 100f;
      float num8 = (float) (1.0 + 2.0 * (double) MathF.Max(0.0f, MathF.Min(6f, num3 - 1f)));
      BanditsCampaignBehavior._goldAmount = (int) ((double) num4 * num5 + (double) num7 * (double) num8 + 100.0);
      MBTextManager.SetTextVariable("AMOUNT", BanditsCampaignBehavior._goldAmount.ToString(), false);
      return encounteredParty.IsMobile && encounteredParty.MapFaction.IsBanditFaction && PlayerEncounter.PlayerIsDefender;
    }

    private bool bandit_start_barter_condition()
    {
      return PlayerEncounter.Current != null && PlayerEncounter.Current.PlayerSide == BattleSideEnum.Defender;
    }

    private void bandit_start_barter_consequence()
    {
      BarterManager.Instance.StartBarterOffer(Hero.MainHero, Hero.OneToOneConversationHero, PartyBase.MainParty, MobileParty.ConversationParty?.Party, InitContext: new BarterManager.BarterContextInitializer(BarterManager.Instance.InitializeSafePassageBarterContext), defaultBarterables: (IEnumerable<Barterable>) new Barterable[1]
      {
        (Barterable) new SafePassageBarterable((Hero) null, Hero.MainHero, MobileParty.ConversationParty?.Party, PartyBase.MainParty)
      });
    }

    private bool conversation_minor_faction_hostile_on_condition()
    {
      if (MapEvent.PlayerMapEvent != null)
      {
        foreach (PartyBase involvedParty in MapEvent.PlayerMapEvent.InvolvedParties)
        {
          if (PartyBase.MainParty.Side == BattleSideEnum.Attacker && involvedParty.IsMobile && involvedParty.MobileParty.IsBandit && involvedParty.MapFaction.IsMinorFaction)
          {
            string str = involvedParty.MapFaction.StringId + "_encounter";
            MBTextManager.SetTextVariable("MINOR_FACTION_ENCOUNTER", GameTexts.FindText(!FactionManager.IsAtWarAgainstFaction(involvedParty.MapFaction, Hero.MainHero.MapFaction) ? str + "_neutral" : str + "_hostile"), false);
            return true;
          }
        }
      }
      return false;
    }

    private bool conversation_minor_faction_set_selfdescription()
    {
      foreach (PartyBase involvedParty in MapEvent.PlayerMapEvent.InvolvedParties)
      {
        if (PartyBase.MainParty.Side == BattleSideEnum.Attacker && involvedParty.IsMobile && involvedParty.MobileParty.IsBandit && involvedParty.MapFaction.IsMinorFaction)
        {
          MBTextManager.SetTextVariable("MINOR_FACTION_SELFDESCRIPTION", GameTexts.FindText(involvedParty.MapFaction.StringId + "_selfdescription"), false);
          return true;
        }
      }
      return true;
    }

    private bool conversation_minor_faction_set_how_to_befriend()
    {
      foreach (PartyBase involvedParty in MapEvent.PlayerMapEvent.InvolvedParties)
      {
        if (PartyBase.MainParty.Side == BattleSideEnum.Attacker && involvedParty.IsMobile && involvedParty.MobileParty.IsBandit && involvedParty.MapFaction.IsMinorFaction)
        {
          MBTextManager.SetTextVariable("MINOR_FACTION_HOWTOBEFRIEND", GameTexts.FindText(involvedParty.MapFaction.StringId + "_how_to_befriend"), false);
          return true;
        }
      }
      return true;
    }

    private bool bandit_attacker_try_leave_condition()
    {
      if (PlayerEncounter.EncounteredParty == null)
        return false;
      return (double) PlayerEncounter.EncounteredParty.TotalStrength <= (double) PartyBase.MainParty.TotalStrength || this.GetPlayerInteraction(PlayerEncounter.EncounteredMobileParty) == BanditsCampaignBehavior.PlayerInteraction.PaidOffParty || this.GetPlayerInteraction(PlayerEncounter.EncounteredMobileParty) == BanditsCampaignBehavior.PlayerInteraction.Friendly;
    }

    public class BanditsCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public BanditsCampaignBehaviorTypeDefiner()
        : base(70000)
      {
      }

      protected override void DefineEnumTypes()
      {
        this.AddEnumDefinition(typeof (BanditsCampaignBehavior.PlayerInteraction), 1);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (Dictionary<MobileParty, BanditsCampaignBehavior.PlayerInteraction>));
      }
    }

    private enum PlayerInteraction
    {
      None,
      Friendly,
      PaidOffParty,
      Hostile,
    }
  }
}
