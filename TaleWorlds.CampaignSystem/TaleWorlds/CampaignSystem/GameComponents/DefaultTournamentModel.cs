// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultTournamentModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultTournamentModel : TournamentModel
  {
    public override TournamentGame CreateTournament(Town town)
    {
      return (TournamentGame) new FightTournamentGame(town);
    }

    public override float GetTournamentStartChance(Town town)
    {
      return town.Settlement.SiegeEvent != null || Math.Abs(town.StringId.GetHashCode() % 3) != CampaignTime.Now.GetWeekOfSeason ? 0.0f : (float) (0.10000000149011612 * (double) (town.Settlement.Parties.Count<MobileParty>((Func<MobileParty, bool>) (x => x.IsLordParty)) + town.Settlement.HeroesWithoutParty.Count<Hero>((Func<Hero, bool>) (x => this.SuitableForTournament(x)))) - 0.20000000298023224);
    }

    public override int GetNumLeaderboardVictoriesAtGameStart() => 500;

    public override float GetTournamentEndChance(TournamentGame tournament)
    {
      return MathF.Max(0.0f, (float) (((double) tournament.CreationTime.ElapsedDaysUntilNow - 10.0) * 0.05000000074505806));
    }

    private bool SuitableForTournament(Hero hero)
    {
      return (double) hero.Age >= 18.0 && MathF.Max(hero.GetSkillValue(DefaultSkills.OneHanded), hero.GetSkillValue(DefaultSkills.TwoHanded)) > 100;
    }

    public override float GetTournamentSimulationScore(CharacterObject character)
    {
      return (float) ((character.IsHero ? 1.0 : 0.40000000596046448) * ((double) MathF.Max((float) character.GetSkillValue(DefaultSkills.OneHanded), (float) character.GetSkillValue(DefaultSkills.TwoHanded), (float) character.GetSkillValue(DefaultSkills.Polearm)) + (double) character.GetSkillValue(DefaultSkills.Athletics) + (double) character.GetSkillValue(DefaultSkills.Riding)) * 0.0099999997764825821);
    }

    public override int GetRenownReward(Hero winner, Town town)
    {
      float f = 3f;
      if (winner.GetPerkValue(DefaultPerks.OneHanded.Duelist))
        f *= DefaultPerks.OneHanded.Duelist.SecondaryBonus;
      if (winner.GetPerkValue(DefaultPerks.Charm.SelfPromoter))
        f += DefaultPerks.Charm.SelfPromoter.PrimaryBonus;
      return MathF.Round(f);
    }

    public override int GetInfluenceReward(Hero winner, Town town) => 0;

    public override (SkillObject skill, int xp) GetSkillXpGainFromTournament(Town town)
    {
      float randomFloat = MBRandom.RandomFloat;
      return ((double) randomFloat < 0.20000000298023224 ? DefaultSkills.OneHanded : ((double) randomFloat < 0.40000000596046448 ? DefaultSkills.TwoHanded : ((double) randomFloat < 0.60000002384185791 ? DefaultSkills.Polearm : ((double) randomFloat < 0.800000011920929 ? DefaultSkills.Riding : DefaultSkills.Athletics))), 500);
    }

    public override Equipment GetParticipantArmor(CharacterObject participant)
    {
      return CampaignMission.Current != null && CampaignMission.Current.Mode != MissionMode.Tournament && Settlement.CurrentSettlement != null ? (Game.Current.ObjectManager.GetObject<CharacterObject>("gear_practice_dummy_" + Settlement.CurrentSettlement.MapFaction.Culture.StringId) ?? Game.Current.ObjectManager.GetObject<CharacterObject>("gear_practice_dummy_empire")).RandomBattleEquipment : participant.RandomBattleEquipment;
    }
  }
}
