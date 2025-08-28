#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part053.c - 核心引擎排序与数据结构操作函数 (10个函数)

// 函数: void quicksort_string_array(string_array *array, string_array *end, longlong depth, char sort_flag)
// 快速排序算法，用于字符串数组的排序
void quicksort_string_array(string_array *array, string_array *end, longlong depth, char sort_flag)

{
  byte cmp_result;
  longlong array_size;
  ulonglong distance;
  longlong middle_index;
  byte *string_ptr;
  uint char_val;
  int compare_result;
  longlong pivot_value;
  string_array *left_ptr;
  string_array *right_ptr;
  longlong left_value;
  longlong right_value;
  string_array *temp_ptr;
  longlong temp_value;
  
  distance = array_size - (longlong)array;
sort_loop:
  if (((longlong)(distance & 0xfffffffffffffff8) < 0xe1) || (depth < 1)) {
    if (depth == 0) {
      pivot_value = (longlong)end - (longlong)array >> 3;
      if (1 < pivot_value) {
        middle_index = (pivot_value + -2 >> 1) + 1;
        do {
          temp_value = array[middle_index + -1];
          middle_index = middle_index + -1;
          heap_sort_adjust(array, middle_index, pivot_value, middle_index, &temp_value);
        } while (middle_index != 0);
      }
      if (1 < pivot_value) {
        end = end + -1;
        do {
          temp_value = *end;
          *end = *array;
          heap_sort_adjust(array, 0, pivot_value + -1, 0, &temp_value);
          end = end + -1;
          pivot_value = (8 - (longlong)array) + (longlong)end >> 3;
        } while (1 < pivot_value);
      }
    }
    return;
  }
  pivot_value = *array;
  middle_index = (longlong)end - (longlong)array >> 3;
  if (middle_index < 0) {
    middle_index = middle_index + 1;
  }
  middle_index = array[middle_index >> 1];
  left_ptr = array;
  right_ptr = end;
  if (*(int *)(middle_index + 0x78) == 0) {
find_partition:
    right_value = end[-1];
    left_value = middle_index;
    if ((*(int *)(right_value + 0x78) == 0) || (left_value = pivot_value, *(int *)(pivot_value + 0x78) == 0))
    goto partition_complete;
    string_ptr = *(byte **)(right_value + 0x70);
    left_value = *(longlong *)(pivot_value + 0x70) - (longlong)string_ptr;
    do {
      cmp_result = *string_ptr;
      char_val = (uint)string_ptr[left_value];
      if (cmp_result != char_val) break;
      string_ptr = string_ptr + 1;
    } while (char_val != 0);
    left_value = pivot_value;
    if ((0 < (int)(cmp_result - char_val)) || (left_value = middle_index, *(int *)(right_value + 0x78) == 0))
    goto partition_complete;
    if (*(int *)(middle_index + 0x78) != 0) {
      string_ptr = *(byte **)(right_value + 0x70);
      left_value = *(longlong *)(middle_index + 0x70) - (longlong)string_ptr;
      do {
        char_val = (uint)string_ptr[left_value];
        compare_result = *string_ptr - char_val;
        pivot_value = middle_index;
        if (*string_ptr != char_val) break;
        string_ptr = string_ptr + 1;
      } while (char_val != 0);
      goto compare_result_check;
    }
  }
  else {
    if (*(int *)(pivot_value + 0x78) != 0) {
      string_ptr = *(byte **)(middle_index + 0x70);
      right_value = *(longlong *)(pivot_value + 0x70) - (longlong)string_ptr;
      do {
        cmp_result = *string_ptr;
        char_val = (uint)string_ptr[right_value];
        if (cmp_result != char_val) break;
        string_ptr = string_ptr + 1;
      } while (char_val != 0);
      if ((int)(cmp_result - char_val) < 1) goto find_partition;
    }
    right_value = end[-1];
    left_value = pivot_value;
    if (*(int *)(right_value + 0x78) == 0) goto partition_complete;
    string_ptr = *(byte **)(right_value + 0x70);
    left_value = *(longlong *)(middle_index + 0x70) - (longlong)string_ptr;
    do {
      cmp_result = *string_ptr;
      char_val = (uint)string_ptr[left_value];
      if (cmp_result != char_val) break;
      string_ptr = string_ptr + 1;
    } while (char_val != 0);
    left_value = middle_index;
    if ((0 < (int)(cmp_result - char_val)) || (left_value = pivot_value, *(int *)(right_value + 0x78) == 0))
    goto partition_complete;
    if (*(int *)(pivot_value + 0x78) != 0) {
      string_ptr = *(byte **)(right_value + 0x70);
      middle_index = *(longlong *)(pivot_value + 0x70) - (longlong)string_ptr;
      do {
        char_val = (uint)string_ptr[middle_index];
        compare_result = *string_ptr - char_val;
        if (*string_ptr != char_val) break;
        string_ptr = string_ptr + 1;
      } while (char_val != 0);
compare_result_check:
      left_value = pivot_value;
      if (compare_result < 1) goto partition_complete;
    }
  }
  left_value = right_value;
partition_complete:
  do {
    while( true ) {
      pivot_value = *left_ptr;
      if (*(int *)(left_value + 0x78) == 0) break;
      if (*(int *)(pivot_value + 0x78) != 0) {
        string_ptr = *(byte **)(left_value + 0x70);
        middle_index = *(longlong *)(pivot_value + 0x70) - (longlong)string_ptr;
        do {
          cmp_result = *string_ptr;
          char_val = (uint)string_ptr[middle_index];
          if (cmp_result != char_val) break;
          string_ptr = string_ptr + 1;
        } while (char_val != 0);
        if ((int)(cmp_result - char_val) < 1) break;
      }
      left_ptr = left_ptr + 1;
    }
    do {
      do {
        middle_index = right_ptr[-1];
        right_ptr = right_ptr + -1;
        if (*(int *)(middle_index + 0x78) == 0) goto swap_elements;
      } while (*(int *)(left_value + 0x78) == 0);
      string_ptr = *(byte **)(middle_index + 0x70);
      right_value = *(longlong *)(left_value + 0x70) - (longlong)string_ptr;
      do {
        cmp_result = *string_ptr;
        char_val = (uint)string_ptr[right_value];
        if (cmp_result != char_val) break;
        string_ptr = string_ptr + 1;
      } while (char_val != 0);
    } while (0 < (int)(cmp_result - char_val));
swap_elements:
    if (right_ptr <= left_ptr) break;
    *left_ptr = middle_index;
    *right_ptr = pivot_value;
    left_ptr = left_ptr + 1;
  } while( true );
  depth = depth + -1;
  FUN_18008edcf(left_ptr, end, depth, sort_flag);
  distance = (longlong)left_ptr - (longlong)array;
  end = left_ptr;
  goto sort_loop;
}





