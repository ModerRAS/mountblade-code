#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part190.c - 6 个函数
// 函数: void GenericFunction_1801727d0(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4,
void GenericFunction_1801727d0(int64_t param_1,uint64_t param_2,uint param_3,int64_t param_4,
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
  int8_t stack_array_8d8 [32];
  uint local_var_8b8;
  int32_t stack_array_8a8 [2];
  int iStack_8a0;
  int iStack_89c;
  int iStack_898;
  int32_t local_var_894;
  int iStack_890;
  int32_t local_var_88c;
  uint local_var_888;
  uint64_t local_var_880;
  int32_t local_var_878;
  char cStack_874;
  uint64_t local_var_870;
  int32_t local_var_868;
  char cStack_864;
  uint64_t local_var_860;
  int32_t stack_array_858 [2];
  uint64_t local_var_850;
  int iStack_848;
  int iStack_844;
  int32_t local_var_838;
  uint64_t local_var_830;
  int iStack_828;
  int iStack_824;
  int32_t local_var_818;
  int32_t local_var_814;
  uint64_t local_var_810;
  int32_t local_var_7f8;
  int32_t local_var_7f4;
  uint64_t local_var_7f0;
  int32_t local_var_7d8;
  int32_t local_var_7d4;
  uint64_t local_var_7d0;
  int32_t local_var_7b8;
  int32_t local_var_7b4;
  uint64_t local_var_7b0;
  int32_t local_var_798;
  int32_t local_var_794;
  uint64_t local_var_790;
  int32_t local_var_778;
  int32_t local_var_774;
  uint64_t local_var_770;
  int32_t local_var_758;
  int32_t local_var_754;
  uint64_t local_var_750;
  int32_t local_var_738;
  int32_t local_var_734;
  uint64_t local_var_730;
  int32_t local_var_718;
  int32_t local_var_714;
  uint64_t local_var_710;
  int32_t local_var_6f8;
  int iStack_6f4;
  uint64_t local_var_6f0;
  int32_t local_var_6d8;
  int iStack_6d4;
  uint64_t local_var_6d0;
  int32_t local_var_6b8;
  int iStack_6b4;
  uint64_t local_var_6b0;
  int32_t local_var_698;
  uint64_t local_var_690;
  int iStack_680;
  int iStack_678;
  int iStack_674;
  int32_t local_var_670;
  uint64_t local_var_668;
  int8_t stack_array_658 [28];
  int aiStack_63c [377];
  uint64_t local_var_58;
  lVar3 = system_operation_state;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_8d8;
  local_var_888 = param_3;
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
          stack_array_8a8[0] = GetMessageTime();
          local_var_880 = *(uint64_t *)(param_1 + 0xa4);
          ClientToScreen(param_2,&local_var_880);
          iStack_8a0 = iStack_898;
          iStack_89c = iStack_890;
          *(uint64_t *)(param_1 + 0xa4) = CONCAT44(iStack_890,iStack_898);
          ClientToScreen(param_2,&iStack_8a0);
          iStack_674 = iStack_89c;
          local_var_670 = stack_array_8a8[0];
          iStack_678 = iStack_8a0;
          local_var_8b8 = 1;
          local_var_668 = 0;
          iVar6 = GetMouseMovePointsEx(0x18,&iStack_678,stack_array_658,0x40);
          if ((1 < iVar6) && (0 < iVar6 + -1)) {
            piVar12 = aiStack_63c;
            iVar13 = iVar15;
            iVar16 = iVar15;
            do {
              if (((uint)piVar12[-5] < *(uint *)(param_1 + 0xa0)) ||
                 (((piVar12[-5] == *(uint *)(param_1 + 0xa0) && (piVar12[-7] == (int)local_var_880)) &&
                  (piVar12[-6] == local_var_880._4_4_)))) break;
              iVar13 = iVar13 + 1;
              iVar15 = iVar15 + (piVar12[-7] - piVar12[-1]);
              piVar1 = piVar12 + -6;
              iVar2 = *piVar12;
              piVar12 = piVar12 + 6;
              iVar16 = iVar16 + (*piVar1 - iVar2);
            } while (iVar13 < iVar6 + -1);
            if ((iVar15 != 0) || (iVar16 != 0)) {
              local_var_850 = 0;
              stack_array_858[0] = 0;
              iStack_848 = iVar15;
              iStack_844 = iVar16;
              CoreEngine_MemoryManager(extraout_XMM0_Qa,stack_array_858);
            }
          }
          *(int32_t *)(param_1 + 0xa0) = stack_array_8a8[0];
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
            local_var_830 = 0;
            local_var_838 = 0;
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
        local_var_7f0 = 0;
        local_var_7f8 = 1;
        local_var_7f4 = 0xe0;
        goto LAB_1801732b6;
      }
      break;
    case 0x202:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        local_var_7d0 = 0;
        local_var_7d8 = 2;
        local_var_7d4 = 0xe0;
        goto LAB_1801732b6;
      }
      break;
    case 0x203:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_810 = 0;
        local_var_818 = 1;
        local_var_814 = 0xe0;
        goto LAB_1801732b6;
      }
      break;
    case 0x204:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_790 = 0;
        local_var_798 = 1;
        local_var_794 = 0xe1;
        goto LAB_1801732b6;
      }
      break;
    case 0x205:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        local_var_770 = 0;
        local_var_778 = 2;
        local_var_774 = 0xe1;
        goto LAB_1801732b6;
      }
      break;
    case 0x206:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_7b0 = 0;
        local_var_7b8 = 1;
        local_var_7b4 = 0xe1;
        goto LAB_1801732b6;
      }
      break;
    case 0x207:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_730 = 0;
        local_var_738 = 1;
        local_var_734 = 0xe2;
        goto LAB_1801732b6;
      }
      break;
    case 0x208:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        local_var_710 = 0;
        local_var_718 = 2;
        local_var_714 = 0xe2;
        goto LAB_1801732b6;
      }
      break;
    case 0x209:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_750 = 0;
        local_var_758 = 1;
        local_var_754 = 0xe2;
        goto LAB_1801732b6;
      }
      break;
    case 0x20a:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        local_var_690 = 0;
        iStack_680 = (int)sVar5;
        local_var_698 = 3;
        goto LAB_1801732b6;
      }
      break;
    case 0x20b:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_6d0 = 0;
        local_var_6d8 = 1;
        iStack_6d4 = (sVar5 != 1) + 0xe3;
        goto LAB_1801732b6;
      }
      break;
    case 0x20c:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        ReleaseCapture();
        local_var_6b0 = 0;
        local_var_6b8 = 2;
        iStack_6b4 = (sVar5 != 1) + 0xe3;
        goto LAB_1801732b6;
      }
      break;
    case 0x20d:
      if (*(char *)(system_operation_state + 0x1609) != '\0') {
        SetCapture(param_2);
        local_var_6f0 = 0;
        local_var_6f8 = 1;
        iStack_6f4 = (sVar5 != 1) + 0xe3;
        goto LAB_1801732b6;
      }
      break;
    case 0x219:
      if (*(int64_t *)(core_system_data_memory + 0x2018) != 0) {
        RenderingSystem_0f2c0();
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
              uVar17 = GenericFunction_18005ca20(SYSTEM_STATE_MANAGER,2);
              local_var_8b8 = local_var_8b8 & 0xffffff00;
              Function_fbad7b33(uVar17,(int)*(float *)(system_operation_state + 0x17ec),
                                  (int)*(float *)(system_operation_state + 0x17f0));
              *(int8_t *)(param_1 + 0x3c) = 0;
            }
          }
          else if (*(int *)(param_1 + 0x38) == 2) {
            ShowWindow(param_2,7);
            ChangeDisplaySettingsA(0,0);
            uVar17 = GenericFunction_18005ca20(SYSTEM_STATE_MANAGER,0);
            local_var_8b8 = local_var_8b8 & 0xffffff00;
            Function_fbad7b33(uVar17,(int)*(float *)(system_operation_state + 0x17ec),
                                (int)*(float *)(system_operation_state + 0x17f0));
            *(int8_t *)(param_1 + 0x3c) = 1;
          }
          goto LAB_1801732ce;
        }
      }
      else if (param_3 == 7) {
        if (system_operation_state != 0) {
          GenericFunction_180092940(system_operation_state,*(int8_t *)(system_operation_state + 0x160a));
          GenericFunction_180093af0(system_operation_state);
        }
      }
      else if (param_3 == 8) {
        if ((system_operation_state != 0) && (*(char *)(system_operation_state + 0x1609) != '\x01')) {
          CoreEngine_1723A0(*(uint64_t *)(system_main_module_state + 8),
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
       (cVar4 = GenericFunction_1801720a0(param_1,*(int32_t *)(system_operation_state + 0x160c)), cVar4 != '\0'))
    goto LAB_1801732ce;
    break;
  case 0x24:
    *(int32_t *)(param_5 + 0x18) = 0x140;
    *(int32_t *)(param_5 + 0x1c) = 0xf0;
    break;
  case 0xff:
    local_var_8b8 = 0x18;
    iVar6 = GetRawInputData(param_5,0x10000003,0,stack_array_8a8);
    if (iVar6 == 0) {
      local_var_8b8 = 0x18;
      GetRawInputData(param_5,0x10000003,&system_data_9420,stack_array_8a8);
      if (*(char *)(param_1 + 0x3d) != '\0') {
        core_system_config_memory =
             core_system_config_memory >> 2 & 3 | (core_system_config_memory & 3) << 2 | core_system_config_memory & 0xfffffff0;
      }
      if (core_system_config_memory == 0) {
        *(int8_t *)(core_system_data_memory + 0x2028) = 1;
      }
      if (*(char *)(system_operation_state + 0x1609) == '\0') {
        GenericFunction_180173470(param_1);
      }
    }
    break;
  case 0x100:
  case 0x104:
    if (((short)param_5 == 1) && ((param_5 >> 0x1e & 1) == 0)) {
      local_var_870 = 0;
      local_var_878 = 4;
      cStack_874 = cVar4 + -0x80;
      if ((param_5 & 0x1000000) == 0) {
        cStack_874 = cVar4;
      }
      goto LAB_1801732b6;
    }
    break;
  case 0x101:
  case 0x105:
    local_var_860 = 0;
    local_var_868 = 5;
    cStack_864 = cVar4 + -0x80;
    if ((param_5 & 0x1000000) == 0) {
      cStack_864 = cVar4;
    }
    goto LAB_1801732b6;
  case 0x102:
    iStack_890 = 6;
    local_var_88c = (int32_t)param_4;
    goto LAB_1801732b6;
  case 0x109:
    if (param_4 == 0xffff) goto LAB_1801732ce;
    iStack_898 = 6;
    local_var_894 = (int)param_5;
LAB_1801732b6:
    CoreEngine_MemoryManager();
    break;
  case 0x112:
    if (param_4 == 0xf100) {
      if ((int64_t)(param_5 & 0xffffffffffff0000) < 1) goto LAB_1801732ce;
    }
    else if ((param_4 == 0xf140) || (param_4 == 0xf170)) goto LAB_1801732ce;
  }
LAB_1801732bb:
  DefWindowProcW(param_2,local_var_888,param_4,param_5);
LAB_1801732ce:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_8d8);
}
// 函数: void GenericFunction_180172cd8(void)
void GenericFunction_180172cd8(void)
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
  int32_t local_buffer_3c;
  int32_t local_var_40;
  int32_t local_var_48;
  int iStack000000000000005c;
  iVar8 = 0;
  uVar4 = GetMessageTime();
  uVar3 = *(uint64_t *)(unaff_RSI + 0xa4);
  ClientToScreen();
  local_buffer_3c = local_var_48;
  *(uint64_t *)(unaff_RSI + 0xa4) = CONCAT44(local_var_48,local_var_40);
  ClientToScreen();
  *(int32_t *)(unaff_RBP + 0x164) = local_buffer_3c;
  *(int32_t *)(unaff_RBP + 0x168) = uVar4;
  *(int32_t *)(unaff_RBP + 0x160) = local_var_40;
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
      CoreEngine_MemoryManager();
    }
  }
  *(int32_t *)(unaff_RSI + 0xa0) = uVar4;
  DefWindowProcW();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x780) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180172e23(int64_t param_1,uint64_t param_2,int param_3,int param_4)
