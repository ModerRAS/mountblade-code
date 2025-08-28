#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part107.c - 10 个函数

// 函数: void FUN_18072edd0(short *param_1,uint64_t param_2,int param_3)
void FUN_18072edd0(short *param_1,uint64_t param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int8_t auStack_128 [32];
  uint uStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  ulonglong uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  short *psStack_e0;
  void *puStack_d8;
  uint64_t uStack_d0;
  int *apiStack_c8 [2];
  int aiStack_b8 [14];
  int aiStack_80 [14];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_128;
  apiStack_c8[0] = aiStack_b8;
  iVar17 = param_3 >> 1;
  apiStack_c8[1] = aiStack_80;
  iStack_fc = param_3;
  psStack_e0 = param_1;
  uStack_d0 = param_2;
  FUN_18072f370(param_2,aiStack_b8,aiStack_80,iVar17);
  piVar9 = aiStack_b8;
  uVar2 = func_0x00018072f2c0(aiStack_b8,0x2000,iVar17);
  uVar15 = 0;
  bVar18 = (int)uVar2 < 0;
  if (bVar18) {
    *param_1 = 0;
    piVar9 = aiStack_80;
    uVar2 = func_0x00018072f2c0(aiStack_80,0x2000,iVar17);
  }
  uVar14 = (uint)bVar18;
  uVar8 = (ulonglong)uVar2;
  uStack_f8 = (ulonglong)uVar14;
  iStack_100 = 0;
  uStack_108 = 0;
  lStack_e8 = (longlong)iVar17 * 4;
  uVar2 = uVar15;
LAB_18072eeb7:
  iVar4 = 0x2000;
  iStack_104 = 1;
  lStack_f0 = 1;
  do {
    lVar7 = 1;
    while( true ) {
      iVar16 = (int)*(short *)(&system_data_6f70 + lStack_f0 * 2);
      puStack_d8 = &system_data_6f70 + lStack_f0 * 2;
      uVar12 = (ulonglong)*(int *)(lStack_e8 + (longlong)piVar9);
      if (iVar17 == 8) {
        lVar6 = (longlong)(iVar16 << 4);
        uVar12 = (ulonglong)
                 (uint)((int)((ulonglong)
                              (((int)((ulonglong)
                                      (((int)((ulonglong)
                                              (((int)((ulonglong)
                                                      (((int)((ulonglong)
                                                              (((int)((ulonglong)
                                                                      (((int)((ulonglong)
                                                                              (((int)(uVar12 * lVar6
                                                                                     >> 0x10) +
                                                                               piVar9[7]) * lVar6)
                                                                             >> 0x10) + piVar9[6]) *
                                                                      lVar6) >> 0x10) + piVar9[5]) *
                                                              lVar6) >> 0x10) + piVar9[4]) * lVar6)
                                                     >> 0x10) + piVar9[3]) * lVar6) >> 0x10) +
                                       piVar9[2]) * lVar6) >> 0x10) + piVar9[1]) * lVar6) >> 0x10) +
                       *piVar9);
        uVar2 = uStack_108;
      }
      else {
        lVar6 = (longlong)iVar17 + -1;
        if (-1 < lVar6) {
          do {
            uVar12 = (ulonglong)
                     (uint)((int)((ulonglong)((longlong)(int)uVar12 * (longlong)(iVar16 << 4)) >>
                                 0x10) + piVar9[lVar6]);
            lVar6 = lVar6 + -1;
            uVar2 = uStack_108;
          } while (-1 < lVar6);
        }
      }
      iVar11 = (int)uVar12;
      if ((((int)uVar8 < 1) && ((int)uVar2 <= iVar11)) ||
         ((-1 < (int)uVar8 && (iVar11 <= (int)-uVar2)))) break;
      lStack_f0 = lStack_f0 + 1;
      iStack_104 = iStack_104 + 1;
      uVar8 = uVar12 & 0xffffffff;
      uStack_108 = 0;
      iVar4 = iVar16;
      uVar2 = uVar15;
      if (0x80 < iStack_104) {
        iStack_100 = iStack_100 + 1;
        if (0x10 < iStack_100) {
          uVar8 = 0x8000 % (longlong)(iStack_fc + 1) & 0xffffffff;
          *param_1 = (short)(0x8000 / (longlong)(iStack_fc + 1));
          if (1 < (longlong)iStack_fc) {
            do {
              param_1[lVar7] = param_1[lVar7 + -1] + *param_1;
              lVar7 = lVar7 + 1;
            } while (lVar7 < iStack_fc);
          }
          goto LAB_18072f294;
        }
        func_0x000180736a10(uStack_d0,iStack_fc,0x10000 - (1 << ((byte)iStack_100 & 0x1f)));
        FUN_18072f370(uStack_d0,aiStack_b8,aiStack_80,iVar17);
        piVar9 = aiStack_b8;
        uVar2 = func_0x00018072f2c0(aiStack_b8,0x2000,iVar17);
        uVar8 = (ulonglong)uVar2;
        if ((int)uVar2 < 0) {
          *param_1 = 0;
          piVar9 = aiStack_80;
          uVar2 = func_0x00018072f2c0(aiStack_80,0x2000,iVar17);
          uVar8 = (ulonglong)uVar2;
          uStack_f8 = 1;
          uVar14 = 1;
          uVar2 = uVar15;
        }
        else {
          uStack_f8 = 0;
          uVar14 = 0;
          uVar2 = uStack_108;
        }
        goto LAB_18072eeb7;
      }
    }
    iVar10 = -0x100;
    uVar2 = (uint)(iVar11 == 0);
    uVar13 = uVar15;
    do {
      uVar3 = piVar9[iVar17];
      uVar5 = (ulonglong)(int)uVar3;
      iVar11 = (iVar16 + iVar4 >> 1) + (iVar16 + iVar4 & 1U);
      if (iVar17 == 8) {
        lVar7 = (longlong)(iVar11 * 0x10);
        uVar3 = (int)((ulonglong)
                      (((int)((ulonglong)
                              (((int)((ulonglong)
                                      (((int)((ulonglong)
                                              (((int)((ulonglong)
                                                      (((int)((ulonglong)
                                                              (((int)((ulonglong)
                                                                      (((int)(uVar5 * lVar7 >> 0x10)
                                                                       + piVar9[7]) * lVar7) >> 0x10
                                                                     ) + piVar9[6]) * lVar7) >> 0x10
                                                             ) + piVar9[5]) * lVar7) >> 0x10) +
                                               piVar9[4]) * lVar7) >> 0x10) + piVar9[3]) * lVar7) >>
                                     0x10) + piVar9[2]) * lVar7) >> 0x10) + piVar9[1]) * lVar7) >>
                     0x10) + *piVar9;
      }
      else {
        lVar7 = (longlong)iVar17 + -1;
        if (-1 < lVar7) {
          do {
            uVar3 = (int)((ulonglong)((longlong)(int)uVar5 * (longlong)(iVar11 * 0x10)) >> 0x10) +
                    piVar9[lVar7];
            uVar5 = (ulonglong)uVar3;
            lVar7 = lVar7 + -1;
          } while (-1 < lVar7);
        }
      }
      if ((((int)uVar8 < 1) && (-1 < (int)uVar3)) || ((-1 < (int)uVar8 && ((int)uVar3 < 1)))) {
        uVar12 = (ulonglong)uVar3;
        iVar16 = iVar11;
      }
      else {
        uVar8 = (ulonglong)uVar3;
        iVar10 = iVar10 + (0x80U >> ((byte)uVar13 & 0x1f));
        iVar4 = iVar11;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < 3);
    uVar13 = (uint)uVar8;
    uVar3 = (int)uVar13 >> 0x1f;
    iVar4 = uVar13 - (int)uVar12;
    if ((int)((uVar13 ^ uVar3) - uVar3) < 0x10000) {
      if (iVar4 != 0) {
        uVar13 = (iVar4 >> 1) + uVar13 * 0x20;
        goto LAB_18072f0de;
      }
    }
    else {
      iVar4 = iVar4 >> 5;
LAB_18072f0de:
      uVar3 = (int)uVar13 % iVar4;
      iVar10 = iVar10 + (int)uVar13 / iVar4;
    }
    uVar8 = (ulonglong)uVar3;
    iVar10 = iStack_104 * 0x100 + iVar10;
    sVar1 = 0x7fff;
    if (iVar10 < 0x7fff) {
      sVar1 = (short)iVar10;
    }
    uVar14 = uVar14 + 1;
    psStack_e0[uStack_f8] = sVar1;
    uStack_f8 = uStack_f8 + 1;
    uStack_108 = uVar2;
    if (iStack_fc <= (int)uVar14) {
LAB_18072f294:
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_128,uVar8);
    }
    piVar9 = apiStack_c8[uVar14 & 1];
    iVar4 = (int)*(short *)(&unknown_var_4334_ptr + lStack_f0 * 2);
    uVar8 = (ulonglong)((uVar14 & 2) * -0x1000 + 0x1000);
    param_1 = psStack_e0;
  } while( true );
}





