// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.PregnancyModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class PregnancyModel : GameModel
  {
    public abstract float GetDailyChanceOfPregnancyForHero(Hero hero);

    public abstract float PregnancyDurationInDays { get; }

    public abstract float MaternalMortalityProbabilityInLabor { get; }

    public abstract float StillbirthProbability { get; }

    public abstract float DeliveringFemaleOffspringProbability { get; }

    public abstract float DeliveringTwinsProbability { get; }
  }
}
