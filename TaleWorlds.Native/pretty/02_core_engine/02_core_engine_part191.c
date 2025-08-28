#include "TaleWorlds.Native.Split.h"

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
  undefined1 stack_guard [32];
  int horizontal_pos;
  int vertical_pos;
  int window_flags;
  byte needs_update;
  int horizontal_offset;
  undefined8 rect_data;
  int adjusted_width_result;
  int adjusted_height_result;
  ulonglong stack_guard_value;
  
  // 安全栈检查
  stack_guard_value = _DAT_180bf00a8 ^ (ulonglong)stack_guard;
  display_mode = *(int *)(_DAT_180c86920 + 0x1ea0);
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
        if ((int)display_index == *(int *)(_DAT_180c86920 + 0x1f10)) {
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
      SetWindowLongPtrW(*(undefined8 *)(window_context + 8), 0xfffffff0, (longlong)window_style);
      window_flags = 0x27;
      vertical_pos = 0;
      horizontal_pos = 0;
      SetWindowPos(*(undefined8 *)(window_context + 8), 0, 0, 0);
      *current_mode_ptr = display_mode;
      needs_update = 1;
    }
    // 调整窗口矩形并设置位置
    AdjustWindowRect(&rect_data, window_style, 0);
    horizontal_pos = adjusted_width_result - (int)rect_data;
    vertical_pos = adjusted_height_result - rect_data._4_4_;
    window_flags = (needs_update ^ 1) * 2 + 0x40;
    SetWindowPos(*(undefined8 *)(window_context + 8), 0, horizontal_offset + (int)rect_data, vertical_offset);
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
      if ((int)uVar10 == *(int *)(_DAT_180c86920 + 0x1f10)) {
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
    SetWindowLongPtrW(*(undefined8 *)(unaff_R13 + 8),0xfffffff0,(longlong)iVar9);
    SetWindowPos(*(undefined8 *)(unaff_R13 + 8),0,0,0,0);
    *unaff_R14 = unaff_EBX;
  }
  AdjustWindowRect(&stack0x00000048,iVar9,0);
  SetWindowPos(*(undefined8 *)(unaff_R13 + 8),0,iStack0000000000000044 + iStack0000000000000048,
               iVar11,in_stack_00000050 - iStack0000000000000048);
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173887(void)
void FUN_180173887(void)

