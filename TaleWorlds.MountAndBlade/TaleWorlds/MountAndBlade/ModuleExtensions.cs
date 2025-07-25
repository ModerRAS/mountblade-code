// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ModuleExtensions
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public static class ModuleExtensions
  {
    public static IEnumerable<UsableMachine> GetUsedMachines(this Formation formation)
    {
      return formation.Detachments.Select<IDetachment, UsableMachine>((Func<IDetachment, UsableMachine>) (d => d as UsableMachine)).Where<UsableMachine>((Func<UsableMachine, bool>) (u => u != null));
    }

    public static void StartUsingMachine(
      this Formation formation,
      UsableMachine usable,
      bool isPlayerOrder = false)
    {
      if (!isPlayerOrder && (!formation.IsAIControlled || Mission.Current.IsMissionEnding))
        return;
      formation.JoinDetachment((IDetachment) usable);
    }

    public static void StopUsingMachine(
      this Formation formation,
      UsableMachine usable,
      bool isPlayerOrder = false)
    {
      if (!isPlayerOrder && !formation.IsAIControlled)
        return;
      formation.LeaveDetachment((IDetachment) usable);
    }

    public static WorldPosition ToWorldPosition(this Vec3 rawPosition)
    {
      return new WorldPosition(Mission.Current.Scene, rawPosition);
    }
  }
}
