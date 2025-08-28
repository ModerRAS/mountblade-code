#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part183.c - 核心引擎数据处理函数 (6个函数)

// 函数: void initialize_data_pointers(undefined8 *data_structure)
// 功能: 初始化数据结构指针，设置默认值和引用关系
// 原始实现：FUN_180168ab0
// 简化实现：数据指针初始化函数
void initialize_data_pointers(undefined8 *data_structure)

{
  // 设置数据结构的指针指向默认对象
  data_structure[0x16] = &DEFAULT_OBJECT_PTR;
  data_structure[0xb] = &DEFAULT_OBJECT_PTR;
  *data_structure = &DEFAULT_OBJECT_PTR;
  return;
}



// 全局变量重叠警告：以下函数使用的全局变量可能与较小符号重叠

// 函数: longlong copy_data_structure(longlong dest_ptr, longlong src_ptr)
// 功能: 复制数据结构，包括内存分配、数据拷贝和引用管理
// 原始实现：FUN_180168af0
// 简化实现：数据结构复制函数
longlong copy_data_structure(longlong dest_ptr, longlong src_ptr)

{
  uint element_flags;
  undefined *element_data;
  longlong buffer_ptr;
  longlong size_calc;
  longlong element_count;
  undefined8 *data_block;
  undefined *string_ptr;
  
  // 初始化内存管理器
  initialize_memory_manager();
  
  // 计算第一块数据区域的大小和元素数量
  size_calc = calculate_data_region_size(src_ptr + 0x28, src_ptr + 0x20);
  element_count = calculate_element_count(size_calc);
  buffer_ptr = 0;
  
  // 获取元素标志并设置到目标结构
  element_flags = *(uint *)(src_ptr + 0x38);
  *(uint *)(dest_ptr + 0x38) = element_flags;
  
  // 分配内存并初始化数据块
  if (element_count != 0) {
    buffer_ptr = allocate_data_block(MEMORY_POOL_HANDLE, element_count * 0x98, element_flags & 0xff);
  }
  
  // 设置目标数据结构的指针
  setup_data_pointers(dest_ptr, buffer_ptr, element_count);
  
  // 复制数据内容
  data_block = *(undefined8 **)(dest_ptr + 0x20);
  copy_data_content(data_block, src_ptr, dest_ptr);
  
  // 复制基础属性
  copy_basic_attributes(dest_ptr, src_ptr);
  
  // 处理第二块数据区域
  process_second_data_region(dest_ptr, src_ptr);
  
  // 处理第三块数据区域
  process_third_data_region(dest_ptr, src_ptr);
  
  // 复制其他数据块
  copy_additional_data_blocks(dest_ptr, src_ptr);
  
  // 处理第四块数据区域
  process_fourth_data_region(dest_ptr, src_ptr);
  
  // 设置最终状态和标志
  setup_final_state(dest_ptr, src_ptr);
  
  return dest_ptr;
}



// 函数: longlong * process_resource_data(undefined8 resource_type, longlong *output_buffer, longlong input_data, undefined8 process_flags)
// 功能: 处理资源数据，包括解析、验证和格式转换
// 原始实现：FUN_180169110
// 简化实现：资源数据处理函数
longlong * process_resource_data(undefined8 resource_type, longlong *output_buffer, longlong input_data, undefined8 process_flags)

