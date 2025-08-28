/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part594.c - 9 个函数

// 函数: void FUN_180593ce0(void)
void FUN_180593ce0(void)

{
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}



char FUN_1805950c0(int64_t param_1,int64_t param_2,float *param_3,int64_t param_4,
                  int64_t param_5)

{
  float *pfVar1;
  int64_t lVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int8_t auVar10 [16];
  float fVar11;
  float fStack_a4;
  
  uVar7 = *(uint *)(param_4 + 0x18) & 0x40;
  if ((((uVar7 != 0) && (0.2 < *(float *)(param_2 + 0x34))) &&
      (lVar2 = *(int64_t *)(param_4 + 0x10),
      *(float *)(lVar2 + 0x88) <= 0.0 && *(float *)(lVar2 + 0x88) != 0.0)) &&
     (((*(uint *)(param_5 + 0x24) & 0x100) != 0 && ((*(byte *)(param_1 + 0x40) & 3) == 1)))) {
    fVar11 = *(float *)(lVar2 + 0x80);
    fStack_a4 = *(float *)(lVar2 + 0x84);
    fVar3 = *(float *)(lVar2 + 0x88);
    fVar8 = fVar11 * fVar11 + fStack_a4 * fStack_a4 + fVar3 * fVar3;
    if ((fVar8 <= 0.98010004) || (1.0201 <= fVar8)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      fVar8 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
      fVar11 = fVar11 * fVar8;
      fStack_a4 = fStack_a4 * fVar8;
    }
    fVar8 = fStack_a4 * fStack_a4 + fVar11 * fVar11;
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar8 = fVar8 * auVar10._0_4_ * auVar10._0_4_;
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(param_5 + 0x4c),3.0 - fVar8,auVar10._0_8_,fVar8,fVar11,fVar3);
  }
  if (((param_3[5] + param_3[1]) * 0.5 - *(float *)(param_2 + 0x20)) * *(float *)(param_2 + 0x30) +
      ((*param_3 + param_3[4]) * 0.5 - *(float *)(param_2 + 0x1c)) * *(float *)(param_2 + 0x2c) +
      ((param_3[6] + param_3[2]) * 0.5 - *(float *)(param_2 + 0x24)) * *(float *)(param_2 + 0x34) <
      0.0) {
    bVar5 = *(byte *)(param_1 + 0x40);
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x40);
    if ((((bVar5 & 3) == 0) || ((bVar5 & 4) != 0)) ||
       (*(float *)(param_2 + 0x34) <= 1.0 && *(float *)(param_2 + 0x34) != 1.0)) {
      cVar6 = '\x01';
      goto LAB_180595392;
    }
  }
  cVar6 = '\0';
LAB_180595392:
  if ((bVar5 & 3) == 0) {
    if ((((((*(float *)(param_1 + 0x154) <= 0.0) ||
           (fVar11 = *(float *)(param_1 + 0x14) + 0.6,
           fVar11 < *(float *)(param_2 + 0x24) || fVar11 == *(float *)(param_2 + 0x24))) ||
          (*(float *)(param_2 + 0x34) <= 0.6)) ||
         ((fVar11 = *(float *)(param_1 + 0x2c), fVar11 < -4.0 || (0.001 <= fVar11)))) ||
        ((0.0 < fVar11 || ((fVar11 <= -4.0 || (*(int *)(param_5 + 0x194) != 1)))))) ||
       (((*(uint *)(param_5 + 0x24) & 0x100) == 0 &&
        (((uVar7 != 0 &&
          (pfVar1 = (float *)(*(int64_t *)(param_4 + 0x10) + 0x88),
          *pfVar1 <= 0.0 && *pfVar1 != 0.0)) && (0.2 < *(float *)(param_2 + 0x34))))))) {
      if ((cVar6 == '\0') ||
         ((*(float *)(param_1 + 0x14) + 0.6 < *(float *)(param_2 + 0x24) &&
          (0.95 < *(float *)(param_2 + 0x34))))) {
        cVar6 = '\0';
      }
      else {
        cVar6 = '\x01';
      }
    }
    else {
      func_0x0001805998d0(param_1,(byte)(*(uint *)(param_4 + 0x18) >> 6) & 1);
    }
  }
  return cVar6;
}



char FUN_180595103(byte param_1,int64_t param_2,float *param_3,int64_t param_4)

