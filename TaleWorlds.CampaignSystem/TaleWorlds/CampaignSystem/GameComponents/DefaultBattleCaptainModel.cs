// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultBattleCaptainModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultBattleCaptainModel : BattleCaptainModel
  {
    public override float GetCaptainRatingForTroopUsages(
      Hero hero,
      TroopUsageFlags flag,
      out List<PerkObject> compatiblePerks)
    {
      float num = 0.0f;
      compatiblePerks = new List<PerkObject>();
      foreach (PerkObject perksForTroopUsage in PerkHelper.GetCaptainPerksForTroopUsages(flag))
      {
        if (hero.GetPerkValue(perksForTroopUsage))
        {
          num += perksForTroopUsage.RequiredSkillValue;
          compatiblePerks.Add(perksForTroopUsage);
        }
      }
      return num / 1650f;
    }
  }
}
