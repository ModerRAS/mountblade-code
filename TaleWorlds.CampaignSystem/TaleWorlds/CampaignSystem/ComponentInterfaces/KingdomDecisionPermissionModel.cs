// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ComponentInterfaces.KingdomDecisionPermissionModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.ComponentInterfaces
{
  public abstract class KingdomDecisionPermissionModel : GameModel
  {
    public abstract bool IsPolicyDecisionAllowed(PolicyObject policy);

    public abstract bool IsWarDecisionAllowedBetweenKingdoms(
      Kingdom kingdom1,
      Kingdom kingdom2,
      out TextObject reason);

    public abstract bool IsPeaceDecisionAllowedBetweenKingdoms(
      Kingdom kingdom1,
      Kingdom kingdom2,
      out TextObject reason);

    public abstract bool IsAnnexationDecisionAllowed(Settlement annexedSettlement);

    public abstract bool IsExpulsionDecisionAllowed(Clan expelledClan);

    public abstract bool IsKingSelectionDecisionAllowed(Kingdom kingdom);
  }
}
