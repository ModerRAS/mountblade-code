/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor


#include "RenderingSystemProcessor0_definition.h"
/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

/*=============================================================================
 * 03_rendering_part619.c - 渲染系统高级资源管理和字符串处理模块
 * 
 * 本模块包含15个核心函数，涵盖渲染系统高级资源管理、字符串处理、
 * 哈希表操作、内存管理、数据验证、参数处理、状态管理和系统清理等高级渲染功能。
 *=============================================================================*/

/* 渲染系统常量定义 */
#define RENDERING_SYSTEM_THRESHOLD_5_0      5.0f    /* 渲染系统阈值5.0 */
#define RENDERING_SYSTEM_THRESHOLD_10_0     10.0f   /* 渲染系统阈值10.0 */
#define RENDERING_SYSTEM_THRESHOLD_16_0     16.0f   /* 渲染系统阈值16.0 */
#define RENDERING_SYSTEM_THRESHOLD_21_0     21.0f   /* 渲染系统阈值21.0 */
#define RENDERING_SYSTEM_HASH_TABLE_SIZE     0x60    /* 渲染系统哈希表大小 */
#define RENDERING_SYSTEM_STRING_BUFFER_SIZE  0x170   /* 渲染系统字符串缓冲区大小 */
#define RENDERING_SYSTEM_DATA_OFFSET_0x28   0x28    /* 渲染系统数据偏移量0x28 */
#define RENDERING_SYSTEM_DATA_OFFSET_0x30   0x30    /* 渲染系统数据偏移量0x30 */
#define RENDERING_SYSTEM_DATA_OFFSET_0x5c8  0x5c8   /* 渲染系统数据偏移量0x5c8 */
#define RENDERING_SYSTEM_DATA_OFFSET_0x5d0  0x5d0   /* 渲染系统数据偏移量0x5d0 */
#define RENDERING_SYSTEM_FLAG_ENABLE         1       /* 渲染系统标志启用 */
#define RENDERING_SYSTEM_FLAG_DISABLE        0       /* 渲染系统标志禁用 */

/* 渲染系统函数别名定义 */
#define RenderingSystem_ProcessResourceRequest          FUN_18060e170  /* 渲染系统资源请求处理器 */
#define RenderingSystem_ValidateResourceData            FUN_18060e5e0  /* 渲染系统资源数据验证器 */
#define RenderingSystem_FindResourceInHashTable         FUN_18060e650  /* 渲染系统哈希表资源查找器 */
#define RenderingSystem_CollectResourceMatches          FUN_18060e720  /* 渲染系统资源匹配收集器 */
#define RenderingSystem_ProcessResourceBatch            FUN_18060e762  /* 渲染系统资源批量处理器 */
#define RenderingSystem_EmptyFunction1                  FUN_18060e7e0  /* 渲染系统空函数1 */
#define RenderingSystem_InitializeResourceTable          FUN_18060e7f0  /* 渲染系统资源表初始化器 */
#define RenderingSystem_UpdateResourceState             FUN_18060e860  /* 渲染系统资源状态更新器 */
#define RenderingSystem_CreateResourceContext           FUN_18060e8a0  /* 渲染系统资源上下文创建器 */
#define RenderingSystem_FindResourceByPointer           FUN_18060ece0  /* 渲染系统指针资源查找器 */
#define RenderingSystem_AddResourceToTable              FUN_18060ee30  /* 渲染系统资源表添加器 */
#define RenderingSystem_RemoveResourceFromTable         FUN_18060ef00  /* 渲染系统资源表移除器 */
#define RenderingSystem_ReleaseResourceReference        FUN_18060ef16  /* 渲染系统资源引用释放器 */
#define RenderingSystem_EmptyFunction2                  FUN_18060ef6e  /* 渲染系统空函数2 */
#define RenderingSystem_EmptyFunction3                  FUN_18060ef9a  /* 渲染系统空函数3 */
#define RenderingSystem_CleanupResourcePointer          RenderingSystemValidator  /* 渲染系统资源指针清理器 */
#define RenderingSystem_GetResourceProperty             RenderingSystemInitializer  /* 渲染系统资源属性获取器 */
#define RenderingSystem_CheckResourceCapability          RenderingSystemProcessor  /* 渲染系统资源能力检查器 */
#define RenderingSystem_GetResourceExtendedProperty     RenderingSystemManager  /* 渲染系统资源扩展属性获取器 */
#define RenderingSystem_ExtractResourceData             RenderingSystemController  /* 渲染系统资源数据提取器 */
#define RenderingSystem_GetResourceIdentifier           RenderingSystemOptimizer  /* 渲染系统资源标识符获取器 */
#define RenderingSystem_GetResourceParameter            RenderingSystemCleaner  /* 渲染系统资源参数获取器 */
#define RenderingSystem_GetResourceIndex                RenderingSystemUpdater  /* 渲染系统资源索引获取器 */
#define RenderingSystem_ProcessResourceCommand          RenderingSystemRenderer  /* 渲染系统资源命令处理器 */

/* 渲染系统内存和数据处理函数别名定义 */
#define RenderingSystem_DataBufferProcessor              PhysicsSystem_IntegrationProcessor  /* 渲染系统数据缓冲区处理器 */
#define RenderingSystem_MemoryPoolAllocator             CoreEngineMemoryPoolAllocator  /* 渲染系统内存池分配器 */
#define RenderingSystem_FormatProcessor                  CoreEngineSystemCleanup  /* 渲染系统格式化处理器 */
#define RenderingSystem_DataContextInitializer           RenderingSystem_CameraController  /* 渲染系统数据上下文初始化器 */
#define RenderingSystem_MemoryPoolReallocator            DataValidator  /* 渲染系统内存池重分配器 */

