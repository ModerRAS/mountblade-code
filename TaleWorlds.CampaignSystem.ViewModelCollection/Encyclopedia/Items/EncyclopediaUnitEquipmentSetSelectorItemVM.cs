using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection;
using TaleWorlds.Core.ViewModelCollection.Selector;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia.Items
{
	// Token: 0x020000D1 RID: 209
	public class EncyclopediaUnitEquipmentSetSelectorItemVM : SelectorItemVM
	{
		// Token: 0x170006A2 RID: 1698
		// (get) Token: 0x060013D6 RID: 5078 RVA: 0x0004C0DD File Offset: 0x0004A2DD
		// (set) Token: 0x060013D7 RID: 5079 RVA: 0x0004C0E5 File Offset: 0x0004A2E5
		public Equipment EquipmentSet { get; private set; }

		// Token: 0x060013D8 RID: 5080 RVA: 0x0004C0EE File Offset: 0x0004A2EE
		public EncyclopediaUnitEquipmentSetSelectorItemVM(Equipment equipmentSet, string name = "") : base(name)
		{
			this.EquipmentSet = equipmentSet;
			this.LeftEquipmentList = new MBBindingList<CharacterEquipmentItemVM>();
			this.RightEquipmentList = new MBBindingList<CharacterEquipmentItemVM>();
			this.RefreshEquipment();
		}

		// Token: 0x060013D9 RID: 5081 RVA: 0x0004C11C File Offset: 0x0004A31C
		private void RefreshEquipment()
		{
			this.LeftEquipmentList.Clear();
			this.LeftEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.NumAllWeaponSlots].Item));
			this.LeftEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Cape].Item));
			this.LeftEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Body].Item));
			this.LeftEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Gloves].Item));
			this.LeftEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Leg].Item));
			this.LeftEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.ArmorItemEndSlot].Item));
			this.RightEquipmentList.Clear();
			this.RightEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.WeaponItemBeginSlot].Item));
			this.RightEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Weapon1].Item));
			this.RightEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Weapon2].Item));
			this.RightEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.Weapon3].Item));
			this.RightEquipmentList.Add(new CharacterEquipmentItemVM(this.EquipmentSet[EquipmentIndex.ExtraWeaponSlot].Item));
		}

		// Token: 0x170006A3 RID: 1699
		// (get) Token: 0x060013DA RID: 5082 RVA: 0x0004C2CD File Offset: 0x0004A4CD
		// (set) Token: 0x060013DB RID: 5083 RVA: 0x0004C2D5 File Offset: 0x0004A4D5
		[DataSourceProperty]
		public MBBindingList<CharacterEquipmentItemVM> LeftEquipmentList
		{
			get
			{
				return this._leftEquipmentList;
			}
			set
			{
				if (value != this._leftEquipmentList)
				{
					this._leftEquipmentList = value;
					base.OnPropertyChangedWithValue<MBBindingList<CharacterEquipmentItemVM>>(value, "LeftEquipmentList");
				}
			}
		}

		// Token: 0x170006A4 RID: 1700
		// (get) Token: 0x060013DC RID: 5084 RVA: 0x0004C2F3 File Offset: 0x0004A4F3
		// (set) Token: 0x060013DD RID: 5085 RVA: 0x0004C2FB File Offset: 0x0004A4FB
		[DataSourceProperty]
		public MBBindingList<CharacterEquipmentItemVM> RightEquipmentList
		{
			get
			{
				return this._rightEquipmentList;
			}
			set
			{
				if (value != this._rightEquipmentList)
				{
					this._rightEquipmentList = value;
					base.OnPropertyChangedWithValue<MBBindingList<CharacterEquipmentItemVM>>(value, "RightEquipmentList");
				}
			}
		}

		// Token: 0x0400092C RID: 2348
		private MBBindingList<CharacterEquipmentItemVM> _leftEquipmentList;

		// Token: 0x0400092D RID: 2349
		private MBBindingList<CharacterEquipmentItemVM> _rightEquipmentList;
	}
}
