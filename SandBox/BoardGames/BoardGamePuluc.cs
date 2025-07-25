// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGamePuluc
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.MissionLogics;
using SandBox.BoardGames.Objects;
using SandBox.BoardGames.Pawns;
using SandBox.BoardGames.Tiles;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.BoardGames
{
  public class BoardGamePuluc : BoardGameBase
  {
    public const int WhitePawnCount = 6;
    public const int BlackPawnCount = 6;
    public const int TrackTileCount = 11;
    private const int PlayerHomebaseTileIndex = 11;
    private const int OpponentHomebaseTileIndex = 12;
    private BoardGamePuluc.BoardInformation _startState;

    public override int TileCount => 13;

    protected override bool RotateBoard => false;

    protected override bool PreMovementStagePresent => false;

    protected override bool DiceRollRequired => true;

    public BoardGamePuluc(MissionBoardGameLogic mission, PlayerTurn startingPlayer)
      : base(mission, new TextObject("{=Uh057UUb}Puluc"), startingPlayer)
    {
      this.LastDice = -1;
      this.PawnUnselectedFactor = 4287395960U;
    }

    public override void InitializeUnits()
    {
      this.PlayerOneUnits.Clear();
      this.PlayerTwoUnits.Clear();
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      for (int index = 0; index < 6; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_one_unit_" + (object) index);
        pawnBaseList1.Add(this.InitializeUnit((PawnBase) new PawnPuluc(entityWithTag, this.PlayerWhoStarted == PlayerTurn.PlayerOne)));
      }
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 6; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_two_unit_" + (object) index);
        pawnBaseList2.Add(this.InitializeUnit((PawnBase) new PawnPuluc(entityWithTag, this.PlayerWhoStarted != 0)));
      }
    }

    public override void InitializeTiles()
    {
      if (this.Tiles == null)
        this.Tiles = new TileBase[this.TileCount];
      IEnumerable<GameEntity> source1 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("tile_")))));
      IEnumerable<GameEntity> source2 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("decal_")))));
      for (int x = 0; x < 11; ++x)
      {
        GameEntity entity = source1.Single<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("tile_" + (object) x)));
        BoardGameDecal firstScriptOfType = source2.Single<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("decal_" + (object) x))).GetFirstScriptOfType<BoardGameDecal>();
        this.Tiles[x] = (TileBase) new TilePuluc(entity, firstScriptOfType, x);
      }
      this.Tiles[11] = (TileBase) new TilePuluc(this.BoardEntity.GetFirstChildEntityWithTag("tile_homebase_player"), this.BoardEntity.GetFirstChildEntityWithTag("decal_homebase_player").GetFirstScriptOfType<BoardGameDecal>(), 11);
      this.Tiles[12] = (TileBase) new TilePuluc(this.BoardEntity.GetFirstChildEntityWithTag("tile_homebase_opponent"), this.BoardEntity.GetFirstChildEntityWithTag("decal_homebase_opponent").GetFirstScriptOfType<BoardGameDecal>(), 12);
    }

    public override void InitializeSound()
    {
      PawnBase.PawnMoveSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/move_stone");
      PawnBase.PawnSelectSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/pick_stone");
      PawnBase.PawnTapSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/drop_wood");
      PawnBase.PawnRemoveSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/out_stone");
      this.DiceRollSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/out_stone");
    }

    public override void InitializeDiceBoard()
    {
      this.DiceBoard = Mission.Current.Scene.FindEntityWithTag("dice_board");
      this.DiceBoard.GetFirstScriptOfType<VertexAnimator>().Pause();
    }

    public override void Reset()
    {
      base.Reset();
      this.LastDice = -1;
      this.SetPawnSides();
      if (this._startState.PawnInformation == null)
        this._startState = this.TakeBoardSnapshot();
      this.RestoreStartingBoard();
    }

    public override List<Move> CalculateValidMoves(PawnBase pawn)
    {
      List<Move> validMoves = (List<Move>) null;
      if (pawn is PawnPuluc pawn1 && pawn1.IsTopPawn)
      {
        validMoves = new List<Move>();
        int num = !pawn1.IsInSpawn || pawn1.PlayerOne ? pawn1.X : 11;
        bool flag = pawn1.State == PawnPuluc.MovementState.MovingBackward;
        int tileCoord = pawn1.PlayerOne ^ flag ? num + this.LastDice : num - this.LastDice;
        if (tileCoord < 0)
        {
          if (flag)
          {
            tileCoord = 11;
          }
          else
          {
            pawn1.State = PawnPuluc.MovementState.ChangingDirection;
            tileCoord = -tileCoord;
          }
        }
        else if (tileCoord > 10)
        {
          if (flag)
          {
            tileCoord = 12;
          }
          else
          {
            pawn1.State = PawnPuluc.MovementState.ChangingDirection;
            tileCoord = 20 - tileCoord;
          }
        }
        if (this.CanMovePawnToTile(pawn1, tileCoord))
        {
          Move move;
          move.Unit = (PawnBase) pawn1;
          move.GoalTile = this.Tiles[tileCoord];
          validMoves.Add(move);
        }
      }
      return validMoves;
    }

    public override void RollDice()
    {
      this.PlayDiceRollSound();
      int num = MBRandom.RandomInt(2) + MBRandom.RandomInt(2) + MBRandom.RandomInt(2) + MBRandom.RandomInt(2);
      if (num == 0)
        num = 5;
      VertexAnimator firstScriptOfType = this.DiceBoard.GetFirstScriptOfType<VertexAnimator>();
      switch (num - 1)
      {
        case 0:
          firstScriptOfType.SetAnimation(1, 125, 70f);
          break;
        case 1:
          firstScriptOfType.SetAnimation(129, 248, 70f);
          break;
        case 2:
          firstScriptOfType.SetAnimation(251, 373, 70f);
          break;
        case 3:
          firstScriptOfType.SetAnimation(379, 496, 70f);
          break;
        case 4:
          firstScriptOfType.SetAnimation(501, 626, 70f);
          break;
      }
      firstScriptOfType.PlayOnce();
      this.LastDice = num;
      this.DiceRollAnimationTimer = 0.0f;
      this.DiceRollAnimationRunning = true;
    }

    protected override void OnAfterBoardSetUp() => this.ReadyToPlay = true;

    protected override PawnBase SelectPawn(PawnBase pawn)
    {
      PawnPuluc pawnPuluc = pawn as PawnPuluc;
      if (pawnPuluc.CapturedBy != null)
        pawn = (PawnBase) pawnPuluc.CapturedBy;
      if (pawn.PlayerOne == (this.PlayerTurn == PlayerTurn.PlayerOne) && !pawn.Captured)
        this.SelectedUnit = pawn;
      return pawn;
    }

    protected override void SwitchPlayerTurn()
    {
      if (this.SelectedUnit != null)
      {
        PawnPuluc selectedUnit = this.SelectedUnit as PawnPuluc;
        if (selectedUnit.InPlay && (this.PlayerTurn == PlayerTurn.PlayerOneWaiting || this.PlayerTurn == PlayerTurn.PlayerTwoWaiting))
        {
          List<PawnPuluc> collection = this.CheckIfPawnWillCapture(selectedUnit, selectedUnit.X);
          if (collection != null && collection.Count > 0)
          {
            selectedUnit.State = PawnPuluc.MovementState.MovingBackward;
            selectedUnit.PawnsBelow.AddRange((IEnumerable<PawnPuluc>) collection);
            foreach (PawnPuluc pawnPuluc in collection)
            {
              pawnPuluc.IsTopPawn = false;
              pawnPuluc.Captured = true;
              pawnPuluc.CapturedBy = selectedUnit;
            }
            TilePuluc tile = this.Tiles[selectedUnit.X] as TilePuluc;
            Vec3 goal = selectedUnit.PlayerOne ? tile.PosRightMid : tile.PosLeftMid;
            selectedUnit.AddGoalPosition(goal);
            selectedUnit.MovePawnToGoalPositions(false, 0.5f, false);
          }
        }
      }
      this.SelectedUnit = (PawnBase) null;
      if (this.PlayerTurn == PlayerTurn.PlayerOneWaiting)
        this.PlayerTurn = PlayerTurn.PlayerTwo;
      else if (this.PlayerTurn == PlayerTurn.PlayerTwoWaiting)
        this.PlayerTurn = PlayerTurn.PlayerOne;
      this.LastDice = -1;
      this.CheckGameEnded();
      base.SwitchPlayerTurn();
    }

    protected override bool CheckGameEnded()
    {
      bool flag = false;
      if (this.GetPlayerOneUnitsAlive() <= 0)
      {
        this.OnDefeat();
        this.ReadyToPlay = false;
        flag = true;
      }
      if (this.GetPlayerTwoUnitsAlive() <= 0)
      {
        this.OnVictory();
        this.ReadyToPlay = false;
        flag = true;
      }
      return flag;
    }

    protected override void UpdateAllTilesPositions()
    {
      foreach (TilePuluc tile in this.Tiles)
        tile.UpdateTilePosition();
    }

    protected override void OnBeforeEndTurn() => this.LastDice = -1;

    protected override void MovePawnToTile(
      PawnBase pawn,
      TileBase tile,
      bool instantMove = false,
      bool displayMessage = true)
    {
      base.MovePawnToTile(pawn, tile, instantMove, displayMessage);
      TilePuluc tilePuluc = tile as TilePuluc;
      PawnPuluc pawn1 = pawn as PawnPuluc;
      if (tilePuluc.PawnOnTile != null)
        return;
      if (displayMessage)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_player").ToString()));
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_opponent").ToString()));
      }
      int x = pawn1.X;
      pawn1.MovingToDifferentTile = x != tilePuluc.X || pawn1.State == PawnPuluc.MovementState.ChangingDirection;
      pawn1.X = tilePuluc.X;
      foreach (PawnPuluc pawnPuluc in pawn1.PawnsBelow)
        pawnPuluc.X = pawn1.X;
      if (pawn1.X == 12 || pawn1.X == 11)
      {
        this.PawnHasReachedHomeBase(pawn1, instantMove);
      }
      else
      {
        if (pawn1.State == PawnPuluc.MovementState.ChangingDirection)
        {
          int index;
          Vec3 goal1;
          Vec3 goal2;
          if (pawn.PlayerOne)
          {
            index = 10;
            TilePuluc tile1 = this.Tiles[index] as TilePuluc;
            goal1 = tile1.PosRight;
            goal2 = tile1.PosRightMid;
          }
          else
          {
            index = 0;
            TilePuluc tile2 = this.Tiles[index] as TilePuluc;
            goal1 = tile2.PosLeft;
            goal2 = tile2.PosLeftMid;
          }
          if (x != index)
            pawn.AddGoalPosition(goal1);
          pawn.AddGoalPosition(goal2);
          pawn1.State = PawnPuluc.MovementState.MovingBackward;
        }
        Vec3 goal = pawn1.State != PawnPuluc.MovementState.MovingForward ? (pawn.PlayerOne ? tilePuluc.PosRightMid : tilePuluc.PosLeftMid) : (pawn.PlayerOne ? tilePuluc.PosRight : tilePuluc.PosLeft);
        pawn.AddGoalPosition(goal);
        pawn.MovePawnToGoalPositions(false, 0.5f, this.JustStoppedDraggingUnit);
      }
    }

    protected override void OnAfterDiceRollAnimation()
    {
      base.OnAfterDiceRollAnimation();
      if (this.LastDice == -1)
        return;
      MBTextManager.SetTextVariable("DICE_ROLL", this.LastDice);
      if (this.PlayerTurn == PlayerTurn.PlayerOne)
        InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_roll_dice_player").ToString()));
      else
        InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_roll_dice_opponent").ToString()));
      if (this.PlayerTurn != PlayerTurn.PlayerOne)
        return;
      List<List<Move>> allValidMoves = this.CalculateAllValidMoves(BoardGameSide.Player);
      if (this.HasMovesAvailable(ref allValidMoves))
        return;
      MBInformationManager.AddQuickInformation(GameTexts.FindText("str_boardgame_no_available_moves_player"));
      this.EndTurn();
    }

    public void AIMakeMove(Move move)
    {
      TilePuluc goalTile = move.GoalTile as TilePuluc;
      PawnPuluc unit = move.Unit as PawnPuluc;
      unit.X = goalTile.X;
      foreach (PawnPuluc pawnPuluc in unit.PawnsBelow)
        pawnPuluc.X = unit.X;
      if (goalTile.X < 11)
      {
        List<PawnPuluc> collection = this.CheckIfPawnWillCapture(unit, goalTile.X);
        if (collection != null && collection.Count > 0)
        {
          unit.State = PawnPuluc.MovementState.MovingBackward;
          unit.PawnsBelow.AddRange((IEnumerable<PawnPuluc>) collection);
          foreach (PawnPuluc pawnPuluc in collection)
          {
            pawnPuluc.IsTopPawn = false;
            pawnPuluc.Captured = true;
            pawnPuluc.CapturedBy = unit;
          }
        }
      }
      if (unit.X != 12 && unit.X != 11)
        return;
      this.PawnHasReachedHomeBase(unit, true, true);
    }

    public BoardGamePuluc.BoardInformation TakeBoardSnapshot()
    {
      BoardGamePuluc.PawnInformation[] pawns = new BoardGamePuluc.PawnInformation[this.PlayerOneUnits.Count + this.PlayerTwoUnits.Count];
      int num = 0;
      foreach (PawnPuluc pawnPuluc1 in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
      {
        List<PawnPuluc> pawnsBelow = new List<PawnPuluc>();
        if (pawnPuluc1.PawnsBelow != null && pawnPuluc1.PawnsBelow.Count > 0)
        {
          foreach (PawnPuluc pawnPuluc2 in pawnPuluc1.PawnsBelow)
            pawnsBelow.Add(pawnPuluc2);
        }
        pawns[num++] = new BoardGamePuluc.PawnInformation(pawnPuluc1.X, pawnPuluc1.IsInSpawn, pawnPuluc1.IsTopPawn, pawnPuluc1.State, pawnsBelow, pawnPuluc1.Captured, pawnPuluc1.Entity.GlobalPosition, pawnPuluc1.CapturedBy);
      }
      foreach (PawnPuluc pawnPuluc3 in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        List<PawnPuluc> pawnsBelow = new List<PawnPuluc>();
        if (pawnPuluc3.PawnsBelow != null && pawnPuluc3.PawnsBelow.Count > 0)
        {
          foreach (PawnPuluc pawnPuluc4 in pawnPuluc3.PawnsBelow)
            pawnsBelow.Add(pawnPuluc4);
        }
        pawns[num++] = new BoardGamePuluc.PawnInformation(pawnPuluc3.X, pawnPuluc3.IsInSpawn, pawnPuluc3.IsTopPawn, pawnPuluc3.State, pawnsBelow, pawnPuluc3.Captured, pawnPuluc3.Entity.GlobalPosition, pawnPuluc3.CapturedBy);
      }
      return new BoardGamePuluc.BoardInformation(ref pawns);
    }

    public void UndoMove(ref BoardGamePuluc.BoardInformation board)
    {
      int index = 0;
      foreach (PawnPuluc pawnPuluc1 in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
      {
        pawnPuluc1.PawnsBelow.Clear();
        foreach (PawnPuluc pawnPuluc2 in board.PawnInformation[index].PawnsBelow)
          pawnPuluc1.PawnsBelow.Add(pawnPuluc2);
        pawnPuluc1.IsTopPawn = board.PawnInformation[index].IsTopPawn;
        pawnPuluc1.X = board.PawnInformation[index].X;
        pawnPuluc1.IsInSpawn = board.PawnInformation[index].IsInSpawn;
        pawnPuluc1.State = board.PawnInformation[index].State;
        pawnPuluc1.Captured = board.PawnInformation[index].IsCaptured;
        pawnPuluc1.CapturedBy = board.PawnInformation[index].CapturedBy;
        ++index;
      }
      foreach (PawnPuluc pawnPuluc3 in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        pawnPuluc3.PawnsBelow.Clear();
        foreach (PawnPuluc pawnPuluc4 in board.PawnInformation[index].PawnsBelow)
          pawnPuluc3.PawnsBelow.Add(pawnPuluc4);
        pawnPuluc3.IsTopPawn = board.PawnInformation[index].IsTopPawn;
        pawnPuluc3.X = board.PawnInformation[index].X;
        pawnPuluc3.IsInSpawn = board.PawnInformation[index].IsInSpawn;
        pawnPuluc3.State = board.PawnInformation[index].State;
        pawnPuluc3.Captured = board.PawnInformation[index].IsCaptured;
        pawnPuluc3.CapturedBy = board.PawnInformation[index].CapturedBy;
        ++index;
      }
    }

    private bool CanMovePawnToTile(PawnPuluc pawn, int tileCoord)
    {
      bool tile = false;
      switch (tileCoord)
      {
        case 11:
          tile = true;
          break;
        case 12:
          tile = true;
          break;
        default:
          List<PawnPuluc> forTileCoordinate = this.GetAllPawnsForTileCoordinate(tileCoord);
          if (forTileCoordinate.Count == 0)
          {
            tile = true;
            break;
          }
          List<PawnPuluc> topPawns = this.GetTopPawns(ref forTileCoordinate);
          if (topPawns[0].PlayerOne != pawn.PlayerOne || topPawns[0] == pawn)
          {
            tile = true;
            break;
          }
          break;
      }
      return tile;
    }

    private List<PawnPuluc> GetAllPawnsForTileCoordinate(int x)
    {
      List<PawnPuluc> forTileCoordinate = new List<PawnPuluc>();
      foreach (PawnPuluc playerOneUnit in this.PlayerOneUnits)
      {
        if (playerOneUnit.X == x)
          forTileCoordinate.Add(playerOneUnit);
      }
      foreach (PawnPuluc playerTwoUnit in this.PlayerTwoUnits)
      {
        if (playerTwoUnit.X == x)
          forTileCoordinate.Add(playerTwoUnit);
      }
      return forTileCoordinate;
    }

    private List<PawnPuluc> GetTopPawns(ref List<PawnPuluc> pawns)
    {
      List<PawnPuluc> topPawns = new List<PawnPuluc>();
      foreach (PawnPuluc pawnPuluc in pawns)
      {
        if (pawnPuluc.IsTopPawn)
          topPawns.Add(pawnPuluc);
      }
      return topPawns;
    }

    private List<PawnPuluc> CheckIfPawnWillCapture(PawnPuluc pawn, int tile)
    {
      List<PawnPuluc> forTileCoordinate = this.GetAllPawnsForTileCoordinate(tile);
      if (forTileCoordinate.Count > 0)
      {
        List<PawnPuluc> topPawns = this.GetTopPawns(ref forTileCoordinate);
        if (topPawns.Count == 1)
          return (List<PawnPuluc>) null;
        foreach (PawnPuluc pawnPuluc in topPawns)
        {
          if (pawnPuluc != pawn)
          {
            List<PawnPuluc> pawnPulucList = new List<PawnPuluc>();
            pawnPulucList.Add(pawnPuluc);
            pawnPulucList.AddRange((IEnumerable<PawnPuluc>) pawnPuluc.PawnsBelow);
            return pawnPulucList;
          }
        }
      }
      return (List<PawnPuluc>) null;
    }

    private void RestoreStartingBoard()
    {
      int num = 0;
      foreach (PawnPuluc pawnPuluc in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
      {
        if (pawnPuluc.X != -1 && this.Tiles[pawnPuluc.X].PawnOnTile == pawnPuluc)
          this.Tiles[pawnPuluc.X].PawnOnTile = (PawnBase) null;
        pawnPuluc.Reset();
        pawnPuluc.AddGoalPosition(pawnPuluc.SpawnPos);
        pawnPuluc.MovePawnToGoalPositions(false, 0.5f, false);
        ++num;
      }
      foreach (PawnPuluc pawnPuluc in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        if (pawnPuluc.X != -1 && this.Tiles[pawnPuluc.X].PawnOnTile == pawnPuluc)
          this.Tiles[pawnPuluc.X].PawnOnTile = (PawnBase) null;
        pawnPuluc.Reset();
        pawnPuluc.AddGoalPosition(pawnPuluc.SpawnPos);
        pawnPuluc.MovePawnToGoalPositions(false, 0.5f, false);
        ++num;
      }
    }

    private void SetPawnSides()
    {
      if (this.HasToMovePawnsAcross)
      {
        CapturedPawnsPool playerOnePool = this.PlayerOnePool;
        this.PlayerOnePool = this.PlayerTwoPool;
        this.PlayerTwoPool = playerOnePool;
        if (this._startState.PawnInformation == null)
        {
          for (int index = 0; index < this.PlayerOneUnits.Count; ++index)
          {
            PawnPuluc playerTwoUnit = this.PlayerTwoUnits[this.PlayerTwoUnits.Count - index - 1] as PawnPuluc;
            PawnPuluc playerOneUnit = this.PlayerOneUnits[index] as PawnPuluc;
            Vec3 spawnPos = playerTwoUnit.SpawnPos;
            playerTwoUnit.SpawnPos = playerOneUnit.SpawnPos;
            playerOneUnit.SpawnPos = spawnPos;
          }
        }
      }
      if (this._startState.PawnInformation == null)
        return;
      int index1 = 0;
      int num = 1;
      if (this.PlayerWhoStarted != PlayerTurn.PlayerOne)
      {
        index1 = this.PlayerTwoUnits.Count - 1;
        num = -1;
      }
      for (int index2 = 0; index2 < this.PlayerOneUnits.Count; ++index2)
      {
        (this.PlayerOneUnits[index2] as PawnPuluc).SpawnPos = this._startState.PawnInformation[index1].Position;
        index1 += num;
      }
      if (this.PlayerWhoStarted != PlayerTurn.PlayerOne)
        index1 = this.PlayerOneUnits.Count + this.PlayerTwoUnits.Count - 1;
      for (int index3 = 0; index3 < this.PlayerTwoUnits.Count; ++index3)
      {
        (this.PlayerTwoUnits[index3] as PawnPuluc).SpawnPos = this._startState.PawnInformation[index1].Position;
        index1 += num;
      }
    }

    private void PawnHasReachedHomeBase(PawnPuluc pawn, bool instantmove, bool fake = false)
    {
      foreach (PawnPuluc pawn1 in pawn.PawnsBelow)
      {
        if (pawn1.PlayerOne == pawn.PlayerOne)
        {
          pawn1.MovePawnBackToSpawn(instantmove, 0.6f, fake);
        }
        else
        {
          pawn1.X = -1;
          pawn1.IsInSpawn = false;
          if (!fake)
          {
            pawn1.CapturedBy = (PawnPuluc) null;
            this.RemovePawnFromBoard((PawnBase) pawn1, 100f, true);
          }
        }
      }
      pawn.MovePawnBackToSpawn(instantmove, 0.6f, fake);
    }

    public struct PawnInformation
    {
      public readonly int X;
      public readonly bool IsInSpawn;
      public readonly bool IsTopPawn;
      public readonly bool IsCaptured;
      public readonly PawnPuluc.MovementState State;
      public readonly List<PawnPuluc> PawnsBelow;
      public readonly Vec3 Position;
      public readonly PawnPuluc CapturedBy;

      public PawnInformation(
        int x,
        bool inSpawn,
        bool topPawn,
        PawnPuluc.MovementState state,
        List<PawnPuluc> pawnsBelow,
        bool captured,
        Vec3 position,
        PawnPuluc capturedBy)
      {
        this.X = x;
        this.IsInSpawn = inSpawn;
        this.IsTopPawn = topPawn;
        this.State = state;
        this.PawnsBelow = pawnsBelow;
        this.IsCaptured = captured;
        this.CapturedBy = capturedBy;
        this.Position = position;
      }
    }

    public struct BoardInformation
    {
      public readonly BoardGamePuluc.PawnInformation[] PawnInformation;

      public BoardInformation(ref BoardGamePuluc.PawnInformation[] pawns)
      {
        this.PawnInformation = pawns;
      }
    }
  }
}
