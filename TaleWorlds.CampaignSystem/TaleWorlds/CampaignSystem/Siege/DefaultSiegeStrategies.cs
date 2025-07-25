// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Siege.DefaultSiegeStrategies
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Siege
{
  public class DefaultSiegeStrategies
  {
    private SiegeStrategy _preserveStrength;
    private SiegeStrategy _prepareAgainstAssault;
    private SiegeStrategy _counterBombardment;
    private SiegeStrategy _prepareAssault;
    private SiegeStrategy _breachWalls;
    private SiegeStrategy _wearOutDefenders;
    private SiegeStrategy _custom;

    private static DefaultSiegeStrategies Instance => Campaign.Current.DefaultSiegeStrategies;

    public static SiegeStrategy PreserveStrength
    {
      get => DefaultSiegeStrategies.Instance._preserveStrength;
    }

    public static SiegeStrategy PrepareAgainstAssault
    {
      get => DefaultSiegeStrategies.Instance._prepareAgainstAssault;
    }

    public static SiegeStrategy CounterBombardment
    {
      get => DefaultSiegeStrategies.Instance._counterBombardment;
    }

    public static SiegeStrategy PrepareAssault => DefaultSiegeStrategies.Instance._prepareAssault;

    public static SiegeStrategy BreachWalls => DefaultSiegeStrategies.Instance._breachWalls;

    public static SiegeStrategy WearOutDefenders
    {
      get => DefaultSiegeStrategies.Instance._wearOutDefenders;
    }

    public static SiegeStrategy Custom => DefaultSiegeStrategies.Instance._custom;

    public static IEnumerable<SiegeStrategy> AllAttackerStrategies
    {
      get
      {
        yield return DefaultSiegeStrategies.PrepareAssault;
        yield return DefaultSiegeStrategies.BreachWalls;
        yield return DefaultSiegeStrategies.WearOutDefenders;
        yield return DefaultSiegeStrategies.PreserveStrength;
        yield return DefaultSiegeStrategies.Custom;
      }
    }

    public static IEnumerable<SiegeStrategy> AllDefenderStrategies
    {
      get
      {
        yield return DefaultSiegeStrategies.PrepareAgainstAssault;
        yield return DefaultSiegeStrategies.CounterBombardment;
        yield return DefaultSiegeStrategies.PreserveStrength;
        yield return DefaultSiegeStrategies.Custom;
      }
    }

    public DefaultSiegeStrategies() => this.RegisterAll();

    private void RegisterAll()
    {
      this._preserveStrength = this.Create("siege_strategy_preserve_strength");
      this._prepareAgainstAssault = this.Create("siege_strategy_prepare_against_assault");
      this._counterBombardment = this.Create("siege_strategy_counter_bombardment");
      this._prepareAssault = this.Create("siege_strategy_prepare_assault");
      this._breachWalls = this.Create("siege_strategy_breach_walls");
      this._wearOutDefenders = this.Create("siege_strategy_wear_out_defenders");
      this._custom = this.Create("siege_strategy_custom");
      this.InitializeAll();
    }

    private SiegeStrategy Create(string stringId)
    {
      return Game.Current.ObjectManager.RegisterPresumedObject<SiegeStrategy>(new SiegeStrategy(stringId));
    }

    private void InitializeAll()
    {
      this._custom.Initialize(new TextObject("{=!}Custom"), new TextObject("{=!}Custom strategy that can be managed entirely."));
      this._preserveStrength.Initialize(new TextObject("{=!}Preserve Strength"), new TextObject("{=!}Priority is set to preserving our strength."));
      this._prepareAgainstAssault.Initialize(new TextObject("{=!}Prepare Against Assault"), new TextObject("{=!}Priority is set to keep advantage when the enemies' assault starts."));
      this._counterBombardment.Initialize(new TextObject("{=!}Counter Bombardment"), new TextObject("{=!}Priority is set to countering enemy bombardment."));
      this._prepareAssault.Initialize(new TextObject("{=!}Prepare Assault"), new TextObject("{=!}Priority is set to assaulting the walls."));
      this._breachWalls.Initialize(new TextObject("{=!}Breach Walls"), new TextObject("{=!}Priority is set to breaching the walls."));
      this._wearOutDefenders.Initialize(new TextObject("{=!}Wear out Defenders"), new TextObject("{=!}Priority is set to destroying engines of the enemy."));
    }
  }
}