{
  float *pfVar1;
  int64_t lVar2;
  byte bVar3;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  char cVar4;
  int64_t in_R11;
  uint unaff_R12D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float unaff_XMM10_Da;
  float fStackX_20;
  float fStackX_24;
  int32_t uStack000000000000002c;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  if (((((unaff_R12D & 0x40) != 0) && (unaff_XMM10_Da < *(float *)(param_2 + 0x34))) &&
      (lVar2 = *(int64_t *)(param_4 + 0x10),
      *(float *)(lVar2 + 0x88) <= 0.0 && *(float *)(lVar2 + 0x88) != 0.0)) &&
     (((*(uint *)(unaff_R14 + 0x24) & 0x100) != 0 && ((*(byte *)(unaff_RDI + 0x40) & 3) == param_1))
     )) {
    *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
    *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
    *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
    *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
    fStackX_20 = *(float *)(lVar2 + 0x80);
    fStackX_24 = *(float *)(lVar2 + 0x84);
    fVar5 = *(float *)(lVar2 + 0x88);
    uStack000000000000002c = *(int32_t *)(lVar2 + 0x8c);
    *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
    *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
    *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
    *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
    *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
    *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
    *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
    *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
    fVar5 = fStackX_20 * fStackX_20 + fStackX_24 * fStackX_24 + fVar5 * fVar5;
    if ((fVar5 <= 0.98010004) || (1.0201 <= fVar5)) {
      param_1 = 0;
    }
    if (param_1 == 0) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fStackX_20 = fStackX_20 * fVar5;
      fStackX_24 = fStackX_24 * fVar5;
    }
    fVar5 = fStackX_24 * fStackX_24 + fStackX_20 * fStackX_20;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
                    // WARNING: Subroutine does not return
    AdvancedSystemController(*(int32_t *)(unaff_R14 + 0x4c),3.0 - fVar5 * auVar7._0_4_ * auVar7._0_4_);
  }
  if ((param_1 == 0) ||
     (((param_3[5] + param_3[1]) * 0.5 - *(float *)(unaff_RBX + 0x20)) *
      *(float *)(unaff_RBX + 0x30) +
      ((*param_3 + param_3[4]) * 0.5 - *(float *)(unaff_RBX + 0x1c)) * *(float *)(unaff_RBX + 0x2c)
      + ((param_3[6] + param_3[2]) * 0.5 - *(float *)(unaff_RBX + 0x24)) *
        *(float *)(unaff_RBX + 0x34) < 0.0)) {
    bVar3 = *(byte *)(unaff_RDI + 0x40);
  }
  else {
    bVar3 = *(byte *)(unaff_RDI + 0x40);
    if ((((bVar3 & 3) == 0) || ((bVar3 & 4) != 0)) ||
       (*(float *)(unaff_RBX + 0x34) <= 1.0 && *(float *)(unaff_RBX + 0x34) != 1.0)) {
      cVar4 = '\x01';
      goto LAB_180595392;
    }
  }
  cVar4 = '\0';
LAB_180595392:
  if ((bVar3 & 3) == 0) {
    if (((((*(float *)(unaff_RDI + 0x154) <= 0.0) ||
          (fVar5 = *(float *)(unaff_RDI + 0x14) + 0.6,
          fVar5 < *(float *)(unaff_RBX + 0x24) || fVar5 == *(float *)(unaff_RBX + 0x24))) ||
         ((*(float *)(unaff_RBX + 0x34) <= 0.6 ||
          ((fVar5 = *(float *)(unaff_RDI + 0x2c), fVar5 < -4.0 || (0.001 <= fVar5)))))) ||
        (0.0 < fVar5)) ||
       (((fVar5 <= -4.0 || (*(int *)(unaff_R14 + 0x194) != 1)) ||
        (((*(uint *)(unaff_R14 + 0x24) & 0x100) == 0 &&
         ((((unaff_R12D & 0x40) != 0 &&
           (pfVar1 = (float *)(*(int64_t *)(unaff_R15 + 0x10) + 0x88),
           *pfVar1 <= 0.0 && *pfVar1 != 0.0)) && (unaff_XMM10_Da < *(float *)(unaff_RBX + 0x34))))))
        ))) {
      if ((cVar4 == '\0') ||
         ((*(float *)(unaff_RDI + 0x14) + 0.6 < *(float *)(unaff_RBX + 0x24) &&
          (0.95 < *(float *)(unaff_RBX + 0x34))))) {
        cVar4 = '\0';
      }
      else {
        cVar4 = '\x01';
      }
    }
    else {
      func_0x0001805998d0(fVar5,(byte)(unaff_ESI >> 6) & 1);
    }
  }
  return cVar4;
}





