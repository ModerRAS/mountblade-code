#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part191.c - 17 个函数

/**
 * 调整窗口位置和大小 based on display configuration
 * @param window_context 窗口上下文指针
 * @param width 窗口宽度
 * @param height 窗口高度
 * @param update_flag 更新标志
 * @param current_mode_ptr 当前模式指针
 * @param display_config_ptr 显示配置指针
 */
void adjust_window_position_and_size(int64_t window_context,int width,int height,byte update_flag,int *current_mode_ptr,
                                    int64_t *display_config_ptr)

{
  int display_mode;
  int64_t config_start;
  int screen_width;
  int screen_height;
  uint window_width;
  uint window_height;
  int64_t display_count;
  uint adjusted_width;
  int64_t total_displays;
  int window_style;
  uint64_t display_index;
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
  uint64_t stack_guard_value;
  
  stack_guard_value = GET_SECURITY_COOKIE() ^ (uint64_t)stack_guard;
  display_mode = *(int *)(SYSTEM_STATE_MANAGER + 0x1ea0);
  needs_update = update_flag;
  if (display_mode != 2) {
    screen_width = GetSystemMetrics(0);
    screen_height = GetSystemMetrics(1);
    config_start = *display_config_ptr;
    horizontal_offset = 0;
    display_index = 0;
    display_count = display_config_ptr[1] - config_start >> 0x3f;
    total_displays = (display_config_ptr[1] - config_start) / 0x70 + display_count;
    vertical_offset = 0;
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
        display_index = (uint64_t)((int)display_index + 1);
        vertical_offset = 0;
      } while (display_index < (uint64_t)(total_displays - display_count));
    }
    window_style = 0;
    rect_data = 0;
    if (display_mode == 1) {
      window_style = -0x70000000;
      adjusted_width_result = screen_width;
      adjusted_height_result = screen_height;
    }
    else {
      adjusted_width_result = width;
      adjusted_height_result = height;
      if (display_mode == 0) {
        window_style = 0xca0000;
        if (width <= screen_width) {
          horizontal_offset = (screen_width - width) / 2 + horizontal_offset;
        }
        if (height <= screen_height) {
          vertical_offset = vertical_offset + (screen_height - height) / 2;
        }
      }
    }
    if (*current_mode_ptr != display_mode) {
      SetWindowLongPtrW(*(uint64_t *)(window_context + 8),0xfffffff0,(int64_t)window_style);
      window_flags = 0x27;
      vertical_pos = 0;
      horizontal_pos = 0;
      SetWindowPos(*(uint64_t *)(window_context + 8),0,0,0);
      *current_mode_ptr = display_mode;
      needs_update = 1;
    }
    AdjustWindowRect(&rect_data,window_style,0);
    horizontal_pos = adjusted_width_result - (int)rect_data;
    vertical_pos = adjusted_height_result - rect_data._4_4_;
    window_flags = (needs_update ^ 1) * 2 + 0x40;
    SetWindowPos(*(uint64_t *)(window_context + 8),0,horizontal_offset + (int)rect_data,vertical_offset);
  }
  *current_mode_ptr = display_mode;
                    // WARNING: Subroutine does not return
  execute_window_adjustment_completion(stack_guard_value ^ (uint64_t)stack_guard);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 配置窗口样式和位置 based on display parameters
 * @param display_mode 显示模式 (unaff_EBX)
 * @param window_width 窗口宽度 (unaff_R15D)
 * @param window_height 窗口高度 (unaff_EBP)
 * @param display_config 显示配置 (unaff_RSI)
 * @param window_context 窗口上下文 (unaff_R13)
 * @param current_mode_ptr 当前模式指针 (unaff_R14)
 */
void configure_window_style_and_position(int display_mode,int window_width,int window_height,
                                      int64_t *display_config,int64_t window_context,int *current_mode_ptr)

