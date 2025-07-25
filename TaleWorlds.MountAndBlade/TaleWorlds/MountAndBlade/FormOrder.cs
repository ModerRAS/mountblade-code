// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.FormOrder
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct FormOrder
  {
    private float _customFlankWidth;
    public readonly FormOrder.FormOrderEnum OrderEnum;
    public static readonly FormOrder FormOrderDeep = new FormOrder(FormOrder.FormOrderEnum.Deep);
    public static readonly FormOrder FormOrderWide = new FormOrder(FormOrder.FormOrderEnum.Wide);
    public static readonly FormOrder FormOrderWider = new FormOrder(FormOrder.FormOrderEnum.Wider);

    public float CustomFlankWidth
    {
      get => this._customFlankWidth;
      set => this._customFlankWidth = value;
    }

    private FormOrder(FormOrder.FormOrderEnum orderEnum, float customFlankWidth = -1f)
    {
      this.OrderEnum = orderEnum;
      this._customFlankWidth = customFlankWidth;
    }

    public static FormOrder FormOrderCustom(float customWidth)
    {
      return new FormOrder(FormOrder.FormOrderEnum.Custom, customWidth);
    }

    public OrderType OrderType
    {
      get
      {
        switch (this.OrderEnum)
        {
          case FormOrder.FormOrderEnum.Wide:
            return OrderType.FormWide;
          case FormOrder.FormOrderEnum.Wider:
            return OrderType.FormWider;
          case FormOrder.FormOrderEnum.Custom:
            return OrderType.FormCustom;
          default:
            return OrderType.FormDeep;
        }
      }
    }

    public void OnApply(Formation formation)
    {
      this.OnApplyToArrangement(formation, formation.Arrangement);
    }

    public static int GetUnitCountOf(Formation formation)
    {
      return !formation.OverridenUnitCount.HasValue ? formation.CountOfUnitsWithoutDetachedOnes : formation.OverridenUnitCount.Value;
    }

    public bool OnApplyToCustomArrangement(Formation formation, IFormationArrangement arrangement)
    {
      return false;
    }

    private void OnApplyToArrangement(Formation formation, IFormationArrangement arrangement)
    {
      if (this.OnApplyToCustomArrangement(formation, arrangement))
        return;
      switch (arrangement)
      {
        case ColumnFormation _:
          ColumnFormation columnFormation = arrangement as ColumnFormation;
          if (FormOrder.GetUnitCountOf(formation) <= 0)
            break;
          columnFormation.FormFromWidth((float) this.GetRankVerticalFormFileCount((IFormation) formation));
          break;
        case RectilinearSchiltronFormation _:
          (arrangement as RectilinearSchiltronFormation).Form();
          break;
        case CircularSchiltronFormation _:
          (arrangement as CircularSchiltronFormation).Form();
          break;
        case CircularFormation _:
          CircularFormation circularFormation = arrangement as CircularFormation;
          int unitCountOf1 = FormOrder.GetUnitCountOf(formation);
          int? fileCount1 = this.GetFileCount(unitCountOf1);
          float circumference;
          if (fileCount1.HasValue)
          {
            int rankCount = MathF.Max(1, MathF.Ceiling((float) unitCountOf1 * 1f / (float) fileCount1.Value));
            circumference = circularFormation.GetCircumferenceFromRankCount(rankCount);
          }
          else
            circumference = 3.14159274f * this.CustomFlankWidth;
          circularFormation.FormFromCircumference(circumference);
          break;
        case SquareFormation _:
          SquareFormation squareFormation = arrangement as SquareFormation;
          int unitCountOf2 = FormOrder.GetUnitCountOf(formation);
          int? fileCount2 = this.GetFileCount(unitCountOf2);
          if (fileCount2.HasValue)
          {
            int rankCount = MathF.Max(1, MathF.Ceiling((float) unitCountOf2 * 1f / (float) fileCount2.Value));
            squareFormation.FormFromRankCount(rankCount);
            break;
          }
          squareFormation.FormFromBorderSideWidth(this.CustomFlankWidth);
          break;
        case SkeinFormation _:
          SkeinFormation skeinFormation = arrangement as SkeinFormation;
          int? fileCount3 = this.GetFileCount(FormOrder.GetUnitCountOf(formation));
          if (fileCount3.HasValue)
          {
            skeinFormation.FormFromFlankWidth(fileCount3.Value);
            break;
          }
          skeinFormation.FlankWidth = this.CustomFlankWidth;
          break;
        case WedgeFormation _:
          WedgeFormation wedgeFormation = arrangement as WedgeFormation;
          int? fileCount4 = this.GetFileCount(FormOrder.GetUnitCountOf(formation));
          if (fileCount4.HasValue)
          {
            wedgeFormation.FormFromFlankWidth(fileCount4.Value);
            break;
          }
          wedgeFormation.FlankWidth = this.CustomFlankWidth;
          break;
        case TransposedLineFormation _:
          TransposedLineFormation transposedLineFormation = arrangement as TransposedLineFormation;
          int unitCountOf3 = FormOrder.GetUnitCountOf(formation);
          if (unitCountOf3 <= 0)
            break;
          int? nullable = this.GetFileCount(unitCountOf3);
          if (!nullable.HasValue)
            nullable = new int?(transposedLineFormation.GetFileCountFromWidth(this.CustomFlankWidth));
          MathF.Ceiling((float) unitCountOf3 * 1f / (float) nullable.Value);
          transposedLineFormation.FormFromFlankWidth(this.GetRankVerticalFormFileCount((IFormation) formation));
          break;
        case LineFormation _:
          LineFormation lineFormation = arrangement as LineFormation;
          int unitCountOf4 = FormOrder.GetUnitCountOf(formation);
          int? fileCount5 = this.GetFileCount(unitCountOf4);
          if (fileCount5.HasValue)
          {
            lineFormation.FormFromFlankWidth(fileCount5.Value, unitCountOf4 > 40);
            break;
          }
          lineFormation.FlankWidth = this.CustomFlankWidth;
          break;
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\FormOrder.cs", nameof (OnApplyToArrangement), 224);
          break;
      }
    }

    private int? GetFileCount(int unitCount)
    {
      return FormOrder.GetFileCountStatic(this.OrderEnum, unitCount);
    }

    public static int? GetFileCountStatic(FormOrder.FormOrderEnum order, int unitCount)
    {
      return FormOrder.GetFileCountAux(order, unitCount);
    }

    private int GetRankVerticalFormFileCount(IFormation formation)
    {
      switch (this.OrderEnum)
      {
        case FormOrder.FormOrderEnum.Deep:
          return 1;
        case FormOrder.FormOrderEnum.Wide:
          return 3;
        case FormOrder.FormOrderEnum.Wider:
          return 5;
        case FormOrder.FormOrderEnum.Custom:
          return MathF.Floor((float) (((double) this._customFlankWidth + (double) formation.Interval) / ((double) formation.UnitDiameter + (double) formation.Interval)));
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\FormOrder.cs", nameof (GetRankVerticalFormFileCount), 265);
          return 1;
      }
    }

    private static int? GetFileCountAux(FormOrder.FormOrderEnum order, int unitCount)
    {
      switch (order)
      {
        case FormOrder.FormOrderEnum.Deep:
          return new int?(MathF.Max(MathF.Round(MathF.Sqrt((float) unitCount / 4f)), 1) * 4);
        case FormOrder.FormOrderEnum.Wide:
          return new int?(MathF.Max(MathF.Round(MathF.Sqrt((float) unitCount / 16f)), 1) * 16);
        case FormOrder.FormOrderEnum.Wider:
          return new int?(MathF.Max(MathF.Round(MathF.Sqrt((float) unitCount / 64f)), 1) * 64);
        case FormOrder.FormOrderEnum.Custom:
          return new int?();
        default:
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\AI\\Orders\\FormOrder.cs", nameof (GetFileCountAux), 285);
          return new int?();
      }
    }

    public override bool Equals(object obj) => obj is FormOrder formOrder && formOrder == this;

    public override int GetHashCode() => (int) this.OrderEnum;

    public static bool operator !=(FormOrder f1, FormOrder f2) => f1.OrderEnum != f2.OrderEnum;

    public static bool operator ==(FormOrder f1, FormOrder f2) => f1.OrderEnum == f2.OrderEnum;

    public enum FormOrderEnum
    {
      Deep,
      Wide,
      Wider,
      Custom,
    }
  }
}