// 函数: void FUN_180595151(char param_1,int64_t param_2)
void FUN_180595151(char param_1,int64_t param_2)

{
  int64_t in_R11;
  int64_t unaff_R14;
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t uStackX_20;
  int32_t uStackX_24;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  uint64_t uStack00000000000000d0;
  
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  uStackX_20 = *(float *)(param_2 + 0x80);
  uStackX_24 = *(float *)(param_2 + 0x84);
  fStack0000000000000028 = *(float *)(param_2 + 0x88);
  uStack000000000000002c = *(int32_t *)(param_2 + 0x8c);
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  fVar1 = uStackX_20 * uStackX_20 + uStackX_24 * uStackX_24 +
          fStack0000000000000028 * fStack0000000000000028;
  if ((fVar1 <= 0.98010004) || (1.0201 <= fVar1)) {
    param_1 = '\0';
  }
  if (param_1 == '\0') {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
    uStackX_20 = uStackX_20 * fVar1;
    uStackX_24 = uStackX_24 * fVar1;
  }
  uStack00000000000000d0 = CONCAT44(uStackX_24,uStackX_20);
  fVar1 = uStackX_24 * uStackX_24 + uStackX_20 * uStackX_20;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(unaff_R14 + 0x4c),3.0 - fVar1 * auVar3._0_4_ * auVar3._0_4_);
}



char FUN_1805952d9(float param_1,float param_2)

{
  float *pfVar1;
  byte bVar2;
  int64_t unaff_RBX;
  float *unaff_RBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  char cVar3;
  int unaff_R12D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar4;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  
  if ((0.8 < param_2 * unaff_XMM11_Da - param_1 * unaff_XMM12_Da) ||
     (((unaff_RBP[5] + unaff_RBP[1]) * 0.5 - *(float *)(unaff_RBX + 0x20)) *
      *(float *)(unaff_RBX + 0x30) +
      ((*unaff_RBP + unaff_RBP[4]) * 0.5 - *(float *)(unaff_RBX + 0x1c)) *
      *(float *)(unaff_RBX + 0x2c) +
      ((unaff_RBP[6] + unaff_RBP[2]) * 0.5 - *(float *)(unaff_RBX + 0x24)) *
      *(float *)(unaff_RBX + 0x34) < unaff_XMM9_Da)) {
    bVar2 = *(byte *)(unaff_RDI + 0x40);
  }
  else {
    bVar2 = *(byte *)(unaff_RDI + 0x40);
    if ((((bVar2 & 3) == 0) || ((bVar2 & 4) != 0)) ||
       (*(float *)(unaff_RBX + 0x34) <= 1.0 && *(float *)(unaff_RBX + 0x34) != 1.0)) {
      cVar3 = '\x01';
      goto LAB_180595392;
    }
  }
  cVar3 = '\0';
LAB_180595392:
  if ((bVar2 & 3) == 0) {
    if (((((*(float *)(unaff_RDI + 0x154) <= unaff_XMM9_Da) ||
          (fVar4 = *(float *)(unaff_RDI + 0x14) + 0.6,
          fVar4 < *(float *)(unaff_RBX + 0x24) || fVar4 == *(float *)(unaff_RBX + 0x24))) ||
         ((*(float *)(unaff_RBX + 0x34) <= 0.6 ||
          ((fVar4 = *(float *)(unaff_RDI + 0x2c), fVar4 < -4.0 || (0.001 <= fVar4)))))) ||
        (unaff_XMM9_Da < fVar4)) ||
       (((fVar4 <= -4.0 || (*(int *)(unaff_R14 + 0x194) != 1)) ||
        (((*(uint *)(unaff_R14 + 0x24) & 0x100) == 0 &&
         (((unaff_R12D != 0 &&
           (pfVar1 = (float *)(*(int64_t *)(unaff_R15 + 0x10) + 0x88),
           *pfVar1 <= unaff_XMM9_Da && unaff_XMM9_Da != *pfVar1)) &&
          (unaff_XMM10_Da < *(float *)(unaff_RBX + 0x34))))))))) {
      if ((cVar3 == '\0') ||
         ((*(float *)(unaff_RDI + 0x14) + 0.6 < *(float *)(unaff_RBX + 0x24) &&
          (0.95 < *(float *)(unaff_RBX + 0x34))))) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      func_0x0001805998d0(fVar4,(byte)(unaff_ESI >> 6) & 1);
    }
  }
  return cVar3;
}



