// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Map.LocatableSearchData`1
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Map
{
  public struct LocatableSearchData<T>
  {
    public readonly Vec2 Position;
    public readonly float RadiusSquared;
    public readonly int MinY;
    public readonly int MaxXInclusive;
    public readonly int MaxYInclusive;
    public int CurrentX;
    public int CurrentY;
    internal ILocatable<T> CurrentLocatable;

    public LocatableSearchData(
      Vec2 position,
      float radius,
      int minX,
      int minY,
      int maxX,
      int maxY)
    {
      this.Position = position;
      this.RadiusSquared = radius * radius;
      this.MinY = minY;
      this.MaxXInclusive = maxX;
      this.MaxYInclusive = maxY;
      this.CurrentX = minX;
      this.CurrentY = minY - 1;
      this.CurrentLocatable = (ILocatable<T>) null;
    }
  }
}
