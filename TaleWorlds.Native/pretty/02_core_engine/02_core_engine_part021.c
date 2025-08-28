#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part021.c - 核心引擎模块第21部分
// 本文件包含8个函数，主要涉及字符串处理、控制台操作、内存管理等核心功能

/**
 * 查找并处理用户会话中的错误消息
 * 
 * 该函数遍历用户会话列表，查找特定的错误消息模式（"user_capture_error"），
 * 并对找到的错误进行处理。函数使用字符串比较来匹配错误消息。
 * 
 * @param session_count 指向会话计数的指针，函数会递增此值
 */
void find_and_process_user_capture_error(int *session_count)
{
  char cVar1;
  char cVar2;
  int32_t uVar3;
  int64_t lVar4;
  int32_t *puVar5;
  char *pcVar6;
  uint64_t *puVar7;
  int iVar8;
  uint64_t uVar9;
  int8_t auStack_1f8 [64];
  int16_t auStack_1b8 [4];
  void *puStack_1b0;
  int32_t *puStack_1a8;
  int32_t uStack_1a0;
  uint64_t uStack_198;
  int32_t uStack_190;
  void *puStack_188;
  int64_t lStack_180;
  int32_t uStack_170;
  int64_t lStack_168;
  int64_t lStack_160;
  uint64_t uStack_158;
  int32_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_38;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1f8;
  iVar8 = 0;
  uStack_190 = 0;
  *session_count = *session_count + 1;
  if ((*(int64_t *)(session_count + 4) != 0) && (*(int64_t *)(session_count + 2) != 0)) {
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_1f8);
  }
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 3;
  lVar4 = CoreEngineDataTransformer(&puStack_188,system_main_module_state + 0x2c0);
  uStack_190 = 1;
  auStack_1b8[0] = 0x20;
  if (*(int64_t *)(lVar4 + 8) != 0) {
    FUN_180057980(lVar4,&lStack_168,auStack_1b8);
  }
  uStack_190 = 0;
  puStack_188 = &system_data_buffer_ptr;
  if (lStack_180 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_180 = 0;
  uStack_170 = 0;
  puStack_188 = &system_state_ptr;
  puStack_1b0 = &system_data_buffer_ptr;
  uStack_198 = 0;
  puStack_1a8 = (int32_t *)0x0;
  uStack_1a0 = 0;
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar5 = 0;
  puStack_1a8 = puVar5;
  uVar3 = CoreEngineSystemCleanup(puVar5);
  uStack_198 = CONCAT44(uStack_198._4_4_,uVar3);
  *puVar5 = 0x5f657375;
  puVar5[1] = 0x65726170;
  puVar5[2] = 0x635f746e;
  puVar5[3] = 0x6f736e6f;
  *(int16_t *)(puVar5 + 4) = 0x656c;
  *(int8_t *)((int64_t)puVar5 + 0x12) = 0;
  uStack_1a0 = 0x12;
  uVar9 = lStack_160 - lStack_168 >> 5;
  if (uVar9 != 0) {
    puVar7 = (uint64_t *)(lStack_168 + 8);
    do {
      if (*(int *)(puVar7 + 1) == 0x12) {
        pcVar6 = (char *)*puVar7;
        lVar4 = (int64_t)puVar5 - (int64_t)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar4];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) break;
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 4;
    } while ((uint64_t)(int64_t)iVar8 < uVar9);
  }
  puStack_1b0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 设置控制台文本颜色属性
 * 
 * 根据输入的颜色代码设置控制台文本的颜色。该函数维护一个颜色映射表，
 * 将内部颜色代码映射到Windows控制台API使用的颜色值。
 * 
 * @param param1 未使用的参数
 * @param color_code 颜色代码（0-15），映射到不同的控制台颜色
 * @return 成功返回1，失败返回0
 */
