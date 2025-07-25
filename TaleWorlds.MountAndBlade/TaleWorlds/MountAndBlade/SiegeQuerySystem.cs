// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.SiegeQuerySystem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class SiegeQuerySystem
  {
    private const float LaneProximityDistance = 15f;
    private readonly Team _attackerTeam;
    public Vec2 DefenderLeftToDefenderMidDir;
    public Vec2 DefenderMidToDefenderRightDir;
    private readonly QueryData<int> _leftRegionMemberCount;
    private readonly QueryData<int> _leftCloseAttackerCount;
    private readonly QueryData<int> _middleRegionMemberCount;
    private readonly QueryData<int> _middleCloseAttackerCount;
    private readonly QueryData<int> _rightRegionMemberCount;
    private readonly QueryData<int> _rightCloseAttackerCount;
    private readonly QueryData<int> _insideAttackerCount;
    private readonly QueryData<int> _leftDefenderCount;
    private readonly QueryData<int> _middleDefenderCount;
    private readonly QueryData<int> _rightDefenderCount;

    public int LeftRegionMemberCount => this._leftRegionMemberCount.Value;

    public int LeftCloseAttackerCount => this._leftCloseAttackerCount.Value;

    public int MiddleRegionMemberCount => this._middleRegionMemberCount.Value;

    public int MiddleCloseAttackerCount => this._middleCloseAttackerCount.Value;

    public int RightRegionMemberCount => this._rightRegionMemberCount.Value;

    public int RightCloseAttackerCount => this._rightCloseAttackerCount.Value;

    public int InsideAttackerCount => this._insideAttackerCount.Value;

    public int LeftDefenderCount => this._leftDefenderCount.Value;

    public int MiddleDefenderCount => this._middleDefenderCount.Value;

    public int RightDefenderCount => this._rightDefenderCount.Value;

    public SiegeQuerySystem(Team team, IEnumerable<SiegeLane> lanes)
    {
      Mission mission = Mission.Current;
      this._attackerTeam = mission.AttackerTeam;
      Team defenderTeam = mission.DefenderTeam;
      SiegeLane siegeLane1 = lanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (l => l.LaneSide == FormationAI.BehaviorSide.Left));
      SiegeLane siegeLane2 = lanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (l => l.LaneSide == FormationAI.BehaviorSide.Middle));
      SiegeLane siegeLane3 = lanes.FirstOrDefault<SiegeLane>((Func<SiegeLane, bool>) (l => l.LaneSide == FormationAI.BehaviorSide.Right));
      Mission current = Mission.Current;
      GameEntity entityWithTag1 = current.Scene.FindEntityWithTag("left_defender_origin");
      WorldPosition worldPosition;
      Vec3 vec3_1;
      if (entityWithTag1 == null)
      {
        if (!siegeLane1.DefenderOrigin.AsVec2.IsNonZero())
        {
          vec3_1 = new Vec3();
        }
        else
        {
          worldPosition = siegeLane1.DefenderOrigin;
          vec3_1 = worldPosition.GetGroundVec3();
        }
      }
      else
        vec3_1 = entityWithTag1.GlobalPosition;
      this.LeftDefenderOrigin = vec3_1;
      GameEntity entityWithTag2 = current.Scene.FindEntityWithTag("left_attacker_origin");
      Vec3 vec3_2;
      if (entityWithTag2 == null)
      {
        worldPosition = siegeLane1.AttackerOrigin;
        if (!worldPosition.AsVec2.IsNonZero())
        {
          vec3_2 = new Vec3();
        }
        else
        {
          worldPosition = siegeLane1.AttackerOrigin;
          vec3_2 = worldPosition.GetGroundVec3();
        }
      }
      else
        vec3_2 = entityWithTag2.GlobalPosition;
      this.LeftAttackerOrigin = vec3_2;
      GameEntity entityWithTag3 = current.Scene.FindEntityWithTag("middle_defender_origin");
      Vec3 vec3_3;
      if (entityWithTag3 == null)
      {
        worldPosition = siegeLane2.DefenderOrigin;
        if (!worldPosition.AsVec2.IsNonZero())
        {
          vec3_3 = new Vec3();
        }
        else
        {
          worldPosition = siegeLane2.DefenderOrigin;
          vec3_3 = worldPosition.GetGroundVec3();
        }
      }
      else
        vec3_3 = entityWithTag3.GlobalPosition;
      this.MidDefenderOrigin = vec3_3;
      GameEntity entityWithTag4 = current.Scene.FindEntityWithTag("middle_attacker_origin");
      Vec3 vec3_4;
      if (entityWithTag4 == null)
      {
        worldPosition = siegeLane2.AttackerOrigin;
        if (!worldPosition.AsVec2.IsNonZero())
        {
          vec3_4 = new Vec3();
        }
        else
        {
          worldPosition = siegeLane2.AttackerOrigin;
          vec3_4 = worldPosition.GetGroundVec3();
        }
      }
      else
        vec3_4 = entityWithTag4.GlobalPosition;
      this.MiddleAttackerOrigin = vec3_4;
      GameEntity entityWithTag5 = current.Scene.FindEntityWithTag("right_defender_origin");
      Vec3 vec3_5;
      if (entityWithTag5 == null)
      {
        worldPosition = siegeLane3.DefenderOrigin;
        if (!worldPosition.AsVec2.IsNonZero())
        {
          vec3_5 = new Vec3();
        }
        else
        {
          worldPosition = siegeLane3.DefenderOrigin;
          vec3_5 = worldPosition.GetGroundVec3();
        }
      }
      else
        vec3_5 = entityWithTag5.GlobalPosition;
      this.RightDefenderOrigin = vec3_5;
      GameEntity entityWithTag6 = current.Scene.FindEntityWithTag("right_attacker_origin");
      Vec3 vec3_6;
      if (entityWithTag6 == null)
      {
        worldPosition = siegeLane3.AttackerOrigin;
        if (!worldPosition.AsVec2.IsNonZero())
        {
          vec3_6 = new Vec3();
        }
        else
        {
          worldPosition = siegeLane3.AttackerOrigin;
          vec3_6 = worldPosition.GetGroundVec3();
        }
      }
      else
        vec3_6 = entityWithTag6.GlobalPosition;
      this.RightAttackerOrigin = vec3_6;
      Vec2 vec2 = this.MiddleAttackerOrigin.AsVec2 - this.LeftDefenderOrigin.AsVec2;
      this.LeftToMidDir = vec2.Normalized();
      vec2 = this.LeftAttackerOrigin.AsVec2 - this.MidDefenderOrigin.AsVec2;
      this.MidToLeftDir = vec2.Normalized();
      Vec3 vec3_7 = this.RightAttackerOrigin;
      Vec2 asVec2_1 = vec3_7.AsVec2;
      vec3_7 = this.MidDefenderOrigin;
      Vec2 asVec2_2 = vec3_7.AsVec2;
      vec2 = asVec2_1 - asVec2_2;
      this.MidToRightDir = vec2.Normalized();
      Vec2 asVec2_3 = this.MiddleAttackerOrigin.AsVec2;
      Vec3 vec3_8 = this.RightDefenderOrigin;
      Vec2 asVec2_4 = vec3_8.AsVec2;
      vec2 = asVec2_3 - asVec2_4;
      this.RightToMidDir = vec2.Normalized();
      this._leftRegionMemberCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.Left)), 5f);
      this._leftCloseAttackerCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.LeftClose)), 5f);
      this._middleRegionMemberCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.Middle)), 5f);
      this._middleCloseAttackerCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.MiddleClose)), 5f);
      this._rightRegionMemberCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.Right)), 5f);
      this._rightCloseAttackerCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.RightClose)), 5f);
      this._insideAttackerCount = new QueryData<int>((Func<int>) (() => this.LocateAttackers(SiegeQuerySystem.RegionEnum.Inside)), 5f);
      this._leftDefenderCount = new QueryData<int>((Func<int>) (() => mission.GetNearbyAllyAgentsCount(this.LeftDefenderOrigin.AsVec2, 10f, defenderTeam)), 5f);
      this._middleDefenderCount = new QueryData<int>((Func<int>) (() => mission.GetNearbyAllyAgentsCount(this.MidDefenderOrigin.AsVec2, 10f, defenderTeam)), 5f);
      this._rightDefenderCount = new QueryData<int>((Func<int>) (() => mission.GetNearbyAllyAgentsCount(this.RightDefenderOrigin.AsVec2, 10f, defenderTeam)), 5f);
      vec3_8 = this.MidDefenderOrigin;
      Vec2 asVec2_5 = vec3_8.AsVec2;
      vec3_8 = this.LeftDefenderOrigin;
      Vec2 asVec2_6 = vec3_8.AsVec2;
      vec2 = asVec2_5 - asVec2_6;
      this.DefenderLeftToDefenderMidDir = vec2.Normalized();
      vec3_8 = this.RightDefenderOrigin;
      Vec2 asVec2_7 = vec3_8.AsVec2;
      vec3_8 = this.MidDefenderOrigin;
      Vec2 asVec2_8 = vec3_8.AsVec2;
      vec2 = asVec2_7 - asVec2_8;
      this.DefenderMidToDefenderRightDir = vec2.Normalized();
      this.InitializeTelemetryScopeNames();
    }

    private int LocateAttackers(SiegeQuerySystem.RegionEnum region)
    {
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      int num5 = 0;
      int num6 = 0;
      int num7 = 0;
      foreach (Agent activeAgent in (List<Agent>) this._attackerTeam.ActiveAgents)
      {
        Vec3 vec3 = activeAgent.Position;
        Vec2 asVec2_1 = vec3.AsVec2;
        vec3 = this.LeftDefenderOrigin;
        Vec2 asVec2_2 = vec3.AsVec2;
        Vec2 vec2_1 = asVec2_1 - asVec2_2;
        vec3 = activeAgent.Position;
        Vec2 asVec2_3 = vec3.AsVec2;
        vec3 = this.MidDefenderOrigin;
        Vec2 asVec2_4 = vec3.AsVec2;
        Vec2 vec2_2 = asVec2_3 - asVec2_4;
        vec3 = activeAgent.Position;
        Vec2 asVec2_5 = vec3.AsVec2;
        vec3 = this.RightDefenderOrigin;
        Vec2 asVec2_6 = vec3.AsVec2;
        Vec2 vec2_3 = asVec2_5 - asVec2_6;
        if ((double) vec2_1.Normalize() < 15.0 && (double) Math.Abs(activeAgent.Position.z - this.LeftDefenderOrigin.z) <= 3.0)
        {
          ++num2;
          ++num1;
        }
        else
        {
          if ((double) vec2_1.DotProduct(this.LeftToMidDir) >= 0.0 && (double) vec2_1.DotProduct(this.LeftToMidDir.RightVec()) >= 0.0)
            ++num1;
          else if ((double) vec2_2.DotProduct(this.MidToLeftDir) >= 0.0 && (double) vec2_2.DotProduct(this.MidToLeftDir.RightVec()) >= 0.0)
            ++num1;
          if ((double) vec2_3.Normalize() < 15.0 && (double) Math.Abs(activeAgent.Position.z - this.RightDefenderOrigin.z) <= 3.0)
          {
            ++num6;
            ++num5;
          }
          else
          {
            if ((double) vec2_3.DotProduct(this.RightToMidDir) >= 0.0 && (double) vec2_3.DotProduct(this.RightToMidDir.LeftVec()) >= 0.0)
              ++num5;
            else if ((double) vec2_2.DotProduct(this.MidToRightDir) >= 0.0 && (double) vec2_2.DotProduct(this.MidToRightDir.LeftVec()) >= 0.0)
              ++num5;
            if ((double) vec2_2.Normalize() < 15.0 && (double) Math.Abs(activeAgent.Position.z - this.MidDefenderOrigin.z) <= 3.0)
            {
              ++num4;
              ++num3;
            }
            else
            {
              if (((double) vec2_2.DotProduct(this.MidToLeftDir) < 0.0 || (double) vec2_2.DotProduct(this.MidToLeftDir.RightVec()) < 0.0 || (double) vec2_1.DotProduct(this.LeftToMidDir) < 0.0 || (double) vec2_1.DotProduct(this.LeftToMidDir.RightVec()) < 0.0) && ((double) vec2_2.DotProduct(this.MidToRightDir) < 0.0 || (double) vec2_2.DotProduct(this.MidToRightDir.LeftVec()) < 0.0 || (double) vec2_3.DotProduct(this.RightToMidDir) < 0.0 || (double) vec2_3.DotProduct(this.RightToMidDir.LeftVec()) < 0.0))
                ++num3;
              if (activeAgent.GetCurrentNavigationFaceId() % 10 == 1)
                ++num7;
            }
          }
        }
      }
      float currentTime = Mission.Current.CurrentTime;
      this._leftRegionMemberCount.SetValue(num1, currentTime);
      this._leftCloseAttackerCount.SetValue(num2, currentTime);
      this._middleRegionMemberCount.SetValue(num3, currentTime);
      this._middleCloseAttackerCount.SetValue(num4, currentTime);
      this._rightRegionMemberCount.SetValue(num5, currentTime);
      this._rightCloseAttackerCount.SetValue(num6, currentTime);
      this._insideAttackerCount.SetValue(num7, currentTime);
      switch (region)
      {
        case SiegeQuerySystem.RegionEnum.Left:
          return num1;
        case SiegeQuerySystem.RegionEnum.LeftClose:
          return num2;
        case SiegeQuerySystem.RegionEnum.Middle:
          return num3;
        case SiegeQuerySystem.RegionEnum.MiddleClose:
          return num4;
        case SiegeQuerySystem.RegionEnum.Right:
          return num5;
        case SiegeQuerySystem.RegionEnum.RightClose:
          return num6;
        case SiegeQuerySystem.RegionEnum.Inside:
          return num7;
        default:
          return 0;
      }
    }

    public void Expire()
    {
      this._leftRegionMemberCount.Expire();
      this._leftCloseAttackerCount.Expire();
      this._middleRegionMemberCount.Expire();
      this._middleCloseAttackerCount.Expire();
      this._rightRegionMemberCount.Expire();
      this._rightCloseAttackerCount.Expire();
      this._insideAttackerCount.Expire();
      this._leftDefenderCount.Expire();
      this._middleDefenderCount.Expire();
      this._rightDefenderCount.Expire();
    }

    private void InitializeTelemetryScopeNames()
    {
    }

    public int DeterminePositionAssociatedSide(Vec3 position)
    {
      float num1 = position.AsVec2.DistanceSquared(this.LeftDefenderOrigin.AsVec2);
      float num2 = position.AsVec2.DistanceSquared(this.MidDefenderOrigin.AsVec2);
      float num3 = position.AsVec2.DistanceSquared(this.RightDefenderOrigin.AsVec2);
      FormationAI.BehaviorSide behaviorSide1 = (double) num1 >= (double) num2 || (double) num1 >= (double) num3 ? ((double) num3 >= (double) num2 ? FormationAI.BehaviorSide.Middle : FormationAI.BehaviorSide.Right) : FormationAI.BehaviorSide.Left;
      FormationAI.BehaviorSide behaviorSide2 = FormationAI.BehaviorSide.BehaviorSideNotSet;
      switch (behaviorSide1)
      {
        case FormationAI.BehaviorSide.Left:
          if ((double) (position.AsVec2 - this.LeftDefenderOrigin.AsVec2).Normalized().DotProduct(this.DefenderLeftToDefenderMidDir) > 0.0)
          {
            behaviorSide2 = FormationAI.BehaviorSide.Middle;
            break;
          }
          break;
        case FormationAI.BehaviorSide.Middle:
          behaviorSide2 = (double) (position.AsVec2 - this.MidDefenderOrigin.AsVec2).Normalized().DotProduct(this.DefenderMidToDefenderRightDir) <= 0.0 ? FormationAI.BehaviorSide.Left : FormationAI.BehaviorSide.Right;
          break;
        case FormationAI.BehaviorSide.Right:
          if ((double) (position.AsVec2 - this.RightDefenderOrigin.AsVec2).Normalized().DotProduct(this.DefenderMidToDefenderRightDir) < 0.0)
          {
            behaviorSide2 = FormationAI.BehaviorSide.Middle;
            break;
          }
          break;
      }
      int positionAssociatedSide = 1 << (int) (behaviorSide1 & (FormationAI.BehaviorSide) 31);
      if (behaviorSide2 != FormationAI.BehaviorSide.BehaviorSideNotSet)
        positionAssociatedSide |= 1 << (int) (behaviorSide2 & (FormationAI.BehaviorSide) 31);
      return positionAssociatedSide;
    }

    public static bool AreSidesRelated(FormationAI.BehaviorSide side, int connectedSides)
    {
      return (1 << (int) (side & (FormationAI.BehaviorSide) 31) & connectedSides) != 0;
    }

    public static int SideDistance(int connectedSides, int side)
    {
      for (; connectedSides != 0 && side != 0; side >>= 1)
        connectedSides >>= 1;
      int num1 = connectedSides != 0 ? connectedSides : side;
      int num2 = 0;
      for (; num1 > 0; num1 >>= 1)
      {
        ++num2;
        if ((num1 & 1) == 1)
          break;
      }
      return num2;
    }

    public Vec3 LeftDefenderOrigin { get; }

    public Vec3 MidDefenderOrigin { get; }

    public Vec3 RightDefenderOrigin { get; }

    public Vec3 LeftAttackerOrigin { get; }

    public Vec3 MiddleAttackerOrigin { get; }

    public Vec3 RightAttackerOrigin { get; }

    public Vec2 LeftToMidDir { get; }

    public Vec2 MidToLeftDir { get; }

    public Vec2 MidToRightDir { get; }

    public Vec2 RightToMidDir { get; }

    private enum RegionEnum
    {
      Left,
      LeftClose,
      Middle,
      MiddleClose,
      Right,
      RightClose,
      Inside,
    }
  }
}
