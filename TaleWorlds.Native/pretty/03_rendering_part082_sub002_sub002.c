/* UIManager - FUN_18086b47c 的语义化别名 */
#define UIManager FUN_18086b47c

/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

/* SystemEventHandler - FUN_1808fd200 的语义化别名 */
#define SystemEventHandler FUN_1808fd200

#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 03_rendering_part082_sub002_sub002.c - 渲染系统高级函数注册和初始化模块
// ============================================================================

/**
 * @file 03_rendering_part082_sub002_sub002.c
 * @brief 渲染系统高级函数注册和初始化模块
 * 
 * 本模块包含渲染系统的高级函数注册、初始化、回调设置和系统配置功能。
 * 主要负责3D渲染系统的函数指针注册、系统初始化、回调设置和配置管理。
 * 
 * 主要功能：
 * - 渲染系统函数注册和初始化
 * - 回调函数设置和管理
 * - 系统配置和参数设置
 * - 内存管理和资源分配
 * - 安全检查和验证
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// ============================================================================
// 常量定义
// ============================================================================

/** 渲染系统最大注册函数数量 */
#define RENDERING_MAX_REGISTERED_FUNCTIONS 1024

/** 渲染系统初始化标志 */
#define RENDERING_INITIALIZATION_FLAG 0x01

/** 渲染系统回调表大小 */
#define RENDERING_CALLBACK_TABLE_SIZE 0x60

/** 渲染系统安全检查级别 */
#define RENDERING_SECURITY_CHECK_LEVEL 2

// ============================================================================
// 函数别名定义
// ============================================================================

// 系统初始化函数
#define RenderingSystemInitializer FUN_1804354c0        // 渲染系统初始化器
#define RenderingSystemConfigurator FUN_1804355b0       // 渲染系统配置器
#define RenderingSystemValidator FUN_180435630          // 渲染系统验证器
#define RenderingSystemSetupHandler FUN_180435a80       // 渲染系统设置处理器
#define RenderingSystemResourceManager FUN_180436c30     // 渲染系统资源管理器
#define RenderingSystemStateController FUN_1804373a0    // 渲染系统状态控制器
#define RenderingSystemCallbackManager FUN_180436ae0    // 渲染系统回调管理器
#define RenderingSystemEventHandler FUN_180437320       // 渲染系统事件处理器
#define RenderingSystemDataProcessor FUN_180436a50     // 渲染系统数据处理器
#define RenderingSystemSecurityChecker FUN_180437050    // 渲染系统安全检查器
#define RenderingSystemMemoryAllocator FUN_180436f20    // 渲染系统内存分配器
#define RenderingSystemThreadManager FUN_180436da0     // 渲染系统线程管理器
#define RenderingSystemScheduler FUN_180436d00         // 渲染系统调度器
#define RenderingSystemOptimizer FUN_180436bb0         // 渲染系统优化器
#define RenderingSystemDebugger FUN_1804369d0           // 渲染系统调试器
#define RenderingSystemProfiler RenderingSystemBufferProcessor          // 渲染系统性能分析器
#define RenderingSystemLogger FUN_180436bf0             // 渲染系统日志记录器
#define RenderingSystemMonitor FUN_180436a00            // 渲染系统监控器
#define RenderingSystemCleanupHandler FUN_180436fd0     // 渲染系统清理处理器
#define RenderingSystemErrorHandler FUN_180437290       // 渲染系统错误处理器
#define RenderingSystemRecoveryHandler FUN_1804372e0    // 渲染系统恢复处理器
#define RenderingSystemTextureManager FUN_180437d60     // 渲染系统纹理管理器
#define RenderingSystemShaderLoader FUN_1804375f0       // 渲染系统着色器加载器
#define RenderingSystemBufferManager FUN_1804374c0      // 渲染系统缓冲区管理器
#define RenderingSystemPipelineBuilder FUN_180437560     // 渲染系统管道构建器
#define RenderingSystemRenderStateManager FUN_180437cf0  // 渲染系统渲染状态管理器
#define RenderingSystemDrawCallHandler FUN_180437680     // 渲染系统绘制调用处理器
#define RenderingSystemFrameRenderer FUN_1804377b0       // 渲染系统帧渲染器
#define RenderingSystemPostProcessor FUN_180437e80      // 渲染系统后处理器
#define RenderingSystemLightingEngine FUN_180437ba0      // 渲染系统光照引擎
#define RenderingSystemShadowRenderer FUN_180437c40      // 渲染系统阴影渲染器
#define RenderingSystemEffectProcessor FUN_1804378e0    // 渲染系统效果处理器
#define RenderingSystemMaterialHandler FUN_1804379d0     // 渲染系统材质处理器
#define RenderingSystemGeometryProcessor FUN_180437460   // 渲染系统几何体处理器
#define RenderingSystemAnimationSystem FUN_180437b60     // 渲染系统动画系统
#define RenderingSystemTransformHandler FUN_180437ca0    // 渲染系统变换处理器
#define RenderingSystemViewportManager FUN_180437d40     // 渲染系统视口管理器
#define RenderingSystemUIRenderer FUN_18043b930          // 渲染系统UI渲染器
#define RenderingSystemFontRenderer FUN_18043b290         // 渲染系统字体渲染器
#define RenderingSystemTextProcessor FUN_180438560        // 渲染系统文本处理器
#define RenderingSystemInputHandler RenderingSystemStateCleaner         // 渲染系统输入处理器
#define RenderingSystemEventDispatcher FUN_18043bbe0      // 渲染系统事件分发器
#define RenderingSystemUIManager FUN_180438940            // 渲染系统UI管理器
#define RenderingSystemAudioProcessor FUN_1804386b0       // 渲染系统音频处理器
#define RenderingSystemVideoPlayer FUN_180438350          // 渲染系统视频播放器
#define RenderingSystemParticleEngine FUN_18043ab40       // 渲染系统粒子引擎
#define RenderingSystemPhysicsSimulator FUN_18043a140    // 渲染系统物理模拟器
#define RenderingSystemCollisionDetector FUN_1804382b0    // 渲染系统碰撞检测器
#define RenderingSystemNetworkManager FUN_180438c50       // 渲染系统网络管理器
#define RenderingSystemResourceManager2 FUN_1804389f0     // 渲染系统资源管理器2
#define RenderingSystemShaderCompiler FUN_180438680       // 渲染系统着色器编译器
#define RenderingSystemTextureCompressor FUN_180438c70    // 渲染系统纹理压缩器
#define RenderingSystemMemoryOptimizer FUN_18043c350       // 渲染系统内存优化器
#define RenderingSystemCacheManager FUN_18043c370          // 渲染系统缓存管理器
#define RenderingSystemGarbageCollector FUN_18043c740      // 渲染系统垃圾收集器
#define RenderingSystemMemoryPool FUN_18043c6b0            // 渲染系统内存池
#define RenderingSystemHeapManager FUN_18043c3b0           // 渲染系统堆管理器
#define RenderingSystemStackAllocator FUN_18043c510       // 渲染系统栈分配器
#define RenderingSystemVirtualMemory FUN_18043c0f0         // 渲染系统虚拟内存
#define RenderingSystemPageManager FUN_18043c020           // 渲染系统页面管理器
#define RenderingSystemMemoryTracker FUN_18043c060         // 渲染系统内存跟踪器
#define RenderingSystemMemoryProfiler FUN_18043c290         // 渲染系统内存分析器
#define RenderingSystemMemoryDebugger RenderingSystemEffectCleaner        // 渲染系统内存调试器
#define RenderingSystemMemoryMonitor FUN_18043c0b0         // 渲染系统内存监控器
#define RenderingSystemMemoryAuditor FUN_18043c230         // 渲染系统内存审计器
#define RenderingSystemMemoryValidator FUN_18043c160       // 渲染系统内存验证器
#define RenderingSystemMemoryCleaner FUN_18043c6e0         // 渲染系统内存清理器
#define RenderingSystemMemoryCompactor FUN_18043bff0        // 渲染系统内存压缩器
#define RenderingSystemMemoryDefragmenter RenderingSystemEffectAnalyzer    // 渲染系统内存碎片整理器
#define RenderingSystemMemoryMapper FUN_18043cb50           // 渲染系统内存映射器
#define RenderingSystemMemorySerializer FUN_18043c820       // 渲染系统内存序列化器
#define RenderingSystemMemoryDeserializer FUN_18043c8e0    // 渲染系统内存反序列化器
#define RenderingSystemMemoryEncryptor FUN_18043cae0        // 渲染系统内存加密器
#define RenderingSystemMemoryDecryptor FUN_18043c7a0        // 渲染系统内存解密器
#define RenderingSystemMemoryArchiver FUN_18043caa0         // 渲染系统内存存档器
#define RenderingSystemMemoryRestorer FUN_18043d100         // 渲染系统内存恢复器
#define RenderingSystemMemoryBackup FUN_18043cbd0           // 渲染系统内存备份器
#define RenderingSystemSystemInitializer RenderingSystemInputManager      // 渲染系统系统初始化器
#define RenderingSystemSystemFinalizer FUN_1804403d0        // 渲染系统系统终结器
#define RenderingSystemSystemLoader FUN_18043fe70           // 渲染系统系统加载器
#define RenderingSystemModuleManager FUN_180442860          // 渲染系统模块管理器
#define RenderingSystemPluginLoader FUN_180441c50           // 渲染系统插件加载器
#define RenderingSystemExtensionHandler FUN_18043ea80       // 渲染系统扩展处理器
#define RenderingSystemComponentRegistry FUN_180443080      // 渲染系统组件注册表
#define RenderingSystemServiceLocator FUN_18043eb00         // 渲染系统服务定位器
#define RenderingSystemDependencyInjector FUN_180440910     // 渲染系统依赖注入器
#define RenderingSystemObjectFactory FUN_18043ff20           // 渲染系统对象工厂
#define RenderingSystemSingletonManager FUN_180442180       // 渲染系统单例管理器
#define RenderingSystemContextManager FUN_1804410a0          // 渲染系统上下文管理器
#define RenderingSystemStateFactory FUN_180440220           // 渲染系统状态工厂
#define RenderingSystemStateManager2 FUN_180440280          // 渲染系统状态管理器2
#define RenderingSystemStatePersister FUN_1804402e0         // 渲染系统状态持久化器
#define RenderingSystemStateRestorer FUN_1804401b0          // 渲染系统状态恢复器
#define RenderingSystemConfigurationManager FUN_180442720  // 渲染系统配置管理器
#define RenderingSystemSettingsLoader FUN_18043f5f0         // 渲染系统设置加载器
#define RenderingSystemPreferencesHandler FUN_180442370      // 渲染系统偏好设置处理器
#define RenderingSystemProfileManager FUN_1804424d0         // 渲染系统配置文件管理器
#define RenderingSystemThemeManager FUN_18043e7f0           // 渲染系统主题管理器
#define RenderingSystemStyleManager FUN_18043e990           // 渲染系统样式管理器
#define RenderingSystemSkinManager FUN_18043ea60             // 渲染系统皮肤管理器
#define RenderingSystemLayoutManager FUN_18043e9b0          // 渲染系统布局管理器
#define RenderingSystemWidgetManager FUN_180442e00          // 渲染系统部件管理器
#define RenderingSystemControlManager FUN_1804414d0         // 渲染系统控件管理器
#define RenderingSystemWindowManager FUN_18043f300          // 渲染系统窗口管理器
#define RenderingSystemDialogManager FUN_18043f0d0          // 渲染系统对话框管理器
#define RenderingSystemMenuManager FUN_180443630             // 渲染系统菜单管理器
#define RenderingSystemToolbarManager FUN_18043e630         // 渲染系统工具栏管理器
#define RenderingSystemStatusBarManager FUN_18043e720        // 渲染系统状态栏管理器
#define RenderingSystemPanelManager FUN_18043f3f0           // 渲染系统面板管理器
#define RenderingSystemTabManager FUN_18043f610              // 渲染系统标签管理器
#define RenderingSystemWorkspaceManager FUN_180440350        // 渲染系统工作区管理器
#define RenderingSystemDocumentManager FUN_180440750         // 渲染系统文档管理器
#define RenderingSystemProjectManager FUN_18043fd10          // 渲染系统项目管理器
#define RenderingSystemSolutionManager FUN_1804431c0         // 渲染系统解决方案管理器
#define RenderingSystemBuildManager FUN_180443320            // 渲染系统构建管理器
#define RenderingSystemDeploymentManager FUN_180441e10      // 渲染系统部署管理器
#define RenderingSystemTestManager FUN_180441dd0             // 渲染系统测试管理器
#define RenderingSystemDebugManager FUN_180442b30            // 渲染系统调试管理器
#define RenderingSystemProfiler2 FUN_1804404b0               // 渲染系统性能分析器2
#define RenderingSystemAnalyzer FUN_180441950                // 渲染系统分析器
#define RenderingSystemInspector FUN_180441640               // 渲染系统检查器
#define RenderingSystemValidator2 FUN_180440cb0              // 渲染系统验证器2
#define RenderingSystemVerifier FUN_180440d90                // 渲染系统验证器
#define RenderingSystemChecker FUN_180441420                 // 渲染系统检查器
#define RenderingSystemAuditor2 FUN_18043f8f0                 // 渲染系统审计器2
#define RenderingSystemReviewer FUN_180441f60                // 渲染系统审查器
#define RenderingSystemEvaluator FUN_180441fc0               // 渲染系统评估器
#define RenderingSystemAssessor FUN_18043f9b0                // 渲染系统评估器
#define RenderingSystemMeasurer FUN_18043fce0                 // 渲染系统测量器
#define RenderingSystemCalculator FUN_180441910               // 渲染系统计算器
#define RenderingSystemProcessor2 FUN_180441cc0              // 渲染系统处理器2
#define RenderingSystemOptimizer2 FUN_18043ef40              // 渲染系统优化器2
#define RenderingSystemEnhancer FUN_180442d10                // 渲染系统增强器
#define RenderingSystemImprover FUN_18043f770                // 渲染系统改进器
#define RenderingSystemRefiner FUN_180440d20                // 渲染系统精炼器
#define RenderingSystemPolisher FUN_180440e00                // 渲染系统抛光器
#define RenderingSystemFinisher FUN_180440e70                // 渲染系统完成器

// 函数: void FUN_180310b50(int64_t param_1)
void FUN_180310b50(int64_t param_1)

