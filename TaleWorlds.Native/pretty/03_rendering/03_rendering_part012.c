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



/**
 * 创建基础渲染对象
 * @param param_1 渲染对象指针
 * @param param_2 渲染对象输出指针
 * @param param_3 渲染参数1
 * @param param_4 渲染参数2
 * @return 渲染对象指针
 */
undefined8 * create_base_render_object(undefined8 param_1, undefined8 *render_object_ptr, undefined8 render_param1, undefined8 render_param2)

{
  *render_object_ptr = &RENDER_VTABLE_BASE;
  render_object_ptr[1] = 0;
  *(undefined4 *)(render_object_ptr + 2) = 0;
  *render_object_ptr = &RENDER_VTABLE_EXTENDED;
  render_object_ptr[1] = render_object_ptr + 3;
  *(undefined1 *)(render_object_ptr + 3) = 0;
  *(undefined4 *)(render_object_ptr + 2) = 0xc;
  strcpy_s(render_object_ptr[1], 0x80, &RENDER_NAME_TEMPLATE, render_param2, 0, 0xfffffffffffffffe);
  return render_object_ptr;
}



/**
 * 初始化渲染器
 * @param renderer 渲染器指针
 * @return 初始化后的渲染器指针
 */
undefined8 * initialize_renderer(undefined8 *renderer)

{
  *renderer = &RENDERER_VTABLE1;
  *renderer = &RENDERER_VTABLE2;
  *(undefined4 *)(renderer + 1) = 0;
  *renderer = &RENDERER_SHADER_TABLE;
  *(undefined4 *)(renderer + 2) = 4;
  renderer[3] = 0;
  renderer[4] = 0;
  *(undefined4 *)(renderer + 1) = 0;
  renderer[5] = 0;
  *renderer = &RENDERER_CONFIG_TABLE;
  renderer[7] = 0;
  renderer[8] = 0;
  renderer[9] = 0;
  *(undefined4 *)(renderer + 10) = 0x16;
  initialize_render_data_structures(renderer + 0xd);
  renderer[0x3e] = &RENDER_STATE_NULL;
  renderer[0x3f] = 0;
  *(undefined4 *)(renderer + 0x40) = 0;
  renderer[0x3e] = &RENDER_MATERIAL_TABLE;
  renderer[0x41] = 0;
  renderer[0x3f] = 0;
  *(undefined4 *)(renderer + 0x40) = 0;
  *(undefined4 *)((longlong)renderer + 0x244) = 0;
  *(undefined8 *)((longlong)renderer + 0x214) = 0;
  *(undefined8 *)((longlong)renderer + 0x21c) = 0;
  *(undefined8 *)((longlong)renderer + 0x224) = 0;
  *(undefined8 *)((longlong)renderer + 0x22c) = 0;
  *(undefined8 *)((longlong)renderer + 0x234) = 0;
  *(undefined8 *)((longlong)renderer + 0x23c) = 0;
  *(undefined8 *)((longlong)renderer + 0x24c) = 0;
  *(undefined8 *)((longlong)renderer + 0x254) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)renderer + 0x25c) = 0;
  *(undefined8 *)((longlong)renderer + 0x264) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)renderer + 0x26c) = 0;
  *(undefined8 *)((longlong)renderer + 0x274) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)renderer + 0x2fc) = 0;
  *(undefined8 *)((longlong)renderer + 0x27c) = 0;
  *(undefined8 *)((longlong)renderer + 0x284) = 0;
  *(undefined8 *)((longlong)renderer + 0x28c) = 0;
  *(undefined8 *)((longlong)renderer + 0x294) = 0;
  *(undefined8 *)((longlong)renderer + 0x29c) = 0;
  *(undefined8 *)((longlong)renderer + 0x2a4) = 0;
  *(undefined8 *)((longlong)renderer + 0x2ac) = 0;
  *(undefined8 *)((longlong)renderer + 0x2b4) = 0;
  *(undefined8 *)((longlong)renderer + 700) = 0;
  *(undefined8 *)((longlong)renderer + 0x2c4) = 0;
  *(undefined8 *)((longlong)renderer + 0x2cc) = 0;
  *(undefined8 *)((longlong)renderer + 0x2d4) = 0;
  *(undefined4 *)((longlong)renderer + 0x2dc) = 0;
  *(undefined4 *)(renderer + 0x5c) = 0;
  *(undefined4 *)((longlong)renderer + 0x2e4) = 0;
  *(undefined4 *)(renderer + 0x5d) = 0;
  *(undefined4 *)((longlong)renderer + 0x2ec) = 0;
  *(undefined4 *)(renderer + 0x5e) = 0;
  *(undefined4 *)((longlong)renderer + 0x2f4) = 0;
  *(undefined4 *)(renderer + 0x5f) = 0;
  renderer[0x61] = &RENDERER_LOCK_TABLE;
  LOCK();
  *(undefined4 *)(renderer + 0x62) = 0;
  UNLOCK();
  renderer[99] = 0xffffffffffffffff;
  renderer[0x77] = 0;
  renderer[0x79] = 0;
  initialize_render_internal_data(renderer);
  *(undefined4 *)(renderer + 1) = 0;
  return renderer;
}



