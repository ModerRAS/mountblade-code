// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.VolunteerModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class VolunteerModel : GameModel
  {
    public abstract int MaximumIndexHeroCanRecruitFromHero(
      Hero buyerHero,
      Hero sellerHero,
      int useValueAsRelation = -101);

    public abstract float GetDailyVolunteerProductionProbability(
      Hero hero,
      int index,
      Settlement settlement);

    public abstract CharacterObject GetBasicVolunteer(Hero hero);

    public abstract bool CanHaveRecruits(Hero hero);

    public abstract int MaxVolunteerTier { get; }
  }
}
