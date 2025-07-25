using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.CustomBattle.CustomBattle;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x02000008 RID: 8
	public class ArmyCompositionItemVM : ViewModel
	{
		// Token: 0x06000036 RID: 54 RVA: 0x00005494 File Offset: 0x00003694
		public ArmyCompositionItemVM(ArmyCompositionItemVM.CompositionType type, List<BasicCharacterObject> allCharacterObjects, MBReadOnlyList<SkillObject> allSkills, Action<int, int> onCompositionValueChanged, TroopTypeSelectionPopUpVM troopTypeSelectionPopUp, int[] compositionValues)
		{
			this._allCharacterObjects = allCharacterObjects;
			this._allSkills = allSkills;
			this._onCompositionValueChanged = onCompositionValueChanged;
			this._troopTypeSelectionPopUp = troopTypeSelectionPopUp;
			this._type = type;
			this._compositionValues = compositionValues;
			this._typeIconData = ArmyCompositionItemVM.GetTroopTypeIconData(type, false);
			this.TroopTypes = new MBBindingList<CustomBattleTroopTypeVM>();
			this.InvalidHint = new HintViewModel(new TextObject("{=iSQTtNUD}This faction doesn't have this troop type.", null), null);
			this.AddTroopTypeHint = new HintViewModel(new TextObject("{=eMbuGGus}Select troops to spawn in formation.", null), null);
		}

		// Token: 0x06000037 RID: 55 RVA: 0x0000551A File Offset: 0x0000371A
		public override void RefreshValues()
		{
			base.RefreshValues();
		}

		// Token: 0x06000038 RID: 56 RVA: 0x00005522 File Offset: 0x00003722
		public void SetCurrentSelectedCulture(BasicCultureObject culture)
		{
			this.IsLocked = false;
			this._culture = culture;
			this.PopulateTroopTypes();
		}

		// Token: 0x06000039 RID: 57 RVA: 0x00005538 File Offset: 0x00003738
		public void ExecuteRandomize(int compositionValue)
		{
			this.IsValid = true;
			this.IsLocked = false;
			this.CompositionValue = compositionValue;
			this.IsValid = (this.TroopTypes.Count > 0);
			this.TroopTypes.ApplyActionOnAllItems(delegate(CustomBattleTroopTypeVM x)
			{
				x.ExecuteRandomize();
			});
			if (!this.TroopTypes.Any((CustomBattleTroopTypeVM x) => x.IsSelected) && this.IsValid)
			{
				this.TroopTypes[0].IsSelected = true;
			}
		}

		// Token: 0x0600003A RID: 58 RVA: 0x000055E0 File Offset: 0x000037E0
		public void ExecuteAddTroopTypes()
		{
			string title = GameTexts.FindText("str_custom_battle_choose_troop", this._type.ToString()).ToString();
			TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this._troopTypeSelectionPopUp;
			if (troopTypeSelectionPopUp == null)
			{
				return;
			}
			troopTypeSelectionPopUp.OpenPopUp(title, this.TroopTypes);
		}

		// Token: 0x0600003B RID: 59 RVA: 0x00005625 File Offset: 0x00003825
		public void RefreshCompositionValue()
		{
			base.OnPropertyChanged("CompositionValue");
		}

		// Token: 0x0600003C RID: 60 RVA: 0x00005632 File Offset: 0x00003832
		private void OnValidityChanged(bool value)
		{
			this.IsLocked = false;
			if (!value)
			{
				this.CompositionValue = 0;
			}
			this.IsLocked = !value;
		}

		// Token: 0x0600003D RID: 61 RVA: 0x00005650 File Offset: 0x00003850
		private void PopulateTroopTypes()
		{
			this.TroopTypes.Clear();
			MBReadOnlyList<BasicCharacterObject> defaultCharacters = this.GetDefaultCharacters();
			foreach (BasicCharacterObject basicCharacterObject in this._allCharacterObjects)
			{
				if (this.IsValidUnitItem(basicCharacterObject))
				{
					this.TroopTypes.Add(new CustomBattleTroopTypeVM(basicCharacterObject, new Action<CustomBattleTroopTypeVM>(this._troopTypeSelectionPopUp.OnItemSelectionToggled), this._typeIconData, this._allSkills, defaultCharacters.Contains(basicCharacterObject)));
				}
			}
			this.IsValid = (this.TroopTypes.Count > 0);
			if (this.IsValid)
			{
				if (!this.TroopTypes.Any((CustomBattleTroopTypeVM x) => x.IsDefault))
				{
					this.TroopTypes[0].IsDefault = true;
				}
			}
			this.TroopTypes.ApplyActionOnAllItems(delegate(CustomBattleTroopTypeVM x)
			{
				x.IsSelected = x.IsDefault;
			});
		}

		// Token: 0x0600003E RID: 62 RVA: 0x00005774 File Offset: 0x00003974
		private bool IsValidUnitItem(BasicCharacterObject o)
		{
			if (o == null || this._culture != o.Culture)
			{
				return false;
			}
			switch (this._type)
			{
			case ArmyCompositionItemVM.CompositionType.MeleeInfantry:
				return o.DefaultFormationClass == FormationClass.Infantry || o.DefaultFormationClass == FormationClass.HeavyInfantry;
			case ArmyCompositionItemVM.CompositionType.RangedInfantry:
				return o.DefaultFormationClass == FormationClass.Ranged;
			case ArmyCompositionItemVM.CompositionType.MeleeCavalry:
				return o.DefaultFormationClass == FormationClass.Cavalry || o.DefaultFormationClass == FormationClass.HeavyCavalry || o.DefaultFormationClass == FormationClass.LightCavalry;
			case ArmyCompositionItemVM.CompositionType.RangedCavalry:
				return o.DefaultFormationClass == FormationClass.HorseArcher;
			default:
				return false;
			}
		}

		// Token: 0x0600003F RID: 63 RVA: 0x000057FC File Offset: 0x000039FC
		private MBReadOnlyList<BasicCharacterObject> GetDefaultCharacters()
		{
			MBList<BasicCharacterObject> mblist = new MBList<BasicCharacterObject>();
			FormationClass formation = FormationClass.NumberOfAllFormations;
			switch (this._type)
			{
			case ArmyCompositionItemVM.CompositionType.MeleeInfantry:
				formation = FormationClass.Infantry;
				break;
			case ArmyCompositionItemVM.CompositionType.RangedInfantry:
				formation = FormationClass.Ranged;
				break;
			case ArmyCompositionItemVM.CompositionType.MeleeCavalry:
				formation = FormationClass.Cavalry;
				break;
			case ArmyCompositionItemVM.CompositionType.RangedCavalry:
				formation = FormationClass.HorseArcher;
				break;
			}
			mblist.Add(CustomBattleHelper.GetDefaultTroopOfFormationForFaction(this._culture, formation));
			return mblist;
		}

		// Token: 0x06000040 RID: 64 RVA: 0x00005854 File Offset: 0x00003A54
		public static StringItemWithHintVM GetTroopTypeIconData(ArmyCompositionItemVM.CompositionType type, bool isBig = false)
		{
			TextObject textObject = TextObject.Empty;
			string str;
			switch (type)
			{
			case ArmyCompositionItemVM.CompositionType.MeleeInfantry:
				str = (isBig ? "infantry_big" : "infantry");
				textObject = GameTexts.FindText("str_troop_type_name", "Infantry");
				break;
			case ArmyCompositionItemVM.CompositionType.RangedInfantry:
				str = (isBig ? "bow_big" : "bow");
				textObject = GameTexts.FindText("str_troop_type_name", "Ranged");
				break;
			case ArmyCompositionItemVM.CompositionType.MeleeCavalry:
				str = (isBig ? "cavalry_big" : "cavalry");
				textObject = GameTexts.FindText("str_troop_type_name", "Cavalry");
				break;
			case ArmyCompositionItemVM.CompositionType.RangedCavalry:
				str = (isBig ? "horse_archer_big" : "horse_archer");
				textObject = GameTexts.FindText("str_troop_type_name", "HorseArcher");
				break;
			default:
				return new StringItemWithHintVM("", TextObject.Empty);
			}
			return new StringItemWithHintVM("General\\TroopTypeIcons\\icon_troop_type_" + str, new TextObject("{=!}" + textObject.ToString(), null));
		}

		// Token: 0x1700000A RID: 10
		// (get) Token: 0x06000041 RID: 65 RVA: 0x00005940 File Offset: 0x00003B40
		// (set) Token: 0x06000042 RID: 66 RVA: 0x00005948 File Offset: 0x00003B48
		[DataSourceProperty]
		public MBBindingList<CustomBattleTroopTypeVM> TroopTypes
		{
			get
			{
				return this._troopTypes;
			}
			set
			{
				if (value != this._troopTypes)
				{
					this._troopTypes = value;
					base.OnPropertyChangedWithValue<MBBindingList<CustomBattleTroopTypeVM>>(value, "TroopTypes");
				}
			}
		}

		// Token: 0x1700000B RID: 11
		// (get) Token: 0x06000043 RID: 67 RVA: 0x00005966 File Offset: 0x00003B66
		// (set) Token: 0x06000044 RID: 68 RVA: 0x0000596E File Offset: 0x00003B6E
		[DataSourceProperty]
		public HintViewModel InvalidHint
		{
			get
			{
				return this._invalidHint;
			}
			set
			{
				if (value != this._invalidHint)
				{
					this._invalidHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "InvalidHint");
				}
			}
		}

		// Token: 0x1700000C RID: 12
		// (get) Token: 0x06000045 RID: 69 RVA: 0x0000598C File Offset: 0x00003B8C
		// (set) Token: 0x06000046 RID: 70 RVA: 0x00005994 File Offset: 0x00003B94
		[DataSourceProperty]
		public HintViewModel AddTroopTypeHint
		{
			get
			{
				return this._addTroopTypeHint;
			}
			set
			{
				if (value != this._addTroopTypeHint)
				{
					this._addTroopTypeHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "AddTroopTypeHint");
				}
			}
		}

		// Token: 0x1700000D RID: 13
		// (get) Token: 0x06000047 RID: 71 RVA: 0x000059B2 File Offset: 0x00003BB2
		// (set) Token: 0x06000048 RID: 72 RVA: 0x000059BA File Offset: 0x00003BBA
		[DataSourceProperty]
		public bool IsLocked
		{
			get
			{
				return this._isLocked;
			}
			set
			{
				if (value != this._isLocked)
				{
					this._isLocked = value;
					base.OnPropertyChangedWithValue(value, "IsLocked");
				}
			}
		}

		// Token: 0x1700000E RID: 14
		// (get) Token: 0x06000049 RID: 73 RVA: 0x000059D8 File Offset: 0x00003BD8
		// (set) Token: 0x0600004A RID: 74 RVA: 0x000059E0 File Offset: 0x00003BE0
		[DataSourceProperty]
		public bool IsValid
		{
			get
			{
				return this._isValid;
			}
			set
			{
				if (value != this._isValid)
				{
					this._isValid = value;
					base.OnPropertyChangedWithValue(value, "IsValid");
				}
				this.OnValidityChanged(value);
			}
		}

		// Token: 0x1700000F RID: 15
		// (get) Token: 0x0600004B RID: 75 RVA: 0x00005A05 File Offset: 0x00003C05
		// (set) Token: 0x0600004C RID: 76 RVA: 0x00005A14 File Offset: 0x00003C14
		[DataSourceProperty]
		public int CompositionValue
		{
			get
			{
				return this._compositionValues[(int)this._type];
			}
			set
			{
				if (value != this._compositionValues[(int)this._type])
				{
					this._onCompositionValueChanged(value, (int)this._type);
				}
			}
		}

		// Token: 0x0400003A RID: 58
		private readonly MBReadOnlyList<SkillObject> _allSkills;

		// Token: 0x0400003B RID: 59
		private readonly List<BasicCharacterObject> _allCharacterObjects;

		// Token: 0x0400003C RID: 60
		private readonly Action<int, int> _onCompositionValueChanged;

		// Token: 0x0400003D RID: 61
		private readonly TroopTypeSelectionPopUpVM _troopTypeSelectionPopUp;

		// Token: 0x0400003E RID: 62
		private BasicCultureObject _culture;

		// Token: 0x0400003F RID: 63
		private readonly StringItemWithHintVM _typeIconData;

		// Token: 0x04000040 RID: 64
		private readonly ArmyCompositionItemVM.CompositionType _type;

		// Token: 0x04000041 RID: 65
		private readonly int[] _compositionValues;

		// Token: 0x04000042 RID: 66
		private MBBindingList<CustomBattleTroopTypeVM> _troopTypes;

		// Token: 0x04000043 RID: 67
		private HintViewModel _invalidHint;

		// Token: 0x04000044 RID: 68
		private HintViewModel _addTroopTypeHint;

		// Token: 0x04000045 RID: 69
		private bool _isLocked;

		// Token: 0x04000046 RID: 70
		private bool _isValid;

		// Token: 0x02000031 RID: 49
		public enum CompositionType
		{
			// Token: 0x0400014F RID: 335
			MeleeInfantry,
			// Token: 0x04000150 RID: 336
			RangedInfantry,
			// Token: 0x04000151 RID: 337
			MeleeCavalry,
			// Token: 0x04000152 RID: 338
			RangedCavalry
		}
	}
}