/**
 * 释放渲染资源
 * @param render_object 渲染对象指针
 * @param free_flags 释放标志位
 * @return 渲染对象指针
 */
undefined8 release_render_resources(undefined8 render_object, ulonglong free_flags)

{
  destroy_render_object();
  if ((free_flags & 1) != 0) {
    free(render_object, 0x3d0);
  }
  return render_object;
}





/**
 * 清理渲染队列
 * @param render_queue 渲染队列指针
 */
void cleanup_render_queue(longlong *render_queue)

{
  longlong *current_entry;
  longlong *queue_end;
  
  current_entry = (longlong *)render_queue[1];
  for (queue_end = (longlong *)*render_queue; queue_end != current_entry; queue_end = queue_end + 2) {
    if ((longlong *)*queue_end != (longlong *)0x0) {
      (**(code **)(*(longlong *)*queue_end + 0x38))();
    }
  }
  if (*render_queue == 0) {
    return;
  }
  // WARNING: Subroutine does not return
  trigger_render_error();
}





/**
 * 重置渲染状态
 * @param render_context 渲染上下文指针
 */
void reset_render_state(longlong render_context)

{
  *(undefined8 *)(render_context + 0x168) = &RENDER_MATERIAL_TABLE;
  if (*(longlong *)(render_context + 0x170) != 0) {
    // WARNING: Subroutine does not return
    trigger_render_error();
  }
  *(undefined8 *)(render_context + 0x170) = 0;
  *(undefined4 *)(render_context + 0x180) = 0;
  *(undefined8 *)(render_context + 0x168) = &RENDER_STATE_NULL;
  *(undefined8 *)(render_context + 0x148) = &RENDER_MATERIAL_TABLE;
  if (*(longlong *)(render_context + 0x150) != 0) {
    // WARNING: Subroutine does not return
    trigger_render_error();
  }
  *(undefined8 *)(render_context + 0x150) = 0;
  *(undefined4 *)(render_context + 0x160) = 0;
  *(undefined8 *)(render_context + 0x148) = &RENDER_STATE_NULL;
  *(undefined **)(render_context + 0xb0) = &RENDER_STATE_NULL;
  *(undefined **)(render_context + 0x18) = &RENDER_STATE_NULL;
  return;
}



/**
 * 创建带参数的渲染对象
 * @param render_object 渲染对象指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 渲染对象指针
 */
undefined8 * create_render_object_with_params(undefined8 *render_object, undefined8 param1, undefined8 param2, undefined8 param3)

