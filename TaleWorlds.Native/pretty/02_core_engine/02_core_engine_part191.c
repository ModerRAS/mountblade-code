#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part191.c - 17 个函数

// 函数: 调整窗口位置和大小
// 功能: 根据显示模式调整窗口的位置、大小和样式
// 参数: window_context - 窗口上下文, width/height - 窗口尺寸, update_flag - 更新标志, current_mode_ptr - 当前模式指针, display_config_ptr - 显示配置指针
void adjust_window_position_and_size(longlong window_context, int width, int height, byte update_flag, int *current_mode_ptr,
                                    longlong *display_config_ptr)

{
  int display_mode;
  longlong config_start;
  int screen_width;
  int screen_height;
  uint window_width;
  uint window_height;
  longlong display_count;
  uint adjusted_width;
  longlong total_displays;
  int window_style;
  ulonglong display_index;
  int vertical_offset;
  int8_t stack_guard [32];
  int horizontal_pos;
  int vertical_pos;
  int window_flags;
  byte needs_update;
  int horizontal_offset;
  uint64_t rect_data;
  int adjusted_width_result;
  int adjusted_height_result;
  ulonglong stack_guard_value;
  
  // 安全栈检查
  stack_guard_value = GET_SECURITY_COOKIE() ^ (ulonglong)stack_guard;
  display_mode = *(int *)(SYSTEM_STATE_MANAGER + 0x1ea0);
  needs_update = update_flag;
  // 如果不是全屏模式(2)
  if (display_mode != 2) {
    // 获取屏幕尺寸
    screen_width = GetSystemMetrics(0);
    screen_height = GetSystemMetrics(1);
    config_start = *display_config_ptr;
    horizontal_offset = 0;
    display_index = 0;
    display_count = display_config_ptr[1] - config_start >> 0x3f;
    total_displays = (display_config_ptr[1] - config_start) / 0x70 + display_count;
    vertical_offset = 0;
    // 查找匹配的显示区域
    if (total_displays != display_count) {
      do {
        if ((int)display_index == *(int *)(SYSTEM_STATE_MANAGER + 0x1f10)) {
          display_count = display_index * 0x70;
          horizontal_offset = *(int *)(display_count + 0x58 + config_start);
          vertical_offset = *(int *)(display_count + 0x5c + config_start);
          window_width = *(int *)(display_count + 0x60 + config_start) - horizontal_offset;
          adjusted_width = (int)window_width >> 0x1f;
          window_height = *(int *)(display_count + 100 + config_start) - vertical_offset;
          screen_width = (window_width ^ adjusted_width) - adjusted_width;
          window_width = (int)window_height >> 0x1f;
          screen_height = (window_height ^ window_width) - window_width;
          break;
        }
        display_index = (ulonglong)((int)display_index + 1);
        vertical_offset = 0;
      } while (display_index < (ulonglong)(total_displays - display_count));
    }
    // 根据显示模式设置窗口样式
    window_style = 0;
    rect_data = 0;
    if (display_mode == 1) {
      // 边框窗口模式
      window_style = -0x70000000;  // WS_OVERLAPPEDWINDOW
      adjusted_width_result = screen_width;
      adjusted_height_result = screen_height;
    }
    else {
      adjusted_width_result = width;
      adjusted_height_result = height;
      if (display_mode == 0) {
        // 无边框窗口模式
        window_style = 0xca0000;  // WS_POPUP
        if (width <= screen_width) {
          horizontal_offset = (screen_width - width) / 2 + horizontal_offset;
        }
        if (height <= screen_height) {
          vertical_offset = vertical_offset + (screen_height - height) / 2;
        }
      }
    }
    // 如果样式状态发生变化，更新窗口
    if (*current_mode_ptr != display_mode) {
      SetWindowLongPtrW(*(uint64_t *)(window_context + 8), 0xfffffff0, (longlong)window_style);
      window_flags = 0x27;
      vertical_pos = 0;
      horizontal_pos = 0;
      SetWindowPos(*(uint64_t *)(window_context + 8), 0, 0, 0);
      *current_mode_ptr = display_mode;
      needs_update = 1;
    }
    // 调整窗口矩形并设置位置
    AdjustWindowRect(&rect_data, window_style, 0);
    horizontal_pos = adjusted_width_result - (int)rect_data;
    vertical_pos = adjusted_height_result - rect_data._4_4_;
    window_flags = (needs_update ^ 1) * 2 + 0x40;
    SetWindowPos(*(uint64_t *)(window_context + 8), 0, horizontal_offset + (int)rect_data, vertical_offset);
  }
  *current_mode_ptr = display_mode;
  // 安全栈检查（函数不返回）
  execute_window_adjustment_completion(stack_guard_value ^ (ulonglong)stack_guard);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180173771(void)
void FUN_180173771(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int unaff_EBX;
  int unaff_EBP;
  int iVar9;
  longlong *unaff_RSI;
  ulonglong uVar10;
  int iVar11;
  longlong unaff_R13;
  int *unaff_R14;
  int unaff_R15D;
  int iStack0000000000000044;
  int iStack0000000000000048;
  int in_stack_00000050;
  int iStack0000000000000054;
  ulonglong in_stack_00000058;
  
  iVar2 = GetSystemMetrics(0);
  iVar3 = GetSystemMetrics(1);
  lVar1 = *unaff_RSI;
  iStack0000000000000044 = 0;
  uVar10 = 0;
  lVar6 = unaff_RSI[1] - lVar1 >> 0x3f;
  lVar8 = (unaff_RSI[1] - lVar1) / 0x70 + lVar6;
  iVar11 = 0;
  if (lVar8 != lVar6) {
    do {
      if ((int)uVar10 == *(int *)(SYSTEM_STATE_MANAGER + 0x1f10)) {
        lVar6 = uVar10 * 0x70;
        iStack0000000000000044 = *(int *)(lVar6 + 0x58 + lVar1);
        iVar11 = *(int *)(lVar6 + 0x5c + lVar1);
        uVar4 = *(int *)(lVar6 + 0x60 + lVar1) - iStack0000000000000044;
        uVar7 = (int)uVar4 >> 0x1f;
        uVar5 = *(int *)(lVar6 + 100 + lVar1) - iVar11;
        iVar2 = (uVar4 ^ uVar7) - uVar7;
        uVar4 = (int)uVar5 >> 0x1f;
        iVar3 = (uVar5 ^ uVar4) - uVar4;
        break;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
      iVar11 = 0;
    } while (uVar10 < (ulonglong)(lVar8 - lVar6));
  }
  iVar9 = 0;
  _iStack0000000000000048 = 0;
  if (unaff_EBX == 1) {
    iVar9 = -0x70000000;
    in_stack_00000050 = iVar2;
    iStack0000000000000054 = iVar3;
  }
  else {
    in_stack_00000050 = unaff_R15D;
    iStack0000000000000054 = unaff_EBP;
    if (unaff_EBX == 0) {
      iVar9 = 0xca0000;
      if (unaff_R15D <= iVar2) {
        iStack0000000000000044 = (iVar2 - unaff_R15D) / 2 + iStack0000000000000044;
      }
      if (unaff_EBP <= iVar3) {
        iVar11 = iVar11 + (iVar3 - unaff_EBP) / 2;
      }
    }
  }
  if (*unaff_R14 != unaff_EBX) {
    SetWindowLongPtrW(*(uint64_t *)(unaff_R13 + 8),0xfffffff0,(longlong)iVar9);
    SetWindowPos(*(uint64_t *)(unaff_R13 + 8),0,0,0,0);
    *unaff_R14 = unaff_EBX;
  }
  AdjustWindowRect(&stack0x00000048,iVar9,0);
  SetWindowPos(*(uint64_t *)(unaff_R13 + 8),0,iStack0000000000000044 + iStack0000000000000048,
               iVar11,in_stack_00000050 - iStack0000000000000048);
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173887(void)
void FUN_180173887(void)

{
  int32_t unaff_EBX;
  int unaff_ESI;
  int32_t unaff_R12D;
  longlong unaff_R13;
  int32_t *unaff_R14;
  uint64_t in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000050;
  ulonglong in_stack_00000058;
  
  SetWindowLongPtrW(*(uint64_t *)(unaff_R13 + 8),0xfffffff0,(longlong)unaff_ESI);
  SetWindowPos(*(uint64_t *)(unaff_R13 + 8),0,0,0,0);
  *unaff_R14 = unaff_EBX;
  AdjustWindowRect(&stack0x00000048,unaff_ESI,0);
  SetWindowPos(*(uint64_t *)(unaff_R13 + 8),0,in_stack_00000040._4_4_ + in_stack_00000048,
               unaff_R12D,in_stack_00000050 - in_stack_00000048);
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173923(void)
void FUN_180173923(void)

{
  int32_t unaff_EBX;
  int32_t *unaff_R14;
  ulonglong in_stack_00000058;
  
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173950(void)
void FUN_180173950(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180173ab0(void)
void FUN_180173ab0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180173ae6(void)
void FUN_180173ae6(void)

{
  uint64_t uVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  ulonglong in_stack_00008040;
  
  uVar1 = GetClipboardData(0xd);
  lVar2 = GlobalLock(uVar1);
  if (lVar2 == 0) {
    (**(code **)(*unaff_RBX + 0x10))();
  }
  else {
    WideCharToMultiByte(0xfde9,0,lVar2,0xffffffff,&stack0x00000040);
    WideCharToMultiByte(0xfde9,0,lVar2,0xffffffff,&stack0x00000040);
    (**(code **)(*unaff_RBX + 0x10))();
  }
  CloseClipboard();
  GlobalUnlock(uVar1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00008040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173b1a(void)
void FUN_180173b1a(void)

{
  longlong *unaff_RBX;
  int32_t uStack0000000000000028;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  ulonglong in_stack_00008040;
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000028 = WideCharToMultiByte(0xfde9,0);
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  WideCharToMultiByte(0xfde9,0);
  (**(code **)(*unaff_RBX + 0x10))();
  CloseClipboard();
  GlobalUnlock();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00008040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173b8f(void)
void FUN_180173b8f(void)

{
  longlong *unaff_RBX;
  ulonglong in_stack_00008040;
  
  (**(code **)(*unaff_RBX + 0x10))();
  CloseClipboard();
  GlobalUnlock();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00008040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void trigger_security_check_failure(void)
// 功能: 触发安全检查失败处理，调用安全检查函数（不返回）
void trigger_security_check_failure(void)

{
  ulonglong stack_cookie;
  
  // 调用安全检查失败处理函数（该函数不会返回）
  // 通过异或操作验证栈cookie的有效性
  security_check_failure_handler(stack_cookie ^ (ulonglong)&local_stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void manage_cursor_visibility(uint64_t window_context, char show_cursor, int32_t param_3)
// 功能: 管理光标可见性，根据参数显示或隐藏光标
void manage_cursor_visibility(uint64_t window_context, char show_cursor, int32_t param_3)

{
  int cursor_count;
  
  if (show_cursor != '\0') {
    // 如果需要显示光标，先检查全局光标状态
    if (**(char **)(global_cursor_state_ptr + 0x2010) != '\0') {
      **(char **)(global_cursor_state_ptr + 0x2010) = '\0';
    }
    // 调用窗口更新函数
    update_window_context(window_context, param_3);
    // 循环显示光标直到计数器 >= 0
    do {
      cursor_count = ShowCursor(1);
    } while (cursor_count < 0);
    return;
  }
  // 循环隐藏光标直到计数器 < 0
  do {
    cursor_count = ShowCursor(0);
  } while (-1 < cursor_count);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void register_window_class(longlong window_context)
// 功能: 注册窗口类，设置窗口样式、图标、画刷等属性
void register_window_class(longlong window_context)

{
  longlong display_config_base;
  int screen_width;
  int screen_height;
  uint width_diff;
  uint height_diff;
  uint64_t icon_handle;
  longlong config_size;
  longlong config_count;
  uint display_index;
  ulonglong current_index;
  int window_height;
  uint64_t window_style;
  int window_width;
  int8_t stack_buffer [32];
  int class_height;
  int32_t class_style;
  int32_t class_extra;
  int32_t class_instance;
  code *window_proc;
  uint64_t class_icon;
  uint64_t class_cursor;
  uint64_t class_background;
  uint64_t class_menu_name;
  uint64_t class_lpszClassName;
  void *icon_sm;
  uint64_t icon_sm_handle;
  uint64_t window_rect_left;
  int adjusted_width;
  int adjusted_height;
  int8_t window_name_buffer [1024];
  ulonglong stack_cookie;
  
  // 栈缓冲区安全检查
  stack_cookie = security_cookie ^ (ulonglong)stack_buffer;
  initialize_window_system();
  window_width = *(int *)(global_display_config + 0x1d50);
  window_height = *(int *)(global_display_config + 0x1dc0);
  *(int32_t *)(window_context + 0x38) = *(int32_t *)(global_display_config + 0x1ea0);
  screen_width = GetSystemMetrics(SM_CXSCREEN);
  screen_height = GetSystemMetrics(SM_CYSCREEN);
  display_config_base = *(longlong *)(window_context + 0x18);
  current_index = 0;
  config_size = *(longlong *)(window_context + 0x20) - display_config_base;
  config_count = config_size >> 0x3f;
  config_size = config_size / 0x70 + config_count;
  
  // 查找匹配的显示配置
  if (config_size != config_count) {
    do {
      if ((int)current_index == *(int *)(global_display_config + 0x1f10)) {
        config_count = current_index * 0x70;
        width_diff = *(int *)(config_count + 0x60 + display_config_base) - *(int *)(config_count + 0x58 + display_config_base);
        display_index = (int)width_diff >> 0x1f;
        height_diff = *(int *)(config_count + 100 + display_config_base) - *(int *)(config_count + 0x5c + display_config_base);
        screen_width = (width_diff ^ display_index) - display_index;
        width_diff = (int)height_diff >> 0x1f;
        screen_height = (height_diff ^ width_diff) - width_diff;
        break;
      }
      current_index = (ulonglong)((int)current_index + 1);
    } while (current_index < (ulonglong)(config_size - config_count));
  }
  
  // 根据窗口模式设置窗口样式
  if (*(int *)(window_context + 0x38) == 0) {
    window_style = WS_OVERLAPPEDWINDOW;
  }
  else {
    window_style = WS_POPUP;
    window_width = screen_width;
    window_height = screen_height;
  }
  
  // 设置窗口类结构体
  class_style = CS_HREDRAW | CS_VREDRAW;
  window_proc = default_window_procedure;
  class_icon = *(uint64_t *)(window_context + 0x10);
  class_cursor = 0;
  class_background = 0;
  class_menu_name = 0;
  class_lpszClassName = 0;
  class_extra = sizeof(WNDCLASSEX);
  class_instance = 3;
  class_height = window_height;
  icon_sm = &window_icon_small;
  
  // 加载窗口图标和画刷
  icon_handle = LoadImageA(0, &window_icon_large, IMAGE_BITMAP, window_width);
  class_background = CreatePatternBrush(icon_handle);
  class_style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
  class_height = 0;
  class_cursor = LoadImageA(0, &window_cursor, IMAGE_CURSOR);
  class_style = CS_HREDRAW | CS_VREDRAW;
  class_height = 16;
  icon_sm_handle = LoadImageA(0, &window_cursor, IMAGE_CURSOR);
  
  // 注册窗口类
  RegisterClassExW(&class_style);
  
  // 调整窗口矩形
  window_rect_left = 0;
  adjusted_width = window_width;
  adjusted_height = window_height;
  AdjustWindowRect(&window_rect_left, window_style, 0);
  
  // 初始化窗口名称缓冲区（此函数不会返回）
  memset(window_name_buffer, 0, 0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void execute_window_callback(longlong window_context, longlong callback_param)
// 功能: 执行窗口回调函数，处理窗口消息和事件
void execute_window_callback(longlong window_context, longlong callback_param)

{
  uint64_t *window_vtable;
  code *message_handler;
  longlong *callback_data;
  longlong *stack_param;
  longlong **callback_ptr;
  longlong *callback_base;
  
  // 分配回调数据结构
  callback_data = (longlong *)allocate_callback_structure(memory_allocator, 0x48, 8, 3, ALLOCATOR_FLAGS);
  
  // 初始化虚函数表
  *callback_data = (longlong)&window_vtable_entry1;
  *callback_data = (longlong)&window_vtable_entry2;
  *(int32_t *)(callback_data + 1) = 0;
  *callback_data = (longlong)&window_vtable_entry3;
  
  // 线程安全初始化
  LOCK();
  *(int8_t *)(callback_data + 2) = 0;
  UNLOCK();
  
  // 设置回调参数
  callback_data[3] = -1;
  *callback_data = (longlong)&window_vtable_entry4;
  *(int32_t *)(callback_data + 5) = 6;
  callback_data[4] = window_context;
  callback_ptr = (longlong **)callback_data;
  callback_base = callback_data;
  
  // 调用回调初始化函数
  (**(code **)(*callback_data + 0x28))(callback_data);
  
  // 设置第二个参数
  callback_data[6] = callback_param;
  
  // 获取窗口消息处理器
  window_vtable = *(uint64_t **)(window_context + 0x140);
  message_handler = *(code **)*window_vtable;
  callback_ptr = &stack_param;
  stack_param = callback_data;
  
  // 再次调用回调初始化
  (**(code **)(*callback_data + 0x28))(callback_data);
  
  // 执行消息处理
  (*message_handler)(window_vtable, &stack_param);
  
  // WARNING: 无法恢复跳转表，太多分支
  // WARNING: 将间接跳转作为调用处理
  (**(code **)(*callback_data + 0x38))(callback_data);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void resize_display_config_array(uint64_t *config_array, longlong new_config, uint64_t param_3, uint64_t param_4)
// 功能: 调整显示配置数组大小，添加新的显示配置项
void resize_display_config_array(uint64_t *config_array, longlong new_config, uint64_t param_3, uint64_t param_4)

{
  uint64_t *array_end;
  int32_t *config_data;
  int32_t width;
  int32_t height;
  int32_t refresh_rate;
  uint64_t *new_buffer;
  int8_t *device_name;
  uint64_t *array_start;
  uint64_t *current_pos;
  void *default_name;
  uint64_t *new_array_start;
  longlong offset;
  longlong array_size;
  
  array_end = (uint64_t *)config_array[1];
  array_start = (uint64_t *)*config_array;
  array_size = ((longlong)array_end - (longlong)array_start) / 0x70;
  new_buffer = (uint64_t *)0x0;
  
  // 计算新的数组大小
  if (array_size == 0) {
    array_size = 1;
  }
  else {
    array_size = array_size * 2;
    if (array_size == 0) goto LAB_skip_allocation;
  }
  
  // 分配新的缓冲区
  new_buffer = (uint64_t *)
           allocate_memory(memory_allocator, array_size * 0x70, *(int8_t *)(config_array + 3), param_4,
                         ALLOCATOR_FLAGS);
  array_end = (uint64_t *)config_array[1];
  array_start = (uint64_t *)*config_array;
  
LAB_skip_allocation:
  current_pos = new_buffer;
  
  // 复制现有配置项到新缓冲区
  if (array_start != array_end) {
    offset = (longlong)new_buffer - (longlong)array_start;
    array_start = array_start + 1;
    do {
      // 初始化新配置项的虚函数表
      *current_pos = &display_config_vtable1;
      *(uint64_t *)(offset + (longlong)array_start) = 0;
      *(int32_t *)(offset + 8 + (longlong)array_start) = 0;
      *current_pos = &display_config_vtable2;
      device_name = (int8_t *)((longlong)array_start + offset + 0x10);
      *(int8_t **)(offset + (longlong)array_start) = device_name;
      *(int32_t *)(offset + 8 + (longlong)array_start) = 0;
      *device_name = 0;
      *(int32_t *)(offset + 8 + (longlong)array_start) = *(int32_t *)(array_start + 1);
      
      // 复制设备名称
      default_name = &default_device_name;
      if ((void *)*array_start != (void *)0x0) {
        default_name = (void *)*array_start;
      }
      strcpy_s(*(uint64_t *)(offset + (longlong)array_start), 0x40, default_name);
      
      // 复制配置数据
      width = *(int32_t *)((longlong)array_start + 0x54);
      height = *(int32_t *)(array_start + 0xb);
      refresh_rate = *(int32_t *)((longlong)array_start + 0x5c);
      config_data = (int32_t *)(offset + 0x50 + (longlong)array_start);
      *config_data = *(int32_t *)(array_start + 10);
      config_data[1] = width;
      config_data[2] = height;
      config_data[3] = refresh_rate;
      *(uint64_t *)(offset + 0x60 + (longlong)array_start) = array_start[0xc];
      current_pos = current_pos + 0xe;
      array_end = array_start + 0xd;
      array_start = array_start + 0xe;
    } while (array_end != array_end);
  }
  
  // 添加新的配置项
  initialize_display_config(current_pos, new_config);
  width = *(int32_t *)(new_config + 0x5c);
  height = *(int32_t *)(new_config + 0x60);
  refresh_rate = *(int32_t *)(new_config + 100);
  *(int32_t *)(current_pos + 0xb) = *(int32_t *)(new_config + 0x58);
  *(int32_t *)((longlong)current_pos + 0x5c) = width;
  *(int32_t *)(current_pos + 0xc) = height;
  *(int32_t *)((longlong)current_pos + 100) = refresh_rate;
  current_pos[0xd] = *(uint64_t *)(new_config + 0x68);
  
  // 清理旧的配置数组
  array_end = (uint64_t *)config_array[1];
  array_start = (uint64_t *)*config_array;
  if (array_start != array_end) {
    do {
      *array_start = &display_config_vtable1;
      array_start = array_start + 0xe;
    } while (array_start != array_end);
    array_start = (uint64_t *)*config_array;
  }
  
  // 更新数组指针
  if (array_start == (uint64_t *)0x0) {
    *config_array = new_buffer;
    config_array[1] = current_pos + 0xe;
    config_array[2] = new_buffer + array_size * 0xe;
    return;
  }
  
  // 错误处理（此函数不会返回）
  handle_memory_error();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174340(void **param_1,void **param_2,longlong param_3)
void FUN_180174340(void **param_1,void **param_2,longlong param_3)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  void **ppuVar5;
  int8_t *puVar6;
  void **ppuVar7;
  uint64_t *puVar8;
  void **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  void **ppuVar12;
  uint64_t *puVar13;
  void *puVar14;
  void *puVar15;
  void **ppuVar16;
  int8_t auStack_108 [32];
  void **ppuStack_e8;
  void **ppuStack_e0;
  void **ppuStack_d8;
  void **ppuStack_d0;
  uint64_t uStack_c8;
  void *apuStack_b8 [11];
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  void *puStack_50;
  ulonglong uStack_48;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_108;
  ppuStack_e8 = param_1;
  if (((longlong *)param_1)[1] != ((longlong *)param_1)[2]) {
    ppuStack_e0 = param_2;
    FUN_1800b8300(apuStack_b8,param_3);
    uStack_60 = *(int32_t *)(param_3 + 0x58);
    uStack_5c = *(int32_t *)(param_3 + 0x5c);
    uStack_58 = *(int32_t *)(param_3 + 0x60);
    uStack_54 = *(int32_t *)(param_3 + 100);
    puStack_50 = *(void **)(param_3 + 0x68);
    lVar11 = ((longlong *)param_1)[1];
    ppuStack_e8 = (void **)lVar11;
    FUN_1800b8300(lVar11,lVar11 + -0x70);
    *(int32_t *)(lVar11 + 0x58) = *(int32_t *)(lVar11 + -0x18);
    *(int32_t *)(lVar11 + 0x5c) = *(int32_t *)(lVar11 + -0x14);
    *(int32_t *)(lVar11 + 0x60) = *(int32_t *)(lVar11 + -0x10);
    *(int32_t *)(lVar11 + 100) = *(int32_t *)(lVar11 + -0xc);
    *(uint64_t *)(lVar11 + 0x68) = *(uint64_t *)(lVar11 + -8);
    lVar11 = ((longlong *)param_1)[1];
    lVar10 = ((lVar11 + -0x70) - (longlong)param_2) / 0x70;
    if (0 < lVar10) {
      puVar8 = (uint64_t *)(lVar11 + 8);
      puVar13 = (uint64_t *)(lVar11 + -0x68);
      do {
        *(int32_t *)(puVar8 + -0xd) = *(int32_t *)(puVar13 + -0xd);
        puVar15 = (void *)puVar13[-0xe];
        puVar14 = &system_buffer_ptr;
        if (puVar15 != (void *)0x0) {
          puVar14 = puVar15;
        }
        strcpy_s(puVar8[-0xe],0x40,puVar14);
        uVar2 = *(int32_t *)((longlong)puVar13 + -0x1c);
        uVar3 = *(int32_t *)(puVar13 + -3);
        uVar4 = *(int32_t *)((longlong)puVar13 + -0x14);
        *(int32_t *)(puVar8 + -4) = *(int32_t *)(puVar13 + -4);
        *(int32_t *)((longlong)puVar8 + -0x1c) = uVar2;
        *(int32_t *)(puVar8 + -3) = uVar3;
        *(int32_t *)((longlong)puVar8 + -0x14) = uVar4;
        puVar8[-2] = puVar13[-2];
        lVar10 = lVar10 + -1;
        puVar8 = puVar8 + -0xe;
        puVar13 = puVar13 + -0xe;
      } while (0 < lVar10);
    }
    *param_2 = &unknown_var_720_ptr;
    ppuStack_e8 = param_2;
    FUN_1800b8300(param_2,apuStack_b8);
    *(int32_t *)(param_2 + 0xb) = uStack_60;
    *(int32_t *)((longlong)param_2 + 0x5c) = uStack_5c;
    *(int32_t *)(param_2 + 0xc) = uStack_58;
    *(int32_t *)((longlong)param_2 + 100) = uStack_54;
    param_2[0xd] = puStack_50;
    ((longlong *)param_1)[1] = ((longlong *)param_1)[1] + 0x70;
    ppuStack_e8 = apuStack_b8;
    apuStack_b8[0] = &unknown_var_720_ptr;
    goto LAB_1801746f5;
  }
  lVar11 = (longlong)*param_1;
  lVar10 = (((longlong *)param_1)[1] - (longlong)*param_1) / 0x70;
  if (lVar10 == 0) {
    ppuStack_e0 = (void **)0x1;
LAB_180174517:
    ppuVar16 = ppuStack_e0;
    ppuVar5 = (void **)
              FUN_18062b420(system_memory_pool_ptr,(longlong)ppuStack_e0 * 0x70,
                            (char)((longlong *)param_1)[3]);
  }
  else {
    ppuVar16 = (void **)(lVar10 * 2);
    ppuStack_e0 = ppuVar16;
    if (ppuVar16 != (void **)0x0) goto LAB_180174517;
    ppuVar5 = (void **)0x0;
  }
  ppuVar12 = ppuVar5 + (((longlong)param_2 - lVar11) / 0x70) * 0xe;
  ppuStack_d8 = ppuVar12;
  FUN_1800b8300(ppuVar12,param_3);
  uVar2 = *(int32_t *)(param_3 + 0x5c);
  uVar3 = *(int32_t *)(param_3 + 0x60);
  uVar4 = *(int32_t *)(param_3 + 100);
  *(int32_t *)(ppuVar12 + 0xb) = *(int32_t *)(param_3 + 0x58);
  *(int32_t *)((longlong)ppuVar12 + 0x5c) = uVar2;
  *(int32_t *)(ppuVar12 + 0xc) = uVar3;
  *(int32_t *)((longlong)ppuVar12 + 100) = uVar4;
  ppuVar12[0xd] = *(void **)(param_3 + 0x68);
  ppuVar12 = (void **)*param_1;
  ppuVar9 = ppuVar5;
  if (ppuVar12 != param_2) {
    lVar11 = (longlong)ppuVar5 - (longlong)ppuVar12;
    ppuVar12 = ppuVar12 + 1;
    do {
      *ppuVar9 = &unknown_var_720_ptr;
      *(uint64_t *)((longlong)ppuVar12 + lVar11) = 0;
      *(int32_t *)((longlong)ppuVar12 + lVar11 + 8) = 0;
      *ppuVar9 = &unknown_var_3480_ptr;
      puVar6 = (int8_t *)(lVar11 + 0x10 + (longlong)ppuVar12);
      *(int8_t **)((longlong)ppuVar12 + lVar11) = puVar6;
      *(int32_t *)((longlong)ppuVar12 + lVar11 + 8) = 0;
      *puVar6 = 0;
      *(int32_t *)((longlong)ppuVar12 + lVar11 + 8) = *(int32_t *)(ppuVar12 + 1);
      puVar15 = &system_buffer_ptr;
      if (*ppuVar12 != (void *)0x0) {
        puVar15 = *ppuVar12;
      }
      ppuStack_d8 = ppuVar9;
      ppuStack_d0 = ppuVar9;
      strcpy_s(*(uint64_t *)((longlong)ppuVar12 + lVar11),0x40,puVar15);
      uVar2 = *(int32_t *)((longlong)ppuVar12 + 0x54);
      uVar3 = *(int32_t *)(ppuVar12 + 0xb);
      uVar4 = *(int32_t *)((longlong)ppuVar12 + 0x5c);
      puVar1 = (int32_t *)((longlong)ppuVar12 + lVar11 + 0x50);
      *puVar1 = *(int32_t *)(ppuVar12 + 10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(void **)((longlong)ppuVar12 + lVar11 + 0x60) = ppuVar12[0xc];
      ppuVar9 = ppuVar9 + 0xe;
      ppuVar7 = ppuVar12 + 0xd;
      ppuVar16 = ppuStack_e0;
      ppuVar12 = ppuVar12 + 0xe;
    } while (ppuVar7 != param_2);
  }
  ppuVar9 = ppuVar9 + 0xe;
  ppuVar12 = (void **)((longlong *)param_1)[1];
  if (param_2 != ppuVar12) {
    lVar11 = (longlong)ppuVar9 - (longlong)param_2;
    ppuVar16 = param_2 + 1;
    do {
      *ppuVar9 = &unknown_var_720_ptr;
      *(uint64_t *)(lVar11 + (longlong)ppuVar16) = 0;
      *(int32_t *)(lVar11 + 8 + (longlong)ppuVar16) = 0;
      *ppuVar9 = &unknown_var_3480_ptr;
      puVar6 = (int8_t *)((longlong)ppuVar16 + lVar11 + 0x10);
      *(int8_t **)(lVar11 + (longlong)ppuVar16) = puVar6;
      *(int32_t *)(lVar11 + 8 + (longlong)ppuVar16) = 0;
      *puVar6 = 0;
      *(int32_t *)(lVar11 + 8 + (longlong)ppuVar16) = *(int32_t *)(ppuVar16 + 1);
      puVar15 = &system_buffer_ptr;
      if (*ppuVar16 != (void *)0x0) {
        puVar15 = *ppuVar16;
      }
      ppuStack_d8 = ppuVar9;
      ppuStack_d0 = ppuVar9;
      strcpy_s(*(uint64_t *)(lVar11 + (longlong)ppuVar16),0x40,puVar15);
      uVar2 = *(int32_t *)((longlong)ppuVar16 + 0x54);
      uVar3 = *(int32_t *)(ppuVar16 + 0xb);
      uVar4 = *(int32_t *)((longlong)ppuVar16 + 0x5c);
      puVar1 = (int32_t *)(lVar11 + 0x50 + (longlong)ppuVar16);
      *puVar1 = *(int32_t *)(ppuVar16 + 10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(void **)(lVar11 + 0x60 + (longlong)ppuVar16) = ppuVar16[0xc];
      ppuVar9 = ppuVar9 + 0xe;
      ppuVar7 = ppuVar16 + 0xd;
      ppuVar16 = ppuVar16 + 0xe;
    } while (ppuVar7 != ppuVar12);
    ppuVar12 = (void **)ppuStack_e8[1];
    param_1 = ppuStack_e8;
    ppuVar16 = ppuStack_e0;
  }
  ppuVar7 = (void **)*param_1;
  ppuStack_e8 = ppuVar7;
  if (ppuVar7 != ppuVar12) {
    do {
      ppuStack_d0 = ppuVar7;
      *ppuStack_d0 = &unknown_var_720_ptr;
      ppuStack_e8 = ppuStack_d0 + 0xe;
      ppuVar7 = ppuStack_e8;
    } while (ppuStack_e8 != ppuVar12);
    ppuVar7 = (void **)*param_1;
  }
  if (ppuVar7 != (void **)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (void *)ppuVar5;
  ((longlong *)param_1)[1] = (longlong)ppuVar9;
  ((longlong *)param_1)[2] = (longlong)(ppuVar5 + (longlong)ppuVar16 * 0xe);
LAB_1801746f5:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_108);
}



uint64_t *
FUN_180174720(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



ulonglong FUN_180174770(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  ulonglong uVar4;
  longlong *plStack_50;
  char cStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  uVar3 = GetCurrentThread();
  uVar4 = SetThreadPriority(uVar3,2);
  cVar1 = (char)param_1[0xb];
  do {
    if (cVar1 == '\0') {
      return uVar4;
    }
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,1);
    if ((char)uVar4 == '\0') {
      if ((char)param_1[0x41] != '\0') {
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_28 = 0;
        uStack_20 = 0;
        uStack_18 = 0;
        iVar2 = PeekMessageW(&uStack_40,0,0,0,1);
        while (iVar2 != 0) {
          TranslateMessage(&uStack_40);
          DispatchMessageW(&uStack_40);
          iVar2 = PeekMessageW(&uStack_40,0,0,0,1);
        }
        FUN_1801712c0(param_1[0x42]);
      }
      plStack_50 = param_1 + 0x33;
      cStack_48 = 0;
      iVar2 = _Mtx_lock();
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      cStack_48 = '\x01';
      if ((char)param_1[0x3d] == '\x01') {
        *(int8_t *)(param_1 + 0x3d) = 0;
      }
      else {
        FUN_1800495d0(param_1 + 0x2a,&plStack_50);
        uVar4 = (ulonglong)*(byte *)(param_1 + 0x3d);
        *(int8_t *)(param_1 + 0x3d) = 0;
        if (cStack_48 == '\0') goto LAB_1801748de;
      }
      uVar4 = _Mtx_unlock(plStack_50);
      if ((int)uVar4 != 0) {
        uVar4 = __Throw_C_error_std__YAXH_Z(uVar4 & 0xffffffff);
      }
    }
LAB_1801748de:
    cVar1 = (char)param_1[0xb];
  } while( true );
}



uint64_t FUN_180174900(uint64_t param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18020e6c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x218,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_180174950(ulonglong *param_1)
void FUN_180174950(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_1801749b0(ulonglong *param_1)
void FUN_1801749b0(ulonglong *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  ulonglong uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &unknown_var_720_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



