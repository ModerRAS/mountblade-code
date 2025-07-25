// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGameSeega
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
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.BoardGames
{
  public class BoardGameSeega : BoardGameBase
  {
    private const int CentralTileX = 2;
    private const int CentralTileY = 2;
    public static readonly int BoardWidth = 5;
    public static readonly int BoardHeight = 5;
    private Dictionary<PawnBase, int> _blockingPawns = new Dictionary<PawnBase, int>();
    private BoardGameSeega.BoardInformation _startState;
    private bool _placementStageOver;

    public override int TileCount => BoardGameSeega.BoardWidth * BoardGameSeega.BoardHeight;

    protected override int UnitsToPlacePerTurnInPreMovementStage => 2;

    protected override bool RotateBoard => false;

    protected override bool PreMovementStagePresent => true;

    protected override bool DiceRollRequired => false;

    public BoardGameSeega(MissionBoardGameLogic mission, PlayerTurn startingPlayer)
      : base(mission, new TextObject("{=C4n1rgBC}Seega"), startingPlayer)
    {
      this.SelectedUnit = (PawnBase) null;
    }

    public override void InitializeUnits()
    {
      this.PlayerOneUnits.Clear();
      this.PlayerTwoUnits.Clear();
      int num1 = 0;
      GameEntity entityWithTag1;
      do
      {
        entityWithTag1 = Mission.Current.Scene.FindEntityWithTag("player_one_unit_" + num1.ToString());
        if ((NativeObject) entityWithTag1 != (NativeObject) null)
        {
          this.PlayerOneUnits.Add(this.InitializeUnit((PawnBase) new PawnSeega(entityWithTag1, true)));
          ++num1;
        }
      }
      while ((NativeObject) entityWithTag1 != (NativeObject) null);
      int num2 = 0;
      GameEntity entityWithTag2;
      do
      {
        entityWithTag2 = Mission.Current.Scene.FindEntityWithTag("player_two_unit_" + num2.ToString());
        if ((NativeObject) entityWithTag2 != (NativeObject) null)
        {
          this.PlayerTwoUnits.Add(this.InitializeUnit((PawnBase) new PawnSeega(entityWithTag2, false)));
          ++num2;
        }
      }
      while ((NativeObject) entityWithTag2 != (NativeObject) null);
    }

    public override void InitializeTiles()
    {
      IEnumerable<GameEntity> source1 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("tile_")))));
      IEnumerable<GameEntity> source2 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("decal_")))));
      if (this.Tiles == null)
        this.Tiles = new TileBase[this.TileCount];
      for (int x = 0; x < BoardGameSeega.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameSeega.BoardHeight; ++y)
          this.SetTile((TileBase) new Tile2D(source1.Single<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("tile_" + (object) x + "_" + (object) y))), source2.Single<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("decal_" + (object) x + "_" + (object) y))).GetFirstScriptOfType<BoardGameDecal>(), x, y), x, y);
      }
    }

    public override void InitializeSound()
    {
      PawnBase.PawnMoveSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/move_stone");
      PawnBase.PawnSelectSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/pick_stone");
      PawnBase.PawnTapSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/drop_stone");
      PawnBase.PawnRemoveSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/out_stone");
    }

    public override void Reset()
    {
      base.Reset();
      this.InPreMovementStage = true;
      this._placementStageOver = false;
      if (this._startState.PawnInformation == null)
        this.PreplaceUnits();
      else
        this.RestoreStartingBoard();
    }

    public override List<Move> CalculateValidMoves(PawnBase pawn)
    {
      List<Move> validMoves = new List<Move>();
      PawnSeega pawnSeega = pawn as PawnSeega;
      if (pawn != null)
      {
        int x = pawnSeega.X;
        int y = pawnSeega.Y;
        if (!this.InPreMovementStage && pawnSeega.IsPlaced)
        {
          if (x > 0)
          {
            TileBase tile = this.GetTile(x - 1, y);
            if (tile.PawnOnTile == null && (pawnSeega.PrevX != x - 1 || pawnSeega.PrevY != y))
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = tile;
              validMoves.Add(move);
            }
          }
          if (x < BoardGameSeega.BoardWidth - 1)
          {
            TileBase tile = this.GetTile(x + 1, y);
            if (tile.PawnOnTile == null && (pawnSeega.PrevX != x + 1 || pawnSeega.PrevY != y))
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = tile;
              validMoves.Add(move);
            }
          }
          if (y > 0)
          {
            TileBase tile = this.GetTile(x, y - 1);
            if (tile.PawnOnTile == null && (pawnSeega.PrevX != x || pawnSeega.PrevY != y - 1))
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = tile;
              validMoves.Add(move);
            }
          }
          if (y < BoardGameSeega.BoardHeight - 1)
          {
            TileBase tile = this.GetTile(x, y + 1);
            if (tile.PawnOnTile == null && (pawnSeega.PrevX != x || pawnSeega.PrevY != y + 1))
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = tile;
              validMoves.Add(move);
            }
          }
        }
        else if (this.InPreMovementStage && !pawnSeega.IsPlaced)
        {
          for (int index = 0; index < this.TileCount; ++index)
          {
            TileBase tile = this.Tiles[index];
            if (tile.PawnOnTile == null && !tile.Entity.HasTag("obstructed_at_start"))
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = tile;
              validMoves.Add(move);
            }
          }
        }
      }
      return validMoves;
    }

    public override void SetPawnCaptured(PawnBase pawn, bool aiSimulation = false)
    {
      base.SetPawnCaptured(pawn, aiSimulation);
      PawnSeega pawn1 = pawn as PawnSeega;
      this.GetTile(pawn1.X, pawn1.Y).PawnOnTile = (PawnBase) null;
      pawn1.X = -1;
      pawn1.Y = -1;
      if (aiSimulation)
        return;
      this.RemovePawnFromBoard((PawnBase) pawn1, 0.8f);
      MBDebug.Print("Setting pawn captured: X: " + (object) pawn1.X + ", Y: " + (object) pawn1.Y);
    }

    protected override void OnPawnArrivesGoalPosition(PawnBase pawn, Vec3 prevPos, Vec3 currentPos)
    {
      if (pawn.MovingToDifferentTile)
      {
        this.PawnSelectFilter.Clear();
        PawnSeega selectedUnit = this.SelectedUnit as PawnSeega;
        if (!this.InPreMovementStage && selectedUnit != null)
        {
          if (this.CheckIfPawnCaptures(selectedUnit) > 0)
          {
            PawnSeega pawn1 = pawn as PawnSeega;
            bool flag = false;
            List<Move> validMoves = this.CalculateValidMoves(pawn);
            int count = validMoves.Count;
            for (int index = 0; index < count; ++index)
            {
              Tile2D tile = this.GetTile(pawn1.X, pawn1.Y) as Tile2D;
              Tile2D goalTile = validMoves[index].GoalTile as Tile2D;
              tile.PawnOnTile = (PawnBase) null;
              pawn1.X = goalTile.X;
              pawn1.Y = goalTile.Y;
              goalTile.PawnOnTile = (PawnBase) pawn1;
              int num = this.CheckIfPawnCaptures(pawn1, setCaptured: false);
              goalTile.PawnOnTile = (PawnBase) null;
              pawn1.X = tile.X;
              pawn1.Y = tile.Y;
              tile.PawnOnTile = (PawnBase) pawn1;
              if (num > 0)
              {
                flag = true;
                break;
              }
            }
            if (flag)
            {
              if (!this.PawnSelectFilter.Contains(pawn))
                this.PawnSelectFilter.Add(pawn);
              ++this.MovesLeftToEndTurn;
            }
          }
          if (this.CheckIfUnitsIsolatedByBarrier(new Vec2i(selectedUnit.X, selectedUnit.Y)))
          {
            MBDebug.Print("Barrier was formed!");
            int playerOneUnitsAlive = this.GetPlayerOneUnitsAlive();
            int playerTwoUnitsAlive = this.GetPlayerTwoUnitsAlive();
            if (playerOneUnitsAlive > playerTwoUnitsAlive)
              this.OnVictory(selectedUnit.PlayerOne ? "str_boardgame_seega_barrier_by_player_one_victory_message" : "str_boardgame_seega_barrier_by_player_two_victory_message");
            else if (playerOneUnitsAlive < playerTwoUnitsAlive)
              this.OnDefeat(selectedUnit.PlayerOne ? "str_boardgame_seega_barrier_by_player_one_defeat_message" : "str_boardgame_seega_barrier_by_player_two_defeat_message");
            else
              this.OnDraw(selectedUnit.PlayerOne ? "str_boardgame_seega_barrier_by_player_one_draw_message" : "str_boardgame_seega_barrier_by_player_two_draw_message");
            this.ReadyToPlay = false;
          }
        }
        this.CheckGameEnded();
      }
      base.OnPawnArrivesGoalPosition(pawn, prevPos, currentPos);
    }

    protected override void SwitchPlayerTurn()
    {
      this.SelectedUnit = (PawnBase) null;
      if (this.PlayerTurn == PlayerTurn.PlayerOneWaiting)
      {
        this.PlayerTurn = PlayerTurn.PlayerTwo;
        if (!this.InPreMovementStage)
        {
          if (this.MissionHandler.AIOpponent == null)
            this.CheckIfPlayerIsStuck(false);
          foreach (PawnSeega playerTwoUnit in this.PlayerTwoUnits)
            playerTwoUnit.UpdateMoveBackAvailable();
        }
      }
      else if (this.PlayerTurn == PlayerTurn.PlayerTwoWaiting)
      {
        this.PlayerTurn = PlayerTurn.PlayerOne;
        if (!this.InPreMovementStage)
        {
          this.CheckIfPlayerIsStuck(true);
          foreach (PawnSeega playerOneUnit in this.PlayerOneUnits)
            playerOneUnit.UpdateMoveBackAvailable();
        }
      }
      int num1 = this.InPreMovementStage ? 1 : 0;
      this.InPreMovementStage = !this.CheckPlacementStageOver() || this._blockingPawns != null && this._blockingPawns.Count > 0;
      int num2 = this.InPreMovementStage ? 1 : 0;
      if (num1 != num2 && !this.InPreMovementStage)
        this.EndTurn();
      base.SwitchPlayerTurn();
    }

    protected override PawnBase SelectPawn(PawnBase pawn)
    {
      if (this.PlayerTurn == PlayerTurn.PlayerOne)
      {
        if (pawn.PlayerOne)
        {
          if (this.InPreMovementStage)
          {
            if (!pawn.IsPlaced)
              this.SelectedUnit = pawn;
          }
          else
            this.SelectedUnit = pawn;
        }
      }
      else if (this.AIOpponent == null && !pawn.PlayerOne)
      {
        if (this.InPreMovementStage)
        {
          if (!pawn.IsPlaced)
            this.SelectedUnit = pawn;
        }
        else
          this.SelectedUnit = pawn;
      }
      return pawn;
    }

    protected override void MovePawnToTileDelayed(
      PawnBase pawn,
      TileBase tile,
      bool instantMove,
      bool displayMessage,
      float delay)
    {
      base.MovePawnToTileDelayed(pawn, tile, instantMove, displayMessage, delay);
      Tile2D tile2D = tile as Tile2D;
      PawnSeega pawn1 = pawn as PawnSeega;
      if (tile2D.PawnOnTile != null || pawn1 == null)
        return;
      if (displayMessage)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_player").ToString()));
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_opponent").ToString()));
      }
      Vec3 globalPosition = tile2D.Entity.GlobalPosition;
      float speed = 0.7f;
      if (!this.InPreMovementStage)
        speed = 0.3f;
      pawn1.MovingToDifferentTile = pawn1.X != tile2D.X || pawn1.Y != tile2D.Y;
      pawn1.AddGoalPosition(globalPosition);
      pawn1.MovePawnToGoalPositionsDelayed(instantMove, speed, this.JustStoppedDraggingUnit, delay);
      pawn1.PrevX = pawn1.X;
      pawn1.PrevY = pawn1.Y;
      pawn1.X = tile2D.X;
      pawn1.Y = tile2D.Y;
      if (pawn1.PrevX != -1 && pawn1.PrevY != -1)
        this.GetTile(pawn1.PrevX, pawn1.PrevY).PawnOnTile = (PawnBase) null;
      tile2D.PawnOnTile = (PawnBase) pawn1;
      if (instantMove && !this.InPreMovementStage)
      {
        this.CheckIfPawnCaptures(pawn1);
      }
      else
      {
        if (!(pawn1 == this.SelectedUnit & instantMove))
          return;
        this.SelectedUnit = (PawnBase) null;
      }
    }

    protected override void HandlePreMovementStage(float dt)
    {
      if (this._blockingPawns != null && this._blockingPawns.Count > 0)
      {
        if (this.InputManager.IsHotKeyPressed("BoardGamePawnSelect"))
        {
          PawnBase hoveredPawnIfAny = this.GetHoveredPawnIfAny();
          if (hoveredPawnIfAny == null || !this._blockingPawns.ContainsKey(hoveredPawnIfAny))
            return;
          this.SetPawnCaptured(hoveredPawnIfAny, false);
          this.UnfocusBlockingPawns();
          this.InPreMovementStage = false;
        }
        else
          this.SelectedUnit = (PawnBase) null;
      }
      else
      {
        Move move = this.HandlePlayerInput(dt);
        if (!move.IsValid)
          return;
        this.MovePawnToTile(move.Unit, move.GoalTile);
      }
    }

    protected override void HandlePreMovementStageAI(Move move)
    {
      this.MovePawnToTile(move.Unit, move.GoalTile);
    }

    protected override bool CheckGameEnded()
    {
      if (this.ReadyToPlay)
      {
        if (this.GetPlayerOneUnitsAlive() <= 1)
        {
          this.OnDefeat();
          this.ReadyToPlay = false;
        }
        else if (this.GetPlayerTwoUnitsAlive() <= 1)
        {
          this.OnVictory();
          this.ReadyToPlay = false;
        }
      }
      return !this.ReadyToPlay;
    }

    protected override void OnAfterBoardSetUp()
    {
      if (this._startState.PawnInformation == null)
        this._startState = this.TakeBoardSnapshot();
      this.ReadyToPlay = true;
    }

    public void AIMakeMove(Move move)
    {
      Tile2D goalTile = move.GoalTile as Tile2D;
      PawnSeega unit = move.Unit as PawnSeega;
      if (goalTile.PawnOnTile != null)
        return;
      unit.PrevX = unit.X;
      unit.PrevY = unit.Y;
      unit.X = goalTile.X;
      unit.Y = goalTile.Y;
      this.GetTile(unit.PrevX, unit.PrevY).PawnOnTile = (PawnBase) null;
      goalTile.PawnOnTile = (PawnBase) unit;
      this.CheckIfPawnCaptures(unit, true);
    }

    public Dictionary<PawnBase, int> GetBlockingPawns(bool playerOneBlocked)
    {
      Dictionary<PawnBase, int> blockingPawns = new Dictionary<PawnBase, int>();
      foreach (PawnSeega pawnSeega in playerOneBlocked ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        if (pawnSeega.IsPlaced && !this.IsOnCentralTile(pawnSeega))
        {
          BoardGameSeega.BoardInformation boardSnapshot = this.TakeBoardSnapshot();
          this.SetPawnCaptured((PawnBase) pawnSeega, true);
          int num = 0;
          foreach (PawnSeega pawn in playerOneBlocked ? this.PlayerOneUnits : this.PlayerTwoUnits)
          {
            if (pawn.IsPlaced)
              num += this.CalculateValidMoves((PawnBase) pawn).Count;
          }
          if (num > 0)
            blockingPawns.Add((PawnBase) pawnSeega, num);
          this.UndoMove(ref boardSnapshot);
        }
      }
      return blockingPawns;
    }

    public BoardGameSeega.BoardInformation TakeBoardSnapshot()
    {
      BoardGameSeega.PawnInformation[] pawns = new BoardGameSeega.PawnInformation[this.PlayerOneUnits.Count + this.PlayerTwoUnits.Count];
      TileBaseInformation[,] tiles = new TileBaseInformation[BoardGameSeega.BoardWidth, BoardGameSeega.BoardHeight];
      int num = 0;
      foreach (PawnSeega playerOneUnit in this.PlayerOneUnits)
        pawns[num++] = new BoardGameSeega.PawnInformation(playerOneUnit.X, playerOneUnit.Y, playerOneUnit.PrevX, playerOneUnit.PrevY, playerOneUnit.MovedThisTurn, playerOneUnit.Captured, playerOneUnit.Entity.GlobalPosition);
      foreach (PawnSeega playerTwoUnit in this.PlayerTwoUnits)
        pawns[num++] = new BoardGameSeega.PawnInformation(playerTwoUnit.X, playerTwoUnit.Y, playerTwoUnit.PrevX, playerTwoUnit.PrevY, playerTwoUnit.MovedThisTurn, playerTwoUnit.Captured, playerTwoUnit.Entity.GlobalPosition);
      for (int x = 0; x < BoardGameSeega.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameSeega.BoardHeight; ++y)
          tiles[x, y] = new TileBaseInformation(ref this.GetTile(x, y).PawnOnTile);
      }
      return new BoardGameSeega.BoardInformation(ref pawns, ref tiles);
    }

    public void UndoMove(ref BoardGameSeega.BoardInformation board)
    {
      int index = 0;
      foreach (PawnSeega playerOneUnit in this.PlayerOneUnits)
      {
        playerOneUnit.X = board.PawnInformation[index].X;
        playerOneUnit.Y = board.PawnInformation[index].Y;
        playerOneUnit.PrevX = board.PawnInformation[index].PrevX;
        playerOneUnit.PrevY = board.PawnInformation[index].PrevY;
        playerOneUnit.Captured = board.PawnInformation[index].IsCaptured;
        playerOneUnit.AISetMovedThisTurn(board.PawnInformation[index].MovedThisTurn);
        ++index;
      }
      foreach (PawnSeega playerTwoUnit in this.PlayerTwoUnits)
      {
        playerTwoUnit.X = board.PawnInformation[index].X;
        playerTwoUnit.Y = board.PawnInformation[index].Y;
        playerTwoUnit.PrevX = board.PawnInformation[index].PrevX;
        playerTwoUnit.PrevY = board.PawnInformation[index].PrevY;
        playerTwoUnit.Captured = board.PawnInformation[index].IsCaptured;
        playerTwoUnit.AISetMovedThisTurn(board.PawnInformation[index].MovedThisTurn);
        ++index;
      }
      for (int x = 0; x < BoardGameSeega.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameSeega.BoardHeight; ++y)
          this.GetTile(x, y).PawnOnTile = board.TileInformation[x, y].PawnOnTile;
      }
    }

    public TileBase GetTile(int x, int y) => this.Tiles[y * BoardGameSeega.BoardWidth + x];

    private void SetTile(TileBase tile, int x, int y)
    {
      this.Tiles[y * BoardGameSeega.BoardWidth + x] = tile;
    }

    private bool IsCentralTile(Tile2D tile) => tile.X == 2 && tile.Y == 2;

    private bool IsOnCentralTile(PawnSeega pawn) => pawn.X == 2 && pawn.Y == 2;

    private void PreplaceUnits()
    {
      this.MovePawnToTileDelayed(this.PlayerOneUnits[0], this.GetTile(0, 2), false, false, 0.55f);
      this.MovePawnToTileDelayed(this.PlayerTwoUnits[0], this.GetTile(2, 0), false, false, 0.700000048f);
      this.MovePawnToTileDelayed(this.PlayerOneUnits[1], this.GetTile(4, 2), false, false, 0.85f);
      this.MovePawnToTileDelayed(this.PlayerTwoUnits[1], this.GetTile(2, 4), false, false, 1f);
    }

    private void RestoreStartingBoard()
    {
      int index = 0;
      foreach (PawnSeega playerOneUnit in this.PlayerOneUnits)
      {
        if (this._startState.PawnInformation[index].X != -1)
        {
          int x = this._startState.PawnInformation[index].X;
          int y = this._startState.PawnInformation[index].Y;
          if (this._startState.PawnInformation[index].X != playerOneUnit.X && this._startState.PawnInformation[index].Y != playerOneUnit.Y)
          {
            playerOneUnit.Reset();
            TileBase tile = this.GetTile(x, y);
            this.MovePawnToTile((PawnBase) playerOneUnit, tile);
          }
        }
        else if (!playerOneUnit.Entity.GlobalPosition.NearlyEquals(this._startState.PawnInformation[index].Position))
        {
          if (playerOneUnit.X != -1 && this.GetTile(playerOneUnit.X, playerOneUnit.Y).PawnOnTile == playerOneUnit)
            this.GetTile(playerOneUnit.X, playerOneUnit.Y).PawnOnTile = (PawnBase) null;
          playerOneUnit.Reset();
          playerOneUnit.AddGoalPosition(this._startState.PawnInformation[index].Position);
          playerOneUnit.MovePawnToGoalPositions(false, 0.5f);
        }
        ++index;
      }
      foreach (PawnSeega playerTwoUnit in this.PlayerTwoUnits)
      {
        if (this._startState.PawnInformation[index].X != -1)
        {
          int x = this._startState.PawnInformation[index].X;
          int y = this._startState.PawnInformation[index].Y;
          if (this._startState.PawnInformation[index].X != playerTwoUnit.X && this._startState.PawnInformation[index].Y != playerTwoUnit.Y)
          {
            playerTwoUnit.Reset();
            TileBase tile = this.GetTile(x, y);
            this.MovePawnToTile((PawnBase) playerTwoUnit, tile);
          }
        }
        else
        {
          if (playerTwoUnit.X != -1 && this.GetTile(playerTwoUnit.X, playerTwoUnit.Y).PawnOnTile == playerTwoUnit)
            this.GetTile(playerTwoUnit.X, playerTwoUnit.Y).PawnOnTile = (PawnBase) null;
          playerTwoUnit.Reset();
          playerTwoUnit.AddGoalPosition(this._startState.PawnInformation[index].Position);
          playerTwoUnit.MovePawnToGoalPositions(false, 0.5f);
        }
        ++index;
      }
    }

    private bool CheckPlacementStageOver()
    {
      if (!this._placementStageOver)
      {
        bool flag = false;
        foreach (PawnBase playerOneUnit in this.PlayerOneUnits)
        {
          if (!playerOneUnit.IsPlaced)
          {
            flag = true;
            break;
          }
        }
        if (!flag)
        {
          foreach (PawnBase playerTwoUnit in this.PlayerTwoUnits)
          {
            if (!playerTwoUnit.IsPlaced)
            {
              flag = true;
              break;
            }
          }
        }
        if (!flag)
          this._placementStageOver = true;
      }
      return this._placementStageOver;
    }

    private bool CheckIfPawnCapturedEnemyPawn(
      PawnSeega pawn,
      bool aiSimulation,
      Tile2D victimTile,
      TileBase helperTile,
      bool setCaptured)
    {
      bool flag = false;
      PawnBase pawnOnTile1 = victimTile.PawnOnTile;
      if (pawnOnTile1 != null && !this.IsCentralTile(victimTile) && pawnOnTile1.PlayerOne != pawn.PlayerOne)
      {
        PawnBase pawnOnTile2 = helperTile.PawnOnTile;
        if (pawnOnTile2 != null && pawnOnTile2.PlayerOne == pawn.PlayerOne)
        {
          flag = true;
          if (setCaptured)
            this.SetPawnCaptured(pawnOnTile1, aiSimulation);
        }
      }
      return flag;
    }

    private int CheckIfPawnCaptures(PawnSeega pawn, bool aiSimulation = false, bool setCaptured = true)
    {
      int num = 0;
      int x = pawn.X;
      int y = pawn.Y;
      if (x > 1 && this.CheckIfPawnCapturedEnemyPawn(pawn, aiSimulation, this.GetTile(x - 1, y) as Tile2D, this.GetTile(x - 2, y), setCaptured))
        ++num;
      if (x < BoardGameSeega.BoardWidth - 2 && this.CheckIfPawnCapturedEnemyPawn(pawn, aiSimulation, this.GetTile(x + 1, y) as Tile2D, this.GetTile(x + 2, y), setCaptured))
        ++num;
      if (y > 1 && this.CheckIfPawnCapturedEnemyPawn(pawn, aiSimulation, this.GetTile(x, y - 1) as Tile2D, this.GetTile(x, y - 2), setCaptured))
        ++num;
      if (y < BoardGameSeega.BoardHeight - 2 && this.CheckIfPawnCapturedEnemyPawn(pawn, aiSimulation, this.GetTile(x, y + 1) as Tile2D, this.GetTile(x, y + 2), setCaptured))
        ++num;
      return num;
    }

    private void CheckIfPlayerIsStuck(bool playerOne)
    {
      List<List<Move>> allValidMoves = this.CalculateAllValidMoves(playerOne ? BoardGameSide.Player : BoardGameSide.AI);
      if (this.HasMovesAvailable(ref allValidMoves))
        return;
      MBDebug.Print("Player has no available moves! " + (playerOne ? "PLAYER ONE" : "PLAYER TWO"));
      this._blockingPawns = this.GetBlockingPawns(playerOne);
      this.FocusBlockingPawns();
      if (!playerOne)
        return;
      InformationManager.DisplayMessage(new InformationMessage(new TextObject("{=GwHPEgsv}You can't move. Chose one of the opponent's pawns to remove and make a move").ToString()));
    }

    private void FocusBlockingPawns()
    {
      foreach (KeyValuePair<PawnBase, int> blockingPawn in this._blockingPawns)
        blockingPawn.Key.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnSelectedFactor);
    }

    private void UnfocusBlockingPawns()
    {
      foreach (KeyValuePair<PawnBase, int> blockingPawn in this._blockingPawns)
        blockingPawn.Key.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnUnselectedFactor);
      this._blockingPawns.Clear();
    }

    private BoardGameSeega.BarrierInfo CheckIfBarrier(Vec2i pawnNewPos)
    {
      if (pawnNewPos.X > 0 && pawnNewPos.X < BoardGameSeega.BoardWidth - 1)
      {
        PawnBase pawnOnTile1 = this.GetTile(pawnNewPos.X, 0).PawnOnTile;
        if (pawnOnTile1 != null)
        {
          for (int y = 1; y < BoardGameSeega.BoardHeight; ++y)
          {
            PawnBase pawnOnTile2 = this.GetTile(pawnNewPos.X, y).PawnOnTile;
            if (pawnOnTile2 != null && pawnOnTile2.PlayerOne == pawnOnTile1.PlayerOne)
            {
              if (y == BoardGameSeega.BoardHeight - 1)
                return new BoardGameSeega.BarrierInfo(false, pawnNewPos.X, pawnOnTile1.PlayerOne);
            }
            else
              break;
          }
        }
      }
      if (pawnNewPos.Y > 0 && pawnNewPos.Y < BoardGameSeega.BoardHeight - 1)
      {
        PawnBase pawnOnTile3 = this.GetTile(0, pawnNewPos.Y).PawnOnTile;
        if (pawnOnTile3 != null)
        {
          for (int x = 1; x < BoardGameSeega.BoardWidth; ++x)
          {
            PawnBase pawnOnTile4 = this.GetTile(x, pawnNewPos.Y).PawnOnTile;
            if (pawnOnTile4 != null && pawnOnTile4.PlayerOne == pawnOnTile3.PlayerOne)
            {
              if (x == BoardGameSeega.BoardWidth - 1)
                return new BoardGameSeega.BarrierInfo(true, pawnNewPos.Y, pawnOnTile3.PlayerOne);
            }
            else
              break;
          }
        }
      }
      return (BoardGameSeega.BarrierInfo) null;
    }

    private bool CheckIfUnitsIsolatedByBarrier(Vec2i pawnNewPos)
    {
      BoardGameSeega.BarrierInfo barrierInfo = this.CheckIfBarrier(pawnNewPos);
      if (barrierInfo == null)
        return false;
      bool flag1 = false;
      bool flag2 = false;
      foreach (PawnSeega pawnSeega in barrierInfo.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        if (!pawnSeega.Captured)
        {
          if ((barrierInfo.IsHorizontal ? pawnSeega.Y : pawnSeega.X) > barrierInfo.Position)
            flag1 = true;
          if ((barrierInfo.IsHorizontal ? pawnSeega.Y : pawnSeega.X) < barrierInfo.Position)
            flag2 = true;
        }
      }
      return !(flag1 & flag2);
    }

    public class BarrierInfo
    {
      public bool IsHorizontal;
      public int Position;
      public bool PlayerOne;

      public BarrierInfo(bool isHor, int pos, bool playerOne)
      {
        this.IsHorizontal = isHor;
        this.Position = pos;
        this.PlayerOne = playerOne;
      }
    }

    public struct BoardInformation
    {
      public readonly BoardGameSeega.PawnInformation[] PawnInformation;
      public readonly TileBaseInformation[,] TileInformation;

      public BoardInformation(
        ref BoardGameSeega.PawnInformation[] pawns,
        ref TileBaseInformation[,] tiles)
      {
        this.PawnInformation = pawns;
        this.TileInformation = tiles;
      }
    }

    public struct PawnInformation
    {
      public readonly int X;
      public readonly int Y;
      public readonly int PrevX;
      public readonly int PrevY;
      public readonly bool MovedThisTurn;
      public readonly bool IsCaptured;
      public readonly Vec3 Position;

      public PawnInformation(
        int x,
        int y,
        int prevX,
        int prevY,
        bool movedThisTurn,
        bool captured,
        Vec3 position)
      {
        this.X = x;
        this.Y = y;
        this.PrevX = prevX;
        this.PrevY = prevY;
        this.MovedThisTurn = movedThisTurn;
        this.IsCaptured = captured;
        this.Position = position;
      }
    }
  }
}