char FUN_180595302(char param_1)

{
  float *pfVar1;
  byte bVar2;
  int64_t unaff_RBX;
  float *unaff_RBP;
  uint unaff_ESI;
  int64_t unaff_RDI;
  char cVar3;
  int unaff_R12D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar4;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  if ((param_1 == '\0') ||
     (((unaff_RBP[5] + unaff_RBP[1]) * 0.5 - *(float *)(unaff_RBX + 0x20)) *
      *(float *)(unaff_RBX + 0x30) +
      ((*unaff_RBP + unaff_RBP[4]) * 0.5 - *(float *)(unaff_RBX + 0x1c)) *
      *(float *)(unaff_RBX + 0x2c) +
      ((unaff_RBP[6] + unaff_RBP[2]) * 0.5 - *(float *)(unaff_RBX + 0x24)) *
      *(float *)(unaff_RBX + 0x34) < unaff_XMM9_Da)) {
    bVar2 = *(byte *)(unaff_RDI + 0x40);
  }
  else {
    bVar2 = *(byte *)(unaff_RDI + 0x40);
    if ((((bVar2 & 3) == 0) || ((bVar2 & 4) != 0)) ||
       (*(float *)(unaff_RBX + 0x34) <= 1.0 && *(float *)(unaff_RBX + 0x34) != 1.0)) {
      cVar3 = '\x01';
      goto LAB_180595392;
    }
  }
  cVar3 = '\0';
LAB_180595392:
  if ((bVar2 & 3) == 0) {
    if (((((*(float *)(unaff_RDI + 0x154) <= unaff_XMM9_Da) ||
          (fVar4 = *(float *)(unaff_RDI + 0x14) + 0.6,
          fVar4 < *(float *)(unaff_RBX + 0x24) || fVar4 == *(float *)(unaff_RBX + 0x24))) ||
         ((*(float *)(unaff_RBX + 0x34) <= 0.6 ||
          ((fVar4 = *(float *)(unaff_RDI + 0x2c), fVar4 < -4.0 || (0.001 <= fVar4)))))) ||
        (unaff_XMM9_Da < fVar4)) ||
       (((fVar4 <= -4.0 || (*(int *)(unaff_R14 + 0x194) != 1)) ||
        (((*(uint *)(unaff_R14 + 0x24) & 0x100) == 0 &&
         (((unaff_R12D != 0 &&
           (pfVar1 = (float *)(*(int64_t *)(unaff_R15 + 0x10) + 0x88),
           *pfVar1 <= unaff_XMM9_Da && unaff_XMM9_Da != *pfVar1)) &&
          (unaff_XMM10_Da < *(float *)(unaff_RBX + 0x34))))))))) {
      if ((cVar3 == '\0') ||
         ((*(float *)(unaff_RDI + 0x14) + 0.6 < *(float *)(unaff_RBX + 0x24) &&
          (0.95 < *(float *)(unaff_RBX + 0x34))))) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      func_0x0001805998d0(fVar4,(byte)(unaff_ESI >> 6) & 1);
    }
  }
  return cVar3;
}



