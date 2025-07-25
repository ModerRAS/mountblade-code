// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignObjectManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Library;
using TaleWorlds.ObjectSystem;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Load;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class CampaignObjectManager
  {
    internal const uint HeroObjectManagerTypeID = 32;
    internal const uint MobilePartyObjectManagerTypeID = 14;
    internal const uint ClanObjectManagerTypeID = 18;
    internal const uint KingdomObjectManagerTypeID = 20;
    private CampaignObjectManager.ICampaignObjectType[] _objects;
    private Dictionary<Type, uint> _objectTypesAndNextIds;
    [SaveableField(20)]
    private readonly MBList<Hero> _deadOrDisabledHeroes;
    [SaveableField(30)]
    private readonly MBList<Hero> _aliveHeroes;
    [SaveableField(40)]
    private readonly MBList<Clan> _clans;
    [SaveableField(50)]
    private readonly MBList<Kingdom> _kingdoms;
    private MBList<IFaction> _factions;
    [SaveableField(71)]
    private MBList<MobileParty> _mobileParties;
    private MBList<MobileParty> _caravanParties;
    private MBList<MobileParty> _militiaParties;
    private MBList<MobileParty> _garrisonParties;
    private MBList<MobileParty> _banditParties;
    private MBList<MobileParty> _villagerParties;
    private MBList<MobileParty> _customParties;
    private MBList<MobileParty> _lordParties;
    private MBList<MobileParty> _partiesWithoutPartyComponent;

    [SaveableProperty(80)]
    public MBReadOnlyList<Settlement> Settlements { get; private set; }

    public MBReadOnlyList<MobileParty> MobileParties
    {
      get => (MBReadOnlyList<MobileParty>) this._mobileParties;
    }

    public MBReadOnlyList<MobileParty> CaravanParties
    {
      get => (MBReadOnlyList<MobileParty>) this._caravanParties;
    }

    public MBReadOnlyList<MobileParty> MilitiaParties
    {
      get => (MBReadOnlyList<MobileParty>) this._militiaParties;
    }

    public MBReadOnlyList<MobileParty> GarrisonParties
    {
      get => (MBReadOnlyList<MobileParty>) this._garrisonParties;
    }

    public MBReadOnlyList<MobileParty> BanditParties
    {
      get => (MBReadOnlyList<MobileParty>) this._banditParties;
    }

    public MBReadOnlyList<MobileParty> VillagerParties
    {
      get => (MBReadOnlyList<MobileParty>) this._villagerParties;
    }

    public MBReadOnlyList<MobileParty> LordParties
    {
      get => (MBReadOnlyList<MobileParty>) this._lordParties;
    }

    public MBReadOnlyList<MobileParty> CustomParties
    {
      get => (MBReadOnlyList<MobileParty>) this._customParties;
    }

    public MBReadOnlyList<MobileParty> PartiesWithoutPartyComponent
    {
      get => (MBReadOnlyList<MobileParty>) this._partiesWithoutPartyComponent;
    }

    public MBReadOnlyList<Hero> AliveHeroes => (MBReadOnlyList<Hero>) this._aliveHeroes;

    public MBReadOnlyList<Hero> DeadOrDisabledHeroes
    {
      get => (MBReadOnlyList<Hero>) this._deadOrDisabledHeroes;
    }

    public MBReadOnlyList<Clan> Clans => (MBReadOnlyList<Clan>) this._clans;

    public MBReadOnlyList<Kingdom> Kingdoms => (MBReadOnlyList<Kingdom>) this._kingdoms;

    public MBReadOnlyList<IFaction> Factions => (MBReadOnlyList<IFaction>) this._factions;

    public CampaignObjectManager()
    {
      this._objects = new CampaignObjectManager.ICampaignObjectType[5];
      this._mobileParties = new MBList<MobileParty>();
      this._caravanParties = new MBList<MobileParty>();
      this._militiaParties = new MBList<MobileParty>();
      this._garrisonParties = new MBList<MobileParty>();
      this._customParties = new MBList<MobileParty>();
      this._banditParties = new MBList<MobileParty>();
      this._villagerParties = new MBList<MobileParty>();
      this._lordParties = new MBList<MobileParty>();
      this._partiesWithoutPartyComponent = new MBList<MobileParty>();
      this._deadOrDisabledHeroes = new MBList<Hero>();
      this._aliveHeroes = new MBList<Hero>();
      this._clans = new MBList<Clan>();
      this._kingdoms = new MBList<Kingdom>();
      this._factions = new MBList<IFaction>();
    }

    private void InitializeManagerObjectLists()
    {
      this._objects[4] = (CampaignObjectManager.ICampaignObjectType) new CampaignObjectManager.CampaignObjectType<MobileParty>((IEnumerable<MobileParty>) this._mobileParties);
      this._objects[0] = (CampaignObjectManager.ICampaignObjectType) new CampaignObjectManager.CampaignObjectType<Hero>((IEnumerable<Hero>) this._deadOrDisabledHeroes);
      this._objects[1] = (CampaignObjectManager.ICampaignObjectType) new CampaignObjectManager.CampaignObjectType<Hero>((IEnumerable<Hero>) this._aliveHeroes);
      this._objects[2] = (CampaignObjectManager.ICampaignObjectType) new CampaignObjectManager.CampaignObjectType<Clan>((IEnumerable<Clan>) this._clans);
      this._objects[3] = (CampaignObjectManager.ICampaignObjectType) new CampaignObjectManager.CampaignObjectType<Kingdom>((IEnumerable<Kingdom>) this._kingdoms);
      this._objectTypesAndNextIds = new Dictionary<Type, uint>();
      foreach (CampaignObjectManager.ICampaignObjectType campaignObjectType in this._objects)
      {
        uint maxObjectSubId = campaignObjectType.GetMaxObjectSubId();
        uint num;
        if (this._objectTypesAndNextIds.TryGetValue(campaignObjectType.ObjectClass, out num))
        {
          if (num <= maxObjectSubId)
            this._objectTypesAndNextIds[campaignObjectType.ObjectClass] = maxObjectSubId + 1U;
        }
        else
          this._objectTypesAndNextIds.Add(campaignObjectType.ObjectClass, maxObjectSubId + 1U);
      }
    }

    [LoadInitializationCallback]
    private void OnLoad(MetaData metaData, ObjectLoadData objectLoadData)
    {
      this._objects = new CampaignObjectManager.ICampaignObjectType[5];
      this._factions = new MBList<IFaction>();
      this._caravanParties = new MBList<MobileParty>();
      this._militiaParties = new MBList<MobileParty>();
      this._garrisonParties = new MBList<MobileParty>();
      this._customParties = new MBList<MobileParty>();
      this._banditParties = new MBList<MobileParty>();
      this._villagerParties = new MBList<MobileParty>();
      this._lordParties = new MBList<MobileParty>();
      this._partiesWithoutPartyComponent = new MBList<MobileParty>();
    }

    internal void PreAfterLoad()
    {
      foreach (CampaignObjectManager.ICampaignObjectType campaignObjectType in this._objects)
        campaignObjectType.PreAfterLoad();
    }

    internal void AfterLoad()
    {
      foreach (CampaignObjectManager.ICampaignObjectType campaignObjectType in this._objects)
        campaignObjectType.AfterLoad();
    }

    internal void InitializeOnLoad()
    {
      this.Settlements = MBObjectManager.Instance.GetObjectTypeList<Settlement>();
      foreach (Clan clan in (List<Clan>) this._clans)
      {
        if (!this._factions.Contains((IFaction) clan))
          this._factions.Add((IFaction) clan);
      }
      foreach (Kingdom kingdom in (List<Kingdom>) this._kingdoms)
      {
        if (!this._factions.Contains((IFaction) kingdom))
          this._factions.Add((IFaction) kingdom);
      }
      foreach (MobileParty mobileParty in (List<MobileParty>) this._mobileParties)
      {
        mobileParty.UpdatePartyComponentFlags();
        this.AddPartyToAppropriateList(mobileParty);
      }
      this.InitializeManagerObjectLists();
    }

    internal void InitializeOnNewGame()
    {
      MBReadOnlyList<Hero> objectTypeList1 = MBObjectManager.Instance.GetObjectTypeList<Hero>();
      MBReadOnlyList<MobileParty> objectTypeList2 = MBObjectManager.Instance.GetObjectTypeList<MobileParty>();
      MBReadOnlyList<Clan> objectTypeList3 = MBObjectManager.Instance.GetObjectTypeList<Clan>();
      MBReadOnlyList<Kingdom> objectTypeList4 = MBObjectManager.Instance.GetObjectTypeList<Kingdom>();
      this.Settlements = MBObjectManager.Instance.GetObjectTypeList<Settlement>();
      foreach (Hero hero in (List<Hero>) objectTypeList1)
      {
        if (hero.HeroState == Hero.CharacterStates.Dead || hero.HeroState == Hero.CharacterStates.Disabled)
        {
          if (!this._deadOrDisabledHeroes.Contains(hero))
            this._deadOrDisabledHeroes.Add(hero);
        }
        else if (!this._aliveHeroes.Contains(hero))
          this._aliveHeroes.Add(hero);
      }
      foreach (Clan clan in (List<Clan>) objectTypeList3)
      {
        if (!this._clans.Contains(clan))
          this._clans.Add(clan);
        if (!this._factions.Contains((IFaction) clan))
          this._factions.Add((IFaction) clan);
      }
      foreach (Kingdom kingdom in (List<Kingdom>) objectTypeList4)
      {
        if (!this._kingdoms.Contains(kingdom))
          this._kingdoms.Add(kingdom);
        if (!this._factions.Contains((IFaction) kingdom))
          this._factions.Add((IFaction) kingdom);
      }
      foreach (MobileParty party in (List<MobileParty>) objectTypeList2)
      {
        this._mobileParties.Add(party);
        this.AddPartyToAppropriateList(party);
      }
      this.InitializeManagerObjectLists();
      this.InitializeCachedData();
    }

    private void InitializeCachedData()
    {
      foreach (Settlement settlement in (List<Settlement>) Settlement.All)
      {
        if (settlement.IsVillage)
          settlement.OwnerClan.OnBoundVillageAdded(settlement.Village);
      }
      foreach (Clan clan in (List<Clan>) Clan.All)
      {
        if (clan.Kingdom != null)
        {
          foreach (Hero hero in (List<Hero>) clan.Heroes)
            clan.Kingdom.OnHeroAdded(hero);
        }
      }
    }

    internal void AddMobileParty(MobileParty party)
    {
      party.Id = new MBGUID(14U, Campaign.Current.CampaignObjectManager.GetNextUniqueObjectIdOfType<MobileParty>());
      this._mobileParties.Add(party);
      this.OnItemAdded<MobileParty>(CampaignObjectManager.CampaignObjects.MobileParty, party);
      this.AddPartyToAppropriateList(party);
    }

    internal void RemoveMobileParty(MobileParty party)
    {
      this._mobileParties.Remove(party);
      this.OnItemRemoved<MobileParty>(CampaignObjectManager.CampaignObjects.MobileParty, party);
      this.RemovePartyFromAppropriateList(party);
    }

    internal void BeforePartyComponentChanged(MobileParty party)
    {
      this.RemovePartyFromAppropriateList(party);
    }

    internal void AfterPartyComponentChanged(MobileParty party)
    {
      this.AddPartyToAppropriateList(party);
    }

    internal void AddHero(Hero hero)
    {
      hero.Id = new MBGUID(32U, Campaign.Current.CampaignObjectManager.GetNextUniqueObjectIdOfType<Hero>());
      this.OnHeroAdded(hero);
    }

    internal void UnregisterDeadHero(Hero hero)
    {
      this._deadOrDisabledHeroes.Remove(hero);
      this.OnItemRemoved<Hero>(CampaignObjectManager.CampaignObjects.DeadOrDisabledHeroes, hero);
      CampaignEventDispatcher.Instance.OnHeroUnregistered(hero);
    }

    private void OnHeroAdded(Hero hero)
    {
      if (hero.HeroState == Hero.CharacterStates.Dead || hero.HeroState == Hero.CharacterStates.Disabled)
      {
        this._deadOrDisabledHeroes.Add(hero);
        this.OnItemAdded<Hero>(CampaignObjectManager.CampaignObjects.DeadOrDisabledHeroes, hero);
      }
      else
      {
        this._aliveHeroes.Add(hero);
        this.OnItemAdded<Hero>(CampaignObjectManager.CampaignObjects.AliveHeroes, hero);
      }
    }

    internal void HeroStateChanged(Hero hero, Hero.CharacterStates oldState)
    {
      int num1 = oldState == Hero.CharacterStates.Dead ? 1 : (oldState == Hero.CharacterStates.Disabled ? 1 : 0);
      bool flag = hero.HeroState == Hero.CharacterStates.Dead || hero.HeroState == Hero.CharacterStates.Disabled;
      int num2 = flag ? 1 : 0;
      if (num1 == num2)
        return;
      if (flag)
      {
        if (this._aliveHeroes.Contains(hero))
          this._aliveHeroes.Remove(hero);
      }
      else if (this._deadOrDisabledHeroes.Contains(hero))
        this._deadOrDisabledHeroes.Remove(hero);
      this.OnHeroAdded(hero);
    }

    internal void AddClan(Clan clan)
    {
      clan.Id = new MBGUID(18U, Campaign.Current.CampaignObjectManager.GetNextUniqueObjectIdOfType<Clan>());
      this._clans.Add(clan);
      this.OnItemAdded<Clan>(CampaignObjectManager.CampaignObjects.Clans, clan);
      this._factions.Add((IFaction) clan);
    }

    internal void RemoveClan(Clan clan)
    {
      if (this._clans.Contains(clan))
      {
        this._clans.Remove(clan);
        this.OnItemRemoved<Clan>(CampaignObjectManager.CampaignObjects.Clans, clan);
      }
      if (!this._factions.Contains((IFaction) clan))
        return;
      this._factions.Remove((IFaction) clan);
    }

    internal void AddKingdom(Kingdom kingdom)
    {
      kingdom.Id = new MBGUID(20U, Campaign.Current.CampaignObjectManager.GetNextUniqueObjectIdOfType<Kingdom>());
      this._kingdoms.Add(kingdom);
      this.OnItemAdded<Kingdom>(CampaignObjectManager.CampaignObjects.Kingdoms, kingdom);
      this._factions.Add((IFaction) kingdom);
    }

    private void AddPartyToAppropriateList(MobileParty party)
    {
      if (party.IsBandit)
        this._banditParties.Add(party);
      else if (party.IsCaravan)
        this._caravanParties.Add(party);
      else if (party.IsLordParty)
        this._lordParties.Add(party);
      else if (party.IsMilitia)
        this._militiaParties.Add(party);
      else if (party.IsVillager)
        this._villagerParties.Add(party);
      else if (party.IsCustomParty)
        this._customParties.Add(party);
      else if (party.IsGarrison)
        this._garrisonParties.Add(party);
      else
        this._partiesWithoutPartyComponent.Add(party);
    }

    private void RemovePartyFromAppropriateList(MobileParty party)
    {
      if (party.IsBandit)
        this._banditParties.Remove(party);
      else if (party.IsCaravan)
        this._caravanParties.Remove(party);
      else if (party.IsLordParty)
        this._lordParties.Remove(party);
      else if (party.IsMilitia)
        this._militiaParties.Remove(party);
      else if (party.IsVillager)
        this._villagerParties.Remove(party);
      else if (party.IsCustomParty)
        this._customParties.Remove(party);
      else if (party.IsGarrison)
        this._garrisonParties.Remove(party);
      else
        this._partiesWithoutPartyComponent.Remove(party);
    }

    private void OnItemAdded<T>(CampaignObjectManager.CampaignObjects targetList, T obj) where T : MBObjectBase
    {
      ((CampaignObjectManager.CampaignObjectType<T>) this._objects[(int) targetList])?.OnItemAdded(obj);
    }

    private void OnItemRemoved<T>(CampaignObjectManager.CampaignObjects targetList, T obj) where T : MBObjectBase
    {
      ((CampaignObjectManager.CampaignObjectType<T>) this._objects[(int) targetList])?.UnregisterItem(obj);
    }

    public T Find<T>(Predicate<T> predicate) where T : MBObjectBase
    {
      foreach (CampaignObjectManager.ICampaignObjectType campaignObjectType in this._objects)
      {
        if (typeof (T) == campaignObjectType.ObjectClass)
        {
          T obj = ((CampaignObjectManager.CampaignObjectType<T>) campaignObjectType).Find(predicate);
          if ((object) obj != null)
            return obj;
        }
      }
      return default (T);
    }

    private uint GetNextUniqueObjectIdOfType<T>() where T : MBObjectBase
    {
      uint uniqueObjectIdOfType;
      if (this._objectTypesAndNextIds.TryGetValue(typeof (T), out uniqueObjectIdOfType))
        this._objectTypesAndNextIds[typeof (T)] = uniqueObjectIdOfType + 1U;
      return uniqueObjectIdOfType;
    }

    public T Find<T>(string id) where T : MBObjectBase
    {
      foreach (CampaignObjectManager.ICampaignObjectType campaignObjectType in this._objects)
      {
        if (campaignObjectType != null && typeof (T) == campaignObjectType.ObjectClass)
        {
          T obj = ((CampaignObjectManager.CampaignObjectType<T>) campaignObjectType).Find(id);
          if ((object) obj != null)
            return obj;
        }
      }
      return default (T);
    }

    public string FindNextUniqueStringId<T>(string id) where T : MBObjectBase
    {
      List<CampaignObjectManager.CampaignObjectType<T>> lists = new List<CampaignObjectManager.CampaignObjectType<T>>();
      foreach (CampaignObjectManager.ICampaignObjectType campaignObjectType in this._objects)
      {
        if (campaignObjectType != null && typeof (T) == campaignObjectType.ObjectClass)
          lists.Add(campaignObjectType as CampaignObjectManager.CampaignObjectType<T>);
      }
      return CampaignObjectManager.CampaignObjectType<T>.FindNextUniqueStringId(lists, id);
    }

    internal static void AutoGeneratedStaticCollectObjectsCampaignObjectManager(
      object o,
      List<object> collectedObjects)
    {
      ((CampaignObjectManager) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      collectedObjects.Add((object) this._deadOrDisabledHeroes);
      collectedObjects.Add((object) this._aliveHeroes);
      collectedObjects.Add((object) this._clans);
      collectedObjects.Add((object) this._kingdoms);
      collectedObjects.Add((object) this._mobileParties);
      collectedObjects.Add((object) this.Settlements);
    }

    internal static object AutoGeneratedGetMemberValueSettlements(object o)
    {
      return (object) ((CampaignObjectManager) o).Settlements;
    }

    internal static object AutoGeneratedGetMemberValue_deadOrDisabledHeroes(object o)
    {
      return (object) ((CampaignObjectManager) o)._deadOrDisabledHeroes;
    }

    internal static object AutoGeneratedGetMemberValue_aliveHeroes(object o)
    {
      return (object) ((CampaignObjectManager) o)._aliveHeroes;
    }

    internal static object AutoGeneratedGetMemberValue_clans(object o)
    {
      return (object) ((CampaignObjectManager) o)._clans;
    }

    internal static object AutoGeneratedGetMemberValue_kingdoms(object o)
    {
      return (object) ((CampaignObjectManager) o)._kingdoms;
    }

    internal static object AutoGeneratedGetMemberValue_mobileParties(object o)
    {
      return (object) ((CampaignObjectManager) o)._mobileParties;
    }

    private interface ICampaignObjectType : IEnumerable
    {
      Type ObjectClass { get; }

      void PreAfterLoad();

      void AfterLoad();

      uint GetMaxObjectSubId();
    }

    private class CampaignObjectType<T> : 
      CampaignObjectManager.ICampaignObjectType,
      IEnumerable,
      IEnumerable<T>
      where T : MBObjectBase
    {
      private readonly IEnumerable<T> _registeredObjects;

      public uint MaxCreatedPostfixIndex { get; private set; }

      public CampaignObjectType(IEnumerable<T> registeredObjects)
      {
        this._registeredObjects = registeredObjects;
        foreach (T registeredObject in this._registeredObjects)
        {
          (string str, uint number) idParts = CampaignObjectManager.CampaignObjectType<T>.GetIdParts(registeredObject.StringId);
          if (idParts.number > this.MaxCreatedPostfixIndex)
            this.MaxCreatedPostfixIndex = idParts.number;
        }
      }

      Type CampaignObjectManager.ICampaignObjectType.ObjectClass => typeof (T);

      public void PreAfterLoad()
      {
        foreach (T obj in this._registeredObjects.ToList<T>())
          obj.PreAfterLoadInternal();
      }

      public void AfterLoad()
      {
        foreach (T obj in this._registeredObjects.ToList<T>())
        {
          obj.IsReady = true;
          obj.AfterLoadInternal();
        }
      }

      IEnumerator<T> IEnumerable<T>.GetEnumerator() => this._registeredObjects.GetEnumerator();

      IEnumerator IEnumerable.GetEnumerator()
      {
        return (IEnumerator) this._registeredObjects.GetEnumerator();
      }

      public uint GetMaxObjectSubId()
      {
        uint maxObjectSubId = 0;
        foreach (T registeredObject in this._registeredObjects)
        {
          if (registeredObject.Id.SubId > maxObjectSubId)
            maxObjectSubId = registeredObject.Id.SubId;
        }
        return maxObjectSubId;
      }

      public void OnItemAdded(T item)
      {
        (string str, uint number) idParts = CampaignObjectManager.CampaignObjectType<T>.GetIdParts(item.StringId);
        if (idParts.number > this.MaxCreatedPostfixIndex)
          this.MaxCreatedPostfixIndex = idParts.number;
        this.RegisterItem(item);
      }

      private void RegisterItem(T item) => item.IsReady = true;

      public void UnregisterItem(T item) => item.IsReady = false;

      public T Find(string id)
      {
        foreach (T registeredObject in this._registeredObjects)
        {
          if (registeredObject.StringId == id)
            return registeredObject;
        }
        return default (T);
      }

      public T Find(Predicate<T> predicate)
      {
        foreach (T registeredObject in this._registeredObjects)
        {
          if (predicate(registeredObject))
            return registeredObject;
        }
        return default (T);
      }

      public static string FindNextUniqueStringId(
        List<CampaignObjectManager.CampaignObjectType<T>> lists,
        string id)
      {
        if (!CampaignObjectManager.CampaignObjectType<T>.Exist(lists, id))
          return id;
        (string str, uint number) idParts = CampaignObjectManager.CampaignObjectType<T>.GetIdParts(id);
        return idParts.str + (object) (MathF.Max(idParts.number, lists.Max<CampaignObjectManager.CampaignObjectType<T>, uint>((Func<CampaignObjectManager.CampaignObjectType<T>, uint>) (x => x.MaxCreatedPostfixIndex))) + 1U);
      }

      private static (string str, uint number) GetIdParts(string stringId)
      {
        int index = stringId.Length - 1;
        while (index > 0 && char.IsDigit(stringId[index]))
          --index;
        string str = stringId.Substring(0, index + 1);
        uint result = 0;
        if (index < stringId.Length - 1)
          uint.TryParse(stringId.Substring(index + 1, stringId.Length - index - 1), out result);
        int num = (int) result;
        return (str, (uint) num);
      }

      private static bool Exist(
        List<CampaignObjectManager.CampaignObjectType<T>> lists,
        string id)
      {
        foreach (CampaignObjectManager.CampaignObjectType<T> list in lists)
        {
          if ((object) list.Find(id) != null)
            return true;
        }
        return false;
      }
    }

    private enum CampaignObjects
    {
      DeadOrDisabledHeroes,
      AliveHeroes,
      Clans,
      Kingdoms,
      MobileParty,
      ObjectCount,
    }
  }
}
