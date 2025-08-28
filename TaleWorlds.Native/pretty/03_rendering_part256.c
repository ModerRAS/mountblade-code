#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part256.c - 4 个函数

// 函数: void FUN_18040f650(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18040f650(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  plVar4 = (int64_t *)(param_1 + 8);
  lVar3 = 5;
  do {
    plVar1 = (int64_t *)*plVar4;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    if (*plVar4 != 0) {
      FUN_18023b050(plVar1,0,param_3,param_4,uVar5);
    }
    plVar2 = (int64_t *)*plVar4;
    *plVar4 = 0;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
    plVar4 = plVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(int8_t *)(param_1 + 0x88) = 0;
  return;
}



uint64_t * FUN_18040f700(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_94;
  float fStack_84;
  
  fVar10 = *(float *)((int64_t)param_2 + 0xc);
  fVar5 = *(float *)((int64_t)param_3 + 0xc);
  if ((fVar10 == fVar5) &&
     (fVar7 = *(float *)((int64_t)param_2 + 0x1c), fVar7 == *(float *)((int64_t)param_3 + 0x1c)))
  {
    if (((float)*param_2 == (float)*param_3) &&
       ((fStack_94 = (float)((uint64_t)*param_2 >> 0x20),
        fStack_84 = (float)((uint64_t)*param_3 >> 0x20), fStack_94 == fStack_84 &&
        (*(float *)(param_2 + 1) == *(float *)(param_3 + 1))))) {
      if (((float)param_2[2] == (float)param_3[2]) &&
         ((fStack_84 = (float)((uint64_t)param_2[2] >> 0x20),
          fStack_94 = (float)((uint64_t)param_3[2] >> 0x20), fStack_84 == fStack_94 &&
          (*(float *)(param_2 + 3) == *(float *)(param_3 + 3))))) {
        uVar4 = *(int32_t *)(param_2 + 1);
        *param_1 = *param_2;
        uVar1 = param_2[2];
        *(int32_t *)(param_1 + 1) = uVar4;
        uVar4 = *(int32_t *)(param_2 + 3);
        param_1[2] = uVar1;
        *(int32_t *)(param_1 + 3) = uVar4;
        *(float *)((int64_t)param_1 + 0xc) = fVar10;
        *(float *)((int64_t)param_1 + 0x1c) = fVar7;
        return param_1;
      }
    }
  }
  uVar1 = *param_2;
  fVar7 = *(float *)(param_3 + 1);
  uVar2 = param_2[2];
  fVar6 = *(float *)(param_2 + 1);
  *(float *)((int64_t)param_1 + 0x1c) =
       (*(float *)((int64_t)param_2 + 0x1c) + *(float *)((int64_t)param_3 + 0x1c)) * 0.5;
  uVar3 = param_3[2];
  fVar7 = fVar7 + fVar6;
  fVar9 = (float)*param_3 + (float)uVar1;
  fVar11 = (float)param_3[2] + (float)uVar2;
  fVar6 = (float)((uint64_t)*param_3 >> 0x20) + (float)((uint64_t)uVar1 >> 0x20);
  *(float *)((int64_t)param_1 + 0xc) = (fVar5 + fVar10) * 0.5;
  *param_1 = CONCAT44(fVar6,fVar9);
  fVar8 = (float)((uint64_t)uVar3 >> 0x20) + (float)((uint64_t)uVar2 >> 0x20);
  *(float *)(param_1 + 1) = fVar7;
  fVar10 = *(float *)(param_3 + 3);
  fVar5 = *(float *)(param_2 + 3);
  param_1[2] = CONCAT44(fVar8,fVar11);
  fVar10 = fVar10 + fVar5;
  *(float *)(param_1 + 3) = fVar10;
  if ((1.1754944e-38 < ABS(fVar9)) || ((1.1754944e-38 < ABS(fVar6) || (1.1754944e-38 < ABS(fVar7))))
     ) {
    fVar5 = 1.0 / SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7);
    *param_1 = CONCAT44(fVar6 * fVar5,fVar9 * fVar5);
    *(float *)(param_1 + 1) = fVar7 * fVar5;
  }
  if (((1.1754944e-38 < ABS(fVar11)) || (1.1754944e-38 < ABS(fVar8))) ||
     (1.1754944e-38 < ABS(fVar10))) {
    fVar5 = 1.0 / SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10);
    param_1[2] = CONCAT44(fVar5 * fVar8,fVar5 * fVar11);
    *(float *)(param_1 + 3) = fVar5 * fVar10;
  }
  return param_1;
}



