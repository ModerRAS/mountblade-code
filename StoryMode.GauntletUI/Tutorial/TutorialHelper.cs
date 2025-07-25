using System;
using System.Collections.Generic;
using System.Linq;
using Helpers;
using SandBox.GauntletUI;
using SandBox.Missions.MissionLogics;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.CampaignBehaviors;
using TaleWorlds.CampaignSystem.CraftingSystem;
using TaleWorlds.CampaignSystem.GameMenus;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.CampaignSystem.Inventory;
using TaleWorlds.CampaignSystem.Party;
using TaleWorlds.CampaignSystem.Roster;
using TaleWorlds.CampaignSystem.Settlements;
using TaleWorlds.CampaignSystem.Settlements.Locations;
using TaleWorlds.CampaignSystem.ViewModelCollection.Encyclopedia;
using TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement;
using TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement.Decisions;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade;
using TaleWorlds.ObjectSystem;
using TaleWorlds.ScreenSystem;

namespace StoryMode.GauntletUI.Tutorial
{
	// Token: 0x0200003E RID: 62
	public static class TutorialHelper
	{
		// Token: 0x17000004 RID: 4
		// (get) Token: 0x0600016F RID: 367 RVA: 0x00006464 File Offset: 0x00004664
		public static bool PlayerIsInAnySettlement
		{
			get
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				return currentSettlement != null && (currentSettlement.IsFortification || currentSettlement.IsVillage);
			}
		}

