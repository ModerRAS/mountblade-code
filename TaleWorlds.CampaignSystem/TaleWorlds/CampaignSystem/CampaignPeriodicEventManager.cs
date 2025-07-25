// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignPeriodicEventManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class CampaignPeriodicEventManager
  {
    [SaveableField(120)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _mobilePartyHourlyTicker;
    [SaveableField(130)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _mobilePartyDailyTicker;
    [SaveableField(140)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _dailyTickPartyTicker;
    [SaveableField(150)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _hourlyTickMobilePartyTicker;
    [SaveableField(160)]
    private CampaignPeriodicEventManager.PeriodicTicker<Settlement> _hourlyTickSettlementTicker;
    [SaveableField(170)]
    private CampaignPeriodicEventManager.PeriodicTicker<Clan> _hourlyTickClanTicker;
    [SaveableField(180)]
    private CampaignPeriodicEventManager.PeriodicTicker<Town> _dailyTickTownTicker;
    [SaveableField(190)]
    private CampaignPeriodicEventManager.PeriodicTicker<Settlement> _dailyTickSettlementTicker;
    [SaveableField(200)]
    private CampaignPeriodicEventManager.PeriodicTicker<Hero> _dailyTickHeroTicker;
    [SaveableField(210)]
    private CampaignPeriodicEventManager.PeriodicTicker<Clan> _dailyTickClanTicker;
    [SaveableField(320)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _quarterDailyPartyTicker;
    [SaveableField(230)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _caravanMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(250)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _garrisonMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(260)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _militiaMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(270)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _villagerMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(280)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _customMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(290)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _banditMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(300)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _lordMobilePartyPartialHourlyAiEventTicker;
    [SaveableField(310)]
    private CampaignPeriodicEventManager.PeriodicTicker<MobileParty> _partiesWithoutPartyComponentsPartialHourlyAiEventTicker;
    private static readonly CampaignTime MinimumPeriodicEventInterval = CampaignTime.Hours(0.05f);
    private CampaignTime _lastGameTime = CampaignTime.Zero;

    private double DeltaHours => CampaignTime.DeltaTime.ToHours;

    private double DeltaDays => CampaignTime.DeltaTime.ToDays;

    internal CampaignPeriodicEventManager()
    {
      this._mobilePartyHourlyTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._mobilePartyDailyTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._hourlyTickMobilePartyTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._hourlyTickSettlementTicker = new CampaignPeriodicEventManager.PeriodicTicker<Settlement>();
      this._dailyTickSettlementTicker = new CampaignPeriodicEventManager.PeriodicTicker<Settlement>();
      this._hourlyTickClanTicker = new CampaignPeriodicEventManager.PeriodicTicker<Clan>();
      this._dailyTickPartyTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._dailyTickTownTicker = new CampaignPeriodicEventManager.PeriodicTicker<Town>();
      this._dailyTickHeroTicker = new CampaignPeriodicEventManager.PeriodicTicker<Hero>();
      this._dailyTickClanTicker = new CampaignPeriodicEventManager.PeriodicTicker<Clan>();
      this._quarterDailyPartyTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._caravanMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._garrisonMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._militiaMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._villagerMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._customMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._banditMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._lordMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._partiesWithoutPartyComponentsPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
    }

    [LoadInitializationCallback]
    private void OnLoad(MetaData metaData)
    {
      if (this._caravanMobilePartyPartialHourlyAiEventTicker != null)
        return;
      this._caravanMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._garrisonMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._militiaMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._villagerMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._customMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._banditMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._lordMobilePartyPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._partiesWithoutPartyComponentsPartialHourlyAiEventTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
      this._quarterDailyPartyTicker = new CampaignPeriodicEventManager.PeriodicTicker<MobileParty>();
    }

    internal void InitializeTickers()
    {
      MBList<Settlement> list = this.ShuffleSettlements();
      this._mobilePartyHourlyTicker.Initialize(MobileParty.All, (Action<MobileParty>) (x => x.HourlyTick()), false);
      this._mobilePartyDailyTicker.Initialize(MobileParty.All, (Action<MobileParty>) (x => x.DailyTick()), false);
      this._hourlyTickMobilePartyTicker.Initialize(MobileParty.All, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.HourlyTickParty(x)), false);
      this._hourlyTickSettlementTicker.Initialize((MBReadOnlyList<Settlement>) list, (Action<Settlement>) (x => CampaignEventDispatcher.Instance.HourlyTickSettlement(x)), false);
      this._dailyTickSettlementTicker.Initialize((MBReadOnlyList<Settlement>) list, (Action<Settlement>) (x => CampaignEventDispatcher.Instance.DailyTickSettlement(x)), false);
      this._hourlyTickClanTicker.Initialize(Clan.All, (Action<Clan>) (x => CampaignEventDispatcher.Instance.HourlyTickClan(x)), false);
      this._dailyTickPartyTicker.Initialize(MobileParty.All, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.DailyTickParty(x)), false);
      this._dailyTickTownTicker.Initialize(Town.AllTowns, (Action<Town>) (x => CampaignEventDispatcher.Instance.DailyTickTown(x)), false);
      this._dailyTickHeroTicker.Initialize(Hero.AllAliveHeroes, (Action<Hero>) (x => CampaignEventDispatcher.Instance.DailyTickHero(x)), false);
      this._dailyTickClanTicker.Initialize(Clan.All, (Action<Clan>) (x => CampaignEventDispatcher.Instance.DailyTickClan(x)), false);
      bool doParallel = false;
      this._caravanMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllCaravanParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._garrisonMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllGarrisonParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._militiaMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllMilitiaParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._villagerMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllVillagerParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._customMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllCustomParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._banditMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllBanditParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._lordMobilePartyPartialHourlyAiEventTicker.Initialize(MobileParty.AllLordParties, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._partiesWithoutPartyComponentsPartialHourlyAiEventTicker.Initialize(MobileParty.AllPartiesWithoutPartyComponent, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.TickPartialHourlyAi(x)), doParallel);
      this._quarterDailyPartyTicker.Initialize(MobileParty.All, (Action<MobileParty>) (x => CampaignEventDispatcher.Instance.QuarterDailyPartyTick(x)), false);
    }

    private MBList<Settlement> ShuffleSettlements()
    {
      Stack<Settlement> source1 = new Stack<Settlement>();
      Stack<Settlement> source2 = new Stack<Settlement>();
      Stack<Settlement> source3 = new Stack<Settlement>();
      Stack<Settlement> source4 = new Stack<Settlement>();
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsVillage)
          source1.Push(settlement);
        else if (settlement.IsCastle)
          source2.Push(settlement);
        else if (settlement.IsTown)
          source3.Push(settlement);
        else
          source4.Push(settlement);
      }
      float count = (float) Settlement.All.Count;
      float num1 = (float) source1.Count / count;
      float num2 = (float) source2.Count / count;
      float num3 = (float) source3.Count / count;
      float num4 = (float) source4.Count / count;
      float num5 = num1;
      float num6 = num2;
      float num7 = num3;
      float num8 = num4;
      MBList<Settlement> mbList = new MBList<Settlement>();
      while (mbList.Count != Settlement.All.Count)
      {
        num5 += num1;
        if ((double) num5 >= 1.0 && !source1.IsEmpty<Settlement>())
        {
          mbList.Add(source1.Pop());
          --num5;
        }
        num6 += num2;
        if ((double) num6 >= 1.0 && !source2.IsEmpty<Settlement>())
        {
          mbList.Add(source2.Pop());
          --num6;
        }
        num7 += num3;
        if ((double) num7 >= 1.0 && !source3.IsEmpty<Settlement>())
        {
          mbList.Add(source3.Pop());
          --num7;
        }
        num8 += num4;
        if ((double) num8 >= 1.0 && !source4.IsEmpty<Settlement>())
        {
          mbList.Add(source4.Pop());
          --num8;
        }
      }
      return mbList;
    }

    internal void TickPeriodicEvents()
    {
      this.PeriodicHourlyTick();
      this.PeriodicDailyTick();
      this.PeriodicQuarterDailyTick();
    }

    private void PeriodicQuarterDailyTick()
    {
      this._quarterDailyPartyTicker.PeriodicTickSome(this.DeltaDays * 4.0);
    }

    internal void MobilePartyHourlyTick()
    {
      this._mobilePartyHourlyTicker.PeriodicTickSome(this.DeltaHours);
    }

    internal void TickPartialHourlyAi()
    {
      this._caravanMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._garrisonMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._militiaMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._villagerMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._customMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._banditMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._lordMobilePartyPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
      this._partiesWithoutPartyComponentsPartialHourlyAiEventTicker.PeriodicTickSome(this.DeltaHours * 0.99);
    }

    private void PeriodicHourlyTick()
    {
      double deltaHours = this.DeltaHours;
      this._hourlyTickMobilePartyTicker.PeriodicTickSome(deltaHours);
      this._hourlyTickSettlementTicker.PeriodicTickSome(deltaHours);
      this._hourlyTickClanTicker.PeriodicTickSome(deltaHours);
    }

    private void PeriodicDailyTick()
    {
      double deltaDays = this.DeltaDays;
      this._dailyTickPartyTicker.PeriodicTickSome(deltaDays);
      this._mobilePartyDailyTicker.PeriodicTickSome(deltaDays);
      this._dailyTickTownTicker.PeriodicTickSome(deltaDays);
      this._dailyTickSettlementTicker.PeriodicTickSome(deltaDays);
      this._dailyTickHeroTicker.PeriodicTickSome(deltaDays);
      this._dailyTickClanTicker.PeriodicTickSome(deltaDays);
    }

    public static MBCampaignEvent CreatePeriodicEvent(
      CampaignTime triggerPeriod,
      CampaignTime initialWait)
    {
      MBCampaignEvent periodicEvent = new MBCampaignEvent(triggerPeriod, initialWait);
      Campaign.Current.CustomPeriodicCampaignEvents.Add(periodicEvent);
      return periodicEvent;
    }

    private void DeleteMarkedPeriodicEvents()
    {
      List<MBCampaignEvent> periodicCampaignEvents = Campaign.Current.CustomPeriodicCampaignEvents;
      for (int index = periodicCampaignEvents.Count - 1; index >= 0; --index)
      {
        if (periodicCampaignEvents[index].isEventDeleted)
          periodicCampaignEvents.RemoveAt(index);
      }
    }

    internal void OnTick(float dt) => this.SignalPeriodicEvents();

    private void SignalPeriodicEvents()
    {
      if (!(this._lastGameTime + CampaignPeriodicEventManager.MinimumPeriodicEventInterval).IsPast)
        return;
      this._lastGameTime = CampaignTime.Now;
      List<MBCampaignEvent> periodicCampaignEvents = Campaign.Current.CustomPeriodicCampaignEvents;
      for (int index = periodicCampaignEvents.Count - 1; index >= 0; --index)
        periodicCampaignEvents[index].CheckUpdate();
      this.DeleteMarkedPeriodicEvents();
      if (!(Game.Current.GameStateManager.ActiveState is MapState activeState))
        return;
      activeState.OnSignalPeriodicEvents();
    }

    internal static void AutoGeneratedStaticCollectObjectsCampaignPeriodicEventManager(
      object o,
      List<object> collectedObjects)
    {
      ((CampaignPeriodicEventManager) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      collectedObjects.Add((object) this._mobilePartyHourlyTicker);
      collectedObjects.Add((object) this._mobilePartyDailyTicker);
      collectedObjects.Add((object) this._dailyTickPartyTicker);
      collectedObjects.Add((object) this._hourlyTickMobilePartyTicker);
      collectedObjects.Add((object) this._hourlyTickSettlementTicker);
      collectedObjects.Add((object) this._hourlyTickClanTicker);
      collectedObjects.Add((object) this._dailyTickTownTicker);
      collectedObjects.Add((object) this._dailyTickSettlementTicker);
      collectedObjects.Add((object) this._dailyTickHeroTicker);
      collectedObjects.Add((object) this._dailyTickClanTicker);
      collectedObjects.Add((object) this._quarterDailyPartyTicker);
      collectedObjects.Add((object) this._caravanMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._garrisonMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._militiaMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._villagerMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._customMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._banditMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._lordMobilePartyPartialHourlyAiEventTicker);
      collectedObjects.Add((object) this._partiesWithoutPartyComponentsPartialHourlyAiEventTicker);
    }

    internal static object AutoGeneratedGetMemberValue_mobilePartyHourlyTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._mobilePartyHourlyTicker;
    }

    internal static object AutoGeneratedGetMemberValue_mobilePartyDailyTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._mobilePartyDailyTicker;
    }

    internal static object AutoGeneratedGetMemberValue_dailyTickPartyTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._dailyTickPartyTicker;
    }

    internal static object AutoGeneratedGetMemberValue_hourlyTickMobilePartyTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._hourlyTickMobilePartyTicker;
    }

    internal static object AutoGeneratedGetMemberValue_hourlyTickSettlementTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._hourlyTickSettlementTicker;
    }

    internal static object AutoGeneratedGetMemberValue_hourlyTickClanTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._hourlyTickClanTicker;
    }

    internal static object AutoGeneratedGetMemberValue_dailyTickTownTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._dailyTickTownTicker;
    }

    internal static object AutoGeneratedGetMemberValue_dailyTickSettlementTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._dailyTickSettlementTicker;
    }

    internal static object AutoGeneratedGetMemberValue_dailyTickHeroTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._dailyTickHeroTicker;
    }

    internal static object AutoGeneratedGetMemberValue_dailyTickClanTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._dailyTickClanTicker;
    }

    internal static object AutoGeneratedGetMemberValue_quarterDailyPartyTicker(object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._quarterDailyPartyTicker;
    }

    internal static object AutoGeneratedGetMemberValue_caravanMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._caravanMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_garrisonMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._garrisonMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_militiaMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._militiaMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_villagerMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._villagerMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_customMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._customMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_banditMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._banditMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_lordMobilePartyPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._lordMobilePartyPartialHourlyAiEventTicker;
    }

    internal static object AutoGeneratedGetMemberValue_partiesWithoutPartyComponentsPartialHourlyAiEventTicker(
      object o)
    {
      return (object) ((CampaignPeriodicEventManager) o)._partiesWithoutPartyComponentsPartialHourlyAiEventTicker;
    }

    internal class PeriodicTicker<T>
    {
      private readonly List<T> _currentFrameToTickListFlattened = new List<T>();
      private bool _doParallel;
      private MBReadOnlyList<T> _list;
      private Action<T> _action;

      [SaveableProperty(1)]
      private double TickDebt { get; set; }

      [SaveableProperty(2)]
      private int Index { get; set; }

      internal PeriodicTicker()
      {
        this.TickDebt = 0.0;
        this.Index = -1;
      }

      internal void Initialize(MBReadOnlyList<T> list, Action<T> action, bool doParallel)
      {
        this._list = list;
        this._action = action;
        this._doParallel = doParallel;
      }

      internal void PeriodicTickSome(double timeUnitsElapsed)
      {
        if (this._list.Count == 0)
        {
          this.TickDebt = 0.0;
        }
        else
        {
          for (this.TickDebt += timeUnitsElapsed * (double) this._list.Count; this.TickDebt > 1.0; --this.TickDebt)
          {
            ++this.Index;
            if (this.Index >= this._list.Count)
              this.Index = 0;
            if (this._doParallel)
              this._currentFrameToTickListFlattened.Add(this._list[this.Index]);
            else
              this._action(this._list[this.Index]);
          }
          if (!this._doParallel || this._currentFrameToTickListFlattened.Count <= 0)
            return;
          TWParallel.For(0, this._currentFrameToTickListFlattened.Count, (TWParallel.ParallelForAuxPredicate) ((startInclusive, endExclusive) =>
          {
            for (int index = startInclusive; index < endExclusive; ++index)
              this._action(this._currentFrameToTickListFlattened[index]);
          }), 1);
          this._currentFrameToTickListFlattened.Clear();
        }
      }

      public override string ToString()
      {
        return "PeriodicTicker  @" + (this.Index == -1 ? (object) "null" : (object) this._list[this.Index].ToString()) + "\t\t(" + (object) this.Index + " / " + (object) this._list.Count + ")";
      }

      protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
      {
      }
    }
  }
}
