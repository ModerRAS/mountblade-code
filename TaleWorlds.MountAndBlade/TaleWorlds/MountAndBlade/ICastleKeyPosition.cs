// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ICastleKeyPosition
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Engine;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface ICastleKeyPosition
  {
    IPrimarySiegeWeapon AttackerSiegeWeapon { get; set; }

    TacticalPosition MiddlePosition { get; }

    TacticalPosition WaitPosition { get; }

    WorldFrame MiddleFrame { get; }

    WorldFrame DefenseWaitFrame { get; }

    FormationAI.BehaviorSide DefenseSide { get; }

    Vec3 GetPosition();
  }
}
