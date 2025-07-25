// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.DynamicBodyCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class DynamicBodyCampaignBehavior : CampaignBehaviorBase
  {
    private const float DailyBuildDecrease = -0.015f;
    private const float DailyBuildIncrease = 0.025f;
    private const float DailyWeightDecreaseWhenStarving = -0.1f;
    private const float DailyWeightDecreaseWhenNotStarving = -0.025f;
    private const float DailyWeightIncrease = 0.025f;
    private CampaignTime _lastSettlementVisitTime = CampaignTime.Now;
    private CampaignTime _lastEncounterTime = CampaignTime.Now;
    private float _unmodifiedWeight = -1f;
    private float _unmodifiedBuild = -1f;

    private CampaignTime LastSettlementVisitTime
    {
      get
      {
        if (Hero.MainHero.CurrentSettlement != null)
          this._lastSettlementVisitTime = CampaignTime.Now;
        return this._lastSettlementVisitTime;
      }
      set => this._lastSettlementVisitTime = value;
    }

    private float MaxPlayerWeight => MathF.Min(1f, this._unmodifiedWeight * 1.3f);

    private float MinPlayerWeight => MathF.Max(0.0f, this._unmodifiedWeight * 0.7f);

    private float MaxPlayerBuild => MathF.Min(1f, this._unmodifiedBuild * 1.3f);

    private float MinPlayerBuild => MathF.Max(0.0f, this._unmodifiedBuild * 0.7f);

    private void DailyTick()
    {
      bool flag = (double) this.LastSettlementVisitTime.ElapsedDaysUntilNow < 1.0;
      Hero.MainHero.Weight = MBMath.ClampFloat(Hero.MainHero.Weight + (Hero.MainHero.CurrentSettlement == null & (Hero.MainHero.PartyBelongedTo != null && Hero.MainHero.PartyBelongedTo.Party.IsStarving) ? -0.1f : (flag ? 0.025f : -0.025f)), this.MinPlayerWeight, this.MaxPlayerWeight);
      Hero.MainHero.Build = MBMath.ClampFloat(Hero.MainHero.Build + ((MapEvent.PlayerMapEvent != null || PlayerSiege.PlayerSiegeEvent != null ? 1 : ((double) this._lastEncounterTime.ElapsedDaysUntilNow < 2.0 ? 1 : 0)) != 0 ? 0.025f : -0.015f), this.MinPlayerBuild, this.MaxPlayerBuild);
    }

    private void OnSettlementLeft(MobileParty party, Settlement settlement)
    {
      if (party == null || !party.IsMainParty)
        return;
      this.LastSettlementVisitTime = CampaignTime.Now;
    }

    private void OnMapEventEnded(MapEvent mapEvent)
    {
      if (!mapEvent.IsPlayerMapEvent)
        return;
      this._lastEncounterTime = CampaignTime.Now;
    }

    private void OnPlayerBodyPropertiesChanged()
    {
      this._unmodifiedBuild = Hero.MainHero.Build;
      this._unmodifiedWeight = Hero.MainHero.Weight;
    }

    private void OnPlayerCharacterChanged(
      Hero oldPlayer,
      Hero newPlayer,
      MobileParty newMainParty,
      bool isMainPartyChanged)
    {
      this._unmodifiedBuild = newPlayer.Build;
      this._unmodifiedWeight = newPlayer.Weight;
    }

    private void OnHeroCreated(Hero hero, bool bornNaturally)
    {
      if (bornNaturally)
        return;
      DynamicBodyProperties betweenMinMaxRange = CharacterHelper.GetDynamicBodyPropertiesBetweenMinMaxRange(hero.CharacterObject);
      hero.Weight = betweenMinMaxRange.Weight;
      hero.Build = betweenMinMaxRange.Build;
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter starter)
    {
      this.OnPlayerBodyPropertiesChanged();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnSettlementLeftEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement>(this.OnSettlementLeft));
      CampaignEvents.DailyTickEvent.AddNonSerializedListener((object) this, new Action(this.DailyTick));
      CampaignEvents.MapEventEnded.AddNonSerializedListener((object) this, new Action<MapEvent>(this.OnMapEventEnded));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.OnPlayerBodyPropertiesChangedEvent.AddNonSerializedListener((object) this, new Action(this.OnPlayerBodyPropertiesChanged));
      CampaignEvents.OnCharacterCreationIsOverEvent.AddNonSerializedListener((object) this, new Action(this.OnPlayerBodyPropertiesChanged));
      CampaignEvents.OnPlayerCharacterChangedEvent.AddNonSerializedListener((object) this, new Action<Hero, Hero, MobileParty, bool>(this.OnPlayerCharacterChanged));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<CampaignTime>("_lastSettlementVisitTime", ref this._lastSettlementVisitTime);
      dataStore.SyncData<CampaignTime>("_lastEncounterTime", ref this._lastEncounterTime);
      dataStore.SyncData<float>("_unmodifiedWeight", ref this._unmodifiedWeight);
      dataStore.SyncData<float>("_unmodifiedBuild", ref this._unmodifiedBuild);
    }
  }
}