{
  undefined8 *resource_manager;
  undefined8 *data_processor;
  longlong processing_result;
  longlong validation_result;
  undefined8 processed_data;
  undefined *data_source;
  undefined *processing_context;
  undefined1 *output_buffer_ptr;
  undefined4 buffer_size;
  undefined8 buffer_flags;
  undefined *temp_buffer;
  longlong buffer_handle;
  undefined4 processing_status;
  
  // 获取资源管理器引用
  resource_manager = RESOURCE_MANAGER_HANDLE;
  
  // 初始化处理上下文
  initialize_processing_context(&processing_context, input_data, input_data, process_flags, 0, CONTEXT_CLEANUP_FLAG);
  
  // 验证输入数据
  validation_result = validate_input_data(resource_manager, &processing_context);
  processing_context = &CLEANUP_CONTEXT;
  
  // 检查处理上下文是否有效
  if (output_buffer_ptr != (undefined1 *)0x0) {
    // 错误：处理上下文初始化失败
    throw_processing_error();
  }
  
  // 重置处理状态
  output_buffer_ptr = (undefined1 *)0x0;
  buffer_flags = (ulonglong)buffer_flags._4_4_ << 0x20;
  processing_context = &DEFAULT_OBJECT_PTR;
  
  // 初始化输出缓冲区
  *output_buffer = (longlong)&DEFAULT_OBJECT_PTR;
  output_buffer[1] = 0;
  *(undefined4 *)(output_buffer + 2) = 0;
  *output_buffer = (longlong)&CLEANUP_CONTEXT;
  output_buffer[3] = 0;
  output_buffer[1] = 0;
  *(undefined4 *)(output_buffer + 2) = 0;
  
  // 根据验证结果选择处理路径
  if (validation_result == 0) {
    // 使用默认数据源
    data_source = &DEFAULT_STRING_DATA;
    if (*(undefined **)(input_data + 8) != (undefined *)0x0) {
      data_source = *(undefined **)(input_data + 8);
    }
    
    // 创建默认数据处理请求
    create_default_request(&DEFAULT_REQUEST_HANDLE, data_source);
    (**(code **)(*output_buffer + DATA_PROCESSOR_OFFSET))(output_buffer, &DEFAULT_REQUEST_DATA);
  }
  else {
    // 处理验证通过的数据
    processed_data = process_validated_data(validation_result, &temp_buffer, input_data, process_flags, 1);
    apply_processed_data(output_buffer, processed_data);
    temp_buffer = &CLEANUP_CONTEXT;
    
    if (buffer_handle != 0) {
      // 错误：缓冲区句柄无效
      throw_processing_error();
    }
    
    buffer_handle = 0;
    processing_status = 0;
    temp_buffer = &DEFAULT_OBJECT_PTR;
  }
  
  // 设置输出缓冲区属性
  processing_context = &CLEANUP_CONTEXT;
  buffer_flags = 0;
  output_buffer_ptr = (undefined1 *)0x0;
  buffer_size = 0;
  
  // 复制数据到输出缓冲区
  copy_data_to_buffer(&processing_context, *(undefined4 *)(input_data + 0x10));
  
  if (0 < *(int *)(input_data + 0x10)) {
    data_source = &DEFAULT_STRING_DATA;
    if (*(undefined **)(input_data + 8) != (undefined *)0x0) {
      data_source = *(undefined **)(input_data + 8);
    }
    
    // 执行数据复制操作
    memcpy(output_buffer_ptr, data_source, (longlong)(*(int *)(input_data + 0x10) + 1));
  }
  
  // 清理输入数据引用
  if (*(longlong *)(input_data + 8) != 0) {
    buffer_size = 0;
    if (output_buffer_ptr != (undefined1 *)0x0) {
      *output_buffer_ptr = 0;
    }
  }
  
  // 获取数据处理器指针
  data_processor = *(undefined8 **)(resource_manager + 8);
  resource_manager = *(undefined8 **)(resource_manager + 0x10);
  
  // 检查是否需要扩容缓冲区
  if ((resource_manager == *(undefined8 **)(resource_manager + 0x18)) || (data_processor != resource_manager)) {
    process_buffer_expansion((undefined8 *)(resource_manager + 8), data_processor, &processing_context);
  }
  else {
    // 扩容缓冲区
    *resource_manager = &DEFAULT_OBJECT_PTR;
    resource_manager[1] = 0;
    *(undefined4 *)(resource_manager + 2) = 0;
    *resource_manager = &CLEANUP_CONTEXT;
    resource_manager[3] = 0;
    resource_manager[1] = 0;
    *(undefined4 *)(resource_manager + 2) = 0;
    *(undefined4 *)(resource_manager + 2) = buffer_size;
    resource_manager[1] = output_buffer_ptr;
    *(uint *)((longlong)resource_manager + 0x1c) = buffer_flags._4_4_;
    *(undefined4 *)(resource_manager + 3) = (undefined4)buffer_flags;
    buffer_size = 0;
    output_buffer_ptr = (undefined1 *)0x0;
    buffer_flags = 0;
    *(longlong *)(resource_manager + 0x10) = *(longlong *)(resource_manager + 0x10) + 0x20;
  }
  
  // 清理处理上下文
  processing_context = &CLEANUP_CONTEXT;
  if (output_buffer_ptr != (undefined1 *)0x0) {
    // 错误：输出缓冲区清理失败
    throw_processing_error();
  }
  
  return output_buffer;
}



