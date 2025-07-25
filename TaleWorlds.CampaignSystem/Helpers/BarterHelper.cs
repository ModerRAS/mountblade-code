using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.Library;

namespace Helpers
{
  public static class BarterHelper
  {
    // 检查某个物品是否已经存在于交易物品列表中
    private static bool ItemExistsInBarterables(
      List<Barterable> barterables, // 交易物品列表
      ItemBarterable itemBarterable) // 要检查的物品
    {
      // 检查列表中是否存在相同的物品
      return barterables.AnyQ<Barterable>((Func<Barterable, bool>) (x => x is ItemBarterable itemBarterable1 && itemBarterable1.ItemRosterElement.EquipmentElement.Item == itemBarterable.ItemRosterElement.EquipmentElement.Item));
    }

    // 获取用于自动平衡交易添加的交易物品及其数量
    public static IEnumerable<(Barterable barterable, int count)> GetAutoBalanceBarterablesAdd(
      BarterData barterData, // 交易数据
      IFaction factionToBalanceFor, // 需要平衡的派系
      IFaction offerer, // 提供物品的一方
      Hero offererHero, // 提供物品的一方的英雄
      float fulfillRatio = 1f) // 完成比率，默认值为1
    {
      // 获取已经提供的交易物品
      List<Barterable> offeredBarterables = barterData.GetOfferedBarterables();
      // 获取可用于添加到交易中的物品列表，并排除已经提供的物品
      List<Barterable> list = barterData.GetBarterables().WhereQ<Barterable>((Func<Barterable, bool>) (x =>
      {
        if (x.OriginalOwner != offererHero)
          return false;
        return !(x is ItemBarterable itemBarterable2) || !BarterHelper.ItemExistsInBarterables(barterData.GetOfferedBarterables(), itemBarterable2);
      })).ToList<Barterable>();
      
      int num1 = 0; // 计算已经提供的物品总价值
      foreach (Barterable barterable in offeredBarterables)
        num1 += barterable.GetValueForFaction(factionToBalanceFor);
      
      List<(Barterable, int)> balanceBarterablesAdd = new List<(Barterable, int)>(); // 用于存储需要添加的物品及其数量
      int num2 = (int) (-(double) fulfillRatio * (double) num1); // 需要平衡的价值总数，负数表示需要补偿的数值
      bool flag = false; // 用于控制循环是否继续
      while (num2 > 0 && !flag)
      {
        float num3 = 0.0f; // 存储当前最大效益的比率
        Barterable barterable1 = (Barterable) null; // 存储当前选择的物品
        for (int index = 0; index < list.Count; ++index)
        {
          Barterable barterable2 = list[index];
          float num4 = 0.0f; // 存储当前物品的效益比率
          if (!barterable2.IsOffered || barterable2.CurrentAmount < barterable2.MaxAmount)
          {
            int unitValueForFaction1 = barterable2.GetUnitValueForFaction(factionToBalanceFor);
            int unitValueForFaction2 = barterable2.GetUnitValueForFaction(offerer);
            int num5 = barterable2.MaxAmount - barterable2.CurrentAmount;
            // 特殊处理黄金物品，如果黄金的价值可以平衡差额，则直接选择该物品
            if (barterable2 is GoldBarterable && unitValueForFaction1 * num5 >= num2)
            {
              barterable1 = barterable2;
              break;
            }
            // 计算效益比率
            if (unitValueForFaction1 > 0)
            {
              if (unitValueForFaction2 >= 0)
              {
                num4 = 1E+07f; // 特殊处理，当对方的价值为正数时，效益非常高
              }
              else
              {
                num4 = (float) -unitValueForFaction1 / (float) unitValueForFaction2;
                if (unitValueForFaction1 > num2)
                  num4 = (float) unitValueForFaction1 / (float) (-unitValueForFaction2 + (unitValueForFaction1 - num2));
              }
            }
          }
          // 更新最大效益的物品
          if ((double) num4 > (double) num3)
          {
            num3 = num4;
            barterable1 = barterable2;
          }
        }
        // 如果没有找到合适的物品，则退出循环
        if (barterable1 == null)
        {
          flag = true;
        }
        else
        {
          // 计算该物品能够平衡的数量，并将其添加到结果列表中
          int unitValueForFaction = barterable1.GetUnitValueForFaction(factionToBalanceFor);
          int maxAmount = barterable1.MaxAmount;
          if (barterable1.IsOffered)
            maxAmount -= barterable1.CurrentAmount;
          int num6 = MathF.Min(MathF.Ceiling((float) num2 / (float) unitValueForFaction), maxAmount);
          balanceBarterablesAdd.Add((barterable1, num6));
          list.Remove(barterable1); // 从待选列表中移除该物品
          num2 -= num6 * unitValueForFaction; // 更新剩余需要平衡的价值
        }
      }
      // 返回需要添加到交易中的物品及其数量
      return (IEnumerable<(Barterable, int)>) balanceBarterablesAdd;
    }

