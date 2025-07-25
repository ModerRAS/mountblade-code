// Decompiled with JetBrains decompiler
// Type: SandBox.CampaignBehaviors.DumpIntegrityCampaignBehavior
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.CampaignSystem;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;

#nullable disable
namespace SandBox.CampaignBehaviors
{
  public class DumpIntegrityCampaignBehavior : CampaignBehaviorBase
  {
    private readonly List<KeyValuePair<string, string>> _saveIntegrityDumpInfo = new List<KeyValuePair<string, string>>();
    private readonly List<KeyValuePair<string, string>> _usedModulesDumpInfo = new List<KeyValuePair<string, string>>();
    private readonly List<KeyValuePair<string, string>> _usedVersionsDumpInfo = new List<KeyValuePair<string, string>>();

    public override void SyncData(IDataStore dataStore)
    {
      DumpIntegrityCampaignBehavior.IsGameIntegrityAchieved(out TextObject _);
      this.UpdateDumpInfo();
    }

    public override void RegisterEvents()
    {
      CampaignEvents.OnConfigChangedEvent.AddNonSerializedListener((object) this, new Action(this.OnConfigChanged));
      CampaignEvents.OnNewGameCreatedPartialFollowUpEndEvent.AddNonSerializedListener((object) this, new Action<CampaignGameStarter>(this.OnNewGameCreatedPartialFollowUpEnd));
    }

    private void OnConfigChanged()
    {
      DumpIntegrityCampaignBehavior.IsGameIntegrityAchieved(out TextObject _);
      this.UpdateDumpInfo();
    }

    private void OnNewGameCreatedPartialFollowUpEnd(CampaignGameStarter campaignGameStarter)
    {
      DumpIntegrityCampaignBehavior.IsGameIntegrityAchieved(out TextObject _);
      this.UpdateDumpInfo();
    }

    private void UpdateDumpInfo()
    {
      this._saveIntegrityDumpInfo.Clear();
      this._usedModulesDumpInfo.Clear();
      this._usedVersionsDumpInfo.Clear();
      if (Campaign.Current?.PreviouslyUsedModules != null && Campaign.Current.UsedGameVersions != null && Campaign.Current.NewGameVersion != null)
      {
        this._saveIntegrityDumpInfo.Add(new KeyValuePair<string, string>("New Game Version", Campaign.Current.NewGameVersion));
        this._saveIntegrityDumpInfo.Add(new KeyValuePair<string, string>("Has Used Cheats", (!DumpIntegrityCampaignBehavior.CheckCheatUsage()).ToString()));
        this._saveIntegrityDumpInfo.Add(new KeyValuePair<string, string>("Has Installed Unofficial Modules", (!DumpIntegrityCampaignBehavior.CheckIfModulesAreDefault()).ToString()));
        this._saveIntegrityDumpInfo.Add(new KeyValuePair<string, string>("Has Reverted to Older Versions", (!DumpIntegrityCampaignBehavior.CheckIfVersionIntegrityIsAchieved()).ToString()));
        this._saveIntegrityDumpInfo.Add(new KeyValuePair<string, string>("Game Integrity is Achieved", DumpIntegrityCampaignBehavior.IsGameIntegrityAchieved(out TextObject _).ToString()));
      }
      if (Campaign.Current?.PreviouslyUsedModules != null)
      {
        string[] moduleNames = SandBoxManager.Instance.ModuleManager.ModuleNames;
        foreach (string previouslyUsedModule in (List<string>) Campaign.Current.PreviouslyUsedModules)
        {
          string module = previouslyUsedModule;
          bool flag = ((IReadOnlyList<string>) moduleNames).FindIndex<string>((Func<string, bool>) (x => x == module)) != -1;
          this._usedModulesDumpInfo.Add(new KeyValuePair<string, string>(module, flag.ToString()));
        }
      }
      if (Campaign.Current?.UsedGameVersions != null && Campaign.Current.UsedGameVersions.Count > 0)
      {
        foreach (string usedGameVersion in (List<string>) Campaign.Current.UsedGameVersions)
          this._usedVersionsDumpInfo.Add(new KeyValuePair<string, string>(usedGameVersion, ""));
      }
      this.SendDataToWatchdog();
    }

