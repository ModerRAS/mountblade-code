// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.Usables.UsablePlace
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using SandBox.AI;
using TaleWorlds.Engine;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects.Usables
{
  public class UsablePlace : UsableMachine
  {
    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return this.PilotStandingPoint?.DescriptionMessage.ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      return this.PilotStandingPoint?.ActionMessage;
    }

    public override UsableMachineAIBase CreateAIBehaviorObject()
    {
      return (UsableMachineAIBase) new UsablePlaceAI((UsableMachine) this);
    }
  }
}
