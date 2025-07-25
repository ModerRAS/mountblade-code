// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MultiplayerBattleMoraleModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class MultiplayerBattleMoraleModel : BattleMoraleModel
  {
    public override (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentIncapacitated(
      Agent affectedAgent,
      AgentState affectedAgentState,
      Agent affectorAgent,
      in KillingBlow killingBlow)
    {
      return (0.0f, 0.0f);
    }

    public override (float affectedSideMaxMoraleLoss, float affectorSideMaxMoraleGain) CalculateMaxMoraleChangeDueToAgentPanicked(
      Agent agent)
    {
      return (0.0f, 0.0f);
    }

    public override float CalculateMoraleChangeToCharacter(Agent agent, float maxMoraleChange)
    {
      return 0.0f;
    }

    public override float GetEffectiveInitialMorale(Agent agent, float baseMorale) => baseMorale;

    public override bool CanPanicDueToMorale(Agent agent) => true;

    public override float CalculateCasualtiesFactor(BattleSideEnum battleSide) => 1f;

    public override float GetAverageMorale(Formation formation) => 0.0f;
  }
}
