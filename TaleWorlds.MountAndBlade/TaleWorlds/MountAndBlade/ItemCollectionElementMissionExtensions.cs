// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ItemCollectionElementMissionExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class ItemCollectionElementMissionExtensions
  {
    public static StackArray.StackArray4Int GetItemHolsterIndices(this ItemObject item)
    {
      StackArray.StackArray4Int itemHolsterIndices = new StackArray.StackArray4Int();
      for (int index = 0; index < item.ItemHolsters.Length; ++index)
        itemHolsterIndices[index] = item.ItemHolsters[index].Length > 0 ? MBItem.GetItemHolsterIndex(item.ItemHolsters[index]) : -1;
      for (int length = item.ItemHolsters.Length; length < 4; ++length)
        itemHolsterIndices[length] = -1;
      return itemHolsterIndices;
    }
  }
}
