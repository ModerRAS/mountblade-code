// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Party.PartyPresentationDoneButtonDelegate
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Roster;

#nullable disable
namespace TaleWorlds.CampaignSystem.Party
{
  public delegate bool PartyPresentationDoneButtonDelegate(
    TroopRoster leftMemberRoster,
    TroopRoster leftPrisonRoster,
    TroopRoster rightMemberRoster,
    TroopRoster rightPrisonRoster,
    FlattenedTroopRoster takenPrisonerRoster,
    FlattenedTroopRoster releasedPrisonerRoster,
    bool isForced,
    PartyBase leftParty = null,
    PartyBase rightParty = null);
}
