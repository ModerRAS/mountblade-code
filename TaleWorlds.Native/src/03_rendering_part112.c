#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part112.c
 * @brief 渲染系统高级数据保存和加载模块
 * 
 * 本模块包含5个核心函数，涵盖渲染系统数据保存、加载、资源管理、
 * 文件操作、内存管理和数据序列化等高级渲染功能。
 */

/**
 * @defgroup rendering_constants 渲染系统常量定义
 * @{
 */
#define RENDERING_BUFFER_SIZE 0x48
#define RENDERING_LARGE_BUFFER_SIZE 0xa8
#define RENDERING_RESOURCE_OFFSET_1 0x878
#define RENDERING_RESOURCE_OFFSET_2 0x888
#define RENDERING_RESOURCE_OFFSET_3 0x898
#define RENDERING_RESOURCE_OFFSET_4 0x8a8
#define RENDERING_RESOURCE_OFFSET_5 0x8b8
#define RENDERING_RESOURCE_OFFSET_6 0x8c8
#define RENDERING_HASH_TABLE_SIZE 0x100
#define RENDERING_MUTEX_TIMEOUT 0x30000
#define RENDERING_CLEANUP_FLAG 3
#define RENDERING_ALIGNMENT_MASK 0x1f
#define RENDERING_MAX_ITERATIONS 0x40
#define RENDERING_DATA_BLOCK_SIZE 0xe0
#define RENDERING_POOL_SIZE 0x100000
#define RENDERING_FILE_BUFFER_SIZE 0x18
#define RENDERING_RESOURCE_ID_OFFSET 0x6c8
#define RENDERING_CONTEXT_OFFSET 0x9f8
#define RENDERING_OUTPUT_OFFSET 0xa00
/* @} */

/**
 * @defgroup rendering_function_aliases 渲染系统函数别名
 * @{
 */
#define RenderingSystem_SaveResourceData FUN_180335980
#define RenderingSystem_LoadResourceData FUN_180335f10
#define RenderingSystem_SaveResourceDataEx FUN_180336240
#define RenderingSystem_LoadResourceDataEx FUN_180336540
#define RenderingSystem_ProcessResourceOperation FUN_1803368b0
/* @} */

/**
 * @brief 渲染系统资源数据保存器
 * 
 * 该函数负责保存渲染系统资源数据，包括数据序列化、内存管理、
 * 文件写入、资源清理和状态管理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件上下文指针
 * @param data_context 数据上下文指针
 * @param save_flag 保存标志
 * @return void
 */
