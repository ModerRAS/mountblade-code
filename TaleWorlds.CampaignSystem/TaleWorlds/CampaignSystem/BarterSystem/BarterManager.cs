// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.BarterSystem.BarterManager
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using Helpers;
using System;
using System.Collections.Generic;
using TaleWorlds.CampaignSystem.Actions;
using TaleWorlds.CampaignSystem.BarterSystem.Barterables;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.SaveSystem;

#nullable disable
namespace TaleWorlds.CampaignSystem.BarterSystem
{
  public class BarterManager
  {
    public BarterManager.BarterCloseEventDelegate Closed;
    public BarterManager.BarterBeginEventDelegate BarterBegin;
    [SaveableField(2)]
    private readonly Dictionary<Hero, CampaignTime> _barteredHeroes;
    private float _overpayAmount;

    public static BarterManager Instance => Campaign.Current.BarterManager;

    [SaveableProperty(1)]
    public bool LastBarterIsAccepted { get; internal set; }

    public BarterManager() => this._barteredHeroes = new Dictionary<Hero, CampaignTime>();

    public void BeginPlayerBarter(BarterData args)
    {
      if (this.BarterBegin != null)
        this.BarterBegin(args);
      CampaignMission.Current?.SetMissionMode(MissionMode.Barter, false);
    }

    private void AddBaseBarterables(BarterData args, IEnumerable<Barterable> defaultBarterables)
    {
      if (defaultBarterables == null)
        return;
      bool flag = false;
      foreach (Barterable defaultBarterable in defaultBarterables)
      {
        if (!flag)
        {
          args.AddBarterGroup((BarterGroup) new DefaultsBarterGroup());
          flag = true;
        }
        defaultBarterable.SetIsOffered(true);
        args.AddBarterable<OtherBarterGroup>(defaultBarterable, true);
        defaultBarterable.SetIsOffered(true);
      }
    }

