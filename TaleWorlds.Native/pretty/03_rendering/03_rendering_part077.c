#include "TaleWorlds.Native.Split.h"

// 03_rendering_part077.c - 渲染系统高级数据处理和渲染控制模块
// 包含9个核心函数，涵盖渲染对象处理、数据复制、内存管理、资源清理、
// 状态检查、对象创建、对象销毁、渲染参数设置和高级渲染控制等功能

// 函数别名定义
#define rendering_system_process_render_objects_batch FUN_18030cab0
#define rendering_system_copy_render_object_data FUN_18030ccf0
#define rendering_system_check_render_object_state FUN_18030cd70
#define rendering_system_reset_render_object_data FUN_18030cdf0
#define rendering_system_create_render_object_helper FUN_18030ce70
#define rendering_system_initialize_render_object_controller FUN_18030cef0
#define rendering_system_destroy_render_object_controller FUN_18030d110
#define rendering_system_cleanup_render_object_controller FUN_18030d150
#define rendering_system_create_render_object_manager FUN_18030d400
#define rendering_system_process_render_objects_batch_helper FUN_18030d4d0
#define rendering_system_process_render_objects_single_helper FUN_18030d51b
#define rendering_system_empty_function_1 FUN_18030d67f
#define rendering_system_release_render_object_manager FUN_18030d690
#define rendering_system_add_render_object_to_queue FUN_18030d6e0
#define rendering_system_render_objects_with_parameters FUN_18030d960

// 全局变量定义
#define RENDER_OBJECT_POOL_SIZE 0x128
#define RENDER_OBJECT_FLAG_MASK 0xfffffffffffffffe
#define RENDER_OBJECT_COLOR_COMPONENTS 0x003921569
#define RENDER_OBJECT_DATA_SIZE 0xd0
#define RENDER_OBJECT_VERTEX_COUNT 3

// 函数: 渲染系统批量处理渲染对象
// 参数: render_context - 渲染上下文指针, param_2 - 渲染参数
void rendering_system_process_render_objects_batch(longlong *render_context, undefined8 render_params)