char FUN_18059534f(uint64_t param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  byte bVar2;
  int64_t unaff_RBX;
  uint unaff_ESI;
  int64_t unaff_RDI;
  char cVar3;
  int unaff_R12D;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar4;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  if (param_2 * *(float *)(unaff_RBX + 0x30) + param_3 * *(float *)(unaff_RBX + 0x2c) +
      param_4 * *(float *)(unaff_RBX + 0x34) < unaff_XMM9_Da) {
    bVar2 = *(byte *)(unaff_RDI + 0x40);
  }
  else {
    bVar2 = *(byte *)(unaff_RDI + 0x40);
    if ((((bVar2 & 3) == 0) || ((bVar2 & 4) != 0)) ||
       (*(float *)(unaff_RBX + 0x34) <= 1.0 && *(float *)(unaff_RBX + 0x34) != 1.0)) {
      cVar3 = '\x01';
      goto LAB_180595392;
    }
  }
  cVar3 = '\0';
LAB_180595392:
  if ((bVar2 & 3) == 0) {
    if (((((*(float *)(unaff_RDI + 0x154) <= unaff_XMM9_Da) ||
          (fVar4 = *(float *)(unaff_RDI + 0x14) + 0.6,
          fVar4 < *(float *)(unaff_RBX + 0x24) || fVar4 == *(float *)(unaff_RBX + 0x24))) ||
         ((*(float *)(unaff_RBX + 0x34) <= 0.6 ||
          ((fVar4 = *(float *)(unaff_RDI + 0x2c), fVar4 < -4.0 || (0.001 <= fVar4)))))) ||
        (unaff_XMM9_Da < fVar4)) ||
       (((fVar4 <= -4.0 || (*(int *)(unaff_R14 + 0x194) != 1)) ||
        (((*(uint *)(unaff_R14 + 0x24) & 0x100) == 0 &&
         (((unaff_R12D != 0 &&
           (pfVar1 = (float *)(*(int64_t *)(unaff_R15 + 0x10) + 0x88),
           *pfVar1 <= unaff_XMM9_Da && unaff_XMM9_Da != *pfVar1)) &&
          (unaff_XMM10_Da < *(float *)(unaff_RBX + 0x34))))))))) {
      if ((cVar3 == '\0') ||
         ((*(float *)(unaff_RDI + 0x14) + 0.6 < *(float *)(unaff_RBX + 0x24) &&
          (0.95 < *(float *)(unaff_RBX + 0x34))))) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
    }
    else {
      func_0x0001805998d0(fVar4,(byte)(unaff_ESI >> 6) & 1);
    }
  }
  return cVar3;
}





// 函数: void FUN_180595490(void)
void FUN_180595490(void)

