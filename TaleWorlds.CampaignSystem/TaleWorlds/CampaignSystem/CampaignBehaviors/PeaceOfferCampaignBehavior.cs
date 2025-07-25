// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.CampaignBehaviors.PeaceOfferCampaignBehavior
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.Election;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.CampaignBehaviors
{
  public class PeaceOfferCampaignBehavior : CampaignBehaviorBase
  {
    private static TextObject PeaceOfferDefaultPanelDescriptionText = new TextObject("{=IB1xsVEr}A courier has arrived from the {MAP_FACTION_NAME}. They offer you a white peace. Your vassals have left the decision with you.");
    private static TextObject PeaceOfferTributePaidPanelDescriptionText = new TextObject("{=JJQ0Hp4m}A courier has arrived from the {MAP_FACTION_NAME}. The {MAP_FACTION_NAME} will pay {GOLD_AMOUNT} {GOLD_ICON} in tribute each day to end the war between your realms. Your vassals have left the decision with you.");
    private static TextObject PeaceOfferTributeWantedPanelDescriptionText = new TextObject("{=Nd0Vhkxn}A courier has arrived from the {MAP_FACTION_NAME}. They offer you peace if you agree to pay a {GOLD_AMOUNT} {GOLD_ICON} daily tribute. Your vassals have left the decision with you.");
    private static TextObject PeaceOfferDefaultPanelPlayerIsVassalDescriptionText = new TextObject("{=gNf0ALKw}A courier has arrived from the {MAP_FACTION_NAME}. They offer you a white peace. Your kingdom will vote whether to accept the offer.");
    private static TextObject PeaceOfferTributePaidPanelPlayerIsVassalDescriptionText = new TextObject("{=SR9FC5jH}A courier has arrived from the {MAP_FACTION_NAME} bearing a peace offer. The {MAP_FACTION_NAME} will pay {GOLD_AMOUNT} {GOLD_ICON} in tribute each day to end the war between your realms. Your kingdom will vote whether to accept the offer.");
    private static TextObject PeaceOfferTributeWantedPanelPlayerIsVassalDescriptionText = new TextObject("{=sbFboHmV}A courier has arrived from the {MAP_FACTION_NAME}. They offer you peace if you agree to pay a {GOLD_AMOUNT} {GOLD_ICON} daily tribute. Your kingdom will vote whether to accept the offer.");
    private IFaction _opponentFaction;
    private int _currentPeaceOfferTributeAmount;
    private int _influenceCostOfDecline;
    private int _hourCounter;

    private static TextObject PeacePanelTitleText => new TextObject("{=ho5EndaV}Decision");

    private static TextObject PeacePanelOkText => new TextObject("{=oHaWR73d}Ok");

    private static TextObject PeacePanelAffirmativeText => new TextObject("{=Y94H6XnK}Accept");

    private static TextObject PeacePanelNegativeText => new TextObject("{=cOgmdp9e}Decline");

    public override void RegisterEvents()
    {
      CampaignEvents.OnPeaceOfferedToPlayerEvent.AddNonSerializedListener((object) this, new Action<IFaction, int>(this.OnPeaceOffered));
      CampaignEvents.MakePeace.AddNonSerializedListener((object) this, new Action<IFaction, IFaction, MakePeaceAction.MakePeaceDetail>(this.OnMakePeace));
      CampaignEvents.HourlyTickEvent.AddNonSerializedListener((object) this, new Action(this.HourlyTick));
      CampaignEvents.OnPeaceOfferCancelledEvent.AddNonSerializedListener((object) this, new Action<IFaction>(this.OnPeaceOfferCancelled));
    }

    public override void SyncData(IDataStore dataStore)
    {
      dataStore.SyncData<int>("_currentPeaceOfferTributeAmount", ref this._currentPeaceOfferTributeAmount);
      dataStore.SyncData<IFaction>("_opponentFaction", ref this._opponentFaction);
    }

    public void SetCurrentTributeAmount(int tributeAmount)
    {
      this._currentPeaceOfferTributeAmount = tributeAmount;
    }

    private void OnPeaceOffered(IFaction opponentFaction, int tributeAmount)
    {
      if (this._opponentFaction != null)
        return;
      this._opponentFaction = opponentFaction;
      this._currentPeaceOfferTributeAmount = tributeAmount;
      TextObject textObject = tributeAmount > 0 ? (Hero.MainHero.MapFaction.Leader == Hero.MainHero ? PeaceOfferCampaignBehavior.PeaceOfferTributePaidPanelDescriptionText : PeaceOfferCampaignBehavior.PeaceOfferTributePaidPanelPlayerIsVassalDescriptionText) : (tributeAmount < 0 ? (Hero.MainHero.MapFaction.Leader == Hero.MainHero ? PeaceOfferCampaignBehavior.PeaceOfferTributeWantedPanelDescriptionText : PeaceOfferCampaignBehavior.PeaceOfferTributeWantedPanelPlayerIsVassalDescriptionText) : (Hero.MainHero.MapFaction.Leader == Hero.MainHero ? PeaceOfferCampaignBehavior.PeaceOfferDefaultPanelDescriptionText : PeaceOfferCampaignBehavior.PeaceOfferDefaultPanelPlayerIsVassalDescriptionText));
      textObject.SetTextVariable("MAP_FACTION_NAME", opponentFaction.InformalName);
      textObject.SetTextVariable("GOLD_AMOUNT", MathF.Abs(this._currentPeaceOfferTributeAmount));
      textObject.SetTextVariable("GOLD_ICON", "{=!}<img src=\"General\\Icons\\Coin@2x\" extend=\"8\">");
      TextObject panelNegativeText = PeaceOfferCampaignBehavior.PeacePanelNegativeText;
      this._influenceCostOfDecline = 0;
      Campaign.Current.TimeControlMode = CampaignTimeControlMode.Stop;
      if (Hero.MainHero.MapFaction.Leader == Hero.MainHero)
      {
        InformationManager.ShowInquiry(new InquiryData(PeaceOfferCampaignBehavior.PeacePanelTitleText.ToString(), textObject.ToString(), true, (double) this._influenceCostOfDecline <= 0.10000000149011612 || (double) Hero.MainHero.Clan.Influence >= (double) this._influenceCostOfDecline, PeaceOfferCampaignBehavior.PeacePanelAffirmativeText.ToString(), panelNegativeText.ToString(), new Action(this.AcceptPeaceOffer), new Action(this.DeclinePeaceOffer)), true);
        this._hourCounter = 0;
      }
      else
      {
        InformationManager.ShowInquiry(new InquiryData(PeaceOfferCampaignBehavior.PeacePanelTitleText.ToString(), textObject.ToString(), false, true, PeaceOfferCampaignBehavior.PeacePanelOkText.ToString(), PeaceOfferCampaignBehavior.PeacePanelOkText.ToString(), new Action(this.OkPeaceOffer), new Action(this.OkPeaceOffer)), true);
        this._hourCounter = 0;
      }
    }

    private void OnPeaceOfferCancelled(IFaction opponentFaction)
    {
      if (Hero.MainHero.MapFaction.Leader == Hero.MainHero)
        return;
      this._opponentFaction = opponentFaction;
      this.OkPeaceOffer();
    }

    public void HourlyTick()
    {
      if (this._opponentFaction == null)
        return;
      ++this._hourCounter;
      if (this._hourCounter != 24)
        return;
      if (Hero.MainHero.MapFaction.Leader == Hero.MainHero)
        CampaignEventDispatcher.Instance.OnPeaceOfferCancelled(this._opponentFaction);
      else
        CampaignEventDispatcher.Instance.OnPeaceOfferCancelled(this._opponentFaction);
    }

    private void OnMakePeace(
      IFaction side1Faction,
      IFaction side2Faction,
      MakePeaceAction.MakePeaceDetail detail)
    {
      if ((side1Faction != Hero.MainHero.MapFaction || side2Faction != this._opponentFaction) && (side2Faction != Hero.MainHero.MapFaction || side1Faction != this._opponentFaction))
        return;
      this.DeclinePeaceOffer();
    }

    private void OkPeaceOffer()
    {
      if (Clan.PlayerClan.IsUnderMercenaryService)
      {
        this.AcceptPeaceOffer();
      }
      else
      {
        ((Kingdom) Hero.MainHero.MapFaction).AddDecision((KingdomDecision) new MakePeaceKingdomDecision(Hero.MainHero.MapFaction.Leader.Clan, this._opponentFaction, -this._currentPeaceOfferTributeAmount));
        this._opponentFaction = (IFaction) null;
      }
    }

    private void AcceptPeaceOffer()
    {
      MakePeaceAction.Apply(this._opponentFaction, Hero.MainHero.MapFaction, this._currentPeaceOfferTributeAmount);
      this._opponentFaction = (IFaction) null;
    }

    private void DeclinePeaceOffer()
    {
      CampaignEventDispatcher.Instance.OnPeaceOfferCancelled(this._opponentFaction);
      this._opponentFaction = (IFaction) null;
      ChangeClanInfluenceAction.Apply(Clan.PlayerClan, (float) -this._influenceCostOfDecline);
    }
  }
}