{
  undefined8 *object_ptr;
  undefined4 *data_ptr;
  undefined4 temp_var1;
  undefined4 temp_var2;
  undefined4 temp_var3;
  undefined8 temp_var4;
  longlong context_start;
  longlong context_end;
  undefined8 *temp_ptr;
  longlong allocated_memory;
  longlong loop_counter;
  longlong object_count;
  longlong batch_size;
  undefined8 memory_flag;
  
  memory_flag = RENDER_OBJECT_FLAG_MASK;
  context_start = render_context[1];
  context_end = *render_context;
  batch_size = (context_start - context_end) / RENDER_OBJECT_POOL_SIZE;
  if (batch_size == 0) {
    batch_size = 1;
  }
  else {
    batch_size = batch_size * 2;
    if (batch_size == 0) {
      allocated_memory = 0;
      goto memory_allocation_complete;
    }
  }
  allocated_memory = FUN_18062b420(_DAT_180c8ed18, batch_size * RENDER_OBJECT_POOL_SIZE, (char)render_context[3]);
  context_start = render_context[1];
  context_end = *render_context;
memory_allocation_complete:
  loop_counter = allocated_memory;
  if (context_end != context_start) {
    context_end = context_end - allocated_memory;
    object_ptr = (undefined8 *)(allocated_memory + 0x110);
    do {
      FUN_1808fcf5c(loop_counter, (longlong)object_ptr + context_end + -0x110, 0x58, 2, FUN_18030ccf0, FUN_1800f88f0,
                    memory_flag, loop_counter);
      *(undefined4 *)(object_ptr + -0xc) = *(undefined4 *)(context_end + -0x60 + (longlong)object_ptr);
      temp_ptr = (undefined8 *)(context_end + -0x5c + (longlong)object_ptr);
      temp_var4 = temp_ptr[1];
      *(undefined8 *)((longlong)object_ptr + -0x5c) = *temp_ptr;
      *(undefined8 *)((longlong)object_ptr + -0x54) = temp_var4;
      temp_ptr = (undefined8 *)(context_end + -0x4c + (longlong)object_ptr);
      temp_var4 = temp_ptr[1];
      *(undefined8 *)((longlong)object_ptr + -0x4c) = *temp_ptr;
      *(undefined8 *)((longlong)object_ptr + -0x44) = temp_var4;
      temp_ptr = (undefined8 *)(context_end + -0x3c + (longlong)object_ptr);
      temp_var4 = temp_ptr[1];
      *(undefined8 *)((longlong)object_ptr + -0x3c) = *temp_ptr;
      *(undefined8 *)((longlong)object_ptr + -0x34) = temp_var4;
      data_ptr = (undefined4 *)(context_end + -0x2c + (longlong)object_ptr);
      temp_var1 = data_ptr[1];
      temp_var2 = data_ptr[2];
      temp_var3 = data_ptr[3];
      *(undefined4 *)((longlong)object_ptr + -0x2c) = *data_ptr;
      *(undefined4 *)(object_ptr + -5) = temp_var1;
      *(undefined4 *)((longlong)object_ptr + -0x24) = temp_var2;
      *(undefined4 *)(object_ptr + -4) = temp_var3;
      temp_ptr = (undefined8 *)(context_end + -0x1c + (longlong)object_ptr);
      temp_var4 = temp_ptr[1];
      *(undefined8 *)((longlong)object_ptr + -0x1c) = *temp_ptr;
      *(undefined8 *)((longlong)object_ptr + -0x14) = temp_var4;
      object_ptr[-1] = &UNK_18098bcb0;
      *object_ptr = 0;
      *(undefined4 *)(object_ptr + 1) = 0;
      object_ptr[-1] = &UNK_180a3c3e0;
      object_ptr[2] = 0;
      *object_ptr = 0;
      *(undefined4 *)(object_ptr + 1) = 0;
      *(undefined4 *)(object_ptr + 1) = *(undefined4 *)(context_end + 8 + (longlong)object_ptr);
      *object_ptr = *(undefined8 *)(context_end + (longlong)object_ptr);
      *(undefined4 *)((longlong)object_ptr + 0x14) = *(undefined4 *)(context_end + 0x14 + (longlong)object_ptr);
      *(undefined4 *)(object_ptr + 2) = *(undefined4 *)(context_end + 0x10 + (longlong)object_ptr);
      *(undefined4 *)(context_end + 8 + (longlong)object_ptr) = 0;
      *(undefined8 *)(context_end + (longlong)object_ptr) = 0;
      *(undefined8 *)(context_end + 0x10 + (longlong)object_ptr) = 0;
      loop_counter = loop_counter + RENDER_OBJECT_POOL_SIZE;
      object_count = (longlong)object_ptr + context_end + 0x18;
      object_ptr = object_ptr + 0x25;
    } while (object_count != context_start);
  }
  FUN_1800f8570(loop_counter, render_params);
  context_start = render_context[1];
  context_end = *render_context;
  if (context_end != context_start) {
    do {
      FUN_1800f8930(context_end);
      context_end = context_end + RENDER_OBJECT_POOL_SIZE;
    } while (context_end != context_start);
    context_end = *render_context;
  }
  if (context_end == 0) {
    *render_context = allocated_memory;
    render_context[1] = loop_counter + RENDER_OBJECT_POOL_SIZE;
    render_context[2] = batch_size * RENDER_OBJECT_POOL_SIZE + allocated_memory;
    return;
  }
  FUN_18064e900(context_end);
}



// 函数: 复制渲染对象数据
// 参数: dest_ptr - 目标指针, src_ptr - 源指针
// 返回值: 目标指针
undefined8 *rendering_system_copy_render_object_data(undefined8 *dest_ptr, undefined8 *src_ptr)

{
  *dest_ptr = *src_ptr;
  dest_ptr[1] = src_ptr[1];
  *(undefined4 *)(dest_ptr + 2) = *(undefined4 *)(src_ptr + 2);
  FUN_1808fcf5c(dest_ptr + 3, src_ptr + 3, 0x20, 2, FUN_180627a70, FUN_180627b90);
  return dest_ptr;
}



// 函数: 检查渲染对象状态
// 参数: object_handle - 对象句柄
// 返回值: 对象状态数据或0
undefined8 rendering_system_check_render_object_state(longlong object_handle)

