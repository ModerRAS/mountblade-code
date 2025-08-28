#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part190.c - 6 个函数

// 函数: void process_window_messages(int64_t window_context, uint64_t window_handle, uint message_type, int64_t param_4,
//                               uint64_t param_5)
// 功能: 处理Windows窗口消息，包括鼠标移动、按键、窗口控制等
// 参数: window_context - 窗口上下文, window_handle - 窗口句柄, message_type - 消息类型, param_4/5 - 消息参数
void process_window_messages(int64_t window_context, uint64_t window_handle, uint message_type, int64_t param_4,
                             uint64_t param_5)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qa;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  float fVar23;
  int8_t auStack_8d8 [32];
  uint uStack_8b8;
  int32_t auStack_8a8 [2];
  int iStack_8a0;
  int iStack_89c;
  int iStack_898;
  int32_t uStack_894;
  int iStack_890;
  int32_t uStack_88c;
  uint uStack_888;
  uint64_t uStack_880;
  int32_t uStack_878;
  char cStack_874;
  uint64_t uStack_870;
  int32_t uStack_868;
  char cStack_864;
  uint64_t uStack_860;
  int32_t auStack_858 [2];
  uint64_t uStack_850;
  int iStack_848;
  int iStack_844;
  int32_t uStack_838;
  uint64_t uStack_830;
  int iStack_828;
  int iStack_824;
  int32_t uStack_818;
  int32_t uStack_814;
  uint64_t uStack_810;
  int32_t uStack_7f8;
  int32_t uStack_7f4;
  uint64_t uStack_7f0;
  int32_t uStack_7d8;
  int32_t uStack_7d4;
  uint64_t uStack_7d0;
  int32_t uStack_7b8;
  int32_t uStack_7b4;
  uint64_t uStack_7b0;
  int32_t uStack_798;
  int32_t uStack_794;
  uint64_t uStack_790;
  int32_t uStack_778;
  int32_t uStack_774;
  uint64_t uStack_770;
  int32_t uStack_758;
  int32_t uStack_754;
  uint64_t uStack_750;
  int32_t uStack_738;
  int32_t uStack_734;
  uint64_t uStack_730;
  int32_t uStack_718;
  int32_t uStack_714;
  uint64_t uStack_710;
  int32_t uStack_6f8;
  int iStack_6f4;
  uint64_t uStack_6f0;
  int32_t uStack_6d8;
  int iStack_6d4;
  uint64_t uStack_6d0;
  int32_t uStack_6b8;
  int iStack_6b4;
  uint64_t uStack_6b0;
  int32_t uStack_698;
  uint64_t uStack_690;
  int iStack_680;
  int iStack_678;
  int iStack_674;
  int32_t uStack_670;
  uint64_t uStack_668;
  int8_t auStack_658 [28];
  int aiStack_63c [377];
  uint64_t uStack_58;
  
  lVar3 = system_operation_state;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_8d8;
  uStack_888 = param_3;
  if (0x120 < param_3) {
    sVar5 = (short)((uint64_t)param_4 >> 0x10);
    switch(param_3) {
    case 0x200:
      if ((*(char *)(system_operation_state + 0x1609) != '\0') &&
         (*(char *)(core_system_data_memory + 0x2028) != '\0')) {
        iStack_898 = (int)(short)param_5;
        iStack_890 = (int)(short)(param_5 >> 0x10);
        if (*(int *)(system_module_state + 0x850) == 0) {
          iVar15 = 0;
          auStack_8a8[0] = GetMessageTime();
          uStack_880 = *(uint64_t *)(param_1 + 0xa4);
          ClientToScreen(param_2,&uStack_880);
          iStack_8a0 = iStack_898;
          iStack_89c = iStack_890;
          *(uint64_t *)(param_1 + 0xa4) = CONCAT44(iStack_890,iStack_898);
          ClientToScreen(param_2,&iStack_8a0);
          iStack_674 = iStack_89c;
          uStack_670 = auStack_8a8[0];
          iStack_678 = iStack_8a0;
          uStack_8b8 = 1;
          uStack_668 = 0;
          iVar6 = GetMouseMovePointsEx(0x18,&iStack_678,auStack_658,0x40);
          if ((1 < iVar6) && (0 < iVar6 + -1)) {
            piVar12 = aiStack_63c;
            iVar13 = iVar15;
            iVar16 = iVar15;
            do {
              if (((uint)piVar12[-5] < *(uint *)(param_1 + 0xa0)) ||
                 (((piVar12[-5] == *(uint *)(param_1 + 0xa0) && (piVar12[-7] == (int)uStack_880)) &&
                  (piVar12[-6] == uStack_880._4_4_)))) break;
              iVar13 = iVar13 + 1;
              iVar15 = iVar15 + (piVar12[-7] - piVar12[-1]);
              piVar1 = piVar12 + -6;
              iVar2 = *piVar12;
              piVar12 = piVar12 + 6;
              iVar16 = iVar16 + (*piVar1 - iVar2);
            } while (iVar13 < iVar6 + -1);
            if ((iVar15 != 0) || (iVar16 != 0)) {
              uStack_850 = 0;
              auStack_858[0] = 0;
              iStack_848 = iVar15;
              iStack_844 = iVar16;
              FUN_1801edeb0(extraout_XMM0_Qa,auStack_858);
            }
          }
          *(int32_t *)(param_1 + 0xa0) = auStack_8a8[0];
        }
        else {
          uVar10 = (uint64_t)(*(uint *)(param_1 + 0x13c) & 1);
          uVar8 = *(int *)(param_1 + 0xb4 + uVar10 * 0x48) -
                  *(int *)(param_1 + 0xac + uVar10 * 0x48);
          uVar14 = *(int *)(param_1 + 0xb8 + uVar10 * 0x48) -
                   *(int *)(param_1 + 0xb0 + uVar10 * 0x48);
          uVar7 = 1;
          if (1 < uVar8) {
            uVar7 = uVar8;
          }
          fVar23 = (float)(int)uVar7 * *(float *)(system_operation_state + 0x17e0);
          iVar6 = (int)fVar23;
          fVar20 = fVar23;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar23)) {
            auVar21._4_4_ = fVar23;
            auVar21._0_4_ = fVar23;
            auVar21._8_8_ = 0;
            uVar7 = movmskps(uVar7,auVar21);
            uVar7 = uVar7 & 1;
            fVar20 = (float)(int)(iVar6 - uVar7);
          }
          uVar8 = 1;
          if (1 < uVar14) {
            uVar8 = uVar14;
          }
          fVar22 = (float)(int)uVar8 * *(float *)(system_operation_state + 0x17e4);
          iVar6 = (int)fVar22;
          fVar18 = fVar22;
          if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar22)) {
            auVar19._4_4_ = fVar22;
            auVar19._0_4_ = fVar22;
            auVar19._8_8_ = 0;
            uVar7 = movmskps(uVar7,auVar19);
            fVar18 = (float)(int)(iVar6 - (uVar7 & 1));
          }
          iVar6 = (int)fVar20;
          if (0.5 < fVar23 - fVar20) {
            iVar6 = (int)fVar20 + 1;
          }
          iVar15 = (int)fVar18;
          if (0.5 < fVar22 - fVar18) {
            iVar15 = (int)fVar18 + 1;
          }
          if ((iStack_898 - iVar6 != 0) || (iStack_890 - iVar15 != 0)) {
            uStack_830 = 0;
            uStack_838 = 0;
            iStack_828 = iStack_898 - iVar6;
            iStack_824 = iStack_890 - iVar15;
            goto LAB_1801732b6;
          }
        }
      }
      break;
    case 0x201:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_7f0 = 0;
        uStack_7f8 = 1;
        uStack_7f4 = 0xe0;
        goto LAB_1801732b6;
      }
      break;
    case 0x202:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        uStack_7d0 = 0;
        uStack_7d8 = 2;
        uStack_7d4 = 0xe0;
        goto LAB_1801732b6;
      }
      break;
    case 0x203:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_810 = 0;
        uStack_818 = 1;
        uStack_814 = 0xe0;
        goto LAB_1801732b6;
      }
      break;
    case 0x204:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_790 = 0;
        uStack_798 = 1;
        uStack_794 = 0xe1;
        goto LAB_1801732b6;
      }
      break;
    case 0x205:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        uStack_770 = 0;
        uStack_778 = 2;
        uStack_774 = 0xe1;
        goto LAB_1801732b6;
      }
      break;
    case 0x206:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_7b0 = 0;
        uStack_7b8 = 1;
        uStack_7b4 = 0xe1;
        goto LAB_1801732b6;
      }
      break;
    case 0x207:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_730 = 0;
        uStack_738 = 1;
        uStack_734 = 0xe2;
        goto LAB_1801732b6;
      }
      break;
    case 0x208:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        uStack_710 = 0;
        uStack_718 = 2;
        uStack_714 = 0xe2;
        goto LAB_1801732b6;
      }
      break;
    case 0x209:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_750 = 0;
        uStack_758 = 1;
        uStack_754 = 0xe2;
        goto LAB_1801732b6;
      }
      break;
    case 0x20a:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        uStack_690 = 0;
        iStack_680 = (int)sVar5;
        uStack_698 = 3;
        goto LAB_1801732b6;
      }
      break;
    case 0x20b:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_6d0 = 0;
        uStack_6d8 = 1;
        iStack_6d4 = (sVar5 != 1) + 0xe3;
        goto LAB_1801732b6;
      }
      break;
    case 0x20c:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        uStack_6b0 = 0;
        uStack_6b8 = 2;
        iStack_6b4 = (sVar5 != 1) + 0xe3;
        goto LAB_1801732b6;
      }
      break;
    case 0x20d:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        uStack_6f0 = 0;
        uStack_6f8 = 1;
        iStack_6f4 = (sVar5 != 1) + 0xe3;
        goto LAB_1801732b6;
      }
      break;
    case 0x219:
      if (*(int64_t *)(core_system_data_memory + 0x2018) != 0) {
        FUN_18030f2c0();
      }
    }
    goto LAB_1801732bb;
  }
  if (param_3 == 0x120) goto LAB_1801732ce;
  if (param_3 < 0x11) {
    if (param_3 == 0x10) {
      if (*(char *)(system_main_module_state + 0x1ec) == '\0') goto LAB_1801732ce;
      *(int8_t *)(system_main_module_state + 0x1ed) = 0;
    }
    else {
      if (param_3 == 2) {
        PostQuitMessage(0);
        goto LAB_1801732ce;
      }
      if (param_3 == 6) {
        if ((system_main_module_state != 0) && (system_operation_state != 0)) {
          if (param_4 - 1U < 2) {
            if (*(char *)(param_1 + 0x3c) != '\0') {
              uVar17 = FUN_18005ca20(SYSTEM_STATE_MANAGER,2);
              uStack_8b8 = uStack_8b8 & 0xffffff00;
              func_0x000180055000(uVar17,(int)*(float *)(system_operation_state + 0x17ec),
                                  (int)*(float *)(system_operation_state + 0x17f0));
              *(int8_t *)(param_1 + 0x3c) = 0;
            }
          }
          else if (*(int *)(param_1 + 0x38) == 2) {
            ShowWindow(param_2,7);
            ChangeDisplaySettingsA(0,0);
            uVar17 = FUN_18005ca20(SYSTEM_STATE_MANAGER,0);
            uStack_8b8 = uStack_8b8 & 0xffffff00;
            func_0x000180055000(uVar17,(int)*(float *)(system_operation_state + 0x17ec),
                                (int)*(float *)(system_operation_state + 0x17f0));
            *(int8_t *)(param_1 + 0x3c) = 1;
          }
          goto LAB_1801732ce;
        }
      }
      else if (param_3 == 7) {
        if (system_operation_state != 0) {
          FUN_180092940(system_operation_state,*(int8_t *)(system_operation_state + 0x160a));
          FUN_180093af0(system_operation_state);
        }
      }
      else if (param_3 == 8) {
        if ((system_operation_state != 0) && (*(char *)(system_operation_state + 0x1609) != '\x01')) {
          FUN_1801723a0(*(uint64_t *)(system_main_module_state + 8),
                        *(char *)(core_system_data_memory + 0x2028) != '\0',
                        *(int32_t *)(system_operation_state + 0x160c));
          *(int8_t *)(lVar3 + 0x1609) = 1;
        }
        lVar3 = core_system_data_memory;
        lVar11 = 0x100;
        *(uint64_t *)(core_system_data_memory + 0x2038) = *(uint64_t *)(core_system_data_memory + 0x2030);
        puVar9 = (uint64_t *)(lVar3 + 0x1804);
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
    }
    goto LAB_1801732bb;
  }
  cVar4 = (char)(param_5 >> 0x10);
  switch(param_3) {
  case 0x20:
    if (((system_operation_state != 0) && (*(char *)(system_operation_state + 0x1609) != '\0')) &&
       (cVar4 = FUN_1801720a0(param_1,*(int32_t *)(system_operation_state + 0x160c)), cVar4 != '\0'))
    goto LAB_1801732ce;
    break;
  case 0x24:
    *(int32_t *)(param_5 + 0x18) = 0x140;
    *(int32_t *)(param_5 + 0x1c) = 0xf0;
    break;
  case 0xff:
    uStack_8b8 = 0x18;
    iVar6 = GetRawInputData(param_5,0x10000003,0,auStack_8a8);
    if (iVar6 == 0) {
      uStack_8b8 = 0x18;
      GetRawInputData(param_5,0x10000003,&system_data_9420,auStack_8a8);
      if (*(char *)(param_1 + 0x3d) != '\0') {
        core_system_config_memory =
             core_system_config_memory >> 2 & 3 | (core_system_config_memory & 3) << 2 | core_system_config_memory & 0xfffffff0;
      }
      if (core_system_config_memory == 0) {
        *(int8_t *)(core_system_data_memory + 0x2028) = 1;
      }
      if (*(char *)(system_operation_state + 0x1609) == '\0') {
        FUN_180173470(param_1);
      }
    }
    break;
  case 0x100:
  case 0x104:
    if (((short)param_5 == 1) && ((param_5 >> 0x1e & 1) == 0)) {
      uStack_870 = 0;
      uStack_878 = 4;
      cStack_874 = cVar4 + -0x80;
      if ((param_5 & 0x1000000) == 0) {
        cStack_874 = cVar4;
      }
      goto LAB_1801732b6;
    }
    break;
  case 0x101:
  case 0x105:
    uStack_860 = 0;
    uStack_868 = 5;
    cStack_864 = cVar4 + -0x80;
    if ((param_5 & 0x1000000) == 0) {
      cStack_864 = cVar4;
    }
    goto LAB_1801732b6;
  case 0x102:
    iStack_890 = 6;
    uStack_88c = (int32_t)param_4;
    goto LAB_1801732b6;
  case 0x109:
    if (param_4 == 0xffff) goto LAB_1801732ce;
    iStack_898 = 6;
    uStack_894 = (int)param_5;
LAB_1801732b6:
    FUN_1801edeb0();
    break;
  case 0x112:
    if (param_4 == 0xf100) {
      if ((int64_t)(param_5 & 0xffffffffffff0000) < 1) goto LAB_1801732ce;
    }
    else if ((param_4 == 0xf140) || (param_4 == 0xf170)) goto LAB_1801732ce;
  }
LAB_1801732bb:
  DefWindowProcW(param_2,uStack_888,param_4,param_5);
LAB_1801732ce:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (uint64_t)auStack_8d8);
}





