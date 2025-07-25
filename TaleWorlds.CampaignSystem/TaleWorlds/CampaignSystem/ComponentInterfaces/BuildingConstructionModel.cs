// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.BuildingConstructionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class BuildingConstructionModel : GameModel
  {
    public abstract int TownBoostCost { get; }

    public abstract int TownBoostBonus { get; }

    public abstract int CastleBoostCost { get; }

    public abstract int CastleBoostBonus { get; }

    public abstract ExplainedNumber CalculateDailyConstructionPower(
      Town town,
      bool includeDescriptions = false);

    public abstract int CalculateDailyConstructionPowerWithoutBoost(Town town);

    public abstract int GetBoostCost(Town town);

    public abstract int GetBoostAmount(Town town);
  }
}
