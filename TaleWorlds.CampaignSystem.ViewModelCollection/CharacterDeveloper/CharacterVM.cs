using System;
using System.Collections.Generic;
using System.Linq;
using Helpers;
using TaleWorlds.CampaignSystem.CharacterDevelopment;
using TaleWorlds.CampaignSystem.Extensions;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper.PerkSelection;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper
{
	// Token: 0x02000124 RID: 292
	public class CharacterVM : ViewModel
	{
		// Token: 0x06001C7A RID: 7290 RVA: 0x00066C19 File Offset: 0x00064E19
		public IHeroDeveloper GetCharacterDeveloper()
		{
			Hero hero = this.Hero;
			if (hero == null)
			{
				return null;
			}
			return hero.HeroDeveloper;
		}

		// Token: 0x170009C4 RID: 2500
		// (get) Token: 0x06001C7B RID: 7291 RVA: 0x00066C2C File Offset: 0x00064E2C
		// (set) Token: 0x06001C7C RID: 7292 RVA: 0x00066C34 File Offset: 0x00064E34
		public Hero Hero { get; private set; }

		// Token: 0x170009C5 RID: 2501
		// (get) Token: 0x06001C7D RID: 7293 RVA: 0x00066C3D File Offset: 0x00064E3D
		// (set) Token: 0x06001C7E RID: 7294 RVA: 0x00066C45 File Offset: 0x00064E45
		public int OrgUnspentFocusPoints { get; private set; }

		// Token: 0x170009C6 RID: 2502
		// (get) Token: 0x06001C7F RID: 7295 RVA: 0x00066C4E File Offset: 0x00064E4E
		// (set) Token: 0x06001C80 RID: 7296 RVA: 0x00066C56 File Offset: 0x00064E56
		public int OrgUnspentAttributePoints { get; private set; }

		// Token: 0x06001C81 RID: 7297 RVA: 0x00066C60 File Offset: 0x00064E60
		public CharacterVM(Hero hero, Action onPerkSelection)
		{
			this.LevelHint = new HintViewModel();
			this.Hero = hero;
			this.OrgUnspentFocusPoints = this.GetCharacterDeveloper().UnspentFocusPoints;
			this.UnspentCharacterPoints = this.OrgUnspentFocusPoints;
			this.OrgUnspentAttributePoints = this.GetCharacterDeveloper().UnspentAttributePoints;
			this.UnspentAttributePoints = this.OrgUnspentAttributePoints;
			this._developer = this.GetCharacterDeveloper();
			this.Attributes = new MBBindingList<CharacterAttributeItemVM>();
			this.PerkSelection = new PerkSelectionVM(this._developer, new Action<SkillObject>(this.RefreshPerksOfSkill), onPerkSelection);
			this.InitializeCharacter();
			this.RefreshValues();
		}

		// Token: 0x06001C82 RID: 7298 RVA: 0x00066D00 File Offset: 0x00064F00
		public override void RefreshValues()
		{
			base.RefreshValues();
			StringHelpers.SetCharacterProperties("HERO", this.Hero.CharacterObject, null, false);
			this.HeroNameText = this.Hero.CharacterObject.Name.ToString();
			MBTextManager.SetTextVariable("LEVEL", this.Hero.CharacterObject.Level);
			this.HeroLevelText = GameTexts.FindText("str_level_with_value", null).ToString();
			this.HeroInfoText = GameTexts.FindText("str_hero_name_level", null).ToString();
			this.FocusPointsText = GameTexts.FindText("str_focus_points", null).ToString();
			this.InitializeCharacter();
			this.Skills.ApplyActionOnAllItems(delegate(SkillVM x)
			{
				x.RefreshValues();
			});
			this.CurrentSkill.RefreshValues();
		}

		// Token: 0x06001C83 RID: 7299 RVA: 0x00066DE0 File Offset: 0x00064FE0
		private void InitializeCharacter()
		{
			this.HeroCharacter = new HeroViewModel(CharacterViewModel.StanceTypes.None);
			this.Skills = new MBBindingList<SkillVM>();
			this.Traits = new MBBindingList<EncyclopediaTraitItemVM>();
			this.Attributes.Clear();
			this.HeroCharacter.FillFrom(this.Hero, -1, false, false);
			this.HeroCharacter.SetEquipment(EquipmentIndex.ArmorItemEndSlot, default(EquipmentElement));
			this.HeroCharacter.SetEquipment(EquipmentIndex.HorseHarness, default(EquipmentElement));
			this.HeroCharacter.SetEquipment(EquipmentIndex.NumAllWeaponSlots, default(EquipmentElement));
			foreach (CharacterAttribute characterAttribute in TaleWorlds.CampaignSystem.Extensions.Attributes.All)
			{
				CharacterAttributeItemVM item = new CharacterAttributeItemVM(this.Hero, characterAttribute, this, new Action<CharacterAttributeItemVM>(this.OnInspectAttribute), new Action<CharacterAttributeItemVM>(this.OnAddAttributePoint));
				this.Attributes.Add(item);
				foreach (SkillObject skill2 in characterAttribute.Skills)
				{
					this.Skills.Add(new SkillVM(skill2, this, new Action<PerkVM>(this.OnStartPerkSelection)));
				}
			}
			using (List<SkillObject>.Enumerator enumerator2 = TaleWorlds.CampaignSystem.Extensions.Skills.All.GetEnumerator())
			{
				while (enumerator2.MoveNext())
				{
					SkillObject skill = enumerator2.Current;
					if (this.Skills.All((SkillVM s) => s.Skill != skill))
					{
						this.Skills.Add(new SkillVM(skill, this, new Action<PerkVM>(this.OnStartPerkSelection)));
					}
				}
			}
			foreach (SkillVM skillVM in this.Skills)
			{
				skillVM.RefreshWithCurrentValues();
			}
			foreach (CharacterAttributeItemVM characterAttributeItemVM in this.Attributes)
			{
				characterAttributeItemVM.RefreshWithCurrentValues();
			}
			this.SetCurrentSkill(this.Skills[0]);
			this.RefreshCharacterValues();
			this.CharacterStats = new MBBindingList<StringPairItemVM>();
			if (this.Hero.GovernorOf != null)
			{
				GameTexts.SetVariable("SETTLEMENT_NAME", this.Hero.GovernorOf.Name.ToString());
				this.CharacterStats.Add(new StringPairItemVM(GameTexts.FindText("str_governor_of_label", null).ToString(), "", null));
			}
			if (MobileParty.MainParty.GetHeroPerkRole(this.Hero) != SkillEffect.PerkRole.None)
			{
				this.CharacterStats.Add(new StringPairItemVM(CampaignUIHelper.GetHeroClanRoleText(this.Hero, Clan.PlayerClan), "", null));
			}
			foreach (TraitObject traitObject in CampaignUIHelper.GetHeroTraits())
			{
				if (this.Hero.GetTraitLevel(traitObject) != 0)
				{
					this.Traits.Add(new EncyclopediaTraitItemVM(traitObject, this.Hero));
				}
			}
		}

		// Token: 0x06001C84 RID: 7300 RVA: 0x00067154 File Offset: 0x00065354
		private void OnInspectAttribute(CharacterAttributeItemVM att)
		{
			this.CurrentInspectedAttribute = att;
			this.IsInspectingAnAttribute = true;
		}

		// Token: 0x06001C85 RID: 7301 RVA: 0x00067164 File Offset: 0x00065364
		private void OnAddAttributePoint(CharacterAttributeItemVM att)
		{
			int unspentAttributePoints = this.UnspentAttributePoints;
			this.UnspentAttributePoints = unspentAttributePoints - 1;
			this.RefreshCharacterValues();
		}

		// Token: 0x06001C86 RID: 7302 RVA: 0x00067187 File Offset: 0x00065387
		public void ExecuteStopInspectingCurrentAttribute()
		{
			this.IsInspectingAnAttribute = false;
			this.CurrentInspectedAttribute = null;
		}

		// Token: 0x06001C87 RID: 7303 RVA: 0x00067198 File Offset: 0x00065398
		public void RefreshCharacterValues()
		{
			this.CurrentTotalSkill = this.GetCharacterDeveloper().TotalXp - this.GetCharacterDeveloper().GetXpRequiredForLevel(this.Hero.CharacterObject.Level);
			this.SkillPointsRequiredForNextLevel = this.GetCharacterDeveloper().GetXpRequiredForLevel(this.Hero.CharacterObject.Level + 1) - this.GetCharacterDeveloper().GetXpRequiredForLevel(this.Hero.CharacterObject.Level);
			GameTexts.SetVariable("CURRENTAMOUNT", this.CurrentTotalSkill);
			GameTexts.SetVariable("TARGETAMOUNT", this.SkillPointsRequiredForNextLevel);
			this.LevelProgressText = GameTexts.FindText("str_character_skillpoint_progress", null).ToString();
			GameTexts.SetVariable("newline", "\n");
			GameTexts.SetVariable("CURRENT_SKILL_POINTS", this.CurrentTotalSkill);
			GameTexts.SetVariable("STR1", GameTexts.FindText("str_total_skill_points", null));
			GameTexts.SetVariable("NEXT_SKILL_POINTS", this.SkillPointsRequiredForNextLevel);
			GameTexts.SetVariable("STR2", GameTexts.FindText("str_next_level_at", null));
			string content = GameTexts.FindText("str_string_newline_string", null).ToString();
			GameTexts.SetVariable("SKILL_LEVEL_FOR_LEVEL_UP", this.SkillPointsRequiredForNextLevel - this.CurrentTotalSkill);
			GameTexts.SetVariable("STR1", content);
			GameTexts.SetVariable("STR2", GameTexts.FindText("str_how_to_level_up_character", null));
			string str = GameTexts.FindText("str_string_newline_string", null).ToString();
			this.LevelHint.HintText = new TextObject("{=!}" + str, null);
			foreach (SkillVM skillVM in this.Skills)
			{
				skillVM.RefreshWithCurrentValues();
			}
			foreach (CharacterAttributeItemVM characterAttributeItemVM in this.Attributes)
			{
				characterAttributeItemVM.RefreshWithCurrentValues();
			}
		}

		// Token: 0x06001C88 RID: 7304 RVA: 0x0006738C File Offset: 0x0006558C
		public void RefreshPerksOfSkill(SkillObject skill)
		{
			SkillVM skillVM = this.Skills.SingleOrDefault((SkillVM s) => s.Skill == skill);
			if (skillVM == null)
			{
				return;
			}
			skillVM.RefreshLists(null);
		}

		// Token: 0x06001C89 RID: 7305 RVA: 0x000673C8 File Offset: 0x000655C8
		public void ResetChanges(bool isCancel)
		{
			this.PerkSelection.ResetSelectedPerks();
			if (!isCancel)
			{
				this.UnspentCharacterPoints = this.OrgUnspentFocusPoints;
				this.UnspentAttributePoints = this.OrgUnspentAttributePoints;
			}
			foreach (CharacterAttributeItemVM characterAttributeItemVM in this.Attributes)
			{
				characterAttributeItemVM.Reset();
			}
			if (!isCancel)
			{
				foreach (CharacterAttributeItemVM characterAttributeItemVM2 in this.Attributes)
				{
					characterAttributeItemVM2.RefreshWithCurrentValues();
				}
			}
			foreach (SkillVM skillVM in this.Skills)
			{
				skillVM.ResetChanges();
			}
			if (!isCancel)
			{
				foreach (SkillVM skillVM2 in this.Skills)
				{
					skillVM2.RefreshWithCurrentValues();
				}
			}
		}

		// Token: 0x06001C8A RID: 7306 RVA: 0x000674EC File Offset: 0x000656EC
		public void ApplyChanges()
		{
			this.PerkSelection.ApplySelectedPerks();
			foreach (CharacterAttributeItemVM characterAttributeItemVM in this.Attributes)
			{
				characterAttributeItemVM.Commit();
			}
			foreach (SkillVM skillVM in this.Skills)
			{
				skillVM.ApplyChanges();
			}
		}

		// Token: 0x06001C8B RID: 7307 RVA: 0x0006757C File Offset: 0x0006577C
		public void SetCurrentSkill(SkillVM skill)
		{
			if (this.CurrentSkill != null)
			{
				this.CurrentSkill.IsInspected = false;
			}
			this.CurrentSkill = skill;
			this.CurrentSkill.IsInspected = true;
		}

		// Token: 0x06001C8C RID: 7308 RVA: 0x000675A8 File Offset: 0x000657A8
		public bool IsThereAnyChanges()
		{
			bool flag = this.Skills.Any((SkillVM s) => s.IsThereAnyChanges());
			return this.UnspentCharacterPoints != this.OrgUnspentFocusPoints || this.UnspentAttributePoints != this.OrgUnspentAttributePoints || this.PerkSelection.IsAnyPerkSelected() || flag;
		}

		// Token: 0x06001C8D RID: 7309 RVA: 0x0006760C File Offset: 0x0006580C
		public int GetRequiredFocusPointsToAddFocusWithCurrentFocus(SkillObject skill)
		{
			return this.Hero.HeroDeveloper.GetRequiredFocusPointsToAddFocus(skill);
		}

		// Token: 0x06001C8E RID: 7310 RVA: 0x0006761F File Offset: 0x0006581F
		public bool CanAddFocusToSkillWithFocusAmount(int currentFocusAmount)
		{
			return currentFocusAmount < Campaign.Current.Models.CharacterDevelopmentModel.MaxFocusPerSkill && this.UnspentCharacterPoints > 0;
		}

		// Token: 0x06001C8F RID: 7311 RVA: 0x00067644 File Offset: 0x00065844
		public bool IsSkillMaxAmongOtherSkills(SkillVM skill)
		{
			if (this.Skills.Count > 0)
			{
				int currentFocusLevel = skill.CurrentFocusLevel;
				return this.Skills.Max((SkillVM s) => s.CurrentFocusLevel) <= currentFocusLevel;
			}
			return false;
		}

		// Token: 0x06001C90 RID: 7312 RVA: 0x00067698 File Offset: 0x00065898
		public string GetNameWithNumOfUnopenedPerks()
		{
			if (this.Skills.Sum((SkillVM s) => s.NumOfUnopenedPerks) == 0)
			{
				return this.HeroNameText;
			}
			GameTexts.SetVariable("STR1", this.HeroNameText);
			GameTexts.SetVariable("STR2", "{=!}<img src=\"CharacterDeveloper\\UnselectedPerksIcon\" extend=\"2\">");
			return GameTexts.FindText("str_STR1_space_STR2", null).ToString();
		}

		// Token: 0x06001C91 RID: 7313 RVA: 0x00067708 File Offset: 0x00065908
		public int GetCurrentAttributePoint(CharacterAttribute attribute)
		{
			if (this.Attributes.Count > 0)
			{
				return this.Attributes.Single((CharacterAttributeItemVM a) => a.AttributeType == attribute).AttributeValue;
			}
			return 0;
		}

		// Token: 0x06001C92 RID: 7314 RVA: 0x0006774E File Offset: 0x0006594E
		private void OnStartPerkSelection(PerkVM perk)
		{
			this.PerkSelection.SetCurrentSelectionPerk(perk);
		}

		// Token: 0x06001C93 RID: 7315 RVA: 0x0006775C File Offset: 0x0006595C
		public int GetNumberOfUnselectedPerks()
		{
			return this.Skills.Sum((SkillVM s) => s.NumOfUnopenedPerks);
		}

		// Token: 0x06001C94 RID: 7316 RVA: 0x00067788 File Offset: 0x00065988
		public override void OnFinalize()
		{
			base.OnFinalize();
			this.HeroCharacter.OnFinalize();
		}

		// Token: 0x170009C7 RID: 2503
		// (get) Token: 0x06001C95 RID: 7317 RVA: 0x0006779B File Offset: 0x0006599B
		// (set) Token: 0x06001C96 RID: 7318 RVA: 0x000677A3 File Offset: 0x000659A3
		[DataSourceProperty]
		public MBBindingList<SkillVM> Skills
		{
			get
			{
				return this._skills;
			}
			set
			{
				if (value != this._skills)
				{
					this._skills = value;
					base.OnPropertyChangedWithValue<MBBindingList<SkillVM>>(value, "Skills");
				}
			}
		}

		// Token: 0x170009C8 RID: 2504
		// (get) Token: 0x06001C97 RID: 7319 RVA: 0x000677C1 File Offset: 0x000659C1
		// (set) Token: 0x06001C98 RID: 7320 RVA: 0x000677C9 File Offset: 0x000659C9
		[DataSourceProperty]
		public MBBindingList<StringPairItemVM> CharacterStats
		{
			get
			{
				return this._characterStats;
			}
			set
			{
				if (value != this._characterStats)
				{
					this._characterStats = value;
					base.OnPropertyChangedWithValue<MBBindingList<StringPairItemVM>>(value, "CharacterStats");
				}
			}
		}

		// Token: 0x170009C9 RID: 2505
		// (get) Token: 0x06001C99 RID: 7321 RVA: 0x000677E7 File Offset: 0x000659E7
		// (set) Token: 0x06001C9A RID: 7322 RVA: 0x000677EF File Offset: 0x000659EF
		[DataSourceProperty]
		public MBBindingList<CharacterAttributeItemVM> Attributes
		{
			get
			{
				return this._attributes;
			}
			set
			{
				if (value != this._attributes)
				{
					this._attributes = value;
					base.OnPropertyChangedWithValue<MBBindingList<CharacterAttributeItemVM>>(value, "Attributes");
				}
			}
		}

		// Token: 0x170009CA RID: 2506
		// (get) Token: 0x06001C9B RID: 7323 RVA: 0x0006780D File Offset: 0x00065A0D
		// (set) Token: 0x06001C9C RID: 7324 RVA: 0x00067815 File Offset: 0x00065A15
		[DataSourceProperty]
		public MBBindingList<EncyclopediaTraitItemVM> Traits
		{
			get
			{
				return this._traits;
			}
			set
			{
				if (value != this._traits)
				{
					this._traits = value;
					base.OnPropertyChangedWithValue<MBBindingList<EncyclopediaTraitItemVM>>(value, "Traits");
				}
			}
		}

		// Token: 0x170009CB RID: 2507
		// (get) Token: 0x06001C9D RID: 7325 RVA: 0x00067833 File Offset: 0x00065A33
		// (set) Token: 0x06001C9E RID: 7326 RVA: 0x0006783B File Offset: 0x00065A3B
		[DataSourceProperty]
		public PerkSelectionVM PerkSelection
		{
			get
			{
				return this._perkSelection;
			}
			set
			{
				if (value != this._perkSelection)
				{
					this._perkSelection = value;
					base.OnPropertyChangedWithValue<PerkSelectionVM>(value, "PerkSelection");
				}
			}
		}

		// Token: 0x170009CC RID: 2508
		// (get) Token: 0x06001C9F RID: 7327 RVA: 0x00067859 File Offset: 0x00065A59
		// (set) Token: 0x06001CA0 RID: 7328 RVA: 0x00067861 File Offset: 0x00065A61
		[DataSourceProperty]
		public SkillVM CurrentSkill
		{
			get
			{
				return this._currentSkill;
			}
			set
			{
				if (value != this._currentSkill)
				{
					this._currentSkill = value;
					base.OnPropertyChangedWithValue<SkillVM>(value, "CurrentSkill");
				}
			}
		}

		// Token: 0x170009CD RID: 2509
		// (get) Token: 0x06001CA1 RID: 7329 RVA: 0x0006787F File Offset: 0x00065A7F
		// (set) Token: 0x06001CA2 RID: 7330 RVA: 0x00067887 File Offset: 0x00065A87
		[DataSourceProperty]
		public CharacterAttributeItemVM CurrentInspectedAttribute
		{
			get
			{
				return this._currentInspectedAttribute;
			}
			set
			{
				if (value != this._currentInspectedAttribute)
				{
					this._currentInspectedAttribute = value;
					base.OnPropertyChangedWithValue<CharacterAttributeItemVM>(value, "CurrentInspectedAttribute");
				}
			}
		}

		// Token: 0x170009CE RID: 2510
		// (get) Token: 0x06001CA3 RID: 7331 RVA: 0x000678A5 File Offset: 0x00065AA5
		// (set) Token: 0x06001CA4 RID: 7332 RVA: 0x000678AD File Offset: 0x00065AAD
		[DataSourceProperty]
		public string FocusPointsText
		{
			get
			{
				return this._focusPointsText;
			}
			set
			{
				if (value != this._focusPointsText)
				{
					this._focusPointsText = value;
					base.OnPropertyChangedWithValue<string>(value, "FocusPointsText");
				}
			}
		}

		// Token: 0x170009CF RID: 2511
		// (get) Token: 0x06001CA5 RID: 7333 RVA: 0x000678D0 File Offset: 0x00065AD0
		// (set) Token: 0x06001CA6 RID: 7334 RVA: 0x000678D8 File Offset: 0x00065AD8
		[DataSourceProperty]
		public string LevelProgressText
		{
			get
			{
				return this._levelProgressText;
			}
			set
			{
				if (value != this._levelProgressText)
				{
					this._levelProgressText = value;
					base.OnPropertyChangedWithValue<string>(value, "LevelProgressText");
				}
			}
		}

		// Token: 0x170009D0 RID: 2512
		// (get) Token: 0x06001CA7 RID: 7335 RVA: 0x000678FB File Offset: 0x00065AFB
		// (set) Token: 0x06001CA8 RID: 7336 RVA: 0x00067903 File Offset: 0x00065B03
		[DataSourceProperty]
		public HeroViewModel HeroCharacter
		{
			get
			{
				return this._heroCharacter;
			}
			set
			{
				if (value != this._heroCharacter)
				{
					this._heroCharacter = value;
					base.OnPropertyChangedWithValue<HeroViewModel>(value, "HeroCharacter");
				}
			}
		}

		// Token: 0x170009D1 RID: 2513
		// (get) Token: 0x06001CA9 RID: 7337 RVA: 0x00067921 File Offset: 0x00065B21
		// (set) Token: 0x06001CAA RID: 7338 RVA: 0x00067929 File Offset: 0x00065B29
		[DataSourceProperty]
		public bool IsInspectingAnAttribute
		{
			get
			{
				return this._isInspectingAnAttribute;
			}
			set
			{
				if (value != this._isInspectingAnAttribute)
				{
					this._isInspectingAnAttribute = value;
					base.OnPropertyChangedWithValue(value, "IsInspectingAnAttribute");
				}
			}
		}

		// Token: 0x170009D2 RID: 2514
		// (get) Token: 0x06001CAB RID: 7339 RVA: 0x00067947 File Offset: 0x00065B47
		// (set) Token: 0x06001CAC RID: 7340 RVA: 0x0006794F File Offset: 0x00065B4F
		[DataSourceProperty]
		public int LevelProgressPercentage
		{
			get
			{
				return this._levelProgressPercentage;
			}
			set
			{
				if (value != this._levelProgressPercentage)
				{
					this._levelProgressPercentage = value;
					base.OnPropertyChangedWithValue(value, "LevelProgressPercentage");
				}
			}
		}

		// Token: 0x170009D3 RID: 2515
		// (get) Token: 0x06001CAD RID: 7341 RVA: 0x0006796D File Offset: 0x00065B6D
		// (set) Token: 0x06001CAE RID: 7342 RVA: 0x00067975 File Offset: 0x00065B75
		[DataSourceProperty]
		public int CurrentTotalSkill
		{
			get
			{
				return this._currentTotalSkill;
			}
			set
			{
				if (value != this._currentTotalSkill)
				{
					this._currentTotalSkill = value;
					base.OnPropertyChangedWithValue(value, "CurrentTotalSkill");
				}
			}
		}

		// Token: 0x170009D4 RID: 2516
		// (get) Token: 0x06001CAF RID: 7343 RVA: 0x00067993 File Offset: 0x00065B93
		// (set) Token: 0x06001CB0 RID: 7344 RVA: 0x0006799B File Offset: 0x00065B9B
		[DataSourceProperty]
		public int SkillPointsRequiredForCurrentLevel
		{
			get
			{
				return this._skillPointsRequiredForCurrentLevel;
			}
			set
			{
				if (value != this._skillPointsRequiredForCurrentLevel)
				{
					this._skillPointsRequiredForCurrentLevel = value;
					base.OnPropertyChangedWithValue(value, "SkillPointsRequiredForCurrentLevel");
				}
			}
		}

		// Token: 0x170009D5 RID: 2517
		// (get) Token: 0x06001CB1 RID: 7345 RVA: 0x000679B9 File Offset: 0x00065BB9
		// (set) Token: 0x06001CB2 RID: 7346 RVA: 0x000679C1 File Offset: 0x00065BC1
		[DataSourceProperty]
		public int SkillPointsRequiredForNextLevel
		{
			get
			{
				return this._skillPointsRequiredForNextLevel;
			}
			set
			{
				if (value != this._skillPointsRequiredForNextLevel)
				{
					this._skillPointsRequiredForNextLevel = value;
					base.OnPropertyChangedWithValue(value, "SkillPointsRequiredForNextLevel");
				}
			}
		}

		// Token: 0x170009D6 RID: 2518
		// (get) Token: 0x06001CB3 RID: 7347 RVA: 0x000679DF File Offset: 0x00065BDF
		// (set) Token: 0x06001CB4 RID: 7348 RVA: 0x000679E7 File Offset: 0x00065BE7
		[DataSourceProperty]
		public int UnspentCharacterPoints
		{
			get
			{
				return this._unspentCharacterPoints;
			}
			set
			{
				if (value != this._unspentCharacterPoints)
				{
					this._unspentCharacterPoints = value;
					base.OnPropertyChangedWithValue(value, "UnspentCharacterPoints");
				}
			}
		}

		// Token: 0x170009D7 RID: 2519
		// (get) Token: 0x06001CB5 RID: 7349 RVA: 0x00067A05 File Offset: 0x00065C05
		// (set) Token: 0x06001CB6 RID: 7350 RVA: 0x00067A0D File Offset: 0x00065C0D
		[DataSourceProperty]
		public int UnspentAttributePoints
		{
			get
			{
				return this._unspentAttributePoints;
			}
			set
			{
				if (value != this._unspentAttributePoints)
				{
					this._unspentAttributePoints = value;
					base.OnPropertyChangedWithValue(value, "UnspentAttributePoints");
				}
			}
		}

		// Token: 0x170009D8 RID: 2520
		// (get) Token: 0x06001CB7 RID: 7351 RVA: 0x00067A2B File Offset: 0x00065C2B
		// (set) Token: 0x06001CB8 RID: 7352 RVA: 0x00067A33 File Offset: 0x00065C33
		[DataSourceProperty]
		public HintViewModel LevelHint
		{
			get
			{
				return this._levelHint;
			}
			set
			{
				if (value != this._levelHint)
				{
					this._levelHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "LevelHint");
				}
			}
		}

		// Token: 0x170009D9 RID: 2521
		// (get) Token: 0x06001CB9 RID: 7353 RVA: 0x00067A51 File Offset: 0x00065C51
		// (set) Token: 0x06001CBA RID: 7354 RVA: 0x00067A59 File Offset: 0x00065C59
		[DataSourceProperty]
		public string HeroNameText
		{
			get
			{
				return this._heroNameText;
			}
			set
			{
				if (value != this._heroNameText)
				{
					this._heroNameText = value;
					base.OnPropertyChangedWithValue<string>(value, "HeroNameText");
				}
			}
		}

		// Token: 0x170009DA RID: 2522
		// (get) Token: 0x06001CBB RID: 7355 RVA: 0x00067A7C File Offset: 0x00065C7C
		// (set) Token: 0x06001CBC RID: 7356 RVA: 0x00067A84 File Offset: 0x00065C84
		[DataSourceProperty]
		public string HeroInfoText
		{
			get
			{
				return this._heroInfoText;
			}
			set
			{
				if (value != this._heroInfoText)
				{
					this._heroInfoText = value;
					base.OnPropertyChangedWithValue<string>(value, "HeroInfoText");
				}
			}
		}

		// Token: 0x170009DB RID: 2523
		// (get) Token: 0x06001CBD RID: 7357 RVA: 0x00067AA7 File Offset: 0x00065CA7
		// (set) Token: 0x06001CBE RID: 7358 RVA: 0x00067AAF File Offset: 0x00065CAF
		[DataSourceProperty]
		public string HeroLevelText
		{
			get
			{
				return this._heroLevelText;
			}
			set
			{
				if (value != this._heroLevelText)
				{
					this._heroLevelText = value;
					base.OnPropertyChangedWithValue<string>(value, "HeroLevelText");
				}
			}
		}

		// Token: 0x04000D7B RID: 3451
		private readonly IHeroDeveloper _developer;

		// Token: 0x04000D7C RID: 3452
		private MBBindingList<SkillVM> _skills;

		// Token: 0x04000D7D RID: 3453
		private PerkSelectionVM _perkSelection;

		// Token: 0x04000D7E RID: 3454
		private HeroViewModel _heroCharacter;

		// Token: 0x04000D7F RID: 3455
		private int _skillPointsRequiredForCurrentLevel;

		// Token: 0x04000D80 RID: 3456
		private int _skillPointsRequiredForNextLevel;

		// Token: 0x04000D81 RID: 3457
		private int _currentTotalSkill;

		// Token: 0x04000D82 RID: 3458
		private int _levelProgressPercentage;

		// Token: 0x04000D83 RID: 3459
		private int _unspentCharacterPoints;

		// Token: 0x04000D84 RID: 3460
		private int _unspentAttributePoints;

		// Token: 0x04000D85 RID: 3461
		private string _levelProgressText;

		// Token: 0x04000D86 RID: 3462
		private string _heroNameText;

		// Token: 0x04000D87 RID: 3463
		private string _heroInfoText;

		// Token: 0x04000D88 RID: 3464
		private bool _isInspectingAnAttribute;

		// Token: 0x04000D89 RID: 3465
		private HintViewModel _levelHint;

		// Token: 0x04000D8A RID: 3466
		private SkillVM _currentSkill;

		// Token: 0x04000D8B RID: 3467
		private CharacterAttributeItemVM _currentInspectedAttribute;

		// Token: 0x04000D8C RID: 3468
		private string _heroLevelText;

		// Token: 0x04000D8D RID: 3469
		private string _focusPointsText;

		// Token: 0x04000D8E RID: 3470
		private MBBindingList<StringPairItemVM> _characterStats;

		// Token: 0x04000D8F RID: 3471
		private MBBindingList<CharacterAttributeItemVM> _attributes;

		// Token: 0x04000D90 RID: 3472
		private MBBindingList<EncyclopediaTraitItemVM> _traits;
	}
}
