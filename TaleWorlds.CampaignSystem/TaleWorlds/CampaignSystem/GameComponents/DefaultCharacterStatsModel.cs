// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultCharacterStatsModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultCharacterStatsModel : CharacterStatsModel
  {
    public override int MaxCharacterTier => 6;

    public override int GetTier(CharacterObject character)
    {
      return character.IsHero ? 0 : MathF.Min(MathF.Max(MathF.Ceiling((float) (((double) character.Level - 5.0) / 5.0)), 0), Campaign.Current.Models.CharacterStatsModel.MaxCharacterTier);
    }

    public override ExplainedNumber MaxHitpoints(
      CharacterObject character,
      bool includeDescriptions = false)
    {
      ExplainedNumber bonuses = new ExplainedNumber(100f, includeDescriptions);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.Trainer, character, true, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.OneHanded.UnwaveringDefense, character, true, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.TwoHanded.ThickHides, character, true, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Athletics.WellBuilt, character, true, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Medicine.PreventiveMedicine, character, true, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Medicine.DoctorsOath, character, false, ref bonuses);
      PerkHelper.AddPerkBonusForCharacter(DefaultPerks.Medicine.FortitudeTonic, character, false, ref bonuses);
      if (character.IsHero && character.HeroObject.PartyBelongedTo != null && character.HeroObject.PartyBelongedTo.LeaderHero != character.HeroObject && character.HeroObject.PartyBelongedTo.HasPerk(DefaultPerks.Medicine.FortitudeTonic))
        bonuses.Add(DefaultPerks.Medicine.FortitudeTonic.PrimaryBonus, DefaultPerks.Medicine.FortitudeTonic.Name);
      if (character.GetPerkValue(DefaultPerks.Athletics.MightyBlow))
      {
        int num = character.GetSkillValue(DefaultSkills.Athletics) - Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus;
        bonuses.Add((float) num, DefaultPerks.Athletics.MightyBlow.Name);
      }
      return bonuses;
    }
  }
}