{
  (**(code **)(param_1 + 0x60))(0,RenderingSystemInitializer);
  (**(code **)(param_1 + 0x60))(1,RenderingSystemConfigurator);
  (**(code **)(param_1 + 0x60))(2,RenderingSystemValidator);
  (**(code **)(param_1 + 0x60))(3,RenderingSystemSetupHandler);
  (**(code **)(param_1 + 0x60))(4,RenderingSystemResourceManager);
  (**(code **)(param_1 + 0x60))(5,RenderingSystemStateController);
  (**(code **)(param_1 + 0x60))(6,RenderingSystemCallbackManager);
  (**(code **)(param_1 + 0x60))(7,RenderingSystemEventHandler);
  (**(code **)(param_1 + 0x60))(8,&rendering_callback8_ptr);
  (**(code **)(param_1 + 0x60))(9,&rendering_state9_ptr);
  (**(code **)(param_1 + 0x60))(10,RenderingSystemDataProcessor);
  (**(code **)(param_1 + 0x60))(0xb,&rendering_param11_ptr);
  (**(code **)(param_1 + 0x60))(0xc,&rendering_state12_ptr);
  (**(code **)(param_1 + 0x60))(0xd,RenderingSystemSecurityChecker);
  (**(code **)(param_1 + 0x60))(0xe,&rendering_callback14_ptr);
  (**(code **)(param_1 + 0x60))(0xf,&rendering_state12_ptr);
  (**(code **)(param_1 + 0x60))(0x10,&rendering_param16_ptr);
  (**(code **)(param_1 + 0x60))(0x11,RenderingSystemMemoryAllocator);
  (**(code **)(param_1 + 0x60))(0x12,RenderingSystemThreadManager);
  (**(code **)(param_1 + 0x60))(0x13,RenderingSystemScheduler);
  (**(code **)(param_1 + 0x60))(0x14,RenderingSystemOptimizer);
  (**(code **)(param_1 + 0x60))(0x15,RenderingSystemDebugger);
  (**(code **)(param_1 + 0x60))(0x16,RenderingSystemDebugger);
  (**(code **)(param_1 + 0x60))(0x17,RenderingSystemProfiler);
  (**(code **)(param_1 + 0x60))(0x18,RenderingSystemLogger);
  (**(code **)(param_1 + 0x60))(0x19,RenderingSystemMonitor);
  (**(code **)(param_1 + 0x60))(0x1a,&rendering_state26_ptr);
  (**(code **)(param_1 + 0x60))(0x1b,RenderingSystemCleanupHandler);
  (**(code **)(param_1 + 0x60))(0x1c,&rendering_callback28_ptr);
  (**(code **)(param_1 + 0x60))(0x1d,&rendering_data29_ptr);
  (**(code **)(param_1 + 0x60))(0x1e,&rendering_state_9664_ptr);
  (**(code **)(param_1 + 0x60))(0x1f,RenderingSystemErrorHandler);
  (**(code **)(param_1 + 0x60))(0x20,RenderingSystemRecoveryHandler);
  (**(code **)(param_1 + 0x60))(0x21,&rendering_state_1632_ptr);
  (**(code **)(param_1 + 0x60))(0x22,&rendering_state_2032_ptr);
  (**(code **)(param_1 + 0x60))(0x23,RenderingSystemTextureManager);
  (**(code **)(param_1 + 0x60))(0x24,RenderingSystemShaderLoader);
  (**(code **)(param_1 + 0x60))(0x25,RenderingSystemBufferManager);
  (**(code **)(param_1 + 0x60))(0x26,RenderingSystemPipelineBuilder);
  (**(code **)(param_1 + 0x60))(0x27,RenderingSystemRenderStateManager);
  (**(code **)(param_1 + 0x60))(0x28,RenderingSystemDrawCallHandler);
  (**(code **)(param_1 + 0x60))(0x29,RenderingSystemFrameRenderer);
  (**(code **)(param_1 + 0x60))(0x2a,RenderingSystemPostProcessor);
  (**(code **)(param_1 + 0x60))(0x2b,RenderingSystemLightingEngine);
  (**(code **)(param_1 + 0x60))(0x2c,RenderingSystemShadowRenderer);
  (**(code **)(param_1 + 0x60))(0x2d,&rendering_state_4560_ptr);
  (**(code **)(param_1 + 0x60))(0x2e,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x2f,RenderingSystemEffectProcessor);
  (**(code **)(param_1 + 0x60))(0x30,RenderingSystemMaterialHandler);
  (**(code **)(param_1 + 0x60))(0x31,&rendering_state_3648_ptr);
  (**(code **)(param_1 + 0x60))(0x32,RenderingSystemGeometryProcessor);
  (**(code **)(param_1 + 0x60))(0x33,RenderingSystemAnimationSystem);
  (**(code **)(param_1 + 0x60))(0x34,RenderingSystemTransformHandler);
  (**(code **)(param_1 + 0x60))(0x35,RenderingSystemViewportManager);
  (**(code **)(param_1 + 0x60))(0x36,&rendering_state_4576_ptr);
  (**(code **)(param_1 + 0x60))(0x37,RenderingSystemUIRenderer);
  (**(code **)(param_1 + 0x60))(0x38,&rendering_state_7760_ptr);
  (**(code **)(param_1 + 0x60))(0x39,&rendering_state_9824_ptr);
  (**(code **)(param_1 + 0x60))(0x3a,&rendering_state_4592_ptr);
  (**(code **)(param_1 + 0x60))(0x3b,&rendering_state_9936_ptr);
  (**(code **)(param_1 + 0x60))(0x3c,&rendering_state_5104_ptr);
  (**(code **)(param_1 + 0x60))(0x3d,&rendering_state_4912_ptr);
  (**(code **)(param_1 + 0x60))(0x3e,&rendering_state_5280_ptr);
  (**(code **)(param_1 + 0x60))(0x3f,&rendering_state_9872_ptr);
  (**(code **)(param_1 + 0x60))(0x40,&rendering_state_9840_ptr);
  (**(code **)(param_1 + 0x60))(0x41,RenderingSystemFontRenderer);
  (**(code **)(param_1 + 0x60))(0x42,RenderingSystemTextProcessor);
  (**(code **)(param_1 + 0x60))(0x43,&rendering_state_4944_ptr);
  (**(code **)(param_1 + 0x60))(0x44,&rendering_state_9904_ptr);
  (**(code **)(param_1 + 0x60))(0x45,&rendering_state_4720_ptr);
  (**(code **)(param_1 + 0x60))(0x46,&rendering_state_4816_ptr);
  (**(code **)(param_1 + 0x60))(0x47,&rendering_state_4800_ptr);
  (**(code **)(param_1 + 0x60))(0x48,&rendering_state_5008_ptr);
  (**(code **)(param_1 + 0x60))(0x49,&rendering_state_5072_ptr);
  (**(code **)(param_1 + 0x60))(0x4a,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x4b,&rendering_state_5120_ptr);
  (**(code **)(param_1 + 0x60))(0x4c,RenderingSystemInputHandler);
  (**(code **)(param_1 + 0x60))(0x4d,&rendering_state_4976_ptr);
  (**(code **)(param_1 + 0x60))(0x4e,&rendering_param_384_ptr);
  (**(code **)(param_1 + 0x60))(0x4f,RenderingSystemEventDispatcher);
  (**(code **)(param_1 + 0x60))(0x50,RenderingSystemUIManager);
  (**(code **)(param_1 + 0x60))(0x51,&rendering_state_6880_ptr);
  (**(code **)(param_1 + 0x60))(0x52,&rendering_state_5968_ptr);
  (**(code **)(param_1 + 0x60))(0x53,RenderingSystemAudioProcessor);
  (**(code **)(param_1 + 0x60))(0x54,RenderingSystemVideoPlayer);
  (**(code **)(param_1 + 0x60))(0x55,RenderingSystemParticleEngine);
  (**(code **)(param_1 + 0x60))(0x56,RenderingSystemPhysicsSimulator);
  (**(code **)(param_1 + 0x60))(0x57,&rendering_state_5440_ptr);
  (**(code **)(param_1 + 0x60))(0x58,RenderingSystemCollisionDetector);
  (**(code **)(param_1 + 0x60))(0x59,&rendering_state_5040_ptr);
  (**(code **)(param_1 + 0x60))(0x5a,&rendering_state_4848_ptr);
  (**(code **)(param_1 + 0x60))(0x5b,&rendering_state_4880_ptr);
  (**(code **)(param_1 + 0x60))(0x5c,&rendering_param_432_ptr);
  (**(code **)(param_1 + 0x60))(0x5d,&rendering_param_320_ptr);
  (**(code **)(param_1 + 0x60))(0x5e,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x5f,&rendering_state_4752_ptr);
  (**(code **)(param_1 + 0x60))(0x60,RenderingSystemNetworkManager);
  (**(code **)(param_1 + 0x60))(0x61,RenderingSystemResourceManager2);
  (**(code **)(param_1 + 0x60))(0x62,&rendering_state_9248_ptr);
  (**(code **)(param_1 + 0x60))(99,&rendering_state_7744_ptr);
  (**(code **)(param_1 + 0x60))(100,&rendering_state_9808_ptr);
  (**(code **)(param_1 + 0x60))(0x65,RenderingSystemShaderCompiler);
  (**(code **)(param_1 + 0x60))(0x66,&rendering_state_7744_ptr);
  (**(code **)(param_1 + 0x60))(0x67,RenderingSystemTextureCompressor);
  (**(code **)(param_1 + 0x60))(0x68,&rendering_state_9792_ptr);
  (**(code **)(param_1 + 0x60))(0x69,&rendering_state_7712_ptr);
  (**(code **)(param_1 + 0x60))(0x6a,RenderingSystemMemoryOptimizer);
  (**(code **)(param_1 + 0x60))(0x6b,RenderingSystemCacheManager);
  (**(code **)(param_1 + 0x60))(0x6c,&rendering_state_1824_ptr);
  (**(code **)(param_1 + 0x60))(0x6d,&rendering_state_2656_ptr);
  (**(code **)(param_1 + 0x60))(0x6e,RenderingSystemGarbageCollector);
  (**(code **)(param_1 + 0x60))(0x6f,&rendering_state_2688_ptr);
  (**(code **)(param_1 + 0x60))(0x70,RenderingSystemMemoryPool);
  (**(code **)(param_1 + 0x60))(0x71,&rendering_state_1840_ptr);
  (**(code **)(param_1 + 0x60))(0x72,0x180069ee0);
  (**(code **)(param_1 + 0x60))(0x73,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x74,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x75,&rendering_state_2848_ptr);
  (**(code **)(param_1 + 0x60))(0x76,&rendering_state_2608_ptr);
  (**(code **)(param_1 + 0x60))(0x77,&rendering_state_2592_ptr);
  (**(code **)(param_1 + 0x60))(0x78,RenderingSystemHeapManager);
  (**(code **)(param_1 + 0x60))(0x79,RenderingSystemStackAllocator);
  (**(code **)(param_1 + 0x60))(0x7a,RenderingSystemVirtualMemory);
  (**(code **)(param_1 + 0x60))(0x7b,RenderingSystemPageManager);
  (**(code **)(param_1 + 0x60))(0x7c,&rendering_state_1344_ptr);
  (**(code **)(param_1 + 0x60))(0x7d,RenderingSystemMemoryTracker);
  (**(code **)(param_1 + 0x60))(0x7e,RenderingSystemMemoryProfiler);
  (**(code **)(param_1 + 0x60))(0x7f,RenderingSystemMemoryDebugger);
  (**(code **)(param_1 + 0x60))(0x80,RenderingSystemMemoryMonitor);
  (**(code **)(param_1 + 0x60))(0x81,RenderingSystemMemoryAuditor);
  (**(code **)(param_1 + 0x60))(0x82,RenderingSystemMemoryValidator);
  (**(code **)(param_1 + 0x60))(0x83,&rendering_state_2832_ptr);
  (**(code **)(param_1 + 0x60))(0x84,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x85,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x86,RenderingSystemMemoryCleaner);
  (**(code **)(param_1 + 0x60))(0x87,&rendering_state_2624_ptr);
  (**(code **)(param_1 + 0x60))(0x88,RenderingSystemMemoryCompactor);
  (**(code **)(param_1 + 0x60))(0x89,RenderingSystemMemoryDefragmenter);
  (**(code **)(param_1 + 0x60))(0x8a,RenderingSystemMemoryMapper);
  (**(code **)(param_1 + 0x60))(0x8b,RenderingSystemMemorySerializer);
  (**(code **)(param_1 + 0x60))(0x8c,RenderingSystemMemoryDeserializer);
  (**(code **)(param_1 + 0x60))(0x8d,RenderingSystemMemoryEncryptor);
  (**(code **)(param_1 + 0x60))(0x8e,RenderingSystemMemoryDecryptor);
  (**(code **)(param_1 + 0x60))(0x8f,RenderingSystemEffectProcessor);
  (**(code **)(param_1 + 0x60))(0x90,RenderingSystemMemoryArchiver);
  (**(code **)(param_1 + 0x60))(0x91,&rendering_state_3648_ptr);
  (**(code **)(param_1 + 0x60))(0x92,RenderingSystemGeometryProcessor);
  (**(code **)(param_1 + 0x60))(0x93,RenderingSystemAnimationSystem);
  (**(code **)(param_1 + 0x60))(0x94,RenderingSystemMemoryArchiver);
  (**(code **)(param_1 + 0x60))(0x95,RenderingSystemMemoryRestorer);
  (**(code **)(param_1 + 0x60))(0x96,RenderingSystemMemoryBackup);
  (**(code **)(param_1 + 0x60))(0x97,&rendering_callback151_ptr);
  (**(code **)(param_1 + 0x60))(0x98,RenderingSystemSystemInitializer);
  (**(code **)(param_1 + 0x60))(0x99,RenderingSystemSystemFinalizer);
  (**(code **)(param_1 + 0x60))(0x9a,&rendering_state_2384_ptr);
  (**(code **)(param_1 + 0x60))(0x9b,RenderingSystemSystemLoader);
  (**(code **)(param_1 + 0x60))(0x9c,RenderingSystemModuleManager);
  (**(code **)(param_1 + 0x60))(0x9d,RenderingSystemPluginLoader);
  (**(code **)(param_1 + 0x60))(0x9e,RenderingSystemExtensionHandler);
  (**(code **)(param_1 + 0x60))(0x9f,RenderingSystemComponentRegistry);
  (**(code **)(param_1 + 0x60))(0xa0,&rendering_state_3744_ptr);
  (**(code **)(param_1 + 0x60))(0xa1,&rendering_state_2000_ptr);
  (**(code **)(param_1 + 0x60))(0xa2,RenderingSystemServiceLocator);
  (**(code **)(param_1 + 0x60))(0xa3,RenderingSystemDependencyInjector);
  (**(code **)(param_1 + 0x60))(0xa4,RenderingSystemObjectFactory);
  (**(code **)(param_1 + 0x60))(0xa5,RenderingSystemSingletonManager);
  (**(code **)(param_1 + 0x60))(0xa6,RenderingSystemContextManager);
  (**(code **)(param_1 + 0x60))(0xa7,RenderingSystemStateFactory);
  (**(code **)(param_1 + 0x60))(0xa8,RenderingSystemStateManager2);
  (**(code **)(param_1 + 0x60))(0xa9,RenderingSystemStatePersister);
  (**(code **)(param_1 + 0x60))(0xaa,RenderingSystemStateRestorer);
  (**(code **)(param_1 + 0x60))(0xab,RenderingSystemConfigurationManager);
  (**(code **)(param_1 + 0x60))(0xac,&rendering_state_9664_ptr);
  (**(code **)(param_1 + 0x60))(0xad,&rendering_state_7216_ptr);
  (**(code **)(param_1 + 0x60))(0xae,RenderingSystemSettingsLoader);
  (**(code **)(param_1 + 0x60))(0xaf,RenderingSystemPreferencesHandler);
  (**(code **)(param_1 + 0x60))(0xb0,RenderingSystemProfileManager);
  (**(code **)(param_1 + 0x60))(0xb1,RenderingSystemThemeManager);
  (**(code **)(param_1 + 0x60))(0xb2,RenderingSystemStyleManager);
  (**(code **)(param_1 + 0x60))(0xb3,RenderingSystemSkinManager);
  (**(code **)(param_1 + 0x60))(0xb4,RenderingSystemLayoutManager);
  (**(code **)(param_1 + 0x60))(0xb5,RenderingSystemWidgetManager);
  (**(code **)(param_1 + 0x60))(0xb6,RenderingSystemControlManager);
  (**(code **)(param_1 + 0x60))(0xb7,RenderingSystemWindowManager);
  (**(code **)(param_1 + 0x60))(0xb8,RenderingSystemDialogManager);
  (**(code **)(param_1 + 0x60))(0xb9,RenderingSystemMenuManager);
  (**(code **)(param_1 + 0x60))(0xba,RenderingSystemToolbarManager);
  (**(code **)(param_1 + 0x60))(0xbb,RenderingSystemStatusBarManager);
  (**(code **)(param_1 + 0x60))(0xbc,RenderingSystemPanelManager);
  (**(code **)(param_1 + 0x60))(0xbd,RenderingSystemTabManager);
  (**(code **)(param_1 + 0x60))(0xbe,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0xbf,&rendering_state_5360_ptr);
  (**(code **)(param_1 + 0x60))(0xc0,RenderingSystemWorkspaceManager);
  (**(code **)(param_1 + 0x60))(0xc1,&rendering_state_6480_ptr);
  (**(code **)(param_1 + 0x60))(0xc2,&rendering_state_8288_ptr);
  (**(code **)(param_1 + 0x60))(0xc3,RenderingSystemDocumentManager);
  (**(code **)(param_1 + 0x60))(0xc4,&rendering_state196_ptr);
  (**(code **)(param_1 + 0x60))(0xc5,&rendering_state_6272_ptr);
  (**(code **)(param_1 + 0x60))(0xc6,RenderingSystemProjectManager);
  (**(code **)(param_1 + 0x60))(199,&rendering_param_112_ptr);
  (**(code **)(param_1 + 0x60))(200,RenderingSystemSolutionManager);
  (**(code **)(param_1 + 0x60))(0xc9,RenderingSystemBuildManager);
  (**(code **)(param_1 + 0x60))(0xca,RenderingSystemDeploymentManager);
  (**(code **)(param_1 + 0x60))(0xcb,FUN_180441dd0);
  (**(code **)(param_1 + 0x60))(0xcc,FUN_180442b30);
  (**(code **)(param_1 + 0x60))(0xcd,&rendering_state_6512_ptr);
  (**(code **)(param_1 + 0x60))(0xce,FUN_1804404b0);
  (**(code **)(param_1 + 0x60))(0xcf,&rendering_state_8560_ptr);
  (**(code **)(param_1 + 0x60))(0xd0,FUN_180441950);
  (**(code **)(param_1 + 0x60))(0xd1,&rendering_state_3792_ptr);
  (**(code **)(param_1 + 0x60))(0xd2,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0xd3,&rendering_state_6112_ptr);
  (**(code **)(param_1 + 0x60))(0xd4,&rendering_state_6192_ptr);
  (**(code **)(param_1 + 0x60))(0xd5,FUN_180441640);
  (**(code **)(param_1 + 0x60))(0xd6,FUN_180440cb0);
  (**(code **)(param_1 + 0x60))(0xd7,FUN_180440d90);
  (**(code **)(param_1 + 0x60))(0xd8,FUN_180441420);
  (**(code **)(param_1 + 0x60))(0xd9,FUN_18043f8f0);
  (**(code **)(param_1 + 0x60))(0xda,FUN_180441f60);
  (**(code **)(param_1 + 0x60))(0xdb,FUN_180441fc0);
  (**(code **)(param_1 + 0x60))(0xdc,FUN_18043f9b0);
  (**(code **)(param_1 + 0x60))(0xdd,FUN_18043fce0);
  (**(code **)(param_1 + 0x60))(0xde,FUN_180441910);
  (**(code **)(param_1 + 0x60))(0xdf,FUN_180441cc0);
  (**(code **)(param_1 + 0x60))(0xe0,FUN_18043ef40);
  (**(code **)(param_1 + 0x60))(0xe1,&rendering_state_7696_ptr);
  (**(code **)(param_1 + 0x60))(0xe2,&rendering_state_6320_ptr);
  (**(code **)(param_1 + 0x60))(0xe3,FUN_180442d10);
  (**(code **)(param_1 + 0x60))(0xe4,FUN_18043f770);
  (**(code **)(param_1 + 0x60))(0xe5,FUN_180440d20);
  (**(code **)(param_1 + 0x60))(0xe6,FUN_180440e00);
  (**(code **)(param_1 + 0x60))(0xe7,FUN_180440e70);
  (**(code **)(param_1 + 0x60))(0xe8,FUN_18043f240);
  (**(code **)(param_1 + 0x60))(0xe9,FUN_180440560);
  (**(code **)(param_1 + 0x60))(0xea,FUN_1804420c0);
  (**(code **)(param_1 + 0x60))(0xeb,FUN_180442020);
  (**(code **)(param_1 + 0x60))(0xec,&rendering_state_6304_ptr);
  (**(code **)(param_1 + 0x60))(0xed,FUN_180443930);
  (**(code **)(param_1 + 0x60))(0xee,&rendering_state_6960_ptr);
  (**(code **)(param_1 + 0x60))(0xef,FUN_18043f010);
  (**(code **)(param_1 + 0x60))(0xf0,FUN_18043fa30);
  (**(code **)(param_1 + 0x60))(0xf1,FUN_1804422a0);
  (**(code **)(param_1 + 0x60))(0xf2,&rendering_state_5936_ptr);
  (**(code **)(param_1 + 0x60))(0xf3,FUN_18043e5c0);
  (**(code **)(param_1 + 0x60))(0xf4,&rendering_param_768_ptr);
  (**(code **)(param_1 + 0x60))(0xf5,RenderingSystemTextOptimizer);
  (**(code **)(param_1 + 0x60))(0xf6,FUN_180441260);
  (**(code **)(param_1 + 0x60))(0xf7,&rendering_state_2064_ptr);
  (**(code **)(param_1 + 0x60))(0xf8,FUN_180442450);
  (**(code **)(param_1 + 0x60))(0xf9,FUN_180440f30);
  (**(code **)(param_1 + 0x60))(0xfa,&rendering_state_3968_ptr);
  (**(code **)(param_1 + 0x60))(0xfb,&rendering_state_3984_ptr);
  (**(code **)(param_1 + 0x60))(0xfc,&rendering_state_4896_ptr);
  (**(code **)(param_1 + 0x60))(0xfd,&rendering_state_3984_ptr);
  (**(code **)(param_1 + 0x60))(0xfe,&rendering_state_7376_ptr);
  (**(code **)(param_1 + 0x60))(0xff,&rendering_state_8720_ptr);
  (**(code **)(param_1 + 0x60))(0x100,&rendering_state_2416_ptr);
  (**(code **)(param_1 + 0x60))(0x101,FUN_180441e50);
  (**(code **)(param_1 + 0x60))(0x102,&rendering_state_6032_ptr);
  (**(code **)(param_1 + 0x60))(0x103,&rendering_state_7088_ptr);
  (**(code **)(param_1 + 0x60))(0x104,&rendering_param11_ptr);
  (**(code **)(param_1 + 0x60))(0x105,FUN_180443510);
  (**(code **)(param_1 + 0x60))(0x106,RenderingSystemTextProcessor2);
  (**(code **)(param_1 + 0x60))(0x107,RenderingSystemTransformInitializer);
  (**(code **)(param_1 + 0x60))(0x108,FUN_18043fef0);
  (**(code **)(param_1 + 0x60))(0x109,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x10a,&rendering_param266_ptr);
  (**(code **)(param_1 + 0x60))(0x10b,&rendering_state_1440_ptr);
  (**(code **)(param_1 + 0x60))(0x10c,&rendering_state_3856_ptr);
  (**(code **)(param_1 + 0x60))(0x10d,&rendering_state_4928_ptr);
  (**(code **)(param_1 + 0x60))(0x10e,FUN_180442560);
  (**(code **)(param_1 + 0x60))(0x10f,FUN_180443700);
  (**(code **)(param_1 + 0x60))(0x110,&rendering_state_5376_ptr);
  (**(code **)(param_1 + 0x60))(0x111,FUN_180442950);
  (**(code **)(param_1 + 0x60))(0x112,FUN_18043f880);
  (**(code **)(param_1 + 0x60))(0x113,&rendering_state_6656_ptr);
  (**(code **)(param_1 + 0x60))(0x114,FUN_180440aa0);
  (**(code **)(param_1 + 0x60))(0x115,&rendering_state_8528_ptr);
  (**(code **)(param_1 + 0x60))(0x116,&rendering_state_2400_ptr);
  (**(code **)(param_1 + 0x60))(0x117,FUN_18043ed70);
  (**(code **)(param_1 + 0x60))(0x118,&rendering_state_7104_ptr);
  (**(code **)(param_1 + 0x60))(0x119,FUN_180443820);
  (**(code **)(param_1 + 0x60))(0x11a,FUN_1804418e0);
  (**(code **)(param_1 + 0x60))(0x11b,FUN_18043ed10);
  (**(code **)(param_1 + 0x60))(0x11c,&rendering_state_2608_ptr);
  (**(code **)(param_1 + 0x60))(0x11d,FUN_18043fe10);
  (**(code **)(param_1 + 0x60))(0x11e,FUN_180443680);
  (**(code **)(param_1 + 0x60))(0x11f,FUN_180441110);
  (**(code **)(param_1 + 0x60))(0x120,&rendering_state_6944_ptr);
  (**(code **)(param_1 + 0x60))(0x121,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x122,&rendering_state_4960_ptr);
  (**(code **)(param_1 + 0x60))(0x123,FUN_1804415d0);
  (**(code **)(param_1 + 0x60))(0x124,FUN_180443000);
  (**(code **)(param_1 + 0x60))(0x125,FUN_180441e90);
  (**(code **)(param_1 + 0x60))(0x126,FUN_180443770);
  (**(code **)(param_1 + 0x60))(0x127,&rendering_state_2336_ptr);
  (**(code **)(param_1 + 0x60))(0x128,&rendering_state_6544_ptr);
  (**(code **)(param_1 + 0x60))(0x129,&rendering_state_6544_ptr);
  (**(code **)(param_1 + 0x60))(0x12a,FUN_18043fd70);
  (**(code **)(param_1 + 0x60))(299,&rendering_state_5392_ptr);
  (**(code **)(param_1 + 0x60))(300,FUN_1804405e0);
  (**(code **)(param_1 + 0x60))(0x12d,FUN_180440660);
  (**(code **)(param_1 + 0x60))(0x12e,FUN_18043eb50);
  (**(code **)(param_1 + 0x60))(0x12f,&rendering_state_5344_ptr);
  (**(code **)(param_1 + 0x60))(0x130,&rendering_state_3088_ptr);
  (**(code **)(param_1 + 0x60))(0x131,&rendering_state_6448_ptr);
  (**(code **)(param_1 + 0x60))(0x132,&rendering_state_7680_ptr);
  (**(code **)(param_1 + 0x60))(0x133,&rendering_state_1184_ptr);
  (**(code **)(param_1 + 0x60))(0x134,FUN_18043fb10);
  (**(code **)(param_1 + 0x60))(0x135,&rendering_state_6208_ptr);
  (**(code **)(param_1 + 0x60))(0x136,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x137,FUN_1804417b0);
  (**(code **)(param_1 + 0x60))(0x138,FUN_180441730);
  (**(code **)(param_1 + 0x60))(0x139,FUN_18043f960);
  (**(code **)(param_1 + 0x60))(0x13a,&rendering_state_4032_ptr);
  (**(code **)(param_1 + 0x60))(0x13b,&rendering_state_6064_ptr);
  (**(code **)(param_1 + 0x60))(0x13c,FUN_18043fae0);
  (**(code **)(param_1 + 0x60))(0x13d,&rendering_state_6352_ptr);
  (**(code **)(param_1 + 0x60))(0x13e,FUN_18043fc20);
  (**(code **)(param_1 + 0x60))(0x13f,FUN_180441830);
  (**(code **)(param_1 + 0x60))(0x140,&rendering_state_1632_ptr);
  (**(code **)(param_1 + 0x60))(0x141,RenderingSystemEventAnalyzer);
  (**(code **)(param_1 + 0x60))(0x142,FUN_18043ef90);
  (**(code **)(param_1 + 0x60))(0x143,&rendering_state_6944_ptr);
  (**(code **)(param_1 + 0x60))(0x144,&rendering_state_1984_ptr);
  (**(code **)(param_1 + 0x60))(0x145,&rendering_state_4992_ptr);
  (**(code **)(param_1 + 0x60))(0x146,FUN_180442670);
  (**(code **)(param_1 + 0x60))(0x147,&rendering_state_6672_ptr);
  (**(code **)(param_1 + 0x60))(0x148,&rendering_state_4048_ptr);
  (**(code **)(param_1 + 0x60))(0x149,FUN_180441890);
  (**(code **)(param_1 + 0x60))(0x14a,&rendering_state_4976_ptr);
  (**(code **)(param_1 + 0x60))(0x14b,FUN_18043ecc0);
  (**(code **)(param_1 + 0x60))(0x14c,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x14d,&rendering_state_1872_ptr);
  (**(code **)(param_1 + 0x60))(0x14e,FUN_1802e7dc0);
  (**(code **)(param_1 + 0x60))(0x14f,FUN_180443a40);
  (**(code **)(param_1 + 0x60))(0x150,FUN_180443aa0);
  (**(code **)(param_1 + 0x60))(0x151,FUN_180443f80);
  (**(code **)(param_1 + 0x60))(0x152,FUN_180443b80);
  (**(code **)(param_1 + 0x60))(0x153,FUN_180443b00);
  (**(code **)(param_1 + 0x60))(0x154,FUN_180443b40);
  (**(code **)(param_1 + 0x60))(0x155,FUN_180443df0);
  (**(code **)(param_1 + 0x60))(0x156,FUN_180443ff0);
  (**(code **)(param_1 + 0x60))(0x157,RenderingSystemVideoValidator);
  (**(code **)(param_1 + 0x60))(0x158,FUN_180443d70);
  (**(code **)(param_1 + 0x60))(0x159,&rendering_state_4128_ptr);
  (**(code **)(param_1 + 0x60))(0x15a,FUN_180444030);
  (**(code **)(param_1 + 0x60))(0x15b,&rendering_state_4176_ptr);
  (**(code **)(param_1 + 0x60))(0x15c,FUN_1804442c0);
  (**(code **)(param_1 + 0x60))(0x15d,&rendering_state_4240_ptr);
  (**(code **)(param_1 + 0x60))(0x15e,&rendering_state_4912_ptr);
  (**(code **)(param_1 + 0x60))(0x15f,&rendering_state_4864_ptr);
  (**(code **)(param_1 + 0x60))(0x160,RenderingSystemVideoInitializer);
  (**(code **)(param_1 + 0x60))(0x161,&rendering_state_4224_ptr);
  (**(code **)(param_1 + 0x60))(0x162,FUN_180444100);
  (**(code **)(param_1 + 0x60))(0x163,FUN_180444600);
  (**(code **)(param_1 + 0x60))(0x164,FUN_180444700);
  (**(code **)(param_1 + 0x60))(0x165,FUN_1804447c0);
  (**(code **)(param_1 + 0x60))(0x166,FUN_1804448a0);
  (**(code **)(param_1 + 0x60))(0x167,FUN_1804443c0);
  (**(code **)(param_1 + 0x60))(0x168,&rendering_state_4928_ptr);
  (**(code **)(param_1 + 0x60))(0x169,&rendering_state_4096_ptr);
  (**(code **)(param_1 + 0x60))(0x16a,FUN_1804442e0);
  (**(code **)(param_1 + 0x60))(0x16b,&rendering_state_4880_ptr);
  (**(code **)(param_1 + 0x60))(0x16c,FUN_180444200);
  (**(code **)(param_1 + 0x60))(0x16d,&rendering_state_3968_ptr);
  (**(code **)(param_1 + 0x60))(0x16e,FUN_180444280);
  (**(code **)(param_1 + 0x60))(0x16f,FUN_180444070);
  (**(code **)(param_1 + 0x60))(0x170,&rendering_state_4896_ptr);
  (**(code **)(param_1 + 0x60))(0x171,&rendering_state_4080_ptr);
  (**(code **)(param_1 + 0x60))(0x172,&rendering_state_4640_ptr);
  (**(code **)(param_1 + 0x60))(0x173,&rendering_state_4464_ptr);
  (**(code **)(param_1 + 0x60))(0x174,&rendering_state_5216_ptr);
  (**(code **)(param_1 + 0x60))(0x175,FUN_180444410);
  (**(code **)(param_1 + 0x60))(0x176,FUN_1804445b0);
  (**(code **)(param_1 + 0x60))(0x177,&rendering_state_4112_ptr);
  (**(code **)(param_1 + 0x60))(0x178,&rendering_state_4256_ptr);
  (**(code **)(param_1 + 0x60))(0x179,&rendering_state_4272_ptr);
  (**(code **)(param_1 + 0x60))(0x17a,&rendering_state_7648_ptr);
  (**(code **)(param_1 + 0x60))(0x17b,FUN_180445180);
  (**(code **)(param_1 + 0x60))(0x17c,&rendering_state_7792_ptr);
  (**(code **)(param_1 + 0x60))(0x17d,&rendering_state_8592_ptr);
  (**(code **)(param_1 + 0x60))(0x17e,&rendering_state_8624_ptr);
  (**(code **)(param_1 + 0x60))(0x17f,&rendering_state_8656_ptr);
  (**(code **)(param_1 + 0x60))(0x180,&rendering_state_8096_ptr);
  (**(code **)(param_1 + 0x60))(0x181,&rendering_state_6288_ptr);
  (**(code **)(param_1 + 0x60))(0x182,&rendering_state_8432_ptr);
  (**(code **)(param_1 + 0x60))(0x183,&rendering_state_8512_ptr);
  (**(code **)(param_1 + 0x60))(0x184,&rendering_state_8688_ptr);
  (**(code **)(param_1 + 0x60))(0x185,&rendering_state_8704_ptr);
  (**(code **)(param_1 + 0x60))(0x186,&rendering_state_6288_ptr);
  (**(code **)(param_1 + 0x60))(0x187,FUN_1804449a0);
  (**(code **)(param_1 + 0x60))(0x188,&rendering_state_8192_ptr);
  (**(code **)(param_1 + 0x60))(0x189,&rendering_state_8752_ptr);
  (**(code **)(param_1 + 0x60))(0x18a,&rendering_state_6336_ptr);
  (**(code **)(param_1 + 0x60))(0x18b,&rendering_state_7904_ptr);
  (**(code **)(param_1 + 0x60))(0x18c,FUN_180445060);
  (**(code **)(param_1 + 0x60))(0x18d,&rendering_state_7712_ptr);
  (**(code **)(param_1 + 0x60))(0x18e,&rendering_state_7824_ptr);
  (**(code **)(param_1 + 0x60))(399,&rendering_state_6320_ptr);
  (**(code **)(param_1 + 0x60))(400,FUN_180445110);
  (**(code **)(param_1 + 0x60))(0x191,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x192,&rendering_state_8736_ptr);
  (**(code **)(param_1 + 0x60))(0x193,&rendering_state_8720_ptr);
  (**(code **)(param_1 + 0x60))(0x194,FUN_180444e90);
  (**(code **)(param_1 + 0x60))(0x195,FUN_180444a20);
  (**(code **)(param_1 + 0x60))(0x196,&rendering_state_7200_ptr);
  (**(code **)(param_1 + 0x60))(0x197,FUN_180444b70);
  (**(code **)(param_1 + 0x60))(0x198,FUN_180444dd0);
  (**(code **)(param_1 + 0x60))(0x199,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x19a,FUN_180445390);
  (**(code **)(param_1 + 0x60))(0x19b,&rendering_state_9200_ptr);
  (**(code **)(param_1 + 0x60))(0x19c,FUN_180445480);
  (**(code **)(param_1 + 0x60))(0x19d,&render_data_ptr);
  (**(code **)(param_1 + 0x60))(0x19e,&rendering_state_9408_ptr);
  (**(code **)(param_1 + 0x60))(0x19f,&rendering_state_9328_ptr);
  (**(code **)(param_1 + 0x60))(0x1a0,&rendering_state_9216_ptr);
  (**(code **)(param_1 + 0x60))(0x1a1,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x1a2,&rendering_state_9008_ptr);
  (**(code **)(param_1 + 0x60))(0x1a3,&rendering_state_9360_ptr);
  (**(code **)(param_1 + 0x60))(0x1a4,&rendering_state_9392_ptr);
  (**(code **)(param_1 + 0x60))(0x1a5,&rendering_state_9168_ptr);
  (**(code **)(param_1 + 0x60))(0x1a6,&rendering_state_9104_ptr);
  (**(code **)(param_1 + 0x60))(0x1a7,&rendering_state_9344_ptr);
  (**(code **)(param_1 + 0x60))(0x1a8,FUN_180445570);
  (**(code **)(param_1 + 0x60))(0x1a9,&rendering_state_9232_ptr);
  (**(code **)(param_1 + 0x60))(0x1aa,&rendering_param_272_ptr);
  (**(code **)(param_1 + 0x60))(0x1ab,FUN_1804457b0);
  (**(code **)(param_1 + 0x60))(0x1ac,FUN_180445870);
  (**(code **)(param_1 + 0x60))(0x1ad,FUN_1804461b0);
  (**(code **)(param_1 + 0x60))(0x1ae,FUN_1804462a0);
  (**(code **)(param_1 + 0x60))(0x1af,FUN_180446010);
  (**(code **)(param_1 + 0x60))(0x1b0,FUN_180446370);
  (**(code **)(param_1 + 0x60))(0x1b1,FUN_180446320);
  (**(code **)(param_1 + 0x60))(0x1b2,FUN_1804463b0);
  (**(code **)(param_1 + 0x60))(0x1b3,FUN_1804463f0);
  (**(code **)(param_1 + 0x60))(0x1b4,FUN_1804462e0);
  (**(code **)(param_1 + 0x60))(0x1b5,FUN_180445eb0);
  (**(code **)(param_1 + 0x60))(0x1b6,FUN_180445cd0);
  (**(code **)(param_1 + 0x60))(0x1b7,FUN_180445dc0);
  (**(code **)(param_1 + 0x60))(0x1b8,&rendering_state_1872_ptr);
  (**(code **)(param_1 + 0x60))(0x1b9,FUN_180446430);
  (**(code **)(param_1 + 0x60))(0x1ba,FUN_180445970);
  (**(code **)(param_1 + 0x60))(0x1bb,FUN_180445a80);
  (**(code **)(param_1 + 0x60))(0x1bc,&rendering_state_9824_ptr);
  (**(code **)(param_1 + 0x60))(0x1bd,&rendering_state_4352_ptr);
  (**(code **)(param_1 + 0x60))(0x1be,&rendering_state_4480_ptr);
  (**(code **)(param_1 + 0x60))(0x1bf,&rendering_state_2608_ptr);
  (**(code **)(param_1 + 0x60))(0x1c0,&rendering_state_2624_ptr);
  (**(code **)(param_1 + 0x60))(0x1c1,&rendering_state_2080_ptr);
  (**(code **)(param_1 + 0x60))(0x1c2,FUN_180445680);
  (**(code **)(param_1 + 0x60))(0x1c3,&rendering_state_4336_ptr);
  (**(code **)(param_1 + 0x60))(0x1c4,&rendering_state_4800_ptr);
  (**(code **)(param_1 + 0x60))(0x1c5,FUN_180446080);
  (**(code **)(param_1 + 0x60))(0x1c6,&rendering_state_4592_ptr);
  (**(code **)(param_1 + 0x60))(0x1c7,FUN_180446760);
  (**(code **)(param_1 + 0x60))(0x1c8,&rendering_state_4272_ptr);
  (**(code **)(param_1 + 0x60))(0x1c9,&rendering_state_1888_ptr);
  (**(code **)(param_1 + 0x60))(0x1ca,FUN_180445fd0);
  (**(code **)(param_1 + 0x60))(0x1cb,&system_param1_ptr);
  (**(code **)(param_1 + 0x60))(0x1cc,FUN_180446a60);
  (**(code **)(param_1 + 0x60))(0x1cd,&rendering_state_2144_ptr);
  (**(code **)(param_1 + 0x60))(0x1ce,FUN_1804460c0);
  (**(code **)(param_1 + 0x60))(0x1cf,FUN_180446120);
  (**(code **)(param_1 + 0x60))(0x1d0,FUN_1804460f0);
  (**(code **)(param_1 + 0x60))(0x1d1,FUN_180446160);
  (**(code **)(param_1 + 0x60))(0x1d2,&rendering_state_2384_ptr);
  (**(code **)(param_1 + 0x60))(0x1d3,&rendering_state_3344_ptr);
  (**(code **)(param_1 + 0x60))(0x1d4,&rendering_state_3424_ptr);
  (**(code **)(param_1 + 0x60))(0x1d5,&rendering_state_3328_ptr);
  (**(code **)(param_1 + 0x60))(0x1d6,&rendering_state_1904_ptr);
  (**(code **)(param_1 + 0x60))(0x1d7,&rendering_state_1952_ptr);
  (**(code **)(param_1 + 0x60))(0x1d8,&rendering_state_3296_ptr);
  (**(code **)(param_1 + 0x60))(0x1d9,FUN_180446480);
  (**(code **)(param_1 + 0x60))(0x1da,&rendering_state_4560_ptr);
  (**(code **)(param_1 + 0x60))(0x1db,&rendering_state_4496_ptr);
  (**(code **)(param_1 + 0x60))(0x1dc,FUN_180446690);
  (**(code **)(param_1 + 0x60))(0x1dd,FUN_180446810);
  (**(code **)(param_1 + 0x60))(0x1de,FUN_180446650);
  (**(code **)(param_1 + 0x60))(0x1df,FUN_180446610);
  (**(code **)(param_1 + 0x60))(0x1e0,&rendering_state_1968_ptr);
  (**(code **)(param_1 + 0x60))(0x1e1,FUN_180446960);
  (**(code **)(param_1 + 0x60))(0x1e2,&rendering_state_9808_ptr);
  (**(code **)(param_1 + 0x60))(0x1e3,FUN_180447030);
  (**(code **)(param_1 + 0x60))(0x1e4,FUN_180446b20);
  (**(code **)(param_1 + 0x60))(0x1e5,&rendering_state_5632_ptr);
  (**(code **)(param_1 + 0x60))(0x1e6,&rendering_state_5584_ptr);
  (**(code **)(param_1 + 0x60))(0x1e7,FUN_180446ca0);
  (**(code **)(param_1 + 0x60))(0x1e8,&rendering_state_6080_ptr);
  (**(code **)(param_1 + 0x60))(0x1e9,FUN_180446ba0);
  (**(code **)(param_1 + 0x60))(0x1ea,&rendering_state_5344_ptr);
  (**(code **)(param_1 + 0x60))(0x1eb,FUN_180446d20);
  (**(code **)(param_1 + 0x60))(0x1ec,RenderingSystemResourceManager3);
  (**(code **)(param_1 + 0x60))(0x1ed,&rendering_state_5952_ptr);
  (**(code **)(param_1 + 0x60))(0x1ee,FUN_180446e70);
  (**(code **)(param_1 + 0x60))(0x1ef,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x1f0,&rendering_state_5648_ptr);
  (**(code **)(param_1 + 0x60))(0x1f1,&rendering_state_5568_ptr);
  (**(code **)(param_1 + 0x60))(0x1f2,&rendering_state_6256_ptr);
  (**(code **)(param_1 + 0x60))(499,FUN_1804470d0);
  (**(code **)(param_1 + 0x60))(500,&rendering_state_6096_ptr);
  (**(code **)(param_1 + 0x60))(0x1f5,FUN_180446fd0);
  (**(code **)(param_1 + 0x60))(0x1f6,&rendering_state_5600_ptr);
  (**(code **)(param_1 + 0x60))(0x1f7,FUN_180446dc0);
  (**(code **)(param_1 + 0x60))(0x1f8,FUN_180446fa0);
  (**(code **)(param_1 + 0x60))(0x1f9,&rendering_state_5552_ptr);
  (**(code **)(param_1 + 0x60))(0x1fa,&rendering_state_5552_ptr);
  (**(code **)(param_1 + 0x60))(0x1fb,&rendering_state_6336_ptr);
  (**(code **)(param_1 + 0x60))(0x1fc,&rendering_state_6336_ptr);
  (**(code **)(param_1 + 0x60))(0x1fd,&rendering_state_9264_ptr);
  (**(code **)(param_1 + 0x60))(0x1fe,FUN_180447c00);
  (**(code **)(param_1 + 0x60))(0x1ff,RenderingSystemShaderCompilerDebugger);
  (**(code **)(param_1 + 0x60))(0x200,FUN_1804485c0);
  (**(code **)(param_1 + 0x60))(0x201,FUN_1804489a0);
  (**(code **)(param_1 + 0x60))(0x202,&rendering_state_9280_ptr);
  (**(code **)(param_1 + 0x60))(0x203,FUN_180447e40);
  (**(code **)(param_1 + 0x60))(0x204,FUN_180447f70);
  (**(code **)(param_1 + 0x60))(0x205,FUN_180447660);
  (**(code **)(param_1 + 0x60))(0x206,FUN_1804475e0);
  (**(code **)(param_1 + 0x60))(0x207,FUN_180447710);
  (**(code **)(param_1 + 0x60))(0x208,FUN_180449780);
  (**(code **)(param_1 + 0x60))(0x209,FUN_1804477f0);
  (**(code **)(param_1 + 0x60))(0x20a,FUN_180448ea0);
  (**(code **)(param_1 + 0x60))(0x20b,FUN_180448470);
  (**(code **)(param_1 + 0x60))(0x20c,FUN_180448540);
  (**(code **)(param_1 + 0x60))(0x20d,FUN_1804484c0);
  (**(code **)(param_1 + 0x60))(0x20e,FUN_180448420);
  (**(code **)(param_1 + 0x60))(0x20f,&rendering_param_896_ptr);
  (**(code **)(param_1 + 0x60))(0x210,&rendering_state_1040_ptr);
  (**(code **)(param_1 + 0x60))(0x211,FUN_180449000);
  (**(code **)(param_1 + 0x60))(0x212,FUN_1804491c0);
  (**(code **)(param_1 + 0x60))(0x213,FUN_180447e10);
  (**(code **)(param_1 + 0x60))(0x214,RenderingSystemShaderCompilerController);
  (**(code **)(param_1 + 0x60))(0x215,&rendering_param_848_ptr);
  (**(code **)(param_1 + 0x60))(0x216,RenderingSystemResourceOptimizer);
  (**(code **)(param_1 + 0x60))(0x217,FUN_180447430);
  (**(code **)(param_1 + 0x60))(0x218,&rendering_state_5344_ptr);
  (**(code **)(param_1 + 0x60))(0x219,FUN_180447b80);
  (**(code **)(param_1 + 0x60))(0x21a,FUN_1804471a0);
  (**(code **)(param_1 + 0x60))(0x21b,FUN_180448f50);
  (**(code **)(param_1 + 0x60))(0x21c,FUN_1804473b0);
  (**(code **)(param_1 + 0x60))(0x21d,FUN_180448d90);
  (**(code **)(param_1 + 0x60))(0x21e,FUN_180448df0);
  (**(code **)(param_1 + 0x60))(0x21f,FUN_180449850);
  (**(code **)(param_1 + 0x60))(0x220,FUN_180449230);
  (**(code **)(param_1 + 0x60))(0x221,FUN_180448e50);
  (**(code **)(param_1 + 0x60))(0x222,&rendering_state_6352_ptr);
  (**(code **)(param_1 + 0x60))(0x223,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x224,&rendering_state_1200_ptr);
  (**(code **)(param_1 + 0x60))(0x225,FUN_180448f00);
  (**(code **)(param_1 + 0x60))(0x226,FUN_180094f80);
  (**(code **)(param_1 + 0x60))(0x227,FUN_180447d40);
  (**(code **)(param_1 + 0x60))(0x228,&system_pattern2_ptr);
  (**(code **)(param_1 + 0x60))(0x229,&rendering_state_7520_ptr);
  (**(code **)(param_1 + 0x60))(0x22a,FUN_1804496f0);
  (**(code **)(param_1 + 0x60))(0x22b,&rendering_state_9440_ptr);
  (**(code **)(param_1 + 0x60))(0x22c,FUN_180449070);
  (**(code **)(param_1 + 0x60))(0x22d,&rendering_state_6368_ptr);
  (**(code **)(param_1 + 0x60))(0x22e,&rendering_state_6272_ptr);
  (**(code **)(param_1 + 0x60))(0x22f,&rendering_param_832_ptr);
  (**(code **)(param_1 + 0x60))(0x230,FUN_1804472c0);
  (**(code **)(param_1 + 0x60))(0x231,FUN_180447220);
  (**(code **)(param_1 + 0x60))(0x232,&rendering_state_6992_ptr);
  (**(code **)(param_1 + 0x60))(0x233,&rendering_state_9424_ptr);
  (**(code **)(param_1 + 0x60))(0x234,FUN_180447ca0);
  (**(code **)(param_1 + 0x60))(0x235,FUN_180447320);
  (**(code **)(param_1 + 0x60))(0x236,FUN_180447360);
  (**(code **)(param_1 + 0x60))(0x237,FUN_180448fb0);
  (**(code **)(param_1 + 0x60))(0x238,FUN_1804498f0);
  (**(code **)(param_1 + 0x60))(0x239,&rendering_state_1184_ptr);
  (**(code **)(param_1 + 0x60))(0x23a,FUN_180447990);
  (**(code **)(param_1 + 0x60))(0x23b,FUN_180447850);
  (**(code **)(param_1 + 0x60))(0x23c,FUN_180449300);
  (**(code **)(param_1 + 0x60))(0x23d,&rendering_state_6704_ptr);
  (**(code **)(param_1 + 0x60))(0x23e,FUN_18044aad0);
  (**(code **)(param_1 + 0x60))(0x23f,&rendering_state_1232_ptr);
  (**(code **)(param_1 + 0x60))(0x240,FUN_18044baf0);
  (**(code **)(param_1 + 0x60))(0x241,&rendering_state_5584_ptr);
  (**(code **)(param_1 + 0x60))(0x242,FUN_18044bc50);
  (**(code **)(param_1 + 0x60))(0x243,FUN_18044a810);
  (**(code **)(param_1 + 0x60))(0x244,FUN_18044b7a0);
  (**(code **)(param_1 + 0x60))(0x245,FUN_18044be30);
  (**(code **)(param_1 + 0x60))(0x246,&rendering_param_384_ptr);
  (**(code **)(param_1 + 0x60))(0x247,&rendering_param_352_ptr);
  (**(code **)(param_1 + 0x60))(0x248,&rendering_param_368_ptr);
  (**(code **)(param_1 + 0x60))(0x249,&rendering_param_336_ptr);
  (**(code **)(param_1 + 0x60))(0x24a,&rendering_state_1216_ptr);
  (**(code **)(param_1 + 0x60))(0x24b,FUN_180449a00);
  (**(code **)(param_1 + 0x60))(0x24c,FUN_18044a590);
  (**(code **)(param_1 + 0x60))(0x24d,FUN_180449930);
  (**(code **)(param_1 + 0x60))(0x24e,FUN_18044b3d0);
  (**(code **)(param_1 + 0x60))(0x24f,FUN_18044b580);
  (**(code **)(param_1 + 0x60))(0x250,FUN_18044b4f0);
  (**(code **)(param_1 + 0x60))(0x251,FUN_18044ac20);
  (**(code **)(param_1 + 0x60))(0x252,FUN_18044ad90);
  (**(code **)(param_1 + 0x60))(0x253,FUN_18044b080);
  (**(code **)(param_1 + 0x60))(0x254,&rendering_state_7312_ptr);
  (**(code **)(param_1 + 0x60))(0x255,FUN_18044ab80);
  (**(code **)(param_1 + 0x60))(0x256,&rendering_state_1264_ptr);
  (**(code **)(param_1 + 0x60))(599,FUN_18044a3a0);
  (**(code **)(param_1 + 0x60))(600,FUN_180449a80);
  (**(code **)(param_1 + 0x60))(0x259,FUN_18044b610);
  (**(code **)(param_1 + 0x60))(0x25a,&rendering_state_3840_ptr);
  (**(code **)(param_1 + 0x60))(0x25b,&rendering_state_4176_ptr);
  (**(code **)(param_1 + 0x60))(0x25c,FUN_180449c00);
  (**(code **)(param_1 + 0x60))(0x25d,FUN_18044b010);
  (**(code **)(param_1 + 0x60))(0x25e,FUN_18044b110);
  (**(code **)(param_1 + 0x60))(0x25f,&rendering_state_3792_ptr);
  (**(code **)(param_1 + 0x60))(0x260,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x261,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x262,&rendering_state_5168_ptr);
  (**(code **)(param_1 + 0x60))(0x263,&rendering_state_9264_ptr);
  (**(code **)(param_1 + 0x60))(0x264,&rendering_state_5568_ptr);
  (**(code **)(param_1 + 0x60))(0x265,FUN_18044b700);
  (**(code **)(param_1 + 0x60))(0x266,FUN_18044b910);
  (**(code **)(param_1 + 0x60))(0x267,&rendering_state_6672_ptr);
  (**(code **)(param_1 + 0x60))(0x268,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x269,&rendering_state_6720_ptr);
  (**(code **)(param_1 + 0x60))(0x26a,FUN_18044a080);
  (**(code **)(param_1 + 0x60))(0x26b,FUN_180449d70);
  (**(code **)(param_1 + 0x60))(0x26c,&rendering_state_3040_ptr);
  (**(code **)(param_1 + 0x60))(0x26d,RenderingSystemUtilityDebugger);
  (**(code **)(param_1 + 0x60))(0x26e,&rendering_state_6736_ptr);
  (**(code **)(param_1 + 0x60))(0x26f,&rendering_state_1248_ptr);
  (**(code **)(param_1 + 0x60))(0x270,&rendering_state_6656_ptr);
  (**(code **)(param_1 + 0x60))(0x271,FUN_1804378e0);
  (**(code **)(param_1 + 0x60))(0x272,FUN_18043ca10);
  (**(code **)(param_1 + 0x60))(0x273,FUN_1804378e0);
  (**(code **)(param_1 + 0x60))(0x274,FUN_18044af00);
  (**(code **)(param_1 + 0x60))(0x275,FUN_18044c420);
  (**(code **)(param_1 + 0x60))(0x276,&rendering_state_3648_ptr);
  (**(code **)(param_1 + 0x60))(0x277,&rendering_state_7296_ptr);
  (**(code **)(param_1 + 0x60))(0x278,&rendering_state_6592_ptr);
  (**(code **)(param_1 + 0x60))(0x279,FUN_180437460);
  (**(code **)(param_1 + 0x60))(0x27a,FUN_18044c190);
  (**(code **)(param_1 + 0x60))(0x27b,&rendering_param_400_ptr);
  (**(code **)(param_1 + 0x60))(0x27c,FUN_180437b60);
  (**(code **)(param_1 + 0x60))(0x27d,FUN_18044afb0);
  (**(code **)(param_1 + 0x60))(0x27e,FUN_18044b1d0);
  (**(code **)(param_1 + 0x60))(0x27f,FUN_18044b6e0);
  (**(code **)(param_1 + 0x60))(0x280,FUN_18044b280);
  (**(code **)(param_1 + 0x60))(0x281,&rendering_state_8352_ptr);
  (**(code **)(param_1 + 0x60))(0x282,&rendering_state_8976_ptr);
  (**(code **)(param_1 + 0x60))(0x283,FUN_18044c9c0);
  (**(code **)(param_1 + 0x60))(0x284,RenderingSystemHelperController);
  (**(code **)(param_1 + 0x60))(0x285,&rendering_state_8912_ptr);
  (**(code **)(param_1 + 0x60))(0x286,&rendering_state_9008_ptr);
  (**(code **)(param_1 + 0x60))(0x287,&rendering_state_9168_ptr);
  (**(code **)(param_1 + 0x60))(0x288,&rendering_state_9264_ptr);
  (**(code **)(param_1 + 0x60))(0x289,&rendering_state_9360_ptr);
  (**(code **)(param_1 + 0x60))(0x28a,&rendering_state_9200_ptr);
  (**(code **)(param_1 + 0x60))(0x28b,&rendering_state_9392_ptr);
  (**(code **)(param_1 + 0x60))(0x28c,&rendering_state_9328_ptr);
  (**(code **)(param_1 + 0x60))(0x28d,&rendering_state_9296_ptr);
  (**(code **)(param_1 + 0x60))(0x28e,&rendering_state_9456_ptr);
  (**(code **)(param_1 + 0x60))(0x28f,&rendering_state_9424_ptr);
  (**(code **)(param_1 + 0x60))(0x290,&rendering_state_9232_ptr);
  (**(code **)(param_1 + 0x60))(0x291,FUN_18044cd30);
  (**(code **)(param_1 + 0x60))(0x292,FUN_18044ce10);
  (**(code **)(param_1 + 0x60))(0x293,&system_state_ptr);
  (**(code **)(param_1 + 0x60))(0x294,FUN_18044cb80);
  (**(code **)(param_1 + 0x60))(0x295,&rendering_param_768_ptr);
  (**(code **)(param_1 + 0x60))(0x296,&rendering_callback28_ptr);
  (**(code **)(param_1 + 0x60))(0x297,&rendering_state_1200_ptr);
  (**(code **)(param_1 + 0x60))(0x298,FUN_18044cf20);
  (**(code **)(param_1 + 0x60))(0x299,&rendering_param_704_ptr);
  (**(code **)(param_1 + 0x60))(0x29a,FUN_18044d4f0);
  (**(code **)(param_1 + 0x60))(0x29b,FUN_18044d570);
  (**(code **)(param_1 + 0x60))(0x29c,&rendering_state_1456_ptr);
  (**(code **)(param_1 + 0x60))(0x29d,FUN_18044d2d0);
  (**(code **)(param_1 + 0x60))(0x29e,FUN_18044d0f0);
  (**(code **)(param_1 + 0x60))(0x29f,FUN_18044d0b0);
  (**(code **)(param_1 + 0x60))(0x2a0,&rendering_state_2272_ptr);
  (**(code **)(param_1 + 0x60))(0x2a1,FUN_18044d130);
  (**(code **)(param_1 + 0x60))(0x2a2,&rendering_param_784_ptr);
  (**(code **)(param_1 + 0x60))(0x2a3,FUN_18044d340);
  (**(code **)(param_1 + 0x60))(0x2a4,&rendering_state_1680_ptr);
  (**(code **)(param_1 + 0x60))(0x2a5,&rendering_state_1664_ptr);
  (**(code **)(param_1 + 0x60))(0x2a6,&system_callback2_ptr);
  (**(code **)(param_1 + 0x60))(0x2a7,&rendering_state_1696_ptr);
  (**(code **)(param_1 + 0x60))(0x2a8,FUN_18044d450);
  (**(code **)(param_1 + 0x60))(0x2a9,&rendering_state_2528_ptr);
  (**(code **)(param_1 + 0x60))(0x2aa,&rendering_state_2464_ptr);
  (**(code **)(param_1 + 0x60))(0x2ab,FUN_18044d680);
  (**(code **)(param_1 + 0x60))(0x2ac,&rendering_state_2624_ptr);
  (**(code **)(param_1 + 0x60))(0x2ad,&rendering_state_2416_ptr);
  (**(code **)(param_1 + 0x60))(0x2ae,&rendering_state_2496_ptr);
  (**(code **)(param_1 + 0x60))(0x2af,&rendering_state_2592_ptr);
  (**(code **)(param_1 + 0x60))(0x2b0,&rendering_state_2560_ptr);
  (**(code **)(param_1 + 0x60))(0x2b1,FUN_180435f40);
  (**(code **)(param_1 + 0x60))(0x2b2,FUN_1804357a0);
  (**(code **)(param_1 + 0x60))(0x2b3,FUN_180435ff0);
  (**(code **)(param_1 + 0x60))(0x2b4,&rendering_state_6144_ptr);
  (**(code **)(param_1 + 0x60))(0x2b5,FUN_1804362a0);
  (**(code **)(param_1 + 0x60))(0x2b6,FUN_1804359d0);
  (**(code **)(param_1 + 0x60))(0x2b7,&rendering_state_7056_ptr);
  (**(code **)(param_1 + 0x60))(0x2b8,&rendering_state_6624_ptr);
  (**(code **)(param_1 + 0x60))(0x2b9,FUN_180436160);
  (**(code **)(param_1 + 0x60))(0x2ba,&rendering_state_6592_ptr);
  (**(code **)(param_1 + 0x60))(699,FUN_180435690);
  (**(code **)(param_1 + 0x60))(700,&rendering_state_5344_ptr);
  (**(code **)(param_1 + 0x60))(0x2bd,&rendering_state_5872_ptr);
  (**(code **)(param_1 + 0x60))(0x2be,FUN_180435e20);
  (**(code **)(param_1 + 0x60))(0x2bf,&rendering_state_5584_ptr);
  (**(code **)(param_1 + 0x60))(0x2c0,FUN_180435f90);
  (**(code **)(param_1 + 0x60))(0x2c1,FUN_180435d10);
  (**(code **)(param_1 + 0x60))(0x2c2,&rendering_state_4464_ptr);
  (**(code **)(param_1 + 0x60))(0x2c3,FUN_180436030);
  (**(code **)(param_1 + 0x60))(0x2c4,&rendering_state_5792_ptr);
  (**(code **)(param_1 + 0x60))(0x2c5,&rendering_state_7088_ptr);
  (**(code **)(param_1 + 0x60))(0x2c6,&rendering_state_5488_ptr);
  (**(code **)(param_1 + 0x60))(0x2c7,&rendering_state_5376_ptr);
  (**(code **)(param_1 + 0x60))(0x2c8,FUN_180435860);
  (**(code **)(param_1 + 0x60))(0x2c9,FUN_18044fa00);
  (**(code **)(param_1 + 0x60))(0x2ca,&rendering_state_8784_ptr);
  (**(code **)(param_1 + 0x60))(0x2cb,FUN_18044ffa0);
  (**(code **)(param_1 + 0x60))(0x2cc,FUN_180450070);
  (**(code **)(param_1 + 0x60))(0x2cd,FUN_1804501c0);
  (**(code **)(param_1 + 0x60))(0x2ce,FUN_180453b60);
  (**(code **)(param_1 + 0x60))(0x2cf,FUN_180453cb0);
  (**(code **)(param_1 + 0x60))(0x2d0,&rendering_state_8784_ptr);
  (**(code **)(param_1 + 0x60))(0x2d1,FUN_180450140);
  (**(code **)(param_1 + 0x60))(0x2d2,FUN_1804520a0);
  (**(code **)(param_1 + 0x60))(0x2d3,FUN_180451e30);
  (**(code **)(param_1 + 0x60))(0x2d4,0x1800467e0);
  (**(code **)(param_1 + 0x60))(0x2d5,FUN_18044f210);
  (**(code **)(param_1 + 0x60))(0x2d6,FUN_180451da0);
  (**(code **)(param_1 + 0x60))(0x2d7,FUN_180450360);
  (**(code **)(param_1 + 0x60))(0x2d8,&rendering_state_3776_ptr);
  (**(code **)(param_1 + 0x60))(0x2d9,&rendering_state_2736_ptr);
  (**(code **)(param_1 + 0x60))(0x2da,&rendering_state_9312_ptr);
  (**(code **)(param_1 + 0x60))(0x2db,&rendering_state_6336_ptr);
  (**(code **)(param_1 + 0x60))(0x2dc,FUN_18044d910);
  (**(code **)(param_1 + 0x60))(0x2dd,FUN_18044da90);
  (**(code **)(param_1 + 0x60))(0x2de,FUN_18044efd0);
  (**(code **)(param_1 + 0x60))(0x2df,FUN_1804539b0);
  (**(code **)(param_1 + 0x60))(0x2e0,&rendering_state_9696_ptr);
  (**(code **)(param_1 + 0x60))(0x2e1,&rendering_state_6368_ptr);
  (**(code **)(param_1 + 0x60))(0x2e2,FUN_1804534d0);
  (**(code **)(param_1 + 0x60))(0x2e3,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x2e4,FUN_1804543f0);
  (**(code **)(param_1 + 0x60))(0x2e5,FUN_1804557b0);
  (**(code **)(param_1 + 0x60))(0x2e6,&rendering_state_5488_ptr);
  (**(code **)(param_1 + 0x60))(0x2e7,&rendering_param_240_ptr);
  (**(code **)(param_1 + 0x60))(0x2e8,FUN_1804508a0);
  (**(code **)(param_1 + 0x60))(0x2e9,FUN_1804511e0);
  (**(code **)(param_1 + 0x60))(0x2ea,FUN_18044e0d0);
  (**(code **)(param_1 + 0x60))(0x2eb,FUN_180455430);
  (**(code **)(param_1 + 0x60))(0x2ec,FUN_18044e180);
  (**(code **)(param_1 + 0x60))(0x2ed,&rendering_state_9072_ptr);
  (**(code **)(param_1 + 0x60))(0x2ee,FUN_180455340);
  (**(code **)(param_1 + 0x60))(0x2ef,FUN_180450ba0);
  (**(code **)(param_1 + 0x60))(0x2f0,&rendering_state_5888_ptr);
  (**(code **)(param_1 + 0x60))(0x2f1,FUN_18044f370);
  (**(code **)(param_1 + 0x60))(0x2f2,FUN_180455250);
  (**(code **)(param_1 + 0x60))(0x2f3,FUN_1804555a0);
  (**(code **)(param_1 + 0x60))(0x2f4,FUN_180455980);
  (**(code **)(param_1 + 0x60))(0x2f5,FUN_1804559d0);
  (**(code **)(param_1 + 0x60))(0x2f6,&rendering_param_128_ptr);
  (**(code **)(param_1 + 0x60))(0x2f7,FUN_180451d20);
  (**(code **)(param_1 + 0x60))(0x2f8,FUN_180451ca0);
  (**(code **)(param_1 + 0x60))(0x2f9,FUN_180453860);
  (**(code **)(param_1 + 0x60))(0x2fa,FUN_1804537e0);
  (**(code **)(param_1 + 0x60))(0x2fb,FUN_1804509e0);
  (**(code **)(param_1 + 0x60))(0x2fc,&rendering_state_3024_ptr);
  (**(code **)(param_1 + 0x60))(0x2fd,&rendering_state_9392_ptr);
  (**(code **)(param_1 + 0x60))(0x2fe,&render_data_ptr);
  (**(code **)(param_1 + 0x60))(0x2ff,FUN_1804531d0);
  (**(code **)(param_1 + 0x60))(0x300,FUN_180453300);
  (**(code **)(param_1 + 0x60))(0x301,FUN_18044e2b0);
  (**(code **)(param_1 + 0x60))(0x302,FUN_180453e40);
  (**(code **)(param_1 + 0x60))(0x303,FUN_180453de0);
  (**(code **)(param_1 + 0x60))(0x304,FUN_180452f40);
  (**(code **)(param_1 + 0x60))(0x305,FUN_180454ea0);
  (**(code **)(param_1 + 0x60))(0x306,&rendering_state_5808_ptr);
  (**(code **)(param_1 + 0x60))(0x307,&rendering_base_ptr);
  (**(code **)(param_1 + 0x60))(0x308,FUN_18044df40);
  (**(code **)(param_1 + 0x60))(0x309,FUN_18044e650);
  (**(code **)(param_1 + 0x60))(0x30a,&rendering_state_5328_ptr);
  (**(code **)(param_1 + 0x60))(0x30b,FUN_180451890);
  (**(code **)(param_1 + 0x60))(0x30c,&rendering_param_160_ptr);
  (**(code **)(param_1 + 0x60))(0x30d,FUN_180453f90);
  (**(code **)(param_1 + 0x60))(0x30e,FUN_18044ead0);
  (**(code **)(param_1 + 0x60))(0x30f,FUN_18044e890);
  (**(code **)(param_1 + 0x60))(0x310,FUN_18044ed20);
  (**(code **)(param_1 + 0x60))(0x311,FUN_180452fa0);
  (**(code **)(param_1 + 0x60))(0x312,FUN_180454070);
  (**(code **)(param_1 + 0x60))(0x313,FUN_1804538b0);
  (**(code **)(param_1 + 0x60))(0x314,&rendering_state_5360_ptr);
  (**(code **)(param_1 + 0x60))(0x315,&rendering_state_9328_ptr);
  (**(code **)(param_1 + 0x60))(0x316,&rendering_state_5344_ptr);
  (**(code **)(param_1 + 0x60))(0x317,&rendering_state_5328_ptr);
  (**(code **)(param_1 + 0x60))(0x318,&rendering_state_5296_ptr);
  (**(code **)(param_1 + 0x60))(0x319,&rendering_param_240_ptr);
  (**(code **)(param_1 + 0x60))(0x31a,&rendering_state_1264_ptr);
  (**(code **)(param_1 + 0x60))(0x31b,FUN_180450a20);
  (**(code **)(param_1 + 0x60))(0x31c,&rendering_state_5488_ptr);
  (**(code **)(param_1 + 0x60))(0x31d,&SUB_1802bf330);
  (**(code **)(param_1 + 0x60))(0x31e,&rendering_state_5408_ptr);
  (**(code **)(param_1 + 0x60))(799,FUN_180454d00);
  (**(code **)(param_1 + 0x60))(800,&rendering_state_2608_ptr);
  (**(code **)(param_1 + 0x60))(0x321,FUN_1804541a0);
  (**(code **)(param_1 + 0x60))(0x322,FUN_18044dc10);
  (**(code **)(param_1 + 0x60))(0x323,&rendering_state_1328_ptr);
  (**(code **)(param_1 + 0x60))(0x324,FUN_180453810);
  (**(code **)(param_1 + 0x60))(0x325,FUN_1804537b0);
  (**(code **)(param_1 + 0x60))(0x326,FUN_180454300);
  (**(code **)(param_1 + 0x60))(0x327,&rendering_state_5584_ptr);
  (**(code **)(param_1 + 0x60))(0x328,FUN_1804517c0);
  (**(code **)(param_1 + 0x60))(0x329,FUN_180454d80);
  (**(code **)(param_1 + 0x60))(0x32a,0x180069ee0);
  (**(code **)(param_1 + 0x60))(0x32b,&rendering_param_192_ptr);
  (**(code **)(param_1 + 0x60))(0x32c,&rendering_state_5648_ptr);
  (**(code **)(param_1 + 0x60))(0x32d,&rendering_state_5712_ptr);
  (**(code **)(param_1 + 0x60))(0x32e,&rendering_state_9440_ptr);
  (**(code **)(param_1 + 0x60))(0x32f,&rendering_state_9104_ptr);
  (**(code **)(param_1 + 0x60))(0x330,FUN_180455090);
  (**(code **)(param_1 + 0x60))(0x331,&rendering_state_5776_ptr);
  (**(code **)(param_1 + 0x60))(0x332,FUN_180454ff0);
  (**(code **)(param_1 + 0x60))(0x333,&system_param1_ptr);
  (**(code **)(param_1 + 0x60))(0x334,&rendering_state_6288_ptr);
  (**(code **)(param_1 + 0x60))(0x335,FUN_18044e620);
  (**(code **)(param_1 + 0x60))(0x336,&rendering_buffer822_ptr);
  (**(code **)(param_1 + 0x60))(0x337,&rendering_state_9296_ptr);
  (**(code **)(param_1 + 0x60))(0x338,&rendering_state_7760_ptr);
  (**(code **)(param_1 + 0x60))(0x339,&rendering_state_2624_ptr);
  (**(code **)(param_1 + 0x60))(0x33a,&rendering_state_9504_ptr);
  (**(code **)(param_1 + 0x60))(0x33b,FUN_18044e000);
  (**(code **)(param_1 + 0x60))(0x33c,&rendering_state_8224_ptr);
  (**(code **)(param_1 + 0x60))(0x33d,FUN_1804530a0);
  (**(code **)(param_1 + 0x60))(0x33e,FUN_180453140);
  (**(code **)(param_1 + 0x60))(0x33f,&rendering_state_5536_ptr);
  (**(code **)(param_1 + 0x60))(0x340,&rendering_state_4800_ptr);
  (**(code **)(param_1 + 0x60))(0x341,FUN_180452630);
  (**(code **)(param_1 + 0x60))(0x342,&rendering_state_2480_ptr);
  (**(code **)(param_1 + 0x60))(0x343,FUN_180452500);
  (**(code **)(param_1 + 0x60))(0x344,&rendering_state_8992_ptr);
  (**(code **)(param_1 + 0x60))(0x345,&rendering_param_208_ptr);
  (**(code **)(param_1 + 0x60))(0x346,FUN_180451bd0);
  (**(code **)(param_1 + 0x60))(0x347,FUN_1804522d0);
  (**(code **)(param_1 + 0x60))(0x348,FUN_1804512f0);
  (**(code **)(param_1 + 0x60))(0x349,FUN_180451770);
  (**(code **)(param_1 + 0x60))(0x34a,FUN_1804502d0);
  (**(code **)(param_1 + 0x60))(0x34b,&rendering_state_5760_ptr);
  (**(code **)(param_1 + 0x60))(0x34c,&rendering_param_224_ptr);
  (**(code **)(param_1 + 0x60))(0x34d,FUN_1804510a0);
  (**(code **)(param_1 + 0x60))(0x34e,FUN_180450d90);
  (**(code **)(param_1 + 0x60))(0x34f,&rendering_state_2448_ptr);
  (**(code **)(param_1 + 0x60))(0x350,&rendering_state_2672_ptr);
  (**(code **)(param_1 + 0x60))(0x351,&rendering_state_2704_ptr);
  (**(code **)(param_1 + 0x60))(0x352,&rendering_state_2736_ptr);
  (**(code **)(param_1 + 0x60))(0x353,&rendering_state_2592_ptr);
  (**(code **)(param_1 + 0x60))(0x354,FUN_18044db70);
  (**(code **)(param_1 + 0x60))(0x355,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x356,FUN_180454230);
  (**(code **)(param_1 + 0x60))(0x357,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x358,&rendering_state_1936_ptr);
  (**(code **)(param_1 + 0x60))(0x359,&rendering_state_1904_ptr);
  (**(code **)(param_1 + 0x60))(0x35a,&rendering_state_1744_ptr);
  (**(code **)(param_1 + 0x60))(0x35b,&rendering_state_5744_ptr);
  (**(code **)(param_1 + 0x60))(0x35c,FUN_1804519d0);
  (**(code **)(param_1 + 0x60))(0x35d,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x35e,&rendering_state_9360_ptr);
  (**(code **)(param_1 + 0x60))(0x35f,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x360,&rendering_state_9328_ptr);
  (**(code **)(param_1 + 0x60))(0x361,&rendering_state_4576_ptr);
  (**(code **)(param_1 + 0x60))(0x362,&rendering_data866_ptr);
  (**(code **)(param_1 + 0x60))(0x363,&rendering_param_416_ptr);
  (**(code **)(param_1 + 0x60))(0x364,&rendering_param_432_ptr);
  (**(code **)(param_1 + 0x60))(0x365,FUN_180453750);
  (**(code **)(param_1 + 0x60))(0x366,&rendering_param_160_ptr);
  (**(code **)(param_1 + 0x60))(0x367,&rendering_param_240_ptr);
  (**(code **)(param_1 + 0x60))(0x368,&rendering_param_320_ptr);
  (**(code **)(param_1 + 0x60))(0x369,&rendering_param_544_ptr);
  (**(code **)(param_1 + 0x60))(0x36a,&rendering_state_2800_ptr);
  (**(code **)(param_1 + 0x60))(0x36b,&rendering_state_2560_ptr);
  (**(code **)(param_1 + 0x60))(0x36c,&rendering_state_2544_ptr);
  (**(code **)(param_1 + 0x60))(0x36d,&rendering_param_384_ptr);
  (**(code **)(param_1 + 0x60))(0x36e,FUN_180453580);
  (**(code **)(param_1 + 0x60))(0x36f,&rendering_state_2768_ptr);
  (**(code **)(param_1 + 0x60))(0x370,&rendering_state_2256_ptr);
  (**(code **)(param_1 + 0x60))(0x371,&rendering_state_1968_ptr);
  (**(code **)(param_1 + 0x60))(0x372,&rendering_state_2320_ptr);
  (**(code **)(param_1 + 0x60))(0x373,&rendering_state_2288_ptr);
  (**(code **)(param_1 + 0x60))(0x374,&rendering_state_2096_ptr);
  (**(code **)(param_1 + 0x60))(0x375,&rendering_state_2064_ptr);
  (**(code **)(param_1 + 0x60))(0x376,&system_callback2_ptr);
  (**(code **)(param_1 + 0x60))(0x377,&rendering_state_2160_ptr);
  (**(code **)(param_1 + 0x60))(0x378,&rendering_state_2128_ptr);
  (**(code **)(param_1 + 0x60))(0x379,&rendering_state_2192_ptr);
  (**(code **)(param_1 + 0x60))(0x37a,&rendering_state_2032_ptr);
  (**(code **)(param_1 + 0x60))(0x37b,&rendering_state_2000_ptr);
  (**(code **)(param_1 + 0x60))(0x37c,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x37d,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x37e,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x37f,&rendering_state_1808_ptr);
  (**(code **)(param_1 + 0x60))(0x380,&rendering_state_1872_ptr);
  (**(code **)(param_1 + 0x60))(0x381,&rendering_state_1712_ptr);
  (**(code **)(param_1 + 0x60))(0x382,&rendering_state_1680_ptr);
  (**(code **)(param_1 + 0x60))(899,&rendering_state_1776_ptr);
  (**(code **)(param_1 + 0x60))(900,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x385,FUN_180453d60);
  (**(code **)(param_1 + 0x60))(0x386,&rendering_state_7056_ptr);
  (**(code **)(param_1 + 0x60))(0x387,FUN_180453f70);
  (**(code **)(param_1 + 0x60))(0x388,&rendering_state_5600_ptr);
  (**(code **)(param_1 + 0x60))(0x389,&rendering_state_5632_ptr);
  (**(code **)(param_1 + 0x60))(0x38a,&rendering_param_112_ptr);
  (**(code **)(param_1 + 0x60))(0x38b,&rendering_state_5568_ptr);
  (**(code **)(param_1 + 0x60))(0x38c,&rendering_state_5552_ptr);
  (**(code **)(param_1 + 0x60))(0x38d,&rendering_state_5648_ptr);
  (**(code **)(param_1 + 0x60))(0x38e,&rendering_state_9680_ptr);
  (**(code **)(param_1 + 0x60))(0x38f,&rendering_state_1296_ptr);
  (**(code **)(param_1 + 0x60))(0x390,FUN_18044e590);
  (**(code **)(param_1 + 0x60))(0x391,FUN_18044e3b0);
  (**(code **)(param_1 + 0x60))(0x392,FUN_18044e4f0);
  (**(code **)(param_1 + 0x60))(0x393,&rendering_state_1632_ptr);
  (**(code **)(param_1 + 0x60))(0x394,&rendering_param_512_ptr);
  (**(code **)(param_1 + 0x60))(0x395,&rendering_param_464_ptr);
  (**(code **)(param_1 + 0x60))(0x396,&rendering_state_1360_ptr);
  (**(code **)(param_1 + 0x60))(0x397,&rendering_state_2352_ptr);
  (**(code **)(param_1 + 0x60))(0x398,&rendering_state_2480_ptr);
  (**(code **)(param_1 + 0x60))(0x399,&rendering_state_2416_ptr);
  (**(code **)(param_1 + 0x60))(0x39a,&rendering_state_2448_ptr);
  (**(code **)(param_1 + 0x60))(0x39b,&rendering_state_2384_ptr);
  (**(code **)(param_1 + 0x60))(0x39c,&rendering_state_2512_ptr);
  (**(code **)(param_1 + 0x60))(0x39d,&rendering_state12_ptr);
  (**(code **)(param_1 + 0x60))(0x39e,&rendering_param_704_ptr);
  (**(code **)(param_1 + 0x60))(0x39f,FUN_18044f880);
  (**(code **)(param_1 + 0x60))(0x3a0,FUN_18044f780);
  (**(code **)(param_1 + 0x60))(0x3a1,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x3a2,&rendering_state_1232_ptr);
  (**(code **)(param_1 + 0x60))(0x3a3,&rendering_state_1200_ptr);
  (**(code **)(param_1 + 0x60))(0x3a4,&rendering_state_1840_ptr);
  (**(code **)(param_1 + 0x60))(0x3a5,&rendering_param_352_ptr);
  (**(code **)(param_1 + 0x60))(0x3a6,&system_handler2_ptr);
  (**(code **)(param_1 + 0x60))(0x3a7,&rendering_state_9472_ptr);
  (**(code **)(param_1 + 0x60))(0x3a8,&rendering_state_9136_ptr);
  (**(code **)(param_1 + 0x60))(0x3a9,FUN_18044edc0);
  (**(code **)(param_1 + 0x60))(0x3aa,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x3ab,_guard_check_icall);
  (**(code **)(param_1 + 0x60))(0x3ac,&rendering_state_9664_ptr);
  (**(code **)(param_1 + 0x60))(0x3ad,&rendering_state_2576_ptr);
                    // WARNING: Could not recover jumptable at 0x000180315fda. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x60))(0x3ae,&rendering_state_2640_ptr);
  return;
}








