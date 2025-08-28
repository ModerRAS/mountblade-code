#include "TaleWorlds.Native.Split.h"

/**
 * 99_part_06_part080.c - 系统资源管理和状态同步模块
 * 
 * 本模块包含游戏核心系统的资源管理、状态同步、内存分配等功能
 * 主要负责游戏运行时的资源生命周期管理和状态一致性维护
 * 
 * 主要功能：
 * - 资源对象的生命周期管理
 * - 系统状态的同步和切换
 * - 内存分配和释放
 * - 事件处理和回调机制
 * - 性能监控和优化
 */

/* 系统常量定义 */
#define SYSTEM_STATE_ACTIVE          0x00
#define SYSTEM_STATE_INACTIVE        0x01
#define SYSTEM_STATE_TRANSITION      0x02
#define SYSTEM_STATE_ERROR           0x03

#define RESOURCE_TYPE_TEXTURE        0x01
#define RESOURCE_TYPE_SHADER         0x02
#define RESOURCE_TYPE_AUDIO          0x03
#define RESOURCE_TYPE_MODEL          0x04

#define MEMORY_ALIGNMENT             0x10
#define MAX_RESOURCE_COUNT          0x100
#define SYNC_TIMEOUT_MS             0x3E8

/* 系统状态枚举 */
typedef enum {
    SystemState_Initializing = 0,
    SystemState_Running = 1,
    SystemState_Paused = 2,
    SystemState_ShuttingDown = 3,
    SystemState_Error = 4
} SystemState;

/* 资源管理结构体 */
typedef struct {
    uint64_t resourceId;
    uint32_t resourceType;
    uint32_t referenceCount;
    void* resourceData;
    uint64_t lastAccessTime;
    uint8_t flags;
} ResourceManager;

/* 同步控制结构体 */
typedef struct {
    volatile uint32_t syncFlag;
    uint64_t lastSyncTime;
    void* callbackFunction;
    uint8_t syncStatus;
} SyncController;

/* 性能监控结构体 */
typedef struct {
    uint64_t totalMemoryUsage;
    uint32_t activeResourceCount;
    uint32_t peakResourceCount;
    float averageFrameTime;
    uint8_t performanceFlags;
} PerformanceMonitor;

/**
 * @brief 系统资源状态同步管理器
 * 
 * 负责管理系统资源的生命周期，确保资源在状态切换时的正确释放和重新分配
 * 实现资源的双缓冲机制，避免状态切换过程中的资源竞争
 * 
 * @param systemContext 系统上下文指针
 * @param syncFlags 同步标志位
 * @param resourceManager 资源管理器指针
 * @param stateFlags 状态标志
 * @param priorityFlags 优先级标志
 * 
 * @return void
 */
