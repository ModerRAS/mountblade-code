#include "TaleWorlds.Native.Split.h"

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
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_1f8 [64];
  undefined2 auStack_1b8 [4];
  undefined *puStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined *puStack_188;
  longlong lStack_180;
  undefined4 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  ulonglong uStack_38;
  
  uStack_148 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1f8;
  iVar8 = 0;
  uStack_190 = 0;
  *session_count = *session_count + 1;
  if ((*(longlong *)(session_count + 4) != 0) && (*(longlong *)(session_count + 2) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1f8);
  }
  lStack_168 = 0;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 3;
  lVar4 = FUN_180627ae0(&puStack_188,_DAT_180c86870 + 0x2c0);
  uStack_190 = 1;
  auStack_1b8[0] = 0x20;
  if (*(longlong *)(lVar4 + 8) != 0) {
    FUN_180057980(lVar4,&lStack_168,auStack_1b8);
  }
  uStack_190 = 0;
  puStack_188 = &UNK_180a3c3e0;
  if (lStack_180 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_180 = 0;
  uStack_170 = 0;
  puStack_188 = &UNK_18098bcb0;
  puStack_1b0 = &UNK_180a3c3e0;
  uStack_198 = 0;
  puStack_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  puVar5 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_1a8 = puVar5;
  uVar3 = FUN_18064e990(puVar5);
  uStack_198 = CONCAT44(uStack_198._4_4_,uVar3);
  *puVar5 = 0x5f657375;
  puVar5[1] = 0x65726170;
  puVar5[2] = 0x635f746e;
  puVar5[3] = 0x6f736e6f;
  *(undefined2 *)(puVar5 + 4) = 0x656c;
  *(undefined1 *)((longlong)puVar5 + 0x12) = 0;
  uStack_1a0 = 0x12;
  uVar9 = lStack_160 - lStack_168 >> 5;
  if (uVar9 != 0) {
    puVar7 = (undefined8 *)(lStack_168 + 8);
    do {
      if (*(int *)(puVar7 + 1) == 0x12) {
        pcVar6 = (char *)*puVar7;
        lVar4 = (longlong)puVar5 - (longlong)pcVar6;
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
    } while ((ulonglong)(longlong)iVar8 < uVar9);
  }
  puStack_1b0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
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
undefined8 set_console_text_color(undefined8 param1, undefined4 color_code)
{
  undefined2 console_color;
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
  result = SetConsoleTextAttribute(_DAT_180c912f0, console_color);
  if (result == 0) {
    FUN_18005d3a0(&UNK_1809fe5a0);
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
void process_ui_message_event(longlong ui_context)
{
  uint message_type;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint auStackX_8 [4];
  undefined1 auStackX_18 [8];
  uint auStackX_20 [2];
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  message_type = *(uint *)(ui_context + 0x28);
  if (message_type < 9) {
    switch(message_type) {
    case 1:
      auStackX_8[0] = auStackX_8[0] & 0xffffff00;
      puVar9 = &DAT_18098bc73;
      if (*(undefined **)(ui_context + 0x38) != (undefined *)0x0) {
        puVar9 = *(undefined **)(ui_context + 0x38);
      }
      FUN_1806391a0(*(longlong *)(ui_context + 0x20) + 0x20, puVar9, auStackX_8);
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x108))(plVar7, 1);
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7, &UNK_1809fe5c0);
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
      *(undefined1 *)puVar5 = 0;
      puStack_68 = puVar5;
      uVar3 = FUN_18064e990(puVar5);
      uStack_58 = CONCAT44(uStack_58._4_4_, uVar3);
      *puVar5 = 0x73726f7272655f;
      uStack_60 = 7;
      iVar8 = *(int *)(ui_context + 0x40) + -1;
      if (-1 < iVar8) {
        lVar6 = (longlong)iVar8;
        do {
          if (*(char *)(lVar6 + *(longlong *)(ui_context + 0x38)) == '_') goto code_r0x0001800630e9;
          iVar8 = iVar8 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      iVar8 = -1;
code_r0x0001800630e9:
      FUN_1806288c0(ui_context + 0x30, iVar8, &puStack_70);
      puStack_70 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    case 2:
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7, &UNK_1809fe5f0);
      FUN_180639250(*(longlong *)(ui_context + 0x20) + 0xd8);
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0x20);
      (**(code **)(*plVar7 + 0x70))(plVar7, &UNK_1809fe5f0);
      FUN_180639250(*(longlong *)(ui_context + 0x20) + 0x20);
      if (((*(byte *)(*(longlong *)(ui_context + 0x20) + 8) & 2) != 0) &&
         (iRam0000000180c912e0 = iRam0000000180c912e0 + -1, iRam0000000180c912e0 == 0)) {
        _DAT_180c912f0 = 0;
        lRam0000000180c912e8 = 0;
        LOCK();
        _DAT_180d48d28 = 0;
        UNLOCK();
        FreeConsole();
      }
      *(undefined4 *)(*(longlong *)(ui_context + 0x20) + 8) = 0xe;
      *(undefined8 *)(*(longlong *)(ui_context + 0x20) + 0x10) = 0xffffffff00000000;
      *(undefined1 *)(*(longlong *)(ui_context + 0x20) + 0x18) = 0;
      **(undefined8 **)(ui_context + 0x20) = 0;
      break;
    case 3:
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7, &UNK_1809fe5f0);
      FUN_180639250(*(longlong *)(ui_context + 0x20) + 0xd8);
      FUN_18062da70(*(longlong *)(ui_context + 0x20) + 0xe0);
      break;
    case 4:
      auStackX_18[0] = 0;
      puVar9 = *(undefined **)(*(longlong *)(ui_context + 0x20) + 0xe8);
      puVar10 = &DAT_18098bc73;
      if (puVar9 != (undefined *)0x0) {
        puVar10 = puVar9;
      }
      FUN_1806391a0(*(longlong *)(ui_context + 0x20) + 0xd8, puVar10, auStackX_18);
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x108))(plVar7, 1);
      plVar7 = (longlong *)(*(longlong *)(ui_context + 0x20) + 0xd8);
      (**(code **)(*plVar7 + 0x70))(plVar7, &UNK_1809fe5c0);
      break;
    case 5:
      iVar8 = *(int *)(ui_context + 0x58);
      if ((*(int *)(_DAT_180c8a9c8 + 0x150) <= iVar8) &&
         (puVar5 = *(undefined8 **)(ui_context + 0x20),
         (*(ulonglong *)(ui_context + 0x60) & puVar5[2]) != 0)) {
        uVar2 = *(uint *)(ui_context + 0x40);
        puVar9 = &DAT_18098bc73;
        if (*(undefined **)(ui_context + 0x38) != (undefined *)0x0) {
          puVar9 = *(undefined **)(ui_context + 0x38);
        }
        if ((*(byte *)(puVar5 + 1) & 2) != 0) {
          set_console_text_color((ulonglong)*(uint *)(&DAT_180063480 + (longlong)(int)message_type * 4) +
                        0x180000000, *(undefined4 *)(ui_context + 0x50));
          iVar4 = WriteConsoleA(_DAT_180c912f0, puVar9, uVar2, auStackX_20, 0);
          if ((iVar4 == 0) || (auStackX_20[0] < uVar2)) {
            FUN_18005d3a0(&UNK_1809fe62c, puVar9);
          }
          iVar4 = SetConsoleTextAttribute(_DAT_180c912f0, 0xf);
          if (iVar4 == 0) {
            FUN_18005d3a0(&UNK_1809fe5a0);
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
      if ((*(byte *)(*(longlong *)(ui_context + 0x20) + 8) & 8) != 0) {
        (**(code **)(*(longlong *)(*(longlong *)(ui_context + 0x20) + 0x20) + 0x118))();
        (**(code **)(*(longlong *)(*(longlong *)(ui_context + 0x20) + 0xd8) + 0x118))();
      }
      break;
    case 7:
      *(undefined8 *)(*(longlong *)(ui_context + 0x20) + 0x10) = *(undefined8 *)(ui_context + 0x60);
      break;
    case 8:
      if ((_DAT_180c912f0 != 0) && (lRam0000000180c912e8 != 0)) {
        auStackX_8[0] = *(uint *)(ui_context + 0x68);
        SetConsoleScreenBufferSize(_DAT_180c912f0, auStackX_8[0]);
      }
    }
  }
  else {
    FUN_180626f80(&UNK_1809fe608);
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
int safe_sprintf_to_buffer(undefined8 buffer, undefined8 format, undefined8 args, undefined8 param4)
{
  int result;
  undefined8 *puVar2;
  undefined8 uStackX_20;
  
  uStackX_20 = param4;
  puVar2 = (undefined8 *)func_0x00018004b9a0();
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
ulonglong find_string_in_array(longlong *string_array, longlong target_info)
{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  byte *pbVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  lVar4 = *string_array;
  iVar9 = 0;
  uVar7 = string_array[1] - lVar4 >> 5;
  if (uVar7 != 0) {
    uVar2 = *(uint *)(target_info + 0x10);
    lVar10 = 0;
    do {
      uVar3 = *(uint *)(lVar10 + 0x10 + lVar4);
      pbVar5 = (byte *)(ulonglong)uVar3;
      uVar6 = uVar2;
      if (uVar3 == uVar2) {
        if (uVar3 != 0) {
          pbVar5 = *(byte **)(lVar10 + 8 + lVar4);
          lVar8 = *(longlong *)(target_info + 8) - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar8;
            uVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (uVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_18006357e:
        if (uVar6 == 0) {
          return CONCAT71((int7)((ulonglong)pbVar5 >> 8), 1);
        }
      }
      else if (uVar3 == 0) goto LAB_18006357e;
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x20;
      in_RAX = (ulonglong)iVar9;
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
int initialize_string_formatting_internal(undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4)
{
  int result;
  ulonglong *puVar2;
  
  puVar2 = (ulonglong *)func_0x00018004b9a0();
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
undefined8 *
reset_string_buffer_structure(undefined8 *buffer_ptr, ulonglong size, undefined8 param3, undefined8 param4)
{
  buffer_ptr[6] = &UNK_180a3c3e0;
  if (buffer_ptr[7] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  buffer_ptr[7] = 0;
  *(undefined4 *)(buffer_ptr + 9) = 0;
  buffer_ptr[6] = &UNK_18098bcb0;
  *buffer_ptr = &UNK_18098bdc8;
  *buffer_ptr = &UNK_180a21720;
  *buffer_ptr = &UNK_180a21690;
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
undefined8 *
initialize_string_buffer(undefined8 *buffer_ptr, undefined4 flags, undefined8 param3, undefined8 param4)
{
  longlong *plVar1;
  
  *buffer_ptr = &UNK_180a21690;
  *buffer_ptr = &UNK_180a21720;
  *(undefined4 *)(buffer_ptr + 1) = 0;
  *buffer_ptr = &UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(buffer_ptr + 2) = 0;
  UNLOCK();
  buffer_ptr[3] = 0xffffffffffffffff;
  *buffer_ptr = &UNK_1809fe650;
  plVar1 = buffer_ptr + 6;
  *plVar1 = (longlong)&UNK_18098bcb0;
  buffer_ptr[7] = 0;
  *(undefined4 *)(buffer_ptr + 8) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  buffer_ptr[9] = 0;
  buffer_ptr[7] = 0;
  *(undefined4 *)(buffer_ptr + 8) = 0;
  *(undefined4 *)(buffer_ptr + 5) = flags;
  buffer_ptr[4] = param3;
  (**(code **)(*plVar1 + 0x10))(plVar1, &DAT_18098bc73, param3, param4, 0xfffffffffffffffe);
  *(undefined4 *)(buffer_ptr + 10) = 0xd;
  *(undefined8 *)((longlong)buffer_ptr + 0x54) = 0xe;
  buffer_ptr[0xc] = 0xffffffff00000000;
  *(undefined4 *)(buffer_ptr + 0xd) = 0;
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
longlong set_object_callback(longlong object_ptr)
{
  *(undefined8 *)(object_ptr + 0x10) = 0;
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
longlong set_object_security_callback(longlong object_ptr)
{
  *(undefined8 *)(object_ptr + 0x10) = 0;
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
void initialize_system_memory_region(undefined8 param1)
{
  undefined1 auStack_2e8 [96];
  undefined1 auStack_288 [64];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_248 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  uStack_240 = param1;
  FUN_180627ae0(auStack_288, _DAT_180c86928 + 0x28);
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
void write_debug_info_to_file(undefined8 param1, longlong param2)
{
  char *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined4 uStack_18;
  
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_180627e10(param1, &puStack_30, &UNK_1809fe800);
  puVar2 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar2 = puStack_28;
  }
  FUN_18062dee0(&uStack_48, puVar2, &UNK_1809fe80c);
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
    fwrite(&DAT_1809fe810, 0x30, 1, lVar6);
    fwrite(&DAT_180c84870, lVar3, 1, lVar6);


/**
 * 执行系统清理操作
 * 
 * 执行系统的清理操作，包括释放资源、关闭文件句柄、
 * 清理内存等。这是系统关闭前的重要清理函数。
 */
void perform_system_cleanup(void)
{
  undefined *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_2f8 [32];
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined *puStack_290;
  longlong lStack_288;
  undefined4 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [32];
  longlong lStack_248;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  ulonglong uVar11;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2f8;
  uVar11 = 0;
  FUN_1800ba980(&puStack_290);
  puStack_2d8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 3;
  puStack_2b0 = (undefined8 *)0x0;
  puStack_2a8 = (undefined8 *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 3;
  FUN_18062d3b0(&puStack_290, &puStack_2d8, &puStack_2b0);
  iVar14 = -1;
  lVar15 = -0x8000000000000000;
  uVar16 = (uint)((longlong)puStack_2d0 - (longlong)puStack_2d8 >> 5);
  uVar13 = uVar11;
  puVar3 = puStack_2d0;
  puVar12 = puStack_2b0;
  puVar4 = puStack_2a8;
  if (uVar16 != 0) {
    do {
      iVar6 = *(int *)((longlong)puStack_2d8 + uVar13 + 0x10);
      if (iVar6 < 4) {
LAB_180063de9:
        bVar2 = false;
      }
      else {
        lVar7 = 0;
        do {
          lVar8 = lVar7 + 1;
          if (*(char *)(*(longlong *)((longlong)puStack_2d8 + uVar13 + 8) + (longlong)(iVar6 + -4) +
                       lVar7) != (&UNK_1809fe85c)[lVar7]) goto LAB_180063de9;
          lVar7 = lVar8;
        } while (lVar8 != 5);
        bVar2 = true;
      }
      if (bVar2) {
        puVar1 = *(undefined **)((longlong)puStack_2d8 + uVar13 + 8);
        puVar9 = &DAT_18098bc73;
        if (puVar1 != (undefined *)0x0) {
          puVar9 = puVar1;
        }
        iVar6 = _stat64i32(puVar9, auStack_268);
        if ((iVar6 != -1) && (lVar15 < lStack_248)) {
          lVar15 = lStack_248;
          iVar14 = (int)uVar11;
        }
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
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
  if (puStack_2b0 == (undefined8 *)0x0) {
    puStack_2b0 = (undefined8 *)0x0;
    puStack_2a8 = puVar4;
    for (puVar12 = puStack_2d8; puVar12 != puVar3; puVar12 = puVar12 + 4) {
      (**(code **)*puVar12)(puVar12, 0);
    }
    if (puStack_2d8 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_290 = &UNK_180a3c3e0;
    if (lStack_288 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_288 = 0;
    uStack_278 = 0;
    puStack_290 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2f8);
  }
  puStack_2a8 = puVar4;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
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
void execute_system_shutdown(undefined8 param1)
{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_358 [64];
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  longlong lStack_2f0;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined *puStack_2a0;
  longlong lStack_298;
  undefined4 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined4 uStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  uStack_240 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_358;
  FUN_1800ba940(&puStack_2a0);
  puStack_318 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  uStack_308 = 0;
  uStack_300 = 3;
  puStack_2c0 = (undefined8 *)0x0;
  puStack_2b8 = (undefined8 *)0x0;
  uStack_2b0 = 0;
  uStack_2a8 = 3;
  FUN_18062d3b0(&puStack_2a0, &puStack_318, &puStack_2c0);
  puVar2 = puStack_2b8;
  puVar1 = puStack_310;
  puVar4 = puStack_2c0;
  if ((int)((longlong)puStack_310 - (longlong)puStack_318 >> 5) != 0) {
                    // WARNING: Subroutine does not return
    memset(auStack_238, 0, 0x200);
  }
  for (; puStack_310 = puVar1, puVar4 != puVar2; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4, 0);
    puVar1 = puStack_310;
  }
  if (puStack_2c0 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2c0 = (undefined8 *)0x0;
  for (puVar4 = puStack_318; puVar4 != puVar1; puVar4 = puVar4 + 4) {
    (**(code **)*puVar4)(puVar4, 0);
  }
  if (puStack_318 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_2a0 = &UNK_180a3c3e0;
  if (lStack_298 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_298 = 0;
  uStack_288 = 0;
  puStack_2a0 = &UNK_18098bcb0;
  uStack_2f8 = 0;
  lStack_2f0 = 0;
  FUN_180627e10(param1, &puStack_280, &UNK_1809fe868);
  puVar3 = &DAT_18098bc73;
  if (puStack_278 != (undefined *)0x0) {
    puVar3 = puStack_278;
  }
  FUN_18062dee0(&uStack_2f8, puVar3, &UNK_1809fe80c);
  FUN_1800ae730(_DAT_180c86920, &uStack_2f8);
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_280 = &UNK_180a3c3e0;
  if (puStack_278 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_278 = (undefined *)0x0;
  uStack_268 = 0;
  puStack_280 = &UNK_18098bcb0;
  if (lStack_2f0 != 0) {
    fclose();
    lStack_2f0 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  uStack_2e0 = 0;
  lStack_2d8 = 0;
  FUN_180627e10(param1, &puStack_260, &UNK_1809fe880);
  puVar3 = &DAT_18098bc73;
  if (puStack_258 != (undefined *)0x0) {
    puVar3 = puStack_258;
  }
  FUN_18062dee0(&uStack_2e0, puVar3, &UNK_1809fe80c);
  FUN_1800ae730(_DAT_180c868b0, &uStack_2e0);
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
  puStack_260 = &UNK_180a3c3e0;
  if (puStack_258 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_258 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_260 = &UNK_18098bcb0;
  if (lStack_2d8 != 0) {
    fclose();
    lStack_2d8 = 0;
    LOCK();
    _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_358);
}





/**
 * 执行系统终止操作
 * 
 * 执行系统的终止操作，调用内部终止函数。
 */
void execute_system_termination(void)
{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
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
ulonglong process_system_errors_and_logs(undefined8 param1)
{
  char cVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puStack_b8;
  longlong lStack_b0;
  int iStack_a8;
  ulonglong uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  uStack_80 = 3;
  cVar1 = execute_system_termination(&puStack_98);
  puVar7 = puStack_90;
  puVar6 = puStack_98;
  if ((cVar1 == '\0') || (puStack_98 == puStack_90)) {
    FUN_1800622d0(_DAT_180c86928, 5, 3, &UNK_1809fe8b0);
    uVar2 = FUN_1800623e0();
    puVar4 = puVar6;
  }
  else {
    uStack_78 = 0;
    lStack_70 = 0;
    FUN_180627e10(param1, &puStack_58, &UNK_1809fe898);
    puVar3 = &DAT_18098bc73;
    if (puStack_50 != (undefined *)0x0) {
      puVar3 = puStack_50;
    }
    FUN_18062dee0(&uStack_78, puVar3, &UNK_1809fe80c);
    uVar2 = (longlong)puVar7 - (longlong)puVar6 >> 5;
    puStack_b8 = &UNK_180a3c3e0;
    uStack_a0 = 0;
    lStack_b0 = 0;
    iStack_a8 = 0;
    if ((int)uVar2 != 0) {
      puVar4 = puVar6 + 1;
      uVar2 = uVar2 & 0xffffffff;
      do {
        puVar3 = &DAT_18098bc73;
        if ((undefined *)*puVar4 != (undefined *)0x0) {
          puVar3 = (undefined *)*puVar4;
        }
        FUN_180628040(&puStack_b8, &UNK_1809fe62c, puVar3);
        puVar4 = puVar4 + 4;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    lVar5 = lStack_70;
    uVar2 = fwrite(lStack_b0, 1, (longlong)iStack_a8, lStack_70);
    if (lVar5 != 0) {
      fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      uVar2 = (ulonglong)_DAT_180c8ed60;
      UNLOCK();
      lVar5 = 0;
      puVar6 = puStack_98;
      puVar7 = puStack_90;
      _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
    }
    puStack_b8 = &UNK_180a3c3e0;
    if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_b0 = 0;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    puStack_b8 = &UNK_18098bcb0;
    puStack_58 = &UNK_180a3c3e0;
    if (puStack_50 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_50 = (undefined *)0x0;
    uStack_40 = 0;
    puStack_58 = &UNK_18098bcb0;
    puVar4 = puVar6;
    if (lVar5 != 0) {
      uVar2 = fclose(lVar5);
      lStack_70 = 0;
      LOCK();
      _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
      UNLOCK();
      puVar6 = puStack_98;
      puVar7 = puStack_90;
      puVar4 = puStack_98;
    }
  }
  for (; puVar6 != puVar7; puVar6 = puVar6 + 4) {
    uVar2 = (**(code **)*puVar6)(puVar6, 0);
  }
  if (puVar4 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar4);
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



