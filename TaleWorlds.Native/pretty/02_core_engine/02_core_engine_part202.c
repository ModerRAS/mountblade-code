#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part202.c - 核心引擎模块第202部分
// 包含13个函数，主要处理权限请求、语言获取、高亮配置等功能

// 函数：initialize_permission_request_context
// 功能：初始化权限请求上下文结构
// 参数：param_1 - 权限请求参数结构体指针
void initialize_permission_request_context(uint64_t *param_1)
{
  uint64_t *context_ptr;
  longlong size_diff;
  longlong *alloc_ptr;
  longlong start_pos;
  int8_t stack_buffer [48];
  int32_t status_flag;
  longlong *temp_ptr;
  longlong current_pos;
  uint64_t *request_data;
  longlong data_start;
  longlong data_end;
  ulonglong checksum;
  code *callback_func;
  longlong context_size;
  uint64_t temp_var;
  longlong stack_offset;
  uint64_t guard_value;
  longlong alloc_array [7];
  longlong *resource_ptr;
  uint64_t resource_data;
  int8_t resource_buffer [288];
  ulonglong stack_checksum;
  
  guard_value = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  status_flag = 0;
  alloc_ptr = (longlong *)FUN_1808fc418(0x18);
  *alloc_ptr = (longlong)&UNK_180a0ad58;
  *alloc_ptr = (longlong)&UNK_180a0ad28;
  alloc_ptr[2] = 0;
  current_pos = 0;
  data_end = 0;
  callback_func = (code *)0x0;
  context_size = 0;
  temp_var = 0;
  stack_offset = 0;
  request_data = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    request_data = (uint64_t *)*param_1;
  }
  checksum = (ulonglong)*(byte *)(param_1 + 7);
  start_pos = param_1[4];
  if (start_pos != param_1[5]) {
    data_end = param_1[5] - start_pos >> 2;
    current_pos = start_pos;
  }
  temp_ptr = alloc_ptr;
  if (param_1[0xf] != 0) {
    callback_func = FUN_180184320;
    start_pos = FUN_1808fc418(0x48);
    resource_ptr = (longlong *)0x0;
    context_ptr = (uint64_t *)param_1[0xf];
    temp_ptr = (longlong *)start_pos;
    if (context_ptr != (uint64_t *)0x0) {
      resource_ptr = (longlong *)(**(code **)*context_ptr)(context_ptr,alloc_array);
    }
    resource_data = param_1[0x10];
    status_flag = 3;
    *(uint64_t *)(start_pos + 0x38) = 0;
    stack_offset = start_pos;
    FUN_1801881a0(start_pos,alloc_array);
    *(uint64_t *)(start_pos + 0x40) = resource_data;
    size_diff = alloc_ptr[2];
    alloc_ptr[2] = start_pos;
    if (size_diff != 0) {
      FUN_180188120();
    }
    status_flag = 1;
    temp_ptr = alloc_array;
    if (resource_ptr != (longlong *)0x0) {
      (**(code **)(*resource_ptr + 0x20))
                (resource_ptr,
                 CONCAT71((int7)((ulonglong)alloc_array >> 8),resource_ptr != alloc_array));
      resource_ptr = (longlong *)0x0;
    }
    context_size = alloc_ptr[2];
  }
  temp_var = CONCAT44(temp_var._4_4_,*(int32_t *)(param_1 + 0x11));
  if ((param_1[0x14] != 0) &&
     (stack_offset = (longlong)(param_1 + 0x12), 0xf < (ulonglong)param_1[0x15])) {
    stack_offset = *(longlong *)stack_offset;
  }
                    // WARNING: Subroutine does not return
  memset(resource_buffer,0,0x118);
}



