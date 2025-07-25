// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultSiegeAftermathModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultSiegeAftermathModel : SiegeAftermathModel
  {
    public override int GetSiegeAftermathTraitXpChangeForPlayer(
      TraitObject trait,
      Settlement devastatedSettlement,
      SiegeAftermathAction.SiegeAftermath aftermathType)
    {
      int xpChangeForPlayer = 0;
      if (trait == DefaultTraits.Mercy)
      {
        switch (aftermathType)
        {
          case SiegeAftermathAction.SiegeAftermath.Devastate:
            xpChangeForPlayer = !devastatedSettlement.IsTown ? -30 : -50;
            break;
          case SiegeAftermathAction.SiegeAftermath.ShowMercy:
            xpChangeForPlayer = !devastatedSettlement.IsTown ? 10 : 20;
            break;
        }
      }
      return xpChangeForPlayer;
    }
  }
}
