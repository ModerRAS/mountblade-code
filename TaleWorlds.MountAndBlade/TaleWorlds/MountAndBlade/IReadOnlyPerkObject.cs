// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.IReadOnlyPerkObject
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System.Collections.Generic;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public interface IReadOnlyPerkObject
  {
    TextObject Name { get; }

    TextObject Description { get; }

    List<string> GameModes { get; }

    int PerkListIndex { get; }

    string IconId { get; }

    string HeroIdleAnimOverride { get; }

    string HeroMountIdleAnimOverride { get; }

    string TroopIdleAnimOverride { get; }

    string TroopMountIdleAnimOverride { get; }

    int GetExtraTroopCount(bool isWarmup);

    List<(EquipmentIndex, EquipmentElement)> GetAlternativeEquipments(
      bool isWarmup,
      bool isPlayer,
      List<(EquipmentIndex, EquipmentElement)> alternativeEquipments,
      bool getAllEquipments = false);

    float GetDrivenPropertyBonusOnSpawn(
      bool isWarmup,
      bool isPlayer,
      DrivenProperty drivenProperty,
      float baseValue);

    float GetHitpoints(bool isWarmup, bool isPlayer);

    MPPerkObject Clone(MissionPeer peer);
  }
}
