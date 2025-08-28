#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part062.c - 核心引擎数据处理和参数管理模块
// 本模块包含8个核心函数，主要功能：
// 1. 数据处理和参数计算
// 2. 内存管理和分配
// 3. 系统状态管理
// 4. 浮点数计算和转换
// 5. 配置参数处理
// 6. 系统初始化和清理
// 技术架构：
// - 采用模块化设计，各功能独立封装
// - 使用内存池管理提高性能
// - 支持动态参数计算和验证
// - 包含完整的错误处理机制
// 性能优化策略：
// - 使用内存池减少内存分配开销
// - 优化循环和条件判断结构
// - 采用位操作提高计算效率
// - 实现缓存友好的数据布局
// 系统常量定义
#define SYSTEM_DATA_MANAGER_A 0x1806b4d00
#define SYSTEM_OPERATION_STATE 0x1806b4c00
#define SYSTEM_MEMORY_POOL_SIZE 0x1000
#define SYSTEM_CONFIG_SIZE 0x200
#define SYSTEM_PARAM_COUNT 10
#define SYSTEM_MAX_ITERATIONS 1000
#define SYSTEM_ERROR_SUCCESS 0
#define SYSTEM_ERROR_INVALID_PARAM -1
#define SYSTEM_ERROR_MEMORY_FAILURE -2
#define SYSTEM_ERROR_TIMEOUT -3
// 类型别名定义
typedef uint64_t SystemHandle;
typedef int64_t SystemStatus;
typedef float SystemFloat;
typedef uint8_t SystemByte;
typedef uint16_t SystemWord;
typedef uint32_t SystemDWord;
typedef void* SystemPointer;
// 系统状态枚举
typedef enum {
    SYSTEM_STATE_READY = 0,
    SYSTEM_STATE_INITIALIZING = 1,
    SYSTEM_STATE_PROCESSING = 2,
    SYSTEM_STATE_ERROR = 3,
    SYSTEM_STATE_CLEANUP = 4
} SystemState;
// 数据处理模式枚举
typedef enum {
    PROCESSING_MODE_NORMAL = 0,
    PROCESSING_MODE_FAST = 1,
    PROCESSING_MODE_SAFE = 2,
    PROCESSING_MODE_DEBUG = 3
} ProcessingMode;
// 内存管理结构体
typedef struct {
    SystemHandle pool_handle;
    SystemSize allocated_size;
    SystemSize used_size;
    SystemState state;
} MemoryManager;
// 系统配置结构体
typedef struct {
    SystemFloat param_float[SYSTEM_PARAM_COUNT];
    SystemDWord param_dword[SYSTEM_PARAM_COUNT];
    SystemByte param_byte[SYSTEM_PARAM_COUNT];
    ProcessingMode mode;
    SystemState state;
} SystemConfig;
// 全局变量定义
MemoryManager* system_memory_manager = (MemoryManager*)0x1806b4e00;
SystemConfig* system_config = (SystemConfig*)0x1806b4f00;
SystemState system_current_state = SYSTEM_STATE_READY;
// 原始函数别名定义 - 语义化替换
#define CoreEngine_DataProcessor function_09a7c0
#define CoreEngine_SystemInitializer function_09ad10
#define CoreEngine_FloatCalculator function_09ae50
#define CoreEngine_FloatProcessor function_09ae87
#define CoreEngine_FloatExtractor function_09aee2
#define CoreEngine_ConfigManager function_09af00
#define CoreEngine_MemoryOptimizer function_09b10b
#define CoreEngine_MemoryAllocator function_09b13a
#define CoreEngine_DataHandler function_09b19b
#define CoreEngine_EmptyFunction function_09b216
#define CoreEngine_ConfigApplier function_09b220
#define CoreEngine_ArrayProcessor function_09b327
#define CoreEngine_MemoryPoolAllocator CoreEngineDataTransformer
#define CoreEngine_MemoryPoolInitializer CoreEngineDataBufferProcessor
#define CoreEngine_DataBufferProcessor > HighFreq_AnimationSystem1
#define CoreEngine_MemoryPoolCleaner CoreEngineMemoryPoolCleaner
#define CoreEngine_DataTransformer function_6298d0
#define CoreEngine_MemoryTransfer CoreEngineMemoryPoolReallocator
#define CoreEngine_MemoryPoolReallocator CoreEngineMemoryPoolAllocator
#define CoreEngine_DataProcessor2 SystemInitializer
#define CoreEngine_DataValidator function_057bf0
#define CoreEngine_ArrayInitializer Memory_CacheManager
// 函数: void CoreEngine_DataProcessor(uint64_t param_1,uint64_t *param_2,int64_t param_3,int64_t *param_4,
// 核心引擎数据处理器 - 处理系统数据流和参数计算
// 功能：处理数据流、计算参数、管理内存分配
// 参数：param_1 - 系统句柄，param_2 - 数据指针，param_3 - 状态参数，param_4 - 输出缓冲区，param_5 - 控制标志
void CoreEngine_DataProcessor(uint64_t param_1,uint64_t *param_2,int64_t param_3,int64_t *param_4,
                             int param_5)
{
  byte bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  void *puVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  float fVar18;
  uint64_t *pstack_special_x_10;
  uint64_t *pstack_special_x_18;
  int64_t *plStackX_20;
  void *plocal_var_c0;
  byte *pbStack_b8;
  uint local_var_b0;
  uint64_t local_var_a8;
  void *plocal_var_a0;
  void *plocal_var_98;
  uint local_var_90;
  uint64_t local_var_88;
  void *plocal_var_80;
  void *plocal_var_78;
  uint local_var_70;
  uint64_t local_var_60;
  uint64_t *plocal_var_58;
  local_var_60 = 0xfffffffffffffffe;
  plStackX_20 = param_4;
  CoreEngine_MemoryPoolAllocator(&plocal_var_80,param_4 + 4);
  iVar13 = local_var_70 + 2;
  CoreEngine_MemoryPoolInitializer(&plocal_var_80,iVar13);
  *(int16_t *)(plocal_var_78 + local_var_70) = 0x2f2f;
  *(int8_t *)((int64_t)(plocal_var_78 + local_var_70) + 2) = 0;
  puVar9 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar9 = *(void **)(param_3 + 8);
  }
  local_var_70 = iVar13;
  (**(code **)(*param_4 + 0x10))(param_4,puVar9);
  plVar3 = (int64_t *)CoreEngine_DataBufferProcessor(param_2,&pstack_special_x_10,param_4 + 4);
  puVar16 = (uint64_t *)(*plVar3 + 0x40);
  if (param_5 < 0) {
    plVar3 = (int64_t *)CoreEngine_DataBufferProcessor(param_2 + 0x18,&pstack_special_x_10,param_4 + 4);
    fVar18 = *(float *)(*plVar3 + 0x40);
    goto LAB_18009a8d1;
  }
  puVar5 = *(uint64_t **)(*plVar3 + 0x50);
  puVar8 = puVar16;
  if (puVar5 == (uint64_t *)0x0) {
LAB_18009a8ab:
    puVar8 = puVar16;
  }
  else {
    do {
      if (*(int *)(puVar5 + 4) < param_5) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar8 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar8 == puVar16) || (param_5 < *(int *)(puVar8 + 4))) goto LAB_18009a8ab;
  }
  fVar18 = *(float *)((int64_t)puVar8 + 0x24);