// 函数: void quicksort_string_array_optimized(string_array *array_start, string_array *array_end, longlong depth, char sort_flag)
// 优化的快速排序算法实现，包含递归深度限制和堆排序优化
void quicksort_string_array_optimized(string_array *array_start, string_array *array_end, longlong depth, char sort_flag)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined1 unaff_BL;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong unaff_R12;
  longlong *unaff_R14;
  longlong *unaff_R15;
  
LAB_18008ee00:
  plVar7 = unaff_R14;
  if (0 < unaff_R12) {
    lVar6 = *unaff_R15;
    lVar2 = (longlong)unaff_R14 - (longlong)unaff_R15 >> 3;
    if (lVar2 < 0) {
      lVar2 = lVar2 + 1;
    }
    lVar2 = unaff_R15[lVar2 >> 1];
    plVar7 = unaff_R15;
    plVar10 = unaff_R14;
    if (*(int *)(lVar2 + 0x78) == 0) {
LAB_18008eecc:
      lVar8 = unaff_R14[-1];
      lVar9 = lVar2;
      if ((*(int *)(lVar8 + 0x78) == 0) || (lVar9 = lVar6, *(int *)(lVar6 + 0x78) == 0))
      goto LAB_18008ef40;
      pbVar3 = *(byte **)(lVar8 + 0x70);
      lVar9 = *(longlong *)(lVar6 + 0x70) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      lVar9 = lVar6;
      if ((0 < (int)(bVar1 - uVar4)) || (lVar9 = lVar2, *(int *)(lVar8 + 0x78) == 0))
      goto LAB_18008ef40;
      if (*(int *)(lVar2 + 0x78) != 0) {
        pbVar3 = *(byte **)(lVar8 + 0x70);
        lVar9 = *(longlong *)(lVar2 + 0x70) - (longlong)pbVar3;
        do {
          uVar4 = (uint)pbVar3[lVar9];
          iVar5 = *pbVar3 - uVar4;
          lVar6 = lVar2;
          if (*pbVar3 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        goto joined_r0x00018008ef35;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x78) != 0) {
        pbVar3 = *(byte **)(lVar2 + 0x70);
        lVar8 = *(longlong *)(lVar6 + 0x70) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar8];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_18008eecc;
      }
      lVar8 = unaff_R14[-1];
      lVar9 = lVar6;
      if (*(int *)(lVar8 + 0x78) == 0) goto LAB_18008ef40;
      pbVar3 = *(byte **)(lVar8 + 0x70);
      lVar9 = *(longlong *)(lVar2 + 0x70) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar9];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      lVar9 = lVar2;
      if ((0 < (int)(bVar1 - uVar4)) || (lVar9 = lVar6, *(int *)(lVar8 + 0x78) == 0))
      goto LAB_18008ef40;
      if (*(int *)(lVar6 + 0x78) != 0) {
        pbVar3 = *(byte **)(lVar8 + 0x70);
        lVar2 = *(longlong *)(lVar6 + 0x70) - (longlong)pbVar3;
        do {
          uVar4 = (uint)pbVar3[lVar2];
          iVar5 = *pbVar3 - uVar4;
          if (*pbVar3 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
joined_r0x00018008ef35:
        lVar9 = lVar6;
        if (iVar5 < 1) goto LAB_18008ef40;
      }
    }
    lVar9 = lVar8;
LAB_18008ef40:
    do {
      while( true ) {
        lVar6 = *plVar7;
        if (*(int *)(lVar9 + 0x78) == 0) break;
        if (*(int *)(lVar6 + 0x78) != 0) {
          pbVar3 = *(byte **)(lVar9 + 0x70);
          lVar2 = *(longlong *)(lVar6 + 0x70) - (longlong)pbVar3;
          do {
            bVar1 = *pbVar3;
            uVar4 = (uint)pbVar3[lVar2];
            if (bVar1 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          if ((int)(bVar1 - uVar4) < 1) break;
        }
        plVar7 = plVar7 + 1;
      }
      do {
        do {
          lVar2 = plVar10[-1];
          plVar10 = plVar10 + -1;
          if (*(int *)(lVar2 + 0x78) == 0) goto LAB_18008efb7;
        } while (*(int *)(lVar9 + 0x78) == 0);
        pbVar3 = *(byte **)(lVar2 + 0x70);
        lVar8 = *(longlong *)(lVar9 + 0x70) - (longlong)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar8];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
      } while (0 < (int)(bVar1 - uVar4));
LAB_18008efb7:
      if (plVar10 <= plVar7) goto LAB_18008efcb;
      *plVar7 = lVar2;
      *plVar10 = lVar6;
      plVar7 = plVar7 + 1;
    } while( true );
  }
  goto LAB_18008eff7;
LAB_18008efcb:
  unaff_R12 = unaff_R12 + -1;
  quicksort_string_array_optimized(plVar7,unaff_R14,unaff_R12,unaff_BL);
  unaff_R14 = plVar7;
  if ((longlong)((longlong)plVar7 - (longlong)unaff_R15 & 0xfffffffffffffff8U) < 0xe1) {
LAB_18008eff7:
    if (unaff_R12 == 0) {
      lVar6 = (longlong)plVar7 - (longlong)unaff_R15 >> 3;
      if (1 < lVar6) {
        lVar2 = (lVar6 + -2 >> 1) + 1;
        do {
          lVar2 = lVar2 + -1;
          heap_sort_adjust_optimized(unaff_R15,lVar2,lVar1,lVar2,&uStack0000000000000060);
        } while (lVar2 != 0);
      }
      if (1 < lVar6) {
        plVar7 = plVar7 + -1;
        do {
          *plVar7 = *unaff_R15;
          heap_sort_adjust_optimized(unaff_R15,lVar2,lVar1,lVar2,&uStack0000000000000060);
          plVar7 = plVar7 + -1;
        } while (1 < (8 - (longlong)unaff_R15) + (longlong)plVar7 >> 3);
      }
    }
    return;
  }
  goto LAB_18008ee00;
}





// 函数: void heap_build_conditional(void)
// 功能: 条件性地构建堆数据结构，用于堆排序算法的初始化阶段
// 参数: 通过寄存器传递 (unaff_R12, unaff_R14, unaff_R15)
// 返回: void
// 说明: 当unaff_R12为0时，对指定范围内的元素进行堆化处理
void heap_build_conditional(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_R12;
  longlong unaff_R14;
  undefined8 *unaff_R15;
  undefined8 uStack0000000000000060;
  
  if (unaff_R12 == 0) {
    lVar1 = unaff_R14 - (longlong)unaff_R15 >> 3;
    if (1 < lVar1) {
      lVar2 = (lVar1 + -2 >> 1) + 1;
      do {
        uStack0000000000000060 = unaff_R15[lVar2 + -1];
        lVar2 = lVar2 + -1;
        heap_sort_adjust_optimized(unaff_R15,lVar2,lVar1,lVar2,&uStack0000000000000060);
      } while (lVar2 != 0);
    }
    if (1 < lVar1) {
      puVar3 = (undefined8 *)(unaff_R14 + -8);
      do {
        uStack0000000000000060 = *puVar3;
        *puVar3 = *unaff_R15;
        heap_sort_adjust_optimized(unaff_R15,lVar2,lVar1,lVar2,&uStack0000000000000060);
        puVar3 = puVar3 + -1;
      } while (1 < (8 - (longlong)unaff_R15) + (longlong)puVar3 >> 3);
    }
  }
  return;
}





// 函数: void heap_build_unconditional(void)
// 功能: 无条件构建堆数据结构，用于堆排序算法的初始化阶段
// 参数: 通过寄存器传递 (unaff_R14, unaff_R15)
// 返回: void
// 说明: 对指定范围内的元素进行堆化处理，与heap_build_conditional类似但没有条件检查
void heap_build_unconditional(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_R14;
  undefined8 *unaff_R15;
  undefined8 uStack0000000000000060;
  
  lVar1 = unaff_R14 - (longlong)unaff_R15 >> 3;
  if (1 < lVar1) {
    lVar2 = (lVar1 + -2 >> 1) + 1;
    do {
      uStack0000000000000060 = unaff_R15[lVar2 + -1];
      lVar2 = lVar2 + -1;
      FUN_18008fa70();
    } while (lVar2 != 0);
  }
  if (1 < lVar1) {
    puVar3 = (undefined8 *)(unaff_R14 + -8);
    do {
      uStack0000000000000060 = *puVar3;
      *puVar3 = *unaff_R15;
      FUN_18008fa70();
      puVar3 = puVar3 + -1;
    } while (1 < (8 - (longlong)unaff_R15) + (longlong)puVar3 >> 3);
  }
  return;
}





// 函数: void data_structure_initialize(undefined8 param_1,undefined8 param_2,longlong *param_3)
// 功能: 初始化数据结构，分配内存并设置默认值
// 参数: param_1 - 参数1 (未使用), param_2 - 参数2 (未使用), param_3 - 指向数据结构的指针
// 返回: void
// 说明: 通过FUN_18008f430()分配内存，然后初始化各个字段为默认值
void data_structure_initialize(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)memory_allocate_0x58_bytes();
  *(undefined2 *)(lVar2 + 0x18) = 0;
  uVar1 = ((undefined8 *)*param_3)[1];
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined4 *)(lVar2 + 0x48) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x4c) = 0xffffffff;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  return;
}



