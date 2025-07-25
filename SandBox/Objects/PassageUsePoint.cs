// Decompiled with JetBrains decompiler
// Type: SandBox.Objects.PassageUsePoint
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox.Objects
{
  public class PassageUsePoint : StandingPoint
  {
    public string ToLocationId = "";
    private bool _initialized;
    private readonly MBList<Agent> _movingAgents;
    private Location _toLocation;
    private const float InteractionDistanceForAI = 0.5f;

    public MBReadOnlyList<Agent> MovingAgents => (MBReadOnlyList<Agent>) this._movingAgents;

    public override Agent MovingAgent
    {
      get => this._movingAgents.Count <= 0 ? (Agent) null : this._movingAgents[0];
    }

    public PassageUsePoint()
    {
      this.IsInstantUse = true;
      this._movingAgents = new MBList<Agent>();
    }

    public Location ToLocation
    {
      get
      {
        if (!this._initialized)
          this.InitializeLocation();
        return this._toLocation;
      }
    }

    public override bool HasAIMovingTo => this._movingAgents.Count > 0;

    public override FocusableObjectType FocusableObjectType => FocusableObjectType.Door;

    public override bool IsDisabledForAgent(Agent agent)
    {
      if (agent.MountAgent != null || this.IsDeactivated || this.ToLocation == null)
        return true;
      return agent.IsAIControlled && !this.ToLocation.CanAIEnter(CampaignMission.Current.Location.GetLocationCharacter(agent.Origin));
    }

    public override void AfterMissionStart()
    {
      this.DescriptionMessage = GameTexts.FindText("str_ui_door");
      this.ActionMessage = GameTexts.FindText("str_ui_default_door");
      if (this.ToLocation == null)
        return;
      this.ActionMessage = GameTexts.FindText("str_key_action");
      this.ActionMessage.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      this.ActionMessage.SetTextVariable("ACTION", this.ToLocation == null ? GameTexts.FindText("str_ui_default_door") : this.ToLocation.DoorName);
    }

    public override bool DisableCombatActionsOnUse => !this.IsInstantUse;

    protected override void OnInit()
    {
      base.OnInit();
      this.LockUserPositions = true;
    }

    public override void OnUse(Agent userAgent)
    {
      if (Campaign.Current.GameMode != CampaignGameMode.Campaign && !userAgent.IsAIControlled)
        return;
      base.OnUse(userAgent);
      bool flag = false;
      if (this.ToLocation == null)
        return;
      if (this.UserAgent.IsMainAgent)
      {
        if (!this.ToLocation.CanPlayerEnter())
        {
          InformationManager.DisplayMessage(new InformationMessage(new TextObject("{=ILnr9eCQ}Door is locked!").ToString()));
        }
        else
        {
          flag = true;
          Campaign.Current.GameMenuManager.NextLocation = this.ToLocation;
          Campaign.Current.GameMenuManager.PreviousLocation = CampaignMission.Current.Location;
          Mission.Current.EndMission();
        }
      }
      else if (this.UserAgent.IsAIControlled)
      {
        LocationCharacter locationCharacter = CampaignMission.Current.Location.GetLocationCharacter(this.UserAgent.Origin);
        if (!this.ToLocation.CanAIEnter(locationCharacter))
        {
          MBDebug.ShowWarning("AI should not try to use passage ");
        }
        else
        {
          flag = true;
          LocationComplex.Current.ChangeLocation(locationCharacter, CampaignMission.Current.Location, this.ToLocation);
          this.UserAgent.FadeOut(false, true);
        }
      }
      if (!flag)
        return;
      Mission.Current.MakeSound(MiscSoundContainer.SoundCodeMovementFoleyDoorOpen, this.GameEntity.GetGlobalFrame().origin, true, false, -1, -1);
    }

    public override void OnUseStopped(Agent userAgent, bool isSuccessful, int preferenceIndex)
    {
      base.OnUseStopped(userAgent, isSuccessful, preferenceIndex);
      if (!this.LockUserFrames && !this.LockUserPositions)
        return;
      userAgent.ClearTargetFrame();
    }

    public override bool IsUsableByAgent(Agent userAgent)
    {
      bool flag = true;
      if (userAgent.IsAIControlled && (double) (this.InteractionEntity.GetGlobalFrame().origin.AsVec2 - userAgent.Position.AsVec2).LengthSquared > 0.25)
        flag = false;
      return flag;
    }

    private void InitializeLocation()
    {
      if (string.IsNullOrEmpty(this.ToLocationId))
      {
        this._toLocation = (Location) null;
        this._initialized = true;
      }
      else
      {
        if (Mission.Current == null || Campaign.Current == null)
          return;
        if (PlayerEncounter.LocationEncounter != null && CampaignMission.Current.Location != null)
          this._toLocation = CampaignMission.Current.Location.GetPassageToLocation(this.ToLocationId);
        this._initialized = true;
      }
    }

    public override int GetMovingAgentCount() => this._movingAgents.Count;

    public override Agent GetMovingAgentWithIndex(int index) => this._movingAgents[index];

    public override void AddMovingAgent(Agent movingAgent) => this._movingAgents.Add(movingAgent);

    public override void RemoveMovingAgent(Agent movingAgent)
    {
      this._movingAgents.Remove(movingAgent);
    }

    public override bool IsAIMovingTo(Agent agent) => this._movingAgents.Contains(agent);
  }
}
