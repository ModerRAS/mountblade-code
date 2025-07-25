using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using TaleWorlds.CampaignSystem.ViewModelCollection.Input;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Core.ViewModelCollection.Selector;
using TaleWorlds.Core.ViewModelCollection.Tutorial;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper
{
	// Token: 0x02000123 RID: 291
	public class CharacterDeveloperVM : ViewModel
	{
		// Token: 0x06001C26 RID: 7206 RVA: 0x00065CE8 File Offset: 0x00063EE8
		public CharacterDeveloperVM(Action closeCharacterDeveloper)
		{
			this._closeCharacterDeveloper = closeCharacterDeveloper;
			this.TutorialNotification = new ElementNotificationVM();
			this._viewDataTracker = Campaign.Current.GetCampaignBehavior<IViewDataTracker>();
			this._heroList = new List<CharacterVM>();
			this.HeroList = new ReadOnlyCollection<CharacterVM>(this._heroList);
			foreach (Hero hero in this.GetApplicableHeroes())
			{
				if (hero == Hero.MainHero)
				{
					this._heroList.Insert(0, new CharacterVM(hero, new Action(this.OnPerkSelection)));
				}
				else
				{
					this._heroList.Add(new CharacterVM(hero, new Action(this.OnPerkSelection)));
				}
			}
			this._heroIndex = 0;
			this.CharacterList = new SelectorVM<SelectorItemVM>(new List<string>(), this._heroIndex, new Action<SelectorVM<SelectorItemVM>>(this.OnCharacterSelection));
			this.RefreshCharacterSelector();
			this.IsPlayerAccompanied = (this._heroList.Count > 1);
			this.SetCurrentHero(this._heroList[this._heroIndex]);
			this._viewDataTracker.ClearCharacterNotification();
			this.UnopenedPerksNumForOtherChars = this._heroList.Sum(delegate(CharacterVM h)
			{
				if (h != this.CurrentCharacter)
				{
					return h.GetNumberOfUnselectedPerks();
				}
				return 0;
			});
			Game.Current.EventManager.RegisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
			this.RefreshValues();
		}

		// Token: 0x06001C27 RID: 7207 RVA: 0x00065E6C File Offset: 0x0006406C
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.DoneLbl = GameTexts.FindText("str_done", null).ToString();
			this.ResetLbl = GameTexts.FindText("str_reset", null).ToString();
			this.CancelLbl = GameTexts.FindText("str_cancel", null).ToString();
			this.SkillsText = GameTexts.FindText("str_skills", null).ToString();
			this.AddFocusText = GameTexts.FindText("str_add_focus", null).ToString();
			this.UnspentCharacterPointsText = GameTexts.FindText("str_character_unspent_character_points", null).ToString();
			this.TraitsText = new TextObject("{=FYJC7cDD}Trait(s)", null).ToString();
			this.PartyRoleText = new TextObject("{=9FJi2SaE}Party Role", null).ToString();
			this.ResetHint = new HintViewModel(GameTexts.FindText("str_reset", null), null);
			this.SkillFocusText = GameTexts.FindText("str_character_skill_focus", null).ToString();
			this.FocusVisualHint = new HintViewModel(new TextObject("{=GwA9oUBC}Your skill focus determines the rate your skill increases with practice", null), null);
			GameTexts.SetVariable("FOCUS_PER_LEVEL", Campaign.Current.Models.CharacterDevelopmentModel.FocusPointsPerLevel);
			GameTexts.SetVariable("ATTRIBUTE_EVERY_LEVEL", Campaign.Current.Models.CharacterDevelopmentModel.LevelsPerAttributePoint);
			this.UnspentCharacterPointsHint = new HintViewModel(GameTexts.FindText("str_character_points_how_to_get", null), null);
			this.UnspentAttributePointsHint = new HintViewModel(GameTexts.FindText("str_attribute_points_how_to_get", null), null);
			this.SetPreviousCharacterHint();
			this.SetNextCharacterHint();
			this.CharacterList.RefreshValues();
			this.CurrentCharacter.RefreshValues();
		}

		// Token: 0x06001C28 RID: 7208 RVA: 0x00065FFF File Offset: 0x000641FF
		private void SetPreviousCharacterHint()
		{
			this.PreviousCharacterHint = new BasicTooltipViewModel(delegate()
			{
				GameTexts.SetVariable("HOTKEY", this.GetPreviousCharacterKeyText());
				GameTexts.SetVariable("TEXT", GameTexts.FindText("str_inventory_prev_char", null));
				return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
			});
		}

		// Token: 0x06001C29 RID: 7209 RVA: 0x00066018 File Offset: 0x00064218
		private void SetNextCharacterHint()
		{
			this.NextCharacterHint = new BasicTooltipViewModel(delegate()
			{
				GameTexts.SetVariable("HOTKEY", this.GetNextCharacterKeyText());
				GameTexts.SetVariable("TEXT", GameTexts.FindText("str_inventory_next_char", null));
				return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
			});
		}

		// Token: 0x06001C2A RID: 7210 RVA: 0x00066034 File Offset: 0x00064234
		public void SelectHero(Hero hero)
		{
			for (int i = 0; i < this._heroList.Count; i++)
			{
				if (this._heroList[i].Hero == hero)
				{
					this._heroIndex = i;
					this.RefreshCharacterSelector();
					return;
				}
			}
		}

		// Token: 0x06001C2B RID: 7211 RVA: 0x0006607C File Offset: 0x0006427C
		private void OnCharacterSelection(SelectorVM<SelectorItemVM> newIndex)
		{
			if (newIndex.SelectedIndex >= 0 && newIndex.SelectedIndex < this._heroList.Count)
			{
				this._heroIndex = newIndex.SelectedIndex;
				this.SetCurrentHero(this._heroList[this._heroIndex]);
				this.UnopenedPerksNumForOtherChars = this._heroList.Sum(delegate(CharacterVM h)
				{
					if (h != this.CurrentCharacter)
					{
						return h.GetNumberOfUnselectedPerks();
					}
					return 0;
				});
				this.HasUnopenedPerksForOtherCharacters = (this._heroList[this._heroIndex].GetNumberOfUnselectedPerks() > 0);
			}
		}

		// Token: 0x06001C2C RID: 7212 RVA: 0x00066104 File Offset: 0x00064304
		private void OnPerkSelection()
		{
			this.RefreshCharacterSelector();
		}

		// Token: 0x06001C2D RID: 7213 RVA: 0x0006610C File Offset: 0x0006430C
		private void RefreshCharacterSelector()
		{
			List<string> list = new List<string>();
			for (int i = 0; i < this._heroList.Count; i++)
			{
				string text = this._heroList[i].HeroNameText;
				if (this._heroList[i].GetNumberOfUnselectedPerks() > 0)
				{
					text = GameTexts.FindText("str_STR1_space_STR2", null).SetTextVariable("STR1", text).SetTextVariable("STR2", "{=!}<img src=\"CharacterDeveloper\\UnselectedPerksIcon\" extend=\"2\">").ToString();
				}
				list.Add(text);
			}
			this.CharacterList.Refresh(list, this._heroIndex, new Action<SelectorVM<SelectorItemVM>>(this.OnCharacterSelection));
		}

		// Token: 0x06001C2E RID: 7214 RVA: 0x000661AC File Offset: 0x000643AC
		public void ExecuteReset()
		{
			foreach (CharacterVM characterVM in this._heroList)
			{
				characterVM.ResetChanges(false);
			}
			this.RefreshCharacterSelector();
		}

		// Token: 0x06001C2F RID: 7215 RVA: 0x00066204 File Offset: 0x00064404
		public void ExecuteDone()
		{
			this.ApplyAllChanges();
			this._closeCharacterDeveloper();
		}

		// Token: 0x06001C30 RID: 7216 RVA: 0x00066218 File Offset: 0x00064418
		public void ExecuteCancel()
		{
			foreach (CharacterVM characterVM in this._heroList)
			{
				characterVM.ResetChanges(true);
			}
			this._closeCharacterDeveloper();
		}

		// Token: 0x06001C31 RID: 7217 RVA: 0x00066274 File Offset: 0x00064474
		private void SetCurrentHero(CharacterVM currentHero)
		{
			CharacterDeveloperVM.<>c__DisplayClass18_0 CS$<>8__locals1 = new CharacterDeveloperVM.<>c__DisplayClass18_0();
			CharacterDeveloperVM.<>c__DisplayClass18_0 CS$<>8__locals2 = CS$<>8__locals1;
			CharacterVM currentCharacter = this.CurrentCharacter;
			SkillObject prevSkill;
			if (currentCharacter == null)
			{
				prevSkill = null;
			}
			else
			{
				SkillVM skillVM = currentCharacter.Skills.FirstOrDefault((SkillVM s) => s.IsInspected);
				prevSkill = ((skillVM != null) ? skillVM.Skill : null);
			}
			CS$<>8__locals2.prevSkill = prevSkill;
			this.CurrentCharacter = currentHero;
			if (CS$<>8__locals1.prevSkill != null)
			{
				CharacterVM currentCharacter2 = this.CurrentCharacter;
				if (currentCharacter2 == null)
				{
					return;
				}
				currentCharacter2.SetCurrentSkill(this.CurrentCharacter.Skills.FirstOrDefault((SkillVM s) => s.Skill == CS$<>8__locals1.prevSkill));
			}
		}

		// Token: 0x06001C32 RID: 7218 RVA: 0x0006630C File Offset: 0x0006450C
		public void ApplyAllChanges()
		{
			foreach (CharacterVM characterVM in this._heroList)
			{
				characterVM.ApplyChanges();
			}
		}

		// Token: 0x06001C33 RID: 7219 RVA: 0x0006635C File Offset: 0x0006455C
		public bool IsThereAnyChanges()
		{
			return this._heroList.Any((CharacterVM c) => c.IsThereAnyChanges());
		}

		// Token: 0x06001C34 RID: 7220 RVA: 0x00066388 File Offset: 0x00064588
		private List<Hero> GetApplicableHeroes()
		{
			List<Hero> list = new List<Hero>();
			Func<Hero, bool> func = (Hero x) => x != null && x.HeroState != Hero.CharacterStates.Disabled && x.IsAlive && !x.IsChild;
			Clan playerClan = Clan.PlayerClan;
			IEnumerable<Hero> enumerable = (playerClan != null) ? playerClan.Heroes : null;
			foreach (Hero hero in (enumerable ?? Enumerable.Empty<Hero>()))
			{
				if (func(hero))
				{
					list.Add(hero);
				}
			}
			Clan playerClan2 = Clan.PlayerClan;
			enumerable = ((playerClan2 != null) ? playerClan2.Companions : null);
			foreach (Hero hero2 in (enumerable ?? Enumerable.Empty<Hero>()))
			{
				if (func(hero2) && !list.Contains(hero2))
				{
					list.Add(hero2);
				}
			}
			return list;
		}

		// Token: 0x06001C35 RID: 7221 RVA: 0x00066488 File Offset: 0x00064688
		private void OnTutorialNotificationElementIDChange(TutorialNotificationElementChangeEvent obj)
		{
			if (obj.NewNotificationElementID != this._latestTutorialElementID)
			{
				if (this._latestTutorialElementID != null)
				{
					this.TutorialNotification.ElementID = string.Empty;
					if (this._isActivePerkHighlightsApplied)
					{
						this.SetAvailablePerksHighlightState(false);
						this._isActivePerkHighlightsApplied = false;
					}
				}
				this._latestTutorialElementID = obj.NewNotificationElementID;
				if (this._latestTutorialElementID != null)
				{
					this.TutorialNotification.ElementID = this._latestTutorialElementID;
					if (!this._isActivePerkHighlightsApplied && this._latestTutorialElementID == this._availablePerksHighlighId)
					{
						this.SetAvailablePerksHighlightState(true);
						this._isActivePerkHighlightsApplied = true;
						SkillVM skillVM = this.CurrentCharacter.Skills.FirstOrDefault((SkillVM s) => s.NumOfUnopenedPerks > 0);
						if (skillVM == null)
						{
							return;
						}
						skillVM.ExecuteInspect();
					}
				}
			}
		}

		// Token: 0x06001C36 RID: 7222 RVA: 0x00066560 File Offset: 0x00064760
		private void SetAvailablePerksHighlightState(bool state)
		{
			foreach (SkillVM skillVM in this.CurrentCharacter.Skills)
			{
				foreach (PerkVM perkVM in skillVM.Perks)
				{
					if (state && perkVM.CurrentState == PerkVM.PerkStates.EarnedButNotSelected)
					{
						perkVM.IsTutorialHighlightEnabled = true;
					}
					else if (!state)
					{
						perkVM.IsTutorialHighlightEnabled = false;
					}
				}
			}
		}

		// Token: 0x06001C37 RID: 7223 RVA: 0x00066600 File Offset: 0x00064800
		public override void OnFinalize()
		{
			base.OnFinalize();
			Game.Current.EventManager.UnregisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
			this.CancelInputKey.OnFinalize();
			this.DoneInputKey.OnFinalize();
			this.PreviousCharacterInputKey.OnFinalize();
			this.NextCharacterInputKey.OnFinalize();
			this._heroList.ForEach(delegate(CharacterVM h)
			{
				h.OnFinalize();
			});
		}

		// Token: 0x170009A9 RID: 2473
		// (get) Token: 0x06001C38 RID: 7224 RVA: 0x00066684 File Offset: 0x00064884
		// (set) Token: 0x06001C39 RID: 7225 RVA: 0x0006668C File Offset: 0x0006488C
		[DataSourceProperty]
		public string CurrentCharacterNameText
		{
			get
			{
				return this._currentCharacterNameText;
			}
			set
			{
				if (value != this._currentCharacterNameText)
				{
					this._currentCharacterNameText = value;
					base.OnPropertyChangedWithValue<string>(value, "CurrentCharacterNameText");
				}
			}
		}

		// Token: 0x170009AA RID: 2474
		// (get) Token: 0x06001C3A RID: 7226 RVA: 0x000666AF File Offset: 0x000648AF
		// (set) Token: 0x06001C3B RID: 7227 RVA: 0x000666B7 File Offset: 0x000648B7
		[DataSourceProperty]
		public CharacterVM CurrentCharacter
		{
			get
			{
				return this._currentCharacter;
			}
			set
			{
				if (value != this._currentCharacter)
				{
					this._currentCharacter = value;
					this.CurrentCharacterNameText = this._currentCharacter.HeroNameText;
					base.OnPropertyChangedWithValue<CharacterVM>(value, "CurrentCharacter");
				}
			}
		}

		// Token: 0x170009AB RID: 2475
		// (get) Token: 0x06001C3C RID: 7228 RVA: 0x000666E6 File Offset: 0x000648E6
		// (set) Token: 0x06001C3D RID: 7229 RVA: 0x000666EE File Offset: 0x000648EE
		[DataSourceProperty]
		public SelectorVM<SelectorItemVM> CharacterList
		{
			get
			{
				return this._characterList;
			}
			set
			{
				if (value != this._characterList)
				{
					this._characterList = value;
					base.OnPropertyChangedWithValue<SelectorVM<SelectorItemVM>>(value, "CharacterList");
				}
			}
		}

		// Token: 0x170009AC RID: 2476
		// (get) Token: 0x06001C3E RID: 7230 RVA: 0x0006670C File Offset: 0x0006490C
		// (set) Token: 0x06001C3F RID: 7231 RVA: 0x00066714 File Offset: 0x00064914
		[DataSourceProperty]
		public HintViewModel FocusVisualHint
		{
			get
			{
				return this._focusVisualHint;
			}
			set
			{
				if (value != this._focusVisualHint)
				{
					this._focusVisualHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "FocusVisualHint");
				}
			}
		}

		// Token: 0x170009AD RID: 2477
		// (get) Token: 0x06001C40 RID: 7232 RVA: 0x00066732 File Offset: 0x00064932
		// (set) Token: 0x06001C41 RID: 7233 RVA: 0x0006673A File Offset: 0x0006493A
		[DataSourceProperty]
		public HintViewModel ResetHint
		{
			get
			{
				return this._resetHint;
			}
			set
			{
				if (value != this._resetHint)
				{
					this._resetHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ResetHint");
				}
			}
		}

		// Token: 0x170009AE RID: 2478
		// (get) Token: 0x06001C42 RID: 7234 RVA: 0x00066758 File Offset: 0x00064958
		// (set) Token: 0x06001C43 RID: 7235 RVA: 0x00066760 File Offset: 0x00064960
		[DataSourceProperty]
		public ElementNotificationVM TutorialNotification
		{
			get
			{
				return this._tutorialNotification;
			}
			set
			{
				if (value != this._tutorialNotification)
				{
					this._tutorialNotification = value;
					base.OnPropertyChangedWithValue<ElementNotificationVM>(value, "TutorialNotification");
				}
			}
		}

		// Token: 0x170009AF RID: 2479
		// (get) Token: 0x06001C44 RID: 7236 RVA: 0x0006677E File Offset: 0x0006497E
		// (set) Token: 0x06001C45 RID: 7237 RVA: 0x00066786 File Offset: 0x00064986
		[DataSourceProperty]
		public bool IsPlayerAccompanied
		{
			get
			{
				return this._isPlayerAccompanied;
			}
			set
			{
				if (value != this._isPlayerAccompanied)
				{
					this._isPlayerAccompanied = value;
					base.OnPropertyChangedWithValue(value, "IsPlayerAccompanied");
				}
			}
		}

		// Token: 0x170009B0 RID: 2480
		// (get) Token: 0x06001C46 RID: 7238 RVA: 0x000667A4 File Offset: 0x000649A4
		// (set) Token: 0x06001C47 RID: 7239 RVA: 0x000667AC File Offset: 0x000649AC
		[DataSourceProperty]
		public string UnspentCharacterPointsText
		{
			get
			{
				return this._unspentFocusPointsText;
			}
			set
			{
				if (value != this._unspentFocusPointsText)
				{
					this._unspentFocusPointsText = value;
					base.OnPropertyChangedWithValue<string>(value, "UnspentCharacterPointsText");
				}
			}
		}

		// Token: 0x170009B1 RID: 2481
		// (get) Token: 0x06001C48 RID: 7240 RVA: 0x000667CF File Offset: 0x000649CF
		// (set) Token: 0x06001C49 RID: 7241 RVA: 0x000667D7 File Offset: 0x000649D7
		[DataSourceProperty]
		public string TraitsText
		{
			get
			{
				return this._traitsText;
			}
			set
			{
				if (value != this._traitsText)
				{
					this._traitsText = value;
					base.OnPropertyChangedWithValue<string>(value, "TraitsText");
				}
			}
		}

		// Token: 0x170009B2 RID: 2482
		// (get) Token: 0x06001C4A RID: 7242 RVA: 0x000667FA File Offset: 0x000649FA
		// (set) Token: 0x06001C4B RID: 7243 RVA: 0x00066802 File Offset: 0x00064A02
		[DataSourceProperty]
		public string PartyRoleText
		{
			get
			{
				return this._partyRoleText;
			}
			set
			{
				if (value != this._partyRoleText)
				{
					this._partyRoleText = value;
					base.OnPropertyChangedWithValue<string>(value, "PartyRoleText");
				}
			}
		}

		// Token: 0x170009B3 RID: 2483
		// (get) Token: 0x06001C4C RID: 7244 RVA: 0x00066825 File Offset: 0x00064A25
		// (set) Token: 0x06001C4D RID: 7245 RVA: 0x0006682D File Offset: 0x00064A2D
		[DataSourceProperty]
		public HintViewModel UnspentCharacterPointsHint
		{
			get
			{
				return this._unspentCharacterPointsHint;
			}
			set
			{
				if (value != this._unspentCharacterPointsHint)
				{
					this._unspentCharacterPointsHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "UnspentCharacterPointsHint");
				}
			}
		}

		// Token: 0x170009B4 RID: 2484
		// (get) Token: 0x06001C4E RID: 7246 RVA: 0x0006684B File Offset: 0x00064A4B
		// (set) Token: 0x06001C4F RID: 7247 RVA: 0x00066853 File Offset: 0x00064A53
		[DataSourceProperty]
		public HintViewModel UnspentAttributePointsHint
		{
			get
			{
				return this._unspentAttributePointsHint;
			}
			set
			{
				if (value != this._unspentAttributePointsHint)
				{
					this._unspentAttributePointsHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "UnspentAttributePointsHint");
				}
			}
		}

		// Token: 0x170009B5 RID: 2485
		// (get) Token: 0x06001C50 RID: 7248 RVA: 0x00066871 File Offset: 0x00064A71
		// (set) Token: 0x06001C51 RID: 7249 RVA: 0x00066879 File Offset: 0x00064A79
		[DataSourceProperty]
		public BasicTooltipViewModel PreviousCharacterHint
		{
			get
			{
				return this._previousCharacterHint;
			}
			set
			{
				if (value != this._previousCharacterHint)
				{
					this._previousCharacterHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "PreviousCharacterHint");
				}
			}
		}

		// Token: 0x170009B6 RID: 2486
		// (get) Token: 0x06001C52 RID: 7250 RVA: 0x00066897 File Offset: 0x00064A97
		// (set) Token: 0x06001C53 RID: 7251 RVA: 0x0006689F File Offset: 0x00064A9F
		[DataSourceProperty]
		public BasicTooltipViewModel NextCharacterHint
		{
			get
			{
				return this._nextCharacterHint;
			}
			set
			{
				if (value != this._nextCharacterHint)
				{
					this._nextCharacterHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "NextCharacterHint");
				}
			}
		}

		// Token: 0x170009B7 RID: 2487
		// (get) Token: 0x06001C54 RID: 7252 RVA: 0x000668BD File Offset: 0x00064ABD
		// (set) Token: 0x06001C55 RID: 7253 RVA: 0x000668C5 File Offset: 0x00064AC5
		[DataSourceProperty]
		public string DoneLbl
		{
			get
			{
				return this._doneLbl;
			}
			set
			{
				if (value != this._doneLbl)
				{
					this._doneLbl = value;
					base.OnPropertyChangedWithValue<string>(value, "DoneLbl");
				}
			}
		}

		// Token: 0x170009B8 RID: 2488
		// (get) Token: 0x06001C56 RID: 7254 RVA: 0x000668E8 File Offset: 0x00064AE8
		// (set) Token: 0x06001C57 RID: 7255 RVA: 0x000668F0 File Offset: 0x00064AF0
		[DataSourceProperty]
		public string ResetLbl
		{
			get
			{
				return this._resetLbl;
			}
			set
			{
				if (value != this._resetLbl)
				{
					this._resetLbl = value;
					base.OnPropertyChangedWithValue<string>(value, "ResetLbl");
				}
			}
		}

		// Token: 0x170009B9 RID: 2489
		// (get) Token: 0x06001C58 RID: 7256 RVA: 0x00066913 File Offset: 0x00064B13
		// (set) Token: 0x06001C59 RID: 7257 RVA: 0x0006691B File Offset: 0x00064B1B
		[DataSourceProperty]
		public string CancelLbl
		{
			get
			{
				return this._cancelLbl;
			}
			set
			{
				if (value != this._cancelLbl)
				{
					this._cancelLbl = value;
					base.OnPropertyChangedWithValue<string>(value, "CancelLbl");
				}
			}
		}

		// Token: 0x170009BA RID: 2490
		// (get) Token: 0x06001C5A RID: 7258 RVA: 0x0006693E File Offset: 0x00064B3E
		// (set) Token: 0x06001C5B RID: 7259 RVA: 0x00066946 File Offset: 0x00064B46
		[DataSourceProperty]
		public string SkillFocusText
		{
			get
			{
				return this._skillFocusText;
			}
			set
			{
				if (value != this._skillFocusText)
				{
					this._skillFocusText = value;
					base.OnPropertyChangedWithValue<string>(value, "SkillFocusText");
				}
			}
		}

		// Token: 0x170009BB RID: 2491
		// (get) Token: 0x06001C5C RID: 7260 RVA: 0x00066969 File Offset: 0x00064B69
		// (set) Token: 0x06001C5D RID: 7261 RVA: 0x00066971 File Offset: 0x00064B71
		[DataSourceProperty]
		public string AddFocusText
		{
			get
			{
				return this._addFocusText;
			}
			set
			{
				if (value != this._addFocusText)
				{
					this._addFocusText = value;
					base.OnPropertyChangedWithValue<string>(value, "AddFocusText");
				}
			}
		}

		// Token: 0x170009BC RID: 2492
		// (get) Token: 0x06001C5E RID: 7262 RVA: 0x00066994 File Offset: 0x00064B94
		// (set) Token: 0x06001C5F RID: 7263 RVA: 0x0006699C File Offset: 0x00064B9C
		[DataSourceProperty]
		public string SkillsText
		{
			get
			{
				return this._skillsText;
			}
			set
			{
				if (value != this._skillsText)
				{
					this._skillsText = value;
					base.OnPropertyChangedWithValue<string>(value, "SkillsText");
				}
			}
		}

		// Token: 0x170009BD RID: 2493
		// (get) Token: 0x06001C60 RID: 7264 RVA: 0x000669BF File Offset: 0x00064BBF
		// (set) Token: 0x06001C61 RID: 7265 RVA: 0x000669C7 File Offset: 0x00064BC7
		[DataSourceProperty]
		public int UnopenedPerksNumForOtherChars
		{
			get
			{
				return this._unopenedPerksNumForOtherChars;
			}
			set
			{
				if (value != this._unopenedPerksNumForOtherChars)
				{
					this._unopenedPerksNumForOtherChars = value;
					base.OnPropertyChangedWithValue(value, "UnopenedPerksNumForOtherChars");
				}
			}
		}

		// Token: 0x170009BE RID: 2494
		// (get) Token: 0x06001C62 RID: 7266 RVA: 0x000669E5 File Offset: 0x00064BE5
		// (set) Token: 0x06001C63 RID: 7267 RVA: 0x000669ED File Offset: 0x00064BED
		[DataSourceProperty]
		public bool HasUnopenedPerksForOtherCharacters
		{
			get
			{
				return this._hasUnopenedPerksForCurrentCharacter;
			}
			set
			{
				if (value != this._hasUnopenedPerksForCurrentCharacter)
				{
					this._hasUnopenedPerksForCurrentCharacter = value;
					base.OnPropertyChangedWithValue(value, "HasUnopenedPerksForOtherCharacters");
				}
			}
		}

		// Token: 0x06001C64 RID: 7268 RVA: 0x00066A0B File Offset: 0x00064C0B
		private TextObject GetPreviousCharacterKeyText()
		{
			if (this.PreviousCharacterInputKey == null || this._getKeyTextFromKeyId == null)
			{
				return TextObject.Empty;
			}
			return this._getKeyTextFromKeyId(this.PreviousCharacterInputKey.KeyID);
		}

		// Token: 0x06001C65 RID: 7269 RVA: 0x00066A39 File Offset: 0x00064C39
		private TextObject GetNextCharacterKeyText()
		{
			if (this.NextCharacterInputKey == null || this._getKeyTextFromKeyId == null)
			{
				return TextObject.Empty;
			}
			return this._getKeyTextFromKeyId(this.NextCharacterInputKey.KeyID);
		}

		// Token: 0x06001C66 RID: 7270 RVA: 0x00066A67 File Offset: 0x00064C67
		public void SetCancelInputKey(HotKey gameKey)
		{
			this.CancelInputKey = InputKeyItemVM.CreateFromHotKey(gameKey, true);
		}

		// Token: 0x06001C67 RID: 7271 RVA: 0x00066A76 File Offset: 0x00064C76
		public void SetDoneInputKey(HotKey hotKey)
		{
			this.DoneInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
		}

		// Token: 0x06001C68 RID: 7272 RVA: 0x00066A85 File Offset: 0x00064C85
		public void SetResetInputKey(HotKey hotKey)
		{
			this.ResetInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
		}

		// Token: 0x06001C69 RID: 7273 RVA: 0x00066A94 File Offset: 0x00064C94
		public void SetPreviousCharacterInputKey(HotKey hotKey)
		{
			this.PreviousCharacterInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
			this.SetPreviousCharacterHint();
		}

		// Token: 0x06001C6A RID: 7274 RVA: 0x00066AA9 File Offset: 0x00064CA9
		public void SetNextCharacterInputKey(HotKey hotKey)
		{
			this.NextCharacterInputKey = InputKeyItemVM.CreateFromHotKey(hotKey, true);
			this.SetNextCharacterHint();
		}

		// Token: 0x06001C6B RID: 7275 RVA: 0x00066ABE File Offset: 0x00064CBE
		public void SetGetKeyTextFromKeyIDFunc(Func<string, TextObject> getKeyTextFromKeyId)
		{
			this._getKeyTextFromKeyId = getKeyTextFromKeyId;
		}

		// Token: 0x170009BF RID: 2495
		// (get) Token: 0x06001C6C RID: 7276 RVA: 0x00066AC7 File Offset: 0x00064CC7
		// (set) Token: 0x06001C6D RID: 7277 RVA: 0x00066ACF File Offset: 0x00064CCF
		[DataSourceProperty]
		public InputKeyItemVM CancelInputKey
		{
			get
			{
				return this._cancelInputKey;
			}
			set
			{
				if (value != this._cancelInputKey)
				{
					this._cancelInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "CancelInputKey");
				}
			}
		}

		// Token: 0x170009C0 RID: 2496
		// (get) Token: 0x06001C6E RID: 7278 RVA: 0x00066AED File Offset: 0x00064CED
		// (set) Token: 0x06001C6F RID: 7279 RVA: 0x00066AF5 File Offset: 0x00064CF5
		[DataSourceProperty]
		public InputKeyItemVM DoneInputKey
		{
			get
			{
				return this._doneInputKey;
			}
			set
			{
				if (value != this._doneInputKey)
				{
					this._doneInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "DoneInputKey");
				}
			}
		}

		// Token: 0x170009C1 RID: 2497
		// (get) Token: 0x06001C70 RID: 7280 RVA: 0x00066B13 File Offset: 0x00064D13
		// (set) Token: 0x06001C71 RID: 7281 RVA: 0x00066B1B File Offset: 0x00064D1B
		[DataSourceProperty]
		public InputKeyItemVM ResetInputKey
		{
			get
			{
				return this._resetInputKey;
			}
			set
			{
				if (value != this._resetInputKey)
				{
					this._resetInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "ResetInputKey");
				}
			}
		}

		// Token: 0x170009C2 RID: 2498
		// (get) Token: 0x06001C72 RID: 7282 RVA: 0x00066B39 File Offset: 0x00064D39
		// (set) Token: 0x06001C73 RID: 7283 RVA: 0x00066B41 File Offset: 0x00064D41
		[DataSourceProperty]
		public InputKeyItemVM PreviousCharacterInputKey
		{
			get
			{
				return this._previousCharacterInputKey;
			}
			set
			{
				if (value != this._previousCharacterInputKey)
				{
					this._previousCharacterInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "PreviousCharacterInputKey");
				}
			}
		}

		// Token: 0x170009C3 RID: 2499
		// (get) Token: 0x06001C74 RID: 7284 RVA: 0x00066B5F File Offset: 0x00064D5F
		// (set) Token: 0x06001C75 RID: 7285 RVA: 0x00066B67 File Offset: 0x00064D67
		[DataSourceProperty]
		public InputKeyItemVM NextCharacterInputKey
		{
			get
			{
				return this._nextCharacterInputKey;
			}
			set
			{
				if (value != this._nextCharacterInputKey)
				{
					this._nextCharacterInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "NextCharacterInputKey");
				}
			}
		}

		// Token: 0x04000D54 RID: 3412
		private readonly Action _closeCharacterDeveloper;

		// Token: 0x04000D55 RID: 3413
		private readonly List<CharacterVM> _heroList;

		// Token: 0x04000D56 RID: 3414
		private readonly IViewDataTracker _viewDataTracker;

		// Token: 0x04000D57 RID: 3415
		public readonly ReadOnlyCollection<CharacterVM> HeroList;

		// Token: 0x04000D58 RID: 3416
		private int _heroIndex;

		// Token: 0x04000D59 RID: 3417
		private string _latestTutorialElementID;

		// Token: 0x04000D5A RID: 3418
		private Func<string, TextObject> _getKeyTextFromKeyId;

		// Token: 0x04000D5B RID: 3419
		private bool _isActivePerkHighlightsApplied;

		// Token: 0x04000D5C RID: 3420
		private readonly string _availablePerksHighlighId = "AvailablePerks";

		// Token: 0x04000D5D RID: 3421
		private string _skillsText;

		// Token: 0x04000D5E RID: 3422
		private string _doneLbl;

		// Token: 0x04000D5F RID: 3423
		private string _resetLbl;

		// Token: 0x04000D60 RID: 3424
		private string _cancelLbl;

		// Token: 0x04000D61 RID: 3425
		private string _unspentFocusPointsText;

		// Token: 0x04000D62 RID: 3426
		private string _traitsText;

		// Token: 0x04000D63 RID: 3427
		private string _partyRoleText;

		// Token: 0x04000D64 RID: 3428
		private HintViewModel _unspentCharacterPointsHint;

		// Token: 0x04000D65 RID: 3429
		private HintViewModel _unspentAttributePointsHint;

		// Token: 0x04000D66 RID: 3430
		private BasicTooltipViewModel _previousCharacterHint;

		// Token: 0x04000D67 RID: 3431
		private BasicTooltipViewModel _nextCharacterHint;

		// Token: 0x04000D68 RID: 3432
		private string _addFocusText;

		// Token: 0x04000D69 RID: 3433
		private bool _isPlayerAccompanied;

		// Token: 0x04000D6A RID: 3434
		private string _skillFocusText;

		// Token: 0x04000D6B RID: 3435
		private ElementNotificationVM _tutorialNotification;

		// Token: 0x04000D6C RID: 3436
		private HintViewModel _resetHint;

		// Token: 0x04000D6D RID: 3437
		private HintViewModel _focusVisualHint;

		// Token: 0x04000D6E RID: 3438
		private CharacterVM _currentCharacter;

		// Token: 0x04000D6F RID: 3439
		private string _currentCharacterNameText;

		// Token: 0x04000D70 RID: 3440
		private SelectorVM<SelectorItemVM> _characterList;

		// Token: 0x04000D71 RID: 3441
		private int _unopenedPerksNumForOtherChars;

		// Token: 0x04000D72 RID: 3442
		private bool _hasUnopenedPerksForCurrentCharacter;

		// Token: 0x04000D73 RID: 3443
		private InputKeyItemVM _cancelInputKey;

		// Token: 0x04000D74 RID: 3444
		private InputKeyItemVM _doneInputKey;

		// Token: 0x04000D75 RID: 3445
		private InputKeyItemVM _resetInputKey;

		// Token: 0x04000D76 RID: 3446
		private InputKeyItemVM _previousCharacterInputKey;

		// Token: 0x04000D77 RID: 3447
		private InputKeyItemVM _nextCharacterInputKey;
	}
}
