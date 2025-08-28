#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part051.c - 核心引擎模块第51部分
// 本文件包含数据结构操作和算法实现，共14个函数

// 函数：链表遍历和比较函数
// 功能：遍历链表并进行字符串比较，返回符合条件的节点
void traverse_and_compare_list(uint64_t *param_1)

{
  byte compare_result;
  bool is_match;
  uint64_t *current_node;
  byte *string_ptr;
  longlong base_offset;
  int compare_flag;
  uint char_value;
  int string_diff;
  uint64_t *next_node;
  uint64_t *target_node;
  longlong node_offset;
  uint64_t *list_head;
  
  do {
    if (compare_flag == 0) {
      target_node = (uint64_t *)current_node[1];
      is_match = false;
    }
    else {
      if (*(int *)(current_node + 6) == 0) {
        is_match = true;
      }
      else {
        string_ptr = *(byte **)(base_offset + 8);
        node_offset = current_node[5] - (longlong)string_ptr;
        do {
          char_value = (uint)string_ptr[node_offset];
          string_diff = *string_ptr - char_value;
          if (*string_ptr != char_value) break;
          string_ptr = string_ptr + 1;
        } while (char_value != 0);
        is_match = 0 < string_diff;
        if (string_diff < 1) {
          target_node = (uint64_t *)current_node[1];
          goto MATCH_FOUND;
        }
      }
      target_node = (uint64_t *)*current_node;
    }
MATCH_FOUND:
    if (is_match) {
      current_node = list_head;
    }
    list_head = current_node;
    current_node = target_node;
  } while (target_node != (uint64_t *)0x0);
  if (list_head != param_1) {
    if (*(int *)(list_head + 6) == 0) {
UPDATE_RESULT:
      *list_head = list_head;
      return;
    }
    if (compare_flag != 0) {
      string_ptr = (byte *)list_head[5];
      node_offset = *(longlong *)(base_offset + 8) - (longlong)string_ptr;
      do {
        compare_result = *string_ptr;
        char_value = (uint)string_ptr[node_offset];
        if (compare_result != char_value) break;
        string_ptr = string_ptr + 1;
      } while (char_value != 0);
      if ((int)(compare_result - char_value) < 1) goto UPDATE_RESULT;
    }
  }
  *list_head = param_1;
  return;
}



// 函数：条件检查和指针更新函数
// 功能：根据条件检查结果更新指针值
void check_and_update_pointer(longlong param_1)

{
  byte check_result;
  longlong source_ptr;
  byte *compare_ptr;
  longlong base_offset;
  int condition_flag;
  uint compare_value;
  int check_value;
  longlong *result_ptr;
  
  if (*(int *)(source_ptr + 0x30) != check_value) {
    if (condition_flag != 0) {
      compare_ptr = *(byte **)(source_ptr + 0x28);
      node_offset = *(longlong *)(base_offset + 8) - (longlong)compare_ptr;
      do {
        check_result = *compare_ptr;
        compare_value = (uint)compare_ptr[node_offset];
        if (check_result != compare_value) break;
        compare_ptr = compare_ptr + 1;
      } while (compare_value != 0);
      if ((int)(check_result - compare_value) < 1) goto UPDATE_RESULT;
    }
    *result_ptr = param_1;
    return;
  }
UPDATE_RESULT:
  *result_ptr = source_ptr;
  return;
}



