using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem.Encounters;
using TaleWorlds.CampaignSystem.MapEvents;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Generic;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.Core.ViewModelCollection.Tutorial;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Overlay
{
	// Token: 0x020000A3 RID: 163
	[MenuOverlay("ArmyMenuOverlay")]
	public class ArmyMenuOverlayVM : GameMenuOverlay
	{
		// Token: 0x17000556 RID: 1366
		// (get) Token: 0x06001027 RID: 4135 RVA: 0x0003EC36 File Offset: 0x0003CE36
		private IEnumerable<MobileParty> _mergedPartiesAndLeaderParty
		{
			get
			{
				yield return this._army.LeaderParty;
				foreach (MobileParty mobileParty in this._army.LeaderParty.AttachedParties)
				{
					yield return mobileParty;
				}
				List<MobileParty>.Enumerator enumerator = default(List<MobileParty>.Enumerator);
				yield break;
				yield break;
			}
		}

		// Token: 0x06001028 RID: 4136 RVA: 0x0003EC48 File Offset: 0x0003CE48
		public ArmyMenuOverlayVM()
		{
			this.PartyList = new MBBindingList<GameMenuPartyItemVM>();
			base.CurrentOverlayType = 2;
			base.IsInitializationOver = false;
			this._army = (MobileParty.MainParty.Army ?? MobileParty.MainParty.TargetParty.Army);
			this._savedPartyList = new List<MobileParty>();
			this.CohesionHint = new BasicTooltipViewModel();
			this.ManCountHint = new BasicTooltipViewModel();
			this.FoodHint = new BasicTooltipViewModel();
			this.TutorialNotification = new ElementNotificationVM();
			this.ManageArmyHint = new HintViewModel();
			this.Refresh();
			this._contextMenuItem = null;
			CampaignEvents.ArmyOverlaySetDirtyEvent.AddNonSerializedListener(this, new Action(this.Refresh));
			CampaignEvents.PartyAttachedAnotherParty.AddNonSerializedListener(this, new Action<MobileParty>(this.OnPartyAttachedAnotherParty));
			CampaignEvents.OnTroopRecruitedEvent.AddNonSerializedListener(this, new Action<Hero, Settlement, Hero, CharacterObject, int>(this.OnTroopRecruited));
			Game.Current.EventManager.RegisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
			this._cohesionConceptObj = Concept.All.SingleOrDefault((Concept c) => c.StringId == "str_game_objects_army_cohesion");
			base.IsInitializationOver = true;
		}

		// Token: 0x06001029 RID: 4137 RVA: 0x0003ED7D File Offset: 0x0003CF7D
		public override void RefreshValues()
		{
			base.RefreshValues();
			ElementNotificationVM tutorialNotification = this.TutorialNotification;
			if (tutorialNotification != null)
			{
				tutorialNotification.RefreshValues();
			}
			this.Refresh();
		}

		// Token: 0x0600102A RID: 4138 RVA: 0x0003ED9C File Offset: 0x0003CF9C
		public override void OnFinalize()
		{
			base.OnFinalize();
			CampaignEvents.ArmyOverlaySetDirtyEvent.ClearListeners(this);
			CampaignEvents.PartyAttachedAnotherParty.ClearListeners(this);
			CampaignEvents.OnTroopRecruitedEvent.ClearListeners(this);
			Game.Current.EventManager.UnregisterEvent<TutorialNotificationElementChangeEvent>(new Action<TutorialNotificationElementChangeEvent>(this.OnTutorialNotificationElementIDChange));
		}

		// Token: 0x0600102B RID: 4139 RVA: 0x0003EDEC File Offset: 0x0003CFEC
		protected override void ExecuteOnSetAsActiveContextMenuItem(GameMenuPartyItemVM troop)
		{
			base.ExecuteOnSetAsActiveContextMenuItem(troop);
			base.ContextList.Clear();
			MobileParty mobileParty = this._contextMenuItem.Party.MobileParty;
			if (((mobileParty != null) ? mobileParty.Army : null) != null && this._contextMenuItem.Party.MobileParty.Army.LeaderParty == MobileParty.MainParty && this._contextMenuItem.Party.MapEvent == null && this._contextMenuItem.Party != this._contextMenuItem.Party.MobileParty.Army.LeaderParty.Party)
			{
				TextObject hintText;
				bool mapScreenActionIsEnabledWithReason = CampaignUIHelper.GetMapScreenActionIsEnabledWithReason(out hintText);
				base.ContextList.Add(new StringItemWithEnabledAndHintVM(new Action<object>(base.ExecuteTroopAction), GameTexts.FindText("str_menu_overlay_context_list", GameMenuOverlay.MenuOverlayContextList.ArmyDismiss.ToString()).ToString(), mapScreenActionIsEnabledWithReason, GameMenuOverlay.MenuOverlayContextList.ArmyDismiss, hintText));
			}
			MobileParty mobileParty2 = troop.Party.MobileParty;
			bool flag = mobileParty2 != null && mobileParty2.Position2D.DistanceSquared(MobileParty.MainParty.Position2D) < 9f;
			bool flag2;
			if (PlayerEncounter.Current != null)
			{
				PlayerEncounter playerEncounter = PlayerEncounter.Current;
				flag2 = (playerEncounter != null && !playerEncounter.IsEnemy);
			}
			else
			{
				flag2 = true;
			}
			bool flag3 = flag2;
			if (this._contextMenuItem.Party.LeaderHero != null && flag && flag3 && this._contextMenuItem.Party != PartyBase.MainParty)
			{
				PlayerEncounter playerEncounter2 = PlayerEncounter.Current;
				if (((playerEncounter2 != null) ? playerEncounter2.BattleSimulation : null) == null)
				{
					base.ContextList.Add(new StringItemWithEnabledAndHintVM(new Action<object>(base.ExecuteTroopAction), GameTexts.FindText("str_menu_overlay_context_list", GameMenuOverlay.MenuOverlayContextList.DonateTroops.ToString()).ToString(), true, GameMenuOverlay.MenuOverlayContextList.DonateTroops, null));
					if (MobileParty.MainParty.CurrentSettlement == null && LocationComplex.Current == null)
					{
						base.ContextList.Add(new StringItemWithEnabledAndHintVM(new Action<object>(base.ExecuteTroopAction), GameTexts.FindText("str_menu_overlay_context_list", GameMenuOverlay.MenuOverlayContextList.ConverseWithLeader.ToString()).ToString(), true, GameMenuOverlay.MenuOverlayContextList.ConverseWithLeader, null));
					}
				}
			}
			base.ContextList.Add(new StringItemWithEnabledAndHintVM(new Action<object>(base.ExecuteTroopAction), GameTexts.FindText("str_menu_overlay_context_list", GameMenuOverlay.MenuOverlayContextList.Encyclopedia.ToString()).ToString(), true, GameMenuOverlay.MenuOverlayContextList.Encyclopedia, null));
			CharacterObject characterObject;
			if ((characterObject = this._contextMenuItem.Character) == null)
			{
				Hero leaderHero = this._contextMenuItem.Party.LeaderHero;
				characterObject = ((leaderHero != null) ? leaderHero.CharacterObject : null);
			}
			CharacterObject characterObject2 = characterObject;
			if (characterObject2 == null)
			{
				Debug.FailedAssert("ArmyMenuOverlayVM.ExecuteOnSetAsActiveContextMenuItem called on party with no leader hero: " + this._contextMenuItem.Party.Name, "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem.ViewModelCollection\\GameMenu\\Overlay\\ArmyMenuOverlayVM.cs", "ExecuteOnSetAsActiveContextMenuItem", 134);
				return;
			}
			CampaignEventDispatcher.Instance.OnCharacterPortraitPopUpOpened(characterObject2);
		}

		// Token: 0x0600102C RID: 4140 RVA: 0x0003F0C0 File Offset: 0x0003D2C0
		public override void OnFrameTick(float dt)
		{
			base.OnFrameTick(dt);
			TextObject hintText;
			this.CanManageArmy = this.GetCanManageArmyWithReason(out hintText);
			this.ManageArmyHint.HintText = hintText;
			for (int i = 0; i < this.PartyList.Count; i++)
			{
				this.PartyList[i].RefreshQuestStatus();
			}
			if (this._isVisualsDirty)
			{
				this.RefreshVisualsOfItems();
				this._isVisualsDirty = false;
			}
		}

		// Token: 0x0600102D RID: 4141 RVA: 0x0003F12C File Offset: 0x0003D32C
		private bool GetCanManageArmyWithReason(out TextObject reasonText)
		{
			if (Hero.MainHero.IsPrisoner)
			{
				reasonText = GameTexts.FindText("str_action_disabled_reason_prisoner", null);
				return false;
			}
			if (PlayerEncounter.Current != null)
			{
				if (PlayerEncounter.EncounterSettlement == null)
				{
					reasonText = GameTexts.FindText("str_action_disabled_reason_encounter", null);
					return false;
				}
				Village village = PlayerEncounter.EncounterSettlement.Village;
				if (village != null && village.VillageState == Village.VillageStates.BeingRaided && MobileParty.MainParty.MapEvent != null && MobileParty.MainParty.MapEvent.IsRaid)
				{
					reasonText = GameTexts.FindText("str_action_disabled_reason_raid", null);
					return false;
				}
			}
			if (!this.IsPlayerArmyLeader)
			{
				reasonText = TextObject.Empty;
				return false;
			}
			if (MapEvent.PlayerMapEvent != null)
			{
				reasonText = GameTexts.FindText("str_cannot_manage_army_while_in_event", null);
				return false;
			}
			reasonText = TextObject.Empty;
			return true;
		}

		// Token: 0x0600102E RID: 4142 RVA: 0x0003F1E7 File Offset: 0x0003D3E7
		public sealed override void Refresh()
		{
			if (PartyBase.MainParty.MobileParty.Army != null)
			{
				base.IsInitializationOver = false;
				this.UpdateLists();
				this.UpdateProperties();
				base.IsInitializationOver = true;
			}
		}

		// Token: 0x0600102F RID: 4143 RVA: 0x0003F214 File Offset: 0x0003D414
		private void UpdateProperties()
		{
			MBTextManager.SetTextVariable("newline", "\n", false);
			float num = this._army.LeaderParty.Food;
			foreach (MobileParty mobileParty in this._army.LeaderParty.AttachedParties)
			{
				num += mobileParty.Food;
			}
			this.Food = (int)num;
			this.Cohesion = (int)MobileParty.MainParty.Army.Cohesion;
			this.ManCountText = CampaignUIHelper.GetPartyNameplateText(this._army.LeaderParty, true);
			this.FoodHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetArmyFoodTooltip(this._army));
			this.CohesionHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetArmyCohesionTooltip(this._army));
			this.ManCountHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetArmyManCountTooltip(this._army));
			this.IsCohesionWarningEnabled = (MobileParty.MainParty.Army.Cohesion <= 30f);
			this.IsPlayerArmyLeader = (MobileParty.MainParty.Army.LeaderParty == MobileParty.MainParty);
		}

		// Token: 0x06001030 RID: 4144 RVA: 0x0003F34C File Offset: 0x0003D54C
		private void UpdateLists()
		{
			List<MobileParty> list = this._army.Parties.Except(this._savedPartyList).ToList<MobileParty>();
			list.Remove(this._army.LeaderParty);
			List<MobileParty> list2 = this._savedPartyList.Except(this._army.Parties).ToList<MobileParty>();
			this._savedPartyList = this._army.Parties.ToList<MobileParty>();
			foreach (MobileParty mobileParty in list2)
			{
				for (int i = this.PartyList.Count - 1; i >= 0; i--)
				{
					if (this.PartyList[i].Party == mobileParty.Party)
					{
						this.PartyList.RemoveAt(i);
						break;
					}
				}
			}
			foreach (MobileParty mobileParty2 in list)
			{
				this.PartyList.Add(new GameMenuPartyItemVM(new Action<GameMenuPartyItemVM>(this.ExecuteOnSetAsActiveContextMenuItem), mobileParty2.Party, true));
			}
			foreach (GameMenuPartyItemVM gameMenuPartyItemVM in this.PartyList)
			{
				gameMenuPartyItemVM.RefreshProperties();
			}
			if (this.PartyList.Count > 0 && this.PartyList[0].Party != this._army.LeaderParty.Party)
			{
				if (this.PartyList.SingleOrDefault((GameMenuPartyItemVM p) => p.Party == this._army.LeaderParty.Party) != null)
				{
					int index = this.PartyList.IndexOf(this.PartyList.SingleOrDefault((GameMenuPartyItemVM p) => p.Party == this._army.LeaderParty.Party));
					this.PartyList.RemoveAt(index);
				}
				GameMenuPartyItemVM gameMenuPartyItemVM2 = new GameMenuPartyItemVM(new Action<GameMenuPartyItemVM>(this.ExecuteOnSetAsActiveContextMenuItem), this._army.LeaderParty.Party, true)
				{
					IsLeader = true
				};
				this.PartyList.Insert(0, gameMenuPartyItemVM2);
				gameMenuPartyItemVM2.RefreshProperties();
			}
		}

		// Token: 0x06001031 RID: 4145 RVA: 0x0003F58C File Offset: 0x0003D78C
		public void ExecuteOpenArmyManagement()
		{
			MobileParty mainParty = MobileParty.MainParty;
			if (((mainParty != null) ? mainParty.Army : null) != null)
			{
				MobileParty leaderParty = MobileParty.MainParty.Army.LeaderParty;
				if (leaderParty != null && leaderParty.IsMainParty)
				{
					Action openArmyManagement = this.OpenArmyManagement;
					if (openArmyManagement == null)
					{
						return;
					}
					openArmyManagement();
				}
			}
		}

		// Token: 0x06001032 RID: 4146 RVA: 0x0003F5D9 File Offset: 0x0003D7D9
		private void ExecuteCohesionLink()
		{
			if (this._cohesionConceptObj != null)
			{
				Campaign.Current.EncyclopediaManager.GoToLink(this._cohesionConceptObj.EncyclopediaLink);
				return;
			}
			Debug.FailedAssert("Couldn't find Cohesion encyclopedia page", "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.CampaignSystem.ViewModelCollection\\GameMenu\\Overlay\\ArmyMenuOverlayVM.cs", "ExecuteCohesionLink", 302);
		}

		// Token: 0x06001033 RID: 4147 RVA: 0x0003F618 File Offset: 0x0003D818
		private void OnTutorialNotificationElementIDChange(TutorialNotificationElementChangeEvent obj)
		{
			if (obj.NewNotificationElementID != this._latestTutorialElementID)
			{
				if (this._latestTutorialElementID != null)
				{
					this.TutorialNotification.ElementID = string.Empty;
				}
				this._latestTutorialElementID = obj.NewNotificationElementID;
				if (this._latestTutorialElementID != null)
				{
					this.TutorialNotification.ElementID = this._latestTutorialElementID;
				}
			}
		}

		// Token: 0x06001034 RID: 4148 RVA: 0x0003F678 File Offset: 0x0003D878
		private void RefreshVisualsOfItems()
		{
			for (int i = 0; i < this.PartyList.Count; i++)
			{
				this.PartyList[i].RefreshVisual();
			}
		}

		// Token: 0x06001035 RID: 4149 RVA: 0x0003F6AC File Offset: 0x0003D8AC
		private void OnPartyAttachedAnotherParty(MobileParty party)
		{
			MobileParty attachedTo = party.AttachedTo;
			if (((attachedTo != null) ? attachedTo.Army : null) != null && party.AttachedTo.Army == MobileParty.MainParty.Army)
			{
				this._isVisualsDirty = true;
			}
		}

		// Token: 0x06001036 RID: 4150 RVA: 0x0003F6E0 File Offset: 0x0003D8E0
		private void OnTroopRecruited(Hero recruiterHero, Settlement settlement, Hero troopSource, CharacterObject troop, int number)
		{
			if (((recruiterHero != null) ? recruiterHero.PartyBelongedTo : null) != null && recruiterHero.IsPartyLeader)
			{
				for (int i = 0; i < this.PartyList.Count; i++)
				{
					if (this.PartyList[i].Party == recruiterHero.PartyBelongedTo.Party)
					{
						this.PartyList[i].RefreshProperties();
						return;
					}
				}
			}
		}

		// Token: 0x17000557 RID: 1367
		// (get) Token: 0x06001037 RID: 4151 RVA: 0x0003F749 File Offset: 0x0003D949
		// (set) Token: 0x06001038 RID: 4152 RVA: 0x0003F751 File Offset: 0x0003D951
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

		// Token: 0x17000558 RID: 1368
		// (get) Token: 0x06001039 RID: 4153 RVA: 0x0003F76F File Offset: 0x0003D96F
		// (set) Token: 0x0600103A RID: 4154 RVA: 0x0003F777 File Offset: 0x0003D977
		[DataSourceProperty]
		public HintViewModel ManageArmyHint
		{
			get
			{
				return this._manageArmyHint;
			}
			set
			{
				if (value != this._manageArmyHint)
				{
					this._manageArmyHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "ManageArmyHint");
				}
			}
		}

		// Token: 0x17000559 RID: 1369
		// (get) Token: 0x0600103B RID: 4155 RVA: 0x0003F795 File Offset: 0x0003D995
		// (set) Token: 0x0600103C RID: 4156 RVA: 0x0003F79D File Offset: 0x0003D99D
		[DataSourceProperty]
		public int Cohesion
		{
			get
			{
				return this._cohesion;
			}
			set
			{
				if (value != this._cohesion)
				{
					this._cohesion = value;
					base.OnPropertyChangedWithValue(value, "Cohesion");
				}
			}
		}

		// Token: 0x1700055A RID: 1370
		// (get) Token: 0x0600103D RID: 4157 RVA: 0x0003F7BB File Offset: 0x0003D9BB
		// (set) Token: 0x0600103E RID: 4158 RVA: 0x0003F7C3 File Offset: 0x0003D9C3
		[DataSourceProperty]
		public bool IsCohesionWarningEnabled
		{
			get
			{
				return this._isCohesionWarningEnabled;
			}
			set
			{
				if (value != this._isCohesionWarningEnabled)
				{
					this._isCohesionWarningEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsCohesionWarningEnabled");
				}
			}
		}

		// Token: 0x1700055B RID: 1371
		// (get) Token: 0x0600103F RID: 4159 RVA: 0x0003F7E1 File Offset: 0x0003D9E1
		// (set) Token: 0x06001040 RID: 4160 RVA: 0x0003F7E9 File Offset: 0x0003D9E9
		[DataSourceProperty]
		public bool CanManageArmy
		{
			get
			{
				return this._canManageArmy;
			}
			set
			{
				if (value != this._canManageArmy)
				{
					this._canManageArmy = value;
					base.OnPropertyChangedWithValue(value, "CanManageArmy");
				}
			}
		}

		// Token: 0x1700055C RID: 1372
		// (get) Token: 0x06001041 RID: 4161 RVA: 0x0003F807 File Offset: 0x0003DA07
		// (set) Token: 0x06001042 RID: 4162 RVA: 0x0003F80F File Offset: 0x0003DA0F
		[DataSourceProperty]
		public bool IsPlayerArmyLeader
		{
			get
			{
				return this._isPlayerArmyLeader;
			}
			set
			{
				if (value != this._isPlayerArmyLeader)
				{
					this._isPlayerArmyLeader = value;
					base.OnPropertyChangedWithValue(value, "IsPlayerArmyLeader");
				}
			}
		}

		// Token: 0x1700055D RID: 1373
		// (get) Token: 0x06001043 RID: 4163 RVA: 0x0003F82D File Offset: 0x0003DA2D
		// (set) Token: 0x06001044 RID: 4164 RVA: 0x0003F835 File Offset: 0x0003DA35
		[DataSourceProperty]
		public string ManCountText
		{
			get
			{
				return this._manCountText;
			}
			set
			{
				if (value != this._manCountText)
				{
					this._manCountText = value;
					base.OnPropertyChangedWithValue<string>(value, "ManCountText");
				}
			}
		}

		// Token: 0x1700055E RID: 1374
		// (get) Token: 0x06001045 RID: 4165 RVA: 0x0003F858 File Offset: 0x0003DA58
		// (set) Token: 0x06001046 RID: 4166 RVA: 0x0003F860 File Offset: 0x0003DA60
		[DataSourceProperty]
		public int Food
		{
			get
			{
				return this._food;
			}
			set
			{
				if (value != this._food)
				{
					this._food = value;
					base.OnPropertyChangedWithValue(value, "Food");
				}
			}
		}

		// Token: 0x1700055F RID: 1375
		// (get) Token: 0x06001047 RID: 4167 RVA: 0x0003F87E File Offset: 0x0003DA7E
		// (set) Token: 0x06001048 RID: 4168 RVA: 0x0003F886 File Offset: 0x0003DA86
		[DataSourceProperty]
		public MBBindingList<GameMenuPartyItemVM> PartyList
		{
			get
			{
				return this._partyList;
			}
			set
			{
				if (value != this._partyList)
				{
					this._partyList = value;
					base.OnPropertyChangedWithValue<MBBindingList<GameMenuPartyItemVM>>(value, "PartyList");
				}
			}
		}

		// Token: 0x17000560 RID: 1376
		// (get) Token: 0x06001049 RID: 4169 RVA: 0x0003F8A4 File Offset: 0x0003DAA4
		// (set) Token: 0x0600104A RID: 4170 RVA: 0x0003F8AC File Offset: 0x0003DAAC
		[DataSourceProperty]
		public BasicTooltipViewModel CohesionHint
		{
			get
			{
				return this._cohesionHint;
			}
			set
			{
				if (value != this._cohesionHint)
				{
					this._cohesionHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "CohesionHint");
				}
			}
		}

		// Token: 0x17000561 RID: 1377
		// (get) Token: 0x0600104B RID: 4171 RVA: 0x0003F8CA File Offset: 0x0003DACA
		// (set) Token: 0x0600104C RID: 4172 RVA: 0x0003F8D2 File Offset: 0x0003DAD2
		[DataSourceProperty]
		public BasicTooltipViewModel ManCountHint
		{
			get
			{
				return this._manCountHint;
			}
			set
			{
				if (value != this._manCountHint)
				{
					this._manCountHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "ManCountHint");
				}
			}
		}

		// Token: 0x17000562 RID: 1378
		// (get) Token: 0x0600104D RID: 4173 RVA: 0x0003F8F0 File Offset: 0x0003DAF0
		// (set) Token: 0x0600104E RID: 4174 RVA: 0x0003F8F8 File Offset: 0x0003DAF8
		[DataSourceProperty]
		public BasicTooltipViewModel FoodHint
		{
			get
			{
				return this._foodHint;
			}
			set
			{
				if (value != this._foodHint)
				{
					this._foodHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "FoodHint");
				}
			}
		}

		// Token: 0x17000563 RID: 1379
		// (get) Token: 0x0600104F RID: 4175 RVA: 0x0003F916 File Offset: 0x0003DB16
		[DataSourceProperty]
		public MBBindingList<StringItemWithHintVM> IssueList
		{
			get
			{
				if (this._issueList == null)
				{
					this._issueList = new MBBindingList<StringItemWithHintVM>();
				}
				return this._issueList;
			}
		}

		// Token: 0x04000780 RID: 1920
		private readonly Army _army;

		// Token: 0x04000781 RID: 1921
		private List<MobileParty> _savedPartyList;

		// Token: 0x04000782 RID: 1922
		private const float CohesionWarningMin = 30f;

		// Token: 0x04000783 RID: 1923
		public Action OpenArmyManagement;

		// Token: 0x04000784 RID: 1924
		private readonly Concept _cohesionConceptObj;

		// Token: 0x04000785 RID: 1925
		private string _latestTutorialElementID;

		// Token: 0x04000786 RID: 1926
		private bool _isVisualsDirty;

		// Token: 0x04000787 RID: 1927
		private MBBindingList<GameMenuPartyItemVM> _partyList;

		// Token: 0x04000788 RID: 1928
		private string _manCountText;

		// Token: 0x04000789 RID: 1929
		private int _cohesion;

		// Token: 0x0400078A RID: 1930
		private int _food;

		// Token: 0x0400078B RID: 1931
		private bool _isCohesionWarningEnabled;

		// Token: 0x0400078C RID: 1932
		private bool _isPlayerArmyLeader;

		// Token: 0x0400078D RID: 1933
		private bool _canManageArmy;

		// Token: 0x0400078E RID: 1934
		private HintViewModel _manageArmyHint;

		// Token: 0x0400078F RID: 1935
		public ElementNotificationVM _tutorialNotification;

		// Token: 0x04000790 RID: 1936
		private BasicTooltipViewModel _cohesionHint;

		// Token: 0x04000791 RID: 1937
		private BasicTooltipViewModel _manCountHint;

		// Token: 0x04000792 RID: 1938
		private BasicTooltipViewModel _foodHint;

		// Token: 0x04000793 RID: 1939
		private MBBindingList<StringItemWithHintVM> _issueList;
	}
}
