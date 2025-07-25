// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGameKonane
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
  public class BoardGameKonane : BoardGameBase
  {
    public const int WhitePawnCount = 18;
    public const int BlackPawnCount = 18;
    public static readonly int BoardWidth = 6;
    public static readonly int BoardHeight = 6;
    public List<PawnBase> RemovablePawns = new List<PawnBase>();
    private BoardGameKonane.BoardInformation _startState;

    public override int TileCount => BoardGameKonane.BoardWidth * BoardGameKonane.BoardHeight;

    protected override bool RotateBoard => true;

    protected override bool PreMovementStagePresent => true;

    protected override bool DiceRollRequired => false;

    public BoardGameKonane(MissionBoardGameLogic mission, PlayerTurn startingPlayer)
      : base(mission, new TextObject("{=5DSafcSC}Konane"), startingPlayer)
    {
      if (this.Tiles == null)
        this.Tiles = new TileBase[this.TileCount];
      this.SelectedUnit = (PawnBase) null;
      this.PawnUnselectedFactor = 4287395960U;
    }

    public override void InitializeUnits()
    {
      this.PlayerOneUnits.Clear();
      this.PlayerTwoUnits.Clear();
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      for (int index = 0; index < 18; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_one_unit_" + (object) index);
        pawnBaseList1.Add(this.InitializeUnit((PawnBase) new PawnKonane(entityWithTag, this.PlayerWhoStarted == PlayerTurn.PlayerOne)));
      }
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 18; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_two_unit_" + (object) index);
        pawnBaseList2.Add(this.InitializeUnit((PawnBase) new PawnKonane(entityWithTag, this.PlayerWhoStarted != 0)));
      }
    }

    public override void InitializeTiles()
    {
      IEnumerable<GameEntity> source1 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("tile_")))));
      IEnumerable<GameEntity> source2 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("decal_")))));
      for (int x = 0; x < BoardGameKonane.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameKonane.BoardHeight; ++y)
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
      if (this._startState.PawnInformation == null)
        this.PreplaceUnits();
      else
        this.RestoreStartingBoard();
    }

    public override List<Move> CalculateValidMoves(PawnBase pawn)
    {
      List<Move> validMoves = new List<Move>();
      PawnKonane pawnKonane = pawn as PawnKonane;
      if (pawn != null)
      {
        int x = pawnKonane.X;
        int y = pawnKonane.Y;
        if (!this.InPreMovementStage && pawn.IsPlaced)
        {
          if (x > 1)
          {
            PawnBase pawnOnTile1 = this.GetTile(x - 1, y).PawnOnTile;
            PawnBase pawnOnTile2 = this.GetTile(x - 2, y).PawnOnTile;
            if (pawnOnTile1 != null && pawnOnTile2 == null && pawnOnTile1.PlayerOne != pawn.PlayerOne)
            {
              Move move1;
              move1.Unit = pawn;
              move1.GoalTile = this.GetTile(x - 2, y);
              validMoves.Add(move1);
              if (x > 3)
              {
                PawnBase pawnOnTile3 = this.GetTile(x - 3, y).PawnOnTile;
                PawnBase pawnOnTile4 = this.GetTile(x - 4, y).PawnOnTile;
                if (pawnOnTile3 != null && pawnOnTile4 == null && pawnOnTile3.PlayerOne != pawn.PlayerOne)
                {
                  Move move2;
                  move2.Unit = pawn;
                  move2.GoalTile = this.GetTile(x - 4, y);
                  validMoves.Add(move2);
                }
              }
            }
          }
          if (x < BoardGameKonane.BoardWidth - 2)
          {
            PawnBase pawnOnTile5 = this.GetTile(x + 1, y).PawnOnTile;
            PawnBase pawnOnTile6 = this.GetTile(x + 2, y).PawnOnTile;
            if (pawnOnTile5 != null && pawnOnTile6 == null && pawnOnTile5.PlayerOne != pawn.PlayerOne)
            {
              Move move3;
              move3.Unit = pawn;
              move3.GoalTile = this.GetTile(x + 2, y);
              validMoves.Add(move3);
              if (x < 2)
              {
                PawnBase pawnOnTile7 = this.GetTile(x + 3, y).PawnOnTile;
                PawnBase pawnOnTile8 = this.GetTile(x + 4, y).PawnOnTile;
                if (pawnOnTile7 != null && pawnOnTile8 == null && pawnOnTile7.PlayerOne != pawn.PlayerOne)
                {
                  Move move4;
                  move4.Unit = pawn;
                  move4.GoalTile = this.GetTile(x + 4, y);
                  validMoves.Add(move4);
                }
              }
            }
          }
          if (y > 1)
          {
            PawnBase pawnOnTile9 = this.GetTile(x, y - 1).PawnOnTile;
            PawnBase pawnOnTile10 = this.GetTile(x, y - 2).PawnOnTile;
            if (pawnOnTile9 != null && pawnOnTile10 == null && pawnOnTile9.PlayerOne != pawn.PlayerOne)
            {
              Move move5;
              move5.Unit = pawn;
              move5.GoalTile = this.GetTile(x, y - 2);
              validMoves.Add(move5);
              if (y > 3)
              {
                PawnBase pawnOnTile11 = this.GetTile(x, y - 3).PawnOnTile;
                PawnBase pawnOnTile12 = this.GetTile(x, y - 4).PawnOnTile;
                if (pawnOnTile11 != null && pawnOnTile12 == null && pawnOnTile11.PlayerOne != pawn.PlayerOne)
                {
                  Move move6;
                  move6.Unit = pawn;
                  move6.GoalTile = this.GetTile(x, y - 4);
                  validMoves.Add(move6);
                }
              }
            }
          }
          if (y < BoardGameKonane.BoardHeight - 2)
          {
            PawnBase pawnOnTile13 = this.GetTile(x, y + 1).PawnOnTile;
            PawnBase pawnOnTile14 = this.GetTile(x, y + 2).PawnOnTile;
            if (pawnOnTile13 != null && pawnOnTile14 == null && pawnOnTile13.PlayerOne != pawn.PlayerOne)
            {
              Move move7;
              move7.Unit = pawn;
              move7.GoalTile = this.GetTile(x, y + 2);
              validMoves.Add(move7);
              if (y < 2)
              {
                PawnBase pawnOnTile15 = this.GetTile(x, y + 3).PawnOnTile;
                PawnBase pawnOnTile16 = this.GetTile(x, y + 4).PawnOnTile;
                if (pawnOnTile15 != null && pawnOnTile16 == null && pawnOnTile15.PlayerOne != pawn.PlayerOne)
                {
                  Move move8;
                  move8.Unit = pawn;
                  move8.GoalTile = this.GetTile(x, y + 4);
                  validMoves.Add(move8);
                }
              }
            }
          }
        }
      }
      return validMoves;
    }

    public override void SetPawnCaptured(PawnBase pawn, bool fake = false)
    {
      base.SetPawnCaptured(pawn, fake);
      PawnKonane pawn1 = pawn as PawnKonane;
      this.GetTile(pawn1.X, pawn1.Y).PawnOnTile = (PawnBase) null;
      pawn1.PrevX = pawn1.X;
      pawn1.PrevY = pawn1.Y;
      pawn1.X = -1;
      pawn1.Y = -1;
      if (fake)
        return;
      this.RemovePawnFromBoard((PawnBase) pawn1, 0.6f);
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

    protected override void HandlePreMovementStage(float dt)
    {
      if (this.InputManager.IsHotKeyPressed("BoardGamePawnSelect"))
      {
        PawnBase hoveredPawnIfAny = this.GetHoveredPawnIfAny();
        if (hoveredPawnIfAny == null || !this.RemovablePawns.Contains(hoveredPawnIfAny))
          return;
        this.SetPawnCaptured(hoveredPawnIfAny, false);
        this.UnFocusRemovablePawns();
        this.EndTurn();
      }
      else
        this.SelectedUnit = (PawnBase) null;
    }

    protected override void HandlePreMovementStageAI(Move move)
    {
      this.SetPawnCaptured(move.Unit, false);
      this.EndTurn();
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
      PawnKonane pawn1 = pawn as PawnKonane;
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
      float speed = 0.5f;
      if (!this.InPreMovementStage)
        speed = 0.3f;
      pawn1.MovingToDifferentTile = pawn1.X != tile2D.X || pawn1.Y != tile2D.Y;
      pawn1.PrevX = pawn1.X;
      pawn1.PrevY = pawn1.Y;
      pawn1.X = tile2D.X;
      pawn1.Y = tile2D.Y;
      if (pawn1.PrevX != -1 && pawn1.PrevY != -1)
        this.GetTile(pawn1.PrevX, pawn1.PrevY).PawnOnTile = (PawnBase) null;
      tile.PawnOnTile = (PawnBase) pawn1;
      if (instantMove || this.InPreMovementStage || this.JustStoppedDraggingUnit)
      {
        pawn1.AddGoalPosition(globalPosition);
        pawn1.MovePawnToGoalPositionsDelayed(instantMove, speed, true, delay);
      }
      else
      {
        Tile2D tile1 = this.GetTile(pawn1.PrevX, pawn1.PrevY) as Tile2D;
        this.SetAllGoalPositions(pawn1, tile1, speed);
      }
      if (instantMove && !this.InPreMovementStage)
        this.CheckWhichPawnsAreCaptured(pawn1);
      else if (pawn1 == this.SelectedUnit & instantMove)
        this.SelectedUnit = (PawnBase) null;
      this.ClearValidMoves();
    }

    protected override void SwitchPlayerTurn()
    {
      if ((this.PlayerTurn == PlayerTurn.PlayerOneWaiting || this.PlayerTurn == PlayerTurn.PlayerTwoWaiting) && !this.InPreMovementStage && this.SelectedUnit != null)
        this.CheckWhichPawnsAreCaptured(this.SelectedUnit as PawnKonane);
      this.SelectedUnit = (PawnBase) null;
      bool flag = false;
      if (this.InPreMovementStage)
      {
        this.InPreMovementStage = !this.CheckPlacementStageOver();
        flag = !this.InPreMovementStage;
      }
      if (!flag)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOneWaiting)
          this.PlayerTurn = PlayerTurn.PlayerTwo;
        else if (this.PlayerTurn == PlayerTurn.PlayerTwoWaiting)
          this.PlayerTurn = PlayerTurn.PlayerOne;
      }
      if (this.InPreMovementStage)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
          this.CheckForRemovablePawns(true);
        else if (this.PlayerTurn == PlayerTurn.PlayerTwo)
          this.CheckForRemovablePawns(false);
      }
      else if (flag)
        this.EndTurn();
      else
        this.CheckGameEnded();
      base.SwitchPlayerTurn();
    }

    protected override bool CheckGameEnded()
    {
      bool flag = false;
      if (this.PlayerTurn == PlayerTurn.PlayerTwo)
      {
        List<List<Move>> allValidMoves = this.CalculateAllValidMoves(BoardGameSide.AI);
        if (!this.HasMovesAvailable(ref allValidMoves))
        {
          this.OnVictory();
          this.ReadyToPlay = false;
          flag = true;
        }
      }
      else if (this.PlayerTurn == PlayerTurn.PlayerOne)
      {
        List<List<Move>> allValidMoves = this.CalculateAllValidMoves(BoardGameSide.Player);
        if (!this.HasMovesAvailable(ref allValidMoves))
        {
          this.OnDefeat();
          this.ReadyToPlay = false;
          flag = true;
        }
      }
      return flag;
    }

    protected override void OnAfterBoardSetUp()
    {
      if (this._startState.PawnInformation == null)
        this._startState = this.TakeBoardSnapshot();
      this.ReadyToPlay = true;
      this.CheckForRemovablePawns(this.PlayerWhoStarted == PlayerTurn.PlayerOne);
    }

    public void AIMakeMove(Move move)
    {
      Tile2D goalTile = move.GoalTile as Tile2D;
      PawnKonane unit = move.Unit as PawnKonane;
      if (goalTile.PawnOnTile != null)
        return;
      unit.PrevX = unit.X;
      unit.PrevY = unit.Y;
      unit.X = goalTile.X;
      unit.Y = goalTile.Y;
      this.GetTile(unit.PrevX, unit.PrevY).PawnOnTile = (PawnBase) null;
      goalTile.PawnOnTile = (PawnBase) unit;
      this.CheckWhichPawnsAreCaptured(unit, true);
    }

    public int CheckForRemovablePawns(bool playerOne)
    {
      this.UnFocusRemovablePawns();
      switch (playerOne ? this.GetPlayerTwoUnitsDead() : this.GetPlayerOneUnitsDead())
      {
        case 0:
          using (List<PawnBase>.Enumerator enumerator = (playerOne ? this.PlayerOneUnits : this.PlayerTwoUnits).GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              PawnKonane current = (PawnKonane) enumerator.Current;
              if (current.X == 0 && current.Y == 0)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 5 && current.Y == 0)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 0 && current.Y == 5)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 5 && current.Y == 5)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 2 && current.Y == 2)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 3 && current.Y == 2)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 2 && current.Y == 3)
                this.RemovablePawns.Add((PawnBase) current);
              else if (current.X == 3 && current.Y == 3)
                this.RemovablePawns.Add((PawnBase) current);
            }
            break;
          }
        case 1:
          using (List<PawnBase>.Enumerator enumerator = (playerOne ? this.PlayerTwoUnits : this.PlayerOneUnits).GetEnumerator())
          {
            while (enumerator.MoveNext())
            {
              PawnKonane current = (PawnKonane) enumerator.Current;
              if (current.X == -1 && current.Y == -1)
              {
                if (current.PrevX == 0 && current.PrevY == 0)
                {
                  this.RemovablePawns.Add(this.GetTile(1, 0).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(0, 1).PawnOnTile);
                }
                else if (current.PrevX == 5 && current.PrevY == 0)
                {
                  this.RemovablePawns.Add(this.GetTile(4, 0).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(5, 1).PawnOnTile);
                }
                else if (current.PrevX == 0 && current.PrevY == 5)
                {
                  this.RemovablePawns.Add(this.GetTile(0, 4).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(1, 5).PawnOnTile);
                }
                else if (current.PrevX == 5 && current.PrevY == 5)
                {
                  this.RemovablePawns.Add(this.GetTile(5, 4).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(4, 5).PawnOnTile);
                }
                if (current.PrevX == 2 && current.PrevY == 2)
                {
                  this.RemovablePawns.Add(this.GetTile(2, 3).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(3, 2).PawnOnTile);
                  break;
                }
                if (current.PrevX == 3 && current.PrevY == 2)
                {
                  this.RemovablePawns.Add(this.GetTile(2, 2).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(3, 3).PawnOnTile);
                  break;
                }
                if (current.PrevX == 2 && current.PrevY == 3)
                {
                  this.RemovablePawns.Add(this.GetTile(3, 3).PawnOnTile);
                  this.RemovablePawns.Add(this.GetTile(2, 2).PawnOnTile);
                  break;
                }
                if (current.PrevX == 3)
                {
                  if (current.PrevY == 3)
                  {
                    this.RemovablePawns.Add(this.GetTile(2, 3).PawnOnTile);
                    this.RemovablePawns.Add(this.GetTile(3, 2).PawnOnTile);
                    break;
                  }
                  break;
                }
                break;
              }
            }
            break;
          }
        default:
          Debug.FailedAssert("[DEBUG]This should not be reached!", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameKonane.cs", nameof (CheckForRemovablePawns), 654);
          break;
      }
      this.FocusRemovablePawns();
      return this.RemovablePawns.Count;
    }

    public BoardGameKonane.BoardInformation TakeBoardSnapshot()
    {
      BoardGameKonane.PawnInformation[] pawns = new BoardGameKonane.PawnInformation[this.PlayerOneUnits.Count + this.PlayerTwoUnits.Count];
      TileBaseInformation[,] tiles = new TileBaseInformation[BoardGameKonane.BoardWidth, BoardGameKonane.BoardHeight];
      int num = 0;
      foreach (PawnKonane pawnKonane in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
        pawns[num++] = new BoardGameKonane.PawnInformation(pawnKonane.X, pawnKonane.Y, pawnKonane.PrevX, pawnKonane.PrevY, pawnKonane.Captured, pawnKonane.Entity.GlobalPosition);
      foreach (PawnKonane pawnKonane in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
        pawns[num++] = new BoardGameKonane.PawnInformation(pawnKonane.X, pawnKonane.Y, pawnKonane.PrevX, pawnKonane.PrevY, pawnKonane.Captured, pawnKonane.Entity.GlobalPosition);
      for (int x = 0; x < BoardGameKonane.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameKonane.BoardHeight; ++y)
          tiles[x, y] = new TileBaseInformation(ref this.GetTile(x, y).PawnOnTile);
      }
      return new BoardGameKonane.BoardInformation(ref pawns, ref tiles);
    }

    public void UndoMove(ref BoardGameKonane.BoardInformation board)
    {
      int index = 0;
      foreach (PawnKonane pawnKonane in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
      {
        pawnKonane.X = board.PawnInformation[index].X;
        pawnKonane.Y = board.PawnInformation[index].Y;
        pawnKonane.PrevX = board.PawnInformation[index].PrevX;
        pawnKonane.PrevY = board.PawnInformation[index].PrevY;
        pawnKonane.Captured = board.PawnInformation[index].IsCaptured;
        ++index;
      }
      foreach (PawnKonane pawnKonane in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        pawnKonane.X = board.PawnInformation[index].X;
        pawnKonane.Y = board.PawnInformation[index].Y;
        pawnKonane.PrevX = board.PawnInformation[index].PrevX;
        pawnKonane.PrevY = board.PawnInformation[index].PrevY;
        pawnKonane.Captured = board.PawnInformation[index].IsCaptured;
        ++index;
      }
      for (int x = 0; x < BoardGameKonane.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameKonane.BoardHeight; ++y)
          this.GetTile(x, y).PawnOnTile = board.TileInformation[x, y].PawnOnTile;
      }
    }

    protected void CheckWhichPawnsAreCaptured(PawnKonane pawn, bool fake = false)
    {
      int x = pawn.X;
      int y = pawn.Y;
      int prevX = pawn.PrevX;
      int prevY = pawn.PrevY;
      bool flag = false;
      if (x == -1 || y == -1 || prevX == -1 || prevY == -1)
        Debug.FailedAssert("x == -1 || y == -1 || prevX == -1 || prevY == -1", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameKonane.cs", nameof (CheckWhichPawnsAreCaptured), 737);
      Vec2i vec2i1 = new Vec2i(x - prevX, y - prevY);
      if (vec2i1.X == 4 || vec2i1.Y == 4 || vec2i1.X == -4 || vec2i1.Y == -4)
        flag = true;
      else if (vec2i1.X == 2 || vec2i1.Y == 2 || vec2i1.X == -2 || vec2i1.Y == -2)
        flag = false;
      else
        Debug.FailedAssert(nameof (CheckWhichPawnsAreCaptured), "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameKonane.cs", nameof (CheckWhichPawnsAreCaptured), 752);
      if (!flag)
      {
        Vec2i vec2i2 = new Vec2i(vec2i1.X / 2, vec2i1.Y / 2);
        Vec2i vec2i3 = new Vec2i(x - vec2i2.X, y - vec2i2.Y);
        this.SetPawnCaptured(this.GetTile(vec2i3.X, vec2i3.Y).PawnOnTile, fake);
      }
      else
      {
        Vec2i vec2i4 = new Vec2i(vec2i1.X / 4, vec2i1.Y / 4);
        Vec2i vec2i5 = new Vec2i(x - vec2i4.X, y - vec2i4.Y);
        Vec2i vec2i6 = new Vec2i(x - vec2i4.X - vec2i4.X * 2, y - vec2i4.Y - vec2i4.Y * 2);
        this.SetPawnCaptured(this.GetTile(vec2i5.X, vec2i5.Y).PawnOnTile, fake);
        this.SetPawnCaptured(this.GetTile(vec2i6.X, vec2i6.Y).PawnOnTile, fake);
      }
    }

    private void SetTile(TileBase tile, int x, int y)
    {
      this.Tiles[y * BoardGameKonane.BoardWidth + x] = tile;
    }

    private TileBase GetTile(int x, int y) => this.Tiles[y * BoardGameKonane.BoardWidth + x];

    private void FocusRemovablePawns()
    {
      foreach (PawnBase removablePawn in this.RemovablePawns)
        removablePawn.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnSelectedFactor);
    }

    private void UnFocusRemovablePawns()
    {
      foreach (PawnBase removablePawn in this.RemovablePawns)
        removablePawn.Entity.GetMetaMesh(0).SetFactor1Linear(this.PawnUnselectedFactor);
      this.RemovablePawns.Clear();
    }

    private void SetAllGoalPositions(PawnKonane pawn, Tile2D prevTile, float speed)
    {
      Vec3 globalPosition1 = prevTile.Entity.GlobalPosition;
      Vec3 globalPosition2 = this.GetTile(pawn.X, pawn.Y).Entity.GlobalPosition;
      bool flag = false;
      Vec2i vec2i1 = new Vec2i(pawn.X - prevTile.X, pawn.Y - prevTile.Y);
      if (vec2i1.X == 4 || vec2i1.Y == 4 || vec2i1.X == -4 || vec2i1.Y == -4)
        flag = true;
      if (!flag)
      {
        pawn.AddGoalPosition(globalPosition2);
      }
      else
      {
        Vec2i vec2i2 = new Vec2i(vec2i1.X / 4, vec2i1.Y / 4);
        pawn.AddGoalPosition(this.GetTile(prevTile.X + 2 * vec2i2.X, prevTile.Y + 2 * vec2i2.Y).Entity.GlobalPosition);
        pawn.AddGoalPosition(globalPosition2);
      }
      pawn.MovePawnToGoalPositions(false, speed);
    }

    private bool CheckPlacementStageOver()
    {
      bool flag = false;
      if (this.GetPlayerOneUnitsDead() + this.GetPlayerTwoUnitsDead() == 2)
        flag = true;
      return flag;
    }

    private void PreplaceUnits()
    {
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 18; ++index)
      {
        int x = index % 3 * 2;
        int y = index / 3;
        float delay = (float) (0.15000000596046448 * (double) (index + 1) + 0.25);
        if (y % 2 == 0)
        {
          this.MovePawnToTileDelayed(pawnBaseList1[index], this.GetTile(x, y), false, false, delay);
          this.MovePawnToTileDelayed(pawnBaseList2[index], this.GetTile(x + 1, y), false, false, delay);
        }
        else
        {
          this.MovePawnToTileDelayed(pawnBaseList1[index], this.GetTile(x + 1, y), false, false, delay);
          this.MovePawnToTileDelayed(pawnBaseList2[index], this.GetTile(x, y), false, false, delay);
        }
      }
    }

    private void RestoreStartingBoard()
    {
      int index = 0;
      foreach (PawnKonane pawn in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
      {
        if (this._startState.PawnInformation[index].X != -1)
        {
          if (this._startState.PawnInformation[index].X != pawn.X && this._startState.PawnInformation[index].Y != pawn.Y)
          {
            pawn.Reset();
            TileBase tile = this.GetTile(this._startState.PawnInformation[index].X, this._startState.PawnInformation[index].Y);
            this.MovePawnToTile((PawnBase) pawn, tile);
          }
        }
        else if (!pawn.Entity.GlobalPosition.NearlyEquals(this._startState.PawnInformation[index].Position))
        {
          if (pawn.X != -1 && this.GetTile(pawn.X, pawn.Y).PawnOnTile == pawn)
            this.GetTile(pawn.X, pawn.Y).PawnOnTile = (PawnBase) null;
          pawn.Reset();
          pawn.AddGoalPosition(this._startState.PawnInformation[index].Position);
          pawn.MovePawnToGoalPositions(false, 0.5f);
        }
        ++index;
      }
      foreach (PawnKonane pawn in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        if (this._startState.PawnInformation[index].X != -1)
        {
          if (this._startState.PawnInformation[index].X != pawn.X && this._startState.PawnInformation[index].Y != pawn.Y)
          {
            TileBase tile = this.GetTile(this._startState.PawnInformation[index].X, this._startState.PawnInformation[index].Y);
            this.MovePawnToTile((PawnBase) pawn, tile);
          }
        }
        else
        {
          if (pawn.X != -1 && this.GetTile(pawn.X, pawn.Y).PawnOnTile == pawn)
            this.GetTile(pawn.X, pawn.Y).PawnOnTile = (PawnBase) null;
          pawn.Reset();
          pawn.AddGoalPosition(this._startState.PawnInformation[index].Position);
          pawn.MovePawnToGoalPositions(false, 0.5f);
        }
        ++index;
      }
    }

    public struct BoardInformation
    {
      public readonly BoardGameKonane.PawnInformation[] PawnInformation;
      public readonly TileBaseInformation[,] TileInformation;

      public BoardInformation(
        ref BoardGameKonane.PawnInformation[] pawns,
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
      public readonly bool IsCaptured;
      public readonly Vec3 Position;

      public PawnInformation(int x, int y, int prevX, int prevY, bool captured, Vec3 position)
      {
        this.X = x;
        this.Y = y;
        this.PrevX = prevX;
        this.PrevY = prevY;
        this.IsCaptured = captured;
        this.Position = position;
      }
    }
  }
}
