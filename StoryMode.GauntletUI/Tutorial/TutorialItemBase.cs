using System;
using System.Collections.Generic;
using SandBox.View.Map;
using SandBox.ViewModelCollection.MapSiege;
using SandBox.ViewModelCollection.Missions.NameMarker;
using StoryMode.ViewModelCollection.Tutorial;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.ViewModelCollection;
using TaleWorlds.CampaignSystem.ViewModelCollection.ArmyManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper;
using TaleWorlds.CampaignSystem.ViewModelCollection.CharacterDeveloper.PerkSelection;
using TaleWorlds.CampaignSystem.ViewModelCollection.ClanManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Overlay;
using TaleWorlds.CampaignSystem.ViewModelCollection.Inventory;
using TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions;
using TaleWorlds.CampaignSystem.ViewModelCollection.Party;
using TaleWorlds.CampaignSystem.ViewModelCollection.WeaponCrafting.WeaponDesign;
using TaleWorlds.Core;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200003F RID: 63
	public abstract class TutorialItemBase
	{
		// Token: 0x06000194 RID: 404
		public abstract bool IsConditionsMetForCompletion();

		// Token: 0x06000195 RID: 405
		public abstract bool IsConditionsMetForActivation();

		// Token: 0x06000196 RID: 406
		public abstract TutorialContexts GetTutorialsRelevantContext();

		// Token: 0x17000027 RID: 39
		// (get) Token: 0x06000198 RID: 408 RVA: 0x00006E1A File Offset: 0x0000501A
		// (set) Token: 0x06000197 RID: 407 RVA: 0x00006E11 File Offset: 0x00005011
		public TutorialItemVM.ItemPlacements Placement { get; protected set; }

		// Token: 0x17000028 RID: 40
		// (get) Token: 0x0600019A RID: 410 RVA: 0x00006E2B File Offset: 0x0000502B
		// (set) Token: 0x06000199 RID: 409 RVA: 0x00006E22 File Offset: 0x00005022
		public bool MouseRequired { get; protected set; }

		// Token: 0x17000029 RID: 41
		// (get) Token: 0x0600019C RID: 412 RVA: 0x00006E3C File Offset: 0x0000503C
		// (set) Token: 0x0600019B RID: 411 RVA: 0x00006E33 File Offset: 0x00005033
		public string HighlightedVisualElementID { get; protected set; }

		// Token: 0x1700002A RID: 42
		// (get) Token: 0x0600019E RID: 414 RVA: 0x00006E4D File Offset: 0x0000504D
		// (set) Token: 0x0600019D RID: 413 RVA: 0x00006E44 File Offset: 0x00005044
		public string Type { get; protected set; }

		// Token: 0x0600019F RID: 415 RVA: 0x00006E55 File Offset: 0x00005055
		protected virtual string GetCustomTutorialElementHighlightID()
		{
			return "";
		}

		// Token: 0x060001A0 RID: 416 RVA: 0x00006E5C File Offset: 0x0000505C
		public virtual void OnDeactivate()
		{
		}

		// Token: 0x060001A1 RID: 417 RVA: 0x00006E5E File Offset: 0x0000505E
		public virtual bool IsConditionsMetForVisibility()
		{
			return this.GetTutorialsRelevantContext() != TutorialContexts.Mission || !BannerlordConfig.HideBattleUI;
		}

		// Token: 0x060001A2 RID: 418 RVA: 0x00006E73 File Offset: 0x00005073
		public virtual void OnInventoryTransferItem(InventoryTransferItemEvent obj)
		{
		}

		// Token: 0x060001A3 RID: 419 RVA: 0x00006E75 File Offset: 0x00005075
		public virtual void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
		}

		// Token: 0x060001A4 RID: 420 RVA: 0x00006E77 File Offset: 0x00005077
		public virtual void OnInventoryFilterChanged(InventoryFilterChangedEvent obj)
		{
		}

		// Token: 0x060001A5 RID: 421 RVA: 0x00006E79 File Offset: 0x00005079
		public virtual void OnPerkSelectedByPlayer(PerkSelectedByPlayerEvent obj)
		{
		}

		// Token: 0x060001A6 RID: 422 RVA: 0x00006E7B File Offset: 0x0000507B
		public virtual void OnFocusAddedByPlayer(FocusAddedByPlayerEvent obj)
		{
		}

		// Token: 0x060001A7 RID: 423 RVA: 0x00006E7D File Offset: 0x0000507D
		public virtual void OnGameMenuOpened(MenuCallbackArgs obj)
		{
		}

		// Token: 0x060001A8 RID: 424 RVA: 0x00006E7F File Offset: 0x0000507F
		public virtual void OnMainMapCameraMove(MainMapCameraMoveEvent obj)
		{
		}

		// Token: 0x060001A9 RID: 425 RVA: 0x00006E81 File Offset: 0x00005081
		public virtual void OnCharacterPortraitPopUpOpened(CharacterObject obj)
		{
		}

		// Token: 0x060001AA RID: 426 RVA: 0x00006E83 File Offset: 0x00005083
		public virtual void OnPlayerStartTalkFromMenuOverlay(Hero obj)
		{
		}

		// Token: 0x060001AB RID: 427 RVA: 0x00006E85 File Offset: 0x00005085
		public virtual void OnGameMenuOptionSelected(GameMenuOption obj)
		{
		}

		// Token: 0x060001AC RID: 428 RVA: 0x00006E87 File Offset: 0x00005087
		public virtual void OnPlayerStartRecruitment(CharacterObject obj)
		{
		}

		// Token: 0x060001AD RID: 429 RVA: 0x00006E89 File Offset: 0x00005089
		public virtual void OnNewCompanionAdded(Hero obj)
		{
		}

		// Token: 0x060001AE RID: 430 RVA: 0x00006E8B File Offset: 0x0000508B
		public virtual void OnPlayerRecruitedUnit(CharacterObject obj, int count)
		{
		}

		// Token: 0x060001AF RID: 431 RVA: 0x00006E8D File Offset: 0x0000508D
		public virtual void OnPlayerInventoryExchange(List<ValueTuple<ItemRosterElement, int>> purchasedItems, List<ValueTuple<ItemRosterElement, int>> soldItems, bool isTrading)
		{
		}

		// Token: 0x060001B0 RID: 432 RVA: 0x00006E8F File Offset: 0x0000508F
		public virtual void OnMissionNameMarkerToggled(MissionNameMarkerToggleEvent obj)
		{
		}

		// Token: 0x060001B1 RID: 433 RVA: 0x00006E91 File Offset: 0x00005091
		public virtual void OnPlayerToggleTrackSettlementFromEncyclopedia(PlayerToggleTrackSettlementFromEncyclopediaEvent obj)
		{
		}

		// Token: 0x060001B2 RID: 434 RVA: 0x00006E93 File Offset: 0x00005093
		public virtual void OnInventoryEquipmentTypeChange(InventoryEquipmentTypeChangedEvent obj)
		{
		}

		// Token: 0x060001B3 RID: 435 RVA: 0x00006E95 File Offset: 0x00005095
		public virtual void OnArmyCohesionByPlayerBoosted(ArmyCohesionBoostedByPlayerEvent obj)
		{
		}

		// Token: 0x060001B4 RID: 436 RVA: 0x00006E97 File Offset: 0x00005097
		public virtual void OnPartyAddedToArmyByPlayer(PartyAddedToArmyByPlayerEvent obj)
		{
		}

		// Token: 0x060001B5 RID: 437 RVA: 0x00006E99 File Offset: 0x00005099
		public virtual void OnPlayerStartEngineConstruction(PlayerStartEngineConstructionEvent obj)
		{
		}

		// Token: 0x060001B6 RID: 438 RVA: 0x00006E9B File Offset: 0x0000509B
		public virtual void OnPlayerUpgradeTroop(CharacterObject arg1, CharacterObject arg2, int arg3)
		{
		}

		// Token: 0x060001B7 RID: 439 RVA: 0x00006E9D File Offset: 0x0000509D
		public virtual void OnPlayerMoveTroop(PlayerMoveTroopEvent obj)
		{
		}

		// Token: 0x060001B8 RID: 440 RVA: 0x00006E9F File Offset: 0x0000509F
		public virtual void OnPerkSelectionToggle(PerkSelectionToggleEvent obj)
		{
		}

		// Token: 0x060001B9 RID: 441 RVA: 0x00006EA1 File Offset: 0x000050A1
		public virtual void OnPlayerInspectedPartySpeed(PlayerInspectedPartySpeedEvent obj)
		{
		}

		// Token: 0x060001BA RID: 442 RVA: 0x00006EA3 File Offset: 0x000050A3
		public virtual void OnPlayerMovementFlagChanged(MissionPlayerMovementFlagsChangeEvent obj)
		{
		}

		// Token: 0x060001BB RID: 443 RVA: 0x00006EA5 File Offset: 0x000050A5
		public virtual void OnPlayerToggledUpgradePopup(PlayerToggledUpgradePopupEvent obj)
		{
		}

		// Token: 0x060001BC RID: 444 RVA: 0x00006EA7 File Offset: 0x000050A7
		public virtual void OnOrderOfBattleHeroAssignedToFormation(OrderOfBattleHeroAssignedToFormationEvent obj)
		{
		}

		// Token: 0x060001BD RID: 445 RVA: 0x00006EA9 File Offset: 0x000050A9
		public virtual void OnOrderOfBattleFormationClassChanged(OrderOfBattleFormationClassChangedEvent obj)
		{
		}

		// Token: 0x060001BE RID: 446 RVA: 0x00006EAB File Offset: 0x000050AB
		public virtual void OnOrderOfBattleFormationWeightChanged(OrderOfBattleFormationWeightChangedEvent obj)
		{
		}

		// Token: 0x060001BF RID: 447 RVA: 0x00006EAD File Offset: 0x000050AD
		public virtual void OnCraftingWeaponClassSelectionOpened(CraftingWeaponClassSelectionOpenedEvent obj)
		{
		}

		// Token: 0x060001C0 RID: 448 RVA: 0x00006EAF File Offset: 0x000050AF
		public virtual void OnCraftingOnWeaponResultPopupOpened(CraftingWeaponResultPopupToggledEvent obj)
		{
		}

		// Token: 0x060001C1 RID: 449 RVA: 0x00006EB1 File Offset: 0x000050B1
		public virtual void OnCraftingOrderSelectionOpened(CraftingOrderSelectionOpenedEvent obj)
		{
		}

		// Token: 0x060001C2 RID: 450 RVA: 0x00006EB3 File Offset: 0x000050B3
		public virtual void OnInventoryItemInspected(InventoryItemInspectedEvent obj)
		{
		}

		// Token: 0x060001C3 RID: 451 RVA: 0x00006EB5 File Offset: 0x000050B5
		public virtual void OnCrimeValueInspectedInSettlementOverlay(SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent obj)
		{
		}

		// Token: 0x060001C4 RID: 452 RVA: 0x00006EB7 File Offset: 0x000050B7
		public virtual void OnClanRoleAssignedThroughClanScreen(ClanRoleAssignedThroughClanScreenEvent obj)
		{
		}

		// Token: 0x060001C5 RID: 453 RVA: 0x00006EB9 File Offset: 0x000050B9
		public virtual void OnPlayerSelectedAKingdomDecisionOption(PlayerSelectedAKingdomDecisionOptionEvent obj)
		{
		}
	}
}
