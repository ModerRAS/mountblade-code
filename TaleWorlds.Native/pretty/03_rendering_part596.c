#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part596.c - 4 个函数

// 函数: void FUN_1805963cb(float param_1,char param_2,uint64_t param_3,float param_4)
void FUN_1805963cb(float param_1,char param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  uint in_ECX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar2;
  float unaff_XMM14_Da;
  
  if (*(char *)(unaff_RDI + 0xec) != '\0') {
    param_1 = param_1 * *(float *)(unaff_RBX + 0x7c);
  }
  if (*(float *)(unaff_RBX + 0x4c) <= param_1) {
    param_1 = *(float *)(unaff_RBX + 0x4c);
  }
  *(float *)(unaff_RBX + 0x4c) = param_1;
  if (*(char *)(unaff_RDI + 0x9b) != '\0') {
    fVar2 = SQRT(*(float *)(unaff_RDI + 0x118) * *(float *)(unaff_RDI + 0x118) +
                 *(float *)(unaff_RDI + 0x11c) * *(float *)(unaff_RDI + 0x11c));
    if (fVar2 <= 0.001) {
      fVar2 = 0.001;
    }
    *(float *)(unaff_RBX + 0x4c) = fVar2 * render_system_config;
  }
  fVar2 = *(float *)(unaff_RDI + 0xe8);
  if (unaff_XMM14_Da < fVar2) {
    fVar1 = *(float *)(unaff_RBX + 0x4c);
    if (*(char *)(unaff_RDI + 0xec) != '\0') {
      fVar2 = *(float *)(unaff_RBX + 0x7c) * fVar2;
      if (fVar1 <= fVar2) {
        fVar2 = fVar1;
      }
      *(float *)(unaff_RBX + 0x84) = fVar2;
      *(float *)(unaff_RBX + 0x88) = *(float *)(unaff_RBX + 0x7c) * *(float *)(unaff_RDI + 0xe8);
      return;
    }
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
    *(float *)(unaff_RBX + 0x84) = fVar2;
    fVar2 = *(float *)(unaff_RDI + 0xe8);
    if (*(float *)(unaff_RBX + 0x7c) <= *(float *)(unaff_RDI + 0xe8)) {
      fVar2 = *(float *)(unaff_RBX + 0x7c);
    }
    *(float *)(unaff_RBX + 0x88) = fVar2;
    return;
  }
  *(int32_t *)(unaff_RBX + 0x84) = *(int32_t *)(unaff_RBX + 0x4c);
  if (param_2 != '\0') {
    if ((in_ECX >> 4 & 1) == 0) {
      fVar2 = *(float *)(unaff_RDI + 0x48);
    }
    else {
      fVar2 = *(float *)(unaff_RDI + 0x44);
    }
    *(float *)(unaff_RBX + 0x88) = *(float *)(unaff_RBX + 0x80) * param_4 * fVar2;
    return;
  }
  *(int32_t *)(unaff_RBX + 0x88) = *(int32_t *)(unaff_RBX + 0x7c);
  return;
}





// 函数: void FUN_18059643c(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_18059643c(uint64_t param_1,uint64_t param_2,float param_3)