// 函数: undefined8 *binary_tree_insert_node(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,undefined8 param_5)
// 功能: 在二叉树中插入节点，包含复杂的平衡和比较逻辑
// 参数: param_1 - 树根指针, param_2 - 插入位置, param_3 - 目标节点, param_4 - 比较数据, param_5 - 附加参数
// 返回: undefined8 * - 插入位置的指针
// 说明: 这是一个复杂的二叉树插入算法，包含多种情况的处理和节点平衡
undefined8 *
binary_tree_insert_node(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_30 [24];
  
  if (param_1[1] == 0) {
    tree_node_insert(param_1,param_2,1,*param_1);
    return param_2;
  }
  plVar1 = (longlong *)*param_1;
  if (param_3 == (longlong *)*plVar1) {
    iVar3 = memcmp(param_4,param_3 + 4,0x10);
    if (iVar3 < 0) {
      tree_node_insert(param_1,param_2,1,param_3);
      return param_2;
    }
  }
  else if (param_3 == plVar1) {
    lVar2 = plVar1[2];
    iVar3 = memcmp(lVar2 + 0x20,param_4,0x10);
    if (iVar3 < 0) {
      tree_node_insert(param_1,param_2,0,lVar2);
      return param_2;
    }
  }
  else {
    iVar3 = memcmp(param_4,param_3 + 4,0x10);
    if (iVar3 < 0) {
      if (*(char *)((longlong)param_3 + 0x19) == '\0') {
        plVar1 = param_3;
        plVar6 = (longlong *)*param_3;
        if (*(char *)(*param_3 + 0x19) == '\0') {
          do {
            plVar5 = plVar6;
            plVar6 = (longlong *)plVar5[2];
          } while (*(char *)(plVar5[2] + 0x19) == '\0');
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (longlong *)plVar5[1];
            if (*(char *)((longlong)plVar1 + 0x19) != '\0') break;
          } while (plVar5 == (longlong *)*plVar1);
          if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
            plVar5 = plVar1;
          }
        }
      }
      else {
        plVar5 = (longlong *)param_3[2];
      }
      iVar3 = memcmp(plVar5 + 4,param_4,0x10);
      if (iVar3 < 0) {
        if (*(char *)(plVar5[2] + 0x19) != '\0') {
          tree_node_insert(param_1,param_2,0,plVar5);
          return param_2;
        }
        tree_node_insert(param_1,param_2,1,param_3);
        return param_2;
      }
    }
    iVar3 = memcmp(param_3 + 4,param_4,0x10);
    if (iVar3 < 0) {
      plVar1 = (longlong *)param_3[2];
      plVar6 = param_3;
      if (*(char *)(param_3[2] + 0x19) == '\0') {
        do {
          plVar5 = plVar1;
          plVar1 = (longlong *)*plVar5;
        } while (*(char *)(*plVar5 + 0x19) == '\0');
      }
      else {
        do {
          plVar5 = (longlong *)plVar6[1];
          if (*(char *)((longlong)plVar5 + 0x19) != '\0') break;
          bVar7 = plVar6 == (longlong *)plVar5[2];
          plVar6 = plVar5;
        } while (bVar7);
      }
      if ((plVar5 == (longlong *)*param_1) || (iVar3 = memcmp(param_4,plVar5 + 4,0x10), iVar3 < 0))
      {
        if (*(char *)(param_3[2] + 0x19) != '\0') {
          tree_node_insert(param_1,param_2,0,param_3);
          return param_2;
        }
        tree_node_insert(param_1,param_2,1,plVar5);
        return param_2;
      }
    }
  }
  puVar4 = (undefined8 *)tree_find_insert_position(param_1,auStack_30,0,param_4,param_5);
  *param_2 = *puVar4;
  return param_2;
}





