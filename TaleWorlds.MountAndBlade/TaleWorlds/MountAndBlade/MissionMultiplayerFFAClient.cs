// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerFFAClient
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionMultiplayerFFAClient : MissionMultiplayerGameModeBaseClient
  {
    public override bool IsGameModeUsingGold => false;

    public override bool IsGameModeTactical => false;

    public override bool IsGameModeUsingRoundCountdown => false;

    public override MultiplayerGameType GameType => MultiplayerGameType.FreeForAll;

    public override int GetGoldAmount() => 0;

    public override void OnGoldAmountChangedForRepresentative(
      MissionRepresentativeBase representative,
      int goldAmount)
    {
    }

    public override void AfterStart() => this.Mission.SetMissionMode(MissionMode.Battle, true);
  }
}
