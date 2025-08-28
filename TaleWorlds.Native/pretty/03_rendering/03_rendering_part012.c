#include "TaleWorlds.Native.Split.h"

// 03_rendering_part012.c - 渲染系统数据序列化函数

/**
 * 序列化渲染对象数据到缓冲区
 * @param render_object 渲染对象指针
 * @param buffer 输出缓冲区
 */
void serialize_render_object_data(longlong render_object, longlong *buffer)

{
  int loop_counter;
  uint flag_value;
  uint temp_value1;
  uint temp_value2;
  char *char_ptr;
  longlong *long_ptr;
  longlong offset_value;
  ulonglong index_counter;
  longlong buffer_start;
  int *int_ptr;
  uint *write_ptr;
  uint mask_value;
  ulonglong entry_count;
  undefined8 *entry_ptr;
  longlong *data_array;
  ulonglong zero_counter;
  
  write_ptr = (uint *)buffer[1];
  if ((ulonglong)((*buffer - (longlong)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(longlong)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = 0;
  write_ptr = (uint *)(buffer[1] + 4);
  buffer[1] = (longlong)write_ptr;
  if ((ulonglong)((*buffer - (longlong)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer,(longlong)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  temp_value1 = *(uint *)(render_object + 0xc);
  temp_value2 = *(uint *)(render_object + 0x10);
  flag_value = *(uint *)(render_object + 0x14);
  *write_ptr = *(uint *)(render_object + 8);
  write_ptr[1] = temp_value1;
  write_ptr[2] = temp_value2;
  write_ptr[3] = flag_value;
  buffer[1] = buffer[1] + 0x10;
  write_ptr = (uint *)buffer[1];
  if ((ulonglong)((*buffer - (longlong)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(longlong)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  *write_ptr = 2;
  buffer[1] = buffer[1] + 4;
  serialize_material_data(&RENDER_MATERIAL_TABLE,*(uint *)(render_object + 0x18),buffer);
  write_ptr = (uint *)buffer[1];
  mask_value = *(uint *)(render_object + 0x1c);
  if ((ulonglong)((*buffer - (longlong)write_ptr) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(longlong)write_ptr + (4 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  zero_counter = 0;
  *write_ptr = 0;
  buffer_start = *buffer;
  offset_value = buffer[1] + 4;
  buffer[1] = offset_value;
  index_counter = zero_counter;
  if (buffer_start != 0) {
    index_counter = offset_value - buffer_start;
  }
  if ((ulonglong)((buffer_start - offset_value) + buffer[2]) < 5) {
    expand_buffer_if_needed(buffer,(offset_value - buffer_start) + 4);
    offset_value = buffer[1];
  }
  buffer[1] = offset_value + 4;
  entry_ptr = (undefined8 *)&RENDER_FLAG_TABLE;
  entry_count = zero_counter;
  do {
    if ((*(uint *)(entry_ptr + 1) & mask_value) != 0) {
      write_buffer_entry(buffer,*entry_ptr);
      entry_count = (ulonglong)((int)entry_count + 1);
    }
    entry_ptr = entry_ptr + 2;
  } while ((longlong)entry_ptr < 0x18098e220);
  *(int *)(index_counter + *buffer) = (int)entry_count;
  char_ptr = (char *)0x180bf8ff8;
  index_counter = zero_counter;
  do {
    if (*char_ptr == *(char *)(render_object + 0x134)) {
      write_buffer_entry(buffer,*(undefined8 *)((longlong)(int)index_counter * 0x10 + 0x180bf8ff0));
      break;
    }
    index_counter = (ulonglong)((int)index_counter + 1);
    char_ptr = char_ptr + 0x10;
  } while ((longlong)char_ptr < 0x180bf90b8);
  write_ptr = (uint *)buffer[1];
  if ((ulonglong)((*buffer - (longlong)write_ptr) + buffer[2]) < 0x11) {
    expand_buffer_if_needed(buffer,(longlong)write_ptr + (0x10 - *buffer));
    write_ptr = (uint *)buffer[1];
  }
  temp_value1 = *(uint *)(render_object + 0x24);
  temp_value2 = *(uint *)(render_object + 0x28);
  flag_value = *(uint *)(render_object + 0x2c);
  data_array = (longlong *)(render_object + 0x30);
  *write_ptr = *(uint *)(render_object + 0x20);
  write_ptr[1] = temp_value1;
  write_ptr[2] = temp_value2;
  write_ptr[3] = flag_value;
  buffer[1] = buffer[1] + 0x10;
  offset_value = 0x10;
  write_ptr = (uint *)buffer[1];
  long_ptr = data_array;
  index_counter = zero_counter;
  do {
    if ((*long_ptr != 0) || (long_ptr[1] != 0)) {
      index_counter = (ulonglong)((int)index_counter + 1);
    }
    long_ptr = long_ptr + 2;
    offset_value = offset_value + -1;
  } while (offset_value != 0);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = (int)uVar8;
  param_2[1] = param_2[1] + 4;
  uVar8 = uVar16;
  plVar6 = plVar15;
  do {
    piVar10 = (int *)param_2[1];
    if ((*plVar15 != 0) || (plVar15[1] != 0)) {
      if ((ulonglong)((*param_2 - (longlong)piVar10) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)piVar10 + (4 - *param_2));
        piVar10 = (int *)param_2[1];
      }
      *piVar10 = (int)uVar8;
      param_2[1] = param_2[1] + 4;
      puVar11 = (undefined4 *)param_2[1];
      if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 0x11) {
        FUN_180639bf0(param_2,(longlong)puVar11 + (0x10 - *param_2));
        puVar11 = (undefined4 *)param_2[1];
      }
      uVar2 = *(undefined4 *)((longlong)plVar6 + 4);
      lVar9 = plVar6[1];
      uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
      *puVar11 = (int)*plVar6;
      puVar11[1] = uVar2;
      puVar11[2] = (int)lVar9;
      puVar11[3] = uVar3;
      param_2[1] = param_2[1] + 0x10;
      piVar10 = (int *)param_2[1];
    }
    uVar12 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar12;
    plVar15 = plVar15 + 2;
    plVar6 = plVar6 + 2;
  } while ((int)uVar12 < 0x10);
  iVar1 = *(int *)(param_1 + 0x130);
  if ((ulonglong)((*param_2 - (longlong)piVar10) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)piVar10 + (4 - *param_2));
    piVar10 = (int *)param_2[1];
  }
  *piVar10 = iVar1;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  lVar9 = *(longlong *)(param_1 + 0x140);
  lVar7 = *(longlong *)(param_1 + 0x138);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = (int)((lVar9 - lVar7) / 0x58);
  param_2[1] = param_2[1] + 4;
  lVar7 = *(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138);
  puVar11 = (undefined4 *)param_2[1];
  lVar9 = lVar7 >> 0x3f;
  uVar8 = uVar16;
  if (lVar7 / 0x58 + lVar9 != lVar9) {
    do {
      FUN_180639ec0(param_2,uVar16 * 0x58 + *(longlong *)(param_1 + 0x138));
      uVar12 = (int)uVar8 + 1;
      uVar16 = (ulonglong)(int)uVar12;
      uVar8 = (ulonglong)uVar12;
    } while (uVar16 < (ulonglong)
                      ((*(longlong *)(param_1 + 0x140) - *(longlong *)(param_1 + 0x138)) / 0x58));
    puVar11 = (undefined4 *)param_2[1];
  }
  uVar2 = *(undefined4 *)(param_1 + 0x158);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x15c);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x160);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x164);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (0x10 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = *(undefined4 *)(param_1 + 0x168);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x16c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x170);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x174);
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (0x10 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = *(undefined4 *)(param_1 + 0x178);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x17c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x180);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x184);
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (0x10 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = *(undefined4 *)(param_1 + 0x188);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x18c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 400);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x194);
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (0x10 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = *(undefined4 *)(param_1 + 0x198);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x19c);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x1a0);
  lVar9 = param_2[1];
  param_2[1] = lVar9 + 4;
  *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_1 + 0x1a4);
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1a8);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1ac);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1b0);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1b4);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1b8);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1bc);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1c0);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    puVar11 = (undefined4 *)param_2[1];
  }
  *puVar11 = uVar2;
  puVar11 = (undefined4 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar11;
  uVar2 = *(undefined4 *)(param_1 + 0x1c4);
  if ((ulonglong)((*param_2 - (longlong)puVar11) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar11 + (4 - *param_2));
    *(undefined4 *)param_2[1] = uVar2;
  }
  else {
    *puVar11 = uVar2;
  }
  param_2[1] = param_2[1] + 4;
  return;
}



