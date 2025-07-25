// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.Tournaments.ArenaPreloadView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using SandBox.Missions.MissionLogics.Arena;
using SandBox.Tournaments.MissionLogics;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions.Tournaments
{
  internal class ArenaPreloadView : MissionView
  {
    private readonly PreloadHelper _helperInstance = new PreloadHelper();
    private bool _preloadDone;

    public override void OnPreMissionTick(float dt)
    {
      if (this._preloadDone)
        return;
      List<BasicCharacterObject> characters = new List<BasicCharacterObject>();
      if (Mission.Current.GetMissionBehavior<ArenaPracticeFightMissionController>() != null)
      {
        foreach (CharacterObject participantCharacter in ArenaPracticeFightMissionController.GetParticipantCharacters(Settlement.CurrentSettlement))
          characters.Add((BasicCharacterObject) participantCharacter);
        characters.Add((BasicCharacterObject) CharacterObject.PlayerCharacter);
      }
      TournamentBehavior missionBehavior = Mission.Current.GetMissionBehavior<TournamentBehavior>();
      if (missionBehavior != null)
      {
        foreach (CharacterObject possibleParticipant in (List<CharacterObject>) missionBehavior.GetAllPossibleParticipants())
          characters.Add((BasicCharacterObject) possibleParticipant);
      }
      this._helperInstance.PreloadCharacters(characters);
      this._preloadDone = true;
    }

    public override void OnSceneRenderingStarted()
    {
      this._helperInstance.WaitForMeshesToBeLoaded();
    }

    public override void OnMissionStateDeactivated()
    {
      base.OnMissionStateDeactivated();
      this._helperInstance.Clear();
    }
  }
}
