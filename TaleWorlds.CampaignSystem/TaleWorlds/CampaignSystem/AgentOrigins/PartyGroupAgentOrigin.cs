// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.AgentOrigins.PartyGroupAgentOrigin
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TroopSuppliers;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.AgentOrigins
{
  public class PartyGroupAgentOrigin : IAgentOriginBase
  {
    private readonly PartyGroupTroopSupplier _supplier;
    private readonly UniqueTroopDescriptor _descriptor;
    private readonly int _rank;
    private bool _isRemoved;

    internal PartyGroupAgentOrigin(
      PartyGroupTroopSupplier supplier,
      UniqueTroopDescriptor descriptor,
      int rank)
    {
      this._supplier = supplier;
      this._descriptor = descriptor;
      this._rank = rank;
    }

    public PartyBase Party => this._supplier.GetParty(this._descriptor);

    public IBattleCombatant BattleCombatant => (IBattleCombatant) this.Party;

    public Banner Banner
    {
      get
      {
        return this.Party.LeaderHero == null ? this.Party.MapFaction.Banner : this.Party.LeaderHero.ClanBanner;
      }
    }

    public int UniqueSeed => this._descriptor.UniqueSeed;

    public CharacterObject Troop => this._supplier.GetTroop(this._descriptor);

    BasicCharacterObject IAgentOriginBase.Troop => (BasicCharacterObject) this.Troop;

    public UniqueTroopDescriptor TroopDesc => this._descriptor;

    public int Rank => this._rank;

    public bool IsUnderPlayersCommand
    {
      get
      {
        return this.Troop == Hero.MainHero.CharacterObject || PartyGroupAgentOrigin.IsPartyUnderPlayerCommand(this.Party);
      }
    }

    public uint FactionColor => this.Party.MapFaction.Color;

    public uint FactionColor2 => this.Party.MapFaction.Color2;

    public int Seed
    {
      get
      {
        return CharacterHelper.GetPartyMemberFaceSeed(this.Party, (BasicCharacterObject) this.Troop, this.Rank);
      }
    }

    public void SetWounded()
    {
      if (this._isRemoved)
        return;
      this._supplier.OnTroopWounded(this._descriptor);
      this._isRemoved = true;
    }

    public void SetKilled()
    {
      if (this._isRemoved)
        return;
      this._supplier.OnTroopKilled(this._descriptor);
      if (this.Troop.IsHero)
        KillCharacterAction.ApplyByBattle(this.Troop.HeroObject, (Hero) null);
      this._isRemoved = true;
    }

    public void SetRouted()
    {
      if (this._isRemoved)
        return;
      this._supplier.OnTroopRouted(this._descriptor);
      this._isRemoved = true;
    }

    public void OnAgentRemoved(float agentHealth)
    {
      if (!this.Troop.IsHero)
        return;
      this.Troop.HeroObject.HitPoints = MathF.Max(1, MathF.Round(agentHealth));
    }

    void IAgentOriginBase.OnScoreHit(
      BasicCharacterObject victim,
      BasicCharacterObject captain,
      int damage,
      bool isFatal,
      bool isTeamKill,
      WeaponComponentData attackerWeapon)
    {
      this._supplier.OnTroopScoreHit(this._descriptor, victim, damage, isFatal, isTeamKill, attackerWeapon);
    }

    public void SetBanner(Banner banner) => throw new NotImplementedException();

    public static bool IsPartyUnderPlayerCommand(PartyBase party)
    {
      if (party == PartyBase.MainParty)
        return true;
      if (party.Side != PartyBase.MainParty.Side)
        return false;
      int num1 = party.Owner == Hero.MainHero ? 1 : 0;
      bool flag1 = party.MapFaction?.Leader == Hero.MainHero;
      bool flag2 = party.MobileParty != null && party.MobileParty.DefaultBehavior == AiBehavior.EscortParty && party.MobileParty.TargetParty == MobileParty.MainParty;
      bool flag3 = party.MobileParty != null && party.MobileParty.Army != null && party.MobileParty.Army.LeaderParty == MobileParty.MainParty;
      Settlement mapEventSettlement = party.MapEvent.MapEventSettlement;
      bool flag4 = mapEventSettlement != null && mapEventSettlement.OwnerClan.Leader == Hero.MainHero;
      int num2 = flag1 ? 1 : 0;
      return (num1 | num2 | (flag2 ? 1 : 0) | (flag3 ? 1 : 0) | (flag4 ? 1 : 0)) != 0;
    }
  }
}
