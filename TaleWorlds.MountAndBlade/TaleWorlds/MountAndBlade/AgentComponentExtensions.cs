// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.AgentComponentExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class AgentComponentExtensions
  {
    public static float GetMorale(this Agent agent)
    {
      CommonAIComponent commonAiComponent = agent.CommonAIComponent;
      return commonAiComponent != null ? commonAiComponent.Morale : -1f;
    }

    public static void SetMorale(this Agent agent, float morale)
    {
      CommonAIComponent commonAiComponent = agent.CommonAIComponent;
      if (commonAiComponent == null)
        return;
      commonAiComponent.Morale = morale;
    }

    public static void ChangeMorale(this Agent agent, float delta)
    {
      CommonAIComponent commonAiComponent = agent.CommonAIComponent;
      if (commonAiComponent == null)
        return;
      commonAiComponent.Morale += delta;
    }

    public static bool IsRetreating(this Agent agent, bool isComponentAssured = true)
    {
      CommonAIComponent commonAiComponent = agent.CommonAIComponent;
      return commonAiComponent != null && commonAiComponent.IsRetreating;
    }

    public static void Retreat(this Agent agent, bool useCachingSystem = false)
    {
      agent.CommonAIComponent?.Retreat(useCachingSystem);
    }

    public static void StopRetreatingMoraleComponent(this Agent agent)
    {
      agent.CommonAIComponent?.StopRetreating();
    }

    public static void SetBehaviorValueSet(
      this Agent agent,
      HumanAIComponent.BehaviorValueSet behaviorValueSet)
    {
      agent.HumanAIComponent?.SetBehaviorValueSet(behaviorValueSet);
    }

    public static void RefreshBehaviorValues(
      this Agent agent,
      MovementOrder.MovementOrderEnum movementOrder,
      ArrangementOrder.ArrangementOrderEnum arrangementOrder)
    {
      agent.HumanAIComponent?.RefreshBehaviorValues(movementOrder, arrangementOrder);
    }

    public static void SetAIBehaviorValues(
      this Agent agent,
      HumanAIComponent.AISimpleBehaviorKind behavior,
      float y1,
      float x2,
      float y2,
      float x3,
      float y3)
    {
      agent.HumanAIComponent?.SetBehaviorParams(behavior, y1, x2, y2, x3, y3);
    }

    public static void AIMoveToGameObjectEnable(
      this Agent agent,
      UsableMissionObject usedObject,
      IDetachment detachment,
      Agent.AIScriptedFrameFlags scriptedFrameFlags = Agent.AIScriptedFrameFlags.NoAttack)
    {
      agent.HumanAIComponent.MoveToUsableGameObject(usedObject, detachment, scriptedFrameFlags);
    }

    public static void AIMoveToGameObjectDisable(this Agent agent)
    {
      agent.HumanAIComponent.MoveToClear();
    }

    public static bool AIMoveToGameObjectIsEnabled(this Agent agent)
    {
      return agent.AIStateFlags.HasAnyFlag<Agent.AIStateFlag>(Agent.AIStateFlag.UseObjectMoving);
    }

    public static void AIDefendGameObjectEnable(
      this Agent agent,
      UsableMissionObject usedObject,
      IDetachment detachment)
    {
      agent.HumanAIComponent.StartDefendingGameObject(usedObject, detachment);
    }

    public static void AIDefendGameObjectDisable(this Agent agent)
    {
      agent.HumanAIComponent.StopDefendingGameObject();
    }

    public static bool AIDefendGameObjectIsEnabled(this Agent agent)
    {
      return agent.HumanAIComponent.IsDefending;
    }

    public static bool AIInterestedInAnyGameObject(this Agent agent)
    {
      return agent.HumanAIComponent.IsInterestedInAnyGameObject();
    }

    public static bool AIInterestedInGameObject(
      this Agent agent,
      UsableMissionObject usableMissionObject)
    {
      return agent.HumanAIComponent.IsInterestedInGameObject(usableMissionObject);
    }

    public static void AIUseGameObjectEnable(this Agent agent)
    {
      agent.AIStateFlags |= Agent.AIStateFlag.UseObjectUsing;
    }

    public static void AIUseGameObjectDisable(this Agent agent)
    {
      agent.AIStateFlags &= ~Agent.AIStateFlag.UseObjectUsing;
    }

    public static bool AIUseGameObjectIsEnabled(this Agent agent)
    {
      return agent.AIStateFlags.HasAnyFlag<Agent.AIStateFlag>(Agent.AIStateFlag.UseObjectUsing);
    }

    public static Agent GetFollowedUnit(this Agent agent) => agent.HumanAIComponent?.FollowedAgent;

    public static void SetFollowedUnit(this Agent agent, Agent followedUnit)
    {
      agent.HumanAIComponent.FollowAgent(followedUnit);
    }
  }
}
