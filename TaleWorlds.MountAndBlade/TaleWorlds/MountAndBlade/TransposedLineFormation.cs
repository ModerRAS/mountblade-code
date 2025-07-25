// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TransposedLineFormation
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TransposedLineFormation : LineFormation
  {
    public TransposedLineFormation(IFormation owner)
      : base(owner)
    {
      this.IsStaggered = false;
      this.IsTransforming = true;
    }

    public override IFormationArrangement Clone(IFormation formation)
    {
      return (IFormationArrangement) new TransposedLineFormation(formation);
    }

    public override void RearrangeFrom(IFormationArrangement arrangement)
    {
      if (arrangement is ColumnFormation)
      {
        int unitCount = arrangement.UnitCount;
        if (unitCount > 0)
        {
          int? fileCountStatic = FormOrder.GetFileCountStatic(((Formation) this.owner).FormOrder.OrderEnum, unitCount);
          if (fileCountStatic.HasValue)
            this.FormFromFlankWidth(MathF.Ceiling((float) unitCount * 1f / (float) fileCountStatic.Value));
        }
      }
      base.RearrangeFrom(arrangement);
    }
  }
}
