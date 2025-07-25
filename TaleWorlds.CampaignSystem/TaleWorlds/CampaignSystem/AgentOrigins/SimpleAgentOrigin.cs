// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.AgentOrigins.SimpleAgentOrigin
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.AgentOrigins
{
  public class SimpleAgentOrigin : IAgentOriginBase
  {
    private CharacterObject _troop;
    private Banner _banner;
    private UniqueTroopDescriptor _descriptor;

    public BasicCharacterObject Troop => (BasicCharacterObject) this._troop;

    public bool IsUnderPlayersCommand
    {
      get
      {
        PartyBase party = this.Party;
        if (party == null)
          return false;
        return party == PartyBase.MainParty || party.Owner == Hero.MainHero || party.MapFaction.Leader == Hero.MainHero;
      }
    }

    public uint FactionColor
    {
      get
      {
        if (this.Party != null)
          return this.Party.MapFaction.Color;
        return this._troop.IsHero ? this._troop.HeroObject.MapFaction.Color : 0U;
      }
    }

    public uint FactionColor2
    {
      get
      {
        if (this.Party != null)
          return this.Party.MapFaction.Color2;
        return this._troop.IsHero ? this._troop.HeroObject.MapFaction.Color2 : 0U;
      }
    }

    public int Seed
    {
      get
      {
        return this.Party != null ? CharacterHelper.GetPartyMemberFaceSeed(this.Party, (BasicCharacterObject) this._troop, this.Rank) : CharacterHelper.GetDefaultFaceSeed((BasicCharacterObject) this._troop, this.Rank);
      }
    }

    public PartyBase Party
    {
      get
      {
        return !this._troop.IsHero || this._troop.HeroObject.PartyBelongedTo == null ? (PartyBase) null : this._troop.HeroObject.PartyBelongedTo.Party;
      }
    }

    public IBattleCombatant BattleCombatant => (IBattleCombatant) this.Party;

    public Banner Banner => this._banner;

    public int Rank { get; private set; }

    public int UniqueSeed => this._descriptor.UniqueSeed;

    public SimpleAgentOrigin(
      BasicCharacterObject troop,
      int rank = -1,
      Banner banner = null,
      UniqueTroopDescriptor descriptor = default (UniqueTroopDescriptor))
    {
      this._troop = (CharacterObject) troop;
      this._descriptor = descriptor;
      this.Rank = rank == -1 ? MBRandom.RandomInt(10000) : rank;
      this._banner = banner;
    }

    public void SetWounded()
    {
    }

    public void SetKilled()
    {
      if (!this._troop.IsHero)
        return;
      KillCharacterAction.ApplyByBattle(this._troop.HeroObject, (Hero) null);
    }

    public void SetRouted()
    {
    }

    public void OnAgentRemoved(float agentHealth)
    {
    }

    void IAgentOriginBase.OnScoreHit(
      BasicCharacterObject victim,
      BasicCharacterObject captain,
      int damage,
      bool isFatal,
      bool isTeamKill,
      WeaponComponentData attackerWeapon)
    {
      if (!isTeamKill)
        return;
      CharacterObject troop = this._troop;
      int xpAmount;
      Campaign.Current.Models.CombatXpModel.GetXpFromHit(troop, (CharacterObject) captain, (CharacterObject) victim, this.Party, damage, isFatal, CombatXpModel.MissionTypeEnum.Battle, out xpAmount);
      if (!troop.IsHero || attackerWeapon == null)
        return;
      SkillObject skillForWeapon = Campaign.Current.Models.CombatXpModel.GetSkillForWeapon(attackerWeapon, false);
      troop.HeroObject.AddSkillXp(skillForWeapon, (float) xpAmount);
    }

    public void SetBanner(Banner banner) => this._banner = banner;
  }
}
