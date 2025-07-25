// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionMultiplayerFFA
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.MissionRepresentatives;
using TaleWorlds.ObjectSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MissionMultiplayerFFA : MissionMultiplayerGameModeBase
  {
    public override bool IsGameModeHidingAllAgentVisuals => true;

    public override bool IsGameModeUsingOpposingTeams => false;

    public override MultiplayerGameType GetMissionType() => MultiplayerGameType.FreeForAll;

    public override void AfterStart()
    {
      BasicCultureObject basicCultureObject = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue());
      Banner banner = new Banner(basicCultureObject.BannerKey, basicCultureObject.BackgroundColor1, basicCultureObject.ForegroundColor1);
      Team otherTeam = this.Mission.Teams.Add(BattleSideEnum.Attacker, basicCultureObject.BackgroundColor1, basicCultureObject.ForegroundColor1, banner, false);
      otherTeam.SetIsEnemyOf(otherTeam, true);
    }

    protected override void HandleEarlyNewClientAfterLoadingFinished(NetworkCommunicator networkPeer)
    {
      networkPeer.AddComponent<FFAMissionRepresentative>();
    }

    protected override void HandleNewClientAfterSynchronized(NetworkCommunicator networkPeer)
    {
      MissionPeer component = networkPeer.GetComponent<MissionPeer>();
      component.Team = this.Mission.AttackerTeam;
      component.Culture = MBObjectManager.Instance.GetObject<BasicCultureObject>(MultiplayerOptions.OptionType.CultureTeam1.GetStrValue());
    }
  }
}
