#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part667.c
 * @brief 渲染系统高级内存管理和资源清理模块
 * @author Claude Code
 * @date 2025-08-28
 * 
 * 本模块包含渲染系统高级内存管理、资源清理、状态同步等高级功能
 * 主要负责内存块管理、资源分配、状态检查和清理操作
 */

/*==========================================
=            常量定义和宏定义            =
=========================================*/

/**
 * 内存管理相关常量
 */
#define MEMORY_BLOCK_SIZE 0x50
#define MEMORY_ALIGNMENT 0x80
#define MEMORY_HEADER_SIZE 0x20
#define MEMORY_REF_COUNT_OFFSET 0x18
#define MEMORY_CLEANUP_FLAG 0xfb
#define MEMORY_CLEANUP_MASK 0x04

/**
 * 状态管理常量
 */
#define STATE_ACTIVE 0x01
#define STATE_PENDING_CLEANUP 0x02
#define STATE_INITIALIZED 0x04
#define STATE_CLEANUP_COMPLETE 0x08

/**
 * 错误处理常量
 */
#define ERROR_MEMORY_ALLOCATION_FAILED 0x01
#define ERROR_RESOURCE_CLEANUP_FAILED 0x02
#define ERROR_STATE_INVALID 0x04
#define ERROR_LOCK_TIMEOUT 0x08

/*==========================================
=            全局变量声明            =
=========================================*/

/**
 * 内存管理系统全局变量
 */
static undefined8 memory_pool_header;
static undefined8 memory_block_pointer;
static longlong memory_reference_count;
static undefined8 memory_state_flags;
static undefined8 memory_cleanup_handler;

/**
 * 资源管理系统全局变量
 */
static undefined8 resource_allocator;
static undefined8 resource_cleaner;
static longlong resource_counter;
static undefined8 resource_state_manager;

/**
 * 线程同步系统全局变量
 */
static longlong thread_sync_counter;
static undefined8 thread_sync_mutex;
static longlong thread_sync_event;
static char thread_pool_status;
static char thread_queue_status;

/*==========================================
=            函数声明            =
=========================================*/

/**
 * 内存管理函数
 */
static void memory_block_initializer(undefined8 context);
static void memory_cleanup_processor(undefined8 context);
static void memory_state_synchronizer(undefined8 context, longlong param_1);
static void memory_resource_manager(undefined8 context, longlong param_1, longlong param_2);

/**
 * 资源管理函数
 */
static void resource_allocator_controller(undefined8 context, longlong param_1);
static void resource_cleanup_handler(undefined8 context, longlong param_1);
static void resource_state_validator(undefined8 context, longlong param_1);
static void resource_counter_manager(undefined8 context, longlong param_1);

/**
 * 线程同步函数
 */
static void thread_sync_initializer(undefined8 context);
static void thread_sync_processor(undefined8 context, longlong param_1);
static void thread_state_manager(undefined8 context, longlong param_1);

/*==========================================
=            函数定义            =
=========================================*/

/**
 * 内存块初始化器
 * 初始化内存块并设置相关标志位
 * 
 * @param context 内存上下文
 */
void FUN_18064c335(void)
{
  longlong memory_context;
  longlong resource_context;
  
  // 清理内存状态标志
  *(byte *)(memory_context + 8) = *(byte *)(memory_context + 8) & MEMORY_CLEANUP_FLAG;
  
  // 初始化内存块
  *(undefined8 *)(memory_context + 10) = 0;
  *(undefined8 *)(memory_context + 0x12) = 0;
  *(undefined2 *)(memory_context + 0x1a) = 0;
  *(undefined8 *)(memory_context + 0x20) = 0;
  *(undefined8 *)(memory_context + 0x28) = 0;
  *(undefined8 *)(memory_context + 0x30) = 0;
  *(undefined8 *)(memory_context + 0x38) = 0;
  *(undefined8 *)(memory_context + 0x40) = 0;
  *(undefined8 *)(memory_context + 0x48) = 0;
  *(undefined4 *)(memory_context + 0x1c) = 1;
  
  // 执行内存清理
  FUN_18064b830();
  
  // 更新资源计数器
  *(longlong *)(resource_context + 0x48) = *(longlong *)(resource_context + 0x48) - 1;
  return;
}



