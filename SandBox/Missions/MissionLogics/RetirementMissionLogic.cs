// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.RetirementMissionLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.AgentOrigins;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class RetirementMissionLogic : MissionLogic
  {
    public override void AfterStart()
    {
      base.AfterStart();
      this.SpawnHermit();
      ((LeaveMissionLogic) this.Mission.MissionLogics.FirstOrDefault<MissionLogic>((Func<MissionLogic, bool>) (x => x is LeaveMissionLogic))).UnconsciousGameMenuID = "retirement_after_player_knockedout";
    }

    private void SpawnHermit()
    {
      List<GameEntity> list = this.Mission.Scene.FindEntitiesWithTag("sp_hermit").ToList<GameEntity>();
      MatrixFrame globalFrame = list[MBRandom.RandomInt(list.Count<GameEntity>())].GetGlobalFrame();
      CharacterObject characterObject = Campaign.Current.ObjectManager.GetObject<CharacterObject>("sp_hermit");
      AgentBuildData agentBuildData = new AgentBuildData((BasicCharacterObject) characterObject).TroopOrigin((IAgentOriginBase) new SimpleAgentOrigin((BasicCharacterObject) characterObject)).Team(this.Mission.SpectatorTeam).InitialPosition(in globalFrame.origin);
      Vec2 vec2 = globalFrame.rotation.f.AsVec2;
      vec2 = vec2.Normalized();
      ref Vec2 local = ref vec2;
      this.Mission.SpawnAgent(agentBuildData.InitialDirection(in local).CivilianEquipment(true).NoHorses(true).NoWeapons(true).ClothingColor1(this.Mission.PlayerTeam.Color).ClothingColor2(this.Mission.PlayerTeam.Color2)).SetMortalityState(Agent.MortalityState.Invulnerable);
    }
  }
}
