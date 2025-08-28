#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part253.c - 核心引擎模块第253部分
// 包含20个函数，主要负责字符串比较、内存管理、数据结构操作和系统初始化

/**
 * 三路快速排序的分区函数
 * 对三个指针指向的元素进行比较和交换
 * @param param_1 输出参数，用于存储分区后的指针位置
 * @param param_2 左边界指针
 * @param param_3 右边界指针
 */
void quick_sort_three_way_partition(ulonglong *param_1, longlong *param_2, longlong *param_3)

{
  byte temp_byte;
  longlong offset;
  byte *str_ptr;
  uint char_value;
  longlong *pivot;
  longlong *left;
  longlong *right;
  longlong *middle;
  longlong cmp_result;
  longlong left_value;
  longlong *current;
  
  // 计算中点位置
  current = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  offset = (longlong)param_3 + (-8 - (longlong)param_2) >> 3;
  
  if (offset < 0x29) {
    middle = param_3 + -1;
    pivot = param_2;
  }
  else {
    offset = offset + 1 >> 3;
    // 递归排序三个分区
    quick_sort_three_way_partition(param_2, param_2 + offset, param_2 + offset * 2);
    quick_sort_three_way_partition(current + -offset, current, current + offset);
    middle = param_3 + (-1 - offset);
    quick_sort_three_way_partition(param_3 + offset * -2 + -1, middle, param_3 + -1);
    pivot = param_2 + offset;
  }
  // 执行三路分区
  quick_sort_three_way_partition(pivot, current, middle);
  pivot = current + 1;
  
  // 左分区处理
  if (param_2 < current) {
    cmp_result = *current;
    do {
      left_value = current[-1];
      middle = current + -1;
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
        memcpy(*(uint64_t *)(param_1 + (longlong)data_ptr), *data_ptr, buffer_size);
      }
      
      *(int32_t *)(param_1 + 8 + (longlong)data_ptr) = 0;
      
      if (*(longlong *)(param_1 + (longlong)data_ptr) != 0) {
        *(int8_t *)(buffer_size + *(longlong *)(param_1 + (longlong)data_ptr)) = 0;
      }
      
      item_count = item_count + -1;
      *(int32_t *)(param_1 + 0x14 + (longlong)data_ptr) = *(int32_t *)((longlong)data_ptr + 0x14);
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
longlong reverse_batch_copy_and_cleanup(longlong param_1, uint64_t param_2, longlong param_3)

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
      memcpy(*(uint64_t *)(param_3 + (longlong)plVar2),*plVar2,uVar3);
    }
    *(int32_t *)(param_3 + 8 + (longlong)plVar2) = 0;
    if (*(longlong *)(param_3 + (longlong)plVar2) != 0) {
      *(int8_t *)(uVar3 + *(longlong *)(param_3 + (longlong)plVar2)) = 0;
    }
    unaff_R14 = unaff_R14 + -1;
    *(int32_t *)(param_3 + 0x14 + (longlong)plVar2) = *(int32_t *)((longlong)plVar2 + 0x14);
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
      *(int32_t *)(offset_diff + 0x20) = *(int32_t *)(offset_diff + 0x20 + source_offset);
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
      *(uint64_t *)(param_1 + lVar8 * 8) = *(uint64_t *)(param_1 + lVar5 * 8);
      lVar8 = lVar5;
    } while (lVar5 < lVar6);
  }
  if ((lVar5 == lVar6) && ((param_3 & 1) == 0)) {
    *(uint64_t *)(param_1 + lVar5 * 8) = *(uint64_t *)(param_1 + -8 + param_3 * 8);
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
void initialize_data_structure(uint64_t *param_1)

{
  FUN_180211720(param_1 + 4);
  *param_1 = &unknown_var_3456_ptr;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &unknown_var_720_ptr;
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
uint64_t allocate_and_initialize_memory(uint64_t param_1, ulonglong param_2, uint64_t param_3, uint64_t param_4)

{
  uint64_t stack_cookie;
  
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
  void *default_ptr;
  int8_t stack_buffer1 [48];
  int8_t stack_buffer2 [32];
  uint64_t stack_cookie1;
  uint64_t allocated_buffer;
  longlong stream_handle [2];
  byte stream_flags [8];
  int8_t config_buffer [128];
  longlong file_handle;
  void *config_ptr;
  int8_t *config_name;
  uint config_name_length;
  int8_t value_buffer [136];
  int8_t temp_buffer [8];
  void *file_ptr;
  char processed_line [513];
  char line_buffer [1024];
  int8_t temp_buffer2 [512];
  ulonglong stack_cookie2;
  
  stack_cookie1 = 0xfffffffffffffffe;
  stack_cookie2 = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer1;
  FUN_180217c40(param_1 + 0x260);
  FUN_1801596c0();
  FUN_180624440(temp_buffer, stack_buffer2);
  FUN_1800c4720(stream_handle);
  default_ptr = &system_buffer_ptr;
  if (file_ptr != (void *)0x0) {
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
        FUN_18010cbc0(line_buffer, &unknown_var_3504_ptr, temp_buffer2, processed_line + 1);
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
        config_ptr = &unknown_var_3432_ptr;
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
            if ((&unknown_var_3520_ptr + line_length)[(longlong)(config_name + -0x180a10500)] !=
                (&unknown_var_3520_ptr)[line_length]) goto LAB_18021a863;
            line_length = line_length + 1;
          } while (line_length < 7);
          if ((config_name_length != 0xc) || (compare_result = strcmp(config_name, &unknown_var_3472_ptr), compare_result != 0)) {
            FUN_180217f60(param_1 + 0x260, &config_ptr);
          }
        }
LAB_18021a863:
        config_ptr = &unknown_var_720_ptr;
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
  allocated_buffer = FUN_18062b1e0(system_memory_pool_ptr, 0x58, 8, 3);
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
void process_resource_file(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  ulonglong entry_count;
  longlong file_handle;
  uint64_t file_pos;
  uint64_t file_size;
  void *default_ptr;
  uint string_size;
  uint *data_ptr;
  int32_t *header_ptr;
  ulonglong current_entry;
  int32_t alloc_result;
  void *temp_data_ptr;
  longlong temp_long;
  int32_t temp_flag;
  ulonglong entry_index;
  uint64_t entry_data;
  longlong buffer_size;
  uint *file_data;
  uint64_t file_flags;
  int16_t file_mode;
  int8_t file_type;
  void *string_ptr;
  longlong data_offset;
  uint buffer_size2;
  int32_t stack_flag;
  void *cleanup_ptr;
  void *file_ptr;
  uint64_t stack_cookie;
  longlong temp_long2;
  uint64_t stack_cookie2;
  
  stack_cookie2 = 0xfffffffffffffffe;
  FUN_1801597a0(param_1, &cleanup_ptr, param_3, param_4, 0);
  stack_cookie = 0;
  temp_long2 = 0;
  default_ptr = &system_buffer_ptr;
  if (file_ptr != (void *)0x0) {
    default_ptr = file_ptr;
  }
  alloc_result = FUN_18062dee0(&stack_cookie, default_ptr, &unknown_var_4880_ptr);
  file_handle = temp_long2;
  if (temp_long2 == 0) {
    file_handle = FUN_1801595d0(alloc_result, &string_ptr);
    string_size = buffer_size2 + 0x13;
    FUN_1806277c0(&string_ptr, string_size);
    header_ptr = (int32_t *)((ulonglong)buffer_size2 + data_offset);
    *header_ptr = 0x6e756f53;
    header_ptr[1] = 0x74614464;
    header_ptr[2] = 0x672e7361;
    header_ptr[3] = 0x732e6e65;
    header_ptr[4] = 0x666465;
    default_ptr = &system_buffer_ptr;
    if (*(void **)(file_handle + 8) != (void *)0x0) {
      default_ptr = *(void **)(file_handle + 8);
    }
    buffer_size2 = string_size;
    FUN_180626f80(&unknown_var_5040_ptr, default_ptr);
    string_ptr = &unknown_var_3456_ptr;
    if (data_offset != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    data_offset = 0;
    stack_flag = 0;
    string_ptr = &unknown_var_720_ptr;
  }
  else {
    buffer_size = 0;
    file_data = (uint *)0x0;
    file_flags = 0;
    file_mode = 0;
    file_type = 3;
    file_pos = _ftelli64(temp_long2);
    _fseeki64(file_handle, 0, 2);
    file_size = _ftelli64(file_handle);
    _fseeki64(file_handle, file_pos, 0);
    FUN_180639bf0(&buffer_size, file_size);
    fread(file_data, 1, file_size, file_handle);
    fclose(file_handle);
    temp_long2 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
    string_size = *file_data;
    data_ptr = (uint *)((longlong)file_data + 2);
    file_data = data_ptr;
    if ((ushort)string_size != 0) {
      entry_count = (ulonglong)(ushort)string_size;
      do {
        temp_data_ptr = &unknown_var_3456_ptr;
        entry_index = 0;
        temp_long = 0;
        temp_flag = 0;
        entry_data = 0;
        string_size = *data_ptr;
        data_ptr = data_ptr + 1;
        if (string_size != 0) {
          file_data = data_ptr;
          FUN_180628f30(&temp_data_ptr, data_ptr, string_size);
          data_ptr = (uint *)((longlong)data_ptr + (ulonglong)string_size);
        }
        entry_data = *(uint64_t *)data_ptr;
        data_ptr = data_ptr + 2;
        current_entry = *(ulonglong *)(param_1 + 0x288);
        file_data = data_ptr;
        if (current_entry < *(ulonglong *)(param_1 + 0x290)) {
          *(ulonglong *)(param_1 + 0x288) = current_entry + 0x28;
          FUN_180627ae0(current_entry);
          *(uint64_t *)(current_entry + 0x20) = entry_data;
        }
        else {
          FUN_1802195b0(param_1 + 0x280, &temp_data_ptr);
        }
        temp_data_ptr = &unknown_var_3456_ptr;
        if (temp_long != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        temp_long = 0;
        entry_index = entry_index & 0xffffffff00000000;
        temp_data_ptr = &unknown_var_720_ptr;
        entry_count = entry_count - 1;
      } while (entry_count != 0);
    }
    FUN_1802187b0(param_1 + 0x280);
    if (((char)file_mode == '\0') && (buffer_size != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  cleanup_ptr = &unknown_var_3456_ptr;
  if (file_ptr != (void *)0x0) {
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
  byte *search_char;
  int search_length;
  longlong cache_result;
  byte *table_string;
  void *error_handler;
  int table_length;
  int compare_result;
  int current_index;
  longlong string_diff;
  longlong *table_entry;
  
  cache_result = FUN_18020fa10(*(uint64_t *)(param_1 + 0x1f8));
  if (cache_result != 0) {
    return *(int *)(cache_result + 0x54);
  }
  current_index = 0;
  search_length = (int)((*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260)) / 0x98);
  if (0 < search_length) {
    search_length = *(int *)(param_2 + 0x10);
    cache_result = 0;
    table_entry = (longlong *)(*(longlong *)(param_1 + 0x260) + 8);
    do {
      table_length = (int)table_entry[1];
      if (search_length == table_length) {
        if (search_length != 0) {
          table_string = *(byte **)(param_2 + 8);
          string_diff = *table_entry - (longlong)table_string;
          do {
            search_char = table_string + string_diff;
            table_length = (uint)*table_string - (uint)*search_char;
            if (table_length != 0) break;
            table_string = table_string + 1;
          } while (*search_char != 0);
        }
LAB_18021ae8e:
        if (table_length == 0) {
          return current_index;
        }
      }
      else if (search_length == 0) goto LAB_18021ae8e;
      current_index = current_index + 1;
      cache_result = cache_result + 1;
      table_entry = table_entry + 0x13;
    } while (cache_result < search_length);
  }
  error_handler = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    error_handler = *(void **)(param_2 + 8);
  }
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, &unknown_var_4496_ptr, error_handler);
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
int find_element_index_in_range(longlong param_1, uint64_t param_2, uint64_t param_3, longlong param_4)

{
  byte *search_char;
  int search_length;
  longlong size_calc;
  byte *range_string;
  int range_length;
  int compare_result;
  int current_index;
  longlong unaff_RSI;
  longlong string_diff;
  longlong *range_entry;
  longlong entry_count;
  void *error_handler;
  
  current_index = 0;
  range_length = (int)(SUB168(SEXT816(size_calc) * SEXT816(param_1), 8) >> 2) -
          (SUB164(SEXT816(size_calc) * SEXT816(param_1), 0xc) >> 0x1f);
  if (0 < range_length) {
    search_length = *(int *)(unaff_RSI + 0x10);
    entry_count = 0;
    range_entry = (longlong *)(param_4 + 8);
    do {
      compare_result = (int)range_entry[1];
      if (search_length == compare_result) {
        if (search_length != 0) {
          range_string = *(byte **)(unaff_RSI + 8);
          string_diff = *range_entry - (longlong)range_string;
          do {
            search_char = range_string + string_diff;
            compare_result = (uint)*range_string - (uint)*search_char;
            if (compare_result != 0) break;
            range_string = range_string + 1;
          } while (*search_char != 0);
        }
LAB_18021ae8e:
        if (compare_result == 0) {
          return current_index;
        }
      }
      else if (search_length == 0) goto LAB_18021ae8e;
      current_index = current_index + 1;
      entry_count = entry_count + 1;
      range_entry = range_entry + 0x13;
    } while (entry_count < range_length);
  }
  error_handler = &system_buffer_ptr;
  if (*(void **)(unaff_RSI + 8) != (void *)0x0) {
    error_handler = *(void **)(unaff_RSI + 8);
  }
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, &unknown_var_4496_ptr);
  return -1;
}



/**
 * 获取寄存器值
 * @return 返回EBX寄存器的值
 */
int32_t get_register_value(void)

{
  int32_t register_value;
  
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
  byte *search_char;
  int search_length;
  byte *list_string;
  void *error_handler;
  int list_length;
  int compare_result;
  int current_index;
  longlong string_diff;
  longlong *list_entry;
  longlong entry_count;
  
  current_index = 0;
  search_length = (int)((*(longlong *)(param_1 + 0x288) - *(longlong *)(param_1 + 0x280)) / 0x28);
  if (0 < search_length) {
    search_length = *(int *)(param_2 + 0x10);
    entry_count = 0;
    list_entry = (longlong *)(*(longlong *)(param_1 + 0x280) + 8);
    do {
      list_length = (int)list_entry[1];
      if (search_length == list_length) {
        if (search_length != 0) {
          list_string = *(byte **)(param_2 + 8);
          string_diff = *list_entry - (longlong)list_string;
          do {
            search_char = list_string + string_diff;
            list_length = (uint)*list_string - (uint)*search_char;
            if (list_length != 0) break;
            list_string = list_string + 1;
          } while (*search_char != 0);
        }
LAB_18021af9e:
        if (list_length == 0) {
          return current_index;
        }
      }
      else if (search_length == 0) goto LAB_18021af9e;
      current_index = current_index + 1;
      entry_count = entry_count + 1;
      list_entry = list_entry + 5;
    } while (entry_count < search_length);
  }
  error_handler = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    error_handler = *(void **)(param_2 + 8);
  }
  FUN_1800623b0(system_message_context, 0, 0x1000000000000, 3, &unknown_var_4680_ptr, error_handler);
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
  int32_t message_flags;
  longlong queue_start;
  uint64_t *message_handler;
  int8_t stack_buffer1 [48];
  int32_t queue_size;
  int32_t max_messages;
  void *message_ptr;
  uint64_t *message_buffer;
  int32_t message_count;
  uint64_t message_timeout;
  longlong queue_capacity;
  int8_t stack_buffer2 [32];
  uint64_t stack_cookie;
  ulonglong security_cookie;
  
  stack_cookie = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer1;
  queue_size = 0;
  core_system_data_config = FUN_18062b1e0(system_memory_pool_ptr, 0x30, 8, 3);
  *(int32_t *)(core_system_data_config + 0x19) = 0;
  *(int16_t *)(core_system_data_config + 0x1d) = 0;
  *(int8_t *)(core_system_data_config + 0x1f) = 0;
  *(int32_t *)(core_system_data_config + 0x28) = 3;
  *(longlong *)core_system_data_config = core_system_data_config;
  *(longlong *)(core_system_data_config + 8) = core_system_data_config;
  *(uint64_t *)(core_system_data_config + 0x10) = 0;
  *(int8_t *)(core_system_data_config + 0x18) = 0;
  *(uint64_t *)(core_system_data_config + 0x20) = 0;
  queue_capacity = *(longlong *)(*system_main_module_state + 0x890) - *(longlong *)(*system_main_module_state + 0x888) >> 5;
  max_messages = 0;
  if (0 < (int)queue_capacity) {
    queue_start = *(longlong *)(*system_main_module_state + 0x888);
    if (*(longlong *)(*system_main_module_state + 0x890) - queue_start >> 5 == 0) {
      queue_start = FUN_180628ca0();
    }
    message_ptr = &unknown_var_3456_ptr;
    message_timeout = 0;
    message_buffer = (uint64_t *)0x0;
    message_count = 0;
    message_handler = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, 0x10, 0x13);
    *(int8_t *)message_handler = 0;
    message_buffer = message_handler;
    message_flags = FUN_18064e990(message_handler);
    message_timeout = CONCAT44(message_timeout._4_4_, message_flags);
    *message_handler = 0x506873654d76614e;  // "NevMeshP"
    *(int32_t *)(message_handler + 1) = 0x61666572;  // "refa"
    *(int16_t *)((longlong)message_handler + 0xc) = 0x7362;  // "bs"
    *(int8_t *)((longlong)message_handler + 0xe) = 0;
    message_count = 0xe;
    FUN_180627ce0(queue_start, stack_buffer2, &message_ptr);
    message_ptr = &unknown_var_3456_ptr;
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