    // 获取用于自动平衡交易移除的交易物品及其数量
    public static IEnumerable<(Barterable barterable, int count)> GetAutoBalanceBarterablesToRemove(
      BarterData barterData, // 交易数据
      IFaction factionToBalanceFor, // 需要平衡的派系
      IFaction offerer, // 提供物品的一方
      Hero offererHero) // 提供物品的一方的英雄
    {
      // 获取已经提供的交易物品
      List<Barterable> offeredBarterables = barterData.GetOfferedBarterables();
      int num1 = 0; // 计算已经提供的物品总价值
      foreach (Barterable barterable in offeredBarterables)
        num1 += barterable.GetValueForFaction(factionToBalanceFor);
      
      List<(Barterable, int)> barterablesToRemove = new List<(Barterable, int)>(); // 用于存储需要移除的物品及其数量
      int num2 = num1; // 需要平衡的价值总数
      bool flag = false; // 用于控制循环是否继续
      while (num2 > 0 && !flag)
      {
        float num3 = 0.0f; // 存储当前最大效益的比率
        Barterable barterable1 = (Barterable) null; // 存储当前选择的物品
        for (int index = 0; index < offeredBarterables.Count; ++index)
        {
          Barterable barterable2 = offeredBarterables[index];
          float num4 = 0.0f; // 存储当前物品的效益比率
          if (barterable2.CurrentAmount > 0)
          {
            int unitValueForFaction1 = barterable2.GetUnitValueForFaction(factionToBalanceFor);
            int unitValueForFaction2 = barterable2.GetUnitValueForFaction(offerer);
            // 计算效益比率
            if (unitValueForFaction1 > 0)
              num4 = unitValueForFaction2 < 0 ? (float) -unitValueForFaction2 / (float) unitValueForFaction1 : -10000f;
          }
          // 更新最大效益的物品
          if ((double) num4 > (double) num3)
          {
            num3 = num4;
            barterable1 = barterable2;
          }
        }
        // 如果没有找到合适的物品，则退出循环
        if (barterable1 == null)
        {
          flag = true;
        }
        else
        {
          // 计算该物品能够平衡的数量，并将其添加到结果列表中
          int unitValueForFaction = barterable1.GetUnitValueForFaction(factionToBalanceFor);
          int currentAmount = barterable1.CurrentAmount;
          int num5 = MathF.Min(MathF.Ceiling((float) num2 / (float) unitValueForFaction), currentAmount);
          barterablesToRemove.Add((barterable1, num5));
          offeredBarterables.Remove(barterable1); // 从已提供的列表中移除该物品
          num2 -= num5 * unitValueForFaction; // 更新剩余需要平衡的价值
        }
      }
      // 返回需要移除的交易物品及其数量
      return (IEnumerable<(Barterable, int)>) barterablesToRemove;
    }
  }
}
