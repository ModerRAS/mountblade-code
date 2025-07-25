// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionRepresentatives.SiegeMissionRepresentative
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using NetworkMessages.FromServer;
using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.Network.Messages;

#nullable disable
namespace TaleWorlds.MountAndBlade.MissionRepresentatives
{
  public class SiegeMissionRepresentative : MissionRepresentativeBase
  {
    private const int FirstRangedKillGold = 10;
    private const int FirstMeleeKillGold = 10;
    private const int FirstAssistGold = 10;
    private const int SecondAssistGold = 10;
    private const int ThirdAssistGold = 10;
    private const int FifthKillGold = 20;
    private const int TenthKillGold = 30;
    private GoldGainFlags _currentGoldGains;
    private int _killCountOnSpawn;
    private int _assistCountOnSpawn;

    public override void OnAgentSpawned()
    {
      this._currentGoldGains = (GoldGainFlags) 0;
      this._killCountOnSpawn = this.MissionPeer.KillCount;
      this._assistCountOnSpawn = this.MissionPeer.AssistCount;
    }

    public int GetGoldGainsFromKillDataAndUpdateFlags(
      MPPerkObject.MPPerkHandler killerPerkHandler,
      MPPerkObject.MPPerkHandler assistingHitterPerkHandler,
      MultiplayerClassDivisions.MPHeroClass victimClass,
      bool isAssist,
      bool isRanged,
      bool isFriendly)
    {
      int dataAndUpdateFlags = 0;
      List<KeyValuePair<ushort, int>> goldChangeEventList = new List<KeyValuePair<ushort, int>>();
      if (isAssist)
      {
        int num1 = 1;
        if (!isFriendly)
        {
          int num2 = (killerPerkHandler != null ? killerPerkHandler.GetRewardedGoldOnAssist() : 0) + (assistingHitterPerkHandler != null ? assistingHitterPerkHandler.GetGoldOnAssist() : 0);
          if (num2 > 0)
          {
            dataAndUpdateFlags += num2;
            this._currentGoldGains |= GoldGainFlags.PerkBonus;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 2048, num2));
          }
        }
        switch (this.MissionPeer.AssistCount - this._assistCountOnSpawn)
        {
          case 1:
            dataAndUpdateFlags += 10;
            this._currentGoldGains |= GoldGainFlags.FirstAssist;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 4, 10));
            break;
          case 2:
            dataAndUpdateFlags += 10;
            this._currentGoldGains |= GoldGainFlags.SecondAssist;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 8, 10));
            break;
          case 3:
            dataAndUpdateFlags += 10;
            this._currentGoldGains |= GoldGainFlags.ThirdAssist;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 16, 10));
            break;
          default:
            dataAndUpdateFlags += num1;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 256, num1));
            break;
        }
      }
      else
      {
        int attackerValue = 0;
        if (this.ControlledAgent != null)
        {
          attackerValue = MultiplayerClassDivisions.GetMPHeroClassForCharacter(this.ControlledAgent.Character).TroopCasualCost;
          int num = 2 + MathF.Max(0, (victimClass.TroopCasualCost - attackerValue) / 2);
          dataAndUpdateFlags += num;
          goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 128, num));
        }
        int goldOnKill = killerPerkHandler != null ? killerPerkHandler.GetGoldOnKill((float) attackerValue, (float) victimClass.TroopCasualCost) : 0;
        if (goldOnKill > 0)
        {
          dataAndUpdateFlags += goldOnKill;
          this._currentGoldGains |= GoldGainFlags.PerkBonus;
          goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 2048, goldOnKill));
        }
        switch (this.MissionPeer.KillCount - this._killCountOnSpawn)
        {
          case 5:
            dataAndUpdateFlags += 20;
            this._currentGoldGains |= GoldGainFlags.FifthKill;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 32, 20));
            break;
          case 10:
            dataAndUpdateFlags += 30;
            this._currentGoldGains |= GoldGainFlags.TenthKill;
            goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 64, 30));
            break;
        }
        if (isRanged && !this._currentGoldGains.HasAnyFlag<GoldGainFlags>(GoldGainFlags.FirstRangedKill))
        {
          dataAndUpdateFlags += 10;
          this._currentGoldGains |= GoldGainFlags.FirstRangedKill;
          goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 1, 10));
        }
        if (!isRanged && !this._currentGoldGains.HasAnyFlag<GoldGainFlags>(GoldGainFlags.FirstMeleeKill))
        {
          dataAndUpdateFlags += 10;
          this._currentGoldGains |= GoldGainFlags.FirstMeleeKill;
          goldChangeEventList.Add(new KeyValuePair<ushort, int>((ushort) 2, 10));
        }
      }
      int num3 = 0;
      if (this.MissionPeer.Team == Mission.Current.Teams.Attacker)
        num3 = MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.GetIntValue();
      else if (this.MissionPeer.Team == Mission.Current.Teams.Defender)
        num3 = MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.GetIntValue();
      if (num3 != 0 && (dataAndUpdateFlags > 0 || goldChangeEventList.Count > 0))
      {
        dataAndUpdateFlags = 0;
        float num4 = (float) (1.0 + (double) num3 * 0.0099999997764825821);
        for (int index1 = 0; index1 < goldChangeEventList.Count; ++index1)
        {
          KeyValuePair<ushort, int> keyValuePair1 = goldChangeEventList[index1];
          int num5 = (int) ((double) keyValuePair1.Value * (double) num4);
          List<KeyValuePair<ushort, int>> keyValuePairList = goldChangeEventList;
          int index2 = index1;
          keyValuePair1 = goldChangeEventList[index1];
          KeyValuePair<ushort, int> keyValuePair2 = new KeyValuePair<ushort, int>(keyValuePair1.Key, num5);
          keyValuePairList[index2] = keyValuePair2;
          dataAndUpdateFlags += num5;
        }
      }
      if (goldChangeEventList.Count > 0 && !this.Peer.Communicator.IsServerPeer && this.Peer.Communicator.IsConnectionActive)
      {
        GameNetwork.BeginModuleEventAsServer(this.Peer);
        GameNetwork.WriteMessage((GameNetworkMessage) new GoldGain(goldChangeEventList));
        GameNetwork.EndModuleEventAsServer();
      }
      return dataAndUpdateFlags;
    }

    public int GetGoldGainsFromObjectiveAssist(
      GameEntity objectiveMostParentEntity,
      float contributionRatio,
      bool isCompleted)
    {
      int fromObjectiveAssist = (int) ((double) contributionRatio * (double) this.GetTotalGoldDistributionForDestructable(objectiveMostParentEntity));
      if (fromObjectiveAssist > 0 && !this.Peer.Communicator.IsServerPeer && this.Peer.Communicator.IsConnectionActive)
      {
        GameNetwork.BeginModuleEventAsServer(this.Peer);
        GameNetwork.WriteMessage((GameNetworkMessage) new GoldGain(new List<KeyValuePair<ushort, int>>()
        {
          new KeyValuePair<ushort, int>(isCompleted ? (ushort) 512 : (ushort) 1024, fromObjectiveAssist)
        }));
        GameNetwork.EndModuleEventAsServer();
      }
      return fromObjectiveAssist;
    }

    public int GetGoldGainsFromAllyDeathReward(int baseAmount)
    {
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

    private int GetTotalGoldDistributionForDestructable(GameEntity objectiveMostParentEntity)
    {
      string str = (string) null;
      foreach (string tag in objectiveMostParentEntity.Tags)
      {
        if (tag.StartsWith("mp_siege_objective_"))
        {
          str = tag;
          break;
        }
      }
      if (str == null)
        return 20;
      switch (str.Replace("mp_siege_objective_", ""))
      {
        case "wall_breach":
        case "castle_gate":
          return 500;
        case "battering_ram":
        case "siege_tower":
          return 600;
        default:
          return 20;
      }
    }
  }
}
