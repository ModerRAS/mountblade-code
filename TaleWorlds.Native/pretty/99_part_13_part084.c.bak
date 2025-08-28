#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_13_part084.c - 6 个函数

// 函数: void FUN_1808e3be0(longlong param_1)
void FUN_1808e3be0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int8_t *)(param_1 + 0x20) = 0;
  *(uint64_t *)(param_1 + 0x28) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(int32_t *)(param_1 + 0x150) = 0;
  *(int8_t *)(param_1 + 0x154) = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x30,0,0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808e3c30(longlong param_1,uint64_t *param_2)
void FUN_1808e3c30(longlong param_1,uint64_t *param_2)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  int8_t auStack_188 [32];
  ulonglong uStack_168;
  uint64_t uStack_160;
  float afStack_158 [3];
  float afStack_14c [29];
  float afStack_d8 [33];
  short sStack_54;
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_188;
  lVar10 = (*(code *)**(uint64_t **)(param_2[0xe] + 8))();
  uVar5 = *(int32_t *)(lVar10 + 0x44);
  uVar6 = *(int32_t *)(lVar10 + 0x48);
  uVar7 = *(int32_t *)(lVar10 + 0x4c);
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(lVar10 + 0x40);
  *(int32_t *)(param_1 + 0x34) = uVar5;
  *(int32_t *)(param_1 + 0x38) = uVar6;
  *(int32_t *)(param_1 + 0x3c) = uVar7;
  lVar10 = (**(code **)*param_2)(param_2);
  if (*(int *)(lVar10 + 200) == -1) {
    iVar8 = FUN_180853ba0(param_2,1);
    if (iVar8 != 0) goto LAB_1808e3f99;
    iVar8 = FUN_180851d20(param_2,0,afStack_158);
  }
  else {
    *(int8_t *)(param_1 + 0x154) = 1;
    lVar10 = (**(code **)*param_2)();
    iVar8 = *(int *)(lVar10 + 200);
    if (iVar8 < *(int *)(param_2 + 0x11)) {
      lVar10 = param_2[0x10];
    }
    else {
      iVar8 = iVar8 - *(int *)(param_2 + 0x11);
      lVar10 = param_2[0x12];
    }
    uVar4 = *(uint64_t *)(lVar10 + (longlong)iVar8 * 8);
    iVar8 = FUN_1808b5c40(uVar4,1);
    if (iVar8 != 0) goto LAB_1808e3f99;
    iVar8 = FUN_1808b4f40(uVar4,afStack_158);
  }
  if (iVar8 != 0) goto LAB_1808e3f99;
  pfVar1 = (float *)(param_1 + 0x40);
  if (sStack_54 < *(short *)(param_1 + 0x144)) {
    sStack_54 = *(short *)(param_1 + 0x144);
  }
  iVar8 = (int)sStack_54;
  if ((int)afStack_158[0] < (int)*pfVar1) {
    afStack_158[0] = *pfVar1;
  }
  iVar13 = 0;
  *(short *)(param_1 + 0x144) = sStack_54;
  *pfVar1 = afStack_158[0];
  if (3 < iVar8) {
    uStack_168 = (longlong)afStack_14c - (longlong)pfVar1;
    pfVar11 = (float *)(param_1 + 0x44);
    uVar9 = (iVar8 - 4U >> 2) + 1;
    uVar12 = (ulonglong)uVar9;
    iVar13 = uVar9 * 4;
    do {
      fVar14 = *(float *)(((longlong)afStack_d8 - (longlong)pfVar1) + (longlong)pfVar11);
      fVar3 = *(float *)((longlong)pfVar11 + (longlong)afStack_d8 + (4 - (longlong)pfVar1));
      pfVar11[0x20] = fVar14 * fVar14 + pfVar11[0x20];
      fVar14 = *(float *)(((longlong)afStack_158 - (longlong)pfVar1) + (longlong)pfVar11);
      if (fVar14 <= *pfVar11) {
        fVar14 = *pfVar11;
      }
      pfVar11[0x21] = fVar3 * fVar3 + pfVar11[0x21];
      fVar3 = *(float *)((longlong)afStack_d8 + (8 - (longlong)pfVar1) + (longlong)pfVar11);
      *pfVar11 = fVar14;
      fVar14 = *(float *)((longlong)afStack_158 + (4 - (longlong)pfVar1) + (longlong)pfVar11);
      if (fVar14 <= pfVar11[1]) {
        fVar14 = pfVar11[1];
      }
      pfVar11[1] = fVar14;
      fVar14 = *(float *)((longlong)afStack_158 + (8 - (longlong)pfVar1) + (longlong)pfVar11);
      if (fVar14 <= pfVar11[2]) {
        fVar14 = pfVar11[2];
      }
      pfVar11[0x22] = fVar3 * fVar3 + pfVar11[0x22];
      fVar3 = *(float *)((longlong)pfVar11 + (longlong)afStack_d8 + (0xc - (longlong)pfVar1));
      pfVar11[2] = fVar14;
      fVar14 = *(float *)(uStack_168 + (longlong)pfVar11);
      if (*(float *)(uStack_168 + (longlong)pfVar11) <= pfVar11[3]) {
        fVar14 = pfVar11[3];
      }
      pfVar11[3] = fVar14;
      pfVar11[0x23] = fVar3 * fVar3 + pfVar11[0x23];
      pfVar11 = pfVar11 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (iVar13 < iVar8) {
    pfVar11 = pfVar1 + (longlong)iVar13 + 1;
    uVar12 = (ulonglong)(uint)(iVar8 - iVar13);
    do {
      fVar14 = *(float *)((longlong)pfVar11 + ((longlong)afStack_d8 - (longlong)pfVar1));
      pfVar11[0x20] = fVar14 * fVar14 + pfVar11[0x20];
      fVar14 = *(float *)((longlong)pfVar11 + ((longlong)afStack_158 - (longlong)pfVar1));
      if (fVar14 <= *pfVar11) {
        fVar14 = *pfVar11;
      }
      *pfVar11 = fVar14;
      pfVar11 = pfVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  iVar8 = *(int *)(param_1 + 0x14c);
  if (iVar8 == 0) {
    lVar10 = *(longlong *)(param_2[0xe] + 0x2b8);
    iVar8 = 0;
    if (lVar10 != 0) {
      piVar2 = (int *)(param_1 + 0x148);
      if (*(longlong *)(lVar10 + 0x78) == 0) {
        if (piVar2 != (int *)0x0) {
LAB_1808e3f76:
          *piVar2 = iVar8;
        }
      }
      else {
        iVar8 = FUN_18073c380(*(longlong *)(lVar10 + 0x78),0xffffffff,&uStack_160);
        if (iVar8 != 0) goto LAB_1808e3f99;
        uStack_168 = uStack_168 & 0xffffffff00000000;
        FUN_1807402d0(uStack_160,0,&uStack_168);
        if (piVar2 != (int *)0x0) {
          iVar8 = (int)uStack_168;
          goto LAB_1808e3f76;
        }
      }
      func_0x000180851dd0(lVar10,0,param_1 + 0x150);
      iVar8 = *(int *)(param_1 + 0x14c);
    }
  }
  *(int *)(param_1 + 0x14c) = iVar8 + 1;
LAB_1808e3f99:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}






// 函数: void FUN_1808e3d42(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1808e3d42(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int in_R10D;
  float fVar7;
  float fVar8;
  int8_t *puStackX_20;
  ulonglong in_stack_00000140;
  
  puStackX_20 = &stack0x0000003c + -param_3;
  pfVar5 = (float *)(param_3 + 4);
  uVar3 = (in_R10D - 4U >> 2) + 1;
  uVar6 = (ulonglong)uVar3;
  do {
    fVar8 = *(float *)((longlong)pfVar5 + (longlong)(&stack0x000000b4 + -param_3));
    pfVar5[0x20] = *(float *)(&stack0x000000b0 + -param_3 + (longlong)pfVar5) *
                   *(float *)(&stack0x000000b0 + -param_3 + (longlong)pfVar5) + pfVar5[0x20];
    fVar7 = *(float *)(&stack0x00000030 + -param_3 + (longlong)pfVar5);
    if (*(float *)(&stack0x00000030 + -param_3 + (longlong)pfVar5) <= *pfVar5) {
      fVar7 = *pfVar5;
    }
    pfVar5[0x21] = fVar8 * fVar8 + pfVar5[0x21];
    fVar8 = *(float *)(&stack0x000000b8 + -param_3 + (longlong)pfVar5);
    *pfVar5 = fVar7;
    fVar7 = *(float *)(&stack0x00000034 + -param_3 + (longlong)pfVar5);
    if (*(float *)(&stack0x00000034 + -param_3 + (longlong)pfVar5) <= pfVar5[1]) {
      fVar7 = pfVar5[1];
    }
    pfVar5[1] = fVar7;
    fVar7 = *(float *)(&stack0x00000038 + -param_3 + (longlong)pfVar5);
    if (*(float *)(&stack0x00000038 + -param_3 + (longlong)pfVar5) <= pfVar5[2]) {
      fVar7 = pfVar5[2];
    }
    pfVar5[0x22] = fVar8 * fVar8 + pfVar5[0x22];
    fVar8 = *(float *)((longlong)pfVar5 + (longlong)(&stack0x000000bc + -param_3));
    pfVar5[2] = fVar7;
    fVar7 = *(float *)(puStackX_20 + (longlong)pfVar5);
    if (*(float *)(puStackX_20 + (longlong)pfVar5) <= pfVar5[3]) {
      fVar7 = pfVar5[3];
    }
    pfVar5[3] = fVar7;
    pfVar5[0x23] = fVar8 * fVar8 + pfVar5[0x23];
    pfVar5 = pfVar5 + 4;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  if ((int)(uVar3 * 4) < in_R10D) {
    pfVar5 = (float *)(param_3 + ((longlong)(int)(uVar3 * 4) + 1) * 4);
    uVar6 = (ulonglong)(in_R10D + uVar3 * -4);
    do {
      pfVar5[0x20] = *(float *)((longlong)pfVar5 + (longlong)(&stack0x000000b0 + -param_3)) *
                     *(float *)((longlong)pfVar5 + (longlong)(&stack0x000000b0 + -param_3)) +
                     pfVar5[0x20];
      fVar8 = *(float *)((longlong)pfVar5 + (longlong)(&stack0x00000030 + -param_3));
      if (*(float *)((longlong)pfVar5 + (longlong)(&stack0x00000030 + -param_3)) <= *pfVar5) {
        fVar8 = *pfVar5;
      }
      *pfVar5 = fVar8;
      pfVar5 = pfVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar4 = *(int *)(unaff_RDI + 0x14c);
  if (iVar4 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x2b8);
    iVar4 = 0;
    if (lVar2 != 0) {
      piVar1 = (int *)(unaff_RDI + 0x148);
      if (*(longlong *)(lVar2 + 0x78) == 0) {
        if (piVar1 != (int *)0x0) {
LAB_1808e3f76:
          *piVar1 = iVar4;
        }
      }
      else {
        iVar4 = FUN_18073c380(*(longlong *)(lVar2 + 0x78),0xffffffff,&param_5);
        if (iVar4 != 0) goto LAB_1808e3f99;
        puStackX_20 = (int8_t *)((ulonglong)puStackX_20 & 0xffffffff00000000);
        FUN_1807402d0(param_5,0,&puStackX_20);
        if (piVar1 != (int *)0x0) {
          iVar4 = (int)puStackX_20;
          goto LAB_1808e3f76;
        }
      }
      func_0x000180851dd0(lVar2,0,unaff_RDI + 0x150);
      iVar4 = *(int *)(unaff_RDI + 0x14c);
    }
  }
  *(int *)(unaff_RDI + 0x14c) = iVar4 + 1;
LAB_1808e3f99:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1808e3eb9(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
void FUN_1808e3eb9(uint64_t param_1,uint64_t param_2,longlong param_3,uint64_t param_4,
                  uint64_t param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong unaff_RBX;
  longlong unaff_RDI;
  int in_R10D;
  int in_R11D;
  float fVar5;
  int aiStackX_20 [2];
  ulonglong in_stack_00000140;
  
  if (in_R11D < in_R10D) {
    pfVar4 = (float *)(param_3 + ((longlong)in_R11D + 1) * 4);
    uVar3 = (ulonglong)(uint)(in_R10D - in_R11D);
    do {
      pfVar4[0x20] = *(float *)((longlong)pfVar4 + (longlong)(&stack0x000000b0 + -param_3)) *
                     *(float *)((longlong)pfVar4 + (longlong)(&stack0x000000b0 + -param_3)) +
                     pfVar4[0x20];
      fVar5 = *(float *)((longlong)pfVar4 + (longlong)(&stack0x00000030 + -param_3));
      if (*(float *)((longlong)pfVar4 + (longlong)(&stack0x00000030 + -param_3)) <= *pfVar4) {
        fVar5 = *pfVar4;
      }
      *pfVar4 = fVar5;
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  iVar2 = *(int *)(unaff_RDI + 0x14c);
  if (iVar2 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x70) + 0x2b8);
    iVar2 = 0;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        iVar2 = FUN_18073c380(*(longlong *)(lVar1 + 0x78),0xffffffff,&param_5);
        if (iVar2 != 0) goto LAB_1808e3f99;
        aiStackX_20[0] = iVar2;
        FUN_1807402d0(param_5,0,aiStackX_20);
        iVar2 = aiStackX_20[0];
      }
      if ((int *)(unaff_RDI + 0x148) != (int *)0x0) {
        *(int *)(unaff_RDI + 0x148) = iVar2;
      }
      func_0x000180851dd0(lVar1,0,unaff_RDI + 0x150);
      iVar2 = *(int *)(unaff_RDI + 0x14c);
    }
  }
  *(int *)(unaff_RDI + 0x14c) = iVar2 + 1;
LAB_1808e3f99:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000140 ^ (ulonglong)&stack0x00000000);
}



int FUN_1808e3fc0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint64_t *puVar16;
  ulonglong uVar17;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  longlong lStackX_20;
  ulonglong uStack_78;
  ulonglong uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  
  uVar11 = 0;
  lStackX_20 = (longlong)(*(int *)(param_2 + 0x13) + *(int *)(param_2 + 0x11));
  iVar12 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar13 = uVar11;
  uVar14 = uVar11;
  uVar15 = uVar11;
  uVar17 = uVar11;
  iVar4 = iVar12;
  if (0 < lStackX_20) {
    do {
      iVar4 = (int)uVar17;
      iVar12 = (int)uVar13;
      iVar5 = (int)uVar14;
      if (iVar5 < *(int *)(param_2 + 0x11)) {
        puVar16 = *(uint64_t **)(param_2[0x10] + uVar11 * 8);
      }
      else {
        puVar16 = *(uint64_t **)(param_2[0x12] + (longlong)(iVar5 - *(int *)(param_2 + 0x11)) * 8)
        ;
      }
      uStackX_18 = 0;
      iVar3 = FUN_1808e4fe0(param_1,puVar16,&uStackX_18);
      if (iVar3 != 0) goto LAB_1808e4276;
      if (0 < uStackX_18._4_4_) {
        uStackX_10 = CONCAT44(uStackX_10._4_4_,iVar4);
        iVar8 = iVar4 + 1;
        iVar3 = iVar12;
        if (iVar12 < 0) {
          iVar3 = -iVar12;
        }
        if (iVar3 < iVar8) {
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          iVar12 = (int)((float)iVar12 * 1.5);
          iVar4 = iVar8;
          if (iVar8 <= iVar12) {
            iVar4 = iVar12;
          }
          if (iVar4 < 2) {
            iVar12 = 2;
          }
          else if (iVar12 < iVar8) {
            iVar12 = iVar8;
          }
          iVar3 = FUN_180883620(&uStack_78,iVar12);
          if (iVar3 != 0) goto LAB_1808e4276;
          uVar13 = uStack_70 >> 0x20;
          uVar15 = uStack_78;
          iVar4 = (int)uStack_70;
        }
        uVar17 = (ulonglong)(iVar4 + 1U);
        lVar10 = (longlong)(int)uStackX_10 * 0x1c;
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar4 + 1U);
        *(uint64_t *)(lVar10 + uVar15) = 0;
        *(uint64_t *)(lVar10 + 8 + uVar15) = 0;
        *(uint64_t *)(lVar10 + 0x10 + uVar15) = 0;
        *(int32_t *)(lVar10 + 0x18 + uVar15) = 0;
        plVar6 = (longlong *)(**(code **)*puVar16)(puVar16);
        (**(code **)(*plVar6 + 0x40))(plVar6,&uStack_68);
        *(uint64_t *)(lVar10 + uVar15) = uStack_68;
        ((uint64_t *)(lVar10 + uVar15))[1] = uStack_60;
        *(int *)(lVar10 + 0x10 + uVar15) = iVar5;
        *(uint64_t *)(lVar10 + 0x14 + uVar15) = uStackX_18;
      }
      iVar4 = (int)uVar13;
      iVar12 = (int)uVar17;
      uVar11 = uVar11 + 1;
      uVar14 = (ulonglong)(iVar5 + 1);
    } while ((longlong)uVar11 < lStackX_20);
  }
  uStackX_10 = 0;
  iVar3 = FUN_1808e4fe0(param_1,param_2,&uStackX_10);
  if (iVar3 == 0) {
    if ((0 < uStackX_10._4_4_) || (iVar12 != 0)) {
      lVar10 = (longlong)*(int *)(param_1 + 0x70);
      uVar9 = (int)*(uint *)(param_1 + 0x74) >> 0x1f;
      iVar5 = (*(uint *)(param_1 + 0x74) ^ uVar9) - uVar9;
      iVar3 = *(int *)(param_1 + 0x70) + 1;
      if (iVar5 < iVar3) {
        iVar8 = (int)((float)iVar5 * 1.5);
        iVar5 = iVar3;
        if (iVar3 <= iVar8) {
          iVar5 = iVar8;
        }
        if (iVar5 < 1) {
          iVar8 = 1;
        }
        else if (iVar8 < iVar3) {
          iVar8 = iVar3;
        }
        iVar3 = FUN_180883520(param_1 + 0x68,iVar8);
        if (iVar3 != 0) goto LAB_1808e4276;
      }
      lVar1 = *(longlong *)(param_1 + 0x68);
      *(uint64_t *)(lVar1 + lVar10 * 0x30) = 0;
      *(uint64_t *)(lVar1 + 8 + lVar10 * 0x30) = 0;
      *(uint64_t *)(lVar1 + 0x10 + lVar10 * 0x30) = 0;
      *(uint64_t *)(lVar1 + 0x18 + lVar10 * 0x30) = 0;
      *(uint64_t *)(lVar1 + 0x20 + lVar10 * 0x30) = 0;
      *(uint64_t *)(lVar1 + 0x28 + lVar10 * 0x30) = 0;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      lVar1 = *(longlong *)(param_1 + 0x68);
      lVar7 = (**(code **)*param_2)(param_2);
      uStack_78 = 0;
      uStack_70 = 0;
      uVar2 = *(uint64_t *)(lVar7 + 0x18);
      puVar16 = (uint64_t *)(lVar1 + lVar10 * 0x30);
      *puVar16 = *(uint64_t *)(lVar7 + 0x10);
      puVar16[1] = uVar2;
      *(int32_t *)(lVar1 + 0x10 + lVar10 * 0x30) = *(int32_t *)((longlong)param_2 + 0xe4);
      *(int32_t *)(lVar1 + 0x14 + lVar10 * 0x30) = *(int32_t *)(param_2 + 0x11);
      *(uint64_t *)(lVar1 + 0x18 + lVar10 * 0x30) = uStackX_10;
      *(ulonglong *)(lVar1 + 0x20 + lVar10 * 0x30) = uVar15;
      *(int *)(lVar1 + 0x28 + lVar10 * 0x30) = iVar12;
      *(int *)(lVar1 + 0x2c + lVar10 * 0x30) = iVar4;
    }
    iVar3 = 0;
  }
LAB_1808e4276:
  FUN_180872480(&uStack_78);
  return iVar3;
}



uint64_t FUN_1808e42a0(longlong param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  int32_t uVar4;
  int iVar5;
  uint64_t uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  
  plVar11 = (longlong *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x18);
  uVar9 = (int)*(uint *)(param_1 + 0x1c) >> 0x1f;
  iVar3 = (*(uint *)(param_1 + 0x1c) ^ uVar9) - uVar9;
  iVar8 = iVar5 + 1;
  if (iVar3 < iVar8) {
    iVar10 = (int)((float)iVar3 * 1.5);
    iVar3 = iVar8;
    if (iVar8 <= iVar10) {
      iVar3 = iVar10;
    }
    if (iVar3 < 0) {
      iVar10 = 0;
    }
    else if (iVar10 < iVar8) {
      iVar10 = iVar8;
    }
    uVar6 = FUN_180883010(plVar11,iVar10);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
  }
  lVar12 = (longlong)iVar5 * 0x278;
  FUN_1808e3ab0(*plVar11 + lVar12,1);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  lVar2 = *plVar11;
  lVar7 = (**(code **)*param_2)(param_2);
  uVar6 = *(uint64_t *)(lVar7 + 0x18);
  *(uint64_t *)(lVar12 + lVar2) = *(uint64_t *)(lVar7 + 0x10);
  ((uint64_t *)(lVar12 + lVar2))[1] = uVar6;
  lVar7 = (**(code **)*param_2)(param_2);
  *(uint *)(lVar12 + 0x20 + lVar2) = (uint)*(ushort *)(lVar7 + 0xc);
  uVar6 = param_3[1];
  puVar1 = (uint64_t *)(lVar12 + 0x10 + lVar2);
  *puVar1 = *param_3;
  puVar1[1] = uVar6;
  *(int32_t *)(lVar12 + 0x24 + lVar2) = *(int32_t *)(param_2 + 0x11);
  lVar7 = param_2[0xe];
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else if (*(longlong *)(lVar7 + 0x80) == 0) {
    uVar4 = *(int32_t *)(lVar7 + 0x2dc);
  }
  else {
    uVar4 = *(int32_t *)(*(longlong *)(lVar7 + 0x80) + 8);
  }
  *(int32_t *)(lVar12 + 0x28 + lVar2) = uVar4;
  uVar6 = FUN_1808e54e0(param_2[0xf],lVar2 + 0x2c + lVar12,lVar2 + 0x30 + lVar12);
  if ((int)uVar6 == 0) {
    func_0x000180851dd0(param_2,lVar2 + 0x38 + lVar12,lVar2 + 0x34 + lVar12);
    *(int32_t *)(lVar12 + 0x3c + lVar2) = 0;
    *(int32_t *)(lVar12 + 0x40 + lVar2) = 0;
    *(int32_t *)(lVar12 + 0x44 + lVar2) = 0;
    uVar6 = FUN_180853ba0(param_2,1);
    if (((int)uVar6 == 0) &&
       (uVar6 = FUN_180851d20(param_2,lVar2 + 0x48 + lVar12,lVar2 + 0x150 + lVar12), (int)uVar6 == 0
       )) {
      if (0 < *(int *)(param_2 + 0x13) + *(int *)(param_2 + 0x11)) {
        plVar11 = (longlong *)(lVar2 + 600 + lVar12);
        lVar2 = plVar11[1];
        uVar9 = (int)*(uint *)((longlong)plVar11 + 0xc) >> 0x1f;
        iVar5 = (*(uint *)((longlong)plVar11 + 0xc) ^ uVar9) - uVar9;
        iVar3 = (int)lVar2 + 1;
        if (iVar5 < iVar3) {
          iVar8 = (int)((float)iVar5 * 1.5);
          iVar5 = iVar3;
          if (iVar3 <= iVar8) {
            iVar5 = iVar8;
          }
          if (iVar5 < 0) {
            iVar8 = 0;
          }
          else if (iVar8 < iVar3) {
            iVar8 = iVar3;
          }
          uVar6 = FUN_180883110(plVar11,iVar8);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
                    // WARNING: Subroutine does not return
        memset(*plVar11 + (longlong)(int)lVar2 * 0x118,0,0x118);
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}



uint64_t FUN_1808e4314(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  int32_t uVar3;
  int iVar4;
  longlong lVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong unaff_RBX;
  longlong *plVar10;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  longlong *unaff_R12;
  longlong lVar11;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float unaff_XMM6_Da;
  
  lVar11 = unaff_RBX * 0x278;
  FUN_1808e3ab0(param_1 + lVar11);
  *(int *)(unaff_R12 + 1) = (int)unaff_R12[1] + 1;
  lVar2 = *unaff_R12;
  lVar5 = (**(code **)*unaff_RDI)();
  uVar6 = *(uint64_t *)(lVar5 + 0x18);
  *(uint64_t *)(lVar11 + lVar2) = *(uint64_t *)(lVar5 + 0x10);
  ((uint64_t *)(lVar11 + lVar2))[1] = uVar6;
  lVar5 = (**(code **)*unaff_RDI)();
  *(uint *)(lVar11 + 0x20 + lVar2) = (uint)*(ushort *)(lVar5 + 0xc);
  uVar6 = unaff_RSI[1];
  puVar1 = (uint64_t *)(lVar11 + 0x10 + lVar2);
  *puVar1 = *unaff_RSI;
  puVar1[1] = uVar6;
  *(int32_t *)(lVar11 + 0x24 + lVar2) = *(int32_t *)(unaff_RDI + 0x11);
  lVar5 = unaff_RDI[0xe];
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else if (*(longlong *)(lVar5 + 0x80) == 0) {
    uVar3 = *(int32_t *)(lVar5 + 0x2dc);
  }
  else {
    uVar3 = *(int32_t *)(*(longlong *)(lVar5 + 0x80) + 8);
  }
  *(int32_t *)(lVar11 + 0x28 + lVar2) = uVar3;
  uVar6 = FUN_1808e54e0(unaff_RDI[0xf],lVar2 + 0x2c + lVar11,lVar2 + 0x30 + lVar11);
  if ((int)uVar6 == 0) {
    uVar6 = func_0x000180851dd0(extraout_XMM0_Qa,lVar2 + 0x38 + lVar11,lVar2 + 0x34 + lVar11);
    *(int32_t *)(lVar11 + 0x3c + lVar2) = 0;
    *(int32_t *)(lVar11 + 0x40 + lVar2) = 0;
    *(int32_t *)(lVar11 + 0x44 + lVar2) = 0;
    uVar6 = FUN_180853ba0(uVar6,1);
    if (((int)uVar6 == 0) &&
       (uVar6 = FUN_180851d20(extraout_XMM0_Qa_00,lVar2 + 0x48 + lVar11,lVar2 + 0x150 + lVar11),
       (int)uVar6 == 0)) {
      if (0 < *(int *)(unaff_RDI + 0x13) + *(int *)(unaff_RDI + 0x11)) {
        plVar10 = (longlong *)(lVar2 + 600 + lVar11);
        lVar2 = plVar10[1];
        uVar8 = (int)*(uint *)((longlong)plVar10 + 0xc) >> 0x1f;
        iVar4 = (*(uint *)((longlong)plVar10 + 0xc) ^ uVar8) - uVar8;
        iVar7 = (int)lVar2 + 1;
        if (iVar4 < iVar7) {
          iVar9 = (int)((float)iVar4 * unaff_XMM6_Da);
          iVar4 = iVar7;
          if (iVar7 <= iVar9) {
            iVar4 = iVar9;
          }
          if (iVar4 < 0) {
            iVar9 = 0;
          }
          else if (iVar9 < iVar7) {
            iVar9 = iVar7;
          }
          uVar6 = FUN_180883110(plVar10,iVar9);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
                    // WARNING: Subroutine does not return
        memset(*plVar10 + (longlong)(int)lVar2 * 0x118,0,0x118);
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}



uint64_t FUN_1808e4426(void)

{
  longlong lVar1;
  int in_EAX;
  int iVar2;
  uint64_t uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong unaff_R12;
  longlong unaff_R15;
  float unaff_XMM6_Da;
  longlong lStack0000000000000040;
  
  lStack0000000000000040 = (longlong)in_EAX;
  if (lStack0000000000000040 < 1) {
    return 0;
  }
  plVar7 = (longlong *)(unaff_R12 + 600 + unaff_R15);
  lVar1 = plVar7[1];
  uVar5 = (int)*(uint *)((longlong)plVar7 + 0xc) >> 0x1f;
  iVar2 = (*(uint *)((longlong)plVar7 + 0xc) ^ uVar5) - uVar5;
  iVar4 = (int)lVar1 + 1;
  if (iVar2 < iVar4) {
    iVar6 = (int)((float)iVar2 * unaff_XMM6_Da);
    iVar2 = iVar4;
    if (iVar4 <= iVar6) {
      iVar2 = iVar6;
    }
    if (iVar2 < 0) {
      iVar6 = 0;
    }
    else if (iVar6 < iVar4) {
      iVar6 = iVar4;
    }
    uVar3 = FUN_180883110(plVar7,iVar6);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
                    // WARNING: Subroutine does not return
  memset(*plVar7 + (longlong)(int)lVar1 * 0x118,0,0x118);
}






// 函数: void FUN_1808e4665(void)
void FUN_1808e4665(void)

{
  return;
}






// 函数: void FUN_1808e466a(void)
void FUN_1808e466a(void)

{
  return;
}






