using System;
using SandBox.View.Map;
using StoryMode.StoryModePhases;
using TaleWorlds.CampaignSystem;
using TaleWorlds.CampaignSystem.ViewModelCollection.GameMenu.Overlay;
using TaleWorlds.CampaignSystem.ViewModelCollection.KingdomManagement;
using TaleWorlds.Core;
using TaleWorlds.Localization;

namespace StoryMode.GauntletUI.Permissions
{
	// Token: 0x02000040 RID: 64
	public class StoryModePermissionsSystem
	{
		// Token: 0x060001C6 RID: 454 RVA: 0x00006EBB File Offset: 0x000050BB
		private StoryModePermissionsSystem()
		{
			this.RegisterEvents();
		}

		// Token: 0x060001C7 RID: 455 RVA: 0x00006EC9 File Offset: 0x000050C9
		public static void OnInitialize()
		{
			if (StoryModePermissionsSystem.Current == null)
			{
				StoryModePermissionsSystem.Current = new StoryModePermissionsSystem();
			}
		}

		// Token: 0x060001C8 RID: 456 RVA: 0x00006EDC File Offset: 0x000050DC
		internal static void OnUnload()
		{
			if (StoryModePermissionsSystem.Current != null)
			{
				StoryModePermissionsSystem.Current.UnregisterEvents();
				StoryModePermissionsSystem.Current = null;
			}
		}

		// Token: 0x060001C9 RID: 457 RVA: 0x00006EF5 File Offset: 0x000050F5
		private void OnClanScreenPermission(MapNavigationHandler.ClanScreenPermissionEvent obj)
		{
			StoryModeManager storyModeManager = StoryModeManager.Current;
			if (storyModeManager != null && storyModeManager.MainStoryLine.IsPlayerInteractionRestricted)
			{
				obj.IsClanScreenAvailable(false, new TextObject("{=75nwCTEn}Clan Screen is disabled during Tutorial.", null));
			}
		}

		// Token: 0x060001CA RID: 458 RVA: 0x00006F28 File Offset: 0x00005128
		private void OnSettlementOverlayTalkPermission(SettlementMenuOverlayVM.SettlementOverlayTalkPermissionEvent obj)
		{
			bool flag = StoryModeManager.Current != null;
			TutorialPhase instance = TutorialPhase.Instance;
			bool flag2 = instance != null && instance.TutorialQuestPhase >= TutorialQuestPhase.RecruitAndPurchaseStarted;
			StoryModeManager storyModeManager = StoryModeManager.Current;
			bool flag3;
			if (storyModeManager == null)
			{
				flag3 = false;
			}
			else
			{
				MainStoryLine mainStoryLine = storyModeManager.MainStoryLine;
				bool? flag4 = (mainStoryLine != null) ? new bool?(mainStoryLine.TutorialPhase.IsCompleted) : null;
				bool flag5 = true;
				flag3 = (flag4.GetValueOrDefault() == flag5 & flag4 != null);
			}
			bool flag6 = flag3;
			if (flag && !flag2 && !flag6)
			{
				obj.IsTalkAvailable(false, new TextObject("{=UjERCi2F}This feature is disabled.", null));
			}
		}

		// Token: 0x060001CB RID: 459 RVA: 0x00006FBC File Offset: 0x000051BC
		private void OnSettlementOverlayQuickTalkPermission(SettlementMenuOverlayVM.SettlementOverylayQuickTalkPermissionEvent obj)
		{
			bool flag = StoryModeManager.Current != null;
			TutorialPhase instance = TutorialPhase.Instance;
			bool flag2 = instance != null && instance.TutorialQuestPhase >= TutorialQuestPhase.Finalized;
			StoryModeManager storyModeManager = StoryModeManager.Current;
			bool flag3;
			if (storyModeManager == null)
			{
				flag3 = false;
			}
			else
			{
				MainStoryLine mainStoryLine = storyModeManager.MainStoryLine;
				bool? flag4 = (mainStoryLine != null) ? new bool?(mainStoryLine.TutorialPhase.IsCompleted) : null;
				bool flag5 = true;
				flag3 = (flag4.GetValueOrDefault() == flag5 & flag4 != null);
			}
			bool flag6 = flag3;
			if (flag && !flag2 && !flag6)
			{
				obj.IsTalkAvailable(false, new TextObject("{=UjERCi2F}This feature is disabled.", null));
			}
		}