uint64_t * FUN_18040f81c(int32_t param_1,int64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t in_EAX;
  uint64_t *in_RCX;
  int64_t unaff_RBP;
  uint64_t *in_R8;
  uint64_t in_XMM1_Qa;
  float fVar5;
  int32_t in_XMM4_Da;
  uint in_XMM5_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *(int32_t *)((int64_t)in_RCX + 0x1c) = param_1;
  uVar1 = *in_R8;
  uVar2 = in_R8[2];
  *(int32_t *)(unaff_RBP + -0x31) = in_EAX;
  fVar7 = *(float *)(unaff_RBP + -0x21) + *(float *)(unaff_RBP + -0x31);
  fVar9 = (float)*in_R8 + (float)param_3;
  uVar3 = in_R8[2];
  *(float *)(unaff_RBP + -0x21) = fVar7;
  fVar11 = (float)uVar3 + (float)in_XMM1_Qa;
  uVar4 = *(int32_t *)(unaff_RBP + -0x21);
  fVar6 = (float)((uint64_t)uVar1 >> 0x20) + (float)((uint64_t)param_3 >> 0x20);
  *(int32_t *)((int64_t)in_RCX + 0xc) = in_XMM4_Da;
  *in_RCX = CONCAT44(fVar6,fVar9);
  fVar8 = (float)((uint64_t)uVar2 >> 0x20) + (float)((uint64_t)in_XMM1_Qa >> 0x20);
  *(int32_t *)(in_RCX + 1) = uVar4;
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_R8 + 3);
  uVar4 = *(int32_t *)(param_2 + 0x18);
  fVar10 = *(float *)(unaff_RBP + -0x21);
  in_RCX[2] = CONCAT44(fVar8,fVar11);
  *(int32_t *)(unaff_RBP + -0x31) = uVar4;
  fVar10 = fVar10 + *(float *)(unaff_RBP + -0x31);
  *(float *)(unaff_RBP + -0x21) = fVar10;
  *(int32_t *)(in_RCX + 3) = *(int32_t *)(unaff_RBP + -0x21);
  if (((1.1754944e-38 < (float)((uint)fVar9 & in_XMM5_Da)) ||
      (1.1754944e-38 < (float)((uint)fVar6 & in_XMM5_Da))) ||
     (1.1754944e-38 < (float)((uint)fVar7 & in_XMM5_Da))) {
    fVar5 = 1.0 / SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar7 * fVar7);
    *in_RCX = CONCAT44(fVar6 * fVar5,fVar9 * fVar5);
    *(float *)(unaff_RBP + -0x21) = fVar7 * fVar5;
    *(int32_t *)(in_RCX + 1) = *(int32_t *)(unaff_RBP + -0x21);
  }
  if (((1.1754944e-38 < (float)((uint)fVar11 & in_XMM5_Da)) ||
      (1.1754944e-38 < (float)((uint)fVar8 & in_XMM5_Da))) ||
     (1.1754944e-38 < (float)((uint)fVar10 & in_XMM5_Da))) {
    fVar6 = 1.0 / SQRT(fVar8 * fVar8 + fVar11 * fVar11 + fVar10 * fVar10);
    in_RCX[2] = CONCAT44(fVar6 * fVar8,fVar6 * fVar11);
    *(float *)(unaff_RBP + -0x21) = fVar6 * fVar10;
    *(int32_t *)(in_RCX + 3) = *(int32_t *)(unaff_RBP + -0x21);
  }
  return in_RCX;
}



