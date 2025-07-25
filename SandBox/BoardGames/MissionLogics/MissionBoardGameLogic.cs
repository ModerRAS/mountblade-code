// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.MissionLogics.MissionBoardGameLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.AI;
using SandBox.Conversation;
using SandBox.Conversation.MissionLogics;
using SandBox.Objects.Usables;
using SandBox.Source.Missions.AgentBehaviors;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.Source.Missions.Handlers;

#nullable disable
namespace SandBox.BoardGames.MissionLogics
{
  public class MissionBoardGameLogic : MissionLogic
  {
    private const string BoardGameEntityTag = "boardgame";
    private const string SpecialTargetGamblerNpcTag = "gambler_npc";
    public IBoardGameHandler Handler;
    private PlayerTurn _startingPlayer = PlayerTurn.PlayerTwo;
    private Chair _playerChair;
    private Chair _opposingChair;
    private string _specialTagCacheOfOpposingHero;
    private bool _isTavernGame;
    private bool _startingBoardGame;
    private BoardGameHelper.BoardGameState _boardGameState;

    public event Action GameStarted;

    public event Action GameEnded;

    public BoardGameBase Board { get; private set; }

    public BoardGameAIBase AIOpponent { get; private set; }

    public bool IsOpposingAgentMovingToPlayingChair
    {
      get => BoardGameAgentBehavior.IsAgentMovingToChair(this.OpposingAgent);
    }

    public bool IsGameInProgress { get; private set; }

    public BoardGameHelper.BoardGameState BoardGameFinalState => this._boardGameState;

    public CultureObject.BoardGameType CurrentBoardGame { get; private set; }

    public BoardGameHelper.AIDifficulty Difficulty { get; private set; }

    public int BetAmount { get; private set; }

    public Agent OpposingAgent { get; private set; }

    public override void AfterStart()
    {
      base.AfterStart();
      this._opposingChair = this.Mission.Scene.FindEntityWithTag("gambler_npc").CollectObjects<Chair>().FirstOrDefault<Chair>();
      this._playerChair = this.Mission.Scene.FindEntityWithTag("gambler_player").CollectObjects<Chair>().FirstOrDefault<Chair>();
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this._opposingChair.StandingPoints)
        standingPoint.IsDisabledForPlayers = true;
    }

    public void SetStartingPlayer(bool playerOneStarts)
    {
      this._startingPlayer = playerOneStarts ? PlayerTurn.PlayerOne : PlayerTurn.PlayerTwo;
    }

    public void StartBoardGame() => this._startingBoardGame = true;