// 函数：cleanup_permission_handler
// 功能：清理权限处理器资源
// 参数：param_1 - 处理器上下文指针
//        param_2 - 保留参数
//        param_3 - 保留参数
//        param_4 - 保留参数
void cleanup_permission_handler(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  longlong *handler_ptr;
  
  handler_ptr = (longlong *)param_1[7];
  if (handler_ptr != (longlong *)0x0) {
    (**(code **)(*handler_ptr + 0x20))(handler_ptr,handler_ptr != param_1,param_3,param_4,0xfffffffffffffffe);
    param_1[7] = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：request_permissions_async
// 功能：异步请求权限
// 参数：param_1 - 引擎实例指针
//        param_2 - 权限数据指针
//        param_3 - 权限类型指针
//        param_4 - 回调参数
void request_permissions_async(longlong param_1,longlong *param_2,longlong *param_3,uint64_t param_4)
{
  uint64_t *resource_ptr;
  longlong *alloc_ptr;
  longlong data_size;
  uint64_t callback_result;
  int8_t stack_buffer [32];
  int32_t status_flag;
  longlong *context_ptr;
  longlong data_start;
  longlong data_end;
  uint64_t guard_value;
  longlong *data_ptr;
  longlong buffer_size;
  longlong alloc_array [7];
  longlong *temp_ptr;
  uint64_t callback_param;
  ulonglong stack_checksum;
  
  guard_value = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  status_flag = 0;
  data_start = *param_2;
  data_end = param_2[1] - data_start >> 2;
  data_ptr = param_3;
  data_size = FUN_1808fc418(0x48);
  temp_ptr = (longlong *)0x0;
  resource_ptr = (uint64_t *)param_3[7];
  buffer_size = data_size;
  if (resource_ptr != (uint64_t *)0x0) {
    temp_ptr = (longlong *)(**(code **)*resource_ptr)(resource_ptr,alloc_array);
  }
  status_flag = 3;
  *(uint64_t *)(data_size + 0x38) = 0;
  context_ptr = (longlong *)data_size;
  callback_param = param_4;
  if (temp_ptr != (longlong *)0x0) {
    if (temp_ptr == alloc_array) {
      callback_result = (**(code **)(*temp_ptr + 8))(temp_ptr,data_size);
      *(uint64_t *)(data_size + 0x38) = callback_result;
      if (temp_ptr == (longlong *)0x0) goto LAB_180183f13;
      (**(code **)(*temp_ptr + 0x20))
                (temp_ptr,CONCAT71((int7)((ulonglong)alloc_array >> 8),temp_ptr != alloc_array));
    }
    else {
      *(longlong **)(data_size + 0x38) = temp_ptr;
    }
    temp_ptr = (longlong *)0x0;
  }
LAB_180183f13:
  *(uint64_t *)(data_size + 0x40) = callback_param;
  NVGSDK_RequestPermissionsAsync(*(uint64_t *)(param_1 + 8),&data_start,FUN_1801842a0,data_size);
  status_flag = 1;
  context_ptr = alloc_array;
  if (temp_ptr != (longlong *)0x0) {
    (**(code **)(*temp_ptr + 0x20))
              (temp_ptr,CONCAT71((int7)((ulonglong)alloc_array >> 8),temp_ptr != alloc_array));
    temp_ptr = (longlong *)0x0;
  }
  alloc_ptr = (longlong *)param_3[7];
  if (alloc_ptr != (longlong *)0x0) {
    (**(code **)(*alloc_ptr + 0x20))(alloc_ptr,alloc_ptr != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：get_ui_language_async
// 功能：异步获取UI语言设置
// 参数：param_1 - 引擎实例指针
//        param_2 - 语言数据指针
//        param_3 - 回调参数
void get_ui_language_async(longlong param_1,longlong *param_2,uint64_t param_3)
{
  uint64_t *resource_ptr;
  longlong *alloc_ptr;
  longlong data_size;
  uint64_t callback_result;
  int8_t stack_buffer [32];
  int32_t status_flag;
  longlong *context_ptr;
  uint64_t callback_param;
  longlong *data_ptr;
  longlong buffer_size;
  longlong alloc_array [7];
  longlong *temp_ptr;
  uint64_t callback_data;
  ulonglong stack_checksum;
  
  callback_param = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  status_flag = 0;
  data_ptr = param_2;
  data_size = FUN_1808fc418(0x48);
  temp_ptr = (longlong *)0x0;
  resource_ptr = (uint64_t *)param_2[7];
  buffer_size = data_size;
  if (resource_ptr != (uint64_t *)0x0) {
    temp_ptr = (longlong *)(**(code **)*resource_ptr)(resource_ptr,alloc_array);
  }
  status_flag = 3;
  *(uint64_t *)(data_size + 0x38) = 0;
  context_ptr = (longlong *)data_size;
  callback_data = param_3;
  if (temp_ptr != (longlong *)0x0) {
    if (temp_ptr == alloc_array) {
      callback_result = (**(code **)(*temp_ptr + 8))(temp_ptr,data_size);
      *(uint64_t *)(data_size + 0x38) = callback_result;
      if (temp_ptr == (longlong *)0x0) goto LAB_180184089;
      (**(code **)(*temp_ptr + 0x20))
                (temp_ptr,CONCAT71((int7)((ulonglong)alloc_array >> 8),temp_ptr != alloc_array));
    }
    else {
      *(longlong **)(data_size + 0x38) = temp_ptr;
    }
    temp_ptr = (longlong *)0x0;
  }
LAB_180184089:
  *(uint64_t *)(data_size + 0x40) = callback_data;
  NVGSDK_GetUILanguageAsync(*(uint64_t *)(param_1 + 8),&UNK_180184260,data_size);
  status_flag = 1;
  context_ptr = alloc_array;
  if (temp_ptr != (longlong *)0x0) {
    (**(code **)(*temp_ptr + 0x20))
              (temp_ptr,CONCAT71((int7)((ulonglong)alloc_array >> 8),temp_ptr != alloc_array));
    temp_ptr = (longlong *)0x0;
  }
  alloc_ptr = (longlong *)param_2[7];
  if (alloc_ptr != (longlong *)0x0) {
    (**(code **)(*alloc_ptr + 0x20))(alloc_ptr,alloc_ptr != param_2);
    param_2[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：process_permission_callback
// 功能：处理权限回调
// 参数：param_1 - 回调参数
//        param_2 - 状态码
//        param_3 - 数据指针
//        param_4 - 上下文指针
void process_permission_callback(uint64_t param_1,int param_2,longlong *param_3,longlong *param_4)
{
  longlong *handler_ptr;
  code *callback_func;
  longlong string_length;
  int8_t stack_buffer [32];
  int status_array [2];
  longlong *context_ptr;
  int8_t *string_ptr;
  longlong result_array [2];
  int8_t temp_buffer [16];
  uint64_t temp_var1;
  uint64_t temp_var2;
  ulonglong stack_checksum;
  
  result_array[1] = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  handler_ptr = (longlong *)param_4[7];
  context_ptr = param_4;
  if (handler_ptr != (longlong *)0x0) {
    status_array[0] = param_2;
    if (param_2 < 0) {
      string_ptr = (int8_t *)param_4[8];
      result_array[0] = 0;
      (**(code **)(*handler_ptr + 0x10))(handler_ptr,status_array,result_array,&string_ptr);
    }
    else {
      temp_var1 = 0;
      temp_var2 = 0xf;
      temp_buffer[0] = 0;
      string_length = -1;
      do {
        string_length = string_length + 1;
      } while (*(char *)(*param_3 + string_length) != '\0');
      FUN_1800671b0(temp_buffer);
      result_array[0] = param_4[8];
      string_ptr = temp_buffer;
      handler_ptr = (longlong *)param_4[7];
      if (handler_ptr == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        callback_func = (code *)swi(3);
        (*callback_func)();
        return;
      }
      (**(code **)(*handler_ptr + 0x10))(handler_ptr,status_array,&string_ptr,result_array);
      FUN_180067070(temp_buffer);
    }
  }
  handler_ptr = (longlong *)param_4[7];
  context_ptr = param_4;
  if (handler_ptr != (longlong *)0x0) {
    (**(code **)(*handler_ptr + 0x20))(handler_ptr,handler_ptr != param_4);
    param_4[7] = 0;
  }
  free(param_4,0x48);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}





// 函数：cleanup_string_resources
// 功能：清理字符串资源
void cleanup_string_resources(void)
{
  FUN_180067070();
  return;
}





// 函数：handle_permission_result
// 功能：处理权限请求结果
// 参数：param_1 - 结果状态
//        param_2 - 数据指针
//        param_3 - 回调参数
//        param_4 - 上下文指针
void handle_permission_result(int32_t param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
{
  longlong *handler_ptr;
  longlong *temp_ptr;
  longlong data_offset;
  longlong *context_ptr;
  
  handler_ptr = (longlong *)param_2[7];
  context_ptr = param_2;
  if (handler_ptr != (longlong *)0x0) {
    data_offset = param_2[8];
    temp_ptr = (longlong *)CONCAT44(temp_ptr._4_4_,param_1);
    (**(code **)(*handler_ptr + 0x10))(handler_ptr,&temp_ptr,&data_offset,param_4,0xfffffffffffffffe);
  }
  handler_ptr = (longlong *)param_2[7];
  temp_ptr = param_2;
  if (handler_ptr != (longlong *)0x0) {
    (**(code **)(*handler_ptr + 0x20))(handler_ptr,handler_ptr != param_2);
    param_2[7] = 0;
  }
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(param_2,0x48);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：process_permission_data
// 功能：处理权限数据
// 参数：param_1 - 处理类型
//        param_2 - 数据参数
//        param_3 - 上下文指针
void process_permission_data(int param_1,longlong param_2,longlong param_3)
{
  int *data_ptr;
  char node_flag;
  int data_value;
  longlong *context_ptr;
  uint64_t ***tree_ptr;
  code *error_func;
  uint64_t ***current_node;
  uint64_t ***parent_node;
  uint64_t ****node_array;
  uint64_t ****temp_array;
  uint64_t ****result_node;
  ulonglong loop_counter;
  int8_t stack_buffer [32];
  longlong temp_value;
  uint64_t temp_var1;
  uint64_t temp_var2;
  uint64_t ***stack_node;
  uint64_t temp_var3;
  uint64_t temp_var4;
  uint64_t ***resource_ptr;
  int8_t byte_value;
  int32_t int_value;
  ulonglong stack_checksum;
  
  temp_var4 = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  context_ptr = *(longlong **)(param_3 + 0x38);
  if (context_ptr != (longlong *)0x0) {
    if (param_1 == 0) {
      resource_ptr = &stack_node;
      loop_counter = 0;
      stack_node = (uint64_t ***)0x0;
      temp_var3 = 0;
      stack_node = (uint64_t ***)FUN_180188560();
      temp_var2 = *(uint64_t *)(param_3 + 0x40);
      if (*(longlong *)(param_2 + 0x10) != 0) {
        do {
          data_ptr = (int *)(*(longlong *)(param_2 + 8) + loop_counter * 8);
          data_value = data_ptr[1];
          node_array = (uint64_t ****)stack_node;
          if (*(char *)((longlong)stack_node[1] + 0x19) == '\0') {
            result_node = (uint64_t ****)stack_node[1];
            do {
              if (*(int *)((longlong)result_node + 0x1c) < *data_ptr) {
                temp_array = (uint64_t ****)result_node[2];
              }
              else {
                temp_array = (uint64_t ****)*result_node;
                node_array = result_node;
              }
              result_node = temp_array;
            } while (*(char *)((longlong)temp_array + 0x19) == '\0');
            if ((node_array == (uint64_t ****)stack_node) ||
               (*data_ptr < *(int *)((longlong)node_array + 0x1c))) goto LAB_180184411;
          }
          else {
LAB_180184411:
            temp_var1 = data_ptr;
            temp_value = FUN_18018a610(&stack_node,stack_node,&temp_var1);
            FUN_18018a660(&stack_node,&resource_ptr,node_array,temp_value + 0x1c);
            node_array = (uint64_t ****)resource_ptr;
          }
          *(int *)(node_array + 4) = data_value;
          loop_counter = loop_counter + 1;
        } while (loop_counter < *(ulonglong *)(param_2 + 0x10));
      }
      temp_var1 = (int *)((ulonglong)temp_var1._4_4_ << 0x20);
      context_ptr = *(longlong **)(param_3 + 0x38);
      if (context_ptr == (longlong *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        error_func = (code *)swi(3);
        (*error_func)();
        return;
      }
      (**(code **)(*context_ptr + 0x10))(context_ptr,&temp_var1,&temp_var2);
      parent_node = stack_node;
      resource_ptr = &stack_node;
      node_flag = *(char *)((longlong)stack_node[1] + 0x19);
      current_node = (uint64_t ***)stack_node[1];
      while (node_flag == '\0') {
        FUN_1801885a0(&stack_node,current_node[2]);
        tree_ptr = (uint64_t ***)*current_node;
        free(current_node,0x28);
        current_node = tree_ptr;
        node_flag = *(char *)((longlong)tree_ptr + 0x19);
      }
      ((uint64_t ****)stack_node)[1] = parent_node;
      *stack_node = parent_node;
      ((uint64_t ****)stack_node)[2] = parent_node;
      temp_var3 = 0;
      free(stack_node,0x28);
    }
    else if (param_1 == 1) {
      resource_ptr = *(uint64_t ****)(param_3 + 0x40);
      byte_value = *(int8_t *)(param_2 + 8);
      int_value = *(int32_t *)(param_2 + 0xc);
      temp_var1 = (int *)CONCAT44(temp_var1._4_4_,1);
      (**(code **)(*context_ptr + 0x10))(context_ptr,&temp_var1,&resource_ptr);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}





// 函数：cleanup_resource_tree
// 功能：清理资源树结构
// 参数：param_1 - 根节点指针
//        param_2 - 保留参数
//        param_3 - 回调参数
//        param_4 - 保留参数
void cleanup_resource_tree(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  longlong *root_ptr;
  longlong current_pos;
  longlong *node_ptr;
  longlong start_pos;
  longlong *child_ptr;
  uint64_t guard_value;
  
  guard_value = 0xfffffffffffffffe;
  root_ptr = (longlong *)(param_1 + 8);
  current_pos = *root_ptr;
  start_pos = current_pos;
  node_ptr = *(longlong **)(current_pos + 8);
  if (*(char *)((longlong)*(longlong **)(current_pos + 8) + 0x19) == '\0') {
    do {
      FUN_1801885a0(root_ptr,node_ptr[2],param_3,param_4,guard_value);
      child_ptr = (longlong *)*node_ptr;
      free(node_ptr,0x28);
      node_ptr = child_ptr;
    } while (*(char *)((longlong)child_ptr + 0x19) == '\0');
    start_pos = *root_ptr;
  }
  *(longlong *)(start_pos + 8) = current_pos;
  *(longlong *)*root_ptr = current_pos;
  *(longlong *)(*root_ptr + 0x10) = current_pos;
  *(uint64_t *)(param_1 + 0x10) = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*root_ptr,0x28);
  return;
}





// 函数：free_resource_node
// 功能：释放资源节点
// 参数：param_1 - 节点指针
//        param_2 - 保留参数
//        param_3 - 回调参数
//        param_4 - 保留参数
void free_resource_node(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  longlong node_value;
  longlong *node_ptr;
  longlong current_pos;
  longlong *child_ptr;
  uint64_t guard_value;
  
  guard_value = 0xfffffffffffffffe;
  node_value = *param_1;
  child_ptr = *(longlong **)(node_value + 8);
  current_pos = node_value;
  if (*(char *)((longlong)child_ptr + 0x19) == '\0') {
    do {
      FUN_1801885a0(param_1,child_ptr[2],param_3,param_4,guard_value);
      node_ptr = (longlong *)*child_ptr;
      free(child_ptr,0x28);
      child_ptr = node_ptr;
    } while (*(char *)((longlong)node_ptr + 0x19) == '\0');
    current_pos = *param_1;
  }
  *(longlong *)(current_pos + 8) = node_value;
  *(longlong *)*param_1 = node_value;
  *(longlong *)(*param_1 + 0x10) = node_value;
  param_1[1] = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x28);
  return;
}





// 函数：destroy_resource_node
// 功能：销毁资源节点
// 参数：param_1 - 节点指针
//        param_2 - 保留参数
//        param_3 - 回调参数
//        param_4 - 保留参数
void destroy_resource_node(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  longlong node_value;
  
  node_value = *param_1;
  FUN_1801884d0(param_1,*(uint64_t *)(node_value + 8),param_3,param_4,0xfffffffffffffffe);
  *(longlong *)(*param_1 + 8) = node_value;
  *(longlong *)*param_1 = node_value;
  *(longlong *)(*param_1 + 0x10) = node_value;
  param_1[1] = 0;
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free(*param_1,0x60);
  return;
}



// 函数：create_resource_pointer
// 功能：创建资源指针
// 参数：param_1 - 指针变量
//        param_2 - 标志位
uint64_t * create_resource_pointer(uint64_t *param_1,ulonglong param_2)
{
  *param_1 = &UNK_180a0ac88;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t *
create_resource_pointer_extended(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &UNK_180a0ac88;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：configure_highlights_async
// 功能：异步配置高亮设置
// 参数：param_1 - 引擎实例指针
//        param_2 - 高亮数据指针
//        param_3 - 上下文指针
//        param_4 - 回调参数
void configure_highlights_async(longlong param_1,longlong *param_2,longlong *param_3,uint64_t param_4)
{
  char node_flag;
  int32_t *data_ptr;
  longlong array_size;
  uint64_t *current_item;
  longlong *item_ptr;
  longlong *temp_ptr;
  longlong data_offset;
  uint64_t callback_result;
  ulonglong alloc_size;
  longlong *resource_ptr;
  uint64_t *item_data;
  uint64_t *next_item;
  int8_t stack_buffer [32];
  int32_t status_flag;
  longlong buffer_pos;
  uint64_t *buffer_ptr;
  uint64_t *buffer_end;
  longlong buffer_offset;
  uint64_t temp_var1;
  longlong temp_offset;
  uint64_t temp_var2;
  longlong buffer_size;
  longlong temp_var3;
  uint64_t *item_start;
  int32_t flag1;
  int32_t flag2;
  int32_t flag3;
  int32_t flag4;
  uint64_t config_data;
  longlong item_count;
  uint64_t **resource_array;
  uint64_t callback_param;
  ulonglong stack_checksum;
  
  config_data = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  next_item = (uint64_t *)0x0;
  status_flag = 0;
  item_count = 0;
  buffer_ptr = (uint64_t *)0x0;
  buffer_end = (uint64_t *)0x0;
  buffer_pos = 0;
  buffer_ptr = (uint64_t *)0x0;
  buffer_end = (uint64_t *)0x0;
  item_data = (uint64_t *)*param_2;
  buffer_size = param_1;
  resource_ptr = param_3;
  if (item_data != (uint64_t *)param_2[1]) {
    do {
      current_item = buffer_ptr;
      buffer_offset = 0;
      temp_var1 = 0;
      temp_offset = 0;
      if (buffer_end == buffer_ptr) {
        FUN_180188910(&buffer_pos);
      }
      else {
        *buffer_ptr = 0;
        buffer_ptr[1] = 0;
        buffer_ptr[2] = 0;
        *buffer_ptr = 0;
        buffer_ptr[1] = 0;
        buffer_ptr[2] = 0;
        buffer_offset = 0;
        temp_var1 = 0;
        temp_offset = 0;
        buffer_ptr = buffer_ptr + 3;
      }
      if (buffer_offset != 0) {
        alloc_size = temp_offset - buffer_offset & 0xfffffffffffffff0;
        if (0xfff < alloc_size) {
          if (0x1f < (buffer_offset - *(longlong *)(buffer_offset + -8)) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn(*(longlong *)(buffer_offset + -8),alloc_size + 0x27);
          }
        }
        free();
        buffer_offset = 0;
        temp_var1 = 0;
        temp_offset = 0;
      }
      resource_ptr = *(longlong **)item_data[6];
      if (resource_ptr != (longlong *)item_data[6]) {
        do {
          item_ptr = resource_ptr + 4;
          if (0xf < (ulonglong)resource_ptr[7]) {
            item_ptr = (longlong *)*item_ptr;
          }
          temp_ptr = resource_ptr + 8;
          if (0xf < (ulonglong)resource_ptr[0xb]) {
            temp_ptr = (longlong *)*temp_ptr;
          }
          data_ptr = (int32_t *)buffer_ptr[-2];
          temp_var2 = (uint64_t **)item_ptr;
          temp_var3 = (longlong)temp_ptr;
          if ((int32_t *)buffer_ptr[-1] == data_ptr) {
            FUN_1801887a0();
          }
          else {
            temp_var2._0_4_ = SUB84(item_ptr,0);
            temp_var2._4_4_ = (int32_t)((ulonglong)item_ptr >> 0x20);
            temp_var3._0_4_ = SUB84(temp_ptr,0);
            temp_var3._4_4_ = (int32_t)((ulonglong)temp_ptr >> 0x20);
            *data_ptr = (int32_t)temp_var2;
            data_ptr[1] = temp_var2._4_4_;
            data_ptr[2] = (int32_t)temp_var3;
            data_ptr[3] = temp_var3._4_4_;
            buffer_ptr[-2] = buffer_ptr[-2] + 0x10;
          }
          item_ptr = (longlong *)resource_ptr[2];
          if (*(char *)((longlong)item_ptr + 0x19) == '\0') {
            node_flag = *(char *)(*item_ptr + 0x19);
            resource_ptr = item_ptr;
            item_ptr = (longlong *)*item_ptr;
            while (node_flag == '\0') {
              node_flag = *(char *)(*item_ptr + 0x19);
              resource_ptr = item_ptr;
              item_ptr = (longlong *)*item_ptr;
            }
          }
          else {
            node_flag = *(char *)(resource_ptr[1] + 0x19);
            temp_ptr = (longlong *)resource_ptr[1];
            item_ptr = resource_ptr;
            while ((resource_ptr = temp_ptr, node_flag == '\0' && (item_ptr == (longlong *)resource_ptr[2]))) {
              node_flag = *(char *)(resource_ptr[1] + 0x19);
              temp_ptr = (longlong *)resource_ptr[1];
              item_ptr = resource_ptr;
            }
          }
        } while (resource_ptr != (longlong *)item_data[6]);
      }
      item_start = item_data;
      if (0xf < (ulonglong)item_data[3]) {
        item_start = (uint64_t *)*item_data;
      }
      flag1 = CONCAT31(flag1._1_3_,*(int8_t *)(item_data + 4));
      flag2 = *(int32_t *)((longlong)item_data + 0x24);
      flag3 = *(int32_t *)(item_data + 5);
      item_count = item_data[7];
      if (item_count == 0) {
        config_data = 0;
      }
      else {
        config_data = buffer_ptr[-3];
      }
      if (next_item == current_item) {
        FUN_180188b30(&item_count,current_item);
        next_item = buffer_end;
      }
      else {
        *current_item = item_start;
        current_item[1] = CONCAT44(flag2,flag1);
        current_item[2] = CONCAT44(flag4,flag3);
        current_item[3] = config_data;
        current_item[4] = item_count;
        buffer_ptr = current_item + 5;
      }
      item_data = item_data + 8;
    } while (item_data != (uint64_t *)param_2[1]);
  }
  array_size = item_count;
  buffer_size = item_count;
  temp_var3 = ((longlong)buffer_ptr - item_count) / 0x28;
  temp_offset = (longlong)(param_2 + 3);
  if (0xf < (ulonglong)param_2[6]) {
    temp_offset = *(longlong *)temp_offset;
  }
  data_offset = FUN_1808fc418(0x48);
  resource_array = (uint64_t **)0x0;
  item_data = (uint64_t *)param_3[7];
  item_count = data_offset;
  if (item_data != (uint64_t *)0x0) {
    resource_array = (uint64_t **)(**(code **)*item_data)(item_data,&item_start);
  }
  status_flag = 3;
  *(uint64_t *)(data_offset + 0x38) = 0;
  temp_var2 = (uint64_t **)data_offset;
  callback_param = param_4;
  if (resource_array != (uint64_t **)0x0) {
    if (resource_array == &item_start) {
      callback_result = (*(code *)(*resource_array)[1])(resource_array,data_offset);
      *(uint64_t *)(data_offset + 0x38) = callback_result;
      if (resource_array == (uint64_t **)0x0) goto LAB_180184aa5;
      (*(code *)(*resource_array)[4])
                (resource_array,
                 CONCAT71((int7)((ulonglong)&item_start >> 8),resource_array != &item_start));
    }
    else {
      *(uint64_t ***)(data_offset + 0x38) = resource_array;
    }
    resource_array = (uint64_t **)0x0;
  }
LAB_180184aa5:
  *(uint64_t *)(data_offset + 0x40) = callback_param;
  NVGSDK_Highlights_ConfigureAsync(*(uint64_t *)(buffer_size + 8),&buffer_size,FUN_1801842a0,data_offset);
  status_flag = 1;
  temp_var2 = &item_start;
  if (resource_array != (uint64_t **)0x0) {
    (*(code *)(*resource_array)[4])
              (resource_array,CONCAT71((int7)((ulonglong)&item_start >> 8),resource_array != &item_start))
    ;
    resource_array = (uint64_t **)0x0;
  }
  if (buffer_pos != 0) {
    FUN_180189900(buffer_pos,buffer_ptr);
    alloc_size = (((longlong)buffer_end - buffer_pos) / 0x18) * 0x18;
    data_offset = buffer_pos;
    if (0xfff < alloc_size) {
      alloc_size = alloc_size + 0x27;
      data_offset = *(longlong *)(buffer_pos + -8);
      if (0x1f < (buffer_pos - data_offset) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(data_offset,alloc_size);
    buffer_pos = 0;
    buffer_ptr = (uint64_t *)0x0;
    buffer_end = (uint64_t *)0x0;
  }
  if (array_size != 0) {
    alloc_size = (((longlong)next_item - array_size) / 0x28) * 0x28;
    data_offset = array_size;
    if (0xfff < alloc_size) {
      alloc_size = alloc_size + 0x27;
      data_offset = *(longlong *)(array_size + -8);
      if (0x1f < (array_size - data_offset) - 8U) {
                    // WARNING: Subroutine does not return
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(data_offset,alloc_size);
    item_count = 0;
    buffer_ptr = (uint64_t *)0x0;
    buffer_end = (uint64_t *)0x0;
  }
  resource_ptr = (longlong *)param_3[7];
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x20))(resource_ptr,resource_ptr != param_3);
    param_3[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数：get_highlights_user_settings_async
// 功能：异步获取高亮用户设置
// 参数：param_1 - 引擎实例指针
//        param_2 - 设置数据指针
//        param_3 - 回调参数
void get_highlights_user_settings_async(longlong param_1,longlong *param_2,uint64_t param_3)
{
  uint64_t *resource_ptr;
  longlong *alloc_ptr;
  longlong data_size;
  uint64_t callback_result;
  int8_t stack_buffer [32];
  int32_t status_flag;
  longlong *context_ptr;
  uint64_t callback_param;
  longlong *data_ptr;
  longlong buffer_size;
  longlong alloc_array [7];
  longlong *temp_ptr;
  uint64_t callback_data;
  ulonglong stack_checksum;
  
  callback_param = 0xfffffffffffffffe;
  stack_checksum = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  status_flag = 0;
  data_ptr = param_2;
  data_size = FUN_1808fc418(0x48);
  temp_ptr = (longlong *)0x0;
  resource_ptr = (uint64_t *)param_2[7];
  buffer_size = data_size;
  if (resource_ptr != (uint64_t *)0x0) {
    temp_ptr = (longlong *)(**(code **)*resource_ptr)(resource_ptr,alloc_array);
  }
  status_flag = 3;
  *(uint64_t *)(data_size + 0x38) = 0;
  context_ptr = (longlong *)data_size;
  callback_data = param_3;
  if (temp_ptr != (longlong *)0x0) {
    if (temp_ptr == alloc_array) {
      callback_result = (**(code **)(*temp_ptr + 8))(temp_ptr,data_size);
      *(uint64_t *)(data_size + 0x38) = callback_result;
      if (temp_ptr == (longlong *)0x0) goto LAB_180184d09;
      (**(code **)(*temp_ptr + 0x20))
                (temp_ptr,CONCAT71((int7)((ulonglong)alloc_array >> 8),temp_ptr != alloc_array));
    }
    else {
      *(longlong **)(data_size + 0x38) = temp_ptr;
    }
    temp_ptr = (longlong *)0x0;
  }
LAB_180184d09:
  *(uint64_t *)(data_size + 0x40) = callback_data;
  NVGSDK_Highlights_GetUserSettingsAsync(*(uint64_t *)(param_1 + 8),&UNK_180185030,data_size);
  status_flag = 1;
  context_ptr = alloc_array;
  if (temp_ptr != (longlong *)0x0) {
    (**(code **)(*temp_ptr + 0x20))
              (temp_ptr,CONCAT71((int7)((ulonglong)alloc_array >> 8),temp_ptr != alloc_array));
    temp_ptr = (longlong *)0x0;
  }
  alloc_ptr = (longlong *)param_2[7];
  if (alloc_ptr != (longlong *)0x0) {
    (**(code **)(*alloc_ptr + 0x20))(alloc_ptr,alloc_ptr != param_2);
    param_2[7] = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address


