// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.MissionLogics.SandBoxSallyOutMissionController
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.MissionLogics
{
  public class SandBoxSallyOutMissionController : SallyOutMissionController
  {
    private MapEvent _mapEvent;

    public override void OnBehaviorInitialize()
    {
      base.OnBehaviorInitialize();
      this._mapEvent = MapEvent.PlayerMapEvent;
    }

    protected override void GetInitialTroopCounts(
      out int besiegedTotalTroopCount,
      out int besiegerTotalTroopCount)
    {
      besiegedTotalTroopCount = this._mapEvent.GetNumberOfInvolvedMen(BattleSideEnum.Defender);
      besiegerTotalTroopCount = this._mapEvent.GetNumberOfInvolvedMen(BattleSideEnum.Attacker);
    }
  }
}
