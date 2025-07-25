// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.MilitiasCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Settlements;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class MilitiasCampaignBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.OnNewGameCreatedPartialFollowUpEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter, int>(this.OnNewGameCreatedPartialFollowUp));
    }

    private void OnNewGameCreatedPartialFollowUp(CampaignGameStarter starter, int i)
    {
      int count1 = Town.AllTowns.Count;
      int count2 = Town.AllCastles.Count;
      int count3 = Village.All.Count;
      int num1 = count1 / 100 + (count1 % 100 > i ? 1 : 0);
      int num2 = count2 / 100 + (count2 % 100 > i ? 1 : 0);
      int num3 = count3 / 100 + (count3 % 100 > i ? 1 : 0);
      int num4 = count1 / 100 * i;
      int num5 = count2 / 100 * i;
      int num6 = count3 / 100 * i;
      for (int index = 0; index < i; ++index)
      {
        num4 += count1 % 100 > index ? 1 : 0;
        num5 += count2 % 100 > index ? 1 : 0;
        num6 += count3 % 100 > index ? 1 : 0;
      }
      for (int index = 0; index < num1; ++index)
        Town.AllTowns[num4 + index].Settlement.Militia = Town.AllTowns[num4 + index].Settlement.Town.MilitiaChange * 45f;
      for (int index = 0; index < num2; ++index)
        Town.AllCastles[num5 + index].Settlement.Militia = Town.AllCastles[num5 + index].Settlement.Town.MilitiaChange * 45f;
      for (int index = 0; index < num3; ++index)
        Village.All[num6 + index].Settlement.Militia = Village.All[num6 + index].Settlement.Village.MilitiaChange * 45f;
    }

    public override void SyncData(IDataStore dataStore)
    {
    }
  }
}