uint64_t set_console_text_color(uint64_t param1, int32_t color_code)
{
  int16_t console_color;
  int result;
  
  switch(color_code) {
  case 0:
    console_color = 4;
    break;
  case 1:
    console_color = 2;
    break;
  case 2:
    console_color = 1;
    break;
  case 3:
    console_color = 0xc;
    break;
  case 4:
    console_color = 10;
    break;
  case 5:
    console_color = 9;
    break;
  case 6:
    console_color = 3;
    break;
  case 7:
    console_color = 0xb;
    break;
  case 8:
    console_color = 6;
    break;
  case 9:
    console_color = 0xe;
    break;
  case 10:
    console_color = 5;
    break;
  case 0xb:
    console_color = 0xd;
    break;
  case 0xc:
    console_color = 7;
    break;
  default:
    console_color = 0xf;
  }
  result = SetConsoleTextAttribute(core_system_data_buffer, console_color);
  if (result == 0) {
    FUN_18005d3a0(&unknown_var_9952_ptr);
    return 0;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 处理用户界面消息事件
 * 
 * 根据消息类型执行不同的UI操作，包括文本显示、窗口管理、
 * 控制台操作等。这是核心引擎中处理UI事件的主要函数。
 * 
 * @param ui_context UI上下文指针，包含UI状态和配置信息
 */
void process_ui_message_event(int64_t ui_context)
{
  uint message_type;
  uint uVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  void *puVar9;
  void *puVar10;
  uint auStackX_8 [4];
  int8_t auStackX_18 [8];
  uint auStackX_20 [2];
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  
  message_type = *(uint *)(ui_context + 0x28);
  if (message_type < 9) {
    switch(message_type) {
    case 1:
      auStackX_8[0] = auStackX_8[0] & 0xffffff00;
      puVar9 = &system_buffer_ptr;
      if (*(void **)(ui_context + 0x38) != (void *)0x0) {
        puVar9 = *(void **)(ui_context + 0x38);
      }
      FUN_1806391a0(*(int64_t *)(ui_context + 0x20) + 0x20, puVar9, auStackX_8);
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x108))(plVar7, 1);
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7, &unknown_var_9984_ptr);
      puStack_70 = &system_data_buffer_ptr;
      uStack_58 = 0;
      puStack_68 = (uint64_t *)0x0;
      uStack_60 = 0;
      puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr, 0x10, 0x13);
      *(int8_t *)puVar5 = 0;
      puStack_68 = puVar5;
      uVar3 = CoreEngineSystemCleanup(puVar5);
      uStack_58 = CONCAT44(uStack_58._4_4_, uVar3);
      *puVar5 = 0x73726f7272655f;
      uStack_60 = 7;
      iVar8 = *(int *)(ui_context + 0x40) + -1;
      if (-1 < iVar8) {
        lVar6 = (int64_t)iVar8;
        do {
          if (*(char *)(lVar6 + *(int64_t *)(ui_context + 0x38)) == '_') goto code_r0x0001800630e9;
          iVar8 = iVar8 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      iVar8 = -1;
code_r0x0001800630e9:
      FUN_1806288c0(ui_context + 0x30, iVar8, &puStack_70);
      puStack_70 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    case 2:
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7, &unknown_var_32_ptr);
      FUN_180639250(*(int64_t *)(ui_context + 0x20) + 0xd8);
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7, &unknown_var_32_ptr);
      FUN_180639250(*(int64_t *)(ui_context + 0x20) + 0x20);
      if (((*(byte *)(*(int64_t *)(ui_context + 0x20) + 8) & 2) != 0) &&
         (iRam0000000180c912e0 = iRam0000000180c912e0 + -1, iRam0000000180c912e0 == 0)) {
        core_system_data_buffer = 0;
        lRam0000000180c912e8 = 0;
        LOCK();
        core_system_config_memory = 0;
        UNLOCK();
        FreeConsole();
      }
      *(int32_t *)(*(int64_t *)(ui_context + 0x20) + 8) = 0xe;
      *(uint64_t *)(*(int64_t *)(ui_context + 0x20) + 0x10) = 0xffffffff00000000;
      *(int8_t *)(*(int64_t *)(ui_context + 0x20) + 0x18) = 0;
      **(uint64_t **)(ui_context + 0x20) = 0;
      break;
    case 3:
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7, &unknown_var_32_ptr);
      FUN_180639250(*(int64_t *)(ui_context + 0x20) + 0xd8);
      FUN_18062da70(*(int64_t *)(ui_context + 0x20) + 0xe0);
      break;
    case 4:
      auStackX_18[0] = 0;
      puVar9 = *(void **)(*(int64_t *)(ui_context + 0x20) + 0xe8);
      puVar10 = &system_buffer_ptr;
      if (puVar9 != (void *)0x0) {
        puVar10 = puVar9;
      }
      FUN_1806391a0(*(int64_t *)(ui_context + 0x20) + 0xd8, puVar10, auStackX_18);
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x108))(plVar7, 1);
      plVar7 = (int64_t *)(*(int64_t *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7, &unknown_var_9984_ptr);
      break;
    case 5:
      iVar8 = *(int *)(ui_context + 0x58);
      if ((*(int *)(core_system_data_memory + 0x150) <= iVar8) &&
         (puVar5 = *(uint64_t **)(ui_context + 0x20),
         (*(uint64_t *)(ui_context + 0x60) & puVar5[2]) != 0)) {
        uVar2 = *(uint *)(ui_context + 0x40);
        puVar9 = &system_buffer_ptr;
        if (*(void **)(ui_context + 0x38) != (void *)0x0) {
          puVar9 = *(void **)(ui_context + 0x38);
        }
        if ((*(byte *)(puVar5 + 1) & 2) != 0) {
          set_console_text_color((uint64_t)*(uint *)(&system_memory_3480 + (int64_t)(int)message_type * 4) +
                        0x180000000, *(int32_t *)(ui_context + 0x50));
          iVar4 = WriteConsoleA(core_system_data_buffer, puVar9, uVar2, auStackX_20, 0);
          if ((iVar4 == 0) || (auStackX_20[0] < uVar2)) {
            FUN_18005d3a0(&unknown_var_92_ptr, puVar9);
          }
          iVar4 = SetConsoleTextAttribute(core_system_data_buffer, 0xf);
          if (iVar4 == 0) {
            FUN_18005d3a0(&unknown_var_9952_ptr);
          }
        }
        if ((*(byte *)(puVar5 + 1) & 8) != 0) {
          (**(code **)(puVar5[4] + 0x70))(puVar5 + 4, puVar9);
          if (1 < iVar8) {
            (**(code **)(puVar5[0x1b] + 0x70))(puVar5 + 0x1b, puVar9);
          }
        }
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(puVar9);
        }
      }
      break;
    case 6:
      if ((*(byte *)(*(int64_t *)(ui_context + 0x20) + 8) & 8) != 0) {
        (**(code **)(*(int64_t *)(*(int64_t *)(ui_context + 0x20) + 0x20) + 0x118))();
        (**(code **)(*(int64_t *)(*(int64_t *)(ui_context + 0x20) + 0xd8) + 0x118))();
      }
      break;
    case 7:
      *(uint64_t *)(*(int64_t *)(ui_context + 0x20) + 0x10) = *(uint64_t *)(ui_context + 0x60);
      break;
    case 8:
      if ((core_system_data_buffer != 0) && (lRam0000000180c912e8 != 0)) {
        auStackX_8[0] = *(uint *)(ui_context + 0x68);
        SetConsoleScreenBufferSize(core_system_data_buffer, auStackX_8[0]);
      }
    }
  }
  else {
    SystemDataInitializer(&unknown_var_56_ptr);
  }
  return;
}



