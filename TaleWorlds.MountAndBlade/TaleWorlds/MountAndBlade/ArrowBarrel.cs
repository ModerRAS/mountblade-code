// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ArrowBarrel
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
  public class ArrowBarrel : UsableMachine
  {
    private static readonly ActionIndexCache act_pickup_down_begin = ActionIndexCache.Create(nameof (act_pickup_down_begin));
    private static readonly ActionIndexCache act_pickup_down_begin_left_stance = ActionIndexCache.Create(nameof (act_pickup_down_begin_left_stance));
    private static readonly ActionIndexCache act_pickup_down_end = ActionIndexCache.Create(nameof (act_pickup_down_end));
    private static readonly ActionIndexCache act_pickup_down_end_left_stance = ActionIndexCache.Create(nameof (act_pickup_down_end_left_stance));
    private static int _pickupArrowSoundFromBarrel = -1;
    private bool _isVisible = true;
    private bool _needsSingleThreadTickOnce;

    private static int _pickupArrowSoundFromBarrelCache
    {
      get
      {
        if (ArrowBarrel._pickupArrowSoundFromBarrel == -1)
          ArrowBarrel._pickupArrowSoundFromBarrel = SoundEvent.GetEventIdFromString("event:/mission/combat/pickup_arrows");
        return ArrowBarrel._pickupArrowSoundFromBarrel;
      }
    }

    protected ArrowBarrel()
    {
    }

    protected internal override void OnInit()
    {
      base.OnInit();
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
        (standingPoint as StandingPointWithWeaponRequirement).InitRequiredWeaponClasses(WeaponClass.Arrow, WeaponClass.Bolt);
      this.SetScriptComponentToTick(this.GetTickRequirement());
      this.MakeVisibilityCheck = false;
      this._isVisible = this.GameEntity.IsVisibleIncludeParents();
    }

    public override void AfterMissionStart()
    {
      if (this.StandingPoints == null)
        return;
      foreach (UsableMissionObject standingPoint in (List<StandingPoint>) this.StandingPoints)
        standingPoint.LockUserFrames = true;
    }

    public override TextObject GetActionTextForStandingPoint(UsableMissionObject usableGameObject)
    {
      TextObject forStandingPoint = new TextObject("{=bNYm3K6b}{KEY} Pick Up");
      forStandingPoint.SetTextVariable("KEY", HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13)));
      return forStandingPoint;
    }

    public override string GetDescriptionText(GameEntity gameEntity = null)
    {
      return new TextObject("{=bWi4aMO9}Arrow Barrel").ToString();
    }

    public override ScriptComponentBehavior.TickRequirement GetTickRequirement()
    {
      return GameNetwork.IsClientOrReplay ? base.GetTickRequirement() : ScriptComponentBehavior.TickRequirement.Tick | ScriptComponentBehavior.TickRequirement.TickParallel | base.GetTickRequirement();
    }

    protected internal override void OnTickParallel(float dt) => this.TickAux(true);

    protected internal override void OnTick(float dt)
    {
      base.OnTick(dt);
      if (!this._needsSingleThreadTickOnce)
        return;
      this._needsSingleThreadTickOnce = false;
      this.TickAux(false);
    }

    private void TickAux(bool isParallel)
    {
      if (!this._isVisible || GameNetwork.IsClientOrReplay)
        return;
      foreach (StandingPoint standingPoint in (List<StandingPoint>) this.StandingPoints)
      {
        if (standingPoint.HasUser)
        {
          Agent userAgent = standingPoint.UserAgent;
          ActionIndexValueCache currentActionValue1 = userAgent.GetCurrentActionValue(0);
          ActionIndexValueCache currentActionValue2 = userAgent.GetCurrentActionValue(1);
          if (!(currentActionValue2 == ActionIndexValueCache.act_none) || !(currentActionValue1 == ArrowBarrel.act_pickup_down_begin) && !(currentActionValue1 == ArrowBarrel.act_pickup_down_begin_left_stance))
          {
            if (currentActionValue2 == ActionIndexValueCache.act_none && (currentActionValue1 == ArrowBarrel.act_pickup_down_end || currentActionValue1 == ArrowBarrel.act_pickup_down_end_left_stance))
            {
              if (isParallel)
              {
                this._needsSingleThreadTickOnce = true;
              }
              else
              {
                for (EquipmentIndex index = EquipmentIndex.WeaponItemBeginSlot; index < EquipmentIndex.NumAllWeaponSlots; ++index)
                {
                  MissionWeapon missionWeapon = userAgent.Equipment[index];
                  if (!missionWeapon.IsEmpty)
                  {
                    missionWeapon = userAgent.Equipment[index];
                    if (missionWeapon.CurrentUsageItem.WeaponClass != WeaponClass.Arrow)
                    {
                      missionWeapon = userAgent.Equipment[index];
                      if (missionWeapon.CurrentUsageItem.WeaponClass != WeaponClass.Bolt)
                        continue;
                    }
                    missionWeapon = userAgent.Equipment[index];
                    int amount = (int) missionWeapon.Amount;
                    missionWeapon = userAgent.Equipment[index];
                    int modifiedMaxAmount1 = (int) missionWeapon.ModifiedMaxAmount;
                    if (amount < modifiedMaxAmount1)
                    {
                      Agent agent = userAgent;
                      int equipmentSlot = (int) index;
                      missionWeapon = userAgent.Equipment[index];
                      int modifiedMaxAmount2 = (int) missionWeapon.ModifiedMaxAmount;
                      agent.SetWeaponAmountInSlot((EquipmentIndex) equipmentSlot, (short) modifiedMaxAmount2, true);
                      Mission.Current.MakeSoundOnlyOnRelatedPeer(ArrowBarrel._pickupArrowSoundFromBarrelCache, userAgent.Position, userAgent.Index);
                    }
                  }
                }
                userAgent.StopUsingGameObject();
              }
            }
            else if (currentActionValue2 != ActionIndexValueCache.act_none || !userAgent.SetActionChannel(0, userAgent.GetIsLeftStance() ? ArrowBarrel.act_pickup_down_begin_left_stance : ArrowBarrel.act_pickup_down_begin))
            {
              if (isParallel)
                this._needsSingleThreadTickOnce = true;
              else
                userAgent.StopUsingGameObject();
            }
          }
        }
      }
    }

    public override OrderType GetOrder(BattleSideEnum side) => OrderType.None;
  }
}
