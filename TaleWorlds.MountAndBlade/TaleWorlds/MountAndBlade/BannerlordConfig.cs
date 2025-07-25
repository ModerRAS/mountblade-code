// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.BannerlordConfig
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Reflection;
using System.Text.RegularExpressions;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class BannerlordConfig
  {
    private static int[] _battleSizes = new int[7]
    {
      200,
      300,
      400,
      500,
      600,
      800,
      1000
    };
    private static int[] _siegeBattleSizes = new int[7]
    {
      150,
      230,
      320,
      425,
      540,
      625,
      1000
    };
    private static int[] _sallyOutBattleSizes = new int[7]
    {
      150,
      200,
      240,
      280,
      320,
      360,
      400
    };
    private static int[] _reinforcementWaveCounts = new int[4]
    {
      3,
      4,
      5,
      0
    };
    public static double SiegeBattleSizeMultiplier = 0.8;
    public const bool DefaultGyroOverrideForAttackDefend = false;
    public const int DefaultAttackDirectionControl = 1;
    public const int DefaultDefendDirectionControl = 0;
    public const int DefaultNumberOfCorpses = 3;
    public const bool DefaultShowBlood = true;
    public const bool DefaultDisplayAttackDirection = true;
    public const bool DefaultDisplayTargetingReticule = true;
    public const bool DefaultForceVSyncInMenus = true;
    public const int DefaultBattleSize = 2;
    public const int DefaultReinforcementWaveCount = 3;
    public const float DefaultBattleSizeMultiplier = 0.5f;
    public const float DefaultFirstPersonFov = 65f;
    public const float DefaultUIScale = 1f;
    public const float DefaultCombatCameraDistance = 1f;
    public const int DefaultCombatAI = 0;
    public const int DefaultTurnCameraWithHorseInFirstPerson = 2;
    public const int DefaultAutoSaveInterval = 30;
    public const float DefaultFriendlyTroopsBannerOpacity = 1f;
    public const bool DefaultReportDamage = true;
    public const bool DefaultReportBark = true;
    public const bool DefaultEnableTutorialHints = true;
    public const int DefaultReportCasualtiesType = 0;
    public const int DefaultAutoTrackAttackedSettlements = 0;
    public const bool DefaultReportPersonalDamage = true;
    public const bool DefaultStopGameOnFocusLost = true;
    public const bool DefaultSlowDownOnOrder = true;
    public const bool DefaultReportExperience = true;
    public const bool DefaultEnableDamageTakenVisuals = true;
    public const bool DefaultEnableVoiceChat = true;
    public const bool DefaultEnableDeathIcon = true;
    public const bool DefaultEnableNetworkAlertIcons = true;
    public const bool DefaultEnableVerticalAimCorrection = true;
    public const float DefaultZoomSensitivityModifier = 0.66666f;
    public const bool DefaultSingleplayerEnableChatBox = true;
    public const bool DefaultMultiplayerEnableChatBox = true;
    public const float DefaultChatBoxSizeX = 495f;
    public const float DefaultChatBoxSizeY = 340f;
    public const int DefaultCrosshairType = 0;
    public const bool DefaultEnableGenericAvatars = false;
    public const bool DefaultEnableGenericNames = false;
    public const bool DefaultHideFullServers = false;
    public const bool DefaultHideEmptyServers = false;
    public const bool DefaultHidePasswordProtectedServers = false;
    public const bool DefaultHideUnofficialServers = false;
    public const bool DefaultHideModuleIncompatibleServers = false;
    public const int DefaultOrderLayoutType = 0;
    public const bool DefaultHideBattleUI = false;
    public const int DefaultUnitSpawnPrioritization = 0;
    public const int DefaultOrderType = 0;
    public const bool DefaultLockTarget = false;
    private static string _language = BannerlordConfig.DefaultLanguage;
    private static string _voiceLanguage = BannerlordConfig.DefaultLanguage;
    private static int _numberOfCorpses = 3;
    private static int _battleSize = 2;
    private static int _autoSaveInterval = 30;
    private static bool _stopGameOnFocusLost = true;
    private static int _orderType = 0;
    private static int _orderLayoutType = 0;

    public static int MinBattleSize => BannerlordConfig._battleSizes[0];

    public static int MaxBattleSize
    {
      get => BannerlordConfig._battleSizes[BannerlordConfig._battleSizes.Length - 1];
    }

    public static int MinReinforcementWaveCount => BannerlordConfig._reinforcementWaveCounts[0];

    public static int MaxReinforcementWaveCount
    {
      get
      {
        return BannerlordConfig._reinforcementWaveCounts[BannerlordConfig._reinforcementWaveCounts.Length - 1];
      }
    }

    public static void Initialize()
    {
      string str1 = Utilities.LoadBannerlordConfigFile();
      if (string.IsNullOrEmpty(str1))
      {
        int num1 = (int) BannerlordConfig.Save();
      }
      else
      {
        bool flag = false;
        string str2 = str1;
        char[] chArray1 = new char[1]{ '\n' };
        foreach (string str3 in str2.Split(chArray1))
        {
          char[] chArray2 = new char[1]{ '=' };
          string[] strArray = str3.Split(chArray2);
          PropertyInfo property = typeof (BannerlordConfig).GetProperty(strArray[0]);
          if (property == (PropertyInfo) null)
          {
            flag = true;
          }
          else
          {
            string str4 = strArray[1];
            try
            {
              if (property.PropertyType == typeof (string))
              {
                string str5 = Regex.Replace(str4, "\\r", "");
                property.SetValue((object) null, (object) str5);
              }
              else if (property.PropertyType == typeof (float))
              {
                float result;
                if (float.TryParse(str4, out result))
                  property.SetValue((object) null, (object) result);
                else
                  flag = true;
              }
              else if (property.PropertyType == typeof (int))
              {
                int result;
                if (int.TryParse(str4, out result))
                {
                  BannerlordConfig.ConfigPropertyInt customAttribute = property.GetCustomAttribute<BannerlordConfig.ConfigPropertyInt>();
                  if (customAttribute == null || customAttribute.IsValidValue(result))
                    property.SetValue((object) null, (object) result);
                  else
                    flag = true;
                }
                else
                  flag = true;
              }
              else if (property.PropertyType == typeof (bool))
              {
                bool result;
                if (bool.TryParse(str4, out result))
                  property.SetValue((object) null, (object) result);
                else
                  flag = true;
              }
              else
              {
                flag = true;
                Debug.FailedAssert("false", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\BannerlordConfig.cs", nameof (Initialize), 113);
              }
            }
            catch
            {
              flag = true;
            }
          }
        }
        if (flag)
        {
          int num2 = (int) BannerlordConfig.Save();
        }
        MBAPI.IMBBannerlordConfig.ValidateOptions();
      }
      MBTextManager.TryChangeVoiceLanguage(BannerlordConfig.VoiceLanguage);
      MBTextManager.ChangeLanguage(BannerlordConfig.Language);
      MBTextManager.LocalizationDebugMode = NativeConfig.LocalizationDebugMode;
    }

    public static SaveResult Save()
    {
      Dictionary<PropertyInfo, object> dictionary = new Dictionary<PropertyInfo, object>();
      foreach (PropertyInfo property in typeof (BannerlordConfig).GetProperties())
      {
        if (property.GetCustomAttribute<BannerlordConfig.ConfigProperty>() != null)
          dictionary.Add(property, property.GetValue((object) null, (object[]) null));
      }
      string configProperties = "";
      foreach (KeyValuePair<PropertyInfo, object> keyValuePair in dictionary)
        configProperties = configProperties + keyValuePair.Key.Name + "=" + keyValuePair.Value.ToString() + "\n";
      int num = (int) Utilities.SaveConfigFile(configProperties);
      MBAPI.IMBBannerlordConfig.ValidateOptions();
      return (SaveResult) num;
    }

    public static string DefaultLanguage => BannerlordConfig.GetDefaultLanguage();

    public static int GetRealBattleSize()
    {
      return BannerlordConfig._battleSizes[BannerlordConfig.BattleSize];
    }

    public static int GetRealBattleSizeForSiege()
    {
      return BannerlordConfig._siegeBattleSizes[BannerlordConfig.BattleSize];
    }

    public static int GetReinforcementWaveCount()
    {
      return BannerlordConfig._reinforcementWaveCounts[BannerlordConfig.ReinforcementWaveCount];
    }

    public static int GetRealBattleSizeForSallyOut()
    {
      return BannerlordConfig._sallyOutBattleSizes[BannerlordConfig.BattleSize];
    }

    private static string GetDefaultLanguage()
    {
      return LocalizedTextManager.GetLocalizationCodeOfISOLanguageCode(Utilities.GetSystemLanguage());
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static string Language
    {
      get => BannerlordConfig._language;
      set
      {
        if (!(BannerlordConfig._language != value))
          return;
        if (MBTextManager.LanguageExistsInCurrentConfiguration(value, NativeConfig.IsDevelopmentMode) && MBTextManager.ChangeLanguage(value))
          BannerlordConfig._language = value;
        else if (MBTextManager.ChangeLanguage("English"))
          BannerlordConfig._language = "English";
        else
          Debug.FailedAssert("Language cannot be set!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\BannerlordConfig.cs", nameof (Language), 353);
        MBTextManager.LocalizationDebugMode = NativeConfig.LocalizationDebugMode;
      }
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static string VoiceLanguage
    {
      get => BannerlordConfig._voiceLanguage;
      set
      {
        if (!(BannerlordConfig._voiceLanguage != value))
          return;
        if (MBTextManager.LanguageExistsInCurrentConfiguration(value, NativeConfig.IsDevelopmentMode) && MBTextManager.TryChangeVoiceLanguage(value))
          BannerlordConfig._voiceLanguage = value;
        else if (MBTextManager.TryChangeVoiceLanguage("English"))
          BannerlordConfig._voiceLanguage = "English";
        else
          Debug.FailedAssert("Voice Language cannot be set!", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\BannerlordConfig.cs", nameof (VoiceLanguage), 380);
      }
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool GyroOverrideForAttackDefend { get; set; } = false;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2}, false)]
    public static int AttackDirectionControl { get; set; } = 1;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2}, false)]
    public static int DefendDirectionControl { get; set; } = 0;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2, 3, 4, 5}, false)]
    public static int NumberOfCorpses
    {
      get => BannerlordConfig._numberOfCorpses;
      set => BannerlordConfig._numberOfCorpses = value;
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool ShowBlood { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool DisplayAttackDirection { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool DisplayTargetingReticule { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool ForceVSyncInMenus { get; set; } = true;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2, 3, 4, 5, 6}, false)]
    public static int BattleSize
    {
      get => BannerlordConfig._battleSize;
      set => BannerlordConfig._battleSize = value;
    }

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2, 3}, false)]
    public static int ReinforcementWaveCount { get; set; } = 3;

    public static float CivilianAgentCount => (float) BannerlordConfig.GetRealBattleSize() * 0.5f;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float FirstPersonFov { get; set; } = 65f;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float UIScale { get; set; } = 1f;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float CombatCameraDistance { get; set; } = 1f;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2, 3}, false)]
    public static int TurnCameraWithHorseInFirstPerson { get; set; } = 2;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool ReportDamage { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool ReportBark { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool LockTarget { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableTutorialHints { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static int AutoSaveInterval
    {
      get => BannerlordConfig._autoSaveInterval;
      set
      {
        if (value == 4)
          BannerlordConfig._autoSaveInterval = -1;
        else
          BannerlordConfig._autoSaveInterval = value;
      }
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float FriendlyTroopsBannerOpacity { get; set; } = 1f;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2}, false)]
    public static int ReportCasualtiesType { get; set; } = 0;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2}, false)]
    public static int AutoTrackAttackedSettlements { get; set; } = 0;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool ReportPersonalDamage { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool SlowDownOnOrder { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool StopGameOnFocusLost
    {
      get => BannerlordConfig._stopGameOnFocusLost;
      set => BannerlordConfig._stopGameOnFocusLost = value;
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool ReportExperience { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableDamageTakenVisuals { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableVerticalAimCorrection { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float ZoomSensitivityModifier { get; set; } = 0.66666f;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1}, false)]
    public static int CrosshairType { get; set; } = 0;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableGenericAvatars { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableGenericNames { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool HideFullServers { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool HideEmptyServers { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool HidePasswordProtectedServers { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool HideUnofficialServers { get; set; } = false;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool HideModuleIncompatibleServers { get; set; } = false;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1}, false)]
    public static int OrderType
    {
      get => BannerlordConfig._orderType;
      set => BannerlordConfig._orderType = value;
    }

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1}, false)]
    public static int OrderLayoutType
    {
      get => BannerlordConfig._orderLayoutType;
      set => BannerlordConfig._orderLayoutType = value;
    }

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableVoiceChat { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableDeathIcon { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableNetworkAlertIcons { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableSingleplayerChatBox { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool EnableMultiplayerChatBox { get; set; } = true;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float ChatBoxSizeX { get; set; } = 495f;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static float ChatBoxSizeY { get; set; } = 340f;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static string LatestSaveGameName { get; set; } = string.Empty;

    [BannerlordConfig.ConfigPropertyUnbounded]
    public static bool HideBattleUI { get; set; } = false;

    [BannerlordConfig.ConfigPropertyInt(new int[] {0, 1, 2, 3}, false)]
    public static int UnitSpawnPrioritization { get; set; } = 0;

    private interface IConfigPropertyBoundChecker<T>
    {
    }

    private abstract class ConfigProperty : Attribute
    {
    }

    private sealed class ConfigPropertyInt : BannerlordConfig.ConfigProperty
    {
      private int[] _possibleValues;
      private bool _isRange;

      public ConfigPropertyInt(int[] possibleValues, bool isRange = false)
      {
        this._possibleValues = possibleValues;
        this._isRange = isRange;
        int num = this._isRange ? 1 : 0;
      }

      public bool IsValidValue(int value)
      {
        if (this._isRange)
          return value >= this._possibleValues[0] && value <= this._possibleValues[1];
        foreach (int possibleValue in this._possibleValues)
        {
          if (possibleValue == value)
            return true;
        }
        return false;
      }
    }

    private sealed class ConfigPropertyUnbounded : BannerlordConfig.ConfigProperty
    {
    }
  }
}
