using System;
using TaleWorlds.Core;
using TaleWorlds.Core.ViewModelCollection.Information;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;

namespace TaleWorlds.CampaignSystem.ViewModelCollection.Map.MapBar
{
	// Token: 0x02000055 RID: 85
	public class MapTimeControlVM : ViewModel
	{
		// Token: 0x170001F2 RID: 498
		// (get) Token: 0x060006A7 RID: 1703 RVA: 0x0001ECCF File Offset: 0x0001CECF
		// (set) Token: 0x060006A8 RID: 1704 RVA: 0x0001ECD7 File Offset: 0x0001CED7
		public bool IsInBattleSimulation { get; set; }

		// Token: 0x170001F3 RID: 499
		// (get) Token: 0x060006A9 RID: 1705 RVA: 0x0001ECE0 File Offset: 0x0001CEE0
		// (set) Token: 0x060006AA RID: 1706 RVA: 0x0001ECE8 File Offset: 0x0001CEE8
		public bool IsInRecruitment { get; set; }

		// Token: 0x170001F4 RID: 500
		// (get) Token: 0x060006AB RID: 1707 RVA: 0x0001ECF1 File Offset: 0x0001CEF1
		// (set) Token: 0x060006AC RID: 1708 RVA: 0x0001ECF9 File Offset: 0x0001CEF9
		public bool IsEncyclopediaOpen { get; set; }

		// Token: 0x170001F5 RID: 501
		// (get) Token: 0x060006AD RID: 1709 RVA: 0x0001ED02 File Offset: 0x0001CF02
		// (set) Token: 0x060006AE RID: 1710 RVA: 0x0001ED0A File Offset: 0x0001CF0A
		public bool IsInArmyManagement { get; set; }

		// Token: 0x170001F6 RID: 502
		// (get) Token: 0x060006AF RID: 1711 RVA: 0x0001ED13 File Offset: 0x0001CF13
		// (set) Token: 0x060006B0 RID: 1712 RVA: 0x0001ED1B File Offset: 0x0001CF1B
		public bool IsInTownManagement { get; set; }

		// Token: 0x170001F7 RID: 503
		// (get) Token: 0x060006B1 RID: 1713 RVA: 0x0001ED24 File Offset: 0x0001CF24
		// (set) Token: 0x060006B2 RID: 1714 RVA: 0x0001ED2C File Offset: 0x0001CF2C
		public bool IsInHideoutTroopManage { get; set; }

		// Token: 0x170001F8 RID: 504
		// (get) Token: 0x060006B3 RID: 1715 RVA: 0x0001ED35 File Offset: 0x0001CF35
		// (set) Token: 0x060006B4 RID: 1716 RVA: 0x0001ED3D File Offset: 0x0001CF3D
		public bool IsInMap { get; set; }

		// Token: 0x170001F9 RID: 505
		// (get) Token: 0x060006B5 RID: 1717 RVA: 0x0001ED46 File Offset: 0x0001CF46
		// (set) Token: 0x060006B6 RID: 1718 RVA: 0x0001ED4E File Offset: 0x0001CF4E
		public bool IsInCampaignOptions { get; set; }

		// Token: 0x170001FA RID: 506
		// (get) Token: 0x060006B7 RID: 1719 RVA: 0x0001ED57 File Offset: 0x0001CF57
		// (set) Token: 0x060006B8 RID: 1720 RVA: 0x0001ED5F File Offset: 0x0001CF5F
		public bool IsEscapeMenuOpened { get; set; }

		// Token: 0x170001FB RID: 507
		// (get) Token: 0x060006B9 RID: 1721 RVA: 0x0001ED68 File Offset: 0x0001CF68
		// (set) Token: 0x060006BA RID: 1722 RVA: 0x0001ED70 File Offset: 0x0001CF70
		public bool IsMarriageOfferPopupActive { get; set; }

		// Token: 0x170001FC RID: 508
		// (get) Token: 0x060006BB RID: 1723 RVA: 0x0001ED79 File Offset: 0x0001CF79
		// (set) Token: 0x060006BC RID: 1724 RVA: 0x0001ED81 File Offset: 0x0001CF81
		public bool IsMapCheatsActive { get; set; }

