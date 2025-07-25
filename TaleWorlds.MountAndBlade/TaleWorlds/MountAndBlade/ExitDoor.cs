// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ExitDoor
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.InputSystem;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public class ExitDoor : UsableMachine
  {
    private static readonly ActionIndexCache act_pickup_middle_begin = ActionIndexCache.Create(nameof (act_pickup_middle_begin));
    private static readonly ActionIndexCache act_pickup_middle_begin_left_stance = ActionIndexCache.Create(nameof (act_pickup_middle_begin_left_stance));
    private static readonly ActionIndexCache act_pickup_middle_end = ActionIndexCache.Create(nameof (act_pickup_middle_end));
    private static readonly ActionIndexCache act_pickup_middle_end_left_stance = ActionIndexCache.Create(nameof (act_pickup_middle_end_left_stance));

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = new TextObject("{=gqQPSAQZ}{KEY} Leave Area");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null) => string.Empty;

    protected internal override void OnInit()
    {
      base.OnInit();
      this.SetScriptComponentToTick(this.GetTickRequirement());
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return ScriptComponentBehavior.TickRequirement.Tick | base.GetTickRequirement();
    }

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.HasUser)
        {
          Agent userAgent = standingPoint.UserAgent;
          ActionIndexValueCache currentActionValue1 = userAgent.GetCurrentActionValue(0);
          ActionIndexValueCache currentActionValue2 = userAgent.GetCurrentActionValue(1);
          if (!(currentActionValue2 == ActionIndexValueCache.act_none) || !(currentActionValue1 == ExitDoor.act_pickup_middle_begin) && !(currentActionValue1 == ExitDoor.act_pickup_middle_begin_left_stance))
          {
            if (currentActionValue2 == ActionIndexValueCache.act_none && (currentActionValue1 == ExitDoor.act_pickup_middle_end || currentActionValue1 == ExitDoor.act_pickup_middle_end_left_stance))
            {
              userAgent.StopUsingGameObject();
              Mission.Current.EndMission();
            }
            else if (currentActionValue2 != ActionIndexValueCache.act_none || !userAgent.SetActionChannel(0, userAgent.GetIsLeftStance() ? ExitDoor.act_pickup_middle_begin_left_stance : ExitDoor.act_pickup_middle_begin))
              userAgent.StopUsingGameObject();
          }
        }
      }
    }
  }
}
