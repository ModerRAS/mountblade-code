// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class BehaviorComponent
  {
    protected FormationAI.BehaviorSide _behaviorSide;
    protected const float FormArrangementDistanceToOrderPosition = 10f;
    private const float _playerInformCooldown = 60f;
    protected float _lastPlayerInformTime;
    private Timer _navmeshlessTargetPenaltyTime;
    private float _navmeshlessTargetPositionPenalty = 1f;
    public bool IsCurrentOrderChanged;
    private MovementOrder _currentOrder;
    protected FacingOrder CurrentFacingOrder = FacingOrder.FacingOrderLookAtEnemy;

    public Formation Formation { get; private set; }

    public float BehaviorCoherence { get; set; }

    protected BehaviorComponent(Formation formation)
    {
      this.Formation = formation;
      this.PreserveExpireTime = 0.0f;
      this._navmeshlessTargetPenaltyTime = new Timer(Mission.Current.CurrentTime, 50f);
    }

    protected BehaviorComponent()
    {
    }

    private void InformSergeantPlayer()
    {
      if (Mission.Current.MainAgent == null || this.Formation.Team.GeneralAgent == null || this.Formation.Team.IsPlayerGeneral || !this.Formation.Team.IsPlayerSergeant || this.Formation.PlayerOwner != Agent.Main)
        return;
      MBTextManager.SetTextVariable("BEHAVIOR", this.GetBehaviorString(), false);
      MBTextManager.SetTextVariable("PLAYER_NAME", Mission.Current.MainAgent.Name, false);
      MBTextManager.SetTextVariable("TEAM_LEADER", this.Formation.Team.GeneralAgent.Name, false);
      MBInformationManager.AddQuickInformation(new TextObject("{=L91XKoMD}{TEAM_LEADER}: {PLAYER_NAME}, {BEHAVIOR}"), 4000, this.Formation.Team.GeneralAgent.Character);
    }

    protected virtual void OnBehaviorActivatedAux()
    {
    }

    internal void OnBehaviorActivated()
    {
      if (!this.Formation.Team.IsPlayerGeneral && !this.Formation.Team.IsPlayerSergeant && this.Formation.IsPlayerTroopInFormation && Mission.Current.MainAgent != null)
      {
        MBTextManager.SetTextVariable("BEHAVIOUR_NAME_BEGIN", new TextObject(this.ToString().Replace("MBModule.Behavior", "")), false);
        MBInformationManager.AddQuickInformation(GameTexts.FindText("str_formation_ai_soldier_instruction_text"), 2000, Mission.Current.MainAgent.Character);
      }
      if (!GameNetwork.IsMultiplayer)
      {
        this.InformSergeantPlayer();
        this._lastPlayerInformTime = Mission.Current.CurrentTime;
      }
      if (!this.Formation.IsAIControlled)
        return;
      this.OnBehaviorActivatedAux();
    }

    public virtual void OnBehaviorCanceled()
    {
    }

    public virtual void OnAgentRemoved(Agent agent)
    {
    }

    public void RemindSergeantPlayer()
    {
      float currentTime = Mission.Current.CurrentTime;
      if (this != this.Formation.AI.ActiveBehavior || (double) this._lastPlayerInformTime + 60.0 >= (double) currentTime)
        return;
      this.InformSergeantPlayer();
      this._lastPlayerInformTime = currentTime;
    }

    public virtual void TickOccasionally()
    {
    }

    public virtual float NavmeshlessTargetPositionPenalty
    {
      get
      {
        if ((double) this._navmeshlessTargetPositionPenalty == 1.0)
          return 1f;
        this._navmeshlessTargetPenaltyTime.Check(Mission.Current.CurrentTime);
        float num = this._navmeshlessTargetPenaltyTime.ElapsedTime();
        if ((double) num >= 10.0)
        {
          this._navmeshlessTargetPositionPenalty = 1f;
          return 1f;
        }
        return (double) num <= 5.0 ? this._navmeshlessTargetPositionPenalty : MBMath.Lerp(this._navmeshlessTargetPositionPenalty, 1f, (float) (((double) num - 5.0) / 5.0));
      }
      set
      {
        this._navmeshlessTargetPenaltyTime.Reset(Mission.Current.CurrentTime);
        this._navmeshlessTargetPositionPenalty = value;
      }
    }

    public float GetAIWeight() => this.GetAiWeight() * this.NavmeshlessTargetPositionPenalty;

    protected abstract float GetAiWeight();

    public MovementOrder CurrentOrder
    {
      get => this._currentOrder;
      protected set
      {
        this._currentOrder = value;
        this.IsCurrentOrderChanged = true;
      }
    }

    public float PreserveExpireTime { get; set; }

    public float WeightFactor { get; set; }

    public virtual void ResetBehavior() => this.WeightFactor = 0.0f;

    public virtual TextObject GetBehaviorString()
    {
      return GameTexts.FindText("str_formation_ai_sergeant_instruction_behavior_text", this.GetType().Name);
    }

    public virtual void OnValidBehaviorSideChanged() => this._behaviorSide = this.Formation.AI.Side;

    protected virtual void CalculateCurrentOrder()
    {
    }

    public void PrecalculateMovementOrder()
    {
      this.CalculateCurrentOrder();
      this.CurrentOrder.GetPosition(this.Formation);
    }

    public override bool Equals(object obj) => this.GetType() == obj.GetType();

    public override int GetHashCode() => base.GetHashCode();

    public virtual void OnDeploymentFinished()
    {
    }
  }
}
