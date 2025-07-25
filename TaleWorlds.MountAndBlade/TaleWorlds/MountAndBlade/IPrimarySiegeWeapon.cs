// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IPrimarySiegeWeapon
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IPrimarySiegeWeapon
  {
    bool HasCompletedAction();

    float SiegeWeaponPriority { get; }

    int OverTheWallNavMeshID { get; }

    bool HoldLadders { get; }

    bool SendLadders { get; }

    MissionObject TargetCastlePosition { get; }

    FormationAI.BehaviorSide WeaponSide { get; }

    bool GetNavmeshFaceIds(out List<int> navmeshFaceIds);
  }
}
