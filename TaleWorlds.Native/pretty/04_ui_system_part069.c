#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part069.c - 6 个函数

// 函数: void FUN_180700fc3(int32_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180700fc3(int32_t param_1,uint64_t param_2,int64_t param_3)

{
  float fVar1;
  int in_EAX;
  uint uVar2;
  float *pfVar3;
  int64_t unaff_RBX;
  int iVar4;
  int iVar5;
  uint64_t unaff_RSI;
  int iVar6;
  int64_t unaff_RDI;
  float *pfVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int unaff_R12D;
  float *unaff_R13;
  int iVar12;
  uint64_t unaff_R15;
  float fVar13;
  float fVar14;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  int64_t in_stack_000000a0;
  uint in_stack_000000b0;
  uint in_stack_000000c0;
  float *in_stack_000000d0;
  int in_stack_000000d8;
  
  iVar4 = in_EAX / (int)unaff_RSI;
  if ((int)unaff_RSI != 1) {
                    // WARNING: Subroutine does not return
    memset(param_1,0,unaff_R15 * 4);
  }
  iVar12 = 0;
  iVar6 = (int)unaff_RDI;
  if (3 < iVar4) {
    lVar11 = (int64_t)(iVar6 * 2);
    pfVar3 = (float *)(unaff_RBX + 8);
    pfVar7 = (float *)(param_3 + lVar11 * 4);
    uVar2 = (iVar4 - 4U >> 2) + 1;
    uVar9 = (uint64_t)uVar2;
    iVar12 = uVar2 * 4;
    do {
      fVar14 = pfVar7[unaff_RDI - lVar11];
      pfVar3[-2] = pfVar7[-lVar11] * 32768.0;
      fVar13 = *pfVar7;
      pfVar3[unaff_RSI - 2] = fVar14 * 32768.0;
      fVar14 = pfVar7[iVar6 * 3 - lVar11];
      pfVar7 = pfVar7 + iVar6 * 4;
      *pfVar3 = fVar13 * 32768.0;
      pfVar3[1] = fVar14 * 32768.0;
      pfVar3 = pfVar3 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    unaff_RSI = (uint64_t)in_stack_000000c0;
    unaff_R15 = (uint64_t)in_stack_000000b0;
    unaff_R13 = in_stack_000000d0;
    unaff_R12D = in_stack_000000d8;
  }
  lVar11 = 0;
  iVar5 = (int)unaff_RSI;
  if (iVar12 < iVar4) {
    pfVar3 = (float *)(unaff_RBX + (int64_t)(iVar12 * iVar5) * 4);
    uVar9 = (uint64_t)(uint)(iVar4 - iVar12);
    pfVar7 = (float *)(in_stack_000000a0 + (int64_t)(iVar12 * iVar6) * 4);
    do {
      fVar14 = *pfVar7;
      pfVar7 = pfVar7 + unaff_RDI;
      *pfVar3 = fVar14 * 32768.0;
      pfVar3 = pfVar3 + iVar5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (unaff_R12D != 0) {
    iVar12 = 0;
    if (3 < iVar4) {
      lVar8 = (int64_t)(iVar5 * 2);
      lVar10 = iVar5 * 3 - lVar8;
      pfVar3 = (float *)(unaff_RBX + lVar8 * 4);
      uVar2 = (iVar4 - 4U >> 2) + 1;
      uVar9 = (uint64_t)uVar2;
      iVar12 = uVar2 * 4;
      do {
        fVar14 = pfVar3[-lVar8];
        if (65536.0 <= fVar14) {
          fVar14 = 65536.0;
        }
        if (fVar14 < -65536.0) {
          fVar14 = -65536.0;
        }
        pfVar3[-lVar8] = fVar14;
        fVar14 = pfVar3[iVar5 - lVar8];
        if (65536.0 <= fVar14) {
          fVar14 = 65536.0;
        }
        if (fVar14 < -65536.0) {
          fVar14 = -65536.0;
        }
        pfVar3[iVar5 - lVar8] = fVar14;
        fVar14 = *pfVar3;
        if (65536.0 <= fVar14) {
          fVar14 = 65536.0;
        }
        if (fVar14 < -65536.0) {
          fVar14 = -65536.0;
        }
        *pfVar3 = fVar14;
        fVar14 = pfVar3[lVar10];
        if (65536.0 <= fVar14) {
          fVar14 = 65536.0;
        }
        if (fVar14 < -65536.0) {
          fVar14 = -65536.0;
        }
        pfVar3[lVar10] = fVar14;
        pfVar3 = pfVar3 + iVar5 * 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (iVar12 < iVar4) {
      pfVar3 = (float *)(unaff_RBX + (int64_t)(iVar12 * iVar5) * 4);
      uVar9 = (uint64_t)(uint)(iVar4 - iVar12);
      do {
        fVar14 = *pfVar3;
        if (65536.0 <= fVar14) {
          fVar14 = 65536.0;
        }
        if (fVar14 < -65536.0) {
          fVar14 = -65536.0;
        }
        *pfVar3 = fVar14;
        pfVar3 = pfVar3 + iVar5;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  lVar8 = (int64_t)(int)unaff_R15;
  if (3 < lVar8) {
    pfVar3 = (float *)(unaff_RBX + 8);
    lVar10 = (lVar8 - 4U >> 2) + 1;
    lVar11 = lVar10 * 4;
    do {
      fVar14 = pfVar3[-2];
      fVar13 = pfVar3[-1];
      pfVar3[-2] = fVar14 - unaff_XMM6_Da;
      fVar1 = *pfVar3;
      pfVar3[-1] = fVar13 - fVar14 * unaff_XMM7_Da;
      *pfVar3 = fVar1 - fVar13 * unaff_XMM7_Da;
      unaff_XMM6_Da = pfVar3[1] * unaff_XMM7_Da;
      pfVar3[1] = pfVar3[1] - fVar1 * unaff_XMM7_Da;
      pfVar3 = pfVar3 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  for (; lVar11 < lVar8; lVar11 = lVar11 + 1) {
    fVar14 = *(float *)(unaff_RBX + lVar11 * 4);
    fVar13 = fVar14 - unaff_XMM6_Da;
    unaff_XMM6_Da = fVar14 * unaff_XMM7_Da;
    *(float *)(unaff_RBX + lVar11 * 4) = fVar13;
  }
  *unaff_R13 = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180701270(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180701270(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t unaff_RBX;
  float *unaff_R13;
  float fVar6;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  pfVar3 = (float *)(unaff_RBX + 8);
  lVar4 = (param_3 - 4U >> 2) + 1;
  lVar5 = lVar4 * 4;
  do {
    fVar1 = pfVar3[-2];
    fVar6 = pfVar3[-1];
    pfVar3[-2] = fVar1 - unaff_XMM6_Da;
    fVar2 = *pfVar3;
    pfVar3[-1] = fVar6 - fVar1 * unaff_XMM7_Da;
    *pfVar3 = fVar2 - fVar6 * unaff_XMM7_Da;
    unaff_XMM6_Da = pfVar3[1] * unaff_XMM7_Da;
    pfVar3[1] = pfVar3[1] - fVar2 * unaff_XMM7_Da;
    pfVar3 = pfVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  for (; lVar5 < param_3; lVar5 = lVar5 + 1) {
    fVar1 = *(float *)(unaff_RBX + lVar5 * 4);
    fVar6 = fVar1 - unaff_XMM6_Da;
    unaff_XMM6_Da = fVar1 * unaff_XMM7_Da;
    *(float *)(unaff_RBX + lVar5 * 4) = fVar6;
  }
  *unaff_R13 = unaff_XMM6_Da;
  return;
}





// 函数: void FUN_180701330(int64_t param_1,int param_2,int64_t param_3,int64_t param_4,int param_5,
void FUN_180701330(int64_t param_1,int param_2,int64_t param_3,int64_t param_4,int param_5,
                  int param_6,int param_7,int param_8,int32_t param_9)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int64_t lVar11;
  int iVar12;
  float fVar13;
  int iStack_58;
  int iStack_54;
  
  iVar7 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(param_1 + 0x28);
  if (param_2 == 0) {
    iVar10 = *(int *)(param_1 + 0x28) - param_7;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (param_2 == 0) {
    param_2 = 1;
    iVar1 = *(int *)(param_1 + 0x30) << ((byte)param_7 & 0x1f);
  }
  iStack_58 = 0;
  iVar12 = param_2 * iVar1;
  iStack_54 = 0;
  do {
    iVar6 = 0;
    if (0 < param_2) {
      lVar8 = param_4 + (int64_t)iStack_54 * 4;
      do {
        FUN_180711810(param_1 + 0x50,
                      param_3 + ((int64_t)(iVar1 * iVar6) +
                                (int64_t)((iVar12 + iVar7) * iStack_58)) * 4,lVar8,
                      *(uint64_t *)(param_1 + 0x48),iVar7,iVar10,param_2,param_9);
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 4;
      } while (iVar6 < param_2);
    }
    iStack_58 = iStack_58 + 1;
    iStack_54 = iStack_54 + iVar12;
  } while (iStack_58 < param_6);
  if ((param_6 == 2) && (param_5 == 1)) {
    iVar7 = 0;
    lVar9 = (int64_t)iVar12;
    lVar8 = 0;
    if (3 < lVar9) {
      pfVar5 = (float *)(param_4 + 8);
      lVar11 = (lVar9 - 4U >> 2) + 1;
      iVar7 = (int)lVar11 * 4;
      lVar8 = lVar11 * 4;
      iVar10 = iVar12;
      do {
        lVar2 = (int64_t)iVar10;
        iVar10 = iVar10 + 4;
        pfVar5[-2] = (*(float *)(param_4 + lVar2 * 4) + pfVar5[-2]) * 0.5;
        pfVar5[-1] = (*(float *)(param_4 + 4 + lVar2 * 4) + pfVar5[-1]) * 0.5;
        *pfVar5 = (*(float *)(param_4 + 8 + lVar2 * 4) + *pfVar5) * 0.5;
        pfVar5[1] = (*(float *)(param_4 + 0xc + lVar2 * 4) + pfVar5[1]) * 0.5;
        pfVar5 = pfVar5 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (lVar8 < lVar9) {
      iVar7 = iVar12 + iVar7;
      do {
        lVar11 = (int64_t)iVar7;
        iVar7 = iVar7 + 1;
        *(float *)(param_4 + lVar8 * 4) =
             (*(float *)(param_4 + lVar11 * 4) + *(float *)(param_4 + lVar8 * 4)) * 0.5;
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar9);
    }
  }
  if (param_8 != 1) {
    iVar10 = iVar12 / param_8;
    iVar7 = 0;
    if (3 < iVar10) {
      uVar4 = (iVar10 - 4U >> 2) + 1;
      fVar13 = (float)param_8;
      uVar3 = (uint64_t)uVar4;
      iVar7 = uVar4 * 4;
      pfVar5 = (float *)(param_4 + 8);
      do {
        pfVar5[-2] = pfVar5[-2] * fVar13;
        pfVar5[-1] = pfVar5[-1] * fVar13;
        *pfVar5 = *pfVar5 * fVar13;
        pfVar5[1] = pfVar5[1] * fVar13;
        uVar3 = uVar3 - 1;
        pfVar5 = pfVar5 + 4;
      } while (uVar3 != 0);
    }
    if (iVar7 < iVar10) {
      uVar3 = (uint64_t)(uint)(iVar10 - iVar7);
      pfVar5 = (float *)(param_4 + (int64_t)iVar7 * 4);
      do {
        *pfVar5 = (float)param_8 * *pfVar5;
        uVar3 = uVar3 - 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar3 != 0);
    }
                    // WARNING: Subroutine does not return
    memset(param_4 + (int64_t)iVar10 * 4,0,(int64_t)(iVar12 - iVar10) << 2);
  }
  return;
}



int FUN_180701650(int64_t param_1,int *param_2,int param_3,byte param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,float param_10,int param_11,float param_12,
                 int param_13,float param_14,int param_15,int param_16,float param_17,float param_18
                 )

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 8);
  if (param_6 != 0) {
    iVar2 = param_6;
  }
  iVar4 = (int)*(short *)(lVar1 + (int64_t)iVar2 * 2) << (param_4 & 0x1f);
  if (param_7 == 2) {
    iVar3 = iVar2;
    if (param_8 < iVar2) {
      iVar3 = param_8;
    }
    iVar4 = iVar4 + ((int)*(short *)(lVar1 + (int64_t)iVar3 * 2) << (param_4 & 0x1f));
  }
  iVar3 = param_3;
  if ((*param_2 != 0) && ((float)param_2[4] < 0.4)) {
    iVar3 = param_3 - (int)((0.4 - (float)param_2[4]) * (float)(iVar4 * 8));
  }
  if (param_7 == 2) {
    if (1.0 <= param_10) {
      param_10 = 1.0;
    }
    if (param_8 < iVar2) {
      iVar2 = param_8;
    }
    iVar2 = ((int)*(short *)(lVar1 + (int64_t)iVar2 * 2) << (param_4 & 0x1f)) - iVar2;
    fVar6 = (param_10 - 0.1) * (float)(iVar2 * 8);
    fVar5 = (((float)iVar2 * 0.8) / (float)iVar4) * (float)iVar3;
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
    iVar3 = iVar3 - (int)fVar6;
  }
  iVar3 = iVar3 + (param_11 - (0x13 << (param_4 & 0x1f)));
  iVar3 = iVar3 + (int)((param_12 - 0.044) * (float)iVar3);
  if ((*param_2 != 0) && (param_15 == 0)) {
    fVar6 = (float)param_2[1] - 0.15;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    iVar3 = iVar3 - (int)((fVar6 - 0.12) * (float)(iVar4 * 8) * -1.2);
    if (param_13 != 0) {
      iVar3 = iVar3 + (int)((float)(iVar4 * 8) * 0.8);
    }
  }
  if ((param_16 != 0) && (param_15 == 0)) {
    iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    iVar3 = (int)((float)(iVar4 * 8) * param_17) + iVar3;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
  }
  iVar4 = (int)((float)(((int)*(short *)(lVar1 + -4 + (int64_t)*(int *)(param_1 + 8) * 2) <<
                        (param_4 & 0x1f)) * param_7 * 8) * param_14);
  iVar2 = iVar3 >> 2;
  if (iVar3 >> 2 < iVar4) {
    iVar2 = iVar4;
  }
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  if (((param_16 == 0) || (param_15 != 0)) && (param_9 != 0)) {
    iVar2 = param_3 - (int)((float)(iVar2 - param_3) * -0.67);
  }
  if ((param_16 == 0) && (param_12 < 0.2)) {
    param_5 = 96000 - param_5;
    if (param_5 < 0x7d01) {
      if (param_5 < 0) {
        param_5 = 0;
      }
    }
    else {
      param_5 = 32000;
    }
    iVar2 = iVar2 + (int)((float)param_5 * 3.1e-06 * param_18 * (float)iVar2);
  }
  iVar4 = param_3 * 2;
  if (iVar2 <= param_3 * 2) {
    iVar4 = iVar2;
  }
  return iVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180701920(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)
void FUN_180701920(uint64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4)

{
  int32_t uStack_f8;
  int32_t uStack_f4;
  uint64_t uStack_e0;
  uint64_t uStack_d0;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_f8;
  uStack_d0 = 0;
  uStack_f8 = param_4;
  uStack_f4 = param_3;
  uStack_e0 = param_1;
                    // WARNING: Subroutine does not return
  SystemCore_MemoryManager0(0xffffffffffffff0);
}



float FUN_180702f80(int64_t param_1,uint param_2,int param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar11;
  
  uVar9 = 0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  uVar10 = 0;
  fVar16 = 0.0;
  if ((0 < (int)param_2) && (fVar16 = fVar12, 7 < param_2)) {
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    uVar5 = param_2 & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    uVar11 = uVar9;
    do {
      pfVar4 = (float *)(param_1 + uVar9 * 4);
      uVar10 = (int)uVar11 + 8;
      uVar11 = (uint64_t)uVar10;
      fVar16 = fVar16 + ABS(*pfVar4);
      fVar17 = fVar17 + ABS(pfVar4[1]);
      fVar18 = fVar18 + ABS(pfVar4[2]);
      fVar19 = fVar19 + ABS(pfVar4[3]);
      pfVar4 = (float *)(param_1 + 0x10 + uVar9 * 4);
      uVar9 = uVar9 + 8;
      fVar12 = fVar12 + ABS(*pfVar4);
      fVar13 = fVar13 + ABS(pfVar4[1]);
      fVar14 = fVar14 + ABS(pfVar4[2]);
      fVar15 = fVar15 + ABS(pfVar4[3]);
    } while ((int64_t)uVar9 < (int64_t)(int)(param_2 - uVar5));
    fVar16 = fVar18 + fVar14 + fVar16 + fVar12 + fVar19 + fVar15 + fVar17 + fVar13;
  }
  lVar6 = (int64_t)(int)uVar10;
  lVar8 = (int64_t)(int)param_2;
  if (lVar6 < lVar8) {
    if (3 < lVar8 - lVar6) {
      pfVar4 = (float *)(param_1 + 8 + lVar6 * 4);
      lVar7 = ((lVar8 - lVar6) - 4U >> 2) + 1;
      lVar6 = lVar6 + lVar7 * 4;
      do {
        pfVar1 = pfVar4 + -2;
        pfVar2 = pfVar4 + -1;
        fVar12 = *pfVar4;
        pfVar3 = pfVar4 + 1;
        pfVar4 = pfVar4 + 4;
        fVar16 = ABS(*pfVar1) + fVar16 + ABS(*pfVar2) + ABS(fVar12) + ABS(*pfVar3);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    for (; lVar6 < lVar8; lVar6 = lVar6 + 1) {
      fVar16 = fVar16 + ABS(*(float *)(param_1 + lVar6 * 4));
    }
  }
  return ((float)param_3 * param_4 + 1.0) * fVar16;
}



uint64_t FUN_1807030d0(int64_t *param_1,int param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uStackX_18;
  
  uStackX_18 = (uint)param_3;
  if (0x2712 < param_2) {
    switch(param_2) {
    case 0x2718:
      if (uStackX_18 - 1 < 2) {
        *(uint *)((int64_t)param_1 + 0xc) = uStackX_18;
        return 0;
      }
      break;
    default:
      goto LAB_180703442;
    case 0x271a:
      if ((-1 < (int)uStackX_18) && ((int)uStackX_18 < *(int *)(*param_1 + 8))) {
        *(uint *)((int64_t)param_1 + 0x24) = uStackX_18;
        return 0;
      }
      break;
    case 0x271c:
      if ((0 < (int)uStackX_18) && ((int)uStackX_18 <= *(int *)(*param_1 + 8))) {
        *(uint *)(param_1 + 5) = uStackX_18;
        return 0;
      }
      break;
    case 0x271f:
      if (param_3 != (int64_t *)0x0) {
        *param_3 = *param_1;
        return 0;
      }
      break;
    case 0x2720:
      *(uint *)((int64_t)param_1 + 0x34) = uStackX_18;
      return 0;
    case 0x2726:
      if (param_3 == (int64_t *)0x0) {
        return 0;
      }
      lVar1 = param_3[1];
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      *(int64_t *)((int64_t)param_1 + 0x7c) = *param_3;
      *(int64_t *)((int64_t)param_1 + 0x84) = lVar1;
      lVar4 = param_3[4];
      lVar5 = param_3[5];
      *(int64_t *)((int64_t)param_1 + 0x8c) = lVar2;
      *(int64_t *)((int64_t)param_1 + 0x94) = lVar3;
      lVar1 = param_3[6];
      *(int64_t *)((int64_t)param_1 + 0x9c) = lVar4;
      *(int64_t *)((int64_t)param_1 + 0xa4) = lVar5;
      *(int64_t *)((int64_t)param_1 + 0xac) = lVar1;
      return 0;
    case 0x2728:
      *(uint *)((int64_t)param_1 + 0x44) = uStackX_18;
      return 0;
    case 0x272a:
      param_1[0x1d] = (int64_t)param_3;
      return 0;
    case 0x272c:
      if (param_3 == (int64_t *)0x0) {
        return 0;
      }
      *(int64_t *)((int64_t)param_1 + 0xb4) = *param_3;
      return 0;
    }
    return 0xffffffff;
  }
  if (param_2 == 0x2712) {
    if (2 < uStackX_18) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 3) = (uint)((int)uStackX_18 < 2);
    *(uint *)(param_1 + 2) = (uint)(uStackX_18 == 0);
    return 0;
  }
  switch(param_2) {
  case 0xfa2:
    if (((int)uStackX_18 < 0x1f5) && (uStackX_18 != 0xffffffff)) {
      return 0xffffffff;
    }
    uVar6 = (int)param_1[1] * 260000;
    if ((int)uStackX_18 < (int)uVar6) {
      uVar6 = uStackX_18;
    }
    *(uint *)((int64_t)param_1 + 0x2c) = uVar6;
    return 0;
  case 0xfa6:
    *(uint *)(param_1 + 6) = uStackX_18;
    return 0;
  case 0xfaa:
    if (10 < uStackX_18) {
      return 0xffffffff;
    }
    *(uint *)((int64_t)param_1 + 0x1c) = uStackX_18;
    return 0;
  case 0xfae:
    if (100 < uStackX_18) {
      return 0xffffffff;
    }
    *(uint *)((int64_t)param_1 + 0x3c) = uStackX_18;
    return 0;
  case 0xfb4:
    *(uint *)(param_1 + 7) = uStackX_18;
    return 0;
  case 0xfbc:
                    // WARNING: Subroutine does not return
    memset(param_1 + 10,0,
           (int64_t)
           ((*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) + 0x100) * 4) * (int)param_1[1] * 4 +
           0xf4) + -0x50);
  case 0xfbf:
    if (param_3 == (int64_t *)0x0) {
      return 0xffffffff;
    }
    *(int *)param_3 = (int)param_1[10];
    return 0;
  case 0xfc4:
    if (0x10 < uStackX_18 - 8) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 8) = uStackX_18;
    return 0;
  case 0xfc5:
    *(int *)param_3 = (int)param_1[8];
    return 0;
  case 0xfce:
    if (1 < uStackX_18) {
      return 0xffffffff;
    }
    *(uint *)(param_1 + 9) = uStackX_18;
    return 0;
  case 0xfcf:
    if (param_3 == (int64_t *)0x0) {
      return 0xffffffff;
    }
    *(int *)param_3 = (int)param_1[9];
    return 0;
  }
LAB_180703442:
  return 0xfffffffb;
}





// 函数: void FUN_180703200(void)
void FUN_180703200(void)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int in_R9D;
  
                    // WARNING: Subroutine does not return
  memset(unaff_RBX + 0x50,0,
         (int64_t)((*(int *)(in_RAX + 4) + (*(int *)(in_RAX + 8) + 0x100) * 4) * in_R9D * 4 + 0xf4)
         + -0x50);
}



uint64_t FUN_1807032d3(uint64_t param_1,uint64_t param_2,uint64_t *param_3)

{
  int64_t unaff_RBX;
  
  if ((int32_t *)*param_3 != (int32_t *)0x0) {
    *(int32_t *)*param_3 = *(int32_t *)(unaff_RBX + 0x50);
    return 0;
  }
  return 0xffffffff;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180703510(int64_t param_1,int64_t param_2,int param_3,int param_4,int param_5,int param_6
void FUN_180703510(int64_t param_1,int64_t param_2,int param_3,int param_4,int param_5,int param_6
                  )

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iVar11;
  int64_t lVar12;
  float fVar13;
  float in_XMM1_Da;
  float fVar14;
  float in_XMM2_Da;
  int aiStack_b8 [2];
  float afStack_b0 [30];
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_b8;
  lVar10 = (int64_t)param_4;
  iVar8 = param_4 + 1;
  if (param_6 == 1) {
    lVar12 = (int64_t)param_5;
    lVar9 = (int64_t)iVar8;
    afStack_b0[lVar10 + 2] = *(float *)(param_2 + lVar10 * 4);
    if (lVar9 < lVar12) {
      if (3 < lVar12 - lVar9) {
        lVar7 = -param_2;
        pfVar3 = (float *)(param_2 + 4 + lVar9 * 4);
        lVar6 = ((lVar12 - lVar9) - 4U >> 2) + 1;
        lVar9 = lVar9 + lVar6 * 4;
        do {
          fVar13 = *(float *)((int64_t)afStack_b0 + lVar7 + (int64_t)pfVar3) - 1.0;
          if (fVar13 <= pfVar3[-1]) {
            fVar13 = pfVar3[-1];
          }
          *(float *)((int64_t)afStack_b0 + lVar7 + 4 + (int64_t)pfVar3) = fVar13;
          fVar14 = fVar13 - 1.0;
          if (fVar13 - 1.0 <= *pfVar3) {
            fVar14 = *pfVar3;
          }
          *(float *)((int64_t)afStack_b0 + lVar7 + 8 + (int64_t)pfVar3) = fVar14;
          fVar13 = fVar14 - 1.0;
          if (fVar14 - 1.0 <= pfVar3[1]) {
            fVar13 = pfVar3[1];
          }
          *(float *)((int64_t)afStack_b0 + (0xc - param_2) + (int64_t)pfVar3) = fVar13;
          fVar14 = fVar13 - 1.0;
          if (fVar13 - 1.0 <= pfVar3[2]) {
            fVar14 = pfVar3[2];
          }
          *(float *)((int64_t)afStack_b0 + (0x10 - param_2) + (int64_t)pfVar3) = fVar14;
          pfVar3 = pfVar3 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar9 < lVar12) {
        pfVar3 = (float *)(param_2 + lVar9 * 4);
        lVar12 = lVar12 - lVar9;
        do {
          fVar13 = *(float *)((int64_t)pfVar3 + (int64_t)afStack_b0 + -param_2 + 4) - 1.0;
          if (fVar13 <= *pfVar3) {
            fVar13 = *pfVar3;
          }
          *(float *)((int64_t)pfVar3 + (int64_t)afStack_b0 + -param_2 + 8) = fVar13;
          pfVar3 = pfVar3 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    fVar14 = *(float *)(param_2 + (int64_t)(param_3 + param_4) * 4);
    fVar13 = *(float *)(param_2 + lVar10 * 4);
    if (fVar14 <= fVar13) {
      fVar14 = fVar13;
    }
    afStack_b0[lVar10 + 2] = fVar14;
    if (iVar8 < param_5) {
      if (3 < param_5 - iVar8) {
        lVar9 = (int64_t)param_3;
        in_XMM1_Da = afStack_b0[(int64_t)iVar8 + 1];
        pfVar3 = afStack_b0 + (int64_t)iVar8 + 1;
        lVar12 = param_2 - (int64_t)(afStack_b0 + 2);
        uVar2 = ((param_5 - iVar8) - 4U >> 2) + 1;
        uVar4 = (uint64_t)uVar2;
        iVar8 = iVar8 + uVar2 * 4;
        do {
          fVar13 = *(float *)((int64_t)pfVar3 + lVar12 + 4);
          fVar14 = *(float *)(((lVar9 * 4 + 4) - (int64_t)(afStack_b0 + 2)) + param_2 +
                             (int64_t)pfVar3);
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          if (fVar13 <= in_XMM1_Da - 1.0) {
            fVar13 = in_XMM1_Da - 1.0;
          }
          fVar14 = *(float *)(lVar12 + 8 + (int64_t)pfVar3);
          fVar1 = *(float *)(((lVar9 * 4 + 8) - (int64_t)(afStack_b0 + 2)) + param_2 +
                            (int64_t)pfVar3);
          if (fVar14 <= fVar1) {
            fVar14 = fVar1;
          }
          pfVar3[1] = fVar13;
          if (fVar14 <= fVar13 - 1.0) {
            fVar14 = fVar13 - 1.0;
          }
          fVar13 = *(float *)(lVar12 + 0xc + (int64_t)pfVar3);
          fVar1 = *(float *)((int64_t)pfVar3 +
                            ((lVar9 * 4 + 0xc) - (int64_t)(afStack_b0 + 2)) + param_2);
          if (fVar13 <= fVar1) {
            fVar13 = fVar1;
          }
          pfVar3[2] = fVar14;
          if (fVar13 <= fVar14 - 1.0) {
            fVar13 = fVar14 - 1.0;
          }
          in_XMM1_Da = *(float *)(lVar12 + 0x10 + (int64_t)pfVar3);
          fVar14 = *(float *)(((lVar9 * 4 + 0x10) - (int64_t)(afStack_b0 + 2)) + param_2 +
                             (int64_t)pfVar3);
          if (in_XMM1_Da <= fVar14) {
            in_XMM1_Da = fVar14;
          }
          pfVar3[3] = fVar13;
          pfVar3 = pfVar3 + 4;
          if (in_XMM1_Da <= fVar13 - 1.0) {
            in_XMM1_Da = fVar13 - 1.0;
          }
          *pfVar3 = in_XMM1_Da;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (iVar8 < param_5) {
        in_XMM2_Da = afStack_b0[(int64_t)iVar8 + 1];
        pfVar3 = afStack_b0 + (int64_t)iVar8 + 1;
        lVar9 = (int64_t)(param_5 - iVar8);
        do {
          in_XMM1_Da = *(float *)((((int64_t)param_3 * 4 + 4) - (int64_t)(afStack_b0 + 2)) +
                                  param_2 + (int64_t)pfVar3);
          fVar13 = *(float *)((int64_t)pfVar3 + (param_2 - (int64_t)(afStack_b0 + 2)) + 4);
          if (in_XMM1_Da <= fVar13) {
            in_XMM1_Da = fVar13;
          }
          pfVar3 = pfVar3 + 1;
          fVar13 = in_XMM2_Da - 1.0;
          in_XMM2_Da = in_XMM1_Da;
          if (in_XMM1_Da <= fVar13) {
            in_XMM2_Da = fVar13;
          }
          *pfVar3 = in_XMM2_Da;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
  }
  lVar9 = (int64_t)(param_5 + -2);
  if (lVar10 <= lVar9) {
    if (3 < (lVar9 - lVar10) + 1) {
      pfVar3 = afStack_b0 + lVar9;
      lVar12 = ((lVar9 - lVar10) - 3U >> 2) + 1;
      lVar9 = lVar9 + lVar12 * -4;
      do {
        fVar13 = pfVar3[3] - 1.0;
        if (pfVar3[3] - 1.0 <= pfVar3[2]) {
          fVar13 = pfVar3[2];
        }
        pfVar3[2] = fVar13;
        fVar14 = fVar13 - 1.0;
        if (fVar13 - 1.0 <= pfVar3[1]) {
          fVar14 = pfVar3[1];
        }
        pfVar3[1] = fVar14;
        fVar13 = fVar14 - 1.0;
        if (fVar14 - 1.0 <= *pfVar3) {
          fVar13 = *pfVar3;
        }
        *pfVar3 = fVar13;
        fVar14 = fVar13 - 1.0;
        if (fVar13 - 1.0 <= pfVar3[-1]) {
          fVar14 = pfVar3[-1];
        }
        pfVar3[-1] = fVar14;
        pfVar3 = pfVar3 + -4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    for (; lVar10 <= lVar9; lVar9 = lVar9 + -1) {
      fVar13 = afStack_b0[lVar9 + 3] - 1.0;
      if (afStack_b0[lVar9 + 3] - 1.0 <= afStack_b0[lVar9 + 2]) {
        fVar13 = afStack_b0[lVar9 + 2];
      }
      afStack_b0[lVar9 + 2] = fVar13;
    }
  }
  iVar11 = 0;
  iVar8 = 0;
  if (param_4 < 2) {
    param_4 = 2;
  }
  lVar10 = (int64_t)(param_5 + -1);
  lVar9 = (int64_t)param_4;
  do {
    if (lVar9 < lVar10) {
      lVar12 = lVar9;
      if (3 < lVar10 - lVar9) {
        lVar5 = (int64_t)iVar8;
        lVar7 = param_1 + (lVar5 + lVar9) * 4;
        lVar6 = ((lVar10 - lVar9) - 4U >> 2) + 1;
        lVar12 = lVar9 + lVar6 * 4;
        do {
          fVar13 = *(float *)((int64_t)afStack_b0 + lVar7 + (lVar5 * -4 - param_1) + 0x10);
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          in_XMM1_Da = *(float *)(lVar7 + 8);
          if (in_XMM1_Da <= 0.0) {
            in_XMM1_Da = 0.0;
          }
          in_XMM2_Da = *(float *)(lVar7 + 0xc);
          in_XMM1_Da = in_XMM1_Da - fVar13;
          fVar13 = *(float *)((int64_t)afStack_b0 + lVar7 + (lVar5 * -4 - param_1) + 0x14);
          if (in_XMM2_Da <= 0.0) {
            in_XMM2_Da = 0.0;
          }
          lVar7 = lVar7 + 0x10;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (in_XMM1_Da <= 0.0) {
            in_XMM1_Da = 0.0;
          }
          in_XMM2_Da = in_XMM2_Da - fVar13;
          if (in_XMM2_Da <= 0.0) {
            in_XMM2_Da = 0.0;
          }
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar12 < lVar10) {
        do {
          fVar13 = afStack_b0[lVar12 + 2];
          in_XMM1_Da = *(float *)(param_1 + lVar12 * 4 + (int64_t)iVar8 * 4);
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          if (in_XMM1_Da <= 0.0) {
            in_XMM1_Da = 0.0;
          }
          lVar12 = lVar12 + 1;
          in_XMM1_Da = in_XMM1_Da - fVar13;
          if (in_XMM1_Da <= 0.0) {
            in_XMM1_Da = 0.0;
          }
        } while (lVar12 < lVar10);
      }
    }
    iVar11 = iVar11 + 1;
    iVar8 = iVar8 + param_3;
  } while (iVar11 < param_6);
  aiStack_b8[0] = param_3;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)aiStack_b8,in_XMM1_Da,in_XMM2_Da);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



