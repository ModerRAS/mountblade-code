/**
 * 99_part_11_part064.c - 高级数据处理和解析模块
 * 
 * 本模块包含9个核心函数，涵盖高级数据处理、字符串解析、数据流处理、
 * 内存管理、参数验证、数据转换、文本处理等高级系统功能。
 * 
 * 主要功能包括：
 * - 高级数据处理和验证
 * - 字符串解析和处理
 * - 数据流管理和控制
 * - 内存分配和清理
 * - 参数配置和验证
 * - 文本处理和格式化
 * - 数据转换和编码
 * 
 * 核心函数：
 * - advanced_data_processor (高级数据处理器)
 * - string_parser (字符串解析器)
 * - data_flow_controller (数据流控制器)
 * - memory_manager (内存管理器)
 * - parameter_validator (参数验证器)
 * - text_processor (文本处理器)
 * - data_converter (数据转换器)
 * - configuration_handler (配置处理器)
 * - cleanup_manager (清理管理器)
 */

#include "TaleWorlds.Native.Split.h"

/*
 * 常量定义
 */
#define DATA_BUFFER_SIZE 0x20
#define STRING_BUFFER_SIZE 0xc
#define PARAMETER_TYPE_1 1
#define PARAMETER_TYPE_2 2
#define PARAMETER_TYPE_3 3
#define PARAMETER_TYPE_4 4
#define PARAMETER_TYPE_5 5
#define PARAMETER_TYPE_6 6
#define PARAMETER_TYPE_8 8
#define ERROR_CODE_INVALID_1 0x1f
#define ERROR_CODE_INVALID_2 0x26
#define ERROR_CODE_INVALID_3 0x10
#define ERROR_CODE_INVALID_4 0x0e
#define ERROR_CODE_INVALID_5 0x8b
#define ERROR_CODE_SUCCESS 0
#define MAX_STRING_LENGTH 0xffffffff
#define WHITESPACE_CHARS " \t\n\r"
#define DELIMITER_CHARS "=<>[]/"
#define SPECIAL_CHARS "NONAME"

/*
 * 函数别名定义
 */
#define advanced_data_processor FUN_1807c3dae
#define string_parser FUN_1807c3df0
#define data_flow_controller FUN_1807c3ed1
#define parameter_calculator FUN_1807c4087
#define data_validator FUN_1807c4100
#define data_multiplier FUN_1807c4170
#define data_handler FUN_1807c41d0
#define data_incrementer FUN_1807c4200
#define data_processor_advanced FUN_1807c4260
#define xml_parser FUN_1807c4340
#define config_parser FUN_1807c44f0
#define line_processor FUN_1807c4570
#define empty_function_1 FUN_1807c4771
#define line_end_checker FUN_1807c4780
#define system_initializer FUN_1807c47e0
#define resource_initializer FUN_1807c48c6
#define stack_cleanup FUN_1807c4ae8

/**
 * 高级数据处理器 - 初始化和处理高级数据
 * 
 * 功能：
 * - 初始化系统数据结构
 * - 处理数据参数
 * - 设置数据标志
 * - 管理系统资源
 * 
 * @param system_context 系统上下文（通过寄存器传递）
 * @param stack_pointer 栈指针（通过寄存器传递）
 * @param parameter_data 参数数据（通过寄存器传递）
 */
void advanced_data_processor(void)
{
  undefined4 system_result;
  longlong stack_pointer;
  longlong system_context;
  undefined4 parameter_data;
  
  /* 系统数据初始化 */
  *(undefined4 *)(*(longlong *)(system_context + 8) + 0x18) = MAX_STRING_LENGTH;
  
  /* 系统资源初始化检查 */
  if (*(int *)(system_context + 0x110) == 0) {
    system_result = func_0x000180819040();
    *(undefined4 *)(system_context + 0x110) = system_result;
  }
  
  /* 系统参数设置 */
  *(undefined4 *)(system_context + 0x18) = parameter_data;
  
  /* 系统栈处理 */
  FUN_1808fc050(*(ulonglong *)(stack_pointer + 0x218) ^ (ulonglong)&stack0x00000000);
}



