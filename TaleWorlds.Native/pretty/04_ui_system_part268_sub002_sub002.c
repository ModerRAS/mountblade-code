#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 04_ui_system_part268_sub002_sub002.c - 1 个函数

// 函数: void FUN_18081be80(int64_t param_1)
void FUN_18081be80(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uVar1 = SystemCore_DatabaseManager0(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),0x10000,&ui_system_data_1152_ptr,0x2ee,0,0,1);
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  iVar2 = FUN_18081c0f0(param_1 + 0x4d8,1,&lStack_58);
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x2d0) == '\0')) {
    iVar2 = 0x10000;
    if ((int)uStack_40 < 0x10000) {
      iVar2 = (int)uStack_40;
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar1,uStack_50,(int64_t)iVar2);
  }
  if (lStack_58 == 0) {
                    // WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),uVar1,&ui_system_data_1152_ptr,0x2f2,1);
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager();
}



// WARNING: Removing unreachable block (ram,0x00018081b7b4)

uint64_t FUN_18081c0c0(int64_t param_1)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int8_t *puVar5;
  
  uVar3 = FUN_18081be80();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  uVar3 = *(uint64_t *)(param_1 + 0x28);
  SystemStateManager(uVar3);
  if (*(char *)(param_1 + 0x2d0) == '\0') {
    uVar4 = 0;
    puVar5 = (int8_t *)(param_1 + 0x2d5);
    do {
      if (((puVar5[-1] != -1) &&
          (plVar1 = *(int64_t **)(param_1 + 0x18), plVar1 != (int64_t *)0x0)) &&
         (iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,puVar5[-1],*puVar5), iVar2 != 0))
      goto FUN_18081b7ac;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x10;
    } while (uVar4 < 0x20);
    *(int8_t *)(param_1 + 0x2d0) = 1;
    iVar2 = FUN_1807ff260(*(uint64_t *)(param_1 + 0x20));
    if (iVar2 == 0) {
                    // WARNING: Subroutine does not return
      SystemConfigManager(uVar3);
    }
  }
FUN_18081b7ac:
                    // WARNING: Subroutine does not return
  SystemConfigManager(uVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18081c0f0(int64_t *param_1,char param_2,int64_t *param_3)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint uVar6;
  
  if ((char)param_1[3] == '\0') {
    lVar5 = 0;
    uVar1 = SystemStateManager(param_1[4]);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar6 = (int)param_1[1] - 1U & *(uint *)(param_1 + 2);
    iVar4 = (int)param_1[1] - uVar6;
    iVar2 = *(int *)((int64_t)param_1 + 0xc) - (int)param_1[2];
    iVar3 = 0;
    if (iVar2 == 0) {
      if (*(int *)((int64_t)param_1 + 0x14) == 0) {
        if (param_2 != '\0') {
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        }
                    // WARNING: Subroutine does not return
        SystemConfigManager(param_1[4]);
      }
                    // WARNING: Subroutine does not return
      SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*param_1,&ui_system_data_1152_ptr,0xf3,1);
    }
    param_3[1] = (int64_t)(int)uVar6 + *param_1;
    if (iVar4 < iVar2) {
      *(int *)(param_3 + 3) = iVar4;
      iVar3 = iVar2 - iVar4;
      lVar5 = *param_1;
    }
    else {
      *(int *)(param_3 + 3) = iVar2;
    }
    param_3[2] = lVar5;
    *(int *)((int64_t)param_3 + 0x1c) = iVar3;
    *param_3 = param_1[4];
  }
  return 0;
}



uint64_t FUN_18081c2d0(int64_t *param_1,int param_2,char param_3,int64_t *param_4)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((char)param_1[3] != '\0') {
    return 0;
  }
  iVar6 = 0;
  uVar3 = SystemStateManager(param_1[4]);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  if (*(int *)((int64_t)param_1 + 0x14) == 0) {
    iVar2 = (int)param_1[1];
    if (iVar2 < param_2) {
      lVar1 = param_1[4];
      *(int *)((int64_t)param_1 + 0x14) = param_2;
      SystemStateManager(lVar1);
      if (0 < (int)param_1[7]) {
        do {
          iVar2 = FUN_180768910(param_1[5]);
          if (iVar2 != 0) {
                    // WARNING: Subroutine does not return
            SystemConfigManager(lVar1);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[7]);
      }
      *(int32_t *)(param_1 + 7) = 0;
                    // WARNING: Subroutine does not return
      SystemConfigManager(lVar1);
    }
    lVar1 = param_1[2];
    uVar4 = iVar2 - 1U & *(uint *)((int64_t)param_1 + 0xc);
    iVar6 = *(int *)((int64_t)param_1 + 0xc);
    iVar5 = iVar2 - uVar4;
    param_4[1] = (int64_t)(int)uVar4 + *param_1;
    param_4[2] = 0;
    *(int *)(param_4 + 3) = param_2;
    *(int32_t *)((int64_t)param_4 + 0x1c) = 0;
    if (iVar5 < param_2) {
      *(int *)(param_4 + 3) = iVar5;
      param_4[2] = *param_1;
      if (param_3 == '\0') {
        *(int *)((int64_t)param_4 + 0x1c) = param_2 - iVar5;
      }
      else {
        *(int *)((int64_t)param_4 + 0x1c) = param_2;
        param_2 = iVar5 + param_2;
      }
    }
    if (param_2 <= ((int)lVar1 - iVar6) + iVar2) {
      *param_4 = param_1[4];
      return 0;
    }
  }
  *(int *)((int64_t)param_1 + 0x3c) = *(int *)((int64_t)param_1 + 0x3c) + 1;
                    // WARNING: Subroutine does not return
  SystemConfigManager(param_1[4]);
}



