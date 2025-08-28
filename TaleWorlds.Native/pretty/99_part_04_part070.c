#include "TaleWorlds.Native.Split.h"

// 99_part_04_part070.c - 8 个函数

// 函数: void FUN_1802c7380(float *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1802c7380(float *param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *unaff_RBX;
  float *pfVar7;
  float *pfVar8;
  float *unaff_RSI;
  float *unaff_RDI;
  uint64_t *unaff_R14;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar5 = param_1;
  pfVar7 = unaff_RBX;
  if (param_1 < unaff_RDI) {
    fVar10 = *(float *)(param_4 + 0x44) - unaff_RBX[1];
    fVar11 = *(float *)(param_4 + 0x40) - *unaff_RBX;
    fVar9 = *(float *)(param_4 + 0x48) - unaff_RBX[2];
    fVar9 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
    do {
      fVar11 = *(float *)(param_4 + 0x44) - param_1[1];
      fVar12 = *(float *)(param_4 + 0x40) - *param_1;
      fVar10 = *(float *)(param_4 + 0x48) - param_1[2];
      fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
      pfVar5 = param_1;
      if ((fVar10 < fVar9) || (fVar9 < fVar10)) break;
      param_1 = param_1 + 4;
      pfVar5 = param_1;
    } while (param_1 < unaff_RDI);
  }
joined_r0x0001802c7423:
  do {
    pfVar4 = unaff_RBX;
    if (unaff_RDI <= param_1) {
joined_r0x0001802c74ce:
      for (; unaff_RSI < pfVar4; pfVar4 = pfVar4 + -4) {
        pfVar6 = unaff_RBX + -4;
        fVar10 = *(float *)(param_4 + 0x44) - unaff_RBX[-3];
        fVar14 = *(float *)(param_4 + 0x44) - pfVar7[1];
        fVar11 = *(float *)(param_4 + 0x40) - *pfVar6;
        fVar12 = *(float *)(param_4 + 0x40) - *pfVar7;
        fVar9 = *(float *)(param_4 + 0x48) - unaff_RBX[-2];
        fVar13 = *(float *)(param_4 + 0x48) - pfVar7[2];
        fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
        fVar9 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
        pfVar8 = pfVar7;
        if (fVar9 <= fVar10) {
          if (fVar9 < fVar10) break;
          pfVar8 = pfVar7 + -4;
          if (pfVar8 != pfVar6) {
            uVar1 = *(uint64_t *)(unaff_RBX + -2);
            uVar2 = *(uint64_t *)pfVar8;
            uVar3 = *(uint64_t *)(pfVar7 + -2);
            *(uint64_t *)pfVar8 = *(uint64_t *)pfVar6;
            *(uint64_t *)(pfVar7 + -2) = uVar1;
            *(uint64_t *)pfVar6 = uVar2;
            *(uint64_t *)(unaff_RBX + -2) = uVar3;
          }
        }
        unaff_RBX = pfVar6;
        pfVar7 = pfVar8;
      }
      if (pfVar4 == unaff_RSI) {
        if (param_1 == unaff_RDI) {
          *unaff_R14 = pfVar7;
          unaff_R14[1] = pfVar5;
          return;
        }
        if (pfVar5 != param_1) {
          uVar1 = *(uint64_t *)(pfVar5 + 2);
          uVar2 = *(uint64_t *)pfVar7;
          uVar3 = *(uint64_t *)(pfVar7 + 2);
          *(uint64_t *)pfVar7 = *(uint64_t *)pfVar5;
          *(uint64_t *)(pfVar7 + 2) = uVar1;
          *(uint64_t *)pfVar5 = uVar2;
          *(uint64_t *)(pfVar5 + 2) = uVar3;
        }
        uVar1 = *(uint64_t *)(param_1 + 2);
        uVar2 = *(uint64_t *)pfVar7;
        uVar3 = *(uint64_t *)(pfVar7 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)param_1;
        *(uint64_t *)(pfVar7 + 2) = uVar1;
        *(uint64_t *)param_1 = uVar2;
        *(uint64_t *)(param_1 + 2) = uVar3;
        param_1 = param_1 + 4;
        pfVar5 = pfVar5 + 4;
        unaff_RBX = pfVar4;
        pfVar7 = pfVar7 + 4;
      }
      else {
        unaff_RBX = pfVar4 + -4;
        if (param_1 == unaff_RDI) {
          pfVar8 = pfVar7 + -4;
          if (unaff_RBX != pfVar8) {
            uVar1 = *(uint64_t *)(pfVar7 + -2);
            uVar2 = *(uint64_t *)unaff_RBX;
            uVar3 = *(uint64_t *)(pfVar4 + -2);
            *(uint64_t *)unaff_RBX = *(uint64_t *)pfVar8;
            *(uint64_t *)(pfVar4 + -2) = uVar1;
            *(uint64_t *)pfVar8 = uVar2;
            *(uint64_t *)(pfVar7 + -2) = uVar3;
          }
          uVar1 = *(uint64_t *)(pfVar5 + -2);
          uVar2 = *(uint64_t *)pfVar8;
          uVar3 = *(uint64_t *)(pfVar7 + -2);
          *(uint64_t *)pfVar8 = *(uint64_t *)(pfVar5 + -4);
          *(uint64_t *)(pfVar7 + -2) = uVar1;
          *(uint64_t *)(pfVar5 + -4) = uVar2;
          *(uint64_t *)(pfVar5 + -2) = uVar3;
          pfVar5 = pfVar5 + -4;
          pfVar7 = pfVar8;
        }
        else {
          uVar1 = *(uint64_t *)param_1;
          uVar2 = *(uint64_t *)(param_1 + 2);
          uVar3 = *(uint64_t *)(pfVar4 + -2);
          *(uint64_t *)param_1 = *(uint64_t *)unaff_RBX;
          *(uint64_t *)(param_1 + 2) = uVar3;
          param_1 = param_1 + 4;
          *(uint64_t *)unaff_RBX = uVar1;
          *(uint64_t *)(pfVar4 + -2) = uVar2;
        }
      }
      goto joined_r0x0001802c7423;
    }
    fVar10 = *(float *)(param_4 + 0x44) - pfVar7[1];
    fVar14 = *(float *)(param_4 + 0x44) - param_1[1];
    fVar11 = *(float *)(param_4 + 0x40) - *pfVar7;
    fVar12 = *(float *)(param_4 + 0x40) - *param_1;
    fVar9 = *(float *)(param_4 + 0x48) - pfVar7[2];
    fVar13 = *(float *)(param_4 + 0x48) - param_1[2];
    fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9);
    fVar9 = SQRT(fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13);
    if (fVar9 <= fVar10) {
      if (fVar9 < fVar10) goto joined_r0x0001802c74ce;
      if (pfVar5 != param_1) {
        uVar1 = *(uint64_t *)(param_1 + 2);
        uVar2 = *(uint64_t *)pfVar5;
        uVar3 = *(uint64_t *)(pfVar5 + 2);
        *(uint64_t *)pfVar5 = *(uint64_t *)param_1;
        *(uint64_t *)(pfVar5 + 2) = uVar1;
        *(uint64_t *)param_1 = uVar2;
        *(uint64_t *)(param_1 + 2) = uVar3;
      }
      pfVar5 = pfVar5 + 4;
    }
    param_1 = param_1 + 4;
  } while( true );
}






