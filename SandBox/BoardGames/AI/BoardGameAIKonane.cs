// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAIKonane
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
  public class BoardGameAIKonane : BoardGameAIBase
  {
    private readonly BoardGameKonane _board;

    public BoardGameAIKonane(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
      : base(difficulty, boardGameHandler)
    {
      this._board = this.BoardGameHandler.Board as BoardGameKonane;
    }

    protected override void InitializeDifficulty()
    {
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          this.MaxDepth = 2;
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          this.MaxDepth = 5;
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          this.MaxDepth = 8;
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
        BoardGameKonane.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
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

    public override Move CalculatePreMovementStageMove()
    {
      Move invalid = Move.Invalid;
      int index = MBRandom.RandomInt(0, this._board.CheckForRemovablePawns(false));
      invalid.Unit = this._board.RemovablePawns[index];
      return invalid;
    }

    private int NegaMax(int depth, int color, int alpha, int beta)
    {
      if (depth == 0)
        return color * this.Evaluation();
      List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(color == 1 ? BoardGameSide.AI : BoardGameSide.Player);
      if (!this._board.HasMovesAvailable(ref allValidMoves))
        return color * this.Evaluation();
      BoardGameKonane.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
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
      return alpha;
    }

    private int Evaluation()
    {
      float num1 = MBRandom.RandomFloat;
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          num1 = (float) ((double) num1 * 0.699999988079071 + 0.5);
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          num1 = (float) ((double) num1 * 0.5 + 0.64999997615814209);
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          num1 = (float) ((double) num1 * 0.34999999403953552 + 0.75);
          break;
      }
      List<List<Move>> allValidMoves1 = this._board.CalculateAllValidMoves(BoardGameSide.Player);
      List<List<Move>> allValidMoves2 = this._board.CalculateAllValidMoves(BoardGameSide.AI);
      int totalMovesAvailable1 = this._board.GetTotalMovesAvailable(ref allValidMoves1);
      int totalMovesAvailable2 = this._board.GetTotalMovesAvailable(ref allValidMoves2);
      int num2 = MathF.Min(totalMovesAvailable1, 1);
      return (int) ((double) (100 * (MathF.Min(totalMovesAvailable2, 1) - num2) + 20 * (this._board.GetPlayerTwoUnitsAlive() - this._board.GetPlayerOneUnitsAlive()) + 5 * (totalMovesAvailable2 - totalMovesAvailable1)) * (double) num1);
    }
  }
}
