#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 99_part_06_part003.c - 高级数据处理和资源管理模块
// ============================================================================

// 模块概述：
// 本模块包含8个核心函数，主要处理高级数据处理、资源管理、内存分配、
// 线程同步和配置管理等功能。涵盖了游戏引擎中的核心资源处理机制。

// 主要功能：
// - 空函数处理器和系统初始化
// - 高级浮点数数据处理和变换
// - 资源清理和内存管理
// - 线程安全的数据操作
// - 配置参数处理和验证
// - 字符串处理和模式匹配
// - 二叉树数据结构操作
// - 互斥锁和同步机制

// ============================================================================
// 常量定义
// ============================================================================

#define SCALE_FACTOR_1024 1024.0           // 缩放因子1024
#define FLOAT_MIN_VALUE 1.4013e-44        // 最小浮点数值
#define FLOAT_MAX_VALUE 3.4028235e+38     // 最大浮点数值
#define FLOAT_MIN_NEGATIVE -3.4028235e+38  // 最小负浮点数值
#define MEMORY_POOL_SIZE_0x30 0x30         // 内存池大小48字节
#define MEMORY_POOL_SIZE_0x48 0x48         // 内存池大小72字节
#define BIT_SHIFT_10 10                    // 位偏移10
#define DATA_STRUCTURE_SIZE_0x68 0x68      // 数据结构大小104字节
#define MAX_TEXTURE_SIZE 0x80              // 最大纹理大小128
#define MUTEX_TIMEOUT 5000                 // 互斥锁超时时间
#define COMPARISON_THRESHOLD_0x20 0x20     // 比较阈值32

// ============================================================================
// 类型定义和结构体
// ============================================================================

/**
 * 浮点数数据结构
 */
typedef struct {
    float scaled_value;         // 缩放后的值
    float original_value;       // 原始值
    float min_value;           // 最小值
    void* data_pointer;        // 数据指针
    float scaled_x;            // 缩放的X值
    float scaled_y;            // 缩放的Y值
    float shifted_x;           // 移位的X值
    float shifted_y;           // 移位的Y值
    void* config_data;         // 配置数据
    void* extended_config;     // 扩展配置
    float max_value;           // 最大值
    float min_negative;        // 最小负值
    float padding1;            // 填充1
    float padding2;            // 填充2
    unsigned char flags;       // 标志位
    unsigned char reserved[3];  // 保留字段
} FloatDataStructure;

/**
 * 资源管理结构
 */
typedef struct {
    void* resource_array;       // 资源数组
    int resource_count;        // 资源数量
    void* cleanup_handler;      // 清理处理器
    unsigned char management_flags;  // 管理标志
} ResourceManager;

/**
 * 线程同步数据结构
 */
typedef struct {
    void* mutex_handle;         // 互斥锁句柄
    int lock_status;            // 锁状态
    void* thread_data;          // 线程数据
    unsigned int sync_flags;    // 同步标志
} ThreadSyncData;

/**
 * 配置参数结构
 */
typedef struct {
    int width;                  // 宽度
    int height;                 // 高度
    int depth;                  // 深度
    unsigned char format;        // 格式
    unsigned char type;          // 类型
    void* config_data;          // 配置数据
    void* extended_data;        // 扩展数据
} ConfigParameters;

// ============================================================================
// 函数别名定义
// ============================================================================

// 系统函数
#define SystemEmptyFunction FUN_1803a5df6
#define FloatDataProcessor FUN_1803a5e10
#define ResourceCleanupHandler FUN_1803a5ff0
#define ThreadSafeDataProcessor FUN_1803a61d0
#define MemoryManager FUN_1803a64f0
#define SystemInitializer FUN_1803a6710
#define SystemConfigurationProcessor FUN_1803a6850
#define ParameterValidator FUN_1803a6970
#define DataStructureSearcher FUN_1803a6bb0
#define ResourceAllocator FUN_1803a6c4c

// ============================================================================
// 核心函数实现
// ============================================================================

/**
 * 系统空函数处理器 - 系统级空操作函数
 * 
 * 功能描述：
 * - 提供系统级的空操作功能
 * - 用作函数指针的默认值
 * - 支持系统初始化和清理
 * - 提供兼容性接口
 * - 支持错误处理和恢复
 * 
 * @return void
 */
void SystemEmptyFunction(void)
{
    // 空函数 - 用于系统初始化和默认处理
    return;
}

