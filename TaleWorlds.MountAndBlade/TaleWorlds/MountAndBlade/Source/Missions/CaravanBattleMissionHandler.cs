// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.CaravanBattleMissionHandler
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions
{
  public class CaravanBattleMissionHandler : MissionLogic
  {
    private GameEntity _entity;
    private int _unitCount;
    private bool _isCamelCulture;
    private bool _isCaravan;
    private readonly string[] _camelLoadHarnesses = new string[2]
    {
      "camel_saddle_a",
      "camel_saddle_b"
    };
    private readonly string[] _camelMountableHarnesses = new string[1]
    {
      "camel_saddle"
    };
    private readonly string[] _muleLoadHarnesses = new string[3]
    {
      "mule_load_a",
      "mule_load_b",
      "mule_load_c"
    };
    private readonly string[] _muleMountableHarnesses = new string[3]
    {
      "aseran_village_harness",
      "steppe_fur_harness",
      "steppe_harness"
    };
    private const string CaravanPrefabName = "caravan_scattered_goods_prop";
    private const string VillagerGoodsPrefabName = "villager_scattered_goods_prop";

    public CaravanBattleMissionHandler(int unitCount, bool isCamelCulture, bool isCaravan)
    {
      this._unitCount = unitCount;
      this._isCamelCulture = isCamelCulture;
      this._isCaravan = isCaravan;
    }

    public override void AfterStart()
    {
      base.AfterStart();
      WorldFrame initialSpawnPathFrame = this.Mission.GetBattleSideInitialSpawnPathFrame(BattleSideEnum.Defender, Mission.GetBattleSizeOffset((int) ((double) this._unitCount * 1.5), this.Mission.GetInitialSpawnPath()));
      this._entity = GameEntity.Instantiate(Mission.Current.Scene, this._isCaravan ? "caravan_scattered_goods_prop" : "villager_scattered_goods_prop", new MatrixFrame(initialSpawnPathFrame.Rotation, initialSpawnPathFrame.Origin.GetGroundVec3()));
      this._entity.SetMobility(GameEntity.Mobility.dynamic);
      foreach (GameEntity child in this._entity.GetChildren())
      {
        float height;
        Vec3 normal;
        Mission.Current.Scene.GetTerrainHeightAndNormal(child.GlobalPosition.AsVec2, out height, out normal);
        MatrixFrame frame = child.GetGlobalFrame();
        frame.origin.z = height;
        frame.rotation.u = normal;
        frame.rotation.Orthonormalize();
        child.SetGlobalFrame(in frame);
      }
      IEnumerable<GameEntity> source = this._entity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (c => c.HasTag("caravan_animal_spawn")));
      int num = (int) ((double) source.Count<GameEntity>() * 0.40000000596046448);
      foreach (GameEntity gameEntity in source)
      {
        MatrixFrame globalFrame = gameEntity.GetGlobalFrame();
        ItemRosterElement harnessRosterElement = new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>(!this._isCamelCulture ? (num <= 0 ? this._muleLoadHarnesses[MBRandom.RandomInt(this._muleLoadHarnesses.Length)] : this._muleMountableHarnesses[MBRandom.RandomInt(this._muleMountableHarnesses.Length)]) : (num <= 0 ? this._camelLoadHarnesses[MBRandom.RandomInt(this._camelLoadHarnesses.Length)] : this._camelMountableHarnesses[MBRandom.RandomInt(this._camelMountableHarnesses.Length)])));
        Agent agent = Mission.Current.SpawnMonster(this._isCamelCulture ? (num-- > 0 ? new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("pack_camel")) : new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("pack_camel_unmountable"))) : (num-- > 0 ? new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("mule")) : new ItemRosterElement(Game.Current.ObjectManager.GetObject<ItemObject>("mule_unmountable"))), harnessRosterElement, in globalFrame.origin, globalFrame.rotation.f.AsVec2.Normalized(), -1);
        agent.SetAgentFlags(agent.GetAgentFlags() & ~AgentFlag.CanWander);
      }
      TacticalPosition familyDescending = this._entity.GetFirstScriptInFamilyDescending<TacticalPosition>();
      if (familyDescending == null)
        return;
      foreach (Team team in (List<Team>) Mission.Current.Teams)
        team.TeamAI.TacticalPositions.Add(familyDescending);
    }
  }
}