// 函数: void FUN_1802c7420(float *param_1,uint64_t param_2,float *param_3,longlong param_4)
void FUN_1802c7420(float *param_1,uint64_t param_2,float *param_3,longlong param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  float *pfVar4;
  float *in_RAX;
  float *pfVar5;
  float *unaff_RBX;
  float *pfVar6;
  float *unaff_RSI;
  float *unaff_RDI;
  uint64_t *unaff_R14;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  do {
    while (pfVar4 = param_3, unaff_RDI <= in_RAX) {
joined_r0x0001802c74ce:
      for (; unaff_RSI < pfVar4; pfVar4 = pfVar4 + -4) {
        pfVar5 = param_3 + -4;
        fVar8 = *(float *)(param_4 + 0x44) - param_3[-3];
        fVar12 = *(float *)(param_4 + 0x44) - unaff_RBX[1];
        fVar9 = *(float *)(param_4 + 0x40) - *pfVar5;
        fVar10 = *(float *)(param_4 + 0x40) - *unaff_RBX;
        fVar7 = *(float *)(param_4 + 0x48) - param_3[-2];
        fVar11 = *(float *)(param_4 + 0x48) - unaff_RBX[2];
        fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
        fVar7 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
        pfVar6 = unaff_RBX;
        if (fVar7 <= fVar8) {
          if (fVar7 < fVar8) break;
          pfVar6 = unaff_RBX + -4;
          if (pfVar6 != pfVar5) {
            uVar1 = *(uint64_t *)(param_3 + -2);
            uVar2 = *(uint64_t *)pfVar6;
            uVar3 = *(uint64_t *)(unaff_RBX + -2);
            *(uint64_t *)pfVar6 = *(uint64_t *)pfVar5;
            *(uint64_t *)(unaff_RBX + -2) = uVar1;
            *(uint64_t *)pfVar5 = uVar2;
            *(uint64_t *)(param_3 + -2) = uVar3;
          }
        }
        param_3 = pfVar5;
        unaff_RBX = pfVar6;
      }
      if (pfVar4 == unaff_RSI) {
        if (in_RAX == unaff_RDI) {
          *unaff_R14 = unaff_RBX;
          unaff_R14[1] = param_1;
          return;
        }
        if (param_1 != in_RAX) {
          uVar1 = *(uint64_t *)(param_1 + 2);
          uVar2 = *(uint64_t *)unaff_RBX;
          uVar3 = *(uint64_t *)(unaff_RBX + 2);
          *(uint64_t *)unaff_RBX = *(uint64_t *)param_1;
          *(uint64_t *)(unaff_RBX + 2) = uVar1;
          *(uint64_t *)param_1 = uVar2;
          *(uint64_t *)(param_1 + 2) = uVar3;
        }
        uVar1 = *(uint64_t *)(in_RAX + 2);
        uVar2 = *(uint64_t *)unaff_RBX;
        uVar3 = *(uint64_t *)(unaff_RBX + 2);
        *(uint64_t *)unaff_RBX = *(uint64_t *)in_RAX;
        *(uint64_t *)(unaff_RBX + 2) = uVar1;
        *(uint64_t *)in_RAX = uVar2;
        *(uint64_t *)(in_RAX + 2) = uVar3;
        in_RAX = in_RAX + 4;
        param_1 = param_1 + 4;
        param_3 = pfVar4;
        unaff_RBX = unaff_RBX + 4;
      }
      else {
        param_3 = pfVar4 + -4;
        if (in_RAX == unaff_RDI) {
          pfVar6 = unaff_RBX + -4;
          if (param_3 != pfVar6) {
            uVar1 = *(uint64_t *)(unaff_RBX + -2);
            uVar2 = *(uint64_t *)param_3;
            uVar3 = *(uint64_t *)(pfVar4 + -2);
            *(uint64_t *)param_3 = *(uint64_t *)pfVar6;
            *(uint64_t *)(pfVar4 + -2) = uVar1;
            *(uint64_t *)pfVar6 = uVar2;
            *(uint64_t *)(unaff_RBX + -2) = uVar3;
          }
          uVar1 = *(uint64_t *)(param_1 + -2);
          uVar2 = *(uint64_t *)pfVar6;
          uVar3 = *(uint64_t *)(unaff_RBX + -2);
          *(uint64_t *)pfVar6 = *(uint64_t *)(param_1 + -4);
          *(uint64_t *)(unaff_RBX + -2) = uVar1;
          *(uint64_t *)(param_1 + -4) = uVar2;
          *(uint64_t *)(param_1 + -2) = uVar3;
          param_1 = param_1 + -4;
          unaff_RBX = pfVar6;
        }
        else {
          uVar1 = *(uint64_t *)in_RAX;
          uVar2 = *(uint64_t *)(in_RAX + 2);
          uVar3 = *(uint64_t *)(pfVar4 + -2);
          *(uint64_t *)in_RAX = *(uint64_t *)param_3;
          *(uint64_t *)(in_RAX + 2) = uVar3;
          in_RAX = in_RAX + 4;
          *(uint64_t *)param_3 = uVar1;
          *(uint64_t *)(pfVar4 + -2) = uVar2;
        }
      }
    }
    fVar8 = *(float *)(param_4 + 0x44) - unaff_RBX[1];
    fVar12 = *(float *)(param_4 + 0x44) - in_RAX[1];
    fVar9 = *(float *)(param_4 + 0x40) - *unaff_RBX;
    fVar10 = *(float *)(param_4 + 0x40) - *in_RAX;
    fVar7 = *(float *)(param_4 + 0x48) - unaff_RBX[2];
    fVar11 = *(float *)(param_4 + 0x48) - in_RAX[2];
    fVar8 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
    fVar7 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
    if (fVar7 <= fVar8) {
      if (fVar7 < fVar8) goto joined_r0x0001802c74ce;
      if (param_1 != in_RAX) {
        uVar1 = *(uint64_t *)(in_RAX + 2);
        uVar2 = *(uint64_t *)param_1;
        uVar3 = *(uint64_t *)(param_1 + 2);
        *(uint64_t *)param_1 = *(uint64_t *)in_RAX;
        *(uint64_t *)(param_1 + 2) = uVar1;
        *(uint64_t *)in_RAX = uVar2;
        *(uint64_t *)(in_RAX + 2) = uVar3;
      }
      param_1 = param_1 + 4;
    }
    in_RAX = in_RAX + 4;
  } while( true );
}






