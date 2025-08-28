#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part210.c - 11 个函数

// 函数: void FUN_18078c188(float param_1)
void FUN_18078c188(float param_1)

{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t uVar7;
  uint uVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int32_t unaff_R12D;
  char unaff_R13B;
  uint64_t uVar11;
  int64_t unaff_R15;
  int32_t uVar12;
  float extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  float fVar13;
  char cStack0000000000000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  
  plVar1 = (int64_t *)(unaff_RBX + 0x12758);
  plVar9 = (int64_t *)*plVar1;
  fVar13 = 0.0;
  if (plVar9 != plVar1) {
    do {
      lVar6 = plVar9[2];
      param_1 = (float)func_0x0001807673f0(lVar6,&stack0x00000030);
      if (cStack0000000000000030 != '\0') {
        FUN_1807671a0(lVar6,unaff_RBX + 0x11080,&stack0x00000038,(int64_t)&stack0x00000030 + 4);
        if (0.0 < in_stack_00000038) {
          func_0x0001807673c0(lVar6,&stack0x00000078,0,0);
          iVar5 = FUN_180785c10(unaff_RBX + 0x12438,unaff_RBX + 0x11080,&stack0x00000078,0,
                                &stack0x00000040);
          if (iVar5 != 0) goto LAB_18078c6fc;
          in_stack_00000038 = in_stack_00000038 * (1.0 - in_stack_00000040);
          fStack0000000000000034 = fStack0000000000000034 * (1.0 - in_stack_00000040);
        }
        param_1 = in_stack_00000038;
        if (0.001 <= fStack0000000000000034) {
          *(uint64_t *)(unaff_RBP + -0x78) = 0;
          *(uint64_t *)(unaff_RBP + -0x70) = 0;
          *(uint64_t *)(unaff_RBP + -0x68) = 0;
          *(uint64_t *)(unaff_RBP + -0x60) = 0;
          *(uint64_t *)(unaff_RBP + -0x58) = 0;
          *(uint64_t *)(unaff_RBP + -0x50) = 0;
          func_0x000180767410(lVar6,unaff_RBP + -0x78);
          param_1 = (float)FUN_180767800(&stack0x00000048,unaff_RBP + -0x78,fStack0000000000000034);
          fVar13 = fVar13 + fStack0000000000000034;
        }
      }
      plVar9 = (int64_t *)*plVar9;
    } while (plVar9 != plVar1);
    unaff_R15 = unaff_RBX + 0x11678;
  }
  if (((int64_t *)*plVar1 != plVar1) || (*(int64_t **)(unaff_RBX + 0x12760) != plVar1)) {
    if (fVar13 < 1.0) {
      uVar12 = *(int32_t *)(unaff_RBX + 0x11654);
      *(uint64_t *)(unaff_RBP + -0x48) = 0;
      *(uint64_t *)(unaff_RBP + -0x40) = 0;
      *(uint64_t *)(unaff_RBP + -0x38) = 0;
      *(uint64_t *)(unaff_RBP + -0x30) = 0;
      *(uint64_t *)(unaff_RBP + -0x28) = 0;
      *(uint64_t *)(unaff_RBP + -0x20) = 0;
      func_0x000180746970(param_1,uVar12,unaff_RBP + -0x48);
      FUN_180767800(&stack0x00000048,unaff_RBP + -0x48,1.0 - fVar13);
      fVar13 = 1.0;
    }
    uVar12 = FUN_180767270(unaff_RBP + -0x18,&stack0x00000048,1.0 / fVar13);
    param_1 = (float)FUN_180743940(uVar12,*(int32_t *)(unaff_RBX + 0x11654),unaff_RBP + -0x18,1);
  }
  puVar4 = *(uint64_t **)(unaff_RBX + 0x11708);
  do {
    if (puVar4 == (uint64_t *)(unaff_RBX + 0x11708)) {
      iVar5 = FUN_18078baf0(param_1,unaff_R12D);
      if ((iVar5 != 0) || (iVar5 = FUN_18078c760(extraout_XMM0_Da_00,unaff_R12D), iVar5 != 0))
      break;
      uVar12 = extraout_XMM0_Da_01;
      if (*(int64_t *)(unaff_RBX + 0x670) != 0) {
        FUN_180772c50(unaff_R15,1);
        iVar5 = FUN_180789300(*(uint64_t *)(unaff_RBX + 0x670));
        if (iVar5 != 0) break;
        uVar12 = FUN_180772c50(unaff_R15,0);
      }
      if ((unaff_R13B == '\0') ||
         (iVar5 = FUN_18078a600(uVar12,1), uVar12 = extraout_XMM0_Da_02, iVar5 == 0)) {
        uVar7 = 0;
        uVar10 = uVar7;
        uVar11 = uVar7;
        if (*(int *)(unaff_RBX + 0x694) < 1) goto LAB_18078c477;
        goto LAB_18078c440;
      }
      break;
    }
    puVar3 = (uint64_t *)*puVar4;
    iVar5 = FUN_180754a30(puVar4[2],unaff_R12D,0);
    puVar4 = puVar3;
    param_1 = extraout_XMM0_Da;
  } while (iVar5 == 0);
  goto LAB_18078c6fc;
  while( true ) {
    uVar8 = (int)uVar10 + 1;
    uVar10 = (uint64_t)uVar8;
    uVar11 = uVar11 + 0x38;
    if (*(int *)(unaff_RBX + 0x694) <= (int)uVar8) break;
LAB_18078c440:
    lVar6 = *(int64_t *)(*(int64_t *)(unaff_RBX + 0x6a0) + 0x30 + uVar11);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x31) != '\0')) &&
       (iVar5 = FUN_180748290(uVar12,uVar10), uVar12 = extraout_XMM0_Da_03, iVar5 != 0))
    goto LAB_18078c6fc;
  }
