// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxAgentDecideKilledOrUnconsciousModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxAgentDecideKilledOrUnconsciousModel : AgentDecideKilledOrUnconsciousModel
  {
    public override float GetAgentStateProbability(
      Agent affectorAgent,
      Agent effectedAgent,
      DamageTypes damageType,
      WeaponFlags weaponFlags,
      out float useSurgeryProbability)
    {
      useSurgeryProbability = 1f;
      if (effectedAgent.IsHuman)
      {
        CharacterObject character = (CharacterObject) effectedAgent.Character;
        if (Campaign.Current != null)
        {
          if (character.IsHero && !character.HeroObject.CanDie(KillCharacterAction.KillCharacterActionDetail.DiedInBattle))
            return 0.0f;
          PartyBase ownerParty1 = effectedAgent.GetComponent<CampaignAgentComponent>()?.OwnerParty;
          if (affectorAgent == null || !affectorAgent.IsHuman)
            return 1f - Campaign.Current.Models.PartyHealingModel.GetSurvivalChance(ownerParty1, character, damageType, weaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanKillEvenIfBlunt));
          PartyBase ownerParty2 = affectorAgent.GetComponent<CampaignAgentComponent>()?.OwnerParty;
          return 1f - Campaign.Current.Models.PartyHealingModel.GetSurvivalChance(ownerParty1, character, damageType, weaponFlags.HasAnyFlag<WeaponFlags>(WeaponFlags.CanKillEvenIfBlunt), ownerParty2);
        }
      }
      return 1f;
    }
  }
}
