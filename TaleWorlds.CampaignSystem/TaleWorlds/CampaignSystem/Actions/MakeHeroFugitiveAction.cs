// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.MakeHeroFugitiveAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class MakeHeroFugitiveAction
  {
    private static void ApplyInternal(Hero fugitive)
    {
      if (!fugitive.IsAlive)
        return;
      if (fugitive.PartyBelongedTo != null)
      {
        if (fugitive.PartyBelongedTo.LeaderHero == fugitive)
          DestroyPartyAction.Apply((PartyBase) null, fugitive.PartyBelongedTo);
        else
          fugitive.PartyBelongedTo.MemberRoster.RemoveTroop(fugitive.CharacterObject);
      }
      if (fugitive.CurrentSettlement != null)
        LeaveSettlementAction.ApplyForCharacterOnly(fugitive);
      fugitive.ChangeState(Hero.CharacterStates.Fugitive);
      CampaignEventDispatcher.Instance.OnCharacterBecameFugitive(fugitive);
    }

    public static void Apply(Hero fugitive) => MakeHeroFugitiveAction.ApplyInternal(fugitive);
  }
}
