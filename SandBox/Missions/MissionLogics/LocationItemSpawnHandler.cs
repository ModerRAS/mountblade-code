// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.LocationItemSpawnHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class LocationItemSpawnHandler : MissionLogic
  {
    private Dictionary<ItemObject, GameEntity> _spawnedEntities;

    public override void AfterStart()
    {
      if (CampaignMission.Current.Location == null || CampaignMission.Current.Location.SpecialItems.Count == 0)
        return;
      this.SpawnSpecialItems();
    }

    private void SpawnSpecialItems()
    {
      this._spawnedEntities = new Dictionary<ItemObject, GameEntity>();
      List<GameEntity> list = this.Mission.Scene.FindEntitiesWithTag("sp_special_item").ToList<GameEntity>();
      foreach (ItemObject specialItem in CampaignMission.Current.Location.SpecialItems)
      {
        if (list.Count != 0)
        {
          MatrixFrame globalFrame = list[0].GetGlobalFrame();
          MissionWeapon weapon = new MissionWeapon(specialItem, (ItemModifier) null, (Banner) null);
          GameEntity gameEntity = this.Mission.SpawnWeaponWithNewEntity(ref weapon, Mission.WeaponSpawnFlags.WithStaticPhysics, globalFrame);
          this._spawnedEntities.Add(specialItem, gameEntity);
          list.RemoveAt(0);
        }
      }
    }

    public override void OnEntityRemoved(GameEntity entity)
    {
      if (this._spawnedEntities == null)
        return;
      foreach (KeyValuePair<ItemObject, GameEntity> spawnedEntity in this._spawnedEntities)
      {
        if ((NativeObject) spawnedEntity.Value == (NativeObject) entity)
          CampaignMission.Current.Location.SpecialItems.Remove(spawnedEntity.Key);
      }
    }
  }
}
