// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.PathTracker
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class PathTracker
  {
    private readonly Path _path;
    private readonly Vec3 _initialScale;
    private int _version = -1;

    public float TotalDistanceTraveled { get; set; }

    public bool HasChanged
    {
      get
      {
        return (NativeObject) this._path != (NativeObject) null && this._version < this._path.GetVersion();
      }
    }

    public bool IsValid => (NativeObject) this._path != (NativeObject) null;

    public bool HasReachedEnd
    {
      get => (double) this.TotalDistanceTraveled >= (double) this._path.TotalDistance;
    }

    public float PathTraveledPercentage => this.TotalDistanceTraveled / this._path.TotalDistance;

    public MatrixFrame CurrentFrame
    {
      get
      {
        MatrixFrame frameForDistance = this._path.GetFrameForDistance(this.TotalDistanceTraveled);
        frameForDistance.rotation.RotateAboutUp(3.14159274f);
        frameForDistance.rotation.ApplyScaleLocal(this._initialScale);
        return frameForDistance;
      }
    }

    public PathTracker(Path path, Vec3 initialScaleOfEntity)
    {
      this._path = path;
      this._initialScale = initialScaleOfEntity;
      if ((NativeObject) path != (NativeObject) null)
        this.UpdateVersion();
      this.Reset();
    }

    public void UpdateVersion() => this._version = this._path.GetVersion();

    public bool PathExists() => (NativeObject) this._path != (NativeObject) null;

    public void Advance(float deltaDistance)
    {
      this.TotalDistanceTraveled += deltaDistance;
      this.TotalDistanceTraveled = MathF.Min(this.TotalDistanceTraveled, this._path.TotalDistance);
    }

    public float GetPathLength() => this._path.TotalDistance;

    public void CurrentFrameAndColor(out MatrixFrame frame, out Vec3 color)
    {
      this._path.GetFrameAndColorForDistance(this.TotalDistanceTraveled, out frame, out color);
      frame.rotation.RotateAboutUp(3.14159274f);
      frame.rotation.ApplyScaleLocal(this._initialScale);
    }

    public void Reset() => this.TotalDistanceTraveled = 0.0f;
  }
}