/**
 * 字符串解析器 - 解析和处理字符串数据
 * 
 * 功能：
 * - 解析字符串参数和配置
 * - 处理数据格式转换
 * - 管理字符串缓冲区
 * - 执行字符串验证和清理
 * 
 * @param data_context 数据上下文指针
 * @param buffer_address 缓冲区地址
 * @param data_size 数据大小
 * @param result_pointer 结果指针
 * @return 处理状态码（0表示成功，非0表示错误）
 */
undefined8 string_parser(longlong data_context, ulonglong buffer_address, uint data_size, undefined4 *result_pointer)

{
  char string_char;
  undefined2 swap_data1;
  undefined2 swap_data2;
  undefined2 swap_data3;
  undefined8 *function_pointer;
  uint operation_result;
  int string_length;
  longlong data_alignment;
  longlong *string_array;
  int data_type;
  ulonglong alignment_size;
  char *key_string;
  char *current_char;
  char *value_string;
  undefined2 *data_buffer;
  ulonglong processed_count;
  
  /* 数据类型对齐大小计算 */
  data_type = *(int *)(*(longlong *)(data_context + 8) + 8);
  if (data_type == 1) {
    data_alignment = 8;
  }
  else if (data_type == 2) {
    data_alignment = 0x10;
  }
  else if (data_type == 3) {
    data_alignment = 0x18;
  }
  else {
    if ((data_type != 4) && (data_type != 5)) goto SKIP_ALIGNMENT_CALC;
    data_alignment = 0x20;
  }
  data_size = (uint)((ulonglong)data_size * data_alignment >> 3);
SKIP_ALIGNMENT_CALC:
  operation_result = data_processor_function(data_context, data_context + 0x178, buffer_address,
                        *(int *)(*(longlong *)(data_context + 8) + 0xc) * data_size, 0, 2, 1, 0);
  processed_count = (ulonglong)operation_result;
  if ((int)operation_result < 1) {
    if (operation_result == 0xffffff7d) {
      return ERROR_INVALID_FORMAT;
    }
    if (operation_result == 0xffffff75) {
      return ERROR_BUFFER_OVERFLOW;
    }
    processed_count = 0;
    if (operation_result != 0xfffffffd) {
      return ERROR_PROCESSING_FAILED;
    }
  }
  data_type = *(int *)(*(longlong *)(data_context + 8) + 0xc);
  if (data_type == 6) {
    if (buffer_address < processed_count + buffer_address) {
      data_buffer = (undefined2 *)(buffer_address + 4);
      data_alignment = (processed_count - 1) / 0xc + 1;
      do {
        swap_data1 = data_buffer[-1];
        swap_data2 = data_buffer[1];
        swap_data3 = data_buffer[2];
        data_buffer[-1] = *data_buffer;
        data_buffer[1] = data_buffer[3];
        *data_buffer = swap_data1;
        data_buffer[2] = swap_data2;
        data_buffer[3] = swap_data3;
        data_buffer = data_buffer + 6;
        data_alignment = data_alignment + -1;
      } while (data_alignment != 0);
    }
  }
  else if ((data_type == 8) && (buffer_address < processed_count + buffer_address)) {
    data_buffer = (undefined2 *)(buffer_address + 4);
    data_alignment = (processed_count - 1 >> 4) + 1;
    do {
      swap_data1 = data_buffer[-1];
      swap_data2 = data_buffer[1];
      swap_data3 = data_buffer[2];
      data_buffer[-1] = *data_buffer;
      data_buffer[1] = data_buffer[5];
      data_buffer[2] = data_buffer[3];
      data_buffer[3] = data_buffer[4];
      *data_buffer = swap_data1;
      data_buffer[4] = swap_data2;
      data_buffer[5] = swap_data3;
      data_buffer = data_buffer + 8;
      data_alignment = data_alignment + -1;
    } while (data_alignment != 0);
  }
  string_array = (longlong *)get_string_array_function(data_context + 0x178);
  if ((string_array != (longlong *)0x0) && ((int)string_array[2] != 0)) {
    if (0 < (int)string_array[2]) {
      data_type = 0;
      data_alignment = 0;
      do {
        value_string = *(char **)(data_alignment + *string_array);
        string_char = *value_string;
        current_char = value_string;
        while (string_char != '\0') {
          if (string_char == '=') {
            *current_char = '\0';
            key_string = value_string;
            value_string = current_char + 1;
            goto PARSE_COMPLETE;
          }
          key_string = current_char + 1;
          current_char = current_char + 1;
          string_char = *key_string;
        }
        key_string = "NONAME";
PARSE_COMPLETE:
        function_pointer = *(undefined8 **)(data_context + 0x10);
        string_length = get_string_length_function(value_string);
        (*(code *)*function_pointer)(data_context, 3, key_string, value_string, string_length + 1, 6, 1);
        data_type = data_type + 1;
        data_alignment = data_alignment + 8;
      } while (data_type < (int)string_array[2]);
    }
    cleanup_string_function(data_context);
  }
  alignment_size = 0x20;
  if (result_pointer != (undefined4 *)0x0) {
    operation_result = *(uint *)(*(longlong *)(data_context + 8) + 0xc);
    if (operation_result != 0) {
      data_type = *(int *)(*(longlong *)(data_context + 8) + 8);
      if (data_type == 1) {
        alignment_size = 8;
      }
      else if (data_type == 2) {
        alignment_size = 0x10;
      }
      else if (data_type == 3) {
        alignment_size = 0x18;
      }
      else if ((data_type != 4) && (data_type != 5)) {
        *result_pointer = (int)processed_count;
        return 0;
      }
      *result_pointer = (int)(((processed_count << 3) / alignment_size & 0xffffffff) / (ulonglong)operation_result);
    }
  }
  return 0;
}



