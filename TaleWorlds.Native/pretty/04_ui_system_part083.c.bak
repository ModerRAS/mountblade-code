#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part083.c - 12 个函数

// 函数: void FUN_180715720(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
void FUN_180715720(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  byte param_6)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  psVar3 = *(short **)(param_1 + 0x20);
  iVar8 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar6 = 0;
  do {
    iVar7 = 0;
    psVar5 = psVar3;
    if (0 < param_4) {
      do {
        lVar1 = param_2 + (longlong)(((int)*psVar5 << (param_6 & 0x1f)) + iVar6) * 4;
        fVar9 = (float)FUN_1807070a0(lVar1,lVar1,(int)psVar5[1] - (int)*psVar5 << (param_6 & 0x1f));
        iVar4 = *(int *)(param_1 + 8) * iVar8 + iVar7;
        iVar7 = iVar7 + 1;
        *(float *)(param_3 + (longlong)iVar4 * 4) = SQRT(fVar9 + 1e-27);
        psVar5 = psVar5 + 1;
      } while (iVar7 < param_4);
    }
    iVar8 = iVar8 + 1;
    iVar6 = iVar6 + (iVar2 << (param_6 & 0x1f));
  } while (iVar8 < param_5);
  return;
}





// 函数: void FUN_180715830(int *param_1,uint *param_2,uint64_t param_3,longlong param_4,uint param_5,
void FUN_180715830(int *param_1,uint *param_2,uint64_t param_3,longlong param_4,uint param_5,
                  int *param_6,byte param_7,int param_8,int param_9,int param_10,uint *param_11)