/**
 * 初始化渲染状态对象
 * @param render_state 渲染状态对象指针
 * @return 初始化后的渲染状态对象指针
 */
undefined8 * initialize_render_state(undefined8 *render_state)

{
  *render_state = &RENDER_STATE_NULL;
  render_state[1] = 0;
  *(undefined4 *)(render_state + 2) = 0;
  *render_state = &RENDER_SHADER_TABLE;
  render_state[1] = render_state + 3;
  *(undefined4 *)(render_state + 2) = 0;
  *(undefined1 *)(render_state + 3) = 0;
  render_state[0x22] = &RENDER_STATE_NULL;
  render_state[0x23] = 0;
  *(undefined4 *)(render_state + 0x24) = 0;
  render_state[0x22] = &RENDER_MATERIAL_TABLE;
  render_state[0x25] = 0;
  render_state[0x23] = 0;
  *(undefined4 *)(render_state + 0x24) = 0;
  render_state[0x26] = 0;
  render_state[0x27] = 0;
  render_state[0x28] = 0;
  *(undefined4 *)(render_state + 0x29) = 3;
  render_state[0x2a] = 0;
  render_state[0x2b] = 0;
  render_state[0x2c] = 0;
  *(undefined4 *)(render_state + 0x2d) = 3;
  render_state[0x2e] = 0;
  render_state[0x2f] = 0;
  render_state[0x30] = 0;
  *(undefined4 *)(render_state + 0x31) = 3;
  *(undefined8 *)((longlong)render_state + 0x5c) = 0;
  *(undefined4 *)((longlong)render_state + 100) = 0;
  *(undefined4 *)(render_state + 0x10) = 0;
  *(undefined4 *)((longlong)render_state + 0x84) = 0;
  *(undefined4 *)(render_state + 0x11) = 0;
  *(undefined4 *)((longlong)render_state + 0x8c) = 0x3f800000;
  *(undefined4 *)(render_state + 0x12) = 0;
  *(undefined4 *)((longlong)render_state + 0x94) = 0;
  *(undefined4 *)(render_state + 0x13) = 0;
  *(undefined4 *)((longlong)render_state + 0x9c) = 0x3f800000;
  render_state[0x14] = 0;
  render_state[0x15] = 0;
  render_state[0x16] = 0;
  render_state[0x17] = 0;
  render_state[0x18] = 0;
  render_state[0x19] = 0;
  render_state[0x1a] = 0x3f800000;
  render_state[0x1b] = 0;
  render_state[0x1c] = 0x3f80000000000000;
  render_state[0x1d] = 0;
  render_state[0x1e] = 0;
  render_state[0x1f] = 0x3f800000;
  render_state[0x20] = 0;
  render_state[0x21] = 0x3f80000000000000;
  *(undefined4 *)(render_state + 0xb) = 0;
  render_state[0xd] = 0;
  render_state[0xe] = 0;
  render_state[0xf] = 0;
  *(undefined4 *)(render_state + 0x33) = 0xffffffff;
  render_state[0x32] = 0;
  return render_state;
}



