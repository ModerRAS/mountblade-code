#include "TaleWorlds.Native.Split.h"

// ============================================================================
// 99_part_01_part004.c - 高级流处理和格式化输出模块
// 包含14个核心函数，涵盖流处理、格式化输出、异常处理、编码转换等高级功能
// 主要功能包括：高级流处理、格式化输出、异常处理、编码转换、文件操作等
// ============================================================================

// 函数类型定义和常量
typedef longlong* StreamPtr;
typedef undefined1* CharPtr;
typedef ulonglong SizeType;

#define STREAM_BUFFER_SIZE 0x3c
#define STREAM_FORMAT_CHAR 0x3f
#define STREAM_SPACE_CHAR 0x20
#define STREAM_NEWLINE_CHAR 0x0a
#define STREAM_TAB_CHAR 0x09
#define DEFAULT_STRING_ADDR 0x180d48d24

// ============================================================================
// 函数: AdvancedStreamFormatter - 高级流格式化处理器
// 功能: 处理流数据的格式化输出，支持多种格式化选项和参数控制
// 参数: 
//   param_1 - 输出流指针
//   param_2 - 格式化参数结构
//   param_3 - 字符串参数
//   param_4 - 格式化标志
//   param_5 - 重复次数
// 返回值: 无
// ============================================================================
void AdvancedStreamFormatter(StreamPtr param_1, StreamPtr param_2, undefined8 *param_3, 
                           byte param_4, uint param_5)
{
    undefined1 char_value;
    longlong stream_data;
    CharPtr string_ptr;
    longlong buffer_size;
    CharPtr string_start;
    longlong string_length;
    SizeType counter;
    CharPtr current_char;
    longlong output_value;
    
    // 处理格式化前缀（如果标志位允许）
    if ((param_4 & 1) == 0) {
        output_value = *param_2;
        stream_data = param_2[1];
        
        // 处理重复的制表符输出
        if (0 < (int)param_5) {
            counter = (SizeType)param_5;
            do {
                StreamOutputFormatter(stream_data, STREAM_TAB_CHAR);
                if (output_value != 0) {
                    StreamDataWriter(stream_data, output_value);
                }
                counter = counter - 1;
            } while (counter != 0);
        }
        
        *param_2 = output_value;
        param_2[1] = stream_data;
    }
    
    // 输出格式化前缀字符
    output_value = param_2[1];
    StreamOutputFormatter(output_value, STREAM_BUFFER_SIZE);
    stream_data = *param_2;
    if (stream_data != 0) {
        StreamDataWriter(output_value, stream_data);
    }
    
    // 输出格式化字符
    StreamOutputFormatter(output_value, STREAM_FORMAT_CHAR);
    if (stream_data != 0) {
        StreamDataWriter(output_value, stream_data);
    }
    
    // 处理主字符串参数
    string_ptr = (CharPtr)*param_3;
    stream_data = *param_2;
    buffer_size = param_2[1];
    output_value = 0;
    
    // 确定字符串起始位置和长度
    if (string_ptr == (CharPtr)0x0) {
        string_start = (CharPtr)DEFAULT_STRING_ADDR;
        string_length = output_value;
    } else {
        string_start = string_ptr;
        string_length = param_3[2];
    }
    
    current_char = (CharPtr)DEFAULT_STRING_ADDR;
    if (string_ptr != (CharPtr)0x0) {
        current_char = string_ptr;
    }
    
    // 输出主字符串内容
    while (current_char != string_start + string_length) {
        char_value = *current_char;
        current_char = current_char + 1;
        StreamOutputFormatter(buffer_size, char_value);
        if (stream_data != 0) {
            StreamDataWriter(buffer_size, stream_data);
        }
    }
    
    *param_2 = stream_data;
    param_2[1] = buffer_size;
    
    // 输出空格分隔符
    string_length = param_2[1];
    StreamOutputFormatter(string_length, STREAM_SPACE_CHAR);
    if (*param_2 != 0) {
        StreamDataWriter(string_length);
    }
    
    // 处理第二个字符串参数
    string_ptr = (CharPtr)param_3[1];
    if (string_ptr == (CharPtr)0x0) {
        string_start = (CharPtr)DEFAULT_STRING_ADDR;
    } else {
        output_value = param_3[3];
        string_start = string_ptr;
    }
    
    current_char = (CharPtr)DEFAULT_STRING_ADDR;
    if (string_ptr != (CharPtr)0x0) {
        current_char = string_ptr;
    }
    
    // 输出第二个字符串内容
    while (current_char != string_start + output_value) {
        char_value = *current_char;
        current_char = current_char + 1;
        StreamOutputFormatter(buffer_size, char_value);
        if (stream_data != 0) {
            StreamDataWriter(buffer_size, stream_data);
        }
    }
    
    *param_2 = stream_data;
    param_2[1] = buffer_size;
    
    // 输出格式化后缀
    output_value = param_2[1];
    StreamOutputFormatter(output_value, STREAM_FORMAT_CHAR);
    string_length = *param_2;
    if (string_length != 0) {
        StreamDataWriter(output_value, string_length);
    }
    
    // 输出格式化结束符
    StreamOutputFormatter(output_value, STREAM_FORMAT_CHAR - 1);
    if (string_length != 0) {
        StreamDataWriter(output_value, string_length);
    }
    
    // 保存最终结果
    *param_1 = stream_data;
    param_1[1] = buffer_size;
    return;
}



