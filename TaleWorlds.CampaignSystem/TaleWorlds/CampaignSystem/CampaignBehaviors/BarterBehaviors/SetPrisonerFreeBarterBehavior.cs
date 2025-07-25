// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors.SetPrisonerFreeBarterBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
  public class SetPrisonerFreeBarterBehavior : CampaignBehaviorBase
  {
    public override void RegisterEvents()
    {
      CampaignEvents.BarterablesRequested.AddNonSerializedListener((object) this, new Action<BarterData>(this.CheckForBarters));
    }

    public override void SyncData(IDataStore dataStore)
    {
    }

    public void CheckForBarters(BarterData args)
    {
      PartyBase offererParty = args.OffererParty;
      PartyBase otherParty = args.OtherParty;
      if (offererParty == null || otherParty == null)
        return;
      List<CharacterObject> list1 = offererParty.PrisonerHeroes.ToList<CharacterObject>();
      if (offererParty.LeaderHero != null && offererParty.LeaderHero == offererParty.LeaderHero?.Clan?.Leader)
        list1.AddRange(offererParty.LeaderHero.Clan.DungeonPrisonersOfClan);
      foreach (CharacterObject characterObject in list1)
      {
        if (characterObject.IsHero && !FactionManager.IsAtWarAgainstFaction(characterObject.HeroObject.MapFaction, otherParty.MapFaction))
        {
          Barterable barterable = (Barterable) new SetPrisonerFreeBarterable(characterObject.HeroObject, args.OffererHero, args.OffererParty, args.OtherHero);
          args.AddBarterable<PrisonerBarterGroup>(barterable);
        }
      }
      List<CharacterObject> list2 = otherParty.PrisonerHeroes.ToList<CharacterObject>();
      if (otherParty.LeaderHero != null && otherParty.LeaderHero == otherParty.LeaderHero?.Clan?.Leader)
        list2.AddRange(otherParty.LeaderHero.Clan.DungeonPrisonersOfClan);
      foreach (CharacterObject characterObject in list2)
      {
        if (characterObject.IsHero && !FactionManager.IsAtWarAgainstFaction(characterObject.HeroObject.MapFaction, offererParty.MapFaction))
        {
          Barterable barterable = (Barterable) new SetPrisonerFreeBarterable(characterObject.HeroObject, args.OtherHero, args.OtherParty, args.OffererHero);
          args.AddBarterable<PrisonerBarterGroup>(barterable);
        }
      }
    }
  }
}
