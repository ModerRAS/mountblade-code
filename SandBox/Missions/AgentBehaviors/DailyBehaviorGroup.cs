// Decompiled with JetBrains decompiler
// Type: SandBox.Missions.AgentBehaviors.DailyBehaviorGroup
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Missions.AgentBehaviors
{
  public class DailyBehaviorGroup : AgentBehaviorGroup
  {
    public DailyBehaviorGroup(AgentNavigator navigator, Mission mission)
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
      else if (this.CheckBehaviorTimer == null || this.CheckBehaviorTimer.Check(this.Mission.CurrentTime))
        this.Think(isSimulation);
      this.TickActiveBehaviors(dt, isSimulation);
    }

    public override void ConversationTick()
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior.IsActive)
          behavior.ConversationTick();
      }
    }

    private void Think(bool isSimulation)
    {
      float num1 = 0.0f;
      float[] numArray = new float[this.Behaviors.Count];
      for (int index = 0; index < this.Behaviors.Count; ++index)
      {
        numArray[index] = this.Behaviors[index].GetAvailability(isSimulation);
        num1 += numArray[index];
      }
      if ((double) num1 <= 0.0)
        return;
      float num2 = MBRandom.RandomFloat * num1;
      for (int index = 0; index < numArray.Length; ++index)
      {
        float num3 = numArray[index];
        num2 -= num3;
        if ((double) num2 < 0.0)
        {
          if (this.Behaviors[index].IsActive)
            break;
          this.DisableAllBehaviors();
          this.Behaviors[index].IsActive = true;
          this.CheckBehaviorTime = this.Behaviors[index].CheckTime;
          this.SetCheckBehaviorTimer(this.CheckBehaviorTime);
          break;
        }
      }
    }

    private void TickActiveBehaviors(float dt, bool isSimulation)
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior.IsActive)
          behavior.Tick(dt, isSimulation);
      }
    }

    private void SetCheckBehaviorTimer(float time)
    {
      if (this.CheckBehaviorTimer == null)
        this.CheckBehaviorTimer = new Timer(this.Mission.CurrentTime, time);
      else
        this.CheckBehaviorTimer.Reset(this.Mission.CurrentTime, time);
    }

    public override float GetScore(bool isSimulation) => 0.5f;

    public override void OnAgentRemoved(Agent agent)
    {
      foreach (AgentBehavior behavior in this.Behaviors)
      {
        if (behavior.IsActive)
          behavior.OnAgentRemoved(agent);
      }
    }

    protected override void OnActivate()
    {
      LocationCharacter locationCharacter = CampaignMission.Current.Location.GetLocationCharacter(this.OwnerAgent.Origin);
      if (locationCharacter != null && locationCharacter.ActionSetCode != locationCharacter.AlarmedActionSetCode)
      {
        AnimationSystemData animationSystemData = locationCharacter.GetAgentBuildData().AgentMonster.FillAnimationSystemData(MBGlobals.GetActionSet(locationCharacter.ActionSetCode), locationCharacter.Character.GetStepSize(), false);
        this.OwnerAgent.SetActionSet(ref animationSystemData);
      }
      this.Navigator.SetItemsVisibility(true);
      this.Navigator.SetSpecialItem();
    }

    protected override void OnDeactivate()
    {
      base.OnDeactivate();
      this.CheckBehaviorTimer = (Timer) null;
    }

    public override void ForceThink(float inSeconds)
    {
      if ((double) MathF.Abs(inSeconds) < 1.4012984643248171E-45)
        this.Think(false);
      else
        this.SetCheckBehaviorTimer(inSeconds);
    }
  }
}