// 函数：数据结构操作包装函数
// 功能：调用内部函数进行数据结构操作
void data_structure_wrapper(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18008d810(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// 函数：二叉搜索树查找函数
// 功能：在二叉搜索树中查找指定键值的节点
uint64_t * binary_tree_search(uint64_t *tree_root,uint64_t *result_ptr,uint64_t search_key)

{
  int compare_result;
  uint64_t *left_child;
  uint64_t *current_node;
  uint64_t *parent_node;
  
  left_child = (uint64_t *)tree_root[2];
  parent_node = tree_root;
  if ((uint64_t *)tree_root[2] != (uint64_t *)0x0) {
    do {
      compare_result = memcmp(left_child + 4,search_key,0x10);
      if (compare_result < 0) {
        current_node = (uint64_t *)*left_child;
      }
      else {
        current_node = (uint64_t *)left_child[1];
        parent_node = left_child;
      }
      left_child = current_node;
    } while (current_node != (uint64_t *)0x0);
    if ((parent_node != tree_root) && 
        (compare_result = memcmp(search_key,parent_node + 4,0x10), -1 < compare_result)) {
      *result_ptr = parent_node;
      return result_ptr;
    }
  }
  *result_ptr = tree_root;
  return result_ptr;
}



// 函数：树节点查找函数
// 功能：在树结构中查找特定节点并返回其位置
uint64_t * find_tree_node(uint64_t *tree_root,uint64_t search_key)

{
  uint64_t *current_node;
  uint64_t *next_node;
  int compare_result;
  uint64_t *parent_node;
  int8_t temp_buffer [8];
  
  next_node = (uint64_t *)tree_root[2];
  parent_node = tree_root;
  while (current_node = next_node, current_node != (uint64_t *)0x0) {
    compare_result = memcmp(current_node + 4,search_key,0x10);
    if (compare_result < 0) {
      next_node = (uint64_t *)*current_node;
    }
    else {
      next_node = (uint64_t *)current_node[1];
      parent_node = current_node;
    }
  }
  if ((parent_node == tree_root) || 
      (compare_result = memcmp(search_key,parent_node + 4,0x10), compare_result < 0)) {
    parent_node = (uint64_t *)FUN_18008da10(tree_root,temp_buffer);
    parent_node = (uint64_t *)*parent_node;
  }
  return parent_node + 6;
}



// 函数：优先级队列插入函数
// 功能：向优先级队列中插入新元素，维护队列顺序
void priority_queue_insert(uint64_t *queue_head,uint64_t element,ulonglong *priority)

{
  ulonglong current_priority;
  uint64_t *queue_node;
  longlong new_node;
  uint64_t *insert_pos;
  uint64_t direction;
  bool should_insert_left;
  
  new_node = FUN_18062b420(_DAT_180c8ed18,0x28,*(int8_t *)(queue_head + 5));
  current_priority = *priority;
  should_insert_left = true;
  *(ulonglong *)(new_node + 0x20) = current_priority;
  queue_node = (uint64_t *)queue_head[2];
  insert_pos = queue_head;
  while (queue_node != (uint64_t *)0x0) {
    should_insert_left = current_priority < (ulonglong)queue_node[4];
    insert_pos = queue_node;
    if (should_insert_left) {
      queue_node = (uint64_t *)queue_node[1];
    }
    else {
      queue_node = (uint64_t *)*queue_node;
    }
  }
  queue_node = insert_pos;
  if (should_insert_left) {
    if (queue_node == (uint64_t *)queue_head[1]) goto INSERT_AT_HEAD;
    queue_node = (uint64_t *)func_0x00018066b9a0(queue_node);
  }
  if (*(ulonglong *)(new_node + 0x20) <= (ulonglong)queue_node[4]) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(new_node);
  }
INSERT_AT_HEAD:
  if ((queue_node == queue_head) || (*(ulonglong *)(new_node + 0x20) < (ulonglong)queue_node[4])) {
    direction = 0;
  }
  else {
    direction = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(new_node,queue_node,queue_head,direction);
}



// 函数：递归数据结构清理函数
// 功能：递归清理数据结构中的节点和内存
void recursive_data_cleanup(uint64_t param_1,uint64_t *node_ptr,uint64_t param_3,uint64_t param_4)

{
  if (node_ptr != (uint64_t *)0x0) {
    FUN_18008d810(param_1,*node_ptr,param_3,param_4,0xfffffffffffffffe);
    FUN_18004b730();
    FUN_180058370(node_ptr + 0xc,node_ptr[0xe]);
    FUN_18004b730(node_ptr + 6);
                    // WARNING: Subroutine does not return
    FUN_18064e900(node_ptr);
  }
  return;
}



// 函数：复杂数据结构操作函数
// 功能：在复杂数据结构中插入或查找节点
uint64_t *
complex_data_structure_operation(longlong *structure_head,uint64_t *result_ptr,uint64_t search_key,
                               longlong *compare_node,uint64_t param_5)

{
  longlong *current_node;
  int compare_result;
  longlong *temp_node;
  uint64_t operation_flag;
  bool search_left;
  longlong *stack_ptr;
  
  current_node = (longlong *)*structure_head;
  if ((compare_node == current_node) || (compare_node == structure_head)) {
    if ((structure_head[4] != 0) && 
        (compare_result = memcmp(current_node + 4,param_5,0x10), compare_node = current_node, compare_result < 0))
    {
INSERT_DIRECTLY:
      operation_flag = 0;
      goto PERFORM_INSERT;
    }
  }
  else {
    current_node = (longlong *)func_0x00018066bd70(compare_node);
    compare_result = memcmp(compare_node + 4,param_5,0x10);
    if ((compare_result < 0) && 
        (compare_result = memcmp(param_5,current_node + 4,0x10), compare_result < 0)) {
      if (*compare_node == 0) goto INSERT_DIRECTLY;
      operation_flag = 1;
      compare_node = current_node;
PERFORM_INSERT:
      if (compare_node != (longlong *)0x0) {
        FUN_18008dfa0(structure_head,result_ptr,compare_node,operation_flag,param_5);
        return result_ptr;
      }
    }
  }
  search_left = true;
  current_node = (longlong *)structure_head[2];
  temp_node = structure_head;
  while (current_node != (longlong *)0x0) {
    compare_result = memcmp(param_5,current_node + 4,0x10);
    search_left = compare_result < 0;
    temp_node = current_node;
    if (search_left) {
      current_node = (longlong *)current_node[1];
    }
    else {
      current_node = (longlong *)*current_node;
    }
  }
  current_node = temp_node;
  if (search_left) {
    if (temp_node != (longlong *)structure_head[1]) {
      current_node = (longlong *)func_0x00018066b9a0(temp_node);
      goto CHECK_POSITION;
    }
  }
  else {
CHECK_POSITION:
    compare_result = memcmp(current_node + 4,param_5,0x10);
    if (-1 < compare_result) goto RETURN_RESULT;
  }
  FUN_18008dfa0(structure_head,&stack_ptr,current_node,0,param_5);
  current_node = stack_ptr;
RETURN_RESULT:
  *result_ptr = current_node;
  return result_ptr;
}



// 函数：数据结构节点管理函数
// 功能：管理数据结构节点的插入和查找操作
uint64_t *
manage_data_structure_nodes(longlong *structure_head,uint64_t *result_ptr,uint64_t search_key,
                            longlong *compare_node,int32_t *node_data)

{
  int32_t data_field1;
  int32_t data_field2;
  int32_t data_field3;
  longlong *current_node;
  int compare_result;
  longlong *temp_node;
  longlong allocation_size;
  uint64_t operation_flag;
  bool search_left;
  
  current_node = (longlong *)*structure_head;
  if ((compare_node == current_node) || (compare_node == structure_head)) {
    if ((structure_head[4] != 0) && 
        (compare_result = memcmp(current_node + 4,node_data,0x10), compare_node = current_node, compare_result < 0))
    {
INSERT_NEW_NODE:
      operation_flag = 0;
      goto DO_INSERT;
    }
  }
  else {
    current_node = (longlong *)func_0x00018066bd70(compare_node);
    compare_result = memcmp(compare_node + 4,node_data,0x10);
    if ((compare_result < 0) && 
        (compare_result = memcmp(node_data,current_node + 4,0x10), compare_result < 0)) {
      if (*compare_node == 0) goto INSERT_NEW_NODE;
      operation_flag = 1;
      compare_node = current_node;
DO_INSERT:
      if (compare_node != (longlong *)0x0) {
        FUN_18008e0f0(structure_head,result_ptr,compare_node,operation_flag,node_data);
        return result_ptr;
      }
    }
  }
  search_left = true;
  current_node = (longlong *)structure_head[2];
  temp_node = structure_head;
  while (current_node != (longlong *)0x0) {
    compare_result = memcmp(node_data,current_node + 4,0x10);
    search_left = compare_result < 0;
    temp_node = current_node;
    if (search_left) {
      current_node = (longlong *)current_node[1];
    }
    else {
      current_node = (longlong *)*current_node;
    }
  }
  current_node = temp_node;
  if (search_left) {
    if (temp_node == (longlong *)structure_head[1]) goto ALLOCATE_NEW_NODE;
    current_node = (longlong *)func_0x00018066b9a0(temp_node);
  }
  compare_result = memcmp(current_node + 4,node_data,0x10);
  if (-1 < compare_result) {
    *result_ptr = current_node;
    return result_ptr;
  }
ALLOCATE_NEW_NODE:
  if ((temp_node == structure_head) || 
      (compare_result = memcmp(node_data,temp_node + 4,0x10), compare_result < 0)) {
    operation_flag = 0;
  }
  else {
    operation_flag = 1;
  }
  allocation_size = FUN_18062b420(_DAT_180c8ed18,0x38,(char)structure_head[5]);
  data_field1 = node_data[1];
  data_field2 = node_data[2];
  data_field3 = node_data[3];
  *(int32_t *)(allocation_size + 0x20) = *node_data;
  *(int32_t *)(allocation_size + 0x24) = data_field1;
  *(int32_t *)(allocation_size + 0x28) = data_field2;
  *(int32_t *)(allocation_size + 0x2c) = data_field3;
  *(int32_t *)(allocation_size + 0x30) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(allocation_size,temp_node,structure_head,operation_flag);
}



// 函数：数据复制和初始化函数
// 功能：复制数据并初始化新的数据结构节点
void data_copy_and_initialize(int32_t source_data)

{
  int32_t copy_field1;
  int32_t copy_field2;
  int32_t copy_field3;
  longlong new_node;
  longlong source_ptr;
  int32_t *data_ptr;
  longlong base_offset;
  
  if (source_ptr != base_offset) {
    memcmp(source_data,source_ptr + 0x20,0x10);
  }
  new_node = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(base_offset + 0x28));
  copy_field1 = data_ptr[1];
  copy_field2 = data_ptr[2];
  copy_field3 = data_ptr[3];
  *(int32_t *)(new_node + 0x20) = *data_ptr;
  *(int32_t *)(new_node + 0x24) = copy_field1;
  *(int32_t *)(new_node + 0x28) = copy_field2;
  *(int32_t *)(new_node + 0x2c) = copy_field3;
  *(int32_t *)(new_node + 0x30) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(new_node);
}



// 函数：简单指针赋值函数
// 功能：执行简单的指针赋值操作
void simple_pointer_assignment(void)

{
  uint64_t source_value;
  uint64_t *target_ptr;
  
  *target_ptr = source_value;
  return;
}



// 函数：动态数组清理函数
// 功能：清理动态数组中的元素并释放内存
void dynamic_array_cleanup(longlong *array_ptr,ulonglong clear_count)

{
  longlong array_start;
  longlong array_end;
  ulonglong total_elements;
  longlong element_count;
  
  array_end = array_ptr[1];
  if (clear_count <= (ulonglong)((array_ptr[2] - array_end) / 0x30)) {
    if (clear_count != 0) {
                    // WARNING: Subroutine does not return
      memset(array_end,0,clear_count * 0x30);
    }
    array_ptr[1] = array_end;
    return;
  }
  element_count = *array_ptr;
  total_elements = (array_end - element_count) / 0x30;
  clear_count = total_elements * 2;
  if (total_elements == 0) {
    clear_count = 1;
  }
  if (clear_count < total_elements + clear_count) {
    clear_count = total_elements + clear_count;
  }
  if (clear_count == 0) {
    total_elements = 0;
  }
  else {
    total_elements = FUN_18062b420(_DAT_180c8ed18,clear_count * 0x30,(char)array_ptr[3]);
    element_count = *array_ptr;
    array_end = array_ptr[1];
  }
  if (element_count != array_end) {
                    // WARNING: Subroutine does not return
    memmove(total_elements,element_count,array_end - element_count);
  }
  if (clear_count != 0) {
                    // WARNING: Subroutine does not return
    memset(total_elements,0,clear_count * 0x30);
  }
  if (*array_ptr != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *array_ptr = total_elements;
  array_ptr[2] = clear_count * 0x30 + total_elements;
  array_ptr[1] = total_elements;
  return;
}



// 函数：动态数组扩展函数
// 功能：扩展动态数组的大小并复制现有数据
void dynamic_array_expand(void)

{
  longlong current_size;
  longlong new_size;
  longlong old_start;
  longlong old_end;
  ulonglong expansion_factor;
  longlong *array_ptr;
  longlong new_capacity;
  
  new_size = SUB168(SEXT816(current_size) * SEXT816(old_end - new_capacity),8);
  new_size = (new_size >> 3) - (new_size >> 0x3f);
  expansion_factor = new_size * 2;
  if (new_size == 0) {
    expansion_factor = 1;
  }
  if (expansion_factor < (ulonglong)(new_size + old_start)) {
    expansion_factor = new_size + old_start;
  }
  if (expansion_factor == 0) {
    new_size = 0;
  }
  else {
    new_size = FUN_18062b420(_DAT_180c8ed18,expansion_factor * 0x30,(char)array_ptr[3]);
    new_capacity = *array_ptr;
    old_end = array_ptr[1];
  }
  if (new_capacity != old_end) {
                    // WARNING: Subroutine does not return
    memmove(new_size,new_capacity,old_end - new_capacity);
  }
  if (old_start != 0) {
                    // WARNING: Subroutine does not return
    memset(new_size,0,old_start * 0x30);
  }
  if (*array_ptr != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *array_ptr = new_size;
  array_ptr[2] = expansion_factor * 0x30 + new_size;
  array_ptr[1] = new_size;
  return;
}



// 函数：内存区域清理函数
// 功能：清理指定的内存区域
void memory_region_cleanup(void)

{
  longlong region_size;
  uint64_t region_data;
  longlong array_ptr;
  
  if (region_size != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(array_ptr + 8) = region_data;
  return;
}



// 函数：复杂数据结构重建函数
// 功能：重建复杂数据结构，处理元素重新排列
void complex_data_structure_rebuild(longlong *structure_ptr,longlong data_size,uint64_t param_3,
                                    uint64_t param_4)

{
  uint64_t *element_ptr;
  uint64_t *next_element;
  int8_t *string_ptr;
  uint64_t *current_element;
  uint64_t *temp_element;
  longlong element_offset;
  void *temp_ptr;
  uint64_t *new_structure;
  longlong element_count;
  longlong stack_offset;
  uint64_t expansion_flag;
  
  expansion_flag = 0xfffffffffffffffe;
  next_element = (uint64_t *)structure_ptr[1];
  current_element = (uint64_t *)*structure_ptr;
  stack_offset = ((longlong)next_element - (longlong)current_element) / 0x60;
  element_ptr = (uint64_t *)0x0;
  if (stack_offset == 0) {
    stack_offset = 1;
  }
  else {
    stack_offset = stack_offset * 2;
    if (stack_offset == 0) goto ALLOCATION_COMPLETE;
  }
  element_ptr = (uint64_t *)
           FUN_18062b420(_DAT_180c8ed18,stack_offset * 0x60,(char)structure_ptr[3],param_4,
                         expansion_flag);
  next_element = (uint64_t *)structure_ptr[1];
  current_element = (uint64_t *)*structure_ptr;
ALLOCATION_COMPLETE:
  temp_element = element_ptr;
  if (current_element != next_element) {
    element_count = (longlong)element_ptr - (longlong)current_element;
    current_element = current_element + 1;
    do {
      *temp_element = &unknown_var_720_ptr;
      *(uint64_t *)(element_count + (longlong)current_element) = 0;
      *(int32_t *)(element_count + 8 + (longlong)current_element) = 0;
      *temp_element = &unknown_var_3456_ptr;
      *(uint64_t *)(element_count + 0x10 + (longlong)current_element) = 0;
      *(uint64_t *)(element_count + (longlong)current_element) = 0;
      *(int32_t *)(element_count + 8 + (longlong)current_element) = 0;
      *(int32_t *)(element_count + 8 + (longlong)current_element) = *(int32_t *)(current_element + 1);
      *(uint64_t *)(element_count + (longlong)current_element) = *current_element;
      *(int32_t *)(element_count + 0x14 + (longlong)current_element) = *(int32_t *)((longlong)current_element + 0x14);
      *(int32_t *)(element_count + 0x10 + (longlong)current_element) = *(int32_t *)(current_element + 2);
      *(int32_t *)(current_element + 1) = 0;
      *current_element = 0;
      current_element[2] = 0;
      next_element = (uint64_t *)((longlong)current_element + element_count + 0x18);
      *next_element = &unknown_var_720_ptr;
      *(uint64_t *)(element_count + 0x20 + (longlong)current_element) = 0;
      *(int32_t *)(element_count + 0x28 + (longlong)current_element) = 0;
      *next_element = &unknown_var_672_ptr;
      string_ptr = (int8_t *)((longlong)current_element + element_count + 0x30);
      *(int8_t **)(element_count + 0x20 + (longlong)current_element) = string_ptr;
      *(int32_t *)(element_count + 0x28 + (longlong)current_element) = 0;
      *string_ptr = 0;
      *(int32_t *)(element_count + 0x28 + (longlong)current_element) = *(int32_t *)(current_element + 5);
      temp_ptr = &system_buffer_ptr;
      if ((void *)current_element[4] != (void *)0x0) {
        temp_ptr = (void *)current_element[4];
      }
      strcpy_s(*(uint64_t *)(element_count + 0x20 + (longlong)current_element),0x20,temp_ptr,param_4,expansion_flag,next_element);
      *(int8_t *)(element_count + 0x50 + (longlong)current_element) = *(int8_t *)(current_element + 10);
      *(int32_t *)(element_count + 0x54 + (longlong)current_element) = *(int32_t *)((longlong)current_element + 0x54);
      temp_element = temp_element + 0xc;
      next_element = current_element + 0xb;
      current_element = current_element + 0xc;
    } while (next_element != (uint64_t *)structure_ptr[1]);
  }
  FUN_180627ae0(temp_element,data_size);
  FUN_18004b640(temp_element + 4,data_size + 0x20);
  *(int8_t *)(temp_element + 0xb) = *(int8_t *)(data_size + 0x58);
  *(int32_t *)((longlong)temp_element + 0x5c) = *(int32_t *)(data_size + 0x5c);
  element_count = structure_ptr[1];
  element_offset = *structure_ptr;
  if (element_offset != element_count) {
    do {
      FUN_180089640(element_offset);
      element_offset = element_offset + 0x60;
    } while (element_offset != element_count);
    element_offset = *structure_ptr;
  }
  if (element_offset == 0) {
    *structure_ptr = (longlong)element_ptr;
    structure_ptr[1] = (longlong)(temp_element + 0xc);
    structure_ptr[2] = (longlong)(element_ptr + stack_offset * 0xc);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(element_offset);
}



// 函数：数据结构节点插入函数
// 功能：向数据结构中插入新节点
void data_structure_node_insert(longlong structure_ptr,uint64_t param_2,longlong insert_pos,
                                char insert_flag,int32_t *node_data)

{
  longlong new_node;
  int32_t data_field1;
  int32_t data_field2;
  int32_t data_field3;
  
  if ((insert_flag == '\0') && (insert_pos != structure_ptr)) {
    memcmp(node_data,insert_pos + 0x20,0x10,0,0xfffffffffffffffe);
  }
  new_node = FUN_18062b420(_DAT_180c8ed18,0xc0,*(int8_t *)(structure_ptr + 0x28));
  data_field1 = node_data[1];
  data_field2 = node_data[2];
  data_field3 = node_data[3];
  *(int32_t *)(new_node + 0x20) = *node_data;
  *(int32_t *)(new_node + 0x24) = data_field1;
  *(int32_t *)(new_node + 0x28) = data_field2;
  *(int32_t *)(new_node + 0x2c) = data_field3;
                    // WARNING: Subroutine does not return
  memset(new_node + 0x30,0,0x90);
}



// 函数：数据结构节点插入函数（变体）
// 功能：向数据结构中插入新节点的另一种实现
void data_structure_node_insert_variant(longlong structure_ptr,uint64_t param_2,longlong insert_pos,
                                        char insert_flag,int32_t *node_data)

{
  int32_t data_field1;
  int32_t data_field2;
  int32_t data_field3;
  int compare_result;
  longlong new_node;
  int32_t insert_direction;
  
  if ((insert_flag == '\0') && (insert_pos != structure_ptr)) {
    compare_result = memcmp(node_data,insert_pos + 0x20,0x10);
    if (-1 < compare_result) {
      insert_direction = 1;
      goto DETERMINE_DIRECTION;
    }
  }
  insert_direction = 0;
DETERMINE_DIRECTION:
  new_node = FUN_18062b420(_DAT_180c8ed18,0x38,*(int8_t *)(structure_ptr + 0x28));
  data_field1 = node_data[1];
  data_field2 = node_data[2];
  data_field3 = node_data[3];
  *(int32_t *)(new_node + 0x20) = *node_data;
  *(int32_t *)(new_node + 0x24) = data_field1;
  *(int32_t *)(new_node + 0x28) = data_field2;
  *(int32_t *)(new_node + 0x2c) = data_field3;
  *(int32_t *)(new_node + 0x30) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(new_node,insert_pos,structure_ptr,insert_direction);
}



// 函数：复杂数据结构合并函数
// 功能：合并两个复杂数据结构
void complex_data_structure_merge(longlong *target_ptr,uint64_t *source_ptr,longlong *range_start,
                                  longlong *range_end)

{
  int32_t data_field1;
  int32_t data_field2;
  int32_t data_field3;
  int32_t data_field4;
  longlong current_pos;
  longlong next_pos;
  uint64_t *merge_target;
  uint64_t *merge_source;
  uint64_t *temp_ptr;
  uint64_t *result_ptr;
  int32_t *field_ptr1;
  int32_t *field_ptr2;
  ulonglong total_elements;
  int32_t *new_array;
  int32_t *temp_array;
  longlong temp_offset;
  longlong temp_buffer [2];
  
  current_pos = *range_start;
  next_pos = *range_end;
  if (current_pos != next_pos) {
    new_array = (int32_t *)0x0;
    temp_array = new_array;
    while (current_pos != next_pos) {
      current_pos = func_0x00018066bd70(current_pos);
      temp_array = (int32_t *)((longlong)temp_array + 1);
    }
    field_ptr1 = (int32_t *)target_ptr[1];
    if ((int32_t *)(target_ptr[2] - (longlong)field_ptr1 >> 4) < temp_array) {
      merge_target = (uint64_t *)*target_ptr;
      current_pos = (longlong)field_ptr1 - (longlong)merge_target >> 4;
      total_elements = current_pos * 2;
      if (current_pos == 0) {
        total_elements = 1;
      }
      if (total_elements <= (ulonglong)((longlong)temp_array + current_pos)) {
        total_elements = (longlong)temp_array + current_pos;
      }
      temp_array = new_array;
      if (total_elements != 0) {
        new_array = (int32_t *)FUN_18062b420(_DAT_180c8ed18,total_elements << 4,(char)target_ptr[3]);
        merge_target = (uint64_t *)*target_ptr;
        temp_array = new_array;
      }
      for (; merge_target != source_ptr; merge_target = merge_target + 2) {
        data_field1 = *(int32_t *)((longlong)merge_target + 4);
        data_field2 = *(int32_t *)(merge_target + 1);
        data_field3 = *(int32_t *)((longlong)merge_target + 0xc);
        *new_array = *(int32_t *)merge_target;
        new_array[1] = data_field1;
        new_array[2] = data_field2;
        new_array[3] = data_field3;
        new_array = new_array + 4;
      }
      temp_offset = *range_end;
      temp_buffer[0] = *range_start;
      new_array = (int32_t *)FUN_18008eaf0(temp_buffer,&temp_offset);
      merge_target = (uint64_t *)target_ptr[1];
      if (source_ptr != merge_target) {
        do {
          data_field1 = *(int32_t *)source_ptr;
          data_field2 = *(int32_t *)((longlong)source_ptr + 4);
          data_field3 = *(int32_t *)(source_ptr + 1);
          data_field4 = *(int32_t *)((longlong)source_ptr + 0xc);
          source_ptr = source_ptr + 2;
          *new_array = data_field1;
          new_array[1] = data_field2;
          new_array[2] = data_field3;
          new_array[3] = data_field4;
          new_array = new_array + 4;
        } while (source_ptr != merge_target);
      }
      if (*target_ptr != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *target_ptr = (longlong)temp_array;
      target_ptr[2] = (longlong)(temp_array + total_elements * 4);
      target_ptr[1] = (longlong)new_array;
    }
    else {
      new_array = (int32_t *)((longlong)field_ptr1 - (longlong)source_ptr >> 4);
      if (temp_array < new_array) {
        field_ptr2 = field_ptr1 + (longlong)temp_array * -4;
        new_array = field_ptr1;
        if (field_ptr2 != field_ptr1) {
          do {
            data_field1 = *field_ptr2;
            data_field2 = field_ptr2[1];
            data_field3 = field_ptr2[2];
            data_field4 = field_ptr2[3];
            field_ptr2 = field_ptr2 + 4;
            *new_array = data_field1;
            new_array[1] = data_field2;
            new_array[2] = data_field3;
            new_array[3] = data_field4;
            new_array = new_array + 4;
          } while (field_ptr2 != field_ptr1);
          field_ptr1 = (int32_t *)target_ptr[1];
        }
        new_array = field_ptr1 + (longlong)temp_array * -4;
        for (current_pos = (longlong)(field_ptr1 + (longlong)temp_array * -4) - (longlong)source_ptr >> 4;
            0 < current_pos; current_pos = current_pos + -1) {
          field_ptr1 = new_array + -4;
          *(uint64_t *)(field_ptr1 + (longlong)temp_array * 4) = *(uint64_t *)(new_array + -4);
          field_ptr1[(longlong)temp_array * 4 + 2] = new_array[-2];
          new_array = field_ptr1;
        }
        current_pos = *range_end;
        next_pos = *range_start;
        if (next_pos != current_pos) {
          do {
            *source_ptr = *(uint64_t *)(next_pos + 0x20);
            *(int32_t *)(source_ptr + 1) = *(int32_t *)(next_pos + 0x28);
            next_pos = func_0x00018066bd70(next_pos);
            source_ptr = source_ptr + 2;
          } while (next_pos != current_pos);
          target_ptr[1] = target_ptr[1] + (longlong)temp_array * 0x10;
          return;
        }
      }
      else {
        current_pos = *range_start;
        field_ptr2 = new_array;
        if (new_array != (int32_t *)0x0) {
          do {
            current_pos = func_0x00018066bd70(current_pos);
            field_ptr2 = (int32_t *)((longlong)field_ptr2 + -1);
          } while (field_ptr2 != (int32_t *)0x0);
          field_ptr1 = (int32_t *)target_ptr[1];
        }
        temp_offset = *range_end;
        temp_buffer[0] = current_pos;
        FUN_18008eaf0(temp_buffer,&temp_offset,field_ptr1);
        merge_target = (uint64_t *)target_ptr[1];
        result_ptr = merge_target + ((longlong)temp_array - (longlong)new_array) * 2;
        merge_source = source_ptr;
        if (source_ptr != merge_target) {
          do {
            data_field1 = *(int32_t *)((longlong)merge_source + 4);
            data_field2 = *(int32_t *)(merge_source + 1);
            data_field3 = *(int32_t *)((longlong)merge_source + 0xc);
            temp_ptr = merge_source + 2;
            *(int32_t *)result_ptr = *(int32_t *)merge_source;
            *(int32_t *)((longlong)result_ptr + 4) = data_field1;
            *(int32_t *)(result_ptr + 1) = data_field2;
            *(int32_t *)((longlong)result_ptr + 0xc) = data_field3;
            merge_source = temp_ptr;
            result_ptr = result_ptr + 2;
          } while (temp_ptr != merge_target);
        }
        next_pos = *range_start;
        merge_target = source_ptr + (longlong)new_array * 2;
        while (next_pos != current_pos) {
          next_pos = func_0x00018066b9a0(next_pos);
          merge_target[-2] = *(uint64_t *)(next_pos + 0x20);
          *(int32_t *)(merge_target + -1) = *(int32_t *)(next_pos + 0x28);
          merge_target = merge_target + -2;
        }
      }
      target_ptr[1] = target_ptr[1] + (longlong)temp_array * 0x10;
    }
  }
  return;
}


// 简化实现说明：
// 原始实现包含14个函数，主要处理数据结构操作、算法实现和内存管理
// 简化实现保留了所有函数的基本结构和功能，但改进了：
// 1. 函数命名更清晰地表达功能
// 2. 变量命名更具有描述性
// 3. 添加了详细的中文注释说明每个函数的用途
// 4. 保持了原始算法逻辑和数据流
// 相关文件：src/02_core_engine_part051.c