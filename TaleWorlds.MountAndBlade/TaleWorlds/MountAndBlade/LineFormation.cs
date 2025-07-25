// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.LineFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class LineFormation : IFormationArrangement
  {
    protected const int UnitPositionAvailabilityValueOfUnprocessed = 0;
    protected const int UnitPositionAvailabilityValueOfUnavailable = 1;
    protected const int UnitPositionAvailabilityValueOfAvailable = 2;
    private static readonly Vec2i InvalidPositionIndex = new Vec2i(-1, -1);
    protected readonly IFormation owner;
    private MBList2D<IFormationUnit> _units2D;
    private MBList2D<IFormationUnit> _units2DWorkspace;
    private MBList<IFormationUnit> _allUnits;
    private bool _isBatchRemovingUnits;
    private readonly List<int> _gapFillMinRanksPerFileForBatchRemove = new List<int>();
    private bool _batchRemoveInvolvesUnavailablePositions;
    private MBList<IFormationUnit> _unpositionedUnits;
    protected MBList2D<int> UnitPositionAvailabilities;
    private MBList2D<int> _unitPositionAvailabilitiesWorkspace;
    private MBList2D<WorldPosition> _globalPositions;
    private MBList2D<WorldPosition> _globalPositionsWorkspace;
    private readonly MBWorkspace<MBQueue<(IFormationUnit, int, int)>> _displacedUnitsWorkspace;
    private readonly MBWorkspace<MBArrayList<Vec2i>> _finalOccupationsWorkspace;
    private readonly MBWorkspace<MBArrayList<Vec2i>> _filledInUnitPositionsWorkspace;
    private readonly MBWorkspace<MBQueue<Vec2i>> _toBeFilledInGapsWorkspace;
    private readonly MBWorkspace<MBArrayList<Vec2i>> _finalVacanciesWorkspace;
    private readonly MBWorkspace<MBArrayList<Vec2i>> _filledInGapsWorkspace;
    private readonly MBWorkspace<MBArrayList<Vec2i>> _toBeEmptiedOutUnitPositionsWorkspace;
    private MBArrayList<Vec2i> _cachedOrderedUnitPositionIndices;
    private MBArrayList<Vec2i> _cachedOrderedAndAvailableUnitPositionIndices;
    private MBArrayList<Vec2> _cachedOrderedLocalPositions;
    private Func<LineFormation, int, int, bool> _shiftUnitsBackwardsPredicateDelegate;
    private Func<LineFormation, int, int, bool> _shiftUnitsForwardsPredicateDelegate;
    private bool _isCavalry;
    private bool _isStaggered = true;
    private readonly bool _isDeformingOnWidthChange;
    private bool _isMiddleFrontUnitPositionReserved;
    protected bool IsTransforming;

    protected int FileCount => this._units2D.Count1;

    public int RankCount => this._units2D.Count2;

    public bool AreLocalPositionsDirty { protected get; set; }

    protected float Interval => this.owner.Interval;

    protected float Distance => this.owner.Distance;

    protected float UnitDiameter => this.owner.UnitDiameter;

    public int GetFileCountFromWidth(float width)
    {
      return MathF.Max(MathF.Max(0, (int) (((double) width - (double) this.UnitDiameter) / ((double) this.Interval + (double) this.UnitDiameter) + 9.9999997473787516E-06)) + 1, this.MinimumFileCount);
    }

    public virtual float Width
    {
      get => this.FlankWidth;
      set => this.FlankWidth = value;
    }

    public virtual float Depth => this.RankDepth;

    public float FlankWidth
    {
      get => (float) (this.FileCount - 1) * (this.Interval + this.UnitDiameter) + this.UnitDiameter;
      set
      {
        int fileCountFromWidth = this.GetFileCountFromWidth(value);
        if (fileCountFromWidth > this.FileCount)
          LineFormation.WidenFormation(this, fileCountFromWidth - this.FileCount);
        else if (fileCountFromWidth < this.FileCount)
          LineFormation.NarrowFormation(this, this.FileCount - fileCountFromWidth);
        Action onWidthChanged = this.OnWidthChanged;
        if (onWidthChanged != null)
          onWidthChanged();
        Action onShapeChanged = this.OnShapeChanged;
        if (onShapeChanged == null)
          return;
        onShapeChanged();
      }
    }

    private int MinimumFileCount
    {
      get
      {
        return this.IsTransforming ? 1 : MathF.Max(1, (int) MathF.Sqrt((float) this.GetUnitCountWithOverride()));
      }
    }

    public float RankDepth
    {
      get => (float) (this.RankCount - 1) * (this.Distance + this.UnitDiameter) + this.UnitDiameter;
    }

    public float MinimumFlankWidth
    {
      get
      {
        return (float) (this.MinimumFileCount - 1) * (this.MinimumInterval + this.UnitDiameter) + this.UnitDiameter;
      }
    }

    public virtual float MinimumWidth => this.MinimumFlankWidth;

    private float MinimumInterval => this.owner.MinimumInterval;

    public virtual float MaximumWidth
    {
      get
      {
        float unitDiameter = this.UnitDiameter;
        int countWithOverride = this.GetUnitCountWithOverride();
        if (countWithOverride > 0)
          unitDiameter += (float) (countWithOverride - 1) * (this.owner.MaximumInterval + this.UnitDiameter);
        return unitDiameter;
      }
    }

    protected int GetUnitCountWithOverride() => this.owner.OverridenUnitCount ?? this.UnitCount;

    public bool IsStaggered
    {
      get => this._isStaggered;
      set
      {
        if (this._isStaggered == value)
          return;
        this._isStaggered = value;
        Action onShapeChanged = this.OnShapeChanged;
        if (onShapeChanged == null)
          return;
        onShapeChanged();
      }
    }

    public virtual bool? IsLoose => new bool?();

    public event Action OnWidthChanged;

    public event Action OnShapeChanged;

    public LineFormation(IFormation ownerFormation, bool isStaggered = true)
    {
      this.owner = ownerFormation;
      this.IsStaggered = isStaggered;
      this._units2D = new MBList2D<IFormationUnit>(1, 1);
      this.UnitPositionAvailabilities = new MBList2D<int>(1, 1);
      this._globalPositions = new MBList2D<WorldPosition>(1, 1);
      this._units2DWorkspace = new MBList2D<IFormationUnit>(1, 1);
      this._unitPositionAvailabilitiesWorkspace = new MBList2D<int>(1, 1);
      this._globalPositionsWorkspace = new MBList2D<WorldPosition>(1, 1);
      this._cachedOrderedUnitPositionIndices = new MBArrayList<Vec2i>();
      this._cachedOrderedAndAvailableUnitPositionIndices = new MBArrayList<Vec2i>();
      this._cachedOrderedLocalPositions = new MBArrayList<Vec2>();
      this._unpositionedUnits = new MBList<IFormationUnit>();
      this._displacedUnitsWorkspace = new MBWorkspace<MBQueue<(IFormationUnit, int, int)>>();
      this._finalOccupationsWorkspace = new MBWorkspace<MBArrayList<Vec2i>>();
      this._filledInUnitPositionsWorkspace = new MBWorkspace<MBArrayList<Vec2i>>();
      this._toBeFilledInGapsWorkspace = new MBWorkspace<MBQueue<Vec2i>>();
      this._finalVacanciesWorkspace = new MBWorkspace<MBArrayList<Vec2i>>();
      this._filledInGapsWorkspace = new MBWorkspace<MBArrayList<Vec2i>>();
      this._toBeEmptiedOutUnitPositionsWorkspace = new MBWorkspace<MBArrayList<Vec2i>>();
      this.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    protected LineFormation(
      IFormation ownerFormation,
      bool isDeformingOnWidthChange,
      bool isStaggered = true)
      : this(ownerFormation, isStaggered)
    {
      this._isDeformingOnWidthChange = isDeformingOnWidthChange;
    }

    public virtual IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new LineFormation(formation, this._isDeformingOnWidthChange, this.IsStaggered);
    }

    public virtual void DeepCopyFrom(IFormationArrangement arrangement)
    {
      LineFormation lineFormation = arrangement as LineFormation;
      this.IsStaggered = lineFormation.IsStaggered;
      this.IsTransforming = lineFormation.IsTransforming;
    }

    public void Reset()
    {
      this._units2D = new MBList2D<IFormationUnit>(1, 1);
      this.UnitPositionAvailabilities = new MBList2D<int>(1, 1);
      this._globalPositions = new MBList2D<WorldPosition>(1, 1);
      this._units2DWorkspace = new MBList2D<IFormationUnit>(1, 1);
      this._unitPositionAvailabilitiesWorkspace = new MBList2D<int>(1, 1);
      this._globalPositionsWorkspace = new MBList2D<WorldPosition>(1, 1);
      this._cachedOrderedUnitPositionIndices = new MBArrayList<Vec2i>();
      this._cachedOrderedAndAvailableUnitPositionIndices = new MBArrayList<Vec2i>();
      this._cachedOrderedLocalPositions = new MBArrayList<Vec2>();
      this._unpositionedUnits.Clear();
      this.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    protected virtual bool IsUnitPositionRestrained(int fileIndex, int rankIndex)
    {
      if (!this._isMiddleFrontUnitPositionReserved)
        return false;
      Vec2i frontUnitPosition = this.GetMiddleFrontUnitPosition();
      return fileIndex == frontUnitPosition.Item1 && rankIndex == frontUnitPosition.Item2;
    }

    protected virtual void MakeRestrainedPositionsUnavailable()
    {
      if (!this._isMiddleFrontUnitPositionReserved)
        return;
      Vec2i frontUnitPosition = this.GetMiddleFrontUnitPosition();
      this.UnitPositionAvailabilities[frontUnitPosition.Item1, frontUnitPosition.Item2] = 1;
    }

    protected IFormationUnit GetUnitAt(int fileIndex, int rankIndex)
    {
      return this._units2D[fileIndex, rankIndex];
    }

    public bool IsUnitPositionAvailable(int fileIndex, int rankIndex)
    {
      return this.UnitPositionAvailabilities[fileIndex, rankIndex] == 2;
    }

    private Vec2i GetNearestAvailableNeighbourPositionIndex(int fileIndex, int rankIndex)
    {
      for (int index1 = 1; index1 < this.FileCount + this.RankCount; ++index1)
      {
        bool flag1 = true;
        bool flag2 = true;
        bool flag3 = true;
        bool flag4 = true;
        int num1 = 0;
        for (int index2 = 0; index2 <= index1 && flag1 | flag2 | flag3 | flag4; ++index2)
        {
          int num2 = index1 - index2;
          num1 = index2;
          int num3 = fileIndex - index2;
          int num4 = fileIndex + index2;
          int num5 = rankIndex - num2;
          int num6 = rankIndex + num2;
          if (flag1 && (num3 < 0 || num5 < 0))
            flag1 = false;
          if (flag3 && (num3 < 0 || num6 >= this.RankCount))
            flag3 = false;
          if (flag2 && (num4 >= this.FileCount || num5 < 0))
            flag2 = false;
          if (flag4 && (num4 >= this.FileCount || num6 >= this.RankCount))
            flag4 = false;
          if (flag1 && this.UnitPositionAvailabilities[num3, num5] == 2)
            return new Vec2i(num3, num5);
          if (flag3 && this.UnitPositionAvailabilities[num3, num6] == 2)
            return new Vec2i(num3, num6);
          if (flag2 && this.UnitPositionAvailabilities[num4, num5] == 2)
            return new Vec2i(num4, num5);
          if (flag4 && this.UnitPositionAvailabilities[num4, num6] == 2)
            return new Vec2i(num4, num6);
        }
        int num7;
        bool flag5 = (num7 = 1) != 0;
        bool flag6 = num7 != 0;
        bool flag7 = num7 != 0;
        bool flag8 = num7 != 0;
        for (int index3 = 0; index3 < index1 - num1 && flag8 | flag7 | flag6 | flag5; ++index3)
        {
          int num8 = index1 - index3;
          int num9 = fileIndex - num8;
          int num10 = fileIndex + num8;
          int num11 = rankIndex - index3;
          int num12 = rankIndex + index3;
          if (flag8 && (num9 < 0 || num11 < 0))
            flag8 = false;
          if (flag6 && (num9 < 0 || num12 >= this.RankCount))
            flag6 = false;
          if (flag7 && (num10 >= this.FileCount || num11 < 0))
            flag7 = false;
          if (flag5 && (num10 >= this.FileCount || num12 >= this.RankCount))
            flag5 = false;
          if (flag8 && this.UnitPositionAvailabilities[num9, num11] == 2)
            return new Vec2i(num9, num11);
          if (flag6 && this.UnitPositionAvailabilities[num9, num12] == 2)
            return new Vec2i(num9, num12);
          if (flag7 && this.UnitPositionAvailabilities[num10, num11] == 2)
            return new Vec2i(num10, num11);
          if (flag5 && this.UnitPositionAvailabilities[num10, num12] == 2)
            return new Vec2i(num10, num12);
        }
      }
      return LineFormation.InvalidPositionIndex;
    }

    private bool GetNextVacancy(out int fileIndex, out int rankIndex)
    {
      int num = this.FileCount * this.RankCount;
      for (int unitIndex = 0; unitIndex < num; ++unitIndex)
      {
        Vec2i unitPositionIndex = this.GetOrderedUnitPositionIndex(unitIndex);
        fileIndex = unitPositionIndex.Item1;
        rankIndex = unitPositionIndex.Item2;
        if (this._units2D[fileIndex, rankIndex] == null && this.IsUnitPositionAvailable(fileIndex, rankIndex))
          return true;
      }
      fileIndex = -1;
      rankIndex = -1;
      return false;
    }

    private IFormationUnit GetLastUnit()
    {
      int num1 = -1;
      IFormationUnit lastUnit = (IFormationUnit) null;
      foreach (IFormationUnit allUnit in (List<IFormationUnit>) this._allUnits)
      {
        int num2 = allUnit.FormationFileIndex + allUnit.FormationRankIndex;
        if (num2 > num1)
        {
          num1 = num2;
          lastUnit = allUnit;
        }
      }
      return lastUnit;
    }

    private static Vec2i GetOrderedUnitPositionIndexAux(
      int fileIndexBegin,
      int fileIndexEnd,
      int rankIndexBegin,
      int rankIndexEnd,
      int unitIndex)
    {
      int num1 = fileIndexEnd - fileIndexBegin + 1;
      int num2 = unitIndex / num1;
      int num3 = unitIndex - num2 * num1;
      return new Vec2i((num1 % 2 != 1 ? num1 / 2 - 1 + (num3 % 2 == 0 ? -1 : 1) * (num3 + 1) / 2 : num1 / 2 + (num3 % 2 == 0 ? 1 : -1) * (num3 + 1) / 2) + fileIndexBegin, num2 + rankIndexBegin);
    }

    private Vec2i GetOrderedUnitPositionIndex(int unitIndex)
    {
      return LineFormation.GetOrderedUnitPositionIndexAux(0, this.FileCount - 1, 0, this.RankCount - 1, unitIndex);
    }

    private static IEnumerable<Vec2i> GetOrderedUnitPositionIndicesAux(
      int fileIndexBegin,
      int fileIndexEnd,
      int rankIndexBegin,
      int rankIndexEnd)
    {
      int fileCount = fileIndexEnd - fileIndexBegin + 1;
      int centerFileIndex;
      int rankIndex;
      int fileIndexOffset;
      if (fileCount % 2 == 1)
      {
        centerFileIndex = fileCount / 2;
        for (rankIndex = rankIndexBegin; rankIndex <= rankIndexEnd; ++rankIndex)
        {
          yield return new Vec2i(fileIndexBegin + centerFileIndex, rankIndex);
          for (fileIndexOffset = 1; fileIndexOffset <= centerFileIndex; ++fileIndexOffset)
          {
            yield return new Vec2i(fileIndexBegin + centerFileIndex - fileIndexOffset, rankIndex);
            if (centerFileIndex + fileIndexOffset < fileCount)
              yield return new Vec2i(fileIndexBegin + centerFileIndex + fileIndexOffset, rankIndex);
          }
        }
      }
      else
      {
        centerFileIndex = fileCount / 2 - 1;
        for (rankIndex = rankIndexBegin; rankIndex <= rankIndexEnd; ++rankIndex)
        {
          yield return new Vec2i(fileIndexBegin + centerFileIndex, rankIndex);
          for (fileIndexOffset = 1; fileIndexOffset <= centerFileIndex + 1; ++fileIndexOffset)
          {
            yield return new Vec2i(fileIndexBegin + centerFileIndex + fileIndexOffset, rankIndex);
            if (centerFileIndex - fileIndexOffset >= 0)
              yield return new Vec2i(fileIndexBegin + centerFileIndex - fileIndexOffset, rankIndex);
          }
        }
      }
    }

    private IEnumerable<Vec2i> GetOrderedUnitPositionIndices()
    {
      return LineFormation.GetOrderedUnitPositionIndicesAux(0, this.FileCount - 1, 0, this.RankCount - 1);
    }

    public Vec2? GetLocalPositionOfUnitOrDefault(int unitIndex)
    {
      Vec2i vec2i = unitIndex < this._cachedOrderedAndAvailableUnitPositionIndices.Count ? this._cachedOrderedAndAvailableUnitPositionIndices.ElementAt<Vec2i>(unitIndex) : LineFormation.InvalidPositionIndex;
      return !(vec2i != LineFormation.InvalidPositionIndex) ? new Vec2?() : new Vec2?(this.GetLocalPositionOfUnit(vec2i.Item1, vec2i.Item2));
    }

    public Vec2? GetLocalDirectionOfUnitOrDefault(int unitIndex) => new Vec2?(Vec2.Forward);

    public WorldPosition? GetWorldPositionOfUnitOrDefault(int unitIndex)
    {
      Vec2i vec2i = unitIndex < this._cachedOrderedAndAvailableUnitPositionIndices.Count ? this._cachedOrderedAndAvailableUnitPositionIndices.ElementAt<Vec2i>(unitIndex) : LineFormation.InvalidPositionIndex;
      return !(vec2i != LineFormation.InvalidPositionIndex) ? new WorldPosition?() : new WorldPosition?(this._globalPositions[vec2i.Item1, vec2i.Item2]);
    }

    public IEnumerable<Vec2> GetUnavailableUnitPositions()
    {
      for (int fileIndex = 0; fileIndex < this.FileCount; ++fileIndex)
      {
        for (int rankIndex = 0; rankIndex < this.RankCount; ++rankIndex)
        {
          if (this.UnitPositionAvailabilities[fileIndex, rankIndex] == 1 && !this.IsUnitPositionRestrained(fileIndex, rankIndex))
            yield return this.GetLocalPositionOfUnit(fileIndex, rankIndex);
        }
      }
    }

    private void InsertUnit(IFormationUnit unit, int fileIndex, int rankIndex)
    {
      unit.FormationFileIndex = fileIndex;
      unit.FormationRankIndex = rankIndex;
      this._units2D[fileIndex, rankIndex] = unit;
      this.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public bool AddUnit(IFormationUnit unit)
    {
      bool flag = false;
      while (!flag && !this.AreLastRanksCompletelyUnavailable())
      {
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
        else if (this.IsDeepenApplicable())
          this.Deepen();
        else
          break;
      }
      if (!flag)
      {
        this._unpositionedUnits.Add(unit);
        this.ReconstructUnitsFromUnits2D();
      }
      if (flag)
      {
        if (this.FileCount < this.MinimumFileCount)
          LineFormation.WidenFormation(this, this.MinimumFileCount - this.FileCount);
        Action onShapeChanged = this.OnShapeChanged;
        if (onShapeChanged != null)
          onShapeChanged();
        if (unit is Agent)
        {
          bool hasMount = (unit as Agent).HasMount;
          if ((!(this.owner is Formation) ? 0 : ((this.owner as Formation).CalculateHasSignificantNumberOfMounted ? 1 : 0)) != (this._isCavalry ? 1 : 0))
            this.BatchUnitPositionAvailabilities();
          else if (this._isCavalry != hasMount && this.owner is Formation)
          {
            (this.owner as Formation).QuerySystem.ForceExpireCavalryUnitRatio();
            if ((this.owner as Formation).CalculateHasSignificantNumberOfMounted != this._isCavalry)
              this.BatchUnitPositionAvailabilities();
          }
        }
      }
      return flag;
    }

    public void RemoveUnit(IFormationUnit unit)
    {
      if (this._unpositionedUnits.Remove(unit))
        this.ReconstructUnitsFromUnits2D();
      else
        this.RemoveUnit(unit, true);
    }

    public IFormationUnit GetUnit(int fileIndex, int rankIndex)
    {
      return this._units2D[fileIndex, rankIndex];
    }

    public void OnBatchRemoveStart()
    {
      if (this._isBatchRemovingUnits)
        return;
      this._isBatchRemovingUnits = true;
      this._gapFillMinRanksPerFileForBatchRemove.Clear();
      this._batchRemoveInvolvesUnavailablePositions = false;
    }

    public void OnBatchRemoveEnd()
    {
      if (!this._isBatchRemovingUnits)
        return;
      if (this._gapFillMinRanksPerFileForBatchRemove.Count > 0)
      {
        for (int index = 0; index < this._gapFillMinRanksPerFileForBatchRemove.Count; ++index)
        {
          int rankIndex = this._gapFillMinRanksPerFileForBatchRemove[index];
          if (index < this.FileCount && rankIndex < this.RankCount)
            LineFormation.FillInTheGapsOfFile(this, index, rankIndex);
        }
        this.FillInTheGapsOfFormationAfterRemove(this._batchRemoveInvolvesUnavailablePositions);
        this._gapFillMinRanksPerFileForBatchRemove.Clear();
      }
      this._isBatchRemovingUnits = false;
    }

    public List<IFormationUnit> GetUnitsToPop(int count)
    {
      List<IFormationUnit> unitsToPop = new List<IFormationUnit>();
      if (this._unpositionedUnits.Count > 0)
      {
        int count1 = Math.Min(count, this._unpositionedUnits.Count);
        unitsToPop.AddRange(this._unpositionedUnits.Take<IFormationUnit>(count1));
        count -= count1;
      }
      if (count > 0)
      {
        for (int unitIndex = this.FileCount * this.RankCount - 1; unitIndex >= 0; --unitIndex)
        {
          Vec2i unitPositionIndex = this.GetOrderedUnitPositionIndex(unitIndex);
          int index1 = unitPositionIndex.Item1;
          int index2 = unitPositionIndex.Item2;
          if (this._units2D[index1, index2] != null)
          {
            unitsToPop.Add(this._units2D[index1, index2]);
            --count;
            if (count == 0)
              break;
          }
        }
      }
      return unitsToPop;
    }

    private void PickUnitsWithRespectToPosition(
      Agent agent,
      float distanceSquared,
      ref LinkedList<Tuple<IFormationUnit, float>> collection,
      ref List<IFormationUnit> chosenUnits,
      int countToChoose,
      bool chooseClosest)
    {
      if (collection.Count < countToChoose)
      {
        LinkedListNode<Tuple<IFormationUnit, float>> node = (LinkedListNode<Tuple<IFormationUnit, float>>) null;
        for (LinkedListNode<Tuple<IFormationUnit, float>> linkedListNode = collection.First; linkedListNode != null; linkedListNode = linkedListNode.Next)
        {
          if ((chooseClosest ? ((double) linkedListNode.Value.Item2 < (double) distanceSquared ? 1 : 0) : ((double) linkedListNode.Value.Item2 > (double) distanceSquared ? 1 : 0)) != 0)
          {
            node = linkedListNode;
            break;
          }
        }
        if (node != null)
          collection.AddBefore(node, new LinkedListNode<Tuple<IFormationUnit, float>>(new Tuple<IFormationUnit, float>((IFormationUnit) agent, distanceSquared)));
        else
          collection.AddLast(new LinkedListNode<Tuple<IFormationUnit, float>>(new Tuple<IFormationUnit, float>((IFormationUnit) agent, distanceSquared)));
      }
      else if ((chooseClosest ? ((double) distanceSquared < (double) collection.First<Tuple<IFormationUnit, float>>().Item2 ? 1 : 0) : ((double) distanceSquared > (double) collection.First<Tuple<IFormationUnit, float>>().Item2 ? 1 : 0)) != 0)
      {
        LinkedListNode<Tuple<IFormationUnit, float>> node = (LinkedListNode<Tuple<IFormationUnit, float>>) null;
        for (LinkedListNode<Tuple<IFormationUnit, float>> next = collection.First.Next; next != null; next = next.Next)
        {
          if ((chooseClosest ? ((double) next.Value.Item2 < (double) distanceSquared ? 1 : 0) : ((double) next.Value.Item2 > (double) distanceSquared ? 1 : 0)) != 0)
          {
            node = next;
            break;
          }
        }
        if (node != null)
          collection.AddBefore(node, new LinkedListNode<Tuple<IFormationUnit, float>>(new Tuple<IFormationUnit, float>((IFormationUnit) agent, distanceSquared)));
        else
          collection.AddLast(new LinkedListNode<Tuple<IFormationUnit, float>>(new Tuple<IFormationUnit, float>((IFormationUnit) agent, distanceSquared)));
        if (!chooseClosest)
          chosenUnits.Add(collection.First<Tuple<IFormationUnit, float>>().Item1);
        collection.RemoveFirst();
      }
      else
      {
        if (chooseClosest)
          return;
        chosenUnits.Add((IFormationUnit) agent);
      }
    }

    public IEnumerable<IFormationUnit> GetUnitsToPopWithCondition(
      int count,
      Func<IFormationUnit, bool> currentCondition)
    {
      foreach (IFormationUnit formationUnit in this._unpositionedUnits.Where<IFormationUnit>((Func<IFormationUnit, bool>) (uu => currentCondition(uu))))
      {
        yield return formationUnit;
        --count;
        if (count == 0)
          yield break;
      }
      for (int i = this.FileCount * this.RankCount - 1; i >= 0; --i)
      {
        Vec2i unitPositionIndex = this.GetOrderedUnitPositionIndex(i);
        int index1 = unitPositionIndex.Item1;
        int index2 = unitPositionIndex.Item2;
        if (this._units2D[index1, index2] != null && currentCondition(this._units2D[index1, index2]))
        {
          yield return this._units2D[index1, index2];
          --count;
          if (count == 0)
            break;
        }
      }
    }

    private void TryToKeepDepth()
    {
      if (this.FileCount <= this.MinimumFileCount || this.CountUnitsAtRank(this.RankCount - 1) + (this.RankCount - 1) > this.FileCount || MBRandom.RandomInt(this.RankCount * 2) != 0 || !this.IsNarrowApplicable(this.FileCount > 2 ? 2 : 1))
        return;
      LineFormation.NarrowFormation(this, this.FileCount > 2 ? 2 : 1);
    }

    public List<IFormationUnit> GetUnitsToPop(int count, Vec3 targetPosition)
    {
      List<IFormationUnit> chosenUnits = new List<IFormationUnit>();
      if (this._unpositionedUnits.Count > 0)
      {
        int count1 = Math.Min(count, this._unpositionedUnits.Count);
        if (count1 < this._unpositionedUnits.Count)
        {
          LinkedList<Tuple<IFormationUnit, float>> collection = new LinkedList<Tuple<IFormationUnit, float>>();
          bool chooseClosest = (double) count1 <= (double) this._unpositionedUnits.Count * 0.5;
          int countToChoose = chooseClosest ? count1 : this._unpositionedUnits.Count - count1;
          for (int index = 0; index < this._unpositionedUnits.Count; ++index)
          {
            if (!(this._unpositionedUnits[index] is Agent unpositionedUnit))
            {
              if (chooseClosest)
              {
                collection.AddFirst(new Tuple<IFormationUnit, float>(this._unpositionedUnits[index], float.MinValue));
                if (collection.Count > count1)
                  collection.RemoveLast();
              }
              else if (collection.Count < countToChoose)
                collection.AddLast(new Tuple<IFormationUnit, float>(this._unpositionedUnits[index], float.MinValue));
              else
                chosenUnits.Add(this._unpositionedUnits[index]);
            }
            else
            {
              float distanceSquared = unpositionedUnit.Position.DistanceSquared(targetPosition);
              this.PickUnitsWithRespectToPosition(unpositionedUnit, distanceSquared, ref collection, ref chosenUnits, countToChoose, chooseClosest);
            }
          }
          if (chooseClosest)
            chosenUnits.AddRange(collection.Select<Tuple<IFormationUnit, float>, IFormationUnit>((Func<Tuple<IFormationUnit, float>, IFormationUnit>) (tuple => tuple.Item1)));
          count -= count1;
        }
        else
        {
          chosenUnits.AddRange(this._unpositionedUnits.Take<IFormationUnit>(count1));
          count -= count1;
        }
      }
      if (count > 0)
      {
        int num1 = count;
        int num2 = this.UnitCount - this._unpositionedUnits.Count;
        bool flag = num2 == num1;
        bool chooseClosest = (double) count <= (double) num2 * 0.5;
        LinkedList<Tuple<IFormationUnit, float>> collection = flag ? (LinkedList<Tuple<IFormationUnit, float>>) null : new LinkedList<Tuple<IFormationUnit, float>>();
        int countToChoose = chooseClosest ? num1 : num2 - num1;
        for (int index = this.FileCount * this.RankCount - 1; index >= 0; --index)
        {
          Vec2i unitPositionIndex = this.GetOrderedUnitPositionIndex(index);
          int index1 = unitPositionIndex.Item1;
          int index2 = unitPositionIndex.Item2;
          if (this._units2D[index1, index2] != null)
          {
            if (flag)
            {
              chosenUnits.Add(this._units2D[index1, index2]);
              --count;
              if (count == 0)
                break;
            }
            else if (!(this._units2D[index1, index2] is Agent agent))
            {
              if (chooseClosest)
              {
                collection.AddFirst(new Tuple<IFormationUnit, float>(this._unpositionedUnits[index], float.MinValue));
                if (collection.Count > num1)
                  collection.RemoveLast();
              }
              else if (collection.Count < countToChoose)
                collection.AddLast(new Tuple<IFormationUnit, float>(this._unpositionedUnits[index], float.MinValue));
              else
                chosenUnits.Add(this._unpositionedUnits[index]);
            }
            else
            {
              float distanceSquared = agent.Position.DistanceSquared(targetPosition);
              this.PickUnitsWithRespectToPosition(agent, distanceSquared, ref collection, ref chosenUnits, countToChoose, chooseClosest);
            }
          }
        }
        if (!flag & chooseClosest)
          chosenUnits.AddRange(collection.Select<Tuple<IFormationUnit, float>, IFormationUnit>((Func<Tuple<IFormationUnit, float>, IFormationUnit>) (tuple => tuple.Item1)));
      }
      return chosenUnits;
    }

    private void RemoveUnit(
      IFormationUnit unit,
      bool fillInTheGap,
      bool isRemovingFromAnUnavailablePosition = false)
    {
      if (fillInTheGap)
      {
        int num1 = isRemovingFromAnUnavailablePosition ? 1 : 0;
      }
      int formationFileIndex = unit.FormationFileIndex;
      int formationRankIndex = unit.FormationRankIndex;
      if (unit.FormationFileIndex < 0 || unit.FormationRankIndex < 0 || unit.FormationFileIndex >= this.FileCount || unit.FormationRankIndex >= this.RankCount)
        TaleWorlds.Library.Debug.Print("Unit removed has file-rank indices: " + (object) unit.FormationFileIndex + " " + (object) unit.FormationRankIndex + " while line formation has file-rank counts of " + (object) this.FileCount + " " + (object) this.RankCount + " agent state is " + (object) (unit is Agent agent1 ? new AgentState?(agent1.State) : new AgentState?()) + " unit detachment is " + (unit is Agent agent2 ? (object) agent2.Detachment : (object) (IDetachment) null));
      this._units2D[unit.FormationFileIndex, unit.FormationRankIndex] = (IFormationUnit) null;
      this.ReconstructUnitsFromUnits2D();
      unit.FormationFileIndex = -1;
      unit.FormationRankIndex = -1;
      if (fillInTheGap)
      {
        if (this._isBatchRemovingUnits)
        {
          int num2 = formationFileIndex - this._gapFillMinRanksPerFileForBatchRemove.Count + 1;
          for (int index = 0; index < num2; ++index)
            this._gapFillMinRanksPerFileForBatchRemove.Add(int.MaxValue);
          this._gapFillMinRanksPerFileForBatchRemove[formationFileIndex] = MathF.Min(formationRankIndex, this._gapFillMinRanksPerFileForBatchRemove[formationFileIndex]);
          this._batchRemoveInvolvesUnavailablePositions |= isRemovingFromAnUnavailablePosition;
        }
        else
        {
          LineFormation.FillInTheGapsOfFile(this, formationFileIndex, formationRankIndex);
          this.FillInTheGapsOfFormationAfterRemove(isRemovingFromAnUnavailablePosition);
        }
      }
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    protected virtual bool TryGetUnitPositionIndexFromLocalPosition(
      Vec2 localPosition,
      out int fileIndex,
      out int rankIndex)
    {
      rankIndex = MathF.Round((float) (-(double) localPosition.y / ((double) this.Distance + (double) this.UnitDiameter)));
      if (rankIndex >= this.RankCount)
      {
        fileIndex = -1;
        return false;
      }
      if (this.IsStaggered && rankIndex % 2 == 1)
        localPosition.x -= (float) (((double) this.Interval + (double) this.UnitDiameter) * 0.5);
      float num = (float) (this.FileCount - 1) * (this.Interval + this.UnitDiameter);
      fileIndex = MathF.Round((float) (((double) localPosition.x + (double) num / 2.0) / ((double) this.Interval + (double) this.UnitDiameter)));
      return fileIndex >= 0 && fileIndex < this.FileCount;
    }

    protected virtual Vec2 GetLocalPositionOfUnit(int fileIndex, int rankIndex)
    {
      float num = (float) (this.FileCount - 1) * (this.Interval + this.UnitDiameter);
      Vec2 localPositionOfUnit = new Vec2((float) ((double) fileIndex * ((double) this.Interval + (double) this.UnitDiameter) - (double) num / 2.0), (float) -rankIndex * (this.Distance + this.UnitDiameter));
      if (this.IsStaggered && rankIndex % 2 == 1)
        localPositionOfUnit.x += (float) (((double) this.Interval + (double) this.UnitDiameter) * 0.5);
      return localPositionOfUnit;
    }

    protected virtual Vec2 GetLocalPositionOfUnitWithAdjustment(
      int fileIndex,
      int rankIndex,
      float distanceBetweenAgentsAdjustment)
    {
      float num1 = this.Interval + distanceBetweenAgentsAdjustment;
      float num2 = (float) (this.FileCount - 1) * (num1 + this.UnitDiameter);
      Vec2 unitWithAdjustment = new Vec2((float) ((double) fileIndex * ((double) num1 + (double) this.UnitDiameter) - (double) num2 / 2.0), (float) -rankIndex * (this.Distance + this.UnitDiameter));
      if (this.IsStaggered && rankIndex % 2 == 1)
        unitWithAdjustment.x += (float) (((double) num1 + (double) this.UnitDiameter) * 0.5);
      return unitWithAdjustment;
    }

    protected virtual Vec2 GetLocalDirectionOfUnit(int fileIndex, int rankIndex) => Vec2.Forward;

    public Vec2? GetLocalPositionOfUnitOrDefault(IFormationUnit unit)
    {
      return this._unpositionedUnits.Contains(unit) ? new Vec2?() : new Vec2?(this.GetLocalPositionOfUnit(unit.FormationFileIndex, unit.FormationRankIndex));
    }

    public Vec2? GetLocalPositionOfUnitOrDefaultWithAdjustment(
      IFormationUnit unit,
      float distanceBetweenAgentsAdjustment)
    {
      return this._unpositionedUnits.Contains(unit) ? new Vec2?() : new Vec2?(this.GetLocalPositionOfUnitWithAdjustment(unit.FormationFileIndex, unit.FormationRankIndex, distanceBetweenAgentsAdjustment));
    }

    public virtual Vec2? GetLocalDirectionOfUnitOrDefault(IFormationUnit unit)
    {
      return new Vec2?(Vec2.Forward);
    }

    public WorldPosition? GetWorldPositionOfUnitOrDefault(IFormationUnit unit)
    {
      return this._unpositionedUnits.Contains(unit) ? new WorldPosition?() : new WorldPosition?(this._globalPositions[unit.FormationFileIndex, unit.FormationRankIndex]);
    }

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
      for (int index = 0; index < this._unpositionedUnits.Count; ++index)
        this._allUnits.Add(this._unpositionedUnits[index]);
    }

    private void FillInTheGapsOfFormationAfterRemove(bool hasUnavailablePositions)
    {
      this.TryReaddingUnpositionedUnits();
      LineFormation.FillInTheGapsOfMiddleRanks(this);
      int num = hasUnavailablePositions ? 1 : 0;
      this.TryToKeepDepth();
    }

    private static void WidenFormation(LineFormation formation, int fileCountFromBothFlanks)
    {
      if (fileCountFromBothFlanks % 2 == 0)
        LineFormation.WidenFormation(formation, fileCountFromBothFlanks / 2, fileCountFromBothFlanks / 2);
      else if (formation.FileCount % 2 == 0)
        LineFormation.WidenFormation(formation, fileCountFromBothFlanks / 2 + 1, fileCountFromBothFlanks / 2);
      else
        LineFormation.WidenFormation(formation, fileCountFromBothFlanks / 2, fileCountFromBothFlanks / 2 + 1);
    }

    private static void WidenFormation(
      LineFormation formation,
      int fileCountFromLeftFlank,
      int fileCountFromRightFlank)
    {
      formation._units2DWorkspace.ResetWithNewCount(formation.FileCount + fileCountFromLeftFlank + fileCountFromRightFlank, formation.RankCount);
      formation._unitPositionAvailabilitiesWorkspace.ResetWithNewCount(formation.FileCount + fileCountFromLeftFlank + fileCountFromRightFlank, formation.RankCount);
      formation._globalPositionsWorkspace.ResetWithNewCount(formation.FileCount + fileCountFromLeftFlank + fileCountFromRightFlank, formation.RankCount);
      for (int index = 0; index < formation.FileCount; ++index)
      {
        int destinationIndex1 = index + fileCountFromLeftFlank;
        formation._units2D.CopyRowTo(index, 0, formation._units2DWorkspace, destinationIndex1, 0, formation.RankCount);
        formation.UnitPositionAvailabilities.CopyRowTo(index, 0, formation._unitPositionAvailabilitiesWorkspace, destinationIndex1, 0, formation.RankCount);
        formation._globalPositions.CopyRowTo(index, 0, formation._globalPositionsWorkspace, destinationIndex1, 0, formation.RankCount);
        if (fileCountFromLeftFlank > 0)
        {
          for (int index2 = 0; index2 < formation.RankCount; ++index2)
          {
            if (formation._units2D[index, index2] != null)
              formation._units2D[index, index2].FormationFileIndex += fileCountFromLeftFlank;
          }
        }
      }
      MBList2D<IFormationUnit> units2D = formation._units2D;
      formation._units2D = formation._units2DWorkspace;
      formation._units2DWorkspace = units2D;
      formation.ReconstructUnitsFromUnits2D();
      MBList2D<int> positionAvailabilities = formation.UnitPositionAvailabilities;
      formation.UnitPositionAvailabilities = formation._unitPositionAvailabilitiesWorkspace;
      formation._unitPositionAvailabilitiesWorkspace = positionAvailabilities;
      MBList2D<WorldPosition> globalPositions = formation._globalPositions;
      formation._globalPositions = formation._globalPositionsWorkspace;
      formation._globalPositionsWorkspace = globalPositions;
      formation.BatchUnitPositionAvailabilities();
      if (formation._isDeformingOnWidthChange || (fileCountFromLeftFlank + fileCountFromRightFlank) % 2 == 1)
      {
        formation.OnFormationFrameChanged();
      }
      else
      {
        LineFormation.ShiftUnitsForwardsForWideningFormation(formation);
        formation.TryReaddingUnpositionedUnits();
        while (formation.RankCount > 1 && formation.IsRankEmpty(formation.RankCount - 1))
          formation.Shorten();
      }
      Action onShapeChanged = formation.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    private static void GetToBeFilledInAndToBeEmptiedOutUnitPositions(
      LineFormation formation,
      MBQueue<Vec2i> toBeFilledInUnitPositions,
      MBArrayList<Vec2i> toBeEmptiedOutUnitPositions)
    {
      int unitIndex1 = 0;
      int unitIndex2 = formation.FileCount * formation.RankCount - 1;
      while (true)
      {
        Vec2i unitPositionIndex1 = formation.GetOrderedUnitPositionIndex(unitIndex1);
        int num1 = unitPositionIndex1.Item1;
        int num2 = unitPositionIndex1.Item2;
        Vec2i unitPositionIndex2 = formation.GetOrderedUnitPositionIndex(unitIndex2);
        int num3 = unitPositionIndex2.Item1;
        int num4 = unitPositionIndex2.Item2;
        if (num2 < num4)
        {
          if (formation._units2D[num1, num2] != null || !formation.IsUnitPositionAvailable(num1, num2))
            ++unitIndex1;
          else if (formation._units2D[num3, num4] == null)
          {
            --unitIndex2;
          }
          else
          {
            toBeFilledInUnitPositions.Enqueue(new Vec2i(num1, num2));
            toBeEmptiedOutUnitPositions.Add(new Vec2i(num3, num4));
            ++unitIndex1;
            --unitIndex2;
          }
        }
        else
          break;
      }
    }

    private static Vec2i GetUnitPositionForFillInFromNearby(
      LineFormation formation,
      int relocationFileIndex,
      int relocationRankIndex,
      Func<LineFormation, int, int, bool> predicate,
      bool isRelocationUnavailable = false)
    {
      return LineFormation.GetUnitPositionForFillInFromNearby(formation, relocationFileIndex, relocationRankIndex, predicate, LineFormation.InvalidPositionIndex, isRelocationUnavailable);
    }

    private static Vec2i GetUnitPositionForFillInFromNearby(
      LineFormation formation,
      int relocationFileIndex,
      int relocationRankIndex,
      Func<LineFormation, int, int, bool> predicate,
      Vec2i lastFinalOccupation,
      bool isRelocationUnavailable = false)
    {
      int fileCount = formation.FileCount;
      int rankCount = formation.RankCount;
      bool flag = relocationFileIndex >= fileCount / 2;
      if (lastFinalOccupation != LineFormation.InvalidPositionIndex)
        flag = lastFinalOccupation.Item1 <= relocationFileIndex;
      for (int a = 1; a <= fileCount + rankCount; ++a)
      {
        for (int index = MathF.Min(a, rankCount - 1 - relocationRankIndex); index >= 0; --index)
        {
          int num = a - index;
          if (flag && relocationFileIndex - num >= 0 && predicate(formation, relocationFileIndex - num, relocationRankIndex + index))
            return new Vec2i(relocationFileIndex - num, relocationRankIndex + index);
          if (relocationFileIndex + num < fileCount && predicate(formation, relocationFileIndex + num, relocationRankIndex + index))
            return new Vec2i(relocationFileIndex + num, relocationRankIndex + index);
          if (!flag && relocationFileIndex - num >= 0 && predicate(formation, relocationFileIndex - num, relocationRankIndex + index))
            return new Vec2i(relocationFileIndex - num, relocationRankIndex + index);
        }
      }
      return LineFormation.InvalidPositionIndex;
    }

    private static void ShiftUnitsForwardsForWideningFormation(LineFormation formation)
    {
      MBQueue<Vec2i> toBeFilledInUnitPositions = formation._toBeFilledInGapsWorkspace.StartUsingWorkspace();
      MBArrayList<Vec2i> toBeEmptiedOutUnitPositions = formation._finalVacanciesWorkspace.StartUsingWorkspace();
      MBArrayList<Vec2i> mbArrayList = formation._filledInGapsWorkspace.StartUsingWorkspace();
      LineFormation.GetToBeFilledInAndToBeEmptiedOutUnitPositions(formation, toBeFilledInUnitPositions, toBeEmptiedOutUnitPositions);
      if (formation._shiftUnitsForwardsPredicateDelegate == null)
        formation._shiftUnitsForwardsPredicateDelegate = new Func<LineFormation, int, int, bool>(ShiftUnitForwardsPredicate);
      while (toBeFilledInUnitPositions.Count > 0)
      {
        Vec2i vec2i1 = toBeFilledInUnitPositions.Dequeue();
        Vec2i fillInFromNearby = LineFormation.GetUnitPositionForFillInFromNearby(formation, vec2i1.Item1, vec2i1.Item2, formation._shiftUnitsForwardsPredicateDelegate);
        if (fillInFromNearby != LineFormation.InvalidPositionIndex)
        {
          int num1 = fillInFromNearby.Item1;
          int num2 = fillInFromNearby.Item2;
          IFormationUnit unit = formation._units2D[num1, num2];
          formation.RelocateUnit(unit, vec2i1.Item1, vec2i1.Item2);
          mbArrayList.Add(vec2i1);
          Vec2i vec2i2 = new Vec2i(num1, num2);
          if (!toBeEmptiedOutUnitPositions.Contains(vec2i2))
            toBeFilledInUnitPositions.Enqueue(vec2i2);
        }
      }
      formation._toBeFilledInGapsWorkspace.StopUsingWorkspace();
      formation._finalVacanciesWorkspace.StopUsingWorkspace();
      formation._filledInGapsWorkspace.StopUsingWorkspace();

      bool ShiftUnitForwardsPredicate(LineFormation localFormation, int fileIndex, int rankIndex)
      {
        return localFormation._units2D[fileIndex, rankIndex] != null && !localFormation._filledInGapsWorkspace.GetWorkspace().Contains(new Vec2i(fileIndex, rankIndex));
      }
    }

    private static void DeepenFormation(
      LineFormation formation,
      int rankCountFromFront,
      int rankCountFromRear)
    {
      formation._units2DWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount + rankCountFromFront + rankCountFromRear);
      formation._unitPositionAvailabilitiesWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount + rankCountFromFront + rankCountFromRear);
      formation._globalPositionsWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount + rankCountFromFront + rankCountFromRear);
      for (int index = 0; index < formation.FileCount; ++index)
      {
        formation._units2D.CopyRowTo(index, 0, formation._units2DWorkspace, index, rankCountFromFront, formation.RankCount);
        formation.UnitPositionAvailabilities.CopyRowTo(index, 0, formation._unitPositionAvailabilitiesWorkspace, index, rankCountFromFront, formation.RankCount);
        formation._globalPositions.CopyRowTo(index, 0, formation._globalPositionsWorkspace, index, rankCountFromFront, formation.RankCount);
        if (rankCountFromFront > 0)
        {
          for (int index2 = 0; index2 < formation.RankCount; ++index2)
          {
            if (formation._units2D[index, index2] != null)
              formation._units2D[index, index2].FormationRankIndex += rankCountFromFront;
          }
        }
      }
      MBList2D<IFormationUnit> units2D = formation._units2D;
      formation._units2D = formation._units2DWorkspace;
      formation._units2DWorkspace = units2D;
      formation.ReconstructUnitsFromUnits2D();
      MBList2D<int> positionAvailabilities = formation.UnitPositionAvailabilities;
      formation.UnitPositionAvailabilities = formation._unitPositionAvailabilitiesWorkspace;
      formation._unitPositionAvailabilitiesWorkspace = positionAvailabilities;
      MBList2D<WorldPosition> globalPositions = formation._globalPositions;
      formation._globalPositions = formation._globalPositionsWorkspace;
      formation._globalPositionsWorkspace = globalPositions;
      formation.BatchUnitPositionAvailabilities();
      Action onShapeChanged = formation.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    protected virtual bool IsDeepenApplicable() => true;

    private void Deepen() => LineFormation.DeepenFormation(this, 0, 1);

    private static bool DeepenForVacancy(
      LineFormation formation,
      int requestedVacancyCount,
      int fileOffsetFromLeftFlank,
      int fileOffsetFromRightFlank)
    {
      int num1 = 0;
      bool? nullable = new bool?();
      while (!nullable.HasValue)
      {
        int num2 = formation.RankCount - 1;
        for (int index = fileOffsetFromLeftFlank; index < formation.FileCount - fileOffsetFromRightFlank; ++index)
        {
          if (formation._units2D[index, num2] == null && formation.IsUnitPositionAvailable(index, num2))
            ++num1;
        }
        if (num1 >= requestedVacancyCount)
          nullable = new bool?(true);
        else if (!formation.AreLastRanksCompletelyUnavailable())
        {
          if (formation.IsDeepenApplicable())
            formation.Deepen();
          else
            nullable = new bool?(false);
        }
        else
          nullable = new bool?(false);
      }
      return nullable.Value;
    }

    protected virtual bool IsNarrowApplicable(int amount) => true;

    private static void NarrowFormation(LineFormation formation, int fileCountFromBothFlanks)
    {
      int fileCountFromLeftFlank = fileCountFromBothFlanks / 2;
      int fileCountFromRightFlank = fileCountFromBothFlanks / 2;
      if (fileCountFromBothFlanks % 2 != 0)
      {
        if (formation.FileCount % 2 == 0)
          ++fileCountFromRightFlank;
        else
          ++fileCountFromLeftFlank;
      }
      if (!formation.IsNarrowApplicable(fileCountFromLeftFlank + fileCountFromRightFlank))
        return;
      LineFormation.NarrowFormation(formation, fileCountFromLeftFlank, fileCountFromRightFlank);
    }

    private static bool ShiftUnitsBackwardsForNewUnavailableUnitPositions(LineFormation formation)
    {
      MBArrayList<Vec2i> mbArrayList = formation._toBeEmptiedOutUnitPositionsWorkspace.StartUsingWorkspace();
      for (int unitIndex = 0; unitIndex < formation.FileCount * formation.RankCount; ++unitIndex)
      {
        Vec2i unitPositionIndex = formation.GetOrderedUnitPositionIndex(unitIndex);
        if (formation._units2D[unitPositionIndex.Item1, unitPositionIndex.Item2] != null && !formation.IsUnitPositionAvailable(unitPositionIndex.Item1, unitPositionIndex.Item2))
          mbArrayList.Add(unitPositionIndex);
      }
      bool flag = mbArrayList.Count > 0;
      if (flag)
      {
        MBQueue<(IFormationUnit, int, int)> displacedUnits = formation._displacedUnitsWorkspace.StartUsingWorkspace();
        for (int index = mbArrayList.Count - 1; index >= 0; --index)
        {
          Vec2i vec2i = mbArrayList[index];
          IFormationUnit unit = formation._units2D[vec2i.Item1, vec2i.Item2];
          if (unit != null)
          {
            formation.RemoveUnit(unit, false, true);
            displacedUnits.Enqueue(ValueTuple.Create<IFormationUnit, int, int>(unit, vec2i.Item1, vec2i.Item2));
          }
        }
        LineFormation.DeepenForVacancy(formation, displacedUnits.Count, 0, 0);
        MBArrayList<Vec2i> finalOccupations = formation._finalOccupationsWorkspace.StartUsingWorkspace();
        int num = 0;
        for (int unitIndex = 0; unitIndex < formation.FileCount * formation.RankCount && num < displacedUnits.Count; ++unitIndex)
        {
          Vec2i unitPositionIndex = formation.GetOrderedUnitPositionIndex(unitIndex);
          if (formation._units2D[unitPositionIndex.Item1, unitPositionIndex.Item2] == null && formation.IsUnitPositionAvailable(unitPositionIndex.Item1, unitPositionIndex.Item2))
          {
            finalOccupations.Add(unitPositionIndex);
            ++num;
          }
        }
        LineFormation.ShiftUnitsBackwardsAux(formation, displacedUnits, finalOccupations);
        formation._displacedUnitsWorkspace.StopUsingWorkspace();
        formation._finalOccupationsWorkspace.StopUsingWorkspace();
      }
      formation._toBeEmptiedOutUnitPositionsWorkspace.StopUsingWorkspace();
      return flag;
    }

    private static void ShiftUnitsBackwardsForNarrowingFormation(
      LineFormation formation,
      int fileCountFromLeftFlank,
      int fileCountFromRightFlank)
    {
      MBQueue<(IFormationUnit, int, int)> displacedUnits = formation._displacedUnitsWorkspace.StartUsingWorkspace();
      foreach (Vec2i vec2i in formation.GetOrderedUnitPositionIndices().Where<Vec2i>((Func<Vec2i, bool>) (p => p.Item1 < fileCountFromLeftFlank || p.Item1 >= formation.FileCount - fileCountFromRightFlank)).Reverse<Vec2i>())
      {
        IFormationUnit unit = formation._units2D[vec2i.Item1, vec2i.Item2];
        if (unit != null)
        {
          formation.RemoveUnit(unit, false);
          displacedUnits.Enqueue(ValueTuple.Create<IFormationUnit, int, int>(unit, vec2i.Item1, vec2i.Item2));
        }
      }
      LineFormation.DeepenForVacancy(formation, displacedUnits.Count, fileCountFromLeftFlank, fileCountFromRightFlank);
      IEnumerable<Vec2i> list = LineFormation.GetOrderedUnitPositionIndicesAux(fileCountFromLeftFlank, formation.FileCount - 1 - fileCountFromRightFlank, 0, formation.RankCount - 1).Where<Vec2i>((Func<Vec2i, bool>) (p => formation._units2D[p.Item1, p.Item2] == null && formation.IsUnitPositionAvailable(p.Item1, p.Item2))).Take<Vec2i>(displacedUnits.Count);
      MBArrayList<Vec2i> finalOccupations = formation._finalOccupationsWorkspace.StartUsingWorkspace();
      finalOccupations.AddRange(list);
      LineFormation.ShiftUnitsBackwardsAux(formation, displacedUnits, finalOccupations);
      formation._displacedUnitsWorkspace.StopUsingWorkspace();
      formation._finalOccupationsWorkspace.StopUsingWorkspace();
    }

    private static void ShiftUnitsBackwardsAux(
      LineFormation formation,
      MBQueue<(IFormationUnit, int, int)> displacedUnits,
      MBArrayList<Vec2i> finalOccupations)
    {
      MBArrayList<Vec2i> mbArrayList = formation._filledInUnitPositionsWorkspace.StartUsingWorkspace();
      if (formation._shiftUnitsBackwardsPredicateDelegate == null)
        formation._shiftUnitsBackwardsPredicateDelegate = new Func<LineFormation, int, int, bool>(ShiftUnitsBackwardsPredicate);
      while (!displacedUnits.IsEmpty<(IFormationUnit, int, int)>())
      {
        (IFormationUnit unit1, int relocationFileIndex, int relocationRankIndex) = displacedUnits.Dequeue();
        Vec2i fillInFromNearby = LineFormation.GetUnitPositionForFillInFromNearby(formation, relocationFileIndex, relocationRankIndex, formation._shiftUnitsBackwardsPredicateDelegate, finalOccupations.Count == 1 ? finalOccupations[0] : LineFormation.InvalidPositionIndex, true);
        if (fillInFromNearby != LineFormation.InvalidPositionIndex)
        {
          IFormationUnit unit2 = formation._units2D[fillInFromNearby.Item1, fillInFromNearby.Item2];
          if (unit2 != null)
          {
            formation.RemoveUnit(unit2, false);
            displacedUnits.Enqueue(ValueTuple.Create<IFormationUnit, int, int>(unit2, fillInFromNearby.Item1, fillInFromNearby.Item2));
          }
          mbArrayList.Add(fillInFromNearby);
          formation.InsertUnit(unit1, fillInFromNearby.Item1, fillInFromNearby.Item2);
        }
        else
        {
          float num1 = float.MaxValue;
          Vec2i vec2i = LineFormation.InvalidPositionIndex;
          for (int index = 0; index < finalOccupations.Count; ++index)
          {
            if (mbArrayList.IndexOf(finalOccupations[index]) < 0)
            {
              float num2 = (float) (MathF.Abs(finalOccupations[index].Item1 - relocationFileIndex) + MathF.Abs(finalOccupations[index].Item2 - relocationRankIndex));
              if ((double) num2 < (double) num1)
              {
                num1 = num2;
                vec2i = finalOccupations[index];
              }
            }
          }
          if (vec2i != LineFormation.InvalidPositionIndex)
          {
            mbArrayList.Add(vec2i);
            formation.InsertUnit(unit1, vec2i.Item1, vec2i.Item2);
          }
          else
          {
            formation._unpositionedUnits.Add(unit1);
            formation.ReconstructUnitsFromUnits2D();
          }
        }
      }
      formation._filledInUnitPositionsWorkspace.StopUsingWorkspace();

      bool ShiftUnitsBackwardsPredicate(LineFormation localFormation, int fileIndex, int rankIndex)
      {
        Vec2i vec2i = new Vec2i(fileIndex, rankIndex);
        return (localFormation._units2D[fileIndex, rankIndex] != null || localFormation._finalOccupationsWorkspace.GetWorkspace().IndexOf(vec2i) >= 0) && !localFormation._filledInUnitPositionsWorkspace.GetWorkspace().Contains(vec2i);
      }
    }

    private static void NarrowFormation(
      LineFormation formation,
      int fileCountFromLeftFlank,
      int fileCountFromRightFlank)
    {
      LineFormation.ShiftUnitsBackwardsForNarrowingFormation(formation, fileCountFromLeftFlank, fileCountFromRightFlank);
      LineFormation.NarrowFormationAux(formation, fileCountFromLeftFlank, fileCountFromRightFlank);
    }

    private static void NarrowFormationAux(
      LineFormation formation,
      int fileCountFromLeftFlank,
      int fileCountFromRightFlank)
    {
      formation._units2DWorkspace.ResetWithNewCount(formation.FileCount - fileCountFromLeftFlank - fileCountFromRightFlank, formation.RankCount);
      formation._unitPositionAvailabilitiesWorkspace.ResetWithNewCount(formation.FileCount - fileCountFromLeftFlank - fileCountFromRightFlank, formation.RankCount);
      formation._globalPositionsWorkspace.ResetWithNewCount(formation.FileCount - fileCountFromLeftFlank - fileCountFromRightFlank, formation.RankCount);
      for (int index = fileCountFromLeftFlank; index < formation.FileCount - fileCountFromRightFlank; ++index)
      {
        int destinationIndex1 = index - fileCountFromLeftFlank;
        formation._units2D.CopyRowTo(index, 0, formation._units2DWorkspace, destinationIndex1, 0, formation.RankCount);
        formation.UnitPositionAvailabilities.CopyRowTo(index, 0, formation._unitPositionAvailabilitiesWorkspace, destinationIndex1, 0, formation.RankCount);
        formation._globalPositions.CopyRowTo(index, 0, formation._globalPositionsWorkspace, destinationIndex1, 0, formation.RankCount);
        if (fileCountFromLeftFlank > 0)
        {
          for (int index2 = 0; index2 < formation.RankCount; ++index2)
          {
            if (formation._units2D[index, index2] != null)
              formation._units2D[index, index2].FormationFileIndex -= fileCountFromLeftFlank;
          }
        }
      }
      MBList2D<IFormationUnit> units2D = formation._units2D;
      formation._units2D = formation._units2DWorkspace;
      formation._units2DWorkspace = units2D;
      formation.ReconstructUnitsFromUnits2D();
      MBList2D<int> positionAvailabilities = formation.UnitPositionAvailabilities;
      formation.UnitPositionAvailabilities = formation._unitPositionAvailabilitiesWorkspace;
      formation._unitPositionAvailabilitiesWorkspace = positionAvailabilities;
      MBList2D<WorldPosition> globalPositions = formation._globalPositions;
      formation._globalPositions = formation._globalPositionsWorkspace;
      formation._globalPositionsWorkspace = globalPositions;
      formation.BatchUnitPositionAvailabilities();
      Action onShapeChanged = formation.OnShapeChanged;
      if (onShapeChanged != null)
        onShapeChanged();
      if (!formation._isDeformingOnWidthChange && (fileCountFromLeftFlank + fileCountFromRightFlank) % 2 != 1)
        return;
      formation.OnFormationFrameChanged();
    }

    private static void ShortenFormation(LineFormation formation, int front, int rear)
    {
      formation._units2DWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount - front - rear);
      formation._unitPositionAvailabilitiesWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount - front - rear);
      formation._globalPositionsWorkspace.ResetWithNewCount(formation.FileCount, formation.RankCount - front - rear);
      for (int index = 0; index < formation.FileCount; ++index)
      {
        formation._units2D.CopyRowTo(index, front, formation._units2DWorkspace, index, 0, formation.RankCount - rear - front);
        formation.UnitPositionAvailabilities.CopyRowTo(index, front, formation._unitPositionAvailabilitiesWorkspace, index, 0, formation.RankCount - rear - front);
        formation._globalPositions.CopyRowTo(index, front, formation._globalPositionsWorkspace, index, 0, formation.RankCount - rear - front);
        if (front > 0)
        {
          for (int index2 = front; index2 < formation.RankCount - rear; ++index2)
          {
            if (formation._units2D[index, index2] != null)
              formation._units2D[index, index2].FormationRankIndex -= front;
          }
        }
      }
      MBList2D<IFormationUnit> units2D = formation._units2D;
      formation._units2D = formation._units2DWorkspace;
      formation._units2DWorkspace = units2D;
      formation.ReconstructUnitsFromUnits2D();
      MBList2D<int> positionAvailabilities = formation.UnitPositionAvailabilities;
      formation.UnitPositionAvailabilities = formation._unitPositionAvailabilitiesWorkspace;
      formation._unitPositionAvailabilitiesWorkspace = positionAvailabilities;
      MBList2D<WorldPosition> globalPositions = formation._globalPositions;
      formation._globalPositions = formation._globalPositionsWorkspace;
      formation._globalPositionsWorkspace = globalPositions;
      formation.BatchUnitPositionAvailabilities();
      Action onShapeChanged = formation.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    private void Shorten() => LineFormation.ShortenFormation(this, 0, 1);

    private void GetFrontAndRearOfFile(
      int fileIndex,
      out bool isFileEmtpy,
      out int rankIndexOfFront,
      out int rankIndexOfRear,
      bool includeUnavailablePositions = false)
    {
      rankIndexOfFront = -1;
      rankIndexOfRear = this.RankCount;
      for (int index2 = 0; index2 < this.RankCount; ++index2)
      {
        if (this._units2D[fileIndex, index2] != null)
        {
          rankIndexOfFront = index2;
          break;
        }
      }
      if (includeUnavailablePositions)
      {
        if (rankIndexOfFront != -1)
        {
          for (int rankIndex = rankIndexOfFront - 1; rankIndex >= 0 && !this.IsUnitPositionAvailable(fileIndex, rankIndex); --rankIndex)
            rankIndexOfFront = rankIndex;
        }
        else
        {
          bool flag = true;
          for (int rankIndex = 0; rankIndex < this.RankCount; ++rankIndex)
          {
            if (this.IsUnitPositionAvailable(fileIndex, rankIndex))
            {
              flag = false;
              break;
            }
          }
          if (flag)
            rankIndexOfFront = 0;
        }
      }
      for (int index2 = this.RankCount - 1; index2 >= 0; --index2)
      {
        if (this._units2D[fileIndex, index2] != null)
        {
          rankIndexOfRear = index2;
          break;
        }
      }
      if (includeUnavailablePositions)
      {
        if (rankIndexOfRear != this.RankCount)
        {
          for (int rankIndex = rankIndexOfRear + 1; rankIndex < this.RankCount && !this.IsUnitPositionAvailable(fileIndex, rankIndex); ++rankIndex)
            rankIndexOfRear = rankIndex;
        }
        else
        {
          bool flag = true;
          for (int rankIndex = 0; rankIndex < this.RankCount; ++rankIndex)
          {
            if (this.IsUnitPositionAvailable(fileIndex, rankIndex))
            {
              flag = false;
              break;
            }
          }
          if (flag)
            rankIndexOfRear = this.RankCount - 1;
        }
      }
      if (rankIndexOfFront == -1 && rankIndexOfRear == this.RankCount)
        isFileEmtpy = true;
      else
        isFileEmtpy = false;
    }

    private void GetFlanksOfRank(
      int rankIndex,
      out bool isRankEmpty,
      out int fileIndexOfLeftFlank,
      out int fileIndexOfRightFlank,
      bool includeUnavailablePositions = false)
    {
      fileIndexOfLeftFlank = -1;
      fileIndexOfRightFlank = this.FileCount;
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, rankIndex] != null)
        {
          fileIndexOfLeftFlank = index1;
          break;
        }
      }
      if (includeUnavailablePositions)
      {
        if (fileIndexOfLeftFlank != -1)
        {
          for (int fileIndex = fileIndexOfLeftFlank - 1; fileIndex >= 0 && !this.IsUnitPositionAvailable(fileIndex, rankIndex); --fileIndex)
            fileIndexOfLeftFlank = fileIndex;
        }
        else
        {
          bool flag = true;
          for (int fileIndex = 0; fileIndex < this.FileCount; ++fileIndex)
          {
            if (this.IsUnitPositionAvailable(fileIndex, rankIndex))
            {
              flag = false;
              break;
            }
          }
          if (flag)
            fileIndexOfLeftFlank = 0;
        }
      }
      for (int index1 = this.FileCount - 1; index1 >= 0; --index1)
      {
        if (this._units2D[index1, rankIndex] != null)
        {
          fileIndexOfRightFlank = index1;
          break;
        }
      }
      if (includeUnavailablePositions)
      {
        if (fileIndexOfRightFlank != this.FileCount)
        {
          for (int fileIndex = fileIndexOfRightFlank + 1; fileIndex < this.FileCount && !this.IsUnitPositionAvailable(fileIndex, rankIndex); ++fileIndex)
            fileIndexOfRightFlank = fileIndex;
        }
        else
        {
          bool flag = true;
          for (int fileIndex = 0; fileIndex < this.FileCount; ++fileIndex)
          {
            if (this.IsUnitPositionAvailable(fileIndex, rankIndex))
            {
              flag = false;
              break;
            }
          }
          if (flag)
            fileIndexOfRightFlank = this.FileCount - 1;
        }
      }
      if (fileIndexOfLeftFlank == -1 && fileIndexOfRightFlank == this.FileCount)
        isRankEmpty = true;
      else
        isRankEmpty = false;
    }

    private static void FillInTheGapsOfFile(
      LineFormation formation,
      int fileIndex,
      int rankIndex = 0,
      bool isCheckingLastRankForEmptiness = true)
    {
      LineFormation.FillInTheGapsOfFileAux(formation, fileIndex, rankIndex);
      while (isCheckingLastRankForEmptiness && formation.RankCount > 1 && formation.IsRankEmpty(formation.RankCount - 1))
        formation.Shorten();
    }

    private static void FillInTheGapsOfFileAux(
      LineFormation formation,
      int fileIndex,
      int rankIndex)
    {
      while (true)
      {
        int rankIndex1 = -1;
        for (; rankIndex < formation.RankCount - 1; ++rankIndex)
        {
          if (formation._units2D[fileIndex, rankIndex] == null && formation.IsUnitPositionAvailable(fileIndex, rankIndex))
          {
            rankIndex1 = rankIndex;
            break;
          }
        }
        int index2 = -1;
        for (; rankIndex < formation.RankCount; ++rankIndex)
        {
          if (formation._units2D[fileIndex, rankIndex] != null)
          {
            index2 = rankIndex;
            break;
          }
        }
        if (rankIndex1 != -1 && index2 != -1)
        {
          formation.RelocateUnit(formation._units2D[fileIndex, index2], fileIndex, rankIndex1);
          rankIndex = rankIndex1 + 1;
        }
        else
          break;
      }
    }

    private static void FillInTheGapsOfMiddleRanks(
      LineFormation formation,
      List<IFormationUnit> relocatedUnits = null)
    {
      int num1 = formation.RankCount - 1;
label_18:
      for (int index = 0; index < formation.FileCount; ++index)
      {
        if (formation._units2D[index, num1] == null && !formation.IsFileFullyOccupied(index))
        {
          while (true)
          {
            do
            {
              bool isFileEmtpy;
              int rankIndexOfRear;
              formation.GetFrontAndRearOfFile(index, out isFileEmtpy, out int _, out rankIndexOfRear, true);
              if (rankIndexOfRear != num1)
              {
                int num2 = rankIndexOfRear + 1;
                if (isFileEmtpy)
                {
                  num2 = -1;
                  for (int rankIndex = 0; rankIndex < formation.RankCount; ++rankIndex)
                  {
                    if (formation.IsUnitPositionAvailable(index, rankIndex))
                    {
                      num2 = rankIndex;
                      break;
                    }
                  }
                }
                IFormationUnit unitToFillIn = LineFormation.GetUnitToFillIn(formation, index, num2);
                if (unitToFillIn != null)
                {
                  formation.RelocateUnit(unitToFillIn, index, num2);
                  relocatedUnits?.Add(unitToFillIn);
                }
                else
                {
                  int num3 = num2 + 1;
                  while (num3 < formation.RankCount)
                    ++num3;
                  goto label_18;
                }
              }
              else
                goto label_18;
            }
            while (!formation.IsRankEmpty(num1));
            formation.Shorten();
            num1 = formation.RankCount - 1;
          }
        }
      }
      while (formation.RankCount > 1 && formation.IsRankEmpty(formation.RankCount - 1))
        formation.Shorten();
      LineFormation.AlignLastRank(formation);
    }

    private static void AlignRankToLeft(LineFormation formation, int fileIndex, int rankIndex)
    {
      int fileIndex1 = -1;
      for (; fileIndex < formation.FileCount - 1; ++fileIndex)
      {
        if (formation._units2D[fileIndex, rankIndex] == null && formation.IsUnitPositionAvailable(fileIndex, rankIndex))
        {
          fileIndex1 = fileIndex;
          break;
        }
      }
      int index1 = -1;
      for (; fileIndex < formation.FileCount; ++fileIndex)
      {
        if (formation._units2D[fileIndex, rankIndex] != null)
        {
          index1 = fileIndex;
          break;
        }
      }
      if (fileIndex1 == -1 || index1 == -1)
        return;
      formation.RelocateUnit(formation._units2D[index1, rankIndex], fileIndex1, rankIndex);
      LineFormation.AlignRankToLeft(formation, fileIndex1 + 1, rankIndex);
    }

    private static void AlignRankToRight(LineFormation formation, int fileIndex, int rankIndex)
    {
      int fileIndex1 = -1;
      for (; fileIndex > 0; --fileIndex)
      {
        if (formation._units2D[fileIndex, rankIndex] == null && formation.IsUnitPositionAvailable(fileIndex, rankIndex))
        {
          fileIndex1 = fileIndex;
          break;
        }
      }
      int index1 = -1;
      for (; fileIndex >= 0; --fileIndex)
      {
        if (formation._units2D[fileIndex, rankIndex] != null)
        {
          index1 = fileIndex;
          break;
        }
      }
      if (fileIndex1 == -1 || index1 == -1)
        return;
      formation.RelocateUnit(formation._units2D[index1, rankIndex], fileIndex1, rankIndex);
      LineFormation.AlignRankToRight(formation, fileIndex1 - 1, rankIndex);
    }

    private static void AlignLastRank(LineFormation formation)
    {
      int num = formation.RankCount - 1;
      bool isRankEmpty;
      int fileIndexOfLeftFlank1;
      int fileIndexOfRightFlank1;
      formation.GetFlanksOfRank(num, out isRankEmpty, out fileIndexOfLeftFlank1, out fileIndexOfRightFlank1, true);
      if (num == 0 & isRankEmpty)
        return;
      LineFormation.AlignRankToLeft(formation, fileIndexOfLeftFlank1, num);
      bool flag1 = false;
      bool flag2 = false;
      while (true)
      {
        formation.GetFlanksOfRank(num, out isRankEmpty, out fileIndexOfLeftFlank1, out fileIndexOfRightFlank1, true);
        if (!flag1 && fileIndexOfLeftFlank1 < formation.FileCount - fileIndexOfRightFlank1 - 1 - 1)
        {
          int fileIndexOfRightFlank2;
          formation.GetFlanksOfRank(num, out isRankEmpty, out int _, out fileIndexOfRightFlank2);
          formation.RelocateUnit(formation._units2D[fileIndexOfRightFlank2, num], fileIndexOfRightFlank1 + 1, num);
          LineFormation.AlignRankToRight(formation, fileIndexOfRightFlank1 + 1, num);
          flag2 = true;
        }
        else if (!flag2 && fileIndexOfLeftFlank1 - 1 > formation.FileCount - fileIndexOfRightFlank1 - 1)
        {
          int fileIndexOfLeftFlank2;
          formation.GetFlanksOfRank(num, out isRankEmpty, out fileIndexOfLeftFlank2, out int _);
          formation.RelocateUnit(formation._units2D[fileIndexOfLeftFlank2, num], fileIndexOfLeftFlank1 - 1, num);
          LineFormation.AlignRankToLeft(formation, fileIndexOfLeftFlank1 - 1, num);
          flag1 = true;
        }
        else
          break;
      }
    }

    private int CountUnitsAtRank(int rankIndex)
    {
      int num = 0;
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, rankIndex] != null)
          ++num;
      }
      return num;
    }

    private bool IsRankEmpty(int rankIndex)
    {
      for (int index1 = 0; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, rankIndex] != null)
          return false;
      }
      return true;
    }

    private bool IsFileFullyOccupied(int fileIndex)
    {
      bool flag = true;
      for (int index = 0; index < this.RankCount; ++index)
      {
        if (this._units2D[fileIndex, index] == null && this.IsUnitPositionAvailable(fileIndex, index))
        {
          flag = false;
          break;
        }
      }
      return flag;
    }

    private bool IsRankFullyOccupied(int rankIndex)
    {
      bool flag = true;
      for (int index = 0; index < this.FileCount; ++index)
      {
        if (this._units2D[index, rankIndex] == null && this.IsUnitPositionAvailable(index, rankIndex))
        {
          flag = false;
          break;
        }
      }
      return flag;
    }

    private static IFormationUnit GetUnitToFillIn(
      LineFormation formation,
      int relocationFileIndex,
      int relocationRankIndex)
    {
      for (int index = formation.RankCount - 1; index >= 0; --index)
      {
        if (relocationRankIndex == index)
          return (IFormationUnit) null;
        bool isRankEmpty;
        int fileIndexOfLeftFlank;
        int fileIndexOfRightFlank;
        formation.GetFlanksOfRank(index, out isRankEmpty, out fileIndexOfLeftFlank, out fileIndexOfRightFlank);
        if (!isRankEmpty)
          return relocationFileIndex > fileIndexOfRightFlank || relocationFileIndex >= fileIndexOfLeftFlank && fileIndexOfRightFlank - relocationFileIndex <= relocationFileIndex - fileIndexOfLeftFlank ? formation._units2D[fileIndexOfRightFlank, index] : formation._units2D[fileIndexOfLeftFlank, index];
      }
      TaleWorlds.Library.Debug.FailedAssert("This line should not be reached.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Formation\\LineFormation.cs", nameof (GetUnitToFillIn), 3161);
      return (IFormationUnit) null;
    }

    protected void RelocateUnit(IFormationUnit unit, int fileIndex, int rankIndex)
    {
      this._units2D[unit.FormationFileIndex, unit.FormationRankIndex] = (IFormationUnit) null;
      this._units2D[fileIndex, rankIndex] = unit;
      this.ReconstructUnitsFromUnits2D();
      unit.FormationFileIndex = fileIndex;
      unit.FormationRankIndex = rankIndex;
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public int UnitCount => this.GetAllUnits().Count;

    public int PositionedUnitCount => this.UnitCount - this._unpositionedUnits.Count;

    public IFormationUnit GetPlayerUnit()
    {
      return this._allUnits.FirstOrDefault<IFormationUnit>((Func<IFormationUnit, bool>) (unit => unit.IsPlayerUnit));
    }

    public MBReadOnlyList<IFormationUnit> GetAllUnits()
    {
      return (MBReadOnlyList<IFormationUnit>) this._allUnits;
    }

    public MBList<IFormationUnit> GetUnpositionedUnits() => this._unpositionedUnits;

    public Vec2? GetLocalDirectionOfRelativeFormationLocation(IFormationUnit unit)
    {
      if (this._unpositionedUnits.Contains(unit))
        return new Vec2?();
      Vec2 vec2 = new Vec2((float) unit.FormationFileIndex, (float) -unit.FormationRankIndex) - new Vec2((float) (this.FileCount - 1) * 0.5f, (float) (this.RankCount - 1) * -0.5f);
      double num = (double) vec2.Normalize();
      return new Vec2?(vec2);
    }

    public Vec2? GetLocalWallDirectionOfRelativeFormationLocation(IFormationUnit unit)
    {
      if (this._unpositionedUnits.Contains(unit))
        return new Vec2?();
      Vec2 vec2 = new Vec2((float) unit.FormationFileIndex, (float) -unit.FormationRankIndex) - new Vec2((float) (this.FileCount - 1) * 0.5f, (float) -this.RankCount);
      double num = (double) vec2.Normalize();
      return new Vec2?(vec2);
    }

    public void GetFormationInfo(out int fileCount, out int rankCount)
    {
      fileCount = this.FileCount;
      rankCount = this.RankCount;
    }

    [Conditional("DEBUG")]
    private void AssertUnit(IFormationUnit unit, bool isAssertingUnitPositionAvailability = true)
    {
      if (!isAssertingUnitPositionAvailability)
        return;
      this.IsUnitPositionRestrained(unit.FormationFileIndex, unit.FormationRankIndex);
      int num = !this._isMiddleFrontUnitPositionReserved || this.GetMiddleFrontUnitPosition().Item1 != unit.FormationFileIndex ? 0 : (this.GetMiddleFrontUnitPosition().Item2 == unit.FormationRankIndex ? 1 : 0);
      this.IsUnitPositionAvailable(unit.FormationFileIndex, unit.FormationRankIndex);
    }

    [Conditional("DEBUG")]
    private void AssertUnpositionedUnit(IFormationUnit unit)
    {
    }

    public float GetUnitsDistanceToFrontLine(IFormationUnit unit)
    {
      return this._unpositionedUnits.Contains(unit) ? -1f : (float) ((double) unit.FormationRankIndex * ((double) this.Distance + (double) this.UnitDiameter) + (double) this.UnitDiameter * 0.5);
    }

    public IFormationUnit GetNeighborUnitOfLeftSide(IFormationUnit unit)
    {
      if (this._unpositionedUnits.Contains(unit))
        return (IFormationUnit) null;
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
      if (this._unpositionedUnits.Contains(unit))
        return (IFormationUnit) null;
      int formationRankIndex = unit.FormationRankIndex;
      for (int index1 = unit.FormationFileIndex + 1; index1 < this.FileCount; ++index1)
      {
        if (this._units2D[index1, formationRankIndex] != null)
          return this._units2D[index1, formationRankIndex];
      }
      return (IFormationUnit) null;
    }

    public void SwitchUnitLocationsWithUnpositionedUnit(
      IFormationUnit firstUnit,
      IFormationUnit secondUnit)
    {
      int formationFileIndex = firstUnit.FormationFileIndex;
      int formationRankIndex = firstUnit.FormationRankIndex;
      this._unpositionedUnits.Remove(secondUnit);
      this._units2D[formationFileIndex, formationRankIndex] = secondUnit;
      secondUnit.FormationFileIndex = formationFileIndex;
      secondUnit.FormationRankIndex = formationRankIndex;
      firstUnit.FormationFileIndex = -1;
      firstUnit.FormationRankIndex = -1;
      this._unpositionedUnits.Add(firstUnit);
      this.ReconstructUnitsFromUnits2D();
      Action onShapeChanged = this.OnShapeChanged;
      if (onShapeChanged == null)
        return;
      onShapeChanged();
    }

    public void SwitchUnitLocations(IFormationUnit firstUnit, IFormationUnit secondUnit)
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

    public void SwitchUnitLocationsWithBackMostUnit(IFormationUnit unit)
    {
      IFormationUnit lastUnit = this.GetLastUnit();
      if (lastUnit == null || unit == null || unit == lastUnit)
        return;
      this.SwitchUnitLocations(unit, lastUnit);
    }

    public void BeforeFormationFrameChange()
    {
    }

    public void BatchUnitPositionAvailabilities(bool isUpdatingCachedOrderedLocalPositions = true)
    {
      if (isUpdatingCachedOrderedLocalPositions)
        this.AreLocalPositionsDirty = true;
      bool localPositionsDirty = this.AreLocalPositionsDirty;
      this.AreLocalPositionsDirty = false;
      if (localPositionsDirty)
      {
        this._cachedOrderedUnitPositionIndices.Clear();
        for (int unitIndex = 0; unitIndex < this.FileCount * this.RankCount; ++unitIndex)
          this._cachedOrderedUnitPositionIndices.Add(this.GetOrderedUnitPositionIndex(unitIndex));
        this._cachedOrderedLocalPositions.Clear();
        for (int index = 0; index < this._cachedOrderedUnitPositionIndices.Count; ++index)
        {
          Vec2i unitPositionIndex = this._cachedOrderedUnitPositionIndices[index];
          this._cachedOrderedLocalPositions.Add(this.GetLocalPositionOfUnit(unitPositionIndex.Item1, unitPositionIndex.Item2));
        }
      }
      this.MakeRestrainedPositionsUnavailable();
      if (!this.owner.BatchUnitPositions(this._cachedOrderedUnitPositionIndices, this._cachedOrderedLocalPositions, this.UnitPositionAvailabilities, this._globalPositions, this.FileCount, this.RankCount))
      {
        for (int index1 = 0; index1 < this.FileCount; ++index1)
        {
          for (int index2 = 0; index2 < this.RankCount; ++index2)
            this.UnitPositionAvailabilities[index1, index2] = 1;
        }
      }
      if (localPositionsDirty)
      {
        this._cachedOrderedAndAvailableUnitPositionIndices.Clear();
        for (int index = 0; index < this._cachedOrderedUnitPositionIndices.Count; ++index)
        {
          Vec2i unitPositionIndex = this._cachedOrderedUnitPositionIndices[index];
          if (this.UnitPositionAvailabilities[unitPositionIndex.Item1, unitPositionIndex.Item2] == 2)
            this._cachedOrderedAndAvailableUnitPositionIndices.Add(unitPositionIndex);
        }
      }
      this._isCavalry = this.owner is Formation owner && owner.CalculateHasSignificantNumberOfMounted;
    }

    public void OnFormationFrameChanged()
    {
      this.UnitPositionAvailabilities.Clear();
      this.BatchUnitPositionAvailabilities(false);
      bool flag1 = LineFormation.ShiftUnitsBackwardsForNewUnavailableUnitPositions(this);
      for (int fileIndex = 0; fileIndex < this.FileCount; ++fileIndex)
        LineFormation.FillInTheGapsOfFile(this, fileIndex, isCheckingLastRankForEmptiness: fileIndex == this.FileCount - 1);
      int num = flag1 ? 1 : 0;
      bool flag2 = this.TryReaddingUnpositionedUnits();
      if (num != 0 && !flag2)
        this.owner.OnUnitAddedOrRemoved();
      LineFormation.FillInTheGapsOfMiddleRanks(this);
    }

    private bool TryReaddingUnpositionedUnits()
    {
      bool flag = this._unpositionedUnits.Count > 0;
      int index;
      for (int a = this._unpositionedUnits.Count - 1; a >= 0; a = index - 1)
      {
        index = MathF.Min(a, this._unpositionedUnits.Count - 1);
        if (index >= 0)
        {
          IFormationUnit unpositionedUnit = this._unpositionedUnits[index];
          this.RemoveUnit(unpositionedUnit);
          if (!this.AddUnit(unpositionedUnit))
            break;
        }
        else
          break;
      }
      if (flag)
        this.owner.OnUnitAddedOrRemoved();
      return flag;
    }

    private bool AreLastRanksCompletelyUnavailable(int numberOfRanksToCheck = 3)
    {
      bool flag = true;
      if (this.RankCount < numberOfRanksToCheck)
      {
        flag = false;
      }
      else
      {
        for (int fileIndex = 0; fileIndex < this.FileCount; ++fileIndex)
        {
          for (int rankIndex = this.RankCount - numberOfRanksToCheck; rankIndex < this.RankCount; ++rankIndex)
          {
            if (this.IsUnitPositionAvailable(fileIndex, rankIndex))
            {
              fileIndex = 2147483646;
              flag = false;
              break;
            }
          }
        }
      }
      return flag;
    }

    [Conditional("DEBUG")]
    private void AssertUnitPositions()
    {
      for (int index1 = 0; index1 < this._units2D.Count1; ++index1)
      {
        for (int index2 = 0; index2 < this._units2D.Count2; ++index2)
        {
          IFormationUnit formationUnit = this._units2D[index1, index2];
        }
      }
      foreach (IFormationUnit unpositionedUnit in (List<IFormationUnit>) this._unpositionedUnits)
        ;
    }

    [Conditional("DEBUG")]
    private void AssertFilePositions(int fileIndex)
    {
      bool isFileEmtpy;
      int rankIndexOfFront;
      int rankIndexOfRear;
      this.GetFrontAndRearOfFile(fileIndex, out isFileEmtpy, out rankIndexOfFront, out rankIndexOfRear, true);
      if (isFileEmtpy)
        return;
      int num = rankIndexOfFront;
      while (num <= rankIndexOfRear)
        ++num;
    }

    [Conditional("DEBUG")]
    private void AssertRankPositions(int rankIndex)
    {
      bool isRankEmpty;
      int fileIndexOfLeftFlank;
      int fileIndexOfRightFlank;
      this.GetFlanksOfRank(rankIndex, out isRankEmpty, out fileIndexOfLeftFlank, out fileIndexOfRightFlank, true);
      if (isRankEmpty)
        return;
      int num = fileIndexOfLeftFlank;
      while (num <= fileIndexOfRightFlank)
        ++num;
    }

    public void OnFormationDispersed()
    {
      IEnumerable<Vec2i> vec2is = this.GetOrderedUnitPositionIndices().Where<Vec2i>((Func<Vec2i, bool>) (i => this.IsUnitPositionAvailable(i.Item1, i.Item2)));
      MBList<IFormationUnit> mbList = this.GetAllUnits().ToMBList<IFormationUnit>();
      foreach (Vec2i vec2i in vec2is)
      {
        int num1 = vec2i.Item1;
        int num2 = vec2i.Item2;
        IFormationUnit firstUnit = this._units2D[num1, num2];
        if (firstUnit != null)
        {
          IFormationUnit closestUnitTo = this.owner.GetClosestUnitTo(this.GetLocalPositionOfUnit(num1, num2), mbList);
          mbList[mbList.IndexOf(closestUnitTo)] = (IFormationUnit) null;
          if (firstUnit != closestUnitTo)
          {
            if (closestUnitTo.FormationFileIndex == -1)
              this.SwitchUnitLocationsWithUnpositionedUnit(firstUnit, closestUnitTo);
            else
              this.SwitchUnitLocations(firstUnit, closestUnitTo);
          }
        }
      }
    }

    public void OnUnitLostMount(IFormationUnit unit)
    {
    }

    public bool IsTurnBackwardsNecessary(
      Vec2 previousPosition,
      WorldPosition? newPosition,
      Vec2 previousDirection,
      bool hasNewDirection,
      Vec2? newDirection)
    {
      return hasNewDirection && (double) MathF.Abs(MBMath.GetSmallestDifferenceBetweenTwoAngles(newDirection.Value.RotationInRadians, previousDirection.RotationInRadians)) >= 2.3561944961547852;
    }

    public virtual void TurnBackwards()
    {
      for (int index1 = 0; index1 <= this.FileCount / 2; ++index1)
      {
        int num1 = index1;
        int num2 = this.FileCount - 1 - index1;
        for (int index2 = 0; index2 < this.RankCount; ++index2)
        {
          int num3 = index2;
          int num4 = this.RankCount - 1 - index2;
          IFormationUnit formationUnit1 = this._units2D[num1, num3];
          IFormationUnit formationUnit2 = this._units2D[num2, num4];
          if (formationUnit1 != formationUnit2)
          {
            if (formationUnit1 != null && formationUnit2 != null)
              this.SwitchUnitLocations(formationUnit1, formationUnit2);
            else if (formationUnit1 != null)
            {
              if (this.IsUnitPositionAvailable(num2, num4))
                this.RelocateUnit(formationUnit1, num2, num4);
            }
            else if (formationUnit2 != null && this.IsUnitPositionAvailable(num1, num3))
              this.RelocateUnit(formationUnit2, num1, num3);
          }
        }
      }
    }

    public float GetOccupationWidth(int unitCount)
    {
      if (unitCount < 1)
        return 0.0f;
      int num1 = this.FileCount - 1;
      int num2 = 0;
      for (int unitIndex = 0; unitIndex < this.FileCount * this.RankCount; ++unitIndex)
      {
        Vec2i unitPositionIndex = this.GetOrderedUnitPositionIndex(unitIndex);
        if (unitPositionIndex.Item1 < num1)
          num1 = unitPositionIndex.Item1;
        if (unitPositionIndex.Item1 > num2)
          num2 = unitPositionIndex.Item1;
        if (this.IsUnitPositionAvailable(unitPositionIndex.Item1, unitPositionIndex.Item2))
        {
          --unitCount;
          if (unitCount == 0)
            break;
        }
      }
      return (float) (num2 - num1) * (this.Interval + this.UnitDiameter) + this.UnitDiameter;
    }

    public void InvalidateCacheOfUnitAux(Vec2 roundedLocalPosition)
    {
      int fileIndex;
      int rankIndex;
      if (!this.TryGetUnitPositionIndexFromLocalPosition(roundedLocalPosition, out fileIndex, out rankIndex))
        return;
      this.UnitPositionAvailabilities[fileIndex, rankIndex] = 0;
    }

    public Vec2? CreateNewPosition(int unitIndex)
    {
      Vec2? newPosition = new Vec2?();
      for (int index = 100; !newPosition.HasValue && index > 0 && !this.AreLastRanksCompletelyUnavailable() && this.IsDeepenApplicable(); --index)
      {
        this.Deepen();
        newPosition = this.GetLocalPositionOfUnitOrDefault(unitIndex);
      }
      return newPosition;
    }

    public virtual void RearrangeFrom(IFormationArrangement arrangement)
    {
      this.BatchUnitPositionAvailabilities();
    }

    public virtual void RearrangeTo(IFormationArrangement arrangement)
    {
      if (!(arrangement is ColumnFormation))
        return;
      this.IsTransforming = true;
      this.ReleaseMiddleFrontUnitPosition();
    }

    public virtual void RearrangeTransferUnits(IFormationArrangement arrangement)
    {
      if (arrangement is LineFormation lineFormation)
      {
        lineFormation._units2D = this._units2D;
        lineFormation._allUnits = this._allUnits;
        lineFormation.UnitPositionAvailabilities = this.UnitPositionAvailabilities;
        lineFormation._globalPositions = this._globalPositions;
        lineFormation._unpositionedUnits = this._unpositionedUnits;
        lineFormation.AreLocalPositionsDirty = true;
        lineFormation.OnFormationFrameChanged();
      }
      else
      {
        for (int unitIndex = 0; unitIndex < this.FileCount * this.RankCount; ++unitIndex)
        {
          Vec2i unitPositionIndex = this.GetOrderedUnitPositionIndex(unitIndex);
          IFormationUnit unit = this._units2D[unitPositionIndex.Item1, unitPositionIndex.Item2];
          if (unit != null)
          {
            unit.FormationFileIndex = -1;
            unit.FormationRankIndex = -1;
            arrangement.AddUnit(unit);
          }
        }
        foreach (IFormationUnit unpositionedUnit in (List<IFormationUnit>) this._unpositionedUnits)
          arrangement.AddUnit(unpositionedUnit);
      }
    }

    public static float CalculateWidth(float interval, float unitDiameter, int unitCountOnLine)
    {
      return (float) MathF.Max(0, unitCountOnLine - 1) * (interval + unitDiameter) + unitDiameter;
    }

    public void FormFromFlankWidth(int unitCountOnLine, bool skipSingleFileChangesForPerformance = false)
    {
      if (skipSingleFileChangesForPerformance && MathF.Abs(this.FileCount - unitCountOnLine) <= 1)
        return;
      this.FlankWidth = LineFormation.CalculateWidth(this.Interval, this.UnitDiameter, unitCountOnLine);
    }

    public void ReserveMiddleFrontUnitPosition(IFormationUnit vanguard)
    {
      this._isMiddleFrontUnitPositionReserved = true;
      this.OnFormationFrameChanged();
    }

    public void ReleaseMiddleFrontUnitPosition()
    {
      this._isMiddleFrontUnitPositionReserved = false;
      this.OnFormationFrameChanged();
    }

    private Vec2i GetMiddleFrontUnitPosition() => this.GetOrderedUnitPositionIndex(0);

    public Vec2 GetLocalPositionOfReservedUnitPosition()
    {
      Vec2i frontUnitPosition = this.GetMiddleFrontUnitPosition();
      return this.GetLocalPositionOfUnit(frontUnitPosition.Item1, frontUnitPosition.Item2);
    }

    public virtual void OnTickOccasionallyOfUnit(IFormationUnit unit, bool arrangementChangeAllowed)
    {
      if (!arrangementChangeAllowed || !(unit is Agent agent) || unit.FormationRankIndex <= 0 || !agent.HasShieldCached || !(this._units2D[unit.FormationFileIndex, unit.FormationRankIndex - 1] is Agent secondUnit1) || secondUnit1.Banner != null)
        return;
      if (!secondUnit1.HasShieldCached)
      {
        this.SwitchUnitLocations(unit, (IFormationUnit) secondUnit1);
      }
      else
      {
        for (int index = 1; unit.FormationFileIndex - index >= 0 || unit.FormationFileIndex + index < this.FileCount; ++index)
        {
          if (unit.FormationFileIndex - index >= 0 && this._units2D[unit.FormationFileIndex - index, unit.FormationRankIndex - 1] is Agent secondUnit2 && !secondUnit2.HasShieldCached && secondUnit2.Banner == null)
          {
            this.SwitchUnitLocations(unit, (IFormationUnit) secondUnit2);
            break;
          }
          if (unit.FormationFileIndex + index < this.FileCount && this._units2D[unit.FormationFileIndex + index, unit.FormationRankIndex - 1] is Agent secondUnit3 && !secondUnit3.HasShieldCached && secondUnit3.Banner == null)
          {
            this.SwitchUnitLocations(unit, (IFormationUnit) secondUnit3);
            break;
          }
        }
      }
    }

    public virtual float GetDirectionChangeTendencyOfUnit(IFormationUnit unit)
    {
      return this.RankCount == 1 || unit.FormationRankIndex == -1 ? 0.0f : (float) unit.FormationRankIndex * 1f / (float) (this.RankCount - 1);
    }

    public int GetCachedOrderedAndAvailableUnitPositionIndicesCount()
    {
      return this._cachedOrderedAndAvailableUnitPositionIndices.Count;
    }

    public Vec2i GetCachedOrderedAndAvailableUnitPositionIndexAt(int i)
    {
      return this._cachedOrderedAndAvailableUnitPositionIndices[i];
    }

    public WorldPosition GetGlobalPositionAtIndex(int indexX, int indexY)
    {
      return this._globalPositions[indexX, indexY];
    }
  }
}