		// Token: 0x17000005 RID: 5
		// (get) Token: 0x06000170 RID: 368 RVA: 0x0000648C File Offset: 0x0000468C
		public static bool PlayerIsInAnyVillage
		{
			get
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				return currentSettlement != null && currentSettlement.IsVillage;
			}
		}

		// Token: 0x17000006 RID: 6
		// (get) Token: 0x06000171 RID: 369 RVA: 0x000064A0 File Offset: 0x000046A0
		public static bool IsOrderingAvailable
		{
			get
			{
				Mission mission = Mission.Current;
				if (((mission != null) ? mission.PlayerTeam : null) != null)
				{
					for (int i = 0; i < Mission.Current.PlayerTeam.FormationsIncludingEmpty.Count; i++)
					{
						Formation formation = Mission.Current.PlayerTeam.FormationsIncludingEmpty[i];
						if (formation.PlayerOwner == Agent.Main && formation.CountOfUnits > 0)
						{
							return true;
						}
					}
				}
				return false;
			}
		}

		// Token: 0x17000007 RID: 7
		// (get) Token: 0x06000172 RID: 370 RVA: 0x0000650E File Offset: 0x0000470E
		public static bool IsCharacterPopUpWindowOpen
		{
			get
			{
				return GauntletTutorialSystem.Current.IsCharacterPortraitPopupOpen;
			}
		}

		// Token: 0x17000008 RID: 8
		// (get) Token: 0x06000173 RID: 371 RVA: 0x0000651A File Offset: 0x0000471A
		public static EncyclopediaPages CurrentEncyclopediaPage
		{
			get
			{
				return GauntletTutorialSystem.Current.CurrentEncyclopediaPageContext;
			}
		}

		// Token: 0x17000009 RID: 9
		// (get) Token: 0x06000174 RID: 372 RVA: 0x00006526 File Offset: 0x00004726
		public static TutorialContexts CurrentContext
		{
			get
			{
				return GauntletTutorialSystem.Current.CurrentContext;
			}
		}

		// Token: 0x1700000A RID: 10
		// (get) Token: 0x06000175 RID: 373 RVA: 0x00006534 File Offset: 0x00004734
		public static bool PlayerIsInNonEnemyTown
		{
			get
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				return currentSettlement != null && currentSettlement.IsTown && !FactionManager.IsAtWarAgainstFaction(currentSettlement.MapFaction, MobileParty.MainParty.MapFaction);
			}
		}

		// Token: 0x1700000B RID: 11
		// (get) Token: 0x06000176 RID: 374 RVA: 0x0000656C File Offset: 0x0000476C
		public static string ActiveVillageRaidGameMenuID
		{
			get
			{
				return "raiding_village";
			}
		}

		// Token: 0x1700000C RID: 12
		// (get) Token: 0x06000177 RID: 375 RVA: 0x00006573 File Offset: 0x00004773
		public static bool IsActiveVillageRaidGameMenuOpen
		{
			get
			{
				Campaign campaign = Campaign.Current;
				string a;
				if (campaign == null)
				{
					a = null;
				}
				else
				{
					MenuContext currentMenuContext = campaign.CurrentMenuContext;
					if (currentMenuContext == null)
					{
						a = null;
					}
					else
					{
						GameMenu gameMenu = currentMenuContext.GameMenu;
						a = ((gameMenu != null) ? gameMenu.StringId : null);
					}
				}
				return a == TutorialHelper.ActiveVillageRaidGameMenuID;
			}
		}

		// Token: 0x1700000D RID: 13
		// (get) Token: 0x06000178 RID: 376 RVA: 0x000065A8 File Offset: 0x000047A8
		public static bool TownMenuIsOpen
		{
			get
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				if (currentSettlement != null && currentSettlement.IsTown)
				{
					MenuContext currentMenuContext = Campaign.Current.CurrentMenuContext;
					string a;
					if (currentMenuContext == null)
					{
						a = null;
					}
					else
					{
						GameMenu gameMenu = currentMenuContext.GameMenu;
						a = ((gameMenu != null) ? gameMenu.StringId : null);
					}
					return a == "town";
				}
				return false;
			}
		}

		// Token: 0x1700000E RID: 14
		// (get) Token: 0x06000179 RID: 377 RVA: 0x000065F6 File Offset: 0x000047F6
		public static bool VillageMenuIsOpen
		{
			get
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				return currentSettlement != null && currentSettlement.IsVillage;
			}
		}

		// Token: 0x1700000F RID: 15
		// (get) Token: 0x0600017A RID: 378 RVA: 0x00006608 File Offset: 0x00004808
		public static bool BackStreetMenuIsOpen
		{
			get
			{
				Settlement currentSettlement = Settlement.CurrentSettlement;
				if (currentSettlement != null && currentSettlement.IsTown && LocationComplex.Current != null)
				{
					Location locationWithId = LocationComplex.Current.GetLocationWithId("tavern");
					return TutorialHelper.GetMenuLocations.Contains(locationWithId);
				}
				return false;
			}
		}

		// Token: 0x17000010 RID: 16
		// (get) Token: 0x0600017B RID: 379 RVA: 0x0000664C File Offset: 0x0000484C
		public static bool IsPlayerInABattleMission
		{
			get
			{
				Mission mission = Mission.Current;
				return mission != null && mission.Mode == MissionMode.Battle;
			}
		}

		// Token: 0x17000011 RID: 17
		// (get) Token: 0x0600017C RID: 380 RVA: 0x0000666D File Offset: 0x0000486D
		public static bool IsOrderOfBattleOpenAndReady
		{
			get
			{
				Mission mission = Mission.Current;
				return mission != null && mission.Mode == MissionMode.Deployment && !LoadingWindow.IsLoadingWindowActive;
			}
		}

		// Token: 0x17000012 RID: 18
		// (get) Token: 0x0600017D RID: 381 RVA: 0x00006690 File Offset: 0x00004890
		public static bool CanPlayerAssignHimselfToFormation
		{
			get
			{
				if (!TutorialHelper.IsOrderOfBattleOpenAndReady)
				{
					return false;
				}
				Mission mission = Mission.Current;
				if (mission == null)
				{
					return false;
				}
				return mission.PlayerTeam.FormationsIncludingEmpty.Any((Formation x) => x.CountOfUnits > 0 && x.Captain == null);
			}
		}

		// Token: 0x17000013 RID: 19
		// (get) Token: 0x0600017E RID: 382 RVA: 0x000066E0 File Offset: 0x000048E0
		public static bool IsPlayerInAFight
		{
			get
			{
				Mission mission = Mission.Current;
				MissionMode? missionMode = (mission != null) ? new MissionMode?(mission.Mode) : null;
				if (missionMode != null)
				{
					MissionMode? missionMode2 = missionMode;
					MissionMode missionMode3 = MissionMode.Battle;
					if (!(missionMode2.GetValueOrDefault() == missionMode3 & missionMode2 != null))
					{
						missionMode2 = missionMode;
						missionMode3 = MissionMode.Duel;
						if (!(missionMode2.GetValueOrDefault() == missionMode3 & missionMode2 != null))
						{
							missionMode2 = missionMode;
							missionMode3 = MissionMode.Tournament;
							return missionMode2.GetValueOrDefault() == missionMode3 & missionMode2 != null;
						}
					}
					return true;
				}
				return false;
			}
		}

		// Token: 0x17000014 RID: 20
		// (get) Token: 0x0600017F RID: 383 RVA: 0x00006760 File Offset: 0x00004960
		public static bool IsPlayerEncounterLeader
		{
			get
			{
				Mission mission = Mission.Current;
				if (mission == null)
				{
					return false;
				}
				Team playerTeam = mission.PlayerTeam;
				bool? flag = (playerTeam != null) ? new bool?(playerTeam.IsPlayerGeneral) : null;
				bool flag2 = true;
				return flag.GetValueOrDefault() == flag2 & flag != null;
			}
		}

		// Token: 0x17000015 RID: 21
		// (get) Token: 0x06000180 RID: 384 RVA: 0x000067AC File Offset: 0x000049AC
		public static bool IsPlayerInAHideoutBattleMission
		{
			get
			{
				Mission mission = Mission.Current;
				return mission != null && mission.HasMissionBehavior<HideoutMissionController>();
			}
		}

		// Token: 0x17000016 RID: 22
		// (get) Token: 0x06000181 RID: 385 RVA: 0x000067CA File Offset: 0x000049CA
		public static IList<Location> GetMenuLocations
		{
			get
			{
				return Campaign.Current.GameMenuManager.MenuLocations;
			}
		}

		// Token: 0x17000017 RID: 23
		// (get) Token: 0x06000182 RID: 386 RVA: 0x000067DB File Offset: 0x000049DB
		public static bool PlayerIsSafeOnMap
		{
			get
			{
				return !TutorialHelper.IsActiveVillageRaidGameMenuOpen;
			}
		}

		// Token: 0x17000018 RID: 24
		// (get) Token: 0x06000183 RID: 387 RVA: 0x000067E8 File Offset: 0x000049E8
		public static bool IsCurrentTownHaveDoableCraftingOrder
		{
			get
			{
				ICraftingCampaignBehavior campaignBehavior = Campaign.Current.GetCampaignBehavior<ICraftingCampaignBehavior>();
				CraftingCampaignBehavior.CraftingOrderSlots craftingOrderSlots;
				if (campaignBehavior == null)
				{
					craftingOrderSlots = null;
				}
				else
				{
					IReadOnlyDictionary<Town, CraftingCampaignBehavior.CraftingOrderSlots> craftingOrders = campaignBehavior.CraftingOrders;
					Settlement currentSettlement = Settlement.CurrentSettlement;
					craftingOrderSlots = craftingOrders[(currentSettlement != null) ? currentSettlement.Town : null];
				}
				CraftingCampaignBehavior.CraftingOrderSlots craftingOrderSlots2 = craftingOrderSlots;
				List<CraftingOrder> list;
				if (craftingOrderSlots2 == null)
				{
					list = null;
				}
				else
				{
					list = (from x in craftingOrderSlots2.Slots
					where x != null
					select x).ToList<CraftingOrder>();
				}
				List<CraftingOrder> list2 = list;
				PartyBase mainParty = PartyBase.MainParty;
				MBList<TroopRosterElement> mblist = (mainParty != null) ? mainParty.MemberRoster.GetTroopRoster() : null;
				if (campaignBehavior == null || craftingOrderSlots2 == null || list2 == null || mblist == null)
				{
					return false;
				}
				for (int i = 0; i < mblist.Count; i++)
				{
					TroopRosterElement troopRosterElement = mblist[i];
					if (troopRosterElement.Character.IsHero)
					{
						for (int j = 0; j < list2.Count; j++)
						{
							if (list2[j].IsOrderAvailableForHero(troopRosterElement.Character.HeroObject))
							{
								return true;
							}
						}
					}
				}
				return false;
			}
		}

		// Token: 0x17000019 RID: 25
		// (get) Token: 0x06000184 RID: 388 RVA: 0x000068D8 File Offset: 0x00004AD8
		public static bool CurrentInventoryScreenIncludesBannerItem
		{
			get
			{
				InventoryState inventoryState;
				if ((inventoryState = (Game.Current.GameStateManager.ActiveState as InventoryState)) != null)
				{
					InventoryLogic inventoryLogic = inventoryState.InventoryLogic;
					IEnumerable<ItemRosterElement> enumerable = (inventoryLogic != null) ? inventoryLogic.GetElementsInRoster(0) : null;
					if (enumerable != null)
					{
						foreach (ItemRosterElement itemRosterElement in enumerable)
						{
							if (itemRosterElement.EquipmentElement.Item.IsBannerItem)
							{
								return true;
							}
						}
						return false;
					}
				}
				return false;
			}
		}

		// Token: 0x1700001A RID: 26
		// (get) Token: 0x06000185 RID: 389 RVA: 0x00006968 File Offset: 0x00004B68
		public static bool PlayerHasUnassignedRolesAndMember
		{
			get
			{
				bool flag = false;
				PartyBase mainParty = PartyBase.MainParty;
				MBList<TroopRosterElement> mblist = (mainParty != null) ? mainParty.MemberRoster.GetTroopRoster() : null;
				for (int i = 0; i < mblist.Count; i++)
				{
					TroopRosterElement troopRosterElement = mblist[i];
					if (troopRosterElement.Character.IsHero && !troopRosterElement.Character.IsPlayerCharacter && MobileParty.MainParty.GetHeroPerkRole(troopRosterElement.Character.HeroObject) == null)
					{
						flag = true;
						break;
					}
				}
				bool flag2 = MobileParty.MainParty.GetRoleHolder(7) == null || MobileParty.MainParty.GetRoleHolder(8) == null || MobileParty.MainParty.GetRoleHolder(10) == null || MobileParty.MainParty.GetRoleHolder(9) == null;
				return flag && flag2;
			}
		}

		// Token: 0x1700001B RID: 27
		// (get) Token: 0x06000186 RID: 390 RVA: 0x00006A20 File Offset: 0x00004C20
		public static bool PlayerCanRecruit
		{
			get
			{
				if (TutorialHelper.PlayerIsInAnySettlement && (TutorialHelper.TownMenuIsOpen || TutorialHelper.VillageMenuIsOpen) && !Hero.MainHero.IsPrisoner && MobileParty.MainParty.MemberRoster.TotalManCount < PartyBase.MainParty.PartySizeLimit)
				{
					foreach (Hero hero in Settlement.CurrentSettlement.Notables)
					{
						int num = 0;
						foreach (CharacterObject characterObject in HeroHelper.GetVolunteerTroopsOfHeroForRecruitment(hero))
						{
							if (characterObject != null && HeroHelper.HeroCanRecruitFromHero(hero, Hero.MainHero, num))
							{
								int troopRecruitmentCost = Campaign.Current.Models.PartyWageModel.GetTroopRecruitmentCost(characterObject, Hero.MainHero, false);
								return Hero.MainHero.Gold >= 5 * troopRecruitmentCost;
							}
							num++;
						}
					}
					return false;
				}
				return false;
			}
		}

		// Token: 0x1700001C RID: 28
		// (get) Token: 0x06000187 RID: 391 RVA: 0x00006B4C File Offset: 0x00004D4C
		public static bool IsKingdomDecisionPanelActiveAndHasOptions
		{
			get
			{
				GauntletKingdomScreen gauntletKingdomScreen = ScreenManager.TopScreen as GauntletKingdomScreen;
				if (gauntletKingdomScreen != null)
				{
					KingdomManagementVM dataSource = gauntletKingdomScreen.DataSource;
					bool? flag;
					if (dataSource == null)
					{
						flag = null;
					}
					else
					{
						KingdomDecisionsVM decision = dataSource.Decision;
						flag = ((decision != null) ? new bool?(decision.IsCurrentDecisionActive) : null);
					}
					bool? flag2 = flag;
					bool flag3 = true;
					if (flag2.GetValueOrDefault() == flag3 & flag2 != null)
					{
						return gauntletKingdomScreen.DataSource.Decision.CurrentDecision.DecisionOptionsList.Count > 0;
					}
				}
				return false;
			}
		}

		// Token: 0x1700001D RID: 29
		// (get) Token: 0x06000188 RID: 392 RVA: 0x00006BD0 File Offset: 0x00004DD0
		public static Location CurrentMissionLocation
		{
			get
			{
				ICampaignMission campaignMission = CampaignMission.Current;
				if (campaignMission == null)
				{
					return null;
				}
				return campaignMission.Location;
			}
		}

		// Token: 0x1700001E RID: 30
		// (get) Token: 0x06000189 RID: 393 RVA: 0x00006BE4 File Offset: 0x00004DE4
		public static bool BuyingFoodBaseConditions
		{
			get
			{
				if ((TutorialHelper.TownMenuIsOpen || TutorialHelper.VillageMenuIsOpen || TutorialHelper.CurrentContext == TutorialContexts.InventoryScreen) && Settlement.CurrentSettlement != null)
				{
					ItemObject @object = MBObjectManager.Instance.GetObject<ItemObject>("grain");
					if (@object != null)
					{
						ItemRoster itemRoster = Settlement.CurrentSettlement.ItemRoster;
						int num = itemRoster.FindIndexOfItem(@object);
						if (num >= 0)
						{
							int elementUnitCost = itemRoster.GetElementUnitCost(num);
							return Hero.MainHero.Gold >= 5 * elementUnitCost;
						}
					}
				}
				return false;
			}
		}

		// Token: 0x1700001F RID: 31
		// (get) Token: 0x0600018A RID: 394 RVA: 0x00006C59 File Offset: 0x00004E59
		public static int BuyGrainAmount
		{
			get
			{
				return 2;
			}
		}

		// Token: 0x17000020 RID: 32
		// (get) Token: 0x0600018B RID: 395 RVA: 0x00006C5C File Offset: 0x00004E5C
		public static int RecruitTroopAmount
		{
			get
			{
				return 4;
			}
		}

		// Token: 0x17000021 RID: 33
		// (get) Token: 0x0600018C RID: 396 RVA: 0x00006C60 File Offset: 0x00004E60
		public static bool PlayerHasAnyUpgradeableTroop
		{
			get
			{
				foreach (TroopRosterElement troopRosterElement in MobileParty.MainParty.MemberRoster.GetTroopRoster())
				{
					CharacterObject character = troopRosterElement.Character;
					if (!character.IsHero && troopRosterElement.Number > 0)
					{
						for (int i = 0; i < character.UpgradeTargets.Length; i++)
						{
							if (character.GetUpgradeXpCost(PartyBase.MainParty, i) <= troopRosterElement.Xp)
							{
								CharacterObject characterObject = character.UpgradeTargets[i];
								if (characterObject.UpgradeRequiresItemFromCategory == null)
								{
									return true;
								}
								foreach (ItemRosterElement itemRosterElement in MobileParty.MainParty.ItemRoster)
								{
									if (itemRosterElement.EquipmentElement.Item.ItemCategory == characterObject.UpgradeRequiresItemFromCategory && itemRosterElement.Amount > 0)
									{
										return true;
									}
								}
							}
						}
					}
				}
				return false;
			}
		}

		// Token: 0x17000022 RID: 34
		// (get) Token: 0x0600018D RID: 397 RVA: 0x00006D94 File Offset: 0x00004F94
		public static bool PlayerIsInAConversation
		{
			get
			{
				return !CharacterObject.ConversationCharacters.IsEmpty<CharacterObject>();
			}
		}

		// Token: 0x0600018E RID: 398 RVA: 0x00006DA4 File Offset: 0x00004FA4
		public static bool? IsThereAvailableCompanionInLocation(Location location)
		{
			if (location == null)
			{
				return null;
			}
			return new bool?(location.GetCharacterList().Any((LocationCharacter x) => x.Character.IsHero && x.Character.HeroObject.IsWanderer && !x.Character.HeroObject.IsPlayerCompanion));
		}

		// Token: 0x17000023 RID: 35
		// (get) Token: 0x0600018F RID: 399 RVA: 0x00006DED File Offset: 0x00004FED
		public static DateTime CurrentTime
		{
			get
			{
				return DateTime.Now;
			}
		}

		// Token: 0x17000024 RID: 36
		// (get) Token: 0x06000190 RID: 400 RVA: 0x00006DF4 File Offset: 0x00004FF4
		public static int MinimumGoldForCompanion
		{
			get
			{
				return 999;
			}
		}

		// Token: 0x17000025 RID: 37
		// (get) Token: 0x06000191 RID: 401 RVA: 0x00006DFB File Offset: 0x00004FFB
		public static float MaximumSpeedForPartyForSpeedTutorial
		{
			get
			{
				return 4f;
			}
		}

		// Token: 0x17000026 RID: 38
		// (get) Token: 0x06000192 RID: 402 RVA: 0x00006E02 File Offset: 0x00005002
		public static float MaxCohesionForCohesionTutorial
		{
			get
			{
				return 30f;
			}
		}
	}
}
