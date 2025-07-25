// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGameBase
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.AI;
using SandBox.BoardGames.MissionLogics;
using SandBox.BoardGames.Pawns;
using SandBox.BoardGames.Tiles;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.BoardGames
{
  public abstract class BoardGameBase
  {
    public const string StringBoardGame = "str_boardgame";
    public const string StringForfeitQuestion = "str_boardgame_forfeit_question";
    public const string StringMovePiecePlayer = "str_boardgame_move_piece_player";
    public const string StringMovePieceOpponent = "str_boardgame_move_piece_opponent";
    public const string StringCapturePiecePlayer = "str_boardgame_capture_piece_player";
    public const string StringCapturePieceOpponent = "str_boardgame_capture_piece_opponent";
    public const string StringVictoryMessage = "str_boardgame_victory_message";
    public const string StringDefeatMessage = "str_boardgame_defeat_message";
    public const string StringDrawMessage = "str_boardgame_draw_message";
    public const string StringNoAvailableMovesPlayer = "str_boardgame_no_available_moves_player";
    public const string StringNoAvailableMovesOpponent = "str_boardgame_no_available_moves_opponent";
    public const string StringSeegaBarrierByP1DrawMessage = "str_boardgame_seega_barrier_by_player_one_draw_message";
    public const string StringSeegaBarrierByP2DrawMessage = "str_boardgame_seega_barrier_by_player_two_draw_message";
    public const string StringSeegaBarrierByP1VictoryMessage = "str_boardgame_seega_barrier_by_player_one_victory_message";
    public const string StringSeegaBarrierByP2VictoryMessage = "str_boardgame_seega_barrier_by_player_two_victory_message";
    public const string StringSeegaBarrierByP1DefeatMessage = "str_boardgame_seega_barrier_by_player_one_defeat_message";
    public const string StringSeegaBarrierByP2DefeatMessage = "str_boardgame_seega_barrier_by_player_two_defeat_message";
    public const string StringRollDicePlayer = "str_boardgame_roll_dice_player";
    public const string StringRollDiceOpponent = "str_boardgame_roll_dice_opponent";
    protected const int InvalidDice = -1;
    protected const float DelayBeforeMovingAnyPawn = 0.25f;
    protected const float DelayBetweenPawnMovementsBegin = 0.15f;
    private const float DiceRollAnimationDuration = 1f;
    private const float DraggingDuration = 0.2f;
    private const int UnitsToPlacePerTurnInMovementStage = 1;
    protected uint PawnSelectedFactor = uint.MaxValue;
    protected uint PawnUnselectedFactor = 4282203453;
    protected MissionBoardGameLogic MissionHandler;
    protected GameEntity BoardEntity;
    protected GameEntity DiceBoard;
    protected bool JustStoppedDraggingUnit;
    protected CapturedPawnsPool PlayerOnePool;
    protected bool ReadyToPlay;
    protected CapturedPawnsPool PlayerTwoPool;
    protected bool SettingUpBoard = true;
    protected bool HasToMovePawnsAcross;
    protected float DiceRollAnimationTimer;
    protected int MovesLeftToEndTurn;
    protected bool DiceRollAnimationRunning;
    protected int DiceRollSoundCodeID;
    private List<Move> _validMoves;
    private PawnBase _selectedUnit;
    private Vec3 _userRayBegin;
    private Vec3 _userRayEnd;
    private float _draggingTimer;
    private bool _draggingSelectedUnit;
    private float _rotationApplied;
    private float _rotationTarget;
    private bool _rotationCompleted;
    private bool _deselectUnit;
    private bool _firstTickAfterReady = true;
    private bool _waitingAIForfeitResponse;

    public abstract int TileCount { get; }

    protected abstract bool RotateBoard { get; }

    protected abstract bool PreMovementStagePresent { get; }

    protected abstract bool DiceRollRequired { get; }

    protected virtual int UnitsToPlacePerTurnInPreMovementStage => 1;

    protected virtual PawnBase SelectedUnit
    {
      get => this._selectedUnit;
      set
      {
        this.OnBeforeSelectedUnitChanged(this._selectedUnit, value);
        this._selectedUnit = value;
        this.OnAfterSelectedUnitChanged();
      }
    }

    public TextObject Name { get; }

    public bool InPreMovementStage { get; protected set; }

    public TileBase[] Tiles { get; protected set; }

    public List<PawnBase> PlayerOneUnits { get; protected set; }

    public List<PawnBase> PlayerTwoUnits { get; protected set; }

    public int LastDice { get; protected set; }

    public bool IsReady => this.ReadyToPlay && !this.SettingUpBoard;

    public PlayerTurn PlayerWhoStarted { get; private set; }

    public GameOverEnum GameOverInfo { get; private set; }

    public PlayerTurn PlayerTurn { get; protected set; }

    protected IInputContext InputManager => this.MissionHandler.Mission.InputManager;

    protected List<PawnBase> PawnSelectFilter { get; }

    protected BoardGameAIBase AIOpponent => this.MissionHandler.AIOpponent;

    private bool DiceRolled => this.LastDice != -1;

    protected BoardGameBase(
      MissionBoardGameLogic mission,
      TextObject name,
      PlayerTurn startingPlayer)
    {
      this.Name = name;
      this.MissionHandler = mission;
      this.SetStartingPlayer(startingPlayer);
      this.PlayerOnePool = new CapturedPawnsPool();
      this.PlayerTwoPool = new CapturedPawnsPool();
      this.PlayerOneUnits = new List<PawnBase>();
      this.PlayerTwoUnits = new List<PawnBase>();
      this.PawnSelectFilter = new List<PawnBase>();
    }

    public abstract void InitializeUnits();

    public abstract void InitializeTiles();

    public abstract void InitializeSound();

    public abstract List<Move> CalculateValidMoves(PawnBase pawn);

    protected abstract PawnBase SelectPawn(PawnBase pawn);

    protected abstract bool CheckGameEnded();

    protected abstract void OnAfterBoardSetUp();

    protected virtual void OnAfterBoardRotated()
    {
    }

    protected virtual void OnBeforeEndTurn()
    {
    }

    public virtual void RollDice()
    {
    }

    protected virtual void UpdateAllTilesPositions()
    {
    }

    public virtual void InitializeDiceBoard()
    {
    }

    public virtual void Reset()
    {
      this.PlayerOnePool.PawnCount = 0;
      this.PlayerTwoPool.PawnCount = 0;
      this.ClearValidMoves();
      this.SelectedUnit = (PawnBase) null;
      this.PawnSelectFilter.Clear();
      this.GameOverInfo = GameOverEnum.GameStillInProgress;
      this._draggingSelectedUnit = false;
      this.JustStoppedDraggingUnit = false;
      this._draggingTimer = 0.0f;
      this.MissionHandler.AIOpponent?.ResetThinking();
      this.ReadyToPlay = false;
      this._firstTickAfterReady = true;
      this._rotationCompleted = !this.RotateBoard;
      this.SettingUpBoard = true;
      this.UnfocusAllPawns();
      for (int index = 0; index < this.TileCount; ++index)
        this.Tiles[index].Reset();
      this.MovesLeftToEndTurn = this.PreMovementStagePresent ? this.UnitsToPlacePerTurnInPreMovementStage : 1;
      this.LastDice = -1;
      this._waitingAIForfeitResponse = false;
    }

    protected virtual void OnPawnArrivesGoalPosition(PawnBase pawn, Vec3 prevPos, Vec3 currentPos)
    {
      if (this.IsReady && pawn.IsPlaced && !pawn.Captured && pawn.MovingToDifferentTile)
        --this.MovesLeftToEndTurn;
      pawn.MovingToDifferentTile = false;
    }

    protected virtual void HandlePreMovementStage(float dt)
    {
      Debug.FailedAssert("HandlePreMovementStage is not implemented for " + (object) this.MissionHandler.CurrentBoardGame, "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameBase.cs", nameof (HandlePreMovementStage), 288);
    }

    public virtual void InitializeCapturedUnitsZones()
    {
      this.PlayerOnePool.Entity = Mission.Current.Scene.FindEntityWithTag(this.PlayerWhoStarted == PlayerTurn.PlayerOne ? "captured_pawns_pool_1" : "captured_pawns_pool_2");
      this.PlayerOnePool.PawnCount = 0;
      this.PlayerTwoPool.Entity = Mission.Current.Scene.FindEntityWithTag(this.PlayerWhoStarted == PlayerTurn.PlayerOne ? "captured_pawns_pool_2" : "captured_pawns_pool_1");
      this.PlayerTwoPool.PawnCount = 0;
    }

    protected virtual void HandlePreMovementStageAI(Move move)
    {
      Debug.FailedAssert("HandlePreMovementStageAI is not implemented for " + (object) this.MissionHandler.CurrentBoardGame, "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameBase.cs", nameof (HandlePreMovementStageAI), 306);
    }

    public virtual void SetPawnCaptured(PawnBase pawn, bool fake = false) => pawn.Captured = true;

    public virtual List<List<Move>> CalculateAllValidMoves(BoardGameSide side)
    {
      List<List<Move>> allValidMoves = new List<List<Move>>(100);
      foreach (PawnBase pawn in side == BoardGameSide.AI ? this.PlayerTwoUnits : this.PlayerOneUnits)
        allValidMoves.Add(this.CalculateValidMoves(pawn));
      return allValidMoves;
    }

    protected virtual void SwitchPlayerTurn() => this.MissionHandler.Handler.SwitchTurns();

    protected virtual void MovePawnToTile(
      PawnBase pawn,
      TileBase tile,
      bool instantMove = false,
      bool displayMessage = true)
    {
      this.MovePawnToTileDelayed(pawn, tile, instantMove, displayMessage, 0.0f);
    }

    protected virtual void MovePawnToTileDelayed(
      PawnBase pawn,
      TileBase tile,
      bool instantMove,
      bool displayMessage,
      float delay)
    {
      this.ClearValidMoves();
    }

    protected virtual void OnAfterDiceRollAnimation()
    {
      if (this.LastDice == -1)
        return;
      this.MissionHandler.Handler.DiceRoll(this.LastDice);
    }

    public void SetUserRay(Vec3 rayBegin, Vec3 rayEnd)
    {
      this._userRayBegin = rayBegin;
      this._userRayEnd = rayEnd;
    }

    public void SetStartingPlayer(PlayerTurn player)
    {
      this.HasToMovePawnsAcross = this.PlayerWhoStarted != player;
      switch (player)
      {
        case PlayerTurn.PlayerOne:
          this._rotationTarget = 0.0f;
          break;
        case PlayerTurn.PlayerTwo:
          this._rotationTarget = 3.14159274f;
          break;
        default:
          Debug.FailedAssert("Unexpected starting player caught: " + (object) player, "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameBase.cs", nameof (SetStartingPlayer), 376);
          break;
      }
      this.PlayerTurn = this.PlayerWhoStarted = player;
    }

    public void SetGameOverInfo(GameOverEnum info) => this.GameOverInfo = info;

    public bool HasMovesAvailable(ref List<List<Move>> moves)
    {
      foreach (List<Move> moveList in moves)
      {
        if (moveList != null && moveList.Count > 0)
          return true;
      }
      return false;
    }

    public int GetTotalMovesAvailable(ref List<List<Move>> moves)
    {
      int totalMovesAvailable = 0;
      foreach (List<Move> moveList in moves)
      {
        if (moveList != null)
          totalMovesAvailable += moveList.Count;
      }
      return totalMovesAvailable;
    }

    public void PlayDiceRollSound()
    {
      this.MissionHandler.Mission.MakeSound(this.DiceRollSoundCodeID, this.DiceBoard.GlobalPosition, true, false, -1, -1);
    }

    public int GetPlayerOneUnitsAlive()
    {
      int playerOneUnitsAlive = 0;
      foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
      {
        if (!playerOneUnit.Captured)
          ++playerOneUnitsAlive;
      }
      return playerOneUnitsAlive;
    }

    public int GetPlayerTwoUnitsAlive()
    {
      int playerTwoUnitsAlive = 0;
      foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
      {
        if (!playerTwoUnit.Captured)
          ++playerTwoUnitsAlive;
      }
      return playerTwoUnitsAlive;
    }

    public int GetPlayerOneUnitsDead()
    {
      int playerOneUnitsDead = 0;
      foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
      {
        if (playerOneUnit.Captured)
          ++playerOneUnitsDead;
      }
      return playerOneUnitsDead;
    }

    public int GetPlayerTwoUnitsDead()
    {
      int playerTwoUnitsDead = 0;
      foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
      {
        if (playerTwoUnit.Captured)
          ++playerTwoUnitsDead;
      }
      return playerTwoUnitsDead;
    }

    public void Initialize()
    {
      this.BoardEntity = Mission.Current.Scene.FindEntityWithTag("boardgame");
      this.InitializeUnits();
      this.InitializeTiles();
      this.InitializeCapturedUnitsZones();
      this.InitializeDiceBoard();
      this.InitializeSound();
      this.Reset();
    }

    protected void RemovePawnFromBoard(PawnBase pawn, float speed, bool instantMove = false)
    {
      CapturedPawnsPool capturedPawnsPool = pawn.PlayerOne ? this.PlayerOnePool : this.PlayerTwoPool;
      IEnumerable<GameEntity> children = capturedPawnsPool.Entity.GetChildren();
      GameEntity gameEntity1 = (GameEntity) null;
      foreach (GameEntity gameEntity2 in children)
      {
        if (gameEntity2.HasTag("pawn_" + (object) capturedPawnsPool.PawnCount))
        {
          gameEntity1 = gameEntity2;
          break;
        }
      }
      ++capturedPawnsPool.PawnCount;
      Vec3 origin = gameEntity1.GetGlobalFrame().origin;
      float num1 = pawn.Entity.GlobalPosition.z - origin.z;
      float num2 = 1f / 1000f;
      if ((double) num1 > (double) num2)
      {
        Vec3 goal = origin with
        {
          z = pawn.Entity.GlobalPosition.z
        };
        pawn.AddGoalPosition(goal);
      }
      else if ((double) num1 < -(double) num2)
      {
        Vec3 globalPosition = pawn.Entity.GlobalPosition with
        {
          z = origin.z
        };
        pawn.AddGoalPosition(globalPosition);
      }
      pawn.AddGoalPosition(origin);
      pawn.MovePawnToGoalPositions(instantMove, speed);
    }

    public bool Tick(float dt)
    {
      foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
        playerOneUnit.Tick(dt);
      foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
        playerTwoUnit.Tick(dt);
      for (int index = 0; index < this.TileCount; ++index)
        this.Tiles[index].Tick(dt);
      if (this.MovingPawnPresent() || !this.DoneSettingUpBoard() || !this.ReadyToPlay)
        return false;
      if (this._firstTickAfterReady)
      {
        this._firstTickAfterReady = false;
        this.MissionHandler.Handler.Activate();
      }
      if (!this.IsReady)
        return false;
      if (this._draggingSelectedUnit)
      {
        Vec3 userRayBegin = this._userRayBegin;
        Vec3 userRayEnd = this._userRayEnd;
        Vec3 globalPosition = this.SelectedUnit.Entity.GlobalPosition;
        float length = (userRayEnd - userRayBegin).Length;
        float num = (globalPosition - userRayBegin).Length / length;
        this.SelectedUnit.SetPawnAtPosition(MBMath.Lerp(globalPosition, new Vec3(userRayBegin.x + (userRayEnd.x - userRayBegin.x) * num, userRayBegin.y + (userRayEnd.y - userRayBegin.y) * num, this.SelectedUnit.PosBeforeMoving.z + 0.05f), 1f, 0.005f));
      }
      if (this.DiceRollAnimationRunning)
      {
        if ((double) this.DiceRollAnimationTimer < 1.0)
        {
          this.DiceRollAnimationTimer += dt;
        }
        else
        {
          this.DiceRollAnimationRunning = false;
          this.OnAfterDiceRollAnimation();
        }
      }
      if (this.MovesLeftToEndTurn == 0)
        this.EndTurn();
      else
        this.UpdateTurn(dt);
      this.CheckSwitchPlayerTurn();
      return true;
    }

    public void ForceDice(int value) => this.LastDice = value;

    protected PawnBase InitializeUnit(PawnBase pawnToInit)
    {
      pawnToInit.OnArrivedIntermediateGoalPosition = new Action<PawnBase, Vec3, Vec3>(this.OnPawnArrivesGoalPosition);
      pawnToInit.OnArrivedFinalGoalPosition = new Action<PawnBase, Vec3, Vec3>(this.OnPawnArrivesGoalPosition);
      return pawnToInit;
    }

    protected Move HandlePlayerInput(float dt)
    {
      Move move = new Move((PawnBase) null, (TileBase) null);
      if (this.InputManager.IsHotKeyPressed("BoardGamePawnSelect") && !this._draggingSelectedUnit)
      {
        this.JustStoppedDraggingUnit = false;
        PawnBase hoveredPawnIfAny = this.GetHoveredPawnIfAny();
        TileBase hoveredTileIfAny = this.GetHoveredTileIfAny();
        if (hoveredPawnIfAny != null)
        {
          if (this.PawnSelectFilter.Count == 0 || this.PawnSelectFilter.Contains(hoveredPawnIfAny))
          {
            PawnBase selectedUnit = this.SelectedUnit;
            PawnBase pawnBase = this.SelectPawn(hoveredPawnIfAny);
            if (pawnBase.PlayerOne == (this.PlayerTurn == PlayerTurn.PlayerOne) || !pawnBase.PlayerOne == (this.PlayerTurn == PlayerTurn.PlayerTwo))
            {
              if (this.SelectedUnit != null && this.SelectedUnit == selectedUnit)
                this._deselectUnit = true;
            }
            else if (hoveredTileIfAny == null)
              this.SelectedUnit = (PawnBase) null;
          }
        }
        else if (hoveredTileIfAny == null)
          this.SelectedUnit = (PawnBase) null;
      }
      else if (this.SelectedUnit != null && this.InputManager.IsHotKeyReleased("BoardGamePawnDeselect"))
      {
        if (this._draggingSelectedUnit)
        {
          this._draggingSelectedUnit = false;
          this.JustStoppedDraggingUnit = true;
        }
        else if (this._deselectUnit)
        {
          PawnBase hoveredPawnIfAny = this.GetHoveredPawnIfAny();
          if (hoveredPawnIfAny != null && hoveredPawnIfAny == this.SelectedUnit)
          {
            this.SelectedUnit = (PawnBase) null;
            this._deselectUnit = false;
          }
        }
        if (this._validMoves != null)
        {
          this.SelectedUnit.DisableCollisionBody();
          TileBase hoveredTileIfAny = this.GetHoveredTileIfAny();
          if (hoveredTileIfAny != null && (hoveredTileIfAny.PawnOnTile == null || hoveredTileIfAny.PawnOnTile != this.SelectedUnit))
          {
            foreach (Move validMove in this._validMoves)
            {
              if ((NativeObject) hoveredTileIfAny.Entity == (NativeObject) validMove.GoalTile.Entity)
                move = validMove;
            }
          }
          this.SelectedUnit.EnableCollisionBody();
        }
        if (!move.IsValid && this.SelectedUnit != null && this.JustStoppedDraggingUnit)
        {
          this.SelectedUnit.ClearGoalPositions();
          this.SelectedUnit.AddGoalPosition(this.SelectedUnit.PosBeforeMoving);
          this.SelectedUnit.MovePawnToGoalPositions(false, 0.8f);
        }
        this._draggingTimer = 0.0f;
      }
      if (this.SelectedUnit != null && this.InputManager.IsHotKeyDown("BoardGameDragPreview"))
      {
        this._draggingTimer += dt;
        if ((double) this._draggingTimer >= 0.20000000298023224)
        {
          this._draggingSelectedUnit = true;
          this._deselectUnit = false;
        }
      }
      return move;
    }

    protected PawnBase GetHoveredPawnIfAny()
    {
      PawnBase hoveredPawnIfAny = (PawnBase) null;
      GameEntity collidedEntity;
      Mission.Current.Scene.RayCastForClosestEntityOrTerrain(this._userRayBegin, this._userRayEnd, out float _, out collidedEntity);
      if ((NativeObject) collidedEntity != (NativeObject) null)
      {
        foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
        {
          if (playerOneUnit.Entity.Name.Equals(collidedEntity.Name))
          {
            hoveredPawnIfAny = playerOneUnit;
            break;
          }
        }
        if (hoveredPawnIfAny == null)
        {
          foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
          {
            if (playerTwoUnit.Entity.Name.Equals(collidedEntity.Name))
            {
              hoveredPawnIfAny = playerTwoUnit;
              break;
            }
          }
        }
      }
      return hoveredPawnIfAny;
    }

    protected TileBase GetHoveredTileIfAny()
    {
      TileBase hoveredTileIfAny = (TileBase) null;
      GameEntity collidedEntity;
      Mission.Current.Scene.RayCastForClosestEntityOrTerrain(this._userRayBegin, this._userRayEnd, out float _, out collidedEntity);
      if ((NativeObject) collidedEntity != (NativeObject) null)
      {
        for (int index = 0; index < this.TileCount; ++index)
        {
          TileBase tile = this.Tiles[index];
          if (tile.Entity.Name.Equals(collidedEntity.Name))
          {
            hoveredTileIfAny = tile;
            break;
          }
        }
      }
      return hoveredTileIfAny;
    }

    protected void CheckSwitchPlayerTurn()
    {
      if (this.PlayerTurn != PlayerTurn.PlayerOneWaiting && this.PlayerTurn != PlayerTurn.PlayerTwoWaiting)
        return;
      bool flag = false;
      foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
      {
        if (playerOneUnit.Moving)
        {
          flag = true;
          break;
        }
      }
      if (!flag)
      {
        foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
        {
          if (playerTwoUnit.Moving)
          {
            flag = true;
            break;
          }
        }
      }
      if (flag)
        return;
      this.SwitchPlayerTurn();
    }

    protected void OnVictory(string message = "str_boardgame_victory_message")
    {
      this.MissionHandler.PlayerOneWon(message);
    }

    protected void OnAfterEndTurn()
    {
      this.ClearValidMoves();
      this.CheckGameEnded();
      this.MovesLeftToEndTurn = this.InPreMovementStage ? this.UnitsToPlacePerTurnInPreMovementStage : 1;
    }

    protected void OnDefeat(string message = "str_boardgame_defeat_message")
    {
      this.MissionHandler.PlayerTwoWon(message);
    }

    protected void OnDraw(string message = "str_boardgame_draw_message")
    {
      this.MissionHandler.GameWasDraw(message);
    }

    private void OnBeforeSelectedUnitChanged(PawnBase oldSelectedUnit, PawnBase newSelectedUnit)
    {
      oldSelectedUnit?.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnUnselectedFactor);
      newSelectedUnit?.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnSelectedFactor);
      this.ClearValidMoves();
    }

    protected void EndTurn()
    {
      this.OnBeforeEndTurn();
      this.SwitchToWaiting();
      this.OnAfterEndTurn();
    }

    protected void ClearValidMoves()
    {
      this.HideAllValidTiles();
      if (this._validMoves == null)
        return;
      this._validMoves.Clear();
      this._validMoves = (List<Move>) null;
    }

    private void OnAfterSelectedUnitChanged()
    {
      if (this.SelectedUnit == null)
        return;
      List<Move> validMoves = this.CalculateValidMoves(this.SelectedUnit);
      if (validMoves != null && validMoves.Count > 0)
        this._validMoves = validMoves;
      if (!this.SelectedUnit.PlayerOne && this.MissionHandler.AIOpponent != null)
        return;
      this.SelectedUnit.PlayPawnSelectSound();
      this.ShowAllValidTiles();
    }

    private void UpdateTurn(float dt)
    {
      if (this.PlayerTurn == PlayerTurn.PlayerOne || this.PlayerTurn == PlayerTurn.PlayerTwo && this.AIOpponent == null)
      {
        if (this.InPreMovementStage)
        {
          this.HandlePreMovementStage(dt);
        }
        else
        {
          if (this.DiceRollRequired && !this.DiceRolled)
            return;
          Move move = this.HandlePlayerInput(dt);
          if (!move.IsValid)
            return;
          this.MovePawnToTile(move.Unit, move.GoalTile);
        }
      }
      else
      {
        if (this.PlayerTurn != PlayerTurn.PlayerTwo || this.AIOpponent == null || this._waitingAIForfeitResponse)
          return;
        if (this.AIOpponent.WantsToForfeit())
          this.OnAIWantsForfeit();
        if (this.DiceRollRequired && !this.DiceRolled)
          this.RollDice();
        this.AIOpponent.UpdateThinkingAboutMove(dt);
        if (!this.AIOpponent.CanMakeMove())
          return;
        this.SelectedUnit = this.AIOpponent.RecentMoveCalculated.Unit;
        if (this.SelectedUnit != null)
        {
          if (this.InPreMovementStage)
            this.HandlePreMovementStageAI(this.AIOpponent.RecentMoveCalculated);
          else
            this.MovePawnToTile(this.SelectedUnit, this.AIOpponent.RecentMoveCalculated.GoalTile);
        }
        else
        {
          MBInformationManager.AddQuickInformation(GameTexts.FindText("str_boardgame_no_available_moves_opponent"));
          this.EndTurn();
        }
        this.AIOpponent.ResetThinking();
      }
    }

    private bool DoneSettingUpBoard()
    {
      int num1 = !this.SettingUpBoard ? 1 : 0;
      if (!this.SettingUpBoard)
        return num1 != 0;
      if ((double) this._rotationApplied != (double) this._rotationTarget && this.RotateBoard)
      {
        double num2 = (double) this._rotationTarget - (double) this._rotationApplied;
        float num3 = 0.05f;
        double minValue = -(double) num3;
        double maxValue = (double) num3;
        float a = MathF.Clamp((float) num2, (float) minValue, (float) maxValue);
        MatrixFrame frame = this.BoardEntity.GetGlobalFrame();
        frame.rotation.RotateAboutUp(a);
        this.BoardEntity.SetGlobalFrame(in frame);
        this._rotationApplied += a;
        if ((double) MathF.Abs(this._rotationTarget - this._rotationApplied) > 9.9999997473787516E-06)
          return num1 != 0;
        this._rotationApplied = this._rotationTarget;
        this.UpdateAllPawnsPositions();
        this.UpdateAllTilesPositions();
        return num1 != 0;
      }
      if (!this._rotationCompleted)
      {
        this._rotationCompleted = true;
        this.OnAfterBoardRotated();
        return num1 != 0;
      }
      this.SettingUpBoard = false;
      this.OnAfterBoardSetUp();
      return num1 != 0;
    }

    protected void HideAllValidTiles()
    {
      if (this._validMoves == null || this._validMoves.Count <= 0)
        return;
      foreach (Move validMove in this._validMoves)
        validMove.GoalTile.SetVisibility(false);
    }

    protected void ShowAllValidTiles()
    {
      if (this._validMoves == null || this._validMoves.Count <= 0)
        return;
      foreach (Move validMove in this._validMoves)
        validMove.GoalTile.SetVisibility(true);
    }

    private void UnfocusAllPawns()
    {
      if (this.PlayerOneUnits != null)
      {
        foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
          playerOneUnit.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnUnselectedFactor);
      }
      if (this.PlayerTwoUnits == null)
        return;
      foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
        playerTwoUnit.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnUnselectedFactor);
    }

    private bool MovingPawnPresent()
    {
      bool flag = false;
      foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
      {
        if (playerOneUnit.Moving || playerOneUnit.HasAnyGoalPosition)
        {
          flag = true;
          break;
        }
      }
      if (!flag)
      {
        foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
        {
          if (playerTwoUnit.Moving || playerTwoUnit.HasAnyGoalPosition)
          {
            flag = true;
            break;
          }
        }
      }
      return flag;
    }

    private void SwitchToWaiting()
    {
      if (this.PlayerTurn == PlayerTurn.PlayerOne)
        this.PlayerTurn = PlayerTurn.PlayerOneWaiting;
      else if (this.PlayerTurn == PlayerTurn.PlayerTwo)
        this.PlayerTurn = PlayerTurn.PlayerTwoWaiting;
      this.JustStoppedDraggingUnit = false;
    }

    protected void OnAIWantsForfeit()
    {
      if (this._waitingAIForfeitResponse)
        return;
      this._waitingAIForfeitResponse = true;
      InformationManager.ShowInquiry(new InquiryData(GameTexts.FindText("str_boardgame").ToString(), GameTexts.FindText("str_boardgame_forfeit_question").ToString(), true, true, GameTexts.FindText("str_accept").ToString(), GameTexts.FindText("str_reject").ToString(), new Action(this.OnAIForfeitAccepted), new Action(this.OnAIForfeitRejected)));
    }

    private void UpdateAllPawnsPositions()
    {
      foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
        playerOneUnit.UpdatePawnPosition();
      foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
        playerTwoUnit.UpdatePawnPosition();
    }

    private void OnAIForfeitAccepted()
    {
      this.MissionHandler.AIForfeitGame();
      this._waitingAIForfeitResponse = false;
    }

    private void OnAIForfeitRejected() => this._waitingAIForfeitResponse = false;
  }
}