uint64_t * FUN_18040f838(float param_1,int64_t param_2,float param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t in_EAX;
  uint64_t *in_RCX;
  int64_t unaff_RBP;
  uint64_t *in_R8;
  uint64_t in_XMM1_Qa;
  float fVar5;
  int32_t in_XMM4_Da;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *in_R8;
  uVar2 = in_R8[2];
  *(int32_t *)(unaff_RBP + -0x31) = in_EAX;
  fVar6 = *(float *)(unaff_RBP + -0x21) + *(float *)(unaff_RBP + -0x31);
  param_3 = (float)*in_R8 + param_3;
  uVar3 = in_R8[2];
  *(float *)(unaff_RBP + -0x21) = fVar6;
  fVar9 = (float)uVar3 + (float)in_XMM1_Qa;
  uVar4 = *(int32_t *)(unaff_RBP + -0x21);
  param_1 = (float)((uint64_t)uVar1 >> 0x20) + param_1;
  *(int32_t *)((int64_t)in_RCX + 0xc) = in_XMM4_Da;
  *in_RCX = CONCAT44(param_1,param_3);
  fVar7 = (float)((uint64_t)uVar2 >> 0x20) + (float)((uint64_t)in_XMM1_Qa >> 0x20);
  *(int32_t *)(in_RCX + 1) = uVar4;
  *(int32_t *)(unaff_RBP + -0x21) = *(int32_t *)(in_R8 + 3);
  uVar4 = *(int32_t *)(param_2 + 0x18);
  fVar8 = *(float *)(unaff_RBP + -0x21);
  in_RCX[2] = CONCAT44(fVar7,fVar9);
  *(int32_t *)(unaff_RBP + -0x31) = uVar4;
  fVar8 = fVar8 + *(float *)(unaff_RBP + -0x31);
  *(float *)(unaff_RBP + -0x21) = fVar8;
  *(int32_t *)(in_RCX + 3) = *(int32_t *)(unaff_RBP + -0x21);
  if (((unaff_XMM6_Da < (float)((uint)param_3 & in_XMM5_Da)) ||
      (unaff_XMM6_Da < (float)((uint)param_1 & in_XMM5_Da))) ||
     (unaff_XMM6_Da < (float)((uint)fVar6 & in_XMM5_Da))) {
    fVar5 = 1.0 / SQRT(param_1 * param_1 + param_3 * param_3 + fVar6 * fVar6);
    *in_RCX = CONCAT44(param_1 * fVar5,param_3 * fVar5);
    *(float *)(unaff_RBP + -0x21) = fVar6 * fVar5;
    *(int32_t *)(in_RCX + 1) = *(int32_t *)(unaff_RBP + -0x21);
  }
  if (((unaff_XMM6_Da < (float)((uint)fVar9 & in_XMM5_Da)) ||
      (unaff_XMM6_Da < (float)((uint)fVar7 & in_XMM5_Da))) ||
     (unaff_XMM6_Da < (float)((uint)fVar8 & in_XMM5_Da))) {
    fVar6 = 1.0 / SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8);
    in_RCX[2] = CONCAT44(fVar6 * fVar7,fVar6 * fVar9);
    *(float *)(unaff_RBP + -0x21) = fVar6 * fVar8;
    *(int32_t *)(in_RCX + 3) = *(int32_t *)(unaff_RBP + -0x21);
  }
  return in_RCX;
}



int64_t FUN_18040f98d(int64_t param_1)

