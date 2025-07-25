// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.Barterables.DeclareWarBarterable
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem.Barterables
{
  public class DeclareWarBarterable : Barterable
  {
    public override string StringID => "declare_war_barterable";

    public IFaction DeclaringFaction { get; private set; }

    public IFaction OtherFaction { get; private set; }

    public override TextObject Name
    {
      get
      {
        TextObject name = new TextObject("{=GZwNgIon}Declare war against {OTHER_FACTION}");
        name.SetTextVariable("OTHER_FACTION", this.OtherFaction.Name);
        return name;
      }
    }

    public DeclareWarBarterable(IFaction declaringFaction, IFaction otherFaction)
      : base(declaringFaction.Leader, (PartyBase) null)
    {
      this.DeclaringFaction = declaringFaction;
      this.OtherFaction = otherFaction;
    }

    public override void Apply()
    {
      DeclareWarAction.ApplyByDefault(this.OriginalOwner.MapFaction, this.OtherFaction.MapFaction);
    }

    public override int GetUnitValueForFaction(IFaction faction)
    {
      int unitValueForFaction = 0;
      Clan evaluatingFaction = faction is Clan ? (Clan) faction : ((Kingdom) faction).RulingClan;
      TextObject reason;
      if (faction.MapFaction == this.OriginalOwner.MapFaction)
        unitValueForFaction = (int) Campaign.Current.Models.DiplomacyModel.GetScoreOfDeclaringWar(this.OriginalOwner.MapFaction, this.OtherFaction.MapFaction, (IFaction) evaluatingFaction, out reason);
      else if (faction.MapFaction == this.OtherFaction.MapFaction)
        unitValueForFaction = (int) Campaign.Current.Models.DiplomacyModel.GetScoreOfDeclaringWar(this.OtherFaction.MapFaction, this.OriginalOwner.MapFaction, (IFaction) evaluatingFaction, out reason);
      return unitValueForFaction;
    }

    public override ImageIdentifier GetVisualIdentifier() => (ImageIdentifier) null;
  }
}