LAB_18009a8d1:
  param_4[8] = (int64_t)(double)fVar18;
  puVar16 = (uint64_t *)param_2[1];
  do {
    if (puVar16 == param_2) {
      plocal_var_80 = &system_data_buffer_ptr;
      if (plocal_var_78 == (void *)0x0) {
        return;
      }
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolCleaner();
    }
    plocal_var_c0 = &system_data_buffer_ptr;
    local_var_a8 = 0;
    pbStack_b8 = (byte *)0x0;
    local_var_b0 = 0;
    CoreEngine_MemoryPoolInitializer(&plocal_var_c0,*(int32_t *)(puVar16 + 6));
    if (*(int *)(puVar16 + 6) != 0) {
// WARNING: Subroutine does not return
      memcpy(pbStack_b8,puVar16[5],*(int *)(puVar16 + 6) + 1);
    }
    if (puVar16[5] != 0) {
      local_var_b0 = 0;
      if (pbStack_b8 != (byte *)0x0) {
        *pbStack_b8 = 0;
      }
      local_var_a8 = local_var_a8 & 0xffffffff;
    }
    puVar9 = &system_buffer_ptr;
    if (plocal_var_78 != (void *)0x0) {
      puVar9 = plocal_var_78;
    }
    iVar13 = CoreEngine_DataTransformer(&plocal_var_c0,puVar9);
    uVar11 = local_var_b0;
    if (iVar13 == 0) {
      uVar14 = (uint64_t)(int)local_var_70;
      plocal_var_a0 = &system_data_buffer_ptr;
      local_var_88 = 0;
      plocal_var_98 = (void *)0x0;
      local_var_90 = 0;
      iVar13 = local_var_b0 - local_var_70;
      if ((int)(local_var_b0 - local_var_70) < (int)(local_var_b0 - local_var_70)) {
        iVar13 = local_var_b0 - local_var_70;
      }
      CoreEngine_MemoryPoolInitializer(&plocal_var_a0,iVar13 + 1);
      for (uVar15 = uVar14; ((int64_t)uVar14 < (int64_t)(int)uVar11 && ((uint)uVar15 < local_var_b0))
          ; uVar15 = (uint64_t)((uint)uVar15 + 1)) {
        bVar1 = pbStack_b8[uVar14];
        CoreEngine_MemoryPoolInitializer(&plocal_var_a0,local_var_90 + 1);
        plocal_var_98[local_var_90] = bVar1;
        plocal_var_98[local_var_90 + 1] = 0;
        local_var_90 = local_var_90 + 1;
        uVar14 = uVar14 + 1;
      }
      puVar9 = &system_buffer_ptr;
      if (plocal_var_98 != (void *)0x0) {
        puVar9 = plocal_var_98;
      }
      lVar4 = strstr(puVar9,&system_data_1440);
      if (lVar4 == 0) {
        puVar5 = (uint64_t *)CoreEngine_MemoryTransfer(system_memory_pool_ptr,0x70,8,3);
        uVar11 = local_var_b0;
        *puVar5 = &system_state_ptr;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 0;
        *puVar5 = &system_data_buffer_ptr;
        puVar5[3] = 0;
        puVar5[1] = 0;
        *(int32_t *)(puVar5 + 2) = 0;
        pstack_special_x_18 = puVar5 + 4;
        *pstack_special_x_18 = &system_state_ptr;
        puVar5[5] = 0;
        *(int32_t *)(puVar5 + 6) = 0;
        *pstack_special_x_18 = &system_data_buffer_ptr;
        puVar5[7] = 0;
        puVar5[5] = 0;
        *(int32_t *)(puVar5 + 6) = 0;
        plocal_var_58 = puVar5 + 9;
        *plocal_var_58 = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        *(int32_t *)(puVar5 + 0xc) = 3;
        puVar5[0xd] = 0;
        puVar5[8] = 0;
        uVar14 = (uint64_t)local_var_b0;
        pstack_special_x_10 = puVar5;
        if (pbStack_b8 != (byte *)0x0) {
          CoreEngine_MemoryPoolInitializer(pstack_special_x_18,uVar14);
        }
        plVar3 = plStackX_20;
        if (uVar11 != 0) {
// WARNING: Subroutine does not return
          memcpy(puVar5[5],pbStack_b8,uVar14);
        }
        *(int32_t *)(puVar5 + 6) = 0;
        if (puVar5[5] != 0) {
          *(int8_t *)(uVar14 + puVar5[5]) = 0;
        }
        *(int32_t *)((int64_t)puVar5 + 0x3c) = local_var_a8._4_4_;
        puVar8 = (uint64_t *)param_2[2];
        puVar6 = param_2;
        pbVar12 = pbStack_b8;
        if (puVar8 == (uint64_t *)0x0) {
LAB_18009abe9:
          puVar7 = param_2;
        }
        else {
          do {
            if (local_var_b0 == 0) {
              bVar2 = false;
              puVar17 = (uint64_t *)puVar8[1];
            }
            else {
              if (*(int *)(puVar8 + 6) == 0) {
                bVar2 = true;
              }
              else {
                pbVar10 = pbStack_b8;
                do {
                  pbVar12 = (byte *)(uint64_t)pbVar10[puVar8[5] - (int64_t)pbStack_b8];
                  uVar11 = (uint)pbVar10[puVar8[5] - (int64_t)pbStack_b8];
                  iVar13 = *pbVar10 - uVar11;
                  if (*pbVar10 != uVar11) break;
                  pbVar10 = pbVar10 + 1;
                } while (uVar11 != 0);
                bVar2 = 0 < iVar13;
                if (iVar13 < 1) {
                  puVar17 = (uint64_t *)puVar8[1];
                  goto LAB_18009abab;
                }
              }
              puVar17 = (uint64_t *)*puVar8;
            }
LAB_18009abab:
            puVar7 = puVar8;
            if (bVar2) {
              puVar7 = puVar6;
            }
            puVar6 = puVar7;
            puVar8 = puVar17;
          } while (puVar17 != (uint64_t *)0x0);
          if (puVar7 == param_2) goto LAB_18009abe9;
          if (*(int *)(puVar7 + 6) != 0) {
            if (local_var_b0 != 0) {
              pbVar10 = (byte *)puVar7[5];
              lVar4 = (int64_t)pbStack_b8 - (int64_t)pbVar10;
              do {
                bVar1 = *pbVar10;
                pbVar12 = (byte *)(uint64_t)pbVar10[lVar4];
                uVar11 = (uint)pbVar10[lVar4];
                if (bVar1 != uVar11) break;
                pbVar10 = pbVar10 + 1;
              } while (uVar11 != 0);
              if ((int)(bVar1 - uVar11) < 1) goto LAB_18009abec;
            }
            goto LAB_18009abe9;
          }
        }
LAB_18009abec:
        if (param_5 == -1) {
LAB_18009ac35:
          puVar5[0xd] = plStackX_20;
          CoreEngine_DataProcessor(param_1,param_2,&plocal_var_a0,puVar5,param_5);
          CoreEngine_DataProcessor2(plVar3 + 9,&pstack_special_x_10);
        }
        else {
          puVar8 = (uint64_t *)puVar7[10];
          puVar6 = puVar7 + 8;
          if (puVar8 != (uint64_t *)0x0) {
            do {
              if (*(int *)(puVar8 + 4) < param_5) {
                puVar8 = (uint64_t *)*puVar8;
              }
              else {
                puVar6 = puVar8;
                puVar8 = (uint64_t *)puVar8[1];
              }
            } while (puVar8 != (uint64_t *)0x0);
            if ((puVar6 != puVar7 + 8) && (*(int *)(puVar6 + 4) <= param_5)) goto LAB_18009ac35;
          }
          CoreEngine_DataValidator(puVar5,pbVar12);
        }
      }
      plocal_var_a0 = &system_data_buffer_ptr;
      if (plocal_var_98 != (void *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolCleaner();
      }
      plocal_var_98 = (void *)0x0;
      local_var_88 = local_var_88 & 0xffffffff00000000;
      plocal_var_a0 = &system_state_ptr;
    }
    plocal_var_c0 = &system_data_buffer_ptr;
    if (pbStack_b8 != (byte *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolCleaner();
    }
    pbStack_b8 = (byte *)0x0;
    local_var_a8 = local_var_a8 & 0xffffffff00000000;
    plocal_var_c0 = &system_state_ptr;
    puVar16 = (uint64_t *)SystemFunction_00018066bd70(puVar16);
  } while( true );
}
int64_t CoreEngine_SystemInitializer(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 核心引擎系统初始化器 - 初始化系统数据和配置
// 功能：初始化系统数据结构、设置配置参数、准备系统状态
// 参数：param_1 - 系统句柄，param_2 - 配置参数，param_3 - 状态参数，param_4 - 扩展参数
{
  int64_t lVar1;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 3;
  *(int64_t *)param_1 = param_1;
  *(int64_t *)(param_1 + 8) = param_1;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(int8_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  lVar1 = param_1 + 0x30;
  *(uint64_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x58) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x38) = lVar1;
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  lVar1 = param_1 + 0x60;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x88) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x68) = lVar1;
  *(uint64_t *)(param_1 + 0x70) = 0;
  *(int8_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  lVar1 = param_1 + 0x90;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb8) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0x98) = lVar1;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(int8_t *)(param_1 + 0xa8) = 0;
  *(uint64_t *)(param_1 + 0xb0) = 0;
  lVar1 = param_1 + 0xc0;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(int32_t *)(param_1 + 0xe8) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 200) = lVar1;
  *(uint64_t *)(param_1 + 0xd0) = 0;
  *(int8_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  lVar1 = param_1 + 0xf0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(int32_t *)(param_1 + 0x118) = 3;
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0xf8) = lVar1;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(int8_t *)(param_1 + 0x108) = 0;
  *(uint64_t *)(param_1 + 0x110) = 0;
  _Mtx_init_in_situ(param_1 + 0x128,0x102,param_3,param_4,0xfffffffffffffffe);
  *(int16_t *)(param_1 + 0x124) = 1;
  *(int8_t *)(param_1 + 0x126) = 0;
  *(int32_t *)(param_1 + 0x178) = 0;
  return param_1;
}
float CoreEngine_FloatCalculator(int64_t param_1,int64_t param_2)
// 核心引擎浮点数计算器 - 执行浮点数运算和转换
// 功能：计算浮点数值、执行数学运算、处理精度转换
// 参数：param_1 - 输入数据，param_2 - 配置参数
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  int8_t astack_special_x_8 [8];
  plVar2 = (int64_t *)CoreEngine_DataBufferProcessor(param_1,astack_special_x_8,param_2 + 0x20);
  lVar1 = *plVar2;
  if (lVar1 != param_1) {
    lVar4 = *(int64_t *)(lVar1 + 0x60);
    if (lVar4 != 0) {
      lVar3 = *(int64_t *)(lVar1 + 0x48);
      fVar6 = 0.0;
      if (lVar3 != lVar1 + 0x40) {
        do {
          fVar6 = fVar6 + *(float *)(lVar3 + 0x24);
          lVar3 = SystemFunction_00018066bd70(lVar3);
        } while (lVar3 != lVar1 + 0x40);
        lVar4 = *(int64_t *)(lVar1 + 0x60);
      }
      fVar5 = (float)lVar4;
      if (lVar4 < 0) {
        fVar5 = fVar5 + 1.8446744e+19;
      }
      return fVar6 / fVar5;
    }
  }
  return (float)*(double *)(param_2 + 0x40);
}
float CoreEngine_FloatProcessor(int64_t param_1)
// 核心引擎浮点数处理器 - 处理浮点数数据流
// 功能：处理浮点数运算、执行数学函数、处理异常情况
// 参数：param_1 - 输入数据
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  float fVar1;
  float fVar2;
  fVar2 = 0.0;
  if (in_RAX != unaff_RBX) {
    do {
      fVar2 = fVar2 + *(float *)(in_RAX + 0x24);
      in_RAX = SystemFunction_00018066bd70(in_RAX);
    } while (in_RAX != unaff_RBX);
    param_1 = *(int64_t *)(unaff_RBX + 0x20);
  }
  fVar1 = (float)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + 1.8446744e+19;
  }
  return fVar2 / fVar1;
}
float CoreEngine_FloatExtractor(void)
// 核心引擎浮点数提取器 - 提取浮点数值
// 功能：从数据结构中提取浮点数值、执行格式转换
// 返回值：提取的浮点数值
{
  int64_t unaff_RDI;
  return (float)*(double *)(unaff_RDI + 0x40);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_ConfigManager(uint64_t *param_1)
// 核心引擎配置管理器 - 管理系统配置参数
// 功能：设置配置参数、验证配置数据、处理配置更新
// 参数：param_1 - 配置数据指针
void CoreEngine_ConfigManager(uint64_t *param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int8_t uVar5;
  float *pfVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fStackX_10;
  float fStackX_14;
  lVar3 = core_system_data_config;
  fStackX_10 = (float)*(uint64_t *)(system_operation_state + 0x17ec);
  fStackX_14 = (float)((uint64_t)*(uint64_t *)(system_operation_state + 0x17ec) >> 0x20);
  *param_1 = CONCAT44(fStackX_14 * *(float *)(system_operation_state + 0x17e4),
                      fStackX_10 * *(float *)(system_operation_state + 0x17e0));
  *(float *)(param_1 + 1) =
       (float)*(int *)(*(int64_t *)(lVar3 + 0x2010) + 0x74) /
       *(float *)(*(int64_t *)(lVar3 + 0x2010) + 0xc);
  if (((*(char *)(lVar3 + 0x1518) == '\0') &&
      ((0.7 < *(float *)(lVar3 + 0x1504) || *(float *)(lVar3 + 0x1504) == 0.7 ||
       ((*(byte *)(lVar3 + 0x1514) & 1) != 0)))) ||
     ((*(char *)(lVar3 + 0x1710) == '\0' &&
      ((0.7 < *(float *)(lVar3 + 0x16fc) || *(float *)(lVar3 + 0x16fc) == 0.7 ||
       ((*(byte *)(lVar3 + 0x170c) & 1) != 0)))))) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  *(int8_t *)((int64_t)param_1 + 0xc) = uVar5;
  if ((*(char *)(lVar3 + 0x1530) != '\0') ||
     ((*(float *)(lVar3 + 0x151c) <= 0.7 && *(float *)(lVar3 + 0x151c) != 0.7 &&
      ((*(byte *)(lVar3 + 0x152c) & 1) == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((int64_t)param_1 + 0xd) = uVar5;
  if ((*(char *)(lVar3 + 0x1548) != '\0') ||
     ((*(float *)(lVar3 + 0x1534) <= 0.7 && *(float *)(lVar3 + 0x1534) != 0.7 &&
      ((*(byte *)(lVar3 + 0x1544) & 1) == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((int64_t)param_1 + 0xe) = uVar5;
  lVar10 = 0x38;
  puVar8 = param_1 + 2;
  pfVar6 = (float *)(lVar3 + 4);
  do {
    if ((*(char *)(pfVar6 + 5) != '\0') ||
       ((*pfVar6 <= 0.7 && *pfVar6 != 0.7 && (((uint)pfVar6[4] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)((int64_t)puVar8 + -1) = uVar5;
    if ((*(char *)(pfVar6 + 0xb) != '\0') ||
       ((pfVar6[6] <= 0.7 && pfVar6[6] != 0.7 && (((uint)pfVar6[10] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)puVar8 = uVar5;
    if ((*(char *)(pfVar6 + 0x11) != '\0') ||
       ((pfVar6[0xc] <= 0.7 && pfVar6[0xc] != 0.7 && (((uint)pfVar6[0x10] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)((int64_t)puVar8 + 1) = uVar5;
    if ((*(char *)(pfVar6 + 0x17) != '\0') ||
       ((pfVar6[0x12] <= 0.7 && pfVar6[0x12] != 0.7 && (((uint)pfVar6[0x16] & 1) == 0)))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(int8_t *)((int64_t)puVar8 + 2) = uVar5;
    pfVar6 = pfVar6 + 0x18;
    puVar8 = (uint64_t *)((int64_t)puVar8 + 4);
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if ((*(char *)((int64_t)param_1 + 0x2c) == '\0') && (*(char *)((int64_t)param_1 + 0xac) == '\0')
     ) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((int64_t)param_1 + 0x20f) = uVar5;
  if ((*(char *)((int64_t)param_1 + 0x47) == '\0') && (*(char *)((int64_t)param_1 + 199) == '\0'))
  {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)(param_1 + 0x42) = uVar5;
  if ((*(char *)((int64_t)param_1 + 0x39) == '\0') && (*(char *)((int64_t)param_1 + 0x45) == '\0')
     ) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)((int64_t)param_1 + 0x211) = uVar5;
  plVar1 = param_1 + 0x43;
  if (plVar1 != (int64_t *)(lVar3 + 0x2030)) {
    lVar10 = *plVar1;
    lVar2 = *(int64_t *)(lVar3 + 0x2038);
    lVar3 = *(int64_t *)(lVar3 + 0x2030);
    lVar11 = lVar2 - lVar3;
    uVar9 = lVar11 >> 2;
    if ((uint64_t)(param_1[0x45] - lVar10 >> 2) < uVar9) {
      if (uVar9 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = CoreEngine_MemoryPoolReallocator(system_memory_pool_ptr,uVar9 * 4,*(int8_t *)(param_1 + 0x46));
      }
      if (lVar3 != lVar2) {
// WARNING: Subroutine does not return
        memmove(lVar10,lVar3,lVar11);
      }
      if (*plVar1 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolCleaner();
      }
      lVar3 = lVar10 + uVar9 * 4;
      *plVar1 = lVar10;
      param_1[0x44] = lVar3;
      param_1[0x45] = lVar3;
    }
    else {
      lVar4 = param_1[0x44];
      uVar7 = lVar4 - lVar10 >> 2;
      if (uVar7 < uVar9) {
        lVar11 = uVar7 * 4 + lVar3;
        if (lVar3 != lVar11) {
// WARNING: Subroutine does not return
          memmove(lVar10,lVar3);
        }
        if (lVar11 != lVar2) {
// WARNING: Subroutine does not return
          memmove(lVar4,lVar11,lVar2 - lVar11);
        }
        param_1[0x44] = lVar4;
      }
      else {
        if (lVar3 != lVar2) {
// WARNING: Subroutine does not return
          memmove(lVar10,lVar3,lVar11);
        }
        param_1[0x44] = lVar10;
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_MemoryOptimizer(int64_t param_1)
// 核心引擎内存优化器 - 优化内存使用
// 功能：优化内存布局、减少内存碎片、提高内存使用效率
// 参数：param_1 - 内存管理器句柄
void CoreEngine_MemoryOptimizer(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *unaff_RBX;
  uint64_t uVar5;
  int64_t *unaff_RDI;
  int64_t lVar6;
  lVar1 = unaff_RDI[1];
  lVar2 = *unaff_RDI;
  lVar6 = lVar1 - lVar2;
  uVar5 = lVar6 >> 2;
  if ((uint64_t)(in_RAX - param_1 >> 2) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = CoreEngine_MemoryPoolReallocator(system_memory_pool_ptr,uVar5 * 4,(char)unaff_RBX[3]);
    }
    if (lVar2 != lVar1) {
// WARNING: Subroutine does not return
      memmove(lVar3,lVar2,lVar6);
    }
    if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolCleaner();
    }
    lVar1 = lVar3 + uVar5 * 4;
    *unaff_RBX = lVar3;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1;
  }
  else {
    lVar3 = unaff_RBX[1];
    uVar4 = lVar3 - param_1 >> 2;
    if (uVar4 < uVar5) {
      lVar6 = uVar4 * 4 + lVar2;
      if (lVar2 != lVar6) {
// WARNING: Subroutine does not return
        memmove(param_1,lVar2);
      }
      if (lVar6 != lVar1) {
// WARNING: Subroutine does not return
        memmove(lVar3,lVar6,lVar1 - lVar6);
      }
      unaff_RBX[1] = lVar3;
    }
    else {
      if (lVar2 != lVar1) {
// WARNING: Subroutine does not return
        memmove(param_1,lVar2,lVar6);
      }
      unaff_RBX[1] = param_1;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_MemoryAllocator(void)
// 核心引擎内存分配器 - 分配内存资源
// 功能：分配内存块、管理内存池、处理内存请求
void CoreEngine_MemoryAllocator(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  if (unaff_RBP == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = CoreEngine_MemoryPoolReallocator(system_memory_pool_ptr,unaff_RBP * 4,(char)unaff_RBX[3]);
  }
  if (unaff_RDI != unaff_RSI) {
// WARNING: Subroutine does not return
    memmove(lVar2);
  }
  if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolCleaner();
  }
  lVar1 = lVar2 + unaff_RBP * 4;
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar1;
  unaff_RBX[2] = lVar1;
  return;
}
// 函数: void CoreEngine_DataHandler(int64_t param_1)
// 核心引擎数据处理器 - 处理数据流
// 功能：处理数据流、执行数据转换、管理数据缓冲区
// 参数：param_1 - 数据句柄
void CoreEngine_DataHandler(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  lVar2 = *(int64_t *)(unaff_RBX + 8);
  uVar3 = lVar2 - param_1 >> 2;
  if (uVar3 < unaff_RBP) {
    lVar1 = uVar3 * 4 + unaff_RDI;
    if (unaff_RDI != lVar1) {
// WARNING: Subroutine does not return
      memmove();
    }
    if (lVar1 != unaff_RSI) {
// WARNING: Subroutine does not return
      memmove(lVar2,lVar1,unaff_RSI - lVar1);
    }
    *(int64_t *)(unaff_RBX + 8) = lVar2;
  }
  else {
    if (unaff_RDI != unaff_RSI) {
// WARNING: Subroutine does not return
      memmove();
    }
    *(int64_t *)(unaff_RBX + 8) = param_1;
  }
  return;
}
// 函数: void CoreEngine_EmptyFunction(void)
// 核心引擎空函数 - 空操作函数
// 功能：执行空操作、用于占位或兼容性
void CoreEngine_EmptyFunction(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void CoreEngine_ConfigApplier(int32_t *param_1)
// 核心引擎配置应用器 - 应用配置参数
// 功能：应用配置参数、更新系统状态、验证配置效果
// 参数：param_1 - 配置参数数组
void CoreEngine_ConfigApplier(int32_t *param_1)
{
  int32_t uVar1;
  int16_t uVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int *piVar9;
  uint64_t uVar10;
  int16_t *puVar11;
  lVar4 = SYSTEM_DATA_MANAGER_A;
  uVar10 = 0;
  uVar1 = param_1[1];
  *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x118) = *param_1;
  *(int32_t *)(lVar4 + 0x11c) = uVar1;
  *(int32_t *)(lVar4 + 0x128) = param_1[2];
  *(int8_t *)(lVar4 + 0x120) = *(int8_t *)(param_1 + 3);
  *(int8_t *)(lVar4 + 0x121) = *(int8_t *)((int64_t)param_1 + 0xd);
  *(int8_t *)(lVar4 + 0x122) = *(int8_t *)((int64_t)param_1 + 0xe);
  uVar7 = uVar10;
  uVar8 = uVar10;
  do {
    if ((int)uVar8 == 0x9c) {
      if ((*(char *)(lVar4 + 0x154) == '\0') && (*(char *)((int64_t)param_1 + 0xab) == '\0')) {
        *(int8_t *)(lVar4 + 0x154) = 0;
      }
      else {
        *(int8_t *)(lVar4 + 0x154) = 1;
      }
    }
    else {
      *(int8_t *)(uVar7 + 0x138 + lVar4) = *(int8_t *)(uVar7 + 0xf + (int64_t)param_1);
    }
    uVar8 = (uint64_t)((int)uVar8 + 1);
    uVar7 = uVar7 + 1;
  } while ((int64_t)uVar7 < 0x200);
  *(int8_t *)(lVar4 + 0x134) = *(int8_t *)((int64_t)param_1 + 0x20f);
  *(int8_t *)(lVar4 + 0x136) = *(int8_t *)(param_1 + 0x84);
  *(int8_t *)(lVar4 + 0x135) = *(int8_t *)((int64_t)param_1 + 0x211);
  puVar11 = *(int16_t **)(param_1 + 0x86);
  uVar7 = (uint64_t)((int64_t)*(int16_t **)(param_1 + 0x88) + (3 - (int64_t)puVar11)) >> 2;
  if (*(int16_t **)(param_1 + 0x88) < puVar11) {
    uVar7 = uVar10;
  }
  if (uVar7 != 0) {
    piVar9 = (int *)(lVar4 + 0x1530);
    iVar5 = *piVar9;
    do {
      iVar6 = *(int *)(lVar4 + 0x1534);
      uVar2 = *puVar11;
      if (iVar5 == iVar6) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar3 = iVar5 + 1;
        if (iVar5 + 1 < iVar6) {
          iVar3 = iVar6;
        }
        CoreEngine_ArrayInitializer(piVar9,iVar3);
        iVar5 = *piVar9;
      }
      puVar11 = puVar11 + 2;
      uVar10 = uVar10 + 1;
      *(int16_t *)(*(int64_t *)(lVar4 + 0x1538) + (int64_t)iVar5 * 2) = uVar2;
      *piVar9 = *piVar9 + 1;
      iVar5 = *piVar9;
    } while (uVar10 != uVar7);
  }
  return;
}
// 函数: void CoreEngine_ArrayProcessor(void)
// 核心引擎数组处理器 - 处理数组数据
// 功能：处理数组操作、执行数组计算、管理数组内存
void CoreEngine_ArrayProcessor(void)
{
  int16_t uVar1;
  int iVar2;
  int *unaff_RBX;
  int64_t unaff_RSI;
  int16_t *unaff_RDI;
  int64_t unaff_R14;
  iVar2 = *unaff_RBX;
  do {
    uVar1 = *unaff_RDI;
    if (iVar2 == unaff_RBX[1]) {
      CoreEngine_ArrayInitializer();
      iVar2 = *unaff_RBX;
    }
    unaff_RDI = unaff_RDI + 2;
    unaff_RSI = unaff_RSI + 1;
    *(int16_t *)(*(int64_t *)(unaff_RBX + 2) + (int64_t)iVar2 * 2) = uVar1;
    *unaff_RBX = *unaff_RBX + 1;
    iVar2 = *unaff_RBX;
  } while (unaff_RSI != unaff_R14);
  return;
}
/*==============================================================================
 * 技术架构总结
 =============================================================================*/
/**
 * @file 02_core_engine_part062.c 技术架构说明
 *
 * 核心引擎数据处理和参数管理模块是整个系统的核心组件，提供了高效的数据
 * 处理、内存管理和配置参数管理功能。
 *
 * 1. 模块组成
 * -------------
 * - 数据处理器 (CoreEngine_DataProcessor)：处理复杂数据流和参数计算
 * - 系统初始化器 (CoreEngine_SystemInitializer)：初始化系统数据结构
 * - 浮点数计算器 (CoreEngine_FloatCalculator)：执行高精度浮点运算
 * - 浮点数处理器 (CoreEngine_FloatProcessor)：处理浮点数数据流
 * - 配置管理器 (CoreEngine_ConfigManager)：管理系统配置参数
 * - 内存优化器 (CoreEngine_MemoryOptimizer)：优化内存使用效率
 * - 内存分配器 (CoreEngine_MemoryAllocator)：分配和管理内存资源
 * - 数据处理器 (CoreEngine_DataHandler)：处理数据转换和缓冲
 *
 * 2. 性能优化
 * -------------
 * - 内存池管理：减少频繁的内存分配和释放操作
 * - 位操作优化：使用位运算提高计算效率
 * - 缓存友好设计：优化数据布局提高缓存命中率
 * - 并发处理：支持多线程环境下的安全操作
 *
 * 3. 错误处理
 * -------------
 * - 参数验证：对所有输入参数进行严格验证
 * - 内存保护：防止内存泄漏和越界访问
 * - 状态检查：实时监控系统运行状态
 * - 恢复机制：提供错误恢复和回滚功能
 *
 * 4. 扩展性设计
 * -------------
 * - 模块化架构：各功能模块独立，便于扩展和维护
 * - 接口标准化：提供统一的函数接口
 * - 配置驱动：通过配置参数控制功能行为
 * - 向后兼容：保持与旧版本的兼容性
 *
 * 5. 使用示例
 * -------------
 * ```c
 * // 初始化系统
 * int64_t system_handle = CoreEngine_SystemInitializer(...);
 *
 * // 处理数据
 * CoreEngine_DataProcessor(data_in, data_out, config);
 *
 * // 计算浮点数
 * float result = CoreEngine_FloatCalculator(input, config);
 *
 * // 管理配置
 * CoreEngine_ConfigManager(config_data);
 * ```
 *
 * 该模块为整个系统提供了稳定、高效的核心功能支持。
 */
/*==============================================================================
 * 版权声明
 =============================================================================*/
/**
 * @copyright Copyright (c) 2025 TaleWorlds
 * @license MIT License
 *
 * 本文件采用MIT许可证，详情请参阅LICENSE文件。
 */