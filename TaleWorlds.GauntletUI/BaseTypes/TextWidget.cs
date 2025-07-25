// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.TextWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System;
using System.Numerics;
using TaleWorlds.GauntletUI.Layout;
using TaleWorlds.TwoDimension;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class TextWidget : ImageWidget
  {
    protected readonly TaleWorlds.TwoDimension.Text _text;
    protected bool IsTextValueDirty = true;

    public bool AutoHideIfEmpty { get; set; }

    [Editor(false)]
    public string Text
    {
      get => this._text.Value;
      set
      {
        if (!(this._text.Value != value))
          return;
        this.SetText(value);
      }
    }

    [Editor(false)]
    public int IntText
    {
      get
      {
        int result;
        return int.TryParse(this._text.Value, out result) ? result : -1;
      }
      set
      {
        if (!(this._text.Value != value.ToString()))
          return;
        this.SetText(value.ToString());
      }
    }

    [Editor(false)]
    public float FloatText
    {
      get
      {
        float result;
        return float.TryParse(this._text.Value, out result) ? result : -1f;
      }
      set
      {
        if (!(this._text.Value != value.ToString()))
          return;
        this.SetText(value.ToString());
      }
    }

    public TextWidget(UIContext context)
      : base(context)
    {
      FontFactory fontFactory = context.FontFactory;
      this._text = new TaleWorlds.TwoDimension.Text((int) this.Size.X, (int) this.Size.Y, fontFactory.DefaultFont, new Func<int, Font>(fontFactory.GetUsableFontForCharacter));
      this.LayoutImp = (ILayout) new TextLayout((IText) this._text);
    }

    protected virtual void SetText(string value)
    {
      this.SetMeasureAndLayoutDirty();
      this._text.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
      this._text.Value = value;
      this.OnPropertyChanged(this.FloatText, "FloatText");
      this.OnPropertyChanged(this.IntText, "IntText");
      this.OnPropertyChanged<string>(this.Text, "Text");
      this.RefreshTextParameters();
      if (this.AutoHideIfEmpty)
        this.IsVisible = !string.IsNullOrEmpty(this.Text);
      this.IsTextValueDirty = true;
    }

    protected void RefreshTextParameters()
    {
      float num = (float) this.ReadOnlyBrush.FontSize * this._scaleToUse;
      this._text.HorizontalAlignment = this.ReadOnlyBrush.TextHorizontalAlignment;
      this._text.VerticalAlignment = this.ReadOnlyBrush.TextVerticalAlignment;
      this._text.FontSize = num;
      this._text.CurrentLanguage = (ILanguage) this.Context.FontFactory.GetCurrentLanguage();
      this._text.Font = this.ReadOnlyBrush.Font == null ? this.Context.FontFactory.DefaultFont : this.Context.FontFactory.GetMappedFontForLocalization(this.ReadOnlyBrush.Font.Name);
      if (!this.IsTextValueDirty)
        return;
      for (int index = 0; index < this._text.Value.Length; ++index)
      {
        if (char.IsLetter(this._text.Value[index]) && !this._text.Font.Characters.ContainsKey((int) this._text.Value[index]))
        {
          Font fontForCharacter = this.Context.FontFactory.GetUsableFontForCharacter((int) this._text.Value[index]);
          if (fontForCharacter != null)
          {
            this._text.Font = fontForCharacter;
            break;
          }
          break;
        }
      }
      this.IsTextValueDirty = false;
    }

    protected override void OnRender(
      TwoDimensionContext twoDimensionContext,
      TwoDimensionDrawContext drawContext)
    {
      base.OnRender(twoDimensionContext, drawContext);
      this.RefreshTextParameters();
      TextMaterial textMaterial = this.BrushRenderer.CreateTextMaterial(drawContext);
      textMaterial.AlphaFactor *= this.Context.ContextAlpha;
      Vector2 cachedGlobalPosition = this._cachedGlobalPosition;
      drawContext.Draw(this._text, textMaterial, cachedGlobalPosition.X, cachedGlobalPosition.Y, this.Size.X, this.Size.Y);
    }
  }
}
