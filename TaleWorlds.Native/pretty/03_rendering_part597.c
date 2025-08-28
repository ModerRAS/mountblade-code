#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part597.c - 4 个函数

// 函数: void FUN_180596920(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void FUN_180596920(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint64_t uVar4;
  uint8_t uVar5;
  uint64_t *puVar6;
  uint uVar7;
  void *puVar8;
  uint *unaff_RBX;
  int64_t unaff_RBP;
  char cVar9;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  float fVar18;
  uint64_t uStack0000000000000030;
  
  cVar9 = (char)unaff_RSI;
  if ((in_ZF) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
    *(uint64_t *)(param_4 + 0x30) = unaff_RSI;
    if (*(char *)(param_3 + 0x9a) == cVar9) {
      fVar17 = *(float *)(param_3 + 0xbc);
      if (fVar17 <= unaff_XMM8_Da) {
        fVar17 = 0.0;
        if ((*(byte *)(param_3 + 0xb4) & 1) != 0) {
          *(int32_t *)(param_4 + 0x30) = 0x3f800000;
          fVar17 = unaff_XMM10_Da;
        }
      }
      else {
        *(float *)(param_4 + 0x30) = fVar17;
      }
      if (unaff_XMM8_Da <= *(float *)(param_3 + 0xbc)) {
        if ((*(byte *)(param_3 + 0xb4) & 2) != 0) {
          fVar17 = fVar17 - unaff_XMM10_Da;
          goto LAB_180596a35;
        }
      }
      else {
        fVar17 = *(float *)(param_3 + 0xbc) + fVar17;
LAB_180596a35:
        *(float *)(param_4 + 0x30) = fVar17;
      }
      fVar17 = *(float *)(param_3 + 0xb8);
      if (fVar17 <= unaff_XMM8_Da) {
        fVar17 = 0.0;
        if ((*(byte *)(param_3 + 0xb4) & 4) != 0) {
          *(int32_t *)(param_4 + 0x34) = 0x3f800000;
          fVar17 = unaff_XMM10_Da;
        }
      }
      else {
        *(float *)(param_4 + 0x34) = fVar17;
      }
      if (unaff_XMM8_Da <= *(float *)(param_3 + 0xb8)) {
        if ((*(byte *)(param_3 + 0xb4) & 8) == 0) goto LAB_180596aa5;
        fVar17 = fVar17 - unaff_XMM10_Da;
      }
      else {
        fVar17 = *(float *)(param_3 + 0xb8) + fVar17;
      }
      *(float *)(param_4 + 0x34) = fVar17;
    }
    else if (((*(uint *)(param_3 + 0xb4) & 1) != 0) || (unaff_XMM8_Da < *(float *)(param_3 + 0xbc)))
    {
      if (*(char *)(param_3 + 0x9c) == cVar9) {
        fVar17 = 0.0;
        *(float *)(param_4 + 0x30) = unaff_XMM10_Da;
      }
      else {
        fVar17 = 0.0;
        *(int32_t *)(param_4 + 0x30) = 0;
      }
    }
    else if (((*(uint *)(param_3 + 0xb4) & 2) != 0) || (*(float *)(param_3 + 0xbc) < unaff_XMM8_Da))
    {
      fVar17 = 0.0;
      *(float *)(param_4 + 0x30) = unaff_XMM13_Da;
    }
    else {
      fVar17 = 0.0;
      *(int32_t *)(param_4 + 0x30) = 0;
    }
  }
  else {
    fVar17 = *(float *)(param_4 + 0x34);
  }
