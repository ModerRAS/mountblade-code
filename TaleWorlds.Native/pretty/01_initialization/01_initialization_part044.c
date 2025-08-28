#include "TaleWorlds.Native.Split.h"

// 01_initialization_part044.c - 11 个函数

/**
 * 初始化系统配置参数
 * 主要功能：根据系统状态初始化配置参数，处理各种条件分支
 * 
 * 原始实现：FUN_180073730
 * 简化实现：系统配置初始化函数
 */
void initialize_system_config_parameters(undefined8 config_handle, undefined8 param_2)

{
  undefined *interface_ptr;      // 接口指针
  char status_flag;              // 状态标志
  undefined4 stack_config [4];   // 栈配置数组
  undefined *stack_ptr;          // 栈指针
  longlong stack_value;          // 栈值
  
  FUN_1800623b0(_DAT_180c86928,0,0x100000000,1,&UNK_1809ff938,param_2,0xfffffffffffffffe);
  if (DAT_180c82860 == '\0') {
    stack_config[0] = 0xff00ff00;
    FUN_180627910(&stack_ptr,param_2);
    interface_ptr = *(undefined **)*_DAT_180c8ed08;
    if (interface_ptr == &UNK_18098bb88) {
      status_flag = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      status_flag = (**(code **)(interface_ptr + 0x50))((undefined8 *)*_DAT_180c8ed08);
    }
    if (status_flag == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1],&stack_ptr,stack_config);
    }
    stack_ptr = &UNK_180a3c3e0;
    if (stack_value != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统配置参数（变体1）
 * 主要功能：与主函数类似，但使用不同的参数配置和标志位
 * 
 * 原始实现：FUN_180073830
 * 简化实现：系统配置初始化变体函数
 */
void initialize_system_config_parameters_variant1(undefined8 config_handle, undefined4 config_param, undefined8 param_3)

{
  undefined *interface_ptr;      // 接口指针
  char status_flag;              // 状态标志
  undefined4 stack_params [2];   // 栈参数数组
  undefined *stack_ptr;          // 栈指针
  longlong stack_value;          // 栈值
  
  FUN_1800623b0(_DAT_180c86928,0,0x100000000,0xc,&UNK_1809ff958,param_3,0xfffffffffffffffe);
  if (DAT_180c82860 == '\0') {
    stack_params[0] = config_param;
    FUN_180627910(&stack_ptr,param_3);
    interface_ptr = *(undefined **)*_DAT_180c8ed08;
    if (interface_ptr == &UNK_18098bb88) {
      status_flag = *(int *)(_DAT_180c8a9c8 + 0xc40) != 0;
    }
    else {
      status_flag = (**(code **)(interface_ptr + 0x50))((undefined8 *)*_DAT_180c8ed08);
    }
    if (status_flag == '\0') {
      (**(code **)(*(longlong *)_DAT_180c8ed08[1] + 0x18))
                ((longlong *)_DAT_180c8ed08[1],&stack_ptr,stack_params);
    }
    stack_ptr = &UNK_180a3c3e0;
    if (stack_value != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}





/**
 * 初始化配置管理器
 * 主要功能：初始化系统配置管理器，设置各种参数和状态
 * 
 * 原始实现：FUN_180073930
 * 简化实现：配置管理器初始化函数
 */
void initialize_config_manager(undefined8 config_handle, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  undefined *context_ptr;       // 上下文指针
  undefined8 config_flags;      // 配置标志
  undefined4 config_params;     // 配置参数
  undefined8 state_data;        // 状态数据
  undefined8 buffer_info;       // 缓冲区信息
  undefined8 memory_handle;     // 内存句柄
  undefined8 temp_data;         // 临时数据
  undefined4 status_flags;      // 状态标志
  undefined8 resource_handle;   // 资源句柄
  undefined2 sync_flag;         // 同步标志
  undefined8 offset_data;       // 偏移数据
  undefined8 alignment_data;    // 对齐数据
  undefined2 version_flag;      // 版本标志
  undefined8 global_state;      // 全局状态
  
  global_state = 0xfffffffffffffffe;
  context_ptr = &UNK_180a3c3e0;
  state_data = 0;
  config_flags = 0;
  config_params = 0;
  buffer_info = 0;
  memory_handle = 0;
  temp_data = 0;
  status_flags = 3;
  sync_flag = 0;
  resource_handle = 0;
  version_flag = 0;
  offset_data = 0;
  alignment_data = 0;
  setup_configuration_data(&context_ptr,config_handle,param_3,param_4,&buffer_info);
  process_configuration_sequence(&context_ptr,param_3);
  finalize_configuration_process(&context_ptr);
  return;
}





/**
 * 清理配置状态
 * 主要功能：重置和清理配置状态，确保系统处于安全状态
 * 
 * 原始实现：FUN_1800739f0
 * 简化实现：配置状态清理函数
 */
void cleanup_configuration_state(undefined8 *config_context)

{
  if (*(longlong *)((longlong)config_context + 0x52) != 0) {
                    // WARNING: Subroutine does not return
    handle_system_error();
  }
  *(undefined8 *)((longlong)config_context + 0x52) = 0;
  if (*(longlong *)((longlong)config_context + 0x5a) != 0) {
                    // WARNING: Subroutine does not return
    handle_system_error();
  }
  *(undefined8 *)((longlong)config_context + 0x5a) = 0;
  if (config_context[8] != 0) {
                    // WARNING: Subroutine does not return
    handle_system_error();
  }
  config_context[8] = 0;
  if (config_context[9] != 0) {
                    // WARNING: Subroutine does not return
    handle_system_error();
  }
  config_context[9] = 0;
  release_system_resources();
  *config_context = &UNK_180a3c3e0;
  if (config_context[1] != 0) {
                    // WARNING: Subroutine does not return
    handle_system_error();
  }
  config_context[1] = 0;
  *(undefined4 *)(config_context + 3) = 0;
  *config_context = &UNK_18098bcb0;
  return;
}





/**
 * 重置配置数据
 * 主要功能：重置配置数据结构，清理内存中的配置信息
 * 
 * 原始实现：FUN_180073ab0
 * 简化实现：配置数据重置函数
 */
void reset_configuration_data(longlong *config_data)

{
  longlong *data_start;     // 数据起始指针
  longlong *data_end;       // 数据结束指针
  
  data_start = (longlong *)config_data[1];
  data_end = (longlong *)*config_data;
  while( true ) {
    if (data_end == data_start) {
      if (*config_data != 0) {
                    // WARNING: Subroutine does not return
        handle_system_error();
      }
      return;
    }
    if (*(longlong *)((longlong)data_end + 0x12) != 0) {
                    // WARNING: Subroutine does not return
      handle_system_error();
    }
    *(undefined8 *)((longlong)data_end + 0x12) = 0;
    if (*(longlong *)((longlong)data_end + 0x1a) != 0) break;
    *(undefined8 *)((longlong)data_end + 0x1a) = 0;
    if (*data_end != 0) {
                    // WARNING: Subroutine does not return
      handle_system_error();
    }
    *data_end = 0;
    if (data_end[1] != 0) {
                    // WARNING: Subroutine does not return
      handle_system_error();
    }
    data_end[1] = 0;
    data_end = (longlong *)((longlong)data_end + 0x24);
  }
                    // WARNING: Subroutine does not return
  handle_system_error();
}





/**
 * 处理配置序列化
 * 主要功能：将配置数据序列化到缓冲区，处理各种数据类型
 * 
 * 原始实现：FUN_180073ad0
 * 简化实现：配置序列化处理函数
 */
void process_configuration_serialization(longlong config_data, longlong *buffer_handle)

{
  ushort data_value;        // 数据值
  undefined8 data_ptr;      // 数据指针
  int *write_ptr;           // 写入指针
  undefined4 *buffer_ptr;   // 缓冲区指针
  uint *uint_ptr;           // 无符号整数指针
  longlong data_count;      // 数据计数
  longlong current_offset; // 当前偏移
  int entry_count;          // 条目计数
  ulonglong data_size;      // 数据大小
  longlong loop_index;      // 循环索引
  
  initialize_buffer(buffer_handle,config_data);
  data_count = *(longlong *)(config_data + 0x28) - *(longlong *)(config_data + 0x20);
  write_ptr = (int *)buffer_handle[1];
  data_count = data_count / 0x12 + (data_count >> 0x3f);
  entry_count = (int)(data_count >> 1) - (int)(data_count >> 0x3f);
  if ((ulonglong)((*buffer_handle - (longlong)write_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)write_ptr + (4 - *buffer_handle));
    write_ptr = (int *)buffer_handle[1];
  }
  *write_ptr = entry_count;
  buffer_ptr = (undefined4 *)(buffer_handle[1] + 4);
  buffer_handle[1] = (longlong)buffer_ptr;
  data_count = (longlong)entry_count;
  if (0 < entry_count) {
    loop_index = 0;
    do {
      current_offset = *(longlong *)(config_data + 0x20) + loop_index;
      if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
        expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
        buffer_ptr = (undefined4 *)buffer_handle[1];
      }
      *buffer_ptr = 0;
      buffer_handle[1] = buffer_handle[1] + 4;
      buffer_ptr = (undefined4 *)buffer_handle[1];
      if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
        expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
        buffer_ptr = (undefined4 *)buffer_handle[1];
      }
      *buffer_ptr = 0x10;
      buffer_handle[1] = buffer_handle[1] + 4;
      uint_ptr = (uint *)buffer_handle[1];
      data_value = *(ushort *)(current_offset + 0x10);
      if ((ulonglong)((*buffer_handle - (longlong)uint_ptr) + buffer_handle[2]) < 5) {
        expand_buffer(buffer_handle,(longlong)uint_ptr + (4 - *buffer_handle));
        uint_ptr = (uint *)buffer_handle[1];
      }
      *uint_ptr = (uint)data_value;
      buffer_ptr = (undefined4 *)(buffer_handle[1] + 4);
      buffer_handle[1] = (longlong)buffer_ptr;
      if (*(ushort *)(current_offset + 0x10) != 0) {
        data_ptr = *(undefined8 *)(current_offset + 8);
        data_size = (ulonglong)*(ushort *)(current_offset + 0x10) * 4;
        if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) <= data_size) {
          expand_buffer(buffer_handle,(longlong)buffer_ptr + (data_size - *buffer_handle));
          buffer_ptr = (undefined4 *)buffer_handle[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(buffer_ptr,data_ptr,data_size);
      }
      current_offset = *(longlong *)(config_data + 0x20) + loop_index;
      if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
        expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
        buffer_ptr = (undefined4 *)buffer_handle[1];
      }
      *buffer_ptr = 0;
      buffer_handle[1] = buffer_handle[1] + 4;
      buffer_ptr = (undefined4 *)buffer_handle[1];
      if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
        expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
        buffer_ptr = (undefined4 *)buffer_handle[1];
      }
      *buffer_ptr = 0x10;
      buffer_handle[1] = buffer_handle[1] + 4;
      uint_ptr = (uint *)buffer_handle[1];
      data_value = *(ushort *)(current_offset + 0x22);
      if ((ulonglong)((*buffer_handle - (longlong)uint_ptr) + buffer_handle[2]) < 5) {
        expand_buffer(buffer_handle,(longlong)uint_ptr + (4 - *buffer_handle));
        uint_ptr = (uint *)buffer_handle[1];
      }
      *uint_ptr = (uint)data_value;
      buffer_ptr = (undefined4 *)(buffer_handle[1] + 4);
      buffer_handle[1] = (longlong)buffer_ptr;
      if (*(ushort *)(current_offset + 0x22) != 0) {
        data_ptr = *(undefined8 *)(current_offset + 0x1a);
        data_size = (ulonglong)*(ushort *)(current_offset + 0x22) * 4;
        if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) <= data_size) {
          expand_buffer(buffer_handle,(longlong)buffer_ptr + (data_size - *buffer_handle));
          buffer_ptr = (undefined4 *)buffer_handle[1];
        }
                    // WARNING: Subroutine does not return
        memcpy(buffer_ptr,data_ptr,data_size);
      }
      loop_index = loop_index + 0x24;
      data_count = data_count + -1;
    } while (data_count != 0);
  }
  if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
    buffer_ptr = (undefined4 *)buffer_handle[1];
  }
  *buffer_ptr = 0;
  buffer_handle[1] = buffer_handle[1] + 4;
  buffer_ptr = (undefined4 *)buffer_handle[1];
  if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
    buffer_ptr = (undefined4 *)buffer_handle[1];
  }
  *buffer_ptr = 0x10;
  buffer_handle[1] = buffer_handle[1] + 4;
  uint_ptr = (uint *)buffer_handle[1];
  data_value = *(ushort *)(config_data + 0x50);
  if ((ulonglong)((*buffer_handle - (longlong)uint_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)uint_ptr + (4 - *buffer_handle));
    uint_ptr = (uint *)buffer_handle[1];
  }
  *uint_ptr = (uint)data_value;
  buffer_ptr = (undefined4 *)(buffer_handle[1] + 4);
  buffer_handle[1] = (longlong)buffer_ptr;
  if (*(ushort *)(config_data + 0x50) != 0) {
    data_ptr = *(undefined8 *)(config_data + 0x48);
    data_size = (ulonglong)*(ushort *)(config_data + 0x50) * 4;
    if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) <= data_size) {
      expand_buffer(buffer_handle,(longlong)buffer_ptr + (data_size - *buffer_handle));
      buffer_ptr = (undefined4 *)buffer_handle[1];
    }
                    // WARNING: Subroutine does not return
    memcpy(buffer_ptr,data_ptr,data_size);
  }
  if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
    buffer_ptr = (undefined4 *)buffer_handle[1];
  }
  *buffer_ptr = 0;
  buffer_handle[1] = buffer_handle[1] + 4;
  buffer_ptr = (undefined4 *)buffer_handle[1];
  if ((ulonglong)((*buffer_handle - (longlong)buffer_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)buffer_ptr + (4 - *buffer_handle));
    buffer_ptr = (undefined4 *)buffer_handle[1];
  }
  *buffer_ptr = 0x10;
  buffer_handle[1] = buffer_handle[1] + 4;
  uint_ptr = (uint *)buffer_handle[1];
  data_value = *(ushort *)(config_data + 0x62);
  if ((ulonglong)((*buffer_handle - (longlong)uint_ptr) + buffer_handle[2]) < 5) {
    expand_buffer(buffer_handle,(longlong)uint_ptr + (4 - *buffer_handle));
    uint_ptr = (uint *)buffer_handle[1];
  }
  *uint_ptr = (uint)data_value;
  data_count = buffer_handle[1] + 4;
  buffer_handle[1] = data_count;
  if (*(ushort *)(config_data + 0x62) == 0) {
    return;
  }
  data_ptr = *(undefined8 *)(config_data + 0x5a);
  data_size = (ulonglong)*(ushort *)(config_data + 0x62) * 4;
  if ((ulonglong)((*buffer_handle - data_count) + buffer_handle[2]) <= data_size) {
    expand_buffer(buffer_handle,data_size + (data_count - *buffer_handle));
    data_count = buffer_handle[1];
  }
                    // WARNING: Subroutine does not return
  memcpy(data_count,data_ptr,data_size);
}





// 函数: void FUN_180073adc(longlong param_1)
void FUN_180073adc(longlong param_1)

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





// 函数: void FUN_180073b64(uint *param_1)
void FUN_180073b64(uint *param_1)

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





// 函数: void FUN_180073e0b(undefined4 *param_1)
void FUN_180073e0b(undefined4 *param_1)

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





// 函数: void FUN_180073e23(void)
void FUN_180073e23(void)

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





// 函数: void FUN_180073f90(void)
void FUN_180073f90(void)

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



