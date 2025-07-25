// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAIMuTorere
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
  public class BoardGameAIMuTorere : BoardGameAIBase
  {
    private readonly BoardGameMuTorere _board;

    public BoardGameAIMuTorere(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
      : base(difficulty, boardGameHandler)
    {
      this._board = this.BoardGameHandler.Board as BoardGameMuTorere;
    }

    protected override void InitializeDifficulty()
    {
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          this.MaxDepth = 3;
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          this.MaxDepth = 5;
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          this.MaxDepth = 7;
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
        BoardGameMuTorere.BoardInformation pawnsSnapshot = this._board.TakePawnsSnapshot();
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
                  int num2 = -this.NegaMax(this.MaxDepth, -1);
                  this._board.UndoMove(ref pawnsSnapshot);
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

    private int NegaMax(int depth, int color)
    {
      int a = int.MinValue;
      if (depth == 0)
        return color * this.Evaluation() * (this._board.PlayerWhoStarted == PlayerTurn.PlayerOne ? 1 : -1);
      BoardGameMuTorere.BoardInformation pawnsSnapshot = this._board.TakePawnsSnapshot();
      List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(color == 1 ? BoardGameSide.AI : BoardGameSide.Player);
      if (!this._board.HasMovesAvailable(ref allValidMoves))
        return color * this.Evaluation();
      foreach (List<Move> moveList in allValidMoves)
      {
        foreach (Move move in moveList)
        {
          this._board.AIMakeMove(move);
          a = MathF.Max(a, -this.NegaMax(depth - 1, -color));
          this._board.UndoMove(ref pawnsSnapshot);
        }
      }
      return a;
    }

    private int Evaluation()
    {
      float num = MBRandom.RandomFloat;
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          num = (float) ((double) num * 2.0 - 1.0);
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          num = (float) ((double) num * 1.7000000476837158 - 0.699999988079071);
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          num = (float) ((double) num * 1.3999999761581421 - 0.40000000596046448);
          break;
      }
      return (int) ((double) num * 100.0 * (double) (this.CanMove(false) - this.CanMove(true)));
    }

    private int CanMove(bool playerOne)
    {
      List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(playerOne ? BoardGameSide.Player : BoardGameSide.AI);
      return !this._board.HasMovesAvailable(ref allValidMoves) ? 0 : 1;
    }
  }
}
