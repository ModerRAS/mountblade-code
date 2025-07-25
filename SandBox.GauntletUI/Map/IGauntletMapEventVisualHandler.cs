// Decompiled with JetBrains decompiler
// Type: SandBox.GauntletUI.Map.IGauntletMapEventVisualHandler
// Assembly: SandBox.GauntletUI, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 67AFA6AA-C387-4ED3-97D3-174D0297D93B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.GauntletUI.dll

#nullable disable
namespace SandBox.GauntletUI.Map
{
  public interface IGauntletMapEventVisualHandler
  {
    void OnNewEventStarted(GauntletMapEventVisual newEvent);

    void OnInitialized(GauntletMapEventVisual newEvent);

    void OnEventEnded(GauntletMapEventVisual newEvent);

    void OnEventVisibilityChanged(GauntletMapEventVisual visibilityChangedEvent);
  }
}
