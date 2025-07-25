// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IPointDefendable
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IPointDefendable
  {
    IEnumerable<DefencePoint> DefencePoints { get; }

    FormationAI.BehaviorSide DefenseSide { get; }

    WorldFrame MiddleFrame { get; }

    WorldFrame DefenseWaitFrame { get; }
  }
}