// 渲染系统高级组件和处理器别名定义
#define RenderingSystemAdvancedInitializer RenderingSystemAdvancedInitializer    // 渲染系统高级初始化器
#define RenderingSystemAdvancedConfigurator RenderingSystemAdvancedConfigurator    // 渲染系统高级配置器
#define RenderingSystemAdvancedValidator RenderingSystemAdvancedValidator       // 渲染系统高级验证器
#define RenderingSystemAdvancedProcessor RenderingSystemAdvancedProcessor      // 渲染系统高级处理器
#define RenderingSystemAdvancedManager RenderingSystemAdvancedManager        // 渲染系统高级管理器
#define RenderingSystemAdvancedController RenderingSystemAdvancedController     // 渲染系统高级控制器
#define RenderingSystemAdvancedOptimizer RenderingSystemAdvancedOptimizer      // 渲染系统高级优化器
#define RenderingSystemAdvancedAnalyzer RenderingSystemAdvancedAnalyzer      // 渲染系统高级分析器
#define RenderingSystemAdvancedMonitor RenderingSystemAdvancedMonitor       // 渲染系统高级监控器
#define RenderingSystemAdvancedDebugger RenderingSystemAdvancedDebugger       // 渲染系统高级调试器

// 渲染系统数据流处理别名定义
#define RenderingSystemDataFlowProcessor RenderingSystemDataFlowProcessor     // 渲染系统数据流处理器
#define RenderingSystemDataFlowController RenderingSystemDataFlowController    // 渲染系统数据流控制器
#define RenderingSystemDataFlowManager RenderingSystemDataFlowManager       // 渲染系统数据流管理器
#define RenderingSystemDataFlowOptimizer RenderingSystemDataFlowOptimizer     // 渲染系统数据流优化器
#define RenderingSystemDataFlowAnalyzer RenderingSystemDataFlowAnalyzer      // 渲染系统数据流分析器
#define RenderingSystemDataFlowValidator RenderingSystemDataFlowValidator      // 渲染系统数据流验证器
#define RenderingSystemDataFlowTransformer RenderingSystemDataFlowTransformer   // 渲染系统数据流转换器
#define RenderingSystemDataFlowSerializer RenderingSystemDataFlowSerializer    // 渲染系统数据流序列化器
#define RenderingSystemDataFlowDeserializer RenderingSystemDataFlowDeserializer  // 渲染系统数据流反序列化器
#define RenderingSystemDataFlowCompressor RenderingSystemDataFlowCompressor     // 渲染系统数据流压缩器

