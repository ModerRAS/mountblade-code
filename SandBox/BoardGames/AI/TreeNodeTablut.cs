// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.TreeNodeTablut
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.BoardGames.Pawns;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.AI
{
  public class TreeNodeTablut
  {
    private const float UCTConstant = 1.5f;
    private static int MaxDepth;
    private readonly int _depth;
    private BoardGameTablut.BoardInformation _boardState;
    private TreeNodeTablut _parent;
    private List<TreeNodeTablut> _children;
    private BoardGameSide _side;
    private int _visits;
    private int _wins;

    public Move OpeningMove { get; private set; }

    private bool IsLeaf => this._children == null;

    public TreeNodeTablut(BoardGameSide side, int depth)
    {
      this._side = side;
      this._depth = depth;
    }

    public static TreeNodeTablut CreateTreeAndReturnRootNode(
      BoardGameTablut.BoardInformation initialBoardState,
      int maxDepth)
    {
      TreeNodeTablut.MaxDepth = maxDepth;
      return new TreeNodeTablut(BoardGameSide.Player, 0)
      {
        _boardState = initialBoardState
      };
    }

    public TreeNodeTablut GetChildWithBestScore()
    {
      TreeNodeTablut childWithBestScore = (TreeNodeTablut) null;
      if (!this.IsLeaf)
      {
        float num1 = float.MinValue;
        foreach (TreeNodeTablut child in this._children)
        {
          if (child._visits > 0)
          {
            float num2 = (float) child._wins / (float) child._visits;
            if ((double) num2 > (double) num1)
            {
              childWithBestScore = child;
              num1 = num2;
            }
          }
        }
      }
      return childWithBestScore;
    }

    public void SelectAction()
    {
      TreeNodeTablut tn = this;
      while (!tn.IsLeaf)
        tn = tn.Select();
      int num1;
      switch (tn.Expand())
      {
        case TreeNodeTablut.ExpandResult.NeedsToBeSimulated:
          if (tn._children != null)
            tn = tn.Select();
          int num2;
          switch (this.Simulate(ref tn))
          {
            case BoardGameTablut.State.Aborted:
              return;
            case BoardGameTablut.State.AIWon:
              num2 = 1;
              break;
            default:
              num2 = 0;
              break;
          }
          BoardGameSide winner1 = (BoardGameSide) num2;
          tn.BackPropagate(winner1);
          return;
        case TreeNodeTablut.ExpandResult.AIWon:
          num1 = 1;
          break;
        default:
          num1 = 0;
          break;
      }
      BoardGameSide winner2 = (BoardGameSide) num1;
      tn.BackPropagate(winner2);
    }

    private TreeNodeTablut Select()
    {
      TreeNodeTablut treeNodeTablut = (TreeNodeTablut) null;
      if (!this.IsLeaf)
      {
        double num1 = double.MinValue;
        foreach (TreeNodeTablut child in this._children)
        {
          if (child._visits == 0)
          {
            treeNodeTablut = child;
            break;
          }
          double num2 = (double) child._wins / (double) child._visits + 1.5 * (double) MathF.Sqrt(MathF.Log((float) this._visits) / (float) child._visits);
          if (num2 > num1)
          {
            treeNodeTablut = child;
            num1 = num2;
          }
        }
        if (treeNodeTablut != null && treeNodeTablut._boardState.PawnInformation == null)
        {
          BoardGameAITablut.Board.UndoMove(ref treeNodeTablut._parent._boardState);
          BoardGameAITablut.Board.AIMakeMove(treeNodeTablut.OpeningMove);
          treeNodeTablut._boardState = BoardGameAITablut.Board.TakeBoardSnapshot();
        }
      }
      return treeNodeTablut;
    }

    private TreeNodeTablut.ExpandResult Expand()
    {
      TreeNodeTablut.ExpandResult expandResult = TreeNodeTablut.ExpandResult.NeedsToBeSimulated;
      if (this._depth < TreeNodeTablut.MaxDepth)
      {
        BoardGameAITablut.Board.UndoMove(ref this._boardState);
        switch (BoardGameAITablut.Board.CheckGameState())
        {
          case BoardGameTablut.State.InProgress:
            BoardGameSide side = this._side == BoardGameSide.Player ? BoardGameSide.AI : BoardGameSide.Player;
            List<List<Move>> allValidMoves = BoardGameAITablut.Board.CalculateAllValidMoves(side);
            int totalMovesAvailable = BoardGameAITablut.Board.GetTotalMovesAvailable(ref allValidMoves);
            if (totalMovesAvailable > 0)
            {
              this._children = new List<TreeNodeTablut>(totalMovesAvailable);
              using (List<List<Move>>.Enumerator enumerator = allValidMoves.GetEnumerator())
              {
                while (enumerator.MoveNext())
                {
                  foreach (Move move in enumerator.Current)
                    this._children.Add(new TreeNodeTablut(side, this._depth + 1)
                    {
                      OpeningMove = move,
                      _parent = this
                    });
                }
                break;
              }
            }
            else
            {
              Debug.FailedAssert("No available moves left but the game is in progress", "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\AI\\TreeNodeTablut.cs", nameof (Expand), 203);
              break;
            }
          case BoardGameTablut.State.Aborted:
            break;
          case BoardGameTablut.State.AIWon:
            expandResult = TreeNodeTablut.ExpandResult.AIWon;
            break;
          default:
            expandResult = TreeNodeTablut.ExpandResult.PlayerWon;
            break;
        }
      }
      return expandResult;
    }

    private BoardGameTablut.State Simulate(ref TreeNodeTablut tn)
    {
      BoardGameAITablut.Board.UndoMove(ref tn._boardState);
      BoardGameTablut.State state = BoardGameAITablut.Board.CheckGameState();
      BoardGameSide side = tn._side;
      while (state == BoardGameTablut.State.InProgress)
      {
        List<PawnBase> source = tn._side == BoardGameSide.Player ? BoardGameAITablut.Board.PlayerOneUnits : BoardGameAITablut.Board.PlayerTwoUnits;
        int count = source.Count;
        int num = 3;
        PawnBase pawn;
        bool flag;
        do
        {
          pawn = source[MBRandom.RandomInt(count)];
          flag = BoardGameAITablut.Board.HasAvailableMoves(pawn as PawnTablut);
          --num;
        }
        while (!flag && num > 0);
        if (!flag)
        {
          pawn = source.OrderBy<PawnBase, int>((Func<PawnBase, int>) (x => MBRandom.RandomInt())).FirstOrDefault<PawnBase>((Func<PawnBase, bool>) (x => BoardGameAITablut.Board.HasAvailableMoves(x as PawnTablut)));
          flag = pawn != null;
        }
        if (flag)
        {
          Move randomAvailableMove = BoardGameAITablut.Board.GetRandomAvailableMove(pawn as PawnTablut);
          BoardGameAITablut.Board.AIMakeMove(randomAvailableMove);
          state = BoardGameAITablut.Board.CheckGameState();
        }
        else
          state = tn._side != BoardGameSide.Player ? BoardGameTablut.State.PlayerWon : BoardGameTablut.State.AIWon;
        tn._side = tn._side == BoardGameSide.Player ? BoardGameSide.AI : BoardGameSide.Player;
      }
      tn._side = side;
      return state;
    }

    private void BackPropagate(BoardGameSide winner)
    {
      for (TreeNodeTablut treeNodeTablut = this; treeNodeTablut != null; treeNodeTablut = treeNodeTablut._parent)
      {
        ++treeNodeTablut._visits;
        if (winner == treeNodeTablut._side)
          ++treeNodeTablut._wins;
      }
    }

    private enum ExpandResult
    {
      NeedsToBeSimulated,
      AIWon,
      PlayerWon,
    }
  }
}