    private void BoardGameInit(CultureObject.BoardGameType game)
    {
      if (this.Board == null)
      {
        switch (game)
        {
          case CultureObject.BoardGameType.Seega:
            this.Board = (BoardGameBase) new BoardGameSeega(this, this._startingPlayer);
            this.AIOpponent = (BoardGameAIBase) new BoardGameAISeega(this.Difficulty, this);
            break;
          case CultureObject.BoardGameType.Puluc:
            this.Board = (BoardGameBase) new BoardGamePuluc(this, this._startingPlayer);
            this.AIOpponent = (BoardGameAIBase) new BoardGameAIPuluc(this.Difficulty, this);
            break;
          case CultureObject.BoardGameType.Konane:
            this.Board = (BoardGameBase) new BoardGameKonane(this, this._startingPlayer);
            this.AIOpponent = (BoardGameAIBase) new BoardGameAIKonane(this.Difficulty, this);
            break;
          case CultureObject.BoardGameType.MuTorere:
            this.Board = (BoardGameBase) new BoardGameMuTorere(this, this._startingPlayer);
            this.AIOpponent = (BoardGameAIBase) new BoardGameAIMuTorere(this.Difficulty, this);
            break;
          case CultureObject.BoardGameType.Tablut:
            this.Board = (BoardGameBase) new BoardGameTablut(this, this._startingPlayer);
            this.AIOpponent = (BoardGameAIBase) new BoardGameAITablut(this.Difficulty, this);
            break;
          case CultureObject.BoardGameType.BaghChal:
            this.Board = (BoardGameBase) new BoardGameBaghChal(this, this._startingPlayer);
            this.AIOpponent = (BoardGameAIBase) new BoardGameAIBaghChal(this.Difficulty, this);
            break;
          default:
            Debug.FailedAssert("[DEBUG]No board with this name was found.", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\MissionLogics\\MissionBoardGameLogic.cs", nameof (BoardGameInit), 122);
            break;
        }
        this.Board.Initialize();
        if (this.AIOpponent != null)
          this.AIOpponent.Initialize();
      }
      else
      {
        this.Board.SetStartingPlayer(this._startingPlayer);
        this.Board.InitializeUnits();
        this.Board.InitializeCapturedUnitsZones();
        this.Board.Reset();
        if (this.AIOpponent != null)
        {
          this.AIOpponent.SetDifficulty(this.Difficulty);
          this.AIOpponent.Initialize();
        }
      }
      if (this.Handler != null)
        this.Handler.Install();
      this._boardGameState = BoardGameHelper.BoardGameState.None;
      this.IsGameInProgress = true;
      this._isTavernGame = CampaignMission.Current.Location == Settlement.CurrentSettlement.LocationComplex.GetLocationWithId("tavern");
    }

    public override void OnMissionTick(float dt)
    {
      if (this.Mission.IsInPhotoMode)
        return;
      if (this._startingBoardGame)
      {
        this._startingBoardGame = false;
        this.BoardGameInit(this.CurrentBoardGame);
        Action gameStarted = this.GameStarted;
        if (gameStarted == null)
          return;
        gameStarted();
      }
      else if (this.IsGameInProgress)
      {
        this.Board.Tick(dt);
      }
      else
      {
        if (this.OpposingAgent == null || !this.OpposingAgent.IsHero || Hero.OneToOneConversationHero != null || !this.CheckIfBothSidesAreSitting())
          return;
        this.StartBoardGame();
      }
    }

    public void DetectOpposingAgent()
    {
      foreach (Agent agent in (List<Agent>) Mission.Current.Agents)
      {
        if (agent == ConversationMission.OneToOneConversationAgent)
        {
          this.OpposingAgent = agent;
          if (agent.IsHero)
            BoardGameAgentBehavior.AddTargetChair(this.OpposingAgent, this._opposingChair);
          AgentNavigator agentNavigator = this.OpposingAgent.GetComponent<CampaignAgentComponent>().AgentNavigator;
          this._specialTagCacheOfOpposingHero = agentNavigator.SpecialTargetTag;
          agentNavigator.SpecialTargetTag = "gambler_npc";
          break;
        }
      }
    }

    public bool CheckIfBothSidesAreSitting()
    {
      return Agent.Main != null && this.OpposingAgent != null && this._playerChair.IsAgentFullySitting(Agent.Main) && this._opposingChair.IsAgentFullySitting(this.OpposingAgent);
    }

    public void PlayerOneWon(string message = "str_boardgame_victory_message")
    {
      Agent opposingAgent = this.OpposingAgent;
      this.SetGameOver(GameOverEnum.PlayerOneWon);
      this.ShowInquiry(message, opposingAgent);
    }

    public void PlayerTwoWon(string message = "str_boardgame_defeat_message")
    {
      Agent opposingAgent = this.OpposingAgent;
      this.SetGameOver(GameOverEnum.PlayerTwoWon);
      this.ShowInquiry(message, opposingAgent);
    }

    public void GameWasDraw(string message = "str_boardgame_draw_message")
    {
      Agent opposingAgent = this.OpposingAgent;
      this.SetGameOver(GameOverEnum.Draw);
      this.ShowInquiry(message, opposingAgent);
    }

    private void ShowInquiry(string message, Agent conversationAgent)
    {
      InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_boardgame").ToString(), GameTexts.FindText(message).ToString(), true, false, GameTexts.FindText("str_ok").ToString(), "", (Action) (() => this.StartConversationWithOpponentAfterGameEnd(conversationAgent)), (Action) null));
    }

    private void StartConversationWithOpponentAfterGameEnd(Agent conversationAgent)
    {
      MissionConversationLogic.Current.StartConversation(conversationAgent, false);
      this._boardGameState = BoardGameHelper.BoardGameState.None;
    }

    public void SetGameOver(GameOverEnum gameOverInfo)
    {
      this.Mission.MainAgent.ClearTargetFrame();
      if (this.Handler != null && gameOverInfo != GameOverEnum.PlayerCanceledTheGame)
        this.Handler.Uninstall();
      Hero heroObject = this.OpposingAgent.IsHero ? ((CharacterObject) this.OpposingAgent.Character).HeroObject : (Hero) null;
      switch (gameOverInfo)
      {
        case GameOverEnum.PlayerOneWon:
          this._boardGameState = BoardGameHelper.BoardGameState.Win;
          break;
        case GameOverEnum.PlayerTwoWon:
          this._boardGameState = BoardGameHelper.BoardGameState.Loss;
          break;
        case GameOverEnum.Draw:
          this._boardGameState = BoardGameHelper.BoardGameState.Draw;
          break;
        case GameOverEnum.PlayerCanceledTheGame:
          this._boardGameState = BoardGameHelper.BoardGameState.None;
          break;
      }
      if (gameOverInfo != GameOverEnum.PlayerCanceledTheGame)
        CampaignEventDispatcher.Instance.OnPlayerBoardGameOver(heroObject, this._boardGameState);
      Action gameEnded = this.GameEnded;
      if (gameEnded != null)
        gameEnded();
      BoardGameAgentBehavior.RemoveBoardGameBehaviorOfAgent(this.OpposingAgent);
      this.OpposingAgent.GetComponent<CampaignAgentComponent>().AgentNavigator.SpecialTargetTag = this._specialTagCacheOfOpposingHero;
      this.OpposingAgent = (Agent) null;
      this.IsGameInProgress = false;
      this.AIOpponent?.OnSetGameOver();
    }

    public void ForfeitGame()
    {
      this.Board.SetGameOverInfo(GameOverEnum.PlayerTwoWon);
      Agent opposingAgent = this.OpposingAgent;
      this.SetGameOver(this.Board.GameOverInfo);
      this.StartConversationWithOpponentAfterGameEnd(opposingAgent);
    }

    public void AIForfeitGame()
    {
      this.Board.SetGameOverInfo(GameOverEnum.PlayerOneWon);
      this.SetGameOver(this.Board.GameOverInfo);
    }

    public void RollDice() => this.Board.RollDice();

    public bool RequiresDiceRolling()
    {
      switch (this.CurrentBoardGame)
      {
        case CultureObject.BoardGameType.Seega:
          return false;
        case CultureObject.BoardGameType.Puluc:
          return true;
        case CultureObject.BoardGameType.Konane:
          return false;
        case CultureObject.BoardGameType.MuTorere:
          return false;
        case CultureObject.BoardGameType.Tablut:
          return false;
        case CultureObject.BoardGameType.BaghChal:
          return false;
        default:
          return false;
      }
    }

    public void SetBetAmount(int bet) => this.BetAmount = bet;

    public void SetCurrentDifficulty(BoardGameHelper.AIDifficulty difficulty)
    {
      this.Difficulty = difficulty;
    }

    public void SetBoardGame(CultureObject.BoardGameType game) => this.CurrentBoardGame = game;

    public override InquiryData OnEndMissionRequest(out bool canLeave)
    {
      canLeave = true;
      return (InquiryData) null;
    }

    public static bool IsBoardGameAvailable()
    {
      MissionBoardGameLogic missionBehavior = Mission.Current?.GetMissionBehavior<MissionBoardGameLogic>();
      return (NativeObject) Mission.Current?.Scene != (NativeObject) null && missionBehavior != null && (NativeObject) Mission.Current.Scene.FindEntityWithTag("boardgame") != (NativeObject) null && missionBehavior.OpposingAgent == null;
    }

    public static bool IsThereActiveBoardGameWithHero(Hero hero)
    {
      MissionBoardGameLogic missionBehavior = Mission.Current?.GetMissionBehavior<MissionBoardGameLogic>();
      return (NativeObject) Mission.Current?.Scene != (NativeObject) null && (NativeObject) Mission.Current.Scene.FindEntityWithTag("boardgame") != (NativeObject) null && missionBehavior != null && missionBehavior.OpposingAgent?.Character == hero.CharacterObject;
    }
  }
}