		// Token: 0x060001CC RID: 460 RVA: 0x00007050 File Offset: 0x00005250
		private void OnSettlementOverlayLeaveMemberPermission(SettlementMenuOverlayVM.SettlementOverlayLeaveCharacterPermissionEvent obj)
		{
			bool flag = StoryModeManager.Current != null;
			TutorialPhase instance = TutorialPhase.Instance;
			bool flag2 = instance != null && instance.TutorialQuestPhase >= TutorialQuestPhase.RecruitAndPurchaseStarted;
			StoryModeManager storyModeManager = StoryModeManager.Current;
			bool flag3;
			if (storyModeManager == null)
			{
				flag3 = false;
			}
			else
			{
				MainStoryLine mainStoryLine = storyModeManager.MainStoryLine;
				bool? flag4 = (mainStoryLine != null) ? new bool?(mainStoryLine.TutorialPhase.IsCompleted) : null;
				bool flag5 = true;
				flag3 = (flag4.GetValueOrDefault() == flag5 & flag4 != null);
			}
			bool flag6 = flag3;
			if (flag && !flag2 && !flag6)
			{
				obj.IsLeaveAvailable(false, new TextObject("{=UjERCi2F}This feature is disabled.", null));
			}
		}

		// Token: 0x060001CD RID: 461 RVA: 0x000070E4 File Offset: 0x000052E4
		private void OnLeaveKingdomPermissionEvent(LeaveKingdomPermissionEvent obj)
		{
			StoryModeManager storyModeManager = StoryModeManager.Current;
			if (((storyModeManager != null) ? storyModeManager.MainStoryLine.PlayerSupportedKingdom : null) != null && Clan.PlayerClan.Kingdom == StoryModeManager.Current.MainStoryLine.PlayerSupportedKingdom)
			{
				Action<bool, TextObject> isLeaveKingdomPossbile = obj.IsLeaveKingdomPossbile;
				if (isLeaveKingdomPossbile == null)
				{
					return;
				}
				isLeaveKingdomPossbile(true, new TextObject("{=WFNLizqL}You've supported a kingdom through main story line. Leaving this kingdom will fail your quest.{newline}{newline}Are you sure?", null));
			}
		}

		// Token: 0x060001CE RID: 462 RVA: 0x00007148 File Offset: 0x00005348
		private void RegisterEvents()
		{
			Game.Current.EventManager.RegisterEvent<MapNavigationHandler.ClanScreenPermissionEvent>(new Action<MapNavigationHandler.ClanScreenPermissionEvent>(this.OnClanScreenPermission));
			Game.Current.EventManager.RegisterEvent<SettlementMenuOverlayVM.SettlementOverlayTalkPermissionEvent>(new Action<SettlementMenuOverlayVM.SettlementOverlayTalkPermissionEvent>(this.OnSettlementOverlayTalkPermission));
			Game.Current.EventManager.RegisterEvent<SettlementMenuOverlayVM.SettlementOverylayQuickTalkPermissionEvent>(new Action<SettlementMenuOverlayVM.SettlementOverylayQuickTalkPermissionEvent>(this.OnSettlementOverlayQuickTalkPermission));
			Game.Current.EventManager.RegisterEvent<SettlementMenuOverlayVM.SettlementOverlayLeaveCharacterPermissionEvent>(new Action<SettlementMenuOverlayVM.SettlementOverlayLeaveCharacterPermissionEvent>(this.OnSettlementOverlayLeaveMemberPermission));
			Game.Current.EventManager.RegisterEvent<LeaveKingdomPermissionEvent>(new Action<LeaveKingdomPermissionEvent>(this.OnLeaveKingdomPermissionEvent));
		}

		// Token: 0x060001CF RID: 463 RVA: 0x000071DC File Offset: 0x000053DC
		internal void UnregisterEvents()
		{
			Game.Current.EventManager.UnregisterEvent<MapNavigationHandler.ClanScreenPermissionEvent>(new Action<MapNavigationHandler.ClanScreenPermissionEvent>(this.OnClanScreenPermission));
			Game.Current.EventManager.UnregisterEvent<SettlementMenuOverlayVM.SettlementOverlayTalkPermissionEvent>(new Action<SettlementMenuOverlayVM.SettlementOverlayTalkPermissionEvent>(this.OnSettlementOverlayTalkPermission));
			Game.Current.EventManager.UnregisterEvent<SettlementMenuOverlayVM.SettlementOverylayQuickTalkPermissionEvent>(new Action<SettlementMenuOverlayVM.SettlementOverylayQuickTalkPermissionEvent>(this.OnSettlementOverlayQuickTalkPermission));
			Game.Current.EventManager.UnregisterEvent<SettlementMenuOverlayVM.SettlementOverlayLeaveCharacterPermissionEvent>(new Action<SettlementMenuOverlayVM.SettlementOverlayLeaveCharacterPermissionEvent>(this.OnSettlementOverlayLeaveMemberPermission));
			Game.Current.EventManager.UnregisterEvent<LeaveKingdomPermissionEvent>(new Action<LeaveKingdomPermissionEvent>(this.OnLeaveKingdomPermissionEvent));
		}

		// Token: 0x0400006F RID: 111
		private static StoryModePermissionsSystem Current;
	}
}
