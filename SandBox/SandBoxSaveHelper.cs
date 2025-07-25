// Decompiled with JetBrains decompiler
// Type: SandBox.SandBoxSaveHelper
// Assembly: SandBox, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: 75BA0B61-63FF-423A-8603-0A2974B621BB
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\Modules\SandBox\bin\Win64_Shipping_Client\SandBox.dll

using System;
using System.Collections.Generic;
using System.Linq;
using TaleWorlds.Core;
using TaleWorlds.Engine;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ModuleManager;
using TaleWorlds.MountAndBlade;
using TaleWorlds.SaveSystem;
using TaleWorlds.SaveSystem.Load;

#nullable disable
namespace SandBox
{
  public static class SandBoxSaveHelper
  {
    private static readonly ApplicationVersion SaveResetVersion = new ApplicationVersion(ApplicationVersionType.EarlyAccess, 1, 7, 0, 0);
    private static readonly TextObject _stringSpaceStringTextObject = new TextObject("{=7AFlpaem}{STR1} {STR2}");
    private static readonly TextObject _newlineTextObject = new TextObject("{=ol0rBSrb}{STR1}{newline}{STR2}");
    private static readonly TextObject _moduleMissmatchInquiryTitle = new TextObject("{=r7xdYj4q}Module Mismatch");
    private static readonly TextObject _errorTitle = new TextObject("{=oZrVNUOk}Error");
    private static readonly TextObject _saveLoadingProblemText = new TextObject("{=onLDP7mP}A problem occured while trying to load the saved game.");
    private static readonly TextObject _saveResetVersionProblemText = new TextObject("{=5hbSkbQg}This save file is from a game version that is older than e1.7.0. Please switch your game version to e1.7.0, load the save file and save the game. This will allow it to work on newer versions beyond e1.7.0.");
    private static bool _isInquiryActive;

    public static event Action<SandBoxSaveHelper.SaveHelperState> OnStateChange;

    public static void TryLoadSave(
      SaveGameFileInfo saveInfo,
      Action<LoadResult> onStartGame,
      Action onCancel = null)
    {
      SandBoxSaveHelper._newlineTextObject.SetTextVariable("newline", "\n");
      Action<SandBoxSaveHelper.SaveHelperState> onStateChange1 = SandBoxSaveHelper.OnStateChange;
      if (onStateChange1 != null)
        onStateChange1(SandBoxSaveHelper.SaveHelperState.Start);
      bool flag = true;
      ApplicationVersion applicationVersion = saveInfo.MetaData.GetApplicationVersion();
      if (applicationVersion < SandBoxSaveHelper.SaveResetVersion)
      {
        InquiryData data = new InquiryData(SandBoxSaveHelper._moduleMissmatchInquiryTitle.ToString(), SandBoxSaveHelper._saveResetVersionProblemText.ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) (() =>
        {
          SandBoxSaveHelper._isInquiryActive = false;
          Action action = onCancel;
          if (action == null)
            return;
          action();
        }), (Action) null);
        SandBoxSaveHelper._isInquiryActive = true;
        InformationManager.ShowInquiry(data);
        Action<SandBoxSaveHelper.SaveHelperState> onStateChange2 = SandBoxSaveHelper.OnStateChange;
        if (onStateChange2 == null)
          return;
        onStateChange2(SandBoxSaveHelper.SaveHelperState.Inquiry);
      }
      else
      {
        List<SandBoxSaveHelper.ModuleCheckResult> source1 = SandBoxSaveHelper.CheckModules(saveInfo.MetaData);
        if (source1.Count > 0)
        {
          IEnumerable<IGrouping<ModuleCheckResultType, SandBoxSaveHelper.ModuleCheckResult>> groupings = source1.GroupBy<SandBoxSaveHelper.ModuleCheckResult, ModuleCheckResultType>((Func<SandBoxSaveHelper.ModuleCheckResult, ModuleCheckResultType>) (m => m.Type));
          string empty = string.Empty;
          GameTextManager globalTextManager = Module.CurrentModule.GlobalTextManager;
          foreach (IGrouping<ModuleCheckResultType, SandBoxSaveHelper.ModuleCheckResult> source2 in groupings)
          {
            SandBoxSaveHelper._stringSpaceStringTextObject.SetTextVariable("STR1", globalTextManager.FindText("str_load_module_error", Enum.GetName(typeof (ModuleCheckResultType), (object) source2.Key)));
            SandBoxSaveHelper._stringSpaceStringTextObject.SetTextVariable("STR2", source2.ElementAt<SandBoxSaveHelper.ModuleCheckResult>(0).ModuleName);
            empty += SandBoxSaveHelper._stringSpaceStringTextObject.ToString();
            for (int index = 1; index < source2.Count<SandBoxSaveHelper.ModuleCheckResult>(); ++index)
            {
              SandBoxSaveHelper._stringSpaceStringTextObject.SetTextVariable("STR1", empty);
              SandBoxSaveHelper._stringSpaceStringTextObject.SetTextVariable("STR2", source2.ElementAt<SandBoxSaveHelper.ModuleCheckResult>(index).ModuleName);
              empty = SandBoxSaveHelper._stringSpaceStringTextObject.ToString();
            }
            SandBoxSaveHelper._newlineTextObject.SetTextVariable("STR1", empty);
            SandBoxSaveHelper._newlineTextObject.SetTextVariable("STR2", "");
            empty = SandBoxSaveHelper._newlineTextObject.ToString();
          }
          SandBoxSaveHelper._newlineTextObject.SetTextVariable("STR1", empty);
          SandBoxSaveHelper._newlineTextObject.SetTextVariable("STR2", " ");
          string str = SandBoxSaveHelper._newlineTextObject.ToString();
          bool isAffirmativeOptionShown = ApplicationVersion.FromParametersFile() >= applicationVersion | flag;
          if (isAffirmativeOptionShown)
          {
            SandBoxSaveHelper._newlineTextObject.SetTextVariable("STR1", str);
            SandBoxSaveHelper._newlineTextObject.SetTextVariable("STR2", new TextObject("{=lh0so0uX}Do you want to load the saved game with different modules?"));
            str = SandBoxSaveHelper._newlineTextObject.ToString();
          }
          InquiryData data = new InquiryData(SandBoxSaveHelper._moduleMissmatchInquiryTitle.ToString(), str, isAffirmativeOptionShown, true, new TextObject("{=aeouhelq}Yes").ToString(), new TextObject("{=3CpNUnVl}Cancel").ToString(), (Action) (() =>
          {
            SandBoxSaveHelper._isInquiryActive = false;
            SandBoxSaveHelper.LoadGameAction(saveInfo, onStartGame, onCancel);
          }), (Action) (() =>
          {
            SandBoxSaveHelper._isInquiryActive = false;
            Action action = onCancel;
            if (action == null)
              return;
            action();
          }));
          SandBoxSaveHelper._isInquiryActive = true;
          InformationManager.ShowInquiry(data);
          Action<SandBoxSaveHelper.SaveHelperState> onStateChange3 = SandBoxSaveHelper.OnStateChange;
          if (onStateChange3 == null)
            return;
          onStateChange3(SandBoxSaveHelper.SaveHelperState.Inquiry);
        }
        else
          SandBoxSaveHelper.LoadGameAction(saveInfo, onStartGame, onCancel);
      }
    }

