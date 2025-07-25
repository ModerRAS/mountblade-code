// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BrushLayerAnimation
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using System.Collections.Generic;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class BrushLayerAnimation
  {
    private MBList<BrushAnimationProperty> _collections;

    public string LayerName { get; set; }

    public MBReadOnlyList<BrushAnimationProperty> Collections
    {
      get => (MBReadOnlyList<BrushAnimationProperty>) this._collections;
    }

    public BrushLayerAnimation()
    {
      this.LayerName = (string) null;
      this._collections = new MBList<BrushAnimationProperty>();
    }

    internal void RemoveAnimationProperty(BrushAnimationProperty property)
    {
      this._collections.Remove(property);
    }

    public void AddAnimationProperty(BrushAnimationProperty property)
    {
      this._collections.Add(property);
    }

    private void FillFrom(BrushLayerAnimation brushLayerAnimation)
    {
      this.LayerName = brushLayerAnimation.LayerName;
      this._collections = new MBList<BrushAnimationProperty>();
      foreach (BrushAnimationProperty collection in (List<BrushAnimationProperty>) brushLayerAnimation._collections)
        this._collections.Add(collection.Clone());
    }

    public BrushLayerAnimation Clone()
    {
      BrushLayerAnimation brushLayerAnimation = new BrushLayerAnimation();
      brushLayerAnimation.FillFrom(this);
      return brushLayerAnimation;
    }
  }
}
