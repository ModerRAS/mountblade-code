// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.CombatLogNetworkMessage
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class CombatLogNetworkMessage : GameNetworkMessage
  {
    public int AttackerAgentIndex { get; private set; }

    public int VictimAgentIndex { get; private set; }

    public bool IsVictimEntity { get; private set; }

    public DamageTypes DamageType { get; private set; }

    public bool CrushedThrough { get; private set; }

    public bool Chamber { get; private set; }

    public bool IsRangedAttack { get; private set; }

    public bool IsFriendlyFire { get; private set; }

    public bool IsFatalDamage { get; private set; }

    public BoneBodyPartType BodyPartHit { get; private set; }

    public float HitSpeed { get; private set; }

    public float Distance { get; private set; }

    public int InflictedDamage { get; private set; }

    public int AbsorbedDamage { get; private set; }

    public int ModifiedDamage { get; private set; }

    public CombatLogNetworkMessage()
    {
    }

    public CombatLogNetworkMessage(
      int attackerAgentIndex,
      int victimAgentIndex,
      GameEntity hitEntity,
      CombatLogData combatLogData)
    {
      this.AttackerAgentIndex = attackerAgentIndex;
      this.VictimAgentIndex = victimAgentIndex;
      this.IsVictimEntity = (NativeObject) hitEntity != (NativeObject) null;
      this.DamageType = combatLogData.DamageType;
      this.CrushedThrough = combatLogData.CrushedThrough;
      this.Chamber = combatLogData.Chamber;
      this.IsRangedAttack = combatLogData.IsRangedAttack;
      this.IsFriendlyFire = combatLogData.IsFriendlyFire;
      this.IsFatalDamage = combatLogData.IsFatalDamage;
      this.BodyPartHit = combatLogData.BodyPartHit;
      this.HitSpeed = combatLogData.HitSpeed;
      this.Distance = combatLogData.Distance;
      this.InflictedDamage = combatLogData.InflictedDamage;
      this.AbsorbedDamage = combatLogData.AbsorbedDamage;
      this.ModifiedDamage = combatLogData.ModifiedDamage;
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteAgentIndexToPacket(this.AttackerAgentIndex);
      GameNetworkMessage.WriteAgentIndexToPacket(this.VictimAgentIndex);
      GameNetworkMessage.WriteBoolToPacket(this.IsVictimEntity);
      GameNetworkMessage.WriteIntToPacket((int) this.DamageType, CompressionBasic.AgentHitDamageTypeCompressionInfo);
      GameNetworkMessage.WriteBoolToPacket(this.CrushedThrough);
      GameNetworkMessage.WriteBoolToPacket(this.Chamber);
      GameNetworkMessage.WriteBoolToPacket(this.IsRangedAttack);
      GameNetworkMessage.WriteBoolToPacket(this.IsFriendlyFire);
      GameNetworkMessage.WriteBoolToPacket(this.IsFatalDamage);
      GameNetworkMessage.WriteIntToPacket((int) this.BodyPartHit, CompressionBasic.AgentHitBodyPartCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.HitSpeed, CompressionBasic.AgentHitRelativeSpeedCompressionInfo);
      GameNetworkMessage.WriteFloatToPacket(this.Distance, CompressionBasic.AgentHitRelativeSpeedCompressionInfo);
      this.AbsorbedDamage = MBMath.ClampInt(this.AbsorbedDamage, 0, 2000);
      this.InflictedDamage = MBMath.ClampInt(this.InflictedDamage, 0, 2000);
      this.ModifiedDamage = MBMath.ClampInt(this.ModifiedDamage, -2000, 2000);
      GameNetworkMessage.WriteIntToPacket(this.AbsorbedDamage, CompressionBasic.AgentHitDamageCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.InflictedDamage, CompressionBasic.AgentHitDamageCompressionInfo);
      GameNetworkMessage.WriteIntToPacket(this.ModifiedDamage, CompressionBasic.AgentHitModifiedDamageCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.AttackerAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.VictimAgentIndex = GameNetworkMessage.ReadAgentIndexFromPacket(ref bufferReadValid);
      this.IsVictimEntity = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.DamageType = (DamageTypes) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AgentHitDamageTypeCompressionInfo, ref bufferReadValid);
      this.CrushedThrough = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.Chamber = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsRangedAttack = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsFriendlyFire = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.IsFatalDamage = GameNetworkMessage.ReadBoolFromPacket(ref bufferReadValid);
      this.BodyPartHit = (BoneBodyPartType) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AgentHitBodyPartCompressionInfo, ref bufferReadValid);
      this.HitSpeed = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.AgentHitRelativeSpeedCompressionInfo, ref bufferReadValid);
      this.Distance = GameNetworkMessage.ReadFloatFromPacket(CompressionBasic.AgentHitRelativeSpeedCompressionInfo, ref bufferReadValid);
      this.AbsorbedDamage = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AgentHitDamageCompressionInfo, ref bufferReadValid);
      this.InflictedDamage = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AgentHitDamageCompressionInfo, ref bufferReadValid);
      this.ModifiedDamage = GameNetworkMessage.ReadIntFromPacket(CompressionBasic.AgentHitModifiedDamageCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.AgentsDetailed;
    }

    protected override string OnGetLogFormat() => "Agent got hit.";
  }
}