LAB_18078c477:
  if (((unaff_R13B != '\0') && (*(int64_t *)(unaff_RBX + 0x11838) != 0)) &&
     (((*(uint *)(unaff_RBX + 0x11840) & 0x1000) != 0 &&
      (iVar5 = FUN_1807499f0(), uVar12 = extraout_XMM0_Da_04, iVar5 != 0x39)))) {
    if (iVar5 != 0) goto LAB_18078c6fc;
    if (*(char *)(unaff_RBX + 0x6a8) != '\0') {
      *(int8_t *)(unaff_RBX + 0x6a8) = 0;
      uVar12 = (**(code **)(unaff_RBX + 0x11838))
                         (extraout_XMM0_Da_04,0x1000,0,0,*(uint64_t *)(unaff_RBX + 0x11670));
    }
  }
  if (0 < *(int *)(unaff_RBX + 0x11400)) {
    lVar6 = unaff_RBX + 0x110ed;
    do {
      *(int16_t *)(lVar6 + -1) = 0;
      lVar6 = lVar6 + 0x70;
      uVar8 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar8;
    } while ((int)uVar8 < *(int *)(unaff_RBX + 0x11400));
  }
  *(int8_t *)(unaff_RBX + 0x12440) = 0;
  if ((*(byte *)(unaff_RBX + 0x78) & 1) != 0) {
    uVar12 = FUN_18078c950();
  }
  lVar6 = *(int64_t *)(unaff_RBX + 0x670);
  if ((lVar6 != 0) && (0 < *(int *)(unaff_RBX + 0x10f70))) {
    if (unaff_RBX != 0) {
      uVar12 = func_0x000180743c20(uVar12,7);
      lVar6 = *(int64_t *)(unaff_RBX + 0x670);
    }
    uVar2 = *(int32_t *)(lVar6 + 0x318);
    for (puVar4 = *(uint64_t **)(unaff_RBX + 0x10f58);
        puVar4 != (uint64_t *)(unaff_RBX + 0x10f58); puVar4 = (uint64_t *)*puVar4) {
      lVar6 = puVar4[2];
      if (*(char *)(lVar6 + 0x212) != '\0') {
        uVar12 = FUN_18075a370(lVar6,uVar2);
      }
      if (*(char *)(lVar6 + 0x426) != '\0') {
        uVar12 = FUN_18075a370(lVar6 + 0x214,uVar2);
      }
    }
    if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(uVar12,7);
    }
  }
  iVar5 = FUN_180743660();
  if (iVar5 == 0) {
    uVar12 = extraout_XMM0_Da_05;
    if (unaff_RBX != 0) {
      uVar12 = func_0x000180743c20(extraout_XMM0_Da_05,6);
    }
    puVar4 = *(uint64_t **)(unaff_RBX + 0x10ff0);
    while (puVar4 != (uint64_t *)(unaff_RBX + 0x10ff0)) {
      lVar6 = puVar4[2];
      puVar4 = (uint64_t *)*puVar4;
      if (((*(int64_t *)(lVar6 + 0x120) != 0) && ((*(byte *)(lVar6 + 0x11a) & 0x40) != 0)) &&
         ((*(uint *)(lVar6 + 100) >> 10 & 1) == 0)) {
        uVar12 = (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,0x40,0);
      }
    }
    if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(uVar12,6);
    }
    puVar4 = puRam0000000000012780;
    if ((lRam0000000000012770 == 0) ||
       (iVar5 = FUN_1807d0fe0(), puVar4 = puRam0000000000012780, iVar5 == 0)) {
      for (; puVar4 != (uint64_t *)0x12780; puVar4 = (uint64_t *)*puVar4) {
        lVar6 = puVar4[2];
        if ((*(code **)(lVar6 + 0x120) != (code *)0x0) && ((*(byte *)(lVar6 + 0x11a) & 4) != 0)) {
          (**(code **)(lVar6 + 0x120))(lVar6 + 0xb0,4,0);
        }
      }
      uVar12 = FUN_180772cf0(0x11678,0x5f);
      if ((pcRam0000000000011838 != (code *)0x0) && ((uRam0000000000011840 & 0x800) != 0)) {
        (*pcRam0000000000011838)(uVar12,0x800,0,0,uRam0000000000011670);
      }
    }
  }
