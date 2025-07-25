// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BannerBuilderState
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BannerBuilderState : GameState
  {
    public override bool IsMenuState => true;

    public string DefaultBannerKey { get; }

    public BannerBuilderState()
    {
    }

    public BannerBuilderState(string defaultBannerKey) => this.DefaultBannerKey = defaultBannerKey;

    protected override void OnActivate() => base.OnActivate();

    protected override void OnFinalize() => base.OnFinalize();
  }
}
