// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ArcherPosition
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ArcherPosition
  {
    private FormationAI.BehaviorSide _closestSide;
    private int _connectedSides;
    private SiegeQuerySystem _siegeQuerySystem;
    private readonly Formation[] _lastAssignedFormations;

    public GameEntity Entity { get; }

    public TacticalPosition TacticalArcherPosition { get; }

    public int ConnectedSides
    {
      get => this._connectedSides;
      private set => this._connectedSides = value;
    }

    public Formation GetLastAssignedFormation(int teamIndex)
    {
      return teamIndex >= 0 ? this._lastAssignedFormations[teamIndex] : (Formation) null;
    }

    public ArcherPosition(
      GameEntity _entity,
      SiegeQuerySystem siegeQuerySystem,
      BattleSideEnum battleSide)
    {
      this.Entity = _entity;
      this.TacticalArcherPosition = this.Entity.GetFirstScriptOfType<TacticalPosition>();
      this._siegeQuerySystem = siegeQuerySystem;
      this.DetermineArcherPositionSide(battleSide);
      this._lastAssignedFormations = new Formation[Mission.Current.Teams.Count];
    }

    private static int ConvertToBinaryPow(int pow) => 1 << pow;

    public bool IsArcherPositionRelatedToSide(FormationAI.BehaviorSide side)
    {
      return (ArcherPosition.ConvertToBinaryPow((int) side) & this.ConnectedSides) != 0;
    }

    public FormationAI.BehaviorSide GetArcherPositionClosestSide() => this._closestSide;

    public void OnDeploymentFinished(SiegeQuerySystem siegeQuerySystem, BattleSideEnum battleSide)
    {
      this._siegeQuerySystem = siegeQuerySystem;
      this.DetermineArcherPositionSide(battleSide);
    }

    private void DetermineArcherPositionSide(BattleSideEnum battleSide)
    {
      this.ConnectedSides = 0;
      if (this.TacticalArcherPosition != null)
      {
        int tacticalPositionSide = (int) this.TacticalArcherPosition.TacticalPositionSide;
        if (tacticalPositionSide < 3)
        {
          this._closestSide = this.TacticalArcherPosition.TacticalPositionSide;
          this.ConnectedSides = ArcherPosition.ConvertToBinaryPow(tacticalPositionSide);
        }
      }
      if (this.ConnectedSides != 0)
        return;
      if (battleSide == BattleSideEnum.Defender)
        ArcherPosition.CalculateArcherPositionSideUsingDefenderLanes(this._siegeQuerySystem, this.Entity.GlobalPosition, out this._closestSide, out this._connectedSides);
      else
        ArcherPosition.CalculateArcherPositionSideUsingAttackerRegions(this._siegeQuerySystem, this.Entity.GlobalPosition, out this._closestSide, out this._connectedSides);
    }

    private static void CalculateArcherPositionSideUsingAttackerRegions(
      SiegeQuerySystem siegeQuerySystem,
      Vec3 position,
      out FormationAI.BehaviorSide _closestSide,
      out int ConnectedSides)
    {
      float num1 = position.DistanceSquared(siegeQuerySystem.LeftAttackerOrigin);
      float num2 = position.DistanceSquared(siegeQuerySystem.MiddleAttackerOrigin);
      float num3 = position.DistanceSquared(siegeQuerySystem.RightAttackerOrigin);
      FormationAI.BehaviorSide pow = (double) num1 >= (double) num2 || (double) num1 >= (double) num3 ? ((double) num3 >= (double) num2 ? FormationAI.BehaviorSide.Middle : FormationAI.BehaviorSide.Right) : FormationAI.BehaviorSide.Left;
      _closestSide = pow;
      ConnectedSides = ArcherPosition.ConvertToBinaryPow((int) pow);
      Vec2 vec2_1 = position.AsVec2 - siegeQuerySystem.LeftDefenderOrigin.AsVec2;
      Vec2 vec2_2;
      if ((double) vec2_1.DotProduct(siegeQuerySystem.LeftToMidDir) >= 0.0)
      {
        ref Vec2 local = ref vec2_1;
        vec2_2 = siegeQuerySystem.LeftToMidDir;
        Vec2 v = vec2_2.RightVec();
        if ((double) local.DotProduct(v) >= 0.0)
        {
          ConnectedSides |= ArcherPosition.ConvertToBinaryPow(0);
          goto label_6;
        }
      }
      vec2_1 = position.AsVec2 - siegeQuerySystem.MidDefenderOrigin.AsVec2;
      if ((double) vec2_1.DotProduct(siegeQuerySystem.MidToLeftDir) >= 0.0)
      {
        ref Vec2 local = ref vec2_1;
        vec2_2 = siegeQuerySystem.MidToLeftDir;
        Vec2 v = vec2_2.RightVec();
        if ((double) local.DotProduct(v) >= 0.0)
          ConnectedSides |= ArcherPosition.ConvertToBinaryPow(0);
      }
label_6:
      vec2_1 = position.AsVec2 - siegeQuerySystem.MidDefenderOrigin.AsVec2;
      if ((double) vec2_1.DotProduct(siegeQuerySystem.LeftToMidDir) >= 0.0)
      {
        ref Vec2 local = ref vec2_1;
        vec2_2 = siegeQuerySystem.LeftToMidDir;
        Vec2 v = vec2_2.LeftVec();
        if ((double) local.DotProduct(v) >= 0.0)
        {
          ConnectedSides |= ArcherPosition.ConvertToBinaryPow(1);
          goto label_12;
        }
      }
      vec2_1 = position.AsVec2 - siegeQuerySystem.RightDefenderOrigin.AsVec2;
      if ((double) vec2_1.DotProduct(siegeQuerySystem.RightToMidDir) >= 0.0)
      {
        ref Vec2 local = ref vec2_1;
        vec2_2 = siegeQuerySystem.RightToMidDir;
        Vec2 v = vec2_2.RightVec();
        if ((double) local.DotProduct(v) >= 0.0)
          ConnectedSides |= ArcherPosition.ConvertToBinaryPow(1);
      }
label_12:
      vec2_1 = position.AsVec2 - siegeQuerySystem.RightDefenderOrigin.AsVec2;
      if ((double) vec2_1.DotProduct(siegeQuerySystem.MidToRightDir) >= 0.0)
      {
        ref Vec2 local = ref vec2_1;
        vec2_2 = siegeQuerySystem.MidToRightDir;
        Vec2 v = vec2_2.LeftVec();
        if ((double) local.DotProduct(v) >= 0.0)
        {
          ConnectedSides |= ArcherPosition.ConvertToBinaryPow(2);
          return;
        }
      }
      vec2_1 = position.AsVec2 - siegeQuerySystem.RightDefenderOrigin.AsVec2;
      if ((double) vec2_1.DotProduct(siegeQuerySystem.RightToMidDir) < 0.0)
        return;
      ref Vec2 local1 = ref vec2_1;
      vec2_2 = siegeQuerySystem.RightToMidDir;
      Vec2 v1 = vec2_2.LeftVec();
      if ((double) local1.DotProduct(v1) < 0.0)
        return;
      ConnectedSides |= ArcherPosition.ConvertToBinaryPow(2);
    }

    private static void CalculateArcherPositionSideUsingDefenderLanes(
      SiegeQuerySystem siegeQuerySystem,
      Vec3 position,
      out FormationAI.BehaviorSide _closestSide,
      out int ConnectedSides)
    {
      float num1 = position.DistanceSquared(siegeQuerySystem.LeftDefenderOrigin);
      float num2 = position.DistanceSquared(siegeQuerySystem.MidDefenderOrigin);
      float num3 = position.DistanceSquared(siegeQuerySystem.RightDefenderOrigin);
      FormationAI.BehaviorSide pow1 = (double) num1 >= (double) num2 || (double) num1 >= (double) num3 ? ((double) num3 >= (double) num2 ? FormationAI.BehaviorSide.Middle : FormationAI.BehaviorSide.Right) : FormationAI.BehaviorSide.Left;
      FormationAI.BehaviorSide pow2 = FormationAI.BehaviorSide.BehaviorSideNotSet;
      switch (pow1)
      {
        case FormationAI.BehaviorSide.Left:
          if ((double) (position.AsVec2 - siegeQuerySystem.LeftDefenderOrigin.AsVec2).Normalized().DotProduct(siegeQuerySystem.DefenderLeftToDefenderMidDir) > 0.0)
          {
            pow2 = FormationAI.BehaviorSide.Middle;
            break;
          }
          break;
        case FormationAI.BehaviorSide.Middle:
          pow2 = (double) (position.AsVec2 - siegeQuerySystem.MidDefenderOrigin.AsVec2).Normalized().DotProduct(siegeQuerySystem.DefenderMidToDefenderRightDir) <= 0.0 ? FormationAI.BehaviorSide.Left : FormationAI.BehaviorSide.Right;
          break;
        case FormationAI.BehaviorSide.Right:
          if ((double) (position.AsVec2 - siegeQuerySystem.RightDefenderOrigin.AsVec2).Normalized().DotProduct(siegeQuerySystem.DefenderMidToDefenderRightDir) < 0.0)
          {
            pow2 = FormationAI.BehaviorSide.Middle;
            break;
          }
          break;
      }
      _closestSide = pow1;
      ConnectedSides = ArcherPosition.ConvertToBinaryPow((int) pow1);
      if (pow2 == FormationAI.BehaviorSide.BehaviorSideNotSet)
        return;
      ConnectedSides |= ArcherPosition.ConvertToBinaryPow((int) pow2);
    }

    public void SetLastAssignedFormation(int teamIndex, Formation formation)
    {
      if (teamIndex < 0)
        return;
      this._lastAssignedFormations[teamIndex] = formation;
    }
  }
}
