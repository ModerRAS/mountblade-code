#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part073.c - 10 个函数

// 函数: void FUN_1805ec3e5(int64_t param_1,uint64_t param_2)
void FUN_1805ec3e5(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *unaff_RBX;
  int64_t *unaff_RSI;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  *(int *)(param_1 + 0x60) = (int)param_2;
  *(int *)(param_1 + 100) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(param_1 + 0x68) = in_XMM1_Dc;
  *(int32_t *)(param_1 + 0x6c) = in_XMM1_Dd;
  FUN_180254610();
  lVar1 = *unaff_RSI;
  fVar2 = *(float *)(lVar1 + 0x90);
  fVar3 = *(float *)(lVar1 + 0x94);
  fVar4 = *(float *)(lVar1 + 0x98);
  fVar5 = *(float *)(lVar1 + 0x9c);
  fVar6 = *(float *)(lVar1 + 0x70);
  fVar7 = *(float *)(lVar1 + 0x74);
  fVar8 = *(float *)(lVar1 + 0x78);
  fVar9 = *(float *)(lVar1 + 0x7c);
  fVar10 = *(float *)(lVar1 + 0x80);
  fVar11 = *(float *)(lVar1 + 0x84);
  fVar12 = *(float *)(lVar1 + 0x88);
  fVar13 = *(float *)(lVar1 + 0x8c);
  fVar14 = *(float *)(lVar1 + 0xa0);
  fVar15 = *(float *)(lVar1 + 0xa4);
  fVar16 = *(float *)(lVar1 + 0xa8);
  fVar17 = *(float *)(lVar1 + 0xac);
  *unaff_RBX = fStack0000000000000044 * fVar10 + fStack0000000000000040 * fVar6 +
               in_stack_00000048 * fVar2;
  unaff_RBX[1] = fStack0000000000000044 * fVar11 + fStack0000000000000040 * fVar7 +
                 in_stack_00000048 * fVar3;
  unaff_RBX[2] = fStack0000000000000044 * fVar12 + fStack0000000000000040 * fVar8 +
                 in_stack_00000048 * fVar4;
  unaff_RBX[3] = fStack0000000000000044 * fVar13 + fStack0000000000000040 * fVar9 +
                 in_stack_00000048 * fVar5;
  unaff_RBX[4] = fStack0000000000000054 * fVar10 + fStack0000000000000050 * fVar6 +
                 in_stack_00000058 * fVar2;
  unaff_RBX[5] = fStack0000000000000054 * fVar11 + fStack0000000000000050 * fVar7 +
                 in_stack_00000058 * fVar3;
  unaff_RBX[6] = fStack0000000000000054 * fVar12 + fStack0000000000000050 * fVar8 +
                 in_stack_00000058 * fVar4;
  unaff_RBX[7] = fStack0000000000000054 * fVar13 + fStack0000000000000050 * fVar9 +
                 in_stack_00000058 * fVar5;
  unaff_RBX[8] = fStack0000000000000064 * fVar10 + fStack0000000000000060 * fVar6 +
                 in_stack_00000068 * fVar2;
  unaff_RBX[9] = fStack0000000000000064 * fVar11 + fStack0000000000000060 * fVar7 +
                 in_stack_00000068 * fVar3;
  unaff_RBX[10] =
       fStack0000000000000064 * fVar12 + fStack0000000000000060 * fVar8 + in_stack_00000068 * fVar4;
  unaff_RBX[0xb] =
       fStack0000000000000064 * fVar13 + fStack0000000000000060 * fVar9 + in_stack_00000068 * fVar5;
  unaff_RBX[0xc] =
       fStack0000000000000074 * fVar10 + fStack0000000000000070 * fVar6 + in_stack_00000078 * fVar2
       + fVar14;
  unaff_RBX[0xd] =
       fStack0000000000000074 * fVar11 + fStack0000000000000070 * fVar7 + in_stack_00000078 * fVar3
       + fVar15;
  unaff_RBX[0xe] =
       fStack0000000000000074 * fVar12 + fStack0000000000000070 * fVar8 + in_stack_00000078 * fVar4
       + fVar16;
  unaff_RBX[0xf] =
       fStack0000000000000074 * fVar13 + fStack0000000000000070 * fVar9 + in_stack_00000078 * fVar5
       + fVar17;
  return;
}






