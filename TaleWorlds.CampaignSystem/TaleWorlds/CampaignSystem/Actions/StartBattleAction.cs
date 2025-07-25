// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.StartBattleAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class StartBattleAction
  {
    private static void ApplyInternal(
      PartyBase attackerParty,
      PartyBase defenderParty,
      object subject,
      MapEvent.BattleTypes battleType)
    {
      if (defenderParty.MapEvent == null)
      {
        Campaign.Current.Models.EncounterModel.CreateMapEventComponentForEncounter(attackerParty, defenderParty, battleType);
      }
      else
      {
        BattleSideEnum side = BattleSideEnum.Attacker;
        if (defenderParty.Side == BattleSideEnum.Attacker)
          side = BattleSideEnum.Defender;
        attackerParty.MapEventSide = defenderParty.MapEvent.GetMapEventSide(side);
      }
      if (defenderParty.MapEvent.IsPlayerMapEvent && !defenderParty.MapEvent.IsSallyOut && PlayerEncounter.Current != null && MobileParty.MainParty.CurrentSettlement != null)
        PlayerEncounter.Current.InterruptEncounter("encounter_interrupted");
      bool showNotification = (attackerParty.MobileParty?.Army == null || attackerParty.MobileParty?.Army.LeaderParty == attackerParty.MobileParty) && (defenderParty.MobileParty?.Army == null || defenderParty.MobileParty?.Army.LeaderParty == defenderParty.MobileParty);
      if (showNotification && defenderParty.IsSettlement && defenderParty.MapEvent != null && defenderParty.MapEvent.DefenderSide.Parties.Count > 1)
        showNotification = false;
      CampaignEventDispatcher.Instance.OnStartBattle(attackerParty, defenderParty, subject, showNotification);
    }

    public static void Apply(PartyBase attackerParty, PartyBase defenderParty)
    {
      MapEvent.BattleTypes battleType = MapEvent.BattleTypes.None;
      object obj = (object) null;
      Settlement settlement;
      if (defenderParty.MapEvent == null)
      {
        if (attackerParty.MobileParty != null && attackerParty.MobileParty.IsGarrison)
        {
          settlement = attackerParty.MobileParty.CurrentSettlement;
          battleType = MapEvent.BattleTypes.SallyOut;
        }
        else if (attackerParty.MobileParty.CurrentSettlement != null)
          settlement = attackerParty.MobileParty.CurrentSettlement;
        else if (defenderParty.MobileParty.CurrentSettlement != null)
          settlement = defenderParty.MobileParty.CurrentSettlement;
        else if (attackerParty.MobileParty.BesiegedSettlement != null)
        {
          settlement = attackerParty.MobileParty.BesiegedSettlement;
          if (!defenderParty.IsSettlement)
            battleType = MapEvent.BattleTypes.SiegeOutside;
        }
        else if (defenderParty.MobileParty.BesiegedSettlement != null)
        {
          settlement = defenderParty.MobileParty.BesiegedSettlement;
          battleType = MapEvent.BattleTypes.SiegeOutside;
        }
        else
        {
          battleType = MapEvent.BattleTypes.FieldBattle;
          settlement = (Settlement) null;
        }
        if (settlement != null && battleType == MapEvent.BattleTypes.None)
        {
          if (settlement.IsTown)
            battleType = MapEvent.BattleTypes.Siege;
          else if (settlement.IsHideout)
            battleType = MapEvent.BattleTypes.Hideout;
          else if (settlement.IsVillage)
            Debug.FailedAssert("Since villages can be raided or sieged, this block cannot decide if the battle is raid or siege.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\StartBattleAction.cs", nameof (Apply), 116);
          else
            Debug.FailedAssert("Missing settlement type in StartBattleAction.GetGameAction", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\StartBattleAction.cs", nameof (Apply), 120);
        }
      }
      else
      {
        if (defenderParty.MapEvent.IsFieldBattle)
          battleType = MapEvent.BattleTypes.FieldBattle;
        else if (defenderParty.MapEvent.IsRaid)
          battleType = MapEvent.BattleTypes.Raid;
        else if (defenderParty.MapEvent.IsSiegeAssault)
          battleType = MapEvent.BattleTypes.Siege;
        else if (defenderParty.MapEvent.IsSallyOut)
          battleType = MapEvent.BattleTypes.SallyOut;
        else if (defenderParty.MapEvent.IsSiegeOutside)
          battleType = MapEvent.BattleTypes.SiegeOutside;
        else
          Debug.FailedAssert("Missing mapEventType?", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\Actions\\StartBattleAction.cs", nameof (Apply), 148);
        settlement = defenderParty.MapEvent.MapEventSettlement;
      }
      object subject = obj ?? (object) settlement;
      StartBattleAction.ApplyInternal(attackerParty, defenderParty, subject, battleType);
    }

    public static void ApplyStartBattle(MobileParty attackerParty, MobileParty defenderParty)
    {
      StartBattleAction.ApplyInternal(attackerParty.Party, defenderParty.Party, (object) null, MapEvent.BattleTypes.FieldBattle);
    }

    public static void ApplyStartRaid(MobileParty attackerParty, Settlement settlement)
    {
      StartBattleAction.ApplyInternal(attackerParty.Party, settlement.Party, (object) settlement, MapEvent.BattleTypes.Raid);
    }

    public static void ApplyStartSallyOut(Settlement settlement, MobileParty defenderParty)
    {
      StartBattleAction.ApplyInternal(settlement.Town.GarrisonParty.Party, defenderParty.Party, (object) settlement, MapEvent.BattleTypes.SallyOut);
    }

    public static void ApplyStartAssaultAgainstWalls(
      MobileParty attackerParty,
      Settlement settlement)
    {
      StartBattleAction.ApplyInternal(attackerParty.Party, settlement.Party, (object) settlement, MapEvent.BattleTypes.Siege);
    }
  }
}