undefined8 *
FUN_180275010(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0xc;
  strcpy_s(param_2[1],0x80,&UNK_180a167d0,param_4,0,0xfffffffffffffffe);
  return param_2;
}



undefined8 * FUN_180275090(undefined8 *param_1)

{
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a14860;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_180a169b8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x16;
  FUN_180285e20(param_1 + 0xd);
  param_1[0x3e] = &UNK_18098bcb0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &UNK_180a3c3e0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = &UNK_180a169a8;
  LOCK();
  *(undefined4 *)(param_1 + 0x62) = 0;
  UNLOCK();
  param_1[99] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  FUN_1802786d0(param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



undefined8 FUN_180275250(undefined8 param_1,ulonglong param_2)

{
  FUN_180275730();
  if ((param_2 & 1) != 0) {
    free(param_1,0x3d0);
  }
  return param_1;
}





// 函数: void FUN_180275290(longlong *param_1)
void FUN_180275290(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  for (plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1802752b0(longlong param_1)
void FUN_1802752b0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x168) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x168) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x148) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x148) = &UNK_18098bcb0;
  *(undefined **)(param_1 + 0xb0) = &UNK_18098bcb0;
  *(undefined **)(param_1 + 0x18) = &UNK_18098bcb0;
  return;
}



undefined8 *
FUN_180275370(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a14860;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_180a169b8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x16;
  FUN_180285e20(param_1 + 0xd,param_2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x3e] = &UNK_18098bcb0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &UNK_180a3c3e0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = &UNK_180a169a8;
  LOCK();
  *(undefined4 *)(param_1 + 0x62) = 0;
  UNLOCK();
  param_1[99] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  FUN_1802786d0(param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_18027a810(param_1,param_2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_180275540(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a14860;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_180a169b8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x16;
  FUN_180285e20(param_1 + 0xd,param_2,(char)param_3,param_4,0xfffffffffffffffe);
  param_1[0x3e] = &UNK_18098bcb0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = &UNK_180a3c3e0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x61] = &UNK_180a169a8;
  LOCK();
  *(undefined4 *)(param_1 + 0x62) = 0;
  UNLOCK();
  param_1[99] = 0xffffffffffffffff;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  FUN_1802786d0(param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = FUN_1800b6de0(_DAT_180c86930,param_2,1);
  if (lVar1 != 0) {
    FUN_180275a60(lVar1,param_1,1);
  }
  FUN_18027a810(param_1,param_3);
  return param_1;
}





// 函数: void FUN_180275730(undefined8 *param_1)
void FUN_180275730(undefined8 *param_1)

{
  *param_1 = &UNK_180a169b8;
  FUN_180275960();
  if ((longlong *)param_1[0x79] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x79] + 0x38))();
  }
  if ((longlong *)param_1[0x77] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x77] + 0x38))();
  }
  param_1[0x61] = &UNK_180a169a8;
  param_1[0x3e] = &UNK_180a3c3e0;
  if (param_1[0x3f] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3e] = &UNK_18098bcb0;
  FUN_1802752b0(param_1 + 0xd);
  FUN_1802841d0();
  *param_1 = &UNK_180a14860;
  param_1[5] = 0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}



