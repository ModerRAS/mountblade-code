// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.TeleportationCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.MapNotificationTypes;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Party.PartyComponents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class TeleportationCampaignBehavior : 
    CampaignBehaviorBase,
    ITeleportationCampaignBehavior,
    ICampaignBehavior
  {
    private List<TeleportationCampaignBehavior.TeleportationData> _teleportationList = new List<TeleportationCampaignBehavior.TeleportationData>();

    private TextObject _partyLeaderChangeNotificationText
    {
      get
      {
        return new TextObject("{=QSaufZ9i}One of your parties has lost its leader. It will disband after a day has passed. You can assign a new clan member to lead it, if you wish to keep the party.");
      }
    }

    public override void RegisterEvents()
    {
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.DailyTickPartyEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.DailyTickParty));
      CampaignEvents.HeroComesOfAgeEvent.AddNonSerializedListener((object) this, new Action<Hero>(this.OnHeroComesOfAge));
      CampaignEvents.MobilePartyDestroyed.AddNonSerializedListener((object) this, new Action<MobileParty, PartyBase>(this.OnMobilePartyDestroyed));
      CampaignEvents.OnSettlementOwnerChangedEvent.AddNonSerializedListener((object) this, new Action<Settlement, bool, Hero, Hero, Hero, ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail>(this.OnSettlementOwnerChanged));
      CampaignEvents.HeroKilledEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, KillCharacterAction.KillCharacterActionDetail, bool>(this.OnHeroKilled));
      CampaignEvents.OnPartyDisbandStartedEvent.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyDisbandStarted));
      CampaignEvents.OnGovernorChangedEvent.AddNonSerializedListener((object) this, new Action<Town, Hero, Hero>(this.OnGovernorChanged));
      CampaignEvents.OnHeroTeleportationRequestedEvent.AddNonSerializedListener((object) this, new Action<Hero, Settlement, MobileParty, TeleportHeroAction.TeleportationDetail>(this.OnHeroTeleportationRequested));
      CampaignEvents.OnPartyDisbandedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnPartyDisbanded));
      CampaignEvents.OnClanLeaderChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero>(this.OnClanLeaderChanged));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<List<TeleportationCampaignBehavior.TeleportationData>>("_teleportationList", ref this._teleportationList);
    }

    public bool GetTargetOfTeleportingHero(
      Hero teleportingHero,
      out bool isGovernor,
      out bool isPartyLeader,
      out IMapPoint target)
    {
      isGovernor = false;
      isPartyLeader = false;
      target = (IMapPoint) null;
      for (int index = 0; index < this._teleportationList.Count; ++index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TeleportingHero == teleportingHero)
        {
          if (teleportation.TargetSettlement != null)
          {
            isGovernor = teleportation.IsGovernor;
            target = (IMapPoint) teleportation.TargetSettlement;
            return true;
          }
          if (teleportation.TargetParty != null)
          {
            isPartyLeader = teleportation.IsPartyLeader;
            target = (IMapPoint) teleportation.TargetParty;
            return true;
          }
        }
      }
      return false;
    }

    public CampaignTime GetHeroArrivalTimeToDestination(Hero teleportingHero)
    {
      TeleportationCampaignBehavior.TeleportationData teleportationData = this._teleportationList.FirstOrDefaultQ<TeleportationCampaignBehavior.TeleportationData>((Func<TeleportationCampaignBehavior.TeleportationData, bool>) (x => x.TeleportingHero == teleportingHero));
      return teleportationData != null ? teleportationData.TeleportationTime : CampaignTime.Never;
    }

    private void HourlyTick()
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TeleportationTime.IsPast && this.CanApplyImmediateTeleportation(teleportation))
        {
          TeleportationCampaignBehavior.TeleportationData data = teleportation;
          this.RemoveTeleportationData(teleportation, false);
          this.ApplyImmediateTeleport(data);
        }
      }
    }

    private void DailyTickParty(MobileParty mobileParty)
    {
      if (!mobileParty.IsActive || mobileParty.Army != null || mobileParty.MapEvent != null || mobileParty.LeaderHero == null || !mobileParty.LeaderHero.IsNoncombatant || mobileParty.ActualClan == null || mobileParty.ActualClan == Clan.PlayerClan || mobileParty.ActualClan.Leader == mobileParty.LeaderHero)
        return;
      MBList<Hero> mbList = mobileParty.ActualClan.Heroes.WhereQ<Hero>((Func<Hero, bool>) (h => h.IsActive && h.IsCommander && h.PartyBelongedTo == null)).ToMBList<Hero>();
      if (mbList.IsEmpty<Hero>())
        return;
      Hero leaderHero = mobileParty.LeaderHero;
      mobileParty.RemovePartyLeader();
      MakeHeroFugitiveAction.Apply(leaderHero);
      TeleportHeroAction.ApplyDelayedTeleportToPartyAsPartyLeader(mbList.GetRandomElementInefficiently<Hero>(), mobileParty);
    }

    private void OnHeroComesOfAge(Hero hero)
    {
      if (hero.Clan == Clan.PlayerClan || hero.IsNoncombatant)
        return;
      foreach (WarPartyComponent warPartyComponent in (List<WarPartyComponent>) hero.Clan.WarPartyComponents)
      {
        MobileParty mobileParty = warPartyComponent.MobileParty;
        if (mobileParty != null && mobileParty.Army == null && mobileParty.MapEvent == null && mobileParty.LeaderHero != null && mobileParty.LeaderHero.IsNoncombatant)
        {
          Hero leaderHero = mobileParty.LeaderHero;
          mobileParty.RemovePartyLeader();
          MakeHeroFugitiveAction.Apply(leaderHero);
          TeleportHeroAction.ApplyDelayedTeleportToPartyAsPartyLeader(hero, warPartyComponent.Party.MobileParty);
          break;
        }
      }
    }

    private void OnMobilePartyDestroyed(MobileParty mobileParty, PartyBase destroyerParty)
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TargetParty != null && teleportation.TargetParty == mobileParty)
          this.RemoveTeleportationData(teleportation, true);
      }
    }

    private void OnSettlementOwnerChanged(
      Settlement settlement,
      bool openToClaim,
      Hero newOwner,
      Hero oldOwner,
      Hero capturerHero,
      ChangeOwnerOfSettlementAction.ChangeOwnerOfSettlementDetail detail)
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TargetSettlement != null && teleportation.TargetSettlement == settlement && newOwner.Clan != teleportation.TeleportingHero.Clan)
          this.RemoveTeleportationData(teleportation, true);
      }
    }

    private void OnHeroKilled(
      Hero victim,
      Hero killer,
      KillCharacterAction.KillCharacterActionDetail detail,
      bool showNotification = true)
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TeleportingHero == victim)
          this.RemoveTeleportationData(teleportation, true);
      }
    }

    private void OnPartyDisbandStarted(MobileParty disbandParty)
    {
      if (disbandParty.ActualClan == Clan.PlayerClan && disbandParty.LeaderHero == null && (disbandParty.IsLordParty || disbandParty.IsCaravan))
        Campaign.Current.CampaignInformationManager.NewMapNoticeAdded((InformationData) new PartyLeaderChangeNotification(disbandParty, this._partyLeaderChangeNotificationText));
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TargetParty != null && teleportation.TargetParty == disbandParty)
          this.RemoveTeleportationData(teleportation, true, false);
      }
    }

    private void OnGovernorChanged(Town fortification, Hero oldGovernor, Hero newGovernor)
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TeleportingHero != newGovernor && teleportation.IsGovernor && teleportation.TargetSettlement.Town == fortification)
          teleportation.IsGovernor = false;
      }
    }

    private void OnHeroTeleportationRequested(
      Hero hero,
      Settlement targetSettlement,
      MobileParty targetParty,
      TeleportHeroAction.TeleportationDetail detail)
    {
      switch (detail)
      {
        case TeleportHeroAction.TeleportationDetail.ImmediateTeleportToSettlement:
          for (int index = this._teleportationList.Count - 1; index >= 0; --index)
          {
            TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
            if (hero == teleportation.TeleportingHero && teleportation.TargetSettlement == targetSettlement)
              this.RemoveTeleportationData(teleportation, true, false);
          }
          break;
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlement:
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlementAsGovernor:
          this._teleportationList.Add(new TeleportationCampaignBehavior.TeleportationData(hero, targetSettlement, detail == TeleportHeroAction.TeleportationDetail.DelayedTeleportToSettlementAsGovernor));
          break;
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToParty:
        case TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader:
          if (detail == TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader)
          {
            for (int index = this._teleportationList.Count - 1; index >= 0; --index)
            {
              TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
              if (teleportation.TargetParty == targetParty && teleportation.IsPartyLeader)
                this.RemoveTeleportationData(teleportation, true, false);
            }
          }
          this._teleportationList.Add(new TeleportationCampaignBehavior.TeleportationData(hero, targetParty, detail == TeleportHeroAction.TeleportationDetail.DelayedTeleportToPartyAsPartyLeader));
          break;
      }
    }

    private void OnPartyDisbanded(MobileParty disbandParty, Settlement relatedSettlement)
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TargetParty != null && teleportation.TargetParty == disbandParty)
          this.RemoveTeleportationData(teleportation, true);
      }
    }

    private void OnClanLeaderChanged(Hero oldLeader, Hero newLeader)
    {
      for (int index = this._teleportationList.Count - 1; index >= 0; --index)
      {
        TeleportationCampaignBehavior.TeleportationData teleportation = this._teleportationList[index];
        if (teleportation.TeleportingHero == newLeader && !teleportation.IsPartyLeader)
          this.RemoveTeleportationData(teleportation, true);
      }
    }

    private void RemoveTeleportationData(
      TeleportationCampaignBehavior.TeleportationData data,
      bool isCanceled,
      bool disbandTargetParty = true)
    {
      this._teleportationList.Remove(data);
      if (!isCanceled)
        return;
      if (data.TeleportingHero.IsTraveling && data.TeleportingHero.DeathMark == KillCharacterAction.KillCharacterActionDetail.None)
        MakeHeroFugitiveAction.Apply(data.TeleportingHero);
      if (data.TargetParty == null)
        return;
      if (data.TargetParty.ActualClan == Clan.PlayerClan)
        CampaignEventDispatcher.Instance.OnPartyLeaderChangeOfferCanceled(data.TargetParty);
      if (!disbandTargetParty || !data.TargetParty.IsActive || !data.IsPartyLeader)
        return;
      IDisbandPartyCampaignBehavior behavior = Campaign.Current.CampaignBehaviorManager.GetBehavior<IDisbandPartyCampaignBehavior>();
      if (behavior == null || behavior.IsPartyWaitingForDisband(data.TargetParty))
        return;
      DisbandPartyAction.StartDisband(data.TargetParty);
    }

    private bool CanApplyImmediateTeleportation(
      TeleportationCampaignBehavior.TeleportationData data)
    {
      return data.TargetSettlement != null && !data.TargetSettlement.IsUnderSiege && !data.TargetSettlement.IsUnderRaid || data.TargetParty != null && data.TargetParty.MapEvent == null;
    }

    private void ApplyImmediateTeleport(
      TeleportationCampaignBehavior.TeleportationData data)
    {
      if (data.TargetSettlement != null)
      {
        if (data.IsGovernor)
        {
          data.TargetSettlement.Town.Governor = data.TeleportingHero;
          TeleportHeroAction.ApplyImmediateTeleportToSettlement(data.TeleportingHero, data.TargetSettlement);
        }
        else
          TeleportHeroAction.ApplyImmediateTeleportToSettlement(data.TeleportingHero, data.TargetSettlement);
      }
      else
      {
        if (data.TargetParty == null)
          return;
        if (data.IsPartyLeader)
          TeleportHeroAction.ApplyImmediateTeleportToPartyAsPartyLeader(data.TeleportingHero, data.TargetParty);
        else
          TeleportHeroAction.ApplyImmediateTeleportToParty(data.TeleportingHero, data.TargetParty);
      }
    }

    public class TeleportationCampaignBehaviorTypeDefiner : SaveableTypeDefiner
    {
      public TeleportationCampaignBehaviorTypeDefiner()
        : base(151000)
      {
      }

      protected override void DefineClassTypes()
      {
        this.AddClassDefinition(typeof (TeleportationCampaignBehavior.TeleportationData), 1);
      }

      protected override void DefineContainerDefinitions()
      {
        this.ConstructContainerDefinition(typeof (List<TeleportationCampaignBehavior.TeleportationData>));
      }
    }

    internal class TeleportationData
    {
      [SaveableField(1)]
      public Hero TeleportingHero;
      [SaveableField(2)]
      public CampaignTime TeleportationTime;
      [SaveableField(3)]
      public Settlement TargetSettlement;
      [SaveableField(4)]
      public bool IsGovernor;
      [SaveableField(5)]
      public MobileParty TargetParty;
      [SaveableField(6)]
      public bool IsPartyLeader;

      public TeleportationData(Hero teleportingHero, Settlement targetSettlement, bool isGovernor)
      {
        this.TeleportingHero = teleportingHero;
        this.TeleportationTime = CampaignTime.HoursFromNow(Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(teleportingHero, targetSettlement.Party).ResultNumber);
        this.TargetSettlement = targetSettlement;
        this.IsGovernor = isGovernor;
        this.TargetParty = (MobileParty) null;
        this.IsPartyLeader = false;
      }

      public TeleportationData(Hero teleportingHero, MobileParty targetParty, bool isPartyLeader)
      {
        this.TeleportingHero = teleportingHero;
        this.TeleportationTime = CampaignTime.HoursFromNow(Campaign.Current.Models.DelayedTeleportationModel.GetTeleportationDelayAsHours(teleportingHero, targetParty.Party).ResultNumber);
        this.TargetParty = targetParty;
        this.IsPartyLeader = isPartyLeader;
        this.TargetSettlement = (Settlement) null;
        this.IsGovernor = false;
      }

      internal static void AutoGeneratedStaticCollectObjectsTeleportationData(
        object o,
        List<object> collectedObjects)
      {
        ((TeleportationCampaignBehavior.TeleportationData) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
        collectedObjects.Add((object) this.TeleportingHero);
        CampaignTime.AutoGeneratedStaticCollectObjectsCampaignTime((object) this.TeleportationTime, collectedObjects);
        collectedObjects.Add((object) this.TargetSettlement);
        collectedObjects.Add((object) this.TargetParty);
      }

      internal static object AutoGeneratedGetMemberValueTeleportingHero(object o)
      {
        return (object) ((TeleportationCampaignBehavior.TeleportationData) o).TeleportingHero;
      }

      internal static object AutoGeneratedGetMemberValueTeleportationTime(object o)
      {
        return (object) ((TeleportationCampaignBehavior.TeleportationData) o).TeleportationTime;
      }

      internal static object AutoGeneratedGetMemberValueTargetSettlement(object o)
      {
        return (object) ((TeleportationCampaignBehavior.TeleportationData) o).TargetSettlement;
      }

      internal static object AutoGeneratedGetMemberValueIsGovernor(object o)
      {
        return (object) ((TeleportationCampaignBehavior.TeleportationData) o).IsGovernor;
      }

      internal static object AutoGeneratedGetMemberValueTargetParty(object o)
      {
        return (object) ((TeleportationCampaignBehavior.TeleportationData) o).TargetParty;
      }

      internal static object AutoGeneratedGetMemberValueIsPartyLeader(object o)
      {
        return (object) ((TeleportationCampaignBehavior.TeleportationData) o).IsPartyLeader;
      }
    }
  }
}
