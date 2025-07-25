// Decompiled with JetBrains decompiler
// Type: TaleWorlds.GauntletUI.AudioProperty
// Assembly: TaleWorlds.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 974CDA81-7568-41D3-9495-A11BE12FF2CA
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.GauntletUI.dll

#nullable disable
namespace TaleWorlds.GauntletUI
{
  public class AudioProperty
  {
    [Editor(false)]
    public string AudioName { get; set; }

    [Editor(false)]
    public bool Delay { get; set; }

    [Editor(false)]
    public float DelaySeconds { get; set; }

    public void FillFrom(AudioProperty audioProperty)
    {
      this.AudioName = audioProperty.AudioName;
      this.Delay = audioProperty.Delay;
      this.DelaySeconds = audioProperty.DelaySeconds;
    }
  }
}
