// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IRoundComponent
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IRoundComponent : IMissionBehavior
  {
    event Action OnRoundStarted;

    event Action OnPreparationEnded;

    event Action OnPreRoundEnding;

    event Action OnRoundEnding;

    event Action OnPostRoundEnded;

    event Action OnCurrentRoundStateChanged;

    float LastRoundEndRemainingTime { get; }

    float RemainingRoundTime { get; }

    MultiplayerRoundState CurrentRoundState { get; }

    int RoundCount { get; }

    BattleSideEnum RoundWinner { get; }

    RoundEndReason RoundEndReason { get; }
  }
}
