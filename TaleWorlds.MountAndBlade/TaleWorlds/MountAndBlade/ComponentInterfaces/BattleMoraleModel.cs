// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ComponentInterfaces.BattleMoraleModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.ComponentInterfaces
{
  public abstract class BattleMoraleModel : GameModel
  {
    public const float BaseMoraleGainOnKill = 3f;
    public const float BaseMoraleLossOnKill = 4f;
    public const float BaseMoraleGainOnPanic = 2f;
    public const float BaseMoraleLossOnPanic = 1.1f;
    public const float MeleeWeaponMoraleMultiplier = 0.75f;
    public const float RangedWeaponMoraleMultiplier = 0.5f;
    public const float SiegeWeaponMoraleMultiplier = 0.25f;
    public const float BurningSiegeWeaponMoraleBonus = 0.25f;
    public const float CasualtyFactorRate = 2f;

    public abstract (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentIncapacitated(
      Agent affectedAgent,
      AgentState affectedAgentState,
      Agent affectorAgent,
      in KillingBlow killingBlow);

    public abstract (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentPanicked(
      Agent agent);

    public abstract float CalculateMoraleChangeToCharacter(Agent agent, float maxMoraleChange);

    public abstract float GetEffectiveInitialMorale(Agent agent, float baseMorale);

    public abstract bool CanPanicDueToMorale(Agent agent);

    public abstract float CalculateCasualtiesFactor(BattleSideEnum battleSide);

    public abstract float GetAverageMorale(Formation formation);
  }
}
