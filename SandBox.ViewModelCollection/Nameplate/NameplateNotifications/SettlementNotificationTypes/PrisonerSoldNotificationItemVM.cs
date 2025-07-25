// Decompiled with JetBrains decompiler
// Type: SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes.PrisonerSoldNotificationItemVM
// Assembly: SandBox.ViewModelCollection, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: B29E7B5A-62E2-4CD7-97EA-BFA26F4E9802
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.ViewModelCollection.dll

using Helpers;
using System;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.Core;

#nullable disable
namespace SandBox.ViewModelCollection.Nameplate.NameplateNotifications.SettlementNotificationTypes
{
  public class PrisonerSoldNotificationItemVM : SettlementNotificationItemBaseVM
  {
    private int _prisonersAmount;

    public MobileParty Party { get; private set; }

    public PrisonerSoldNotificationItemVM(
      Action<SettlementNotificationItemBaseVM> onRemove,
      MobileParty party,
      TroopRoster prisoners,
      int createdTick)
      : base(onRemove, createdTick)
    {
      this._prisonersAmount = prisoners.TotalManCount;
      this.Text = SandBoxUIHelper.GetPrisonersSoldNotificationText(this._prisonersAmount);
      this.Party = party;
      this.CharacterName = party.LeaderHero != null ? party.LeaderHero.Name.ToString() : party.Name.ToString();
      this.CharacterVisual = new ImageIdentifierVM(SandBoxUIHelper.GetCharacterCode(PartyBaseHelper.GetVisualPartyLeader(party.Party)));
      this.RelationType = 0;
      this.CreatedTick = createdTick;
      if (party.LeaderHero == null)
        return;
      this.RelationType = party.LeaderHero.Clan.IsAtWarWith((IFaction) Hero.MainHero.Clan) ? -1 : 1;
    }

    public void AddNewPrisoners(TroopRoster newPrisoners)
    {
      this._prisonersAmount += newPrisoners.Count;
      this.Text = SandBoxUIHelper.GetPrisonersSoldNotificationText(this._prisonersAmount);
    }
  }
}
