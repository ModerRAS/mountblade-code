// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SpawnPathData
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct SpawnPathData
  {
    public static readonly SpawnPathData Invalid = new SpawnPathData();
    public readonly Path Path;
    public readonly bool IsInverted;
    public readonly float CenterRatio;
    public readonly SpawnPathOrientation Orientation;

    public bool IsValid
    {
      get => (NativeObject) this.Path != (NativeObject) null && this.Path.NumberOfPoints > 1;
    }

    public SpawnPathData(
      Path path = null,
      SpawnPathOrientation orientation = SpawnPathOrientation.PathCenter,
      float centerRatio = 0.0f,
      bool isInverted = false)
    {
      this.Path = path;
      this.Orientation = orientation;
      this.CenterRatio = MathF.Clamp(centerRatio, 0.0f, 1f);
      this.IsInverted = isInverted;
    }

    public SpawnPathData Invert()
    {
      return new SpawnPathData(this.Path, this.Orientation, MathF.Max(1f - this.CenterRatio, 0.0f), !this.IsInverted);
    }

    public MatrixFrame GetSpawnFrame(float offset = 0.0f)
    {
      MatrixFrame spawnFrame = MatrixFrame.Identity;
      if (this.IsValid)
      {
        float num1 = MathF.Clamp(this.CenterRatio + offset, 0.0f, 1f);
        float num2 = this.IsInverted ? 1f - num1 : num1;
        spawnFrame = this.Path.GetNearestFrameWithValidAlphaForDistance(this.Path.GetTotalLength() * num2, this.IsInverted);
        spawnFrame.rotation.f = this.IsInverted ? -spawnFrame.rotation.f : spawnFrame.rotation.f;
        spawnFrame.rotation.OrthonormalizeAccordingToForwardAndKeepUpAsZAxis();
      }
      return spawnFrame;
    }

    public void GetOrientedSpawnPathPosition(
      out Vec2 spawnPathPosition,
      out Vec2 spawnPathDirection,
      float pathOffset = 0.0f)
    {
      if (this.IsValid)
      {
        MatrixFrame spawnFrame = this.GetSpawnFrame(pathOffset);
        spawnPathPosition = spawnFrame.origin.AsVec2;
        if (this.Orientation == SpawnPathOrientation.PathCenter)
        {
          Vec2 asVec2 = this.Invert().GetSpawnFrame(pathOffset).origin.AsVec2;
          spawnPathDirection = (asVec2 - spawnPathPosition).Normalized();
        }
        else
        {
          Vec2 asVec2 = this.GetSpawnFrame(((double) pathOffset >= 0.0 ? 1f : 0.0f) * MathF.Max(0.01f, Math.Abs(pathOffset))).origin.AsVec2;
          spawnPathDirection = (asVec2 - spawnPathPosition).Normalized();
        }
      }
      else
      {
        spawnPathPosition = Vec2.Invalid;
        spawnPathDirection = Vec2.Invalid;
      }
    }
  }
}