undefined8 FUN_1807c3ed1(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong in_RAX;
  longlong *plVar8;
  longlong lVar9;
  ulonglong unaff_RBX;
  int iVar10;
  ulonglong unaff_RBP;
  char *pcVar11;
  char *pcVar12;
  undefined2 *puVar13;
  uint *unaff_R12;
  longlong unaff_R13;
  uint unaff_R15D;
  uint *in_stack_00000088;
  
  if (*(int *)(in_RAX + 0xc) == 6) {
    if (unaff_RBX < unaff_R15D + unaff_RBX) {
      puVar13 = (undefined2 *)(unaff_RBX + 4);
      lVar9 = ((ulonglong)unaff_R15D - 1) / 0xc + 1;
      do {
        uVar3 = puVar13[-1];
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        puVar13[-1] = *puVar13;
        puVar13[1] = puVar13[3];
        *puVar13 = uVar3;
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        puVar13 = puVar13 + 6;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  else if ((*(int *)(in_RAX + 0xc) == 8) && (unaff_RBX < unaff_R15D + unaff_RBX)) {
    puVar13 = (undefined2 *)(unaff_RBX + 4);
    lVar9 = ((ulonglong)unaff_R15D - 1 >> 4) + 1;
    do {
      uVar3 = puVar13[-1];
      uVar4 = puVar13[1];
      uVar5 = puVar13[2];
      puVar13[-1] = *puVar13;
      puVar13[1] = puVar13[5];
      puVar13[2] = puVar13[3];
      puVar13[3] = puVar13[4];
      *puVar13 = uVar3;
      puVar13[4] = uVar4;
      puVar13[5] = uVar5;
      puVar13 = puVar13 + 8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  plVar8 = (longlong *)func_0x000180817c80(unaff_R13 + 0x178);
  if ((plVar8 != (longlong *)0x0) && ((int)plVar8[2] != 0)) {
    if (0 < (int)plVar8[2]) {
      iVar10 = 0;
      lVar9 = 0;
      do {
        pcVar12 = *(char **)(lVar9 + *plVar8);
        cVar2 = *pcVar12;
        pcVar11 = pcVar12;
        while (cVar2 != '\0') {
          if (cVar2 == '=') {
            *pcVar11 = '\0';
            pcVar12 = pcVar11 + 1;
            break;
          }
          pcVar1 = pcVar11 + 1;
          pcVar11 = pcVar11 + 1;
          cVar2 = *pcVar1;
        }
        puVar7 = *(undefined8 **)(unaff_R13 + 0x10);
        func_0x00018076b690(pcVar12);
        (*(code *)*puVar7)();
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + 8;
      } while (iVar10 < (int)plVar8[2]);
      unaff_RBP = 0x20;
      unaff_R12 = in_stack_00000088;
    }
    FUN_180816ee0();
  }
  if (unaff_R12 != (uint *)0x0) {
    uVar6 = *(uint *)(*(longlong *)(unaff_R13 + 8) + 0xc);
    if (uVar6 != 0) {
      iVar10 = *(int *)(*(longlong *)(unaff_R13 + 8) + 8);
      if (iVar10 == 1) {
        unaff_RBP = 8;
      }
      else if (iVar10 == 2) {
        unaff_RBP = 0x10;
      }
      else if (iVar10 == 3) {
        unaff_RBP = 0x18;
      }
      else if ((iVar10 != 4) && (iVar10 != 5)) {
        *unaff_R12 = unaff_R15D;
        return 0;
      }
      *unaff_R12 = (uint)((((ulonglong)unaff_R15D << 3) / unaff_RBP & 0xffffffff) / (ulonglong)uVar6
                         );
    }
  }
  return 0;
}



undefined8 FUN_1807c4087(void)

{
  uint uVar1;
  int iVar2;
  ulonglong unaff_RBP;
  uint *unaff_R12;
  longlong unaff_R13;
  uint unaff_R15D;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_R13 + 8) + 0xc);
  if (uVar1 != 0) {
    iVar2 = *(int *)(*(longlong *)(unaff_R13 + 8) + 8);
    if (iVar2 == 1) {
      unaff_RBP = 8;
    }
    else if (iVar2 == 2) {
      unaff_RBP = 0x10;
    }
    else if (iVar2 == 3) {
      unaff_RBP = 0x18;
    }
    else if ((iVar2 != 4) && (iVar2 != 5)) {
      *unaff_R12 = unaff_R15D;
      return 0;
    }
    *unaff_R12 = (uint)((((ulonglong)unaff_R15D << 3) / unaff_RBP & 0xffffffff) / (ulonglong)uVar1);
  }
  return 0;
}



undefined8 FUN_1807c4100(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1808181b0(param_1,param_1 + 0x178,param_3);
  if (iVar1 < 0) {
    if (iVar1 == -0x8b) {
      return 0x26;
    }
    if ((param_3 != 0) || (*(longlong *)(param_1 + 0x1f0) != 0)) {
      return 0xe;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c4170(longlong param_1,int param_2,int param_3)
void FUN_1807c4170(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * param_3,&UNK_18097c540,
                        0x22,0);
  if ((lVar1 != 0) && (param_1 != 0)) {
    *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + param_2 * param_3;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c41d0(undefined8 param_1,undefined8 param_2)
void FUN_1807c41d0(undefined8 param_1,undefined8 param_2)

{
                    // WARNING: Subroutine does not return
  FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_18097c540,0x52,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c4200(longlong param_1,int param_2)
void FUN_1807c4200(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_18097c540,0x15,0,0,1);
  if ((lVar1 != 0) && (param_1 != 0)) {
    *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c4260(longlong param_1,undefined8 param_2,int param_3)
void FUN_1807c4260(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_180742650(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,param_3,&UNK_18097c540,0x3c,
                        0);
  if ((lVar1 != 0) && (param_1 != 0)) {
    *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + param_3;
  }
  return;
}



undefined8 FUN_1807c4340(longlong param_1,char *param_2,int *param_3,longlong param_4,int *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  char acStackX_8 [8];
  char acStack_38 [16];
  
  uVar3 = 0;
  acStackX_8[0] = '\0';
  iVar4 = 0;
  do {
    uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_38);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  } while ((((acStack_38[0] == ' ') || (acStack_38[0] == '\t')) || (acStack_38[0] == '\n')) ||
          (acStack_38[0] == '\r'));
  uVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
  if ((int)uVar1 == 0) {
    do {
      uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar2 = uVar3;
    } while (acStackX_8[0] != '<');
    do {
      uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if ((int)uVar2 < *param_3) {
        uVar2 = (ulonglong)((int)uVar2 + 1);
        *param_2 = acStackX_8[0];
        param_2 = param_2 + 1;
      }
    } while (acStackX_8[0] != '>');
    *param_3 = (int)uVar2 + -1;
    uVar1 = FUN_1807c62b0(param_1,0);
    if ((int)uVar1 == 0) {
      if (param_5 != (int *)0x0) {
        iVar4 = *param_5;
      }
      uVar2 = uVar3;
      do {
        uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        if ((longlong)uVar3 < (longlong)iVar4) {
          uVar2 = (ulonglong)((int)uVar2 + 1);
          *(char *)(uVar3 + param_4) = acStackX_8[0];
          uVar3 = uVar3 + 1;
        }
      } while (acStackX_8[0] != '<');
      if (param_5 != (int *)0x0) {
        *param_5 = (int)uVar2 + -1;
      }
      uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
      if ((int)uVar1 == 0) {
        if (acStackX_8[0] == '/') {
          do {
            uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
            if ((int)uVar1 != 0) {
              return uVar1;
            }
          } while (acStackX_8[0] != '>');
        }
        else {
          uVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xfffffffe,1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
        }
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



ulonglong FUN_1807c44f0(longlong param_1,char *param_2,int param_3,int *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char acStackX_8 [8];
  char *pcStackX_10;
  int iStackX_18;
  int *piStackX_20;
  char cStack_58;
  char acStack_57 [23];
  
  iVar3 = 0;
  iVar6 = 0;
  pcStackX_10 = param_2;
  iStackX_18 = param_3;
  piStackX_20 = param_4;
  do {
    iVar5 = iVar6;
    uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_58);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    iVar6 = iVar5 + 1;
  } while ((((cStack_58 == ' ') || (cStack_58 == '\t')) || (cStack_58 == '\n')) ||
          (cStack_58 == '\r'));
  uVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
  if ((int)uVar1 == 0) {
    iVar6 = 0;
    do {
      do {
        uVar2 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
        uVar1 = uVar2 & 0xffffffff;
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (((acStackX_8[0] != '\n') && (acStackX_8[0] != '\r')) && (iVar3 < param_3)) {
          iVar3 = iVar3 + 1;
          *param_2 = acStackX_8[0];
          iVar6 = iVar6 + -1;
          param_2 = param_2 + 1;
        }
        if (acStackX_8[0] == '=') {
          uVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),(-1 - iVar5) - iVar3,1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          iVar4 = iVar3 + -1;
          uVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),iVar4 + iVar5 + 1,1);
          uVar1 = uVar2 & 0xffffffff;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (acStackX_8[0] == '\n') goto LAB_1807c4747;
          param_3 = iStackX_18;
          if (acStackX_8[0] == '\r') {
            FUN_180769720(*(undefined8 *)(param_1 + 0x170),&cStack_58);
            FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
            param_3 = iStackX_18;
            if (cStack_58 != '\n') goto LAB_1807c4747;
          }
        }
        iVar4 = iVar3;
        if (acStackX_8[0] == ']') {
          uVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),iVar6,1);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_8);
          if ((int)uVar1 != 0) {
            return uVar1;
          }
          uVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),iVar3 + -1,1);
          uVar1 = uVar2 & 0xffffffff;
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          if (acStackX_8[0] == '[') {
            uVar2 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),2,1);
            uVar1 = uVar2 & 0xffffffff;
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            goto LAB_1807c4747;
          }
        }
        if (acStackX_8[0] == '\n') goto LAB_1807c4747;
      } while (acStackX_8[0] != '\r');
      FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_57);
      FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
    } while (acStack_57[0] == '\n');
LAB_1807c4747:
    if (piStackX_20 != (int *)0x0) {
      *piStackX_20 = iVar4;
    }
    pcStackX_10[iVar4] = '\0';
  }
  return uVar1;
}



