// Decompiled with JetBrains decompiler
// Type: SandBox.GameplayCheatsManager
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;

#nullable disable
namespace SandBox
{
  public static class GameplayCheatsManager
  {
    public static IEnumerable<GameplayCheatBase> GetMapCheatList()
    {
      yield return (GameplayCheatBase) new Add1000GoldCheat();
      yield return (GameplayCheatBase) new Add100InfluenceCheat();
      yield return (GameplayCheatBase) new Add100RenownCheat();
      yield return (GameplayCheatBase) new AddCraftingMaterialsCheat();
      yield return (GameplayCheatBase) new BoostSkillCheatGroup();
      if (Settlement.CurrentSettlement != null && Settlement.CurrentSettlement.IsFortification)
        yield return (GameplayCheatBase) new CompleteBuildingProjectCheat();
      yield return (GameplayCheatBase) new FillCraftingStaminaCheat();
      yield return (GameplayCheatBase) new Give5TroopsToPlayerCheat();
      yield return (GameplayCheatBase) new Give10GrainCheat();
      yield return (GameplayCheatBase) new Give10WarhorsesCheat();
      yield return (GameplayCheatBase) new HealPlayerPartyCheat();
      yield return (GameplayCheatBase) new UnlockAllCraftingRecipesCheat();
      yield return (GameplayCheatBase) new UnlockFogOfWarCheat();
    }

    public static IEnumerable<GameplayCheatBase> GetMissionCheatList()
    {
      Mission current = Mission.Current;
      if ((current != null ? (current.Mode == MissionMode.Battle ? 1 : 0) : 0) != 0)
        yield return (GameplayCheatBase) new WoundAllEnemiesCheat();
      yield return (GameplayCheatBase) new HealMainHeroCheat();
    }
  }
}
