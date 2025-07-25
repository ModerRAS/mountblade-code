// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAIBaghChal
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.MissionLogics;
using SandBox.BoardGames.Pawns;
using SandBox.BoardGames.Tiles;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.AI
{
  public class BoardGameAIBaghChal : BoardGameAIBase
  {
    private readonly BoardGameBaghChal _board;

    public BoardGameAIBaghChal(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
      : base(difficulty, boardGameHandler)
    {
      this._board = this.BoardGameHandler.Board as BoardGameBaghChal;
    }

    protected override void InitializeDifficulty()
    {
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          this.MaxDepth = 3;
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          this.MaxDepth = 4;
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          this.MaxDepth = 5;
          break;
      }
    }

    public override Move CalculateMovementStageMove()
    {
      Move movementStageMove;
      movementStageMove.GoalTile = (TileBase) null;
      movementStageMove.Unit = (PawnBase) null;
      if (this._board.IsReady)
      {
        List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(BoardGameSide.AI);
        BoardGameBaghChal.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
        if (this._board.HasMovesAvailable(ref allValidMoves))
        {
          int num1 = int.MinValue;
          foreach (List<Move> moveList in allValidMoves)
          {
            if (!this.AbortRequested)
            {
              foreach (Move move in moveList)
              {
                if (!this.AbortRequested)
                {
                  this._board.AIMakeMove(move);
                  int num2 = -this.NegaMax(this.MaxDepth, -1, -2147483647, int.MaxValue);
                  this._board.UndoMove(ref boardSnapshot);
                  if (num2 > num1)
                  {
                    movementStageMove = move;
                    num1 = num2;
                  }
                }
                else
                  break;
              }
            }
            else
              break;
          }
        }
      }
      if (!this.AbortRequested)
      {
        int num = movementStageMove.IsValid ? 1 : 0;
      }
      return movementStageMove;
    }

    public override Move CalculatePreMovementStageMove() => this.CalculateMovementStageMove();

    private int NegaMax(int depth, int color, int alpha, int beta)
    {
      if (depth == 0)
        return color * this.Evaluation() * (this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? 1 : -1);
      BoardGameBaghChal.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
      if (color == (this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? -1 : 1) && this._board.GetANonePlacedGoat() != null)
      {
        for (int index = 0; index < this._board.TileCount; ++index)
        {
          TileBase tile = this._board.Tiles[index];
          if (tile.PawnOnTile == null)
          {
            this._board.AIMakeMove(new Move((PawnBase) this._board.GetANonePlacedGoat(), tile));
            int a = -this.NegaMax(depth - 1, -color, -beta, -alpha);
            this._board.UndoMove(ref boardSnapshot);
            if (a >= beta)
              return a;
            alpha = MathF.Max(a, alpha);
          }
        }
      }
      else
      {
        List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(color == 1 ? BoardGameSide.AI : BoardGameSide.Player);
        if (!this._board.HasMovesAvailable(ref allValidMoves))
          return color * this.Evaluation() * (this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? 1 : -1);
        foreach (List<Move> moveList in allValidMoves)
        {
          foreach (Move move in moveList)
          {
            this._board.AIMakeMove(move);
            int a = -this.NegaMax(depth - 1, -color, -beta, -alpha);
            this._board.UndoMove(ref boardSnapshot);
            if (a >= beta)
              return a;
            alpha = MathF.Max(a, alpha);
          }
        }
      }
      return alpha;
    }

    private int Evaluation()
    {
      float num = MBRandom.RandomFloat;
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          num = (float) ((double) num * 0.699999988079071 + 0.5);
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          num = (float) ((double) num * 0.5 + 0.64999997615814209);
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          num = (float) ((double) num * 0.34999999403953552 + 0.75);
          break;
      }
      List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? BoardGameSide.AI : BoardGameSide.Player);
      int totalMovesAvailable = this._board.GetTotalMovesAvailable(ref allValidMoves);
      return (int) ((double) (100 * -this.GetTigersStuck() + 50 * this.GetGoatsCaptured() + totalMovesAvailable + this.GetCombinedDistanceBetweenTigers()) * (double) num);
    }

    private int GetTigersStuck()
    {
      int tigersStuck = 0;
      foreach (PawnBase pawn in this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? this._board.PlayerTwoUnits : this._board.PlayerOneUnits)
      {
        if (this._board.CalculateValidMoves(pawn).Count == 0)
          ++tigersStuck;
      }
      return tigersStuck;
    }

    private int GetGoatsCaptured()
    {
      int goatsCaptured = 0;
      foreach (PawnBase pawnBase in this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? this._board.PlayerOneUnits : this._board.PlayerTwoUnits)
      {
        if (pawnBase.Captured)
          ++goatsCaptured;
      }
      return goatsCaptured;
    }

    private int GetCombinedDistanceBetweenTigers()
    {
      int distanceBetweenTigers = 0;
      foreach (PawnBaghChal pawnBaghChal1 in this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? this._board.PlayerTwoUnits : this._board.PlayerOneUnits)
      {
        foreach (PawnBaghChal pawnBaghChal2 in this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? this._board.PlayerTwoUnits : this._board.PlayerOneUnits)
        {
          if (pawnBaghChal1 != pawnBaghChal2)
            distanceBetweenTigers += MathF.Abs(pawnBaghChal1.X - pawnBaghChal2.X) + MathF.Abs(pawnBaghChal1.Y + pawnBaghChal2.Y);
        }
      }
      return distanceBetweenTigers;
    }
  }
}