{
  longlong lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  short sVar21;
  int iVar22;
  uint uVar23;
  uint uStackX_8;
  
  iVar10 = *param_1;
  lVar1 = *(longlong *)(param_1 + 2);
  uVar13 = 0;
  uVar23 = 0;
  iVar15 = param_1[4];
  uVar2 = *(uint64_t *)(param_1 + 8);
  uVar3 = *(uint64_t *)(param_1 + 0xc);
  uStackX_8 = 0;
  iVar8 = (int)*(short *)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar15 * 2) + param_9 * 8;
  if ((param_10 == 0) || (iVar5 = 0x10, param_5 != 2)) {
    iVar5 = 4;
  }
  iVar22 = param_5 * 2 + -1;
  if ((param_10 != 0) && (param_5 == 2)) {
    iVar22 = param_5 * 2 + -2;
  }
  uVar6 = (iVar22 * ((iVar8 >> 1) - iVar5) + *param_6) / iVar22;
  uVar7 = (*param_6 - iVar8) - 0x20;
  if ((int)uVar6 <= (int)uVar7) {
    uVar7 = uVar6;
  }
  if (0x40 < (int)uVar7) {
    uVar7 = 0x40;
  }
  uVar16 = 1;
  if (3 < (int)uVar7) {
    uVar16 = (ulonglong)
             (((int)*(short *)(&unknown_var_8936_ptr + (ulonglong)(uVar7 & 7) * 2) >>
              (0xeU - (char)((int)uVar7 >> 3) & 0x1f)) + 1U & 0xfffffffe);
  }
  if ((param_10 != 0) && (param_1[5] <= iVar15)) {
    uVar16 = 1;
  }
  uVar17 = uVar13;
  if (iVar10 != 0) {
    uVar7 = FUN_180721cf0(param_3,param_4,param_10,param_5,param_1[0xf]);
    uVar17 = (ulonglong)uVar7;
  }
  iVar8 = func_0x000180712300(uVar2);
  iVar5 = (int)uVar16;
  uVar20 = 0;
  uVar7 = (uint)uVar17;
  uVar6 = uVar20;
  if (iVar5 == 1) {
    if (param_10 != 0) {
      if (iVar10 != 0) {
        if (((int)uVar7 < 0x2001) || (param_1[0x11] != 0)) {
          uStackX_8 = 0;
        }
        else {
          uStackX_8 = 1;
          uVar7 = 0;
          if (0 < (int)param_5) {
            if (0xf < param_5) {
              uVar12 = param_5 & 0x8000000f;
              if ((int)uVar12 < 0) {
                uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
              }
              puVar11 = (uint *)(param_4 + 0x20);
              uVar16 = uVar13;
              do {
                uVar7 = (int)uVar16 + 0x10;
                uVar16 = (ulonglong)uVar7;
                uVar13 = uVar13 + 0x10;
                puVar11[-8] = puVar11[-8] ^ 0x80000000;
                puVar11[-7] = puVar11[-7] ^ 0x80000000;
                puVar11[-6] = puVar11[-6] ^ 0x80000000;
                puVar11[-5] = puVar11[-5] ^ 0x80000000;
                puVar11[-4] = puVar11[-4] ^ 0x80000000;
                puVar11[-3] = puVar11[-3] ^ 0x80000000;
                puVar11[-2] = puVar11[-2] ^ 0x80000000;
                puVar11[-1] = puVar11[-1] ^ 0x80000000;
                *puVar11 = *puVar11 ^ 0x80000000;
                puVar11[1] = puVar11[1] ^ 0x80000000;
                puVar11[2] = puVar11[2] ^ 0x80000000;
                puVar11[3] = puVar11[3] ^ 0x80000000;
                puVar11[4] = puVar11[4] ^ 0x80000000;
                puVar11[5] = puVar11[5] ^ 0x80000000;
                puVar11[6] = puVar11[6] ^ 0x80000000;
                puVar11[7] = puVar11[7] ^ 0x80000000;
                puVar11 = puVar11 + 0x10;
              } while ((longlong)uVar13 < (longlong)(int)(param_5 - uVar12));
            }
            if ((int)uVar7 < (int)param_5) {
              if (3 < (int)(param_5 - uVar7)) {
                lVar14 = (longlong)(int)uVar7;
                uVar12 = ((param_5 - uVar7) - 4 >> 2) + 1;
                uVar13 = (ulonglong)uVar12;
                uVar7 = uVar7 + uVar12 * 4;
                puVar11 = (uint *)(param_4 + (lVar14 + 2) * 4);
                do {
                  puVar11[-2] = puVar11[-2] ^ 0x80000000;
                  puVar11[-1] = puVar11[-1] ^ 0x80000000;
                  *puVar11 = *puVar11 ^ 0x80000000;
                  puVar11[1] = puVar11[1] ^ 0x80000000;
                  uVar13 = uVar13 - 1;
                  puVar11 = puVar11 + 4;
                } while (uVar13 != 0);
              }
              if ((int)uVar7 < (int)param_5) {
                lVar14 = (longlong)(int)(param_5 - uVar7);
                puVar11 = (uint *)(param_4 + (longlong)(int)uVar7 * 4);
                do {
                  *puVar11 = *puVar11 ^ 0x80000000;
                  lVar14 = lVar14 + -1;
                  puVar11 = puVar11 + 1;
                } while (lVar14 != 0);
              }
            }
          }
        }
        FUN_180716890(lVar1,param_3,param_4,uVar3,iVar15,param_5);
      }
      uVar12 = uVar20;
      if ((0x10 < *param_6) && (0x10 < param_1[10])) {
        if (iVar10 == 0) {
          uVar12 = FUN_18070f310(uVar2,2);
        }
        else {
          func_0x000180705150(uVar2,uStackX_8,2);
          uVar12 = uStackX_8;
        }
      }
      uVar7 = uVar20;
      if (param_1[0x11] == 0) {
        uVar6 = uVar12;
      }
    }
    goto LAB_180715d56;
  }
  if (iVar10 == 0) {
LAB_1807159f3:
    uVar13 = uVar17;
    if (param_10 == 0) goto LAB_180715b7d;
LAB_1807159fc:
    uVar7 = (uint)uVar17;
    uVar13 = uVar17;
    if ((int)param_5 < 3) goto LAB_180715b7d;
    iVar5 = iVar5 / 2;
    iVar19 = (iVar5 + 1) * 3;
    iVar22 = iVar19 + iVar5;
    if (iVar10 == 0) {
      iVar18 = func_0x00018070f700(uVar2,iVar22);
      if (iVar18 < iVar19) {
        uVar7 = iVar18 / 3;
      }
      else {
        uVar7 = iVar18 + (iVar5 + 1) * -3 + 1 + iVar5;
      }
      if (iVar5 < (int)uVar7) {
        iVar18 = (iVar19 - iVar5) + uVar7;
      }
      else {
        iVar18 = uVar7 * 3 + 3;
      }
      iVar9 = uVar7 * 3;
      if (iVar5 < (int)uVar7) {
        iVar9 = (iVar19 - iVar5) + uVar7 + -1;
      }
      func_0x00018070f6c0(uVar2,iVar9,iVar18,iVar22);
    }
    else {
      iVar18 = (iVar19 - iVar5) + uVar7;
      iVar19 = uVar7 * 3 + 3;
      if (iVar5 < (int)uVar7) {
        iVar19 = iVar18;
      }
      iVar9 = uVar7 * 3;
      if (iVar5 < (int)uVar7) {
        iVar9 = iVar18 + -1;
      }
      func_0x000180705820(uVar2,iVar9,iVar19,iVar22);
    }
  }
  else {
    if ((param_10 != 0) && (param_1[0x10] != 0)) {
      iVar22 = 0x7fff;
      if ((int)uVar7 < 0x2001) {
        iVar22 = -0x7fff;
      }
      uVar12 = (int)(iVar5 * uVar7 + iVar22 / iVar5) >> 0xe;
      uVar7 = uVar20;
      if (-1 < (int)uVar12) {
        uVar7 = uVar12;
      }
      uVar17 = (ulonglong)(iVar5 - 1U);
      if (((int)uVar7 <= (int)(iVar5 - 1U)) && (uVar17 = (ulonglong)uVar12, (int)uVar12 < 0)) {
        uVar17 = uVar13;
      }
      if (-1 < param_1[0x10]) {
        uVar17 = (ulonglong)((int)uVar17 + 1);
      }
      goto LAB_1807159f3;
    }
    uVar7 = (int)(uVar7 * iVar5 + 0x2000) >> 0xe;
    uVar17 = (ulonglong)uVar7;
    if (param_10 != 0) goto LAB_1807159fc;
    uVar13 = uVar17;
    if (((param_1[0x12] != 0) && (0 < (int)uVar7)) && ((int)uVar7 < iVar5)) {
      sVar4 = (short)((uVar7 << 0xe) / uVar16);
      sVar21 = (short)((int)sVar4 * (int)sVar4 + 0x1000 >> 0xd);
      iVar22 = (int)sVar21;
      sVar4 = (short)((int)(short)(0x4000 - sVar4) * (int)(short)(0x4000 - sVar4) + 0x1000 >> 0xd);
      iVar19 = (int)sVar4;
      sVar4 = FUN_180715670((int)(short)(((short)((short)((short)((short)((short)(iVar19 * -0x272 +
                                                                                  0x4000 >> 0xf) +
                                                                         0x2055) * iVar19 + 0x4000
                                                                 >> 0xf) + -0x1de3) * iVar19 +
                                                  0x4000 >> 0xf) - sVar4) + -0x8000),
                            (int)(short)(((short)((short)((short)((short)((short)(iVar22 * -0x272 +
                                                                                  0x4000 >> 0xf) +
                                                                         0x2055) * iVar22 + 0x4000
                                                                 >> 0xf) + -0x1de3) * iVar22 +
                                                  0x4000 >> 0xf) - sVar21) + -0x8000));
      iVar22 = (int)sVar4 * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >> 0xf;
      uVar13 = uVar16;
      if ((iVar22 <= *param_6) && (uVar13 = uVar17, iVar22 < -*param_6)) {
        uVar13 = 0;
      }
    }
LAB_180715b7d:
    uVar7 = (uint)uVar13;
    if ((param_8 < 2) && (param_10 == 0)) {
      iVar19 = iVar5 >> 1;
      iVar22 = iVar19 + 1;
      iVar18 = iVar22 * iVar22;
      if (iVar10 == 0) {
        iVar9 = func_0x00018070f700(uVar2,iVar18);
        if (iVar9 < iVar19 * iVar22 >> 1) {
          iVar5 = func_0x000180722f30(iVar9 * 8 + 1);
          uVar7 = iVar5 - 1U >> 1;
          iVar22 = uVar7 + 1;
          iVar5 = (int)(iVar22 * uVar7) >> 1;
        }
        else {
          iVar22 = func_0x000180722f30((iVar18 - iVar9) * 8 + -7);
          uVar7 = (uint)((iVar5 * 2 + 2) - iVar22) >> 1;
          iVar22 = (iVar5 - uVar7) + 1;
          iVar5 = iVar18 - ((int)(((iVar5 - uVar7) + 2) * iVar22) >> 1);
        }
        func_0x00018070f6c0(uVar2,iVar5,iVar5 + iVar22,iVar18);
      }
      else {
        uVar12 = uVar7;
        if (iVar19 < (int)uVar7) {
          uVar12 = iVar5 - uVar7;
        }
        if (iVar19 < (int)uVar7) {
          iVar5 = iVar18 - ((int)(((iVar5 - uVar7) + 2) * ((iVar5 - uVar7) + 1)) >> 1);
        }
        else {
          iVar5 = (int)((uVar7 + 1) * uVar7) >> 1;
        }
        func_0x000180705820(uVar2,iVar5,uVar12 + 1 + iVar5,iVar18);
      }
    }
    else if (iVar10 == 0) {
      uVar7 = FUN_18070f540(uVar2);
    }
    else {
      FUN_1807056f0(uVar2,uVar13,iVar5 + 1);
    }
  }
  uVar7 = (uint)((uVar7 << 0xe) / uVar16);
  if ((iVar10 != 0) && (param_10 != 0)) {
    if (uVar7 == 0) {
      FUN_180716890(lVar1,param_3,param_4,uVar3,iVar15,param_5);
    }
    else {
      FUN_180719a90(param_3,param_4,param_5);
    }
  }