LAB_18078c6fc:
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0x18) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18078c72e(void)
void FUN_18078c72e(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0x18) ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18078c746(void)
void FUN_18078c746(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0x18) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078c760(int64_t param_1,int param_2)
void FUN_18078c760(int64_t param_1,int param_2)

{
  float fVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *plVar6;
  bool bVar7;
  float fVar8;
  int aiStackX_8 [2];
  
  FUN_180768360(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
  plVar2 = *(int64_t **)(param_1 + 0x11728);
  do {
    while( true ) {
      plVar6 = plVar2;
      if (plVar6 == (int64_t *)(param_1 + 0x11728)) {
                    // WARNING: Subroutine does not return
        FUN_180768400(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
      }
      aiStackX_8[0] = 0;
      plVar2 = (int64_t *)*plVar6;
      *(int32_t *)(plVar6 + 0xe) = 0;
      if (*(int *)((int64_t)plVar6 + 0x6c) == 1) {
        FUN_180754fe0(plVar6,aiStackX_8);
      }
      if (aiStackX_8[0] != 0) break;
      *(int64_t *)plVar6[1] = *plVar6;
      *(int64_t *)(*plVar6 + 8) = plVar6[1];
      plVar6[1] = (int64_t)plVar6;
      *plVar6 = (int64_t)plVar6;
      lVar5 = *(int64_t *)(param_1 + 0x11740);
      plVar6[1] = param_1 + 0x11740;
      *plVar6 = lVar5;
      *(int64_t **)(lVar5 + 8) = plVar6;
      *(int64_t **)plVar6[1] = plVar6;
    }
    plVar3 = (int64_t *)plVar6[8];
    while (plVar3 != plVar6 + 8) {
      plVar4 = (int64_t *)plVar3[2];
      plVar3 = (int64_t *)*plVar3;
      if ((*(int *)((int64_t)plVar6 + 0x6c) == 1) && (-1 < (int)plVar6[0xd])) {
        *(int *)(plVar6 + 0xe) = (int)plVar6[0xe] + 1;
        if ((int)plVar6[0xd] < (int)plVar6[0xe]) {
          *(int32_t *)((int64_t)plVar4 + 0x21c) = 0;
        }
        else {
          *(int32_t *)((int64_t)plVar4 + 0x21c) = 0x3f800000;
        }
      }
      fVar8 = *(float *)(plVar4 + 0x43);
      fVar1 = *(float *)((int64_t)plVar4 + 0x21c);
      if (fVar8 != fVar1) {
        if (*(float *)((int64_t)plVar6 + 0x74) < 0.001) {
LAB_18078c8ad:
          *(float *)(plVar4 + 0x43) = fVar1;
        }
        else {
          bVar7 = fVar8 < fVar1;
          if (bVar7) {
            fVar8 = (0.001 / *(float *)((int64_t)plVar6 + 0x74)) * (float)param_2 + fVar8;
            *(float *)(plVar4 + 0x43) = fVar8;
            if (fVar1 < fVar8) {
              *(float *)(plVar4 + 0x43) = fVar1;
              fVar8 = fVar1;
            }
            bVar7 = fVar8 < fVar1;
          }
          if ((!bVar7 && fVar8 != fVar1) &&
             (fVar8 = fVar8 - (0.001 / *(float *)((int64_t)plVar6 + 0x74)) * (float)param_2,
             *(float *)(plVar4 + 0x43) = fVar8, fVar8 < fVar1)) goto LAB_18078c8ad;
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,(int)plVar4[6],1);
      }
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078c796(void)
void FUN_18078c796(void)

{
  float fVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *unaff_RBX;
  int unaff_EBP;
  int64_t unaff_R13;
  int64_t unaff_R15;
  bool bVar6;
  float fVar7;
  int iStack0000000000000060;
  
  do {
    iStack0000000000000060 = 0;
    plVar2 = (int64_t *)*unaff_RBX;
    *(int32_t *)(unaff_RBX + 0xe) = 0;
    if (*(int *)((int64_t)unaff_RBX + 0x6c) == 1) {
      FUN_180754fe0(unaff_RBX,&stack0x00000060);
    }
    if (iStack0000000000000060 == 0) {
      *(int64_t *)unaff_RBX[1] = *unaff_RBX;
      *(int64_t *)(*unaff_RBX + 8) = unaff_RBX[1];
      unaff_RBX[1] = (int64_t)unaff_RBX;
      *unaff_RBX = (int64_t)unaff_RBX;
      lVar5 = *(int64_t *)(unaff_R13 + 0x11740);
      unaff_RBX[1] = unaff_R13 + 0x11740;
      *unaff_RBX = lVar5;
      *(int64_t **)(lVar5 + 8) = unaff_RBX;
      *(int64_t **)unaff_RBX[1] = unaff_RBX;
    }
    else {
      plVar3 = (int64_t *)unaff_RBX[8];
      while (plVar3 != unaff_RBX + 8) {
        plVar4 = (int64_t *)plVar3[2];
        plVar3 = (int64_t *)*plVar3;
        if ((*(int *)((int64_t)unaff_RBX + 0x6c) == 1) && (-1 < (int)unaff_RBX[0xd])) {
          *(int *)(unaff_RBX + 0xe) = (int)unaff_RBX[0xe] + 1;
          if ((int)unaff_RBX[0xd] < (int)unaff_RBX[0xe]) {
            *(int32_t *)((int64_t)plVar4 + 0x21c) = 0;
          }
          else {
            *(int32_t *)((int64_t)plVar4 + 0x21c) = 0x3f800000;
          }
        }
        fVar7 = *(float *)(plVar4 + 0x43);
        fVar1 = *(float *)((int64_t)plVar4 + 0x21c);
        if (fVar7 != fVar1) {
          if (*(float *)((int64_t)unaff_RBX + 0x74) < 0.001) {
LAB_18078c8ad:
            *(float *)(plVar4 + 0x43) = fVar1;
          }
          else {
            bVar6 = fVar7 < fVar1;
            if (bVar6) {
              fVar7 = (0.001 / *(float *)((int64_t)unaff_RBX + 0x74)) * (float)unaff_EBP + fVar7;
              *(float *)(plVar4 + 0x43) = fVar7;
              if (fVar1 < fVar7) {
                *(float *)(plVar4 + 0x43) = fVar1;
                fVar7 = fVar1;
              }
              bVar6 = fVar7 < fVar1;
            }
            if ((!bVar6 && fVar7 != fVar1) &&
               (fVar7 = fVar7 - (0.001 / *(float *)((int64_t)unaff_RBX + 0x74)) * (float)unaff_EBP,
               *(float *)(plVar4 + 0x43) = fVar7, fVar7 < fVar1)) goto LAB_18078c8ad;
          }
          (**(code **)(*plVar4 + 0x20))(plVar4,(int)plVar4[6],1);
        }
      }
    }
    unaff_RBX = plVar2;
    if (plVar2 == (int64_t *)unaff_R15) {
                    // WARNING: Subroutine does not return
      FUN_180768400(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18078c92b(void)
void FUN_18078c92b(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x120));
}





// 函数: void FUN_18078c950(int64_t param_1)
void FUN_18078c950(int64_t param_1)

{
  int64_t *plVar1;
  
  FUN_180772cd0(param_1 + 0x12374);
  func_0x000180743c20(param_1,10);
  plVar1 = *(int64_t **)(param_1 + 0x121e0);
  *(int64_t **)(param_1 + 0x121f8) = plVar1;
  if (plVar1 != (int64_t *)(param_1 + 0x121e0)) {
    *(int64_t *)(param_1 + 0x12200) = *plVar1;
                    // WARNING: Subroutine does not return
    FUN_180743d60(param_1,10);
  }
  *(uint64_t *)(param_1 + 0x12200) = 0;
                    // WARNING: Subroutine does not return
  FUN_180743d60(param_1,10);
}





// 函数: void FUN_18078c95d(int64_t param_1)
void FUN_18078c95d(int64_t param_1)

{
  int64_t *plVar1;
  int64_t unaff_RBX;
  
  FUN_180772cd0(param_1 + 0x12374);
  func_0x000180743c20();
  plVar1 = *(int64_t **)(unaff_RBX + 0x121e0);
  *(int64_t **)(unaff_RBX + 0x121f8) = plVar1;
  if (plVar1 != (int64_t *)(unaff_RBX + 0x121e0)) {
    *(int64_t *)(unaff_RBX + 0x12200) = *plVar1;
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  *(uint64_t *)(unaff_RBX + 0x12200) = 0;
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}





// 函数: void FUN_18078c991(void)
void FUN_18078c991(void)

{
  uint64_t *in_RAX;
  int64_t unaff_RBX;
  
  *(uint64_t *)(unaff_RBX + 0x12200) = *in_RAX;
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}





// 函数: void FUN_18078ca0e(void)
void FUN_18078ca0e(void)

{
  int64_t unaff_RBX;
  
  *(uint64_t *)(unaff_RBX + 0x12200) = 0;
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}





// 函数: void FUN_18078ca50(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t param_4)
void FUN_18078ca50(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t param_4)

{
  uint *puVar1;
  int64_t lVar2;
  
  do {
    lVar2 = param_2[2];
    if ((*(int64_t *)(lVar2 + 0x178) != 0) &&
       (*(char *)(*(int64_t *)(lVar2 + 0x178) + 0x88) != '\0')) {
      LOCK();
      *(uint *)(lVar2 + 0x58) = *(uint *)(lVar2 + 0x58) | 0x40;
      UNLOCK();
      if (*(int64_t *)(lVar2 + 0xa0) != 0) {
        if (*(int64_t *)(lVar2 + 0xa8) == 0) {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0xa0) + (int64_t)*(int *)(lVar2 + 0xc0) * 8);
          if (lVar2 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar2 + 0x58);
            *puVar1 = *puVar1 | 0x40;
            UNLOCK();
          }
        }
        else {
          LOCK();
          puVar1 = (uint *)(*(int64_t *)(lVar2 + 0xa8) + 0x58);
          *puVar1 = *puVar1 | 0x40;
          UNLOCK();
        }
      }
    }
    param_2 = (int64_t *)*param_2;
  } while (param_2 != (int64_t *)param_4);
                    // WARNING: Subroutine does not return
  FUN_180743d60();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



