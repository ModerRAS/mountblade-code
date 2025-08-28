#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part204.c - 17 个函数

// 函数: 释放资源管理器中的链表节点
// 功能: 清理并释放资源管理器中的链表节点资源，包括遍历链表并释放每个节点
void ResourceManager_ClearLinkedList(longlong *resource_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong *node_ptr;
  longlong current_node;
  longlong *next_node;
  longlong start_node;
  longlong *temp_node;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  node_ptr = (longlong *)(resource_manager + 0x28);
  current_node = *node_ptr;
  start_node = current_node;
  temp_node = *(longlong **)(current_node + 8);
  if (*(char *)((longlong)*(longlong **)(current_node + 8) + 0x19) == '\0') {
    do {
      FUN_1801885a0(node_ptr, temp_node[2], param_3, param_4, cleanup_flag);
      next_node = (longlong *)*temp_node;
      free(temp_node, 0x28);
      temp_node = next_node;
    } while (*(char *)((longlong)next_node + 0x19) == '\0');
    start_node = *node_ptr;
  }
  *(longlong *)(start_node + 8) = current_node;
  *(longlong *)*node_ptr = current_node;
  *(longlong *)(*node_ptr + 0x10) = current_node;
  *(undefined8 *)(resource_manager + 0x30) = 0;
  free(*node_ptr, 0x28);
  FUN_180067070(resource_manager + 8);
  return;
}





