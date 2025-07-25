// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.DeclareWarAction
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
  public static class DeclareWarAction
  {
    private static void ApplyInternal(
      IFaction faction1,
      IFaction faction2,
      DeclareWarAction.DeclareWarDetail declareWarDetail)
    {
      FactionManager.DeclareWar(faction1, faction2);
      IFaction faction1_1 = faction1;
      IFaction faction2_1 = faction2;
      if (faction1.IsKingdomFaction && (double) faction2.Fiefs.Count > 1.0 + (double) faction1.Fiefs.Count * 0.20000000298023224)
      {
        Kingdom kingdom = (Kingdom) faction1;
        kingdom.PoliticalStagnation = (int) ((double) kingdom.PoliticalStagnation * 0.85000002384185791 - 3.0);
        if (kingdom.PoliticalStagnation < 0)
          kingdom.PoliticalStagnation = 0;
      }
      if (faction2.IsKingdomFaction && (double) faction1.Fiefs.Count > 1.0 + (double) faction2.Fiefs.Count * 0.20000000298023224)
      {
        Kingdom kingdom = (Kingdom) faction2;
        kingdom.PoliticalStagnation = (int) ((double) kingdom.PoliticalStagnation * 0.85000002384185791 - 3.0);
        if (kingdom.PoliticalStagnation < 0)
          kingdom.PoliticalStagnation = 0;
      }
      if (faction1_1 == Hero.MainHero.MapFaction || faction2_1 == Hero.MainHero.MapFaction)
      {
        IFaction dirtySide = faction1_1 == Hero.MainHero.MapFaction ? faction2_1 : faction1_1;
        foreach (Settlement settlement in Settlement.All.Where<Settlement>((Func<Settlement, bool>) (party => party.IsVisible && party.MapFaction == dirtySide)))
          settlement.Party.SetVisualAsDirty();
        foreach (MobileParty mobileParty in MobileParty.All.Where<MobileParty>((Func<MobileParty, bool>) (party => party.IsVisible && party.MapFaction == dirtySide)))
          mobileParty.Party.SetVisualAsDirty();
      }
      CampaignEventDispatcher.Instance.OnWarDeclared(faction1_1, faction2_1, declareWarDetail);
    }

    public static void ApplyByKingdomDecision(IFaction faction1, IFaction faction2)
    {
      DeclareWarAction.ApplyInternal(faction1, faction2, DeclareWarAction.DeclareWarDetail.CausedByKingdomDecision);
    }

    public static void ApplyByDefault(IFaction faction1, IFaction faction2)
    {
      DeclareWarAction.ApplyInternal(faction1, faction2, DeclareWarAction.DeclareWarDetail.Default);
    }

    public static void ApplyByPlayerHostility(IFaction faction1, IFaction faction2)
    {
      DeclareWarAction.ApplyInternal(faction1, faction2, DeclareWarAction.DeclareWarDetail.CausedByPlayerHostility);
    }

    public static void ApplyByRebellion(IFaction faction1, IFaction faction2)
    {
      DeclareWarAction.ApplyInternal(faction1, faction2, DeclareWarAction.DeclareWarDetail.CausedByRebellion);
    }

    public static void ApplyByCrimeRatingChange(IFaction faction1, IFaction faction2)
    {
      DeclareWarAction.ApplyInternal(faction1, faction2, DeclareWarAction.DeclareWarDetail.CausedByCrimeRatingChange);
    }

    public static void ApplyByKingdomCreation(IFaction faction1, IFaction faction2)
    {
      DeclareWarAction.ApplyInternal(faction1, faction2, DeclareWarAction.DeclareWarDetail.CausedByKingdomCreation);
    }

    public enum DeclareWarDetail
    {
      Default,
      CausedByPlayerHostility,
      CausedByKingdomDecision,
      CausedByRebellion,
      CausedByCrimeRatingChange,
      CausedByKingdomCreation,
    }
  }
}
