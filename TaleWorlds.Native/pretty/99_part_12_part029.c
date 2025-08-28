#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_12_part029.c - 5 个函数

// 函数: void FUN_1807dc41f(void)
void FUN_1807dc41f(void)

{
  float fVar1;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *unaff_RBX;
  int64_t unaff_RBP;
  float *pfVar22;
  float *unaff_RSI;
  int64_t unaff_RDI;
  
  pfVar22 = (float *)(unaff_RBP + 8);
  fVar1 = *unaff_RBX;
  fVar2 = unaff_RBX[1];
  fVar3 = unaff_RBX[2];
  fVar4 = unaff_RBX[3];
  fVar5 = unaff_RBX[4];
  do {
    fVar6 = pfVar22[-2];
    fVar7 = pfVar22[-1];
    fVar8 = *pfVar22;
    fVar9 = pfVar22[1];
    fVar10 = pfVar22[2];
    fVar11 = pfVar22[3];
    fVar12 = pfVar22[4];
    fVar13 = pfVar22[5];
    fVar14 = unaff_RBX[0x22];
    fVar15 = unaff_RBX[0x21];
    *unaff_RSI = fVar1 * fVar6 + *unaff_RSI + fVar2 * fVar7 + fVar3 * fVar8 + fVar4 * fVar9 +
                 fVar5 * fVar10 + unaff_RBX[5] * fVar11 + unaff_RBX[6] * fVar12 +
                 unaff_RBX[7] * fVar13;
    fVar16 = unaff_RBX[0x42];
    fVar17 = unaff_RBX[0x41];
    unaff_RSI[1] = fVar6 * unaff_RBX[0x20] + unaff_RSI[1] + fVar7 * fVar15 + fVar8 * fVar14 +
                   fVar9 * unaff_RBX[0x23] + fVar10 * unaff_RBX[0x24] + fVar11 * unaff_RBX[0x25] +
                   fVar12 * unaff_RBX[0x26] + fVar13 * unaff_RBX[0x27];
    fVar14 = unaff_RBX[0x62];
    fVar15 = unaff_RBX[0x61];
    unaff_RSI[2] = fVar6 * unaff_RBX[0x40] + unaff_RSI[2] + fVar7 * fVar17 + fVar8 * fVar16 +
                   fVar9 * unaff_RBX[0x43] + fVar10 * unaff_RBX[0x44] + fVar11 * unaff_RBX[0x45] +
                   fVar12 * unaff_RBX[0x46] + fVar13 * unaff_RBX[0x47];
    fVar16 = unaff_RBX[0x82];
    fVar17 = unaff_RBX[0x81];
    unaff_RSI[3] = fVar6 * unaff_RBX[0x60] + unaff_RSI[3] + fVar7 * fVar15 + fVar8 * fVar14 +
                   fVar9 * unaff_RBX[99] + fVar10 * unaff_RBX[100] + fVar11 * unaff_RBX[0x65] +
                   fVar12 * unaff_RBX[0x66] + fVar13 * unaff_RBX[0x67];
    fVar14 = unaff_RBX[0xa2];
    fVar15 = unaff_RBX[0xa1];
    unaff_RSI[4] = fVar6 * unaff_RBX[0x80] + unaff_RSI[4] + fVar7 * fVar17 + fVar8 * fVar16 +
                   fVar9 * unaff_RBX[0x83] + fVar10 * unaff_RBX[0x84] + fVar11 * unaff_RBX[0x85] +
                   fVar12 * unaff_RBX[0x86] + fVar13 * unaff_RBX[0x87];
    unaff_RSI[5] = fVar6 * unaff_RBX[0xa0] + unaff_RSI[5] + fVar7 * fVar15 + fVar8 * fVar14 +
                   fVar9 * unaff_RBX[0xa3] + fVar10 * unaff_RBX[0xa4] + fVar11 * unaff_RBX[0xa5] +
                   fVar12 * unaff_RBX[0xa6] + fVar13 * unaff_RBX[0xa7];
    fVar14 = unaff_RBX[0xe0];
    pfVar22 = pfVar22 + 8;
    fVar15 = unaff_RBX[0xe1];
    fVar16 = unaff_RBX[0xe2];
    fVar17 = unaff_RBX[0xe3];
    fVar18 = unaff_RBX[0xe4];
    fVar19 = unaff_RBX[0xe5];
    fVar20 = unaff_RBX[0xe6];
    fVar21 = unaff_RBX[0xe7];
    unaff_RSI[6] = fVar6 * unaff_RBX[0xc0] + unaff_RSI[6] + fVar7 * unaff_RBX[0xc1] +
                   fVar8 * unaff_RBX[0xc2] + fVar9 * unaff_RBX[0xc3] + fVar10 * unaff_RBX[0xc4] +
                   fVar11 * unaff_RBX[0xc5] + fVar12 * unaff_RBX[0xc6] + fVar13 * unaff_RBX[199];
    unaff_RSI[7] = fVar6 * fVar14 + unaff_RSI[7] + fVar7 * fVar15 + fVar8 * fVar16 + fVar9 * fVar17
                   + fVar10 * fVar18 + fVar11 * fVar19 + fVar12 * fVar20 + fVar13 * fVar21;
    unaff_RSI = unaff_RSI + 8;
    unaff_RDI = unaff_RDI + -1;
  } while (unaff_RDI != 0);
  return;
}






