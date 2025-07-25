// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DebugExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class DebugExtensions
  {
    public static void RenderDebugCircleOnTerrain(
      Scene scene,
      MatrixFrame frame,
      float radius,
      uint color,
      bool depthCheck = true,
      bool isDotted = false)
    {
      MBAPI.IMBDebugExtensions.RenderDebugCircleOnTerrain(scene.Pointer, ref frame, radius, color, depthCheck, isDotted);
    }

    public static void RenderDebugArcOnTerrain(
      Scene scene,
      MatrixFrame frame,
      float radius,
      float beginAngle,
      float endAngle,
      uint color,
      bool depthCheck = true,
      bool isDotted = false)
    {
      MBAPI.IMBDebugExtensions.RenderDebugArcOnTerrain(scene.Pointer, ref frame, radius, beginAngle, endAngle, color, depthCheck, isDotted);
    }

    public static void RenderDebugLineOnTerrain(
      Scene scene,
      Vec3 position,
      Vec3 direction,
      uint color,
      bool depthCheck = true,
      float time = 0.0f,
      bool isDotted = false,
      float pointDensity = 1f)
    {
      MBAPI.IMBDebugExtensions.RenderDebugLineOnTerrain(scene.Pointer, position, direction, color, depthCheck, time, isDotted, pointDensity);
    }
  }
}