// 函数: void process_mouse_movement_events(void)
// 功能: 处理鼠标移动事件，跟踪鼠标轨迹和速度
void process_mouse_movement_events(void)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int iVar5;
  int *piVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar7;
  int iVar8;
  int iVar9;
  int32_t uStack000000000000003c;
  int32_t in_stack_00000040;
  int32_t in_stack_00000048;
  int iStack000000000000005c;
  
  iVar8 = 0;
  uVar4 = GetMessageTime();
  uVar3 = *(uint64_t *)(unaff_RSI + 0xa4);
  ClientToScreen();
  uStack000000000000003c = in_stack_00000048;
  *(uint64_t *)(unaff_RSI + 0xa4) = CONCAT44(in_stack_00000048,in_stack_00000040);
  ClientToScreen();
  *(int32_t *)(unaff_RBP + 0x164) = uStack000000000000003c;
  *(int32_t *)(unaff_RBP + 0x168) = uVar4;
  *(int32_t *)(unaff_RBP + 0x160) = in_stack_00000040;
  *(uint64_t *)(unaff_RBP + 0x170) = 0;
  iVar5 = GetMouseMovePointsEx(0x18,unaff_RBP + 0x160,unaff_RBP + 0x180,0x40,1);
  if ((1 < iVar5) && (0 < iVar5 + -1)) {
    piVar6 = (int *)(unaff_RBP + 0x19c);
    iStack000000000000005c = (int)((uint64_t)uVar3 >> 0x20);
    iVar7 = iVar8;
    iVar9 = iVar8;
    do {
      if (((uint)piVar6[-5] < *(uint *)(unaff_RSI + 0xa0)) ||
         (((piVar6[-5] == *(uint *)(unaff_RSI + 0xa0) && (piVar6[-7] == (int)uVar3)) &&
          (piVar6[-6] == iStack000000000000005c)))) break;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + (piVar6[-7] - piVar6[-1]);
      piVar1 = piVar6 + -6;
      iVar2 = *piVar6;
      piVar6 = piVar6 + 6;
      iVar9 = iVar9 + (*piVar1 - iVar2);
    } while (iVar7 < iVar5 + -1);
    if ((iVar8 != 0) || (iVar9 != 0)) {
      *(uint64_t *)(unaff_RBP + -0x78) = 0;
      *(int32_t *)(unaff_RBP + -0x80) = 0;
      *(int *)(unaff_RBP + -0x70) = iVar8;
      *(int *)(unaff_RBP + -0x6c) = iVar9;
      FUN_1801edeb0();
    }
  }
  *(int32_t *)(unaff_RSI + 0xa0) = uVar4;
  DefWindowProcW();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x780) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_mouse_position_delta(int64_t window_context, uint64_t window_handle, int delta_x, int delta_y)