{
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined4 unaff_R12D;
  longlong unaff_R13;
  undefined4 *unaff_R14;
  undefined8 in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000050;
  ulonglong in_stack_00000058;
  
  SetWindowLongPtrW(*(undefined8 *)(unaff_R13 + 8),0xfffffff0,(longlong)unaff_ESI);
  SetWindowPos(*(undefined8 *)(unaff_R13 + 8),0,0,0,0);
  *unaff_R14 = unaff_EBX;
  AdjustWindowRect(&stack0x00000048,unaff_ESI,0);
  SetWindowPos(*(undefined8 *)(unaff_R13 + 8),0,in_stack_00000040._4_4_ + in_stack_00000048,
               unaff_R12D,in_stack_00000050 - in_stack_00000048);
  *unaff_R14 = unaff_EBX;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180173923(void)
void FUN_180173923(void)

{
  undefined4 unaff_EBX;
  undefined4 *unaff_R14;
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
  undefined8 uVar1;
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
  undefined4 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
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





// 函数: void FUN_180173bc0(void)
void FUN_180173bc0(void)

{
  ulonglong in_stack_00008040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00008040 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180173be0(undefined8 param_1,char param_2,undefined4 param_3)
void FUN_180173be0(undefined8 param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != '\0') {
    if (**(char **)(_DAT_180c868d0 + 0x2010) != '\0') {
      **(char **)(_DAT_180c868d0 + 0x2010) = '\0';
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



// 函数: void FUN_180173c40(longlong param_1)
void FUN_180173c40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 auStack_508 [32];
  int iStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_498;
  undefined4 uStack_494;
  code *pcStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  int iStack_440;
  int iStack_43c;
  undefined1 auStack_438 [1024];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_508;
  FUN_180171610();
  iVar13 = *(int *)(_DAT_180c86920 + 0x1d50);
  iVar11 = *(int *)(_DAT_180c86920 + 0x1dc0);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(_DAT_180c86920 + 0x1ea0);
  iVar2 = GetSystemMetrics(0);
  iVar3 = GetSystemMetrics(1);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar10 = 0;
  lVar7 = *(longlong *)(param_1 + 0x20) - lVar1;
  lVar8 = lVar7 >> 0x3f;
  lVar7 = lVar7 / 0x70 + lVar8;
  if (lVar7 != lVar8) {
    do {
      if ((int)uVar10 == *(int *)(_DAT_180c86920 + 0x1f10)) {
        lVar8 = uVar10 * 0x70;
        uVar4 = *(int *)(lVar8 + 0x60 + lVar1) - *(int *)(lVar8 + 0x58 + lVar1);
        uVar9 = (int)uVar4 >> 0x1f;
        uVar5 = *(int *)(lVar8 + 100 + lVar1) - *(int *)(lVar8 + 0x5c + lVar1);
        iVar2 = (uVar4 ^ uVar9) - uVar9;
        uVar4 = (int)uVar5 >> 0x1f;
        iVar3 = (uVar5 ^ uVar4) - uVar4;
        break;
      }
      uVar10 = (ulonglong)((int)uVar10 + 1);
    } while (uVar10 < (ulonglong)(lVar7 - lVar8));
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
  uStack_480 = *(undefined8 *)(param_1 + 0x10);
  uStack_488 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_460 = 0;
  uStack_450 = 0;
  uStack_498 = 0x50;
  uStack_494 = 3;
  uStack_468 = 0;
  puStack_458 = &UNK_180a08a28;
  iStack_4e8 = iVar11;
  uVar6 = LoadImageA(0,&UNK_180a08a08,0,iVar13);
  uStack_468 = CreatePatternBrush(uVar6);
  uStack_4e0 = 0x8070;
  iStack_4e8 = 0;
  uStack_478 = LoadImageA(0,&UNK_180a08a68,1);
  uStack_4e0 = 0x8030;
  iStack_4e8 = 0x10;
  uStack_450 = LoadImageA(0,&UNK_180a08a68,1);
  RegisterClassExW(&uStack_498);
  uStack_448 = 0;
  iStack_440 = iVar13;
  iStack_43c = iVar11;
  AdjustWindowRect(&uStack_448,uVar12,0);
                    // WARNING: Subroutine does not return
  memset(auStack_438,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174080(longlong param_1,longlong param_2)
void FUN_180174080(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  
  plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar3 = (longlong)&UNK_180a21690;
  *plVar3 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (longlong)&UNK_18098bdc8;
  LOCK();
  *(undefined1 *)(plVar3 + 2) = 0;
  UNLOCK();
  plVar3[3] = -1;
  *plVar3 = (longlong)&UNK_180a08c60;
  *(undefined4 *)(plVar3 + 5) = 6;
  plVar3[4] = param_1;
  pplStackX_10 = (longlong **)plVar3;
  plStackX_18 = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3[6] = param_2;
  puVar1 = *(undefined8 **)(param_1 + 0x140);
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



// 函数: void FUN_180174150(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180174150(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  puVar11 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  lVar13 = ((longlong)puVar11 - (longlong)puVar8) / 0x70;
  puVar6 = (undefined8 *)0x0;
  if (lVar13 == 0) {
    lVar13 = 1;
  }
  else {
    lVar13 = lVar13 * 2;
    if (lVar13 == 0) goto LAB_1801741dc;
  }
  puVar6 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar13 * 0x70,*(undefined1 *)(param_1 + 3),param_4,
                         0xfffffffffffffffe);
  puVar11 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
LAB_1801741dc:
  puVar9 = puVar6;
  if (puVar8 != puVar11) {
    lVar12 = (longlong)puVar6 - (longlong)puVar8;
    puVar8 = puVar8 + 1;
    do {
      *puVar9 = &UNK_18098bcb0;
      *(undefined8 *)(lVar12 + (longlong)puVar8) = 0;
      *(undefined4 *)(lVar12 + 8 + (longlong)puVar8) = 0;
      *puVar9 = &UNK_1809fcc58;
      puVar7 = (undefined1 *)((longlong)puVar8 + lVar12 + 0x10);
      *(undefined1 **)(lVar12 + (longlong)puVar8) = puVar7;
      *(undefined4 *)(lVar12 + 8 + (longlong)puVar8) = 0;
      *puVar7 = 0;
      *(undefined4 *)(lVar12 + 8 + (longlong)puVar8) = *(undefined4 *)(puVar8 + 1);
      puVar10 = &DAT_18098bc73;
      if ((undefined *)*puVar8 != (undefined *)0x0) {
        puVar10 = (undefined *)*puVar8;
      }
      strcpy_s(*(undefined8 *)(lVar12 + (longlong)puVar8),0x40,puVar10);
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0x54);
      uVar4 = *(undefined4 *)(puVar8 + 0xb);
      uVar5 = *(undefined4 *)((longlong)puVar8 + 0x5c);
      puVar2 = (undefined4 *)(lVar12 + 0x50 + (longlong)puVar8);
      *puVar2 = *(undefined4 *)(puVar8 + 10);
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(lVar12 + 0x60 + (longlong)puVar8) = puVar8[0xc];
      puVar9 = puVar9 + 0xe;
      puVar1 = puVar8 + 0xd;
      puVar8 = puVar8 + 0xe;
    } while (puVar1 != puVar11);
  }
  FUN_1800b8300(puVar9,param_2);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)puVar9 + 0x5c) = uVar3;
  *(undefined4 *)(puVar9 + 0xc) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 100) = uVar5;
  puVar9[0xd] = *(undefined8 *)(param_2 + 0x68);
  puVar11 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 != puVar11) {
    do {
      *puVar8 = &UNK_18098bcb0;
      puVar8 = puVar8 + 0xe;
    } while (puVar8 != puVar11);
    puVar8 = (undefined8 *)*param_1;
  }
  if (puVar8 == (undefined8 *)0x0) {
    *param_1 = puVar6;
    param_1[1] = puVar9 + 0xe;
    param_1[2] = puVar6 + lVar13 * 0xe;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180174340(undefined **param_1,undefined **param_2,longlong param_3)
void FUN_180174340(undefined **param_1,undefined **param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined1 auStack_108 [32];
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined *apuStack_b8 [11];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined *puStack_50;
  ulonglong uStack_48;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  ppuStack_e8 = param_1;
  if (((longlong *)param_1)[1] != ((longlong *)param_1)[2]) {
    ppuStack_e0 = param_2;
    FUN_1800b8300(apuStack_b8,param_3);
    uStack_60 = *(undefined4 *)(param_3 + 0x58);
    uStack_5c = *(undefined4 *)(param_3 + 0x5c);
    uStack_58 = *(undefined4 *)(param_3 + 0x60);
    uStack_54 = *(undefined4 *)(param_3 + 100);
    puStack_50 = *(undefined **)(param_3 + 0x68);
    lVar11 = ((longlong *)param_1)[1];
    ppuStack_e8 = (undefined **)lVar11;
    FUN_1800b8300(lVar11,lVar11 + -0x70);
    *(undefined4 *)(lVar11 + 0x58) = *(undefined4 *)(lVar11 + -0x18);
    *(undefined4 *)(lVar11 + 0x5c) = *(undefined4 *)(lVar11 + -0x14);
    *(undefined4 *)(lVar11 + 0x60) = *(undefined4 *)(lVar11 + -0x10);
    *(undefined4 *)(lVar11 + 100) = *(undefined4 *)(lVar11 + -0xc);
    *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)(lVar11 + -8);
    lVar11 = ((longlong *)param_1)[1];
    lVar10 = ((lVar11 + -0x70) - (longlong)param_2) / 0x70;
    if (0 < lVar10) {
      puVar8 = (undefined8 *)(lVar11 + 8);
      puVar13 = (undefined8 *)(lVar11 + -0x68);
      do {
        *(undefined4 *)(puVar8 + -0xd) = *(undefined4 *)(puVar13 + -0xd);
        puVar15 = (undefined *)puVar13[-0xe];
        puVar14 = &DAT_18098bc73;
        if (puVar15 != (undefined *)0x0) {
          puVar14 = puVar15;
        }
        strcpy_s(puVar8[-0xe],0x40,puVar14);
        uVar2 = *(undefined4 *)((longlong)puVar13 + -0x1c);
        uVar3 = *(undefined4 *)(puVar13 + -3);
        uVar4 = *(undefined4 *)((longlong)puVar13 + -0x14);
        *(undefined4 *)(puVar8 + -4) = *(undefined4 *)(puVar13 + -4);
        *(undefined4 *)((longlong)puVar8 + -0x1c) = uVar2;
        *(undefined4 *)(puVar8 + -3) = uVar3;
        *(undefined4 *)((longlong)puVar8 + -0x14) = uVar4;
        puVar8[-2] = puVar13[-2];
        lVar10 = lVar10 + -1;
        puVar8 = puVar8 + -0xe;
        puVar13 = puVar13 + -0xe;
      } while (0 < lVar10);
    }
    *param_2 = &UNK_18098bcb0;
    ppuStack_e8 = param_2;
    FUN_1800b8300(param_2,apuStack_b8);
    *(undefined4 *)(param_2 + 0xb) = uStack_60;
    *(undefined4 *)((longlong)param_2 + 0x5c) = uStack_5c;
    *(undefined4 *)(param_2 + 0xc) = uStack_58;
    *(undefined4 *)((longlong)param_2 + 100) = uStack_54;
    param_2[0xd] = puStack_50;
    ((longlong *)param_1)[1] = ((longlong *)param_1)[1] + 0x70;
    ppuStack_e8 = apuStack_b8;
    apuStack_b8[0] = &UNK_18098bcb0;
    goto LAB_1801746f5;
  }
  lVar11 = (longlong)*param_1;
  lVar10 = (((longlong *)param_1)[1] - (longlong)*param_1) / 0x70;
  if (lVar10 == 0) {
    ppuStack_e0 = (undefined **)0x1;
LAB_180174517:
    ppuVar16 = ppuStack_e0;
    ppuVar5 = (undefined **)
              FUN_18062b420(_DAT_180c8ed18,(longlong)ppuStack_e0 * 0x70,
                            (char)((longlong *)param_1)[3]);
  }
  else {
    ppuVar16 = (undefined **)(lVar10 * 2);
    ppuStack_e0 = ppuVar16;
    if (ppuVar16 != (undefined **)0x0) goto LAB_180174517;
    ppuVar5 = (undefined **)0x0;
  }
  ppuVar12 = ppuVar5 + (((longlong)param_2 - lVar11) / 0x70) * 0xe;
  ppuStack_d8 = ppuVar12;
  FUN_1800b8300(ppuVar12,param_3);
  uVar2 = *(undefined4 *)(param_3 + 0x5c);
  uVar3 = *(undefined4 *)(param_3 + 0x60);
  uVar4 = *(undefined4 *)(param_3 + 100);
  *(undefined4 *)(ppuVar12 + 0xb) = *(undefined4 *)(param_3 + 0x58);
  *(undefined4 *)((longlong)ppuVar12 + 0x5c) = uVar2;
  *(undefined4 *)(ppuVar12 + 0xc) = uVar3;
  *(undefined4 *)((longlong)ppuVar12 + 100) = uVar4;
  ppuVar12[0xd] = *(undefined **)(param_3 + 0x68);
  ppuVar12 = (undefined **)*param_1;
  ppuVar9 = ppuVar5;
  if (ppuVar12 != param_2) {
    lVar11 = (longlong)ppuVar5 - (longlong)ppuVar12;
    ppuVar12 = ppuVar12 + 1;
    do {
      *ppuVar9 = &UNK_18098bcb0;
      *(undefined8 *)((longlong)ppuVar12 + lVar11) = 0;
      *(undefined4 *)((longlong)ppuVar12 + lVar11 + 8) = 0;
      *ppuVar9 = &UNK_1809fcc58;
      puVar6 = (undefined1 *)(lVar11 + 0x10 + (longlong)ppuVar12);
      *(undefined1 **)((longlong)ppuVar12 + lVar11) = puVar6;
      *(undefined4 *)((longlong)ppuVar12 + lVar11 + 8) = 0;
      *puVar6 = 0;
      *(undefined4 *)((longlong)ppuVar12 + lVar11 + 8) = *(undefined4 *)(ppuVar12 + 1);
      puVar15 = &DAT_18098bc73;
      if (*ppuVar12 != (undefined *)0x0) {
        puVar15 = *ppuVar12;
      }
      ppuStack_d8 = ppuVar9;
      ppuStack_d0 = ppuVar9;
      strcpy_s(*(undefined8 *)((longlong)ppuVar12 + lVar11),0x40,puVar15);
      uVar2 = *(undefined4 *)((longlong)ppuVar12 + 0x54);
      uVar3 = *(undefined4 *)(ppuVar12 + 0xb);
      uVar4 = *(undefined4 *)((longlong)ppuVar12 + 0x5c);
      puVar1 = (undefined4 *)((longlong)ppuVar12 + lVar11 + 0x50);
      *puVar1 = *(undefined4 *)(ppuVar12 + 10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(undefined **)((longlong)ppuVar12 + lVar11 + 0x60) = ppuVar12[0xc];
      ppuVar9 = ppuVar9 + 0xe;
      ppuVar7 = ppuVar12 + 0xd;
      ppuVar16 = ppuStack_e0;
      ppuVar12 = ppuVar12 + 0xe;
    } while (ppuVar7 != param_2);
  }
  ppuVar9 = ppuVar9 + 0xe;
  ppuVar12 = (undefined **)((longlong *)param_1)[1];
  if (param_2 != ppuVar12) {
    lVar11 = (longlong)ppuVar9 - (longlong)param_2;
    ppuVar16 = param_2 + 1;
    do {
      *ppuVar9 = &UNK_18098bcb0;
      *(undefined8 *)(lVar11 + (longlong)ppuVar16) = 0;
      *(undefined4 *)(lVar11 + 8 + (longlong)ppuVar16) = 0;
      *ppuVar9 = &UNK_1809fcc58;
      puVar6 = (undefined1 *)((longlong)ppuVar16 + lVar11 + 0x10);
      *(undefined1 **)(lVar11 + (longlong)ppuVar16) = puVar6;
      *(undefined4 *)(lVar11 + 8 + (longlong)ppuVar16) = 0;
      *puVar6 = 0;
      *(undefined4 *)(lVar11 + 8 + (longlong)ppuVar16) = *(undefined4 *)(ppuVar16 + 1);
      puVar15 = &DAT_18098bc73;
      if (*ppuVar16 != (undefined *)0x0) {
        puVar15 = *ppuVar16;
      }
      ppuStack_d8 = ppuVar9;
      ppuStack_d0 = ppuVar9;
      strcpy_s(*(undefined8 *)(lVar11 + (longlong)ppuVar16),0x40,puVar15);
      uVar2 = *(undefined4 *)((longlong)ppuVar16 + 0x54);
      uVar3 = *(undefined4 *)(ppuVar16 + 0xb);
      uVar4 = *(undefined4 *)((longlong)ppuVar16 + 0x5c);
      puVar1 = (undefined4 *)(lVar11 + 0x50 + (longlong)ppuVar16);
      *puVar1 = *(undefined4 *)(ppuVar16 + 10);
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(undefined **)(lVar11 + 0x60 + (longlong)ppuVar16) = ppuVar16[0xc];
      ppuVar9 = ppuVar9 + 0xe;
      ppuVar7 = ppuVar16 + 0xd;
      ppuVar16 = ppuVar16 + 0xe;
    } while (ppuVar7 != ppuVar12);
    ppuVar12 = (undefined **)ppuStack_e8[1];
    param_1 = ppuStack_e8;
    ppuVar16 = ppuStack_e0;
  }
  ppuVar7 = (undefined **)*param_1;
  ppuStack_e8 = ppuVar7;
  if (ppuVar7 != ppuVar12) {
    do {
      ppuStack_d0 = ppuVar7;
      *ppuStack_d0 = &UNK_18098bcb0;
      ppuStack_e8 = ppuStack_d0 + 0xe;
      ppuVar7 = ppuStack_e8;
    } while (ppuStack_e8 != ppuVar12);
    ppuVar7 = (undefined **)*param_1;
  }
  if (ppuVar7 != (undefined **)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (undefined *)ppuVar5;
  ((longlong *)param_1)[1] = (longlong)ppuVar9;
  ((longlong *)param_1)[2] = (longlong)(ppuVar5 + (longlong)ppuVar16 * 0xe);
LAB_1801746f5:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_108);
}



undefined8 *
FUN_180174720(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



ulonglong FUN_180174770(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plStack_50;
  char cStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
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
        *(undefined1 *)(param_1 + 0x3d) = 0;
      }
      else {
        FUN_1800495d0(param_1 + 0x2a,&plStack_50);
        uVar4 = (ulonglong)*(byte *)(param_1 + 0x3d);
        *(undefined1 *)(param_1 + 0x3d) = 0;
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



undefined8 FUN_180174900(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
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
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
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
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined8 *)param_1[1];
  for (puVar4 = (undefined8 *)*param_1; puVar4 != puVar2; puVar4 = puVar4 + 0xe) {
    *puVar4 = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
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