// 函数: void FUN_18072f370(longlong param_1,int *param_2,int *param_3,int param_4)
void FUN_18072f370(longlong param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  
  lVar7 = (longlong)param_4;
  param_2[lVar7] = 0x10000;
  param_3[lVar7] = 0x10000;
  if (0 < param_4) {
    piVar5 = (int *)(lVar7 * 4 + param_1);
    lVar2 = lVar7;
    piVar1 = piVar5;
    do {
      piVar5 = piVar5 + -1;
      piVar3 = piVar1 + 1;
      *(int *)((longlong)param_2 + (lVar7 * -4 - param_1) + -4 + (longlong)piVar3) =
           -(*piVar1 + *piVar5);
      *(int *)((longlong)param_3 + (lVar7 * -4 - param_1) + -4 + (longlong)piVar3) =
           *piVar1 - *piVar5;
      lVar2 = lVar2 + -1;
      piVar1 = piVar3;
    } while (lVar2 != 0);
    if (0 < lVar7) {
      lVar2 = lVar7;
      piVar5 = param_3 + lVar7;
      do {
        piVar3 = piVar5 + -1;
        lVar2 = lVar2 + -1;
        piVar1 = (int *)(((longlong)param_2 - (longlong)param_3) + (longlong)piVar3);
        *piVar1 = *piVar1 - *(int *)(((longlong)param_2 - (longlong)param_3) + 4 + (longlong)piVar3)
        ;
        *piVar3 = *piVar3 + *piVar5;
        piVar5 = piVar3;
      } while (0 < lVar2);
    }
  }
  if (1 < lVar7) {
    lVar6 = 2;
    lVar4 = 2;
    bVar9 = SBORROW8(lVar7,2);
    lVar2 = lVar7 + -2;
    bVar8 = lVar7 == 2;
    piVar5 = param_2;
    do {
      if (!bVar8 && bVar9 == lVar2 < 0) {
        piVar1 = param_2 + lVar7 + -2;
        lVar2 = lVar7 - lVar4;
        do {
          *piVar1 = *piVar1 - piVar1[2];
          piVar1 = piVar1 + -1;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      lVar4 = lVar4 + 1;
      *piVar5 = *piVar5 + piVar5[2] * -2;
      piVar5 = piVar5 + 1;
      bVar9 = SBORROW8(lVar7,lVar4);
      lVar2 = lVar7 - lVar4;
      bVar8 = lVar7 == lVar4;
    } while (lVar4 <= lVar7);
    bVar9 = SBORROW8(lVar7,2);
    lVar2 = lVar7 + -2;
    bVar8 = lVar7 == 2;
    piVar5 = param_3;
    do {
      if (!bVar8 && bVar9 == lVar2 < 0) {
        piVar1 = param_3 + lVar7 + -2;
        lVar2 = lVar7 - lVar6;
        do {
          *piVar1 = *piVar1 - piVar1[2];
          piVar1 = piVar1 + -1;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      lVar6 = lVar6 + 1;
      *piVar5 = *piVar5 + piVar5[2] * -2;
      piVar5 = piVar5 + 1;
      bVar9 = SBORROW8(lVar7,lVar6);
      lVar2 = lVar7 - lVar6;
      bVar8 = lVar7 == lVar6;
    } while (lVar6 <= lVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072f4d0(int8_t *param_1,longlong param_2,uint param_3)
void FUN_18072f4d0(int8_t *param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  uint64_t *puVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t in_XMM1 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auStack_138 [32];
  uint uStack_118;
  int iStack_10c;
  int iStack_108;
  int8_t auStack_104 [28];
  int aiStack_e8 [16];
  int aiStack_a8 [14];
  int aiStack_70 [14];
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_138;
  lVar6 = (longlong)(int)param_3;
  puVar10 = &unknown_var_3960_ptr;
  if (param_3 == 0x10) {
    puVar10 = &unknown_var_3944_ptr;
  }
  if (0 < (int)param_3) {
    lVar9 = 0;
    do {
      iVar7 = (int)*(short *)(param_2 + lVar9 * 2);
      iVar2 = iVar7 >> 8;
      pbVar1 = puVar10 + lVar9;
      lVar9 = lVar9 + 1;
      *(int *)(auStack_104 + (ulonglong)*pbVar1 * 4 + -4) =
           ((iVar7 + iVar2 * -0x100) *
            ((int)*(short *)(&unknown_var_4338_ptr + (longlong)iVar2 * 2) -
            (int)*(short *)(&system_data_6f70 + (longlong)iVar2 * 2)) +
            *(short *)(&system_data_6f70 + (longlong)iVar2 * 2) * 0x100 >> 3) + 1 >> 1;
    } while (lVar9 < lVar6);
  }
  iVar2 = (int)param_3 >> 1;
  FUN_18072f7d0(aiStack_a8,&iStack_108,iVar2);
  FUN_18072f7d0(aiStack_70,auStack_104);
  lVar9 = (longlong)iVar2;
  if (0 < iVar2) {
    lVar8 = 0;
    piVar5 = &iStack_10c + lVar6;
    do {
      iVar7 = *(int *)((longlong)aiStack_a8 + lVar8 + 4) + *(int *)((longlong)aiStack_a8 + lVar8);
      iVar2 = *(int *)((longlong)aiStack_70 + lVar8 + 4) - *(int *)((longlong)aiStack_70 + lVar8);
      *(int *)(auStack_104 + lVar8 + -4) = -(iVar2 + iVar7);
      *piVar5 = iVar2 - iVar7;
      lVar9 = lVar9 + -1;
      lVar8 = lVar8 + 4;
      piVar5 = piVar5 + -1;
    } while (lVar9 != 0);
  }
  uStack_118 = param_3;
  FUN_180736a70(param_1,&iStack_108,0xc);
  iVar7 = FUN_180734160(param_1,param_3);
  for (iVar2 = 0; (iVar7 == 0 && (iVar2 < 0x10)); iVar2 = iVar2 + 1) {
    func_0x000180736a10(&iStack_108,param_3,0x10000 - (2 << ((byte)iVar2 & 0x1f)));
    lVar9 = 0;
    if (((0 < (int)param_3) && (0xf < param_3)) &&
       ((auStack_104 + (longlong)(int)(param_3 - 1) * 4 + -4 < param_1 ||
        (param_1 + (longlong)(int)(param_3 - 1) * 2 < &iStack_108)))) {
      uVar4 = param_3 & 0x8000000f;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
      }
      auVar15 = ZEXT416(4);
      auVar16 = ZEXT416(1);
      puVar3 = (uint64_t *)(param_1 + 0x10);
      piVar5 = aiStack_e8;
      do {
        lVar9 = lVar9 + 0x10;
        auVar11._0_4_ = (piVar5[-8] >> auVar15) + 1 >> auVar16;
        auVar11._4_4_ = (piVar5[-7] >> auVar15) + 1 >> auVar16;
        auVar11._8_4_ = (piVar5[-6] >> auVar15) + 1 >> auVar16;
        auVar11._12_4_ = (piVar5[-5] >> auVar15) + 1 >> auVar16;
        auVar11 = pshuflw(auVar11,auVar11,0xd8);
        auVar13 = pshufhw(in_XMM1,auVar11,0xd8);
        puVar3[-2] = CONCAT44(auVar13._8_4_,auVar13._0_4_);
        auVar14._0_4_ = (piVar5[-4] >> auVar15) + 1 >> auVar16;
        auVar14._4_4_ = (piVar5[-3] >> auVar15) + 1 >> auVar16;
        auVar14._8_4_ = (piVar5[-2] >> auVar15) + 1 >> auVar16;
        auVar14._12_4_ = (piVar5[-1] >> auVar15) + 1 >> auVar16;
        auVar11 = pshuflw(auVar14,auVar14,0xd8);
        auVar14 = pshufhw(auVar13,auVar11,0xd8);
        puVar3[-1] = CONCAT44(auVar14._8_4_,auVar14._0_4_);
        auVar13._0_4_ = (*piVar5 >> auVar15) + 1 >> auVar16;
        auVar13._4_4_ = (piVar5[1] >> auVar15) + 1 >> auVar16;
        auVar13._8_4_ = (piVar5[2] >> auVar15) + 1 >> auVar16;
        auVar13._12_4_ = (piVar5[3] >> auVar15) + 1 >> auVar16;
        auVar11 = pshuflw(auVar13,auVar13,0xd8);
        auVar14 = pshufhw(auVar14,auVar11,0xd8);
        *puVar3 = CONCAT44(auVar14._8_4_,auVar14._0_4_);
        auVar12._0_4_ = (piVar5[4] >> auVar15) + 1 >> auVar16;
        auVar12._4_4_ = (piVar5[5] >> auVar15) + 1 >> auVar16;
        auVar12._8_4_ = (piVar5[6] >> auVar15) + 1 >> auVar16;
        auVar12._12_4_ = (piVar5[7] >> auVar15) + 1 >> auVar16;
        auVar11 = pshuflw(auVar12,auVar12,0xd8);
        in_XMM1 = pshufhw(auVar14,auVar11,0xd8);
        puVar3[1] = CONCAT44(in_XMM1._8_4_,in_XMM1._0_4_);
        puVar3 = puVar3 + 4;
        piVar5 = piVar5 + 0x10;
      } while (lVar9 < (int)(param_3 - uVar4));
    }
    for (; lVar9 < lVar6; lVar9 = lVar9 + 1) {
      *(short *)(param_1 + lVar9 * 2) =
           (short)((*(int *)(auStack_104 + lVar9 * 4 + -4) >> 4) + 1 >> 1);
    }
    iVar7 = FUN_180734160(param_1,param_3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_138);
}





// 函数: void FUN_18072f60f(void)
void FUN_18072f60f(void)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint64_t *puVar4;
  uint uVar5;
  int *piVar6;
  int unaff_EBX;
  uint unaff_ESI;
  int32_t unaff_00000034;
  int8_t *unaff_RDI;
  uint uVar7;
  uint64_t uVar8;
  int8_t auVar9 [16];
  int8_t auVar10 [16];
  int8_t in_XMM1 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  ulonglong in_stack_00000100;
  
  uVar7 = unaff_EBX + 4;
  uVar1 = unaff_EBX + 1;
  do {
    if (0xf < unaff_EBX) break;
    uVar8 = func_0x000180736a10(&stack0x00000030,unaff_ESI,0x10000 - (2 << ((byte)unaff_EBX & 0x1f))
                               );
    lVar3 = 0;
    if (((0 < (int)unaff_ESI) && (0xf < unaff_ESI)) &&
       ((&stack0x00000030 + (longlong)(int)(unaff_ESI - 1) * 4 < unaff_RDI ||
        (unaff_RDI + (longlong)(int)(unaff_ESI - 1) * 2 < &stack0x00000030)))) {
      uVar5 = unaff_ESI & 0x8000000f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
      }
      auVar13 = ZEXT416(uVar7);
      auVar14 = ZEXT416(uVar1);
      puVar4 = (uint64_t *)(unaff_RDI + 0x10);
      piVar6 = (int *)&stack0x00000050;
      do {
        lVar3 = lVar3 + 0x10;
        auVar9._0_4_ = (piVar6[-8] >> auVar13) + 1 >> auVar14;
        auVar9._4_4_ = (piVar6[-7] >> auVar13) + 1 >> auVar14;
        auVar9._8_4_ = (piVar6[-6] >> auVar13) + 1 >> auVar14;
        auVar9._12_4_ = (piVar6[-5] >> auVar13) + 1 >> auVar14;
        auVar9 = pshuflw(auVar9,auVar9,0xd8);
        auVar11 = pshufhw(in_XMM1,auVar9,0xd8);
        puVar4[-2] = CONCAT44(auVar11._8_4_,auVar11._0_4_);
        auVar12._0_4_ = (piVar6[-4] >> auVar13) + 1 >> auVar14;
        auVar12._4_4_ = (piVar6[-3] >> auVar13) + 1 >> auVar14;
        auVar12._8_4_ = (piVar6[-2] >> auVar13) + 1 >> auVar14;
        auVar12._12_4_ = (piVar6[-1] >> auVar13) + 1 >> auVar14;
        auVar9 = pshuflw(auVar12,auVar12,0xd8);
        auVar12 = pshufhw(auVar11,auVar9,0xd8);
        puVar4[-1] = CONCAT44(auVar12._8_4_,auVar12._0_4_);
        auVar11._0_4_ = (*piVar6 >> auVar13) + 1 >> auVar14;
        auVar11._4_4_ = (piVar6[1] >> auVar13) + 1 >> auVar14;
        auVar11._8_4_ = (piVar6[2] >> auVar13) + 1 >> auVar14;
        auVar11._12_4_ = (piVar6[3] >> auVar13) + 1 >> auVar14;
        auVar9 = pshuflw(auVar11,auVar11,0xd8);
        auVar12 = pshufhw(auVar12,auVar9,0xd8);
        *puVar4 = CONCAT44(auVar12._8_4_,auVar12._0_4_);
        auVar10._0_4_ = (piVar6[4] >> auVar13) + 1 >> auVar14;
        auVar10._4_4_ = (piVar6[5] >> auVar13) + 1 >> auVar14;
        auVar10._8_4_ = (piVar6[6] >> auVar13) + 1 >> auVar14;
        auVar10._12_4_ = (piVar6[7] >> auVar13) + 1 >> auVar14;
        auVar9 = pshuflw(auVar10,auVar10,0xd8);
        uVar8 = auVar9._0_8_;
        in_XMM1 = pshufhw(auVar12,auVar9,0xd8);
        puVar4[1] = CONCAT44(in_XMM1._8_4_,in_XMM1._0_4_);
        puVar4 = puVar4 + 4;
        piVar6 = piVar6 + 0x10;
      } while (lVar3 < (int)(unaff_ESI - uVar5));
    }
    if (lVar3 < CONCAT44(unaff_00000034,unaff_ESI)) {
      do {
        *(short *)(unaff_RDI + lVar3 * 2) =
             (short)((*(int *)(&stack0x00000030 + lVar3 * 4) >> 4) + 1 >> 1);
        lVar3 = lVar3 + 1;
      } while (lVar3 < CONCAT44(unaff_00000034,unaff_ESI));
    }
    unaff_EBX = unaff_EBX + 1;
    iVar2 = FUN_180734160(uVar8,unaff_ESI);
  } while (iVar2 == 0);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000100 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072f7ab(void)
void FUN_18072f7ab(void)

{
  ulonglong in_stack_00000100;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000100 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18072f7d0(int32_t *param_1,int *param_2,int param_3)
void FUN_18072f7d0(int32_t *param_1,int *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  *param_1 = 0x10000;
  param_1[1] = -*param_2;
  if (1 < param_3) {
    piVar5 = param_1 + 2;
    uVar2 = (ulonglong)(param_3 - 1);
    lVar4 = 1;
    do {
      iVar1 = param_2[lVar4 * 2];
      *piVar5 = piVar5[-2] * 2 - (int)(((longlong)piVar5[-1] * (longlong)iVar1 >> 0xf) + 1 >> 1);
      for (lVar3 = lVar4; 1 < lVar3; lVar3 = lVar3 + -1) {
        param_1[lVar3] =
             param_1[lVar3] +
             (param_1[lVar3 + -2] -
             (int)(((longlong)(int)param_1[lVar3 + -1] * (longlong)iVar1 >> 0xf) + 1 >> 1));
      }
      param_1[1] = param_1[1] - iVar1;
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}





// 函数: void FUN_18072f7ec(longlong param_1,uint64_t param_2,int param_3)
void FUN_18072f7ec(longlong param_1,uint64_t param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong unaff_RSI;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  piVar6 = (int *)(param_1 + 8);
  uVar3 = (ulonglong)(param_3 - 1);
  lVar5 = 1;
  do {
    iVar2 = *(int *)(unaff_RSI + lVar5 * 8);
    *piVar6 = piVar6[-2] * 2 - (int)(((longlong)piVar6[-1] * (longlong)iVar2 >> 0xf) + 1 >> 1);
    for (lVar4 = lVar5; 1 < lVar4; lVar4 = lVar4 + -1) {
      piVar1 = (int *)(param_1 + lVar4 * 4);
      *piVar1 = *piVar1 + (*(int *)(param_1 + -8 + lVar4 * 4) -
                          (int)(((longlong)*(int *)(param_1 + -4 + lVar4 * 4) * (longlong)iVar2 >>
                                0xf) + 1 >> 1));
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar2;
    lVar5 = lVar5 + 1;
    piVar6 = piVar6 + 1;
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  return;
}





// 函数: void FUN_18072f881(void)
void FUN_18072f881(void)

{
  return;
}





// 函数: void FUN_18072f890(short *param_1,char *param_2,char *param_3,int *param_4,int *param_5,
void FUN_18072f890(short *param_1,char *param_2,char *param_3,int *param_4,int *param_5,
                  longlong param_6,longlong param_7,int32_t param_8,uint param_9)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int8_t *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int8_t auStack_78 [8];
  char *pcStack_70;
  longlong lStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  iVar2 = 0;
  iStack_90 = 0x7fffffff;
  iStack_8c = 0;
  iStack_88 = 0;
  lStack_68 = 0;
  pcStack_70 = "\b\x10 ";
  while( true ) {
    uStack_60 = *(uint64_t *)(&unknown_var_4336_ptr + lStack_68);
    iVar9 = 0;
    iVar3 = 0;
    iVar6 = *param_4;
    uStack_50 = *(uint64_t *)(&unknown_var_4360_ptr + lStack_68);
    uStack_58 = *(uint64_t *)(&unknown_var_4384_ptr + lStack_68);
    iStack_84 = (int)*pcStack_70;
    if (0 < (int)param_9) {
      puVar5 = auStack_78;
      uVar7 = (ulonglong)param_9;
      lVar4 = param_6;
      lVar8 = param_7;
      iVar9 = 0;
      iVar3 = 0;
      do {
        iVar2 = func_0x00018070b9e0(0x1855 - iVar6);
        FUN_180736dc0(puVar5,&iStack_80,&iStack_7c,&iStack_94,lVar4,lVar8,uStack_50,uStack_58,
                      uStack_60,param_8,iVar2 + -0x33,iStack_84);
        iVar9 = iVar9 + iStack_80;
        if (iVar9 < 0) {
          iVar9 = 0x7fffffff;
        }
        iVar3 = iVar3 + iStack_7c;
        if (iVar3 < 0) {
          iVar3 = 0x7fffffff;
        }
        iVar2 = func_0x00018070b980(iStack_94 + 0x33);
        if (iVar2 + iVar6 + -0x380 < 0) {
          iVar6 = 0;
        }
        else {
          iVar2 = func_0x00018070b980(iStack_94 + 0x33);
          iVar6 = iVar2 + iVar6 + -0x380;
        }
        lVar4 = lVar4 + 100;
        lVar8 = lVar8 + 0x14;
        puVar5 = puVar5 + 1;
        uVar7 = uVar7 - 1;
        iVar2 = iStack_8c;
      } while (uVar7 != 0);
    }
    if (iVar3 <= iStack_90) break;
    iStack_88 = iStack_88 + 1;
    lStack_68 = lStack_68 + 8;
    pcStack_70 = pcStack_70 + 1;
    if (2 < iStack_88) {
      lVar4 = *(longlong *)(&unknown_var_4360_ptr + (longlong)*param_3 * 8);
      if (0 < (int)param_9) {
        uVar7 = (ulonglong)param_9;
        do {
          iVar6 = 0;
          do {
            iVar3 = iVar6 + *param_2 * 5;
            iVar6 = iVar6 + 1;
            *param_1 = (short)*(char *)(iVar3 + lVar4) << 7;
            param_1 = param_1 + 1;
          } while (iVar6 < 5);
          param_2 = param_2 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      *param_4 = iVar2;
      iVar2 = iVar9 >> 1;
      if (param_9 != 2) {
        iVar2 = iVar9 >> 2;
      }
      sVar1 = func_0x00018070b980(iVar2);
      *param_5 = (short)(sVar1 + -0x780) * -3;
      return;
    }
  }
  *param_3 = (char)iStack_88;
  iStack_90 = iVar3;
                    // WARNING: Subroutine does not return
  memcpy(param_2,auStack_78,(longlong)(int)param_9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18072fba0(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4)
void FUN_18072fba0(longlong param_1,longlong param_2,longlong param_3,uint64_t param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int8_t auStack_98 [4];
  int32_t uStack_94;
  int iStack_88;
  uint64_t uStack_80;
  ulonglong uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_98;
  *(int *)(param_2 + 0x10f4) = (int)*(char *)(param_3 + 0x22);
  uStack_94 = *(int32_t *)(param_2 + 0x10e8);
  auStack_98[0] = *(int8_t *)(param_3 + 0x1f);
  iStack_88 = (int)*(short *)(&unknown_var_9816_ptr +
                             ((longlong)*(char *)(param_3 + 0x1e) +
                             ((longlong)*(char *)(param_3 + 0x1d) >> 1) * 2) * 2);
  uVar1 = (longlong)(*(int *)(param_1 + 0x11e4) + *(int *)(param_1 + 0x11ec)) * 4;
  uVar2 = uVar1 + 0xf;
  if (uVar2 <= uVar1) {
    uVar2 = 0xffffffffffffff0;
  }
  uStack_80 = param_4;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(uVar2 & 0xfffffffffffffff0);
}





