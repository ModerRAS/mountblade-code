// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors.TransferPrisonerBarterBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.BarterSystem;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.Party;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors.BarterBehaviors
{
  public class TransferPrisonerBarterBehavior : CampaignBehaviorBase
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
      foreach (CharacterObject prisonerHero in offererParty.PrisonerHeroes)
      {
        if (prisonerHero.IsHero && FactionManager.IsAtWarAgainstFaction(prisonerHero.HeroObject.MapFaction, otherParty.MapFaction))
        {
          Barterable barterable = (Barterable) new TransferPrisonerBarterable(prisonerHero.HeroObject, args.OffererHero, args.OffererParty, args.OtherHero, otherParty);
          args.AddBarterable<PrisonerBarterGroup>(barterable);
        }
      }
      foreach (CharacterObject prisonerHero in otherParty.PrisonerHeroes)
      {
        if (prisonerHero.IsHero && FactionManager.IsAtWarAgainstFaction(prisonerHero.HeroObject.MapFaction, offererParty.MapFaction))
        {
          Barterable barterable = (Barterable) new TransferPrisonerBarterable(prisonerHero.HeroObject, args.OtherHero, args.OtherParty, args.OffererHero, offererParty);
          args.AddBarterable<PrisonerBarterGroup>(barterable);
        }
      }
    }
  }
}
