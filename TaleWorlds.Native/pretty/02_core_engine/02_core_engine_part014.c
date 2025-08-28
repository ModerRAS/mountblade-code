#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part014.c - 7 个函数

// 函数: void BuildProcessIdString(undefined8 param_1,undefined8 param_2,longlong param_3)
// 功能: 构建包含进程ID的字符串，格式为"PID : [进程ID]"
// 参数: param_1 - 上下文指针, param_2 - 未知参数, param_3 - 字符串信息结构体指针
void BuildProcessIdString(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong buffer_ptr;
  longlong pid_length;
  undefined4 process_id;
  int buffer_size;
  uint string_length;
  uint input_length;
  undefined1 *output_buffer;
  ulonglong buffer_offset;
  undefined *format_string_ptr;
  longlong char_index;
  uint hash_value;
  undefined1 stack_guard_228 [32];
  undefined1 allocation_type;
  undefined4 operation_type;
  undefined4 flags;
  undefined *string_builder_ptr;
  undefined1 *temp_buffer_ptr;
  uint buffer_capacity;
  undefined8 hash_result;
  undefined *string_stream_ptr;
  longlong stream_position;
  uint stream_length;
  undefined8 context_param;
  undefined8 param2_copy;
  undefined *allocator_ptr;
  undefined8 allocator_context;
  undefined4 allocator_flags;
  undefined8 allocation_result;
  undefined1 stack_guard_88 [32];
  undefined8 security_cookie;
  undefined8 param2_copy2;
  char pid_buffer [16];
  ulonglong stack_canary;
  
  // 安全检查：设置堆栈安全cookie
  security_cookie = 0xfffffffffffffffe;
  stack_canary = GLOBAL_STACK_COOKIE ^ (ulonglong)stack_guard_228;
  
  // 初始化变量
  output_buffer = (undefined1 *)0x0;
  operation_type = 0;
  param2_copy = param_2;
  param2_copy2 = param_2;
  
  // 获取当前进程ID
  process_id = GetCurrentProcessId();
  
  // 初始化字符串流
  string_stream_ptr = &GLOBAL_STRING_STREAM;
  context_param = 0;
  stream_position = 0;
  stream_length = 0;
  
  // 分配6字节空间用于"PID : "字符串
  AllocateStringBuffer(&string_stream_ptr, 6);
  buffer_ptr = stream_position;
  buffer_offset = (ulonglong)stream_length;
  
  // 写入"PID : "字符串到缓冲区
  *(undefined4 *)(buffer_offset + stream_position) = 0x44495020;  // "DIP "
  *(undefined2 *)(buffer_offset + 4 + stream_position) = 0x203a;  // " :"
  *(undefined1 *)(buffer_offset + 6 + stream_position) = 0;       // null terminator
  stream_length = 6;
  
  // 将进程ID转换为字符串
  FormatIntegerToString(pid_buffer, &INTEGER_FORMAT_STRING, process_id);
  
  // 计算进程ID字符串长度
  pid_length = -1;
  do {
    char_index = pid_length;
    pid_length = char_index + 1;
  } while (pid_buffer[char_index + 1] != '\0');
  
  // 如果进程ID字符串长度大于0，则添加到缓冲区
  if (0 < (int)(pid_length + 1)) {
    AllocateStringBuffer(&string_stream_ptr, (int)pid_length + 7);
    // WARNING: Subroutine does not return
    memcpy((ulonglong)stream_length + stream_position, pid_buffer, (longlong)((int)pid_length + 2));
  }
  
  // 根据调试标志选择格式字符串
  format_string_ptr = &DEFAULT_FORMAT_STRING;
  if (DEBUG_MODE_ENABLED != '\0') {
    format_string_ptr = &DEBUG_FORMAT_STRING;
  }
  
  // 格式化字符串
  FormatStringWithArguments(stack_guard_88, format_string_ptr);
  
  // 初始化分配器
  allocator_ptr = &GLOBAL_STRING_STREAM;
  allocation_result = 0;
  allocator_context = 0;
  allocator_flags = 0;
  
  // 初始化临时字符串构建器
  string_builder_ptr = &GLOBAL_STRING_STREAM;
  hash_value = 0;
  hash_result = 0;
  temp_buffer_ptr = (undefined1 *)0x0;
  buffer_capacity = 0;
  operation_type = 2;
  
  // 获取输入字符串长度
  input_length = *(uint *)(param_3 + 0x10);
  buffer_offset = (ulonglong)input_length;
  string_length = 0;
  
  // 处理输入字符串
  if (*(longlong *)(param_3 + 8) == 0) {
HANDLE_STRING_DATA:
    hash_value = string_length;
    if (input_length != 0) {
      // WARNING: Subroutine does not return
      memcpy(output_buffer, *(undefined8 *)(param_3 + 8), buffer_offset);
    }
  }
  else if (input_length != 0) {
    buffer_size = input_length + 1;
    if (buffer_size < 0x10) {
      buffer_size = 0x10;
    }
    output_buffer = (undefined1 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, (longlong)buffer_size, 0x13);
    *output_buffer = 0;
    temp_buffer_ptr = output_buffer;
    string_length = CalculateStringHash(output_buffer);
    hash_result = CONCAT44(hash_result._4_4_, string_length);
    goto HANDLE_STRING_DATA;
  }
  
  // 确保字符串以null结尾
  if (output_buffer != (undefined1 *)0x0) {
    output_buffer[buffer_offset] = 0;
  }
  
  // 获取标志位
  flags = *(undefined4 *)(param_3 + 0x1c);
  hash_result = CONCAT44(flags, (undefined4)hash_result);
  buffer_capacity = input_length;
  
  // 处理额外的字符串数据
  if (input_length != 0xfffffffa) {
    input_length = input_length + 7;
    if (output_buffer == (undefined1 *)0x0) {
      if ((int)input_length < 0x10) {
        input_length = 0x10;
      }
      output_buffer = (undefined1 *)AllocateMemory(GLOBAL_MEMORY_ALLOCATOR, (longlong)(int)input_length, 0x13);
      *output_buffer = 0;
    }
    else {
      if (input_length <= hash_value) goto FINALIZE_STRING;
      allocation_type = 0x13;
      output_buffer = (undefined1 *)ReallocateMemory(GLOBAL_MEMORY_ALLOCATOR, output_buffer, input_length, 0x10);
    }
    temp_buffer_ptr = output_buffer;
    process_id = CalculateStringHash(output_buffer);
    hash_result = CONCAT44(hash_result._4_4_, process_id);
  }
  
FINALIZE_STRING:
  // WARNING: Subroutine does not return
  memcpy(output_buffer + buffer_offset, buffer_ptr, 7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180054120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined *puStack_70;
  undefined1 *puStack_68;
  uint uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong uVar9;
  
  puStack_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  uVar17 = 0;
  uStack_40 = 0;
  uStack_38 = 3;
  FUN_180052200(_DAT_180c86870,&puStack_50,param_3,param_4,0xfffffffffffffffe);
  puVar5 = puStack_48;
  puVar4 = puStack_50;
  uVar11 = (longlong)puStack_48 - (longlong)puStack_50 >> 5;
  puVar3 = puVar4;
  if (uVar11 == 0) {
LAB_180054302:
    uVar12 = 0;
joined_r0x00018005430b:
    for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
      (**(code **)*puVar3)(puVar3,0);
    }
    if (puVar4 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar4);
    }
    return uVar12;
  }
  piVar10 = (int *)(puStack_50 + 2);
  uVar13 = uVar17;