{
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar1;
  
  fVar1 = *(float *)(unaff_RBX + 0x4c);
  if (*(char *)(unaff_RDI + 0xec) != '\0') {
    param_3 = *(float *)(unaff_RBX + 0x7c) * param_3;
    if (fVar1 <= param_3) {
      param_3 = fVar1;
    }
    *(float *)(unaff_RBX + 0x84) = param_3;
    *(float *)(unaff_RBX + 0x88) = *(float *)(unaff_RBX + 0x7c) * *(float *)(unaff_RDI + 0xe8);
    return;
  }
  if (fVar1 <= param_3) {
    param_3 = fVar1;
  }
  *(float *)(unaff_RBX + 0x84) = param_3;
  fVar1 = *(float *)(unaff_RDI + 0xe8);
  if (*(float *)(unaff_RBX + 0x7c) <= *(float *)(unaff_RDI + 0xe8)) {
    fVar1 = *(float *)(unaff_RBX + 0x7c);
  }
  *(float *)(unaff_RBX + 0x88) = fVar1;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001805974aa)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180596510(uint64_t param_1,float param_2,int64_t param_3,uint *param_4,uint64_t param_5
void FUN_180596510(uint64_t param_1,float param_2,int64_t param_3,uint *param_4,uint64_t param_5
                  )

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uVar17;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  
  uStackX_18._0_4_ = 0.0;
  uStackX_18._4_4_ = 0.0;
  fVar13 = *(float *)(param_3 + 0x4c);
  if (*(char *)(param_3 + 0x9a) != '\0') {
    fVar13 = (float)param_4[0xb];
    fVar12 = *(float *)(param_3 + 0x4c) - fVar13;
    if (fVar12 <= 3.1415927) {
      if (fVar12 < -3.1415927) {
        fVar12 = fVar12 + 6.2831855;
      }
    }
    else {
      fVar12 = fVar12 + -6.2831855;
    }
    if (1.5707964 <= ABS(fVar12)) {
      fVar13 = fVar13 + 3.1415927;
      if (fVar13 <= 3.1415927) {
        if (fVar13 < -3.1415927) {
          fVar13 = fVar13 + 6.2831855;
        }
      }
      else {
        fVar13 = fVar13 + -6.2831855;
      }
    }
  }
  if (*(int *)(param_3 + 0x28) != 0) {
    if ((*(int *)(param_3 + 0x178) == 2) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
      param_4[0xc] = 0;
      param_4[0xd] = 0;
    }
    fVar12 = *(float *)(param_3 + 0x3c) - (float)param_4[1];
    fVar8 = *(float *)(param_3 + 0x40) - (float)param_4[2];
    uStackX_20._0_4_ = fVar12 * 5.0;
    uStackX_20._4_4_ = fVar8 * 5.0;
    fVar13 = (fVar8 * fVar8 + fVar12 * fVar12) * 25.0;
    if (fVar13 < 0.25) {
      uStackX_20._4_4_ = fVar8 * (0.99999 / param_2);
      uStackX_20._0_4_ = fVar12 * (0.99999 / param_2);
      fVar13 = uStackX_20._4_4_ * uStackX_20._4_4_ + (float)uStackX_20 * (float)uStackX_20;
    }
    if ((*param_4 >> 2 & 1) == 0) {
      fVar12 = 4.0;
    }
    else {
      if ((*param_4 >> 4 & 1) == 0) {
        fVar12 = *(float *)(param_3 + 0x48);
      }
      else {
        fVar12 = *(float *)(param_3 + 0x44);
      }
      fVar12 = (float)param_4[0x20] * 0.99 * fVar12;
    }
    if (fVar12 * fVar12 < fVar13) {
      uStackX_20._0_4_ = (float)uStackX_20 * (fVar12 / SQRT(fVar13));
      uStackX_20._4_4_ = uStackX_20._4_4_ * (fVar12 / SQRT(fVar13));
      fVar13 = fVar12 * fVar12;
    }
    fVar12 = (float)param_4[5] * (float)param_4[5] + (float)param_4[6] * (float)param_4[6];
    if (fVar12 <= fVar13) {
      fVar10 = uStackX_20._4_4_ * uStackX_20._4_4_ + (float)uStackX_20 * (float)uStackX_20;
      fVar10 = fVar10 + (float)(fVar10 <= 1.1754944e-38) * 1.1754944e-38;
      auVar7 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar13 = auVar7._0_4_;
      fVar8 = fVar13 * 0.5 * (3.0 - fVar10 * fVar13 * fVar13);
      fVar13 = SQRT(fVar12) * (1.0 - param_2 * 8.0) + fVar8 * fVar10 * param_2 * 8.0;
      uStackX_20._0_4_ = (float)uStackX_20 * fVar8 * fVar13;
      uStackX_20._4_4_ = uStackX_20._4_4_ * fVar8 * fVar13;
    }
    if (uStackX_20._4_4_ * uStackX_20._4_4_ + (float)uStackX_20 * (float)uStackX_20 < param_2 * 0.01
       ) {
      uStackX_20._0_4_ = 0.0;
      uStackX_20._4_4_ = 0.0;
    }
                    // WARNING: Subroutine does not return
    AdvancedSystemController(param_4[0xb] ^ 0x80000000);
  }
  if ((((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x18 & 1) != 0) ||
     (0x21 < *(int *)(param_3 + 0x90))) {
    if ((*(int *)(param_3 + 0x178) == 2) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
      param_4[0xc] = 0;
      param_4[0xd] = 0;
    }
    fVar13 = 1.0 - param_2 * 8.0;
    fVar12 = fVar13 * (float)param_4[6];
    fVar13 = fVar13 * (float)param_4[5];
    uStackX_20 = CONCAT44(fVar12,fVar13);
    uVar3 = uStackX_20;
    if (fVar12 * fVar12 + fVar13 * fVar13 < 0.0001) {
      uVar3 = 0;
    }
    *(uint64_t *)(param_4 + 5) = uVar3;
    goto LAB_180597469;
  }
  if (((param_4[0xe] & 3) != 0) && (0.0 < (float)param_4[0xf] || (float)param_4[0xf] == 0.0)) {
    fVar12 = -1.0;
    if ((*(int *)(param_3 + 0x178) == 2) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      if (*(char *)(param_3 + 0x9a) == '\0') {
        fVar8 = *(float *)(param_3 + 0xbc);
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
          if ((*(byte *)(param_3 + 0xb4) & 1) != 0) {
            param_4[0xc] = 0x3f800000;
            fVar8 = 1.0;
          }
        }
        else {
          param_4[0xc] = (uint)fVar8;
        }
        if (0.0 <= *(float *)(param_3 + 0xbc)) {
          if ((*(byte *)(param_3 + 0xb4) & 2) != 0) {
            fVar8 = fVar8 - 1.0;
            goto LAB_180596a35;
          }
        }
        else {
          fVar8 = *(float *)(param_3 + 0xbc) + fVar8;
LAB_180596a35:
          param_4[0xc] = (uint)fVar8;
        }
        fVar8 = *(float *)(param_3 + 0xb8);
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
          if ((*(byte *)(param_3 + 0xb4) & 4) != 0) {
            param_4[0xd] = 0x3f800000;
            fVar8 = 1.0;
          }
        }
        else {
          param_4[0xd] = (uint)fVar8;
        }
        if (0.0 <= *(float *)(param_3 + 0xb8)) {
          if ((*(byte *)(param_3 + 0xb4) & 8) == 0) goto LAB_180596aa5;
          fVar8 = fVar8 - 1.0;
        }
        else {
          fVar8 = *(float *)(param_3 + 0xb8) + fVar8;
        }
        param_4[0xd] = (uint)fVar8;
      }
      else if (((*(uint *)(param_3 + 0xb4) & 1) != 0) || (0.0 < *(float *)(param_3 + 0xbc))) {
        if (*(char *)(param_3 + 0x9c) == '\0') {
          fVar8 = 0.0;
          param_4[0xc] = 0x3f800000;
        }
        else {
          fVar8 = 0.0;
          param_4[0xc] = 0;
        }
      }
      else if (((*(uint *)(param_3 + 0xb4) & 2) != 0) || (*(float *)(param_3 + 0xbc) < 0.0)) {
        fVar8 = 0.0;
        param_4[0xc] = 0xbf800000;
      }
      else {
        fVar8 = 0.0;
        param_4[0xc] = 0;
      }
    }
    else {
      fVar8 = (float)param_4[0xd];
    }
LAB_180596aa5:
    FUN_180598160(&uStackX_20,fVar8,param_3,fVar13,param_4[0xb]);
    uStackX_18 = uStackX_20;
    uVar3 = uStackX_18;
    uStackX_18._4_4_ = (float)((uint64_t)uStackX_20 >> 0x20);
    uStackX_18._0_4_ = (float)uStackX_20;
    fVar8 = uStackX_18._4_4_ * uStackX_18._4_4_ + (float)uStackX_18 * (float)uStackX_18;
    fVar8 = fVar8 + (float)(fVar8 <= 1.1754944e-38) * 1.1754944e-38;
    auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar13 = auVar7._0_4_;
    fVar10 = fVar13 * 0.5 * (3.0 - fVar8 * fVar13 * fVar13);
    fVar13 = (float)uStackX_18 * fVar10;
    fVar11 = uStackX_18._4_4_ * fVar10;
    fVar10 = fVar10 * fVar8;
    if (ABS(fVar10) < 1e-07) {
      fVar10 = 0.0;
    }
    uStackX_18 = uVar3;
    fVar5 = (float)func_0x000180598bb0(1,*(int8_t *)(param_3 + 0x9b),param_3 + 0xf8,
                                       param_4[0x1f],*(int32_t *)(param_3 + 200));
    uStackX_18._4_4_ = (float)((uint64_t)*(uint64_t *)(param_4 + 5) >> 0x20);
    uStackX_18._0_4_ = (float)*(uint64_t *)(param_4 + 5);
    fVar16 = uStackX_18._4_4_ * uStackX_18._4_4_ + (float)uStackX_18 * (float)uStackX_18;
    fVar16 = fVar16 + (float)(fVar16 <= 1.1754944e-38) * 1.1754944e-38;
    auVar7 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar9 = auVar7._0_4_;
    fVar8 = (float)param_4[6];
    fVar9 = fVar9 * 0.5 * (3.0 - fVar16 * fVar9 * fVar9);
    fVar15 = (float)uStackX_18 * fVar9;
    fVar14 = uStackX_18._4_4_ * fVar9;
    if (fVar10 == 0.0) {
      fVar6 = param_2 + 1e-06;
      uStackX_18._4_4_ = (-1.0 / fVar6) * fVar8;
      uStackX_18._0_4_ = -((float)param_4[5] / fVar6);
      if (fVar6 * fVar5 < fVar9 * fVar16) {
        uStackX_18._0_4_ = -(fVar5 * fVar15);
        uStackX_18._4_4_ = -(fVar5 * fVar14);
      }
    }
    else {
      uStackX_18._0_4_ = (float)uStackX_20 * fVar5;
      uStackX_18._4_4_ = uStackX_20._4_4_ * fVar5;
    }
    fVar9 = *(float *)(param_3 + 200) * render_system_config;
    fVar13 = fVar11 * fVar8 + (float)param_4[5] * fVar13;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar11 = (render_system_config * (float)param_4[0x1f]) / fVar9 - fVar5;
    if (fVar13 < (1.0 - render_system_config) * (float)param_4[0x1f]) {
      fVar13 = ((fVar11 + fVar11) / (*(float *)(param_3 + 200) - fVar9)) * fVar13 + fVar5 * fVar5;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar11 = SQRT(fVar13) - fVar5;
    }
    uStackX_18._0_4_ = (float)uStackX_18 + fVar15 * fVar11;
    uStackX_18._4_4_ = uStackX_18._4_4_ + fVar14 * fVar11;
    uStack_e8 = CONCAT44(uStackX_18._4_4_ * param_2 + fVar8,
                         (float)uStackX_18 * param_2 + (float)param_4[5]);
    FUN_180595ba0(param_1,param_2,&uStack_e8,param_3,param_4);
    FUN_180598c50(&uStackX_18,param_2,param_4 + 5,param_4[0x13]);
    uStack_e8 = CONCAT44(uStackX_18._4_4_ * param_2,(float)uStackX_18 * param_2);
    *(uint64_t *)(param_4 + 0x10) = uStack_e8;
    if (((float)param_5 != 0.0) || (param_5._4_4_ != 0.0)) {
      uStack_e8 = param_5;
                    // WARNING: Subroutine does not return
      AdvancedSystemController(param_4[0xb] ^ 0x80000000);
    }
    fVar13 = (float)param_4[5] + (float)param_4[0x10];
    fVar8 = (float)param_4[0x11] + (float)param_4[6];
    uStack_e8 = CONCAT44(fVar8,fVar13);
    if (*(char *)(param_3 + 0x9a) == '\0') {
      fVar11 = 0.01;
    }
    else {
      fVar11 = 1e-08;
    }
    uVar1 = *param_4;
    uVar3 = uStack_e8;
    if (fVar8 * fVar8 + fVar13 * fVar13 < fVar11 * param_2) {
      uVar3 = 0;
    }
    *(uint64_t *)(param_4 + 5) = uVar3;
    if ((uVar1 >> 4 & 1) == 0) {
      fVar13 = *(float *)(param_3 + 0x48);
    }
    else {
      fVar13 = *(float *)(param_3 + 0x44);
    }
    fVar13 = fVar13 * (float)param_4[0x20];
    if ((uVar1 >> 3 & 1) != 0) {
      fVar13 = fVar13 * 1.2;
    }
    if (fVar10 == 0.0) {
      fVar10 = 1.0;
    }
    uVar2 = uVar1 | 8;
    if (fVar13 <= fVar10 * (float)param_4[0x13]) {
      uVar2 = uVar1 & 0xfffffff7;
    }
    param_1 = (uint64_t)uVar2;
    *param_4 = uVar2;
    if ((((system_status_flag != 1) && (system_status_flag != 4)) || (*(int *)(param_3 + 0x178) == 2)) &&
       (((uVar2 >> 4 & 1) == 0 &&
        (*(float *)(param_3 + 0x15c) <= ABS((float)param_4[5]) &&
         ABS((float)param_4[5]) != *(float *)(param_3 + 0x15c))))) {
      if (*(char *)(param_3 + 0x50) == '\0') {
        if (((*(uint *)(param_3 + 0xb4) & 8) != 0) ||
           (*(float *)(param_3 + 0xb8) <= 0.0 && *(float *)(param_3 + 0xb8) != 0.0)) {
          fVar12 = 1.0;
LAB_18059700a:
          if ((fVar12 * (float)uStackX_20 < -0.1) &&
             ((*(int *)(param_3 + 0x74) == -1 || (*(int *)(param_3 + 0x7c) == 0x23)))) {
            if (*(char *)(param_3 + 0x50) == '\0') {
              param_1 = (uint64_t)(uVar2 | 0x2000000);
              *param_4 = uVar2 | 0x2000000;
            }
            else {
              param_1 = (uint64_t)(uVar2 | 0x1000000);
              *param_4 = uVar2 | 0x1000000;
            }
          }
        }
      }
      else if (((*(uint *)(param_3 + 0xb4) & 4) != 0) || (0.0 < *(float *)(param_3 + 0xb8)))
      goto LAB_18059700a;
    }
  }
  if (*(char *)(param_3 + 0x9b) != '\0') {
    uStack_e8 = *(uint64_t *)(param_3 + 0x118);
    uStack_e0 = *(uint64_t *)(param_3 + 0x120);
    uStackX_20._4_4_ = (float)((uint64_t)uStack_e8 >> 0x20);
    uStackX_20._0_4_ = (float)uStack_e8;
    fVar13 = uStackX_20._4_4_ * uStackX_20._4_4_ + (float)uStackX_20 * (float)uStackX_20;
    auVar7 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    uStackX_20 = *(uint64_t *)(param_4 + 5);
                    // WARNING: Subroutine does not return
    AdvancedSystemController(param_1,param_4[0xb],auVar7._0_8_,fVar13 * auVar7._0_4_ * auVar7._0_4_);
  }
  fVar13 = 1.0 - param_2 * 3.0;
  param_4[0x15] = (uint)(fVar13 * (float)param_4[0x15]);
  param_4[0x14] = (uint)(fVar13 * (float)param_4[0x14]);