void GenericFunction_180172e23(int64_t param_1,uint64_t param_2,int param_3,int param_4)
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
    CoreEngine_MemoryManager(iVar1,unaff_RBP + -0x60);
  }
  DefWindowProcW();
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x780) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180173470(float param_1,uint64_t param_2)
void GenericFunction_180173470(float param_1,uint64_t param_2)
{
  ushort uVar1;
  int64_t in_RCX;
  uint64_t uVar2;
  float fVar3;
  float fVar4;
  uint64_t stack_special_x_10;
  uint64_t astack_special_x_18 [2];
  int32_t local_var_38;
  int32_t local_var_34;
  uint64_t local_var_30;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  if (core_system_config_memory != 0) {
    return;
  }
  stack_special_x_10 = param_2;
  if ((system_data_9438 & 1) == 0) {
    fVar3 = (float)core_system_config_memory;
    fVar4 = (float)core_system_config_memory;
LAB_180173542:
    if ((fVar3 != 0.0) || (fVar4 != 0.0)) {
      iStack_28 = (int)fVar3;
      local_var_30 = 0;
      local_var_38 = 0;
      iStack_24 = (int)fVar4;
      CoreEngine_MemoryManager(param_1,&local_var_38);
    }
  }
  else {
    if (**(char **)(core_system_data_memory + 0x2010) != '\0') {
      **(char **)(core_system_data_memory + 0x2010) = '\0';
    }
    if (system_operation_state != 0) {
      GetCursorPos(astack_special_x_18);
      stack_special_x_10 = astack_special_x_18[0];
      ScreenToClient(*(uint64_t *)(in_RCX + 8),&stack_special_x_10);
      fVar3 = (float)(int)stack_special_x_10 -
              *(float *)(system_operation_state + 0x17e0) * *(float *)(system_operation_state + 0x17ec);
      param_1 = *(float *)(system_operation_state + 0x17e4) * *(float *)(system_operation_state + 0x17f0);
      fVar4 = (float)stack_special_x_10._4_4_ - param_1;
      goto LAB_180173542;
    }
  }
  uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  uVar1 = core_system_config_memory & 2;
  if ((core_system_config_memory & 1) != 0) {
    local_var_30 = 0;
    local_var_38 = 1;
    local_var_34 = 0xe0;
    CoreEngine_MemoryManager(uVar2,&local_var_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if (uVar1 != 0) {
    local_var_30 = 0;
    local_var_38 = 2;
    local_var_34 = 0xe0;
    CoreEngine_MemoryManager(uVar2,&local_var_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 2 & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      local_var_38 = 2;
      goto LAB_1801735fc;
    }
  }
  else {
    local_var_38 = 1;
LAB_1801735fc:
    local_var_30 = 0;
    local_var_34 = 0xe1;
    CoreEngine_MemoryManager(uVar2,&local_var_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 4 & 1) == 0) {
    if ((uVar2 >> 5 & 1) != 0) {
      local_var_38 = 2;
      goto LAB_18017363d;
    }
  }
  else {
    local_var_38 = 1;
LAB_18017363d:
    local_var_30 = 0;
    local_var_34 = 0xe2;
    CoreEngine_MemoryManager(uVar2,&local_var_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 6 & 1) == 0) {
    if ((uVar2 >> 7 & 1) != 0) {
      local_var_38 = 2;
      goto LAB_18017367e;
    }
  }
  else {
    local_var_38 = 1;
LAB_18017367e:
    local_var_30 = 0;
    local_var_34 = 0xe3;
    CoreEngine_MemoryManager(uVar2,&local_var_38);
    uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if ((uVar2 >> 8 & 1) == 0) {
    if ((uVar2 >> 9 & 1) == 0) goto LAB_1801736de;
    local_var_38 = 2;
  }
  else {
    local_var_38 = 1;
  }
  local_var_30 = 0;
  local_var_34 = 0xe4;
  CoreEngine_MemoryManager(uVar2,&local_var_38);
  uVar2 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
LAB_1801736de:
  if ((uVar2 & 0x400) != 0) {
    iStack_20 = (int)core_system_config_memory;
    local_var_30 = 0;
    local_var_38 = 3;
    CoreEngine_MemoryManager(uVar2,&local_var_38);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180173499(float param_1)
void GenericFunction_180173499(float param_1)
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
      CoreEngine_MemoryManager(param_1,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
    uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  }
  if (uVar2 != 0) {
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 2;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
    CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
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
  CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
  uVar3 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
LAB_1801736de:
  if ((uVar3 & 0x400) != 0) {
    *(int *)(unaff_RBP + -0x18) = (int)core_system_config_memory;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 3;
    CoreEngine_MemoryManager(uVar3,unaff_RBP + -0x30);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_18017358a(uint64_t param_1)
void GenericFunction_18017358a(uint64_t param_1)
{
  uint64_t uVar1;
  char unaff_BL;
  int64_t unaff_RBP;
  *(uint64_t *)(unaff_RBP + -0x28) = 0;
  *(int32_t *)(unaff_RBP + -0x30) = 1;
  *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
  CoreEngine_MemoryManager(param_1,unaff_RBP + -0x30);
  uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
  if (unaff_BL != '\0') {
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 2;
    *(int32_t *)(unaff_RBP + -0x2c) = 0xe0;
    CoreEngine_MemoryManager(uVar1,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar1,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar1,unaff_RBP + -0x30);
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
    CoreEngine_MemoryManager(uVar1,unaff_RBP + -0x30);
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
  CoreEngine_MemoryManager(uVar1,unaff_RBP + -0x30);
  uVar1 = CONCAT44(uRam0000000180d49440,CONCAT22(core_system_config_memory,core_system_config_memory));
LAB_1801736de:
  if ((uVar1 & 0x400) != 0) {
    *(int *)(unaff_RBP + -0x18) = (int)core_system_config_memory;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 3;
    CoreEngine_MemoryManager(uVar1,unaff_RBP + -0x30);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address