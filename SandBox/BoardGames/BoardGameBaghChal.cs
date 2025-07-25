// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGameBaghChal
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
  public class BoardGameBaghChal : BoardGameBase
  {
    public const int UnitCountTiger = 4;
    public const int UnitCountGoat = 20;
    public static readonly int BoardWidth = 5;
    public static readonly int BoardHeight = 5;
    private List<PawnBase> _goatUnits;
    private List<PawnBase> _tigerUnits;

    public override int TileCount => BoardGameBaghChal.BoardWidth * BoardGameBaghChal.BoardHeight;

    protected override bool RotateBoard => true;

    protected override bool PreMovementStagePresent => true;

    protected override bool DiceRollRequired => false;

    public BoardGameBaghChal(MissionBoardGameLogic mission, PlayerTurn startingPlayer)
      : base(mission, new TextObject("{=zWoj91XY}BaghChal"), startingPlayer)
    {
      if (this.Tiles == null)
        this.Tiles = new TileBase[this.TileCount];
      this.SelectedUnit = (PawnBase) null;
      this.PawnUnselectedFactor = 4287395960U;
    }

    public override void InitializeUnits()
    {
      bool playerOne = this.PlayerWhoStarted == PlayerTurn.PlayerOne;
      if (this._goatUnits == null && this._tigerUnits == null)
      {
        this._goatUnits = playerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
        for (int index = 0; index < 20; ++index)
          this._goatUnits.Add(this.InitializeUnit((PawnBase) new PawnBaghChal(Mission.Current.Scene.FindEntityWithTag("player_one_unit_" + (object) index), playerOne, false)));
        this._tigerUnits = playerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
        for (int index = 0; index < 4; ++index)
          this._tigerUnits.Add(this.InitializeUnit((PawnBase) new PawnBaghChal(Mission.Current.Scene.FindEntityWithTag("player_two_unit_" + (object) index), !playerOne, true)));
      }
      else
      {
        if (this._goatUnits == this.PlayerOneUnits != playerOne)
        {
          List<PawnBase> playerOneUnits = this.PlayerOneUnits;
          this.PlayerOneUnits = this.PlayerTwoUnits;
          this.PlayerTwoUnits = playerOneUnits;
        }
        this._goatUnits = playerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
        this._tigerUnits = playerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
        foreach (PawnBase goatUnit in this._goatUnits)
        {
          goatUnit.Reset();
          goatUnit.SetPlayerOne(playerOne);
        }
        foreach (PawnBase tigerUnit in this._tigerUnits)
        {
          tigerUnit.Reset();
          tigerUnit.SetPlayerOne(!playerOne);
        }
      }
    }

    public override void InitializeTiles()
    {
      IEnumerable<GameEntity> source1 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("tile_")))));
      IEnumerable<GameEntity> source2 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("decal_")))));
      for (int x = 0; x < BoardGameBaghChal.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameBaghChal.BoardHeight; ++y)
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
    }

    public override List<List<Move>> CalculateAllValidMoves(BoardGameSide side)
    {
      List<List<Move>> allValidMoves = new List<List<Move>>();
      bool flag = true;
      foreach (PawnBaghChal pawn in side == BoardGameSide.AI ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        if ((flag || pawn.IsPlaced) && !pawn.Captured)
        {
          List<Move> validMoves = this.CalculateValidMoves((PawnBase) pawn);
          if (validMoves.Count > 0)
            allValidMoves.Add(validMoves);
          if (pawn.IsGoat && !pawn.IsPlaced)
            flag = false;
        }
      }
      return allValidMoves;
    }

    public override List<Move> CalculateValidMoves(PawnBase pawn)
    {
      List<Move> validMoves = new List<Move>();
      PawnBaghChal pawnBaghChal = pawn as PawnBaghChal;
      if (pawn != null)
      {
        int x = pawnBaghChal.X;
        int y = pawnBaghChal.Y;
        int num = pawnBaghChal.IsTiger ? 1 : 0;
        if ((num != 0 || !this.InPreMovementStage) && x >= 0 && x < BoardGameBaghChal.BoardWidth && y >= 0 && y < BoardGameBaghChal.BoardHeight)
        {
          if (x > 0 && this.GetTile(x - 1, y).PawnOnTile == null)
          {
            Move move;
            move.Unit = pawn;
            move.GoalTile = this.GetTile(x - 1, y);
            validMoves.Add(move);
          }
          if (x < BoardGameBaghChal.BoardWidth - 1 && this.GetTile(x + 1, y).PawnOnTile == null)
          {
            Move move;
            move.Unit = pawn;
            move.GoalTile = this.GetTile(x + 1, y);
            validMoves.Add(move);
          }
          if (y > 0 && this.GetTile(x, y - 1).PawnOnTile == null)
          {
            Move move;
            move.Unit = pawn;
            move.GoalTile = this.GetTile(x, y - 1);
            validMoves.Add(move);
          }
          if (y < BoardGameBaghChal.BoardHeight - 1 && this.GetTile(x, y + 1).PawnOnTile == null)
          {
            Move move;
            move.Unit = pawn;
            move.GoalTile = this.GetTile(x, y + 1);
            validMoves.Add(move);
          }
          if ((x + y) % 2 == 0)
          {
            Vec2i vec2i = new Vec2i(x + 1, y + 1);
            if (vec2i.X < BoardGameBaghChal.BoardWidth && vec2i.Y < BoardGameBaghChal.BoardHeight && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
            vec2i = new Vec2i(x - 1, y + 1);
            if (vec2i.X >= 0 && vec2i.Y < BoardGameBaghChal.BoardHeight && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
            vec2i = new Vec2i(x - 1, y - 1);
            if (vec2i.X >= 0 && vec2i.Y >= 0 && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
            vec2i = new Vec2i(x + 1, y - 1);
            if (vec2i.X < BoardGameBaghChal.BoardWidth && vec2i.Y >= 0 && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
          }
        }
        if (num != 0 && x >= 0 && x < BoardGameBaghChal.BoardWidth && y >= 0 && y < BoardGameBaghChal.BoardHeight)
        {
          if (x > 1)
          {
            PawnBaghChal pawnOnTile1 = this.GetTile(x - 1, y).PawnOnTile as PawnBaghChal;
            PawnBase pawnOnTile2 = this.GetTile(x - 2, y).PawnOnTile;
            if (pawnOnTile1 != null && !pawnOnTile1.IsTiger && pawnOnTile2 == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(x - 2, y);
              validMoves.Add(move);
            }
          }
          if (x < BoardGameBaghChal.BoardWidth - 2)
          {
            PawnBaghChal pawnOnTile3 = this.GetTile(x + 1, y).PawnOnTile as PawnBaghChal;
            PawnBase pawnOnTile4 = this.GetTile(x + 2, y).PawnOnTile;
            if (pawnOnTile3 != null && !pawnOnTile3.IsTiger && pawnOnTile4 == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(x + 2, y);
              validMoves.Add(move);
            }
          }
          if (y > 1)
          {
            PawnBaghChal pawnOnTile5 = this.GetTile(x, y - 1).PawnOnTile as PawnBaghChal;
            PawnBase pawnOnTile6 = this.GetTile(x, y - 2).PawnOnTile;
            if (pawnOnTile5 != null && !pawnOnTile5.IsTiger && pawnOnTile6 == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(x, y - 2);
              validMoves.Add(move);
            }
          }
          if (y < BoardGameBaghChal.BoardHeight - 2)
          {
            PawnBaghChal pawnOnTile7 = this.GetTile(x, y + 1).PawnOnTile as PawnBaghChal;
            PawnBase pawnOnTile8 = this.GetTile(x, y + 2).PawnOnTile;
            if (pawnOnTile7 != null && !pawnOnTile7.IsTiger && pawnOnTile8 == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(x, y + 2);
              validMoves.Add(move);
            }
          }
          if ((x + y) % 2 == 0)
          {
            Vec2i vec2i = new Vec2i(x + 2, y + 2);
            if (vec2i.X < BoardGameBaghChal.BoardWidth && vec2i.Y < BoardGameBaghChal.BoardHeight && this.GetTile(x + 1, y + 1).PawnOnTile is PawnBaghChal pawnOnTile9 && !pawnOnTile9.IsTiger && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
            vec2i = new Vec2i(x - 2, y + 2);
            if (vec2i.X >= 0 && vec2i.Y < BoardGameBaghChal.BoardHeight && this.GetTile(x - 1, y + 1).PawnOnTile is PawnBaghChal pawnOnTile10 && !pawnOnTile10.IsTiger && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
            vec2i = new Vec2i(x - 2, y - 2);
            if (vec2i.X >= 0 && vec2i.Y >= 0 && this.GetTile(x - 1, y - 1).PawnOnTile is PawnBaghChal pawnOnTile11 && !pawnOnTile11.IsTiger && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
            vec2i = new Vec2i(x + 2, y - 2);
            if (vec2i.X < BoardGameBaghChal.BoardWidth && vec2i.Y >= 0 && this.GetTile(x + 1, y - 1).PawnOnTile is PawnBaghChal pawnOnTile12 && !pawnOnTile12.IsTiger && this.GetTile(vec2i.X, vec2i.Y).PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.GetTile(vec2i.X, vec2i.Y);
              validMoves.Add(move);
            }
          }
        }
        if (num == 0 && this.InPreMovementStage && x == -1 && y == -1)
        {
          for (int index = 0; index < this.TileCount; ++index)
          {
            if (this.Tiles[index].PawnOnTile == null)
            {
              Move move;
              move.Unit = pawn;
              move.GoalTile = this.Tiles[index];
              validMoves.Add(move);
            }
          }
        }
      }
      return validMoves;
    }

    public override void SetPawnCaptured(PawnBase pawn, bool fake = false)
    {
      base.SetPawnCaptured(pawn, fake);
      PawnBaghChal pawn1 = pawn as PawnBaghChal;
      this.GetTile(pawn1.X, pawn1.Y).PawnOnTile = (PawnBase) null;
      pawn1.PrevX = pawn1.X;
      pawn1.PrevY = pawn1.Y;
      pawn1.X = -1;
      pawn1.Y = -1;
      if (fake)
        return;
      this.RemovePawnFromBoard((PawnBase) pawn1, 0.6f);
    }

    protected override void HandlePreMovementStage(float dt)
    {
      Move move = this.HandlePlayerInput(dt);
      if (!move.IsValid)
        return;
      this.MovePawnToTile(move.Unit, move.GoalTile);
    }

    protected override void HandlePreMovementStageAI(Move move)
    {
      this.MovePawnToTile(move.Unit, move.GoalTile);
    }

    protected override PawnBase SelectPawn(PawnBase pawn)
    {
      if (pawn.PlayerOne == (this.PlayerTurn == PlayerTurn.PlayerOne))
      {
        if (this.PlayerTurn == this.PlayerWhoStarted)
        {
          if (this.InPreMovementStage)
          {
            if (!pawn.IsPlaced && !pawn.Captured)
              this.SelectedUnit = pawn;
          }
          else
            this.SelectedUnit = pawn;
        }
        else
          this.SelectedUnit = pawn;
      }
      return pawn;
    }

    protected override void SwitchPlayerTurn()
    {
      if ((this.PlayerTurn == PlayerTurn.PlayerOneWaiting || this.PlayerTurn == PlayerTurn.PlayerTwoWaiting) && this.SelectedUnit != null)
        this.CheckIfPawnCaptures(this.SelectedUnit as PawnBaghChal);
      this.SelectedUnit = (PawnBase) null;
      if (this.PlayerTurn == PlayerTurn.PlayerOneWaiting)
        this.PlayerTurn = PlayerTurn.PlayerTwo;
      else if (this.PlayerTurn == PlayerTurn.PlayerTwoWaiting)
        this.PlayerTurn = PlayerTurn.PlayerOne;
      if (this.InPreMovementStage)
        this.InPreMovementStage = !this.CheckPlacementStageOver();
      this.CheckGameEnded();
      base.SwitchPlayerTurn();
    }

    protected override bool CheckGameEnded()
    {
      bool flag = false;
      if (this.PlayerTurn == PlayerTurn.PlayerTwo || this.PlayerTurn == PlayerTurn.PlayerOne)
      {
        List<List<Move>> allValidMoves = this.CalculateAllValidMoves(this.PlayerWhoStarted == PlayerTurn.PlayerOne ? BoardGameSide.AI : BoardGameSide.Player);
        if (!this.HasMovesAvailable(ref allValidMoves))
        {
          if (this.PlayerWhoStarted == PlayerTurn.PlayerOne)
            this.OnVictory();
          else
            this.OnDefeat();
          this.ReadyToPlay = false;
          flag = true;
        }
        else
        {
          int num = 0;
          foreach (PawnBase goatUnit in this._goatUnits)
          {
            if (goatUnit.Captured)
              ++num;
          }
          if (num >= 5)
          {
            if (this.PlayerWhoStarted == PlayerTurn.PlayerOne)
              this.OnDefeat();
            else
              this.OnVictory();
            this.ReadyToPlay = false;
            flag = true;
          }
        }
      }
      return flag;
    }

    protected override void OnAfterBoardRotated() => this.PreplaceUnits();

    protected override void OnAfterBoardSetUp() => this.ReadyToPlay = true;

    protected override void MovePawnToTileDelayed(
      PawnBase pawn,
      TileBase tile,
      bool instantMove,
      bool displayMessage,
      float delay)
    {
      base.MovePawnToTileDelayed(pawn, tile, instantMove, displayMessage, delay);
      Tile2D tile2D = tile as Tile2D;
      PawnBaghChal pawnBaghChal = pawn as PawnBaghChal;
      if (tile2D.PawnOnTile != null || pawnBaghChal == null)
        return;
      if (displayMessage)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_player").ToString()));
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_opponent").ToString()));
      }
      Vec3 globalPosition1 = tile2D.Entity.GlobalPosition;
      float speed = 0.5f;
      if (!this.InPreMovementStage)
        speed = 0.3f;
      pawnBaghChal.MovingToDifferentTile = pawnBaghChal.X != tile2D.X || pawnBaghChal.Y != tile2D.Y;
      pawnBaghChal.PrevX = pawnBaghChal.X;
      pawnBaghChal.PrevY = pawnBaghChal.Y;
      pawnBaghChal.X = tile2D.X;
      pawnBaghChal.Y = tile2D.Y;
      if (pawnBaghChal.PrevX != -1 && pawnBaghChal.PrevY != -1)
        this.GetTile(pawnBaghChal.PrevX, pawnBaghChal.PrevY).PawnOnTile = (PawnBase) null;
      tile2D.PawnOnTile = (PawnBase) pawnBaghChal;
      if ((double) pawnBaghChal.Entity.GlobalPosition.z < (double) globalPosition1.z)
      {
        Vec3 globalPosition2 = pawnBaghChal.Entity.GlobalPosition with
        {
          z = globalPosition1.z
        };
        pawnBaghChal.AddGoalPosition(globalPosition2);
      }
      pawnBaghChal.AddGoalPosition(globalPosition1);
      pawnBaghChal.MovePawnToGoalPositionsDelayed(instantMove, speed, this.JustStoppedDraggingUnit, delay);
      if (instantMove && !this.InPreMovementStage)
      {
        this.CheckIfPawnCaptures(this.SelectedUnit as PawnBaghChal);
      }
      else
      {
        if (!(pawnBaghChal == this.SelectedUnit & instantMove))
          return;
        this.SelectedUnit = (PawnBase) null;
      }
    }

    public void AIMakeMove(Move move)
    {
      Tile2D goalTile = move.GoalTile as Tile2D;
      PawnBaghChal unit = move.Unit as PawnBaghChal;
      if (goalTile.PawnOnTile != null)
        return;
      unit.PrevX = unit.X;
      unit.PrevY = unit.Y;
      unit.X = goalTile.X;
      unit.Y = goalTile.Y;
      if (unit.PrevX != -1 && unit.PrevY != -1)
        this.GetTile(unit.PrevX, unit.PrevY).PawnOnTile = (PawnBase) null;
      goalTile.PawnOnTile = (PawnBase) unit;
      this.CheckIfPawnCaptures(unit, true);
    }

    public BoardGameBaghChal.BoardInformation TakeBoardSnapshot()
    {
      BoardGameBaghChal.PawnInformation[] pawns = new BoardGameBaghChal.PawnInformation[this.PlayerOneUnits.Count + this.PlayerTwoUnits.Count];
      TileBaseInformation[,] tiles = new TileBaseInformation[BoardGameBaghChal.BoardWidth, BoardGameBaghChal.BoardHeight];
      int num = 0;
      foreach (PawnBaghChal goatUnit in this._goatUnits)
        pawns[num++] = new BoardGameBaghChal.PawnInformation(goatUnit.X, goatUnit.Y, goatUnit.PrevX, goatUnit.PrevY, goatUnit.Captured, goatUnit.Entity.GlobalPosition);
      foreach (PawnBaghChal tigerUnit in this._tigerUnits)
        pawns[num++] = new BoardGameBaghChal.PawnInformation(tigerUnit.X, tigerUnit.Y, tigerUnit.PrevX, tigerUnit.PrevY, tigerUnit.Captured, tigerUnit.Entity.GlobalPosition);
      for (int x = 0; x < BoardGameBaghChal.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameBaghChal.BoardHeight; ++y)
          tiles[x, y] = new TileBaseInformation(ref this.GetTile(x, y).PawnOnTile);
      }
      return new BoardGameBaghChal.BoardInformation(ref pawns, ref tiles);
    }

    public void UndoMove(ref BoardGameBaghChal.BoardInformation board)
    {
      int index = 0;
      foreach (PawnBaghChal goatUnit in this._goatUnits)
      {
        goatUnit.X = board.PawnInformation[index].X;
        goatUnit.Y = board.PawnInformation[index].Y;
        goatUnit.PrevX = board.PawnInformation[index].PrevX;
        goatUnit.PrevY = board.PawnInformation[index].PrevY;
        goatUnit.Captured = board.PawnInformation[index].Captured;
        ++index;
      }
      foreach (PawnBaghChal tigerUnit in this._tigerUnits)
      {
        tigerUnit.X = board.PawnInformation[index].X;
        tigerUnit.Y = board.PawnInformation[index].Y;
        tigerUnit.PrevX = board.PawnInformation[index].PrevX;
        tigerUnit.PrevY = board.PawnInformation[index].PrevY;
        tigerUnit.Captured = board.PawnInformation[index].Captured;
        ++index;
      }
      for (int x = 0; x < BoardGameBaghChal.BoardWidth; ++x)
      {
        for (int y = 0; y < BoardGameBaghChal.BoardHeight; ++y)
          this.GetTile(x, y).PawnOnTile = board.TileInformation[x, y].PawnOnTile;
      }
    }

    public PawnBaghChal GetANonePlacedGoat()
    {
      foreach (PawnBaghChal goatUnit in this._goatUnits)
      {
        if (!goatUnit.Captured && !goatUnit.IsPlaced)
          return goatUnit;
      }
      return (PawnBaghChal) null;
    }

    protected void CheckIfPawnCaptures(PawnBaghChal pawn, bool fake = false)
    {
      if (!pawn.IsTiger)
        return;
      int x = pawn.X;
      int y = pawn.Y;
      int prevX = pawn.PrevX;
      int prevY = pawn.PrevY;
      if (x == -1 || y == -1 || prevX == -1 || prevY == -1)
        Debug.FailedAssert("x == -1 || y == -1 || prevX == -1 || prevY == -1", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\BoardGameBaghChal.cs", nameof (CheckIfPawnCaptures), 816);
      Vec2i vec2i1 = new Vec2i(x - prevX, y - prevY);
      Vec2i vec2i2 = new Vec2i(vec2i1.X / 2, vec2i1.Y / 2);
      int num = vec2i1.X + vec2i1.Y;
      if (x == prevX || y == prevY)
      {
        if (num == 1 || num == -1)
          return;
      }
      else if (vec2i1.X == 1 || vec2i1.X == -1)
        return;
      Vec2i vec2i3 = new Vec2i(x - vec2i2.X, y - vec2i2.Y);
      this.SetPawnCaptured(this.GetTile(vec2i3.X, vec2i3.Y).PawnOnTile, fake);
    }

    private void PreplaceUnits()
    {
      this.MovePawnToTileDelayed(this._tigerUnits[0], this.GetTile(0, 0), false, false, 0.4f);
      this.MovePawnToTileDelayed(this._tigerUnits[1], this.GetTile(4, 0), false, false, 0.55f);
      this.MovePawnToTileDelayed(this._tigerUnits[2], this.GetTile(0, 4), false, false, 0.700000048f);
      this.MovePawnToTileDelayed(this._tigerUnits[3], this.GetTile(4, 4), false, false, 0.85f);
      for (int index = 0; index < 20; ++index)
      {
        PawnBaghChal goatUnit = this._goatUnits[index] as PawnBaghChal;
        MatrixFrame frame = goatUnit.Entity.GetGlobalFrame();
        MatrixFrame initialFrame = goatUnit.InitialFrame;
        if (this.PlayerWhoStarted != PlayerTurn.PlayerOne)
          initialFrame.rotation.RotateAboutUp(3.14159274f);
        goatUnit.Entity.SetFrame(ref initialFrame);
        Vec3 origin = goatUnit.Entity.GetGlobalFrame().origin;
        goatUnit.Entity.SetGlobalFrame(in frame);
        if (!goatUnit.Entity.GlobalPosition.NearlyEquals(origin))
        {
          Vec3 globalPosition = goatUnit.Entity.GlobalPosition with
          {
            z = this.BoardEntity.GlobalBoxMax.z
          };
          goatUnit.AddGoalPosition(globalPosition);
          globalPosition.x = origin.x;
          globalPosition.y = origin.y;
          goatUnit.AddGoalPosition(globalPosition);
          goatUnit.AddGoalPosition(origin);
          goatUnit.MovePawnToGoalPositions(false, 0.5f);
        }
      }
    }

    private bool CheckPlacementStageOver()
    {
      bool flag = false;
      int num = 0;
      foreach (PawnBaghChal goatUnit in this._goatUnits)
      {
        if (goatUnit.Captured || goatUnit.IsPlaced)
          ++num;
      }
      if (num == 20)
        flag = true;
      return flag;
    }

    private void SetTile(TileBase tile, int x, int y)
    {
      this.Tiles[y * BoardGameBaghChal.BoardWidth + x] = tile;
    }

    private TileBase GetTile(int x, int y) => this.Tiles[y * BoardGameBaghChal.BoardWidth + x];

    public struct BoardInformation
    {
      public readonly BoardGameBaghChal.PawnInformation[] PawnInformation;
      public readonly TileBaseInformation[,] TileInformation;

      public BoardInformation(
        ref BoardGameBaghChal.PawnInformation[] pawns,
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
      public readonly bool Captured;
      public readonly Vec3 Position;

      public PawnInformation(int x, int y, int prevX, int prevY, bool captured, Vec3 position)
      {
        this.X = x;
        this.Y = y;
        this.PrevX = prevX;
        this.PrevY = prevY;
        this.Captured = captured;
        this.Position = position;
      }
    }
  }
}
