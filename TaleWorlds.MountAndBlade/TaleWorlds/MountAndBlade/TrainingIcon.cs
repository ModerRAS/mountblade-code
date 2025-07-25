// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.TrainingIcon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class TrainingIcon : UsableMachine
  {
    private static readonly ActionIndexCache act_pickup_middle_begin = ActionIndexCache.Create(nameof (act_pickup_middle_begin));
    private static readonly ActionIndexCache act_pickup_middle_begin_left_stance = ActionIndexCache.Create(nameof (act_pickup_middle_begin_left_stance));
    private static readonly ActionIndexCache act_pickup_middle_end = ActionIndexCache.Create(nameof (act_pickup_middle_end));
    private static readonly ActionIndexCache act_pickup_middle_end_left_stance = ActionIndexCache.Create(nameof (act_pickup_middle_end_left_stance));
    private static readonly string HighlightBeamTag = "highlight_beam";
    private bool _activated;
    private float _markerAlpha;
    private float _targetMarkerAlpha;
    private float _markerAlphaChangeAmount = 110f;
    private List<GameEntity> _weaponIcons = new List<GameEntity>();
    private GameEntity _markerBeam;
    [EditableScriptComponentVariable(true)]
    private string _descriptionTextOfIcon = "";
    [EditableScriptComponentVariable(true)]
    private string _trainingSubTypeTag = "";

    public bool Focused { get; private set; }

    protected internal override void OnInit()
    {
      base.OnInit();
      this._markerBeam = this.GameEntity.GetFirstChildEntityWithTag(TrainingIcon.HighlightBeamTag);
      this._weaponIcons = this.GameEntity.GetChildren().Where<GameEntity>((Func<GameEntity, bool>) (x => !x.GetScriptComponents().Any<ScriptComponentBehavior>() && (NativeObject) x != (NativeObject) this._markerBeam)).ToList<GameEntity>();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if ((NativeObject) this._markerBeam != (NativeObject) null)
      {
        if ((double) MathF.Abs(this._markerAlpha - this._targetMarkerAlpha) > (double) dt * (double) this._markerAlphaChangeAmount)
        {
          this._markerAlpha += dt * this._markerAlphaChangeAmount * (float) MathF.Sign(this._targetMarkerAlpha - this._markerAlpha);
          this._markerBeam.GetChild(0).GetFirstMesh().SetVectorArgument(this._markerAlpha, 1f, 0.49f, 11.65f);
        }
        else
        {
          this._markerAlpha = this._targetMarkerAlpha;
          if ((double) this._targetMarkerAlpha == 0.0)
            this._markerBeam?.SetVisibilityExcludeParents(false);
        }
      }
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.HasUser)
        {
          Agent userAgent = standingPoint.UserAgent;
          ActionIndexValueCache currentActionValue1 = userAgent.GetCurrentActionValue(0);
          ActionIndexValueCache currentActionValue2 = userAgent.GetCurrentActionValue(1);
          if (!(currentActionValue2 == ActionIndexValueCache.act_none) || !(currentActionValue1 == TrainingIcon.act_pickup_middle_begin) && !(currentActionValue1 == TrainingIcon.act_pickup_middle_begin_left_stance))
          {
            if (currentActionValue2 == ActionIndexValueCache.act_none && (currentActionValue1 == TrainingIcon.act_pickup_middle_end || currentActionValue1 == TrainingIcon.act_pickup_middle_end_left_stance))
            {
              this._activated = true;
              userAgent.StopUsingGameObject();
            }
            else if (currentActionValue2 != ActionIndexValueCache.act_none || !userAgent.SetActionChannel(0, userAgent.GetIsLeftStance() ? TrainingIcon.act_pickup_middle_begin_left_stance : TrainingIcon.act_pickup_middle_begin))
              userAgent.StopUsingGameObject();
          }
        }
      }
    }

    public void SetMarked(bool highlight)
    {
      if (highlight)
      {
        this._targetMarkerAlpha = 75f;
        this._markerBeam.GetChild(0).GetFirstMesh().SetVectorArgument(this._markerAlpha, 1f, 0.49f, 11.65f);
        this._markerBeam?.SetVisibilityExcludeParents(true);
      }
      else
        this._targetMarkerAlpha = 0.0f;
    }

    public bool GetIsActivated()
    {
      int num = this._activated ? 1 : 0;
      this._activated = false;
      return num != 0;
    }

    public string GetTrainingSubTypeTag() => this._trainingSubTypeTag;

    public void DisableIcon()
    {
      foreach (GameEntity weaponIcon in this._weaponIcons)
        weaponIcon.SetVisibilityExcludeParents(false);
    }

    public void EnableIcon()
    {
      foreach (GameEntity weaponIcon in this._weaponIcons)
        weaponIcon.SetVisibilityExcludeParents(true);
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      TextObject textObject = new TextObject("{=!}{TRAINING_TYPE}");
      textObject.SetTextVariable("TRAINING_TYPE", GameTexts.FindText("str_tutorial_" + this._descriptionTextOfIcon));
      return textObject.ToString();
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject = null)
    {
      TextObject forStandingPoint = new TextObject("{=wY1qP2qj}{KEY} Select");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override void OnFocusGain(Agent userAgent)
    {
      base.OnFocusGain(userAgent);
      this.Focused = true;
    }

    public override void OnFocusLose(Agent userAgent)
    {
      base.OnFocusLose(userAgent);
      this.Focused = false;
    }
  }
}