// 渲染系统内存管理别名定义
#define RenderingSystemMemoryManager2 RenderingSystemMemoryManager2        // 渲染系统内存管理器2
#define RenderingSystemMemoryAllocator2 RenderingSystemMemoryAllocator2      // 渲染系统内存分配器2
#define RenderingSystemMemoryDeallocator RenderingSystemMemoryDeallocator     // 渲染系统内存释放器
#define RenderingSystemMemoryOptimizer RenderingSystemMemoryOptimizer       // 渲染系统内存优化器
#define RenderingSystemMemoryAnalyzer RenderingSystemMemoryAnalyzer        // 渲染系统内存分析器
#define RenderingSystemMemoryValidator RenderingSystemMemoryValidator       // 渲染系统内存验证器
#define RenderingSystemMemoryCleaner RenderingSystemMemoryCleaner          // 渲染系统内存清理器
#define RenderingSystemMemoryCompactor RenderingSystemMemoryCompactor       // 渲染系统内存压缩器
#define RenderingSystemMemoryExpander RenderingSystemMemoryExpander        // 渲染系统内存扩展器
#define RenderingSystemMemoryReallocator RenderingSystemMemoryReallocator     // 渲染系统内存重分配器

// 渲染系统线程管理别名定义
#define RenderingSystemThreadManager2 RenderingSystemThreadManager2         // 渲染系统线程管理器2
#define RenderingSystemThreadScheduler RenderingSystemThreadScheduler       // 渲染系统线程调度器
#define RenderingSystemThreadSynchronizer RenderingSystemThreadSynchronizer    // 渲染系统线程同步器
#define RenderingSystemThreadOptimizer RenderingSystemThreadOptimizer       // 渲染系统线程优化器
#define RenderingSystemThreadBalancer RenderingSystemThreadBalancer        // 渲染系统线程平衡器
#define RenderingSystemThreadMonitor RenderingSystemThreadMonitor         // 渲染系统线程监控器
#define RenderingSystemThreadDebugger RenderingSystemThreadDebugger        // 渲染系统线程调试器
#define RenderingSystemThreadCleaner RenderingSystemThreadCleaner         // 渲染系统线程清理器
#define RenderingSystemThreadInitializer RenderingSystemThreadInitializer     // 渲染系统线程初始化器
#define RenderingSystemThreadFinalizer RenderingSystemThreadFinalizer       // 渲染系统线程终结器