// 警告：移除了不可达的代码块 (ram,0x000180169be0)
// 全局变量重叠警告：以下函数使用的全局变量可能与较小符号重叠

// 函数: longlong validate_string_format(longlong *validator, longlong input_string)
// 功能: 验证字符串格式，检查分隔符和有效性
// 原始实现：FUN_180169350
// 简化实现：字符串格式验证函数
longlong validate_string_format(longlong *validator, longlong input_string)

{
  undefined4 validation_flags;
  char *string_ptr;
  longlong validation_result;
  undefined2 *format_checker;
  undefined *validation_data;
  uint char_index;
  undefined *validation_context;
  undefined *cleanup_buffer;
  int string_length;
  undefined8 buffer_metadata;
  undefined *buffer_ptr;
  undefined8 buffer_flags;
  undefined4 buffer_size;
  undefined2 *extension_ptr;
  undefined4 extension_size;
  ulonglong extension_flags;
  longlong memory_handle;
  undefined8 cleanup_flag;
  
  cleanup_flag = CONTEXT_CLEANUP_FLAG;
  char_index = 0;
  
  // 初始化验证上下文
  initialize_validation_context(&validation_context);
  
  // 遍历字符串查找分隔符
  if (*(uint *)(input_string + 0x10) != 0) {
    string_ptr = *(char **)(input_string + 8);
    do {
      if (*string_ptr == ' ') {
        if (char_index != 0xffffffff) {
          // 执行字符串分割验证
          validation_result = split_string_validation(input_string, &buffer_ptr, 0);
          if (cleanup_buffer != (undefined *)0x0) {
            // 错误：验证过程中出现异常
            throw_validation_error();
          }
          
          string_length = *(int *)(validation_result + 0x10);
          cleanup_buffer = *(undefined **)(validation_result + 8);
          buffer_metadata = *(undefined8 *)(validation_result + 0x18);
          
          // 清理验证结果
          *(undefined4 *)(validation_result + 0x10) = 0;
          *(undefined8 *)(validation_result + 8) = 0;
          *(undefined8 *)(validation_result + 0x18) = 0;
          
          buffer_ptr = &CLEANUP_CONTEXT;
          if (extension_ptr != (undefined2 *)0x0) {
            // 错误：扩展指针异常
            throw_validation_error();
          }
          
          extension_ptr = (undefined2 *)0x0;
          extension_flags = extension_flags & 0xffffffff00000000;
          buffer_ptr = &DEFAULT_OBJECT_PTR;
        }
        break;
      }
      char_index = char_index + 1;
      string_ptr = string_ptr + 1;
    } while (char_index < *(uint *)(input_string + 0x10));
  }
  
  // 设置验证上下文
  buffer_ptr = &CLEANUP_CONTEXT;
  buffer_flags = 0;
  buffer_size = 0;
  validation_flags = 0;
  memory_handle = *validator;
  
  // 如果验证通过且有长度，执行扩展名检查
  if ((memory_handle != 0) && (0 < string_length)) {
    buffer_ptr = &CLEANUP_CONTEXT;
    extension_flags = 0;
    extension_ptr = (undefined2 *)0x0;
    extension_size = 0;
    
    // 分配扩展名检查器
    format_checker = (undefined2 *)allocate_validation_buffer(MEMORY_POOL_HANDLE, 0x10, STRING_TYPE_FLAG);
    *(undefined1 *)format_checker = 0;
    extension_ptr = format_checker;
    
    // 执行扩展名验证
    validation_flags = validate_extension(format_checker);
    extension_flags = CONCAT44(extension_flags._4_4_, validation_flags);
    *format_checker = 0x2e;  // 设置分隔符
    extension_size = 1;
    
    // 获取验证数据源
    validation_data = &DEFAULT_STRING_DATA;
    if (cleanup_buffer != (undefined *)0x0) {
      validation_data = cleanup_buffer;
    }
    
    // 执行字符串搜索验证
    strstr(validation_data, format_checker);
    buffer_ptr = &CLEANUP_CONTEXT;
    
    // 清理验证器
    cleanup_validation_buffer(format_checker);
  }
  
  // 重置缓冲区状态
  buffer_size = 0;
  buffer_flags = 0;
  buffer_ptr = &DEFAULT_OBJECT_PTR;
  validation_context = &CLEANUP_CONTEXT;
  
  // 清理上下文
  if (cleanup_buffer != (undefined *)0x0) {
    // 错误：清理缓冲区失败
    throw_validation_error();
  }
  
  return memory_handle;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180169c30(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puStack_58;
  undefined1 *puStack_50;
  uint uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 3;
  pcVar15 = "";
  if (*(char **)(param_2 + 8) != (char *)0x0) {
    pcVar15 = *(char **)(param_2 + 8);
  }
  bVar3 = false;
  if (*pcVar15 != '\0') {
    do {
      puVar7 = (undefined1 *)0x0;
      puStack_58 = &UNK_180a3c3e0;
      uStack_40 = 0;
      puStack_50 = (undefined1 *)0x0;
      uStack_3c = 0;
      uStack_48 = 0;
      cVar1 = *pcVar15;
      puVar5 = puVar7;
      puVar13 = puVar7;
      if (cVar1 != '\0') {
        do {
          pcVar14 = pcVar15;
          if (cVar1 == '\"') {
            bVar3 = !bVar3;
          }
          else {
            if ((!bVar3) && (cVar1 == ' ')) break;
            uVar8 = (int)puVar13 + 1;
            if (uVar8 != 0) {
              uVar4 = (int)puVar13 + 2;
              if (puVar5 == (undefined1 *)0x0) {
                if ((int)uVar4 < 0x10) {
                  uVar4 = 0x10;
                }
                puVar5 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
                *puVar5 = 0;
              }
              else {
                if (uVar4 <= (uint)puVar7) goto LAB_180169e1e;
                puVar5 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar5,uVar4,0x10,0x13);
              }
              uVar11 = (ulonglong)puVar5 & 0xffffffffffc00000;
              if (uVar11 == 0) {
                puVar7 = (undefined1 *)0x0;
              }
              else {
                lVar9 = ((longlong)puVar5 - uVar11 >> 0x10) * 0x50 + 0x80 + uVar11;
                puVar10 = (uint *)(lVar9 - (ulonglong)*(uint *)(lVar9 + 4));
                if ((*(byte *)((longlong)puVar10 + 0xe) & 2) == 0) {
                  puVar7 = (undefined1 *)(ulonglong)puVar10[7];
                  if ((undefined1 *)0x3ffffff < puVar7) {
                    puVar7 = (undefined1 *)((ulonglong)*puVar10 << 0x10);
                  }
                }
                else {
                  uVar6 = (ulonglong)puVar10[7];
                  if (uVar6 < 0x4000000) {
                    uVar12 = (ulonglong)puVar10[7];
                  }
                  else {
                    uVar12 = (ulonglong)*puVar10 << 0x10;
                  }
                  if (0x3ffffff < uVar6) {
                    uVar6 = (ulonglong)*puVar10 << 0x10;
                  }
                  puVar7 = (undefined1 *)
                           (uVar6 - ((longlong)puVar5 -
                                    (((longlong)((longlong)puVar10 + (-0x80 - uVar11)) / 0x50) *
                                     0x10000 + uVar11)) % uVar12);
                }
              }
              uStack_40 = SUB84(puVar7,0);
              puStack_50 = puVar5;
            }
LAB_180169e1e:
            puVar13[(longlong)puVar5] = cVar1;
            puVar5[uVar8] = 0;
            puVar13 = (undefined1 *)(ulonglong)uVar8;
            uStack_48 = uVar8;
          }
          pcVar15 = pcVar14 + 1;
          cVar1 = *pcVar15;
        } while (cVar1 != '\0');
        pcVar15 = pcVar14 + 1;
      }
      puVar2 = (undefined8 *)param_1[1];
      if (puVar2 < (undefined8 *)param_1[2]) {
        param_1[1] = (longlong)(puVar2 + 4);
        *puVar2 = &UNK_18098bcb0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        *puVar2 = &UNK_180a3c3e0;
        puVar2[3] = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        FUN_1806277c0(puVar2,puVar13);
        if ((int)puVar13 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar2[1],puVar5,(int)puVar13 + 1);
        }
        if (puVar5 != (undefined1 *)0x0) {
          *(undefined4 *)(puVar2 + 2) = 0;
          if ((undefined1 *)puVar2[1] != (undefined1 *)0x0) {
            *(undefined1 *)puVar2[1] = 0;
          }
          *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
        }
      }
      else {
        FUN_180059820(param_1,&puStack_58);
        puVar5 = puStack_50;
      }
      puStack_58 = &UNK_180a3c3e0;
      if (puVar5 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      puStack_50 = (undefined1 *)0x0;
      uStack_40 = 0;
      puStack_58 = &UNK_18098bcb0;
    } while (*pcVar15 != '\0');
    if (bVar3) {
      FUN_180626f80(&UNK_180a08898);
      FUN_180057110(param_1);
    }
  }
  if (*param_1 != param_1[1]) {
    FUN_180095280(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_180169f60(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong **pplVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plStackX_8;
  uint uStackX_20;
  undefined *puStack_118;
  undefined1 *puStack_110;
  uint uStack_108;
  ulonglong uStack_100;
  undefined *puStack_f8;
  longlong lStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined *puStack_d0;
  longlong lStack_c8;
  uint uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  undefined4 uStack_98;
  undefined *puStack_90;
  longlong lStack_88;
  uint uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined *puStack_68;
  longlong lStack_60;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = _DAT_180c868f8;
  uStack_48 = 0xfffffffffffffffe;
  plVar12 = (longlong *)0x0;
  uStack_d8 = 0;
  FUN_1806279c0(&puStack_d0,param_3);
  plVar9 = plVar12;
  plVar13 = plVar12;
  if (uStack_c0 != 0) {
    do {
      if ((byte)(*(char *)(lStack_c8 + (longlong)plVar13) + 0xbfU) < 0x1a) {
        *(char *)(lStack_c8 + (longlong)plVar13) = *(char *)(lStack_c8 + (longlong)plVar13) + ' ';
      }
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
      plVar13 = (longlong *)((longlong)plVar13 + 1);
    } while (uVar8 < uStack_c0);
  }
  FUN_1806279c0(&puStack_90,param_3);
  plVar9 = plVar12;
  plVar13 = plVar12;
  if (uStack_80 != 0) {
    do {
      if ((byte)(*(char *)(lStack_88 + (longlong)plVar13) + 0xbfU) < 0x1a) {
        *(char *)(lStack_88 + (longlong)plVar13) = *(char *)(lStack_88 + (longlong)plVar13) + ' ';
      }
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
      plVar13 = (longlong *)((longlong)plVar13 + 1);
    } while (uVar8 < uStack_80);
  }
  iVar10 = uStack_c0 - 1;
  lVar3 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      if (*(char *)(lStack_c8 + lVar3) == '.') {
        if (iVar10 != -1) {
          lVar3 = FUN_180629a40(&puStack_d0,&plStack_b0,0,iVar10);
          if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          uStack_c0 = *(uint *)(lVar3 + 0x10);
          lStack_c8 = *(longlong *)(lVar3 + 8);
          uStack_b8 = *(undefined8 *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x10) = 0;
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x18) = 0;
          plStack_b0 = (longlong *)&UNK_180a3c3e0;
          if (plStack_a8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plStack_a8 = (longlong *)0x0;
          uStack_98 = 0;
          plStack_b0 = (longlong *)&UNK_18098bcb0;
          lVar3 = FUN_180629a40(&puStack_90,&plStack_b0,iVar10 + 1,uStack_80);
          if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          uStack_80 = *(uint *)(lVar3 + 0x10);
          lStack_88 = *(longlong *)(lVar3 + 8);
          uStack_78 = *(ulonglong *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x10) = 0;
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x18) = 0;
          plStack_b0 = (longlong *)&UNK_180a3c3e0;
          if (plStack_a8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plStack_a8 = (longlong *)0x0;
          uStack_98 = 0;
          plStack_b0 = (longlong *)&UNK_18098bcb0;
          goto LAB_18016a086;
        }
        break;
      }
      iVar10 = iVar10 + -1;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  (**(code **)(puStack_d0 + 0x10))(&puStack_d0,&DAT_18098bc73);
LAB_18016a086:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 3;
  uStack_d8 = 1;
  lVar3 = FUN_180169350(uVar2,&puStack_d0);
  if (lVar3 != 0) {
    plStack_b0 = (longlong *)0x0;
    plStack_a8 = (longlong *)0x0;
    plStack_a0 = (longlong *)0x0;
    uStack_98 = 3;
    pplVar4 = (longlong **)FUN_180161f80(lVar3,&puStack_68,&puStack_90);
    plStackX_8 = (longlong *)0x0;
    plVar9 = plVar12;
    if (&plStack_b0 != pplVar4) {
      puStack_f8 = (undefined *)0x0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = CONCAT44((int)((ulonglong)uStack_e0 >> 0x20),3);
      plStackX_8 = *pplVar4;
      *pplVar4 = (longlong *)0x0;
      plVar9 = pplVar4[1];
      pplVar4[1] = (longlong *)0x0;
      plStack_a0 = pplVar4[2];
      pplVar4[2] = (longlong *)0x0;
      uStack_98 = *(undefined4 *)(pplVar4 + 3);
      *(undefined4 *)(pplVar4 + 3) = 3;
      plStack_b0 = plStackX_8;
      plStack_a8 = plVar9;
    }
    if (puStack_68 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStackX_20 = 0;
    uVar14 = (longlong)plVar9 - (longlong)plStackX_8 >> 3;
    uStack_70 = uVar14;
    if (uVar14 != 0) {
      do {
        lVar5 = 0;
        lVar3 = *plStackX_8;
        puStack_118 = &UNK_180a3c3e0;
        uStack_100 = 0;
        puStack_110 = (undefined1 *)0x0;
        uStack_108 = 0;
        FUN_1806277c0(&puStack_118,*(undefined4 *)(lVar3 + 0x10));
        uVar8 = uStack_c0;
        if (*(int *)(lVar3 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puStack_110,*(undefined8 *)(lVar3 + 8),*(int *)(lVar3 + 0x10) + 1);
        }
        if (*(longlong *)(lVar3 + 8) != 0) {
          uStack_108 = 0;
          if (puStack_110 != (undefined1 *)0x0) {
            *puStack_110 = 0;
          }
          uStack_100 = uStack_100 & 0xffffffff;
        }
        if (0 < (int)uStack_c0) {
          puStack_f8 = &UNK_180a3c3e0;
          uStack_e0 = 0;
          lStack_f0 = 0;
          uStack_e8 = uStack_e8 & 0xffffffff00000000;
          uStack_d8 = 3;
          uVar7 = (ulonglong)uStack_c0;
          if (lStack_c8 != 0) {
            FUN_1806277c0(&puStack_f8,uVar7);
          }
          if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(lStack_f0,lStack_c8,uVar7);
          }
          uStack_e8 = uStack_e8 & 0xffffffff00000000;
          if (lStack_f0 != 0) {
            *(undefined1 *)(uVar7 + lStack_f0) = 0;
          }
          uStack_e0._4_4_ = uStack_b8._4_4_;
          FUN_1806277c0(&puStack_f8,1);
          *(undefined2 *)((uStack_e8 & 0xffffffff) + lStack_f0) = 0x2e;
          uStack_e8 = CONCAT44(uStack_e8._4_4_,1);
          lVar3 = FUN_180627ce0(&puStack_f8,&puStack_68,*plStackX_8);
          if (puStack_110 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          uStack_108 = *(uint *)(lVar3 + 0x10);
          puStack_110 = *(undefined1 **)(lVar3 + 8);
          uStack_100 = *(ulonglong *)(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x10) = 0;
          *(undefined8 *)(lVar3 + 8) = 0;
          *(undefined8 *)(lVar3 + 0x18) = 0;
          puStack_68 = &UNK_180a3c3e0;
          if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_60 = 0;
          uStack_50 = 0;
          puStack_68 = &UNK_18098bcb0;
          puStack_f8 = &UNK_180a3c3e0;
          uStack_d8 = 1;
          if (lStack_f0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_f0 = 0;
          uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
          puStack_f8 = &UNK_18098bcb0;
        }
        if (*(int *)(*plStackX_8 + 0x20) == 0) {
          uVar8 = uStack_108 + 1;
          FUN_1806277c0(&puStack_118,uVar8);
          *(undefined2 *)(puStack_110 + uStack_108) = 0x2e;
          uStack_108 = uVar8;
        }
        uVar7 = param_2[1];
        if (uVar7 < (ulonglong)param_2[2]) {
          param_2[1] = uVar7 + 0x20;
          FUN_180627ae0(uVar7,&puStack_118);
          uStackX_20 = (uint)plVar12;
        }
        else {
          lVar3 = (longlong)(uVar7 - *param_2) >> 5;
          if (lVar3 == 0) {
            lVar3 = 1;
LAB_18016a555:
            lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar3 << 5,(char)param_2[3]);
            uVar7 = param_2[1];
          }
          else {
            lVar3 = lVar3 * 2;
            if (lVar3 != 0) goto LAB_18016a555;
          }
          lVar6 = FUN_180059780(*param_2,uVar7,lVar5);
          FUN_180627ae0(lVar6,&puStack_118);
          puVar1 = (undefined8 *)param_2[1];
          uVar14 = uStack_70;
          for (puVar11 = (undefined8 *)*param_2; uStack_70 = uVar14, puVar11 != puVar1;
              puVar11 = puVar11 + 4) {
            (**(code **)*puVar11)(puVar11,0);
            uVar14 = uStack_70;
          }
          if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *param_2 = lVar5;
          param_2[1] = lVar6 + 0x20;
          param_2[2] = lVar3 * 0x20 + lVar5;
        }
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (undefined1 *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        uStackX_20 = uStackX_20 + 1;
        plVar12 = (longlong *)(ulonglong)uStackX_20;
        plStackX_8 = plStackX_8 + 1;
      } while ((ulonglong)(longlong)(int)uStackX_20 < uVar14);
    }
    if (plStack_b0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  FUN_18016d200(*param_2,param_2[1],0);
  puStack_90 = &UNK_180a3c3e0;
  if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_88 = 0;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  puStack_90 = &UNK_18098bcb0;
  puStack_d0 = &UNK_180a3c3e0;
  if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}



undefined8 *
FUN_18016a6c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_28 [32];
  
  uVar4 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 3;
  uVar3 = 1;
  uVar1 = *param_1;
  uVar2 = FUN_180628ca0();
  uVar2 = FUN_180627ae0(auStack_28,uVar2);
  FUN_180162220(uVar1,param_2,uVar2,param_4,uVar3,uVar4);
  return param_2;
}



undefined8 *
FUN_18016a740(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      if (param_1[2] == 0) {
        uVar1 = FUN_180628ca0();
        FUN_180627ae0(param_2,uVar1);
      }
      else {
        uVar1 = FUN_180628ca0();
        FUN_180627ce0(uVar1,param_2,param_1[2]);
      }
    }
    else {
      puStack_38 = &UNK_180a3c3e0;
      uStack_20 = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_180628040(&puStack_38,&UNK_180a0888c,(double)*(float *)param_1[1],param_4,0,
                    0xfffffffffffffffe);
      *param_2 = &UNK_18098bcb0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *param_2 = &UNK_180a3c3e0;
      *(undefined4 *)(param_2 + 2) = uStack_28;
      param_2[1] = uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
    }
  }
  else {
    uVar1 = FUN_180628ca0();
    FUN_180627d90(uVar1,param_2,*(undefined4 *)*param_1);
  }
  return param_2;
}





