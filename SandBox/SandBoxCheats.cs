// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxCheats
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.MissionLogics;
using SandBox.CampaignBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public static class SandBoxCheats
  {
    [CommandLineFunctionality.CommandLineArgumentFunction("spawn_new_alley_attack", "campaign")]
    public static string SpawnNewAlleyAttack(List<string> strings)
    {
      AlleyCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<AlleyCampaignBehavior>();
      if (campaignBehavior == null)
        return "Alley Campaign Behavior not found";
      foreach (AlleyCampaignBehavior.PlayerAlleyData playerAlleyData in (List<AlleyCampaignBehavior.PlayerAlleyData>) typeof (AlleyCampaignBehavior).GetField("_playerOwnedCommonAreaData", BindingFlags.Instance | BindingFlags.NonPublic).GetValue((object) campaignBehavior))
      {
        if (!playerAlleyData.IsUnderAttack && playerAlleyData.Alley.Settlement.Alleys.Any<Alley>((Func<Alley, bool>) (x => x.State == Alley.AreaState.OccupiedByGangLeader)))
        {
          typeof (AlleyCampaignBehavior).GetMethod("StartNewAlleyAttack", BindingFlags.Instance | BindingFlags.NonPublic).Invoke((object) campaignBehavior, new object[1]
          {
            (object) playerAlleyData
          });
          return "Success";
        }
      }
      return "There is no suitable alley for spawning an alley attack.";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("win_board_game", "campaign")]
    public static string WinCurrentGame(List<string> strings)
    {
      MissionBoardGameLogic missionBehavior = Mission.Current?.GetMissionBehavior<MissionBoardGameLogic>();
      if (missionBehavior == null)
        return "There is no board game.";
      missionBehavior.PlayerOneWon();
      return "Success";
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("refresh_battle_scene_index_map", "campaign")]
    public static string RefreshBattleSceneIndexMap(List<string> strings)
    {
      MapScene mapSceneWrapper = Campaign.Current.MapSceneWrapper as MapScene;
      System.Type type = typeof (MapScene);
      FieldInfo field1 = type.GetField("_scene", BindingFlags.Instance | BindingFlags.NonPublic);
      FieldInfo field2 = type.GetField("_battleTerrainIndexMap", BindingFlags.Instance | BindingFlags.NonPublic);
      FieldInfo field3 = type.GetField("_battleTerrainIndexMapWidth", BindingFlags.Instance | BindingFlags.NonPublic);
      FieldInfo field4 = type.GetField("_battleTerrainIndexMapHeight", BindingFlags.Instance | BindingFlags.NonPublic);
      byte[] indexData = (byte[]) null;
      int width = 0;
      int height = 0;
      Scene mapScene1 = (Scene) field1.GetValue((object) mapSceneWrapper);
      MBMapScene.GetBattleSceneIndexMap(mapScene1, ref indexData, ref width, ref height);
      field1.SetValue((object) mapSceneWrapper, (object) mapScene1);
      field2.SetValue((object) mapSceneWrapper, (object) indexData);
      field3.SetValue((object) mapSceneWrapper, (object) width);
      MapScene mapScene2 = mapSceneWrapper;
      // ISSUE: variable of a boxed type
      __Boxed<int> local = (ValueType) height;
      field4.SetValue((object) mapScene2, (object) local);
      return "Success";
    }
  }
}
