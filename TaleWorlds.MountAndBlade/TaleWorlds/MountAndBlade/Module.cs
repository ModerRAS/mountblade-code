// Decompiled with JetBrains decompiler
// Type: TaleWorlds.MountAndBlade.Module
// Assembly: TaleWorlds.MountAndBlade, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
// MVID: D5209D1B-76B5-47CA-B957-255CD4B2CE6B
// Assembly location: D:\steam\steamapps\common\Mount & Blade II Bannerlord\bin\Win64_Shipping_Client\TaleWorlds.MountAndBlade.dll

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading;
using System.Threading.Tasks;
using System.Xml;
using System.Xml.Linq;
using TaleWorlds.AchievementSystem;
using TaleWorlds.ActivitySystem;
using TaleWorlds.Avatar.PlayerServices;
using TaleWorlds.Core;
using TaleWorlds.Diamond.ClientApplication;
using TaleWorlds.DotNet;
using TaleWorlds.Engine;
using TaleWorlds.Engine.Options;
using TaleWorlds.Library;
using TaleWorlds.Localization;
using TaleWorlds.ModuleManager;
using TaleWorlds.ObjectSystem;
using TaleWorlds.PlatformService;
using TaleWorlds.SaveSystem;
using TaleWorlds.ScreenSystem;

#nullable disable
namespace TaleWorlds.MountAndBlade
{
  public sealed class Module : DotNetObject, IGameStateManagerOwner
  {
    private TestContext _testContext;
    private List<MissionInfo> _missionInfos;
    private Dictionary<string, System.Type> _loadedSubmoduleTypes;
    private readonly MBList<MBSubModuleBase> _submodules;
    private SingleThreadedSynchronizationContext _synchronizationContext;
    private bool _enableCoreContentOnReturnToRoot;
    private bool _splashScreenPlayed;
    private List<InitialStateOption> _initialStateOptions;
    private IEditorMissionTester _editorMissionTester;
    private Dictionary<string, MultiplayerGameMode> _multiplayerGameModesWithNames;
    private MBList<MultiplayerGameTypeInfo> _multiplayerGameTypes = new MBList<MultiplayerGameTypeInfo>();
    private bool _isShuttingDown;

    public GameTextManager GlobalTextManager { get; private set; }

    public JobManager JobManager { get; private set; }

    public MBReadOnlyList<MBSubModuleBase> SubModules
    {
      get => (MBReadOnlyList<MBSubModuleBase>) this._submodules;
    }

    public GameStateManager GlobalGameStateManager { get; private set; }

    public bool ReturnToEditorState { get; private set; }

    public bool LoadingFinished { get; private set; }

    public bool IsOnlyCoreContentEnabled { get; private set; }

    public bool MultiplayerRequested
    {
      get
      {
        return this.StartupInfo.StartupType == GameStartupType.Multiplayer || PlatformServices.SessionInvitationType == SessionInvitationType.Multiplayer || PlatformServices.IsPlatformRequestedMultiplayer;
      }
    }

    public GameStartupInfo StartupInfo { get; private set; }

    private Module()
    {
      MBDebug.Print("Creating module...");
      this.StartupInfo = new GameStartupInfo();
      this._testContext = new TestContext();
      this._loadedSubmoduleTypes = new Dictionary<string, System.Type>();
      this._submodules = new MBList<MBSubModuleBase>();
      this.GlobalGameStateManager = new GameStateManager((IGameStateManagerOwner) this, GameStateManager.GameStateManagerType.Global);
      GameStateManager.Current = this.GlobalGameStateManager;
      this.GlobalTextManager = new GameTextManager();
      this.JobManager = new JobManager();
    }

    public static Module CurrentModule { get; private set; }

    internal static void CreateModule()
    {
      Module.CurrentModule = new Module();
      Utilities.SetLoadingScreenPercentage(0.4f);
    }

    private void AddSubModule(Assembly subModuleAssembly, string name)
    {
      System.Type type = subModuleAssembly.GetType(name);
      this._loadedSubmoduleTypes.Add(name, type);
      Managed.AddTypes(this.CollectModuleAssemblyTypes(subModuleAssembly));
    }

    private Dictionary<string, System.Type> CollectModuleAssemblyTypes(Assembly moduleAssembly)
    {
      try
      {
        Dictionary<string, System.Type> dictionary = new Dictionary<string, System.Type>();
        foreach (System.Type type in moduleAssembly.GetTypes())
        {
          if (typeof (ManagedObject).IsAssignableFrom(type) || typeof (DotNetObject).IsAssignableFrom(type))
            dictionary.Add(type.Name, type);
        }
        return dictionary;
      }
      catch (Exception ex)
      {
        MBDebug.Print("Error while getting types and loading" + ex.Message);
        if (ex is ReflectionTypeLoadException typeLoadException)
        {
          string customString = "";
          foreach (Exception loaderException in typeLoadException.LoaderExceptions)
          {
            MBDebug.Print("Loader Exceptions: " + loaderException.Message);
            customString = customString + loaderException.Message + Environment.NewLine;
          }
          TaleWorlds.Library.Debug.SetCrashReportCustomString(customString);
          foreach (System.Type type in typeLoadException.Types)
          {
            if (type != (System.Type) null)
              MBDebug.Print("Loaded Types: " + type.FullName);
          }
        }
        if (ex.InnerException != null)
          MBDebug.Print("Inner excetion: " + ex.StackTrace);
        throw;
      }
    }

    private void InitializeSubModules()
    {
      Managed.AddConstructorDelegateOfClass<SpawnedItemEntity>();
      foreach (System.Type type in this._loadedSubmoduleTypes.Values)
      {
        MBSubModuleBase mbSubModuleBase = (MBSubModuleBase) type.GetConstructor(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.CreateInstance, (Binder) null, new System.Type[0], (ParameterModifier[]) null).Invoke(new object[0]);
        this._submodules.Add(mbSubModuleBase);
        mbSubModuleBase.OnSubModuleLoad();
      }
    }

    private void FinalizeSubModules()
    {
      foreach (MBSubModuleBase submodule in (List<MBSubModuleBase>) this._submodules)
        submodule.OnSubModuleUnloaded();
    }

    public System.Type GetSubModule(string name) => this._loadedSubmoduleTypes[name];

