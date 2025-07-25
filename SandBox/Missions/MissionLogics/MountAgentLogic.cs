// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MountAgentLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MountAgentLogic : MissionLogic
  {
    private Agent _mainHeroMountAgent;

    public override void OnAgentBuild(Agent agent, Banner banner)
    {
      if (!agent.IsMainAgent || !agent.HasMount)
        return;
      this._mainHeroMountAgent = agent.MountAgent;
    }

    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (!affectedAgent.IsMount || agentState != AgentState.Killed || this._mainHeroMountAgent != affectedAgent)
        return;
      Equipment equipment = Hero.MainHero.BattleEquipment;
      if (Mission.Current.DoesMissionRequireCivilianEquipment)
        equipment = Hero.MainHero.CivilianEquipment;
      double randomFloat = (double) MBRandom.RandomFloat;
      float num1 = 0.05f;
      float num2 = 0.2f;
      if (Hero.MainHero.GetPerkValue(DefaultPerks.Riding.WellStraped))
      {
        float primaryBonus = DefaultPerks.Riding.WellStraped.PrimaryBonus;
        num1 += num1 * primaryBonus;
        num2 += num2 * primaryBonus;
      }
      bool flag = randomFloat < (double) num2;
      if ((randomFloat < (double) num1 ? 1 : (equipment[EquipmentIndex.ArmorItemEndSlot].ItemModifier?.StringId == "lame_horse" ? 1 : 0)) != 0)
      {
        equipment[EquipmentIndex.ArmorItemEndSlot] = EquipmentElement.Invalid;
        EquipmentElement rosterElement = equipment[EquipmentIndex.HorseHarness];
        equipment[EquipmentIndex.HorseHarness] = EquipmentElement.Invalid;
        if (!rosterElement.IsInvalid() && !rosterElement.IsEmpty)
          MobileParty.MainParty.ItemRoster.AddToCounts(rosterElement, 1);
        MBInformationManager.AddQuickInformation(new TextObject("{=nZhPS83J}You lost your horse."));
      }
      else
      {
        if (!flag)
          return;
        ItemModifier itemModifier = MBObjectManager.Instance.GetObject<ItemModifier>("lame_horse");
        equipment[EquipmentIndex.ArmorItemEndSlot] = new EquipmentElement(equipment[EquipmentIndex.ArmorItemEndSlot].Item, itemModifier);
        TextObject message = new TextObject("{=a6hwSEAK}Your horse is turned into a {MODIFIED_NAME}, since it got seriously injured.");
        message.SetTextVariable("MODIFIED_NAME", equipment[10].GetModifiedItemName());
        MBInformationManager.AddQuickInformation(message);
      }
    }
  }
}
