// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Objects.AnimalSpawnSettings
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using TaleWorlds.Core;
using TaleWorlds.Engine;

#nullable disable
namespace TaleWorlds.MountAndBlade.Objects
{
  public class AnimalSpawnSettings : ScriptComponentBehavior
  {
    public bool DisableWandering = true;

    public static void CheckAndSetAnimalAgentFlags(GameEntity spawnEntity, Agent animalAgent)
    {
      if (!spawnEntity.HasScriptOfType<AnimalSpawnSettings>() || !spawnEntity.GetFirstScriptOfType<AnimalSpawnSettings>().DisableWandering)
        return;
      animalAgent.SetAgentFlags(animalAgent.GetAgentFlags() & ~AgentFlag.CanWander);
    }
  }
}