		// Token: 0x060006BD RID: 1725 RVA: 0x0001ED8C File Offset: 0x0001CF8C
		public MapTimeControlVM(Func<MapBarShortcuts> getMapBarShortcuts, Action onTimeFlowStateChange, Action onCameraResetted)
		{
			this._onTimeFlowStateChange = onTimeFlowStateChange;
			this._getMapBarShortcuts = getMapBarShortcuts;
			this._onCameraReset = onCameraResetted;
			this.IsCenterPanelEnabled = false;
			this._lastSetDate = CampaignTime.Zero;
			this.PlayHint = new BasicTooltipViewModel();
			this.FastForwardHint = new BasicTooltipViewModel();
			this.PauseHint = new BasicTooltipViewModel();
			Input.OnGamepadActiveStateChanged = (Action)Delegate.Combine(Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
			CampaignEvents.OnSaveStartedEvent.AddNonSerializedListener(this, new Action(this.OnSaveStarted));
			CampaignEvents.OnSaveOverEvent.AddNonSerializedListener(this, new Action<bool, string>(this.OnSaveOver));
			this.RefreshValues();
		}

		// Token: 0x060006BE RID: 1726 RVA: 0x0001EE44 File Offset: 0x0001D044
		public override void RefreshValues()
		{
			base.RefreshValues();
			this._shortcuts = this._getMapBarShortcuts();
			if (Input.IsGamepadActive)
			{
				this.PlayHint.SetHintCallback(() => GameTexts.FindText("str_play", null).ToString());
				this.FastForwardHint.SetHintCallback(() => GameTexts.FindText("str_fast_forward", null).ToString());
				this.PauseHint.SetHintCallback(() => GameTexts.FindText("str_pause", null).ToString());
			}
			else
			{
				this.PlayHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_play", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.PlayHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
				this.FastForwardHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_fast_forward", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.FastForwardHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
				this.PauseHint.SetHintCallback(delegate
				{
					GameTexts.SetVariable("TEXT", GameTexts.FindText("str_pause", null).ToString());
					GameTexts.SetVariable("HOTKEY", this._shortcuts.PauseHotkey);
					return GameTexts.FindText("str_hotkey_with_hint", null).ToString();
				});
			}
			this.PausedText = GameTexts.FindText("str_paused_capital", null).ToString();
			this.Date = CampaignTime.Now.ToString();
			this._lastSetDate = CampaignTime.Now;
		}

		// Token: 0x060006BF RID: 1727 RVA: 0x0001EF74 File Offset: 0x0001D174
		public override void OnFinalize()
		{
			base.OnFinalize();
			Input.OnGamepadActiveStateChanged = (Action)Delegate.Remove(Input.OnGamepadActiveStateChanged, new Action(this.OnGamepadActiveStateChanged));
			this._onTimeFlowStateChange = null;
			this._getMapBarShortcuts = null;
			this._onCameraReset = null;
			CampaignEvents.OnSaveStartedEvent.ClearListeners(this);
			CampaignEvents.OnSaveOverEvent.ClearListeners(this);
		}

		// Token: 0x060006C0 RID: 1728 RVA: 0x0001EFD2 File Offset: 0x0001D1D2
		private void OnGamepadActiveStateChanged()
		{
			this.RefreshValues();
		}

		// Token: 0x060006C1 RID: 1729 RVA: 0x0001EFDA File Offset: 0x0001D1DA
		private void OnSaveStarted()
		{
			this._isSaving = true;
		}

		// Token: 0x060006C2 RID: 1730 RVA: 0x0001EFE3 File Offset: 0x0001D1E3
		private void OnSaveOver(bool wasSuccessful, string saveName)
		{
			this._isSaving = false;
		}

		// Token: 0x060006C3 RID: 1731 RVA: 0x0001EFEC File Offset: 0x0001D1EC
		public void Tick()
		{
			this.TimeFlowState = (int)Campaign.Current.GetSimplifiedTimeControlMode();
			this.IsCurrentlyPausedOnMap = ((this.TimeFlowState == 0 || this.TimeFlowState == 6) && this.IsCenterPanelEnabled && !this.IsEscapeMenuOpened && !this._isSaving);
			this.IsCenterPanelEnabled = (!this.IsInBattleSimulation && !this.IsInRecruitment && !this.IsEncyclopediaOpen && !this.IsInTownManagement && !this.IsInArmyManagement && this.IsInMap && !this.IsInCampaignOptions && !this.IsInHideoutTroopManage && !this.IsMarriageOfferPopupActive && !this.IsMapCheatsActive);
		}

		// Token: 0x060006C4 RID: 1732 RVA: 0x0001F098 File Offset: 0x0001D298
		public void Refresh()
		{
			if (!this._lastSetDate.StringSameAs(CampaignTime.Now))
			{
				this.Date = CampaignTime.Now.ToString();
				this._lastSetDate = CampaignTime.Now;
			}
			this.Time = CampaignTime.Now.ToHours % 24.0;
			this.TimeOfDayHint = new BasicTooltipViewModel(() => CampaignUIHelper.GetTimeOfDayAndResetCameraTooltip());
		}

		// Token: 0x060006C5 RID: 1733 RVA: 0x0001F122 File Offset: 0x0001D322
		private void SetTimeSpeed(int speed)
		{
			Campaign.Current.SetTimeSpeed(speed);
			this._onTimeFlowStateChange();
		}

		// Token: 0x060006C6 RID: 1734 RVA: 0x0001F13C File Offset: 0x0001D33C
		public void ExecuteTimeControlChange(int selectedTimeSpeed)
		{
			if (Campaign.Current.CurrentMenuContext == null || (Campaign.Current.CurrentMenuContext.GameMenu.IsWaitActive && !Campaign.Current.TimeControlModeLock))
			{
				int num = selectedTimeSpeed;
				if (this._timeFlowState == 3 && num == 2)
				{
					num = 4;
				}
				else if (this._timeFlowState == 4 && num == 1)
				{
					num = 3;
				}
				else if (this._timeFlowState == 2 && num == 0)
				{
					num = 6;
				}
				if (num != this._timeFlowState)
				{
					this.TimeFlowState = num;
					this.SetTimeSpeed(selectedTimeSpeed);
				}
			}
		}

		// Token: 0x060006C7 RID: 1735 RVA: 0x0001F1C0 File Offset: 0x0001D3C0
		public void ExecuteResetCamera()
		{
			this._onCameraReset();
		}

		// Token: 0x170001FD RID: 509
		// (get) Token: 0x060006C8 RID: 1736 RVA: 0x0001F1CD File Offset: 0x0001D3CD
		// (set) Token: 0x060006C9 RID: 1737 RVA: 0x0001F1D5 File Offset: 0x0001D3D5
		[DataSourceProperty]
		public BasicTooltipViewModel TimeOfDayHint
		{
			get
			{
				return this._timeOfDayHint;
			}
			set
			{
				if (value != this._timeOfDayHint)
				{
					this._timeOfDayHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "TimeOfDayHint");
				}
			}
		}