// 函数: void FUN_1802c7640(longlong param_1,longlong param_2,longlong param_3)
void FUN_1802c7640(longlong param_1,longlong param_2,longlong param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  
  uVar8 = param_2 - param_1 >> 4;
  lVar10 = param_2 - param_1 >> 5;
  if (0 < lVar10) {
    lVar9 = (longlong)(uVar8 - 1) >> 1;
    lVar11 = lVar10 * 0x10 + param_1;
    do {
      uVar3 = *(uint64_t *)(lVar11 + -0x10);
      uVar4 = *(uint64_t *)(lVar11 + -8);
      lVar11 = lVar11 + -0x10;
      lVar10 = lVar10 + -1;
      lVar7 = lVar10;
      while (lVar7 < lVar9) {
        fVar12 = *(float *)(param_3 + 0x48) - *(float *)(param_1 + 0x28 + lVar7 * 0x20);
        fVar13 = *(float *)(param_3 + 0x44) - *(float *)(param_1 + 0x24 + lVar7 * 0x20);
        fVar14 = *(float *)(param_3 + 0x40) - *(float *)(param_1 + 0x20 + lVar7 * 0x20);
        fVar17 = *(float *)(param_3 + 0x40) - *(float *)(param_1 + 0x10 + lVar7 * 0x20);
        fVar16 = *(float *)(param_3 + 0x44) - *(float *)(param_1 + 0x14 + lVar7 * 0x20);
        fVar15 = *(float *)(param_3 + 0x48) - *(float *)(param_1 + 0x18 + lVar7 * 0x20);
        lVar6 = lVar7 * 2 + 1;
        if (SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15) <=
            SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12)) {
          lVar6 = lVar7 * 2 + 2;
        }
        puVar1 = (uint64_t *)(param_1 + lVar6 * 0x10);
        uVar5 = puVar1[1];
        puVar2 = (uint64_t *)(param_1 + lVar7 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        lVar7 = lVar6;
      }
      if ((lVar7 == lVar9) && ((uVar8 & 1) == 0)) {
        puVar2 = (uint64_t *)(param_1 + -0x10 + uVar8 * 0x10);
        uVar5 = puVar2[1];
        puVar1 = (uint64_t *)(param_1 + lVar7 * 0x10);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
        lVar7 = uVar8 - 1;
      }
      if (lVar10 < lVar7) {
        fStack_50 = (float)uVar4;
        fStack_54 = (float)((ulonglong)uVar3 >> 0x20);
        fStack_58 = (float)uVar3;
        do {
          lVar6 = lVar7 + -1 >> 1;
          fVar17 = *(float *)(param_3 + 0x40) - fStack_58;
          fVar16 = *(float *)(param_3 + 0x44) - fStack_54;
          fVar13 = *(float *)(param_3 + 0x44) - *(float *)(param_1 + 4 + lVar6 * 0x10);
          fVar14 = *(float *)(param_3 + 0x40) - *(float *)(param_1 + lVar6 * 0x10);
          fVar12 = *(float *)(param_3 + 0x48) - *(float *)(param_1 + 8 + lVar6 * 0x10);
          fVar15 = *(float *)(param_3 + 0x48) - fStack_50;
          if (SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15) <=
              SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12)) break;
          puVar1 = (uint64_t *)(param_1 + lVar6 * 0x10);
          uVar5 = puVar1[1];
          puVar2 = (uint64_t *)(param_1 + lVar7 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          lVar7 = lVar6;
        } while (lVar10 < lVar6);
      }
      puVar1 = (uint64_t *)(param_1 + lVar7 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
    } while (0 < lVar10);
  }
  return;
}