/**
 * 浮点数数据处理器 - 高级浮点数数据处理和变换
 * 
 * 功能描述：
 * - 处理浮点数数据的缩放和变换
 * - 支持复杂的数据结构初始化
 * - 实现高效的内存分配和管理
 * - 提供数据配置和参数设置
 * - 支持动态数据结构扩展
 * - 处理位运算和位移操作
 * - 提供数据验证和边界检查
 * 
 * @param param_1 浮点数数据结构指针
 * @param param_2 配置数据指针
 * @param param_3 缩放因子
 * @param param_4 保留参数
 * @param param_5 数据指针
 * @return float* 返回处理后的浮点数数据结构指针
 */
float * FloatDataProcessor(float *param_1, undefined8 *param_2, float param_3, undefined8 param_4,
                           int *param_5)
{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;
    ulonglong *puVar4;
    ulonglong *puVar5;
    ulonglong *puVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    uint uVar9;
    ulonglong *puVar10;
    ulonglong *puVar11;
    ulonglong *puVar12;
    float fVar13;
    
    // 计算缩放值并设置基础参数
    fVar13 = param_3 * SCALE_FACTOR_1024;
    *param_1 = fVar13;
    param_1[1] = param_3;
    param_1[2] = FLOAT_MIN_VALUE;
    *(undefined8 *)(param_1 + 3) = *(undefined8 *)param_5;
    iVar1 = param_5[1];
    param_1[5] = (float)*param_5 * fVar13;
    param_1[6] = (float)iVar1 * fVar13;
    iVar1 = param_5[1];
    param_1[7] = (float)(*param_5 << BIT_SHIFT_10);
    param_1[8] = (float)(iVar1 << BIT_SHIFT_10);
    uVar3 = param_2[1];
    *(undefined8 *)(param_1 + 9) = *param_2;
    *(undefined8 *)(param_1 + 0xb) = uVar3;
    puVar10 = (ulonglong *)0x0;
    param_1[0x12] = 0.0;
    param_1[0x13] = 0.0;
    param_1[0xd] = FLOAT_MAX_VALUE;
    param_1[0xe] = FLOAT_MIN_NEGATIVE;
    param_1[0x10] = 0.0;
    param_1[0x11] = 0.0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    
    // 处理动态内存分配
    if (param_1[3] == 0.0) {
        fVar13 = 0.0;
        puVar4 = puVar10;
    }
    else {
        puVar4 = (ulonglong *)
                 FUN_18062b420(_DAT_180c8ed18, (longlong)(int)param_1[3] * 8, 3, fVar13, 0xfffffffffffffffe);
        fVar13 = param_1[3];
    }
    *(ulonglong **)(param_1 + 0x10) = puVar4;
    puVar4 = puVar10;
    puVar12 = puVar10;
    
    // 处理数据结构扩展和初始化
    if (0 < (int)fVar13) {
        do {
            uVar7 = (ulonglong)(int)param_1[4];
            puVar11 = puVar10;
            if (uVar7 != 0) {
                puVar5 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18, uVar7 * DATA_STRUCTURE_SIZE_0x68 + 0x10, 3);
                *puVar5 = uVar7 << 0x20 | DATA_STRUCTURE_SIZE_0x68;
                puVar6 = puVar5 + 10;
                puVar8 = puVar10;
                
                // 初始化数据结构元素
                do {
                    puVar6[-1] = 0;
                    *puVar6 = 0;
                    puVar6[1] = 0;
                    *(undefined4 *)(puVar6 + 2) = 6;
                    puVar6[3] = 0;
                    puVar6[-8] = 0;
                    puVar6[-4] = 0;
                    *(undefined1 *)(puVar6 + -2) = 1;
                    puVar6[4] = 0;
                    plVar2 = (longlong *)puVar6[3];
                    puVar6[3] = 0;
                    if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x38))();
                    }
                    *(undefined4 *)((longlong)puVar6 + -0x2c) = 0x7f7fffff;
                    *(undefined4 *)(puVar6 + -5) = 0xff7fffff;
                    uVar9 = (int)puVar8 + 1;
                    puVar8 = (ulonglong *)(ulonglong)uVar9;
                    puVar6 = puVar6 + 0xd;
                    puVar11 = puVar5 + 2;
                } while ((ulonglong)(longlong)(int)uVar9 < uVar7);
            }
            *(ulonglong **)((longlong)puVar12 + *(longlong *)(param_1 + 0x10)) = puVar11;
            uVar9 = (int)puVar4 + 1;
            puVar4 = (ulonglong *)(ulonglong)uVar9;
            puVar12 = puVar12 + 1;
        } while ((int)uVar9 < (int)param_1[3]);
    }
    return param_1;
}