{
  int64_t config_start;
  int screen_width;
  int screen_height;
  uint display_width;
  uint display_height;
  int64_t display_count;
  uint adjusted_width;
  int64_t total_displays;
  int window_style;
  uint64_t display_index;
  int vertical_offset;
  int horizontal_offset;
  int adjusted_height;
  uint64_t stack_guard_value;
  
  screen_width = GetSystemMetrics(0);
  screen_height = GetSystemMetrics(1);
  config_start = *display_config;
  horizontal_offset = 0;
  display_index = 0;
  display_count = display_config[1] - config_start >> 0x3f;
  total_displays = (display_config[1] - config_start) / 0x70 + display_count;
  vertical_offset = 0;
  if (total_displays != display_count) {
    do {
      if ((int)display_index == *(int *)(SYSTEM_STATE_MANAGER + 0x1f10)) {
        display_count = display_index * 0x70;
        horizontal_offset = *(int *)(display_count + 0x58 + config_start);
        vertical_offset = *(int *)(display_count + 0x5c + config_start);
        display_width = *(int *)(display_count + 0x60 + config_start) - horizontal_offset;
        adjusted_width = (int)display_width >> 0x1f;
        display_height = *(int *)(display_count + 100 + config_start) - vertical_offset;
        screen_width = (display_width ^ adjusted_width) - adjusted_width;
        display_width = (int)display_height >> 0x1f;
        screen_height = (display_height ^ display_width) - display_width;
        break;
      }
      display_index = (uint64_t)((int)display_index + 1);
      vertical_offset = 0;
    } while (display_index < (uint64_t)(total_displays - display_count));
  }
  window_style = 0;
  adjusted_height = 0;
  if (display_mode == 1) {
    window_style = -0x70000000;
    adjusted_width = screen_width;
    adjusted_height = screen_height;
  }
  else {
    adjusted_width = window_width;
    adjusted_height = window_height;
    if (display_mode == 0) {
      window_style = 0xca0000;
      if (window_width <= screen_width) {
        horizontal_offset = (screen_width - window_width) / 2 + horizontal_offset;
      }
      if (window_height <= screen_height) {
        vertical_offset = vertical_offset + (screen_height - window_height) / 2;
      }
    }
  }
  if (*current_mode_ptr != display_mode) {
    SetWindowLongPtrW(*(uint64_t *)(window_context + 8),0xfffffff0,(int64_t)window_style);
    SetWindowPos(*(uint64_t *)(window_context + 8),0,0,0,0);
    *current_mode_ptr = display_mode;
  }
  AdjustWindowRect(&adjusted_height,window_style,0);
  SetWindowPos(*(uint64_t *)(window_context + 8),0,horizontal_offset + adjusted_height,
               vertical_offset,adjusted_width - adjusted_height);
  *current_mode_ptr = display_mode;
                    // WARNING: Subroutine does not return
  execute_window_configuration_completion(stack_guard_value ^ (uint64_t)&window_style);
}





// 函数: void FUN_180173887(void)
void FUN_180173887(void)

