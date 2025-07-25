// Decompiled with JetBrains decompiler
// Type: SandBox.BoardGames.AI.BoardGameAIBase
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using Helpers;
using SandBox.BoardGames.MissionLogics;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace SandBox.BoardGames.AI
{
  public abstract class BoardGameAIBase
  {
    private const float AIDecisionDuration = 1.5f;
    protected bool MayForfeit;
    protected int MaxDepth;
    private float _aiDecisionTimer;
    private readonly ITask _aiTask;
    private readonly object _stateLock;
    private volatile BoardGameAIBase.AIState _state;

    public BoardGameAIBase.AIState State => this._state;

    public Move RecentMoveCalculated { get; private set; }

    public bool AbortRequested => this.State == BoardGameAIBase.AIState.AbortRequested;

    protected BoardGameHelper.AIDifficulty Difficulty { get; private set; }

    protected MissionBoardGameLogic BoardGameHandler { get; private set; }

    protected BoardGameAIBase(
      BoardGameHelper.AIDifficulty difficulty,
      MissionBoardGameLogic boardGameHandler)
    {
      this._stateLock = new object();
      this.Difficulty = difficulty;
      this.BoardGameHandler = boardGameHandler;
      this.Initialize();
      this._aiTask = (ITask) AsyncTask.CreateWithDelegate(new ManagedDelegate()
      {
        Instance = new ManagedDelegate.DelegateDefinition(this.UpdateThinkingAboutMoveOnSeparateThread)
      }, true);
    }

    public virtual Move CalculatePreMovementStageMove()
    {
      Debug.FailedAssert("CalculatePreMovementStageMove is not implemented for " + (object) this.BoardGameHandler.CurrentBoardGame, "C:\\Develop\\MB3\\Source\\Bannerlord\\SandBox\\BoardGames\\AI\\BoardGameAIBase.cs", nameof (CalculatePreMovementStageMove), 60);
      return Move.Invalid;
    }

    public abstract Move CalculateMovementStageMove();

    protected abstract void InitializeDifficulty();

    public virtual bool WantsToForfeit() => false;

    public void OnSetGameOver()
    {
      lock (this._stateLock)
      {
        switch (this.State)
        {
          case BoardGameAIBase.AIState.ReadyToRun:
            this._state = BoardGameAIBase.AIState.AbortRequested;
            break;
          case BoardGameAIBase.AIState.Running:
            this._state = BoardGameAIBase.AIState.AbortRequested;
            break;
        }
      }
      this._aiTask.Wait();
      this.Reset();
    }

    public void Initialize()
    {
      this.Reset();
      this.InitializeDifficulty();
    }

    public void SetDifficulty(BoardGameHelper.AIDifficulty difficulty)
    {
      this.Difficulty = difficulty;
      this.InitializeDifficulty();
    }

    public float HowLongDidAIThinkAboutMove() => this._aiDecisionTimer;

    public void UpdateThinkingAboutMove(float dt)
    {
      this._aiDecisionTimer += dt;
      lock (this._stateLock)
      {
        if (this.State != BoardGameAIBase.AIState.NeedsToRun)
          return;
        this._state = BoardGameAIBase.AIState.ReadyToRun;
        this._aiTask.Invoke();
      }
    }

    private void UpdateThinkingAboutMoveOnSeparateThread()
    {
      if (this.BoardGameHandler.Board.InPreMovementStage)
        this.CalculatePreMovementStageOnSeparateThread();
      else
        this.CalculateMovementStageMoveOnSeparateThread();
    }

    public void ResetThinking()
    {
      this._aiDecisionTimer = 0.0f;
      this._state = BoardGameAIBase.AIState.NeedsToRun;
    }

    public bool CanMakeMove()
    {
      return this.State == BoardGameAIBase.AIState.Done && (double) this._aiDecisionTimer >= 1.5;
    }

    private void Reset()
    {
      this.RecentMoveCalculated = Move.Invalid;
      this.MayForfeit = true;
      this.ResetThinking();
      this.MaxDepth = 0;
    }

    private void CalculatePreMovementStageOnSeparateThread()
    {
      if (!this.OnBeginSeparateThread())
        return;
      this.OnExitSeparateThread(this.CalculatePreMovementStageMove());
    }

    private void CalculateMovementStageMoveOnSeparateThread()
    {
      if (!this.OnBeginSeparateThread())
        return;
      this.OnExitSeparateThread(this.CalculateMovementStageMove());
    }

    private bool OnBeginSeparateThread()
    {
      bool flag = false;
      lock (this._stateLock)
      {
        if (this.AbortRequested)
        {
          this._state = BoardGameAIBase.AIState.Aborted;
          flag = true;
        }
        else
          this._state = BoardGameAIBase.AIState.Running;
      }
      return !flag;
    }

    private void OnExitSeparateThread(Move calculatedMove)
    {
      lock (this._stateLock)
      {
        if (this.AbortRequested)
        {
          this._state = BoardGameAIBase.AIState.Aborted;
          this.RecentMoveCalculated = Move.Invalid;
        }
        else
        {
          this._state = BoardGameAIBase.AIState.Done;
          this.RecentMoveCalculated = calculatedMove;
        }
      }
    }

    public enum AIState
    {
      NeedsToRun,
      ReadyToRun,
      Running,
      AbortRequested,
      Aborted,
      Done,
    }
  }
}
