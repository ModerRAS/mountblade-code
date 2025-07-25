// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ColumnFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ColumnFormation : IFormationArrangement
  {
    public static readonly int ArrangementAspectRatio = 5;
    private readonly IFormation owner;
    private IFormationUnit _vanguard;
    private MBList2D<IFormationUnit> _units2D;
    private MBList2D<IFormationUnit> _units2DWorkspace;
    private MBList<IFormationUnit> _allUnits;
    private bool isExpandingFromRightSide = true;
    private bool IsMiddleFrontUnitPositionReserved;
    private bool _isMiddleFrontUnitPositionUsedByVanguardInFormation;

    public IFormationUnit Vanguard
    {
      get => this._vanguard;
      private set => this.SetVanguard(value);
    }

    public int ColumnCount
    {
      get => this.FileCount;
      set => this.SetColumnCount(value);
    }

    protected int FileCount => this._units2D.Count1;

    public int RankCount => this._units2D.Count2;

    private int VanguardFileIndex
    {
      get
      {
        return this.FileCount % 2 == 0 && this.isExpandingFromRightSide ? this.FileCount / 2 - 1 : this.FileCount / 2;
      }
    }

    protected float Distance => (float) ((double) this.owner.Distance * 1.0 + 0.5);

    protected float Interval => this.owner.Interval * 1.5f;

    public ColumnFormation(IFormation ownerFormation, IFormationUnit vanguard = null, int columnCount = 1)
    {
      this.owner = ownerFormation;
      this._units2D = new MBList2D<IFormationUnit>(columnCount, 1);
      this._units2DWorkspace = new MBList2D<IFormationUnit>(columnCount, 1);
      this.ReconstructUnitsFromUnits2D();
      this._vanguard = vanguard;
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new ColumnFormation(formation, this.Vanguard, this.ColumnCount);
    }

    public void DeepCopyFrom(IFormationArrangement arrangement)
    {
    }

    public float Width
    {
      get => this.FlankWidth;
      set => this.FlankWidth = value;
    }

    public float FlankWidth
    {
      get
      {
        return (float) (this.FileCount - 1) * (this.owner.Interval + this.owner.UnitDiameter) + this.owner.UnitDiameter;
      }
      set
      {
        this.SetColumnCount(MathF.Max(MathF.Max(0, (int) (((double) value - (double) this.owner.UnitDiameter) / ((double) this.owner.Interval + (double) this.owner.UnitDiameter) + 9.9999997473787516E-06)) + 1, 1));
        Action onWidthChanged = this.OnWidthChanged;
        if (onWidthChanged == null)
          return;
        onWidthChanged();
      }
    }

    public float Depth => this.RankDepth;

    public float RankDepth
    {
      get
      {
        return (float) (this.RankCount - 1) * (this.Distance + this.owner.UnitDiameter) + this.owner.UnitDiameter;
      }
    }

    public float MinimumWidth => this.MinimumFlankWidth;

    public IFormationUnit GetPlayerUnit()
    {
      return this._allUnits.FirstOrDefault<IFormationUnit>((Func<IFormationUnit, bool>) (unit => unit.IsPlayerUnit));
    }

    public float MaximumWidth
    {
      get
      {
        return (float) (this.UnitCount - 1) * (this.owner.UnitDiameter + this.owner.Interval) + this.owner.UnitDiameter;
      }
    }

    public float MinimumFlankWidth
    {
      get
      {
        return (float) (MathF.Max(1, MathF.Ceiling(MathF.Sqrt((float) (this.UnitCount / ColumnFormation.ArrangementAspectRatio)))) - 1) * (this.owner.UnitDiameter + this.owner.Interval) + this.owner.UnitDiameter;
      }
    }

    public MBReadOnlyList<IFormationUnit> GetAllUnits()
    {
      return (MBReadOnlyList<IFormationUnit>) this._allUnits;
    }

    public MBList<IFormationUnit> GetUnpositionedUnits() => (MBList<IFormationUnit>) null;

    public bool? IsLoose => new bool?(false);

    private bool IsUnitPositionAvailable(int fileIndex, int rankIndex)
    {
      if (this.IsMiddleFrontUnitPositionReserved)
      {
        (int, int) frontUnitPosition = this.GetMiddleFrontUnitPosition();
        if (fileIndex == frontUnitPosition.Item1 && rankIndex == frontUnitPosition.Item2)
          return false;
      }
      return true;
    }

    private bool GetNextVacancy(out int fileIndex, out int rankIndex)
    {
      if (this.RankCount == 0)
      {
        fileIndex = -1;
        rankIndex = -1;
        return false;
      }
      rankIndex = this.RankCount - 1;
      for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
      {
        int offsetFromColumnIndex = ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide ^ this.ColumnCount % 2 == 1);
        fileIndex = this.VanguardFileIndex + offsetFromColumnIndex;
        if (this._units2D[fileIndex, rankIndex] == null && this.IsUnitPositionAvailable(fileIndex, rankIndex))
          return true;
      }
      fileIndex = -1;
      rankIndex = -1;
      return false;
    }

    private IFormationUnit GetLastUnit()
    {
      if (this.RankCount == 0)
        return (IFormationUnit) null;
      int index2 = this.RankCount - 1;
      for (int columnIndex = this.ColumnCount - 1; columnIndex >= 0; --columnIndex)
      {
        IFormationUnit lastUnit = this._units2D[this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide), index2];
        if (lastUnit != null)
          return lastUnit;
      }
      return (IFormationUnit) null;
    }

    private void Deepen() => ColumnFormation.Deepen(this);

    private void ReconstructUnitsFromUnits2D()
    {
      if (this._allUnits == null)
        this._allUnits = new MBList<IFormationUnit>();
      this._allUnits.Clear();
      for (int index1 = 0; index1 < this._units2D.Count1; ++index1)
      {
        for (int index2 = 0; index2 < this._units2D.Count2; ++index2)
        {
          if (this._units2D[index1, index2] != null)
            this._allUnits.Add(this._units2D[index1, index2]);
        }
      }
    }

    private static void Deepen(ColumnFormation formation)
    {
      formation._units2DWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount + 1);
      for (int index = 0; index < formation.FileCount; ++index)
        formation._units2D.CopyRowTo(index, 0, formation._units2DWorkspace, index, 0, formation.RankCount);
      MBList2D<IFormationUnit> units2D = formation._units2D;
      formation._units2D = formation._units2DWorkspace;
      formation._units2DWorkspace = units2D;
      formation.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = formation.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    private void Shorten() => ColumnFormation.Shorten(this);

    private static void Shorten(ColumnFormation formation)
    {
      formation._units2DWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount - 1);
      for (int index = 0; index < formation.FileCount; ++index)
        formation._units2D.CopyRowTo(index, 0, formation._units2DWorkspace, index, 0, formation.RankCount - 1);
      MBList2D<IFormationUnit> units2D = formation._units2D;
      formation._units2D = formation._units2DWorkspace;
      formation._units2DWorkspace = units2D;
      formation.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = formation.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public bool AddUnit(IFormationUnit unit)
    {
      int num1 = 0;
      bool flag = false;
      while (!flag && num1 < 100)
      {
        ++num1;
        if (num1 > 10)
          TaleWorlds.Library.Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\ColumnFormation.cs", nameof (AddUnit), 371);
        int fileIndex;
        int rankIndex;
        if (this.GetNextVacancy(out fileIndex, out rankIndex))
        {
          unit.FormationFileIndex = fileIndex;
          unit.FormationRankIndex = rankIndex;
          this._units2D[fileIndex, rankIndex] = unit;
          this.ReconstructUnitsFromUnits2D();
          flag = true;
        }
        else
          this.Deepen();
      }
      int num2 = flag ? 1 : 0;
      if (flag)
      {
        int columnOffset;
        IFormationUnit unitToFollow = this.GetUnitToFollow(unit, out columnOffset);
        this.SetUnitToFollow(unit, unitToFollow, columnOffset);
        Action onShapeChanged = this.OnShapeChanged;
        if (onShapeChanged != null)
          onShapeChanged();
      }
      return flag;
    }

    private IFormationUnit TryGetUnit(int fileIndex, int rankIndex)
    {
      return fileIndex >= 0 && fileIndex < this.FileCount && rankIndex >= 0 && rankIndex < this.RankCount ? this._units2D[fileIndex, rankIndex] : (IFormationUnit) null;
    }

    private void AdjustFollowDataOfUnitPosition(int fileIndex, int rankIndex)
    {
      IFormationUnit unit1 = this._units2D[fileIndex, rankIndex];
      if (fileIndex == this.VanguardFileIndex)
      {
        if (unit1 != null)
        {
          IFormationUnit unit2 = this.TryGetUnit(fileIndex, rankIndex - 1);
          this.SetUnitToFollow(unit1, unit2 ?? this.Vanguard);
        }
        for (int columnIndex = 1; columnIndex < this.ColumnCount; ++columnIndex)
        {
          int offsetFromColumnIndex = ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide);
          IFormationUnit unit3 = this._units2D[fileIndex + offsetFromColumnIndex, rankIndex];
          if (unit3 != null)
            this.SetUnitToFollow(unit3, unit1 ?? this.Vanguard, offsetFromColumnIndex);
        }
        IFormationUnit unit4 = this.TryGetUnit(fileIndex, rankIndex + 1);
        if (unit4 == null)
          return;
        this.SetUnitToFollow(unit4, unit1 ?? this.Vanguard);
      }
      else
      {
        if (unit1 == null)
          return;
        IFormationUnit formationUnit = this._units2D[this.VanguardFileIndex, rankIndex];
        int offsetFromColumnIndex = ColumnFormation.GetColumnOffsetFromColumnIndex(fileIndex, this.isExpandingFromRightSide);
        this.SetUnitToFollow(unit1, formationUnit ?? this.Vanguard, offsetFromColumnIndex);
      }
    }

    private void ShiftUnitsForward(int fileIndex, int rankIndex)
    {
      while (true)
      {
        IFormationUnit unit = this.TryGetUnit(fileIndex, rankIndex + 1);
        if (unit != null)
        {
          --unit.FormationRankIndex;
          this._units2D[fileIndex, rankIndex] = unit;
          this._units2D[fileIndex, rankIndex + 1] = (IFormationUnit) null;
          this.ReconstructUnitsFromUnits2D();
          this.AdjustFollowDataOfUnitPosition(fileIndex, rankIndex);
          ++rankIndex;
        }
        else
          break;
      }
      int num = 0;
      if (rankIndex == this.RankCount - 1)
      {
        for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
        {
          if (this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide) == fileIndex)
            num = columnIndex + 1;
        }
      }
      IFormationUnit formationUnit = (IFormationUnit) null;
      for (int columnIndex = this.ColumnCount - 1; columnIndex >= num; --columnIndex)
      {
        formationUnit = this._units2D[this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide), this.RankCount - 1];
        if (formationUnit != null)
          break;
      }
      if (formationUnit != null)
      {
        this._units2D[formationUnit.FormationFileIndex, formationUnit.FormationRankIndex] = (IFormationUnit) null;
        formationUnit.FormationFileIndex = fileIndex;
        formationUnit.FormationRankIndex = rankIndex;
        this._units2D[fileIndex, rankIndex] = formationUnit;
        this.ReconstructUnitsFromUnits2D();
        this.AdjustFollowDataOfUnitPosition(fileIndex, rankIndex);
      }
      if (this.IsLastRankEmpty())
        this.Shorten();
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    private void ShiftUnitsBackwardForMakingRoomForVanguard(int fileIndex, int rankIndex)
    {
      if (this.RankCount == 1)
      {
        bool flag = false;
        int index1 = -1;
        for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
        {
          int offsetFromColumnIndex = ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide);
          if (this._units2D[this.VanguardFileIndex + offsetFromColumnIndex, 0] == null)
          {
            flag = true;
            index1 = this.VanguardFileIndex + offsetFromColumnIndex;
            break;
          }
        }
        if (flag)
        {
          IFormationUnit formationUnit = this._units2D[fileIndex, rankIndex];
          this._units2D[fileIndex, rankIndex] = (IFormationUnit) null;
          this._units2D[index1, 0] = formationUnit;
          this.ReconstructUnitsFromUnits2D();
          formationUnit.FormationFileIndex = index1;
          formationUnit.FormationRankIndex = 0;
        }
        else
        {
          ColumnFormation.Deepen(this);
          IFormationUnit formationUnit = this._units2D[fileIndex, rankIndex];
          this._units2D[fileIndex, rankIndex] = (IFormationUnit) null;
          this._units2D[fileIndex, rankIndex + 1] = formationUnit;
          this.ReconstructUnitsFromUnits2D();
          ++formationUnit.FormationRankIndex;
        }
      }
      else
      {
        int num = rankIndex;
        IFormationUnit unit = (IFormationUnit) null;
        for (rankIndex = this.RankCount - 1; rankIndex >= num; --rankIndex)
        {
          IFormationUnit formationUnit = this._units2D[fileIndex, rankIndex];
          this.TryGetUnit(fileIndex, rankIndex + 1);
          this._units2D[fileIndex, rankIndex] = (IFormationUnit) null;
          if (rankIndex + 1 < this.RankCount)
          {
            ++formationUnit.FormationRankIndex;
            this._units2D[fileIndex, rankIndex + 1] = formationUnit;
          }
          else
          {
            unit = formationUnit;
            if (unit != null)
            {
              unit.FormationFileIndex = -1;
              unit.FormationRankIndex = -1;
            }
          }
          this.ReconstructUnitsFromUnits2D();
        }
        for (rankIndex = this.RankCount - 1; rankIndex >= num; --rankIndex)
          this.AdjustFollowDataOfUnitPosition(fileIndex, rankIndex);
        if (unit != null)
          this.AddUnit(unit);
        Action onShapeChanged = this.OnShapeChanged;
        if (onShapeChanged == null)
          return;
        onShapeChanged();
      }
    }

    private bool IsLastRankEmpty()
    {
      if (this.RankCount == 0)
        return false;
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, this.RankCount - 1] != null)
          return false;
      }
      return true;
    }

    public void RemoveUnit(IFormationUnit unit)
    {
      int formationFileIndex = unit.FormationFileIndex;
      int formationRankIndex = unit.FormationRankIndex;
      if (GameNetwork.IsServer)
        MBDebug.Print("Removing unit at " + (object) formationFileIndex + " " + (object) formationRankIndex + " from column arrangement\nFileCount&RankCount: " + (object) this.FileCount + " " + (object) this.RankCount);
      this._units2D[unit.FormationFileIndex, unit.FormationRankIndex] = (IFormationUnit) null;
      this.ReconstructUnitsFromUnits2D();
      this.ShiftUnitsForward(unit.FormationFileIndex, unit.FormationRankIndex);
      if (this.IsLastRankEmpty())
        this.Shorten();
      unit.FormationFileIndex = -1;
      unit.FormationRankIndex = -1;
      this.SetUnitToFollow(unit, (IFormationUnit) null);
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged != null)
        onShapeChanged();
      if (this.Vanguard != unit || ((Agent) unit).IsActive())
        return;
      this._vanguard = (IFormationUnit) null;
      if (this.FileCount <= 0 || this.RankCount <= 0)
        return;
      this.AdjustFollowDataOfUnitPosition(formationFileIndex, formationRankIndex);
    }

    public IFormationUnit GetUnit(int fileIndex, int rankIndex)
    {
      return this._units2D[fileIndex, rankIndex];
    }

    public void OnBatchRemoveStart()
    {
    }

    public void OnBatchRemoveEnd()
    {
    }

    [Conditional("DEBUG")]
    private void AssertUnitPositions()
    {
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        for (int index2 = 0; index2 < this.RankCount; ++index2)
        {
          IFormationUnit formationUnit = this._units2D[index1, index2];
        }
      }
    }

    [Conditional("DEBUG")]
    private void AssertUnit(IFormationUnit unit, bool isAssertingFollowed = true)
    {
      if (unit == null || !isAssertingFollowed)
        return;
      this.GetUnitToFollow(unit, out int _);
    }

    private static int GetColumnOffsetFromColumnIndex(
      int columnIndex,
      bool isExpandingFromRightSide)
    {
      return !isExpandingFromRightSide ? (columnIndex + 1) / 2 * (columnIndex % 2 == 0 ? 1 : -1) : (columnIndex + 1) / 2 * (columnIndex % 2 == 0 ? -1 : 1);
    }

    private IFormationUnit GetUnitToFollow(IFormationUnit unit, out int columnOffset)
    {
      IFormationUnit vanguard;
      if (unit.FormationFileIndex == this.VanguardFileIndex)
      {
        columnOffset = 0;
        vanguard = unit.FormationRankIndex <= 0 ? (IFormationUnit) null : this._units2D[unit.FormationFileIndex, unit.FormationRankIndex - 1];
      }
      else
      {
        columnOffset = unit.FormationFileIndex - this.VanguardFileIndex;
        vanguard = this._units2D[this.VanguardFileIndex, unit.FormationRankIndex];
      }
      if (vanguard == null)
        vanguard = this.Vanguard;
      return vanguard;
    }

    private IEnumerable<(int, int)> GetOrderedUnitPositionIndices()
    {
      for (int rankIndex = 0; rankIndex < this.RankCount; ++rankIndex)
      {
        for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
        {
          int fileIndex = this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide);
          if (this.IsUnitPositionAvailable(fileIndex, rankIndex))
            yield return (fileIndex, rankIndex);
        }
      }
    }

    private Vec2 GetLocalPositionOfUnit(int fileIndex, int rankIndex)
    {
      float num = (float) (this.FileCount - 1) * (this.owner.Interval + this.owner.UnitDiameter);
      return new Vec2((float) ((double) fileIndex * ((double) this.owner.Interval + (double) this.owner.UnitDiameter) - (double) num / 2.0), (float) -rankIndex * (this.owner.Distance + this.owner.UnitDiameter));
    }

    private Vec2 GetLocalDirectionOfUnit(int fileIndex, int rankIndex) => Vec2.Forward;

    private WorldPosition? GetWorldPositionOfUnit(int fileIndex, int rankIndex)
    {
      return new WorldPosition?();
    }

    public Vec2? GetLocalPositionOfUnitOrDefault(int unitIndex)
    {
      (int, int) tuple = this.GetOrderedUnitPositionIndices().Where<(int, int)>((Func<(int, int), bool>) (i => this.IsUnitPositionAvailable(i.Item1, i.Item2))).ElementAtOrValue<(int, int)>(unitIndex, (-1, -1));
      return tuple.Item1 == -1 || tuple.Item2 == -1 ? new Vec2?() : new Vec2?(this.GetLocalPositionOfUnit(tuple.Item1, tuple.Item2));
    }

    public Vec2? GetLocalDirectionOfUnitOrDefault(int unitIndex)
    {
      (int, int) tuple = this.GetOrderedUnitPositionIndices().Where<(int, int)>((Func<(int, int), bool>) (i => this.IsUnitPositionAvailable(i.Item1, i.Item2))).ElementAtOrValue<(int, int)>(unitIndex, (-1, -1));
      return tuple.Item1 == -1 || tuple.Item2 == -1 ? new Vec2?() : new Vec2?(this.GetLocalDirectionOfUnit(tuple.Item1, tuple.Item2));
    }

    public WorldPosition? GetWorldPositionOfUnitOrDefault(int unitIndex)
    {
      (int, int) tuple = this.GetOrderedUnitPositionIndices().Where<(int, int)>((Func<(int, int), bool>) (i => this.IsUnitPositionAvailable(i.Item1, i.Item2))).ElementAtOrValue<(int, int)>(unitIndex, (-1, -1));
      return tuple.Item1 == -1 || tuple.Item2 == -1 ? new WorldPosition?() : this.GetWorldPositionOfUnit(tuple.Item1, tuple.Item2);
    }

    public Vec2? GetLocalPositionOfUnitOrDefault(IFormationUnit unit)
    {
      return new Vec2?(this.GetLocalPositionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex));
    }

    public Vec2? GetLocalPositionOfUnitOrDefaultWithAdjustment(
      IFormationUnit unit,
      float distanceBetweenAgentsAdjustment)
    {
      return new Vec2?(this.GetLocalPositionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex));
    }

    public WorldPosition? GetWorldPositionOfUnitOrDefault(IFormationUnit unit)
    {
      return this.GetWorldPositionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex);
    }

    public Vec2? GetLocalDirectionOfUnitOrDefault(IFormationUnit unit)
    {
      return new Vec2?(this.GetLocalDirectionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex));
    }

    public List<IFormationUnit> GetUnitsToPop(int count)
    {
      List<IFormationUnit> unitsToPop = new List<IFormationUnit>();
      for (int index2 = this.RankCount - 1; index2 >= 0; --index2)
      {
        for (int columnIndex = this.ColumnCount - 1; columnIndex >= 0; --columnIndex)
        {
          IFormationUnit formationUnit = this._units2D[this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide), index2];
          if (formationUnit != null)
          {
            unitsToPop.Add(formationUnit);
            --count;
            if (count == 0)
              return unitsToPop;
          }
        }
      }
      return unitsToPop;
    }

    public List<IFormationUnit> GetUnitsToPop(int count, Vec3 targetPosition)
    {
      return this.GetUnitsToPop(count);
    }

    public IEnumerable<IFormationUnit> GetUnitsToPopWithCondition(
      int count,
      Func<IFormationUnit, bool> currentCondition)
    {
      for (int rankIndex = this.RankCount - 1; rankIndex >= 0; --rankIndex)
      {
        for (int columnIndex = this.ColumnCount - 1; columnIndex >= 0; --columnIndex)
        {
          IFormationUnit formationUnit = this._units2D[this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide), rankIndex];
          if (formationUnit != null && currentCondition(formationUnit))
          {
            yield return formationUnit;
            --count;
            if (count == 0)
              yield break;
          }
        }
      }
    }

    public void SwitchUnitLocations(IFormationUnit firstUnit, IFormationUnit secondUnit)
    {
      this.SwitchUnitLocationsAux(firstUnit, secondUnit);
      this.AdjustFollowDataOfUnitPosition(firstUnit.FormationFileIndex, firstUnit.FormationRankIndex);
      this.AdjustFollowDataOfUnitPosition(secondUnit.FormationFileIndex, secondUnit.FormationRankIndex);
    }

    private void SwitchUnitLocationsAux(IFormationUnit firstUnit, IFormationUnit secondUnit)
    {
      int formationFileIndex1 = firstUnit.FormationFileIndex;
      int formationRankIndex1 = firstUnit.FormationRankIndex;
      int formationFileIndex2 = secondUnit.FormationFileIndex;
      int formationRankIndex2 = secondUnit.FormationRankIndex;
      this._units2D[formationFileIndex1, formationRankIndex1] = secondUnit;
      this._units2D[formationFileIndex2, formationRankIndex2] = firstUnit;
      this.ReconstructUnitsFromUnits2D();
      firstUnit.FormationFileIndex = formationFileIndex2;
      firstUnit.FormationRankIndex = formationRankIndex2;
      secondUnit.FormationFileIndex = formationFileIndex1;
      secondUnit.FormationRankIndex = formationRankIndex1;
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public void SwitchUnitLocationsWithUnpositionedUnit(
      IFormationUnit firstUnit,
      IFormationUnit secondUnit)
    {
      TaleWorlds.Library.Debug.FailedAssert("Column formation should NOT have an unpositioned unit", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\ColumnFormation.cs", nameof (SwitchUnitLocationsWithUnpositionedUnit), 1169);
    }

    public void SwitchUnitLocationsWithBackMostUnit(IFormationUnit unit)
    {
      if (this.Vanguard != null && this.Vanguard is Agent vanguard && vanguard == unit)
        return;
      IFormationUnit lastUnit = this.GetLastUnit();
      if (lastUnit == null || unit == null || unit == lastUnit)
        return;
      this.SwitchUnitLocations(unit, lastUnit);
    }

    public float GetUnitsDistanceToFrontLine(IFormationUnit unit) => -1f;

    public Vec2? GetLocalDirectionOfRelativeFormationLocation(IFormationUnit unit) => new Vec2?();

    public Vec2? GetLocalWallDirectionOfRelativeFormationLocation(IFormationUnit unit)
    {
      return new Vec2?();
    }

    public IEnumerable<Vec2> GetUnavailableUnitPositions()
    {
      yield break;
    }

    public float GetOccupationWidth(int unitCount) => this.FlankWidth;

    public Vec2? CreateNewPosition(int unitIndex)
    {
      int newCount2 = MathF.Ceiling((float) unitIndex * 1f / (float) this.ColumnCount);
      if (newCount2 > this.RankCount)
      {
        this._units2D.ResetWithNewCount(this.ColumnCount, newCount2);
        this.ReconstructUnitsFromUnits2D();
      }
      Vec2? positionOfUnitOrDefault = this.GetLocalPositionOfUnitOrDefault(unitIndex);
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return positionOfUnitOrDefault;
      onShapeChanged();
      return positionOfUnitOrDefault;
    }

    public void InvalidateCacheOfUnitAux(Vec2 roundedLocalPosition)
    {
    }

    public void BeforeFormationFrameChange()
    {
    }

    public void OnFormationFrameChanged()
    {
    }

    private Vec2 CalculateArrangementOrientation()
    {
      IFormationUnit formationUnit = this.Vanguard ?? this._units2D[this.GetMiddleFrontUnitPosition().Item1, this.GetMiddleFrontUnitPosition().Item2];
      if (formationUnit is Agent && this.owner is Formation)
        return ((formationUnit as Agent).Position.AsVec2 - (this.owner as Formation).QuerySystem.MedianPosition.AsVec2).Normalized();
      TaleWorlds.Library.Debug.FailedAssert("Unexpected case", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\ColumnFormation.cs", nameof (CalculateArrangementOrientation), 1254);
      return this.GetLocalDirectionOfUnit(formationUnit.FormationFileIndex, formationUnit.FormationRankIndex);
    }

    public void OnUnitLostMount(IFormationUnit unit)
    {
      this.RemoveUnit(unit);
      this.AddUnit(unit);
    }

    public bool IsTurnBackwardsNecessary(
      Vec2 previousPosition,
      WorldPosition? newPosition,
      Vec2 previousDirection,
      bool hasNewDirection,
      Vec2? newDirection)
    {
      if (!newPosition.HasValue || this.UnitCount <= 0 || this.RankCount <= 0 || (double) (newPosition.Value.AsVec2 - previousPosition).LengthSquared < (double) this.RankDepth * (double) this.RankDepth)
        return false;
      double rotationInRadians1 = (double) this.CalculateArrangementOrientation().RotationInRadians;
      Vec2 vec2 = newPosition.Value.AsVec2 - previousPosition;
      vec2 = vec2.Normalized();
      double rotationInRadians2 = (double) vec2.RotationInRadians;
      return (double) MathF.Abs(MBMath.GetSmallestDifferenceBetweenTwoAngles((float) rotationInRadians1, (float) rotationInRadians2)) >= 2.3561944961547852;
    }

    public void TurnBackwards()
    {
      if (this.IsMiddleFrontUnitPositionReserved || this._isMiddleFrontUnitPositionUsedByVanguardInFormation || this.RankCount <= 1)
        return;
      bool positionReserved = this.IsMiddleFrontUnitPositionReserved;
      IFormationUnit vanguard = this._vanguard;
      if (positionReserved)
        this.ReleaseMiddleFrontUnitPosition();
      int rankCount = this.RankCount;
      for (int index2_1 = 0; index2_1 < rankCount / 2; ++index2_1)
      {
        for (int index1_1 = 0; index1_1 < this.FileCount; ++index1_1)
        {
          IFormationUnit firstUnit = this._units2D[index1_1, index2_1];
          int index2_2 = rankCount - index2_1 - 1;
          int index1_2 = this.FileCount - index1_1 - 1;
          IFormationUnit secondUnit = this._units2D[index1_2, index2_2];
          if (secondUnit == null)
          {
            this._units2D[index1_2, index2_2] = firstUnit;
            this._units2D[index1_1, index2_1] = (IFormationUnit) null;
            if (firstUnit != null)
            {
              firstUnit.FormationFileIndex = index1_2;
              firstUnit.FormationRankIndex = index2_2;
            }
          }
          else if (firstUnit != null && firstUnit != secondUnit)
            this.SwitchUnitLocationsAux(firstUnit, secondUnit);
        }
      }
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, 0] == null && this._units2D[index1, 1] != null)
        {
          for (int index2 = 1; index2 < rankCount; ++index2)
          {
            IFormationUnit formationUnit = this._units2D[index1, index2];
            --formationUnit.FormationRankIndex;
            this._units2D[index1, index2 - 1] = formationUnit;
            this._units2D[index1, index2] = (IFormationUnit) null;
          }
        }
      }
      this.isExpandingFromRightSide = !this.isExpandingFromRightSide;
      this.ReconstructUnitsFromUnits2D();
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this.GetAllUnits())
      {
        int columnOffset;
        IFormationUnit unitToFollow = this.GetUnitToFollow(allUnit, out columnOffset);
        this.SetUnitToFollow(allUnit, unitToFollow, columnOffset);
      }
      Action onShapeChanged1 = this.OnShapeChanged;
      if (onShapeChanged1 != null)
        onShapeChanged1();
      if (positionReserved)
        this.ReserveMiddleFrontUnitPosition(vanguard);
      Action onShapeChanged2 = this.OnShapeChanged;
      if (onShapeChanged2 == null)
        return;
      onShapeChanged2();
    }

    public void OnFormationDispersed()
    {
      foreach (IFormationUnit unit in this.GetAllUnits().ToArray())
        this.SwitchUnitIfLeftBehind(unit);
    }

    public void Reset()
    {
      this._units2D.ResetWithNewCount(this.ColumnCount, 1);
      this.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public event Action OnWidthChanged;

    public event Action OnShapeChanged;

    public virtual void RearrangeFrom(IFormationArrangement arrangement)
    {
      if (!(arrangement is LineFormation))
        return;
      this.FlankWidth = (float) MathF.Max(0, MathF.Ceiling(MathF.Sqrt((float) (arrangement.UnitCount / 5))) - 1) * (this.owner.UnitDiameter + this.owner.Interval) + this.owner.UnitDiameter;
    }

    public virtual void RearrangeTo(IFormationArrangement arrangement)
    {
    }

    public virtual void RearrangeTransferUnits(IFormationArrangement arrangement)
    {
      foreach ((int, int) tuple in this.GetOrderedUnitPositionIndices().ToList<(int, int)>())
      {
        IFormationUnit unit = this._units2D[tuple.Item1, tuple.Item2];
        if (unit != null)
        {
          unit.FormationFileIndex = -1;
          unit.FormationRankIndex = -1;
          this.SetUnitToFollow(unit, (IFormationUnit) null);
          arrangement.AddUnit(unit);
        }
      }
    }

    private void SetVanguard(IFormationUnit vanguard)
    {
      if (this.Vanguard == null && vanguard == null)
        return;
      bool flag1 = false;
      bool flag2 = false;
      if (this.Vanguard == null && vanguard != null)
        flag2 = true;
      else if (this.Vanguard != null && vanguard == null)
        flag1 = true;
      (int, int) frontUnitPosition = this.GetMiddleFrontUnitPosition();
      if (flag1)
      {
        if ((this.Vanguard is Agent vanguard1 ? vanguard1.Formation : (Formation) null) == this.owner)
        {
          this.RemoveUnit(this.Vanguard);
          this.AddUnit(this.Vanguard);
        }
        else if (this.RankCount > 0)
          this.ShiftUnitsForward(frontUnitPosition.Item1, frontUnitPosition.Item2);
      }
      else if (flag2)
      {
        if ((vanguard is Agent agent ? agent.Formation : (Formation) null) == this.owner)
        {
          this.RemoveUnit(vanguard);
          this.ShiftUnitsBackwardForMakingRoomForVanguard(frontUnitPosition.Item1, frontUnitPosition.Item2);
          if (this.RankCount > 0)
          {
            this._units2D[frontUnitPosition.Item1, frontUnitPosition.Item2] = vanguard;
            this.ReconstructUnitsFromUnits2D();
            vanguard.FormationFileIndex = frontUnitPosition.Item1;
            vanguard.FormationRankIndex = frontUnitPosition.Item2;
            if (this.RankCount == 2)
            {
              this.AdjustFollowDataOfUnitPosition(frontUnitPosition.Item1, frontUnitPosition.Item2);
              this.AdjustFollowDataOfUnitPosition(frontUnitPosition.Item1, frontUnitPosition.Item2 + 1);
              Action onShapeChanged = this.OnShapeChanged;
              if (onShapeChanged != null)
                onShapeChanged();
            }
          }
          else
            this.AddUnit(vanguard);
        }
        else
          this.ShiftUnitsBackwardForMakingRoomForVanguard(frontUnitPosition.Item1, frontUnitPosition.Item2);
      }
      this._vanguard = vanguard;
      if (this.RankCount <= 0)
        return;
      this.AdjustFollowDataOfUnitPosition(frontUnitPosition.Item1, frontUnitPosition.Item2);
    }

    public int UnitCount => this.GetAllUnits().Count;

    public int PositionedUnitCount => this.UnitCount;

    protected int GetUnitCountWithOverride()
    {
      return !this.owner.OverridenUnitCount.HasValue ? this.UnitCount : this.owner.OverridenUnitCount.Value;
    }

    private void SetColumnCount(int columnCount)
    {
      if (this.ColumnCount == columnCount)
        return;
      IFormationUnit[] array = this.GetAllUnits().ToArray();
      this._units2D.ResetWithNewCount(columnCount, 1);
      this.ReconstructUnitsFromUnits2D();
      foreach (IFormationUnit unit in array)
      {
        unit.FormationFileIndex = -1;
        unit.FormationRankIndex = -1;
        this.AddUnit(unit);
      }
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public void FormFromWidth(float width) => this.ColumnCount = MathF.Ceiling(width);

    public IFormationUnit GetNeighborUnitOfLeftSide(IFormationUnit unit)
    {
      int formationRankIndex = unit.FormationRankIndex;
      for (int index1 = unit.FormationFileIndex - 1; index1 >= 0; --index1)
      {
        if (this._units2D[index1, formationRankIndex] != null)
          return this._units2D[index1, formationRankIndex];
      }
      return (IFormationUnit) null;
    }

    public IFormationUnit GetNeighborUnitOfRightSide(IFormationUnit unit)
    {
      int formationRankIndex = unit.FormationRankIndex;
      for (int index1 = unit.FormationFileIndex + 1; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, formationRankIndex] != null)
          return this._units2D[index1, formationRankIndex];
      }
      return (IFormationUnit) null;
    }

    public void ReserveMiddleFrontUnitPosition(IFormationUnit vanguard)
    {
      if ((vanguard is Agent agent ? agent.Formation : (Formation) null) != this.owner)
        this.IsMiddleFrontUnitPositionReserved = true;
      else
        this._isMiddleFrontUnitPositionUsedByVanguardInFormation = true;
      this.Vanguard = vanguard;
    }

    public void ReleaseMiddleFrontUnitPosition()
    {
      this.IsMiddleFrontUnitPositionReserved = false;
      this.Vanguard = (IFormationUnit) null;
      this._isMiddleFrontUnitPositionUsedByVanguardInFormation = false;
    }

    private (int, int) GetMiddleFrontUnitPosition() => (this.VanguardFileIndex, 0);

    public Vec2 GetLocalPositionOfReservedUnitPosition() => Vec2.Zero;

    public void OnTickOccasionallyOfUnit(IFormationUnit unit, bool arrangementChangeAllowed)
    {
      if (!arrangementChangeAllowed || unit.FollowedUnit == this._vanguard || !(unit.FollowedUnit is Agent) || ((Agent) unit.FollowedUnit).IsAIControlled || unit.FollowedUnit.FormationFileIndex < 0 || unit.FollowedUnit.FormationRankIndex < 0)
        return;
      if (unit.FollowedUnit.FormationFileIndex * this._units2D.Count2 + unit.FollowedUnit.FormationRankIndex >= this._units2D.RawArray.Length || unit.FollowedUnit.FormationFileIndex * this._units2D.Count2 + unit.FollowedUnit.FormationRankIndex < 0)
      {
        TaleWorlds.Library.Debug.Print("Followed unit has illegal formation indices!");
        TaleWorlds.Library.Debug.Print("RankIndex: " + (object) unit.FormationRankIndex + " FileIndex: " + (object) unit.FormationFileIndex);
        TaleWorlds.Library.Debug.Print("_units2D.Capacity: " + (object) this._units2D.RawArray.Length + " _units2D.Count1: " + (object) this._units2D.Count1 + " _units2D.Count2: " + (object) this._units2D.Count2);
        TaleWorlds.Library.Debug.Print("FollowedUnit.RankIndex: " + (object) unit.FollowedUnit.FormationRankIndex + " FollowedUnit.FileIndex: " + (object) unit.FollowedUnit.FormationFileIndex);
        if (!(unit.FollowedUnit.Formation is ColumnFormation))
          TaleWorlds.Library.Debug.Print("Followed unit is not in column formation");
        if (((Agent) unit.FollowedUnit).IsPlayerControlled)
          TaleWorlds.Library.Debug.Print("Followed unit is player");
        if (((Agent) unit).Formation.Captain == (Agent) unit.FollowedUnit)
          TaleWorlds.Library.Debug.Print("Followed unit is the captain");
        TaleWorlds.Library.Debug.Print("-------------------------------------");
        foreach (IFormationUnit allUnit in (List<IFormationUnit>) unit.FollowedUnit.Formation.GetAllUnits())
          TaleWorlds.Library.Debug.Print("R: " + (object) allUnit.FormationRankIndex + " F: " + (object) allUnit.FormationFileIndex + " AI: " + (((Agent) allUnit).IsAIControlled ? (object) "1" : (object) "0"));
        TaleWorlds.Library.Debug.Print("-------------------------------------");
      }
      IFormationUnit followedUnit = unit.FollowedUnit;
      this.RemoveUnit(unit.FollowedUnit);
      this.AddUnit(followedUnit);
    }

    private MBList<IFormationUnit> GetUnitsBehind(IFormationUnit unit)
    {
      MBList<IFormationUnit> unitsBehind = new MBList<IFormationUnit>();
      bool flag = false;
      for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
      {
        int index1 = this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide);
        if (index1 == unit.FormationFileIndex)
          flag = true;
        if (flag && this._units2D[index1, unit.FormationRankIndex] != null)
          unitsBehind.Add(this._units2D[index1, unit.FormationRankIndex]);
      }
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        for (int index2 = unit.FormationRankIndex + 1; index2 < this.RankCount; ++index2)
        {
          if (this._units2D[index1, index2] != null)
            unitsBehind.Add(this._units2D[index1, index2]);
        }
      }
      return unitsBehind;
    }

    private void SwitchUnitIfLeftBehind(IFormationUnit unit)
    {
      int columnOffset;
      IFormationUnit unitToFollow = this.GetUnitToFollow(unit, out columnOffset);
      if (unitToFollow == null)
      {
        float num = this.owner.UnitDiameter * 2f;
        IFormation owner = this.owner;
        Vec2 zero = Vec2.Zero;
        MBList<IFormationUnit> unitsWithSpaces = new MBList<IFormationUnit>();
        unitsWithSpaces.Add(unit);
        float? maxDistance = new float?(num);
        IFormationUnit secondUnit = owner.GetClosestUnitTo(zero, unitsWithSpaces, maxDistance) ?? this.owner.GetClosestUnitTo(Vec2.Zero, this.GetUnitsAtRanks(0, this.RankCount - 1));
        if (secondUnit == null || secondUnit == unit || !(secondUnit is Agent) || !(secondUnit as Agent).IsAIControlled)
          return;
        this.SwitchUnitLocations(unit, secondUnit);
      }
      else
      {
        float num = this.GetFollowVector(columnOffset).Length * 1.5f;
        IFormation owner = this.owner;
        IFormationUnit targetUnit = unitToFollow;
        MBList<IFormationUnit> unitsWithSpaces = new MBList<IFormationUnit>();
        unitsWithSpaces.Add(unit);
        float? maxDistance = new float?(num);
        IFormationUnit formationUnit = owner.GetClosestUnitTo(targetUnit, unitsWithSpaces, maxDistance) ?? this.owner.GetClosestUnitTo(unitToFollow, this.GetUnitsBehind(unit));
        if (formationUnit == null || formationUnit == unit || !(formationUnit is Agent secondUnit) || !secondUnit.IsAIControlled)
          return;
        this.SwitchUnitLocations(unit, (IFormationUnit) secondUnit);
      }
    }

    private void SetUnitToFollow(
      IFormationUnit unit,
      IFormationUnit unitToFollow,
      int columnOffset = 0)
    {
      Vec2 followVector = this.GetFollowVector(columnOffset);
      this.owner.SetUnitToFollow(unit, unitToFollow, followVector);
    }

    private Vec2 GetFollowVector(int columnOffset)
    {
      return columnOffset != 0 ? Vec2.Side * (float) columnOffset * (this.owner.UnitDiameter + this.Interval) : -Vec2.Forward * (this.Distance + this.owner.UnitDiameter);
    }

    public float GetDirectionChangeTendencyOfUnit(IFormationUnit unit)
    {
      return this.RankCount == 1 || unit.FormationRankIndex == -1 ? 0.0f : (float) unit.FormationRankIndex * 1f / (float) (this.RankCount - 1);
    }

    private MBList<IFormationUnit> GetUnitsAtRanks(int rankIndex1, int rankIndex2)
    {
      MBList<IFormationUnit> unitsAtRanks = new MBList<IFormationUnit>();
      for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
      {
        int index1 = this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide);
        if (this._units2D[index1, rankIndex1] != null)
          unitsAtRanks.Add(this._units2D[index1, rankIndex1]);
      }
      for (int columnIndex = 0; columnIndex < this.ColumnCount; ++columnIndex)
      {
        int index1 = this.VanguardFileIndex + ColumnFormation.GetColumnOffsetFromColumnIndex(columnIndex, this.isExpandingFromRightSide);
        if (this._units2D[index1, rankIndex2] != null)
          unitsAtRanks.Add(this._units2D[index1, rankIndex2]);
      }
      return unitsAtRanks;
    }

    public IEnumerable<T> GetUnitsAtVanguardFile<T>() where T : IFormationUnit
    {
      int fileIndex = this.VanguardFileIndex;
      for (int rankIndex = 0; rankIndex < this.RankCount; ++rankIndex)
      {
        if (this._units2D[fileIndex, rankIndex] != null)
          yield return (T) this._units2D[fileIndex, rankIndex];
      }
    }

    bool IFormationArrangement.AreLocalPositionsDirty
    {
      set
      {
      }
    }
  }
}
