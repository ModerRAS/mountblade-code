// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.EditableTextWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Collections.Generic;
using System.Numerics;
using System.Text.RegularExpressions;
using TaleWorlds.GauntletUI.Layout;
using TaleWorlds.InputSystem;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class EditableTextWidget : BrushWidget
  {
    protected EditableText _editableText;
    protected readonly char _obfuscationChar = '*';
    protected float _lastScale = -1f;
    protected bool _isObfuscationEnabled;
    protected string _lastLanguageCode;
    protected Brush _lastFontBrush;
    protected EditableTextWidget.MouseState _mouseState;
    protected Vector2 _mouseDownPosition;
    protected bool _cursorVisible;
    protected int _textHeight;
    protected EditableTextWidget.CursorMovementDirection _cursorDirection;
    protected EditableTextWidget.KeyboardAction _keyboardAction;
    protected int _nextRepeatTime;
    protected bool _isSelection;
    private string _realText = "";
    private string _keyboardInfoText = "";

    public int MaxLength { get; set; } = -1;

    public bool IsObfuscationEnabled
    {
      get => this._isObfuscationEnabled;
      set
      {
        if (value == this._isObfuscationEnabled)
          return;
        this._isObfuscationEnabled = value;
        this.OnObfuscationToggled(value);
      }
    }

    private Vector2 LocalMousePosition
    {
      get
      {
        Vector2 mousePosition = this.EventManager.MousePosition;
        Vector2 globalPosition = this.GlobalPosition;
        return new Vector2(mousePosition.X - globalPosition.X, mousePosition.Y - globalPosition.Y);
      }
    }

    public string DefaultSearchText { get; set; }

    [Editor(false)]
    public string RealText
    {
      get => this._realText;
      set
      {
        if (!(this._realText != value))
          return;
        this._editableText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
        if (string.IsNullOrEmpty(value))
          value = "";
        this.Text = this.IsObfuscationEnabled ? this.ObfuscateText(value) : value;
        this._realText = value;
        this.OnPropertyChanged<string>(value, nameof (RealText));
      }
    }

    [Editor(false)]
    public string KeyboardInfoText
    {
      get => this._keyboardInfoText;
      set
      {
        if (!(this._keyboardInfoText != value))
          return;
        this._keyboardInfoText = value;
        this.OnPropertyChanged<string>(value, nameof (KeyboardInfoText));
      }
    }

    [Editor(false)]
    public string Text
    {
      get => this._editableText.VisibleText;
      set
      {
        if (!(this._editableText.VisibleText != value))
          return;
        this._editableText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
        this._editableText.VisibleText = value;
        if (!string.IsNullOrEmpty(this._editableText.VisibleText))
          this._editableText.SetCursor(this._editableText.VisibleText.Length);
        if (string.IsNullOrEmpty(value))
        {
          this._editableText.VisibleText = "";
          this._editableText.SetCursor(0, this.IsFocused);
        }
        this.RealText = value;
        this.OnPropertyChanged<string>(value, nameof (Text));
        this.SetMeasureAndLayoutDirty();
      }
    }

    public EditableTextWidget(UIContext context)
      : base(context)
    {
      FontFactory fontFactory = context.FontFactory;
      this._editableText = new EditableText((int) this.Size.X, (int) this.Size.Y, fontFactory.DefaultFont, new Func<int, Font>(fontFactory.GetUsableFontForCharacter));
      this.LayoutImp = (ILayout) new TextLayout((IText) this._editableText);
      this._realText = "";
      this._textHeight = -1;
      this._cursorVisible = false;
      this._lastFontBrush = (Brush) null;
      this._cursorDirection = EditableTextWidget.CursorMovementDirection.None;
      this._keyboardAction = EditableTextWidget.KeyboardAction.None;
      this._nextRepeatTime = int.MinValue;
      this._isSelection = false;
      this.IsFocusable = true;
    }

    protected override void OnUpdate(float dt)
    {
      base.OnUpdate(dt);
      this.UpdateText();
      if (this.IsFocused && this.IsEnabled)
      {
        this._editableText.BlinkTimer += dt;
        if ((double) this._editableText.BlinkTimer > 0.5)
        {
          this._editableText.BlinkCursor();
          this._editableText.BlinkTimer = 0.0f;
        }
        if (this.ContainsState("Selected"))
          this.SetState("Selected");
      }
      else if (this._editableText.IsCursorVisible())
        this._editableText.BlinkCursor();
      this.SetEditTextParameters();
    }

    private void SetEditTextParameters()
    {
      bool flag = false;
      this._editableText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
      this.UpdateFontData();
      if (this._editableText.HorizontalAlignment != this.ReadOnlyBrush.TextHorizontalAlignment)
      {
        this._editableText.HorizontalAlignment = this.ReadOnlyBrush.TextHorizontalAlignment;
        flag = true;
      }
      if (this._editableText.VerticalAlignment != this.ReadOnlyBrush.TextVerticalAlignment)
      {
        this._editableText.VerticalAlignment = this.ReadOnlyBrush.TextVerticalAlignment;
        flag = true;
      }
      if (this._editableText.TextHeight != this._textHeight)
      {
        this._textHeight = this._editableText.TextHeight;
        flag = true;
      }
      if (!flag)
        return;
      this.SetMeasureAndLayoutDirty();
    }

    protected void BlinkCursor() => this._cursorVisible = !this._cursorVisible;

    protected void ResetSelected() => this._editableText.ResetSelected();

    protected void DeleteChar(bool nextChar = false)
    {
      int cursorPosition = this._editableText.CursorPosition;
      if (nextChar)
        ++cursorPosition;
      if (cursorPosition == 0 || cursorPosition > this.Text.Length)
        return;
      if (this.IsObfuscationEnabled)
      {
        this.RealText = this.RealText.Substring(0, cursorPosition - 1) + this.RealText.Substring(cursorPosition, this.RealText.Length - cursorPosition);
        this.Text = this.ObfuscateText(this.RealText);
      }
      else
      {
        this.Text = this.Text.Substring(0, cursorPosition - 1) + this.Text.Substring(cursorPosition, this.Text.Length - cursorPosition);
        this.RealText = this.Text;
      }
      this._editableText.SetCursor(cursorPosition - 1);
      this.ResetSelected();
    }

    protected int FindNextWordPosition(int direction)
    {
      return this._editableText.FindNextWordPosition(direction);
    }

    protected void MoveCursor(int direction, bool withSelection = false)
    {
      if (!withSelection)
        this.ResetSelected();
      this._editableText.SetCursor(this._editableText.CursorPosition + direction, withSelection: withSelection);
    }

    protected string GetAppendCharacterResult(int charCode)
    {
      if (this.MaxLength > -1 && this.Text.Length >= this.MaxLength)
        return this.RealText;
      int cursorPosition = this._editableText.CursorPosition;
      char ch = Convert.ToChar(charCode);
      return this.RealText.Substring(0, cursorPosition) + ch.ToString() + this.RealText.Substring(cursorPosition, this.RealText.Length - cursorPosition);
    }

    protected void AppendCharacter(int charCode)
    {
      if (this.MaxLength > -1 && this.Text.Length >= this.MaxLength)
        return;
      int cursorPosition = this._editableText.CursorPosition;
      this.RealText = this.GetAppendCharacterResult(charCode);
      this.Text = this.IsObfuscationEnabled ? this.ObfuscateText(this.RealText) : this.RealText;
      this._editableText.SetCursor(cursorPosition + 1);
      this.ResetSelected();
    }

    protected void AppendText(string text)
    {
      if (this.MaxLength > -1 && this.Text.Length >= this.MaxLength)
        return;
      if (this.MaxLength > -1 && this.Text.Length + text.Length >= this.MaxLength)
        text = text.Substring(0, this.MaxLength - this.Text.Length);
      int cursorPosition = this._editableText.CursorPosition;
      this.RealText = this.RealText.Substring(0, cursorPosition) + text + this.RealText.Substring(cursorPosition, this.RealText.Length - cursorPosition);
      this.Text = this.IsObfuscationEnabled ? this.ObfuscateText(this.RealText) : this.RealText;
      this._editableText.SetCursor(cursorPosition + text.Length);
      this.ResetSelected();
    }

    protected void DeleteText(int beginIndex, int endIndex)
    {
      if (beginIndex == endIndex)
        return;
      this.RealText = this.RealText.Substring(0, beginIndex) + this.RealText.Substring(endIndex, this.RealText.Length - endIndex);
      this.Text = this.IsObfuscationEnabled ? this.ObfuscateText(this.RealText) : this.RealText;
      this._editableText.SetCursor(beginIndex);
      this.ResetSelected();
    }

    protected void CopyText(int beginIndex, int endIndex)
    {
      if (beginIndex == endIndex)
        return;
      int startIndex = Math.Min(beginIndex, endIndex);
      int num = Math.Max(beginIndex, endIndex);
      if (startIndex < 0)
        startIndex = 0;
      if (num > this.RealText.Length)
        num = this.RealText.Length;
      Input.SetClipboardText(this.RealText.Substring(startIndex, num - startIndex));
    }

    protected void PasteText()
    {
      this.AppendText(Regex.Replace(Input.GetClipboardText(), "[<>]+", " "));
    }

    public override void HandleInput(IReadOnlyList<int> lastKeysPressed)
    {
      if (this.IsDisabled)
        return;
      int count = lastKeysPressed.Count;
      for (int index = 0; index < count; ++index)
      {
        int charCode = lastKeysPressed[index];
        if (charCode >= 32 && (charCode < (int) sbyte.MaxValue || charCode >= 160))
        {
          if (charCode != 60 && charCode != 62)
          {
            this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
            this.AppendCharacter(charCode);
          }
          this._cursorDirection = EditableTextWidget.CursorMovementDirection.None;
          this._isSelection = false;
        }
      }
      int tickCount = Environment.TickCount;
      bool flag1 = false;
      bool flag2 = false;
      if (Input.IsKeyPressed(InputKey.Left))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Left;
        flag1 = true;
      }
      else if (Input.IsKeyPressed(InputKey.Right))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Right;
        flag1 = true;
      }
      else if (this._cursorDirection == EditableTextWidget.CursorMovementDirection.Left && !Input.IsKeyDown(InputKey.Left) || this._cursorDirection == EditableTextWidget.CursorMovementDirection.Right && !Input.IsKeyDown(InputKey.Right))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.None;
        if (!Input.IsKeyDown(InputKey.LeftShift))
          this._isSelection = false;
      }
      else if (Input.IsKeyReleased(InputKey.LeftShift))
        this._isSelection = false;
      else if (Input.IsKeyDown(InputKey.Home))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Left;
        flag2 = true;
      }
      else if (Input.IsKeyDown(InputKey.End))
      {
        this._cursorDirection = EditableTextWidget.CursorMovementDirection.Right;
        flag2 = true;
      }
      if (flag1 | flag2)
      {
        if (flag1)
          this._nextRepeatTime = tickCount + 500;
        if (Input.IsKeyDown(InputKey.LeftShift))
        {
          if (!this._editableText.IsAnySelected())
            this._editableText.BeginSelection();
          this._isSelection = true;
        }
      }
      if (this._cursorDirection != EditableTextWidget.CursorMovementDirection.None)
      {
        if ((flag1 ? 1 : (tickCount >= this._nextRepeatTime ? 1 : 0)) != 0)
        {
          int direction = (int) this._cursorDirection;
          if (Input.IsKeyDown(InputKey.LeftControl))
            direction = this.FindNextWordPosition(direction) - this._editableText.CursorPosition;
          this.MoveCursor(direction, this._isSelection);
          if (tickCount >= this._nextRepeatTime)
            this._nextRepeatTime = tickCount + 30;
        }
        else if (flag2)
          this.MoveCursor(this._cursorDirection == EditableTextWidget.CursorMovementDirection.Left ? -this._editableText.CursorPosition : this._editableText.VisibleText.Length - this._editableText.CursorPosition, this._isSelection);
      }
      bool flag3 = false;
      if (Input.IsKeyPressed(InputKey.BackSpace))
      {
        flag3 = true;
        this._keyboardAction = EditableTextWidget.KeyboardAction.BackSpace;
        this._nextRepeatTime = tickCount + 500;
      }
      else if (Input.IsKeyPressed(InputKey.Delete))
      {
        flag3 = true;
        this._keyboardAction = EditableTextWidget.KeyboardAction.Delete;
        this._nextRepeatTime = tickCount + 500;
      }
      if (this._keyboardAction == EditableTextWidget.KeyboardAction.BackSpace && !Input.IsKeyDown(InputKey.BackSpace) || this._keyboardAction == EditableTextWidget.KeyboardAction.Delete && !Input.IsKeyDown(InputKey.Delete))
        this._keyboardAction = EditableTextWidget.KeyboardAction.None;
      if (Input.IsKeyReleased(InputKey.Enter) || Input.IsKeyReleased(InputKey.NumpadEnter))
        this.EventFired("TextEntered");
      else if (this._keyboardAction == EditableTextWidget.KeyboardAction.BackSpace || this._keyboardAction == EditableTextWidget.KeyboardAction.Delete)
      {
        if (!flag3 && tickCount < this._nextRepeatTime)
          return;
        if (this._editableText.IsAnySelected())
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
        else if (Input.IsKeyDown(InputKey.LeftControl))
          this.DeleteText(this._editableText.CursorPosition + (this.FindNextWordPosition(-1) - this._editableText.CursorPosition), this._editableText.CursorPosition);
        else
          this.DeleteChar(this._keyboardAction == EditableTextWidget.KeyboardAction.Delete);
        if (tickCount < this._nextRepeatTime)
          return;
        this._nextRepeatTime = tickCount + 30;
      }
      else
      {
        if (!Input.IsKeyDown(InputKey.LeftControl))
          return;
        if (Input.IsKeyPressed(InputKey.A))
          this._editableText.SelectAll();
        else if (Input.IsKeyPressed(InputKey.C))
          this.CopyText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
        else if (Input.IsKeyPressed(InputKey.X))
        {
          this.CopyText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
        }
        else
        {
          if (!Input.IsKeyPressed(InputKey.V))
            return;
          this.DeleteText(this._editableText.SelectedTextBegin, this._editableText.SelectedTextEnd);
          this.PasteText();
        }
      }
    }

    protected internal override void OnGainFocus()
    {
      base.OnGainFocus();
      this._editableText.SetCursor(this.RealText.Length);
      if (!string.IsNullOrEmpty(this.RealText) || string.IsNullOrEmpty(this.DefaultSearchText))
        return;
      this._editableText.VisibleText = "";
    }

    protected internal override void OnLoseFocus()
    {
      base.OnLoseFocus();
      this._editableText.ResetSelected();
      this._isSelection = false;
      this._editableText.SetCursor(0, false);
      if (!string.IsNullOrEmpty(this.RealText) || string.IsNullOrEmpty(this.DefaultSearchText))
        return;
      this._editableText.VisibleText = this.DefaultSearchText;
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
      if (!string.IsNullOrEmpty(this.Text) || string.IsNullOrEmpty(this.DefaultSearchText) || this._mouseState != EditableTextWidget.MouseState.None || this.EventManager.FocusedWidget == this)
        return;
      this._editableText.VisibleText = this.DefaultSearchText;
    }

    private void UpdateFontData()
    {
      if (this._lastFontBrush == this.ReadOnlyBrush && (double) this._lastScale == (double) this._scaleToUse && this._lastLanguageCode == this.Context.FontFactory.CurrentLangageID)
        return;
      this._editableText.StyleFontContainer.ClearFonts();
      foreach (Style style in this.ReadOnlyBrush.Styles)
      {
        Font fontForLocalization = this.Context.FontFactory.GetMappedFontForLocalization((style.Font == null ? (this.ReadOnlyBrush.Font == null ? this.Context.FontFactory.DefaultFont : this.ReadOnlyBrush.Font) : style.Font).Name);
        this._editableText.StyleFontContainer.Add(style.Name, fontForLocalization, (float) this.ReadOnlyBrush.FontSize * this._scaleToUse);
      }
      this._lastFontBrush = this.ReadOnlyBrush;
      this._lastScale = this._scaleToUse;
      this._lastLanguageCode = this.Context.FontFactory.CurrentLangageID;
      this._editableText.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
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
      Vector2 localMousePosition = this.LocalMousePosition;
      bool focus = this._mouseState == EditableTextWidget.MouseState.Down;
      this._editableText.UpdateSize((int) this.Size.X, (int) this.Size.Y);
      this.SetEditTextParameters();
      this.UpdateFontData();
      bool isFixedWidth = this.WidthSizePolicy != SizePolicy.CoverChildren || (double) this.MaxWidth != 0.0;
      bool isFixedHeight = this.HeightSizePolicy != SizePolicy.CoverChildren || (double) this.MaxHeight != 0.0;
      this._editableText.Update(this.Context.SpriteData, localMousePosition, focus, isFixedWidth, isFixedHeight, this._scaleToUse);
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      base.OnRender(twoDimensionContext, drawContext);
      if (string.IsNullOrEmpty(this._editableText.Value))
        return;
      Vector2 globalPosition = this.GlobalPosition;
      foreach (RichTextPart part in this._editableText.GetParts())
      {
        DrawObject2D drawObject2D = part.DrawObject2D;
        Style styleOrDefault = this.ReadOnlyBrush.GetStyleOrDefault(part.Style);
        Font font = this.GetFont(styleOrDefault);
        int fontSize;
        float num1 = (float) (fontSize = styleOrDefault.FontSize) * this._scaleToUse;
        float num2 = (float) fontSize / (float) font.Size;
        float height = (float) font.LineHeight * num2 * this._scaleToUse;
        TextMaterial textMaterial1 = styleOrDefault.CreateTextMaterial(drawContext);
        textMaterial1.ColorFactor *= this.ReadOnlyBrush.GlobalColorFactor;
        textMaterial1.AlphaFactor *= this.ReadOnlyBrush.GlobalAlphaFactor;
        textMaterial1.Color *= this.ReadOnlyBrush.GlobalColor;
        textMaterial1.Texture = font.FontSprite.Texture;
        textMaterial1.ScaleFactor = num1;
        textMaterial1.Smooth = font.Smooth;
        textMaterial1.SmoothingConstant = font.SmoothingConstant;
        if ((double) textMaterial1.GlowRadius > 0.0 || (double) textMaterial1.Blur > 0.0 || (double) textMaterial1.OutlineAmount > 0.0)
        {
          TextMaterial textMaterial2 = styleOrDefault.CreateTextMaterial(drawContext);
          textMaterial2.CopyFrom(textMaterial1);
          drawContext.Draw(globalPosition.X, globalPosition.Y, (Material) textMaterial2, drawObject2D, this.Size.X, this.Size.Y);
        }
        textMaterial1.GlowRadius = 0.0f;
        textMaterial1.Blur = 0.0f;
        textMaterial1.OutlineAmount = 0.0f;
        Material material = (Material) textMaterial1;
        if (part.Style == "Highlight")
        {
          Sprite sprite = this.Context.SpriteData.GetSprite("warm_overlay");
          SimpleMaterial simpleMaterial = drawContext.CreateSimpleMaterial();
          simpleMaterial.Reset(sprite?.Texture);
          drawContext.DrawSprite(sprite, simpleMaterial, globalPosition.X + part.PartPosition.X, globalPosition.Y + part.PartPosition.Y, 1f, part.WordWidth, height, false, false);
        }
        drawContext.Draw(globalPosition.X, globalPosition.Y, material, drawObject2D, this.Size.X, this.Size.Y);
      }
      if (!this._editableText.IsCursorVisible())
        return;
      Style styleOrDefault1 = this.ReadOnlyBrush.GetStyleOrDefault("Default");
      Font font1 = this.GetFont(styleOrDefault1);
      int fontSize1 = styleOrDefault1.FontSize;
      float num = (float) fontSize1 / (float) font1.Size;
      float height1 = (float) font1.LineHeight * num * this._scaleToUse;
      Sprite sprite1 = this.Context.SpriteData.GetSprite("BlankWhiteSquare_9");
      SimpleMaterial simpleMaterial1 = drawContext.CreateSimpleMaterial();
      simpleMaterial1.Reset(sprite1?.Texture);
      Vector2 cursorPosition = this._editableText.GetCursorPosition(font1, (float) fontSize1, this._scaleToUse);
      drawContext.DrawSprite(sprite1, simpleMaterial1, (float) (int) ((double) globalPosition.X + (double) cursorPosition.X), globalPosition.Y + cursorPosition.Y, 1f, 1f, height1, false, false);
    }

    protected internal override void OnMousePressed()
    {
      base.OnMousePressed();
      this._mouseDownPosition = this.LocalMousePosition;
      this._mouseState = EditableTextWidget.MouseState.Down;
      this._editableText.HighlightStart = true;
      this._editableText.HighlightEnd = false;
    }

    protected internal override void OnMouseReleased()
    {
      base.OnMouseReleased();
      this._mouseState = EditableTextWidget.MouseState.Up;
      this._editableText.HighlightEnd = true;
    }

    private void OnObfuscationToggled(bool isEnabled)
    {
      if (isEnabled)
        this.Text = this.ObfuscateText(this.RealText);
      else
        this.Text = this.RealText;
    }

    private string ObfuscateText(string stringToObfuscate)
    {
      return new string(this._obfuscationChar, stringToObfuscate.Length);
    }

    public virtual void SetAllText(string text)
    {
      this.DeleteText(0, this.RealText.Length);
      this.AppendText(Regex.Replace(text, "[<>]+", " "));
    }

    protected enum MouseState
    {
      None,
      Down,
      Up,
    }

    protected enum CursorMovementDirection
    {
      Left = -1, // 0xFFFFFFFF
      None = 0,
      Right = 1,
    }

    protected enum KeyboardAction
    {
      None,
      BackSpace,
      Delete,
    }
  }
}
