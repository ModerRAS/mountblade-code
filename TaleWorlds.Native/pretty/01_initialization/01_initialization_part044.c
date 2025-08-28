#include "TaleWorlds.Native.Split.h"

// 01_initialization_part044.c - 初始化和序列化模块
// 
// 本模块包含11个函数，主要负责：
// 1. 初始化各种数据结构和参数
// 2. 处理网格数据的序列化和缓冲区管理
// 3. 结构体的清理和重置操作
// 4. 批量处理网格数据
//
// 这些函数是游戏引擎初始化流程的重要组成部分，特别是对于3D模型的
// 数据处理和缓冲区管理具有关键作用。
//
// 主要功能分类：
// - 初始化函数：initialize_with_default_params, initialize_with_custom_params, initialize_complex_structure
// - 结构体管理：reset_structure_pointers, cleanup_linked_structure
// - 数据序列化：serialize_mesh_data, serialize_mesh_data_buffer
// - 缓冲区操作：write_buffer_header, initialize_buffer_writer, finalize_buffer_writer
// - 批量处理：process_mesh_batch

/**
 * 使用默认参数初始化系统
 * 主要功能：使用默认参数集初始化游戏引擎的某个子系统，设置基本的内存布局和初始化状态
 * 
 * 原始实现：FUN_180073730
 * 简化实现：系统默认参数初始化函数
 * 
 * @param system_handle 系统句柄或上下文
 * @param config_param 配置参数
 */