{
  int32_t unaff_EBX;
  int unaff_ESI;
  int32_t unaff_R12D;
  int64_t unaff_R13;
  int32_t *unaff_R14;
  uint64_t in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000050;
  uint64_t in_stack_00000058;
  
  SetWindowLongPtrW(*(uint64_t *)(unaff_R13 + 8),0xfffffff0,(int64_t)unaff_ESI);
  SetWindowPos(*(uint64_t *)(unaff_R13 + 8),0,0,0,0);
  *unaff_R14 = unaff_EBX;
  AdjustWindowRect(&stack0x00000048,unaff_ESI,0);
  SetWindowPos(*(uint64_t *)(unaff_R13 + 8),0,in_stack_00000040._4_4_ + in_stack_00000048,
               unaff_R12D,in_stack_00000050 - in_stack_00000048);
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180173923(void)
void FUN_180173923(void)

{
  int32_t unaff_EBX;
  int32_t *unaff_R14;
  uint64_t in_stack_00000058;
  
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000058 ^ (uint64_t)&stack0x00000000);
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
  int64_t lVar2;
  int64_t *unaff_RBX;
  uint64_t in_stack_00008040;
  
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
  SystemSecurityChecker(in_stack_00008040 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180173b1a(void)
void FUN_180173b1a(void)

{
  int64_t *unaff_RBX;
  int32_t uStack0000000000000028;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  uint64_t in_stack_00008040;
  
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
  SystemSecurityChecker(in_stack_00008040 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180173b8f(void)
void FUN_180173b8f(void)

{
  int64_t *unaff_RBX;
  uint64_t in_stack_00008040;
  
  (**(code **)(*unaff_RBX + 0x10))();
  CloseClipboard();
  GlobalUnlock();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00008040 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180173bc0(void)
void FUN_180173bc0(void)

{
  uint64_t in_stack_00008040;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00008040 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180173be0(uint64_t param_1,char param_2,int32_t param_3)
void FUN_180173be0(uint64_t param_1,char param_2,int32_t param_3)

{
  int iVar1;
  
  if (param_2 != '\0') {
    if (**(char **)(core_system_data_config + 0x2010) != '\0') {
      **(char **)(core_system_data_config + 0x2010) = '\0';
    }
    FUN_1801720a0(param_1,param_3);
    do {
      iVar1 = ShowCursor(1);
    } while (iVar1 < 0);
    return;
  }
  do {
    iVar1 = ShowCursor(0);
  } while (-1 < iVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180173c40(int64_t param_1)
void FUN_180173c40(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t uVar12;
  int iVar13;
  int8_t auStack_508 [32];
  int iStack_4e8;
  int32_t uStack_4e0;
  int32_t uStack_498;
  int32_t uStack_494;
  code *pcStack_490;
  uint64_t uStack_488;
  uint64_t uStack_480;
  uint64_t uStack_478;
  uint64_t uStack_470;
  uint64_t uStack_468;
  uint64_t uStack_460;
  void *puStack_458;
  uint64_t uStack_450;
  uint64_t uStack_448;
  int iStack_440;
  int iStack_43c;
  int8_t auStack_438 [1024];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_508;
  FUN_180171610();
  iVar13 = *(int *)(SYSTEM_STATE_MANAGER + 0x1d50);
  iVar11 = *(int *)(SYSTEM_STATE_MANAGER + 0x1dc0);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(SYSTEM_STATE_MANAGER + 0x1ea0);
  iVar2 = GetSystemMetrics(0);
  iVar3 = GetSystemMetrics(1);
  lVar1 = *(int64_t *)(param_1 + 0x18);
  uVar10 = 0;
  lVar7 = *(int64_t *)(param_1 + 0x20) - lVar1;
  lVar8 = lVar7 >> 0x3f;
  lVar7 = lVar7 / 0x70 + lVar8;
  if (lVar7 != lVar8) {
    do {
      if ((int)uVar10 == *(int *)(SYSTEM_STATE_MANAGER + 0x1f10)) {
        lVar8 = uVar10 * 0x70;
        uVar4 = *(int *)(lVar8 + 0x60 + lVar1) - *(int *)(lVar8 + 0x58 + lVar1);
        uVar9 = (int)uVar4 >> 0x1f;
        uVar5 = *(int *)(lVar8 + 100 + lVar1) - *(int *)(lVar8 + 0x5c + lVar1);
        iVar2 = (uVar4 ^ uVar9) - uVar9;
        uVar4 = (int)uVar5 >> 0x1f;
        iVar3 = (uVar5 ^ uVar4) - uVar4;
        break;
      }
      uVar10 = (uint64_t)((int)uVar10 + 1);
    } while (uVar10 < (uint64_t)(lVar7 - lVar8));
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar12 = 0xca0000;
  }
  else {
    uVar12 = 0x90000000;
    iVar13 = iVar2;
    iVar11 = iVar3;
  }
  uStack_4e0 = 0x2010;
  pcStack_490 = FUN_180170da0;
  uStack_480 = *(uint64_t *)(param_1 + 0x10);
  uStack_488 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_460 = 0;
  uStack_450 = 0;
  uStack_498 = 0x50;
  uStack_494 = 3;
  uStack_468 = 0;
  puStack_458 = &unknown_var_2072_ptr;
  iStack_4e8 = iVar11;
  uVar6 = LoadImageA(0,&unknown_var_2040_ptr,0,iVar13);
  uStack_468 = CreatePatternBrush(uVar6);
  uStack_4e0 = 0x8070;
  iStack_4e8 = 0;
  uStack_478 = LoadImageA(0,&unknown_var_2136_ptr,1);
  uStack_4e0 = 0x8030;
  iStack_4e8 = 0x10;
  uStack_450 = LoadImageA(0,&unknown_var_2136_ptr,1);
  RegisterClassExW(&uStack_498);
  uStack_448 = 0;
  iStack_440 = iVar13;
  iStack_43c = iVar11;
  AdjustWindowRect(&uStack_448,uVar12,0);
                    // WARNING: Subroutine does not return
  memset(auStack_438,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174080(int64_t param_1,int64_t param_2)
void FUN_180174080(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t *plStackX_18;
  
  plVar3 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (int64_t)&system_handler1_ptr;
  *plVar3 = (int64_t)&system_handler2_ptr;
  *(int32_t *)(plVar3 + 1) = 0;
  *plVar3 = (int64_t)&unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (int64_t)&unknown_var_2640_ptr;
  *(int32_t *)(plVar3 + 5) = 6;
  plVar3[4] = param_1;
  pplStackX_10 = (int64_t **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3[6] = param_2;
  puVar1 = *(uint64_t **)(param_1 + 0x140);
  pcVar2 = *(code **)*puVar1;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  (*pcVar2)(puVar1,&plStackX_8);
                    // WARNING: Could not recover jumptable at 0x00018017414b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174150(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180174150(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  puVar11 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
  lVar13 = ((int64_t)puVar11 - (int64_t)puVar8) / 0x70;
  puVar6 = (uint64_t *)0x0;
  if (lVar13 == 0) {
    lVar13 = 1;
  }
  else {
    lVar13 = lVar13 * 2;
    if (lVar13 == 0) goto LAB_1801741dc;
  }
  puVar6 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar13 * 0x70,*(int8_t *)(param_1 + 3),param_4,
                         0xfffffffffffffffe);
  puVar11 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
LAB_1801741dc:
  puVar9 = puVar6;
  if (puVar8 != puVar11) {
    lVar12 = (int64_t)puVar6 - (int64_t)puVar8;
    puVar8 = puVar8 + 1;
    do {
      *puVar9 = &system_state_ptr;
      *(uint64_t *)(lVar12 + (int64_t)puVar8) = 0;
      *(int32_t *)(lVar12 + 8 + (int64_t)puVar8) = 0;
      *puVar9 = &unknown_var_3480_ptr;
      puVar7 = (int8_t *)((int64_t)puVar8 + lVar12 + 0x10);
      *(int8_t **)(lVar12 + (int64_t)puVar8) = puVar7;
      *(int32_t *)(lVar12 + 8 + (int64_t)puVar8) = 0;
      *puVar7 = 0;
      *(int32_t *)(lVar12 + 8 + (int64_t)puVar8) = *(int32_t *)(puVar8 + 1);
      puVar10 = &system_buffer_ptr;
      if ((void *)*puVar8 != (void *)0x0) {
        puVar10 = (void *)*puVar8;
      }
      strcpy_s(*(uint64_t *)(lVar12 + (int64_t)puVar8),0x40,puVar10);
      uVar3 = *(int32_t *)((int64_t)puVar8 + 0x54);
      uVar4 = *(int32_t *)(puVar8 + 0xb);
      uVar5 = *(int32_t *)((int64_t)puVar8 + 0x5c);
      puVar2 = (int32_t *)(lVar12 + 0x50 + (int64_t)puVar8);
      *puVar2 = *(int32_t *)(puVar8 + 10);
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(uint64_t *)(lVar12 + 0x60 + (int64_t)puVar8) = puVar8[0xc];
      puVar9 = puVar9 + 0xe;
      puVar1 = puVar8 + 0xd;
      puVar8 = puVar8 + 0xe;
    } while (puVar1 != puVar11);
  }
  FUN_1800b8300(puVar9,param_2);
  uVar3 = *(int32_t *)(param_2 + 0x5c);
  uVar4 = *(int32_t *)(param_2 + 0x60);
  uVar5 = *(int32_t *)(param_2 + 100);
  *(int32_t *)(puVar9 + 0xb) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)((int64_t)puVar9 + 0x5c) = uVar3;
  *(int32_t *)(puVar9 + 0xc) = uVar4;
  *(int32_t *)((int64_t)puVar9 + 100) = uVar5;
  puVar9[0xd] = *(uint64_t *)(param_2 + 0x68);
  puVar11 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
  if (puVar8 != puVar11) {
    do {
      *puVar8 = &system_state_ptr;
      puVar8 = puVar8 + 0xe;
    } while (puVar8 != puVar11);
    puVar8 = (uint64_t *)*param_1;
  }
  if (puVar8 == (uint64_t *)0x0) {
    *param_1 = puVar6;
    param_1[1] = puVar9 + 0xe;
    param_1[2] = puVar6 + lVar13 * 0xe;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174340(void **param_1,void **param_2,int64_t param_3)
void FUN_180174340(void **param_1,void **param_2,int64_t param_3)

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
  int64_t lVar10;
  int64_t lVar11;
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
  uint64_t uStack_48;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  ppuStack_e8 = param_1;
  if (((int64_t *)param_1)[1] != ((int64_t *)param_1)[2]) {
    ppuStack_e0 = param_2;
    FUN_1800b8300(apuStack_b8,param_3);
    uStack_60 = *(int32_t *)(param_3 + 0x58);
    uStack_5c = *(int32_t *)(param_3 + 0x5c);
    uStack_58 = *(int32_t *)(param_3 + 0x60);
    uStack_54 = *(int32_t *)(param_3 + 100);
    puStack_50 = *(void **)(param_3 + 0x68);
    lVar11 = ((int64_t *)param_1)[1];
    ppuStack_e8 = (void **)lVar11;
    FUN_1800b8300(lVar11,lVar11 + -0x70);
    *(int32_t *)(lVar11 + 0x58) = *(int32_t *)(lVar11 + -0x18);
    *(int32_t *)(lVar11 + 0x5c) = *(int32_t *)(lVar11 + -0x14);
    *(int32_t *)(lVar11 + 0x60) = *(int32_t *)(lVar11 + -0x10);
    *(int32_t *)(lVar11 + 100) = *(int32_t *)(lVar11 + -0xc);
    *(uint64_t *)(lVar11 + 0x68) = *(uint64_t *)(lVar11 + -8);
    lVar11 = ((int64_t *)param_1)[1];
    lVar10 = ((lVar11 + -0x70) - (int64_t)param_2) / 0x70;
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
        uVar2 = *(int32_t *)((int64_t)puVar13 + -0x1c);
        uVar3 = *(int32_t *)(puVar13 + -3);
        uVar4 = *(int32_t *)((int64_t)puVar13 + -0x14);
        *(int32_t *)(puVar8 + -4) = *(int32_t *)(puVar13 + -4);
        *(int32_t *)((int64_t)puVar8 + -0x1c) = uVar2;
        *(int32_t *)(puVar8 + -3) = uVar3;
        *(int32_t *)((int64_t)puVar8 + -0x14) = uVar4;
        puVar8[-2] = puVar13[-2];
        lVar10 = lVar10 + -1;
        puVar8 = puVar8 + -0xe;
        puVar13 = puVar13 + -0xe;
      } while (0 < lVar10);
    }
    *param_2 = &system_state_ptr;
    ppuStack_e8 = param_2;
    FUN_1800b8300(param_2,apuStack_b8);
    *(int32_t *)(param_2 + 0xb) = uStack_60;
    *(int32_t *)((int64_t)param_2 + 0x5c) = uStack_5c;
    *(int32_t *)(param_2 + 0xc) = uStack_58;
    *(int32_t *)((int64_t)param_2 + 100) = uStack_54;
    param_2[0xd] = puStack_50;
    ((int64_t *)param_1)[1] = ((int64_t *)param_1)[1] + 0x70;
    ppuStack_e8 = apuStack_b8;
    apuStack_b8[0] = &system_state_ptr;
    goto LAB_1801746f5;
  }
  lVar11 = (int64_t)*param_1;
  lVar10 = (((int64_t *)param_1)[1] - (int64_t)*param_1) / 0x70;
  if (lVar10 == 0) {
    ppuStack_e0 = (void **)0x1;
LAB_180174517:
    ppuVar16 = ppuStack_e0;
    ppuVar5 = (void **)
              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)ppuStack_e0 * 0x70,
                            (char)((int64_t *)param_1)[3]);
  }
  else {
    ppuVar16 = (void **)(lVar10 * 2);
    ppuStack_e0 = ppuVar16;
    if (ppuVar16 != (void **)0x0) goto LAB_180174517;
    ppuVar5 = (void **)0x0;
  }
  ppuVar12 = ppuVar5 + (((int64_t)param_2 - lVar11) / 0x70) * 0xe;
  ppuStack_d8 = ppuVar12;
  FUN_1800b8300(ppuVar12,param_3);
  uVar2 = *(int32_t *)(param_3 + 0x5c);
  uVar3 = *(int32_t *)(param_3 + 0x60);
  uVar4 = *(int32_t *)(param_3 + 100);
  *(int32_t *)(ppuVar12 + 0xb) = *(int32_t *)(param_3 + 0x58);
  *(int32_t *)((int64_t)ppuVar12 + 0x5c) = uVar2;
  *(int32_t *)(ppuVar12 + 0xc) = uVar3;
  *(int32_t *)((int64_t)ppuVar12 + 100) = uVar4;
  ppuVar12[0xd] = *(void **)(param_3 + 0x68);
  ppuVar12 = (void **)*param_1;
  ppuVar9 = ppuVar5;
  if (ppuVar12 != param_2) {
    lVar11 = (int64_t)ppuVar5 - (int64_t)ppuVar12;
    ppuVar12 = ppuVar12 + 1;
    do {
      *ppuVar9 = &system_state_ptr;
      *(uint64_t *)((int64_t)ppuVar12 + lVar11) = 0;
      *(int32_t *)((int64_t)ppuVar12 + lVar11 + 8) = 0;
      *ppuVar9 = &unknown_var_3480_ptr;
      puVar6 = (int8_t *)(lVar11 + 0x10 + (int64_t)ppuVar12);
      *(int8_t **)((int64_t)ppuVar12 + lVar11) = puVar6;
      *(int32_t *)((int64_t)ppuVar12 + lVar11 + 8) = 0;
      *puVar6 = 0;
      *(int32_t *)((int64_t)ppuVar12 + lVar11 + 8) = *(int32_t *)(ppuVar12 + 1);
      puVar15 = &system_buffer_ptr;
      if (*ppuVar12 != (void *)0x0) {
        puVar15 = *ppuVar12;
      }
      ppuStack_d8 = ppuVar9;
      ppuStack_d0 = ppuVar9;
      strcpy_s(*(uint64_t *)((int64_t)ppuVar12 + lVar11),0x40,puVar15);
      uVar2 = *(int32_t *)((int64_t)ppuVar12 + 0x54);
      uVar3 = *(int32_t *)(ppuVar12 + 0xb);
      uVar4 = *(int32_t *)((int64_t)ppuVar12 + 0x5c);
      puVar1 = (int32_t *)((int64_t)ppuVar12 + lVar11 + 0x50);
      *puVar1 = *(int32_t *)(ppuVar12 + 10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(void **)((int64_t)ppuVar12 + lVar11 + 0x60) = ppuVar12[0xc];
      ppuVar9 = ppuVar9 + 0xe;
      ppuVar7 = ppuVar12 + 0xd;
      ppuVar16 = ppuStack_e0;
      ppuVar12 = ppuVar12 + 0xe;
    } while (ppuVar7 != param_2);
  }
  ppuVar9 = ppuVar9 + 0xe;
  ppuVar12 = (void **)((int64_t *)param_1)[1];
  if (param_2 != ppuVar12) {
    lVar11 = (int64_t)ppuVar9 - (int64_t)param_2;
    ppuVar16 = param_2 + 1;
    do {
      *ppuVar9 = &system_state_ptr;
      *(uint64_t *)(lVar11 + (int64_t)ppuVar16) = 0;
      *(int32_t *)(lVar11 + 8 + (int64_t)ppuVar16) = 0;
      *ppuVar9 = &unknown_var_3480_ptr;
      puVar6 = (int8_t *)((int64_t)ppuVar16 + lVar11 + 0x10);
      *(int8_t **)(lVar11 + (int64_t)ppuVar16) = puVar6;
      *(int32_t *)(lVar11 + 8 + (int64_t)ppuVar16) = 0;
      *puVar6 = 0;
      *(int32_t *)(lVar11 + 8 + (int64_t)ppuVar16) = *(int32_t *)(ppuVar16 + 1);
      puVar15 = &system_buffer_ptr;
      if (*ppuVar16 != (void *)0x0) {
        puVar15 = *ppuVar16;
      }
      ppuStack_d8 = ppuVar9;
      ppuStack_d0 = ppuVar9;
      strcpy_s(*(uint64_t *)(lVar11 + (int64_t)ppuVar16),0x40,puVar15);
      uVar2 = *(int32_t *)((int64_t)ppuVar16 + 0x54);
      uVar3 = *(int32_t *)(ppuVar16 + 0xb);
      uVar4 = *(int32_t *)((int64_t)ppuVar16 + 0x5c);
      puVar1 = (int32_t *)(lVar11 + 0x50 + (int64_t)ppuVar16);
      *puVar1 = *(int32_t *)(ppuVar16 + 10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(void **)(lVar11 + 0x60 + (int64_t)ppuVar16) = ppuVar16[0xc];
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
      *ppuStack_d0 = &system_state_ptr;
      ppuStack_e8 = ppuStack_d0 + 0xe;
      ppuVar7 = ppuStack_e8;
    } while (ppuStack_e8 != ppuVar12);
    ppuVar7 = (void **)*param_1;
  }
  if (ppuVar7 != (void **)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (void *)ppuVar5;
  ((int64_t *)param_1)[1] = (int64_t)ppuVar9;
  ((int64_t *)param_1)[2] = (int64_t)(ppuVar5 + (int64_t)ppuVar16 * 0xe);
LAB_1801746f5:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_108);
}



uint64_t *
FUN_180174720(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t FUN_180174770(int64_t *param_1)

{
  char cVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plStack_50;
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
        uVar4 = (uint64_t)*(byte *)(param_1 + 0x3d);
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



uint64_t FUN_180174900(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18020e6c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x218,param_3,param_4,uVar1);
  }
  return param_1;
}





// 函数: void FUN_180174950(uint64_t *param_1)
void FUN_180174950(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
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





// 函数: void FUN_1801749b0(uint64_t *param_1)
void FUN_1801749b0(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  
  puVar2 = (uint64_t *)param_1[1];
  for (puVar4 = (uint64_t *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &system_state_ptr;
  }
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
    uVar5 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((int64_t)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
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



