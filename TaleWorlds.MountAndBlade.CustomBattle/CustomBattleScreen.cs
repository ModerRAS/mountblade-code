using System;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Engine.GauntletUI;
using TaleWorlds.GauntletUI.Data;
using TaleWorlds.InputSystem;
using TaleWorlds.Library;
using TaleWorlds.MountAndBlade.CustomBattle.CustomBattle;
using TaleWorlds.MountAndBlade.View;
using TaleWorlds.MountAndBlade.View.Screens;
using TaleWorlds.ScreenSystem;

namespace TaleWorlds.MountAndBlade.CustomBattle
{
	// Token: 0x0200000C RID: 12
	[GameStateScreen(typeof(CustomBattleState))]
	public class CustomBattleScreen : ScreenBase, IGameStateListener
	{
		// Token: 0x060000A8 RID: 168 RVA: 0x000070BF File Offset: 0x000052BF
		public CustomBattleScreen(CustomBattleState customBattleState)
		{
			this._customBattleState = customBattleState;
		}

		// Token: 0x060000A9 RID: 169 RVA: 0x000070CE File Offset: 0x000052CE
		void IGameStateListener.OnActivate()
		{
		}

		// Token: 0x060000AA RID: 170 RVA: 0x000070D0 File Offset: 0x000052D0
		void IGameStateListener.OnDeactivate()
		{
		}

		// Token: 0x060000AB RID: 171 RVA: 0x000070D2 File Offset: 0x000052D2
		void IGameStateListener.OnInitialize()
		{
		}

		// Token: 0x060000AC RID: 172 RVA: 0x000070D4 File Offset: 0x000052D4
		void IGameStateListener.OnFinalize()
		{
			this._dataSource.OnFinalize();
		}

		// Token: 0x060000AD RID: 173 RVA: 0x000070E4 File Offset: 0x000052E4
		protected override void OnInitialize()
		{
			base.OnInitialize();
			this._dataSource = new CustomBattleMenuVM(this._customBattleState);
			this._dataSource.SetStartInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
			this._dataSource.SetCancelInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Exit"));
			this._dataSource.SetResetInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Reset"));
			this._dataSource.SetRandomizeInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Randomize"));
			TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this._dataSource.TroopTypeSelectionPopUp;
			if (troopTypeSelectionPopUp != null)
			{
				troopTypeSelectionPopUp.SetDoneInputKey(HotKeyManager.GetCategory("GenericPanelGameKeyCategory").GetHotKey("Confirm"));
			}
			this._gauntletLayer = new GauntletLayer(1, "GauntletLayer", true);
			this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericPanelGameKeyCategory"));
			this._gauntletLayer.Input.RegisterHotKeyCategory(HotKeyManager.GetCategory("GenericCampaignPanelsGameKeyCategory"));
			this.LoadMovie();
			this._gauntletLayer.InputRestrictions.SetInputRestrictions(true, InputUsageMask.All);
			this._dataSource.SetActiveState(true);
			base.AddLayer(this._gauntletLayer);
		}