uint64_t FUN_18081c420(int64_t param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint auStackX_10 [2];
  int64_t lStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  uVar3 = *param_2;
  if (0x6400000 < uVar3) {
    return 0x1c;
  }
  uVar6 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_18081c2d0(param_1 + 0x4d8,uVar3,0,&lStack_38);
  uVar7 = (uint64_t)uVar2;
  if ((uVar2 == 0) && (uVar7 = uVar6, *(char *)(param_1 + 0x2d0) == '\0')) {
    uVar2 = SystemCore_PerformanceMonitor(auStackX_10);
    uVar7 = (uint64_t)uVar2;
    if (uVar2 == 0) {
      pcVar4 = (char *)(param_1 + 0x2d5);
      param_2[1] = auStackX_10[0];
      while ((pcVar4[-1] != (char)param_2[2] || (*pcVar4 != *(char *)((int64_t)param_2 + 9)))) {
        uVar2 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar2;
        pcVar4 = pcVar4 + 0x10;
        if (0x1f < uVar2) {
LAB_18081c502:
                    // WARNING: Subroutine does not return
          memcpy(uStack_30,param_2,(int64_t)(int)uStack_20);
        }
      }
      lVar5 = uVar6 + 0x2e;
      iVar1 = *(int *)(param_1 + lVar5 * 0x10);
      *(uint *)(param_1 + 0x2dc + uVar6 * 0x10) = auStackX_10[0];
      if ((int)uVar3 < iVar1) {
        uVar3 = *(uint *)(param_1 + lVar5 * 0x10);
      }
      *(uint *)(param_1 + lVar5 * 0x10) = uVar3;
      goto LAB_18081c502;
    }
  }
  if (lStack_38 == 0) {
    return uVar7;
  }
                    // WARNING: Subroutine does not return
  SystemConfigManager();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18081c5b0(uint64_t *param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  short sVar15;
  short sVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint64_t uStack_90;
  
  pfVar11 = (float *)*param_1;
  sVar1 = *(short *)((int64_t)param_1 + 0x32);
  sVar2 = *(short *)((int64_t)param_1 + 0x36);
  pfVar22 = (float *)param_1[1];
  pfVar21 = (float *)param_1[3];
  pfVar20 = (float *)param_1[4];
  pfVar17 = (float *)param_1[8];
  pfVar18 = (float *)param_1[9];
  sVar3 = *(short *)((int64_t)param_1 + 0x56);
  uVar19 = (uint)sVar3;
  sVar15 = *(short *)(param_1 + 6);
  pfVar12 = (float *)param_1[2];
  sVar16 = *(short *)((int64_t)param_1 + 0x34);
  sVar4 = *(short *)(param_1 + 7);
  sVar5 = *(short *)(param_1 + 10);
  sVar6 = *(short *)((int64_t)param_1 + 0x52);
  uVar9 = FUN_18081d250(*(int16_t *)((int64_t)param_1 + 0x54));
  uVar13 = uVar9 & 0xffffffff;
  if ((int)uVar9 < 1) {
    if (param_2 == 0) {
      UISystem_InputProcessor0(pfVar11,sVar15,pfVar17,sVar5,ui_system_config_memory,&system_data_ab10,sVar3);
      UIComponent_EventHandler(pfVar17,sVar5,pfVar17,sVar5,ui_system_config_memory,&system_data_aaf0,sVar3);
      pfVar11 = pfVar17;
      sVar15 = sVar5;
    }
    UISystem_EventHandler(pfVar11,sVar15,pfVar17,sVar5,ui_system_config_memory,&system_data_aac8,sVar3);
    UISystem_EventHandler(pfVar17,sVar5,pfVar17,sVar5,ui_system_config_memory,&system_data_aab0,sVar3);
    UISystem_EventHandler(pfVar17,sVar5,pfVar17,sVar5,ui_system_config_memory,&system_data_aa98,sVar3);
    UISystem_EventHandler(pfVar17,sVar5,pfVar17,sVar5,ui_system_config_memory,&system_data_aa80,sVar3);
    if (param_2 == 0) {
      UISystem_InputProcessor0(pfVar12,sVar16,pfVar18,sVar6,ui_system_config_memory,&system_data_ab00,sVar3);
      UIComponent_EventHandler(pfVar18,sVar6,pfVar18,sVar6,ui_system_config_memory,&system_data_aad0,sVar3);
      pfVar12 = pfVar18;
      sVar16 = sVar6;
    }
    UISystem_EventHandler(pfVar12,sVar16,pfVar18,sVar6,ui_system_config_memory,&system_data_aab8,sVar3);
    UISystem_EventHandler(pfVar18,sVar6,pfVar18,sVar6,ui_system_config_memory,&system_data_aaa0,sVar3);
    UISystem_EventHandler(pfVar18,sVar6,pfVar18,sVar6,ui_system_config_memory,&system_data_aa88,sVar3);
    UISystem_EventHandler(pfVar18,sVar6,pfVar18,sVar6,ui_system_config_memory,&system_data_aa70,sVar3);
    if (param_2 == 0) {
      UISystem_InputProcessor0(pfVar22,sVar1,pfVar22,sVar1,ui_system_config_memory,&system_data_ab08,sVar3);
      UIComponent_EventHandler(pfVar22,sVar1,pfVar22,sVar1,ui_system_config_memory,&system_data_aae0,sVar3);
    }
    UISystem_EventHandler(pfVar22,sVar1,pfVar22,sVar1,ui_system_config_memory,&system_data_aac0,sVar3);
    UISystem_EventHandler(pfVar22,sVar1,pfVar22,sVar1,ui_system_config_memory,&system_data_aaa8,sVar3);
    UISystem_EventHandler(pfVar22,sVar1,pfVar22,sVar1,ui_system_config_memory,&system_data_aa90,sVar3);
    UISystem_EventHandler(pfVar22,sVar1,pfVar22,sVar1,ui_system_config_memory,&system_data_aa78,sVar3);
    if (param_2 == 0) {
      UISystem_InputProcessor0(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_aa68,sVar3);
      UISystem_InputProcessor0(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_aa58,sVar3);
      UIComponent_EventHandler(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_aa40,sVar3);
      UIComponent_EventHandler(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_aa20,sVar3);
    }
    UISystem_EventHandler(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_aa08,sVar3);
    UISystem_EventHandler(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_a9f8,sVar3);
    UISystem_EventHandler(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_a9e8,sVar3);
    UISystem_EventHandler(pfVar21,sVar2,pfVar21,sVar2,ui_system_config_memory,&system_data_a9d8,sVar3);
    if (param_2 == 0) {
      UISystem_InputProcessor0(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_aa60,sVar3);
      UISystem_InputProcessor0(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_aa50,sVar3);
      UIComponent_EventHandler(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_aa30,sVar3);
      UIComponent_EventHandler(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_aa10,sVar3);
    }
    UISystem_EventHandler(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_aa00,sVar3);
    UISystem_EventHandler(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_a9f0,sVar3);
    UISystem_EventHandler(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_a9e0,sVar3);
    UISystem_EventHandler(pfVar20,sVar4,pfVar20,sVar4,ui_system_config_memory,&system_data_a9d0,sVar3);
    uVar7 = 0;
    if (uVar19 < 4) {
      if (sVar3 == 0) {
        return uVar13;
      }
    }
    else {
      uVar7 = (uVar19 - 4 >> 2) + 1;
      uStack_90 = (uint64_t)uVar7;
      uVar7 = uVar7 * 4;
      do {
        fVar25 = ((*pfVar22 * 0.70710677 + *pfVar17) - *pfVar21 * 0.8709636) - *pfVar20 * 0.48977882
        ;
        fVar24 = *pfVar21 * 0.48977882 + *pfVar20 * 0.8709636 + *pfVar22 * 0.70710677 + *pfVar18;
        if (fVar25 < 0.9999695) {
          if (-1.0 < fVar25) {
            uVar8 = 0;
          }
          else {
            fVar25 = -1.0;
            uVar8 = 0xfffffffc;
          }
        }
        else {
          fVar25 = 0.9999695;
          uVar8 = 0xfffffffd;
        }
        if ((uint)uVar13 != 0) {
          uVar8 = (uint)uVar13;
        }
        if (fVar24 < 0.9999695) {
          if (-1.0 < fVar24) {
            uVar10 = 0;
          }
          else {
            fVar24 = -1.0;
            uVar10 = 0xfffffffc;
          }
        }
        else {
          fVar24 = 0.9999695;
          uVar10 = 0xfffffffd;
        }
        *pfVar17 = fVar25;
        *pfVar18 = fVar24;
        if (uVar8 != 0) {
          uVar10 = uVar8;
        }
        pfVar22 = pfVar22 + sVar1;
        pfVar21 = pfVar21 + sVar2;
        pfVar17 = pfVar17 + sVar5;
        pfVar20 = pfVar20 + sVar4;
        pfVar18 = pfVar18 + sVar6;
        fVar25 = ((*pfVar22 * 0.70710677 + *pfVar17) - *pfVar21 * 0.8709636) - *pfVar20 * 0.48977882
        ;
        fVar24 = *pfVar21 * 0.48977882 + *pfVar20 * 0.8709636 + *pfVar22 * 0.70710677 + *pfVar18;
        if (fVar25 < 0.9999695) {
          if (-1.0 < fVar25) {
            uVar8 = 0;
          }
          else {
            fVar25 = -1.0;
            uVar8 = 0xfffffffc;
          }
        }
        else {
          fVar25 = 0.9999695;
          uVar8 = 0xfffffffd;
        }
        if (uVar10 != 0) {
          uVar8 = uVar10;
        }
        if (fVar24 < 0.9999695) {
          if (-1.0 < fVar24) {
            uVar10 = 0;
          }
          else {
            fVar24 = -1.0;
            uVar10 = 0xfffffffc;
          }
        }
        else {
          fVar24 = 0.9999695;
          uVar10 = 0xfffffffd;
        }
        *pfVar17 = fVar25;
        *pfVar18 = fVar24;
        if (uVar8 != 0) {
          uVar10 = uVar8;
        }
        pfVar22 = pfVar22 + sVar1;
        pfVar21 = pfVar21 + sVar2;
        pfVar17 = pfVar17 + sVar5;
        pfVar20 = pfVar20 + sVar4;
        pfVar18 = pfVar18 + sVar6;
        fVar25 = ((*pfVar22 * 0.70710677 + *pfVar17) - *pfVar21 * 0.8709636) - *pfVar20 * 0.48977882
        ;
        fVar24 = *pfVar21 * 0.48977882 + *pfVar20 * 0.8709636 + *pfVar22 * 0.70710677 + *pfVar18;
        if (fVar25 < 0.9999695) {
          if (-1.0 < fVar25) {
            uVar8 = 0;
          }
          else {
            fVar25 = -1.0;
            uVar8 = 0xfffffffc;
          }
        }
        else {
          fVar25 = 0.9999695;
          uVar8 = 0xfffffffd;
        }
        if (uVar10 != 0) {
          uVar8 = uVar10;
        }
        if (fVar24 < 0.9999695) {
          if (-1.0 < fVar24) {
            uVar13 = 0;
          }
          else {
            fVar24 = -1.0;
            uVar13 = 0xfffffffc;
          }
        }
        else {
          fVar24 = 0.9999695;
          uVar13 = 0xfffffffd;
        }
        *pfVar17 = fVar25;
        *pfVar18 = fVar24;
        if (uVar8 != 0) {
          uVar13 = (uint64_t)uVar8;
        }
        pfVar17 = pfVar17 + sVar5;
        pfVar18 = pfVar18 + sVar6;
        fVar24 = pfVar21[sVar2];
        fVar25 = pfVar20[sVar4];
        fVar23 = pfVar22[sVar1] * 0.70710677;
        fVar26 = ((fVar23 + *pfVar17) - fVar24 * 0.8709636) - fVar25 * 0.48977882;
        fVar24 = fVar24 * 0.48977882 + fVar25 * 0.8709636 + fVar23 + *pfVar18;
        if (fVar26 < 0.9999695) {
          if (-1.0 < fVar26) {
            uVar8 = 0;
          }
          else {
            fVar26 = -1.0;
            uVar8 = 0xfffffffc;
          }
        }
        else {
          fVar26 = 0.9999695;
          uVar8 = 0xfffffffd;
        }
        uVar9 = (uint64_t)uVar8;
        if ((int)uVar13 != 0) {
          uVar9 = uVar13;
        }
        if (fVar24 < 0.9999695) {
          if (-1.0 < fVar24) {
            uVar13 = 0;
          }
          else {
            fVar24 = -1.0;
            uVar13 = 0xfffffffc;
          }
        }
        else {
          fVar24 = 0.9999695;
          uVar13 = 0xfffffffd;
        }
        *pfVar17 = fVar26;
        *pfVar18 = fVar24;
        if ((int)uVar9 != 0) {
          uVar13 = uVar9;
        }
        pfVar17 = pfVar17 + sVar5;
        pfVar18 = pfVar18 + sVar6;
        pfVar22 = pfVar22 + sVar1 + sVar1;
        pfVar21 = pfVar21 + sVar2 + sVar2;
        pfVar20 = pfVar20 + sVar4 + sVar4;
        uStack_90 = uStack_90 - 1;
      } while (uStack_90 != 0);
      if (uVar19 <= uVar7) {
        return uVar13;
      }
    }
    uVar14 = (uint64_t)(uVar19 - uVar7);
    uVar9 = uVar13;
    do {
      fVar25 = ((*pfVar22 * 0.70710677 + *pfVar17) - *pfVar21 * 0.8709636) - *pfVar20 * 0.48977882;
      fVar24 = *pfVar21 * 0.48977882 + *pfVar20 * 0.8709636 + *pfVar22 * 0.70710677 + *pfVar18;
      if (fVar25 < 0.9999695) {
        if (-1.0 < fVar25) {
          uVar19 = 0;
        }
        else {
          fVar25 = -1.0;
          uVar19 = 0xfffffffc;
        }
      }
      else {
        fVar25 = 0.9999695;
        uVar19 = 0xfffffffd;
      }
      if ((uint)uVar9 != 0) {
        uVar19 = (uint)uVar9;
      }
      if (fVar24 < 0.9999695) {
        if (-1.0 < fVar24) {
          uVar9 = 0;
        }
        else {
          fVar24 = -1.0;
          uVar9 = 0xfffffffc;
        }
      }
      else {
        fVar24 = 0.9999695;
        uVar9 = 0xfffffffd;
      }
      *pfVar17 = fVar25;
      *pfVar18 = fVar24;
      if (uVar19 != 0) {
        uVar9 = (uint64_t)uVar19;
      }
      pfVar17 = pfVar17 + sVar5;
      pfVar18 = pfVar18 + sVar6;
      pfVar22 = pfVar22 + sVar1;
      pfVar21 = pfVar21 + sVar2;
      pfVar20 = pfVar20 + sVar4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return uVar9;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18081c668(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t in_RCX;
  uint64_t uVar4;
  int unaff_EBX;
  float *unaff_RBP;
  float *pfVar5;
  float *unaff_RSI;
  float *pfVar6;
  int16_t uVar7;
  uint unaff_EDI;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  float *unaff_R12;
  float *pfVar13;
  int unaff_R13D;
  float *unaff_R14;
  float *pfVar14;
  float *unaff_R15;
  float *pfVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  void *puStack0000000000000028;
  int16_t uStack0000000000000030;
  short sStack0000000000000040;
  short sStack0000000000000042;
  short in_stack_00000048;
  uint64_t in_stack_00000058;
  short in_stack_000000f0;
  short in_stack_00000100;
  ushort in_stack_00000108;
  
  uVar7 = (int16_t)unaff_EDI;
  if (unaff_R13D == 0) {
    puStack0000000000000028 = &system_data_ab10;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(in_RCX,param_2,param_3,param_4,ui_system_config_memory);
    puStack0000000000000028 = &system_data_aaf0;
    uStack0000000000000030 = uVar7;
    param_1 = UIComponent_EventHandler(uVar16,in_stack_00000108);
    param_2 = (uint64_t)in_stack_00000108;
  }
  puStack0000000000000028 = &system_data_aac8;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(param_1,param_2);
  puStack0000000000000028 = &system_data_aab0;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000108);
  puStack0000000000000028 = &system_data_aa98;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000108);
  puStack0000000000000028 = &system_data_aa80;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000108);
  if (unaff_R13D == 0) {
    puStack0000000000000028 = &system_data_ab00;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(in_stack_00000058,in_stack_00000048);
    puStack0000000000000028 = &system_data_aad0;
    uStack0000000000000030 = uVar7;
    uVar16 = UIComponent_EventHandler(uVar16,in_stack_00000100);
    in_stack_00000048 = in_stack_00000100;
  }
  puStack0000000000000028 = &system_data_aab8;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000048);
  puStack0000000000000028 = &system_data_aaa0;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000100);
  puStack0000000000000028 = &system_data_aa88;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000100);
  puStack0000000000000028 = &system_data_aa70;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_00000100);
  if (unaff_R13D == 0) {
    puStack0000000000000028 = &system_data_ab08;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(uVar16,sStack0000000000000040);
    puStack0000000000000028 = &system_data_aae0;
    uStack0000000000000030 = uVar7;
    uVar16 = UIComponent_EventHandler(uVar16,sStack0000000000000040);
  }
  puStack0000000000000028 = &system_data_aac0;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000040);
  puStack0000000000000028 = &system_data_aaa8;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000040);
  puStack0000000000000028 = &system_data_aa90;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000040);
  puStack0000000000000028 = &system_data_aa78;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000040);
  if (unaff_R13D == 0) {
    puStack0000000000000028 = &system_data_aa68;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(uVar16,in_stack_000000f0);
    puStack0000000000000028 = &system_data_aa58;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(uVar16,in_stack_000000f0);
    puStack0000000000000028 = &system_data_aa40;
    uStack0000000000000030 = uVar7;
    uVar16 = UIComponent_EventHandler(uVar16,in_stack_000000f0);
    puStack0000000000000028 = &system_data_aa20;
    uStack0000000000000030 = uVar7;
    uVar16 = UIComponent_EventHandler(uVar16,in_stack_000000f0);
  }
  puStack0000000000000028 = &system_data_aa08;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_000000f0);
  puStack0000000000000028 = &system_data_a9f8;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_000000f0);
  puStack0000000000000028 = &system_data_a9e8;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_000000f0);
  puStack0000000000000028 = &system_data_a9d8;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,in_stack_000000f0);
  if (unaff_R13D == 0) {
    puStack0000000000000028 = &system_data_aa60;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(uVar16,sStack0000000000000042);
    puStack0000000000000028 = &system_data_aa50;
    uStack0000000000000030 = uVar7;
    uVar16 = UISystem_InputProcessor0(uVar16,sStack0000000000000042);
    puStack0000000000000028 = &system_data_aa30;
    uStack0000000000000030 = uVar7;
    uVar16 = UIComponent_EventHandler(uVar16,sStack0000000000000042);
    puStack0000000000000028 = &system_data_aa10;
    uStack0000000000000030 = uVar7;
    uVar16 = UIComponent_EventHandler(uVar16,sStack0000000000000042);
  }
  puStack0000000000000028 = &system_data_aa00;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000042);
  puStack0000000000000028 = &system_data_a9f0;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000042);
  puStack0000000000000028 = &system_data_a9e0;
  uStack0000000000000030 = uVar7;
  uVar16 = UISystem_EventHandler(uVar16,sStack0000000000000042);
  puStack0000000000000028 = &system_data_a9d0;
  uStack0000000000000030 = uVar7;
  UISystem_EventHandler(uVar16,sStack0000000000000042);
  uVar1 = 0;
  if (unaff_EDI < 4) {
    if (unaff_EDI == 0) {
      return unaff_EBX;
    }
  }
  else {
    lVar11 = (int64_t)in_stack_000000f0;
    lVar10 = (int64_t)sStack0000000000000040;
    lVar12 = (int64_t)(short)in_stack_00000108;
    lVar8 = (int64_t)in_stack_00000100;
    lVar9 = (int64_t)sStack0000000000000042;
    uVar1 = (unaff_EDI - 4 >> 2) + 1;
    in_stack_00000058 = (uint64_t)uVar1;
    uVar1 = uVar1 * 4;
    do {
      fVar19 = ((*unaff_R15 * 0.70710677 + *unaff_RBP) - *unaff_R14 * 0.8709636) -
               *unaff_R12 * 0.48977882;
      fVar18 = *unaff_R14 * 0.48977882 + *unaff_R12 * 0.8709636 +
               *unaff_R15 * 0.70710677 + *unaff_RSI;
      if (fVar19 < 0.9999695) {
        if (-1.0 < fVar19) {
          iVar2 = 0;
        }
        else {
          fVar19 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar19 = 0.9999695;
        iVar2 = -3;
      }
      if (unaff_EBX != 0) {
        iVar2 = unaff_EBX;
      }
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          iVar3 = 0;
        }
        else {
          fVar18 = -1.0;
          iVar3 = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        iVar3 = -3;
      }
      *unaff_RBP = fVar19;
      *unaff_RSI = fVar18;
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      pfVar15 = unaff_R15 + lVar10;
      pfVar14 = unaff_R14 + lVar11;
      pfVar5 = unaff_RBP + lVar12;
      pfVar13 = unaff_R12 + lVar9;
      pfVar6 = unaff_RSI + lVar8;
      fVar19 = ((*pfVar15 * 0.70710677 + *pfVar5) - *pfVar14 * 0.8709636) - *pfVar13 * 0.48977882;
      fVar18 = *pfVar14 * 0.48977882 + *pfVar13 * 0.8709636 + *pfVar15 * 0.70710677 + *pfVar6;
      if (fVar19 < 0.9999695) {
        if (-1.0 < fVar19) {
          iVar2 = 0;
        }
        else {
          fVar19 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar19 = 0.9999695;
        iVar2 = -3;
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          iVar3 = 0;
        }
        else {
          fVar18 = -1.0;
          iVar3 = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        iVar3 = -3;
      }
      *pfVar5 = fVar19;
      *pfVar6 = fVar18;
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      pfVar15 = pfVar15 + lVar10;
      pfVar14 = pfVar14 + lVar11;
      pfVar5 = pfVar5 + lVar12;
      pfVar13 = pfVar13 + lVar9;
      pfVar6 = pfVar6 + lVar8;
      fVar19 = ((*pfVar15 * 0.70710677 + *pfVar5) - *pfVar14 * 0.8709636) - *pfVar13 * 0.48977882;
      fVar18 = *pfVar14 * 0.48977882 + *pfVar13 * 0.8709636 + *pfVar15 * 0.70710677 + *pfVar6;
      if (fVar19 < 0.9999695) {
        if (-1.0 < fVar19) {
          iVar2 = 0;
        }
        else {
          fVar19 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar19 = 0.9999695;
        iVar2 = -3;
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          iVar3 = 0;
        }
        else {
          fVar18 = -1.0;
          iVar3 = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        iVar3 = -3;
      }
      *pfVar5 = fVar19;
      *pfVar6 = fVar18;
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      pfVar5 = pfVar5 + lVar12;
      pfVar6 = pfVar6 + lVar8;
      fVar18 = pfVar14[lVar11];
      fVar19 = pfVar13[lVar9];
      fVar17 = pfVar15[lVar10] * 0.70710677;
      fVar20 = ((fVar17 + *pfVar5) - fVar18 * 0.8709636) - fVar19 * 0.48977882;
      fVar18 = fVar18 * 0.48977882 + fVar19 * 0.8709636 + fVar17 + *pfVar6;
      if (fVar20 < 0.9999695) {
        if (-1.0 < fVar20) {
          iVar2 = 0;
        }
        else {
          fVar20 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar20 = 0.9999695;
        iVar2 = -3;
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          unaff_EBX = 0;
        }
        else {
          fVar18 = -1.0;
          unaff_EBX = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        unaff_EBX = -3;
      }
      *pfVar5 = fVar20;
      *pfVar6 = fVar18;
      if (iVar2 != 0) {
        unaff_EBX = iVar2;
      }
      unaff_RBP = pfVar5 + lVar12;
      unaff_RSI = pfVar6 + lVar8;
      unaff_R15 = pfVar15 + lVar10 + lVar10;
      unaff_R14 = pfVar14 + lVar11 + lVar11;
      unaff_R12 = pfVar13 + lVar9 + lVar9;
      in_stack_00000058 = in_stack_00000058 - 1;
    } while (in_stack_00000058 != 0);
    if (unaff_EDI <= uVar1) {
      return unaff_EBX;
    }
  }
  uVar4 = (uint64_t)(unaff_EDI - uVar1);
  do {
    fVar19 = ((*unaff_R15 * 0.70710677 + *unaff_RBP) - *unaff_R14 * 0.8709636) -
             *unaff_R12 * 0.48977882;
    fVar18 = *unaff_R14 * 0.48977882 + *unaff_R12 * 0.8709636 + *unaff_R15 * 0.70710677 + *unaff_RSI
    ;
    if (fVar19 < 0.9999695) {
      if (-1.0 < fVar19) {
        iVar2 = 0;
      }
      else {
        fVar19 = -1.0;
        iVar2 = -4;
      }
    }
    else {
      fVar19 = 0.9999695;
      iVar2 = -3;
    }
    if (unaff_EBX != 0) {
      iVar2 = unaff_EBX;
    }
    if (fVar18 < 0.9999695) {
      if (-1.0 < fVar18) {
        unaff_EBX = 0;
      }
      else {
        fVar18 = -1.0;
        unaff_EBX = -4;
      }
    }
    else {
      fVar18 = 0.9999695;
      unaff_EBX = -3;
    }
    *unaff_RBP = fVar19;
    *unaff_RSI = fVar18;
    if (iVar2 != 0) {
      unaff_EBX = iVar2;
    }
    unaff_RBP = unaff_RBP + (short)in_stack_00000108;
    unaff_RSI = unaff_RSI + in_stack_00000100;
    unaff_R15 = unaff_R15 + sStack0000000000000040;
    unaff_R14 = unaff_R14 + in_stack_000000f0;
    unaff_R12 = unaff_R12 + sStack0000000000000042;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return unaff_EBX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_18081ccc3(int32_t param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int unaff_EBX;
  float *unaff_RBP;
  float *pfVar5;
  float *unaff_RSI;
  float *pfVar6;
  uint unaff_EDI;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  float *unaff_R12;
  float *pfVar12;
  short unaff_R13W;
  float *unaff_R14;
  float *pfVar13;
  float *unaff_R15;
  float *pfVar14;
  int32_t uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  short sStack0000000000000040;
  short sStack0000000000000042;
  uint64_t uStack0000000000000058;
  short in_stack_000000f0;
  short in_stack_00000100;
  short in_stack_00000108;
  
  uVar15 = UISystem_EventHandler(param_1,unaff_R13W);
  uVar15 = UISystem_EventHandler(uVar15,unaff_R13W);
  uVar15 = UISystem_EventHandler(uVar15,unaff_R13W);
  UISystem_EventHandler(uVar15,unaff_R13W);
  uVar1 = 0;
  if (unaff_EDI < 4) {
    if (unaff_EDI == 0) {
      return unaff_EBX;
    }
  }
  else {
    lVar10 = (int64_t)in_stack_000000f0;
    lVar9 = (int64_t)sStack0000000000000040;
    lVar11 = (int64_t)in_stack_00000108;
    lVar7 = (int64_t)in_stack_00000100;
    lVar8 = (int64_t)sStack0000000000000042;
    uVar1 = (unaff_EDI - 4 >> 2) + 1;
    uStack0000000000000058 = (uint64_t)uVar1;
    uVar1 = uVar1 * 4;
    do {
      fVar18 = ((*unaff_R15 * 0.70710677 + *unaff_RBP) - *unaff_R14 * 0.8709636) -
               *unaff_R12 * 0.48977882;
      fVar17 = *unaff_R14 * 0.48977882 + *unaff_R12 * 0.8709636 +
               *unaff_R15 * 0.70710677 + *unaff_RSI;
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          iVar2 = 0;
        }
        else {
          fVar18 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        iVar2 = -3;
      }
      if (unaff_EBX != 0) {
        iVar2 = unaff_EBX;
      }
      if (fVar17 < 0.9999695) {
        if (-1.0 < fVar17) {
          iVar3 = 0;
        }
        else {
          fVar17 = -1.0;
          iVar3 = -4;
        }
      }
      else {
        fVar17 = 0.9999695;
        iVar3 = -3;
      }
      *unaff_RBP = fVar18;
      *unaff_RSI = fVar17;
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      pfVar14 = unaff_R15 + lVar9;
      pfVar13 = unaff_R14 + lVar10;
      pfVar5 = unaff_RBP + lVar11;
      pfVar12 = unaff_R12 + lVar8;
      pfVar6 = unaff_RSI + lVar7;
      fVar18 = ((*pfVar14 * 0.70710677 + *pfVar5) - *pfVar13 * 0.8709636) - *pfVar12 * 0.48977882;
      fVar17 = *pfVar13 * 0.48977882 + *pfVar12 * 0.8709636 + *pfVar14 * 0.70710677 + *pfVar6;
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          iVar2 = 0;
        }
        else {
          fVar18 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        iVar2 = -3;
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if (fVar17 < 0.9999695) {
        if (-1.0 < fVar17) {
          iVar3 = 0;
        }
        else {
          fVar17 = -1.0;
          iVar3 = -4;
        }
      }
      else {
        fVar17 = 0.9999695;
        iVar3 = -3;
      }
      *pfVar5 = fVar18;
      *pfVar6 = fVar17;
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      pfVar14 = pfVar14 + lVar9;
      pfVar13 = pfVar13 + lVar10;
      pfVar5 = pfVar5 + lVar11;
      pfVar12 = pfVar12 + lVar8;
      pfVar6 = pfVar6 + lVar7;
      fVar18 = ((*pfVar14 * 0.70710677 + *pfVar5) - *pfVar13 * 0.8709636) - *pfVar12 * 0.48977882;
      fVar17 = *pfVar13 * 0.48977882 + *pfVar12 * 0.8709636 + *pfVar14 * 0.70710677 + *pfVar6;
      if (fVar18 < 0.9999695) {
        if (-1.0 < fVar18) {
          iVar2 = 0;
        }
        else {
          fVar18 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar18 = 0.9999695;
        iVar2 = -3;
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if (fVar17 < 0.9999695) {
        if (-1.0 < fVar17) {
          iVar3 = 0;
        }
        else {
          fVar17 = -1.0;
          iVar3 = -4;
        }
      }
      else {
        fVar17 = 0.9999695;
        iVar3 = -3;
      }
      *pfVar5 = fVar18;
      *pfVar6 = fVar17;
      if (iVar2 != 0) {
        iVar3 = iVar2;
      }
      pfVar5 = pfVar5 + lVar11;
      pfVar6 = pfVar6 + lVar7;
      fVar17 = pfVar13[lVar10];
      fVar18 = pfVar12[lVar8];
      fVar16 = pfVar14[lVar9] * 0.70710677;
      fVar19 = ((fVar16 + *pfVar5) - fVar17 * 0.8709636) - fVar18 * 0.48977882;
      fVar17 = fVar17 * 0.48977882 + fVar18 * 0.8709636 + fVar16 + *pfVar6;
      if (fVar19 < 0.9999695) {
        if (-1.0 < fVar19) {
          iVar2 = 0;
        }
        else {
          fVar19 = -1.0;
          iVar2 = -4;
        }
      }
      else {
        fVar19 = 0.9999695;
        iVar2 = -3;
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      if (fVar17 < 0.9999695) {
        if (-1.0 < fVar17) {
          unaff_EBX = 0;
        }
        else {
          fVar17 = -1.0;
          unaff_EBX = -4;
        }
      }
      else {
        fVar17 = 0.9999695;
        unaff_EBX = -3;
      }
      *pfVar5 = fVar19;
      *pfVar6 = fVar17;
      if (iVar2 != 0) {
        unaff_EBX = iVar2;
      }
      unaff_RBP = pfVar5 + lVar11;
      unaff_RSI = pfVar6 + lVar7;
      unaff_R15 = pfVar14 + lVar9 + lVar9;
      unaff_R14 = pfVar13 + lVar10 + lVar10;
      unaff_R12 = pfVar12 + lVar8 + lVar8;
      uStack0000000000000058 = uStack0000000000000058 - 1;
    } while (uStack0000000000000058 != 0);
    unaff_R13W = sStack0000000000000042;
    if (unaff_EDI <= uVar1) {
      return unaff_EBX;
    }
  }
  uVar4 = (uint64_t)(unaff_EDI - uVar1);
  do {
    fVar18 = ((*unaff_R15 * 0.70710677 + *unaff_RBP) - *unaff_R14 * 0.8709636) -
             *unaff_R12 * 0.48977882;
    fVar17 = *unaff_R14 * 0.48977882 + *unaff_R12 * 0.8709636 + *unaff_R15 * 0.70710677 + *unaff_RSI
    ;
    if (fVar18 < 0.9999695) {
      if (-1.0 < fVar18) {
        iVar2 = 0;
      }
      else {
        fVar18 = -1.0;
        iVar2 = -4;
      }
    }
    else {
      fVar18 = 0.9999695;
      iVar2 = -3;
    }
    if (unaff_EBX != 0) {
      iVar2 = unaff_EBX;
    }
    if (fVar17 < 0.9999695) {
      if (-1.0 < fVar17) {
        unaff_EBX = 0;
      }
      else {
        fVar17 = -1.0;
        unaff_EBX = -4;
      }
    }
    else {
      fVar17 = 0.9999695;
      unaff_EBX = -3;
    }
    *unaff_RBP = fVar18;
    *unaff_RSI = fVar17;
    if (iVar2 != 0) {
      unaff_EBX = iVar2;
    }
    unaff_RBP = unaff_RBP + in_stack_00000108;
    unaff_RSI = unaff_RSI + in_stack_00000100;
    unaff_R15 = unaff_R15 + sStack0000000000000040;
    unaff_R14 = unaff_R14 + in_stack_000000f0;
    unaff_R12 = unaff_R12 + unaff_R13W;
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  return unaff_EBX;
}