{
  int32_t in_XMM3_Da;
  
                    // WARNING: Subroutine does not return
  AdvancedSystemController(in_XMM3_Da);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180595690(int64_t param_1,float param_2,float param_3,int64_t param_4)
void FUN_180595690(int64_t param_1,float param_2,float param_3,int64_t param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x34) - param_2;
  if (fVar2 <= 3.1415927) {
    if (fVar2 < -3.1415927) {
      fVar2 = fVar2 + 6.2831855;
    }
  }
  else {
    fVar2 = fVar2 + -6.2831855;
  }
  if (1e-08 < ABS(fVar2)) {
    fVar1 = render_system_config;
    if ((*(uint *)(param_4 + 0x24) & 0x800) != 0) {
      fVar1 = render_system_config;
    }
    fVar1 = fVar1 * param_3;
    if (fVar1 < ABS(fVar2)) {
      if (fVar2 < 0.0) {
        fVar1 = -fVar1;
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(fVar2 - fVar1);
    }
    *(float *)(param_1 + 0x34) = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180595790(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180595790(int64_t param_1,int64_t param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fStackX_8;
  float fStackX_c;
  
  fVar5 = *(float *)(*(int64_t *)(param_2 + 0x18) + 0x3ec4);
  fVar7 = 0.0;
  fVar8 = 1.0;
  if ((*(float *)(param_1 + 0x14) < fVar5) &&
     (fVar8 = 1.0 - (fVar5 - *(float *)(param_1 + 0x14)) * 0.75, fVar8 <= 0.3)) {
    fVar8 = 0.3;
  }
  fVar5 = render_system_config;
  if ((*(int *)(param_3 + 0x78) != 0x1a) && (fVar5 = 1.0, *(int *)(param_3 + 0x78) == 0x1b)) {
    fVar5 = render_system_config;
  }
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0x20);
  if (ABS(fVar1) + ABS(fVar2) == 0.0) {
    fVar7 = 1.0;
  }
  else {
    fVar3 = 1.0 / (ABS(fVar1) + ABS(fVar2));
    fVar4 = fVar3 * fVar2;
    fVar3 = fVar3 * fVar1;
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        fVar7 = fVar3 * -0.25;
      }
    }
    else {
      fVar7 = fVar3 * 0.25;
    }
    if (fVar2 < 0.0) {
      fVar4 = fVar4 * -0.2;
    }
    fVar7 = fVar7 + fVar4;
  }
  if ((*(byte *)(param_1 + 0x40) & 3) != 1) {
    fVar8 = fVar8 * *(float *)(param_3 + 0x140) * 1.0;
    *(float *)(param_1 + 0x84) = fVar8;
    *(float *)(param_1 + 0x50) = fVar8 * fVar7;
    fVar5 = fVar8 * fVar7 * fVar5;
    *(float *)(param_1 + 0x54) = fVar5;
    fVar7 = *(float *)(param_3 + 0xe8);
    if (0.0 < fVar7) {
      if (*(char *)(param_3 + 0xec) != '\0') {
        fVar7 = fVar7 * fVar8;
      }
      if (fVar5 <= fVar7) {
        fVar7 = fVar5;
      }
      fVar5 = fVar7;
      *(float *)(param_1 + 0x54) = fVar5;
    }
    if (fVar5 < 1.0) {
      *(int32_t *)(param_1 + 0x54) = 0x3f800000;
      *(int32_t *)(param_1 + 0x50) = 0x3f800000;
      fVar5 = 1.0;
      if (fVar8 < 1.0) {
        *(int32_t *)(param_1 + 0x84) = 0x3f800000;
        fVar8 = 1.0;
      }
    }
    fVar7 = *(float *)(param_3 + 0xe8);
    if (fVar7 <= 0.0) {
      *(float *)(param_1 + 0x8c) = fVar5;
      fVar5 = fVar8;
    }
    else if (*(char *)(param_3 + 0xec) == '\0') {
      if (fVar5 <= fVar7) {
        fVar7 = fVar5;
      }
      *(float *)(param_1 + 0x8c) = fVar7;
      fVar5 = *(float *)(param_3 + 0xe8);
      if (fVar8 <= *(float *)(param_3 + 0xe8)) {
        fVar5 = fVar8;
      }
    }
    else {
      fVar1 = fVar7 * fVar8;
      if (fVar5 <= fVar7 * fVar8) {
        fVar1 = fVar5;
      }
      *(float *)(param_1 + 0x8c) = fVar1;
      fVar5 = fVar8 * *(float *)(param_3 + 0xe8);
    }
    *(float *)(param_1 + 0x90) = fVar5;
    return;
  }
  fStackX_c = (float)((uint64_t)*(uint64_t *)(param_1 + 0x1c) >> 0x20);
  fStackX_8 = (float)*(uint64_t *)(param_1 + 0x1c);
  fVar5 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
  fVar5 = (float)(fVar5 <= 1.1754944e-38) * 1.1754944e-38 + fVar5;
  auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(param_1 + 0x34),3.0 - fVar5 * auVar6._0_4_ * auVar6._0_4_);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805957ac(int64_t param_1,float param_2,int64_t param_3)
void FUN_1805957ac(int64_t param_1,float param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  
  fVar8 = 0.0;
  fVar9 = 1.0;
  if ((param_2 < *(float *)(in_RAX + 0x3ec4)) &&
     (fVar9 = 1.0 - (*(float *)(in_RAX + 0x3ec4) - param_2) * 0.75, fVar9 <= 0.3)) {
    fVar9 = 0.3;
  }
  fVar6 = render_system_config;
  if ((*(int *)(param_3 + 0x78) != 0x1a) && (fVar6 = 1.0, *(int *)(param_3 + 0x78) == 0x1b)) {
    fVar6 = render_system_config;
  }
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0x20);
  if (ABS(fVar1) + ABS(fVar2) == 0.0) {
    fVar8 = 1.0;
  }
  else {
    fVar4 = 1.0 / (ABS(fVar1) + ABS(fVar2));
    fVar5 = fVar4 * fVar2;
    fVar4 = fVar4 * fVar1;
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        fVar8 = fVar4 * -0.25;
      }
    }
    else {
      fVar8 = fVar4 * 0.25;
    }
    if (fVar2 < 0.0) {
      fVar5 = fVar5 * -0.2;
    }
    fVar8 = fVar8 + fVar5;
  }
  if ((*(byte *)(param_1 + 0x40) & 3) != 1) {
    fVar9 = fVar9 * *(float *)(param_3 + 0x140) * 1.0;
    *(float *)(unaff_RBX + 0x84) = fVar9;
    *(float *)(unaff_RBX + 0x50) = fVar9 * fVar8;
    fVar6 = fVar9 * fVar8 * fVar6;
    *(float *)(unaff_RBX + 0x54) = fVar6;
    fVar8 = *(float *)(unaff_RDI + 0xe8);
    if (0.0 < fVar8) {
      if (*(char *)(unaff_RDI + 0xec) != '\0') {
        fVar8 = fVar8 * fVar9;
      }
      if (fVar6 <= fVar8) {
        fVar8 = fVar6;
      }
      fVar6 = fVar8;
      *(float *)(unaff_RBX + 0x54) = fVar6;
    }
    if (fVar6 < 1.0) {
      *(int32_t *)(unaff_RBX + 0x54) = 0x3f800000;
      *(int32_t *)(unaff_RBX + 0x50) = 0x3f800000;
      fVar6 = 1.0;
      if (fVar9 < 1.0) {
        *(int32_t *)(unaff_RBX + 0x84) = 0x3f800000;
        fVar9 = 1.0;
      }
    }
    fVar8 = *(float *)(unaff_RDI + 0xe8);
    if (fVar8 <= 0.0) {
      *(float *)(unaff_RBX + 0x8c) = fVar6;
      fVar8 = fVar9;
    }
    else if (*(char *)(unaff_RDI + 0xec) == '\0') {
      if (fVar6 <= fVar8) {
        fVar8 = fVar6;
      }
      *(float *)(unaff_RBX + 0x8c) = fVar8;
      fVar8 = *(float *)(unaff_RDI + 0xe8);
      if (fVar9 <= *(float *)(unaff_RDI + 0xe8)) {
        fVar8 = fVar9;
      }
    }
    else {
      fVar1 = fVar8 * fVar9;
      if (fVar6 <= fVar8 * fVar9) {
        fVar1 = fVar6;
      }
      *(float *)(unaff_RBX + 0x8c) = fVar1;
      fVar8 = fVar9 * *(float *)(unaff_RDI + 0xe8);
    }
    *(float *)(unaff_RBX + 0x90) = fVar8;
    return;
  }
  uVar3 = *(uint64_t *)(param_1 + 0x1c);
  fStack00000000000000b4 = (float)((uint64_t)uVar3 >> 0x20);
  fStack00000000000000b0 = (float)uVar3;
  fVar8 = fStack00000000000000b4 * fStack00000000000000b4 +
          fStack00000000000000b0 * fStack00000000000000b0;
  fVar8 = (float)(fVar8 <= 1.1754944e-38) * 1.1754944e-38 + fVar8;
  auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  _fStack00000000000000b0 = uVar3;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(param_1 + 0x34),3.0 - fVar8 * auVar7._0_4_ * auVar7._0_4_);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805957d0(float param_1,float param_2,int64_t param_3)
