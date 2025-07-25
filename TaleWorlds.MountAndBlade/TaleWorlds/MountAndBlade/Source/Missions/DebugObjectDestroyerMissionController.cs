// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Source.Missions.DebugObjectDestroyerMissionController
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade.Source.Missions
{
  public class DebugObjectDestroyerMissionController : MissionLogic
  {
    private GameEntity _contouredEntity;

    public override void OnMissionTick(float dt)
    {
      base.OnMissionTick(dt);
      Vec3 renderCameraPosition = this.Mission.Scene.LastFinalRenderCameraPosition;
      Vec3 impactDirection = -this.Mission.Scene.LastFinalRenderCameraFrame.rotation.u;
      float collisionDistance;
      GameEntity collidedEntity;
      bool flag1 = Mission.Current.Scene.RayCastForClosestEntityOrTerrain(renderCameraPosition, renderCameraPosition + impactDirection * 100f, out collisionDistance, out collidedEntity, excludeBodyFlags: BodyFlags.OnlyCollideWithRaycast);
      if (Input.DebugInput.IsShiftDown() && Agent.Main != null && (NativeObject) collidedEntity != (NativeObject) null && !collidedEntity.HasScriptOfType<DestructableComponent>())
      {
        foreach (DestructableComponent destructableComponent in Mission.Current.ActiveMissionObjects.Where<MissionObject>((Func<MissionObject, bool>) (x => x is DestructableComponent)))
        {
          if ((double) (destructableComponent.GameEntity.GlobalPosition - Agent.Main.Position).Length < 5.0)
            collidedEntity = destructableComponent.GameEntity;
        }
      }
      GameEntity gameEntity1 = (GameEntity) null;
      if (flag1 && (Input.DebugInput.IsKeyDown(InputKey.MiddleMouseButton) || Input.DebugInput.IsKeyReleased(InputKey.MiddleMouseButton)))
      {
        Vec3 vec3 = renderCameraPosition + impactDirection * collisionDistance;
        if ((NativeObject) collidedEntity == (NativeObject) null)
          return;
        bool flag2 = Input.DebugInput.IsKeyReleased(InputKey.MiddleMouseButton);
        int weaponKind = 0;
        if (flag2)
          weaponKind = !Input.DebugInput.IsAltDown() ? (!Input.DebugInput.IsControlDown() ? (int) Game.Current.ObjectManager.GetObject<ItemObject>("ballista_projectile").Id.InternalValue : (int) Game.Current.ObjectManager.GetObject<ItemObject>("pot").Id.InternalValue) : (int) Game.Current.ObjectManager.GetObject<ItemObject>("boulder").Id.InternalValue;
        GameEntity gameEntity2 = collidedEntity;
        DestructableComponent destructableComponent;
        for (destructableComponent = (DestructableComponent) null; destructableComponent == null && (NativeObject) gameEntity2 != (NativeObject) null; gameEntity2 = gameEntity2.Parent)
          destructableComponent = gameEntity2.GetFirstScriptOfType<DestructableComponent>();
        if (destructableComponent != null && !destructableComponent.IsDestroyed)
        {
          if (flag2)
          {
            if (Agent.Main != null)
              destructableComponent.TriggerOnHit(Agent.Main, 400, vec3 - impactDirection * 0.1f, impactDirection, new MissionWeapon(ItemObject.GetItemFromWeaponKind(weaponKind), (ItemModifier) null, (Banner) null), (ScriptComponentBehavior) null);
          }
          else
            gameEntity1 = destructableComponent.GameEntity;
        }
      }
      if ((NativeObject) gameEntity1 != (NativeObject) this._contouredEntity && (NativeObject) this._contouredEntity != (NativeObject) null)
        this._contouredEntity.SetContourColor(new uint?());
      this._contouredEntity = gameEntity1;
      if (!((NativeObject) this._contouredEntity != (NativeObject) null))
        return;
      this._contouredEntity.SetContourColor(new uint?(4294967040U));
    }
  }
}
