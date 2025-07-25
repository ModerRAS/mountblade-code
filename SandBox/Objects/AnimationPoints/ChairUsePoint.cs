// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.AnimationPoints.ChairUsePoint
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.AnimationPoints
{
  public class ChairUsePoint : AnimationPoint
  {
    public bool NearTable;
    public string NearTableLoopAction = "";
    public string NearTablePairLoopAction = "";
    public bool Drink;
    public string DrinkLoopAction = "";
    public string DrinkPairLoopAction = "";
    public string DrinkRightHandItem = "";
    public string DrinkLeftHandItem = "";
    public bool Eat;
    public string EatLoopAction = "";
    public string EatPairLoopAction = "";
    public string EatRightHandItem = "";
    public string EatLeftHandItem = "";
    private ActionIndexCache _loopAction;
    private ActionIndexCache _pairLoopAction;
    private ActionIndexCache _nearTableLoopAction;
    private ActionIndexCache _nearTablePairLoopAction;
    private ActionIndexCache _drinkLoopAction;
    private ActionIndexCache _drinkPairLoopAction;
    private ActionIndexCache _eatLoopAction;
    private ActionIndexCache _eatPairLoopAction;

    protected override void SetActionCodes()
    {
      base.SetActionCodes();
      this._loopAction = ActionIndexCache.Create(this.LoopStartAction);
      this._pairLoopAction = ActionIndexCache.Create(this.PairLoopStartAction);
      this._nearTableLoopAction = ActionIndexCache.Create(this.NearTableLoopAction);
      this._nearTablePairLoopAction = ActionIndexCache.Create(this.NearTablePairLoopAction);
      this._drinkLoopAction = ActionIndexCache.Create(this.DrinkLoopAction);
      this._drinkPairLoopAction = ActionIndexCache.Create(this.DrinkPairLoopAction);
      this._eatLoopAction = ActionIndexCache.Create(this.EatLoopAction);
      this._eatPairLoopAction = ActionIndexCache.Create(this.EatPairLoopAction);
      this.SetChairAction(this.GetRandomChairAction());
    }

    protected override bool ShouldUpdateOnEditorVariableChanged(string variableName)
    {
      return base.ShouldUpdateOnEditorVariableChanged(variableName) || variableName == "NearTable" || variableName == "Drink" || variableName == "Eat" || variableName == "NearTableLoopAction" || variableName == "DrinkLoopAction" || variableName == "EatLoopAction";
    }

    public override void OnUse(Agent userAgent)
    {
      this.SetChairAction(this.CanAgentUseItem(userAgent) ? this.GetRandomChairAction() : ChairUsePoint.ChairAction.None);
      base.OnUse(userAgent);
    }

    private ChairUsePoint.ChairAction GetRandomChairAction()
    {
      List<ChairUsePoint.ChairAction> chairActionList = new List<ChairUsePoint.ChairAction>()
      {
        ChairUsePoint.ChairAction.None
      };
      if (this.NearTable && this._nearTableLoopAction != ActionIndexCache.act_none)
        chairActionList.Add(ChairUsePoint.ChairAction.LeanOnTable);
      if (this.Drink && this._drinkLoopAction != ActionIndexCache.act_none)
        chairActionList.Add(ChairUsePoint.ChairAction.Drink);
      if (this.Eat && this._eatLoopAction != ActionIndexCache.act_none)
        chairActionList.Add(ChairUsePoint.ChairAction.Eat);
      return chairActionList[new Random().Next(chairActionList.Count)];
    }

    private void SetChairAction(ChairUsePoint.ChairAction chairAction)
    {
      switch (chairAction)
      {
        case ChairUsePoint.ChairAction.None:
          this.LoopStartActionCode = this._loopAction;
          this.PairLoopStartActionCode = this._pairLoopAction;
          this.SelectedRightHandItem = this.RightHandItem;
          this.SelectedLeftHandItem = this.LeftHandItem;
          break;
        case ChairUsePoint.ChairAction.LeanOnTable:
          this.LoopStartActionCode = this._nearTableLoopAction;
          this.PairLoopStartActionCode = this._nearTablePairLoopAction;
          this.SelectedRightHandItem = string.Empty;
          this.SelectedLeftHandItem = string.Empty;
          break;
        case ChairUsePoint.ChairAction.Drink:
          this.LoopStartActionCode = this._drinkLoopAction;
          this.PairLoopStartActionCode = this._drinkPairLoopAction;
          this.SelectedRightHandItem = this.DrinkRightHandItem;
          this.SelectedLeftHandItem = this.DrinkLeftHandItem;
          break;
        case ChairUsePoint.ChairAction.Eat:
          this.LoopStartActionCode = this._eatLoopAction;
          this.PairLoopStartActionCode = this._eatPairLoopAction;
          this.SelectedRightHandItem = this.EatRightHandItem;
          this.SelectedLeftHandItem = this.EatLeftHandItem;
          break;
      }
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (this.UserAgent == null || this.UserAgent.IsAIControlled || !this.UserAgent.EventControlFlags.HasAnyFlag<Agent.EventControlFlag>(Agent.EventControlFlag.Crouch | Agent.EventControlFlag.Stand))
        return;
      this.UserAgent.StopUsingGameObject();
    }

    private enum ChairAction
    {
      None,
      LeanOnTable,
      Drink,
      Eat,
    }
  }
}