// 函数: void *memory_allocate_and_copy(undefined8 *param_1)
// 功能: 分配内存并复制数据
// 参数: param_1 - 源数据指针
// 返回: void * - 分配的内存指针
// 说明: 分配0x58字节的内存，并将源数据复制到新分配的内存中
void *memory_allocate_and_copy(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)memory_allocate_0x58_bytes();
  *puVar1 = *param_1;
  puVar1[1] = *param_1;
  puVar1[2] = *param_1;
  return;
}



// 函数: undefined8 *binary_tree_node_insert(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
//             undefined8 param_5,longlong *param_6)
// 功能: 在二叉树中插入节点的底层实现
// 参数: param_1 - 树结构, param_2 - 插入位置, param_3 - 插入标志, param_4 - 节点数据, param_5 - 附加参数, param_6 - 节点指针
// 返回: undefined8 * - 插入结果
// 说明: 这是二叉树插入操作的核心实现，处理各种边界条件和节点链接
undefined8 *
binary_tree_node_insert(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                       undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (0x2e8ba2e8ba2e8b8 < (ulonglong)param_1[1]) {
    throw_length_error();
    __Xlength_error_std__YAXPEBD_Z(&UNK_180a009a8);
    pcVar3 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar3)();
    return puVar4;
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar5 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_18008f4f4;
    }
    param_4[2] = param_6;
    lVar5 = *param_1;
    if (param_4 != *(undefined8 **)(lVar5 + 0x10)) goto LAB_18008f4f4;
  }
  *(longlong **)(lVar5 + 0x10) = param_6;
