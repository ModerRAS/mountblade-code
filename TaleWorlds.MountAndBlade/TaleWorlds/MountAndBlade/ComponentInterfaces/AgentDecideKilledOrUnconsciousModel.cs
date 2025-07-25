// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.ComponentInterfaces.AgentDecideKilledOrUnconsciousModel
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.MountAndBlade.ComponentInterfaces
{
  public abstract class AgentDecideKilledOrUnconsciousModel : GameModel
  {
    public abstract float GetAgentStateProbability(
      Agent affectorAgent,
      Agent effectedAgent,
      DamageTypes damageType,
      WeaponFlags weaponFlags,
      out float useSurgeryProbability);
  }
}
