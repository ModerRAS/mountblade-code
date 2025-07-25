// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionLogic
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MissionLogic : MissionBehavior
  {
    public override MissionBehaviorType BehaviorType => MissionBehaviorType.Logic;

    public virtual InquiryData OnEndMissionRequest(out bool canLeave)
    {
      canLeave = true;
      return (InquiryData) null;
    }

    public virtual bool MissionEnded(ref MissionResult missionResult) => false;

    public virtual void OnBattleEnded()
    {
    }

    public virtual void ShowBattleResults()
    {
    }

    public virtual void OnRetreatMission()
    {
    }

    public virtual void OnSurrenderMission()
    {
    }

    public virtual void OnAutoDeployTeam(Team team)
    {
    }

    public virtual List<EquipmentElement> GetExtraEquipmentElementsForCharacter(
      BasicCharacterObject character,
      bool getAllEquipments = false)
    {
      return (List<EquipmentElement>) null;
    }

    public virtual void OnMissionResultReady(MissionResult missionResult)
    {
    }
  }
}
