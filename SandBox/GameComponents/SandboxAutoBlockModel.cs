// Decompiled with JetBrains decompiler
// Type: SandBox.GameComponents.SandboxAutoBlockModel
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.ComponentInterfaces;

#nullable disable
namespace SandBox.GameComponents
{
  public class SandboxAutoBlockModel : AutoBlockModel
  {
    public override Agent.UsageDirection GetBlockDirection(Mission mission)
    {
      Agent mainAgent = mission.MainAgent;
      float num1 = float.MinValue;
      Agent.UsageDirection blockDirection = Agent.UsageDirection.AttackDown;
      foreach (Agent agent in (List<Agent>) mission.Agents)
      {
        if (agent.IsHuman)
        {
          switch (agent.GetCurrentActionStage(1))
          {
            case Agent.ActionStage.AttackReady:
            case Agent.ActionStage.AttackQuickReady:
            case Agent.ActionStage.AttackRelease:
              if (agent.IsEnemyOf(mainAgent))
              {
                Vec3 v1 = agent.Position - mainAgent.Position;
                float num2 = v1.Normalize();
                double num3 = (double) MBMath.ClampFloat(Vec3.DotProduct(v1, mainAgent.LookDirection) + 0.8f, 0.0f, 1f);
                float num4 = MBMath.ClampFloat((float) (1.0 / ((double) num2 + 0.5)), 0.0f, 1f);
                float num5 = MBMath.ClampFloat((float) (-(double) Vec3.DotProduct(v1, agent.LookDirection) + 0.5), 0.0f, 1f);
                double num6 = (double) num4;
                float num7 = (float) (num3 * num6) * num5;
                if ((double) num7 > (double) num1)
                {
                  num1 = num7;
                  blockDirection = agent.GetCurrentActionDirection(1);
                  if (blockDirection == Agent.UsageDirection.None)
                  {
                    blockDirection = Agent.UsageDirection.AttackDown;
                    continue;
                  }
                  continue;
                }
                continue;
              }
              continue;
            default:
              continue;
          }
        }
      }
      return blockDirection;
    }
  }
}
