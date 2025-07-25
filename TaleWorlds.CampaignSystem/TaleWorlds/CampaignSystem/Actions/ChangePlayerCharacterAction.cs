// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.ChangePlayerCharacterAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public class ChangePlayerCharacterAction
  {
    public static void Apply(Hero hero)
    {
      Hero mainHero = Hero.MainHero;
      MobileParty mainParty = MobileParty.MainParty;
      Game.Current.PlayerTroop = (BasicCharacterObject) hero.CharacterObject;
      CampaignEventDispatcher.Instance.OnBeforePlayerCharacterChanged(mainHero, hero);
      bool isMainPartyChanged;
      Campaign.Current.OnPlayerCharacterChanged(out isMainPartyChanged);
      if (mainParty != MobileParty.MainParty && mainParty.IsActive)
      {
        if (mainParty.MemberRoster.TotalManCount == 0)
          DestroyPartyAction.Apply((PartyBase) null, mainParty);
        else
          mainParty.LordPartyComponent.ChangePartyOwner(Hero.MainHero);
      }
      if (hero.IsPrisoner)
        PlayerCaptivity.OnPlayerCharacterChanged();
      CampaignEventDispatcher.Instance.OnPlayerCharacterChanged(mainHero, hero, MobileParty.MainParty, isMainPartyChanged);
      PartyBase.MainParty.SetVisualAsDirty();
      Campaign.Current.MainHeroIllDays = -1;
    }
  }
}
