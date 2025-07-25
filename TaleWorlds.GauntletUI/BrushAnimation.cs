// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushAnimation
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushAnimation
  {
    private Dictionary<string, BrushLayerAnimation> _data;

    public string Name { get; set; }

    public float Duration { get; set; }

    public bool Loop { get; set; }

    public BrushLayerAnimation StyleAnimation { get; set; }

    public BrushAnimation() => this._data = new Dictionary<string, BrushLayerAnimation>();

    public void AddAnimationProperty(BrushAnimationProperty property)
    {
      BrushLayerAnimation brushLayerAnimation = (BrushLayerAnimation) null;
      if (string.IsNullOrEmpty(property.LayerName))
      {
        if (this.StyleAnimation == null)
          this.StyleAnimation = new BrushLayerAnimation();
        brushLayerAnimation = this.StyleAnimation;
      }
      else if (!this._data.TryGetValue(property.LayerName, out brushLayerAnimation))
      {
        brushLayerAnimation = new BrushLayerAnimation();
        brushLayerAnimation.LayerName = property.LayerName;
        this._data.Add(property.LayerName, brushLayerAnimation);
      }
      brushLayerAnimation.AddAnimationProperty(property);
    }

    public void RemoveAnimationProperty(BrushAnimationProperty property)
    {
      BrushLayerAnimation styleAnimation;
      if (string.IsNullOrEmpty(property.LayerName))
      {
        if (this.StyleAnimation == null)
          this.StyleAnimation = new BrushLayerAnimation();
        styleAnimation = this.StyleAnimation;
      }
      else
      {
        if (!this._data.ContainsKey(property.LayerName))
          return;
        styleAnimation = this._data[property.LayerName];
      }
      styleAnimation.RemoveAnimationProperty(property);
      if (styleAnimation.Collections.Count != 0)
        return;
      this._data.Remove(property.LayerName);
    }

    public void FillFrom(BrushAnimation animation)
    {
      this.Name = animation.Name;
      this.Duration = animation.Duration;
      this.Loop = animation.Loop;
      if (animation.StyleAnimation != null)
        this.StyleAnimation = animation.StyleAnimation.Clone();
      this._data = new Dictionary<string, BrushLayerAnimation>();
      foreach (KeyValuePair<string, BrushLayerAnimation> keyValuePair in animation._data)
        this._data.Add(keyValuePair.Key, keyValuePair.Value.Clone());
    }

    public BrushLayerAnimation GetLayerAnimation(string name)
    {
      return this._data.ContainsKey(name) ? this._data[name] : (BrushLayerAnimation) null;
    }

    public IEnumerable<BrushLayerAnimation> GetLayerAnimations()
    {
      return (IEnumerable<BrushLayerAnimation>) this._data.Values;
    }
  }
}
