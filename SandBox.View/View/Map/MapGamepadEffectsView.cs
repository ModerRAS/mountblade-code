// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapGamepadEffectsView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.View.Map
{
  public class MapGamepadEffectsView : MapView
  {
    private readonly float[] _lowFrequencyLevels = new float[5];
    private readonly float[] _lowFrequencyDurations = new float[5];
    private readonly float[] _highFrequencyLevels = new float[5];
    private readonly float[] _highFrequencyDurations = new float[5];

    protected internal override void CreateLayout()
    {
      base.CreateLayout();
      this.RegisterEvents();
    }

    protected internal override void OnFinalize()
    {
      base.OnFinalize();
      this.UnregisterEvents();
    }

    private void RegisterEvents()
    {
      CampaignEvents.VillageBeingRaided.AddNonSerializedListener((object) this, new Action<Village>(this.OnVillageRaid));
      CampaignEvents.OnSiegeBombardmentWallHitEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, BattleSideEnum, SiegeEngineType, bool>(this.OnSiegeBombardmentWallHit));
      CampaignEvents.OnSiegeEngineDestroyedEvent.AddNonSerializedListener((object) this, new Action<MobileParty, Settlement, BattleSideEnum, SiegeEngineType>(this.OnSiegeEngineDestroyed));
      CampaignEvents.WarDeclared.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, DeclareWarAction.DeclareWarDetail>(this.OnWarDeclared));
      CampaignEvents.OnPeaceOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<IFaction, int>(this.OnPeaceOfferedToPlayer));
      CampaignEvents.ArmyDispersed.AddNonSerializedListener((object) this, new Action<Army, Army.ArmyDispersionReason, bool>(this.OnArmyDispersed));
      CampaignEvents.HeroLevelledUp.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroLevelUp));
      CampaignEvents.KingdomDecisionAdded.AddNonSerializedListener((object) this, new Action<KingdomDecision, bool>(this.OnKingdomDecisionAdded));
      CampaignEvents.OnMainPartyStarvingEvent.AddNonSerializedListener((object) this, new Action(this.OnMainPartyStarving));
      CampaignEvents.RebellionFinished.AddNonSerializedListener((object) this, new Action<Settlement, Clan>(this.OnRebellionFinished));
      CampaignEvents.OnHideoutSpottedEvent.AddNonSerializedListener((object) this, new Action<PartyBase, PartyBase>(this.OnHideoutSpotted));
      CampaignEvents.HeroCreated.AddNonSerializedListener((object) this, new Action<Hero, bool>(this.OnHeroCreated));
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeace));
      CampaignEvents.HeroOrPartyTradedGold.AddNonSerializedListener((object) this, new Action<(Hero, PartyBase), (Hero, PartyBase), (int, string), bool>(this.OnHeroOrPartyTradedGold));
      CampaignEvents.PartyAttachedAnotherParty.AddNonSerializedListener((object) this, new Action<MobileParty>(this.OnPartyAttachedAnotherParty));
    }

    private void UnregisterEvents()
    {
      CampaignEvents.VillageBeingRaided.ClearListeners((object) this);
      CampaignEvents.OnSiegeBombardmentWallHitEvent.ClearListeners((object) this);
      CampaignEvents.OnSiegeEngineDestroyedEvent.ClearListeners((object) this);
      CampaignEvents.WarDeclared.ClearListeners((object) this);
      CampaignEvents.OnPeaceOfferedToPlayerEvent.ClearListeners((object) this);
      CampaignEvents.ArmyDispersed.ClearListeners((object) this);
      CampaignEvents.HeroLevelledUp.ClearListeners((object) this);
      CampaignEvents.KingdomDecisionAdded.ClearListeners((object) this);
      CampaignEvents.OnMainPartyStarvingEvent.ClearListeners((object) this);
      CampaignEvents.RebellionFinished.ClearListeners((object) this);
      CampaignEvents.OnHideoutSpottedEvent.ClearListeners((object) this);
      CampaignEvents.HeroCreated.ClearListeners((object) this);
      CampaignEvents.MakePeace.ClearListeners((object) this);
      CampaignEvents.HeroOrPartyTradedGold.ClearListeners((object) this);
      CampaignEvents.PartyAttachedAnotherParty.ClearListeners((object) this);
    }

    private void OnVillageRaid(Village village)
    {
      if (MobileParty.MainParty.CurrentSettlement != village.Settlement)
        return;
      this.SetRumbleWithRandomValues(0.2f, 0.4f);
    }

    private void OnSiegeBombardmentWallHit(
      MobileParty besiegerParty,
      Settlement besiegedSettlement,
      BattleSideEnum side,
      SiegeEngineType weapon,
      bool isWallCracked)
    {
      if (!isWallCracked || besiegerParty != MobileParty.MainParty && besiegedSettlement != MobileParty.MainParty.CurrentSettlement)
        return;
      this.SetRumbleWithRandomValues(0.3f, 0.8f);
    }

    private void OnSiegeEngineDestroyed(
      MobileParty besiegerParty,
      Settlement besiegedSettlement,
      BattleSideEnum side,
      SiegeEngineType destroyedEngine)
    {
      if (besiegerParty != MobileParty.MainParty && besiegedSettlement != MobileParty.MainParty.CurrentSettlement)
        return;
      this.SetRumbleWithRandomValues(0.05f, 0.3f, 4);
    }

    private void OnWarDeclared(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail declareWarDetail)
    {
      if (faction1 != Clan.PlayerClan.MapFaction && faction2 != Clan.PlayerClan.MapFaction)
        return;
      this.SetRumbleWithRandomValues(0.3f, 0.5f, 3);
    }

    private void OnPeaceOfferedToPlayer(IFaction opponentFaction, int tributeAmount)
    {
      this.SetRumbleWithRandomValues(0.2f, 0.4f, 3);
    }

    private void OnArmyDispersed(Army army, Army.ArmyDispersionReason reason, bool isPlayersArmy)
    {
      if (!isPlayersArmy && !army.Parties.Contains(MobileParty.MainParty))
        return;
      this.SetRumbleWithRandomValues((float) army.TotalManCount / 2000f, (float) army.TotalManCount / 1000f);
    }

    private void OnHeroLevelUp(Hero hero, bool shouldNotify)
    {
      if (hero != Hero.MainHero || GameStateManager.Current.ActiveState is GameLoadingState)
        return;
      this.SetRumbleWithRandomValues(0.1f, 0.3f, 3);
    }

    private void OnKingdomDecisionAdded(KingdomDecision decision, bool isPlayerInvolved)
    {
      if (!isPlayerInvolved)
        return;
      this.SetRumbleWithRandomValues(0.1f, 0.3f, 2);
    }

    private void OnMainPartyStarving() => this.SetRumbleWithRandomValues(0.2f, 0.4f);

    private void OnRebellionFinished(Settlement settlement, Clan oldOwnerClan)
    {
      if (oldOwnerClan != Clan.PlayerClan)
        return;
      this.SetRumbleWithRandomValues(0.2f, 0.4f);
    }

    private void OnHideoutSpotted(PartyBase party, PartyBase hideoutParty)
    {
      this.SetRumbleWithRandomValues(0.1f, 0.3f, 3);
    }

    private void OnHeroCreated(Hero hero, bool isBornNaturally = false)
    {
      if (hero.Father != Hero.MainHero && hero.Mother != Hero.MainHero)
        return;
      this.SetRumbleWithRandomValues(0.2f, 0.4f, 3);
    }

    private void OnMakePeace(
      IFaction side1Faction,
      IFaction side2Faction,
      MakePeaceAction.MakePeaceDetail detail)
    {
      if (side1Faction != Clan.PlayerClan.MapFaction && side2Faction != Clan.PlayerClan.MapFaction)
        return;
      this.SetRumbleWithRandomValues(0.2f, 0.4f, 3);
    }

    private void OnHeroOrPartyTradedGold(
      (Hero, PartyBase) giver,
      (Hero, PartyBase) recipient,
      (int, string) goldAmount,
      bool showNotification)
    {
      if (giver.Item1 != Hero.MainHero || Hero.MainHero.Gold != 0)
        return;
      this.SetRumbleWithRandomValues(0.1f, 0.3f, 3);
    }

    private void OnPartyAttachedAnotherParty(MobileParty party)
    {
      if (party.Army == null || party.Army.LeaderParty != MobileParty.MainParty)
        return;
      this.SetRumbleWithRandomValues(0.1f, 0.3f, 3);
    }

    protected internal override void OnFrameTick(float dt)
    {
      base.OnFrameTick(dt);
      if (!Input.IsKeyDown(InputKey.BackSpace))
        return;
      this.SetRumbleWithRandomValues(0.5f, 0.0f);
    }

    private void SetRumbleWithRandomValues(float baseValue = 0.0f, float offsetRange = 1f, int frequencyCount = 5)
    {
      this.SetRandomRumbleValues(baseValue, offsetRange, frequencyCount);
    }

    private void SetRandomRumbleValues(float baseValue, float offsetRange, int frequencyCount)
    {
      baseValue = MBMath.ClampFloat(baseValue, 0.0f, 1f);
      offsetRange = MBMath.ClampFloat(offsetRange, 0.0f, 1f - baseValue);
      frequencyCount = MBMath.ClampInt(frequencyCount, 2, 5);
      for (int index = 0; index < frequencyCount; ++index)
      {
        this._lowFrequencyLevels[index] = baseValue + MBRandom.RandomFloatRanged(offsetRange);
        this._lowFrequencyDurations[index] = baseValue + MBRandom.RandomFloatRanged(offsetRange);
        this._highFrequencyLevels[index] = baseValue + MBRandom.RandomFloatRanged(offsetRange);
        this._highFrequencyDurations[index] = baseValue + MBRandom.RandomFloatRanged(offsetRange);
      }
    }
  }
}
