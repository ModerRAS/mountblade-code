// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.Barterables.PeaceBarterable
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Map;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem.Barterables
{
  public class PeaceBarterable : Barterable
  {
    public readonly IFaction PeaceOfferingFaction;
    public readonly IFaction OfferedFaction;

    public CampaignTime Duration { get; }

    public override string StringID => "peace_barterable";

    public PeaceBarterable(
      Hero owner,
      IFaction peaceOfferingFaction,
      IFaction offeredFaction,
      CampaignTime duration)
      : base(owner, (PartyBase) null)
    {
      this.Duration = duration;
      this.PeaceOfferingFaction = peaceOfferingFaction;
      this.OfferedFaction = offeredFaction;
    }

    public PeaceBarterable(
      IFaction peaceOfferingFaction,
      IFaction offeredFaction,
      CampaignTime duration)
      : base(peaceOfferingFaction.Leader, (PartyBase) null)
    {
      this.Duration = duration;
      this.PeaceOfferingFaction = peaceOfferingFaction;
      this.OfferedFaction = offeredFaction;
    }

    public override TextObject Name
    {
      get
      {
        TextObject name = new TextObject("{=R0bJS0pn}Make peace with the {OTHER_FACTION}");
        name.SetTextVariable("OTHER_FACTION", this.OfferedFaction.InformalName);
        return name;
      }
    }

    public override int GetUnitValueForFaction(IFaction factionToEvaluateFor)
    {
      IFaction factionDeclaredPeace = this.OfferedFaction;
      IFaction factionDeclaresPeace = this.PeaceOfferingFaction;
      if (factionToEvaluateFor.MapFaction == factionDeclaredPeace)
      {
        IFaction faction = factionDeclaredPeace;
        factionDeclaredPeace = factionDeclaresPeace;
        factionDeclaresPeace = faction;
      }
      if (factionDeclaredPeace == null || factionDeclaresPeace == null)
        return 0;
      float ofDeclaringPeace = (float) (int) Campaign.Current.Models.DiplomacyModel.GetScoreOfDeclaringPeace(factionDeclaresPeace, factionDeclaredPeace, factionToEvaluateFor, out TextObject _);
      if (factionToEvaluateFor.IsKingdomFaction)
      {
        float num1 = 0.0f;
        int num2 = 0;
        foreach (Clan clan in (List<Clan>) ((Kingdom) factionToEvaluateFor).Clans)
        {
          float num3 = clan.Leader != null ? (clan.Leader.Gold < 50000 ? (float) (1.0 + 0.5 * ((50000.0 - (double) clan.Leader.Gold) / 50000.0)) : (clan.Leader.Gold > 200000 ? MathF.Max(0.66f, MathF.Pow(200000f / (float) clan.Leader.Gold, 0.4f)) : 1f)) : 1f;
          num1 += num3;
          ++num2;
        }
        float num4 = (float) (((double) num1 + 1.0) / ((double) num2 + 1.0));
        ofDeclaringPeace /= num4;
      }
      return (int) ofDeclaringPeace;
    }

    public override bool IsCompatible(Barterable barterable)
    {
      return !(barterable is PeaceBarterable peaceBarterable) || peaceBarterable.OfferedFaction != this.OriginalOwner.MapFaction;
    }

    public override ImageIdentifier GetVisualIdentifier() => (ImageIdentifier) null;

    public override string GetEncyclopediaLink() => this.OriginalOwner.MapFaction.EncyclopediaLink;

    public override void Apply()
    {
      if (!this.PeaceOfferingFaction.MapFaction.IsAtWarWith(this.OfferedFaction))
        return;
      MakePeaceAction.Apply(this.PeaceOfferingFaction.MapFaction, this.OfferedFaction);
      if (PlayerEncounter.Current == null || Hero.OneToOneConversationHero != this.OriginalOwner)
        return;
      PlayerEncounter.LeaveEncounter = true;
      if (this.OriginalParty?.MobileParty?.Ai.AiBehaviorPartyBase == null)
        return;
      LocatableSearchData<MobileParty> data = Campaign.Current.MobilePartyLocator.StartFindingLocatablesAroundPosition(MobileParty.MainParty.Position2D, 5f);
      for (MobileParty nextLocatable = Campaign.Current.MobilePartyLocator.FindNextLocatable(ref data); nextLocatable != null; nextLocatable = Campaign.Current.MobilePartyLocator.FindNextLocatable(ref data))
      {
        if (!nextLocatable.IsMainParty && nextLocatable.MapFaction == this.OriginalOwner.MapFaction && (nextLocatable.TargetParty == MobileParty.MainParty || nextLocatable.Ai.AiBehaviorPartyBase == PartyBase.MainParty))
          nextLocatable.Ai.SetMoveModeHold();
      }
      if (this.OriginalParty.MobileParty.Army == null || MobileParty.MainParty.Army == this.OriginalParty.MobileParty.Army)
        return;
      this.OriginalParty.MobileParty.Army.LeaderParty.Ai.SetMoveModeHold();
    }

    internal static void AutoGeneratedStaticCollectObjectsPeaceBarterable(
      object o,
      List<object> collectedObjects)
    {
      ((Barterable) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
    }
  }
}