// 函数: void FUN_1805ec4f2(void)
void FUN_1805ec4f2(void)

{
  uint64_t *unaff_RBX;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  *unaff_RBX = in_stack_00000040;
  unaff_RBX[1] = in_stack_00000048;
  unaff_RBX[2] = in_stack_00000050;
  unaff_RBX[3] = in_stack_00000058;
  unaff_RBX[4] = in_stack_00000060;
  unaff_RBX[5] = in_stack_00000068;
  unaff_RBX[6] = in_stack_00000070;
  unaff_RBX[7] = in_stack_00000078;
  return;
}






// 函数: void FUN_1805ec530(int64_t *param_1,int32_t param_2)
void FUN_1805ec530(int64_t *param_1,int32_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  int32_t uVar5;
  
  if (((*param_1 != 0) && (lVar1 = *(int64_t *)(*param_1 + 0x260), lVar1 != 0)) &&
     (lVar1 = *(int64_t *)(lVar1 + 0x210), lVar1 != 0)) {
    uVar5 = param_2;
    if (*(char *)((int64_t)param_1 + 0x124) != '\0') {
      uVar5 = 0;
    }
    *(int32_t *)(lVar1 + 0x100) = uVar5;
  }
  if (param_1[1] != 0) {
    FUN_1805ec530();
  }
  uVar2 = 0;
  uVar4 = uVar2;
  if (param_1[3] - param_1[2] >> 3 != 0) {
    do {
      FUN_1805ec530(*(uint64_t *)(uVar2 + param_1[2]),param_2);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[3] - param_1[2] >> 3));
  }
  return;
}






// 函数: void FUN_1805ec59f(void)
void FUN_1805ec59f(void)

{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    FUN_1805ec530(*(uint64_t *)(uVar1 + *(int64_t *)(unaff_RBX + 0x10)));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x18) - *(int64_t *)(unaff_RBX + 0x10) >> 3));
  return;
}






// 函数: void FUN_1805ec5df(void)
void FUN_1805ec5df(void)

{
  return;
}






// 函数: void FUN_1805ec620(uint64_t *param_1,char param_2,int64_t *param_3,uint64_t param_4,
void FUN_1805ec620(uint64_t *param_1,char param_2,int64_t *param_3,uint64_t param_4,
                  uint64_t param_5,char param_6)

