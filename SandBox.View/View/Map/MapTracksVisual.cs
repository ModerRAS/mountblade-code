// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapTracksVisual
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.View.Map
{
  public class MapTracksVisual : CampaignEntityVisualComponent
  {
    private const string TrackPrefabName = "map_track_arrow";
    private const int DefaultObjectPoolCount = 5;
    private readonly List<GameEntity> _trackEntityPool;
    private SphereData _trackSphere;
    private Scene _mapScene;
    private bool _tracksDirty = true;
    private readonly TWParallel.ParallelForAuxPredicate _parallelUpdateTrackColorsPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelMakeTrackPoolElementsInvisiblePredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelUpdateTrackPoolPositionsPredicate;
    private readonly TWParallel.ParallelForAuxPredicate _parallelUpdateVisibleTracksPredicate;

    public MapTracksVisual()
    {
      this._trackEntityPool = new List<GameEntity>();
      this._parallelUpdateTrackColorsPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelUpdateTrackColors);
      this._parallelMakeTrackPoolElementsInvisiblePredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelMakeTrackPoolElementsInvisible);
      this._parallelUpdateTrackPoolPositionsPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelUpdateTrackPoolPositions);
      this._parallelUpdateVisibleTracksPredicate = new TWParallel.ParallelForAuxPredicate(this.ParallelUpdateVisibleTracks);
    }

    public Scene MapScene
    {
      get
      {
        if ((NativeObject) this._mapScene == (NativeObject) null && Campaign.Current != null && Campaign.Current.MapSceneWrapper != null)
          this._mapScene = ((SandBox.MapScene) Campaign.Current.MapSceneWrapper).Scene;
        return this._mapScene;
      }
    }

    protected override void OnInitialize()
    {
      base.OnInitialize();
      CampaignEvents.TrackDetectedEvent.AddNonSerializedListener((object) this, new Action<Track>(this.OnTrackDetected));
      CampaignEvents.TrackLostEvent.AddNonSerializedListener((object) this, new Action<Track>(this.OnTrackLost));
      this.InitializeObjectPoolWithDefaultCount();
    }

    private void OnTrackDetected(Track track) => this._tracksDirty = true;

    private void OnTrackLost(Track track) => this._tracksDirty = true;

    private void ParallelUpdateTrackColors(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
        (this._trackEntityPool[index].GetComponentAtIndex(0, GameEntity.ComponentType.Decal) as Decal).SetFactor1(Campaign.Current.Models.MapTrackModel.GetTrackColor(MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks[index]));
    }

    private void UpdateTrackMesh()
    {
      int num = this._trackEntityPool.Count - MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks.Count;
      if (num > 0)
      {
        int count = MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks.Count;
        TWParallel.For(count, count + num, this._parallelMakeTrackPoolElementsInvisiblePredicate);
      }
      else
        this.CreateNewTrackPoolElements(-num);
      TWParallel.For(0, MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks.Count, this._parallelUpdateVisibleTracksPredicate);
      TWParallel.For(0, MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks.Count, this._parallelUpdateTrackPoolPositionsPredicate);
    }

    private void ParallelUpdateTrackPoolPositions(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
      {
        MatrixFrame trackFrame = this.CalculateTrackFrame(MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks[index]);
        this._trackEntityPool[index].SetFrame(ref trackFrame);
      }
    }

    private void ParallelUpdateVisibleTracks(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
        this._trackEntityPool[index].SetVisibilityExcludeParents(true);
    }

    private void ParallelMakeTrackPoolElementsInvisible(int startInclusive, int endExclusive)
    {
      for (int index = startInclusive; index < endExclusive; ++index)
        this._trackEntityPool[index].SetVisibilityExcludeParents(false);
    }

    private void InitializeObjectPoolWithDefaultCount()
    {
      this.CreateNewTrackPoolElements(5);
      foreach (GameEntity gameEntity in this._trackEntityPool)
        gameEntity.SetVisibilityExcludeParents(false);
    }

    private void CreateNewTrackPoolElements(int delta)
    {
      for (int index = 0; index < delta; ++index)
      {
        GameEntity gameEntity = GameEntity.Instantiate(this.MapScene, "map_track_arrow", MatrixFrame.Identity);
        gameEntity.SetVisibilityExcludeParents(true);
        this._trackEntityPool.Add(gameEntity);
      }
    }

    public override void OnVisualTick(MapScreen screen, float realDt, float dt)
    {
      if (this._tracksDirty)
      {
        this.UpdateTrackMesh();
        this._tracksDirty = false;
      }
      TWParallel.For(0, MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks.Count, this._parallelUpdateTrackColorsPredicate);
    }

    public bool RaySphereIntersection(Ray ray, SphereData sphere, ref Vec3 intersectionPoint)
    {
      Vec3 origin = sphere.Origin;
      float radius = sphere.Radius;
      Vec3 v2 = origin - ray.Origin;
      float num1 = Vec3.DotProduct(ray.Direction, v2);
      if ((double) num1 > 0.0)
      {
        Vec3 vec3 = ray.Origin + ray.Direction * num1 - origin;
        float x = radius * radius - vec3.LengthSquared;
        if ((double) x >= 0.0)
        {
          float num2 = MathF.Sqrt(x);
          float num3 = num1 - num2;
          if ((double) num3 >= 0.0 && (double) num3 <= (double) ray.MaxDistance)
          {
            intersectionPoint = ray.Origin + ray.Direction * num3;
            return true;
          }
          if ((double) num3 < 0.0)
          {
            intersectionPoint = ray.Origin;
            return true;
          }
        }
      }
      else if ((double) (ray.Origin - origin).LengthSquared < (double) radius * (double) radius)
      {
        intersectionPoint = ray.Origin;
        return true;
      }
      return false;
    }

    public Track GetTrackOnMouse(Ray mouseRay, Vec3 mouseIntersectionPoint)
    {
      Track trackOnMouse = (Track) null;
      for (int index = 0; index < MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks.Count; ++index)
      {
        Track detectedTrack = MapScreen.Instance.MapTracksCampaignBehavior.DetectedTracks[index];
        float trackScale = Campaign.Current.Models.MapTrackModel.GetTrackScale(detectedTrack);
        MatrixFrame trackFrame = this.CalculateTrackFrame(detectedTrack);
        float lengthSquared = (trackFrame.origin - mouseIntersectionPoint).LengthSquared;
        if ((double) lengthSquared < 0.10000000149011612)
        {
          float num = MathF.Sqrt(lengthSquared);
          this._trackSphere.Origin = trackFrame.origin;
          this._trackSphere.Radius = (float) (0.05000000074505806 + (double) num * 0.0099999997764825821) + trackScale;
          Vec3 intersectionPoint = new Vec3();
          if (this.RaySphereIntersection(mouseRay, this._trackSphere, ref intersectionPoint))
            trackOnMouse = detectedTrack;
        }
      }
      return trackOnMouse;
    }

    private MatrixFrame CalculateTrackFrame(Track track)
    {
      Vec3 vec3 = track.Position.ToVec3();
      double scale = (double) track.Scale;
      MatrixFrame identity = MatrixFrame.Identity with
      {
        origin = vec3
      };
      float height;
      Vec3 normal;
      Campaign.Current.MapSceneWrapper.GetTerrainHeightAndNormal(identity.origin.AsVec2, out height, out normal);
      identity.origin.z = height + 0.01f;
      identity.rotation.u = normal;
      Vec2 asVec2 = identity.rotation.f.AsVec2;
      asVec2.RotateCCW(track.Direction);
      identity.rotation.f = new Vec3(asVec2.x, asVec2.y, identity.rotation.f.z);
      identity.rotation.s = Vec3.CrossProduct(identity.rotation.f, identity.rotation.u);
      double num1 = (double) identity.rotation.s.Normalize();
      identity.rotation.f = Vec3.CrossProduct(identity.rotation.u, identity.rotation.s);
      double num2 = (double) identity.rotation.f.Normalize();
      float num3 = (float) scale;
      identity.rotation.s *= num3;
      identity.rotation.f *= num3;
      identity.rotation.u *= num3;
      return identity;
    }
  }
}
