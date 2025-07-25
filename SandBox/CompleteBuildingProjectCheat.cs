// Decompiled with JetBrains decompiler
// Type: SandBox.CompleteBuildingProjectCheat
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Buildings;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox
{
  public class CompleteBuildingProjectCheat : GameplayCheatItem
  {
    public override void ExecuteCheat()
    {
      if (Settlement.CurrentSettlement == null || !Settlement.CurrentSettlement.IsFortification)
        return;
      foreach (Building building in (List<Building>) Settlement.CurrentSettlement.Town.Buildings)
      {
        if (building.CurrentLevel < 3)
          ++building.CurrentLevel;
      }
    }

    public override TextObject GetName()
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      if (currentSettlement == null)
        return TextObject.Empty;
      TextObject name = new TextObject("{=5uXs8pS9}Complete All Building Projects in {SETTLEMENT_NAME}");
      name.SetTextVariable("SETTLEMENT_NAME", currentSettlement.Name.ToString());
      return name;
    }
  }
}
