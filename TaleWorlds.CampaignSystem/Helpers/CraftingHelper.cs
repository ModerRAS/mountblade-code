// Decompiled with JetBrains decompiler
// Type: Helpers.CraftingHelper
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace Helpers
{
  public static class CraftingHelper
  {
    public static IEnumerable<Hero> GetAvailableHeroesForCrafting()
    {
      return PartyBase.MainParty.MemberRoster.GetTroopRoster().Where<TroopRosterElement>((Func<TroopRosterElement, bool>) (m => m.Character.IsHero)).Select<TroopRosterElement, Hero>((Func<TroopRosterElement, Hero>) (t => t.Character.HeroObject));
    }

    public static void ChangeCurrentCraftingTemplate(CraftingTemplate craftingTemplate)
    {
      CraftingState activeState = Game.Current.GameStateManager.ActiveState as CraftingState;
      CraftingHelper.OpenCrafting(craftingTemplate, activeState);
    }

    public static void OpenCrafting(CraftingTemplate craftingTemplate, CraftingState oldState = null)
    {
      Settlement currentSettlement = Settlement.CurrentSettlement;
      TextObject name = new TextObject("{=uZhHh7pm}Crafted {CURR_TEMPLATE_NAME}");
      name.SetTextVariable("CURR_TEMPLATE_NAME", craftingTemplate.TemplateName);
      Crafting newCraftingLogic = new Crafting(craftingTemplate, currentSettlement != null ? (BasicCultureObject) currentSettlement.Culture : (BasicCultureObject) new CultureObject(), name);
      newCraftingLogic.Init();
      newCraftingLogic.ReIndex();
      if (oldState == null)
      {
        CraftingState state = Game.Current.GameStateManager.CreateState<CraftingState>();
        state.InitializeLogic(newCraftingLogic);
        Game.Current.GameStateManager.PushState((TaleWorlds.Core.GameState) state);
      }
      else
        oldState.InitializeLogic(newCraftingLogic, true);
    }
  }
}
