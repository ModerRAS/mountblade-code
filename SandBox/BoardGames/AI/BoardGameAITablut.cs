// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAITablut
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.MissionLogics;
using SandBox.BoardGames.Pawns;
using SandBox.BoardGames.Tiles;

#nullable disable
namespace SandBox.BoardGames.AI
{
  public class BoardGameAITablut : BoardGameAIBase
  {
    public static BoardGameTablut Board;
    private int _sampleCount;

    public BoardGameAITablut(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
      : base(difficulty, boardGameHandler)
    {
      BoardGameAITablut.Board = this.BoardGameHandler.Board as BoardGameTablut;
    }

    public override Move CalculateMovementStageMove()
    {
      Move openingMove;
      openingMove.GoalTile = (TileBase) null;
      openingMove.Unit = (PawnBase) null;
      if (BoardGameAITablut.Board.IsReady)
      {
        BoardGameTablut.BoardInformation boardSnapshot = BoardGameAITablut.Board.TakeBoardSnapshot();
        TreeNodeTablut andReturnRootNode = TreeNodeTablut.CreateTreeAndReturnRootNode(boardSnapshot, this.MaxDepth);
        for (int index = 0; index < this._sampleCount && !this.AbortRequested; ++index)
          andReturnRootNode.SelectAction();
        if (!this.AbortRequested)
        {
          BoardGameAITablut.Board.UndoMove(ref boardSnapshot);
          TreeNodeTablut childWithBestScore = andReturnRootNode.GetChildWithBestScore();
          if (childWithBestScore != null)
            openingMove = childWithBestScore.OpeningMove;
        }
      }
      if (!this.AbortRequested)
      {
        int num = openingMove.IsValid ? 1 : 0;
      }
      return openingMove;
    }

    protected override void InitializeDifficulty()
    {
      switch (this.Difficulty)
      {
        case BoardGameHelper.AIDifficulty.Easy:
          this.MaxDepth = 3;
          this._sampleCount = 30000;
          break;
        case BoardGameHelper.AIDifficulty.Normal:
          this.MaxDepth = 4;
          this._sampleCount = 47000;
          break;
        case BoardGameHelper.AIDifficulty.Hard:
          this.MaxDepth = 5;
          this._sampleCount = 64000;
          break;
      }
    }
  }
}