/**
 * 渲染系统资源请求处理器
 * 
 * 根据参数阈值处理渲染资源请求，支持不同级别的资源分配和管理。
 * 
 * @param param_1   渲染参数ID
 * @param param_2   渲染标志位
 * @param param_3   阈值参数，用于确定资源分配级别
 * @param param_4   输出缓冲区指针
 */
void RenderingSystem_ProcessResourceRequest(int param_1, uint param_2, float param_3, int64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  int iVar12;
  uint64_t in_R8;
  uint auStackX_8 [2];
  int8_t auStack_70 [8];
  void *puStack_68;
  int32_t *puStack_60;
  uint uStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  uVar6 = 0;
  uVar9 = 0;
  if (5.0 <= param_3) {
    if (10.0 <= param_3) {
      if (16.0 <= param_3) {
        uVar9 = (21.0 <= param_3) + 3;
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar9;
  puVar4 = (uint64_t *)0x180c95e98;
  puVar7 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar7 + 4) < auStackX_8[0]) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar4 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    } while (puVar7 != (uint64_t *)0x0);
  }
  if ((puVar4 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar4 + 4))) {
    puVar4 = (uint64_t *)RenderingSystem_DataBufferProcessor(0x180c95e98,auStack_70,in_R8,puVar4,auStackX_8);
    puVar4 = (uint64_t *)*puVar4;
  }
  lVar5 = puVar4[5];
  if (lVar5 != 0) {
    uVar10 = uVar6;
    if (*(int *)(lVar5 + 0x5d0) < 1) {
      return;
    }
    do {
      puVar7 = (uint64_t *)(uVar6 + *(int64_t *)(lVar5 + 0x5c8));
      uVar1 = puVar7[1];
      *(uint64_t *)(uVar6 + param_4) = *puVar7;
      ((uint64_t *)(uVar6 + param_4))[1] = uVar1;
      uVar9 = (int)uVar10 + 1;
      uVar6 = uVar6 + 0x10;
      uVar10 = (uint64_t)uVar9;
    } while ((int)uVar9 < *(int *)(lVar5 + 0x5d0));
    return;
  }
  puStack_68 = &system_data_buffer_ptr;
  uStack_50 = 0;
  puStack_60 = (int32_t *)0x0;
  uStack_58 = 0;
  puStack_60 = (int32_t *)RenderingSystem_MemoryPoolAllocator(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_60 = 0;
  uVar2 = RenderingSystem_FormatProcessor(puStack_60);
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  *puStack_60 = 0x65636146;
  puStack_60[1] = 0x736e695f;
  puStack_60[2] = 0x636e6174;
  puStack_60[3] = 0x6f662065;
  puStack_60[4] = 0x61722072;
  *(int16_t *)(puStack_60 + 5) = 0x6563;
  *(int8_t *)((int64_t)puStack_60 + 0x16) = 0;
  uStack_58 = 0x16;
  RenderingSystem_DataContextInitializer(&puStack_68,param_1);
  uVar11 = uStack_58 + 0xc;
  if (uVar11 != 0) {
    uVar3 = uStack_58 + 0xd;
    if (puStack_60 == (int32_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_60 = (int32_t *)RenderingSystem_MemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
      *(int8_t *)puStack_60 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_50) goto LAB_18060e38b;
      puStack_60 = (int32_t *)RenderingSystem_MemoryPoolReallocator(system_memory_pool_ptr,puStack_60,uVar3,0x10,0x13);
    }
    uVar2 = RenderingSystem_FormatProcessor(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  }
LAB_18060e38b:
  puVar7 = (uint64_t *)((uint64_t)uStack_58 + (int64_t)puStack_60);
  *puVar7 = 0x6e656720726f6620;
  *(int32_t *)(puVar7 + 1) = 0x20726564;
  *(int8_t *)((int64_t)puVar7 + 0xc) = 0;
  uStack_58 = uVar11;
  RenderingSystem_DataContextInitializer(&puStack_68,param_2);
  uVar11 = uStack_58 + 0x13;
  if (uVar11 != 0) {
    uVar3 = uStack_58 + 0x14;
    if (puStack_60 == (int32_t *)0x0) {
      if ((int)uVar3 < 0x10) {
        uVar3 = 0x10;
      }
      puStack_60 = (int32_t *)RenderingSystem_MemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar3,0x13);
      *(int8_t *)puStack_60 = 0;
    }
    else {
      if (uVar3 <= (uint)uStack_50) goto LAB_18060e425;
      puStack_60 = (int32_t *)RenderingSystem_MemoryPoolReallocator(system_memory_pool_ptr,puStack_60,uVar3,0x10,0x13);
    }
    uVar2 = RenderingSystem_FormatProcessor(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  }
LAB_18060e425:
  puVar8 = (int32_t *)((uint64_t)uStack_58 + (int64_t)puStack_60);
  *puVar8 = 0x726f6620;
  puVar8[1] = 0x74616d20;
  puVar8[2] = 0x74697275;
  puVar8[3] = 0x79742079;
  puVar8[4] = 0x206570;
  uStack_58 = uVar11;
  lVar5 = FUN_1805705b0(&puStack_48,uVar9);
  if (0 < *(int *)(lVar5 + 0x10)) {
    iVar12 = uStack_58 + *(int *)(lVar5 + 0x10);
    if (iVar12 != 0) {
      uVar9 = iVar12 + 1;
      if (puStack_60 == (int32_t *)0x0) {
        if ((int)uVar9 < 0x10) {
          uVar9 = 0x10;
        }
        puStack_60 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar9,0x13);
        *(int8_t *)puStack_60 = 0;
      }
      else {
        if (uVar9 <= (uint)uStack_50) goto LAB_18060e4bb;
        puStack_60 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
      }
      uVar2 = RenderingSystem_FormatProcessor(puStack_60);
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
    }
LAB_18060e4bb:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((uint64_t)uStack_58 + (int64_t)puStack_60),*(uint64_t *)(lVar5 + 8),
           (int64_t)(*(int *)(lVar5 + 0x10) + 1));
  }
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &system_state_ptr;
  iVar12 = uStack_58 + 0x2f;
  if (iVar12 != 0) {
    uVar9 = uStack_58 + 0x30;
    if (puStack_60 == (int32_t *)0x0) {
      if ((int)uVar9 < 0x10) {
        uVar9 = 0x10;
      }
      puStack_60 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar9,0x13);
      *(int8_t *)puStack_60 = 0;
    }
    else {
      if (uVar9 <= (uint)uStack_50) goto LAB_18060e558;
      puStack_60 = (int32_t *)DataValidator(system_memory_pool_ptr,puStack_60,uVar9,0x10,0x13);
    }
    uVar2 = RenderingSystem_FormatProcessor(puStack_60);
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  }
LAB_18060e558:
  puVar7 = (uint64_t *)((uint64_t)uStack_58 + (int64_t)puStack_60);
  *puVar7 = 0x6620746f6e207369;
  puVar7[1] = 0x206e6920646e756f;
  *(int32_t *)(puVar7 + 2) = 0x5f746567;
  *(int32_t *)((int64_t)puVar7 + 0x14) = 0x6e696b73;
  *(int32_t *)(puVar7 + 3) = 0x6c6f635f;
  *(int32_t *)((int64_t)puVar7 + 0x1c) = 0x675f726f;
  *(int32_t *)(puVar7 + 4) = 0x69646172;
  *(int32_t *)((int64_t)puVar7 + 0x24) = 0x5f746e65;
  *(int32_t *)(puVar7 + 5) = 0x6e696f70;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = 0x217374;
  puVar8 = (int32_t *)&system_buffer_ptr;
  if (puStack_60 != (int32_t *)0x0) {
    puVar8 = puStack_60;
  }
  uStack_58 = iVar12;
  SystemDataInitializer(puVar8);
  puStack_68 = &system_data_buffer_ptr;
  if (puStack_60 == (int32_t *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



/**
 * 渲染系统资源数据验证器
 * 
 * 验证渲染系统资源数据的完整性和有效性，确保数据符合预期格式。
 * 
 * @param param_1   资源数据指针
 * @param param_2   验证参数
 * @param param_3   数据大小
 * @param param_4   验证标志
 * @return          验证结果，0表示失败，非0表示成功
 */
int RenderingSystem_ValidateResourceData(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  short sVar1;
  void *puStack_30;
  int64_t lStack_28;
  
  CoreMemoryPoolValidator(&puStack_30, param_1, param_3, param_4, 0xfffffffffffffffe);
  sVar1 = FUN_180571e20(&system_buffer_60c0, &puStack_30);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return (int)sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染系统哈希表资源查找器
 * 
 * 在哈希表中查找指定的资源，支持字符串匹配和索引查找。
 * 
 * @param param_1   要查找的资源字符串
 * @return          找到的资源索引，未找到返回-1
 */
int RenderingSystem_FindResourceInHashTable(int64_t param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  char *pcVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  iVar3 = (int)((render_system_memory - render_system_memory) / 0x60);
  lVar6 = (int64_t)iVar3;
  if (0 < iVar3) {
    puVar7 = (uint64_t *)(render_system_memory + 0x28);
    do {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(param_1 + lVar4) != '\0');
      iVar3 = *(int *)(puVar7 + 1);
      if (iVar3 == (int)lVar4) {
        if (iVar3 == 0) {
LAB_18060e6ee:
          if ((int)lVar4 != 0) goto LAB_18060e6f6;
          bVar9 = true;
        }
        else {
          pcVar5 = (char *)*puVar7;
          lVar4 = param_1 - (int64_t)pcVar5;
          do {
            cVar1 = *pcVar5;
            cVar2 = pcVar5[lVar4];
            if (cVar1 != cVar2) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          bVar9 = cVar1 == cVar2;
        }
      }
      else {
        if (iVar3 == 0) goto LAB_18060e6ee;
LAB_18060e6f6:
        bVar9 = false;
      }
      iVar3 = iVar8 + 1;
      if (!bVar9) {
        iVar3 = iVar8;
      }
      iVar8 = iVar3;
      puVar7 = puVar7 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源匹配收集器
 * 
 * 收集所有匹配指定条件的资源索引，支持批量操作。
 * 
 * @param param_1   要匹配的资源字符串
 * @param param_2   输出数组，存储匹配的索引
 */
void RenderingSystem_CollectResourceMatches(int64_t param_1, int *param_2)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  byte *pbVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  uVar6 = 0;
  iVar2 = (int)((render_system_memory - render_system_memory) / 0x60);
  lVar8 = (int64_t)iVar2;
  lVar7 = render_system_memory;
  uVar9 = uVar6;
  if (0 < iVar2) {
    do {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(char *)(param_1 + lVar3) != '\0');
      iVar2 = *(int *)(uVar6 + 0x30 + lVar7);
      iVar5 = (int)lVar3;
      if (iVar2 == iVar5) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(uVar6 + 0x28 + lVar7);
          lVar3 = param_1 - (int64_t)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar3;
            iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18060e7be:
        if (iVar5 == 0) {
          *param_2 = (int)uVar9;
          param_2 = param_2 + 1;
          lVar7 = render_system_memory;
        }
      }
      else if (iVar2 == 0) goto LAB_18060e7be;
      uVar6 = uVar6 + 0x60;
      lVar8 = lVar8 + -1;
      uVar9 = (uint64_t)((int)uVar9 + 1);
    } while (lVar8 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源批量处理器
 * 
 * 批量处理资源匹配和收集操作，支持循环处理。
 */
void RenderingSystem_ProcessResourceBatch(void)

{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  byte *pbVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R9;
  uint in_R10D;
  uint *in_R11;
  
  uVar6 = (uint64_t)in_R10D;
  do {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(in_R9 + lVar3) != '\0');
    iVar2 = *(int *)(uVar6 + 0x30 + unaff_RSI);
    iVar5 = (int)lVar3;
    if (iVar2 == iVar5) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(uVar6 + 0x28 + unaff_RSI);
        lVar3 = in_R9 - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar3;
          iVar5 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar5 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18060e7be:
      if (iVar5 == 0) {
        *in_R11 = in_R10D;
        in_R11 = in_R11 + 1;
        unaff_RSI = render_system_memory;
      }
    }
    else if (iVar2 == 0) goto LAB_18060e7be;
    in_R10D = in_R10D + 1;
    uVar6 = uVar6 + 0x60;
    unaff_RDI = unaff_RDI + -1;
    if (unaff_RDI == 0) {
      return;
    }
  } while( true );
}





/**
 * 渲染系统空函数1
 * 
 * 占位符函数，用于系统扩展和接口兼容性。
 */
void RenderingSystem_EmptyFunction1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源表初始化器
 * 
 * 初始化渲染系统资源表，设置时间戳和系统状态。
 */
void RenderingSystem_InitializeResourceTable(void)

{
  uint uVar1;
  char cVar2;
  
  render_system_memory = 0;
  if (*(void **)*render_system_data_memory == &processed_var_424_ptr) {
    cVar2 = *(int *)(render_system_data_memory + 0xe0) != 0;
  }
  else {
    cVar2 = (**(code **)(*(void **)*render_system_data_memory + 0x48))();
  }
  if (cVar2 != '\0') {
    system_memory_flags = 0x41c6fe0c;
    return;
  }
  uVar1 = timeGetTime();
  system_memory_flags = uVar1 ^ 0x41c64e6d;
  return;
}





/**
 * 渲染系统资源状态更新器
 * 
 * 根据参数更新渲染系统资源状态，支持条件判断和状态切换。
 * 
 * @param param_1   状态更新标志
 */
void RenderingSystem_UpdateResourceState(char param_1)

{
  bool bVar1;
  
  bVar1 = system_buffer_aa68 == '\0';
  FUN_18021f200();
  if ((bVar1) || (param_1 != '\0')) {
    FUN_1804e1400();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源上下文创建器
 * 
 * 创建渲染系统资源上下文，支持多参数配置和资源管理。
 * 
 * @param param_1   输出参数指针
 * @param param_2   渲染上下文参数
 * @param param_3   资源数据指针
 * @param param_4   资源数据偏移
 * @param param_5   渲染目标参数
 * @param param_6   目标数据指针
 * @param param_7   目标数据偏移
 * @param param_8   渲染配置参数
 * @param param_9   渲染标志位
 */
void RenderingSystem_CreateResourceContext(uint64_t *param_1, uint64_t param_2, int64_t param_3, int64_t param_4,
                                        uint64_t param_5, int64_t param_6, int64_t param_7, uint64_t param_8,
                                        int8_t param_9)

{
  int64_t *plVar1;
  int8_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int8_t auStack_3c8 [32];
  uint64_t uStack_3a8;
  int8_t uStack_3a0;
  int8_t uStack_398;
  uint64_t *puStack_388;
  int32_t uStack_380;
  uint64_t **ppuStack_378;
  int32_t uStack_370;
  int32_t uStack_36c;
  uint64_t uStack_368;
  uint64_t uStack_360;
  uint64_t uStack_358;
  uint64_t uStack_350;
  uint64_t uStack_348;
  uint64_t uStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  uint64_t uStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  uint64_t uStack_310;
  uint64_t uStack_308;
  uint64_t uStack_300;
  uint64_t uStack_2f8;
  uint64_t uStack_2f0;
  uint64_t uStack_2e8;
  uint64_t uStack_2e0;
  int32_t uStack_2d8;
  uint64_t uStack_2d4;
  int32_t uStack_2cc;
  uint64_t uStack_2c8;
  int64_t *plStack_2c0;
  int64_t *plStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint64_t uStack_298;
  int32_t uStack_290;
  uint64_t uStack_260;
  uint64_t uStack_258;
  uint64_t uStack_250;
  uint64_t uStack_248;
  uint64_t uStack_240;
  uint64_t uStack_238;
  int8_t uStack_192;
  int8_t auStack_138 [32];
  int64_t *plStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_78;
  uint64_t uStack_38;
  
  uStack_2c8 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_3c8;
  uStack_380 = 0;
  plStack_2b8 = (int64_t *)0x0;
  puStack_388 = &uStack_2a8;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 3;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_2b0 = 0;
  FUN_1805e7fe0(&plStack_2b8,0);
  uStack_368 = 0x3f800000;
  uStack_360 = 0;
  uStack_358 = 0x3f80000000000000;
  uStack_350 = 0;
  uStack_348 = 0;
  uStack_340 = 0x3f800000;
  uStack_338 = 0;
  uStack_330 = 0x3f80000000000000;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0xffffffff00000000;
  uStack_300 = 0x6400000064;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 100;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2cc = 0;
  func_0x0001805905f0(&uStack_368,(int64_t)*(int *)(param_3 + 0x234) * 0xa0 + param_4);
  ppuStack_378 = &puStack_388;
  puStack_388 = (uint64_t *)0x0;
  uVar3 = FUN_180590b50(param_3,auStack_138);
  FUN_1805e8630(&plStack_2b8,uVar3,&uStack_368,&puStack_388);
  if (plStack_78 != (int64_t *)0x0) {
    (**(code **)(*plStack_78 + 0x38))();
  }
  if (plStack_100 != (int64_t *)0x0) {
    (**(code **)(*plStack_100 + 0x38))();
  }
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  if (plStack_110 != (int64_t *)0x0) {
    (**(code **)(*plStack_110 + 0x38))();
  }
  if (plStack_118 != (int64_t *)0x0) {
    (**(code **)(*plStack_118 + 0x38))();
  }
  if (((uStack_318 >> 8 & 1) == 0) || (0 < *(short *)(param_3 + 0x230))) {
    uStack_192 = 0;
  }
  else {
    uStack_192 = 1;
  }
  if (-1 < *(int *)(param_6 + 0xfc)) {
    uStack_368 = 0x3f800000;
    uStack_360 = 0;
    uStack_358 = 0x3f80000000000000;
    uStack_350 = 0;
    uStack_348 = 0;
    uStack_340 = 0x3f800000;
    uStack_338 = 0;
    uStack_330 = 0x3f80000000000000;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0xffffffff00000000;
    uStack_300 = 0x6400000064;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2e8 = 100;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2cc = 0;
    func_0x0001805905f0(&uStack_368,(int64_t)*(int *)(param_6 + 0x234) * 0xa0 + param_7);
    ppuStack_378 = &puStack_388;
    puStack_388 = (uint64_t *)0x0;
    uVar3 = FUN_180590b50(param_6,auStack_138);
    lVar4 = FUN_1805e84b0(&plStack_2b8,uVar3,&uStack_368,&puStack_388);
    if (plStack_78 != (int64_t *)0x0) {
      (**(code **)(*plStack_78 + 0x38))();
    }
    if (plStack_100 != (int64_t *)0x0) {
      (**(code **)(*plStack_100 + 0x38))();
    }
    if (plStack_108 != (int64_t *)0x0) {
      (**(code **)(*plStack_108 + 0x38))();
    }
    if (plStack_110 != (int64_t *)0x0) {
      (**(code **)(*plStack_110 + 0x38))();
    }
    if (plStack_118 != (int64_t *)0x0) {
      (**(code **)(*plStack_118 + 0x38))();
    }
    if (((uStack_318 >> 8 & 1) == 0) || (0 < *(short *)(param_6 + 0x230))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(int8_t *)(lVar4 + 0x126) = uVar2;
  }
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  FUN_1805ec620(&plStack_2b8,param_9,0,0);
  ppuStack_378 = &puStack_388;
  uVar3 = FUN_1804dfed0(&plStack_2b8,&puStack_388);
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3a8 = 0;
  FUN_180198b90(param_2,uVar3,1);
  plVar1 = plStack_2b8;
  plStack_2c0 = plStack_2b8;
  if (plStack_2b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_2b8 + 0x28))(plStack_2b8);
  }
  uStack_380 = 2;
  if (plVar1 == (int64_t *)0x0) {
    uStack_370 = 0xffffffff;
  }
  else {
    uStack_370 = (**(code **)(*plVar1 + 8))(plVar1);
  }
  ppuStack_378 = (uint64_t **)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = ppuStack_378;
  param_1[1] = CONCAT44(uStack_36c,uStack_370);
  uStack_380 = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  FUN_180506660(&plStack_2b8);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_3c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 渲染系统指针资源查找器
 * 
 * 根据指针查找资源在表中的位置，支持内存地址映射。
 * 
 * @param param_1   要查找的资源指针
 * @return          资源在表中的位置，未找到返回0
 */
int64_t RenderingSystem_FindResourceByPointer(int64_t *param_1)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar5;
  
  lVar3 = render_system_memory;
  uVar4 = 0;
  iVar1 = *(int *)(render_system_memory + 0x87bd28);
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int64_t *)
                    (*(int64_t *)(render_system_memory + 0x87bd50) + (uint64_t)(uVar4 >> 4) * 8) + 8 +
                  (uint64_t)(uVar4 & 0xf) * 0x40) != 0) break;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  if ((int)uVar4 < iVar1) {
    do {
      lVar5 = (uint64_t)(uVar4 & 0xf) * 0x40;
      plVar2 = *(int64_t **)
                (lVar5 + 0x18 +
                *(int64_t *)(*(int64_t *)(lVar3 + 0x87bd50) + (uint64_t)(uVar4 >> 4) * 8));
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      if (plVar2 == param_1) {
        return *(int64_t *)(*(int64_t *)(lVar3 + 0x87bd50) + (uint64_t)(uVar4 >> 4) * 8) + lVar5;
      }
      uVar4 = uVar4 + 1;
      iVar1 = *(int *)(lVar3 + 0x87bd28);
      if (iVar1 <= (int)uVar4) {
        return 0;
      }
      do {
        if (*(int *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x87bd50) + (uint64_t)(uVar4 >> 4) * 8) +
                     8 + (uint64_t)(uVar4 & 0xf) * 0x40) != 0) break;
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    } while ((int)uVar4 < iVar1);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源表添加器
 * 
 * 将资源添加到哈希表中，支持重复检查和内存管理。
 * 
 * @param param_1   要添加的资源指针
 * @param param_2   资源类型参数
 * @param param_3   添加标志位
 */
void RenderingSystem_AddResourceToTable(int64_t *param_1, int32_t param_2, int8_t param_3)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plStackX_8;
  
  if (param_1 != (int64_t *)0x0) {
    RenderingSystem_UpdateCamera(param_1,1);
    lVar3 = FUN_18060ece0(param_1);
    lVar1 = render_system_memory;
    if (lVar3 == 0) {
      uVar2 = FUN_1804fb7c0(render_system_memory + 0x87bd28);
      lVar3 = *(int64_t *)(*(int64_t *)(lVar1 + 0x87bd50) + (uint64_t)(uVar2 >> 4) * 8);
      plStackX_8 = param_1;
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_1805ae000((uint64_t)(uVar2 & 0xf) * 0x40 + lVar3,lVar1,&plStackX_8,param_2,param_3);
    }
    else {
      *(uint64_t *)(lVar3 + 0x28) =
           *(uint64_t *)(&system_error_code + (int64_t)*(int *)(lVar3 + 0x30) * 8);
    }
  }
  return;
}





/**
 * 渲染系统资源表移除器
 * 
 * 从哈希表中移除指定资源，支持资源清理和状态更新。
 * 
 * @param param_1   要移除的资源指针
 * @param param_2   移除标志位
 * @param param_3   移除参数1
 * @param param_4   移除参数2
 */
void RenderingSystem_RemoveResourceFromTable(int64_t param_1, char param_2, uint64_t param_3, uint64_t param_4)

{
  code *pcVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint uVar4;
  int64_t lVar5;
  int *piVar6;
  uint64_t *puVar7;
  
  if (param_1 != 0) {
    lVar5 = RenderingSystem_FindResourceByPointer();
    if (lVar5 != 0) {
      RenderingSystem_UpdateCamera(*(uint64_t *)(lVar5 + 0x18),RENDERING_SYSTEM_FLAG_ENABLE);
      if (param_2 != '\0') {
        FUN_1802ea560(*(uint64_t *)(lVar5 + 0x18),0x3f800000);
      }
      lVar3 = *(int64_t *)(lVar5 + 0x10);
      uVar4 = *(uint *)(lVar5 + 0xc);
      piVar6 = (int *)(lVar3 + RENDERING_SYSTEM_DATA_OFFSET_0x5c8);
      puVar7 = (uint64_t *)
               ((uint64_t)(uVar4 & 0xf) * RENDERING_SYSTEM_HASH_TABLE_SIZE +
               *(int64_t *)(*(int64_t *)(lVar3 + RENDERING_SYSTEM_DATA_OFFSET_0x5d0) + (uint64_t)(uVar4 >> 4) * 8));
      pcVar1 = *(code **)((void *)*puVar7 + 0x10);
      if ((void *)*puVar7 == &processed_var_5520_ptr) {
        puVar7[2] = 0;
        plVar2 = (int64_t *)puVar7[3];
        puVar7[3] = 0;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x38))();
        }
      }
      else {
        (*pcVar1)(puVar7,pcVar1,(uint64_t)(uVar4 >> 4),param_4,0xfffffffffffffffe);
      }
      *(int32_t *)(puVar7 + 1) = RENDERING_SYSTEM_FLAG_DISABLE;
      SystemDatabaseProcessor(lVar3 + RENDERING_SYSTEM_DATA_OFFSET_0x5d0,&stack0x00000010);
      if (*piVar6 - 1U == uVar4) {
        *piVar6 = RENDERING_SYSTEM_FLAG_DISABLE;
        uVar4 = *(int *)(lVar3 + RENDERING_SYSTEM_DATA_OFFSET_0x5c8) - 1;
        if (-1 < (int)uVar4) {
          while (*(int *)(*(int64_t *)
                           (*(int64_t *)(lVar3 + RENDERING_SYSTEM_DATA_OFFSET_0x5d0) + (uint64_t)(uVar4 >> 4) * 8) + 8 +
                         (uint64_t)(uVar4 & 0xf) * RENDERING_SYSTEM_HASH_TABLE_SIZE) == RENDERING_SYSTEM_FLAG_DISABLE) {
            uVar4 = uVar4 - 1;
            if ((int)uVar4 < 0) {
              return;
            }
          }
          *piVar6 = uVar4 + 1;
        }
      }
      return;
    }
    RenderingSystem_UpdateCamera(param_1,RENDERING_SYSTEM_FLAG_ENABLE);
    if (param_2 != '\0') {
      FUN_1802ea560(param_1,0x3f800000);
    }
  }
  return;
}