LAB_180597469:
  uVar17 = (uint64_t)param_4[0xb];
  puVar4 = (uint64_t *)FUN_180598160(&uStackX_20,param_4[0xd]);
  *(uint64_t *)(param_4 + 0x16) = *puVar4;
  FUN_1805989b0(&uStackX_18,param_2,1,param_4,uVar17);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180596607(uint64_t param_1,uint64_t param_2,int64_t param_3,uint *param_4)
void FUN_180596607(uint64_t param_1,uint64_t param_2,int64_t param_3,uint *param_4)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  void *puVar6;
  uint *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM11_Da;
  uint unaff_XMM14_Da;
  float fVar17;
  uint64_t uStack0000000000000030;
  
  if (!in_ZF) {
    if ((*(int *)(param_3 + 0x178) == 2) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_2 = 0;
    }
    fVar10 = *(float *)(param_3 + 0x3c) - (float)param_4[1];
    fVar12 = *(float *)(param_3 + 0x40) - (float)param_4[2];
    fVar15 = fVar10 * 5.0;
    fVar16 = fVar12 * 5.0;
    *(float *)(unaff_RBP + 0x77) = fVar15;
    *(float *)(unaff_RBP + 0x7b) = fVar16;
    fVar8 = (fVar12 * fVar12 + fVar10 * fVar10) * 25.0;
    if (fVar8 < 0.25) {
      fVar16 = fVar12 * (0.99999 / unaff_XMM11_Da);
      fVar15 = fVar10 * (0.99999 / unaff_XMM11_Da);
      *(float *)(unaff_RBP + 0x7b) = fVar16;
      *(float *)(unaff_RBP + 0x77) = fVar15;
      fVar8 = fVar16 * fVar16 + fVar15 * fVar15;
    }
    if ((*param_4 >> 2 & 1) == 0) {
      fVar10 = 4.0;
    }
    else {
      if ((*param_4 >> 4 & 1) == 0) {
        fVar10 = *(float *)(param_3 + 0x48);
      }
      else {
        fVar10 = *(float *)(param_3 + 0x44);
      }
      fVar10 = (float)param_4[0x20] * 0.99 * fVar10;
    }
    if (fVar10 * fVar10 < fVar8) {
      fVar15 = fVar15 * (fVar10 / SQRT(fVar8));
      fVar16 = fVar16 * (fVar10 / SQRT(fVar8));
      *(float *)(unaff_RBP + 0x77) = fVar15;
      *(float *)(unaff_RBP + 0x7b) = fVar16;
      fVar8 = fVar10 * fVar10;
    }
    fVar10 = (float)param_4[5] * (float)param_4[5] + (float)param_4[6] * (float)param_4[6];
    if (fVar10 <= fVar8) {
      fVar14 = fVar16 * fVar16 + fVar15 * fVar15;
      fVar14 = fVar14 + (float)(fVar14 <= 1.1754944e-38) * 1.1754944e-38;
      auVar11 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar8 = auVar11._0_4_;
      fVar12 = fVar8 * 0.5 * (3.0 - fVar14 * fVar8 * fVar8);
      fVar8 = SQRT(fVar10) * (1.0 - unaff_XMM11_Da * 8.0) + fVar12 * fVar14 * unaff_XMM11_Da * 8.0;
      *(float *)(unaff_RBP + 0x77) = fVar15 * fVar12 * fVar8;
      *(float *)(unaff_RBP + 0x7b) = fVar16 * fVar12 * fVar8;
    }
    uVar4 = *(uint64_t *)(unaff_RBP + 0x77);
    *(uint64_t *)(unaff_RBP + 0x77) = uVar4;
    uVar1 = param_4[0xb];
    if (*(float *)(unaff_RBP + 0x7b) * *(float *)(unaff_RBP + 0x7b) +
        *(float *)(unaff_RBP + 0x77) * *(float *)(unaff_RBP + 0x77) < unaff_XMM11_Da * 0.01) {
      uVar4 = param_2;
    }
    *(uint64_t *)(unaff_RBP + 0x77) = uVar4;
                    // WARNING: Subroutine does not return
    AdvancedSystemController(uVar1 ^ 0x80000000);
  }
  if ((((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x18 & 1) != 0) ||
     (0x21 < *(int *)(param_3 + 0x90))) {
    if ((*(int *)(param_3 + 0x178) == 2) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_2 = 0;
    }
    fVar8 = 1.0 - unaff_XMM11_Da * 8.0;
    fVar10 = fVar8 * (float)param_4[6];
    fVar8 = fVar8 * (float)param_4[5];
    *(float *)(unaff_RBP + 0x7b) = fVar10;
    *(float *)(unaff_RBP + 0x77) = fVar8;
    uVar4 = *(uint64_t *)(unaff_RBP + 0x77);
    if (fVar10 * fVar10 + fVar8 * fVar8 < 0.0001) {
      uVar4 = param_2;
    }
    *(uint64_t *)(param_4 + 5) = uVar4;
    goto LAB_180597469;
  }
  if (((param_4[0xe] & 3) != 0) && (0.0 < (float)param_4[0xf] || (float)param_4[0xf] == 0.0)) {
    fVar8 = -1.0;
    if ((*(int *)(param_3 + 0x178) == 2) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      if (*(char *)(param_3 + 0x9a) == '\0') {
        fVar10 = *(float *)(param_3 + 0xbc);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
          if ((*(byte *)(param_3 + 0xb4) & 1) != 0) {
            param_4[0xc] = 0x3f800000;
            fVar10 = 1.0;
          }
        }
        else {
          param_4[0xc] = (uint)fVar10;
        }
        if (0.0 <= *(float *)(param_3 + 0xbc)) {
          if ((*(byte *)(param_3 + 0xb4) & 2) != 0) {
            fVar10 = fVar10 - 1.0;
            goto LAB_180596a35;
          }
        }
        else {
          fVar10 = *(float *)(param_3 + 0xbc) + fVar10;
LAB_180596a35:
          param_4[0xc] = (uint)fVar10;
        }
        fVar10 = *(float *)(param_3 + 0xb8);
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
          if ((*(byte *)(param_3 + 0xb4) & 4) != 0) {
            param_4[0xd] = 0x3f800000;
            fVar10 = 1.0;
          }
        }
        else {
          param_4[0xd] = (uint)fVar10;
        }
        if (0.0 <= *(float *)(param_3 + 0xb8)) {
          if ((*(byte *)(param_3 + 0xb4) & 8) == 0) goto LAB_180596aa5;
          fVar10 = fVar10 - 1.0;
        }
        else {
          fVar10 = *(float *)(param_3 + 0xb8) + fVar10;
        }
        param_4[0xd] = (uint)fVar10;
      }
      else if (((*(uint *)(param_3 + 0xb4) & 1) != 0) || (0.0 < *(float *)(param_3 + 0xbc))) {
        if (*(char *)(param_3 + 0x9c) == '\0') {
          fVar10 = 0.0;
          param_4[0xc] = 0x3f800000;
        }
        else {
          fVar10 = 0.0;
          param_4[0xc] = 0;
        }
      }
      else if (((*(uint *)(param_3 + 0xb4) & 2) != 0) || (*(float *)(param_3 + 0xbc) < 0.0)) {
        fVar10 = 0.0;
        param_4[0xc] = 0xbf800000;
      }
      else {
        fVar10 = 0.0;
        param_4[0xc] = 0;
      }
    }
    else {
      fVar10 = (float)param_4[0xd];
    }
