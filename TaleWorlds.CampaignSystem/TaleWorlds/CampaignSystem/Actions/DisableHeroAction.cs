// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.DisableHeroAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class DisableHeroAction
  {
    private static void ApplyInternal(Hero hero)
    {
      if (!hero.IsAlive)
        return;
      if (hero.PartyBelongedTo != null)
      {
        if (hero.PartyBelongedTo.LeaderHero == hero)
          DestroyPartyAction.Apply((PartyBase) null, hero.PartyBelongedTo);
        else
          hero.PartyBelongedTo.MemberRoster.RemoveTroop(hero.CharacterObject);
      }
      if (hero.StayingInSettlement != null)
      {
        hero.ChangeState(Hero.CharacterStates.Disabled);
        hero.StayingInSettlement = (Settlement) null;
      }
      if (hero.CurrentSettlement != null)
        LeaveSettlementAction.ApplyForCharacterOnly(hero);
      if (hero.IsPrisoner)
        EndCaptivityAction.ApplyByEscape(hero);
      hero.ChangeState(Hero.CharacterStates.Disabled);
    }

    public static void Apply(Hero hero) => DisableHeroAction.ApplyInternal(hero);
  }
}
