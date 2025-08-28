#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part181.c - 核心引擎模块第181部分
// 本文件包含3个函数，主要处理字符串操作和内存管理

// 函数: 处理核心引擎字符串格式化操作
// 参数:
//   param_1: 上下文参数
//   param_2: 输出缓冲区指针
//   param_3: 操作标识符
//   param_4: 数据块指针
void process_engine_string_formatting(undefined8 param_1, undefined8 *param_2, undefined8 param_3, longlong *param_4)

{
  undefined8 *buffer_ptr;
  undefined4 *format_ptr;
  uint char_count;
  undefined *string_ptr;
  undefined1 local_buffer1[32];
  undefined **output_ptr;
  undefined4 format_flag;
  undefined *temp_ptr1;
  byte *byte_ptr;
  int status_flag;
  undefined4 temp_flag1;
  undefined *temp_ptr2;
  undefined *temp_ptr3;
  undefined4 temp_flag2;
  undefined *temp_ptr4;
  undefined *temp_ptr5;
  undefined4 temp_flag3;
  undefined4 temp_flag4;
  undefined *temp_ptr6;
  undefined *temp_ptr7;
  undefined4 temp_flag5;
  undefined8 local_var1;
  undefined8 local_var2;
  undefined8 local_var3;
  undefined8 local_var4;
  undefined8 local_var5;
  undefined8 local_var6;
  undefined8 local_var7;
  undefined8 local_var8;
  undefined8 local_var9;
  undefined8 local_var10;
  undefined8 local_var11;
  undefined8 local_var12;
  undefined8 local_var13;
  undefined8 local_var14;
  undefined8 local_var15;
  undefined8 local_var16;
  undefined8 local_var17;
  undefined8 local_var18;
  undefined8 local_var19;
  undefined8 local_var20;
  undefined8 *buffer_ptr2;
  undefined *temp_ptr8;
  undefined1 *char_buffer1;
  undefined4 buffer_size1;
  undefined1 local_buffer2[64];
  undefined *temp_ptr9;
  undefined1 *char_buffer2;
  undefined4 buffer_size2;
  undefined1 local_buffer3[64];
  undefined *temp_ptr10;
  undefined1 *char_buffer3;
  undefined4 buffer_size3;
  undefined1 local_buffer4[64];
  undefined1 local_flag1;
  undefined *temp_ptr11;
  undefined1 *char_buffer4;
  undefined4 buffer_size4;
  undefined1 local_buffer5[72];
  undefined1 local_buffer6[176];
  undefined1 local_buffer7[48];
  ulonglong security_cookie;
  
  local_var19 = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)local_buffer1;
  format_flag = 0;
  buffer_ptr2 = param_2;
  if ((param_4[1] - *param_4 & 0xffffffffffffffe0U) == 0x80) {
    FUN_180627ae0(&temp_ptr4);
    FUN_180627ae0(&temp_ptr5, *param_4 + 0x20);
    FUN_180627ae0(&temp_ptr6, *param_4 + 0x40);
    FUN_180627ae0(&temp_ptr7, *param_4 + 0x60);
    temp_ptr8 = &UNK_1809fcc58;
    char_buffer1 = local_buffer2;
    buffer_size1 = 0;
    local_buffer2[0] = 0;
    temp_ptr9 = &UNK_1809fcc58;
    char_buffer2 = local_buffer3;
    buffer_size2 = 0;
    local_buffer3[0] = 0;
    output_ptr = &temp_ptr10;
    temp_ptr10 = &UNK_1809fcc58;
    char_buffer3 = local_buffer4;
    buffer_size3 = 0;
    local_buffer4[0] = 0;
    string_ptr = &DAT_18098bc73;
    if (temp_ptr3 != (undefined *)0x0) {
      string_ptr = temp_ptr3;
    }
    FUN_180049bf0(&temp_ptr8, string_ptr);
    string_ptr = &DAT_18098bc73;
    if (temp_ptr7 != (undefined *)0x0) {
      string_ptr = temp_ptr7;
    }
    (**(code **)(temp_ptr9 + 0x10))(&temp_ptr9, string_ptr);
    string_ptr = &DAT_18098bc73;
    if (temp_ptr3 != (undefined *)0x0) {
      string_ptr = temp_ptr3;
    }
    (**(code **)(temp_ptr10 + 0x10))(&temp_ptr10, string_ptr);
    if (status_flag == 1) {
      char_count = *byte_ptr - 0x31;
      if (char_count == 0) {
        char_count = (uint)byte_ptr[1];
      }
      local_flag1 = char_count == 0;
    }
    else {
      local_flag1 = false;
    }
    FUN_1802c2c40(local_buffer6);
    FUN_1802c4c30(local_buffer6);
    temp_ptr11 = &UNK_1809fcc58;
    char_buffer4 = local_buffer5;
    local_buffer5[0] = 0;
    buffer_size4 = temp_flag3;
    string_ptr = &DAT_18098bc73;
    if (temp_ptr5 != (undefined *)0x0) {
      string_ptr = temp_ptr5;
    }
    strcpy_s(local_buffer5, 0x40, string_ptr);
    FUN_1802c5470(local_buffer6, &temp_ptr11, &temp_ptr8);
    temp_ptr11 = &UNK_18098bcb0;
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2, 5);
    format_ptr = (undefined4 *)param_2[1];
    *format_ptr = 0x656e6f44;  // "Done"
    *(undefined2 *)(format_ptr + 1) = 0x2e;
    *(undefined4 *)(param_2 + 2) = 5;
    format_flag = 1;
    local_var10 = 0;
    local_var9 = 0;
    local_var8 = 0;
    local_var7 = 0;
    local_var6 = 0;
    local_var5 = 0;
    local_var4 = 0;
    local_var3 = 0;
    local_var1 = 0;
    local_var2 = 0;
    local_var20 = 0;
    local_var18 = 0;
    local_var17 = 0;
    local_var16 = 0;
    local_var15 = 0;
    local_var14 = 0;
    local_var13 = 0;
    local_var12 = 0;
    local_var11 = 0;
    FUN_1802479e0(local_buffer6, &local_var1);
    FUN_180246690(&local_var1);
    output_ptr = (undefined **)local_buffer7;
    FUN_1802c6e70(local_buffer7);
    FUN_180246690(local_buffer6);
    temp_ptr10 = &UNK_18098bcb0;
    temp_ptr9 = &UNK_18098bcb0;
    output_ptr = &temp_ptr8;
    temp_ptr8 = &UNK_18098bcb0;
    temp_ptr7 = &UNK_180a3c3e0;
    if (byte_ptr != (byte *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    byte_ptr = (byte *)0x0;
    temp_flag1 = 0;
    temp_ptr7 = &UNK_18098bcb0;
    temp_ptr6 = &UNK_180a3c3e0;
    if (temp_ptr7 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr7 = (undefined *)0x0;
    temp_flag5 = 0;
    temp_ptr6 = &UNK_18098bcb0;
    temp_ptr5 = &UNK_180a3c3e0;
    if (temp_ptr3 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr3 = (undefined *)0x0;
    temp_flag2 = 0;
    temp_ptr5 = &UNK_18098bcb0;
    temp_ptr4 = &UNK_180a3c3e0;
    if (temp_ptr5 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr5 = (undefined *)0x0;
    temp_flag4 = 0;
    temp_ptr4 = &UNK_18098bcb0;
  }
  else {
    *param_2 = &UNK_18098bcb0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *param_2 = &UNK_180a3c3e0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    FUN_1806277c0(param_2, 0x62);
    buffer_ptr = (undefined8 *)param_2[1];
    *buffer_ptr = 0x636572726f636e49;  // "Incorrect number of"
    buffer_ptr[1] = 0x7265626d756e2074;  // "umber of argu"
    buffer_ptr[2] = 0x7567726120666f20;  // "ugments fo"
    buffer_ptr[3] = 0x550a2173746e656d;  // "r\n<Momentu"
    buffer_ptr[4] = 0x4d3c203a65676173;  // "m< :Name<"
    buffer_ptr[5] = 0x6d614e656c75646f;  // "Nameodule"
    buffer_ptr[6] = 0x666572503c203e65;  // "erPer< >e"
    buffer_ptr[7] = 0x3e656d614e206261;  // ">eName ba"
    *(undefined4 *)(buffer_ptr + 8) = 0x614d3c20;  // "aM< "
    *(undefined4 *)((longlong)buffer_ptr + 0x44) = 0x72696574;  // "tier"
    *(undefined4 *)(buffer_ptr + 9) = 0x4e206c61;  // "N la"
    *(undefined4 *)((longlong)buffer_ptr + 0x4c) = 0x3e656d61;  // ">ema"
    buffer_ptr[10] = 0x6f6c472073493c20;  // "olG sI< "
    buffer_ptr[0xb] = 0x302f3128206c6162;  // "0/1( lab"
    *(undefined2 *)(buffer_ptr + 0xc) = 0x3e29;  // ">)"
    *(undefined1 *)((longlong)buffer_ptr + 0x62) = 0;
    *(undefined4 *)(param_2 + 2) = 0x62;
    format_flag = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)local_buffer1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 处理核心引擎版本信息
// 参数:
//   param_1: 上下文参数
//   param_2: 输出缓冲区指针
//   param_3: 操作标识符
//   param_4: 数据块指针
// 返回值: 输出缓冲区指针
undefined8 *
process_engine_version_info(undefined8 param_1, undefined8 *param_2, undefined8 param_3, longlong *param_4)

{
  undefined8 *result_ptr;
  undefined4 temp_flag;
  undefined4 *buffer_ptr;
  undefined8 *data_ptr;
  undefined *temp_ptr1;
  undefined8 *temp_ptr2;
  undefined4 buffer_size1;
  undefined8 local_var1;
  undefined *temp_ptr3;
  undefined8 *temp_ptr4;
  undefined4 buffer_size2;
  undefined8 local_var2;
  undefined8 *temp_ptr5;
  undefined8 *temp_ptr6;
  undefined8 local_var3;
  undefined4 buffer_size3;
  
  if (param_4[1] - *param_4 >> 5 != 0) {
    temp_ptr5 = (undefined8 *)0x0;
    temp_ptr6 = (undefined8 *)0x0;
    local_var3 = 0;
    buffer_size3 = 3;
    temp_ptr1 = &UNK_180a3c3e0;
    local_var1 = 0;
    temp_ptr2 = (undefined8 *)0x0;
    buffer_size1 = 0;
    buffer_ptr = (undefined4 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13, param_4, 0, 0xfffffffffffffffe);
    *(undefined1 *)buffer_ptr = 0;
    temp_ptr2 = (undefined8 *)buffer_ptr;
    temp_flag = FUN_18064e990(buffer_ptr);
    *buffer_ptr = 0x65736162;  // "base"
    *(undefined1 *)(buffer_ptr + 1) = 0;
    buffer_size1 = 4;
    local_var1._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr1);
    temp_ptr1 = &UNK_180a3c3e0;
    if (temp_ptr2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr2 = (undefined8 *)0x0;
    local_var1 = (ulonglong)local_var1._4_4_ << 0x20;
    temp_ptr1 = &UNK_18098bcb0;
    temp_ptr3 = &UNK_180a3c3e0;
    local_var2 = 0;
    temp_ptr4 = (undefined8 *)0x0;
    buffer_size2 = 0;
    data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)data_ptr = 0;
    temp_ptr4 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x315f6c6576656c;  // "level1"
    buffer_size2 = 7;
    local_var2._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr3);
    temp_ptr3 = &UNK_180a3c3e0;
    if (temp_ptr4 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr4 = (undefined8 *)0x0;
    local_var2 = (ulonglong)local_var2._4_4_ << 0x20;
    temp_ptr3 = &UNK_18098bcb0;
    temp_ptr1 = &UNK_180a3c3e0;
    local_var1 = 0;
    temp_ptr2 = (undefined8 *)0x0;
    buffer_size1 = 0;
    data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)data_ptr = 0;
    temp_ptr2 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x325f6c6576656c;  // "level2"
    buffer_size1 = 7;
    local_var1._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr1);
    temp_ptr1 = &UNK_180a3c3e0;
    if (temp_ptr2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr2 = (undefined8 *)0x0;
    local_var1 = (ulonglong)local_var1._4_4_ << 0x20;
    temp_ptr1 = &UNK_18098bcb0;
    temp_ptr3 = &UNK_180a3c3e0;
    local_var2 = 0;
    temp_ptr4 = (undefined8 *)0x0;
    buffer_size2 = 0;
    data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)data_ptr = 0;
    temp_ptr4 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x335f6c6576656c;  // "level3"
    buffer_size2 = 7;
    local_var2._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr3);
    temp_ptr3 = &UNK_180a3c3e0;
    if (temp_ptr4 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr4 = (undefined8 *)0x0;
    local_var2 = (ulonglong)local_var2._4_4_ << 0x20;
    temp_ptr3 = &UNK_18098bcb0;
    temp_ptr1 = &UNK_180a3c3e0;
    local_var1 = 0;
    temp_ptr2 = (undefined8 *)0x0;
    buffer_size1 = 0;
    data_ptr = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
    *(undefined1 *)data_ptr = 0;
    temp_ptr2 = data_ptr;
    temp_flag = FUN_18064e990(data_ptr);
    *data_ptr = 0x6e61696c69766963;  // "civilian"
    *(undefined1 *)(data_ptr + 1) = 0;
    buffer_size1 = 8;
    local_var1._0_4_ = temp_flag;
    FUN_180066df0(&temp_ptr5, &temp_ptr1);
    temp_ptr1 = &UNK_180a3c3e0;
    if (temp_ptr2 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr2 = (undefined8 *)0x0;
    local_var1 = (ulonglong)local_var1._4_4_ << 0x20;
    temp_ptr1 = &UNK_18098bcb0;
    FUN_18020ccb0(0, *param_4, *param_4 + 0x20, &temp_ptr5);
    result_ptr = temp_ptr6;
    for (data_ptr = temp_ptr5; data_ptr != result_ptr; data_ptr = data_ptr + 4) {
      (**(code **)*data_ptr)(data_ptr, 0);
    }
    if (temp_ptr5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(temp_ptr5);
    }
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2, 0x27);
  data_ptr = (undefined8 *)param_2[1];
  *data_ptr = 0x6f66207475706e49;  // "Input of "
  data_ptr[1] = 0x6d3c203a74616d72;  // "m< :marmat"
  data_ptr[2] = 0x616e5f656c75646f;  // "an_unname"
  data_ptr[3] = 0x6c69663c203e656d;  // "lif< >em"
  data_ptr[4] = 0x3e656d616e5f65;  // ">emaname"
  *(undefined4 *)(param_2 + 2) = 0x27;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 处理核心引擎文件系统操作
// 参数:
//   param_1: 上下文参数
//   param_2: 操作标识符
//   param_3: 数据块指针
void process_engine_file_operations(undefined8 param_1, undefined8 param_2, longlong *param_3)

{
  uint temp_uint;
  code *error_handler;
  char temp_char;
  int temp_int;
  longlong temp_long;
  undefined4 *temp_ptr1;
  undefined8 temp_var1;
  undefined4 temp_var2;
  ulonglong temp_ulong;
  undefined *temp_ptr2;
  undefined1 local_buffer1[32];
  undefined2 *wide_char_ptr;
  undefined4 file_operation_flag;
  undefined4 temp_flag1;
  undefined *temp_ptr3;
  undefined *temp_ptr4;
  uint buffer_size1;
  undefined8 local_var1;
  undefined *temp_ptr5;
  longlong temp_long1;
  uint buffer_size2;
  undefined8 local_var2;
  undefined *temp_ptr6;
  longlong temp_long2;
  undefined2 *wide_char_ptr2;
  undefined8 local_var3;
  undefined2 wide_char_flag;
  undefined4 operation_flag;
  undefined8 local_var4;
  undefined8 local_var5;
  undefined *temp_ptr7;
  longlong temp_long3;
  undefined4 temp_flag2;
  undefined8 local_var6;
  undefined *pointer_array[68];
  undefined2 wide_char_buffer[280];
  ulonglong security_cookie;
  
  local_var6 = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)local_buffer1;
  temp_flag1 = 0;
  if (param_3[1] - *param_3 >> 5 != 0) {
    temp_long = FUN_1800baa80(&temp_ptr6);
    temp_ptr3 = &UNK_180a3c3e0;
    local_var1 = 0;
    temp_ptr4 = (undefined *)0x0;
    buffer_size1 = 0;
    temp_flag1 = 1;
    temp_uint = *(uint *)(temp_long + 0x10);
    temp_ulong = (ulonglong)temp_uint;
    if (*(longlong *)(temp_long + 8) != 0) {
      FUN_1806277c0(&temp_ptr3, temp_ulong);
    }
    if (temp_uint != 0) {
                    // WARNING: Subroutine does not return
      memcpy(temp_ptr4, *(undefined8 *)(temp_long + 8), temp_ulong);
    }
    if (temp_ptr4 != (undefined *)0x0) {
      *(undefined1 *)(temp_ulong + (longlong)temp_ptr4) = 0;
    }
    local_var1 = CONCAT44(*(undefined4 *)(temp_long + 0x1c), (undefined4)local_var1);
    buffer_size1 = temp_uint;
    FUN_1806277c0(&temp_ptr3, 0xf);
    temp_ptr1 = (undefined4 *)((ulonglong)buffer_size1 + (longlong)temp_ptr4);
    *temp_ptr1 = 0x72726554;  // "Trra"
    temp_ptr1[1] = 0x536e6961;  // "Sina"
    temp_ptr1[2] = 0x65646168;  // "edah"
    temp_ptr1[3] = 0x2f7372;  // "/sr"
    buffer_size1 = 0xf;
    temp_long = FUN_180627ce0(&temp_ptr3, &temp_ptr7, *param_3);
    temp_ptr5 = &UNK_180a3c3e0;
    local_var2 = 0;
    temp_long1 = 0;
    buffer_size2 = 0;
    temp_flag1 = 3;
    temp_uint = *(uint *)(temp_long + 0x10);
    temp_ulong = (ulonglong)temp_uint;
    if (*(longlong *)(temp_long + 8) != 0) {
      FUN_1806277c0(&temp_ptr5, temp_ulong);
    }
    if (temp_uint != 0) {
                    // WARNING: Subroutine does not return
      memcpy(temp_long1, *(undefined8 *)(temp_long + 8), temp_ulong);
    }
    if (temp_long1 != 0) {
      *(undefined1 *)(temp_ulong + temp_long1) = 0;
    }
    local_var2 = CONCAT44(*(undefined4 *)(temp_long + 0x1c), (undefined4)local_var2);
    temp_var2 = 1;
    buffer_size2 = temp_uint;
    FUN_1806277c0(&temp_ptr5, 1);
    *(undefined2 *)((ulonglong)buffer_size2 + temp_long1) = 0x2f;  // "/"
    temp_ptr7 = &UNK_180a3c3e0;
    buffer_size2 = temp_var2;
    if (temp_long3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_long3 = 0;
    temp_flag2 = 0;
    temp_ptr7 = &UNK_18098bcb0;
    temp_flag1 = 2;
    temp_ptr3 = &UNK_180a3c3e0;
    if (temp_ptr4 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_ptr4 = (undefined *)0x0;
    local_var1 = local_var1 & 0xffffffff00000000;
    temp_ptr3 = &UNK_18098bcb0;
    temp_ptr6 = &UNK_180a3c3e0;
    if (temp_long2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_long2 = 0;
    local_var3 = (ulonglong)local_var3._4_4_ << 0x20;
    temp_ptr6 = &UNK_18098bcb0;
    temp_char = FUN_180624a00(&temp_ptr5);
    if (temp_char != '\0') {
      temp_var1 = FUN_180624440(pointer_array, &temp_ptr5);
      FUN_1806279c0(&temp_ptr3, temp_var1);
      pointer_array[0] = &UNK_18098bcb0;
      temp_ptr2 = &DAT_18098bc73;
      if (temp_ptr4 != (undefined *)0x0) {
        temp_ptr2 = temp_ptr4;
      }
      temp_flag1 = 0x118;
      wide_char_ptr = wide_char_buffer;
      temp_int = MultiByteToWideChar(0xfde9, 0, temp_ptr2, 0xffffffff);
      if (0x22f < (ulonglong)((longlong)temp_int * 2)) {
LAB_180167a3b:
        FUN_1808fcdc8();
        error_handler = (code *)swi(3);
        (*error_handler)();
        return;
      }
      wide_char_buffer[temp_int] = 0;
      if (0x22f < (ulonglong)((longlong)(temp_int + 1) * 2)) {
        FUN_1808fcdc8();
        goto LAB_180167a3b;
      }
      wide_char_buffer[temp_int + 1] = 0;
      temp_ptr6 = (undefined *)0x0;
      temp_long2 = CONCAT44(temp_long2._4_4_, 3);
      wide_char_ptr2 = wide_char_buffer;
      local_var3 = 0;
      wide_char_flag = 0x14;
      operation_flag = 0;
      local_var5 = 0;
      local_var4 = 0;
      SHFileOperationW(&temp_ptr6);
      temp_ptr3 = &UNK_180a3c3e0;
      if (temp_ptr4 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      temp_ptr4 = (undefined *)0x0;
      local_var1 = local_var1 & 0xffffffff00000000;
      temp_ptr3 = &UNK_18098bcb0;
    }
    temp_flag1 = 0;
    temp_ptr5 = &UNK_180a3c3e0;
    if (temp_long1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    temp_long1 = 0;
    local_var2 = local_var2 & 0xffffffff00000000;
    temp_ptr5 = &UNK_18098bcb0;
  }
  temp_flag1 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_cookie ^ (ulonglong)local_buffer1);
}


