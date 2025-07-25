// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Map.WeatherNode
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Map
{
  public class WeatherNode
  {
    public Vec2 Position;
    public MapWeatherModel.WeatherEvent CurrentWeatherEvent;

    public bool IsVisuallyDirty { get; private set; }

    public WeatherNode(Vec2 position)
    {
      this.Position = position;
      this.CurrentWeatherEvent = MapWeatherModel.WeatherEvent.Clear;
    }

    public void SetVisualDirty() => this.IsVisuallyDirty = true;

    public void OnVisualUpdated() => this.IsVisuallyDirty = false;
  }
}