void FUN_1805957d0(float param_1,float param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t in_RCX;
  int64_t unaff_RBX;
  int64_t unaff_RDI;
  bool in_CF;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auVar7 [16];
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar8;
  float fVar9;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  
  fVar8 = 0.0;
  fVar9 = unaff_XMM9_Da;
  if ((in_CF) && (fVar9 = unaff_XMM9_Da - (param_1 - param_2) * 0.75, fVar9 <= 0.3)) {
    fVar9 = 0.3;
  }
  fVar6 = render_system_config;
  if ((*(int *)(param_3 + 0x78) != 0x1a) &&
     (fVar6 = unaff_XMM9_Da, *(int *)(param_3 + 0x78) == 0x1b)) {
    fVar6 = render_system_config;
  }
  fVar1 = *(float *)(in_RCX + 0x1c);
  fVar2 = *(float *)(in_RCX + 0x20);
  fVar4 = unaff_XMM9_Da;
  if (ABS(fVar1) + ABS(fVar2) != 0.0) {
    fVar4 = unaff_XMM9_Da / (ABS(fVar1) + ABS(fVar2));
    fVar5 = fVar4 * fVar2;
    fVar4 = fVar4 * fVar1;
    if (fVar1 <= 0.0) {
      if (fVar1 < 0.0) {
        fVar8 = fVar4 * -0.25;
      }
    }
    else {
      fVar8 = fVar4 * 0.25;
    }
    if (fVar2 < 0.0) {
      fVar5 = fVar5 * -0.2;
    }
    fVar4 = fVar8 + fVar5;
  }
  if ((*(byte *)(in_RCX + 0x40) & 3) != 1) {
    fVar8 = unaff_XMM8_Da * fVar9 * *(float *)(param_3 + 0x140);
    *(float *)(unaff_RBX + 0x84) = fVar8;
    *(float *)(unaff_RBX + 0x50) = fVar8 * fVar4;
    fVar6 = fVar8 * fVar4 * fVar6;
    *(float *)(unaff_RBX + 0x54) = fVar6;
    fVar9 = *(float *)(unaff_RDI + 0xe8);
    if (0.0 < fVar9) {
      if (*(char *)(unaff_RDI + 0xec) != '\0') {
        fVar9 = fVar9 * fVar8;
      }
      if (fVar6 <= fVar9) {
        fVar9 = fVar6;
      }
      fVar6 = fVar9;
      *(float *)(unaff_RBX + 0x54) = fVar6;
    }
    if (fVar6 < unaff_XMM9_Da) {
      *(int32_t *)(unaff_RBX + 0x54) = 0x3f800000;
      *(int32_t *)(unaff_RBX + 0x50) = 0x3f800000;
      fVar6 = unaff_XMM9_Da;
      if (fVar8 < unaff_XMM9_Da) {
        *(int32_t *)(unaff_RBX + 0x84) = 0x3f800000;
        fVar8 = unaff_XMM9_Da;
      }
    }
    fVar9 = *(float *)(unaff_RDI + 0xe8);
    if (fVar9 <= 0.0) {
      *(float *)(unaff_RBX + 0x8c) = fVar6;
      fVar9 = fVar8;
    }
    else if (*(char *)(unaff_RDI + 0xec) == '\0') {
      if (fVar6 <= fVar9) {
        fVar9 = fVar6;
      }
      *(float *)(unaff_RBX + 0x8c) = fVar9;
      fVar9 = *(float *)(unaff_RDI + 0xe8);
      if (fVar8 <= *(float *)(unaff_RDI + 0xe8)) {
        fVar9 = fVar8;
      }
    }
    else {
      fVar1 = fVar9 * fVar8;
      if (fVar6 <= fVar9 * fVar8) {
        fVar1 = fVar6;
      }
      *(float *)(unaff_RBX + 0x8c) = fVar1;
      fVar9 = fVar8 * *(float *)(unaff_RDI + 0xe8);
    }
    *(float *)(unaff_RBX + 0x90) = fVar9;
    return;
  }
  uVar3 = *(uint64_t *)(in_RCX + 0x1c);
  fStack00000000000000b4 = (float)((uint64_t)uVar3 >> 0x20);
  fStack00000000000000b0 = (float)uVar3;
  fVar9 = fStack00000000000000b4 * fStack00000000000000b4 +
          fStack00000000000000b0 * fStack00000000000000b0;
  fVar9 = (float)(fVar9 <= 1.1754944e-38) * 1.1754944e-38 + fVar9;
  auVar7 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  _fStack00000000000000b0 = uVar3;
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(in_RCX + 0x34),3.0 - fVar9 * auVar7._0_4_ * auVar7._0_4_);
}





