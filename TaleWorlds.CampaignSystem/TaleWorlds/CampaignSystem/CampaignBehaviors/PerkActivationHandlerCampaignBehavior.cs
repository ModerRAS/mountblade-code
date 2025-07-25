// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PerkActivationHandlerCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PerkActivationHandlerCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.PerkOpenedEvent.AddNonSerializedListener((object) this, new Action<Hero, PerkObject>(this.OnPerkOpened));
    }

    private void OnPerkOpened(Hero hero, PerkObject perk)
    {
      if (hero == null)
        return;
      if (perk == DefaultPerks.OneHanded.Trainer || perk == DefaultPerks.OneHanded.UnwaveringDefense || perk == DefaultPerks.TwoHanded.ThickHides || perk == DefaultPerks.Athletics.WellBuilt || perk == DefaultPerks.Medicine.PreventiveMedicine)
        hero.HitPoints += (int) perk.PrimaryBonus;
      else if (perk == DefaultPerks.Crafting.VigorousSmith)
        hero.HeroDeveloper.AddAttribute(DefaultCharacterAttributes.Vigor, 1, false);
      else if (perk == DefaultPerks.Crafting.StrongSmith)
        hero.HeroDeveloper.AddAttribute(DefaultCharacterAttributes.Control, 1, false);
      else if (perk == DefaultPerks.Crafting.EnduringSmith)
        hero.HeroDeveloper.AddAttribute(DefaultCharacterAttributes.Endurance, 1, false);
      else if (perk == DefaultPerks.Crafting.WeaponMasterSmith)
      {
        hero.HeroDeveloper.AddFocus(DefaultSkills.OneHanded, 1, false);
        hero.HeroDeveloper.AddFocus(DefaultSkills.TwoHanded, 1, false);
      }
      else if (perk == DefaultPerks.Athletics.Durable)
        hero.HeroDeveloper.AddAttribute(DefaultCharacterAttributes.Endurance, 1, false);
      else if (perk == DefaultPerks.Athletics.Steady)
        hero.HeroDeveloper.AddAttribute(DefaultCharacterAttributes.Control, 1, false);
      else if (perk == DefaultPerks.Athletics.Strong)
        hero.HeroDeveloper.AddAttribute(DefaultCharacterAttributes.Vigor, 1, false);
      if (hero != Hero.MainHero || perk != DefaultPerks.OneHanded.Prestige && perk != DefaultPerks.TwoHanded.Hope && perk != DefaultPerks.Athletics.ImposingStature && perk != DefaultPerks.Bow.MerryMen && perk != DefaultPerks.Tactics.HordeLeader && perk != DefaultPerks.Scouting.MountedScouts && perk != DefaultPerks.Leadership.Authority && perk != DefaultPerks.Leadership.LeaderOfMasses && perk != DefaultPerks.Leadership.UltimateLeader)
        return;
      PartyBase.MainParty.MemberRoster.UpdateVersion();
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
