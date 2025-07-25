// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MissionGameModels
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class MissionGameModels : GameModelsManager
  {
    public static MissionGameModels Current { get; private set; }

    public AgentStatCalculateModel AgentStatCalculateModel { get; private set; }

    public ApplyWeatherEffectsModel ApplyWeatherEffectsModel { get; private set; }

    public StrikeMagnitudeCalculationModel StrikeMagnitudeModel { get; private set; }

    public AgentApplyDamageModel AgentApplyDamageModel { get; private set; }

    public AgentDecideKilledOrUnconsciousModel AgentDecideKilledOrUnconsciousModel { get; private set; }

    public MissionDifficultyModel MissionDifficultyModel { get; private set; }

    public BattleMoraleModel BattleMoraleModel { get; private set; }

    public BattleInitializationModel BattleInitializationModel { get; private set; }

    public BattleSpawnModel BattleSpawnModel { get; private set; }

    public BattleBannerBearersModel BattleBannerBearersModel { get; private set; }

    public FormationArrangementModel FormationArrangementsModel { get; private set; }

    public AutoBlockModel AutoBlockModel { get; private set; }

    public DamageParticleModel DamageParticleModel { get; private set; }

    public ItemPickupModel ItemPickupModel { get; private set; }

    private void GetSpecificGameBehaviors()
    {
      this.AgentStatCalculateModel = this.GetGameModel<AgentStatCalculateModel>();
      this.ApplyWeatherEffectsModel = this.GetGameModel<ApplyWeatherEffectsModel>();
      this.StrikeMagnitudeModel = this.GetGameModel<StrikeMagnitudeCalculationModel>();
      this.AgentApplyDamageModel = this.GetGameModel<AgentApplyDamageModel>();
      this.AgentDecideKilledOrUnconsciousModel = this.GetGameModel<AgentDecideKilledOrUnconsciousModel>();
      this.MissionDifficultyModel = this.GetGameModel<MissionDifficultyModel>();
      this.BattleMoraleModel = this.GetGameModel<BattleMoraleModel>();
      this.BattleInitializationModel = this.GetGameModel<BattleInitializationModel>();
      this.BattleSpawnModel = this.GetGameModel<BattleSpawnModel>();
      this.BattleBannerBearersModel = this.GetGameModel<BattleBannerBearersModel>();
      this.FormationArrangementsModel = this.GetGameModel<FormationArrangementModel>();
      this.AutoBlockModel = this.GetGameModel<AutoBlockModel>();
      this.DamageParticleModel = this.GetGameModel<DamageParticleModel>();
      this.ItemPickupModel = this.GetGameModel<ItemPickupModel>();
    }

    private void MakeGameComponentBindings()
    {
    }

    public MissionGameModels(IEnumerable<GameModel> inputComponents)
      : base(inputComponents)
    {
      MissionGameModels.Current = this;
      this.GetSpecificGameBehaviors();
      this.MakeGameComponentBindings();
    }

    public static void Clear() => MissionGameModels.Current = (MissionGameModels) null;
  }
}