LAB_180715d56:
  iVar10 = func_0x000180712300(uVar2);
  *param_6 = *param_6 - (iVar10 - iVar8);
  if (uVar7 == 0) {
    uVar20 = 0x7fff;
    uVar12 = 0xffffc000;
    *param_11 = *param_11 & (1 << (param_7 & 0x1f)) - 1U;
  }
  else {
    uVar12 = 0x4000;
    if (uVar7 == 0x4000) {
      uVar23 = 0x7fff;
      *param_11 = *param_11 & (1 << (param_7 & 0x1f)) + -1 << (param_7 & 0x1f);
    }
    else {
      sVar4 = (short)uVar7;
      sVar21 = (short)((int)sVar4 * (int)sVar4 + 0x1000 >> 0xd);
      iVar15 = (int)sVar21;
      uVar20 = (uint)(short)(((short)((short)((short)((short)((short)(iVar15 * -0x272 + 0x4000 >>
                                                                     0xf) + 0x2055) * iVar15 +
                                                      0x4000 >> 0xf) + -0x1de3) * iVar15 + 0x4000 >>
                                     0xf) - sVar21) + -0x8000);
      sVar4 = (short)((int)(short)(0x4000 - sVar4) * (int)(short)(0x4000 - sVar4) + 0x1000 >> 0xd);
      iVar15 = (int)sVar4;
      uVar23 = (uint)(short)(((short)((short)((short)((short)((short)(iVar15 * -0x272 + 0x4000 >>
                                                                     0xf) + 0x2055) * iVar15 +
                                                      0x4000 >> 0xf) + -0x1de3) * iVar15 + 0x4000 >>
                                     0xf) - sVar4) + -0x8000);
      sVar4 = FUN_180715670(uVar23,uVar20);
      uVar12 = (int)sVar4 * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >> 0xf;
    }
  }
  *param_2 = uVar6;
  param_2[1] = uVar20;
  param_2[2] = uVar23;
  param_2[3] = uVar12;
  param_2[4] = uVar7;
  param_2[5] = iVar10 - iVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807160c0(uint64_t param_1,int param_2,int param_3)
