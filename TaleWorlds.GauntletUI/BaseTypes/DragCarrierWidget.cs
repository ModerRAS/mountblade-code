// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.DragCarrierWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

using TaleWorlds.GauntletUI.Layout;

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class DragCarrierWidget : Widget
  {
    public DragCarrierWidget(UIContext context)
      : base(context)
    {
      this.LayoutImp = (ILayout) new DragCarrierLayout();
      this.DoNotAcceptEvents = true;
      this.DoNotPassEventsToChildren = true;
      this.IsDisabled = true;
    }
  }
}