void RenderingSystem_SaveResourceData(longlong resource_context, longlong file_context, longlong data_context, undefined8 save_flag)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong lStack_70;
  uint *puStack_68;
  longlong lStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  
  lStack_70 = 0;
  puStack_68 = (uint *)0x0;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_56 = 3;
  uVar2 = *(undefined8 *)(resource_context + 0x898);
  lStackX_18 = data_context;
  FUN_180639bf0(&lStack_70,8,data_context,save_flag,0xfffffffffffffffe);
  *(undefined8 *)puStack_68 = uVar2;
  puVar10 = (uint *)((longlong)puStack_68 + 8);
  lStackX_20 = resource_context + 0x878;
  lVar6 = *(longlong *)(resource_context + 0x880);
  lVar8 = lStack_70;
  puStack_68 = puVar10;
  if (lVar6 != lStackX_20) {
    do {
      iVar1 = *(int *)(lVar6 + 0x20);
      lVar3 = *(longlong *)(lVar6 + 0x30);
      lVar4 = *(longlong *)(lVar6 + 0x28);
      if ((ulonglong)((lVar8 - (longlong)puVar10) + lStack_60) < 9) {
        FUN_180639bf0(&lStack_70,(longlong)puVar10 + (8 - lVar8));
        lVar8 = lStack_70;
        puVar10 = puStack_68;
      }
      *(longlong *)puVar10 = (longlong)iVar1;
      puStack_68 = puVar10 + 2;
      if ((ulonglong)((lVar8 - (longlong)puStack_68) + lStack_60) < 5) {
        FUN_180639bf0(&lStack_70,(longlong)puStack_68 + (4 - lVar8));
        lVar8 = lStack_70;
      }
      uVar9 = (uint)(lVar3 - lVar4 >> 3);
      *puStack_68 = uVar9;
      puVar10 = puStack_68 + 1;
      puStack_68 = puVar10;
      if (0 < (int)uVar9) {
        lVar6 = **(longlong **)(lVar6 + 0x28);
        uVar9 = *(uint *)(lVar6 + 0x98);
        if ((ulonglong)((lVar8 - (longlong)puVar10) + lStack_60) <= (ulonglong)uVar9 + 4) {
          FUN_180639bf0(&lStack_70,(((ulonglong)uVar9 + 4) - lVar8) + (longlong)puVar10);
        }
        *puStack_68 = uVar9;
        puStack_68 = puStack_68 + 1;
        puVar5 = *(undefined **)(lVar6 + 0x90);
        puVar7 = &DAT_18098bc73;
        if (puVar5 != (undefined *)0x0) {
          puVar7 = puVar5;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_68,puVar7,uVar9);
      }
      lVar6 = func_0x00018066bd70(lVar6);
    } while (lVar6 != lStackX_20);
  }
  lStackX_18 = lStack_60;
  fwrite(&lStackX_18,8,1,*(undefined8 *)(file_context + 8));
  fwrite(lVar8,lStackX_18,1,*(undefined8 *)(file_context + 8));
  if (((char)uStack_58 == '\0') && (lVar8 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据加载器
 * 
 * 该函数负责加载渲染系统资源数据，包括数据反序列化、内存分配、
 * 文件读取、资源重建和状态恢复等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件上下文指针
 * @param load_flag 加载标志
 * @return void
 */
void RenderingSystem_LoadResourceData(longlong resource_context, longlong file_context, undefined8 load_flag)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  undefined1 auStack_78 [8];
  longlong lStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  
  lStackX_10 = 0;
  uStackX_18 = param_3;
  fread(&lStackX_10,8,1,*(undefined8 *)(file_context + 8));
  lStack_70 = 0;
  plStack_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_56 = 3;
  if (lStackX_10 != 0) {
    FUN_180639bf0(&lStack_70);
  }
  lVar7 = lStack_70;
  fread(lStack_70,lStackX_10,1,*(undefined8 *)(file_context + 8));
  lVar10 = *plStack_68;
  plStack_68 = plStack_68 + 1;
  do {
    if (lVar10 == 0) {
      if (((char)uStack_58 == '\0') && (lVar7 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar7);
      }
      return;
    }
    lVar7 = *plStack_68;
    puVar4 = (uint *)(plStack_68 + 1);
    plStack_68 = (longlong *)((longlong)plStack_68 + 0xc);
    if (0 < (int)*puVar4) {
      puVar1 = (undefined8 *)(resource_context + 0x878);
      iVar12 = (int)lVar7;
      uVar3 = (ulonglong)uStackX_18 >> 0x20;
      uStackX_18 = CONCAT44((int)uVar3,iVar12);
      uStackX_20 = (ulonglong)*puVar4;
      do {
        puVar8 = (undefined8 *)0x0;
        puVar5 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
        plVar2 = (longlong *)(puVar5 + 0x22);
        *plVar2 = (longlong)&UNK_18098bcb0;
        *(undefined8 *)(puVar5 + 0x24) = 0;
        puVar5[0x26] = 0;
        *plVar2 = (longlong)&UNK_180a3c3e0;
        *(undefined8 *)(puVar5 + 0x28) = 0;
        *(undefined8 *)(puVar5 + 0x24) = 0;
        puVar5[0x26] = 0;
        *puVar5 = 0xffffffff;
        (**(code **)(*plVar2 + 0x10))(plVar2,&DAT_18098bc73);
        *(undefined8 *)(puVar5 + 1) = 0x3f800000;
        *(undefined8 *)(puVar5 + 3) = 0;
        *(undefined8 *)(puVar5 + 5) = 0x3f80000000000000;
        *(undefined8 *)(puVar5 + 7) = 0;
        *(undefined8 *)(puVar5 + 9) = 0;
        *(undefined8 *)(puVar5 + 0xb) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0xd) = 0;
        *(undefined8 *)(puVar5 + 0xf) = 0x3f80000000000000;
        *(undefined8 *)(puVar5 + 0x11) = 0x3f800000;
        *(undefined8 *)(puVar5 + 0x13) = 0;
        *(undefined8 *)(puVar5 + 0x15) = 0x3f80000000000000;
        *(undefined8 *)(puVar5 + 0x17) = 0;
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1b] = 0x3f800000;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x20] = 0x3f800000;
        FUN_18033a3f0(puVar5,&lStack_70);
        puVar6 = puVar1;
        puVar11 = *(undefined8 **)(resource_context + 0x888);
        while (puVar11 != (undefined8 *)0x0) {
          if (*(int *)(puVar11 + 4) < iVar12) {
            puVar11 = (undefined8 *)*puVar11;
          }
          else {
            puVar6 = puVar11;
            puVar11 = (undefined8 *)puVar11[1];
          }
        }
        if ((puVar6 == puVar1) || (iVar12 < *(int *)(puVar6 + 4))) {
          puVar6 = (undefined8 *)FUN_18020d730(puVar1,auStack_78);
          puVar6 = (undefined8 *)*puVar6;
        }
        puVar11 = (undefined8 *)puVar6[6];
        if (puVar11 < (undefined8 *)puVar6[7]) {
          puVar6[6] = puVar11 + 1;
          *puVar11 = puVar5;
        }
        else {
          puVar9 = (undefined8 *)puVar6[5];
          lVar7 = (longlong)puVar11 - (longlong)puVar9 >> 3;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_18033615b:
            puVar8 = (undefined8 *)
                     FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(puVar6 + 8));
            puVar11 = (undefined8 *)puVar6[6];
            puVar9 = (undefined8 *)puVar6[5];
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_18033615b;
          }
          if (puVar9 != puVar11) {
                    // WARNING: Subroutine does not return
            memmove(puVar8,puVar9,(longlong)puVar11 - (longlong)puVar9);
          }
          *puVar8 = puVar5;
          if (puVar6[5] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar6[5] = puVar8;
          puVar6[6] = puVar8 + 1;
          puVar6[7] = puVar8 + lVar7;
        }
        uStackX_20 = uStackX_20 - 1;
      } while (uStackX_20 != 0);
      uStackX_20 = 0;
    }
    lVar10 = lVar10 + -1;
    lVar7 = lStack_70;
  } while( true );
}





