// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultEmissaryModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultEmissaryModel : EmissaryModel
  {
    public override int EmissaryRelationBonusForMainClan => 5;

    public override bool IsEmissary(Hero hero)
    {
      return (hero.CompanionOf == Clan.PlayerClan || hero.Clan == Clan.PlayerClan) && hero.PartyBelongedTo == null && hero.CurrentSettlement != null && hero.CurrentSettlement.IsFortification && !hero.IsPrisoner && (double) hero.Age >= (double) Campaign.Current.Models.AgeModel.HeroComesOfAge;
    }
  }
}