// 函数: void FUN_1803a5ff0(longlong param_1)
void FUN_1803a5ff0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar8 = 0;
    uVar6 = uVar8;
    uVar4 = uVar8;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        lVar1 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x40));
        if (lVar1 != 0) {
          uVar6 = *(ulonglong *)(lVar1 + -0x10);
          uVar4 = uVar6 >> 0x20;
          if ((int)(uVar6 >> 0x20) != 0) {
            do {
              plVar7 = (longlong *)(uVar8 + lVar1);
              if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              *plVar7 = 0;
              if (plVar7[4] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              plVar7[4] = 0;
              puVar2 = (undefined8 *)plVar7[0xc];
              if (puVar2 != (undefined8 *)0x0) {
                lVar5 = __RTCastToVoid(puVar2);
                (**(code **)*puVar2)(puVar2,0);
                if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(lVar5);
                }
              }
              plVar7[0xc] = 0;
              if (plVar7[0xb] != 0) {
                (**(code **)(**(longlong **)(plVar7[5] + 0x318) + 0x90))();
                plVar3 = (longlong *)plVar7[0xb];
                plVar7[0xb] = 0;
                if (plVar3 != (longlong *)0x0) {
                  (**(code **)(*plVar3 + 0x38))();
                }
              }
              if ((longlong *)plVar7[0xb] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar7[0xb] + 0x38))();
              }
              if (plVar7[7] != 0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              uVar8 = (ulonglong)(uint)((int)uVar8 + (int)uVar6);
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900((ulonglong *)(lVar1 + -0x10));
        }
        *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x40)) = 0;
        uVar9 = (int)uVar4 + 1;
        uVar6 = uVar6 + 8;
        uVar4 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0xc));
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a61d0(longlong param_1,longlong *param_2)
void FUN_1803a61d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_a8 [32];
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  int aiStack_60 [6];
  ulonglong uStack_48;
  
  uStack_78 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  plStack_70 = param_2;
  lStack_68 = param_1;
  iVar3 = _Mtx_lock();
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar5 = (**(code **)(*(longlong *)*param_2 + 0x218))();
  iStack_88 = (int)*(float *)(lVar5 + 0x30);
  iStack_84 = (int)*(float *)(lVar5 + 0x34);
  iStack_80 = (int)*(float *)(lVar5 + 0x38);
  plVar8 = (longlong *)0x0;
  iVar3 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x530);
  puVar6 = puVar1;
  puVar12 = *(undefined8 **)(param_1 + 0x540);
  if (*(undefined8 **)(param_1 + 0x540) != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar12 + 4) < iStack_88) {
LAB_1803a62a4:
        bVar2 = true;
LAB_1803a62a7:
        puVar13 = (undefined8 *)*puVar12;
      }
      else if (iStack_88 < *(int *)(puVar12 + 4)) {
        bVar2 = false;
        puVar13 = (undefined8 *)puVar12[1];
      }
      else {
        if (*(int *)((longlong)puVar12 + 0x24) < iStack_84) goto LAB_1803a62a4;
        if (iStack_84 < *(int *)((longlong)puVar12 + 0x24)) {
          bVar2 = false;
          puVar13 = (undefined8 *)puVar12[1];
        }
        else {
          bVar2 = *(int *)(puVar12 + 5) < iStack_80;
          if (*(int *)(puVar12 + 5) < iStack_80) goto LAB_1803a62a7;
          puVar13 = (undefined8 *)puVar12[1];
        }
      }
      if (bVar2) {
        puVar12 = puVar6;
      }
      puVar6 = puVar12;
      puVar12 = puVar13;
    } while (puVar13 != (undefined8 *)0x0);
    if (((puVar6 != puVar1) && (*(int *)(puVar6 + 4) <= iStack_88)) &&
       ((*(int *)(puVar6 + 4) < iStack_88 ||
        ((*(int *)((longlong)puVar6 + 0x24) <= iStack_84 &&
         ((*(int *)((longlong)puVar6 + 0x24) < iStack_84 || (*(int *)(puVar6 + 5) <= iStack_80))))))
       )) goto LAB_1803a62d7;
  }
  puVar6 = puVar1;