		// Token: 0x060000AE RID: 174 RVA: 0x00007224 File Offset: 0x00005424
		protected override void OnFrameTick(float dt)
		{
			base.OnFrameTick(dt);
			if (this._isFirstFrameCounter >= 0)
			{
				if (this._isFirstFrameCounter == 0)
				{
					LoadingWindow.DisableGlobalLoadingWindow();
				}
				else
				{
					this._shouldTickLayersThisFrame = false;
				}
				this._isFirstFrameCounter--;
			}
			if (!this._gauntletLayer.IsFocusedOnInput())
			{
				TroopTypeSelectionPopUpVM troopTypeSelectionPopUp = this._dataSource.TroopTypeSelectionPopUp;
				if (troopTypeSelectionPopUp != null && troopTypeSelectionPopUp.IsOpen)
				{
					if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Exit"))
					{
						UISoundsHelper.PlayUISound("event:/ui/default");
						this._dataSource.TroopTypeSelectionPopUp.ExecuteCancel();
						return;
					}
					if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Confirm"))
					{
						UISoundsHelper.PlayUISound("event:/ui/default");
						this._dataSource.TroopTypeSelectionPopUp.ExecuteDone();
						return;
					}
					if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Reset"))
					{
						UISoundsHelper.PlayUISound("event:/ui/default");
						this._dataSource.TroopTypeSelectionPopUp.ExecuteReset();
						return;
					}
				}
				else
				{
					if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Exit"))
					{
						UISoundsHelper.PlayUISound("event:/ui/default");
						this._dataSource.ExecuteBack();
						return;
					}
					if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Randomize"))
					{
						UISoundsHelper.PlayUISound("event:/ui/default");
						this._dataSource.ExecuteRandomize();
						return;
					}
					if (this._gauntletLayer.Input.IsHotKeyDownAndReleased("Confirm"))
					{
						UISoundsHelper.PlayUISound("event:/ui/default");
						this._dataSource.ExecuteStart();
					}
				}
			}
		}

		// Token: 0x060000AF RID: 175 RVA: 0x000073B0 File Offset: 0x000055B0
		protected override void OnFinalize()
		{
			this.UnloadMovie();
			base.RemoveLayer(this._gauntletLayer);
			this._dataSource = null;
			this._gauntletLayer = null;
			base.OnFinalize();
		}

		// Token: 0x060000B0 RID: 176 RVA: 0x000073D8 File Offset: 0x000055D8
		protected override void OnActivate()
		{
			this.LoadMovie();
			CustomBattleMenuVM dataSource = this._dataSource;
			if (dataSource != null)
			{
				dataSource.SetActiveState(true);
			}
			this._gauntletLayer.IsFocusLayer = true;
			ScreenManager.TrySetFocus(this._gauntletLayer);
			this._isFirstFrameCounter = 2;
			base.OnActivate();
		}

		// Token: 0x060000B1 RID: 177 RVA: 0x00007416 File Offset: 0x00005616
		protected override void OnDeactivate()
		{
			base.OnDeactivate();
			this.UnloadMovie();
			CustomBattleMenuVM dataSource = this._dataSource;
			if (dataSource == null)
			{
				return;
			}
			dataSource.SetActiveState(false);
		}

		// Token: 0x060000B2 RID: 178 RVA: 0x00007435 File Offset: 0x00005635
		public override void UpdateLayout()
		{
			base.UpdateLayout();
			if (!this._isMovieLoaded)
			{
				CustomBattleMenuVM dataSource = this._dataSource;
				if (dataSource == null)
				{
					return;
				}
				dataSource.RefreshValues();
			}
		}

		// Token: 0x060000B3 RID: 179 RVA: 0x00007455 File Offset: 0x00005655
		private void LoadMovie()
		{
			if (!this._isMovieLoaded)
			{
				this._gauntletMovie = this._gauntletLayer.LoadMovie("CustomBattleScreen", this._dataSource);
				this._isMovieLoaded = true;
			}
		}

		// Token: 0x060000B4 RID: 180 RVA: 0x00007482 File Offset: 0x00005682
		private void UnloadMovie()
		{
			if (this._isMovieLoaded)
			{
				this._gauntletLayer.ReleaseMovie(this._gauntletMovie);
				this._gauntletMovie = null;
				this._isMovieLoaded = false;
				this._gauntletLayer.IsFocusLayer = false;
				ScreenManager.TryLoseFocus(this._gauntletLayer);
			}
		}

		// Token: 0x04000067 RID: 103
		private CustomBattleState _customBattleState;

		// Token: 0x04000068 RID: 104
		private GauntletLayer _gauntletLayer;

		// Token: 0x04000069 RID: 105
		private IGauntletMovie _gauntletMovie;

		// Token: 0x0400006A RID: 106
		private CustomBattleMenuVM _dataSource;

		// Token: 0x0400006B RID: 107
		private bool _isMovieLoaded;

		// Token: 0x0400006C RID: 108
		private int _isFirstFrameCounter;
	}
}
