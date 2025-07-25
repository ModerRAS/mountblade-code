// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.BoardGameMuTorere
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
  public class BoardGameMuTorere : BoardGameBase
  {
    public const int WhitePawnCount = 4;
    public const int BlackPawnCount = 4;

    public override int TileCount => 9;

    protected override bool RotateBoard => true;

    protected override bool PreMovementStagePresent => false;

    protected override bool DiceRollRequired => false;

    public BoardGameMuTorere(MissionBoardGameLogic mission, PlayerTurn startingPlayer)
      : base(mission, new TextObject("{=5siAbi69}Mu Torere"), startingPlayer)
    {
      this.PawnUnselectedFactor = 4288711820U;
    }

    public override void InitializeUnits()
    {
      this.PlayerOneUnits.Clear();
      this.PlayerTwoUnits.Clear();
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      for (int index = 0; index < 4; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_one_unit_" + (object) index);
        pawnBaseList1.Add(this.InitializeUnit((PawnBase) new PawnMuTorere(entityWithTag, this.PlayerWhoStarted == PlayerTurn.PlayerOne)));
      }
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 4; ++index)
      {
        GameEntity entityWithTag = Mission.Current.Scene.FindEntityWithTag("player_two_unit_" + (object) index);
        pawnBaseList2.Add(this.InitializeUnit((PawnBase) new PawnMuTorere(entityWithTag, this.PlayerWhoStarted != 0)));
      }
    }

    public override void InitializeTiles()
    {
      if (this.Tiles == null)
        this.Tiles = new TileBase[this.TileCount];
      IEnumerable<GameEntity> source1 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("tile_")))));
      IEnumerable<GameEntity> source2 = this.BoardEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => ((IEnumerable<string>) x.Tags).Any<string>((Func<string, bool>) (t => t.Contains("decal_")))));
      for (int x = 0; x < this.TileCount; ++x)
      {
        GameEntity entity = source1.Single<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("tile_" + (object) x)));
        BoardGameDecal firstScriptOfType = source2.Single<GameEntity>((Func<GameEntity, bool>) (e => e.HasTag("decal_" + (object) x))).GetFirstScriptOfType<BoardGameDecal>();
        int xRight;
        int xLeft;
        switch (x)
        {
          case 0:
            xLeft = xRight = -1;
            break;
          case 1:
            xLeft = 8;
            xRight = 2;
            break;
          case 8:
            xLeft = 7;
            xRight = 1;
            break;
          default:
            xLeft = x - 1;
            xRight = x + 1;
            break;
        }
        this.Tiles[x] = (TileBase) new TileMuTorere(entity, firstScriptOfType, x, xLeft, xRight);
      }
    }

    public override void InitializeCapturedUnitsZones()
    {
    }

    public override void InitializeSound()
    {
      PawnBase.PawnMoveSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/move_stone");
      PawnBase.PawnSelectSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/pick_stone");
      PawnBase.PawnTapSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/drop_wood");
      PawnBase.PawnRemoveSoundCodeID = SoundEvent.GetEventIdFromString("event:/mission/movement/foley/minigame/out_stone");
    }

    public override void Reset()
    {
      base.Reset();
      this.PreplaceUnits();
    }

    public override List<Move> CalculateValidMoves(PawnBase pawn)
    {
      List<Move> validMoves = new List<Move>();
      if (pawn is PawnMuTorere pawnMuTorere)
      {
        TileMuTorere availableTile = this.FindAvailableTile() as TileMuTorere;
        if (pawnMuTorere.X == 0)
        {
          Move move;
          move.Unit = pawn;
          move.GoalTile = (TileBase) availableTile;
          validMoves.Add(move);
        }
        else if (availableTile.X != 0)
        {
          if (pawnMuTorere.X == availableTile.XLeftTile || pawnMuTorere.X == availableTile.XRightTile)
          {
            Move move;
            move.Unit = pawn;
            move.GoalTile = (TileBase) availableTile;
            validMoves.Add(move);
          }
        }
        else
        {
          TileMuTorere tileByCoordinate = this.FindTileByCoordinate(pawnMuTorere.X);
          PawnBase pawnOnTile1 = this.Tiles[tileByCoordinate.XLeftTile].PawnOnTile;
          PawnBase pawnOnTile2 = this.Tiles[tileByCoordinate.XRightTile].PawnOnTile;
          if (pawnOnTile1.PlayerOne != pawnMuTorere.PlayerOne || pawnOnTile2.PlayerOne != pawnMuTorere.PlayerOne)
          {
            Move move;
            move.Unit = pawn;
            move.GoalTile = (TileBase) availableTile;
            validMoves.Add(move);
          }
        }
      }
      return validMoves;
    }

    protected override PawnBase SelectPawn(PawnBase pawn)
    {
      if (this.PlayerTurn == PlayerTurn.PlayerOne)
      {
        if (pawn.PlayerOne)
          this.SelectedUnit = pawn;
      }
      else if (this.AIOpponent == null && !pawn.PlayerOne)
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
      TileMuTorere tileMuTorere = tile as TileMuTorere;
      PawnMuTorere pawnMuTorere = pawn as PawnMuTorere;
      if (tileMuTorere.PawnOnTile != null || pawnMuTorere == null)
        return;
      if (displayMessage)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_player").ToString()));
        else
          InformationManager.DisplayMessage(new InformationMessage(GameTexts.FindText("str_boardgame_move_piece_opponent").ToString()));
      }
      if (pawnMuTorere.X != -1)
        this.Tiles[pawnMuTorere.X].PawnOnTile = (PawnBase) null;
      tileMuTorere.PawnOnTile = (PawnBase) pawnMuTorere;
      pawnMuTorere.MovingToDifferentTile = pawnMuTorere.X != tileMuTorere.X;
      pawnMuTorere.X = tileMuTorere.X;
      Vec3 globalPosition = tileMuTorere.Entity.GlobalPosition;
      pawnMuTorere.AddGoalPosition(globalPosition);
      pawnMuTorere.MovePawnToGoalPositionsDelayed(instantMove, 0.6f, this.JustStoppedDraggingUnit, delay);
      if (pawnMuTorere != this.SelectedUnit)
        return;
      this.SelectedUnit = (PawnBase) null;
    }

    protected override void SwitchPlayerTurn()
    {
      if (this.PlayerTurn == PlayerTurn.PlayerOneWaiting)
        this.PlayerTurn = PlayerTurn.PlayerTwo;
      else if (this.PlayerTurn == PlayerTurn.PlayerTwoWaiting)
        this.PlayerTurn = PlayerTurn.PlayerOne;
      this.CheckGameEnded();
      base.SwitchPlayerTurn();
    }

    protected override bool CheckGameEnded()
    {
      bool flag = false;
      List<List<Move>> allValidMoves = this.CalculateAllValidMoves(this.PlayerTurn == PlayerTurn.PlayerOne ? BoardGameSide.Player : BoardGameSide.AI);
      if (this.GetTotalMovesAvailable(ref allValidMoves) <= 0)
      {
        if (this.PlayerTurn == PlayerTurn.PlayerOne)
        {
          this.OnDefeat();
          this.ReadyToPlay = false;
          flag = true;
        }
        else if (this.PlayerTurn == PlayerTurn.PlayerTwo)
        {
          this.OnVictory();
          this.ReadyToPlay = false;
          flag = true;
        }
      }
      return flag;
    }

    protected override void OnAfterBoardSetUp() => this.ReadyToPlay = true;

    public TileMuTorere FindTileByCoordinate(int x)
    {
      TileMuTorere tileByCoordinate = (TileMuTorere) null;
      for (int index = 0; index < this.TileCount; ++index)
      {
        TileMuTorere tile = this.Tiles[index] as TileMuTorere;
        if (tile.X == x)
          tileByCoordinate = tile;
      }
      return tileByCoordinate;
    }

    public BoardGameMuTorere.BoardInformation TakePawnsSnapshot()
    {
      BoardGameMuTorere.PawnInformation[] pawns = new BoardGameMuTorere.PawnInformation[this.PlayerOneUnits.Count + this.PlayerTwoUnits.Count];
      TileBaseInformation[] tiles = new TileBaseInformation[this.TileCount];
      int num = 0;
      foreach (PawnMuTorere pawnMuTorere in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
      {
        BoardGameMuTorere.PawnInformation pawnInformation = new BoardGameMuTorere.PawnInformation(pawnMuTorere.X);
        pawns[num++] = pawnInformation;
      }
      foreach (PawnMuTorere pawnMuTorere in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
      {
        BoardGameMuTorere.PawnInformation pawnInformation = new BoardGameMuTorere.PawnInformation(pawnMuTorere.X);
        pawns[num++] = pawnInformation;
      }
      for (int index = 0; index < this.TileCount; ++index)
        tiles[index] = new TileBaseInformation(ref this.Tiles[index].PawnOnTile);
      return new BoardGameMuTorere.BoardInformation(ref pawns, ref tiles);
    }

    public void UndoMove(ref BoardGameMuTorere.BoardInformation board)
    {
      int num = 0;
      foreach (PawnMuTorere pawnMuTorere in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits)
        pawnMuTorere.X = board.PawnInformation[num++].X;
      foreach (PawnMuTorere pawnMuTorere in this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits)
        pawnMuTorere.X = board.PawnInformation[num++].X;
      for (int index = 0; index < this.TileCount; ++index)
        this.Tiles[index].PawnOnTile = board.TileInformation[index].PawnOnTile;
    }

    public void AIMakeMove(Move move)
    {
      TileMuTorere goalTile = move.GoalTile as TileMuTorere;
      PawnMuTorere unit = move.Unit as PawnMuTorere;
      this.Tiles[unit.X].PawnOnTile = (PawnBase) null;
      goalTile.PawnOnTile = (PawnBase) unit;
      unit.X = goalTile.X;
    }

    public TileBase FindAvailableTile()
    {
      foreach (TileBase tile in this.Tiles)
      {
        if (tile.PawnOnTile == null)
          return tile;
      }
      return (TileBase) null;
    }

    private void PreplaceUnits()
    {
      List<PawnBase> pawnBaseList1 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerOneUnits : this.PlayerTwoUnits;
      List<PawnBase> pawnBaseList2 = this.PlayerWhoStarted == PlayerTurn.PlayerOne ? this.PlayerTwoUnits : this.PlayerOneUnits;
      for (int index = 0; index < 4; ++index)
      {
        this.MovePawnToTileDelayed(pawnBaseList1[index], this.Tiles[index + 1], false, false, (float) (0.15000000596046448 * (double) (index + 1) + 0.25));
        this.MovePawnToTileDelayed(pawnBaseList2[index], this.Tiles[8 - index], false, false, (float) (0.15000000596046448 * (double) (index + 1) + 0.5));
      }
    }

    public struct BoardInformation
    {
      public readonly BoardGameMuTorere.PawnInformation[] PawnInformation;
      public readonly TileBaseInformation[] TileInformation;

      public BoardInformation(
        ref BoardGameMuTorere.PawnInformation[] pawns,
        ref TileBaseInformation[] tiles)
      {
        this.PawnInformation = pawns;
        this.TileInformation = tiles;
      }
    }

    public struct PawnInformation
    {
      public readonly int X;

      public PawnInformation(int x) => this.X = x;
    }
  }
}
