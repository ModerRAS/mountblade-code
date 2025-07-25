// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.ExecutionRelationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class ExecutionRelationModel : GameModel
  {
    public abstract int HeroKillingHeroClanRelationPenalty { get; }

    public abstract int HeroKillingHeroFriendRelationPenalty { get; }

    public abstract int PlayerExecutingHeroFactionRelationPenaltyDishonorable { get; }

    public abstract int PlayerExecutingHeroClanRelationPenaltyDishonorable { get; }

    public abstract int PlayerExecutingHeroFriendRelationPenaltyDishonorable { get; }

    public abstract int PlayerExecutingHeroHonorPenalty { get; }

    public abstract int PlayerExecutingHeroFactionRelationPenalty { get; }

    public abstract int PlayerExecutingHeroHonorableNobleRelationPenalty { get; }

    public abstract int PlayerExecutingHeroClanRelationPenalty { get; }

    public abstract int PlayerExecutingHeroFriendRelationPenalty { get; }

    public abstract int GetRelationChangeForExecutingHero(
      Hero victim,
      Hero hero,
      out bool showQuickNotification);
  }
}