// 功能: 处理鼠标位置变化，计算坐标增量并触发相应事件
// 参数: window_context - 窗口上下文, window_handle - 窗口句柄, delta_x/delta_y - 坐标增量
void process_mouse_position_delta(int64_t window_context, uint64_t window_handle, int delta_x, int delta_y)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  int8_t auVar10 [16];
  float fVar11;
  float fVar12;
  
  uVar5 = (uint64_t)(*(uint *)(param_1 + 0x13c) & 1);
  uVar3 = *(int *)(unaff_RSI + 0xb4 + uVar5 * 0x48) - *(int *)(unaff_RSI + 0xac + uVar5 * 0x48);
  uVar6 = *(int *)(unaff_RSI + 0xb8 + uVar5 * 0x48) - *(int *)(unaff_RSI + 0xb0 + uVar5 * 0x48);
  uVar2 = 1;
  if (1 < uVar3) {
    uVar2 = uVar3;
  }
  fVar12 = (float)(int)uVar2 * *(float *)(system_operation_state + 0x17e0);
  iVar4 = (int)fVar12;
  fVar9 = fVar12;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar12)) {
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar12;
    auVar10._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar10);
    uVar2 = uVar2 & 1;
    fVar9 = (float)(int)(iVar4 - uVar2);
  }
  uVar3 = 1;
  if (1 < uVar6) {
    uVar3 = uVar6;
  }
  fVar11 = (float)(int)uVar3 * *(float *)(system_operation_state + 0x17e4);
  iVar4 = (int)fVar11;
  fVar7 = fVar11;
  if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar11)) {
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar11;
    auVar8._8_8_ = 0;
    uVar2 = movmskps(uVar2,auVar8);
    fVar7 = (float)(int)(iVar4 - (uVar2 & 1));
  }
  iVar4 = (int)fVar9;
  if (0.5 < fVar12 - fVar9) {
    iVar4 = (int)fVar9 + 1;
  }
  iVar1 = (int)fVar7;
  if (0.5 < fVar11 - fVar7) {
    iVar1 = (int)fVar7 + 1;
  }
  if ((param_4 - iVar4 != 0) || (param_3 - iVar1 != 0)) {
    *(uint64_t *)(unaff_RBP + -0x58) = 0;
    *(int32_t *)(unaff_RBP + -0x60) = 0;
    *(int *)(unaff_RBP + -0x50) = param_4 - iVar4;
    *(int *)(unaff_RBP + -0x4c) = param_3 - iVar1;
    FUN_1801edeb0(iVar1,unaff_RBP + -0x60);
  }
  DefWindowProcW();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x780) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_raw_mouse_input(float window_context, uint64_t input_data)