    private static List<SandBoxSaveHelper.ModuleCheckResult> CheckModules(MetaData fileMetaData)
    {
      List<ModuleInfo> moduleInfos = ModuleHelper.GetModuleInfos(Utilities.GetModulesNames());
      string[] modulesInSaveFile = fileMetaData.GetModules();
      List<SandBoxSaveHelper.ModuleCheckResult> moduleCheckResultList = new List<SandBoxSaveHelper.ModuleCheckResult>();
      foreach (string str in modulesInSaveFile)
      {
        string moduleName = str;
        if (moduleInfos.All<ModuleInfo>((Func<ModuleInfo, bool>) (loadedModule => loadedModule.Name != moduleName)))
          moduleCheckResultList.Add(new SandBoxSaveHelper.ModuleCheckResult(moduleName, ModuleCheckResultType.ModuleRemoved));
        else if (!fileMetaData.GetModuleVersion(moduleName).IsSame(moduleInfos.Single<ModuleInfo>((Func<ModuleInfo, bool>) (loadedModule => loadedModule.Name == moduleName)).Version, false))
          moduleCheckResultList.Add(new SandBoxSaveHelper.ModuleCheckResult(moduleName, ModuleCheckResultType.VersionMismatch));
      }
      foreach (ModuleInfo moduleInfo in moduleInfos.Where<ModuleInfo>((Func<ModuleInfo, bool>) (loadedModule => ((IEnumerable<string>) modulesInSaveFile).All<string>((Func<string, bool>) (moduleName => loadedModule.Name != moduleName)))))
        moduleCheckResultList.Add(new SandBoxSaveHelper.ModuleCheckResult(moduleInfo.Name, ModuleCheckResultType.ModuleAdded));
      return moduleCheckResultList;
    }

    private static void LoadGameAction(
      SaveGameFileInfo saveInfo,
      Action<LoadResult> onStartGame,
      Action onCancel)
    {
      Action<SandBoxSaveHelper.SaveHelperState> onStateChange1 = SandBoxSaveHelper.OnStateChange;
      if (onStateChange1 != null)
        onStateChange1(SandBoxSaveHelper.SaveHelperState.LoadGame);
      LoadResult loadResult = MBSaveLoad.LoadSaveGameData(saveInfo.Name);
      if (loadResult != null)
      {
        if (onStartGame == null)
          return;
        onStartGame(loadResult);
      }
      else
      {
        InquiryData data = new InquiryData(SandBoxSaveHelper._errorTitle.ToString(), SandBoxSaveHelper._saveLoadingProblemText.ToString(), true, false, new TextObject("{=WiNRdfsm}Done").ToString(), string.Empty, (Action) (() =>
        {
          SandBoxSaveHelper._isInquiryActive = false;
          Action action = onCancel;
          if (action == null)
            return;
          action();
        }), (Action) null);
        SandBoxSaveHelper._isInquiryActive = true;
        InformationManager.ShowInquiry(data);
        Action<SandBoxSaveHelper.SaveHelperState> onStateChange2 = SandBoxSaveHelper.OnStateChange;
        if (onStateChange2 == null)
          return;
        onStateChange2(SandBoxSaveHelper.SaveHelperState.Inquiry);
      }
    }

    public enum SaveHelperState
    {
      Start,
      Inquiry,
      LoadGame,
    }

    private readonly struct ModuleCheckResult
    {
      public readonly string ModuleName;
      public readonly ModuleCheckResultType Type;

      public ModuleCheckResult(string moduleName, ModuleCheckResultType type)
      {
        this.ModuleName = moduleName;
        this.Type = type;
      }
    }
  }
}