{
  *render_object = &RENDERER_VTABLE1;
  *render_object = &RENDERER_VTABLE2;
  *(undefined4 *)(render_object + 1) = 0;
  *render_object = &RENDERER_SHADER_TABLE;
  *(undefined4 *)(render_object + 2) = 4;
  render_object[3] = 0;
  render_object[4] = 0;
  *(undefined4 *)(render_object + 1) = 0;
  render_object[5] = 0;
  *render_object = &RENDERER_CONFIG_TABLE;
  render_object[7] = 0;
  render_object[8] = 0;
  render_object[9] = 0;
  *(undefined4 *)(render_object + 10) = 0x16;
  initialize_render_data_structures(render_object + 0xd, param1, param2, param3, 0xfffffffffffffffe);
  render_object[0x3e] = &RENDER_STATE_NULL;
  render_object[0x3f] = 0;
  *(undefined4 *)(render_object + 0x40) = 0;
  render_object[0x3e] = &RENDER_MATERIAL_TABLE;
  render_object[0x41] = 0;
  render_object[0x3f] = 0;
  *(undefined4 *)(render_object + 0x40) = 0;
  *(undefined4 *)((longlong)render_object + 0x244) = 0;
  *(undefined8 *)((longlong)render_object + 0x214) = 0;
  *(undefined8 *)((longlong)render_object + 0x21c) = 0;
  *(undefined8 *)((longlong)render_object + 0x224) = 0;
  *(undefined8 *)((longlong)render_object + 0x22c) = 0;
  *(undefined8 *)((longlong)render_object + 0x234) = 0;
  *(undefined8 *)((longlong)render_object + 0x23c) = 0;
  *(undefined8 *)((longlong)render_object + 0x24c) = 0;
  *(undefined8 *)((longlong)render_object + 0x254) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)render_object + 0x25c) = 0;
  *(undefined8 *)((longlong)render_object + 0x264) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)render_object + 0x26c) = 0;
  *(undefined8 *)((longlong)render_object + 0x274) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)render_object + 0x2fc) = 0;
  *(undefined8 *)((longlong)render_object + 0x27c) = 0;
  *(undefined8 *)((longlong)render_object + 0x284) = 0;
  *(undefined8 *)((longlong)render_object + 0x28c) = 0;
  *(undefined8 *)((longlong)render_object + 0x294) = 0;
  *(undefined8 *)((longlong)render_object + 0x29c) = 0;
  *(undefined8 *)((longlong)render_object + 0x2a4) = 0;
  *(undefined8 *)((longlong)render_object + 0x2ac) = 0;
  *(undefined8 *)((longlong)render_object + 0x2b4) = 0;
  *(undefined8 *)((longlong)render_object + 700) = 0;
  *(undefined8 *)((longlong)render_object + 0x2c4) = 0;
  *(undefined8 *)((longlong)render_object + 0x2cc) = 0;
  *(undefined8 *)((longlong)render_object + 0x2d4) = 0;
  *(undefined4 *)((longlong)render_object + 0x2dc) = 0;
  *(undefined4 *)(render_object + 0x5c) = 0;
  *(undefined4 *)((longlong)render_object + 0x2e4) = 0;
  *(undefined4 *)(render_object + 0x5d) = 0;
  *(undefined4 *)((longlong)render_object + 0x2ec) = 0;
  *(undefined4 *)(render_object + 0x5e) = 0;
  *(undefined4 *)((longlong)render_object + 0x2f4) = 0;
  *(undefined4 *)(render_object + 0x5f) = 0;
  render_object[0x61] = &RENDERER_LOCK_TABLE;
  LOCK();
  *(undefined4 *)(render_object + 0x62) = 0;
  UNLOCK();
  render_object[99] = 0xffffffffffffffff;
  render_object[0x77] = 0;
  render_object[0x79] = 0;
  initialize_render_internal_data(render_object);
  *(undefined4 *)(render_object + 1) = 0;
  apply_render_settings(render_object, param1);
  return render_object;
}



