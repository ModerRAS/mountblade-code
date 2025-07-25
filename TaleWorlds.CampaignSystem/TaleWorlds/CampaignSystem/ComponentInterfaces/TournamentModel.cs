// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.TournamentModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class TournamentModel : GameModel
  {
    public abstract float GetTournamentStartChance(Town town);

    public abstract TournamentGame CreateTournament(Town town);

    public abstract float GetTournamentEndChance(TournamentGame tournament);

    public abstract int GetNumLeaderboardVictoriesAtGameStart();

    public abstract float GetTournamentSimulationScore(CharacterObject character);

    public abstract int GetRenownReward(Hero winner, Town town);

    public abstract int GetInfluenceReward(Hero winner, Town town);

    public abstract (SkillObject skill, int xp) GetSkillXpGainFromTournament(Town town);

    public abstract Equipment GetParticipantArmor(CharacterObject participant);
  }
}
