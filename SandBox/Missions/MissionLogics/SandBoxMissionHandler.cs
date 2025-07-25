// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SandBoxMissionHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SandBoxMissionHandler : MissionLogic
  {
    public override void OnAgentRemoved(
      Agent affectedAgent,
      Agent affectorAgent,
      AgentState agentState,
      KillingBlow killingBlow)
    {
      if (affectedAgent != null && affectedAgent.Character != CharacterObject.PlayerCharacter || affectedAgent != affectorAgent && affectorAgent != null)
        return;
      Campaign.Current.GameMenuManager.SetNextMenu("settlement_player_unconscious");
    }
  }
}