    public void StartBarterOffer(
      Hero offerer,
      Hero other,
      PartyBase offererParty,
      PartyBase otherParty,
      Hero beneficiaryOfOtherHero = null,
      BarterManager.BarterContextInitializer InitContext = null,
      int persuasionCostReduction = 0,
      bool isAIBarter = false,
      IEnumerable<Barterable> defaultBarterables = null)
    {
      this.LastBarterIsAccepted = false;
      if (offerer == Hero.MainHero && other != null && InitContext == null)
      {
        if (!this.CanPlayerBarterWithHero(other))
        {
          Debug.FailedAssert("Barter with the hero is on cooldown.", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem\\BarterSystem\\BarterManager.cs", nameof (StartBarterOffer), 83);
          return;
        }
        this.ClearHeroCooldowns();
      }
      BarterData args = new BarterData(offerer, beneficiaryOfOtherHero ?? other, offererParty, otherParty, InitContext, persuasionCostReduction);
      this.AddBaseBarterables(args, defaultBarterables);
      CampaignEventDispatcher.Instance.OnBarterablesRequested(args);
      if (isAIBarter)
        return;
      Campaign.Current.BarterManager.BeginPlayerBarter(args);
    }

    public void ExecuteAiBarter(
      IFaction faction1,
      IFaction faction2,
      Hero faction1Hero,
      Hero faction2Hero,
      Barterable barterable)
    {
      this.ExecuteAiBarter(faction1, faction2, faction1Hero, faction2Hero, (IEnumerable<Barterable>) new Barterable[1]
      {
        barterable
      });
    }

    public void ExecuteAiBarter(
      IFaction faction1,
      IFaction faction2,
      Hero faction1Hero,
      Hero faction2Hero,
      IEnumerable<Barterable> baseBarterables)
    {
      BarterData barterData = new BarterData(faction1.Leader, faction2.Leader, (PartyBase) null, (PartyBase) null, isAiBarter: true);
      barterData.AddBarterGroup((BarterGroup) new DefaultsBarterGroup());
      foreach (Barterable baseBarterable in baseBarterables)
      {
        baseBarterable.SetIsOffered(true);
        barterData.AddBarterable<DefaultsBarterGroup>(baseBarterable, true);
      }
      CampaignEventDispatcher.Instance.OnBarterablesRequested(barterData);
      Campaign.Current.BarterManager.ExecuteAIBarter(barterData, faction1, faction2, faction1Hero, faction2Hero);
    }

    public void ExecuteAIBarter(
      BarterData barterData,
      IFaction faction1,
      IFaction faction2,
      Hero faction1Hero,
      Hero faction2Hero)
    {
      this.MakeBalanced(barterData, faction1, faction2, faction2Hero, 1f);
      this.MakeBalanced(barterData, faction2, faction1, faction1Hero, 1f);
      double offerValueForFaction1 = (double) this.GetOfferValueForFaction(barterData, faction1);
      float offerValueForFaction2 = this.GetOfferValueForFaction(barterData, faction2);
      if (offerValueForFaction1 < 0.0 || (double) offerValueForFaction2 < 0.0)
        return;
      this.ApplyBarterOffer(barterData.OffererHero, barterData.OtherHero, barterData.GetOfferedBarterables());
    }

    private void MakeBalanced(
      BarterData args,
      IFaction faction1,
      IFaction faction2,
      Hero faction2Hero,
      float fulfillRatio)
    {
      foreach ((Barterable barterable, int count) in BarterHelper.GetAutoBalanceBarterablesAdd(args, faction1, faction2, faction2Hero, fulfillRatio))
      {
        if (!barterable.IsOffered)
        {
          barterable.SetIsOffered(true);
          barterable.CurrentAmount = 0;
        }
        barterable.CurrentAmount += count;
      }
    }

    public void Close()
    {
      if (CampaignMission.Current != null)
        CampaignMission.Current.SetMissionMode(MissionMode.Conversation, false);
      if (this.Closed == null)
        return;
      this.Closed();
    }

    public bool IsOfferAcceptable(BarterData args, Hero hero, PartyBase party)
    {
      return (double) this.GetOfferValue(hero, party, args.OffererParty, (IEnumerable<Barterable>) args.GetOfferedBarterables()) > -0.0099999997764825821;
    }

    public float GetOfferValueForFaction(BarterData barterData, IFaction faction)
    {
      int offerValueForFaction = 0;
      foreach (Barterable offeredBarterable in barterData.GetOfferedBarterables())
        offerValueForFaction += offeredBarterable.GetValueForFaction(faction);
      return (float) offerValueForFaction;
    }

    public float GetOfferValue(
      Hero selfHero,
      PartyBase selfParty,
      PartyBase offererParty,
      IEnumerable<Barterable> offeredBarters)
    {
      float offerValue = 0.0f;
      IFaction faction = selfHero?.Clan == null ? selfParty.MapFaction : (IFaction) selfHero.Clan;
      foreach (Barterable offeredBarter in offeredBarters)
        offerValue += (float) offeredBarter.GetValueForFaction(faction);
      this._overpayAmount = (double) offerValue > 0.0 ? offerValue : 0.0f;
      return offerValue;
    }

    public void ApplyAndFinalizePlayerBarter(
      Hero offererHero,
      Hero otherHero,
      BarterData barterData)
    {
      this.LastBarterIsAccepted = true;
      this.ApplyBarterOffer(offererHero, otherHero, barterData.GetOfferedBarterables());
      if (otherHero == null)
        return;
      this.HandleHeroCooldown(otherHero);
    }

    public void CancelAndFinalizePlayerBarter(
      Hero offererHero,
      Hero otherHero,
      BarterData barterData)
    {
      this.CancelBarter(offererHero, otherHero, barterData.GetOfferedBarterables());
    }

    private void ApplyBarterOffer(Hero offererHero, Hero otherHero, List<Barterable> barters)
    {
      foreach (Barterable barter in barters)
        barter.Apply();
      CampaignEventDispatcher.Instance.OnBarterAccepted(offererHero, otherHero, barters);
      if (offererHero != Hero.MainHero)
        return;
      if ((double) this._overpayAmount > 0.0 && otherHero != null)
        this.ApplyOverpayBonus(otherHero);
      this.Close();
      if (Campaign.Current.ConversationManager.IsConversationInProgress)
        Campaign.Current.ConversationManager.ContinueConversation();
      MBInformationManager.AddQuickInformation(GameTexts.FindText("str_offer_accepted"));
    }

    private void CancelBarter(Hero offererHero, Hero otherHero, List<Barterable> offeredBarters)
    {
      this.Close();
      MBInformationManager.AddQuickInformation(GameTexts.FindText("str_offer_rejected"));
      CampaignEventDispatcher.Instance.OnBarterCanceled(offererHero, otherHero, offeredBarters);
      Campaign.Current.ConversationManager.ContinueConversation();
    }

    private void ApplyOverpayBonus(Hero otherHero)
    {
      if (otherHero.MapFaction.IsAtWarWith(Hero.MainHero.MapFaction))
        return;
      int relationIncreaseCosts = Campaign.Current.Models.BarterModel.CalculateOverpayRelationIncreaseCosts(otherHero, this._overpayAmount);
      if (relationIncreaseCosts <= 0)
        return;
      ChangeRelationAction.ApplyRelationChangeBetweenHeroes(Hero.MainHero, otherHero, relationIncreaseCosts);
    }

    public bool CanPlayerBarterWithHero(Hero hero)
    {
      CampaignTime campaignTime;
      return !this._barteredHeroes.TryGetValue(hero, out campaignTime) || campaignTime.IsPast;
    }

    private void HandleHeroCooldown(Hero hero)
    {
      CampaignTime campaignTime = CampaignTime.Now + CampaignTime.Days((float) Campaign.Current.Models.BarterModel.BarterCooldownWithHeroInDays);
      if (!this._barteredHeroes.ContainsKey(hero))
        this._barteredHeroes.Add(hero, campaignTime);
      else
        this._barteredHeroes[hero] = campaignTime;
    }

    private void ClearHeroCooldowns()
    {
      foreach (KeyValuePair<Hero, CampaignTime> keyValuePair in new Dictionary<Hero, CampaignTime>((IDictionary<Hero, CampaignTime>) this._barteredHeroes))
      {
        if (keyValuePair.Value.IsPast)
          this._barteredHeroes.Remove(keyValuePair.Key);
      }
    }

    public bool InitializeMarriageBarterContext(Barterable barterable, BarterData args, object obj)
    {
      Hero hero1 = (Hero) null;
      Hero hero2 = (Hero) null;
      if (obj != null && obj is Tuple<Hero, Hero> tuple)
      {
        hero1 = tuple.Item1;
        hero2 = tuple.Item2;
      }
      return barterable is MarriageBarterable marriageBarterable && hero1 != null && hero2 != null && marriageBarterable.ProposingHero == hero2 && marriageBarterable.HeroBeingProposedTo == hero1;
    }

    public bool InitializeJoinFactionBarterContext(
      Barterable barterable,
      BarterData args,
      object obj)
    {
      return barterable.GetType() == typeof (JoinKingdomAsClanBarterable) && barterable.OriginalOwner == Hero.OneToOneConversationHero;
    }

    public bool InitializeMakePeaceBarterContext(
      Barterable barterable,
      BarterData args,
      object obj)
    {
      return barterable.GetType() == typeof (PeaceBarterable) && barterable.OriginalOwner == args.OtherHero;
    }

    public bool InitializeSafePassageBarterContext(
      Barterable barterable,
      BarterData args,
      object obj)
    {
      return barterable.GetType() == typeof (SafePassageBarterable) && barterable.OriginalParty == MobileParty.ConversationParty?.Party;
    }

    internal static void AutoGeneratedStaticCollectObjectsBarterManager(
      object o,
      List<object> collectedObjects)
    {
      ((BarterManager) o).AutoGeneratedInstanceCollectObjects(collectedObjects);
    }

    protected virtual void AutoGeneratedInstanceCollectObjects(List<object> collectedObjects)
    {
      collectedObjects.Add((object) this._barteredHeroes);
    }

    internal static object AutoGeneratedGetMemberValueLastBarterIsAccepted(object o)
    {
      return (object) ((BarterManager) o).LastBarterIsAccepted;
    }

    internal static object AutoGeneratedGetMemberValue_barteredHeroes(object o)
    {
      return (object) ((BarterManager) o)._barteredHeroes;
    }

    public delegate bool BarterContextInitializer(
      Barterable barterable,
      BarterData args,
      object obj = null);

    public delegate void BarterCloseEventDelegate();

    public delegate void BarterBeginEventDelegate(BarterData args);
  }
}
