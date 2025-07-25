// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerOptions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Diamond;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerOptions
  {
    private const int PlayerCountLimitMin = 1;
    private const int PlayerCountLimitMax = 1023;
    private const int PlayerCountLimitForMatchStartMin = 0;
    private const int PlayerCountLimitForMatchStartMax = 20;
    private const int MapTimeLimitMin = 1;
    private const int MapTimeLimitMax = 60;
    private const int RoundLimitMin = 1;
    private const int RoundLimitMax = 99;
    private const int RoundTimeLimitMin = 60;
    private const int RoundTimeLimitMax = 3600;
    private const int RoundPreparationTimeLimitMin = 2;
    private const int RoundPreparationTimeLimitMax = 60;
    private const int RespawnPeriodMin = 1;
    private const int RespawnPeriodMax = 60;
    private const int GoldGainChangePercentageMin = -100;
    private const int GoldGainChangePercentageMax = 100;
    private const int PollAcceptThresholdMin = 0;
    private const int PollAcceptThresholdMax = 10;
    private const int BotsPerTeamLimitMin = 0;
    private const int BotsPerTeamLimitMax = 510;
    private const int BotsPerFormationLimitMin = 0;
    private const int BotsPerFormationLimitMax = 100;
    private const int FriendlyFireDamagePercentMin = 0;
    private const int FriendlyFireDamagePercentMax = 100;
    private const int GameDefinitionIdMin = -2147483648;
    private const int GameDefinitionIdMax = 2147483647;
    private const int MaxScoreToEndDuel = 7;
    private static MultiplayerOptions _instance;
    private readonly MultiplayerOptions.MultiplayerOptionsContainer _default;
    private readonly MultiplayerOptions.MultiplayerOptionsContainer _current;
    private readonly MultiplayerOptions.MultiplayerOptionsContainer _next;
    public MultiplayerOptions.OptionsCategory CurrentOptionsCategory;

    public static MultiplayerOptions Instance
    {
      get
      {
        return MultiplayerOptions._instance ?? (MultiplayerOptions._instance = new MultiplayerOptions());
      }
    }

    public MultiplayerOptions()
    {
      this._default = new MultiplayerOptions.MultiplayerOptionsContainer();
      this._current = new MultiplayerOptions.MultiplayerOptionsContainer();
      this._next = new MultiplayerOptions.MultiplayerOptionsContainer();
      for (MultiplayerOptions.OptionType optionType = MultiplayerOptions.OptionType.ServerName; optionType < MultiplayerOptions.OptionType.NumOfSlots; ++optionType)
      {
        this._current.CreateOption(optionType);
        this._default.CreateOption(optionType);
      }
      MBReadOnlyList<MultiplayerGameTypeInfo> multiplayerGameTypes = Module.CurrentModule.GetMultiplayerGameTypes();
      if (multiplayerGameTypes.Count > 0)
      {
        MultiplayerGameTypeInfo multiplayerGameTypeInfo = multiplayerGameTypes[0];
        this._current.UpdateOptionValue(MultiplayerOptions.OptionType.GameType, multiplayerGameTypeInfo.GameType);
        this._current.UpdateOptionValue(MultiplayerOptions.OptionType.PremadeMatchGameMode, multiplayerGameTypes.First<MultiplayerGameTypeInfo>((Func<MultiplayerGameTypeInfo, bool>) (info => info.GameType == "Skirmish")).GameType);
        this._current.UpdateOptionValue(MultiplayerOptions.OptionType.Map, multiplayerGameTypeInfo.Scenes.FirstOrDefault<string>());
      }
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.CultureTeam1, MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>()[0].StringId);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.CultureTeam2, MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>()[2].StringId);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.MaxNumberOfPlayers, 120);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.MinNumberOfPlayersForMatchStart, 1);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.WarmupTimeLimit, 5);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.MapTimeLimit, 30);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.RoundTimeLimit, 120);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.RoundPreparationTimeLimit, 10);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.RoundTotal, 1);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.RespawnPeriodTeam1, 3);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.RespawnPeriodTeam2, 3);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.MinScoreToWinMatch, 120000);
      this._current.UpdateOptionValue(MultiplayerOptions.OptionType.AutoTeamBalanceThreshold, 0);
      this._current.CopyAllValuesTo(this._next);
      this._current.CopyAllValuesTo(this._default);
    }

    public static void Release() => MultiplayerOptions._instance = (MultiplayerOptions) null;

    public MultiplayerOptions.MultiplayerOption GetOptionFromOptionType(
      MultiplayerOptions.OptionType optionType,
      MultiplayerOptions.MultiplayerOptionsAccessMode mode = MultiplayerOptions.MultiplayerOptionsAccessMode.CurrentMapOptions)
    {
      return this.GetContainer(mode).GetOptionFromOptionType(optionType);
    }

    public void OnGameTypeChanged(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode = MultiplayerOptions.MultiplayerOptionsAccessMode.CurrentMapOptions)
    {
      string str = "";
      if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.Default)
        str = MultiplayerOptions.OptionType.GameType.GetStrValue(mode);
      else if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
        str = MultiplayerOptions.OptionType.PremadeMatchGameMode.GetStrValue(mode);
      MultiplayerOptions.OptionType.DisableInactivityKick.SetValue(false);
      switch (str)
      {
        case "Battle":
          this.InitializeForBattle(mode);
          break;
        case "Captain":
          this.InitializeForCaptain(mode);
          break;
        case "Duel":
          this.InitializeForDuel(mode);
          break;
        case "FreeForAll":
          this.InitializeForFreeForAll(mode);
          break;
        case "Siege":
          this.InitializeForSiege(mode);
          break;
        case "Skirmish":
          this.InitializeForSkirmish(mode);
          break;
        case "TeamDeathmatch":
          this.InitializeForTeamDeathmatch(mode);
          break;
      }
      MBList<string> mapList = this.GetMapList();
      if (mapList.Count <= 0)
        return;
      MultiplayerOptions.OptionType.Map.SetValue(mapList[0]);
    }

    public void InitializeNextAndDefaultOptionContainers()
    {
      this._current.CopyAllValuesTo(this._next);
      this._current.CopyAllValuesTo(this._default);
    }

    private void InitializeForFreeForAll(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      string gameModeID = "FreeForAll";
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(0, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(this.GetRoundTimeLimitInMinutesForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(3, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(0, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.MinScoreToWinMatch.SetValue(120000, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(0, mode);
    }

    private void InitializeForTeamDeathmatch(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      string gameModeID = "TeamDeathmatch";
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(0, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(this.GetRoundTimeLimitInMinutesForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(3, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(0, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.MinScoreToWinMatch.SetValue(120000, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(2, mode);
    }

    private void InitializeForDuel(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode("Duel"), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(0, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(MultiplayerOptions.OptionType.MapTimeLimit.GetMaximumValue(), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(3, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(0, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(0, mode);
      MultiplayerOptions.OptionType.MinScoreToWinDuel.SetValue(3, mode);
    }

    private void InitializeForSiege(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      string gameModeID = "Siege";
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(0, mode);
      MultiplayerOptions.OptionType.WarmupTimeLimit.SetValue(3, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(this.GetRoundTimeLimitInMinutesForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(12, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(30, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(2, mode);
    }

    private void InitializeForCaptain(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      string gameModeID = "Captain";
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(25, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(6, mode);
      MultiplayerOptions.OptionType.WarmupTimeLimit.SetValue(5, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(5, mode);
      MultiplayerOptions.OptionType.RoundTimeLimit.SetValue(this.GetRoundTimeLimitInMinutesForGameMode(gameModeID) * 60, mode);
      MultiplayerOptions.OptionType.RoundPreparationTimeLimit.SetValue(20, mode);
      MultiplayerOptions.OptionType.RoundTotal.SetValue(this.GetRoundCountForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(3, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(0, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(2, mode);
      MultiplayerOptions.OptionType.AllowPollsToKickPlayers.SetValue(true, mode);
      MultiplayerOptions.OptionType.SingleSpawn.SetValue(true);
    }

    private void InitializeForSkirmish(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      string gameModeID = "Skirmish";
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(6, mode);
      MultiplayerOptions.OptionType.WarmupTimeLimit.SetValue(5, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(5, mode);
      MultiplayerOptions.OptionType.RoundTimeLimit.SetValue(this.GetRoundTimeLimitInMinutesForGameMode(gameModeID) * 60, mode);
      MultiplayerOptions.OptionType.RoundPreparationTimeLimit.SetValue(20, mode);
      MultiplayerOptions.OptionType.RoundTotal.SetValue(this.GetRoundCountForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(3, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(0, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(2, mode);
      MultiplayerOptions.OptionType.AllowPollsToKickPlayers.SetValue(true, mode);
    }

    private void InitializeForBattle(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode)
    {
      string gameModeID = "Battle";
      MultiplayerOptions.OptionType.MaxNumberOfPlayers.SetValue(this.GetNumberOfPlayersForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.NumberOfBotsPerFormation.SetValue(0, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeSelfPercent.SetValue(25, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageMeleeFriendPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedSelfPercent.SetValue(25, mode);
      MultiplayerOptions.OptionType.FriendlyFireDamageRangedFriendPercent.SetValue(50, mode);
      MultiplayerOptions.OptionType.SpectatorCamera.SetValue(6, mode);
      MultiplayerOptions.OptionType.WarmupTimeLimit.SetValue(5, mode);
      MultiplayerOptions.OptionType.MapTimeLimit.SetValue(90, mode);
      MultiplayerOptions.OptionType.RoundTimeLimit.SetValue(this.GetRoundTimeLimitInMinutesForGameMode(gameModeID) * 60, mode);
      MultiplayerOptions.OptionType.RoundPreparationTimeLimit.SetValue(20, mode);
      MultiplayerOptions.OptionType.RoundTotal.SetValue(this.GetRoundCountForGameMode(gameModeID), mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam1.SetValue(3, mode);
      MultiplayerOptions.OptionType.RespawnPeriodTeam2.SetValue(3, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam1.SetValue(0, mode);
      MultiplayerOptions.OptionType.GoldGainChangePercentageTeam2.SetValue(0, mode);
      MultiplayerOptions.OptionType.AutoTeamBalanceThreshold.SetValue(2, mode);
      MultiplayerOptions.OptionType.SingleSpawn.SetValue(true);
    }

    public int GetNumberOfPlayersForGameMode(string gameModeID)
    {
      switch (gameModeID)
      {
        case "Battle":
        case "FreeForAll":
        case "Siege":
        case "TeamDeathmatch":
          return 120;
        case "Captain":
        case "Skirmish":
          return 12;
        case "Duel":
          return 32;
        default:
          return 0;
      }
    }

    public int GetRoundCountForGameMode(string gameModeID)
    {
      switch (gameModeID)
      {
        case "Battle":
          return 9;
        case "Captain":
        case "Skirmish":
          return 5;
        case "Duel":
        case "FreeForAll":
        case "Siege":
        case "TeamDeathmatch":
          return 1;
        default:
          return 0;
      }
    }

    public int GetRoundTimeLimitInMinutesForGameMode(string gameModeID)
    {
      switch (gameModeID)
      {
        case "Battle":
          return 20;
        case "Captain":
          return 10;
        case "Duel":
        case "FreeForAll":
        case "Siege":
        case "TeamDeathmatch":
          return 30;
        case "Skirmish":
          return 7;
        default:
          return 0;
      }
    }

    public void InitializeFromCommandList(List<string> arguments)
    {
      foreach (string command in arguments)
        GameNetwork.HandleConsoleCommand(command);
    }

    public void ResetDefaultsToCurrent() => this._current.CopyAllValuesTo(this._default);

    public List<string> GetMultiplayerOptionsTextList(MultiplayerOptions.OptionType optionType)
    {
      List<string> multiplayerOptionsTextList = new List<string>();
      string str1 = "-- " + new TextObject("{=vBkrw5VV}Random").ToString() + " --";
      switch (optionType)
      {
        case MultiplayerOptions.OptionType.PremadeMatchGameMode:
          multiplayerOptionsTextList = Module.CurrentModule.GetMultiplayerGameTypes().Where<MultiplayerGameTypeInfo>((Func<MultiplayerGameTypeInfo, bool>) (q => q.GameType == "Skirmish" || q.GameType == "Captain")).Select<MultiplayerGameTypeInfo, string>((Func<MultiplayerGameTypeInfo, string>) (q => GameTexts.FindText("str_multiplayer_official_game_type_name", q.GameType).ToString())).ToList<string>();
          break;
        case MultiplayerOptions.OptionType.GameType:
          multiplayerOptionsTextList = Module.CurrentModule.GetMultiplayerGameTypes().Select<MultiplayerGameTypeInfo, string>((Func<MultiplayerGameTypeInfo, string>) (q => GameTexts.FindText("str_multiplayer_official_game_type_name", q.GameType).ToString())).ToList<string>();
          break;
        case MultiplayerOptions.OptionType.PremadeGameType:
          multiplayerOptionsTextList = new List<string>()
          {
            new TextObject("{=H5tiRTya}Practice").ToString(),
            new TextObject("{=YNkPy4ta}Clan Match").ToString()
          };
          break;
        case MultiplayerOptions.OptionType.Map:
          List<string> stringList1 = new List<string>();
          if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.Default)
            stringList1 = MultiplayerGameTypes.GetGameTypeInfo(MultiplayerOptions.OptionType.GameType.GetStrValue()).Scenes.ToList<string>();
          else if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
          {
            stringList1 = this.GetAvailableClanMatchScenes();
            multiplayerOptionsTextList.Insert(0, str1);
          }
          using (List<string>.Enumerator enumerator = stringList1.GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              string current = enumerator.Current;
              TextObject textObject;
              string str2 = !GameTexts.TryGetText("str_multiplayer_scene_name", out textObject, current) ? current : textObject.ToString();
              multiplayerOptionsTextList.Add(str2);
            }
            break;
          }
        case MultiplayerOptions.OptionType.CultureTeam1:
        case MultiplayerOptions.OptionType.CultureTeam2:
          multiplayerOptionsTextList = MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>().Where<BasicCultureObject>((Func<BasicCultureObject, bool>) (c => c.IsMainCulture)).Select<BasicCultureObject, string>((Func<BasicCultureObject, string>) (x => MultiplayerOptions.GetLocalizedCultureNameFromStringID(x.StringId))).ToList<string>();
          if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
          {
            multiplayerOptionsTextList.Insert(0, str1);
            break;
          }
          break;
        case MultiplayerOptions.OptionType.SpectatorCamera:
          List<string> stringList2 = new List<string>();
          stringList2.Add(GameTexts.FindText("str_multiplayer_spectator_camera_type", SpectatorCameraTypes.LockToAnyAgent.ToString()).ToString());
          SpectatorCameraTypes spectatorCameraTypes = SpectatorCameraTypes.LockToAnyPlayer;
          stringList2.Add(GameTexts.FindText("str_multiplayer_spectator_camera_type", spectatorCameraTypes.ToString()).ToString());
          spectatorCameraTypes = SpectatorCameraTypes.LockToTeamMembers;
          stringList2.Add(GameTexts.FindText("str_multiplayer_spectator_camera_type", spectatorCameraTypes.ToString()).ToString());
          spectatorCameraTypes = SpectatorCameraTypes.LockToTeamMembersView;
          stringList2.Add(GameTexts.FindText("str_multiplayer_spectator_camera_type", spectatorCameraTypes.ToString()).ToString());
          multiplayerOptionsTextList = stringList2;
          break;
        default:
          multiplayerOptionsTextList = this.GetMultiplayerOptionsList(optionType);
          break;
      }
      return multiplayerOptionsTextList;
    }

    public List<string> GetMultiplayerOptionsList(MultiplayerOptions.OptionType optionType)
    {
      List<string> multiplayerOptionsList = new List<string>();
      switch (optionType)
      {
        case MultiplayerOptions.OptionType.PremadeMatchGameMode:
          multiplayerOptionsList = Module.CurrentModule.GetMultiplayerGameTypes().Select<MultiplayerGameTypeInfo, string>((Func<MultiplayerGameTypeInfo, string>) (q => q.GameType)).ToList<string>();
          multiplayerOptionsList.Remove("FreeForAll");
          multiplayerOptionsList.Remove("TeamDeathmatch");
          multiplayerOptionsList.Remove("Duel");
          multiplayerOptionsList.Remove("Siege");
          break;
        case MultiplayerOptions.OptionType.GameType:
          multiplayerOptionsList = Module.CurrentModule.GetMultiplayerGameTypes().Select<MultiplayerGameTypeInfo, string>((Func<MultiplayerGameTypeInfo, string>) (q => q.GameType)).ToList<string>();
          multiplayerOptionsList.Remove("FreeForAll");
          break;
        case MultiplayerOptions.OptionType.PremadeGameType:
          multiplayerOptionsList = new List<string>()
          {
            PremadeGameType.Practice.ToString(),
            PremadeGameType.Clan.ToString()
          };
          break;
        case MultiplayerOptions.OptionType.Map:
          if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.Default)
          {
            multiplayerOptionsList = MultiplayerGameTypes.GetGameTypeInfo(MultiplayerOptions.OptionType.GameType.GetStrValue()).Scenes.ToList<string>();
            break;
          }
          if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
          {
            MultiplayerOptions.OptionType.PremadeMatchGameMode.GetStrValue();
            multiplayerOptionsList = this.GetAvailableClanMatchScenes();
            multiplayerOptionsList.Insert(0, "RandomSelection");
            break;
          }
          break;
        case MultiplayerOptions.OptionType.CultureTeam1:
        case MultiplayerOptions.OptionType.CultureTeam2:
          multiplayerOptionsList = MBObjectManager.Instance.GetObjectTypeList<BasicCultureObject>().Where<BasicCultureObject>((Func<BasicCultureObject, bool>) (c => c.IsMainCulture)).Select<BasicCultureObject, string>((Func<BasicCultureObject, string>) (x => x.StringId)).ToList<string>();
          if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
          {
            multiplayerOptionsList.Insert(0, TaleWorlds.MountAndBlade.Diamond.Parameters.RandomSelectionString);
            break;
          }
          break;
        case MultiplayerOptions.OptionType.SpectatorCamera:
          List<string> stringList = new List<string>();
          stringList.Add(SpectatorCameraTypes.LockToAnyAgent.ToString());
          SpectatorCameraTypes spectatorCameraTypes = SpectatorCameraTypes.LockToAnyPlayer;
          stringList.Add(spectatorCameraTypes.ToString());
          spectatorCameraTypes = SpectatorCameraTypes.LockToTeamMembers;
          stringList.Add(spectatorCameraTypes.ToString());
          stringList.Add(SpectatorCameraTypes.LockToTeamMembersView.ToString());
          multiplayerOptionsList = stringList;
          break;
      }
      return multiplayerOptionsList;
    }

    private List<string> GetAvailableClanMatchScenes()
    {
      string[] source = new string[0];
      string[] strArray;
      if (NetworkMain.GameClient.AvailableScenes.ScenesByGameTypes.TryGetValue(MultiplayerOptions.OptionType.PremadeMatchGameMode.GetStrValue(), out strArray))
        source = strArray;
      return ((IEnumerable<string>) source).ToList<string>();
    }

    private MultiplayerOptions.MultiplayerOptionsContainer GetContainer(
      MultiplayerOptions.MultiplayerOptionsAccessMode mode = MultiplayerOptions.MultiplayerOptionsAccessMode.CurrentMapOptions)
    {
      switch (mode)
      {
        case MultiplayerOptions.MultiplayerOptionsAccessMode.DefaultMapOptions:
          return this._default;
        case MultiplayerOptions.MultiplayerOptionsAccessMode.CurrentMapOptions:
          return this._current;
        case MultiplayerOptions.MultiplayerOptionsAccessMode.NextMapOptions:
          return this._next;
        default:
          return (MultiplayerOptions.MultiplayerOptionsContainer) null;
      }
    }

    public void InitializeAllOptionsFromNext()
    {
      this._next.CopyAllValuesTo(this._current);
      this.UpdateMbMultiplayerData(this._current);
    }

    private void UpdateMbMultiplayerData(
      MultiplayerOptions.MultiplayerOptionsContainer container)
    {
      container.GetOptionFromOptionType(MultiplayerOptions.OptionType.ServerName).GetValue(out MBMultiplayerData.ServerName);
      if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.Default)
        container.GetOptionFromOptionType(MultiplayerOptions.OptionType.GameType).GetValue(out MBMultiplayerData.GameType);
      else if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
        container.GetOptionFromOptionType(MultiplayerOptions.OptionType.PremadeMatchGameMode).GetValue(out MBMultiplayerData.GameType);
      container.GetOptionFromOptionType(MultiplayerOptions.OptionType.Map).GetValue(out MBMultiplayerData.Map);
      container.GetOptionFromOptionType(MultiplayerOptions.OptionType.MaxNumberOfPlayers).GetValue(out MBMultiplayerData.PlayerCountLimit);
    }

    public MBList<string> GetMapList()
    {
      MultiplayerGameTypeInfo multiplayerGameTypeInfo = (MultiplayerGameTypeInfo) null;
      if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.Default)
        multiplayerGameTypeInfo = MultiplayerGameTypes.GetGameTypeInfo(MultiplayerOptions.OptionType.GameType.GetStrValue());
      else if (this.CurrentOptionsCategory == MultiplayerOptions.OptionsCategory.PremadeMatch)
        multiplayerGameTypeInfo = MultiplayerGameTypes.GetGameTypeInfo(MultiplayerOptions.OptionType.PremadeMatchGameMode.GetStrValue());
      MBList<string> mapList = new MBList<string>();
      if (multiplayerGameTypeInfo.Scenes.Count > 0)
      {
        mapList.Add(multiplayerGameTypeInfo.Scenes[0]);
        MultiplayerOptions.OptionType.Map.SetValue(mapList[0]);
      }
      return mapList;
    }

    public string GetValueTextForOptionWithMultipleSelection(
      MultiplayerOptions.OptionType optionType)
    {
      MultiplayerOptionsProperty optionProperty = optionType.GetOptionProperty();
      switch (optionProperty.OptionValueType)
      {
        case MultiplayerOptions.OptionValueType.Enum:
          return Enum.ToObject(optionProperty.EnumType, optionType.GetIntValue()).ToString();
        case MultiplayerOptions.OptionValueType.String:
          return optionType.GetStrValue();
        default:
          return (string) null;
      }
    }

    public void SetValueForOptionWithMultipleSelectionFromText(
      MultiplayerOptions.OptionType optionType,
      string value)
    {
      MultiplayerOptionsProperty optionProperty = optionType.GetOptionProperty();
      switch (optionProperty.OptionValueType)
      {
        case MultiplayerOptions.OptionValueType.Enum:
          optionType.SetValue((int) Enum.Parse(optionProperty.EnumType, value));
          break;
        case MultiplayerOptions.OptionValueType.String:
          optionType.SetValue(value);
          break;
      }
      if (optionType != MultiplayerOptions.OptionType.GameType && optionType != MultiplayerOptions.OptionType.PremadeMatchGameMode)
        return;
      this.OnGameTypeChanged();
    }

    private static string GetLocalizedCultureNameFromStringID(string cultureID)
    {
      switch (cultureID)
      {
        case "sturgia":
          return new TextObject("{=PjO7oY16}Sturgia").ToString();
        case "vlandia":
          return new TextObject("{=FjwRsf1C}Vlandia").ToString();
        case "battania":
          return new TextObject("{=0B27RrYJ}Battania").ToString();
        case "empire":
          return new TextObject("{=empirefaction}Empire").ToString();
        case "khuzait":
          return new TextObject("{=sZLd6VHi}Khuzait").ToString();
        case "aserai":
          return new TextObject("{=aseraifaction}Aserai").ToString();
        default:
          Debug.FailedAssert("Unidentified culture id: " + cultureID, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\Gameplay\\MultiplayerOptions.cs", nameof (GetLocalizedCultureNameFromStringID), 999);
          return "";
      }
    }

    public static bool TryGetOptionTypeFromString(
      string optionTypeString,
      out MultiplayerOptions.OptionType optionType,
      out MultiplayerOptionsProperty optionAttribute)
    {
      optionAttribute = (MultiplayerOptionsProperty) null;
      optionType = MultiplayerOptions.OptionType.ServerName;
      while (optionType < MultiplayerOptions.OptionType.NumOfSlots)
      {
        MultiplayerOptionsProperty optionProperty = optionType.GetOptionProperty();
        if (optionProperty != null && optionType.ToString().Equals(optionTypeString))
        {
          optionAttribute = optionProperty;
          return true;
        }
        ++optionType;
      }
      return false;
    }

    public enum MultiplayerOptionsAccessMode
    {
      DefaultMapOptions,
      CurrentMapOptions,
      NextMapOptions,
      NumAccessModes,
    }

    public enum OptionValueType
    {
      Bool,
      Integer,
      Enum,
      String,
    }

    public enum OptionType
    {
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Changes the name of the server in the server list", 0, 0, null, false, null)] ServerName,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Welcome messages which is shown to all players when they enter the server.", 0, 0, null, false, null)] WelcomeMessage,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.Never, "Sets a password that clients have to enter before connecting to the server.", 0, 0, null, false, null)] GamePassword,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.Never, "Sets a password that allows players access to admin tools during the game.", 0, 0, null, false, null)] AdminPassword,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Never, "Sets ID of the private game definition.", -2147483648, 2147483647, null, false, null)] GameDefinitionId,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Allow players to start polls to kick other players.", 0, 0, null, false, null)] AllowPollsToKickPlayers,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Allow players to start polls to ban other players.", 0, 0, null, false, null)] AllowPollsToBanPlayers,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Allow players to start polls to change the current map.", 0, 0, null, false, null)] AllowPollsToChangeMaps,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Allow players to use their custom banner.", 0, 0, null, false, null)] AllowIndividualBanners,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Use animation progress dependent blocking.", 0, 0, null, false, null)] UseRealisticBlocking,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Changes the game type.", 0, 0, null, true, null)] PremadeMatchGameMode,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Changes the game type.", 0, 0, null, true, null)] GameType,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Enum, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Type of the premade game.", 0, 1, null, true, typeof (PremadeGameType))] PremadeGameType,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Map of the game.", 0, 0, null, true, null)] Map,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Sets culture for team 1", 0, 0, null, true, null)] CultureTeam1,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.String, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Sets culture for team 2", 0, 0, null, true, null)] CultureTeam2,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Set the maximum amount of player allowed on the server.", 1, 1023, null, false, null)] MaxNumberOfPlayers,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Set the amount of players that are needed to start the first round. If not met, players will just wait.", 0, 20, null, false, null)] MinNumberOfPlayersForMatchStart,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Amount of bots on team 1", 0, 510, null, false, null)] NumberOfBotsTeam1,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Amount of bots on team 2", 0, 510, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege", "TeamDeathmatch"}, false, null)] NumberOfBotsTeam2,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Amount of bots per formation", 0, 100, new string[] {"Captain"}, false, null)] NumberOfBotsPerFormation,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "A percentage of how much melee damage inflicted upon a friend is dealt back to the inflictor.", 0, 100, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege", "TeamDeathmatch"}, false, null)] FriendlyFireDamageMeleeSelfPercent,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "A percentage of how much melee damage inflicted upon a friend is actually dealt.", 0, 100, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege", "TeamDeathmatch"}, false, null)] FriendlyFireDamageMeleeFriendPercent,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "A percentage of how much ranged damage inflicted upon a friend is dealt back to the inflictor.", 0, 100, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege", "TeamDeathmatch"}, false, null)] FriendlyFireDamageRangedSelfPercent,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "A percentage of how much ranged damage inflicted upon a friend is actually dealt.", 0, 100, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege", "TeamDeathmatch"}, false, null)] FriendlyFireDamageRangedFriendPercent,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Enum, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Who can spectators look at, and how.", 0, 7, null, true, typeof (SpectatorCameraTypes))] SpectatorCamera,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Maximum duration for the warmup. In minutes.", 1, 60, null, false, null)] WarmupTimeLimit,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Maximum duration for the map. In minutes.", 1, 60, null, false, null)] MapTimeLimit,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Maximum duration for each round. In seconds.", 60, 3600, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege"}, false, null)] RoundTimeLimit,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Time available to select class/equipment. In seconds.", 2, 60, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege"}, false, null)] RoundPreparationTimeLimit,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Maximum amount of rounds before the game ends.", 1, 99, new string[] {"Battle", "NewBattle", "ClassicBattle", "Captain", "Skirmish", "Siege"}, false, null)] RoundTotal,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Wait time after death, before respawning again. In seconds.", 1, 60, new string[] {"Siege"}, false, null)] RespawnPeriodTeam1,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Wait time after death, before respawning again. In seconds.", 1, 60, new string[] {"Siege"}, false, null)] RespawnPeriodTeam2,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Unlimited gold option.", 0, 0, new string[] {"Battle", "Skirmish", "Siege", "TeamDeathmatch"}, false, null)] UnlimitedGold,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Gold gain multiplier from agent deaths.", -100, 100, new string[] {"Siege", "TeamDeathmatch"}, false, null)] GoldGainChangePercentageTeam1,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Gold gain multiplier from agent deaths.", -100, 100, new string[] {"Siege", "TeamDeathmatch"}, false, null)] GoldGainChangePercentageTeam2,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Min score to win match.", 0, 1023000, new string[] {"TeamDeathmatch"}, false, null)] MinScoreToWinMatch,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Min score to win duel.", 0, 7, new string[] {"Duel"}, false, null)] MinScoreToWinDuel,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Minimum needed difference in poll results before it is accepted.", 0, 10, null, false, null)] PollAcceptThreshold,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Integer, MultiplayerOptionsProperty.ReplicationOccurrence.Immediately, "Maximum player imbalance between team 1 and team 2. Selecting 0 will disable auto team balancing.", 0, 30, null, false, null)] AutoTeamBalanceThreshold,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Enables mission recording.", 0, 0, null, false, null)] EnableMissionRecording,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Sets if the game mode uses single spawning.", 0, 0, null, false, null)] SingleSpawn,
      [MultiplayerOptionsProperty(MultiplayerOptions.OptionValueType.Bool, MultiplayerOptionsProperty.ReplicationOccurrence.AtMapLoad, "Disables the inactivity kick timer.", 0, 0, null, false, null)] DisableInactivityKick,
      NumOfSlots,
    }

    public enum OptionsCategory
    {
      Default,
      PremadeMatch,
    }

    public class MultiplayerOption
    {
      public readonly MultiplayerOptions.OptionType OptionType;
      private MultiplayerOptions.MultiplayerOption.IntegerValue _intValue;
      private MultiplayerOptions.MultiplayerOption.StringValue _stringValue;

      public static MultiplayerOptions.MultiplayerOption CreateMultiplayerOption(
        MultiplayerOptions.OptionType optionType)
      {
        return new MultiplayerOptions.MultiplayerOption(optionType);
      }

      public static MultiplayerOptions.MultiplayerOption CopyMultiplayerOption(
        MultiplayerOptions.MultiplayerOption option)
      {
        return new MultiplayerOptions.MultiplayerOption(option.OptionType)
        {
          _intValue = option._intValue,
          _stringValue = option._stringValue
        };
      }

      private MultiplayerOption(MultiplayerOptions.OptionType optionType)
      {
        this.OptionType = optionType;
        if (optionType.GetOptionProperty().OptionValueType == MultiplayerOptions.OptionValueType.String)
        {
          this._intValue = MultiplayerOptions.MultiplayerOption.IntegerValue.Invalid;
          this._stringValue = MultiplayerOptions.MultiplayerOption.StringValue.Create();
        }
        else
        {
          this._intValue = MultiplayerOptions.MultiplayerOption.IntegerValue.Create();
          this._stringValue = MultiplayerOptions.MultiplayerOption.StringValue.Invalid;
        }
      }

      public MultiplayerOptions.MultiplayerOption UpdateValue(bool value)
      {
        this.UpdateValue(value ? 1 : 0);
        return this;
      }

      public MultiplayerOptions.MultiplayerOption UpdateValue(int value)
      {
        this._intValue.UpdateValue(value);
        return this;
      }

      public MultiplayerOptions.MultiplayerOption UpdateValue(string value)
      {
        this._stringValue.UpdateValue(value);
        return this;
      }

      public void GetValue(out bool value) => value = this._intValue.Value == 1;

      public void GetValue(out int value) => value = this._intValue.Value;

      public void GetValue(out string value) => value = this._stringValue.Value;

      private struct IntegerValue
      {
        public static MultiplayerOptions.MultiplayerOption.IntegerValue Invalid
        {
          get => new MultiplayerOptions.MultiplayerOption.IntegerValue();
        }

        public bool IsValid { get; private set; }

        public int Value { get; private set; }

        public static MultiplayerOptions.MultiplayerOption.IntegerValue Create()
        {
          return new MultiplayerOptions.MultiplayerOption.IntegerValue()
          {
            IsValid = true
          };
        }

        public void UpdateValue(int value) => this.Value = value;
      }

      private struct StringValue
      {
        public static MultiplayerOptions.MultiplayerOption.StringValue Invalid
        {
          get => new MultiplayerOptions.MultiplayerOption.StringValue();
        }

        public bool IsValid { get; private set; }

        public string Value { get; private set; }

        public static MultiplayerOptions.MultiplayerOption.StringValue Create()
        {
          return new MultiplayerOptions.MultiplayerOption.StringValue()
          {
            IsValid = true
          };
        }

        public void UpdateValue(string value) => this.Value = value;
      }
    }

    private class MultiplayerOptionsContainer
    {
      private readonly MultiplayerOptions.MultiplayerOption[] _multiplayerOptions;

      public MultiplayerOptionsContainer()
      {
        this._multiplayerOptions = new MultiplayerOptions.MultiplayerOption[43];
      }

      public MultiplayerOptions.MultiplayerOption GetOptionFromOptionType(
        MultiplayerOptions.OptionType optionType)
      {
        return this._multiplayerOptions[(int) optionType];
      }

      private void CopyOptionFromOther(
        MultiplayerOptions.OptionType optionType,
        MultiplayerOptions.MultiplayerOption option)
      {
        this._multiplayerOptions[(int) optionType] = MultiplayerOptions.MultiplayerOption.CopyMultiplayerOption(option);
      }

      public void CreateOption(MultiplayerOptions.OptionType optionType)
      {
        this._multiplayerOptions[(int) optionType] = MultiplayerOptions.MultiplayerOption.CreateMultiplayerOption(optionType);
      }

      public void UpdateOptionValue(MultiplayerOptions.OptionType optionType, int value)
      {
        this._multiplayerOptions[(int) optionType].UpdateValue(value);
      }

      public void UpdateOptionValue(MultiplayerOptions.OptionType optionType, string value)
      {
        this._multiplayerOptions[(int) optionType].UpdateValue(value);
      }

      public void UpdateOptionValue(MultiplayerOptions.OptionType optionType, bool value)
      {
        this._multiplayerOptions[(int) optionType].UpdateValue(value ? 1 : 0);
      }

      public void CopyAllValuesTo(
        MultiplayerOptions.MultiplayerOptionsContainer other)
      {
        for (MultiplayerOptions.OptionType optionType = MultiplayerOptions.OptionType.ServerName; optionType < MultiplayerOptions.OptionType.NumOfSlots; ++optionType)
          other.CopyOptionFromOther(optionType, this._multiplayerOptions[(int) optionType]);
      }
    }
  }
}