    [MBCallback]
    internal void Initialize()
    {
      MBDebug.Print("Module Initialize begin...");
      TWParallel.InitializeAndSetImplementation((IParallelDriver) new NativeParallelDriver());
      MBSaveLoad.SetSaveDriver((ISaveDriver) new AsyncFileSaveDriver());
      this.ProcessApplicationArguments();
      this.SetWindowTitle();
      this._initialStateOptions = new List<InitialStateOption>();
      this.FillMultiplayerGameTypes();
      if (!GameNetwork.IsDedicatedServer && !MBDebug.TestModeEnabled)
      {
        MBDebug.Print("Loading platform services...");
        this.LoadPlatformServices();
      }
      string[] modulesNames = Utilities.GetModulesNames();
      List<string> stringList = new List<string>();
      foreach (string moduleId in modulesNames)
      {
        ModuleInfo moduleInfo = ModuleHelper.GetModuleInfo(moduleId);
        if (moduleInfo != null)
          stringList.Add(moduleInfo.FolderPath);
      }
      LocalizedTextManager.LoadLocalizationXmls(stringList.ToArray());
      this.GlobalTextManager.LoadDefaultTexts();
      this.IsOnlyCoreContentEnabled = Utilities.IsOnlyCoreContentEnabled();
      NativeConfig.OnConfigChanged();
      this.LoadSubModules();
      MBDebug.Print("Adding trace listener...");
      MBDebug.Print("MBModuleBase Initialize begin...");
      MBDebug.Print("MBModuleBase Initialize end...");
      GameNetwork.FindGameNetworkMessages();
      GameNetwork.FindSynchedMissionObjectTypes();
      HasTableauCache.CollectTableauCacheTypes();
      MBDebug.Print("Module Initialize end...");
      MBDebug.TestModeEnabled = Utilities.CommandLineArgumentExists("/runTest");
      this.FindMissions();
      NativeOptions.ReadRGLConfigFiles();
      BannerlordConfig.Initialize();
      EngineController.ConfigChange += new Action(this.OnConfigChanged);
      EngineController.OnConstrainedStateChanged += new Action<bool>(this.OnConstrainedStateChange);
      ScreenManager.FocusGained += new Action(this.OnFocusGained);
      ScreenManager.PlatformTextRequested += new Action<string, string, int, int>(this.OnPlatformTextRequested);
      PlatformServices.Instance.OnTextEnteredFromPlatform += new Action<string>(this.OnTextEnteredFromPlatform);
      SaveManager.InitializeGlobalDefinitionContext();
      this.EnsureAsyncJobsAreFinished();
    }

    private void OnPlatformTextRequested(
      string initialText,
      string descriptionText,
      int maxLength,
      int keyboardTypeEnum)
    {
      PlatformServices.Instance?.ShowGamepadTextInput(descriptionText, initialText, (uint) maxLength, keyboardTypeEnum == 2);
    }

    private void SetWindowTitle()
    {
      string applicationName = Utilities.GetApplicationName();
      string title;
      if (this.StartupInfo.StartupType == GameStartupType.Singleplayer)
        title = applicationName + " - Singleplayer";
      else if (this.StartupInfo.StartupType == GameStartupType.Multiplayer)
        title = applicationName + " - Multiplayer";
      else if (this.StartupInfo.StartupType == GameStartupType.GameServer)
        title = "[" + (object) Utilities.GetCurrentProcessID() + "] " + applicationName + " Dedicated Server Port:" + (object) this.StartupInfo.ServerPort;
      else
        title = applicationName;
      Utilities.SetWindowTitle(Utilities.ProcessWindowTitle(title));
    }

    private void EnsureAsyncJobsAreFinished()
    {
      if (!GameNetwork.IsDedicatedServer)
      {
        while (!MBMusicManager.IsCreationCompleted())
          Thread.Sleep(1);
      }
      if (GameNetwork.IsDedicatedServer || MBDebug.TestModeEnabled)
        return;
      while (!AchievementManager.AchievementService.IsInitializationCompleted())
        Thread.Sleep(1);
    }

    private void ProcessApplicationArguments()
    {
      this.StartupInfo.StartupType = GameStartupType.None;
      string[] strArray = Utilities.GetFullCommandLineString().Split(' ');
      for (int index = 0; index < strArray.Length; ++index)
      {
        string lowerInvariant = strArray[index].ToLowerInvariant();
        if (lowerInvariant == "/dedicatedmatchmakingserver".ToLower())
        {
          int int32 = Convert.ToInt32(strArray[index + 1]);
          string str1 = strArray[index + 2];
          sbyte num = Convert.ToSByte(strArray[index + 3]);
          string str2 = strArray[index + 4];
          index += 4;
          this.StartupInfo.StartupType = GameStartupType.GameServer;
          this.StartupInfo.DedicatedServerType = DedicatedServerType.Matchmaker;
          this.StartupInfo.ServerPort = int32;
          this.StartupInfo.ServerRegion = str1;
          this.StartupInfo.ServerPriority = num;
          this.StartupInfo.ServerGameMode = str2;
        }
        else if (lowerInvariant == "/dedicatedcustomserver".ToLower())
        {
          int int32_1 = Convert.ToInt32(strArray[index + 1]);
          string str = strArray[index + 2];
          int int32_2 = Convert.ToInt32(strArray[index + 3]);
          index += 3;
          this.StartupInfo.StartupType = GameStartupType.GameServer;
          this.StartupInfo.DedicatedServerType = DedicatedServerType.Custom;
          this.StartupInfo.ServerPort = int32_1;
          this.StartupInfo.ServerRegion = str;
          this.StartupInfo.Permission = int32_2;
        }
        else if (lowerInvariant == "/dedicatedcommunityserver".ToLower())
        {
          int int32 = Convert.ToInt32(strArray[index + 1]);
          ++index;
          this.StartupInfo.StartupType = GameStartupType.GameServer;
          this.StartupInfo.DedicatedServerType = DedicatedServerType.Community;
          this.StartupInfo.ServerPort = int32;
        }
        else if (lowerInvariant == "/dedicatedcustomserverconfigfile".ToLower())
        {
          string str = strArray[index + 1];
          ++index;
          this.StartupInfo.CustomGameServerConfigFile = str;
        }
        else if (lowerInvariant == "/dedicatedcustomservernameoverride".ToLower())
        {
          string str = strArray[index + 1];
          ++index;
          this.StartupInfo.CustomGameServerNameOverride = str;
        }
        else if (lowerInvariant == "/dedicatedcustomserverpasswordoverride".ToLower())
        {
          string str = strArray[index + 1];
          ++index;
          this.StartupInfo.CustomGameServerPasswordOverride = str;
        }
        else if (lowerInvariant == "/dedicatedcustomserverauthtoken".ToLower())
        {
          string str = strArray[index + 1];
          ++index;
          this.StartupInfo.CustomGameServerAuthToken = str;
        }
        else if (lowerInvariant == "/dedicatedcustomserverDontAllowOptionalModules".ToLower())
          this.StartupInfo.CustomGameServerAllowsOptionalModules = false;
        else if (lowerInvariant == "/playerHostedDedicatedServer".ToLower())
        {
          this.StartupInfo.PlayerHostedDedicatedServer = true;
        }
        else
        {
          switch (lowerInvariant)
          {
            case "/singleplatform":
              this.StartupInfo.IsSinglePlatformServer = true;
              continue;
            case "/customserverhost":
              string str3 = strArray[index + 1];
              ++index;
              this.StartupInfo.CustomServerHostIP = str3;
              continue;
            default:
              if (lowerInvariant == "/singleplayer".ToLower())
              {
                this.StartupInfo.StartupType = GameStartupType.Singleplayer;
                continue;
              }
              if (lowerInvariant == "/multiplayer".ToLower())
              {
                this.StartupInfo.StartupType = GameStartupType.Multiplayer;
                continue;
              }
              if (lowerInvariant == "/clientConfigurationCategory".ToLower())
              {
                ClientApplicationConfiguration.SetDefualtConfigurationCategory(strArray[index + 1]);
                ++index;
                continue;
              }
              if (lowerInvariant == "/overridenusername".ToLower())
              {
                this.StartupInfo.OverridenUserName = strArray[index + 1];
                ++index;
                continue;
              }
              if (lowerInvariant.StartsWith("-AUTH_PASSWORD".ToLowerInvariant()))
              {
                this.StartupInfo.EpicExchangeCode = lowerInvariant.Split('=')[1];
                continue;
              }
              if (lowerInvariant == "/continuegame".ToLower())
              {
                this.StartupInfo.IsContinueGame = true;
                continue;
              }
              if (lowerInvariant == "/serverbandwidthlimitmbps".ToLower())
              {
                this.StartupInfo.ServerBandwidthLimitInMbps = Convert.ToDouble(strArray[index + 1]);
                ++index;
                continue;
              }
              if (lowerInvariant == "/tickrate".ToLower())
              {
                this.StartupInfo.ServerTickRate = Convert.ToInt32(strArray[index + 1]);
                ++index;
                continue;
              }
              continue;
          }
        }
      }
    }