LAB_180596aa5:
    FUN_180598160(unaff_RBP + 0x77,fVar10,param_3,param_4,param_4[0xb]);
    *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x77);
    fVar10 = *(float *)(unaff_RBP + 0x73);
    fVar12 = *(float *)(unaff_RBP + 0x6f);
    fVar16 = fVar10 * fVar10 + fVar12 * fVar12;
    fVar16 = fVar16 + (float)(fVar16 <= 1.1754944e-38) * 1.1754944e-38;
    auVar11 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
    fVar15 = auVar11._0_4_;
    fVar15 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
    fVar16 = fVar15 * fVar16;
    *(float *)(unaff_RBP + 0x67) = fVar12 * fVar15;
    if ((float)((uint)fVar16 & unaff_XMM14_Da) < 1e-07) {
      fVar16 = 0.0;
    }
    fVar7 = (float)func_0x000180598bb0(1,*(int8_t *)(unaff_RDI + 0x9b),unaff_RDI + 0xf8,
                                       unaff_RBX[0x1f],*(int32_t *)(unaff_RDI + 200));
    *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBX + 5);
    fVar12 = *(float *)(unaff_RBP + 0x73);
    fVar14 = *(float *)(unaff_RBP + 0x6f);
    fVar17 = fVar12 * fVar12 + fVar14 * fVar14;
    fVar17 = fVar17 + (float)(fVar17 <= 1.1754944e-38) * 1.1754944e-38;
    auVar11 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar13 = auVar11._0_4_;
    fVar2 = (float)unaff_RBX[6];
    fVar13 = fVar13 * 0.5 * (3.0 - fVar17 * fVar13 * fVar13);
    if (fVar16 == 0.0) {
      fVar9 = unaff_XMM11_Da + 1e-06;
      *(float *)(unaff_RBP + 0x6f) = -((float)unaff_RBX[5] / fVar9);
      *(float *)(unaff_RBP + 0x73) = (-1.0 / fVar9) * fVar2;
      *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x6f);
      if (fVar9 * fVar7 < fVar13 * fVar17) {
        fVar17 = -(fVar7 * fVar14 * fVar13);
        fVar9 = -(fVar7 * fVar12 * fVar13);
        goto LAB_180596c90;
      }
    }
    else {
      fVar17 = *(float *)(unaff_RBP + 0x77) * fVar7;
      fVar9 = *(float *)(unaff_RBP + 0x7b) * fVar7;
LAB_180596c90:
      *(float *)(unaff_RBP + 0x6f) = fVar17;
      *(float *)(unaff_RBP + 0x73) = fVar9;
      *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x6f);
    }
    fVar17 = *(float *)(unaff_RDI + 200) * render_system_config;
    fVar10 = fVar10 * fVar15 * fVar2 + (float)unaff_RBX[5] * *(float *)(unaff_RBP + 0x67);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar15 = (render_system_config * (float)unaff_RBX[0x1f]) / fVar17 - fVar7;
    if (fVar10 < (1.0 - render_system_config) * (float)unaff_RBX[0x1f]) {
      fVar10 = ((fVar15 + fVar15) / (*(float *)(unaff_RDI + 200) - fVar17)) * fVar10 + fVar7 * fVar7
      ;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      fVar15 = SQRT(fVar10) - fVar7;
    }
    *(float *)(unaff_RBP + 0x6f) = *(float *)(unaff_RBP + 0x6f) + fVar14 * fVar13 * fVar15;
    *(float *)(unaff_RBP + 0x73) = *(float *)(unaff_RBP + 0x73) + fVar12 * fVar13 * fVar15;
    FUN_180595ba0();
    FUN_180598c50(unaff_RBP + 0x6f);
    fVar10 = *(float *)(unaff_RBP + 0x7f);
    uStack0000000000000030 =
         CONCAT44(*(float *)(unaff_RBP + 0x73) * unaff_XMM11_Da,
                  *(float *)(unaff_RBP + 0x6f) * unaff_XMM11_Da);
    *(uint64_t *)(unaff_RBX + 0x10) = uStack0000000000000030;
    if ((fVar10 != 0.0) || (*(float *)(unaff_RBP + 0x83) != 0.0)) {
                    // WARNING: Subroutine does not return
      AdvancedSystemController(unaff_RBX[0xb] ^ 0x80000000);
    }
    fVar10 = (float)unaff_RBX[5] + (float)unaff_RBX[0x10];
    fVar12 = (float)unaff_RBX[0x11] + (float)unaff_RBX[6];
    uStack0000000000000030 = CONCAT44(fVar12,fVar10);
    if (*(char *)(unaff_RDI + 0x9a) == '\0') {
      fVar15 = 0.01;
    }
    else {
      fVar15 = 1e-08;
    }
    uVar1 = *unaff_RBX;
    if (fVar12 * fVar12 + fVar10 * fVar10 < fVar15 * unaff_XMM11_Da) {
      uStack0000000000000030 = 0;
    }
    *(uint64_t *)(unaff_RBX + 5) = uStack0000000000000030;
    if ((uVar1 >> 4 & 1) == 0) {
      fVar10 = *(float *)(unaff_RDI + 0x48);
    }
    else {
      fVar10 = *(float *)(unaff_RDI + 0x44);
    }
    fVar10 = fVar10 * (float)unaff_RBX[0x20];
    if ((uVar1 >> 3 & 1) != 0) {
      fVar10 = fVar10 * 1.2;
    }
    if (fVar16 == 0.0) {
      fVar16 = 1.0;
    }
    uVar3 = uVar1 | 8;
    if (fVar10 <= fVar16 * (float)unaff_RBX[0x13]) {
      uVar3 = uVar1 & 0xfffffff7;
    }
    param_1 = (uint64_t)uVar3;
    *unaff_RBX = uVar3;
    if ((((system_status_flag != 1) && (system_status_flag != 4)) || (*(int *)(unaff_RDI + 0x178) == 2)) &&
       (((uVar3 >> 4 & 1) == 0 &&
        (*(float *)(unaff_RDI + 0x15c) <= ABS((float)unaff_RBX[5]) &&
         ABS((float)unaff_RBX[5]) != *(float *)(unaff_RDI + 0x15c))))) {
      if (*(char *)(unaff_RDI + 0x50) == '\0') {
        if (((*(uint *)(unaff_RDI + 0xb4) & 8) != 0) ||
           (*(float *)(unaff_RDI + 0xb8) <= 0.0 && *(float *)(unaff_RDI + 0xb8) != 0.0)) {
          fVar8 = 1.0;
LAB_18059700a:
          if ((fVar8 * *(float *)(unaff_RBP + 0x77) < -0.1) &&
             ((*(int *)(unaff_RDI + 0x74) == -1 || (*(int *)(unaff_RDI + 0x7c) == 0x23)))) {
            if (*(char *)(unaff_RDI + 0x50) == '\0') {
              param_1 = (uint64_t)(uVar3 | 0x2000000);
              *unaff_RBX = uVar3 | 0x2000000;
            }
            else {
              param_1 = (uint64_t)(uVar3 | 0x1000000);
              *unaff_RBX = uVar3 | 0x1000000;
            }
          }
        }
      }
      else if (((*(uint *)(unaff_RDI + 0xb4) & 4) != 0) || (0.0 < *(float *)(unaff_RDI + 0xb8)))
      goto LAB_18059700a;
    }
  }
  if (*(char *)(unaff_RDI + 0x9b) != '\0') {
    uVar4 = *(uint64_t *)(unaff_RBX + 5);
    uVar1 = unaff_RBX[0xb];
    *(uint64_t *)(unaff_RBP + 0x77) = *(uint64_t *)(unaff_RDI + 0x118);
    fVar8 = *(float *)(unaff_RBP + 0x77);
    *(uint64_t *)(unaff_RBP + 0x77) = uVar4;
    fVar8 = *(float *)(unaff_RBP + 0x7b) * *(float *)(unaff_RBP + 0x7b) + fVar8 * fVar8;
    auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
                    // WARNING: Subroutine does not return
    AdvancedSystemController(param_1,uVar1,auVar11._0_8_,fVar8 * auVar11._0_4_ * auVar11._0_4_);
  }
  fVar8 = 1.0 - unaff_XMM11_Da * 3.0;
  unaff_RBX[0x15] = (uint)(fVar8 * (float)unaff_RBX[0x15]);
  unaff_RBX[0x14] = (uint)(fVar8 * (float)unaff_RBX[0x14]);
LAB_180597469:
  puVar5 = (uint64_t *)FUN_180598160(unaff_RBP + 0x77,unaff_RBX[0xd]);
  *(uint64_t *)(unaff_RBX + 0x16) = *puVar5;
  puVar6 = (void *)(unaff_RBP + 0x6f);
  if (unaff_R12B != '\0') {
    puVar6 = &system_data_f0c8;
  }
  FUN_1805989b0(puVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



