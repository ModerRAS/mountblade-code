// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultKingdomDecisionPermissionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultKingdomDecisionPermissionModel : KingdomDecisionPermissionModel
  {
    public override bool IsPolicyDecisionAllowed(PolicyObject policy) => true;

    public override bool IsWarDecisionAllowedBetweenKingdoms(
      Kingdom kingdom1,
      Kingdom kingdom2,
      out TextObject reason)
    {
      reason = TextObject.Empty;
      return true;
    }

    public override bool IsPeaceDecisionAllowedBetweenKingdoms(
      Kingdom kingdom1,
      Kingdom kingdom2,
      out TextObject reason)
    {
      reason = TextObject.Empty;
      return true;
    }

    public override bool IsAnnexationDecisionAllowed(Settlement annexedSettlement) => true;

    public override bool IsExpulsionDecisionAllowed(Clan expelledClan) => true;

    public override bool IsKingSelectionDecisionAllowed(Kingdom kingdom) => true;
  }
}