		// Token: 0x170001FE RID: 510
		// (get) Token: 0x060006CA RID: 1738 RVA: 0x0001F1F3 File Offset: 0x0001D3F3
		// (set) Token: 0x060006CB RID: 1739 RVA: 0x0001F1FB File Offset: 0x0001D3FB
		[DataSourceProperty]
		public bool IsCurrentlyPausedOnMap
		{
			get
			{
				return this._isCurrentlyPausedOnMap;
			}
			set
			{
				if (value != this._isCurrentlyPausedOnMap)
				{
					this._isCurrentlyPausedOnMap = value;
					base.OnPropertyChangedWithValue(value, "IsCurrentlyPausedOnMap");
				}
			}
		}

		// Token: 0x170001FF RID: 511
		// (get) Token: 0x060006CC RID: 1740 RVA: 0x0001F219 File Offset: 0x0001D419
		// (set) Token: 0x060006CD RID: 1741 RVA: 0x0001F221 File Offset: 0x0001D421
		[DataSourceProperty]
		public bool IsCenterPanelEnabled
		{
			get
			{
				return this._isCenterPanelEnabled;
			}
			set
			{
				if (value != this._isCenterPanelEnabled)
				{
					this._isCenterPanelEnabled = value;
					base.OnPropertyChangedWithValue(value, "IsCenterPanelEnabled");
				}
			}
		}

		// Token: 0x17000200 RID: 512
		// (get) Token: 0x060006CE RID: 1742 RVA: 0x0001F23F File Offset: 0x0001D43F
		// (set) Token: 0x060006CF RID: 1743 RVA: 0x0001F247 File Offset: 0x0001D447
		[DataSourceProperty]
		public double Time
		{
			get
			{
				return this._time;
			}
			set
			{
				if (this._time != value)
				{
					this._time = value;
					base.OnPropertyChangedWithValue(value, "Time");
				}
			}
		}

		// Token: 0x17000201 RID: 513
		// (get) Token: 0x060006D0 RID: 1744 RVA: 0x0001F265 File Offset: 0x0001D465
		// (set) Token: 0x060006D1 RID: 1745 RVA: 0x0001F26D File Offset: 0x0001D46D
		[DataSourceProperty]
		public string PausedText
		{
			get
			{
				return this._pausedText;
			}
			set
			{
				if (this._pausedText != value)
				{
					this._pausedText = value;
					base.OnPropertyChangedWithValue<string>(value, "PausedText");
				}
			}
		}

