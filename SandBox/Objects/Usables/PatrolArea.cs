// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Usables.PatrolArea
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.AI;
using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.Usables
{
  public class PatrolArea : UsableMachine
  {
    public int AreaIndex;
    private int _activeIndex;

    private int ActiveIndex
    {
      get => this._activeIndex;
      set
      {
        if (this._activeIndex == value)
          return;
        this.StandingPoints[value].IsDeactivated = false;
        this.StandingPoints[this._activeIndex].IsDeactivated = true;
        this._activeIndex = value;
      }
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      return this.PilotStandingPoint?.ActionMessage;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return this.PilotStandingPoint?.DescriptionMessage.ToString();
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new UsablePlaceAI((UsableMachine) this);
    }

    protected override void OnInit()
    {
      base.OnInit();
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.IsDeactivated = true;
      this.ActiveIndex = this.StandingPoints.Count - 1;
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this.StandingPoints[this.ActiveIndex].HasAIUser)
        return;
      this.ActiveIndex = this.ActiveIndex == 0 ? this.StandingPoints.Count - 1 : this.ActiveIndex - 1;
    }
  }
}