undefined8 FUN_180275820(longlong *param_1)

{
  char cVar1;
  
  if (*(code **)(*param_1 + 0xc0) == (code *)&UNK_180277e10) {
    cVar1 = (param_1[8] - param_1[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xc0))();
  }
  if (cVar1 == '\0') {
    return *(undefined8 *)param_1[7];
  }
  return 0;
}



undefined8 FUN_180275870(undefined8 *param_1)

{
  char cVar1;
  
  if ((undefined *)*param_1 == &UNK_180a169b8) {
    cVar1 = (param_1[8] - param_1[7] & 0xfffffffffffffff0) == 0;
  }
  else {
    cVar1 = (**(code **)((undefined *)*param_1 + 0xc0))(param_1);
  }
  if (cVar1 == '\0') {
    return *(undefined8 *)param_1[7];
  }
  return 0;
}





// 函数: void FUN_1802758c0(longlong param_1,char param_2)
void FUN_1802758c0(longlong param_1,char param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x40) - lVar4 >> 4 != 0) {
    do {
      lVar4 = *(longlong *)(uVar1 + lVar4);
      if (param_2 == '\0') {
        if (*(char *)(lVar4 + 0xfa) != '\0') {
          *(undefined1 *)(lVar4 + 0xfa) = 0;
LAB_18027591d:
          FUN_180079520();
        }
      }
      else if (*(char *)(lVar4 + 0xfa) != '\x01') {
        *(undefined1 *)(lVar4 + 0xfa) = 1;
        goto LAB_18027591d;
      }
      lVar4 = *(longlong *)(param_1 + 0x38);
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 0x10;
      uVar3 = (ulonglong)uVar2;
    } while ((ulonglong)(longlong)(int)uVar2 <
             (ulonglong)(*(longlong *)(param_1 + 0x40) - lVar4 >> 4));
  }
  return;
}





// 函数: void FUN_1802758eb(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802758eb(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  char unaff_BPL;
  longlong unaff_RSI;
  uint unaff_EDI;
  
  uVar2 = (ulonglong)unaff_EDI;
  do {
    lVar1 = *(longlong *)(uVar2 + param_3);
    if (unaff_BPL == '\0') {
      if (*(char *)(lVar1 + 0xfa) != '\0') {
        *(undefined1 *)(lVar1 + 0xfa) = 0;
LAB_18027591d:
        FUN_180079520();
      }
    }
    else if (*(char *)(lVar1 + 0xfa) != '\x01') {
      *(undefined1 *)(lVar1 + 0xfa) = 1;
      goto LAB_18027591d;
    }
    param_3 = *(longlong *)(unaff_RSI + 0x38);
    unaff_EDI = unaff_EDI + 1;
    uVar2 = uVar2 + 0x10;
    if ((ulonglong)(*(longlong *)(unaff_RSI + 0x40) - param_3 >> 4) <=
        (ulonglong)(longlong)(int)unaff_EDI) {
      return;
    }
  } while( true );
}





// 函数: void FUN_180275944(void)
void FUN_180275944(void)

{
  return;
}





// 函数: void FUN_180275960(longlong param_1)
void FUN_180275960(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  iVar1 = (int)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38) >> 4);
  lVar3 = (longlong)iVar1;
  if (0 < iVar1) {
    do {
      *(undefined8 *)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x38)) + 0x1c8) = 0;
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 != 0);
  }
  FUN_180284500();
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((lVar2 != 0) &&
     (*(short *)(lVar2 + 0x2b0) = *(short *)(lVar2 + 0x2b0) + 1, *(longlong *)(lVar2 + 0x168) != 0))
  {
    func_0x0001802eeba0();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1802759e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16,0,0xfffffffffffffffe);
  plVar2 = (longlong *)FUN_180275090(uVar1);
  *param_2 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_180275a60(param_1,*param_2,1);
  return param_2;
}





