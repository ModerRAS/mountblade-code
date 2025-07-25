// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.ICampaignBehaviorManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public interface ICampaignBehaviorManager
  {
    void RegisterEvents();

    T GetBehavior<T>();

    IEnumerable<T> GetBehaviors<T>();

    void AddBehavior(CampaignBehaviorBase campaignBehavior);

    void RemoveBehavior<T>() where T : CampaignBehaviorBase;

    void ClearBehaviors();

    void LoadBehaviorData();

    void InitializeCampaignBehaviors(IEnumerable<CampaignBehaviorBase> inputComponents);
  }
}
