// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultValuationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultValuationModel : ValuationModel
  {
    public override float GetMilitaryValueOfParty(MobileParty party)
    {
      return party.Party.TotalStrength * 15f;
    }

    public override float GetValueOfTroop(CharacterObject troop) => troop.GetPower() * 15f;

    public override float GetValueOfHero(Hero hero)
    {
      return hero.Clan != null ? (float) (((double) hero.Clan.Gold * 0.15000000596046448 + (double) ((1 + hero.Clan.Tier * hero.Clan.Tier) * 500)) * (hero.Clan.Leader == hero ? 4.0 : 1.0)) : 500f;
    }
  }
}
