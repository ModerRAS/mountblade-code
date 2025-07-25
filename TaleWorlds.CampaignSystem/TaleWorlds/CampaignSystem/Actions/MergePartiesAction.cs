// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.MergePartiesAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class MergePartiesAction
  {
    private static void ApplyInternal(PartyBase majorParty, PartyBase joinedParty)
    {
      int numberOfAllMembers = joinedParty.NumberOfAllMembers;
      majorParty.AddMembers(joinedParty.MemberRoster);
      majorParty.AddPrisoners(joinedParty.PrisonRoster);
      DestroyPartyAction.Apply((PartyBase) null, joinedParty.MobileParty);
      if (majorParty != PartyBase.MainParty)
        return;
      MBTextManager.SetTextVariable("NUMBER_OF_TROOPS", numberOfAllMembers);
      MBInformationManager.AddQuickInformation(new TextObject("{=511LONpe}{NUMBER_OF_TROOPS} troops joined you."));
    }

    public static void Apply(PartyBase majorParty, PartyBase joinedParty)
    {
      MergePartiesAction.ApplyInternal(majorParty, joinedParty);
    }
  }
}