LAB_180596aa5:
  FUN_180598160(unaff_RBP + 0x77,fVar17,param_3,param_4,*(int32_t *)(param_4 + 0x2c));
  *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x77);
  uVar5 = (uint8_t)((uint64_t)unaff_RSI >> 8);
  fVar17 = *(float *)(unaff_RBP + 0x73);
  fVar15 = *(float *)(unaff_RBP + 0x6f);
  fVar13 = fVar17 * fVar17 + fVar15 * fVar15;
  fVar13 = fVar13 + (float)(int)CONCAT71(uVar5,fVar13 <= 1.1754944e-38) * 1.1754944e-38;
  auVar12 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar16 = auVar12._0_4_;
  fVar16 = fVar16 * 0.5 * (3.0 - fVar13 * fVar16 * fVar16);
  fVar13 = fVar16 * fVar13;
  *(float *)(unaff_RBP + 0x67) = fVar15 * fVar16;
  if ((float)((uint)fVar13 & unaff_XMM14_Da) < 1e-07) {
    fVar13 = 0.0;
  }
  fVar10 = (float)func_0x000180598bb0(1,*(int8_t *)(unaff_RDI + 0x9b),unaff_RDI + 0xf8,
                                      unaff_RBX[0x1f],*(int32_t *)(unaff_RDI + 200));
  *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBX + 5);
  fVar15 = *(float *)(unaff_RBP + 0x73);
  fVar1 = *(float *)(unaff_RBP + 0x6f);
  fVar18 = fVar15 * fVar15 + fVar1 * fVar1;
  fVar18 = fVar18 + (float)(int)CONCAT71(uVar5,fVar18 <= 1.1754944e-38) * 1.1754944e-38;
  auVar12 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  fVar14 = auVar12._0_4_;
  fVar2 = (float)unaff_RBX[6];
  fVar14 = fVar14 * 0.5 * (3.0 - fVar18 * fVar14 * fVar14);
  if (fVar13 == unaff_XMM8_Da) {
    fVar11 = unaff_XMM11_Da + 1e-06;
    *(float *)(unaff_RBP + 0x6f) = -((float)unaff_RBX[5] / fVar11);
    *(float *)(unaff_RBP + 0x73) = (unaff_XMM13_Da / fVar11) * fVar2;
    *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x6f);
    if (fVar11 * fVar10 < fVar14 * fVar18) {
      fVar18 = -(fVar10 * fVar1 * fVar14);
      fVar11 = -(fVar10 * fVar15 * fVar14);
      goto LAB_180596c90;
    }
  }
  else {
    fVar18 = *(float *)(unaff_RBP + 0x77) * fVar10;
    fVar11 = *(float *)(unaff_RBP + 0x7b) * fVar10;
LAB_180596c90:
    *(float *)(unaff_RBP + 0x6f) = fVar18;
    *(float *)(unaff_RBP + 0x73) = fVar11;
    *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x6f);
  }
  fVar18 = *(float *)(unaff_RDI + 200) * render_system_ui;
  fVar17 = fVar17 * fVar16 * fVar2 + (float)unaff_RBX[5] * *(float *)(unaff_RBP + 0x67);
  if (fVar17 <= unaff_XMM8_Da) {
    fVar17 = unaff_XMM8_Da;
  }
  fVar16 = (render_system_ui * (float)unaff_RBX[0x1f]) / fVar18 - fVar10;
  if (fVar17 < (unaff_XMM10_Da - render_system_ui) * (float)unaff_RBX[0x1f]) {
    fVar17 = ((fVar16 + fVar16) / (*(float *)(unaff_RDI + 200) - fVar18)) * fVar17 + fVar10 * fVar10
    ;
    if (fVar17 <= unaff_XMM8_Da) {
      fVar17 = unaff_XMM8_Da;
    }
    fVar16 = SQRT(fVar17) - fVar10;
  }
  *(float *)(unaff_RBP + 0x6f) = *(float *)(unaff_RBP + 0x6f) + fVar1 * fVar14 * fVar16;
  *(float *)(unaff_RBP + 0x73) = *(float *)(unaff_RBP + 0x73) + fVar15 * fVar14 * fVar16;
  FUN_180595ba0();
  FUN_180598c50(unaff_RBP + 0x6f);
  fVar17 = *(float *)(unaff_RBP + 0x7f);
  uStack0000000000000030 =
       CONCAT44(*(float *)(unaff_RBP + 0x73) * unaff_XMM11_Da,
                *(float *)(unaff_RBP + 0x6f) * unaff_XMM11_Da);
  *(uint64_t *)(unaff_RBX + 0x10) = uStack0000000000000030;
  if ((fVar17 != unaff_XMM8_Da) || (*(float *)(unaff_RBP + 0x83) != unaff_XMM8_Da)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(unaff_RBX[0xb] ^ 0x80000000);
  }
  fVar17 = (float)unaff_RBX[5] + (float)unaff_RBX[0x10];
  fVar15 = (float)unaff_RBX[0x11] + (float)unaff_RBX[6];
  uStack0000000000000030 = CONCAT44(fVar15,fVar17);
  if (*(char *)(unaff_RDI + 0x9a) == cVar9) {
    fVar16 = 0.01;
  }
  else {
    fVar16 = 1e-08;
  }
  uVar3 = *unaff_RBX;
  if (fVar15 * fVar15 + fVar17 * fVar17 < fVar16 * unaff_XMM11_Da) {
    uStack0000000000000030 = 0;
  }
  *(uint64_t *)(unaff_RBX + 5) = uStack0000000000000030;
  if ((uVar3 >> 4 & 1) == 0) {
    fVar17 = *(float *)(unaff_RDI + 0x48);
  }
  else {
    fVar17 = *(float *)(unaff_RDI + 0x44);
  }
  fVar17 = fVar17 * (float)unaff_RBX[0x20];
  if ((uVar3 >> 3 & 1) != 0) {
    fVar17 = fVar17 * 1.2;
  }
  if (fVar13 == unaff_XMM8_Da) {
    fVar13 = unaff_XMM10_Da;
  }
  uVar7 = uVar3 | 8;
  if (fVar17 <= fVar13 * (float)unaff_RBX[0x13]) {
    uVar7 = uVar3 & 0xfffffff7;
  }
  *unaff_RBX = uVar7;
  if ((((system_status_flag != 1) && (system_status_flag != 4)) || (*(int *)(unaff_RDI + 0x178) == 2)) &&
     (((uVar7 >> 4 & 1) == 0 &&
      (*(float *)(unaff_RDI + 0x15c) <= ABS((float)unaff_RBX[5]) &&
       ABS((float)unaff_RBX[5]) != *(float *)(unaff_RDI + 0x15c))))) {
    if (*(char *)(unaff_RDI + 0x50) == '\0') {
      unaff_XMM13_Da = unaff_XMM10_Da;
      if (((*(uint *)(unaff_RDI + 0xb4) & 8) == 0) &&
         (unaff_XMM8_Da < *(float *)(unaff_RDI + 0xb8) ||
          unaff_XMM8_Da == *(float *)(unaff_RDI + 0xb8))) goto LAB_180597055;
    }
    else if (((*(uint *)(unaff_RDI + 0xb4) & 4) == 0) &&
            (*(float *)(unaff_RDI + 0xb8) <= unaff_XMM8_Da)) goto LAB_180597055;
    if ((unaff_XMM13_Da * *(float *)(unaff_RBP + 0x77) < -0.1) &&
       ((*(int *)(unaff_RDI + 0x74) == -1 || (*(int *)(unaff_RDI + 0x7c) == 0x23)))) {
      if (*(char *)(unaff_RDI + 0x50) == '\0') {
        uVar7 = uVar7 | 0x2000000;
        *unaff_RBX = uVar7;
      }
      else {
        uVar7 = uVar7 | 0x1000000;
        *unaff_RBX = uVar7;
      }
    }
  }
