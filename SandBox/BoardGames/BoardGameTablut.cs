// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGameTablut
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
  public class BoardGameTablut : BoardGameBase
  {
    public const int BoardWidth = 9;
    public const int BoardHeight = 9;
    public const int AttackerPawnCount = 16;
    public const int DefenderPawnCount = 9;
    private BoardGameTablut.BoardInformation _startState;

    public override int TileCount => 81;

    protected override bool RotateBoard => false;

    protected override bool PreMovementStagePresent => false;

    protected override bool DiceRollRequired => false;

    private PawnTablut King { get; set; }

    public BoardGameTablut(MissionBoardGameLogic mission, PlayerTurn startingPlayer)
      : base(mission, new TextObject("{=qeKskdiY}Tablut"), startingPlayer)
    {
      this.SelectedUnit = (PawnBase) null;
      this.PawnUnselectedFactor = 4287395960U;
    }

    public static bool IsCitadelTile(int tileX, int tileY) => tileX == 4 && tileY == 4;

    public override void InitializeUnits()
    {
      this.PlayerOneUnits.Clear();
      this.PlayerTwoUnits.Clear();
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      for (int index = 0; index < 16; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_one_unit_" + (object) index);
        pawnBaseList1.Add(this.InitializeUnit((PawnBase) new PawnTablut(entityWithTag, this.PlayerWhoStarted == PlayerTurn.PlayerOne)));
      }
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 9; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_two_unit_" + (object) index);
        pawnBaseList2.Add(this.InitializeUnit((PawnBase) new PawnTablut(entityWithTag, this.PlayerWhoStarted != 0)));
      }
      this.King = pawnBaseList2[0] as PawnTablut;
    }

    public override void InitializeTiles()
    {
      IEnumerable<GameEntity> source1 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("tile_")))));
      IEnumerable<GameEntity> source2 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("decal_")))));
      if (this.Tiles == null)
        this.Tiles = new TileBase[this.TileCount];
      for (int x = 0; x < 9; ++x)
      {
        for (int y = 0; y < 9; ++y)
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
      if (this._startState.PawnInformation == null)
        this.PreplaceUnits();
      else
        this.RestoreStartingBoard();
    }

    public override List<Move> CalculateValidMoves(PawnBase pawn)
    {
      List<Move> moves = new List<Move>(16);
      if (pawn.IsPlaced && !pawn.Captured)
      {
        PawnTablut pawnTablut = pawn as PawnTablut;
        int x1 = pawnTablut.X;
        int y1 = pawnTablut.Y;
        while (x1 > 0)
        {
          --x1;
          if (!this.AddValidMove(moves, pawn, x1, y1))
            break;
        }
        int x2 = pawnTablut.X;
        while (x2 < 8)
        {
          ++x2;
          if (!this.AddValidMove(moves, pawn, x2, y1))
            break;
        }
        int x3 = pawnTablut.X;
        while (y1 < 8)
        {
          ++y1;
          if (!this.AddValidMove(moves, pawn, x3, y1))
            break;
        }
        int y2 = pawnTablut.Y;
        while (y2 > 0)
        {
          --y2;
          if (!this.AddValidMove(moves, pawn, x3, y2))
            break;
        }
        int y3 = pawnTablut.Y;
      }
      return moves;
    }

    public override void SetPawnCaptured(PawnBase pawn, bool fake = false)
    {
      base.SetPawnCaptured(pawn, fake);
      PawnTablut pawn1 = pawn as PawnTablut;
      this.GetTile(pawn1.X, pawn1.Y).PawnOnTile = (PawnBase) null;
      pawn1.X = -1;
      pawn1.Y = -1;
      if (fake)
        return;
      this.RemovePawnFromBoard((PawnBase) pawn1, 0.6f);
    }

    protected override void OnAfterBoardSetUp()
    {
      if (this._startState.PawnInformation == null)
        this._startState = this.TakeBoardSnapshot();
      this.ReadyToPlay = true;
    }

    protected override PawnBase SelectPawn(PawnBase pawn)
    {
      if (pawn.PlayerOne == (this.PlayerTurn == PlayerTurn.PlayerOne))
        this.SelectedUnit = pawn;
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
      PawnTablut pawnTablut = pawn as PawnTablut;
      if (tile2D.PawnOnTile != null)
        return;
      if (displayMessage)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_player").ToString()));
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_opponent").ToString()));
      }
      Vec3 globalPosition1 = pawnTablut.Entity.GlobalPosition;
      Vec3 globalPosition2 = tile2D.Entity.GlobalPosition;
      if (pawnTablut.X != -1 && pawnTablut.Y != -1)
        this.GetTile(pawnTablut.X, pawnTablut.Y).PawnOnTile = (PawnBase) null;
      pawnTablut.MovingToDifferentTile = pawnTablut.X != tile2D.X || pawnTablut.Y != tile2D.Y;
      pawnTablut.X = tile2D.X;
      pawnTablut.Y = tile2D.Y;
      tile2D.PawnOnTile = (PawnBase) pawnTablut;
      if (this.SettingUpBoard && (double) globalPosition2.z > (double) globalPosition1.z)
      {
        Vec3 goal = globalPosition1;
        goal.z += (float) (2.0 * ((double) globalPosition2.z - (double) globalPosition1.z));
        pawnTablut.AddGoalPosition(goal);
        pawnTablut.MovePawnToGoalPositionsDelayed(instantMove, 0.5f, this.JustStoppedDraggingUnit, delay);
      }
      pawnTablut.AddGoalPosition(globalPosition2);
      pawnTablut.MovePawnToGoalPositionsDelayed(instantMove, 0.5f, this.JustStoppedDraggingUnit, delay);
      if (instantMove)
        this.CheckIfPawnCaptures(this.SelectedUnit as PawnTablut);
      if (!(pawnTablut == this.SelectedUnit & instantMove))
        return;
      this.SelectedUnit = (PawnBase) null;
    }

    protected override void SwitchPlayerTurn()
    {
      if ((this.PlayerTurn == PlayerTurn.PlayerOneWaiting || this.PlayerTurn == PlayerTurn.PlayerTwoWaiting) && this.SelectedUnit != null)
        this.CheckIfPawnCaptures(this.SelectedUnit as PawnTablut);
      this.SelectedUnit = (PawnBase) null;
      if (this.PlayerTurn == PlayerTurn.PlayerOneWaiting)
        this.PlayerTurn = PlayerTurn.PlayerTwo;
      else if (this.PlayerTurn == PlayerTurn.PlayerTwoWaiting)
        this.PlayerTurn = PlayerTurn.PlayerOne;
      this.CheckGameEnded();
      base.SwitchPlayerTurn();
    }

    protected override bool CheckGameEnded()
    {
      BoardGameTablut.State state = this.CheckGameState();
      bool flag = true;
      switch (state)
      {
        case BoardGameTablut.State.InProgress:
          flag = false;
          break;
        case BoardGameTablut.State.PlayerWon:
          this.OnVictory();
          this.ReadyToPlay = false;
          break;
        case BoardGameTablut.State.AIWon:
          this.OnDefeat();
          this.ReadyToPlay = false;
          break;
      }
      return flag;
    }

    public bool AIMakeMove(Move move)
    {
      Tile2D goalTile = move.GoalTile as Tile2D;
      PawnTablut unit = move.Unit as PawnTablut;
      if (goalTile.PawnOnTile != null)
        return false;
      if (unit.X != -1 && unit.Y != -1)
        this.GetTile(unit.X, unit.Y).PawnOnTile = (PawnBase) null;
      unit.X = goalTile.X;
      unit.Y = goalTile.Y;
      goalTile.PawnOnTile = (PawnBase) unit;
      this.CheckIfPawnCaptures(unit, true);
      return true;
    }

    public bool HasAvailableMoves(PawnTablut pawn)
    {
      bool flag = false;
      if (pawn.IsPlaced && !pawn.Captured)
      {
        int x = pawn.X;
        int y = pawn.Y;
        flag = x > 0 && this.GetTile(x - 1, y).PawnOnTile == null && !BoardGameTablut.IsCitadelTile(x - 1, y) || x < 8 && this.GetTile(x + 1, y).PawnOnTile == null && !BoardGameTablut.IsCitadelTile(x + 1, y) || y > 0 && this.GetTile(x, y - 1).PawnOnTile == null && !BoardGameTablut.IsCitadelTile(x, y - 1) || y < 8 && this.GetTile(x, y + 1).PawnOnTile == null && !BoardGameTablut.IsCitadelTile(x, y + 1);
      }
      return flag;
    }

    public Move GetRandomAvailableMove(PawnTablut pawn)
    {
      List<Move> validMoves = this.CalculateValidMoves((PawnBase) pawn);
      return validMoves[MBRandom.RandomInt(validMoves.Count)];
    }

    public BoardGameTablut.BoardInformation TakeBoardSnapshot()
    {
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      BoardGameTablut.PawnInformation[] pawns = new BoardGameTablut.PawnInformation[25];
      for (int index = 0; index < 25; ++index)
      {
        PawnTablut pawnTablut = index >= 16 ? pawnBaseList2[index - 16] as PawnTablut : pawnBaseList1[index] as PawnTablut;
        BoardGameTablut.PawnInformation pawnInformation;
        pawnInformation.X = pawnTablut.X;
        pawnInformation.Y = pawnTablut.Y;
        pawnInformation.IsCaptured = pawnTablut.Captured;
        pawns[index] = pawnInformation;
      }
      PlayerTurn playerTurn = this.PlayerTurn;
      return new BoardGameTablut.BoardInformation(ref pawns, playerTurn);
    }

    public void UndoMove(ref BoardGameTablut.BoardInformation board)
    {
      for (int index = 0; index < this.TileCount; ++index)
        this.Tiles[index].PawnOnTile = (PawnBase) null;
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 25; ++index)
      {
        BoardGameTablut.PawnInformation pawnInformation = board.PawnInformation[index];
        PawnTablut pawnTablut = index >= 16 ? pawnBaseList2[index - 16] as PawnTablut : pawnBaseList1[index] as PawnTablut;
        pawnTablut.X = pawnInformation.X;
        pawnTablut.Y = pawnInformation.Y;
        pawnTablut.Captured = pawnInformation.IsCaptured;
        if (pawnTablut.IsPlaced)
          this.GetTile(pawnTablut.X, pawnTablut.Y).PawnOnTile = (PawnBase) pawnTablut;
      }
      this.PlayerTurn = board.Turn;
    }

    public BoardGameTablut.State CheckGameState()
    {
      BoardGameTablut.State state;
      if (!this.AIOpponent.AbortRequested)
      {
        state = BoardGameTablut.State.InProgress;
        if (this.PlayerTurn == PlayerTurn.PlayerOne || this.PlayerTurn == PlayerTurn.PlayerTwo)
        {
          bool flag1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne;
          if (this.King.Captured)
            state = flag1 ? BoardGameTablut.State.PlayerWon : BoardGameTablut.State.AIWon;
          else if ((this.King.X == 0 || this.King.X == 8 || this.King.Y == 0 ? 1 : (this.King.Y == 8 ? 1 : 0)) != 0)
          {
            state = flag1 ? BoardGameTablut.State.AIWon : BoardGameTablut.State.PlayerWon;
          }
          else
          {
            bool flag2 = false;
            bool flag3 = this.PlayerTurn == PlayerTurn.PlayerOne;
            List<PawnBase> pawnBaseList = flag3 ? this.PlayerOneUnits : this.PlayerTwoUnits;
            int count = pawnBaseList.Count;
            for (int index = 0; index < count; ++index)
            {
              PawnBase pawn = pawnBaseList[index];
              if (pawn.IsPlaced && !pawn.Captured && this.HasAvailableMoves(pawn as PawnTablut))
              {
                flag2 = true;
                break;
              }
            }
            if (!flag2)
              state = flag3 ? BoardGameTablut.State.AIWon : BoardGameTablut.State.PlayerWon;
          }
        }
      }
      else
        state = BoardGameTablut.State.Aborted;
      return state;
    }

    private void SetTile(TileBase tile, int x, int y) => this.Tiles[y * 9 + x] = tile;

    private TileBase GetTile(int x, int y) => this.Tiles[y * 9 + x];

    private void PreplaceUnits()
    {
      int[] numArray1 = new int[32]
      {
        3,
        0,
        4,
        0,
        5,
        0,
        4,
        1,
        0,
        3,
        0,
        4,
        0,
        5,
        1,
        4,
        8,
        3,
        8,
        4,
        8,
        5,
        7,
        4,
        3,
        8,
        4,
        8,
        5,
        8,
        4,
        7
      };
      int[] numArray2 = new int[18]
      {
        4,
        4,
        4,
        3,
        4,
        2,
        5,
        4,
        6,
        4,
        3,
        4,
        2,
        4,
        4,
        5,
        4,
        6
      };
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      int count1 = pawnBaseList1.Count;
      for (int index = 0; index < count1; ++index)
      {
        int x = numArray1[index * 2];
        int y = numArray1[index * 2 + 1];
        this.MovePawnToTileDelayed(pawnBaseList1[index], this.GetTile(x, y), false, false, (float) (0.15000000596046448 * (double) (index + 1) + 0.25));
      }
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      int count2 = pawnBaseList2.Count;
      for (int index = 0; index < count2; ++index)
      {
        int x = numArray2[index * 2];
        int y = numArray2[index * 2 + 1];
        this.MovePawnToTileDelayed(pawnBaseList2[index], this.GetTile(x, y), false, false, (float) (0.15000000596046448 * (double) (index + 1) + 0.25));
      }
    }

    private void RestoreStartingBoard()
    {
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 25; ++index)
      {
        PawnBase pawn = index >= 16 ? pawnBaseList2[index - 16] : pawnBaseList1[index];
        BoardGameTablut.PawnInformation pawnInformation = this._startState.PawnInformation[index];
        TileBase tile = this.GetTile(pawnInformation.X, pawnInformation.Y);
        pawn.Reset();
        this.MovePawnToTile(pawn, tile, displayMessage: false);
      }
    }

    private bool AddValidMove(List<Move> moves, PawnBase pawn, int x, int y)
    {
      bool flag = false;
      TileBase tile = this.GetTile(x, y);
      if (tile.PawnOnTile == null && !BoardGameTablut.IsCitadelTile(x, y))
      {
        Move move;
        move.Unit = pawn;
        move.GoalTile = tile;
        moves.Add(move);
        flag = true;
      }
      return flag;
    }

    private void CheckIfPawnCapturedEnemyPawn(
      PawnTablut pawn,
      bool fake,
      TileBase victimTile,
      Tile2D helperTile)
    {
      PawnBase pawnOnTile1 = victimTile.PawnOnTile;
      if (pawnOnTile1 == null || pawnOnTile1.PlayerOne == pawn.PlayerOne)
        return;
      PawnBase pawnOnTile2 = helperTile.PawnOnTile;
      if (pawnOnTile2 != null)
      {
        if (pawnOnTile2.PlayerOne != pawn.PlayerOne)
          return;
        this.SetPawnCaptured(pawnOnTile1, fake);
      }
      else
      {
        if (!BoardGameTablut.IsCitadelTile(helperTile.X, helperTile.Y))
          return;
        this.SetPawnCaptured(pawnOnTile1, fake);
      }
    }

    private void CheckIfPawnCaptures(PawnTablut pawn, bool fake = false)
    {
      int x = pawn.X;
      int y = pawn.Y;
      if (x > 1)
        this.CheckIfPawnCapturedEnemyPawn(pawn, fake, this.GetTile(x - 1, y), this.GetTile(x - 2, y) as Tile2D);
      if (x < 7)
        this.CheckIfPawnCapturedEnemyPawn(pawn, fake, this.GetTile(x + 1, y), this.GetTile(x + 2, y) as Tile2D);
      if (y > 1)
        this.CheckIfPawnCapturedEnemyPawn(pawn, fake, this.GetTile(x, y - 1), this.GetTile(x, y - 2) as Tile2D);
      if (y >= 7)
        return;
      this.CheckIfPawnCapturedEnemyPawn(pawn, fake, this.GetTile(x, y + 1), this.GetTile(x, y + 2) as Tile2D);
    }

    public struct PawnInformation
    {
      public int X;
      public int Y;
      public bool IsCaptured;

      public PawnInformation(int x, int y, bool captured)
      {
        this.X = x;
        this.Y = y;
        this.IsCaptured = captured;
      }
    }

    public struct BoardInformation
    {
      public readonly BoardGameTablut.PawnInformation[] PawnInformation;
      public readonly PlayerTurn Turn;

      public BoardInformation(ref BoardGameTablut.PawnInformation[] pawns, PlayerTurn turn)
      {
        this.PawnInformation = pawns;
        this.Turn = turn;
      }
    }

    public enum State
    {
      InProgress,
      Aborted,
      PlayerWon,
      AIWon,
    }
  }
}
