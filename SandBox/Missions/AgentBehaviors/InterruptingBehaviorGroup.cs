// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.InterruptingBehaviorGroup
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class InterruptingBehaviorGroup : AgentBehaviorGroup
  {
    public InterruptingBehaviorGroup(AgentNavigator navigator, Mission mission)
      : base(navigator, mission)
    {
    }

    public override void Tick(float dt, bool isSimulation)
    {
      if (this.ScriptedBehavior != null)
      {
        if (!this.ScriptedBehavior.IsActive)
        {
          this.DisableAllBehaviors();
          this.ScriptedBehavior.IsActive = true;
        }
      }
      else
      {
        int bestBehaviorIndex = this.GetBestBehaviorIndex(isSimulation);
        if (bestBehaviorIndex != -1 && !this.Behaviors[bestBehaviorIndex].IsActive)
        {
          this.DisableAllBehaviors();
          this.Behaviors[bestBehaviorIndex].IsActive = true;
        }
      }
      this.TickActiveBehaviors(dt, isSimulation);
    }

    private void TickActiveBehaviors(float dt, bool isSimulation)
    {
      for (int index = this.Behaviors.Count - 1; index >= 0; --index)
      {
        AgentBehavior behavior = this.Behaviors[index];
        if (behavior.IsActive)
          behavior.Tick(dt, isSimulation);
      }
    }

    public override float GetScore(bool isSimulation)
    {
      return this.GetBestBehaviorIndex(isSimulation) != -1 ? 0.75f : 0.0f;
    }

    private int GetBestBehaviorIndex(bool isSimulation)
    {
      float num = 0.0f;
      int bestBehaviorIndex = -1;
      for (int index = 0; index < this.Behaviors.Count; ++index)
      {
        float availability = this.Behaviors[index].GetAvailability(isSimulation);
        if ((double) availability > (double) num)
        {
          num = availability;
          bestBehaviorIndex = index;
        }
      }
      return bestBehaviorIndex;
    }

    public override void ForceThink(float inSeconds) => this.Navigator.RefreshBehaviorGroups(false);
  }
}