void initialize_with_default_params(undefined8 system_handle, undefined8 config_param)
{
  undefined *system_ptr;           // 系统指针
  char initialization_flag;        // 初始化标志
  undefined4 default_params[4];    // 默认参数数组
  undefined *stack_buffer;         // 栈缓冲区
  longlong stack_check;            // 栈检查值
  
  // 调用系统初始化函数
  FUN_1800623b0(_DAT_180c86928, 0, 0x100000000, 1, &UNK_1809ff938, config_param, 0xfffffffffffffffe);
  
  // 检查系统状态
  if (DAT_180c82860 == '\0') {
    // 设置默认参数
    default_params[0] = 0xff00ff00;
    
    // 初始化栈缓冲区
    FUN_180627910(&stack_buffer, config_param);
    
    // 获取系统指针
    system_ptr = *(undefined **)*_DAT_180c8ed08;
    
    // 检查系统指针状态
    if (system_ptr == &UNK_18098bb88) {
      // 使用系统配置检查初始化状态
      initialization_flag = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      // 使用自定义函数检查初始化状态
      initialization_flag = (**(code **)(system_ptr + 0x50))((undefined8 *)*_DAT_180c8ed08);
    }
    
    // 如果未初始化，则进行初始化
    if (initialization_flag == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1], &stack_buffer, default_params);
    }
    
    // 设置缓冲区指针
    stack_buffer = &UNK_180a3c3e0;
    
    // 检查栈状态
    if (stack_check != 0) {
      // 栈错误处理
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_with_custom_params(undefined8 param_1,undefined4 param_2,undefined8 param_3)
// 功能: 使用自定义参数初始化系统
// 参数: param_1 - 系统句柄或上下文
//       param_2 - 自定义配置参数
//       param_3 - 附加配置数据
// 返回: 无
// 说明: 此函数允许使用自定义参数集初始化系统，提供了比默认初始化
//       更灵活的配置选项，适用于需要特殊配置的场景。
void initialize_with_custom_params(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined4 auStackX_20 [2];
  undefined *puStack_30;
  longlong lStack_28;
  
  FUN_1800623b0(_DAT_180c86928,0,0x100000000,0xc,&UNK_1809ff958,param_3,0xfffffffffffffffe);
  if (DAT_180c82860 == '\0') {
    auStackX_20[0] = param_2;
    FUN_180627910(&puStack_30,param_3);
    puVar1 = *(undefined **)*_DAT_180c8ed08;
    if (puVar1 == &UNK_18098bb88) {
      cVar2 = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      cVar2 = (**(code **)(puVar1 + 0x50))((undefined8 *)*_DAT_180c8ed08);
    }
    if (cVar2 == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1],&puStack_30,auStackX_20);
    }
    puStack_30 = &UNK_180a3c3e0;
    if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





// 函数: void initialize_complex_structure(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// 功能: 初始化复杂的数据结构
// 参数: param_1 - 主系统句柄
//       param_2 - 基础配置参数
//       param_3 - 网格数据句柄
//       param_4 - 附加配置选项
// 返回: 无
// 说明: 此函数负责初始化一个复杂的多层次数据结构，包括内存分配、
//       指针设置、子系统的初始化等。这是高级初始化流程的核心部分。
void initialize_complex_structure(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined8 uStack_36;
  undefined8 uStack_2e;
  undefined2 uStack_26;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  puStack_88 = &UNK_180a3c3e0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 3;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_26 = 0;
  uStack_36 = 0;
  uStack_2e = 0;
  FUN_180074090(&puStack_88,param_1,param_3,param_4,&uStack_68);
  serialize_mesh_data(&puStack_88,param_3);
  reset_structure_pointers(&puStack_88);
  return;
}





// 函数: void reset_structure_pointers(undefined8 *param_1)
// 功能: 重置结构体指针和状态
// 参数: param_1 - 指向需要重置的结构体的指针
// 返回: 无
// 说明: 此函数负责将结构体的各个指针字段重置为安全状态，
//       清理可能存在的内存引用，防止内存泄漏和野指针问题。
//       在结构体重新初始化或销毁前调用。
void reset_structure_pointers(undefined8 *param_1)

{
  if (*(longlong *)((longlong)param_1 + 0x52) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)((longlong)param_1 + 0x52) = 0;
  if (*(longlong *)((longlong)param_1 + 0x5a) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)((longlong)param_1 + 0x5a) = 0;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  FUN_180074a80();
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void cleanup_linked_structure(longlong *param_1)
// 功能: 清理链接的结构体链
// 参数: param_1 - 指向链表头部的指针
// 返回: 无
// 说明: 此函数遍历一个链接的结构体链，逐个清理每个节点的
//       内存和指针，确保整个链表被安全地释放。这是内存管理
//       的重要组成部分。
void cleanup_linked_structure(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  while( true ) {
    if (plVar2 == plVar1) {
      if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return;
    }
    if (*(longlong *)((longlong)plVar2 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)((longlong)plVar2 + 0x12) = 0;
    if (*(longlong *)((longlong)plVar2 + 0x1a) != 0) break;
    *(undefined8 *)((longlong)plVar2 + 0x1a) = 0;
    if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar2 = 0;
    if (plVar2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plVar2[1] = 0;
    plVar2 = (longlong *)((longlong)plVar2 + 0x24);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void serialize_mesh_data(longlong param_1,longlong *param_2)
// 功能: 序列化网格数据到缓冲区
// 参数: param_1 - 网格数据源句柄
//       param_2 - 目标缓冲区指针
// 返回: 无
// 说明: 此函数将复杂的网格数据结构序列化为连续的字节流，
//       便于存储或网络传输。处理顶点数据、索引数据、材质信息等。
//       是3D模型数据处理的核心函数。
void serialize_mesh_data(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  FUN_180639ec0(param_2,param_1);
  lVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  piVar3 = (int *)param_2[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*param_2 - (longlong)piVar3) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar3 + (4 - *param_2));
    piVar3 = (int *)param_2[1];
  }
  *piVar3 = iVar8;
  puVar4 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (undefined4 *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (undefined4 *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (undefined4 *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(undefined8 *)(lVar7 + 8);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x10) * 4;
        if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
          FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
          puVar4 = (undefined4 *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (undefined4 *)param_2[1];
      }
      *puVar4 = 0;
      param_2[1] = param_2[1] + 4;
      puVar4 = (undefined4 *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
        puVar4 = (undefined4 *)param_2[1];
      }
      *puVar4 = 0x10;
      param_2[1] = param_2[1] + 4;
      puVar5 = (uint *)param_2[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
        puVar5 = (uint *)param_2[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (undefined4 *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(undefined8 *)(lVar7 + 0x1a);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x22) * 4;
        if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
          FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
          puVar4 = (undefined4 *)param_2[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x50) * 4;
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) <= uVar9) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (uVar9 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = 0x10;
  param_2[1] = param_2[1] + 4;
  puVar5 = (uint *)param_2[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (uint *)param_2[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = param_2[1] + 4;
  param_2[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x5a);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x62) * 4;
  if ((ulonglong)((*param_2 - lVar6) + param_2[2]) <= uVar9) {
    FUN_180639bf0(param_2,uVar9 + (lVar6 - *param_2));
    lVar6 = param_2[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





// 函数: void serialize_mesh_data_buffer(longlong param_1)
// 功能: 序列化网格数据到预分配缓冲区
// 参数: param_1 - 网格数据源句柄
// 返回: 无
// 说明: 此函数与serialize_mesh_data类似，但使用预分配的缓冲区，
//       适用于性能敏感的场景。减少了动态内存分配的开销。
void serialize_mesh_data_buffer(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *unaff_RBX;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  FUN_180639ec0();
  lVar6 = *(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20);
  piVar3 = (int *)unaff_RBX[1];
  lVar6 = lVar6 / 0x12 + (lVar6 >> 0x3f);
  iVar8 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if ((ulonglong)((*unaff_RBX - (longlong)piVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    piVar3 = (int *)unaff_RBX[1];
  }
  *piVar3 = iVar8;
  puVar4 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  lVar6 = (longlong)iVar8;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x10);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (undefined4 *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x10) != 0) {
        uVar2 = *(undefined8 *)(lVar7 + 8);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x10) * 4;
        if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
          FUN_180639bf0();
          puVar4 = (undefined4 *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar7 = *(longlong *)(param_1 + 0x20) + lVar10;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = 0;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar4 = (undefined4 *)unaff_RBX[1];
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar4 = (undefined4 *)unaff_RBX[1];
      }
      *puVar4 = 0x10;
      unaff_RBX[1] = unaff_RBX[1] + 4;
      puVar5 = (uint *)unaff_RBX[1];
      uVar1 = *(ushort *)(lVar7 + 0x22);
      if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
        FUN_180639bf0();
        puVar5 = (uint *)unaff_RBX[1];
      }
      *puVar5 = (uint)uVar1;
      puVar4 = (undefined4 *)(unaff_RBX[1] + 4);
      unaff_RBX[1] = (longlong)puVar4;
      if (*(ushort *)(lVar7 + 0x22) != 0) {
        uVar2 = *(undefined8 *)(lVar7 + 0x1a);
        uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x22) * 4;
        if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
          FUN_180639bf0();
          puVar4 = (undefined4 *)unaff_RBX[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar4,uVar2,uVar9);
      }
      lVar10 = lVar10 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  puVar4 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  if (*(ushort *)(param_1 + 0x50) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar9 = (ulonglong)*(ushort *)(param_1 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar9) {
      FUN_180639bf0();
      puVar4 = (undefined4 *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar9);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (undefined4 *)unaff_RBX[1];
  }
  *puVar4 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar5 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(param_1 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar5) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar5 = (uint *)unaff_RBX[1];
  }
  *puVar5 = (uint)uVar1;
  lVar6 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar6;
  if (*(ushort *)(param_1 + 0x62) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x5a);
  uVar9 = (ulonglong)*(ushort *)(param_1 + 0x62) * 4;
  if ((ulonglong)((*unaff_RBX - lVar6) + unaff_RBX[2]) <= uVar9) {
    FUN_180639bf0();
    lVar6 = unaff_RBX[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(lVar6,uVar2,uVar9);
}





// 函数: void process_mesh_batch(uint *param_1)
// 功能: 批量处理网格数据
// 参数: param_1 - 批处理参数和目标缓冲区
// 返回: 无
// 说明: 此函数优化了多个网格数据的处理流程，通过批处理
//       提高了性能。适用于需要同时处理多个3D模型的场景。
void process_mesh_batch(uint *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  longlong *unaff_RBX;
  longlong lVar5;
  ulonglong uVar6;
  longlong unaff_R12;
  uint unaff_R13D;
  longlong unaff_R15;
  
  uVar6 = (ulonglong)unaff_R13D;
  do {
    lVar5 = *(longlong *)(unaff_R15 + 0x20) + uVar6;
    if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      param_1 = (uint *)unaff_RBX[1];
    }
    *param_1 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (undefined4 *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar3 = (undefined4 *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x10);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    puVar4 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)puVar4;
    if (*(ushort *)(lVar5 + 0x10) != 0) {
      uVar2 = *(undefined8 *)(lVar5 + 8);
      uVar6 = (ulonglong)*(ushort *)(lVar5 + 0x10) * 4;
      if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar6) {
        FUN_180639bf0();
        puVar4 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar4,uVar2,uVar6);
    }
    lVar5 = *(longlong *)(unaff_R15 + 0x20) + uVar6;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = unaff_R13D;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar3 = (undefined4 *)unaff_RBX[1];
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar3 = (undefined4 *)unaff_RBX[1];
    }
    *puVar3 = 0x10;
    unaff_RBX[1] = unaff_RBX[1] + 4;
    puVar4 = (uint *)unaff_RBX[1];
    uVar1 = *(ushort *)(lVar5 + 0x22);
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
    *puVar4 = (uint)uVar1;
    param_1 = (uint *)(unaff_RBX[1] + 4);
    unaff_RBX[1] = (longlong)param_1;
    if (*(ushort *)(lVar5 + 0x22) != 0) {
      uVar2 = *(undefined8 *)(lVar5 + 0x1a);
      uVar6 = (ulonglong)*(ushort *)(lVar5 + 0x22) * 4;
      if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) <= uVar6) {
        FUN_180639bf0();
        param_1 = (uint *)unaff_RBX[1];
      }
                    // WARNING: Subroutine does not return
      memcpy(param_1,uVar2,uVar6);
    }
    uVar6 = uVar6 + 0x24;
    unaff_R12 = unaff_R12 + -1;
  } while (unaff_R12 != 0);
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (uint *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar4 = (uint *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar4;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar4 = (uint *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar4,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void write_buffer_header(undefined4 *param_1)
// 功能: 写入缓冲区头部信息
// 参数: param_1 - 目标缓冲区指针
// 返回: 无
// 说明: 此函数在缓冲区开始位置写入标准的头部信息，
//       包括版本号、数据类型、大小等元数据，便于后续解析。
void write_buffer_header(undefined4 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  undefined4 unaff_R13D;
  longlong unaff_R15;
  
  if ((ulonglong)((*unaff_RBX - (longlong)param_1) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (undefined4 *)unaff_RBX[1];
  }
  *param_1 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar3 = (undefined4 *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void initialize_buffer_writer(void)
// 功能: 初始化缓冲区写入器
// 参数: 无
// 返回: 无
// 说明: 此函数初始化用于高效写入数据的缓冲区管理器，
//       设置内部状态和缓冲区，为后续的数据写入做准备。
void initialize_buffer_writer(void)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  ulonglong uVar6;
  undefined4 unaff_R13D;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x50);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  puVar3 = (undefined4 *)(unaff_RBX[1] + 4);
  unaff_RBX[1] = (longlong)puVar3;
  if (*(ushort *)(unaff_R15 + 0x50) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x48);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x50) * 4;
    if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      puVar3 = (undefined4 *)unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar3,uVar2,uVar6);
  }
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = unaff_R13D;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (undefined4 *)unaff_RBX[1];
  }
  *puVar3 = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar4 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar4) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar4 = (uint *)unaff_RBX[1];
  }
  *puVar4 = (uint)uVar1;
  lVar5 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar5;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x5a);
    uVar6 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar5) + unaff_RBX[2]) <= uVar6) {
      FUN_180639bf0();
      lVar5 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar5,uVar2,uVar6);
  }
  return;
}





// 函数: void finalize_buffer_writer(void)
// 功能: 完成缓冲区写入操作
// 参数: 无
// 返回: 无
// 说明: 此函数完成缓冲区的写入操作，处理最后的清理工作，
//       确保所有数据都被正确写入，并重置写入器状态。
void finalize_buffer_writer(void)

{
  ushort uVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *unaff_RBX;
  ulonglong uVar5;
  longlong unaff_R15;
  
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = 0x10;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar3 = (uint *)unaff_RBX[1];
  uVar1 = *(ushort *)(unaff_R15 + 0x62);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar3) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar3 = (uint *)unaff_RBX[1];
  }
  *puVar3 = (uint)uVar1;
  lVar4 = unaff_RBX[1] + 4;
  unaff_RBX[1] = lVar4;
  if (*(ushort *)(unaff_R15 + 0x62) != 0) {
    uVar2 = *(undefined8 *)(unaff_R15 + 0x5a);
    uVar5 = (ulonglong)*(ushort *)(unaff_R15 + 0x62) * 4;
    if ((ulonglong)((*unaff_RBX - lVar4) + unaff_RBX[2]) <= uVar5) {
      FUN_180639bf0();
      lVar4 = unaff_RBX[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar4,uVar2,uVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



