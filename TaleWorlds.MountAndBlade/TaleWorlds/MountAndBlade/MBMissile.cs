// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBMissile
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MBMissile
  {
    private readonly Mission _mission;

    protected MBMissile(Mission mission) => this._mission = mission;

    public int Index { get; set; }

    public Vec3 GetPosition()
    {
      return MBAPI.IMBMission.GetPositionOfMissile(this._mission.Pointer, this.Index);
    }

    public Vec3 GetVelocity()
    {
      return MBAPI.IMBMission.GetVelocityOfMissile(this._mission.Pointer, this.Index);
    }

    public bool GetHasRigidBody()
    {
      return MBAPI.IMBMission.GetMissileHasRigidBody(this._mission.Pointer, this.Index);
    }
  }
}
