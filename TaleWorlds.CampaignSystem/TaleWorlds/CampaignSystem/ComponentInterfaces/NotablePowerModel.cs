// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.NotablePowerModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class NotablePowerModel : GameModel
  {
    public abstract int RegularNotableMaxPowerLevel { get; }

    public abstract int NotableDisappearPowerLimit { get; }

    public abstract ExplainedNumber CalculateDailyPowerChangeForHero(
      Hero hero,
      bool includeDescriptions = false);

    public abstract TextObject GetPowerRankName(Hero hero);

    public abstract float GetInfluenceBonusToClan(Hero hero);

    public abstract int GetInitialPower();
  }
}
