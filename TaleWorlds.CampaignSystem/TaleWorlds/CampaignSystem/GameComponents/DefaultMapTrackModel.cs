// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMapTrackModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMapTrackModel : MapTrackModel
  {
    private const float MinimumTrackSize = 0.1f;
    private const float MaximumTrackSize = 1f;
    private static TextObject _defaultTrackTitle = new TextObject("{=maptrack}Track");

    public override float MaxTrackLife => 28f;

    public override float GetMaxTrackSpottingDistanceForMainParty()
    {
      ExplainedNumber stat = new ExplainedNumber();
      SkillHelper.AddSkillBonusForParty(DefaultSkills.Scouting, DefaultSkillEffects.TrackingRadius, MobileParty.MainParty, ref stat);
      PerkHelper.AddPerkBonusForParty(DefaultPerks.Scouting.Ranger, MobileParty.MainParty, true, ref stat);
      return stat.ResultNumber;
    }

    public override bool CanPartyLeaveTrack(MobileParty mobileParty)
    {
      if (mobileParty.SiegeEvent != null || mobileParty.MapEvent != null || mobileParty.IsGarrison || mobileParty.IsMilitia || mobileParty.IsBanditBossParty || mobileParty.IsMainParty)
        return false;
      return mobileParty.Army == null || mobileParty.Army.LeaderParty == mobileParty;
    }

    public override int GetTrackLife(MobileParty mobileParty)
    {
      bool flag = Campaign.Current.MapSceneWrapper.GetFaceTerrainType(mobileParty.CurrentNavigationFace) == TerrainType.Snow;
      float num = MathF.Min(1f, (float) ((0.5 * (double) MBRandom.RandomFloat + 0.5 + (double) (mobileParty.MemberRoster.TotalManCount + mobileParty.PrisonRoster.TotalManCount) * 0.0070000002160668373) / 2.0)) * (flag ? 0.5f : 1f);
      if (MobileParty.MainParty.HasPerk(DefaultPerks.Scouting.Tracker))
        num = MathF.Min(1f, num * (1f + DefaultPerks.Scouting.Tracker.PrimaryBonus));
      return MathF.Round(Campaign.Current.Models.MapTrackModel.MaxTrackLife * num);
    }

    public override float GetTrackDetectionDifficultyForMainParty(
      Track track,
      float trackSpottingDistance)
    {
      int size = track.Size;
      float difficultyForMainParty = (float) ((double) track.CreationTime.ElapsedHoursUntilNow / (double) this.MaxTrackLife * 100.0 - 75.0 + (double) ((track.Position - MobileParty.MainParty.Position2D).Length / trackSpottingDistance) * 100.0 + (double) MathF.Max(0.0f, 100f - (float) size) * (CampaignTime.Now.IsNightTime ? 10.0 : 1.0));
      if (MobileParty.MainParty.HasPerk(DefaultPerks.Scouting.Ranger, true))
        difficultyForMainParty -= difficultyForMainParty * DefaultPerks.Scouting.Ranger.SecondaryBonus;
      return difficultyForMainParty;
    }

    public override float GetSkillFromTrackDetected(Track track)
    {
      float fromTrackDetected = (float) (0.20000000298023224 * (1.0 + (double) track.CreationTime.ElapsedHoursUntilNow) * (1.0 + 0.019999999552965164 * (double) MathF.Max(0.0f, 100f - (float) track.NumberOfAllMembers)));
      if (track.IsEnemy)
        fromTrackDetected *= track.PartyType == Track.PartyTypeEnum.Lord ? 10f : (track.PartyType == Track.PartyTypeEnum.Bandit ? 4f : (track.PartyType == Track.PartyTypeEnum.Caravan ? 3f : 2f));
      return fromTrackDetected;
    }

    public override float GetSkipTrackChance(MobileParty mobileParty)
    {
      return MathF.Max((float) (0.5 - (double) (mobileParty.MemberRoster.TotalManCount + mobileParty.PrisonRoster.TotalManCount) * 0.0099999997764825821), 0.0f);
    }

    public override TextObject TrackTitle(Track track)
    {
      if (track.IsPointer)
        return track.PartyName;
      Hero effectiveScout = MobileParty.MainParty.EffectiveScout;
      return (effectiveScout != null ? (effectiveScout.GetSkillValue(DefaultSkills.Scouting) > 270 ? 1 : 0) : 0) == 0 ? DefaultMapTrackModel._defaultTrackTitle : track.PartyName;
    }

    private string UncertainifyNumber(float num, float baseNum, int skillLevel)
    {
      float num1 = baseNum * MathF.Max(0.0f, (float) (1.0 - (double) (skillLevel / 30) * 0.10000000149011612));
      float num2 = num - num % num1;
      float num3 = num2 + num1;
      return (double) num1 < 9.9999997473787516E-05 ? num.ToString() : num2.ToString("0.0") + "-" + num3.ToString("0.0");
    }

    private string UncertainifyNumber(int num, int baseNum, int skillLevel)
    {
      int num1 = MathF.Round((float) baseNum * MathF.Max(0.0f, (float) (1.0 - (double) (skillLevel / 30) * 0.10000000149011612)));
      if (num1 <= 1)
        return num.ToString();
      int num2 = num - num % num1;
      int num3 = num2 + num1;
      if (num2 == 0)
        num2 = 1;
      return num2 >= num3 ? num.ToString() : num2.ToString() + "-" + num3.ToString();
    }

    public override IEnumerable<(TextObject, string)> GetTrackDescription(Track track)
    {
      List<(TextObject, string)> trackDescription = new List<(TextObject, string)>();
      if (!track.IsPointer && track.IsAlive)
      {
        Hero effectiveScout = MobileParty.MainParty.EffectiveScout;
        int skillValue = effectiveScout != null ? effectiveScout.GetSkillValue(DefaultSkills.Scouting) : 0;
        if (skillValue >= 25)
        {
          int num = track.NumberOfAllMembers + track.NumberOfPrisoners;
          trackDescription.Add((new TextObject("{=rmydcPP3}Party Size:"), this.UncertainifyNumber(num, 10, skillValue)));
        }
        if (skillValue >= 50)
        {
          TextObject textObject = new TextObject("{=Lak0x7Sa}{HOURS} {?HOURS==1}hour{?}hours{\\?}");
          int variable = MathF.Ceiling(track.CreationTime.ElapsedHoursUntilNow);
          textObject.SetTextVariable("HOURS", variable);
          trackDescription.Add((new TextObject("{=0aU9dtvV}Time:"), textObject.ToString()));
        }
        if (skillValue >= 75)
          trackDescription.Add((new TextObject("{=PThYJE2U}Party Speed:"), this.UncertainifyNumber(MathF.Round(track.Speed, 2), 1f, skillValue)));
        if (skillValue >= 100)
          trackDescription.Add((new TextObject("{=ZULIWupm}Mounted Troops:"), this.UncertainifyNumber(track.NumberOfMenWithHorse, 10, skillValue)));
        if (skillValue >= 125 && skillValue < 250)
          trackDescription.Add((new TextObject("{=1pdBdqKn}Party Type:"), GameTexts.FindText("str_party_type", track.PartyType.ToString()).ToString()));
        if (skillValue >= 150)
          trackDescription.Add((new TextObject("{=pHrxeTdc}Prisoners:"), this.UncertainifyNumber(track.NumberOfPrisoners, 10, skillValue)));
        if (skillValue >= 175)
          trackDescription.Add((new TextObject("{=aa1yFm6q}Pack Animals:"), this.UncertainifyNumber(track.NumberOfPackAnimals, 10, skillValue)));
        if (skillValue >= 200)
        {
          TextObject textObject = track.IsEnemy ? GameTexts.FindText("str_yes") : GameTexts.FindText("str_no");
          trackDescription.Add((new TextObject("{=6REUNz1g}Enemy Party:"), textObject.ToString()));
        }
        if (skillValue >= 225)
          trackDescription.Add((new TextObject("{=dicpCcb2}Party Culture:"), track.Culture.Name.ToString()));
        if (skillValue >= 250)
          trackDescription.Add((new TextObject("{=BVIm1HPw}Party Name:"), track.PartyName.ToString()));
      }
      return (IEnumerable<(TextObject, string)>) trackDescription;
    }

    public override uint GetTrackColor(Track track)
    {
      if (track.IsPointer)
        return new Vec3(1f, 1f, 1f).ToARGB;
      Vec3 vec3_1 = new Vec3(0.6f, 0.95f, 0.2f);
      Vec3 vec3_2 = new Vec3(0.45f, 0.55f, 0.2f);
      Vec3 vec3_3 = new Vec3(0.15f, 0.25f, 0.4f);
      Vec3 zero = Vec3.Zero;
      if (track.IsEnemy)
      {
        Hero effectiveScout = MobileParty.MainParty.EffectiveScout;
        if ((effectiveScout != null ? (effectiveScout.GetSkillValue(DefaultSkills.Scouting) > 240 ? 1 : 0) : 0) != 0)
        {
          vec3_1 = new Vec3(0.99f, 0.5f, 0.1f);
          vec3_2 = new Vec3(0.75f, 0.4f, 0.3f);
          vec3_3 = new Vec3(0.5f, 0.1f, 0.4f);
        }
      }
      float num1 = MathF.Min(track.CreationTime.ElapsedHoursUntilNow / Campaign.Current.Models.MapTrackModel.MaxTrackLife, 1f);
      Vec3 vec3_4;
      if ((double) num1 < 0.34999999403953552)
      {
        float num2 = num1 / 0.35f;
        vec3_4 = num2 * vec3_2 + (1f - num2) * vec3_1;
      }
      else
      {
        float num3 = (num1 - 0.35f) / 0.65f;
        vec3_4 = num3 * vec3_3 + (1f - num3) * vec3_2;
      }
      return vec3_4.ToARGB;
    }

    public override float GetTrackScale(Track track)
    {
      return track.IsPointer ? 1f : MathF.Min(1f, (float) (0.10000000149011612 + 1.0 / 1000.0 * (double) (track.NumberOfAllMembers + track.NumberOfPrisoners)));
    }
  }
}