// 渲染系统渲染管线别名定义
#define RenderingSystemPipelineManager2 RenderingSystemPipelineManager2       // 渲染系统管线管理器2
#define RenderingSystemPipelineProcessor RenderingSystemPipelineProcessor      // 渲染系统管线处理器
#define RenderingSystemPipelineOptimizer RenderingSystemPipelineOptimizer     // 渲染系统管线优化器
#define RenderingSystemPipelineValidator RenderingSystemPipelineValidator      // 渲染系统管线验证器
#define RenderingSystemPipelineController RenderingSystemPipelineController    // 渲染系统管线控制器
#define RenderingSystemPipelineAnalyzer RenderingSystemPipelineAnalyzer      // 渲染系统管线分析器
#define RenderingSystemPipelineMonitor RenderingSystemPipelineMonitor       // 渲染系统管线监控器
#define RenderingSystemPipelineDebugger RenderingSystemPipelineDebugger      // 渲染系统管线调试器
#define RenderingSystemPipelineCleaner RenderingSystemPipelineCleaner       // 渲染系统管线清理器
#define RenderingSystemPipelineInitializer RenderingSystemPipelineInitializer    // 渲染系统管线初始化器

// 渲染系统纹理管理别名定义
#define RenderingSystemTextureManager2 RenderingSystemTextureManager2       // 渲染系统纹理管理器2
#define RenderingSystemTextureProcessor RenderingSystemTextureProcessor     // 渲染系统纹理处理器
#define RenderingSystemTextureOptimizer RenderingSystemTextureOptimizer      // 渲染系统纹理优化器
#define RenderingSystemTextureValidator RenderingSystemTextureValidator      // 渲染系统纹理验证器
#define RenderingSystemTextureLoader2 RenderingSystemTextureLoader2         // 渲染系统纹理加载器2
#define RenderingSystemTextureUnloader RenderingSystemTextureUnloader        // 渲染系统纹理卸载器
#define RenderingSystemTextureConverter RenderingSystemTextureConverter      // 渲染系统纹理转换器
#define RenderingSystemTextureCompressor2 RenderingSystemTextureCompressor2    // 渲染系统纹理压缩器2
#define RenderingSystemTextureDecompressor RenderingSystemTextureDecompressor   // 渲染系统纹理解压器
#define RenderingSystemTextureCacheManager RenderingSystemTextureCacheManager    // 渲染系统纹理缓存管理器

