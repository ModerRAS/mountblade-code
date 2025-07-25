// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.Barterables.MarriageBarterable
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem.Barterables
{
  public class MarriageBarterable : Barterable
  {
    [SaveableField(600)]
    public readonly Hero ProposingHero;
    [SaveableField(601)]
    public readonly Hero HeroBeingProposedTo;

    public override string StringID => "marriage_barterable";

    public MarriageBarterable(
      Hero owner,
      PartyBase ownerParty,
      Hero heroBeingProposedTo,
      Hero proposingHero)
      : base(owner, ownerParty)
    {
      this.HeroBeingProposedTo = heroBeingProposedTo;
      this.ProposingHero = proposingHero;
    }

    public override TextObject Name
    {
      get
      {
        StringHelpers.SetCharacterProperties("HERO_BEING_PROPOSED_TO", this.HeroBeingProposedTo.CharacterObject);
        StringHelpers.SetCharacterProperties("HERO_TO_MARRY", this.ProposingHero.CharacterObject);
        return new TextObject("{=rv6hk8X2}{HERO_BEING_PROPOSED_TO.NAME} to marry {HERO_TO_MARRY.NAME}");
      }
    }

    public override int GetUnitValueForFaction(IFaction faction)
    {
      if (faction != this.ProposingHero.Clan)
        return (int) (-(double) this.HeroBeingProposedTo.Clan.Renown + -(2.0 * (double) MathF.Min(0.0f, 20f - MathF.Max(this.HeroBeingProposedTo.Age - 18f, 0.0f)) * (double) MathF.Min(0.0f, 20f - MathF.Max(this.HeroBeingProposedTo.Age - 18f, 0.0f)) * (double) MathF.Min(0.0f, 20f - MathF.Max(this.HeroBeingProposedTo.Age - 18f, 0.0f))));
      float num1 = (float) this.ProposingHero.RandomInt(10000);
      float num2 = (float) (this.ProposingHero.RandomInt(-25000, 25000) + this.HeroBeingProposedTo.RandomInt(-25000, 25000));
      if (this.ProposingHero == Hero.MainHero)
      {
        num2 = 0.0f;
        num1 = 0.0f;
      }
      float num3 = (float) (this.ProposingHero.GetRelation(this.HeroBeingProposedTo) * 1000);
      double commandingStrengthForClan1 = (double) Campaign.Current.Models.DiplomacyModel.GetHeroCommandingStrengthForClan(this.ProposingHero);
      double commandingStrengthForClan2 = (double) Campaign.Current.Models.DiplomacyModel.GetHeroCommandingStrengthForClan(this.HeroBeingProposedTo);
      float num4 = this.ProposingHero.Clan == null ? 0.0f : (float) this.ProposingHero.Clan.Tier + (this.ProposingHero.Clan.Leader == this.ProposingHero.MapFaction.Leader ? MathF.Min(3f, (float) this.ProposingHero.MapFaction.Fiefs.Count / 10f) + 0.5f : 0.0f);
      float num5 = this.HeroBeingProposedTo.Clan == null ? 0.0f : (float) this.HeroBeingProposedTo.Clan.Tier + (this.HeroBeingProposedTo.Clan.Leader == this.HeroBeingProposedTo.MapFaction.Leader ? MathF.Min(3f, (float) this.HeroBeingProposedTo.MapFaction.Fiefs.Count / 10f) + 0.5f : 0.0f);
      float num6 = faction == this.ProposingHero.Clan ? (float) (((double) num5 - (double) num4) * (double) MathF.Abs(num5 - num4) * 1000.0) : (float) (((double) num4 - (double) num5) * (double) MathF.Abs(num4 - num5) * 1000.0);
      int num7 = 1000 * FactionManager.GetRelationBetweenClans(this.HeroBeingProposedTo.Clan, this.ProposingHero.Clan);
      Clan clanAfterMarriage = Campaign.Current.Models.MarriageModel.GetClanAfterMarriage(this.HeroBeingProposedTo, this.ProposingHero);
      float num8 = 0.0f;
      float num9 = 0.0f;
      if (clanAfterMarriage != this.HeroBeingProposedTo.Clan)
      {
        if (faction == clanAfterMarriage)
          num8 = Campaign.Current.Models.DiplomacyModel.GetValueOfHeroForFaction(this.HeroBeingProposedTo, (IFaction) clanAfterMarriage, true);
        else if (faction == this.HeroBeingProposedTo.Clan)
          num8 = Campaign.Current.Models.DiplomacyModel.GetValueOfHeroForFaction(this.HeroBeingProposedTo, (IFaction) this.HeroBeingProposedTo.Clan, true);
        if (clanAfterMarriage.Kingdom != null && clanAfterMarriage.Kingdom != this.HeroBeingProposedTo.Clan.Kingdom)
          num9 = Campaign.Current.Models.DiplomacyModel.GetValueOfHeroForFaction(this.HeroBeingProposedTo, (IFaction) clanAfterMarriage.Kingdom, true);
      }
      float num10 = 2f * MathF.Min(0.0f, 20f - MathF.Max(this.HeroBeingProposedTo.Age - 18f, 0.0f)) * MathF.Min(0.0f, 20f - MathF.Max(this.HeroBeingProposedTo.Age - 18f, 0.0f)) * MathF.Min(0.0f, 20f - MathF.Max(this.HeroBeingProposedTo.Age - 18f, 0.0f));
      return (int) ((double) num1 - 50000.0 + (double) num2 + (double) num3 + (double) num8 + (double) num7 + (double) num9 + (double) num6 + (double) num10);
    }

    public override void CheckBarterLink(Barterable linkedBarterable)
    {
      if (!(linkedBarterable.GetType() == typeof (MarriageBarterable)) || linkedBarterable.OriginalOwner != this.OriginalOwner || ((MarriageBarterable) linkedBarterable).HeroBeingProposedTo != this.HeroBeingProposedTo || ((MarriageBarterable) linkedBarterable).ProposingHero != this.ProposingHero)
        return;
      this.AddBarterLink(linkedBarterable);
    }

    public override bool IsCompatible(Barterable barterable)
    {
      if (!(barterable is MarriageBarterable marriageBarterable))
        return true;
      return marriageBarterable.HeroBeingProposedTo != this.HeroBeingProposedTo && marriageBarterable.HeroBeingProposedTo != this.ProposingHero && marriageBarterable.ProposingHero != this.HeroBeingProposedTo && marriageBarterable.ProposingHero != this.ProposingHero;
    }

    public override ImageIdentifier GetVisualIdentifier()
    {
      return new ImageIdentifier(CharacterCode.CreateFrom((BasicCharacterObject) this.HeroBeingProposedTo.CharacterObject));
    }

    public override string GetEncyclopediaLink() => this.HeroBeingProposedTo.EncyclopediaLink;

    public override void Apply()
    {
      MarriageAction.Apply(this.HeroBeingProposedTo, this.ProposingHero, this.HeroBeingProposedTo.Clan == Clan.PlayerClan || this.ProposingHero.Clan == Clan.PlayerClan);
    }

    internal static void AutoGeneratedStaticCollectObjectsMarriageBarterable(
      object o,
      List<object> collectedObjects)
    {
      ((Barterable) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected override void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      base.AutoGeneratedInstanceCollectObjects(collectedObjects);
      collectedObjects.Add((object) this.ProposingHero);
      collectedObjects.Add((object) this.HeroBeingProposedTo);
    }

    internal static object AutoGeneratedGetMemberValueProposingHero(object o)
    {
      return (object) ((MarriageBarterable) o).ProposingHero;
    }

    internal static object AutoGeneratedGetMemberValueHeroBeingProposedTo(object o)
    {
      return (object) ((MarriageBarterable) o).HeroBeingProposedTo;
    }
  }
}
