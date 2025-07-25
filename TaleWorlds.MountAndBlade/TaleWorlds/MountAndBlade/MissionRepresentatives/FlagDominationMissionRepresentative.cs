// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionRepresentatives.FlagDominationMissionRepresentative
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade.MissionRepresentatives
{
  public class FlagDominationMissionRepresentative : MissionRepresentativeBase
  {
    private bool _survivedLastRound;

    private bool Forfeited => this.Gold < 0;

    public int GetGoldAmountForVisual() => this.Gold < 0 ? 80 : this.Gold;

    public void UpdateSelectedClassServer(Agent agent) => this._survivedLastRound = agent != null;

    public bool CheckIfSurvivedLastRoundAndReset()
    {
      int num = this._survivedLastRound ? 1 : 0;
      this._survivedLastRound = false;
      return num != 0;
    }

    public int GetGoldGainsFromKillData(
      MPPerkObject.MPPerkHandler killerPerkHandler,
      MPPerkObject.MPPerkHandler assistingHitterPerkHandler,
      MultiplayerClassDivisions.MPHeroClass victimClass,
      bool isAssist,
      bool isFriendly)
    {
      if (isFriendly || this.Forfeited)
        return 0;
      int gainsFromKillData;
      if (isAssist)
      {
        gainsFromKillData = (killerPerkHandler != null ? killerPerkHandler.GetRewardedGoldOnAssist() : 0) + (assistingHitterPerkHandler != null ? assistingHitterPerkHandler.GetGoldOnAssist() : 0);
      }
      else
      {
        int troopBattleCost = this.ControlledAgent != null ? MultiplayerClassDivisions.GetMPHeroClassForCharacter(this.ControlledAgent.Character).TroopBattleCost : 0;
        gainsFromKillData = killerPerkHandler != null ? killerPerkHandler.GetGoldOnKill((float) troopBattleCost, (float) victimClass.TroopBattleCost) : 0;
      }
      if (gainsFromKillData > 0)
      {
        GameNetwork.BeginModuleEventAsServer(this.Peer);
        GameNetwork.WriteMessage((GameNetworkMessage) new GoldGain(new List<KeyValuePair<ushort, int>>()
        {
          new KeyValuePair<ushort, int>((ushort) 2048, gainsFromKillData)
        }));
        GameNetwork.EndModuleEventAsServer();
      }
      return gainsFromKillData;
    }

    public int GetGoldGainFromKillDataAndUpdateFlags(
      MultiplayerClassDivisions.MPHeroClass victimClass,
      bool isAssist)
    {
      int dataAndUpdateFlags = 0;
      int num1 = 50;
      List<KeyValuePair<ushort, int>> goldChangeEventList = new List<KeyValuePair<ushort, int>>();
      if (this.ControlledAgent != null)
        num1 += victimClass.TroopBattleCost - MultiplayerClassDivisions.GetMPHeroClassForCharacter(this.ControlledAgent.Character).TroopBattleCost / 2;
      if (isAssist)
      {
        int num2 = MathF.Max(5, num1 / 10);
        dataAndUpdateFlags += num2;
        goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 256, num2));
      }
      else if (this.ControlledAgent != null)
      {
        int num3 = MathF.Max(10, num1 / 5);
        dataAndUpdateFlags += num3;
        goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 128, num3));
      }
      if (goldChangeEventList.Count > 0 && !this.Peer.Communicator.IsServerPeer && this.Peer.Communicator.IsConnectionActive)
      {
        GameNetwork.BeginModuleEventAsServer(this.Peer);
        GameNetwork.WriteMessage((GameNetworkMessage) new GoldGain(goldChangeEventList));
        GameNetwork.EndModuleEventAsServer();
      }
      return dataAndUpdateFlags;
    }

    public int GetGoldGainsFromAllyDeathReward(int baseAmount)
    {
      if (this.Forfeited)
        return 0;
      if (baseAmount > 0 && !this.Peer.Communicator.IsServerPeer && this.Peer.Communicator.IsConnectionActive)
      {
        GameNetwork.BeginModuleEventAsServer(this.Peer);
        GameNetwork.WriteMessage((GameNetworkMessage) new GoldGain(new List<KeyValuePair<ushort, int>>()
        {
          new KeyValuePair<ushort, int>((ushort) 2048, baseAmount)
        }));
        GameNetwork.EndModuleEventAsServer();
      }
      return baseAmount;
    }
  }
}