{
  longlong *object_ptr;
  char is_empty;
  
  object_ptr = *(longlong **)(object_handle + 0x48);
  if (*(code **)(*object_ptr + 0xc0) == (code *)&UNK_180277e10) {
    is_empty = ((object_ptr[8] - object_ptr[7] & 0xfffffffffffffff0U) == 0);
  }
  else {
    is_empty = ((**(code **)(*object_ptr + 0xc0))(object_ptr));
  }
  if (is_empty == '\0') {
    return *(undefined8 *)object_ptr[7];
  }
  return 0;
}



// 函数: 重置渲染对象数据
// 参数: object_ptr - 对象指针
// 返回值: 对象指针
undefined8 *rendering_system_reset_render_object_data(undefined8 *object_ptr)

{
  FUN_1808fc838(object_ptr + 3, 0x20, 2, FUN_180627850, FUN_180627b90);
  *object_ptr = 0xffffffffffffffff;
  object_ptr[1] = 0;
  *(undefined4 *)(object_ptr + 2) = 0;
  return object_ptr;
}



// 函数: 创建渲染对象辅助函数
// 参数: param_1 - 参数1, dest_ptr - 目标指针, param_3 - 参数3, param_4 - 参数4
// 返回值: 目标指针
undefined8 *rendering_system_create_render_object_helper(undefined8 param_1, undefined8 *dest_ptr, undefined8 param_3, undefined8 param_4)

{
  *dest_ptr = &UNK_18098bcb0;
  dest_ptr[1] = 0;
  *(undefined4 *)(dest_ptr + 2) = 0;
  *dest_ptr = &UNK_1809fcc28;
  dest_ptr[1] = dest_ptr + 3;
  *(undefined1 *)(dest_ptr + 3) = 0;
  *(undefined4 *)(dest_ptr + 2) = 0x15;
  strcpy_s(dest_ptr[1], 0x80, &UNK_180a1a6c8, param_4, 0, RENDER_OBJECT_FLAG_MASK);
  return dest_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 初始化渲染对象控制器
// 参数: controller_ptr - 控制器指针
// 返回值: 控制器指针
undefined8 *rendering_system_initialize_render_object_controller(undefined8 *controller_ptr)

{
  longlong *temp_ptr;
  longlong temp_var;
  undefined8 *object_ptr;
  longlong loop_var;
  undefined8 *temp_ptr2;
  undefined8 *temp_ptr3;
  
  FUN_180244190();
  *controller_ptr = &UNK_180a1a710;
  controller_ptr[0x1e] = &UNK_18098bcb0;
  temp_ptr3 = (undefined8 *)0x0;
  controller_ptr[0x1f] = 0;
  *(undefined4 *)(controller_ptr + 0x20) = 0;
  controller_ptr[0x1e] = &UNK_180a3c3e0;
  controller_ptr[0x21] = 0;
  controller_ptr[0x1f] = 0;
  *(undefined4 *)(controller_ptr + 0x20) = 0;
  FUN_1808fc838(controller_ptr + 0x26, 0x20, 2, FUN_180056e10, FUN_18004c030);
  FUN_1808fc838(controller_ptr + 0x2e, 0x20, 2, FUN_180056e10, FUN_18004c030);
  controller_ptr[0x36] = 0;
  object_ptr = controller_ptr + 0x37;
  controller_ptr[0x3a] = 0;
  *(undefined4 *)(controller_ptr + 0x3c) = 3;
  *object_ptr = object_ptr;
  controller_ptr[0x38] = object_ptr;
  controller_ptr[0x39] = 0;
  *(undefined1 *)(controller_ptr + 0x3a) = 0;
  controller_ptr[0x3b] = 0;
  object_ptr = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18, 0x20, 8, 3);
  *object_ptr = 0;
  object_ptr[1] = 0;
  object_ptr[2] = 0;
  *(undefined4 *)(object_ptr + 3) = 3;
  controller_ptr[0x22] = object_ptr;
  controller_ptr[0x23] = 0;
  *(undefined8 *)((longlong)controller_ptr + 0x124) = 0;
  *(undefined1 *)(controller_ptr + 0x24) = 0;
  temp_ptr = (longlong *)controller_ptr[0x36];
  controller_ptr[0x36] = 0;
  if (temp_ptr != (longlong *)0x0) {
    ((**(code **)(*temp_ptr + 0x38))();
  }
  *(undefined4 *)((longlong)controller_ptr + 0xcc) = 0;
  temp_var = _DAT_180c86880;
  if (_DAT_180c86880 == 0) {
    return controller_ptr;
  }
  object_ptr = *(undefined8 **)(_DAT_180c86880 + 0x20);
  if (object_ptr < *(undefined8 **)(_DAT_180c86880 + 0x28)) {
    *(undefined8 **)(_DAT_180c86880 + 0x20) = object_ptr + 1;
    *object_ptr = controller_ptr;
    return controller_ptr;
  }
  temp_ptr3 = *(undefined8 **)(_DAT_180c86880 + 0x18);
  loop_var = (longlong)object_ptr - (longlong)temp_ptr3 >> 3;
  if (loop_var == 0) {
    loop_var = 1;
  }
  else {
    loop_var = loop_var * 2;
    if (loop_var == 0) goto memory_allocation_complete;
  }
  temp_ptr2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18, loop_var * 8, *(undefined1 *)(_DAT_180c86880 + 0x30));
  object_ptr = *(undefined8 **)(temp_var + 0x20);
  temp_ptr3 = *(undefined8 **)(temp_var + 0x18);
memory_allocation_complete:
  if (temp_ptr3 != object_ptr) {
    memmove(temp_ptr2, temp_ptr3, (longlong)object_ptr - (longlong)temp_ptr3);
  }
  *temp_ptr2 = controller_ptr;
  if (*(longlong *)(temp_var + 0x18) == 0) {
    *(undefined8 **)(temp_var + 0x18) = temp_ptr2;
    *(undefined8 **)(temp_var + 0x20) = temp_ptr2 + 1;
    *(undefined8 **)(temp_var + 0x28) = temp_ptr2 + loop_var;
    return controller_ptr;
  }
  FUN_18064e900();
}