// 函数: void FUN_1802c7662(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_1802c7662(longlong param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong unaff_RBX;
  longlong lVar8;
  longlong in_R10;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStackX_8;
  
  lVar8 = (longlong)(unaff_RBX - 1) >> 1;
  param_1 = in_R10 * 0x10 + param_1;
  do {
    uVar3 = *(uint64_t *)(param_1 + -0x10);
    uVar4 = *(uint64_t *)(param_1 + -8);
    param_1 = param_1 + -0x10;
    in_R10 = in_R10 + -1;
    lVar7 = in_R10;
    while (lVar7 < lVar8) {
      fVar9 = *(float *)(param_3 + 0x48) - *(float *)(param_4 + 0x28 + lVar7 * 0x20);
      fVar10 = *(float *)(param_3 + 0x44) - *(float *)(param_4 + 0x24 + lVar7 * 0x20);
      fVar11 = *(float *)(param_3 + 0x40) - *(float *)(param_4 + 0x20 + lVar7 * 0x20);
      fVar14 = *(float *)(param_3 + 0x40) - *(float *)(param_4 + 0x10 + lVar7 * 0x20);
      fVar13 = *(float *)(param_3 + 0x44) - *(float *)(param_4 + 0x14 + lVar7 * 0x20);
      fVar12 = *(float *)(param_3 + 0x48) - *(float *)(param_4 + 0x18 + lVar7 * 0x20);
      lVar6 = lVar7 * 2 + 1;
      if (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) <=
          SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9)) {
        lVar6 = lVar7 * 2 + 2;
      }
      puVar1 = (uint64_t *)(param_4 + lVar6 * 0x10);
      uVar5 = puVar1[1];
      puVar2 = (uint64_t *)(param_4 + lVar7 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      lVar7 = lVar6;
    }
    if ((lVar7 == lVar8) && ((unaff_RBX & 1) == 0)) {
      puVar2 = (uint64_t *)(param_4 + -0x10 + unaff_RBX * 0x10);
      uVar5 = puVar2[1];
      puVar1 = (uint64_t *)(param_4 + lVar7 * 0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      lVar7 = unaff_RBX - 1;
    }
    if (in_R10 < lVar7) {
      fStackX_8 = (float)uVar4;
      do {
        lVar6 = lVar7 + -1 >> 1;
        fVar14 = *(float *)(param_3 + 0x40) - (float)uVar3;
        fVar13 = *(float *)(param_3 + 0x44) - (float)((ulonglong)uVar3 >> 0x20);
        fVar10 = *(float *)(param_3 + 0x44) - *(float *)(param_4 + 4 + lVar6 * 0x10);
        fVar11 = *(float *)(param_3 + 0x40) - *(float *)(param_4 + lVar6 * 0x10);
        fVar9 = *(float *)(param_3 + 0x48) - *(float *)(param_4 + 8 + lVar6 * 0x10);
        fVar12 = *(float *)(param_3 + 0x48) - fStackX_8;
        if (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12) <=
            SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9)) break;
        puVar1 = (uint64_t *)(param_4 + lVar6 * 0x10);
        uVar5 = puVar1[1];
        puVar2 = (uint64_t *)(param_4 + lVar7 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        lVar7 = lVar6;
      } while (in_R10 < lVar6);
    }
    puVar1 = (uint64_t *)(param_4 + lVar7 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    if (in_R10 < 1) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1802c788f(void)
void FUN_1802c788f(void)

{
  return;
}



float * FUN_1802c78a0(float *param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (param_1 == param_2) {
    return param_2;
  }
  pfVar9 = param_1 + 4;
  if (pfVar9 == param_2) {
    return param_2;
  }
  pfVar10 = param_1 + 2;
  do {
    fVar1 = *pfVar9;
    fVar2 = pfVar9[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[3];
    fVar11 = *(float *)(param_3 + 0x44);
    fVar12 = *(float *)(param_3 + 0x40);
    fVar13 = *(float *)(param_3 + 0x48);
    fVar16 = SQRT((fVar12 - fVar1) * (fVar12 - fVar1) + (fVar11 - fVar2) * (fVar11 - fVar2) +
                  (fVar13 - fVar3) * (fVar13 - fVar3));
    if (fVar16 < SQRT((fVar12 - *param_1) * (fVar12 - *param_1) +
                      (fVar11 - param_1[1]) * (fVar11 - param_1[1]) +
                      (fVar13 - param_1[2]) * (fVar13 - param_1[2]))) {
                    // WARNING: Subroutine does not return
      memmove(0x18 - (8 - (longlong)param_1),param_1);
    }
    pfVar6 = pfVar10 + -2;
    pfVar8 = pfVar9;
    pfVar7 = pfVar9;
    if (fVar16 < SQRT((fVar12 - pfVar10[-2]) * (fVar12 - pfVar10[-2]) +
                      (fVar11 - pfVar10[-1]) * (fVar11 - pfVar10[-1]) +
                      (fVar13 - *pfVar10) * (fVar13 - *pfVar10))) {
      do {
        pfVar8 = pfVar6;
        uVar5 = *(uint64_t *)(pfVar8 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)pfVar8;
        *(uint64_t *)(pfVar7 + 2) = uVar5;
        fVar12 = *(float *)(param_3 + 0x44) - fVar2;
        fVar15 = *(float *)(param_3 + 0x40) - pfVar8[-4];
        fVar14 = *(float *)(param_3 + 0x44) - pfVar8[-3];
        fVar16 = *(float *)(param_3 + 0x48) - pfVar8[-2];
        fVar13 = *(float *)(param_3 + 0x40) - fVar1;
        fVar11 = *(float *)(param_3 + 0x48) - fVar3;
        pfVar6 = pfVar8 + -4;
        pfVar7 = pfVar8;
      } while (SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) <
               SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16));
    }
    *pfVar8 = fVar1;
    pfVar8[1] = fVar2;
    pfVar8[2] = fVar3;
    pfVar8[3] = fVar4;
    pfVar9 = pfVar9 + 4;
    pfVar10 = pfVar10 + 4;
  } while (pfVar9 != param_2);
  return param_2;
}






