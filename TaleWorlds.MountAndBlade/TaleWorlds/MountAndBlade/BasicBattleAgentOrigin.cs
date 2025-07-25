// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BasicBattleAgentOrigin
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BasicBattleAgentOrigin : IAgentOriginBase
  {
    private BasicCharacterObject _troop;

    bool IAgentOriginBase.IsUnderPlayersCommand => false;

    uint IAgentOriginBase.FactionColor => 0;

    uint IAgentOriginBase.FactionColor2 => 0;

    IBattleCombatant IAgentOriginBase.BattleCombatant => (IBattleCombatant) null;

    int IAgentOriginBase.UniqueSeed => 0;

    int IAgentOriginBase.Seed => 0;

    Banner IAgentOriginBase.Banner => (Banner) null;

    BasicCharacterObject IAgentOriginBase.Troop => this._troop;

    public BasicBattleAgentOrigin(BasicCharacterObject troop) => this._troop = troop;

    void IAgentOriginBase.SetWounded()
    {
    }

    void IAgentOriginBase.SetKilled()
    {
    }

    void IAgentOriginBase.SetRouted()
    {
    }

    void IAgentOriginBase.OnAgentRemoved(float agentHealth)
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
    }

    void IAgentOriginBase.SetBanner(Banner banner)
    {
    }
  }
}
