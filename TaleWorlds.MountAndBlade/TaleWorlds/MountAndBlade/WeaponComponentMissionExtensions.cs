// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.WeaponComponentMissionExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class WeaponComponentMissionExtensions
  {
    public static int GetItemUsageIndex(this WeaponComponentData weaponComponentData)
    {
      return MBItem.GetItemUsageIndex(weaponComponentData.ItemUsage);
    }

    public static Vec3 GetWeaponCenterOfMass(this PhysicsShape body)
    {
      return WeaponComponentMissionExtensions.CalculateCenterOfMass(body);
    }

    [MBCallback]
    internal static Vec3 CalculateCenterOfMass(PhysicsShape body)
    {
      if ((NativeObject) body == (NativeObject) null)
      {
        Debug.FailedAssert("Item has no body! Check this!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\ItemCollectionElementMissionExtensions.cs", nameof (CalculateCenterOfMass), 46);
        return Vec3.Zero;
      }
      Vec3 zero = Vec3.Zero;
      float num1 = 0.0f;
      int num2 = body.CapsuleCount();
      for (int index = 0; index < num2; ++index)
      {
        CapsuleData data = new CapsuleData();
        body.GetCapsule(ref data, index);
        Vec3 vec3 = (data.P1 + data.P2) * 0.5f;
        float num3 = data.P1.Distance(data.P2);
        float num4 = (float) ((double) data.Radius * (double) data.Radius * 3.1415927410125732 * (1.3333333730697632 * (double) data.Radius + (double) num3));
        num1 += num4;
        zero += vec3 * num4;
      }
      int num5 = body.SphereCount();
      for (int index = 0; index < num5; ++index)
      {
        SphereData data = new SphereData();
        body.GetSphere(ref data, index);
        float num6 = 4.18879032f * data.Radius * data.Radius * data.Radius;
        num1 += num6;
        zero += data.Origin * num6;
      }
      Vec3 centerOfMass;
      if ((double) num1 > 0.0)
      {
        centerOfMass = zero / num1;
        if ((double) MathF.Abs(centerOfMass.x) < 0.0099999997764825821)
          centerOfMass.x = 0.0f;
        if ((double) MathF.Abs(centerOfMass.y) < 0.0099999997764825821)
          centerOfMass.y = 0.0f;
        if ((double) MathF.Abs(centerOfMass.z) < 0.0099999997764825821)
          centerOfMass.z = 0.0f;
      }
      else
        centerOfMass = body.GetBoundingBoxCenter();
      return centerOfMass;
    }
  }
}
