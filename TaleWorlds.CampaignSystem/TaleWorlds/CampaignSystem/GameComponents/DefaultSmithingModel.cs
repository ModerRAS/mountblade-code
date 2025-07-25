// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSmithingModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSmithingModel : SmithingModel
  {
    private const int BladeDifficultyCalculationWeight = 100;
    private const int GuardDifficultyCalculationWeight = 20;
    private const int HandleDifficultyCalculationWeight = 60;
    private const int PommelDifficultyCalculationWeight = 20;

    public override int GetCraftingPartDifficulty(CraftingPiece craftingPiece)
    {
      return !craftingPiece.IsEmptyPiece ? craftingPiece.PieceTier * 50 : 0;
    }

    public override int CalculateWeaponDesignDifficulty(WeaponDesign weaponDesign)
    {
      float num1 = 0.0f;
      float num2 = 0.0f;
      foreach (WeaponDesignElement usedPiece in weaponDesign.UsedPieces)
      {
        if (usedPiece.IsValid && !usedPiece.CraftingPiece.IsEmptyPiece)
        {
          if (usedPiece.CraftingPiece.PieceType == CraftingPiece.PieceTypes.Blade)
          {
            num1 += 100f;
            num2 += (float) (this.GetCraftingPartDifficulty(usedPiece.CraftingPiece) * 100);
          }
          else if (usedPiece.CraftingPiece.PieceType == CraftingPiece.PieceTypes.Guard)
          {
            num1 += 20f;
            num2 += (float) (this.GetCraftingPartDifficulty(usedPiece.CraftingPiece) * 20);
          }
          else if (usedPiece.CraftingPiece.PieceType == CraftingPiece.PieceTypes.Handle)
          {
            num1 += 60f;
            num2 += (float) (this.GetCraftingPartDifficulty(usedPiece.CraftingPiece) * 60);
          }
          else if (usedPiece.CraftingPiece.PieceType == CraftingPiece.PieceTypes.Pommel)
          {
            num1 += 20f;
            num2 += (float) (this.GetCraftingPartDifficulty(usedPiece.CraftingPiece) * 20);
          }
        }
      }
      return MathF.Round(num2 / num1);
    }

    public override ItemModifier GetCraftedWeaponModifier(WeaponDesign weaponDesign, Hero hero)
    {
      List<(ItemQuality quality, float probability)> qualityProbabilities = this.GetModifierQualityProbabilities(weaponDesign, hero);
      ItemQuality quality1 = qualityProbabilities.Last<(ItemQuality, float)>().quality;
      float randomFloat = MBRandom.RandomFloat;
      foreach ((ItemQuality quality, float probability) tuple in qualityProbabilities)
      {
        if ((double) randomFloat <= (double) tuple.probability)
        {
          quality1 = tuple.quality;
          break;
        }
        randomFloat -= tuple.probability;
      }
      ItemQuality quality2 = this.AdjustQualityRegardingDesignTier(quality1, weaponDesign);
      List<ItemModifier> modifiersBasedOnQuality = weaponDesign.Template.ItemModifierGroup.GetModifiersBasedOnQuality(quality2);
      if (modifiersBasedOnQuality.IsEmpty<ItemModifier>())
        return (ItemModifier) null;
      if (modifiersBasedOnQuality.Count == 1)
        return modifiersBasedOnQuality[0];
      int index = MBRandom.RandomInt(0, modifiersBasedOnQuality.Count);
      return modifiersBasedOnQuality[index];
    }

    public override IEnumerable<TaleWorlds.Core.Crafting.RefiningFormula> GetRefiningFormulas(
      Hero weaponsmith)
    {
      if (weaponsmith.GetPerkValue(DefaultPerks.Crafting.CharcoalMaker))
        yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Wood, 2, CraftingMaterials.Iron1, 0, CraftingMaterials.Charcoal, 3);
      else
        yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Wood, 2, CraftingMaterials.Iron1, 0, CraftingMaterials.Charcoal);
      yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.IronOre, 1, CraftingMaterials.Charcoal, 1, CraftingMaterials.Iron1, weaponsmith.GetPerkValue(DefaultPerks.Crafting.IronMaker) ? 3 : 2);
      yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Iron1, 1, CraftingMaterials.Charcoal, 1, CraftingMaterials.Iron2);
      yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Iron2, 2, CraftingMaterials.Charcoal, 1, CraftingMaterials.Iron3, output2: CraftingMaterials.Iron1, output2Count: 1);
      if (weaponsmith.GetPerkValue(DefaultPerks.Crafting.SteelMaker))
        yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Iron3, 2, CraftingMaterials.Charcoal, 1, CraftingMaterials.Iron4, output2: CraftingMaterials.Iron1, output2Count: 1);
      if (weaponsmith.GetPerkValue(DefaultPerks.Crafting.SteelMaker2))
        yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Iron4, 2, CraftingMaterials.Charcoal, 1, CraftingMaterials.Iron5, output2: CraftingMaterials.Iron1, output2Count: 1);
      if (weaponsmith.GetPerkValue(DefaultPerks.Crafting.SteelMaker3))
        yield return new TaleWorlds.Core.Crafting.RefiningFormula(CraftingMaterials.Iron5, 2, CraftingMaterials.Charcoal, 1, CraftingMaterials.Iron6, output2: CraftingMaterials.Iron1, output2Count: 1);
    }

    public override int GetSkillXpForRefining(ref TaleWorlds.Core.Crafting.RefiningFormula refineFormula)
    {
      return MathF.Round(0.3f * (float) (this.GetCraftingMaterialItem(refineFormula.Output).Value * refineFormula.OutputCount));
    }

    public override int GetSkillXpForSmelting(ItemObject item)
    {
      return MathF.Round(0.02f * (float) item.Value);
    }

    public override int GetSkillXpForSmithingInFreeBuildMode(ItemObject item)
    {
      return MathF.Round(0.02f * (float) item.Value);
    }

    public override int GetSkillXpForSmithingInCraftingOrderMode(ItemObject item)
    {
      return MathF.Round(0.1f * (float) item.Value);
    }

    public override int GetEnergyCostForRefining(
      ref TaleWorlds.Core.Crafting.RefiningFormula refineFormula,
      Hero hero)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(6f);
      if (hero.GetPerkValue(DefaultPerks.Crafting.PracticalRefiner))
        explainedNumber.AddFactor(DefaultPerks.Crafting.PracticalRefiner.PrimaryBonus);
      return (int) explainedNumber.ResultNumber;
    }

    public override int GetEnergyCostForSmithing(ItemObject item, Hero hero)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber((float) (10 + 5 * (int) item.Tier));
      if (hero.GetPerkValue(DefaultPerks.Crafting.PracticalSmith))
        explainedNumber.AddFactor(DefaultPerks.Crafting.PracticalSmith.PrimaryBonus);
      return (int) explainedNumber.ResultNumber;
    }

    public override int GetEnergyCostForSmelting(ItemObject item, Hero hero)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(10f);
      if (hero.GetPerkValue(DefaultPerks.Crafting.PracticalSmelter))
        explainedNumber.AddFactor(DefaultPerks.Crafting.PracticalSmelter.PrimaryBonus);
      return (int) explainedNumber.ResultNumber;
    }

    public override ItemObject GetCraftingMaterialItem(CraftingMaterials craftingMaterial)
    {
      switch (craftingMaterial)
      {
        case CraftingMaterials.IronOre:
          return DefaultItems.IronOre;
        case CraftingMaterials.Iron1:
          return DefaultItems.IronIngot1;
        case CraftingMaterials.Iron2:
          return DefaultItems.IronIngot2;
        case CraftingMaterials.Iron3:
          return DefaultItems.IronIngot3;
        case CraftingMaterials.Iron4:
          return DefaultItems.IronIngot4;
        case CraftingMaterials.Iron5:
          return DefaultItems.IronIngot5;
        case CraftingMaterials.Iron6:
          return DefaultItems.IronIngot6;
        case CraftingMaterials.Wood:
          return DefaultItems.HardWood;
        case CraftingMaterials.Charcoal:
          return DefaultItems.Charcoal;
        default:
          return DefaultItems.IronIngot1;
      }
    }

    public override int[] GetSmeltingOutputForItem(ItemObject item)
    {
      int[] quantities = new int[9];
      if (item.WeaponDesign != (WeaponDesign) null)
      {
        foreach (WeaponDesignElement usedPiece in item.WeaponDesign.UsedPieces)
        {
          if (usedPiece != null && usedPiece.IsValid)
          {
            foreach ((CraftingMaterials, int) tuple in (List<(CraftingMaterials, int)>) usedPiece.CraftingPiece.MaterialsUsed)
              quantities[(int) tuple.Item1] += tuple.Item2;
          }
        }
        this.AddSmeltingReductions(quantities);
      }
      return quantities;
    }

    private List<(ItemQuality quality, float probability)> GetModifierQualityProbabilities(
      WeaponDesign weaponDesign,
      Hero hero)
    {
      int designDifficulty = this.CalculateWeaponDesignDifficulty(weaponDesign);
      int skillValue = hero.CharacterObject.GetSkillValue(DefaultSkills.Crafting);
      List<(ItemQuality, float)> qualityProbabilities = new List<(ItemQuality, float)>();
      float x = MathF.Clamp((float) (skillValue - designDifficulty), -300f, 300f);
      qualityProbabilities.Add((ItemQuality.Poor, (float) (0.36000001430511475 * (1.0 - (double) this.CalculateSigmoidFunction(x, -70f, 0.018f)))));
      qualityProbabilities.Add((ItemQuality.Inferior, (float) (0.44999998807907104 * (1.0 - (double) this.CalculateSigmoidFunction(x, -55f, 0.018f)))));
      qualityProbabilities.Add((ItemQuality.Common, this.CalculateSigmoidFunction(x, 25f, 0.018f)));
      qualityProbabilities.Add((ItemQuality.Fine, 0.36f * this.CalculateSigmoidFunction(x, 40f, 0.018f)));
      qualityProbabilities.Add((ItemQuality.Masterwork, 0.27f * this.CalculateSigmoidFunction(x, 70f, 0.018f)));
      qualityProbabilities.Add((ItemQuality.Legendary, 0.18f * this.CalculateSigmoidFunction(x, 115f, 0.018f)));
      float num = qualityProbabilities.Sum<(ItemQuality, float)>((Func<(ItemQuality, float), float>) (tuple => tuple.probability));
      for (int index = 0; index < qualityProbabilities.Count; ++index)
      {
        (ItemQuality, float) valueTuple = qualityProbabilities[index];
        qualityProbabilities[index] = (valueTuple.Item1, valueTuple.Item2 / num);
      }
      List<ItemQuality> qualitiesToIgnore = new List<ItemQuality>();
      bool perkValue1 = hero.CharacterObject.GetPerkValue(DefaultPerks.Crafting.ExperiencedSmith);
      if (perkValue1)
      {
        qualitiesToIgnore.Add(ItemQuality.Masterwork);
        qualitiesToIgnore.Add(ItemQuality.Legendary);
        DefaultSmithingModel.AdjustModifierProbabilities(qualityProbabilities, ItemQuality.Fine, DefaultPerks.Crafting.ExperiencedSmith.PrimaryBonus, qualitiesToIgnore);
      }
      bool perkValue2 = hero.CharacterObject.GetPerkValue(DefaultPerks.Crafting.MasterSmith);
      if (perkValue2)
      {
        qualitiesToIgnore.Clear();
        qualitiesToIgnore.Add(ItemQuality.Legendary);
        if (perkValue1)
          qualitiesToIgnore.Add(ItemQuality.Fine);
        DefaultSmithingModel.AdjustModifierProbabilities(qualityProbabilities, ItemQuality.Masterwork, DefaultPerks.Crafting.MasterSmith.PrimaryBonus, qualitiesToIgnore);
      }
      if (hero.CharacterObject.GetPerkValue(DefaultPerks.Crafting.LegendarySmith))
      {
        qualitiesToIgnore.Clear();
        if (perkValue1)
          qualitiesToIgnore.Add(ItemQuality.Fine);
        if (perkValue2)
          qualitiesToIgnore.Add(ItemQuality.Masterwork);
        float amount = DefaultPerks.Crafting.LegendarySmith.PrimaryBonus + (float) ((double) Math.Max((float) (skillValue - 275), 0.0f) / 5.0 * 0.0099999997764825821);
        DefaultSmithingModel.AdjustModifierProbabilities(qualityProbabilities, ItemQuality.Legendary, amount, qualitiesToIgnore);
      }
      return qualityProbabilities;
    }

    private static void AdjustModifierProbabilities(
      List<(ItemQuality quality, float probability)> modifierProbabilities,
      ItemQuality qualityToAdjust,
      float amount,
      List<ItemQuality> qualitiesToIgnore)
    {
      int num1 = modifierProbabilities.Count - (qualitiesToIgnore.Count + 1);
      float num2 = amount / (float) num1;
      float num3 = 0.0f;
      for (int index = 0; index < modifierProbabilities.Count; ++index)
      {
        (ItemQuality quality, float probability) modifierProbability = modifierProbabilities[index];
        if (modifierProbability.quality == qualityToAdjust)
          modifierProbabilities[index] = (modifierProbability.quality, modifierProbability.probability + amount);
        else if (!qualitiesToIgnore.Contains(modifierProbability.quality))
        {
          float num4 = modifierProbability.probability - (num2 + num3);
          if ((double) num4 < 0.0)
          {
            num3 = -num4;
            num4 = 0.0f;
          }
          else
            num3 = 0.0f;
          modifierProbabilities[index] = (modifierProbability.quality, num4);
        }
      }
      float num5 = modifierProbabilities.Sum<(ItemQuality, float)>((Func<(ItemQuality, float), float>) (tuple => tuple.probability));
      for (int index = 0; index < modifierProbabilities.Count; ++index)
      {
        (ItemQuality quality, float probability) modifierProbability = modifierProbabilities[index];
        modifierProbabilities[index] = (modifierProbability.quality, modifierProbability.probability / num5);
      }
    }

    private ItemQuality AdjustQualityRegardingDesignTier(
      ItemQuality weaponQuality,
      WeaponDesign weaponDesign)
    {
      float num = (float) ((IEnumerable<WeaponDesignElement>) weaponDesign.UsedPieces).Sum<WeaponDesignElement>((Func<WeaponDesignElement, int>) (piece => piece.CraftingPiece.PieceTier)) / (float) ((IEnumerable<WeaponDesignElement>) weaponDesign.UsedPieces).Count<WeaponDesignElement>();
      if ((double) num >= 4.5)
        return weaponQuality;
      return (double) num >= 3.5 ? (weaponQuality < ItemQuality.Legendary ? weaponQuality : ItemQuality.Masterwork) : (weaponQuality < ItemQuality.Masterwork ? weaponQuality : ItemQuality.Fine);
    }

    private float CalculateSigmoidFunction(float x, float mean, float curvature)
    {
      double num = Math.Exp((double) curvature * ((double) x - (double) mean));
      return (float) (num / (1.0 + num));
    }

    private float GetDifficultyForElement(WeaponDesignElement weaponDesignElement)
    {
      return (float) weaponDesignElement.CraftingPiece.PieceTier * (float) (1.0 + 0.5 * (double) weaponDesignElement.ScaleFactor);
    }

    private void AddSmeltingReductions(int[] quantities)
    {
      if (quantities[6] > 0)
      {
        --quantities[6];
        ++quantities[5];
      }
      else if (quantities[5] > 0)
      {
        --quantities[5];
        ++quantities[4];
      }
      else if (quantities[4] > 0)
      {
        --quantities[4];
        ++quantities[3];
      }
      else if (quantities[3] > 0)
      {
        --quantities[3];
        ++quantities[2];
      }
      else if (quantities[2] > 0)
      {
        --quantities[2];
        ++quantities[1];
      }
      --quantities[8];
    }

    public override int[] GetSmithingCostsForWeaponDesign(WeaponDesign weaponDesign)
    {
      int[] costsForWeaponDesign = new int[9];
      foreach (WeaponDesignElement usedPiece in weaponDesign.UsedPieces)
      {
        if (usedPiece != null && usedPiece.IsValid)
        {
          foreach ((CraftingMaterials, int) tuple in (List<(CraftingMaterials, int)>) usedPiece.CraftingPiece.MaterialsUsed)
            costsForWeaponDesign[(int) tuple.Item1] -= tuple.Item2;
        }
      }
      --costsForWeaponDesign[8];
      return costsForWeaponDesign;
    }

    public override float ResearchPointsNeedForNewPart(int totalPartCount, int openedPartCount)
    {
      return MathF.Sqrt(100f / (float) totalPartCount) * (float) ((double) openedPartCount * 9.0 + 10.0);
    }

    public override int GetPartResearchGainForSmeltingItem(ItemObject item, Hero hero)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(1f + (float) MathF.Round(0.02f * (float) item.Value));
      if (hero.GetPerkValue(DefaultPerks.Crafting.CuriousSmelter))
        explainedNumber.AddFactor(DefaultPerks.Crafting.CuriousSmelter.PrimaryBonus);
      return (int) explainedNumber.ResultNumber;
    }

    public override int GetPartResearchGainForSmithingItem(
      ItemObject item,
      Hero hero,
      bool isFreeBuild)
    {
      ExplainedNumber explainedNumber = new ExplainedNumber(1f);
      if (hero.GetPerkValue(DefaultPerks.Crafting.CuriousSmith))
        explainedNumber.AddFactor(DefaultPerks.Crafting.CuriousSmith.PrimaryBonus);
      if (isFreeBuild)
        explainedNumber.AddFactor(0.1f);
      return 1 + MathF.Floor(0.1f * (float) item.Value * explainedNumber.ResultNumber);
    }
  }
}