LAB_1803a62d7:
  if (puVar6 == puVar1) {
    puVar7 = (undefined4 *)FUN_1803a6bb0(puVar1,&iStack_88);
    *puVar7 = 0;
  }
  else {
    iVar3 = *(int *)((longlong)puVar6 + 0x2c);
  }
  aiStack_60[0] = 4;
  aiStack_60[1] = 4;
  aiStack_60[2] = 2;
  aiStack_60[3] = 2;
  lVar5 = 1;
  aiStack_60[4] = 1;
  iVar10 = *(int *)(_DAT_180c86920 + 0x2a0);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  else if (4 < iVar10) {
    iVar10 = 4;
  }
  iVar4 = *(int *)(param_1 + 0x78) / aiStack_60[iVar10];
  iVar10 = 1;
  if (0 < iVar4) {
    iVar10 = iVar4;
  }
  if ((iVar3 < iVar10) || (*(int *)(param_1 + 0x78) == 0)) {
    plVar14 = *(longlong **)(param_1 + 0x90);
    if (plVar14 < *(longlong **)(param_1 + 0x98)) {
      *(longlong **)(param_1 + 0x90) = plVar14 + 1;
      plVar8 = (longlong *)*param_2;
      *plVar14 = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))();
      }
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x88);
      lVar11 = (longlong)plVar14 - (longlong)plVar15 >> 3;
      if ((lVar11 == 0) || (lVar5 = lVar11 * 2, plVar16 = plVar8, lVar5 != 0)) {
        plVar8 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,*(undefined1 *)(param_1 + 0xa0))
        ;
        plVar14 = *(longlong **)(param_1 + 0x90);
        plVar15 = *(longlong **)(param_1 + 0x88);
        plVar16 = plVar8;
      }
      for (; plVar15 != plVar14; plVar15 = plVar15 + 1) {
        *plVar8 = *plVar15;
        *plVar15 = 0;
        plVar8 = plVar8 + 1;
      }
      plVar14 = (longlong *)*param_2;
      *plVar8 = (longlong)plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x28))();
      }
      plVar14 = *(longlong **)(param_1 + 0x90);
      plVar15 = *(longlong **)(param_1 + 0x88);
      if (plVar15 != plVar14) {
        do {
          if ((longlong *)*plVar15 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar15 + 0x38))();
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar14);
        plVar15 = *(longlong **)(param_1 + 0x88);
      }
      if (plVar15 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar15);
      }
      *(longlong **)(param_1 + 0x88) = plVar16;
      *(longlong **)(param_1 + 0x90) = plVar8 + 1;
      *(longlong **)(param_1 + 0x98) = plVar16 + lVar5;
    }
    *(longlong *)(*param_2 + 0x40) = param_1;
    piVar9 = (int *)FUN_1803a6bb0(puVar1,&iStack_88);
    *piVar9 = *piVar9 + 1;
    iVar3 = _Mtx_unlock(param_1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
    }
  }
  else {
    iVar3 = _Mtx_unlock(param_1);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_a8);
}






// 函数: void FUN_1803a64f0(longlong param_1)
void FUN_1803a64f0(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 uStackX_8;
  uint *puStack_d8;
  undefined8 uStack_d0;
  uint *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *puStack_98;
  longlong lStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint *puStack_68;
  undefined8 uStack_60;
  uint *puStack_58;
  longlong lStack_50;
  
  uStack_b8 = 0xfffffffffffffffe;
  puVar1 = (uint *)(param_1 + 0xa8);
  if (*puVar1 != 0) {
    iVar10 = _Mtx_lock();
    if (iVar10 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar10);
    }
    uVar3 = *puVar1;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar3);
    uVar9 = uStack_c0;
    uVar13 = 0;
    uVar12 = 0;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    lVar2 = uStack_d0;
    puStack_d8 = puVar1;
    puStack_c8 = puVar1;
    uVar7 = uVar3;
    uVar8 = uVar13;
    if (uVar3 != 0) {
      for (; uVar7 != 0; uVar7 = (int)uVar7 >> 1) {
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
      }
      FUN_1803a7190(&puStack_d8,&puStack_c8,(longlong)(int)(uVar12 - 1) * 2,uStackX_8);
      if ((int)uVar3 < 0x1d) {
        uStack_60 = uVar9;
        lStack_50 = lVar2;
        puStack_68 = puVar1;
        puStack_58 = puVar1;
        FUN_1803a6f10(&puStack_58,&puStack_68);
      }
      else {
        uStack_d0._0_4_ = 0x1c;
        uStack_a0 = 0x1c;
        uStack_9c = uStack_d0._4_4_;
        lStack_90 = lVar2;
        puStack_d8 = puVar1;
        puStack_98 = puVar1;
        uStack_a8 = puVar1;
        FUN_1803a6f10(&puStack_98,&uStack_a8);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,0x1c);
        uStack_80 = uVar9;
        uStack_70 = 0x1c;
        uStack_6c = uStack_d0._4_4_;
        puStack_d8 = puVar1;
        puStack_88 = puVar1;
        uStack_78 = puVar1;
        FUN_1803a7050(&uStack_78,&puStack_88);
      }
    }
    while (iVar10 = (int)uVar13, (ulonglong)(longlong)iVar10 < (ulonglong)*puVar1) {
      lVar2 = (longlong)
              *(int *)(*(longlong *)(param_1 + 0xb0 + (uVar13 >> 0xb) * 8) +
                      (ulonglong)(uint)(iVar10 + (int)(uVar13 >> 0xb) * -0x800) * 4) * 8;
      *(undefined8 *)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x88)) + 0x40) = 0;
      lVar4 = *(longlong *)(param_1 + 0x88);
      plVar11 = (longlong *)(lVar2 + lVar4);
      plVar5 = *(longlong **)(lVar4 + -8 + (*(longlong *)(param_1 + 0x90) - lVar4 >> 3) * 8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plVar6 = (longlong *)*plVar11;
      *plVar11 = (longlong)plVar5;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
      }
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x90) + -8);
      *(longlong **)(param_1 + 0x90) = plVar11;
      plVar11 = (longlong *)*plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x38))();
      }
      uVar13 = (ulonglong)(iVar10 + 1);
    }
    iVar10 = _Mtx_unlock(param_1);
    if (iVar10 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar10);
    }
  }
  return;
}



