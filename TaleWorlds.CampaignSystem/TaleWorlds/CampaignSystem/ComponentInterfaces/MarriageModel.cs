// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.MarriageModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class MarriageModel : GameModel
  {
    public abstract bool IsCoupleSuitableForMarriage(Hero firstHero, Hero secondHero);

    public abstract int GetEffectiveRelationIncrease(Hero firstHero, Hero secondHero);

    public abstract Clan GetClanAfterMarriage(Hero firstHero, Hero secondHero);

    public abstract bool IsSuitableForMarriage(Hero hero);

    public abstract bool IsClanSuitableForMarriage(Clan clan);

    public abstract float NpcCoupleMarriageChance(Hero firstHero, Hero secondHero);

    public abstract bool ShouldNpcMarriageBetweenClansBeAllowed(
      Clan consideringClan,
      Clan targetClan);

    public abstract List<Hero> GetAdultChildrenSuitableForMarriage(Hero hero);

    public abstract int MinimumMarriageAgeMale { get; }

    public abstract int MinimumMarriageAgeFemale { get; }
  }
}