// 函数: 释放缓冲区内存
// 功能: 释放缓冲区指针指向的内存，并进行安全检查和清理
void Buffer_FreeMemory(longlong *buffer_ptr, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong buffer_start;
  longlong memory_base;
  ulonglong buffer_size;
  
  buffer_start = *buffer_ptr;
  if (buffer_start != 0) {
    buffer_size = buffer_ptr[2] - buffer_start & 0xfffffffffffffffc;
    memory_base = buffer_start;
    if (0xfff < buffer_size) {
      memory_base = *(longlong *)(buffer_start + -8);
      if (0x1f < (buffer_start - memory_base) - 8U) {
        // 内存边界检查失败，触发无效参数错误
        _invalid_parameter_noinfo_noreturn
                  (buffer_start - memory_base, buffer_size + 0x27, memory_base, param_4, 0xfffffffffffffffe);
      }
    }
    free(memory_base);
    *buffer_ptr = 0;
    buffer_ptr[1] = 0;
    buffer_ptr[2] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 处理字符串资源初始化
// 功能: 初始化字符串资源，包括分配内存、设置默认值和清理临时数据
void StringResource_Initialize(undefined8 param_1, undefined8 *string_resource)
{
  longlong *global_ptr;
  longlong global_data;
  undefined8 result;
  undefined *string_data;
  ulonglong temp_size;
  longlong str_length1;
  longlong str_length2;
  undefined1 stack_buffer1 [32];
  longlong **temp_ptr1;
  undefined8 cleanup_flag;
  undefined8 *resource_ptr;
  undefined1 stack_buffer2 [16];
  undefined8 temp_var1;
  undefined8 temp_var2;
  longlong *temp_ptr2;
  undefined8 temp_var3;
  undefined *temp_ptr3;
  longlong temp_var4;
  undefined8 temp_var5;
  ulonglong buffer_size;
  undefined **temp_ptr4;
  ulonglong security_cookie;
  
  global_data = GLOBAL_ENGINE_CONTEXT;
  cleanup_flag = 0xfffffffffffffffe;
  security_cookie = SECURITY_COOKIE ^ (ulonglong)stack_buffer1;
  resource_ptr = string_resource;
  if (*(longlong *)(GLOBAL_ENGINE_CONTEXT + 8) == 0) {
    *string_resource = &EMPTY_STRING_CONST;
    if (string_resource[1] != 0) {
      // 字符串资源错误处理
      FUN_18064e900();
    }
    string_resource[1] = 0;
    *(undefined4 *)(string_resource + 3) = 0;
  }
  else {
    temp_var1 = 0;
    temp_var2 = 0xf;
    stack_buffer2[0] = 0;
    temp_ptr1 = &temp_ptr2;
    temp_ptr2 = (longlong *)0x0;
    temp_var3 = 0;
    temp_ptr2 = (longlong *)FUN_180188490();
    string_data = &DEFAULT_STRING_DATA;
    if ((undefined *)string_resource[1] != (undefined *)0x0) {
      string_data = (undefined *)string_resource[1];
    }
    str_length1 = -1;
    str_length2 = -1;
    do {
      str_length2 = str_length2 + 1;
    } while (string_data[str_length2] != '\0');
    FUN_1800671b0(stack_buffer2);
    string_data = &DEFAULT_STRING_DATA;
    if ((undefined *)string_resource[1] != (undefined *)0x0) {
      string_data = (undefined *)string_resource[1];
    }
    temp_var5 = 0;
    buffer_size = 0xf;
    temp_ptr3 = (undefined *)((ulonglong)temp_ptr3 & 0xffffffffffffff00);
    FUN_1800671b0(&temp_ptr3, &STRING_FORMAT_CONST, 5);
    result = FUN_180187f00(&temp_ptr2, &temp_ptr3);
    do {
      str_length1 = str_length1 + 1;
    } while (string_data[str_length1] != '\0');
    FUN_1800671b0(result, string_data, str_length1);
    if (0xf < buffer_size) {
      temp_size = buffer_size + 1;
      string_data = temp_ptr3;
      if (0xfff < temp_size) {
        temp_size = buffer_size + 0x28;
        string_data = *(undefined **)(temp_ptr3 + -8);
        if ((undefined *)0x1f < temp_ptr3 + (-8 - (longlong)string_data)) {
          // 内存边界检查失败
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(string_data, temp_size);
    }
    temp_var5 = 0;
    buffer_size = 0xf;
    global_ptr = *(longlong **)(global_data + 8);
    temp_ptr1 = (longlong **)&temp_ptr3;
    temp_ptr3 = &STRING_HANDLER_CONST;
    temp_var4 = global_data;
    temp_ptr4 = &temp_ptr3;
    (**(code **)(*global_ptr + 0x18))(global_ptr, stack_buffer2, &temp_ptr3, 0);
    global_ptr = temp_ptr2;
    temp_ptr1 = &temp_ptr2;
    FUN_1801884d0(&temp_ptr2, temp_ptr2[1]);
    temp_ptr2[1] = (longlong)global_ptr;
    *temp_ptr2 = (longlong)global_ptr;
    temp_ptr2[2] = (longlong)global_ptr;
    temp_var3 = 0;
    free(temp_ptr2, 0x60);
    FUN_180067070(stack_buffer2);
    *string_resource = &EMPTY_STRING_CONST;
    if (string_resource[1] != 0) {
      // 字符串资源错误处理
      FUN_18064e900();
    }
    string_resource[1] = 0;
    *(undefined4 *)(string_resource + 3) = 0;
  }
  *string_resource = &STRING_END_CONST;
  // 安全检查结束
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer1);
}





// 函数: 释放资源管理器
// 功能: 释放资源管理器中的内存资源，重置指针并清理相关数据
void ResourceManager_Free(longlong resource_manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  longlong *resource_ptr;
  longlong resource_data;
  
  resource_ptr = (longlong *)(resource_manager + 0x20);
  resource_data = *resource_ptr;
  FUN_1801884d0(resource_ptr, *(undefined8 *)(resource_data + 8), param_3, param_4, 0xfffffffffffffffe);
  *(longlong *)(*resource_ptr + 8) = resource_data;
  *(longlong *)*resource_ptr = resource_data;
  *(longlong *)(*resource_ptr + 0x10) = resource_data;
  *(undefined8 *)(resource_manager + 0x28) = 0;
  free(*resource_ptr, 0x60);
  FUN_180067070(resource_manager);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186880(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)
void FUN_180186880(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  longlong lStack_a0;
  undefined **ppuStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_c8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  puStack_c0 = param_2;
  puStack_b8 = param_3;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 3) = 0;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0xf;
    auStack_68[0] = 0;
    uStack_38 = 0;
    uStack_30 = 0xf;
    auStack_48[0] = 0;
    puVar3 = &DAT_18098bc73;
    if ((undefined *)param_3[1] != (undefined *)0x0) {
      puVar3 = (undefined *)param_3[1];
    }
    lVar4 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar3[lVar5] != '\0');
    FUN_1800671b0(auStack_68);
    puVar3 = &DAT_18098bc73;
    if ((undefined *)param_2[1] != (undefined *)0x0) {
      puVar3 = (undefined *)param_2[1];
    }
    do {
      lVar4 = lVar4 + 1;
    } while (puVar3[lVar4] != '\0');
    FUN_1800671b0(auStack_48,puVar3,lVar4);
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_b0 = &puStack_a8;
    puStack_a8 = &UNK_180a0ab70;
    lStack_a0 = lVar2;
    ppuStack_70 = &puStack_a8;
    (**(code **)(*plVar1 + 0x28))(plVar1,auStack_68,&puStack_a8,0);
    FUN_180067070(auStack_48);
    FUN_180067070(auStack_68);
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 3) = 0;
  }
  *param_3 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_e8);
}





