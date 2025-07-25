using System;
using System.Collections.Generic;
using Helpers;
using TaleWorlds.CampaignSystem.Conversation;
using TaleWorlds.CampaignSystem.Conversation.Persuasion;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.Encyclopedia;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Conversation
{
	// Token: 0x020000FA RID: 250
	public class MissionConversationVM : ViewModel
	{
		// Token: 0x170007F3 RID: 2035
		// (get) Token: 0x06001781 RID: 6017 RVA: 0x000571FD File Offset: 0x000553FD
		// (set) Token: 0x06001782 RID: 6018 RVA: 0x00057205 File Offset: 0x00055405
		public bool SelectedAnOptionOrLinkThisFrame { get; set; }

		// Token: 0x06001783 RID: 6019 RVA: 0x00057210 File Offset: 0x00055410
		public MissionConversationVM(Func<string> getContinueInputText, bool isLinksDisabled = false)
		{
			this.AnswerList = new MBBindingList<ConversationItemVM>();
			this.AttackerParties = new MBBindingList<ConversationAggressivePartyItemVM>();
			this.DefenderParties = new MBBindingList<ConversationAggressivePartyItemVM>();
			this._conversationManager = Campaign.Current.ConversationManager;
			this._getContinueInputText = getContinueInputText;
			this._isLinksDisabled = isLinksDisabled;
			CampaignEvents.PersuasionProgressCommittedEvent.AddNonSerializedListener(this, new Action<Tuple<PersuasionOptionArgs, PersuasionOptionResult>>(this.OnPersuasionProgress));
			this.Persuasion = new PersuasionVM(this._conversationManager);
			this.IsAggressive = (Campaign.Current.CurrentConversationContext == ConversationContext.PartyEncounter && this._conversationManager.ConversationParty != null && FactionManager.IsAtWarAgainstFaction(this._conversationManager.ConversationParty.MapFaction, Hero.MainHero.MapFaction));
			if (this.IsAggressive)
			{
				List<MobileParty> list = new List<MobileParty>();
				List<MobileParty> list2 = new List<MobileParty>();
				MobileParty conversationParty = this._conversationManager.ConversationParty;
				MobileParty mainParty = MobileParty.MainParty;
				if (PlayerEncounter.PlayerIsAttacker)
				{
					list2.Add(mainParty);
					list.Add(conversationParty);
					PlayerEncounter.Current.FindAllNpcPartiesWhoWillJoinEvent(ref list2, ref list);
				}
				else
				{
					list2.Add(conversationParty);
					list.Add(mainParty);
					PlayerEncounter.Current.FindAllNpcPartiesWhoWillJoinEvent(ref list, ref list2);
				}
				this.AttackerLeader = new ConversationAggressivePartyItemVM(PlayerEncounter.PlayerIsAttacker ? mainParty : conversationParty, null);
				this.DefenderLeader = new ConversationAggressivePartyItemVM(PlayerEncounter.PlayerIsAttacker ? conversationParty : mainParty, null);
				double num = 0.0;
				double num2 = 0.0;
				num += (double)this.DefenderLeader.Party.Party.TotalStrength;
				num2 += (double)this.AttackerLeader.Party.Party.TotalStrength;
				foreach (MobileParty mobileParty in list)
				{
					if (mobileParty != conversationParty && mobileParty != mainParty)
					{
						num += (double)mobileParty.Party.TotalStrength;
						this.DefenderParties.Add(new ConversationAggressivePartyItemVM(mobileParty, null));
					}
				}
				foreach (MobileParty mobileParty2 in list2)
				{
					if (mobileParty2 != conversationParty && mobileParty2 != mainParty)
					{
						num2 += (double)mobileParty2.Party.TotalStrength;
						this.AttackerParties.Add(new ConversationAggressivePartyItemVM(mobileParty2, null));
					}
				}
				string defenderColor;
				if (this.DefenderLeader.Party.MapFaction != null && this.DefenderLeader.Party.MapFaction is Kingdom)
				{
					defenderColor = Color.FromUint(((Kingdom)this.DefenderLeader.Party.MapFaction).PrimaryBannerColor).ToString();
				}
				else
				{
					defenderColor = Color.FromUint(this.DefenderLeader.Party.MapFaction.Banner.GetPrimaryColor()).ToString();
				}
				string attackerColor;
				if (this.AttackerLeader.Party.MapFaction != null && this.AttackerLeader.Party.MapFaction is Kingdom)
				{
					attackerColor = Color.FromUint(((Kingdom)this.AttackerLeader.Party.MapFaction).PrimaryBannerColor).ToString();
				}
				else
				{
					attackerColor = Color.FromUint(this.AttackerLeader.Party.MapFaction.Banner.GetPrimaryColor()).ToString();
				}
				this.PowerComparer = new PowerLevelComparer(num, num2);
				this.PowerComparer.SetColors(defenderColor, attackerColor);
			}
			else
			{
				this.DefenderLeader = new ConversationAggressivePartyItemVM(null, null);
				this.AttackerLeader = new ConversationAggressivePartyItemVM(null, null);
			}
			if (this._conversationManager.SpeakerAgent != null && (CharacterObject)this._conversationManager.SpeakerAgent.Character != null && ((CharacterObject)this._conversationManager.SpeakerAgent.Character).IsHero && this._conversationManager.SpeakerAgent.Character != CharacterObject.PlayerCharacter)
			{
				Hero heroObject = ((CharacterObject)this._conversationManager.SpeakerAgent.Character).HeroObject;
				this.Relation = (int)heroObject.GetRelationWithPlayer();
			}
			this.ExecuteSetCurrentAnswer(null);
			this.RefreshValues();
		}

		// Token: 0x06001784 RID: 6020 RVA: 0x00057660 File Offset: 0x00055860
		private void OnPersuasionProgress(Tuple<PersuasionOptionArgs, PersuasionOptionResult> result)
		{
			PersuasionVM persuasion = this.Persuasion;
			if (persuasion != null)
			{
				persuasion.OnPersuasionProgress(result);
			}
			this.AnswerList.ApplyActionOnAllItems(delegate(ConversationItemVM a)
			{
				a.OnPersuasionProgress(result);
			});
		}

		// Token: 0x06001785 RID: 6021 RVA: 0x000576A8 File Offset: 0x000558A8
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.ContinueText = this._getContinueInputText();
			this.MoreOptionText = GameTexts.FindText("str_more_brackets", null).ToString();
			this.PersuasionText = GameTexts.FindText("str_persuasion", null).ToString();
			this.RelationHint = new HintViewModel(GameTexts.FindText("str_tooltip_label_relation", null), null);
			this.GoldHint = new HintViewModel(new TextObject("{=o5G8A8ZH}Your Denars", null), null);
			this._answerList.ApplyActionOnAllItems(delegate(ConversationItemVM x)
			{
				x.RefreshValues();
			});
			this._defenderParties.ApplyActionOnAllItems(delegate(ConversationAggressivePartyItemVM x)
			{
				x.RefreshValues();
			});
			this._attackerParties.ApplyActionOnAllItems(delegate(ConversationAggressivePartyItemVM x)
			{
				x.RefreshValues();
			});
			this._defenderLeader.RefreshValues();
			this._attackerLeader.RefreshValues();
			this._currentSelectedAnswer.RefreshValues();
		}

		// Token: 0x06001786 RID: 6022 RVA: 0x000577C5 File Offset: 0x000559C5
		public void OnConversationContinue()
		{
			if (ConversationManager.GetPersuasionIsActive() && (!ConversationManager.GetPersuasionIsActive() || this.IsPersuading))
			{
				List<ConversationSentenceOption> curOptions = this._conversationManager.CurOptions;
				if (((curOptions != null) ? curOptions.Count : 0) > 1)
				{
					return;
				}
			}
			this.Refresh();
		}

		// Token: 0x06001787 RID: 6023 RVA: 0x000577FD File Offset: 0x000559FD
		public void ExecuteLink(string link)
		{
			if (!this._isLinksDisabled)
			{
				Campaign.Current.EncyclopediaManager.GoToLink(link);
			}
		}

		// Token: 0x06001788 RID: 6024 RVA: 0x00057818 File Offset: 0x00055A18
		public void ExecuteConversedHeroLink()
		{
			CharacterObject characterObject;
			if (!this._isLinksDisabled && (characterObject = (this._currentDialogCharacter as CharacterObject)) != null)
			{
				EncyclopediaManager encyclopediaManager = Campaign.Current.EncyclopediaManager;
				Hero heroObject = characterObject.HeroObject;
				encyclopediaManager.GoToLink(((heroObject != null) ? heroObject.EncyclopediaLink : null) ?? characterObject.EncyclopediaLink);
				this.SelectedAnOptionOrLinkThisFrame = true;
			}
		}

		// Token: 0x06001789 RID: 6025 RVA: 0x00057870 File Offset: 0x00055A70
		public void Refresh()
		{
			this.ExecuteCloseTooltip();
			this._isProcessingOption = false;
			this.IsLoadingOver = false;
			IReadOnlyList<IAgent> conversationAgents = this._conversationManager.ConversationAgents;
			if (conversationAgents != null && conversationAgents.Count > 0)
			{
				this._currentDialogCharacter = this._conversationManager.SpeakerAgent.Character;
				this.CurrentCharacterNameLbl = this._currentDialogCharacter.Name.ToString();
				this.IsCurrentCharacterValidInEncyclopedia = false;
				if (((CharacterObject)this._currentDialogCharacter).IsHero && this._currentDialogCharacter != CharacterObject.PlayerCharacter)
				{
					this.MinRelation = Campaign.Current.Models.DiplomacyModel.MinRelationLimit;
					this.MaxRelation = Campaign.Current.Models.DiplomacyModel.MaxRelationLimit;
					Hero heroObject = ((CharacterObject)this._currentDialogCharacter).HeroObject;
					if (heroObject.IsLord && !heroObject.IsMinorFactionHero)
					{
						Clan clan = heroObject.Clan;
						if (((clan != null) ? clan.Leader : null) == heroObject)
						{
							Clan clan2 = heroObject.Clan;
							if (((clan2 != null) ? clan2.Kingdom : null) != null)
							{
								string stringId = heroObject.MapFaction.Culture.StringId;
								TextObject textObject;
								if (GameTexts.TryGetText("str_faction_noble_name_with_title", out textObject, stringId))
								{
									if (heroObject.Clan.Kingdom.Leader == heroObject)
									{
										textObject = GameTexts.FindText("str_faction_ruler_name_with_title", stringId);
									}
									StringHelpers.SetCharacterProperties("RULER", (CharacterObject)this._currentDialogCharacter, null, false);
									this.CurrentCharacterNameLbl = textObject.ToString();
								}
							}
						}
					}
					this.IsRelationEnabled = true;
					this.Relation = Hero.MainHero.GetRelation(heroObject);
					GameTexts.SetVariable("NUM", this.Relation.ToString());
					if (this.Relation > 0)
					{
						this.RelationText = "+" + this.Relation;
					}
					else if (this.Relation < 0)
					{
						this.RelationText = "-" + MathF.Abs(this.Relation);
					}
					else
					{
						this.RelationText = this.Relation.ToString();
					}
					if (heroObject.Clan == null)
					{
						this.ConversedHeroBanner = new ImageIdentifierVM(ImageIdentifierType.Null);
						this.IsRelationEnabled = false;
						this.IsBannerEnabled = false;
					}
					else
					{
						this.ConversedHeroBanner = ((heroObject != null) ? new ImageIdentifierVM(heroObject.ClanBanner) : new ImageIdentifierVM(ImageIdentifierType.Null));
						TextObject hintText = (heroObject != null) ? heroObject.Clan.Name : TextObject.Empty;
						this.FactionHint = new HintViewModel(hintText, null);
						this.IsBannerEnabled = true;
					}
					this.IsCurrentCharacterValidInEncyclopedia = Campaign.Current.EncyclopediaManager.GetPageOf(typeof(Hero)).IsValidEncyclopediaItem(heroObject);
				}
				else
				{
					this.ConversedHeroBanner = new ImageIdentifierVM(ImageIdentifierType.Null);
					this.IsRelationEnabled = false;
					this.IsBannerEnabled = false;
					this.IsCurrentCharacterValidInEncyclopedia = Campaign.Current.EncyclopediaManager.GetPageOf(typeof(CharacterObject)).IsValidEncyclopediaItem((CharacterObject)this._conversationManager.SpeakerAgent.Character);
				}
			}
			this.DialogText = this._conversationManager.CurrentSentenceText;
			this.AnswerList.Clear();
			MissionConversationVM._isCurrentlyPlayerSpeaking = (this._currentDialogCharacter == Hero.MainHero.CharacterObject);
			this._conversationManager.GetPlayerSentenceOptions();
			List<ConversationSentenceOption> curOptions = this._conversationManager.CurOptions;
			int num = (curOptions != null) ? curOptions.Count : 0;
			if (num > 0 && !MissionConversationVM._isCurrentlyPlayerSpeaking)
			{
				for (int i = 0; i < num; i++)
				{
					this.AnswerList.Add(new ConversationItemVM(new Action<int>(this.OnSelectOption), new Action(this.OnReadyToContinue), new Action<ConversationItemVM>(this.ExecuteSetCurrentAnswer), i));
				}
			}
			this.GoldText = CampaignUIHelper.GetAbbreviatedValueTextFromValue(Hero.MainHero.Gold);
			this.IsPersuading = ConversationManager.GetPersuasionIsActive();
			if (this.IsPersuading)
			{
				this.CurrentSelectedAnswer = new ConversationItemVM();
			}
			this.IsLoadingOver = true;
			PersuasionVM persuasion = this.Persuasion;
			if (persuasion == null)
			{
				return;
			}
			persuasion.RefreshPersusasion();
		}

		// Token: 0x0600178A RID: 6026 RVA: 0x00057C5D File Offset: 0x00055E5D
		private void OnReadyToContinue()
		{
			this.Refresh();
		}

		// Token: 0x0600178B RID: 6027 RVA: 0x00057C68 File Offset: 0x00055E68
		private void ExecuteDefenderTooltip()
		{
			if (PlayerEncounter.PlayerIsDefender)
			{
				InformationManager.ShowTooltip(typeof(List<MobileParty>), new object[]
				{
					0
				});
				return;
			}
			InformationManager.ShowTooltip(typeof(List<MobileParty>), new object[]
			{
				1
			});
		}

		// Token: 0x0600178C RID: 6028 RVA: 0x00057CB9 File Offset: 0x00055EB9
		public void ExecuteCloseTooltip()
		{
			MBInformationManager.HideInformations();
		}

		// Token: 0x0600178D RID: 6029 RVA: 0x00057CC0 File Offset: 0x00055EC0
		public void ExecuteHeroTooltip()
		{
			CharacterObject characterObject = (CharacterObject)this._currentDialogCharacter;
			if (characterObject != null && characterObject.IsHero)
			{
				InformationManager.ShowTooltip(typeof(Hero), new object[]
				{
					characterObject.HeroObject,
					true
				});
			}
		}

		// Token: 0x0600178E RID: 6030 RVA: 0x00057D0C File Offset: 0x00055F0C
		private void ExecuteAttackerTooltip()
		{
			if (PlayerEncounter.PlayerIsAttacker)
			{
				InformationManager.ShowTooltip(typeof(List<MobileParty>), new object[]
				{
					0
				});
				return;
			}
			InformationManager.ShowTooltip(typeof(List<MobileParty>), new object[]
			{
				1
			});
		}

		// Token: 0x0600178F RID: 6031 RVA: 0x00057D60 File Offset: 0x00055F60
		private void ExecuteHeroInfo()
		{
			if (this._conversationManager.ListenerAgent.Character == Hero.MainHero.CharacterObject)
			{
				Campaign.Current.EncyclopediaManager.GoToLink(Hero.MainHero.EncyclopediaLink);
				return;
			}
			if (CharacterObject.OneToOneConversationCharacter.IsHero)
			{
				Campaign.Current.EncyclopediaManager.GoToLink(CharacterObject.OneToOneConversationCharacter.HeroObject.EncyclopediaLink);
				return;
			}
			Campaign.Current.EncyclopediaManager.GoToLink(CharacterObject.OneToOneConversationCharacter.EncyclopediaLink);
		}

		// Token: 0x06001790 RID: 6032 RVA: 0x00057DE7 File Offset: 0x00055FE7
		private void OnSelectOption(int optionIndex)
		{
			if (!this._isProcessingOption)
			{
				this._isProcessingOption = true;
				this._conversationManager.DoOption(optionIndex);
				PersuasionVM persuasion = this.Persuasion;
				if (persuasion != null)
				{
					persuasion.RefreshPersusasion();
				}
				this.SelectedAnOptionOrLinkThisFrame = true;
			}
		}

		// Token: 0x06001791 RID: 6033 RVA: 0x00057E1C File Offset: 0x0005601C
		public void ExecuteFinalizeSelection()
		{
			this.Refresh();
		}

		// Token: 0x06001792 RID: 6034 RVA: 0x00057E24 File Offset: 0x00056024
		public void ExecuteContinue()
		{
			Debug.Print("ExecuteContinue", 0, Debug.DebugColor.White, 17592186044416UL);
			this._conversationManager.ContinueConversation();
			this._isProcessingOption = false;
		}

		// Token: 0x06001793 RID: 6035 RVA: 0x00057E4E File Offset: 0x0005604E
		private void ExecuteSetCurrentAnswer(ConversationItemVM _answer)
		{
			this.Persuasion.SetCurrentOption((_answer != null) ? _answer.PersuasionItem : null);
			if (_answer != null)
			{
				this.CurrentSelectedAnswer = _answer;
				return;
			}
			this.CurrentSelectedAnswer = new ConversationItemVM();
		}

		// Token: 0x06001794 RID: 6036 RVA: 0x00057E7D File Offset: 0x0005607D
		public override void OnFinalize()
		{
			base.OnFinalize();
			CampaignEvents.PersuasionProgressCommittedEvent.ClearListeners(this);
			PersuasionVM persuasion = this.Persuasion;
			if (persuasion == null)
			{
				return;
			}
			persuasion.OnFinalize();
		}

		// Token: 0x170007F4 RID: 2036
		// (get) Token: 0x06001795 RID: 6037 RVA: 0x00057EA0 File Offset: 0x000560A0
		// (set) Token: 0x06001796 RID: 6038 RVA: 0x00057EA8 File Offset: 0x000560A8
		[DataSourceProperty]
		public PersuasionVM Persuasion
		{
			get
			{
				return this._persuasion;
			}
			set
			{
				if (value != this._persuasion)
				{
					this._persuasion = value;
					base.OnPropertyChangedWithValue<PersuasionVM>(value, "Persuasion");
				}
			}
		}

		// Token: 0x170007F5 RID: 2037
		// (get) Token: 0x06001797 RID: 6039 RVA: 0x00057EC6 File Offset: 0x000560C6
		// (set) Token: 0x06001798 RID: 6040 RVA: 0x00057ECE File Offset: 0x000560CE
		[DataSourceProperty]
		public PowerLevelComparer PowerComparer
		{
			get
			{
				return this._powerComparer;
			}
			set
			{
				if (value != this._powerComparer)
				{
					this._powerComparer = value;
					base.OnPropertyChangedWithValue<PowerLevelComparer>(value, "PowerComparer");
				}
			}
		}

		// Token: 0x170007F6 RID: 2038
		// (get) Token: 0x06001799 RID: 6041 RVA: 0x00057EEC File Offset: 0x000560EC
		// (set) Token: 0x0600179A RID: 6042 RVA: 0x00057EF4 File Offset: 0x000560F4
		[DataSourceProperty]
		public int Relation
		{
			get
			{
				return this._relation;
			}
			set
			{
				if (this._relation != value)
				{
					this._relation = value;
					base.OnPropertyChangedWithValue(value, "Relation");
				}
			}
		}

		// Token: 0x170007F7 RID: 2039
		// (get) Token: 0x0600179B RID: 6043 RVA: 0x00057F12 File Offset: 0x00056112
		// (set) Token: 0x0600179C RID: 6044 RVA: 0x00057F1A File Offset: 0x0005611A
		[DataSourceProperty]
		public int MinRelation
		{
			get
			{
				return this._minRelation;
			}
			set
			{
				if (this._minRelation != value)
				{
					this._minRelation = value;
					base.OnPropertyChangedWithValue(value, "MinRelation");
				}
			}
		}

		// Token: 0x170007F8 RID: 2040
		// (get) Token: 0x0600179D RID: 6045 RVA: 0x00057F38 File Offset: 0x00056138
		// (set) Token: 0x0600179E RID: 6046 RVA: 0x00057F40 File Offset: 0x00056140
		[DataSourceProperty]
		public int MaxRelation
		{
			get
			{
				return this._maxRelation;
			}
			set
			{
				if (this._maxRelation != value)
				{
					this._maxRelation = value;
					base.OnPropertyChangedWithValue(value, "MaxRelation");
				}
			}
		}

		// Token: 0x170007F9 RID: 2041
		// (get) Token: 0x0600179F RID: 6047 RVA: 0x00057F5E File Offset: 0x0005615E
		// (set) Token: 0x060017A0 RID: 6048 RVA: 0x00057F66 File Offset: 0x00056166
		[DataSourceProperty]
		public ConversationAggressivePartyItemVM DefenderLeader
		{
			get
			{
				return this._defenderLeader;
			}
			set
			{
				if (value != this._defenderLeader)
				{
					this._defenderLeader = value;
					base.OnPropertyChangedWithValue<ConversationAggressivePartyItemVM>(value, "DefenderLeader");
				}
			}
		}

		// Token: 0x170007FA RID: 2042
		// (get) Token: 0x060017A1 RID: 6049 RVA: 0x00057F84 File Offset: 0x00056184
		// (set) Token: 0x060017A2 RID: 6050 RVA: 0x00057F8C File Offset: 0x0005618C
		[DataSourceProperty]
		public ConversationAggressivePartyItemVM AttackerLeader
		{
			get
			{
				return this._attackerLeader;
			}
			set
			{
				if (value != this._attackerLeader)
				{
					this._attackerLeader = value;
					base.OnPropertyChangedWithValue<ConversationAggressivePartyItemVM>(value, "AttackerLeader");
				}
			}
		}

		// Token: 0x170007FB RID: 2043
		// (get) Token: 0x060017A3 RID: 6051 RVA: 0x00057FAA File Offset: 0x000561AA
		// (set) Token: 0x060017A4 RID: 6052 RVA: 0x00057FB2 File Offset: 0x000561B2
		[DataSourceProperty]
		public MBBindingList<ConversationAggressivePartyItemVM> AttackerParties
		{
			get
			{
				return this._attackerParties;
			}
			set
			{
				if (value != this._attackerParties)
				{
					this._attackerParties = value;
					base.OnPropertyChangedWithValue<MBBindingList<ConversationAggressivePartyItemVM>>(value, "AttackerParties");
				}
			}
		}

		// Token: 0x170007FC RID: 2044
		// (get) Token: 0x060017A5 RID: 6053 RVA: 0x00057FD0 File Offset: 0x000561D0
		// (set) Token: 0x060017A6 RID: 6054 RVA: 0x00057FD8 File Offset: 0x000561D8
		[DataSourceProperty]
		public MBBindingList<ConversationAggressivePartyItemVM> DefenderParties
		{
			get
			{
				return this._defenderParties;
			}
			set
			{
				if (value != this._defenderParties)
				{
					this._defenderParties = value;
					base.OnPropertyChangedWithValue<MBBindingList<ConversationAggressivePartyItemVM>>(value, "DefenderParties");
				}
			}
		}

		// Token: 0x170007FD RID: 2045
		// (get) Token: 0x060017A7 RID: 6055 RVA: 0x00057FF6 File Offset: 0x000561F6
		// (set) Token: 0x060017A8 RID: 6056 RVA: 0x00057FFE File Offset: 0x000561FE
		[DataSourceProperty]
		public string MoreOptionText
		{
			get
			{
				return this._moreOptionText;
			}
			set
			{
				if (this._moreOptionText != value)
				{
					this._moreOptionText = value;
					base.OnPropertyChangedWithValue<string>(value, "MoreOptionText");
				}
			}
		}

		// Token: 0x170007FE RID: 2046
		// (get) Token: 0x060017A9 RID: 6057 RVA: 0x00058021 File Offset: 0x00056221
		// (set) Token: 0x060017AA RID: 6058 RVA: 0x00058029 File Offset: 0x00056229
		[DataSourceProperty]
		public string GoldText
		{
			get
			{
				return this._goldText;
			}
			set
			{
				if (this._goldText != value)
				{
					this._goldText = value;
					base.OnPropertyChangedWithValue<string>(value, "GoldText");
				}
			}
		}

		// Token: 0x170007FF RID: 2047
		// (get) Token: 0x060017AB RID: 6059 RVA: 0x0005804C File Offset: 0x0005624C
		// (set) Token: 0x060017AC RID: 6060 RVA: 0x00058054 File Offset: 0x00056254
		[DataSourceProperty]
		public string PersuasionText
		{
			get
			{
				return this._persuasionText;
			}
			set
			{
				if (this._persuasionText != value)
				{
					this._persuasionText = value;
					base.OnPropertyChangedWithValue<string>(value, "PersuasionText");
				}
			}
		}

		// Token: 0x17000800 RID: 2048
		// (get) Token: 0x060017AD RID: 6061 RVA: 0x00058077 File Offset: 0x00056277
		// (set) Token: 0x060017AE RID: 6062 RVA: 0x0005807F File Offset: 0x0005627F
		[DataSourceProperty]
		public bool IsCurrentCharacterValidInEncyclopedia
		{
			get
			{
				return this._isCurrentCharacterValidInEncyclopedia;
			}
			set
			{
				if (this._isCurrentCharacterValidInEncyclopedia != value)
				{
					this._isCurrentCharacterValidInEncyclopedia = value;
					base.OnPropertyChangedWithValue(value, "IsCurrentCharacterValidInEncyclopedia");
				}
			}
		}

		// Token: 0x17000801 RID: 2049
		// (get) Token: 0x060017AF RID: 6063 RVA: 0x0005809D File Offset: 0x0005629D
		// (set) Token: 0x060017B0 RID: 6064 RVA: 0x000580A5 File Offset: 0x000562A5
		[DataSourceProperty]
		public bool IsLoadingOver
		{
			get
			{
				return this._isLoadingOver;
			}
			set
			{
				if (this._isLoadingOver != value)
				{
					this._isLoadingOver = value;
					base.OnPropertyChangedWithValue(value, "IsLoadingOver");
				}
			}
		}

		// Token: 0x17000802 RID: 2050
		// (get) Token: 0x060017B1 RID: 6065 RVA: 0x000580C3 File Offset: 0x000562C3
		// (set) Token: 0x060017B2 RID: 6066 RVA: 0x000580CB File Offset: 0x000562CB
		[DataSourceProperty]
		public bool IsPersuading
		{
			get
			{
				return this._isPersuading;
			}
			set
			{
				if (this._isPersuading != value)
				{
					this._isPersuading = value;
					base.OnPropertyChangedWithValue(value, "IsPersuading");
				}
			}
		}

		// Token: 0x17000803 RID: 2051
		// (get) Token: 0x060017B3 RID: 6067 RVA: 0x000580E9 File Offset: 0x000562E9
		// (set) Token: 0x060017B4 RID: 6068 RVA: 0x000580F1 File Offset: 0x000562F1
		[DataSourceProperty]
		public string ContinueText
		{
			get
			{
				return this._continueText;
			}
			set
			{
				if (this._continueText != value)
				{
					this._continueText = value;
					base.OnPropertyChangedWithValue<string>(value, "ContinueText");
				}
			}
		}

		// Token: 0x17000804 RID: 2052
		// (get) Token: 0x060017B5 RID: 6069 RVA: 0x00058114 File Offset: 0x00056314
		// (set) Token: 0x060017B6 RID: 6070 RVA: 0x0005811C File Offset: 0x0005631C
		[DataSourceProperty]
		public string CurrentCharacterNameLbl
		{
			get
			{
				return this._currentCharacterNameLbl;
			}
			set
			{
				if (this._currentCharacterNameLbl != value)
				{
					this._currentCharacterNameLbl = value;
					base.OnPropertyChangedWithValue<string>(value, "CurrentCharacterNameLbl");
				}
			}
		}

		// Token: 0x17000805 RID: 2053
		// (get) Token: 0x060017B7 RID: 6071 RVA: 0x0005813F File Offset: 0x0005633F
		// (set) Token: 0x060017B8 RID: 6072 RVA: 0x00058147 File Offset: 0x00056347
		[DataSourceProperty]
		public MBBindingList<ConversationItemVM> AnswerList
		{
			get
			{
				return this._answerList;
			}
			set
			{
				if (this._answerList != value)
				{
					this._answerList = value;
					base.OnPropertyChangedWithValue<MBBindingList<ConversationItemVM>>(value, "AnswerList");
				}
			}
		}

		// Token: 0x17000806 RID: 2054
		// (get) Token: 0x060017B9 RID: 6073 RVA: 0x00058165 File Offset: 0x00056365
		// (set) Token: 0x060017BA RID: 6074 RVA: 0x0005816D File Offset: 0x0005636D
		[DataSourceProperty]
		public string DialogText
		{
			get
			{
				return this._dialogText;
			}
			set
			{
				if (this._dialogText != value)
				{
					this._dialogText = value;
					base.OnPropertyChangedWithValue<string>(value, "DialogText");
				}
			}
		}

		// Token: 0x17000807 RID: 2055
		// (get) Token: 0x060017BB RID: 6075 RVA: 0x00058190 File Offset: 0x00056390
		// (set) Token: 0x060017BC RID: 6076 RVA: 0x00058198 File Offset: 0x00056398
		[DataSourceProperty]
		public bool IsAggressive
		{
			get
			{
				return this._isAggressive;
			}
			set
			{
				if (value != this._isAggressive)
				{
					this._isAggressive = value;
					base.OnPropertyChangedWithValue(value, "IsAggressive");
				}
			}
		}

		// Token: 0x17000808 RID: 2056
		// (get) Token: 0x060017BD RID: 6077 RVA: 0x000581B6 File Offset: 0x000563B6
		// (set) Token: 0x060017BE RID: 6078 RVA: 0x000581BE File Offset: 0x000563BE
		[DataSourceProperty]
		public int SelectedSide
		{
			get
			{
				return this._selectedSide;
			}
			set
			{
				if (value != this._selectedSide)
				{
					this._selectedSide = value;
					base.OnPropertyChangedWithValue(value, "SelectedSide");
				}
			}
		}

		// Token: 0x17000809 RID: 2057
		// (get) Token: 0x060017BF RID: 6079 RVA: 0x000581DC File Offset: 0x000563DC
		// (set) Token: 0x060017C0 RID: 6080 RVA: 0x000581E4 File Offset: 0x000563E4
		[DataSourceProperty]
		public string RelationText
		{
			get
			{
				return this._relationText;
			}
			set
			{
				if (this._relationText != value)
				{
					this._relationText = value;
					base.OnPropertyChangedWithValue<string>(value, "RelationText");
				}
			}
		}

		// Token: 0x1700080A RID: 2058
		// (get) Token: 0x060017C1 RID: 6081 RVA: 0x00058207 File Offset: 0x00056407
		// (set) Token: 0x060017C2 RID: 6082 RVA: 0x0005820F File Offset: 0x0005640F
		[DataSourceProperty]
		public bool IsRelationEnabled
		{
			get
			{
				return this._isRelationEnabled;
			}
			set
			{
				if (value != this._isRelationEnabled)
				{
					this._isRelationEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsRelationEnabled");
				}
			}
		}

		// Token: 0x1700080B RID: 2059
		// (get) Token: 0x060017C3 RID: 6083 RVA: 0x0005822D File Offset: 0x0005642D
		// (set) Token: 0x060017C4 RID: 6084 RVA: 0x00058235 File Offset: 0x00056435
		[DataSourceProperty]
		public bool IsBannerEnabled
		{
			get
			{
				return this._isBannerEnabled;
			}
			set
			{
				if (value != this._isBannerEnabled)
				{
					this._isBannerEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsBannerEnabled");
				}
			}
		}

		// Token: 0x1700080C RID: 2060
		// (get) Token: 0x060017C5 RID: 6085 RVA: 0x00058253 File Offset: 0x00056453
		// (set) Token: 0x060017C6 RID: 6086 RVA: 0x0005825B File Offset: 0x0005645B
		[DataSourceProperty]
		public ConversationItemVM CurrentSelectedAnswer
		{
			get
			{
				return this._currentSelectedAnswer;
			}
			set
			{
				if (this._currentSelectedAnswer != value)
				{
					this._currentSelectedAnswer = value;
					base.OnPropertyChangedWithValue<ConversationItemVM>(value, "CurrentSelectedAnswer");
				}
			}
		}

		// Token: 0x1700080D RID: 2061
		// (get) Token: 0x060017C7 RID: 6087 RVA: 0x00058279 File Offset: 0x00056479
		// (set) Token: 0x060017C8 RID: 6088 RVA: 0x00058281 File Offset: 0x00056481
		[DataSourceProperty]
		public ImageIdentifierVM ConversedHeroBanner
		{
			get
			{
				return this._conversedHeroBanner;
			}
			set
			{
				if (this._conversedHeroBanner != value)
				{
					this._conversedHeroBanner = value;
					base.OnPropertyChangedWithValue<ImageIdentifierVM>(value, "ConversedHeroBanner");
				}
			}
		}

		// Token: 0x1700080E RID: 2062
		// (get) Token: 0x060017C9 RID: 6089 RVA: 0x0005829F File Offset: 0x0005649F
		// (set) Token: 0x060017CA RID: 6090 RVA: 0x000582A7 File Offset: 0x000564A7
		[DataSourceProperty]
		public HintViewModel RelationHint
		{
			get
			{
				return this._relationHint;
			}
			set
			{
				if (this._relationHint != value)
				{
					this._relationHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "RelationHint");
				}
			}
		}

		// Token: 0x1700080F RID: 2063
		// (get) Token: 0x060017CB RID: 6091 RVA: 0x000582C5 File Offset: 0x000564C5
		// (set) Token: 0x060017CC RID: 6092 RVA: 0x000582CD File Offset: 0x000564CD
		[DataSourceProperty]
		public HintViewModel FactionHint
		{
			get
			{
				return this._factionHint;
			}
			set
			{
				if (this._factionHint != value)
				{
					this._factionHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "FactionHint");
				}
			}
		}

		// Token: 0x17000810 RID: 2064
		// (get) Token: 0x060017CD RID: 6093 RVA: 0x000582EB File Offset: 0x000564EB
		// (set) Token: 0x060017CE RID: 6094 RVA: 0x000582F3 File Offset: 0x000564F3
		[DataSourceProperty]
		public HintViewModel GoldHint
		{
			get
			{
				return this._goldHint;
			}
			set
			{
				if (this._goldHint != value)
				{
					this._goldHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "GoldHint");
				}
			}
		}

		// Token: 0x04000AF8 RID: 2808
		private readonly ConversationManager _conversationManager;

		// Token: 0x04000AF9 RID: 2809
		private readonly bool _isLinksDisabled;

		// Token: 0x04000AFA RID: 2810
		private static bool _isCurrentlyPlayerSpeaking;

		// Token: 0x04000AFB RID: 2811
		private bool _isProcessingOption;

		// Token: 0x04000AFC RID: 2812
		private BasicCharacterObject _currentDialogCharacter;

		// Token: 0x04000AFD RID: 2813
		private Func<string> _getContinueInputText;

		// Token: 0x04000AFE RID: 2814
		private MBBindingList<ConversationItemVM> _answerList;

		// Token: 0x04000AFF RID: 2815
		private string _dialogText;

		// Token: 0x04000B00 RID: 2816
		private string _currentCharacterNameLbl;

		// Token: 0x04000B01 RID: 2817
		private string _continueText;

		// Token: 0x04000B02 RID: 2818
		private string _relationText;

		// Token: 0x04000B03 RID: 2819
		private string _persuasionText;

		// Token: 0x04000B04 RID: 2820
		private bool _isLoadingOver;

		// Token: 0x04000B05 RID: 2821
		private string _moreOptionText;

		// Token: 0x04000B06 RID: 2822
		private string _goldText;

		// Token: 0x04000B07 RID: 2823
		private ConversationAggressivePartyItemVM _defenderLeader;

		// Token: 0x04000B08 RID: 2824
		private ConversationAggressivePartyItemVM _attackerLeader;

		// Token: 0x04000B09 RID: 2825
		private MBBindingList<ConversationAggressivePartyItemVM> _defenderParties;

		// Token: 0x04000B0A RID: 2826
		private MBBindingList<ConversationAggressivePartyItemVM> _attackerParties;

		// Token: 0x04000B0B RID: 2827
		private ImageIdentifierVM _conversedHeroBanner;

		// Token: 0x04000B0C RID: 2828
		private bool _isAggressive;

		// Token: 0x04000B0D RID: 2829
		private bool _isRelationEnabled;

		// Token: 0x04000B0E RID: 2830
		private bool _isBannerEnabled;

		// Token: 0x04000B0F RID: 2831
		private bool _isPersuading;

		// Token: 0x04000B10 RID: 2832
		private bool _isCurrentCharacterValidInEncyclopedia;

		// Token: 0x04000B11 RID: 2833
		private int _selectedSide;

		// Token: 0x04000B12 RID: 2834
		private int _relation;

		// Token: 0x04000B13 RID: 2835
		private int _minRelation;

		// Token: 0x04000B14 RID: 2836
		private int _maxRelation;

		// Token: 0x04000B15 RID: 2837
		private PowerLevelComparer _powerComparer;

		// Token: 0x04000B16 RID: 2838
		private ConversationItemVM _currentSelectedAnswer;

		// Token: 0x04000B17 RID: 2839
		private PersuasionVM _persuasion;

		// Token: 0x04000B18 RID: 2840
		private HintViewModel _relationHint;

		// Token: 0x04000B19 RID: 2841
		private HintViewModel _factionHint;

		// Token: 0x04000B1A RID: 2842
		private HintViewModel _goldHint;
	}
}
