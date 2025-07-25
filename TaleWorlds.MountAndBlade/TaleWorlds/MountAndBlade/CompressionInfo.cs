// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.CompressionInfo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.DotNet;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class CompressionInfo
  {
    [EngineStruct("Integer_compression_info", false)]
    public struct Integer
    {
      [CustomEngineStructMemberData("min_value")]
      private readonly int minimumValue;
      [CustomEngineStructMemberData("max_value")]
      private readonly int maximumValue;
      [CustomEngineStructMemberData("num_bits")]
      private readonly int numberOfBits;

      public Integer(int minimumValue, int maximumValue, bool maximumValueGiven)
      {
        this.maximumValue = maximumValue;
        this.minimumValue = minimumValue;
        this.numberOfBits = MBMath.GetNumberOfBitsToRepresentNumber((uint) (maximumValue - minimumValue));
      }

      public Integer(int minimumValue, int numberOfBits)
      {
        this.minimumValue = minimumValue;
        this.numberOfBits = numberOfBits;
        if (minimumValue == int.MinValue && numberOfBits == 32)
          this.maximumValue = int.MaxValue;
        else
          this.maximumValue = minimumValue + (1 << numberOfBits) - 1;
      }

      public int GetNumBits() => this.numberOfBits;

      public int GetMaximumValue() => this.maximumValue;
    }

    [EngineStruct("Unsigned_integer_compression_info", false)]
    public struct UnsignedInteger
    {
      [CustomEngineStructMemberData("min_value")]
      private readonly uint minimumValue;
      [CustomEngineStructMemberData("max_value")]
      private readonly uint maximumValue;
      [CustomEngineStructMemberData("num_bits")]
      private readonly int numberOfBits;

      public UnsignedInteger(uint minimumValue, uint maximumValue, bool maximumValueGiven)
      {
        this.minimumValue = minimumValue;
        this.maximumValue = maximumValue;
        this.numberOfBits = MBMath.GetNumberOfBitsToRepresentNumber(maximumValue - minimumValue);
      }

      public UnsignedInteger(uint minimumValue, int numberOfBits)
      {
        this.minimumValue = minimumValue;
        this.numberOfBits = numberOfBits;
        if (minimumValue == 0U && numberOfBits == 32)
          this.maximumValue = uint.MaxValue;
        else
          this.maximumValue = (uint) ((ulong) minimumValue + (ulong) (1L << numberOfBits) - 1UL);
      }

      public int GetNumBits() => this.numberOfBits;
    }

    [EngineStruct("Integer64_compression_info", false)]
    public struct LongInteger
    {
      [CustomEngineStructMemberData("min_value")]
      private readonly long minimumValue;
      [CustomEngineStructMemberData("max_value")]
      private readonly long maximumValue;
      [CustomEngineStructMemberData("num_bits")]
      private readonly int numberOfBits;

      public LongInteger(long minimumValue, long maximumValue, bool maximumValueGiven)
      {
        this.maximumValue = maximumValue;
        this.minimumValue = minimumValue;
        this.numberOfBits = MBMath.GetNumberOfBitsToRepresentNumber((ulong) (maximumValue - minimumValue));
      }

      public LongInteger(long minimumValue, int numberOfBits)
      {
        this.minimumValue = minimumValue;
        this.numberOfBits = numberOfBits;
        if (minimumValue == long.MinValue && numberOfBits == 64)
          this.maximumValue = long.MaxValue;
        else
          this.maximumValue = minimumValue + (1L << numberOfBits) - 1L;
      }

      public int GetNumBits() => this.numberOfBits;
    }

    [EngineStruct("Unsigned_integer64_compression_info", false)]
    public struct UnsignedLongInteger
    {
      [CustomEngineStructMemberData("min_value")]
      private readonly ulong minimumValue;
      [CustomEngineStructMemberData("max_value")]
      private readonly ulong maximumValue;
      [CustomEngineStructMemberData("num_bits")]
      private readonly int numberOfBits;

      public UnsignedLongInteger(ulong minimumValue, ulong maximumValue, bool maximumValueGiven)
      {
        this.minimumValue = minimumValue;
        this.maximumValue = maximumValue;
        this.numberOfBits = MBMath.GetNumberOfBitsToRepresentNumber(maximumValue - minimumValue);
      }

      public UnsignedLongInteger(ulong minimumValue, int numberOfBits)
      {
        this.minimumValue = minimumValue;
        this.numberOfBits = numberOfBits;
        if (minimumValue == 0UL && numberOfBits == 64)
          this.maximumValue = ulong.MaxValue;
        else
          this.maximumValue = minimumValue + (ulong) (1L << numberOfBits) - 1UL;
      }

      public int GetNumBits() => this.numberOfBits;
    }

    [EngineStruct("Float_compression_info", false)]
    public struct Float
    {
      [CustomEngineStructMemberData("min_value")]
      private readonly float minimumValue;
      [CustomEngineStructMemberData("max_value")]
      private readonly float maximumValue;
      [CustomEngineStructMemberData(true)]
      private readonly float precision;
      [CustomEngineStructMemberData("num_bits")]
      private readonly int numberOfBits;

      public static CompressionInfo.Float FullPrecision { get; } = new CompressionInfo.Float(true);

      public Float(float minimumValue, float maximumValue, int numberOfBits)
      {
        this.minimumValue = minimumValue;
        this.maximumValue = maximumValue;
        this.numberOfBits = numberOfBits;
        this.precision = (maximumValue - minimumValue) / (float) ((1 << numberOfBits) - 1);
      }

      public Float(float minimumValue, int numberOfBits, float precision)
      {
        this.minimumValue = minimumValue;
        this.precision = precision;
        this.numberOfBits = numberOfBits;
        int num = (1 << numberOfBits) - 1;
        this.maximumValue = precision * (float) num + minimumValue;
      }

      private Float(bool isFullPrecision)
      {
        this.minimumValue = float.MinValue;
        this.maximumValue = float.MaxValue;
        this.precision = 0.0f;
        this.numberOfBits = 32;
      }

      public int GetNumBits() => this.numberOfBits;

      public float GetMaximumValue() => this.maximumValue;

      public float GetMinimumValue() => this.minimumValue;

      public float GetPrecision() => this.precision;
    }
  }
}
