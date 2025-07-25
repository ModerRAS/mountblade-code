// Decompiled with JetBrains decompiler
// Type: TaleWorlds.Engine.GauntletUI.TwoDimensionEnginePlatform
// Assembly: TaleWorlds.Engine.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 09142970-CF52-41EE-A3E1-A44F7B1BD752
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.Engine.GauntletUI.dll

using System;
using System.Collections.Generic;
using TaleWorlds.DotNet;
using TaleWorlds.Library;
using TaleWorlds.ScreenSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.Engine.GauntletUI
{
  public class TwoDimensionEnginePlatform : ITwoDimensionPlatform
  {
    private TwoDimensionView _view;
    private ScissorTestInfo _currentScissorTestInfo;
    private bool _scissorSet;
    private Dictionary<TwoDimensionEnginePlatform.MaterialTuple, TaleWorlds.Engine.Material> _materials;
    private Dictionary<TaleWorlds.Engine.Texture, TaleWorlds.Engine.Material> _textMaterials;
    private Dictionary<string, SoundEvent> _soundEvents;

    float ITwoDimensionPlatform.Width
    {
      get => Screen.RealScreenResolutionWidth * ScreenManager.UsableArea.X;
    }

    float ITwoDimensionPlatform.Height
    {
      get => Screen.RealScreenResolutionHeight * ScreenManager.UsableArea.Y;
    }

    float ITwoDimensionPlatform.ReferenceWidth => 1920f;

    float ITwoDimensionPlatform.ReferenceHeight => 1080f;

    float ITwoDimensionPlatform.ApplicationTime => Time.ApplicationTime;

    public TwoDimensionEnginePlatform(TwoDimensionView view)
    {
      this._view = view;
      this._scissorSet = false;
      this._materials = new Dictionary<TwoDimensionEnginePlatform.MaterialTuple, TaleWorlds.Engine.Material>();
      this._textMaterials = new Dictionary<TaleWorlds.Engine.Texture, TaleWorlds.Engine.Material>();
      this._soundEvents = new Dictionary<string, SoundEvent>();
    }

    private TaleWorlds.Engine.Material GetOrCreateMaterial(
      TaleWorlds.Engine.Texture texture,
      TaleWorlds.Engine.Texture overlayTexture,
      bool useCustomMesh,
      bool useOverlayTextureAlphaAsMask)
    {
      TwoDimensionEnginePlatform.MaterialTuple key = new TwoDimensionEnginePlatform.MaterialTuple(texture, overlayTexture, useCustomMesh);
      TaleWorlds.Engine.Material material;
      if (this._materials.TryGetValue(key, out material))
        return material;
      TaleWorlds.Engine.Material copy = TaleWorlds.Engine.Material.GetFromResource("two_dimension_simple_material").CreateCopy();
      copy.SetTexture(TaleWorlds.Engine.Material.MBTextureType.DiffuseMap, texture);
      if ((NativeObject) overlayTexture != (NativeObject) null)
      {
        copy.AddMaterialShaderFlag("use_overlay_texture", true);
        if (useOverlayTextureAlphaAsMask)
          copy.AddMaterialShaderFlag("use_overlay_texture_alpha_as_mask", true);
        copy.SetTexture(TaleWorlds.Engine.Material.MBTextureType.DiffuseMap2, overlayTexture);
      }
      if (useCustomMesh)
        copy.AddMaterialShaderFlag("use_custom_mesh", true);
      this._materials.Add(key, copy);
      return copy;
    }

    private TaleWorlds.Engine.Material GetOrCreateTextMaterial(TaleWorlds.Engine.Texture texture)
    {
      TaleWorlds.Engine.Material textMaterial;
      if (this._textMaterials.TryGetValue(texture, out textMaterial))
        return textMaterial;
      TaleWorlds.Engine.Material copy = TaleWorlds.Engine.Material.GetFromResource("two_dimension_text_material").CreateCopy();
      copy.SetTexture(TaleWorlds.Engine.Material.MBTextureType.DiffuseMap, texture);
      this._textMaterials.Add(texture, copy);
      return copy;
    }

    void ITwoDimensionPlatform.Draw(
      float x,
      float y,
      TaleWorlds.TwoDimension.Material material,
      DrawObject2D mesh,
      int layer)
    {
      Vec2 vec2_1 = new Vec2(0.0f, 0.0f);
      Vec2 vec2_2 = new Vec2(Screen.RealScreenResolutionWidth, Screen.RealScreenResolutionHeight);
      if (this._scissorSet)
      {
        vec2_1 = new Vec2((float) this._currentScissorTestInfo.X, (float) this._currentScissorTestInfo.Y);
        vec2_2 = new Vec2((float) this._currentScissorTestInfo.Width, (float) this._currentScissorTestInfo.Height);
      }
      switch (material)
      {
        case SimpleMaterial _:
          SimpleMaterial simpleMaterial = (SimpleMaterial) material;
          TaleWorlds.TwoDimension.Texture texture1 = simpleMaterial.Texture;
          if (texture1 == null)
            break;
          TaleWorlds.Engine.Texture texture2 = ((EngineTexture) texture1.PlatformTexture).Texture;
          if (!((NativeObject) texture2 != (NativeObject) null))
            break;
          TaleWorlds.Engine.Material material1 = (TaleWorlds.Engine.Material) null;
          Vec2 vec2_3 = Vec2.Zero;
          Vec2 vec2_4 = Vec2.Zero;
          float num1 = 512f;
          float num2 = 512f;
          float num3 = 0.0f;
          float num4 = 0.0f;
          if (simpleMaterial.OverlayEnabled)
          {
            TaleWorlds.Engine.Texture texture3 = ((EngineTexture) simpleMaterial.OverlayTexture.PlatformTexture).Texture;
            material1 = this.GetOrCreateMaterial(texture2, texture3, mesh.DrawObjectType == DrawObjectType.Mesh, simpleMaterial.UseOverlayAlphaAsMask);
            vec2_3 = (Vec2) simpleMaterial.StartCoordinate;
            vec2_4 = (Vec2) simpleMaterial.Size;
            num1 = simpleMaterial.OverlayTextureWidth;
            num2 = simpleMaterial.OverlayTextureHeight;
            num3 = simpleMaterial.OverlayXOffset;
            num4 = simpleMaterial.OverlayYOffset;
          }
          if ((NativeObject) material1 == (NativeObject) null)
            material1 = this.GetOrCreateMaterial(texture2, (TaleWorlds.Engine.Texture) null, mesh.DrawObjectType == DrawObjectType.Mesh, false);
          uint unsignedInteger1 = simpleMaterial.Color.ToUnsignedInteger();
          float colorFactor = simpleMaterial.ColorFactor;
          float alphaFactor = simpleMaterial.AlphaFactor;
          float hueFactor = simpleMaterial.HueFactor;
          float saturationFactor = simpleMaterial.SaturationFactor;
          float valueFactor = simpleMaterial.ValueFactor;
          Vec2 vec2_5 = Vec2.Zero;
          float num5 = 0.0f;
          float num6 = 0.0f;
          if (simpleMaterial.CircularMaskingEnabled)
          {
            vec2_5 = (Vec2) simpleMaterial.CircularMaskingCenter;
            num5 = simpleMaterial.CircularMaskingRadius;
            num6 = simpleMaterial.CircularMaskingSmoothingRadius;
          }
          float[] vertices = mesh.Vertices;
          float[] textureCoordinates = mesh.TextureCoordinates;
          uint[] indices = mesh.Indices;
          int vertexCount = mesh.VertexCount;
          TwoDimensionMeshDrawData meshDrawData1 = new TwoDimensionMeshDrawData();
          meshDrawData1.ScreenWidth = Screen.RealScreenResolutionWidth;
          meshDrawData1.ScreenHeight = Screen.RealScreenResolutionHeight;
          meshDrawData1.DrawX = x;
          meshDrawData1.DrawY = y;
          meshDrawData1.ClipRectPosition = vec2_1;
          meshDrawData1.ClipRectSize = vec2_2;
          meshDrawData1.Layer = layer;
          meshDrawData1.Width = mesh.Width;
          meshDrawData1.Height = mesh.Height;
          meshDrawData1.MinU = mesh.MinU;
          meshDrawData1.MinV = mesh.MinV;
          meshDrawData1.MaxU = mesh.MaxU;
          meshDrawData1.MaxV = mesh.MaxV;
          meshDrawData1.ClipCircleCenter = vec2_5;
          meshDrawData1.ClipCircleRadius = num5;
          meshDrawData1.ClipCircleSmoothingRadius = num6;
          meshDrawData1.Color = unsignedInteger1;
          meshDrawData1.ColorFactor = colorFactor;
          meshDrawData1.AlphaFactor = alphaFactor;
          meshDrawData1.HueFactor = hueFactor;
          meshDrawData1.SaturationFactor = saturationFactor;
          meshDrawData1.ValueFactor = valueFactor;
          meshDrawData1.OverlayTextureWidth = num1;
          meshDrawData1.OverlayTextureHeight = num2;
          meshDrawData1.OverlayXOffset = num3;
          meshDrawData1.OverlayYOffset = num4;
          meshDrawData1.StartCoordinate = vec2_3;
          meshDrawData1.Size = vec2_4;
          meshDrawData1.Type = (uint) mesh.DrawObjectType;
          if (MBDebug.DisableAllUI)
            break;
          if (mesh.DrawObjectType == DrawObjectType.Quad)
          {
            this._view.CreateMeshFromDescription(material1, meshDrawData1);
            break;
          }
          this._view.CreateMeshFromDescription(vertices, textureCoordinates, indices, vertexCount, material1, meshDrawData1);
          break;
        case TextMaterial _:
          TextMaterial textMaterial1 = (TextMaterial) material;
          uint unsignedInteger2 = textMaterial1.Color.ToUnsignedInteger();
          TaleWorlds.TwoDimension.Texture texture4 = textMaterial1.Texture;
          if (texture4 == null)
            break;
          TaleWorlds.Engine.Texture texture5 = ((EngineTexture) texture4.PlatformTexture).Texture;
          if (!((NativeObject) texture5 != (NativeObject) null))
            break;
          TaleWorlds.Engine.Material textMaterial2 = this.GetOrCreateTextMaterial(texture5);
          TwoDimensionTextMeshDrawData meshDrawData2 = new TwoDimensionTextMeshDrawData();
          meshDrawData2.DrawX = x;
          meshDrawData2.DrawY = y;
          meshDrawData2.ScreenWidth = Screen.RealScreenResolutionWidth;
          meshDrawData2.ScreenHeight = Screen.RealScreenResolutionHeight;
          meshDrawData2.Color = unsignedInteger2;
          meshDrawData2.ScaleFactor = 1.5f / textMaterial1.ScaleFactor;
          meshDrawData2.SmoothingConstant = textMaterial1.SmoothingConstant;
          meshDrawData2.GlowColor = textMaterial1.GlowColor.ToUnsignedInteger();
          meshDrawData2.OutlineColor = textMaterial1.OutlineColor.ToVec3();
          meshDrawData2.OutlineAmount = textMaterial1.OutlineAmount;
          meshDrawData2.GlowRadius = textMaterial1.GlowRadius;
          meshDrawData2.Blur = textMaterial1.Blur;
          meshDrawData2.ShadowOffset = textMaterial1.ShadowOffset;
          meshDrawData2.ShadowAngle = textMaterial1.ShadowAngle;
          meshDrawData2.ColorFactor = textMaterial1.ColorFactor;
          meshDrawData2.AlphaFactor = textMaterial1.AlphaFactor;
          meshDrawData2.HueFactor = textMaterial1.HueFactor;
          meshDrawData2.SaturationFactor = textMaterial1.SaturationFactor;
          meshDrawData2.ValueFactor = textMaterial1.ValueFactor;
          meshDrawData2.Layer = layer;
          meshDrawData2.ClipRectPosition = vec2_1;
          meshDrawData2.ClipRectSize = vec2_2;
          meshDrawData2.HashCode1 = mesh.HashCode1;
          meshDrawData2.HashCode2 = mesh.HashCode2;
          if (MBDebug.DisableAllUI || this._view.CreateTextMeshFromCache(textMaterial2, meshDrawData2))
            break;
          this._view.CreateTextMeshFromDescription(mesh.Vertices, mesh.TextureCoordinates, mesh.Indices, mesh.VertexCount, textMaterial2, meshDrawData2);
          break;
      }
    }

    void ITwoDimensionPlatform.SetScissor(ScissorTestInfo scissorTestInfo)
    {
      this._currentScissorTestInfo = scissorTestInfo;
      this._scissorSet = true;
    }

    void ITwoDimensionPlatform.ResetScissor() => this._scissorSet = false;

    void ITwoDimensionPlatform.PlaySound(string soundName)
    {
      SoundEvent.PlaySound2D("event:/ui/" + soundName);
    }

    void ITwoDimensionPlatform.CreateSoundEvent(string soundName)
    {
      if (this._soundEvents.ContainsKey(soundName))
        return;
      SoundEvent eventFromString = SoundEvent.CreateEventFromString("event:/ui/" + soundName, (Scene) null);
      this._soundEvents.Add(soundName, eventFromString);
    }

    void ITwoDimensionPlatform.PlaySoundEvent(string soundName)
    {
      SoundEvent soundEvent;
      if (!this._soundEvents.TryGetValue(soundName, out soundEvent))
        return;
      soundEvent.Play();
    }

    void ITwoDimensionPlatform.StopAndRemoveSoundEvent(string soundName)
    {
      SoundEvent soundEvent;
      if (!this._soundEvents.TryGetValue(soundName, out soundEvent))
        return;
      soundEvent.Stop();
      this._soundEvents.Remove(soundName);
    }

    void ITwoDimensionPlatform.OpenOnScreenKeyboard(
      string initialText,
      string descriptionText,
      int maxLength,
      int keyboardTypeEnum)
    {
      ScreenManager.OnPlatformScreenKeyboardRequested(initialText, descriptionText, maxLength, keyboardTypeEnum);
    }

    void ITwoDimensionPlatform.BeginDebugPanel(string panelTitle)
    {
      Imgui.BeginMainThreadScope();
      Imgui.Begin(panelTitle);
    }

    void ITwoDimensionPlatform.EndDebugPanel()
    {
      Imgui.End();
      Imgui.EndMainThreadScope();
    }

    void ITwoDimensionPlatform.DrawDebugText(string text) => Imgui.Text(text);

    bool ITwoDimensionPlatform.DrawDebugTreeNode(string text) => Imgui.TreeNode(text);

    void ITwoDimensionPlatform.PopDebugTreeNode() => Imgui.TreePop();

    void ITwoDimensionPlatform.DrawCheckbox(string label, ref bool isChecked)
    {
      Imgui.Checkbox(label, ref isChecked);
    }

    bool ITwoDimensionPlatform.IsDebugItemHovered() => Imgui.IsItemHovered();

    bool ITwoDimensionPlatform.IsDebugModeEnabled() => UIConfig.DebugModeEnabled;

    public void Reset()
    {
    }

    public struct MaterialTuple : IEquatable<TwoDimensionEnginePlatform.MaterialTuple>
    {
      public TaleWorlds.Engine.Texture Texture;
      public TaleWorlds.Engine.Texture OverlayTexture;
      public bool UseCustomMesh;

      public MaterialTuple(TaleWorlds.Engine.Texture texture, TaleWorlds.Engine.Texture overlayTexture, bool customMesh)
      {
        this.Texture = texture;
        this.OverlayTexture = overlayTexture;
        this.UseCustomMesh = customMesh;
      }

      public bool Equals(TwoDimensionEnginePlatform.MaterialTuple other)
      {
        return (NativeObject) other.Texture == (NativeObject) this.Texture && (NativeObject) other.OverlayTexture == (NativeObject) this.OverlayTexture && other.UseCustomMesh == this.UseCustomMesh;
      }

      public override int GetHashCode()
      {
        int hashCode = this.Texture.GetHashCode();
        return ((NativeObject) this.OverlayTexture != (NativeObject) null ? hashCode * 397 ^ this.OverlayTexture.GetHashCode() : hashCode) * 397 ^ this.UseCustomMesh.GetHashCode();
      }
    }
  }
}