LAB_180597055:
  if (*(char *)(unaff_RDI + 0x9b) == cVar9) {
    fVar17 = unaff_XMM10_Da - unaff_XMM11_Da * 3.0;
    unaff_RBX[0x15] = (uint)(fVar17 * (float)unaff_RBX[0x15]);
    unaff_RBX[0x14] = (uint)(fVar17 * (float)unaff_RBX[0x14]);
    puVar6 = (uint64_t *)FUN_180598160(unaff_RBP + 0x77,unaff_RBX[0xd]);
    *(uint64_t *)(unaff_RBX + 0x16) = *puVar6;
    puVar8 = (void *)(unaff_RBP + 0x6f);
    if (unaff_R12B != '\0') {
      puVar8 = &system_data_f0c8;
    }
    FUN_1805989b0(puVar8);
    return;
  }
  uVar4 = *(uint64_t *)(unaff_RBX + 5);
  uVar3 = unaff_RBX[0xb];
  *(uint64_t *)(unaff_RBP + 0x77) = *(uint64_t *)(unaff_RDI + 0x118);
  fVar17 = *(float *)(unaff_RBP + 0x77);
  *(uint64_t *)(unaff_RBP + 0x77) = uVar4;
  fVar17 = *(float *)(unaff_RBP + 0x7b) * *(float *)(unaff_RBP + 0x7b) + fVar17 * fVar17;
  auVar12 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar7,uVar3,auVar12._0_8_,fVar17 * auVar12._0_4_ * auVar12._0_4_);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180596928(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
void FUN_180596928(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint64_t uVar4;
  uint8_t uVar5;
  uint64_t *puVar6;
  uint uVar7;
  void *puVar8;
  uint *unaff_RBX;
  int64_t unaff_RBP;
  char cVar9;
  uint64_t unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R12B;
  bool in_ZF;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  float fVar18;
  uint64_t uStack0000000000000030;
  
  cVar9 = (char)unaff_RSI;
  if ((in_ZF) || ((system_status_flag != 1 && (system_status_flag != 4)))) {
    *(uint64_t *)(param_4 + 0x30) = unaff_RSI;
    if (*(char *)(param_3 + 0x9a) == cVar9) {
      fVar17 = *(float *)(param_3 + 0xbc);
      if (fVar17 <= unaff_XMM8_Da) {
        fVar17 = 0.0;
        if ((*(byte *)(param_3 + 0xb4) & 1) != 0) {
          *(int32_t *)(param_4 + 0x30) = 0x3f800000;
          fVar17 = unaff_XMM10_Da;
        }
      }
      else {
        *(float *)(param_4 + 0x30) = fVar17;
      }
      if (unaff_XMM8_Da <= *(float *)(param_3 + 0xbc)) {
        if ((*(byte *)(param_3 + 0xb4) & 2) != 0) {
          fVar17 = fVar17 - unaff_XMM10_Da;
          goto LAB_180596a35;
        }
      }
      else {
        fVar17 = *(float *)(param_3 + 0xbc) + fVar17;
LAB_180596a35:
        *(float *)(param_4 + 0x30) = fVar17;
      }
      fVar17 = *(float *)(param_3 + 0xb8);
      if (fVar17 <= unaff_XMM8_Da) {
        fVar17 = 0.0;
        if ((*(byte *)(param_3 + 0xb4) & 4) != 0) {
          *(int32_t *)(param_4 + 0x34) = 0x3f800000;
          fVar17 = unaff_XMM10_Da;
        }
      }
      else {
        *(float *)(param_4 + 0x34) = fVar17;
      }
      if (unaff_XMM8_Da <= *(float *)(param_3 + 0xb8)) {
        if ((*(byte *)(param_3 + 0xb4) & 8) == 0) goto LAB_180596aa5;
        fVar17 = fVar17 - unaff_XMM10_Da;
      }
      else {
        fVar17 = *(float *)(param_3 + 0xb8) + fVar17;
      }
      *(float *)(param_4 + 0x34) = fVar17;
    }
    else if (((*(uint *)(param_3 + 0xb4) & 1) != 0) || (unaff_XMM8_Da < *(float *)(param_3 + 0xbc)))
    {
      if (*(char *)(param_3 + 0x9c) == cVar9) {
        fVar17 = 0.0;
        *(float *)(param_4 + 0x30) = unaff_XMM10_Da;
      }
      else {
        fVar17 = 0.0;
        *(int32_t *)(param_4 + 0x30) = 0;
      }
    }
    else if (((*(uint *)(param_3 + 0xb4) & 2) != 0) || (*(float *)(param_3 + 0xbc) < unaff_XMM8_Da))
    {
      fVar17 = 0.0;
      *(float *)(param_4 + 0x30) = unaff_XMM13_Da;
    }
    else {
      fVar17 = 0.0;
      *(int32_t *)(param_4 + 0x30) = 0;
    }
  }
  else {
    fVar17 = *(float *)(param_4 + 0x34);
  }
LAB_180596aa5:
  FUN_180598160(unaff_RBP + 0x77,fVar17,param_3,param_4,*(int32_t *)(param_4 + 0x2c));
  *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x77);
  uVar5 = (uint8_t)((uint64_t)unaff_RSI >> 8);
  fVar17 = *(float *)(unaff_RBP + 0x73);
  fVar15 = *(float *)(unaff_RBP + 0x6f);
  fVar13 = fVar17 * fVar17 + fVar15 * fVar15;
  fVar13 = fVar13 + (float)(int)CONCAT71(uVar5,fVar13 <= 1.1754944e-38) * 1.1754944e-38;
  auVar12 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar16 = auVar12._0_4_;
  fVar16 = fVar16 * 0.5 * (3.0 - fVar13 * fVar16 * fVar16);
  fVar13 = fVar16 * fVar13;
  *(float *)(unaff_RBP + 0x67) = fVar15 * fVar16;
  if ((float)((uint)fVar13 & unaff_XMM14_Da) < 1e-07) {
    fVar13 = 0.0;
  }
  fVar10 = (float)func_0x000180598bb0(1,*(int8_t *)(unaff_RDI + 0x9b),unaff_RDI + 0xf8,
                                      unaff_RBX[0x1f],*(int32_t *)(unaff_RDI + 200));
  *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBX + 5);
  fVar15 = *(float *)(unaff_RBP + 0x73);
  fVar1 = *(float *)(unaff_RBP + 0x6f);
  fVar18 = fVar15 * fVar15 + fVar1 * fVar1;
  fVar18 = fVar18 + (float)(int)CONCAT71(uVar5,fVar18 <= 1.1754944e-38) * 1.1754944e-38;
  auVar12 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  fVar14 = auVar12._0_4_;
  fVar2 = (float)unaff_RBX[6];
  fVar14 = fVar14 * 0.5 * (3.0 - fVar18 * fVar14 * fVar14);
  if (fVar13 == unaff_XMM8_Da) {
    fVar11 = unaff_XMM11_Da + 1e-06;
    *(float *)(unaff_RBP + 0x6f) = -((float)unaff_RBX[5] / fVar11);
    *(float *)(unaff_RBP + 0x73) = (unaff_XMM13_Da / fVar11) * fVar2;
    *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x6f);
    if (fVar11 * fVar10 < fVar14 * fVar18) {
      fVar18 = -(fVar10 * fVar1 * fVar14);
      fVar11 = -(fVar10 * fVar15 * fVar14);
      goto LAB_180596c90;
    }
  }
  else {
    fVar18 = *(float *)(unaff_RBP + 0x77) * fVar10;
    fVar11 = *(float *)(unaff_RBP + 0x7b) * fVar10;
LAB_180596c90:
    *(float *)(unaff_RBP + 0x6f) = fVar18;
    *(float *)(unaff_RBP + 0x73) = fVar11;
    *(uint64_t *)(unaff_RBP + 0x6f) = *(uint64_t *)(unaff_RBP + 0x6f);
  }
  fVar18 = *(float *)(unaff_RDI + 200) * render_system_ui;
  fVar17 = fVar17 * fVar16 * fVar2 + (float)unaff_RBX[5] * *(float *)(unaff_RBP + 0x67);
  if (fVar17 <= unaff_XMM8_Da) {
    fVar17 = unaff_XMM8_Da;
  }
  fVar16 = (render_system_ui * (float)unaff_RBX[0x1f]) / fVar18 - fVar10;
  if (fVar17 < (unaff_XMM10_Da - render_system_ui) * (float)unaff_RBX[0x1f]) {
    fVar17 = ((fVar16 + fVar16) / (*(float *)(unaff_RDI + 200) - fVar18)) * fVar17 + fVar10 * fVar10
    ;
    if (fVar17 <= unaff_XMM8_Da) {
      fVar17 = unaff_XMM8_Da;
    }
    fVar16 = SQRT(fVar17) - fVar10;
  }
  *(float *)(unaff_RBP + 0x6f) = *(float *)(unaff_RBP + 0x6f) + fVar1 * fVar14 * fVar16;
  *(float *)(unaff_RBP + 0x73) = *(float *)(unaff_RBP + 0x73) + fVar15 * fVar14 * fVar16;
  FUN_180595ba0();
  FUN_180598c50(unaff_RBP + 0x6f);
  fVar17 = *(float *)(unaff_RBP + 0x7f);
  uStack0000000000000030 =
       CONCAT44(*(float *)(unaff_RBP + 0x73) * unaff_XMM11_Da,
                *(float *)(unaff_RBP + 0x6f) * unaff_XMM11_Da);
  *(uint64_t *)(unaff_RBX + 0x10) = uStack0000000000000030;
  if ((fVar17 != unaff_XMM8_Da) || (*(float *)(unaff_RBP + 0x83) != unaff_XMM8_Da)) {
                    // WARNING: Subroutine does not return
    FUN_1808fd400(unaff_RBX[0xb] ^ 0x80000000);
  }
  fVar17 = (float)unaff_RBX[5] + (float)unaff_RBX[0x10];
  fVar15 = (float)unaff_RBX[0x11] + (float)unaff_RBX[6];
  uStack0000000000000030 = CONCAT44(fVar15,fVar17);
  if (*(char *)(unaff_RDI + 0x9a) == cVar9) {
    fVar16 = 0.01;
  }
  else {
    fVar16 = 1e-08;
  }
  uVar3 = *unaff_RBX;
  if (fVar15 * fVar15 + fVar17 * fVar17 < fVar16 * unaff_XMM11_Da) {
    uStack0000000000000030 = 0;
  }
  *(uint64_t *)(unaff_RBX + 5) = uStack0000000000000030;
  if ((uVar3 >> 4 & 1) == 0) {
    fVar17 = *(float *)(unaff_RDI + 0x48);
  }
  else {
    fVar17 = *(float *)(unaff_RDI + 0x44);
  }
  fVar17 = fVar17 * (float)unaff_RBX[0x20];
  if ((uVar3 >> 3 & 1) != 0) {
    fVar17 = fVar17 * 1.2;
  }
  if (fVar13 == unaff_XMM8_Da) {
    fVar13 = unaff_XMM10_Da;
  }
  uVar7 = uVar3 | 8;
  if (fVar17 <= fVar13 * (float)unaff_RBX[0x13]) {
    uVar7 = uVar3 & 0xfffffff7;
  }
  *unaff_RBX = uVar7;
  if ((((system_status_flag != 1) && (system_status_flag != 4)) || (*(int *)(unaff_RDI + 0x178) == 2)) &&
     (((uVar7 >> 4 & 1) == 0 &&
      (*(float *)(unaff_RDI + 0x15c) <= ABS((float)unaff_RBX[5]) &&
       ABS((float)unaff_RBX[5]) != *(float *)(unaff_RDI + 0x15c))))) {
    if (*(char *)(unaff_RDI + 0x50) == '\0') {
      unaff_XMM13_Da = unaff_XMM10_Da;
      if (((*(uint *)(unaff_RDI + 0xb4) & 8) == 0) &&
         (unaff_XMM8_Da < *(float *)(unaff_RDI + 0xb8) ||
          unaff_XMM8_Da == *(float *)(unaff_RDI + 0xb8))) goto LAB_180597055;
    }
    else if (((*(uint *)(unaff_RDI + 0xb4) & 4) == 0) &&
            (*(float *)(unaff_RDI + 0xb8) <= unaff_XMM8_Da)) goto LAB_180597055;
    if ((unaff_XMM13_Da * *(float *)(unaff_RBP + 0x77) < -0.1) &&
       ((*(int *)(unaff_RDI + 0x74) == -1 || (*(int *)(unaff_RDI + 0x7c) == 0x23)))) {
      if (*(char *)(unaff_RDI + 0x50) == '\0') {
        uVar7 = uVar7 | 0x2000000;
        *unaff_RBX = uVar7;
      }
      else {
        uVar7 = uVar7 | 0x1000000;
        *unaff_RBX = uVar7;
      }
    }
  }