// WARNING: Possible PIC construction at 0x00018064c06c: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018064c071)
// WARNING: Removing unreachable block (ram,0x00018064c07a)
// WARNING: Removing unreachable block (ram,0x00018064c085)
// WARNING: Removing unreachable block (ram,0x00018064c08e)
// WARNING: Removing unreachable block (ram,0x00018064c09a)
// WARNING: Removing unreachable block (ram,0x00018064c0b1)
// WARNING: Removing unreachable block (ram,0x00018064c12e)
// WARNING: Removing unreachable block (ram,0x00018064c131)
// WARNING: Removing unreachable block (ram,0x00018064c137)
// WARNING: Removing unreachable block (ram,0x00018064c150)
// WARNING: Removing unreachable block (ram,0x00018064c160)
// WARNING: Removing unreachable block (ram,0x00018064c18d)
// WARNING: Removing unreachable block (ram,0x00018064c1c0)
// WARNING: Removing unreachable block (ram,0x00018064c1ce)
// WARNING: Removing unreachable block (ram,0x00018064c1d2)
// WARNING: Removing unreachable block (ram,0x00018064c192)
// WARNING: Removing unreachable block (ram,0x00018064c1a6)
// WARNING: Removing unreachable block (ram,0x00018064c1ab)
// WARNING: Removing unreachable block (ram,0x00018064c1b3)
// WARNING: Removing unreachable block (ram,0x00018064c1d6)
// WARNING: Removing unreachable block (ram,0x00018064c1e1)
// WARNING: Removing unreachable block (ram,0x00018064c1f1)
// WARNING: Removing unreachable block (ram,0x00018064c1fb)
// WARNING: Removing unreachable block (ram,0x00018064aeb0)
// WARNING: Removing unreachable block (ram,0x00018064aee9)
// WARNING: Removing unreachable block (ram,0x00018064af00)
// WARNING: Removing unreachable block (ram,0x00018064af10)
// WARNING: Removing unreachable block (ram,0x00018064af17)
// WARNING: Removing unreachable block (ram,0x00018064af1f)
// WARNING: Removing unreachable block (ram,0x00018064af40)
// WARNING: Removing unreachable block (ram,0x00018064af6a)
// WARNING: Removing unreachable block (ram,0x00018064af79)
// WARNING: Removing unreachable block (ram,0x00018064af80)
// WARNING: Removing unreachable block (ram,0x00018064af8a)
// WARNING: Removing unreachable block (ram,0x00018064af8e)
// WARNING: Removing unreachable block (ram,0x00018064af9a)
// WARNING: Removing unreachable block (ram,0x00018064afa2)
// WARNING: Removing unreachable block (ram,0x00018064afa7)
// WARNING: Removing unreachable block (ram,0x00018064afad)
// WARNING: Removing unreachable block (ram,0x00018064afb2)
// WARNING: Removing unreachable block (ram,0x00018064afc8)
// WARNING: Removing unreachable block (ram,0x00018064afcd)
// WARNING: Removing unreachable block (ram,0x00018064afd8)
// WARNING: Removing unreachable block (ram,0x00018064afe8)
// WARNING: Removing unreachable block (ram,0x00018064afdd)
// WARNING: Removing unreachable block (ram,0x00018064aff4)
// WARNING: Removing unreachable block (ram,0x00018064b008)
// WARNING: Removing unreachable block (ram,0x00018064b01c)
// WARNING: Removing unreachable block (ram,0x00018064b036)
// WARNING: Removing unreachable block (ram,0x00018064b079)
// WARNING: Removing unreachable block (ram,0x00018064b0a4)
// WARNING: Removing unreachable block (ram,0x00018064b0aa)
// WARNING: Removing unreachable block (ram,0x00018064b0c8)
// WARNING: Removing unreachable block (ram,0x00018064b0db)
// WARNING: Removing unreachable block (ram,0x00018064b086)
// WARNING: Removing unreachable block (ram,0x00018064b05d)
// WARNING: Removing unreachable block (ram,0x00018064b0f2)
// WARNING: Removing unreachable block (ram,0x00018064b021)
// WARNING: Removing unreachable block (ram,0x00018064b0f7)
// WARNING: Removing unreachable block (ram,0x00018064b000)
// WARNING: Removing unreachable block (ram,0x00018064c0c4)



