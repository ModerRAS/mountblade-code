// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.Issues.DefaultIssueEffects
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using TaleWorlds.Core;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem.Issues
{
  public class DefaultIssueEffects
  {
    private IssueEffect _issueEffectSettlementGarrison;
    private IssueEffect _issueEffectSettlementLoyalty;
    private IssueEffect _issueEffectSettlementSecurity;
    private IssueEffect _issueEffectSettlementMilitia;
    private IssueEffect _issueEffectSettlementProsperity;
    private IssueEffect _issueEffectVillageHearth;
    private IssueEffect _issueEffectSettlementFood;
    private IssueEffect _issueEffectSettlementTax;
    private IssueEffect _issueEffectHalfVillageProduction;
    private IssueEffect _issueEffectIssueOwnerPower;
    private IssueEffect _clanInfluence;

    private static DefaultIssueEffects Instance => Campaign.Current.DefaultIssueEffects;

    public static IssueEffect SettlementLoyalty
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementLoyalty;
    }

    public static IssueEffect SettlementSecurity
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementSecurity;
    }

    public static IssueEffect SettlementMilitia
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementMilitia;
    }

    public static IssueEffect SettlementProsperity
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementProsperity;
    }

    public static IssueEffect VillageHearth
    {
      get => DefaultIssueEffects.Instance._issueEffectVillageHearth;
    }

    public static IssueEffect SettlementFood
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementFood;
    }

    public static IssueEffect SettlementTax
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementTax;
    }

    public static IssueEffect SettlementGarrison
    {
      get => DefaultIssueEffects.Instance._issueEffectSettlementGarrison;
    }

    public static IssueEffect HalfVillageProduction
    {
      get => DefaultIssueEffects.Instance._issueEffectHalfVillageProduction;
    }

    public static IssueEffect IssueOwnerPower
    {
      get => DefaultIssueEffects.Instance._issueEffectIssueOwnerPower;
    }

    public static IssueEffect ClanInfluence => DefaultIssueEffects.Instance._clanInfluence;

    public DefaultIssueEffects() => this.RegisterAll();

    private void RegisterAll()
    {
      this._issueEffectSettlementLoyalty = this.Create("issue_effect_settlement_loyalty");
      this._issueEffectSettlementSecurity = this.Create("issue_effect_settlement_security");
      this._issueEffectSettlementMilitia = this.Create("issue_effect_settlement_militia");
      this._issueEffectSettlementProsperity = this.Create("issue_effect_settlement_prosperity");
      this._issueEffectVillageHearth = this.Create("issue_effect_village_hearth");
      this._issueEffectSettlementFood = this.Create("issue_effect_settlement_food");
      this._issueEffectSettlementTax = this.Create("issue_effect_settlement_tax");
      this._issueEffectSettlementGarrison = this.Create("issue_effect_settlement_garrison");
      this._issueEffectHalfVillageProduction = this.Create("issue_effect_half_village_production");
      this._issueEffectIssueOwnerPower = this.Create("issue_effect_issue_owner_power");
      this._clanInfluence = this.Create("issue_effect_clan_influence");
      this.InitializeAll();
    }

    private IssueEffect Create(string stringId)
    {
      return Game.Current.ObjectManager.RegisterPresumedObject<IssueEffect>(new IssueEffect(stringId));
    }

    private void InitializeAll()
    {
      this._issueEffectSettlementLoyalty.Initialize(new TextObject("{=YO0x7ZAo}Loyalty"), new TextObject("{=xAWvm25T}Effects settlement's loyalty."));
      this._issueEffectSettlementSecurity.Initialize(new TextObject("{=MqCH7R4A}Security"), new TextObject("{=h117Qj3E}Effects settlement's security."));
      this._issueEffectSettlementMilitia.Initialize(new TextObject("{=gsVtO9A7}Militia"), new TextObject("{=dTmPV82D}Effects settlement's militia."));
      this._issueEffectSettlementProsperity.Initialize(new TextObject("{=IagYTD5O}Prosperity"), new TextObject("{=ETye0JMY}Effects settlement's prosperity."));
      this._issueEffectVillageHearth.Initialize(new TextObject("{=f5X5uU0m}Village Hearth"), new TextObject("{=7TbVhbT9}Effects village's hearth."));
      this._issueEffectSettlementFood.Initialize(new TextObject("{=qSi4DlT4}Food"), new TextObject("{=onDsUkUl}Effects settlement's food."));
      this._issueEffectSettlementTax.Initialize(new TextObject("{=2awf1tei}Tax"), new TextObject("{=q2Ovtr1s}Effects settlement's tax."));
      this._issueEffectSettlementGarrison.Initialize(new TextObject("{=jlgjLDo7}Garrison"), new TextObject("{=WJ7SnBgN}Effects settlement's garrison."));
      this._issueEffectHalfVillageProduction.Initialize(new TextObject("{=bGyrPe8c}Production"), new TextObject("{=arbaXvQf}Effects village's production."));
      this._issueEffectIssueOwnerPower.Initialize(new TextObject("{=gGXelWQX}Issue owner power"), new TextObject("{=tjudHtDB}Effects the power of issue owner in the settlement."));
      this._clanInfluence.Initialize(new TextObject("{=KN6khbSl}Clan Influence"), new TextObject("{=y2aLOwOs}Effects the influence of clan."));
    }
  }
}