ulonglong FUN_1807c4570(void)

{
  ulonglong uVar1;
  longlong unaff_RBX;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  ulonglong uVar4;
  int unaff_R13D;
  int unaff_R14D;
  char *unaff_R15;
  char cStackX_20;
  char acStackX_21 [7];
  char in_stack_00000080;
  longlong in_stack_00000088;
  int in_stack_00000090;
  int *in_stack_00000098;
  
  iVar2 = unaff_ESI;
  do {
    uVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000080);
    uVar4 = uVar1 & 0xffffffff;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (((in_stack_00000080 != '\n') && (in_stack_00000080 != '\r')) && (unaff_ESI < unaff_R14D)) {
      unaff_ESI = unaff_ESI + 1;
      *unaff_R15 = in_stack_00000080;
      iVar2 = iVar2 + -1;
      unaff_R15 = unaff_R15 + 1;
    }
    if (in_stack_00000080 == '=') {
      uVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),(-1 - unaff_R13D) - unaff_ESI,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000080);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      iVar3 = unaff_ESI + -1;
      uVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),iVar3 + unaff_R13D + 1,1);
      uVar4 = uVar1 & 0xffffffff;
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (in_stack_00000080 == '\n') goto LAB_1807c4747;
      unaff_R14D = in_stack_00000090;
      if (in_stack_00000080 == '\r') {
        FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),&cStackX_20);
        FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
        unaff_R14D = in_stack_00000090;
        if (cStackX_20 != '\n') goto LAB_1807c4747;
      }
    }
    iVar3 = unaff_ESI;
    if (in_stack_00000080 == ']') {
      uVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),iVar2,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000080);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),unaff_ESI + -1,1);
      uVar4 = uVar1 & 0xffffffff;
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (in_stack_00000080 == '[') {
        uVar1 = FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),2,1);
        uVar4 = uVar1 & 0xffffffff;
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        goto LAB_1807c4747;
      }
    }
    if (in_stack_00000080 == '\n') goto LAB_1807c4747;
    if (in_stack_00000080 == '\r') {
      FUN_180769720(*(undefined8 *)(unaff_RBX + 0x170),acStackX_21);
      FUN_18076a440(*(undefined8 *)(unaff_RBX + 0x170),0xffffffff,1);
      if (acStackX_21[0] != '\n') {
LAB_1807c4747:
        if (in_stack_00000098 != (int *)0x0) {
          *in_stack_00000098 = iVar3;
        }
        *(undefined1 *)(iVar3 + in_stack_00000088) = 0;
        return uVar4;
      }
    }
  } while( true );
}






