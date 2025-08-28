#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part253.c - 核心引擎模块第253部分
// 本文件包含字符串处理、排序算法、内存管理、文件操作等功能
// 主要功能模块：
// 1. 字符串指针快速排序算法
// 2. 字符串数据块复制和移动操作
// 3. 堆排序算法实现
// 4. 字符串容器管理
// 5. 配置文件处理
// 6. 系统初始化和清理函数
// 转译状态：已完成所有函数命名和注释

// 函数: void quick_sort_string_pointers(ulonglong *result_ptr,longlong *left_ptr,longlong *right_ptr)
// 功能: 对字符串指针数组进行快速排序，使用三路分区优化
// 参数: result_ptr - 排序结果指针数组, left_ptr - 左边界指针, right_ptr - 右边界指针
// 算法特点：使用字符串比较进行排序，处理空字符串情况
void quick_sort_string_pointers(ulonglong *result_ptr,longlong *left_ptr,longlong *right_ptr)

{
  byte byte_cmp_result;
  longlong offset_diff;
  byte *string_ptr;
  uint char_val;
  longlong *pivot_ptr;
  longlong *temp_ptr1;
  longlong *temp_ptr2;
  longlong *temp_ptr3;
  longlong *temp_ptr4;
  longlong string_val1;
  longlong string_val2;
  longlong *partition_ptr;
  
  partition_ptr = left_ptr + ((longlong)right_ptr - (longlong)left_ptr >> 4);
  offset_diff = (longlong)right_ptr + (-8 - (longlong)left_ptr) >> 3;
  if (offset_diff < 0x29) {
    temp_ptr4 = right_ptr + -1;
    temp_ptr1 = left_ptr;
  }
  else {
    offset_diff = offset_diff + 1 >> 3;
    swap_string_pointers(left_ptr,left_ptr + offset_diff,left_ptr + offset_diff * 2);
    swap_string_pointers(partition_ptr + -offset_diff,partition_ptr,partition_ptr + offset_diff);
    temp_ptr4 = right_ptr + (-1 - offset_diff);
    swap_string_pointers(right_ptr + offset_diff * -2 + -1,temp_ptr4,right_ptr + -1);
    temp_ptr1 = left_ptr + offset_diff;
  }
  swap_string_pointers(temp_ptr1,partition_ptr,temp_ptr4);
  plVar5 = temp_ptr1 + 1;
  if (left_ptr < temp_ptr1) {
    lVar2 = *temp_ptr1;
    do {
      lVar10 = temp_ptr1[-1];
      plVar8 = temp_ptr1 + -1;
      if (*(int *)(lVar2 + 0x10) != 0) {
        if (*(int *)(lVar10 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar2 + 8);
        lVar9 = *(longlong *)(lVar10 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar10 + 8);
        lVar2 = *(longlong *)(lVar2 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar2];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      lVar2 = lVar10;
      plVar11 = plVar8;
    } while (param_2 < plVar8);
  }
  plVar8 = plVar5;
  plVar7 = temp_ptr1;
  if (plVar5 < right_ptr) {
    lVar2 = *temp_ptr1;
    do {
      lVar10 = *plVar5;
      plVar8 = plVar5;
      if (*(int *)(lVar2 + 0x10) != 0) {
        if (*(int *)(lVar10 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar2 + 8);
        lVar9 = *(longlong *)(lVar10 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar9];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0x10) == 0) break;
        pbVar3 = *(byte **)(lVar10 + 8);
        lVar10 = *(longlong *)(lVar2 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar10];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if (0 < (int)(bVar1 - uVar4)) break;
      }
      plVar5 = plVar5 + 1;
      plVar8 = plVar5;
    } while (plVar5 < param_3);
  }
joined_r0x000180219b69:
  do {
    plVar6 = plVar7;
    if (right_ptr <= plVar5) goto joined_r0x000180219bf9;
    lVar2 = *plVar5;
    lVar10 = *temp_ptr1;
    if (*(int *)(lVar2 + 0x10) == 0) {
LAB_180219ba7:
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(int *)(lVar2 + 0x10) != 0) {
          pbVar3 = *(byte **)(lVar10 + 8);
          lVar10 = *(longlong *)(lVar2 + 8) - (longlong)pbVar3;
          do {
            bVar1 = *pbVar3;
            uVar4 = (uint)pbVar3[lVar10];
            if (bVar1 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          if ((int)(bVar1 - uVar4) < 1) goto LAB_180219bd7;
        }
joined_r0x000180219bf9:
        for (; left_ptr < plVar7; plVar7 = plVar7 + -1) {
          plVar6 = plVar6 + -1;
          lVar2 = *temp_ptr1;
          lVar10 = *plVar6;
          if (*(int *)(lVar2 + 0x10) == 0) {
LAB_180219c49:
            if (*(int *)(lVar10 + 0x10) != 0) {
              if (*(int *)(lVar2 + 0x10) == 0) break;
              pbVar3 = *(byte **)(lVar10 + 8);
              lVar2 = *(longlong *)(lVar2 + 8) - (longlong)pbVar3;
              do {
                bVar1 = *pbVar3;
                uVar4 = (uint)pbVar3[lVar2];
                if (bVar1 != uVar4) break;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
              if (0 < (int)(bVar1 - uVar4)) break;
            }
            temp_ptr1 = temp_ptr1 + -1;
            if (temp_ptr1 != plVar6) {
              lVar2 = *temp_ptr1;
              *temp_ptr1 = lVar10;
              *plVar6 = lVar2;
            }
          }
          else if (*(int *)(lVar10 + 0x10) != 0) {
            pbVar3 = *(byte **)(lVar2 + 8);
            lVar9 = *(longlong *)(lVar10 + 8) - (longlong)pbVar3;
            do {
              bVar1 = *pbVar3;
              uVar4 = (uint)pbVar3[lVar9];
              if (bVar1 != uVar4) break;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            if ((int)(bVar1 - uVar4) < 1) goto LAB_180219c49;
          }
        }
        if (plVar7 == left_ptr) {
          if (plVar5 == right_ptr) {
            *result_ptr = (ulonglong)temp_ptr1;
            result_ptr[1] = (ulonglong)plVar8;
            return;
          }
          if (plVar8 != plVar5) {
            lVar2 = *temp_ptr1;
            *temp_ptr1 = *plVar8;
            *plVar8 = lVar2;
          }
          lVar2 = *temp_ptr1;
          *temp_ptr1 = *plVar5;
          temp_ptr1 = temp_ptr1 + 1;
          *plVar5 = lVar2;
          plVar5 = plVar5 + 1;
          plVar8 = plVar8 + 1;
        }
        else {
          plVar7 = plVar7 + -1;
          if (plVar5 == right_ptr) {
            temp_ptr1 = temp_ptr1 + -1;
            if (plVar7 == temp_ptr1) {
              lVar2 = *temp_ptr1;
              *temp_ptr1 = plVar8[-1];
              plVar8[-1] = lVar2;
              plVar8 = plVar8 + -1;
            }
            else {
              plVar8 = plVar8 + -1;
              lVar2 = *plVar7;
              *plVar7 = *temp_ptr1;
              *temp_ptr1 = lVar2;
              *temp_ptr1 = *plVar8;
              *plVar8 = lVar2;
            }
          }
          else {
            lVar2 = *plVar5;
            *plVar5 = *plVar7;
            plVar5 = plVar5 + 1;
            *plVar7 = lVar2;
          }
        }
        goto joined_r0x000180219b69;
      }
LAB_180219bd7:
      if (plVar8 != plVar5) {
        lVar10 = *plVar8;
        *plVar8 = lVar2;
        *plVar5 = lVar10;
      }
      plVar8 = plVar8 + 1;
    }
    else if (*(int *)(lVar10 + 0x10) != 0) {
      pbVar3 = *(byte **)(lVar2 + 8);
      lVar9 = *(longlong *)(lVar10 + 8) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_180219ba7;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// 函数: longlong copy_string_data_block(longlong dest_base,longlong src_base,longlong count)
// 功能: 复制字符串数据块，处理内存分配和字符串终止符
// 参数: dest_base - 目标基地址, src_base - 源基地址, count - 要处理的元素数量
longlong copy_string_data_block(longlong dest_base,longlong src_base,longlong count)

{
  longlong element_count;
  longlong *src_ptr;
  ulonglong string_length;
  longlong dest_offset;
  
  element_count = (src_base - dest_base) / 0x28;
  if (0 < element_count) {
    src_ptr = (longlong *)(dest_base + 8);
    dest_offset = count - dest_base;
    do {
      string_length = *(uint *)(src_ptr + 1);
      if (*src_ptr != 0) {
        FUN_1806277c0(count,(ulonglong)string_length);
      }
      if (string_length != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(dest_offset + (longlong)src_ptr),*src_ptr,string_length);
      }
      *(undefined4 *)(dest_offset + 8 + (longlong)src_ptr) = 0;
      if (*(longlong *)(dest_offset + (longlong)src_ptr) != 0) {
        *(undefined1 *)(string_length + *(longlong *)(dest_offset + (longlong)src_ptr)) = 0;
      }
      element_count = element_count + -1;
      *(undefined4 *)(dest_offset + 0x14 + (longlong)src_ptr) = *(undefined4 *)((longlong)src_ptr + 0x14);
      count = count + 0x28;
      *(int *)(dest_offset + 0x18 + (longlong)src_ptr) = (int)src_ptr[3];
      src_ptr = src_ptr + 5;
    } while (0 < element_count);
  }
  return count;
}



// 函数: longlong copy_string_data_block_reverse(longlong dest_base,undefined8 unused_param,longlong src_base)
// 功能: 反向复制字符串数据块，处理内存分配和字符串终止符
// 参数: dest_base - 目标基地址, unused_param - 未使用参数, src_base - 源基地址
longlong copy_string_data_block_reverse(longlong dest_base,undefined8 unused_param,longlong src_base)

{
  uint string_length;
  longlong *src_ptr;
  longlong next_dest;
  ulonglong length;
  longlong current_src;
  
  src_ptr = (longlong *)(dest_base + 8);
  current_src = src_base - dest_base;
  do {
    string_length = *(uint *)(src_ptr + 1);
    length = (ulonglong)string_length;
    if (*src_ptr != 0) {
      FUN_1806277c0(next_dest,length);
    }
    if (string_length != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(current_src + (longlong)src_ptr),*src_ptr,length);
    }
    *(undefined4 *)(current_src + 8 + (longlong)src_ptr) = 0;
    if (*(longlong *)(current_src + (longlong)src_ptr) != 0) {
      *(undefined1 *)(length + *(longlong *)(current_src + (longlong)src_ptr)) = 0;
    }
    next_dest = next_dest + -1;
    *(undefined4 *)(current_src + 0x14 + (longlong)src_ptr) = *(undefined4 *)((longlong)src_ptr + 0x14);
    current_src = current_src + 0x28;
    *(int *)(current_src + 0x18 + (longlong)src_ptr) = (int)src_ptr[3];
    src_ptr = src_ptr + 5;
  } while (0 < next_dest);
  return current_src;
}





// 函数: void initialize_string_data_structure(void)
// 功能: 初始化字符串数据结构（空函数）
void initialize_string_data_structure(void)

{
  return;
}



// 函数: longlong move_string_data_entries(longlong dest_start,longlong src_start,longlong dest_base)
// 功能: 移动字符串数据条目，处理数据结构重新排列
// 参数: dest_start - 目标起始地址, src_start - 源起始地址, dest_base - 目标基地址
longlong move_string_data_entries(longlong dest_start,longlong src_start,longlong dest_base)

{
  longlong current_dest;
  longlong offset;
  longlong current_src;
  
  if (dest_start != src_start) {
    offset = dest_start - dest_base;
    current_src = dest_base - dest_start;
    do {
      FUN_180627ae0(dest_base,dest_start);
      current_dest = dest_start + current_src;
      *(undefined4 *)(current_dest + 0x20) = *(undefined4 *)(current_dest + 0x20 + offset);
      dest_base = dest_base + 0x28;
      dest_start = dest_start + 0x28;
    } while (dest_start != src_start);
  }
  return dest_base;
}





// 函数: void heapify_string_pointers(longlong heap_base,longlong start_index,ulonglong heap_size,longlong *element_ptr)
// 功能: 对字符串指针数组进行堆化操作，用于堆排序
// 参数: heap_base - 堆基地址, start_index - 起始索引, heap_size - 堆大小, element_ptr - 元素指针
void heapify_string_pointers(longlong heap_base,longlong start_index,ulonglong heap_size,longlong *element_ptr)

{
  byte cmp_result;
  longlong left_child;
  byte *left_string;
  uint left_char;
  longlong right_child;
  longlong parent;
  longlong current;
  longlong element;
  
  parent = (longlong)(heap_size - 1) >> 1;
  current = start_index;
  element = start_index;
  if (start_index < parent) {
    do {
      left_child = *(longlong *)(heap_base + 8 + current * 0x10);
      right_child = current * 2 + 2;
      if (*(int *)(left_child + 0x10) != 0) {
        parent = *(longlong *)(heap_base + right_child * 8);
        if (*(int *)(parent + 0x10) != 0) {
          left_string = *(byte **)(left_child + 8);
          left_child = *(longlong *)(parent + 8) - (longlong)left_string;
          do {
            cmp_result = *left_string;
            left_char = (uint)left_string[left_child];
            if (cmp_result != left_char) break;
            left_string = left_string + 1;
          } while (left_char != 0);
          if ((int)(cmp_result - left_char) < 1) goto LAB_180219f3b;
        }
        right_child = current * 2 + 1;
      }
LAB_180219f3b:
      *(undefined8 *)(heap_base + current * 8) = *(undefined8 *)(heap_base + right_child * 8);
      current = right_child;
    } while (right_child < parent);
  }
  if ((right_child == parent) && ((heap_size & 1) == 0)) {
    *(undefined8 *)(heap_base + right_child * 8) = *(undefined8 *)(heap_base + -8 + heap_size * 8);
    right_child = heap_size - 1;
  }
  if (start_index < right_child) {
    do {
      current = *element_ptr;
      left_child = right_child + -1 >> 1;
      parent = *(longlong *)(heap_base + left_child * 8);
      if (*(int *)(current + 0x10) == 0) goto LAB_180219fcf;
      if (*(int *)(parent + 0x10) != 0) {
        left_string = *(byte **)(current + 8);
        current = *(longlong *)(parent + 8) - (longlong)left_string;
        do {
          cmp_result = *left_string;
          left_char = (uint)left_string[current];
          if (cmp_result != left_char) break;
          left_string = left_string + 1;
        } while (left_char != 0);
        if ((int)(cmp_result - left_char) < 1) goto LAB_180219fcc;
      }
      *(longlong *)(heap_base + right_child * 8) = parent;
      right_child = left_child;
    } while (start_index < left_child);
    *(longlong *)(heap_base + left_child * 8) = *element_ptr;
  }
  else {
LAB_180219fcc:
    current = *element_ptr;
LAB_180219fcf:
    *(longlong *)(heap_base + right_child * 8) = current;
  }
  return;
}





// 函数: void FUN_180219ff0(undefined8 *param_1)
void FUN_180219ff0(undefined8 *param_1)

{
  FUN_180211720(param_1 + 4);
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





// 函数: void FUN_18021a050(longlong *param_1,longlong *param_2,longlong *param_3)
void FUN_18021a050(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar7 = *param_2;
  if (*(int *)(lVar2 + 0x10) != 0) {
    if (*(int *)(lVar7 + 0x10) == 0) {
      bVar3 = true;
    }
    else {
      pbVar4 = *(byte **)(lVar2 + 8);
      lVar6 = *(longlong *)(lVar7 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar6];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      bVar3 = 0 < (int)(bVar1 - uVar5);
    }
    if (bVar3) {
      *param_2 = lVar2;
      *param_1 = lVar7;
      lVar7 = *param_2;
    }
  }
  lVar2 = *param_3;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(int *)(lVar2 + 0x10) != 0) {
      pbVar4 = *(byte **)(lVar7 + 8);
      lVar6 = *(longlong *)(lVar2 + 8) - (longlong)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar6];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) {
        return;
      }
    }
    *param_3 = lVar7;
    *param_2 = lVar2;
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      if (*(int *)(lVar2 + 0x10) != 0) {
        pbVar4 = *(byte **)(lVar7 + 8);
        lVar6 = *(longlong *)(lVar2 + 8) - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar6];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) {
          return;
        }
      }
      *param_2 = lVar7;
      *param_1 = lVar2;
    }
  }
  return;
}