		// Token: 0x17000202 RID: 514
		// (get) Token: 0x060006D2 RID: 1746 RVA: 0x0001F290 File Offset: 0x0001D490
		// (set) Token: 0x060006D3 RID: 1747 RVA: 0x0001F298 File Offset: 0x0001D498
		[DataSourceProperty]
		public string Date
		{
			get
			{
				return this._date;
			}
			set
			{
				if (value != this._date)
				{
					this._date = value;
					base.OnPropertyChangedWithValue<string>(value, "Date");
				}
			}
		}

		// Token: 0x17000203 RID: 515
		// (get) Token: 0x060006D4 RID: 1748 RVA: 0x0001F2BB File Offset: 0x0001D4BB
		// (set) Token: 0x060006D5 RID: 1749 RVA: 0x0001F2C3 File Offset: 0x0001D4C3
		[DataSourceProperty]
		public int TimeFlowState
		{
			get
			{
				return this._timeFlowState;
			}
			set
			{
				if (value != this._timeFlowState)
				{
					this._timeFlowState = value;
					base.OnPropertyChangedWithValue(value, "TimeFlowState");
				}
			}
		}

		// Token: 0x17000204 RID: 516
		// (get) Token: 0x060006D6 RID: 1750 RVA: 0x0001F2E1 File Offset: 0x0001D4E1
		// (set) Token: 0x060006D7 RID: 1751 RVA: 0x0001F2E9 File Offset: 0x0001D4E9
		[DataSourceProperty]
		public BasicTooltipViewModel PauseHint
		{
			get
			{
				return this._pauseHint;
			}
			set
			{
				if (value != this._pauseHint)
				{
					this._pauseHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "PauseHint");
				}
			}
		}

		// Token: 0x17000205 RID: 517
		// (get) Token: 0x060006D8 RID: 1752 RVA: 0x0001F307 File Offset: 0x0001D507
		// (set) Token: 0x060006D9 RID: 1753 RVA: 0x0001F30F File Offset: 0x0001D50F
		[DataSourceProperty]
		public BasicTooltipViewModel PlayHint
		{
			get
			{
				return this._playHint;
			}
			set
			{
				if (value != this._playHint)
				{
					this._playHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "PlayHint");
				}
			}
		}

		// Token: 0x17000206 RID: 518
		// (get) Token: 0x060006DA RID: 1754 RVA: 0x0001F32D File Offset: 0x0001D52D
		// (set) Token: 0x060006DB RID: 1755 RVA: 0x0001F335 File Offset: 0x0001D535
		[DataSourceProperty]
		public BasicTooltipViewModel FastForwardHint
		{
			get
			{
				return this._fastForwardHint;
			}
			set
			{
				if (value != this._fastForwardHint)
				{
					this._fastForwardHint = value;
					base.OnPropertyChangedWithValue<BasicTooltipViewModel>(value, "FastForwardHint");
				}
			}
		}

		// Token: 0x040002F9 RID: 761
		private Action _onTimeFlowStateChange;

		// Token: 0x040002FA RID: 762
		private Func<MapBarShortcuts> _getMapBarShortcuts;

		// Token: 0x040002FB RID: 763
		private MapBarShortcuts _shortcuts;

		// Token: 0x040002FC RID: 764
		private Action _onCameraReset;

		// Token: 0x040002FD RID: 765
		private CampaignTime _lastSetDate;

		// Token: 0x040002FE RID: 766
		private bool _isSaving;

		// Token: 0x040002FF RID: 767
		private int _timeFlowState = -1;

		// Token: 0x04000300 RID: 768
		private double _time;

		// Token: 0x04000301 RID: 769
		private string _date;

		// Token: 0x04000302 RID: 770
		private string _pausedText;

		// Token: 0x04000303 RID: 771
		private bool _isCurrentlyPausedOnMap;

		// Token: 0x04000304 RID: 772
		private bool _isCenterPanelEnabled;

		// Token: 0x04000305 RID: 773
		private BasicTooltipViewModel _pauseHint;

		// Token: 0x04000306 RID: 774
		private BasicTooltipViewModel _playHint;

		// Token: 0x04000307 RID: 775
		private BasicTooltipViewModel _fastForwardHint;

		// Token: 0x04000308 RID: 776
		private BasicTooltipViewModel _timeOfDayHint;
	}
}
