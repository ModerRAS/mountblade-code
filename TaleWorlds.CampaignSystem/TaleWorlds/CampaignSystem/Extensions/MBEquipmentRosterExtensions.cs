// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Extensions.MBEquipmentRosterExtensions
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Extensions
{
  public static class MBEquipmentRosterExtensions
  {
    public static MBReadOnlyList<MBEquipmentRoster> All => Campaign.Current.AllEquipmentRosters;

    public static IEnumerable<Equipment> GetCivilianEquipments(this MBEquipmentRoster instance)
    {
      return instance.AllEquipments.Where<Equipment>((Func<Equipment, bool>) (x => x.IsCivilian));
    }

    public static IEnumerable<Equipment> GetBattleEquipments(this MBEquipmentRoster instance)
    {
      return instance.AllEquipments.Where<Equipment>((Func<Equipment, bool>) (x => !x.IsCivilian));
    }

    public static Equipment GetRandomCivilianEquipment(this MBEquipmentRoster instance)
    {
      return instance.AllEquipments.GetRandomElementWithPredicate<Equipment>((Func<Equipment, bool>) (x => x.IsCivilian));
    }
  }
}
