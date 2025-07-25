// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.MissionSettlementPrepareLogic
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class MissionSettlementPrepareLogic : MissionLogic
  {
    public override void AfterStart()
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign || Settlement.CurrentSettlement == null || !Settlement.CurrentSettlement.IsTown && !Settlement.CurrentSettlement.IsCastle)
        return;
      this.OpenGates();
    }

    private void OpenGates()
    {
      foreach (CastleGate castleGate in Mission.Current.ActiveMissionObjects.FindAllWithType<CastleGate>().ToList<CastleGate>())
        castleGate.OpenDoorAndDisableGateForCivilianMission();
    }
  }
}
