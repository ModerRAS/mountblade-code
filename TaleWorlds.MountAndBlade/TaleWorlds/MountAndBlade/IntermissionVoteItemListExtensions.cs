// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IntermissionVoteItemListExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class IntermissionVoteItemListExtensions
  {
    public static bool ContainsItem(
      this List<IntermissionVoteItem> intermissionVoteItems,
      string id)
    {
      return intermissionVoteItems != null && intermissionVoteItems.FirstOrDefault<IntermissionVoteItem>((Func<IntermissionVoteItem, bool>) (item => item.Id == id)) != null;
    }

    public static IntermissionVoteItem Add(
      this List<IntermissionVoteItem> intermissionVoteItems,
      string id)
    {
      IntermissionVoteItem intermissionVoteItem1 = (IntermissionVoteItem) null;
      if (intermissionVoteItems != null)
      {
        int count = intermissionVoteItems.Count;
        IntermissionVoteItem intermissionVoteItem2 = new IntermissionVoteItem(id, count);
        intermissionVoteItems.Add(intermissionVoteItem2);
        intermissionVoteItem1 = intermissionVoteItem2;
      }
      return intermissionVoteItem1;
    }

    public static IntermissionVoteItem GetItem(
      this List<IntermissionVoteItem> intermissionVoteItems,
      string id)
    {
      IntermissionVoteItem intermissionVoteItem = (IntermissionVoteItem) null;
      if (intermissionVoteItems != null)
        intermissionVoteItem = intermissionVoteItems.FirstOrDefault<IntermissionVoteItem>((Func<IntermissionVoteItem, bool>) (item => item.Id == id));
      return intermissionVoteItem;
    }
  }
}
