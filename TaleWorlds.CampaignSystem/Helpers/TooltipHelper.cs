// Decompiled with JetBrains decompiler
// Type: Helpers.TooltipHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Siege;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public class TooltipHelper
  {
    public static TextObject GetSendTroopsPowerContextTooltipForMapEvent()
    {
      MapEvent playerMapEvent = MapEvent.PlayerMapEvent;
      MapEvent.PowerCalculationContext simulationContext = playerMapEvent.SimulationContext;
      string variation = simulationContext.ToString();
      if (simulationContext == MapEvent.PowerCalculationContext.Village || simulationContext == MapEvent.PowerCalculationContext.RiverCrossingBattle || simulationContext == MapEvent.PowerCalculationContext.Siege)
        variation += playerMapEvent.PlayerSide == playerMapEvent.AttackerSide.MissionSide ? "Attacker" : "Defender";
      return GameTexts.FindText("str_simulation_tooltip", variation);
    }

    public static TextObject GetSendTroopsPowerContextTooltipForSiege()
    {
      return GameTexts.FindText("str_simulation_tooltip", PlayerSiege.PlayerSide == BattleSideEnum.Attacker ? "SiegeAttacker" : "SiegeDefender");
    }
  }
}
