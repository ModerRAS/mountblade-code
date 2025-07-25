// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.MakePeaceAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Linq;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class MakePeaceAction
  {
    private const float DefaultValueForBeingLimitedAfterPeace = 100000f;

    private static void ApplyInternal(
      IFaction faction1,
      IFaction faction2,
      int dailyTributeFrom1To2,
      MakePeaceAction.MakePeaceDetail detail = MakePeaceAction.MakePeaceDetail.Default)
    {
      StanceLink stanceWith = faction1.GetStanceWith(faction2);
      stanceWith.StanceType = StanceType.Neutral;
      stanceWith.SetDailyTributePaid(faction1, dailyTributeFrom1To2);
      IFaction side1Faction = faction1;
      IFaction side2Faction = faction2;
      if (side1Faction == Hero.MainHero.MapFaction || side2Faction == Hero.MainHero.MapFaction)
      {
        IFaction dirtySide = side1Faction == Hero.MainHero.MapFaction ? side2Faction : side1Faction;
        foreach (Settlement settlement in Settlement.All.Where<Settlement>((Func<Settlement, bool>) (party => party.IsVisible && party.MapFaction == dirtySide)))
          settlement.Party.SetVisualAsDirty();
        foreach (MobileParty mobileParty in MobileParty.All.Where<MobileParty>((Func<MobileParty, bool>) (party => party.IsVisible && party.MapFaction == dirtySide)))
          mobileParty.Party.SetVisualAsDirty();
      }
      CampaignEventDispatcher.Instance.OnMakePeace(side1Faction, side2Faction, detail);
    }

    public static void ApplyPardonPlayer(IFaction faction)
    {
      MakePeaceAction.ApplyInternal(faction, Hero.MainHero.MapFaction, 0);
    }

    public static void Apply(IFaction faction1, IFaction faction2, int dailyTributeFrom1To2 = 0)
    {
      MakePeaceAction.ApplyInternal(faction1, faction2, dailyTributeFrom1To2);
    }

    public static void ApplyByKingdomDecision(
      IFaction faction1,
      IFaction faction2,
      int dailyTributeFrom1To2 = 0)
    {
      MakePeaceAction.ApplyInternal(faction1, faction2, dailyTributeFrom1To2, MakePeaceAction.MakePeaceDetail.ByKingdomDecision);
    }

    public enum MakePeaceDetail
    {
      Default,
      ByKingdomDecision,
    }
  }
}
