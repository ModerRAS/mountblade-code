// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.CampaignSiegeStateHandler
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class CampaignSiegeStateHandler : MissionLogic
  {
    private readonly MapEvent _mapEvent;
    private bool _isRetreat;
    private bool _defenderVictory;

    public bool IsSiege => this._mapEvent.IsSiegeAssault;

    public bool IsSallyOut => this._mapEvent.IsSallyOut;

    public Settlement Settlement => this._mapEvent.MapEventSettlement;

    public CampaignSiegeStateHandler() => this._mapEvent = PlayerEncounter.Battle;

    public override void OnRetreatMission() => this._isRetreat = true;

    public override void OnMissionResultReady(MissionResult missionResult)
    {
      this._defenderVictory = missionResult.BattleState == BattleState.DefenderVictory;
    }

    public override void OnSurrenderMission() => PlayerEncounter.PlayerSurrender = true;

    protected override void OnEndMission()
    {
      if (!this.IsSiege || this._mapEvent.PlayerSide != BattleSideEnum.Attacker || this._isRetreat || this._defenderVictory)
        return;
      this.Settlement.SetNextSiegeState();
    }
  }
}