/**
 * 渲染系统资源引用释放器
 * 
 * 释放资源的引用计数，支持内存管理和资源清理。
 * 
 * @param param_1   要释放的资源指针
 */
void RenderingSystem_ReleaseResourceReference(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  int64_t lVar4;
  int *piVar5;
  uint64_t *puVar6;
  char unaff_SIL;
  uint in_stack_00000038;
  uint64_t in_stack_00000040;
  
  lVar4 = RenderingSystem_FindResourceByPointer();
  if (lVar4 == 0) {
    RenderingSystem_UpdateCamera(param_1,RENDERING_SYSTEM_FLAG_ENABLE);
    if (unaff_SIL != '\0') {
      FUN_1802ea560(param_1,0x3f800000);
    }
    return;
  }
  RenderingSystem_UpdateCamera(*(uint64_t *)(lVar4 + 0x18),RENDERING_SYSTEM_FLAG_ENABLE);
  if (unaff_SIL != '\0') {
    FUN_1802ea560(*(uint64_t *)(lVar4 + 0x18),0x3f800000);
  }
  lVar2 = *(int64_t *)(lVar4 + 0x10);
  uVar3 = *(uint *)(lVar4 + 0xc);
  piVar5 = (int *)(lVar2 + RENDERING_SYSTEM_DATA_OFFSET_0x5c8);
  puVar6 = (uint64_t *)
           ((uint64_t)(uVar3 & 0xf) * RENDERING_SYSTEM_HASH_TABLE_SIZE +
           *(int64_t *)(*(int64_t *)(lVar2 + RENDERING_SYSTEM_DATA_OFFSET_0x5d0) + (uint64_t)(uVar3 >> 4) * 8));
  in_stack_00000038 = uVar3;
  if ((void *)*puVar6 == &processed_var_5520_ptr) {
    puVar6[2] = 0;
    plVar1 = (int64_t *)puVar6[3];
    puVar6[3] = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  else {
    (**(code **)((void *)*puVar6 + 0x10))(puVar6);
  }
  *(int32_t *)(puVar6 + 1) = RENDERING_SYSTEM_FLAG_DISABLE;
  SystemDatabaseProcessor(lVar2 + RENDERING_SYSTEM_DATA_OFFSET_0x5d0,&stack0x00000038);
  if (*piVar5 - 1U == uVar3) {
    *piVar5 = RENDERING_SYSTEM_FLAG_DISABLE;
    uVar3 = *(int *)(lVar2 + RENDERING_SYSTEM_DATA_OFFSET_0x5c8) - 1;
    if (-1 < (int)uVar3) {
      while (*(int *)(*(int64_t *)(*(int64_t *)(lVar2 + RENDERING_SYSTEM_DATA_OFFSET_0x5d0) + (uint64_t)(uVar3 >> 4) * 8) +
                      8 + (uint64_t)(uVar3 & 0xf) * RENDERING_SYSTEM_HASH_TABLE_SIZE) == RENDERING_SYSTEM_FLAG_DISABLE) {
        uVar3 = uVar3 - 1;
        if ((int)uVar3 < 0) {
          return;
        }
      }
      *piVar5 = uVar3 + 1;
    }
  }
  return;
}





/**
 * 渲染系统空函数2
 * 
 * 占位符函数，用于系统扩展和接口兼容性。
 */
void RenderingSystem_EmptyFunction2(void)

{
  char unaff_SIL;
  
  RenderingSystem_UpdateCamera();
  if (unaff_SIL != '\0') {
    FUN_1802ea560();
  }
  return;
}





/**
 * 渲染系统空函数3
 * 
 * 占位符函数，用于系统扩展和接口兼容性。
 */
void RenderingSystem_EmptyFunction3(void)

{
  return;
}





/**
 * 渲染系统资源指针清理器
 * 
 * 清理资源指针，支持条件判断和内存管理。
 * 
 * @param param_1   要清理的资源指针
 */
void RenderingSystem_CleanupResourcePointer(int64_t param_1)

{
  int64_t lVar1;
  
  if ((param_1 != 0) && (lVar1 = RenderingSystem_FindResourceByPointer(), lVar1 == 0)) {
    RenderingSystem_UpdateCamera(param_1,RENDERING_SYSTEM_FLAG_DISABLE);
  }
  return;
}



/**
 * 渲染系统资源属性获取器
 * 
 * 获取指定资源的属性信息，支持多参数查询。
 * 
 * @param param_1   资源标识符
 * @param param_2   查询参数1
 * @param param_3   查询参数2
 * @param param_4   查询参数3
 * @return          资源属性值
 */
int32_t
RenderingSystem_GetResourceProperty(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_180552800(&system_buffer_5ff0,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}



/**
 * 渲染系统资源能力检查器
 * 
 * 检查指定资源的能力标志，支持位操作和状态验证。
 * 
 * @param param_1   资源标识符
 * @param param_2   检查参数1
 * @param param_3   检查参数2
 * @param param_4   检查参数3
 * @return          能力标志位，0表示无能力，1表示有能力
 */
byte RenderingSystem_CheckResourceCapability(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  iVar1 = FUN_180552800(&system_buffer_5ff0,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return *(byte *)((int64_t)iVar1 * RENDERING_SYSTEM_STRING_BUFFER_SIZE + 0x140 + render_system_memory) >> 4 & 1;
}



/**
 * 渲染系统资源扩展属性获取器
 * 
 * 获取指定资源的扩展属性信息，支持高级查询和数据访问。
 * 
 * @param param_1   资源标识符
 * @param param_2   查询参数1
 * @param param_3   查询参数2
 * @param param_4   查询参数3
 * @return          扩展属性值
 */
int32_t
RenderingSystem_GetResourceExtendedProperty(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_1804c3680(&system_buffer_61b0,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源数据提取器
 * 
 * 从指定资源中提取数据，支持多字段数据提取和缓冲区操作。
 * 
 * @param param_1   资源索引
 * @param param_2   输出数据数组指针
 */
void RenderingSystem_ExtractResourceData(int param_1,uint64_t *param_2)

{
  int8_t auStackX_8 [32];
  int8_t auStack_58 [16];
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  FUN_1804c31d0((int64_t)param_1 * 200 + render_system_memory,auStack_58,auStackX_8);
  SystemSecurityManager(&uStack_38,auStack_58);
  *param_2 = uStack_38;
  param_2[1] = uStack_30;
  param_2[2] = uStack_28;
  param_2[3] = uStack_20;
  param_2[4] = uStack_18;
  param_2[5] = uStack_10;
  param_2[6] = uStack_48;
  param_2[7] = uStack_40;
  return;
}



/**
 * 渲染系统资源标识符获取器
 * 
 * 获取指定资源的标识符，支持资源定位和身份验证。
 * 
 * @param param_1   资源标识符
 * @param param_2   查询参数1
 * @param param_3   查询参数2
 * @param param_4   查询参数3
 * @return          资源标识符值，失败返回0xffffffff
 */
uint64_t RenderingSystem_GetResourceIdentifier(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  iVar1 = FUN_180552800(&system_buffer_5ff0,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lVar3 = (int64_t)iVar1 * RENDERING_SYSTEM_STRING_BUFFER_SIZE + render_system_memory;
  if (lVar3 != 0) {
    return (uint64_t)*(byte *)(lVar3 + 0x140);
  }
  return 0xffffffff;
}



/**
 * 渲染系统资源参数获取器
 * 
 * 获取指定资源的参数值，支持多参数查询和数据访问。
 * 
 * @param param_1   资源标识符
 * @param param_2   参数类型
 * @param param_3   参数标志1
 * @param param_4   参数标志2
 * @param param_5   参数标志3
 * @return          资源参数值，失败返回0xffffffff
 */
int32_t
RenderingSystem_GetResourceParameter(uint64_t param_1,int32_t param_2,int8_t param_3,int32_t param_4,
                                     int8_t param_5)

{
  int iVar1;
  int64_t lVar2;
  
  iVar1 = RenderingSystem_GetResourceProperty();
  lVar2 = (int64_t)iVar1 * RENDERING_SYSTEM_STRING_BUFFER_SIZE + render_system_memory;
  if (lVar2 == 0) {
    return 0xffffffff;
  }
  lVar2 = Timer_GetElapsed(lVar2,param_2,param_3,param_4,param_5);
  return *(int32_t *)(lVar2 + 0x50);
}



/**
 * 渲染系统资源索引获取器
 * 
 * 获取指定资源的索引值，支持资源定位和数据访问。
 * 
 * @param param_1   资源标识符
 * @param param_2   索引类型
 * @param param_3   索引标志1
 * @param param_4   索引标志2
 * @param param_5   索引标志3
 * @return          资源索引值，失败返回-1
 */
int RenderingSystem_GetResourceIndex(uint64_t param_1,int32_t param_2,int8_t param_3,int32_t param_4,
                                    int8_t param_5)

{
  int iVar1;
  int64_t lVar2;
  
  iVar1 = RenderingSystem_GetResourceProperty();
  lVar2 = (int64_t)iVar1 * RENDERING_SYSTEM_STRING_BUFFER_SIZE + render_system_memory;
  if (((lVar2 != 0) && (lVar2 = Timer_GetElapsed(lVar2,param_2,param_3,param_4,param_5), lVar2 != 0))
     && (*(int *)(lVar2 + 0x104) != -1)) {
    return *(int *)(lVar2 + 0x104);
  }
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统资源命令处理器
 * 
 * 处理资源相关的命令，支持条件判断和系统状态检查。
 * 
 * @param param_1   命令标识符
 * @param param_2   命令参数1
 * @param param_3   命令参数2
 * @param param_4   命令参数3
 */
void RenderingSystem_ProcessResourceCommand(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  void *puVar1;
  char cVar2;
  int32_t auStackX_10 [6];
  void *puStack_30;
  int64_t lStack_28;
  
  CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  auStackX_10[0] = 0xffffffff;
  puVar1 = *(void **)*render_system_data_memory;
  if (puVar1 == &processed_var_424_ptr) {
    cVar2 = *(int *)(render_system_data_memory + 0xc40) != 0;
  }
  else {
    cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*render_system_data_memory);
  }
  if (cVar2 == '\0') {
    (**(code **)(*(int64_t *)render_system_data_memory[1] + 0x18))
              ((int64_t *)render_system_data_memory[1],&puStack_30,auStackX_10);
  }
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



