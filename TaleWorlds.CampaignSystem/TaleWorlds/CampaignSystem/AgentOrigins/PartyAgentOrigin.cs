// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.AgentOrigins.PartyAgentOrigin
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.AgentOrigins
{
  public class PartyAgentOrigin : IAgentOriginBase
  {
    private PartyBase _party;
    private CharacterObject _troop;
    private readonly UniqueTroopDescriptor _descriptor;
    private readonly bool _alwaysWounded;

    public PartyBase Party
    {
      get
      {
        PartyBase party = this._party;
        if (this._troop.IsHero && this._troop.HeroObject.PartyBelongedTo != null && this._troop.HeroObject.PartyBelongedTo.Party != null)
          party = this._troop.HeroObject.PartyBelongedTo.Party;
        return party;
      }
      set => this._party = value;
    }

    public IBattleCombatant BattleCombatant => (IBattleCombatant) this.Party;

    public Banner Banner
    {
      get
      {
        return this.Party == null ? (!this._troop.IsHero ? (Banner) null : this._troop.HeroObject.MapFaction.Banner) : (this.Party.LeaderHero == null ? this.Party.MapFaction.Banner : this.Party.LeaderHero.ClanBanner);
      }
    }

    public BasicCharacterObject Troop => (BasicCharacterObject) this._troop;

    public int Rank { get; private set; }

    public bool IsUnderPlayersCommand
    {
      get
      {
        PartyBase party = this.Party;
        return party != null && party == PartyBase.MainParty || party.Owner == Hero.MainHero || party.MapFaction.Leader == Hero.MainHero;
      }
    }

    public uint FactionColor
    {
      get
      {
        return this.Party == null ? this._troop.HeroObject.MapFaction.Color : this.Party.MapFaction.Color2;
      }
    }

    public uint FactionColor2
    {
      get
      {
        return this.Party == null ? this._troop.HeroObject.MapFaction.Color2 : this.Party.MapFaction.Color2;
      }
    }

    public int Seed
    {
      get
      {
        return this.Party == null ? 0 : CharacterHelper.GetPartyMemberFaceSeed(this.Party, (BasicCharacterObject) this._troop, this.Rank);
      }
    }

    public int UniqueSeed => this._descriptor.UniqueSeed;

    public PartyAgentOrigin(
      PartyBase partyBase,
      CharacterObject characterObject,
      int rank = -1,
      UniqueTroopDescriptor uniqueNo = default (UniqueTroopDescriptor),
      bool alwaysWounded = false)
    {
      this.Party = partyBase;
      this._troop = characterObject;
      this._descriptor = !uniqueNo.IsValid ? new UniqueTroopDescriptor(Game.Current.NextUniqueTroopSeed) : uniqueNo;
      this.Rank = rank == -1 ? MBRandom.RandomInt(10000) : rank;
      this._alwaysWounded = alwaysWounded;
    }

    public void SetWounded()
    {
      if (this._troop.IsHero)
        this._troop.HeroObject.MakeWounded();
      if (this.Party == null)
        return;
      this.Party.MemberRoster.AddToCounts(this._troop, 0, woundedCount: 1);
    }

    public void SetKilled()
    {
      if (this._alwaysWounded)
        this.SetWounded();
      else if (this._troop.IsHero)
      {
        KillCharacterAction.ApplyByBattle(this._troop.HeroObject, (Hero) null);
      }
      else
      {
        if (this._troop.IsHero)
          return;
        this.Party?.MemberRoster.AddToCounts(this._troop, -1);
      }
    }

    public void SetRouted()
    {
    }

    public void OnAgentRemoved(float agentHealth)
    {
      if (!this._troop.IsHero || this._troop.HeroObject.HeroState == Hero.CharacterStates.Dead)
        return;
      this._troop.HeroObject.HitPoints = MathF.Max(1, MathF.Round(agentHealth));
    }

    void IAgentOriginBase.OnScoreHit(
      BasicCharacterObject victim,
      BasicCharacterObject captain,
      int damage,
      bool isFatal,
      bool isTeamKill,
      WeaponComponentData attackerWeapon)
    {
    }

    public void SetBanner(Banner banner) => throw new NotImplementedException();
  }
}