LAB_180597055:
  if (*(char *)(unaff_RDI + 0x9b) == cVar9) {
    fVar17 = unaff_XMM10_Da - unaff_XMM11_Da * 3.0;
    unaff_RBX[0x15] = (uint)(fVar17 * (float)unaff_RBX[0x15]);
    unaff_RBX[0x14] = (uint)(fVar17 * (float)unaff_RBX[0x14]);
    puVar6 = (uint64_t *)FUN_180598160(unaff_RBP + 0x77,unaff_RBX[0xd]);
    *(uint64_t *)(unaff_RBX + 0x16) = *puVar6;
    puVar8 = (void *)(unaff_RBP + 0x6f);
    if (unaff_R12B != '\0') {
      puVar8 = &system_data_f0c8;
    }
    FUN_1805989b0(puVar8);
    return;
  }
  uVar4 = *(uint64_t *)(unaff_RBX + 5);
  uVar3 = unaff_RBX[0xb];
  *(uint64_t *)(unaff_RBP + 0x77) = *(uint64_t *)(unaff_RDI + 0x118);
  fVar17 = *(float *)(unaff_RBP + 0x77);
  *(uint64_t *)(unaff_RBP + 0x77) = uVar4;
  fVar17 = *(float *)(unaff_RBP + 0x7b) * *(float *)(unaff_RBP + 0x7b) + fVar17 * fVar17;
  auVar12 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar7,uVar3,auVar12._0_8_,fVar17 * auVar12._0_4_ * auVar12._0_4_);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180596dd2(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void FUN_180596dd2(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint *unaff_RBX;
  int64_t unaff_RBP;
  char unaff_SIL;
  int64_t unaff_RDI;
  char unaff_R12B;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM13_Da;
  uint64_t uStack0000000000000030;
  
  if (*(float *)(unaff_RBP + 0x83) != unaff_XMM8_Da) {
    uStack0000000000000030 = *(uint64_t *)(unaff_RBP + 0x7f);
                    // WARNING: Subroutine does not return
    FUN_1808fd400(unaff_RBX[0xb] ^ 0x80000000);
  }
  fVar6 = (float)unaff_RBX[5] + (float)unaff_RBX[0x10];
  fVar9 = (float)unaff_RBX[0x11] + (float)unaff_RBX[6];
  uStack0000000000000030 = CONCAT44(fVar9,fVar6);
  if (*(char *)(unaff_RDI + 0x9a) == unaff_SIL) {
    fVar7 = 0.01;
  }
  else {
    fVar7 = 1e-08;
  }
  uVar1 = *unaff_RBX;
  uVar3 = uStack0000000000000030;
  if (fVar9 * fVar9 + fVar6 * fVar6 < fVar7 * unaff_XMM11_Da) {
    uVar3 = 0;
  }
  *(uint64_t *)(unaff_RBX + 5) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    fVar6 = *(float *)(unaff_RDI + 0x48);
  }
  else {
    fVar6 = *(float *)(unaff_RDI + 0x44);
  }
  fVar6 = fVar6 * (float)unaff_RBX[0x20];
  if ((uVar1 >> 3 & 1) != 0) {
    fVar6 = fVar6 * 1.2;
  }
  if (unaff_XMM6_Da == unaff_XMM8_Da) {
    unaff_XMM6_Da = unaff_XMM10_Da;
  }
  uVar2 = uVar1 | 8;
  if (fVar6 <= unaff_XMM6_Da * (float)unaff_RBX[0x13]) {
    uVar2 = uVar1 & 0xfffffff7;
  }
  *unaff_RBX = uVar2;
  if ((((system_status_flag != 1) && (system_status_flag != 4)) || (*(int *)(unaff_RDI + 0x178) == 2)) &&
     (((uVar2 >> 4 & 1) == 0 &&
      (*(float *)(unaff_RDI + 0x15c) <= ABS((float)unaff_RBX[5]) &&
       ABS((float)unaff_RBX[5]) != *(float *)(unaff_RDI + 0x15c))))) {
    if (*(char *)(unaff_RDI + 0x50) == '\0') {
      unaff_XMM13_Da = unaff_XMM10_Da;
      if (((*(uint *)(unaff_RDI + 0xb4) & 8) == 0) &&
         (unaff_XMM8_Da < *(float *)(unaff_RDI + 0xb8) ||
          unaff_XMM8_Da == *(float *)(unaff_RDI + 0xb8))) goto LAB_180597055;
    }
    else if (((*(uint *)(unaff_RDI + 0xb4) & 4) == 0) &&
            (*(float *)(unaff_RDI + 0xb8) <= unaff_XMM8_Da)) goto LAB_180597055;
    if ((unaff_XMM13_Da * *(float *)(unaff_RBP + 0x77) < -0.1) &&
       ((*(int *)(unaff_RDI + 0x74) == -1 || (*(int *)(unaff_RDI + 0x7c) == 0x23)))) {
      if (*(char *)(unaff_RDI + 0x50) == '\0') {
        *unaff_RBX = uVar2 | 0x2000000;
      }
      else {
        *unaff_RBX = uVar2 | 0x1000000;
      }
    }
  }
LAB_180597055:
  if (*(char *)(unaff_RDI + 0x9b) == unaff_SIL) {
    fVar6 = unaff_XMM10_Da - unaff_XMM11_Da * 3.0;
    unaff_RBX[0x15] = (uint)(fVar6 * (float)unaff_RBX[0x15]);
    unaff_RBX[0x14] = (uint)(fVar6 * (float)unaff_RBX[0x14]);
    puVar4 = (uint64_t *)
             FUN_180598160(unaff_RBP + 0x77,unaff_RBX[0xd],param_3,param_4,unaff_RBX[0xb]);
    *(uint64_t *)(unaff_RBX + 0x16) = *puVar4;
    puVar5 = (void *)(unaff_RBP + 0x6f);
    if (unaff_R12B != '\0') {
      puVar5 = &system_data_f0c8;
    }
    FUN_1805989b0(puVar5);
    return;
  }
  uStack0000000000000030 = *(uint64_t *)(unaff_RDI + 0x118);
  uVar3 = *(uint64_t *)(unaff_RBX + 5);
  uVar1 = unaff_RBX[0xb];
  *(uint64_t *)(unaff_RBP + 0x77) = uStack0000000000000030;
  fVar6 = *(float *)(unaff_RBP + 0x77);
  *(uint64_t *)(unaff_RBP + 0x77) = uVar3;
  fVar6 = *(float *)(unaff_RBP + 0x7b) * *(float *)(unaff_RBP + 0x7b) + fVar6 * fVar6;
  auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
                    // WARNING: Subroutine does not return
  FUN_1808fd400(uVar1,uVar1,auVar8._0_8_,fVar6 * auVar8._0_4_ * auVar8._0_4_);
}