/**
 * 创建特殊渲染对象
 * @param render_object 渲染对象指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @return 渲染对象指针
 */
undefined8 * create_special_render_object(undefined8 *render_object, undefined8 param1, undefined8 param2, undefined8 param3)

{
  longlong special_result;
  
  *render_object = &RENDERER_VTABLE1;
  *render_object = &RENDERER_VTABLE2;
  *(undefined4 *)(render_object + 1) = 0;
  *render_object = &RENDERER_SHADER_TABLE;
  *(undefined4 *)(render_object + 2) = 4;
  render_object[3] = 0;
  render_object[4] = 0;
  *(undefined4 *)(render_object + 1) = 0;
  render_object[5] = 0;
  *render_object = &RENDERER_CONFIG_TABLE;
  render_object[7] = 0;
  render_object[8] = 0;
  render_object[9] = 0;
  *(undefined4 *)(render_object + 10) = 0x16;
  initialize_render_data_structures(render_object + 0xd, param1, (char)param2, param3, 0xfffffffffffffffe);
  render_object[0x3e] = &RENDER_STATE_NULL;
  render_object[0x3f] = 0;
  *(undefined4 *)(render_object + 0x40) = 0;
  render_object[0x3e] = &RENDER_MATERIAL_TABLE;
  render_object[0x41] = 0;
  render_object[0x3f] = 0;
  *(undefined4 *)(render_object + 0x40) = 0;
  *(undefined4 *)((longlong)render_object + 0x244) = 0;
  *(undefined8 *)((longlong)render_object + 0x214) = 0;
  *(undefined8 *)((longlong)render_object + 0x21c) = 0;
  *(undefined8 *)((longlong)render_object + 0x224) = 0;
  *(undefined8 *)((longlong)render_object + 0x22c) = 0;
  *(undefined8 *)((longlong)render_object + 0x234) = 0;
  *(undefined8 *)((longlong)render_object + 0x23c) = 0;
  *(undefined8 *)((longlong)render_object + 0x24c) = 0;
  *(undefined8 *)((longlong)render_object + 0x254) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)render_object + 0x25c) = 0;
  *(undefined8 *)((longlong)render_object + 0x264) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)render_object + 0x26c) = 0;
  *(undefined8 *)((longlong)render_object + 0x274) = 0x7f7fffff00000000;
  *(undefined8 *)((longlong)render_object + 0x2fc) = 0;
  *(undefined8 *)((longlong)render_object + 0x27c) = 0;
  *(undefined8 *)((longlong)render_object + 0x284) = 0;
  *(undefined8 *)((longlong)render_object + 0x28c) = 0;
  *(undefined8 *)((longlong)render_object + 0x294) = 0;
  *(undefined8 *)((longlong)render_object + 0x29c) = 0;
  *(undefined8 *)((longlong)render_object + 0x2a4) = 0;
  *(undefined8 *)((longlong)render_object + 0x2ac) = 0;
  *(undefined8 *)((longlong)render_object + 0x2b4) = 0;
  *(undefined8 *)((longlong)render_object + 700) = 0;
  *(undefined8 *)((longlong)render_object + 0x2c4) = 0;
  *(undefined8 *)((longlong)render_object + 0x2cc) = 0;
  *(undefined8 *)((longlong)render_object + 0x2d4) = 0;
  *(undefined4 *)((longlong)render_object + 0x2dc) = 0;
  *(undefined4 *)(render_object + 0x5c) = 0;
  *(undefined4 *)((longlong)render_object + 0x2e4) = 0;
  *(undefined4 *)(render_object + 0x5d) = 0;
  *(undefined4 *)((longlong)render_object + 0x2ec) = 0;
  *(undefined4 *)(render_object + 0x5e) = 0;
  *(undefined4 *)((longlong)render_object + 0x2f4) = 0;
  *(undefined4 *)(render_object + 0x5f) = 0;
  render_object[0x61] = &RENDERER_LOCK_TABLE;
  LOCK();
  *(undefined4 *)(render_object + 0x62) = 0;
  UNLOCK();
  render_object[99] = 0xffffffffffffffff;
  render_object[0x77] = 0;
  render_object[0x79] = 0;
  initialize_render_internal_data(render_object);
  *(undefined4 *)(render_object + 1) = 0;
  special_result = get_special_render_data(RENDER_SPECIAL_TABLE, param1, 1);
  if (special_result != 0) {
    apply_special_render_settings(special_result, render_object, 1);
  }
  apply_render_settings(render_object, param2);
  return render_object;
}





