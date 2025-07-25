// Decompiled with JetBrains decompiler
// Type: SandBox.Tournaments.AgentControllers.ArcheryTournamentAgentController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.Tournaments.MissionLogics;
using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Tournaments.AgentControllers
{
  public class ArcheryTournamentAgentController : AgentController
  {
    private List<DestructableComponent> _targetList;
    private DestructableComponent _target;
    private TournamentArcheryMissionController _missionController;

    public override void OnInitialize()
    {
      this._missionController = Mission.Current.GetMissionBehavior<TournamentArcheryMissionController>();
    }

    public void OnTick()
    {
      if (!this.Owner.IsAIControlled)
        return;
      this.UpdateTarget();
    }

    public void SetTargets(List<DestructableComponent> targetList)
    {
      this._targetList = targetList;
      this._target = (DestructableComponent) null;
    }

    private void UpdateTarget()
    {
      if (this._target != null && !this._target.IsDestroyed)
        return;
      this.SelectNewTarget();
    }

    private void SelectNewTarget()
    {
      List<KeyValuePair<float, DestructableComponent>> source = new List<KeyValuePair<float, DestructableComponent>>();
      foreach (DestructableComponent target in this._targetList)
      {
        float score = this.GetScore(target);
        if ((double) score > 0.0)
          source.Add(new KeyValuePair<float, DestructableComponent>(score, target));
      }
      if (source.Count == 0)
      {
        this._target = (DestructableComponent) null;
        this.Owner.DisableScriptedCombatMovement();
        WorldPosition worldPosition = this.Owner.GetWorldPosition();
        this.Owner.SetScriptedPosition(ref worldPosition, false);
      }
      else
      {
        List<KeyValuePair<float, DestructableComponent>> list = source.OrderByDescending<KeyValuePair<float, DestructableComponent>, float>((Func<KeyValuePair<float, DestructableComponent>, float>) (x => x.Key)).ToList<KeyValuePair<float, DestructableComponent>>();
        int maxValue = MathF.Min(list.Count, 5);
        this._target = list[MBRandom.RandomInt(maxValue)].Value;
      }
      if (this._target == null)
        return;
      this.Owner.SetScriptedTargetEntityAndPosition(this._target.GameEntity, this.Owner.GetWorldPosition());
    }

    private float GetScore(DestructableComponent target)
    {
      return !target.IsDestroyed ? 1f / this.Owner.Position.DistanceSquared(target.GameEntity.GlobalPosition) : 0.0f;
    }

    public void OnTargetHit(Agent agent, DestructableComponent target)
    {
      if (agent != this.Owner && target != this._target)
        return;
      this.SelectNewTarget();
    }
  }
}