// 函数: void FUN_1802c78bd(longlong param_1,float *param_2)
void FUN_1802c78bd(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float *pfVar6;
  longlong in_RAX;
  float *pfVar7;
  float *pfVar8;
  longlong unaff_RBX;
  float *unaff_RBP;
  uint64_t unaff_RSI;
  float *pfVar9;
  uint64_t unaff_RDI;
  float *pfVar10;
  float *unaff_R14;
  uint64_t unaff_R15;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar16;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  pfVar9 = (float *)(param_1 + 0x10);
  if (pfVar9 == param_2) {
    return;
  }
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  pfVar10 = (float *)(param_1 + 8);
  *(uint64_t *)(in_RAX + 0x18) = unaff_R15;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  do {
    fVar1 = *pfVar9;
    fVar2 = pfVar9[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[3];
    fVar11 = *(float *)(unaff_RBX + 0x44);
    fVar12 = *(float *)(unaff_RBX + 0x40);
    fVar13 = *(float *)(unaff_RBX + 0x48);
    fVar16 = SQRT((fVar12 - fVar1) * (fVar12 - fVar1) + (fVar11 - fVar2) * (fVar11 - fVar2) +
                  (fVar13 - fVar3) * (fVar13 - fVar3));
    if (fVar16 < SQRT((fVar12 - *unaff_RBP) * (fVar12 - *unaff_RBP) +
                      (fVar11 - unaff_RBP[1]) * (fVar11 - unaff_RBP[1]) +
                      (fVar13 - unaff_RBP[2]) * (fVar13 - unaff_RBP[2]))) {
                    // WARNING: Subroutine does not return
      memmove(0x18 - (8 - param_1));
    }
    pfVar6 = pfVar10 + -2;
    pfVar8 = pfVar9;
    pfVar7 = pfVar9;
    if (fVar16 < SQRT((fVar12 - pfVar10[-2]) * (fVar12 - pfVar10[-2]) +
                      (fVar11 - pfVar10[-1]) * (fVar11 - pfVar10[-1]) +
                      (fVar13 - *pfVar10) * (fVar13 - *pfVar10))) {
      do {
        pfVar8 = pfVar6;
        uVar5 = *(uint64_t *)(pfVar8 + 2);
        *(uint64_t *)pfVar7 = *(uint64_t *)pfVar8;
        *(uint64_t *)(pfVar7 + 2) = uVar5;
        fVar12 = *(float *)(unaff_RBX + 0x44) - fVar2;
        fVar15 = *(float *)(unaff_RBX + 0x40) - pfVar8[-4];
        fVar14 = *(float *)(unaff_RBX + 0x44) - pfVar8[-3];
        fVar16 = *(float *)(unaff_RBX + 0x48) - pfVar8[-2];
        fVar13 = *(float *)(unaff_RBX + 0x40) - fVar1;
        fVar11 = *(float *)(unaff_RBX + 0x48) - fVar3;
        pfVar6 = pfVar8 + -4;
        pfVar7 = pfVar8;
      } while (SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) <
               SQRT(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16));
    }
    *pfVar8 = fVar1;
    pfVar8[1] = fVar2;
    pfVar8[2] = fVar3;
    pfVar8[3] = fVar4;
    pfVar9 = pfVar9 + 4;
    pfVar10 = pfVar10 + 4;
  } while (pfVar9 != unaff_R14);
  return;
}






