// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBarterModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBarterModel : BarterModel
  {
    public override int BarterCooldownWithHeroInDays => 3;

    private int MaximumOverpayRelationBonus => 3;

    public override float MaximumPercentageOfNpcGoldToSpendAtBarter => 0.25f;

    public override int CalculateOverpayRelationIncreaseCosts(Hero hero, float overpayAmount)
    {
      int relationWithPlayer = (int) hero.GetRelationWithPlayer();
      float num1 = MathF.Clamp((float) (relationWithPlayer + this.MaximumOverpayRelationBonus), -100f, 100f);
      float f = 0.0f;
      for (int index = relationWithPlayer; (double) index < (double) num1; ++index)
      {
        int num2 = 1000 + 100 * (index * index);
        if ((double) overpayAmount >= (double) num2)
        {
          overpayAmount -= (float) num2;
          ++f;
        }
        else
        {
          if ((double) MBRandom.RandomFloat <= (double) overpayAmount / (double) num2)
          {
            ++f;
            break;
          }
          break;
        }
      }
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Charm.Tribute))
        f *= 1f + DefaultPerks.Charm.Tribute.PrimaryBonus;
      return MathF.Ceiling(f);
    }

    public override ExplainedNumber GetBarterPenalty(
      IFaction faction,
      ItemBarterable itemBarterable,
      Hero otherHero,
      PartyBase otherParty)
    {
      ExplainedNumber barterPenalty;
      if (faction == otherHero?.Clan || faction == otherHero?.MapFaction || faction == otherParty?.MapFaction)
      {
        barterPenalty = new ExplainedNumber(0.4f);
        if (otherHero != null && itemBarterable.OriginalOwner != null && otherHero != itemBarterable.OriginalOwner && otherHero.MapFaction != null && otherHero.IsPartyLeader)
        {
          if (otherHero.Culture == itemBarterable.OriginalOwner?.Culture)
          {
            if (itemBarterable.OriginalOwner.GetPerkValue(DefaultPerks.Charm.EffortForThePeople))
              barterPenalty.AddFactor(-DefaultPerks.Charm.EffortForThePeople.SecondaryBonus);
          }
          else if (itemBarterable.OriginalOwner.GetPerkValue(DefaultPerks.Charm.SlickNegotiator))
            barterPenalty.AddFactor(-DefaultPerks.Charm.SlickNegotiator.SecondaryBonus);
          if (itemBarterable.OriginalOwner.GetPerkValue(DefaultPerks.Trade.SelfMadeMan))
            barterPenalty.AddFactor(-DefaultPerks.Trade.SelfMadeMan.PrimaryBonus);
        }
      }
      else if (faction == itemBarterable.OriginalOwner?.Clan || faction == itemBarterable.OriginalOwner?.MapFaction || faction == itemBarterable.OriginalParty?.MapFaction)
      {
        barterPenalty = itemBarterable.ItemRosterElement.EquipmentElement.Item.IsAnimal || itemBarterable.ItemRosterElement.EquipmentElement.Item.IsMountable ? new ExplainedNumber(-8.4f) : (!itemBarterable.ItemRosterElement.EquipmentElement.Item.IsFood ? new ExplainedNumber(-2.1f) : new ExplainedNumber(-12.6f));
        if (otherHero != null && otherHero != itemBarterable.OriginalOwner && otherHero.MapFaction != null && otherHero.IsPartyLeader)
        {
          if (otherHero.Culture == itemBarterable.OriginalOwner?.Culture)
          {
            if (otherHero.GetPerkValue(DefaultPerks.Charm.EffortForThePeople))
              barterPenalty.AddFactor(DefaultPerks.Charm.EffortForThePeople.SecondaryBonus);
          }
          else if (otherHero.GetPerkValue(DefaultPerks.Charm.SlickNegotiator))
            barterPenalty.AddFactor(DefaultPerks.Charm.SlickNegotiator.SecondaryBonus);
          if (otherHero.GetPerkValue(DefaultPerks.Trade.SelfMadeMan))
            barterPenalty.AddFactor(DefaultPerks.Trade.SelfMadeMan.PrimaryBonus);
        }
      }
      else
        barterPenalty = new ExplainedNumber();
      return barterPenalty;
    }
  }
}