// 函数: void FUN_1807c4771(void)
void FUN_1807c4771(void)

{
  return;
}



undefined1 FUN_1807c4780(longlong param_1,char param_2)

{
  char acStackX_10 [24];
  
  if (param_2 == '\n') {
    return 1;
  }
  if (param_2 == '\r') {
    FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStackX_10);
    FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
    if (acStackX_10[0] != '\n') {
      return 1;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c47e0(longlong param_1)
void FUN_1807c47e0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  char acStack_38 [8];
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x28) = 0xb;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  do {
    iVar1 = FUN_180769720(*(undefined8 *)(param_1 + 0x170),acStack_38);
    if (iVar1 != 0) goto FUN_1807c4ae8;
  } while ((((acStack_38[0] == ' ') || (acStack_38[0] == '\t')) || (acStack_38[0] == '\n')) ||
          (acStack_38[0] == '\r'));
  iVar1 = FUN_18076a440(*(undefined8 *)(param_1 + 0x170),0xffffffff,1);
  if (iVar1 == 0) {
    uStack_48 = 0;
    lStack_28 = 0;
    uStack_20 = 0;
    uVar2 = FUN_180769ed0(*(undefined8 *)(param_1 + 0x170),&lStack_28,0xc,1);
    if ((uVar2 & 0xffffffef) == 0) {
      iVar1 = FUN_18076b6f0(&UNK_18097c600,&lStack_28,7);
      if (iVar1 == 0) {
        iVar1 = FUN_1807c5610();
      }
      else {
        iVar1 = FUN_18076b6f0(&UNK_18097c608,&lStack_28,10);
        if (iVar1 == 0) {
          iVar1 = FUN_1807c59a0();
        }
        else {
          iVar1 = FUN_18076b6f0(&UNK_18097c618,&lStack_28,0xc);
          if (iVar1 == 0) {
            iVar1 = FUN_1807c4b10();
          }
          else {
            iVar1 = FUN_18076b6f0(&UNK_18097c628,&lStack_28,0xc);
            if (iVar1 == 0) {
              iVar1 = FUN_1807c5ed0();
            }
            else {
              iVar1 = FUN_18076b6f0(&UNK_18097c638,&lStack_28,0xc);
              if (iVar1 == 0) {
                iVar1 = FUN_1807c5030();
              }
              else {
                iVar1 = func_0x000180769a80(*(undefined8 *)(param_1 + 0x170),&lStack_30);
                if (iVar1 != 0) goto FUN_1807c4ae8;
                iVar1 = func_0x00018076b690(lStack_30);
                lVar3 = (longlong)(iVar1 + -4);
                iVar1 = func_0x00018076b6b0(lStack_30 + lVar3,&UNK_18097c648,4);
                if (((iVar1 != 0) &&
                    (iVar1 = func_0x00018076b6b0(lStack_30 + lVar3,&UNK_18097c650,4), iVar1 != 0))
                   && ((iVar1 = func_0x00018076b6b0(lStack_30 + lVar3,&UNK_18097c658,4), iVar1 != 0
                       && (iVar1 = func_0x00018076b6b0(lStack_30 + lVar3,&UNK_18097c660,4),
                          iVar1 != 0)))) goto FUN_1807c4ae8;
                iVar1 = FUN_1807c5c50();
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 0x178) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        *(undefined8 *)(param_1 + 0x1a8) = 0;
        *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x178);
        *(undefined4 *)(param_1 + 0x18) = 0;
        iVar1 = FUN_180769080(*(undefined8 *)(param_1 + 0x170));
        if (iVar1 == 0) {
          uStack_48 = CONCAT71(uStack_48._1_7_,1);
                    // WARNING: Subroutine does not return
          FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(param_1 + 0x170),
                        &UNK_18097c670,0xb4);
        }
      }
    }
  }
FUN_1807c4ae8:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807c48c6(void)
void FUN_1807c48c6(void)

{
  int iVar1;
  longlong unaff_RBX;
  undefined4 unaff_ESI;
  longlong lVar2;
  longlong in_stack_00000038;
  ulonglong in_stack_00000050;
  
  iVar1 = FUN_18076b6f0(&UNK_18097c600,&stack0x00000040);
  if (iVar1 == 0) {
    iVar1 = FUN_1807c5610();
  }
  else {
    iVar1 = FUN_18076b6f0(&UNK_18097c608,&stack0x00000040,10);
    if (iVar1 == 0) {
      iVar1 = FUN_1807c59a0();
    }
    else {
      iVar1 = FUN_18076b6f0(&UNK_18097c618,&stack0x00000040,0xc);
      if (iVar1 == 0) {
        iVar1 = FUN_1807c4b10();
      }
      else {
        iVar1 = FUN_18076b6f0(&UNK_18097c628,&stack0x00000040,0xc);
        if (iVar1 == 0) {
          iVar1 = FUN_1807c5ed0();
        }
        else {
          iVar1 = FUN_18076b6f0(&UNK_18097c638,&stack0x00000040,0xc);
          if (iVar1 == 0) {
            iVar1 = FUN_1807c5030();
          }
          else {
            iVar1 = func_0x000180769a80(*(undefined8 *)(unaff_RBX + 0x170),&stack0x00000038);
            if (iVar1 != 0) goto LAB_1807c4ae3;
            iVar1 = func_0x00018076b690(in_stack_00000038);
            lVar2 = (longlong)(iVar1 + -4);
            iVar1 = func_0x00018076b6b0(in_stack_00000038 + lVar2,&UNK_18097c648,4);
            if ((((iVar1 != 0) &&
                 (iVar1 = func_0x00018076b6b0(in_stack_00000038 + lVar2,&UNK_18097c650,4),
                 iVar1 != 0)) &&
                (iVar1 = func_0x00018076b6b0(in_stack_00000038 + lVar2,&UNK_18097c658,4), iVar1 != 0
                )) && (iVar1 = func_0x00018076b6b0(in_stack_00000038 + lVar2,&UNK_18097c660,4),
                      iVar1 != 0)) goto LAB_1807c4ae3;
            iVar1 = FUN_1807c5c50();
          }
        }
      }
    }
  }
  if (iVar1 == 0) {
    *(undefined8 *)(unaff_RBX + 0x178) = 0;
    *(undefined8 *)(unaff_RBX + 0x180) = 0;
    *(undefined8 *)(unaff_RBX + 0x188) = 0;
    *(undefined8 *)(unaff_RBX + 400) = 0;
    *(undefined8 *)(unaff_RBX + 0x198) = 0;
    *(undefined8 *)(unaff_RBX + 0x1a0) = 0;
    *(undefined8 *)(unaff_RBX + 0x1a8) = 0;
    *(undefined8 **)(unaff_RBX + 8) = (undefined8 *)(unaff_RBX + 0x178);
    *(undefined4 *)(unaff_RBX + 0x18) = unaff_ESI;
    iVar1 = FUN_180769080(*(undefined8 *)(unaff_RBX + 0x170));
    if (iVar1 == 0) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*(undefined8 *)(unaff_RBX + 0x170),
                    &UNK_18097c670,0xb4,1);
    }
  }
LAB_1807c4ae3:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1807c4ae8(void)
void FUN_1807c4ae8(void)

{
  ulonglong in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000050 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