// 函数: void FUN_1802c7abc(void)
void FUN_1802c7abc(void)

{
  return;
}






// 函数: void FUN_1802c7ad0(void)
void FUN_1802c7ad0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802c7ae0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a18d68;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&UNK_180a21690;
    *plVar3 = (longlong)&UNK_180a21720;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&UNK_1809fff60;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&UNK_180a18d68;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Type propagation algorithm not settling

uint64_t * FUN_1802c7c60(longlong param_1,longlong param_2,uint64_t *param_3,uint64_t param_4)

{
  void *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *puVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  puVar2 = param_3;
  if (param_1 != param_2) {
    puVar3 = param_3 + 0xe;
    do {
      *puVar2 = &UNK_18098bcb0;
      puVar3[-0xd] = 0;
      *(int32_t *)(puVar3 + -0xc) = 0;
      *puVar2 = &UNK_1809fcc58;
      puVar3[-0xd] = puVar3 + -0xb;
      *(int32_t *)(puVar3 + -0xc) = 0;
      *(int8_t *)(puVar3 + -0xb) = 0;
      *(int32_t *)(puVar3 + -0xc) =
           *(int32_t *)(param_1 + (-0x60 - (longlong)param_3) + (longlong)puVar3);
      puVar1 = *(void **)(param_1 + (-0x68 - (longlong)param_3) + (longlong)puVar3);
      puVar4 = &DAT_18098bc73;
      if (puVar1 != (void *)0x0) {
        puVar4 = puVar1;
      }
      strcpy_s(puVar3[-0xd],0x40,puVar4,param_4,uVar5);
      puVar3[-3] = &UNK_18098bcb0;
      puVar3[-2] = 0;
      *(int32_t *)(puVar3 + -1) = 0;
      puVar3[-3] = &UNK_1809fcc58;
      puVar3[-2] = puVar3;
      *(int32_t *)(puVar3 + -1) = 0;
      *(int8_t *)puVar3 = 0;
      *(int32_t *)(puVar3 + -1) =
           *(int32_t *)(param_1 + (-8 - (longlong)param_3) + (longlong)puVar3);
      puVar1 = *(void **)(param_1 + (-0x10 - (longlong)param_3) + (longlong)puVar3);
      puVar4 = &DAT_18098bc73;
      if (puVar1 != (void *)0x0) {
        puVar4 = puVar1;
      }
      strcpy_s(puVar3,0x40,puVar4,param_4,uVar5);
      puVar3[8] = &UNK_18098bcb0;
      puVar3[9] = 0;
      *(int32_t *)(puVar3 + 10) = 0;
      puVar3[8] = &UNK_1809fcc58;
      puVar3[9] = puVar3 + 0xb;
      *(int32_t *)(puVar3 + 10) = 0;
      *(int8_t *)(puVar3 + 0xb) = 0;
      *(int32_t *)(puVar3 + 10) =
           *(int32_t *)((longlong)puVar3 + param_1 + (0x50 - (longlong)param_3));
      puVar1 = *(void **)((longlong)puVar3 + param_1 + (0x48 - (longlong)param_3));
      puVar4 = &DAT_18098bc73;
      if (puVar1 != (void *)0x0) {
        puVar4 = puVar1;
      }
      strcpy_s(puVar3[9],0x40,puVar4,param_4,uVar5);
      *(int8_t *)(puVar3 + 0x13) =
           *(int8_t *)(param_1 + (0x98 - (longlong)param_3) + (longlong)puVar3);
      puVar2 = puVar2 + 0x22;
      puVar3 = puVar3 + 0x22;
    } while (param_1 + (-0x70 - (longlong)param_3) + (longlong)puVar3 != param_2);
  }
  return puVar2;
}