{
  int64_t unaff_RBP;
  float in_XMM4_Da;
  float fVar1;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  
  if ((unaff_XMM6_Da < (float)((uint)unaff_XMM9_Da & in_XMM5_Da)) ||
     (unaff_XMM6_Da < (float)((uint)unaff_XMM11_Da & in_XMM5_Da))) {
    fVar1 = in_XMM4_Da /
            SQRT(unaff_XMM9_Da * unaff_XMM9_Da + unaff_XMM12_Da * unaff_XMM12_Da +
                 unaff_XMM11_Da * unaff_XMM11_Da);
    *(uint64_t *)(param_1 + 0x10) = CONCAT44(fVar1 * unaff_XMM9_Da,fVar1 * unaff_XMM12_Da);
    *(float *)(unaff_RBP + -0x21) = fVar1 * unaff_XMM11_Da;
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(unaff_RBP + -0x21);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18040fa30(int64_t *param_1)
void FUN_18040fa30(int64_t *param_1)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int32_t uVar4;
  int64_t *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int iVar12;
  int64_t lVar13;
  uint *puVar14;
  uint *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t lVar18;
  int iVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  int8_t auStack_138 [64];
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  uint64_t uStack_a8;
  float fStack_a0;
  uint64_t uStack_98;
  float fStack_90;
  uint64_t uStack_88;
  float fStack_80;
  int64_t *plStack_78;
  uint64_t uStack_68;
  
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  iVar19 = 0;
  plStack_78 = param_1;
  iVar7 = (**(code **)*param_1)();
  plVar5 = (int64_t *)*param_1;
  iStack_c0 = iVar7;
  if (((((*plVar5 == 0) || (plVar5[1] == 0)) || (plVar5[2] == 0)) ||
      ((plVar5[3] == 0 || (plVar5[4] == 0)))) || (iVar12 = 0, iVar7 < 1)) goto FUN_18040ff57;
  do {
    iVar8 = (**(code **)(*param_1 + 8))(param_1,iVar12);
    if (iVar8 == 3) {
      iVar19 = iVar19 + 1;
    }
    else if (iVar8 == 4) {
      iVar19 = iVar19 + 2;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < iVar7);
  if (iVar19 < 1) goto FUN_18040ff57;
  lVar21 = (int64_t)iVar19;
  lVar9 = malloc(lVar21 * 0xc);
  lStack_e0 = lVar9;
  lVar10 = malloc(lVar21 * 0x58);
  lStack_d8 = lVar10;
  if (lVar9 == 0) {
    if (lVar10 != 0) {
      free(lVar10);
    }
    goto FUN_18040ff57;
  }
  if (lVar10 == 0) {
    free(lVar9);
    goto FUN_18040ff57;
  }
  iStack_c4 = FUN_180411320(lVar10,lVar9,param_1,iVar19);
  FUN_180410220(lVar9,param_1,iVar19);
  iVar7 = 0;
  iStack_f0 = iVar19;
  if (0 < iVar19) {
    puVar14 = (uint *)(lVar10 + 0x4c);
    puVar15 = (uint *)(lVar9 + 8);
    iVar7 = 0;
    do {
      uVar2 = puVar15[-1];
      uVar3 = *puVar15;
      (**(code **)(*param_1 + 0x10))(param_1,&uStack_a8,(int)puVar15[-2] >> 2,puVar15[-2] & 3);
      (**(code **)(*param_1 + 0x10))(param_1,&uStack_88,(int)uVar2 >> 2,uVar2 & 3);
      (**(code **)(*param_1 + 0x10))(param_1,&uStack_98,(int)uVar3 >> 2,uVar3 & 3);
      if ((((float)uStack_a8 == (float)uStack_88) && (uStack_a8._4_4_ == uStack_88._4_4_)) &&
         (fStack_a0 == fStack_80)) {
LAB_18040fc82:
        *puVar14 = *puVar14 | 1;
        iVar7 = iVar7 + 1;
      }
      else if (((((float)uStack_a8 == (float)uStack_98) && (uStack_a8._4_4_ == uStack_98._4_4_)) &&
               (fStack_a0 == fStack_90)) ||
              ((((float)uStack_88 == (float)uStack_98 && (uStack_88._4_4_ == uStack_98._4_4_)) &&
               (fStack_80 == fStack_90)))) goto LAB_18040fc82;
      puVar15 = puVar15 + 3;
      puVar14 = puVar14 + 0x16;
      lVar21 = lVar21 + -1;
      lVar10 = lStack_d8;
      lVar9 = lStack_e0;
      iStack_f8 = iVar7;
    } while (lVar21 != 0);
  }
  iVar7 = iVar19 - iVar7;
  iStack_c8 = iVar7;
  FUN_180413dc0(lVar10,lVar9,iVar7,iVar19);
  FUN_180411840(lVar10,lVar9,param_1,iVar7);
  lStack_e8 = malloc((int64_t)(iVar7 * 3) * 0x18);
  lStack_e0 = (int64_t)iVar7;
  lStack_d8 = malloc(lStack_e0 * 0xc);
  if (lStack_e8 == 0) {
    lVar21 = lStack_d8;
    if (lStack_d8 != 0) goto LAB_1804101ac;
LAB_1804101b2:
    free(lVar9);
  }
  else {
    lVar21 = lStack_e8;
    if (lStack_d8 == 0) {
LAB_1804101ac:
      free(lVar21);
      goto LAB_1804101b2;
    }
    iStack_f8 = 0;
    iStack_f4 = 0;
    if (0 < iVar7) {
      uVar17 = 0;
      uStack_98 = 0;
      lStack_b0 = 0;
      uStack_88 = 2;
      lVar21 = lVar10;
      uVar23 = uVar17;
      do {
        iVar19 = 0;
        lVar16 = 0;
        lVar13 = lStack_e8 + uVar17 * 0x18;
        lVar22 = -4;
        lVar11 = uStack_88;
        lVar18 = uStack_98;
        lVar20 = lStack_b0;
        iVar7 = iStack_f4;
        lStack_b8 = lVar21;
        do {
          if (((*(byte *)(lVar21 + 0x4c) & 4) == 0) &&
             (lVar1 = lVar11 + lVar16, *(int64_t *)(lVar10 + lVar1 * 8) == 0)) {
            iStack_f8 = iStack_f8 + 1;
            uVar4 = *(int32_t *)(lVar9 + (lVar20 + lVar16) * 4);
            uStack_a8 = uVar17 + 1;
            *(int64_t *)(lVar10 + lVar1 * 8) = lVar13;
            *(int32_t *)(lVar13 + 0x10) = uVar4;
            lStack_d0 = lVar13 + 0x18;
            *(uint *)(*(int64_t *)(lVar10 + lVar1 * 8) + 0x14) = *(uint *)(lVar21 + 0x4c) >> 3 & 1;
            **(int32_t **)(lVar10 + lVar1 * 8) = 0;
            *(int64_t *)(*(int64_t *)(lVar10 + lVar1 * 8) + 8) =
                 lStack_d8 + (int64_t)(int)uVar23 * 4;
            piVar6 = *(int **)(lVar10 + lVar1 * 8);
            *(int *)(*(int64_t *)(piVar6 + 2) + (int64_t)*piVar6 * 4) = iVar7;
            *piVar6 = *piVar6 + 1;
            iVar7 = *(int *)(lVar10 + (lVar18 + lVar16) * 4);
            lVar13 = 8;
            if (0 < iVar19) {
              lVar13 = lVar22;
            }
            iVar12 = *(int *)(lVar21 + lVar13);
            if (-1 < iVar7) {
              FUN_180411e20(lVar9,lVar10,iVar7,*(uint64_t *)(lVar10 + lVar1 * 8));
            }
            if (-1 < iVar12) {
              FUN_180411e20(lVar9,lVar10,iVar12,*(uint64_t *)(lVar10 + lVar1 * 8));
            }
            uVar23 = (uint64_t)(uint)((int)uVar23 + **(int **)(lVar10 + lVar1 * 8));
            lVar11 = uStack_88;
            lVar13 = lStack_d0;
            uVar17 = uStack_a8;
            lVar21 = lStack_b8;
            lVar18 = uStack_98;
            lVar20 = lStack_b0;
            iVar7 = iStack_f4;
          }
          iVar19 = iVar19 + 1;
          lVar16 = lVar16 + 1;
          lVar22 = lVar22 + 4;
        } while (iVar19 < 3);
        iStack_f4 = iVar7 + 1;
        lVar21 = lVar21 + 0x58;
        lStack_b0 = lVar20 + 3;
        uStack_98 = lVar18 + 0x16;
        uStack_88 = lVar11 + 0xb;
        lStack_e0 = lStack_e0 + -1;
      } while (lStack_e0 != 0);
      lStack_e0 = 0;
      lStack_b8 = lVar21;
    }
    lVar21 = lStack_d8;
    lVar13 = (int64_t)iStack_c4;
    lVar22 = malloc(lVar13 * 0x28);
    if (lVar22 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar22,0,lVar13 * 0x28);
    }
    free(lVar9);
    free(lVar10);
    free(lStack_e8);
    lVar10 = lVar21;
  }
  free(lVar10);
FUN_18040ff57:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (uint64_t)auStack_138);
}