{
  int64_t *plVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint uVar18;
  uint64_t uVar19;
  int8_t uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint64_t uStackX_8;
  uint64_t uStack_d4;
  float fStack_cc;
  uint64_t uStack_c4;
  float fStack_bc;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  uVar17 = 0;
  if (param_3 == (int64_t *)0x0) {
    plVar1 = (int64_t *)param_1[0xc];
    if (plVar1 != (int64_t *)0x0) {
      if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
        iVar15 = (int)plVar1[0x42];
      }
      else {
        iVar15 = (**(code **)(*plVar1 + 0x130))();
      }
      if (iVar15 != 0) {
        uStackX_8 = uStackX_8 & 0xffffffff00000000;
        (**(code **)(*(int64_t *)param_1[0xc] + 0x128))((int64_t *)param_1[0xc],&uStackX_8);
      }
    }
    plVar1 = (int64_t *)param_1[0xd];
    if (plVar1 != (int64_t *)0x0) {
      if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
        iVar15 = (int)plVar1[0x42];
      }
      else {
        iVar15 = (**(code **)(*plVar1 + 0x130))();
      }
      if (iVar15 != 0) {
        uStackX_8 = uStackX_8 & 0xffffffff00000000;
        (**(code **)(*(int64_t *)param_1[0xd] + 0x128))((int64_t *)param_1[0xd],&uStackX_8);
      }
    }
    uStackX_8 = CONCAT44(uStackX_8._4_4_,-(uint)(param_2 != '\0')) & 0xffffffff00000021;
    plVar1 = (int64_t *)param_1[0xe];
    if (plVar1 != (int64_t *)0x0) {
      if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
        iVar15 = (int)plVar1[0x42];
      }
      else {
        iVar15 = (**(code **)(*plVar1 + 0x130))();
      }
      if (iVar15 != (int)uStackX_8) {
        (**(code **)(*(int64_t *)param_1[0xe] + 0x128))((int64_t *)param_1[0xe],&uStackX_8);
      }
    }
    plVar1 = (int64_t *)param_1[0xf];
    if (plVar1 != (int64_t *)0x0) {
      if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
        iVar15 = (int)plVar1[0x42];
      }
      else {
        iVar15 = (**(code **)(*plVar1 + 0x130))();
      }
      if (iVar15 != (int)uStackX_8) {
        (**(code **)(*(int64_t *)param_1[0xf] + 0x128))((int64_t *)param_1[0xf],&uStackX_8);
      }
    }
    plVar1 = (int64_t *)param_1[0x10];
    if (plVar1 != (int64_t *)0x0) {
      if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
        iVar15 = (int)plVar1[0x42];
      }
      else {
        iVar15 = (**(code **)(*plVar1 + 0x130))();
      }
      if (iVar15 != 0) {
        uStackX_8 = uStackX_8 & 0xffffffff00000000;
        (**(code **)(*(int64_t *)param_1[0x10] + 0x128))((int64_t *)param_1[0x10],&uStackX_8);
      }
    }
    uVar19 = *param_1;
    if ((param_6 == '\0') && (*(char *)((int64_t)param_1 + 0x121) == '\0')) {
      uVar20 = 0;
    }
    else {
      uVar20 = 1;
    }
    if (((uVar19 != 0) && (lVar2 = *(int64_t *)(uVar19 + 0x260), lVar2 != 0)) &&
       ((*(byte *)(lVar2 + 0xa8) & 1) == 0)) {
      FUN_1802fac00(lVar2,*(int64_t *)(lVar2 + 0x10) + 0x70,0xbf800000);
    }
    FUN_1805ec350(param_1,&fStack_88,0,param_4,param_5,param_2,uVar20);
    FUN_1802ea790(uVar19,&fStack_88);
    (**(code **)(*(int64_t *)param_1[0xb] + 0x148))((int64_t *)param_1[0xb],&system_data_0300);
    FUN_1805ea350(param_1);
    if ((param_2 == '\0') || (uStackX_8 = uStackX_8 & 0xffffffff00000000, param_1[0xe] == 0)) {
      uStackX_8 = CONCAT44(uStackX_8._4_4_,0x21);
    }
    iVar15 = (**(code **)(*(int64_t *)param_1[0xb] + 0x130))();
    if (iVar15 == (int)uStackX_8) goto LAB_1805ecb8d;
    puVar16 = &uStackX_8;
  }
  else {
    if (*(char *)((int64_t)param_1 + 0x126) != '\0') {
      plVar1 = (int64_t *)param_1[0xc];
      if (plVar1 != (int64_t *)0x0) {
        if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
          iVar15 = (int)plVar1[0x42];
        }
        else {
          iVar15 = (**(code **)(*plVar1 + 0x130))();
        }
        if (iVar15 != 0) {
          uStackX_8 = uStackX_8 & 0xffffffff00000000;
          (**(code **)(*(int64_t *)param_1[0xc] + 0x128))((int64_t *)param_1[0xc],&uStackX_8);
        }
      }
      plVar1 = (int64_t *)param_1[0xd];
      if (plVar1 != (int64_t *)0x0) {
        if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
          iVar15 = (int)plVar1[0x42];
        }
        else {
          iVar15 = (**(code **)(*plVar1 + 0x130))();
        }
        if (iVar15 != 0) {
          uStackX_8 = uStackX_8 & 0xffffffff00000000;
          (**(code **)(*(int64_t *)param_1[0xd] + 0x128))((int64_t *)param_1[0xd],&uStackX_8);
        }
      }
      plVar1 = (int64_t *)param_1[0xe];
      if (plVar1 != (int64_t *)0x0) {
        if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
          iVar15 = (int)plVar1[0x42];
        }
        else {
          iVar15 = (**(code **)(*plVar1 + 0x130))();
        }
        if (iVar15 != 0) {
          uStackX_8 = uStackX_8 & 0xffffffff00000000;
          (**(code **)(*(int64_t *)param_1[0xe] + 0x128))((int64_t *)param_1[0xe],&uStackX_8);
        }
      }
      plVar1 = (int64_t *)param_1[0xf];
      if (plVar1 != (int64_t *)0x0) {
        if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
          iVar15 = (int)plVar1[0x42];
        }
        else {
          iVar15 = (**(code **)(*plVar1 + 0x130))();
        }
        if (iVar15 != 0) {
          uStackX_8 = uStackX_8 & 0xffffffff00000000;
          (**(code **)(*(int64_t *)param_1[0xf] + 0x128))((int64_t *)param_1[0xf],&uStackX_8);
        }
      }
      plVar1 = (int64_t *)param_1[0x10];
      if (plVar1 != (int64_t *)0x0) {
        if (*(code **)(*plVar1 + 0x130) == (code *)&unknown_var_4032_ptr) {
          iVar15 = (int)plVar1[0x42];
        }
        else {
          iVar15 = (**(code **)(*plVar1 + 0x130))();
        }
        if (iVar15 != 0) {
          uStackX_8 = uStackX_8 & 0xffffffff00000000;
          (**(code **)(*(int64_t *)param_1[0x10] + 0x128))((int64_t *)param_1[0x10],&uStackX_8);
        }
      }
      iVar15 = (**(code **)(*(int64_t *)param_1[0xb] + 0x130))();
      if (iVar15 != 0) {
        uStackX_8 = uStackX_8 & 0xffffffff00000000;
        (**(code **)(*(int64_t *)param_1[0xb] + 0x128))((int64_t *)param_1[0xb],&uStackX_8);
      }
      goto LAB_1805ecb8d;
    }
    uStackX_8 = *param_1;
    plVar1 = (int64_t *)*param_3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    if (*(char *)((int64_t)param_1 + 0x124) == '\0') {
      uStack_d4 = 0x3f800000;
      fStack_cc = 0.0;
      uStack_c4 = 0x3f80000000000000;
      fStack_bc = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 1.0;
      fVar24 = *(float *)(param_3 + 0x25);
      fVar25 = *(float *)((int64_t)param_3 + 300);
      fVar26 = *(float *)(param_3 + 0x26);
    }
    else {
      uStack_d4 = *(uint64_t *)((int64_t)param_1 + 0xdc);
      fStack_cc = (float)*(uint64_t *)((int64_t)param_1 + 0xe4);
      uStack_c4 = *(uint64_t *)((int64_t)param_1 + 0xec);
      fStack_bc = (float)*(uint64_t *)((int64_t)param_1 + 0xf4);
      fVar21 = *(float *)((int64_t)param_1 + 0xfc);
      fVar22 = *(float *)(param_1 + 0x20);
      fVar23 = *(float *)((int64_t)param_1 + 0x104);
      fVar24 = *(float *)((int64_t)param_1 + 0x10c);
      fVar25 = *(float *)(param_1 + 0x22);
      fVar26 = *(float *)((int64_t)param_1 + 0x114);
    }
    fVar3 = *(float *)(plVar1 + 0xe);
    fVar4 = *(float *)((int64_t)plVar1 + 0x74);
    fVar5 = *(float *)(plVar1 + 0xf);
    fVar6 = *(float *)((int64_t)plVar1 + 0x7c);
    fVar7 = *(float *)(plVar1 + 0x10);
    fVar8 = *(float *)((int64_t)plVar1 + 0x84);
    fVar9 = *(float *)(plVar1 + 0x11);
    fVar10 = *(float *)((int64_t)plVar1 + 0x8c);
    fVar11 = *(float *)(plVar1 + 0x12);
    fVar12 = *(float *)((int64_t)plVar1 + 0x94);
    fVar13 = *(float *)(plVar1 + 0x13);
    fVar14 = *(float *)((int64_t)plVar1 + 0x9c);
    fStack_88 = (float)uStack_d4 * fVar3 + uStack_d4._4_4_ * fVar7 + fStack_cc * fVar11;
    fStack_84 = (float)uStack_d4 * fVar4 + uStack_d4._4_4_ * fVar8 + fStack_cc * fVar12;
    fStack_80 = (float)uStack_d4 * fVar5 + uStack_d4._4_4_ * fVar9 + fStack_cc * fVar13;
    fStack_7c = (float)uStack_d4 * fVar6 + uStack_d4._4_4_ * fVar10 + fStack_cc * fVar14;
    fStack_78 = (float)uStack_c4 * fVar3 + uStack_c4._4_4_ * fVar7 + fStack_bc * fVar11;
    fStack_74 = (float)uStack_c4 * fVar4 + uStack_c4._4_4_ * fVar8 + fStack_bc * fVar12;
    fStack_70 = (float)uStack_c4 * fVar5 + uStack_c4._4_4_ * fVar9 + fStack_bc * fVar13;
    fStack_6c = (float)uStack_c4 * fVar6 + uStack_c4._4_4_ * fVar10 + fStack_bc * fVar14;
    fStack_68 = fVar21 * fVar3 + fVar22 * fVar7 + fVar23 * fVar11;
    fStack_64 = fVar21 * fVar4 + fVar22 * fVar8 + fVar23 * fVar12;
    fStack_60 = fVar21 * fVar5 + fVar22 * fVar9 + fVar23 * fVar13;
    fStack_5c = fVar21 * fVar6 + fVar22 * fVar10 + fVar23 * fVar14;
    fStack_58 = fVar24 * fVar3 + fVar25 * fVar7 + fVar26 * fVar11 + *(float *)(plVar1 + 0x14);
    fStack_54 = fVar24 * fVar4 + fVar25 * fVar8 + fVar26 * fVar12 +
                *(float *)((int64_t)plVar1 + 0xa4);
    fStack_50 = fVar24 * fVar5 + fVar25 * fVar9 + fVar26 * fVar13 + *(float *)(plVar1 + 0x15);
    fStack_4c = fVar24 * fVar6 + fVar25 * fVar10 + fVar26 * fVar14 +
                *(float *)((int64_t)plVar1 + 0xac);
    FUN_1802ea790(uStackX_8,&fStack_88);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    (**(code **)(*(int64_t *)param_1[0xb] + 0x148))((int64_t *)param_1[0xb],&system_data_0300);
    iVar15 = (**(code **)(*(int64_t *)param_1[0xb] + 0x130))();
    if (iVar15 == 0x21) goto LAB_1805ecb8d;
    puVar16 = (uint64_t *)&unknown_var_6612_ptr;
  }
  (**(code **)(*(int64_t *)param_1[0xb] + 0x128))((int64_t *)param_1[0xb],puVar16);
