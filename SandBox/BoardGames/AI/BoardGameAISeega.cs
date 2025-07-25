// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAISeega
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.MissionLogics;
using SandBox.BoardGames.Pawns;
using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.BoardGames.AI
{
  public class BoardGameAISeega : BoardGameAIBase
  {
    private readonly BoardGameSeega _board;
    private readonly int[,] _boardValues = new int[5, 5]
    {
      {
        3,
        2,
        2,
        2,
        3
      },
      {
        2,
        1,
        1,
        1,
        2
      },
      {
        2,
        1,
        3,
        1,
        2
      },
      {
        2,
        1,
        1,
        1,
        2
      },
      {
        3,
        2,
        2,
        2,
        3
      }
    };

    public BoardGameAISeega(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
      : base(difficulty, boardGameHandler)
    {
      this._board = this.BoardGameHandler.Board as BoardGameSeega;
    }

    protected override void InitializeDifficulty()
    {
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          this.MaxDepth = 2;
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          this.MaxDepth = 3;
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          this.MaxDepth = 4;
          break;
      }
    }

    public override Move CalculateMovementStageMove()
    {
      Move movementStageMove = Move.Invalid;
      if (this._board.IsReady)
      {
        List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(BoardGameSide.AI);
        if (!this._board.HasMovesAvailable(ref allValidMoves))
        {
          Dictionary<PawnBase, int> blockingPawns = this._board.GetBlockingPawns(false);
          InformationManager.DisplayMessage(new InformationMessage(new TextObject("{=1bzdDYoO}All AI pawns blocked. Removing one of the player's pawns to make a move").ToString()));
          this._board.SetPawnCaptured(blockingPawns.MaxBy<KeyValuePair<PawnBase, int>, int>((Func<KeyValuePair<PawnBase, int>, int>) (x => x.Value)).Key, false);
          allValidMoves = this._board.CalculateAllValidMoves(BoardGameSide.AI);
        }
        BoardGameSeega.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
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

    public override bool WantsToForfeit()
    {
      if (!this.MayForfeit)
        return false;
      int playerOneUnitsAlive = this._board.GetPlayerOneUnitsAlive();
      int playerTwoUnitsAlive = this._board.GetPlayerTwoUnitsAlive();
      int num = this.Difficulty == BoardGameHelper.AIDifficulty.Hard ? 2 : 1;
      if (playerTwoUnitsAlive > 7 || playerOneUnitsAlive < playerTwoUnitsAlive + (num + playerTwoUnitsAlive / 2))
        return false;
      this.MayForfeit = false;
      return true;
    }

    public override Move CalculatePreMovementStageMove()
    {
      Move invalid = Move.Invalid;
      foreach (PawnSeega playerTwoUnit in this._board.PlayerTwoUnits)
      {
        if (!playerTwoUnit.IsPlaced && !playerTwoUnit.Moving)
        {
          while (!invalid.IsValid)
          {
            if (!this.AbortRequested)
            {
              int x = MBRandom.RandomInt(0, 5);
              int y = MBRandom.RandomInt(0, 5);
              if (this._board.GetTile(x, y).PawnOnTile == null && !this._board.GetTile(x, y).Entity.HasTag("obstructed_at_start"))
              {
                invalid.Unit = (PawnBase) playerTwoUnit;
                invalid.GoalTile = this._board.GetTile(x, y);
              }
            }
            else
              break;
          }
          break;
        }
      }
      return invalid;
    }

    private int NegaMax(int depth, int color, int alpha, int beta)
    {
      int b = int.MinValue;
      if (depth == 0)
        return color * this.Evaluation();
      foreach (PawnSeega pawnSeega in color == 1 ? this._board.PlayerTwoUnits : this._board.PlayerOneUnits)
        pawnSeega.UpdateMoveBackAvailable();
      List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(color == 1 ? BoardGameSide.AI : BoardGameSide.Player);
      if (!this._board.HasMovesAvailable(ref allValidMoves))
        return color * this.Evaluation();
      BoardGameSeega.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
      foreach (List<Move> moveList in allValidMoves)
      {
        if (moveList != null)
        {
          foreach (Move move in moveList)
          {
            this._board.AIMakeMove(move);
            b = MathF.Max(-this.NegaMax(depth - 1, -color, -beta, -alpha), b);
            alpha = MathF.Max(alpha, b);
            this._board.UndoMove(ref boardSnapshot);
            if (alpha >= beta && color == 1)
              return alpha;
          }
        }
      }
      return b;
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
      return (int) ((double) (20 * (this._board.GetPlayerTwoUnitsAlive() - this._board.GetPlayerOneUnitsAlive()) + (this.GetPlacementScore(false) - this.GetPlacementScore(true)) + 2 * (this.GetSurroundedScore(false) - this.GetSurroundedScore(true))) * (double) num);
    }

    private int GetPlacementScore(bool player)
    {
      int placementScore = 0;
      foreach (PawnSeega pawnSeega in player ? this._board.PlayerOneUnits : this._board.PlayerTwoUnits)
      {
        if (pawnSeega.IsPlaced)
          placementScore += this._boardValues[pawnSeega.X, pawnSeega.Y];
      }
      return placementScore;
    }

    private int GetSurroundedScore(bool player)
    {
      int surroundedScore = 0;
      foreach (PawnSeega pawn in player ? this._board.PlayerOneUnits : this._board.PlayerTwoUnits)
      {
        if (pawn.IsPlaced)
          surroundedScore += this.GetAmountSurroundingThisPawn(pawn);
      }
      return surroundedScore;
    }

    private int GetAmountSurroundingThisPawn(PawnSeega pawn)
    {
      int surroundingThisPawn = 0;
      int x = pawn.X;
      int y = pawn.Y;
      if (x > 0 && this._board.GetTile(x - 1, y).PawnOnTile != null)
        ++surroundingThisPawn;
      if (y > 0 && this._board.GetTile(x, y - 1).PawnOnTile != null)
        ++surroundingThisPawn;
      if (x < BoardGameSeega.BoardWidth - 1 && this._board.GetTile(x + 1, y).PawnOnTile != null)
        ++surroundingThisPawn;
      if (y < BoardGameSeega.BoardHeight - 1 && this._board.GetTile(x, y + 1).PawnOnTile != null)
        ++surroundingThisPawn;
      return surroundingThisPawn;
    }
  }
}