// 函数: void FUN_180186a90(longlong param_1)
void FUN_180186a90(longlong param_1)

{
  FUN_180067070(param_1 + 0x20);
  FUN_180067070(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186ac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
void FUN_180186ac0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined **ppuStack_d0;
  undefined *puStack_c8;
  longlong lStack_c0;
  undefined **ppuStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_38;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  puStack_e0 = param_2;
  puStack_d8 = param_3;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) == 0) {
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 3) = 0;
  }
  else {
    uStack_78 = 0;
    uStack_70 = 0xf;
    auStack_88[0] = 0;
    uStack_58 = 0;
    uStack_50 = 0xf;
    auStack_68[0] = 0;
    uStack_44 = param_5;
    puVar3 = &DAT_18098bc73;
    if ((undefined *)param_3[1] != (undefined *)0x0) {
      puVar3 = (undefined *)param_3[1];
    }
    lVar4 = -1;
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar3[lVar5] != '\0');
    uStack_48 = param_4;
    FUN_1800671b0(auStack_88);
    puVar3 = &DAT_18098bc73;
    if ((undefined *)param_2[1] != (undefined *)0x0) {
      puVar3 = (undefined *)param_2[1];
    }
    do {
      lVar4 = lVar4 + 1;
    } while (puVar3[lVar4] != '\0');
    FUN_1800671b0(auStack_68,puVar3,lVar4);
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_d0 = &puStack_c8;
    puStack_c8 = &UNK_180a0aba8;
    lStack_c0 = lVar2;
    ppuStack_90 = &puStack_c8;
    (**(code **)(*plVar1 + 0x30))(plVar1,auStack_88,&puStack_c8,0);
    FUN_180067070(auStack_68);
    FUN_180067070(auStack_88);
    *param_2 = &UNK_180a3c3e0;
    if (param_2[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    *param_3 = &UNK_180a3c3e0;
    if (param_3[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    param_3[1] = 0;
    *(undefined4 *)(param_3 + 3) = 0;
  }
  *param_3 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186ca0(undefined8 param_1,longlong param_2,ulonglong param_3)
void FUN_180186ca0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined **ppuStack_38;
  ulonglong uStack_30;
  
  lVar2 = _DAT_180c8a9e0;
  uStack_78 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(_DAT_180c8a9e0 + 8) != 0) {
    ppuStack_98 = (undefined **)0x0;
    ppuStack_90 = (undefined **)0x0;
    uVar5 = 0;
    ppuStack_88 = (undefined **)0x0;
    if (param_3 != 0) {
      do {
        uStack_60 = 0;
        uStack_58 = 0xf;
        puStack_70 = (undefined *)((ulonglong)puStack_70 & 0xffffffffffffff00);
        uStack_50 = 0;
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(param_2 + uVar5 * 8) + lVar6) != '\0');
        FUN_1800671b0(&puStack_70);
        ppuVar4 = ppuStack_90;
        if (ppuStack_88 == ppuStack_90) {
          FUN_180188f60(&ppuStack_98,ppuStack_90,&puStack_70);
        }
        else {
          ppuStack_80 = ppuStack_90;
          FUN_18018b350(ppuStack_90,&puStack_70);
          *(undefined4 *)(ppuVar4 + 4) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)ppuVar4 + 0x24) = uStack_50._4_4_;
          ppuStack_90 = ppuStack_90 + 5;
        }
        FUN_180067070(&puStack_70);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
    }
    plVar1 = *(longlong **)(lVar2 + 8);
    ppuStack_80 = &puStack_70;
    puStack_70 = &UNK_180a0ab00;
    lStack_68 = lVar2;
    ppuStack_38 = &puStack_70;
    (**(code **)(*plVar1 + 0x38))(plVar1,&ppuStack_98,&puStack_70,0);
    ppuVar3 = ppuStack_90;
    ppuVar4 = ppuStack_98;
    if (ppuStack_98 != (undefined **)0x0) {
      for (; ppuStack_80 = ppuVar4, ppuVar4 != ppuVar3; ppuVar4 = ppuVar4 + 5) {
        FUN_180067070(ppuVar4);
      }
      uVar5 = (((longlong)ppuStack_88 - (longlong)ppuStack_98) / 0x28) * 0x28;
      ppuVar4 = ppuStack_98;
      if (0xfff < uVar5) {
        uVar5 = uVar5 + 0x27;
        ppuVar4 = (undefined **)ppuStack_98[-1];
        if (0x1f < (ulonglong)((longlong)ppuStack_98 + (-8 - (longlong)ppuVar4))) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(ppuVar4,uVar5);
      ppuStack_98 = (undefined **)0x0;
      ppuStack_90 = (undefined **)0x0;
      ppuStack_88 = (undefined **)0x0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180186eb0(void)
void FUN_180186eb0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
  memset(lVar1 + 0x14,0,0x74);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801871f0(undefined8 param_1,undefined8 *param_2)
void FUN_1801871f0(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  lVar6 = _DAT_180c8a9e0;
  puVar9 = *(undefined8 **)(_DAT_180c8a9e0 + 0x18);
  if (puVar9 != *(undefined8 **)(_DAT_180c8a9e0 + 0x20)) {
    iVar2 = *(int *)(param_2 + 2);
    do {
      puVar4 = (undefined8 *)*puVar9;
      iVar3 = *(int *)(puVar4 + 2);
      iVar8 = iVar2;
      if (iVar3 == iVar2) {
        if (iVar3 != 0) {
          pbVar7 = (byte *)puVar4[1];
          lVar10 = param_2[1] - (longlong)pbVar7;
          do {
            pbVar1 = pbVar7 + lVar10;
            iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
            if (iVar8 != 0) break;
            pbVar7 = pbVar7 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18018728e:
        if (iVar8 == 0) {
          if (puVar4 != (undefined8 *)0x0) {
            if (puVar4[0xd] != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            puVar4[4] = &UNK_180a3c3e0;
            if (puVar4[5] == 0) {
              puVar4[5] = 0;
              *(undefined4 *)(puVar4 + 7) = 0;
              puVar4[4] = &UNK_18098bcb0;
              *puVar4 = &UNK_180a3c3e0;
              if (puVar4[1] == 0) {
                puVar4[1] = 0;
                *(undefined4 *)(puVar4 + 3) = 0;
                *puVar4 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
                FUN_18064e900(puVar4);
              }
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *puVar9 = 0;
          puVar4 = puVar9 + 1;
          puVar5 = *(undefined8 **)(lVar6 + 0x20);
          if (puVar4 < puVar5) {
                    // WARNING: Subroutine does not return
            memmove(puVar9,puVar4,(longlong)puVar5 - (longlong)puVar4,iVar2,0xfffffffffffffffe);
          }
          *(undefined8 **)(lVar6 + 0x20) = puVar5 + -1;
          break;
        }
      }
      else if (iVar3 == 0) goto LAB_18018728e;
      puVar9 = puVar9 + 1;
    } while (puVar9 != *(undefined8 **)(_DAT_180c8a9e0 + 0x20));
  }
  FUN_180187390(lVar6,&UNK_180a0aa34);
  *param_2 = &UNK_180a3c3e0;
  if (param_2[1] == 0) {
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *param_2 = &UNK_18098bcb0;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180187390(undefined **param_1,longlong param_2)
void FUN_180187390(undefined **param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [32];
  undefined8 uStack_128;
  undefined8 **ppuStack_118;
  undefined8 **ppuStack_110;
  ulonglong uStack_108;
  undefined8 *puStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b4;
  undefined8 *puStack_a8;
  undefined **ppuStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulonglong uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  puVar9 = (undefined8 *)*param_1;
  ppuStack_f8 = param_1;
  lStack_e8 = param_2;
  if ((puVar9 != (undefined8 *)0x0) &&
     (((longlong)param_1[4] - (longlong)param_1[3] & 0xfffffffffffffff8U) != 0)) {
    puVar4 = (undefined8 *)FUN_1808fc418(0x10);
    *puVar4 = &UNK_180a0ac88;
    *puVar4 = &UNK_180a0acd8;
    uVar5 = 0;
    puStack_100 = puVar4;
    if (puVar9 != (undefined8 *)0x0) {
      if ((undefined *)*puVar9 == &UNK_180a0ad28) {
        uVar5 = puVar9[1];
      }
      else {
        uVar5 = (**(code **)((undefined *)*puVar9 + 0x20))(puVar9);
      }
    }
    puVar4[1] = uVar5;
    puVar9 = (undefined8 *)param_1[1];
    param_1[1] = (undefined *)puVar4;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    lStack_78 = 0;
    lStack_70 = 0;
    lStack_68 = 0;
    uStack_50 = 0;
    uStack_48 = 0xf;
    auStack_60[0] = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(param_2 + lVar11) != '\0');
    FUN_1800671b0(auStack_60,param_2);
    for (ppuVar10 = (undefined8 **)param_1[3]; ppuStack_110 = ppuVar10,
        ppuVar10 != (undefined8 **)param_1[4]; ppuVar10 = (undefined8 **)((longlong *)ppuVar10 + 1))
    {
      uStack_c8 = 0;
      uStack_c0 = 0xf;
      puStack_d8 = (undefined *)((ulonglong)puStack_d8 & 0xffffffffffffff00);
      uStack_b8 = 1;
      uStack_b4 = 0;
      ppuStack_118 = &puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      ppuStack_a0 = (undefined **)0x0;
      puStack_a8 = (undefined8 *)FUN_180188490();
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(*(longlong *)((longlong)*ppuVar10 + 0x40) + lVar11) != '\0');
      FUN_1800671b0(&puStack_d8);
      lVar11 = (longlong)*ppuVar10;
      uStack_b8 = *(undefined1 *)(lVar11 + 0x48);
      uStack_b4 = *(undefined8 *)(lVar11 + 0x4c);
      uStack_108 = 0;
      if (*(longlong *)(lVar11 + 0x60) != 0) {
        ppuStack_118 = (undefined8 **)0x0;
        do {
          lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x58) + 8 + (longlong)ppuStack_118);
          uStack_88 = 0;
          uStack_80 = 0xf;
          uStack_98 = 0;
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(param_2 + lVar12) != '\0');
          FUN_1800671b0(&uStack_98,param_2);
          uVar14 = uStack_80;
          uVar8 = uStack_88;
          puVar9 = puStack_a8;
          if (*(char *)((longlong)puStack_a8[1] + 0x19) == '\0') {
            puVar2 = (undefined1 *)CONCAT71(uStack_97,uStack_98);
            puVar4 = (undefined8 *)puStack_a8[1];
            do {
              puVar6 = puVar4 + 4;
              puVar7 = &uStack_98;
              if (0xf < uVar14) {
                puVar7 = puVar2;
              }
              uVar1 = puVar4[6];
              if (0xf < (ulonglong)puVar4[7]) {
                puVar6 = (undefined8 *)*puVar6;
              }
              uVar13 = uVar1;
              if (uVar8 < uVar1) {
                uVar13 = uVar8;
              }
              iVar3 = memcmp(puVar6,puVar7,uVar13);
              if (iVar3 == 0) {
                if (uVar1 < uVar8) goto LAB_180187642;
LAB_1801875f6:
                puVar6 = (undefined8 *)*puVar4;
                puVar9 = puVar4;
              }
              else {
                if (-1 < iVar3) goto LAB_1801875f6;
LAB_180187642:
                puVar6 = (undefined8 *)puVar4[2];
              }
              puVar4 = puVar6;
            } while (*(char *)((longlong)puVar6 + 0x19) == '\0');
            if (puVar9 == puStack_a8) goto LAB_18018764a;
            puVar4 = puVar9 + 4;
            uVar1 = puVar9[6];
            if (0xf < (ulonglong)puVar9[7]) {
              puVar4 = (undefined8 *)*puVar4;
            }
            puVar7 = &uStack_98;
            if (0xf < uVar14) {
              puVar7 = puVar2;
            }
            uVar14 = uVar8;
            if (uVar1 < uVar8) {
              uVar14 = uVar1;
            }
            iVar3 = memcmp(puVar7,puVar4,uVar14);
            if (iVar3 == 0) {
              if (uVar8 < uVar1) goto LAB_18018764a;
            }
            else if (iVar3 < 0) goto LAB_18018764a;
          }
          else {
LAB_18018764a:
            puStack_f0 = &uStack_98;
            uStack_128 = FUN_18018a130(&puStack_a8);
            FUN_18018a1c0(&puStack_a8,&puStack_100,puVar9);
            puVar9 = puStack_100;
          }
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(lVar12 + lVar11) != '\0');
          FUN_1800671b0(puVar9 + 8,lVar11);
          if (0xf < uStack_80) {
            if (0xfff < uStack_80 + 1) {
              lVar11 = *(longlong *)(CONCAT71(uStack_97,uStack_98) + -8);
              if (0x1f < (CONCAT71(uStack_97,uStack_98) - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn(lVar11,uStack_80 + 0x28);
              }
            }
            free();
          }
          uStack_88 = 0;
          uStack_80 = 0xf;
          uStack_98 = 0;
          uStack_108 = uStack_108 + 1;
          ppuStack_118 = ppuStack_118 + 2;
          lVar11 = (longlong)*ppuStack_110;
          param_2 = lStack_e8;
          ppuVar10 = ppuStack_110;
          param_1 = ppuStack_f8;
        } while (uStack_108 < *(ulonglong *)(lVar11 + 0x60));
      }
      if (lStack_68 == lStack_70) {
        FUN_1801891f0(&lStack_78,lStack_70,&puStack_d8);
      }
      else {
        FUN_180189190();
        lStack_70 = lStack_70 + 0x40;
      }
      puVar9 = puStack_a8;
      ppuStack_110 = &puStack_a8;
      FUN_1801884d0(&puStack_a8,puStack_a8[1]);
      puStack_a8[1] = puVar9;
      *puStack_a8 = puVar9;
      puStack_a8[2] = puVar9;
      ppuStack_a0 = (undefined **)0x0;
      free(puStack_a8,0x60);
      FUN_180067070(&puStack_d8);
    }
    ppuStack_f8 = &puStack_d8;
    puStack_d8 = &UNK_180a0ab38;
    ppuStack_a0 = &puStack_d8;
    ppuStack_d0 = param_1;
    (**(code **)(*(longlong *)param_1[1] + 8))(param_1[1],&lStack_78,&puStack_d8,0);
    FUN_180067070(auStack_60);
    lVar12 = lStack_70;
    lVar11 = lStack_78;
    if (lStack_78 != 0) {
      for (; lVar11 != lVar12; lVar11 = lVar11 + 0x40) {
        FUN_180187950(lVar11);
      }
      uVar8 = lStack_68 - lStack_78 & 0xffffffffffffffc0;
      lVar11 = lStack_78;
      if (0xfff < uVar8) {
        uVar8 = uVar8 + 0x27;
        lVar11 = *(longlong *)(lStack_78 + -8);
        if (0x1f < (lStack_78 - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar8);
      lStack_78 = 0;
      lStack_70 = 0;
      lStack_68 = 0;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_148);
}





// 函数: void FUN_1801878a0(longlong *param_1)
void FUN_1801878a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180067070(param_1 + 3);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_180187950(lVar1);
        lVar1 = lVar1 + 0x40;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffc0U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    // WARNING: Subroutine does not return
      _invalid_parameter_noinfo_noreturn();
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180187950(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = *plVar1;
  FUN_1801884d0(plVar1,*(undefined8 *)(lVar2 + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*plVar1 + 8) = lVar2;
  *(longlong *)*plVar1 = lVar2;
  *(longlong *)(*plVar1 + 0x10) = lVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  free(*plVar1,0x60);
  FUN_180067070(param_1);
  return;
}





// 函数: void FUN_1801879d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801879d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1,param_3,param_4,0xfffffffffffffffe);
      param_1[7] = 0;
    }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
    free(param_1,0x48);
    return;
  }
  return;
}





// 函数: void FUN_180187a30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180187a30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff0;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187aa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180187aa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_180189900(*param_1,param_1[1],param_3,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn(lVar1 - lVar2,uVar3 + 0x27);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





// 函数: void FUN_180187b40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180187b40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x28) * 0x28;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn
                  (lVar1 - lVar2,uVar3 + 0x27,lVar2,param_4,0xfffffffffffffffe);
      }
    }
    free(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}