/**
 * 安全格式化字符串到缓冲区
 * 
 * 这是一个安全的字符串格式化函数，使用标准的printf格式，
 * 但确保不会发生缓冲区溢出。
 * 
 * @param buffer 目标缓冲区
 * @param format 格式字符串
 * @param args 可变参数列表
 * @param param4 额外参数
 * @return 成功返回写入的字符数，失败返回-1
 */
int safe_sprintf_to_buffer(uint64_t buffer, uint64_t format, uint64_t args, uint64_t param4)
{
  int result;
  uint64_t *puVar2;
  uint64_t uStackX_20;
  
  uStackX_20 = param4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  result = __stdio_common_vsprintf_s(*puVar2, buffer, format, args, 0, &uStackX_20);
  if (result < 0) {
    result = -1;
  }
  return result;
}



/**
 * 在字符串数组中查找匹配的字符串
 * 
 * 在一个字符串数组中搜索与目标字符串匹配的项。
 * 使用逐字符比较来确定字符串是否匹配。
 * 
 * @param string_array 字符串数组指针
 * @param target_info 目标字符串信息结构
 * @return 找到匹配返回索引+1，未找到返回0
 */
uint64_t find_string_in_array(int64_t *string_array, int64_t target_info)
{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t in_RAX;
  byte *pbVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  
  lVar4 = *string_array;
  iVar9 = 0;
  uVar7 = string_array[1] - lVar4 >> 5;
  if (uVar7 != 0) {
    uVar2 = *(uint *)(target_info + 0x10);
    lVar10 = 0;
    do {
      uVar3 = *(uint *)(lVar10 + 0x10 + lVar4);
      pbVar5 = (byte *)(uint64_t)uVar3;
      uVar6 = uVar2;
      if (uVar3 == uVar2) {
        if (uVar3 != 0) {
          pbVar5 = *(byte **)(lVar10 + 8 + lVar4);
          lVar8 = *(int64_t *)(target_info + 8) - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar8;
            uVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (uVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18006357e:
        if (uVar6 == 0) {
          return CONCAT71((int7)((uint64_t)pbVar5 >> 8), 1);
        }
      }
      else if (uVar3 == 0) goto LAB_18006357e;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x20;
      in_RAX = (uint64_t)iVar9;
    } while (in_RAX < uVar7);
  }
  return in_RAX & 0xffffffffffffff00;
}





/**
 * 初始化字符串格式化系统
 * 
 * 调用内部初始化函数来设置字符串格式化系统。
 */
void initialize_string_formatting_system(void)
{
  initialize_string_formatting_internal();
  return;
}



/**
 * 内部字符串格式化初始化函数
 * 
 * 使用标准库函数初始化字符串格式化系统。
 * 
 * @param param1 格式化参数
 * @param param2 格式字符串
 * @param param3 可变参数
 * @param param4 额外参数
 * @return 成功返回字符数，失败返回-1
 */
int initialize_string_formatting_internal(uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
  int result;
  uint64_t *puVar2;
  
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  result = __stdio_common_vsprintf(*puVar2 | 2, param1, param2, param3, 0, param4);
  if (result < 0) {
    result = -1;
  }
  return result;
}



/**
 * 重置字符串缓冲区结构
 * 
 * 重置一个字符串缓冲区结构，将其恢复到初始状态。
 * 如果设置了释放标志，则会释放相关内存。
 * 
 * @param buffer_ptr 字符串缓冲区结构指针
 * @param size 缓冲区大小
 * @param param3 额外参数
 * @param param4 额外参数
 * @return 返回重置后的缓冲区指针
 */
uint64_t *
reset_string_buffer_structure(uint64_t *buffer_ptr, uint64_t size, uint64_t param3, uint64_t param4)
{
  buffer_ptr[6] = &system_data_buffer_ptr;
  if (buffer_ptr[7] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  buffer_ptr[7] = 0;
  *(int32_t *)(buffer_ptr + 9) = 0;
  buffer_ptr[6] = &system_state_ptr;
  *buffer_ptr = &unknown_var_1000_ptr;
  *buffer_ptr = &system_handler2_ptr;
  *buffer_ptr = &system_handler1_ptr;
  if ((size & 1) != 0) {
    free(buffer_ptr, 0x70, param3, param4, 0xfffffffffffffffe);
  }
  return buffer_ptr;
}



/**
 * 初始化字符串缓冲区
 * 
 * 初始化一个新的字符串缓冲区结构，设置所有必要的字段和回调函数。
 * 
 * @param buffer_ptr 缓冲区指针
 * @param flags 初始化标志
 * @param param3 额外参数
 * @param param4 额外参数
 * @return 返回初始化后的缓冲区指针
 */
uint64_t *
initialize_string_buffer(uint64_t *buffer_ptr, int32_t flags, uint64_t param3, uint64_t param4)
{
  int64_t *plVar1;
  
  *buffer_ptr = &system_handler1_ptr;
  *buffer_ptr = &system_handler2_ptr;
  *(int32_t *)(buffer_ptr + 1) = 0;
  *buffer_ptr = &unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(buffer_ptr + 2) = 0;
  UNLOCK();
  buffer_ptr[3] = 0xffffffffffffffff;
  *buffer_ptr = &unknown_var_128_ptr;
  plVar1 = buffer_ptr + 6;
  *plVar1 = (int64_t)&system_state_ptr;
  buffer_ptr[7] = 0;
  *(int32_t *)(buffer_ptr + 8) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  buffer_ptr[9] = 0;
  buffer_ptr[7] = 0;
  *(int32_t *)(buffer_ptr + 8) = 0;
  *(int32_t *)(buffer_ptr + 5) = flags;
  buffer_ptr[4] = param3;
  (**(code **)(*plVar1 + 0x10))(plVar1, &system_buffer_ptr, param3, param4, 0xfffffffffffffffe);
  *(int32_t *)(buffer_ptr + 10) = 0xd;
  *(uint64_t *)((int64_t)buffer_ptr + 0x54) = 0xe;
  buffer_ptr[0xc] = 0xffffffff00000000;
  *(int32_t *)(buffer_ptr + 0xd) = 0;
  return buffer_ptr;
}



/**
 * 设置对象回调函数
 * 
 * 为一个对象设置特定的回调函数。
 * 
 * @param object_ptr 对象指针
 * @return 返回对象指针
 */
int64_t set_object_callback(int64_t object_ptr)
{
  *(uint64_t *)(object_ptr + 0x10) = 0;
  *(code **)(object_ptr + 0x18) = FUN_180066dd0;
  return object_ptr;
}



/**
 * 设置对象安全检查回调
 * 
 * 为对象设置安全检查回调函数，用于调用前验证。
 * 
 * @param object_ptr 对象指针
 * @return 返回对象指针
 */
int64_t set_object_security_callback(int64_t object_ptr)
{
  *(uint64_t *)(object_ptr + 0x10) = 0;
  *(code **)(object_ptr + 0x18) = _guard_check_icall;
  return object_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 初始化系统内存区域
 * 
 * 初始化系统的内存区域，为后续操作准备内存空间。
 * 
 * @param param1 初始化参数
 */
void initialize_system_memory_region(uint64_t param1)
{
  int8_t auStack_2e8 [96];
  int8_t auStack_288 [64];
  uint64_t uStack_248;
  uint64_t uStack_240;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2e8;
  uStack_240 = param1;
  CoreEngineDataTransformer(auStack_288, system_message_context + 0x28);
                    // WARNING: Subroutine does not return
  memset(auStack_238, 0, 0x200);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 写入调试信息到文件
 * 
 * 将调试信息写入到指定的文件中，包括系统信息和调试数据。
 * 
 * @param param1 文件参数
 * @param param2 要写入的数据
 */
void write_debug_info_to_file(uint64_t param1, int64_t param2)
{
  char *pcVar1;
  void *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uStack_48;
  int64_t lStack_40;
  void *puStack_30;
  void *puStack_28;
  int32_t uStack_18;
  
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_180627e10(param1, &puStack_30, &unknown_var_560_ptr);
  puVar2 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar2 = puStack_28;
  }
  FUN_18062dee0(&uStack_48, puVar2, &unknown_var_572_ptr);
  lVar6 = lStack_40;
  lVar5 = -1;
  lVar3 = lVar5;
  lVar4 = lVar5;
  if (param2 != 0) {
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param2 + lVar3) != '\0');
    if (lVar3 != 0) {
      fwrite(param2, lVar3, 1, lStack_40);
    }
  }
  do {
    lVar3 = lVar4 + 1;
    pcVar1 = (char *)(lVar4 + 0x180c84871);
    lVar4 = lVar3;
  } while (*pcVar1 != '\0');
  if (lVar3 != 0) {
    fwrite(&system_memory_e810, 0x30, 1, lVar6);
    fwrite(&system_memory_4870, lVar3, 1, lVar6);


/**
 * 执行系统清理操作
 * 
 * 执行系统的清理操作，包括释放资源、关闭文件句柄、
 * 清理内存等。这是系统关闭前的重要清理函数。
 */
void perform_system_cleanup(void)
{
  void *puVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  void *puVar9;
  uint uVar10;
  uint64_t *puVar12;
  uint64_t uVar13;
  int iVar14;
  int64_t lVar15;
  uint uVar16;
  int8_t auStack_2f8 [32];
  uint64_t *puStack_2d8;
  uint64_t *puStack_2d0;
  uint64_t uStack_2c8;
  int32_t uStack_2c0;
  uint64_t *puStack_2b0;
  uint64_t *puStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  void *puStack_290;
  int64_t lStack_288;
  int32_t uStack_278;
  uint64_t uStack_270;
  int8_t auStack_268 [32];
  int64_t lStack_248;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  uint64_t uVar11;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2f8;
  uVar11 = 0;
  FUN_1800ba980(&puStack_290);
  puStack_2d8 = (uint64_t *)0x0;
  puStack_2d0 = (uint64_t *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 3;
  puStack_2b0 = (uint64_t *)0x0;
  puStack_2a8 = (uint64_t *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 3;
  FUN_18062d3b0(&puStack_290, &puStack_2d8, &puStack_2b0);
  iVar14 = -1;
  lVar15 = -0x8000000000000000;
  uVar16 = (uint)((int64_t)puStack_2d0 - (int64_t)puStack_2d8 >> 5);
  uVar13 = uVar11;
  puVar3 = puStack_2d0;
  puVar12 = puStack_2b0;
  puVar4 = puStack_2a8;
  if (uVar16 != 0) {
    do {
      iVar6 = *(int *)((int64_t)puStack_2d8 + uVar13 + 0x10);
      if (iVar6 < 4) {
LAB_180063de9:
        bVar2 = false;
      }
      else {
        lVar7 = 0;
        do {
          lVar8 = lVar7 + 1;
          if (*(char *)(*(int64_t *)((int64_t)puStack_2d8 + uVar13 + 8) + (int64_t)(iVar6 + -4) +
                       lVar7) != (&unknown_var_652_ptr)[lVar7]) goto LAB_180063de9;
          lVar7 = lVar8;
        } while (lVar8 != 5);
        bVar2 = true;
      }
      if (bVar2) {
        puVar1 = *(void **)((int64_t)puStack_2d8 + uVar13 + 8);
        puVar9 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar9 = puVar1;
        }
        iVar6 = _stat64i32(puVar9, auStack_268);
        if ((iVar6 != -1) && (lVar15 < lStack_248)) {
          lVar15 = lStack_248;
          iVar14 = (int)uVar11;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (uint64_t)uVar10;
      uVar13 = uVar13 + 0x20;
    } while (uVar10 < uVar16);
    puVar3 = puStack_2d0;
    puVar12 = puStack_2b0;
    puVar4 = puStack_2a8;
    if (-1 < iVar14) {
                    // WARNING: Subroutine does not return
      memset(auStack_238, 0, 0x200);
    }
  }
  for (; puVar5 = puStack_2a8, puStack_2d0 = puVar3, puVar12 != puStack_2a8; puVar12 = puVar12 + 4)
  {
    puStack_2a8 = puVar4;
    (**(code **)*puVar12)(puVar12, 0);
    puVar3 = puStack_2d0;
    puVar4 = puStack_2a8;
    puStack_2a8 = puVar5;
  }
  if (puStack_2b0 == (uint64_t *)0x0) {
    puStack_2b0 = (uint64_t *)0x0;
    puStack_2a8 = puVar4;
    for (puVar12 = puStack_2d8; puVar12 != puVar3; puVar12 = puVar12 + 4) {
      (**(code **)*puVar12)(puVar12, 0);
    }
    if (puStack_2d8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_290 = &system_data_buffer_ptr;
    if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_288 = 0;
    uStack_278 = 0;
    puStack_290 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_2f8);
  }
  puStack_2a8 = puVar4;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 执行系统关闭操作
 * 
 * 执行完整的系统关闭操作，包括清理所有资源、
 * 关闭文件、释放内存等。
 * 
 * @param param1 关闭参数
 */
void execute_system_shutdown(uint64_t param1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  void *puVar3;
  uint64_t *puVar4;
  int8_t auStack_358 [64];
  uint64_t *puStack_318;
  uint64_t *puStack_310;
  uint64_t uStack_308;
  int32_t uStack_300;
  uint64_t uStack_2f8;
  int64_t lStack_2f0;
  uint64_t uStack_2e0;
  int64_t lStack_2d8;
  uint64_t *puStack_2c0;
  uint64_t *puStack_2b8;
  uint64_t uStack_2b0;
  int32_t uStack_2a8;
  void *puStack_2a0;
  int64_t lStack_298;
  int32_t uStack_288;
  void *puStack_280;
  void *puStack_278;
  int32_t uStack_268;
  void *puStack_260;
  void *puStack_258;
  int32_t uStack_248;
  uint64_t uStack_240;
  int8_t auStack_238 [512];
  uint64_t uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_358;
  FUN_1800ba940(&puStack_2a0);
  puStack_318 = (uint64_t *)0x0;
  puStack_310 = (uint64_t *)0x0;
  uStack_308 = 0;
  uStack_300 = 3;
  puStack_2c0 = (uint64_t *)0x0;
  puStack_2b8 = (uint64_t *)0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 3;
  FUN_18062d3b0(&puStack_2a0, &puStack_318, &puStack_2c0);
  puVar2 = puStack_2b8;
  puVar1 = puStack_310;
  puVar4 = puStack_2c0;
  if ((int)((int64_t)puStack_310 - (int64_t)puStack_318 >> 5) != 0) {
                    // WARNING: Subroutine does not return
    memset(auStack_238, 0, 0x200);
  }
  for (; puStack_310 = puVar1, puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4, 0);
    puVar1 = puStack_310;
  }
  if (puStack_2c0 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_2c0 = (uint64_t *)0x0;
  for (puVar4 = puStack_318; puVar4 != puVar1; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4, 0);
  }
  if (puStack_318 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_2a0 = &system_data_buffer_ptr;
  if (lStack_298 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_298 = 0;
  uStack_288 = 0;
  puStack_2a0 = &system_state_ptr;
  uStack_2f8 = 0;
  lStack_2f0 = 0;
  FUN_180627e10(param1, &puStack_280, &unknown_var_664_ptr);
  puVar3 = &system_buffer_ptr;
  if (puStack_278 != (void *)0x0) {
    puVar3 = puStack_278;
  }
  FUN_18062dee0(&uStack_2f8, puVar3, &unknown_var_572_ptr);
  FUN_1800ae730(SYSTEM_STATE_MANAGER, &uStack_2f8);
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_280 = &system_data_buffer_ptr;
  if (puStack_278 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_278 = (void *)0x0;
  uStack_268 = 0;
  puStack_280 = &system_state_ptr;
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  FUN_180627e10(param1, &puStack_260, &unknown_var_688_ptr);
  puVar3 = &system_buffer_ptr;
  if (puStack_258 != (void *)0x0) {
    puVar3 = puStack_258;
  }
  FUN_18062dee0(&uStack_2e0, puVar3, &unknown_var_572_ptr);
  FUN_1800ae730(core_system_data_memory, &uStack_2e0);
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  puStack_260 = &system_data_buffer_ptr;
  if (puStack_258 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_258 = (void *)0x0;
  uStack_248 = 0;
  puStack_260 = &system_state_ptr;
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_358);
}





/**
 * 执行系统终止操作
 * 
 * 执行系统的终止操作，调用内部终止函数。
 */
void execute_system_termination(void)
{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理系统错误和日志
 * 
 * 处理系统错误和日志记录，包括错误信息的收集、
 * 格式化和输出到适当的日志文件。
 * 
 * @param param1 错误处理参数
 * @return 处理结果
 */
uint64_t process_system_errors_and_logs(uint64_t param1)
{
  char cVar1;
  uint64_t uVar2;
  void *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  void *puStack_b8;
  int64_t lStack_b0;
  int iStack_a8;
  uint64_t uStack_a0;
  uint64_t *puStack_98;
  uint64_t *puStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  void *puStack_58;
  void *puStack_50;
  int32_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_98 = (uint64_t *)0x0;
  puStack_90 = (uint64_t *)0x0;
  uStack_88 = 0;
  uStack_80 = 3;
  cVar1 = execute_system_termination(&puStack_98);
  puVar7 = puStack_90;
  puVar6 = puStack_98;
  if ((cVar1 == '\0') || (puStack_98 == puStack_90)) {
    FUN_1800622d0(system_message_context, 5, 3, &unknown_var_736_ptr);
    uVar2 = FUN_1800623e0();
    puVar4 = puVar6;
  }
  else {
    uStack_78 = 0;
    lStack_70 = 0;
    FUN_180627e10(param1, &puStack_58, &unknown_var_712_ptr);
    puVar3 = &system_buffer_ptr;
    if (puStack_50 != (void *)0x0) {
      puVar3 = puStack_50;
    }
    FUN_18062dee0(&uStack_78, puVar3, &unknown_var_572_ptr);
    uVar2 = (int64_t)puVar7 - (int64_t)puVar6 >> 5;
    puStack_b8 = &system_data_buffer_ptr;
    uStack_a0 = 0;
    lStack_b0 = 0;
    iStack_a8 = 0;
    if ((int)uVar2 != 0) {
      puVar4 = puVar6 + 1;
      uVar2 = uVar2 & 0xffffffff;
      do {
        puVar3 = &system_buffer_ptr;
        if ((void *)*puVar4 != (void *)0x0) {
          puVar3 = (void *)*puVar4;
        }
        System_DataHandler(&puStack_b8, &unknown_var_92_ptr, puVar3);
        puVar4 = puVar4 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar5 = lStack_70;
    uVar2 = fwrite(lStack_b0, 1, (int64_t)iStack_a8, lStack_70);
    if (lVar5 != 0) {
      fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      uVar2 = (uint64_t)SYSTEM_FILE_COUNTER_ADDR;
      UNLOCK();
      lVar5 = 0;
      puVar6 = puStack_98;
      puVar7 = puStack_90;
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
    }
    puStack_b8 = &system_data_buffer_ptr;
    if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_b0 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    puStack_b8 = &system_state_ptr;
    puStack_58 = &system_data_buffer_ptr;
    if (puStack_50 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_50 = (void *)0x0;
    uStack_40 = 0;
    puStack_58 = &system_state_ptr;
    puVar4 = puVar6;
    if (lVar5 != 0) {
      uVar2 = fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR - 1;
      UNLOCK();
      puVar6 = puStack_98;
      puVar7 = puStack_90;
      puVar4 = puStack_98;
    }
  }
  for (; puVar6 != puVar7; puVar6 = puVar6 + 4) {
    uVar2 = (**(code **)*puVar6)(puVar6, 0);
  }
  if (puVar4 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



