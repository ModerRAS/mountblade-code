// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Map.ILocatable`1
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Map
{
  internal interface ILocatable<T>
  {
    [CachedData]
    int LocatorNodeIndex { get; set; }

    [CachedData]
    T NextLocatable { get; set; }

    [CachedData]
    Vec2 GetPosition2D { get; }
  }
}