// 函数: 销毁渲染对象控制器
// 参数: controller_ptr - 控制器指针, flags - 标志位
// 返回值: 控制器指针
undefined8 rendering_system_destroy_render_object_controller(undefined8 controller_ptr, ulonglong flags)

{
  FUN_18030d150();
  if ((flags & 1) != 0) {
    free(controller_ptr, 0x1e8);
  }
  return controller_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 清理渲染对象控制器
// 参数: controller_ptr - 控制器指针
void rendering_system_cleanup_render_object_controller(undefined8 *controller_ptr)

{
  undefined8 *object_ptr;
  undefined8 *temp_ptr;
  uint loop_counter;
  ulonglong index;
  undefined8 *array_ptr;
  longlong data_ptr;
  longlong *temp_ptr2;
  ulonglong array_size;
  ulonglong loop_var;
  
  *controller_ptr = &UNK_180a1a710;
  index = 0;
  if (_DAT_180c86880 != 0) {
    object_ptr = *(undefined8 **)(_DAT_180c86880 + 0x20);
    temp_ptr = *(undefined8 **)(_DAT_180c86880 + 0x18);
    loop_var = (longlong)object_ptr - (longlong)temp_ptr >> 3;
    array_size = index;
    array_ptr = temp_ptr;
    if (loop_var != 0) {
      do {
        if ((undefined8 *)*array_ptr == controller_ptr) {
          array_ptr = temp_ptr + (int)array_size + 1;
          if (array_ptr < object_ptr) {
            memmove(temp_ptr + (int)array_size, array_ptr, (longlong)object_ptr - (longlong)array_ptr,
                    (longlong)object_ptr - (longlong)array_ptr, RENDER_OBJECT_FLAG_MASK);
          }
          *(undefined8 **)(_DAT_180c86880 + 0x20) = object_ptr + -1;
          break;
        }
        loop_counter = (int)array_size + 1;
        array_size = (ulonglong)loop_counter;
        array_ptr = array_ptr + 1;
      } while ((ulonglong)(longlong)(int)loop_counter < loop_var);
    }
  }
  FUN_1800b8500(controller_ptr + 0x26);
  FUN_1800b8500(controller_ptr + 0x2a);
  object_ptr = controller_ptr + 0x37;
  for (temp_ptr = (undefined8 *)controller_ptr[0x38]; temp_ptr != object_ptr;
      temp_ptr = (undefined8 *)func_0x00018066bd70(temp_ptr)) {
    data_ptr = temp_ptr[6];
    if (data_ptr != 0) {
      FUN_180057830(data_ptr);
      FUN_18064e900(data_ptr);
    }
  }
  temp_ptr = (undefined8 *)controller_ptr[0x39];
  if (temp_ptr != (undefined8 *)0x0) {
    FUN_18004b790(object_ptr, *temp_ptr);
    FUN_18064e900(temp_ptr);
  }
  *object_ptr = object_ptr;
  controller_ptr[0x38] = object_ptr;
  controller_ptr[0x39] = 0;
  *(undefined1 *)(controller_ptr + 0x3a) = 0;
  controller_ptr[0x3b] = 0;
  temp_ptr2 = (longlong *)controller_ptr[0x22];
  data_ptr = *temp_ptr2;
  array_size = index;
  if (temp_ptr2[1] - data_ptr >> 3 != 0) {
    do {
      data_ptr = *(longlong *)(data_ptr + array_size);
      if (data_ptr != 0) {
        *(longlong *)(data_ptr + 0x10) = *(longlong *)(data_ptr + 8);
        if (*(longlong *)(data_ptr + 8) != 0) {
          FUN_18064e900();
        }
        FUN_18064e900(data_ptr);
      }
      loop_counter = (int)index + 1;
      index = (ulonglong)loop_counter;
      temp_ptr2 = (longlong *)controller_ptr[0x22];
      data_ptr = *temp_ptr2;
      array_size = array_size + 8;
    } while ((ulonglong)(longlong)(int)loop_counter < (ulonglong)(temp_ptr2[1] - data_ptr >> 3));
  }
  if (temp_ptr2 != (longlong *)0x0) {
    if (*temp_ptr2 != 0) {
      FUN_18064e900();
    }
    FUN_18064e900(temp_ptr2);
  }
  controller_ptr[0x22] = 0;
  FUN_18004b730(object_ptr);
  if ((longlong *)controller_ptr[0x36] != (longlong *)0x0) {
    ((**(code **)(*(longlong *)controller_ptr[0x36] + 0x38))();
  }
  FUN_1808fc8a8(controller_ptr + 0x2e, 0x20, 2, FUN_18004c030);
  FUN_1808fc8a8(controller_ptr + 0x26, 0x20, 2, FUN_18004c030);
  controller_ptr[0x1e] = &UNK_180a3c3e0;
  if (controller_ptr[0x1f] != 0) {
    FUN_18064e900();
  }
  controller_ptr[0x1f] = 0;
  *(undefined4 *)(controller_ptr + 0x21) = 0;
  controller_ptr[0x1e] = &UNK_18098bcb0;
  *controller_ptr = &UNK_180a144f8;
  controller_ptr[0x15] = &UNK_180a3c3e0;
  if (controller_ptr[0x16] != 0) {
    FUN_18064e900();
  }
  controller_ptr[0x16] = 0;
  *(undefined4 *)(controller_ptr + 0x18) = 0;
  controller_ptr[0x15] = &UNK_18098bcb0;
  controller_ptr[0x11] = &UNK_180a3c3e0;
  if (controller_ptr[0x12] != 0) {
    FUN_18064e900();
  }
  controller_ptr[0x12] = 0;
  *(undefined4 *)(controller_ptr + 0x14) = 0;
  controller_ptr[0x11] = &UNK_18098bcb0;
  if ((longlong *)controller_ptr[7] != (longlong *)0x0) {
    ((**(code **)(*(longlong *)controller_ptr[7] + 0x38))();
  }
  if ((longlong *)controller_ptr[2] != (longlong *)0x0) {
    ((**(code **)(*(longlong *)controller_ptr[2] + 0x38))();
  }
  *controller_ptr = &UNK_180a21720;
  *controller_ptr = &UNK_180a21690;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_18030d400(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plStackX_8;
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,200,8,3,0xfffffffffffffffe);
  FUN_180049830(plVar2);
  *plVar2 = (longlong)&UNK_180a1a838;
  plVar2[0x18] = param_1;
  plStackX_8 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plStackX_8 = *(longlong **)(param_1 + 0x1b0);
  *(longlong **)(param_1 + 0x1b0) = plVar2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  uVar1 = _DAT_180c82868;
  plStackX_8 = *(longlong **)(param_1 + 0x1b0);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_18005e110(uVar1,&plStackX_8);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d4d0(longlong param_1)
void FUN_18030d4d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined2 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong uVar4;
  
  uVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(_DAT_180c86880 + 0x38);
  uVar8 = uVar7;
  if ((*(longlong **)(lVar6 + 0x110))[1] - **(longlong **)(lVar6 + 0x110) >> 3 != 0) {
    do {
      uVar4 = 0;
      lVar6 = *(longlong *)(uVar7 + **(longlong **)(lVar6 + 0x110));
      lVar2 = *(longlong *)(lVar6 + 8);
      uVar5 = uVar4;
      if (*(longlong *)(lVar6 + 0x10) - lVar2 >> 3 != 0) {
        do {
          uStack_68 = 0x3f800000;
          uStack_60 = 0;
          uStack_58 = 0x3f80000000000000;
          uStack_50 = 0;
          uStack_c8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_70 = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0x3f800000;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0x3f800000;
          uStack_d8 = 0;
          uStack_d0 = 0xffffffff;
          uStack_cc = 0xff00;
          uStack_c0 = 0xffffffffffffffff;
          uStack_b8 = 0xffffffff;
          uStack_b4 = 0xff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0;
          uStack_a4 = 0x400;
          uStack_88 = 0;
          uStack_84 = 0;
          FUN_180077750(*(undefined8 *)(*(longlong *)(lVar6 + 8) + uVar5),uVar1,&uStack_68,0,
                        &uStack_d8);
          lVar2 = *(longlong *)(lVar6 + 8);
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 8;
        } while ((ulonglong)(longlong)(int)uVar3 <
                 (ulonglong)(*(longlong *)(lVar6 + 0x10) - lVar2 >> 3));
      }
      *(longlong *)(lVar6 + 0x10) = lVar2;
      uVar3 = (int)uVar8 + 1;
      lVar6 = *(longlong *)(param_1 + 0xc0);
      uVar7 = uVar7 + 8;
      uVar8 = (ulonglong)uVar3;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)((*(longlong **)(lVar6 + 0x110))[1] - **(longlong **)(lVar6 + 0x110) >> 3));
  }
  return;
}





// 函数: void FUN_18030d51b(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)
void FUN_18030d51b(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  longlong in_R11;
  longlong unaff_R13;
  undefined8 unaff_R14;
  ulonglong uVar7;
  int unaff_R15D;
  
  *(undefined8 *)(in_R11 + 8) = unaff_RBX;
  *(undefined8 *)(in_R11 + 0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + 0x18) = unaff_RDI;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R14;
  uVar7 = param_4 & 0xffffffff;
  do {
    uVar5 = param_4 & 0xffffffff;
    lVar1 = *(longlong *)(uVar7 + **(longlong **)(param_3 + 0x110));
    lVar3 = *(longlong *)(lVar1 + 8);
    uVar6 = param_4;
    if (*(longlong *)(lVar1 + 0x10) - lVar3 >> 3 != 0) {
      do {
        lVar3 = *(longlong *)(lVar1 + 8);
        *(undefined8 *)(unaff_RBP + -9) = 0x3f800000;
        *(undefined8 *)(unaff_RBP + -1) = 0;
        *(undefined8 *)(unaff_RBP + 7) = 0x3f80000000000000;
        *(undefined8 *)(unaff_RBP + 0xf) = 0;
        uVar2 = *(undefined8 *)(lVar3 + param_4);
        *(ulonglong *)(unaff_RBP + -0x69) = uVar6;
        *(ulonglong *)(unaff_RBP + -0x41) = uVar6;
        *(int *)(unaff_RBP + -0x39) = (int)uVar6;
        *(ulonglong *)(unaff_RBP + -0x31) = uVar6;
        *(ulonglong *)(unaff_RBP + -0x11) = uVar6;
        *(undefined4 *)(unaff_RBP + 0x17) = 0;
        *(undefined4 *)(unaff_RBP + 0x1b) = 0;
        *(undefined4 *)(unaff_RBP + 0x1f) = 0x3f800000;
        *(undefined4 *)(unaff_RBP + 0x23) = 0;
        *(undefined4 *)(unaff_RBP + 0x27) = 0;
        *(undefined4 *)(unaff_RBP + 0x2b) = 0;
        *(undefined4 *)(unaff_RBP + 0x2f) = 0;
        *(undefined4 *)(unaff_RBP + 0x33) = 0x3f800000;
        *(undefined8 *)(unaff_RBP + -0x79) = 0;
        *(undefined4 *)(unaff_RBP + -0x71) = 0xffffffff;
        *(undefined2 *)(unaff_RBP + -0x6d) = 0xff00;
        *(undefined8 *)(unaff_RBP + -0x61) = 0xffffffffffffffff;
        *(undefined4 *)(unaff_RBP + -0x59) = 0xffffffff;
        *(undefined1 *)(unaff_RBP + -0x55) = 0xff;
        *(undefined4 *)(unaff_RBP + -0x51) = 0xffffffff;
        *(undefined8 *)(unaff_RBP + -0x4d) = 0;
        *(undefined2 *)(unaff_RBP + -0x45) = 0x400;
        *(undefined4 *)(unaff_RBP + -0x29) = 0;
        *(undefined1 *)(unaff_RBP + -0x25) = 0;
        FUN_180077750(uVar2,0,unaff_RBP + -9,0,unaff_RBP + -0x79);
        lVar3 = *(longlong *)(lVar1 + 8);
        param_4 = param_4 + 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = 0;
      } while ((ulonglong)(longlong)(int)uVar4 <
               (ulonglong)(*(longlong *)(lVar1 + 0x10) - lVar3 >> 3));
    }
    *(longlong *)(lVar1 + 0x10) = lVar3;
    unaff_R15D = unaff_R15D + 1;
    param_3 = *(longlong *)(unaff_R13 + 0xc0);
    uVar7 = uVar7 + 8;
    param_4 = uVar6;
  } while ((ulonglong)(longlong)unaff_R15D <
           (ulonglong)((*(longlong **)(param_3 + 0x110))[1] - **(longlong **)(param_3 + 0x110) >> 3)
          );
  return;
}





// 函数: void FUN_18030d67f(void)
void FUN_18030d67f(void)

{
  return;
}



undefined8 FUN_18030d690(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,200,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d6e0(longlong param_1,longlong *param_2,int param_3)
void FUN_18030d6e0(longlong param_1,longlong *param_2,int param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plStackX_8;
  longlong *plStackX_10;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  char cStack_d6;
  undefined4 uStack_d4;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  longlong alStack_c0 [3];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 uStack_78;
  longlong alStack_70 [3];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar6 = *(longlong **)(param_1 + 0x110);
  plVar4 = (longlong *)0x0;
  if (*plVar6 != plVar6[1]) goto LAB_18030d811;
  plStackX_8 = (longlong *)
               FUN_18062b1e0(_DAT_180c8ed18,0x28,8,CONCAT71((int7)((ulonglong)plVar6 >> 8),3));
  plStackX_10 = plStackX_8 + 1;
  *plStackX_10 = 0;
  plStackX_8[2] = 0;
  plStackX_8[3] = 0;
  *(undefined4 *)(plStackX_8 + 4) = 3;
  puVar1 = *(ulonglong **)(param_1 + 0x110);
  plVar6 = (longlong *)puVar1[1];
  if (plVar6 < (longlong *)puVar1[2]) {
    puVar1[1] = (ulonglong)(plVar6 + 1);
    *plVar6 = (longlong)plStackX_8;
    goto LAB_18030d811;
  }
  plVar5 = (longlong *)*puVar1;
  lVar3 = (longlong)plVar6 - (longlong)plVar5 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
LAB_18030d7a4:
    plVar4 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)puVar1[3]);
    plVar6 = (longlong *)puVar1[1];
    plVar5 = (longlong *)*puVar1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 != 0) goto LAB_18030d7a4;
  }
  if (plVar5 != plVar6) {
                    // WARNING: Subroutine does not return
    memmove(plVar4,plVar5,(longlong)plVar6 - (longlong)plVar5);
  }
  *plVar4 = (longlong)plStackX_8;
  if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *puVar1 = (ulonglong)plVar4;
  puVar1[1] = (ulonglong)(plVar4 + 1);
  puVar1[2] = (ulonglong)(plVar4 + lVar3);
LAB_18030d811:
  lVar3 = *(longlong *)**(undefined8 **)(param_1 + 0x110);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0xffffffff;
  uStack_88 = 1;
  uStack_86 = 0;
  uStack_84 = 0xffffffff;
  uStack_80 = 1;
  uStack_78 = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  uStack_58 = 3;
  uStack_50 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0xffffffff;
  uStack_d8 = 1;
  cStack_d6 = '\0';
  uStack_d4 = 0xffffffff;
  uStack_d0 = 1;
  uStack_c8 = 0;
  plStackX_8 = alStack_c0;
  alStack_c0[0] = 0;
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  uStack_a8 = 3;
  uStack_a0 = 0;
  FUN_18022d470(param_2[0x37],&uStack_98);
  if ((cStack_d6 != '\0') || (iVar2 = FUN_18022d470(param_2[0x37],&uStack_e8), iVar2 == 0)) {
    plStackX_8 = param_2;
    FUN_18005ea90(lVar3 + 8,&plStackX_8);
    if (*(int *)(param_1 + 0x11c) < param_3) {
      *(int *)(param_1 + 0x11c) = param_3;
    }
    *(int *)((longlong)param_2 + 0x104) = *(int *)(param_1 + 0x118) + param_3;
  }
  plStackX_8 = alStack_c0;
  if (alStack_c0[0] == 0) {
    plStackX_8 = alStack_70;
    if (alStack_70[0] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d960(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
void FUN_18030d960(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,longlong *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lStack_b8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  
  if (param_8[0x21] == 0.0) {
    FUN_18030eaf0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (param_8[0x21] == 2.8026e-45) {
    fVar1 = *param_8;
    param_3 = param_3 - param_2;
    pfVar3 = (float *)(param_2 + 0x24);
    lStack_b8 = 3;
    do {
      *param_8 = fVar1;
      lVar8 = 3;
      pfVar7 = pfVar3;
      do {
        lVar4 = FUN_18030f1e0(param_1);
        FUN_180076910(lVar4,param_7);
        fVar2 = param_8[8];
        uVar6 = (uint)fVar2 >> 0x10 & 0xff;
        *(float *)(lVar4 + 0x238) = (float)uVar6 * 0.003921569;
        *(float *)(lVar4 + 0x23c) = (float)((uint)fVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(lVar4 + 0x240) = (float)((uint)fVar2 & 0xff) * 0.003921569;
        *(float *)(lVar4 + 0x244) = (float)((uint)fVar2 >> 0x18) * 0.003921569;
        if (*(longlong *)(lVar4 + 0x2c8) == 0) {
          *(uint *)(lVar4 + 0x100) = *(uint *)(lVar4 + 0x100) | 8;
          uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xd0,4,9);
                    // WARNING: Subroutine does not return
          memset(uVar5,0,0xd0);
        }
        param_8[0x1b] = pfVar7[-7] - pfVar7[-9];
        param_8[0x1c] = *pfVar7 - pfVar7[-8];
        param_8[0x1d] = *(float *)(param_3 + -0x24 + (longlong)pfVar7);
        param_8[0x1f] = *(float *)(param_3 + -0x1c + (longlong)pfVar7);
        param_8[0x1e] = *(float *)(param_3 + -0x20 + (longlong)pfVar7);
        param_8[0x20] = *(float *)(param_3 + (longlong)pfVar7);
        FUN_18030ef70(uVar6,lVar4,param_8);
        *param_8 = param_8[0x1b] + *param_8;
        FUN_18030d6e0(param_1);
        pfVar7 = pfVar7 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      param_8[1] = param_8[1] + param_8[0x1c];
      pfVar3 = pfVar3 + 8;
      lStack_b8 = lStack_b8 + -1;
    } while (lStack_b8 != 0);
  }
  else {
    lVar8 = FUN_18030f1e0();
    FUN_180076910(lVar8,param_7);
    fVar1 = param_8[8];
    *(float *)(lVar8 + 0x238) = (float)((uint)fVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(lVar8 + 0x23c) = (float)((uint)fVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(lVar8 + 0x240) = (float)((uint)fVar1 & 0xff) * 0.003921569;
    *(float *)(lVar8 + 0x244) = (float)((uint)fVar1 >> 0x18) * 0.003921569;
    uVar9 = FUN_18007e930(lVar8);
    FUN_18030ef70(uVar9,lVar8,param_8);
    FUN_18030d6e0(param_1);
  }
  if (*param_7 != 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0xffffffff;
    uStack_88 = 1;
    uStack_86 = 0;
    uStack_84 = 0xffffffff;
    uStack_80 = 1;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 3;
    uStack_50 = 0;
    FUN_18022d470(*param_7,&uStack_98);
    if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



