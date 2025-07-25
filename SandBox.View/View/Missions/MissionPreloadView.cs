// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionPreloadView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  public class MissionPreloadView : MissionView
  {
    private readonly PreloadHelper _helperInstance = new PreloadHelper();
    private bool _preloadDone;

    public override void OnPreMissionTick(float dt)
    {
      if (this._preloadDone)
        return;
      List<BasicCharacterObject> characters = new List<BasicCharacterObject>();
      foreach (PartyBase involvedParty in MapEvent.PlayerMapEvent.InvolvedParties)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) involvedParty.MemberRoster.GetTroopRoster())
        {
          for (int index = 0; index < troopRosterElement.Number; ++index)
            characters.Add((BasicCharacterObject) troopRosterElement.Character);
        }
      }
      this._helperInstance.PreloadCharacters(characters);
      SiegeDeploymentMissionController missionBehavior = this.Mission.GetMissionBehavior<SiegeDeploymentMissionController>();
      if (missionBehavior != null)
        this._helperInstance.PreloadItems(missionBehavior.GetSiegeMissiles());
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
