// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.Barterables.NoAttackBarterable
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem.Barterables
{
  public class NoAttackBarterable : Barterable
  {
    private readonly IFaction _otherFaction;
    private readonly CampaignTime _duration;
    private readonly Hero _otherHero;
    private readonly PartyBase _otherParty;

    public override string StringID => "no_attack_barterable";

    public NoAttackBarterable(
      Hero originalOwner,
      Hero otherHero,
      PartyBase ownerParty,
      PartyBase otherParty,
      CampaignTime duration)
      : base(originalOwner, ownerParty)
    {
      this._otherFaction = otherParty.MapFaction;
      this._duration = duration;
      this._otherHero = otherHero;
      this._otherParty = otherParty;
    }

    public override TextObject Name
    {
      get
      {
        TextObject name = new TextObject("{=Y3lGJT8H}{PARTY} Won't attack {FACTION} for {DURATION} {?DURATION>1}days{?}day{\\?}.");
        name.SetTextVariable("PARTY", this.OriginalParty.Name);
        name.SetTextVariable("FACTION", this._otherFaction.Name);
        name.SetTextVariable("DURATION", this._duration.ToDays.ToString());
        return name;
      }
    }

    public override void Apply()
    {
      if (this.OriginalParty != MobileParty.MainParty.Party)
        return;
      if (this._otherFaction.NotAttackableByPlayerUntilTime.IsPast)
        this._otherFaction.NotAttackableByPlayerUntilTime = CampaignTime.Now;
      this._otherFaction.NotAttackableByPlayerUntilTime += this._duration;
    }

    public override int GetUnitValueForFaction(IFaction faction)
    {
      int unitValueForFaction = 0;
      float militaryValueOfParty = Campaign.Current.Models.ValuationModel.GetMilitaryValueOfParty(this.OriginalParty.MobileParty);
      if (faction.MapFaction == this._otherFaction.MapFaction && faction.MapFaction.IsAtWarWith(this.OriginalParty.MapFaction))
        unitValueForFaction = (int) ((double) militaryValueOfParty * 0.10000000149011612);
      else if (faction.MapFaction == this.OriginalParty.MapFaction)
        unitValueForFaction = -(int) ((double) militaryValueOfParty * 0.10000000149011612);
      return unitValueForFaction;
    }

    public override ImageIdentifier GetVisualIdentifier() => (ImageIdentifier) null;
  }
}
