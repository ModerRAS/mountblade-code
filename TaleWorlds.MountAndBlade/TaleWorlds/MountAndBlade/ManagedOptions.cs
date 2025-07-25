// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ManagedOptions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class ManagedOptions
  {
    public static ManagedOptions.OnManagedOptionChangedDelegate OnManagedOptionChanged;

    public static float GetConfig(ManagedOptions.ManagedOptionsType type)
    {
      switch (type)
      {
        case ManagedOptions.ManagedOptionsType.Language:
          return (float) LocalizedTextManager.GetLanguageIds(NativeConfig.IsDevelopmentMode).IndexOf(BannerlordConfig.Language);
        case ManagedOptions.ManagedOptionsType.GyroOverrideForAttackDefend:
          return BannerlordConfig.GyroOverrideForAttackDefend ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ControlBlockDirection:
          return (float) BannerlordConfig.DefendDirectionControl;
        case ManagedOptions.ManagedOptionsType.ControlAttackDirection:
          return (float) BannerlordConfig.AttackDirectionControl;
        case ManagedOptions.ManagedOptionsType.NumberOfCorpses:
          return (float) BannerlordConfig.NumberOfCorpses;
        case ManagedOptions.ManagedOptionsType.BattleSize:
          return (float) BannerlordConfig.BattleSize;
        case ManagedOptions.ManagedOptionsType.ReinforcementWaveCount:
          return (float) BannerlordConfig.ReinforcementWaveCount;
        case ManagedOptions.ManagedOptionsType.TurnCameraWithHorseInFirstPerson:
          return (float) BannerlordConfig.TurnCameraWithHorseInFirstPerson;
        case ManagedOptions.ManagedOptionsType.ShowBlood:
          return BannerlordConfig.ShowBlood ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ShowAttackDirection:
          return BannerlordConfig.DisplayAttackDirection ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ShowTargetingReticle:
          return BannerlordConfig.DisplayTargetingReticule ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.AutoSaveInterval:
          return (float) BannerlordConfig.AutoSaveInterval;
        case ManagedOptions.ManagedOptionsType.FriendlyTroopsBannerOpacity:
          return BannerlordConfig.FriendlyTroopsBannerOpacity;
        case ManagedOptions.ManagedOptionsType.ReportDamage:
          return BannerlordConfig.ReportDamage ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ReportBark:
          return BannerlordConfig.ReportBark ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.LockTarget:
          return BannerlordConfig.LockTarget ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableTutorialHints:
          return BannerlordConfig.EnableTutorialHints ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ReportCasualtiesType:
          return (float) BannerlordConfig.ReportCasualtiesType;
        case ManagedOptions.ManagedOptionsType.ReportExperience:
          return BannerlordConfig.ReportExperience ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ReportPersonalDamage:
          return BannerlordConfig.ReportPersonalDamage ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.FirstPersonFov:
          return BannerlordConfig.FirstPersonFov;
        case ManagedOptions.ManagedOptionsType.CombatCameraDistance:
          return BannerlordConfig.CombatCameraDistance;
        case ManagedOptions.ManagedOptionsType.EnableDamageTakenVisuals:
          return BannerlordConfig.EnableDamageTakenVisuals ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableVoiceChat:
          return BannerlordConfig.EnableVoiceChat ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableDeathIcon:
          return BannerlordConfig.EnableDeathIcon ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableNetworkAlertIcons:
          return BannerlordConfig.EnableNetworkAlertIcons ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ForceVSyncInMenus:
          return BannerlordConfig.ForceVSyncInMenus ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableVerticalAimCorrection:
          return BannerlordConfig.EnableVerticalAimCorrection ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.ZoomSensitivityModifier:
          return BannerlordConfig.ZoomSensitivityModifier;
        case ManagedOptions.ManagedOptionsType.UIScale:
          return BannerlordConfig.UIScale;
        case ManagedOptions.ManagedOptionsType.CrosshairType:
          return (float) BannerlordConfig.CrosshairType;
        case ManagedOptions.ManagedOptionsType.EnableGenericAvatars:
          return BannerlordConfig.EnableGenericAvatars ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableGenericNames:
          return BannerlordConfig.EnableGenericNames ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.OrderType:
          return (float) BannerlordConfig.OrderType;
        case ManagedOptions.ManagedOptionsType.OrderLayoutType:
          return (float) BannerlordConfig.OrderLayoutType;
        case ManagedOptions.ManagedOptionsType.AutoTrackAttackedSettlements:
          return (float) BannerlordConfig.AutoTrackAttackedSettlements;
        case ManagedOptions.ManagedOptionsType.StopGameOnFocusLost:
          return BannerlordConfig.StopGameOnFocusLost ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.SlowDownOnOrder:
          return BannerlordConfig.SlowDownOnOrder ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.HideFullServers:
          return BannerlordConfig.HideFullServers ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.HideEmptyServers:
          return BannerlordConfig.HideEmptyServers ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.HidePasswordProtectedServers:
          return BannerlordConfig.HidePasswordProtectedServers ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.HideUnofficialServers:
          return BannerlordConfig.HideUnofficialServers ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.HideModuleIncompatibleServers:
          return BannerlordConfig.HideModuleIncompatibleServers ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.HideBattleUI:
          return BannerlordConfig.HideBattleUI ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.UnitSpawnPrioritization:
          return (float) BannerlordConfig.UnitSpawnPrioritization;
        case ManagedOptions.ManagedOptionsType.EnableSingleplayerChatBox:
          return BannerlordConfig.EnableSingleplayerChatBox ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableMultiplayerChatBox:
          return BannerlordConfig.EnableMultiplayerChatBox ? 1f : 0.0f;
        case ManagedOptions.ManagedOptionsType.VoiceLanguage:
          return (float) LocalizedVoiceManager.GetVoiceLanguageIds().IndexOf(BannerlordConfig.VoiceLanguage);
        default:
          Debug.FailedAssert("ManagedOptionsType not found", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Options\\ManagedOptions\\ManagedOptions.cs", nameof (GetConfig), 168);
          return 0.0f;
      }
    }

    public static float GetDefaultConfig(ManagedOptions.ManagedOptionsType type)
    {
      switch (type)
      {
        case ManagedOptions.ManagedOptionsType.Language:
          return (float) LocalizedTextManager.GetLanguageIds(NativeConfig.IsDevelopmentMode).IndexOf(BannerlordConfig.DefaultLanguage);
        case ManagedOptions.ManagedOptionsType.GyroOverrideForAttackDefend:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.ControlBlockDirection:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.ControlAttackDirection:
          return 1f;
        case ManagedOptions.ManagedOptionsType.NumberOfCorpses:
          return 3f;
        case ManagedOptions.ManagedOptionsType.BattleSize:
          return 2f;
        case ManagedOptions.ManagedOptionsType.ReinforcementWaveCount:
          return 3f;
        case ManagedOptions.ManagedOptionsType.TurnCameraWithHorseInFirstPerson:
          return 2f;
        case ManagedOptions.ManagedOptionsType.ShowBlood:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ShowAttackDirection:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ShowTargetingReticle:
          return 1f;
        case ManagedOptions.ManagedOptionsType.AutoSaveInterval:
          return 30f;
        case ManagedOptions.ManagedOptionsType.FriendlyTroopsBannerOpacity:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ReportDamage:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ReportBark:
          return 1f;
        case ManagedOptions.ManagedOptionsType.LockTarget:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableTutorialHints:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ReportCasualtiesType:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.ReportExperience:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ReportPersonalDamage:
          return 1f;
        case ManagedOptions.ManagedOptionsType.FirstPersonFov:
          return 65f;
        case ManagedOptions.ManagedOptionsType.CombatCameraDistance:
          return 1f;
        case ManagedOptions.ManagedOptionsType.EnableDamageTakenVisuals:
          return 1f;
        case ManagedOptions.ManagedOptionsType.EnableVoiceChat:
          return 1f;
        case ManagedOptions.ManagedOptionsType.EnableDeathIcon:
          return 1f;
        case ManagedOptions.ManagedOptionsType.EnableNetworkAlertIcons:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ForceVSyncInMenus:
          return 1f;
        case ManagedOptions.ManagedOptionsType.EnableVerticalAimCorrection:
          return 1f;
        case ManagedOptions.ManagedOptionsType.ZoomSensitivityModifier:
          return 0.66666f;
        case ManagedOptions.ManagedOptionsType.UIScale:
          return 1f;
        case ManagedOptions.ManagedOptionsType.CrosshairType:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableGenericAvatars:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableGenericNames:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.OrderType:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.OrderLayoutType:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.AutoTrackAttackedSettlements:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.StopGameOnFocusLost:
          return 1f;
        case ManagedOptions.ManagedOptionsType.SlowDownOnOrder:
          return 1f;
        case ManagedOptions.ManagedOptionsType.HideFullServers:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.HideEmptyServers:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.HidePasswordProtectedServers:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.HideUnofficialServers:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.HideModuleIncompatibleServers:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.HideBattleUI:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.UnitSpawnPrioritization:
          return 0.0f;
        case ManagedOptions.ManagedOptionsType.EnableSingleplayerChatBox:
          return 1f;
        case ManagedOptions.ManagedOptionsType.EnableMultiplayerChatBox:
          return 1f;
        case ManagedOptions.ManagedOptionsType.VoiceLanguage:
          return (float) LocalizedVoiceManager.GetVoiceLanguageIds().IndexOf(BannerlordConfig.VoiceLanguage);
        default:
          Debug.FailedAssert("ManagedOptionsType not found", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Options\\ManagedOptions\\ManagedOptions.cs", nameof (GetDefaultConfig), 273);
          return 0.0f;
      }
    }

    [MBCallback]
    internal static int GetConfigCount() => 48;

    [MBCallback]
    internal static float GetConfigValue(int type)
    {
      return ManagedOptions.GetConfig((ManagedOptions.ManagedOptionsType) type);
    }

    public static void SetConfig(ManagedOptions.ManagedOptionsType type, float value)
    {
      switch (type)
      {
        case ManagedOptions.ManagedOptionsType.Language:
          List<string> languageIds = LocalizedTextManager.GetLanguageIds(NativeConfig.IsDevelopmentMode);
          if ((double) value >= 0.0 && (double) value < (double) languageIds.Count)
          {
            BannerlordConfig.Language = languageIds[(int) value];
            break;
          }
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Options\\ManagedOptions\\ManagedOptions.cs", nameof (SetConfig), 433);
          BannerlordConfig.Language = languageIds[0];
          break;
        case ManagedOptions.ManagedOptionsType.GyroOverrideForAttackDefend:
          BannerlordConfig.GyroOverrideForAttackDefend = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ControlBlockDirection:
          BannerlordConfig.DefendDirectionControl = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.ControlAttackDirection:
          BannerlordConfig.AttackDirectionControl = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.NumberOfCorpses:
          BannerlordConfig.NumberOfCorpses = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.BattleSize:
          BannerlordConfig.BattleSize = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.ReinforcementWaveCount:
          BannerlordConfig.ReinforcementWaveCount = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.TurnCameraWithHorseInFirstPerson:
          BannerlordConfig.TurnCameraWithHorseInFirstPerson = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.ShowBlood:
          BannerlordConfig.ShowBlood = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ShowAttackDirection:
          BannerlordConfig.DisplayAttackDirection = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ShowTargetingReticle:
          BannerlordConfig.DisplayTargetingReticule = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.AutoSaveInterval:
          BannerlordConfig.AutoSaveInterval = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.FriendlyTroopsBannerOpacity:
          BannerlordConfig.FriendlyTroopsBannerOpacity = value;
          break;
        case ManagedOptions.ManagedOptionsType.ReportDamage:
          BannerlordConfig.ReportDamage = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ReportBark:
          BannerlordConfig.ReportBark = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.LockTarget:
          BannerlordConfig.LockTarget = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableTutorialHints:
          BannerlordConfig.EnableTutorialHints = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ReportCasualtiesType:
          BannerlordConfig.ReportCasualtiesType = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.ReportExperience:
          BannerlordConfig.ReportExperience = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ReportPersonalDamage:
          BannerlordConfig.ReportPersonalDamage = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.FirstPersonFov:
          BannerlordConfig.FirstPersonFov = value;
          break;
        case ManagedOptions.ManagedOptionsType.CombatCameraDistance:
          BannerlordConfig.CombatCameraDistance = value;
          break;
        case ManagedOptions.ManagedOptionsType.EnableDamageTakenVisuals:
          BannerlordConfig.EnableDamageTakenVisuals = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableVoiceChat:
          BannerlordConfig.EnableVoiceChat = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableDeathIcon:
          BannerlordConfig.EnableDeathIcon = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableNetworkAlertIcons:
          BannerlordConfig.EnableNetworkAlertIcons = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ForceVSyncInMenus:
          BannerlordConfig.ForceVSyncInMenus = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableVerticalAimCorrection:
          BannerlordConfig.EnableVerticalAimCorrection = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.ZoomSensitivityModifier:
          BannerlordConfig.ZoomSensitivityModifier = value;
          break;
        case ManagedOptions.ManagedOptionsType.UIScale:
          BannerlordConfig.UIScale = value;
          break;
        case ManagedOptions.ManagedOptionsType.CrosshairType:
          BannerlordConfig.CrosshairType = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.EnableGenericAvatars:
          BannerlordConfig.EnableGenericAvatars = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableGenericNames:
          BannerlordConfig.EnableGenericNames = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.OrderType:
          BannerlordConfig.OrderType = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.OrderLayoutType:
          BannerlordConfig.OrderLayoutType = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.AutoTrackAttackedSettlements:
          BannerlordConfig.AutoTrackAttackedSettlements = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.StopGameOnFocusLost:
          BannerlordConfig.StopGameOnFocusLost = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.SlowDownOnOrder:
          BannerlordConfig.SlowDownOnOrder = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.HideFullServers:
          BannerlordConfig.HideFullServers = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.HideEmptyServers:
          BannerlordConfig.HideEmptyServers = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.HidePasswordProtectedServers:
          BannerlordConfig.HidePasswordProtectedServers = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.HideUnofficialServers:
          BannerlordConfig.HideUnofficialServers = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.HideModuleIncompatibleServers:
          BannerlordConfig.HideModuleIncompatibleServers = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.HideBattleUI:
          BannerlordConfig.HideBattleUI = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.UnitSpawnPrioritization:
          BannerlordConfig.UnitSpawnPrioritization = (int) value;
          break;
        case ManagedOptions.ManagedOptionsType.EnableSingleplayerChatBox:
          BannerlordConfig.EnableSingleplayerChatBox = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.EnableMultiplayerChatBox:
          BannerlordConfig.EnableMultiplayerChatBox = (double) value != 0.0;
          break;
        case ManagedOptions.ManagedOptionsType.VoiceLanguage:
          List<string> voiceLanguageIds = LocalizedVoiceManager.GetVoiceLanguageIds();
          if ((double) value >= 0.0 && (double) value < (double) voiceLanguageIds.Count)
          {
            BannerlordConfig.VoiceLanguage = voiceLanguageIds[(int) value];
            break;
          }
          Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Options\\ManagedOptions\\ManagedOptions.cs", nameof (SetConfig), 451);
          BannerlordConfig.VoiceLanguage = voiceLanguageIds[0];
          break;
      }
      ManagedOptions.OnManagedOptionChangedDelegate managedOptionChanged = ManagedOptions.OnManagedOptionChanged;
      if (managedOptionChanged == null)
        return;
      managedOptionChanged(type);
    }

    public static SaveResult SaveConfig() => BannerlordConfig.Save();

    public enum ManagedOptionsType
    {
      Language,
      GyroOverrideForAttackDefend,
      ControlBlockDirection,
      ControlAttackDirection,
      NumberOfCorpses,
      BattleSize,
      ReinforcementWaveCount,
      TurnCameraWithHorseInFirstPerson,
      ShowBlood,
      ShowAttackDirection,
      ShowTargetingReticle,
      AutoSaveInterval,
      FriendlyTroopsBannerOpacity,
      ReportDamage,
      ReportBark,
      LockTarget,
      EnableTutorialHints,
      ReportCasualtiesType,
      ReportExperience,
      ReportPersonalDamage,
      FirstPersonFov,
      CombatCameraDistance,
      EnableDamageTakenVisuals,
      EnableVoiceChat,
      EnableDeathIcon,
      EnableNetworkAlertIcons,
      ForceVSyncInMenus,
      EnableVerticalAimCorrection,
      ZoomSensitivityModifier,
      UIScale,
      CrosshairType,
      EnableGenericAvatars,
      EnableGenericNames,
      OrderType,
      OrderLayoutType,
      AutoTrackAttackedSettlements,
      StopGameOnFocusLost,
      SlowDownOnOrder,
      HideFullServers,
      HideEmptyServers,
      HidePasswordProtectedServers,
      HideUnofficialServers,
      HideModuleIncompatibleServers,
      HideBattleUI,
      UnitSpawnPrioritization,
      EnableSingleplayerChatBox,
      EnableMultiplayerChatBox,
      VoiceLanguage,
      ManagedOptionTypeCount,
    }

    public delegate void OnManagedOptionChangedDelegate(
      ManagedOptions.ManagedOptionsType changedManagedOptionsType);
  }
}
