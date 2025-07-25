// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.TransferPrisonerAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class TransferPrisonerAction
  {
    private static void ApplyInternal(
      CharacterObject prisonerTroop,
      PartyBase prisonerOwnerParty,
      PartyBase newParty)
    {
      if (prisonerTroop.HeroObject == Hero.MainHero)
      {
        PlayerCaptivity.CaptorParty = newParty;
      }
      else
      {
        prisonerOwnerParty.PrisonRoster.AddToCounts(prisonerTroop, -1);
        newParty.AddPrisoner(prisonerTroop, 1);
      }
    }

    public static void Apply(
      CharacterObject prisonerTroop,
      PartyBase prisonerOwnerParty,
      PartyBase newParty)
    {
      TransferPrisonerAction.ApplyInternal(prisonerTroop, prisonerOwnerParty, newParty);
    }
  }
}