    internal void OnApplicationTick(float dt)
    {
      bool coreContentEnabled = this.IsOnlyCoreContentEnabled;
      this.IsOnlyCoreContentEnabled = Utilities.IsOnlyCoreContentEnabled();
      if (coreContentEnabled != this.IsOnlyCoreContentEnabled & coreContentEnabled)
      {
        InitialState initialState;
        if ((initialState = GameStateManager.Current.ActiveState as InitialState) != null)
        {
          Utilities.DisableCoreGame();
          InformationManager.ShowInquiry(new InquiryData(new TextObject("{=CaSafuAH}Content Download Complete").ToString(), new TextObject("{=1nKa4pQX}Rest of the game content has been downloaded.").ToString(), true, false, new TextObject("{=yS7PvrTD}OK").ToString(), (string) null, (Action) (() => initialState.RefreshContentState()), (Action) null));
        }
        else
        {
          InformationManager.ShowInquiry(new InquiryData(new TextObject("{=CaSafuAH}Content Download Complete").ToString(), new TextObject("{=BFhMw4bl}Rest of the game content has been downloaded. Do you want to return to the main menu?").ToString(), true, true, new TextObject("{=aeouhelq}Yes").ToString(), new TextObject("{=8OkPHu4f}No").ToString(), new Action(this.OnConfirmReturnToMainMenu), (Action) null));
          this._enableCoreContentOnReturnToRoot = true;
        }
      }
      if (this._synchronizationContext == null)
      {
        this._synchronizationContext = new SingleThreadedSynchronizationContext();
        SynchronizationContext.SetSynchronizationContext((SynchronizationContext) this._synchronizationContext);
      }
      this._testContext.OnApplicationTick(dt);
      if (!GameNetwork.MultiplayerDisabled)
        this.OnNetworkTick(dt);
      if (GameStateManager.Current == null)
        GameStateManager.Current = this.GlobalGameStateManager;
      if (GameStateManager.Current == this.GlobalGameStateManager)
      {
        if (this.LoadingFinished && this.GlobalGameStateManager.ActiveState == null)
        {
          if (this.ReturnToEditorState)
          {
            this.ReturnToEditorState = false;
            this.SetEditorScreenAsRootScreen();
          }
          else
            this.SetInitialModuleScreenAsRootScreen();
        }
        this.GlobalGameStateManager.OnTick(dt);
      }
      Utilities.RunJobs();
      PlatformServices.Instance?.Tick(dt);
      this._synchronizationContext.Tick();
      if (GameManagerBase.Current != null)
        GameManagerBase.Current.OnTick(dt);
      foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) this.SubModules)
        subModule.OnApplicationTick(dt);
      this.JobManager.OnTick(dt);
      AvatarServices.UpdateAvatarServices(dt);
    }

    private void OnConfirmReturnToMainMenu() => MBGameManager.EndGame();

    private void OnNetworkTick(float dt)
    {
      foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) this.SubModules)
        subModule.OnNetworkTick(dt);
    }

    [MBCallback]
    internal void RunTest(string commandLine)
    {
      MBDebug.Print(" TEST MODE ENABLED. Command line string: " + commandLine);
      this._testContext.RunTestAux(commandLine);
    }

    [MBCallback]
    internal void TickTest(float dt) => this._testContext.TickTest(dt);

    [MBCallback]
    internal void OnDumpCreated()
    {
      if (TestCommonBase.BaseInstance == null)
        return;
      TestCommonBase.BaseInstance.ToggleTimeoutTimer();
      TestCommonBase.BaseInstance.StartTimeoutTimer();
    }

    [MBCallback]
    internal void OnDumpCreationStarted()
    {
      if (TestCommonBase.BaseInstance == null)
        return;
      TestCommonBase.BaseInstance.ToggleTimeoutTimer();
    }

    public static void GetMetaMeshPackageMapping(Dictionary<string, string> metaMeshPackageMappings)
    {
      foreach (ItemObject objectType in (List<ItemObject>) Game.Current.ObjectManager.GetObjectTypeList<ItemObject>())
      {
        if (objectType.HasArmorComponent)
        {
          string str = (objectType.Culture != null ? objectType.Culture.StringId : "shared") + "_armor";
          metaMeshPackageMappings[objectType.MultiMeshName] = str;
          metaMeshPackageMappings[objectType.MultiMeshName + "_converted"] = str;
          metaMeshPackageMappings[objectType.MultiMeshName + "_converted_slim"] = str;
          metaMeshPackageMappings[objectType.MultiMeshName + "_slim"] = str;
        }
        if (objectType.WeaponComponent != null)
        {
          string str = (objectType.Culture != null ? objectType.Culture.StringId : "shared") + "_weapon";
          metaMeshPackageMappings[objectType.MultiMeshName] = str;
          if (objectType.HolsterMeshName != null)
            metaMeshPackageMappings[objectType.HolsterMeshName] = str;
          if (objectType.HolsterWithWeaponMeshName != null)
            metaMeshPackageMappings[objectType.HolsterWithWeaponMeshName] = str;
        }
        if (objectType.HasHorseComponent)
        {
          string str = "horses";
          metaMeshPackageMappings[objectType.MultiMeshName] = str;
        }
        if (objectType.IsFood)
        {
          string str = "food";
          metaMeshPackageMappings[objectType.MultiMeshName] = str;
        }
      }
      foreach (CraftingPiece objectType in (List<CraftingPiece>) Game.Current.ObjectManager.GetObjectTypeList<CraftingPiece>())
      {
        string str = (objectType.Culture != null ? objectType.Culture.StringId : "shared") + "_crafting";
        metaMeshPackageMappings[objectType.MeshName] = str;
      }
    }

    public static void GetItemMeshNames(HashSet<string> itemMeshNames)
    {
      foreach (ItemObject objectType in (List<ItemObject>) Game.Current.ObjectManager.GetObjectTypeList<ItemObject>())
      {
        if (!objectType.IsCraftedWeapon)
          itemMeshNames.Add(objectType.MultiMeshName);
        if (objectType.PrimaryWeapon != null)
        {
          if (objectType.FlyingMeshName != null && !objectType.FlyingMeshName.IsEmpty<char>())
            itemMeshNames.Add(objectType.FlyingMeshName);
          if (objectType.HolsterMeshName != null && !objectType.HolsterMeshName.IsEmpty<char>())
            itemMeshNames.Add(objectType.HolsterMeshName);
          if (objectType.HolsterWithWeaponMeshName != null && !objectType.HolsterWithWeaponMeshName.IsEmpty<char>())
            itemMeshNames.Add(objectType.HolsterWithWeaponMeshName);
        }
        if (objectType.HasHorseComponent)
        {
          foreach (KeyValuePair<string, bool> additionalMeshesName in objectType.HorseComponent.AdditionalMeshesNameList)
          {
            if (additionalMeshesName.Key != null && !additionalMeshesName.Key.IsEmpty<char>())
              itemMeshNames.Add(additionalMeshesName.Key);
          }
        }
      }
    }

    [MBCallback]
    internal string GetMetaMeshPackageMapping()
    {
      Dictionary<string, string> metaMeshPackageMappings = new Dictionary<string, string>();
      Module.GetMetaMeshPackageMapping(metaMeshPackageMappings);
      string meshPackageMapping = "";
      foreach (string key in metaMeshPackageMappings.Keys)
        meshPackageMapping = meshPackageMapping + key + "|" + metaMeshPackageMappings[key] + ",";
      return meshPackageMapping;
    }

    [MBCallback]
    internal string GetItemMeshNames()
    {
      HashSet<string> itemMeshNames1 = new HashSet<string>();
      Module.GetItemMeshNames(itemMeshNames1);
      foreach (CraftingPiece objectType in (List<CraftingPiece>) MBObjectManager.Instance.GetObjectTypeList<CraftingPiece>())
      {
        itemMeshNames1.Add(objectType.MeshName);
        if (objectType.BladeData != null)
          itemMeshNames1.Add(objectType.BladeData.HolsterMeshName);
      }
      foreach (BannerIconGroup bannerIconGroup in (List<BannerIconGroup>) BannerManager.Instance.BannerIconGroups)
      {
        foreach (KeyValuePair<int, BannerIconData> allIcon in bannerIconGroup.AllIcons)
        {
          if (allIcon.Value.MaterialName != "")
            itemMeshNames1.Add(allIcon.Value.MaterialName + (object) allIcon.Value.TextureIndex);
        }
      }
      string itemMeshNames2 = "";
      foreach (string source in itemMeshNames1)
      {
        if (source != null && !source.IsEmpty<char>())
          itemMeshNames2 = itemMeshNames2 + source + "#";
      }
      return itemMeshNames2;
    }

    [MBCallback]
    internal string GetHorseMaterialNames()
    {
      HashSet<string> stringSet = new HashSet<string>();
      string horseMaterialNames = "";
      foreach (ItemObject objectType in (List<ItemObject>) Game.Current.ObjectManager.GetObjectTypeList<ItemObject>())
      {
        if (objectType.HasHorseComponent && objectType.HorseComponent.HorseMaterialNames != null && objectType.HorseComponent.HorseMaterialNames.Count > 0)
        {
          foreach (HorseComponent.MaterialProperty horseMaterialName in (List<HorseComponent.MaterialProperty>) objectType.HorseComponent.HorseMaterialNames)
            stringSet.Add(horseMaterialName.Name);
        }
      }
      foreach (string source in stringSet)
      {
        if (source != null && !source.IsEmpty<char>())
          horseMaterialNames = horseMaterialNames + source + "#";
      }
      return horseMaterialNames;
    }

    public void SetInitialModuleScreenAsRootScreen()
    {
      if (GameStateManager.Current != this.GlobalGameStateManager)
        GameStateManager.Current = this.GlobalGameStateManager;
      foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) this.SubModules)
        subModule.OnBeforeInitialModuleScreenSetAsRoot();
      if (GameNetwork.IsDedicatedServer)
        return;
      string str1 = ModuleHelper.GetModuleFullPath("Native") + "Videos/TWLogo_and_Partners.ivf";
      string str2 = ModuleHelper.GetModuleFullPath("Native") + "Videos/TWLogo_and_Partners.ogg";
      if (!this._splashScreenPlayed && File.Exists(str1) && (str2 == "" || File.Exists(str2)) && !Debugger.IsAttached)
      {
        VideoPlaybackState state = this.GlobalGameStateManager.CreateState<VideoPlaybackState>();
        state.SetStartingParameters(str1, str2, string.Empty);
        state.SetOnVideoFinisedDelegate((Action) (() => this.OnInitialModuleScreenActivated(true)));
        this.GlobalGameStateManager.CleanAndPushState((GameState) state);
        this._splashScreenPlayed = true;
      }
      else
        this.OnInitialModuleScreenActivated(false);
    }

    private void OnInitialModuleScreenActivated(bool isFromSplashScreenVideo)
    {
      Utilities.EnableGlobalLoadingWindow();
      LoadingWindow.EnableGlobalLoadingWindow();
      if (!this.StartupInfo.IsContinueGame)
        this.StartupInfo.IsContinueGame = PlatformServices.IsPlatformRequestedContinueGame && !this.IsOnlyCoreContentEnabled;
      if (this._enableCoreContentOnReturnToRoot)
      {
        Utilities.DisableCoreGame();
        this._enableCoreContentOnReturnToRoot = false;
      }
      if (this.IsOnlyCoreContentEnabled && PlatformServices.SessionInvitationType == SessionInvitationType.Multiplayer)
        PlatformServices.OnSessionInvitationHandled();
      if (this.IsOnlyCoreContentEnabled && PlatformServices.IsPlatformRequestedMultiplayer)
        PlatformServices.OnPlatformMultiplayerRequestHandled();
      if (this.IsOnlyCoreContentEnabled || !this.MultiplayerRequested)
        this.GlobalGameStateManager.CleanAndPushState((GameState) this.GlobalGameStateManager.CreateState<InitialState>());
      foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) this.SubModules)
        subModule.OnInitialState();
    }

    private void OnSignInStateUpdated(bool isLoggedIn, TextObject message)
    {
      if (isLoggedIn || this.GlobalGameStateManager.ActiveState is ProfileSelectionState)
        return;
      this.GlobalGameStateManager.CleanAndPushState((GameState) this.GlobalGameStateManager.CreateState<ProfileSelectionState>());
    }

    [MBCallback]
    internal bool SetEditorScreenAsRootScreen()
    {
      if (GameStateManager.Current != this.GlobalGameStateManager)
        GameStateManager.Current = this.GlobalGameStateManager;
      if (this.GlobalGameStateManager.ActiveState is EditorState)
        return false;
      this.GlobalGameStateManager.CleanAndPushState((GameState) GameStateManager.Current.CreateState<EditorState>());
      return true;
    }

    private bool CheckAssemblyForMissionMethods(Assembly assembly)
    {
      Assembly assembly1 = Assembly.GetAssembly(typeof (MissionMethod));
      if (assembly == assembly1)
        return true;
      foreach (AssemblyName referencedAssembly in assembly.GetReferencedAssemblies())
      {
        if (referencedAssembly.FullName == assembly1.FullName)
          return true;
      }
      return false;
    }

    private void FindMissions()
    {
      MBDebug.Print("Searching Mission Methods");
      this._missionInfos = new List<MissionInfo>();
      Assembly[] assemblies = AppDomain.CurrentDomain.GetAssemblies();
      List<System.Type> typeList = new List<System.Type>();
      foreach (Assembly assembly in assemblies)
      {
        if (this.CheckAssemblyForMissionMethods(assembly))
        {
          foreach (System.Type type in assembly.GetTypesSafe())
          {
            object[] customAttributesSafe = type.GetCustomAttributesSafe(typeof (MissionManager), true);
            if (customAttributesSafe != null && customAttributesSafe.Length != 0)
              typeList.Add(type);
          }
        }
      }
      MBDebug.Print("Found " + (object) typeList.Count + " mission managers");
      foreach (System.Type type in typeList)
      {
        foreach (MethodInfo method in type.GetMethods(BindingFlags.Static | BindingFlags.Public))
        {
          object[] customAttributesSafe = method.GetCustomAttributesSafe(typeof (MissionMethod), true);
          if (customAttributesSafe != null && customAttributesSafe.Length != 0)
          {
            MissionMethod missionMethod = customAttributesSafe[0] as MissionMethod;
            MissionInfo missionInfo1 = new MissionInfo();
            missionInfo1.Creator = method;
            missionInfo1.Manager = type;
            missionInfo1.UsableByEditor = missionMethod.UsableByEditor;
            missionInfo1.Name = method.Name;
            if (missionInfo1.Name.StartsWith("Open"))
              missionInfo1.Name = missionInfo1.Name.Substring(4);
            if (missionInfo1.Name.EndsWith("Mission"))
              missionInfo1.Name = missionInfo1.Name.Substring(0, missionInfo1.Name.Length - 7);
            MissionInfo missionInfo2 = missionInfo1;
            missionInfo2.Name = missionInfo2.Name + "[" + type.Name + "]";
            this._missionInfos.Add(missionInfo1);
          }
        }
      }
      MBDebug.Print("Found " + (object) this._missionInfos.Count + " missions");
    }

    [MBCallback]
    internal string GetMissionControllerClassNames()
    {
      string controllerClassNames = "";
      for (int index = 0; index < this._missionInfos.Count; ++index)
      {
        MissionInfo missionInfo = this._missionInfos[index];
        if (missionInfo.UsableByEditor)
        {
          controllerClassNames += missionInfo.Name;
          if (index + 1 != this._missionInfos.Count)
            controllerClassNames += " ";
        }
      }
      return controllerClassNames;
    }

    private void LoadPlatformServices()
    {
      IPlatformServices platformServices = (IPlatformServices) null;
      Assembly assembly = (Assembly) null;
      PlatformInitParams platformInitParams = new PlatformInitParams();
      switch (ApplicationPlatform.CurrentPlatform)
      {
        case Platform.WindowsSteam:
          assembly = AssemblyLoader.LoadFrom(ManagedDllFolder.Name + "TaleWorlds.PlatformService.Steam.dll");
          break;
        case Platform.WindowsEpic:
          assembly = AssemblyLoader.LoadFrom(ManagedDllFolder.Name + "TaleWorlds.PlatformService.Epic.dll");
          platformInitParams.Add("ExchangeCode", (object) this.StartupInfo.EpicExchangeCode);
          break;
        case Platform.Orbis:
          assembly = AssemblyLoader.LoadFrom(ManagedDllFolder.Name + "TaleWorlds.PlatformService.PS.dll");
          platformInitParams.Add("AchievementDataXmlPath", (object) (ModuleHelper.GetModuleFullPath("Native") + "ModuleData/AchievementData/ps_achievement_data.xml"));
          break;
        case Platform.Durango:
        case Platform.GDKDesktop:
          assembly = AssemblyLoader.LoadFrom(ManagedDllFolder.Name + "TaleWorlds.PlatformService.GDK.dll");
          break;
        case Platform.WindowsNoPlatform:
          string userName = "TestUser" + (object) (DateTime.Now.Ticks % 10000L);
          if (!string.IsNullOrEmpty(this.StartupInfo.OverridenUserName))
            userName = this.StartupInfo.OverridenUserName;
          platformServices = (IPlatformServices) new TestPlatformServices(userName);
          break;
        case Platform.WindowsGOG:
          assembly = AssemblyLoader.LoadFrom(ManagedDllFolder.Name + "TaleWorlds.PlatformService.GOG.dll");
          platformInitParams.Add("AchievementDataXmlPath", (object) (ModuleHelper.GetModuleFullPath("Native") + "ModuleData/AchievementData/gog_achievement_data.xml"));
          break;
      }
      if (assembly != (Assembly) null)
      {
        List<System.Type> typesSafe = assembly.GetTypesSafe();
        System.Type type1 = (System.Type) null;
        foreach (System.Type type2 in typesSafe)
        {
          if (((IEnumerable<System.Type>) type2.GetInterfaces()).Contains<System.Type>(typeof (IPlatformServices)))
          {
            type1 = type2;
            break;
          }
        }
        platformServices = (IPlatformServices) type1.GetConstructor(new System.Type[1]
        {
          typeof (PlatformInitParams)
        }).Invoke(new object[1]
        {
          (object) platformInitParams
        });
      }
      if (platformServices == null)
        return;
      PlatformServices.Setup(platformServices);
      PlatformServices.OnSessionInvitationAccepted += new Action<SessionInvitationType>(this.OnSessionInvitationAccepted);
      PlatformServices.OnPlatformRequestedMultiplayer += new Action(this.OnPlatformRequestedMultiplayer);
      PlatformServices.Initialize(new IFriendListService[3]
      {
        (IFriendListService) new BannerlordFriendListService(),
        (IFriendListService) new ClanFriendListService(),
        (IFriendListService) new RecentPlayersFriendListService()
      });
      AchievementManager.AchievementService = platformServices.GetAchievementService();
      ActivityManager.ActivityService = platformServices.GetActivityService();
    }

    private void OnSessionInvitationAccepted(SessionInvitationType targetGameType)
    {
      if (targetGameType != SessionInvitationType.Multiplayer)
        return;
      if (this.IsOnlyCoreContentEnabled)
        PlatformServices.OnSessionInvitationHandled();
      else
        this.JobManager.AddJob((Job) new OnSessionInvitationAcceptedJob(targetGameType));
    }

    private void OnPlatformRequestedMultiplayer()
    {
      if (this.IsOnlyCoreContentEnabled)
        PlatformServices.OnPlatformMultiplayerRequestHandled();
      else
        this.JobManager.AddJob((Job) new OnPlatformRequestedMultiplayerJob());
    }

    private void LoadSubModules()
    {
      MBDebug.Print("Loading submodules...");
      List<ModuleInfo> moduleInfoList = new List<ModuleInfo>();
      string[] modulesNames = Utilities.GetModulesNames();
      for (int index = 0; index < modulesNames.Length; ++index)
      {
        ModuleInfo moduleInfo = ModuleHelper.GetModuleInfo(modulesNames[index]);
        if (moduleInfo != null)
        {
          moduleInfoList.Add(moduleInfo);
          XmlResource.GetMbprojxmls(modulesNames[index]);
          XmlResource.GetXmlListAndApply(modulesNames[index]);
        }
      }
      string configName = Common.ConfigName;
      foreach (ModuleInfo moduleInfo in moduleInfoList)
      {
        foreach (SubModuleInfo subModule in moduleInfo.SubModules)
        {
          if (this.CheckIfSubmoduleCanBeLoadable(subModule) && !this._loadedSubmoduleTypes.ContainsKey(subModule.SubModuleClassType))
          {
            string path1 = System.IO.Path.Combine(moduleInfo.FolderPath, "bin", configName);
            string str1 = System.IO.Path.Combine(path1, subModule.DLLName);
            string str2 = ManagedDllFolder.Name + subModule.DLLName;
            foreach (string assembly in subModule.Assemblies)
            {
              string str3 = System.IO.Path.Combine(path1, assembly);
              string assemblyFile = ManagedDllFolder.Name + assembly;
              if (File.Exists(str3))
                AssemblyLoader.LoadFrom(str3);
              else
                AssemblyLoader.LoadFrom(assemblyFile);
            }
            if (File.Exists(str1))
              this.AddSubModule(AssemblyLoader.LoadFrom(str1), subModule.SubModuleClassType);
            else if (File.Exists(str2))
              this.AddSubModule(AssemblyLoader.LoadFrom(str2), subModule.SubModuleClassType);
            else
              TaleWorlds.Library.Debug.ShowMessageBox("Cannot find: " + str1, "Error", 4U);
          }
        }
      }
      this.InitializeSubModules();
    }

    public bool CheckIfSubmoduleCanBeLoadable(SubModuleInfo subModuleInfo)
    {
      if (subModuleInfo.Tags.Count > 0)
      {
        foreach (Tuple<SubModuleInfo.SubModuleTags, string> tag in subModuleInfo.Tags)
        {
          if (!this.GetSubModuleValiditiy(tag.Item1, tag.Item2))
            return false;
        }
      }
      return true;
    }

    private bool GetSubModuleValiditiy(SubModuleInfo.SubModuleTags tag, string value)
    {
      switch (tag)
      {
        case SubModuleInfo.SubModuleTags.RejectedPlatform:
          Platform result1;
          if (Enum.TryParse<Platform>(value, out result1))
            return ApplicationPlatform.CurrentPlatform != result1;
          break;
        case SubModuleInfo.SubModuleTags.ExclusivePlatform:
          Platform result2;
          if (Enum.TryParse<Platform>(value, out result2))
            return ApplicationPlatform.CurrentPlatform == result2;
          break;
        case SubModuleInfo.SubModuleTags.DedicatedServerType:
          switch (value.ToLower())
          {
            case "none":
              return this.StartupInfo.DedicatedServerType == DedicatedServerType.None;
            case "both":
            case "all":
              return this.StartupInfo.DedicatedServerType != DedicatedServerType.None;
            case "custom":
              return this.StartupInfo.DedicatedServerType == DedicatedServerType.Custom;
            case "matchmaker":
              return this.StartupInfo.DedicatedServerType == DedicatedServerType.Matchmaker;
            case "community":
              return this.StartupInfo.DedicatedServerType == DedicatedServerType.Community;
          }
          break;
        case SubModuleInfo.SubModuleTags.IsNoRenderModeElement:
          return value.Equals("false");
        case SubModuleInfo.SubModuleTags.DependantRuntimeLibrary:
          Runtime result3;
          if (Enum.TryParse<Runtime>(value, out result3))
            return ApplicationPlatform.CurrentRuntimeLibrary == result3;
          break;
        case SubModuleInfo.SubModuleTags.PlayerHostedDedicatedServer:
          string lower = value.ToLower();
          return this.StartupInfo.PlayerHostedDedicatedServer ? lower.Equals("true") : lower.Equals("false");
      }
      return true;
    }

    [MBCallback]
    internal static void MBThrowException()
    {
      TaleWorlds.Library.Debug.FailedAssert(nameof (MBThrowException), "C:\\Develop\\MB3\\Source\\Bannerlord\\TaleWorlds.MountAndBlade\\Module.cs", nameof (MBThrowException), 1424);
    }

    [MBCallback]
    internal void OnEnterEditMode(bool isFirstTime)
    {
      int num = isFirstTime ? 1 : 0;
    }

    [MBCallback]
    internal static Module GetInstance() => Module.CurrentModule;

    [MBCallback]
    internal static string GetGameStatus()
    {
      return TestCommonBase.BaseInstance != null ? TestCommonBase.BaseInstance.GetGameStatus() : "";
    }

    private void FinalizeModule()
    {
      if (Game.Current != null)
        Game.Current.OnFinalize();
      if (TestCommonBase.BaseInstance != null)
        TestCommonBase.BaseInstance.OnFinalize();
      this._testContext.FinalizeContext();
      MBInformationManager.Clear();
      InformationManager.Clear();
      ScreenManager.OnFinalize();
      int num = (int) BannerlordConfig.Save();
      this.FinalizeSubModules();
      PlatformServices.Instance?.Terminate();
      Common.MemoryCleanupGC();
      GC.WaitForPendingFinalizers();
    }

    internal static void FinalizeCurrentModule()
    {
      Module.CurrentModule.FinalizeModule();
      Module.CurrentModule = (Module) null;
    }

    [MBCallback]
    internal void SetLoadingFinished() => this.LoadingFinished = true;

    [MBCallback]
    internal void OnCloseSceneEditorPresentation() => GameStateManager.Current.PopState();

    [MBCallback]
    internal void OnSceneEditorModeOver() => GameStateManager.Current.PopState();

    private void OnConfigChanged()
    {
      foreach (MBSubModuleBase subModule in (List<MBSubModuleBase>) this.SubModules)
        subModule.OnConfigChanged();
    }

    private void OnConstrainedStateChange(bool isConstrained)
    {
      if (isConstrained)
        return;
      PlatformServices.Instance.OnFocusGained();
    }

    private void OnFocusGained() => PlatformServices.Instance.OnFocusGained();

    private void OnTextEnteredFromPlatform(string text)
    {
      ScreenManager.OnOnscreenKeyboardDone(text);
    }

    [MBCallback]
    internal void OnSkinsXMLHasChanged()
    {
      if (this.SkinsXMLHasChanged == null)
        return;
      this.SkinsXMLHasChanged();
    }

    public event Action SkinsXMLHasChanged;

    [MBCallback]
    internal void OnImguiProfilerTick()
    {
      if (this.ImguiProfilerTick == null)
        return;
      this.ImguiProfilerTick();
    }

    [MBCallback]
    internal static string CreateProcessedSkinsXMLForNative(out string baseSkinsXmlPath)
    {
      List<string> usedPaths;
      XDocument xdocument = MBObjectManager.ToXDocument(MBObjectManager.GetMergedXmlForNative("soln_skins", out usedPaths));
      for (int index1 = 0; index1 < xdocument.Descendants((XName) "race").Count<XElement>(); ++index1)
      {
        for (int index2 = index1 + 1; index2 < xdocument.Descendants((XName) "race").Count<XElement>(); ++index2)
        {
          if (xdocument.Descendants((XName) "race").ElementAt<XElement>(index1).FirstAttribute.ToString() == xdocument.Descendants((XName) "race").ElementAt<XElement>(index2).FirstAttribute.ToString())
          {
            xdocument.Descendants((XName) "race").ElementAt<XElement>(index1).Add((object) xdocument.Descendants((XName) "race").ElementAt<XElement>(index2).Descendants());
            xdocument.Descendants((XName) "race").ElementAt<XElement>(index2).Remove();
            --index2;
          }
        }
      }
      XmlDocument xmlDocument = MBObjectManager.ToXmlDocument(xdocument);
      System.IO.StringWriter w1 = new System.IO.StringWriter();
      XmlTextWriter w2 = new XmlTextWriter((TextWriter) w1);
      xmlDocument.WriteTo((XmlWriter) w2);
      baseSkinsXmlPath = usedPaths[0];
      return w1.ToString();
    }

    [MBCallback]
    internal static string CreateProcessedActionSetsXMLForNative()
    {
      XmlDocument mergedXmlForNative = MBObjectManager.GetMergedXmlForNative("soln_action_sets", out List<string> _);
      Dictionary<string, XElement> dictionary = new Dictionary<string, XElement>();
      XDocument xdocument = MBObjectManager.ToXDocument(mergedXmlForNative);
      IEnumerable<XElement> source = xdocument.Descendants((XName) "action_set");
      for (int index = 0; index < source.Count<XElement>(); ++index)
      {
        XElement xelement = source.ElementAt<XElement>(index);
        string key = xelement.FirstAttribute.ToString();
        if (dictionary.ContainsKey(key))
        {
          dictionary[key].Add((object) xelement.Descendants());
          xelement.Remove();
          --index;
        }
        else
          dictionary.Add(key, xelement);
      }
      XmlDocument xmlDocument = MBObjectManager.ToXmlDocument(xdocument);
      System.IO.StringWriter w1 = new System.IO.StringWriter();
      XmlTextWriter w2 = new XmlTextWriter((TextWriter) w1);
      xmlDocument.WriteTo((XmlWriter) w2);
      return w1.ToString();
    }

    [MBCallback]
    internal static string CreateProcessedActionTypesXMLForNative()
    {
      XmlDocument mergedXmlForNative = MBObjectManager.GetMergedXmlForNative("soln_action_types", out List<string> _);
      System.IO.StringWriter w1 = new System.IO.StringWriter();
      XmlTextWriter w2 = new XmlTextWriter((TextWriter) w1);
      mergedXmlForNative.WriteTo((XmlWriter) w2);
      return w1.ToString();
    }

    [MBCallback]
    internal static string CreateProcessedAnimationsXMLForNative(out string animationsXmlPaths)
    {
      List<string> usedPaths;
      XmlDocument mergedXmlForNative = MBObjectManager.GetMergedXmlForNative("soln_animations", out usedPaths);
      System.IO.StringWriter w1 = new System.IO.StringWriter();
      XmlTextWriter w2 = new XmlTextWriter((TextWriter) w1);
      mergedXmlForNative.WriteTo((XmlWriter) w2);
      animationsXmlPaths = "";
      for (int index = 0; index < usedPaths.Count; ++index)
      {
        animationsXmlPaths += usedPaths[index];
        if (index != usedPaths.Count - 1)
          animationsXmlPaths += "\n";
      }
      return w1.ToString();
    }

    [MBCallback]
    internal static string CreateProcessedVoiceDefinitionsXMLForNative()
    {
      XDocument xdocument = MBObjectManager.ToXDocument(MBObjectManager.GetMergedXmlForNative("soln_voice_definitions", out List<string> _));
      XElement xelement = xdocument.Descendants((XName) "voice_type_declarations").First<XElement>();
      for (int index = 1; index < xdocument.Descendants((XName) "voice_type_declarations").Count<XElement>(); index = index - 1 + 1)
      {
        xelement.Add((object) xdocument.Descendants((XName) "voice_type_declarations").ElementAt<XElement>(index).Descendants());
        xdocument.Descendants((XName) "voice_type_declarations").ElementAt<XElement>(index).Remove();
      }
      for (int index1 = 0; index1 < xdocument.Descendants((XName) "voice_definition").Count<XElement>(); ++index1)
      {
        for (int index2 = index1 + 1; index2 < xdocument.Descendants((XName) "voice_definition").Count<XElement>(); ++index2)
        {
          if (xdocument.Descendants((XName) "voice_definition").ElementAt<XElement>(index1).FirstAttribute.ToString() == xdocument.Descendants((XName) "voice_definition").ElementAt<XElement>(index2).FirstAttribute.ToString())
          {
            xdocument.Descendants((XName) "voice_definition").ElementAt<XElement>(index1).Add((object) xdocument.Descendants((XName) "voice_definition").ElementAt<XElement>(index2).Descendants());
            xdocument.Descendants((XName) "voice_definition").ElementAt<XElement>(index2).Remove();
            --index2;
          }
        }
      }
      XmlDocument xmlDocument = MBObjectManager.ToXmlDocument(xdocument);
      System.IO.StringWriter w1 = new System.IO.StringWriter();
      XmlTextWriter w2 = new XmlTextWriter((TextWriter) w1);
      xmlDocument.WriteTo((XmlWriter) w2);
      return w1.ToString();
    }

    [MBCallback]
    internal static string CreateProcessedModuleDataXMLForNative(string xmlType)
    {
      XmlDocument xmlDocument = MBObjectManager.GetMergedXmlForNative("soln_" + xmlType, out List<string> _);
      if (xmlType == "full_movement_sets")
      {
        XDocument xdocument = MBObjectManager.ToXDocument(xmlDocument);
        for (int index1 = 0; index1 < xdocument.Descendants((XName) "full_movement_set").Count<XElement>(); ++index1)
        {
          for (int index2 = index1 + 1; index2 < xdocument.Descendants((XName) "full_movement_set").Count<XElement>(); ++index2)
          {
            if (xdocument.Descendants((XName) "full_movement_set").ElementAt<XElement>(index1).FirstAttribute.ToString() == xdocument.Descendants((XName) "full_movement_set").ElementAt<XElement>(index2).FirstAttribute.ToString())
            {
              xdocument.Descendants((XName) "full_movement_set").ElementAt<XElement>(index1).Add((object) xdocument.Descendants((XName) "full_movement_set").ElementAt<XElement>(index2).Descendants());
              xdocument.Descendants((XName) "full_movement_set").ElementAt<XElement>(index2).Remove();
              --index2;
            }
          }
        }
        xmlDocument = MBObjectManager.ToXmlDocument(xdocument);
      }
      System.IO.StringWriter w1 = new System.IO.StringWriter();
      XmlTextWriter w2 = new XmlTextWriter((TextWriter) w1);
      xmlDocument.WriteTo((XmlWriter) w2);
      return w1.ToString();
    }

    public event Action ImguiProfilerTick;

    public void ClearStateOptions() => this._initialStateOptions.Clear();

    public void AddInitialStateOption(InitialStateOption initialStateOption)
    {
      this._initialStateOptions.Add(initialStateOption);
    }

    public IEnumerable<InitialStateOption> GetInitialStateOptions()
    {
      return (IEnumerable<InitialStateOption>) this._initialStateOptions.OrderBy<InitialStateOption, int>((Func<InitialStateOption, int>) (s => s.OrderIndex));
    }

    public InitialStateOption GetInitialStateOptionWithId(string id)
    {
      foreach (InitialStateOption initialStateOption in this._initialStateOptions)
      {
        if (initialStateOption.Id == id)
          return initialStateOption;
      }
      return (InitialStateOption) null;
    }

    public void ExecuteInitialStateOptionWithId(string id)
    {
      this.GetInitialStateOptionWithId(id)?.DoAction();
    }

    void IGameStateManagerOwner.OnStateStackEmpty()
    {
    }

    void IGameStateManagerOwner.OnStateChanged(GameState oldState)
    {
    }

    public void SetEditorMissionTester(IEditorMissionTester editorMissionTester)
    {
      this._editorMissionTester = editorMissionTester;
    }

    [MBCallback]
    internal void StartMissionForEditor(string missionName, string sceneName, string levels)
    {
      if (this._editorMissionTester == null)
        return;
      this._editorMissionTester.StartMissionForEditor(missionName, sceneName, levels);
    }

    [MBCallback]
    internal void StartMissionForReplayEditor(
      string missionName,
      string sceneName,
      string levels,
      string fileName,
      bool record,
      float startTime,
      float endTime)
    {
      if (this._editorMissionTester == null)
        return;
      this._editorMissionTester.StartMissionForReplayEditor(missionName, sceneName, levels, fileName, record, startTime, endTime);
    }

    public void StartMissionForEditorAux(
      string missionName,
      string sceneName,
      string levels,
      bool forReplay,
      string replayFileName,
      bool isRecord)
    {
      GameStateManager.Current = Game.Current.GameStateManager;
      this.ReturnToEditorState = true;
      MissionInfo missionInfo = this._missionInfos.Find((Predicate<MissionInfo>) (mi => mi.Name == missionName)) ?? this._missionInfos.Find((Predicate<MissionInfo>) (mi => mi.Name.Contains(missionName)));
      if (forReplay)
        missionInfo.Creator.Invoke((object) null, new object[2]
        {
          (object) replayFileName,
          (object) isRecord
        });
      else
        missionInfo.Creator.Invoke((object) null, new object[2]
        {
          (object) sceneName,
          (object) levels
        });
    }

    private void FillMultiplayerGameTypes()
    {
      this._multiplayerGameModesWithNames = new Dictionary<string, MultiplayerGameMode>();
      this._multiplayerGameTypes = new MBList<MultiplayerGameTypeInfo>();
    }

    public MultiplayerGameMode GetMultiplayerGameMode(string gameType)
    {
      MultiplayerGameMode multiplayerGameMode;
      return this._multiplayerGameModesWithNames.TryGetValue(gameType, out multiplayerGameMode) ? multiplayerGameMode : (MultiplayerGameMode) null;
    }

    public void AddMultiplayerGameMode(MultiplayerGameMode multiplayerGameMode)
    {
      this._multiplayerGameModesWithNames.Add(multiplayerGameMode.Name, multiplayerGameMode);
      this._multiplayerGameTypes.Add(new MultiplayerGameTypeInfo("Native", multiplayerGameMode.Name));
    }

    public MBReadOnlyList<MultiplayerGameTypeInfo> GetMultiplayerGameTypes()
    {
      return (MBReadOnlyList<MultiplayerGameTypeInfo>) this._multiplayerGameTypes;
    }

    public bool StartMultiplayerGame(string multiplayerGameType, string scene)
    {
      MultiplayerGameMode multiplayerGameMode;
      if (!this._multiplayerGameModesWithNames.TryGetValue(multiplayerGameType, out multiplayerGameMode))
        return false;
      multiplayerGameMode.StartMultiplayerGame(scene);
      return true;
    }

    public async void ShutDownWithDelay(string reason, int seconds)
    {
      if (this._isShuttingDown)
        return;
      this._isShuttingDown = true;
      for (int i = 0; i < seconds; ++i)
      {
        string message = "Shutting down in " + (object) (seconds - i) + " seconds with reason '" + reason + "'";
        TaleWorlds.Library.Debug.Print(message);
        Console.WriteLine(message);
        await Task.Delay(1000);
      }
      if (Game.Current != null)
      {
        TaleWorlds.Library.Debug.Print("Active game exist during ShutDownWithDelay");
        MBGameManager.EndGame();
      }
      Utilities.QuitGame();
    }

    public enum XmlInformationType
    {
      Parameters,
      MbObjectType,
    }

    private enum StartupType
    {
      None,
      TestMode,
      GameServer,
      Singleplayer,
      Multiplayer,
      Count,
    }
  }
}