void SystemResourceStateManager_SyncResourceLifecycle(longlong systemContext, uint64_t syncFlags, 
                                                      longlong resourceManager, int32_t stateFlags, 
                                                      int32_t priorityFlags)
{
  /* 变量声明和初始化 */
  longlong *currentResourceManager;
  longlong *previousResourceManager;
  bool isNewResourceCreated;
  bool isExistingResourceUsed;
  longlong systemDataPointer;
  int currentState;
  longlong *newResourceManager;
  longlong **resourceManagerRef;
  longlong *tempResourceBuffer;
  uint64_t storedSyncFlags;
  longlong *existingResourceBuffer;
  
  /* 获取当前资源管理器引用 */
  currentResourceManager = *(longlong **)(systemContext + 0x460);
  storedSyncFlags = syncFlags;
  
  /* 释放当前资源管理器（如果存在） */
  if (currentResourceManager != (longlong *)0x0) {
    (**(code **)(*currentResourceManager + 0x28))(currentResourceManager);
  }
  
  /* 获取或创建新的资源管理器 */
  newResourceManager = *(longlong **)(systemContext + 0x1a0);
  if (newResourceManager == (longlong *)0x0) {
    /* 创建新的资源管理器 */
    newResourceManager = (longlong *)MemoryManager_CreateResourceBuffer();
    tempResourceBuffer = newResourceManager;
    if (newResourceManager != (longlong *)0x0) {
      (**(code **)(*newResourceManager + 0x28))(newResourceManager);
    }
    resourceManagerRef = &tempResourceBuffer;
    isExistingResourceUsed = false;
    isNewResourceCreated = true;
  }
  else {
    /* 使用现有资源管理器 */
    existingResourceBuffer = newResourceManager;
    (**(code **)(*newResourceManager + 0x28))(newResourceManager);
    resourceManagerRef = &existingResourceBuffer;
    isExistingResourceUsed = true;
    isNewResourceCreated = false;
  }
  
  /* 清理资源管理器引用 */
  *resourceManagerRef = (longlong *)0x0;
  previousResourceManager = *(longlong **)(systemContext + 0x460);
  *(longlong **)(systemContext + 0x460) = newResourceManager;
  
  /* 释放前一个资源管理器 */
  if (previousResourceManager != (longlong *)0x0) {
    (**(code **)(*previousResourceManager + 0x38))();
  }
  
  /* 清理临时资源缓冲区 */
  if (isNewResourceCreated && (tempResourceBuffer != (longlong *)0x0)) {
    (**(code **)(*tempResourceBuffer + 0x38))();
  }
  if (isExistingResourceUsed && (existingResourceBuffer != (longlong *)0x0)) {
    (**(code **)(*existingResourceBuffer + 0x38))();
  }
  
  /* 重置状态标志 */
  isExistingResourceUsed = false;
  isNewResourceCreated = false;
  
  /* 处理备用资源管理器 */
  if (currentResourceManager == (longlong *)0x0) {
    newResourceManager = (longlong *)MemoryManager_CreateSecondaryBuffer();
    tempResourceBuffer = newResourceManager;
    if (newResourceManager != (longlong *)0x0) {
      (**(code **)(*newResourceManager + 0x28))(newResourceManager);
    }
    resourceManagerRef = &tempResourceBuffer;
    isNewResourceCreated = true;
  }
  else {
    existingResourceBuffer = currentResourceManager;
    (**(code **)(*currentResourceManager + 0x28))(currentResourceManager);
    resourceManagerRef = &existingResourceBuffer;
    isExistingResourceUsed = true;
    newResourceManager = currentResourceManager;
  }
  
  /* 清理备用资源管理器引用 */
  *resourceManagerRef = (longlong *)0x0;
  previousResourceManager = *(longlong **)(systemContext + 0x1a8);
  *(longlong **)(systemContext + 0x1a8) = newResourceManager;
  
  /* 释放前一个备用资源管理器 */
  if (previousResourceManager != (longlong *)0x0) {
    (**(code **)(*previousResourceManager + 0x38))();
  }
  
  /* 清理临时缓冲区 */
  if (isNewResourceCreated && (tempResourceBuffer != (longlong *)0x0)) {
    (**(code **)(*tempResourceBuffer + 0x38))();
  }
  if (isExistingResourceUsed && (existingResourceBuffer != (longlong *)0x0)) {
    (**(code **)(*existingResourceBuffer + 0x38))();
  }
  
  /* 更新系统状态 */
  currentState = *(int *)(systemContext + 0x474);
  if (currentState == 1) {
    *(int32_t *)(systemContext + 0x474) = 2;
    currentState = 2;
  }
  
  /* 检查系统状态转换条件 */
  systemDataPointer = _DAT_180c868d0;
  if ((*(char *)(_DAT_180c868d0 + 0x480) == '\0') &&
     (((0.7 < *(float *)(_DAT_180c868d0 + 0x46c) || *(float *)(_DAT_180c868d0 + 0x46c) == 0.7 ||
       ((*(byte *)(_DAT_180c868d0 + 0x47c) & 1) != 0)) && (currentState == 0)))) {
    *(int32_t *)(systemContext + 0x474) = 1;
    currentState = 1;
  }
  
  /* 检查系统停止条件 */
  if ((*(char *)(systemDataPointer + 0x498) == '\0') &&
     ((0.7 < *(float *)(systemDataPointer + 0x484) || *(float *)(systemDataPointer + 0x484) == 0.7 ||
      ((*(byte *)(systemDataPointer + 0x494) & 1) != 0)))) {
    *(int32_t *)(systemContext + 0x474) = 0;
    currentState = 0;
  }
  
  /* 更新渲染系统参数 */
  systemDataPointer = _DAT_180c86938;
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1c90) = (float)currentState + 0.2;
  *(int32_t *)(*(longlong *)(systemDataPointer + 0x1cd8) + 0x1c80) = *(int32_t *)(resourceManager + 0x12c00);
  *(int32_t *)(*(longlong *)(systemDataPointer + 0x1cd8) + 0x1c84) = *(int32_t *)(resourceManager + 0x12c04);
  
  /* 调用后续处理函数 */
  SystemRenderer_UpdateRenderParameters(systemContext, storedSyncFlags, resourceManager, stateFlags, priorityFlags);
  
  /* 清理当前资源管理器 */
  if (currentResourceManager != (longlong *)0x0) {
    (**(code **)(*currentResourceManager + 0x38))(currentResourceManager);
  }
  
  return;
}