/**
 * 销毁渲染对象
 * @param render_object 渲染对象指针
 */
void destroy_render_object(undefined8 *render_object)

{
  *render_object = &RENDERER_CONFIG_TABLE;
  cleanup_render_cache();
  if ((longlong *)render_object[0x79] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_object[0x79] + 0x38))();
  }
  if ((longlong *)render_object[0x77] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_object[0x77] + 0x38))();
  }
  render_object[0x61] = &RENDERER_LOCK_TABLE;
  render_object[0x3e] = &RENDER_MATERIAL_TABLE;
  if (render_object[0x3f] != 0) {
    // WARNING: Subroutine does not return
    trigger_render_error();
  }
  render_object[0x3f] = 0;
  *(undefined4 *)(render_object + 0x41) = 0;
  render_object[0x3e] = &RENDER_STATE_NULL;
  reset_render_state(render_object + 0xd);
  cleanup_render_buffers();
  *render_object = &RENDERER_SHADER_TABLE;
  render_object[5] = 0;
  *render_object = &RENDERER_VTABLE2;
  *render_object = &RENDERER_VTABLE1;
  return;
}



/**
 * 获取渲染数据
 * @param render_object 渲染对象指针
 * @return 渲染数据指针
 */
undefined8 get_render_data(longlong *render_object)

