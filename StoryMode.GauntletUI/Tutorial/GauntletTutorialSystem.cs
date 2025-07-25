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
using TaleWorlds.Core.ViewModelCollection.Tutorial;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.MountAndBlade.View.MissionViews;
using TaleWorlds.MountAndBlade.ViewModelCollection.OrderOfBattle;
using TaleWorlds.ScreenSystem;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200003D RID: 61
	public class GauntletTutorialSystem : GlobalLayer
	{
		// Token: 0x17000001 RID: 1
		// (get) Token: 0x06000135 RID: 309 RVA: 0x000047F9 File Offset: 0x000029F9
		// (set) Token: 0x06000136 RID: 310 RVA: 0x00004801 File Offset: 0x00002A01
		internal EncyclopediaPages CurrentEncyclopediaPageContext { get; private set; }

		// Token: 0x17000002 RID: 2
		// (get) Token: 0x06000137 RID: 311 RVA: 0x0000480A File Offset: 0x00002A0A
		// (set) Token: 0x06000138 RID: 312 RVA: 0x00004812 File Offset: 0x00002A12
		internal bool IsCharacterPortraitPopupOpen { get; private set; }

		// Token: 0x17000003 RID: 3
		// (get) Token: 0x06000139 RID: 313 RVA: 0x0000481B File Offset: 0x00002A1B
		// (set) Token: 0x0600013A RID: 314 RVA: 0x00004823 File Offset: 0x00002A23
		internal TutorialContexts CurrentContext { get; private set; }

		// Token: 0x0600013B RID: 315 RVA: 0x0000482C File Offset: 0x00002A2C
		public GauntletTutorialSystem()
		{
			this._isInitialized = true;
			this._dataSource = new TutorialVM(new Action(this.DisableTutorialStep));
			base.Layer = new GauntletLayer(300, "GauntletLayer", false);
			GauntletLayer gauntletLayer = (GauntletLayer)base.Layer;
			this._movie = gauntletLayer.LoadMovie("TutorialScreen", this._dataSource);
			gauntletLayer.InputRestrictions.SetInputRestrictions(false, InputUsageMask.All);
			ScreenManager.AddGlobalLayer(this, true);
			this._mappedTutorialItems = new Dictionary<string, TutorialItemBase>();
			this._currentlyAvailableTutorialItems = new List<TutorialItemBase>();
			this._currentlyAvailableTutorialItemsCopy = new TutorialItemBase[0];
			this.RegisterEvents();
			this.RegisterTutorialTypes();
			this.UpdateKeytexts();
			this._currentCampaignTutorials = new List<CampaignTutorial>();
		}

		// Token: 0x0600013C RID: 316 RVA: 0x000048EC File Offset: 0x00002AEC
		protected override void OnTick(float dt)
		{
			base.OnTick(dt);
			if (!this._isInitialized)
			{
				return;
			}
			if (this._currentlyAvailableTutorialItemsCopy.Length != this._currentlyAvailableTutorialItems.Capacity)
			{
				this._currentlyAvailableTutorialItemsCopy = new TutorialItemBase[this._currentlyAvailableTutorialItems.Capacity];
			}
			this._currentlyAvailableTutorialItems.CopyTo(this._currentlyAvailableTutorialItemsCopy);
			int count = this._currentlyAvailableTutorialItems.Count;
			if (this._currentTutorial == null)
			{
				this._currentCampaignTutorials.Clear();
				this._currentlyAvailableTutorialItems.Clear();
				if (CampaignEventDispatcher.Instance != null)
				{
					CampaignEventDispatcher.Instance.CollectAvailableTutorials(ref this._currentCampaignTutorials);
					foreach (CampaignTutorial campaignTutorial in this._currentCampaignTutorials)
					{
						TutorialItemBase tutorialItemBase;
						if (this._mappedTutorialItems.TryGetValue(campaignTutorial.TutorialTypeId, out tutorialItemBase))
						{
							if (tutorialItemBase.GetTutorialsRelevantContext() == this.CurrentContext)
							{
								this._currentlyAvailableTutorialItems.Add(tutorialItemBase);
							}
							if (this._currentTutorial == null && tutorialItemBase.GetTutorialsRelevantContext() == this.CurrentContext && tutorialItemBase.IsConditionsMetForActivation())
							{
								this.SetCurrentTutorial(campaignTutorial, tutorialItemBase);
							}
						}
					}
				}
			}
			for (int i = 0; i < count; i++)
			{
				if (this._currentlyAvailableTutorialItems.IndexOf(this._currentlyAvailableTutorialItemsCopy[i]) < 0)
				{
					this._currentlyAvailableTutorialItemsCopy[i].OnDeactivate();
				}
			}
			if (this._currentlyAvailableTutorialItemsCopy.Length != this._currentlyAvailableTutorialItems.Capacity)
			{
				this._currentlyAvailableTutorialItemsCopy = new TutorialItemBase[this._currentlyAvailableTutorialItems.Capacity];
			}
			else
			{
				this._currentlyAvailableTutorialItemsCopy.Initialize();
			}
			this._currentlyAvailableTutorialItems.CopyTo(this._currentlyAvailableTutorialItemsCopy);
			count = this._currentlyAvailableTutorialItems.Count;
			for (int j = 0; j < count; j++)
			{
				TutorialItemBase tutorialItemBase2 = this._currentlyAvailableTutorialItemsCopy[j];
				if (tutorialItemBase2.IsConditionsMetForCompletion())
				{
					CampaignEventDispatcher.Instance.OnTutorialCompleted(tutorialItemBase2.Type);
					this._currentlyAvailableTutorialItems.Remove(tutorialItemBase2);
					if (tutorialItemBase2 == this._currentTutorialVisualItem)
					{
						this.ResetCurrentTutorial();
					}
					else
					{
						Debug.Print("Completed a non-active tutorial: " + tutorialItemBase2.Type, 0, Debug.DebugColor.White, 17592186044416UL);
					}
				}
			}
			this._currentlyAvailableTutorialItemsCopy.Initialize();
			TutorialItemBase currentTutorialVisualItem = this._currentTutorialVisualItem;
			if (currentTutorialVisualItem == null || currentTutorialVisualItem.IsConditionsMetForActivation())
			{
				TutorialItemBase currentTutorialVisualItem2 = this._currentTutorialVisualItem;
				TutorialContexts? tutorialContexts = (currentTutorialVisualItem2 != null) ? new TutorialContexts?(currentTutorialVisualItem2.GetTutorialsRelevantContext()) : null;
				TutorialContexts currentContext = this.CurrentContext;
				if (tutorialContexts.GetValueOrDefault() == currentContext & tutorialContexts != null)
				{
					goto IL_27F;
				}
			}
			this.ResetCurrentTutorial();
			IL_27F:
			TutorialVM dataSource = this._dataSource;
			TutorialItemBase currentTutorialVisualItem3 = this._currentTutorialVisualItem;
			dataSource.IsVisible = (currentTutorialVisualItem3 != null && currentTutorialVisualItem3.IsConditionsMetForVisibility());
			this._dataSource.Tick(dt);
		}

		// Token: 0x0600013D RID: 317 RVA: 0x00004BB4 File Offset: 0x00002DB4
		private void SetCurrentTutorial(CampaignTutorial tutorial, TutorialItemBase tutorialItem)
		{
			this._currentTutorial = tutorial;
			this._currentTutorialVisualItem = tutorialItem;
			if (BannerlordConfig.EnableTutorialHints)
			{
				Game.Current.EventManager.TriggerEvent<TutorialNotificationElementChangeEvent>(new TutorialNotificationElementChangeEvent(this._currentTutorialVisualItem.HighlightedVisualElementID));
				this._dataSource.SetCurrentTutorial(tutorialItem.Placement, tutorial.TutorialTypeId, tutorialItem.MouseRequired);
				if (tutorialItem.MouseRequired)
				{
					base.Layer.InputRestrictions.SetInputRestrictions(false, InputUsageMask.MouseButtons);
				}
			}
		}

		// Token: 0x0600013E RID: 318 RVA: 0x00004C2C File Offset: 0x00002E2C
		private void ResetCurrentTutorial()
		{
			this._currentTutorial = null;
			this._currentTutorialVisualItem = null;
			TutorialVM dataSource = this._dataSource;
			if (dataSource != null)
			{
				dataSource.CloseTutorialStep(false);
			}
			Game.Current.EventManager.TriggerEvent<TutorialNotificationElementChangeEvent>(new TutorialNotificationElementChangeEvent(string.Empty));
			ScreenLayer layer = base.Layer;
			if (layer == null)
			{
				return;
			}
			layer.InputRestrictions.ResetInputRestrictions();
		}

		// Token: 0x0600013F RID: 319 RVA: 0x00004C88 File Offset: 0x00002E88
		private void OnTutorialContextChanged(TutorialContextChangedEvent obj)
		{
			this.CurrentContext = obj.NewContext;
			this.IsCharacterPortraitPopupOpen = false;
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnTutorialContextChanged(obj);
			});
		}

		// Token: 0x06000140 RID: 320 RVA: 0x00004CD1 File Offset: 0x00002ED1
		private void DisableTutorialStep()
		{
			CampaignEventDispatcher.Instance.OnTutorialCompleted(this._currentTutorial.TutorialTypeId);
			this.ResetCurrentTutorial();
		}

		// Token: 0x06000141 RID: 321 RVA: 0x00004CEE File Offset: 0x00002EEE
		public static void OnInitialize()
		{
			if (GauntletTutorialSystem.Current == null)
			{
				GauntletTutorialSystem.Current = new GauntletTutorialSystem();
			}
			bool isInitialized = GauntletTutorialSystem.Current._isInitialized;
		}

		// Token: 0x06000142 RID: 322 RVA: 0x00004D0C File Offset: 0x00002F0C
		public static void OnUnload()
		{
			if (GauntletTutorialSystem.Current != null)
			{
				if (GauntletTutorialSystem.Current._isInitialized)
				{
					GauntletTutorialSystem.Current.UnregisterEvents();
					GauntletTutorialSystem.Current._isInitialized = false;
					TutorialVM.Instance = null;
					GauntletTutorialSystem.Current._dataSource = null;
					ScreenManager.RemoveGlobalLayer(GauntletTutorialSystem.Current);
					GauntletTutorialSystem.Current._movie.Release();
				}
				GauntletTutorialSystem.Current = null;
			}
		}

		// Token: 0x06000143 RID: 323 RVA: 0x00004D71 File Offset: 0x00002F71
		private void OnEncyclopediaPageChanged(EncyclopediaPageChangedEvent obj)
		{
			this.CurrentEncyclopediaPageContext = obj.NewPage;
		}

		// Token: 0x06000144 RID: 324 RVA: 0x00004D80 File Offset: 0x00002F80
		private void OnPerkSelectionToggle(PerkSelectionToggleEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPerkSelectionToggle(obj);
			});
		}

		// Token: 0x06000145 RID: 325 RVA: 0x00004DB4 File Offset: 0x00002FB4
		private void OnInventoryTransferItem(InventoryTransferItemEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnInventoryTransferItem(obj);
			});
		}

		// Token: 0x06000146 RID: 326 RVA: 0x00004DE8 File Offset: 0x00002FE8
		private void OnInventoryEquipmentTypeChange(InventoryEquipmentTypeChangedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnInventoryEquipmentTypeChange(obj);
			});
		}

		// Token: 0x06000147 RID: 327 RVA: 0x00004E1C File Offset: 0x0000301C
		private void OnFocusAddedByPlayer(FocusAddedByPlayerEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnFocusAddedByPlayer(obj);
			});
		}

		// Token: 0x06000148 RID: 328 RVA: 0x00004E50 File Offset: 0x00003050
		private void OnPerkSelectedByPlayer(PerkSelectedByPlayerEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPerkSelectedByPlayer(obj);
			});
		}

		// Token: 0x06000149 RID: 329 RVA: 0x00004E84 File Offset: 0x00003084
		private void OnPartyAddedToArmyByPlayer(PartyAddedToArmyByPlayerEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPartyAddedToArmyByPlayer(obj);
			});
		}

		// Token: 0x0600014A RID: 330 RVA: 0x00004EB8 File Offset: 0x000030B8
		private void OnArmyCohesionByPlayerBoosted(ArmyCohesionBoostedByPlayerEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnArmyCohesionByPlayerBoosted(obj);
			});
		}

		// Token: 0x0600014B RID: 331 RVA: 0x00004EEC File Offset: 0x000030EC
		private void OnInventoryFilterChanged(InventoryFilterChangedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnInventoryFilterChanged(obj);
			});
		}

		// Token: 0x0600014C RID: 332 RVA: 0x00004F20 File Offset: 0x00003120
		private void OnPlayerToggleTrackSettlementFromEncyclopedia(PlayerToggleTrackSettlementFromEncyclopediaEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerToggleTrackSettlementFromEncyclopedia(obj);
			});
		}

		// Token: 0x0600014D RID: 333 RVA: 0x00004F54 File Offset: 0x00003154
		private void OnMissionNameMarkerToggled(MissionNameMarkerToggleEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnMissionNameMarkerToggled(obj);
			});
		}

		// Token: 0x0600014E RID: 334 RVA: 0x00004F88 File Offset: 0x00003188
		private void OnPlayerStartEngineConstruction(PlayerStartEngineConstructionEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerStartEngineConstruction(obj);
			});
		}

		// Token: 0x0600014F RID: 335 RVA: 0x00004FBC File Offset: 0x000031BC
		private void OnPlayerInspectedPartySpeed(PlayerInspectedPartySpeedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerInspectedPartySpeed(obj);
			});
		}

		// Token: 0x06000150 RID: 336 RVA: 0x00004FF0 File Offset: 0x000031F0
		private void OnGameMenuOpened(MenuCallbackArgs obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnGameMenuOpened(obj);
			});
		}

		// Token: 0x06000151 RID: 337 RVA: 0x00005024 File Offset: 0x00003224
		private void OnCharacterPortraitPopUpOpened(CharacterObject obj)
		{
			this.IsCharacterPortraitPopupOpen = true;
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnCharacterPortraitPopUpOpened(obj);
			});
		}

		// Token: 0x06000152 RID: 338 RVA: 0x0000505C File Offset: 0x0000325C
		private void OnCharacterPortraitPopUpClosed()
		{
			this.IsCharacterPortraitPopupOpen = false;
		}

		// Token: 0x06000153 RID: 339 RVA: 0x00005068 File Offset: 0x00003268
		private void OnPlayerStartTalkFromMenuOverlay(Hero obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerStartTalkFromMenuOverlay(obj);
			});
		}

		// Token: 0x06000154 RID: 340 RVA: 0x0000509C File Offset: 0x0000329C
		private void OnGameMenuOptionSelected(GameMenuOption obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnGameMenuOptionSelected(obj);
			});
		}

		// Token: 0x06000155 RID: 341 RVA: 0x000050D0 File Offset: 0x000032D0
		private void OnPlayerStartRecruitment(CharacterObject obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerStartRecruitment(obj);
			});
		}

		// Token: 0x06000156 RID: 342 RVA: 0x00005104 File Offset: 0x00003304
		private void OnNewCompanionAdded(Hero obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnNewCompanionAdded(obj);
			});
		}

		// Token: 0x06000157 RID: 343 RVA: 0x00005138 File Offset: 0x00003338
		private void OnPlayerRecruitUnit(CharacterObject obj, int count)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerRecruitedUnit(obj, count);
			});
		}

		// Token: 0x06000158 RID: 344 RVA: 0x00005170 File Offset: 0x00003370
		private void OnPlayerInventoryExchange(List<ValueTuple<ItemRosterElement, int>> purchasedItems, List<ValueTuple<ItemRosterElement, int>> soldItems, bool isTrading)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerInventoryExchange(purchasedItems, soldItems, isTrading);
			});
		}

		// Token: 0x06000159 RID: 345 RVA: 0x000051B0 File Offset: 0x000033B0
		private void OnPlayerUpgradeTroop(PlayerRequestUpgradeTroopEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerUpgradeTroop(obj.SourceTroop, obj.TargetTroop, obj.Number);
			});
		}

		// Token: 0x0600015A RID: 346 RVA: 0x000051E4 File Offset: 0x000033E4
		private void OnPlayerMoveTroop(PlayerMoveTroopEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerMoveTroop(obj);
			});
		}

		// Token: 0x0600015B RID: 347 RVA: 0x00005218 File Offset: 0x00003418
		private void OnPlayerToggledUpgradePopup(PlayerToggledUpgradePopupEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerToggledUpgradePopup(obj);
			});
		}

		// Token: 0x0600015C RID: 348 RVA: 0x0000524C File Offset: 0x0000344C
		private void OnOrderOfBattleHeroAssignedToFormation(OrderOfBattleHeroAssignedToFormationEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnOrderOfBattleHeroAssignedToFormation(obj);
			});
		}

		// Token: 0x0600015D RID: 349 RVA: 0x00005280 File Offset: 0x00003480
		private void OnPlayerMovementFlagsChanged(MissionPlayerMovementFlagsChangeEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerMovementFlagChanged(obj);
			});
		}

		// Token: 0x0600015E RID: 350 RVA: 0x000052B4 File Offset: 0x000034B4
		private void OnOrderOfBattleFormationClassChanged(OrderOfBattleFormationClassChangedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnOrderOfBattleFormationClassChanged(obj);
			});
		}

		// Token: 0x0600015F RID: 351 RVA: 0x000052E8 File Offset: 0x000034E8
		private void OnOrderOfBattleFormationWeightChanged(OrderOfBattleFormationWeightChangedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnOrderOfBattleFormationWeightChanged(obj);
			});
		}

		// Token: 0x06000160 RID: 352 RVA: 0x0000531C File Offset: 0x0000351C
		private void OnCraftingWeaponClassSelectionOpened(CraftingWeaponClassSelectionOpenedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnCraftingWeaponClassSelectionOpened(obj);
			});
		}

		// Token: 0x06000161 RID: 353 RVA: 0x00005350 File Offset: 0x00003550
		private void OnCraftingOnWeaponResultPopupOpened(CraftingWeaponResultPopupToggledEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnCraftingOnWeaponResultPopupOpened(obj);
			});
		}

		// Token: 0x06000162 RID: 354 RVA: 0x00005384 File Offset: 0x00003584
		private void OnCraftingOrderSelectionOpened(CraftingOrderSelectionOpenedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnCraftingOrderSelectionOpened(obj);
			});
		}

		// Token: 0x06000163 RID: 355 RVA: 0x000053B8 File Offset: 0x000035B8
		private void OnInventoryItemInspected(InventoryItemInspectedEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnInventoryItemInspected(obj);
			});
		}

		// Token: 0x06000164 RID: 356 RVA: 0x000053EC File Offset: 0x000035EC
		private void OnCrimeValueInspectedInSettlementOverlay(SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnCrimeValueInspectedInSettlementOverlay(obj);
			});
		}

		// Token: 0x06000165 RID: 357 RVA: 0x00005420 File Offset: 0x00003620
		private void OnClanRoleAssignedThroughClanScreen(ClanRoleAssignedThroughClanScreenEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnClanRoleAssignedThroughClanScreen(obj);
			});
		}

		// Token: 0x06000166 RID: 358 RVA: 0x00005454 File Offset: 0x00003654
		private void OnMainMapCameraMove(MainMapCameraMoveEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnMainMapCameraMove(obj);
			});
		}

		// Token: 0x06000167 RID: 359 RVA: 0x00005488 File Offset: 0x00003688
		private void OnPlayerSelectedAKingdomDecisionOption(PlayerSelectedAKingdomDecisionOptionEvent obj)
		{
			this._currentlyAvailableTutorialItems.ForEach(delegate(TutorialItemBase t)
			{
				t.OnPlayerSelectedAKingdomDecisionOption(obj);
			});
		}

		// Token: 0x06000168 RID: 360 RVA: 0x000054B9 File Offset: 0x000036B9
		private void OnResetAllTutorials(ResetAllTutorialsEvent obj)
		{
			this._mappedTutorialItems.Clear();
			this.RegisterTutorialTypes();
		}

		// Token: 0x06000169 RID: 361 RVA: 0x000054CC File Offset: 0x000036CC
		private void OnGamepadActiveStateChanged()
		{
			this.UpdateKeytexts();
		}

		// Token: 0x0600016A RID: 362 RVA: 0x000054D4 File Offset: 0x000036D4
		private void OnKeybindsChanged()
		{
			this.UpdateKeytexts();
		}

		// Token: 0x0600016B RID: 363 RVA: 0x000054DC File Offset: 0x000036DC
		private void RegisterTutorialTypes()
		{
			this._mappedTutorialItems.Add("MovementInMissionTutorial", new MovementInMissionTutorial());
			this._mappedTutorialItems.Add("SeeMarkersInMissionTutorial", new SeeMarkersInMissionTutorial());
			this._mappedTutorialItems.Add("PressLeaveToReturnFromMissionType1", new PressLeaveToReturnFromMissionTutorial1());
			this._mappedTutorialItems.Add("PressLeaveToReturnFromMissionType2", new PressLeaveToReturnFromMissionTutorial2());
			this._mappedTutorialItems.Add("RecruitmentTutorialStep1", new RecruitmentStep1Tutorial());
			this._mappedTutorialItems.Add("RecruitmentTutorialStep2", new RecruitmentStep2Tutorial());
			this._mappedTutorialItems.Add("EnterVillageTutorial", new EnterVillageTutorial());
			this._mappedTutorialItems.Add("NavigateOnMapTutorialStep1", new NavigateOnMapTutorialStep1());
			this._mappedTutorialItems.Add("NavigateOnMapTutorialStep2", new NavigateOnMapTutorialStep2());
			this._mappedTutorialItems.Add("GetSuppliesTutorialStep1", new BuyingFoodStep1Tutorial());
			this._mappedTutorialItems.Add("GetSuppliesTutorialStep3", new BuyingFoodStep3Tutorial());
			this._mappedTutorialItems.Add("GetQuestTutorial", new QuestScreenTutorial());
			this._mappedTutorialItems.Add("TalkToNotableTutorialStep1", new TalkToNotableTutorialStep1());
			this._mappedTutorialItems.Add("TalkToNotableTutorialStep2", new TalkToNotableTutorialStep2());
			this._mappedTutorialItems.Add("OrderTutorial1TutorialStep2", new OrderTutorialStep2());
			this._mappedTutorialItems.Add("TakeAndRescuePrisonerTutorial", new TakingPrisonersTutorial());
			this._mappedTutorialItems.Add("OrderTutorial2Tutorial", new OrderHideoutTutorial());
			this._mappedTutorialItems.Add("EncyclopediaHomeTutorial", new EncyclopediaHomeTutorial());
			this._mappedTutorialItems.Add("EncyclopediaSettlementsTutorial", new EncyclopediaPageTutorial("EncyclopediaSettlementsTutorial", 9, 2));
			this._mappedTutorialItems.Add("EncyclopediaTroopsTutorial", new EncyclopediaPageTutorial("EncyclopediaTroopsTutorial", 10, 3));
			this._mappedTutorialItems.Add("EncyclopediaKingdomsTutorial", new EncyclopediaPageTutorial("EncyclopediaKingdomsTutorial", 11, 5));
			this._mappedTutorialItems.Add("EncyclopediaClansTutorial", new EncyclopediaPageTutorial("EncyclopediaClansTutorial", 8, 4));
			this._mappedTutorialItems.Add("EncyclopediaConceptsTutorial", new EncyclopediaPageTutorial("EncyclopediaConceptsTutorial", 13, 7));
			this._mappedTutorialItems.Add("EncyclopediaTrackTutorial", new EncyclopediaTrackTutorial());
			this._mappedTutorialItems.Add("EncyclopediaSearchTutorial", new EncyclopediaSearchTutorial());
			this._mappedTutorialItems.Add("EncyclopediaFiltersTutorial", new EncyclopediaFiltersTutorial());
			this._mappedTutorialItems.Add("EncyclopediaSortTutorial", new EncyclopediaSortTutorial());
			this._mappedTutorialItems.Add("EncyclopediaFogOfWarTutorial", new EncyclopediaFogOfWarTutorial());
			this._mappedTutorialItems.Add("UpgradingTroopsStep1", new UpgradingTroopsStep1Tutorial());
			this._mappedTutorialItems.Add("UpgradingTroopsStep2", new UpgradingTroopsStep2Tutorial());
			this._mappedTutorialItems.Add("UpgradingTroopsStep3", new UpgradingTroopsStep3Tutorial());
			this._mappedTutorialItems.Add("ChoosingPerkUpgradesStep1", new ChoosingPerkUpgradesStep1Tutorial());
			this._mappedTutorialItems.Add("ChoosingPerkUpgradesStep2", new ChoosingPerkUpgradesStep2Tutorial());
			this._mappedTutorialItems.Add("ChoosingPerkUpgradesStep3", new ChoosingPerkUpgradesStep3Tutorial());
			this._mappedTutorialItems.Add("ChoosingSkillFocusStep1", new ChoosingSkillFocusStep1Tutorial());
			this._mappedTutorialItems.Add("ChoosingSkillFocusStep2", new ChoosingSkillFocusStep2Tutorial());
			this._mappedTutorialItems.Add("GettingCompanionsStep1", new GettingCompanionsStep1Tutorial());
			this._mappedTutorialItems.Add("GettingCompanionsStep2", new GettingCompanionsStep2Tutorial());
			this._mappedTutorialItems.Add("GettingCompanionsStep3", new GettingCompanionsStep3Tutorial());
			this._mappedTutorialItems.Add("RansomingPrisonersStep1", new RansomingPrisonersStep1Tutorial());
			this._mappedTutorialItems.Add("RansomingPrisonersStep2", new RansomingPrisonersStep2Tutorial());
			this._mappedTutorialItems.Add("CivilianEquipment", new CivilianEquipmentTutorial());
			this._mappedTutorialItems.Add("PartySpeed", new PartySpeedTutorial());
			this._mappedTutorialItems.Add("ArmyCohesionStep1", new ArmyCohesionStep1Tutorial());
			this._mappedTutorialItems.Add("ArmyCohesionStep2", new ArmyCohesionStep2Tutorial());
			this._mappedTutorialItems.Add("CreateArmyStep2", new CreateArmyStep2Tutorial());
			this._mappedTutorialItems.Add("CreateArmyStep3", new CreateArmyStep3Tutorial());
			this._mappedTutorialItems.Add("OrderOfBattleTutorialStep1", new OrderOfBattleTutorialStep1Tutorial());
			this._mappedTutorialItems.Add("OrderOfBattleTutorialStep2", new OrderOfBattleTutorialStep2Tutorial());
			this._mappedTutorialItems.Add("OrderOfBattleTutorialStep3", new OrderOfBattleTutorialStep3Tutorial());
			this._mappedTutorialItems.Add("CraftingStep1Tutorial", new CraftingStep1Tutorial());
			this._mappedTutorialItems.Add("CraftingOrdersTutorial", new CraftingOrdersTutorial());
			this._mappedTutorialItems.Add("InventoryBannerItemTutorial", new InventoryBannerItemTutorial());
			this._mappedTutorialItems.Add("CrimeTutorial", new CrimeTutorial());
			this._mappedTutorialItems.Add("AssignRolesTutorial", new AssignRolesTutorial());
			this._mappedTutorialItems.Add("RaidVillageStep1", new RaidVillageStep1Tutorial());
			this._mappedTutorialItems.Add("BombardmentStep1", new BombardmentStep1Tutorial());
			this._mappedTutorialItems.Add("KingdomDecisionVotingTutorial", new KingdomDecisionVotingTutorial());
		}

		// Token: 0x0600016C RID: 364 RVA: 0x000059D4 File Offset: 0x00003BD4
		private void RegisterEvents()
		{
			Input.OnGamepadActiveStateChanged = (Action)Delegate.Combine(Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
			Game.Current.EventManager.RegisterEvent<InventoryTransferItemEvent>(new Action<InventoryTransferItemEvent>(this.OnInventoryTransferItem));
			Game.Current.EventManager.RegisterEvent<InventoryEquipmentTypeChangedEvent>(new Action<InventoryEquipmentTypeChangedEvent>(this.OnInventoryEquipmentTypeChange));
			Game.Current.EventManager.RegisterEvent<FocusAddedByPlayerEvent>(new Action<FocusAddedByPlayerEvent>(this.OnFocusAddedByPlayer));
			Game.Current.EventManager.RegisterEvent<PerkSelectedByPlayerEvent>(new Action<PerkSelectedByPlayerEvent>(this.OnPerkSelectedByPlayer));
			Game.Current.EventManager.RegisterEvent<ArmyCohesionBoostedByPlayerEvent>(new Action<ArmyCohesionBoostedByPlayerEvent>(this.OnArmyCohesionByPlayerBoosted));
			Game.Current.EventManager.RegisterEvent<PartyAddedToArmyByPlayerEvent>(new Action<PartyAddedToArmyByPlayerEvent>(this.OnPartyAddedToArmyByPlayer));
			Game.Current.EventManager.RegisterEvent<InventoryFilterChangedEvent>(new Action<InventoryFilterChangedEvent>(this.OnInventoryFilterChanged));
			Game.Current.EventManager.RegisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnEncyclopediaPageChanged));
			Game.Current.EventManager.RegisterEvent<PerkSelectionToggleEvent>(new Action<PerkSelectionToggleEvent>(this.OnPerkSelectionToggle));
			Game.Current.EventManager.RegisterEvent<PlayerToggleTrackSettlementFromEncyclopediaEvent>(new Action<PlayerToggleTrackSettlementFromEncyclopediaEvent>(this.OnPlayerToggleTrackSettlementFromEncyclopedia));
			Game.Current.EventManager.RegisterEvent<TutorialContextChangedEvent>(new Action<TutorialContextChangedEvent>(this.OnTutorialContextChanged));
			Game.Current.EventManager.RegisterEvent<MissionNameMarkerToggleEvent>(new Action<MissionNameMarkerToggleEvent>(this.OnMissionNameMarkerToggled));
			Game.Current.EventManager.RegisterEvent<PlayerRequestUpgradeTroopEvent>(new Action<PlayerRequestUpgradeTroopEvent>(this.OnPlayerUpgradeTroop));
			Game.Current.EventManager.RegisterEvent<PlayerStartEngineConstructionEvent>(new Action<PlayerStartEngineConstructionEvent>(this.OnPlayerStartEngineConstruction));
			Game.Current.EventManager.RegisterEvent<PlayerInspectedPartySpeedEvent>(new Action<PlayerInspectedPartySpeedEvent>(this.OnPlayerInspectedPartySpeed));
			Game.Current.EventManager.RegisterEvent<MainMapCameraMoveEvent>(new Action<MainMapCameraMoveEvent>(this.OnMainMapCameraMove));
			Game.Current.EventManager.RegisterEvent<PlayerMoveTroopEvent>(new Action<PlayerMoveTroopEvent>(this.OnPlayerMoveTroop));
			Game.Current.EventManager.RegisterEvent<MissionPlayerMovementFlagsChangeEvent>(new Action<MissionPlayerMovementFlagsChangeEvent>(this.OnPlayerMovementFlagsChanged));
			Game.Current.EventManager.RegisterEvent<ResetAllTutorialsEvent>(new Action<ResetAllTutorialsEvent>(this.OnResetAllTutorials));
			Game.Current.EventManager.RegisterEvent<PlayerToggledUpgradePopupEvent>(new Action<PlayerToggledUpgradePopupEvent>(this.OnPlayerToggledUpgradePopup));
			Game.Current.EventManager.RegisterEvent<OrderOfBattleHeroAssignedToFormationEvent>(new Action<OrderOfBattleHeroAssignedToFormationEvent>(this.OnOrderOfBattleHeroAssignedToFormation));
			Game.Current.EventManager.RegisterEvent<OrderOfBattleFormationClassChangedEvent>(new Action<OrderOfBattleFormationClassChangedEvent>(this.OnOrderOfBattleFormationClassChanged));
			Game.Current.EventManager.RegisterEvent<OrderOfBattleFormationWeightChangedEvent>(new Action<OrderOfBattleFormationWeightChangedEvent>(this.OnOrderOfBattleFormationWeightChanged));
			Game.Current.EventManager.RegisterEvent<CraftingWeaponClassSelectionOpenedEvent>(new Action<CraftingWeaponClassSelectionOpenedEvent>(this.OnCraftingWeaponClassSelectionOpened));
			Game.Current.EventManager.RegisterEvent<CraftingOrderSelectionOpenedEvent>(new Action<CraftingOrderSelectionOpenedEvent>(this.OnCraftingOrderSelectionOpened));
			Game.Current.EventManager.RegisterEvent<CraftingWeaponResultPopupToggledEvent>(new Action<CraftingWeaponResultPopupToggledEvent>(this.OnCraftingOnWeaponResultPopupOpened));
			Game.Current.EventManager.RegisterEvent<InventoryItemInspectedEvent>(new Action<InventoryItemInspectedEvent>(this.OnInventoryItemInspected));
			Game.Current.EventManager.RegisterEvent<SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent>(new Action<SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent>(this.OnCrimeValueInspectedInSettlementOverlay));
			Game.Current.EventManager.RegisterEvent<ClanRoleAssignedThroughClanScreenEvent>(new Action<ClanRoleAssignedThroughClanScreenEvent>(this.OnClanRoleAssignedThroughClanScreen));
			Game.Current.EventManager.RegisterEvent<PlayerSelectedAKingdomDecisionOptionEvent>(new Action<PlayerSelectedAKingdomDecisionOptionEvent>(this.OnPlayerSelectedAKingdomDecisionOption));
			HotKeyManager.OnKeybindsChanged += this.OnKeybindsChanged;
			if (Campaign.Current != null && CampaignEventDispatcher.Instance != null)
			{
				CampaignEvents.GameMenuOpened.AddNonSerializedListener(this, new Action<MenuCallbackArgs>(this.OnGameMenuOpened));
				CampaignEvents.CharacterPortraitPopUpOpenedEvent.AddNonSerializedListener(this, new Action<CharacterObject>(this.OnCharacterPortraitPopUpOpened));
				CampaignEvents.CharacterPortraitPopUpClosedEvent.AddNonSerializedListener(this, new Action(this.OnCharacterPortraitPopUpClosed));
				CampaignEvents.PlayerStartTalkFromMenu.AddNonSerializedListener(this, new Action<Hero>(this.OnPlayerStartTalkFromMenuOverlay));
				CampaignEvents.GameMenuOptionSelectedEvent.AddNonSerializedListener(this, new Action<GameMenuOption>(this.OnGameMenuOptionSelected));
				CampaignEvents.PlayerStartRecruitmentEvent.AddNonSerializedListener(this, new Action<CharacterObject>(this.OnPlayerStartRecruitment));
				CampaignEvents.NewCompanionAdded.AddNonSerializedListener(this, new Action<Hero>(this.OnNewCompanionAdded));
				CampaignEvents.OnUnitRecruitedEvent.AddNonSerializedListener(this, new Action<CharacterObject, int>(this.OnPlayerRecruitUnit));
				CampaignEvents.PlayerInventoryExchangeEvent.AddNonSerializedListener(this, new Action<List<ValueTuple<ItemRosterElement, int>>, List<ValueTuple<ItemRosterElement, int>>, bool>(this.OnPlayerInventoryExchange));
			}
		}

		// Token: 0x0600016D RID: 365 RVA: 0x00005E20 File Offset: 0x00004020
		private void UnregisterEvents()
		{
			Input.OnGamepadActiveStateChanged = (Action)Delegate.Remove(Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
			Game game = Game.Current;
			if (game != null)
			{
				game.EventManager.UnregisterEvent<InventoryTransferItemEvent>(new Action<InventoryTransferItemEvent>(this.OnInventoryTransferItem));
			}
			Game game2 = Game.Current;
			if (game2 != null)
			{
				game2.EventManager.UnregisterEvent<InventoryEquipmentTypeChangedEvent>(new Action<InventoryEquipmentTypeChangedEvent>(this.OnInventoryEquipmentTypeChange));
			}
			Game game3 = Game.Current;
			if (game3 != null)
			{
				game3.EventManager.UnregisterEvent<FocusAddedByPlayerEvent>(new Action<FocusAddedByPlayerEvent>(this.OnFocusAddedByPlayer));
			}
			Game game4 = Game.Current;
			if (game4 != null)
			{
				game4.EventManager.UnregisterEvent<PerkSelectedByPlayerEvent>(new Action<PerkSelectedByPlayerEvent>(this.OnPerkSelectedByPlayer));
			}
			Game game5 = Game.Current;
			if (game5 != null)
			{
				game5.EventManager.UnregisterEvent<ArmyCohesionBoostedByPlayerEvent>(new Action<ArmyCohesionBoostedByPlayerEvent>(this.OnArmyCohesionByPlayerBoosted));
			}
			Game game6 = Game.Current;
			if (game6 != null)
			{
				game6.EventManager.UnregisterEvent<PartyAddedToArmyByPlayerEvent>(new Action<PartyAddedToArmyByPlayerEvent>(this.OnPartyAddedToArmyByPlayer));
			}
			Game game7 = Game.Current;
			if (game7 != null)
			{
				game7.EventManager.UnregisterEvent<InventoryFilterChangedEvent>(new Action<InventoryFilterChangedEvent>(this.OnInventoryFilterChanged));
			}
			Game game8 = Game.Current;
			if (game8 != null)
			{
				game8.EventManager.UnregisterEvent<EncyclopediaPageChangedEvent>(new Action<EncyclopediaPageChangedEvent>(this.OnEncyclopediaPageChanged));
			}
			Game game9 = Game.Current;
			if (game9 != null)
			{
				game9.EventManager.UnregisterEvent<PerkSelectionToggleEvent>(new Action<PerkSelectionToggleEvent>(this.OnPerkSelectionToggle));
			}
			Game game10 = Game.Current;
			if (game10 != null)
			{
				game10.EventManager.UnregisterEvent<PlayerToggleTrackSettlementFromEncyclopediaEvent>(new Action<PlayerToggleTrackSettlementFromEncyclopediaEvent>(this.OnPlayerToggleTrackSettlementFromEncyclopedia));
			}
			Game game11 = Game.Current;
			if (game11 != null)
			{
				game11.EventManager.UnregisterEvent<TutorialContextChangedEvent>(new Action<TutorialContextChangedEvent>(this.OnTutorialContextChanged));
			}
			Game game12 = Game.Current;
			if (game12 != null)
			{
				game12.EventManager.UnregisterEvent<MissionNameMarkerToggleEvent>(new Action<MissionNameMarkerToggleEvent>(this.OnMissionNameMarkerToggled));
			}
			Game game13 = Game.Current;
			if (game13 != null)
			{
				game13.EventManager.UnregisterEvent<PlayerRequestUpgradeTroopEvent>(new Action<PlayerRequestUpgradeTroopEvent>(this.OnPlayerUpgradeTroop));
			}
			Game game14 = Game.Current;
			if (game14 != null)
			{
				game14.EventManager.UnregisterEvent<PlayerStartEngineConstructionEvent>(new Action<PlayerStartEngineConstructionEvent>(this.OnPlayerStartEngineConstruction));
			}
			Game game15 = Game.Current;
			if (game15 != null)
			{
				game15.EventManager.UnregisterEvent<PlayerInspectedPartySpeedEvent>(new Action<PlayerInspectedPartySpeedEvent>(this.OnPlayerInspectedPartySpeed));
			}
			Game game16 = Game.Current;
			if (game16 != null)
			{
				game16.EventManager.UnregisterEvent<MainMapCameraMoveEvent>(new Action<MainMapCameraMoveEvent>(this.OnMainMapCameraMove));
			}
			Game game17 = Game.Current;
			if (game17 != null)
			{
				game17.EventManager.UnregisterEvent<PlayerMoveTroopEvent>(new Action<PlayerMoveTroopEvent>(this.OnPlayerMoveTroop));
			}
			Game game18 = Game.Current;
			if (game18 != null)
			{
				game18.EventManager.UnregisterEvent<MissionPlayerMovementFlagsChangeEvent>(new Action<MissionPlayerMovementFlagsChangeEvent>(this.OnPlayerMovementFlagsChanged));
			}
			Game game19 = Game.Current;
			if (game19 != null)
			{
				game19.EventManager.UnregisterEvent<ResetAllTutorialsEvent>(new Action<ResetAllTutorialsEvent>(this.OnResetAllTutorials));
			}
			Game game20 = Game.Current;
			if (game20 != null)
			{
				game20.EventManager.UnregisterEvent<PlayerToggledUpgradePopupEvent>(new Action<PlayerToggledUpgradePopupEvent>(this.OnPlayerToggledUpgradePopup));
			}
			Game game21 = Game.Current;
			if (game21 != null)
			{
				game21.EventManager.UnregisterEvent<OrderOfBattleHeroAssignedToFormationEvent>(new Action<OrderOfBattleHeroAssignedToFormationEvent>(this.OnOrderOfBattleHeroAssignedToFormation));
			}
			Game.Current.EventManager.UnregisterEvent<OrderOfBattleFormationClassChangedEvent>(new Action<OrderOfBattleFormationClassChangedEvent>(this.OnOrderOfBattleFormationClassChanged));
			Game.Current.EventManager.UnregisterEvent<OrderOfBattleFormationWeightChangedEvent>(new Action<OrderOfBattleFormationWeightChangedEvent>(this.OnOrderOfBattleFormationWeightChanged));
			Game.Current.EventManager.UnregisterEvent<CraftingWeaponClassSelectionOpenedEvent>(new Action<CraftingWeaponClassSelectionOpenedEvent>(this.OnCraftingWeaponClassSelectionOpened));
			Game.Current.EventManager.UnregisterEvent<CraftingWeaponResultPopupToggledEvent>(new Action<CraftingWeaponResultPopupToggledEvent>(this.OnCraftingOnWeaponResultPopupOpened));
			Game.Current.EventManager.UnregisterEvent<CraftingOrderSelectionOpenedEvent>(new Action<CraftingOrderSelectionOpenedEvent>(this.OnCraftingOrderSelectionOpened));
			Game.Current.EventManager.UnregisterEvent<InventoryItemInspectedEvent>(new Action<InventoryItemInspectedEvent>(this.OnInventoryItemInspected));
			Game.Current.EventManager.UnregisterEvent<SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent>(new Action<SettlementMenuOverlayVM.CrimeValueInspectedInSettlementOverlayEvent>(this.OnCrimeValueInspectedInSettlementOverlay));
			Game.Current.EventManager.UnregisterEvent<ClanRoleAssignedThroughClanScreenEvent>(new Action<ClanRoleAssignedThroughClanScreenEvent>(this.OnClanRoleAssignedThroughClanScreen));
			Game.Current.EventManager.UnregisterEvent<PlayerSelectedAKingdomDecisionOptionEvent>(new Action<PlayerSelectedAKingdomDecisionOptionEvent>(this.OnPlayerSelectedAKingdomDecisionOption));
			HotKeyManager.OnKeybindsChanged -= this.OnKeybindsChanged;
			if (Campaign.Current != null && CampaignEventDispatcher.Instance != null)
			{
				CampaignEvents.GameMenuOpened.ClearListeners(this);
				CampaignEvents.CharacterPortraitPopUpOpenedEvent.ClearListeners(this);
				CampaignEvents.CharacterPortraitPopUpClosedEvent.ClearListeners(this);
				CampaignEvents.PlayerStartTalkFromMenu.ClearListeners(this);
				CampaignEvents.GameMenuOptionSelectedEvent.ClearListeners(this);
				CampaignEvents.PlayerStartRecruitmentEvent.ClearListeners(this);
				CampaignEvents.NewCompanionAdded.ClearListeners(this);
				CampaignEvents.OnUnitRecruitedEvent.ClearListeners(this);
				CampaignEvents.PlayerInventoryExchangeEvent.ClearListeners(this);
			}
		}

		// Token: 0x0600016E RID: 366 RVA: 0x00006278 File Offset: 0x00004478
		private void UpdateKeytexts()
		{
			string keyHyperlinkText = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 5));
			GameTexts.SetVariable("MISSION_INDICATORS_KEY", keyHyperlinkText);
			string keyHyperlinkText2 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 4));
			GameTexts.SetVariable("LEAVE_MISSION_KEY", keyHyperlinkText2);
			string keyHyperlinkText3 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MissionOrderHotkeyCategory", 86));
			GameTexts.SetVariable("HOLD_OPEN_ORDER_KEY", keyHyperlinkText3);
			string keyHyperlinkText4 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MissionOrderHotkeyCategory", 68));
			GameTexts.SetVariable("FIRST_ORDER_CATEGORY_KEY", keyHyperlinkText4);
			string keyHyperlinkText5 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MissionOrderHotkeyCategory", 69));
			GameTexts.SetVariable("SECOND_ORDER_CATEGORY_KEY", keyHyperlinkText5);
			string keyHyperlinkText6 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MissionOrderHotkeyCategory", 70));
			GameTexts.SetVariable("THIRD_ORDER_CATEGORY_KEY", keyHyperlinkText6);
			string keyHyperlinkText7 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 0));
			GameTexts.SetVariable("FORWARD_KEY", keyHyperlinkText7);
			string keyHyperlinkText8 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 1));
			GameTexts.SetVariable("BACKWARDS_KEY", keyHyperlinkText8);
			string keyHyperlinkText9 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 2));
			GameTexts.SetVariable("LEFT_KEY", keyHyperlinkText9);
			string keyHyperlinkText10 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("Generic", 3));
			GameTexts.SetVariable("RIGHT_KEY", keyHyperlinkText10);
			string keyHyperlinkText11 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("CombatHotKeyCategory", 13));
			GameTexts.SetVariable("INTERACTION_KEY", keyHyperlinkText11);
			string keyHyperlinkText12 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MapHotKeyCategory", 56));
			GameTexts.SetVariable("MAP_ZOOM_OUT_KEY", keyHyperlinkText12);
			string keyHyperlinkText13 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MapHotKeyCategory", 55));
			GameTexts.SetVariable("MAP_ZOOM_IN_KEY", keyHyperlinkText13);
			string keyHyperlinkText14 = HyperlinkTexts.GetKeyHyperlinkText(HotKeyManager.GetHotKeyId("MapHotKeyCategory", "MapClick"));
			GameTexts.SetVariable("CONSOLE_ACTION_KEY", keyHyperlinkText14);
			GameTexts.SetVariable("CONSOLE_MOVEMENT_KEY", HyperlinkTexts.GetKeyHyperlinkText("ControllerLStick"));
			GameTexts.SetVariable("CONSOLE_CAMERA_KEY", HyperlinkTexts.GetKeyHyperlinkText("ControllerRStick"));
			GameTexts.SetVariable("UPGRADE_ICON", "{=!}<img src=\"PartyScreen\\upgrade_icon\" extend=\"5\">");
		}

		// Token: 0x04000061 RID: 97
		internal static GauntletTutorialSystem Current;

		// Token: 0x04000062 RID: 98
		private readonly Dictionary<string, TutorialItemBase> _mappedTutorialItems;

		// Token: 0x04000063 RID: 99
		private CampaignTutorial _currentTutorial;

		// Token: 0x04000064 RID: 100
		private TutorialItemBase _currentTutorialVisualItem;

		// Token: 0x04000065 RID: 101
		private List<TutorialItemBase> _currentlyAvailableTutorialItems;

		// Token: 0x04000066 RID: 102
		private TutorialItemBase[] _currentlyAvailableTutorialItemsCopy;

		// Token: 0x04000067 RID: 103
		private TutorialVM _dataSource;

		// Token: 0x04000068 RID: 104
		private bool _isInitialized;

		// Token: 0x04000069 RID: 105
		private List<CampaignTutorial> _currentCampaignTutorials;

		// Token: 0x0400006A RID: 106
		private IGauntletMovie _movie;
	}
}
