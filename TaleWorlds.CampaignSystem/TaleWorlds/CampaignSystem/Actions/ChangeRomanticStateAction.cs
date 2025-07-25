// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangeRomanticStateAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class ChangeRomanticStateAction
  {
    private static void ApplyInternal(Hero hero1, Hero hero2, Romance.RomanceLevelEnum toWhat)
    {
      Romance.SetRomanticState(hero1, hero2, toWhat);
      CampaignEventDispatcher.Instance.OnRomanticStateChanged(hero1, hero2, toWhat);
    }

    public static void Apply(Hero person1, Hero person2, Romance.RomanceLevelEnum toWhat)
    {
      ChangeRomanticStateAction.ApplyInternal(person1, person2, toWhat);
    }
  }
}
