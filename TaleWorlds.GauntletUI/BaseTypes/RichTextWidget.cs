// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.RichTextWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using TaleWorlds.GauntletUI.Layout;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class RichTextWidget : BrushWidget
  {
    protected readonly RichText _richText;
    private Brush _lastFontBrush;
    private string _lastLanguageCode;
    private float _lastContextScale;
    private FontFactory _fontFactory;
    private RichTextWidget.MouseState _mouseState;
    private Dictionary<Texture, SimpleMaterial> _textureMaterialDict;
    private Vector2 _mouseDownPosition;
    private int _textHeight;
    protected float _renderXOffset;
    private string _linkHoverCursorState;
    private bool _canBreakWords;

    private Vector2 LocalMousePosition
    {
      get
      {
        Vector2 mousePosition = this.EventManager.MousePosition;
        Vector2 globalPosition = this.GlobalPosition;
        return new Vector2(mousePosition.X - globalPosition.X, mousePosition.Y - globalPosition.Y);
      }
    }

    [Editor(false)]
    public string LinkHoverCursorState
    {
      get => this._linkHoverCursorState;
      set
      {
        if (!(this._linkHoverCursorState != value))
          return;
        this._linkHoverCursorState = value;
      }
    }

    [Editor(false)]
    public string Text
    {
      get => this._richText.Value;
      set
      {
        if (!(this._richText.Value != value))
          return;
        this._richText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
        this._richText.Value = value;
        this.OnPropertyChanged<string>(value, nameof (Text));
        this.SetMeasureAndLayoutDirty();
        this.SetText(this._richText.Value);
      }
    }

    public RichTextWidget(UIContext context)
      : base(context)
    {
      this._fontFactory = context.FontFactory;
      this._textHeight = -1;
      this._richText = new RichText((int) this.Size.X, (int) this.Size.Y, this.Context.FontFactory.DefaultFont, new Func<int, Font>(this._fontFactory.GetUsableFontForCharacter));
      this._textureMaterialDict = new Dictionary<Texture, SimpleMaterial>();
      this._lastFontBrush = (Brush) null;
      this.LayoutImp = (ILayout) new TextLayout((IText) this._richText);
      this.CanBreakWords = true;
      this.AddState("Pressed");
      this.AddState("Hovered");
      this.AddState("Disabled");
    }

    protected override void OnParallelUpdate(float dt)
    {
      base.OnParallelUpdate(dt);
      this.SetRichTextParameters();
    }

    public override void OnBrushChanged()
    {
      base.OnBrushChanged();
      this.UpdateFontData();
    }

    protected virtual void SetText(string value)
    {
    }

    private void SetRichTextParameters()
    {
      bool flag = false;
      this._richText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
      this.UpdateFontData();
      if (this._richText.HorizontalAlignment != this.ReadOnlyBrush.TextHorizontalAlignment)
      {
        this._richText.HorizontalAlignment = this.ReadOnlyBrush.TextHorizontalAlignment;
        flag = true;
      }
      if (this._richText.VerticalAlignment != this.ReadOnlyBrush.TextVerticalAlignment)
      {
        this._richText.VerticalAlignment = this.ReadOnlyBrush.TextVerticalAlignment;
        flag = true;
      }
      if (this._richText.TextHeight != this._textHeight)
      {
        this._textHeight = this._richText.TextHeight;
        flag = true;
      }
      if (this._richText.CurrentStyle != this.CurrentState && !string.IsNullOrEmpty(this.CurrentState))
      {
        this._richText.CurrentStyle = this.CurrentState;
        flag = true;
      }
      if (!flag)
        return;
      this.SetMeasureAndLayoutDirty();
    }

    protected override void RefreshState()
    {
      base.RefreshState();
      this.UpdateText();
    }

    private void UpdateText()
    {
      if (this.IsDisabled)
        this.SetState("Disabled");
      else if (this.IsPressed)
        this.SetState("Pressed");
      else if (this.IsHovered)
        this.SetState("Hovered");
      else
        this.SetState("Default");
    }

    private void UpdateFontData()
    {
      if (this._lastFontBrush == this.ReadOnlyBrush && (double) this._lastContextScale == (double) this._scaleToUse && this._lastLanguageCode == this.Context.FontFactory.CurrentLangageID)
        return;
      this._richText.StyleFontContainer.ClearFonts();
      foreach (Style style in this.ReadOnlyBrush.Styles)
      {
        Font fontForLocalization = this.Context.FontFactory.GetMappedFontForLocalization((style.Font == null ? (this.ReadOnlyBrush.Font == null ? this.Context.FontFactory.DefaultFont : this.ReadOnlyBrush.Font) : style.Font).Name);
        this._richText.StyleFontContainer.Add(style.Name, fontForLocalization, (float) style.FontSize * this._scaleToUse);
      }
      this._lastFontBrush = this.ReadOnlyBrush;
      this._lastLanguageCode = this.Context.FontFactory.CurrentLangageID;
      this._lastContextScale = this._scaleToUse;
      this._richText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
    }

    private Font GetFont(Style style = null)
    {
      if (style?.Font != null)
        return this.Context.FontFactory.GetMappedFontForLocalization(style.Font.Name);
      return this.ReadOnlyBrush.Font != null ? this.Context.FontFactory.GetMappedFontForLocalization(this.ReadOnlyBrush.Font.Name) : this.Context.FontFactory.DefaultFont;
    }

    protected override void OnLateUpdate(float dt)
    {
      base.OnLateUpdate(dt);
      if ((double) this.Size.X <= 0.0 || (double) this.Size.Y <= 0.0)
        return;
      Vector2 focusPosition = this.LocalMousePosition;
      bool focus = this._mouseState == RichTextWidget.MouseState.Down || this._mouseState == RichTextWidget.MouseState.AlternateDown;
      int num = this._mouseState == RichTextWidget.MouseState.Up ? 1 : (this._mouseState == RichTextWidget.MouseState.AlternateUp ? 1 : 0);
      if (focus)
        focusPosition = this._mouseDownPosition;
      RichTextLinkGroup focusedLinkGroup1 = this._richText.FocusedLinkGroup;
      this._richText.UpdateSize((int) this.Size.X, (int) this.Size.Y);
      if (focusedLinkGroup1 != null && this.LinkHoverCursorState != null)
        this.Context.ActiveCursorOfContext = (UIContext.MouseCursors) Enum.Parse(typeof (UIContext.MouseCursors), this.LinkHoverCursorState);
      bool isFixedWidth = this.WidthSizePolicy != SizePolicy.CoverChildren || (double) this.MaxWidth != 0.0;
      bool isFixedHeight = this.HeightSizePolicy != SizePolicy.CoverChildren || (double) this.MaxHeight != 0.0;
      this._richText.Update(this.Context.SpriteData, focusPosition, focus, isFixedWidth, isFixedHeight, this._scaleToUse);
      if (num == 0)
        return;
      RichTextLinkGroup focusedLinkGroup2 = this._richText.FocusedLinkGroup;
      if (focusedLinkGroup1 != null && focusedLinkGroup1 == focusedLinkGroup2)
      {
        string href = focusedLinkGroup1.Href;
        string[] strArray = href.Split(':');
        if (strArray.Length == 2)
          href = strArray[1];
        if (this._mouseState == RichTextWidget.MouseState.Up)
          this.EventFired("LinkClick", (object) href);
        else if (this._mouseState == RichTextWidget.MouseState.AlternateUp)
          this.EventFired("LinkAlternateClick", (object) href);
      }
      this._mouseState = RichTextWidget.MouseState.None;
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      base.OnRender(twoDimensionContext, drawContext);
      if (string.IsNullOrEmpty(this._richText.Value))
        return;
      foreach (RichTextPart part in this._richText.GetParts())
      {
        DrawObject2D drawObject2D = part.DrawObject2D;
        if (drawObject2D != null)
        {
          Material material = (Material) null;
          Vector2 cachedGlobalPosition = this._cachedGlobalPosition;
          if (part.Type == RichTextPartType.Text)
          {
            Style styleOrDefault = this.ReadOnlyBrush.GetStyleOrDefault(part.Style);
            Font defaultFont = part.DefaultFont;
            float num = (float) styleOrDefault.FontSize * this._scaleToUse;
            TextMaterial textMaterial1 = styleOrDefault.CreateTextMaterial(drawContext);
            textMaterial1.ColorFactor *= this.ReadOnlyBrush.GlobalColorFactor;
            textMaterial1.AlphaFactor *= this.ReadOnlyBrush.GlobalAlphaFactor * this.Context.ContextAlpha;
            textMaterial1.Color *= this.ReadOnlyBrush.GlobalColor;
            textMaterial1.Texture = defaultFont.FontSprite.Texture;
            textMaterial1.ScaleFactor = num;
            textMaterial1.SmoothingConstant = defaultFont.SmoothingConstant;
            textMaterial1.Smooth = defaultFont.Smooth;
            if ((double) textMaterial1.GlowRadius > 0.0 || (double) textMaterial1.Blur > 0.0 || (double) textMaterial1.OutlineAmount > 0.0)
            {
              TextMaterial textMaterial2 = styleOrDefault.CreateTextMaterial(drawContext);
              textMaterial2.CopyFrom(textMaterial1);
              drawContext.Draw(cachedGlobalPosition.X + this._renderXOffset, cachedGlobalPosition.Y, (Material) textMaterial2, drawObject2D, this.Size.X, this.Size.Y);
            }
            textMaterial1.GlowRadius = 0.0f;
            textMaterial1.Blur = 0.0f;
            textMaterial1.OutlineAmount = 0.0f;
            material = (Material) textMaterial1;
          }
          else if (part.Type == RichTextPartType.Sprite)
          {
            Sprite sprite = part.Sprite;
            if (sprite?.Texture != null)
            {
              if (!this._textureMaterialDict.ContainsKey(sprite.Texture))
                this._textureMaterialDict[sprite.Texture] = new SimpleMaterial(sprite.Texture);
              SimpleMaterial simpleMaterial = this._textureMaterialDict[sprite.Texture];
              if ((double) simpleMaterial.ColorFactor != (double) this.ReadOnlyBrush.GlobalColorFactor)
                simpleMaterial.ColorFactor = this.ReadOnlyBrush.GlobalColorFactor;
              if ((double) simpleMaterial.AlphaFactor != (double) this.ReadOnlyBrush.GlobalAlphaFactor * (double) this.Context.ContextAlpha)
                simpleMaterial.AlphaFactor = this.ReadOnlyBrush.GlobalAlphaFactor * this.Context.ContextAlpha;
              if (simpleMaterial.Color != this.ReadOnlyBrush.GlobalColor)
                simpleMaterial.Color = this.ReadOnlyBrush.GlobalColor;
              material = (Material) simpleMaterial;
            }
          }
          if (material != null)
            drawContext.Draw(cachedGlobalPosition.X + this._renderXOffset, cachedGlobalPosition.Y, material, drawObject2D, this.Size.X, this.Size.Y);
        }
      }
    }

    protected internal override void OnMousePressed()
    {
      if (this._mouseState != RichTextWidget.MouseState.None)
        return;
      this._mouseDownPosition = this.LocalMousePosition;
      this._mouseState = RichTextWidget.MouseState.Down;
    }

    protected internal override void OnMouseReleased()
    {
      if (this._mouseState != RichTextWidget.MouseState.Down)
        return;
      this._mouseState = RichTextWidget.MouseState.Up;
    }

    protected internal override void OnMouseAlternatePressed()
    {
      if (this._mouseState != RichTextWidget.MouseState.None)
        return;
      this._mouseDownPosition = this.LocalMousePosition;
      this._mouseState = RichTextWidget.MouseState.AlternateDown;
    }

    protected internal override void OnMouseAlternateReleased()
    {
      if (this._mouseState != RichTextWidget.MouseState.AlternateDown)
        return;
      this._mouseState = RichTextWidget.MouseState.AlternateUp;
    }

    public bool CanBreakWords
    {
      get => this._canBreakWords;
      set
      {
        if (value == this._canBreakWords)
          return;
        this._canBreakWords = value;
        this._richText.CanBreakWords = value;
        this.OnPropertyChanged(value, nameof (CanBreakWords));
      }
    }

    private enum MouseState
    {
      None,
      Down,
      Up,
      AlternateDown,
      AlternateUp,
    }
  }
}