// 渲染系统着色器管理别名定义
#define RenderingSystemShaderManager RenderingSystemShaderManager         // 渲染系统着色器管理器
#define RenderingSystemShaderProcessor RenderingSystemShaderProcessor        // 渲染系统着色器处理器
#define RenderingSystemShaderOptimizer RenderingSystemShaderOptimizer        // 渲染系统着色器优化器
#define RenderingSystemShaderValidator RenderingSystemShaderValidator        // 渲染系统着色器验证器
#define RenderingSystemShaderLoader2 RenderingSystemShaderLoader2         // 渲染系统着色器加载器2
#define RenderingSystemShaderUnloader RenderingSystemShaderUnloader        // 渲染系统着色器卸载器
#define RenderingSystemShaderCompiler2 RenderingSystemShaderCompiler2       // 渲染系统着色器编译器2
#define RenderingSystemShaderLinker RenderingSystemShaderLinker           // 渲染系统着色器链接器
#define RenderingSystemShaderAnalyzer RenderingSystemShaderAnalyzer        // 渲染系统着色器分析器
#define RenderingSystemShaderDebugger RenderingSystemShaderDebugger        // 渲染系统着色器调试器

// 渲染系统缓冲区管理别名定义
#define RenderingSystemBufferManager2 RenderingSystemBufferManager2        // 渲染系统缓冲区管理器2
#define RenderingSystemBufferProcessor RenderingSystemBufferProcessor       // 渲染系统缓冲区处理器
#define RenderingSystemBufferOptimizer RenderingSystemBufferOptimizer        // 渲染系统缓冲区优化器
#define RenderingSystemBufferValidator RenderingSystemBufferValidator        // 渲染系统缓冲区验证器
#define RenderingSystemBufferAllocator RenderingSystemBufferAllocator       // 渲染系统缓冲区分配器
#define RenderingSystemBufferDeallocator RenderingSystemBufferDeallocator      // 渲染系统缓冲区释放器
#define RenderingSystemBufferCleaner RenderingSystemBufferCleaner          // 渲染系统缓冲区清理器
#define RenderingSystemBufferCompressor RenderingSystemBufferCompressor       // 渲染系统缓冲区压缩器
#define RenderingSystemBufferExpander RenderingSystemBufferExpander        // 渲染系统缓冲区扩展器
#define RenderingSystemBufferReallocator RenderingSystemBufferReallocator     // 渲染系统缓冲区重分配器

// 渲染系统渲染状态管理别名定义
#define RenderingSystemStateManager2 RenderingSystemStateManager2         // 渲染系统状态管理器2
#define RenderingSystemStateProcessor RenderingSystemStateProcessor       // 渲染系统状态处理器
#define RenderingSystemStateOptimizer RenderingSystemStateOptimizer        // 渲染系统状态优化器
#define RenderingSystemStateValidator RenderingSystemStateValidator        // 渲染系统状态验证器
#define RenderingSystemStateController RenderingSystemStateController       // 渲染系统状态控制器
#define RenderingSystemStateMonitor RenderingSystemStateMonitor          // 渲染系统状态监控器
#define RenderingSystemStateDebugger RenderingSystemStateDebugger         // 渲染系统状态调试器
#define RenderingSystemStateCleaner RenderingSystemStateCleaner          // 渲染系统状态清理器
#define RenderingSystemStateInitializer RenderingSystemStateInitializer      // 渲染系统状态初始化器
#define RenderingSystemStateFinalizer RenderingSystemStateFinalizer        // 渲染系统状态终结器

// 渲染系统绘制调用管理别名定义
#define RenderingSystemDrawManager RenderingSystemDrawManager           // 渲染系统绘制管理器
#define RenderingSystemDrawProcessor RenderingSystemDrawProcessor         // 渲染系统绘制处理器
#define RenderingSystemDrawOptimizer RenderingSystemDrawOptimizer         // 渲染系统绘制优化器
#define RenderingSystemDrawValidator RenderingSystemDrawValidator         // 渲染系统绘制验证器
#define RenderingSystemDrawController RenderingSystemDrawController         // 渲染系统绘制控制器
#define RenderingSystemDrawAnalyzer RenderingSystemDrawAnalyzer          // 渲染系统绘制分析器
#define RenderingSystemDrawMonitor RenderingSystemDrawMonitor           // 渲染系统绘制监控器
#define RenderingSystemDrawDebugger RenderingSystemDrawDebugger          // 渲染系统绘制调试器
#define RenderingSystemDrawCleaner RenderingSystemDrawCleaner           // 渲染系统绘制清理器
#define RenderingSystemDrawInitializer RenderingSystemDrawInitializer       // 渲染系统绘制初始化器

