// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultHeirSelectionCalculationModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultHeirSelectionCalculationModel : HeirSelectionCalculationModel
  {
    private const int MaleHeirPoint = 10;
    private const int EldestPoint = 5;
    private const int YoungestPoint = -5;
    private const int DirectDescendentPoint = 10;
    private const int CollateralHeirPoint = 10;

    public override int HighestSkillPoint => 5;

    public override int CalculateHeirSelectionPoint(
      Hero candidateHeir,
      Hero deadHero,
      ref Hero maxSkillHero)
    {
      return DefaultHeirSelectionCalculationModel.CalculateHeirSelectionPointInternal(candidateHeir, deadHero, ref maxSkillHero);
    }

    private static int CalculateHeirSelectionPointInternal(
      Hero candidateHeir,
      Hero deadHero,
      ref Hero maxSkillHero)
    {
      int selectionPointInternal = 0;
      if (!candidateHeir.IsFemale)
        selectionPointInternal += 10;
      IOrderedEnumerable<Hero> source = candidateHeir.Clan.Heroes.Where<Hero>((Func<Hero, bool>) (x => x != deadHero)).OrderBy<Hero, float>((Func<Hero, float>) (h => h.Age));
      float? age1 = source.LastOrDefault<Hero>()?.Age;
      float? age2 = source.FirstOrDefault<Hero>()?.Age;
      double age3 = (double) candidateHeir.Age;
      float? nullable1 = age1;
      double valueOrDefault1 = (double) nullable1.GetValueOrDefault();
      if (age3 == valueOrDefault1 & nullable1.HasValue)
      {
        selectionPointInternal += 5;
      }
      else
      {
        double age4 = (double) candidateHeir.Age;
        float? nullable2 = age2;
        double valueOrDefault2 = (double) nullable2.GetValueOrDefault();
        if (age4 == valueOrDefault2 & nullable2.HasValue)
          selectionPointInternal += -5;
      }
      if (deadHero.Father == candidateHeir || deadHero.Mother == candidateHeir || candidateHeir.Father == deadHero || candidateHeir.Mother == deadHero || candidateHeir.Father == deadHero.Father || candidateHeir.Mother == deadHero.Mother)
        selectionPointInternal += 10;
      Hero father = deadHero.Father;
      while (father != null && father.Father != null)
        father = father.Father;
      if (father?.Children != null && DefaultHeirSelectionCalculationModel.DoesHaveSameBloodLine((IEnumerable<Hero>) father?.Children, candidateHeir))
        selectionPointInternal += 10;
      int num1 = 0;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        num1 += candidateHeir.GetSkillValue(skill);
      int num2 = 0;
      foreach (SkillObject skill in (List<SkillObject>) Skills.All)
        num2 += maxSkillHero.GetSkillValue(skill);
      if (num1 > num2)
        maxSkillHero = candidateHeir;
      return selectionPointInternal;
    }

    private static bool DoesHaveSameBloodLine(IEnumerable<Hero> children, Hero candidateHeir)
    {
      if (!children.Any<Hero>())
        return false;
      foreach (Hero child in children)
      {
        if (child == candidateHeir || DefaultHeirSelectionCalculationModel.DoesHaveSameBloodLine((IEnumerable<Hero>) child.Children, candidateHeir))
          return true;
      }
      return false;
    }
  }
}
