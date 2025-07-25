// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultPartyDesertionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Library;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultPartyDesertionModel : PartyDesertionModel
  {
    public override int GetMoraleThresholdForTroopDesertion(MobileParty party) => 10;

    public override int GetNumberOfDeserters(MobileParty mobileParty)
    {
      int num = mobileParty.IsWageLimitExceeded() ? 1 : 0;
      bool flag = mobileParty.Party.NumberOfAllMembers > mobileParty.LimitedPartySize;
      int numberOfDeserters = 0;
      if (num != 0)
        numberOfDeserters = MathF.Min(20, MathF.Max(1, (int) ((double) (mobileParty.TotalWage - mobileParty.PaymentLimit) / (double) Campaign.Current.AverageWage * 0.25)));
      else if (flag)
        numberOfDeserters = !mobileParty.IsGarrison ? (mobileParty.Party.NumberOfAllMembers > mobileParty.LimitedPartySize ? MathF.Max(1, (int) ((double) (mobileParty.Party.NumberOfAllMembers - mobileParty.LimitedPartySize) * 0.25)) : 0) : MathF.Ceiling((float) (mobileParty.Party.NumberOfAllMembers - mobileParty.LimitedPartySize) * 0.25f);
      return numberOfDeserters;
    }
  }
}
