// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.DebugSiegeBehavior
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.InputSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class DebugSiegeBehavior
  {
    public static bool ToggleTargetDebug;
    public static DebugSiegeBehavior.DebugStateAttacker DebugAttackState;
    public static DebugSiegeBehavior.DebugStateDefender DebugDefendState;

    public static void SiegeDebug(UsableMachine usableMachine)
    {
      if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtRam"))
        DebugSiegeBehavior.DebugDefendState = DebugSiegeBehavior.DebugStateDefender.DebugDefendersToRam;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtSt"))
        DebugSiegeBehavior.DebugDefendState = DebugSiegeBehavior.DebugStateDefender.DebugDefendersToTower;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtBallistas2"))
        DebugSiegeBehavior.DebugDefendState = DebugSiegeBehavior.DebugStateDefender.DebugDefendersToBallistae;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtMangonels2"))
        DebugSiegeBehavior.DebugDefendState = DebugSiegeBehavior.DebugStateDefender.DebugDefendersToMangonels;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtNone2"))
        DebugSiegeBehavior.DebugDefendState = DebugSiegeBehavior.DebugStateDefender.None;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtBallistas"))
        DebugSiegeBehavior.DebugAttackState = DebugSiegeBehavior.DebugStateAttacker.DebugAttackersToBallistae;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtMangonels"))
        DebugSiegeBehavior.DebugAttackState = DebugSiegeBehavior.DebugStateAttacker.DebugAttackersToMangonels;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtBattlements"))
        DebugSiegeBehavior.DebugAttackState = DebugSiegeBehavior.DebugStateAttacker.DebugAttackersToBattlements;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyAimAtNone"))
        DebugSiegeBehavior.DebugAttackState = DebugSiegeBehavior.DebugStateAttacker.None;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyTargetDebugActive"))
        DebugSiegeBehavior.ToggleTargetDebug = true;
      else if (Input.DebugInput.IsHotKeyPressed("DebugSiegeBehaviorHotkeyTargetDebugDisactive"))
        DebugSiegeBehavior.ToggleTargetDebug = false;
      int num = DebugSiegeBehavior.ToggleTargetDebug ? 1 : 0;
    }

    public enum DebugStateAttacker
    {
      None,
      DebugAttackersToBallistae,
      DebugAttackersToMangonels,
      DebugAttackersToBattlements,
    }

    public enum DebugStateDefender
    {
      None,
      DebugDefendersToBallistae,
      DebugDefendersToMangonels,
      DebugDefendersToRam,
      DebugDefendersToTower,
    }
  }
}