longlong FUN_1803a6710(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  
  _Mtx_init_in_situ(param_1,2,param_3,param_4,0xfffffffffffffffe);
  FUN_1803a6850(param_1 + 0x50);
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 3;
  LOCK();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  UNLOCK();
  do {
    *(undefined8 *)(param_1 + 0xb0 + (longlong)(int)uVar2 * 8) = 0;
    LOCK();
    *(undefined1 *)(param_1 + 0x4b0 + (longlong)(int)uVar2) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x80);
  lVar1 = param_1 + 0x530;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x558) = 3;
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(param_1 + 0x538) = lVar1;
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined1 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x550) = 0;
  FUN_180627be0(param_1 + 0x50,param_2);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x80) = param_2[6];
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = &UNK_18098bcb0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803a6850(longlong *param_1)
void FUN_1803a6850(longlong *param_1)

{
  undefined *puVar1;
  undefined1 auStack_88 [32];
  longlong *plStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined auStack_38 [32];
  ulonglong uStack_18;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  *param_1 = (longlong)&UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (longlong)&UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  puStack_50 = &UNK_18098bc80;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  uStack_40 = 9;
  plStack_68 = param_1;
  plStack_58 = param_1;
  strcpy_s(auStack_38,0x20,&UNK_180a22ab0);
  puVar1 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar1 = puStack_48;
  }
  (**(code **)(*param_1 + 0x10))(param_1,puVar1);
  puStack_50 = &UNK_18098bcb0;
  *(undefined4 *)(param_1 + 4) = 0x43700000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x42700000;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0x101;
  plStack_68 = (longlong *)0x0;
  param_1[6] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_88);
}



// WARNING: Type propagation algorithm not settling

longlong FUN_1803a6970(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined *puStack_30;
  char *pcStack_28;
  uint uStack_20;
  char *pcVar11;
  
  pcVar10 = "name";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar10 = (char *)*puVar3;
    if (pcVar10 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar10 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar3[2];
    }
    if (pcVar4 == pcVar11 + -0x180a03a83) {
      pcVar4 = pcVar4 + (longlong)pcVar10;
      if (pcVar4 <= pcVar10) {
LAB_1803a69e7:
        lVar6 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar6 = puVar3[1];
        }
        puStack_30 = (undefined *)0x1803a69fe;
        (**(code **)(*param_1 + 0x10))(param_1,lVar6);
        break;
      }
      lVar6 = (longlong)&DAT_180a03a84 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_1803a69e7;
      }
    }
  }
  pcVar10 = "total_decal_life_base";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar10 = (char *)*puVar3;
    if (pcVar10 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar10 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar3[2];
    }
    if (pcVar4 == pcVar11 + -0x180a22a97) {
      pcVar4 = pcVar10 + (longlong)pcVar4;
      if (pcVar4 <= pcVar10) {
LAB_1803a6a70:
        lVar6 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar6 = puVar3[1];
        }
        goto LAB_1803a6a8b;
      }
      lVar6 = (longlong)&UNK_180a22a98 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_1803a6a70;
      }
    }
  }
  lVar6 = 0;
