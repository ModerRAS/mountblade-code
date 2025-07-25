// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeRelationAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeRelationAction
  {
    private static void ApplyInternal(
      Hero originalHero,
      Hero originalGainedRelationWith,
      int relationChange,
      bool showQuickNotification,
      ChangeRelationAction.ChangeRelationDetail detail)
    {
      if (relationChange > 0)
        relationChange = MBRandom.RoundRandomized(Campaign.Current.Models.DiplomacyModel.GetRelationIncreaseFactor(originalHero, originalGainedRelationWith, (float) relationChange));
      if (relationChange == 0)
        return;
      Hero effectiveHero1;
      Hero effectiveHero2;
      Campaign.Current.Models.DiplomacyModel.GetHeroesForEffectiveRelation(originalHero, originalGainedRelationWith, out effectiveHero1, out effectiveHero2);
      int num = MBMath.ClampInt(CharacterRelationManager.GetHeroRelation(effectiveHero1, effectiveHero2) + relationChange, -100, 100);
      effectiveHero1.SetPersonalRelation(effectiveHero2, num);
      CampaignEventDispatcher.Instance.OnHeroRelationChanged(effectiveHero1, effectiveHero2, relationChange, showQuickNotification, detail, originalHero, originalGainedRelationWith);
    }

    public static void ApplyPlayerRelation(
      Hero gainedRelationWith,
      int relation,
      bool affectRelatives = true,
      bool showQuickNotification = true)
    {
      ChangeRelationAction.ApplyInternal(Hero.MainHero, gainedRelationWith, relation, showQuickNotification, ChangeRelationAction.ChangeRelationDetail.Default);
    }

    public static void ApplyRelationChangeBetweenHeroes(
      Hero hero,
      Hero gainedRelationWith,
      int relationChange,
      bool showQuickNotification = true)
    {
      ChangeRelationAction.ApplyInternal(hero, gainedRelationWith, relationChange, showQuickNotification, ChangeRelationAction.ChangeRelationDetail.Default);
    }

    public static void ApplyEmissaryRelation(
      Hero emissary,
      Hero gainedRelationWith,
      int relationChange,
      bool showQuickNotification = true)
    {
      ChangeRelationAction.ApplyInternal(emissary, gainedRelationWith, relationChange, showQuickNotification, ChangeRelationAction.ChangeRelationDetail.Emissary);
    }

    public enum ChangeRelationDetail
    {
      Default,
      Emissary,
    }
  }
}
