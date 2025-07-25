// Decompiled with JetBrains decompiler
// Type: SandBox.View.Map.MapCursor
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.Screens;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.View.Map
{
  public class MapCursor
  {
    private const string GameCursorValidDecalMaterialName = "map_cursor_valid_decal";
    private const string GameCursorInvalidDecalMaterialName = "map_cursor_invalid_decal";
    private const float CursorDecalBaseScale = 0.38f;
    private GameEntity _mapCursorDecalEntity;
    private Decal _mapCursorDecal;
    private MapScreen _mapScreen;
    private Material _gameCursorValidDecalMaterial;
    private Material _gameCursorInvalidDecalMaterial;
    private Vec3 _smoothRotationNormalStart;
    private Vec3 _smoothRotationNormalEnd;
    private Vec3 _smoothRotationNormalCurrent;
    private float _smoothRotationAlpha;
    private int _smallAtlasTextureIndex;
    private float _targetCircleRotationStartTime;
    private bool _gameCursorActive;
    private bool _anotherEntityHiglighted;

    public void Initialize(MapScreen parentMapScreen)
    {
      this._targetCircleRotationStartTime = 0.0f;
      this._smallAtlasTextureIndex = 0;
      this._mapScreen = parentMapScreen;
      Scene scene = (Campaign.Current.MapSceneWrapper as MapScene).Scene;
      this._gameCursorValidDecalMaterial = Material.GetFromResource("map_cursor_valid_decal");
      this._gameCursorInvalidDecalMaterial = Material.GetFromResource("map_cursor_invalid_decal");
      this._mapCursorDecalEntity = GameEntity.CreateEmpty(scene);
      this._mapCursorDecalEntity.Name = "tCursor";
      this._mapCursorDecal = Decal.CreateDecal();
      this._mapCursorDecal.SetMaterial(this._gameCursorValidDecalMaterial);
      this._mapCursorDecalEntity.AddComponent((GameEntityComponent) this._mapCursorDecal);
      scene.AddDecalInstance(this._mapCursorDecal, "editor_set", true);
      MatrixFrame frame = this._mapCursorDecalEntity.GetFrame();
      frame.Scale(new Vec3(0.38f, 0.38f, 0.38f));
      this._mapCursorDecal.SetFrame(frame);
    }

    public void BeforeTick(float dt)
    {
      SceneLayer sceneLayer = this._mapScreen.SceneLayer;
      Camera camera = this._mapScreen._mapCameraView.Camera;
      float cameraDistance = this._mapScreen._mapCameraView.CameraDistance;
      Vec3 zero1 = Vec3.Zero;
      Vec3 zero2 = Vec3.Zero;
      Vec2 viewportPoint = sceneLayer.SceneView.ScreenPointToViewportPoint(new Vec2(0.5f, 0.5f));
      camera.ViewportPointToWorldRay(ref zero1, ref zero2, viewportPoint);
      PathFaceRecord currentFace = new PathFaceRecord();
      Vec3 vec3;
      this._mapScreen.GetCursorIntersectionPoint(ref zero1, ref zero2, out float _, out vec3, ref currentFace);
      Vec3 groundNormal;
      sceneLayer.SceneView.ProjectedMousePositionOnGround(out vec3, out groundNormal, false, BodyFlags.None, false);
      if (!((NativeObject) this._mapCursorDecalEntity != (NativeObject) null))
        return;
      this._smallAtlasTextureIndex = this.GetCircleIndex();
      this._mapCursorDecal.SetMaterial(Campaign.Current.MapSceneWrapper.AreFacesOnSameIsland(currentFace, MobileParty.MainParty.CurrentNavigationFace, false) || this._anotherEntityHiglighted ? this._gameCursorValidDecalMaterial : this._gameCursorInvalidDecalMaterial);
      this._mapCursorDecal.SetVectorArgument(0.166f, 1f, 0.166f * (float) this._smallAtlasTextureIndex, 0.0f);
      this.SetAlpha(this._anotherEntityHiglighted ? 0.2f : 1f);
      MatrixFrame frame = this._mapCursorDecalEntity.GetFrame() with
      {
        origin = vec3
      };
      bool flag = !this._smoothRotationNormalStart.IsNonZero;
      Vec3 v = (double) cameraDistance > 160.0 ? Vec3.Up : groundNormal;
      if (!this._smoothRotationNormalEnd.NearlyEquals(v))
      {
        this._smoothRotationNormalStart = flag ? v : this._smoothRotationNormalCurrent;
        this._smoothRotationNormalEnd = v;
        double num1 = (double) this._smoothRotationNormalStart.Normalize();
        double num2 = (double) this._smoothRotationNormalEnd.Normalize();
        this._smoothRotationAlpha = 0.0f;
      }
      this._smoothRotationNormalCurrent = Vec3.Lerp(this._smoothRotationNormalStart, this._smoothRotationNormalEnd, this._smoothRotationAlpha);
      this._smoothRotationAlpha += 12f * dt;
      this._smoothRotationAlpha = MathF.Clamp(this._smoothRotationAlpha, 0.0f, 1f);
      double num3 = (double) this._smoothRotationNormalCurrent.Normalize();
      frame.rotation.f = camera.Frame.rotation.f;
      frame.rotation.f.z = 0.0f;
      double num4 = (double) frame.rotation.f.Normalize();
      frame.rotation.u = this._smoothRotationNormalCurrent;
      double num5 = (double) frame.rotation.u.Normalize();
      frame.rotation.s = Vec3.CrossProduct(frame.rotation.u, frame.rotation.f);
      float num6 = MathF.Clamp((float) (((double) cameraDistance + 80.0) * ((double) cameraDistance + 80.0) / 10000.0), 0.2f, 38f);
      frame.Scale(Vec3.One * num6);
      this._mapCursorDecalEntity.SetGlobalFrame(in frame);
      this._anotherEntityHiglighted = false;
    }

    public void SetVisible(bool value)
    {
      if (value)
      {
        if (this._gameCursorActive && !this._mapScreen.GetMouseVisible())
          return;
        this._mapScreen.SetMouseVisible(false);
        this._mapCursorDecalEntity.SetVisibilityExcludeParents(true);
        if (this._mapScreen.CurrentVisualOfTooltip != null)
          this._mapScreen.RemoveMapTooltip();
        Vec2 resolution = Input.Resolution;
        Input.SetMousePosition((int) ((double) resolution.X / 2.0), (int) ((double) resolution.Y / 2.0));
        this._gameCursorActive = true;
      }
      else
      {
        bool flag = !(GameStateManager.Current.ActiveState is MapState) || !this._mapScreen.SceneLayer.Input.IsKeyDown(InputKey.RightMouseButton) && !this._mapScreen.SceneLayer.Input.IsKeyDown(InputKey.MiddleMouseButton);
        if (!this._gameCursorActive && this._mapScreen.GetMouseVisible() == flag)
          return;
        this._mapScreen.SetMouseVisible(flag);
        this._mapCursorDecalEntity.SetVisibilityExcludeParents(false);
        this._gameCursorActive = false;
      }
    }

    protected internal void OnMapTerrainClick()
    {
      this._targetCircleRotationStartTime = MBCommon.GetApplicationTime();
    }

    protected internal void OnAnotherEntityHighlighted() => this._anotherEntityHiglighted = true;

    protected internal void SetAlpha(float alpha)
    {
      Color color = Color.FromUint(this._mapCursorDecal.GetFactor1());
      this._mapCursorDecal.SetFactor1(new Color(color.Red, color.Green, color.Blue, alpha).ToUnsignedInteger());
    }

    private int GetCircleIndex()
    {
      int num = (int) (((double) MBCommon.GetApplicationTime() - (double) this._targetCircleRotationStartTime) / 0.032999999821186066);
      if (num >= 10)
        return 0;
      int circleIndex = num % 10;
      if (circleIndex >= 5)
        circleIndex = 10 - circleIndex - 1;
      return circleIndex;
    }
  }
}
