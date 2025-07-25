// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.MissionLogics.TournamentBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.TournamentGames;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.MissionLogics
{
  public class TournamentBehavior : MissionLogic, ICameraModeLogic
  {
    public const int RoundCount = 4;
    public const int ParticipantCount = 16;
    public const float EndMatchTimerDuration = 6f;
    public const float CheerTimerDuration = 1f;
    private TournamentGame _tournamentGame;
    private ITournamentGameBehavior _gameBehavior;
    private TournamentParticipant[] _participants;
    private const int MaximumBet = 150;
    public const float MaximumOdd = 4f;

    public TournamentGame TournamentGame => this._tournamentGame;

    public TournamentRound[] Rounds { get; private set; }

    public SpectatorCameraTypes GetMissionCameraLockMode(bool lockedToMainPlayer)
    {
      return !this.IsPlayerParticipating ? SpectatorCameraTypes.LockToAnyAgent : SpectatorCameraTypes.Invalid;
    }

    public bool IsPlayerEliminated { get; private set; }

    public int CurrentRoundIndex { get; private set; }

    public TournamentMatch LastMatch { get; private set; }

    public TournamentRound CurrentRound => this.Rounds[this.CurrentRoundIndex];

    public TournamentRound NextRound
    {
      get
      {
        return this.CurrentRoundIndex != 3 ? this.Rounds[this.CurrentRoundIndex + 1] : (TournamentRound) null;
      }
    }

    public TournamentMatch CurrentMatch => this.CurrentRound.CurrentMatch;

    public TournamentParticipant Winner { get; private set; }

    public bool IsPlayerParticipating { get; private set; }

    public Settlement Settlement { get; private set; }

    public TournamentBehavior(
      TournamentGame tournamentGame,
      Settlement settlement,
      ITournamentGameBehavior gameBehavior,
      bool isPlayerParticipating)
    {
      this.Settlement = settlement;
      this._tournamentGame = tournamentGame;
      this._gameBehavior = gameBehavior;
      this.Rounds = new TournamentRound[4];
      this.CreateParticipants(isPlayerParticipating);
      this.CurrentRoundIndex = -1;
      this.LastMatch = (TournamentMatch) null;
      this.Winner = (TournamentParticipant) null;
      this.IsPlayerParticipating = isPlayerParticipating;
    }

    public MBList<CharacterObject> GetAllPossibleParticipants()
    {
      return this._tournamentGame.GetParticipantCharacters(this.Settlement);
    }

    private void CreateParticipants(bool includePlayer)
    {
      this._participants = new TournamentParticipant[this._tournamentGame.MaximumParticipantCount];
      MBList<CharacterObject> participantCharacters = this._tournamentGame.GetParticipantCharacters(this.Settlement, includePlayer);
      participantCharacters.Shuffle<CharacterObject>();
      for (int index = 0; index < participantCharacters.Count && index < this._tournamentGame.MaximumParticipantCount; ++index)
        this._participants[index] = new TournamentParticipant(participantCharacters[index]);
    }

    public static void DeleteTournamentSetsExcept(GameEntity selectedSetEntity)
    {
      List<GameEntity> list = Mission.Current.Scene.FindEntitiesWithTag("arena_set").ToList<GameEntity>();
      list.Remove(selectedSetEntity);
      foreach (GameEntity gameEntity in list)
        gameEntity.Remove(93);
    }

    public static void DeleteAllTournamentSets()
    {
      foreach (GameEntity gameEntity in Mission.Current.Scene.FindEntitiesWithTag("arena_set").ToList<GameEntity>())
        gameEntity.Remove(94);
    }

    public override void AfterStart()
    {
      this.CurrentRoundIndex = 0;
      this.CreateTournamentTree();
      this.FillParticipants(((IEnumerable<TournamentParticipant>) this._participants).ToList<TournamentParticipant>());
      this.CalculateBet();
    }

    public override void OnMissionTick(float dt)
    {
      if (this.CurrentMatch == null || this.CurrentMatch.State != TournamentMatch.MatchState.Started || !this._gameBehavior.IsMatchEnded())
        return;
      this.EndCurrentMatch(false);
    }

    public void StartMatch()
    {
      if (this.CurrentMatch.IsPlayerParticipating())
        Campaign.Current.TournamentManager.OnPlayerJoinMatch(this._tournamentGame.GetType());
      this.CurrentMatch.Start();
      this.Mission.SetMissionMode(MissionMode.Tournament, true);
      this._gameBehavior.StartMatch(this.CurrentMatch, this.NextRound == null);
      CampaignEventDispatcher.Instance.OnPlayerStartedTournamentMatch(this.Settlement.Town);
    }

    public void SkipMatch(bool isLeave = false)
    {
      this.CurrentMatch.Start();
      this._gameBehavior.SkipMatch(this.CurrentMatch);
      this.EndCurrentMatch(isLeave);
    }

    private void EndCurrentMatch(bool isLeave)
    {
      this.LastMatch = this.CurrentMatch;
      this.CurrentRound.EndMatch();
      this._gameBehavior.OnMatchEnded();
      if (this.LastMatch.IsPlayerParticipating())
      {
        if (this.LastMatch.Winners.All<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Character != CharacterObject.PlayerCharacter)))
          this.OnPlayerEliminated();
        else
          this.OnPlayerWinMatch();
      }
      if (this.NextRound != null)
      {
        while (this.LastMatch.Winners.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => !x.IsAssigned)))
        {
          foreach (TournamentParticipant winner in this.LastMatch.Winners)
          {
            if (!winner.IsAssigned)
            {
              this.NextRound.AddParticipant(winner);
              winner.IsAssigned = true;
            }
          }
        }
      }
      if (this.CurrentRound.CurrentMatch != null)
        return;
      if (this.CurrentRoundIndex < 3)
      {
        ++this.CurrentRoundIndex;
        this.CalculateBet();
        MissionGameModels.Current?.AgentStatCalculateModel?.SetAILevelMultiplier((float) (1.0 + (double) this.CurrentRoundIndex / 3.0));
      }
      else
      {
        MissionGameModels.Current?.AgentStatCalculateModel?.ResetAILevelMultiplier();
        this.CalculateBet();
        MBInformationManager.AddQuickInformation(new TextObject("{=tWzLqegB}Tournament is over."));
        this.Winner = this.LastMatch.Winners.FirstOrDefault<TournamentParticipant>();
        if (this.Winner.Character.IsHero)
        {
          if (this.Winner.Character == CharacterObject.PlayerCharacter)
            this.OnPlayerWinTournament();
          Campaign.Current.TournamentManager.GivePrizeToWinner(this._tournamentGame, this.Winner.Character.HeroObject, true);
          Campaign.Current.TournamentManager.AddLeaderboardEntry(this.Winner.Character.HeroObject);
        }
        MBList<CharacterObject> participants = new MBList<CharacterObject>(this._participants.Length);
        foreach (TournamentParticipant participant in this._participants)
          participants.Add(participant.Character);
        CampaignEventDispatcher.Instance.OnTournamentFinished(this.Winner.Character, (MBReadOnlyList<CharacterObject>) participants, this.Settlement.Town, this._tournamentGame.Prize);
        if (this.TournamentEnd == null || isLeave)
          return;
        this.TournamentEnd();
      }
    }

    public void EndTournamentViaLeave()
    {
      while (this.CurrentMatch != null)
        this.SkipMatch(true);
    }

    private void OnPlayerEliminated()
    {
      this.IsPlayerEliminated = true;
      this.BetOdd = 0.0f;
      if (this.BettedDenars > 0)
        GiveGoldAction.ApplyForCharacterToSettlement((Hero) null, Settlement.CurrentSettlement, this.BettedDenars);
      this.OverallExpectedDenars = 0;
      CampaignEventDispatcher.Instance.OnPlayerEliminatedFromTournament(this.CurrentRoundIndex, this.Settlement.Town);
    }

    private void OnPlayerWinMatch()
    {
      Campaign.Current.TournamentManager.OnPlayerWinMatch(this._tournamentGame.GetType());
    }

    private void OnPlayerWinTournament()
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign)
        return;
      if (Hero.MainHero.MapFaction.IsKingdomFaction && Hero.MainHero.MapFaction.Leader != Hero.MainHero)
        GainKingdomInfluenceAction.ApplyForDefault(Hero.MainHero, 1f);
      if (this.OverallExpectedDenars > 0)
        GiveGoldAction.ApplyBetweenCharacters((Hero) null, Hero.MainHero, this.OverallExpectedDenars);
      Campaign.Current.TournamentManager.OnPlayerWinTournament(this._tournamentGame.GetType());
    }

    private void CreateTournamentTree()
    {
      int num1 = 16;
      int b1 = (int) MathF.Log((float) this._tournamentGame.MaxTeamSize, 2f);
      for (int index = 0; index < 4; ++index)
      {
        int b2 = (int) MathF.Log((float) num1, 2f);
        int x1 = MBRandom.RandomInt(1, MathF.Min(MathF.Min(3, b2), this._tournamentGame.MaxTeamNumberPerMatch));
        int num2 = MathF.Ceiling(MathF.Log((float) (1 + MBRandom.RandomInt((int) MathF.Pow(2f, (float) MathF.Min(b2 - x1, b1)))), 2f));
        int x2 = b2 - (x1 + num2);
        this.Rounds[index] = new TournamentRound(num1, MathF.PowTwo32(x2), MathF.PowTwo32(x1), num1 / 2, this._tournamentGame.Mode);
        num1 /= 2;
      }
    }

    private void FillParticipants(List<TournamentParticipant> participants)
    {
      foreach (TournamentParticipant participant in participants)
        this.Rounds[this.CurrentRoundIndex].AddParticipant(participant, true);
    }

    public override InquiryData OnEndMissionRequest(out bool canPlayerLeave)
    {
      canPlayerLeave = false;
      return (InquiryData) null;
    }

    public float BetOdd { get; private set; }

    public int MaximumBetInstance => MathF.Min(150, this.PlayerDenars);

    public int BettedDenars { get; private set; }

    public int OverallExpectedDenars { get; private set; }

    public int PlayerDenars => Hero.MainHero.Gold;

    public void PlaceABet(int bet)
    {
      this.BettedDenars += bet;
      this.OverallExpectedDenars += this.GetExpectedDenarsForBet(bet);
      GiveGoldAction.ApplyBetweenCharacters(Hero.MainHero, (Hero) null, bet, true);
    }

    public int GetExpectedDenarsForBet(int bet) => (int) ((double) this.BetOdd * (double) bet);

    public int GetMaximumBet()
    {
      int maximumBet = 150;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Roguery.DeepPockets))
        maximumBet *= (int) DefaultPerks.Roguery.DeepPockets.PrimaryBonus;
      return maximumBet;
    }

    private void CalculateBet()
    {
      if (!this.IsPlayerParticipating)
        return;
      if (this.CurrentRound.CurrentMatch == null)
        this.BetOdd = 0.0f;
      else if (this.IsPlayerEliminated || !this.IsPlayerParticipating)
      {
        this.OverallExpectedDenars = 0;
        this.BetOdd = 0.0f;
      }
      else
      {
        List<KeyValuePair<Hero, int>> leaderboard = Campaign.Current.TournamentManager.GetLeaderboard();
        int num1 = 0;
        int num2 = 0;
        for (int index = 0; index < leaderboard.Count; ++index)
        {
          if (leaderboard[index].Key == Hero.MainHero)
            num1 = leaderboard[index].Value;
          if (leaderboard[index].Value > num2)
            num2 = leaderboard[index].Value;
        }
        float num3 = 30f + (float) Hero.MainHero.Level + (float) MathF.Max(0, num1 * 12 - num2 * 2);
        float num4 = 0.0f;
        float num5 = 0.0f;
        float num6 = 0.0f;
        foreach (TournamentMatch match in this.CurrentRound.Matches)
        {
          foreach (TournamentTeam team1 in match.Teams)
          {
            float num7 = 0.0f;
            foreach (TournamentParticipant participant in team1.Participants)
            {
              if (participant.Character != CharacterObject.PlayerCharacter)
              {
                int num8 = 0;
                if (participant.Character.IsHero)
                {
                  for (int index = 0; index < leaderboard.Count; ++index)
                  {
                    if (leaderboard[index].Key == participant.Character.HeroObject)
                      num8 = leaderboard[index].Value;
                  }
                }
                num7 += (float) (participant.Character.Level + MathF.Max(0, num8 * 8 - num2 * 2));
              }
            }
            if (team1.Participants.Any<TournamentParticipant>((Func<TournamentParticipant, bool>) (x => x.Character == CharacterObject.PlayerCharacter)))
            {
              num5 = num7;
              foreach (TournamentTeam team2 in match.Teams)
              {
                if (team1 != team2)
                {
                  foreach (TournamentParticipant participant in team2.Participants)
                  {
                    int num9 = 0;
                    if (participant.Character.IsHero)
                    {
                      for (int index = 0; index < leaderboard.Count; ++index)
                      {
                        if (leaderboard[index].Key == participant.Character.HeroObject)
                          num9 = leaderboard[index].Value;
                      }
                    }
                    num6 += (float) (participant.Character.Level + MathF.Max(0, num9 * 8 - num2 * 2));
                  }
                }
              }
            }
            num4 += num7;
          }
        }
        this.BetOdd = (float) (int) ((double) MathF.Clamp(MathF.Pow(1f / ((float) (((double) num5 + (double) num3) / ((double) num6 + (double) num5 + (double) num3)) * (num3 / (float) ((double) num5 + (double) num3 + 0.5 * ((double) num4 - ((double) num5 + (double) num6))))), 0.75f), 1.1f, 4f) * 10.0) / 10f;
      }
    }

    public event Action TournamentEnd;
  }
}
