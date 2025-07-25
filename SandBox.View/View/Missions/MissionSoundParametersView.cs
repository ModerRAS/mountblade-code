// Decompiled with JetBrains decompiler
// Type: SandBox.View.Missions.MissionSoundParametersView
// Assembly: SandBox.View, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 0A839D79-47BB-4148-AC54-5FF94CFF4273
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.View.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.MissionViews;

#nullable disable
namespace SandBox.View.Missions
{
  [DefaultView]
  public class MissionSoundParametersView : MissionView
  {
    private const string CultureParameterId = "MissionCulture";
    private const string ProsperityParameterId = "MissionProsperity";
    private const string CombatParameterId = "MissionCombatMode";

    public override void EarlyStart()
    {
      base.EarlyStart();
      this.InitializeGlobalParameters();
    }

    public override void OnMissionScreenFinalize()
    {
      base.OnMissionScreenFinalize();
      SoundManager.SetGlobalParameter("MissionCulture", 0.0f);
      SoundManager.SetGlobalParameter("MissionProsperity", 0.0f);
      SoundManager.SetGlobalParameter("MissionCombatMode", 0.0f);
    }

    public override void OnMissionModeChange(MissionMode oldMissionMode, bool atStart)
    {
      this.InitializeCombatModeParameter();
    }

    private void InitializeGlobalParameters()
    {
      this.InitializeCultureParameter();
      this.InitializeProsperityParameter();
      this.InitializeCombatModeParameter();
    }

    private void InitializeCultureParameter()
    {
      MissionSoundParametersView.SoundParameterMissionCulture parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.None;
      if (Campaign.Current != null)
      {
        Settlement currentSettlement = Settlement.CurrentSettlement;
        if (currentSettlement != null)
        {
          if (currentSettlement.IsHideout)
          {
            parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Bandit;
          }
          else
          {
            switch (currentSettlement.Culture.StringId)
            {
              case "empire":
                parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Empire;
                break;
              case "sturgia":
                parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Sturgia;
                break;
              case "aserai":
                parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Aserai;
                break;
              case "vlandia":
                parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Vlandia;
                break;
              case "battania":
                parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Battania;
                break;
              case "khuzait":
                parameterMissionCulture = MissionSoundParametersView.SoundParameterMissionCulture.Khuzait;
                break;
            }
          }
        }
      }
      SoundManager.SetGlobalParameter("MissionCulture", (float) parameterMissionCulture);
    }

    private void InitializeProsperityParameter()
    {
      MissionSoundParametersView.SoundParameterMissionProsperityLevel missionProsperityLevel = MissionSoundParametersView.SoundParameterMissionProsperityLevel.None;
      if (Campaign.Current != null && Settlement.CurrentSettlement != null)
      {
        switch (Settlement.CurrentSettlement.SettlementComponent.GetProsperityLevel())
        {
          case SettlementComponent.ProsperityLevel.Low:
            missionProsperityLevel = MissionSoundParametersView.SoundParameterMissionProsperityLevel.None;
            break;
          case SettlementComponent.ProsperityLevel.Mid:
            missionProsperityLevel = MissionSoundParametersView.SoundParameterMissionProsperityLevel.Mid;
            break;
          case SettlementComponent.ProsperityLevel.High:
            missionProsperityLevel = MissionSoundParametersView.SoundParameterMissionProsperityLevel.High;
            break;
        }
      }
      SoundManager.SetGlobalParameter("MissionProsperity", (float) missionProsperityLevel);
    }

    private void InitializeCombatModeParameter()
    {
      SoundManager.SetGlobalParameter("MissionCombatMode", this.Mission.Mode == MissionMode.Battle || this.Mission.Mode == MissionMode.Duel || this.Mission.Mode == MissionMode.Tournament ? 1f : 0.0f);
    }

    public enum SoundParameterMissionCulture : short
    {
      None,
      Aserai,
      Battania,
      Empire,
      Khuzait,
      Sturgia,
      Vlandia,
      Bandit,
    }

    private enum SoundParameterMissionProsperityLevel : short
    {
      Low = 0,
      None = 0,
      Mid = 1,
      High = 2,
    }
  }
}
