// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.BribeGuardsAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class BribeGuardsAction
  {
    private static void ApplyInternal(Settlement settlement, int gold)
    {
      if (gold <= 0)
        return;
      if ((double) MBRandom.RandomFloat < (double) gold / 1000.0)
        SkillLevelingManager.OnBribeGiven(gold);
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, gold);
      settlement.BribePaid += gold;
    }

    public static void Apply(Settlement settlement, int gold)
    {
      BribeGuardsAction.ApplyInternal(settlement, gold);
    }
  }
}
