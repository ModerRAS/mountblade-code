// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMapVisibilityModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMapVisibilityModel : MapVisibilityModel
  {
    private const float PartySpottingDifficultyInForests = 0.3f;

    public override ExplainedNumber GetPartySpottingRange(
      MobileParty party,
      bool includeDescriptions = false)
    {
      ExplainedNumber stat = new ExplainedNumber(Campaign.Current.IsNight ? 6f : 12f, includeDescriptions);
      TerrainType faceTerrainType = Campaign.Current.MapSceneWrapper.GetFaceTerrainType(party.CurrentNavigationFace);
      SkillHelper.AddSkillBonusForParty(DefaultSkills.Scouting, DefaultSkillEffects.TrackingSpottingDistance, party, ref stat);
      PerkHelper.AddPerkBonusForParty(DefaultPerks.Bow.EagleEye, party, false, ref stat);
      Hero effectiveScout = party.EffectiveScout;
      if (effectiveScout != null)
      {
        if ((faceTerrainType == TerrainType.Plain || faceTerrainType == TerrainType.Steppe) && effectiveScout.GetPerkValue(DefaultPerks.Scouting.WaterDiviner))
          stat.AddFactor(DefaultPerks.Scouting.WaterDiviner.PrimaryBonus, DefaultPerks.Scouting.WaterDiviner.Name);
        else if (faceTerrainType == TerrainType.Forest && PartyBaseHelper.HasFeat(party.Party, DefaultCulturalFeats.BattanianForestSpeedFeat))
          stat.AddFactor(0.15f, GameTexts.FindText("str_culture"));
        if (Campaign.Current.IsNight && effectiveScout.GetPerkValue(DefaultPerks.Scouting.NightRunner))
          stat.AddFactor(DefaultPerks.Scouting.NightRunner.SecondaryBonus, DefaultPerks.Scouting.NightRunner.Name);
        else if (effectiveScout.GetPerkValue(DefaultPerks.Scouting.DayTraveler))
          stat.AddFactor(DefaultPerks.Scouting.DayTraveler.SecondaryBonus, DefaultPerks.Scouting.DayTraveler.Name);
        if (!party.IsMoving && (double) party.StationaryStartTime.ElapsedHoursUntilNow >= 1.0 && effectiveScout.GetPerkValue(DefaultPerks.Scouting.VantagePoint))
          stat.AddFactor(DefaultPerks.Scouting.VantagePoint.PrimaryBonus, DefaultPerks.Scouting.VantagePoint.Name);
        if (effectiveScout.GetPerkValue(DefaultPerks.Scouting.MountedScouts))
        {
          float num = 0.0f;
          for (int index = 0; index < party.MemberRoster.Count; ++index)
          {
            if (party.MemberRoster.GetCharacterAtIndex(index).DefaultFormationClass.Equals((object) FormationClass.Cavalry))
              num += (float) party.MemberRoster.GetElementNumber(index);
          }
          if ((double) num / (double) party.MemberRoster.TotalManCount >= 0.5)
            stat.AddFactor(DefaultPerks.Scouting.MountedScouts.PrimaryBonus, DefaultPerks.Scouting.MountedScouts.Name);
        }
      }
      return stat;
    }

    public override float GetPartyRelativeInspectionRange(IMapPoint party) => 0.5f;

    public override float GetPartySpottingDifficulty(MobileParty spottingParty, MobileParty party)
    {
      float num1 = 1f;
      if (party != null && spottingParty != null && Campaign.Current.MapSceneWrapper.GetFaceTerrainType(party.CurrentNavigationFace) == TerrainType.Forest)
      {
        float num2 = 0.3f;
        if (spottingParty.HasPerk(DefaultPerks.Scouting.KeenSight))
          num2 += num2 * DefaultPerks.Scouting.KeenSight.PrimaryBonus;
        num1 += num2;
      }
      return (float) (1.0 / (double) MathF.Pow((float) (party.Party.NumberOfAllMembers + party.Party.NumberOfPrisoners + 2) * 0.2f, 0.6f) + 0.93999999761581421) * num1;
    }

    public override float GetHideoutSpottingDistance()
    {
      return MobileParty.MainParty.HasPerk(DefaultPerks.Scouting.RumourNetwork, true) ? (float) ((double) MobileParty.MainParty.SeeingRange * 1.2000000476837158 * (1.0 + (double) DefaultPerks.Scouting.RumourNetwork.SecondaryBonus)) : MobileParty.MainParty.SeeingRange * 1.2f;
    }
  }
}