LAB_1805ecb8d:
  if (param_1[1] != 0) {
    FUN_1805ec620(param_1[1],0,param_1,param_4,param_5,0);
  }
  uVar19 = uVar17;
  if ((int64_t)(param_1[3] - param_1[2]) >> 3 != 0) {
    do {
      FUN_1805ec620(*(uint64_t *)(param_1[2] + uVar17),0,param_1,*(uint64_t *)(*param_1 + 0x260)
                    ,param_5,0);
      uVar18 = (int)uVar19 + 1;
      uVar17 = uVar17 + 8;
      uVar19 = (uint64_t)uVar18;
    } while ((uint64_t)(int64_t)(int)uVar18 <
             (uint64_t)((int64_t)(param_1[3] - param_1[2]) >> 3));
  }
  if (*(int64_t *)(*param_1 + 0x260) != 0) {
    FUN_1802fba50();
  }
  return;
}






// 函数: void FUN_1805ecc80(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1805ecc80(int64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uStackX_18;
  int8_t auStack_48 [8];
  uint64_t uStack_40;
  
  plVar3 = (int64_t *)param_1[0xc];
  uStackX_18 = param_3;
  if (plVar3 != (int64_t *)0x0) {
    uStackX_18 = param_3 & 0xffffffff00000000;
    (**(code **)(*plVar3 + 0x128))(plVar3,&uStackX_18);
  }
  plVar3 = (int64_t *)param_1[0xd];
  if (plVar3 != (int64_t *)0x0) {
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    (**(code **)(*plVar3 + 0x128))(plVar3,&uStackX_18);
  }
  plVar3 = (int64_t *)param_1[0xe];
  if (plVar3 != (int64_t *)0x0) {
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    (**(code **)(*plVar3 + 0x128))(plVar3,&uStackX_18);
  }
  plVar3 = (int64_t *)param_1[0xf];
  if (plVar3 != (int64_t *)0x0) {
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    (**(code **)(*plVar3 + 0x128))(plVar3,&uStackX_18);
  }
  lVar1 = *param_1;
  if (((lVar1 != 0) && (lVar2 = *(int64_t *)(lVar1 + 0x260), lVar2 != 0)) &&
     ((*(byte *)(lVar2 + 0xa8) & 1) == 0)) {
    FUN_1802fac00(lVar2,*(int64_t *)(lVar2 + 0x10) + 0x70,0xbf800000);
  }
  FUN_1805ec350(param_1,auStack_48,0,0,0,0,0);
  FUN_1802ea790(lVar1,auStack_48);
  plVar3 = (int64_t *)param_1[0x10];
  if (plVar3 == (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xb] + 0x128))((int64_t *)param_1[0xb],&unknown_var_6612_ptr);
    (**(code **)(*(int64_t *)param_1[0xb] + 0x148))((int64_t *)param_1[0xb],param_2);
  }
  else {
    (**(code **)(*plVar3 + 0x148))(plVar3,param_2);
    (**(code **)(*(int64_t *)param_1[0x10] + 0x128))((int64_t *)param_1[0x10],&unknown_var_6612_ptr);
    lVar1 = param_1[0x10];
    plVar3 = *(int64_t **)(lVar1 + 0x38);
    if (plVar3 < *(int64_t **)(lVar1 + 0x40)) {
      do {
        lVar2 = *plVar3;
        plVar3 = plVar3 + 2;
        *(int32_t *)(lVar2 + 0x2b8) = 0x3f800000;
        *(int32_t *)(lVar2 + 700) = 0;
        *(int32_t *)(lVar2 + 0x2c0) = 0;
        *(int32_t *)(lVar2 + 0x2c4) = 0x7f7fffff;
      } while (plVar3 < *(int64_t **)(lVar1 + 0x40));
    }
    (**(code **)(*(int64_t *)param_1[0xb] + 0x148))((int64_t *)param_1[0xb],param_2);
    uStackX_18 = uStackX_18 & 0xffffffff00000000;
    (**(code **)(*(int64_t *)param_1[0xb] + 0x128))((int64_t *)param_1[0xb],&uStackX_18);
  }
  if (((*param_1 != 0) && (lVar1 = *(int64_t *)(*param_1 + 0x260), lVar1 != 0)) &&
     (lVar1 = *(int64_t *)(lVar1 + 0x210), lVar1 != 0)) {
    *(int32_t *)(lVar1 + 0x100) = 0;
  }
  if (param_1[1] != 0) {
    uStack_40 = 0x1805ec58c;
    FUN_1805ec530();
  }
  uVar4 = 0;
  uVar6 = uVar4;
  if (param_1[3] - param_1[2] >> 3 != 0) {
    do {
      uStack_40 = 0x1805ec5c0;
      FUN_1805ec530(*(uint64_t *)(uVar4 + param_1[2]),0);
      uVar4 = uVar4 + 8;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
    } while ((uint64_t)(int64_t)(int)uVar5 < (uint64_t)(param_1[3] - param_1[2] >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ece60(uint64_t *param_1,int param_2)
void FUN_1805ece60(uint64_t *param_1,int param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  
  if (-1 < param_2) {
    FUN_1800c1750(param_1,&plStackX_20,param_2);
    if (plStackX_20 != (int64_t *)0x0) {
      uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x168,8,3);
      plVar3 = (int64_t *)FUN_1802ac390(uVar2);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plStackX_18 = plStackX_20;
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x28))();
      }
      FUN_1802adab0(plVar3,&plStackX_18);
      uVar2 = *param_1;
      plStackX_18 = plVar3;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      FUN_1802edcd0(uVar2,plStackX_18,1);
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x468,8,3);
      plVar4 = (int64_t *)FUN_1803dd0f0(uVar2);
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      if (*(float *)(plVar4 + 6) != 3.0) {
        *(int8_t *)(plVar4 + 0x7d) = 0;
        *(int8_t *)((int64_t)plVar4 + 0x3a1) = 1;
        *(int32_t *)(plVar4 + 6) = 0x40400000;
        lVar1 = plVar4[5];
        if ((lVar1 != 0) &&
           (*(short *)(lVar1 + 0x2b0) = *(short *)(lVar1 + 0x2b0) + 1,
           *(int64_t *)(lVar1 + 0x168) != 0)) {
          func_0x0001802eeba0();
        }
      }
      *(int32_t *)((int64_t)plVar4 + 0xe4) = 0x42c80000;
      uVar2 = *param_1;
      plStackX_18 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      FUN_1802edcd0(uVar2,plStackX_18,1);
      if (plStackX_18 != (int64_t *)0x0) {
        (**(code **)(*plStackX_18 + 0x38))();
      }
      (**(code **)(*plVar4 + 0x38))(plVar4);
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3);
      }
    }
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ed050(int64_t *param_1,int param_2)
void FUN_1805ed050(int64_t *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int8_t uVar3;
  byte *pbVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  int64_t *plStackX_8;
  
  plVar6 = (int64_t *)0x0;
  if (*(int *)((int64_t)param_1 + 0x16c) == param_2) {
    *(int *)((int64_t)param_1 + 0x16c) = param_2;
    return;
  }
  lVar10 = (int64_t)param_2 * 200 + system_system_memory;
  FUN_1804c31d0(lVar10,param_1 + 6,param_1 + 10);
  if (*(int64_t *)(*param_1 + 0x260) != 0) {
    lVar11 = *(int64_t *)(*(int64_t *)(*param_1 + 0x260) + 0x208);
    iVar2 = *(int *)(lVar11 + 0x20);
    iVar9 = *(int *)(lVar10 + 0xb8);
    if (iVar2 == iVar9) {
      if (iVar2 != 0) {
        pbVar4 = *(byte **)(lVar11 + 0x18);
        lVar11 = *(int64_t *)(lVar10 + 0xb0) - (int64_t)pbVar4;
        do {
          pbVar1 = pbVar4 + lVar11;
          iVar9 = (uint)*pbVar4 - (uint)*pbVar1;
          if (iVar9 != 0) break;
          pbVar4 = pbVar4 + 1;
        } while (*pbVar1 != 0);
      }
    }
    else if (iVar2 != 0) goto LAB_1805ed103;
    if (iVar9 == 0) goto LAB_1805ed4ab;
  }
LAB_1805ed103:
  uVar5 = FUN_18062b1e0(system_memory_pool_ptr,0x240,0x10,3);
  plVar6 = (int64_t *)FUN_1802fb490(uVar5);
  if (plVar6 != (int64_t *)0x0) {
    plStackX_8 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plStackX_8 = (int64_t *)0x0;
  plVar7 = (int64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x110,8,3);
  *plVar7 = (int64_t)&unknown_var_1864_ptr;
  *plVar7 = (int64_t)&unknown_var_1608_ptr;
  plVar7[9] = 0;
  plVar7[10] = 0;
  *plVar7 = (int64_t)&unknown_var_312_ptr;
  fVar13 = *(float *)(param_1 + 0x2b);
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[0x19] = 0x3f800000;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0x3f80000000000000;
  plVar7[0x1c] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = 0x3f800000;
  plVar7[0xd] = -0xeb60d350eb60d36;
  plVar7[0xe] = 0x7f7ffffff149f2ca;
  plVar7[0x13] = 0x3f800000;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0x3f80000000000000;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x18] = 0x3f800000;
  lVar11 = param_1[0x28];
  plVar7[0xf] = param_1[0x27];
  plVar7[0x10] = lVar11;
  lVar11 = param_1[0x2a];
  plVar7[0x11] = param_1[0x29];
  plVar7[0x12] = lVar11;
  *(int32_t *)(plVar7 + 0x20) = 0x3f800000;
  fVar12 = *(float *)((int64_t)param_1 + 0x13c) + *(float *)((int64_t)param_1 + 0x14c);
  fVar12 = SQRT(fVar12 * fVar12 +
                (*(float *)(param_1 + 0x29) + *(float *)(param_1 + 0x27)) *
                (*(float *)(param_1 + 0x29) + *(float *)(param_1 + 0x27)) +
                (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2a)) *
                (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2a))) + 1e-05;
  *(float *)((int64_t)plVar7 + 0xfc) = fVar12;
  *(float *)(plVar7 + 0x1f) = SQRT(fVar13 / fVar12) + 0.1;
  fVar12 = ABS(*(float *)(plVar7 + 0xf));
  fVar13 = ABS(*(float *)((int64_t)plVar7 + 0x7c));
  if ((fVar12 <= fVar13) || (fVar12 <= ABS(*(float *)(plVar7 + 0x10)))) {
    if ((fVar13 <= fVar12) || (fVar13 <= ABS(*(float *)(plVar7 + 0x10)))) {
      *(int32_t *)((int64_t)plVar7 + 0x104) = 2;
    }
    else {
      *(int32_t *)((int64_t)plVar7 + 0x104) = 1;
    }
  }
  else {
    *(int32_t *)((int64_t)plVar7 + 0x104) = 0;
  }
  *(int8_t *)(plVar7 + 0x21) = 0;
  plStackX_8 = plVar7;
  puVar8 = (uint64_t *)FUN_1800b3970(0x7fffffff,&plStackX_8,lVar10 + 0xa8,0);
  FUN_1802fa090(plVar6,*puVar8,plVar7);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  if (param_1[0xc] != 0) {
    FUN_1802fbee0(plVar6,(char)plVar6[4] + -1);
    lVar10 = *(int64_t *)(*param_1 + 0x260);
    if (lVar10 != 0) {
      lVar11 = param_1[0xc];
      uVar3 = FUN_1802fc790(lVar10,lVar11);
      FUN_1802fca80(lVar10,lVar11,uVar3);
    }
  }
  plVar7 = (int64_t *)param_1[0xd];
  if (plVar7 != (int64_t *)0x0) {
    plStackX_8 = plVar7;
    (**(code **)(*plVar7 + 0x28))();
    FUN_1802fc0f0(plVar6,plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    lVar10 = *(int64_t *)(*param_1 + 0x260);
    if (lVar10 != 0) {
      lVar11 = param_1[0xd];
      uVar3 = FUN_1802fc790(lVar10,lVar11);
      FUN_1802fca80(lVar10,lVar11,uVar3);
    }
  }
  if (param_1[0xe] != 0) {
    FUN_1802fbee0(plVar6,(char)plVar6[4] + -1);
    lVar10 = *(int64_t *)(*param_1 + 0x260);
    if (lVar10 != 0) {
      lVar11 = param_1[0xe];
      uVar3 = FUN_1802fc790(lVar10,lVar11);
      FUN_1802fca80(lVar10,lVar11,uVar3);
    }
  }
  plVar7 = (int64_t *)param_1[0xf];
  if (plVar7 != (int64_t *)0x0) {
    plStackX_8 = plVar7;
    (**(code **)(*plVar7 + 0x28))();
    FUN_1802fc0f0(plVar6,plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    lVar10 = *(int64_t *)(*param_1 + 0x260);
    if (lVar10 != 0) {
      lVar11 = param_1[0xf];
      uVar3 = FUN_1802fc790(lVar10,lVar11);
      FUN_1802fca80(lVar10,lVar11,uVar3);
    }
  }
  FUN_1802eeb00(*param_1,plVar6);
LAB_1805ed4ab:
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))(plVar6);
  }
  *(int *)((int64_t)param_1 + 0x16c) = param_2;
  return;
}



uint64_t FUN_1805ed4f0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180275730();
  if ((param_2 & 1) != 0) {
    free(param_1,0x3d8,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t *
FUN_1805ed540(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  uint64_t *puStackX_10;
  
  puStackX_10 = param_2;
  FUN_1805ed5c0(&plStackX_8,param_1,param_3,param_4,0,0xfffffffffffffffe);
  *(int32_t *)(plStackX_8 + 0x7a) = *(int32_t *)(param_1 + 0x3d0);
  *param_2 = plStackX_8;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ed5c0(void)
void FUN_1805ed5c0(void)

{
  uint64_t uVar1;
  
  uVar1 = FUN_18062b1e0(system_memory_pool_ptr,0x3d8,8,3,0,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
  memset(uVar1,0,0x3d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




