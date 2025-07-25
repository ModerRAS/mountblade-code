// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultMilitaryPowerModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultMilitaryPowerModel : MilitaryPowerModel
  {
    private const float LowTierCaptainPerkPowerBoost = 0.01f;
    private const float MidTierCaptainPerkPowerBoost = 0.02f;
    private const float HighTierCaptainPerkPowerBoost = 0.03f;
    private const float UltraTierCaptainPerkPowerBoost = 0.06f;
    private static Dictionary<DefaultMilitaryPowerModel.PowerFlags, float> _battleModifiers = new Dictionary<DefaultMilitaryPowerModel.PowerFlags, float>()
    {
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.Infantry,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.Archer,
        -0.2f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.Archer,
        -0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.Archer,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.Archer,
        -0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.Archer,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.Archer,
        0.3f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.Archer,
        0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.Archer,
        0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.Archer,
        -0.5f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.Archer,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.15f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.2f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        0.25f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.05f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        -0.15f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.Cavalry,
        0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        -0.2f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        -0.1f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        -0.3f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Attacker | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        0.3f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Siege | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        0.3f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Village | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.RiverCrossing | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        0.0f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Forest | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        -0.25f
      },
      {
        DefaultMilitaryPowerModel.PowerFlags.Defender | DefaultMilitaryPowerModel.PowerFlags.Flat | DefaultMilitaryPowerModel.PowerFlags.HorseArcher,
        0.15f
      }
    };

    public static void ChangeExistingBattleModifiers(
      List<(DefaultMilitaryPowerModel.PowerFlags, float)> newBattleModifiers)
    {
      foreach ((DefaultMilitaryPowerModel.PowerFlags, float) newBattleModifier in newBattleModifiers)
      {
        if (DefaultMilitaryPowerModel._battleModifiers.ContainsKey(newBattleModifier.Item1))
          DefaultMilitaryPowerModel._battleModifiers[newBattleModifier.Item1] = newBattleModifier.Item2;
      }
    }

    public override float GetTroopPower(
      float defaultTroopPower,
      float leaderModifier = 0.0f,
      float contextModifier = 0.0f)
    {
      return defaultTroopPower * (1f + leaderModifier + contextModifier);
    }

    public override float GetTroopPower(
      CharacterObject troop,
      BattleSideEnum side,
      MapEvent.PowerCalculationContext context,
      float leaderModifier)
    {
      float defaultTroopPower = Campaign.Current.Models.MilitaryPowerModel.GetDefaultTroopPower(troop);
      float contextModifier = Campaign.Current.Models.MilitaryPowerModel.GetContextModifier(troop, side, context);
      return Campaign.Current.Models.MilitaryPowerModel.GetTroopPower(defaultTroopPower, leaderModifier, contextModifier);
    }

    public override float GetLeaderModifierInMapEvent(
      MapEvent mapEvent,
      BattleSideEnum battleSideEnum)
    {
      Hero hero = battleSideEnum == BattleSideEnum.Attacker ? mapEvent.AttackerSide.LeaderParty.LeaderHero : mapEvent.DefenderSide.LeaderParty.LeaderHero;
      int num1 = 0;
      int num2 = 0;
      int num3 = 0;
      int num4 = 0;
      if (hero != null)
      {
        foreach (PerkObject perk in (List<PerkObject>) PerkObject.All)
        {
          if (perk.PrimaryRole == SkillEffect.PerkRole.Captain && hero.GetPerkValue(perk))
          {
            float num5 = perk.RequiredSkillValue / (float) Campaign.Current.Models.CharacterDevelopmentModel.MaxSkillRequiredForEpicPerkBonus;
            if ((double) num5 <= 0.30000001192092896)
              ++num1;
            else if ((double) num5 <= 0.60000002384185791)
              ++num2;
            else if ((double) num5 <= 0.89999997615814209)
              ++num3;
            else
              ++num4;
          }
        }
      }
      return (float) ((double) num1 * 0.0099999997764825821 + (double) num2 * 0.019999999552965164 + (double) num3 * 0.029999999329447746 + (double) num4 * 0.059999998658895493);
    }

    public override float GetContextModifier(
      CharacterObject troop,
      BattleSideEnum battleSideEnum,
      MapEvent.PowerCalculationContext context)
    {
      DefaultMilitaryPowerModel.PowerFlags powerFlags1 = DefaultMilitaryPowerModel.PowerFlags.Invalid;
      DefaultMilitaryPowerModel.PowerFlags powerFlags2 = !troop.HasMount() ? (!troop.IsRanged ? DefaultMilitaryPowerModel.PowerFlags.Infantry : DefaultMilitaryPowerModel.PowerFlags.Archer) : powerFlags1 | (troop.IsRanged ? DefaultMilitaryPowerModel.PowerFlags.HorseArcher : DefaultMilitaryPowerModel.PowerFlags.Cavalry);
      switch (context)
      {
        case MapEvent.PowerCalculationContext.Default:
        case MapEvent.PowerCalculationContext.PlainBattle:
        case MapEvent.PowerCalculationContext.SteppeBattle:
        case MapEvent.PowerCalculationContext.DesertBattle:
        case MapEvent.PowerCalculationContext.DuneBattle:
        case MapEvent.PowerCalculationContext.SnowBattle:
          powerFlags2 |= DefaultMilitaryPowerModel.PowerFlags.Flat;
          break;
        case MapEvent.PowerCalculationContext.ForestBattle:
          powerFlags2 |= DefaultMilitaryPowerModel.PowerFlags.Forest;
          break;
        case MapEvent.PowerCalculationContext.RiverCrossingBattle:
          powerFlags2 |= DefaultMilitaryPowerModel.PowerFlags.RiverCrossing;
          break;
        case MapEvent.PowerCalculationContext.Village:
          powerFlags2 |= DefaultMilitaryPowerModel.PowerFlags.Village;
          break;
        case MapEvent.PowerCalculationContext.Siege:
          powerFlags2 |= DefaultMilitaryPowerModel.PowerFlags.Siege;
          break;
      }
      DefaultMilitaryPowerModel.PowerFlags key = powerFlags2 | (battleSideEnum == BattleSideEnum.Attacker ? DefaultMilitaryPowerModel.PowerFlags.Attacker : DefaultMilitaryPowerModel.PowerFlags.Defender);
      return DefaultMilitaryPowerModel._battleModifiers[key];
    }

    public override float GetDefaultTroopPower(CharacterObject troop)
    {
      int num = troop.IsHero ? troop.HeroObject.Level / 4 + 1 : troop.Tier;
      return (float) ((double) ((2 + num) * (10 + num)) * 0.019999999552965164 * (troop.IsHero ? 1.5 : (troop.IsMounted ? 1.2000000476837158 : 1.0)));
    }

    [Flags]
    public enum PowerFlags
    {
      Invalid = 0,
      Attacker = 1,
      Defender = 2,
      Siege = 4,
      Village = 8,
      RiverCrossing = 16, // 0x00000010
      Forest = 32, // 0x00000020
      Flat = 64, // 0x00000040
      Infantry = 128, // 0x00000080
      Archer = 256, // 0x00000100
      Cavalry = 512, // 0x00000200
      HorseArcher = 1024, // 0x00000400
    }
  }
}