{
  char is_ready;
  
  if (*(code **)(*render_object + 0xc0) == (code *)&RENDER_CHECK_FUNCTION) {
    is_ready = (render_object[8] - render_object[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    is_ready = (**(code **)(*render_object + 0xc0))();
  }
  if (is_ready == '\0') {
    return *(undefined8 *)render_object[7];
  }
  return 0;
}



/**
 * 检查渲染状态
 * @param render_object 渲染对象指针
 * @return 渲染状态指针
 */
undefined8 check_render_status(undefined8 *render_object)

{
  char is_complete;
  
  if ((undefined *)*render_object == &RENDERER_CONFIG_TABLE) {
    is_complete = (render_object[8] - render_object[7] & 0xfffffffffffffff0) == 0;
  }
  else {
    is_complete = (**(code **)((undefined *)*render_object + 0xc0))(render_object);
  }
  if (is_complete == '\0') {
    return *(undefined8 *)render_object[7];
  }
  return 0;
}





/**
 * 设置渲染标志
 * @param render_context 渲染上下文
 * @param flag_value 标志值
 */
void set_render_flag(longlong render_context, char flag_value)

{
  ulonglong entry_index;
  uint entry_count;
  ulonglong max_entries;
  longlong entry_ptr;
  
  entry_ptr = *(longlong *)(render_context + 0x38);
  entry_index = 0;
  max_entries = entry_index;
  if (*(longlong *)(render_context + 0x40) - entry_ptr >> 4 != 0) {
    do {
      entry_ptr = *(longlong *)(entry_index + entry_ptr);
      if (flag_value == '\0') {
        if (*(char *)(entry_ptr + 0xfa) != '\0') {
          *(undefined1 *)(entry_ptr + 0xfa) = 0;
FLAG_SET_TRIGGER:
          trigger_render_update();
        }
      }
      else if (*(char *)(entry_ptr + 0xfa) != '\x01') {
        *(undefined1 *)(entry_ptr + 0xfa) = 1;
        goto FLAG_SET_TRIGGER;
      }
      entry_ptr = *(longlong *)(render_context + 0x38);
      entry_count = (int)max_entries + 1;
      entry_index = entry_index + 0x10;
      max_entries = (ulonglong)entry_count;
    } while ((ulonglong)(longlong)(int)entry_count <
             (ulonglong)(*(longlong *)(render_context + 0x40) - entry_ptr >> 4));
  }
  return;
}





/**
 * 批量设置渲染标志
 * @param param1 参数1
 * @param param2 参数2
 * @param render_context 渲染上下文
 */
void batch_set_render_flags(undefined8 param1, undefined8 param2, longlong render_context)

{
  longlong entry_ptr;
  ulonglong entry_index;
  char flag_value;
  longlong context_ptr;
  uint entry_counter;
  
  entry_index = (ulonglong)entry_counter;
  do {
    entry_ptr = *(longlong *)(entry_index + render_context);
    if (flag_value == '\0') {
      if (*(char *)(entry_ptr + 0xfa) != '\0') {
        *(undefined1 *)(entry_ptr + 0xfa) = 0;
BATCH_FLAG_TRIGGER:
        trigger_render_update();
      }
    }
    else if (*(char *)(entry_ptr + 0xfa) != '\x01') {
      *(undefined1 *)(entry_ptr + 0xfa) = 1;
      goto BATCH_FLAG_TRIGGER;
    }
    render_context = *(longlong *)(context_ptr + 0x38);
    entry_counter = entry_counter + 1;
    entry_index = entry_index + 0x10;
    if ((ulonglong)(*(longlong *)(context_ptr + 0x40) - render_context >> 4) <=
        (ulonglong)(longlong)(int)entry_counter) {
      return;
    }
  } while( true );
}





/**
 * 空函数 - 占位符
 */
void empty_function(void)

{
  return;
}





/**
 * 清理渲染缓存
 * @param render_context 渲染上下文
 */
void cleanup_render_cache(longlong render_context)

{
  int entry_count;
  longlong entry_ptr;
  longlong counter;
  
  entry_ptr = 0;
  entry_count = (int)(*(longlong *)(render_context + 0x40) - *(longlong *)(render_context + 0x38) >> 4);
  counter = (longlong)entry_count;
  if (0 < entry_count) {
    do {
      *(undefined8 *)(*(longlong *)(entry_ptr + *(longlong *)(render_context + 0x38)) + 0x1c8) = 0;
      counter = counter + -1;
      entry_ptr = entry_ptr + 0x10;
    } while (counter != 0);
  }
  cleanup_render_internal_data();
  entry_ptr = *(longlong *)(render_context + 0x28);
  *(undefined4 *)(render_context + 0x58) = 0;
  if ((entry_ptr != 0) &&
     (*(short *)(entry_ptr + 0x2b0) = *(short *)(entry_ptr + 0x2b0) + 1, *(longlong *)(entry_ptr + 0x168) != 0))
  {
    trigger_render_cleanup();
  }
  return;
}



/**
 * 创建渲染实例
 * @param param1 参数1
 * @param render_instance_ptr 渲染实例指针
 * @return 渲染实例指针
 */
undefined8 * create_render_instance(undefined8 param1, undefined8 *render_instance_ptr)

{
  undefined8 instance_handle;
  longlong *instance_data;
  
  instance_handle = allocate_render_memory(RENDER_ALLOC_TABLE, 0x3d0, 8, 0x16, 0, 0xfffffffffffffffe);
  instance_data = (longlong *)initialize_renderer(instance_handle);
  *render_instance_ptr = instance_data;
  if (instance_data != (longlong *)0x0) {
    (**(code **)(*instance_data + 0x28))(instance_data);
  }
  apply_special_render_settings(param1, *render_instance_ptr, 1);
  return render_instance_ptr;
}





