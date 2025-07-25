// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.RandomOwnerExtensions
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public static class RandomOwnerExtensions
  {
    public static int RandomIntWithSeed(this IRandomOwner obj, uint seed)
    {
      return MBRandom.RandomIntWithSeed((uint) obj.RandomValue, seed);
    }

    public static int RandomIntWithSeed(this IRandomOwner obj, uint seed, int max)
    {
      return obj.RandomIntWithSeed(seed, 0, max);
    }

    public static int RandomIntWithSeed(this IRandomOwner obj, uint seed, int min, int max)
    {
      return RandomOwnerExtensions.Random(obj.RandomIntWithSeed(seed), min, max);
    }

    public static float RandomFloatWithSeed(this IRandomOwner obj, uint seed)
    {
      return MBRandom.RandomFloatWithSeed((uint) obj.RandomValue, seed);
    }

    public static float RandomFloatWithSeed(this IRandomOwner obj, uint seed, float max)
    {
      return obj.RandomFloatWithSeed(seed, 0.0f, max);
    }

    public static float RandomFloatWithSeed(
      this IRandomOwner obj,
      uint seed,
      float min,
      float max)
    {
      return RandomOwnerExtensions.Random(obj.RandomFloatWithSeed(seed), min, max);
    }

    public static int RandomInt(this IRandomOwner obj) => obj.RandomValue;

    public static int RandomInt(this IRandomOwner obj, int max) => obj.RandomInt(0, max);

    public static int RandomInt(this IRandomOwner obj, int min, int max)
    {
      return RandomOwnerExtensions.Random(obj.RandomInt(), min, max);
    }

    public static float RandomFloat(this IRandomOwner obj)
    {
      return (float) obj.RandomValue / (float) int.MaxValue;
    }

    public static float RandomFloat(this IRandomOwner obj, float max) => obj.RandomFloat(0.0f, max);

    public static float RandomFloat(this IRandomOwner obj, float min, float max)
    {
      return RandomOwnerExtensions.Random(obj.RandomFloat(), min, max);
    }

    private static int Random(int randomValue, int min, int max)
    {
      int num = max - min;
      if (num != 0)
        return min + randomValue % num;
      Debug.FailedAssert("invalid Random parameters", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\IRandomOwner.cs", nameof (Random), 78);
      return 0;
    }

    private static float Random(float randomValue, float min, float max)
    {
      float num = max - min;
      if ((double) num > 1.4012984643248171E-45)
        return min + randomValue * num;
      Debug.FailedAssert("invalid Random parameters", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\IRandomOwner.cs", nameof (Random), 90);
      return min;
    }
  }
}
