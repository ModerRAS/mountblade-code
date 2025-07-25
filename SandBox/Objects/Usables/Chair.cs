// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Usables.Chair
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.AI;
using SandBox.Objects.AnimationPoints;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.Usables
{
  public class Chair : UsableMachine
  {
    public Chair.SittableType ChairType;

    protected override void OnInit()
    {
      base.OnInit();
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.AutoSheathWeapons = true;
    }

    public bool IsAgentFullySitting(Agent usingAgent)
    {
      return this.StandingPoints.Count > 0 && ((IEnumerable<UsableMissionObject>) this.StandingPoints).Contains<UsableMissionObject>(usingAgent.CurrentlyUsedGameObject) && usingAgent.IsSitting();
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new UsablePlaceAI((UsableMachine) this);
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = new TextObject(this.IsAgentFullySitting(Agent.Main) ? "{=QGdaakYW}{KEY} Get Up" : "{=bl2aRW8f}{KEY} Sit");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      switch (this.ChairType)
      {
        case Chair.SittableType.Log:
          return new TextObject("{=9pgOGq7X}Log").ToString();
        case Chair.SittableType.Sofa:
          return new TextObject("{=GvLZKQ1U}Sofa").ToString();
        case Chair.SittableType.Ground:
          return new TextObject("{=L7ZQtIuM}Ground").ToString();
        default:
          return new TextObject("{=OgTUrRlR}Chair").ToString();
      }
    }

    public override StandingPoint GetBestPointAlternativeTo(
      StandingPoint standingPoint,
      Agent agent)
    {
      if (!(standingPoint is AnimationPoint pointAlternativeTo) || pointAlternativeTo.GroupId < 0)
        return (StandingPoint) pointAlternativeTo;
      WorldFrame userFrameForAgent = standingPoint.GetUserFrameForAgent(agent);
      Vec3 groundVec3 = userFrameForAgent.Origin.GetGroundVec3();
      float num1 = groundVec3.DistanceSquared(agent.Position);
      foreach (StandingPoint standingPoint1 in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint1 is AnimationPoint animationPoint && standingPoint != standingPoint1 && pointAlternativeTo.GroupId == animationPoint.GroupId && !animationPoint.IsDisabledForAgent(agent))
        {
          userFrameForAgent = animationPoint.GetUserFrameForAgent(agent);
          groundVec3 = userFrameForAgent.Origin.GetGroundVec3();
          float num2 = groundVec3.DistanceSquared(agent.Position);
          if ((double) num2 < (double) num1)
          {
            num1 = num2;
            pointAlternativeTo = animationPoint;
          }
        }
      }
      return (StandingPoint) pointAlternativeTo;
    }

    public override OrderType GetOrder(BattleSideEnum side) => OrderType.None;

    public enum SittableType
    {
      Chair,
      Log,
      Sofa,
      Ground,
    }
  }
}
