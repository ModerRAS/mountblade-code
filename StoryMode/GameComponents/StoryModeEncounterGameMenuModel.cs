// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeEncounterGameMenuModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using TaleWorlds.CampaignSystem.GameComponents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeEncounterGameMenuModel : DefaultEncounterGameMenuModel
  {
    public override string GetEncounterMenu(
      PartyBase attackerParty,
      PartyBase defenderParty,
      out bool startBattle,
      out bool joinBattle)
    {
      Settlement settlement = this.GetEncounteredPartyBase(attackerParty, defenderParty).Settlement;
      string encounterMenu;
      if (settlement != null && settlement.SettlementComponent is TrainingField)
      {
        encounterMenu = "training_field_menu";
        startBattle = false;
        joinBattle = false;
      }
      else if (StoryModeManager.Current.MainStoryLine.IsPlayerInteractionRestricted)
      {
        encounterMenu = "storymode_game_menu_blocker";
        startBattle = false;
        joinBattle = false;
      }
      else
        encounterMenu = base.GetEncounterMenu(attackerParty, defenderParty, out startBattle, out joinBattle);
      return encounterMenu;
    }
  }
}