/**
 * @brief 内存管理器析构函数
 * 
 * 负责释放和管理内存资源，确保系统在关闭时正确清理所有分配的内存
 * 实现安全的内存释放机制，防止内存泄漏和野指针访问
 * 
 * @param memoryManager 内存管理器指针
 * @param freeFlags 释放标志位
 * @param context 上下文参数
 * @param userData 用户数据指针
 * 
 * @return 内存管理器指针
 */
uint64_t * MemoryManager_Destroy(uint64_t *memoryManager, ulonglong freeFlags, uint64_t context, uint64_t userData)
{
  uint64_t memoryFlags;
  
  /* 设置内存管理器标志 */
  memoryFlags = 0xfffffffffffffffe;
  *memoryManager = &MemoryManager_VTable_Destroy;
  
  /* 执行清理操作 */
  SystemMemoryManager_PerformCleanup();
  
  /* 根据标志位决定是否释放内存 */
  if ((freeFlags & 1) != 0) {
    MemoryManager_FreeMemoryBlock(memoryManager, 0x460, context, userData, memoryFlags);
  }
  
  return memoryManager;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * @brief 渲染系统参数更新处理器
 * 
 * 负责根据系统状态和渲染参数动态调整渲染设置
 * 实现渲染质量的自动调整和性能优化
 * 
 * @param rendererContext 渲染器上下文指针
 * @param renderFlags 渲染标志位
 * @param renderData 渲染数据指针
 * @param qualityFlags 质量标志
 * @param performanceFlags 性能标志
 * 
 * @return void
 */
void SystemRenderer_UpdateRenderParameters(longlong *rendererContext, uint64_t renderFlags, 
                                          longlong renderData, int32_t qualityFlags, 
                                          int32_t performanceFlags)
{
  /* 渲染参数变量 */
  float renderScale;
  float aspectRatio;
  float fieldOfView;
  float nearPlane;
  int qualityLevel;
  longlong renderSystem;
  float inverseDepth;
  int8_t securityBuffer [32];
  int32_t renderWidth;
  int32_t renderHeight;
  uint64_t renderState;
  uint64_t qualityMatrix1;
  uint64_t qualityMatrix2;
  int32_t qualitySetting1;
  int32_t qualitySetting2;
  ulonglong securityChecksum;
  
  /* 安全检查和初始化 */
  securityChecksum = _DAT_180bf00a8 ^ (ulonglong)securityBuffer;
  qualityLevel = (int)rendererContext[0x8b];
  renderSystem = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  
  /* 质量设置矩阵初始化 */
  qualityMatrix1 = 0x3f5555553e2aaaab;
  qualityMatrix2 = 0x3f2aaaab3f000000;
  qualitySetting1 = 0x3eaaaaab;
  qualitySetting2 = 0;
  renderState = 0;
  
  /* 根据质量级别设置渲染参数 */
  *(int32_t *)(renderSystem + 0x1c88) =
       *(int32_t *)
        ((longlong)&qualityMatrix1 +
        (longlong)
        (qualityLevel + (qualityLevel / 6 + (qualityLevel >> 0x1f) +
                 (int)(((longlong)qualityLevel / 6 + ((longlong)qualityLevel >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -6) * 4);
  
  /* 从渲染数据中提取参数 */
  inverseDepth = 1.0 / *(float *)(renderData + 0x12a54);
  renderScale = *(float *)(renderData + 0x12a40);
  aspectRatio = *(float *)(renderData + 0x11c24);
  fieldOfView = *(float *)(renderData + 0x12a60);
  renderHeight = performanceFlags;
  nearPlane = *(float *)(renderData + 0x12a64);
  
  /* 计算渲染矩阵参数 */
  *(float *)(renderSystem + 0x1cd0) = 2.0 / ((float)(int)*(float *)(renderData + 0x11c20) * renderScale);
  *(float *)(renderSystem + 0x1cd4) = (inverseDepth * -2.0) / (float)(int)aspectRatio;
  *(float *)(renderSystem + 0x1cd8) = (0.1 / renderScale) * fieldOfView - 1.0 / renderScale;
  *(float *)(renderSystem + 0x1cdc) = inverseDepth - inverseDepth * 0.1 * nearPlane;
  
  /* 更新质量级别计数器 */
  *(int *)(rendererContext + 0x8b) = (int)rendererContext[0x8b] + 1;
  renderWidth = qualityFlags;
  
  /* 调用渲染更新函数 */
  (**(code **)(*rendererContext + 0x50))
            (rendererContext, renderData, (int)rendererContext[0x8a], *(int32_t *)((longlong)rendererContext + 0x454));
  
  /* 安全检查和清理 */
  SecurityManager_VerifyChecksum(securityChecksum ^ (ulonglong)securityBuffer);
}



/**
 * @brief 渲染系统内存管理器析构函数
 * 
 * 专门负责渲染系统内存资源的释放和管理
 * 确保渲染相关的内存资源在系统关闭时被正确清理
 * 
 * @param renderMemoryManager 渲染内存管理器指针
 * @param destroyFlags 销毁标志位
 * @param renderContext 渲染上下文
 * @param additionalData 附加数据指针
 * 
 * @return 渲染内存管理器指针
 */
uint64_t * RenderMemoryManager_Destroy(uint64_t *renderMemoryManager, ulonglong destroyFlags, 
                                      uint64_t renderContext, uint64_t additionalData)
{
  uint64_t memoryFlags;
  
  /* 设置内存管理器标志 */
  memoryFlags = 0xfffffffffffffffe;
  *renderMemoryManager = &RenderMemoryManager_VTable_Destroy;
  
  /* 执行渲染系统清理 */
  SystemRenderManager_PerformCleanup();
  
  /* 根据标志位决定是否释放渲染内存 */
  if ((destroyFlags & 1) != 0) {
    MemoryManager_FreeRenderMemory(renderMemoryManager, 0x458, renderContext, additionalData, memoryFlags);
  }
  
  return renderMemoryManager;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




/**
 * @brief 用户界面事件处理器
 * 
 * 负责处理用户界面相关的事件，包括按钮点击、菜单选择、文本输入等
 * 实现事件分发和相应的回调函数调用
 * 
 * @param uiContext 用户界面上下文指针
 * @param eventData 事件数据指针
 * 
 * @return void
 */
void UIEventHandler_ProcessEvent(longlong *uiContext, longlong eventData)
{
  /* 事件处理变量 */
  longlong *eventHandler;
  longlong eventLength;
  uint64_t eventResult;
  int eventType;
  ulonglong eventNameLength;
  uint eventNameHash;
  void *eventName;
  int8_t eventTypeData [16];
  int8_t eventData1 [16];
  int8_t eventData2 [16];
  int8_t eventData3 [16];
  int8_t securityBuffer [32];
  int32_t renderTargetId;
  longlong *resourceManager;
  int eventX;
  int eventY;
  int32_t eventFlags;
  int32_t eventModifiers;
  int32_t eventButton;
  uint64_t eventTimestamp;
  uint64_t eventSequence;
  int16_t eventKeyCode;
  char eventChar;
  int16_t eventScanCode;
  int8_t eventRepeat;
  int8_t eventExtended;
  int16_t eventPrevious;
  uint eventDeviceId;
  int8_t eventReserved;
  uint64_t memoryFlags;
  void *uiResource;
  int8_t *eventBuffer;
  uint bufferSize;
  int8_t eventDataBuffer [136];
  ulonglong securityChecksum;
  
  /* 初始化安全检查和内存管理 */
  memoryFlags = 0xfffffffffffffffe;
  securityChecksum = _DAT_180bf00a8 ^ (ulonglong)securityBuffer;
  UIEventSystem_Initialize();
  
  /* 初始化事件缓冲区 */
  uiResource = &UIResource_DefaultHandler;
  eventBuffer = eventDataBuffer;
  eventDataBuffer[0] = 0;
  bufferSize = *(uint *)(uiContext + 4);
  eventName = &EventName_Default;
  
  /* 获取UI元素名称 */
  if ((void *)uiContext[3] != (void *)0x0) {
    eventName = (void *)uiContext[3];
  }
  
  /* 复制UI元素名称到事件缓冲区 */
  strcpy_s(eventDataBuffer, 0x80, eventName);
  eventNameLength = (ulonglong)bufferSize;
  eventNameHash = bufferSize + 1;
  
  /* 添加下划线分隔符（如果缓冲区空间足够） */
  if (eventNameHash < 0x7f) {
    *(int16_t *)(eventBuffer + eventNameLength) = 0x5f;
    eventNameLength = (ulonglong)eventNameHash;
    bufferSize = eventNameHash;
  }
  
  /* 获取事件名称 */
  eventName = &EventName_Default;
  if (*(void **)(eventData + 0x3528) != (void *)0x0) {
    eventName = *(void **)(eventData + 0x3528);
  }
  
  /* 计算事件名称长度 */
  eventLength = -1;
  do {
    eventLength = eventLength + 1;
  } while (eventName[eventLength] != '\0');
  eventType = (int)eventLength;
  
  /* 复制事件名称到缓冲区（如果空间足够） */
  if ((0 < eventType) && ((uint)((int)eventNameLength + eventType) < 0x7f)) {
    memcpy(eventBuffer + eventNameLength, eventName, (longlong)(eventType + 1));
  }
  
  /* 处理特殊事件类型 */
  eventType = (int)uiContext[0x37];
  if (eventType == -1) {
    /* 初始化默认事件参数 */
    eventFlags = 1;
    eventModifiers = 1;
    eventKeyCode = 0x100;
    eventScanCode = 0;
    eventPrevious = 0;
    eventReserved = 0;
    eventButton = (int32_t)uiContext[0xe];
    eventChar = (char)uiContext[10];
    eventExtended = eventChar == '\0';
    eventRepeat = 1;
    eventTimestamp = 0;
    eventSequence = 0;
    eventDeviceId = *(uint *)(eventData + 0x1bd4);
    
    /* 处理非字符事件 */
        iStack_120 = (int)(longlong)(double)param_1[0xb];
        iStack_11c = (int)(longlong)(double)param_1[0xc];
        if (param_1[0x85] != 0) goto LAB_1803f8744;
        /* 调用事件处理函数 */
        (**(code **)(*uiContext + 8))(uiContext, &eventX, eventData);
        eventResult = UIEventSystem_RegisterEvent(_DAT_180c86930, &resourceManager, &uiResource, &eventX);
        UIEventSystem_SetEventCallback(uiContext + 0x85, eventResult);
      }
      else {
        /* 处理坐标事件（鼠标事件） */
        /* 注意：此部分包含复杂的浮点数运算和坐标转换逻辑 */
        /* 简化实现：处理鼠标坐标转换和边界检查 */
        eventX = (int)(longlong)(double)uiContext[0xb];
        eventY = (int)(longlong)(double)uiContext[0xc];
        
        /* 确保坐标在有效范围内 */
        if (eventX < 1) {
          eventX = 1;
        }
        if (eventY < 1) {
          eventY = 1;
        }
        
        /* 调用事件处理函数 */
        (**(code **)(*uiContext + 8))(uiContext, &eventX, eventData);
        eventResult = UIEventSystem_RegisterEvent(_DAT_180c86930, &resourceManager, &uiResource, &eventX);
        UIEventSystem_SetEventCallback(uiContext + 0x85, eventResult);
      }
    }
    else {
      /* 处理其他特殊事件类型 */
      if (eventType == -3) {
        /* 处理特殊命令事件 */
        if (((int)uiContext[0x3b] == 9) && 
            (eventType = strcmp(uiContext[0x3a], &SpecialEvent_Command), eventType == 0)) {
          eventResult = UISpecialCommand_ProcessCommand(eventData);
          UIEventSystem_SetEventCallback(uiContext + 0x85, eventResult);
        }
        else {
          eventName = &EventName_Default;
          if ((void *)uiContext[3] != (void *)0x0) {
            eventName = (void *)uiContext[3];
          }
          UIEventSystem_RegisterSpecialEvent(&SpecialEvent_Handler, eventName);
        }
        goto EVENT_HANDLER_EXIT;
      }
      
      if (eventType != -2) goto EVENT_HANDLER_EXIT;
      
      /* 处理资源事件 */
      renderTargetId = *(int32_t *)(eventData + 0x1bd4);
      eventResult = UIEventSystem_CreateResourceEvent(eventNameLength, &resourceManager, uiContext, uiContext + 0x39);
      UIEventSystem_SetEventCallback(uiContext + 0x85, eventResult);
    }
  }
  else {
    /* 处理资源管理事件 */
    eventHandler = *(longlong **)(eventData + 0x9690);
    if (eventHandler != (longlong *)0x0) {
      resourceManager = eventHandler;
      (**(code **)(*eventHandler + 0x28))(eventHandler);
    }
    resourceManager = (longlong *)uiContext[0x85];
    uiContext[0x85] = (longlong)eventHandler;
  }
  
  /* 清理资源管理器 */
  if (resourceManager != (longlong *)0x0) {
    (**(code **)(*resourceManager + 0x38))();
  }
  
EVENT_HANDLER_EXIT:
  uiResource = &UIResource_CleanupHandler;
  
  /* 安全检查和清理 */
  SecurityManager_VerifyChecksum(securityChecksum ^ (ulonglong)securityBuffer);
}






// 函数: void FUN_1803f8770(uint64_t param_1,longlong param_2,uint64_t param_3)
void FUN_1803f8770(uint64_t param_1,longlong param_2,uint64_t param_3)

{
  FUN_1801f9270(param_1,param_3);
  *(int8_t *)(param_2 + 0x24) = 1;
  *(int8_t *)(param_2 + 0x2a) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8790(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1803f8790(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  int iVar1;
  longlong lVar2;
  void *puVar3;
  int8_t auStack_1a8 [32];
  int32_t uStack_188;
  int32_t uStack_180;
  uint64_t uStack_178;
  int8_t auStack_168 [8];
  uint64_t uStack_160;
  void **ppuStack_158;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  uint8_t auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_1a8;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0xc;
  strcpy_s(auStack_d0,0x80,&DAT_180a0eb68);
  puVar3 = &DAT_18098bc73;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar3 = (void *)param_1[3];
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (puVar3[lVar2] != '\0');
  iVar1 = (int)lVar2;
  if ((0 < iVar1) && (uStack_d8 + iVar1 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_e0 + uStack_d8,puVar3,(longlong)(iVar1 + 1));
  }
  puVar3 = &DAT_18098bc73;
  if (puStack_e0 != (void *)0x0) {
    puVar3 = puStack_e0;
  }
  FUN_1802c22a0(auStack_168,puVar3);
  puVar3 = &DAT_18098bc73;
  if ((void *)param_1[3] != (void *)0x0) {
    puVar3 = (void *)param_1[3];
  }
  ppuStack_158 = &puStack_148;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  uStack_138 = 0;
  auStack_130[0] = 0;
  if (puVar3 != (void *)0x0) {
    FUN_180049bf0(&puStack_148,puVar3);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_148);
  }
  if ((int)param_1[9] < 1) {
    uStack_178 = 0;
    uStack_180 = param_5;
    uStack_188 = param_4;
    (**(code **)(*param_1 + 0x50))
              (param_1,param_3,(int)param_1[0x8a],*(int32_t *)((longlong)param_1 + 0x454));
    FUN_18029ef00(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),param_1[0x85]);
  }
  else {
    *(int *)(param_1 + 9) = (int)param_1[9] + -1;
  }
  FUN_1802c2ac0(&puStack_148);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1a8);
}






// 函数: void FUN_1803f89a0(longlong param_1)
void FUN_1803f89a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(int32_t *)(param_1 + 0x74 + (longlong)*(int *)(param_1 + 0x474) * 4) = 0xffffffe8;
  lVar1 = param_1 + (longlong)*(int *)(param_1 + 0x474) * 8;
  plVar2 = *(longlong **)(param_1 + (longlong)*(int *)(param_1 + 0x470) * 8 + 0x458);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(lVar1 + 0x138);
  *(longlong **)(lVar1 + 0x138) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  plVar2 = *(longlong **)(param_1 + 0x458 + (longlong)(1 - *(int *)(param_1 + 0x470)) * 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar3 = *(longlong **)(param_1 + 0x428);
  *(longlong **)(param_1 + 0x428) = plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int *)(param_1 + 0x470) = 1 - *(int *)(param_1 + 0x470);
  return;
}



uint64_t * FUN_1803f8a80(uint64_t *param_1,int32_t param_2,int32_t param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1801fa180();
  *param_1 = &UNK_180a0ef58;
  *(int32_t *)(param_1 + 0x8a) = param_2;
  *(int32_t *)((longlong)param_1 + 0x454) = param_3;
  *param_1 = &UNK_180a263c0;
  FUN_1808fc838(param_1 + 0x8b,8,2,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x8d] = 0;
  *(int32_t *)(param_1 + 0x8e) = 0;
  *(int32_t *)((longlong)param_1 + 0x474) = 4;
  plVar1 = (longlong *)param_1[0x8c];
  param_1[0x8c] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x8c];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[0x8b];
  param_1[0x8b] = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  return param_1;
}



uint64_t * FUN_1803f8b80(uint64_t *param_1,ulonglong param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a263c0;
  if ((longlong *)param_1[0x8d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x8d] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0x8b,8,2,FUN_180045af0,uVar1);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x478);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803f8c10(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x478,8,3,0xfffffffffffffffe);
  lVar4 = FUN_1803f8a80(uVar3,*(int32_t *)(param_1 + 0x450),*(int32_t *)(param_1 + 0x454));
  FUN_1801f8ea0(lVar4,param_1);
  *(int32_t *)(lVar4 + 0x450) = *(int32_t *)(param_1 + 0x450);
  *(int32_t *)(lVar4 + 0x454) = *(int32_t *)(param_1 + 0x454);
  plVar6 = (longlong *)(lVar4 + 0x458);
  lVar5 = 2;
  do {
    plVar1 = *(longlong **)((param_1 - lVar4) + (longlong)plVar6);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (longlong *)*plVar6;
    *plVar6 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar6 = plVar6 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  plVar6 = *(longlong **)(param_1 + 0x468);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar1 = *(longlong **)(lVar4 + 0x468);
  *(longlong **)(lVar4 + 0x468) = plVar6;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(lVar4 + 0x470) = *(int32_t *)(param_1 + 0x470);
  *(int32_t *)(lVar4 + 0x474) = *(int32_t *)(param_1 + 0x474);
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8d50(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_1803f8d50(longlong *param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong *plStackX_8;
  longlong *plStack_50;
  longlong *plStack_48;
  uint64_t uStack_40;
  longlong *plStack_38;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar1 = (longlong *)param_1[0x8d];
  plStack_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar5 = (longlong *)param_1[0x29];
  if (plVar5 != (longlong *)0x0) {
    plStackX_8 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plStackX_8 = (longlong *)param_1[0x8d];
  param_1[0x8d] = (longlong)plVar5;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  *(int32_t *)((longlong)param_1 + 0x9c) = 0xffffffe8;
  if (plVar1 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_1800bdc80();
    plStackX_8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplVar6 = &plStackX_8;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    plStack_50 = plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1);
    pplVar6 = &plStack_50;
    bVar3 = true;
    bVar2 = false;
    plVar5 = plVar1;
  }
  *pplVar6 = (longlong *)0x0;
  plStack_48 = (longlong *)param_1[0x31];
  param_1[0x31] = (longlong)plVar5;
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (bVar2) {
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  if (bVar3) {
    if (plStack_50 != (longlong *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
  }
  lVar4 = _DAT_180c86938;
  *(uint64_t *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83d8) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83e0) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83e8) = 0;
  *(uint64_t *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(uint64_t *)(lVar4 + 0x1cd8),7);
  (**(code **)(*param_1 + 0x50))
            (param_1,param_3,(int)param_1[0x8a],(int)param_1[0x8a],param_4,param_5,0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f8f80(longlong *param_1,longlong param_2)
void FUN_1803f8f80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int8_t auVar5 [16];
  int8_t auVar6 [16];
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auStack_1f8 [32];
  longlong *plStack_1d8;
  longlong *plStack_1d0;
  longlong *plStack_1c8;
  int iStack_1c0;
  int iStack_1bc;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  uint64_t uStack_1ac;
  uint64_t uStack_1a4;
  int16_t uStack_19c;
  int8_t uStack_19a;
  int32_t uStack_199;
  int16_t uStack_195;
  uint uStack_190;
  int8_t uStack_18c;
  uint64_t uStack_188;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [136];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  FUN_1801f9270();
  uStack_1b8 = 1;
  uStack_1b4 = 1;
  uStack_1ac = 0;
  uStack_1a4 = 0x3f80000000000000;
  uStack_19c = 0x100;
  uStack_199 = 0;
  uStack_195 = 0;
  uStack_18c = 0;
  uStack_1b0 = (int32_t)param_1[0xe];
  uStack_19a = 1;
  uStack_190 = *(uint *)(param_2 + 0x1bd4);
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    iStack_1c0 = (int)(longlong)(double)param_1[0xb];
    iStack_1bc = (int)(longlong)(double)param_1[0xc];
    if (param_1[0x8b] == 0) {
      puStack_d8 = &UNK_1809fcc28;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0xe;
      strcpy_s(auStack_c0,0x80,&UNK_180a26270);
      plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1c8,&puStack_d8,&iStack_1c0);
      lVar1 = *plVar3;
      *plVar3 = 0;
      plStack_1d8 = (longlong *)param_1[0x8b];
      param_1[0x8b] = lVar1;
      if (plStack_1d8 != (longlong *)0x0) {
        (**(code **)(*plStack_1d8 + 0x38))();
      }
      if (plStack_1c8 != (longlong *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      puStack_d8 = &UNK_18098bcb0;
    }
    if (param_1[0x8c] == 0) {
      puStack_178 = &UNK_1809fcc28;
      puStack_170 = auStack_160;
      auStack_160[0] = 0;
      uStack_168 = 0xe;
      strcpy_s(auStack_160,0x80,&UNK_180a26280);
      plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1d0,&puStack_178,&iStack_1c0);
      lVar1 = *plVar3;
      *plVar3 = 0;
      plStack_1d8 = (longlong *)param_1[0x8c];
      param_1[0x8c] = lVar1;
      if (plStack_1d8 != (longlong *)0x0) {
        (**(code **)(*plStack_1d8 + 0x38))();
      }
      if (plStack_1d0 != (longlong *)0x0) {
        (**(code **)(*plStack_1d0 + 0x38))();
      }
      puStack_178 = &UNK_18098bcb0;
    }
  }
  else {
    auVar5._0_4_ = (float)(double)param_1[0xb] * (float)*(int *)(param_2 + 0x3590);
    iVar4 = (int)auVar5._0_4_;
    uVar2 = uStack_190;
    if (auVar5._0_4_ <= 0.0) {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar5._0_4_)) {
        auVar6._4_4_ = auVar5._0_4_;
        auVar6._0_4_ = auVar5._0_4_;
        auVar6._8_8_ = 0;
        uVar2 = movmskps(uStack_190,auVar6);
        uVar2 = uVar2 & 1 ^ 1;
        auVar5._0_4_ = (float)(int)(iVar4 + uVar2);
      }
      auVar5._0_4_ = auVar5._0_4_ - 1e-08;
    }
    else {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar5._0_4_)) {
        auVar5._4_4_ = auVar5._0_4_;
        auVar5._8_8_ = 0;
        uVar2 = movmskps(uStack_190,auVar5);
        uVar2 = uVar2 & 1 ^ 1;
        auVar5._0_4_ = (float)(int)(iVar4 + uVar2);
      }
      auVar5._0_4_ = auVar5._0_4_ + 1e-08;
    }
    auVar7._0_4_ = (float)(double)param_1[0xc] * (float)*(int *)(param_2 + 0x3594);
    iVar4 = (int)auVar7._0_4_;
    if (auVar7._0_4_ <= 0.0) {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
        auVar8._4_4_ = auVar7._0_4_;
        auVar8._0_4_ = auVar7._0_4_;
        auVar8._8_8_ = 0;
        uVar2 = movmskps(uVar2,auVar8);
        auVar7._0_4_ = (float)(int)(iVar4 + (uVar2 & 1 ^ 1));
      }
      auVar7._0_4_ = auVar7._0_4_ - 1e-08;
    }
    else {
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar7._0_4_)) {
        auVar7._4_4_ = auVar7._0_4_;
        auVar7._8_8_ = 0;
        uVar2 = movmskps(uVar2,auVar7);
        auVar7._0_4_ = (float)(int)(iVar4 + (uVar2 & 1 ^ 1));
      }
      auVar7._0_4_ = auVar7._0_4_ + 1e-08;
    }
    iStack_1c0 = 4;
    if (4 < (int)auVar5._0_4_) {
      iStack_1c0 = (int)auVar5._0_4_;
    }
    iStack_1bc = 4;
    if (4 < (int)auVar7._0_4_) {
      iStack_1bc = (int)auVar7._0_4_;
    }
    puStack_178 = &UNK_1809fcc28;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0xe;
    strcpy_s(auStack_160,0x80,&UNK_180a26270);
    plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1c8,&puStack_178,&iStack_1c0);
    lVar1 = *plVar3;
    *plVar3 = 0;
    plStack_1d0 = (longlong *)param_1[0x8b];
    param_1[0x8b] = lVar1;
    if (plStack_1d0 != (longlong *)0x0) {
      (**(code **)(*plStack_1d0 + 0x38))();
    }
    if (plStack_1c8 != (longlong *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    puStack_178 = &UNK_18098bcb0;
    puStack_d8 = &UNK_1809fcc28;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0xe;
    strcpy_s(auStack_c0,0x80,&UNK_180a26280);
    plVar3 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_1d8,&puStack_d8,&iStack_1c0);
    lVar1 = *plVar3;
    *plVar3 = 0;
    plStack_1d0 = (longlong *)param_1[0x8c];
    param_1[0x8c] = lVar1;
    if (plStack_1d0 != (longlong *)0x0) {
      (**(code **)(*plStack_1d0 + 0x38))();
    }
    if (plStack_1d8 != (longlong *)0x0) {
      (**(code **)(*plStack_1d8 + 0x38))();
    }
    puStack_d8 = &UNK_18098bcb0;
  }
  (**(code **)(*param_1 + 0x40))(param_1,0);
  plStack_1d8 = (longlong *)param_1[0x89];
  param_1[0x89] = 0;
  if (plStack_1d8 != (longlong *)0x0) {
    (**(code **)(*plStack_1d8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1f8);
}



uint64_t *
FUN_1803f9460(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a26368;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x450,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