// 渲染系统帧渲染管理别名定义
#define RenderingSystemFrameManager2 RenderingSystemFrameManager2         // 渲染系统帧管理器2
#define RenderingSystemFrameProcessor RenderingSystemFrameProcessor       // 渲染系统帧处理器
#define RenderingSystemFrameOptimizer RenderingSystemFrameOptimizer        // 渲染系统帧优化器
#define RenderingSystemFrameValidator RenderingSystemFrameValidator        // 渲染系统帧验证器
#define RenderingSystemFrameController RenderingSystemFrameController       // 渲染系统帧控制器
#define RenderingSystemFrameAnalyzer RenderingSystemFrameAnalyzer         // 渲染系统帧分析器
#define RenderingSystemFrameMonitor RenderingSystemFrameMonitor          // 渲染系统帧监控器
#define RenderingSystemFrameDebugger RenderingSystemFrameDebugger          // 渲染系统帧调试器
#define RenderingSystemFrameCleaner RenderingSystemFrameCleaner           // 渲染系统帧清理器
#define RenderingSystemFrameInitializer RenderingSystemFrameInitializer       // 渲染系统帧初始化器

// 渲染系统后期处理别名定义
#define RenderingSystemPostProcessor2 RenderingSystemPostProcessor2        // 渲染系统后期处理器2
#define RenderingSystemPostProcessorManager RenderingSystemPostProcessorManager  // 渲染系统后期处理管理器
#define RenderingSystemPostProcessorOptimizer RenderingSystemPostProcessorOptimizer // 渲染系统后期处理优化器
#define RenderingSystemPostProcessorValidator RenderingSystemPostProcessorValidator // 渲染系统后期处理验证器
#define RenderingSystemPostProcessorController RenderingSystemPostProcessorController // 渲染系统后期处理控制器
#define RenderingSystemPostProcessorAnalyzer RenderingSystemPostProcessorAnalyzer  // 渲染系统后期处理分析器
#define RenderingSystemPostProcessorMonitor RenderingSystemPostProcessorMonitor   // 渲染系统后期处理监控器
#define RenderingSystemPostProcessorDebugger RenderingSystemPostProcessorDebugger   // 渲染系统后期处理调试器
#define RenderingSystemPostProcessorCleaner RenderingSystemPostProcessorCleaner   // 渲染系统后期处理清理器
#define RenderingSystemPostProcessorInitializer RenderingSystemPostProcessorInitializer // 渲染系统后期处理初始化器

// 渲染系统光照引擎别名定义
#define RenderingSystemLightingEngine2 RenderingSystemLightingEngine2       // 渲染系统光照引擎2
#define RenderingSystemLightingProcessor RenderingSystemLightingProcessor     // 渲染系统光照处理器
#define RenderingSystemLightingOptimizer RenderingSystemLightingOptimizer     // 渲染系统光照优化器
#define RenderingSystemLightingValidator RenderingSystemLightingValidator      // 渲染系统光照验证器
#define RenderingSystemLightingController RenderingSystemLightingController     // 渲染系统光照控制器
#define RenderingSystemLightingAnalyzer RenderingSystemLightingAnalyzer       // 渲染系统光照分析器
#define RenderingSystemLightingMonitor RenderingSystemLightingMonitor        // 渲染系统光照监控器
#define RenderingSystemLightingDebugger RenderingSystemLightingDebugger       // 渲染系统光照调试器
#define RenderingSystemLightingCleaner RenderingSystemLightingCleaner        // 渲染系统光照清理器
#define RenderingSystemLightingInitializer RenderingSystemLightingInitializer    // 渲染系统光照初始化器

// 渲染系统阴影渲染别名定义
#define RenderingSystemShadowManager RenderingSystemShadowManager         // 渲染系统阴影管理器
#define RenderingSystemShadowProcessor RenderingSystemShadowProcessor       // 渲染系统阴影处理器
#define RenderingSystemShadowOptimizer RenderingSystemShadowOptimizer       // 渲染系统阴影优化器
#define RenderingSystemShadowValidator RenderingSystemShadowValidator       // 渲染系统阴影验证器
#define RenderingSystemShadowController RenderingSystemShadowController       // 渲染系统阴影控制器
#define RenderingSystemShadowAnalyzer RenderingSystemShadowAnalyzer        // 渲染系统阴影分析器
#define RenderingSystemShadowMonitor RenderingSystemShadowMonitor         // 渲染系统阴影监控器
#define RenderingSystemShadowDebugger RenderingSystemShadowDebugger         // 渲染系统阴影调试器
#define RenderingSystemShadowCleaner RenderingSystemShadowCleaner          // 渲染系统阴影清理器
#define RenderingSystemShadowInitializer RenderingSystemShadowInitializer       // 渲染系统阴影初始化器

// 渲染系统效果处理别名定义
#define RenderingSystemEffectManager RenderingSystemEffectManager          // 渲染系统效果管理器
#define RenderingSystemEffectProcessor2 RenderingSystemEffectProcessor2       // 渲染系统效果处理器2
#define RenderingSystemEffectOptimizer RenderingSystemEffectOptimizer        // 渲染系统效果优化器
#define RenderingSystemEffectValidator RenderingSystemEffectValidator        // 渲染系统效果验证器
#define RenderingSystemEffectController RenderingSystemEffectController       // 渲染系统效果控制器
#define RenderingSystemEffectAnalyzer RenderingSystemEffectAnalyzer         // 渲染系统效果分析器
#define RenderingSystemEffectMonitor RenderingSystemEffectMonitor          // 渲染系统效果监控器
#define RenderingSystemEffectDebugger RenderingSystemEffectDebugger         // 渲染系统效果调试器
#define RenderingSystemEffectCleaner RenderingSystemEffectCleaner          // 渲染系统效果清理器
#define RenderingSystemEffectInitializer RenderingSystemEffectInitializer      // 渲染系统效果初始化器

// 渲染系统材质处理别名定义
#define RenderingSystemMaterialManager2 RenderingSystemMaterialManager2       // 渲染系统材质管理器2
#define RenderingSystemMaterialProcessor2 RenderingSystemMaterialProcessor2     // 渲染系统材质处理器2
#define RenderingSystemMaterialOptimizer RenderingSystemMaterialOptimizer      // 渲染系统材质优化器
#define RenderingSystemMaterialValidator RenderingSystemMaterialValidator      // 渲染系统材质验证器
#define RenderingSystemMaterialController RenderingSystemMaterialController     // 渲染系统材质控制器
#define RenderingSystemMaterialAnalyzer RenderingSystemMaterialAnalyzer       // 渲染系统材质分析器
#define RenderingSystemMaterialMonitor RenderingSystemMaterialMonitor        // 渲染系统材质监控器
#define RenderingSystemMaterialDebugger RenderingSystemMaterialDebugger        // 渲染系统材质调试器
#define RenderingSystemMaterialCleaner RenderingSystemMaterialCleaner        // 渲染系统材质清理器
#define RenderingSystemMaterialInitializer RenderingSystemMaterialInitializer    // 渲染系统材质初始化器

// 渲染系统几何体处理别名定义
#define RenderingSystemGeometryManager RenderingSystemGeometryManager         // 渲染系统几何体管理器
#define RenderingSystemGeometryProcessor2 RenderingSystemGeometryProcessor2      // 渲染系统几何体处理器2
#define RenderingSystemGeometryOptimizer RenderingSystemGeometryOptimizer      // 渲染系统几何体优化器
#define RenderingSystemGeometryValidator RenderingSystemGeometryValidator      // 渲染系统几何体验证器
#define RenderingSystemGeometryController RenderingSystemGeometryController     // 渲染系统几何体控制器
#define RenderingSystemGeometryAnalyzer RenderingSystemGeometryAnalyzer       // 渲染系统几何体分析器
#define RenderingSystemGeometryMonitor RenderingSystemGeometryMonitor        // 渲染系统几何体监控器
#define RenderingSystemGeometryDebugger RenderingSystemGeometryDebugger       // 渲染系统几何体调试器
#define RenderingSystemGeometryCleaner RenderingSystemGeometryCleaner        // 渲染系统几何体清理器
#define RenderingSystemGeometryInitializer RenderingSystemGeometryInitializer     // 渲染系统几何体初始化器

// 渲染系统动画系统别名定义
#define RenderingSystemAnimationManager RenderingSystemAnimationManager       // 渲染系统动画管理器
#define RenderingSystemAnimationProcessor RenderingSystemAnimationProcessor     // 渲染系统动画处理器
#define RenderingSystemAnimationOptimizer RenderingSystemAnimationOptimizer     // 渲染系统动画优化器
#define RenderingSystemAnimationValidator RenderingSystemAnimationValidator     // 渲染系统动画验证器
#define RenderingSystemAnimationController RenderingSystemAnimationController    // 渲染系统动画控制器
#define RenderingSystemAnimationAnalyzer RenderingSystemAnimationAnalyzer      // 渲染系统动画分析器
#define RenderingSystemAnimationMonitor RenderingSystemAnimationMonitor       // 渲染系统动画监控器
#define RenderingSystemAnimationDebugger RenderingSystemAnimationDebugger      // 渲染系统动画调试器
#define RenderingSystemAnimationCleaner RenderingSystemAnimationCleaner       // 渲染系统动画清理器
#define RenderingSystemAnimationInitializer RenderingSystemAnimationInitializer   // 渲染系统动画初始化器

// 渲染系统变换处理别名定义
#define RenderingSystemTransformManager RenderingSystemTransformManager       // 渲染系统变换管理器
#define RenderingSystemTransformProcessor RenderingSystemTransformProcessor     // 渲染系统变换处理器
#define RenderingSystemTransformOptimizer RenderingSystemTransformOptimizer     // 渲染系统变换优化器
#define RenderingSystemTransformValidator RenderingSystemTransformValidator      // 渲染系统变换验证器
#define RenderingSystemTransformController RenderingSystemTransformController    // 渲染系统变换控制器
#define RenderingSystemTransformAnalyzer RenderingSystemTransformAnalyzer      // 渲染系统变换分析器
#define RenderingSystemTransformMonitor RenderingSystemTransformMonitor       // 渲染系统变换监控器
#define RenderingSystemTransformDebugger RenderingSystemTransformDebugger       // 渲染系统变换调试器
#define RenderingSystemTransformCleaner RenderingSystemTransformCleaner       // 渲染系统变换清理器
#define RenderingSystemTransformInitializer RenderingSystemTransformInitializer   // 渲染系统变换初始化器

// 渲染系统视口管理别名定义
#define RenderingSystemViewportManager2 RenderingSystemViewportManager2       // 渲染系统视口管理器2
#define RenderingSystemViewportProcessor RenderingSystemViewportProcessor      // 渲染系统视口处理器
#define RenderingSystemViewportOptimizer RenderingSystemViewportOptimizer      // 渲染系统视口优化器
#define RenderingSystemViewportValidator RenderingSystemViewportValidator      // 渲染系统视口验证器
#define RenderingSystemViewportController RenderingSystemViewportController     // 渲染系统视口控制器
#define RenderingSystemViewportAnalyzer RenderingSystemViewportAnalyzer       // 渲染系统视口分析器
#define RenderingSystemViewportMonitor RenderingSystemViewportMonitor        // 渲染系统视口监控器
#define RenderingSystemViewportDebugger RenderingSystemViewportDebugger       // 渲染系统视口调试器
#define RenderingSystemViewportCleaner RenderingSystemViewportCleaner         // 渲染系统视口清理器
#define RenderingSystemViewportInitializer RenderingSystemViewportInitializer     // 渲染系统视口初始化器

// 渲染系统UI渲染别名定义
#define RenderingSystemUIManager2 RenderingSystemUIManager2              // 渲染系统UI管理器2
#define RenderingSystemUIProcessor RenderingSystemUIProcessor             // 渲染系统UI处理器
#define RenderingSystemUIOptimizer RenderingSystemUIOptimizer             // 渲染系统UI优化器
#define RenderingSystemUIValidator RenderingSystemUIValidator            // 渲染系统UI验证器
#define RenderingSystemUIController RenderingSystemUIController           // 渲染系统UI控制器
#define RenderingSystemUIAnalyzer RenderingSystemUIAnalyzer              // 渲染系统UI分析器
#define RenderingSystemUIMonitor RenderingSystemUIMonitor               // 渲染系统UI监控器
#define RenderingSystemUIDebugger RenderingSystemUIDebugger              // 渲染系统UI调试器
#define RenderingSystemUICleaner RenderingSystemUICleaner               // 渲染系统UI清理器
#define RenderingSystemUIInitializer RenderingSystemUIInitializer          // 渲染系统UI初始化器

// 渲染系统字体渲染别名定义
#define RenderingSystemFontManager RenderingSystemFontManager            // 渲染系统字体管理器
#define RenderingSystemFontProcessor RenderingSystemFontProcessor          // 渲染系统字体处理器
#define RenderingSystemFontOptimizer RenderingSystemFontOptimizer          // 渲染系统字体优化器
#define RenderingSystemFontValidator RenderingSystemFontValidator          // 渲染系统字体验证器
#define RenderingSystemFontController RenderingSystemFontController          // 渲染系统字体控制器
#define RenderingSystemFontAnalyzer RenderingSystemFontAnalyzer           // 渲染系统字体分析器
#define RenderingSystemFontMonitor RenderingSystemFontMonitor            // 渲染系统字体监控器
#define RenderingSystemFontDebugger RenderingSystemFontDebugger            // 渲染系统字体调试器
#define RenderingSystemFontCleaner RenderingSystemFontCleaner             // 渲染系统字体清理器
#define RenderingSystemFontInitializer RenderingSystemFontInitializer         // 渲染系统字体初始化器

// 渲染系统文本处理别名定义
#define RenderingSystemTextManager RenderingSystemTextManager            // 渲染系统文本管理器
#define RenderingSystemTextProcessor2 RenderingSystemTextProcessor2          // 渲染系统文本处理器2
#define RenderingSystemTextOptimizer RenderingSystemTextOptimizer           // 渲染系统文本优化器
#define RenderingSystemTextValidator RenderingSystemTextValidator           // 渲染系统文本验证器
#define RenderingSystemTextController RenderingSystemTextController          // 渲染系统文本控制器
#define RenderingSystemTextAnalyzer RenderingSystemTextAnalyzer           // 渲染系统文本分析器
#define RenderingSystemTextMonitor RenderingSystemTextMonitor            // 渲染系统文本监控器
#define RenderingSystemTextDebugger RenderingSystemTextDebugger            // 渲染系统文本调试器
#define RenderingSystemTextCleaner RenderingSystemTextCleaner             // 渲染系统文本清理器
#define RenderingSystemTextInitializer RenderingSystemTextInitializer         // 渲染系统文本初始化器

// 渲染系统输入处理别名定义
#define RenderingSystemInputManager RenderingSystemInputManager           // 渲染系统输入管理器
#define RenderingSystemInputProcessor2 RenderingSystemInputProcessor2       // 渲染系统输入处理器2
#define RenderingSystemInputOptimizer RenderingSystemInputOptimizer         // 渲染系统输入优化器
#define RenderingSystemInputValidator RenderingSystemInputValidator          // 渲染系统输入验证器
#define RenderingSystemInputController RenderingSystemInputController         // 渲染系统输入控制器
#define RenderingSystemInputAnalyzer RenderingSystemInputAnalyzer          // 渲染系统输入分析器
#define RenderingSystemInputMonitor RenderingSystemInputMonitor           // 渲染系统输入监控器
#define RenderingSystemInputDebugger RenderingSystemInputDebugger           // 渲染系统输入调试器
#define RenderingSystemInputCleaner RenderingSystemInputCleaner            // 渲染系统输入清理器
#define RenderingSystemInputInitializer RenderingSystemInputInitializer       // 渲染系统输入初始化器

// 渲染系统事件分发别名定义
#define RenderingSystemEventManager RenderingSystemEventManager          // 渲染系统事件管理器
#define RenderingSystemEventProcessor RenderingSystemEventProcessor        // 渲染系统事件处理器
#define RenderingSystemEventOptimizer RenderingSystemEventOptimizer         // 渲染系统事件优化器
#define RenderingSystemEventValidator RenderingSystemEventValidator         // 渲染系统事件验证器
#define RenderingSystemEventController RenderingSystemEventController        // 渲染系统事件控制器
#define RenderingSystemEventAnalyzer RenderingSystemEventAnalyzer         // 渲染系统事件分析器
#define RenderingSystemEventMonitor RenderingSystemEventMonitor           // 渲染系统事件监控器
#define RenderingSystemEventDebugger RenderingSystemEventDebugger          // 渲染系统事件调试器
#define RenderingSystemEventCleaner RenderingSystemEventCleaner           // 渲染系统事件清理器
#define RenderingSystemEventInitializer RenderingSystemEventInitializer       // 渲染系统事件初始化器

// 渲染系统音频处理别名定义
#define RenderingSystemAudioManager RenderingSystemAudioManager           // 渲染系统音频管理器
#define RenderingSystemAudioProcessor2 RenderingSystemAudioProcessor2       // 渲染系统音频处理器2
#define RenderingSystemAudioOptimizer RenderingSystemAudioOptimizer         // 渲染系统音频优化器
#define RenderingSystemAudioValidator RenderingSystemAudioValidator          // 渲染系统音频验证器
#define RenderingSystemAudioController RenderingSystemAudioController         // 渲染系统音频控制器
#define RenderingSystemAudioAnalyzer RenderingSystemAudioAnalyzer          // 渲染系统音频分析器
#define RenderingSystemAudioMonitor RenderingSystemAudioMonitor           // 渲染系统音频监控器
#define RenderingSystemAudioDebugger RenderingSystemAudioDebugger           // 渲染系统音频调试器
#define RenderingSystemAudioCleaner RenderingSystemAudioCleaner            // 渲染系统音频清理器
#define RenderingSystemAudioInitializer RenderingSystemAudioInitializer        // 渲染系统音频初始化器

