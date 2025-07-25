// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ICommanderInfo
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade.Objects;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface ICommanderInfo : IMissionBehavior
  {
    event Action<BattleSideEnum, float> OnMoraleChangedEvent;

    event Action OnFlagNumberChangedEvent;

    event Action<FlagCapturePoint, Team> OnCapturePointOwnerChangedEvent;

    IEnumerable<FlagCapturePoint> AllCapturePoints { get; }

    Team GetFlagOwner(FlagCapturePoint flag);

    bool AreMoralesIndependent { get; }
  }
}
