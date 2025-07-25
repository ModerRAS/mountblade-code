// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeRulingClanAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public class ChangeRulingClanAction
  {
    private static void ApplyInternal(Kingdom kingdom, Clan clan)
    {
      kingdom.RulingClan = clan;
      CampaignEventDispatcher.Instance.OnRulingClanChanged(kingdom, clan);
    }

    public static void Apply(Kingdom kingdom, Clan clan)
    {
      ChangeRulingClanAction.ApplyInternal(kingdom, clan);
    }
  }
}
