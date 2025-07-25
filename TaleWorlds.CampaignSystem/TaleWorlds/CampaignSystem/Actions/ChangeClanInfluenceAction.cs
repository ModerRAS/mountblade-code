// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeClanInfluenceAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeClanInfluenceAction
  {
    private static void ApplyInternal(Clan clan, float amount)
    {
      clan.Influence += amount;
      CampaignEventDispatcher.Instance.OnClanInfluenceChanged(clan, amount);
    }

    public static void Apply(Clan clan, float amount)
    {
      ChangeClanInfluenceAction.ApplyInternal(clan, amount);
    }
  }
}