LAB_18005419d:
  puStack_70 = &UNK_180a3c3e0;
  uStack_58 = 0;
  puStack_68 = (undefined1 *)0x0;
  uStack_60 = 0;
  FUN_1806277c0(&puStack_70,*piVar10);
  if (*piVar10 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_68,*(undefined8 *)(piVar10 + -2),*piVar10 + 1);
  }
  if (*(longlong *)(piVar10 + -2) != 0) {
    uStack_60 = 0;
    if (puStack_68 != (undefined1 *)0x0) {
      *puStack_68 = 0;
    }
    uStack_58 = uStack_58 & 0xffffffff;
  }
  uVar9 = uVar17;
  uVar14 = uVar17;
  if (uStack_60 != 0) {
    do {
      if ((byte)(puStack_68[uVar14] + 0xbf) < 0x1a) {
        puStack_68[uVar14] = puStack_68[uVar14] + ' ';
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar8 < uStack_60);
  }
  lVar6 = func_0x0001800464d0(&puStack_70);
  puVar16 = (undefined8 *)&UNK_1809fde40;
  do {
    pcVar7 = (char *)*puVar16;
    lVar15 = lVar6 - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar15];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) break;
    puVar16 = puVar16 + 1;
    if (0x1809fde87 < (longlong)puVar16) {
      puStack_70 = &UNK_180a3c3e0;
      if (puStack_68 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_68 = (undefined1 *)0x0;
      uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
      puStack_70 = &UNK_18098bcb0;
      uVar12 = 1;
      goto joined_r0x00018005430b;
    }
  } while( true );
  puStack_70 = &UNK_180a3c3e0;
  if (puStack_68 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_68 = (undefined1 *)0x0;
  uStack_58 = (ulonglong)uStack_58._4_4_ << 0x20;
  puStack_70 = &UNK_18098bcb0;
  uVar8 = (int)uVar13 + 1;
  uVar13 = (ulonglong)uVar8;
  piVar10 = piVar10 + 8;
  if (uVar11 <= (ulonglong)(longlong)(int)uVar8) goto LAB_180054302;
  goto LAB_18005419d;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180054360(longlong *param_1,longlong param_2)
void FUN_180054360(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_238 [32];
  undefined4 uStack_218;
  undefined *puStack_208;
  longlong lStack_200;
  uint uStack_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined *puStack_1e0;
  longlong lStack_1d8;
  uint uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  longlong lStack_1b8;
  undefined4 uStack_1b0;
  ulonglong uStack_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 uStack_198;
  undefined4 uStack_194;
  undefined *puStack_190;
  longlong lStack_188;
  int iStack_180;
  undefined4 uStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  longlong lStack_160;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined4 uStack_107;
  undefined4 uStack_103;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_238;
  uStack_1e8 = 0;
  ppuStack_f0 = &puStack_1c0;
  puStack_1c0 = &UNK_180a3c3e0;
  uStack_1a8 = 0;
  lStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_19c = 0x100;
  uStack_198 = 0;
  uStack_194 = 0;
  puVar5 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 8);
  }
  FUN_180627c50(&puStack_1c0,puVar5);
  uStack_1a0 = 0;
  uStack_19c = uStack_19c & 0xffffff00;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x60d30,0x10,0x1f);
  plVar4 = (longlong *)FUN_1801954d0(uVar3,&puStack_1c0);
  ppuStack_170 = (undefined **)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  uStack_148 = 0x3f800000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  uStack_134 = 0x3f800000;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_120 = 0x3f800000;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0x3f800000;
  uStack_107 = 0x1010101;
  uStack_103 = 1;
  uStack_108 = 1;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = *(undefined4 *)(param_2 + 0x10);
  puVar5 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar5 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(auStack_d0,0x80,puVar5);
  FUN_18019e140(&puStack_190,&puStack_e8);
  puStack_e8 = &UNK_18098bcb0;
  puStack_1e0 = &UNK_180a3c3e0;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  uStack_1d0 = 0;
  lVar6 = *param_1;
  FUN_1806279c0(&puStack_168,param_2);
  iVar2 = FUN_1801426a0(lVar6,&puStack_168);
  puStack_168 = &UNK_180a3c3e0;
  if (lStack_160 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_160 = 0;
  uStack_150 = 0;
  puStack_168 = &UNK_18098bcb0;
  if ((iVar2 < 0) ||
     (lVar6 = *(longlong *)(*param_1 + 0x888),
     (ulonglong)(*(longlong *)(*param_1 + 0x890) - lVar6 >> 5) <= (ulonglong)(longlong)iVar2)) {
    lVar6 = FUN_180628ca0();
  }
  else {
    lVar6 = (longlong)iVar2 * 0x20 + lVar6;
  }
  puStack_208 = &UNK_180a3c3e0;
  uStack_1f0 = 0;
  lStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1e8 = 1;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar7 = (ulonglong)uVar1;
  if (*(longlong *)(lVar6 + 8) != 0) {
    FUN_1806277c0(&puStack_208,uVar7);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_200,*(undefined8 *)(lVar6 + 8),uVar7);
  }
  if (lStack_200 != 0) {
    *(undefined1 *)(uVar7 + lStack_200) = 0;
  }
  uStack_1f0 = CONCAT44(*(uint *)(lVar6 + 0x1c),(undefined4)uStack_1f0);
  if (0 < iStack_180) {
    uStack_1f8 = uVar1;
    FUN_1806277c0(&puStack_208,iStack_180);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)uStack_1f8 + lStack_200,lStack_188,(longlong)(iStack_180 + 1));
  }
  lStack_1d8 = lStack_200;
  uStack_1c8._0_4_ = (undefined4)uStack_1f0;
  uStack_1f8 = 0;
  uStack_1e8 = 0;
  lStack_200 = 0;
  uStack_1f0 = 0;
  puStack_208 = &UNK_18098bcb0;
  uStack_218 = 0xffffffff;
  uStack_1d0 = uVar1;
  uStack_1c8._4_4_ = *(uint *)(lVar6 + 0x1c);
  FUN_1801a6440(plVar4,_DAT_180c868e8,&puStack_1e0,&uStack_148);
  FUN_18019e260(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x138))((longlong *)param_1[0x56],plVar4);
  FUN_180199500(plVar4,0x3d072b02,1);
  FUN_1801a2ea0(plVar4);
  (**(code **)(*(longlong *)param_1[0x56] + 0x140))((longlong *)param_1[0x56],plVar4);
  Sleep(1000);
  puStack_1e0 = &UNK_180a3c3e0;
  if (lStack_1d8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1d8 = 0;
  uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
  puStack_1e0 = &UNK_18098bcb0;
  puStack_190 = &UNK_180a3c3e0;
  if (lStack_188 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_188 = 0;
  uStack_178 = 0;
  puStack_190 = &UNK_18098bcb0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  ppuStack_170 = &puStack_1c0;
  puStack_1c0 = &UNK_180a3c3e0;
  if (lStack_1b8 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_1b8 = 0;
  uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
  puStack_1c0 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_238);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1800547b0(void)
void FUN_1800547b0(void)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined1 auStack_178 [32];
  undefined *puStack_158;
  undefined1 *puStack_150;
  uint uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined1 *puStack_130;
  uint uStack_128;
  ulonglong uStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  undefined4 uStack_108;
  ulonglong uStack_100;
  int iStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined4 uStack_e0;
  ulonglong uStack_d8;
  undefined *puStack_d0;
  longlong lStack_c8;
  int iStack_c0;
  undefined4 uStack_b8;
  longlong *plStack_a8;
  longlong lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined4 uStack_80;
  undefined *puStack_78;
  longlong lStack_70;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  plStack_a8 = _DAT_180c86870;
  lVar14 = *(longlong *)(*_DAT_180c86870 + 0x890) - *(longlong *)(*_DAT_180c86870 + 0x888) >> 5;
  iStack_f8 = 0;
  lStack_a0 = lVar14;
  if (0 < (int)lVar14) {
    do {
      iVar9 = iStack_f8;
      iVar13 = 0;
      if (iStack_f8 < 0) {
LAB_18005485e:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*_DAT_180c86870 + 0x888);
        if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x890) - lVar10 >> 5) <=
            (ulonglong)(longlong)iStack_f8) goto LAB_18005485e;
        lVar10 = (longlong)iStack_f8 * 0x20 + lVar10;
      }
      puStack_138 = &UNK_180a3c3e0;
      uStack_120 = 0;
      puStack_130 = (undefined1 *)0x0;
      uStack_128 = 0;
      FUN_1806277c0(&puStack_138,*(undefined4 *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_130,*(undefined8 *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_128 = 0;
        if (puStack_130 != (undefined1 *)0x0) {
          *puStack_130 = 0;
        }
        uStack_120 = uStack_120 & 0xffffffff;
      }
      if (iVar9 < 0) {
LAB_180054912:
        lVar10 = FUN_180628ca0();
      }
      else {
        lVar10 = *(longlong *)(*_DAT_180c86870 + 0x8a8);
        if ((ulonglong)(*(longlong *)(*_DAT_180c86870 + 0x8b0) - lVar10 >> 5) <
            (ulonglong)(longlong)iVar9) goto LAB_180054912;
        lVar10 = (longlong)iVar9 * 0x20 + lVar10;
      }
      puStack_118 = &UNK_180a3c3e0;
      uStack_100 = 0;
      puStack_110 = (undefined1 *)0x0;
      uStack_108 = 0;
      FUN_1806277c0(&puStack_118,*(undefined4 *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_110,*(undefined8 *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        uStack_108 = 0;
        if (puStack_110 != (undefined1 *)0x0) {
          *puStack_110 = 0;
        }
        uStack_100 = uStack_100 & 0xffffffff;
      }
      iVar8 = uStack_128 + 8;
      FUN_1806277c0(&puStack_138,iVar8);
      *(undefined8 *)(puStack_130 + uStack_128) = 0x6a624f656e656353;
      *(undefined1 *)((longlong)(puStack_130 + uStack_128) + 8) = 0;
      uStack_128 = iVar8;
      cVar4 = FUN_180624a00(&puStack_138);
      if (cVar4 == '\0') {
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (undefined1 *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        puStack_58 = (undefined8 *)0x0;
        puStack_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        FUN_18062c5f0(&puStack_138,&puStack_58);
        puVar5 = puStack_50;
        puVar3 = puStack_58;
        lVar10 = (longlong)puStack_50 - (longlong)puStack_58;
        FUN_18004b100(&puStack_d0);
        puVar6 = &DAT_18098bc73;
        if (puStack_110 != (undefined1 *)0x0) {
          puVar6 = puStack_110;
        }
        FUN_180628040(&puStack_d0,&UNK_1809fd7c4,puVar6);
        cVar4 = FUN_180624a00(&puStack_d0);
        if (cVar4 == '\0') {
          FUN_180624910(&puStack_d0);
        }
        plVar2 = plStack_a8;
        iVar8 = (int)(lVar10 >> 5);
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          puVar15 = (uint *)(puVar3 + 2);
          do {
            FUN_180061db0();
            FUN_180061be0();
            puStack_158 = &UNK_180a3c3e0;
            uStack_140._0_4_ = 0;
            uStack_140._4_4_ = 0;
            puStack_150 = (undefined1 *)0x0;
            uStack_148 = 0;
            FUN_1806277c0(&puStack_158,*puVar15);
            if (*puVar15 != 0) {
                    // WARNING: Subroutine does not return
              memcpy(puStack_150,*(undefined8 *)(puVar15 + -2),*puVar15 + 1);
            }
            if (*(longlong *)(puVar15 + -2) != 0) {
              uStack_148 = 0;
              if (puStack_150 != (undefined1 *)0x0) {
                *puStack_150 = 0;
              }
              uStack_140._4_4_ = 0;
            }
            iVar9 = uStack_148 + 0xd;
            FUN_1806277c0(&puStack_158,iVar9);
            puVar5 = (undefined8 *)(puStack_150 + uStack_148);
            *puVar5 = 0x782e656e6563732f;
            *(undefined4 *)(puVar5 + 1) = 0x6e656373;
            *(undefined2 *)((longlong)puVar5 + 0xc) = 0x65;
            puVar6 = &DAT_18098bc73;
            if (puStack_150 != (undefined1 *)0x0) {
              puVar6 = puStack_150;
            }
            uStack_148 = iVar9;
            lVar14 = strstr(puVar6,&UNK_1809fd7d8);
            if (lVar14 == 0) {
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd7f8);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd810);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd828);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &DAT_18098bc73;
              if (puStack_150 != (undefined1 *)0x0) {
                puVar6 = puStack_150;
              }
              lVar14 = strstr(puVar6,&UNK_1809fd848);
              if (lVar14 != 0) goto LAB_180054ec9;
              cVar4 = FUN_180624af0(&puStack_158);
              if (cVar4 == '\0') {
                uStack_148 = 0;
                if (puStack_150 != (undefined1 *)0x0) {
                  *puStack_150 = 0;
                }
                uVar1 = *puVar15;
                uVar11 = (ulonglong)uVar1;
                if (*(longlong *)(puVar15 + -2) != 0) {
                  FUN_1806277c0(&puStack_158,uVar11);
                }
                if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(puStack_150,*(undefined8 *)(puVar15 + -2),uVar11);
                }
                if (puStack_150 != (undefined1 *)0x0) {
                  puStack_150[uVar11] = 0;
                }
                uStack_140._4_4_ = puVar15[3];
                uStack_148 = uVar1;
                FUN_1806277c0(&puStack_158,0x12);
                puVar7 = (undefined4 *)(puStack_150 + uStack_148);
                *puVar7 = 0x6563732f;
                puVar7[1] = 0x782e656e;
                puVar7[2] = 0x2e6f6373;
                puVar7[3] = 0x65637378;
                *(undefined2 *)(puVar7 + 4) = 0x656e;
                *(undefined1 *)((longlong)puVar7 + 0x12) = 0;
                uStack_148 = 0x12;
                cVar4 = FUN_180624af0(&puStack_158);
                if (cVar4 != '\0') goto LAB_180054d28;
                puStack_158 = &UNK_180a3c3e0;
                if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
              else {
LAB_180054d28:
                iVar9 = *puVar15 - 1;
                if (-1 < iVar9) {
                  lVar14 = (longlong)iVar9;
                  do {
                    if (*(char *)(lVar14 + *(longlong *)(puVar15 + -2)) == '/') goto LAB_180054d57;
                    iVar9 = iVar9 + -1;
                    lVar14 = lVar14 + -1;
                  } while (-1 < lVar14);
                }
                iVar9 = -1;
LAB_180054d57:
                FUN_180629a40(puVar3 + (longlong)iVar13 * 4,&puStack_98,iVar9 + 1,0xffffffff);
                uVar17 = FUN_180054360(plVar2,&puStack_98);
                if (_DAT_180c82854 != 0) {
                  FUN_18005c1c0(uVar17,&puStack_78);
                  puStack_f0 = &UNK_180a3c3e0;
                  uStack_d8 = 0;
                  puStack_e8 = (undefined1 *)0x0;
                  uStack_e0 = 0;
                  FUN_1806277c0(&puStack_f0,iStack_c0);
                  if (iStack_c0 != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(puStack_e8,lStack_c8,iStack_c0 + 1);
                  }
                  if (lStack_c8 != 0) {
                    uStack_e0 = 0;
                    if (puStack_e8 != (undefined1 *)0x0) {
                      *puStack_e8 = 0;
                    }
                    uStack_d8 = uStack_d8 & 0xffffffff;
                  }
                  puVar16 = &DAT_18098bc73;
                  if (puStack_90 != (undefined *)0x0) {
                    puVar16 = puStack_90;
                  }
                  FUN_180628040(&puStack_f0,&UNK_1809fd870,puVar16);
                  FUN_18062db60(&puStack_f0,&puStack_78);
                  _DAT_180c82854 = 0;
                  puStack_f0 = &UNK_180a3c3e0;
                  if (puStack_e8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  puStack_e8 = (undefined1 *)0x0;
                  uStack_d8 = uStack_d8 & 0xffffffff00000000;
                  puStack_f0 = &UNK_18098bcb0;
                  puStack_78 = &UNK_180a3c3e0;
                  if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  lStack_70 = 0;
                  uStack_60 = 0;
                  puStack_78 = &UNK_18098bcb0;
                }
                puStack_98 = &UNK_180a3c3e0;
                if (puStack_90 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                puStack_90 = (undefined *)0x0;
                uStack_80 = 0;
                puStack_98 = &UNK_18098bcb0;
                puStack_158 = &UNK_180a3c3e0;
                if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
              }
            }
            else {
LAB_180054ec9:
              puStack_158 = &UNK_180a3c3e0;
              if (puStack_150 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
            }
            puStack_150 = (undefined1 *)0x0;
            puStack_158 = &UNK_18098bcb0;
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 8;
            lVar10 = lVar10 + -1;
            lVar14 = lStack_a0;
            puVar5 = puStack_50;
            iVar9 = iStack_f8;
          } while (lVar10 != 0);
        }
        puStack_d0 = &UNK_180a3c3e0;
        if (lStack_c8 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_c8 = 0;
        uStack_b8 = 0;
        puStack_d0 = &UNK_18098bcb0;
        for (puVar12 = puVar3; puVar12 != puVar5; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar3);
        }
        puStack_118 = &UNK_180a3c3e0;
        if (puStack_110 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_110 = (undefined1 *)0x0;
        uStack_100 = uStack_100 & 0xffffffff00000000;
        puStack_118 = &UNK_18098bcb0;
        puStack_138 = &UNK_180a3c3e0;
        if (puStack_130 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      puStack_110 = (undefined1 *)0x0;
      puStack_118 = &UNK_18098bcb0;
      uStack_120 = uStack_120 & 0xffffffff00000000;
      puStack_130 = (undefined1 *)0x0;
      puStack_138 = &UNK_18098bcb0;
      iStack_f8 = iVar9 + 1;
    } while (iStack_f8 < (int)lVar14);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180055050(void)
void FUN_180055050(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x198,8,3);
  puVar1 = puVar2 + 4;
  FUN_180637560(puVar1);
  *puVar1 = &UNK_180a3cf50;
  *(undefined2 *)(puVar2 + 0x1a) = 1;
  *(undefined4 *)(puVar2 + 9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x54) = 0;
  *puVar1 = &UNK_1809fe6d8;
  puVar1 = puVar2 + 0x1b;
  FUN_180637560(puVar1);
  *puVar1 = &UNK_180a3cf50;
  *(undefined2 *)(puVar2 + 0x31) = 1;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x10c) = 0;
  *puVar1 = &UNK_1809fe6d8;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(undefined4 *)(puVar2 + 1) = 0xe;
  _DAT_180c86928 = puVar2;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x480,8,3);
  _DAT_180c8a9f8 = FUN_18004bd10(uVar3);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x10420,8,3);
  _DAT_180c868c0 = FUN_18005c090(uVar3);
  _DAT_180c868d8 = FUN_18062b1e0(_DAT_180c8ed18,0x30,8,3);
  *(undefined4 *)(_DAT_180c868d8 + 0x19) = 0;
  *(undefined2 *)(_DAT_180c868d8 + 0x1d) = 0;
  *(undefined1 *)(_DAT_180c868d8 + 0x1f) = 0;
  *(undefined4 *)(_DAT_180c868d8 + 0x28) = 3;
  *(longlong *)_DAT_180c868d8 = _DAT_180c868d8;
  *(longlong *)(_DAT_180c868d8 + 8) = _DAT_180c868d8;
  *(undefined8 *)(_DAT_180c868d8 + 0x10) = 0;
  *(undefined1 *)(_DAT_180c868d8 + 0x18) = 0;
  *(undefined8 *)(_DAT_180c868d8 + 0x20) = 0;
  _DAT_180c86910 = FUN_18062b1e0(_DAT_180c8ed18,8,4,3);
  *(undefined4 *)(_DAT_180c86910 + 4) = 0;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x80,8,3);
  _DAT_180c86900 = FUN_18015c450(uVar3);
  lVar4 = FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
  _Mtx_init_in_situ(lVar4,2);
  _Mtx_init_in_situ(lVar4 + 0x50,2);
  *(undefined8 *)(lVar4 + 0xa0) = 0;
  *(undefined8 *)(lVar4 + 0xa8) = 0;
  *(undefined8 *)(lVar4 + 0xb0) = 0;
  *(undefined4 *)(lVar4 + 0xb8) = 3;
  *(undefined8 *)(lVar4 + 0xc0) = 0;
  *(undefined8 *)(lVar4 + 200) = 0;
  *(undefined8 *)(lVar4 + 0xd0) = 0;
  *(undefined4 *)(lVar4 + 0xd8) = 0x20;
  *(undefined4 *)(lVar4 + 0xe0) = 0;
  _DAT_180c8a998 = lVar4;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
                    // WARNING: Subroutine does not return
  memset(uVar3,0,0x70);
}





// 函数: void FUN_180055e10(longlong *param_1)
void FUN_180055e10(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    FUN_180058c20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180055e30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180055e30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180058210(param_1,*(undefined8 *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





