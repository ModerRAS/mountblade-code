// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.BaseTypes.ImageWidget
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI.BaseTypes
{
  public class ImageWidget : BrushWidget
  {
    public bool OverrideDefaultStateSwitchingEnabled { get; set; }

    public bool OverrideDefaultStateSwitchingDisabled
    {
      get => !this.OverrideDefaultStateSwitchingEnabled;
      set
      {
        if (value == !this.OverrideDefaultStateSwitchingEnabled)
          return;
        this.OverrideDefaultStateSwitchingEnabled = !value;
      }
    }

    public ImageWidget(UIContext context)
      : base(context)
    {
      this.AddState("Pressed");
      this.AddState("Hovered");
      this.AddState("Disabled");
    }

    protected override void RefreshState()
    {
      if (!this.OverrideDefaultStateSwitchingEnabled)
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
      base.RefreshState();
    }
  }
}