LAB_1803a6a8b:
  if ((param_1 + 4 != (longlong *)0x0) && (lVar6 != 0)) {
    puStack_30 = (undefined *)0x1803a6aa4;
    FUN_18010cbc0(lVar6,&DAT_180a06430,param_1 + 4);
  }
  pcVar10 = "visible_decal_life_base";
  do {
    pcVar11 = pcVar10;
    pcVar10 = pcVar11 + 1;
  } while (*pcVar10 != '\0');
  for (puVar3 = *(undefined8 **)(param_2 + 0x40); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)puVar3[6]) {
    pcVar10 = (char *)*puVar3;
    if (pcVar10 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar10 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar3[2];
    }
    if (pcVar4 == pcVar11 + -0x180a22b0f) {
      pcVar4 = pcVar4 + (longlong)pcVar10;
      if (pcVar4 <= pcVar10) {
LAB_1803a6b10:
        lVar6 = 0x180d48d24;
        if (puVar3[1] != 0) {
          lVar6 = puVar3[1];
        }
        goto LAB_1803a6b28;
      }
      lVar6 = (longlong)&UNK_180a22b10 - (longlong)pcVar10;
      while (*pcVar10 == pcVar10[lVar6]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar4 <= pcVar10) goto LAB_1803a6b10;
      }
    }
  }
  lVar6 = 0;
