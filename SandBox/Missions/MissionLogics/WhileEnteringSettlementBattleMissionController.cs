// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.WhileEnteringSettlementBattleMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class WhileEnteringSettlementBattleMissionController : 
    MissionLogic,
    IMissionAgentSpawnLogic,
    IMissionBehavior
  {
    private const int GuardSpawnPointAndPlayerSpawnPointPositionDelta = 20;
    private BattleAgentLogic _battleAgentLogic;
    private bool _isMissionInitialized;
    private bool _troopsInitialized;
    private int _numberOfMaxTroopForPlayer;
    private int _numberOfMaxTroopForEnemy;
    private int _playerSideSpawnedTroopCount;
    private int _otherSideSpawnedTroopCount;
    private readonly IMissionTroopSupplier[] _troopSuppliers;

    public WhileEnteringSettlementBattleMissionController(
      IMissionTroopSupplier[] suppliers,
      int numberOfMaxTroopForPlayer,
      int numberOfMaxTroopForEnemy)
    {
      this._troopSuppliers = suppliers;
      this._numberOfMaxTroopForPlayer = numberOfMaxTroopForPlayer;
      this._numberOfMaxTroopForEnemy = numberOfMaxTroopForEnemy;
    }

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._battleAgentLogic = Mission.Current.GetMissionBehavior<BattleAgentLogic>();
    }

    public override void OnMissionTick(float dt)
    {
      if (!this._isMissionInitialized)
      {
        this.SpawnAgents();
        this._isMissionInitialized = true;
      }
      else
      {
        if (this._troopsInitialized)
          return;
        this._troopsInitialized = true;
        foreach (Agent agent in (List<Agent>) this.Mission.Agents)
          this._battleAgentLogic.OnAgentBuild(agent, (Banner) null);
      }
    }

    private void SpawnAgents()
    {
      GameEntity entityWithTag = this.Mission.Scene.FindEntityWithTag("sp_outside_near_town_main_gate");
      foreach (IMissionTroopSupplier troopSupplier in this._troopSuppliers)
      {
        foreach (IAgentOriginBase troopOrigin in troopSupplier.SupplyTroops(this._numberOfMaxTroopForPlayer + this._numberOfMaxTroopForEnemy).ToList<IAgentOriginBase>())
        {
          bool isPlayerSide = troopOrigin.IsUnderPlayersCommand || troopOrigin.Troop.IsPlayerCharacter;
          if ((!isPlayerSide || this._numberOfMaxTroopForPlayer >= this._playerSideSpawnedTroopCount) && (isPlayerSide || this._numberOfMaxTroopForEnemy >= this._otherSideSpawnedTroopCount))
          {
            WorldFrame worldFrame = new WorldFrame(entityWithTag.GetGlobalFrame().rotation, new WorldPosition(this.Mission.Scene, entityWithTag.GetGlobalFrame().origin));
            if (!isPlayerSide)
            {
              worldFrame.Origin.SetVec2(worldFrame.Origin.AsVec2 + worldFrame.Rotation.f.AsVec2 * 20f);
              worldFrame.Rotation.f = (entityWithTag.GetGlobalFrame().origin.AsVec2 - worldFrame.Origin.AsVec2).ToVec3();
              worldFrame.Origin.SetVec2(this.Mission.GetRandomPositionAroundPoint(worldFrame.Origin.GetNavMeshVec3(), 0.0f, 2.5f).AsVec2);
            }
            worldFrame.Rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
            this.Mission.SpawnTroop(troopOrigin, isPlayerSide, false, false, false, 0, 0, true, false, false, new Vec3?(worldFrame.Origin.GetGroundVec3()), new Vec2?(worldFrame.Rotation.f.AsVec2)).Defensiveness = 1f;
            if (isPlayerSide)
              ++this._playerSideSpawnedTroopCount;
            else
              ++this._otherSideSpawnedTroopCount;
          }
        }
      }
    }

    public void StartSpawner(BattleSideEnum side)
    {
    }

    public void StopSpawner(BattleSideEnum side)
    {
    }

    public bool IsSideSpawnEnabled(BattleSideEnum side) => false;

    public float GetReinforcementInterval() => 0.0f;

    public bool IsSideDepleted(BattleSideEnum side)
    {
      return side == this.Mission.PlayerTeam.Side ? this._troopSuppliers[(int) side].NumRemovedTroops == this._playerSideSpawnedTroopCount : this._troopSuppliers[(int) side].NumRemovedTroops == this._otherSideSpawnedTroopCount;
    }
  }
}