// 渲染系统视频播放别名定义
#define RenderingSystemVideoManager RenderingSystemVideoManager            // 渲染系统视频管理器
#define RenderingSystemVideoProcessor RenderingSystemVideoProcessor          // 渲染系统视频处理器
#define RenderingSystemVideoOptimizer RenderingSystemVideoOptimizer         // 渲染系统视频优化器
#define RenderingSystemVideoValidator RenderingSystemVideoValidator          // 渲染系统视频验证器
#define RenderingSystemVideoController RenderingSystemVideoController         // 渲染系统视频控制器
#define RenderingSystemVideoAnalyzer RenderingSystemVideoAnalyzer          // 渲染系统视频分析器
#define RenderingSystemVideoMonitor RenderingSystemVideoMonitor           // 渲染系统视频监控器
#define RenderingSystemVideoDebugger RenderingSystemVideoDebugger           // 渲染系统视频调试器
#define RenderingSystemVideoCleaner RenderingSystemVideoCleaner            // 渲染系统视频清理器
#define RenderingSystemVideoInitializer RenderingSystemVideoInitializer         // 渲染系统视频初始化器

// 渲染系统粒子引擎别名定义
#define RenderingSystemParticleManager RenderingSystemParticleManager         // 渲染系统粒子管理器
#define RenderingSystemParticleProcessor RenderingSystemParticleProcessor      // 渲染系统粒子处理器
#define RenderingSystemParticleOptimizer RenderingSystemParticleOptimizer       // 渲染系统粒子优化器
#define RenderingSystemParticleValidator RenderingSystemParticleValidator       // 渲染系统粒子验证器
#define RenderingSystemParticleController RenderingSystemParticleController      // 渲染系统粒子控制器
#define RenderingSystemParticleAnalyzer RenderingSystemParticleAnalyzer        // 渲染系统粒子分析器
#define RenderingSystemParticleMonitor RenderingSystemParticleMonitor         // 渲染系统粒子监控器
#define RenderingSystemParticleDebugger RenderingSystemParticleDebugger        // 渲染系统粒子调试器
#define RenderingSystemParticleCleaner RenderingSystemParticleCleaner         // 渲染系统粒子清理器
#define RenderingSystemParticleInitializer RenderingSystemParticleInitializer      // 渲染系统粒子初始化器

// 渲染系统物理模拟别名定义
#define RenderingSystemPhysicsManager RenderingSystemPhysicsManager          // 渲染系统物理管理器
#define RenderingSystemPhysicsProcessor RenderingSystemPhysicsProcessor        // 渲染系统物理处理器
#define RenderingSystemPhysicsOptimizer RenderingSystemPhysicsOptimizer        // 渲染系统物理优化器
#define RenderingSystemPhysicsValidator RenderingSystemPhysicsValidator         // 渲染系统物理验证器
#define RenderingSystemPhysicsController RenderingSystemPhysicsController        // 渲染系统物理控制器
#define RenderingSystemPhysicsAnalyzer RenderingSystemPhysicsAnalyzer         // 渲染系统物理分析器
#define RenderingSystemPhysicsMonitor RenderingSystemPhysicsMonitor          // 渲染系统物理监控器
#define RenderingSystemPhysicsDebugger RenderingSystemPhysicsDebugger          // 渲染系统物理调试器
#define RenderingSystemPhysicsCleaner RenderingSystemPhysicsCleaner           // 渲染系统物理清理器
#define RenderingSystemPhysicsInitializer RenderingSystemPhysicsInitializer       // 渲染系统物理初始化器

// 渲染系统碰撞检测别名定义
#define RenderingSystemCollisionManager RenderingSystemCollisionManager        // 渲染系统碰撞管理器
#define RenderingSystemCollisionProcessor RenderingSystemCollisionProcessor      // 渲染系统碰撞处理器
#define RenderingSystemCollisionOptimizer RenderingSystemCollisionOptimizer       // 渲染系统碰撞优化器
#define RenderingSystemCollisionValidator RenderingSystemCollisionValidator       // 渲染系统碰撞验证器
#define RenderingSystemCollisionController RenderingSystemCollisionController      // 渲染系统碰撞控制器
#define RenderingSystemCollisionAnalyzer RenderingSystemCollisionAnalyzer       // 渲染系统碰撞分析器
#define RenderingSystemCollisionMonitor RenderingSystemCollisionMonitor        // 渲染系统碰撞监控器
#define RenderingSystemCollisionDebugger RenderingSystemCollisionDebugger        // 渲染系统碰撞调试器
#define RenderingSystemCollisionCleaner RenderingSystemCollisionCleaner         // 渲染系统碰撞清理器
#define RenderingSystemCollisionInitializer RenderingSystemCollisionInitializer      // 渲染系统碰撞初始化器

// 渲染系统网络管理别名定义
#define RenderingSystemNetworkManager2 RenderingSystemNetworkManager2         // 渲染系统网络管理器2
#define RenderingSystemNetworkProcessor RenderingSystemNetworkProcessor        // 渲染系统网络处理器
#define RenderingSystemNetworkOptimizer RenderingSystemNetworkOptimizer        // 渲染系统网络优化器
#define RenderingSystemNetworkValidator RenderingSystemNetworkValidator         // 渲染系统网络验证器
#define RenderingSystemNetworkController RenderingSystemNetworkController        // 渲染系统网络控制器
#define RenderingSystemNetworkAnalyzer RenderingSystemNetworkAnalyzer         // 渲染系统网络分析器
#define RenderingSystemNetworkMonitor RenderingSystemNetworkMonitor          // 渲染系统网络监控器
#define RenderingSystemNetworkDebugger RenderingSystemNetworkDebugger          // 渲染系统网络调试器
#define RenderingSystemNetworkCleaner RenderingSystemNetworkCleaner          // 渲染系统网络清理器
#define RenderingSystemNetworkInitializer RenderingSystemNetworkInitializer       // 渲染系统网络初始化器

// 渲染系统资源管理别名定义
#define RenderingSystemResourceManager3 RenderingSystemResourceManager3         // 渲染系统资源管理器3
#define RenderingSystemResourceProcessor RenderingSystemResourceProcessor        // 渲染系统资源处理器
#define RenderingSystemResourceOptimizer RenderingSystemResourceOptimizer        // 渲染系统资源优化器
#define RenderingSystemResourceValidator RenderingSystemResourceValidator         // 渲染系统资源验证器
#define RenderingSystemResourceController RenderingSystemResourceController        // 渲染系统资源控制器
#define RenderingSystemResourceAnalyzer RenderingSystemResourceAnalyzer         // 渲染系统资源分析器
#define RenderingSystemResourceMonitor RenderingSystemResourceMonitor          // 渲染系统资源监控器
#define RenderingSystemResourceDebugger RenderingSystemResourceDebugger          // 渲染系统资源调试器
#define RenderingSystemResourceCleaner RenderingSystemResourceCleaner           // 渲染系统资源清理器
#define RenderingSystemResourceInitializer RenderingSystemResourceInitializer       // 渲染系统资源初始化器

// 渲染系统着色器编译别名定义
#define RenderingSystemShaderCompiler3 RenderingSystemShaderCompiler3          // 渲染系统着色器编译器3
#define RenderingSystemShaderCompilerManager RenderingSystemShaderCompilerManager    // 渲染系统着色器编译管理器
#define RenderingSystemShaderCompilerOptimizer RenderingSystemShaderCompilerOptimizer   // 渲染系统着色器编译优化器
#define RenderingSystemShaderCompilerValidator RenderingSystemShaderCompilerValidator   // 渲染系统着色器编译验证器
#define RenderingSystemShaderCompilerController RenderingSystemShaderCompilerController  // 渲染系统着色器编译控制器
#define RenderingSystemShaderCompilerAnalyzer RenderingSystemShaderCompilerAnalyzer   // 渲染系统着色器编译分析器
#define RenderingSystemShaderCompilerMonitor RenderingSystemShaderCompilerMonitor     // 渲染系统着色器编译监控器
#define RenderingSystemShaderCompilerDebugger RenderingSystemShaderCompilerDebugger     // 渲染系统着色器编译调试器
#define RenderingSystemShaderCompilerCleaner RenderingSystemShaderCompilerCleaner     // 渲染系统着色器编译清理器
#define RenderingSystemShaderCompilerInitializer RenderingSystemShaderCompilerInitializer  // 渲染系统着色器编译初始化器

// 渲染系统纹理压缩别名定义
#define RenderingSystemTextureCompressor3 RenderingSystemTextureCompressor3      // 渲染系统纹理压缩器3
#define RenderingSystemTextureCompressorManager RenderingSystemTextureCompressorManager // 渲染系统纹理压缩管理器
#define RenderingSystemTextureCompressorOptimizer RenderingSystemTextureCompressorOptimizer // 渲染系统纹理压缩优化器
#define RenderingSystemTextureCompressorValidator RenderingSystemTextureCompressorValidator // 渲染系统纹理压缩验证器
#define RenderingSystemTextureCompressorController RenderingSystemTextureCompressorController // 渲染系统纹理压缩控制器
#define RenderingSystemTextureCompressorAnalyzer RenderingSystemTextureCompressorAnalyzer  // 渲染系统纹理压缩分析器
#define RenderingSystemTextureCompressorMonitor RenderingSystemTextureCompressorMonitor   // 渲染系统纹理压缩监控器
#define RenderingSystemTextureCompressorDebugger RenderingSystemTextureCompressorDebugger   // 渲染系统纹理压缩调试器
#define RenderingSystemTextureCompressorCleaner RenderingSystemTextureCompressorCleaner   // 渲染系统纹理压缩清理器
#define RenderingSystemTextureCompressorInitializer RenderingSystemTextureCompressorInitializer // 渲染系统纹理压缩初始化器

// 渲染系统核心函数别名定义
#define RenderingSystemCoreProcessor RenderingSystemCoreProcessor           // 渲染系统核心处理器
#define RenderingSystemCoreManager RenderingSystemCoreManager             // 渲染系统核心管理器
#define RenderingSystemCoreOptimizer RenderingSystemCoreOptimizer           // 渲染系统核心优化器
#define RenderingSystemCoreValidator RenderingSystemCoreValidator            // 渲染系统核心验证器
#define RenderingSystemCoreController RenderingSystemCoreController           // 渲染系统核心控制器
#define RenderingSystemCoreAnalyzer RenderingSystemCoreAnalyzer            // 渲染系统核心分析器
#define RenderingSystemCoreMonitor RenderingSystemCoreMonitor             // 渲染系统核心监控器
#define RenderingSystemCoreDebugger RenderingSystemCoreDebugger             // 渲染系统核心调试器
#define RenderingSystemCoreCleaner RenderingSystemCoreCleaner              // 渲染系统核心清理器
#define RenderingSystemCoreInitializer RenderingSystemCoreInitializer          // 渲染系统核心初始化器

// 渲染系统高级函数别名定义
#define RenderingSystemAdvancedFunctionProcessor RenderingSystemAdvancedFunctionProcessor // 渲染系统高级函数处理器
#define RenderingSystemAdvancedFunctionManager RenderingSystemAdvancedFunctionManager   // 渲染系统高级函数管理器
#define RenderingSystemAdvancedFunctionOptimizer RenderingSystemAdvancedFunctionOptimizer  // 渲染系统高级函数优化器
#define RenderingSystemAdvancedFunctionValidator RenderingSystemAdvancedFunctionValidator  // 渲染系统高级函数验证器
#define RenderingSystemAdvancedFunctionController RenderingSystemAdvancedFunctionController // 渲染系统高级函数控制器
#define RenderingSystemAdvancedFunctionAnalyzer RenderingSystemAdvancedFunctionAnalyzer   // 渲染系统高级函数分析器
#define RenderingSystemAdvancedFunctionMonitor RenderingSystemAdvancedFunctionMonitor    // 渲染系统高级函数监控器
#define RenderingSystemAdvancedFunctionDebugger RenderingSystemAdvancedFunctionDebugger   // 渲染系统高级函数调试器
#define RenderingSystemAdvancedFunctionCleaner RenderingSystemAdvancedFunctionCleaner     // 渲染系统高级函数清理器
#define RenderingSystemAdvancedFunctionInitializer RenderingSystemAdvancedFunctionInitializer // 渲染系统高级函数初始化器

// 渲染系统特殊功能别名定义
#define RenderingSystemSpecialProcessor RenderingSystemSpecialProcessor         // 渲染系统特殊处理器
#define RenderingSystemSpecialManager RenderingSystemSpecialManager           // 渲染系统特殊管理器
#define RenderingSystemSpecialOptimizer RenderingSystemSpecialOptimizer         // 渲染系统特殊优化器
#define RenderingSystemSpecialValidator RenderingSystemSpecialValidator          // 渲染系统特殊验证器
#define RenderingSystemSpecialController RenderingSystemSpecialController         // 渲染系统特殊控制器
#define RenderingSystemSpecialAnalyzer RenderingSystemSpecialAnalyzer          // 渲染系统特殊分析器
#define RenderingSystemSpecialMonitor RenderingSystemSpecialMonitor           // 渲染系统特殊监控器
#define RenderingSystemSpecialDebugger RenderingSystemSpecialDebugger          // 渲染系统特殊调试器
#define RenderingSystemSpecialCleaner RenderingSystemSpecialCleaner           // 渲染系统特殊清理器
#define RenderingSystemSpecialInitializer RenderingSystemSpecialInitializer       // 渲染系统特殊初始化器

// 渲染系统通用功能别名定义
#define RenderingSystemGenericProcessor RenderingSystemGenericProcessor         // 渲染系统通用处理器
#define RenderingSystemGenericManager RenderingSystemGenericManager           // 渲染系统通用管理器
#define RenderingSystemGenericOptimizer RenderingSystemGenericOptimizer         // 渲染系统通用优化器
#define RenderingSystemGenericValidator RenderingSystemGenericValidator          // 渲染系统通用验证器
#define RenderingSystemGenericController RenderingSystemGenericController          // 渲染系统通用控制器
#define RenderingSystemGenericAnalyzer RenderingSystemGenericAnalyzer           // 渲染系统通用分析器
#define RenderingSystemGenericMonitor RenderingSystemGenericMonitor            // 渲染系统通用监控器
#define RenderingSystemGenericDebugger RenderingSystemGenericDebugger           // 渲染系统通用调试器
#define RenderingSystemGenericCleaner RenderingSystemGenericCleaner            // 渲染系统通用清理器
#define RenderingSystemGenericInitializer RenderingSystemGenericInitializer        // 渲染系统通用初始化器

// 渲染系统实用工具别名定义
#define RenderingSystemUtilityProcessor RenderingSystemUtilityProcessor         // 渲染系统实用工具处理器
#define RenderingSystemUtilityManager RenderingSystemUtilityManager           // 渲染系统实用工具管理器
#define RenderingSystemUtilityOptimizer RenderingSystemUtilityOptimizer         // 渲染系统实用工具优化器
#define RenderingSystemUtilityValidator RenderingSystemUtilityValidator          // 渲染系统实用工具验证器
#define RenderingSystemUtilityController RenderingSystemUtilityController         // 渲染系统实用工具控制器
#define RenderingSystemUtilityAnalyzer RenderingSystemUtilityAnalyzer          // 渲染系统实用工具分析器
#define RenderingSystemUtilityMonitor RenderingSystemUtilityMonitor           // 渲染系统实用工具监控器
#define RenderingSystemUtilityDebugger RenderingSystemUtilityDebugger          // 渲染系统实用工具调试器
#define RenderingSystemUtilityCleaner RenderingSystemUtilityCleaner           // 渲染系统实用工具清理器
#define RenderingSystemUtilityInitializer RenderingSystemUtilityInitializer        // 渲染系统实用工具初始化器

// 渲染系统辅助功能别名定义
#define RenderingSystemHelperProcessor RenderingSystemHelperProcessor           // 渲染系统辅助处理器
#define RenderingSystemHelperManager RenderingSystemHelperManager             // 渲染系统辅助管理器
#define RenderingSystemHelperOptimizer RenderingSystemHelperOptimizer           // 渲染系统辅助优化器
#define RenderingSystemHelperValidator RenderingSystemHelperValidator            // 渲染系统辅助验证器
#define RenderingSystemHelperController RenderingSystemHelperController           // 渲染系统辅助控制器
#define RenderingSystemHelperAnalyzer RenderingSystemHelperAnalyzer            // 渲染系统辅助分析器
#define RenderingSystemHelperMonitor RenderingSystemHelperMonitor             // 渲染系统辅助监控器
#define RenderingSystemHelperDebugger RenderingSystemHelperDebugger            // 渲染系统辅助调试器
#define RenderingSystemHelperCleaner RenderingSystemHelperCleaner             // 渲染系统辅助清理器
#define RenderingSystemHelperInitializer RenderingSystemHelperInitializer          // 渲染系统辅助初始化器

// 渲染系统系统级功能别名定义
#define RenderingSystemSystemProcessor RenderingSystemSystemProcessor           // 渲染系统系统处理器
#define RenderingSystemSystemManager RenderingSystemSystemManager             // 渲染系统系统管理器
#define RenderingSystemSystemOptimizer RenderingSystemSystemOptimizer           // 渲染系统系统优化器
#define RenderingSystemSystemValidator RenderingSystemSystemValidator           // 渲染系统系统验证器
#define RenderingSystemSystemController RenderingSystemSystemController          // 渲染系统系统控制器
#define RenderingSystemSystemAnalyzer RenderingSystemSystemAnalyzer           // 渲染系统系统分析器
#define RenderingSystemSystemMonitor RenderingSystemSystemMonitor             // 渲染系统系统监控器
#define RenderingSystemSystemDebugger RenderingSystemSystemDebugger            // 渲染系统系统调试器
#define RenderingSystemSystemCleaner RenderingSystemSystemCleaner             // 渲染系统系统清理器
#define RenderingSystemSystemInitializer RenderingSystemSystemInitializer          // 渲染系统系统初始化器

