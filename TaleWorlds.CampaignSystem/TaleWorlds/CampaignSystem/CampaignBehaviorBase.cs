// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviorBase
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public abstract class CampaignBehaviorBase : ICampaignBehavior
  {
    public readonly string StringId;

    public CampaignBehaviorBase(string stringId) => this.StringId = stringId;

    public CampaignBehaviorBase() => this.StringId = this.GetType().Name;

    public abstract void RegisterEvents();

    public static T GetCampaignBehavior<T>() => Campaign.Current.GetCampaignBehavior<T>();

    public abstract void SyncData(IDataStore dataStore);
  }
}
