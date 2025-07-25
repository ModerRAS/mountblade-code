using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.MountAndBlade.CustomBattle.CustomBattle;
using TaleWorlds.MountAndBlade.ViewModelCollection.Input;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x0200000A RID: 10
	public class CustomBattleMenuVM : ViewModel
	{
		// Token: 0x06000068 RID: 104 RVA: 0x000060B0 File Offset: 0x000042B0
		private static CustomBattleCompositionData GetBattleCompositionDataFromCompositionGroup(ArmyCompositionGroupVM compositionGroup)
		{
			return new CustomBattleCompositionData((float)compositionGroup.RangedInfantryComposition.CompositionValue / 100f, (float)compositionGroup.MeleeCavalryComposition.CompositionValue / 100f, (float)compositionGroup.RangedCavalryComposition.CompositionValue / 100f);
		}

		// Token: 0x06000069 RID: 105 RVA: 0x000060F0 File Offset: 0x000042F0
		private static List<BasicCharacterObject>[] GetTroopSelections(ArmyCompositionGroupVM armyComposition)
		{
			List<BasicCharacterObject>[] array = new List<BasicCharacterObject>[4];
			array[0] = (from x in armyComposition.MeleeInfantryComposition.TroopTypes
			where x.IsSelected
			select x.Character).ToList<BasicCharacterObject>();
			array[1] = (from x in armyComposition.RangedInfantryComposition.TroopTypes
			where x.IsSelected
			select x.Character).ToList<BasicCharacterObject>();
			array[2] = (from x in armyComposition.MeleeCavalryComposition.TroopTypes
			where x.IsSelected
			select x.Character).ToList<BasicCharacterObject>();
			array[3] = (from x in armyComposition.RangedCavalryComposition.TroopTypes
			where x.IsSelected
			select x.Character).ToList<BasicCharacterObject>();
			return array;
		}

		// Token: 0x0600006A RID: 106 RVA: 0x00006270 File Offset: 0x00004470
		private static void FillSiegeMachines(List<MissionSiegeWeapon> machines, MBBindingList<CustomBattleSiegeMachineVM> vmMachines)
		{
			foreach (CustomBattleSiegeMachineVM customBattleSiegeMachineVM in vmMachines)
			{
				if (customBattleSiegeMachineVM.SiegeEngineType != null)
				{
					machines.Add(MissionSiegeWeapon.CreateDefaultWeapon(customBattleSiegeMachineVM.SiegeEngineType));
				}
			}
		}

		// Token: 0x0600006B RID: 107 RVA: 0x000062CC File Offset: 0x000044CC
		public CustomBattleMenuVM(CustomBattleState battleState)
		{
			this._customBattleState = battleState;
			this.IsAttackerCustomMachineSelectionEnabled = false;
			this.TroopTypeSelectionPopUp = new TroopTypeSelectionPopUpVM();
			this.PlayerSide = new CustomBattleMenuSideVM(new TextObject("{=BC7n6qxk}PLAYER", null), true, this.TroopTypeSelectionPopUp);
			this.EnemySide = new CustomBattleMenuSideVM(new TextObject("{=35IHscBa}ENEMY", null), false, this.TroopTypeSelectionPopUp);
			this.PlayerSide.OppositeSide = this.EnemySide;
			this.EnemySide.OppositeSide = this.PlayerSide;
			this.MapSelectionGroup = new MapSelectionGroupVM();
			this.GameTypeSelectionGroup = new GameTypeSelectionGroupVM(new Action<CustomBattlePlayerType>(this.OnPlayerTypeChange), new Action<CustomBattleGameType>(this.OnGameTypeChange));
			this.AttackerMeleeMachines = new MBBindingList<CustomBattleSiegeMachineVM>();
			for (int i = 0; i < 3; i++)
			{
				this.AttackerMeleeMachines.Add(new CustomBattleSiegeMachineVM(null, new Action<CustomBattleSiegeMachineVM>(this.OnMeleeMachineSelection), new Action<CustomBattleSiegeMachineVM>(this.OnResetMachineSelection)));
			}
			this.AttackerRangedMachines = new MBBindingList<CustomBattleSiegeMachineVM>();
			for (int j = 0; j < 4; j++)
			{
				this.AttackerRangedMachines.Add(new CustomBattleSiegeMachineVM(null, new Action<CustomBattleSiegeMachineVM>(this.OnAttackerRangedMachineSelection), new Action<CustomBattleSiegeMachineVM>(this.OnResetMachineSelection)));
			}
			this.DefenderMachines = new MBBindingList<CustomBattleSiegeMachineVM>();
			for (int k = 0; k < 4; k++)
			{
				this.DefenderMachines.Add(new CustomBattleSiegeMachineVM(null, new Action<CustomBattleSiegeMachineVM>(this.OnDefenderRangedMachineSelection), new Action<CustomBattleSiegeMachineVM>(this.OnResetMachineSelection)));
			}
			this.RefreshValues();
			this.SetDefaultSiegeMachines();
		}

		// Token: 0x0600006C RID: 108 RVA: 0x00006450 File Offset: 0x00004650
		private void SetDefaultSiegeMachines()
		{
			this.AttackerMeleeMachines[0].SetMachineType(DefaultSiegeEngineTypes.SiegeTower);
			this.AttackerMeleeMachines[1].SetMachineType(DefaultSiegeEngineTypes.Ram);
			this.AttackerMeleeMachines[2].SetMachineType(DefaultSiegeEngineTypes.SiegeTower);
			this.AttackerRangedMachines[0].SetMachineType(DefaultSiegeEngineTypes.Trebuchet);
			this.AttackerRangedMachines[1].SetMachineType(DefaultSiegeEngineTypes.Onager);
			this.AttackerRangedMachines[2].SetMachineType(DefaultSiegeEngineTypes.Onager);
			this.AttackerRangedMachines[3].SetMachineType(DefaultSiegeEngineTypes.FireBallista);
			this.DefenderMachines[0].SetMachineType(DefaultSiegeEngineTypes.FireCatapult);
			this.DefenderMachines[1].SetMachineType(DefaultSiegeEngineTypes.FireCatapult);
			this.DefenderMachines[2].SetMachineType(DefaultSiegeEngineTypes.Catapult);
			this.DefenderMachines[3].SetMachineType(DefaultSiegeEngineTypes.FireBallista);
		}

		// Token: 0x0600006D RID: 109 RVA: 0x0000654F File Offset: 0x0000474F
		public void SetActiveState(bool isActive)
		{
			if (isActive)
			{
				this.EnemySide.UpdateCharacterVisual();
				this.PlayerSide.UpdateCharacterVisual();
				return;
			}
			this.EnemySide.CurrentSelectedCharacter = null;
			this.PlayerSide.CurrentSelectedCharacter = null;
		}

		// Token: 0x0600006E RID: 110 RVA: 0x00006583 File Offset: 0x00004783
		private void OnPlayerTypeChange(CustomBattlePlayerType playerType)
		{
			this.PlayerSide.OnPlayerTypeChange(playerType);
		}

		// Token: 0x0600006F RID: 111 RVA: 0x00006591 File Offset: 0x00004791
		private void OnGameTypeChange(CustomBattleGameType gameType)
		{
			this.MapSelectionGroup.OnGameTypeChange(gameType);
		}

		// Token: 0x06000070 RID: 112 RVA: 0x000065A0 File Offset: 0x000047A0
		public override void RefreshValues()
		{
			base.RefreshValues();
			this.RandomizeButtonText = GameTexts.FindText("str_randomize", null).ToString();
			this.StartButtonText = GameTexts.FindText("str_start", null).ToString();
			this.BackButtonText = GameTexts.FindText("str_back", null).ToString();
			this.TitleText = GameTexts.FindText("str_custom_battle", null).ToString();
			this.EnemySide.RefreshValues();
			this.PlayerSide.RefreshValues();
			this.AttackerMeleeMachines.ApplyActionOnAllItems(delegate(CustomBattleSiegeMachineVM x)
			{
				x.RefreshValues();
			});
			this.AttackerRangedMachines.ApplyActionOnAllItems(delegate(CustomBattleSiegeMachineVM x)
			{
				x.RefreshValues();
			});
			this.DefenderMachines.ApplyActionOnAllItems(delegate(CustomBattleSiegeMachineVM x)
			{
				x.RefreshValues();
			});
			this.MapSelectionGroup.RefreshValues();
			TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this.TroopTypeSelectionPopUp;
			if (troopTypeSelectionPopUp == null)
			{
				return;
			}
			troopTypeSelectionPopUp.RefreshValues();
		}

		// Token: 0x06000071 RID: 113 RVA: 0x000066BA File Offset: 0x000048BA
		private void OnResetMachineSelection(CustomBattleSiegeMachineVM selectedSlot)
		{
			selectedSlot.SetMachineType(null);
		}

		// Token: 0x06000072 RID: 114 RVA: 0x000066C4 File Offset: 0x000048C4
		private void OnMeleeMachineSelection(CustomBattleSiegeMachineVM selectedSlot)
		{
			List<InquiryElement> list = new List<InquiryElement>();
			list.Add(new InquiryElement(null, GameTexts.FindText("str_empty", null).ToString(), null));
			foreach (SiegeEngineType siegeEngineType in CustomBattleData.GetAllAttackerMeleeMachines())
			{
				list.Add(new InquiryElement(siegeEngineType, siegeEngineType.Name.ToString(), null));
			}
			MBInformationManager.ShowMultiSelectionInquiry(new MultiSelectionInquiryData(new TextObject("{=MVOWsP48}Select a Melee Machine", null).ToString(), string.Empty, list, false, 1, 1, GameTexts.FindText("str_done", null).ToString(), "", delegate(List<InquiryElement> selectedElements)
			{
				CustomBattleSiegeMachineVM selectedSlot2 = selectedSlot;
				InquiryElement inquiryElement = selectedElements.FirstOrDefault<InquiryElement>();
				selectedSlot2.SetMachineType(((inquiryElement != null) ? inquiryElement.Identifier : null) as SiegeEngineType);
			}, null, "", false), false, false);
		}

		// Token: 0x06000073 RID: 115 RVA: 0x000067A0 File Offset: 0x000049A0
		private void OnAttackerRangedMachineSelection(CustomBattleSiegeMachineVM selectedSlot)
		{
			List<InquiryElement> list = new List<InquiryElement>();
			list.Add(new InquiryElement(null, GameTexts.FindText("str_empty", null).ToString(), null));
			foreach (SiegeEngineType siegeEngineType in CustomBattleData.GetAllAttackerRangedMachines())
			{
				list.Add(new InquiryElement(siegeEngineType, siegeEngineType.Name.ToString(), null));
			}
			MBInformationManager.ShowMultiSelectionInquiry(new MultiSelectionInquiryData(new TextObject("{=SLZzfNPr}Select a Ranged Machine", null).ToString(), string.Empty, list, false, 1, 1, GameTexts.FindText("str_done", null).ToString(), "", delegate(List<InquiryElement> selectedElements)
			{
				CustomBattleSiegeMachineVM selectedSlot2 = selectedSlot;
				InquiryElement inquiryElement = selectedElements.FirstOrDefault<InquiryElement>();
				selectedSlot2.SetMachineType(((inquiryElement != null) ? inquiryElement.Identifier : null) as SiegeEngineType);
			}, null, "", false), false, false);
		}

		// Token: 0x06000074 RID: 116 RVA: 0x0000687C File Offset: 0x00004A7C
		private void OnDefenderRangedMachineSelection(CustomBattleSiegeMachineVM selectedSlot)
		{
			List<InquiryElement> list = new List<InquiryElement>();
			list.Add(new InquiryElement(null, GameTexts.FindText("str_empty", null).ToString(), null));
			foreach (SiegeEngineType siegeEngineType in CustomBattleData.GetAllDefenderRangedMachines())
			{
				list.Add(new InquiryElement(siegeEngineType, siegeEngineType.Name.ToString(), null));
			}
			MBInformationManager.ShowMultiSelectionInquiry(new MultiSelectionInquiryData(new TextObject("{=SLZzfNPr}Select a Ranged Machine", null).ToString(), string.Empty, list, false, 1, 1, GameTexts.FindText("str_done", null).ToString(), "", delegate(List<InquiryElement> selectedElements)
			{
				CustomBattleSiegeMachineVM selectedSlot2 = selectedSlot;
				InquiryElement inquiryElement = selectedElements.FirstOrDefault<InquiryElement>();
				selectedSlot2.SetMachineType(((inquiryElement != null) ? inquiryElement.Identifier : null) as SiegeEngineType);
			}, null, "", false), false, false);
		}

		// Token: 0x06000075 RID: 117 RVA: 0x00006958 File Offset: 0x00004B58
		private void ExecuteRandomizeAttackerSiegeEngines()
		{
			MBList<SiegeEngineType> mblist = new MBList<SiegeEngineType>();
			mblist.AddRange(CustomBattleData.GetAllAttackerMeleeMachines());
			mblist.Add(null);
			foreach (CustomBattleSiegeMachineVM customBattleSiegeMachineVM in this._attackerMeleeMachines)
			{
				customBattleSiegeMachineVM.SetMachineType(mblist.GetRandomElement<SiegeEngineType>());
			}
			mblist.Clear();
			mblist.AddRange(CustomBattleData.GetAllAttackerRangedMachines());
			mblist.Add(null);
			foreach (CustomBattleSiegeMachineVM customBattleSiegeMachineVM2 in this._attackerRangedMachines)
			{
				customBattleSiegeMachineVM2.SetMachineType(mblist.GetRandomElement<SiegeEngineType>());
			}
		}

		// Token: 0x06000076 RID: 118 RVA: 0x00006A18 File Offset: 0x00004C18
		private void ExecuteRandomizeDefenderSiegeEngines()
		{
			MBList<SiegeEngineType> mblist = new MBList<SiegeEngineType>();
			mblist.AddRange(CustomBattleData.GetAllDefenderRangedMachines());
			mblist.Add(null);
			foreach (CustomBattleSiegeMachineVM customBattleSiegeMachineVM in this._defenderMachines)
			{
				customBattleSiegeMachineVM.SetMachineType(mblist.GetRandomElement<SiegeEngineType>());
			}
		}

		// Token: 0x06000077 RID: 119 RVA: 0x00006A80 File Offset: 0x00004C80
		public void ExecuteBack()
		{
			Debug.Print("EXECUTE BACK - PRESSED", 0, Debug.DebugColor.Green, 17592186044416UL);
			Game.Current.GameStateManager.PopState(0);
		}

		// Token: 0x06000078 RID: 120 RVA: 0x00006AA8 File Offset: 0x00004CA8
		private CustomBattleData PrepareBattleData()
		{
			BasicCharacterObject selectedCharacter = this.PlayerSide.SelectedCharacter;
			BasicCharacterObject selectedCharacter2 = this.EnemySide.SelectedCharacter;
			int num = this.PlayerSide.CompositionGroup.ArmySize;
			int armySize = this.EnemySide.CompositionGroup.ArmySize;
			bool isPlayerAttacker = this.GameTypeSelectionGroup.SelectedPlayerSide == CustomBattlePlayerSide.Attacker;
			bool flag = this.GameTypeSelectionGroup.SelectedPlayerType == CustomBattlePlayerType.Commander;
			BasicCharacterObject playerSideGeneralCharacter = null;
			if (!flag)
			{
				MBList<BasicCharacterObject> mblist = CustomBattleData.Characters.ToMBList<BasicCharacterObject>();
				mblist.Remove(selectedCharacter);
				mblist.Remove(selectedCharacter2);
				playerSideGeneralCharacter = mblist.GetRandomElement<BasicCharacterObject>();
				num--;
			}
			int[] troopCounts = CustomBattleHelper.GetTroopCounts(num, CustomBattleMenuVM.GetBattleCompositionDataFromCompositionGroup(this.PlayerSide.CompositionGroup));
			int[] troopCounts2 = CustomBattleHelper.GetTroopCounts(armySize, CustomBattleMenuVM.GetBattleCompositionDataFromCompositionGroup(this.EnemySide.CompositionGroup));
			List<BasicCharacterObject>[] troopSelections = CustomBattleMenuVM.GetTroopSelections(this.PlayerSide.CompositionGroup);
			List<BasicCharacterObject>[] troopSelections2 = CustomBattleMenuVM.GetTroopSelections(this.EnemySide.CompositionGroup);
			BasicCultureObject faction = this.PlayerSide.FactionSelectionGroup.SelectedItem.Faction;
			BasicCultureObject faction2 = this.EnemySide.FactionSelectionGroup.SelectedItem.Faction;
			CustomBattleCombatant[] customBattleParties = CustomBattleHelper.GetCustomBattleParties(selectedCharacter, playerSideGeneralCharacter, selectedCharacter2, faction, troopCounts, troopSelections, faction2, troopCounts2, troopSelections2, isPlayerAttacker);
			List<MissionSiegeWeapon> list = null;
			List<MissionSiegeWeapon> list2 = null;
			float[] wallHitPointsPercentages = null;
			if (this.GameTypeSelectionGroup.SelectedGameType == CustomBattleGameType.Siege)
			{
				list = new List<MissionSiegeWeapon>();
				list2 = new List<MissionSiegeWeapon>();
				CustomBattleMenuVM.FillSiegeMachines(list, this._attackerMeleeMachines);
				CustomBattleMenuVM.FillSiegeMachines(list, this._attackerRangedMachines);
				CustomBattleMenuVM.FillSiegeMachines(list2, this._defenderMachines);
				wallHitPointsPercentages = CustomBattleHelper.GetWallHitpointPercentages(this.MapSelectionGroup.SelectedWallBreachedCount);
			}
			return CustomBattleHelper.PrepareBattleData(selectedCharacter, playerSideGeneralCharacter, customBattleParties[0], customBattleParties[1], this.GameTypeSelectionGroup.SelectedPlayerSide, this.GameTypeSelectionGroup.SelectedPlayerType, this.GameTypeSelectionGroup.SelectedGameType, this.MapSelectionGroup.SelectedMap.MapId, this.MapSelectionGroup.SelectedSeasonId, (float)this.MapSelectionGroup.SelectedTimeOfDay, list, list2, wallHitPointsPercentages, this.MapSelectionGroup.SelectedSceneLevel, this.MapSelectionGroup.IsSallyOutSelected);
		}

		// Token: 0x06000079 RID: 121 RVA: 0x00006CA0 File Offset: 0x00004EA0
		public void ExecuteStart()
		{
			CustomBattleHelper.StartGame(this.PrepareBattleData());
			Debug.Print("EXECUTE START - PRESSED", 0, Debug.DebugColor.Green, 17592186044416UL);
		}

		// Token: 0x0600007A RID: 122 RVA: 0x00006CC4 File Offset: 0x00004EC4
		public void ExecuteRandomize()
		{
			this.GameTypeSelectionGroup.RandomizeAll();
			this.MapSelectionGroup.RandomizeAll();
			this.PlayerSide.Randomize();
			this.EnemySide.Randomize();
			this.ExecuteRandomizeAttackerSiegeEngines();
			this.ExecuteRandomizeDefenderSiegeEngines();
			Debug.Print("EXECUTE RANDOMIZE - PRESSED", 0, Debug.DebugColor.Green, 17592186044416UL);
		}

		// Token: 0x0600007B RID: 123 RVA: 0x00006D1E File Offset: 0x00004F1E
		private void ExecuteDoneDefenderCustomMachineSelection()
		{
			this.IsDefenderCustomMachineSelectionEnabled = false;
		}

		// Token: 0x0600007C RID: 124 RVA: 0x00006D27 File Offset: 0x00004F27
		private void ExecuteDoneAttackerCustomMachineSelection()
		{
			this.IsAttackerCustomMachineSelectionEnabled = false;
		}

		// Token: 0x0600007D RID: 125 RVA: 0x00006D30 File Offset: 0x00004F30
		public override void OnFinalize()
		{
			base.OnFinalize();
			this.StartInputKey.OnFinalize();
			this.CancelInputKey.OnFinalize();
			this.ResetInputKey.OnFinalize();
			this.RandomizeInputKey.OnFinalize();
			TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this.TroopTypeSelectionPopUp;
			if (troopTypeSelectionPopUp == null)
			{
				return;
			}
			troopTypeSelectionPopUp.OnFinalize();
		}

		// Token: 0x1700001A RID: 26
		// (get) Token: 0x0600007E RID: 126 RVA: 0x00006D7F File Offset: 0x00004F7F
		// (set) Token: 0x0600007F RID: 127 RVA: 0x00006D87 File Offset: 0x00004F87
		[DataSourceProperty]
		public TroopTypeSelectionPopUpVM TroopTypeSelectionPopUp
		{
			get
			{
				return this._troopTypeSelectionPopUp;
			}
			set
			{
				if (value != this._troopTypeSelectionPopUp)
				{
					this._troopTypeSelectionPopUp = value;
					base.OnPropertyChangedWithValue<TroopTypeSelectionPopUpVM>(value, "TroopTypeSelectionPopUp");
				}
			}
		}

		// Token: 0x1700001B RID: 27
		// (get) Token: 0x06000080 RID: 128 RVA: 0x00006DA5 File Offset: 0x00004FA5
		// (set) Token: 0x06000081 RID: 129 RVA: 0x00006DAD File Offset: 0x00004FAD
		[DataSourceProperty]
		public bool IsAttackerCustomMachineSelectionEnabled
		{
			get
			{
				return this._isAttackerCustomMachineSelectionEnabled;
			}
			set
			{
				if (value != this._isAttackerCustomMachineSelectionEnabled)
				{
					this._isAttackerCustomMachineSelectionEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsAttackerCustomMachineSelectionEnabled");
				}
			}
		}

		// Token: 0x1700001C RID: 28
		// (get) Token: 0x06000082 RID: 130 RVA: 0x00006DCB File Offset: 0x00004FCB
		// (set) Token: 0x06000083 RID: 131 RVA: 0x00006DD3 File Offset: 0x00004FD3
		[DataSourceProperty]
		public bool IsDefenderCustomMachineSelectionEnabled
		{
			get
			{
				return this._isDefenderCustomMachineSelectionEnabled;
			}
			set
			{
				if (value != this._isDefenderCustomMachineSelectionEnabled)
				{
					this._isDefenderCustomMachineSelectionEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsDefenderCustomMachineSelectionEnabled");
				}
			}
		}

		// Token: 0x1700001D RID: 29
		// (get) Token: 0x06000084 RID: 132 RVA: 0x00006DF1 File Offset: 0x00004FF1
		// (set) Token: 0x06000085 RID: 133 RVA: 0x00006DF9 File Offset: 0x00004FF9
		[DataSourceProperty]
		public string RandomizeButtonText
		{
			get
			{
				return this._randomizeButtonText;
			}
			set
			{
				if (value != this._randomizeButtonText)
				{
					this._randomizeButtonText = value;
					base.OnPropertyChangedWithValue<string>(value, "RandomizeButtonText");
				}
			}
		}

		// Token: 0x1700001E RID: 30
		// (get) Token: 0x06000086 RID: 134 RVA: 0x00006E1C File Offset: 0x0000501C
		// (set) Token: 0x06000087 RID: 135 RVA: 0x00006E24 File Offset: 0x00005024
		[DataSourceProperty]
		public string TitleText
		{
			get
			{
				return this._titleText;
			}
			set
			{
				if (value != this._titleText)
				{
					this._titleText = value;
					base.OnPropertyChangedWithValue<string>(value, "TitleText");
				}
			}
		}

		// Token: 0x1700001F RID: 31
		// (get) Token: 0x06000088 RID: 136 RVA: 0x00006E47 File Offset: 0x00005047
		// (set) Token: 0x06000089 RID: 137 RVA: 0x00006E4F File Offset: 0x0000504F
		[DataSourceProperty]
		public string BackButtonText
		{
			get
			{
				return this._backButtonText;
			}
			set
			{
				if (value != this._backButtonText)
				{
					this._backButtonText = value;
					base.OnPropertyChangedWithValue<string>(value, "BackButtonText");
				}
			}
		}

		// Token: 0x17000020 RID: 32
		// (get) Token: 0x0600008A RID: 138 RVA: 0x00006E72 File Offset: 0x00005072
		// (set) Token: 0x0600008B RID: 139 RVA: 0x00006E7A File Offset: 0x0000507A
		[DataSourceProperty]
		public string StartButtonText
		{
			get
			{
				return this._startButtonText;
			}
			set
			{
				if (value != this._startButtonText)
				{
					this._startButtonText = value;
					base.OnPropertyChangedWithValue<string>(value, "StartButtonText");
				}
			}
		}

		// Token: 0x17000021 RID: 33
		// (get) Token: 0x0600008C RID: 140 RVA: 0x00006E9D File Offset: 0x0000509D
		// (set) Token: 0x0600008D RID: 141 RVA: 0x00006EA5 File Offset: 0x000050A5
		[DataSourceProperty]
		public CustomBattleMenuSideVM EnemySide
		{
			get
			{
				return this._enemySide;
			}
			set
			{
				if (value != this._enemySide)
				{
					this._enemySide = value;
					base.OnPropertyChangedWithValue<CustomBattleMenuSideVM>(value, "EnemySide");
				}
			}
		}

		// Token: 0x17000022 RID: 34
		// (get) Token: 0x0600008E RID: 142 RVA: 0x00006EC3 File Offset: 0x000050C3
		// (set) Token: 0x0600008F RID: 143 RVA: 0x00006ECB File Offset: 0x000050CB
		[DataSourceProperty]
		public CustomBattleMenuSideVM PlayerSide
		{
			get
			{
				return this._playerSide;
			}
			set
			{
				if (value != this._playerSide)
				{
					this._playerSide = value;
					base.OnPropertyChangedWithValue<CustomBattleMenuSideVM>(value, "PlayerSide");
				}
			}
		}

		// Token: 0x17000023 RID: 35
		// (get) Token: 0x06000090 RID: 144 RVA: 0x00006EE9 File Offset: 0x000050E9
		// (set) Token: 0x06000091 RID: 145 RVA: 0x00006EF1 File Offset: 0x000050F1
		[DataSourceProperty]
		public GameTypeSelectionGroupVM GameTypeSelectionGroup
		{
			get
			{
				return this._gameTypeSelectionGroup;
			}
			set
			{
				if (value != this._gameTypeSelectionGroup)
				{
					this._gameTypeSelectionGroup = value;
					base.OnPropertyChangedWithValue<GameTypeSelectionGroupVM>(value, "GameTypeSelectionGroup");
				}
			}
		}

		// Token: 0x17000024 RID: 36
		// (get) Token: 0x06000092 RID: 146 RVA: 0x00006F0F File Offset: 0x0000510F
		// (set) Token: 0x06000093 RID: 147 RVA: 0x00006F17 File Offset: 0x00005117
		[DataSourceProperty]
		public MapSelectionGroupVM MapSelectionGroup
		{
			get
			{
				return this._mapSelectionGroup;
			}
			set
			{
				if (value != this._mapSelectionGroup)
				{
					this._mapSelectionGroup = value;
					base.OnPropertyChangedWithValue<MapSelectionGroupVM>(value, "MapSelectionGroup");
				}
			}
		}

		// Token: 0x17000025 RID: 37
		// (get) Token: 0x06000094 RID: 148 RVA: 0x00006F35 File Offset: 0x00005135
		// (set) Token: 0x06000095 RID: 149 RVA: 0x00006F3D File Offset: 0x0000513D
		[DataSourceProperty]
		public MBBindingList<CustomBattleSiegeMachineVM> AttackerMeleeMachines
		{
			get
			{
				return this._attackerMeleeMachines;
			}
			set
			{
				if (value != this._attackerMeleeMachines)
				{
					this._attackerMeleeMachines = value;
					base.OnPropertyChangedWithValue<MBBindingList<CustomBattleSiegeMachineVM>>(value, "AttackerMeleeMachines");
				}
			}
		}

		// Token: 0x17000026 RID: 38
		// (get) Token: 0x06000096 RID: 150 RVA: 0x00006F5B File Offset: 0x0000515B
		// (set) Token: 0x06000097 RID: 151 RVA: 0x00006F63 File Offset: 0x00005163
		[DataSourceProperty]
		public MBBindingList<CustomBattleSiegeMachineVM> AttackerRangedMachines
		{
			get
			{
				return this._attackerRangedMachines;
			}
			set
			{
				if (value != this._attackerRangedMachines)
				{
					this._attackerRangedMachines = value;
					base.OnPropertyChangedWithValue<MBBindingList<CustomBattleSiegeMachineVM>>(value, "AttackerRangedMachines");
				}
			}
		}

		// Token: 0x17000027 RID: 39
		// (get) Token: 0x06000098 RID: 152 RVA: 0x00006F81 File Offset: 0x00005181
		// (set) Token: 0x06000099 RID: 153 RVA: 0x00006F89 File Offset: 0x00005189
		[DataSourceProperty]
		public MBBindingList<CustomBattleSiegeMachineVM> DefenderMachines
		{
			get
			{
				return this._defenderMachines;
			}
			set
			{
				if (value != this._defenderMachines)
				{
					this._defenderMachines = value;
					base.OnPropertyChangedWithValue<MBBindingList<CustomBattleSiegeMachineVM>>(value, "DefenderMachines");
				}
			}
		}

		// Token: 0x0600009A RID: 154 RVA: 0x00006FA7 File Offset: 0x000051A7
		public void SetStartInputKey(HotKey hotkey)
		{
			this.StartInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x0600009B RID: 155 RVA: 0x00006FB6 File Offset: 0x000051B6
		public void SetCancelInputKey(HotKey hotkey)
		{
			this.CancelInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
			TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this.TroopTypeSelectionPopUp;
			if (troopTypeSelectionPopUp == null)
			{
				return;
			}
			troopTypeSelectionPopUp.SetCancelInputKey(hotkey);
		}

		// Token: 0x0600009C RID: 156 RVA: 0x00006FD6 File Offset: 0x000051D6
		public void SetResetInputKey(HotKey hotkey)
		{
			this.ResetInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
			TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this.TroopTypeSelectionPopUp;
			if (troopTypeSelectionPopUp == null)
			{
				return;
			}
			troopTypeSelectionPopUp.SetResetInputKey(hotkey);
		}

		// Token: 0x0600009D RID: 157 RVA: 0x00006FF6 File Offset: 0x000051F6
		public void SetRandomizeInputKey(HotKey hotkey)
		{
			this.RandomizeInputKey = InputKeyItemVM.CreateFromHotKey(hotkey, true);
		}

		// Token: 0x17000028 RID: 40
		// (get) Token: 0x0600009E RID: 158 RVA: 0x00007005 File Offset: 0x00005205
		// (set) Token: 0x0600009F RID: 159 RVA: 0x0000700D File Offset: 0x0000520D
		public InputKeyItemVM StartInputKey
		{
			get
			{
				return this._startInputKey;
			}
			set
			{
				if (value != this._startInputKey)
				{
					this._startInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "StartInputKey");
				}
			}
		}

		// Token: 0x17000029 RID: 41
		// (get) Token: 0x060000A0 RID: 160 RVA: 0x0000702B File Offset: 0x0000522B
		// (set) Token: 0x060000A1 RID: 161 RVA: 0x00007033 File Offset: 0x00005233
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

		// Token: 0x1700002A RID: 42
		// (get) Token: 0x060000A2 RID: 162 RVA: 0x00007051 File Offset: 0x00005251
		// (set) Token: 0x060000A3 RID: 163 RVA: 0x00007059 File Offset: 0x00005259
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

		// Token: 0x1700002B RID: 43
		// (get) Token: 0x060000A4 RID: 164 RVA: 0x00007077 File Offset: 0x00005277
		// (set) Token: 0x060000A5 RID: 165 RVA: 0x0000707F File Offset: 0x0000527F
		public InputKeyItemVM RandomizeInputKey
		{
			get
			{
				return this._randomizeInputKey;
			}
			set
			{
				if (value != this._randomizeInputKey)
				{
					this._randomizeInputKey = value;
					base.OnPropertyChangedWithValue<InputKeyItemVM>(value, "RandomizeInputKey");
				}
			}
		}

		// Token: 0x04000054 RID: 84
		private CustomBattleState _customBattleState;

		// Token: 0x04000055 RID: 85
		private TroopTypeSelectionPopUpVM _troopTypeSelectionPopUp;

		// Token: 0x04000056 RID: 86
		private CustomBattleMenuSideVM _enemySide;

		// Token: 0x04000057 RID: 87
		private CustomBattleMenuSideVM _playerSide;

		// Token: 0x04000058 RID: 88
		private bool _isAttackerCustomMachineSelectionEnabled;

		// Token: 0x04000059 RID: 89
		private bool _isDefenderCustomMachineSelectionEnabled;

		// Token: 0x0400005A RID: 90
		private GameTypeSelectionGroupVM _gameTypeSelectionGroup;

		// Token: 0x0400005B RID: 91
		private MapSelectionGroupVM _mapSelectionGroup;

		// Token: 0x0400005C RID: 92
		private string _randomizeButtonText;

		// Token: 0x0400005D RID: 93
		private string _backButtonText;

		// Token: 0x0400005E RID: 94
		private string _startButtonText;

		// Token: 0x0400005F RID: 95
		private string _titleText;

		// Token: 0x04000060 RID: 96
		private MBBindingList<CustomBattleSiegeMachineVM> _attackerMeleeMachines;

		// Token: 0x04000061 RID: 97
		private MBBindingList<CustomBattleSiegeMachineVM> _attackerRangedMachines;

		// Token: 0x04000062 RID: 98
		private MBBindingList<CustomBattleSiegeMachineVM> _defenderMachines;

		// Token: 0x04000063 RID: 99
		private InputKeyItemVM _startInputKey;

		// Token: 0x04000064 RID: 100
		private InputKeyItemVM _cancelInputKey;

		// Token: 0x04000065 RID: 101
		private InputKeyItemVM _resetInputKey;

		// Token: 0x04000066 RID: 102
		private InputKeyItemVM _randomizeInputKey;
	}
}
