// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.ContainerItemDescription
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class ContainerItemDescription
  {
    public string WidgetId { get; set; }

    public int WidgetIndex { get; set; }

    public float WidthStretchRatio { get; set; }

    public float HeightStretchRatio { get; set; }

    public ContainerItemDescription()
    {
      this.WidgetId = "";
      this.WidgetIndex = -1;
      this.WidthStretchRatio = 1f;
      this.HeightStretchRatio = 1f;
    }
  }
}
