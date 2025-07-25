// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.CrimeModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class CrimeModel : GameModel
  {
    public abstract int DeclareWarCrimeRatingThreshold { get; }

    public abstract float GetMaxCrimeRating();

    public abstract float GetMinAcceptableCrimeRating(IFaction faction);

    public abstract bool DoesPlayerHaveAnyCrimeRating(IFaction faction);

    public abstract bool IsPlayerCrimeRatingSevere(IFaction faction);

    public abstract bool IsPlayerCrimeRatingModerate(IFaction faction);

    public abstract bool IsPlayerCrimeRatingMild(IFaction faction);

    public abstract float GetCost(
      IFaction faction,
      CrimeModel.PaymentMethod paymentMethod,
      float minimumCrimeRating);

    public abstract ExplainedNumber GetDailyCrimeRatingChange(
      IFaction faction,
      bool includeDescriptions = false);

    [Flags]
    public enum PaymentMethod : uint
    {
      ExMachina = 4096, // 0x00001000
      Gold = 1,
      Influence = 2,
      Punishment = 4,
      Execution = 8,
    }
  }
}
