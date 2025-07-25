// Decompiled with JetBrains decompiler
// Type: StoryMode.GameComponents.StoryModeAgentDecideKilledOrUnconsciousModel
// Assembly: StoryMode, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 11BAE65F-6C15-4628-A9C6-1B968588CDA1
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\StoryMode\bin\Win64_Shipping_Client\StoryMode.dll

using SandBox.GameComponents;
using StoryMode.StoryModeObjects;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace StoryMode.GameComponents
{
  public class StoryModeAgentDecideKilledOrUnconsciousModel : 
    SandboxAgentDecideKilledOrUnconsciousModel
  {
    public override float GetAgentStateProbability(
      Agent affectorAgent,
      Agent effectedAgent,
      DamageTypes damageType,
      WeaponFlags weaponFlags,
      out float useSurgeryProbability)
    {
      useSurgeryProbability = 1f;
      return effectedAgent.Character.IsHero && (effectedAgent.Character == StoryModeHeroes.ElderBrother.CharacterObject || effectedAgent.Character == StoryModeHeroes.Radagos.CharacterObject || effectedAgent.Character == StoryModeHeroes.RadagosHencman.CharacterObject) && !StoryModeManager.Current.MainStoryLine.IsCompleted || !StoryModeManager.Current.MainStoryLine.TutorialPhase.IsCompleted && Mission.Current.GetMemberCountOfSide(effectedAgent.Team.Side) > 4 ? 0.0f : base.GetAgentStateProbability(affectorAgent, effectedAgent, damageType, weaponFlags, out useSurgeryProbability);
    }
  }
}
