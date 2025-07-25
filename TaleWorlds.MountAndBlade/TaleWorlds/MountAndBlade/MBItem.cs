// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MBItem
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class MBItem
  {
    public static int GetItemUsageIndex(string itemUsageName)
    {
      return MBAPI.IMBItem.GetItemUsageIndex(itemUsageName);
    }

    public static int GetItemHolsterIndex(string itemHolsterName)
    {
      return MBAPI.IMBItem.GetItemHolsterIndex(itemHolsterName);
    }

    public static bool GetItemIsPassiveUsage(string itemUsageName)
    {
      return MBAPI.IMBItem.GetItemIsPassiveUsage(itemUsageName);
    }

    public static MatrixFrame GetHolsterFrameByIndex(int index)
    {
      MatrixFrame outFrame = new MatrixFrame();
      MBAPI.IMBItem.GetHolsterFrameByIndex(index, ref outFrame);
      return outFrame;
    }

    public static ItemObject.ItemUsageSetFlags GetItemUsageSetFlags(string ItemUsageName)
    {
      return (ItemObject.ItemUsageSetFlags) MBAPI.IMBItem.GetItemUsageSetFlags(ItemUsageName);
    }

    public static ActionIndexValueCache GetItemUsageReloadActionCode(
      string itemUsageName,
      int usageDirection,
      bool isMounted,
      int leftHandUsageSetIndex,
      bool isLeftStance)
    {
      return new ActionIndexValueCache(MBAPI.IMBItem.GetItemUsageReloadActionCode(itemUsageName, usageDirection, isMounted, leftHandUsageSetIndex, isLeftStance));
    }

    public static int GetItemUsageStrikeType(
      string itemUsageName,
      int usageDirection,
      bool isMounted,
      int leftHandUsageSetIndex,
      bool isLeftStance)
    {
      return MBAPI.IMBItem.GetItemUsageStrikeType(itemUsageName, usageDirection, isMounted, leftHandUsageSetIndex, isLeftStance);
    }

    public static float GetMissileRange(float shotSpeed, float zDiff)
    {
      return MBAPI.IMBItem.GetMissileRange(shotSpeed, zDiff);
    }
  }
}