// 函数: void FUN_18059705d(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void FUN_18059705d(uint64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  void *puVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  char unaff_SIL;
  int64_t unaff_RDI;
  char unaff_R12B;
  float fVar5;
  int8_t auVar6 [16];
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  
  if (*(char *)(unaff_RDI + 0x9b) != unaff_SIL) {
    uVar2 = *(uint64_t *)(unaff_RBX + 0x14);
    uVar1 = *(int32_t *)(unaff_RBX + 0x2c);
    *(uint64_t *)(unaff_RBP + 0x77) = *(uint64_t *)(unaff_RDI + 0x118);
    fVar5 = *(float *)(unaff_RBP + 0x77);
    *(uint64_t *)(unaff_RBP + 0x77) = uVar2;
    fVar5 = *(float *)(unaff_RBP + 0x7b) * *(float *)(unaff_RBP + 0x7b) + fVar5 * fVar5;
    auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
                    // WARNING: Subroutine does not return
    FUN_1808fd400(uVar1,uVar1,auVar6._0_8_,fVar5 * auVar6._0_4_ * auVar6._0_4_);
  }
  fVar5 = unaff_XMM10_Da - unaff_XMM11_Da * 3.0;
  *(float *)(unaff_RBX + 0x54) = fVar5 * *(float *)(unaff_RBX + 0x54);
  *(float *)(unaff_RBX + 0x50) = fVar5 * *(float *)(unaff_RBX + 0x50);
  puVar3 = (uint64_t *)
           FUN_180598160(unaff_RBP + 0x77,*(int32_t *)(unaff_RBX + 0x34),param_3,param_4,
                         *(int32_t *)(unaff_RBX + 0x2c));
  *(uint64_t *)(unaff_RBX + 0x58) = *puVar3;
  puVar4 = (void *)(unaff_RBP + 0x6f);
  if (unaff_R12B != '\0') {
    puVar4 = &system_data_f0c8;
  }
  FUN_1805989b0(puVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