LAB_1803a6b28:
  if (((longlong)param_1 + 0x24 != 0) && (lVar6 != 0)) {
    puStack_30 = (undefined *)0x1803a6b44;
    FUN_18010cbc0(lVar6,&DAT_180a06430,(longlong)param_1 + 0x24);
  }
  puStack_30 = (undefined *)0x1803a6b63;
  FUN_180631330(param_2,&UNK_180a22af0,param_1 + 5);
  puStack_30 = (undefined *)0x1803a6b76;
  FUN_180631850(param_2,&UNK_180a22ad8,param_1 + 6);
  puStack_30 = (undefined *)0x1803a6b89;
  FUN_180631000(param_2,&UNK_180a22ac0,(longlong)param_1 + 0x2c);
  puVar1 = (undefined1 *)((longlong)param_1 + 0x2d);
  uVar14 = 0xfffffffffffffffe;
  lVar6 = FUN_1800a02a0(param_2);
  uVar8 = 0;
  if (lVar6 == 0) {
    return 0;
  }
  lVar9 = 0x180d48d24;
  if (*(longlong *)(lVar6 + 8) != 0) {
    lVar9 = *(longlong *)(lVar6 + 8);
  }
  FUN_180627910(&puStack_30,lVar9);
  uVar5 = uVar8;
  uVar7 = uVar8;
  if (uStack_20 != 0) {
    do {
      cVar2 = pcStack_28[uVar7];
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        pcStack_28[uVar7] = cVar2 + ' ';
      }
      uVar13 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar13;
      uVar7 = uVar7 + 1;
    } while (uVar13 < uStack_20);
  }
  if (pcStack_28 != (char *)0x0) {
    cVar2 = *pcStack_28;
    uVar5 = uVar8;
    uVar7 = uVar8;
    uVar12 = uVar8;
    while (uStack_20 = (uint)uVar7, cVar2 != '\0') {
      if (' ' < pcStack_28[uVar5]) {
        if (uVar12 != uVar5) {
          pcStack_28[uVar12] = pcStack_28[uVar5];
        }
        uVar7 = (ulonglong)(uStack_20 + 1);
        uVar12 = uVar12 + 1;
      }
      uVar5 = uVar5 + 1;
      cVar2 = pcStack_28[uVar5];
    }
    pcStack_28[(int)uStack_20] = '\0';
  }
  if (uStack_20 == 4) {
    do {
      uVar5 = uVar8 + 1;
      if (pcStack_28[uVar8] != (&UNK_180a06418)[uVar8]) goto LAB_1806311d1;
      uVar8 = uVar5;
    } while (uVar5 != 5);
    *puVar1 = 1;
    goto LAB_18063123e;
  }
  if (uStack_20 == 3) {
    do {
      uVar5 = uVar8 + 1;
      if (pcStack_28[uVar8] != (&UNK_180a0b388)[uVar8]) goto LAB_1806311d1;
      uVar8 = uVar5;
    } while (uVar5 != 4);
    *puVar1 = 1;
    goto LAB_18063123e;
  }
  if (uStack_20 == 1) {
    if ((*pcStack_28 == '1') && (pcStack_28[1] == '\0')) {
      *puVar1 = 1;
      goto LAB_18063123e;
    }
LAB_180631224:
    if (*pcStack_28 != '0') goto LAB_1806311d1;
    cVar2 = pcStack_28[1];
joined_r0x0001806311cf:
    if (cVar2 != '\0') {
LAB_1806311d1:
      FUN_180627340(&UNK_180a3cb88,&UNK_180a22b28,lVar9,&UNK_180a3cbe8,uVar14);
      puStack_30 = &UNK_180a3c3e0;
      if (pcStack_28 != (char *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return 0;
    }
  }
  else {
    if (uStack_20 != 5) {
      if (uStack_20 != 2) {
        if (uStack_20 != 1) goto LAB_1806311d1;
        goto LAB_180631224;
      }
      if ((*pcStack_28 != 'n') || (pcStack_28[1] != 'o')) goto LAB_1806311d1;
      cVar2 = pcStack_28[2];
      goto joined_r0x0001806311cf;
    }
    do {
      uVar5 = uVar8 + 1;
      if (pcStack_28[uVar8] != (&UNK_180a06420)[uVar8]) goto LAB_1806311d1;
      uVar8 = uVar5;
    } while (uVar5 != 6);
  }
  *puVar1 = 0;
LAB_18063123e:
  puStack_30 = &UNK_180a3c3e0;
  if (pcStack_28 != (char *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return lVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803a6bb0(longlong *param_1,int *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_18 [16];
  
  plVar6 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    do {
      if ((int)plVar2[4] < *param_2) {
LAB_1803a6c0d:
        bVar1 = true;
LAB_1803a6c0f:
        plVar8 = (longlong *)*plVar2;
      }
      else if (*param_2 < (int)plVar2[4]) {
        plVar8 = (longlong *)plVar2[1];
        bVar1 = false;
      }
      else {
        if (*(int *)((longlong)plVar2 + 0x24) < param_2[1]) goto LAB_1803a6c0d;
        if (param_2[1] < *(int *)((longlong)plVar2 + 0x24)) {
          plVar8 = (longlong *)plVar2[1];
          bVar1 = false;
        }
        else {
          bVar1 = (int)plVar2[5] < param_2[2];
          if ((int)plVar2[5] < param_2[2]) goto LAB_1803a6c0f;
          plVar8 = (longlong *)plVar2[1];
        }
      }
      if (bVar1) {
        plVar2 = plVar6;
      }
      plVar6 = plVar2;
      plVar2 = plVar8;
    } while (plVar8 != (longlong *)0x0);
  }
  if (plVar6 != param_1) {
    if ((int)plVar6[4] <= *param_2) {
      if ((int)plVar6[4] < *param_2) goto FUN_1803a6d94;
      if ((*(int *)((longlong)plVar6 + 0x24) <= param_2[1]) &&
         ((*(int *)((longlong)plVar6 + 0x24) < param_2[1] || ((int)plVar6[5] <= param_2[2]))))
      goto FUN_1803a6d94;
    }
  }
  plVar2 = (longlong *)*param_1;
  if ((plVar6 == plVar2) || (plVar6 == param_1)) {
    if (param_1[4] != 0) {
      iVar5 = *param_2;
      plVar6 = plVar2;
      if ((int)plVar2[4] < iVar5) {
LAB_1803a6cfa:
        bVar1 = false;
        goto LAB_1803a6cfc;
      }
      if ((int)plVar2[4] <= iVar5) {
        if ((*(int *)((longlong)plVar2 + 0x24) < param_2[1]) ||
           ((*(int *)((longlong)plVar2 + 0x24) <= param_2[1] && ((int)plVar2[5] < param_2[2]))))
        goto LAB_1803a6cfa;
      }
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70(plVar6);
    iVar5 = *param_2;
    if ((int)plVar6[4] < iVar5) {
LAB_1803a6c90:
      if (iVar5 < (int)plVar2[4]) {
LAB_1803a6cb7:
        if (*plVar6 == 0) goto LAB_1803a6cfa;
        bVar1 = true;
        plVar6 = plVar2;
LAB_1803a6cfc:
        if (plVar6 != (longlong *)0x0) {
          if (((bVar1) || (plVar6 == param_1)) || (iVar5 < (int)plVar6[4])) {
LAB_1803a6d2f:
            uVar7 = 0;
          }
          else {
            if (iVar5 <= (int)plVar6[4]) {
              if ((param_2[1] < *(int *)((longlong)plVar6 + 0x24)) ||
                 ((param_2[1] <= *(int *)((longlong)plVar6 + 0x24) && (param_2[2] < (int)plVar6[5]))
                 )) goto LAB_1803a6d2f;
            }
            uVar7 = 1;
          }
          lVar3 = FUN_18062b420(_DAT_180c8ed18,0x30,(char)param_1[5]);
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)param_2;
          *(int *)(lVar3 + 0x28) = param_2[2];
          *(undefined4 *)(lVar3 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
          FUN_18066bdc0(lVar3,plVar6,param_1,uVar7);
        }
      }
      else if (iVar5 <= (int)plVar2[4]) {
        if ((param_2[1] < *(int *)((longlong)plVar2 + 0x24)) ||
           ((param_2[1] <= *(int *)((longlong)plVar2 + 0x24) && (param_2[2] < (int)plVar2[5]))))
        goto LAB_1803a6cb7;
      }
    }
    else if ((int)plVar6[4] <= iVar5) {
      if ((*(int *)((longlong)plVar6 + 0x24) < param_2[1]) ||
         ((*(int *)((longlong)plVar6 + 0x24) <= param_2[1] && ((int)plVar6[5] < param_2[2]))))
      goto LAB_1803a6c90;
    }
  }
  puVar4 = (undefined8 *)FUN_1803a6db0(param_1,auStack_18);
  plVar6 = (longlong *)*puVar4;
FUN_1803a6d94:
  return (longlong)plVar6 + 0x2c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1803a6c4c(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *unaff_RBX;
  int *unaff_RDI;
  longlong *unaff_R14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStackX_20 [8];
  
  plVar2 = (longlong *)*unaff_R14;
  if ((unaff_RBX == plVar2) || (unaff_RBX == unaff_R14)) {
    if (unaff_R14[4] == 0) goto FUN_1803a6d7c;
    unaff_RBX = plVar2;
    if (*unaff_RDI <= *(int *)(plVar2 + 4)) {
      if (*unaff_RDI < *(int *)(plVar2 + 4)) goto FUN_1803a6d7c;
      if ((unaff_RDI[1] <= *(int *)((longlong)plVar2 + 0x24)) &&
         ((unaff_RDI[1] < *(int *)((longlong)plVar2 + 0x24) ||
          (unaff_RDI[2] <= *(int *)(plVar2 + 5))))) goto FUN_1803a6d7c;
    }
  }
  else {
    plVar2 = (longlong *)func_0x00018066bd70();
    iVar1 = *unaff_RDI;
    param_1 = extraout_XMM0_Qa;
    if (iVar1 <= (int)unaff_RBX[4]) {
      if (iVar1 < (int)unaff_RBX[4]) goto FUN_1803a6d7c;
      if ((unaff_RDI[1] <= *(int *)((longlong)unaff_RBX + 0x24)) &&
         ((unaff_RDI[1] < *(int *)((longlong)unaff_RBX + 0x24) ||
          (unaff_RDI[2] <= (int)unaff_RBX[5])))) goto FUN_1803a6d7c;
    }
    if ((int)plVar2[4] <= iVar1) {
      if ((int)plVar2[4] < iVar1) goto FUN_1803a6d7c;
      if ((*(int *)((longlong)plVar2 + 0x24) <= unaff_RDI[1]) &&
         ((*(int *)((longlong)plVar2 + 0x24) < unaff_RDI[1] || ((int)plVar2[5] <= unaff_RDI[2]))))
      goto FUN_1803a6d7c;
    }
    if (*unaff_RBX != 0) {
      unaff_RBX = plVar2;
    }
  }
  if (unaff_RBX != (longlong *)0x0) {
    lVar3 = FUN_18062b420(_DAT_180c8ed18,0x30,(char)unaff_R14[5]);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)unaff_RDI;
    *(int *)(lVar3 + 0x28) = unaff_RDI[2];
    *(undefined4 *)(lVar3 + 0x2c) = 0;
                    // WARNING: Subroutine does not return
    FUN_18066bdc0(lVar3,unaff_RBX);
  }
FUN_1803a6d7c:
  plVar2 = (longlong *)FUN_1803a6db0(param_1,auStackX_20);
  return *plVar2 + 0x2c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