// 功能: 处理原始鼠标输入数据，转换为游戏内的鼠标事件
// 参数: window_context - 窗口上下文, input_data - 输入数据
void process_raw_mouse_input(float window_context, uint64_t input_data)

{
  ushort uVar1;
  int64_t in_RCX;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  uint64_t uStackX_10;
  uint64_t auStackX_18 [2];
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
  if (core_system_config_memory != 0) {
    return;
  }
  uStackX_10 = param_2;
  if ((system_data_9438 & 1) == 0) {
    fVar3 = (float)core_system_config_memory;
    fVar4 = (float)core_system_config_memory;
LAB_180173542:
    if ((fVar3 != 0.0) || (fVar4 != 0.0)) {
      iStack_28 = (int)fVar3;
      uStack_30 = 0;
      uStack_38 = 0;
      iStack_24 = (int)fVar4;
      FUN_1801edeb0(param_1,&uStack_38);
    }
  }
  else {
    if (**(char **)(core_system_data_memory + 0x2010) != '\0') {
      **(char **)(core_system_data_memory + 0x2010) = '\0';
    }
    if (system_operation_state != 0) {
      GetCursorPos(auStackX_18);
      uStackX_10 = auStackX_18[0];
      ScreenToClient(*(uint64_t *)(in_RCX + 8),&uStackX_10);
      fVar3 = (float)(int)uStackX_10 -
              *(float *)(system_operation_state + 0x17e0) * *(float *)(system_operation_state + 0x17ec);
      param_1 = *(float *)(system_operation_state + 0x17e4) * *(float *)(system_operation_state + 0x17f0);
      fVar4 = (float)uStackX_10._4_4_ - param_1;
      goto LAB_180173542;
    }
  }
  uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  uVar1 = core_system_config_memory & 2;
  if ((core_system_config_memory & 1) != 0) {
    uStack_30 = 0;
    uStack_38 = 1;
    uStack_34 = 0xe0;
    FUN_1801edeb0(uVar2,&uStack_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if (uVar1 != 0) {
    uStack_30 = 0;
    uStack_38 = 2;
    uStack_34 = 0xe0;
    FUN_1801edeb0(uVar2,&uStack_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 2 & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      uStack_38 = 2;
      goto LAB_1801735fc;
    }
  }
  else {
    uStack_38 = 1;
LAB_1801735fc:
    uStack_30 = 0;
    uStack_34 = 0xe1;
    FUN_1801edeb0(uVar2,&uStack_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 4 & 1) == 0) {
    if ((uVar2 >> 5 & 1) != 0) {
      uStack_38 = 2;
      goto LAB_18017363d;
    }
  }
  else {
    uStack_38 = 1;
LAB_18017363d:
    uStack_30 = 0;
    uStack_34 = 0xe2;
    FUN_1801edeb0(uVar2,&uStack_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 6 & 1) == 0) {
    if ((uVar2 >> 7 & 1) != 0) {
      uStack_38 = 2;
      goto LAB_18017367e;
    }
  }
  else {
    uStack_38 = 1;
LAB_18017367e:
    uStack_30 = 0;
    uStack_34 = 0xe3;
    FUN_1801edeb0(uVar2,&uStack_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 8 & 1) == 0) {
    if ((uVar2 >> 9 & 1) == 0) goto LAB_1801736de;
    uStack_38 = 2;
  }
  else {
    uStack_38 = 1;
  }
  uStack_30 = 0;
  uStack_34 = 0xe4;
  FUN_1801edeb0(uVar2,&uStack_38);
  uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
LAB_1801736de:
  if ((uVar2 & 0x400) != 0) {
    iStack_20 = (int)core_system_config_memory;
    uStack_30 = 0;
    uStack_38 = 3;
    FUN_1801edeb0(uVar2,&uStack_38);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void handle_mouse_button_events(float window_context)
// 功能: 处理鼠标按钮事件，包括按下、释放和滚轮操作
// 参数: window_context - 窗口上下文
void handle_mouse_button_events(float window_context)

{
  uint64_t uVar1;
  ushort uVar2;
  uint64_t uVar3;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  bool in_ZF;
  float fVar4;
  float fVar5;
  
  if (in_ZF) {
    fVar4 = (float)core_system_config_memory;
    fVar5 = (float)core_system_config_memory;
LAB_180173542:
    if ((fVar4 != 0.0) || (fVar5 != 0.0)) {
      *(uint64_t *)(unaff_RBP + -0x28) = 0;
      *(int32_t *)(unaff_RBP + -0x30) = 0;
      *(int *)(unaff_RBP + -0x20) = (int)fVar4;
      *(int *)(unaff_RBP + -0x1c) = (int)fVar5;
      FUN_1801edeb0(param_1,unaff_RBP + -0x30);
    }
  }
  else {
    if (**(char **)(core_system_data_memory + 0x2010) != '\0') {
      **(char **)(core_system_data_memory + 0x2010) = '\0';
    }
    if (system_operation_state != 0) {
      GetCursorPos(unaff_RBP + 0x20);
      uVar1 = *(uint64_t *)(unaff_RBX + 8);
      *(uint64_t *)(unaff_RBP + 0x18) = *(uint64_t *)(unaff_RBP + 0x20);
      ScreenToClient(uVar1,unaff_RBP + 0x18);
      fVar4 = (float)*(int *)(unaff_RBP + 0x18) -
              *(float *)(system_operation_state + 0x17e0) * *(float *)(system_operation_state + 0x17ec);
      param_1 = *(float *)(system_operation_state + 0x17e4) * *(float *)(system_operation_state + 0x17f0);
      fVar5 = (float)*(int *)(unaff_RBP + 0x1c) - param_1;
      goto LAB_180173542;
    }
  }
  uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  uVar2 = core_system_config_memory & 2;
  if ((core_system_config_memory & 1) != 0) {
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 1;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
    FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
    uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if (uVar2 != 0) {
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 2;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
    FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
    uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar3 >> 2 & 1) == 0) {
    if ((uVar3 >> 3 & 1) != 0) {
      *(int32_t *)(unaff_RBP + -0x30) = 2;
      goto LAB_1801735fc;
    }
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
LAB_1801735fc:
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe1;
    FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
    uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar3 >> 4 & 1) == 0) {
    if ((uVar3 >> 5 & 1) != 0) {
      *(int32_t *)(unaff_RBP + -0x30) = 2;
      goto LAB_18017363d;
    }
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
LAB_18017363d:
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe2;
    FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
    uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar3 >> 6 & 1) == 0) {
    if ((uVar3 >> 7 & 1) != 0) {
      *(int32_t *)(unaff_RBP + -0x30) = 2;
      goto LAB_18017367e;
    }
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
LAB_18017367e:
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe3;
    FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
    uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar3 >> 8 & 1) == 0) {
    if ((uVar3 >> 9 & 1) == 0) goto LAB_1801736de;
    *(int32_t *)(unaff_RBP + -0x30) = 2;
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
  }
  *(uint64_t *)(unaff_RBP + -0x28) = 0;
  *(int32_t *)(unaff_RBP + -0x2c) = 0xe4;
  FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
  uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
LAB_1801736de:
  if ((uVar3 & 0x400) != 0) {
    *(int *)(unaff_RBP + -0x18) = (int)core_system_config_memory;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 3;
    FUN_1801edeb0(uVar3,unaff_RBP + -0x30);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_mouse_capture_events(uint64_t event_data)
// 功能: 处理鼠标捕获相关事件，管理窗口焦点和输入状态
// 参数: event_data - 事件数据
void process_mouse_capture_events(uint64_t event_data)

{
  uint64_t uVar1;
  char unaff_BL;
  int64_t unaff_RBP;
  
  *(uint64_t *)(unaff_RBP + -0x28) = 0;
  *(int32_t *)(unaff_RBP + -0x30) = 1;
  *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
  FUN_1801edeb0(param_1,unaff_RBP + -0x30);
  uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  if (unaff_BL != '\0') {
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 2;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
    FUN_1801edeb0(uVar1,unaff_RBP + -0x30);
    uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) != 0) {
      *(int32_t *)(unaff_RBP + -0x30) = 2;
      goto LAB_1801735fc;
    }
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
LAB_1801735fc:
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe1;
    FUN_1801edeb0(uVar1,unaff_RBP + -0x30);
    uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 5 & 1) != 0) {
      *(int32_t *)(unaff_RBP + -0x30) = 2;
      goto LAB_18017363d;
    }
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
LAB_18017363d:
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe2;
    FUN_1801edeb0(uVar1,unaff_RBP + -0x30);
    uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar1 >> 6 & 1) == 0) {
    if ((uVar1 >> 7 & 1) != 0) {
      *(int32_t *)(unaff_RBP + -0x30) = 2;
      goto LAB_18017367e;
    }
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
LAB_18017367e:
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe3;
    FUN_1801edeb0(uVar1,unaff_RBP + -0x30);
    uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar1 >> 8 & 1) == 0) {
    if ((uVar1 >> 9 & 1) == 0) goto LAB_1801736de;
    *(int32_t *)(unaff_RBP + -0x30) = 2;
  }
  else {
    *(int32_t *)(unaff_RBP + -0x30) = 1;
  }
  *(uint64_t *)(unaff_RBP + -0x28) = 0;
  *(int32_t *)(unaff_RBP + -0x2c) = 0xe4;
  FUN_1801edeb0(uVar1,unaff_RBP + -0x30);
  uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
LAB_1801736de:
  if ((uVar1 & 0x400) != 0) {
    *(int *)(unaff_RBP + -0x18) = (int)core_system_config_memory;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 3;
    FUN_1801edeb0(uVar1,unaff_RBP + -0x30);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