// 函数: void FUN_1805958f0(float param_1,uint64_t param_2,float param_3)
void FUN_1805958f0(float param_1,uint64_t param_2,float param_3)

{
  int64_t in_RCX;
  int32_t uVar1;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  int8_t auVar2 [16];
  int8_t auVar3 [16];
  float in_XMM4_Da;
  
  uVar1 = (int32_t)((uint64_t)param_2 >> 0x20);
  param_3 = param_3 + param_1 * in_XMM4_Da;
  param_3 = (float)(param_3 <= 1.1754944e-38) * 1.1754944e-38 + param_3;
  auVar2._4_4_ = uVar1;
  auVar2._0_4_ = param_3;
  auVar2._8_4_ = in_XMM1_Dc;
  auVar2._12_4_ = in_XMM1_Dd;
  auVar3._4_4_ = uVar1;
  auVar3._0_4_ = param_3;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar3 = rsqrtss(auVar2,auVar3);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(in_RCX + 0x34),3.0 - param_3 * auVar3._0_4_ * auVar3._0_4_);
}





// 函数: void FUN_180595900(float param_1,uint64_t param_2,float param_3)
void FUN_180595900(float param_1,uint64_t param_2,float param_3)

{
  int32_t in_EAX;
  int64_t in_RCX;
  float fVar1;
  int32_t uVar2;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  
  uVar2 = (int32_t)((uint64_t)param_2 >> 0x20);
  fVar1 = (float)CONCAT31((int3)((uint)in_EAX >> 8),param_3 + param_1 <= 1.1754944e-38) *
          1.1754944e-38 + param_3 + param_1;
  auVar3._4_4_ = uVar2;
  auVar3._0_4_ = fVar1;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar4._4_4_ = uVar2;
  auVar4._0_4_ = fVar1;
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._12_4_ = in_XMM1_Dd;
  auVar4 = rsqrtss(auVar3,auVar4);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(in_RCX + 0x34),3.0 - fVar1 * auVar4._0_4_ * auVar4._0_4_);
}





