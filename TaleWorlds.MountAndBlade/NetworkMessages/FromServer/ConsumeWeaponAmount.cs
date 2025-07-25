// Decompiled with JetBrains decompiler
// Type: NetworkMessages.FromServer.ConsumeWeaponAmount
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace NetworkMessages.FromServer
{
  [DefineGameNetworkMessageType(GameNetworkMessageSendType.FromServer)]
  public sealed class ConsumeWeaponAmount : GameNetworkMessage
  {
    public MissionObjectId SpawnedItemEntityId { get; private set; }

    public short ConsumedAmount { get; private set; }

    public ConsumeWeaponAmount(MissionObjectId spawnedItemEntityId, short consumedAmount)
    {
      this.SpawnedItemEntityId = spawnedItemEntityId;
      this.ConsumedAmount = consumedAmount;
    }

    public ConsumeWeaponAmount()
    {
    }

    protected override void OnWrite()
    {
      GameNetworkMessage.WriteMissionObjectIdToPacket(this.SpawnedItemEntityId);
      GameNetworkMessage.WriteIntToPacket((int) this.ConsumedAmount, CompressionBasic.ItemDataValueCompressionInfo);
    }

    protected override bool OnRead()
    {
      bool bufferReadValid = true;
      this.SpawnedItemEntityId = GameNetworkMessage.ReadMissionObjectIdFromPacket(ref bufferReadValid);
      this.ConsumedAmount = (short) GameNetworkMessage.ReadIntFromPacket(CompressionBasic.ItemDataValueCompressionInfo, ref bufferReadValid);
      return bufferReadValid;
    }

    protected override MultiplayerMessageFilter OnGetLogFilter()
    {
      return MultiplayerMessageFilter.EquipmentDetailed;
    }

    protected override string OnGetLogFormat()
    {
      return "Consumed " + (object) this.ConsumedAmount + " from " + (object) this.SpawnedItemEntityId;
    }
  }
}
