// Decompiled with JetBrains decompiler
// Type: TaleWorlds.CampaignSystem.SaveHandler
// Assembly: TaleWorlds.CampaignSystem, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: E85F8C15-4DF6-4E9C-A58A-29177E40D07A
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.CampaignSystem.dll

using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using TaleWorlds.CampaignSystem.GameState;
using TaleWorlds.Core;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace TaleWorlds.CampaignSystem
{
  public class SaveHandler
  {
    private SaveHandler.SaveSteps _saveStep;
    private static readonly CultureInfo _invariantCulture = CultureInfo.InvariantCulture;
    private Queue<SaveHandler.SaveArgs> SaveArgsQueue = new Queue<SaveHandler.SaveArgs>();
    private DateTime _lastAutoSaveTime = DateTime.Now;

    public IMainHeroVisualSupplier MainHeroVisualSupplier { get; set; }

    public bool IsSaving => !this.SaveArgsQueue.IsEmpty<SaveHandler.SaveArgs>();

    public string IronmanModSaveName => "Ironman" + Campaign.Current.UniqueGameId;

    private bool _isAutoSaveEnabled => this.AutoSaveInterval > -1;

    private double _autoSavePriorityTimeLimit => (double) this.AutoSaveInterval * 0.75;

    public int AutoSaveInterval
    {
      get
      {
        ISaveManager sandBoxSaveManager = Campaign.Current.SandBoxManager.SandBoxSaveManager;
        return sandBoxSaveManager == null ? 15 : sandBoxSaveManager.GetAutoSaveInterval();
      }
    }

    public void QuickSaveCurrentGame() => this.SetSaveArgs(SaveHandler.SaveArgs.SaveMode.QuickSave);

    public void SaveAs(string saveName)
    {
      this.SetSaveArgs(SaveHandler.SaveArgs.SaveMode.SaveAs, saveName);
    }

    private void TryAutoSave(bool isPriority)
    {
      if (!this._isAutoSaveEnabled || !(GameStateManager.Current.ActiveState is MapState activeState) || activeState.MapConversationActive || (DateTime.Now - this._lastAutoSaveTime).TotalMinutes <= (isPriority ? this._autoSavePriorityTimeLimit : (double) this.AutoSaveInterval))
        return;
      this.SetSaveArgs(SaveHandler.SaveArgs.SaveMode.AutoSave);
    }

    public void CampaignTick()
    {
      if (Campaign.Current.TimeControlMode == CampaignTimeControlMode.Stop)
        return;
      this.TryAutoSave(false);
    }

    internal void SaveTick()
    {
      if (this.SaveArgsQueue.IsEmpty<SaveHandler.SaveArgs>())
        return;
      switch (this._saveStep)
      {
        case SaveHandler.SaveSteps.PreSave:
          ++this._saveStep;
          this.OnSaveStarted();
          break;
        case SaveHandler.SaveSteps.Saving:
          ++this._saveStep;
          CampaignEventDispatcher.Instance.OnBeforeSave();
          if (CampaignOptions.IsIronmanMode)
          {
            MBSaveLoad.SaveAsCurrentGame(this.GetSaveMetaData(), this.IronmanModSaveName, new Action<(SaveResult, string)>(this.OnSaveCompleted));
            break;
          }
          SaveHandler.SaveArgs saveArgs = this.SaveArgsQueue.Peek();
          switch (saveArgs.Mode)
          {
            case SaveHandler.SaveArgs.SaveMode.SaveAs:
              MBSaveLoad.SaveAsCurrentGame(this.GetSaveMetaData(), saveArgs.Name, new Action<(SaveResult, string)>(this.OnSaveCompleted));
              return;
            case SaveHandler.SaveArgs.SaveMode.QuickSave:
              MBSaveLoad.QuickSaveCurrentGame(this.GetSaveMetaData(), new Action<(SaveResult, string)>(this.OnSaveCompleted));
              return;
            case SaveHandler.SaveArgs.SaveMode.AutoSave:
              MBSaveLoad.AutoSaveCurrentGame(this.GetSaveMetaData(), new Action<(SaveResult, string)>(this.OnSaveCompleted));
              return;
            default:
              return;
          }
        case SaveHandler.SaveSteps.AwaitingCompletion:
          break;
        default:
          ++this._saveStep;
          break;
      }
    }

    private void OnSaveCompleted((SaveResult, string) result)
    {
      this._saveStep = SaveHandler.SaveSteps.PreSave;
      if (this.SaveArgsQueue.Dequeue().Mode == SaveHandler.SaveArgs.SaveMode.AutoSave)
        this._lastAutoSaveTime = DateTime.Now;
      this.OnSaveEnded(result.Item1 == SaveResult.Success, result.Item2);
    }

    public void SignalAutoSave() => this.TryAutoSave(true);

    private void OnSaveStarted()
    {
      Campaign.Current.WaitAsyncTasks();
      CampaignEventDispatcher.Instance.OnSaveStarted();
      MBInformationManager.HideInformations();
    }

    private void OnSaveEnded(bool isSaveSuccessful, string newSaveGameName)
    {
      Campaign.Current.SandBoxManager.SandBoxSaveManager?.OnSaveOver(isSaveSuccessful, newSaveGameName);
      CampaignEventDispatcher.Instance.OnSaveOver(isSaveSuccessful, newSaveGameName);
      if (isSaveSuccessful)
        return;
      MBInformationManager.AddQuickInformation(new TextObject("{=u9PPxTNL}Save Error!"));
    }

    private void SetSaveArgs(SaveHandler.SaveArgs.SaveMode saveType, string saveName = null)
    {
      this.SaveArgsQueue.Enqueue(new SaveHandler.SaveArgs(saveType, saveName));
    }

    public CampaignSaveMetaDataArgs GetSaveMetaData()
    {
      string[] array = ((IEnumerable<string>) SandBoxManager.Instance.ModuleManager.ModuleNames).ToArray<string>();
      KeyValuePair<string, string>[] keyValuePairArray = new KeyValuePair<string, string>[15];
      keyValuePairArray[0] = new KeyValuePair<string, string>("UniqueGameId", Campaign.Current.UniqueGameId ?? "");
      keyValuePairArray[1] = new KeyValuePair<string, string>("MainHeroLevel", Hero.MainHero.Level.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[2] = new KeyValuePair<string, string>("MainPartyFood", Campaign.Current.MainParty.Food.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[3] = new KeyValuePair<string, string>("MainHeroGold", Hero.MainHero.Gold.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[4] = new KeyValuePair<string, string>("ClanInfluence", Clan.PlayerClan.Influence.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[5] = new KeyValuePair<string, string>("ClanFiefs", Clan.PlayerClan.Settlements.Count.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[6] = new KeyValuePair<string, string>("MainPartyHealthyMemberCount", Campaign.Current.MainParty.MemberRoster.TotalHealthyCount.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[7] = new KeyValuePair<string, string>("MainPartyPrisonerMemberCount", Campaign.Current.MainParty.PrisonRoster.TotalManCount.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[8] = new KeyValuePair<string, string>("MainPartyWoundedMemberCount", Campaign.Current.MainParty.MemberRoster.TotalWounded.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[9] = new KeyValuePair<string, string>("CharacterName", Hero.MainHero.Name?.ToString());
      keyValuePairArray[10] = new KeyValuePair<string, string>("DayLong", Campaign.Current.CampaignStartTime.ElapsedDaysUntilNow.ToString((IFormatProvider) SaveHandler._invariantCulture));
      keyValuePairArray[11] = new KeyValuePair<string, string>("ClanBannerCode", Clan.PlayerClan.Banner.Serialize());
      keyValuePairArray[12] = new KeyValuePair<string, string>("MainHeroVisual", this.MainHeroVisualSupplier?.GetMainHeroVisualCode() ?? string.Empty);
      int num = CampaignOptions.IsIronmanMode ? 1 : 0;
      keyValuePairArray[13] = new KeyValuePair<string, string>("IronmanMode", num.ToString());
      num = MBMath.ClampInt(Hero.MainHero.HitPoints * 100 / Hero.MainHero.MaxHitPoints, 1, 100);
      keyValuePairArray[14] = new KeyValuePair<string, string>("HealthPercentage", num.ToString());
      return new CampaignSaveMetaDataArgs(array, keyValuePairArray);
    }

    private readonly struct SaveArgs
    {
      public readonly SaveHandler.SaveArgs.SaveMode Mode;
      public readonly string Name;

      public SaveArgs(SaveHandler.SaveArgs.SaveMode mode, string name)
      {
        this.Mode = mode;
        this.Name = name;
      }

      public enum SaveMode
      {
        SaveAs,
        QuickSave,
        AutoSave,
      }
    }

    private enum SaveSteps
    {
      PreSave = 0,
      Saving = 2,
      AwaitingCompletion = 3,
    }
  }
}
