// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.GainRenownAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class GainRenownAction
  {
    private static void ApplyInternal(Hero hero, float gainedRenown, bool doNotNotify)
    {
      if ((double) gainedRenown <= 0.0)
        return;
      hero.Clan.AddRenown(gainedRenown);
      CampaignEventDispatcher.Instance.OnRenownGained(hero, (int) gainedRenown, doNotNotify);
    }

    public static void Apply(Hero hero, float renownValue, bool doNotNotify = false)
    {
      GainRenownAction.ApplyInternal(hero, renownValue, doNotNotify);
    }
  }
}