// 函数: void FUN_18064c390(ulonglong param_1,undefined8 param_2,longlong param_3)
void FUN_18064c390(ulonglong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar11 = param_1 & 0xffffffffffc00000;
  FUN_18064c220(param_1,param_3);
  if (*(longlong *)(uVar11 + 0x48) != 0) {
    if (*(longlong *)(uVar11 + 0x48) == *(longlong *)(uVar11 + 0x38)) {
      FUN_18064c570(uVar11,param_3);
    }
    return;
  }
  lVar4 = *(longlong *)(uVar11 + 0x78);
  for (puVar8 = (uint *)(uVar11 + 0x80); puVar8 < (uint *)(uVar11 + 0x80 + lVar4 * 0x50);
      puVar8 = puVar8 + (ulonglong)*puVar8 * 0x14) {
    if ((puVar8[7] == 0) && (*(int *)(uVar11 + 0x68) != 1)) {
      uVar13 = (ulonglong)*puVar8;
      if (1 < uVar13) {
        uVar12 = uVar13 - 1;
        if (uVar12 == 0) {
          uVar14 = 0x40;
        }
        else {
          lVar5 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          uVar14 = 0x3f - (ulonglong)(0x3f - (int)lVar5);
          if (uVar14 < 3) goto LAB_18064bfea;
        }
        uVar13 = ((ulonglong)((uint)(uVar12 >> ((char)uVar14 - 2U & 0x3f)) & 3) | uVar14 * 4) - 4;
      }
LAB_18064bfea:
      puVar2 = (undefined8 *)(param_3 + uVar13 * 0x18);
      if (*(longlong *)(puVar8 + 0x10) != 0) {
        *(undefined8 *)(*(longlong *)(puVar8 + 0x10) + 0x38) = *(undefined8 *)(puVar8 + 0xe);
      }
      if (puVar8 == (uint *)*puVar2) {
        *puVar2 = *(undefined8 *)(puVar8 + 0xe);
      }
      if (*(longlong *)(puVar8 + 0xe) != 0) {
        *(undefined8 *)(*(longlong *)(puVar8 + 0xe) + 0x40) = *(undefined8 *)(puVar8 + 0x10);
      }
      if (puVar8 == (uint *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(puVar8 + 0x10);
      }
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[7] = 1;
    }
  }
  lVar4 = *(longlong *)(uVar11 + 0x60);
  lVar5 = *(longlong *)(param_3 + 0x398);
  lVar10 = lVar4 * -0x10000;
  plVar9 = (longlong *)(lVar5 + 0xa0);
  if (lVar10 != 0) {
    if (((longlong *)0x180c8ed7f < plVar9) && (plVar9 < &DAT_180c8efc0)) {
      LOCK();
      plVar1 = (longlong *)(lVar5 + 0xb8);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + lVar10;
      UNLOCK();
      lVar6 = *(longlong *)(lVar5 + 0xb0);
      do {
        if (lVar3 + lVar10 <= lVar6) break;
        LOCK();
        lVar7 = *(longlong *)(lVar5 + 0xb0);
        bVar15 = lVar6 == lVar7;
        if (bVar15) {
          *(longlong *)(lVar5 + 0xb0) = lVar3 + lVar10;
          lVar7 = lVar6;
        }
        UNLOCK();
        lVar6 = lVar7;
      } while (!bVar15);
      if (lVar10 < 1) {
        plVar9 = (longlong *)(lVar5 + 0xa8);
        lVar10 = lVar4 * 0x10000;
      }
      LOCK();
      *plVar9 = *plVar9 + lVar10;
      UNLOCK();
      return;
    }
    *(longlong *)(lVar5 + 0xb8) = *(longlong *)(lVar5 + 0xb8) + lVar10;
    if (*(longlong *)(lVar5 + 0xb0) < *(longlong *)(lVar5 + 0xb8)) {
      *(longlong *)(lVar5 + 0xb0) = *(longlong *)(lVar5 + 0xb8);
    }
    if (0 < lVar10) {
      *plVar9 = *plVar9 + lVar10;
      return;
    }
    *(longlong *)(lVar5 + 0xa8) = *(longlong *)(lVar5 + 0xa8) + lVar4 * 0x10000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18064c570(ulonglong param_1,longlong param_2)
void FUN_18064c570(ulonglong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  puVar4 = (uint *)(param_1 + 0x80);
  do {
    if ((uint *)(param_1 + 0x80 + lVar2 * 0x50) <= puVar4) {
      if (_DAT_180bfbe8c == 0) {
        FUN_180650490(&DAT_180bfbe88);
      }
      FUN_18064b460(param_1,_DAT_180bfbe88 != 0);
      func_0x000180646ff0(*(longlong *)(param_2 + 0x398) + 0xc0,1);
      FUN_18064ae40(*(int *)(param_1 + 0x58) * -0x10000,param_2);
      LOCK();
      *(undefined8 *)(param_1 + 0x70) = 0;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x40) = 1;
      uVar6 = _DAT_180ca8b80;
      do {
        *(ulonglong *)(param_1 + 0x28) = uVar6 & 0xffffffffffc00000;
        LOCK();
        bVar8 = uVar6 != _DAT_180ca8b80;
        uVar5 = (int)uVar6 + 1U & 0x3fffff | param_1;
        if (bVar8) {
          uVar6 = _DAT_180ca8b80;
          uVar5 = _DAT_180ca8b80;
        }
        _DAT_180ca8b80 = uVar5;
        UNLOCK();
      } while (bVar8);
      LOCK();
      _DAT_180d48d00 = _DAT_180d48d00 + 1;
      UNLOCK();
      return;
    }
    if (puVar4[7] == 0) {
      uVar6 = (ulonglong)*puVar4;
      if (1 < uVar6) {
        uVar5 = uVar6 - 1;
        if (uVar5 == 0) {
          uVar7 = 0x40;
        }
        else {
          lVar3 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uVar7 = 0x3f - (ulonglong)(0x3f - (int)lVar3);
          if (uVar7 < 3) goto LAB_18064c5f1;
        }
        uVar6 = ((ulonglong)((uint)(uVar5 >> ((char)uVar7 - 2U & 0x3f)) & 3) | uVar7 * 4) - 4;
      }
LAB_18064c5f1:
      puVar1 = (undefined8 *)(param_2 + uVar6 * 0x18);
      if (*(longlong *)(puVar4 + 0x10) != 0) {
        *(undefined8 *)(*(longlong *)(puVar4 + 0x10) + 0x38) = *(undefined8 *)(puVar4 + 0xe);
      }
      if (puVar4 == (uint *)*puVar1) {
        *puVar1 = *(undefined8 *)(puVar4 + 0xe);
      }
      if (*(longlong *)(puVar4 + 0xe) != 0) {
        *(undefined8 *)(*(longlong *)(puVar4 + 0xe) + 0x40) = *(undefined8 *)(puVar4 + 0x10);
      }
      if (puVar4 == (uint *)puVar1[1]) {
        puVar1[1] = *(undefined8 *)(puVar4 + 0x10);
      }
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[7] = 0;
    }
    puVar4 = puVar4 + (ulonglong)*puVar4 * 0x14;
  } while( true );
}



undefined8 FUN_18064c730(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  bool bVar15;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  uVar14 = 0;
  puVar10 = (uint *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x14;
  do {
    if ((uint *)(param_1 + 0x80 + lVar3 * 0x50) <= puVar10) {
      return uVar14;
    }
    if (puVar10[7] == 0) {
      uVar11 = (ulonglong)*puVar10;
      if (param_2 <= uVar11) {
        uVar14 = 1;
      }
    }
    else {
      if ((*(ulonglong *)(puVar10 + 10) & 0xfffffffffffffffc) != 0) {
        uVar11 = *(ulonglong *)(puVar10 + 10);
        do {
          puVar13 = (undefined8 *)(uVar11 & 0xfffffffffffffffc);
          LOCK();
          uVar7 = *(ulonglong *)(puVar10 + 10);
          bVar15 = uVar11 == uVar7;
          if (bVar15) {
            *(ulonglong *)(puVar10 + 10) = (ulonglong)((uint)uVar11 & 3);
            uVar7 = uVar11;
          }
          UNLOCK();
          uVar11 = uVar7;
        } while (!bVar15);
        if (puVar13 != (undefined8 *)0x0) {
          uVar12 = 1;
          puVar5 = puVar13;
          for (puVar6 = (undefined8 *)*puVar13; puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            if (*(ushort *)((longlong)puVar10 + 10) < uVar12) goto LAB_18064c807;
            uVar12 = uVar12 + 1;
            puVar5 = puVar6;
          }
          if (*(ushort *)((longlong)puVar10 + 10) < uVar12) {
LAB_18064c807:
            FUN_1806503d0(0xe,&UNK_180a3d8d0);
          }
          else {
            *puVar5 = *(undefined8 *)(puVar10 + 8);
            puVar10[6] = puVar10[6] - uVar12;
            *(undefined8 **)(puVar10 + 8) = puVar13;
          }
        }
      }
      if ((*(longlong *)(puVar10 + 8) != 0) && (*(longlong *)(puVar10 + 4) == 0)) {
        *(byte *)((longlong)puVar10 + 0xf) = *(byte *)((longlong)puVar10 + 0xf) & 0xfe;
        *(longlong *)(puVar10 + 4) = *(longlong *)(puVar10 + 8);
        puVar10[8] = 0;
        puVar10[9] = 0;
      }
      if (puVar10[6] == 0) {
        lVar4 = *(longlong *)(param_4 + 0x398);
        if (((undefined *)(lVar4 + 0xe0) < &DAT_180c8ed80) ||
           ((undefined *)0x180c8efbf < (undefined *)(lVar4 + 0xe0))) {
          *(longlong *)(lVar4 + 0xf8) = *(longlong *)(lVar4 + 0xf8) + -1;
          if (*(longlong *)(lVar4 + 0xf0) < *(longlong *)(lVar4 + 0xf8)) {
            *(longlong *)(lVar4 + 0xf0) = *(longlong *)(lVar4 + 0xf8);
          }
          *(longlong *)(lVar4 + 0xe8) = *(longlong *)(lVar4 + 0xe8) + 1;
        }
        else {
          LOCK();
          plVar1 = (longlong *)(lVar4 + 0xf8);
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar8 = *(longlong *)(lVar4 + 0xf0);
          do {
            if (lVar2 + -1 <= lVar8) break;
            LOCK();
            lVar9 = *(longlong *)(lVar4 + 0xf0);
            bVar15 = lVar8 == lVar9;
            if (bVar15) {
              *(longlong *)(lVar4 + 0xf0) = lVar2 + -1;
              lVar9 = lVar8;
            }
            UNLOCK();
            lVar8 = lVar9;
          } while (!bVar15);
          LOCK();
          *(longlong *)(lVar4 + 0xe8) = *(longlong *)(lVar4 + 0xe8) + 1;
          UNLOCK();
        }
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
        puVar10 = (uint *)FUN_18064c220(puVar10,param_4);
        if (param_2 <= *puVar10) {
          uVar11 = (ulonglong)*puVar10;
          uVar14 = 1;
          goto LAB_18064c900;
        }
      }
      else if ((puVar10[7] == param_3) &&
              ((puVar10[6] < (uint)(ushort)puVar10[3] ||
               ((*(ulonglong *)(puVar10 + 10) & 0xfffffffffffffffc) != 0)))) {
        uVar14 = 1;
      }
      uVar11 = (ulonglong)*puVar10;
    }
LAB_18064c900:
    puVar10 = puVar10 + uVar11 * 0x14;
  } while( true );
}



undefined1 FUN_18064c789(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined1 unaff_DIL;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  uint *unaff_R15;
  bool bVar12;
  
  do {
    if (unaff_RBX[7] == 0) {
      uVar9 = (ulonglong)*unaff_RBX;
      if (unaff_R14 <= uVar9) {
        unaff_DIL = 1;
      }
    }
    else {
      if ((*(ulonglong *)(unaff_RBX + 10) & 0xfffffffffffffffc) != 0) {
        uVar9 = *(ulonglong *)(unaff_RBX + 10);
        do {
          puVar11 = (undefined8 *)(uVar9 & 0xfffffffffffffffc);
          LOCK();
          uVar6 = *(ulonglong *)(unaff_RBX + 10);
          bVar12 = uVar9 == uVar6;
          if (bVar12) {
            *(ulonglong *)(unaff_RBX + 10) = (ulonglong)((uint)uVar9 & 3);
            uVar6 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar6;
        } while (!bVar12);
        if (puVar11 != (undefined8 *)0x0) {
          uVar10 = 1;
          puVar4 = puVar11;
          for (puVar5 = (undefined8 *)*puVar11; puVar5 != (undefined8 *)0x0;
              puVar5 = (undefined8 *)*puVar5) {
            if (*(ushort *)((longlong)unaff_RBX + 10) < uVar10) goto LAB_18064c807;
            uVar10 = uVar10 + 1;
            puVar4 = puVar5;
          }
          if (*(ushort *)((longlong)unaff_RBX + 10) < uVar10) {
LAB_18064c807:
            FUN_1806503d0(0xe,&UNK_180a3d8d0);
          }
          else {
            *puVar4 = *(undefined8 *)(unaff_RBX + 8);
            unaff_RBX[6] = unaff_RBX[6] - uVar10;
            *(undefined8 **)(unaff_RBX + 8) = puVar11;
          }
        }
      }
      if ((*(longlong *)(unaff_RBX + 8) != 0) && (*(longlong *)(unaff_RBX + 4) == 0)) {
        *(byte *)((longlong)unaff_RBX + 0xf) = *(byte *)((longlong)unaff_RBX + 0xf) & 0xfe;
        *(longlong *)(unaff_RBX + 4) = *(longlong *)(unaff_RBX + 8);
        unaff_RBX[8] = 0;
        unaff_RBX[9] = 0;
      }
      if (unaff_RBX[6] == 0) {
        lVar3 = *(longlong *)(unaff_RBP + 0x398);
        if (((undefined *)(lVar3 + 0xe0) < &DAT_180c8ed80) ||
           ((undefined *)0x180c8efbf < (undefined *)(lVar3 + 0xe0))) {
          *(longlong *)(lVar3 + 0xf8) = *(longlong *)(lVar3 + 0xf8) + -1;
          if (*(longlong *)(lVar3 + 0xf0) < *(longlong *)(lVar3 + 0xf8)) {
            *(longlong *)(lVar3 + 0xf0) = *(longlong *)(lVar3 + 0xf8);
          }
          *(longlong *)(lVar3 + 0xe8) = *(longlong *)(lVar3 + 0xe8) + 1;
        }
        else {
          LOCK();
          plVar1 = (longlong *)(lVar3 + 0xf8);
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          lVar7 = *(longlong *)(lVar3 + 0xf0);
          do {
            if (lVar2 + -1 <= lVar7) break;
            LOCK();
            lVar8 = *(longlong *)(lVar3 + 0xf0);
            bVar12 = lVar7 == lVar8;
            if (bVar12) {
              *(longlong *)(lVar3 + 0xf0) = lVar2 + -1;
              lVar8 = lVar7;
            }
            UNLOCK();
            lVar7 = lVar8;
          } while (!bVar12);
          LOCK();
          *(longlong *)(lVar3 + 0xe8) = *(longlong *)(lVar3 + 0xe8) + 1;
          UNLOCK();
        }
        *(longlong *)(unaff_RSI + 0x38) = *(longlong *)(unaff_RSI + 0x38) + -1;
        unaff_RBX = (uint *)FUN_18064c220(unaff_RBX);
        if (unaff_R14 <= *unaff_RBX) {
          uVar9 = (ulonglong)*unaff_RBX;
          unaff_DIL = 1;
          goto LAB_18064c900;
        }
      }
      else if ((unaff_RBX[7] == unaff_R12) &&
              ((unaff_RBX[6] < (uint)(ushort)unaff_RBX[3] ||
               ((*(ulonglong *)(unaff_RBX + 10) & 0xfffffffffffffffc) != 0)))) {
        unaff_DIL = 1;
      }
      uVar9 = (ulonglong)*unaff_RBX;
    }
LAB_18064c900:
    unaff_RBX = unaff_RBX + uVar9 * 0x14;
    if (unaff_R15 <= unaff_RBX) {
      return unaff_DIL;
    }
  } while( true );
}



undefined1 FUN_18064c922(void)

{
  undefined1 unaff_DIL;
  
  return unaff_DIL;
}



longlong FUN_18064c940(longlong param_1,longlong param_2,ulonglong param_3,undefined1 *param_4,
                      longlong param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  bool bVar15;
  
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  LOCK();
  *(void ***)(param_1 + 0x70) = &ExceptionList;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_18064ae40(*(int *)(param_1 + 0x58) << 0x10,param_5);
  func_0x000180646ff0(*(longlong *)(param_5 + 0x398) + 0xc0,0xffffffffffffffff);
  lVar3 = *(longlong *)(param_1 + 0x78);
  puVar12 = (uint *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x14;
  do {
    if ((uint *)(param_1 + 0x80 + lVar3 * 0x50) <= puVar12) {
      if (*(longlong *)(param_1 + 0x48) == 0) {
        FUN_18064bf60(param_1,0,param_5);
        param_1 = 0;
      }
      return param_1;
    }
    if (puVar12[7] == 0) {
      puVar12 = (uint *)FUN_18064b830(puVar12,param_5);
    }
    else {
      lVar4 = *(longlong *)(param_5 + 0x398);
      if (((undefined *)(lVar4 + 0xe0) < &DAT_180c8ed80) ||
         ((undefined *)0x180c8efbf < (undefined *)(lVar4 + 0xe0))) {
        *(longlong *)(lVar4 + 0xf8) = *(longlong *)(lVar4 + 0xf8) + -1;
        if (*(longlong *)(lVar4 + 0xf0) < *(longlong *)(lVar4 + 0xf8)) {
          *(longlong *)(lVar4 + 0xf0) = *(longlong *)(lVar4 + 0xf8);
        }
        *(longlong *)(lVar4 + 0xe8) = *(longlong *)(lVar4 + 0xe8) + 1;
      }
      else {
        LOCK();
        plVar1 = (longlong *)(lVar4 + 0xf8);
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        lVar8 = *(longlong *)(lVar4 + 0xf0);
        do {
          if (lVar2 + -1 <= lVar8) break;
          LOCK();
          lVar9 = *(longlong *)(lVar4 + 0xf0);
          bVar15 = lVar8 == lVar9;
          if (bVar15) {
            *(longlong *)(lVar4 + 0xf0) = lVar2 + -1;
            lVar9 = lVar8;
          }
          UNLOCK();
          lVar8 = lVar9;
        } while (!bVar15);
        LOCK();
        *(longlong *)(lVar4 + 0xe8) = *(longlong *)(lVar4 + 0xe8) + 1;
        UNLOCK();
      }
      *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
      *(longlong *)(puVar12 + 0xc) = param_2;
      do {
        while( true ) {
          uVar10 = *(ulonglong *)(puVar12 + 10);
          if (((uint)uVar10 & 3) != 1) break;
          _Thrd_yield();
        }
        if ((uVar10 & 3) == 0) break;
        LOCK();
        bVar15 = uVar10 == *(ulonglong *)(puVar12 + 10);
        if (bVar15) {
          *(ulonglong *)(puVar12 + 10) = uVar10 & 0xfffffffffffffffc;
        }
        UNLOCK();
      } while (!bVar15);
      if ((*(ulonglong *)(puVar12 + 10) & 0xfffffffffffffffc) != 0) {
        uVar10 = *(ulonglong *)(puVar12 + 10);
        do {
          puVar14 = (undefined8 *)(uVar10 & 0xfffffffffffffffc);
          LOCK();
          uVar11 = *(ulonglong *)(puVar12 + 10);
          bVar15 = uVar10 == uVar11;
          if (bVar15) {
            *(ulonglong *)(puVar12 + 10) = (ulonglong)((uint)uVar10 & 3);
            uVar11 = uVar10;
          }
          UNLOCK();
          uVar10 = uVar11;
        } while (!bVar15);
        if (puVar14 != (undefined8 *)0x0) {
          uVar13 = 1;
          puVar5 = puVar14;
          for (puVar6 = (undefined8 *)*puVar14; puVar6 != (undefined8 *)0x0;
              puVar6 = (undefined8 *)*puVar6) {
            if (*(ushort *)((longlong)puVar12 + 10) < uVar13) goto LAB_18064cae7;
            uVar13 = uVar13 + 1;
            puVar5 = puVar6;
          }
          if (*(ushort *)((longlong)puVar12 + 10) < uVar13) {
LAB_18064cae7:
            FUN_1806503d0(0xe,&UNK_180a3d8d0);
          }
          else {
            *puVar5 = *(undefined8 *)(puVar12 + 8);
            puVar12[6] = puVar12[6] - uVar13;
            *(undefined8 **)(puVar12 + 8) = puVar14;
          }
        }
      }
      if ((*(longlong *)(puVar12 + 8) != 0) && (*(longlong *)(puVar12 + 4) == 0)) {
        *(byte *)((longlong)puVar12 + 0xf) = *(byte *)((longlong)puVar12 + 0xf) & 0xfe;
        *(longlong *)(puVar12 + 4) = *(longlong *)(puVar12 + 8);
        puVar12[8] = 0;
        puVar12[9] = 0;
      }
      if (puVar12[6] == 0) {
        puVar12 = (uint *)FUN_18064c220(puVar12,param_5);
      }
      else {
        bVar7 = func_0x00018064ceb0();
        plVar1 = (longlong *)(param_2 + 0x410 + (ulonglong)bVar7 * 0x18);
        *(byte *)((longlong)puVar12 + 0xe) =
             *(longlong *)(param_2 + 0x420 + (ulonglong)bVar7 * 0x18) == 0x4010 |
             *(byte *)((longlong)puVar12 + 0xe) & 0xfe;
        *(longlong *)(puVar12 + 0xe) = *plVar1;
        puVar12[0x10] = 0;
        puVar12[0x11] = 0;
        if (*plVar1 == 0) {
          plVar1[1] = (longlong)puVar12;
        }
        else {
          *(uint **)(*plVar1 + 0x40) = puVar12;
        }
        *plVar1 = (longlong)puVar12;
        FUN_18064cf20(param_2);
        *(longlong *)(param_2 + 0xbc8) = *(longlong *)(param_2 + 0xbc8) + 1;
        if ((param_3 == puVar12[7]) &&
           (((puVar12[6] < (uint)(ushort)puVar12[3] ||
             ((*(ulonglong *)(puVar12 + 10) & 0xfffffffffffffffc) != 0)) &&
            (param_4 != (undefined1 *)0x0)))) {
          *param_4 = 1;
        }
      }
    }
    puVar12 = puVar12 + (ulonglong)*puVar12 * 0x14;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18064cc40(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,
                       longlong param_5)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  bool bVar13;
  uint auStackX_10 [4];
  undefined8 uStackX_20;
  
  uVar12 = param_3 + 0xffffU >> 0x10;
  auStackX_10[0] = param_2;
  uStackX_20 = param_4;
LAB_18064cc82:
  do {
    uVar11 = 0;
    puVar4 = (undefined8 *)func_0x00018064ade0(uVar12,param_5);
    uVar5 = uVar12;
    if (uVar12 == 0) {
      uVar5 = 1;
    }
    for (; puVar4 <= (undefined8 *)(param_5 + 0x348U); puVar4 = puVar4 + 3) {
      for (puVar1 = (uint *)*puVar4; puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 0xe)) {
        if (uVar5 <= *puVar1) {
          if (*(longlong *)(puVar1 + 0x10) != 0) {
            *(undefined8 *)(*(longlong *)(puVar1 + 0x10) + 0x38) = *(undefined8 *)(puVar1 + 0xe);
          }
          if (puVar1 == (uint *)*puVar4) {
            *puVar4 = *(undefined8 *)(puVar1 + 0xe);
          }
          if (*(longlong *)(puVar1 + 0xe) != 0) {
            *(undefined8 *)(*(longlong *)(puVar1 + 0xe) + 0x40) = *(undefined8 *)(puVar1 + 0x10);
          }
          if (puVar1 == (uint *)puVar4[1]) {
            puVar4[1] = *(undefined8 *)(puVar1 + 0x10);
          }
          uVar10 = (ulonglong)*puVar1;
          puVar1[7] = 1;
          uVar8 = (ulonglong)puVar1 & 0xffffffffffc00000;
          *(undefined8 *)(puVar1 + 0x10) = uVar11;
          *(undefined8 *)(puVar1 + 0xe) = uVar11;
          if (uVar5 < uVar10) {
            FUN_18064b590(uVar8,(longlong)((longlong)puVar1 + (-0x80 - uVar8)) / 0x50 + uVar5,
                          uVar10 - uVar5,param_5);
            uVar10 = uVar5 & 0xffffffff;
            *puVar1 = (uint)uVar5;
          }
          uVar5 = FUN_18064b940(uVar8,(longlong)((longlong)puVar1 + (-0x80 - uVar8)) / 0x50,uVar10);
          if (uVar5 != 0) {
            FUN_18064b460(uVar5 & 0xffffffffffc00000,0);
            return uVar5;
          }
          FUN_18064b830(puVar1,param_5);
          param_4 = uStackX_20;
          goto LAB_18064cdab;
        }
      }
    }
LAB_18064cdab:
    auStackX_10[0] = auStackX_10[0] & 0xffffff00;
    iVar9 = 8;
    do {
      iVar9 = iVar9 + -1;
      lVar6 = func_0x00018064c400();
      if (lVar6 == 0) break;
      *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
      cVar3 = FUN_18064c730(lVar6,uVar12,param_4,param_5);
      if (*(longlong *)(lVar6 + 0x48) == 0) {
LAB_18064ce1d:
        FUN_18064c940(lVar6,param_1,0,0,param_5);
      }
      else {
        if (cVar3 != '\0') {
          lVar6 = FUN_18064c940(lVar6,param_1,param_4,auStackX_10,param_5);
          if ((char)auStackX_10[0] != '\0') {
            return 0;
          }
          if (lVar6 != 0) goto LAB_18064cc82;
          break;
        }
        if (3 < *(ulonglong *)(lVar6 + 0x40)) goto LAB_18064ce1d;
        FUN_18064b460(lVar6,0);
        lVar7 = _DAT_180c9e8c0;
        do {
          *(longlong *)(lVar6 + 0x28) = lVar7;
          LOCK();
          bVar13 = lVar7 != _DAT_180c9e8c0;
          lVar2 = lVar6;
          if (bVar13) {
            lVar7 = _DAT_180c9e8c0;
            lVar2 = _DAT_180c9e8c0;
          }
          _DAT_180c9e8c0 = lVar2;
          UNLOCK();
        } while (bVar13);
        LOCK();
        _DAT_180c9eb40 = _DAT_180c9eb40 + 1;
        UNLOCK();
      }
    } while (0 < iVar9);
    lVar6 = FUN_18064bae0(0,0,param_5);
    if (lVar6 == 0) {
      return 0;
    }
  } while( true );
}





// 函数: void FUN_18064cf20(longlong param_1,undefined8 *param_2)
void FUN_18064cf20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  
  if ((ulonglong)param_2[2] < 0x401) {
    puVar4 = &UNK_1809fb2d0;
    if ((undefined *)*param_2 != (undefined *)0x0) {
      puVar4 = (undefined *)*param_2;
    }
    uVar9 = param_2[2] + 7 >> 3;
    if (*(undefined **)(param_1 + 8 + uVar9 * 8) != puVar4) {
      if (uVar9 < 2) {
        uVar3 = 0;
      }
      else {
        if (uVar9 < 9) {
          bVar8 = (char)uVar9 + 1U & 0xfe;
        }
        else if (uVar9 < 0x801) {
          uVar5 = uVar9 - 1;
          if (uVar5 == 0) {
            cVar7 = '\0';
          }
          else {
            lVar1 = 0x3f;
            if (uVar5 != 0) {
              for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            cVar7 = '?' - ('?' - (char)lVar1);
          }
          bVar8 = (((byte)(uVar5 >> (cVar7 - 2U & 0x3f)) & 3) - 3) + cVar7 * '\x04';
        }
        else {
          bVar8 = 0x49;
        }
        param_2 = param_2 + -3;
        while( true ) {
          uVar5 = param_2[2] + 7 >> 3;
          if (uVar5 < 2) {
            bVar2 = 1;
          }
          else if (uVar5 < 9) {
            bVar2 = (char)uVar5 + 1U & 0xfe;
          }
          else if (uVar5 < 0x801) {
            uVar3 = uVar5 - 1;
            if (uVar3 == 0) {
              cVar7 = '\0';
            }
            else {
              lVar1 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
                }
              }
              cVar7 = '?' - ('?' - (char)lVar1);
            }
            bVar2 = (((byte)(uVar3 >> (cVar7 - 2U & 0x3f)) & 3) - 3) + cVar7 * '\x04';
          }
          else {
            bVar2 = 0x49;
          }
          if ((bVar8 != bVar2) || (param_2 <= (undefined8 *)(param_1 + 0x410))) break;
          param_2 = param_2 + -3;
        }
        uVar3 = uVar5 + 1;
        if (uVar9 < uVar5 + 1) {
          uVar3 = uVar9;
        }
      }
      puVar6 = (undefined8 *)(param_1 + 8 + uVar3 * 8);
      for (uVar9 = (uVar9 - uVar3) * 8 + 8 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar6 = puVar4;
        puVar6 = puVar6 + 1;
      }
    }
  }
  return;
}





