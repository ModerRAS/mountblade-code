// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BehaviorFlank
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class BehaviorFlank : BehaviorComponent
  {
    public BehaviorFlank(Formation formation)
      : base(formation)
    {
      this.BehaviorCoherence = 0.5f;
      this.CalculateCurrentOrder();
    }

    protected override void CalculateCurrentOrder()
    {
      WorldPosition position = this.Formation.AI.Side == FormationAI.BehaviorSide.Right ? this.Formation.QuerySystem.Team.RightFlankEdgePosition : this.Formation.QuerySystem.Team.LeftFlankEdgePosition;
      Vec2 direction = (position.AsVec2 - this.Formation.QuerySystem.AveragePosition).Normalized();
      this.CurrentOrder = MovementOrder.MovementOrderMove(position);
      this.CurrentFacingOrder = FacingOrder.FacingOrderLookAtDirection(direction);
    }

    public override void TickOccasionally()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
    }

    public override TextObject GetBehaviorString()
    {
      TextObject behaviorString = base.GetBehaviorString();
      behaviorString.SetTextVariable("IS_GENERAL_SIDE", "0");
      behaviorString.SetTextVariable("SIDE_STRING", GameTexts.FindText("str_formation_ai_side_strings", this.Formation.AI.Side.ToString()));
      return behaviorString;
    }

    protected override void OnBehaviorActivatedAux()
    {
      this.CalculateCurrentOrder();
      this.Formation.SetMovementOrder(this.CurrentOrder);
      this.Formation.FacingOrder = this.CurrentFacingOrder;
      this.Formation.ArrangementOrder = ArrangementOrder.ArrangementOrderLine;
      this.Formation.FiringOrder = FiringOrder.FiringOrderFireAtWill;
      this.Formation.FormOrder = FormOrder.FormOrderDeep;
    }

    protected override float GetAiWeight()
    {
      FormationQuerySystem querySystem = this.Formation.QuerySystem;
      if (querySystem.ClosestEnemyFormation == null || querySystem.ClosestEnemyFormation.ClosestEnemyFormation == querySystem)
        return 0.0f;
      Vec2 vec2 = (querySystem.ClosestEnemyFormation.MedianPosition.AsVec2 - querySystem.AveragePosition).Normalized();
      WorldPosition medianPosition = querySystem.ClosestEnemyFormation.ClosestEnemyFormation.MedianPosition;
      Vec2 asVec2_1 = medianPosition.AsVec2;
      medianPosition = querySystem.ClosestEnemyFormation.MedianPosition;
      Vec2 asVec2_2 = medianPosition.AsVec2;
      Vec2 v = (asVec2_1 - asVec2_2).Normalized();
      if ((double) vec2.DotProduct(v) > -0.5)
        return 0.0f;
      if (Mission.Current.MissionTeamAIType != Mission.MissionTeamAITypeEnum.FieldBattle)
      {
        int faceGroupId = -1;
        Vec3 navMeshVec3 = (this.Formation.AI.Side == FormationAI.BehaviorSide.Right ? this.Formation.QuerySystem.Team.RightFlankEdgePosition : this.Formation.QuerySystem.Team.LeftFlankEdgePosition).GetNavMeshVec3();
        Mission.Current.Scene.GetNavigationMeshForPosition(ref navMeshVec3, out faceGroupId);
        if (faceGroupId >= 0)
        {
          Agent medianAgent = this.Formation.GetMedianAgent(true, true, this.Formation.QuerySystem.AveragePosition);
          if ((medianAgent != null ? (medianAgent.GetCurrentNavigationFaceId() % 10 == 1 ? 1 : 0) : 0) == (faceGroupId % 10 == 1 ? 1 : 0))
            goto label_8;
        }
        return 0.0f;
      }
label_8:
      return 1.2f;
    }
  }
}
