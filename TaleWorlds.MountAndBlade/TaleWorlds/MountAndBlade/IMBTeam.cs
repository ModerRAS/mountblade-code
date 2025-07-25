// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IMBTeam
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  [ScriptingInterfaceBase]
  internal interface IMBTeam
  {
    [EngineMethod("is_enemy", false)]
    bool IsEnemy(UIntPtr missionPointer, int teamIndex, int otherTeamIndex);

    [EngineMethod("set_is_enemy", false)]
    void SetIsEnemy(UIntPtr missionPointer, int teamIndex, int otherTeamIndex, bool isEnemy);
  }
}
