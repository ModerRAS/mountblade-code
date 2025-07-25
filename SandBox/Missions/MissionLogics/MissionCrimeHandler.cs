// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionCrimeHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionCrimeHandler : MissionLogic
  {
    protected override void OnEndMission()
    {
      if (Settlement.CurrentSettlement == null || !Settlement.CurrentSettlement.IsFortification)
        return;
      IFaction mapFaction = Settlement.CurrentSettlement.MapFaction;
      if (Hero.MainHero.IsPrisoner || Campaign.Current.IsMainHeroDisguised || mapFaction.IsBanditFaction || !Campaign.Current.Models.CrimeModel.IsPlayerCrimeRatingSevere(mapFaction.MapFaction))
        return;
      Campaign.Current.GameMenuManager.SetNextMenu("fortification_crime_rating");
    }
  }
}
