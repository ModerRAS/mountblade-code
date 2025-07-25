// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionSpawnSettings
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public struct MissionSpawnSettings
  {
    public const float MinimumReinforcementInterval = 1f;
    public const float MinimumDefenderAdvantageFactor = 0.1f;
    public const float MaximumDefenderAdvantageFactor = 10f;
    public const float MinimumBattleSizeRatioLimit = 0.5f;
    public const float MaximumBattleSizeRatioLimit = 0.99f;
    public const float DefaultMaximumBattleSizeRatio = 0.75f;
    public const float DefaultDefenderAdvantageFactor = 1f;
    private float _globalReinforcementInterval;
    private float _defenderAdvantageFactor;
    private float _maximumBattleSizeRatio;
    private float _reinforcementBatchPercentage;
    private float _desiredReinforcementPercentage;
    private float _reinforcementWavePercentage;
    private int _maximumReinforcementWaveCount;
    private float _defenderReinforcementBatchPercentage;
    private float _attackerReinforcementBatchPercentage;

    public float GlobalReinforcementInterval
    {
      get => this._globalReinforcementInterval;
      set => this._globalReinforcementInterval = MathF.Max(value, 1f);
    }

    public float DefenderAdvantageFactor
    {
      get => this._defenderAdvantageFactor;
      set => this._defenderAdvantageFactor = MathF.Clamp(value, 0.1f, 10f);
    }

    public float MaximumBattleSideRatio
    {
      get => this._maximumBattleSizeRatio;
      set => this._maximumBattleSizeRatio = MathF.Clamp(value, 0.5f, 0.99f);
    }

    public MissionSpawnSettings.InitialSpawnMethod InitialTroopsSpawnMethod { get; private set; }

    public MissionSpawnSettings.ReinforcementTimingMethod ReinforcementTroopsTimingMethod { get; private set; }

    public MissionSpawnSettings.ReinforcementSpawnMethod ReinforcementTroopsSpawnMethod { get; private set; }

    public float ReinforcementBatchPercentage
    {
      get => this._reinforcementBatchPercentage;
      set => this._reinforcementBatchPercentage = MathF.Clamp(value, 0.0f, 1f);
    }

    public float DesiredReinforcementPercentage
    {
      get => this._desiredReinforcementPercentage;
      set => this._desiredReinforcementPercentage = MathF.Clamp(value, 0.0f, 1f);
    }

    public float ReinforcementWavePercentage
    {
      get => this._reinforcementWavePercentage;
      set => this._reinforcementWavePercentage = MathF.Clamp(value, 0.0f, 1f);
    }

    public int MaximumReinforcementWaveCount
    {
      get => this._maximumReinforcementWaveCount;
      set => this._maximumReinforcementWaveCount = MathF.Max(value, 0);
    }

    public float DefenderReinforcementBatchPercentage
    {
      get => this._defenderReinforcementBatchPercentage;
      set => this._defenderReinforcementBatchPercentage = MathF.Clamp(value, 0.0f, 1f);
    }

    public float AttackerReinforcementBatchPercentage
    {
      get => this._attackerReinforcementBatchPercentage;
      set => this._attackerReinforcementBatchPercentage = MathF.Clamp(value, 0.0f, 1f);
    }

    public MissionSpawnSettings(
      MissionSpawnSettings.InitialSpawnMethod initialTroopsSpawnMethod,
      MissionSpawnSettings.ReinforcementTimingMethod reinforcementTimingMethod,
      MissionSpawnSettings.ReinforcementSpawnMethod reinforcementTroopsSpawnMethod,
      float globalReinforcementInterval = 0.0f,
      float reinforcementBatchPercentage = 0.0f,
      float desiredReinforcementPercentage = 0.0f,
      float reinforcementWavePercentage = 0.0f,
      int maximumReinforcementWaveCount = 0,
      float defenderReinforcementBatchPercentage = 0.0f,
      float attackerReinforcementBatchPercentage = 0.0f,
      float defenderAdvantageFactor = 1f,
      float maximumBattleSizeRatio = 0.75f)
      : this()
    {
      this.InitialTroopsSpawnMethod = initialTroopsSpawnMethod;
      this.ReinforcementTroopsTimingMethod = reinforcementTimingMethod;
      this.ReinforcementTroopsSpawnMethod = reinforcementTroopsSpawnMethod;
      this.GlobalReinforcementInterval = globalReinforcementInterval;
      this.ReinforcementBatchPercentage = reinforcementBatchPercentage;
      this.DesiredReinforcementPercentage = desiredReinforcementPercentage;
      this.ReinforcementWavePercentage = reinforcementWavePercentage;
      this.MaximumReinforcementWaveCount = maximumReinforcementWaveCount;
      this.DefenderReinforcementBatchPercentage = defenderReinforcementBatchPercentage;
      this.AttackerReinforcementBatchPercentage = attackerReinforcementBatchPercentage;
      this.DefenderAdvantageFactor = defenderAdvantageFactor;
      this.MaximumBattleSideRatio = maximumBattleSizeRatio;
    }

    public static MissionSpawnSettings CreateDefaultSpawnSettings()
    {
      return new MissionSpawnSettings(MissionSpawnSettings.InitialSpawnMethod.BattleSizeAllocating, MissionSpawnSettings.ReinforcementTimingMethod.GlobalTimer, MissionSpawnSettings.ReinforcementSpawnMethod.Balanced, 10f, 0.05f, 0.166f);
    }

    public enum ReinforcementSpawnMethod
    {
      Balanced,
      Wave,
      Fixed,
    }

    public enum ReinforcementTimingMethod
    {
      GlobalTimer,
      CustomTimer,
    }

    public enum InitialSpawnMethod
    {
      BattleSizeAllocating,
      FreeAllocation,
    }
  }
}