void FUN_1807160c0(uint64_t param_1,int param_2,int param_3)

{
  int8_t auStack_58 [8];
  uint64_t uStack_50;
  longlong lStack_38;
  ulonglong uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  lStack_38 = (longlong)(param_2 * param_3) * 4;
  uStack_50 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1807163d0(longlong param_1,longlong param_2,float *param_3,longlong param_4,int param_5,
void FUN_1807163d0(longlong param_1,longlong param_2,float *param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar11 = *(int *)(param_1 + 0x30) * param_7;
  iVar9 = *(short *)(lVar2 + (longlong)param_6 * 2) * param_7;
  if ((param_8 != 1) && (param_8 = iVar11 / param_8, param_8 <= iVar9)) {
    iVar9 = param_8;
  }
  iVar5 = 0;
  iVar3 = iVar5;
  iVar4 = iVar5;
  if (param_9 == 0) {
    iVar5 = iVar9;
    iVar3 = param_5;
    iVar4 = param_6;
  }
  lVar12 = (longlong)iVar3;
  iVar9 = *(short *)(lVar2 + lVar12 * 2) * param_7;
  pfVar8 = (float *)(param_2 + (longlong)iVar9 * 4);
  pfVar7 = param_3;
  if (0 < iVar9) {
    pfVar7 = param_3 + iVar9;
    pfVar10 = param_3;
    for (uVar6 = (longlong)iVar9 & 0x3fffffffffffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pfVar10 = 0.0;
      pfVar10 = pfVar10 + 1;
    }
  }
  for (; lVar12 < iVar4; lVar12 = lVar12 + 1) {
    sVar1 = *(short *)(lVar2 + 2 + lVar12 * 2);
    iVar9 = *(short *)(lVar2 + lVar12 * 2) * param_7;
    fVar13 = *(float *)(param_4 + lVar12 * 4) + *(float *)(&unknown_var_9024_ptr + lVar12 * 4);
    if (32.0 <= fVar13) {
      fVar13 = 32.0;
    }
    dVar14 = (double)exp((double)fVar13 * 0.6931471805599453);
    do {
      iVar9 = iVar9 + 1;
      fVar13 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      *pfVar7 = (float)dVar14 * fVar13;
      pfVar7 = pfVar7 + 1;
    } while (iVar9 < sVar1 * param_7);
  }
                    // WARNING: Subroutine does not return
  memset(param_3 + iVar5,0,(longlong)(iVar11 - iVar5) << 2);
}





// 函数: void FUN_1807164b6(void *param_1)
void FUN_1807164b6(void *param_1)

{
  short sVar1;
  float *unaff_RBX;
  float *unaff_RSI;
  int iVar2;
  longlong unaff_R12;
  int unaff_R13D;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar3;
  double dVar4;
  longlong in_stack_00000090;
  longlong in_stack_00000098;
  int in_stack_000000a8;
  int in_stack_000000b0;
  
  do {
    sVar1 = *(short *)(unaff_R12 + 2 + unaff_R14 * 2);
    iVar2 = *(short *)(unaff_R12 + unaff_R14 * 2) * unaff_R13D;
    fVar3 = *(float *)(in_stack_00000098 + unaff_R14 * 4) + *(float *)(param_1 + unaff_R14 * 4);
    if (32.0 <= fVar3) {
      fVar3 = 32.0;
    }
    dVar4 = (double)exp((double)fVar3 * 0.6931471805599453);
    do {
      iVar2 = iVar2 + 1;
      fVar3 = *unaff_RSI;
      unaff_RSI = unaff_RSI + 1;
      *unaff_RBX = (float)dVar4 * fVar3;
      unaff_RBX = unaff_RBX + 1;
    } while (iVar2 < sVar1 * unaff_R13D);
    unaff_R14 = unaff_R14 + 1;
    param_1 = &unknown_var_9024_ptr;
  } while (unaff_R14 < unaff_R15);
                    // WARNING: Subroutine does not return
  memset(in_stack_00000090 + (longlong)in_stack_000000a8 * 4,0,
         (longlong)(in_stack_000000b0 - in_stack_000000a8) << 2);
}





// 函数: void FUN_180716572(void)
void FUN_180716572(void)

{
  longlong in_R9;
  int in_R10D;
  int unaff_R12D;
  
                    // WARNING: Subroutine does not return
  memset(in_R9 + (longlong)in_R10D * 4,0,(longlong)(unaff_R12D - in_R10D) << 2);
}





// 函数: void FUN_1807165a0(longlong param_1,int param_2,int param_3)
void FUN_1807165a0(longlong param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (0 < param_3) {
    param_2 = param_2 >> 1;
    iVar11 = 0;
    do {
      iVar8 = 0;
      if (3 < param_2) {
        lVar5 = (longlong)(iVar11 + param_3 * 3);
        lVar9 = (longlong)(iVar11 + param_3 * 4);
        lVar13 = (iVar11 + param_3) - lVar5;
        pfVar7 = (float *)(param_1 + lVar9 * 4);
        lVar12 = (iVar11 + param_3 * 5) - lVar5;
        pfVar4 = (float *)(param_1 + lVar5 * 4);
        lVar14 = (iVar11 + param_3 * 2) - lVar9;
        lVar5 = (param_3 * 7 + iVar11) - lVar5;
        lVar6 = (iVar11 + param_3 * 6) - lVar9;
        uVar3 = (param_2 - 4U >> 2) + 1;
        uVar10 = (ulonglong)uVar3;
        iVar8 = uVar3 * 4;
        do {
          fVar1 = pfVar4[lVar13];
          fVar2 = pfVar7[iVar11 - lVar9];
          pfVar7[iVar11 - lVar9] = fVar1 * 0.70710677 + fVar2 * 0.70710677;
          pfVar4[lVar13] = fVar2 * 0.70710677 - fVar1 * 0.70710677;
          fVar1 = *pfVar4;
          fVar2 = pfVar7[lVar14];
          pfVar7[lVar14] = fVar1 * 0.70710677 + fVar2 * 0.70710677;
          *pfVar4 = fVar2 * 0.70710677 - fVar1 * 0.70710677;
          fVar1 = pfVar4[lVar12];
          fVar2 = *pfVar7;
          *pfVar7 = fVar1 * 0.70710677 + fVar2 * 0.70710677;
          pfVar4[lVar12] = fVar2 * 0.70710677 - fVar1 * 0.70710677;
          fVar1 = pfVar4[lVar5];
          fVar2 = pfVar7[lVar6];
          pfVar7[lVar6] = fVar1 * 0.70710677 + fVar2 * 0.70710677;
          pfVar7 = pfVar7 + param_3 * 8;
          pfVar4[lVar5] = fVar2 * 0.70710677 - fVar1 * 0.70710677;
          pfVar4 = pfVar4 + param_3 * 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (iVar8 < param_2) {
        pfVar7 = (float *)(param_1 + (longlong)(iVar11 + iVar8 * param_3 * 2) * 4);
        uVar10 = (ulonglong)(uint)(param_2 - iVar8);
        pfVar4 = (float *)(param_1 + (longlong)((iVar8 * 2 + 1) * param_3 + iVar11) * 4);
        do {
          fVar1 = *pfVar4;
          fVar2 = *pfVar7;
          *pfVar7 = fVar1 * 0.70710677 + fVar2 * 0.70710677;
          pfVar7 = pfVar7 + param_3 * 2;
          *pfVar4 = fVar2 * 0.70710677 - fVar1 * 0.70710677;
          pfVar4 = pfVar4 + param_3 * 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_3);
  }
  return;
}





// 函数: void FUN_1807165be(longlong param_1,uint64_t param_2,int param_3,uint64_t param_4,
void FUN_1807165be(longlong param_1,uint64_t param_2,int param_3,uint64_t param_4,
                  uint64_t param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  int unaff_ESI;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float in_XMM4_Da;
  
  iVar8 = unaff_ESI >> 1;
  iVar12 = 0;
  do {
    iVar9 = 0;
    if (3 < iVar8) {
      lVar5 = (longlong)(iVar12 + param_3 * 3);
      lVar10 = (longlong)(iVar12 + param_3 * 4);
      lVar14 = (iVar12 + param_3) - lVar5;
      pfVar7 = (float *)(param_1 + lVar10 * 4);
      lVar13 = (iVar12 + param_3 * 5) - lVar5;
      pfVar4 = (float *)(param_1 + lVar5 * 4);
      lVar15 = (iVar12 + param_3 * 2) - lVar10;
      lVar5 = (param_3 * 7 + iVar12) - lVar5;
      lVar6 = (iVar12 + param_3 * 6) - lVar10;
      uVar3 = (iVar8 - 4U >> 2) + 1;
      uVar11 = (ulonglong)uVar3;
      iVar9 = uVar3 * 4;
      do {
        fVar1 = pfVar4[lVar14];
        fVar2 = pfVar7[iVar12 - lVar10];
        pfVar7[iVar12 - lVar10] = fVar1 * in_XMM4_Da + fVar2 * in_XMM4_Da;
        pfVar4[lVar14] = fVar2 * in_XMM4_Da - fVar1 * in_XMM4_Da;
        fVar1 = *pfVar4;
        fVar2 = pfVar7[lVar15];
        pfVar7[lVar15] = fVar1 * in_XMM4_Da + fVar2 * in_XMM4_Da;
        *pfVar4 = fVar2 * in_XMM4_Da - fVar1 * in_XMM4_Da;
        fVar1 = pfVar4[lVar13];
        fVar2 = *pfVar7;
        *pfVar7 = fVar1 * in_XMM4_Da + fVar2 * in_XMM4_Da;
        pfVar4[lVar13] = fVar2 * in_XMM4_Da - fVar1 * in_XMM4_Da;
        fVar1 = pfVar4[lVar5];
        fVar2 = pfVar7[lVar6];
        pfVar7[lVar6] = fVar1 * in_XMM4_Da + fVar2 * in_XMM4_Da;
        pfVar7 = pfVar7 + param_3 * 8;
        pfVar4[lVar5] = fVar2 * in_XMM4_Da - fVar1 * in_XMM4_Da;
        pfVar4 = pfVar4 + param_3 * 8;
        uVar11 = uVar11 - 1;
        param_1 = param_6;
      } while (uVar11 != 0);
    }
    if (iVar9 < iVar8) {
      pfVar7 = (float *)(param_1 + (longlong)(iVar12 + iVar9 * param_3 * 2) * 4);
      uVar11 = (ulonglong)(uint)(iVar8 - iVar9);
      pfVar4 = (float *)(param_1 + (longlong)((iVar9 * 2 + 1) * param_3 + iVar12) * 4);
      do {
        fVar1 = *pfVar4;
        fVar2 = *pfVar7;
        *pfVar7 = fVar1 * in_XMM4_Da + fVar2 * in_XMM4_Da;
        pfVar7 = pfVar7 + param_3 * 2;
        *pfVar4 = fVar2 * in_XMM4_Da - fVar1 * in_XMM4_Da;
        pfVar4 = pfVar4 + param_3 * 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < param_3);
  return;
}





// 函数: void FUN_1807167d3(void)
void FUN_1807167d3(void)

{
  return;
}



int FUN_1807167e0(float param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  
  lVar2 = (longlong)param_5;
  iVar1 = 0;
  lVar5 = (longlong)param_4;
  lVar3 = 0;
  if (3 < lVar5) {
    pfVar4 = (float *)(param_2 + 8);
    do {
      if (param_1 < pfVar4[-2]) goto LAB_180716845;
      if (param_1 < pfVar4[-1]) {
        iVar1 = iVar1 + 1;
        goto LAB_180716845;
      }
      if (param_1 < *pfVar4) {
        iVar1 = iVar1 + 2;
        goto LAB_180716845;
      }
      if (param_1 < pfVar4[1]) {
        iVar1 = iVar1 + 3;
        goto LAB_180716845;
      }
      iVar1 = iVar1 + 4;
      lVar3 = lVar3 + 4;
      pfVar4 = pfVar4 + 4;
    } while (lVar3 < lVar5 + -3);
  }
  for (; (lVar3 < lVar5 && (*(float *)(param_2 + lVar3 * 4) <= param_1)); lVar3 = lVar3 + 1) {
    iVar1 = iVar1 + 1;
  }
LAB_180716845:
  if ((param_5 < iVar1) &&
     (param_1 < *(float *)(param_2 + lVar2 * 4) + *(float *)(param_3 + lVar2 * 4))) {
    return param_5;
  }
  if ((iVar1 < param_5) &&
     (*(float *)(param_2 + -4 + lVar2 * 4) - *(float *)(param_3 + -4 + lVar2 * 4) < param_1)) {
    iVar1 = param_5;
  }
  return iVar1;
}





// 函数: void FUN_180716890(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
void FUN_180716890(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar17;
  
  lVar14 = (longlong)(int)param_6;
  fVar3 = *(float *)(param_4 + (longlong)param_5 * 4);
  fVar21 = *(float *)(param_4 + (longlong)(*(int *)(param_1 + 8) + param_5) * 4);
  uVar17 = 0;
  uVar16 = 0;
  fVar20 = 1.0 / (SQRT(fVar3 * fVar3 + 1e-15 + fVar21 * fVar21) + 1e-15);
  fVar21 = fVar20 * fVar21;
  fVar20 = fVar20 * fVar3;
  if ((0 < (int)param_6) && (0xf < param_6)) {
    uVar12 = param_6 & 0x8000000f;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffff0) + 1;
    }
    lVar13 = param_3 - param_2;
    pfVar11 = (float *)(param_2 + 0x10);
    uVar19 = uVar17;
    do {
      uVar16 = (int)uVar17 + 0x10;
      uVar17 = (ulonglong)uVar16;
      uVar19 = uVar19 + 0x10;
      pfVar2 = (float *)(lVar13 + -0x10 + (longlong)pfVar11);
      fVar3 = pfVar2[1];
      fVar4 = pfVar2[2];
      fVar5 = pfVar2[3];
      pfVar1 = (float *)(lVar13 + (longlong)pfVar11);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar11[-4] = *pfVar2 * fVar21 + pfVar11[-4] * fVar20;
      pfVar11[-3] = fVar3 * fVar21 + pfVar11[-3] * fVar20;
      pfVar11[-2] = fVar4 * fVar21 + pfVar11[-2] * fVar20;
      pfVar11[-1] = fVar5 * fVar21 + pfVar11[-1] * fVar20;
      pfVar1 = (float *)(lVar13 + 0x10 + (longlong)pfVar11);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar10 = pfVar1[3];
      *pfVar11 = fVar6 * fVar21 + *pfVar11 * fVar20;
      pfVar11[1] = fVar7 * fVar21 + pfVar11[1] * fVar20;
      pfVar11[2] = fVar8 * fVar21 + pfVar11[2] * fVar20;
      pfVar11[3] = fVar9 * fVar21 + pfVar11[3] * fVar20;
      pfVar11[4] = fVar3 * fVar21 + pfVar11[4] * fVar20;
      pfVar11[5] = fVar4 * fVar21 + pfVar11[5] * fVar20;
      pfVar11[6] = fVar5 * fVar21 + pfVar11[6] * fVar20;
      pfVar11[7] = fVar10 * fVar21 + pfVar11[7] * fVar20;
      pfVar1 = (float *)(lVar13 + 0x20 + (longlong)pfVar11);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar11[8] = *pfVar1 * fVar21 + pfVar11[8] * fVar20;
      pfVar11[9] = fVar3 * fVar21 + pfVar11[9] * fVar20;
      pfVar11[10] = fVar4 * fVar21 + pfVar11[10] * fVar20;
      pfVar11[0xb] = fVar5 * fVar21 + pfVar11[0xb] * fVar20;
      pfVar11 = pfVar11 + 0x10;
    } while ((longlong)uVar19 < (longlong)(int)(param_6 - uVar12));
  }
  lVar13 = (longlong)(int)uVar16;
  if (lVar13 < lVar14) {
    if (3 < lVar14 - lVar13) {
      pfVar11 = (float *)(param_2 + 4 + lVar13 * 4);
      lVar18 = param_3 - param_2;
      lVar15 = ((lVar14 - lVar13) - 4U >> 2) + 1;
      lVar13 = lVar13 + lVar15 * 4;
      do {
        fVar3 = *(float *)(lVar18 + (longlong)pfVar11);
        pfVar11[-1] = fVar21 * *(float *)(lVar18 + -4 + (longlong)pfVar11) + fVar20 * pfVar11[-1];
        fVar4 = *(float *)(lVar18 + 4 + (longlong)pfVar11);
        *pfVar11 = fVar21 * fVar3 + fVar20 * *pfVar11;
        fVar3 = *(float *)(lVar18 + 8 + (longlong)pfVar11);
        pfVar11[1] = fVar21 * fVar4 + fVar20 * pfVar11[1];
        pfVar11[2] = fVar21 * fVar3 + fVar20 * pfVar11[2];
        pfVar11 = pfVar11 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (lVar13 < lVar14) {
      pfVar11 = (float *)(param_2 + lVar13 * 4);
      lVar14 = lVar14 - lVar13;
      do {
        *pfVar11 = fVar21 * *(float *)((param_3 - param_2) + (longlong)pfVar11) + fVar20 * *pfVar11;
        pfVar11 = pfVar11 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180716aa0(uint64_t param_1,int param_2,int param_3)
void FUN_180716aa0(uint64_t param_1,int param_2,int param_3)

{
  int8_t auStack_58 [32];
  longlong lStack_38;
  ulonglong uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_58;
  lStack_38 = (longlong)(param_2 * param_3) * 4;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180716da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
void FUN_180716da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  
  iVar15 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar10 = 0;
  do {
    lVar13 = 0;
    if (0 < (longlong)param_5) {
      iVar14 = *(int *)(param_1 + 8) * iVar15;
      do {
        fVar16 = 1.0 / (*(float *)(param_4 + (longlong)iVar14 * 4) + 1e-27);
        lVar12 = (longlong)(*(short *)(lVar3 + lVar13 * 2) * param_7);
        lVar9 = (longlong)(*(short *)(lVar3 + 2 + lVar13 * 2) * param_7);
        if (lVar12 < lVar9) {
          if (3 < lVar9 - lVar12) {
            lVar8 = (longlong)iVar10 + 1 + lVar12;
            lVar11 = ((lVar9 - lVar12) - 4U >> 2) + 1;
            lVar12 = lVar12 + lVar11 * 4;
            pfVar7 = (float *)(param_3 + lVar8 * 4);
            do {
              pfVar1 = (float *)((param_2 - param_3) + -4 + (longlong)pfVar7);
              fVar4 = pfVar1[1];
              fVar5 = pfVar1[2];
              fVar6 = pfVar1[3];
              pfVar7[-1] = *pfVar1 * fVar16;
              *pfVar7 = fVar4 * fVar16;
              pfVar7[1] = fVar5 * fVar16;
              pfVar7[2] = fVar6 * fVar16;
              lVar11 = lVar11 + -1;
              pfVar7 = pfVar7 + 4;
            } while (lVar11 != 0);
          }
          if (lVar12 < lVar9) {
            lVar9 = lVar9 - lVar12;
            pfVar7 = (float *)(param_3 + (iVar10 + lVar12) * 4);
            do {
              *pfVar7 = fVar16 * *(float *)((param_2 - param_3) + -4 + (longlong)(pfVar7 + 1));
              lVar9 = lVar9 + -1;
              pfVar7 = pfVar7 + 1;
            } while (lVar9 != 0);
          }
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < param_5);
    }
    iVar15 = iVar15 + 1;
    iVar10 = iVar10 + iVar2 * param_7;
  } while (iVar15 < param_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



