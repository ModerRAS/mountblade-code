// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Threat
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Diagnostics;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class Threat
  {
    public ITargetable WeaponEntity;
    public Formation Formation;
    public Agent Agent;
    public float ThreatValue;

    public override int GetHashCode() => base.GetHashCode();

    public string Name
    {
      get
      {
        if (this.WeaponEntity != null)
          return this.WeaponEntity.Entity().Name;
        if (this.Agent != null)
          return this.Agent.Name.ToString();
        if (this.Formation != null)
          return this.Formation.ToString();
        TaleWorlds.Library.Debug.FailedAssert("Invalid threat", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Threat.cs", nameof (Name), 38);
        return "Invalid";
      }
    }

    public Vec3 Position
    {
      get
      {
        if (this.WeaponEntity != null)
          return (this.WeaponEntity.GetTargetEntity().PhysicsGlobalBoxMax + this.WeaponEntity.GetTargetEntity().PhysicsGlobalBoxMin) * 0.5f + this.WeaponEntity.GetTargetingOffset();
        if (this.Agent != null)
          return this.Agent.CollisionCapsuleCenter;
        if (this.Formation != null)
          return this.Formation.GetMedianAgent(false, false, this.Formation.GetAveragePositionOfUnits(false, false)).Position;
        TaleWorlds.Library.Debug.FailedAssert("Invalid threat", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Threat.cs", nameof (Position), 62);
        return Vec3.Invalid;
      }
    }

    public Vec3 BoundingBoxMin
    {
      get
      {
        if (this.WeaponEntity != null)
          return this.WeaponEntity.GetTargetEntity().PhysicsGlobalBoxMin + this.WeaponEntity.GetTargetingOffset();
        if (this.Agent != null)
          return this.Agent.CollisionCapsule.GetBoxMin();
        if (this.Formation == null)
          return Vec3.Invalid;
        TaleWorlds.Library.Debug.FailedAssert("Nobody should be requesting a bounding box for a formation", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Threat.cs", nameof (BoundingBoxMin), 82);
        return Vec3.Invalid;
      }
    }

    public Vec3 BoundingBoxMax
    {
      get
      {
        if (this.WeaponEntity != null)
          return this.WeaponEntity.GetTargetEntity().PhysicsGlobalBoxMax + this.WeaponEntity.GetTargetingOffset();
        if (this.Agent != null)
          return this.Agent.CollisionCapsule.GetBoxMax();
        if (this.Formation == null)
          return Vec3.Invalid;
        TaleWorlds.Library.Debug.FailedAssert("Nobody should be requesting a bounding box for a formation", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Threat.cs", nameof (BoundingBoxMax), 106);
        return Vec3.Invalid;
      }
    }

    public Vec3 GetVelocity()
    {
      if (this.WeaponEntity != null)
      {
        Vec3 zero = Vec3.Zero;
        if (this.WeaponEntity is IMoveableSiegeWeapon weaponEntity)
          return weaponEntity.MovementComponent.Velocity;
      }
      return Vec3.Zero;
    }

    public override bool Equals(object obj)
    {
      return obj is Threat threat && this.WeaponEntity == threat.WeaponEntity && this.Formation == threat.Formation;
    }

    [Conditional("DEBUG")]
    public void DisplayDebugInfo()
    {
    }
  }
}
