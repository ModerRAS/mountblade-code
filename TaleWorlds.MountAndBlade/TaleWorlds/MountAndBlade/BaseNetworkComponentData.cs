// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BaseNetworkComponentData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BaseNetworkComponentData : UdpNetworkComponent
  {
    public const float MaxIntermissionStateTime = 240f;

    public int CurrentBattleIndex { get; private set; }

    public void UpdateCurrentBattleIndex(int currentBattleIndex)
    {
      this.CurrentBattleIndex = currentBattleIndex;
    }
  }
}