// ============================================================================
// 函数: StreamOutputFormatter - 流输出格式化器
// 功能: 处理单个字符的流输出，包括缓冲区管理和错误处理
// 参数:
//   param_1 - 流对象指针
//   param_2 - 要输出的字符
//   param_3 - 保留参数1
//   param_4 - 保留参数2
// 返回值: 流对象指针
// ============================================================================
longlong * StreamOutputFormatter(longlong *param_1, undefined1 param_2, 
                                undefined8 param_3, undefined8 param_4)
{
    longlong *stream_buffer;
    char exception_flag;
    longlong stream_base;
    longlong buffer_count;
    int error_code;
    int error_mask;
    int char_result;
    longlong *stack_stream;
    char stack_flag;
    
    error_code = 0;
    char_result = 0;
    StreamInitializer(&stack_stream, param_1, param_3, param_4, 0);
    
    if (stack_flag != '\0') {
        // 获取缓冲区中可用字符数
        buffer_count = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
        if (buffer_count < 2) {
            buffer_count = 0;
        } else {
            buffer_count = buffer_count - 1;
        }
        
        stream_base = *param_1;
        error_mask = 4;
        
        // 检查流状态标志
        if ((*(uint *)((longlong)*(int *)(stream_base + 4) + 0x18 + (longlong)param_1) & 0x1c0) == 0x40) {
            // 优化路径：直接输出字符
        optimized_output_path:
            char_result = StreamBufferPutChar(
                *(undefined8 *)((longlong)*(int *)(stream_base + 4) + 0x48 + (longlong)param_1),
                param_2);
            
            if (char_result == -1) {
                error_code = error_mask;
            }
            
            // 处理缓冲区中剩余字符
            for (; (char_result = error_code, error_code == 0 && (0 < buffer_count)); buffer_count = buffer_count - 1) {
                char_result = StreamBufferPutChar(
                    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                    *(undefined1 *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
                
                if (char_result == -1) {
                    error_code = error_mask;
                }
            }
        } else {
            // 标准路径：逐个字符输出
            while (error_code == 0) {
                if (buffer_count < 1) {
                    stream_base = *param_1;
                    goto optimized_output_path;
                }
                
                char_result = StreamBufferPutChar(
                    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                    *(undefined1 *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
                
                if (char_result == -1) {
                    error_code = error_mask;
                }
                
                buffer_count = buffer_count - 1;
                char_result = error_code;
            }
        }
    }
    
    // 重置缓冲区计数器
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
    
    // 设置流状态
    SetStreamState((longlong)*(int *)(*param_1 + 4) + (longlong)param_1, error_code, 0, param_4, char_result);
    
    // 检查异常状态
    exception_flag = CheckUncaughtException();
    if (exception_flag == '\0') {
        StreamFlush(stack_stream);
    }
    
    // 处理文件锁定
    stream_buffer = *(longlong **)((longlong)*(int *)(*stack_stream + 4) + 0x48 + (longlong)stack_stream);
    if (stream_buffer != (longlong *)0x0) {
        if (*(code **)(*stream_buffer + 0x10) == (code *)&STREAM_UNLOCK_HANDLER) {
            if (stream_buffer[0x10] != 0) {
                UnlockFile();
            }
        } else {
            (**(code **)(*stream_buffer + 0x10))();
        }
    }
    
    return param_1;
}



// ============================================================================
// 函数: StreamInitializer - 流初始化器
// 功能: 初始化流对象，处理文件锁定和缓冲区刷新
// 参数:
//   param_1 - 初始化目标指针
//   param_2 - 流对象指针
// 返回值: 初始化目标指针
// ============================================================================
undefined8 * StreamInitializer(undefined8 *param_1, longlong *param_2)
{
    longlong *stream_buffer;
    longlong stream_base;
    
    // 设置流对象引用
    *param_1 = param_2;
    
    // 获取流缓冲区
    stream_buffer = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
    if (stream_buffer != (longlong *)0x0) {
        // 处理文件锁定
        if (*(code **)(*stream_buffer + 8) == (code *)&STREAM_LOCK_HANDLER) {
            if (stream_buffer[0x10] != 0) {
                LockFile();
            }
        } else {
            (**(code **)(*stream_buffer + 8))();
        }
    }
    
    stream_base = *param_2;
    
    // 检查是否需要刷新缓冲区
    if (((*(int *)((longlong)*(int *)(stream_base + 4) + 0x10 + (longlong)param_2) == 0) &&
         (stream_buffer = *(longlong **)((longlong)*(int *)(stream_base + 4) + 0x50 + (longlong)param_2),
          stream_buffer != (longlong *)0x0)) && (stream_buffer != param_2)) {
        FlushOutputStream();
        stream_base = *param_2;
    }
    
    // 设置初始化状态标志
    *(bool *)(param_1 + 1) = *(int *)((longlong)*(int *)(stream_base + 4) + 0x10 + (longlong)param_2) == 0;
    
    return param_1;
}






// ============================================================================
// 函数: StreamUnlockHandler - 流解锁处理器
// 功能: 处理流对象的解锁操作，确保资源正确释放
// 参数:
//   param_1 - 流对象指针数组
// 返回值: 无
// ============================================================================
void StreamUnlockHandler(longlong *param_1)
{
    longlong *stream_buffer;
    
    // 获取流缓冲区
    stream_buffer = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
    if (stream_buffer != (longlong *)0x0) {
        // 检查解锁处理器类型
        if (*(code **)(*stream_buffer + 0x10) != (code *)&STREAM_UNLOCK_HANDLER) {
            // 使用自定义解锁处理器
            (**(code **)(*stream_buffer + 0x10))();
            return;
        }
        
        // 使用标准解锁处理器
        if (stream_buffer[0x10] != 0) {
            UnlockFile();
            return;
        }
    }
    return;
}






// ============================================================================
// 函数: StreamFlushAndUnlock - 流刷新和解锁处理器
// 功能: 刷新流缓冲区并处理解锁操作，确保数据完整性
// 参数:
//   param_1 - 流对象指针数组
// 返回值: 无
// ============================================================================
void StreamFlushAndUnlock(longlong *param_1)
{
    longlong *stream_buffer;
    char exception_flag;
    
    // 检查异常状态
    exception_flag = CheckUncaughtException();
    if (exception_flag == '\0') {
        // 无异常时刷新流
        StreamFlush(*param_1);
    }
    
    // 获取流缓冲区
    stream_buffer = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
    if (stream_buffer != (longlong *)0x0) {
        // 检查解锁处理器类型
        if (*(code **)(*stream_buffer + 0x10) != (code *)&STREAM_UNLOCK_HANDLER) {
            // 使用自定义解锁处理器
            (**(code **)(*stream_buffer + 0x10))();
            return;
        }
        
        // 使用标准解锁处理器
        if (stream_buffer[0x10] != 0) {
            UnlockFile();
            return;
        }
    }
    return;
}



// ============================================================================
// 函数: StreamDataWriter - 流数据写入器
// 功能: 将字符串数据写入流缓冲区，支持大数据量和错误处理
// 参数:
//   param_1 - 流对象指针
//   param_2 - 要写入的字符串数据
//   param_3 - 保留参数1
//   param_4 - 保留参数2
// 返回值: 流对象指针
// ============================================================================
longlong * StreamDataWriter(longlong *param_1, longlong param_2, undefined8 param_3, undefined8 param_4)
{
    longlong *stream_buffer;
    char exception_flag;
    int write_result;
    longlong stream_base;
    undefined4 error_code1;
    longlong available_space;
    longlong string_length;
    undefined4 error_code2;
    longlong *stack_stream;
    char stack_flag;
    
    error_code1 = 0;
    error_code2 = 0;
    string_length = -1;
    
    // 计算字符串长度
    do {
        string_length = string_length + 1;
    } while (*(char *)(param_2 + string_length) != '\0');
    
    // 获取可用缓冲区空间
    available_space = *(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
    if ((available_space < 1) || (available_space <= string_length)) {
        available_space = 0;
    } else {
        available_space = available_space - string_length;
    }
    
    // 初始化流写入操作
    StreamInitializer(&stack_stream, param_1, param_3, param_4, 0);
    
    if (stack_flag == '\0') {
        error_code1 = 4;
    } else {
        stream_base = *param_1;
        
        // 检查是否为优化写入模式
        if ((*(uint *)((longlong)*(int *)(stream_base + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
            // 标准模式：逐个字符写入填充空间
            for (; 0 < available_space; available_space = available_space - 1) {
                write_result = StreamBufferPutChar(
                    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                    *(undefined1 *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
                
                if (write_result == -1) goto write_error_handler;
            }
            stream_base = *param_1;
        }
        
        // 批量写入字符串数据
        write_result = StreamBufferPutString(
            *(undefined8 *)((longlong)*(int *)(stream_base + 4) + 0x48 + (longlong)param_1),
            param_2, string_length);
        
        if (write_result == string_length) {
            // 写入成功，处理剩余空间
            for (; 0 < available_space; available_space = available_space - 1) {
                write_result = StreamBufferPutChar(
                    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
                    *(undefined1 *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1));
                
                if (write_result == -1) goto write_error_handler;
            }
        } else {
        write_error_handler:
            error_code1 = 4;
            error_code2 = 4;
        }
        
        // 重置缓冲区计数器
        *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
    }
    
    // 设置流状态
    SetStreamState((longlong)*(int *)(*param_1 + 4) + (longlong)param_1, error_code1, 0, param_4, error_code2);
    
    // 检查异常状态
    exception_flag = CheckUncaughtException();
    if (exception_flag == '\0') {
        StreamFlush(stack_stream);
    }
    
    // 处理文件解锁
    stream_buffer = *(longlong **)((longlong)*(int *)(*stack_stream + 4) + 0x48 + (longlong)stack_stream);
    if (stream_buffer != (longlong *)0x0) {
        if (*(code **)(*stream_buffer + 0x10) == (code *)&STREAM_UNLOCK_HANDLER) {
            if (stream_buffer[0x10] != 0) {
                UnlockFile();
            }
        } else {
            (**(code **)(*stream_buffer + 0x10))();
        }
    }
    
    return param_1;
}



longlong *
FUN_1800a1310(longlong *param_1,longlong *param_2,longlong param_3,ulonglong param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plStack_58;
  longlong lStack_50;
  undefined1 auStack_48 [32];
  
  switch(*(undefined4 *)(param_3 + 0x28)) {
  case 0:
    plVar6 = (longlong *)*param_2;
    lVar7 = param_2[1];
    for (lVar5 = *(longlong *)(param_3 + 0x30); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x58)) {
      plStack_58 = plVar6;
      lStack_50 = lVar7;
      plVar1 = (longlong *)FUN_1800a1310(auStack_48,&plStack_58,lVar5,param_4 & 0xffffffff,param_5);
      plVar6 = (longlong *)*plVar1;
      lVar7 = plVar1[1];
    }
    goto code_r0x0001800a1605;
  case 1:
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_18009fc60(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
  case 2:
    if ((param_4 & 1) == 0) {
      plVar1 = (longlong *)*param_2;
      lVar7 = param_2[1];
      if (0 < (int)param_5) {
        uVar4 = (ulonglong)param_5;
        plStack_58 = plVar1;
        lStack_50 = lVar7;
        do {
          FUN_1800a0e50(lVar7,9);
          if (plVar1 != (longlong *)0x0) {
            FUN_1800a1160(lVar7,plVar1);
          }
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    lVar7 = *(longlong *)(param_3 + 8);
    if (lVar7 == 0) {
      lVar2 = 0x180d48d24;
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(param_3 + 0x18);
      lVar2 = lVar7;
    }
    lVar3 = 0x180d48d24;
    if (lVar7 != 0) {
      lVar3 = lVar7;
    }
    plVar1 = (longlong *)FUN_1800a0350(auStack_48,lVar3,lVar5 + lVar2,0,&plStack_58);
    break;
  case 3:
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0040(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
  case 4:
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0820(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
  case 5:
    plVar1 = (longlong *)*param_2;
    lVar7 = param_2[1];
    plStack_58 = plVar1;
    lStack_50 = lVar7;
    if ((param_4 & 1) == 0) {
      if (0 < (int)param_5) {
        uVar4 = (ulonglong)param_5;
        do {
          FUN_1800a0e50(lVar7,9);
          if (plVar1 != (longlong *)0x0) {
            FUN_1800a1160(lVar7,plVar1);
          }
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      plStack_58 = (longlong *)*param_2;
      lStack_50 = param_2[1];
    }
    lVar7 = lStack_50;
    FUN_1800a0e50(lStack_50,0x3c);
    plVar1 = plStack_58;
    if (plStack_58 != (longlong *)0x0) {
      FUN_1800a1160(lVar7,plStack_58);
    }
    FUN_1800a0e50(lVar7,0x3f);
    if (plVar1 != (longlong *)0x0) {
      FUN_1800a1160(lVar7,plVar1);
    }
    FUN_1800a0e50(lVar7,0x78);
    if (plVar1 != (longlong *)0x0) {
      FUN_1800a1160(lVar7,plVar1);
    }
    FUN_1800a0e50(lVar7,0x6d);
    if (plVar1 != (longlong *)0x0) {
      FUN_1800a1160(lVar7,plVar1);
    }
    FUN_1800a0e50(lVar7,0x6c);
    if (plVar1 != (longlong *)0x0) {
      FUN_1800a1160(lVar7,plVar1);
    }
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a05a0(auStack_48,&plStack_58,param_3);
    lVar7 = *plVar1;
    lVar5 = plVar1[1];
    FUN_1800a0e50(lVar5,0x3f);
    if (lVar7 != 0) {
      FUN_1800a1160(lVar5,lVar7);
    }
    FUN_1800a0e50(lVar5,0x3e);
    if (lVar7 != 0) {
      FUN_1800a1160(lVar5,lVar7);
    }
    *param_2 = lVar7;
    param_2[1] = lVar5;
    goto FUN_1800a1618;
  case 6:
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0a00(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
  case 7:
    plStack_58 = (longlong *)*param_2;
    lStack_50 = param_2[1];
    plVar1 = (longlong *)FUN_1800a0c50(auStack_48,&plStack_58,param_3,param_4,param_5);
    break;
  default:
    goto FUN_1800a1618;
  }
  plVar6 = (longlong *)*plVar1;
  lVar7 = plVar1[1];
code_r0x0001800a1605:
  *param_2 = (longlong)plVar6;
  param_2[1] = lVar7;
FUN_1800a1618:
  if ((param_4 & 1) == 0) {
    lVar7 = param_2[1];
    FUN_1800a0e50(lVar7,10);
    if (*param_2 != 0) {
      FUN_1800a1160(lVar7);
    }
  }
  lVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar7;
  return param_1;
}



longlong * FUN_1800a1326(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong in_RAX;
  longlong *plVar2;
  longlong *unaff_RBX;
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R15;
  if ((uint)in_RAX < 8) {
    *(undefined8 *)(in_R11 + 8) = unaff_RSI;
    *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
                    // WARNING: Could not recover jumptable at 0x0001800a135a. Too many branches
                    // WARNING: Treating indirect jump as call
    plVar2 = (longlong *)
             (*(code *)((ulonglong)*(uint *)(&UNK_1800a1660 + in_RAX * 4) + 0x180000000))();
    return plVar2;
  }
  if ((param_4 & 1) == 0) {
    lVar1 = unaff_RBX[1];
    FUN_1800a0e50(lVar1,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar1);
    }
  }
  lVar1 = unaff_RBX[1];
  *param_1 = *unaff_RBX;
  param_1[1] = lVar1;
  return param_1;
}






// 函数: void FUN_1800a1340(void)
void FUN_1800a1340(void)

{
  longlong in_RAX;
  undefined8 unaff_RSI;
  longlong in_R11;
  undefined8 unaff_R14;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_R14;
                    // WARNING: Could not recover jumptable at 0x0001800a135a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((ulonglong)*(uint *)(&UNK_1800a1660 + in_RAX * 4) + 0x180000000))();
  return;
}






// 函数: void FUN_1800a146a(undefined8 param_1,undefined8 *param_2)
void FUN_1800a146a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar6;
  longlong *unaff_R12;
  ulonglong unaff_R15;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  *(undefined8 *)(unaff_RBP + -0x38) = uVar1;
  *(undefined8 *)(unaff_RBP + -0x30) = uVar4;
  if ((unaff_R15 & 1) == 0) {
    *(undefined8 *)(unaff_RBP + -0x38) = uVar1;
    *(undefined8 *)(unaff_RBP + -0x30) = uVar4;
    if (0 < (int)*(uint *)(unaff_RBP + 0x48)) {
      uVar1 = *(undefined8 *)(unaff_RBP + -0x30);
      uVar6 = (ulonglong)*(uint *)(unaff_RBP + 0x48);
      lVar2 = *(longlong *)(unaff_RBP + -0x38);
      do {
        FUN_1800a0e50(uVar1,9);
        if (lVar2 != 0) {
          FUN_1800a1160(uVar1,lVar2);
        }
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar2 = unaff_RBX[1];
    *(longlong *)(unaff_RBP + -0x38) = *unaff_RBX;
    *(longlong *)(unaff_RBP + -0x30) = lVar2;
  }
  uVar1 = *(undefined8 *)(unaff_RBP + -0x30);
  FUN_1800a0e50(uVar1,0x3c);
  lVar2 = *(longlong *)(unaff_RBP + -0x38);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x3f);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x78);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x6d);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  FUN_1800a0e50(uVar1,0x6c);
  if (lVar2 != 0) {
    FUN_1800a1160(uVar1,lVar2);
  }
  lVar2 = unaff_RBX[1];
  *(longlong *)(unaff_RBP + -0x38) = *unaff_RBX;
  *(longlong *)(unaff_RBP + -0x30) = lVar2;
  plVar5 = (longlong *)FUN_1800a05a0(unaff_RBP + -0x28,unaff_RBP + -0x38);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  FUN_1800a0e50(lVar3,0x3f);
  if (lVar2 != 0) {
    FUN_1800a1160(lVar3,lVar2);
  }
  FUN_1800a0e50(lVar3,0x3e);
  if (lVar2 != 0) {
    FUN_1800a1160(lVar3,lVar2);
  }
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar3;
  if ((unaff_R15 & 1) == 0) {
    lVar2 = unaff_RBX[1];
    FUN_1800a0e50(lVar2,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar2);
    }
  }
  lVar2 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar2;
  return;
}






// 函数: void FUN_1800a15ad(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800a15ad(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R12;
  ulonglong unaff_R15;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(unaff_RBP + -0x38) = *param_2;
  *(undefined4 *)(unaff_RBP + -0x34) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x30) = uVar3;
  *(undefined4 *)(unaff_RBP + -0x2c) = uVar4;
  puVar5 = (undefined4 *)
           FUN_1800a0820(unaff_RBP + -0x28,unaff_RBP + -0x38,param_3,param_4,
                         *(undefined4 *)(unaff_RBP + 0x48));
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *(undefined4 *)unaff_RBX = *puVar5;
  *(undefined4 *)((longlong)unaff_RBX + 4) = uVar2;
  *(undefined4 *)(unaff_RBX + 1) = uVar3;
  *(undefined4 *)((longlong)unaff_RBX + 0xc) = uVar4;
  if ((unaff_R15 & 1) == 0) {
    lVar1 = unaff_RBX[1];
    FUN_1800a0e50(lVar1,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar1);
    }
  }
  lVar1 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar1;
  return;
}






// 函数: void FUN_1800a1618(void)
void FUN_1800a1618(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong *unaff_R12;
  ulonglong unaff_R15;
  
  if ((unaff_R15 & 1) == 0) {
    lVar1 = unaff_RBX[1];
    FUN_1800a0e50(lVar1,10);
    if (*unaff_RBX != 0) {
      FUN_1800a1160(lVar1);
    }
  }
  lVar1 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar1;
  return;
}






// 函数: void FUN_1800a162b(void)
void FUN_1800a162b(void)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong *unaff_R12;
  
  lVar1 = unaff_RBX[1];
  FUN_1800a0e50(lVar1,10);
  if (*unaff_RBX != 0) {
    FUN_1800a1160(lVar1);
  }
  lVar1 = unaff_RBX[1];
  *unaff_R12 = *unaff_RBX;
  unaff_R12[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a16b0(longlong param_1,int param_2)
void FUN_1800a16b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined1 auStack_88 [32];
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  ulonglong *puStack_58;
  longlong *plStack_50;
  char cStack_48;
  undefined1 auStack_47 [7];
  longlong lStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  if (param_2 != -1) {
    uVar1 = **(ulonglong **)(param_1 + 0x40);
    cVar7 = (char)param_2;
    if ((uVar1 == 0) || ((longlong)**(int **)(param_1 + 0x58) + uVar1 <= uVar1)) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          lVar6 = *(longlong *)(param_1 + 0x88);
          **(longlong **)(param_1 + 0x18) = lVar6;
          **(longlong **)(param_1 + 0x38) = lVar6;
          **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar6;
        }
        if (*(longlong *)(param_1 + 0x68) == 0) {
          fputc((int)cVar7,*(undefined8 *)(param_1 + 0x80));
        }
        else {
          plStack_50 = &lStack_40;
          puStack_58 = &uStack_10;
          puStack_60 = auStack_30;
          puStack_68 = &uStack_38;
          cStack_48 = cVar7;
          iVar3 = _out___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z
                            (*(longlong *)(param_1 + 0x68),param_1 + 0x74,&cStack_48,auStack_47);
          if (-1 < iVar3) {
            if (iVar3 < 2) {
              lVar6 = lStack_40 - (longlong)auStack_30;
              if ((lVar6 == 0) ||
                 (lVar5 = fwrite(auStack_30,1,lVar6,*(undefined8 *)(param_1 + 0x80)), lVar6 == lVar5
                 )) {
                *(undefined1 *)(param_1 + 0x71) = 1;
              }
            }
            else if (iVar3 == 3) {
              fputc((int)cStack_48,*(undefined8 *)(param_1 + 0x80));
            }
          }
        }
      }
    }
    else {
      pcVar4 = (char *)__Pninc___basic_streambuf_DU__char_traits_D_std___std__IEAAPEADXZ();
      *pcVar4 = cVar7;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_88);
}






// 函数: void FUN_1800a1710(longlong param_1)
void FUN_1800a1710(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong unaff_RBX;
  longlong lVar4;
  char unaff_DIL;
  bool in_ZF;
  char in_stack_00000040;
  longlong in_stack_00000048;
  undefined8 in_stack_00000050;
  ulonglong in_stack_00000078;
  
  if (!in_ZF) {
    if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar4 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar4;
      **(longlong **)(unaff_RBX + 0x38) = lVar4;
      **(int **)(unaff_RBX + 0x50) = (int)uVar1 - (int)lVar4;
    }
    if (*(longlong *)(unaff_RBX + 0x68) == 0) {
      fputc((int)unaff_DIL,*(undefined8 *)(unaff_RBX + 0x80));
    }
    else {
      in_stack_00000040 = unaff_DIL;
      iVar2 = _out___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEBD1AEAPEBDPEAD3AEAPEAD_Z
                        (*(longlong *)(unaff_RBX + 0x68),unaff_RBX + 0x74,&stack0x00000040,
                         &stack0x00000041,&stack0x00000050);
      if (-1 < iVar2) {
        if (iVar2 < 2) {
          lVar4 = in_stack_00000048 - (longlong)&stack0x00000058;
          if ((lVar4 == 0) ||
             (lVar3 = fwrite(&stack0x00000058,1,lVar4,*(undefined8 *)(unaff_RBX + 0x80)),
             lVar4 == lVar3)) {
            *(undefined1 *)(unaff_RBX + 0x71) = 1;
          }
        }
        else if (iVar2 == 3) {
          fputc((int)in_stack_00000040,*(undefined8 *)(unaff_RBX + 0x80));
        }
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1800a1832(void)
void FUN_1800a1832(void)

{
  ulonglong in_stack_00000078;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a1850(longlong param_1)
void FUN_1800a1850(longlong param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong *plStack_48;
  longlong lStack_38;
  undefined1 auStack_30 [32];
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x68) != 0) && (*(char *)(param_1 + 0x71) != '\0')) &&
     (iVar1 = FUN_1800a16b0(param_1,0xffffffff), iVar1 != -1)) {
    plStack_48 = &lStack_38;
    iVar1 = _unshift___codecvt_DDU_Mbstatet___std__QEBAHAEAU_Mbstatet__PEAD1AEAPEAD_Z
                      (*(undefined8 *)(param_1 + 0x68),param_1 + 0x74,auStack_30,&uStack_10);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) goto LAB_1800a18fd;
    if (lStack_38 - (longlong)auStack_30 != 0) {
      fwrite(auStack_30,1,lStack_38 - (longlong)auStack_30,*(undefined8 *)(param_1 + 0x80));
    }
  }
LAB_1800a18fd:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a1920(longlong param_1,longlong param_2,int param_3)
void FUN_1800a1920(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uStackX_8;
  undefined8 auStackX_10 [2];
  undefined8 uStackX_20;
  
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(bool *)(param_1 + 0x7c) = param_3 == 1;
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ();
  if (param_2 != 0) {
    uStackX_8 = 0;
    auStackX_10[0] = 0;
    uStackX_20 = 0;
    _get_stream_buffer_pointers(param_2,&uStackX_8,auStackX_10,&uStackX_20);
    *(undefined8 *)(param_1 + 0x18) = uStackX_8;
    *(undefined8 *)(param_1 + 0x20) = uStackX_8;
    *(undefined8 *)(param_1 + 0x38) = auStackX_10[0];
    *(undefined8 *)(param_1 + 0x40) = auStackX_10[0];
    *(undefined8 *)(param_1 + 0x50) = uStackX_20;
    *(undefined8 *)(param_1 + 0x58) = uStackX_20;
  }
  *(undefined8 *)(param_1 + 0x74) = _DAT_180d48d38;
  *(longlong *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800a19c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = 0;
  }
  else {
    cVar1 = FUN_1800a1850();
    lVar3 = param_1;
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
    iVar2 = fclose(*(undefined8 *)(param_1 + 0x80));
    if (iVar2 != 0) {
      lVar3 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  __Init___basic_streambuf_DU__char_traits_D_std___std__IEAAXXZ(param_1);
  *(undefined8 *)(param_1 + 0x74) = _DAT_180d48d38;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return lVar3;
}






// 函数: void FUN_1800a1a40(undefined8 *param_1)
void FUN_1800a1a40(undefined8 *param_1)

{
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  return;
}



undefined8 *
FUN_1800a1a70(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,uVar1);
  }
  return param_1;
}



undefined8 * FUN_1800a1ae0(undefined8 *param_1,longlong param_2)

{
  *param_1 = &UNK_18098b928;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