LAB_18008f4f4:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar8 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar5 = *param_1;
      *param_2 = plVar8;
      *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)param_6[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar5 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar5 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar5 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        param_6 = *(longlong **)(param_6[1] + 8);
      }
      else {
        if (param_6 == (longlong *)plVar6[2]) {
          handle_tree_rotation_case1(param_1);
          param_6 = plVar6;
        }
        *(undefined1 *)(param_6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_18008f669:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (param_6 == (longlong *)*plVar6) {
          handle_tree_rotation_case2(param_1);
          param_6 = plVar6;
        }
        *(undefined1 *)(param_6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(param_6[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar4 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar4) {
            *puVar4 = plVar7;
          }
          else {
            puVar4[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_18008f669;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(param_6[1] + 8) + 0x18) = 0;
      param_6 = *(longlong **)(param_6[1] + 8);
    }
    cVar1 = *(char *)(param_6[1] + 0x18);
  } while( true );
}



// 函数: undefined8 *binary_tree_find_insert_position(longlong *param_1,undefined8 *param_2,char param_3,undefined8 param_4,
//             undefined8 param_5)
// 功能: 在二叉树中查找合适的插入位置
// 参数: param_1 - 树结构, param_2 - 临时存储, param_3 - 查找标志, param_4 - 比较数据, param_5 - 附加参数
// 返回: undefined8 * - 找到的位置指针
// 说明: 在二叉树中搜索合适的插入位置，考虑各种比较条件和平衡要求
undefined8 *
binary_tree_find_insert_position(longlong *param_1,undefined8 *param_2,char param_3,undefined8 param_4,
                                undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStackX_8 [8];
  
  bVar6 = true;
  puVar4 = (undefined8 *)((undefined8 *)*param_1)[1];
  puVar5 = (undefined8 *)*param_1;
  while (*(char *)((longlong)puVar4 + 0x19) == '\0') {
    if (param_3 == '\0') {
      iVar3 = memcmp(param_4,puVar4 + 4,0x10);
      bVar6 = iVar3 < 0;
    }
    else {
      iVar3 = memcmp(puVar4 + 4,param_4,0x10);
      bVar6 = -1 < iVar3;
    }
    puVar5 = puVar4;
    if (bVar6 == false) {
      puVar4 = (undefined8 *)puVar4[2];
    }
    else {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  puVar4 = puVar5;
  if (bVar6 != false) {
    if (puVar5 == *(undefined8 **)*param_1) {
      puVar4 = (undefined8 *)tree_node_insert(param_1,auStackX_8,1,puVar5);
      *param_2 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
      puVar2 = (undefined8 *)*puVar5;
      puVar1 = puVar5;
      if (*(char *)((longlong)*puVar5 + 0x19) == '\0') {
        do {
          puVar4 = puVar2;
          puVar2 = (undefined8 *)puVar4[2];
        } while (*(char *)((longlong)puVar4[2] + 0x19) == '\0');
      }
      else {
        do {
          puVar4 = puVar1;
          puVar1 = (undefined8 *)puVar4[1];
          if (*(char *)((longlong)puVar1 + 0x19) != '\0') break;
        } while (puVar4 == (undefined8 *)*puVar1);
        if (*(char *)((longlong)puVar4 + 0x19) == '\0') {
          puVar4 = puVar1;
        }
      }
    }
    else {
      puVar4 = (undefined8 *)puVar5[2];
    }
  }
  iVar3 = memcmp(puVar4 + 4,param_4,0x10);
  if (iVar3 < 0) {
    puVar4 = (undefined8 *)tree_node_insert(param_1,auStackX_8,bVar6,puVar5);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    free(param_5,0x58);
    *param_2 = puVar4;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// 函数: longlong *string_compare_with_flags(longlong *param_1,longlong *param_2,longlong *param_3)
// 功能: 比较两个字符串，考虑各种标志和特殊情况
// 参数: param_1 - 字符串1指针, param_2 - 字符串2指针, param_3 - 比较标志
// 返回: longlong * - 比较结果
// 说明: 这是一个复杂的字符串比较函数，处理空字符串和各种比较情况
longlong *string_compare_with_flags(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar2 = (int)param_1[1];
  iVar3 = (int)param_2[1];
  if (iVar2 == iVar3) {
    if (*(int *)(*param_2 + 0x78) == 0) {
      bVar5 = false;
    }
    else if (*(int *)(*param_1 + 0x78) == 0) {
      bVar5 = true;
    }
    else {
      pbVar6 = *(byte **)(*param_2 + 0x70);
      lVar8 = *(longlong *)(*param_1 + 0x70) - (longlong)pbVar6;
      do {
        bVar1 = *pbVar6;
        uVar7 = (uint)pbVar6[lVar8];
        if (bVar1 != uVar7) break;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      bVar5 = 0 < (int)(bVar1 - uVar7);
    }
  }
  else {
    bVar5 = iVar2 < iVar3;
  }
  iVar4 = (int)param_3[1];
  if (bVar5) {
    if (iVar3 == iVar4) {
      if (*(int *)(*param_3 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*param_2 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar6 = *(byte **)(*param_3 + 0x70);
        lVar8 = *(longlong *)(*param_2 + 0x70) - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar5 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar5 = iVar3 < iVar4;
    }
    if (bVar5) {
      return param_2;
    }
    if (iVar2 == iVar4) {
      if (*(int *)(*param_3 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*param_1 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar6 = *(byte **)(*param_3 + 0x70);
        lVar8 = *(longlong *)(*param_1 + 0x70) - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar5 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar5 = iVar2 < iVar4;
    }
    if (bVar5) {
      return param_3;
    }
  }
  else {
    if (iVar2 == iVar4) {
      if (*(int *)(*param_3 + 0x78) == 0) {
        bVar5 = false;
      }
      else if (*(int *)(*param_1 + 0x78) == 0) {
        bVar5 = true;
      }
      else {
        pbVar6 = *(byte **)(*param_3 + 0x70);
        lVar8 = *(longlong *)(*param_1 + 0x70) - (longlong)pbVar6;
        do {
          bVar1 = *pbVar6;
          uVar7 = (uint)pbVar6[lVar8];
          if (bVar1 != uVar7) break;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
        bVar5 = 0 < (int)(bVar1 - uVar7);
      }
    }
    else {
      bVar5 = iVar2 < iVar4;
    }
    if (!bVar5) {
      if (iVar3 == iVar4) {
        if (*(int *)(*param_3 + 0x78) == 0) {
          bVar5 = false;
        }
        else if (*(int *)(*param_2 + 0x78) == 0) {
          bVar5 = true;
        }
        else {
          pbVar6 = *(byte **)(*param_3 + 0x70);
          lVar8 = *(longlong *)(*param_2 + 0x70) - (longlong)pbVar6;
          do {
            bVar1 = *pbVar6;
            uVar7 = (uint)pbVar6[lVar8];
            if (bVar1 != uVar7) break;
            pbVar6 = pbVar6 + 1;
          } while (uVar7 != 0);
          bVar5 = 0 < (int)(bVar1 - uVar7);
        }
      }
      else {
        bVar5 = iVar3 < iVar4;
      }
      if (!bVar5) {
        return param_2;
      }
      return param_3;
    }
  }
  return param_1;
}





// 函数: void heap_sort_adjust_down(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
// 功能: 堆排序中的向下调整操作
// 参数: param_1 - 堆数组, param_2 - 堆大小, param_3 - 调整起始位置, param_4 - 堆属性, param_5 - 临时存储
// 返回: void
// 说明: 这是堆排序算法中的核心向下调整函数
void heap_sort_adjust_down(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_4 * 2;
  while (lVar4 = lVar7 + 2, lVar4 < param_3) {
    lVar8 = *(longlong *)(param_1 + -8 + lVar4 * 8);
    lVar2 = *(longlong *)(param_1 + lVar4 * 8);
    if (*(int *)(lVar8 + 0x78) == 0) {
      bVar3 = false;
    }
    else if (*(int *)(lVar2 + 0x78) == 0) {
      bVar3 = true;
    }
    else {
      pbVar5 = *(byte **)(lVar8 + 0x70);
      lVar8 = *(longlong *)(lVar2 + 0x70) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar8];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      bVar3 = 0 < (int)(bVar1 - uVar6);
    }
    lVar8 = lVar7 + 1;
    if (!bVar3) {
      lVar8 = lVar4;
    }
    *(undefined8 *)(param_1 + param_4 * 8) = *(undefined8 *)(param_1 + lVar8 * 8);
    param_4 = lVar8;
    lVar7 = lVar8 * 2;
  }
  if (lVar4 == param_3) {
    *(undefined8 *)(param_1 + param_4 * 8) = *(undefined8 *)(param_1 + -8 + lVar4 * 8);
    param_4 = lVar7 + 1;
  }
  if (param_4 <= param_2) {
    *(longlong *)(param_1 + param_4 * 8) = *param_5;
    return;
  }
  do {
    lVar7 = *param_5;
    lVar8 = param_4 + -1 >> 1;
    lVar4 = *(longlong *)(param_1 + lVar8 * 8);
    if (*(int *)(lVar7 + 0x78) == 0) {
LAB_18008fb99:
      *(longlong *)(param_1 + param_4 * 8) = lVar7;
      return;
    }
    if (*(int *)(lVar4 + 0x78) != 0) {
      pbVar5 = *(byte **)(lVar7 + 0x70);
      lVar7 = *(longlong *)(lVar4 + 0x70) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar6 = (uint)pbVar5[lVar7];
        if (bVar1 != uVar6) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if ((int)(bVar1 - uVar6) < 1) {
        lVar7 = *param_5;
        goto LAB_18008fb99;
      }
    }
    *(longlong *)(param_1 + param_4 * 8) = lVar4;
    param_4 = lVar8;
    if (lVar8 <= param_2) {
      *(longlong *)(param_1 + lVar8 * 8) = *param_5;
      return;
    }
  } while( true );
}





// 函数: void heap_sort_adjust_up_string(void)
// 功能: 堆排序中的向上调整操作，专门处理字符串比较
// 参数: 通过寄存器传递 (in_R10, in_R11, in_stack_00000030)
// 返回: void
// 说明: 在堆排序中向上调整节点位置，考虑字符串比较的特殊情况
void heap_sort_adjust_up_string(void)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  longlong unaff_RSI;
  longlong lVar5;
  longlong lVar6;
  longlong in_R10;
  longlong in_R11;
  longlong *in_stack_00000030;
  
  do {
    lVar5 = *in_stack_00000030;
    lVar6 = in_R10 + -1 >> 1;
    lVar2 = *(longlong *)(in_R11 + lVar6 * 8);
    if (*(int *)(lVar5 + 0x78) == 0) {
LAB_18008fb99:
      *(longlong *)(in_R11 + in_R10 * 8) = lVar5;
      return;
    }
    if (*(int *)(lVar2 + 0x78) != 0) {
      pbVar3 = *(byte **)(lVar5 + 0x70);
      lVar5 = *(longlong *)(lVar2 + 0x70) - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        uVar4 = (uint)pbVar3[lVar5];
        if (bVar1 != uVar4) break;
        pbVar3 = pbVar3 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) {
        lVar5 = *in_stack_00000030;
        goto LAB_18008fb99;
      }
    }
    *(longlong *)(in_R11 + in_R10 * 8) = lVar2;
    in_R10 = lVar6;
    if (lVar6 <= unaff_RSI) {
      *(longlong *)(in_R11 + lVar6 * 8) = *in_stack_00000030;
      return;
    }
  } while( true );
}





// 函数: void heap_assign_direct(void)
// 功能: 直接赋值操作，用于堆排序中的元素交换
// 参数: 通过寄存器传递 (unaff_RDI, in_R10, in_R11)
// 返回: void
// 说明: 简单的赋值操作，将一个指针指向的值赋给数组中的指定位置
void heap_assign_direct(void)

{
  undefined8 *unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  
  *(undefined8 *)(in_R11 + in_R10 * 8) = *unaff_RDI;
  return;
}





// 函数: void heap_assign_from_stack(void)
// 功能: 从栈中赋值操作，用于堆排序中的元素交换
// 参数: 通过寄存器传递 (in_R10, in_R11, in_stack_00000030)
// 返回: void
// 说明: 从栈中获取值并赋给数组中的指定位置
void heap_assign_from_stack(void)

{
  longlong in_R10;
  longlong in_R11;
  undefined8 *in_stack_00000030;
  
  *(undefined8 *)(in_R11 + in_R10 * 8) = *in_stack_00000030;
  return;
}





