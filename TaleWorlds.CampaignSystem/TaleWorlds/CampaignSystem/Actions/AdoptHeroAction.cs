// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.AdoptHeroAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class AdoptHeroAction
  {
    private static void ApplyInternal(Hero adoptedHero)
    {
      if (Hero.MainHero.IsFemale)
        adoptedHero.Mother = Hero.MainHero;
      else
        adoptedHero.Father = Hero.MainHero;
      adoptedHero.Clan = Clan.PlayerClan;
    }

    public static void Apply(Hero adoptedHero) => AdoptHeroAction.ApplyInternal(adoptedHero);
  }
}
