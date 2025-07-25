// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Party.PartyPresentationDoneButtonConditionDelegate
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Party
{
  public delegate Tuple<bool, TextObject> PartyPresentationDoneButtonConditionDelegate(
    TroopRoster leftMemberRoster,
    TroopRoster leftPrisonRoster,
    TroopRoster rightMemberRoster,
    TroopRoster rightPrisonRoster,
    int leftLimitNum,
    int rightLimitNum);
}
