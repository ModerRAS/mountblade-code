// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.IMarriageOfferCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public interface IMarriageOfferCampaignBehavior : ICampaignBehavior
  {
    void OnMarriageOfferedToPlayer(Hero suitor, Hero maiden);

    void OnMarriageOfferCanceled(Hero suitor, Hero maiden);

    MBBindingList<TextObject> GetMarriageAcceptedConsequences();

    void OnMarriageOfferAcceptedOnPopUp();

    void OnMarriageOfferDeclinedOnPopUp();
  }
}
