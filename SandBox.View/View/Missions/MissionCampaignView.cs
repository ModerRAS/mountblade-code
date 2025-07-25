// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionCampaignView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.BoardGames.MissionLogics;
using SandBox.View.Map;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionCampaignView : MissionView
  {
    private MapScreen _mapScreen;
    private MissionMainAgentController _missionMainAgentController;

    public override void OnMissionScreenPreLoad()
    {
      this._mapScreen = MapScreen.Instance;
      if (this._mapScreen == null || !this.Mission.NeedsMemoryCleanup || !ScreenManager.ScreenTypeExistsAtList((ScreenBase) this._mapScreen))
        return;
      this._mapScreen.ClearGPUMemory();
      Utilities.ClearShaderMemory();
    }

    public override void OnMissionScreenFinalize()
    {
      if (this._mapScreen?.BannerTexturedMaterialCache != null)
        this._mapScreen.BannerTexturedMaterialCache.Clear();
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.None));
    }

    [CommandLineFunctionality.CommandLineArgumentFunction("get_face_and_helmet_info_of_followed_agent", "mission")]
    public static string GetFaceAndHelmetInfoOfFollowedAgent(List<string> strings)
    {
      if (!(ScreenManager.TopScreen is MissionScreen topScreen))
        return "Only works at missions";
      Agent lastFollowedAgent = topScreen.LastFollowedAgent;
      if (lastFollowedAgent == null)
        return "An agent needs to be focussed.";
      string text = "" + lastFollowedAgent.BodyPropertiesValue.ToString();
      EquipmentElement equipmentFromSlot = lastFollowedAgent.SpawnEquipment.GetEquipmentFromSlot(EquipmentIndex.NumAllWeaponSlots);
      if (!equipmentFromSlot.IsEmpty)
        text = text + "\n Armor Name: " + equipmentFromSlot.Item.Name.ToString() + "\n Mesh Name: " + equipmentFromSlot.Item.MultiMeshName;
      if (lastFollowedAgent.Character != null && lastFollowedAgent.Character is CharacterObject character)
        text = text + "\n Troop Id: " + character.StringId;
      TaleWorlds.InputSystem.Input.SetClipboardText(text);
      return "Copied to clipboard:\n" + text;
    }

    public override void EarlyStart()
    {
      base.EarlyStart();
      this._missionMainAgentController = Mission.Current.GetMissionBehavior<MissionMainAgentController>();
      MissionBoardGameLogic missionBehavior = Mission.Current.GetMissionBehavior<MissionBoardGameLogic>();
      if (missionBehavior == null)
        return;
      missionBehavior.GameStarted += new Action(this._missionMainAgentController.Disable);
      missionBehavior.GameEnded += new Action(this._missionMainAgentController.Enable);
    }

    public override void OnRenderingStarted()
    {
      Game.Current.EventManager.TriggerEvent<TutorialContextChangedEvent>(new TutorialContextChangedEvent(TutorialContexts.Mission));
    }
  }
}