// 函数: void FUN_18040fb35(int32_t param_1,int32_t param_2,int32_t param_3)
void FUN_18040fb35(int32_t param_1,int32_t param_2,int32_t param_3)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint *puVar11;
  int64_t unaff_RSI;
  uint *puVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t lVar17;
  int64_t *unaff_R14;
  uint64_t uVar18;
  int iVar19;
  int64_t unaff_R15;
  float fVar20;
  int32_t uVar21;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  int iStack0000000000000044;
  int64_t in_stack_00000058;
  int64_t in_stack_00000060;
  int iStack0000000000000074;
  int64_t lStack0000000000000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  uint64_t in_stack_000000d0;
  int32_t in_stack_000000e0;
  int32_t in_stack_000000e8;
  
  iStack0000000000000074 = FUN_180411320(param_1,param_2,param_3,unaff_R12D);
  fVar20 = (float)FUN_180410220();
  iVar19 = 0;
  if (0 < unaff_R12D) {
    puVar11 = (uint *)(unaff_RSI + 0x4c);
    puVar12 = (uint *)(unaff_R15 + 8);
    iVar19 = 0;
    in_stack_000000e0 = unaff_XMM8_Da;
    in_stack_000000e8 = unaff_XMM8_Dc;
    do {
      uVar2 = puVar12[-1];
      uVar3 = *puVar12;
      uVar21 = (**(code **)(*unaff_R14 + 0x10))
                         (fVar20,&stack0x00000090,(int)puVar12[-2] >> 2,puVar12[-2] & 3);
      uVar21 = (**(code **)(*unaff_R14 + 0x10))(uVar21,&stack0x000000b0,(int)uVar2 >> 2,uVar2 & 3);
      fVar20 = (float)(**(code **)(*unaff_R14 + 0x10))
                                (uVar21,&stack0x000000a0,(int)uVar3 >> 2,uVar3 & 3);
      if (((fStack0000000000000090 == fStack00000000000000b0) &&
          (fStack0000000000000094 == fStack00000000000000b4)) &&
         (in_stack_00000098 == in_stack_000000b8)) {
LAB_18040fc82:
        *puVar11 = *puVar11 | 1;
        iVar19 = iVar19 + 1;
      }
      else {
        fVar20 = in_stack_000000a8;
        if ((((fStack0000000000000090 == fStack00000000000000a0) &&
             (fStack0000000000000094 == fStack00000000000000a4)) &&
            (in_stack_00000098 == in_stack_000000a8)) ||
           (((fStack00000000000000b0 == fStack00000000000000a0 &&
             (fStack00000000000000b4 == fStack00000000000000a4)) &&
            (in_stack_000000b8 == in_stack_000000a8)))) goto LAB_18040fc82;
      }
      puVar12 = puVar12 + 3;
      puVar11 = puVar11 + 0x16;
      unaff_R13 = unaff_R13 + -1;
      unaff_RSI = in_stack_00000060;
      unaff_R15 = in_stack_00000058;
    } while (unaff_R13 != 0);
  }
  iVar19 = unaff_R12D - iVar19;
  FUN_180413dc0(unaff_RSI,unaff_R15,iVar19,unaff_R12D);
  FUN_180411840(unaff_RSI,unaff_R15);
  lVar7 = malloc((int64_t)(iVar19 * 3) * 0x18);
  in_stack_00000058 = (int64_t)iVar19;
  lVar8 = malloc(in_stack_00000058 * 0xc);
  if (lVar7 == 0) {
    lVar7 = lVar8;
    if (lVar8 != 0) goto LAB_1804101ac;
  }
  else {
    if (lVar8 != 0) {
      iStack0000000000000044 = 0;
      if (0 < iVar19) {
        uVar14 = 0;
        _fStack00000000000000a0 = 0;
        lStack0000000000000088 = 0;
        _fStack00000000000000b0 = 2;
        lVar15 = unaff_RSI;
        uVar18 = uVar14;
        do {
          iVar19 = 0;
          lVar13 = 0;
          lVar10 = lVar7 + uVar14 * 0x18;
          lVar17 = -4;
          lVar9 = _fStack00000000000000b0;
          lVar16 = _fStack00000000000000a0;
          do {
            if (((*(byte *)(lVar15 + 0x4c) & 4) == 0) &&
               (lVar1 = lVar9 + lVar13, *(int64_t *)(unaff_RSI + lVar1 * 8) == 0)) {
              uVar21 = *(int32_t *)(unaff_R15 + (lStack0000000000000088 + lVar13) * 4);
              _fStack0000000000000090 = uVar14 + 1;
              *(int64_t *)(unaff_RSI + lVar1 * 8) = lVar10;
              *(int32_t *)(lVar10 + 0x10) = uVar21;
              lVar10 = lVar10 + 0x18;
              *(uint *)(*(int64_t *)(unaff_RSI + lVar1 * 8) + 0x14) =
                   *(uint *)(lVar15 + 0x4c) >> 3 & 1;
              **(int32_t **)(unaff_RSI + lVar1 * 8) = 0;
              *(int64_t *)(*(int64_t *)(unaff_RSI + lVar1 * 8) + 8) =
                   lVar8 + (int64_t)(int)uVar18 * 4;
              piVar6 = *(int **)(unaff_RSI + lVar1 * 8);
              *(int *)(*(int64_t *)(piVar6 + 2) + (int64_t)*piVar6 * 4) = iStack0000000000000044;
              *piVar6 = *piVar6 + 1;
              iVar4 = *(int *)(unaff_RSI + (lVar16 + lVar13) * 4);
              lVar9 = 8;
              if (0 < iVar19) {
                lVar9 = lVar17;
              }
              iVar5 = *(int *)(lVar15 + lVar9);
              if (-1 < iVar4) {
                FUN_180411e20(unaff_R15,unaff_RSI,iVar4,*(uint64_t *)(unaff_RSI + lVar1 * 8));
              }
              if (-1 < iVar5) {
                FUN_180411e20(unaff_R15,unaff_RSI,iVar5,*(uint64_t *)(unaff_RSI + lVar1 * 8));
              }
              uVar18 = (uint64_t)(uint)((int)uVar18 + **(int **)(unaff_RSI + lVar1 * 8));
              lVar9 = _fStack00000000000000b0;
              uVar14 = _fStack0000000000000090;
              lVar16 = _fStack00000000000000a0;
            }
            iVar19 = iVar19 + 1;
            lVar13 = lVar13 + 1;
            lVar17 = lVar17 + 4;
          } while (iVar19 < 3);
          iStack0000000000000044 = iStack0000000000000044 + 1;
          lVar15 = lVar15 + 0x58;
          lStack0000000000000088 = lStack0000000000000088 + 3;
          _fStack00000000000000a0 = lVar16 + 0x16;
          _fStack00000000000000b0 = lVar9 + 0xb;
          in_stack_00000058 = in_stack_00000058 + -1;
        } while (in_stack_00000058 != 0);
      }
      lVar17 = (int64_t)iStack0000000000000074;
      lVar15 = malloc(lVar17 * 0x28);
      if (lVar15 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar15,0,lVar17 * 0x28);
      }
      free(unaff_R15);
      free(unaff_RSI);
      free(lVar7);
      unaff_RSI = lVar8;
      goto LAB_18040ff37;
    }
