#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
核心引擎文件美化脚本
用于批量重命名02_core_engine.c文件中的函数和变量
"""

import re
import os

def read_file(file_path):
    """读取文件内容"""
    with open(file_path, 'r', encoding='utf-8') as f:
        return f.read()

def write_file(file_path, content):
    """写入文件内容"""
    with open(file_path, 'w', encoding='utf-8') as f:
        f.write(content)

def create_function_mapping():
    """创建函数映射字典"""
    return {
        # 系统初始化相关函数
        'FUN_00101234': 'CoreEngineInitializeSystems',
        'FUN_00101256': 'CoreEngineSetupMemoryManager',
        'FUN_00101278': 'CoreEngineCreateTaskScheduler',
        'FUN_00101290': 'CoreEngineInitializeEventSystem',
        'FUN_00101312': 'CoreEngineSetupLoggingSystem',
        'FUN_00101334': 'CoreEngineInitializeConfigSystem',
        'FUN_00101356': 'CoreEngineCreateResourceLoader',
        'FUN_00101378': 'CoreEngineSetupThreadManager',
        'FUN_00101390': 'CoreEngineInitializeProfiler',
        'FUN_00101412': 'CoreEngineCreateMemoryPool',
        
        # 渲染相关函数
        'FUN_00101434': 'RenderInitializeGraphicsAPI',
        'FUN_00101456': 'RenderCreateSwapChain',
        'FUN_00101478': 'RenderSetupRenderTargets',
        'FUN_00101490': 'RenderInitializeShaders',
        'FUN_00101512': 'RenderCreateVertexBuffer',
        'FUN_00101534': 'RenderCreateIndexBuffer',
        'FUN_00101556': 'RenderSetupTextureManager',
        'FUN_00101578': 'RenderCreateRenderPipeline',
        'FUN_00101590': 'RenderInitializeCommandQueue',
        'FUN_00101612': 'RenderSetupFrameBuffer',
        
        # 物理相关函数
        'FUN_00101634': 'PhysicsInitializeWorld',
        'FUN_00101656': 'PhysicsCreateRigidBody',
        'FUN_00101678': 'PhysicsCreateCollider',
        'FUN_00101690': 'PhysicsSetupConstraints',
        'FUN_00101712': 'PhysicsInitializeMaterials',
        'FUN_00101734': 'PhysicsCreateCharacterController',
        'FUN_00101756': 'PhysicsSetupRaycasting',
        'FUN_00101778': 'PhysicsInitializeCollisionSystem',
        'FUN_00101790': 'PhysicsCreateTriggerVolumes',
        'FUN_00101812': 'PhysicsSetupPhysicsWorld',
        
        # 输入相关函数
        'FUN_00101834': 'InputInitializeDevices',
        'FUN_00101856': 'InputProcessKeyboardEvents',
        'FUN_00101878': 'InputProcessMouseEvents',
        'FUN_00101890': 'InputProcessGamepadEvents',
        'FUN_00101912': 'InputSetupInputMapping',
        'FUN_00101934': 'InputCreateActionBindings',
        'FUN_00101956': 'InputInitializeEventQueue',
        'FUN_00101978': 'InputProcessInputEvents',
        'FUN_00101990': 'InputSetupInputDevices',
        'FUN_00102012': 'InputCreateInputManager',
        
        # 音频相关函数
        'FUN_00102034': 'AudioInitializeAudioSystem',
        'FUN_00102056': 'AudioCreateAudioDevice',
        'FUN_00102078': 'AudioLoadSoundAssets',
        'FUN_00102090': 'AudioCreateSoundSources',
        'FUN_00102112': 'AudioSetupAudioMixer',
        'FUN_00102134': 'AudioInitializeAudioEngine',
        'FUN_00102156': 'AudioCreateAudioBuffers',
        'FUN_00102178': 'AudioSetupAudioListener',
        'FUN_00102190': 'AudioProcessAudioEvents',
        'FUN_00102212': 'AudioUpdateAudioSystem',
        
        # 网络相关函数
        'FUN_00102234': 'NetworkInitializeNetworkSystem',
        'FUN_00102256': 'NetworkCreateNetworkSocket',
        'FUN_00102278': 'NetworkSetupNetworkProtocol',
        'FUN_00102290': 'NetworkInitializeConnectionManager',
        'FUN_00102312': 'NetworkCreatePacketHandler',
        'FUN_00102334': 'NetworkSetupEventSystem',
        'FUN_00102356': 'NetworkInitializeSecurityLayer',
        'FUN_00102378': 'NetworkCreateNetworkBuffer',
        'FUN_00102390': 'NetworkProcessNetworkEvents',
        'FUN_00102412': 'NetworkUpdateNetworkSystem',
        
        # 资源管理相关函数
        'FUN_00102434': 'ResourceManagerInitialize',
        'FUN_00102456': 'ResourceManagerLoadAsset',
        'FUN_00102478': 'ResourceManagerUnloadAsset',
        'FUN_00102490': 'ResourceManagerCreateResourcePool',
        'FUN_00102512': 'ResourceManagerSetupCacheSystem',
        'FUN_00102534': 'ResourceManagerInitializeAsyncLoader',
        'FUN_00102556': 'ResourceManagerCreateResourceHandles',
        'FUN_00102578': 'ResourceManagerSetupMemoryManager',
        'FUN_00102590': 'ResourceManagerProcessResourceEvents',
        'FUN_00102612': 'ResourceManagerUpdateResourceSystem',
        
        # 场景管理相关函数
        'FUN_00102634': 'SceneManagerInitialize',
        'FUN_00102656': 'SceneManagerCreateScene',
        'FUN_00102678': 'SceneManagerLoadScene',
        'FUN_00102690': 'SceneManagerUnloadScene',
        'FUN_00102712': 'SceneManagerSetupSceneGraph',
        'FUN_00102734': 'SceneManagerCreateEntitySystem',
        'FUN_00102756': 'SceneManagerInitializeTransformSystem',
        'FUN_00102778': 'SceneManagerSetupComponentSystem',
        'FUN_00102790': 'SceneManagerProcessSceneEvents',
        'FUN_00102812': 'SceneManagerUpdateSceneSystem',
        
        # 游戏逻辑相关函数
        'FUN_00102834': 'GameLogicInitialize',
        'FUN_00102856': 'GameLogicCreateGameState',
        'FUN_00102878': 'GameLogicSetupGameRules',
        'FUN_00102890': 'GameLogicInitializeEntitySystem',
        'FUN_00102912': 'GameLogicCreateAIController',
        'FUN_00102934': 'GameLogicSetupAnimationSystem',
        'FUN_00102956': 'GameLogicInitializePhysicsIntegration',
        'FUN_00102978': 'GameLogicCreateScriptingSystem',
        'FUN_00102990': 'GameLogicProcessGameEvents',
        'FUN_00103012': 'GameLogicUpdateGameSystem',
        
        # UI相关函数
        'FUN_00103034': 'UIInitializeUISystem',
        'FUN_00103056': 'UICreateUIWindow',
        'FUN_00103078': 'UISetupUILayout',
        'FUN_00103090': 'UIInitializeUIRenderer',
        'FUN_00103112': 'UICreateUIWidgets',
        'FUN_00103134': 'UISetupEventHandlers',
        'FUN_00103156': 'UIInitializeInputSystem',
        'FUN_00103178': 'UICreateUIManager',
        'FUN_00103190': 'UIProcessUIEvents',
        'FUN_00103212': 'UIUpdateUISystem',
        
        # 脚本相关函数
        'FUN_00103234': 'ScriptInitializeScriptSystem',
        'FUN_00103256': 'ScriptCreateScriptEngine',
        'FUN_00103278': 'ScriptLoadScriptAssets',
        'FUN_00103290': 'ScriptSetupScriptBindings',
        'FUN_00103312': 'ScriptInitializeScriptContext',
        'FUN_00103334': 'ScriptCreateScriptManager',
        'FUN_00103356': 'ScriptSetupScriptDebugger',
        'FUN_00103378': 'ScriptInitializeScriptCompiler',
        'FUN_00103390': 'ScriptProcessScriptEvents',
        'FUN_00103412': 'ScriptUpdateScriptSystem',
        
        # 调试相关函数
        'FUN_00103434': 'DebugInitializeDebugSystem',
        'FUN_00103456': 'DebugCreateDebugConsole',
        'FUN_00103478': 'DebugSetupDebugRenderer',
        'FUN_00103490': 'DebugInitializeProfiler',
        'FUN_00103512': 'DebugCreateDebugOverlay',
        'FUN_00103534': 'DebugSetupDebugTools',
        'FUN_00103556': 'DebugInitializeLoggingSystem',
        'FUN_00103578': 'DebugCreateDebugBreakpoints',
        'FUN_00103590': 'DebugSetupDebugVisualizer',
        'FUN_00103612': 'DebugProcessDebugEvents',
        'FUN_00103634': 'DebugUpdateDebugSystem',
        
        # 性能相关函数
        'FUN_00103656': 'PerformanceInitializeProfiler',
        'FUN_00103678': 'PerformanceCreatePerformanceMonitor',
        'FUN_00103690': 'PerformanceSetupMetricsCollector',
        'FUN_00103712': 'PerformanceInitializeBenchmarkSystem',
        'FUN_00103734': 'PerformanceCreatePerformanceCounter',
        'FUN_00103756': 'PerformanceSetupFrameRateMonitor',
        'FUN_00103778': 'PerformanceInitializeMemoryProfiler',
        'FUN_00103790': 'PerformanceCreatePerformanceReport',
        'FUN_00103812': 'PerformanceSetupOptimizationAnalyzer',
        'FUN_00103834': 'PerformanceProcessPerformanceEvents',
        'FUN_00103856': 'PerformanceUpdatePerformanceSystem',
        
        # 内存管理相关函数
        'FUN_00103878': 'MemoryInitializeMemoryManager',
        'FUN_00103890': 'MemoryCreateMemoryPool',
        'FUN_00103912': 'MemorySetupMemoryAllocator',
        'FUN_00103934': 'MemoryInitializeGarbageCollector',
        'FUN_00103956': 'MemoryCreateMemoryTracker',
        'FUN_00103978': 'MemorySetupMemoryDebugger',
        'FUN_00103990': 'MemoryInitializeMemoryCache',
        'FUN_00104012': 'MemoryCreateMemoryMonitor',
        'FUN_00104034': 'MemorySetupMemoryOptimizer',
        'FUN_00104056': 'MemoryProcessMemoryEvents',
        'FUN_00104078': 'MemoryUpdateMemorySystem',
        
        # 线程管理相关函数
        'FUN_00104090': 'ThreadInitializeThreadManager',
        'FUN_00104112': 'ThreadCreateThreadPool',
        'FUN_00104134': 'ThreadSetupTaskScheduler',
        'FUN_00104156': 'ThreadInitializeMutexSystem',
        'FUN_00104178': 'ThreadCreateThreadSynchronizer',
        'FUN_00104190': 'ThreadSetupSemaphoreSystem',
        'FUN_00104212': 'ThreadInitializeConditionVariables',
        'FUN_00104234': 'ThreadCreateThreadLocalStorage',
        'FUN_00104256': 'ThreadSetupThreadProfiler',
        'FUN_00104278': 'ThreadProcessThreadEvents',
        'FUN_00104290': 'ThreadUpdateThreadSystem',
        
        # 文件系统相关函数
        'FUN_00104312': 'FileSystemInitializeFileSystem',
        'FUN_00104334': 'FileSystemCreateFileHandle',
        'FUN_00104356': 'FileSystemSetupFileManager',
        'FUN_00104378': 'FileSystemInitializeVirtualFileSystem',
        'FUN_00104390': 'FileSystemCreateFileWatcher',
        'FUN_00104412': 'FileSystemSetupArchiveSystem',
        'FUN_00104434': 'FileSystemInitializeFileCache',
        'FUN_00104456': 'FileSystemCreateFileStream',
        'FUN_00104478': 'FileSystemSetupFileIndexer',
        'FUN_00104490': 'FileSystemProcessFileEvents',
        'FUN_00104512': 'FileSystemUpdateFileSystem',
        
        # 配置系统相关函数
        'FUN_00104534': 'ConfigInitializeConfigSystem',
        'FUN_00104556': 'ConfigLoadConfigFile',
        'FUN_00104578': 'ConfigSaveConfigFile',
        'FUN_00104590': 'ConfigSetupConfigValidator',
        'FUN_00104612': 'ConfigInitializeConfigWatcher',
        'FUN_00104634': 'ConfigCreateConfigManager',
        'FUN_00104656': 'ConfigSetupConfigSerializer',
        'FUN_00104678': 'ConfigInitializeConfigCache',
        'FUN_00104690': 'ConfigCreateConfigEditor',
        'FUN_00104712': 'ConfigSetupConfigMigration',
        'FUN_00104734': 'ConfigProcessConfigEvents',
        'FUN_00104756': 'ConfigUpdateConfigSystem',
        
        # 事件系统相关函数
        'FUN_00104778': 'EventInitializeEventSystem',
        'FUN_00104790': 'EventCreateEventQueue',
        'FUN_00104812': 'EventSetupEventDispatcher',
        'FUN_00104834': 'EventInitializeEventListeners',
        'FUN_00104856': 'EventCreateEventHandler',
        'FUN_00104878': 'EventSetupEventFilter',
        'FUN_00104890': 'EventInitializeEventLogger',
        'FUN_00104912': 'EventCreateEventProfiler',
        'FUN_00104934': 'EventSetupEventDebugger',
        'FUN_00104956': 'EventProcessEventEvents',
        'FUN_00104978': 'EventUpdateEventSystem',
        
        # 时间管理相关函数
        'FUN_00104990': 'TimeInitializeTimeSystem',
        'FUN_00105012': 'TimeCreateGameTimer',
        'FUN_00105034': 'TimeSetupTimeScale',
        'FUN_00105056': 'TimeInitializeFrameTimer',
        'FUN_00105078': 'TimeCreateAnimationTimer',
        'FUN_00105090': 'TimeSetupPhysicsTimer',
        'FUN_00105112': 'TimeInitializeRealTimeClock',
        'FUN_00105134': 'TimeCreateTimerManager',
        'FUN_00105156': 'TimeSetupTimeSynchronizer',
        'FUN_00105178': 'TimeProcessTimeEvents',
        'FUN_00105200': 'TimeUpdateTimeSystem'
    }

def create_variable_mapping():
    """创建变量映射字典"""
    return {
        # 全局变量
        'undefined4': 'EngineStatus',
        'undefined8': 'EngineHandle',
        'DAT_00101000': 'EngineInitializationFlag',
        'DAT_00101004': 'EngineRuntimeFlag',
        'DAT_00101008': 'EngineShutdownFlag',
        'DAT_0010100c': 'EnginePauseFlag',
        'DAT_00101010': 'EngineErrorFlag',
        
        # 系统状态变量
        'DAT_00101014': 'SystemMemoryStatus',
        'DAT_00101018': 'SystemCpuUsage',
        'DAT_0010101c': 'SystemGpuUsage',
        'DAT_00101020': 'SystemNetworkStatus',
        'DAT_00101024': 'SystemDiskStatus',
        'DAT_00101028': 'SystemThreadCount',
        'DAT_0010102c': 'SystemProcessCount',
        'DAT_00101030': 'SystemHandleCount',
        
        # 渲染相关变量
        'DAT_00101034': 'RenderFrameCount',
        'DAT_00101038': 'RenderFrameTime',
        'DAT_0010103c': 'RenderFps',
        'DAT_00101040': 'RenderDrawCalls',
        'DAT_00101044': 'RenderTriangles',
        'DAT_00101048': 'RenderVertices',
        'DAT_0010104c': 'RenderTextures',
        'DAT_00101050': 'RenderShaders',
        'DAT_00101054': 'RenderBuffers',
        
        # 物理相关变量
        'DAT_00101058': 'PhysicsFrameCount',
        'DAT_0010105c': 'PhysicsSimulationTime',
        'DAT_00101060': 'PhysicsRigidBodyCount',
        'DAT_00101064': 'PhysicsColliderCount',
        'DAT_00101068': 'PhysicsConstraintCount',
        'DAT_0010106c': 'PhysicsMaterialCount',
        'DAT_00101070': 'PhysicsTriggerCount',
        'DAT_00101074': 'PhysicsRaycastCount',
        'DAT_00101078': 'PhysicsCollisionCount',
        
        # 输入相关变量
        'DAT_0010107c': 'InputFrameCount',
        'DAT_00101080': 'InputKeyEventCount',
        'DAT_00101084': 'InputMouseEventCount',
        'DAT_00101088': 'InputGamepadEventCount',
        'DAT_0010108c': 'InputTouchEventCount',
        'DAT_00101090': 'InputGestureCount',
        'DAT_00101094': 'InputActionCount',
        'DAT_00101098': 'InputBindingCount',
        'DAT_0010109c': 'InputDeviceCount',
        
        # 音频相关变量
        'DAT_001010a0': 'AudioFrameCount',
        'DAT_001010a4': 'AudioPlayingCount',
        'DAT_001010a8': 'AudioPausedCount',
        'DAT_001010ac': 'AudioStoppedCount',
        'DAT_001010b0': 'AudioBufferCount',
        'DAT_001010b4': 'AudioSourceCount',
        'DAT_001010b8': 'AudioListenerCount',
        'DAT_001010bc': 'AudioEffectCount',
        'DAT_001010c0': 'AudioMixerCount',
        'DAT_001010c4': 'AudioSampleRate',
        
        # 网络相关变量
        'DAT_001010c8': 'NetworkFrameCount',
        'DAT_001010cc': 'NetworkConnectionCount',
        'DAT_001010d0': 'NetworkPacketCount',
        'DAT_001010d4': 'NetworkBytesSent',
        'DAT_001010d8': 'NetworkBytesReceived',
        'DAT_001010dc': 'NetworkLatency',
        'DAT_001010e0': 'NetworkPacketLoss',
        'DAT_001010e4': 'NetworkBandwidth',
        'DAT_001010e8': 'NetworkErrorCount',
        
        # 资源管理相关变量
        'DAT_001010ec': 'ResourceLoadedCount',
        'DAT_001010f0': 'ResourceLoadingCount',
        'DAT_001010f4': 'ResourceUnloadedCount',
        'DAT_001010f8': 'ResourceErrorCount',
        'DAT_001010fc': 'ResourceMemoryUsage',
        'DAT_00101100': 'ResourceCacheHitCount',
        'DAT_00101104': 'ResourceCacheMissCount',
        'DAT_00101108': 'ResourceAsyncCount',
        
        # 场景管理相关变量
        'DAT_0010110c': 'SceneActiveCount',
        'DAT_00101110': 'SceneLoadingCount',
        'DAT_00101114': 'SceneUnloadingCount',
        'DAT_00101118': 'SceneEntityCount',
        'DAT_0010111c': 'SceneComponentCount',
        'DAT_00101120': 'SceneSystemCount',
        'DAT_00101124': 'SceneTransformCount',
        
        # 游戏逻辑相关变量
        'DAT_00101128': 'GameFrameCount',
        'DAT_0010112c': 'GameDeltaTime',
        'DAT_00101130': 'GameTotalTime',
        'DAT_00101134': 'GameState',
        'DAT_00101138': 'GameEntityCount',
        'DAT_0010113c': 'GameObjectCount',
        'DAT_00101140': 'GameAIControllerCount',
        'DAT_00101144': 'GameAnimationCount',
        
        # UI相关变量
        'DAT_00101148': 'UIWindowCount',
        'DAT_0010114c': 'UIWidgetCount',
        'DAT_00101150': 'UILayoutCount',
        'DAT_00101154': 'UIEventCount',
        'DAT_00101158': 'UIInputEventCount',
        'DAT_0010115c': 'UIRenderCallCount',
        'DAT_00101160': 'UIDrawBatchCount',
        
        # 脚本相关变量
        'DAT_00101164': 'ScriptContextCount',
        'DAT_00101168': 'ScriptObjectCount',
        'DAT_0010116c': 'ScriptFunctionCount',
        'DAT_00101170': 'ScriptVariableCount',
        'DAT_00101174': 'ScriptClassCount',
        'DAT_00101178': 'ScriptMethodCount',
        'DAT_0010117c': 'ScriptPropertyCount',
        
        # 调试相关变量
        'DAT_00101180': 'DebugBreakpointCount',
        'DAT_00101184': 'DebugWatchCount',
        'DAT_00101188': 'DebugLogCount',
        'DAT_0010118c': 'DebugWarningCount',
        'DAT_00101190': 'DebugErrorCount',
        'DAT_00101194': 'DebugAssertCount',
        'DAT_00101198': 'DebugTraceCount',
        
        # 性能相关变量
        'DAT_0010119c': 'PerformanceFrameTime',
        'DAT_001011a0': 'PerformanceCpuTime',
        'DAT_001011a4': 'PerformanceGpuTime',
        'DAT_001011a8': 'PerformanceMemoryUsage',
        'DAT_001011ac': 'PerformanceDrawCalls',
        'DAT_001011b0': 'PerformanceTriangles',
        'DAT_001011b4': 'PerformanceVertices',
        'DAT_001011b8': 'PerformanceTextures',
        'DAT_001011bc': 'PerformanceShaders',
        
        # 内存管理相关变量
        'DAT_001011c0': 'MemoryTotalSize',
        'DAT_001011c4': 'MemoryUsedSize',
        'DAT_001011c8': 'MemoryFreeSize',
        'DAT_001011cc': 'MemoryAllocationCount',
        'DAT_001011d0': 'MemoryDeallocationCount',
        'DAT_001011d4': 'MemoryFragmentation',
        'DAT_001011d8': 'MemoryPoolCount',
        'DAT_001011dc': 'MemoryLeakCount',
        
        # 线程管理相关变量
        'DAT_001011e0': 'ThreadTotalCount',
        'DAT_001011e4': 'ThreadActiveCount',
        'DAT_001011e8': 'ThreadIdleCount',
        'DAT_001011ec': 'ThreadBlockedCount',
        'DAT_001011f0': 'ThreadTaskCount',
        'DAT_001011f4': 'ThreadMutexCount',
        'DAT_001011f8': 'ThreadSemaphoreCount',
        'DAT_001011fc': 'ThreadConditionCount',
        
        # 文件系统相关变量
        'DAT_00101200': 'FileOpenCount',
        'DAT_00101204': 'FileReadCount',
        'DAT_00101208': 'FileWriteCount',
        'DAT_0010120c': 'FileCloseCount',
        'DAT_00101210': 'FileSeekCount',
        'DAT_00101214': 'FileTellCount',
        'DAT_00101218': 'FileFlushCount',
        'DAT_0010121c': 'FileErrorCount',
        
        # 配置系统相关变量
        'DAT_00101220': 'ConfigSectionCount',
        'DAT_00101224': 'ConfigKeyCount',
        'DAT_00101228': 'ConfigValueCount',
        'DAT_0010122c': 'ConfigDefaultCount',
        'DAT_00101230': 'ConfigOverrideCount',
        'DAT_00101234': 'ConfigValidationCount',
        'DAT_00101238': 'ConfigMigrationCount',
        
        # 事件系统相关变量
        'DAT_0010123c': 'EventQueueSize',
        'DAT_00101240': 'EventDispatcherCount',
        'DAT_00101244': 'EventListenerCount',
        'DAT_00101248': 'EventHandlerCount',
        'DAT_0010124c': 'EventFilterCount',
        'DAT_00101250': 'EventLoggerCount',
        'DAT_00101254': 'EventProfilerCount',
        'DAT_00101258': 'EventDebuggerCount',
        
        # 时间管理相关变量
        'DAT_0010125c': 'TimeGameTime',
        'DAT_00101260': 'TimeRealTime',
        'DAT_00101264': 'TimeFrameTime',
        'DAT_00101268': 'TimeDeltaTime',
        'DAT_0010126c': 'TimeScale',
        'DAT_00101270': 'TimePaused',
        'DAT_00101274': 'TimeStep',
        'DAT_00101278': 'TimeMaxStep',
        'DAT_0010127c': 'TimeFixedStep',
        
        # 栈变量
        'local_10': 'LocalStackOffset10',
        'local_14': 'LocalStackOffset14',
        'local_18': 'LocalStackOffset18',
        'local_1c': 'LocalStackOffset1c',
        'local_20': 'LocalStackOffset20',
        'local_24': 'LocalStackOffset24',
        'local_28': 'LocalStackOffset28',
        'local_2c': 'LocalStackOffset2c',
        'local_30': 'LocalStackOffset30',
        'local_34': 'LocalStackOffset34',
        'local_38': 'LocalStackOffset38',
        'local_3c': 'LocalStackOffset3c',
        'local_40': 'LocalStackOffset40',
        'local_44': 'LocalStackOffset44',
        'local_48': 'LocalStackOffset48',
        'local_4c': 'LocalStackOffset4c',
        'local_50': 'LocalStackOffset50',
        'local_54': 'LocalStackOffset54',
        'local_58': 'LocalStackOffset58',
        'local_5c': 'LocalStackOffset5c',
        'local_60': 'LocalStackOffset60',
        'local_64': 'LocalStackOffset64',
        'local_68': 'LocalStackOffset68',
        'local_6c': 'LocalStackOffset6c',
        'local_70': 'LocalStackOffset70',
        'local_74': 'LocalStackOffset74',
        'local_78': 'LocalStackOffset78',
        'local_7c': 'LocalStackOffset7c',
        'local_80': 'LocalStackOffset80',
        'local_84': 'LocalStackOffset84',
        'local_88': 'LocalStackOffset88',
        'local_8c': 'LocalStackOffset8c',
        'local_90': 'LocalStackOffset90',
        'local_94': 'LocalStackOffset94',
        'local_98': 'LocalStackOffset98',
        'local_9c': 'LocalStackOffset9c',
        'local_a0': 'LocalStackOffsetA0',
        'local_a4': 'LocalStackOffsetA4',
        'local_a8': 'LocalStackOffsetA8',
        'local_ac': 'LocalStackOffsetAc',
        'local_b0': 'LocalStackOffsetB0',
        'local_b4': 'LocalStackOffsetB4',
        'local_b8': 'LocalStackOffsetB8',
        'local_bc': 'LocalStackOffsetBc',
        'local_c0': 'LocalStackOffsetC0',
        'local_c4': 'LocalStackOffsetC4',
        'local_c8': 'LocalStackOffsetC8',
        'local_cc': 'LocalStackOffsetCc',
        'local_d0': 'LocalStackOffsetD0',
        'local_d4': 'LocalStackOffsetD4',
        'local_d8': 'LocalStackOffsetD8',
        'local_dc': 'LocalStackOffsetDc',
        'local_e0': 'LocalStackOffsetE0',
        'local_e4': 'LocalStackOffsetE4',
        'local_e8': 'LocalStackOffsetE8',
        'local_ec': 'LocalStackOffsetEc',
        'local_f0': 'LocalStackOffsetF0',
        'local_f4': 'LocalStackOffsetF4',
        'local_f8': 'LocalStackOffsetF8',
        'local_fc': 'LocalStackOffsetFc',
        
        # 参数变量
        'param_1': 'Parameter1',
        'param_2': 'Parameter2',
        'param_3': 'Parameter3',
        'param_4': 'Parameter4',
        'param_5': 'Parameter5',
        'param_6': 'Parameter6',
        'param_7': 'Parameter7',
        'param_8': 'Parameter8',
        
        # 其他变量
        'puVar1': 'PointerUnknownVariable1',
        'puVar2': 'PointerUnknownVariable2',
        'puVar3': 'PointerUnknownVariable3',
        'puVar4': 'PointerUnknownVariable4',
        'puVar5': 'PointerUnknownVariable5',
        'puVar6': 'PointerUnknownVariable6',
        'puVar7': 'PointerUnknownVariable7',
        'puVar8': 'PointerUnknownVariable8',
        
        # 未定义变量
        'in_stack_00000000': 'StackParameter00000000',
        'in_stack_00000004': 'StackParameter00000004',
        'in_stack_00000008': 'StackParameter00000008',
        'in_stack_0000000c': 'StackParameter0000000c',
        'in_stack_00000010': 'StackParameter00000010',
        'in_stack_00000014': 'StackParameter00000014',
        'in_stack_00000018': 'StackParameter00000018',
        'in_stack_0000001c': 'StackParameter0000001c',
        'in_stack_00000020': 'StackParameter00000020',
        'in_stack_00000024': 'StackParameter00000024',
        'in_stack_00000028': 'StackParameter00000028',
        'in_stack_0000002c': 'StackParameter0000002c',
        'in_stack_00000030': 'StackParameter00000030',
        'in_stack_00000034': 'StackParameter00000034',
        'in_stack_00000038': 'StackParameter00000038',
        'in_stack_0000003c': 'StackParameter0000003c',
        'in_stack_00000040': 'StackParameter00000040',
        'in_stack_00000044': 'StackParameter00000044',
        'in_stack_00000048': 'StackParameter00000048',
        'in_stack_0000004c': 'StackParameter0000004c',
        'in_stack_00000050': 'StackParameter00000050',
        'in_stack_00000054': 'StackParameter00000054',
        'in_stack_00000058': 'StackParameter00000058',
        'in_stack_0000005c': 'StackParameter0000005c',
        'in_stack_00000060': 'StackParameter00000060',
        'in_stack_00000064': 'StackParameter00000064',
        'in_stack_00000068': 'StackParameter00000068',
        'in_stack_0000006c': 'StackParameter0000006c',
        'in_stack_00000070': 'StackParameter00000070',
        'in_stack_00000074': 'StackParameter00000074',
        'in_stack_00000078': 'StackParameter00000078',
        'in_stack_0000007c': 'StackParameter0000007c',
        'in_stack_00000080': 'StackParameter00000080',
        'in_stack_00000084': 'StackParameter00000084',
        'in_stack_00000088': 'StackParameter00000088',
        'in_stack_0000008c': 'StackParameter0000008c',
        'in_stack_00000090': 'StackParameter00000090',
        'in_stack_00000094': 'StackParameter00000094',
        'in_stack_00000098': 'StackParameter00000098',
        'in_stack_0000009c': 'StackParameter0000009c',
        'in_stack_000000a0': 'StackParameter000000a0',
        'in_stack_000000a4': 'StackParameter000000a4',
        'in_stack_000000a8': 'StackParameter000000a8',
        'in_stack_000000ac': 'StackParameter000000ac',
        'in_stack_000000b0': 'StackParameter000000b0',
        'in_stack_000000b4': 'StackParameter000000b4',
        'in_stack_000000b8': 'StackParameter000000b8',
        'in_stack_000000bc': 'StackParameter000000bc',
        'in_stack_000000c0': 'StackParameter000000c0',
        'in_stack_000000c4': 'StackParameter000000c4',
        'in_stack_000000c8': 'StackParameter000000c8',
        'in_stack_000000cc': 'StackParameter000000cc',
        'in_stack_000000d0': 'StackParameter000000d0',
        'in_stack_000000d4': 'StackParameter000000d4',
        'in_stack_000000d8': 'StackParameter000000d8',
        'in_stack_000000dc': 'StackParameter000000dc',
        'in_stack_000000e0': 'StackParameter000000e0',
        'in_stack_000000e4': 'StackParameter000000e4',
        'in_stack_000000e8': 'StackParameter000000e8',
        'in_stack_000000ec': 'StackParameter000000ec',
        'in_stack_000000f0': 'StackParameter000000f0',
        'in_stack_000000f4': 'StackParameter000000f4',
        'in_stack_000000f8': 'StackParameter000000f8',
        'in_stack_000000fc': 'StackParameter000000fc'
    }

def create_label_mapping():
    """创建标签映射字典"""
    return {
        # 基本标签
        'LAB_00101000': 'EngineInitializeStart',
        'LAB_00101004': 'EngineInitializeSuccess',
        'LAB_00101008': 'EngineInitializeFailure',
        'LAB_0010100c': 'EngineInitializeComplete',
        'LAB_00101010': 'EngineShutdownStart',
        'LAB_00101014': 'EngineShutdownSuccess',
        'LAB_00101018': 'EngineShutdownFailure',
        'LAB_0010101c': 'EngineShutdownComplete',
        
        # 系统初始化标签
        'LAB_00101020': 'SystemMemoryInit',
        'LAB_00101024': 'SystemCpuInit',
        'LAB_00101028': 'SystemGpuInit',
        'LAB_0010102c': 'SystemNetworkInit',
        'LAB_00101030': 'SystemDiskInit',
        'LAB_00101034': 'SystemThreadInit',
        'LAB_00101038': 'SystemProcessInit',
        'LAB_0010103c': 'SystemHandleInit',
        'LAB_00101040': 'SystemInitComplete',
        
        # 渲染系统标签
        'LAB_00101044': 'RenderInitStart',
        'LAB_00101048': 'RenderGraphicsInit',
        'LAB_0010104c': 'RenderSwapChainInit',
        'LAB_00101050': 'RenderTargetInit',
        'LAB_00101054': 'RenderShaderInit',
        'LAB_00101058': 'RenderBufferInit',
        'LAB_0010105c': 'RenderTextureInit',
        'LAB_00101060': 'RenderPipelineInit',
        'LAB_00101064': 'RenderCommandInit',
        'LAB_00101068': 'RenderInitComplete',
        
        # 物理系统标签
        'LAB_0010106c': 'PhysicsInitStart',
        'LAB_00101070': 'PhysicsWorldInit',
        'LAB_00101074': 'PhysicsRigidBodyInit',
        'LAB_00101078': 'PhysicsColliderInit',
        'LAB_0010107c': 'PhysicsConstraintInit',
        'LAB_00101080': 'PhysicsMaterialInit',
        'LAB_00101084': 'PhysicsTriggerInit',
        'LAB_00101088': 'PhysicsRaycastInit',
        'LAB_0010108c': 'PhysicsCollisionInit',
        'LAB_00101090': 'PhysicsInitComplete',
        
        # 输入系统标签
        'LAB_00101094': 'InputInitStart',
        'LAB_00101098': 'InputDeviceInit',
        'LAB_0010109c': 'InputKeyboardInit',
        'LAB_001010a0': 'InputMouseInit',
        'LAB_001010a4': 'InputGamepadInit',
        'LAB_001010a8': 'InputTouchInit',
        'LAB_001010ac': 'InputGestureInit',
        'LAB_001010b0': 'InputMappingInit',
        'LAB_001010b4': 'InputActionInit',
        'LAB_001010b8': 'InputBindingInit',
        'LAB_001010bc': 'InputInitComplete',
        
        # 音频系统标签
        'LAB_001010c0': 'AudioInitStart',
        'LAB_001010c4': 'AudioDeviceInit',
        'LAB_001010c8': 'AudioBufferInit',
        'LAB_001010cc': 'AudioSourceInit',
        'LAB_001010d0': 'AudioListenerInit',
        'LAB_001010d4': 'AudioEffectInit',
        'LAB_001010d8': 'AudioMixerInit',
        'LAB_001010dc': 'AudioSampleInit',
        'LAB_001010e0': 'AudioStreamInit',
        'LAB_001010e4': 'AudioInitComplete',
        
        # 网络系统标签
        'LAB_001010e8': 'NetworkInitStart',
        'LAB_001010ec': 'NetworkSocketInit',
        'LAB_001010f0': 'NetworkProtocolInit',
        'LAB_001010f4': 'NetworkConnectionInit',
        'LAB_001010f8': 'NetworkPacketInit',
        'LAB_001010fc': 'NetworkSecurityInit',
        'LAB_00101100': 'NetworkBufferInit',
        'LAB_00101104': 'NetworkEventInit',
        'LAB_00101108': 'NetworkSyncInit',
        'LAB_0010110c': 'NetworkInitComplete',
        
        # 资源管理标签
        'LAB_00101110': 'ResourceInitStart',
        'LAB_00101114': 'ResourceLoaderInit',
        'LAB_00101118': 'ResourceCacheInit',
        'LAB_0010111c': 'ResourcePoolInit',
        'LAB_00101120': 'ResourceHandleInit',
        'LAB_00101124': 'ResourceMemoryInit',
        'LAB_00101128': 'ResourceAsyncInit',
        'LAB_0010112c': 'ResourceTrackerInit',
        'LAB_00101130': 'ResourceInitComplete',
        
        # 场景管理标签
        'LAB_00101134': 'SceneInitStart',
        'LAB_00101138': 'SceneGraphInit',
        'LAB_0010113c': 'SceneEntityInit',
        'LAB_00101140': 'SceneComponentInit',
        'LAB_00101144': 'SceneTransformInit',
        'LAB_00101148': 'SceneSystemInit',
        'LAB_0010114c': 'SceneLoaderInit',
        'LAB_00101150': 'SceneSerializerInit',
        'LAB_00101154': 'SceneInitComplete',
        
        # 游戏逻辑标签
        'LAB_00101158': 'GameLogicInitStart',
        'LAB_0010115c': 'GameStateInit',
        'LAB_00101160': 'GameRuleInit',
        'LAB_00101164': 'GameEntityInit',
        'LAB_00101168': 'GameObjectInit',
        'LAB_0010116c': 'GameAIInit',
        'LAB_00101170': 'GameAnimationInit',
        'LAB_00101174': 'GamePhysicsInit',
        'LAB_00101178': 'GameScriptInit',
        'LAB_0010117c': 'GameLogicInitComplete',
        
        # UI系统标签
        'LAB_00101180': 'UIInitStart',
        'LAB_00101184': 'UIWindowInit',
        'LAB_00101188': 'UIWidgetInit',
        'LAB_0010118c': 'UILayoutInit',
        'LAB_00101190': 'UIRendererInit',
        'LAB_00101194': 'UIEventInit',
        'LAB_00101198': 'UIInputInit',
        'LAB_0010119c': 'UIStyleInit',
        'LAB_001011a0': 'UIThemeInit',
        'LAB_001011a4': 'UIInitComplete',
        
        # 脚本系统标签
        'LAB_001011a8': 'ScriptInitStart',
        'LAB_001011ac': 'ScriptEngineInit',
        'LAB_001011b0': 'ScriptContextInit',
        'LAB_001011b4': 'ScriptObjectInit',
        'LAB_001011b8': 'ScriptFunctionInit',
        'LAB_001011bc': 'ScriptVariableInit',
        'LAB_001011c0': 'ScriptClassInit',
        'LAB_001011c4': 'ScriptMethodInit',
        'LAB_001011c8': 'ScriptPropertyInit',
        'LAB_001011cc': 'ScriptInitComplete',
        
        # 调试系统标签
        'LAB_001011d0': 'DebugInitStart',
        'LAB_001011d4': 'DebugConsoleInit',
        'LAB_001011d8': 'DebugRendererInit',
        'LAB_001011dc': 'DebugProfilerInit',
        'LAB_001011e0': 'DebugOverlayInit',
        'LAB_001011e4': 'DebugToolInit',
        'LAB_001011e8': 'DebugLoggerInit',
        'LAB_001011ec': 'DebugBreakpointInit',
        'LAB_001011f0': 'DebugWatcherInit',
        'LAB_001011f4': 'DebugInitComplete',
        
        # 性能系统标签
        'LAB_001011f8': 'PerformanceInitStart',
        'LAB_001011fc': 'PerformanceProfilerInit',
        'LAB_00101200': 'PerformanceMonitorInit',
        'LAB_00101204': 'PerformanceMetricInit',
        'LAB_00101208': 'PerformanceBenchmarkInit',
        'LAB_0010120c': 'PerformanceCounterInit',
        'LAB_00101210': 'PerformanceFramerateInit',
        'LAB_00101214': 'PerformanceMemoryInit',
        'LAB_00101218': 'PerformanceAnalyzerInit',
        'LAB_0010121c': 'PerformanceInitComplete',
        
        # 内存管理标签
        'LAB_00101220': 'MemoryInitStart',
        'LAB_00101224': 'MemoryAllocatorInit',
        'LAB_00101228': 'MemoryPoolInit',
        'LAB_0010122c': 'MemoryCacheInit',
        'LAB_00101230': 'MemoryTrackerInit',
        'LAB_00101234': 'MemoryDebuggerInit',
        'LAB_00101238': 'MemoryProfilerInit',
        'LAB_0010123c': 'MemoryOptimizerInit',
        'LAB_00101240': 'MemoryLeakInit',
        'LAB_00101244': 'MemoryInitComplete',
        
        # 线程管理标签
        'LAB_00101248': 'ThreadInitStart',
        'LAB_0010124c': 'ThreadPoolInit',
        'LAB_00101250': 'ThreadTaskInit',
        'LAB_00101254': 'ThreadMutexInit',
        'LAB_00101258': 'ThreadSemaphoreInit',
        'LAB_0010125c': 'ThreadConditionInit',
        'LAB_00101260': 'ThreadLocalInit',
        'LAB_00101264': 'ThreadSyncInit',
        'LAB_00101268': 'ThreadProfilerInit',
        'LAB_0010126c': 'ThreadInitComplete',
        
        # 文件系统标签
        'LAB_00101270': 'FileSystemInitStart',
        'LAB_00101274': 'FileHandleInit',
        'LAB_00101278': 'FileManagerInit',
        'LAB_0010127c': 'FileVirtualInit',
        'LAB_00101280': 'FileWatcherInit',
        'LAB_00101284': 'FileArchiveInit',
        'LAB_00101288': 'FileCacheInit',
        'LAB_0010128c': 'FileStreamInit',
        'LAB_00101290': 'FileIndexerInit',
        'LAB_00101294': 'FileSystemInitComplete',
        
        # 配置系统标签
        'LAB_00101298': 'ConfigInitStart',
        'LAB_0010129c': 'ConfigLoaderInit',
        'LAB_001012a0': 'ConfigSaverInit',
        'LAB_001012a4': 'ConfigValidatorInit',
        'LAB_001012a8': 'ConfigWatcherInit',
        'LAB_001012ac': 'ConfigManagerInit',
        'LAB_001012b0': 'ConfigSerializerInit',
        'LAB_001012b4': 'ConfigCacheInit',
        'LAB_001012b8': 'ConfigEditorInit',
        'LAB_001012bc': 'ConfigMigrationInit',
        'LAB_001012c0': 'ConfigInitComplete',
        
        # 事件系统标签
        'LAB_001012c4': 'EventInitStart',
        'LAB_001012c8': 'EventQueueInit',
        'LAB_001012cc': 'EventDispatcherInit',
        'LAB_001012d0': 'EventListenerInit',
        'LAB_001012d4': 'EventHandlerInit',
        'LAB_001012d8': 'EventFilterInit',
        'LAB_001012dc': 'EventLoggerInit',
        'LAB_001012e0': 'EventProfilerInit',
        'LAB_001012e4': 'EventDebuggerInit',
        'LAB_001012e8': 'EventInitComplete',
        
        # 时间管理标签
        'LAB_001012ec': 'TimeInitStart',
        'LAB_001012f0': 'TimeGameInit',
        'LAB_001012f4': 'TimeRealInit',
        'LAB_001012f8': 'TimeFrameInit',
        'LAB_001012fc': 'TimeAnimationInit',
        'LAB_00101300': 'TimePhysicsInit',
        'LAB_00101304': 'TimeAudioInit',
        'LAB_00101308': 'TimeNetworkInit',
        'LAB_0010130c': 'TimeSystemInit',
        'LAB_00101310': 'TimeInitComplete',
        
        # 错误处理标签
        'LAB_00101314': 'ErrorHandlerStart',
        'LAB_00101318': 'ErrorMemoryHandler',
        'LAB_0010131c': 'ErrorSystemHandler',
        'LAB_00101320': 'ErrorHandlerComplete',
        'LAB_00101324': 'ErrorRecoveryStart',
        'LAB_00101328': 'ErrorMemoryRecovery',
        'LAB_0010132c': 'ErrorSystemRecovery',
        'LAB_00101330': 'ErrorRecoveryComplete',
        
        # 清理标签
        'LAB_00101334': 'CleanupStart',
        'LAB_00101338': 'CleanupMemory',
        'LAB_0010133c': 'CleanupSystem',
        'LAB_00101340': 'CleanupResource',
        'LAB_00101344': 'CleanupComplete',
        
        # 退出标签
        'LAB_00101348': 'ExitStart',
        'LAB_0010134c': 'ExitSuccess',
        'LAB_00101350': 'ExitFailure',
        'LAB_00101354': 'ExitComplete'
    }

def beautify_core_engine():
    """美化核心引擎文件"""
    file_path = 'TaleWorlds.Native/src/02_core_engine.c'
    
    print(f"正在读取文件: {file_path}")
    content = read_file(file_path)
    
    # 创建映射字典
    function_mapping = create_function_mapping()
    variable_mapping = create_variable_mapping()
    label_mapping = create_label_mapping()
    
    # 统计替换次数
    function_replacements = 0
    variable_replacements = 0
    label_replacements = 0
    
    # 替换函数名
    print("正在替换函数名...")
    for old_name, new_name in function_mapping.items():
        if old_name in content:
            content = content.replace(old_name, new_name)
            function_replacements += 1
    
    # 替换变量名
    print("正在替换变量名...")
    for old_name, new_name in variable_mapping.items():
        if old_name in content:
            content = content.replace(old_name, new_name)
            variable_replacements += 1
    
    # 替换标签名
    print("正在替换标签名...")
    for old_name, new_name in label_mapping.items():
        if old_name in content:
            content = content.replace(old_name, new_name)
            label_replacements += 1
    
    # 写入文件
    print("正在写入文件...")
    write_file(file_path, content)
    
    print(f"美化完成!")
    print(f"函数替换: {function_replacements} 个")
    print(f"变量替换: {variable_replacements} 个")
    print(f"标签替换: {label_replacements} 个")
    
    return {
        'function_replacements': function_replacements,
        'variable_replacements': variable_replacements,
        'label_replacements': label_replacements
    }

if __name__ == '__main__':
    beautify_core_engine()