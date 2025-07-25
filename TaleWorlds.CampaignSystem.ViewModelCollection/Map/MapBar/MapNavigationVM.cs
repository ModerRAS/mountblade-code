using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.Localization;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapBar
{
	// Token: 0x02000054 RID: 84
	public class MapNavigationVM : ViewModel
	{
		// Token: 0x06000644 RID: 1604 RVA: 0x0001DDEC File Offset: 0x0001BFEC
		public MapNavigationVM(INavigationHandler navigationHandler, Func<MapBarShortcuts> getMapBarShortcuts)
		{
			this._navigationHandler = navigationHandler;
			this._getMapBarShortcuts = getMapBarShortcuts;
			this._viewDataTracker = Campaign.Current.GetCampaignBehavior<IViewDataTracker>();
			IFaction mapFaction = Hero.MainHero.MapFaction;
			this.IsKingdomEnabled = (mapFaction != null && mapFaction.IsKingdomFaction);
			this.IsPartyEnabled = true;
			this.IsInventoryEnabled = true;
			this.IsClanEnabled = true;
			this.IsCharacterDeveloperEnabled = true;
			this.IsQuestsEnabled = true;
			this.IsKingdomActive = false;
			this.IsPartyActive = false;
			this.IsInventoryActive = false;
			this.IsClanActive = false;
			this.IsCharacterDeveloperActive = false;
			this.IsQuestsActive = false;
			this.SkillsHint = new BasicTooltipViewModel();
			this.EscapeMenuHint = new BasicTooltipViewModel();
			this.QuestsHint = new BasicTooltipViewModel();
			this.InventoryHint = new BasicTooltipViewModel();
			this.PartyHint = new BasicTooltipViewModel();
			this.KingdomHint = new BasicTooltipViewModel();
			this.ClanHint = new BasicTooltipViewModel();
			this.CharacterAlertHint = new BasicTooltipViewModel();
			this.QuestAlertHint = new BasicTooltipViewModel();
			this.PartyAlertHint = new BasicTooltipViewModel();
			Input.OnGamepadActiveStateChanged = (Action)Delegate.Combine(Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
			this.RefreshValues();
		}

		// Token: 0x06000645 RID: 1605 RVA: 0x0001DF1A File Offset: 0x0001C11A
		private void OnGamepadActiveStateChanged()
		{
			this.RefreshValues();
		}

		// Token: 0x06000646 RID: 1606 RVA: 0x0001DF24 File Offset: 0x0001C124
		public override void RefreshValues()
		{
			base.RefreshValues();
			this._shortcuts = this._getMapBarShortcuts();
			this.EncyclopediaHint = new HintViewModel(GameTexts.FindText("str_encyclopedia", null), null);
			if (Input.IsGamepadActive)
			{
				this.SkillsHint.SetHintCallback(() => GameTexts.FindText("str_character", null).ToString());
				this.EscapeMenuHint.SetHintCallback(() => GameTexts.FindText("str_escape_menu", null).ToString());
				this.QuestsHint.SetHintCallback(() => GameTexts.FindText("str_quest", null).ToString());
				this.InventoryHint.SetHintCallback(() => GameTexts.FindText("str_inventory", null).ToString());
				this.PartyHint.SetHintCallback(() => GameTexts.FindText("str_party", null).ToString());
				this.KingdomHint.SetHintCallback(() => GameTexts.FindText("str_kingdom", null).ToString());
				this.ClanHint.SetHintCallback(() => GameTexts.FindText("str_clan", null).ToString());
			}
			else
			{
				this.SkillsHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_character", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.CharacterHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
				this.EscapeMenuHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_escape_menu", null));
					GameTexts.SetVariable("HOTKEY", this._shortcuts.EscapeMenuHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
				this.QuestsHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_quest", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.QuestHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
				this.InventoryHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_inventory", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.InventoryHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
				this.PartyHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_party", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.PartyHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
			}
			this.CampHint = new HintViewModel(GameTexts.FindText("str_camp", null), null);
			this.FinanceHint = new HintViewModel(GameTexts.FindText("str_finance", null), null);
			this.CenterCameraHint = new HintViewModel(GameTexts.FindText("str_return_to_hero", null), null);
			IFaction mapFaction = Hero.MainHero.MapFaction;
			if (mapFaction != null && mapFaction.IsKingdomFaction)
			{
				this.KingdomHint.SetHintCallback(() => GameTexts.FindText("str_kingdom", null).ToString());
			}
			else
			{
				this.KingdomHint.SetHintCallback(() => GameTexts.FindText("str_need_to_be_a_part_of_kingdom", null).ToString());
			}
			this.AlertText = GameTexts.FindText("str_map_bar_alert", null).ToString();
			this.CharacterAlertHint.SetHintCallback(() => this._viewDataTracker.GetCharacterNotificationText());
			this.QuestAlertHint.SetHintCallback(() => this._viewDataTracker.GetQuestNotificationText());
			this.PartyAlertHint.SetHintCallback(() => this._viewDataTracker.GetPartyNotificationText());
			this.Refresh();
		}

		// Token: 0x06000647 RID: 1607 RVA: 0x0001E218 File Offset: 0x0001C418
		public override void OnFinalize()
		{
			base.OnFinalize();
			Input.OnGamepadActiveStateChanged = (Action)Delegate.Remove(Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
			this._navigationHandler = null;
			this._getMapBarShortcuts = null;
		}

		// Token: 0x06000648 RID: 1608 RVA: 0x0001E24E File Offset: 0x0001C44E
		public void Refresh()
		{
			this.RefreshAlertValues();
			this._viewDataTracker.UpdatePartyNotification();
		}

		// Token: 0x06000649 RID: 1609 RVA: 0x0001E261 File Offset: 0x0001C461
		public void Tick()
		{
			this.RefreshPermissionValues();
			this.RefreshStates();
		}

		// Token: 0x0600064A RID: 1610 RVA: 0x0001E270 File Offset: 0x0001C470
		private void RefreshPermissionValues()
		{
			NavigationPermissionItem kingdomPermission = this._navigationHandler.KingdomPermission;
			this.IsKingdomEnabled = kingdomPermission.IsAuthorized;
			NavigationPermissionItem clanPermission = this._navigationHandler.ClanPermission;
			this.IsClanEnabled = clanPermission.IsAuthorized;
			bool flag = false;
			bool flag2 = false;
			if (this._latestIsKingdomEnabled != this.IsKingdomEnabled)
			{
				flag = true;
				this._latestIsKingdomEnabled = this.IsKingdomEnabled;
			}
			if (this._latestIsClanEnabled != this.IsClanEnabled)
			{
				flag2 = true;
				this._latestIsClanEnabled = this.IsClanEnabled;
			}
			if (this._latestIsGamepadActive != Input.IsGamepadActive)
			{
				flag = true;
				flag2 = true;
				this._latestIsGamepadActive = Input.IsGamepadActive;
			}
			if (flag2)
			{
				this.UpdateClanHint(clanPermission);
			}
			if (flag)
			{
				this.UpdateKingdomHint(kingdomPermission);
			}
		}

		// Token: 0x0600064B RID: 1611 RVA: 0x0001E31C File Offset: 0x0001C51C
		private void UpdateKingdomHint(NavigationPermissionItem kingdomPermission)
		{
			if (!this.IsKingdomEnabled)
			{
				this.KingdomHint.SetHintCallback(delegate
				{
					TextObject reasonString = kingdomPermission.ReasonString;
					if (reasonString == null)
					{
						return null;
					}
					return reasonString.ToString();
				});
				return;
			}
			if (Input.IsGamepadActive)
			{
				this.KingdomHint.SetHintCallback(() => GameTexts.FindText("str_kingdom", null).ToString());
				return;
			}
			this.KingdomHint.SetHintCallback(delegate
			{
				GameTexts.SetVariable("TEXT", GameTexts.FindText("str_kingdom", null).ToString());
				GameTexts.SetVariable("HOTKEY", this._shortcuts.KingdomHotkey);
				return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
			});
		}

		// Token: 0x0600064C RID: 1612 RVA: 0x0001E3A8 File Offset: 0x0001C5A8
		private void UpdateClanHint(NavigationPermissionItem clanPermission)
		{
			if (!this.IsClanEnabled)
			{
				this.ClanHint.SetHintCallback(delegate
				{
					TextObject reasonString = clanPermission.ReasonString;
					if (reasonString == null)
					{
						return null;
					}
					return reasonString.ToString();
				});
				return;
			}
			if (Input.IsGamepadActive)
			{
				this.ClanHint.SetHintCallback(() => GameTexts.FindText("str_clan", null).ToString());
				return;
			}
			this.ClanHint.SetHintCallback(delegate
			{
				GameTexts.SetVariable("TEXT", GameTexts.FindText("str_clan", null).ToString());
				GameTexts.SetVariable("HOTKEY", this._shortcuts.ClanHotkey);
				return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
			});
		}

		// Token: 0x0600064D RID: 1613 RVA: 0x0001E432 File Offset: 0x0001C632
		private void RefreshAlertValues()
		{
			this.QuestsAlert = this._viewDataTracker.IsQuestNotificationActive;
			this.SkillAlert = this._viewDataTracker.IsCharacterNotificationActive;
			this.PartyAlert = this._viewDataTracker.IsPartyNotificationActive;
		}

		// Token: 0x0600064E RID: 1614 RVA: 0x0001E468 File Offset: 0x0001C668
		private void RefreshStates()
		{
			this.IsPartyEnabled = this._navigationHandler.PartyEnabled;
			this.IsInventoryEnabled = this._navigationHandler.InventoryEnabled;
			this.IsCharacterDeveloperEnabled = this._navigationHandler.CharacterDeveloperEnabled;
			this.IsQuestsEnabled = this._navigationHandler.QuestsEnabled;
			this.IsEscapeMenuEnabled = this._navigationHandler.EscapeMenuEnabled;
			this.IsKingdomActive = this._navigationHandler.KingdomActive;
			this.IsPartyActive = this._navigationHandler.PartyActive;
			this.IsInventoryActive = this._navigationHandler.InventoryActive;
			this.IsClanActive = this._navigationHandler.ClanActive;
			this.IsCharacterDeveloperActive = this._navigationHandler.CharacterDeveloperActive;
			this.IsQuestsActive = this._navigationHandler.QuestsActive;
			this.IsEscapeMenuActive = this._navigationHandler.EscapeMenuActive;
		}

		// Token: 0x0600064F RID: 1615 RVA: 0x0001E541 File Offset: 0x0001C741
		public void ExecuteOpenQuests()
		{
			this._navigationHandler.OpenQuests();
		}

		// Token: 0x06000650 RID: 1616 RVA: 0x0001E54E File Offset: 0x0001C74E
		public void ExecuteOpenInventory()
		{
			this._navigationHandler.OpenInventory();
		}

		// Token: 0x06000651 RID: 1617 RVA: 0x0001E55B File Offset: 0x0001C75B
		public void ExecuteOpenParty()
		{
			this._navigationHandler.OpenParty();
		}

		// Token: 0x06000652 RID: 1618 RVA: 0x0001E568 File Offset: 0x0001C768
		public void ExecuteOpenCharacterDeveloper()
		{
			this._navigationHandler.OpenCharacterDeveloper();
		}

		// Token: 0x06000653 RID: 1619 RVA: 0x0001E575 File Offset: 0x0001C775
		public void ExecuteOpenKingdom()
		{
			this._navigationHandler.OpenKingdom();
		}

		// Token: 0x06000654 RID: 1620 RVA: 0x0001E582 File Offset: 0x0001C782
		public void ExecuteOpenClan()
		{
			this._navigationHandler.OpenClan();
		}

		// Token: 0x06000655 RID: 1621 RVA: 0x0001E58F File Offset: 0x0001C78F
		public void ExecuteOpenEscapeMenu()
		{
			this._navigationHandler.OpenEscapeMenu();
		}

		// Token: 0x06000656 RID: 1622 RVA: 0x0001E59C File Offset: 0x0001C79C
		public void ExecuteOpenMainHeroEncyclopedia()
		{
			Campaign.Current.EncyclopediaManager.GoToLink(Hero.MainHero.EncyclopediaLink);
		}

		// Token: 0x06000657 RID: 1623 RVA: 0x0001E5B7 File Offset: 0x0001C7B7
		public void ExecuteOpenMainHeroClanEncyclopedia()
		{
			Campaign.Current.EncyclopediaManager.GoToLink(Hero.MainHero.Clan.EncyclopediaLink);
		}

		// Token: 0x06000658 RID: 1624 RVA: 0x0001E5D7 File Offset: 0x0001C7D7
		public void ExecuteOpenMainHeroKingdomEncyclopedia()
		{
			if (Hero.MainHero.MapFaction != null)
			{
				Campaign.Current.EncyclopediaManager.GoToLink(Hero.MainHero.MapFaction.EncyclopediaLink);
			}
		}

		// Token: 0x170001CF RID: 463
		// (get) Token: 0x06000659 RID: 1625 RVA: 0x0001E603 File Offset: 0x0001C803
		// (set) Token: 0x0600065A RID: 1626 RVA: 0x0001E60B File Offset: 0x0001C80B
		[DataSourceProperty]
		public BasicTooltipViewModel PartyAlertHint
		{
			get
			{
				return this._partyAlertHint;
			}
			set
			{
				if (value != this._partyAlertHint)
				{
					this._partyAlertHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "PartyAlertHint");
				}
			}
		}

		// Token: 0x170001D0 RID: 464
		// (get) Token: 0x0600065B RID: 1627 RVA: 0x0001E629 File Offset: 0x0001C829
		// (set) Token: 0x0600065C RID: 1628 RVA: 0x0001E631 File Offset: 0x0001C831
		[DataSourceProperty]
		public BasicTooltipViewModel CharacterAlertHint
		{
			get
			{
				return this._characterAlertHint;
			}
			set
			{
				if (value != this._characterAlertHint)
				{
					this._characterAlertHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "CharacterAlertHint");
				}
			}
		}

		// Token: 0x170001D1 RID: 465
		// (get) Token: 0x0600065D RID: 1629 RVA: 0x0001E64F File Offset: 0x0001C84F
		// (set) Token: 0x0600065E RID: 1630 RVA: 0x0001E657 File Offset: 0x0001C857
		[DataSourceProperty]
		public BasicTooltipViewModel QuestAlertHint
		{
			get
			{
				return this._questAlertHint;
			}
			set
			{
				if (value != this._questAlertHint)
				{
					this._questAlertHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "QuestAlertHint");
				}
			}
		}

		// Token: 0x170001D2 RID: 466
		// (get) Token: 0x0600065F RID: 1631 RVA: 0x0001E675 File Offset: 0x0001C875
		// (set) Token: 0x06000660 RID: 1632 RVA: 0x0001E67D File Offset: 0x0001C87D
		[DataSourceProperty]
		public string AlertText
		{
			get
			{
				return this._alertText;
			}
			set
			{
				if (value != this._alertText)
				{
					this._alertText = value;
					base.OnPropertyChangedWithValue<string>(value, "AlertText");
				}
			}
		}

		// Token: 0x170001D3 RID: 467
		// (get) Token: 0x06000661 RID: 1633 RVA: 0x0001E6A0 File Offset: 0x0001C8A0
		// (set) Token: 0x06000662 RID: 1634 RVA: 0x0001E6A8 File Offset: 0x0001C8A8
		[DataSourceProperty]
		public bool SkillAlert
		{
			get
			{
				return this._skillAlert;
			}
			set
			{
				if (value != this._skillAlert)
				{
					this._skillAlert = value;
					base.OnPropertyChangedWithValue(value, "SkillAlert");
				}
			}
		}

		// Token: 0x170001D4 RID: 468
		// (get) Token: 0x06000663 RID: 1635 RVA: 0x0001E6C6 File Offset: 0x0001C8C6
		// (set) Token: 0x06000664 RID: 1636 RVA: 0x0001E6CE File Offset: 0x0001C8CE
		[DataSourceProperty]
		public bool QuestsAlert
		{
			get
			{
				return this._questsAlert;
			}
			set
			{
				if (value != this._questsAlert)
				{
					this._questsAlert = value;
					base.OnPropertyChangedWithValue(value, "QuestsAlert");
				}
			}
		}

		// Token: 0x170001D5 RID: 469
		// (get) Token: 0x06000665 RID: 1637 RVA: 0x0001E6EC File Offset: 0x0001C8EC
		// (set) Token: 0x06000666 RID: 1638 RVA: 0x0001E6F4 File Offset: 0x0001C8F4
		[DataSourceProperty]
		public bool PartyAlert
		{
			get
			{
				return this._partyAlert;
			}
			set
			{
				if (value != this._partyAlert)
				{
					this._partyAlert = value;
					base.OnPropertyChangedWithValue(value, "PartyAlert");
				}
			}
		}

		// Token: 0x170001D6 RID: 470
		// (get) Token: 0x06000667 RID: 1639 RVA: 0x0001E712 File Offset: 0x0001C912
		// (set) Token: 0x06000668 RID: 1640 RVA: 0x0001E71A File Offset: 0x0001C91A
		[DataSourceProperty]
		public bool KingdomAlert
		{
			get
			{
				return this._kingdomAlert;
			}
			set
			{
				if (value != this._kingdomAlert)
				{
					this._kingdomAlert = value;
					base.OnPropertyChangedWithValue(value, "KingdomAlert");
				}
			}
		}

		// Token: 0x170001D7 RID: 471
		// (get) Token: 0x06000669 RID: 1641 RVA: 0x0001E738 File Offset: 0x0001C938
		// (set) Token: 0x0600066A RID: 1642 RVA: 0x0001E740 File Offset: 0x0001C940
		[DataSourceProperty]
		public bool ClanAlert
		{
			get
			{
				return this._clanAlert;
			}
			set
			{
				if (value != this._clanAlert)
				{
					this._clanAlert = value;
					base.OnPropertyChangedWithValue(value, "ClanAlert");
				}
			}
		}

		// Token: 0x170001D8 RID: 472
		// (get) Token: 0x0600066B RID: 1643 RVA: 0x0001E75E File Offset: 0x0001C95E
		// (set) Token: 0x0600066C RID: 1644 RVA: 0x0001E766 File Offset: 0x0001C966
		[DataSourceProperty]
		public bool InventoryAlert
		{
			get
			{
				return this._inventoryAlert;
			}
			set
			{
				if (value != this._inventoryAlert)
				{
					this._inventoryAlert = value;
					base.OnPropertyChangedWithValue(value, "InventoryAlert");
				}
			}
		}

		// Token: 0x170001D9 RID: 473
		// (get) Token: 0x0600066D RID: 1645 RVA: 0x0001E784 File Offset: 0x0001C984
		// (set) Token: 0x0600066E RID: 1646 RVA: 0x0001E78C File Offset: 0x0001C98C
		[DataSourceProperty]
		public bool IsEscapeMenuEnabled
		{
			get
			{
				return this._isEscapeMenuEnabled;
			}
			set
			{
				if (value != this._isEscapeMenuEnabled)
				{
					this._isEscapeMenuEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsEscapeMenuEnabled");
				}
			}
		}

		// Token: 0x170001DA RID: 474
		// (get) Token: 0x0600066F RID: 1647 RVA: 0x0001E7AA File Offset: 0x0001C9AA
		// (set) Token: 0x06000670 RID: 1648 RVA: 0x0001E7B2 File Offset: 0x0001C9B2
		[DataSourceProperty]
		public bool IsKingdomEnabled
		{
			get
			{
				return this._isKingdomEnabled;
			}
			set
			{
				if (value != this._isKingdomEnabled)
				{
					this._isKingdomEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsKingdomEnabled");
				}
			}
		}

		// Token: 0x170001DB RID: 475
		// (get) Token: 0x06000671 RID: 1649 RVA: 0x0001E7D0 File Offset: 0x0001C9D0
		// (set) Token: 0x06000672 RID: 1650 RVA: 0x0001E7D8 File Offset: 0x0001C9D8
		[DataSourceProperty]
		public bool IsPartyEnabled
		{
			get
			{
				return this._isPartyEnabled;
			}
			set
			{
				if (value != this._isPartyEnabled)
				{
					this._isPartyEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsPartyEnabled");
				}
			}
		}

		// Token: 0x170001DC RID: 476
		// (get) Token: 0x06000673 RID: 1651 RVA: 0x0001E7F6 File Offset: 0x0001C9F6
		// (set) Token: 0x06000674 RID: 1652 RVA: 0x0001E7FE File Offset: 0x0001C9FE
		[DataSourceProperty]
		public bool IsInventoryEnabled
		{
			get
			{
				return this._isInventoryEnabled;
			}
			set
			{
				if (value != this._isInventoryEnabled)
				{
					this._isInventoryEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsInventoryEnabled");
				}
			}
		}

		// Token: 0x170001DD RID: 477
		// (get) Token: 0x06000675 RID: 1653 RVA: 0x0001E81C File Offset: 0x0001CA1C
		// (set) Token: 0x06000676 RID: 1654 RVA: 0x0001E824 File Offset: 0x0001CA24
		[DataSourceProperty]
		public bool IsQuestsEnabled
		{
			get
			{
				return this._isQuestsEnabled;
			}
			set
			{
				if (value != this._isQuestsEnabled)
				{
					this._isQuestsEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsQuestsEnabled");
				}
			}
		}

		// Token: 0x170001DE RID: 478
		// (get) Token: 0x06000677 RID: 1655 RVA: 0x0001E842 File Offset: 0x0001CA42
		// (set) Token: 0x06000678 RID: 1656 RVA: 0x0001E84A File Offset: 0x0001CA4A
		[DataSourceProperty]
		public bool IsCharacterDeveloperEnabled
		{
			get
			{
				return this._isCharacterDeveloperEnabled;
			}
			set
			{
				if (value != this._isCharacterDeveloperEnabled)
				{
					this._isCharacterDeveloperEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsCharacterDeveloperEnabled");
				}
			}
		}

		// Token: 0x170001DF RID: 479
		// (get) Token: 0x06000679 RID: 1657 RVA: 0x0001E868 File Offset: 0x0001CA68
		// (set) Token: 0x0600067A RID: 1658 RVA: 0x0001E870 File Offset: 0x0001CA70
		[DataSourceProperty]
		public bool IsClanEnabled
		{
			get
			{
				return this._isClanEnabled;
			}
			set
			{
				if (value != this._isClanEnabled)
				{
					this._isClanEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsClanEnabled");
				}
			}
		}

		// Token: 0x170001E0 RID: 480
		// (get) Token: 0x0600067B RID: 1659 RVA: 0x0001E88E File Offset: 0x0001CA8E
		// (set) Token: 0x0600067C RID: 1660 RVA: 0x0001E896 File Offset: 0x0001CA96
		[DataSourceProperty]
		public bool IsKingdomActive
		{
			get
			{
				return this._isKingdomActive;
			}
			set
			{
				if (value != this._isKingdomActive)
				{
					this._isKingdomActive = value;
					base.OnPropertyChangedWithValue(value, "IsKingdomActive");
				}
			}
		}

		// Token: 0x170001E1 RID: 481
		// (get) Token: 0x0600067D RID: 1661 RVA: 0x0001E8B4 File Offset: 0x0001CAB4
		// (set) Token: 0x0600067E RID: 1662 RVA: 0x0001E8BC File Offset: 0x0001CABC
		[DataSourceProperty]
		public bool IsPartyActive
		{
			get
			{
				return this._isPartyActive;
			}
			set
			{
				if (value != this._isPartyActive)
				{
					this._isPartyActive = value;
					base.OnPropertyChangedWithValue(value, "IsPartyActive");
				}
			}
		}

		// Token: 0x170001E2 RID: 482
		// (get) Token: 0x0600067F RID: 1663 RVA: 0x0001E8DA File Offset: 0x0001CADA
		// (set) Token: 0x06000680 RID: 1664 RVA: 0x0001E8E2 File Offset: 0x0001CAE2
		[DataSourceProperty]
		public bool IsInventoryActive
		{
			get
			{
				return this._isInventoryActive;
			}
			set
			{
				if (value != this._isInventoryActive)
				{
					this._isInventoryActive = value;
					base.OnPropertyChangedWithValue(value, "IsInventoryActive");
				}
			}
		}

		// Token: 0x170001E3 RID: 483
		// (get) Token: 0x06000681 RID: 1665 RVA: 0x0001E900 File Offset: 0x0001CB00
		// (set) Token: 0x06000682 RID: 1666 RVA: 0x0001E908 File Offset: 0x0001CB08
		[DataSourceProperty]
		public bool IsQuestsActive
		{
			get
			{
				return this._isQuestsActive;
			}
			set
			{
				if (value != this._isQuestsActive)
				{
					this._isQuestsActive = value;
					base.OnPropertyChangedWithValue(value, "IsQuestsActive");
				}
			}
		}

		// Token: 0x170001E4 RID: 484
		// (get) Token: 0x06000683 RID: 1667 RVA: 0x0001E926 File Offset: 0x0001CB26
		// (set) Token: 0x06000684 RID: 1668 RVA: 0x0001E92E File Offset: 0x0001CB2E
		[DataSourceProperty]
		public bool IsCharacterDeveloperActive
		{
			get
			{
				return this._isCharacterDeveloperActive;
			}
			set
			{
				if (value != this._isCharacterDeveloperActive)
				{
					this._isCharacterDeveloperActive = value;
					base.OnPropertyChangedWithValue(value, "IsCharacterDeveloperActive");
				}
			}
		}

		// Token: 0x170001E5 RID: 485
		// (get) Token: 0x06000685 RID: 1669 RVA: 0x0001E94C File Offset: 0x0001CB4C
		// (set) Token: 0x06000686 RID: 1670 RVA: 0x0001E954 File Offset: 0x0001CB54
		[DataSourceProperty]
		public bool IsClanActive
		{
			get
			{
				return this._isClanActive;
			}
			set
			{
				if (value != this._isClanActive)
				{
					this._isClanActive = value;
					base.OnPropertyChangedWithValue(value, "IsClanActive");
				}
			}
		}

		// Token: 0x170001E6 RID: 486
		// (get) Token: 0x06000687 RID: 1671 RVA: 0x0001E972 File Offset: 0x0001CB72
		// (set) Token: 0x06000688 RID: 1672 RVA: 0x0001E97A File Offset: 0x0001CB7A
		[DataSourceProperty]
		public bool IsEscapeMenuActive
		{
			get
			{
				return this._isEscapeMenuActive;
			}
			set
			{
				if (value != this._isEscapeMenuActive)
				{
					this._isEscapeMenuActive = value;
					base.OnPropertyChangedWithValue(value, "IsEscapeMenuActive");
				}
			}
		}

		// Token: 0x170001E7 RID: 487
		// (get) Token: 0x06000689 RID: 1673 RVA: 0x0001E998 File Offset: 0x0001CB98
		// (set) Token: 0x0600068A RID: 1674 RVA: 0x0001E9A0 File Offset: 0x0001CBA0
		[DataSourceProperty]
		public HintViewModel FinanceHint
		{
			get
			{
				return this._financeHint;
			}
			set
			{
				if (value != this._financeHint)
				{
					this._financeHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "FinanceHint");
				}
			}
		}

		// Token: 0x170001E8 RID: 488
		// (get) Token: 0x0600068B RID: 1675 RVA: 0x0001E9BE File Offset: 0x0001CBBE
		// (set) Token: 0x0600068C RID: 1676 RVA: 0x0001E9C6 File Offset: 0x0001CBC6
		[DataSourceProperty]
		public HintViewModel EncyclopediaHint
		{
			get
			{
				return this._encyclopediaHint;
			}
			set
			{
				if (value != this._encyclopediaHint)
				{
					this._encyclopediaHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "EncyclopediaHint");
				}
			}
		}

		// Token: 0x170001E9 RID: 489
		// (get) Token: 0x0600068D RID: 1677 RVA: 0x0001E9E4 File Offset: 0x0001CBE4
		// (set) Token: 0x0600068E RID: 1678 RVA: 0x0001E9EC File Offset: 0x0001CBEC
		[DataSourceProperty]
		public BasicTooltipViewModel EscapeMenuHint
		{
			get
			{
				return this._escapeMenuHint;
			}
			set
			{
				if (value != this._escapeMenuHint)
				{
					this._escapeMenuHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "EscapeMenuHint");
				}
			}
		}

		// Token: 0x170001EA RID: 490
		// (get) Token: 0x0600068F RID: 1679 RVA: 0x0001EA0A File Offset: 0x0001CC0A
		// (set) Token: 0x06000690 RID: 1680 RVA: 0x0001EA12 File Offset: 0x0001CC12
		[DataSourceProperty]
		public BasicTooltipViewModel SkillsHint
		{
			get
			{
				return this._skillsHint;
			}
			set
			{
				if (value != this._skillsHint)
				{
					this._skillsHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "SkillsHint");
				}
			}
		}

		// Token: 0x170001EB RID: 491
		// (get) Token: 0x06000691 RID: 1681 RVA: 0x0001EA30 File Offset: 0x0001CC30
		// (set) Token: 0x06000692 RID: 1682 RVA: 0x0001EA38 File Offset: 0x0001CC38
		[DataSourceProperty]
		public BasicTooltipViewModel QuestsHint
		{
			get
			{
				return this._questsHint;
			}
			set
			{
				if (value != this._questsHint)
				{
					this._questsHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "QuestsHint");
				}
			}
		}

		// Token: 0x170001EC RID: 492
		// (get) Token: 0x06000693 RID: 1683 RVA: 0x0001EA56 File Offset: 0x0001CC56
		// (set) Token: 0x06000694 RID: 1684 RVA: 0x0001EA5E File Offset: 0x0001CC5E
		[DataSourceProperty]
		public BasicTooltipViewModel InventoryHint
		{
			get
			{
				return this._inventoryHint;
			}
			set
			{
				if (value != this._inventoryHint)
				{
					this._inventoryHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "InventoryHint");
				}
			}
		}

		// Token: 0x170001ED RID: 493
		// (get) Token: 0x06000695 RID: 1685 RVA: 0x0001EA7C File Offset: 0x0001CC7C
		// (set) Token: 0x06000696 RID: 1686 RVA: 0x0001EA84 File Offset: 0x0001CC84
		[DataSourceProperty]
		public BasicTooltipViewModel PartyHint
		{
			get
			{
				return this._partyHint;
			}
			set
			{
				if (value != this._partyHint)
				{
					this._partyHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "PartyHint");
				}
			}
		}

		// Token: 0x170001EE RID: 494
		// (get) Token: 0x06000697 RID: 1687 RVA: 0x0001EAA2 File Offset: 0x0001CCA2
		// (set) Token: 0x06000698 RID: 1688 RVA: 0x0001EAAA File Offset: 0x0001CCAA
		[DataSourceProperty]
		public BasicTooltipViewModel KingdomHint
		{
			get
			{
				return this._kingdomHint;
			}
			set
			{
				if (value != this._kingdomHint)
				{
					this._kingdomHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "KingdomHint");
				}
			}
		}

		// Token: 0x170001EF RID: 495
		// (get) Token: 0x06000699 RID: 1689 RVA: 0x0001EAC8 File Offset: 0x0001CCC8
		// (set) Token: 0x0600069A RID: 1690 RVA: 0x0001EAD0 File Offset: 0x0001CCD0
		[DataSourceProperty]
		public BasicTooltipViewModel ClanHint
		{
			get
			{
				return this._clanHint;
			}
			set
			{
				if (value != this._clanHint)
				{
					this._clanHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "ClanHint");
				}
			}
		}

		// Token: 0x170001F0 RID: 496
		// (get) Token: 0x0600069B RID: 1691 RVA: 0x0001EAEE File Offset: 0x0001CCEE
		// (set) Token: 0x0600069C RID: 1692 RVA: 0x0001EAF6 File Offset: 0x0001CCF6
		[DataSourceProperty]
		public HintViewModel CenterCameraHint
		{
			get
			{
				return this._centerCameraHint;
			}
			set
			{
				if (value != this._centerCameraHint)
				{
					this._centerCameraHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "CenterCameraHint");
				}
			}
		}

		// Token: 0x170001F1 RID: 497
		// (get) Token: 0x0600069D RID: 1693 RVA: 0x0001EB14 File Offset: 0x0001CD14
		// (set) Token: 0x0600069E RID: 1694 RVA: 0x0001EB1C File Offset: 0x0001CD1C
		[DataSourceProperty]
		public HintViewModel CampHint
		{
			get
			{
				return this._campHint;
			}
			set
			{
				if (value != this._campHint)
				{
					this._campHint = value;
					base.OnPropertyChangedWithValue<HintViewModel>(value, "CampHint");
				}
			}
		}

		// Token: 0x040002C4 RID: 708
		private INavigationHandler _navigationHandler;

		// Token: 0x040002C5 RID: 709
		private Func<MapBarShortcuts> _getMapBarShortcuts;

		// Token: 0x040002C6 RID: 710
		private MapBarShortcuts _shortcuts;

		// Token: 0x040002C7 RID: 711
		private bool _latestIsGamepadActive;

		// Token: 0x040002C8 RID: 712
		private bool _latestIsKingdomEnabled;

		// Token: 0x040002C9 RID: 713
		private bool _latestIsClanEnabled;

		// Token: 0x040002CA RID: 714
		private readonly IViewDataTracker _viewDataTracker;

		// Token: 0x040002CB RID: 715
		private string _alertText;

		// Token: 0x040002CC RID: 716
		private bool _skillAlert;

		// Token: 0x040002CD RID: 717
		private bool _questsAlert;

		// Token: 0x040002CE RID: 718
		private bool _partyAlert;

		// Token: 0x040002CF RID: 719
		private bool _kingdomAlert;

		// Token: 0x040002D0 RID: 720
		private bool _clanAlert;

		// Token: 0x040002D1 RID: 721
		private bool _inventoryAlert;

		// Token: 0x040002D2 RID: 722
		private bool _isKingdomEnabled;

		// Token: 0x040002D3 RID: 723
		private bool _isClanEnabled;

		// Token: 0x040002D4 RID: 724
		private bool _isQuestsEnabled;

		// Token: 0x040002D5 RID: 725
		private bool _isEscapeMenuEnabled;

		// Token: 0x040002D6 RID: 726
		private bool _isInventoryEnabled;

		// Token: 0x040002D7 RID: 727
		private bool _isCharacterDeveloperEnabled;

		// Token: 0x040002D8 RID: 728
		private bool _isPartyEnabled;

		// Token: 0x040002D9 RID: 729
		private bool _isKingdomActive;

		// Token: 0x040002DA RID: 730
		private bool _isClanActive;

		// Token: 0x040002DB RID: 731
		private bool _isEscapeMenuActive;

		// Token: 0x040002DC RID: 732
		private bool _isQuestsActive;

		// Token: 0x040002DD RID: 733
		private bool _isInventoryActive;

		// Token: 0x040002DE RID: 734
		private bool _isCharacterDeveloperActive;

		// Token: 0x040002DF RID: 735
		private bool _isPartyActive;

		// Token: 0x040002E0 RID: 736
		private HintViewModel _encyclopediaHint;

		// Token: 0x040002E1 RID: 737
		private BasicTooltipViewModel _skillsHint;

		// Token: 0x040002E2 RID: 738
		private BasicTooltipViewModel _escapeMenuHint;

		// Token: 0x040002E3 RID: 739
		private BasicTooltipViewModel _questsHint;

		// Token: 0x040002E4 RID: 740
		private BasicTooltipViewModel _inventoryHint;

		// Token: 0x040002E5 RID: 741
		private BasicTooltipViewModel _partyHint;

		// Token: 0x040002E6 RID: 742
		private HintViewModel _financeHint;

		// Token: 0x040002E7 RID: 743
		private HintViewModel _centerCameraHint;

		// Token: 0x040002E8 RID: 744
		private HintViewModel _campHint;

		// Token: 0x040002E9 RID: 745
		private BasicTooltipViewModel _kingdomHint;

		// Token: 0x040002EA RID: 746
		private BasicTooltipViewModel _clanHint;

		// Token: 0x040002EB RID: 747
		private BasicTooltipViewModel _characterAlertHint;

		// Token: 0x040002EC RID: 748
		private BasicTooltipViewModel _questAlertHint;

		// Token: 0x040002ED RID: 749
		private BasicTooltipViewModel _partyAlertHint;
	}
}