    private void SendDataToWatchdog()
    {
      foreach (KeyValuePair<string, string> keyValuePair in this._saveIntegrityDumpInfo)
        Utilities.SetWatchdogValue("crash_tags.txt", "Campaign Dump Integrity", keyValuePair.Key, keyValuePair.Value);
      foreach (KeyValuePair<string, string> keyValuePair in this._usedModulesDumpInfo)
        Utilities.SetWatchdogValue("crash_tags.txt", "Used Mods", keyValuePair.Key, keyValuePair.Value);
      foreach (KeyValuePair<string, string> keyValuePair in this._usedVersionsDumpInfo)
        Utilities.SetWatchdogValue("crash_tags.txt", "Used Game Versions", keyValuePair.Key, keyValuePair.Value);
    }

    public static bool IsGameIntegrityAchieved(out TextObject reason)
    {
      reason = TextObject.Empty;
      bool flag = true;
      if (!DumpIntegrityCampaignBehavior.CheckCheatUsage())
      {
        reason = new TextObject("{=sO8Zh3ZH}Achievements are disabled due to cheat usage.");
        flag = false;
      }
      else if (!DumpIntegrityCampaignBehavior.CheckIfModulesAreDefault())
      {
        reason = new TextObject("{=R0AbAxqX}Achievements are disabled due to unofficial modules.");
        flag = false;
      }
      else if (!DumpIntegrityCampaignBehavior.CheckIfVersionIntegrityIsAchieved())
      {
        reason = new TextObject("{=dt00CQCM}Achievements are disabled due to version downgrade.");
        flag = false;
      }
      return flag;
    }

    private static bool CheckIfVersionIntegrityIsAchieved()
    {
      for (int index = 0; index < Campaign.Current.UsedGameVersions.Count; ++index)
      {
        if (index < Campaign.Current.UsedGameVersions.Count - 1 && ApplicationVersion.FromString(Campaign.Current.UsedGameVersions[index]) > ApplicationVersion.FromString(Campaign.Current.UsedGameVersions[index + 1]))
        {
          Debug.Print("Dump integrity is compromised due to version downgrade", color: Debug.DebugColor.DarkRed);
          return false;
        }
      }
      return true;
    }

    private static bool CheckIfModulesAreDefault()
    {
      int num = Campaign.Current.PreviouslyUsedModules.All<string>((Func<string, bool>) (x => x.Equals("Native", StringComparison.OrdinalIgnoreCase) || x.Equals("SandBoxCore", StringComparison.OrdinalIgnoreCase) || x.Equals("CustomBattle", StringComparison.OrdinalIgnoreCase) || x.Equals("SandBox", StringComparison.OrdinalIgnoreCase) || x.Equals("Multiplayer", StringComparison.OrdinalIgnoreCase) || x.Equals("BirthAndDeath", StringComparison.OrdinalIgnoreCase) || x.Equals("StoryMode", StringComparison.OrdinalIgnoreCase))) ? 1 : 0;
      if (num != 0)
        return num != 0;
      Debug.Print("Dump integrity is compromised due to non-default modules being used", color: Debug.DebugColor.DarkRed);
      return num != 0;
    }

    private static bool CheckCheatUsage()
    {
      if (!Campaign.Current.EnabledCheatsBefore && Game.Current.CheatMode)
        Campaign.Current.EnabledCheatsBefore = Game.Current.CheatMode;
      if (Campaign.Current.EnabledCheatsBefore)
        Debug.Print("Dump integrity is compromised due to cheat usage", color: Debug.DebugColor.DarkRed);
      return !Campaign.Current.EnabledCheatsBefore;
    }
  }
}
