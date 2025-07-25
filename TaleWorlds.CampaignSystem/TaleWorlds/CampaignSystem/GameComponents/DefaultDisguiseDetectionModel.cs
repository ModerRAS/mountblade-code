// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultDisguiseDetectionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultDisguiseDetectionModel : DisguiseDetectionModel
  {
    public override float CalculateDisguiseDetectionProbability(Settlement settlement)
    {
      float num1 = 0.0f;
      int b = 0;
      if (settlement.Town != null && settlement.Town.GarrisonParty != null)
      {
        foreach (TroopRosterElement troopRosterElement in (List<TroopRosterElement>) settlement.Town.GarrisonParty.MemberRoster.GetTroopRoster())
        {
          b += troopRosterElement.Number;
          num1 += (float) (troopRosterElement.Number * troopRosterElement.Character.Level);
        }
      }
      float num2 = num1 / (float) MathF.Max(1, b);
      float num3 = (float) (0.30000001192092896 + 3.0 / 1000.0 * (double) Hero.MainHero.GetSkillValue(DefaultSkills.Roguery) - 0.004999999888241291 * (double) num2) - MathF.Max(0.15f, 0.00015f * Clan.PlayerClan.Renown);
      if (Hero.MainHero.CharacterObject.GetPerkValue(DefaultPerks.Roguery.TwoFaced) && (double) num3 > 0.0)
        num3 += num3 * DefaultPerks.Roguery.TwoFaced.PrimaryBonus;
      return MathF.Clamp(num3, 0.0f, 1f);
    }
  }
}
