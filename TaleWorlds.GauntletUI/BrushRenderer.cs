// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushRenderer
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.Library;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushRenderer
  {
    private BrushState _startBrushState;
    private BrushState _currentBrushState;
    private Dictionary<string, BrushLayerState> _startBrushLayerState;
    private Dictionary<string, BrushLayerState> _currentBrushLayerState;
    public bool UseLocalTimer;
    private float _brushLocalTimer;
    private float _globalTime;
    private int _offsetSeed;
    private float _randomXOffset;
    private float _randomYOffset;
    private BrushRenderer.BrushRendererAnimationState _brushRendererAnimationState;
    private Brush _brush;
    private long _latestStyleVersion;
    private string _currentState;
    private Style _styleOfCurrentState;

    private float _brushTimer => !this.UseLocalTimer ? this._globalTime : this._brushLocalTimer;

    public bool ForcePixelPerfectPlacement { get; set; }

    public Style CurrentStyle => this._styleOfCurrentState;

    public Brush Brush
    {
      get => this._brush;
      set
      {
        if (this._brush == value)
          return;
        this._brush = value;
        this._brushLocalTimer = 0.0f;
        int count = this._brush != null ? this._brush.Layers.Count : 0;
        if (this._startBrushLayerState == null)
        {
          this._startBrushLayerState = new Dictionary<string, BrushLayerState>(count);
          this._currentBrushLayerState = new Dictionary<string, BrushLayerState>(count);
        }
        else
        {
          this._startBrushLayerState.Clear();
          this._currentBrushLayerState.Clear();
        }
        if (this._brush == null)
          return;
        Style defaultStyle = this._brush.DefaultStyle;
        BrushState brushState = new BrushState();
        brushState.FillFrom(defaultStyle);
        this._startBrushState = brushState;
        this._currentBrushState = brushState;
        foreach (BrushLayer layer in this._brush.Layers)
        {
          BrushLayerState brushLayerState = new BrushLayerState();
          brushLayerState.FillFrom((IBrushLayerData) layer);
          this._startBrushLayerState[layer.Name] = brushLayerState;
          this._currentBrushLayerState[layer.Name] = brushLayerState;
        }
        if (string.IsNullOrEmpty(this.CurrentState))
          return;
        this._styleOfCurrentState = this.Brush.GetStyleOrDefault(this.CurrentState);
      }
    }

    public string CurrentState
    {
      get => this._currentState;
      set
      {
        if (!(this._currentState != value))
          return;
        string currentState = this._currentState;
        this._brushLocalTimer = 0.0f;
        this._currentState = value;
        this._startBrushState = this._currentBrushState;
        foreach (KeyValuePair<string, BrushLayerState> keyValuePair in this._currentBrushLayerState)
          this._startBrushLayerState[keyValuePair.Key] = keyValuePair.Value;
        if (this.Brush == null)
          return;
        Style styleOrDefault = this.Brush.GetStyleOrDefault(this.CurrentState);
        this._styleOfCurrentState = styleOrDefault;
        this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.None;
        if (styleOrDefault.AnimationMode == StyleAnimationMode.BasicTransition)
        {
          if (string.IsNullOrEmpty(currentState))
            return;
          this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.PlayingBasicTranisition;
        }
        else
        {
          if (styleOrDefault.AnimationMode != StyleAnimationMode.Animation || string.IsNullOrEmpty(currentState) && string.IsNullOrEmpty(styleOrDefault.AnimationToPlayOnBegin))
            return;
          this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.PlayingAnimation;
        }
      }
    }

    public BrushRenderer()
    {
      this._startBrushState = new BrushState();
      this._currentBrushState = new BrushState();
      this._startBrushLayerState = new Dictionary<string, BrushLayerState>();
      this._currentBrushLayerState = new Dictionary<string, BrushLayerState>();
      this._brushLocalTimer = 0.0f;
      this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.None;
      this._randomXOffset = -1f;
      this._randomYOffset = -1f;
    }

    private float GetRandomXOffset()
    {
      if ((double) this._randomXOffset < 0.0)
      {
        Random random = new Random(this._offsetSeed);
        this._randomXOffset = (float) random.Next(0, 2048);
        this._randomYOffset = (float) random.Next(0, 2048);
      }
      return this._randomXOffset;
    }

    private float GetRandomYOffset()
    {
      if ((double) this._randomYOffset < 0.0)
      {
        Random random = new Random(this._offsetSeed);
        this._randomXOffset = (float) random.Next(0, 2048);
        this._randomYOffset = (float) random.Next(0, 2048);
      }
      return this._randomYOffset;
    }

    public void Update(float globalAnimTime, float dt)
    {
      this._globalTime = globalAnimTime;
      this._brushLocalTimer += dt;
      if (this.Brush == null)
        return;
      Style styleOfCurrentState = this._styleOfCurrentState;
      if ((this._brushRendererAnimationState == BrushRenderer.BrushRendererAnimationState.None || this._brushRendererAnimationState == BrushRenderer.BrushRendererAnimationState.Ended) && (!string.IsNullOrEmpty(styleOfCurrentState.AnimationToPlayOnBegin) || this._styleOfCurrentState.Version != this._latestStyleVersion))
      {
        this._latestStyleVersion = styleOfCurrentState.Version;
        BrushState brushState = new BrushState();
        brushState.FillFrom(styleOfCurrentState);
        this._startBrushState = brushState;
        this._currentBrushState = brushState;
        foreach (StyleLayer layer in styleOfCurrentState.Layers)
        {
          BrushLayerState brushLayerState = new BrushLayerState();
          brushLayerState.FillFrom((IBrushLayerData) layer);
          this._currentBrushLayerState[layer.Name] = brushLayerState;
          this._startBrushLayerState[layer.Name] = brushLayerState;
        }
      }
      else if (this._brushRendererAnimationState == BrushRenderer.BrushRendererAnimationState.PlayingBasicTranisition)
      {
        float num = this.UseLocalTimer ? this._brushLocalTimer : globalAnimTime;
        if ((double) num >= (double) this.Brush.TransitionDuration)
        {
          this.EndAnimation();
        }
        else
        {
          float ratio = num / this.Brush.TransitionDuration;
          if ((double) ratio > 1.0)
            ratio = 1f;
          BrushState startBrushState = this._startBrushState;
          BrushState brushState = new BrushState();
          brushState.LerpFrom(startBrushState, styleOfCurrentState, ratio);
          this._currentBrushState = brushState;
          foreach (StyleLayer layer in styleOfCurrentState.Layers)
          {
            BrushLayerState start = this._startBrushLayerState[layer.Name];
            BrushLayerState brushLayerState = new BrushLayerState();
            brushLayerState.LerpFrom(start, (IBrushLayerData) layer, ratio);
            this._currentBrushLayerState[layer.Name] = brushLayerState;
          }
        }
      }
      else
      {
        if (this._brushRendererAnimationState != BrushRenderer.BrushRendererAnimationState.PlayingAnimation)
          return;
        BrushAnimation animation = this.Brush.GetAnimation(styleOfCurrentState.AnimationToPlayOnBegin);
        if (animation == null || !animation.Loop && (double) this._brushTimer >= (double) animation.Duration)
        {
          this.EndAnimation();
        }
        else
        {
          float brushStateTimer = this._brushTimer % animation.Duration;
          bool isFirstCycle = (double) this._brushTimer < (double) animation.Duration;
          BrushState startBrushState = this._startBrushState;
          BrushLayerAnimation styleAnimation = animation.StyleAnimation;
          this._currentBrushState = this.AnimateBrushState(animation, styleAnimation, brushStateTimer, isFirstCycle, startBrushState, styleOfCurrentState);
          foreach (StyleLayer layer in styleOfCurrentState.Layers)
          {
            BrushLayerState startState = this._startBrushLayerState[layer.Name];
            BrushLayerAnimation layerAnimation = animation.GetLayerAnimation(layer.Name);
            BrushLayerState brushLayerState = this.AnimateBrushLayerState(animation, layerAnimation, brushStateTimer, isFirstCycle, startState, (IBrushLayerData) layer);
            this._currentBrushLayerState[layer.Name] = brushLayerState;
          }
        }
      }
    }

    private BrushLayerState AnimateBrushLayerState(
      BrushAnimation animation,
      BrushLayerAnimation layerAnimation,
      float brushStateTimer,
      bool isFirstCycle,
      BrushLayerState startState,
      IBrushLayerData source)
    {
      BrushLayerState brushLayerState1 = new BrushLayerState();
      brushLayerState1.FillFrom(source);
      if (layerAnimation != null)
      {
        foreach (BrushAnimationProperty collection in (List<BrushAnimationProperty>) layerAnimation.Collections)
        {
          BrushAnimationProperty.BrushAnimationPropertyType propertyType = collection.PropertyType;
          BrushAnimationKeyFrame animationKeyFrame1 = (BrushAnimationKeyFrame) null;
          BrushAnimationKeyFrame animationKeyFrame2;
          if (animation.Loop)
          {
            BrushAnimationKeyFrame frameAt = collection.GetFrameAt(0);
            if (isFirstCycle && (double) this._brushTimer < (double) frameAt.Time)
            {
              animationKeyFrame2 = frameAt;
            }
            else
            {
              animationKeyFrame2 = collection.GetFrameAfter(brushStateTimer);
              if (animationKeyFrame2 == null)
              {
                animationKeyFrame2 = frameAt;
                animationKeyFrame1 = collection.GetFrameAt(collection.Count - 1);
              }
              else
                animationKeyFrame1 = animationKeyFrame2 != frameAt ? collection.GetFrameAt(animationKeyFrame2.Index - 1) : collection.GetFrameAt(collection.Count - 1);
            }
          }
          else
          {
            animationKeyFrame2 = collection.GetFrameAfter(brushStateTimer);
            animationKeyFrame1 = animationKeyFrame2 == null ? collection.GetFrameAt(collection.Count - 1) : collection.GetFrameAt(animationKeyFrame2.Index - 1);
          }
          BrushAnimationKeyFrame animationKeyFrame3 = (BrushAnimationKeyFrame) null;
          BrushLayerState brushLayerState2 = new BrushLayerState();
          IBrushLayerData brushLayerData = (IBrushLayerData) null;
          BrushAnimationKeyFrame animationKeyFrame4 = (BrushAnimationKeyFrame) null;
          float num1;
          if (animationKeyFrame2 != null)
          {
            if (animationKeyFrame1 != null)
            {
              float num2;
              float num3;
              if (animation.Loop)
              {
                if (animationKeyFrame2.Index == 0)
                {
                  num2 = animationKeyFrame2.Time + (animation.Duration - animationKeyFrame1.Time);
                  num3 = (double) brushStateTimer < (double) animationKeyFrame1.Time ? animation.Duration - animationKeyFrame1.Time + brushStateTimer : brushStateTimer - animationKeyFrame1.Time;
                }
                else
                {
                  num2 = animationKeyFrame2.Time - animationKeyFrame1.Time;
                  num3 = brushStateTimer - animationKeyFrame1.Time;
                }
              }
              else
              {
                num2 = animationKeyFrame2.Time - animationKeyFrame1.Time;
                num3 = brushStateTimer - animationKeyFrame1.Time;
              }
              num1 = num3 * (1f / num2);
              animationKeyFrame3 = animationKeyFrame1;
              animationKeyFrame4 = animationKeyFrame2;
            }
            else
            {
              num1 = brushStateTimer * (1f / animationKeyFrame2.Time);
              brushLayerState2 = startState;
              animationKeyFrame4 = animationKeyFrame2;
            }
          }
          else
          {
            num1 = (float) (((double) brushStateTimer - (double) animationKeyFrame1.Time) * (1.0 / ((double) animation.Duration - (double) animationKeyFrame1.Time)));
            animationKeyFrame3 = animationKeyFrame1;
            brushLayerData = source;
          }
          switch (propertyType)
          {
            case BrushAnimationProperty.BrushAnimationPropertyType.ColorFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.AlphaFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.HueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.SaturationFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.ValueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverlayXOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverlayYOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.XOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.YOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverridenWidth:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverridenHeight:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendLeft:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendRight:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendTop:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendBottom:
              float valueFrom = animationKeyFrame3 != null ? animationKeyFrame3.GetValueAsFloat() : brushLayerState2.GetValueAsFloat(propertyType);
              float valueTo = brushLayerData != null ? brushLayerData.GetValueAsFloat(propertyType) : animationKeyFrame4.GetValueAsFloat();
              brushLayerState1.SetValueAsFloat(propertyType, TaleWorlds.Library.MathF.Lerp(valueFrom, valueTo, num1));
              continue;
            case BrushAnimationProperty.BrushAnimationPropertyType.Color:
            case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
              Color start = animationKeyFrame3 != null ? animationKeyFrame3.GetValueAsColor() : brushLayerState2.GetValueAsColor(propertyType);
              Color end = brushLayerData != null ? brushLayerData.GetValueAsColor(propertyType) : animationKeyFrame4.GetValueAsColor();
              brushLayerState1.SetValueAsColor(propertyType, Color.Lerp(start, end, num1));
              continue;
            case BrushAnimationProperty.BrushAnimationPropertyType.Sprite:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverlaySprite:
              Sprite sprite1 = animationKeyFrame3?.GetValueAsSprite() ?? brushLayerState2.GetValueAsSprite(propertyType);
              Sprite sprite2 = brushLayerData?.GetValueAsSprite(propertyType) ?? animationKeyFrame4.GetValueAsSprite();
              brushLayerState1.SetValueAsSprite(propertyType, (double) num1 <= 0.9 ? sprite1 : sprite2);
              continue;
            default:
              continue;
          }
        }
      }
      return brushLayerState1;
    }

    public bool IsUpdateNeeded()
    {
      if (this._brushRendererAnimationState == BrushRenderer.BrushRendererAnimationState.PlayingBasicTranisition || this._brushRendererAnimationState == BrushRenderer.BrushRendererAnimationState.PlayingAnimation)
        return true;
      return this._styleOfCurrentState != null && this._styleOfCurrentState.Version != this._latestStyleVersion;
    }

    private BrushState AnimateBrushState(
      BrushAnimation animation,
      BrushLayerAnimation layerAnimation,
      float brushStateTimer,
      bool isFirstCycle,
      BrushState startState,
      Style source)
    {
      BrushState brushState1 = new BrushState();
      brushState1.FillFrom(source);
      if (layerAnimation != null)
      {
        foreach (BrushAnimationProperty collection in (List<BrushAnimationProperty>) layerAnimation.Collections)
        {
          BrushAnimationProperty.BrushAnimationPropertyType propertyType = collection.PropertyType;
          BrushAnimationKeyFrame animationKeyFrame1 = (BrushAnimationKeyFrame) null;
          BrushAnimationKeyFrame animationKeyFrame2;
          if (animation.Loop)
          {
            BrushAnimationKeyFrame frameAt = collection.GetFrameAt(0);
            if (isFirstCycle && (double) this._brushTimer < (double) frameAt.Time)
            {
              animationKeyFrame2 = frameAt;
            }
            else
            {
              animationKeyFrame2 = collection.GetFrameAfter(brushStateTimer);
              if (animationKeyFrame2 == null)
              {
                animationKeyFrame2 = frameAt;
                animationKeyFrame1 = collection.GetFrameAt(collection.Count - 1);
              }
              else
                animationKeyFrame1 = animationKeyFrame2 != frameAt ? collection.GetFrameAt(animationKeyFrame2.Index - 1) : collection.GetFrameAt(collection.Count - 1);
            }
          }
          else
          {
            animationKeyFrame2 = collection.GetFrameAfter(brushStateTimer);
            animationKeyFrame1 = animationKeyFrame2 != null ? collection.GetFrameAt(animationKeyFrame2.Index - 1) : collection.GetFrameAt(collection.Count - 1);
          }
          BrushAnimationKeyFrame animationKeyFrame3 = (BrushAnimationKeyFrame) null;
          BrushState brushState2 = new BrushState();
          Style style = (Style) null;
          BrushAnimationKeyFrame animationKeyFrame4 = (BrushAnimationKeyFrame) null;
          float num1;
          if (animationKeyFrame2 != null)
          {
            if (animationKeyFrame1 != null)
            {
              float num2;
              float num3;
              if (animation.Loop)
              {
                if (animationKeyFrame2.Index == 0)
                {
                  num2 = animationKeyFrame2.Time + (animation.Duration - animationKeyFrame1.Time);
                  num3 = (double) brushStateTimer < (double) animationKeyFrame1.Time ? animation.Duration - animationKeyFrame1.Time + brushStateTimer : brushStateTimer - animationKeyFrame1.Time;
                }
                else
                {
                  num2 = animationKeyFrame2.Time - animationKeyFrame1.Time;
                  num3 = brushStateTimer - animationKeyFrame1.Time;
                }
              }
              else
              {
                num2 = animationKeyFrame2.Time - animationKeyFrame1.Time;
                num3 = brushStateTimer - animationKeyFrame1.Time;
              }
              num1 = num3 * (1f / num2);
              animationKeyFrame3 = animationKeyFrame1;
              animationKeyFrame4 = animationKeyFrame2;
            }
            else
            {
              num1 = brushStateTimer * (1f / animationKeyFrame2.Time);
              brushState2 = startState;
              animationKeyFrame4 = animationKeyFrame2;
            }
          }
          else
          {
            num1 = (float) (((double) brushStateTimer - (double) animationKeyFrame1.Time) * (1.0 / ((double) animation.Duration - (double) animationKeyFrame1.Time)));
            animationKeyFrame3 = animationKeyFrame1;
            style = source;
          }
          float num4 = TaleWorlds.Library.MathF.Clamp(num1, 0.0f, 1f);
          switch (propertyType)
          {
            case BrushAnimationProperty.BrushAnimationPropertyType.ColorFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.AlphaFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.HueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.SaturationFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.ValueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverlayXOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverlayYOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineAmount:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowRadius:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextBlur:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextShadowAngle:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextColorFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextAlphaFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextHueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextSaturationFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextValueFactor:
            case BrushAnimationProperty.BrushAnimationPropertyType.XOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.YOffset:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverridenWidth:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverridenHeight:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendLeft:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendRight:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendTop:
            case BrushAnimationProperty.BrushAnimationPropertyType.ExtendBottom:
              float valueFrom = animationKeyFrame3 != null ? animationKeyFrame3.GetValueAsFloat() : brushState2.GetValueAsFloat(propertyType);
              float valueTo = style != null ? style.GetValueAsFloat(propertyType) : animationKeyFrame4.GetValueAsFloat();
              brushState1.SetValueAsFloat(propertyType, TaleWorlds.Library.MathF.Lerp(valueFrom, valueTo, num4));
              continue;
            case BrushAnimationProperty.BrushAnimationPropertyType.Color:
            case BrushAnimationProperty.BrushAnimationPropertyType.FontColor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextGlowColor:
            case BrushAnimationProperty.BrushAnimationPropertyType.TextOutlineColor:
              Color start = animationKeyFrame3 != null ? animationKeyFrame3.GetValueAsColor() : brushState2.GetValueAsColor(propertyType);
              Color end = style != null ? style.GetValueAsColor(propertyType) : animationKeyFrame4.GetValueAsColor();
              brushState1.SetValueAsColor(propertyType, Color.Lerp(start, end, num4));
              continue;
            case BrushAnimationProperty.BrushAnimationPropertyType.Sprite:
            case BrushAnimationProperty.BrushAnimationPropertyType.OverlaySprite:
              Sprite sprite1 = animationKeyFrame3?.GetValueAsSprite() ?? brushState2.GetValueAsSprite(propertyType);
              Sprite sprite2 = style?.GetValueAsSprite(propertyType) ?? animationKeyFrame4.GetValueAsSprite();
              brushState1.SetValueAsSprite(propertyType, (double) num4 <= 0.9 ? sprite1 : sprite2);
              continue;
            default:
              continue;
          }
        }
      }
      return brushState1;
    }

    private void EndAnimation()
    {
      if (this.Brush == null)
        return;
      Style styleOfCurrentState = this._styleOfCurrentState;
      BrushState brushState = new BrushState();
      brushState.FillFrom(styleOfCurrentState);
      this._startBrushState = brushState;
      this._currentBrushState = brushState;
      if ((double) this.Brush.TransitionDuration == 0.0)
        this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.None;
      foreach (StyleLayer layer in styleOfCurrentState.Layers)
      {
        BrushLayerState brushLayerState = new BrushLayerState();
        brushLayerState.FillFrom((IBrushLayerData) layer);
        this._startBrushLayerState[layer.Name] = brushLayerState;
        this._currentBrushLayerState[layer.Name] = brushLayerState;
      }
      this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.Ended;
    }

    public void Render(
      TwoDimensionDrawContext drawContext,
      Vector2 targetPosition,
      Vector2 targetSize,
      float scale,
      float contextAlpha,
      Vector2 overlayOffset = default (Vector2))
    {
      if (this.Brush == null)
        return;
      if (this.ForcePixelPerfectPlacement)
      {
        targetPosition.X = (float) TaleWorlds.Library.MathF.Round(targetPosition.X);
        targetPosition.Y = (float) TaleWorlds.Library.MathF.Round(targetPosition.Y);
      }
      Style styleOfCurrentState = this._styleOfCurrentState;
      for (int index = 0; index < styleOfCurrentState.LayerCount; ++index)
      {
        StyleLayer layer = styleOfCurrentState.GetLayer(index);
        if (!layer.IsHidden)
        {
          BrushLayerState current;
          if (this._currentBrushLayerState.Count == 1)
          {
            Dictionary<string, BrushLayerState>.ValueCollection.Enumerator enumerator = this._currentBrushLayerState.Values.GetEnumerator();
            enumerator.MoveNext();
            current = enumerator.Current;
          }
          else
            current = this._currentBrushLayerState[layer.Name];
          Sprite sprite = current.Sprite;
          if (sprite != null)
          {
            Texture texture1 = sprite.Texture;
            if (texture1 != null)
            {
              float x = targetPosition.X + current.XOffset * scale;
              float y = targetPosition.Y + current.YOffset * scale;
              SimpleMaterial simpleMaterial = drawContext.CreateSimpleMaterial();
              simpleMaterial.OverlayEnabled = false;
              simpleMaterial.CircularMaskingEnabled = false;
              if (layer.OverlayMethod == BrushOverlayMethod.CoverWithTexture && layer.OverlaySprite != null)
              {
                Sprite overlaySprite = layer.OverlaySprite;
                Texture texture2 = overlaySprite.Texture;
                if (texture2 != null)
                {
                  simpleMaterial.OverlayEnabled = true;
                  simpleMaterial.StartCoordinate = new Vector2(x, y);
                  simpleMaterial.Size = targetSize;
                  simpleMaterial.OverlayTexture = texture2;
                  simpleMaterial.UseOverlayAlphaAsMask = layer.UseOverlayAlphaAsMask;
                  float num1;
                  float num2;
                  if (layer.UseOverlayAlphaAsMask)
                  {
                    num1 = current.XOffset;
                    num2 = current.YOffset;
                  }
                  else if (overlayOffset == new Vector2())
                  {
                    num1 = current.OverlayXOffset;
                    num2 = current.OverlayYOffset;
                  }
                  else
                  {
                    num1 = overlayOffset.X;
                    num2 = overlayOffset.Y;
                  }
                  if (layer.UseRandomBaseOverlayXOffset)
                    num1 += this.GetRandomXOffset();
                  if (layer.UseRandomBaseOverlayYOffset)
                    num2 += this.GetRandomYOffset();
                  simpleMaterial.OverlayXOffset = num1 * scale;
                  simpleMaterial.OverlayYOffset = num2 * scale;
                  simpleMaterial.Scale = scale;
                  simpleMaterial.OverlayTextureWidth = layer.UseOverlayAlphaAsMask ? targetSize.X : (float) overlaySprite.Width;
                  simpleMaterial.OverlayTextureHeight = layer.UseOverlayAlphaAsMask ? targetSize.Y : (float) overlaySprite.Height;
                }
              }
              simpleMaterial.Texture = texture1;
              simpleMaterial.Color = current.Color * this.Brush.GlobalColor;
              simpleMaterial.ColorFactor = current.ColorFactor * this.Brush.GlobalColorFactor;
              simpleMaterial.AlphaFactor = current.AlphaFactor * this.Brush.GlobalAlphaFactor * contextAlpha;
              simpleMaterial.HueFactor = current.HueFactor;
              simpleMaterial.SaturationFactor = current.SaturationFactor;
              simpleMaterial.ValueFactor = current.ValueFactor;
              float width = 0.0f;
              float height = 0.0f;
              if (layer.WidthPolicy == BrushLayerSizePolicy.StretchToTarget)
              {
                float num = layer.ExtendLeft;
                if (layer.HorizontalFlip)
                  num = layer.ExtendRight;
                width = targetSize.X + (layer.ExtendRight + layer.ExtendLeft) * scale;
                x -= num * scale;
              }
              else if (layer.WidthPolicy == BrushLayerSizePolicy.Original)
                width = (float) sprite.Width * scale;
              else if (layer.WidthPolicy == BrushLayerSizePolicy.Overriden)
                width = layer.OverridenWidth * scale;
              if (layer.HeightPolicy == BrushLayerSizePolicy.StretchToTarget)
              {
                float num = layer.ExtendTop;
                if (layer.HorizontalFlip)
                  num = layer.ExtendBottom;
                height = targetSize.Y + (layer.ExtendTop + layer.ExtendBottom) * scale;
                y -= num * scale;
              }
              else if (layer.HeightPolicy == BrushLayerSizePolicy.Original)
                height = (float) sprite.Height * scale;
              else if (layer.HeightPolicy == BrushLayerSizePolicy.Overriden)
                height = layer.OverridenHeight * scale;
              bool horizontalFlip = layer.HorizontalFlip;
              bool verticalFlip = layer.VerticalFlip;
              drawContext.DrawSprite(sprite, simpleMaterial, x, y, scale, width, height, horizontalFlip, verticalFlip);
            }
          }
        }
      }
    }

    public TextMaterial CreateTextMaterial(TwoDimensionDrawContext drawContext)
    {
      TextMaterial textMaterial = this._currentBrushState.CreateTextMaterial(drawContext);
      if (this.Brush != null)
      {
        textMaterial.ColorFactor *= this.Brush.GlobalColorFactor;
        textMaterial.AlphaFactor *= this.Brush.GlobalAlphaFactor;
        textMaterial.Color *= this.Brush.GlobalColor;
      }
      return textMaterial;
    }

    public void RestartAnimation()
    {
      if (this.Brush == null)
        return;
      this._brushLocalTimer = 0.0f;
      Style styleOfCurrentState = this._styleOfCurrentState;
      this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.None;
      if (styleOfCurrentState == null)
        return;
      if (styleOfCurrentState.AnimationMode == StyleAnimationMode.BasicTransition)
      {
        this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.PlayingBasicTranisition;
      }
      else
      {
        if (styleOfCurrentState.AnimationMode != StyleAnimationMode.Animation)
          return;
        this._brushRendererAnimationState = BrushRenderer.BrushRendererAnimationState.PlayingAnimation;
      }
    }

    public void SetSeed(int seed) => this._offsetSeed = seed;

    public enum BrushRendererAnimationState
    {
      None,
      PlayingAnimation,
      PlayingBasicTranisition,
      Ended,
    }
  }
}