// 函数: void FUN_1807dc8f5(void)
void FUN_1807dc8f5(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1807dc910(float *param_1,float *param_2,int param_3,int64_t param_4,uint64_t param_5,
void FUN_1807dc910(float *param_1,float *param_2,int param_3,int64_t param_4,uint64_t param_5,
                  int param_6,int param_7)

{
  float fVar1;
  bool bVar2;
  int64_t lVar3;
  float *pfVar4;
  float *pfVar5;
  int64_t lVar6;
  float *pfVar7;
  float *pfVar8;
  int8_t auStack_d8 [32];
  float afStack_b8 [32];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  lVar6 = (int64_t)param_6;
  lVar3 = 0;
  bVar2 = true;
  if (3 < lVar6) {
    pfVar4 = (float *)(param_4 + 0x108);
    do {
      fVar1 = pfVar4[-0x42];
      afStack_b8[lVar3] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      fVar1 = pfVar4[-0x21];
      afStack_b8[lVar3 + 1] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      fVar1 = *pfVar4;
      afStack_b8[lVar3 + 2] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      fVar1 = pfVar4[0x21];
      afStack_b8[lVar3 + 3] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      lVar3 = lVar3 + 4;
      pfVar4 = pfVar4 + 0x84;
    } while (lVar3 < lVar6 + -3);
  }
  if (lVar3 < lVar6) {
    pfVar4 = (float *)(lVar3 * 0x84 + param_4);
    do {
      fVar1 = *pfVar4;
      afStack_b8[lVar3] = fVar1;
      if (fVar1 != 1.0) {
        bVar2 = false;
      }
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 0x21;
    } while (lVar3 < lVar6);
  }
  if (param_7 != 0) {
    if (bVar2) {
                    // WARNING: Subroutine does not return
      memcpy(param_2,param_1);
    }
                    // WARNING: Subroutine does not return
    memset(param_2,0,(uint64_t)(uint)(param_3 * param_6) << 2);
  }
  if (bVar2) {
    if (param_3 != 0) {
      lVar3 = (int64_t)param_1 - (int64_t)param_2;
      do {
        pfVar5 = (float *)(lVar3 + (int64_t)param_2);
        pfVar4 = param_2;
        switch(param_6) {
        case 0x20:
          pfVar4 = param_2 + 1;
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *param_2 = *param_2 + fVar1;
        case 0x1f:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x1e:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x1d:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x1c:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x1b:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x1a:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x19:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x18:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x17:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x16:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x15:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x14:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x13:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x12:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x11:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0x10:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0xf:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0xe:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0xd:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0xc:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 0xb:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 10:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 9:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 8:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 7:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 6:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 5:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 4:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 3:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 2:
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          *pfVar4 = fVar1 + *pfVar4;
          pfVar4 = pfVar4 + 1;
        case 1:
          *pfVar4 = *pfVar5 + *pfVar4;
        }
        param_2 = param_2 + lVar6;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    do {
      pfVar8 = afStack_b8;
      pfVar5 = param_2;
      pfVar4 = param_1;
      pfVar7 = param_1;
      switch(param_6) {
      case 0x20:
        pfVar8 = afStack_b8 + 1;
        pfVar4 = param_1 + 1;
        pfVar5 = param_2 + 1;
        *param_2 = afStack_b8[0] * *param_1 + *param_2;
      case 0x1f:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x1e:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x1d:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x1c:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x1b:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x1a:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x19:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x18:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x17:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x16:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x15:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x14:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x13:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x12:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x11:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0x10:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0xf:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0xe:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0xd:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0xc:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 0xb:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 10:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 9:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 8:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 7:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 6:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 5:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 4:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 3:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar4 + 1;
        *pfVar5 = fVar1 * *pfVar4 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 2:
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar4 = pfVar7 + 1;
        *pfVar5 = fVar1 * *pfVar7 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      case 1:
        *pfVar5 = *pfVar8 * *pfVar4 + *pfVar5;
      }
      param_1 = param_1 + lVar6;
      param_2 = param_2 + lVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_d8);
}






// 函数: void FUN_1807dd240(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
void FUN_1807dd240(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
                  uint64_t param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  
  fVar1 = *param_4;
  fVar2 = param_4[0x20];
  fVar3 = param_4[0x40];
  fVar4 = param_4[0x60];
  fVar5 = param_4[0x80];
  fVar6 = param_4[0xa0];
  if (param_7 == 0) {
    for (uVar9 = param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      fVar7 = *param_1;
      fVar8 = param_1[1];
      *param_2 = fVar7 * fVar1 + *param_2;
      param_2[1] = fVar7 * fVar2 + param_2[1];
      param_2[2] = fVar7 * fVar3 + param_2[2];
      param_2[3] = fVar7 * fVar4 + param_2[3];
      param_2[4] = fVar7 * fVar5 + param_2[4];
      param_2[7] = fVar8 * fVar2 + param_2[7];
      param_2[5] = fVar7 * fVar6 + param_2[5];
      fVar7 = param_1[2];
      param_2[6] = fVar8 * fVar1 + param_2[6];
      param_2[9] = fVar8 * fVar4 + param_2[9];
      param_2[8] = fVar8 * fVar3 + param_2[8];
      param_2[0xd] = fVar7 * fVar2 + param_2[0xd];
      param_2[10] = fVar8 * fVar5 + param_2[10];
      param_2[0xf] = fVar7 * fVar4 + param_2[0xf];
      param_2[0xb] = fVar8 * fVar6 + param_2[0xb];
      fVar8 = param_1[3];
      param_2[0xc] = fVar7 * fVar1 + param_2[0xc];
      param_2[0x13] = fVar8 * fVar2 + param_2[0x13];
      param_2[0xe] = fVar7 * fVar3 + param_2[0xe];
      param_2[0x10] = fVar7 * fVar5 + param_2[0x10];
      param_2[0x11] = fVar7 * fVar6 + param_2[0x11];
      param_2[0x12] = fVar8 * fVar1 + param_2[0x12];
      param_1 = param_1 + 4;
      param_2[0x14] = fVar8 * fVar3 + param_2[0x14];
      param_2[0x15] = fVar8 * fVar4 + param_2[0x15];
      param_2[0x16] = fVar8 * fVar5 + param_2[0x16];
      param_2[0x17] = fVar8 * fVar6 + param_2[0x17];
      param_2 = param_2 + 0x18;
    }
    param_3 = param_3 & 3;
    if (param_3 != 0) {
      param_2 = param_2 + 2;
      do {
        fVar7 = *param_1;
        param_1 = param_1 + 1;
        param_2[-2] = fVar7 * fVar1 + param_2[-2];
        param_2[-1] = fVar7 * fVar2 + param_2[-1];
        *param_2 = fVar7 * fVar3 + *param_2;
        param_2[1] = fVar7 * fVar4 + param_2[1];
        param_2[2] = fVar7 * fVar5 + param_2[2];
        param_2[3] = fVar7 * fVar6 + param_2[3];
        param_2 = param_2 + 6;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    for (uVar9 = param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      fVar7 = *param_1;
      fVar8 = param_1[1];
      *param_2 = fVar7 * fVar1;
      param_2[1] = fVar7 * fVar2;
      param_2[2] = fVar7 * fVar3;
      param_2[3] = fVar7 * fVar4;
      param_2[4] = fVar7 * fVar5;
      param_2[7] = fVar8 * fVar2;
      param_2[6] = fVar8 * fVar1;
      param_2[9] = fVar8 * fVar4;
      param_2[8] = fVar8 * fVar3;
      param_2[5] = fVar7 * fVar6;
      fVar7 = param_1[2];
      param_2[10] = fVar8 * fVar5;
      param_2[0xd] = fVar7 * fVar2;
      param_2[0xc] = fVar7 * fVar1;
      param_2[0xf] = fVar7 * fVar4;
      param_2[0xe] = fVar7 * fVar3;
      param_2[0xb] = fVar8 * fVar6;
      fVar8 = param_1[3];
      param_1 = param_1 + 4;
      param_2[0x10] = fVar7 * fVar5;
      param_2[0x13] = fVar8 * fVar2;
      param_2[0x12] = fVar8 * fVar1;
      param_2[0x14] = fVar8 * fVar3;
      param_2[0x16] = fVar8 * fVar5;
      param_2[0x11] = fVar7 * fVar6;
      param_2[0x15] = fVar8 * fVar4;
      param_2[0x17] = fVar8 * fVar6;
      param_2 = param_2 + 0x18;
    }
    param_3 = param_3 & 3;
    if (param_3 != 0) {
      pfVar10 = param_2 + 2;
      do {
        fVar7 = *param_1;
        param_1 = param_1 + 1;
        pfVar10[-2] = fVar7 * fVar1;
        pfVar10[-1] = fVar7 * fVar2;
        *pfVar10 = fVar7 * fVar3;
        pfVar10[1] = fVar7 * fVar4;
        pfVar10[2] = fVar7 * fVar5;
        pfVar10[3] = fVar7 * fVar6;
        param_3 = param_3 - 1;
        pfVar10 = pfVar10 + 6;
      } while (param_3 != 0);
    }
  }
  return;
}






// 函数: void FUN_1807dd6c0(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
void FUN_1807dd6c0(float *param_1,float *param_2,uint param_3,float *param_4,uint64_t param_5,
                  uint64_t param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float *pfVar12;
  
  fVar1 = *param_4;
  fVar2 = param_4[0x20];
  fVar3 = param_4[0x40];
  fVar4 = param_4[0x60];
  fVar5 = param_4[0x80];
  fVar6 = param_4[0xa0];
  fVar7 = param_4[0xc0];
  fVar8 = param_4[0xe0];
  if (param_7 == 0) {
    for (uVar11 = param_3 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
      fVar9 = *param_1;
      fVar10 = param_1[1];
      param_1 = param_1 + 2;
      *param_2 = fVar9 * fVar1 + *param_2;
      param_2[1] = fVar9 * fVar2 + param_2[1];
      param_2[2] = fVar9 * fVar3 + param_2[2];
      param_2[3] = fVar9 * fVar4 + param_2[3];
      param_2[4] = fVar9 * fVar5 + param_2[4];
      param_2[5] = fVar9 * fVar6 + param_2[5];
      param_2[6] = fVar9 * fVar7 + param_2[6];
      param_2[9] = fVar10 * fVar2 + param_2[9];
      param_2[7] = fVar9 * fVar8 + param_2[7];
      param_2[8] = fVar10 * fVar1 + param_2[8];
      param_2[0xb] = fVar10 * fVar4 + param_2[0xb];
      param_2[10] = fVar10 * fVar3 + param_2[10];
      param_2[0xd] = fVar10 * fVar6 + param_2[0xd];
      param_2[0xc] = fVar10 * fVar5 + param_2[0xc];
      param_2[0xe] = fVar10 * fVar7 + param_2[0xe];
      param_2[0xf] = fVar10 * fVar8 + param_2[0xf];
      param_2 = param_2 + 0x10;
    }
    param_3 = param_3 & 1;
    if (param_3 != 0) {
      param_2 = param_2 + 2;
      do {
        fVar9 = *param_1;
        param_1 = param_1 + 1;
        param_2[-2] = fVar9 * fVar1 + param_2[-2];
        param_2[-1] = fVar9 * fVar2 + param_2[-1];
        *param_2 = fVar9 * fVar3 + *param_2;
        param_2[1] = fVar9 * fVar4 + param_2[1];
        param_2[2] = fVar9 * fVar5 + param_2[2];
        param_2[3] = fVar9 * fVar6 + param_2[3];
        param_2[4] = fVar9 * fVar7 + param_2[4];
        param_2[5] = fVar9 * fVar8 + param_2[5];
        param_2 = param_2 + 8;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
  }
  else {
    for (uVar11 = param_3 >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
      fVar9 = *param_1;
      fVar10 = param_1[1];
      param_1 = param_1 + 2;
      *param_2 = fVar9 * fVar1;
      param_2[1] = fVar9 * fVar2;
      param_2[2] = fVar9 * fVar3;
      param_2[3] = fVar9 * fVar4;
      param_2[4] = fVar9 * fVar5;
      param_2[5] = fVar9 * fVar6;
      param_2[6] = fVar9 * fVar7;
      param_2[9] = fVar10 * fVar2;
      param_2[8] = fVar10 * fVar1;
      param_2[0xb] = fVar10 * fVar4;
      param_2[10] = fVar10 * fVar3;
      param_2[0xc] = fVar10 * fVar5;
      param_2[0xe] = fVar10 * fVar7;
      param_2[7] = fVar9 * fVar8;
      param_2[0xd] = fVar10 * fVar6;
      param_2[0xf] = fVar10 * fVar8;
      param_2 = param_2 + 0x10;
    }
    param_3 = param_3 & 1;
    if (param_3 != 0) {
      pfVar12 = param_2 + 2;
      do {
        fVar9 = *param_1;
        param_1 = param_1 + 1;
        pfVar12[-2] = fVar9 * fVar1;
        pfVar12[-1] = fVar9 * fVar2;
        *pfVar12 = fVar9 * fVar3;
        pfVar12[1] = fVar9 * fVar4;
        pfVar12[2] = fVar9 * fVar5;
        pfVar12[3] = fVar9 * fVar6;
        pfVar12[4] = fVar9 * fVar7;
        pfVar12[5] = fVar9 * fVar8;
        param_3 = param_3 - 1;
        pfVar12 = pfVar12 + 8;
      } while (param_3 != 0);
    }
  }
  return;
}






