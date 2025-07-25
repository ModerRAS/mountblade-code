// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.GameComponents.DefaultNotableSpawnModel
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.ComponentInterfaces;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.GameComponents
{
  public class DefaultNotableSpawnModel : NotableSpawnModel
  {
    public override int GetTargetNotableCountForSettlement(
      Settlement settlement,
      Occupation occupation)
    {
      int countForSettlement = 0;
      if (settlement.IsTown)
      {
        switch (occupation)
        {
          case Occupation.Artisan:
            countForSettlement = 1;
            break;
          case Occupation.Merchant:
            countForSettlement = 2;
            break;
          case Occupation.GangLeader:
            countForSettlement = 2;
            break;
          default:
            countForSettlement = 0;
            break;
        }
      }
      else if (settlement.IsVillage)
      {
        switch (occupation)
        {
          case Occupation.Headman:
            countForSettlement = 1;
            break;
          case Occupation.RuralNotable:
            countForSettlement = 2;
            break;
        }
      }
      return countForSettlement;
    }
  }
}