LAB_1804101ac:
    free(lVar7);
  }
  free(unaff_R15);
LAB_18040ff37:
  free(unaff_RSI);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18040fb86(float param_1)
void FUN_18040fb86(float param_1)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int in_ECX;
  int64_t lVar11;
  int iVar12;
  uint *unaff_RBP;
  uint *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t lVar16;
  int64_t lVar17;
  int unaff_R12D;
  int64_t unaff_R13;
  int64_t lVar18;
  int64_t *unaff_R14;
  uint64_t uVar19;
  int64_t unaff_R15;
  int32_t uVar20;
  int iStack0000000000000044;
  int64_t in_stack_00000058;
  int64_t in_stack_00000060;
  uint64_t in_stack_00000070;
  int64_t lStack0000000000000088;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  uint64_t in_stack_000000d0;
  
  lVar7 = in_stack_00000058;
  puVar13 = (uint *)(unaff_R15 + 8);
  do {
    uVar2 = puVar13[-1];
    uVar3 = *puVar13;
    uVar20 = (**(code **)(*unaff_R14 + 0x10))
                       (param_1,&stack0x00000090,(int)puVar13[-2] >> 2,puVar13[-2] & 3);
    uVar20 = (**(code **)(*unaff_R14 + 0x10))(uVar20,&stack0x000000b0,(int)uVar2 >> 2,uVar2 & 3);
    param_1 = (float)(**(code **)(*unaff_R14 + 0x10))
                               (uVar20,&stack0x000000a0,(int)uVar3 >> 2,uVar3 & 3);
    if (((fStack0000000000000090 == fStack00000000000000b0) &&
        (fStack0000000000000094 == fStack00000000000000b4)) &&
       (in_stack_00000098 == in_stack_000000b8)) {
LAB_18040fc82:
      *unaff_RBP = *unaff_RBP | 1;
      in_ECX = in_ECX + 1;
    }
    else {
      param_1 = in_stack_000000a8;
      if ((((fStack0000000000000090 == fStack00000000000000a0) &&
           (fStack0000000000000094 == fStack00000000000000a4)) &&
          (in_stack_00000098 == in_stack_000000a8)) ||
         (((fStack00000000000000b0 == fStack00000000000000a0 &&
           (fStack00000000000000b4 == fStack00000000000000a4)) &&
          (in_stack_000000b8 == in_stack_000000a8)))) goto LAB_18040fc82;
    }
    puVar13 = puVar13 + 3;
    unaff_RBP = unaff_RBP + 0x16;
    unaff_R13 = unaff_R13 + -1;
  } while (unaff_R13 != 0);
  in_ECX = unaff_R12D - in_ECX;
  FUN_180413dc0(in_stack_00000060,in_stack_00000058,in_ECX,unaff_R12D);
  FUN_180411840(in_stack_00000060,in_stack_00000058);
  lVar8 = malloc((int64_t)(in_ECX * 3) * 0x18);
  lVar9 = malloc((int64_t)in_ECX * 0xc);
  if (lVar8 == 0) {
    lVar8 = lVar9;
    if (lVar9 != 0) goto LAB_1804101ac;
  }
  else {
    if (lVar9 != 0) {
      iStack0000000000000044 = 0;
      if (0 < in_ECX) {
        uVar15 = 0;
        _fStack00000000000000a0 = 0;
        lStack0000000000000088 = 0;
        _fStack00000000000000b0 = 2;
        lVar16 = in_stack_00000060;
        uVar19 = uVar15;
        in_stack_00000058 = (int64_t)in_ECX;
        do {
          iVar12 = 0;
          lVar14 = 0;
          lVar11 = lVar8 + uVar15 * 0x18;
          lVar18 = -4;
          lVar10 = _fStack00000000000000b0;
          lVar17 = _fStack00000000000000a0;
          do {
            if (((*(byte *)(lVar16 + 0x4c) & 4) == 0) &&
               (lVar1 = lVar10 + lVar14, *(int64_t *)(in_stack_00000060 + lVar1 * 8) == 0)) {
              uVar20 = *(int32_t *)(lVar7 + (lStack0000000000000088 + lVar14) * 4);
              _fStack0000000000000090 = uVar15 + 1;
              *(int64_t *)(in_stack_00000060 + lVar1 * 8) = lVar11;
              *(int32_t *)(lVar11 + 0x10) = uVar20;
              lVar11 = lVar11 + 0x18;
              *(uint *)(*(int64_t *)(in_stack_00000060 + lVar1 * 8) + 0x14) =
                   *(uint *)(lVar16 + 0x4c) >> 3 & 1;
              **(int32_t **)(in_stack_00000060 + lVar1 * 8) = 0;
              *(int64_t *)(*(int64_t *)(in_stack_00000060 + lVar1 * 8) + 8) =
                   lVar9 + (int64_t)(int)uVar19 * 4;
              piVar6 = *(int **)(in_stack_00000060 + lVar1 * 8);
              *(int *)(*(int64_t *)(piVar6 + 2) + (int64_t)*piVar6 * 4) = iStack0000000000000044;
              *piVar6 = *piVar6 + 1;
              iVar4 = *(int *)(in_stack_00000060 + (lVar17 + lVar14) * 4);
              lVar10 = 8;
              if (0 < iVar12) {
                lVar10 = lVar18;
              }
              iVar5 = *(int *)(lVar16 + lVar10);
              if (-1 < iVar4) {
                FUN_180411e20(lVar7,in_stack_00000060,iVar4,
                              *(uint64_t *)(in_stack_00000060 + lVar1 * 8));
              }
              if (-1 < iVar5) {
                FUN_180411e20(lVar7,in_stack_00000060,iVar5,
                              *(uint64_t *)(in_stack_00000060 + lVar1 * 8));
              }
              uVar19 = (uint64_t)(uint)((int)uVar19 + **(int **)(in_stack_00000060 + lVar1 * 8));
              lVar10 = _fStack00000000000000b0;
              uVar15 = _fStack0000000000000090;
              lVar17 = _fStack00000000000000a0;
            }
            iVar12 = iVar12 + 1;
            lVar14 = lVar14 + 1;
            lVar18 = lVar18 + 4;
          } while (iVar12 < 3);
          iStack0000000000000044 = iStack0000000000000044 + 1;
          lVar16 = lVar16 + 0x58;
          lStack0000000000000088 = lStack0000000000000088 + 3;
          _fStack00000000000000a0 = lVar17 + 0x16;
          _fStack00000000000000b0 = lVar10 + 0xb;
          in_stack_00000058 = in_stack_00000058 + -1;
        } while (in_stack_00000058 != 0);
      }
      lVar16 = malloc((int64_t)in_stack_00000070._4_4_ * 0x28);
      if (lVar16 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar16,0,(int64_t)in_stack_00000070._4_4_ * 0x28);
      }
      free(lVar7);
      free(in_stack_00000060);
      free(lVar8);
      in_stack_00000060 = lVar9;
      goto LAB_18040ff37;
    }
LAB_1804101ac:
    free(lVar8);
  }
  free(in_stack_00000058);
LAB_18040ff37:
  free(in_stack_00000060);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}





