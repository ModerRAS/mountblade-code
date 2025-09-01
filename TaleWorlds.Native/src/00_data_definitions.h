#ifndef DATA_DEFINITIONS_H
#define DATA_DEFINITIONS_H

/**
 * @file 00_data_definitions.h
 * @brief Mount & Blade 游戏引擎数据定义和系统初始化函数
 * 
 * 本文件包含游戏引擎的核心数据结构定义、系统模块初始化函数
 * 以及各种配置缓冲区的管理。所有变量和函数都使用语义化的命名
 * 以提高代码的可读性和维护性。
 */

// 全局系统数据指针
void* GlobalSystemData;
// 未知全局数据指针
void* GlobalUnknownData;

// 系统内存池 - 用于动态内存分配
void* SystemMemoryPool;

// 系统配置缓冲区组 - 用于存储各种系统配置数据
char SystemConfigBufferA[0x40];
char SystemConfigBufferB[0x40];
char SystemConfigBufferC[0x40];
char SystemConfigBufferD[0x40];
char SystemConfigBufferE[0x40];
char SystemConfigBufferF[0x40];
char SystemConfigBufferG[0x40];
char SystemConfigBufferH[0x40];
char SystemConfigBufferI[0x40];
char SystemConfigBufferJ[0x40];

/**
 * 初始化渲染系统模块
 * 设置渲染系统所需的全局数据结构和状态标志
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeRenderingSystem(void)
{
  int64_t CallbackResult;
  GlobalRenderingSystemEnabled = 1;
  GlobalRenderingSystemFlags = 0;
  GlobalRenderingSystemMaxValue = 0x7fffffffffffffff;
  GlobalRenderingSystemStatus = 0;
  CallbackResult = RegisterSystemCallback(RenderingSystemCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化物理引擎模块
 * 设置物理引擎所需的全局数据结构和碰撞检测参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializePhysicsEngine(void)
{
  int64_t CallbackResult;
  GlobalPhysicsEngineData = &GlobalUnknownData;
  GlobalPhysicsEngineConfig = &GlobalPhysicsEngineState;
  GlobalPhysicsEngineFlags = 0;
  GlobalPhysicsEngineState = 0;
  CallbackResult = RegisterSystemCallback(PhysicsEngineCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化音频系统模块
 * 设置音频系统所需的全局数据结构和音效参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeAudioSystem(void)
{
  int64_t CallbackResult;
  GlobalAudioSystemData = &GlobalUnknownData;
  GlobalAudioSystemConfig = &GlobalAudioSystemState;
  GlobalAudioSystemFlags = 0;
  GlobalAudioSystemState = 0;
  CallbackResult = RegisterSystemCallback(AudioSystemCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化输入系统模块
 * 设置输入系统所需的全局数据结构和控制器映射
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeInputSystem(void)
{
  int64_t CallbackResult;
  GlobalInputSystemData = &GlobalUnknownInputData;
  GlobalInputSystemConfig = &GlobalInputSystemState;
  GlobalInputSystemFlags = 0;
  GlobalInputSystemState = 0;
  CallbackResult = RegisterSystemCallback(InputSystemCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化网络系统模块
 * 设置网络系统所需的全局数据结构和连接参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeNetworkSystem(void)
{
  int64_t CallbackResult;
  GlobalNetworkSystemData = &GlobalUnknownNetworkData;
  GlobalNetworkSystemConfig = &GlobalNetworkSystemState;
  GlobalNetworkSystemFlags = 0;
  GlobalNetworkSystemState = 0;
  CallbackResult = RegisterSystemCallback(NetworkSystemCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化文件系统模块
 * 设置文件系统所需的全局数据结构和IO缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeFileSystem(void)
{
  int64_t CallbackResult;
  GlobalFileSystemData = &GlobalUnknownData;
  GlobalFileSystemConfig = &GlobalFileSystemState;
  GlobalFileSystemFlags = 0;
  GlobalFileSystemState = 0;
  CallbackResult = RegisterSystemCallback(FileSystemCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化内存管理模块
 * 设置内存管理所需的全局数据结构和内存池
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeMemoryManager(void)
{
  int64_t CallbackResult;
  GlobalMemoryManagerData = &GlobalUnknownData;
  GlobalMemoryManagerConfig = &GlobalMemoryManagerState;
  GlobalMemoryManagerFlags = 0;
  GlobalMemoryManagerState = 0;
  CallbackResult = RegisterSystemCallback(MemoryManagerCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化渲染线程同步机制
 * 设置渲染系统所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID参数
 * @param syncPtr 同步对象指针
 * @param mutexType 互斥锁类型
 * @param mutexAttr 互斥锁属性
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeRenderingThreadSync(uint64_t threadId, uint64_t syncPtr, uint64_t mutexType, uint64_t mutexAttr)
{
  int64_t CallbackResult;
  uint64_t renderingMutexFlags;
  renderingMutexFlags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(RENDER_MUTEX_ADDRESS, 2, mutexType, mutexAttr, renderingMutexFlags);
  RenderingSyncState = 0;
  CallbackResult = RegisterSystemCallback(RenderingThreadSyncCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化物理引擎同步机制
 * 设置物理引擎所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID参数
 * @param syncPtr 同步对象指针
 * @param mutexType 互斥锁类型
 * @param mutexAttr 互斥锁属性
 * @return 初始化成功返回0，失败返回-1
 */
int InitializePhysicsEngineSync(uint64_t threadId, uint64_t syncPtr, uint64_t mutexType, uint64_t mutexAttr)
{
  int64_t CallbackResult;
  uint64_t physicsMutexFlags;
  physicsMutexFlags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(PHYSICS_MUTEX_ADDRESS, 2, mutexType, mutexAttr, physicsMutexFlags);
  PhysicsSyncState = 0;
  CallbackResult = RegisterSystemCallback(PhysicsEngineSyncCallback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化条件变量和互斥锁C
 * 设置线程同步所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID，用于标识当前线程
 * @param syncPtr 同步对象指针，指向同步数据结构
 * @param mutexType 互斥锁类型，定义互斥锁的行为特性
 * @param mutexAttr 互斥锁属性，包含互斥锁的配置参数
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeConditionMutexC(uint64_t threadId,uint64_t syncPtr,uint64_t mutexType,uint64_t mutexAttr)
{
  int64_t result;
  uint64_t ConditionMutexFlags;
  ConditionMutexFlags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c911e8,2,mutexType,mutexAttr,ConditionMutexFlags);
  GlobalConditionMutexCStatus = 0;
  result = RegisterSystemCallback(InitializeConditionMutexC_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化条件变量和互斥锁D
 * 设置线程同步所需的条件变量和互斥锁
 * 
 * @param threadId 线程ID，用于标识当前线程
 * @param syncPtr 同步对象指针，指向同步数据结构
 * @param mutexType 互斥锁类型，定义互斥锁的行为特性
 * @param mutexAttr 互斥锁属性，包含互斥锁的配置参数
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeConditionMutexD(uint64_t threadId,uint64_t syncPtr,uint64_t mutexType,uint64_t mutexAttr)
{
  int64_t result;
  uint64_t ConditionMutexDFlags;
  ConditionMutexDFlags = 0xfffffffffffffffe;
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(0x180c91288,2,mutexType,mutexAttr,ConditionMutexDFlags);
  GlobalConditionMutexDStatus = 0;
  result = RegisterSystemCallback(InitializeConditionMutexD_Callback);
  return (result != 0) - 1;
}

/**
 * 初始化字符串处理器A
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorA(void)
{
  int64_t result;
  uint64_t StringProcessorAFlags;
  StringProcessorA_Base = &UnknownData1809fdc18;
  StringProcessorA_BufferPtr = &StringProcessorA_Buffer;
  StringProcessorA_Buffer = 0;
  StringProcessorA_Length = 0xd;
  strcpy_s(&StringProcessorA_Buffer,0x10,&UnknownData180a004e8,stringProcessorAFlags,0xfffffffffffffffe);
  result = RegisterSystemCallback(InitializeStringProcessorA_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化字符串处理器B
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorB(void)
{
  int64_t result;
  uint64_t stringProcessorBFlags;
  StringProcessorB_Base = &UnknownData1809fdc18;
  StringProcessorB_BufferPtr = &StringProcessorB_Buffer;
  StringProcessorB_Buffer = 0;
  StringProcessorB_Length = 0xf;
  strcpy_s(&StringProcessorB_Buffer,0x10,&UnknownData180a004f8,stringProcessorBFlags,0xfffffffffffffffe);
  result = RegisterSystemCallback(InitializeStringProcessorB_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化字符串处理器C
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorC(void)
{
  int64_t result;
  uint64_t stringProcessorCFlags;
  g_stringProcessorC_Base = &unknownData_1809fdc18;
  g_stringProcessorC_BufferPtr = &g_stringProcessorC_Buffer;
  g_stringProcessorC_Buffer = 0;
  g_stringProcessorC_Length = 0xf;
  strcpy_s(&g_stringProcessorC_Buffer,0x10,&unknownData_180a00508,stringProcessorCFlags,0xfffffffffffffffe);
  result = RegisterSystemCallback(InitializeStringProcessorC_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化字符串处理器D
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorD(void)
{
  int64_t result;
  uint64_t stringProcessorDFlags;
  g_stringProcessorD_Base = &unknownData_1809fdc18;
  g_stringProcessorD_BufferPtr = &g_stringProcessorD_Buffer;
  g_stringProcessorD_Buffer = 0;
  g_stringProcessorD_Length = 0xd;
  strcpy_s(&g_stringProcessorD_Buffer,0x10,&unknownData_180a00518,stringProcessorDFlags,0xfffffffffffffffe);
  result = RegisterSystemCallback(InitializeStringProcessorD_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化字符串处理器E
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorE(void)
{
  int64_t result;
  uint64_t stringProcessorEFlags;
  g_stringProcessorE_Base = &unknownData_1809fdc18;
  g_stringProcessorE_BufferPtr = &g_stringProcessorE_Buffer;
  g_stringProcessorE_Buffer = 0;
  g_stringProcessorE_Length = 0xc;
  strcpy_s(&g_stringProcessorE_Buffer,0x10,&unknownData_180a00528,stringProcessorEFlags,0xfffffffffffffffe);
  result = RegisterSystemCallback(InitializeStringProcessorE_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化字符串处理器F
 * 设置字符串处理所需的数据结构和回调
 */
int InitializeStringProcessorF(void)
{
  int64_t result;
  uint64_t stringFlags;
  g_stringProcessorF_Base = &unknownData_1809fdc18;
  globalData_180bf6658 = &globalData_180bf6668;
  globalData_180bf6668 = 0;
  globalData_180bf6660 = 4;
  strcpy_s(&globalData_180bf6668,0x10,&unknownData_180a00538,stringFlags,0xfffffffffffffffe);
  result = RegisterSystemCallback(InitializeStringProcessorF_Callback);
  return (result != 0) - 1;
}
/**
 * 初始化模块配置A
 * 设置模块A所需的全局数据结构和配置参数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeModuleConfigurationA(void)
{
  int64_t initializationResult;
  uint64_t configurationFlags;
  g_stringProcessorDataPointerA = &SystemStringDataConstantB;
  g_stringProcessorConfigPointerA = &STRING_PROCESSOR_CONFIG_A;
  STRING_PROCESSOR_CONFIG_A = 0;
  g_stringProcessorBufferSizeA = 5;
  strcpy_s(&STRING_PROCESSOR_CONFIG_A,0x10,&UNK_180a00540,in_R9,0xfffffffffffffffe);
  longlong CallbackResult = RegisterSystemModule(InitializeSystemModuleA);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器G
 * 设置字符串处理G所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorG(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorGFlags;
  g_stringProcessorDataPointerB = &SystemStringDataConstantB;
  g_stringProcessorConfigPointerB = &STRING_PROCESSOR_CONFIG_B;
  STRING_PROCESSOR_CONFIG_B = 0;
  g_stringProcessorBufferSizeB = 5;
  strcpy_s(&STRING_PROCESSOR_CONFIG_B,0x10,&UNK_180a00548,stringProcessorGFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemModule(InitializeSystemModuleB);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器H
 * 设置字符串处理H所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorH(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorHFlags;
  g_stringProcessorDataPointerC = &SystemStringMemoryTemplate;
  g_stringProcessorConfigPointerC = &STRING_PROCESSOR_CONFIG_C;
  STRING_PROCESSOR_CONFIG_C = 0;
  g_stringProcessorBufferSizeC = 0xd;
  strcpy_s(&STRING_PROCESSOR_CONFIG_C,0x20,&UNK_180a01300,stringProcessorHFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemModule(InitializeStringProcessorModule);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器I
 * 设置字符串处理I所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorI(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorIFlags;
  g_stringProcessorDataPointerD = &SystemStringMemoryTemplate;
  g_stringProcessorConfigPointerD = &STRING_PROCESSOR_CONFIG_D;
  STRING_PROCESSOR_CONFIG_D = 0;
  g_stringProcessorBufferSizeD = 9;
  strcpy_s(&STRING_PROCESSOR_CONFIG_D,0x20,&UNK_180a01330,stringProcessorIFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemModule(InitializeNetworkModule);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化配置互斥锁
 * 设置系统配置所需的互斥锁和同步机制
 * 
 * @param threadId 线程ID参数
 * @param syncPtr 同步对象指针
 * @param mutexType 互斥锁类型
 * @param mutexAttr 互斥锁属性
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeConfigurationMutex(uint64_t threadId,uint64_t syncPtr,uint64_t mutexType,uint64_t mutexAttr)
{
  int64_t CallbackResult;
  _Mtx_init_in_situ(0x180c91970,0x102,mutexType,mutexAttr,0xfffffffffffffffe);
  CallbackResult = RegisterSystemModule(InitializeCoreGameEngine);
  return (CallbackResult != 0) - 1;
}
  CONFIG_DATA_BUFFER_A = 0;
  g_configDataBufferSizeA = 0x13;
  strcpy_s(&CONFIG_DATA_BUFFER_A,0x40,&UNK_180a0cb48,in_R9,0xfffffffffffffffe);
  g_configDataPointerA = &SystemMemoryPool;
  g_configDataPointerB = &CONFIG_DATA_BUFFER_B;
  CONFIG_DATA_BUFFER_B = 0;
  g_configDataBufferSizeB = 0xd;
  strcpy_s(&CONFIG_DATA_BUFFER_B,0x40,&UNK_180a0cb80);
  g_configDataPointerC = &SystemMemoryPool;
  g_configDataPointerD = &CONFIG_DATA_BUFFER_C;
  CONFIG_DATA_BUFFER_C = 0;
  g_configDataBufferSizeC = 0x17;
  strcpy_s(&CONFIG_DATA_BUFFER_C,0x40,&UNK_180a0cb90);
  g_configDataPointerE = &SystemMemoryPool;
  g_configDataPointerF = &CONFIG_DATA_BUFFER_D;
  CONFIG_DATA_BUFFER_D = 0;
  g_configDataBufferSizeD = 0xd;
  strcpy_s(&CONFIG_DATA_BUFFER_D,0x40,&UNK_180a0cb60);
  g_configDataPointerG = &SystemMemoryPool;
  g_configDataPointerH = &SystemConfigBufferA;
  SystemConfigBufferA = 0;
  g_configDataBufferSizeE = 0xc;
  strcpy_s(&SystemConfigBufferA,0x40,&UNK_180a0cb70);
  _DAT_180bf6908 = &SystemMemoryPool;
  _DAT_180bf6910 = &SystemConfigBufferB;
  SystemConfigBufferB = 0;
  _DAT_180bf6918 = 0xc;
  strcpy_s(&SystemConfigBufferB,0x40,&UNK_180a0cbe0);
  _DAT_180bf6960 = &SystemMemoryPool;
  _DAT_180bf6968 = &SystemConfigBufferC;
  SystemConfigBufferC = 0;
  _DAT_180bf6970 = 0x10;
  strcpy_s(&SystemConfigBufferC,0x40,&UNK_180a0cbf0);
  _DAT_180bf69b8 = &SystemMemoryPool;
  _DAT_180bf69c0 = &SystemConfigBufferD;
  SystemConfigBufferD = 0;
  _DAT_180bf69c8 = 0x1f;
  strcpy_s(&SystemConfigBufferD,0x40,&UNK_180a0cba8);
  _DAT_180bf6a10 = &SystemMemoryPool;
  _DAT_180bf6a18 = &SystemConfigBufferE;
  SystemConfigBufferE = 0;
  _DAT_180bf6a20 = 0x17;
  strcpy_s(&SystemConfigBufferE,0x40,&UNK_180a05740);
  _DAT_180bf6a68 = &SystemMemoryPool;
  _DAT_180bf6a70 = &SystemConfigBufferF;
  SystemConfigBufferF = 0;
  _DAT_180bf6a78 = 0x13;
  strcpy_s(&SystemConfigBufferF,0x40,&UNK_180a0cbc8);
  _DAT_180bf6ac0 = &SystemMemoryPool;
  _DAT_180bf6ac8 = &SystemConfigBufferG;
  SystemConfigBufferG = 0;
  _DAT_180bf6ad0 = 0x14;
  strcpy_s(&SystemConfigBufferG,0x40,&UNK_180a0cc30);
  _DAT_180bf6b18 = &SystemMemoryPool;
  _DAT_180bf6b20 = &SystemConfigBufferH;
  SystemConfigBufferH = 0;
  _DAT_180bf6b28 = 0;
  strcpy_s(&SystemConfigBufferH,0x40,&DAT_18098bc73);
  _DAT_180bf6b70 = &SystemMemoryPool;
  _DAT_180bf6b78 = &SystemConfigBufferI;
  SystemConfigBufferI = 0;
  _DAT_180bf6b80 = 0x1b;
  strcpy_s(&SystemConfigBufferI,0x40,&UNK_180a0cc48);
  _DAT_180bf6bc8 = &SystemMemoryPool;
  _DAT_180bf6bd0 = &SystemConfigBufferJ;
  SystemConfigBufferJ = 0;
  _DAT_180bf6bd8 = 7;
  strcpy_s(&SystemConfigBufferJ,0x40,&UNK_180a0cc08);
  _DAT_180bf6c20 = &SystemMemoryPool;
  _DAT_180bf6c28 = &DAT_180bf6c38;
  DAT_180bf6c38 = 0;
  _DAT_180bf6c30 = 0x19;
  strcpy_s(&DAT_180bf6c38,0x40,&UNK_180a0cc10);
  _DAT_180bf6c78 = &SystemMemoryPool;
  _DAT_180bf6c80 = &DAT_180bf6c90;
  DAT_180bf6c90 = 0;
  _DAT_180bf6c88 = 0x12;
  strcpy_s(&DAT_180bf6c90,0x40,&UNK_180a0cca0);
  _DAT_180bf6cd0 = &SystemMemoryPool;
  _DAT_180bf6cd8 = &DAT_180bf6ce8;
  DAT_180bf6ce8 = 0;
  _DAT_180bf6ce0 = 0x12;
  strcpy_s(&DAT_180bf6ce8,0x40,&UNK_180a0ccb8);
  _DAT_180bf6d28 = &SystemMemoryPool;
  _DAT_180bf6d30 = &DAT_180bf6d40;
  DAT_180bf6d40 = 0;
  _DAT_180bf6d38 = 0x19;
  strcpy_s(&DAT_180bf6d40,0x40,&UNK_180a0cc68);
  _DAT_180bf6d80 = &SystemMemoryPool;
  _DAT_180bf6d88 = &DAT_180bf6d98;
  DAT_180bf6d98 = 0;
  _DAT_180bf6d90 = 0x11;
  strcpy_s(&DAT_180bf6d98,0x40,&UNK_180a0cc88);
  _DAT_180bf6dd8 = &SystemMemoryPool;
  _DAT_180bf6de0 = &DAT_180bf6df0;
  DAT_180bf6df0 = 0;
  _DAT_180bf6de8 = 0x18;
  strcpy_s(&DAT_180bf6df0,0x40,&UNK_180a0cd08);
  _DAT_180bf6e30 = &SystemMemoryPool;
  _DAT_180bf6e38 = &DAT_180bf6e48;
  DAT_180bf6e48 = 0;
  _DAT_180bf6e40 = 0x13;
  strcpy_s(&DAT_180bf6e48,0x40,&UNK_180a0cd28);
  _DAT_180bf6e88 = &SystemMemoryPool;
  _DAT_180bf6e90 = &DAT_180bf6ea0;
  DAT_180bf6ea0 = 0;
  _DAT_180bf6e98 = 0x19;
  strcpy_s(&DAT_180bf6ea0,0x40,&UNK_180a0ccd0);
  _DAT_180bf6ee0 = &SystemMemoryPool;
  _DAT_180bf6ee8 = &DAT_180bf6ef8;
  DAT_180bf6ef8 = 0;
  _DAT_180bf6ef0 = 0x10;
  strcpy_s(&DAT_180bf6ef8,0x40,&UNK_180a0ccf0);
  _DAT_180bf6f38 = &SystemMemoryPool;
  _DAT_180bf6f40 = &DAT_180bf6f50;
  DAT_180bf6f50 = 0;
  _DAT_180bf6f48 = 0x14;
  strcpy_s(&DAT_180bf6f50,0x40,&UNK_180a0cd70);
  _DAT_180bf6f90 = &SystemMemoryPool;
  _DAT_180bf6f98 = &DAT_180bf6fa8;
  DAT_180bf6fa8 = 0;
  _DAT_180bf6fa0 = 0xf;
  strcpy_s(&DAT_180bf6fa8,0x40,&UNK_180a0cd88);
  _DAT_180bf6fe8 = &SystemMemoryPool;
  _DAT_180bf6ff0 = &DAT_180bf7000;
  DAT_180bf7000 = 0;
  _DAT_180bf6ff8 = 0x16;
  strcpy_s(&DAT_180bf7000,0x40,&UNK_180a0cd40);
  _DAT_180bf7040 = &SystemMemoryPool;
  _DAT_180bf7048 = &DAT_180bf7058;
  DAT_180bf7058 = 0;
  _DAT_180bf7050 = 0x12;
  strcpy_s(&DAT_180bf7058,0x40,&UNK_180a0cd58);
  _DAT_180bf7098 = &SystemMemoryPool;
  _DAT_180bf70a0 = &DAT_180bf70b0;
  DAT_180bf70b0 = 0;
  _DAT_180bf70a8 = 0x14;
  strcpy_s(&DAT_180bf70b0,0x40,&UNK_180a0cdc8);
  _DAT_180bf70f0 = &SystemMemoryPool;
  _DAT_180bf70f8 = &DAT_180bf7108;
  DAT_180bf7108 = 0;
  _DAT_180bf7100 = 0x20;
  strcpy_s(&DAT_180bf7108,0x40,&UNK_180a0cde0);
  _DAT_180bf7148 = &SystemMemoryPool;
  _DAT_180bf7150 = &DAT_180bf7160;
  DAT_180bf7160 = 0;
  _DAT_180bf7158 = 0x13;
  strcpy_s(&DAT_180bf7160,0x40,&UNK_180a0cd98);
  _DAT_180bf71a0 = &SystemMemoryPool;
  _DAT_180bf71a8 = &DAT_180bf71b8;
  DAT_180bf71b8 = 0;
  _DAT_180bf71b0 = 0x16;
  strcpy_s(&DAT_180bf71b8,0x40,&UNK_180a0cdb0);
  _DAT_180bf71f8 = &SystemMemoryPool;
  _DAT_180bf7200 = &DAT_180bf7210;
  DAT_180bf7210 = 0;
  _DAT_180bf7208 = 0xf;
  strcpy_s(&DAT_180bf7210,0x40,&UNK_180a0ce40);
  longlong CallbackResult = RegisterSystemModule(&SystemModuleEntryPointA);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器J
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorJ(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorJFlags;
  g_stringProcessorJ_Base = &unknownData_1809fcc58;
  g_stringProcessorJ_BufferPtr = &g_stringProcessorJ_Buffer;
  g_stringProcessorJ_Buffer = 0;
  g_stringProcessorJ_Length = 0xb;
  strcpy_s(&g_stringProcessorJ_Buffer,0x40,&unknownData_180a03098,stringProcessorJFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorJ_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器K
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorK(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorKFlags;
  g_stringProcessorK_Base = &unknownData_1809fcc58;
  g_stringProcessorK_BufferPtr = &g_stringProcessorK_Buffer;
  g_stringProcessorK_Buffer = 0;
  g_stringProcessorK_Length = 9;
  strcpy_s(&g_stringProcessorK_Buffer,0x40,&unknownData_180a03060,stringProcessorKFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorK_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器L
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorL(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorLFlags;
  g_stringProcessorL_Base = &unknownData_1809fcc58;
  g_stringProcessorL_BufferPtr = &g_stringProcessorL_Buffer;
  g_stringProcessorL_Buffer = 0;
  g_stringProcessorL_Length = 9;
  strcpy_s(&g_stringProcessorL_Buffer,0x40,&unknownData_180a030a8,stringProcessorLFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorL_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化多字符串处理器系统
 * 设置多个字符串处理器所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeMultiStringProcessorSystem(void)
{
  int64_t CallbackResult;
  uint64_t systemFlags;
  
  // 初始化字符串处理器N
  g_stringProcessorN_Base = &unknownData_1809fcc28;
  g_stringProcessorN_BufferPtr = &g_stringProcessorN_Buffer;
  g_stringProcessorN_Buffer = 0;
  g_stringProcessorN_Length = 0xb;
  strcpy_s(&g_stringProcessorN_Buffer,0x80,&unknownData_180a0fd60,systemFlags,0xfffffffffffffffe);
  
  // 初始化字符串处理器O
  g_stringProcessorO_Base = &unknownData_1809fcc28;
  g_stringProcessorO_BufferPtr = &g_stringProcessorO_Buffer;
  g_stringProcessorO_Buffer = 0;
  g_stringProcessorO_Length = 0x10;
  strcpy_s(&g_stringProcessorO_Buffer,0x80,&unknownData_180a0fd70);
  
  // 初始化字符串处理器P
  g_stringProcessorP_Base = &unknownData_1809fcc28;
  g_stringProcessorP_BufferPtr = &g_stringProcessorP_Buffer;
  g_stringProcessorP_Buffer = 0;
  g_stringProcessorP_Length = 0xd;
  strcpy_s(&g_stringProcessorP_Buffer,0x80,&unknownData_180a0fd40);
  
  // 初始化字符串处理器Q
  g_stringProcessorQ_Base = &unknownData_1809fcc28;
  g_stringProcessorQ_BufferPtr = &g_stringProcessorQ_Buffer;
  g_stringProcessorQ_Buffer = 0;
  g_stringProcessorQ_Length = 0xd;
  strcpy_s(&g_stringProcessorQ_Buffer,0x80,&unknownData_180a0fd50);
  
  // 初始化字符串处理器R
  g_stringProcessorR_Base = &unknownData_1809fcc28;
  g_stringProcessorR_BufferPtr = &g_stringProcessorR_Buffer;
  g_stringProcessorR_Buffer = 0;
  g_stringProcessorR_Length = 0xc;
  strcpy_s(&g_stringProcessorR_Buffer,0x80,&unknownData_180a0fda8);
  
  // 初始化字符串处理器S
  g_stringProcessorS_Base = &unknownData_1809fcc28;
  g_stringProcessorS_BufferPtr = &g_stringProcessorS_Buffer;
  g_stringProcessorS_Buffer = 0;
  g_stringProcessorS_Length = 0x13;
  strcpy_s(&g_stringProcessorS_Buffer,0x80,&unknownData_180a0fdb8);
  
  // 初始化字符串处理器T
  g_stringProcessorT_Base = &unknownData_1809fcc28;
  g_stringProcessorT_BufferPtr = &g_stringProcessorT_Buffer;
  g_stringProcessorT_Buffer = 0;
  g_stringProcessorT_Length = 10;
  strcpy_s(&g_stringProcessorT_Buffer,0x80,&unknownData_180a0fd88);
  
  // 初始化字符串处理器U
  g_stringProcessorU_Base = &unknownData_1809fcc28;
  g_stringProcessorU_BufferPtr = &g_stringProcessorU_Buffer;
  g_stringProcessorU_Buffer = 0;
  g_stringProcessorU_Length = 0xc;
  strcpy_s(&g_stringProcessorU_Buffer,0x80,&unknownData_180a0fd98);
  
  // 初始化字符串处理器V
  g_stringProcessorV_Base = &unknownData_1809fcc28;
  g_stringProcessorV_BufferPtr = &g_stringProcessorV_Buffer;
  g_stringProcessorV_Buffer = 0;
  g_stringProcessorV_Length = 0x11;
  strcpy_s(&g_stringProcessorV_Buffer,0x80,&unknownData_180a0fe10);
  
  // 初始化字符串处理器W
  g_stringProcessorW_Base = &unknownData_1809fcc28;
  g_stringProcessorW_BufferPtr = &g_stringProcessorW_Buffer;
  g_stringProcessorW_Buffer = 0;
  g_stringProcessorW_Length = 0x11;
  strcpy_s(&g_stringProcessorW_Buffer,0x80,&unknownData_180a0fe28);
  
  // 初始化字符串处理器X
  g_stringProcessorX_Base = &unknownData_1809fcc28;
  g_stringProcessorX_BufferPtr = &g_stringProcessorX_Buffer;
  g_stringProcessorX_Buffer = 0;
  g_stringProcessorX_Length = 0x19;
  strcpy_s(&g_stringProcessorX_Buffer,0x80,&unknownData_180a0fdd0);
  
  // 初始化字符串处理器Y
  g_stringProcessorY_Base = &unknownData_1809fcc28;
  g_stringProcessorY_BufferPtr = &g_stringProcessorY_Buffer;
  g_stringProcessorY_Buffer = 0;
  g_stringProcessorY_Length = 0x1a;
  strcpy_s(&g_stringProcessorY_Buffer,0x80,&unknownData_180a0fdf0);
  
  // 初始化字符串处理器Z
  g_stringProcessorZ_Base = &unknownData_1809fcc28;
  g_stringProcessorZ_BufferPtr = &g_stringProcessorZ_Buffer;
  g_stringProcessorZ_Buffer = 0;
  g_stringProcessorZ_Length = 0x1b;
  strcpy_s(&g_stringProcessorZ_Buffer,0x80,&unknownData_180a0fe70);
  
  // 初始化字符串处理器AA
  g_stringProcessorAA_Base = &unknownData_1809fcc28;
  g_stringProcessorAA_BufferPtr = &g_stringProcessorAA_Buffer;
  g_stringProcessorAA_Buffer = 0;
  g_stringProcessorAA_Length = 0xc;
  strcpy_s(&g_stringProcessorAA_Buffer,0x80,&unknownData_180a0fe90);
  
  // 初始化字符串处理器AB
  g_stringProcessorAB_Base = &unknownData_1809fcc28;
  g_stringProcessorAB_BufferPtr = &g_stringProcessorAB_Buffer;
  g_stringProcessorAB_Buffer = 0;
  g_stringProcessorAB_Length = 0x11;
  strcpy_s(&g_stringProcessorAB_Buffer,0x80,&unknownData_180a0fe40);
  
  // 初始化字符串处理器AC
  g_stringProcessorAC_Base = &unknownData_1809fcc28;
  g_stringProcessorAC_BufferPtr = &g_stringProcessorAC_Buffer;
  g_stringProcessorAC_Buffer = 0;
  g_stringProcessorAC_Length = 0x11;
  strcpy_s(&g_stringProcessorAC_Buffer,0x80,&unknownData_180a0fe58);
  
  CallbackResult = RegisterSystemCallback(InitializeMultiStringProcessorSystem_Callback);
  return (CallbackResult != 0) - 1;
}
  DAT_180bf7ea8 = 0;
  _DAT_180bf7ea0 = 0x13;
  strcpy_s(&DAT_180bf7ea8,0x40,&UNK_180a0cb48,in_R9,0xfffffffffffffffe);
  _DAT_180bf7ee8 = &SystemMemoryPool;
  _DAT_180bf7ef0 = &DAT_180bf7f00;
  DAT_180bf7f00 = 0;
  _DAT_180bf7ef8 = 0xd;
  strcpy_s(&DAT_180bf7f00,0x40,&UNK_180a0cb80);
  _DAT_180bf7f40 = &SystemMemoryPool;
  _DAT_180bf7f48 = &DAT_180bf7f58;
  DAT_180bf7f58 = 0;
  _DAT_180bf7f50 = 0x17;
  strcpy_s(&DAT_180bf7f58,0x40,&UNK_180a0cb90);
  _DAT_180bf7f98 = &SystemMemoryPool;
  _DAT_180bf7fa0 = &DAT_180bf7fb0;
  DAT_180bf7fb0 = 0;
  _DAT_180bf7fa8 = 0xd;
  strcpy_s(&DAT_180bf7fb0,0x40,&UNK_180a0cb60);
  _DAT_180bf7ff0 = &SystemMemoryPool;
  _DAT_180bf7ff8 = &DAT_180bf8008;
  DAT_180bf8008 = 0;
  _DAT_180bf8000 = 0xc;
  strcpy_s(&DAT_180bf8008,0x40,&UNK_180a0cb70);
  _DAT_180bf8048 = &SystemMemoryPool;
  _DAT_180bf8050 = &DAT_180bf8060;
  DAT_180bf8060 = 0;
  _DAT_180bf8058 = 0xc;
  strcpy_s(&DAT_180bf8060,0x40,&UNK_180a0cbe0);
  _DAT_180bf80a0 = &SystemMemoryPool;
  _DAT_180bf80a8 = &DAT_180bf80b8;
  DAT_180bf80b8 = 0;
  _DAT_180bf80b0 = 0x10;
  strcpy_s(&DAT_180bf80b8,0x40,&UNK_180a0cbf0);
  _DAT_180bf80f8 = &SystemMemoryPool;
  _DAT_180bf8100 = &DAT_180bf8110;
  DAT_180bf8110 = 0;
  _DAT_180bf8108 = 0x1f;
  strcpy_s(&DAT_180bf8110,0x40,&UNK_180a0cba8);
  _DAT_180bf8150 = &SystemMemoryPool;
  _DAT_180bf8158 = &DAT_180bf8168;
  DAT_180bf8168 = 0;
  _DAT_180bf8160 = 0x17;
  strcpy_s(&DAT_180bf8168,0x40,&UNK_180a05740);
  _DAT_180bf81a8 = &SystemMemoryPool;
  _DAT_180bf81b0 = &DAT_180bf81c0;
  DAT_180bf81c0 = 0;
  _DAT_180bf81b8 = 0x13;
  strcpy_s(&DAT_180bf81c0,0x40,&UNK_180a0cbc8);
  _DAT_180bf8200 = &SystemMemoryPool;
  _DAT_180bf8208 = &DAT_180bf8218;
  DAT_180bf8218 = 0;
  _DAT_180bf8210 = 0x14;
  strcpy_s(&DAT_180bf8218,0x40,&UNK_180a0cc30);
  _DAT_180bf8258 = &SystemMemoryPool;
  _DAT_180bf8260 = &DAT_180bf8270;
  DAT_180bf8270 = 0;
  _DAT_180bf8268 = 0;
  strcpy_s(&DAT_180bf8270,0x40,&DAT_18098bc73);
  _DAT_180bf82b0 = &SystemMemoryPool;
  _DAT_180bf82b8 = &DAT_180bf82c8;
  DAT_180bf82c8 = 0;
  _DAT_180bf82c0 = 0x1b;
  strcpy_s(&DAT_180bf82c8,0x40,&UNK_180a0cc48);
  _DAT_180bf8308 = &SystemMemoryPool;
  _DAT_180bf8310 = &DAT_180bf8320;
  DAT_180bf8320 = 0;
  _DAT_180bf8318 = 7;
  strcpy_s(&DAT_180bf8320,0x40,&UNK_180a0cc08);
  _DAT_180bf8360 = &SystemMemoryPool;
  _DAT_180bf8368 = &DAT_180bf8378;
  DAT_180bf8378 = 0;
  _DAT_180bf8370 = 0x19;
  strcpy_s(&DAT_180bf8378,0x40,&UNK_180a0cc10);
  _DAT_180bf83b8 = &SystemMemoryPool;
  _DAT_180bf83c0 = &DAT_180bf83d0;
  DAT_180bf83d0 = 0;
  _DAT_180bf83c8 = 0x12;
  strcpy_s(&DAT_180bf83d0,0x40,&UNK_180a0cca0);
  _DAT_180bf8410 = &SystemMemoryPool;
  _DAT_180bf8418 = &DAT_180bf8428;
  DAT_180bf8428 = 0;
  _DAT_180bf8420 = 0x12;
  strcpy_s(&DAT_180bf8428,0x40,&UNK_180a0ccb8);
  _DAT_180bf8468 = &SystemMemoryPool;
  _DAT_180bf8470 = &DAT_180bf8480;
  DAT_180bf8480 = 0;
  _DAT_180bf8478 = 0x19;
  strcpy_s(&DAT_180bf8480,0x40,&UNK_180a0cc68);
  _DAT_180bf84c0 = &SystemMemoryPool;
  _DAT_180bf84c8 = &DAT_180bf84d8;
  DAT_180bf84d8 = 0;
  _DAT_180bf84d0 = 0x11;
  strcpy_s(&DAT_180bf84d8,0x40,&UNK_180a0cc88);
  _DAT_180bf8518 = &SystemMemoryPool;
  _DAT_180bf8520 = &DAT_180bf8530;
  DAT_180bf8530 = 0;
  _DAT_180bf8528 = 0x18;
  strcpy_s(&DAT_180bf8530,0x40,&UNK_180a0cd08);
  _DAT_180bf8570 = &SystemMemoryPool;
  _DAT_180bf8578 = &DAT_180bf8588;
  DAT_180bf8588 = 0;
  _DAT_180bf8580 = 0x13;
  strcpy_s(&DAT_180bf8588,0x40,&UNK_180a0cd28);
  _DAT_180bf85c8 = &SystemMemoryPool;
  _DAT_180bf85d0 = &DAT_180bf85e0;
  DAT_180bf85e0 = 0;
  _DAT_180bf85d8 = 0x19;
  strcpy_s(&DAT_180bf85e0,0x40,&UNK_180a0ccd0);
  _DAT_180bf8620 = &SystemMemoryPool;
  _DAT_180bf8628 = &DAT_180bf8638;
  DAT_180bf8638 = 0;
  _DAT_180bf8630 = 0x10;
  strcpy_s(&DAT_180bf8638,0x40,&UNK_180a0ccf0);
  _DAT_180bf8678 = &SystemMemoryPool;
  _DAT_180bf8680 = &DAT_180bf8690;
  DAT_180bf8690 = 0;
  _DAT_180bf8688 = 0x14;
  strcpy_s(&DAT_180bf8690,0x40,&UNK_180a0cd70);
  _DAT_180bf86d0 = &SystemMemoryPool;
  _DAT_180bf86d8 = &DAT_180bf86e8;
  DAT_180bf86e8 = 0;
  _DAT_180bf86e0 = 0xf;
  strcpy_s(&DAT_180bf86e8,0x40,&UNK_180a0cd88);
  _DAT_180bf8728 = &SystemMemoryPool;
  _DAT_180bf8730 = &DAT_180bf8740;
  DAT_180bf8740 = 0;
  _DAT_180bf8738 = 0x16;
  strcpy_s(&DAT_180bf8740,0x40,&UNK_180a0cd40);
  _DAT_180bf8780 = &SystemMemoryPool;
  _DAT_180bf8788 = &DAT_180bf8798;
  DAT_180bf8798 = 0;
  _DAT_180bf8790 = 0x12;
  strcpy_s(&DAT_180bf8798,0x40,&UNK_180a0cd58);
  _DAT_180bf87d8 = &SystemMemoryPool;
  _DAT_180bf87e0 = &DAT_180bf87f0;
  DAT_180bf87f0 = 0;
  _DAT_180bf87e8 = 0x14;
  strcpy_s(&DAT_180bf87f0,0x40,&UNK_180a0cdc8);
  _DAT_180bf8830 = &SystemMemoryPool;
  _DAT_180bf8838 = &DAT_180bf8848;
  DAT_180bf8848 = 0;
  _DAT_180bf8840 = 0x20;
  strcpy_s(&DAT_180bf8848,0x40,&UNK_180a0cde0);
  _DAT_180bf8888 = &SystemMemoryPool;
  _DAT_180bf8890 = &DAT_180bf88a0;
  DAT_180bf88a0 = 0;
  _DAT_180bf8898 = 0x13;
  strcpy_s(&DAT_180bf88a0,0x40,&UNK_180a0cd98);
  _DAT_180bf88e0 = &SystemMemoryPool;
  _DAT_180bf88e8 = &DAT_180bf88f8;
  DAT_180bf88f8 = 0;
  _DAT_180bf88f0 = 0x16;
  strcpy_s(&DAT_180bf88f8,0x40,&UNK_180a0cdb0);
  _DAT_180bf8938 = &SystemMemoryPool;
  _DAT_180bf8940 = &DAT_180bf8950;
  DAT_180bf8950 = 0;
  _DAT_180bf8948 = 0xf;
  strcpy_s(&DAT_180bf8950,0x40,&UNK_180a0ce40);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointB);
  return (ModuleInitializationResult != 0) - 1;
}
  DAT_180bf90c8 = 0;
  _DAT_180bf90c0 = 0xd;
  strcpy_s(&DAT_180bf90c8,0x20,&UNK_180a01300,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(InitializePhysicsSubsystem);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器AD
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAD(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorADFlags;
  g_stringProcessorAD_Base = &unknownData_18098bc80;
  g_stringProcessorAD_BufferPtr = &g_stringProcessorAD_Buffer;
  g_stringProcessorAD_Buffer = 0;
  g_stringProcessorAD_Length = 9;
  strcpy_s(&g_stringProcessorAD_Buffer,0x20,&unknownData_180a01330,stringProcessorADFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorAD_Callback);
  return (CallbackResult != 0) - 1;
}
  DAT_180bf91c8 = 0;
  _DAT_180bf91c0 = 0x10;
  strcpy_s(&DAT_180bf91c8,0x40,&UNK_180a22b38,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(InitializeRenderingPipeline);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器AE
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAE(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorAEFlags;
  g_stringProcessorAE_Base = &unknownData_1809fcc58;
  g_stringProcessorAE_BufferPtr = &g_stringProcessorAE_Buffer;
  g_stringProcessorAE_Buffer = 0;
  g_stringProcessorAE_Length = 0x13;
  strcpy_s(&g_stringProcessorAE_Buffer,0x40,&unknownData_180a22b90,stringProcessorAEFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorAE_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器AF
 * 设置字符串处理所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAF(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorAFFlags;
  g_stringProcessorAF_Base = &unknownData_1809fcc58;
  g_stringProcessorAF_BufferPtr = &g_stringProcessorAF_Buffer;
  g_stringProcessorAF_Buffer = 0;
  g_stringProcessorAF_Length = 0x12;
  strcpy_s(&g_stringProcessorAF_Buffer,0x40,&unknownData_180a22b78,stringProcessorAFFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorAF_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器G
 * 设置字符串处理G所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorG(void)
{
  int64_t CallbackResult;
  uint64_t processorFlags;
  GlobalStringProcessorG_Base = &GlobalUnknownDataBase;
  GlobalStringProcessorG_BufferPtr = &GlobalStringProcessorG_Buffer;
  GlobalStringProcessorG_Buffer = 0;
  GlobalStringProcessorG_Length = 0x12;
  strcpy_s(&GlobalStringProcessorG_Buffer,0x40,&GlobalUnknownDataBase,processorFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(StringProcessorG_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器H
 * 设置字符串处理H所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorH(void)
{
  int64_t CallbackResult;
  uint64_t processorFlags;
  GlobalStringProcessorH_Base = &GlobalUnknownDataBase;
  GlobalStringProcessorH_BufferPtr = &GlobalStringProcessorH_Buffer;
  GlobalStringProcessorH_Buffer = 0;
  GlobalStringProcessorH_Length = 0xd;
  strcpy_s(&GlobalStringProcessorH_Buffer,0x40,&GlobalUnknownDataBase,processorFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(StringProcessorH_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器AA
 * 设置字符串处理AA所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAA(void)
{
  longlong InitializationResult;
  uint64_t StringProcessorFlags;
  StringProcessorAABase = &SystemStringDataConstantA;
  StringProcessorAABufferPtr = &StringProcessorAABuffer;
  StringProcessorAABuffer = 0;
  StringProcessorAALength = 0x10;
  strcpy_s(&StringProcessorAABuffer, 0x40, &SystemStringConfigDataAA, StringProcessorFlags, 0xfffffffffffffffe);
  InitializationResult = RegisterSystemCallback(StringProcessorAACallback);
  return (InitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器AA
 * 设置字符串处理所需的配置和数据结构
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorAA(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf93f0 = &SystemMemoryPool;
  _DAT_180bf93f8 = &DAT_180bf9408;
  DAT_180bf9408 = 0;
  _DAT_180bf9400 = 0x17;
  strcpy_s(&DAT_180bf9408,0x40,&SystemNetworkConfigData,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleA);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理器K
 * 设置字符串处理K所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorK(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorKFlags;
  StringProcessorK_Base = &SystemStringDataConstantA;
  StringProcessorK_BufferPtr = &StringProcessorK_Buffer;
  StringProcessorK_Buffer = 0;
  StringProcessorK_Length = 0x10;
  strcpy_s(&StringProcessorK_Buffer,0x40,&SystemStringConfigDataK,stringProcessorKFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorK_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器L
 * 设置字符串处理L所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorL(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorLFlags;
  StringProcessorL_Base = &SystemStringDataConstantA;
  StringProcessorL_BufferPtr = &StringProcessorL_Buffer;
  StringProcessorL_Buffer = 0;
  StringProcessorL_Length = 0xd;
  strcpy_s(&StringProcessorL_Buffer,0x40,&SystemStringConfigDataL,stringProcessorLFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorL_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器M
 * 设置字符串处理M所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorM(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorMFlags;
  StringProcessorM_Base = &UnknownData1809fcc58;
  StringProcessorM_BufferPtr = &StringProcessorM_Buffer;
  StringProcessorM_Buffer = 0;
  StringProcessorM_Length = 0xc;
  strcpy_s(&StringProcessorM_Buffer,0x40,&UnknownData180a22c48,stringProcessorMFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorM_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器N
 * 设置字符串处理N所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorN(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorNFlags;
  StringProcessorN_Base = &UnknownData1809fcc58;
  StringProcessorN_BufferPtr = &StringProcessorN_Buffer;
  StringProcessorN_Buffer = 0;
  StringProcessorN_Length = 0x16;
  strcpy_s(&StringProcessorN_Buffer,0x40,&UnknownData180a22c30,stringProcessorNFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorN_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器O
 * 设置字符串处理O所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorO(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorOFlags;
  StringProcessorO_Base = &UnknownData1809fcc58;
  StringProcessorO_BufferPtr = &StringProcessorO_Buffer;
  StringProcessorO_Buffer = 0;
  StringProcessorO_Length = 0x13;
  strcpy_s(&StringProcessorO_Buffer,0x40,&UnknownData180a22c18,stringProcessorOFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorO_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器P
 * 设置字符串处理P所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorP(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorPFlags;
  StringProcessorP_Base = &UnknownData1809fcc58;
  StringProcessorP_BufferPtr = &StringProcessorP_Buffer;
  StringProcessorP_Buffer = 0;
  StringProcessorP_Length = 0x14;
  strcpy_s(&StringProcessorP_Buffer,0x40,&UnknownData180a22c00,stringProcessorPFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorP_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器Q
 * 设置字符串处理Q所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorQ(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorQFlags;
  StringProcessorQ_Base = &UnknownData1809fcc58;
  StringProcessorQ_BufferPtr = &StringProcessorQ_Buffer;
  StringProcessorQ_Buffer = 0;
  StringProcessorQ_Length = 0x17;
  strcpy_s(&StringProcessorQ_Buffer,0x40,&Data180a22cb0,stringProcessorQFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorQ_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器R
 * 设置字符串处理R所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorR(void)
{
  int64_t CallbackResult;
  uint64_t stringProcessorRFlags;
  StringProcessorR_Base = &UnknownData1809fcc58;
  StringProcessorR_BufferPtr = &StringProcessorR_Buffer;
  StringProcessorR_Buffer = 0;
  StringProcessorR_Length = 0x17;
  strcpy_s(&StringProcessorR_Buffer,0x40,&UnknownData180a22c98,stringProcessorRFlags,0xfffffffffffffffe);
  CallbackResult = RegisterSystemCallback(InitializeStringProcessorR_Callback);
  return (CallbackResult != 0) - 1;
}
/**
 * 初始化字符串处理器S
 * 设置字符串处理S所需的数据结构和回调
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessorS(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9750 = &SystemMemoryPool;
  _DAT_180bf9758 = &DAT_180bf9768;
  DAT_180bf9768 = 0;
  _DAT_180bf9760 = 0x20;
  strcpy_s(&DAT_180bf9768,0x40,&UNK_180a22c70,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleB);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeStringProcessorT(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf97b0 = &SystemMemoryPool;
  _DAT_180bf97b8 = &DAT_180bf97c8;
  DAT_180bf97c8 = 0;
  _DAT_180bf97c0 = 0x13;
  strcpy_s(&DAT_180bf97c8,0x40,&UNK_180a22c58,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleC);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeStringProcessorU(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9810 = &SystemMemoryPool;
  _DAT_180bf9818 = &DAT_180bf9828;
  DAT_180bf9828 = 0;
  _DAT_180bf9820 = 0x1e;
  strcpy_s(&DAT_180bf9828,0x40,&UNK_180a22d28,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(RegisterSystemModuleD);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeStringProcessorV(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9870 = &SystemMemoryPool;
  _DAT_180bf9878 = &DAT_180bf9888;
  DAT_180bf9888 = 0;
  _DAT_180bf9880 = 0x1b;
  strcpy_s(&DAT_180bf9888,0x40,&UNK_180a22d08,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleA);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统模块B
 * 设置系统模块B所需的配置和数据结构
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemModuleB(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf98d0 = &SystemMemoryPool;
  _DAT_180bf98d8 = &SYSTEM_MODULE_B_BUFFER;
  SYSTEM_MODULE_B_BUFFER = 0;
  _DAT_180bf98e0 = 0x1b;
  strcpy_s(&SYSTEM_MODULE_B_BUFFER,0x40,&UNK_180a22ce8,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleB);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeSystemModuleC(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9930 = &SystemMemoryPool;
  _DAT_180bf9938 = &SYSTEM_MODULE_C_BUFFER;
  SYSTEM_MODULE_C_BUFFER = 0;
  _DAT_180bf9940 = 0x1c;
  strcpy_s(&SYSTEM_MODULE_C_BUFFER,0x40,&UNK_180a22cc8,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleC);
  return (ModuleInitializationResult != 0) - 1;
}
int InitializeSystemModuleD(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9990 = &SystemMemoryPool;
  _DAT_180bf9998 = &DAT_180bf99a8;
  DAT_180bf99a8 = 0;
  _DAT_180bf99a0 = 0x1d;
  strcpy_s(&DAT_180bf99a8,0x40,&UNK_180a22db0,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(InitializeSystemModuleD);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块M
 * 设置字符串处理系统模块M所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemM(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf99f0 = &SystemMemoryPool;
  _DAT_180bf99f8 = &DAT_180bf9a08;
  DAT_180bf9a08 = 0;
  _DAT_180bf9a00 = 0x20;
  strcpy_s(&DAT_180bf9a08,0x40,&UNK_180a22d88,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809421c0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块N
 * 设置字符串处理系统模块N所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemN(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9a50 = &SystemMemoryPool;
  _DAT_180bf9a58 = &DAT_180bf9a68;
  DAT_180bf9a68 = 0;
  _DAT_180bf9a60 = 0x1d;
  strcpy_s(&DAT_180bf9a68,0x40,&UNK_180a22d68,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809421e0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块O
 * 设置字符串处理系统模块O所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemO(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9ab0 = &SystemMemoryPool;
  _DAT_180bf9ab8 = &DAT_180bf9ac8;
  DAT_180bf9ac8 = 0;
  _DAT_180bf9ac0 = 0x1c;
  strcpy_s(&DAT_180bf9ac8,0x40,&DAT_180a22d48,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942200);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块P
 * 设置字符串处理系统模块P所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemP(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9b10 = &SystemMemoryPool;
  _DAT_180bf9b18 = &DAT_180bf9b28;
  DAT_180bf9b28 = 0;
  _DAT_180bf9b20 = 0x17;
  strcpy_s(&DAT_180bf9b28,0x40,&UNK_180a22e40,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942220);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块Q
 * 设置字符串处理系统模块Q所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemQ(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9b70 = &SystemMemoryPool;
  _DAT_180bf9b78 = &DAT_180bf9b88;
  DAT_180bf9b88 = 0;
  _DAT_180bf9b80 = 0x1f;
  strcpy_s(&DAT_180bf9b88,0x40,&UNK_180a22e20,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942240);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块R
 * 设置字符串处理系统模块R所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemR(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9bd0 = &SystemMemoryPool;
  _DAT_180bf9bd8 = &DAT_180bf9be8;
  DAT_180bf9be8 = 0;
  _DAT_180bf9be0 = 0x21;
  strcpy_s(&DAT_180bf9be8,0x40,&UNK_180a22df8,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942260);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块S
 * 设置字符串处理系统模块S所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemS(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9c30 = &SystemMemoryPool;
  _DAT_180bf9c38 = &DAT_180bf9c48;
  DAT_180bf9c48 = 0;
  _DAT_180bf9c40 = 0x25;
  strcpy_s(&DAT_180bf9c48,0x40,&UNK_180a22dd0,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942280);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块T
 * 设置字符串处理系统模块T所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemT(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9c90 = &SystemMemoryPool;
  _DAT_180bf9c98 = &DAT_180bf9ca8;
  DAT_180bf9ca8 = 0;
  _DAT_180bf9ca0 = 0x23;
  strcpy_s(&DAT_180bf9ca8,0x40,&UNK_180a22eb0,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809422a0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块U
 * 设置字符串处理系统模块U所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemU(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9cf0 = &SystemMemoryPool;
  _DAT_180bf9cf8 = &DAT_180bf9d08;
  DAT_180bf9d08 = 0;
  _DAT_180bf9d00 = 0x1e;
  strcpy_s(&DAT_180bf9d08,0x40,&UNK_180a22e90,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809422c0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块V
 * 设置字符串处理系统模块V所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemV(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9d50 = &SystemMemoryPool;
  _DAT_180bf9d58 = &DAT_180bf9d68;
  DAT_180bf9d68 = 0;
  _DAT_180bf9d60 = 0x1e;
  strcpy_s(&DAT_180bf9d68,0x40,&UNK_180a22e70,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809422e0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块W
 * 设置字符串处理系统模块W所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemW(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9db0 = &SystemMemoryPool;
  _DAT_180bf9db8 = &DAT_180bf9dc8;
  DAT_180bf9dc8 = 0;
  _DAT_180bf9dc0 = 0x12;
  strcpy_s(&DAT_180bf9dc8,0x40,&UNK_180a22e58,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942300);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块X
 * 设置字符串处理系统模块X所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemX(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9e10 = &SystemMemoryPool;
  _DAT_180bf9e18 = &DAT_180bf9e28;
  DAT_180bf9e28 = 0;
  _DAT_180bf9e20 = 0x13;
  strcpy_s(&DAT_180bf9e28,0x40,&UNK_180a22f28,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942320);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块Y
 * 设置字符串处理系统模块Y所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemY(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9e70 = &SystemMemoryPool;
  _DAT_180bf9e78 = &DAT_180bf9e88;
  DAT_180bf9e88 = 0;
  _DAT_180bf9e80 = 0x13;
  strcpy_s(&DAT_180bf9e88,0x40,&UNK_180a22f10,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942340);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块Z
 * 设置字符串处理系统模块Z所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemZ(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9ed0 = &SystemMemoryPool;
  _DAT_180bf9ed8 = &DAT_180bf9ee8;
  DAT_180bf9ee8 = 0;
  _DAT_180bf9ee0 = 0x16;
  strcpy_s(&DAT_180bf9ee8,0x40,&UNK_180a22ef8,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942360);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AA
 * 设置字符串处理系统模块AA所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAA(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9f30 = &SystemMemoryPool;
  _DAT_180bf9f38 = &DAT_180bf9f48;
  DAT_180bf9f48 = 0;
  _DAT_180bf9f40 = 0x1a;
  strcpy_s(&DAT_180bf9f48,0x40,&UNK_180a22ed8,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942380);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AB
 * 设置字符串处理系统模块AB所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAB(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9f90 = &SystemMemoryPool;
  _DAT_180bf9f98 = &DAT_180bf9fa8;
  DAT_180bf9fa8 = 0;
  _DAT_180bf9fa0 = 0x15;
  strcpy_s(&DAT_180bf9fa8,0x40,&UNK_180a22f90,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809423a0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AC
 * 设置字符串处理系统模块AC所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAC(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf9ff0 = &SystemMemoryPool;
  _DAT_180bf9ff8 = &DAT_180bfa008;
  DAT_180bfa008 = 0;
  _DAT_180bfa000 = 0x13;
  strcpy_s(&DAT_180bfa008,0x40,&UNK_180a22f78,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809423c0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AD
 * 设置字符串处理系统模块AD所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAD(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa050 = &SystemMemoryPool;
  _DAT_180bfa058 = &DAT_180bfa068;
  DAT_180bfa068 = 0;
  _DAT_180bfa060 = 0x13;
  strcpy_s(&DAT_180bfa068,0x40,&UNK_180a22f60,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809423e0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AE
 * 设置字符串处理系统模块AE所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAE(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa0b0 = &SystemMemoryPool;
  _DAT_180bfa0b8 = &DAT_180bfa0c8;
  DAT_180bfa0c8 = 0;
  _DAT_180bfa0c0 = 0x1b;
  strcpy_s(&DAT_180bfa0c8,0x40,&UNK_180a22f40,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942400);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AF
 * 设置字符串处理系统模块AF所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAF(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa110 = &SystemMemoryPool;
  _DAT_180bfa118 = &DAT_180bfa128;
  DAT_180bfa128 = 0;
  _DAT_180bfa120 = 0x19;
  strcpy_s(&DAT_180bfa128,0x40,&UNK_180a23018,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942420);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AG
 * 设置字符串处理系统模块AG所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAG(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa170 = &SystemMemoryPool;
  _DAT_180bfa178 = &DAT_180bfa188;
  DAT_180bfa188 = 0;
  _DAT_180bfa180 = 0x15;
  strcpy_s(&DAT_180bfa188,0x40,&UNK_180a23000,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942440);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AH
 * 设置字符串处理系统模块AH所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAH(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa1d0 = &SystemMemoryPool;
  _DAT_180bfa1d8 = &DAT_180bfa1e8;
  DAT_180bfa1e8 = 0;
  _DAT_180bfa1e0 = 0x28;
  strcpy_s(&DAT_180bfa1e8,0x40,&DAT_180a22fd0,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942460);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AI
 * 设置字符串处理系统模块AI所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAI(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa230 = &SystemMemoryPool;
  _DAT_180bfa238 = &DAT_180bfa248;
  DAT_180bfa248 = 0;
  _DAT_180bfa240 = 0x23;
  strcpy_s(&DAT_180bfa248,0x40,&DAT_180a22fa8,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942480);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AJ
 * 设置字符串处理系统模块AJ所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAJ(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa290 = &SystemMemoryPool;
  _DAT_180bfa298 = &DAT_180bfa2a8;
  DAT_180bfa2a8 = 0;
  _DAT_180bfa2a0 = 0x17;
  strcpy_s(&DAT_180bfa2a8,0x40,&UNK_180a23068,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809424a0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AK
 * 设置字符串处理系统模块AK所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAK(void)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = RegisterSystemModule(FUN_1809424c0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AL
 * 设置字符串处理系统模块AL所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAL(void)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = RegisterSystemModule(FUN_180942520);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化字符串处理系统模块AM
 * 设置字符串处理系统模块AM所需的数据结构和缓冲区
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeStringProcessingSystemAM(void)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = RegisterSystemModule(FUN_180942580);
  return (ModuleInitializationResult != 0) - 1;
}
int ProcessSystemEvent(uint64_t systemId,uint64_t eventType,uint64_t eventData,uint64_t eventFlags)
{
  int64_t ModuleInitializationResult;
  _Mtx_init_in_situ(0x180c91f70,2,param_3,param_4,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809425e0);
  return (ModuleInitializationResult != 0) - 1;
}
  DAT_180bfa368 = 0;
  _DAT_180bfa360 = 7;
  strcpy_s(&DAT_180bfa368,0x80,&UNK_180a0f5b8,in_R9,0xfffffffffffffffe);
  _DAT_180bfa3e8 = &SystemMemoryConfigTemplate;
  _DAT_180bfa3f0 = &DAT_180bfa400;
  DAT_180bfa400 = 0;
  _DAT_180bfa3f8 = 9;
  strcpy_s(&DAT_180bfa400,0x80,&UNK_180a0f190);
  _DAT_180bfa480 = &SystemMemoryConfigTemplate;
  _DAT_180bfa488 = &DAT_180bfa498;
  DAT_180bfa498 = 0;
  _DAT_180bfa490 = 0xb;
  strcpy_s(&DAT_180bfa498,0x80,&UNK_180a0f168);
  _DAT_180bfa518 = &SystemMemoryConfigTemplate;
  _DAT_180bfa520 = &DAT_180bfa530;
  DAT_180bfa530 = 0;
  _DAT_180bfa528 = 7;
  strcpy_s(&DAT_180bfa530,0x80,&UNK_180a0f188);
  _DAT_180bfa5b0 = &SystemMemoryConfigTemplate;
  _DAT_180bfa5b8 = &DAT_180bfa5c8;
  DAT_180bfa5c8 = 0;
  _DAT_180bfa5c0 = 0xc;
  strcpy_s(&DAT_180bfa5c8,0x80,&UNK_180a0f178);
  _DAT_180bfa648 = &SystemMemoryConfigTemplate;
  _DAT_180bfa650 = &DAT_180bfa660;
  DAT_180bfa660 = 0;
  _DAT_180bfa658 = 9;
  strcpy_s(&DAT_180bfa660,0x80,&UNK_180a24c50);
  _DAT_180bfa6e0 = &SystemMemoryConfigTemplate;
  _DAT_180bfa6e8 = &DAT_180bfa6f8;
  DAT_180bfa6f8 = 0;
  _DAT_180bfa6f0 = 0xc;
  strcpy_s(&DAT_180bfa6f8,0x80,&UNK_180a24c60);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointC);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统事件处理器
 * 设置系统事件处理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemEventHandler(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfa780 = &SystemMemoryConfigTemplate;
  _DAT_180bfa788 = &DAT_180bfa798;
  DAT_180bfa798 = 0;
  _DAT_180bfa790 = 0x1b;
  strcpy_s(&DAT_180bfa798,0x80,&UNK_180a24bd0,in_R9,0xfffffffffffffffe);
  _DAT_180bfa818 = &SystemMemoryConfigTemplate;
  _DAT_180bfa820 = &DAT_180bfa830;
  DAT_180bfa830 = 0;
  _DAT_180bfa828 = 0x19;
  strcpy_s(&DAT_180bfa830,0x80,&UNK_180a24bf0);
  _DAT_180bfa8b0 = &SystemMemoryConfigTemplate;
  _DAT_180bfa8b8 = &DAT_180bfa8c8;
  DAT_180bfa8c8 = 0;
  _DAT_180bfa8c0 = 0x1f;
  strcpy_s(&DAT_180bfa8c8,0x80,&UNK_180a24c10);
  _DAT_180bfa948 = &SystemMemoryConfigTemplate;
  _DAT_180bfa950 = &DAT_180bfa960;
  DAT_180bfa960 = 0;
  _DAT_180bfa958 = 0x1b;
  strcpy_s(&DAT_180bfa960,0x80,&UNK_180a24c30);
  _DAT_180bfa9e0 = &SystemMemoryConfigTemplate;
  _DAT_180bfa9e8 = &DAT_180bfa9f8;
  DAT_180bfa9f8 = 0;
  _DAT_180bfa9f0 = 0x20;
  strcpy_s(&DAT_180bfa9f8,0x80,&UNK_180a24d58);
  _DAT_180bfaa78 = &SystemMemoryConfigTemplate;
  _DAT_180bfaa80 = &DAT_180bfaa90;
  DAT_180bfaa90 = 0;
  _DAT_180bfaa88 = 0x20;
  strcpy_s(&DAT_180bfaa90,0x80,&UNK_180a24d80);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointD);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统消息处理器
 * 设置系统消息处理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemMessageHandler(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfab10 = &SystemMemoryConfigTemplate;
  _DAT_180bfab18 = &DAT_180bfab28;
  DAT_180bfab28 = 0;
  _DAT_180bfab20 = 0x13;
  strcpy_s(&DAT_180bfab28,0x80,&UNK_180a24da8,in_R9,0xfffffffffffffffe);
  _DAT_180bfaba8 = &SystemMemoryConfigTemplate;
  _DAT_180bfabb0 = &DAT_180bfabc0;
  DAT_180bfabc0 = 0;
  _DAT_180bfabb8 = 0x13;
  strcpy_s(&DAT_180bfabc0,0x80,&UNK_180a24da8);
  _DAT_180bfac40 = &SystemMemoryConfigTemplate;
  _DAT_180bfac48 = &DAT_180bfac58;
  DAT_180bfac58 = 0;
  _DAT_180bfac50 = 0x13;
  strcpy_s(&DAT_180bfac58,0x80,&UNK_180a24da8);
  _DAT_180bfacd8 = &SystemMemoryConfigTemplate;
  _DAT_180bface0 = &DAT_180bfacf0;
  DAT_180bfacf0 = 0;
  _DAT_180bface8 = 0x13;
  strcpy_s(&DAT_180bfacf0,0x80,&UNK_180a24da8);
  _DAT_180bfad70 = &SystemMemoryConfigTemplate;
  _DAT_180bfad78 = &DAT_180bfad88;
  DAT_180bfad88 = 0;
  _DAT_180bfad80 = 0xe;
  strcpy_s(&DAT_180bfad88,0x80,&UNK_180a24dc0);
  _DAT_180bfae08 = &SystemMemoryConfigTemplate;
  _DAT_180bfae10 = &DAT_180bfae20;
  DAT_180bfae20 = 0;
  _DAT_180bfae18 = 0xe;
  strcpy_s(&DAT_180bfae20,0x80,&UNK_180a24dc0);
  ModuleInitializationResult = RegisterSystemModule(&SystemModuleEntryPointE);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统配置管理器
 * 设置系统配置管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemConfigurationManager(void)
{
  int64_t ModuleInitializationResult;
  _DAT_180bfc150 = 0;
  uRam0000000180bfc158 = 0xf;
  DAT_180bfc140 = 0;
  _DAT_180bfc160 = 0;
  _DAT_180bfc168 = 0;
  ModuleInitializationResult = RegisterSystemModule(FUN_180942660);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统资源管理器
 * 设置系统资源管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemResourceManager(void)
{
  int64_t ModuleInitializationResult;
  _DAT_180bfaee8 = 3;
  _DAT_180bfaec0 = &DAT_180bfaec0;
  _DAT_180bfaec8 = &DAT_180bfaec0;
  _DAT_180bfaed0 = 0;
  _DAT_180bfaed8 = 0;
  _DAT_180bfaee0 = 0;
  ModuleInitializationResult = RegisterSystemModule(FUN_180942750);
  return (ModuleInitializationResult != 0) - 1;
}
int HandleSystemRequest(uint64_t requestId,uint64_t requestType,uint64_t requestData,uint64_t requestFlags)
{
  int64_t ModuleInitializationResult;
  _Mtx_init_in_situ(0x180c91ff0,2,param_3,param_4,0xfffffffffffffffe);
  _DAT_180c92050 = &SystemMemoryPoolTemplate;
  _DAT_180c92058 = &DAT_180c92068;
  _DAT_180c92060 = 0;
  DAT_180c92068 = 0;
  ModuleInitializationResult = RegisterSystemModule(FUN_180942790);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统调试管理器
 * 设置系统调试管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemDebugManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfaef0 = &SystemMemoryPoolTemplate;
  _DAT_180bfaef8 = &DAT_180bfaf08;
  DAT_180bfaf08 = 0;
  _DAT_180bfaf00 = 0x10;
  strcpy_s(&DAT_180bfaf08,0x400,&UNK_180a27a58,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809427d0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统性能监控器
 * 设置系统性能监控所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemPerformanceMonitor(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfb310 = &SystemMemoryPoolTemplate;
  _DAT_180bfb318 = &DAT_180bfb328;
  DAT_180bfb328 = 0;
  _DAT_180bfb320 = 3;
  strcpy_s(&DAT_180bfb328,0x400,&UNK_180a27a6c,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_1809427f0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统日志管理器
 * 设置系统日志管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemLogManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bfb730 = &SystemMemoryPoolTemplate;
  _DAT_180bfb738 = &DAT_180bfb748;
  DAT_180bfb748 = 0;
  _DAT_180bfb740 = 5;
  strcpy_s(&DAT_180bfb748,0x400,&UNK_180a27a70,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942810);
  return (ModuleInitializationResult != 0) - 1;
}
  DAT_180bf6060 = 0;
  _DAT_180bf6058 = 0xd;
  strcpy_s(&DAT_180bf6060,0x20,&UNK_180a01300,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942a60);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统网络管理器
 * 设置系统网络管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemNetworkManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf6498 = &SystemStringMemoryTemplate;
  _DAT_180bf64a0 = &DAT_180bf64b0;
  DAT_180bf64b0 = 0;
  _DAT_180bf64a8 = 9;
  strcpy_s(&DAT_180bf64b0,0x20,&UNK_180a01330,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942a80);
  return (ModuleInitializationResult != 0) - 1;
}
  DAT_180bf6510 = 0;
  _DAT_180bf6508 = 0xd;
  strcpy_s(&DAT_180bf6510,0x20,&UNK_180a01300,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942fa0);
  return (ModuleInitializationResult != 0) - 1;
}
/**
 * 初始化系统安全管理器
 * 设置系统安全管理所需的数据结构和回调函数
 * 
 * @return 初始化成功返回0，失败返回-1
 */
int InitializeSystemSecurityManager(void)
{
  int64_t ModuleInitializationResult;
  uint64_t in_R9;
  _DAT_180bf6558 = &SystemStringMemoryTemplate;
  _DAT_180bf6560 = &DAT_180bf6570;
  DAT_180bf6570 = 0;
  _DAT_180bf6568 = 9;
  strcpy_s(&DAT_180bf6570,0x20,&UNK_180a01330,in_R9,0xfffffffffffffffe);
  ModuleInitializationResult = RegisterSystemModule(FUN_180942fc0);
  return (ModuleInitializationResult != 0) - 1;
}
  DAT_180c82841 = 1;
  DAT_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
void InitializeNativeSDLL(uint64_t initFlags)
{
  uint64_t auStackX_18 [2];
  DAT_180c82841 = 0;
  DAT_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
  DAT_180bf0102 = 0;
  uVar5 = AllocateSystemMemory(_DAT_180c8ed18,0x7b8,8,3);
  _DAT_180c82868 = InitializeMemoryBlock(uVar5);
  InitializeStackBuffer(&puStack_98,param_1);
  uVar3 = ValidateStackData(&puStack_98,&SystemStackValidationTemplate);
  MemoryAddress4 = (ulonglong)(int)uVar3;
  if (uVar3 < uStack_88) {
    pcVar12 = (char *)(lStack_90 + MemoryAddress4);
    do {
      StringIndex = (int)MemoryAddress4;
      if (*pcVar12 == ' ') goto LAB_1800451a4;
      MemoryAddress4 = (ulonglong)(StringIndex + 1U);
      pcVar12 = pcVar12 + 1;
    } while (StringIndex + 1U < uStack_88);
  }
  StringIndex = -1;
LAB_1800451a4:
  uVar3 = StringIndex + 1;
  MemoryAddress4 = (ulonglong)(int)uVar3;
  if (uVar3 < uStack_88) {
    pcVar12 = (char *)(lStack_90 + MemoryAddress4);
    do {
      if (*pcVar12 == ' ') goto LAB_1800451ca;
      MemoryAddress5 = (int)MemoryAddress4 + 1;
      MemoryAddress4 = (ulonglong)MemoryAddress5;
      pcVar12 = pcVar12 + 1;
    } while (MemoryAddress5 < uStack_88);
  }
  MemoryAddress4 = 0xffffffff;
LAB_1800451ca:
  if (StringIndex != -1) {
    ProcessStackOperation(&puStack_98,&puStack_78,uVar3,MemoryAddress4);
    pMemoryAddress3 = &DAT_18098bc73;
    if (puStack_70 != (void *)0x0) {
      pMemoryAddress3 = puStack_70;
    }
    uVar4 = atoi(pMemoryAddress3);
    *(uint32_t *)(_DAT_180c82868 + 0x7b4) = uVar4;
    puStack_78 = &UNK_180a3c3e0;
    if (puStack_70 != (void *)0x0) {
      CleanupSystemResources();
    }
    puStack_70 = (void *)0x0;
    uStack_60 = 0;
    puStack_78 = &SystemBufferTemplate;
  }
  FinalizeSystemState();
  uVar5 = AllocateSystemMemory(_DAT_180c8ed18,0x213458,8,10);
  _DAT_180c86940 = ConfigureMemoryAllocation(uVar5);
  plVar6 = (longlong *)AllocateSystemMemory(_DAT_180c8ed18,0xe8,8,3);
  plStackX_10 = plVar6;
  ProcessMemoryData(plVar6);
  *plVar6 = (longlong)&SystemGlobalDataTemplate;
  pplStackX_18 = (longlong **)(plVar6 + 0x18);
  *pplStackX_18 = (longlong *)&SystemBufferTemplate;
  plVar6[0x19] = 0;
  *(uint32_t *)(plVar6 + 0x1a) = 0;
  *pplStackX_18 = (longlong *)&UNK_180a3c3e0;
  plVar6[0x1b] = 0;
  plVar6[0x19] = 0;
  *(uint32_t *)(plVar6 + 0x1a) = 0;
  (*(code *)(*pplStackX_18)[2])(pplStackX_18,param_1);
  plVar6[0x1c] = param_2;
  plStack_48 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar7 = _DAT_180c82868;
  pplStackX_18 = &plStackX_10;
  plStackX_10 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  ExecuteSystemTask(lVar7,&plStackX_10);
  while( true ) {
    if ((void *)*plVar6 == &SystemGlobalDataTemplate) {
      cVar16 = (char)plVar6[2] != '\0';
    }
    else {
      cVar16 = (**(code **)((void *)*plVar6 + 0x68))(plVar6);
    }
    if (cVar16 != '\0') break;
    Sleep(1);
  }
  (**(code **)(*plVar6 + 0x38))(plVar6);
  puStack_98 = &UNK_180a3c3e0;
  if (lStack_90 == 0) {
    return;
  }
  CleanupSystemResources();
}
  DAT_180c82841 = 1;
  DAT_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
void InitializeNativeCore(uint64_t initFlags)
{
  uint64_t auStackX_18 [2];
  DAT_180c82841 = 0;
  DAT_180c82840 = 0;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
void InitializeNativeCoreCLR(uint64_t initFlags)
{
  uint64_t auStackX_18 [2];
  DAT_180c82841 = 0;
  DAT_180c82840 = 1;
  auStackX_18[0] = GetModuleHandleA(0);
  InitializeSystemData(param_1,auStackX_18);
  ProcessSystemInitialization();
  FinalizeSystemSetup();
  return;
}
    DAT_180c82852 = iVar8 != 0xb7;
  }
  ProcessSystemStringData(_DAT_180c86928,0,0xd,&SystemStringProcessingTemplate,DAT_180c82852);
  if (puStack_28 == (void *)0x0) {
    return;
  }
  CleanupSystemResources();
}
    DAT_180c82870 = 0;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  InitializeSystemBuffer(&puStack_48,param_1);
  ProcessSystemDataBuffer(&uStack_68,&puStack_48);
  puStack_48 = &UNK_180a3c3e0;
  if (lStack_40 != 0) {
    CleanupSystemResources();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &SystemBufferTemplate;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_180652b60(&uStack_88,&uStack_68);
  FUN_180653220(&uStack_88,auStack_a8);
  if (0x1fff < uStack_98) {
    uStack_98 = 0x1fff;
  }
  pMemoryAddress = &DAT_18098bc73;
  if (puStack_a0 != (void *)0x0) {
    pMemoryAddress = puStack_a0;
  }
  memcpy(&DAT_180c82870,pMemoryAddress,(longlong)(int)uStack_98);
}
    DAT_180c84870 = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  MemoryAddress = (uint)lVar2;
  if (0x1fff < MemoryAddress) {
    MemoryAddress = 0x1fff;
  }
  memcpy(&DAT_180c84870,param_1,(longlong)(int)MemoryAddress);
}
          DAT_180c82860 = 1;
          DAT_180c82853 = 0;
          *(uint8_t *)(_DAT_180c86870 + 0x1f0) = 0;
          puStack_2c8 = &UNK_180a3c3e0;
          uStack_2b0 = 0;
          puStack_2c0 = (uint8_t *)0x0;
          uStack_2b8 = 0;
          if (pMemoryAddress7 != (void *)0x0) {
            lVar20 = -1;
            do {
              lVar9 = lVar20;
              lVar20 = lVar9 + 1;
            } while (pMemoryAddress7[lVar20] != '\0');
            if ((int)lVar20 != 0) {
              LoopCounter9 = (int)lVar9 + 2;
              iVar6 = LoopCounter9;
              if (LoopCounter9 < 0x10) {
                iVar6 = 0x10;
              }
              pMemoryAddress1 = (uint8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,0x13);
              *pMemoryAddress1 = 0;
              puStack_2c0 = pMemoryAddress1;
              uVar7 = FUN_18064e990(pMemoryAddress1);
              uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar7);
              memcpy(pMemoryAddress1,pMemoryAddress7,LoopCounter9);
            }
          }
          uStack_2b8 = 0;
          strstr(&DAT_18098bc73,&UNK_1809fd160);
          strstr(&DAT_18098bc73,&UNK_1809fd170);
          strstr(&DAT_18098bc73,&UNK_1809fd180);
          strstr(&DAT_18098bc73,&UNK_1809fd190);
          strstr(&DAT_18098bc73,&UNK_1809fd1a0);
          strstr(&DAT_18098bc73,&UNK_1809fd1b0);
          DAT_180c82842 = 1;
          DAT_180c8ecec = 1;
          lVar20 = strstr(pMemoryAddress7,&UNK_1809fd1c0);
          if (lVar20 == 0) {
            lVar20 = strstr(pMemoryAddress7,&UNK_1809fd1d8);
            if ((((((lVar20 == 0) && (lVar20 = strstr(pMemoryAddress7,&UNK_1809fd1f0), lVar20 == 0)) &&
                  (lVar20 = strstr(pMemoryAddress7,&UNK_1809fd208), lVar20 == 0)) &&
                 ((lVar20 = strstr(pMemoryAddress7,&UNK_1809fd220), lVar20 == 0 &&
                  (lVar20 = strstr(pMemoryAddress7,&UNK_1809fd238), lVar20 == 0)))) &&
                ((lVar20 = strstr(pMemoryAddress7,&UNK_1809fd250), lVar20 == 0 &&
                 ((lVar20 = strstr(pMemoryAddress7,&UNK_1809fd260), lVar20 == 0 &&
                  (lVar20 = strstr(pMemoryAddress7,&UNK_1809fd270), lVar20 == 0)))))) &&
               (lVar20 = strstr(pMemoryAddress7,&UNK_1809fd288), lVar20 == 0)) {
              *(uint16_t *)(lVar24 + 0x24) = 0x101;
              *(uint8_t *)(lVar24 + 0x28) = 1;
            }
            else {
              DAT_180c82851 = 1;
            }
          }
          else {
            *(uint16_t *)(lVar24 + 0x24) = 0;
          }
          puStack_2c0 = (uint8_t *)0x0;
          uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
          puStack_2c8 = &SystemBufferTemplate;
        }
        else if (uVar8 == 0xb) {
          iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd298);
          if (iVar6 != 0) goto LAB_18004d668;
          DAT_180c82860 = 1;
          DAT_180c82853 = 0;
          DAT_180c82842 = 1;
          lVar24 = strstr(pMemoryAddress7,&UNK_1809fd2a8);
          if (lVar24 != 0) {
            pMemoryAddress7 = &UNK_1809fd2c0;
            goto LAB_18004d511;
          }
        }
        else {
          if (uVar8 == 0xc) {
            iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd318);
            bVar31 = iVar6 == 0;
          }
          else {
LAB_18004d668:
            bVar31 = false;
          }
          if (bVar31) {
            InitializeSystemBuffer(&puStack_238,pMemoryAddress7);
            uVar8 = FUN_1806298d0(&puStack_238,&UNK_1809fd318);
            BufferSize1 = (ulonglong)(int)uVar8;
            if (uVar8 < uStack_228) {
              pcVar12 = (char *)(lStack_230 + BufferSize1);
              do {
                iVar6 = (int)BufferSize1;
                if (*pcVar12 == ' ') goto LAB_18004d6b7;
                BufferSize1 = (ulonglong)(iVar6 + 1U);
                pcVar12 = pcVar12 + 1;
              } while (iVar6 + 1U < uStack_228);
            }
            iVar6 = -1;
LAB_18004d6b7:
            uVar8 = iVar6 + 1;
            BufferSize1 = (ulonglong)(int)uVar8;
            if (uVar8 < uStack_228) {
              pcVar12 = (char *)(lStack_230 + BufferSize1);
              do {
                if (*pcVar12 == ' ') goto LAB_18004d6dd;
                BufferSize6 = (int)BufferSize1 + 1;
                BufferSize1 = (ulonglong)BufferSize6;
                pcVar12 = pcVar12 + 1;
              } while (BufferSize6 < uStack_228);
            }
            BufferSize1 = 0xffffffff;
LAB_18004d6dd:
            if (iVar6 != -1) {
              FUN_180629a40(&puStack_238,&puStack_1b8,uVar8,BufferSize1);
              iVar6 = iStack_1a8;
              LoopCounter9 = 0;
              lVar20 = strchr(puStack_1b0,0x2e);
              if (lVar20 != 0) {
                do {
                  LoopCounter9 = LoopCounter9 + 1;
                  lVar20 = strchr(lVar20 + 1,0x2e);
                } while (lVar20 != 0);
                if ((LoopCounter9 == 3) && (iVar6 - 7U < 9)) {
                  pMemoryAddress8 = &DAT_18098bc73;
                  if (puStack_1b0 != (void *)0x0) {
                    pMemoryAddress8 = puStack_1b0;
                  }
                  (**(code **)(*(longlong *)(lVar24 + 400) + 0x10))
                            ((longlong *)(lVar24 + 400),pMemoryAddress8);
                }
              }
              puStack_1b8 = &UNK_180a3c3e0;
              if (puStack_1b0 != (void *)0x0) {
                CleanupSystemResources();
              }
              puStack_1b0 = (void *)0x0;
              uStack_1a0 = 0;
              puStack_1b8 = &SystemBufferTemplate;
            }
            puStack_238 = &UNK_180a3c3e0;
            if (lStack_230 != 0) {
              CleanupSystemResources();
            }
            lStack_230 = 0;
            uStack_220 = 0;
            puStack_238 = &SystemBufferTemplate;
          }
          else {
            if (uVar8 == 0x11) {
              iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd328);
              bVar31 = iVar6 == 0;
            }
            else {
              bVar31 = false;
            }
            if (bVar31) {
              InitializeSystemBuffer(&puStack_218,pMemoryAddress7);
              uVar8 = FUN_1806298d0(&puStack_218,&UNK_1809fd328);
              BufferSize1 = (ulonglong)(int)uVar8;
              if (uVar8 < uStack_208) {
                pcVar12 = (char *)(lStack_210 + BufferSize1);
                do {
                  iVar6 = (int)BufferSize1;
                  if (*pcVar12 == ' ') goto LAB_18004d849;
                  BufferSize1 = (ulonglong)(iVar6 + 1U);
                  pcVar12 = pcVar12 + 1;
                } while (iVar6 + 1U < uStack_208);
              }
              iVar6 = -1;
LAB_18004d849:
              uVar8 = iVar6 + 1;
              BufferSize1 = (ulonglong)(int)uVar8;
              if (uVar8 < uStack_208) {
                pcVar12 = (char *)(lStack_210 + BufferSize1);
                do {
                  if (*pcVar12 == ' ') goto LAB_18004d876;
                  BufferSize6 = (int)BufferSize1 + 1;
                  BufferSize1 = (ulonglong)BufferSize6;
                  pcVar12 = pcVar12 + 1;
                } while (BufferSize6 < uStack_208);
              }
              BufferSize1 = 0xffffffff;
LAB_18004d876:
              if (iVar6 != -1) {
                FUN_180629a40(&puStack_218,&puStack_198,uVar8,BufferSize1);
                iVar6 = iStack_188;
                LoopCounter9 = 0;
                lVar24 = strchr(puStack_190,0x2e);
                if (lVar24 != 0) {
                  do {
                    LoopCounter9 = LoopCounter9 + 1;
                    lVar24 = strchr(lVar24 + 1,0x2e);
                  } while (lVar24 != 0);
                  if ((LoopCounter9 == 3) && (iVar6 - 7U < 9)) {
                    pMemoryAddress8 = &DAT_18098bc73;
                    if (puStack_190 != (void *)0x0) {
                      pMemoryAddress8 = puStack_190;
                    }
                    (**(code **)(_DAT_180bf5bc0 + 0x10))(&DAT_180bf5bc0,pMemoryAddress8);
                  }
                }
                puStack_198 = &UNK_180a3c3e0;
                if (puStack_190 != (void *)0x0) {
                  CleanupSystemResources();
                }
                puStack_190 = (void *)0x0;
                uStack_180 = 0;
                puStack_198 = &SystemBufferTemplate;
              }
              puStack_218 = &UNK_180a3c3e0;
              if (lStack_210 != 0) {
                CleanupSystemResources();
              }
              lStack_210 = 0;
              uStack_200 = 0;
              puStack_218 = &SystemBufferTemplate;
            }
            else {
              if (uVar8 == 0xe) {
                iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd340);
                bVar31 = iVar6 == 0;
              }
              else {
                bVar31 = false;
              }
              if (bVar31) {
                InitializeSystemBuffer(&puStack_1f8,pMemoryAddress7);
                uVar8 = FUN_1806298d0(&puStack_1f8,&UNK_1809fd340);
                BufferSize1 = (ulonglong)(int)uVar8;
                if (uVar8 < uStack_1e8) {
                  pcVar12 = (char *)(lStack_1f0 + BufferSize1);
                  do {
                    if (*pcVar12 == ' ') goto LAB_18004d9e4;
                    uVar8 = (int)BufferSize1 + 1;
                    BufferSize1 = (ulonglong)uVar8;
                    pcVar12 = pcVar12 + 1;
                  } while (uVar8 < uStack_1e8);
                }
                BufferSize1 = 0xffffffff;
LAB_18004d9e4:
                uVar8 = (int)BufferSize1 + 1;
                BufferSize8 = (ulonglong)(int)uVar8;
                if (uVar8 < uStack_1e8) {
                  pcVar12 = (char *)(lStack_1f0 + BufferSize8);
                  do {
                    if (*pcVar12 == ' ') goto LAB_18004da0a;
                    BufferSize6 = (int)BufferSize8 + 1;
                    BufferSize8 = (ulonglong)BufferSize6;
                    pcVar12 = pcVar12 + 1;
                  } while (BufferSize6 < uStack_1e8);
                }
                BufferSize8 = 0xffffffff;
LAB_18004da0a:
                if ((int)BufferSize1 != -1) {
                  FUN_180629a40(&puStack_1f8,&puStack_2a8,uVar8,BufferSize8);
                  FUN_180629c00(&puStack_2a8);
                  if (uStack_298 != 0) {
                    iVar6 = 0;
                    lVar20 = (longlong)(int)(uStack_298 - 1);
                    if (0 < (int)(uStack_298 - 1)) {
                      do {
                        if (puStack_2a0[lVar20] != '\"') break;
                        iVar6 = iVar6 + 1;
                        lVar20 = lVar20 + -1;
                      } while (0 < lVar20);
                    }
                    uStack_298 = uStack_298 - iVar6;
                    puStack_2a0[uStack_298] = 0;
                  }
                  FUN_18062c1e0(&puStack_2a8,1);
                  pMemoryAddress8 = &DAT_18098bc73;
                  if (puStack_2a0 != (void *)0x0) {
                    pMemoryAddress8 = puStack_2a0;
                  }
                  lVar20 = -1;
                  do {
                    lVar20 = lVar20 + 1;
                  } while (pMemoryAddress8[lVar20] != '\0');
                  if ((int)lVar20 < 0x400) {
                    _DAT_180bf5c40 = (int)lVar20;
                    strcpy_s(_DAT_180bf5c38,0x400);
                  }
                  else {
                    FUN_180626f80(&UNK_18098bc48,0x400);
                    _DAT_180bf5c40 = 0;
                    *_DAT_180bf5c38 = 0;
                  }
                  uVar8 = uStack_298;
                  BufferSize1 = (ulonglong)uStack_298;
                  if (puStack_2a0 != (void *)0x0) {
                    FUN_1806277c0(lVar24 + 0x170,BufferSize1);
                  }
                  if (uVar8 != 0) {
                    memcpy(*(uint64_t *)(lVar24 + 0x178),puStack_2a0,BufferSize1);
                  }
                  *(uint32_t *)(lVar24 + 0x180) = 0;
                  if (*(longlong *)(lVar24 + 0x178) != 0) {
                    *(uint8_t *)(BufferSize1 + *(longlong *)(lVar24 + 0x178)) = 0;
                  }
                  *(uint32_t *)(lVar24 + 0x18c) = uStack_28c;
                  puStack_2a8 = &UNK_180a3c3e0;
                  if (puStack_2a0 != (void *)0x0) {
                    FUN_18064e900(puStack_2a0,puStack_2a0);
                  }
                  puStack_2a0 = (void *)0x0;
                  uStack_290 = 0;
                  puStack_2a8 = &SystemBufferTemplate;
                  BufferSize1 = 0;
                }
                puStack_1f8 = &UNK_180a3c3e0;
                if (lStack_1f0 != 0) {
                  FUN_18064e900(lStack_1f0,BufferSize1);
                }
                lStack_1f0 = 0;
                uStack_1e0 = 0;
                puStack_1f8 = &SystemBufferTemplate;
              }
              else {
                if (uVar8 == 0x16) {
                  iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd350);
                  if (iVar6 == 0) {
                    DAT_180c82844 = 1;
                    DAT_180c82843 = 1;
                    goto LAB_18004d527;
                  }
LAB_18004dbe3:
                  bVar31 = false;
                }
                else {
                  if (uVar8 != 0x12) goto LAB_18004dbe3;
                  iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd368);
                  bVar31 = iVar6 == 0;
                }
                if (bVar31) {
                  InitializeSystemBuffer(&puStack_1d8,pMemoryAddress7);
                  uVar8 = FUN_1806298d0(&puStack_1d8,&UNK_1809fd368);
                  BufferSize1 = (ulonglong)(int)uVar8;
                  if (uVar8 < uStack_1c8) {
                    pcVar12 = (char *)(lStack_1d0 + BufferSize1);
                    do {
                      if (*pcVar12 == ' ') goto LAB_18004dc44;
                      uVar8 = (int)BufferSize1 + 1;
                      BufferSize1 = (ulonglong)uVar8;
                      pcVar12 = pcVar12 + 1;
                    } while (uVar8 < uStack_1c8);
                  }
                  BufferSize1 = 0xffffffff;
LAB_18004dc44:
                  uVar8 = (int)BufferSize1 + 1;
                  BufferSize8 = (ulonglong)(int)uVar8;
                  if (uVar8 < uStack_1c8) {
                    pcVar12 = (char *)(lStack_1d0 + BufferSize8);
                    do {
                      if (*pcVar12 == ' ') goto LAB_18004dc6a;
                      BufferSize6 = (int)BufferSize8 + 1;
                      BufferSize8 = (ulonglong)BufferSize6;
                      pcVar12 = pcVar12 + 1;
                    } while (BufferSize6 < uStack_1c8);
                  }
                  BufferSize8 = 0xffffffff;
LAB_18004dc6a:
                  if ((int)BufferSize1 != -1) {
                    FUN_180629a40(&puStack_1d8,&puStack_258,uVar8,BufferSize8);
                    FUN_18062c1e0(&puStack_258,1);
                    uVar8 = uStack_248;
                    BufferSize1 = (ulonglong)uStack_248;
                    if (lStack_250 != 0) {
                      FUN_1806277c0(lVar24 + 0x170,BufferSize1);
                    }
                    if (uVar8 != 0) {
                      memcpy(*(uint64_t *)(lVar24 + 0x178),lStack_250,BufferSize1);
                    }
                    *(uint32_t *)(lVar24 + 0x180) = 0;
                    if (*(longlong *)(lVar24 + 0x178) != 0) {
                      *(uint8_t *)(BufferSize1 + *(longlong *)(lVar24 + 0x178)) = 0;
                    }
                    *(uint32_t *)(lVar24 + 0x18c) = uStack_23c;
                    *(uint8_t *)(lVar24 + 0x168) = 1;
                    puStack_258 = &UNK_180a3c3e0;
                    if (lStack_250 != 0) {
                      FUN_18064e900(lStack_250,lStack_250);
                    }
                    lStack_250 = 0;
                    uStack_240 = 0;
                    puStack_258 = &SystemBufferTemplate;
                    BufferSize1 = 0;
                  }
                  puStack_1d8 = &UNK_180a3c3e0;
                  if (lStack_1d0 != 0) {
                    FUN_18064e900(lStack_1d0,BufferSize1);
                  }
                  lStack_1d0 = 0;
                  uStack_1c0 = 0;
                  puStack_1d8 = &SystemBufferTemplate;
                }
                else {
                  if (uVar8 == 0x17) {
                    iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd380);
                    if (iVar6 == 0) {
                      DAT_180c82842 = 1;
                      goto LAB_18004d527;
                    }
LAB_18004dda1:
                    bVar31 = false;
                  }
                  else {
                    if (uVar8 != 0xb) goto LAB_18004dda1;
                    iVar6 = strcmp(pMemoryAddress1,&UNK_1809fd398);
                    bVar31 = iVar6 == 0;
                  }
                  if (bVar31) {
                    InitializeSystemBuffer(&puStack_178,pMemoryAddress7);
                    FUN_1806289a0(&puStack_178);
                    FUN_180628a40(&puStack_178);
                    InitializeDataBuffer(&DAT_180bf5770,&puStack_178);
                    DAT_180c82842 = 1;
                    puStack_178 = &UNK_180a3c3e0;
                    if (lStack_170 != 0) {
                      CleanupSystemResources();
                    }
                    lStack_170 = 0;
                    uStack_160 = 0;
                    puStack_178 = &SystemBufferTemplate;
                  }
                  else {
                    pMemoryAddress6 = &DAT_18098bc73;
                    if (pMemoryAddress1 != (uint8_t *)0x0) {
                      pMemoryAddress6 = pMemoryAddress1;
                    }
                    lVar24 = strstr(pMemoryAddress6);
                    if (lVar24 != 0) {
                      BufferSize9 = 0;
                      puStack_288 = &UNK_180a3c3e0;
                      uStack_270 = 0;
                      puStack_280 = (uint32_t *)0x0;
                      uStack_278 = 0;
                      pMemoryAddress3 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
                      *(uint8_t *)pMemoryAddress3 = 0;
                      puStack_280 = pMemoryAddress3;
                      uVar7 = FUN_18064e990(pMemoryAddress3);
                      uStack_270 = CONCAT44(uStack_270._4_4_,uVar7);
                      *pMemoryAddress3 = 0x726f662f;
                      pMemoryAddress3[1] = 0x5f646563;
                      pMemoryAddress3[2] = 0x666e6f63;
                      pMemoryAddress3[3] = 0x3a6769;
                      uStack_278 = 0xf;
                      BufferSize1 = BufferSize9;
                      BufferSize8 = BufferSize9;
                      if (0 < (int)(uVar8 - 0xe)) goto LAB_18004ded0;
                      goto LAB_18004df0e;
                    }
                    if (uVar8 == 0xf) {
                      iVar6 = strcmp(pMemoryAddress1);
                      if (iVar6 == 0) {
                        cStack_338 = '\x01';
                        *(uint8_t *)(_DAT_180c8a9a0 + 0x22) = 1;
                        goto LAB_18004d527;
                      }
LAB_18004e25f:
                      bVar31 = false;
                    }
                    else {
                      if (uVar8 == 0xc) {
                        iVar6 = strcmp(pMemoryAddress1);
                        if (iVar6 == 0) {
                          pMemoryAddress7 = &UNK_1809fd3f0;
LAB_18004d511:
                          ProcessNetworkData(_DAT_180c86928,pMemoryAddress7);
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x1a) {
                        iVar6 = strcmp(pMemoryAddress1);
                        if (iVar6 == 0) {
                          *(uint8_t *)(_DAT_180c8a9a0 + 0x21) = 1;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x10) {
                        iVar6 = strcmp(pMemoryAddress1);
                        if (iVar6 == 0) {
                          DAT_180bf0101 = 0;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 == 0x18) {
                        iVar6 = strcmp(pMemoryAddress1);
                        if (iVar6 == 0) {
                          DAT_180c8ecec = 1;
                          goto LAB_18004d527;
                        }
                        goto LAB_18004e25f;
                      }
                      if (uVar8 != 0x14) goto LAB_18004e25f;
                      iVar6 = strcmp(pMemoryAddress1);
                      bVar31 = iVar6 == 0;
                    }
                    lVar24 = _DAT_180c8a9a0;
                    if (bVar31) {
                      InitializeSystemBuffer(&puStack_330,pMemoryAddress7);
                      FUN_1806289a0(&puStack_330);
                      uVar8 = 0;
                      pcVar12 = pcStack_328;
                      if (uStack_320 != 0) {
                        do {
                          if (*pcVar12 == '/') goto LAB_18004e2b6;
                          uVar8 = uVar8 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar8 < uStack_320);
                      }
                      uVar8 = 0xffffffff;
LAB_18004e2b6:
                      if (uVar8 != 0xffffffff) {
                        lVar24 = FUN_180629a40(&puStack_330,&puStack_c8,0);
                        if (pcStack_328 != (char *)0x0) {
                          CleanupSystemResources();
                        }
                        uStack_320 = *(uint *)(lVar24 + 0x10);
                        pcStack_328 = *(char **)(lVar24 + 8);
                        uStack_318 = *(longlong *)(lVar24 + 0x18);
                        *(uint32_t *)(lVar24 + 0x10) = 0;
                        *(uint64_t *)(lVar24 + 8) = 0;
                        *(uint64_t *)(lVar24 + 0x18) = 0;
                        puStack_c8 = &UNK_180a3c3e0;
                        if (lStack_c0 != 0) {
                          CleanupSystemResources();
                        }
                        lStack_c0 = 0;
                        uStack_b0 = 0;
                        puStack_c8 = &SystemBufferTemplate;
                      }
                      FUN_180628a40(&puStack_330);
                      uVar8 = uStack_320;
                      lVar24 = _DAT_180c8a9a0;
                      *(uint8_t *)(_DAT_180c8a9a0 + 0x48) = 1;
                      BufferSize1 = (ulonglong)uStack_320;
                      if (pcStack_328 != (char *)0x0) {
                        FUN_1806277c0(lVar24 + 0x50,BufferSize1);
                      }
                      if (uVar8 != 0) {
                        memcpy(*(uint64_t *)(lVar24 + 0x58),pcStack_328,BufferSize1);
                      }
                      *(uint32_t *)(lVar24 + 0x60) = 0;
                      if (*(longlong *)(lVar24 + 0x58) != 0) {
                        *(uint8_t *)(BufferSize1 + *(longlong *)(lVar24 + 0x58)) = 0;
                      }
                      *(uint *)(lVar24 + 0x6c) = uStack_318._4_4_;
                      puStack_330 = &UNK_180a3c3e0;
                      if (pcStack_328 != (char *)0x0) {
                        FUN_18064e900(pcStack_328,pcStack_328);
                      }
                      pcStack_328 = (char *)0x0;
                      uStack_318 = (ulonglong)uStack_318._4_4_ << 0x20;
                      puStack_330 = &SystemBufferTemplate;
                    }
                    else if (cStack_338 == '\0') {
                      BufferSize7 = FUN_180628ca0();
                      pMemoryAddress6 = (uint8_t *)0x0;
                      puStack_2e8 = &UNK_180a3c3e0;
                      uStack_2d0 = 0;
                      puStack_2e0 = (uint8_t *)0x0;
                      uStack_2d8 = 0;
                      BufferSize6 = uStack_334 | 1;
                      pMemoryAddress1 = pMemoryAddress6;
                      pMemoryAddress4 = pMemoryAddress6;
                      uStack_334 = BufferSize6;
                      uStack_158 = BufferSize7;
                      if (uVar8 != 0) {
                        iVar6 = uVar8 + 1;
                        if (iVar6 < 0x10) {
                          iVar6 = 0x10;
                        }
                        pMemoryAddress4 = (uint8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,0x13);
                        *pMemoryAddress4 = 0;
                        puStack_2e0 = pMemoryAddress4;
                        pMemoryAddress1 = (uint8_t *)FUN_18064e990(pMemoryAddress4);
                        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)pMemoryAddress1);
                      }
                      lVar24 = 1;
                      uVar30 = 1;
                      if (1 < (int)uVar8) {
                        BufferSize1 = 0;
                        do {
                          BufferSize7 = uStack_158;
                          BufferSize6 = uStack_334;
                          if (uVar8 <= uVar30) break;
                          BufferSize = puStack_308[lVar24];
                          iVar6 = (int)BufferSize1;
                          BufferSize3 = iVar6 + 1;
                          BufferSize1 = (ulonglong)BufferSize3;
                          if (BufferSize3 != 0) {
                            BufferSize6 = iVar6 + 2;
                            if (pMemoryAddress4 == (uint8_t *)0x0) {
                              if ((int)BufferSize6 < 0x10) {
                                BufferSize6 = 0x10;
                              }
                              pMemoryAddress4 = (uint8_t *)
                                        FUN_18062b420(_DAT_180c8ed18,(longlong)(int)BufferSize6,0x13);
                              *pMemoryAddress4 = 0;
                            }
                            else {
                              if (BufferSize6 <= (uint)pMemoryAddress1) goto LAB_18004e56d;
                              uStack_348 = 0x13;
                              pMemoryAddress4 = (uint8_t *)
                                        FUN_18062b8b0(_DAT_180c8ed18,pMemoryAddress4,BufferSize6,0x10);
                            }
                            puStack_2e0 = pMemoryAddress4;
                            BufferSize6 = FUN_18064e990(pMemoryAddress4);
                            uStack_2d0 = CONCAT44(uStack_2d0._4_4_,BufferSize6);
                            pMemoryAddress1 = (uint8_t *)(ulonglong)BufferSize6;
                          }
LAB_18004e56d:
                          pMemoryAddress6[(longlong)pMemoryAddress4] = BufferSize;
                          pMemoryAddress4[BufferSize1] = 0;
                          pMemoryAddress6 = (uint8_t *)(ulonglong)BufferSize3;
                          uVar30 = uVar30 + 1;
                          lVar24 = lVar24 + 1;
                          BufferSize7 = uStack_158;
                          BufferSize6 = uStack_334;
                          uStack_2d8 = BufferSize3;
                        } while (lVar24 < (int)uVar8);
                      }
                      ProcessMemoryData(pMemoryAddress1,&puStack_2e8,BufferSize7);
                      uStack_334 = BufferSize6 & 0xfffffffe;
                      puStack_2e8 = &UNK_180a3c3e0;
                      if (pMemoryAddress4 != (uint8_t *)0x0) {
                        FUN_18064e900(pMemoryAddress4);
                      }
                      puStack_2e0 = (uint8_t *)0x0;
                      uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
                      puStack_2e8 = &SystemBufferTemplate;
                      pMemoryAddress1 = puStack_308;
                      pMemoryAddress7 = puStack_268;
                    }
                    else {
                      cStack_338 = '\0';
                      if (pMemoryAddress1 != (uint8_t *)0x0) {
                        FUN_1806277c0(_DAT_180c8a9a0 + 0x28,pMemoryAddress4);
                      }
                      if (uVar8 != 0) {
                        memcpy(*(uint64_t *)(lVar24 + 0x30),pMemoryAddress1,pMemoryAddress4);
                      }
                      *(uint32_t *)(lVar24 + 0x38) = 0;
                      if (*(longlong *)(lVar24 + 0x30) != 0) {
                        pMemoryAddress4[*(longlong *)(lVar24 + 0x30)] = 0;
                      }
                      *(uint32_t *)(lVar24 + 0x44) = uStack_2f8._4_4_;
                    }
                  }
                }
              }
            }
          }
        }
LAB_18004d527:
        pMemoryAddress4 = (uint8_t *)0x0;
        uStack_300 = 0;
        lVar24 = lStack_260;
        if (pMemoryAddress1 != (uint8_t *)0x0) {
          *pMemoryAddress1 = 0;
        }
      }
      else {
        FUN_1806277c0(&puStack_310,uVar8 + 1);
        puStack_308[uStack_300] = bVar1;
        uStack_300 = uStack_300 + 1;
        pMemoryAddress4 = (uint8_t *)(ulonglong)uStack_300;
        pMemoryAddress4[(longlong)puStack_308] = 0;
        pMemoryAddress1 = puStack_308;
      }
      uStack_2f0 = uStack_2f0 + 1;
    } while (uStack_2f0 < uStack_150);
  }
  puStack_98 = &SystemMemoryPool;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x10;
  strcpy_s(auStack_80,0x40,&UNK_1809fd4b8);
  cVar5 = ProcessSystemData(lVar24,&puStack_98);
  puStack_98 = &SystemBufferTemplate;
  if (cVar5 != '\0') {
    *(uint32_t *)(lVar24 + 0x20) = 1;
  }
  (**(code **)(**(longlong **)(_DAT_180c8ed08 + 0x18) + 0x30))
            (*(longlong **)(_DAT_180c8ed08 + 0x18),DAT_180c8ecec);
  puStack_310 = &UNK_180a3c3e0;
  if (pMemoryAddress1 != (uint8_t *)0x0) {
    FUN_18064e900(pMemoryAddress1);
  }
  puStack_308 = (uint8_t *)0x0;
  uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
  puStack_310 = &SystemBufferTemplate;
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_368);
  while (pbVar15 = pbVar15 + 1, uVar8 != 0) {
LAB_18004d1a2:
    bVar1 = *pbVar15;
    uVar8 = (uint)pbVar15[lVar24];
    if (bVar1 != uVar8) break;
  }
  if ((int)(bVar1 - uVar8) < 1) {
LAB_18004d1b9:
    BufferSize7 = 1;
  }
  else {
LAB_18004d1c1:
    BufferSize7 = 0;
  }
  FUN_18066bdc0(lVar9,ModuleInitializationResult0,lVar20,BufferSize7);
  while( true ) {
    BufferSize8 = (ulonglong)(iVar6 + 1);
    BufferSize1 = BufferSize1 + 1;
    if ((longlong)(int)(uVar8 - 0xe) <= (longlong)BufferSize1) break;
LAB_18004ded0:
    iVar6 = (int)BufferSize8;
    BufferSize8 = BufferSize9;
    BufferSize5 = BufferSize9;
    do {
      BufferSize6 = (uint)BufferSize5;
      if (pMemoryAddress1[BufferSize8 + BufferSize1] != *(char *)(BufferSize5 + (longlong)pMemoryAddress3)) break;
      BufferSize6 = BufferSize6 + 1;
      BufferSize5 = (ulonglong)BufferSize6;
      BufferSize8 = BufferSize8 + 1;
    } while ((longlong)BufferSize8 < 0xf);
    if (BufferSize6 == 0xf) goto LAB_18004df14;
  }
LAB_18004df0e:
  iVar6 = -1;
LAB_18004df14:
  FUN_180629a40(&puStack_310,&puStack_128,iVar6 + 0xf,pMemoryAddress4);
  puStack_e8 = (uint64_t *)0x0;
  puStack_e0 = (uint64_t *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 3;
  if (lStack_120 != 0) {
    InitializeSystemBuffers(&puStack_128,&puStack_e8,&UNK_1809fd3c8);
  }
  puVar3 = puStack_e8;
  FUN_180627ae0(&puStack_148,puStack_e8);
  FUN_180627ae0(&puStack_108,puVar3 + 4);
  puVar4 = puStack_e0;
  if (((longlong)puStack_e0 - (longlong)puVar3 & 0xffffffffffffffe0U) != 0x40) {
LAB_18004e088:
    puStack_108 = &UNK_180a3c3e0;
    if (lStack_100 != 0) {
      CleanupSystemResources();
    }
    lStack_100 = 0;
    uStack_f0 = 0;
    puStack_108 = &SystemBufferTemplate;
    puStack_148 = &UNK_180a3c3e0;
    if (lStack_140 != 0) {
      CleanupSystemResources();
    }
    lStack_140 = 0;
    uStack_130 = 0;
    puStack_148 = &SystemBufferTemplate;
    for (pBufferSize2 = puVar3; pBufferSize2 != puVar4; pBufferSize2 = pBufferSize2 + 4) {
      (**(code **)*pBufferSize2)(pBufferSize2,0);
    }
    if (puVar3 != (uint64_t *)0x0) {
      FUN_18064e900(puVar3);
    }
    puStack_128 = &UNK_180a3c3e0;
    if (lStack_120 != 0) {
      CleanupSystemResources();
    }
    lStack_120 = 0;
    uStack_110 = 0;
    puStack_128 = &SystemBufferTemplate;
    puStack_288 = &UNK_180a3c3e0;
    FUN_18064e900(pMemoryAddress3);
  }
  ProcessGameData(_DAT_180c86920,&puStack_148,&puStack_108);
  lVar9 = _DAT_180c86920 + 0x90;
  lVar24 = FUN_18062b420(_DAT_180c8ed18,0x40,*(uint8_t *)(_DAT_180c86920 + 0xb8));
  FUN_1806279c0(lVar24 + 0x20,&puStack_148);
  lVar20 = CalculateGameLogic(lVar9,acStack_336,lVar24 + 0x20);
  if (acStack_336[0] == '\0') {
    ProcessGamePhysics(extraout_XMM0_Da_00,lVar24);
    goto LAB_18004e088;
  }
  if (lVar20 != lVar9) {
    if (*(int *)(lVar20 + 0x30) == 0) {
LAB_18004e057:
      BufferSize7 = 1;
      goto LAB_18004e062;
    }
    if (*(int *)(lVar24 + 0x30) != 0) {
      pbVar15 = *(byte **)(lVar20 + 0x28);
      ModuleInitializationResult0 = *(longlong *)(lVar24 + 0x28) - (longlong)pbVar15;
      do {
        bVar1 = *pbVar15;
        uVar8 = (uint)pbVar15[ModuleInitializationResult0];
        if (bVar1 != uVar8) break;
        pbVar15 = pbVar15 + 1;
      } while (uVar8 != 0);
      if ((int)(bVar1 - uVar8) < 1) goto LAB_18004e057;
    }
  }
  BufferSize7 = 0;
LAB_18004e062:
  FUN_18066bdc0(lVar24,lVar20,lVar9,BufferSize7);
}
    DAT_180c912d8 = 1;
    iVar7 = _Cnd_broadcast(0x180c91240);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    iVar7 = _Mtx_unlock(0x180c91288);
    if (iVar7 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar7);
    }
    InitializeGameEngine(0x180c911a0);
  }
  *(uint32_t *)(_DAT_180c86910 + 4) = 0;
  if (*(char *)(lVar6 + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(lVar6 + 0x2b0) + 0xe0))();
    *(int *)(lVar6 + 0x224) = *(int *)(lVar6 + 0x224) + 1;
    if (*(int *)(_DAT_180c8a9c8 + 0xe0) == 0) {
      if (*(char *)(lVar6 + 0x264) == '\0') {
        iVar7 = 10;
        if (10 < *(int *)(_DAT_180c8a9c8 + 0xbd0)) {
          iVar7 = *(int *)(_DAT_180c8a9c8 + 0xbd0);
        }
        fVar14 = (float)*(double *)(lVar6 + 0x208);
        if (1.0 / (float)iVar7 <= (float)*(double *)(lVar6 + 0x208)) {
          fVar14 = 1.0 / (float)iVar7;
        }
      }
      else {
        fVar14 = *(float *)(lVar6 + 0x268);
      }
      *(float *)(lVar6 + 0x220) = fVar14;
    }
    else {
      *(uint32_t *)(lVar6 + 0x220) = 0x3d088889;
      fVar14 = 0.033333335;
    }
    ProcessInputEvent(lVar6,fVar14);
    uVar5 = _DAT_180c82868;
    if ((_DAT_180c8a9c0 != 0) &&
       (pModuleInitializationResult = *(longlong **)(_DAT_180c8a9c0 + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pModuleInitializationResult;
      (**(code **)(*pModuleInitializationResult + 0x28))();
      ProcessNetworkPacket(uVar5,&plStackX_10);
    }
    uVar5 = _DAT_180c82868;
    if (*(char *)(_DAT_180c8a9a0 + 0xa0) == '\0') {
      if ((_DAT_180c8a9c0 != 0) &&
         (pModuleInitializationResult = *(longlong **)(_DAT_180c8a9c0 + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pModuleInitializationResult;
        (**(code **)(*pModuleInitializationResult + 0x28))();
        ProcessNetworkConnection(uVar5,&plStackX_18,0);
        pModuleInitializationResult = *(longlong **)(_DAT_180c8a9c0 + 0x228);
        *(uint64_t *)(_DAT_180c8a9c0 + 0x228) = 0;
        if (pModuleInitializationResult != (longlong *)0x0) {
          (**(code **)(*pModuleInitializationResult + 0x38))();
        }
      }
      func_0x00018005c480(_DAT_180c8ed68);
      pModuleInitializationResult = _DAT_180c8ed00;
      if (*(code **)(*_DAT_180c8ed00 + 8) == (code *)&UNK_180639070) {
        *(uint32_t *)(_DAT_180c8ed00 + 9) = 0;
        puVar4 = (uint8_t *)pModuleInitializationResult[8];
        if (puVar4 != (uint8_t *)0x0) {
          *puVar4 = 0;
        }
        *(uint32_t *)((longlong)pModuleInitializationResult + 0x54) = 0;
      }
      else {
        (**(code **)(*_DAT_180c8ed00 + 8))();
      }
    }
    else {
      if (*(char *)(lVar6 + 0x22c) != '\0') {
        InitializeNetworkStack();
      }
      *(uint32_t *)(lVar6 + 0x228) = *(uint32_t *)(lVar6 + 0x224);
      StartNetworkService();
      ConfigureNetworkSettings();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar15 = (double)lStack_90 * _DAT_180c8ed50;
    _DAT_180d48d20 = _DAT_180d48d20 + 1;
    dVar16 = dVar15 - _DAT_180d48d18;
    if (1.0 < dVar16) {
      *(float *)(lVar6 + 500) = (float)((double)_DAT_180d48d20 / dVar16);
      _DAT_180d48d20 = 0;
      _DAT_180d48d18 = dVar15;
      *(float *)(lVar6 + 0x1f8) = (float)(1000.0 / *(double *)(lVar6 + 0x70));
    }
    if (0.0 < *(double *)(_DAT_180c86890 + 0x1510)) {
      ProcessGameLogic(lVar6,(float)*(double *)(_DAT_180c86890 + 0x1510));
    }
    if (*(char *)(lVar6 + 0x1ee) == '\0') {
      fVar14 = *(float *)(lVar6 + 0x200);
      dVar15 = *(double *)(lVar6 + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * _DAT_180c8ed50 < (double)fVar14 + dVar15);
      QueryPerformanceCounter(&lStack_80);
      lVar8 = lStack_80 - _DAT_180c8ed40;
      _DAT_180c8ed40 = lStack_80;
      *(double *)(lVar6 + 0x208) = (double)lVar8 * _DAT_180c8ed50;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(lVar6 + 0x218) = (double)lStack_78 * _DAT_180c8ed50;
    }
  }
  return;
}
    DAT_180c912d8 = 1;
    iVar6 = _Cnd_broadcast(0x180c91240);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    iVar6 = _Mtx_unlock(0x180c91288);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    InitializeGameEngine(0x180c911a0);
  }
  *(uint32_t *)(_DAT_180c86910 + 4) = 0;
  if (*(char *)(param_1 + 0x1ee) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0xe0))();
    *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
    if (*(int *)(_DAT_180c8a9c8 + 0xe0) == 0) {
      if (*(char *)(param_1 + 0x264) == '\0') {
        iVar6 = 10;
        if (10 < *(int *)(_DAT_180c8a9c8 + 0xbd0)) {
          iVar6 = *(int *)(_DAT_180c8a9c8 + 0xbd0);
        }
        fVar13 = (float)*(double *)(param_1 + 0x208);
        if (1.0 / (float)iVar6 <= (float)*(double *)(param_1 + 0x208)) {
          fVar13 = 1.0 / (float)iVar6;
        }
      }
      else {
        fVar13 = *(float *)(param_1 + 0x268);
      }
      *(float *)(param_1 + 0x220) = fVar13;
    }
    else {
      *(uint32_t *)(param_1 + 0x220) = 0x3d088889;
      fVar13 = 0.033333335;
    }
    ProcessInputEvent(param_1,fVar13);
    uVar5 = _DAT_180c82868;
    if ((_DAT_180c8a9c0 != 0) &&
       (pModuleInitializationResult = *(longlong **)(_DAT_180c8a9c0 + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
      pplStackX_8 = &plStackX_10;
      plStackX_10 = pModuleInitializationResult;
      (**(code **)(*pModuleInitializationResult + 0x28))();
      ProcessNetworkPacket(uVar5,&plStackX_10);
    }
    uVar5 = _DAT_180c82868;
    if (*(char *)(_DAT_180c8a9a0 + 0xa0) == '\0') {
      if ((_DAT_180c8a9c0 != 0) &&
         (pModuleInitializationResult = *(longlong **)(_DAT_180c8a9c0 + 0x228), pModuleInitializationResult != (longlong *)0x0)) {
        pplStackX_8 = &plStackX_18;
        plStackX_18 = pModuleInitializationResult;
        (**(code **)(*pModuleInitializationResult + 0x28))();
        ProcessNetworkConnection(uVar5,&plStackX_18,0);
        pModuleInitializationResult = *(longlong **)(_DAT_180c8a9c0 + 0x228);
        *(uint64_t *)(_DAT_180c8a9c0 + 0x228) = 0;
        if (pModuleInitializationResult != (longlong *)0x0) {
          (**(code **)(*pModuleInitializationResult + 0x38))();
        }
      }
      func_0x00018005c480(_DAT_180c8ed68);
      pModuleInitializationResult = _DAT_180c8ed00;
      if (*(code **)(*_DAT_180c8ed00 + 8) == (code *)&UNK_180639070) {
        *(uint32_t *)(_DAT_180c8ed00 + 9) = 0;
        puVar4 = (uint8_t *)pModuleInitializationResult[8];
        if (puVar4 != (uint8_t *)0x0) {
          *puVar4 = 0;
        }
        *(uint32_t *)((longlong)pModuleInitializationResult + 0x54) = 0;
      }
      else {
        (**(code **)(*_DAT_180c8ed00 + 8))();
      }
    }
    else {
      if (*(char *)(param_1 + 0x22c) != '\0') {
        InitializeNetworkStack();
      }
      *(uint32_t *)(param_1 + 0x228) = *(uint32_t *)(param_1 + 0x224);
      StartNetworkService();
      ConfigureNetworkSettings();
    }
    QueryPerformanceCounter(&lStack_90);
    dVar14 = (double)lStack_90 * _DAT_180c8ed50;
    _DAT_180d48d20 = _DAT_180d48d20 + 1;
    dVar15 = dVar14 - _DAT_180d48d18;
    if (1.0 < dVar15) {
      *(float *)(param_1 + 500) = (float)((double)_DAT_180d48d20 / dVar15);
      _DAT_180d48d20 = 0;
      _DAT_180d48d18 = dVar14;
      *(float *)(param_1 + 0x1f8) = (float)(1000.0 / *(double *)(param_1 + 0x70));
    }
    if (0.0 < *(double *)(_DAT_180c86890 + 0x1510)) {
      ProcessGameLogic(param_1,(float)*(double *)(_DAT_180c86890 + 0x1510));
    }
    if (*(char *)(param_1 + 0x1ee) == '\0') {
      fVar13 = *(float *)(param_1 + 0x200);
      dVar14 = *(double *)(param_1 + 0x218);
      do {
        QueryPerformanceCounter(&lStack_88);
      } while ((double)lStack_88 * _DAT_180c8ed50 < (double)fVar13 + dVar14);
      QueryPerformanceCounter(&lStack_80);
      lVar7 = lStack_80 - _DAT_180c8ed40;
      _DAT_180c8ed40 = lStack_80;
      *(double *)(param_1 + 0x208) = (double)lVar7 * _DAT_180c8ed50;
      QueryPerformanceCounter(&lStack_78);
      *(double *)(param_1 + 0x218) = (double)lStack_78 * _DAT_180c8ed50;
    }
  }
  return;
}
    DAT_180c82862 = DAT_180c82862 == '\0';
  }
  lVar9 = 0xe0;
  puVar6 = _DAT_180c868d0;
  do {
    puVar6 = puVar6 + 0x18;
    *puVar6 = 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
LAB_18005122d:
  puVar7 = (uint64_t *)_DAT_180c86960[1];
  iVar4 = _Mtx_lock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pModuleInitializationResult4 = _DAT_180c8a9b0;
  uStack_308 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = (longlong *)*puVar7;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  MemoryAddress1 = 0;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  InitializeGameSession(auStack_2a8);
  ProcessGameData((longlong)_DAT_180c86958 * 0x238 + _DAT_180c86890 + 0x1598,auStack_2a8);
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    CleanupSystemResources();
  }
  _DAT_180c8a9b0 = pModuleInitializationResult4;
  iVar4 = _Mtx_unlock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pModuleInitializationResult4 = (longlong *)*_DAT_180c86960;
  iVar4 = _Mtx_lock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  pModuleInitializationResult = _DAT_180c8a9b0;
  uStack_308 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = (longlong *)*pModuleInitializationResult4;
  auStack_2a8[0] = 0;
  plStack_2f8 = alStack_90;
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_78 = 3;
  InitializeGameSession(auStack_2a8);
  FinalizeGameSession(auStack_2a8);
  *(float *)((longlong)_DAT_180c8a9b0 + 0x18) = _DAT_180bf3ff8;
  FUN_180125780();
  lVar9 = (longlong)_DAT_180c8a9b0;
  puVar7 = _DAT_180c86960;
  puVar6 = _DAT_180c868d0;
  if (*(char *)(_DAT_180c86960 + 7) != '\0') {
    if ((((*(char *)(_DAT_180c86960 + 0xe) != '\0') ||
         (*(char *)((longlong)_DAT_180c8a9b0 + 0x38c) != '\0')) ||
        (*(char *)((longlong)_DAT_180c8a9b0 + 0x38d) != '\0')) ||
       (*(char *)((longlong)_DAT_180c8a9b0 + 0x38e) != '\0')) {
      _DAT_180c868d0[0x1518] = 1;
      puVar6[0x1530] = 1;
      puVar6[0x1590] = 1;
      puVar6[0x15a8] = 1;
      puVar6[0x1710] = 1;
    }
    if (((*(char *)((longlong)puVar7 + 0x71) != '\0') || (*(char *)(lVar9 + 0x38d) != '\0')) ||
       (*(char *)(lVar9 + 0x38e) != '\0')) {
      do {
        puVar6 = puVar6 + 0x18;
        *puVar6 = 1;
        ModuleInitializationResult2 = ModuleInitializationResult2 + -1;
      } while (ModuleInitializationResult2 != 0);
    }
  }
  plStack_2f8 = alStack_90;
  if (alStack_90[0] != 0) {
    CleanupSystemResources();
  }
  _DAT_180c8a9b0 = pModuleInitializationResult;
  iVar4 = _Mtx_unlock(0x180c91970);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(int *)(_DAT_180c86950 + 0x161c) == 0x11) {
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    FUN_1801299b0(&UNK_1809fd8c0,0,0);
    FUN_18010f010(&UNK_1809fd8d8);
    uStack_2f0 = 0x40000000;
    auStack_2c8[0] = 0x3f800000;
    uStack_318 = 0x20000;
    puStack_320 = &UNK_1809fdfc0;
    pplStack_328 = (longlong **)&uStack_2f0;
    FUN_180114450(&UNK_1809fd910,4,_DAT_180c86950 + 0x167c,auStack_2c8);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x40000000);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &UNK_1809fdfc0;
    pplStack_328 = &plStack_2f8;
    FUN_180114450(&UNK_1809fd930,4,_DAT_180c86950 + 0x1680,&uStack_308);
    FUN_18012cfe0();
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  if (*(int *)(_DAT_180c86950 + 0x161c) == 0xc) {
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    FUN_1801299b0(&UNK_1809fd950,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &UNK_1809fdfc0;
    pplStack_328 = (longlong **)&uStack_308;
    FUN_180114450(&UNK_1809fd970,4,_DAT_180c86950 + 0x1688,&plStack_2f8);
    FUN_18012cfe0();
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  if (*(int *)(_DAT_180c86950 + 0x161c) == 0xd) {
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    FUN_1801299b0(&UNK_1809fd980,0,0);
    uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x40000000);
    plStack_2f8 = (longlong *)CONCAT44(plStack_2f8._4_4_,0x3f800000);
    uStack_318 = 0x20000;
    puStack_320 = &UNK_1809fdfc0;
    pplStack_328 = (longlong **)&uStack_308;
    FUN_180114450(&UNK_1809fd970,4,_DAT_180c86950 + 0x168c,&plStack_2f8);
    if (*(float *)(_DAT_180c86950 + 0x168c) == 0.0) {
      *(uint32_t *)(_DAT_180c86950 + 0x168c) = 0x3f800000;
    }
    FUN_18012cfe0();
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  puVar7 = (uint64_t *)*_DAT_180c8a9e0;
  if (puVar7 != (uint64_t *)0x0) {
    if ((void *)*puVar7 == &UNK_180a0ad28) {
      NVGSDK_Poll(puVar7[1]);
    }
    else {
      (**(code **)((void *)*puVar7 + 8))();
    }
  }
  *_DAT_180c86910 = fVar15;
  lVar9 = (longlong)*(int *)(_DAT_180c86938 + 0x1d40) * 0xd0;
  ModuleInitializationResult2 = *(longlong *)(lVar9 + 0xb0 + *(longlong *)(_DAT_180c86938 + 0x1d20));
  fVar17 = (float)ModuleInitializationResult2;
  if (ModuleInitializationResult2 < 0) {
    fVar17 = fVar17 + 1.8446744e+19;
  }
  if (fVar17 * 8.5830686e-07 < (float)*(int *)(_DAT_180c8aa18 + 4)) {
    *(float *)(_DAT_180c8aa18 + 0x10) = fVar15 + *(float *)(_DAT_180c8aa18 + 0x10);
    fVar15 = (float)fmodf(lVar9,0x3f800000);
    if (0.5 < fVar15) {
      puStack_2e8 = &UNK_180a3c3e0;
      uStack_2d0 = 0;
      puStack_2e0 = (uint64_t *)0x0;
      uStack_2d8 = 0;
      puVar7 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x1c,0x13);
      *(uint8_t *)puVar7 = 0;
      puStack_2e0 = puVar7;
      uVar5 = FUN_18064e990(puVar7);
      uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar5);
      *puVar7 = 0x6f6d654d20555047;
      puVar7[1] = 0x6567617375207972;
      puVar7[2] = 0x6163697469726320;
      *(uint32_t *)(puVar7 + 3) = 0x2e2e6c;
      uStack_2d8 = 0x1b;
      puStack_2e8 = &UNK_180a3c3e0;
      FUN_18064e900(puVar7);
    }
  }
  pModuleInitializationResult4 = _DAT_180c86878;
  if ((char)_DAT_180c86878[0x42] == '\0') {
    (**(code **)(*_DAT_180c86878 + 0xb0))(_DAT_180c86878,*(uint32_t *)(_DAT_180c86920 + 0x1340));
    (**(code **)(*pModuleInitializationResult4 + 0xb8))(pModuleInitializationResult4,*(uint32_t *)(_DAT_180c86920 + 0x1500));
    (**(code **)(*pModuleInitializationResult4 + 0xc0))(pModuleInitializationResult4,*(uint32_t *)(_DAT_180c86920 + 0x13b0));
    (**(code **)(*pModuleInitializationResult4 + 200))(pModuleInitializationResult4,*(uint32_t *)(_DAT_180c86920 + 0x1490));
    (**(code **)(*pModuleInitializationResult4 + 0x50))(pModuleInitializationResult4);
  }
  puVar7 = _DAT_180c86880;
  pModuleInitializationResult4 = *(longlong **)(_DAT_180c86950 + 0x17ec);
  *_DAT_180c86880 = 0;
  uStack_308._0_4_ = SUB84(pModuleInitializationResult4,0);
  *(uint32_t *)(puVar7 + 1) = (uint32_t)uStack_308;
  uStack_308._4_4_ = (uint32_t)((ulonglong)pModuleInitializationResult4 >> 0x20);
  *(uint32_t *)((longlong)puVar7 + 0xc) = uStack_308._4_4_;
  *(uint32_t *)(puVar7 + 8) = 0;
  uStack_308 = pModuleInitializationResult4;
  FUN_1801efe50();
  FUN_1801f01c0();
  if (((*(int *)(param_1 + 0x340) != 0) && (_DAT_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar2 != '\0')) {
    (**(code **)(_DAT_180c8a9c0 + 0x98))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x30))(*(longlong **)(param_1 + 0x2b0),param_2);
  if (((*(int *)(param_1 + 0x340) != 0) && (_DAT_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar2 != '\0')) {
    (*(code *)_DAT_180c8f008[7])();
  }
  if (((*(int *)(param_1 + 0x340) != 0) && (_DAT_180c8f008 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*_DAT_180c8f008 + 0x28))(), cVar2 != '\0')) {
    *(uint64_t *)(*(longlong *)(param_1 + 0x3c0) + 0x18) =
         *(uint64_t *)(*(longlong *)(param_1 + 0x3c0) + 0x10);
    pModuleInitializationResult4 = (longlong *)(_DAT_180c868d0 + 0x2030);
    MemoryAddress3 = MemoryAddress1;
    if (*(longlong *)(_DAT_180c868d0 + 0x2038) - *pModuleInitializationResult4 >> 2 != 0) {
      do {
        uStack_2f0 = *(uint32_t *)(MemoryAddress3 + *pModuleInitializationResult4);
        ModuleInitializationResult2 = *(longlong *)(param_1 + 0x3c0) + 0x10;
        FUN_180194a50(ModuleInitializationResult2,&uStack_2f0);
        FUN_180194a50(ModuleInitializationResult2,(longlong)&uStack_2f0 + 1);
        FUN_180194a50(ModuleInitializationResult2,(longlong)&uStack_2f0 + 2);
        FUN_180194a50(ModuleInitializationResult2,(longlong)&uStack_2f0 + 3);
        MemoryAddress0 = (int)MemoryAddress1 + 1;
        MemoryAddress1 = (ulonglong)MemoryAddress0;
        pModuleInitializationResult4 = (longlong *)(_DAT_180c868d0 + 0x2030);
        MemoryAddress3 = MemoryAddress3 + 4;
      } while ((ulonglong)(longlong)(int)MemoryAddress0 <
               (ulonglong)(*(longlong *)(_DAT_180c868d0 + 0x2038) - *pModuleInitializationResult4 >> 2));
    }
    (**(code **)(_DAT_180c8a9c0 + 0xa8))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x38))(*(longlong **)(param_1 + 0x2b0),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x40))(*(longlong **)(param_1 + 0x2b0),param_2);
  InitializeGlobalState();
  if (DAT_180c82862 != '\0') {
    puStack_2e8 = &UNK_180a3c3e0;
    uStack_2d0 = 0;
    puStack_2e0 = (uint64_t *)0x0;
    uStack_2d8 = 0;
    puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x19,0x13);
    *(uint8_t *)puVar8 = 0;
    puStack_2e0 = puVar8;
    uVar5 = FUN_18064e990(puVar8);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar5);
    *puVar8 = 0x6d6d6f43204c4752;
    puVar8[1] = 0x656e696c20646e61;
    puVar8[2] = 0x656c6f736e6f6320;
    *(uint8_t *)(puVar8 + 3) = 0;
    ModuleInitializationResult2 = _DAT_180c868c8;
    uStack_2d8 = 0x18;
    puVar7 = (uint64_t *)*_DAT_180c86960;
    iVar4 = _Mtx_lock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    pModuleInitializationResult4 = _DAT_180c8a9b0;
    plStack_2c0 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (longlong *)*puVar7;
    plStack_2f8 = (longlong *)0x0;
    uStack_308 = (longlong *)0x0;
    pplStack_328 = (longlong **)&cStack_300;
    FUN_18016bdb0(ModuleInitializationResult2,&puStack_2e8,&plStack_2f8,&uStack_308);
    if (*(char *)(ModuleInitializationResult2 + 0x60) != '\0') {
      FUN_18016c970(ModuleInitializationResult2,&plStack_2f8,&uStack_308,acStack_2ff);
    }
    if ((cStack_300 == '\0') && (acStack_2ff[0] == '\0')) {
      *(uint8_t *)(ModuleInitializationResult2 + 0x60) = 0;
    }
    _DAT_180c8a9b0 = pModuleInitializationResult4;
    iVar4 = _Mtx_unlock(0x180c91970);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    puStack_2e8 = &UNK_180a3c3e0;
    FUN_18064e900(puVar8);
  }
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_348);
}
/**
 * 初始化内存缓冲区
 * 将内存缓冲区的特定位置设置为0，并在偏移量0x46处设置为3
 * 
 * @param param_1 要初始化的内存缓冲区指针
 * @return 返回初始化后的内存缓冲区指针
 */
uint64_t * InitializeMemoryBuffer(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(uint32_t *)(param_1 + 0x46) = 3;
  return param_1;
}
    DAT_180c84870 = 0;
  }
  do {
    lVar3 = lVar5 + 1;
    pcVar1 = (char *)(lVar5 + 0x180c82871);
    lVar5 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 != 0) {
    fwrite(&DAT_1809fcc18,1,1,lVar6);
    fwrite(&DAT_180c82870,lVar3,1,lVar6);
    CleanupSystemResources(0);
  }
  if (lVar6 != 0) {
    fclose(lVar6);
    lStack_40 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    lVar6 = 0;
  }
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 == (void *)0x0) {
    puStack_28 = (void *)0x0;
    uStack_18 = 0;
    puStack_30 = &SystemBufferTemplate;
    if (lVar6 != 0) {
      fclose(lVar6);
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
      UNLOCK();
    }
    return;
  }
  CleanupSystemResources();
}
  DAT_180c8ecee = 1;
  InitializeNetworkSystem(_DAT_180c82868);
  InitializeRenderingSystem();
  InitializeAudioSystem(0);
  if (DAT_180c82853 != '\0') {
    LOCK();
    *(uint32_t *)(*(longlong *)(_DAT_180c86870 + 0x48) + 0xcc) = 0;
    UNLOCK();
  }
  InitializeInputSystem();
  if ((DAT_180c82860 == '\0') &&
     (pModuleInitializationResult = *(longlong **)(_DAT_180c8ed08 + 0x18), pModuleInitializationResult != (longlong *)0x0)) {
    cVar3 = (**(code **)*pModuleInitializationResult)(pModuleInitializationResult);
    if (cVar3 != '\0') {
      (**(code **)(*pModuleInitializationResult + 0x28))(pModuleInitializationResult);
    }
  }
  InitializePhysicsSystem();
  lVar2 = _DAT_180c86870;
  if (_DAT_180c86870 != 0) {
    InitializeFileSystem(_DAT_180c86870);
    FUN_18064e900(lVar2);
  }
  _DAT_180c86870 = 0;
  FUN_180629020(_DAT_180c8ed10);
  lVar2 = _DAT_180c8ed10;
  if (_DAT_180c8ed10 != 0) {
    FUN_180629020(_DAT_180c8ed10);
    _Mtx_destroy_in_situ();
    FUN_18064e900(lVar2);
  }
  _DAT_180c8ed10 = 0;
  return;
}
/**
 * 处理内存分配操作
 * 根据参数条件执行内存分配或释放操作
 * 
 * @param param_1 内存地址指针
 * @param param_2 控制标志位
 * @param param_3 内存参数3
 * @param param_4 内存参数4
 * @return 返回处理后的内存地址指针
 */
uint64_t *
ProcessMemoryAllocation(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t MemoryAddress;
  MemoryAddress = 0xfffffffffffffffe;
  *param_1 = &UNK_1809ff2f8;
  InitializeSystemMemory();
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0,param_3,param_4,MemoryAddress);
  }
  return param_1;
}
      DAT_180c82850 = '\x01';
      do {
        iVar3 = ReleaseSemaphore(_DAT_180c91900,1);
      } while (iVar3 == 0);
      puStack_138 = &UNK_180a3c3e0;
      if (puStack_130 != (uint8_t *)0x0) {
        CleanupSystemResources();
      }
      puStack_130 = (uint8_t *)0x0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_138 = &SystemBufferTemplate;
      puStack_110 = &UNK_180a3c3e0;
      if (pMemoryAddress0 != (void *)0x0) {
        FUN_18064e900(pMemoryAddress0);
      }
      puStack_108 = (uint8_t *)0x0;
      uStack_f8 = uStack_f8 & 0xffffffff00000000;
      puStack_110 = &SystemBufferTemplate;
    }
  }
  puStack_a8 = &UNK_180a3c3e0;
  if (puStack_a0 != (void *)0x0) {
    CleanupSystemResources();
  }
  puStack_a0 = (void *)0x0;
  uStack_90 = 0;
  puStack_a8 = &SystemBufferTemplate;
LAB_180072d7b:
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}
/**
 * 处理互斥锁操作
 * 对指定的互斥锁执行加锁和解锁操作，处理可能的错误情况
 * 
 * @return 返回操作结果，成功返回0，失败返回错误码
 */
uint HandleMutexOperations(void)
{
  uint in_EAX;
  int LoopCounter;
  longlong lVar2;
  if (_DAT_180c86948 != 0) {
    lVar2 = _DAT_180c86948 + 0x110;
    LoopCounter = _Mtx_lock(lVar2);
    if (LoopCounter != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounter);
    }
    in_EAX = _Mtx_unlock(lVar2);
    if (in_EAX != 0) {
      in_EAX = __Throw_C_error_std__YAXH_Z(in_EAX);
    }
  }
  return in_EAX & 0xffffff00;
}
      DAT_180d49178 = 0;
      _DAT_180d49170 = 0;
      strcpy_s(&DAT_180d49178,0x80,&DAT_18098bc73,param_4,MemoryAddress);
      FUN_1808fc820(FUN_1809417e0);
      FUN_1808fcb30(&DAT_180d49158);
      return &DAT_180d49160;
    }
  }
  return &DAT_180d49160;
}
    DAT_180d48d40 = '\x01';
    FUN_18062c1e0(param_1,CONCAT71((int7)((ulonglong)puVar3 >> 8),1));
  }
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_298);
}
    DAT_180c91198 = '\0';
    if ((cStack_208 != '\0') && (LoopCounter3 = _Mtx_unlock(uStack_210), LoopCounter3 != 0)) {
      __Throw_C_error_std__YAXH_Z(LoopCounter3);
    }
    if (cVar23 != '\0') goto LAB_1800d37d8;
    *(uint8_t *)(*(longlong *)(*(longlong *)(_DAT_180c86870 + 8) + 0x140) + 0x208) = 1;
  }
  DAT_180c91198 = '\0';
  LoopCounter3 = _Mtx_unlock(0x180c91148);
  if (LoopCounter3 != 0) {
    __Throw_C_error_std__YAXH_Z(LoopCounter3);
  }
LAB_1800d37d8:
  if (*(char *)(_DAT_180c86870 + 0xa0) != '\0') {
    MemoryAddress4 = FUN_1800c4960(ModuleInitializationResult6);
    *(uint64_t *)(_DAT_180c86870 + 0xa8) = MemoryAddress4;
    MemoryAddress4 = FUN_1800c4da0(ModuleInitializationResult6);
    *(uint64_t *)(_DAT_180c86870 + 0xb0) = MemoryAddress4;
  }
  pcVar12 = _DAT_180c82868;
  if (*_DAT_180c82868 != '\0') {
    pMemoryAddress5 = (uint64_t *)*_DAT_180c86960;
    LoopCounter3 = _Mtx_lock(0x180c91970);
    if (LoopCounter3 != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounter3);
    }
    MemoryAddress4 = _DAT_180c8a9b0;
    pplStack_1b8 = (longlong **)_DAT_180c8a9b0;
    _DAT_180c8a9b0 = *pMemoryAddress5;
    FUN_1801299b0(&UNK_1809fe1b0,0,0);
    dVar2 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    MemoryAddress9 = BufferSize0;
    BufferSize2 = BufferSize0;
    if (*(longlong *)(pcVar12 + 0x10) - *(longlong *)(pcVar12 + 8) >> 3 != 0) {
      do {
        dVar1 = *(double *)(*(longlong *)(MemoryAddress9 + *(longlong *)(pcVar12 + 8)) + 0x200);
        dVar7 = dVar2 + dVar1;
        dVar2 = *(double *)(*(longlong *)(MemoryAddress9 + *(longlong *)(pcVar12 + 8)) + 0x1f8);
        dVar8 = dVar9 + dVar2;
        FUN_18010f010(&UNK_1809fe1c8,BufferSize2,dVar1 / dVar2);
        BufferSize1 = (int)BufferSize2 + 1;
        MemoryAddress9 = MemoryAddress9 + 8;
        BufferSize2 = (ulonglong)BufferSize1;
        dVar2 = dVar7;
        dVar9 = dVar8;
      } while ((ulonglong)(longlong)(int)BufferSize1 <
               (ulonglong)(*(longlong *)(pcVar12 + 0x10) - *(longlong *)(pcVar12 + 8) >> 3));
    }
    FUN_18010f010(&UNK_1809fe1d8,dVar7 / dVar8);
    FUN_18012cfe0();
    _DAT_180c8a9b0 = MemoryAddress4;
    LoopCounter3 = _Mtx_unlock(0x180c91970);
    if (LoopCounter3 != 0) {
      __Throw_C_error_std__YAXH_Z(LoopCounter3);
    }
  }
  if (*(char *)(_DAT_180c86950 + 0x1626) != '\0') {
    MemoryAddress4 = *(uint64_t *)(_DAT_180c86870 + 0x138);
    *(uint64_t *)(_DAT_180c86870 + 0x138) = 0;
    puStack_b8 = &SystemMemoryPool;
    puStack_b0 = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 0x18;
    BufferSize4 = strcpy_s(auStack_a0,0x40,&UNK_1809fc7b8);
    FUN_180096b60(BufferSize4,&puStack_b8,MemoryAddress4,1);
    puStack_b8 = &SystemBufferTemplate;
  }
  if (*(int *)(_DAT_180c8aa40 + 0x60) == 1) {
    FUN_1801ff450();
  }
  else if (*(int *)(_DAT_180c8aa40 + 0x60) == 2) {
    FUN_1801fffd0();
  }
  ModuleInitializationResult8 = *(longlong *)(_DAT_180c86950 + 0x1870) - *(longlong *)(_DAT_180c86950 + 0x1868) >> 3;
  MemoryAddress9 = BufferSize0;
  if (0 < (int)ModuleInitializationResult8) {
    do {
      pMemoryAddress5 = (uint64_t *)FUN_180093710(ModuleInitializationResult8,&plStack_1d0,(longlong)(int)MemoryAddress9);
      (**(code **)(*(longlong *)*pMemoryAddress5 + 0x98))();
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      BufferSize1 = (int)MemoryAddress9 + 1;
      ModuleInitializationResult8 = *(longlong *)(_DAT_180c86950 + 0x1870) - *(longlong *)(_DAT_180c86950 + 0x1868) >> 3;
      MemoryAddress9 = (ulonglong)BufferSize1;
    } while ((int)BufferSize1 < (int)ModuleInitializationResult8);
  }
  InitializeGameModules();
  func_0x00018024f7f0();
  BufferSize4 = func_0x0001800e2850(ModuleInitializationResult6);
  ProcessGameAudio(BufferSize4,1,0);
  if (*(char *)(ModuleInitializationResult6 + 0xf18) != '\0') {
    FinalizeModuleInitialization(ModuleInitializationResult6);
    *(uint8_t *)(ModuleInitializationResult6 + 0xf18) = 0;
  }
  lVar3 = _DAT_180c86950;
  ModuleInitializationResult8 = _DAT_180c86890;
  MemoryAddress4 = *(uint64_t *)(_DAT_180c86950 + 0x161c);
  *(uint64_t *)(_DAT_180c86890 + 0x12d0) = *(uint64_t *)(_DAT_180c86950 + 0x1614);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12d8) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x162c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12e0) = *(uint64_t *)(lVar3 + 0x1624);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12e8) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x163c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12f0) = *(uint64_t *)(lVar3 + 0x1634);
  *(uint64_t *)(ModuleInitializationResult8 + 0x12f8) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x164c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1300) = *(uint64_t *)(lVar3 + 0x1644);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1308) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x165c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1310) = *(uint64_t *)(lVar3 + 0x1654);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1318) = MemoryAddress4;
  MemoryAddress4 = *(uint64_t *)(lVar3 + 0x166c);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1320) = *(uint64_t *)(lVar3 + 0x1664);
  *(uint64_t *)(ModuleInitializationResult8 + 0x1328) = MemoryAddress4;
  BufferSize4 = *(uint32_t *)(lVar3 + 0x1678);
  MemoryAddress0 = *(uint32_t *)(lVar3 + 0x167c);
  MemoryAddress1 = *(uint32_t *)(lVar3 + 0x1680);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1330) = *(uint32_t *)(lVar3 + 0x1674);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1334) = BufferSize4;
  *(uint32_t *)(ModuleInitializationResult8 + 0x1338) = MemoryAddress0;
  *(uint32_t *)(ModuleInitializationResult8 + 0x133c) = MemoryAddress1;
  BufferSize4 = *(uint32_t *)(lVar3 + 0x1688);
  MemoryAddress0 = *(uint32_t *)(lVar3 + 0x168c);
  MemoryAddress1 = *(uint32_t *)(lVar3 + 0x1690);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1340) = *(uint32_t *)(lVar3 + 0x1684);
  *(uint32_t *)(ModuleInitializationResult8 + 0x1344) = BufferSize4;
  *(uint32_t *)(ModuleInitializationResult8 + 0x1348) = MemoryAddress0;
  *(uint32_t *)(ModuleInitializationResult8 + 0x134c) = MemoryAddress1;
  *(uint16_t *)(lVar3 + 0x1637) = 0;
  *(uint8_t *)(lVar3 + 0x162c) = 0;
  FUN_1801efe50();
  FUN_1801f01c0();
  *(uint *)(_DAT_180c86890 + 0x1590) = _DAT_180c86958;
  _DAT_180c86958 = _DAT_180c86958 + 1 & 0x80000001;
  if ((int)_DAT_180c86958 < 0) {
    _DAT_180c86958 = (_DAT_180c86958 - 1 | 0xfffffffe) + 1;
  }
  pMemoryAddress5 = (uint64_t *)*_DAT_180c86960;
  LoopCounter3 = _Mtx_lock(0x180c91970);
  if (LoopCounter3 != 0) {
    __Throw_C_error_std__YAXH_Z(LoopCounter3);
  }
  MemoryAddress4 = _DAT_180c8a9b0;
  pplStack_220 = (longlong **)_DAT_180c8a9b0;
  _DAT_180c8a9b0 = *pMemoryAddress5;
  ModuleInitializationResult8 = *(longlong *)(_DAT_180c86890 + 0x1a08 + (longlong)(int)_DAT_180c86958 * 8);
  if (ModuleInitializationResult8 != 0) {
    MemoryAddress9 = BufferSize0;
    BufferSize2 = BufferSize0;
    if (0 < *(int *)(ModuleInitializationResult8 + 0x10)) {
      do {
        FUN_180291500(*(uint64_t *)(BufferSize2 + *(longlong *)(ModuleInitializationResult8 + 8)));
        lVar3 = *(longlong *)(*(longlong *)(ModuleInitializationResult8 + 8) + BufferSize2);
        if (lVar3 != 0) {
          FUN_18011fab0(lVar3);
          FUN_18064e900(lVar3);
        }
        *(uint64_t *)(*(longlong *)(ModuleInitializationResult8 + 8) + BufferSize2) = 0;
        BufferSize1 = (int)MemoryAddress9 + 1;
        MemoryAddress9 = (ulonglong)BufferSize1;
        BufferSize2 = BufferSize2 + 8;
      } while ((int)BufferSize1 < *(int *)(ModuleInitializationResult8 + 0x10));
    }
    if (*(longlong *)(ModuleInitializationResult8 + 8) != 0) {
      CleanupSystemResources();
    }
    *(uint64_t *)(ModuleInitializationResult8 + 8) = 0;
    puVar4 = *(uint8_t **)(_DAT_180c86890 + 0x1a08 + (longlong)(int)_DAT_180c86958 * 8);
    if (puVar4 != (uint8_t *)0x0) {
      *puVar4 = 0;
      *(uint64_t *)(puVar4 + 8) = 0;
      *(uint64_t *)(puVar4 + 0x14) = 0;
      *(uint32_t *)(puVar4 + 0x10) = 0;
      *(uint64_t *)(puVar4 + 0x24) = 0;
      *(uint64_t *)(puVar4 + 0x1c) = 0;
      CleanupSystemResources();
    }
    *(uint64_t *)(_DAT_180c86890 + 0x1a08 + (longlong)(int)_DAT_180c86958 * 8) = 0;
    param_2 = uStack_1c8;
  }
  FUN_180127860();
  _DAT_180c8a9b0 = MemoryAddress4;
  LoopCounter3 = _Mtx_unlock(0x180c91970);
  if (LoopCounter3 != 0) {
    __Throw_C_error_std__YAXH_Z(LoopCounter3);
  }
  if (*(int *)(ModuleInitializationResult6 + 8) == 2) {
    *(uint8_t *)(*(longlong *)(ModuleInitializationResult6 + 0x10) + 0xc0) = 0;
    while( true ) {
      puVar5 = (void *)**(uint64_t **)(ModuleInitializationResult6 + 0x10);
      if (puVar5 == &UNK_180a04910) {
        cVar23 = *(char *)(*(uint64_t **)(ModuleInitializationResult6 + 0x10) + 2) != '\0';
      }
      else {
        cVar23 = (**(code **)(puVar5 + 0x68))();
      }
      if (cVar23 != '\0') break;
      puVar5 = (void *)**(uint64_t **)(ModuleInitializationResult6 + 0x10);
      if (puVar5 == &UNK_180a04910) {
        FUN_1800496b0(*(uint64_t **)(ModuleInitializationResult6 + 0x10) + 4);
      }
      else {
        (**(code **)(puVar5 + 0x80))();
      }
    }
    plStack_1c0 = *(longlong **)(ModuleInitializationResult6 + 0x10);
    *(uint64_t *)(ModuleInitializationResult6 + 0x10) = 0;
    if (plStack_1c0 != (longlong *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    *(uint32_t *)(ModuleInitializationResult6 + 8) = 0;
    if (_DAT_00000010 != (longlong *)0x0) {
      (**(code **)(*_DAT_00000010 + 0x10))();
    }
    (**(code **)(_DAT_00000000 + 0x20))(0);
    _DAT_00000008 = 0xffffffffffffffff;
  }
  else if (*(int *)(ModuleInitializationResult6 + 8) != 0) goto LAB_1800d3d65;
  *(uint *)(_DAT_180c86950 + 0x1614) =
       (*(int *)(_DAT_180c86950 + 0x1614) + 1U) % *(uint *)(_DAT_180c86938 + 0x1d4c);
LAB_1800d3d65:
  pplStack_220 = (longlong **)&puStack_198;
  puStack_198 = &SystemMemoryConfigTemplate;
  puStack_190 = auStack_180;
  uStack_188 = 0;
  auStack_180[0] = 0;
  uStack_100 = 0x19;
  uStack_f8 = param_2;
  pplStack_220 = (longlong **)AllocateSystemMemory(_DAT_180c8ed18,0x20,8,3);
  *pplStack_220 = (longlong *)&SystemBufferTemplate;
  pplStack_220[1] = (longlong *)0x0;
  *(uint32_t *)(pplStack_220 + 2) = 0;
  *pplStack_220 = (longlong *)&UNK_180a3c3e0;
  pplStack_220[3] = (longlong *)0x0;
  pplStack_220[1] = (longlong *)0x0;
  *(uint32_t *)(pplStack_220 + 2) = 0;
  pModuleInitializationResult7 = _DAT_180c8ed00;
  uStack_e0 = 0;
  BufferSize4 = *(uint32_t *)(pplStack_220 + 3);
  *(int *)(pplStack_220 + 3) = (int)_DAT_180c8ed00[10];
  *(uint32_t *)(pModuleInitializationResult7 + 10) = BufferSize4;
  ModuleInitializationResult6 = (longlong)pplStack_220[1];
  pplStack_220[1] = (longlong *)pModuleInitializationResult7[8];
  pModuleInitializationResult7[8] = ModuleInitializationResult6;
  BufferSize4 = *(uint32_t *)(pplStack_220 + 2);
  *(int *)(pplStack_220 + 2) = (int)pModuleInitializationResult7[9];
  *(uint32_t *)(pModuleInitializationResult7 + 9) = BufferSize4;
  BufferSize4 = *(uint32_t *)((longlong)pplStack_220 + 0x1c);
  *(uint32_t *)((longlong)pplStack_220 + 0x1c) = *(uint32_t *)((longlong)pModuleInitializationResult7 + 0x54);
  *(uint32_t *)((longlong)pModuleInitializationResult7 + 0x54) = BufferSize4;
  puStack_f0 = pplStack_220;
  if (*(code **)(*pModuleInitializationResult7 + 8) == (code *)&UNK_180639070) {
    *(uint32_t *)(pModuleInitializationResult7 + 9) = 0;
    if ((uint8_t *)pModuleInitializationResult7[8] != (uint8_t *)0x0) {
      *(uint8_t *)pModuleInitializationResult7[8] = 0;
    }
    *(uint32_t *)((longlong)pModuleInitializationResult7 + 0x54) = 0;
  }
  else {
    (**(code **)(*pModuleInitializationResult7 + 8))(pModuleInitializationResult7);
  }
  if (0x960 < *(int *)(puStack_f0 + 2)) {
    *(uint32_t *)(puStack_f0 + 2) = 0x960;
    *(uint8_t *)(puStack_f0[1] + 0x960) = 0;
  }
  uStack_e8 = 0;
  lStack_200 = 0;
  lStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 3;
  FUN_1800da760(_DAT_180c86890,param_2,&lStack_200);
  ModuleInitializationResult6 = lStack_200;
  ModuleInitializationResult8 = lStack_1f8;
  MemoryAddress9 = BufferSize0;
  if (lStack_1f8 - lStack_200 >> 3 != 0) {
    do {
      lVar3 = _DAT_180c8aa08;
      if ((0 < *(int *)(*(longlong *)(MemoryAddress9 + ModuleInitializationResult6) + 0x124ec)) &&
         ((*(uint *)(*(longlong *)(MemoryAddress9 + ModuleInitializationResult6) + 4) & 0x10000) != 0)) {
        while (pcVar12 = _DAT_180c82868, ModuleInitializationResult6 = lStack_200, ModuleInitializationResult8 = lStack_1f8,
              *(int *)(lVar3 + 0x30c) != 0) {
          ModuleInitializationResult6 = FUN_18005e890(_DAT_180c82868);
          if (ModuleInitializationResult6 != 0) {
            pModuleInitializationResult7 = (longlong *)FUN_18005e890(pcVar12);
            (**(code **)(*pModuleInitializationResult7 + 0x20))(pModuleInitializationResult7,0);
          }
        }
      }
      BufferSize1 = (int)BufferSize0 + 1;
      BufferSize0 = (ulonglong)BufferSize1;
      MemoryAddress9 = MemoryAddress9 + 8;
    } while ((ulonglong)(longlong)(int)BufferSize1 < (ulonglong)(ModuleInitializationResult8 - ModuleInitializationResult6 >> 3));
  }
  MemoryAddress4 = AllocateSystemMemory(_DAT_180c8ed18,0x100,8,3);
  pModuleInitializationResult7 = (longlong *)FUN_18005ce30(MemoryAddress4,&puStack_198);
  ppuStack_1b0 = (void **)pModuleInitializationResult7;
  if (pModuleInitializationResult7 != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult7 + 0x28))(pModuleInitializationResult7);
  }
  pcVar12 = _DAT_180c82868;
  pplStack_220 = &plStack_228;
  plStack_228 = pModuleInitializationResult7;
  if (pModuleInitializationResult7 != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult7 + 0x28))(pModuleInitializationResult7);
  }
  pplStack_1b8 = &plStack_228;
  pMemoryAddress5 = *(uint64_t **)(*(longlong *)(pcVar12 + 8) + 8);
  pcVar6 = *(code **)*pMemoryAddress5;
  pplStack_220 = &plStack_218;
  plStack_218 = plStack_228;
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x28))();
  }
  (*pcVar6)(pMemoryAddress5,&plStack_218);
  if (plStack_228 != (longlong *)0x0) {
    (**(code **)(*plStack_228 + 0x38))();
  }
  if (pModuleInitializationResult7 != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult7 + 0x38))(pModuleInitializationResult7);
  }
  if (lStack_200 == 0) {
    ppuStack_1b0 = &puStack_198;
    puStack_198 = &SystemBufferTemplate;
    FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_248);
  }
  CleanupSystemResources();
}
    DAT_180bfc049 = '\0';
  }
  _DAT_00000010 = plVar4;
  (**(code **)(_DAT_00000000 + 0x18))(0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  pBufferSize = *(uint64_t **)(*param_1 + 0x18);
  pcVar3 = *(code **)*pBufferSize;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = *(longlong **)(*param_1 + 0x10);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  (*pcVar3)(pBufferSize,&plStackX_8);
  return;
}
      DAT_180d492a8 = 0;
      _DAT_180d492a0 = 6;
      strcpy_s(&DAT_180d492a8,0x40,&DAT_180a06998,param_4,MemoryAddress);
      _DAT_180d492e8 = &SystemMemoryPool;
      _DAT_180d492f0 = &DAT_180d49300;
      DAT_180d49300 = 0;
      _DAT_180d492f8 = 4;
      strcpy_s(&DAT_180d49300,0x40,&DAT_180a06990);
      _DAT_180d49340 = &SystemMemoryPool;
      _DAT_180d49348 = &DAT_180d49358;
      DAT_180d49358 = 0;
      _DAT_180d49350 = 6;
      strcpy_s(&DAT_180d49358,0x40,&DAT_180a069a8);
      _DAT_180d49398 = &SystemMemoryPool;
      _DAT_180d493a0 = &DAT_180d493b0;
      DAT_180d493b0 = 0;
      _DAT_180d493a8 = 6;
      strcpy_s(&DAT_180d493b0,0x40,&DAT_180a069a0);
      FUN_1808fc820(&UNK_180941ab0);
      FUN_1808fcb30(&DAT_180d49288);
    }
  }
  return &DAT_180d49290 + (longlong)param_1 * 0x58;
}
  DAT_180c82862 = DAT_180c82862 == '\0';
  *param_1 = &SystemBufferTemplate;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,3,param_3,param_4,0,0xfffffffffffffffe);
  *(uint32_t *)param_1[1] = 0x2e6b4f;
  *(uint32_t *)(param_1 + 2) = 3;
  return param_1;
}
longlong FUN_18016fec0(longlong param_1,longlong param_2,longlong param_3)
{
  uint64_t *pMemoryAddress;
  uint64_t *pBufferSize;
  longlong lVar3;
  longlong lVar4;
  lVar4 = param_2 - param_1 >> 5;
  if (0 < lVar4) {
    lVar3 = param_3 - param_2;
    param_3 = param_3 + lVar4 * -0x20;
    pBufferSize = (uint64_t *)(param_2 + 8);
    do {
      pMemoryAddress = pBufferSize + -4;
      if (*(longlong *)(lVar3 + -0x20 + (longlong)pBufferSize) != 0) {
        CleanupSystemResources();
      }
      *(uint64_t *)(lVar3 + 0x10 + (longlong)pMemoryAddress) = 0;
      lVar4 = lVar4 + -1;
      *(uint64_t *)(lVar3 + (longlong)pMemoryAddress) = 0;
      *(uint32_t *)(lVar3 + 8 + (longlong)pMemoryAddress) = 0;
      *(uint32_t *)(lVar3 + 8 + (longlong)pMemoryAddress) = *(uint32_t *)(pBufferSize + -3);
      *(uint64_t *)(lVar3 + (longlong)pMemoryAddress) = *pMemoryAddress;
      *(uint32_t *)(lVar3 + 0x14 + (longlong)pMemoryAddress) = *(uint32_t *)((longlong)pBufferSize + -0xc);
      *(uint32_t *)(lVar3 + 0x10 + (longlong)pMemoryAddress) = *(uint32_t *)(pBufferSize + -2);
      *(uint32_t *)(pBufferSize + -3) = 0;
      *pMemoryAddress = 0;
      pBufferSize[-2] = 0;
      pBufferSize = pMemoryAddress;
    } while (0 < lVar4);
  }
  return param_3;
}
longlong FUN_18016fee0(uint64_t param_1,longlong param_2,longlong param_3)
{
  uint64_t *pMemoryAddress;
  longlong lVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  param_3 = param_3 - param_2;
  lVar2 = unaff_RDI * -0x20;
  puVar3 = (uint64_t *)(param_2 + 8);
  do {
    pMemoryAddress = puVar3 + -4;
    if (*(longlong *)(param_3 + -0x20 + (longlong)puVar3) != 0) {
      CleanupSystemResources();
    }
    *(uint64_t *)(param_3 + 0x10 + (longlong)pMemoryAddress) = 0;
    unaff_RDI = unaff_RDI + -1;
    *(uint64_t *)(param_3 + (longlong)pMemoryAddress) = 0;
    *(uint32_t *)(param_3 + 8 + (longlong)pMemoryAddress) = 0;
    *(uint32_t *)(param_3 + 8 + (longlong)pMemoryAddress) = *(uint32_t *)(puVar3 + -3);
    *(uint64_t *)(param_3 + (longlong)pMemoryAddress) = *pMemoryAddress;
    *(uint32_t *)(param_3 + 0x14 + (longlong)pMemoryAddress) = *(uint32_t *)((longlong)puVar3 + -0xc);
    *(uint32_t *)(param_3 + 0x10 + (longlong)pMemoryAddress) = *(uint32_t *)(puVar3 + -2);
    *(uint32_t *)(puVar3 + -3) = 0;
    *pMemoryAddress = 0;
    puVar3[-2] = 0;
    puVar3 = pMemoryAddress;
  } while (0 < unaff_RDI);
  return unaff_RBP + lVar2;
}
      DAT_180d48d64 = DAT_180d48d64 == '\0';
    }
    if (DAT_180d48d64 != '\0') {
      (*(code *)(*in_RCX[0xc170])[9])(in_RCX[0xc170],alStackX_10[0] + 0x120);
    }
  }
  ModuleInitializationResult0 = alStackX_10[0];
  if ((*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) &&
     (MemoryAddress2 = MemoryAddress6, MemoryAddress5 = MemoryAddress6, (longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3 != 0))
  {
    do {
      (**(code **)(**(longlong **)(MemoryAddress2 + (longlong)in_RCX[0x1c]) + 0x60))
                (*(longlong **)(MemoryAddress2 + (longlong)in_RCX[0x1c]),in_RCX,ModuleInitializationResult0);
      MemoryAddress4 = (int)MemoryAddress5 + 1;
      MemoryAddress2 = MemoryAddress2 + 8;
      MemoryAddress5 = (ulonglong)MemoryAddress4;
    } while ((ulonglong)(longlong)(int)MemoryAddress4 <
             (ulonglong)((longlong)in_RCX[0x1d] - (longlong)in_RCX[0x1c] >> 3));
  }
  ppplStack_b8 = (longlong ***)0x0;
  uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58);
  if (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0) {
    uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58);
    if ((((*(byte *)(alStackX_10[0] + 0x1bd8) & 0x20) != 0) &&
        (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58),
        *(char *)(_DAT_180c86870 + 0xf8) != '\0')) &&
       (uStack_58 = (longlong *)CONCAT44(uStack_58._4_4_,(uint32_t)uStack_58),
       6 < *(int *)(in_RCX + 0x4f8))) {
      uVar9 = AllocateSystemMemory(_DAT_180c8ed18,0xe0,8,3);
      ppplStackX_8 = (longlong ***)&uStack_60;
      plStack_68 = alStackX_10;
      puStack_50 = &UNK_1801bc840;
      puStack_48 = &UNK_1801bc820;
      uStack_70._0_4_ = SUB84(in_RCX,0);
      uStack_70._4_4_ = (uint32_t)((ulonglong)in_RCX >> 0x20);
      uStack_60._0_4_ = (uint32_t)uStack_70;
      uStack_60._4_4_ = uStack_70._4_4_;
      uStack_70 = in_RCX;
      uStack_58 = plStack_68;
      ppplStack_b8 = (longlong ***)FUN_18006b640(uVar9,&uStack_60);
      if (ppplStack_b8 != (longlong ***)0x0) {
        ppplStack_80 = ppplStack_b8;
        (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
      }
      uVar9 = _DAT_180c82868;
      ppplStack_80 = (longlong ***)0x0;
      if (*(int *)(_DAT_180c8a9c8 + 0x380) == 0) {
        pppplStackX_20 = &ppplStackX_8;
        ppplStackX_8 = ppplStack_b8;
        if (ppplStack_b8 != (longlong ***)0x0) {
          (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
        }
        FUN_18005e110(uVar9,&ppplStackX_8);
      }
      else {
        (*(code *)(*ppplStack_b8)[0xc])(ppplStack_b8);
        if ((*ppplStack_b8)[0xe] == (longlong *)&UNK_180049530) {
          LOCK();
          *(uint8_t *)(ppplStack_b8 + 2) = 1;
          UNLOCK();
          FUN_1800466d0(ppplStack_b8 + 4);
        }
        else {
          (*(code *)(*ppplStack_b8)[0xe])(ppplStack_b8);
        }
      }
    }
    FUN_1801ab660(in_RCX,alStackX_10[0]);
    uVar9 = _DAT_180c82868;
    if (((in_RCX[0x89] != (longlong ****)0x0) && (*(char *)(_DAT_180c86870 + 0xfa) != '\0')) &&
       ((*(longlong *)(alStackX_10[0] + 0x3580) != 0 &&
        (*(int *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x110) != 0)))) {
      uStack_70 = &pppplStackX_20;
      pppplStackX_20 = (longlong ****)in_RCX[0x89][0x461];
      if (pppplStackX_20 != (longlong ****)0x0) {
        (*(code *)(*pppplStackX_20)[5])();
      }
      ProcessNetworkConnection(uVar9,&pppplStackX_20,0);
    }
    if ((*(char *)((longlong)in_RCX + 0x563) != '\0') &&
       (0 < (int)(((longlong)in_RCX[0xb6] - (longlong)in_RCX[0xb5]) / 0xc))) {
      FUN_180046190(in_RCX + 0x4cf);
      while( true ) {
        ppplVar3 = *in_RCX[0x4ce];
        if (ppplVar3 == (longlong ***)&UNK_180a0c2b8) {
          cVar6 = *(char *)(in_RCX[0x4ce] + 2) != '\0';
        }
        else {
          cVar6 = (*(code *)ppplVar3[0xd])();
        }
        uVar9 = _DAT_180c82868;
        if (cVar6 != '\0') break;
        ModuleInitializationResult0 = FUN_18005e890(_DAT_180c82868);
        if (ModuleInitializationResult0 != 0) {
          pModuleInitializationResult1 = (longlong *)FUN_18005e890(uVar9);
          (**(code **)(*pModuleInitializationResult1 + 0x20))(pModuleInitializationResult1,0);
        }
      }
    }
    ModuleInitializationResult0 = alStackX_10[0];
    pModuleInitializationResult1 = *(longlong **)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x630);
    if (pModuleInitializationResult1 != (longlong *)0x0) {
      plStack_78 = pModuleInitializationResult1;
      (**(code **)(*pModuleInitializationResult1 + 0x28))(pModuleInitializationResult1);
    }
    plStack_78 = *(longlong **)(ModuleInitializationResult0 + 0x12498);
    *(longlong **)(ModuleInitializationResult0 + 0x12498) = pModuleInitializationResult1;
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    ppppModuleInitializationResult3 = in_RCX[99];
    if (ppppModuleInitializationResult3 != (longlong ****)0x0) {
      (*(code *)(*ppppModuleInitializationResult3)[0x1f])(ppppModuleInitializationResult3,alStackX_10[0]);
    }
    if (in_RCX[0x22] != (longlong ****)0x0) {
      (*(code *)in_RCX[0x23])(alStackX_10[0]);
    }
    if ((*(char *)(in_RCX + 0xb74) != '\0') &&
       (ModuleInitializationResult0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x530), ModuleInitializationResult0 != 0)) {
      *(uint32_t *)(ModuleInitializationResult0 + 0x40) = 0x41200000;
    }
    if (*(int *)(in_RCX + 0xa3a) != 0) {
      MemoryAddress = *(uint32_t *)(in_RCX + 0xa3a);
      pppppModuleInitializationResult7 = in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      LOCK();
      *(uint32_t *)pppppModuleInitializationResult7 = 0;
      UNLOCK();
      FUN_1801b9a40(pppppModuleInitializationResult7,MemoryAddress);
      if (*(int *)(in_RCX + 0xa3a) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = (*(int *)(in_RCX + 0xa3a) - 1U >> 0xc) + 1;
      }
      if (iVar7 != 0) {
        memcpy(pppppModuleInitializationResult7[1],in_RCX[0xa3b],0x20000);
      }
      ModuleInitializationResult0 = *(longlong *)(*(longlong *)(alStackX_10[0] + 0x3580) + 0x118);
      if (ModuleInitializationResult0 != 0) {
        *(longlong ******)(ModuleInitializationResult0 + 0x98c8) =
             in_RCX + (longlong)*(int *)(in_RCX + 0xa39) * 0x121 + 0x7f7;
      }
    }
    MemoryAddress4 = *(int *)(in_RCX + 0xa39) + 1U & 0x80000001;
    if ((int)MemoryAddress4 < 0) {
      MemoryAddress4 = (MemoryAddress4 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(in_RCX + 0xa39) = MemoryAddress4;
  }
  while (iVar7 = (int)MemoryAddress6, (ulonglong)(longlong)iVar7 < (ulonglong)*(uint *)(in_RCX + 0xb5b)) {
    ppppModuleInitializationResult3 = in_RCX[(MemoryAddress6 >> 10) + 0xb5c] +
                 (ulonglong)(uint)(iVar7 + (int)(MemoryAddress6 >> 10) * -0x400) * 0x18;
    FUN_180075ff0(*ppppModuleInitializationResult3);
    FUN_180077750(*ppppModuleInitializationResult3,ppppModuleInitializationResult3[1],ppppModuleInitializationResult3 + 2,0,ppppModuleInitializationResult3 + 10);
    MemoryAddress6 = (ulonglong)(iVar7 + 1);
  }
  MemoryAddress2 = (ulonglong)*(uint *)(in_RCX + 0xb5b);
  LOCK();
  *(uint32_t *)(in_RCX + 0xb5b) = 0;
  uVar9 = _DAT_180c82868;
  UNLOCK();
  if (ppplStack_b8 != (longlong ***)0x0) {
    ppplStackX_8 = (longlong ***)&ppplStack_b0;
    ppplStack_b0 = ppplStack_b8;
    (*(code *)(*ppplStack_b8)[5])(ppplStack_b8);
    ProcessNetworkConnection(uVar9,&ppplStack_b0,0);
    MemoryAddress2 = (*(code *)(*ppplStack_b8)[7])(ppplStack_b8);
  }
  return MemoryAddress2;
}
uint64_t *
FUN_18019e140(uint64_t *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
{
  int LoopCounter;
  uint64_t *pBufferSize;
  uint32_t *puVar3;
  uint32_t uVar4;
  *param_1 = &SystemBufferTemplate;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(uint32_t *)(param_1 + 2) = 0;
  FUN_1806277c0(param_1,9,param_3,param_4,0,0xfffffffffffffffe);
  pBufferSize = (uint64_t *)param_1[1];
  *pBufferSize = 0x6a624f656e656353;
  *(uint16_t *)(pBufferSize + 1) = 0x2f;
  *(uint32_t *)(param_1 + 2) = 9;
  uVar4 = 1;
  LoopCounter = *(int *)(param_1 + 2);
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_1806277c0(param_1,LoopCounter + *(int *)(param_2 + 0x10));
    memcpy((ulonglong)*(uint *)(param_1 + 2) + param_1[1],*(uint64_t *)(param_2 + 8),
           (longlong)(*(int *)(param_2 + 0x10) + 1),param_4,uVar4);
  }
  FUN_1806277c0(param_1,LoopCounter + 6);
  puVar3 = (uint32_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]);
  *puVar3 = 0x6563732f;
  *(uint16_t *)(puVar3 + 1) = 0x656e;
  *(uint8_t *)((longlong)puVar3 + 6) = 0;
  *(int *)(param_1 + 2) = LoopCounter + 6;
  FUN_1806277c0(param_1,LoopCounter + 0xd);
  *(uint64_t *)((ulonglong)*(uint *)(param_1 + 2) + param_1[1]) = 0x656e656373782e;
  *(int *)(param_1 + 2) = LoopCounter + 0xd;
  return param_1;
}
  DAT_180c82842 = 1;
  uStack_160 = 3;
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (uint64_t *******)0x0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  lVar24 = *(longlong *)(*pModuleInitializationResult3 + 0x890) - *(longlong *)(*pModuleInitializationResult3 + 0x888) >> 5;
  lStack_b0 = lVar24;
  ppppppplStackX_8 = (longlong *******)((ulonglong)ppppppplStackX_8 & 0xffffffff00000000);
  if (0 < (int)lVar24) {
    do {
      if (StringIndex1 < 0) {
LAB_1801d58d5:
        ModuleInitializationResult9 = FUN_180628ca0();
      }
      else {
        ModuleInitializationResult9 = *(longlong *)(*pModuleInitializationResult3 + 0x888);
        if ((ulonglong)(*(longlong *)(*pModuleInitializationResult3 + 0x890) - ModuleInitializationResult9 >> 5) <=
            (ulonglong)(longlong)StringIndex1) goto LAB_1801d58d5;
        ModuleInitializationResult9 = (longlong)StringIndex1 * 0x20 + ModuleInitializationResult9;
      }
      puStack_1a8 = &UNK_180a3c3e0;
      uStack_190 = 0;
      puStack_1a0 = (uint8_t *)0x0;
      uStack_198 = 0;
      FUN_1806277c0(&puStack_1a8,*(uint32_t *)(ModuleInitializationResult9 + 0x10));
      if (*(int *)(ModuleInitializationResult9 + 0x10) != 0) {
        memcpy(puStack_1a0,*(uint64_t *)(ModuleInitializationResult9 + 8),*(int *)(ModuleInitializationResult9 + 0x10) + 1);
      }
      if (*(longlong *)(ModuleInitializationResult9 + 8) != 0) {
        uStack_198 = 0;
        if (puStack_1a0 != (uint8_t *)0x0) {
          *puStack_1a0 = 0;
        }
        uStack_190 = uStack_190 & 0xffffffff;
      }
      LoopCounter7 = uStack_198 + 8;
      FUN_1806277c0(&puStack_1a8,LoopCounter7);
      *(uint64_t *)(puStack_1a0 + uStack_198) = 0x6a624f656e656353;
      *(uint8_t *)((longlong)(puStack_1a0 + uStack_198) + 8) = 0;
      uStack_198 = LoopCounter7;
      cVar5 = FUN_180624a00(&puStack_1a8);
      if (cVar5 == '\0') {
        puStack_1a8 = &UNK_180a3c3e0;
        if (puStack_1a0 != (uint8_t *)0x0) {
          CleanupSystemResources();
        }
      }
      else {
        pppppuStack_d0 = (uint64_t *****)0x0;
        pppppuStack_c8 = (uint64_t *****)0x0;
        uStack_c0 = 0;
        uStack_b8 = 3;
        FUN_18062c5f0(&puStack_1a8,&pppppuStack_d0);
        pppppBufferSize6 = pppppuStack_c8;
        pppppBufferSize3 = pppppuStack_d0;
        ModuleInitializationResult9 = (longlong)pppppuStack_c8 - (longlong)pppppuStack_d0;
        ppppppMemoryAddress2 = (uint64_t ******)AllocateSystemMemory(_DAT_180c8ed18,0x20,8,3);
        ppppppuStack_d8 = ppppppMemoryAddress2;
        *ppppppMemoryAddress2 = (uint64_t *****)0x0;
        ppppppMemoryAddress2[1] = (uint64_t *****)0x0;
        ppppppMemoryAddress2[2] = (uint64_t *****)0x0;
        *(uint32_t *)(ppppppMemoryAddress2 + 3) = 3;
        pppppppuVar6 = &pppppppuStack_188;
        pppppppuVar9 = pppppppuStack_178;
        while (pppppppuVar9 != (uint64_t *******)0x0) {
          if (*(int *)(pppppppuVar9 + 4) < StringIndex1) {
            pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
          }
          else {
            pppppppuVar6 = pppppppuVar9;
            pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
          }
        }
        if (((uint64_t ********)pppppppuVar6 == &pppppppuStack_188) ||
           (StringIndex1 < *(int *)(pppppppuVar6 + 4))) {
          puVar7 = (uint64_t *)FUN_180179aa0(&pppppppuStack_188,auStack_90);
          pppppppuVar6 = (uint64_t *******)*puVar7;
        }
        pppppppuVar6[5] = ppppppMemoryAddress2;
        LoopCounter7 = (int)(ModuleInitializationResult9 >> 5);
        ModuleInitializationResult9 = (longlong)LoopCounter7;
        pppppBufferSize5 = pppppBufferSize3;
        if (0 < LoopCounter7) {
          pppppBufferSize2 = pppppBufferSize3 + 1;
          do {
            puStack_1c8 = &UNK_180a3c3e0;
            uStack_1b0._0_4_ = 0;
            uStack_1b0._4_4_ = 0;
            puStack_1c0 = (uint8_t *)0x0;
            uStack_1b8 = 0;
            FUN_1806277c0(&puStack_1c8,*(uint32_t *)(pppppBufferSize2 + 1));
            if (*(int *)(pppppBufferSize2 + 1) != 0) {
              memcpy(puStack_1c0,*pppppBufferSize2,*(int *)(pppppBufferSize2 + 1) + 1);
            }
            if (*pppppBufferSize2 != (uint64_t ****)0x0) {
              uStack_1b8 = 0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                *puStack_1c0 = 0;
              }
              uStack_1b0._4_4_ = 0;
            }
            LoopCounter7 = uStack_1b8 + 0xd;
            FUN_1806277c0(&puStack_1c8,LoopCounter7);
            puVar7 = (uint64_t *)(puStack_1c0 + uStack_1b8);
            *puVar7 = 0x782e656e6563732f;
            *(uint32_t *)(puVar7 + 1) = 0x6e656373;
            *(uint16_t *)((longlong)puVar7 + 0xc) = 0x65;
            uStack_1b8 = LoopCounter7;
            cVar5 = FUN_180624af0(&puStack_1c8);
            if (cVar5 == '\0') {
              uStack_1b8 = 0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                *puStack_1c0 = 0;
              }
              MemoryAddress = *(uint *)(pppppBufferSize2 + 1);
              BufferSize0 = (ulonglong)MemoryAddress;
              if (*pppppBufferSize2 != (uint64_t ****)0x0) {
                FUN_1806277c0(&puStack_1c8,BufferSize0);
              }
              if (MemoryAddress != 0) {
                memcpy(puStack_1c0,*pppppBufferSize2,BufferSize0);
              }
              if (puStack_1c0 != (uint8_t *)0x0) {
                puStack_1c0[BufferSize0] = 0;
              }
              uStack_1b0._4_4_ = *(uint *)((longlong)pppppBufferSize2 + 0x14);
              uStack_1b8 = MemoryAddress;
              FUN_1806277c0(&puStack_1c8,0x12);
              pMemoryAddress4 = (uint32_t *)(puStack_1c0 + uStack_1b8);
              *pMemoryAddress4 = 0x6563732f;
              pMemoryAddress4[1] = 0x782e656e;
              pMemoryAddress4[2] = 0x2e6f6373;
              pMemoryAddress4[3] = 0x65637378;
              *(uint16_t *)(pMemoryAddress4 + 4) = 0x656e;
              *(uint8_t *)((longlong)pMemoryAddress4 + 0x12) = 0;
              uStack_1b8 = 0x12;
              cVar5 = FUN_180624af0(&puStack_1c8);
              if (cVar5 != '\0') goto LAB_1801d5c43;
              puStack_1c8 = &UNK_180a3c3e0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                CleanupSystemResources();
              }
            }
            else {
LAB_1801d5c43:
              pppppppuVar6 = &pppppppuStack_188;
              pppppppuVar9 = pppppppuStack_178;
              while (pppppppuVar9 != (uint64_t *******)0x0) {
                if (*(int *)(pppppppuVar9 + 4) < StringIndex1) {
                  pppppppuVar9 = (uint64_t *******)*pppppppuVar9;
                }
                else {
                  pppppppuVar6 = pppppppuVar9;
                  pppppppuVar9 = (uint64_t *******)pppppppuVar9[1];
                }
              }
              if (((uint64_t ********)pppppppuVar6 == &pppppppuStack_188) ||
                 (StringIndex1 < *(int *)(pppppppuVar6 + 4))) {
                puVar7 = (uint64_t *)FUN_180179aa0(&pppppppuStack_188,&ppppppuStack_a0);
                pppppppuVar6 = (uint64_t *******)*puVar7;
              }
              ppppppMemoryAddress2 = pppppppuVar6[5];
              ppppppBufferSize = (uint64_t ******)ppppppMemoryAddress2[1];
              if (ppppppBufferSize < ppppppMemoryAddress2[2]) {
                ppppppMemoryAddress2[1] = ppppppBufferSize + 4;
                *ppppppBufferSize = (uint64_t *****)&SystemBufferTemplate;
                ppppppBufferSize[1] = (uint64_t *****)0x0;
                *(uint32_t *)(ppppppBufferSize + 2) = 0;
                *ppppppBufferSize = (uint64_t *****)&UNK_180a3c3e0;
                ppppppBufferSize[3] = (uint64_t *****)0x0;
                ppppppBufferSize[1] = (uint64_t *****)0x0;
                *(uint32_t *)(ppppppBufferSize + 2) = 0;
                ppppppuStack_d8 = ppppppBufferSize;
                FUN_1806277c0(ppppppBufferSize,uStack_1b8);
                if (uStack_1b8 != 0) {
                  memcpy(ppppppBufferSize[1],puStack_1c0,uStack_1b8 + 1);
                }
                if (puStack_1c0 != (uint8_t *)0x0) {
                  *(uint32_t *)(ppppppBufferSize + 2) = 0;
                  if (ppppppBufferSize[1] != (uint64_t *****)0x0) {
                    *(uint8_t *)ppppppBufferSize[1] = 0;
                  }
                  *(uint32_t *)((longlong)ppppppBufferSize + 0x1c) = 0;
                }
              }
              else {
                FUN_180059820(ppppppMemoryAddress2,&puStack_1c8);
              }
              puStack_1c8 = &UNK_180a3c3e0;
              if (puStack_1c0 != (uint8_t *)0x0) {
                CleanupSystemResources();
              }
            }
            uStack_1b0 = (ulonglong)uStack_1b0._4_4_ << 0x20;
            puStack_1c0 = (uint8_t *)0x0;
            puStack_1c8 = &SystemBufferTemplate;
            pppppBufferSize2 = pppppBufferSize2 + 4;
            ModuleInitializationResult9 = ModuleInitializationResult9 + -1;
            pppppBufferSize3 = pppppuStack_d0;
            pppppBufferSize6 = pppppuStack_c8;
            pppppBufferSize5 = pppppuStack_d0;
            lVar24 = lStack_b0;
          } while (ModuleInitializationResult9 != 0);
        }
        for (; pppppBufferSize3 != pppppBufferSize6; pppppBufferSize3 = pppppBufferSize3 + 4) {
          (*(code *)**pppppBufferSize3)(pppppBufferSize3,0);
        }
        if (pppppBufferSize5 != (uint64_t *****)0x0) {
          FUN_18064e900(pppppBufferSize5);
        }
        puStack_1a8 = &UNK_180a3c3e0;
        if (puStack_1a0 != (uint8_t *)0x0) {
          CleanupSystemResources();
        }
      }
      uStack_190 = uStack_190 & 0xffffffff00000000;
      puStack_1a0 = (uint8_t *)0x0;
      puStack_1a8 = &SystemBufferTemplate;
      StringIndex1 = StringIndex1 + 1;
      ppppppplStackX_8 = (longlong *******)CONCAT44(ppppppplStackX_8._4_4_,StringIndex1);
      pModuleInitializationResult3 = _DAT_180c86870;
      param_3 = pppppppuStackX_18;
      ModuleInitializationResult9 = lStack_a8;
      param_4 = uStackX_20;
    } while (StringIndex1 < (int)lVar24);
  }
  uStack_110 = 3;
  pppppppuStack_138 = &pppppppuStack_138;
  pppppppuStack_130 = &pppppppuStack_138;
  pppppppuStack_128 = (uint64_t *******)0x0;
  uStack_120 = 0;
  uStack_118 = 0;
  pppppppuVar9 = pppppppuStack_180;
  if ((uint64_t ********)pppppppuStack_180 != &pppppppuStack_188) {
    do {
      pppppppMemoryAddress6 = (uint64_t *******)pppppppuVar9[5];
      pppppppuVar6 = pppppppuVar9 + 4;
      pppppppuVar8 = &pppppppuStack_138;
      if (pppppppuStack_128 != (uint64_t *******)0x0) {
        pppppppMemoryAddress5 = pppppppuStack_128;
        do {
          if (*(int *)(pppppppMemoryAddress5 + 4) < *(int *)pppppppuVar6) {
            pppppppMemoryAddress5 = (uint64_t *******)*pppppppMemoryAddress5;
          }
          else {
            pppppppuVar8 = pppppppMemoryAddress5;
            pppppppMemoryAddress5 = (uint64_t *******)pppppppMemoryAddress5[1];
          }
        } while (pppppppMemoryAddress5 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppppuVar8 == &pppppppuStack_138) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (uint64_t *)FUN_1801e8470(&pppppppuStack_138,&pppppppuStackX_18);
        pppppppuVar8 = (uint64_t *******)*puVar7;
      }
      if (pppppppuVar8 + 5 != pppppppMemoryAddress6) {
        FUN_1800588c0(pppppppuVar8 + 5,*pppppppMemoryAddress6,pppppppMemoryAddress6[1]);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (uint64_t *******)0x0) {
        pppppppMemoryAddress6 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppMemoryAddress6 + 4) < *(int *)pppppppuVar6) {
            pppppppMemoryAddress6 = (uint64_t *******)*pppppppMemoryAddress6;
          }
          else {
            pppppppuVar8 = pppppppMemoryAddress6;
            pppppppMemoryAddress6 = (uint64_t *******)pppppppMemoryAddress6[1];
          }
        } while (pppppppMemoryAddress6 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (uint64_t *)FUN_180179aa0(&pppppppuStack_188,&ppppppplStackX_8);
        pppppppuVar8 = (uint64_t *******)*puVar7;
      }
      ppppppMemoryAddress2 = pppppppuVar8[5];
      ppppppuStack_a0 = ppppppMemoryAddress2;
      if (ppppppMemoryAddress2 != (uint64_t ******)0x0) {
        FUN_18005d580(ppppppMemoryAddress2);
        FUN_18064e900(ppppppMemoryAddress2);
      }
      pppppppuVar8 = &pppppppuStack_188;
      if (pppppppuStack_178 != (uint64_t *******)0x0) {
        pppppppMemoryAddress6 = pppppppuStack_178;
        do {
          if (*(int *)(pppppppMemoryAddress6 + 4) < *(int *)pppppppuVar6) {
            pppppppMemoryAddress6 = (uint64_t *******)*pppppppMemoryAddress6;
          }
          else {
            pppppppuVar8 = pppppppMemoryAddress6;
            pppppppMemoryAddress6 = (uint64_t *******)pppppppMemoryAddress6[1];
          }
        } while (pppppppMemoryAddress6 != (uint64_t *******)0x0);
      }
      if (((uint64_t ********)pppppppuVar8 == &pppppppuStack_188) ||
         (*(int *)pppppppuVar6 < *(int *)(pppppppuVar8 + 4))) {
        puVar7 = (uint64_t *)FUN_180179aa0(&pppppppuStack_188,&ppppppuStack_d8);
        pppppppuVar8 = (uint64_t *******)*puVar7;
      }
      pppppppuVar8[5] = (uint64_t ******)0x0;
      pppppppuVar9 = (uint64_t *******)func_0x00018066bd70(pppppppuVar9);
    } while ((uint64_t ********)pppppppuVar9 != &pppppppuStack_188);
  }
  pppppppuVar9 = pppppppuStack_178;
  if (pppppppuStack_178 != (uint64_t *******)0x0) {
    FUN_18004b790(&pppppppuStack_188,*pppppppuStack_178);
    FUN_18064e900(pppppppuVar9);
  }
  pppppppuStack_188 = &pppppppuStack_188;
  pppppppuStack_180 = &pppppppuStack_188;
  pppppppuStack_178 = (uint64_t *******)0x0;
  uStack_170 = uStack_170 & 0xffffffffffffff00;
  uStack_168 = 0;
  MemoryAddress0 = AllocateSystemMemory(_DAT_180c8ed18,0x150,8,3);
  pppppppuStackX_18 = (uint64_t *******)&pppppuStack_d0;
  MemoryAddress1 = FUN_1806279c0(&pppppuStack_d0,param_4);
  ppppppplStackX_8 = (longlong *******)&ppppppplStack_108;
  uStack_ef = 0;
  uStack_eb = 0;
  uStack_e9 = 0;
  uStack_e0 = uStack_110;
  ppppppplStack_108 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_100 = (longlong *******)&ppppppplStack_108;
  ppppppplStack_f8 = (longlong *******)0x0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  if (pppppppuStack_128 != (uint64_t *******)0x0) {
    ppppppplStack_f8 =
         (longlong *******)FUN_1801ebff0(&ppppppplStack_108,pppppppuStack_128,&ppppppplStack_108);
    ppppppplVar4 = (longlong *******)*ppppppplStack_f8;
    ppppppplStack_108 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (longlong *******)0x0) {
      ppppppplStack_108 = ppppppplVar3;
      ppppppplVar4 = (longlong *******)*ppppppplVar3;
    }
    ppppppplVar4 = (longlong *******)ppppppplStack_f8[1];
    ppppppplStack_100 = ppppppplStack_f8;
    while (ppppppplVar3 = ppppppplVar4, ppppppplVar3 != (longlong *******)0x0) {
      ppppppplStack_100 = ppppppplVar3;
      ppppppplVar4 = (longlong *******)ppppppplVar3[1];
    }
    uStack_e8 = uStack_118;
  }
  ppppppMemoryAddress2 = (uint64_t ******)
                 FUN_1801ec160(MemoryAddress0,&ppppppplStack_108,MemoryAddress1,pppppppuStackX_10,param_3);
  if (ppppppMemoryAddress2 != (uint64_t ******)0x0) {
    pppppppuStackX_18 = (uint64_t *******)ppppppMemoryAddress2;
    (*(code *)(*ppppppMemoryAddress2)[5])(ppppppMemoryAddress2);
  }
  pppppppuStackX_18 = *(uint64_t ********)(ModuleInitializationResult9 + 0x40);
  *(uint64_t *******)(ModuleInitializationResult9 + 0x40) = ppppppMemoryAddress2;
  if (pppppppuStackX_18 != (uint64_t *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[7])();
  }
  MemoryAddress0 = _DAT_180c82868;
  pppppppuStackX_10 = &pppppppuStackX_18;
  pppppppuStackX_18 = *(uint64_t ********)(ModuleInitializationResult9 + 0x40);
  if (pppppppuStackX_18 != (uint64_t *******)0x0) {
    (*(code *)(*pppppppuStackX_18)[5])();
  }
  ProcessNetworkPacket(MemoryAddress0,&pppppppuStackX_18);
  pppppppuVar6 = pppppppuStack_128;
  pppppppuVar9 = pppppppuStack_178;
  pppppppuStackX_18 = pppppppuStack_128;
  if (pppppppuStack_128 == (uint64_t *******)0x0) {
    if (pppppppuStack_178 != (uint64_t *******)0x0) {
      FUN_18004b790(&pppppppuStack_188,*pppppppuStack_178);
      FUN_18064e900(pppppppuVar9);
    }
    puStack_158 = &UNK_180a3c3e0;
    if (puStack_150 == (void *)0x0) {
      return;
    }
    CleanupSystemResources();
  }
  FUN_1801ec300(&pppppppuStack_138,*pppppppuStack_128);
  pppppppuStackX_10 = pppppppuVar6 + 4;
  ppppppplStackX_8 = pppppppuVar6 + 5;
  FUN_18005d580();
  FUN_18064e900(pppppppuVar6);
}
        DAT_180c91d14 = 0;
        return plVar7;
      }
      ModuleInitializationResult0 = (longlong)LoopCounter1 << 4;
      do {
        if ((int)(fVar12 - 12582912.0) <= (int)plVar9) {
          DAT_180c91d14 = 0;
          return plVar7;
        }
        lVar8 = *(longlong *)(ModuleInitializationResult0 + (longlong)_DAT_180c91cf0);
        plVar7 = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xe0);
        if ((*(uint *)(lVar8 + 0xe0) == 2) &&
           (plVar7 = (longlong *)(ulonglong)*(uint *)(lVar8 + 0xd8), *(uint *)(lVar8 + 0xd8) == 0))
        {
          LOCK();
          MemoryAddress = *(uint *)(lVar8 + 0xd8);
          if (MemoryAddress == 0) {
            *(uint *)(lVar8 + 0xd8) = 0xffffffff;
          }
          else {
            plVar7 = (longlong *)(ulonglong)MemoryAddress;
          }
          UNLOCK();
          if (MemoryAddress == 0) {
            *(uint8_t *)(lVar8 + 0xdc) = 0;
            FUN_18034dd30(lVar8 + 0xe8);
            uVar5 = *(uint64_t *)(lVar8 + 0x88);
            iVar4 = *(int *)(lVar8 + 0x80);
            *(uint64_t *)(lVar8 + 0x88) = 0;
            *(uint32_t *)(lVar8 + 0x80) = 0;
            *(uint32_t *)(lVar8 + 0xe0) = 0;
            *(uint32_t *)(lVar8 + 0xd8) = 0;
            FUN_1804055e0(uVar5);
            LOCK();
            MemoryAddress = _DAT_180c91d10 - iVar4;
            plVar7 = (longlong *)(ulonglong)_DAT_180c91d10;
            UNLOCK();
            _DAT_180c91d10 = MemoryAddress;
            if (0 < iVar4) {
              plVar9 = (longlong *)(ulonglong)(uint)((int)plVar9 + iVar4);
              plVar7 = _DAT_180c91cf0 + (longlong)LoopCounter1 * 2 + 2;
              if (plVar7 < _DAT_180c91cf8) {
                memmove(_DAT_180c91cf0 + (longlong)LoopCounter1 * 2,plVar7,
                        (longlong)_DAT_180c91cf8 - (longlong)plVar7);
              }
              plVar7 = _DAT_180c91cf8 + -2;
              _DAT_180c91cf8 = plVar7;
            }
          }
        }
        ModuleInitializationResult0 = ModuleInitializationResult0 + -0x10;
        LoopCounter1 = LoopCounter1 + -1;
      } while (-1 < LoopCounter1);
      DAT_180c91d14 = 0;
      return plVar7;
    }
    BufferSize = *(uint32_t *)(ModuleInitializationResult0 + 0x84);
    uVar3 = *(uint32_t *)(ModuleInitializationResult0 + 0x80);
    if (plVar7 < _DAT_180c91d00) {
      _DAT_180c91cf8 = plVar7 + 2;
      *plVar7 = ModuleInitializationResult0;
      plVar7[1] = CONCAT44(uVar3,BufferSize);
    }
    else {
      lVar8 = (longlong)plVar7 - (longlong)_DAT_180c91cf0 >> 4;
      if (lVar8 == 0) {
        lVar8 = 1;
LAB_180203fb6:
        plVar7 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar8 << 4,DAT_180c91d08);
      }
      else {
        lVar8 = lVar8 * 2;
        plVar7 = plVar9;
        if (lVar8 != 0) goto LAB_180203fb6;
      }
      if (_DAT_180c91cf0 != _DAT_180c91cf8) {
        memmove(plVar7,_DAT_180c91cf0,(longlong)_DAT_180c91cf8 - (longlong)_DAT_180c91cf0);
      }
      *plVar7 = ModuleInitializationResult0;
      plVar7[1] = CONCAT44(uVar3,BufferSize);
      if (_DAT_180c91cf0 != (longlong *)0x0) {
        CleanupSystemResources();
      }
      _DAT_180c91d00 = plVar7 + lVar8 * 2;
      _DAT_180c91cf0 = plVar7;
      _DAT_180c91cf8 = plVar7 + 2;
    }
    cVar6 = FUN_180068a90(0x180c919f0,&lStackX_20);
    plVar7 = _DAT_180c91cf8;
    ModuleInitializationResult0 = lStackX_20;
  } while( true );
}
      DAT_180c91d14 = uVar6;
      return;
    }
    lVar4 = *(longlong *)(lVar5 + _DAT_180c91cf0);
    if ((*(int *)(lVar4 + 0xe0) == 2) && (*(int *)(lVar4 + 0xd8) == 0)) {
      LOCK();
      bVar8 = *(int *)(lVar4 + 0xd8) == 0;
      if (bVar8) {
        *(int *)(lVar4 + 0xd8) = -1;
      }
      UNLOCK();
      if (bVar8) {
        *(uint8_t *)(lVar4 + 0xdc) = uVar6;
        FUN_18034dd30(lVar4 + 0xe8);
        uVar3 = *(uint64_t *)(lVar4 + 0x88);
        StringIndex = *(int *)(lVar4 + 0x80);
        *(uint64_t *)(lVar4 + 0x88) = unaff_R12;
        uVar7 = (uint32_t)unaff_R12;
        *(uint32_t *)(lVar4 + 0x80) = uVar7;
        *(uint32_t *)(lVar4 + 0xe0) = uVar7;
        *(uint32_t *)(lVar4 + 0xd8) = uVar7;
        FUN_1804055e0(uVar3);
        LOCK();
        _DAT_180c91d10 = _DAT_180c91d10 - StringIndex;
        UNLOCK();
        if (0 < StringIndex) {
          unaff_EBP = unaff_EBP + StringIndex;
          lVar4 = (longlong)unaff_EDI * 0x10 + _DAT_180c91cf0;
          MemoryAddress = lVar4 + 0x10;
          if (MemoryAddress < _DAT_180c91cf8) {
            memmove(lVar4,MemoryAddress,_DAT_180c91cf8 - MemoryAddress);
          }
          _DAT_180c91cf8 = _DAT_180c91cf8 - 0x10;
        }
      }
    }
    lVar5 = lVar5 + -0x10;
    unaff_EDI = unaff_EDI + -1;
  } while (-1 < unaff_EDI);
  DAT_180c91d14 = uVar6;
  return;
}
  DAT_180c91d14 = unaff_BPL;
  return;
}
        DAT_180d48da8 = '\x01';
        iStack_2c8 = 0x786;
        FUN_180060680(auStack_258,&UNK_180a177f0,&UNK_180a17770,&UNK_180a17798);
        OutputDebugStringA(auStack_258);
      }
      fVar14 = (float)modff((float)(int)(*(ushort *)((longlong)param_1 + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      fVar15 = (float)modff();
      fStack_298 = (fStack_28c - fStack_298) * fVar15 + fStack_298;
      fStack_294 = (fStack_288 - fStack_294) * fVar15 + fStack_294;
      fStack_290 = (fStack_284 - fStack_290) * fVar15 + fStack_290;
      fVar16 = (((fStack_270 - fStack_27c) * fVar15 + fStack_27c) - fStack_294) * fVar14 +
               fStack_294;
      fVar17 = (((fStack_26c - fStack_278) * fVar15 + fStack_278) - fStack_290) * fVar14 +
               fStack_290;
      fVar14 = (((fStack_274 - fStack_280) * fVar15 + fStack_280) - fStack_298) * fVar14 +
               fStack_298;
    }
    else {
      fVar16 = (float)uStack_2b0;
      fVar17 = (float)uStack_2b0;
      fVar14 = (float)uStack_2b0;
    }
    *param_2 = fVar17;
    param_2[1] = fVar16;
    param_2[2] = fVar14;
    param_2[3] = 1.0;
    break;
  case 0x16:
    iStack_2c8 = param_4;
    FUN_1802a41e0(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
code_r0x0001802a14f5:
    *param_2 = (float)uStack_2b0._2_1_ * 0.003921569;
    bVar1 = (byte)uStack_2b0;
code_r0x0001802a151f:
    fVar16 = 0.003921569;
    uVar5 = (ushort)uStack_2b0._1_1_;
    uVar3 = (ushort)bVar1;
    uVar4 = (ushort)uStack_2b0._3_1_;
code_r0x0001802a1528:
    param_2[1] = (float)uVar5 * fVar16;
    param_2[2] = (float)uVar3 * fVar16;
    param_2[3] = (float)uVar4 * fVar16;
    break;
  case 0x1e:
    iStack_2c8 = param_4;
    puVar8 = (uint16_t *)FUN_1802a4590(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = (float)func_0x0001800adf40(puVar8[2]);
    fVar17 = (float)func_0x0001800adf40(puVar8[1]);
    fVar14 = (float)func_0x0001800adf40(*puVar8);
    fVar15 = (float)func_0x0001800adf40(puVar8[3]);
    param_2[3] = fVar15;
    *param_2 = fVar14;
    param_2[1] = fVar17;
    param_2[2] = fVar16;
    break;
  case 0x20:
    iStack_2c8 = param_4;
    FUN_1802a1fb0(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    *param_2 = (float)uStack_2b0;
    param_2[2] = (float)uStack_2a8;
code_r0x0001802a1ad1:
    param_2[3] = 1.0;
    fVar16 = uStack_2b0._4_4_;
code_r0x0001802a1ade:
    param_2[1] = fVar16;
    break;
  case 0x21:
    if (param_4 == 0) {
      LoopCounter1 = *(ushort *)((longlong)param_1 + 0x5e) - 1;
      LoopCounter3 = *(ushort *)((longlong)param_1 + 0x5c) - 1;
      uStackX_18._0_4_ = (float)param_3;
      if ((int)((float)LoopCounter3 * (float)uStackX_18) <= LoopCounter3) {
        LoopCounter3 = (int)((float)LoopCounter3 * (float)uStackX_18);
      }
      uStackX_18._4_4_ = (float)((ulonglong)param_3 >> 0x20);
      if ((int)((float)LoopCounter1 * uStackX_18._4_4_) <= LoopCounter1) {
        LoopCounter1 = (int)((float)LoopCounter1 * uStackX_18._4_4_);
      }
      iVar7 = 0;
      if (-1 < LoopCounter1) {
        iVar7 = LoopCounter1;
      }
      LoopCounter1 = 0;
      if (-1 < LoopCounter3) {
        LoopCounter1 = LoopCounter3;
      }
      puVar9 = (uint64_t *)
               ((longlong)(int)(iVar7 * (uint)*(ushort *)((longlong)param_1 + 0x5c) + LoopCounter1) * 0x10
               + *param_1);
      BufferSize = puVar9[1];
      *(uint64_t *)param_2 = *puVar9;
      *(uint64_t *)(param_2 + 2) = BufferSize;
    }
    else if (param_4 == 1) {
      FUN_1802a4e60(param_1,&uStackX_18,param_3,&fStack_298);
      fVar16 = (float)modff((float)(int)(*(ushort *)((longlong)param_1 + 0x5e) - 1) *
                            uStackX_18._4_4_,&uStack_2b0);
      fVar17 = (float)modff();
      fStack_298 = (fStack_288 - fStack_298) * fVar17 + fStack_298;
      fStack_294 = (fStack_284 - fStack_294) * fVar17 + fStack_294;
      fStack_290 = (fStack_280 - fStack_290) * fVar17 + fStack_290;
      *param_2 = (((fStack_268 - fStack_278) * fVar17 + fStack_278) - fStack_298) * fVar16 +
                 fStack_298;
      param_2[1] = (((fStack_264 - fStack_274) * fVar17 + fStack_274) - fStack_294) * fVar16 +
                   fStack_294;
      param_2[2] = (((fStack_260 - fStack_270) * fVar17 + fStack_270) - fStack_290) * fVar16 +
                   fStack_290;
      param_2[3] = 3.4028235e+38;
    }
    else {
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
    }
    break;
  case 0x27:
    iStack_2c8 = param_4;
    FUN_1802a2ab0(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = 1.5259022e-05;
    *param_2 = (float)(ushort)uStack_2b0 * 1.5259022e-05;
    uVar6 = (uint)uStack_2b0._2_2_;
    uVar5 = uStack_2b0._4_2_;
    goto code_r0x0001802a16a1;
  case 0x28:
    iStack_2c8 = param_4;
    FUN_1802a2d10(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
    fVar16 = 0.003921569;
    *param_2 = (float)(byte)uStack_2b0 * 0.003921569;
    uVar6 = (uint)uStack_2b0._1_1_;
    uVar5 = (ushort)uStack_2b0._2_1_;
    goto code_r0x0001802a16a1;
  case 0x29:
    iStack_2c8 = param_4;
    FUN_1802a2d10(ModuleInitializationResult0,&uStack_2b0,param_1,&uStackX_18);
code_r0x0001802a1677:
    fVar16 = 0.003921569;
    *param_2 = (float)uStack_2b0._2_1_ * 0.003921569;
    uVar6 = (uint)((ulonglong)uStack_2b0 >> 8) & 0xff;
    uVar5 = (ushort)(byte)uStack_2b0;
code_r0x0001802a16a1:
    param_2[3] = 1.0;
    param_2[2] = (float)uVar5 * fVar16;
    param_2[1] = (float)uVar6 * fVar16;
    break;
  case 0x2b:
    iStack_2c8 = param_4;
    FUN_1802a2420(ModuleInitializationResult0,abStack_2b8,param_1,&uStackX_18);
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = (float)abStack_2b8[0];
    break;
  case 0x2c:
    uVar5 = FUN_1802a21d0(ModuleInitializationResult0,param_1,&uStackX_18);
    fVar16 = (float)uVar5;
code_r0x0001802a1829:
    *param_2 = fVar16;
    param_2[1] = 1.0;
    param_2[2] = 1.0;
    param_2[3] = 1.0;
  }
FUN_1802a1af3:
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2e8);
}
    DAT_180d48da8 = '\x01';
    FUN_180060680(unaff_RBP + -0x70,&UNK_180a177f0,&UNK_180a17770,&UNK_180a17798,0x786);
    OutputDebugStringA(unaff_RBP + -0x70);
  }
  MemoryAddress = *(ushort *)(unaff_RDI + 0x5c);
  fVar5 = *(float *)(unaff_RBP + 0x200);
  fVar4 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  fVar5 = (float)modff((float)(int)(MemoryAddress - 1) * fVar5,&stack0x00000038);
  fVar6 = (fStack000000000000005c - fStack0000000000000050) * fVar5 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar5 + fStack0000000000000054;
  fVar7 = (fStack0000000000000064 - fStack0000000000000058) * fVar5 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar5 + fStack0000000000000070)
               - fVar7) * fVar4 + fVar7;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar5 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar4 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar5 +
                  fStack0000000000000068) - fVar6) * fVar4 + fVar6;
  unaff_RBX[3] = 1.0;
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
  DAT_180d48da8 = 1;
  FUN_180060680(unaff_RBP + -0x70,&UNK_180a177f0,&UNK_180a17770,&UNK_180a17798,0x786);
  OutputDebugStringA(unaff_RBP + -0x70);
  MemoryAddress = *(ushort *)(unaff_RDI + 0x5c);
  fVar3 = *(float *)(unaff_RBP + 0x200);
  fVar2 = (float)modff((float)(int)(*(ushort *)(unaff_RDI + 0x5e) - 1) *
                       *(float *)(unaff_RBP + 0x204),&stack0x00000038);
  fVar3 = (float)modff((float)(int)(MemoryAddress - 1) * fVar3,&stack0x00000038);
  fVar4 = (fStack000000000000005c - fStack0000000000000050) * fVar3 + fStack0000000000000050;
  fStack0000000000000054 =
       (fStack0000000000000060 - fStack0000000000000054) * fVar3 + fStack0000000000000054;
  fVar5 = (fStack0000000000000064 - fStack0000000000000058) * fVar3 + fStack0000000000000058;
  *unaff_RBX = (((fStack000000000000007c - fStack0000000000000070) * fVar3 + fStack0000000000000070)
               - fVar5) * fVar2 + fVar5;
  unaff_RBX[1] = (((fStack0000000000000078 - fStack000000000000006c) * fVar3 +
                  fStack000000000000006c) - fStack0000000000000054) * fVar2 + fStack0000000000000054
  ;
  unaff_RBX[2] = (((fStack0000000000000074 - fStack0000000000000068) * fVar3 +
                  fStack0000000000000068) - fVar4) * fVar2 + fVar4;
  unaff_RBX[3] = 1.0;
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}
        DAT_180d48dac = '\x01';
        lStack_278 = CONCAT44(lStack_278._4_4_,0x4ea);
        FUN_180060680(auStack_238,&UNK_180a177f0,&UNK_180a17830,&UNK_180a17880);
        OutputDebugStringA(auStack_238);
      }
      goto LAB_1802a83bc;
    }
    uVar5 = FUN_18062c100(&puStack_268,param_1);
    FUN_18062c1e0(uVar5,1);
    puStack_268 = &UNK_180a3c3e0;
    if (puStack_260 != (void *)0x0) {
      CleanupSystemResources();
    }
    puStack_260 = (void *)0x0;
    uStack_250 = 0;
    puStack_268 = &SystemBufferTemplate;
    lVar6 = *param_2;
    MemoryAddress = *(uint16_t *)((longlong)param_2 + 0x5e);
    BufferSize = *(uint16_t *)((longlong)param_2 + 0x5c);
    puVar7 = &DAT_18098bc73;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_1 + 8);
    }
    iVar4 = fopen_s(&puStack_268,puVar7,&UNK_180a0cf4c);
    puStack_260 = puStack_268;
    if (iVar4 != 0) {
      puStack_260 = (void *)0x0;
    }
    puStack_268 = &UNK_18042d5d0;
    if (puStack_260 == (void *)0x0) goto LAB_1802a83bc;
    puVar7 = puStack_260;
    if (lVar6 != 0) {
      lStack_278 = lVar6;
      FUN_1804300b0(&puStack_268,BufferSize,MemoryAddress,iVar3);
      puVar7 = puStack_260;
    }
  }
  fclose(puVar7);
LAB_1802a83bc:
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_298);
}
        DAT_180d48daa = '\x01';
        puStack_2d8 = (void *)CONCAT44(puStack_2d8._4_4_,0xc88);
        FUN_180060680(auStack_228,&UNK_180a177f0,&UNK_180a17a68,&UNK_180a17880);
        OutputDebugStringA(auStack_228);
      }
      puVar7 = &DAT_18098bc73;
      if (*(void **)(param_1 + 8) != (void *)0x0) {
        puVar7 = *(void **)(param_1 + 8);
      }
      FUN_180062300(_DAT_180c86928,&UNK_180a17960,puVar7);
    }
  }
  cVar3 = FUN_1802a9200(param_3);
  if (cVar3 == '\0') {
    puVar7 = &DAT_18098bc73;
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      puVar7 = *(void **)(param_1 + 8);
    }
    FUN_180626f80(&UNK_180a17a18,puVar7);
  }
  else {
    *(uint64_t *)(param_3 + 0x14) = 0;
    *(uint64_t *)(param_3 + 0x1c) = 0;
    *(uint64_t *)(param_3 + 0x24) = 0;
    *(uint64_t *)(param_3 + 0x2c) = 0;
    *(uint64_t *)(param_3 + 0x34) = 0;
    *(uint64_t *)(param_3 + 0x3c) = 0;
    *(uint64_t *)(param_3 + 0x44) = 0;
    *(uint64_t *)(param_3 + 0x4c) = 0;
    uVar4 = func_0x000180220c90(*(uint32_t *)(param_3 + 0x54));
    strcpy_s(param_3 + 0x14,0x40,uVar4);
  }
LAB_1802a912b:
  FUN_1801ec3f0(auStack_260);
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_2f8);
}
      DAT_180d48dab = '\x01';
      uStack_228 = 0xac7;
      FUN_180060680(auStack_218,&UNK_180a177f0,&UNK_180a179d0,&UNK_180a17880);
      OutputDebugStringA(auStack_218);
    }
  }
  else {
    FUN_180626f80(&UNK_180a17a38);
  }
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}
bool FUN_1802a9200(uint64_t *param_1)
{
  int LoopCounter;
  uint64_t BufferSize;
  uint64_t uVar3;
  LoopCounter = *(int *)((longlong)param_1 + 0x54);
  if (LoopCounter == 0x27) {
    if (param_1[1] == 0) {
      BufferSize = 0;
      uVar3 = 0;
    }
    else {
      BufferSize = FUN_18062b420(_DAT_180c8ed18,param_1[1],3);
      uVar3 = param_1[1];
    }
    memcpy(BufferSize,*param_1,uVar3);
  }
  if (LoopCounter != 0x28) {
    if (LoopCounter == 0x29) {
      if (param_1[1] == 0) {
        BufferSize = 0;
        uVar3 = 0;
      }
      else {
        BufferSize = FUN_18062b420(_DAT_180c8ed18,param_1[1],3);
        uVar3 = param_1[1];
      }
      memcpy(BufferSize,*param_1,uVar3);
    }
    LoopCounter = func_0x0001800ab000(*(uint32_t *)((longlong)param_1 + 0x54));
    return LoopCounter != 0;
  }
  if (param_1[1] == 0) {
    BufferSize = 0;
    uVar3 = 0;
  }
  else {
    BufferSize = FUN_18062b420(_DAT_180c8ed18,param_1[1],3);
    uVar3 = param_1[1];
  }
  memcpy(BufferSize,*param_1,uVar3);
}
uint64_t FUN_1802a9450(uint64_t *param_1)
{
  uint8_t aMemoryAddress [16];
  int StringIndex;
  uint uVar3;
  float *pfVar4;
  ulonglong uVar5;
  ushort *puVar6;
  float *pfVar7;
  ulonglong uVar8;
  byte *pbVar9;
  float fVar10;
  float fVar11;
  uint8_t aMemoryAddress2 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  switch(*(int *)((longlong)param_1 + 0x54) + -1) {
  case 0:
  case 1:
    pbVar9 = (byte *)*param_1;
    pfVar4 = (float *)((ulonglong)param_1[1] >> 2);
    if (0 < (int)pfVar4) {
      uVar8 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar14 = (float)pbVar9[1] * 0.007843138 - 1.0;
        fVar13 = (float)*pbVar9 * 0.007843138 - 1.0;
        fVar15 = (float)pbVar9[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pbVar9 = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        pbVar9[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        StringIndex = (int)((fVar10 * fVar15 + 1.0) * 127.5);
        pbVar9[2] = (byte)StringIndex;
        pbVar9 = pbVar9 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)StringIndex >> 8),1);
    }
    break;
  default:
    return 0;
  case 8:
    puVar6 = (ushort *)*param_1;
    pfVar4 = (float *)((ulonglong)param_1[1] >> 3);
    if (0 < (int)pfVar4) {
      uVar8 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar14 = (float)puVar6[1] * 3.0518044e-05 - 1.0;
        fVar13 = (float)*puVar6 * 3.0518044e-05 - 1.0;
        fVar15 = (float)puVar6[2] * 3.0518044e-05 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *puVar6 = (ushort)(int)((fVar10 * fVar13 + 1.0) * 32767.5);
        puVar6[1] = (ushort)(int)((fVar10 * fVar14 + 1.0) * 32767.5);
        StringIndex = (int)((fVar10 * fVar15 + 1.0) * 32767.5);
        puVar6[2] = (ushort)StringIndex;
        puVar6 = puVar6 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)StringIndex >> 8),1);
    }
    break;
  case 0x1f:
    pfVar4 = (float *)*param_1;
    if (0 < (int)((ulonglong)param_1[1] / 0xc)) {
      uVar8 = (ulonglong)param_1[1] / 0xc & 0xffffffff;
      do {
        fVar13 = (*pfVar4 + *pfVar4) - 1.0;
        fVar14 = (pfVar4[1] + pfVar4[1]) - 1.0;
        fVar15 = (pfVar4[2] + pfVar4[2]) - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar4 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar4[1] = (fVar10 * fVar14 + 1.0) * 0.5;
        pfVar4[2] = (fVar10 * fVar15 + 1.0) * 0.5;
        pfVar4 = pfVar4 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
    }
    break;
  case 0x20:
    uVar8 = param_1[1];
    pfVar7 = (float *)*param_1;
    pfVar4 = (float *)(uVar8 >> 4);
    if (0 < (int)pfVar4) {
      uVar5 = (ulonglong)pfVar4 & 0xffffffff;
      do {
        fVar13 = (*pfVar7 + *pfVar7) - 1.0;
        fVar14 = (pfVar7[1] + pfVar7[1]) - 1.0;
        fVar15 = (pfVar7[2] + pfVar7[2]) - 1.0;
        fVar10 = fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pfVar7 = (fVar10 * fVar13 + 1.0) * 0.5;
        pfVar7[2] = (fVar15 * fVar10 + 1.0) * 0.5;
        pfVar7[1] = (fVar10 * fVar14 + 1.0) * 0.5;
        pfVar7 = pfVar7 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return CONCAT71((uint7)(uVar8 >> 0xc),1);
    }
    break;
  case 0x26:
    puVar6 = (ushort *)*param_1;
    aMemoryAddress._8_8_ = 0;
    aMemoryAddress._0_8_ = param_1[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * aMemoryAddress,0);
    uVar8 = (ulonglong)param_1[1] / 6;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        fVar14 = (float)puVar6[1] * 0.007843138 - 1.0;
        fVar13 = (float)*puVar6 * 0.007843138 - 1.0;
        fVar15 = (float)puVar6[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *puVar6 = (ushort)(int)((fVar13 * fVar10 + 1.0) * 127.5);
        puVar6[1] = (ushort)(int)((fVar14 * fVar10 + 1.0) * 127.5);
        StringIndex = (int)((fVar15 * fVar10 + 1.0) * 127.5);
        puVar6[2] = (ushort)StringIndex;
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      return CONCAT71((uint7)(uint3)((uint)StringIndex >> 8),1);
    }
    break;
  case 0x27:
  case 0x28:
    pbVar9 = (byte *)*param_1;
    aMemoryAddress2._8_8_ = 0;
    aMemoryAddress2._0_8_ = param_1[1];
    pfVar4 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * aMemoryAddress2,0);
    uVar8 = (ulonglong)param_1[1] / 3;
    if (0 < (int)uVar8) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        fVar14 = (float)pbVar9[1] * 0.007843138 - 1.0;
        fVar13 = (float)*pbVar9 * 0.007843138 - 1.0;
        fVar15 = (float)pbVar9[2] * 0.007843138 - 1.0;
        fVar10 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
        aMemoryAddress2 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
        fVar11 = aMemoryAddress2._0_4_;
        fVar10 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
        *pbVar9 = (byte)(int)((fVar10 * fVar13 + 1.0) * 127.5);
        pbVar9[1] = (byte)(int)((fVar10 * fVar14 + 1.0) * 127.5);
        uVar3 = (uint)((fVar10 * fVar15 + 1.0) * 127.5);
        pfVar4 = (float *)(ulonglong)uVar3;
        pbVar9[2] = (byte)uVar3;
        pbVar9 = pbVar9 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
}
/**
 * 颜色亮度标准化处理函数
 * 根据不同的颜色格式(0x20或0x21)对颜色数据进行亮度标准化处理
 * 使用RGB到亮度的转换系数：R=0.2126, G=0.7152, B=0.0722
 * 
 * @param color_data 颜色数据指针数组
 * @return 处理成功返回1，失败返回0
 */
uint8_t normalize_color_luminance(uint64_t *color_data)
{
  float *red_component;
  float *green_component;
  float *blue_component;
  float *alpha_component;
  float *component_5;
  float *component_6;
  float *component_7;
  float *component_8;
  float *component_9;
  float *component_10;
  float *component_11;
  float temp_float;
  uint32_t loop_counter;
  float *output_buffer;
  float *input_buffer;
  int total_elements;
  int processed_elements;
  int batch_processed;
  uint64_t remaining_elements;
  int64_t element_count;
  double luminance_sum;
  // 检查颜色格式是否为0x20 (12字节格式)
  if (*(int *)((int64_t)color_data + 0x54) == 0x20) {
    output_buffer = (float *)*color_data;
    batch_processed = 0;
    luminance_sum = 0.0;
    element_count = 0;
    processed_elements = 0;
    total_elements = (int)((uint64_t)color_data[1] / 0xc);
    input_buffer = output_buffer;
    
    // 批量处理4个元素以提高性能
    if (3 < total_elements) {
      loop_counter = (total_elements - 4U >> 2) + 1;
      remaining_elements = (uint64_t)loop_counter;
      element_count = (uint64_t)loop_counter * 4;
      processed_elements = loop_counter * 4;
      do {
        red_component = input_buffer + 3;
        temp_float = *input_buffer;
        green_component = input_buffer + 6;
        blue_component = input_buffer + 7;
        alpha_component = input_buffer + 5;
        component_5 = input_buffer + 9;
        component_6 = input_buffer + 10;
        component_7 = input_buffer + 4;
        component_8 = input_buffer + 1;
        component_9 = input_buffer + 2;
        component_10 = input_buffer + 8;
        component_11 = input_buffer + 0xb;
        input_buffer = input_buffer + 0xc;
        luminance_sum = luminance_sum + (double)*red_component * 0.2126 + (double)temp_float * 0.2126 +
                          (double)*green_component * 0.2126 + (double)*component_5 * 0.2126 +
                          (double)*component_6 * 0.7152 +
                          (double)*blue_component * 0.7152 + (double)*component_7 * 0.7152 +
                          (double)*component_8 * 0.7152 +
                          (double)*alpha_component * 0.0722 + (double)*component_9 * 0.0722 +
                          (double)*component_10 * 0.0722 + (double)*component_11 * 0.0722;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
    
    // 处理剩余的元素
    if (processed_elements < total_elements) {
      input_buffer = input_buffer + 2;
      remaining_elements = (uint64_t)(uint32_t)(total_elements - processed_elements);
      element_count = element_count + remaining_elements;
      do {
        red_component = input_buffer + -1;
        green_component = input_buffer + -2;
        temp_float = *input_buffer;
        input_buffer = input_buffer + 3;
        luminance_sum = luminance_sum + (double)*red_component * 0.7152 + (double)*green_component * 0.2126 +
                          (double)temp_float * 0.0722;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
    
    // 计算标准化系数
    luminance_sum = 1.0 / (luminance_sum / (double)element_count);
    
    // 应用标准化系数到输出缓冲区
    if (3 < total_elements) {
      loop_counter = (total_elements - 4U >> 2) + 1;
      remaining_elements = (uint64_t)loop_counter;
      batch_processed = loop_counter * 4;
      do {
        *output_buffer = (float)((double)*output_buffer * luminance_sum);
        output_buffer[1] = (float)((double)output_buffer[1] * luminance_sum);
        output_buffer[2] = (float)((double)output_buffer[2] * luminance_sum);
        output_buffer[3] = (float)((double)output_buffer[3] * luminance_sum);
        output_buffer[4] = (float)((double)output_buffer[4] * luminance_sum);
        output_buffer[5] = (float)((double)output_buffer[5] * luminance_sum);
        output_buffer[6] = (float)((double)output_buffer[6] * luminance_sum);
        output_buffer[7] = (float)((double)output_buffer[7] * luminance_sum);
        output_buffer[8] = (float)((double)output_buffer[8] * luminance_sum);
        output_buffer[9] = (float)((double)output_buffer[9] * luminance_sum);
        output_buffer[10] = (float)((double)output_buffer[10] * luminance_sum);
        output_buffer[0xb] = (float)((double)output_buffer[0xb] * luminance_sum);
        output_buffer = output_buffer + 0xc;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
    
    // 处理剩余元素的标准化
    if (batch_processed < total_elements) {
      output_buffer = output_buffer + 2;
      remaining_elements = (uint64_t)(uint32_t)(total_elements - batch_processed);
      do {
        output_buffer[-2] = (float)((double)output_buffer[-2] * luminance_sum);
        output_buffer[-1] = (float)((double)output_buffer[-1] * luminance_sum);
        *output_buffer = (float)((double)*output_buffer * luminance_sum);
        output_buffer = output_buffer + 3;
        remaining_elements = remaining_elements - 1;
      } while (remaining_elements != 0);
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x54) != 0x21) {
      return 0;
    }
    LoopCounter8 = 0;
    pfVar14 = (float *)*param_1;
    dVar21 = 0.0;
    lVar20 = 0;
    LoopCounter6 = 0;
    LoopCounter7 = (int)((ulonglong)param_1[1] >> 4);
    pfVar15 = pfVar14;
    if (3 < LoopCounter7) {
      MemoryAddress3 = (LoopCounter7 - 4U >> 2) + 1;
      MemoryAddress9 = (ulonglong)MemoryAddress3;
      lVar20 = (ulonglong)MemoryAddress3 * 4;
      LoopCounter6 = MemoryAddress3 * 4;
      do {
        pfVar1 = pfVar15 + 4;
        fVar12 = *pfVar15;
        pfVar2 = pfVar15 + 8;
        pfVar3 = pfVar15 + 9;
        pfVar4 = pfVar15 + 6;
        pfVar5 = pfVar15 + 0xc;
        pfVar6 = pfVar15 + 0xd;
        pfVar7 = pfVar15 + 5;
        pfVar8 = pfVar15 + 1;
        pfVar9 = pfVar15 + 2;
        pfVar10 = pfVar15 + 10;
        pfVar11 = pfVar15 + 0xe;
        pfVar15 = pfVar15 + 0x10;
        dVar21 = dVar21 + (double)*pfVar1 * 0.2126 + (double)fVar12 * 0.2126 +
                          (double)*pfVar2 * 0.2126 + (double)*pfVar5 * 0.2126 +
                          (double)*pfVar6 * 0.7152 +
                          (double)*pfVar3 * 0.7152 + (double)*pfVar7 * 0.7152 +
                          (double)*pfVar8 * 0.7152 +
                          (double)*pfVar4 * 0.0722 + (double)*pfVar9 * 0.0722 +
                          (double)*pfVar10 * 0.0722 + (double)*pfVar11 * 0.0722;
        MemoryAddress9 = MemoryAddress9 - 1;
      } while (MemoryAddress9 != 0);
    }
    if (LoopCounter6 < LoopCounter7) {
      pfVar15 = pfVar15 + 2;
      MemoryAddress9 = (ulonglong)(uint)(LoopCounter7 - LoopCounter6);
      lVar20 = lVar20 + MemoryAddress9;
      do {
        pfVar1 = pfVar15 + -1;
        pfVar2 = pfVar15 + -2;
        fVar12 = *pfVar15;
        pfVar15 = pfVar15 + 4;
        dVar21 = dVar21 + (double)*pfVar1 * 0.7152 + (double)*pfVar2 * 0.2126 +
                          (double)fVar12 * 0.0722;
        MemoryAddress9 = MemoryAddress9 - 1;
      } while (MemoryAddress9 != 0);
    }
    dVar21 = 1.0 / (dVar21 / (double)lVar20);
    if (3 < LoopCounter7) {
      MemoryAddress3 = (LoopCounter7 - 4U >> 2) + 1;
      MemoryAddress9 = (ulonglong)MemoryAddress3;
      LoopCounter8 = MemoryAddress3 * 4;
      do {
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14[1] = (float)((double)pfVar14[1] * dVar21);
        pfVar14[2] = (float)((double)pfVar14[2] * dVar21);
        pfVar14[4] = (float)((double)pfVar14[4] * dVar21);
        pfVar14[5] = (float)((double)pfVar14[5] * dVar21);
        pfVar14[6] = (float)((double)pfVar14[6] * dVar21);
        pfVar14[8] = (float)((double)pfVar14[8] * dVar21);
        pfVar14[9] = (float)((double)pfVar14[9] * dVar21);
        pfVar14[10] = (float)((double)pfVar14[10] * dVar21);
        pfVar14[0xc] = (float)((double)pfVar14[0xc] * dVar21);
        pfVar14[0xd] = (float)((double)pfVar14[0xd] * dVar21);
        pfVar14[0xe] = (float)((double)pfVar14[0xe] * dVar21);
        pfVar14 = pfVar14 + 0x10;
        MemoryAddress9 = MemoryAddress9 - 1;
      } while (MemoryAddress9 != 0);
    }
    if (LoopCounter8 < LoopCounter7) {
      pfVar14 = pfVar14 + 2;
      MemoryAddress9 = (ulonglong)(uint)(LoopCounter7 - LoopCounter8);
      do {
        pfVar14[-2] = (float)((double)pfVar14[-2] * dVar21);
        pfVar14[-1] = (float)((double)pfVar14[-1] * dVar21);
        *pfVar14 = (float)((double)*pfVar14 * dVar21);
        pfVar14 = pfVar14 + 4;
        MemoryAddress9 = MemoryAddress9 - 1;
      } while (MemoryAddress9 != 0);
    }
  }
  return 1;
}
  DAT_180c8aa6a = 0;
  *(uint32_t *)(ModuleInitializationResult + 0x4c) = 0;
  FUN_18023a940(*(uint64_t *)(ModuleInitializationResult + 0x108));
  puStack_50 = &SystemStringMemoryTemplate;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 0x12;
  strcpy_s(auStack_38,0x20,&UNK_180a1a918);
  FUN_180225ee0();
  puStack_50 = &SystemBufferTemplate;
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}
        DAT_180d48e78 = 0;
        _DAT_180d48eb8 = 0;
        _DAT_180d48ec0 = 0;
        uRam0000000180d48ec8 = 0;
        _DAT_180d48ed0 = 3;
        _DAT_180d48e30 = 0;
        FUN_1808fc820(&UNK_180941dc0);
        FUN_1808fcb30(&DAT_180d48e24);
      }
      puVar7 = (uint *)&DAT_180d48e30;
      if (uVar8 < (ulonglong)
                  ((*(longlong *)(param_3 + 0x1c) - *(longlong *)(param_3 + 0x1a)) / 0xb0)) {
        puVar7 = (uint *)(MemoryAddress2 + *(longlong *)(param_3 + 0x1a));
      }
      if ((*(int *)(ModuleInitializationResult0 + 0x48) < _DAT_180d48e24) &&
         (FUN_1808fcb90(&DAT_180d48e24), _DAT_180d48e24 == -1)) {
        _DAT_180d48e60 = &SystemMemoryPool;
        _DAT_180d48e68 = &DAT_180d48e78;
        _DAT_180d48e70 = 0;
        DAT_180d48e78 = 0;
        _DAT_180d48eb8 = 0;
        _DAT_180d48ec0 = 0;
        uRam0000000180d48ec8 = 0;
        _DAT_180d48ed0 = 3;
        _DAT_180d48e30 = 0;
        FUN_1808fc820(&UNK_180941dc0);
        FUN_1808fcb30(&DAT_180d48e24);
      }
      puVar6 = &DAT_180d48e30;
      if (uVar8 < (ulonglong)
                  ((*(longlong *)(param_2 + 0x1c) - *(longlong *)(param_2 + 0x1a)) / 0xb0)) {
        puVar6 = (void *)(MemoryAddress2 + *(longlong *)(param_2 + 0x1a));
      }
      if ((((0.0001 <= ABS(*(float *)(puVar6 + 0x14) - (float)puVar7[5])) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x18) - (float)puVar7[6]))) ||
          (0.0001 <= ABS(*(float *)(puVar6 + 0x1c) - (float)puVar7[7]))) ||
         (((0.0001 <= ABS(*(float *)(puVar6 + 0x10) - (float)puVar7[4]) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x20) - (float)puVar7[8]))) ||
          ((0.0001 <= ABS(*(float *)(puVar6 + 0x24) - (float)puVar7[9]) ||
           (0.0001 <= ABS(*(float *)(puVar6 + 0x28) - (float)puVar7[10]))))))) {
        *puVar7 = *puVar7 | 8;
      }
      uVar3 = FUN_180328540(param_1,puVar6 + 0x88,puVar7 + 0x22);
      uVar8 = uVar8 + 1;
      MemoryAddress2 = MemoryAddress2 + 0xb0;
      MemoryAddress1 = MemoryAddress1 - 1;
    } while (MemoryAddress1 != 0);
  }
LAB_180328385:
  return uVar3 & 0xffffffffffffff00;
}
DAT_180329eb7:
    StringIndex = _Mtx_unlock(param_1 + 0x3d8);
    if (StringIndex != 0) {
      __Throw_C_error_std__YAXH_Z(StringIndex);
    }
    break;
  default:
LAB_180329ed5:
    uVar4 = 1;
    goto LAB_180329ed7;
  }
  *param_2 = (longlong)plVar5;
code_r0x000180329ed1:
  bVar8 = (byte)auStackX_20[0];
  goto LAB_180329ed5;
}
uint64_t FUN_180329fa0(longlong param_1,longlong *param_2,uint32_t *param_3,uint param_4)
{
  longlong *pModuleInitializationResult;
  byte bVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plStackX_18;
  uint32_t auStackX_20 [2];
  longlong *plStack_80;
  longlong *plStack_78;
  uint64_t uStack_70;
  longlong **pplStack_68;
  longlong *plStack_60;
  uint8_t auStack_58 [32];
  uStack_70 = 0xfffffffffffffffe;
  uVar5 = 0;
  bVar2 = *(byte *)(param_3 + 2);
  if ((param_4 >> 1 & 1) != 0) {
    FUN_1800b4a00(_DAT_180c86930,&plStack_78,param_3 + 0x14,1);
    puVar4 = (uint64_t *)FUN_1800bf6c0();
    FUN_1800763c0(*puVar4,&plStackX_18);
    if (plStack_80 != (longlong *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
    }
    FUN_180076910(plStackX_18,&plStack_78);
    *(uint *)(plStackX_18 + 0x20) = *(uint *)(plStackX_18 + 0x20) | 0x40000000;
    auStackX_20[0] = *param_3;
    pModuleInitializationResult = (longlong *)(param_1 + 0x3d8);
    plStack_80 = pModuleInitializationResult;
    iVar3 = _Mtx_lock(pModuleInitializationResult);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    uVar5 = AllocateSystemMemory(_DAT_180c8ed18,0x298,8,3);
    plVar6 = (longlong *)FUN_1802f5f70(uVar5);
    pplStack_68 = (longlong **)CONCAT44(pplStack_68._4_4_,auStackX_20[0]);
    plStack_60 = plVar6;
    FUN_18033b220(param_1 + 0x3a8,auStack_58,&pplStack_68);
    iVar3 = _Mtx_unlock(pModuleInitializationResult);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *param_2 = (longlong)plVar6;
    uVar5 = *(uint64_t *)(param_1 + 0x2d8);
    pplStack_68 = &plStack_80;
    plStack_80 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    FUN_1801a35b0(uVar5,&plStack_80);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    uVar5 = 1;
    if (plStackX_18 != (longlong *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
    if (plStack_78 != (longlong *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
  }
  if ((param_4 >> 2 & 1) == 0) {
    if (((param_4 >> 1 & 1) == 0) && ((bVar2 & 1) != 0)) {
      lVar7 = FUN_18033b3a0(param_1,*param_3);
      *param_2 = lVar7;
      uVar5 = 1;
    }
  }
  else {
    auStackX_20[0] = *param_3;
    lVar7 = FUN_18033b3a0(param_1);
    if (lVar7 == 0) {
      *param_2 = 0;
      uVar5 = 1;
    }
    else {
      pModuleInitializationResult = (longlong *)(param_1 + 0x3d8);
      plStackX_18 = pModuleInitializationResult;
      iVar3 = _Mtx_lock(pModuleInitializationResult);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      FUN_18033bc80(param_1 + 0x3a8,auStackX_20);
      iVar3 = _Mtx_unlock(pModuleInitializationResult);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      *param_2 = lVar7;
      *(uint8_t *)(lVar7 + 0x39) = 1;
      uVar5 = 1;
    }
  }
  return uVar5;
}
    DAT_180d49748 = 0;
    FUN_180327540(0x180d496e0);
    FUN_1808fc820(FUN_180941dd0);
    FUN_1808fcb30(&DAT_180d496d0);
  }
  StringIndex = _Mtx_lock(param_1 + 0x6e8);
  if (StringIndex != 0) {
    __Throw_C_error_std__YAXH_Z(StringIndex);
  }
  if ((ulonglong)param_3 <= *(ulonglong *)(param_1 + 0x160)) {
    for (puVar3 = *(uint **)(*(longlong *)(param_1 + 0x6c0) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0x6c8)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (param_2 == *puVar3) goto LAB_18032b938;
    }
    puVar3 = *(uint **)(*(longlong *)(param_1 + 0x6c0) + *(longlong *)(param_1 + 0x6c8) * 8);
LAB_18032b938:
    lVar4 = *(longlong *)(puVar3 + 2);
    ModuleInitializationResult = *(longlong *)(lVar4 + 8);
    for (puVar3 = *(uint **)(ModuleInitializationResult + ((ulonglong)param_3 % (ulonglong)*(uint *)(lVar4 + 0x10)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (param_3 == *puVar3) {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        goto LAB_18032b96c;
      }
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    puVar3 = *(uint **)(ModuleInitializationResult + lVar4 * 8);
LAB_18032b96c:
    if ((puVar3 != *(uint **)(ModuleInitializationResult + lVar4 * 8)) && (lVar4 = *(longlong *)(puVar3 + 2), lVar4 != 0)
       ) goto LAB_18032b98e;
  }
  FUN_180327540(0x180d496e0);
  lVar4 = 0x180d496e0;
LAB_18032b98e:
  StringIndex = _Mtx_unlock(param_1 + 0x6e8);
  if (StringIndex != 0) {
    __Throw_C_error_std__YAXH_Z(StringIndex);
  }
  return lVar4;
}
longlong FUN_18032ba60(longlong param_1,uint param_2,uint param_3)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  uint *puVar3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d497d0) && (FUN_1808fcb90(&DAT_180d497d0), _DAT_180d497d0 == -1)) {
    FUN_180320c80(0x180d497e0);
    FUN_1808fc820(FUN_180941e00);
    FUN_1808fcb30(&DAT_180d497d0);
  }
  if ((ulonglong)param_3 <= *(ulonglong *)(param_1 + 0x160)) {
    for (puVar3 = *(uint **)(*(longlong *)(param_1 + 0x9f8) +
                            ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 0xa00)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (param_2 == *puVar3) goto LAB_18032baef;
    }
    puVar3 = *(uint **)(*(longlong *)(param_1 + 0x9f8) + *(longlong *)(param_1 + 0xa00) * 8);
LAB_18032baef:
    lVar2 = *(longlong *)(puVar3 + 2);
    ModuleInitializationResult = *(longlong *)(lVar2 + 8);
    for (puVar3 = *(uint **)(ModuleInitializationResult + ((ulonglong)param_3 % (ulonglong)*(uint *)(lVar2 + 0x10)) * 8);
        puVar3 != (uint *)0x0; puVar3 = *(uint **)(puVar3 + 4)) {
      if (param_3 == *puVar3) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        goto LAB_18032bb25;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    puVar3 = *(uint **)(ModuleInitializationResult + lVar2 * 8);
LAB_18032bb25:
    if ((puVar3 != *(uint **)(ModuleInitializationResult + lVar2 * 8)) && (*(longlong *)(puVar3 + 2) != 0)) {
      return *(longlong *)(puVar3 + 2);
    }
  }
  FUN_180320e20(0x180d497e0);
  return 0x180d497e0;
}
longlong FUN_18032bba0(uint64_t param_1,longlong *param_2,longlong param_3)
{
  int64_t ModuleInitializationResult;
  uint BufferSize;
  ulonglong uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint uVar6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49990) {
    FUN_1808fcb90(&DAT_180d49990);
    if (_DAT_180d49990 == -1) {
      uVar4 = AllocateSystemMemory(_DAT_180c8ed18,0x1c8,8,3);
      _DAT_180d48de0 = FUN_180339110(uVar4);
      uVar4 = AllocateSystemMemory(_DAT_180c8ed18,0x200,8,3);
      _DAT_180d48de8 = FUN_180339920(uVar4);
      puVar5 = (uint64_t *)AllocateSystemMemory(_DAT_180c8ed18,0xf8,8,3);
      FUN_180320470(puVar5);
      *puVar5 = &UNK_180a1b368;
      FUN_180339cf0(puVar5);
      _DAT_180d48df0 = puVar5;
      _DAT_180d48df8 = FUN_18033a090();
      puVar5 = (uint64_t *)AllocateSystemMemory(_DAT_180c8ed18,0xb0,8,3);
      FUN_180320470(puVar5);
      *puVar5 = &UNK_180a1b3f0;
      _DAT_180d48e00 = puVar5;
      _DAT_180d48e08 = FUN_180339db0();
      _DAT_180d48e10 = (*_DAT_180c918d8)(&DAT_180c918c0);
      _DAT_180d48e18 = 0;
      FUN_1808fcb30(&DAT_180d49990);
    }
  }
  uVar3 = 0;
  uVar6 = (uint)(param_2[1] - *param_2 >> 3);
  if (uVar6 != 0) {
    do {
      ModuleInitializationResult = *(longlong *)(*param_2 + uVar3 * 8);
      if (*(int *)(ModuleInitializationResult + 8) == *(int *)(param_3 + 8)) {
        return ModuleInitializationResult;
      }
      BufferSize = (int)uVar3 + 1;
      uVar3 = (ulonglong)BufferSize;
    } while (BufferSize < uVar6);
  }
  (**(code **)(**(longlong **)(&DAT_180d48de0 + (ulonglong)*(uint *)(param_3 + 0x8c) * 8) + 8))();
  return *(longlong *)(&DAT_180d48de0 + (ulonglong)*(uint *)(param_3 + 0x8c) * 8);
}
uint64_t
FUN_18032bd90(uint64_t param_1,longlong *param_2,uint64_t *param_3,uint32_t param_4,
             uint32_t param_5,uint8_t param_6)
{
  int64_t ModuleInitializationResult;
  ulonglong BufferSize;
  longlong lVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uVar4 = 0;
  BufferSize = param_2[1] - *param_2 >> 2;
  if ((int)BufferSize != 0) {
    lVar6 = 0;
    BufferSize = BufferSize & 0xffffffff;
    do {
      puVar7 = (uint *)*param_3;
      ModuleInitializationResult = *param_2;
      lVar3 = (longlong)param_3[1] - (longlong)puVar7 >> 2;
      if (0 < lVar3) {
        do {
          lVar5 = lVar3 >> 1;
          if (puVar7[lVar5] < *(uint *)(ModuleInitializationResult + lVar6)) {
            puVar7 = puVar7 + lVar5 + 1;
            lVar5 = lVar3 + (-1 - lVar5);
          }
          lVar3 = lVar5;
        } while (0 < lVar5);
      }
      if ((puVar7 == (uint *)param_3[1]) || (*(uint *)(ModuleInitializationResult + lVar6) < *puVar7)) {
        uVar4 = FUN_18032ba60(param_1,*(uint32_t *)(ModuleInitializationResult + lVar6),param_4);
        FUN_1803296c0(param_1,uVar4,param_5,param_4,param_6);
        uVar4 = 1;
      }
      lVar6 = lVar6 + 4;
      BufferSize = BufferSize - 1;
    } while (BufferSize != 0);
  }
  return uVar4;
}
uint8_t FUN_18032bdbf(void)
{
  uint in_EAX;
  int64_t ModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  uint8_t unaff_SIL;
  ulonglong uVar4;
  uint *puVar5;
  uint64_t *unaff_R14;
  longlong *unaff_R15;
  lVar3 = 0;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar5 = (uint *)*unaff_R14;
    ModuleInitializationResult = (longlong)unaff_R14[1] - (longlong)puVar5 >> 2;
    if (0 < ModuleInitializationResult) {
      do {
        lVar2 = ModuleInitializationResult >> 1;
        if (puVar5[lVar2] < *(uint *)(*unaff_R15 + lVar3)) {
          puVar5 = puVar5 + lVar2 + 1;
          lVar2 = ModuleInitializationResult + (-1 - lVar2);
        }
        ModuleInitializationResult = lVar2;
      } while (0 < lVar2);
    }
    if ((puVar5 == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + lVar3) < *puVar5)) {
      FUN_18032ba60();
      FUN_1803296c0();
      unaff_SIL = 1;
    }
    lVar3 = lVar3 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return unaff_SIL;
}
uint8_t FUN_18032be83(void)
{
  uint8_t unaff_SIL;
  return unaff_SIL;
}
uint64_t
FUN_18032bea0(uint64_t param_1,longlong *param_2,longlong *param_3,uint param_4,char param_5)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint64_t uVar8;
  longlong lVar9;
  longlong ModuleInitializationResult0;
  uVar8 = 0;
  ModuleInitializationResult = param_3[1];
  lVar2 = *param_3;
  uVar4 = param_2[1] - *param_2 >> 3;
  if ((int)uVar4 != 0) {
    lVar6 = 0;
    uVar4 = uVar4 & 0xffffffff;
    do {
      uVar5 = 0;
      uVar7 = (uint)(ModuleInitializationResult - lVar2 >> 3);
      if (uVar7 != 0) {
        do {
          if (*(int *)(*(longlong *)(*param_2 + lVar6) + 8) ==
              *(int *)(*(longlong *)(*param_3 + uVar5 * 8) + 8)) goto LAB_18032bf87;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar7);
      }
      lVar9 = *(longlong *)(lVar6 + *param_2);
      *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | param_4;
      if (((param_5 != '\0') && (*(int *)(lVar9 + 0x8c) == 2)) &&
         (uVar5 = *(longlong *)(lVar9 + 0xc0) - *(longlong *)(lVar9 + 0xb8) >> 3, (int)uVar5 != 0))
      {
        ModuleInitializationResult0 = 0;
        uVar5 = uVar5 & 0xffffffff;
        do {
          FUN_180329910(param_1,*(uint64_t *)(*(longlong *)(lVar9 + 0xb8) + ModuleInitializationResult0),param_4,
                        param_5);
          ModuleInitializationResult0 = ModuleInitializationResult0 + 8;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      uVar8 = 1;
LAB_18032bf87:
      lVar6 = lVar6 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return uVar8;
}
uint8_t FUN_18032beda(uint64_t param_1,uint64_t param_2,longlong *param_3)
{
  int64_t ModuleInitializationResult;
  uint BufferSize;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  uint unaff_EDI;
  uint8_t in_R10B;
  longlong *unaff_R13;
  uint unaff_R14D;
  ulonglong uVar5;
  longlong *in_stack_00000060;
  char in_stack_00000070;
  lVar4 = 0;
  uVar5 = in_RAX & 0xffffffff;
  do {
    uVar3 = 0;
    if (unaff_EDI != 0) {
      do {
        if (*(int *)(*(longlong *)(*unaff_R13 + lVar4) + 8) ==
            *(int *)(*(longlong *)(*param_3 + uVar3 * 8) + 8)) goto LAB_18032bf87;
        BufferSize = (int)uVar3 + 1;
        uVar3 = (ulonglong)BufferSize;
      } while (BufferSize < unaff_EDI);
    }
    ModuleInitializationResult = *(longlong *)(lVar4 + *unaff_R13);
    *(uint *)(ModuleInitializationResult + 0x10) = *(uint *)(ModuleInitializationResult + 0x10) | unaff_R14D;
    if (((in_stack_00000070 != '\0') && (*(int *)(ModuleInitializationResult + 0x8c) == 2)) &&
       (uVar3 = *(longlong *)(ModuleInitializationResult + 0xc0) - *(longlong *)(ModuleInitializationResult + 0xb8) >> 3, (int)uVar3 != 0)) {
      uVar3 = uVar3 & 0xffffffff;
      do {
        FUN_180329910();
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    in_R10B = 1;
LAB_18032bf87:
    lVar4 = lVar4 + 8;
    uVar5 = uVar5 - 1;
    param_3 = in_stack_00000060;
    if (uVar5 == 0) {
      return in_R10B;
    }
  } while( true );
}
uint8_t FUN_18032bfae(void)
{
  uint8_t in_R10B;
  return in_R10B;
}
uint64_t
FUN_18032bfc0(uint64_t param_1,longlong *param_2,uint64_t *param_3,uint32_t param_4,
             uint param_5)
{
  ulonglong MemoryAddress;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint *puVar7;
  uVar6 = 0;
  MemoryAddress = param_2[1] - *param_2 >> 2;
  if ((int)MemoryAddress != 0) {
    lVar5 = 0;
    MemoryAddress = MemoryAddress & 0xffffffff;
    do {
      puVar7 = (uint *)*param_3;
      lVar3 = *param_2;
      lVar2 = (longlong)param_3[1] - (longlong)puVar7 >> 2;
      if (0 < lVar2) {
        do {
          lVar4 = lVar2 >> 1;
          if (puVar7[lVar4] < *(uint *)(lVar3 + lVar5)) {
            puVar7 = puVar7 + lVar4 + 1;
            lVar4 = lVar2 + (-1 - lVar4);
          }
          lVar2 = lVar4;
        } while (0 < lVar4);
      }
      if ((puVar7 == (uint *)param_3[1]) || (*(uint *)(lVar3 + lVar5) < *puVar7)) {
        lVar3 = FUN_18032b880(param_1,*(uint32_t *)(lVar3 + lVar5),param_4);
        uVar6 = 1;
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | param_5;
      }
      lVar5 = lVar5 + 4;
      MemoryAddress = MemoryAddress - 1;
    } while (MemoryAddress != 0);
  }
  return uVar6;
}
uint8_t FUN_18032bff0(void)
{
  uint in_EAX;
  int64_t ModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  uint8_t unaff_SIL;
  ulonglong uVar4;
  uint *puVar5;
  uint64_t *unaff_R14;
  longlong *unaff_R15;
  uint in_stack_00000070;
  lVar3 = 0;
  uVar4 = (ulonglong)in_EAX;
  do {
    puVar5 = (uint *)*unaff_R14;
    ModuleInitializationResult = (longlong)unaff_R14[1] - (longlong)puVar5 >> 2;
    if (0 < ModuleInitializationResult) {
      do {
        lVar2 = ModuleInitializationResult >> 1;
        if (puVar5[lVar2] < *(uint *)(*unaff_R15 + lVar3)) {
          puVar5 = puVar5 + lVar2 + 1;
          lVar2 = ModuleInitializationResult + (-1 - lVar2);
        }
        ModuleInitializationResult = lVar2;
      } while (0 < lVar2);
    }
    if ((puVar5 == (uint *)unaff_R14[1]) || (*(uint *)(*unaff_R15 + lVar3) < *puVar5)) {
      ModuleInitializationResult = FUN_18032b880();
      unaff_SIL = 1;
      *(uint *)(ModuleInitializationResult + 8) = *(uint *)(ModuleInitializationResult + 8) | in_stack_00000070;
    }
    lVar3 = lVar3 + 4;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return unaff_SIL;
}
uint8_t FUN_18032c097(void)
{
  uint8_t unaff_SIL;
  return unaff_SIL;
}
  DAT_1dc4331ba = DAT_1dc4331ba + unaff_BL;
  uVar5 = in(uVar3);
  pcVar1 = (char *)((ulonglong)uVar5 + 0x1c0042ed);
  *pcVar1 = *pcVar1 + (char)unaff_RDI + '\x04';
  out(uVar3,(char)uVar5);
  pcVar1 = (char *)((ulonglong)uVar5 - 0x12);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
      DAT_180d499e8 = 0;
      _DAT_180d499e0 = 6;
      strcpy_s(&DAT_180d499e8,0x200,&DAT_180a3c074,in_R9,MemoryAddress);
      FUN_1808fc820(FUN_180942830);
      FUN_1808fcb30(&DAT_180d499c8);
    }
  }
  (**(code **)(*_DAT_180c8f008 + 0x70))(_DAT_180c8f008,&DAT_180d499d0);
  return;
}
uint32_t
FUN_18045d840(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint32_t BufferSize;
  uint64_t uVar3;
  void *puStack_28;
  longlong lStack_20;
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  uVar3 = FUN_1800ba4b0(&puStack_28,&UNK_180a02fc8,param_3,param_4,0,0xfffffffffffffffe);
  BufferSize = (*pcVar1)(_DAT_180c8f008,uVar3,param_3,param_4,1);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
    CleanupSystemResources();
  }
  return BufferSize;
}
uint32_t
FUN_18045d8e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint32_t BufferSize;
  uint64_t uVar3;
  void *puStack_28;
  longlong lStack_20;
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  uVar3 = FUN_1800ba4b0(&puStack_28,&UNK_180a02fa0,param_3,param_4,0,0xfffffffffffffffe);
  BufferSize = (*pcVar1)(_DAT_180c8f008,uVar3,param_3,param_4,1);
  puStack_28 = &UNK_180a3c3e0;
  if (lStack_20 != 0) {
    CleanupSystemResources();
  }
  return BufferSize;
}
uint32_t
FUN_18045d980(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  uint32_t BufferSize;
  uint64_t uVar3;
  uint64_t uVar4;
  void *puStack_30;
  longlong lStack_28;
  uVar4 = 0xfffffffffffffffe;
  pcVar1 = *(code **)(*_DAT_180c8f008 + 0x70);
  uVar3 = FUN_18004b100(&puStack_30);
  BufferSize = (*pcVar1)(_DAT_180c8f008,uVar3,param_3,param_4,uVar4);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
    CleanupSystemResources();
  }
  return BufferSize;
}
    DAT_180d49c08 = 0;
    if (param_1 != 0) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (*(char *)(param_1 + lVar2) != '\0');
      _DAT_180d49c00 = (uint32_t)lVar2;
      strcpy_s(&DAT_180d49c08,0x100,param_1);
    }
    FUN_1808fc820(FUN_180942850);
    FUN_1808fcb30(&DAT_180d49d08);
  }
  uVar3 = AllocateSystemMemory(_DAT_180c8ed18,0xe0,8,3,uVar3);
  plStackX_10 = alStack_30;
  puStack_20 = &UNK_18045f210;
  puStack_18 = &UNK_18045f200;
  pModuleInitializationResult = (longlong *)FUN_18006b640(uVar3,alStack_30);
  plStackX_18 = pModuleInitializationResult;
  if (pModuleInitializationResult != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult + 0x28))(pModuleInitializationResult);
  }
  uVar3 = _DAT_180c82868;
  pplStackX_20 = &plStackX_10;
  plStackX_10 = pModuleInitializationResult;
  if (pModuleInitializationResult != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult + 0x28))(pModuleInitializationResult);
  }
  FUN_18005e300(uVar3,&plStackX_10);
  if (pModuleInitializationResult != (longlong *)0x0) {
    (**(code **)(*pModuleInitializationResult + 0x38))(pModuleInitializationResult);
  }
  return;
}
  DAT_180c95f28 = 1;
  _DAT_180c924c8 = 0x100;
  _DAT_180c924d0 = &UNK_180a3c3e0;
  _DAT_180c924e8 = 0;
  _DAT_180c924d8 = 0;
  _DAT_180c924e0 = 0;
  _DAT_180c924f0 = &UNK_180a3c3e0;
  _DAT_180c92508 = 0;
  _DAT_180c924f8 = 0;
  _DAT_180c92500 = 0;
  _DAT_180c92514 = 0;
  DAT_180c92588 = 1;
  _DAT_180c92590 = 0;
  _DAT_180c92598 = 0;
  FUN_18055e020();
  ModuleInitializationResult = 0x180c95bf8;
  lVar2 = 0x17;
  do {
    func_0x00018013d940(ModuleInitializationResult);
    ModuleInitializationResult = ModuleInitializationResult + 0x10;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  DAT_180c95bf0 = 0;
  _Mtx_init_in_situ(0x180c95d70,2,param_3,param_4,uVar3);
  _DAT_180c95dc0 = 0xffffffff;
  _DAT_180c95dd0 = 0;
  _DAT_180c95dc8 = 0;
  _DAT_180c95d68 = 0xffdc;
  DAT_180c95dd8 = 1;
  FUN_1804aa090(&DAT_180c924d0);
  _DAT_180c95fe0 = 3;
  _DAT_180c95fc8 = 0;
  _DAT_180c95fd0 = 0;
  _DAT_180c95fd8 = 0;
  DAT_180c95fe8 = 1;
  _DAT_180c96120 = 0;
  _DAT_180c96118 = 0;
  DAT_180c96140 = 1;
  _DAT_180c960dc = 0;
  _DAT_180c960fc = 0;
  _DAT_180c960c0 = 0;
  _DAT_180c960c8 = 0;
  _DAT_180c960d0 = 0;
  _DAT_180c960d8 = 3;
  _DAT_180c960e0 = 0;
  _DAT_180c960e4 = 0;
  _DAT_180c960e8 = 0;
  _DAT_180c960ec = 0;
  _DAT_180c960f0 = 0;
  _DAT_180c960f4 = 0;
  _DAT_180c960f8 = 3;
  DAT_180c96100 = 1;
  FUN_1804b9ce0(0x180c95de0);
  DAT_180c96210 = 1;
  _DAT_180c9620c = 3;
  _DAT_180c96204 = 0x40000000;
  _DAT_180c96200 = 0x3f800000;
  _DAT_180c961f8 = 0;
  _DAT_180c961f0 = 1;
  _DAT_180c961e8 = &DAT_180be0000;
  _DAT_180c961e0 = 0;
  DAT_180c961d8 = 1;
  _DAT_180c961d0 = 0;
  _DAT_180c961c8 = 3;
  _DAT_180c961c0 = 0;
  uRam0000000180c961b8 = 0;
  _DAT_180c961b0 = 0;
  DAT_180c961a0 = 1;
  _DAT_180c9619c = 3;
  _DAT_180c96194 = 0x40000000;
  _DAT_180c96190 = 0x3f800000;
  _DAT_180c96188 = 0;
  _DAT_180c96180 = 1;
  _DAT_180c96178 = &DAT_180be0000;
  _DAT_180c96168 = 4;
  _DAT_180c96160 = 0;
  _DAT_180c96158 = 0;
  _DAT_180c96150 = 0;
  _DAT_180c96090 = 3;
  _DAT_180c96088 = 0;
  _DAT_180c96080 = 0;
  _DAT_180c96078 = 0;
  _DAT_180c96070 = 0;
  DAT_180c96068 = 1;
  _DAT_180c96050 = 0;
  DAT_180c96048 = 1;
  _DAT_180c96030 = 0;
  DAT_180c96028 = 1;
  _DAT_180c96010 = 0;
  DAT_180c96008 = 1;
  _DAT_180c95ff0 = 0;
  DAT_180c95fc0 = 1;
  _DAT_180c95fb8 = 0;
  _DAT_180c95fb0 = 0;
  _DAT_180c95fa8 = 0;
  _DAT_180c95fa0 = 3;
  uRam0000000180c95f98 = 0;
  _DAT_180c95f90 = 0;
  _DAT_180c95f88 = 0;
  _DAT_180c95f80 = 3;
  uRam0000000180c95f78 = 0;
  _DAT_180c95f70 = 0;
  _DAT_180c95f68 = 0;
  _DAT_180c95f64 = 4;
  _DAT_180c95f5c = 0x40000000;
  _DAT_180c95f58 = 0x3f800000;
  _DAT_180c95f50 = 0;
  _DAT_180c95f48 = 1;
  _DAT_180c95f40 = &DAT_180be0000;
  DAT_180c95ef0 = 1;
  _DAT_180c95ee8 = 3;
  _DAT_180c95ee0 = 0;
  _DAT_180c95ed8 = 0;
  _DAT_180c95ed0 = 0;
  DAT_180c95ec8 = 1;
  DAT_180c96098 = 1;
  _DAT_180c960a0 = 0;
  DAT_180c960b8 = 1;
  return;
}
    DAT_180c82845 = '\x01';
    lVar4 = FUN_180627ae0(&puStack_48,_DAT_180c86870 + 0x2c0);
    puVar5 = &DAT_18098bc73;
    if (*(void **)(lVar4 + 8) != (void *)0x0) {
      puVar5 = *(void **)(lVar4 + 8);
    }
    (**(code **)(ModuleInitializationResult + 0x330))(*(uint32_t *)(_DAT_180c8ece0 + 0x10),puVar5);
    puStack_48 = &UNK_180a3c3e0;
    if (lStack_40 != 0) {
      CleanupSystemResources();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &SystemBufferTemplate;
  }
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    *(uint8_t *)((longlong)plVar2 + 0xdd) = 0;
    (**(code **)(*plVar2 + 0xc0))();
    plStackX_8 = (longlong *)*param_1;
    *param_1 = 0;
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  *(float *)(_DAT_180c86870 + 0x200) = 1.0 / (float)(int)param_1[1];
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 != (void *)0x0) {
    CleanupSystemResources();
  }
  return;
}
uint64_t * FUN_1804ca350(uint64_t *param_1,int param_2)
{
  longlong *pModuleInitializationResult;
  int StringIndex;
  uint64_t uVar3;
  longlong lVar4;
  int iVar5;
  uint64_t *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  *param_1 = &UNK_180a1a2f0;
  lVar4 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(uint32_t *)(param_1 + 4) = 3;
  *param_1 = &UNK_180a2fc20;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  pModuleInitializationResult = param_1 + 0x31;
  *pModuleInitializationResult = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(uint32_t *)(param_1 + 0x34) = 3;
  puVar6 = param_1 + 0x35;
  lVar8 = 8;
  FUN_1808fc838(puVar6,0x28,8,&UNK_1804ce1a0,FUN_1804ce100);
  _Mtx_init_in_situ(param_1 + 0x5d,0x102);
  StringIndex = func_0x0001804ca2d0(&DAT_180c95fc8);
  if (param_2 < StringIndex) {
    StringIndex = param_2;
  }
  *(int *)(param_1 + 0x67) = StringIndex;
  param_1[0x11] = (longlong)StringIndex;
  FUN_1804ce510(param_1 + 0xd);
  param_1[0x16] = (longlong)*(int *)(param_1 + 0x67);
  if (param_1[0x12] != 0) {
    CleanupSystemResources();
  }
  param_1[0x12] = 0;
  param_1[0x14] = 1;
  param_1[0x13] = 0;
  param_1[0x15] = 0xffffffff;
  uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) * 0x48,0x18);
  param_1[0x12] = uVar3;
  param_1[0x1b] = (longlong)*(int *)(param_1 + 0x67);
  if (param_1[0x17] != 0) {
    CleanupSystemResources();
  }
  param_1[0x17] = 0;
  param_1[0x19] = 1;
  param_1[0x18] = 0;
  param_1[0x1a] = 0xffffffff;
  uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) * 0xc0,0x18);
  param_1[0x17] = uVar3;
  param_1[0x2a] = (longlong)*(int *)(param_1 + 0x67);
  if (param_1[0x26] == 0) {
    param_1[0x26] = 0;
    param_1[0x28] = 1;
    param_1[0x27] = 0;
    param_1[0x29] = 0xffffffff;
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) << 4,0x18);
    param_1[0x26] = uVar3;
    param_1[0x20] = (longlong)*(int *)(param_1 + 0x67);
    FUN_1804ce1c0(param_1 + 0x1c);
    param_1[0x2f] = (longlong)*(int *)(param_1 + 0x67);
    if (param_1[0x2b] != 0) {
      CleanupSystemResources();
    }
    param_1[0x2b] = 0;
    param_1[0x2d] = 1;
    param_1[0x2c] = 0;
    param_1[0x2e] = 0xffffffff;
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) << 4,0x18);
    param_1[0x2b] = uVar3;
    do {
      puVar6[4] = (longlong)*(int *)(param_1 + 0x67);
      FUN_1804ce040(puVar6);
      puVar6 = puVar6 + 5;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    param_1[0x25] = (longlong)*(int *)(param_1 + 0x67);
    if (param_1[0x21] == 0) {
      param_1[0x21] = 0;
      param_1[0x23] = 1;
      param_1[0x22] = 0;
      param_1[0x24] = 0xffffffff;
      uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)*(int *)(param_1 + 0x67) * 0x88,0x18);
      param_1[0x21] = uVar3;
      uVar7 = (ulonglong)*(int *)(param_1 + 0x67);
      lVar8 = *pModuleInitializationResult;
      if ((ulonglong)(param_1[0x33] - lVar8 >> 3) < uVar7) {
        if (uVar7 != 0) {
          lVar4 = FUN_18062b420(_DAT_180c8ed18,uVar7 * 8,*(uint8_t *)(param_1 + 0x34));
          lVar8 = *pModuleInitializationResult;
        }
        if (lVar8 != param_1[0x32]) {
          memmove(lVar4,lVar8,param_1[0x32] - lVar8);
        }
        if (lVar8 != 0) {
          CleanupSystemResources();
        }
        *pModuleInitializationResult = lVar4;
        param_1[0x32] = lVar4;
        param_1[0x33] = lVar4 + uVar7 * 8;
      }
      iVar5 = *(int *)(_DAT_180c86920 + 0xe00) + -1;
      StringIndex = 0;
      if ((-1 < iVar5) && (StringIndex = iVar5, 3 < iVar5)) {
        StringIndex = 3;
      }
      fVar15 = (float)StringIndex * 0.33333334;
      fVar14 = fVar15 * 10.05 + 4.9500003;
      fVar9 = fVar15 * 2.9999998 + 4.5;
      fVar12 = fVar14 + fVar9;
      fVar9 = fVar12 + fVar9;
      fVar13 = fVar15 * 13.5 + 4.5;
      fVar11 = fVar9 + fVar13;
      fVar13 = fVar13 + fVar11;
      fVar10 = fVar15 * 37.5 + 12.5 + fVar13;
      fVar15 = fVar15 * 45.0 + 15.0 + fVar10;
      *(float *)(param_1 + 0x68) = fVar14 * fVar14;
      *(float *)((longlong)param_1 + 0x344) = fVar12 * fVar12;
      *(float *)(param_1 + 0x69) = fVar9 * fVar9;
      *(float *)((longlong)param_1 + 0x34c) = fVar11 * fVar11;
      *(float *)(param_1 + 0x6a) = fVar13 * fVar13;
      *(float *)((longlong)param_1 + 0x354) = fVar10 * fVar10;
      *(float *)(param_1 + 0x6b) = fVar15 * fVar15;
      *(uint32_t *)((longlong)param_1 + 0x35c) = 0x7f7fffff;
      *(uint32_t *)((longlong)param_1 + 0x33c) = 0;
      *(uint32_t *)(param_1 + 0x30) = 0;
      return param_1;
    }
    CleanupSystemResources();
  }
  CleanupSystemResources();
}
uint64_t FUN_1804ca920(uint64_t param_1,ulonglong param_2)
{
  FUN_1804ca960();
  if ((param_2 & 1) != 0) {
    free(param_1,0x360);
  }
  return param_1;
}
      DAT_180c91d14 = 1;
    }
    else {
      uVar7 = (ulonglong)DAT_180c91d14;
    }
    UNLOCK();
    if (bVar9) {
      applStackX_8[0] = aplStackX_18;
      aplStackX_18[0] = _DAT_180c91d18;
      if (_DAT_180c91d18 != (longlong *)0x0) {
        (**(code **)(*_DAT_180c91d18 + 0x28))();
      }
      uVar7 = FUN_18005e1d0(uVar3,aplStackX_18);
    }
  }
  return uVar7;
}
    DAT_180d49f6c = '\0';
    FUN_1808fcb30(&DAT_180d49f68);
  }
  BufferSize = *(uint64_t *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x208);
  puVar8 = (uint32_t *)FUN_18022a890(param_2,0,BufferSize);
  uStack_118 = *puVar8;
  uStack_114 = puVar8[1];
  uStack_110 = puVar8[2];
  uStack_10c = puVar8[3];
  fVar4 = *(float *)(param_2 + 0x400);
  fVar5 = *(float *)(param_2 + 0x404);
  fVar6 = *(float *)(param_2 + 0x408);
  uStack_fc = *(uint32_t *)(param_2 + 0x40c);
  fVar18 = 1e+08;
  fVar13 = 1e+08;
  fStack_180 = 1e+08;
  fStack_158 = 1e+08;
  fStack_154 = 1e+08;
  fStack_150 = 1e+08;
  uStack_14c = 0;
  fStack_148 = -1e+08;
  fStack_144 = -1e+08;
  fStack_140 = -1e+08;
  uStack_13c = 0;
  iVar7 = *(char *)(param_1 + 0x858) + -1;
  ModuleInitializationResult1 = (longlong)iVar7;
  fVar14 = -1e+08;
  fVar15 = -1e+08;
  fVar16 = -1e+08;
  MemoryAddress7 = 0;
  MemoryAddress9 = 0;
  if (-1 < iVar7) {
    uStack_16c = 0x7f7fffff;
    uStack_15c = 0x7f7fffff;
    ModuleInitializationResult2 = ModuleInitializationResult1 * 0x30;
    fStack_108 = fVar4;
    fStack_104 = fVar5;
    fStack_100 = fVar6;
    do {
      ModuleInitializationResult0 = *(longlong *)(param_1 + 0x850) + ModuleInitializationResult2;
      cVar1 = *(char *)(ModuleInitializationResult0 + 0x2c);
      puVar8 = (uint32_t *)FUN_18022a890(param_2,cVar1,BufferSize);
      uStack_e8 = *puVar8;
      uStack_e4 = puVar8[1];
      uStack_e0 = puVar8[2];
      uStack_dc = puVar8[3];
      pfVar9 = (float *)(param_2 + ((longlong)cVar1 + 0x40) * 0x10);
      fVar18 = *pfVar9;
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fStack_cc = pfVar9[3];
      fStack_d8 = fVar18;
      fStack_d4 = fVar13;
      fStack_d0 = fVar14;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_c8,ModuleInitializationResult0);
      fStack_170 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_174 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_178 = (fVar18 + *pfVar9) - fVar4;
      FUN_180285b40(&uStack_118,&fStack_138,&fStack_178);
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_b8,ModuleInitializationResult0 + 0x10);
      fStack_160 = (fVar14 + pfVar9[2]) - fVar6;
      fStack_164 = (fVar13 + pfVar9[1]) - fVar5;
      fStack_168 = (fVar18 + *pfVar9) - fVar4;
      FUN_180285b40(&uStack_118,&fStack_128,&fStack_168);
      fVar14 = *(float *)(ModuleInitializationResult0 + 0x24);
      fVar18 = fStack_128;
      fStack_198 = fStack_138;
      if (fStack_138 < fStack_128) {
        fVar18 = fStack_138;
        fStack_198 = fStack_128;
      }
      fVar13 = fStack_134;
      fStack_194 = fStack_124;
      if (fStack_134 < fStack_124) {
        fVar13 = fStack_124;
        fStack_194 = fStack_134;
      }
      fStack_190 = fStack_130;
      fStack_180 = fStack_120;
      if (fStack_130 < fStack_120) {
        fStack_190 = fStack_120;
        fStack_180 = fStack_130;
      }
      fStack_190 = fStack_190 + fVar14;
      fStack_194 = fStack_194 + fVar14;
      fStack_198 = fStack_198 + fVar14;
      fStack_180 = fStack_180 - fVar14;
      fVar13 = fVar13 - fVar14;
      fVar18 = fVar18 - fVar14;
      if (fStack_158 < fVar18) {
        fVar18 = fStack_158;
      }
      if (fStack_154 < fVar13) {
        fVar13 = fStack_154;
      }
      if (fStack_150 < fStack_180) {
        fStack_180 = fStack_150;
      }
      fStack_150 = fStack_180;
      uStack_14c = uStack_17c;
      if (fStack_198 < fStack_148) {
        fStack_198 = fStack_148;
      }
      if (fStack_194 < fStack_144) {
        fStack_194 = fStack_144;
      }
      if (fStack_190 < fStack_140) {
        fStack_190 = fStack_140;
      }
      fStack_148 = fStack_198;
      fStack_144 = fStack_194;
      fStack_140 = fStack_190;
      uStack_13c = uStack_18c;
      ModuleInitializationResult2 = ModuleInitializationResult2 + -0x30;
      ModuleInitializationResult1 = ModuleInitializationResult1 + -1;
      fVar14 = fStack_198;
      fVar15 = fStack_194;
      fVar16 = fStack_190;
      MemoryAddress7 = uStack_18c;
      MemoryAddress9 = uStack_17c;
      fStack_158 = fVar18;
      fStack_154 = fVar13;
    } while (-1 < ModuleInitializationResult1);
  }
  *(uint64_t *)(param_1 + 0x870) = 0x4cbebc204cbebc20;
  *(uint64_t *)(param_1 + 0x878) = 0x7f7fffff4cbebc20;
  *(uint64_t *)(param_1 + 0x880) = 0xccbebc20ccbebc20;
  *(uint64_t *)(param_1 + 0x888) = 0x7f7fffffccbebc20;
  ModuleInitializationResult1 = 0;
  *(uint32_t *)(param_1 + 0x8a0) = 0;
  *(uint64_t *)(param_1 + 0x890) = 0;
  *(uint64_t *)(param_1 + 0x898) = 0x7f7fffff00000000;
  fStack_198 = fVar18;
  if (*(float *)(param_1 + 0x870) < fVar18) {
    fStack_198 = *(float *)(param_1 + 0x870);
  }
  fStack_194 = fVar13;
  if (*(float *)(param_1 + 0x874) < fVar13) {
    fStack_194 = *(float *)(param_1 + 0x874);
  }
  fStack_190 = fStack_180;
  if (*(float *)(param_1 + 0x878) < fStack_180) {
    fStack_190 = *(float *)(param_1 + 0x878);
  }
  *(ulonglong *)(param_1 + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar18;
  if (fVar18 < *(float *)(param_1 + 0x880)) {
    fStack_198 = *(float *)(param_1 + 0x880);
  }
  fStack_194 = fVar13;
  if (fVar13 < *(float *)(param_1 + 0x884)) {
    fStack_194 = *(float *)(param_1 + 0x884);
  }
  fStack_190 = fStack_180;
  if (fStack_180 < *(float *)(param_1 + 0x888)) {
    fStack_190 = *(float *)(param_1 + 0x888);
  }
  *(ulonglong *)(param_1 + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x888) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar14;
  if (*(float *)(param_1 + 0x870) < fVar14) {
    fStack_198 = *(float *)(param_1 + 0x870);
  }
  fStack_194 = fVar15;
  if (*(float *)(param_1 + 0x874) < fVar15) {
    fStack_194 = *(float *)(param_1 + 0x874);
  }
  fStack_190 = fVar16;
  if (*(float *)(param_1 + 0x878) < fVar16) {
    fStack_190 = *(float *)(param_1 + 0x878);
  }
  *(ulonglong *)(param_1 + 0x870) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x878) = CONCAT44(uStack_18c,fStack_190);
  fStack_198 = fVar14;
  if (fVar14 < *(float *)(param_1 + 0x880)) {
    fStack_198 = *(float *)(param_1 + 0x880);
  }
  fStack_194 = fVar15;
  if (fVar15 < *(float *)(param_1 + 0x884)) {
    fStack_194 = *(float *)(param_1 + 0x884);
  }
  fStack_190 = fVar16;
  if (fVar16 < *(float *)(param_1 + 0x888)) {
    fStack_190 = *(float *)(param_1 + 0x888);
  }
  *(ulonglong *)(param_1 + 0x880) = CONCAT44(fStack_194,fStack_198);
  *(ulonglong *)(param_1 + 0x888) = CONCAT44(uStack_18c,fStack_190);
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    ModuleInitializationResult1 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
  }
  *(float *)(ModuleInitializationResult1 + 0x218) = fVar18;
  *(float *)(ModuleInitializationResult1 + 0x21c) = fVar13;
  *(float *)(ModuleInitializationResult1 + 0x220) = fStack_180;
  *(uint32_t *)(ModuleInitializationResult1 + 0x224) = MemoryAddress9;
  *(float *)(ModuleInitializationResult1 + 0x228) = fVar14;
  *(float *)(ModuleInitializationResult1 + 0x22c) = fVar15;
  *(float *)(ModuleInitializationResult1 + 0x230) = fVar16;
  *(uint32_t *)(ModuleInitializationResult1 + 0x234) = MemoryAddress7;
  pfVar9 = *(float **)(param_1 + 0x860);
  if ((pfVar9 != (float *)0x0) && (*(longlong *)(param_1 + 0x868) != 0)) {
    if ((pfVar9[4] <= fVar14 && fVar14 != pfVar9[4]) ||
       ((pfVar9[5] <= fVar15 && fVar15 != pfVar9[5] || (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6]))
       )) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(param_1 + 0x860);
      fStack_198 = fVar14;
      if (*pfVar3 < fVar14) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulonglong *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar14;
      if (fVar14 < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(param_1 + 0x860);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulonglong *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulonglong *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
    pfVar9 = *(float **)(param_1 + 0x868);
    if (((pfVar9[4] <= fVar14 && fVar14 != pfVar9[4]) ||
        (pfVar9[5] <= fVar15 && fVar15 != pfVar9[5])) ||
       (pfVar9[6] <= fVar16 && fVar16 != pfVar9[6])) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar3 = *(float **)(param_1 + 0x868);
      fStack_198 = fVar14;
      if (*pfVar3 < fVar14) {
        fStack_198 = *pfVar3;
      }
      fStack_194 = fVar15;
      if (pfVar3[1] < fVar15) {
        fStack_194 = pfVar3[1];
      }
      fStack_190 = fVar16;
      if (pfVar3[2] < fVar16) {
        fStack_190 = pfVar3[2];
      }
      *(ulonglong *)pfVar3 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar14;
      if (fVar14 < pfVar3[4]) {
        fStack_198 = pfVar3[4];
      }
      fStack_194 = fVar15;
      if (fVar15 < pfVar3[5]) {
        fStack_194 = pfVar3[5];
      }
      fStack_190 = fVar16;
      if (fVar16 < pfVar3[6]) {
        fStack_190 = pfVar3[6];
      }
      *(ulonglong *)(pfVar3 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar3 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
    if (((fVar18 < *pfVar9) || (fVar13 < pfVar9[1])) || (fStack_180 < pfVar9[2])) {
      do {
      } while (DAT_180d49f6c != '\0');
      LOCK();
      UNLOCK();
      pfVar9 = *(float **)(param_1 + 0x868);
      fStack_198 = fVar18;
      if (*pfVar9 < fVar18) {
        fStack_198 = *pfVar9;
      }
      fStack_194 = fVar13;
      if (pfVar9[1] < fVar13) {
        fStack_194 = pfVar9[1];
      }
      fStack_190 = fStack_180;
      if (pfVar9[2] < fStack_180) {
        fStack_190 = pfVar9[2];
      }
      *(ulonglong *)pfVar9 = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 2) = CONCAT44(uStack_18c,fStack_190);
      fStack_198 = fVar18;
      if (fVar18 < pfVar9[4]) {
        fStack_198 = pfVar9[4];
      }
      fStack_194 = fVar13;
      if (fVar13 < pfVar9[5]) {
        fStack_194 = pfVar9[5];
      }
      fStack_190 = fStack_180;
      if (fStack_180 < pfVar9[6]) {
        fStack_190 = pfVar9[6];
      }
      *(ulonglong *)(pfVar9 + 4) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pfVar9 + 6) = CONCAT44(uStack_18c,fStack_190);
      DAT_180d49f6c = '\0';
    }
  }
  return;
}
        DAT_180d49f98 = 0;
        _DAT_180d49f90 = 8;
        strcpy_s(&DAT_180d49f98,0x40,&UNK_180a353b8);
        FUN_1808fc820(FUN_180943090);
        FUN_1808fcb30(&DAT_180d49f70);
      }
    }
    (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,&DAT_180d49f80);
    return;
  }
  if (-1 < param_1) {
    if (param_1 < (int)((_DAT_180c96158 - _DAT_180c96150) / 0x68)) {
      (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,(longlong)param_1 * 0x68 + _DAT_180c96150);
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
              0x48) < _DAT_180d49fd8) {
    FUN_1808fcb90(&DAT_180d49fd8);
    if (_DAT_180d49fd8 == -1) {
      _DAT_180d49fe0 = &SystemMemoryPool;
      _DAT_180d49fe8 = &DAT_180d49ff8;
      DAT_180d49ff8 = 0;
      _DAT_180d49ff0 = 0;
      strcpy_s(&DAT_180d49ff8,0x40,&DAT_18098bc73);
      FUN_1808fc820(FUN_1809430b0);
      FUN_1808fcb30(&DAT_180d49fd8);
    }
  }
  (*UNRECOVERED_JUMPTABLE)(_DAT_180c8f008,&DAT_180d49fe0);
  return;
}
int FUN_1806088e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int LoopCounter;
  longlong lVar2;
  longlong lVar3;
  void *puVar4;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  InitializeSystemBuffer(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  lVar3 = lStack_28;
  if (iStack_20 == 0x10) {
    LoopCounter = strcmp(lStack_28,&UNK_180a389f0);
    if (LoopCounter == 0) goto LAB_180609067;
    LoopCounter = strcmp(lVar3,&UNK_180a38a08);
    if (LoopCounter == 0) {
      LoopCounter = 100;
      goto LAB_180609070;
    }
    puVar4 = &UNK_180a38c28;
LAB_18060905e:
    LoopCounter = strcmp(lVar3,puVar4);
    if (LoopCounter != 0) {
LAB_18060906e:
      LoopCounter = 0;
      goto LAB_180609070;
    }
  }
  else {
    if (iStack_20 == 0x15) {
      LoopCounter = strcmp(lStack_28,&UNK_180a389d8);
      if (LoopCounter == 0) {
        LoopCounter = 0x30;
        goto LAB_180609070;
      }
LAB_180608a24:
      LoopCounter = strcmp(lVar3,&UNK_180a38aa8);
      if (LoopCounter == 0) {
        LoopCounter = 0xb0;
        goto LAB_180609070;
      }
LAB_180608a96:
      LoopCounter = strcmp(lVar3,&UNK_180a38ac0);
      if (LoopCounter == 0) {
        LoopCounter = 0xd4;
        goto LAB_180609070;
      }
LAB_180608bee:
      puVar4 = &UNK_180a38ba0;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x1b) {
      puVar4 = &UNK_180a38a20;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0xd) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38978);
      if (LoopCounter == 0) {
        LoopCounter = 4;
        goto LAB_180609070;
      }
LAB_180608e70:
      puVar4 = &UNK_180a38c98;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x1a) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38958);
      if (LoopCounter == 0) {
        LoopCounter = 0x1c;
        goto LAB_180609070;
      }
LAB_180608dad:
      LoopCounter = strcmp(lVar3,&UNK_180a38c08);
      if (LoopCounter == 0) {
        LoopCounter = 0x18;
        goto LAB_180609070;
      }
LAB_180608fee:
      LoopCounter = strcmp(lVar3,&UNK_180a38ea0);
      if (LoopCounter == 0) {
        LoopCounter = 0x554;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x20) {
      LoopCounter = strcmp(lStack_28,&UNK_180a389b0);
      if (LoopCounter == 0) {
        LoopCounter = 0x30;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x24) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38988);
      if (LoopCounter == 0) {
        LoopCounter = 0x12;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 0x15) goto LAB_180608a24;
    if (iStack_20 == 0x1f) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38a88);
      if (LoopCounter == 0) {
        LoopCounter = 0x48;
        goto LAB_180609070;
      }
LAB_180608e4c:
      LoopCounter = strcmp(lVar3,&UNK_180a38d38);
      if (LoopCounter == 0) {
        LoopCounter = 1;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 10) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38ad8);
      if (LoopCounter == 0) {
        LoopCounter = 8;
        goto LAB_180609070;
      }
LAB_180608b18:
      LoopCounter = strcmp(lVar3,&UNK_180a38a78);
      if (LoopCounter == 0) {
        LoopCounter = 4;
        goto LAB_180609070;
      }
LAB_180608fdd:
      puVar4 = &UNK_180a38ec0;
      goto LAB_18060905e;
    }
    if (iStack_20 == 0x15) goto LAB_180608a96;
    if (iStack_20 == 0x16) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38a48);
      if (LoopCounter == 0) {
        LoopCounter = 0x14;
        goto LAB_180609070;
      }
LAB_180608c78:
      LoopCounter = strcmp(lVar3,&UNK_180a38b48);
      if (LoopCounter == 0) {
        LoopCounter = 0x568;
        goto LAB_180609070;
      }
      LoopCounter = strcmp(lVar3,&UNK_180a38c40);
      if (LoopCounter == 0) {
        LoopCounter = 0x10;
        goto LAB_180609070;
      }
      LoopCounter = strcmp(lVar3,&UNK_180a38ca8);
      if (LoopCounter == 0) {
        LoopCounter = 0x28;
        goto LAB_180609070;
      }
      LoopCounter = strcmp(lVar3,&UNK_180a38e38);
      if (LoopCounter == 0) {
        LoopCounter = 0x40;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 == 4) {
      lVar3 = 0;
      do {
        lVar2 = lVar3 + 1;
        if (*(char *)(lStack_28 + lVar3) != (&UNK_180a38a3c)[lVar3]) goto LAB_18060906e;
        lVar3 = lVar2;
      } while (lVar2 != 5);
      LoopCounter = 200;
      goto LAB_180609070;
    }
    if (iStack_20 == 10) goto LAB_180608b18;
    if (iStack_20 == 0x12) {
      LoopCounter = strcmp(lStack_28,&UNK_180a38a60);
      if (LoopCounter == 0) {
        LoopCounter = 0x58;
        goto LAB_180609070;
      }
      goto LAB_18060906e;
    }
    if (iStack_20 != 0x13) {
      if (iStack_20 == 0x17) {
        LoopCounter = strcmp(lStack_28,&UNK_180a38bb8);
        if (LoopCounter == 0) {
          LoopCounter = 1;
          goto LAB_180609070;
        }
LAB_180608fb7:
        puVar4 = &UNK_180a38e78;
LAB_180608fc1:
        LoopCounter = strcmp(lVar3,puVar4);
        if (LoopCounter == 0) {
LAB_180608fce:
          LoopCounter = 0xc;
          goto LAB_180609070;
        }
      }
      else {
        if (iStack_20 == 0x15) goto LAB_180608bee;
        if (iStack_20 == 0x26) {
          LoopCounter = strcmp(lStack_28,&UNK_180a38b20);
          if (LoopCounter == 0) {
            LoopCounter = 0xa8;
            goto LAB_180609070;
          }
        }
        else if (iStack_20 == 0x34) {
          LoopCounter = strcmp(lStack_28,&UNK_180a38ae8);
          if (LoopCounter == 0) {
            LoopCounter = 0x14;
            goto LAB_180609070;
          }
        }
        else {
          if (iStack_20 != 0xf) {
            if (iStack_20 == 0x16) goto LAB_180608c78;
            if (iStack_20 == 0x18) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38c78);
              if ((LoopCounter == 0) || (LoopCounter = strcmp(lVar3,&UNK_180a38c58), LoopCounter == 0))
              goto LAB_180608fce;
              LoopCounter = strcmp(lVar3,&UNK_180a38be8);
              if (LoopCounter != 0) {
                puVar4 = &UNK_180a38d98;
                goto LAB_18060905e;
              }
              goto LAB_180609067;
            }
            if (iStack_20 == 7) {
              lVar3 = 0;
              do {
                lVar2 = lVar3;
                if (*(char *)(lStack_28 + lVar2) != (&UNK_180a38be0)[lVar2]) goto LAB_18060906e;
                lVar3 = lVar2 + 1;
              } while (lVar2 + 1 != 8);
              LoopCounter = (int)lVar2 + -6;
              goto LAB_180609070;
            }
            if (iStack_20 == 0xc) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38bd0);
              if (LoopCounter == 0) {
                LoopCounter = 0x68;
                goto LAB_180609070;
              }
LAB_18060901e:
              LoopCounter = strcmp(lVar3,&UNK_180a38e50);
              if (LoopCounter == 0) {
                LoopCounter = 4;
                goto LAB_180609070;
              }
              LoopCounter = strcmp(lVar3,&UNK_180a38f30);
              if (LoopCounter == 0) {
                LoopCounter = 8;
                goto LAB_180609070;
              }
              goto LAB_18060906e;
            }
            if (iStack_20 == 0x1a) goto LAB_180608dad;
            if (iStack_20 == 3) {
              LoopCounter = 4;
              lVar3 = 0;
              do {
                lVar2 = lVar3 + 1;
                if (*(char *)(lStack_28 + lVar3) != (&UNK_180a29944)[lVar3]) goto LAB_18060906e;
                lVar3 = lVar2;
              } while (lVar2 != 4);
              goto LAB_180609070;
            }
            if (iStack_20 == 0xf) goto LAB_180608e02;
            if (iStack_20 == 0x23) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38d58);
              if (LoopCounter == 0) {
                LoopCounter = 0x28;
                goto LAB_180609070;
              }
LAB_180608e99:
              LoopCounter = strcmp(lVar3,&UNK_180a38cc0);
              if (LoopCounter == 0) {
                LoopCounter = 0x18;
                goto LAB_180609070;
              }
              goto LAB_18060906e;
            }
            if (iStack_20 == 0x1f) goto LAB_180608e4c;
            if (iStack_20 == 0xd) goto LAB_180608e70;
            if (iStack_20 == 0x21) {
              puVar4 = &UNK_180a38ce8;
              goto LAB_180608fc1;
            }
            if (iStack_20 == 0x23) goto LAB_180608e99;
            if (iStack_20 == 0xf) goto LAB_180608ebd;
            if (iStack_20 == 0xb) {
              LoopCounter = strcmp(lStack_28,&UNK_180a38dd8);
              if (LoopCounter == 0) {
                LoopCounter = 0x248;
                goto LAB_180609070;
              }
LAB_180608f53:
              LoopCounter = strcmp(lVar3,&UNK_180a38dc8);
              if (LoopCounter == 0) {
                LoopCounter = 4;
                goto LAB_180609070;
              }
LAB_180608f97:
              LoopCounter = strcmp(lVar3,&UNK_180a38e90);
              if (LoopCounter == 0) {
                LoopCounter = 4;
                goto LAB_180609070;
              }
            }
            else {
              if (iStack_20 == 0x11) {
                LoopCounter = strcmp(lStack_28,&UNK_180a38e10);
                if (LoopCounter == 0) goto LAB_180609067;
                LoopCounter = strcmp(lVar3,&UNK_180a38df8);
                if (LoopCounter == 0) {
                  LoopCounter = 0xa0;
                  goto LAB_180609070;
                }
                puVar4 = &UNK_180a38d80;
                goto LAB_18060905e;
              }
              if (iStack_20 == 0xb) goto LAB_180608f53;
              if (iStack_20 == 0xf) goto LAB_180608f73;
              if (iStack_20 == 0xb) goto LAB_180608f97;
              if (iStack_20 == 0x17) goto LAB_180608fb7;
              if (iStack_20 == 10) goto LAB_180608fdd;
              if (iStack_20 == 0x1a) goto LAB_180608fee;
              if (iStack_20 != 0xb) {
                if (iStack_20 == 0xc) goto LAB_18060901e;
                if (iStack_20 != 0x19) goto LAB_18060906e;
                puVar4 = &UNK_180a38f10;
                goto LAB_18060905e;
              }
            }
            puVar4 = &UNK_180a38e28;
            goto LAB_18060905e;
          }
          LoopCounter = strcmp(lStack_28,&UNK_180a38b60);
          if (LoopCounter == 0) {
            LoopCounter = 0x214;
            goto LAB_180609070;
          }
LAB_180608e02:
          LoopCounter = strcmp(lVar3,&UNK_180a38d10);
          if (LoopCounter == 0) {
            LoopCounter = 0x2028;
            goto LAB_180609070;
          }
LAB_180608ebd:
          LoopCounter = strcmp(lVar3,&UNK_180a38de8);
          if (LoopCounter == 0) {
            LoopCounter = 4;
            goto LAB_180609070;
          }
LAB_180608f73:
          LoopCounter = strcmp(lVar3,&UNK_180a38db8);
          if (LoopCounter == 0) {
            LoopCounter = 0x50;
            goto LAB_180609070;
          }
        }
      }
      goto LAB_18060906e;
    }
    LoopCounter = strcmp(lStack_28,&UNK_180a38b88);
    if (LoopCounter == 0) {
      LoopCounter = 1;
      goto LAB_180609070;
    }
    LoopCounter = strcmp(lVar3,&UNK_180a38b70);
    if (LoopCounter == 0) {
      LoopCounter = 3;
      goto LAB_180609070;
    }
    LoopCounter = strcmp(lVar3,&UNK_180a38d20);
    if (LoopCounter != 0) {
      puVar4 = &UNK_180a38e60;
      goto LAB_18060905e;
    }
  }
LAB_180609067:
  LoopCounter = 4;
LAB_180609070:
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 == 0) {
    return LoopCounter;
  }
  CleanupSystemResources();
}
uint64_t
FUN_1806090b0(uint64_t param_1,uint64_t param_2,uint8_t param_3,uint64_t param_4)
{
  char cVar1;
  void *pBufferSize;
  uint64_t uVar3;
  uint8_t auStack_50 [32];
  uint8_t auStack_30 [40];
  InitializeSystemBuffer(auStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  InitializeSystemBuffer(auStack_50,param_2);
  cVar1 = FUN_180629850(auStack_30,&UNK_180a389d8,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_180629850(auStack_30,&UNK_180a38a08,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_30,&UNK_180a38958,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_30,&UNK_180a389b0,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_30,&UNK_180a38988,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_30,&UNK_180a38aa8,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_30,&UNK_180a38a88,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_30,&UNK_180a38ac0,1);
                if (cVar1 == '\0') {
                  cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38a48);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38a3c);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38a60);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38b70);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38b20);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38ae8);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38b60);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38b48);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38c40);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38c78);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38c58);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38bd0);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38c08);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a29944);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_30,&UNK_180a38d10)
                                              ;
                                              if (cVar1 == '\0') {
                                                cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                            &UNK_180a38d58);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                              &UNK_180a38ca8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &UNK_180a38ce8);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &UNK_180a38cc0);
                                                      if (cVar1 != '\0') goto LAB_18060af51;
                                                      cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                  &UNK_180a38dd8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                    &UNK_180a38df8);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                      &UNK_180a38db8
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                        &
                                                  UNK_180a38e78);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_30,
                                                                                &UNK_180a38ea0);
                                                    if (cVar1 != '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ac00);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3acf8);
                                                        if (cVar1 != '\0') goto LAB_18060b9cb;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3acd8);
                                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ad30);
                                                        if (cVar1 != '\0') goto LAB_18060acd8;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &DAT_180a06a48);
                                                        if (cVar1 != '\0') goto LAB_18060a114;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ad18);
                                                        if (cVar1 != '\0') goto LAB_18060a91e;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ac90);
                                                        if (cVar1 != '\0') goto LAB_18060ba49;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ac80);
                                                        if (cVar1 != '\0') goto LAB_18060ba67;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3acc8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x21c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3aca8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x41c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ade8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x41d;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3add0);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x420;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ae18);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x424;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ae00);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x428;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ad88);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x430;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a29da8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x438;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ad60);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x439;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3adb8);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x43c;
                                                          goto LAB_18060bbae;
                                                        }
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3ada0);
                                                        if (cVar1 != '\0') {
                                                          uVar3 = 0x440;
                                                          goto LAB_18060bbae;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3abe0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a1029c);
                                                      if (cVar1 == '\0') {
                                                        pBufferSize = &UNK_180a3ac10;
                                                        goto LAB_18060ad2d;
                                                      }
                                                      goto LAB_18060b9cb;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3ac48);
                                                    if (cVar1 == '\0') {
                                                      pBufferSize = &UNK_180a3abe8;
                                                      goto LAB_18060a103;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a960);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab28);
                                                      if (cVar1 != '\0') goto LAB_18060b6a9;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a39f78);
                                                      if (cVar1 != '\0') goto LAB_18060b6c7;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab18);
                                                      if (cVar1 != '\0') goto LAB_18060b6e5;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a39fb0);
                                                      if (cVar1 != '\0') goto LAB_18060b703;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab50);
                                                      if (cVar1 != '\0') goto LAB_1806093cc;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab38);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 100;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aae8);
                                                      if (cVar1 != '\0') goto LAB_180609b20;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aad8);
                                                      if (cVar1 != '\0') {
LAB_18060b76f:
                                                        uVar3 = 0x6c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab08);
                                                      if (cVar1 != '\0') goto LAB_18060b78d;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aaf8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x74;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3abb0);
                                                      if (cVar1 != '\0') goto LAB_18060b7c9;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aba0);
                                                      if (cVar1 != '\0') goto LAB_18060b7e7;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3abd0);
                                                      if (cVar1 != '\0') goto LAB_18060b805;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3abc0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x84;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab70);
                                                      if (cVar1 != '\0') goto LAB_18060b841;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab60);
                                                      if (cVar1 != '\0') goto LAB_18060b85f;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab90);
                                                      if (cVar1 != '\0') goto LAB_18060b87d;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ab80);
                                                      if (cVar1 != '\0') goto LAB_18060b89b;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ac30);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x96;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ac18);
                                                      if (cVar1 != '\0') goto LAB_18060b8d7;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3ac68);
                                                      if (cVar1 != '\0') goto LAB_18060b8f9;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a8b0);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a850);
                                                      if (cVar1 != '\0') goto LAB_18060ad3e;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a830);
                                                      if (cVar1 != '\0') goto LAB_18060a114;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a870);
                                                      if (cVar1 != '\0') goto LAB_18060ba49;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a860);
                                                      if (cVar1 != '\0') goto LAB_18060b32d;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a04be8);
                                                      if (cVar1 != '\0') goto LAB_18060b34b;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a938);
                                                      if (cVar1 != '\0') goto LAB_18060b369;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a920);
                                                      if (cVar1 != '\0') goto LAB_18060b387;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a960);
                                                      if (cVar1 != '\0') goto LAB_18060b3a5;
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a948);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0xf8;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a8f0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0xfc;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a8d8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x100;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a910);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x110;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a900);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x114;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a9d8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x118;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a9c8);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x11c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a9f0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x11e;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a9e0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x120;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a988);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x130;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a2a000);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x170;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a21a30);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x174;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a970);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x178;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a9b0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x188;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a998);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x198;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aa98);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x19c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aa70);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x1a0;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aac0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x220;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aab0);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x230;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aa20);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x234;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aa08);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x238;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aa50);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x23c;
                                                        goto LAB_18060bbae;
                                                      }
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3aa38);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 0x240;
                                                        goto LAB_18060bbae;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a650);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a640);
                                                      if (cVar1 != '\0') {
                                                        uVar3 = 4;
                                                        goto LAB_18060bbae;
                                                      }
                                                      goto LAB_18060ad8c;
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a800);
                                                    if (cVar1 == '\0') {
                                                      cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                  &UNK_180a3a7a8);
                                                      if (cVar1 == '\0') {
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3a798);
                                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                                        cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                    &UNK_180a3a7d0);
                                                        if (cVar1 == '\0') {
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &UNK_180a3a7b8
                                                                                     );
                                                          if (cVar1 != '\0') goto LAB_18060a114;
                                                          cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                      &UNK_180a3a898
                                                                                     );
                                                          if (cVar1 == '\0') {
                                                            cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                        &
                                                  UNK_180a3a880);
                                                  if (cVar1 != '\0') goto LAB_18060ba49;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a8c0);
                                                  if (cVar1 != '\0') goto LAB_18060b1d7;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &DAT_180a0ba58);
                                                  if (cVar1 != '\0') goto LAB_18060b1f5;
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a5a8);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a2e2bc);
                                                    if (cVar1 != '\0') goto LAB_18060b32d;
                                                    pBufferSize = &UNK_180a2e9e0;
                                                    goto LAB_18060b0e8;
                                                  }
                                                  goto LAB_18060ba67;
                                                  }
                                                  goto LAB_18060a91e;
                                                  }
                                                  goto LAB_18060acd8;
                                                  }
                                                  goto LAB_18060b9cb;
                                                  }
                                                  }
                                                }
                                                else {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a720);
                                                  if (cVar1 == '\0') {
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a754);
                                                    if (cVar1 != '\0') goto LAB_18060b9cb;
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a748);
                                                    if (cVar1 != '\0') {
LAB_18060acd8:
                                                      uVar3 = 0xc;
                                                      goto LAB_18060bbae;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a7f0);
                                                    if (cVar1 != '\0') {
LAB_18060a91e:
                                                      uVar3 = 0x14;
                                                      goto LAB_18060bbae;
                                                    }
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                                &UNK_180a3a7e0);
                                                    if (cVar1 != '\0') {
LAB_18060ba67:
                                                      uVar3 = 0x1c;
                                                      goto LAB_18060bbae;
                                                    }
                                                    pBufferSize = &UNK_180a3a820;
LAB_18060b0e8:
                                                    cVar1 = func_0x0001800a1eb0(auStack_50,pBufferSize);
                                                    if (cVar1 != '\0') goto LAB_18060b0f9;
                                                  }
                                                }
                                              }
                                              else {
                                                cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                            &UNK_180a1a470);
                                                if (cVar1 == '\0') {
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a758);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2000;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a788);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2010;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a778);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2020;
                                                    goto LAB_18060bbae;
                                                  }
                                                  cVar1 = func_0x0001800a1eb0(auStack_50,
                                                                              &UNK_180a3a738);
                                                  if (cVar1 != '\0') {
                                                    uVar3 = 0x2024;
                                                    goto LAB_18060bbae;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          else {
LAB_18060af51:
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a650);
                                            if (cVar1 == '\0') {
                                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a640)
                                              ;
                                              if (cVar1 == '\0') {
                                                pBufferSize = &UNK_180a3a5c0;
                                                goto LAB_18060a103;
                                              }
                                              goto LAB_18060ad3e;
                                            }
                                          }
                                        }
                                        else {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a6c0);
                                          if (cVar1 == '\0') {
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a708);
                                            if (cVar1 != '\0') goto LAB_18060a114;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a6f8);
                                            if (cVar1 != '\0') goto LAB_18060b32d;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ee0);
                                            if (cVar1 != '\0') {
LAB_18060b0f9:
                                              uVar3 = 0x24;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e48);
                                            if (cVar1 != '\0') goto LAB_1806091a3;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39dd0);
                                            if (cVar1 != '\0') {
LAB_18060ae39:
                                              uVar3 = 0x2c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39df0);
                                            if (cVar1 != '\0') goto LAB_18060ae57;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39fb0);
                                            if (cVar1 != '\0') {
LAB_18060ae75:
                                              uVar3 = 0x34;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a670);
                                            if (cVar1 != '\0') goto LAB_18060ae93;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a660);
                                            if (cVar1 != '\0') {
LAB_18060aeb1:
                                              uVar3 = 0x3c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a6a0);
                                            if (cVar1 != '\0') {
LAB_18060b6c7:
                                              uVar3 = 0x50;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a688);
                                            if (cVar1 != '\0') goto LAB_18060b6e5;
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d58);
                                            if (cVar1 != '\0') {
LAB_18060b703:
                                              uVar3 = 0x5c;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f18);
                                            if (cVar1 != '\0') {
LAB_1806093cc:
                                              uVar3 = 0x60;
                                              goto LAB_18060bbae;
                                            }
                                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a768);
                                            if (cVar1 != '\0') {
                                              uVar3 = 0x61;
                                              goto LAB_18060bbae;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a650);
                                        if (cVar1 == '\0') {
                                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a640);
                                          if (cVar1 == '\0') {
LAB_18060ad8c:
                                            pBufferSize = &UNK_180a3a5c0;
                                            goto LAB_18060ad2d;
                                          }
                                          goto LAB_18060b9cb;
                                        }
                                      }
                                    }
                                    else {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a600);
                                      if (cVar1 == '\0') {
                                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a5e0);
                                        if (cVar1 != '\0') goto LAB_18060b9cb;
                                        pBufferSize = &UNK_180a3a6e0;
LAB_18060ad2d:
                                        cVar1 = func_0x0001800a1eb0(auStack_50,pBufferSize);
                                        if (cVar1 != '\0') goto LAB_18060ad3e;
                                      }
                                    }
                                  }
                                  else {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a650);
                                    if (cVar1 == '\0') {
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a640);
                                      if (cVar1 != '\0') goto LAB_18060b9cb;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a5d0);
                                      if (cVar1 != '\0') goto LAB_18060ad3e;
                                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a5c0);
                                      if (cVar1 != '\0') goto LAB_18060acd8;
                                    }
                                  }
                                }
                                else {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a2f8);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a2e8);
                                    if (cVar1 != '\0') goto LAB_18060b9cb;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a310);
                                    if (cVar1 != '\0') goto LAB_18060ad3e;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a300);
                                    if (cVar1 != '\0') goto LAB_18060acd8;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a418);
                                    if (cVar1 != '\0') goto LAB_18060a114;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a408);
                                    if (cVar1 != '\0') goto LAB_18060a91e;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a440);
                                    if (cVar1 != '\0') goto LAB_18060ba49;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a428);
                                    if (cVar1 != '\0') goto LAB_18060ba67;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a3d0);
                                    if (cVar1 != '\0') goto LAB_18060b32d;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a3c0);
                                    if (cVar1 != '\0') goto LAB_18060b0f9;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a3f8);
                                    if (cVar1 != '\0') goto LAB_1806091a3;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a3e8);
                                    if (cVar1 != '\0') goto LAB_18060ae39;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a4c0);
                                    if (cVar1 != '\0') goto LAB_18060ae57;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a4a8);
                                    if (cVar1 != '\0') goto LAB_18060ae75;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a4e0);
                                    if (cVar1 != '\0') goto LAB_18060ae93;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a4d0);
                                    if (cVar1 != '\0') goto LAB_18060aeb1;
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a468);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x53c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a458);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x540;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a498);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x544;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a478);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x548;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a560);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x54c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a540);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x550;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a5a8);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x554;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a580);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x558;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a508);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x55c;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a4f8);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x560;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a530);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x564;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a520);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x565;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a630);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x566;
                                      goto LAB_18060bbae;
                                    }
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a620);
                                    if (cVar1 != '\0') {
                                      uVar3 = 0x567;
                                      goto LAB_18060bbae;
                                    }
                                  }
                                }
                              }
                              else {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a2e1d8);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a2e1e8);
                                  if (cVar1 != '\0') goto LAB_18060b9cb;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a2e158);
                                  if (cVar1 != '\0') goto LAB_18060ad3e;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a2e150);
                                  if (cVar1 != '\0') goto LAB_18060acd8;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a0696c);
                                  if (cVar1 != '\0') goto LAB_18060a114;
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a0ae28);
                                  if (cVar1 != '\0') goto LAB_18060a91e;
                                }
                              }
                            }
                            else {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a260);
                              if (cVar1 == '\0') {
                                cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a348);
                                if (cVar1 == '\0') {
                                  cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a320);
                                  if (cVar1 == '\0') {
                                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a398);
                                    if (cVar1 == '\0') {
                                      pBufferSize = &UNK_180a3a370;
                                      goto LAB_18060a103;
                                    }
                                    goto LAB_18060acd8;
                                  }
                                  goto LAB_18060ad3e;
                                }
                                goto LAB_18060b9cb;
                              }
                            }
                          }
                          else {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a068);
                            if (cVar1 == '\0') {
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a058);
                              if (cVar1 != '\0') {
LAB_18060b9cb:
                                uVar3 = 4;
                                goto LAB_18060bbae;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39fe0);
                              if (cVar1 != '\0') goto LAB_18060ad3e;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39fc0);
                              if (cVar1 != '\0') goto LAB_18060acd8;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a018);
                              if (cVar1 != '\0') goto LAB_18060a114;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ff8);
                              if (cVar1 != '\0') goto LAB_18060a91e;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a118);
                              if (cVar1 != '\0') goto LAB_18060ba49;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a0f0);
                              if (cVar1 != '\0') goto LAB_18060ba67;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a158);
                              if (cVar1 != '\0') goto LAB_18060b32d;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a140);
                              if (cVar1 != '\0') goto LAB_1806091a3;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a098);
                              if (cVar1 != '\0') goto LAB_18060ae57;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a078);
                              if (cVar1 != '\0') goto LAB_18060ae93;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a0d0);
                              if (cVar1 != '\0') goto LAB_18060b6a9;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a0b8);
                              if (cVar1 != '\0') goto LAB_18060a66e;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a1e8);
                              if (cVar1 != '\0') goto LAB_18060a68c;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a1c8);
                              if (cVar1 != '\0') goto LAB_18060a6aa;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a220);
                              if (cVar1 != '\0') goto LAB_18060b6c7;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a208);
                              if (cVar1 != '\0') goto LAB_18060b6e5;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a188);
                              if (cVar1 != '\0') goto LAB_1806093cc;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a178);
                              if (cVar1 != '\0') goto LAB_180609b20;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a1b8);
                              if (cVar1 != '\0') {
LAB_18060b78d:
                                uVar3 = 0x70;
                                goto LAB_18060bbae;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a1a8);
                              if (cVar1 != '\0') goto LAB_18060b7c9;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a2b0);
                              if (cVar1 != '\0') {
LAB_18060b805:
                                uVar3 = 0x80;
                                goto LAB_18060bbae;
                              }
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a298);
                              if (cVar1 != '\0') goto LAB_18060b841;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a2d8);
                              if (cVar1 != '\0') goto LAB_18060b85f;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a2c0);
                              if (cVar1 != '\0') goto LAB_18060b87d;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a250);
                              if (cVar1 != '\0') goto LAB_18060b8d7;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a240);
                              if (cVar1 != '\0') goto LAB_18060b34b;
                              cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a278);
                              if (cVar1 != '\0') goto LAB_18060a7ec;
                            }
                          }
                        }
                        else {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f50);
                          if (cVar1 == '\0') {
                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a048);
                            if (cVar1 != '\0') goto LAB_18060a4de;
                            cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a3a038);
                            if (cVar1 != '\0') goto LAB_18060a500;
                          }
                        }
                      }
                      else {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e78);
                        if (cVar1 == '\0') {
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39eb8);
                          if (cVar1 != '\0') goto LAB_18060a114;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ea8);
                          if (cVar1 != '\0') goto LAB_18060b32d;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f88);
                          if (cVar1 != '\0') goto LAB_18060ae57;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f78);
                          if (cVar1 != '\0') {
LAB_18060ae93:
                            uVar3 = 0x38;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39fb0);
                          if (cVar1 != '\0') {
LAB_18060b6a9:
                            uVar3 = 0x40;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f98);
                          if (cVar1 != '\0') {
LAB_18060a66e:
                            uVar3 = 0x44;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f28);
                          if (cVar1 != '\0') {
LAB_18060a68c:
                            uVar3 = 0x48;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a1029c);
                          if (cVar1 != '\0') {
LAB_18060a6aa:
                            uVar3 = 0x4c;
                            goto LAB_18060bbae;
                          }
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f18);
                          if (cVar1 != '\0') goto LAB_18060b6c7;
                          cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f60);
                          if (cVar1 != '\0') {
                            uVar3 = 0x51;
                            goto LAB_18060bbae;
                          }
                        }
                      }
                    }
                    else {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d98);
                      if (cVar1 == '\0') {
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39dc0);
                        if (cVar1 != '\0') {
LAB_18060b6e5:
                          uVar3 = 0x58;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a35198);
                        if (cVar1 != '\0') {
LAB_180609b20:
                          uVar3 = 0x68;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39db0);
                        if (cVar1 != '\0') {
LAB_18060b7c9:
                          uVar3 = 0x78;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d58);
                        if (cVar1 != '\0') {
LAB_18060b841:
                          uVar3 = 0x88;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d40);
                        if (cVar1 != '\0') {
LAB_18060b85f:
                          uVar3 = 0x8c;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d88);
                        if (cVar1 != '\0') {
LAB_18060b87d:
                          uVar3 = 0x90;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d70);
                        if (cVar1 != '\0') {
LAB_18060b89b:
                          uVar3 = 0x94;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e30);
                        if (cVar1 != '\0') {
LAB_18060b8d7:
                          uVar3 = 0x98;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e18);
                        if (cVar1 != '\0') {
LAB_18060b8f9:
                          uVar3 = 0x9c;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e58);
                        if (cVar1 != '\0') {
LAB_18060b34b:
                          uVar3 = 0xa0;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a34948);
                        if (cVar1 != '\0') {
LAB_18060a7ec:
                          uVar3 = 0xa4;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e48);
                        if (cVar1 != '\0') {
LAB_18060b369:
                          uVar3 = 0xa8;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39de0);
                        if (cVar1 != '\0') {
LAB_18060a282:
                          uVar3 = 0xac;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39dd0);
                        if (cVar1 != '\0') {
LAB_18060b387:
                          uVar3 = 0xb0;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e08);
                        if (cVar1 != '\0') {
                          uVar3 = 0xb4;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39df0);
                        if (cVar1 != '\0') {
                          uVar3 = 0xb5;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ee0);
                        if (cVar1 != '\0') {
LAB_18060b3a5:
                          uVar3 = 0xb8;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ed0);
                        if (cVar1 != '\0') {
LAB_18060a30c:
                          uVar3 = 0xbc;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39f00);
                        if (cVar1 != '\0') {
                          uVar3 = 0xbd;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ef0);
                        if (cVar1 != '\0') {
                          uVar3 = 0xbe;
                          goto LAB_18060bbae;
                        }
                        cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39e90);
                        if (cVar1 != '\0') {
LAB_18060a36a:
                          uVar3 = 0xc0;
                          goto LAB_18060bbae;
                        }
                      }
                    }
                  }
                  else {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39cd0);
                    if (cVar1 == '\0') {
                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ccc);
                      if (cVar1 != '\0') goto LAB_18060b9cb;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39cd8);
                      if (cVar1 != '\0') goto LAB_18060ad3e;
                      cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39cd4);
                      if (cVar1 != '\0') goto LAB_18060acd8;
                      pBufferSize = &UNK_180a39da8;
LAB_18060a103:
                      cVar1 = func_0x0001800a1eb0(auStack_50,pBufferSize);
                      if (cVar1 != '\0') goto LAB_18060a114;
                    }
                  }
                }
                else {
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39920,1);
                  if (cVar1 == '\0') {
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39988);
                    if (cVar1 != '\0') {
LAB_18060a4de:
                      uVar3 = 1;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39970);
                    if (cVar1 != '\0') {
LAB_18060a500:
                      uVar3 = 2;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a398d8);
                    if (cVar1 != '\0') {
                      uVar3 = 3;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a398b8);
                    if (cVar1 != '\0') goto LAB_18060b9cb;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39910);
                    if (cVar1 != '\0') {
                      uVar3 = 5;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a398f0);
                    if (cVar1 != '\0') {
                      uVar3 = 6;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39a28);
                    if (cVar1 != '\0') goto LAB_180609cf8;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39a18);
                    if (cVar1 != '\0') goto LAB_18060ad3e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39a60);
                    if (cVar1 != '\0') goto LAB_180609d2e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39a40);
                    if (cVar1 != '\0') goto LAB_180609d4c;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a399c0);
                    if (cVar1 != '\0') goto LAB_180609d6a;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a399a8);
                    if (cVar1 != '\0') goto LAB_18060acd8;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a399f0);
                    if (cVar1 != '\0') goto LAB_18060a114;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a399e0);
                    if (cVar1 != '\0') goto LAB_18060a91e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39af0);
                    if (cVar1 != '\0') goto LAB_18060ba49;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ad8);
                    if (cVar1 != '\0') goto LAB_18060ba67;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b18);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1d;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b00);
                    if (cVar1 != '\0') {
                      uVar3 = 0x1e;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39a88);
                    if (cVar1 != '\0') goto LAB_18060b32d;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39a70);
                    if (cVar1 != '\0') goto LAB_18060b0f9;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ab8);
                    if (cVar1 != '\0') goto LAB_1806091a3;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39aa0);
                    if (cVar1 != '\0') goto LAB_18060ae39;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ba0);
                    if (cVar1 != '\0') goto LAB_18060ae57;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b88);
                    if (cVar1 != '\0') goto LAB_18060ae75;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39bd8);
                    if (cVar1 != '\0') goto LAB_18060ae93;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39bc0);
                    if (cVar1 != '\0') goto LAB_18060aeb1;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b48);
                    if (cVar1 != '\0') goto LAB_18060b6a9;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b30);
                    if (cVar1 != '\0') goto LAB_18060a66e;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b78);
                    if (cVar1 != '\0') goto LAB_18060a68c;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39b68);
                    if (cVar1 != '\0') goto LAB_18060a6aa;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39c80);
                    if (cVar1 != '\0') goto LAB_18060b703;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39c60);
                    if (cVar1 != '\0') goto LAB_18060b76f;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39cb8);
                    if (cVar1 != '\0') {
LAB_18060b7e7:
                      uVar3 = 0x7c;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39c98);
                    if (cVar1 != '\0') goto LAB_18060b85f;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39c10);
                    if (cVar1 != '\0') goto LAB_18060b8f9;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39bf0);
                    if (cVar1 != '\0') goto LAB_18060a282;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39c50);
                    if (cVar1 != '\0') goto LAB_18060a30c;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39c30);
                    if (cVar1 != '\0') goto LAB_18060a36a;
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39cf8);
                    if (cVar1 != '\0') {
                      uVar3 = 0xc4;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39ce0);
                    if (cVar1 != '\0') {
                      uVar3 = 200;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d28);
                    if (cVar1 != '\0') {
                      uVar3 = 0xcc;
                      goto LAB_18060bbae;
                    }
                    cVar1 = func_0x0001800a1eb0(auStack_50,&UNK_180a39d10);
                    if (cVar1 != '\0') {
                      uVar3 = 0xd0;
                      goto LAB_18060bbae;
                    }
                  }
                }
              }
              else {
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39888,1);
                if (cVar1 == '\0') {
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a397f8,1);
                  if (cVar1 != '\0') {
LAB_18060a114:
                    uVar3 = 0x10;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a397e8,1);
                  if (cVar1 != '\0') {
LAB_18060b32d:
                    uVar3 = 0x20;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39850,1);
                  if (cVar1 != '\0') goto LAB_1806091a3;
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39820,1);
                  if (cVar1 != '\0') {
LAB_18060ae57:
                    uVar3 = 0x30;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a39940,1);
                  if (cVar1 != '\0') {
                    uVar3 = 0x31;
                    goto LAB_18060bbae;
                  }
                  cVar1 = FUN_180629850(auStack_50,&UNK_180a19c8c,1);
                  if (cVar1 != '\0') {
                    uVar3 = 0x32;
                    goto LAB_18060bbae;
                  }
                }
              }
            }
            else {
              cVar1 = FUN_180629850(auStack_50,&UNK_180a397d8,1);
              if (cVar1 == '\0') {
                cVar1 = FUN_180629850(auStack_50,&UNK_180a397c8,1);
                if (cVar1 != '\0') goto LAB_18060b9cb;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39740,1);
                if (cVar1 != '\0') goto LAB_18060ad3e;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39728,1);
                if (cVar1 != '\0') goto LAB_18060acd8;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39768,1);
                if (cVar1 != '\0') goto LAB_18060a114;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39758,1);
                if (cVar1 != '\0') goto LAB_18060a91e;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39870,1);
                if (cVar1 != '\0') goto LAB_18060ba49;
                cVar1 = FUN_180629850(auStack_50,&UNK_180a19c8c,1);
                if (cVar1 != '\0') {
LAB_18060b1d7:
                  uVar3 = 0x19;
                  goto LAB_18060bbae;
                }
                cVar1 = FUN_180629850(auStack_50,&UNK_180a39864,1);
                if (cVar1 != '\0') {
                  uVar3 = 0x35;
                  goto LAB_18060bbae;
                }
                cVar1 = FUN_180629850(auStack_50,&UNK_180a398a8,1);
                if (cVar1 != '\0') goto LAB_180609b20;
              }
            }
          }
          else {
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39568,1);
            if (cVar1 == '\0') {
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39538,1);
              if (cVar1 != '\0') {
LAB_180609cf8:
                uVar3 = 7;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a396c8,1);
              if (cVar1 != '\0') goto LAB_18060ad3e;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a396b0,1);
              if (cVar1 != '\0') goto LAB_180609d2e;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39710,1);
              if (cVar1 != '\0') {
LAB_180609d4c:
                uVar3 = 10;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a396f0,1);
              if (cVar1 != '\0') goto LAB_180609d6a;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39640,1);
              if (cVar1 != '\0') goto LAB_18060acd8;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39628,1);
              if (cVar1 != '\0') {
                uVar3 = 0xd;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39688,1);
              if (cVar1 != '\0') {
                uVar3 = 0xe;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39660,1);
              if (cVar1 != '\0') {
                uVar3 = 0xf;
                goto LAB_18060bbae;
              }
              cVar1 = FUN_180629850(auStack_50,&UNK_180a397a8,1);
              if (cVar1 != '\0') goto LAB_18060a114;
              cVar1 = FUN_180629850(auStack_50,&UNK_180a39788,1);
              if (cVar1 != '\0') goto LAB_1806099ea;
            }
          }
        }
        else {
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39270,1);
          if (cVar1 == '\0') {
            cVar1 = FUN_180629850(auStack_50,&UNK_180a393a8,1);
            if (cVar1 != '\0') goto LAB_18060ad3e;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39390,1);
            if (cVar1 != '\0') {
LAB_180609d2e:
              uVar3 = 9;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a393f0,1);
            if (cVar1 != '\0') goto LAB_18060a114;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a393d0,1);
            if (cVar1 != '\0') goto LAB_1806099ea;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39348,1);
            if (cVar1 != '\0') {
LAB_18060965b:
              uVar3 = 0x17;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39328,1);
            if (cVar1 != '\0') goto LAB_18060ba49;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39378,1);
            if (cVar1 != '\0') goto LAB_18060b32d;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39360,1);
            if (cVar1 != '\0') {
              uVar3 = 0x21;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a394a0,1);
            if (cVar1 != '\0') {
              uVar3 = 0x22;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39480,1);
            if (cVar1 != '\0') {
              uVar3 = 0x23;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a394e0,1);
            if (cVar1 != '\0') goto LAB_18060b0f9;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a394b8,1);
            if (cVar1 != '\0') {
              uVar3 = 0x25;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39428,1);
            if (cVar1 != '\0') {
              uVar3 = 0x26;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39408,1);
            if (cVar1 != '\0') {
              uVar3 = 0x27;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39468,1);
            if (cVar1 != '\0') goto LAB_1806091a3;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39450,1);
            if (cVar1 != '\0') {
              uVar3 = 0x29;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a395c0,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2a;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39598,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2b;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39600,1);
            if (cVar1 != '\0') goto LAB_18060ae39;
            cVar1 = FUN_180629850(auStack_50,&UNK_180a395e0,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2d;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39518,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2e;
              goto LAB_18060bbae;
            }
            cVar1 = FUN_180629850(auStack_50,&UNK_180a39500,1);
            if (cVar1 != '\0') {
              uVar3 = 0x2f;
              goto LAB_18060bbae;
            }
          }
        }
      }
      else {
        cVar1 = FUN_180629850(auStack_50,&UNK_180a391b8,1);
        if (cVar1 == '\0') {
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39188,1);
          if (cVar1 != '\0') {
LAB_180609d6a:
            uVar3 = 0xb;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39210,1);
          if (cVar1 != '\0') goto LAB_18060acd8;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a391e8,1);
          if (cVar1 != '\0') goto LAB_18060a114;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39128,1);
          if (cVar1 != '\0') {
LAB_1806099ea:
            uVar3 = 0x11;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39110,1);
          if (cVar1 != '\0') {
            uVar3 = 0x12;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39170,1);
          if (cVar1 != '\0') {
            uVar3 = 0x13;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39148,1);
          if (cVar1 != '\0') goto LAB_18060a91e;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a392d0,1);
          if (cVar1 != '\0') {
            uVar3 = 0x15;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a392b8,1);
          if (cVar1 != '\0') {
            uVar3 = 0x16;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39308,1);
          if (cVar1 != '\0') goto LAB_18060965b;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a392e8,1);
          if (cVar1 != '\0') goto LAB_18060ba49;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39250,1);
          if (cVar1 != '\0') goto LAB_18060b1d7;
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39230,1);
          if (cVar1 != '\0') {
LAB_18060b1f5:
            uVar3 = 0x1a;
            goto LAB_18060bbae;
          }
          cVar1 = FUN_180629850(auStack_50,&UNK_180a39298,1);
          if (cVar1 != '\0') {
            uVar3 = 0x1b;
            goto LAB_18060bbae;
          }
        }
      }
    }
    else {
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38ef0,1);
      if (cVar1 == '\0') {
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38fd8,1);
        if (cVar1 != '\0') goto LAB_18060b9cb;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a1029c,1);
        if (cVar1 != '\0') goto LAB_18060ad3e;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38fc0,1);
        if (cVar1 != '\0') goto LAB_18060acd8;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39008,1);
        if (cVar1 != '\0') goto LAB_18060a114;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38ff0,1);
        if (cVar1 != '\0') goto LAB_18060a91e;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38f78,1);
        if (cVar1 != '\0') goto LAB_18060ba49;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38f60,1);
        if (cVar1 != '\0') goto LAB_18060ba67;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38fa8,1);
        if (cVar1 != '\0') goto LAB_18060b32d;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a38f90,1);
        if (cVar1 != '\0') goto LAB_18060b0f9;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a390b8,1);
        if (cVar1 != '\0') goto LAB_1806091a3;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39090,1);
        if (cVar1 != '\0') goto LAB_18060ae93;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a390f0,1);
        if (cVar1 != '\0') goto LAB_18060a68c;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a390d0,1);
        if (cVar1 != '\0') goto LAB_18060a6aa;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39030,1);
        if (cVar1 != '\0') goto LAB_18060b6c7;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a34c20,1);
        if (cVar1 != '\0') {
          uVar3 = 0x54;
          goto LAB_18060bbae;
        }
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39020,1);
        if (cVar1 != '\0') goto LAB_18060b6e5;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39078,1);
        if (cVar1 != '\0') goto LAB_18060b703;
        cVar1 = FUN_180629850(auStack_50,&UNK_180a39058,1);
        if (cVar1 != '\0') goto LAB_1806093cc;
      }
    }
  }
  else {
    cVar1 = FUN_180629850(auStack_50,&UNK_180a0ee38,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38f50,1);
      if (cVar1 != '\0') {
LAB_18060ad3e:
        uVar3 = 8;
        goto LAB_18060bbae;
      }
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38f40,1);
      if (cVar1 != '\0') goto LAB_18060a114;
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38ee0,1);
      if (cVar1 != '\0') {
LAB_18060ba49:
        uVar3 = 0x18;
        goto LAB_18060bbae;
      }
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38ed0,1);
      if (cVar1 != '\0') goto LAB_18060b32d;
      cVar1 = FUN_180629850(auStack_50,&UNK_180a38f00,1);
      if (cVar1 != '\0') {
LAB_1806091a3:
        uVar3 = 0x28;
        goto LAB_18060bbae;
      }
    }
  }
  uVar3 = 0;
LAB_18060bbae:
  FUN_180627b90(auStack_50);
  FUN_180627b90(auStack_30);
  return uVar3;
}
  DAT_180bf66d8 = 0;
  FUN_1808fc820(FUN_18064fe90);
  FUN_180650050(&UNK_18064ffc0);
  lVar4 = 0;
  _DAT_180c96858 = FUN_1806500b0;
  pBufferSize = (uint32_t *)&DAT_180bfbd80;
  lVar3 = 0x16;
  do {
    if (pBufferSize[1] == 0) {
      FUN_180650490(pBufferSize);
    }
    if (lVar4 != 2) {
      FUN_1806502e0(&UNK_180a3db60,*(uint64_t *)(pBufferSize + 4),*pBufferSize);
    }
    lVar4 = lVar4 + 1;
    pBufferSize = pBufferSize + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (_DAT_180bfbf64 == 0) {
    FUN_180650490(&DAT_180bfbf60);
  }
  _DAT_180bf7308 = (longlong)_DAT_180bfbf60;
  if (_DAT_180bfbf7c == 0) {
    FUN_180650490(&DAT_180bfbf78);
  }
  _DAT_180bf72a8 = (longlong)_DAT_180bfbf78;
  FUN_18064fcc0();
  if (DAT_180c8efc8 != '\0') {
    FUN_1806502e0(&UNK_180a3d970);
  }
  return;
}
double FUN_180629810(void)
{
  int64_t ModuleInitializationResult;
  longlong alStackX_8 [4];
  ModuleInitializationResult = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(alStackX_8);
    ModuleInitializationResult = alStackX_8[0];
  }
  return (double)(ModuleInitializationResult - _DAT_180c8ed48) * _DAT_180c8ed50;
}
bool FUN_180629850(longlong param_1,longlong param_2,char param_3)
{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == (int)lVar4) {
    if (iVar3 != 0) {
      pcVar5 = *(char **)(param_1 + 8);
      if (param_3 == '\0') {
        iVar3 = _stricmp(pcVar5,param_2);
        return iVar3 == 0;
      }
      param_2 = param_2 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[param_2];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      return cVar1 == cVar2;
    }
  }
  else if (iVar3 != 0) {
    return false;
  }
  if ((int)lVar4 != 0) {
    return false;
  }
  return true;
}
int FUN_1806298d0(longlong param_1)
{
  int LoopCounter;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *puStack_30;
  longlong lStack_28;
  int iStack_20;
  InitializeSystemBuffer(&puStack_30);
  LoopCounter = (*(int *)(param_1 + 0x10) - iStack_20) + 1;
  iVar3 = 0;
  if (0 < LoopCounter) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      lVar2 = 0;
      if (0 < iStack_20) {
        do {
          if (*(char *)(*(longlong *)(param_1 + 8) + lVar5 + lVar2) != *(char *)(uVar4 + lStack_28))
          break;
          uVar4 = (ulonglong)((int)uVar4 + 1);
          lVar2 = lVar2 + 1;
        } while (lVar2 < iStack_20);
      }
      if ((int)uVar4 == iStack_20) goto LAB_18062995a;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < LoopCounter);
  }
  iVar3 = -1;
LAB_18062995a:
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
    CleanupSystemResources();
  }
  return iVar3;
}
int FUN_1806299b0(longlong param_1,longlong param_2)
{
  int LoopCounter;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  LoopCounter = *(int *)(param_2 + 0x10);
  iVar3 = *(int *)(param_1 + 0x10) - LoopCounter;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3;
    do {
      uVar5 = 0;
      lVar2 = 0;
      if (0 < LoopCounter) {
        do {
          if (*(char *)(*(longlong *)(param_1 + 8) + lVar4 + lVar2) !=
              *(char *)(uVar5 + *(longlong *)(param_2 + 8))) break;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          lVar2 = lVar2 + 1;
        } while (lVar2 < LoopCounter);
      }
      if ((int)uVar5 == LoopCounter) {
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return -1;
}
uint64_t * FUN_180629a40(longlong param_1,uint64_t *param_2,int param_3,int param_4)
{
  uint8_t MemoryAddress;
  int StringIndex;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uVar4 = (ulonglong)param_3;
  iVar3 = param_4;
  if (param_4 < 0) {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *param_2 = &SystemBufferTemplate;
  param_2[1] = 0;
  *(uint32_t *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(uint32_t *)(param_2 + 2) = 0;
  StringIndex = *(int *)(param_1 + 0x10) - param_3;
  if (iVar3 - param_3 < StringIndex) {
    StringIndex = iVar3 - param_3;
  }
  FUN_1806277c0(param_2,StringIndex + 1,param_3,param_4,1,0xfffffffffffffffe);
  for (uVar5 = uVar4;
      ((longlong)uVar4 < (longlong)iVar3 && ((uint)uVar5 < *(uint *)(param_1 + 0x10)));
      uVar5 = (ulonglong)((uint)uVar5 + 1)) {
    MemoryAddress = *(uint8_t *)(uVar4 + *(longlong *)(param_1 + 8));
    FUN_1806277c0(param_2,*(int *)(param_2 + 2) + 1);
    *(uint8_t *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = MemoryAddress;
    *(uint8_t *)((ulonglong)(*(int *)(param_2 + 2) + 1) + param_2[1]) = 0;
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
    uVar4 = uVar4 + 1;
  }
  return param_2;
}
  DAT_180c95fea = 1;
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  puStack_60 = (uint64_t *)0x0;
  uStack_58 = 0;
  puVar5 = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,0x10,CONCAT71((int7)((ulonglong)pcVar1 >> 8),0x13));
  *(uint8_t *)puVar5 = 0;
  puStack_60 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  *puVar5 = 0x7265206573726150;
  *(uint32_t *)(puVar5 + 1) = 0x3a726f72;
  *(uint16_t *)((longlong)puVar5 + 0xc) = 0x2720;
  *(uint8_t *)((longlong)puVar5 + 0xe) = 0;
  uStack_58 = 0xe;
  ModuleInitializationResult0 = -1;
  uStack_50._0_4_ = uVar3;
  if (param_1 != 0) {
    do {
      lVar9 = ModuleInitializationResult0;
      ModuleInitializationResult0 = lVar9 + 1;
    } while (*(char *)(ModuleInitializationResult0 + param_1) != '\0');
    if (0 < (int)ModuleInitializationResult0) {
      iVar8 = (int)lVar9;
      if ((iVar8 != -0xf) && (uVar3 < iVar8 + 0x10U)) {
        uStack_78 = 0x13;
        puVar5 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,iVar8 + 0x10U,0x10);
        puStack_60 = puVar5;
        uStack_50._0_4_ = FUN_18064e990(puVar5);
      }
      memcpy((uint8_t *)((longlong)puVar5 + 0xe),param_1,(longlong)(iVar8 + 2));
    }
  }
  if (puVar5 == (uint64_t *)0x0) {
    puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x19,0x13);
    *(uint8_t *)puVar5 = 0;
LAB_18062e327:
    puStack_60 = puVar5;
    uVar3 = FUN_18064e990(puVar5);
  }
  else if (uVar3 < 0x19) {
    uStack_78 = 0x13;
    puVar5 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,0x19,0x10);
    goto LAB_18062e327;
  }
  *(uint64_t *)((longlong)puVar5 + 0xe) = 0x6e696c2074612027;
  *(uint16_t *)((longlong)puVar5 + 0x16) = 0x2065;
  *(uint8_t *)(puVar5 + 3) = 0;
  uStack_58 = 0x18;
  uStack_50._0_4_ = uVar3;
  FUN_180060680(acStack_40,&UNK_1809fd0a0,iVar8);
  ModuleInitializationResult0 = -1;
  do {
    lVar9 = ModuleInitializationResult0;
    ModuleInitializationResult0 = lVar9 + 1;
  } while (acStack_40[lVar9 + 1] != '\0');
  iVar8 = (int)(lVar9 + 1);
  if (iVar8 < 1) {
    if (DAT_180c8eced != '\0') {
      _Exit(5);
    }
    puStack_68 = &UNK_180a3c3e0;
    if (puVar5 != (uint64_t *)0x0) {
      FUN_18064e900(puVar5);
    }
    puStack_60 = (uint64_t *)0x0;
    uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
    puStack_68 = &SystemBufferTemplate;
    FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_98);
  }
  if (iVar8 != -0x18) {
    uVar4 = iVar8 + 0x19;
    if (puVar5 == (uint64_t *)0x0) {
      if ((int)uVar4 < 0x10) {
        uVar4 = 0x10;
      }
      puVar5 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
      *(uint8_t *)puVar5 = 0;
    }
    else {
      if (uVar4 <= uVar3) goto LAB_18062e3f0;
      uStack_78 = 0x13;
      puVar5 = (uint64_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar4,0x10);
    }
    puStack_60 = puVar5;
    uStack_50._0_4_ = FUN_18064e990(puVar5);
  }
LAB_18062e3f0:
  memcpy(puVar5 + 3,acStack_40,(longlong)((int)lVar9 + 2));
}
char * FUN_18062e480(uint32_t param_1,uint64_t param_2,char *param_3,uint64_t param_4,
                    longlong *param_5,longlong param_6,ulonglong param_7,uint64_t *param_8,
                    int *param_9,uint64_t *param_10)
{
  char cVar1;
  uint32_t BufferSize;
  uint32_t uVar3;
  void *puVar4;
  int iVar5;
  uint32_t uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  uint32_t *pMemoryAddress0;
  uint32_t *pMemoryAddress1;
  uint8_t *pMemoryAddress2;
  void *pMemoryAddress3;
  char *pcVar14;
  char *pcVar15;
  ulonglong MemoryAddress6;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  longlong lVar21;
  char *pcVar22;
  void *puStack_140;
  void *puStack_138;
  uint uStack_130;
  uint64_t uStack_128;
  longlong *plStack_120;
  void *puStack_118;
  void *puStack_110;
  uint32_t uStack_108;
  ulonglong uStack_100;
  void *puStack_f8;
  uint32_t *puStack_f0;
  uint32_t uStack_e8;
  uint64_t uStack_e0;
  ulonglong uStack_d8;
  longlong lStack_d0;
  uint64_t *puStack_c8;
  void *puStack_c0;
  uint32_t *puStack_b8;
  uint32_t uStack_b0;
  ulonglong uStack_a8;
  uint64_t *puStack_a0;
  void *puStack_98;
  uint32_t *puStack_90;
  uint32_t uStack_88;
  uint64_t uStack_80;
  int *piStack_78;
  char *pcStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  uint64_t uStack_58;
  uint64_t *puStack_50;
  ulonglong MemoryAddress7;
  uStack_58 = 0xfffffffffffffffe;
  plStack_120 = param_5;
  lStack_d0 = param_6;
  uStack_d8 = param_7;
  puStack_a0 = param_8;
  piStack_78 = param_9;
  puStack_c8 = param_10;
  puStack_50 = param_10;
  puStack_118 = &UNK_180a3c3e0;
  uStack_100 = 0;
  puStack_110 = (void *)0x0;
  uStack_108 = 0;
  pcStack_70 = param_3;
  uStack_68 = param_2;
  lVar8 = FUN_18062f1f0(&puStack_f8,param_4,param_1,param_5);
  uStack_108 = *(uint32_t *)(lVar8 + 0x10);
  puStack_110 = *(void **)(lVar8 + 8);
  uStack_100 = *(ulonglong *)(lVar8 + 0x18);
  *(uint32_t *)(lVar8 + 0x10) = 0;
  *(uint64_t *)(lVar8 + 8) = 0;
  *(uint64_t *)(lVar8 + 0x18) = 0;
  puStack_f8 = &UNK_180a3c3e0;
  puStack_60 = puStack_110;
  if (puStack_f0 != (uint32_t *)0x0) {
    CleanupSystemResources();
  }
  puStack_f0 = (uint32_t *)0x0;
  uStack_e0 = (char *)((ulonglong)uStack_e0._4_4_ << 0x20);
  puStack_f8 = &SystemBufferTemplate;
  pMemoryAddress3 = &DAT_18098bc73;
  if (puStack_110 != (void *)0x0) {
    pMemoryAddress3 = puStack_110;
  }
  FUN_180627340(&UNK_180a3cac0,pMemoryAddress3);
  *param_9 = 0;
  lVar8 = *param_5;
  iVar5 = 0;
  if (lVar8 != param_5[1]) {
    do {
      if (0xf < iVar5) {
        FUN_180626ee0(&UNK_180a3ca70,0x10);
      }
      pMemoryAddress3 = &DAT_18098bc73;
      if (*(void **)(lVar8 + 8) != (void *)0x0) {
        pMemoryAddress3 = *(void **)(lVar8 + 8);
      }
      FUN_180627340(&UNK_180a3ca20,pMemoryAddress3);
      iVar5 = *param_9;
      lVar21 = (longlong)iVar5 * 0x3088 + lStack_d0;
      pMemoryAddress3 = &DAT_18098bc73;
      if (*(void **)(lVar8 + 8) != (void *)0x0) {
        pMemoryAddress3 = *(void **)(lVar8 + 8);
      }
      puStack_140 = &UNK_180a3c3e0;
      uStack_128 = 0;
      puStack_138 = (void *)0x0;
      uStack_130 = 0;
      uVar7 = *(uint *)(puStack_c8 + 2);
      MemoryAddress6 = (ulonglong)uVar7;
      if (puStack_c8[1] != 0) {
        FUN_1806277c0(&puStack_140,MemoryAddress6);
      }
      puVar4 = puStack_138;
      if (uVar7 != 0) {
        memcpy(puStack_138,puStack_c8[1],MemoryAddress6);
      }
      if (puStack_138 != (void *)0x0) {
        puStack_138[MemoryAddress6] = 0;
      }
      uStack_130 = uVar7;
      uStack_128._4_4_ = *(uint *)((longlong)puStack_c8 + 0x1c);
      if (pMemoryAddress3 != (void *)0x0) {
        MemoryAddress6 = 0xffffffffffffffff;
        do {
          MemoryAddress7 = MemoryAddress6;
          MemoryAddress6 = MemoryAddress7 + 1;
        } while (pMemoryAddress3[MemoryAddress6] != '\0');
        param_5 = plStack_120;
        if (0 < (int)MemoryAddress6) {
          FUN_1806277c0(&puStack_140,MemoryAddress6 & 0xffffffff);
          memcpy(puStack_138 + uStack_130,pMemoryAddress3,(longlong)((int)MemoryAddress7 + 2));
        }
      }
      pMemoryAddress3 = &DAT_18098bc73;
      if (puStack_138 != (void *)0x0) {
        pMemoryAddress3 = puStack_138;
      }
      FUN_180631420(pMemoryAddress3,lVar21,(longlong)iVar5 * 0x20 + param_7);
      puStack_140 = &UNK_180a3c3e0;
      if (puVar4 != (void *)0x0) {
        FUN_18064e900(puVar4);
      }
      puStack_138 = (void *)0x0;
      uStack_128 = (ulonglong)uStack_128._4_4_ << 0x20;
      puStack_140 = &SystemBufferTemplate;
      lVar8 = lVar8 + 0x20;
      iVar5 = *piStack_78 + 1;
      *piStack_78 = iVar5;
      param_7 = uStack_d8;
      param_3 = pcStack_70;
      param_6 = lStack_d0;
      param_9 = piStack_78;
    } while (lVar8 != param_5[1]);
  }
  pcVar22 = (char *)0x0;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  plStack_120 = (longlong *)((ulonglong)plStack_120 & 0xffffffff00000000);
  pcVar15 = pcVar22;
  if (0 < iVar5) {
    do {
      pcVar19 = "base";
      do {
        pcVar20 = pcVar19;
        pcVar19 = pcVar20 + 1;
      } while (*pcVar19 != '\0');
      for (pcVar19 = *(char **)(param_6 + 0x30); pcVar18 = pcVar22, pcVar19 != (char *)0x0;
          pcVar19 = *(char **)(pcVar19 + 0x58)) {
        pcVar14 = *(char **)pcVar19;
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)0x180d48d24;
          pcVar9 = pcVar22;
        }
        else {
          pcVar9 = *(char **)(pcVar19 + 0x10);
        }
        if (pcVar9 == pcVar20 + -0x180a04ee3) {
          pcVar9 = pcVar14 + (longlong)pcVar9;
          pcVar18 = pcVar19;
          if (pcVar9 <= pcVar14) break;
          lVar8 = (longlong)&DAT_180a04ee4 - (longlong)pcVar14;
          while (*pcVar14 == pcVar14[lVar8]) {
            pcVar14 = pcVar14 + 1;
            if (pcVar9 <= pcVar14) goto LAB_18062e835;
          }
        }
      }
LAB_18062e835:
      *puStack_a0 = pcVar18;
      if (pcVar18 != (char *)0x0) {
        if (param_3 == (char *)0x0) {
          pcVar19 = *(char **)(pcVar18 + 0x30);
        }
        else {
          cVar1 = *param_3;
          pcVar20 = param_3;
          while (cVar1 != '\0') {
            pcVar20 = pcVar20 + 1;
            cVar1 = *pcVar20;
          }
          for (pcVar18 = *(char **)(pcVar18 + 0x30); pcVar19 = pcVar22, pcVar18 != (char *)0x0;
              pcVar18 = *(char **)(pcVar18 + 0x58)) {
            pcVar14 = *(char **)pcVar18;
            if (pcVar14 == (char *)0x0) {
              pcVar14 = (char *)0x180d48d24;
              pcVar9 = pcVar22;
            }
            else {
              pcVar9 = *(char **)(pcVar18 + 0x10);
            }
            if (pcVar9 == pcVar20 + -(longlong)param_3) {
              pcVar9 = pcVar9 + (longlong)pcVar14;
              pcVar19 = pcVar18;
              if (pcVar9 <= pcVar14) break;
              lVar8 = (longlong)param_3 - (longlong)pcVar14;
              while (*pcVar14 == pcVar14[lVar8]) {
                pcVar14 = pcVar14 + 1;
                if (pcVar9 <= pcVar14) goto LAB_18062e8bc;
              }
            }
          }
        }
LAB_18062e8bc:
        *puStack_a0 = pcVar19;
        if (pcVar19 == (char *)0x0) {
          puStack_f8 = &UNK_180a3c3e0;
          puStack_f0 = (uint32_t *)0x0;
          uStack_e8 = 0;
          uStack_e0 = pcVar19;
          pMemoryAddress0 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
          *(uint8_t *)pMemoryAddress0 = 0;
          puStack_f0 = pMemoryAddress0;
          uVar6 = FUN_18064e990(pMemoryAddress0);
          uStack_e0 = (char *)CONCAT44(uStack_e0._4_4_,uVar6);
          *pMemoryAddress0 = 0x204c4d58;
          pMemoryAddress0[1] = 0x65646f6e;
          pMemoryAddress0[2] = 0x74697720;
          pMemoryAddress0[3] = 0x616e2068;
          pMemoryAddress0[4] = 0x2220656d;
          *(uint8_t *)(pMemoryAddress0 + 5) = 0;
          uStack_e8 = 0x14;
          puStack_c0 = &UNK_180a3c3e0;
          uStack_a8 = 0;
          puStack_b8 = (uint32_t *)0x0;
          uStack_b0 = 0;
          pMemoryAddress1 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
          *(uint8_t *)pMemoryAddress1 = 0;
          puStack_b8 = pMemoryAddress1;
          uVar7 = FUN_18064e990(pMemoryAddress1);
          uVar6 = pMemoryAddress0[1];
          BufferSize = pMemoryAddress0[2];
          uVar3 = pMemoryAddress0[3];
          *pMemoryAddress1 = *pMemoryAddress0;
          pMemoryAddress1[1] = uVar6;
          pMemoryAddress1[2] = BufferSize;
          pMemoryAddress1[3] = uVar3;
          pMemoryAddress1[4] = pMemoryAddress0[4];
          uStack_b0 = 0x14;
          *(uint8_t *)(pMemoryAddress1 + 5) = 0;
          uStack_a8 = (ulonglong)uVar7;
          if (param_3 != (char *)0x0) {
            lVar8 = -1;
            do {
              lVar21 = lVar8;
              lVar8 = lVar21 + 1;
            } while (param_3[lVar8] != '\0');
            if (0 < (int)lVar8) {
              iVar5 = (int)lVar21;
              if ((iVar5 != -0x15) && (uVar7 < iVar5 + 0x16U)) {
                pMemoryAddress1 = (uint32_t *)
                          FUN_18062b8b0(_DAT_180c8ed18,pMemoryAddress1,iVar5 + 0x16U,0x10,0x13);
                puStack_b8 = pMemoryAddress1;
                uVar6 = FUN_18064e990(pMemoryAddress1);
                uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar6);
              }
              memcpy(pMemoryAddress1 + 5,param_3,(longlong)(iVar5 + 2));
            }
          }
          pMemoryAddress2 = (uint8_t *)0x0;
          puStack_98 = &UNK_180a3c3e0;
          uStack_80 = 0;
          puStack_90 = (uint32_t *)0x0;
          uStack_88 = 0;
          pMemoryAddress0 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
          *(uint8_t *)pMemoryAddress0 = 0;
          puStack_90 = pMemoryAddress0;
          uVar6 = FUN_18064e990(pMemoryAddress0);
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
          *pMemoryAddress0 = 0x6f632022;
          pMemoryAddress0[1] = 0x20646c75;
          pMemoryAddress0[2] = 0x20746f6e;
          pMemoryAddress0[3] = 0x66206562;
          pMemoryAddress0[4] = 0x646e756f;
          *(uint16_t *)(pMemoryAddress0 + 5) = 0x21;
          uStack_88 = 0x15;
          puStack_140 = &UNK_180a3c3e0;
          uStack_128 = 0;
          puStack_138 = (uint8_t *)0x0;
          uStack_130 = 0;
          if (pMemoryAddress1 != (uint32_t *)0x0) {
            pMemoryAddress2 = (uint8_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
            *pMemoryAddress2 = 0;
            puStack_138 = pMemoryAddress2;
            uVar6 = FUN_18064e990(pMemoryAddress2);
            uStack_128 = CONCAT44(uStack_128._4_4_,uVar6);
          }
          memcpy(pMemoryAddress2,pMemoryAddress1,0x14);
        }
        iVar5 = FUN_180631780(pcVar19,uStack_68);
        uVar7 = (int)pcVar15 + iVar5;
        pcVar15 = (char *)(ulonglong)uVar7;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar7);
      }
      iVar5 = (int)plStack_120 + 1;
      plStack_120 = (longlong *)CONCAT44(plStack_120._4_4_,iVar5);
      param_6 = param_6 + 0x3088;
      param_3 = pcStack_70;
      lStack_d0 = param_6;
    } while (iVar5 < *param_9);
  }
  puStack_118 = &UNK_180a3c3e0;
  if (puStack_60 != (void *)0x0) {
    CleanupSystemResources();
  }
  puStack_110 = (void *)0x0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &SystemBufferTemplate;
  *puStack_c8 = &UNK_180a3c3e0;
  if (puStack_c8[1] != 0) {
    CleanupSystemResources();
  }
  puStack_c8[1] = 0;
  *(uint32_t *)(puStack_c8 + 3) = 0;
  *puStack_c8 = &SystemBufferTemplate;
  return pcVar15;
}
char * FUN_18062ed40(uint64_t param_1,uint64_t param_2,uint64_t *param_3,longlong param_4,
                    uint64_t param_5,uint64_t *param_6,uint64_t *param_7)
{
  uint32_t MemoryAddress;
  uint32_t BufferSize;
  uint32_t uVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  uint32_t *puVar7;
  uint32_t *puVar8;
  char *pcVar9;
  void *pMemoryAddress0;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  void *puStack_d0;
  uint32_t *puStack_c8;
  uint32_t uStack_c0;
  uint64_t uStack_b8;
  void *puStack_b0;
  uint32_t *puStack_a8;
  uint32_t uStack_a0;
  ulonglong uStack_98;
  void *puStack_90;
  uint32_t *puStack_88;
  uint32_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  longlong lStack_68;
  uint32_t uStack_58;
  uint64_t uStack_50;
  uint64_t *puStack_48;
  uint64_t *puStack_40;
  uStack_50 = 0xfffffffffffffffe;
  puStack_40 = param_7;
  pcVar14 = (char *)0x0;
  puStack_48 = param_3;
  lVar5 = FUN_180627ce0(param_7,&puStack_d0);
  pMemoryAddress0 = &DAT_18098bc73;
  if (*(void **)(lVar5 + 8) != (void *)0x0) {
    pMemoryAddress0 = *(void **)(lVar5 + 8);
  }
  FUN_180631420(pMemoryAddress0,param_4,param_5);
  puStack_d0 = &UNK_180a3c3e0;
  if (puStack_c8 != (uint32_t *)0x0) {
    CleanupSystemResources();
  }
  puStack_c8 = (uint32_t *)0x0;
  uStack_b8 = (ulonglong)uStack_b8._4_4_ << 0x20;
  puStack_d0 = &SystemBufferTemplate;
  pcVar12 = "base";
  do {
    pcVar13 = pcVar12;
    pcVar12 = pcVar13 + 1;
  } while (*pcVar12 != '\0');
  for (pcVar12 = *(char **)(param_4 + 0x30); pcVar11 = pcVar14, pcVar12 != (char *)0x0;
      pcVar12 = *(char **)(pcVar12 + 0x58)) {
    pcVar9 = *(char **)pcVar12;
    if (pcVar9 == (char *)0x0) {
      pcVar9 = (char *)0x180d48d24;
      pcVar6 = pcVar14;
    }
    else {
      pcVar6 = *(char **)(pcVar12 + 0x10);
    }
    if (pcVar6 == pcVar13 + -0x180a04ee3) {
      pcVar6 = pcVar6 + (longlong)pcVar9;
      pcVar11 = pcVar12;
      if (pcVar6 <= pcVar9) break;
      lVar5 = (longlong)&DAT_180a04ee4 - (longlong)pcVar9;
      while (*pcVar9 == pcVar9[lVar5]) {
        pcVar9 = pcVar9 + 1;
        if (pcVar6 <= pcVar9) goto LAB_18062ee56;
      }
    }
  }
LAB_18062ee56:
  *param_6 = pcVar11;
  if (pcVar11 != (char *)0x0) {
    pcVar12 = "decal_textures";
    do {
      pcVar13 = pcVar12;
      pcVar12 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    for (pcVar12 = *(char **)(pcVar11 + 0x30); pcVar11 = pcVar14, pcVar12 != (char *)0x0;
        pcVar12 = *(char **)(pcVar12 + 0x58)) {
      pcVar9 = *(char **)pcVar12;
      if (pcVar9 == (char *)0x0) {
        pcVar9 = (char *)0x180d48d24;
        pcVar6 = pcVar14;
      }
      else {
        pcVar6 = *(char **)(pcVar12 + 0x10);
      }
      if (pcVar6 == pcVar13 + -0x180a12dff) {
        pcVar6 = pcVar6 + (longlong)pcVar9;
        pcVar11 = pcVar12;
        if (pcVar6 <= pcVar9) break;
        lVar5 = (longlong)&DAT_180a12e00 - (longlong)pcVar9;
        while (*pcVar9 == pcVar9[lVar5]) {
          pcVar9 = pcVar9 + 1;
          if (pcVar6 <= pcVar9) goto LAB_18062eece;
        }
      }
    }
LAB_18062eece:
    *param_6 = pcVar11;
    if (pcVar11 == (char *)0x0) {
      puStack_90 = &UNK_180a3c3e0;
      uStack_78 = 0;
      puStack_88 = (uint32_t *)0x0;
      uStack_80 = 0;
      puVar7 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
      *(uint8_t *)puVar7 = 0;
      puStack_88 = puVar7;
      uVar3 = FUN_18064e990(puVar7);
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
      *puVar7 = 0x204c4d58;
      puVar7[1] = 0x65646f6e;
      puVar7[2] = 0x74697720;
      puVar7[3] = 0x616e2068;
      puVar7[4] = 0x2220656d;
      *(uint8_t *)(puVar7 + 5) = 0;
      uStack_80 = 0x14;
      puStack_b0 = &UNK_180a3c3e0;
      uStack_98 = 0;
      puStack_a8 = (uint32_t *)0x0;
      uStack_a0 = 0;
      puVar8 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x15,0x13);
      *(uint8_t *)puVar8 = 0;
      puStack_a8 = puVar8;
      uVar4 = FUN_18064e990(puVar8);
      uVar3 = puVar7[1];
      MemoryAddress = puVar7[2];
      BufferSize = puVar7[3];
      *puVar8 = *puVar7;
      puVar8[1] = uVar3;
      puVar8[2] = MemoryAddress;
      puVar8[3] = BufferSize;
      puVar8[4] = puVar7[4];
      uStack_a0 = 0x14;
      *(uint8_t *)(puVar8 + 5) = 0;
      uStack_98 = (ulonglong)uVar4;
      if (uVar4 < 0x23) {
        puVar8 = (uint32_t *)FUN_18062b8b0(_DAT_180c8ed18,puVar8,0x23,0x10,0x13);
        puStack_a8 = puVar8;
        uVar3 = FUN_18064e990(puVar8);
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar3);
      }
      *(uint64_t *)(puVar8 + 5) = 0x65745f6c61636564;
      puVar8[7] = 0x72757478;
      *(uint16_t *)(puVar8 + 8) = 0x7365;
      *(uint8_t *)((longlong)puVar8 + 0x22) = 0;
      uStack_a0 = 0x22;
      puStack_d0 = &UNK_180a3c3e0;
      uStack_b8 = 0;
      puStack_c8 = (uint32_t *)0x0;
      uStack_c0 = 0;
      puVar7 = (uint32_t *)FUN_18062b420(_DAT_180c8ed18,0x16,0x13);
      *(uint8_t *)puVar7 = 0;
      puStack_c8 = puVar7;
      uVar3 = FUN_18064e990(puVar7);
      uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
      *puVar7 = 0x6f632022;
      puVar7[1] = 0x20646c75;
      puVar7[2] = 0x20746f6e;
      puVar7[3] = 0x66206562;
      puVar7[4] = 0x646e756f;
      *(uint16_t *)(puVar7 + 5) = 0x21;
      uStack_c0 = 0x15;
      lVar5 = FUN_180627ce0(&puStack_b0,&puStack_70,&puStack_d0);
      pMemoryAddress0 = &DAT_18098bc73;
      if (*(void **)(lVar5 + 8) != (void *)0x0) {
        pMemoryAddress0 = *(void **)(lVar5 + 8);
      }
      FUN_180626f80(pMemoryAddress0);
      puStack_70 = &UNK_180a3c3e0;
      if (lStack_68 != 0) {
        CleanupSystemResources();
      }
      lStack_68 = 0;
      uStack_58 = 0;
      puStack_70 = &SystemBufferTemplate;
      puStack_d0 = &UNK_180a3c3e0;
      FUN_18064e900(puVar7);
    }
    uVar4 = FUN_180631780(pcVar11,&UNK_180a12e10);
    pcVar14 = (char *)(ulonglong)uVar4;
  }
  *param_3 = &UNK_180a3c3e0;
  if (param_3[1] != 0) {
    CleanupSystemResources();
  }
  param_3[1] = 0;
  *(uint32_t *)(param_3 + 3) = 0;
  *param_3 = &SystemBufferTemplate;
  *param_7 = &UNK_180a3c3e0;
  if (param_7[1] != 0) {
    CleanupSystemResources();
  }
  param_7[1] = 0;
  *(uint32_t *)(param_7 + 3) = 0;
  *param_7 = &SystemBufferTemplate;
  return pcVar14;
}
longlong FUN_18062f1f0(longlong param_1,longlong param_2,uint32_t param_3,longlong param_4)
{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  uint64_t *puVar7;
  char *pcVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  uint32_t MemoryAddress3;
  uint64_t MemoryAddress4;
  void *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  void *puStack_50;
  char *pcStack_48;
  int iStack_40;
  uint64_t uStack_38;
  MemoryAddress4 = 0xfffffffffffffffe;
  pcVar11 = (char *)0x0;
  FUN_180057110(param_4);
  FUN_180632160(param_1,param_3);
  MemoryAddress3 = 1;
  pcVar10 = "base";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  for (pcVar10 = *(char **)(param_2 + 0x30); pcVar4 = pcVar11, pcVar10 != (char *)0x0;
      pcVar10 = *(char **)(pcVar10 + 0x58)) {
    pcVar5 = *(char **)pcVar10;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x180d48d24;
      pcVar3 = pcVar11;
    }
    else {
      pcVar3 = *(char **)(pcVar10 + 0x10);
    }
    if (pcVar3 == pcVar8 + -0x180a04ee3) {
      pcVar3 = pcVar3 + (longlong)pcVar5;
      pcVar4 = pcVar10;
      if (pcVar3 <= pcVar5) break;
      lVar6 = (longlong)&DAT_180a04ee4 - (longlong)pcVar5;
      while (*pcVar5 == pcVar5[lVar6]) {
        pcVar5 = pcVar5 + 1;
        if (pcVar3 <= pcVar5) goto LAB_18062f2b6;
      }
    }
  }
LAB_18062f2b6:
  pcVar10 = "file";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  puVar7 = *(uint64_t **)(pcVar4 + 0x30);
  do {
    if (puVar7 == (uint64_t *)0x0) {
      return param_1;
    }
    pcVar10 = (char *)*puVar7;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar7[2];
    }
    if (pcVar4 == pcVar8 + -0x180a0794b) {
      pcVar4 = pcVar10 + (longlong)pcVar4;
      if (pcVar4 <= pcVar10) break;
      lVar6 = (longlong)&UNK_180a0794c - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_18062f340;
      }
    }
    puVar7 = (uint64_t *)puVar7[0xb];
  } while( true );
LAB_18062f340:
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  pcStack_48 = (char *)0x0;
  iStack_40 = 0;
  pcVar10 = "type";
  do {
    pcVar8 = pcVar10;
    pcVar10 = pcVar8 + 1;
  } while (*pcVar10 != '\0');
  for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar10 = (char *)*puVar9;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar4 = pcVar11;
    }
    else {
      pcVar4 = (char *)puVar9[2];
    }
    if (pcVar4 == pcVar8 + -0x180a0ee2f) {
      pcVar4 = pcVar4 + (longlong)pcVar10;
      if (pcVar4 <= pcVar10) {
LAB_18062f3b3:
        lVar6 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar6 = puVar9[1];
        }
        FUN_180627c50(&puStack_50,lVar6,pcVar4,puVar9,MemoryAddress3,MemoryAddress4);
        break;
      }
      lVar6 = (longlong)&UNK_180a0ee30 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_18062f3b3;
      }
    }
  }
  if (iStack_40 == *(int *)(param_1 + 0x10)) {
    if (iStack_40 == 0) {
LAB_18062f41e:
      if (*(int *)(param_1 + 0x10) != 0) goto LAB_18062f426;
      bVar12 = true;
    }
    else {
      pcVar10 = pcStack_48;
      do {
        cVar1 = *pcVar10;
        cVar2 = pcVar10[*(longlong *)(param_1 + 8) - (longlong)pcStack_48];
        if (cVar1 != cVar2) break;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      bVar12 = cVar1 == cVar2;
    }
  }
  else {
    if (iStack_40 == 0) goto LAB_18062f41e;
LAB_18062f426:
    bVar12 = false;
  }
  if (bVar12) {
    puStack_70 = &UNK_180a3c3e0;
    uStack_58 = 0;
    lStack_68 = 0;
    iStack_60 = 0;
    pcVar10 = "name";
    do {
      pcVar8 = pcVar10;
      pcVar10 = pcVar8 + 1;
    } while (*pcVar10 != '\0');
    for (puVar9 = (uint64_t *)puVar7[8]; puVar9 != (uint64_t *)0x0;
        puVar9 = (uint64_t *)puVar9[6]) {
      pcVar10 = (char *)*puVar9;
      if (pcVar10 == (char *)0x0) {
        pcVar10 = (char *)0x180d48d24;
        pcVar4 = pcVar11;
      }
      else {
        pcVar4 = (char *)puVar9[2];
      }
      if (pcVar4 == pcVar8 + -0x180a03a83) {
        pcVar4 = pcVar4 + (longlong)pcVar10;
        if (pcVar4 <= pcVar10) {
LAB_18062f4a5:
          lVar6 = 0x180d48d24;
          if (puVar9[1] != 0) {
            lVar6 = puVar9[1];
          }
          FUN_180627c50(&puStack_70,lVar6);
          break;
        }
        lVar6 = (longlong)&DAT_180a03a84 - (longlong)pcVar10;
        while (*pcVar10 == pcVar10[lVar6]) {
          pcVar10 = pcVar10 + 1;
          if (pcVar4 <= pcVar10) goto LAB_18062f4a5;
        }
      }
    }
    puVar9 = *(uint64_t **)(param_4 + 8);
    if (puVar9 < *(uint64_t **)(param_4 + 0x10)) {
      *(uint64_t **)(param_4 + 8) = puVar9 + 4;
      *puVar9 = &SystemBufferTemplate;
      puVar9[1] = 0;
      *(uint32_t *)(puVar9 + 2) = 0;
      *puVar9 = &UNK_180a3c3e0;
      puVar9[3] = 0;
      puVar9[1] = 0;
      *(uint32_t *)(puVar9 + 2) = 0;
      FUN_1806277c0(puVar9,iStack_60);
      if (iStack_60 != 0) {
        memcpy(puVar9[1],lStack_68,iStack_60 + 1);
      }
      if (lStack_68 != 0) {
        *(uint32_t *)(puVar9 + 2) = 0;
        if ((uint8_t *)puVar9[1] != (uint8_t *)0x0) {
          *(uint8_t *)puVar9[1] = 0;
        }
        *(uint32_t *)((longlong)puVar9 + 0x1c) = 0;
      }
    }
    else {
      FUN_180059820(param_4,&puStack_70);
    }
    puStack_70 = &UNK_180a3c3e0;
    if (lStack_68 != 0) {
      CleanupSystemResources();
    }
    lStack_68 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    puStack_70 = &SystemBufferTemplate;
  }
  puVar7 = (uint64_t *)puVar7[0xb];
  puStack_50 = &UNK_180a3c3e0;
  if (pcStack_48 != (char *)0x0) {
    CleanupSystemResources();
  }
  if (puVar7 == (uint64_t *)0x0) {
    return param_1;
  }
  goto LAB_18062f340;
}
  DAT_180c95fea = 0;
  if (cVar1 != '\0') {
    FUN_180626f80(&UNK_180a3cc28,param_1);
  }
  if (lVar3 != -1) {
    LOCK();
    _DAT_180c8ed64 = _DAT_180c8ed64 + -1;
    UNLOCK();
    CloseHandle(alStack_3d0[0]);
    alStack_3d0[0] = -1;
  }
  puStack_3b0 = &UNK_180a3c3e0;
  if (puStack_3a8 == (void *)0x0) {
    puStack_3a8 = (void *)0x0;
    uStack_398 = 0;
    puStack_3b0 = &SystemBufferTemplate;
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_408);
  }
  CleanupSystemResources();
}
int FUN_180631780(uint64_t param_1,char *param_2)
{
  char *pcVar1;
  char cVar2;
  uint64_t *puVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  puVar3 = (uint64_t *)FUN_18005d4b0(param_1,param_2,0);
  iVar7 = 0;
  if (puVar3 == (uint64_t *)0x0) {
    return 0;
  }
  while (iVar7 = iVar7 + 1, param_2 == (char *)0x0) {
    puVar3 = (uint64_t *)puVar3[0xb];
LAB_18063182e:
    if (puVar3 == (uint64_t *)0x0) {
      return iVar7;
    }
  }
  cVar2 = *param_2;
  pcVar6 = param_2;
  while (cVar2 != '\0') {
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar6;
  }
  puVar3 = (uint64_t *)puVar3[0xb];
  if (puVar3 == (uint64_t *)0x0) {
    return iVar7;
  }
  do {
    pcVar4 = (char *)*puVar3;
    if (pcVar4 == (char *)0x0) {
      lVar5 = 0;
      pcVar4 = (char *)0x180d48d24;
    }
    else {
      lVar5 = puVar3[2];
    }
    if (lVar5 == (longlong)pcVar6 - (longlong)param_2) {
      pcVar1 = pcVar4 + lVar5;
      if (pcVar1 <= pcVar4) goto LAB_18063182e;
      lVar5 = (longlong)param_2 - (longlong)pcVar4;
      while (*pcVar4 == pcVar4[lVar5]) {
        pcVar4 = pcVar4 + 1;
        if (pcVar1 <= pcVar4) goto LAB_18063182e;
      }
    }
    puVar3 = (uint64_t *)puVar3[0xb];
    if (puVar3 == (uint64_t *)0x0) {
      return iVar7;
    }
  } while( true );
}
int FUN_1806317a0(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *unaff_RBX;
  longlong lVar4;
  char *pcVar5;
  int in_R11D;
  while (in_R11D = in_R11D + 1, unaff_RBX == (char *)0x0) {
    param_3 = (uint64_t *)param_3[0xb];
LAB_18063182e:
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
  }
  cVar2 = *unaff_RBX;
  pcVar5 = unaff_RBX;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  param_3 = (uint64_t *)param_3[0xb];
  if (param_3 == (uint64_t *)0x0) {
    return in_R11D;
  }
  do {
    pcVar3 = (char *)*param_3;
    if (pcVar3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = (char *)0x180d48d24;
    }
    else {
      lVar4 = param_3[2];
    }
    if (lVar4 == (longlong)pcVar5 - (longlong)unaff_RBX) {
      pcVar1 = pcVar3 + lVar4;
      if (pcVar1 <= pcVar3) goto LAB_18063182e;
      lVar4 = (longlong)unaff_RBX - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar1 <= pcVar3) goto LAB_18063182e;
      }
    }
    param_3 = (uint64_t *)param_3[0xb];
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
  } while( true );
}
int FUN_18063182a(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *unaff_RBX;
  char *unaff_RDI;
  longlong lVar4;
  char *pcVar5;
  int in_R11D;
  do {
    param_3 = (uint64_t *)param_3[0xb];
LAB_18063182e:
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
    in_R11D = in_R11D + 1;
  } while (unaff_RBX == (char *)0x0);
  cVar2 = *unaff_RBX;
  pcVar5 = unaff_RBX;
  while (cVar2 != '\0') {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  param_3 = (uint64_t *)param_3[0xb];
  if (param_3 == (uint64_t *)0x0) {
    return in_R11D;
  }
  do {
    if ((char *)*param_3 == (char *)0x0) {
      lVar4 = 0;
      pcVar3 = unaff_RDI;
    }
    else {
      lVar4 = param_3[2];
      pcVar3 = (char *)*param_3;
    }
    if (lVar4 == (longlong)pcVar5 - (longlong)unaff_RBX) {
      pcVar1 = pcVar3 + lVar4;
      if (pcVar1 <= pcVar3) goto LAB_18063182e;
      lVar4 = (longlong)unaff_RBX - (longlong)pcVar3;
      while (*pcVar3 == pcVar3[lVar4]) {
        pcVar3 = pcVar3 + 1;
        if (pcVar1 <= pcVar3) goto LAB_18063182e;
      }
    }
    param_3 = (uint64_t *)param_3[0xb];
    if (param_3 == (uint64_t *)0x0) {
      return in_R11D;
    }
  } while( true );
}
uint32_t FUN_180631845(void)
{
  uint32_t in_R11D;
  return in_R11D;
}
longlong FUN_180631850(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t uVar5;
  void *puStack_30;
  char *pcStack_28;
  uVar5 = 0xfffffffffffffffe;
  ModuleInitializationResult = FUN_1800a02a0();
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3cc48,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3cbe0,param_3,param_3 + 4,uVar5);
  puStack_30 = &UNK_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong FUN_180631960(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  void *puStack_30;
  char *pcStack_28;
  ModuleInitializationResult = FUN_1800a02a0();
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3c9ec,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3cc0c,param_3,param_3 + 4,param_3 + 8);
  puStack_30 = &UNK_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong FUN_180631a80(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  void *puStack_30;
  char *pcStack_28;
  ModuleInitializationResult = FUN_1800a02a0(param_1,&UNK_180a0696c,param_3,param_4,0xfffffffffffffffe);
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3cc04,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3cc1c,param_3,param_3 + 4);
  puStack_30 = &UNK_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong FUN_180631b90(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  int LoopCounter;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  uint64_t uVar6;
  void *puStack_30;
  char *pcStack_28;
  uVar6 = 0xfffffffffffffffe;
  lVar2 = FUN_1800a02a0();
  if (lVar2 == 0) {
    return 0;
  }
  lVar5 = 0x180d48d24;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar5);
  if (*pcStack_28 != '\0') {
    lVar2 = 0;
    do {
      lVar3 = strchr(&UNK_180a3c9ec,(int)pcStack_28[lVar2]);
      if (lVar3 != 0) {
        pcStack_28[lVar2] = ' ';
      }
      lVar2 = lVar2 + 1;
    } while (pcStack_28[lVar2] != '\0');
  }
  pcVar4 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar4 = pcStack_28;
  }
  LoopCounter = FUN_18010cbc0(pcVar4,&UNK_180a3c9f8,param_3,param_3 + 4,param_3 + 8,
                        (uint32_t *)(param_3 + 0xc),uVar6);
  if (LoopCounter == 3) {
    *(uint32_t *)(param_3 + 0xc) = 0x3f800000;
  }
  puStack_30 = &UNK_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar5;
}
longlong FUN_180631cc0(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  int64_t ModuleInitializationResult;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  uint64_t uVar5;
  void *puStack_30;
  char *pcStack_28;
  uVar5 = 0xfffffffffffffffe;
  ModuleInitializationResult = FUN_1800a02a0(param_1,&UNK_180a16818);
  if (ModuleInitializationResult == 0) {
    return 0;
  }
  lVar4 = 0x180d48d24;
  if (*(longlong *)(ModuleInitializationResult + 8) != 0) {
    lVar4 = *(longlong *)(ModuleInitializationResult + 8);
  }
  InitializeSystemBuffer(&puStack_30,lVar4);
  if (*pcStack_28 != '\0') {
    ModuleInitializationResult = 0;
    do {
      lVar2 = strchr(&UNK_180a3cc04,(int)pcStack_28[ModuleInitializationResult]);
      if (lVar2 != 0) {
        pcStack_28[ModuleInitializationResult] = ' ';
      }
      ModuleInitializationResult = ModuleInitializationResult + 1;
    } while (pcStack_28[ModuleInitializationResult] != '\0');
  }
  pcVar3 = "";
  if (pcStack_28 != (char *)0x0) {
    pcVar3 = pcStack_28;
  }
  FUN_18010cbc0(pcVar3,&UNK_180a3c9f8,param_3 + 4,param_3 + 8,param_3 + 0xc,param_3,uVar5);
  puStack_30 = &UNK_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
    CleanupSystemResources();
  }
  return lVar4;
}
longlong FUN_180631de0(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  longlong *pModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  void *puStack_30;
  char *pcStack_28;
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    pModuleInitializationResult = (longlong *)(lVar2 + 8);
    lVar2 = 0x180d48d24;
    if (*pModuleInitializationResult != 0) {
      lVar2 = *pModuleInitializationResult;
    }
    InitializeSystemBuffer(&puStack_30,lVar2);
    if (*pcStack_28 != '\0') {
      lVar5 = 0;
      do {
        lVar3 = strchr(&UNK_180a3cc04,(int)pcStack_28[lVar5]);
        if (lVar3 != 0) {
          pcStack_28[lVar5] = ' ';
        }
        lVar5 = lVar5 + 1;
      } while (pcStack_28[lVar5] != '\0');
    }
    pcVar4 = "";
    if (pcStack_28 != (char *)0x0) {
      pcVar4 = pcStack_28;
    }
    FUN_18010cbc0(pcVar4,&UNK_180a3ccc8,param_3,param_3 + 4,param_3 + 8,param_3 + 0x10,
                  param_3 + 0x14,param_3 + 0x18,param_3 + 0x20,param_3 + 0x24,param_3 + 0x28);
    puStack_30 = &UNK_180a3c3e0;
    if (pcStack_28 != (char *)0x0) {
      CleanupSystemResources();
    }
  }
  return lVar2;
}
longlong FUN_180631f30(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  longlong *pModuleInitializationResult;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  uint64_t uVar6;
  void *puStack_58;
  char *pcStack_50;
  uVar6 = 0xfffffffffffffffe;
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    pModuleInitializationResult = (longlong *)(lVar2 + 8);
    lVar2 = 0x180d48d24;
    if (*pModuleInitializationResult != 0) {
      lVar2 = *pModuleInitializationResult;
    }
    InitializeSystemBuffer(&puStack_58,lVar2);
    if (*pcStack_50 != '\0') {
      lVar5 = 0;
      do {
        lVar3 = strchr(&UNK_180a3cc04,(int)pcStack_50[lVar5]);
        if (lVar3 != 0) {
          pcStack_50[lVar5] = ' ';
        }
        lVar5 = lVar5 + 1;
      } while (pcStack_50[lVar5] != '\0');
    }
    pcVar4 = "";
    if (pcStack_50 != (char *)0x0) {
      pcVar4 = pcStack_50;
    }
    FUN_18010cbc0(pcVar4,&UNK_180a3cca0,param_3,param_3 + 4,param_3 + 8,param_3 + 0xc,param_3 + 0x10
                  ,param_3 + 0x14,param_3 + 0x18,param_3 + 0x1c,param_3 + 0x20,param_3 + 0x24,
                  param_3 + 0x28,param_3 + 0x2c,param_3 + 0x30,param_3 + 0x34,param_3 + 0x38,
                  param_3 + 0x3c,lVar2,uVar6);
    puStack_58 = &UNK_180a3c3e0;
    if (pcStack_50 != (char *)0x0) {
      CleanupSystemResources();
    }
  }
  return lVar2;
}
longlong FUN_180632100(uint64_t param_1,uint64_t param_2,uint64_t *param_3)
{
  uint64_t MemoryAddress;
  longlong lVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint8_t auStack_18 [16];
  lVar2 = FUN_1800a02a0();
  if (lVar2 != 0) {
    lVar4 = 0x180d48d24;
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar4 = *(longlong *)(lVar2 + 8);
    }
    puVar3 = (uint64_t *)FUN_1802c0460(auStack_18,lVar4);
    MemoryAddress = puVar3[1];
    *param_3 = *puVar3;
    param_3[1] = MemoryAddress;
    return lVar4;
  }
  return 0;
}
uint64_t FUN_18063211a(uint64_t param_1)
{
  uint64_t MemoryAddress;
  uint64_t *pBufferSize;
  uint64_t uVar3;
  uint64_t *unaff_RDI;
  bool in_ZF;
  uint8_t auStackX_20 [8];
  uVar3 = 0x180d48d24;
  if (!in_ZF) {
    uVar3 = param_1;
  }
  pBufferSize = (uint64_t *)FUN_1802c0460(auStackX_20,uVar3);
  MemoryAddress = pBufferSize[1];
  *unaff_RDI = *pBufferSize;
  unaff_RDI[1] = MemoryAddress;
  return uVar3;
}
  DAT_180bf66d8 = 0;
  FUN_1808fc820(FUN_18064fe90);
  FUN_180650050(&UNK_18064ffc0);
  lVar3 = 0;
  _DAT_180c96858 = FUN_1806500b0;
  pMemoryAddress = (uint32_t *)&DAT_180bfbd80;
  lVar2 = 0x16;
  do {
    if (pMemoryAddress[1] == 0) {
      FUN_180650490(pMemoryAddress);
    }
    if (lVar3 != 2) {
      FUN_1806502e0(&UNK_180a3db60,*(uint64_t *)(pMemoryAddress + 4),*pMemoryAddress);
    }
    lVar3 = lVar3 + 1;
    pMemoryAddress = pMemoryAddress + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (_DAT_180bfbf64 == 0) {
    FUN_180650490(&DAT_180bfbf60);
  }
  _DAT_180bf7308 = (longlong)_DAT_180bfbf60;
  if (_DAT_180bfbf7c == 0) {
    FUN_180650490(&DAT_180bfbf78);
  }
  _DAT_180bf72a8 = (longlong)_DAT_180bfbf78;
  FUN_18064fcc0();
  if (DAT_180c8efc8 != '\0') {
    FUN_1806502e0(&UNK_180a3d970);
  }
  return;
}
  DAT_180c8ecef = 1;
  if (DAT_180d49130 == '\0') {
    DAT_180d49130 = '\x01';
    BufferSize = FlsAlloc(&UNK_18064f970);
    _DAT_180bf664c = BufferSize;
    *(uint64_t *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) + 0x10) =
         0x180bf4000;
    FlsSetValue(BufferSize);
  }
  FUN_1806502e0(&UNK_180a3d988,&ExceptionList);
  ModuleInitializationResult = cpuid_Extended_Feature_Enumeration_info(7);
  DAT_180c8f000 = (byte)(*(uint *)(ModuleInitializationResult + 8) >> 4) & 1;
  GetSystemInfo(auStack_40);
  if (uStack_3c != 0) {
    _DAT_180bf66a8 = (ulonglong)uStack_3c;
  }
  FUN_18064f4b0();
  FUN_1806502e0(&UNK_180a3d940,0);
  FUN_18064f980();
  plVar3 = (longlong *)FUN_18064e2a0();
  if ((void *)(*plVar3 + 0x3d8) == &DAT_180c8ed80) {
    memset(&DAT_180c8ed80,0,0x240);
  }
  memset((void *)(*plVar3 + 0x3d8),0,0x240);
}
  DAT_180d49131 = 1;
  FlsSetValue(_DAT_180bf664c,0);
  FlsFree(_DAT_180bf664c);
  FUN_18064e0d0(*(uint64_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x10),1);
  if (_DAT_180bfbd9c == 0) {
    FUN_180650490(&DAT_180bfbd98);
  }
  if (_DAT_180bfbd98 == 0) {
    if (_DAT_180bfbdb4 == 0) {
      FUN_180650490(&DAT_180bfbdb0);
    }
    if (_DAT_180bfbdb0 == 0) goto LAB_18064ff6c;
  }
  pModuleInitializationResult = (longlong *)FUN_18064e2a0();
  pBufferSize = (void *)(*pModuleInitializationResult + 0x3d8);
  if (pBufferSize != &DAT_180c8ed80) {
    FUN_1806470a0();
    memset(pBufferSize,0,0x240);
  }
  FUN_1806478d0();
LAB_18064ff6c:
  FUN_1806502e0(&UNK_180a3d958,_DAT_180bf4b20);
  DAT_180bf66d8 = 1;
  return;
}
uint32_t FUN_18064ff90(int param_1)
{
  if (*(int *)(&DAT_180bfbd84 + (longlong)param_1 * 0x18) == 0) {
    FUN_180650490(&DAT_180bfbd80 + (longlong)param_1 * 0x18);
  }
  return *(uint32_t *)(&DAT_180bfbd80 + (longlong)param_1 * 0x18);
}
    DAT_180c8f020 = 0;
    return;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  MemoryAddress = (uint)lVar2;
  if (0x1fff < MemoryAddress) {
    MemoryAddress = 0x1fff;
  }
  memcpy(&DAT_180c8f020,param_1,(longlong)(int)MemoryAddress);
}
  DAT_180c8f020 = 0;
  return;
}
uint64_t FUN_180653580(uint64_t param_1)
{
  uint64_t MemoryAddress;
  longlong lVar2;
  MemoryAddress = FUN_18062b420(_DAT_180c8ed18,param_1,0x19);
  lVar2 = FUN_18064e990(MemoryAddress);
  LOCK();
  _DAT_180c967c8 = _DAT_180c967c8 + lVar2;
  UNLOCK();
  return MemoryAddress;
}
uint64_t FUN_1806535c0(uint64_t param_1,uint64_t param_2)
{
  int64_t ModuleInitializationResult;
  uint64_t BufferSize;
  ModuleInitializationResult = FUN_18064e990();
  BufferSize = FUN_18062b680(_DAT_180c8ed18,param_1,param_2,0x19);
  LOCK();
  _DAT_180c967c8 = _DAT_180c967c8 - ModuleInitializationResult;
  UNLOCK();
  ModuleInitializationResult = FUN_18064e990(BufferSize);
  LOCK();
  _DAT_180c967c8 = _DAT_180c967c8 + ModuleInitializationResult;
  UNLOCK();
  return BufferSize;
}
longlong FUN_180653630(longlong *param_1)
{
  int *pLoopCounter;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  lVar2 = FUN_18064e990();
  lVar3 = _DAT_180c967c8;
  LOCK();
  lVar2 = _DAT_180c967c8 - lVar2;
  _DAT_180c967c8 = lVar2;
  UNLOCK();
  if (param_1 == (longlong *)0x0) {
    return lVar3;
  }
  uVar4 = (ulonglong)param_1 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar2 = uVar4 + 0x80 + ((longlong)param_1 - uVar4 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      lVar3 = *(longlong *)(lVar2 + 0x20);
      *param_1 = lVar3;
      *(longlong **)(lVar2 + 0x20) = param_1;
      pLoopCounter = (int *)(lVar2 + 0x18);
      *pLoopCounter = *pLoopCounter + -1;
      if (*pLoopCounter == 0) {
        lVar3 = FUN_18064d630();
        return lVar3;
      }
    }
    else {
      lVar3 = func_0x00018064e870(uVar4,CONCAT71(0xff000000,
                                                 *(void ***)(uVar4 + 0x70) == &ExceptionList),
                                  param_1,uVar4,0xfffffffffffffffe);
    }
  }
  return lVar3;
}
      DAT_180d4913c = '\x01';
      param_1 = uStack_378;
    }
    pfVar3 = afStack_2e8;
    lVar6 = 0;
    lVar9 = 0x20;
    lVar7 = 0x20;
    do {
      fVar28 = param_5 * *(float *)(lVar6 + 0x180d4a0a8);
      fVar24 = param_5 * *(float *)(lVar6 + 0x180d4a0a4);
      fVar30 = param_5 * *(float *)(lVar6 + 0x180d4a0a0);
      fVar20 = fVar30 * *param_3 + fVar24 * param_3[4] + fVar28 * param_3[8] + param_3[0xc];
      fVar21 = fVar30 * param_3[1] + fVar24 * param_3[5] + fVar28 * param_3[9] + param_3[0xd];
      fVar22 = fVar30 * param_3[2] + fVar24 * param_3[6] + fVar28 * param_3[10] + param_3[0xe];
      fVar24 = fVar30 * param_3[3] + fVar24 * param_3[7] + fVar28 * param_3[0xb] + param_3[0xf];
      *(float *)((longlong)afStack_2e8 + lVar6) = fVar20;
      *(float *)((longlong)afStack_2e8 + lVar6 + 4) = fVar21;
      *(float *)((longlong)&uStack_2e0 + lVar6) = fVar22;
      *(float *)((longlong)&uStack_2e0 + lVar6 + 4) = fVar24;
      if (param_2 != 0) {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(param_2 + 0x2908) == 0) {
          FUN_1801a9fd0(param_2,pfVar3,0x31b189,&uStack_378);
          fVar20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = CONCAT44(fVar21,fVar20);
          uStack_360 = CONCAT44(fVar24,fVar22);
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          FUN_1801aa0f0(param_2,&uStack_368,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *(float *)((longlong)&uStack_2e0 + lVar6) = fVar20 + 0.01;
      }
      pfVar3 = pfVar3 + 4;
      lVar6 = lVar6 + 0x10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    fVar20 = param_3[0xe];
    fVar21 = param_3[0xd];
    fVar22 = param_3[0xc];
    fVar24 = param_3[9];
    fVar28 = param_3[8];
    fVar30 = param_3[10];
    uStack_36c = 0x7f7fffff;
    pfVar3 = afStack_2e8;
    lVar6 = 0x20;
    do {
      fVar26 = pfVar3[2] - fVar20;
      fVar27 = pfVar3[1] - fVar21;
      fVar29 = *pfVar3 - fVar22;
      fVar23 = fVar29 * fVar28 + fVar27 * fVar24 + fVar26 * fVar30;
      fVar26 = fVar26 - fVar23 * fVar30;
      fVar27 = fVar27 - fVar23 * fVar24;
      fVar29 = fVar29 - fVar23 * fVar28;
      fVar23 = fVar26 * fVar26 + fVar27 * fVar27 + fVar29 * fVar29;
      aMemoryAddress3 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar25 = aMemoryAddress3._0_4_;
      fVar25 = fVar25 * 0.5 * (3.0 - fVar23 * fVar25 * fVar25);
      fStack_370 = fVar25 * fVar26 * param_5 + fVar20;
      fVar23 = fVar25 * fVar27 * param_5 + fVar21;
      fVar25 = fVar25 * fVar29 * param_5 + fVar22;
      uStack_378 = CONCAT44(fVar23,fVar25);
      *pfVar3 = fVar25;
      pfVar3[1] = fVar23;
      pfVar3[2] = fStack_370;
      pfVar3[3] = 3.4028235e+38;
      pfVar3 = pfVar3 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (param_2 != 0) {
      pfVar3 = (float *)&uStack_2e0;
      pfVar5 = afStack_2e8;
      do {
        uStack_378 = uStack_378 & 0xffffffff00000000;
        if (*(longlong *)(param_2 + 0x2908) == 0) {
          FUN_1801a9fd0(param_2,pfVar5,0x31b189,&uStack_378);
          fVar20 = (float)uStack_378;
        }
        else {
          cStack_324 = '\0';
          uStack_348 = 0;
          uStack_340 = 0x7f7fffff3f800000;
          fStack_328 = 0.0;
          uStack_338 = 0;
          uStack_330 = 0;
          uStack_368 = *(uint64_t *)(pfVar3 + -2);
          uStack_360 = *(uint64_t *)pfVar3;
          uStack_380 = CONCAT31(uStack_380._1_3_,1);
          uStack_388 = 0;
          FUN_1801aa0f0(param_2,&uStack_368,0,auStack_358);
          fVar20 = fStack_328;
          if (cStack_324 == '\0') {
            fVar20 = 0.0;
          }
        }
        *pfVar3 = fVar20 + 0.01;
        pfVar5 = pfVar5 + 4;
        pfVar3 = pfVar3 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar4 = 0;
    lVar6 = 0;
    do {
      lVar7 = 0;
      if (uVar4 != 0x1f) {
        lVar7 = lVar6 + 1;
      }
      if (((param_12 == '\0') || ((uVar4 & 1) != 0)) &&
         (cVar1 = FUN_180635b80((double)((float)(int)uVar4 * 0.19634955),SUB84((double)param_6,0),
                                (double)param_7), cVar1 != '\0')) {
        fStack_370 = *(float *)(&uStack_2e0 + lVar7 * 2) - *(float *)(&uStack_2e0 + lVar6 * 2);
        uStack_378 = CONCAT44(afStack_2e8[lVar7 * 4 + 1] - afStack_2e8[lVar6 * 4 + 1],
                              afStack_2e8[lVar7 * 4] - afStack_2e8[lVar6 * 4]);
        uStack_36c = 0x7f7fffff;
        uStack_380 = 0;
        uStack_388 = CONCAT31(uStack_388._1_3_,param_11);
        FUN_180633110(param_1,afStack_2e8 + lVar6 * 4,&uStack_378,param_8);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar4 < 0x20);
  }
  StringIndex = _Mtx_unlock(param_1);
  if (StringIndex != 0) {
    __Throw_C_error_std__YAXH_Z(StringIndex);
  }
  FUN_1808fc050(uStack_e8 ^ (ulonglong)auStack_3a8);
}
                    DAT_1ac76f654 = DAT_1ac76f654 + cVar12;
                    if (DAT_1ac76f654 != '\0' && bVar27 == DAT_1ac76f654 < '\0') {
                      out((short)param_2,LoopCounter1);
                      halt_baddata();
                    }
                    in_OF = SCARRY1((char)*unaff_RDI,cVar14);
                    *unaff_RDI = (code)((char)*unaff_RDI + cVar14);
                    in_SF = (char)*unaff_RDI < '\0';
                    in_ZF = *unaff_RDI == (code)0x0;
                    goto LAB_180767fd9;
                  }
                }
                pBufferSize6 = puVar9;
                *(void **)((longlong)pBufferSize6 + -8) = &UNK_18076804b;
                (*unaff_RDI)();
                *(uint64_t *)((longlong)pBufferSize6 + -8) = 0x180768051;
                CoUninitialize();
LAB_180768051:
                *(uint64_t *)((longlong)pBufferSize6 + -8) = 0x180768059;
                _endthreadex(0);
                return;
              }
              cVar14 = (char)*in_RAX;
            }
            in_RAX = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar10 + cVar14);
LAB_180768028_1:
            pStringIndex = (int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x75);
            *pStringIndex = *pStringIndex + (int)param_1;
            *(int *)(((ulonglong)in_RAX & 0xffffffffffffff20) - 0x17ffffff) = (int)pBufferSize3;
            halt_baddata();
          }
        }
      }
    }
  }
  param_4 = 0x266;
  *(uint8_t *)((longlong)register0x00000020 + 0x20) = 1;
LAB_18076802d:
  uVar7 = *(uint64_t *)(pcVar13 + 0x1a0);
  *(uint8_t **)((longlong)register0x00000020 + -8) = &LAB_180768039;
  FUN_180742250(uVar7,pcVar15,param_3,param_4);
}
    DAT_180c2e030 = '\x01';
  }
  if (param_3 != (int *)0x0) {
    *param_3 = ((param_2 + 1) / 2) * 0x48d0;
  }
  if (param_4 != (uint32_t *)0x0) {
    *param_4 = 0x480;
  }
  return 0;
}
uint64_t FUN_1807c1ec0(int param_1)
{
  byte bVar1;
  int StringIndex;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  ulonglong MemoryAddress0;
  ulonglong MemoryAddress1;
  int *pLoopCounter2;
  uint MemoryAddress3;
  longlong *pModuleInitializationResult4;
  longlong ModuleInitializationResult5;
  uint MemoryAddress6;
  int LoopCounter7;
  int LoopCounter8;
  float fVar19;
  uint64_t BufferSize0;
  uint64_t extraout_XMM0_Qb;
  float fVar22;
  uint8_t in_XMM2 [16];
  uint8_t aBufferSize1 [16];
  float fVar23;
  float fVar24;
  uint8_t unaff_XMM6 [16];
  uint8_t aBufferSize5 [16];
  ulonglong uVar9;
  pModuleInitializationResult4 = (longlong *)&DAT_180be5740;
  LoopCounter8 = 0;
  do {
    uVar9 = 0;
    ModuleInitializationResult5 = *pModuleInitializationResult4;
    MemoryAddress6 = 0x10 >> ((byte)LoopCounter8 & 0x1f);
    MemoryAddress3 = 0x40 >> ((byte)LoopCounter8 & 0x1f);
    MemoryAddress0 = uVar9;
    MemoryAddress1 = uVar9;
    if ((MemoryAddress6 != 0) && (MemoryAddress0 = 0, 3 < MemoryAddress6)) {
      aBufferSize1._0_4_ = (float)(int)MemoryAddress3;
      aBufferSize1._4_4_ = aBufferSize1._0_4_;
      aBufferSize1._8_4_ = aBufferSize1._0_4_;
      aBufferSize1._12_4_ = aBufferSize1._0_4_;
      uVar3 = MemoryAddress6 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      aBufferSize5 = rcpps(unaff_XMM6,aBufferSize1);
      fVar24 = aBufferSize5._0_4_;
      fVar19 = aBufferSize5._4_4_;
      fVar22 = aBufferSize5._8_4_;
      fVar23 = aBufferSize5._12_4_;
      unaff_XMM6._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aBufferSize1._0_4_;
      unaff_XMM6._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aBufferSize1._0_4_;
      unaff_XMM6._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aBufferSize1._0_4_;
      unaff_XMM6._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aBufferSize1._0_4_;
      do {
        BufferSize0 = thunk_FUN_1808fe1a0();
        aBufferSize5._0_4_ = (float)BufferSize0 * 2.0;
        aBufferSize5._4_4_ = (float)((ulonglong)BufferSize0 >> 0x20) * 2.0;
        aBufferSize5._8_4_ = (float)extraout_XMM0_Qb * 2.0;
        aBufferSize5._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) * 2.0;
        uVar8 = (int)uVar9 + 4;
        uVar9 = (ulonglong)uVar8;
        aBufferSize1 = rcpps(in_XMM2,aBufferSize5);
        fVar24 = aBufferSize1._0_4_;
        fVar19 = aBufferSize1._4_4_;
        fVar22 = aBufferSize1._8_4_;
        fVar23 = aBufferSize1._12_4_;
        in_XMM2._0_4_ = (fVar24 + fVar24) - fVar24 * fVar24 * aBufferSize5._0_4_;
        in_XMM2._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * aBufferSize5._4_4_;
        in_XMM2._8_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * aBufferSize5._8_4_;
        in_XMM2._12_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * aBufferSize5._12_4_;
        *(uint8_t (*) [16])(ModuleInitializationResult5 + MemoryAddress1 * 4) = in_XMM2;
        MemoryAddress1 = MemoryAddress1 + 4;
        MemoryAddress0 = uVar9;
      } while ((int)uVar8 < (int)(MemoryAddress6 - uVar3));
    }
    if ((int)MemoryAddress0 < (int)MemoryAddress6) {
      pfVar7 = (float *)(ModuleInitializationResult5 + MemoryAddress1 * 4);
      fVar24 = 1.0 / (float)(int)MemoryAddress3;
      unaff_XMM6 = ZEXT416((uint)fVar24);
      do {
        fVar19 = (float)cosf(((float)(int)MemoryAddress0 * 6.2831855 + 3.1415927) * fVar24);
        MemoryAddress3 = (int)MemoryAddress0 + 1;
        MemoryAddress0 = (ulonglong)MemoryAddress3;
        *pfVar7 = 0.5 / fVar19;
        pfVar7 = pfVar7 + 1;
      } while ((int)MemoryAddress3 < (int)MemoryAddress6);
    }
    LoopCounter8 = LoopCounter8 + 1;
    pModuleInitializationResult4 = pModuleInitializationResult4 + 1;
  } while (LoopCounter8 < 5);
  pLoopCounter2 = (int *)0x180be5774;
  pfVar7 = (float *)0x180c2e040;
  _DAT_180c2e978 = 0x180c2e040;
  param_1 = -param_1;
  LoopCounter8 = 2;
  LoopCounter7 = 0x100;
  ModuleInitializationResult5 = 0x140;
  MemoryAddress3 = 0;
  do {
    MemoryAddress6 = MemoryAddress3;
    if (pfVar7 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[-1] * 1.5258789e-05 * (float)param_1;
      *pfVar7 = fVar24;
      pfVar7[0x10] = fVar24;
    }
    pfVar5 = pfVar7 + -0x3ff;
    if (((byte)MemoryAddress6 & 0x1f) != 0x1f) {
      pfVar5 = pfVar7;
    }
    iVar6 = -param_1;
    if (((byte)MemoryAddress6 & 0x3f) != 0x3f) {
      iVar6 = param_1;
    }
    if (pfVar5 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)*pLoopCounter2 * 1.5258789e-05 * (float)iVar6;
      pfVar5[0x20] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    bVar1 = (byte)LoopCounter8;
    MemoryAddress3 = LoopCounter8 - 1U & 0x1f;
    StringIndex = -iVar6;
    if ((bVar1 - 1 & 0x3f) != 0x3f) {
      StringIndex = iVar6;
    }
    lVar4 = -0xefc;
    if (MemoryAddress3 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = ModuleInitializationResult5;
      }
      fVar24 = (float)pLoopCounter2[1] * 1.5258789e-05 * (float)StringIndex;
      *pfVar7 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
    }
    if ((bVar1 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    }
    iVar6 = -StringIndex;
    if ((bVar1 & 0x3f) != 0x3f) {
      iVar6 = StringIndex;
    }
    if (pfVar7 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[2] * 1.5258789e-05 * (float)iVar6;
      pfVar7[0x20] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    MemoryAddress3 = LoopCounter8 + 1U & 0x1f;
    lVar4 = -0xefc;
    StringIndex = -iVar6;
    if (((byte)(LoopCounter8 + 1U) & 0x3f) != 0x3f) {
      StringIndex = iVar6;
    }
    if (MemoryAddress3 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar5 = (float *)(lVar4 + (longlong)pfVar7);
    if (pfVar5 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = ModuleInitializationResult5;
      }
      fVar24 = (float)pLoopCounter2[3] * 1.5258789e-05 * (float)StringIndex;
      *pfVar5 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar7) = fVar24;
    }
    if ((bVar1 + 2 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar5 = (float *)(lVar4 + (longlong)pfVar7);
    }
    iVar6 = -StringIndex;
    if ((bVar1 + 2 & 0x3f) != 0x3f) {
      iVar6 = StringIndex;
    }
    if (pfVar5 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[4] * 1.5258789e-05 * (float)iVar6;
      pfVar5[0x20] = fVar24;
      pfVar5[0x30] = fVar24;
    }
    MemoryAddress3 = LoopCounter8 + 3U & 0x1f;
    lVar4 = -0xefc;
    StringIndex = -iVar6;
    if (((byte)(LoopCounter8 + 3U) & 0x3f) != 0x3f) {
      StringIndex = iVar6;
    }
    if (MemoryAddress3 != 0x1f) {
      lVar4 = 0x100;
    }
    pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    if (pfVar7 < (float *)0x180c2e880) {
      lVar4 = -0xebc;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = ModuleInitializationResult5;
      }
      fVar24 = (float)pLoopCounter2[5] * 1.5258789e-05 * (float)StringIndex;
      *pfVar7 = fVar24;
      *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
    }
    if ((bVar1 + 4 & 0x1f) == 0x1f) {
      lVar4 = -0x1ef8;
      if (MemoryAddress3 != 0x1f) {
        lVar4 = -0xefc;
      }
      pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
    }
    iVar6 = -StringIndex;
    if ((bVar1 + 4 & 0x3f) != 0x3f) {
      iVar6 = StringIndex;
    }
    if (pfVar7 + 0x20 < (float *)0x180c2e880) {
      fVar24 = (float)pLoopCounter2[6] * 1.5258789e-05 * (float)iVar6;
      pfVar7[0x20] = fVar24;
      pfVar7[0x30] = fVar24;
    }
    param_1 = -iVar6;
    if ((bVar1 + 5 & 0x3f) != 0x3f) {
      param_1 = iVar6;
    }
    lVar4 = -0xefc;
    if ((bVar1 + 5 & 0x1f) != 0x1f) {
      lVar4 = 0x100;
    }
    MemoryAddress3 = MemoryAddress6 + 8;
    pfVar7 = (float *)(lVar4 + (longlong)pfVar7);
    LoopCounter8 = LoopCounter8 + 8;
    pLoopCounter2 = pLoopCounter2 + 8;
  } while (LoopCounter8 < 0x102);
  if ((int)MemoryAddress3 < 0x200) {
    if (3 < (int)(0x200 - MemoryAddress3)) {
      MemoryAddress6 = MemoryAddress6 + 10;
      pLoopCounter2 = (int *)0x180be5b68;
      LoopCounter7 = (0x3f - (0x1fc - MemoryAddress3 >> 2)) * 4;
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)pLoopCounter2[2] * 1.5258789e-05 * (float)param_1;
          *pfVar7 = fVar24;
          pfVar7[0x10] = fVar24;
        }
        uVar3 = MemoryAddress3 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (uVar3 != 0x1f) {
          pfVar5 = pfVar7;
        }
        uVar3 = MemoryAddress3 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        LoopCounter8 = -param_1;
        if (uVar3 != 0x3f) {
          LoopCounter8 = param_1;
        }
        if (pfVar5 + 0x20 < (float *)0x180c2e880) {
          fVar24 = (float)pLoopCounter2[1] * 1.5258789e-05 * (float)LoopCounter8;
          pfVar5[0x20] = fVar24;
          pfVar5[0x30] = fVar24;
        }
        uVar3 = MemoryAddress6 - 1 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        uVar8 = MemoryAddress6 - 1 & 0x8000003f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffc0) + 1;
        }
        iVar6 = -LoopCounter8;
        if (uVar8 != 0x3f) {
          iVar6 = LoopCounter8;
        }
        lVar4 = -0xefc;
        if (uVar3 != 0x1f) {
          lVar4 = 0x100;
        }
        pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
        if (pfVar7 < (float *)0x180c2e880) {
          lVar4 = -0xebc;
          if (uVar3 != 0x1f) {
            lVar4 = ModuleInitializationResult5;
          }
          fVar24 = (float)*pLoopCounter2 * 1.5258789e-05 * (float)iVar6;
          *pfVar7 = fVar24;
          *(float *)(lVar4 + (longlong)pfVar5) = fVar24;
        }
        uVar8 = MemoryAddress6 & 0x8000001f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
        }
        if (uVar8 == 0x1f) {
          lVar4 = -0x1ef8;
          if (uVar3 != 0x1f) {
            lVar4 = -0xefc;
          }
          pfVar7 = (float *)(lVar4 + (longlong)pfVar5);
        }
        uVar3 = MemoryAddress6 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        LoopCounter8 = -iVar6;
        if (uVar3 != 0x3f) {
          LoopCounter8 = iVar6;
        }
        if (pfVar7 + 0x20 < (float *)0x180c2e880) {
          fVar24 = (float)pLoopCounter2[-1] * 1.5258789e-05 * (float)LoopCounter8;
          pfVar7[0x20] = fVar24;
          pfVar7[0x30] = fVar24;
        }
        uVar3 = MemoryAddress6 + 1 & 0x8000003f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
        }
        param_1 = -LoopCounter8;
        if (uVar3 != 0x3f) {
          param_1 = LoopCounter8;
        }
        uVar3 = MemoryAddress6 + 1 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        lVar4 = -0xefc;
        if (uVar3 != 0x1f) {
          lVar4 = 0x100;
        }
        pLoopCounter2 = pLoopCounter2 + -4;
        pfVar7 = (float *)(lVar4 + (longlong)pfVar7);
        MemoryAddress3 = MemoryAddress3 + 4;
        MemoryAddress6 = MemoryAddress6 + 4;
      } while ((int)MemoryAddress6 < 0x1ff);
    }
    if ((int)MemoryAddress3 < 0x200) {
      pLoopCounter2 = (int *)((longlong)LoopCounter7 * 4 + 0x180be5770);
      do {
        if (pfVar7 < (float *)0x180c2e880) {
          fVar24 = (float)*pLoopCounter2 * 1.5258789e-05 * (float)param_1;
          *pfVar7 = fVar24;
          pfVar7[0x10] = fVar24;
        }
        MemoryAddress6 = MemoryAddress3 & 0x8000003f;
        if ((int)MemoryAddress6 < 0) {
          MemoryAddress6 = (MemoryAddress6 - 1 | 0xffffffc0) + 1;
        }
        uVar3 = MemoryAddress3 & 0x8000001f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
        }
        pfVar5 = pfVar7 + -0x3ff;
        if (uVar3 != 0x1f) {
          pfVar5 = pfVar7;
        }
        pLoopCounter2 = pLoopCounter2 + -1;
        MemoryAddress3 = MemoryAddress3 + 1;
        pfVar7 = pfVar5 + 0x20;
        LoopCounter8 = -param_1;
        if (MemoryAddress6 != 0x3f) {
          LoopCounter8 = param_1;
        }
        param_1 = LoopCounter8;
      } while ((int)MemoryAddress3 < 0x200);
    }
  }
  return 0;
}
      DAT_180c2e030 = '\x01';
    }
    iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
    if ((iVar4 != 0) ||
       (iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),0x180c2ea70,1,
                              iStack0000000000000030 + 4), iVar4 != 0)) goto LAB_1807c2a3c;
    pBufferSize = (uint *)(unaff_RBX + 0x1cc);
    iVar4 = FUN_1808156f0();
    if (iVar4 == 0) {
      *(int *)(unaff_RBX + 0x110) = *(int *)(unaff_RBX + 0x110) + iStack0000000000000030 + 4;
      iVar4 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),0x180c2ea70,1);
      if (iVar4 != 0) goto LAB_1807c2a3c;
    }
    uVar3 = *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8);
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    FUN_180815080();
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = uVar3;
    iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
    if (iVar4 == 0) {
      if (*(int *)(unaff_RBX + 0x1c4) == iVar5) {
        *(uint32_t *)(unaff_RBX + 0x1c4) = 0x480;
      }
      uVar7 = iStack0000000000000030 + 5U & 0xfffffffe;
      if (((unaff_R12D & 0x4000) == 0) ||
         ((*(uint *)(*(longlong *)(unaff_RBX + 0x170) + 0x194) & 1) == 0)) {
        lVar6 = *(longlong *)(unaff_RBX + 8);
        if (*(int *)(lVar6 + 0x14) == -1) {
          *(uint32_t *)(lVar6 + 0x18) = 0xffffffff;
        }
        else if (*(char *)(unaff_RBX + 0x23c) == (char)unaff_R15) {
          *(uint *)(lVar6 + 0x18) =
               ((*(int *)(lVar6 + 0x14) + -1 + uVar7) / uVar7 + 1) * *(int *)(unaff_RBX + 0x1c4);
          *(uint *)(unaff_RBX + 0x2c) = *(uint *)(unaff_RBX + 0x2c) & 0xfffffffe;
        }
        else {
          *(uint *)(lVar6 + 0x18) = *pBufferSize * 0x480;
        }
        goto LAB_1807c2ec7;
      }
      FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),*(uint32_t *)(unaff_RBX + 0x110),0);
      iVar4 = *(int *)(unaff_RBX + 0x1c4);
      uVar7 = 0;
      iVar5 = func_0x00018076a7d0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x00000050);
      if (iVar5 == 0) {
        *pBufferSize = 0;
        *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 0x18) = 0;
        if (*(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) != 0) goto LAB_1807c2d40;
        goto LAB_1807c2e2d;
      }
    }
  }
  goto LAB_1807c2a43;
LAB_1807c2a3c:
  *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
  goto LAB_1807c2a43;
  while( true ) {
    iVar5 = FUN_180815200();
    if ((iVar5 == 0) &&
       (in_stack_00000040._4_4_ + uVar7 < *(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14))) {
      if (*pBufferSize <= (uint)unaff_R15) {
        uVar9 = *pBufferSize + 1000;
        *pBufferSize = uVar9;
        lVar6 = FUN_180742650(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),
                              *(uint64_t *)(unaff_RBX + 0x1d0),uVar9 * 4,&UNK_18097c490,0x113);
        *(longlong *)(unaff_RBX + 0x1d0) = lVar6;
        if (lVar6 == 0) goto LAB_1807c2a43;
      }
      uVar8 = unaff_R15 & 0xffffffff;
      unaff_R15 = (ulonglong)((uint)unaff_R15 + 1);
      *(uint *)(*(longlong *)(unaff_RBX + 0x1d0) + uVar8 * 4) = uVar7;
      pLoopCounter = (int *)(*(longlong *)(unaff_RBX + 8) + 0x18);
      *pLoopCounter = *pLoopCounter + iVar4;
      uVar7 = uVar7 + 4 + in_stack_00000040._4_4_;
      iVar5 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),in_stack_00000040._4_4_,1);
      if (iVar5 != 0) break;
    }
    else {
      FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),0xfffffffd,1);
    }
    if (*(uint *)(*(longlong *)(unaff_RBX + 8) + 0x14) <= uVar7) break;
LAB_1807c2d40:
    iVar5 = FUN_180769ed0(*(uint64_t *)(unaff_RBX + 0x170),&stack0x0000004c,1,4,0);
    if (iVar5 != 0) break;
  }
LAB_1807c2e2d:
  iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RBX + 0x170),in_stack_00000050,0);
  if (iVar4 == 0) {
    *pBufferSize = (uint)unaff_R15;
    unaff_R15 = 0;
LAB_1807c2ec7:
    if (unaff_R13B != '\0') {
      iVar4 = *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14);
      if (iVar4 != -1) {
        *(int *)(*(longlong *)(unaff_RBX + 8) + 0x14) = iVar4 - *(int *)(unaff_RBX + 0x110);
      }
    }
    if ((*(longlong *)(unaff_RBX + 0x1d0) != 0) && ((unaff_R12D & 0x4000) == 0)) {
      FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),*(longlong *)(unaff_RBX + 0x1d0),
                    &UNK_18097c490,0x282,1);
    }
    *(ulonglong *)(unaff_RBX + 0x178) = unaff_R15;
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 8) = 2;
    *(uint32_t *)(*(longlong *)(unaff_RBX + 8) + 0x1c) = 0x480;
    FUN_180815ba0();
  }
LAB_1807c2a43:
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x4ab0) ^ (ulonglong)&stack0x00000000);
}
      DAT_180c30370 = '\x01';
    }
    if (((in_stack_00000040._4_4_ != unaff_R15D) ||
        (iVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x170) + 0x10))
                           (*(longlong **)(unaff_RDI + 0x170),(longlong)&stack0x00000040 + 4),
        iVar4 == 0)) &&
       (iVar4 = FUN_18076a440(*(uint64_t *)(unaff_RDI + 0x170),*(uint32_t *)(unaff_RDI + 0x110),
                              0), iVar4 == 0)) {
      memset(unaff_RDI + 0x178,0,0x330);
    }
  }
FUN_1807c3d8b:
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x218) ^ (ulonglong)&stack0x00000000);
}
      DAT_180c4f4e8 = 0;
      _DAT_180c4f4ac = MemoryAddress;
      FUN_1808fcb30(&DAT_180c4f4f0);
    }
  }
  return &DAT_180c4f4a0;
}
uint64_t FUN_1808c7260(uint64_t *param_1,longlong param_2,char param_3,char param_4)
{
  int LoopCounter;
  uint BufferSize;
  uint *puVar3;
  uint64_t uVar4;
  uint8_t uVar5;
  ulonglong uStackX_10;
  uint auStack_28 [2];
  ulonglong uStack_20;
  if (*(int *)(param_2 + 0x18) < *(int *)(*(longlong *)(param_2 + 0x10) + 0xb4)) {
LAB_1808c72a7:
    uVar5 = 0;
  }
  else {
    LoopCounter = *(int *)(*(longlong *)(param_2 + 0x10) + 0xbc);
    if (LoopCounter == 0) {
      return 0;
    }
    if (LoopCounter != 2) goto LAB_1808c72a7;
    uVar5 = 1;
  }
  puVar3 = (uint *)FUN_18084da10();
  uStack_20 = 0;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  auStack_28[0] = *puVar3;
  uVar4 = FUN_1808c6dd0(param_1,*(uint64_t *)(param_2 + 0x10),auStack_28,&uStack_20,&uStackX_10);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if ((char)uStackX_10 == (char)uVar4) {
    return 0;
  }
  uStackX_10 = 0;
  puVar3 = (uint *)FUN_18084da10();
  BufferSize = *(uint *)((longlong)param_1 + 0xc);
  if (((BufferSize != *puVar3) && (*(uint *)(param_1 + 4) <= BufferSize)) &&
     (BufferSize < *(uint *)((longlong)param_1 + 0x24))) {
    if (BufferSize == auStack_28[0]) {
      return 0x1c;
    }
    BufferSize = func_0x000180856540(*param_1,BufferSize - *(int *)(param_1 + 1));
    uStackX_10 = BufferSize + uStack_20;
    if (uStackX_10 == uStack_20) {
      uStackX_10 = uStack_20 + 1;
    }
  }
  FUN_18084da10();
  if (param_3 != '\0') {
    uVar4 = FUN_1808c7400(param_1,param_2,param_2 + 0x20,&uStack_20,&uStackX_10,uVar5,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  }
  if (param_4 == '\0') {
    return 0;
  }
  if (param_3 != '\0') {
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0xb4) <= *(int *)(param_2 + 0x18)) {
      LoopCounter = *(int *)(*(longlong *)(param_2 + 0x10) + 0xbc);
      if (LoopCounter == 0) {
        return 0;
      }
      if (LoopCounter == 2) {
        uVar5 = 1;
        goto LAB_1808c73b4;
      }
    }
    uVar5 = 0;
  }
LAB_1808c73b4:
  uVar4 = FUN_1808c7400(param_1,param_2,param_2 + 0x28,&uStack_20,&uStackX_10,uVar5,1);
  if ((int)uVar4 == 0) {
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    return 0;
  }
  return uVar4;
}
uint64_t
FUN_1808c7400(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
             uint64_t *param_5,char param_6,char param_7)
{
  uint MemoryAddress;
  longlong lVar2;
  byte bVar3;
  uint32_t *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  uint32_t uVar9;
  longlong lStackX_8;
  uint8_t auStack_28 [16];
  uVar6 = *(uint64_t *)(param_1 + 0x28);
  puVar4 = (uint32_t *)FUN_18084da10();
  lVar2 = *param_4;
  uVar9 = *puVar4;
  lVar8 = lVar2;
  if ((*(uint *)(param_2 + 0x1c) >> 1 & 1) != 0) {
    lVar8 = *param_3;
    lVar7 = lVar2 - lVar8;
    uVar6 = *(uint64_t *)(param_1 + 0x30);
    if (-1 < lVar7) {
      if (lVar7 < 1) {
        uVar9 = 0;
        lVar8 = lVar2;
      }
      else {
        MemoryAddress = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x774);
        if (MemoryAddress != 48000) {
          lVar7 = (lVar7 * 48000) / (longlong)(ulonglong)MemoryAddress;
        }
        if (0xffffffff < lVar7) {
          lVar7 = 0xffffffff;
        }
        uVar9 = (uint32_t)lVar7;
        lVar8 = lVar2;
      }
    }
  }
  if (param_6 != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))(*(longlong **)(param_2 + 0x10),auStack_28)
    ;
    uVar5 = FUN_1808d0850(uVar6,auStack_28,lVar8,
                          *(uint32_t *)(*(longlong *)(param_2 + 0x10) + 0xb4));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  uVar6 = FUN_1808ce360(uVar6,*(uint64_t *)(param_2 + 0x10),lVar8,*param_5,uVar9,0,0,&lStackX_8);
  if ((int)uVar6 == 0) {
    if (param_7 != (char)uVar6) {
      func_0x0001808cf230(lStackX_8,lVar8);
    }
    bVar3 = (byte)(*(uint *)(param_2 + 0x1c) >> 4) & 1;
    *(uint *)(lStackX_8 + 0x4c) =
         ~((bVar3 ^ 1) * 2) & ((uint)bVar3 + (uint)bVar3 | *(uint *)(lStackX_8 + 0x4c));
    uVar6 = 0;
  }
  return uVar6;
}
    DAT_180c4f818 = '\x01';
  }
  return 0;
}
uint64_t FUN_1808ee6c8(void)
{
  char cVar1;
  int StringIndex;
  uint uVar3;
  uint64_t in_stack_00000030;
  func_0x0001808f62c0();
  func_0x0001808f62a0(free_exref);
  StringIndex = timeGetDevCaps(&stack0x00000030,8);
  uVar3 = 1;
  if (StringIndex == 0) {
    uVar3 = 1;
    if (1 < (uint)in_stack_00000030) {
      uVar3 = (uint)in_stack_00000030;
    }
  }
  func_0x0001808f6640(uVar3);
  cVar1 = FUN_1808f1d70();
  if (cVar1 == '\0') {
    return 0x809200ff;
  }
  DAT_180c4f818 = 1;
  return 0;
}
uint64_t FUN_1808ee714(void)
{
  return 0x809200ff;
}
uint32_t FUN_1808ee740(int param_1,int param_2,int param_3)
{
  int LoopCounter;
  uint32_t BufferSize;
  uint32_t auStack_18 [4];
  if (DAT_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (((param_2 != 0) || (param_3 != 0)) || (3 < param_1 - 1U)) {
    return 0x80920001;
  }
  LoopCounter = FUN_1808f6cb0();
  if (LoopCounter != 0) {
    return 0x809200ff;
  }
  LoopCounter = FUN_1808f0650(param_1,auStack_18);
  if (LoopCounter < 0) {
    BufferSize = 0x809200ff;
    if (LoopCounter == -0x7ffeffff) {
      BufferSize = 0x80920004;
    }
    func_0x0001808f6ce0();
    return BufferSize;
  }
  func_0x0001808f6ce0();
  return auStack_18[0];
}
uint64_t FUN_1808ee7d0(uint32_t param_1,uint *param_2)
{
  int64_t ModuleInitializationResult;
  uint BufferSize;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint16_t *puVar8;
  uint16_t *puVar9;
  byte abStackX_18 [8];
  longlong lStackX_20;
  if (DAT_180c4f818 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (uint *)0x0) {
    return 0x80920001;
  }
  iVar6 = FUN_1808f6cb0();
  if (iVar6 != 0) {
    return 0x809200ff;
  }
  iVar6 = func_0x0001808f0200(param_1);
  if (iVar6 < 0) {
    func_0x0001808f6ce0();
    return 0x80920003;
  }
  FUN_1808ee390(param_2);
  iVar6 = func_0x0001808f0760(param_1,&lStackX_20);
  if (iVar6 == 0) {
    FUN_1808f6f40(param_1,abStackX_18);
    if (*(longlong *)(lStackX_20 + 0x160) != 0) {
      cVar4 = func_0x0001808f2030();
      uVar7 = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0xc);
      if (cVar4 == '\0') {
        uVar7 = uVar7 & 0xffdefffe;
      }
      *param_2 = uVar7;
      *(uint8_t *)(param_2 + 1) = *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x10);
      *(uint8_t *)((longlong)param_2 + 5) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x11);
      *(uint8_t *)((longlong)param_2 + 6) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x12);
      *(uint8_t *)((longlong)param_2 + 7) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x13);
      *(uint8_t *)((longlong)param_2 + 9) =
           *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x15);
      *(uint8_t *)(param_2 + 2) = *(uint8_t *)(*(longlong *)(lStackX_20 + 0x160) + 0x14);
      if ((*(char *)(lStackX_20 + 0x68) == '\x01') && ((abStackX_18[0] & 8) != 0)) {
        ModuleInitializationResult = *(longlong *)(lStackX_20 + 0x160);
        uVar7 = *(uint *)(ModuleInitializationResult + 0x74);
        BufferSize = *(uint *)(ModuleInitializationResult + 0x78);
        uVar3 = *(uint *)(ModuleInitializationResult + 0x7c);
        param_2[3] = *(uint *)(ModuleInitializationResult + 0x70);
        param_2[4] = uVar7;
        param_2[5] = BufferSize;
        param_2[6] = uVar3;
        param_2[7] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x60);
        param_2[8] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 100);
        param_2[9] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x68);
        param_2[10] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x54);
        param_2[0xb] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x58);
        param_2[0xc] = *(uint *)(*(longlong *)(lStackX_20 + 0x160) + 0x5c);
      }
      else {
        func_0x0001808f6f90(param_2 + 3);
        func_0x0001808f6f70(param_2 + 7);
        func_0x0001808f6f80(param_2 + 10);
      }
      *(uint8_t *)(param_2 + 0x13) = 1;
      *(uint8_t *)(param_2 + 0x1a) = *(uint8_t *)(lStackX_20 + 1);
      *(uint64_t *)(param_2 + 0x14) = **(uint64_t **)(lStackX_20 + 0x160);
      ModuleInitializationResult = *(longlong *)(lStackX_20 + 0x160);
      bVar5 = *(byte *)(ModuleInitializationResult + 0x19);
      if (2 < *(byte *)(ModuleInitializationResult + 0x19)) {
        bVar5 = 2;
      }
      iVar6 = 0;
      *(byte *)(param_2 + 0xd) = bVar5;
      if (*(char *)(ModuleInitializationResult + 0x19) != '\0') {
        puVar8 = (uint16_t *)((longlong)param_2 + 0x3e);
        puVar9 = (uint16_t *)(ModuleInitializationResult + 0x1e);
        do {
          iVar6 = iVar6 + 1;
          puVar8[-1] = puVar9[-1];
          *puVar8 = *puVar9;
          *(uint8_t *)(puVar8 + 1) = *(uint8_t *)(puVar9 + -2);
          puVar8 = puVar8 + 4;
          puVar9 = puVar9 + 3;
        } while (iVar6 < (int)(uint)*(byte *)(ModuleInitializationResult + 0x19));
      }
    }
  }
  func_0x0001808f6ce0();
  return 0;
}
int FUN_1808eea10(uint32_t param_1,byte *param_2)
{
  char cVar1;
  int StringIndex;
  longlong lVar3;
  if (DAT_180c4f818 == '\0') {
    return -0x7f6dfffb;
  }
  if (param_2 == (byte *)0x0) {
    return -0x7f6dffff;
  }
  StringIndex = FUN_1808f6cb0();
  if (StringIndex != 0) {
    return -0x7f6dff01;
  }
  StringIndex = func_0x0001808f0200(param_1);
  if (StringIndex < 0) {
    func_0x0001808f6ce0();
    return -0x7f6dfffd;
  }
  lVar3 = func_0x0001808f0dd0(param_1,0);
  if (lVar3 != 0) {
    cVar1 = func_0x0001808f0e30(*(uint16_t *)(lVar3 + 2),*(uint16_t *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*param_2 < 0xd)) && (param_2[1] < 0xd)) && (param_2[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    StringIndex = FUN_1808ef250(param_1,param_2);
    if (-1 < StringIndex) {
      *(byte *)(lVar3 + 0x23e8) = *param_2;
      *(byte *)(lVar3 + 0x23e9) = param_2[1];
      *(byte *)(lVar3 + 0x23ea) = param_2[2];
      *(byte *)(lVar3 + 0x23ec) = *param_2;
      *(byte *)(lVar3 + 0x23ed) = param_2[1];
      *(byte *)(lVar3 + 0x23ee) = param_2[2];
      func_0x0001808f6ce0();
      return StringIndex;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int FUN_1808eea88(void)
{
  char cVar1;
  int StringIndex;
  longlong lVar3;
  byte *unaff_RBX;
  uint32_t unaff_ESI;
  lVar3 = func_0x0001808f0dd0(unaff_ESI);
  if (lVar3 != 0) {
    cVar1 = func_0x0001808f0e30(*(uint16_t *)(lVar3 + 2),*(uint16_t *)(lVar3 + 4));
    if ((((cVar1 == '\0') && (*unaff_RBX < 0xd)) && (unaff_RBX[1] < 0xd)) && (unaff_RBX[2] < 0xd)) {
      func_0x0001808f6ce0();
      return -0x7f6dfffa;
    }
    StringIndex = FUN_1808ef250(unaff_ESI);
    if (-1 < StringIndex) {
      *(byte *)(lVar3 + 0x23e8) = *unaff_RBX;
      *(byte *)(lVar3 + 0x23e9) = unaff_RBX[1];
      *(byte *)(lVar3 + 0x23ea) = unaff_RBX[2];
      *(byte *)(lVar3 + 0x23ec) = *unaff_RBX;
      *(byte *)(lVar3 + 0x23ed) = unaff_RBX[1];
      *(byte *)(lVar3 + 0x23ee) = unaff_RBX[2];
      func_0x0001808f6ce0();
      return StringIndex;
    }
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
int FUN_1808eeadc(void)
{
  int LoopCounter;
  uint8_t *unaff_RBX;
  uint32_t unaff_ESI;
  longlong unaff_RDI;
  LoopCounter = FUN_1808ef250(unaff_ESI);
  if (-1 < LoopCounter) {
    *(uint8_t *)(unaff_RDI + 0x23e8) = *unaff_RBX;
    *(uint8_t *)(unaff_RDI + 0x23e9) = unaff_RBX[1];
    *(uint8_t *)(unaff_RDI + 0x23ea) = unaff_RBX[2];
    *(uint8_t *)(unaff_RDI + 0x23ec) = *unaff_RBX;
    *(uint8_t *)(unaff_RDI + 0x23ed) = unaff_RBX[1];
    *(uint8_t *)(unaff_RDI + 0x23ee) = unaff_RBX[2];
    func_0x0001808f6ce0();
    return LoopCounter;
  }
  func_0x0001808f6ce0();
  return -0x7f6dff01;
}
uint64_t FUN_1808eeb3d(void)
{
  func_0x0001808f6ce0();
  return 0x809200ff;
}
          DAT_180c58840 = bVar1;
          *param_2 = iVar3;
          *(int *)(lVar4 + 0x10) = iVar3;
          *(int *)(lVar4 + 0x18) = iVar5;
          func_0x0001808f0b40(lVar4);
          return 0;
        }
        lVar4 = lVar4 + 0x2408;
      } while (lVar4 < 0x180c58840);
      return 0x8001002d;
    }
  }
  bVar1 = DAT_180c58840 + 1;
  if (bVar1 == 0) {
    bVar1 = DAT_180c58840 + 2;
  }
  iVar3 = (uint)bVar1 * 0x100 + iVar5;
  DAT_180c58840 = bVar1;
  *param_2 = iVar3;
  *pStringIndex = iVar3;
  pStringIndex[2] = iVar5;
  func_0x0001808f0b40(pStringIndex + -4);
  return 0;
}
longlong FUN_1808f07b0(void)
{
  uint MemoryAddress;
  MemoryAddress = timeGetTime();
  return (ulonglong)MemoryAddress * 1000;
}
uint FUN_1808f07d0(longlong param_1,int param_2,int param_3,char param_4)
{
  ulonglong MemoryAddress;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uVar5 = 0;
  uVar6 = 0;
  iVar3 = 0;
  iVar4 = iVar3;
  if (0 < param_3) {
    do {
      bVar2 = (byte)param_2 & 7;
      iVar4 = param_2;
      if (param_2 < 0) {
        iVar4 = param_2 + 7;
        bVar2 = bVar2 - 8;
      }
      param_2 = param_2 + 1;
      uVar6 = *(byte *)((iVar4 >> 3) + param_1) >> (bVar2 & 0x1f) & 1;
      iVar4 = iVar3 + 1;
      uVar5 = uVar5 | uVar6 << ((byte)iVar3 & 0x1f);
      iVar3 = iVar4;
    } while (iVar4 < param_3);
  }
  if (((param_4 != '\0') && (uVar6 != 0)) && (iVar4 < 0x20)) {
    bVar2 = (byte)iVar4 & 0x1f;
    uVar6 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    MemoryAddress = (ulonglong)(0x20 - iVar4);
    do {
      uVar5 = uVar5 | uVar6;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      MemoryAddress = MemoryAddress - 1;
    } while (MemoryAddress != 0);
  }
  return uVar5;
}
  DAT_180c58854 = 1;
  DAT_180c58853 = 1;
  DAT_180c58855 = 1;
  DAT_180c58850 = 1;
  _DAT_180c698c0 = _beginthread(FUN_1808f4a70,0,0);
  if ((_DAT_180c698c0 != -1) &&
     (_DAT_180c698c8 = _beginthread(FUN_1808f34b0,0,0), _DAT_180c698c8 != -1)) {
    return 1;
  }
  return 0;
}
  DAT_180c69e20 = 1;
  return;
}
uint32_t FUN_1808f6da0(byte param_1,byte *param_2,int param_3)
{
  uint *pMemoryAddress;
  byte bVar2;
  uint uVar3;
  param_3 = param_3 + -4;
  pMemoryAddress = (uint *)(param_2 + param_3);
  uVar3 = *(uint *)(&UNK_18098a100 + (ulonglong)(byte)~param_1 * 4) ^ 0xffffff;
  for (; 0 < param_3; param_3 = param_3 + -1) {
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = *(uint *)(&UNK_18098a100 + (ulonglong)(byte)(bVar2 ^ (byte)uVar3) * 4) ^ uVar3 >> 8;
  }
  return CONCAT31((int3)(~uVar3 >> 8),*pMemoryAddress != ~uVar3);
}
float * FUN_1808f6e00(float *param_1,float *param_2,float *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  fVar1 = *param_3;
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  fVar4 = *param_1;
  fVar5 = param_3[1];
  fVar6 = param_1[2];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  *param_2 = (fVar4 * fVar8 + fVar1 * fVar2 + fVar3 * fVar7) - fVar6 * fVar5;
  param_2[1] = (fVar3 * fVar8 + fVar5 * fVar2 + fVar6 * fVar1) - fVar7 * fVar4;
  param_2[3] = ((fVar8 * fVar2 - fVar4 * fVar1) - fVar5 * fVar3) - fVar6 * fVar7;
  param_2[2] = (fVar6 * fVar8 + fVar7 * fVar2 + fVar5 * fVar4) - fVar3 * fVar1;
  return param_2;
}
uint64_t FUN_1808f6f40(uint64_t param_1,uint32_t *param_2)
{
  int64_t ModuleInitializationResult;
  ModuleInitializationResult = func_0x0001808f0dd0(param_1,0);
  if (ModuleInitializationResult != 0) {
    *param_2 = *(uint32_t *)(ModuleInitializationResult + 100);
    return 0;
  }
  return 0x8001002d;
}
      DAT_180bf0080 = '\0';
      if (_DAT_180c69f88 == 0) {
        lVar6 = FUN_1808f9200(&UNK_18098ab30);
        if (lVar6 != 0) {
          lVar7 = LoadLibraryExW(lVar6,0,0);
        }
        LocalFree(lVar6);
        _DAT_180c69f88 = lVar7;
        if (lVar7 == 0) goto LAB_1808fa963;
      }
      if ((((_DAT_180c69f90 == (code *)0x0) &&
           (_DAT_180c69f90 = (code *)GetProcAddress(_DAT_180c69f88,&UNK_18098aef8),
           _DAT_180c69f90 == (code *)0x0)) ||
          ((_DAT_180c69f98 == 0 &&
           (_DAT_180c69f98 = GetProcAddress(_DAT_180c69f88,&UNK_18098af08), _DAT_180c69f98 == 0))))
         || ((_DAT_180c69fa8 == 0 &&
             (_DAT_180c69fa8 = GetProcAddress(_DAT_180c69f88,&UNK_18098af18), _DAT_180c69fa8 == 0)))
         ) goto LAB_1808fa963;
      if ((_DAT_180c69fd0 == 0) &&
         (_DAT_180c69fd0 = FUN_1808f9de0(&UNK_18098af28,0), _DAT_180c69fd0 != 0)) {
        _DAT_180c69fd8 = (code *)GetProcAddress(_DAT_180c69fd0,&UNK_18098af40);
      }
      pcVar2 = _DAT_180c69fd8;
      if (_DAT_180c69fd8 == (code *)0x0) goto LAB_1808fa963;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      _guard_check_icall(_DAT_180c69fd8);
      iVar5 = (*pcVar2)(&uStack_1d0,&uStack_198,0x27);
      if (iVar5 != 0x27) goto LAB_1808fa963;
      for (pMemoryAddress1 = auStack_1c0; pcVar2 = _DAT_180c69f90, MemoryAddress0 = *pMemoryAddress1, MemoryAddress0 != 0;
          pMemoryAddress1 = pMemoryAddress1 + 1) {
        uStack_1d8 = 0;
        _guard_check_icall(_DAT_180c69f90);
        puStack_208 = &uStack_1d8;
        iVar5 = (*pcVar2)(0xffffffff80000002,&UNK_18098af50,0,MemoryAddress0 | 0x20019);
        if (iVar5 == 0) {
          uStack_1e8 = 0x80;
          uStack_1e4 = 4;
          memset(auStack_148,0,0x100);
        }
      }
    }
    if (DAT_180c69ef8 == '\0') {
      SetLastError(param_2 & 0xffffffff);
      goto LAB_1808fa963;
    }
  }
  OutputDebugStringW(&UNK_18098afa0);
  SetLastError(0);
LAB_1808fa963:
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_228);
}
          DAT_180c6a14c = iVar3 == 1;
          SetConsoleTitleA(&UNK_18098b4e0);
        }
      }
      DAT_180c6a14d = DAT_180c6a14c == '\0';
      if (_DAT_180c6a140 == 0) {
        lVar4 = _wfsopen(param_1,&UNK_18098b51c,0x40);
        if (lVar4 == 0) {
          FUN_1808fb790(&UNK_18098b490,0xc1,&UNK_18098b470,&UNK_18098b520,param_1);
          bVar10 = false;
        }
        else {
          fclose(lVar4);
          FUN_1808fb9a0(&UNK_18098b490,200,&UNK_18098b470,&UNK_18098b580,param_1);
          lVar6 = _wcsdup(param_1);
          lVar4 = -1;
          if (lVar6 != 0) {
            do {
              lVar7 = lVar4;
              lVar4 = lVar7 + 1;
            } while (*(short *)(param_1 + 2 + lVar7 * 2) != 0);
            lVar4 = lVar7;
            while( true ) {
              lVar9 = 0;
              if (((lVar4 == 0) || (sVar1 = *(short *)(lVar6 + lVar4 * 2), lVar9 = 0, sVar1 == 0x2f)
                  ) || (lVar9 = 0, sVar1 == 0x5c)) goto LAB_1808fbdeb;
              if (sVar1 == 0x2e) break;
              lVar4 = lVar4 + -1;
            }
            *(uint16_t *)(lVar6 + lVar4 * 2) = 0;
            lVar9 = lVar6 + 2 + lVar4 * 2;
LAB_1808fbdeb:
            lVar7 = lVar7 + 9;
            lVar4 = malloc(lVar7 * 2);
            if (lVar4 == 0) {
              free(lVar6);
              return false;
            }
            iVar3 = 1;
            lVar2 = _DAT_180c6a140;
            do {
              _DAT_180c6a140 = lVar2;
              if (lVar9 == 0) {
                FUN_1808fba20(lVar4,lVar7,&UNK_18098b5f8,lVar6,iVar3);
              }
              else {
                FUN_1808fba20(lVar4,lVar7,&UNK_18098b5d8,lVar6,iVar3,lVar9);
              }
              _DAT_180c6a140 = _wfsopen(lVar4,puVar8,0x20);
              if (_DAT_180c6a140 != 0) {
                puVar8 = &UNK_18098b610;
                uVar5 = 0xeb;
                param_1 = lVar4;
                goto LAB_1808fbebe;
              }
              iVar3 = iVar3 + 1;
              lVar2 = 0;
            } while (iVar3 < 9);
            puVar8 = &UNK_18098b640;
            uVar5 = 0xef;
LAB_1808fbebe:
            FUN_1808fb790(&UNK_18098b490,uVar5,&UNK_18098b470,puVar8,param_1);
            free(lVar6);
            free(lVar4);
          }
          bVar10 = _DAT_180c6a140 != 0;
        }
      }
      else {
        FUN_1808fb790(&UNK_18098b490,0xb4,&UNK_18098b470,&UNK_18098b4e8,param_1);
        bVar10 = true;
      }
      return bVar10;
    }
  }
  DAT_180c6a14d = DAT_180c6a14c == '\0';
  return true;
}
bool FUN_1808fbc0e(void)
{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char unaff_SIL;
  longlong unaff_RDI;
  short sVar10;
  longlong unaff_R12;
  void *pMemoryAddress1;
  bool bVar12;
  uint in_stack_00000090;
  uint in_stack_00000098;
  if (unaff_RDI != 0) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
      sVar10 = (short)unaff_R12;
    } while (*(short *)(unaff_RDI + lVar5 * 2) != sVar10);
    if (lVar5 != 0) {
      pMemoryAddress1 = &UNK_18098b464;
      if (unaff_SIL != '\0') {
        pMemoryAddress1 = &UNK_18098b45c;
      }
      _DAT_180c6a140 = _wfsopen();
      if ((1 < _DAT_180c6a148) && ((uint)unaff_R12 < in_stack_00000090)) {
        uVar6 = GetConsoleWindow();
        in_stack_00000098 = (uint)unaff_R12;
        GetWindowThreadProcessId(uVar6,&stack0x00000098);
        uVar3 = GetCurrentProcessId();
        if (uVar3 != in_stack_00000098) {
          iVar4 = AllocConsole();
          DAT_180c6a14c = iVar4 == 1;
          SetConsoleTitleA(&UNK_18098b4e0);
        }
      }
      DAT_180c6a14d = DAT_180c6a14c == (char)unaff_R12;
      if (_DAT_180c6a140 == unaff_R12) {
        lVar5 = _wfsopen();
        if (lVar5 == 0) {
          FUN_1808fb790(&UNK_18098b490,0xc1,&UNK_18098b470,&UNK_18098b520);
          bVar12 = false;
        }
        else {
          fclose(lVar5);
          FUN_1808fb9a0(&UNK_18098b490,200,&UNK_18098b470,&UNK_18098b580);
          lVar7 = _wcsdup();
          lVar5 = -1;
          if (lVar7 != 0) {
            do {
              lVar9 = lVar5;
              lVar5 = lVar9 + 1;
              lVar8 = lVar9;
            } while (*(short *)(unaff_RDI + 2 + lVar9 * 2) != sVar10);
            while( true ) {
              lVar5 = unaff_R12;
              if (((lVar8 == 0) || (sVar1 = *(short *)(lVar7 + lVar8 * 2), sVar1 == 0x2f)) ||
                 (sVar1 == 0x5c)) goto LAB_1808fbdeb;
              if (sVar1 == 0x2e) break;
              lVar8 = lVar8 + -1;
            }
            *(short *)(lVar7 + lVar8 * 2) = sVar10;
            lVar5 = lVar7 + 2 + lVar8 * 2;
LAB_1808fbdeb:
            lVar9 = lVar9 + 9;
            lVar8 = malloc(lVar9 * 2);
            if (lVar8 == 0) {
              free(lVar7);
              return false;
            }
            iVar4 = 1;
            lVar2 = _DAT_180c6a140;
            do {
              _DAT_180c6a140 = lVar2;
              if (lVar5 == 0) {
                FUN_1808fba20(lVar8,lVar9,&UNK_18098b5f8,lVar7,iVar4);
              }
              else {
                FUN_1808fba20(lVar8,lVar9,&UNK_18098b5d8,lVar7,iVar4);
              }
              _DAT_180c6a140 = _wfsopen(lVar8,pMemoryAddress1,0x20);
              if (_DAT_180c6a140 != 0) {
                pMemoryAddress1 = &UNK_18098b610;
                uVar6 = 0xeb;
                goto LAB_1808fbebe;
              }
              iVar4 = iVar4 + 1;
              lVar2 = 0;
            } while (iVar4 < 9);
            pMemoryAddress1 = &UNK_18098b640;
            uVar6 = 0xef;
LAB_1808fbebe:
            FUN_1808fb790(&UNK_18098b490,uVar6,&UNK_18098b470,pMemoryAddress1);
            free(lVar7);
            free(lVar8);
          }
          bVar12 = _DAT_180c6a140 != unaff_R12;
        }
      }
      else {
        FUN_1808fb790(&UNK_18098b490,0xb4,&UNK_18098b470,&UNK_18098b4e8);
        bVar12 = true;
      }
      return bVar12;
    }
  }
  DAT_180c6a14d = DAT_180c6a14c == (char)unaff_R12;
  return true;
}
bool FUN_1808fbd52(void)
{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint64_t uVar5;
  int iVar6;
  longlong unaff_RBX;
  longlong lVar7;
  longlong unaff_RDI;
  void *puVar8;
  longlong unaff_R12;
  longlong lVar9;
  fclose();
  FUN_1808fb9a0(&UNK_18098b490,200,&UNK_18098b470,&UNK_18098b580);
  lVar3 = _wcsdup();
  if (lVar3 != 0) {
    do {
      lVar7 = unaff_RBX;
      unaff_RBX = lVar7 + 1;
      lVar4 = lVar7;
    } while (*(short *)(unaff_RDI + 2 + lVar7 * 2) != (short)unaff_R12);
    while( true ) {
      lVar9 = unaff_R12;
      if (((lVar4 == 0) || (sVar1 = *(short *)(lVar3 + lVar4 * 2), sVar1 == 0x2f)) ||
         (sVar1 == 0x5c)) goto LAB_1808fbdeb;
      if (sVar1 == 0x2e) break;
      lVar4 = lVar4 + -1;
    }
    *(short *)(lVar3 + lVar4 * 2) = (short)unaff_R12;
    lVar9 = lVar3 + 2 + lVar4 * 2;
LAB_1808fbdeb:
    lVar7 = lVar7 + 9;
    lVar4 = malloc(lVar7 * 2);
    if (lVar4 == 0) {
      free(lVar3);
      return false;
    }
    iVar6 = 1;
    lVar2 = _DAT_180c6a140;
    do {
      _DAT_180c6a140 = lVar2;
      if (lVar9 == 0) {
        FUN_1808fba20(lVar4,lVar7,&UNK_18098b5f8,lVar3,iVar6);
      }
      else {
        FUN_1808fba20(lVar4,lVar7,&UNK_18098b5d8,lVar3,iVar6);
      }
      _DAT_180c6a140 = _wfsopen(lVar4);
      if (_DAT_180c6a140 != 0) {
        puVar8 = &UNK_18098b610;
        uVar5 = 0xeb;
        goto LAB_1808fbebe;
      }
      iVar6 = iVar6 + 1;
      lVar2 = 0;
    } while (iVar6 < 9);
    puVar8 = &UNK_18098b640;
    uVar5 = 0xef;
LAB_1808fbebe:
    FUN_1808fb790(&UNK_18098b490,uVar5,&UNK_18098b470,puVar8);
    free(lVar3);
    free(lVar4);
  }
  return _DAT_180c6a140 != unaff_R12;
}
  DAT_180c6a14d = DAT_180c6a14c == unaff_R12B;
  return 1;
}
    DAT_180bf0082 = '\x01';
    wcscpy_s(auStack_228,0x104,param_1);
    if ((DAT_180bf0082 != '\0') && (wcscat_s(auStack_228,0x104,param_2), DAT_180bf0082 != '\0')) {
      FUN_1808fbae0(auStack_228,0);
    }
    _set_invalid_parameter_handler(MemoryAddress);
  }
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_248);
}
  DAT_180bf0082 = '\x01';
  wcscpy_s(auStackX_20,0x104);
  if (DAT_180bf0082 != '\0') {
    wcscat_s(auStackX_20,0x104);
    if (DAT_180bf0082 != '\0') {
      FUN_1808fbae0(auStackX_20,0);
    }
  }
  _set_invalid_parameter_handler(MemoryAddress);
  FUN_1808fc050(in_stack_00000230 ^ (ulonglong)&stack0x00000000);
}
    DAT_180c821d8 = 1;
  }
  FUN_1808fd254();
  cVar1 = func_0x0001800467e0();
  if (cVar1 != '\0') {
    cVar1 = func_0x0001800467e0();
    if (cVar1 != '\0') {
      return 1;
    }
    func_0x0001800467e0(0);
  }
  return 0;
}
uint64_t FUN_1808fc60c(uint param_1)
{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint64_t uVar4;
  if (DAT_180c821d9 == '\0') {
    if (1 < param_1) {
      FUN_1808fd610(5);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    iVar3 = func_0x0001808fd8d4();
    if ((iVar3 == 0) || (param_1 != 0)) {
      bVar2 = 0x40 - ((byte)_DAT_180bf00a8 & 0x3f) & 0x3f;
      _DAT_180c821e0 = (0xffffffffffffffffU >> bVar2 | -1L << 0x40 - bVar2) ^ _DAT_180bf00a8;
      uRam0000000180c821e8 = _DAT_180c821e0;
      _DAT_180c821f0 = _DAT_180c821e0;
      _DAT_180c821f8 = _DAT_180c821e0;
      uRam0000000180c82200 = _DAT_180c821e0;
      _DAT_180c82208 = _DAT_180c821e0;
    }
    else {
      iVar3 = _initialize_onexit_table(&DAT_180c821e0);
      if ((iVar3 != 0) || (iVar3 = _initialize_onexit_table(&DAT_180c821f8), iVar3 != 0)) {
        return 0;
      }
    }
    DAT_180c821d9 = '\x01';
  }
  return 1;
}
ulonglong FUN_1808fc6e4(longlong param_1)
{
  ulonglong MemoryAddress;
  uint7 BufferSize;
  IMAGE_SECTION_HEADER *pIVar3;
  MemoryAddress = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_1800002a0; pIVar3 != (IMAGE_SECTION_HEADER *)&UNK_1800003e0;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x180000000U) &&
       (MemoryAddress = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x180000000U < MemoryAddress)) goto LAB_1808fc75b;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_1808fc75b:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    MemoryAddress = MemoryAddress & 0xffffffffffffff00;
  }
  else {
    BufferSize = (uint7)(MemoryAddress >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      MemoryAddress = (ulonglong)BufferSize << 8;
    }
    else {
      MemoryAddress = CONCAT71(BufferSize,1);
    }
  }
  return MemoryAddress;
}
    DAT_180c91d50 = '\0';
  }
  return;
}
  DAT_180bfc100 = 0;
  return;
}
  DAT_180bfc170 = 0;
  return;
}
    DAT_180c95ef0 = '\0';
  }
  return;
}
    DAT_180c96008 = '\0';
  }
  return;
}
    DAT_180c96028 = '\0';
  }
  return;
}
    DAT_180c96048 = '\0';
  }
  return;
}
    DAT_180c96068 = '\0';
  }
  return;
}
    DAT_180c96098 = '\0';
  }
  return;
}
    DAT_180c960b8 = '\0';
  }
  return;
}
    DAT_180c96100 = '\0';
  }
  return;
}
    DAT_180c96140 = '\0';
  }
  return;
}
    DAT_180c961d8 = '\0';
  }
  return;
}
    DAT_180c95f28 = '\0';
  }
  return;
}
    DAT_180c95fe8 = '\0';
  }
  return;
}
    DAT_180c96210 = '\0';
  }
  return;
}

/**
 * @brief 处理系统字符串数据
 * 
 * 该函数负责处理系统中的字符串数据，包括字符串的复制、
 * 转换和验证等操作。主要用于系统初始化过程中的
 * 字符串处理任务。
 * 
 * @param targetBuffer 目标缓冲区指针
 * @param param1 参数1，通常为0
 * @param param2 参数2，通常为字符串长度
 * @param sourceBuffer 源缓冲区指针
 * @param configData 配置数据
 * @return 处理结果状态码
 */
int ProcessSystemStringData(void* targetBuffer, int param1, int param2, void* sourceBuffer, void* configData);

/**
 * @brief 初始化系统缓冲区
 * 
 * 该函数负责初始化系统中的各种缓冲区，为后续的
 * 数据处理做准备。设置缓冲区的初始状态和大小。
 * 
 * @param bufferPtr 缓冲区指针
 * @param bufferSize 缓冲区大小
 * @return 初始化结果状态码
 */
int InitializeSystemBuffer(void* bufferPtr, int bufferSize);

/**
 * @brief 处理系统数据缓冲区
 * 
 * 该函数负责处理系统数据缓冲区中的数据，包括数据的
 * 复制、转换和验证等操作。确保数据的一致性和完整性。
 * 
 * @param targetBuffer 目标缓冲区指针
 * @param sourceBuffer 源缓冲区指针
 * @param bufferSize 缓冲区大小
 * @return 处理结果状态码
 */
int ProcessSystemDataBuffer(void* targetBuffer, void* sourceBuffer, int bufferSize);

/**
 * @brief 注册系统模块A
 * 
 * 该函数负责注册系统中的第一个模块，通常用于核心
 * 系统组件的初始化和配置。
 * 
 * @return 注册结果状态码
 */
int RegisterSystemModuleA(void);

/**
 * @brief 注册系统模块B
 * 
 * 该函数负责注册系统中的第二个模块，通常用于扩展
 * 系统功能的初始化和配置。
 * 
 * @return 注册结果状态码
 */
int RegisterSystemModuleB(void);

/**
 * @brief 注册系统模块C
 * 
 * 该函数负责注册系统中的第三个模块，通常用于特定
 * 功能模块的初始化和配置。
 * 
 * @return 注册结果状态码
 */
int RegisterSystemModuleC(void);

/**
 * @brief 注册系统模块D
 * 
 * 该函数负责注册系统中的第四个模块，通常用于辅助
 * 功能模块的初始化和配置。
 * 
 * @return 注册结果状态码
 */
int RegisterSystemModuleD(void);

#endif // DATA_DEFINITIONS_H
