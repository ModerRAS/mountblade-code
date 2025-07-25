// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Party.TroopTradeDifference
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Party
{
  public struct TroopTradeDifference
  {
    public CharacterObject Troop { get; set; }

    public bool IsPrisoner { get; set; }

    public int FromCount { get; set; }

    public int ToCount { get; set; }

    public int DifferenceCount => this.FromCount - this.ToCount;

    public bool IsEmpty { get; private set; }

    public static TroopTradeDifference Empty
    {
      get => new TroopTradeDifference() { IsEmpty = true };
    }
  }
}
