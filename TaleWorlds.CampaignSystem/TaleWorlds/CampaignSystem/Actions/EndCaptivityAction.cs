// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Actions.EndCaptivityAction
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Actions
{
  public static class EndCaptivityAction
  {
    private static void ApplyInternal(Hero prisoner, EndCaptivityDetail detail, Hero facilitatior = null)
    {
      PartyBase belongedToAsPrisoner = prisoner.PartyBelongedToAsPrisoner;
      IFaction mapFaction = belongedToAsPrisoner?.MapFaction;
      if (prisoner == Hero.MainHero)
      {
        PlayerCaptivity.EndCaptivity();
        if (facilitatior != null && detail != EndCaptivityDetail.Death)
        {
          StringHelpers.SetCharacterProperties("FACILITATOR", facilitatior.CharacterObject);
          MBInformationManager.AddQuickInformation(new TextObject("{=xPuSASof}{FACILITATOR.NAME} paid a ransom and freed you from captivity."));
        }
        CampaignEventDispatcher.Instance.OnHeroPrisonerReleased(prisoner, belongedToAsPrisoner, mapFaction, detail);
      }
      else
      {
        if (detail == EndCaptivityDetail.Death)
          prisoner.StayingInSettlement = (Settlement) null;
        if (belongedToAsPrisoner != null && belongedToAsPrisoner.PrisonRoster.Contains(prisoner.CharacterObject))
          belongedToAsPrisoner.PrisonRoster.RemoveTroop(prisoner.CharacterObject);
        switch (detail)
        {
          case EndCaptivityDetail.Ransom:
          case EndCaptivityDetail.ReleasedAfterPeace:
          case EndCaptivityDetail.ReleasedAfterBattle:
          case EndCaptivityDetail.ReleasedAfterEscape:
          case EndCaptivityDetail.ReleasedByChoice:
          case EndCaptivityDetail.ReleasedByCompensation:
            prisoner.ChangeState(Hero.CharacterStates.Released);
            if (prisoner.IsPlayerCompanion && detail != EndCaptivityDetail.Ransom)
            {
              MakeHeroFugitiveAction.Apply(prisoner);
              break;
            }
            break;
          case EndCaptivityDetail.Death:
            return;
          default:
            MakeHeroFugitiveAction.Apply(prisoner);
            break;
        }
        prisoner.CurrentSettlement?.AddHeroWithoutParty(prisoner);
        CampaignEventDispatcher.Instance.OnHeroPrisonerReleased(prisoner, belongedToAsPrisoner, mapFaction, detail);
      }
    }

    public static void ApplyByReleasedAfterBattle(Hero character)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.ReleasedAfterBattle);
    }

    public static void ApplyByRansom(Hero character, Hero facilitator)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.Ransom, facilitator);
    }

    public static void ApplyByPeace(Hero character, Hero facilitator = null)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.ReleasedAfterPeace, facilitator);
    }

    public static void ApplyByEscape(Hero character, Hero facilitator = null)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.ReleasedAfterEscape, facilitator);
    }

    public static void ApplyByDeath(Hero character)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.Death);
    }

    public static void ApplyByReleasedByChoice(FlattenedTroopRoster troopRoster)
    {
      foreach (FlattenedTroopRosterElement troopRosterElement in troopRoster)
      {
        if (troopRosterElement.Troop.IsHero)
          EndCaptivityAction.ApplyInternal(troopRosterElement.Troop.HeroObject, EndCaptivityDetail.ReleasedByChoice);
      }
      CampaignEventDispatcher.Instance.OnPrisonerReleased(troopRoster);
    }

    public static void ApplyByReleasedByChoice(Hero character, Hero facilitator = null)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.ReleasedByChoice, facilitator);
    }

    public static void ApplyByReleasedByCompensation(Hero character)
    {
      EndCaptivityAction.ApplyInternal(character, EndCaptivityDetail.ReleasedByCompensation);
    }
  }
}
