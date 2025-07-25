// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Options.OptionsProvider
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine.Options;
using TaleWorlds.InputSystem;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.Options.ManagedOptions;

#nullable disable
namespace TaleWorlds.MountAndBlade.Options
{
  public static class OptionsProvider
  {
    private static readonly int _overallConfigCount = NativeSelectionOptionData.GetOptionsLimit(NativeOptions.NativeOptionsType.OverAll) - 1;
    private static Dictionary<NativeOptions.NativeOptionsType, float[]> _defaultNativeOptions;
    private static Dictionary<TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType, float[]> _defaultManagedOptions;

    public static OptionCategory GetVideoOptionCategory(
      bool isMainMenu,
      Action onBrightnessClick,
      Action onExposureClick,
      Action onBenchmarkClick)
    {
      return new OptionCategory(OptionsProvider.GetVideoGeneralOptions(isMainMenu, onBrightnessClick, onExposureClick, onBenchmarkClick), OptionsProvider.GetVideoOptionGroups());
    }

    private static IEnumerable<IOptionData> GetVideoGeneralOptions(
      bool isMainMenu,
      Action onBrightnessClick,
      Action onExposureClick,
      Action onBenchmarkClick)
    {
      if (isMainMenu)
        yield return (IOptionData) new ActionOptionData("Benchmark", onBenchmarkClick);
      yield return (IOptionData) new ActionOptionData(NativeOptions.NativeOptionsType.Brightness, onBrightnessClick);
      yield return (IOptionData) new ActionOptionData(NativeOptions.NativeOptionsType.ExposureCompensation, onExposureClick);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.SelectedMonitor);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.SelectedAdapter);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.DisplayMode);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ScreenResolution);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.RefreshRate);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.VSync);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ForceVSyncInMenus);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.FrameLimiter);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.SharpenAmount);
    }

    private static IEnumerable<IOptionData> GetPerformanceGeneralOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.OverAll);
    }

    private static IEnumerable<OptionGroup> GetVideoOptionGroups()
    {
      return (IEnumerable<OptionGroup>) null;
    }

    public static OptionCategory GetPerformanceOptionCategory(bool isMultiplayer)
    {
      return new OptionCategory(OptionsProvider.GetPerformanceGeneralOptions(isMultiplayer), OptionsProvider.GetPerformanceOptionGroups(isMultiplayer));
    }

    private static IEnumerable<OptionGroup> GetPerformanceOptionGroups(bool isMultiplayer)
    {
      yield return new OptionGroup(new TextObject("{=sRTd3RI5}Graphics"), OptionsProvider.GetPerformanceGraphicsOptions(isMultiplayer));
      yield return new OptionGroup(new TextObject("{=vDMe8SCV}Resolution Scaling"), OptionsProvider.GetPerformanceResolutionScalingOptions(isMultiplayer));
      yield return new OptionGroup(new TextObject("{=2zcrC0h1}Gameplay"), OptionsProvider.GetPerformanceGameplayOptions(isMultiplayer));
      yield return new OptionGroup(new TextObject("{=xebFLnH2}Audio"), OptionsProvider.GetPerformanceAudioOptions());
    }

    public static IEnumerable<IOptionData> GetPerformanceGraphicsOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.Antialiasing);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ShaderQuality);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.TextureBudget);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.TextureQuality);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.TextureFiltering);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.CharacterDetail);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ShadowmapResolution);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ShadowmapType);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ShadowmapFiltering);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ParticleDetail);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.ParticleQuality);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.FoliageQuality);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.TerrainQuality);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.EnvironmentDetail);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.Occlusion);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.DecalQuality);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.WaterQuality);
      if (!isMultiplayer)
        yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.NumberOfCorpses);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.NumberOfRagDolls);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.LightingQuality);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.ClothSimulation);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.SunShafts);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.Tesselation);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.InteractiveGrass);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.SSR);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.SSSSS);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.MotionBlur);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.DepthOfField);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.Bloom);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.FilmGrain);
      if (NativeOptions.CheckGFXSupportStatus(65))
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.PostFXVignette);
      if (NativeOptions.CheckGFXSupportStatus(64))
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.PostFXChromaticAberration);
      if (NativeOptions.CheckGFXSupportStatus(62))
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.PostFXLensFlare);
      if (NativeOptions.CheckGFXSupportStatus(66))
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.PostFXHexagonVignette);
      if (NativeOptions.CheckGFXSupportStatus(63))
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.PostFXStreaks);
    }

    public static IEnumerable<IOptionData> GetPerformanceResolutionScalingOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.DLSS);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.ResolutionScale);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.DynamicResolution);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.DynamicResolutionTarget);
    }

    public static IEnumerable<IOptionData> GetPerformanceGameplayOptions(bool isMultiplayer)
    {
      if (!isMultiplayer)
        yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.BattleSize);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.AnimationSamplingQuality);
    }

    public static IEnumerable<IOptionData> GetPerformanceAudioOptions()
    {
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.MaxSimultaneousSoundEventCount);
    }

    private static IEnumerable<IOptionData> GetAudioGeneralOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.MasterVolume);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.SoundVolume);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.MusicVolume);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.VoiceOverVolume);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.SoundDevice);
      yield return (IOptionData) new NativeSelectionOptionData(NativeOptions.NativeOptionsType.SoundOutput);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.KeepSoundInBackground);
      if (isMultiplayer)
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableVoiceChat);
      else
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.SoundOcclusion);
    }

    public static OptionCategory GetAudioOptionCategory(bool isMultiplayer)
    {
      return new OptionCategory(OptionsProvider.GetAudioGeneralOptions(isMultiplayer), OptionsProvider.GetAudioOptionGroups(isMultiplayer));
    }

    private static IEnumerable<OptionGroup> GetAudioOptionGroups(bool isMultiplayer)
    {
      return (IEnumerable<OptionGroup>) null;
    }

    public static OptionCategory GetGameplayOptionCategory(bool isMainMenu, bool isMultiplayer)
    {
      return new OptionCategory(OptionsProvider.GetGameplayGeneralOptions(isMultiplayer), OptionsProvider.GetGameplayOptionGroups(isMainMenu, isMultiplayer));
    }

    private static IEnumerable<IOptionData> GetGameplayGeneralOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.Language);
      if (!isMultiplayer)
      {
        yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.VoiceLanguage);
        yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.UnitSpawnPrioritization);
        yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ReinforcementWaveCount);
      }
    }

    private static IEnumerable<OptionGroup> GetGameplayOptionGroups(
      bool isMainMenu,
      bool isMultiplayer)
    {
      yield return new OptionGroup(new TextObject("{=m9KoYCv5}Controls"), OptionsProvider.GetGameplayControlsOptions(isMainMenu, isMultiplayer));
      yield return new OptionGroup(new TextObject("{=uZ6q4Qs2}Visuals"), OptionsProvider.GetGameplayVisualOptions(isMultiplayer));
      yield return new OptionGroup(new TextObject("{=gAfbULHM}Camera"), OptionsProvider.GetGameplayCameraOptions(isMultiplayer));
      yield return new OptionGroup(new TextObject("{=WRMyiiYJ}User Interface"), OptionsProvider.GetGameplayUIOptions(isMultiplayer));
      if (!isMultiplayer)
        yield return new OptionGroup(new TextObject("{=ys9baYiQ}Campaign"), OptionsProvider.GetGameplayCampaignOptions());
    }

    private static IEnumerable<IOptionData> GetGameplayControlsOptions(
      bool isMainMenu,
      bool isMultiplayer)
    {
      bool isDualSense = Input.ControllerType.IsPlaystation();
      if (isDualSense)
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.GyroOverrideForAttackDefend);
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ControlBlockDirection);
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ControlAttackDirection);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.MouseYMovementScale);
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.MouseSensitivity);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.InvertMouseYAxis);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.EnableVibration);
      yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.EnableAlternateAiming);
      if (isDualSense)
      {
        if (isMainMenu)
          yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.EnableTouchpadMouse);
        yield return (IOptionData) new NativeBooleanOptionData(NativeOptions.NativeOptionsType.EnableGyroAssistedAim);
        yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.GyroAimSensitivity);
      }
      if (!isMultiplayer)
      {
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.LockTarget);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.SlowDownOnOrder);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.StopGameOnFocusLost);
      }
    }

    private static IEnumerable<IOptionData> GetGameplayVisualOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new NativeNumericOptionData(NativeOptions.NativeOptionsType.TrailAmount);
      yield return (IOptionData) new ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.FriendlyTroopsBannerOpacity);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ShowBlood);
    }

    private static IEnumerable<IOptionData> GetGameplayCameraOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.TurnCameraWithHorseInFirstPerson);
      yield return (IOptionData) new ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.FirstPersonFov);
      yield return (IOptionData) new ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.CombatCameraDistance);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableVerticalAimCorrection);
      yield return (IOptionData) new ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ZoomSensitivityModifier);
    }

    private static IEnumerable<IOptionData> GetGameplayUIOptions(bool isMultiplayer)
    {
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.CrosshairType);
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.OrderType);
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.OrderLayoutType);
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ReportCasualtiesType);
      yield return (IOptionData) new ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.UIScale);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ShowAttackDirection);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ShowTargetingReticle);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ReportDamage);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ReportBark);
      if (!isMultiplayer)
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ReportExperience);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.ReportPersonalDamage);
      yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableDamageTakenVisuals);
      if (isMultiplayer)
      {
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableMultiplayerChatBox);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableDeathIcon);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableNetworkAlertIcons);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableGenericAvatars);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableGenericNames);
      }
      else
      {
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableSingleplayerChatBox);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.HideBattleUI);
        yield return (IOptionData) new ManagedBooleanOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.EnableTutorialHints);
      }
    }

    private static IEnumerable<IOptionData> GetGameplayCampaignOptions()
    {
      yield return (IOptionData) new ManagedSelectionOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.AutoTrackAttackedSettlements);
      yield return (IOptionData) new ManagedNumericOptionData(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.AutoSaveInterval);
    }

    public static IEnumerable<string> GetGameKeyCategoriesList(bool isMultiplayer)
    {
      yield return GameKeyMainCategories.ActionCategory;
      yield return GameKeyMainCategories.OrderMenuCategory;
      if (!isMultiplayer)
      {
        yield return GameKeyMainCategories.CampaignMapCategory;
        yield return GameKeyMainCategories.MenuShortcutCategory;
        yield return GameKeyMainCategories.PhotoModeCategory;
      }
      else
        yield return GameKeyMainCategories.PollCategory;
      yield return GameKeyMainCategories.ChatCategory;
    }

    public static OptionCategory GetControllerOptionCategory()
    {
      return new OptionCategory(OptionsProvider.GetControllerBaseOptions(), OptionsProvider.GetControllerOptionGroups());
    }

    private static IEnumerable<IOptionData> GetControllerBaseOptions()
    {
      return (IEnumerable<IOptionData>) null;
    }

    private static IEnumerable<OptionGroup> GetControllerOptionGroups()
    {
      return (IEnumerable<OptionGroup>) null;
    }

    public static Dictionary<NativeOptions.NativeOptionsType, float[]> GetDefaultNativeOptions()
    {
      if (OptionsProvider._defaultNativeOptions == null)
      {
        OptionsProvider._defaultNativeOptions = new Dictionary<NativeOptions.NativeOptionsType, float[]>();
        foreach (NativeOptionData nativeOptionData in NativeOptions.VideoOptions.Union<NativeOptionData>((IEnumerable<NativeOptionData>) NativeOptions.GraphicsOptions))
        {
          float[] numArray = new float[OptionsProvider._overallConfigCount];
          bool flag = false;
          for (int config = 0; config < OptionsProvider._overallConfigCount; ++config)
          {
            numArray[config] = NativeOptions.GetDefaultConfigForOverallSettings(nativeOptionData.Type, config);
            if ((double) numArray[config] < 0.0)
            {
              flag = true;
              break;
            }
          }
          if (!flag)
            OptionsProvider._defaultNativeOptions[nativeOptionData.Type] = numArray;
        }
      }
      return OptionsProvider._defaultNativeOptions;
    }

    public static Dictionary<TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType, float[]> GetDefaultManagedOptions()
    {
      if (OptionsProvider._defaultManagedOptions == null)
      {
        OptionsProvider._defaultManagedOptions = new Dictionary<TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType, float[]>();
        float[] numArray1 = new float[OptionsProvider._overallConfigCount];
        for (int index = 0; index < OptionsProvider._overallConfigCount; ++index)
          numArray1[index] = (float) index;
        OptionsProvider._defaultManagedOptions.Add(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.BattleSize, numArray1);
        float[] numArray2 = new float[OptionsProvider._overallConfigCount];
        for (int index = 0; index < OptionsProvider._overallConfigCount; ++index)
          numArray2[index] = (float) index;
        OptionsProvider._defaultManagedOptions.Add(TaleWorlds.MountAndBlade.ManagedOptions.ManagedOptionsType.NumberOfCorpses, numArray2);
      }
      return OptionsProvider._defaultManagedOptions;
    }
  }
}
