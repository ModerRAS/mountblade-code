// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.MPOnSpawnPerkEffectBase
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Xml;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public abstract class MPOnSpawnPerkEffectBase : MPPerkEffectBase, IOnSpawnPerkEffect
  {
    protected MPOnSpawnPerkEffectBase.Target EffectTarget;

    protected override void Deserialize(XmlNode node)
    {
      this.IsDisabledInWarmup = node?.Attributes?["is_disabled_in_warmup"]?.Value?.ToLower() == "true";
      string str = node?.Attributes?["target"]?.Value;
      this.EffectTarget = MPOnSpawnPerkEffectBase.Target.Any;
      if (str == null || Enum.TryParse<MPOnSpawnPerkEffectBase.Target>(str, true, out this.EffectTarget))
        return;
      this.EffectTarget = MPOnSpawnPerkEffectBase.Target.Any;
      Debug.FailedAssert("provided 'target' is invalid", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Network\\Gameplay\\Perks\\MPOnSpawnPerkEffectBase.cs", nameof (Deserialize), 38);
    }

    public virtual float GetTroopCountMultiplier() => 0.0f;

    public virtual int GetExtraTroopCount() => 0;

    public virtual List<(EquipmentIndex, EquipmentElement)> GetAlternativeEquipments(
      bool isPlayer,
      List<(EquipmentIndex, EquipmentElement)> alternativeEquipments,
      bool getAll = false)
    {
      return alternativeEquipments;
    }

    public virtual float GetDrivenPropertyBonusOnSpawn(
      bool isPlayer,
      DrivenProperty drivenProperty,
      float baseValue)
    {
      return 0.0f;
    }

    public virtual float GetHitpoints(bool isPlayer) => 0.0f;

    protected enum Target
    {
      Player,
      Troops,
      Any,
    }
  }
}
