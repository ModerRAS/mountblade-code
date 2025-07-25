// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAIPuluc
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.MissionLogics;
using SandBox.BoardGames.Pawns;
using SandBox.BoardGames.Tiles;
using System.Collections.Generic;

#nullable disable
namespace SandBox.BoardGames.AI
{
  public class BoardGameAIPuluc : BoardGameAIBase
  {
    private readonly BoardGamePuluc _board;
    private readonly float[] _diceProbabilities = new float[5]
    {
      1f / 16f,
      0.25f,
      0.375f,
      0.25f,
      1f / 16f
    };

    public BoardGameAIPuluc(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
      : base(difficulty, boardGameHandler)
    {
      this._board = this.BoardGameHandler.Board as BoardGamePuluc;
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
      Move bestMove;
      bestMove.GoalTile = (TileBase) null;
      bestMove.Unit = (PawnBase) null;
      if (this._board.IsReady)
      {
        double num1 = (double) this.ExpectiMax(this.MaxDepth, BoardGameSide.AI, false, ref bestMove);
      }
      if (!this.AbortRequested)
      {
        int num2 = bestMove.IsValid ? 1 : 0;
      }
      return bestMove;
    }

    private float ExpectiMax(int depth, BoardGameSide side, bool chanceNode, ref Move bestMove)
    {
      float num1;
      if (depth == 0)
      {
        num1 = (float) this.Evaluation();
        if (side == BoardGameSide.Player)
          num1 = -num1;
      }
      else if (chanceNode)
      {
        num1 = 0.0f;
        for (int index = 0; index < 5; ++index)
        {
          int lastDice = this._board.LastDice;
          this._board.ForceDice(index == 0 ? 5 : index);
          num1 += this._diceProbabilities[index] * this.ExpectiMax(depth - 1, side, false, ref bestMove);
          this._board.ForceDice(lastDice);
        }
      }
      else
      {
        BoardGamePuluc.BoardInformation boardSnapshot = this._board.TakeBoardSnapshot();
        List<List<Move>> allValidMoves = this._board.CalculateAllValidMoves(side);
        if (this._board.HasMovesAvailable(ref allValidMoves))
        {
          num1 = float.MinValue;
          foreach (List<Move> moveList in allValidMoves)
          {
            if (moveList != null)
            {
              foreach (Move move in moveList)
              {
                this._board.AIMakeMove(move);
                BoardGameSide side1 = side == BoardGameSide.AI ? BoardGameSide.Player : BoardGameSide.AI;
                float num2 = -this.ExpectiMax(depth - 1, side1, true, ref bestMove);
                this._board.UndoMove(ref boardSnapshot);
                if ((double) num1 < (double) num2)
                {
                  num1 = num2;
                  if (depth == this.MaxDepth)
                    bestMove = move;
                }
              }
            }
          }
        }
        else
        {
          num1 = (float) this.Evaluation();
          if (side == BoardGameSide.Player)
            num1 = -num1;
        }
      }
      return num1;
    }

    private int Evaluation()
    {
      return 20 * (this._board.GetPlayerTwoUnitsAlive() - this._board.GetPlayerOneUnitsAlive()) + 5 * (this.GetUnitsBeingCaptured(true) - this.GetUnitsBeingCaptured(false)) + (this.GetUnitsInPlay(false) - this.GetUnitsInPlay(true));
    }

    private int GetUnitsInSpawn(bool playerOne)
    {
      int unitsInSpawn = 0;
      foreach (PawnPuluc pawnPuluc in playerOne ? this._board.PlayerOneUnits : this._board.PlayerTwoUnits)
      {
        if (pawnPuluc.IsInSpawn)
          ++unitsInSpawn;
      }
      return unitsInSpawn;
    }

    private int GetUnitsBeingCaptured(bool playerOne)
    {
      int unitsBeingCaptured = 0;
      foreach (PawnPuluc pawnPuluc in playerOne ? this._board.PlayerOneUnits : this._board.PlayerTwoUnits)
      {
        if (!pawnPuluc.IsTopPawn)
          ++unitsBeingCaptured;
      }
      return unitsBeingCaptured;
    }

    private int GetUnitsInPlay(bool playerOne)
    {
      int unitsInPlay = 0;
      foreach (PawnPuluc pawnPuluc in playerOne ? this._board.PlayerOneUnits : this._board.PlayerTwoUnits)
      {
        if (pawnPuluc.InPlay && pawnPuluc.IsTopPawn)
          ++unitsInPlay;
      }
      return unitsInPlay;
    }
  }
}
