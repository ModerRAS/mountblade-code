#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part253.c - 核心引擎模块第253部分
// 包含15个函数，主要负责字符串比较、内存管理和数据结构操作

/**
 * 三路快速排序的分区函数
 * 对三个指针指向的元素进行比较和交换
 * @param param_1 输出参数，用于存储分区后的指针位置
 * @param param_2 左边界指针
 * @param param_3 右边界指针
 */
void quick_sort_three_way_partition(ulonglong *param_1, longlong *param_2, longlong *param_3)

{
  byte byte_temp;
  longlong offset_temp;
  byte *string_ptr;
  uint char_val;
  longlong *pivot_ptr;
  longlong *left_ptr;
  longlong *right_ptr;
  longlong *mid_ptr;
  longlong compare_result;
  longlong left_val;
  longlong *current_ptr;
  
  // 计算中点位置
  current_ptr = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  offset_temp = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  
  if (offset_temp < 0x29) {
    mid_ptr = param_3 + -1;
    pivot_ptr = param_2;
  }
  else {
    offset_temp = offset_temp + 1 >> 3;
    // 递归排序三个分区
    quick_sort_three_way_partition(param_2, param_2 + offset_temp, param_2 + offset_temp * 2);
    quick_sort_three_way_partition(current_ptr + -offset_temp, current_ptr, current_ptr + offset_temp);
    mid_ptr = param_3 + (-1 - offset_temp);
    quick_sort_three_way_partition(param_3 + offset_temp * -2 + -1, mid_ptr, param_3 + -1);
    pivot_ptr = param_2 + offset_temp;
  }
  // 执行三路分区
  quick_sort_three_way_partition(pivot_ptr, current_ptr, mid_ptr);
  pivot_ptr = current_ptr + 1;
  
  // 左分区处理
  if (param_2 < current_ptr) {
    compare_result = *current_ptr;
    do {
      left_val = current_ptr[-1];
      mid_ptr = current_ptr + -1;
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
  plVar7 = plVar11;
  if (plVar5 < param_3) {
    lVar2 = *plVar11;
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
    if (param_3 <= plVar5) goto joined_r0x000180219bf9;
    lVar2 = *plVar5;
    lVar10 = *plVar11;
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
        for (; param_2 < plVar7; plVar7 = plVar7 + -1) {
          plVar6 = plVar6 + -1;
          lVar2 = *plVar11;
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
            plVar11 = plVar11 + -1;
            if (plVar11 != plVar6) {
              lVar2 = *plVar11;
              *plVar11 = lVar10;
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
        if (plVar7 == param_2) {
          if (plVar5 == param_3) {
            *param_1 = (ulonglong)plVar11;
            param_1[1] = (ulonglong)plVar8;
            return;
          }
          if (plVar8 != plVar5) {
            lVar2 = *plVar11;
            *plVar11 = *plVar8;
            *plVar8 = lVar2;
          }
          lVar2 = *plVar11;
          *plVar11 = *plVar5;
          plVar11 = plVar11 + 1;
          *plVar5 = lVar2;
          plVar5 = plVar5 + 1;
          plVar8 = plVar8 + 1;
        }
        else {
          plVar7 = plVar7 + -1;
          if (plVar5 == param_3) {
            plVar11 = plVar11 + -1;
            if (plVar7 == plVar11) {
              lVar2 = *plVar11;
              *plVar11 = plVar8[-1];
              plVar8[-1] = lVar2;
              plVar8 = plVar8 + -1;
            }
            else {
              plVar8 = plVar8 + -1;
              lVar2 = *plVar7;
              *plVar7 = *plVar11;
              *plVar11 = lVar2;
              *plVar11 = *plVar8;
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



/**
 * 批量复制和清理数据结构
 * @param param_1 源数据起始地址
 * @param param_2 源数据结束地址
 * @param param_3 目标地址
 * @return 返回处理后的目标地址
 */
longlong batch_copy_and_cleanup(longlong param_1, longlong param_2, longlong param_3)

{
  uint string_length;
  longlong *data_ptr;
  ulonglong buffer_size;
  longlong item_count;
  
  item_count = (param_2 - param_1) / 0x28;  // 每个结构体40字节
  
  if (0 < item_count) {
    data_ptr = (longlong *)(param_1 + 8);
    param_1 = param_3 - param_1;
    
    do {
      string_length = *(uint *)(data_ptr + 1);
      buffer_size = (ulonglong)string_length;
      
      if (*data_ptr != 0) {
        release_memory_buffer(param_3, buffer_size);
      }
      
      if (string_length != 0) {
        // 复制字符串数据
        memcpy(*(undefined8 *)(param_1 + (longlong)data_ptr), *data_ptr, buffer_size);
      }
      
      *(undefined4 *)(param_1 + 8 + (longlong)data_ptr) = 0;
      
      if (*(longlong *)(param_1 + (longlong)data_ptr) != 0) {
        *(undefined1 *)(buffer_size + *(longlong *)(param_1 + (longlong)data_ptr)) = 0;
      }
      
      item_count = item_count + -1;
      *(undefined4 *)(param_1 + 0x14 + (longlong)data_ptr) = *(undefined4 *)((longlong)data_ptr + 0x14);
      param_3 = param_3 + 0x28;
      *(int *)(param_1 + 0x18 + (longlong)data_ptr) = (int)data_ptr[3];
      data_ptr = data_ptr + 5;
    } while (0 < item_count);
  }
  return param_3;
}



/**
 * 反向批量复制和清理数据结构
 * @param param_1 源数据起始地址
 * @param param_2 保留参数
 * @param param_3 目标地址
 * @return 返回处理后的目标地址
 */
longlong reverse_batch_copy_and_cleanup(longlong param_1, undefined8 param_2, longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  ulonglong uVar3;
  longlong unaff_R14;
  
  plVar2 = (longlong *)(param_1 + 8);
  param_3 = param_3 - param_1;
  do {
    uVar1 = *(uint *)(plVar2 + 1);
    uVar3 = (ulonglong)uVar1;
    if (*plVar2 != 0) {
      FUN_1806277c0(unaff_RBP,uVar3);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(param_3 + (longlong)plVar2),*plVar2,uVar3);
    }
    *(undefined4 *)(param_3 + 8 + (longlong)plVar2) = 0;
    if (*(longlong *)(param_3 + (longlong)plVar2) != 0) {
      *(undefined1 *)(uVar3 + *(longlong *)(param_3 + (longlong)plVar2)) = 0;
    }
    unaff_R14 = unaff_R14 + -1;
    *(undefined4 *)(param_3 + 0x14 + (longlong)plVar2) = *(undefined4 *)((longlong)plVar2 + 0x14);
    unaff_RBP = unaff_RBP + 0x28;
    *(int *)(param_3 + 0x18 + (longlong)plVar2) = (int)plVar2[3];
    plVar2 = plVar2 + 5;
  } while (0 < unaff_R14);
  return unaff_RBP;
}





/**
 * 空函数 - 可能是占位符或调试用
 */
void empty_function_placeholder(void)

{
  return;
}



/**
 * 数据块移动函数
 * @param param_1 源起始地址
 * @param param_2 源结束地址
 * @param param_3 目标地址
 * @return 返回处理后的目标地址
 */
longlong move_data_block(longlong param_1, longlong param_2, longlong param_3)

{
  longlong offset_diff;
  longlong target_offset;
  longlong source_offset;
  
  if (param_1 != param_2) {
    source_offset = param_1 - param_3;
    target_offset = param_3 - param_1;
    
    do {
      release_data_structure(param_3, param_1);
      offset_diff = param_1 + target_offset;
      *(undefined4 *)(offset_diff + 0x20) = *(undefined4 *)(offset_diff + 0x20 + source_offset);
      param_3 = param_3 + 0x28;
      param_1 = param_1 + 0x28;
    } while (param_1 != param_2);
  }
  return param_3;
}





/**
 * 堆数据结构调整函数
 * @param param_1 堆数据结构指针
 * @param param_2 当前大小
 * @param param_3 最大容量
 * @param param_4 新元素指针
 */
void adjust_heap_structure(longlong param_1, longlong param_2, ulonglong param_3, longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar5 = param_2;
  lVar8 = param_2;
  if (param_2 < lVar6) {
    do {
      lVar7 = *(longlong *)(param_1 + 8 + lVar8 * 0x10);
      lVar5 = lVar8 * 2 + 2;
      if (*(int *)(lVar7 + 0x10) != 0) {
        lVar2 = *(longlong *)(param_1 + lVar5 * 8);
        if (*(int *)(lVar2 + 0x10) != 0) {
          pbVar3 = *(byte **)(lVar7 + 8);
          lVar7 = *(longlong *)(lVar2 + 8) - (longlong)pbVar3;
          do {
            bVar1 = *pbVar3;
            uVar4 = (uint)pbVar3[lVar7];
            if (bVar1 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          if ((int)(bVar1 - uVar4) < 1) goto LAB_180219f3b;
        }
        lVar5 = lVar8 * 2 + 1;
      }
LAB_180219f3b:
      *(undefined8 *)(param_1 + lVar8 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
      lVar8 = lVar5;
    } while (lVar5 < lVar6);
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar5 = param_3 - 1;
  }
  if (param_2 < lVar5) {
    do {
      lVar8 = *param_4;
      lVar7 = lVar5 + -1 >> 1;
      lVar6 = *(longlong *)(param_1 + lVar7 * 8);
      if (*(int *)(lVar8 + 0x10) == 0) goto LAB_180219fcf;
      if (*(int *)(lVar6 + 0x10) != 0) {
        pbVar3 = *(byte **)(lVar8 + 8);
        lVar8 = *(longlong *)(lVar6 + 8) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar8];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_180219fcc;
      }
      *(longlong *)(param_1 + lVar5 * 8) = lVar6;
      lVar5 = lVar7;
    } while (param_2 < lVar7);
    *(longlong *)(param_1 + lVar7 * 8) = *param_4;
  }
  else {
LAB_180219fcc:
    lVar8 = *param_4;
LAB_180219fcf:
    *(longlong *)(param_1 + lVar5 * 8) = lVar8;
  }
  return;
}





/**
 * 初始化数据结构
 * @param param_1 数据结构指针
 */
void initialize_data_structure(undefined8 *param_1)

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





/**
 * 比较并交换三个元素
 * 对三个元素进行比较并根据比较结果进行排序
 * @param param_1 第一个元素指针
 * @param param_2 第二个元素指针
 * @param param_3 第三个元素指针
 */
void compare_and_swap_three_elements(longlong *param_1, longlong *param_2, longlong *param_3)

{
  byte char_diff;
  longlong element1;
  bool should_swap;
  byte *str1_ptr;
  uint char_val2;
  longlong str_diff;
  longlong element2;
  
  element1 = *param_1;
  element2 = *param_2;
  if (*(int *)(element1 + 0x10) != 0) {
    if (*(int *)(element2 + 0x10) == 0) {
      should_swap = true;
    }
    else {
      str1_ptr = *(byte **)(element1 + 8);
      str_diff = *(longlong *)(element2 + 8) - (longlong)str1_ptr;
      do {
        char_diff = *str1_ptr;
        char_val2 = (uint)str1_ptr[str_diff];
        if (char_diff != char_val2) break;
        str1_ptr = str1_ptr + 1;
      } while (char_val2 != 0);
      should_swap = 0 < (int)(char_diff - char_val2);
    }
    if (should_swap) {
      *param_2 = element1;
      *param_1 = element2;
      element2 = *param_2;
    }
  }
  element1 = *param_3;
  if (*(int *)(element2 + 0x10) != 0) {
    if (*(int *)(element1 + 0x10) != 0) {
      str1_ptr = *(byte **)(element2 + 8);
      str_diff = *(longlong *)(element1 + 8) - (longlong)str1_ptr;
      do {
        char_diff = *str1_ptr;
        char_val2 = (uint)str1_ptr[str_diff];
        if (char_diff != char_val2) break;
        str1_ptr = str1_ptr + 1;
      } while (char_val2 != 0);
      if ((int)(char_diff - char_val2) < 1) {
        return;
      }
    }
    *param_3 = element2;
    *param_2 = element1;
    element2 = *param_1;
    if (*(int *)(element2 + 0x10) != 0) {
      if (*(int *)(element1 + 0x10) != 0) {
        str1_ptr = *(byte **)(element2 + 8);
        str_diff = *(longlong *)(element1 + 8) - (longlong)str1_ptr;
        do {
          char_diff = *str1_ptr;
          char_val2 = (uint)str1_ptr[str_diff];
          if (char_diff != char_val2) break;
          str1_ptr = str1_ptr + 1;
        } while (char_val2 != 0);
        if ((int)(char_diff - char_val2) < 1) {
          return;
        }
      }
      *param_2 = element2;
      *param_1 = element1;
    }
  }
  return;
}



/**
 * 分配并初始化内存
 * @param param_1 内存指针
 * @param param_2 分配标志
 * @param param_3 参数3
 * @param param_4 参数4
 * @return 返回分配的内存指针
 */
undefined8 allocate_and_initialize_memory(undefined8 param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4)

{
  undefined8 stack_cookie;
  
  stack_cookie = 0xfffffffffffffffe;
  FUN_180048980();
  FUN_18006b6f0();
  FUN_1801570c0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1, 0x2a0, param_3, param_4, stack_cookie);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理配置文件
 * @param param_1 配置处理上下文
 */
void process_configuration_file(longlong param_1)

{
  byte stream_state;
  code *exception_handler;
  longlong index;
  ulonglong string_len;
  int compare_result;
  longlong line_length;
  longlong char_index;
  ulonglong config_name_len;
  undefined *default_ptr;
  undefined1 stack_buffer1 [48];
  undefined1 stack_buffer2 [32];
  undefined8 stack_cookie1;
  undefined8 allocated_buffer;
  longlong stream_handle [2];
  byte stream_flags [8];
  undefined1 config_buffer [128];
  longlong file_handle;
  undefined *config_ptr;
  undefined1 *config_name;
  uint config_name_length;
  undefined1 value_buffer [136];
  undefined1 temp_buffer [8];
  undefined *file_ptr;
  char processed_line [513];
  char line_buffer [1024];
  undefined1 temp_buffer2 [512];
  ulonglong stack_cookie2;
  
  stack_cookie1 = 0xfffffffffffffffe;
  stack_cookie2 = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  FUN_180217c40(param_1 + 0x260);
  FUN_1801596c0();
  FUN_180624440(temp_buffer, stack_buffer2);
  FUN_1800c4720(stream_handle);
  default_ptr = &DAT_18098bc73;
  if (file_ptr != (undefined *)0x0) {
    default_ptr = file_ptr;
  }
  line_length = FUN_1800c4800(config_buffer, default_ptr, 1);
  if (line_length == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)stream_handle + (longlong)*(int *)(stream_handle[0] + 4), 2);
  }
  else {
    _clear___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              ((longlong)stream_handle + (longlong)*(int *)(stream_handle[0] + 4), 0, 0);
  }
  if (file_handle != 0) {
    stream_state = stream_flags[*(int *)(stream_handle[0] + 4)];
    while ((stream_state & 1) == 0) {
      _getline___basic_istream_DU__char_traits_D_std___std__QEAAAEAV12_PEAD_J_Z
                (stream_handle, line_buffer, 0x400);
      line_length = -1;
      do {
        char_index = line_length + 1;
        index = line_length + 1;
        line_length = char_index;
      } while (line_buffer[index] != '\0');
      if (char_index != 0) {
        FUN_18010cbc0(line_buffer, &UNK_180a104f0, temp_buffer2, processed_line + 1);
        string_len = 0xffffffffffffffff;
        do {
          config_name_len = string_len;
          string_len = config_name_len + 1;
        } while (processed_line[config_name_len + 2] != '\0');
        if (processed_line[config_name_len + 1] == '\r') {
          if (0x1ff < config_name_len) {
            FUN_1808fcdc8();
            exception_handler = (code *)swi(3);
            (*exception_handler)();
            return;
          }
          processed_line[config_name_len + 1] = '\0';
        }
        config_ptr = &UNK_1809fcc28;
        config_name = value_buffer;
        config_name_length = 0;
        value_buffer[0] = 0;
        line_length = -1;
        do {
          char_index = line_length + 1;
          index = line_length + 2;
          line_length = char_index;
        } while (processed_line[index] != '\0');
        config_name_length = (uint)char_index;
        strcpy_s(value_buffer, 0x80, processed_line + 1);
        if (6 < config_name_length) {
          line_length = 0;
          do {
            if ((&UNK_180a10500 + line_length)[(longlong)(config_name + -0x180a10500)] !=
                (&UNK_180a10500)[line_length]) goto LAB_18021a863;
            line_length = line_length + 1;
          } while (line_length < 7);
          if ((config_name_length != 0xc) || (compare_result = strcmp(config_name, &UNK_180a104d0), compare_result != 0)) {
            FUN_180217f60(param_1 + 0x260, &config_ptr);
          }
        }
LAB_18021a863:
        config_ptr = &UNK_18098bcb0;
      }
      stream_state = stream_flags[*(int *)(stream_handle[0] + 4)];
    }
    line_length = FUN_1800a19c0(config_buffer);
    if (line_length == 0) {
      _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
                ((longlong)stream_handle + (longlong)*(int *)(stream_handle[0] + 4), 2);
    }
  }
  FUN_180217db0(param_1 + 0x260);
  allocated_buffer = FUN_18062b1e0(_DAT_180c8ed18, 0x58, 8, 3);
                    // WARNING: Subroutine does not return
  memset(allocated_buffer, 0, 0x58);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理资源文件
 * @param param_1 资源管理器上下文
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 */
void process_resource_file(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)

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



/**
 * 获取数据结构指针
 * @param param_1 数据结构容器
 * @param param_2 输出参数，用于存储指针值
 * @return 返回输出参数指针
 */
longlong * get_data_structure_pointer(longlong param_1, longlong *param_2)

{
  longlong *data_ptr;
  
  data_ptr = *(longlong **)(param_1 + 0x1e8);
  *param_2 = (longlong)data_ptr;
  if (data_ptr != (longlong *)0x0) {
    (**(code **)(*data_ptr + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 在数据集合中查找元素索引
 * @param param_1 数据集合指针
 * @param param_2 要查找的元素
 * @return 返回找到的索引，未找到返回-1
 */
int find_element_index_in_collection(longlong param_1, longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  
  lVar3 = FUN_18020fa10(*(undefined8 *)(param_1 + 0x1f8));
  if (lVar3 != 0) {
    return *(int *)(lVar3 + 0x54);
  }
  iVar8 = 0;
  iVar6 = (int)((*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260)) / 0x98);
  if (0 < iVar6) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar3 = 0;
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x260) + 8);
    do {
      iVar7 = (int)plVar10[1];
      if (iVar2 == iVar7) {
        if (iVar2 != 0) {
          pbVar4 = *(byte **)(param_2 + 8);
          lVar9 = *plVar10 - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar9;
            iVar7 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar7 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18021ae8e:
        if (iVar7 == 0) {
          return iVar8;
        }
      }
      else if (iVar2 == 0) goto LAB_18021ae8e;
      iVar8 = iVar8 + 1;
      lVar3 = lVar3 + 1;
      plVar10 = plVar10 + 0x13;
    } while (lVar3 < iVar6);
  }
  puVar5 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 8);
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a108d0,puVar5);
  return -1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 在指定范围内查找元素索引
 * @param param_1 范围大小参数
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 数据集合指针
 * @return 返回找到的索引，未找到返回-1
 */
int find_element_index_in_range(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4)

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



/**
 * 获取寄存器值
 * @return 返回EBX寄存器的值
 */
undefined4 get_register_value(void)

{
  undefined4 register_value;
  
  return register_value;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 在链表中查找元素索引
 * @param param_1 链表头指针
 * @param param_2 要查找的元素
 * @return 返回找到的索引，未找到返回-1
 */
int find_element_index_in_linked_list(longlong param_1, longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar7 = 0;
  iVar5 = (int)((*(longlong *)(param_1 + 0x288) - *(longlong *)(param_1 + 0x280)) / 0x28);
  if (0 < iVar5) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar10 = 0;
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x280) + 8);
    do {
      iVar6 = (int)plVar9[1];
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar3 = *(byte **)(param_2 + 8);
          lVar8 = *plVar9 - (longlong)pbVar3;
          do {
            pbVar1 = pbVar3 + lVar8;
            iVar6 = (uint)*pbVar3 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar3 = pbVar3 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18021af9e:
        if (iVar6 == 0) {
          return iVar7;
        }
      }
      else if (iVar2 == 0) goto LAB_18021af9e;
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + 1;
      plVar9 = plVar9 + 5;
    } while (lVar10 < iVar5);
  }
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_2 + 8);
  }
  FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,&UNK_180a10988,puVar4);
  return -1;
}





/**
 * 初始化系统模块1
 * 初始化系统的第一个模块
 */
void initialize_system_module1(void)

{
  FUN_1800f0e70();
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





/**
 * 初始化系统模块2
 * 初始化系统的第二个模块
 */
void initialize_system_module2(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





/**
 * 初始化系统模块3
 * 初始化系统的第三个模块
 */
void initialize_system_module3(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





/**
 * 初始化系统模块4
 * 初始化系统的第四个模块
 */
void initialize_system_module4(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





/**
 * 初始化系统模块5
 * 初始化系统的第五个模块
 */
void initialize_system_module5(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化消息处理系统
 * 初始化消息处理系统并设置消息队列
 */
void initialize_message_system(void)

{
  undefined4 message_flags;
  longlong queue_start;
  undefined8 *message_handler;
  undefined1 stack_buffer1 [48];
  undefined4 queue_size;
  undefined4 max_messages;
  undefined *message_ptr;
  undefined8 *message_buffer;
  undefined4 message_count;
  undefined8 message_timeout;
  longlong queue_capacity;
  undefined1 stack_buffer2 [32];
  undefined8 stack_cookie;
  ulonglong security_cookie;
  
  stack_cookie = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer1;
  queue_size = 0;
  _DAT_180c8aa60 = FUN_18062b1e0(_DAT_180c8ed18, 0x30, 8, 3);
  *(undefined4 *)(_DAT_180c8aa60 + 0x19) = 0;
  *(undefined2 *)(_DAT_180c8aa60 + 0x1d) = 0;
  *(undefined1 *)(_DAT_180c8aa60 + 0x1f) = 0;
  *(undefined4 *)(_DAT_180c8aa60 + 0x28) = 3;
  *(longlong *)_DAT_180c8aa60 = _DAT_180c8aa60;
  *(longlong *)(_DAT_180c8aa60 + 8) = _DAT_180c8aa60;
  *(undefined8 *)(_DAT_180c8aa60 + 0x10) = 0;
  *(undefined1 *)(_DAT_180c8aa60 + 0x18) = 0;
  *(undefined8 *)(_DAT_180c8aa60 + 0x20) = 0;
  queue_capacity = *(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >> 5;
  max_messages = 0;
  if (0 < (int)queue_capacity) {
    queue_start = *(longlong *)(*_DAT_180c86870 + 0x888);
    if (*(longlong *)(*_DAT_180c86870 + 0x890) - queue_start >> 5 == 0) {
      queue_start = FUN_180628ca0();
    }
    message_ptr = &UNK_180a3c3e0;
    message_timeout = 0;
    message_buffer = (undefined8 *)0x0;
    message_count = 0;
    message_handler = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)message_handler = 0;
    message_buffer = message_handler;
    message_flags = FUN_18064e990(message_handler);
    message_timeout = CONCAT44(message_timeout._4_4_, message_flags);
    *message_handler = 0x506873654d76614e;  // "NevMeshP"
    *(undefined4 *)(message_handler + 1) = 0x61666572;  // "refa"
    *(undefined2 *)((longlong)message_handler + 0xc) = 0x7362;  // "bs"
    *(undefined1 *)((longlong)message_handler + 0xe) = 0;
    message_count = 0xe;
    FUN_180627ce0(queue_start, stack_buffer2, &message_ptr);
    message_ptr = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(message_handler);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)stack_buffer1);
}





/**
 * 初始化系统模块6
 * 初始化系统的第六个模块
 */
void initialize_system_module6(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





/**
 * 初始化系统模块7
 * 初始化系统的第七个模块
 */
void initialize_system_module7(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