undefined8 FUN_18021a590(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180048980();
  FUN_18006b6f0();
  FUN_1801570c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x2a0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_string_config_file(longlong config_ptr)
// 功能: 处理字符串配置文件，读取和解析配置内容
// 参数: config_ptr - 配置指针
void process_string_config_file(longlong config_ptr)

{
  byte bVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined1 auStack_c78 [48];
  undefined1 auStack_c48 [32];
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  longlong alStack_c18 [2];
  byte abStack_c08 [8];
  undefined1 auStack_c00 [128];
  longlong lStack_b80;
  undefined *puStack_af8;
  undefined1 *puStack_af0;
  uint uStack_ae8;
  undefined1 auStack_ae0 [136];
  undefined1 auStack_a58 [8];
  undefined *puStack_a50;
  char acStack_839 [513];
  char acStack_638 [1024];
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_c28 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_c78;
  FUN_180217c40(param_1 + 0x260);
  FUN_1801596c0();
  FUN_180624440(auStack_a58,auStack_c48);
  FUN_1800c4720(alStack_c18);
  puVar9 = &DAT_18098bc73;
  if (puStack_a50 != (undefined *)0x0) {
    puVar9 = puStack_a50;
  }
  lVar6 = FUN_1800c4800(auStack_c00,puVar9,1);
  if (lVar6 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_c18 + (longlong)*(int *)(alStack_c18[0] + 4),2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)alStack_c18 + (longlong)*(int *)(alStack_c18[0] + 4),0,0);
  }
  if (lStack_b80 != 0) {
    bVar1 = abStack_c08[*(int *)(alStack_c18[0] + 4)];
    while ((bVar1 & 1) == 0) {
      _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (alStack_c18,acStack_638,0x400);
      lVar6 = -1;
      do {
        lVar7 = lVar6 + 1;
        lVar3 = lVar6 + 1;
        lVar6 = lVar7;
      } while (acStack_638[lVar3] != '\0');
      if (lVar7 != 0) {
        FUN_18010cbc0(acStack_638,&UNK_180a104f0,auStack_238,acStack_839 + 1);
        uVar4 = 0xffffffffffffffff;
        do {
          uVar8 = uVar4;
          uVar4 = uVar8 + 1;
        } while (acStack_839[uVar8 + 2] != '\0');
        if (acStack_839[uVar8 + 1] == '\r') {
          if (0x1ff < uVar8) {
            FUN_1808fcdc8();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          acStack_839[uVar8 + 1] = '\0';
        }
        puStack_af8 = &UNK_1809fcc28;
        puStack_af0 = auStack_ae0;
        uStack_ae8 = 0;
        auStack_ae0[0] = 0;
        lVar6 = -1;
        do {
          lVar7 = lVar6 + 1;
          lVar3 = lVar6 + 2;
          lVar6 = lVar7;
        } while (acStack_839[lVar3] != '\0');
        uStack_ae8 = (uint)lVar7;
        strcpy_s(auStack_ae0,0x80,acStack_839 + 1);
        if (6 < uStack_ae8) {
          lVar6 = 0;
          do {
            if ((&UNK_180a10500 + lVar6)[(longlong)(puStack_af0 + -0x180a10500)] !=
                (&UNK_180a10500)[lVar6]) goto LAB_18021a863;
            lVar6 = lVar6 + 1;
          } while (lVar6 < 7);
          if ((uStack_ae8 != 0xc) || (iVar5 = strcmp(puStack_af0,&UNK_180a104d0), iVar5 != 0)) {
            FUN_180217f60(param_1 + 0x260,&puStack_af8);
          }
        }
LAB_18021a863:
        puStack_af8 = &UNK_18098bcb0;
      }
      bVar1 = abStack_c08[*(int *)(alStack_c18[0] + 4)];
    }
    lVar6 = FUN_1800a19c0(auStack_c00);
    if (lVar6 == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((longlong)alStack_c18 + (longlong)*(int *)(alStack_c18[0] + 4),2);
    }
  }
  FUN_180217db0(param_1 + 0x260);
  uStack_c20 = FUN_18062b1e0(_DAT_180c8ed18,0x58,8,3);
                    // WARNING: Subroutine does not return
  memset(uStack_c20,0,0x58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void load_string_data_from_file(longlong data_ptr,undefined8 unused1,undefined8 unused2,undefined8 unused3)
// 功能: 从文件加载字符串数据，处理二进制数据格式
// 参数: data_ptr - 数据指针, unused1 - 未使用参数1, unused2 - 未使用参数2, unused3 - 未使用参数3
void load_string_data_from_file(longlong data_ptr,undefined8 unused1,undefined8 unused2,undefined8 unused3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined *puStack_d0;
  longlong lStack_c8;
  undefined4 uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  uint *puStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  undefined *puStack_88;
  longlong lStack_80;
  uint uStack_78;
  undefined4 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  FUN_1801597a0(param_1,&puStack_68,param_3,param_4,0);
  uStack_48 = 0;
  lStack_40 = 0;
  puVar5 = &DAT_18098bc73;
  if (puStack_60 != (undefined *)0x0) {
    puVar5 = puStack_60;
  }
  uVar10 = FUN_18062dee0(&uStack_48,puVar5,&UNK_180a01ff0);
  lVar2 = lStack_40;
  if (lStack_40 == 0) {
    lVar2 = FUN_1801595d0(uVar10,&puStack_88);
    uVar6 = uStack_78 + 0x13;
    FUN_1806277c0(&puStack_88,uVar6);
    puVar8 = (undefined4 *)((ulonglong)uStack_78 + lStack_80);
    *puVar8 = 0x6e756f53;
    puVar8[1] = 0x74614464;
    puVar8[2] = 0x672e7361;
    puVar8[3] = 0x732e6e65;
    puVar8[4] = 0x666465;
    puVar5 = &DAT_18098bc73;
    if (*(undefined **)(lVar2 + 8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar2 + 8);
    }
    uStack_78 = uVar6;
    FUN_180626f80(&UNK_180a10af0,puVar5);
    puStack_88 = &UNK_180a3c3e0;
    if (lStack_80 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_80 = 0;
    uStack_70 = 0;
    puStack_88 = &UNK_18098bcb0;
  }
  else {
    lStack_a8 = 0;
    puStack_a0 = (uint *)0x0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_8e = 3;
    uVar3 = _ftelli64(lStack_40);
    _fseeki64(lVar2,0,2);
    uVar4 = _ftelli64(lVar2);
    _fseeki64(lVar2,uVar3,0);
    FUN_180639bf0(&lStack_a8,uVar4);
    fread(puStack_a0,1,uVar4,lVar2);
    fclose(lVar2);
    lStack_40 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
    uVar6 = *puStack_a0;
    puVar7 = (uint *)((longlong)puStack_a0 + 2);
    puStack_a0 = puVar7;
    if ((ushort)uVar6 != 0) {
      uVar9 = (ulonglong)(ushort)uVar6;
      do {
        puStack_d0 = &UNK_180a3c3e0;
        uStack_b8 = 0;
        lStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b0 = 0;
        uVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        if (uVar6 != 0) {
          puStack_a0 = puVar7;
          FUN_180628f30(&puStack_d0,puVar7,uVar6);
          puVar7 = (uint *)((longlong)puVar7 + (ulonglong)uVar6);
        }
        uStack_b0 = *(undefined8 *)puVar7;
        puVar7 = puVar7 + 2;
        uVar1 = *(ulonglong *)(param_1 + 0x288);
        puStack_a0 = puVar7;
        if (uVar1 < *(ulonglong *)(param_1 + 0x290)) {
          *(ulonglong *)(param_1 + 0x288) = uVar1 + 0x28;
          FUN_180627ae0(uVar1);
          *(undefined8 *)(uVar1 + 0x20) = uStack_b0;
        }
        else {
          FUN_1802195b0(param_1 + 0x280,&puStack_d0);
        }
        puStack_d0 = &UNK_180a3c3e0;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = uStack_b8 & 0xffffffff00000000;
        puStack_d0 = &UNK_18098bcb0;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    FUN_1802187b0(param_1 + 0x280);
    if (((char)uStack_90 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puStack_68 = &UNK_180a3c3e0;
  if (puStack_60 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// 函数: longlong * get_string_container_pointer(longlong container_ptr,longlong *result_ptr)
// 功能: 获取字符串容器指针，并调用相关函数
// 参数: container_ptr - 容器指针, result_ptr - 结果指针
longlong * get_string_container_pointer(longlong container_ptr,longlong *result_ptr)

{
  longlong *plVar1;
  
  container_data = *(longlong **)(container_ptr + 0x1e8);
  *result_ptr = (longlong)container_data;
  if (container_data != (longlong *)0x0) {
    (**(code **)(*container_data + 0x28))();
  }
  return result_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int find_string_in_container(longlong container_ptr,longlong string_ptr)
// 功能: 在字符串容器中查找指定字符串，返回索引
// 参数: container_ptr - 容器指针, string_ptr - 字符串指针
int find_string_in_container(longlong container_ptr,longlong string_ptr)

{
  byte *search_char;
  int search_length;
  longlong cached_result;
  byte *container_string;
  undefined *error_handler;
  int container_length;
  int cmp_result;
  int current_index;
  longlong string_offset;
  longlong *entry_ptr;
  
  cached_result = FUN_18020fa10(*(undefined8 *)(container_ptr + 0x1f8));
  if (cached_result != 0) {
    return *(int *)(cached_result + 0x54);
  }
  current_index = 0;
  search_length = (int)((*(longlong *)(container_ptr + 0x268) - *(longlong *)(container_ptr + 0x260)) / 0x98);
  if (0 < search_length) {
    search_length = *(int *)(string_ptr + 0x10);
    cached_result = 0;
    entry_ptr = (longlong *)(*(longlong *)(container_ptr + 0x260) + 8);
    do {
      container_length = (int)entry_ptr[1];
      if (search_length == container_length) {
        if (search_length != 0) {
          container_string = *(byte **)(string_ptr + 8);
          string_offset = *entry_ptr - (longlong)container_string;
          do {
            search_char = container_string + string_offset;
            container_length = (uint)*container_string - (uint)*search_char;
            if (container_length != 0) break;
            container_string = container_string + 1;
          } while (*search_char != 0);
        }
LAB_18021ae8e:
        if (container_length == 0) {
          return current_index;
        }
      }
      else if (search_length == 0) goto LAB_18021ae8e;
      current_index = current_index + 1;
      cached_result = cached_result + 1;
      entry_ptr = entry_ptr + 0x13;
    } while (cached_result < search_length);
  }
  error_handler = &DAT_18098bc73;
  if (*(undefined **)(string_ptr + 8) != (undefined *)0x0) {
    error_handler = *(undefined **)(string_ptr + 8);
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a108d0,error_handler);
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int find_string_in_container_ex(longlong size_param,undefined8 unused1,undefined8 unused2,longlong container_base)
// 功能: 扩展版本的字符串查找函数，处理不同大小的容器
// 参数: size_param - 大小参数, unused1 - 未使用参数1, unused2 - 未使用参数2, container_base - 容器基地址
int find_string_in_container_ex(longlong size_param,undefined8 unused1,undefined8 unused2,longlong container_base)

{
  byte *pbVar1;
  int iVar2;
  longlong in_RAX;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong unaff_RSI;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puStack0000000000000028;
  
  iVar6 = 0;
  iVar4 = (int)(SUB168(SEXT816(in_RAX) * SEXT816(param_1),8) >> 2) -
          (SUB164(SEXT816(in_RAX) * SEXT816(param_1),0xc) >> 0x1f);
  if (0 < iVar4) {
    iVar2 = *(int *)(unaff_RSI + 0x10);
    lVar9 = 0;
    plVar8 = (longlong *)(param_4 + 8);
    do {
      iVar5 = (int)plVar8[1];
      if (iVar2 == iVar5) {
        if (iVar2 != 0) {
          pbVar3 = *(byte **)(unaff_RSI + 8);
          lVar7 = *plVar8 - (longlong)pbVar3;
          do {
            pbVar1 = pbVar3 + lVar7;
            iVar5 = (uint)*pbVar3 - (uint)*pbVar1;
            if (iVar5 != 0) break;
            pbVar3 = pbVar3 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18021ae8e:
        if (iVar5 == 0) {
          return iVar6;
        }
      }
      else if (iVar2 == 0) goto LAB_18021ae8e;
      iVar6 = iVar6 + 1;
      lVar9 = lVar9 + 1;
      plVar8 = plVar8 + 0x13;
    } while (lVar9 < iVar4);
  }
  puStack0000000000000028 = &DAT_18098bc73;
  if (*(undefined **)(unaff_RSI + 8) != (undefined *)0x0) {
    puStack0000000000000028 = *(undefined **)(unaff_RSI + 8);
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a108d0);
  return -1;
}



// 函数: undefined4 get_string_container_state(void)
// 功能: 获取字符串容器状态（返回寄存器值）
undefined4 get_string_container_state(void)

{
  undefined4 container_state;
  
  return container_state;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int find_string_in_alternative_container(longlong container_ptr,longlong string_ptr)
// 功能: 在替代容器中查找字符串，使用不同的容器结构
// 参数: container_ptr - 容器指针, string_ptr - 字符串指针
int find_string_in_alternative_container(longlong container_ptr,longlong string_ptr)

{
  byte *search_char;
  int search_length;
  byte *container_string;
  undefined *error_handler;
  int container_length;
  int cmp_result;
  int current_index;
  longlong string_offset;
  longlong *entry_ptr;
  longlong entry_count;
  
  current_index = 0;
  entry_count = (int)((*(longlong *)(container_ptr + 0x288) - *(longlong *)(container_ptr + 0x280)) / 0x28);
  if (0 < entry_count) {
    search_length = *(int *)(string_ptr + 0x10);
    string_offset = 0;
    entry_ptr = (longlong *)(*(longlong *)(container_ptr + 0x280) + 8);
    do {
      container_length = (int)entry_ptr[1];
      if (search_length == container_length) {
        if (search_length != 0) {
          container_string = *(byte **)(string_ptr + 8);
          string_offset = *entry_ptr - (longlong)container_string;
          do {
            search_char = container_string + string_offset;
            container_length = (uint)*container_string - (uint)*search_char;
            if (container_length != 0) break;
            container_string = container_string + 1;
          } while (*search_char != 0);
        }
LAB_18021af9e:
        if (container_length == 0) {
          return current_index;
        }
      }
      else if (search_length == 0) goto LAB_18021af9e;
      current_index = current_index + 1;
      string_offset = string_offset + 1;
      entry_ptr = entry_ptr + 5;
    } while (string_offset < entry_count);
  }
  error_handler = &DAT_18098bc73;
  if (*(undefined **)(string_ptr + 8) != (undefined *)0x0) {
    error_handler = *(undefined **)(string_ptr + 8);
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10988,error_handler);
  return -1;
}





// 函数: void initialize_string_system_module(void)
// 功能: 初始化字符串系统模块
void initialize_string_system_module(void)

{
  FUN_1800f0e70();
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void cleanup_string_system_module(void)
// 功能: 清理字符串系统模块
void cleanup_string_system_module(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void shutdown_string_system(void)
// 功能: 关闭字符串系统
void shutdown_string_system(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void terminate_string_services(void)
// 功能: 终止字符串服务
void terminate_string_services(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void finalize_string_operations(void)
// 功能: 完成字符串操作
void finalize_string_operations(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_string_manager(void)
// 功能: 初始化字符串管理器
void initialize_string_manager(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_1c8 [48];
  undefined4 uStack_198;
  undefined4 uStack_190;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_c0;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  ulonglong uStack_38;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1c8;
  uStack_198 = 0;
  _DAT_180c8aa60 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *(undefined4 *)(_DAT_180c8aa60 + 0x19) = 0;
  *(undefined2 *)(_DAT_180c8aa60 + 0x1d) = 0;
  *(undefined1 *)(_DAT_180c8aa60 + 0x1f) = 0;
  *(undefined4 *)(_DAT_180c8aa60 + 0x28) = 3;
  *(longlong *)_DAT_180c8aa60 = _DAT_180c8aa60;
  *(longlong *)(_DAT_180c8aa60 + 8) = _DAT_180c8aa60;
  *(undefined8 *)(_DAT_180c8aa60 + 0x10) = 0;
  *(undefined1 *)(_DAT_180c8aa60 + 0x18) = 0;
  *(undefined8 *)(_DAT_180c8aa60 + 0x20) = 0;
  lStack_c0 = *(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >> 5;
  uStack_190 = 0;
  if (0 < (int)lStack_c0) {
    lVar2 = *(longlong *)(*_DAT_180c86870 + 0x888);
    if (*(longlong *)(*_DAT_180c86870 + 0x890) - lVar2 >> 5 == 0) {
      lVar2 = FUN_180628ca0();
    }
    puStack_108 = &UNK_180a3c3e0;
    uStack_f0 = 0;
    puStack_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_100 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar1);
    *puVar3 = 0x506873654d76614e;
    *(undefined4 *)(puVar3 + 1) = 0x61666572;
    *(undefined2 *)((longlong)puVar3 + 0xc) = 0x7362;
    *(undefined1 *)((longlong)puVar3 + 0xe) = 0;
    uStack_f8 = 0xe;
    FUN_180627ce0(lVar2,auStack_90,&puStack_108);
    puStack_108 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1c8);
}





// 函数: void deactivate_string_system(void)
// 功能: 停用字符串系统
void deactivate_string_system(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void destroy_string_system(void)
// 功能: 销毁字符串系统
void destroy_string_system(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