/**
 * @brief 渲染系统资源数据扩展保存器
 * 
 * 该函数负责扩展保存渲染系统资源数据，包括高级数据序列化、
 * 内存管理、文件写入、资源清理和状态管理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件上下文指针
 * @param data_context 数据上下文指针
 * @param save_flag 保存标志
 * @return void
 */
void RenderingSystem_SaveResourceDataEx(longlong resource_context, longlong file_context, longlong data_context, undefined8 save_flag)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong lStack_70;
  uint *puStack_68;
  longlong lStack_60;
  undefined2 uStack_58;
  undefined1 uStack_56;
  
  lStack_70 = 0;
  puStack_68 = (uint *)0x0;
  lStack_60 = 0;
  uStack_58 = 0;
  uStack_56 = 3;
  uVar2 = *(undefined8 *)(resource_context + 0x8c8);
  lStackX_18 = param_3;
  FUN_180639bf0(&lStack_70,8,param_3,param_4,0xfffffffffffffffe);
  *(undefined8 *)puStack_68 = uVar2;
  puVar8 = (uint *)((longlong)puStack_68 + 8);
  lStackX_20 = resource_context + 0x8a8;
  lVar6 = *(longlong *)(resource_context + 0x8b0);
  lVar9 = lStack_70;
  puStack_68 = puVar8;
  if (lVar6 != lStackX_20) {
    do {
      iVar1 = *(int *)(lVar6 + 0x20);
      lVar3 = *(longlong *)(lVar6 + 0x30);
      lVar4 = *(longlong *)(lVar6 + 0x28);
      if ((ulonglong)((lStack_60 - (longlong)puVar8) + lVar9) < 9) {
        FUN_180639bf0(&lStack_70,(longlong)puVar8 + (8 - lVar9));
        puVar8 = puStack_68;
        lVar9 = lStack_70;
      }
      *(longlong *)puVar8 = (longlong)iVar1;
      puStack_68 = puVar8 + 2;
      if ((ulonglong)((lStack_60 - (longlong)puStack_68) + lVar9) < 5) {
        FUN_180639bf0(&lStack_70,(longlong)puStack_68 + (4 - lVar9));
        lVar9 = lStack_70;
      }
      uVar10 = (uint)(lVar3 - lVar4 >> 3);
      *puStack_68 = uVar10;
      puVar8 = puStack_68 + 1;
      puStack_68 = puVar8;
      if (0 < (int)uVar10) {
        lVar6 = **(longlong **)(lVar6 + 0x28);
        uVar10 = *(uint *)(lVar6 + 0x38);
        if ((ulonglong)((lStack_60 - (longlong)puVar8) + lVar9) <= (ulonglong)uVar10 + 4) {
          FUN_180639bf0(&lStack_70,(((ulonglong)uVar10 + 4) - lVar9) + (longlong)puVar8);
        }
        *puStack_68 = uVar10;
        puStack_68 = puStack_68 + 1;
        puVar5 = *(undefined **)(lVar6 + 0x30);
        puVar7 = &DAT_18098bc73;
        if (puVar5 != (undefined *)0x0) {
          puVar7 = puVar5;
        }
                    // WARNING: Subroutine does not return
        memcpy(puStack_68,puVar7,uVar10);
      }
      lVar6 = func_0x00018066bd70(lVar6);
    } while (lVar6 != lStackX_20);
  }
  lStackX_18 = lStack_60;
  fwrite(&lStackX_18,8,1,*(undefined8 *)(file_context + 8));
  fwrite(lVar9,lStackX_18,1,*(undefined8 *)(file_context + 8));
  if (((char)uStack_58 == '\0') && (lVar9 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源数据扩展加载器
 * 
 * 该函数负责扩展加载渲染系统资源数据，包括高级数据反序列化、
 * 内存分配、文件读取、资源重建和状态恢复等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param file_context 文件上下文指针
 * @param load_flag 加载标志
 * @return void
 */
void RenderingSystem_LoadResourceDataEx(longlong resource_context, longlong file_context, undefined8 load_flag)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  longlong lStackX_10;
  undefined8 uStackX_18;
  ulonglong uStackX_20;
  undefined1 auStack_70 [8];
  longlong lStack_68;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  
  lStackX_10 = 0;
  uStackX_18 = param_3;
  fread(&lStackX_10,8,1,*(undefined8 *)(file_context + 8));
  lStack_68 = 0;
  puStack_60 = (uint *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4e = 3;
  if (lStackX_10 != 0) {
    FUN_180639bf0(&lStack_68);
  }
  lVar8 = lStack_68;
  fread(lStack_68,lStackX_10,1,*(undefined8 *)(file_context + 8));
  lVar10 = *(longlong *)puStack_60;
  puVar12 = (uint *)((longlong)puStack_60 + 8);
  puStack_60 = puVar12;
  do {
    if (lVar10 == 0) {
      if (((char)uStack_50 == '\0') && (lVar8 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar8);
      }
      return;
    }
    uVar4 = *(undefined8 *)puVar12;
    puVar15 = puVar12 + 2;
    puVar12 = puVar12 + 3;
    puStack_60 = puVar12;
    if (0 < (int)*puVar15) {
      puVar2 = (undefined8 *)(resource_context + 0x8a8);
      iVar14 = (int)uVar4;
      uVar5 = (ulonglong)uStackX_18 >> 0x20;
      uStackX_18 = CONCAT44((int)uVar5,iVar14);
      uStackX_20 = (ulonglong)*puVar15;
      do {
        puVar6 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
        plVar1 = (longlong *)(puVar6 + 10);
        *plVar1 = (longlong)&UNK_18098bcb0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        puVar6[0xe] = 0;
        *plVar1 = (longlong)&UNK_180a3c3e0;
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(undefined8 *)(puVar6 + 0xc) = 0;
        puVar6[0xe] = 0;
        *puVar6 = 0xffffffff;
        (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
        uVar16 = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        uVar3 = *puVar12;
        puVar12 = puVar12 + 1;
        if (uVar3 != 0) {
          puStack_60 = puVar12;
          uVar16 = (**(code **)(*plVar1 + 0x18))(plVar1,puVar12,uVar3);
          puVar12 = (uint *)((longlong)puVar12 + (ulonglong)uVar3);
        }
        puVar6[1] = *puVar12;
        puVar6[2] = puVar12[1];
        puVar6[3] = puVar12[2];
        puVar6[4] = puVar12[3];
        puVar6[5] = puVar12[4];
        puVar6[6] = puVar12[5];
        puVar6[7] = puVar12[6];
        puVar6[8] = puVar12[7];
        puVar12 = puVar12 + 8;
        puStack_60 = puVar12;
        uVar16 = FUN_1800c17c0(uVar16,plVar1);
        *puVar6 = uVar16;
        puVar7 = puVar2;
        puVar13 = *(undefined8 **)(resource_context + 0x8b8);
        while (puVar13 != (undefined8 *)0x0) {
          if (*(int *)(puVar13 + 4) < iVar14) {
            puVar13 = (undefined8 *)*puVar13;
          }
          else {
            puVar7 = puVar13;
            puVar13 = (undefined8 *)puVar13[1];
          }
        }
        if ((puVar7 == puVar2) || (iVar14 < *(int *)(puVar7 + 4))) {
          puVar7 = (undefined8 *)FUN_18020d730(puVar2,auStack_70);
          puVar7 = (undefined8 *)*puVar7;
        }
        puVar13 = (undefined8 *)puVar7[6];
        if (puVar13 < (undefined8 *)puVar7[7]) {
          puVar7[6] = puVar13 + 1;
          *puVar13 = puVar6;
        }
        else {
          puVar11 = (undefined8 *)puVar7[5];
          lVar8 = (longlong)puVar13 - (longlong)puVar11 >> 3;
          if (lVar8 == 0) {
            lVar8 = 1;
LAB_1803367cd:
            puVar9 = (undefined8 *)
                     FUN_18062b420(_DAT_180c8ed18,lVar8 * 8,*(undefined1 *)(puVar7 + 8));
            puVar13 = (undefined8 *)puVar7[6];
            puVar11 = (undefined8 *)puVar7[5];
          }
          else {
            lVar8 = lVar8 * 2;
            if (lVar8 != 0) goto LAB_1803367cd;
            puVar9 = (undefined8 *)0x0;
          }
          if (puVar11 != puVar13) {
                    // WARNING: Subroutine does not return
            memmove(puVar9,puVar11,(longlong)puVar13 - (longlong)puVar11);
          }
          *puVar9 = puVar6;
          if (puVar7[5] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar7[5] = puVar9;
          puVar7[6] = puVar9 + 1;
          puVar7[7] = puVar9 + lVar8;
        }
        uStackX_20 = uStackX_20 - 1;
      } while (uStackX_20 != 0);
      uStackX_20 = 0;
    }
    lVar10 = lVar10 + -1;
    lVar8 = lStack_68;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统资源操作处理器
 * 
 * 该函数负责处理渲染系统资源操作，包括资源查找、数据更新、
 * 内存管理、文件操作、线程同步和状态管理等高级渲染功能。
 * 
 * @param resource_context 资源上下文指针
 * @param resource_id 资源ID
 * @return void
 */
void RenderingSystem_ProcessResourceOperation(longlong resource_context, uint resource_id)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 *puVar21;
  uint *puStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  uint *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0x1803368e3;
  uVar17 = _ftelli64(*(undefined8 *)(*(longlong *)(resource_context + 0x200) + 8));
  uStack_50 = 0x1803368f8;
  uVar17 = FUN_18032c9f0(resource_context,*(undefined8 *)(resource_context + 0x200),uVar17,resource_id);
  uStack_50 = 0x180336910;
  iVar5 = _Mtx_lock(resource_context + 0x280);
  if (iVar5 != 0) {
    uStack_50 = 0x18033691c;
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uStack_50 = 0x18033692f;
  FUN_180057340(resource_context + 0x260,(longlong)(int)(resource_id + 1));
  *(undefined8 *)(*(longlong *)(resource_context + 0x260) + (longlong)(int)resource_id * 8) = uVar17;
  *(int *)(resource_context + 0x228) = *(int)(resource_context + 0x228) + 1;
  uStack_50 = 0x180336949;
  iVar5 = _Mtx_unlock(resource_context + 0x280);
  if (iVar5 != 0) {
    uStack_50 = 0x180336955;
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar18 = (ulonglong)resource_id;
  uStack_68 = 0xfffffffffffffffe;
  plVar6 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xe0,8,3);
  FUN_180049830(plVar6);
  *plVar6 = (longlong)&UNK_180a1b248;
  puVar1 = (ulonglong *)(plVar6 + 0x18);
  *puVar1 = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  *(undefined4 *)(plVar6 + 0x1b) = 3;
  plStack_60 = plVar6;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  iVar5 = _Mtx_lock(resource_context + 0xa20);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puStack_88 = (uint *)0x0;
  puStack_80 = (uint *)0x0;
  uStack_78 = 0;
  uStack_70 = 3;
  FUN_18032b1c0(resource_context,&puStack_88,uVar18,1);
  if (puStack_88 != puStack_80) {
    puVar7 = puStack_88;
    do {
      uVar2 = *puVar7;
      uVar9 = (ulonglong)uVar2 % (ulonglong)*(uint *)(resource_context + 0xa00);
      for (puVar8 = *(uint **)(*(longlong *)(resource_context + 0x9f8) + uVar9 * 8); puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 4)) {
        if (uVar2 == *puVar8) {
          if (puVar8 != (uint *)0x0) goto LAB_180333bb3;
          break;
        }
      }
      FUN_18066c220(resource_context + 0xa10,&stack0x00000018,(ulonglong)*(uint *)(resource_context + 0xa00),
                    *(undefined4 *)(resource_context + 0xa08),1);
      puVar8 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(resource_context + 0xa1c));
      *puVar8 = uVar2;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      if ((char)puVar1 != '\0') {
        uVar9 = (ulonglong)uVar2 % ((ulonglong)puVar1 >> 0x20);
        FUN_18033bf30(resource_context + 0x9f0);
      }
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(*(longlong *)(resource_context + 0x9f8) + uVar9 * 8);
      *(uint **)(*(longlong *)(resource_context + 0x9f8) + uVar9 * 8) = puVar8;
      *(longlong *)(resource_context + 0xa08) = *(longlong *)(resource_context + 0xa08) + 1;
LAB_180333bb3:
      lVar10 = *(longlong *)(puVar8 + 2);
      uVar17 = 0;
      lVar14 = *(longlong *)(lVar10 + 8);
      for (puVar8 = *(uint **)(lVar14 + (uVar18 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (resource_id == *puVar8) {
          uVar9 = *(ulonglong *)(lVar10 + 0x10);
          goto LAB_180333bee;
        }
      }
      uVar9 = *(ulonglong *)(lVar10 + 0x10);
      puVar8 = *(uint **)(lVar14 + uVar9 * 8);
LAB_180333bee:
      if (puVar8 != *(uint **)(lVar14 + uVar9 * 8)) {
        uVar17 = *(undefined8 *)(puVar8 + 2);
        puVar8 = (uint *)(lVar14 + (uVar18 % (uVar9 & 0xffffffff)) * 8);
        puVar20 = *(uint **)puVar8;
        while ((puVar20 != (uint *)0x0 && (resource_id != *puVar20))) {
          puVar8 = puVar20 + 4;
          puVar20 = *(uint **)puVar8;
        }
        puVar19 = (uint *)0x0;
        if (puVar20 != (uint *)0x0) {
          do {
            puVar13 = puVar20;
            if (resource_id != *puVar13) break;
            *(undefined8 *)puVar8 = *(undefined8 *)(puVar13 + 4);
            *(uint **)(puVar13 + 4) = puVar19;
            *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + -1;
            puVar20 = *(uint **)puVar8;
            puVar19 = puVar13;
          } while (*(uint **)puVar8 != (uint *)0x0);
          if (puVar19 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar19);
          }
        }
      }
      puVar21 = (undefined8 *)plVar6[0x19];
      if (puVar21 < (undefined8 *)plVar6[0x1a]) {
        plVar6[0x19] = (longlong)(puVar21 + 1);
        *puVar21 = uVar17;
      }
      else {
        puVar16 = (undefined8 *)*puVar1;
        lVar10 = (longlong)puVar21 - (longlong)puVar16 >> 3;
        if (lVar10 == 0) {
          lVar10 = 1;
LAB_180333cae:
          puVar11 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 8,(char)plVar6[0x1b]);
          puVar21 = (undefined8 *)plVar6[0x19];
          puVar16 = (undefined8 *)*puVar1;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_180333cae;
          puVar11 = (undefined8 *)0x0;
        }
        if (puVar16 != puVar21) {
                    // WARNING: Subroutine does not return
          memmove(puVar11,puVar16,(longlong)puVar21 - (longlong)puVar16);
        }
        *puVar11 = uVar17;
        if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *puVar1 = (ulonglong)puVar11;
        plVar6[0x19] = (longlong)(puVar11 + 1);
        plVar6[0x1a] = (longlong)(puVar11 + lVar10);
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puStack_80);
  }
  if (puStack_88 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iVar5 = _Mtx_unlock(resource_context + 0xa20);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar17 = _DAT_180c82868;
  (**(code **)(*plVar6 + 0x28))(plVar6);
  FUN_18005e110(uVar17,&stack0x00000018);
  puStack_a8 = (uint *)0x0;
  puStack_a0 = (uint *)0x0;
  uStack_98 = 0;
  uStack_90 = 3;
  FUN_18032afa0(resource_context,&puStack_a8,uVar18);
  if (puStack_a8 != puStack_a0) {
    puVar7 = puStack_a8;
    do {
      uVar2 = *puVar7;
      uVar9 = (ulonglong)uVar2 % (ulonglong)*(uint *)(resource_context + 0x6c8);
      for (puVar8 = *(uint **)(*(longlong *)(resource_context + 0x6c0) + uVar9 * 8); puVar8 != (uint *)0x0;
          puVar8 = *(uint **)(puVar8 + 4)) {
        if (uVar2 == *puVar8) {
          if (puVar8 != (uint *)0x0) goto LAB_180333e7e;
          break;
        }
      }
      FUN_18066c220(resource_context + 0x6d8,&stack0x00000018,(ulonglong)*(uint *)(resource_context + 0x6c8),
                    *(undefined4 *)(resource_context + 0x6d0),1);
      puVar8 = (uint *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(resource_context + 0x6e4));
      *puVar8 = uVar2;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      if ((char)plVar6 != '\0') {
        uVar9 = (ulonglong)uVar2 % ((ulonglong)plVar6 >> 0x20);
        FUN_18033bf30(resource_context + 0x6b8);
      }
      *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(*(longlong *)(resource_context + 0x6c0) + uVar9 * 8);
      *(uint **)(*(longlong *)(resource_context + 0x6c0) + uVar9 * 8) = puVar8;
      *(longlong *)(resource_context + 0x6d0) = *(longlong *)(resource_context + 0x6d0) + 1;
LAB_180333e7e:
      lVar10 = *(longlong *)(puVar8 + 2);
      lVar14 = *(longlong *)(lVar10 + 8);
      for (puVar8 = *(uint **)(lVar14 + (uVar18 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 4)) {
        if (resource_id == *puVar8) {
          lVar12 = *(longlong *)(lVar10 + 0x10);
          goto LAB_180333eb9;
        }
      }
      lVar12 = *(longlong *)(lVar10 + 0x10);
      puVar8 = *(uint **)(lVar14 + lVar12 * 8);
LAB_180333eb9:
      if (puVar8 != *(uint **)(lVar14 + lVar12 * 8)) {
        if (*(longlong *)(puVar8 + 2) != 0) {
          *(undefined **)(*(longlong *)(puVar8 + 2) + 0x50) = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8 = (uint *)(*(longlong *)(lVar10 + 8) +
                         (uVar18 % (ulonglong)*(uint *)(lVar10 + 0x10)) * 8);
        puVar20 = *(uint **)puVar8;
        while ((puVar20 != (uint *)0x0 && (resource_id != *puVar20))) {
          puVar8 = puVar20 + 4;
          puVar20 = *(uint **)puVar8;
        }
        puVar19 = (uint *)0x0;
        if (puVar20 != (uint *)0x0) {
          do {
            puVar13 = puVar20;
            if (resource_id != *puVar13) break;
            *(undefined8 *)puVar8 = *(undefined8 *)(puVar13 + 4);
            *(uint **)(puVar13 + 4) = puVar19;
            *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + -1;
            puVar20 = *(uint **)puVar8;
            puVar19 = puVar13;
          } while (*(uint **)puVar8 != (uint *)0x0);
          if (puVar19 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar19);
          }
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puStack_a0);
  }
  lVar10 = *(longlong *)(resource_context + 0x570);
  for (puVar7 = *(uint **)(lVar10 + (uVar18 % (ulonglong)*(uint *)(resource_context + 0x578)) * 8);
      puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
    if (resource_id == *puVar7) {
      lVar14 = *(longlong *)(resource_context + 0x578);
      goto LAB_180333fbc;
    }
  }
  lVar14 = *(longlong *)(resource_context + 0x578);
  puVar7 = *(uint **)(lVar10 + lVar14 * 8);
LAB_180333fbc:
  if (puVar7 != *(uint **)(lVar10 + lVar14 * 8)) {
    plVar3 = *(longlong **)(puVar7 + 2);
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 == 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar3);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7 = (uint *)(*(longlong *)(resource_context + 0x570) +
                     (uVar18 % (ulonglong)*(uint *)(resource_context + 0x578)) * 8);
    puVar8 = *(uint **)puVar7;
    while ((puVar8 != (uint *)0x0 && (resource_id != *puVar8))) {
      puVar7 = puVar8 + 4;
      puVar8 = *(uint **)puVar7;
    }
    puVar20 = (uint *)0x0;
    if (puVar8 != (uint *)0x0) {
      do {
        puVar19 = puVar8;
        if (resource_id != *puVar19) break;
        *(undefined8 *)puVar7 = *(undefined8 *)(puVar19 + 4);
        *(uint **)(puVar19 + 4) = puVar20;
        *(longlong *)(resource_context + 0x580) = *(longlong *)(resource_context + 0x580) + -1;
        puVar8 = *(uint **)puVar7;
        puVar20 = puVar19;
      } while (*(uint **)puVar7 != (uint *)0x0);
      if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar20);
      }
    }
  }
  puVar21 = (undefined8 *)(resource_context + 0x818);
  puVar11 = puVar21;
  puVar16 = *(undefined8 **)(resource_context + 0x828);
  while (puVar15 = puVar21, puVar4 = *(undefined8 **)(resource_context + 0x828), puVar16 != (undefined8 *)0x0
        ) {
    if (resource_id < *(uint *)(puVar16 + 4)) {
      puVar11 = puVar16;
      puVar16 = (undefined8 *)puVar16[1];
    }
    else {
      puVar16 = (undefined8 *)*puVar16;
    }
  }
  while (puVar7 = puStack_a8, puVar4 != (undefined8 *)0x0) {
    if (*(uint *)(puVar4 + 4) < resource_id) {
      puVar4 = (undefined8 *)*puVar4;
    }
    else {
      puVar15 = puVar4;
      puVar4 = (undefined8 *)puVar4[1];
    }
  }
  while (puStack_a8 = puVar7, puVar15 != puVar11) {
    lVar10 = puVar15[5];
    if (lVar10 != 0) {
      FUN_1808fc8a8(lVar10 + 0x38,0x30,4,FUN_18004a130);
      puStack_58 = (undefined8 *)(lVar10 + 0x18);
      *puStack_58 = &UNK_180a3c3e0;
      if (*(longlong *)(lVar10 + 0x20) == 0) {
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined4 *)(lVar10 + 0x30) = 0;
        *puStack_58 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar10);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar15 = (undefined8 *)func_0x00018066bd70(puVar15);
    puVar7 = puStack_a8;
  }
  FUN_18033ad80(resource_context + 0x4a8,&stack0x00000010);
  FUN_18033ad80(resource_context + 0x638,&stack0x00000010);
  puVar11 = puVar21;
  puVar16 = *(undefined8 **)(resource_context + 0x828);
  while (puVar15 = puVar21, puVar4 = *(undefined8 **)(resource_context + 0x828), puVar16 != (undefined8 *)0x0
        ) {
    if (resource_id < *(uint *)(puVar16 + 4)) {
      puVar11 = puVar16;
      puVar16 = (undefined8 *)puVar16[1];
    }
    else {
      puVar16 = (undefined8 *)*puVar16;
    }
  }
  while (puVar16 = puVar15, puVar4 != (undefined8 *)0x0) {
    if (*(uint *)(puVar4 + 4) < resource_id) {
      puVar4 = (undefined8 *)*puVar4;
    }
    else {
      puVar15 = puVar4;
      puVar4 = (undefined8 *)puVar4[1];
    }
  }
  for (; puVar16 != puVar11; puVar16 = (undefined8 *)func_0x00018066bd70(puVar16)) {
  }
  if ((puVar15 == *(undefined8 **)(resource_context + 0x820)) && (puVar11 == puVar21)) {
    puVar16 = *(undefined8 **)(resource_context + 0x828);
    if (puVar16 != (undefined8 *)0x0) {
      FUN_18004b790(puVar21,*puVar16);
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar16);
    }
    *puVar21 = puVar21;
    *(undefined8 **)(resource_context + 0x820) = puVar21;
    *(undefined8 *)(resource_context + 0x828) = 0;
    *(undefined1 *)(resource_context + 0x830) = 0;
    *(undefined8 *)(resource_context + 0x838) = 0;
  }
  else {
    while (puVar16 = puVar15, puVar16 != puVar11) {
      *(longlong *)(resource_context + 0x838) = *(longlong *)(resource_context + 0x838) + -1;
      puVar15 = (undefined8 *)func_0x00018066bd70(puVar16);
      FUN_18066ba00(puVar16,puVar21);
      if (puVar16 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar16);
      }
    }
  }
  if (puVar7 == (uint *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001803342c7. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar6 + 0x38))();
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}





