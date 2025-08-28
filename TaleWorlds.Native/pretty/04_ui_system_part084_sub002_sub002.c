#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part084_sub002_sub002.c - 1 个函数

// 函数: void FUN_180716f10(int param_1,longlong param_2,int param_3,int32_t param_4,uint64_t param_5,
void FUN_180716f10(int param_1,longlong param_2,int param_3,int32_t param_4,uint64_t param_5,
                  longlong param_6,uint64_t param_7,uint64_t param_8,uint64_t param_9,
                  int param_10,uint64_t param_11,int param_12,uint64_t param_13,
                  uint64_t param_14,uint64_t param_15,uint64_t param_16,uint64_t param_17,
                  byte param_18,uint64_t param_19,uint64_t param_20,int param_21)

{
  int iVar1;
  int8_t auStack_7f8 [8];
  int iStack_7f0;
  int iStack_7e4;
  int iStack_7c0;
  int iStack_7bc;
  int iStack_7b8;
  uint64_t uStack_7a8;
  int iStack_79c;
  int32_t uStack_798;
  longlong lStack_788;
  longlong lStack_6f0;
  uint64_t uStack_6e8;
  uint64_t uStack_6e0;
  longlong lStack_6d8;
  uint64_t uStack_6d0;
  uint64_t uStack_6b0;
  uint64_t uStack_6a8;
  uint64_t uStack_6a0;
  uint64_t uStack_698;
  ulonglong uStack_e8;
  
  uStack_e8 = _DAT_180bf00a8 ^ (ulonglong)auStack_7f8;
  uStack_6b0 = param_7;
  uStack_6e0 = param_5;
  uStack_6d0 = param_8;
  iStack_7f0 = 1;
  uStack_6a8 = param_9;
  uStack_698 = param_14;
  uStack_7a8 = param_17;
  lStack_6f0 = *(longlong *)(param_2 + 0x20);
  iStack_79c = (param_6 != 0) + 1;
  uStack_6a0 = param_20;
  lStack_6d8 = param_6;
  if ((((param_1 == 0) || (param_6 == 0)) || (param_12 != 0)) || (param_21 < 8)) {
    iVar1 = 0;
    uStack_6e8 = 0;
  }
  else {
    uStack_6e8 = 1;
    iVar1 = iStack_7f0;
  }
  if ((param_1 == 0) || (iStack_7c0 = 0, iVar1 != 0)) {
    iStack_7c0 = iStack_7f0;
  }
  iStack_7e4 = 1 << (param_18 & 0x1f);
  if (param_10 != 0) {
    iStack_7f0 = iStack_7e4;
  }
  iStack_7bc = *(short *)(lStack_6f0 + (longlong)param_3 * 2) * iStack_7e4;
  iStack_7b8 = param_3;
  uStack_798 = param_4;
  lStack_788 = param_2;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



ulonglong FUN_180717fa0(int *param_1,float *param_2,uint param_3,int32_t param_4,uint param_5,
                       longlong param_6,int32_t param_7,float *param_8,int32_t param_9,
                       longlong param_10,uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  byte *pbVar3;
  uint64_t uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  bool bVar31;
  int8_t in_XMM1 [16];
  int8_t auVar32 [16];
  float fVar33;
  uint uStack_50;
  int iStack_4c;
  
  uVar30 = (ulonglong)(int)param_3;
  bVar31 = param_5 == 1;
  uStack_50 = 0;
  iVar26 = *param_1;
  iVar27 = param_1[7];
  uVar23 = (ulonglong)param_5;
  if (param_3 == 1) {
    iVar26 = *param_1;
    uVar4 = *(uint64_t *)(param_1 + 8);
    iVar27 = 0;
    pfVar17 = param_2;
    do {
      uVar16 = 0;
      if (7 < param_1[10]) {
        if (iVar26 == 0) {
          uVar16 = FUN_18070f360(uVar4,1);
        }
        else {
          bVar31 = *pfVar17 <= 0.0 && *pfVar17 != 0.0;
          uVar16 = (uint)bVar31;
          FUN_180705180(uVar4,bVar31,1);
        }
        param_1[10] = param_1[10] + -8;
      }
      if (param_1[1] != 0) {
        if (uVar16 == 0) {
          fVar33 = 1.0;
        }
        else {
          fVar33 = -1.0;
        }
        *pfVar17 = fVar33;
      }
      iVar27 = iVar27 + 1;
      pfVar17 = (float *)0x0;
    } while (iVar27 < 1);
    if (param_8 != (float *)0x0) {
      *param_8 = *param_2;
    }
    return 1;
  }
  iVar5 = iVar27;
  if (iVar27 < 1) {
    iVar5 = 0;
  }
  if (((param_10 != 0) && (param_6 != 0)) &&
     ((iVar5 != 0 || ((((param_3 / uVar23 & 1) == 0 && (iVar27 < 0)) || (1 < (int)param_5)))))) {
                    // WARNING: Subroutine does not return
    memcpy(param_10,param_6,uVar30 * 4);
  }
  iStack_4c = 0;
  if (0 < iVar5) {
    uVar16 = 1;
    do {
      iVar25 = (int)param_3 >> ((byte)iStack_4c & 0x1f);
      if (iVar26 != 0) {
        FUN_1807165a0(param_2,iVar25,uVar16);
      }
      if (param_6 != 0) {
        FUN_1807165a0(param_6,iVar25,uVar16);
      }
      uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
      param_11 = (uint)(byte)(&UNK_180953358)[(longlong)(int)param_11 >> 4] << 2 |
                 (uint)(byte)(&UNK_180953358)[param_11 & 0xf];
      iStack_4c = iStack_4c + 1;
    } while (iStack_4c < iVar5);
  }
  bVar18 = (byte)iVar5;
  param_5 = (int)param_5 >> (bVar18 & 0x1f);
  uVar16 = (int)(param_3 / uVar23) << (bVar18 & 0x1f);
  if ((uVar16 & 1) == 0) {
    do {
      if (-1 < iVar27) break;
      if (iVar26 != 0) {
        FUN_1807165a0(param_2,uVar16,param_5);
      }
      if (param_6 != 0) {
        FUN_1807165a0(param_6,uVar16,param_5);
      }
      uStack_50 = uStack_50 + 1;
      uVar16 = (int)uVar16 >> 1;
      bVar19 = (byte)param_5;
      param_5 = param_5 * 2;
      param_11 = param_11 | param_11 << (bVar19 & 0x1f);
      iVar27 = iVar27 + 1;
    } while ((uVar16 & 1) == 0);
    uVar30 = (ulonglong)param_3;
  }
  if (1 < (int)param_5) {
    iVar27 = param_5 << (bVar18 & 0x1f);
    iVar25 = (int)uVar16 >> (bVar18 & 0x1f);
    if (iVar26 != 0) {
      FUN_1807160c0(param_2,iVar25,iVar27,bVar31);
    }
    if (param_6 != 0) {
      FUN_1807160c0(param_6,iVar25,iVar27,bVar31);
    }
  }
  uVar29 = (uint)uVar30;
  uVar15 = FUN_180718bd0(param_1,param_2,uVar30 & 0xffffffff,param_4,param_5,param_6,param_7,param_9
                         ,param_11);
  uVar23 = (ulonglong)uVar15;
  if (param_1[1] != 0) {
    if (1 < (int)param_5) {
      FUN_180716aa0(param_2,(int)uVar16 >> (bVar18 & 0x1f),param_5 << (bVar18 & 0x1f));
    }
    if (0 < (int)uStack_50) {
      uVar30 = (ulonglong)uStack_50;
      do {
        param_5 = (int)param_5 >> 1;
        uVar16 = uVar16 * 2;
        uVar23 = (ulonglong)((uint)uVar23 | (uint)uVar23 >> ((byte)param_5 & 0x1f));
        FUN_1807165a0(param_2,uVar16,param_5);
        uVar30 = uVar30 - 1;
      } while (uVar30 != 0);
    }
    uVar16 = (uint)uVar23;
    iVar26 = 0;
    uVar15 = 1;
    if (0 < iVar5) {
      do {
        pbVar3 = &UNK_180953368 + uVar23;
        uVar23 = (ulonglong)*pbVar3;
        uVar16 = (uint)*pbVar3;
        FUN_1807165a0(param_2,(int)uVar29 >> ((byte)iVar26 & 0x1f),uVar15);
        iVar26 = iVar26 + 1;
        uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
      } while (iVar26 < iVar5);
    }
    uVar23 = 0;
    if (param_8 != (float *)0x0) {
      uVar15 = 0;
      auVar32._0_8_ = (double)(int)uVar29;
      auVar32._8_8_ = 0;
      auVar32 = sqrtpd(in_XMM1,auVar32);
      fVar33 = (float)auVar32._0_8_;
      if (((0 < (int)uVar29) && (0xf < uVar29)) &&
         ((param_2 + (int)(uVar29 - 1) < param_8 || (param_8 + (int)(uVar29 - 1) < param_2)))) {
        uVar20 = uVar29 & 0x8000000f;
        if ((int)uVar20 < 0) {
          uVar20 = (uVar20 - 1 | 0xfffffff0) + 1;
        }
        lVar21 = (longlong)param_2 - (longlong)param_8;
        pfVar17 = param_8 + 4;
        uVar30 = uVar23;
        do {
          pfVar2 = (float *)(lVar21 + -0x10 + (longlong)pfVar17);
          fVar6 = pfVar2[1];
          fVar7 = pfVar2[2];
          fVar8 = pfVar2[3];
          uVar15 = (int)uVar23 + 0x10;
          uVar23 = (ulonglong)uVar15;
          uVar30 = uVar30 + 0x10;
          pfVar1 = (float *)(lVar21 + (longlong)pfVar17);
          fVar9 = *pfVar1;
          fVar10 = pfVar1[1];
          fVar11 = pfVar1[2];
          fVar12 = pfVar1[3];
          pfVar1 = pfVar17 + 0x10;
          pfVar17[-4] = *pfVar2 * fVar33;
          pfVar17[-3] = fVar6 * fVar33;
          pfVar17[-2] = fVar7 * fVar33;
          pfVar17[-1] = fVar8 * fVar33;
          pfVar2 = (float *)(lVar21 + -0x30 + (longlong)pfVar1);
          fVar6 = *pfVar2;
          fVar7 = pfVar2[1];
          fVar8 = pfVar2[2];
          fVar13 = pfVar2[3];
          *pfVar17 = fVar9 * fVar33;
          pfVar17[1] = fVar10 * fVar33;
          pfVar17[2] = fVar11 * fVar33;
          pfVar17[3] = fVar12 * fVar33;
          pfVar2 = (float *)(lVar21 + -0x20 + (longlong)pfVar1);
          fVar9 = *pfVar2;
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar17[4] = fVar6 * fVar33;
          pfVar17[5] = fVar7 * fVar33;
          pfVar17[6] = fVar8 * fVar33;
          pfVar17[7] = fVar13 * fVar33;
          pfVar17[8] = fVar9 * fVar33;
          pfVar17[9] = fVar10 * fVar33;
          pfVar17[10] = fVar11 * fVar33;
          pfVar17[0xb] = fVar12 * fVar33;
          pfVar17 = pfVar1;
        } while ((longlong)uVar30 < (longlong)(int)(uVar29 - uVar20));
      }
      lVar21 = (longlong)(int)uVar15;
      lVar22 = (longlong)(int)uVar29;
      if (lVar21 < lVar22) {
        if (3 < lVar22 - lVar21) {
          lVar14 = lVar21 + 1;
          lVar24 = (longlong)param_2 - (longlong)param_8;
          lVar28 = ((lVar22 - lVar21) - 4U >> 2) + 1;
          lVar21 = lVar21 + lVar28 * 4;
          pfVar17 = param_8 + lVar14;
          do {
            pfVar1 = pfVar17 + 4;
            pfVar17[-1] = fVar33 * *(float *)(lVar24 + -0x14 + (longlong)pfVar1);
            *pfVar17 = fVar33 * *(float *)((longlong)pfVar17 + lVar24);
            pfVar17[1] = fVar33 * *(float *)(lVar24 + -0xc + (longlong)pfVar1);
            pfVar17[2] = fVar33 * *(float *)(lVar24 + -8 + (longlong)pfVar1);
            lVar28 = lVar28 + -1;
            pfVar17 = pfVar1;
          } while (lVar28 != 0);
        }
        if (lVar21 < lVar22) {
          lVar22 = lVar22 - lVar21;
          pfVar17 = param_8 + lVar21;
          do {
            *pfVar17 = fVar33 * *(float *)((longlong)pfVar17 +
                                          ((longlong)param_2 - (longlong)param_8));
            lVar22 = lVar22 + -1;
            pfVar17 = pfVar17 + 1;
          } while (lVar22 != 0);
        }
      }
    }
    uVar23 = (ulonglong)(uVar16 & (1 << ((byte)(param_5 << (bVar18 & 0x1f)) & 0x1f)) - 1U);
  }
  return uVar23;
}



uint64_t
FUN_180718480(int *param_1,float *param_2,float *param_3,uint64_t param_4,float *param_5)

{
  int iVar1;
  uint64_t uVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  
  iVar1 = *param_1;
  uVar2 = *(uint64_t *)(param_1 + 8);
  iVar6 = 0;
  pfVar5 = param_2;
  do {
    uVar4 = 0;
    if (7 < param_1[10]) {
      if (iVar1 == 0) {
        uVar4 = FUN_18070f360(uVar2,1);
      }
      else {
        bVar3 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
        uVar4 = (uint)bVar3;
        FUN_180705180(uVar2,bVar3,1);
      }
      param_1[10] = param_1[10] + -8;
    }
    if (param_1[1] != 0) {
      if (uVar4 == 0) {
        fVar7 = 1.0;
      }
      else {
        fVar7 = -1.0;
      }
      *pfVar5 = fVar7;
    }
    iVar6 = iVar6 + 1;
    pfVar5 = param_3;
  } while (iVar6 < (int)((param_3 != (float *)0x0) + 1));
  if (param_5 != (float *)0x0) {
    *param_5 = *param_2;
  }
  return 1;
}



uint FUN_180718590(int *param_1,float *param_2,float *param_3,uint param_4,float *param_5,
                  int32_t param_6,uint64_t param_7,int32_t param_8,float *param_9,
                  uint64_t param_10,int param_11)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  int32_t uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int32_t *puVar24;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  ulonglong uVar14;
  int32_t uVar25;
  
  iVar16 = param_11;
  uVar5 = param_6;
  iVar18 = *param_1;
  uVar22 = *(uint64_t *)(param_1 + 8);
  lVar17 = (longlong)(int)param_4;
  if (param_4 != 1) {
    puVar24 = &param_11;
    FUN_180715830(param_1,&iStack_78,param_2,param_3,param_4,&param_5,param_6,param_6,param_8,1,
                  puVar24);
    uVar25 = (int32_t)((ulonglong)puVar24 >> 0x20);
    fVar21 = (float)iStack_74 * 3.0517578e-05;
    fVar20 = (float)iStack_70 * 3.0517578e-05;
    if (param_4 == 2) {
      iVar8 = 0;
      uVar6 = 0;
      if ((uStack_68 & 0xffffbfff) != 0) {
        iVar8 = 8;
      }
      iVar7 = (int)param_5 - iVar8;
      param_1[10] = param_1[10] - (iStack_64 + iVar8);
      pfVar11 = param_3;
      pfVar9 = param_2;
      if (0x2000 < (int)uStack_68) {
        pfVar11 = param_2;
        pfVar9 = param_3;
      }
      if (iVar8 != 0) {
        if (iVar18 == 0) {
          uVar6 = FUN_18070f360(uVar22,1);
        }
        else {
          bVar3 = pfVar11[1] * *pfVar9 - pfVar9[1] * *pfVar11 < 0.0;
          uVar6 = (uint)bVar3;
          FUN_180705180(uVar22,bVar3,1);
        }
      }
      iVar18 = uVar6 * -2 + 1;
      uVar6 = FUN_180717fa0(param_1,pfVar9,2,iVar7,uVar5,param_7,param_8,param_9,0x3f800000,param_10
                            ,CONCAT44(uVar25,iVar16));
      *pfVar11 = (float)-iVar18 * pfVar9[1];
      pfVar11[1] = (float)iVar18 * *pfVar9;
      if (param_1[1] != 0) {
        *param_2 = fVar21 * *param_2;
        param_2[1] = fVar21 * param_2[1];
        fVar1 = *param_3;
        *param_3 = fVar20 * fVar1;
        param_3[1] = fVar20 * param_3[1];
        fVar2 = *param_2;
        *param_2 = fVar2 - fVar20 * fVar1;
        *param_3 = fVar2 + *param_3;
        fVar20 = param_2[1];
        param_2[1] = fVar20 - param_3[1];
        param_3[1] = fVar20 + param_3[1];
      }
    }
    else {
      iVar16 = ((int)param_5 - iStack_6c) / 2;
      iVar18 = iVar16;
      if ((int)param_5 < iVar16) {
        iVar18 = (int)param_5;
      }
      iVar8 = 0;
      if ((-1 < iVar18) && (iVar8 = iVar16, (int)param_5 < iVar16)) {
        iVar8 = (int)param_5;
      }
      iVar16 = (int)param_5 - iVar8;
      param_1[10] = param_1[10] - iStack_64;
      iVar18 = param_1[10];
      if (iVar8 < iVar16) {
        uVar6 = FUN_180717fa0(param_1,param_3,param_4,iVar16,uVar5,0,param_8,0,fVar20,0,
                              CONCAT44(uVar25,param_11 >> ((byte)uVar5 & 0x1f)));
        iVar16 = (param_1[10] - iVar18) + iVar16;
        if ((0x18 < iVar16) && (uStack_68 != 0x4000)) {
          iVar8 = iVar8 + -0x18 + iVar16;
        }
        fVar20 = 1.0;
        pfVar9 = param_2;
        uVar22 = param_7;
        pfVar11 = param_9;
        uVar23 = param_10;
        iVar18 = param_11;
      }
      else {
        uVar6 = FUN_180717fa0(param_1,param_2,param_4,iVar8,uVar5,param_7,param_8,param_9,0x3f800000
                              ,param_10,CONCAT44(uVar25,param_11));
        iVar8 = (param_1[10] - iVar18) + iVar8;
        if ((0x18 < iVar8) && (uStack_68 != 0)) {
          iVar16 = iVar16 + -0x18 + iVar8;
        }
        pfVar9 = param_3;
        iVar8 = iVar16;
        uVar22 = 0;
        pfVar11 = (float *)0x0;
        uVar23 = 0;
        iVar18 = param_11 >> ((byte)uVar5 & 0x1f);
      }
      uVar13 = FUN_180717fa0(param_1,pfVar9,param_4,iVar8,uVar5,uVar22,param_8,pfVar11,fVar20,uVar23
                             ,iVar18);
      uVar6 = uVar6 | uVar13;
    }
    uVar14 = 0;
    if (param_1[1] != 0) {
      if (param_4 != 2) {
        FUN_1807197a0(param_2,param_3,fVar21,param_4,param_1[0xf]);
      }
      if (iStack_78 != 0) {
        uVar13 = 0;
        if ((0 < (int)param_4) && (0xf < param_4)) {
          uVar10 = param_4 & 0x8000000f;
          if ((int)uVar10 < 0) {
            uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
          }
          pfVar9 = param_3 + 8;
          uVar19 = uVar14;
          do {
            uVar13 = (int)uVar14 + 0x10;
            uVar14 = (ulonglong)uVar13;
            uVar19 = uVar19 + 0x10;
            pfVar9[-8] = -pfVar9[-8];
            pfVar9[-7] = -pfVar9[-7];
            pfVar9[-6] = -pfVar9[-6];
            pfVar9[-5] = -pfVar9[-5];
            pfVar9[-4] = -pfVar9[-4];
            pfVar9[-3] = -pfVar9[-3];
            pfVar9[-2] = -pfVar9[-2];
            pfVar9[-1] = -pfVar9[-1];
            *pfVar9 = -*pfVar9;
            pfVar9[1] = -pfVar9[1];
            pfVar9[2] = -pfVar9[2];
            pfVar9[3] = -pfVar9[3];
            pfVar9[4] = -pfVar9[4];
            pfVar9[5] = -pfVar9[5];
            pfVar9[6] = -pfVar9[6];
            pfVar9[7] = -pfVar9[7];
            pfVar9 = pfVar9 + 0x10;
          } while ((longlong)uVar19 < (longlong)(int)(param_4 - uVar10));
        }
        lVar12 = (longlong)(int)uVar13;
        if (lVar12 < lVar17) {
          if (3 < lVar17 - lVar12) {
            lVar4 = lVar12 + 2;
            lVar15 = ((lVar17 - lVar12) - 4U >> 2) + 1;
            lVar12 = lVar12 + lVar15 * 4;
            pfVar9 = param_3 + lVar4;
            do {
              pfVar9[-2] = -pfVar9[-2];
              pfVar9[-1] = -pfVar9[-1];
              *pfVar9 = -*pfVar9;
              pfVar9[1] = -pfVar9[1];
              lVar15 = lVar15 + -1;
              pfVar9 = pfVar9 + 4;
            } while (lVar15 != 0);
          }
          for (; lVar12 < lVar17; lVar12 = lVar12 + 1) {
            param_3[lVar12] = -param_3[lVar12];
          }
        }
      }
    }
    return uVar6;
  }
  param_5 = param_9;
  iVar18 = *param_1;
  uVar22 = *(uint64_t *)(param_1 + 8);
  iVar16 = 0;
  pfVar9 = param_2;
  do {
    uVar6 = 0;
    if (7 < param_1[10]) {
      if (iVar18 == 0) {
        uVar6 = FUN_18070f360(uVar22,1);
      }
      else {
        bVar3 = *pfVar9 <= 0.0 && *pfVar9 != 0.0;
        uVar6 = (uint)bVar3;
        FUN_180705180(uVar22,bVar3,1);
      }
      param_1[10] = param_1[10] + -8;
    }
    if (param_1[1] != 0) {
      if (uVar6 == 0) {
        fVar20 = 1.0;
      }
      else {
        fVar20 = -1.0;
      }
      *pfVar9 = fVar20;
    }
    iVar16 = iVar16 + 1;
    pfVar9 = param_3;
  } while (iVar16 < (int)((param_3 != (float *)0x0) + 1));
  if (param_5 != (float *)0x0) {
    *param_5 = *param_2;
  }
  return 1;
}



uint FUN_180718610(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  int32_t in_EAX;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar12;
  float *unaff_RBX;
  int iVar13;
  uint uVar14;
  longlong unaff_RSI;
  longlong unaff_RDI;
  float *unaff_R12;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  int32_t *puStack0000000000000028;
  int32_t uStack0000000000000030;
  float fStack0000000000000040;
  uint64_t in_stack_00000068;
  int iStack0000000000000080;
  int iStack0000000000000084;
  int iStack0000000000000088;
  int iStack000000000000008c;
  int iStack0000000000000090;
  int iStack0000000000000094;
  int32_t uStack0000000000000100;
  uint in_stack_00000118;
  int in_stack_00000120;
  int32_t in_stack_00000128;
  uint64_t in_stack_00000130;
  int32_t in_stack_00000138;
  uint64_t in_stack_00000140;
  uint64_t in_stack_00000148;
  int32_t in_stack_00000150;
  ulonglong uVar11;
  
  fStack0000000000000040 = (float)in_stack_00000138;
  puStack0000000000000028 = &stack0x00000120;
  uStack0000000000000030 = in_stack_00000128;
  uVar14 = (uint)unaff_RSI;
  uStack0000000000000100 = in_EAX;
  FUN_180715830();
  fVar17 = (float)iStack0000000000000088 * 3.0517578e-05;
  if (uVar14 == 2) {
    iVar15 = 0;
    uVar10 = 0;
    if ((_iStack0000000000000090 & 0xffffbfff) != 0) {
      iVar15 = 8;
    }
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) - (iStack0000000000000094 + iVar15);
    pfVar8 = unaff_RBX;
    pfVar6 = unaff_R12;
    if (0x2000 < iStack0000000000000090) {
      pfVar8 = unaff_R12;
      pfVar6 = unaff_RBX;
    }
    if (iVar15 != 0) {
      if (in_stack_00000118 == 0) {
        uVar10 = FUN_18070f360(in_stack_00000068,1);
      }
      else {
        bVar3 = pfVar8[1] * *pfVar6 - pfVar6[1] * *pfVar8 < 0.0;
        uVar10 = (uint)bVar3;
        FUN_180705180(in_stack_00000068,bVar3,1);
      }
    }
    iVar15 = uVar10 * -2 + 1;
    fStack0000000000000040 = 1.0;
    uStack0000000000000030 = in_stack_00000138;
    puStack0000000000000028 = (int32_t *)in_stack_00000130;
    in_stack_00000118 = FUN_180717fa0();
    *pfVar8 = (float)-iVar15 * pfVar6[1];
    pfVar8[1] = (float)iVar15 * *pfVar6;
    if (*(int *)(unaff_RDI + 4) != 0) {
      *unaff_R12 = (float)iStack0000000000000084 * 3.0517578e-05 * *unaff_R12;
      unaff_R12[1] = (float)iStack0000000000000084 * 3.0517578e-05 * unaff_R12[1];
      fVar1 = *unaff_RBX;
      *unaff_RBX = fVar17 * fVar1;
      unaff_RBX[1] = fVar17 * unaff_RBX[1];
      fVar2 = *unaff_R12;
      *unaff_R12 = fVar2 - fVar17 * fVar1;
      *unaff_RBX = fVar2 + *unaff_RBX;
      fVar17 = unaff_R12[1];
      unaff_R12[1] = fVar17 - unaff_RBX[1];
      unaff_RBX[1] = fVar17 + unaff_RBX[1];
    }
  }
  else {
    iVar5 = (in_stack_00000120 - iStack000000000000008c) / 2;
    iVar15 = iVar5;
    if (in_stack_00000120 < iVar5) {
      iVar15 = in_stack_00000120;
    }
    iVar13 = 0;
    if ((-1 < iVar15) && (iVar13 = iVar5, in_stack_00000120 < iVar5)) {
      iVar13 = in_stack_00000120;
    }
    *(int *)(unaff_RDI + 0x28) = *(int *)(unaff_RDI + 0x28) - iStack0000000000000094;
    uStack0000000000000100 = *(int32_t *)(unaff_RDI + 0x28);
    if (iVar13 < in_stack_00000120 - iVar13) {
      uStack0000000000000030 = in_stack_00000138;
      puStack0000000000000028 = (int32_t *)0x0;
      fStack0000000000000040 = fVar17;
      in_stack_00000118 = FUN_180717fa0();
      fStack0000000000000040 = 1.0;
      puStack0000000000000028 = (int32_t *)in_stack_00000130;
    }
    else {
      fStack0000000000000040 = 1.0;
      uStack0000000000000030 = in_stack_00000138;
      puStack0000000000000028 = (int32_t *)in_stack_00000130;
      in_stack_00000118 = FUN_180717fa0();
      puStack0000000000000028 = (int32_t *)0x0;
      fStack0000000000000040 = fVar17;
    }
    uStack0000000000000030 = in_stack_00000138;
    uVar10 = FUN_180717fa0();
    in_stack_00000118 = in_stack_00000118 | uVar10;
  }
  uVar11 = 0;
  if (*(int *)(unaff_RDI + 4) != 0) {
    if (uVar14 != 2) {
      FUN_1807197a0();
    }
    if (iStack0000000000000080 != 0) {
      uVar10 = 0;
      if ((0 < (int)uVar14) && (0xf < uVar14)) {
        uVar7 = uVar14 & 0x8000000f;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
        }
        pfVar6 = unaff_RBX + 8;
        uVar16 = uVar11;
        do {
          uVar10 = (int)uVar11 + 0x10;
          uVar11 = (ulonglong)uVar10;
          uVar16 = uVar16 + 0x10;
          pfVar6[-8] = -pfVar6[-8];
          pfVar6[-7] = -pfVar6[-7];
          pfVar6[-6] = -pfVar6[-6];
          pfVar6[-5] = -pfVar6[-5];
          pfVar6[-4] = -pfVar6[-4];
          pfVar6[-3] = -pfVar6[-3];
          pfVar6[-2] = -pfVar6[-2];
          pfVar6[-1] = -pfVar6[-1];
          *pfVar6 = -*pfVar6;
          pfVar6[1] = -pfVar6[1];
          pfVar6[2] = -pfVar6[2];
          pfVar6[3] = -pfVar6[3];
          pfVar6[4] = -pfVar6[4];
          pfVar6[5] = -pfVar6[5];
          pfVar6[6] = -pfVar6[6];
          pfVar6[7] = -pfVar6[7];
          pfVar6 = pfVar6 + 0x10;
        } while ((longlong)uVar16 < (longlong)(int)(uVar14 - uVar7));
      }
      lVar9 = (longlong)(int)uVar10;
      if (lVar9 < unaff_RSI) {
        if (3 < unaff_RSI - lVar9) {
          lVar4 = lVar9 + 2;
          lVar12 = ((unaff_RSI - lVar9) - 4U >> 2) + 1;
          lVar9 = lVar9 + lVar12 * 4;
          pfVar6 = unaff_RBX + lVar4;
          do {
            pfVar6[-2] = -pfVar6[-2];
            pfVar6[-1] = -pfVar6[-1];
            *pfVar6 = -*pfVar6;
            pfVar6[1] = -pfVar6[1];
            lVar12 = lVar12 + -1;
            pfVar6 = pfVar6 + 4;
          } while (lVar12 != 0);
        }
        for (; lVar9 < unaff_RSI; lVar9 = lVar9 + 1) {
          unaff_RBX[lVar9] = -unaff_RBX[lVar9];
        }
      }
    }
  }
  return in_stack_00000118;
}



int32_t FUN_180718a8d(void)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  uint uVar8;
  longlong unaff_RSI;
  ulonglong unaff_R15;
  int in_stack_00000080;
  
  uVar8 = (uint)unaff_RSI;
  if (uVar8 != 2) {
    FUN_1807197a0();
  }
  if (in_stack_00000080 != 0) {
    uVar6 = unaff_R15 & 0xffffffff;
    uVar5 = (uint)unaff_R15;
    if ((0 < (int)uVar8) && (0xf < uVar8)) {
      uVar3 = uVar8 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      puVar2 = (uint *)(unaff_RBX + 0x20);
      do {
        uVar5 = (int)uVar6 + 0x10;
        uVar6 = (ulonglong)uVar5;
        unaff_R15 = unaff_R15 + 0x10;
        puVar2[-8] = puVar2[-8] ^ 0x80000000;
        puVar2[-7] = puVar2[-7] ^ 0x80000000;
        puVar2[-6] = puVar2[-6] ^ 0x80000000;
        puVar2[-5] = puVar2[-5] ^ 0x80000000;
        puVar2[-4] = puVar2[-4] ^ 0x80000000;
        puVar2[-3] = puVar2[-3] ^ 0x80000000;
        puVar2[-2] = puVar2[-2] ^ 0x80000000;
        puVar2[-1] = puVar2[-1] ^ 0x80000000;
        *puVar2 = *puVar2 ^ 0x80000000;
        puVar2[1] = puVar2[1] ^ 0x80000000;
        puVar2[2] = puVar2[2] ^ 0x80000000;
        puVar2[3] = puVar2[3] ^ 0x80000000;
        puVar2[4] = puVar2[4] ^ 0x80000000;
        puVar2[5] = puVar2[5] ^ 0x80000000;
        puVar2[6] = puVar2[6] ^ 0x80000000;
        puVar2[7] = puVar2[7] ^ 0x80000000;
        puVar2 = puVar2 + 0x10;
      } while ((longlong)unaff_R15 < (longlong)(int)(uVar8 - uVar3));
    }
    lVar4 = (longlong)(int)uVar5;
    if (lVar4 < unaff_RSI) {
      if (3 < unaff_RSI - lVar4) {
        lVar1 = lVar4 * 4;
        lVar7 = ((unaff_RSI - lVar4) - 4U >> 2) + 1;
        lVar4 = lVar4 + lVar7 * 4;
        puVar2 = (uint *)(unaff_RBX + 8 + lVar1);
        do {
          puVar2[-2] = puVar2[-2] ^ 0x80000000;
          puVar2[-1] = puVar2[-1] ^ 0x80000000;
          *puVar2 = *puVar2 ^ 0x80000000;
          puVar2[1] = puVar2[1] ^ 0x80000000;
          lVar7 = lVar7 + -1;
          puVar2 = puVar2 + 4;
        } while (lVar7 != 0);
      }
      for (; lVar4 < unaff_RSI; lVar4 = lVar4 + 1) {
        *(uint *)(unaff_RBX + lVar4 * 4) = *(uint *)(unaff_RBX + lVar4 * 4) ^ 0x80000000;
      }
    }
  }
  return unaff_EBP;
}



ulonglong FUN_180718bd0(int *param_1,longlong param_2,int param_3,uint param_4,int param_5,
                       longlong param_6,int param_7,float param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  float *pfVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  uint auStackX_20 [2];
  int8_t auStack_80 [4];
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  
  lVar16 = *(longlong *)(param_1 + 2);
  uVar6 = 0;
  lVar18 = (longlong)param_3;
  pbVar14 = (byte *)((longlong)
                     *(short *)(*(longlong *)(lVar16 + 0x88) +
                               (longlong)(*(int *)(lVar16 + 8) * (param_7 + 1) + param_1[4]) * 2) +
                    *(longlong *)(lVar16 + 0x90));
  auStackX_20[0] = param_4;
  if (((param_7 == -1) || ((int)param_4 <= (int)(pbVar14[*pbVar14] + 0xc))) || (param_3 < 3)) {
    iVar1 = param_4 - 1;
    uVar3 = (int)(*pbVar14 + 1) >> 1;
    uVar2 = 0;
    if ((int)(uint)pbVar14[(int)uVar3] < iVar1) {
      uVar2 = uVar3;
    }
    if ((int)(uint)pbVar14[(int)uVar3] < iVar1) {
      uVar3 = (uint)*pbVar14;
    }
    uVar9 = (int)(uVar3 + 1 + uVar2) >> 1;
    if ((int)(uint)pbVar14[(int)uVar9] < iVar1) {
      uVar2 = uVar9;
      uVar9 = uVar3;
    }
    uVar3 = (int)(uVar9 + 1 + uVar2) >> 1;
    if ((int)(uint)pbVar14[(int)uVar3] < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar9;
    }
    uVar9 = (int)(uVar3 + 1 + uVar2) >> 1;
    if ((int)(uint)pbVar14[(int)uVar9] < iVar1) {
      uVar2 = uVar9;
      uVar9 = uVar3;
    }
    uVar3 = (int)(uVar9 + 1 + uVar2) >> 1;
    if ((int)(uint)pbVar14[(int)uVar3] < iVar1) {
      uVar2 = uVar3;
      uVar3 = uVar9;
    }
    uVar15 = (int)(uVar3 + 1 + uVar2) >> 1;
    uVar9 = uVar15;
    if ((int)(uint)pbVar14[(int)uVar15] < iVar1) {
      uVar9 = uVar3;
      uVar2 = uVar15;
    }
    if (uVar2 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)pbVar14[(int)uVar2];
    }
    if ((int)((uint)pbVar14[(int)uVar9] - iVar1) < (int)(iVar1 - uVar3)) {
      uVar2 = uVar9;
    }
    lVar17 = (longlong)(int)uVar2;
    uVar5 = uVar6;
    if (uVar2 != 0) {
      uVar5 = (ulonglong)(pbVar14[lVar17] + 1);
    }
    iVar1 = param_1[10] - (int)uVar5;
    param_1[10] = iVar1;
    if (iVar1 < 0) {
      do {
        if (lVar17 < 1) break;
        iVar1 = iVar1 + (int)uVar5;
        uVar2 = uVar2 - 1;
        param_1[10] = iVar1;
        lVar17 = lVar17 + -1;
        uVar5 = uVar6;
        if (lVar17 != 0) {
          uVar5 = (ulonglong)
                  (*(byte *)(*(short *)(*(longlong *)(lVar16 + 0x88) +
                                       (longlong)(*(int *)(lVar16 + 8) * (param_7 + 1) + param_1[4])
                                       * 2) + lVar17 + *(longlong *)(lVar16 + 0x90)) + 1);
        }
        iVar1 = iVar1 - (int)uVar5;
        param_1[10] = iVar1;
      } while (iVar1 < 0);
    }
    if (uVar2 == 0) {
      if (param_1[1] != 0) {
        uVar2 = (1 << ((byte)param_5 & 0x1f)) - 1;
        uVar3 = param_9 & uVar2;
        if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
          memset(param_2,0,lVar18 * 4);
        }
        if (param_6 == 0) {
          if (3 < lVar18) {
            lVar16 = (lVar18 - 4U >> 2) + 1;
            uVar6 = lVar16 * 4;
            pfVar8 = (float *)(param_2 + 8);
            do {
              iVar1 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = iVar1;
              pfVar8[-2] = (float)(iVar1 >> 0x14);
              iVar1 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = iVar1;
              pfVar8[-1] = (float)(iVar1 >> 0x14);
              iVar1 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = iVar1;
              *pfVar8 = (float)(iVar1 >> 0x14);
              iVar1 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = iVar1;
              pfVar8[1] = (float)(iVar1 >> 0x14);
              lVar16 = lVar16 + -1;
              pfVar8 = pfVar8 + 4;
            } while (lVar16 != 0);
          }
          for (; uVar3 = uVar2, (longlong)uVar6 < lVar18; uVar6 = uVar6 + 1) {
            iVar1 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
            param_1[0xe] = iVar1;
            *(float *)(param_2 + uVar6 * 4) = (float)(iVar1 >> 0x14);
          }
        }
        else {
          if (3 < lVar18) {
            lVar16 = param_6 - param_2;
            lVar17 = (lVar18 - 4U >> 2) + 1;
            pfVar8 = (float *)(param_2 + 4);
            uVar6 = lVar17 * 4;
            do {
              fVar19 = 0.00390625;
              uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = uVar2;
              if ((uVar2 >> 0xf & 1) == 0) {
                fVar19 = -0.00390625;
              }
              pfVar8[-1] = fVar19 + *(float *)(lVar16 + -4 + (longlong)pfVar8);
              fVar19 = 0.00390625;
              uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = uVar2;
              if ((uVar2 >> 0xf & 1) == 0) {
                fVar19 = -0.00390625;
              }
              *pfVar8 = fVar19 + *(float *)(lVar16 + (longlong)pfVar8);
              fVar19 = 0.00390625;
              uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = uVar2;
              if ((uVar2 >> 0xf & 1) == 0) {
                fVar19 = -0.00390625;
              }
              pfVar8[1] = fVar19 + *(float *)(lVar16 + 4 + (longlong)pfVar8);
              fVar19 = 0.00390625;
              uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = uVar2;
              if ((uVar2 >> 0xf & 1) == 0) {
                fVar19 = -0.00390625;
              }
              pfVar8[2] = fVar19 + *(float *)(lVar16 + 8 + (longlong)pfVar8);
              pfVar8 = pfVar8 + 4;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
          if ((longlong)uVar6 < lVar18) {
            pfVar8 = (float *)(param_2 + uVar6 * 4);
            lVar18 = lVar18 - uVar6;
            do {
              fVar19 = 0.00390625;
              uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
              param_1[0xe] = uVar2;
              if ((uVar2 >> 0xf & 1) == 0) {
                fVar19 = -0.00390625;
              }
              *pfVar8 = fVar19 + *(float *)((longlong)pfVar8 + (param_6 - param_2));
              pfVar8 = pfVar8 + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
        }
        FUN_180721bd0(param_2,param_3,param_8,param_1[0xf]);
        uVar6 = (ulonglong)uVar3;
      }
    }
    else {
      if (7 < (int)uVar2) {
        uVar2 = (uVar2 & 7) + 8 << ((char)((int)uVar2 >> 3) - 1U & 0x1f);
      }
      if (*param_1 == 0) {
        uVar6 = FUN_180721540(param_2,param_3,uVar2,param_1[6],param_5,*(uint64_t *)(param_1 + 8),
                              param_8);
      }
      else {
        uVar6 = FUN_1807213f0(param_2,param_3,uVar2,param_1[6],param_5,*(uint64_t *)(param_1 + 8),
                              param_8,param_1[1],param_1[0xf]);
      }
    }
  }
  else {
    param_3 = param_3 >> 1;
    param_7 = param_7 + -1;
    lVar16 = param_2 + (longlong)param_3 * 4;
    if (param_5 == 1) {
      param_9 = param_9 & 1 | param_9 * 2;
    }
    iVar1 = param_5 + 1 >> 1;
    FUN_180715830(param_1,auStack_80,param_2,lVar16,param_3,auStackX_20,iVar1,param_5,param_7,0,
                  &param_9);
    if ((1 < param_5) && ((uStack_70 & 0x3fff) != 0)) {
      if ((int)uStack_70 < 0x2001) {
        iStack_74 = (param_3 * 8 >> (5U - (char)param_7 & 0x1f)) + iStack_74;
        if (0 < iStack_74) {
          iStack_74 = 0;
        }
      }
      else {
        iStack_74 = iStack_74 - (iStack_74 >> (4U - (char)param_7 & 0x1f));
      }
    }
    uVar2 = (int)(auStackX_20[0] - iStack_74) / 2;
    uVar3 = uVar2;
    if ((int)auStackX_20[0] < (int)uVar2) {
      uVar3 = auStackX_20[0];
    }
    uVar5 = uVar6;
    if ((-1 < (int)uVar3) && (uVar5 = (ulonglong)uVar2, (int)auStackX_20[0] < (int)uVar2)) {
      uVar5 = (ulonglong)auStackX_20[0];
    }
    iVar13 = (int)uVar5;
    iVar11 = auStackX_20[0] - iVar13;
    param_1[10] = param_1[10] - iStack_6c;
    iVar12 = param_1[10];
    uVar10 = param_6 + (longlong)param_3 * 4;
    if (param_6 == 0) {
      uVar10 = uVar6;
    }
    bVar7 = (byte)(param_5 >> 1);
    if (iVar13 < iVar11) {
      iVar4 = FUN_180718bd0(param_1,lVar16,param_3,iVar11,iVar1,uVar10,param_7,
                            (float)iStack_78 * 3.0517578e-05 * param_8,
                            (int)param_9 >> ((byte)iVar1 & 0x1f));
      iVar12 = (iVar11 - iVar12) + param_1[10];
      if ((0x18 < iVar12) && (uStack_70 != 0x4000)) {
        iVar13 = iVar13 + -0x18 + iVar12;
      }
      uVar3 = FUN_180718bd0(param_1,param_2,param_3,iVar13,iVar1,param_6,param_7,
                            (float)iStack_7c * 3.0517578e-05 * param_8,param_9);
      uVar3 = uVar3 | iVar4 << (bVar7 & 0x1f);
    }
    else {
      uVar3 = FUN_180718bd0(param_1,param_2,param_3,uVar5,iVar1,param_6,param_7,
                            (float)iStack_7c * 3.0517578e-05 * param_8,param_9);
      iVar12 = (iVar13 - iVar12) + param_1[10];
      if ((0x18 < iVar12) && (uStack_70 != 0)) {
        iVar11 = iVar11 + -0x18 + iVar12;
      }
      iVar1 = FUN_180718bd0(param_1,lVar16,param_3,iVar11,iVar1,uVar10,param_7,
                            (float)iStack_78 * 3.0517578e-05 * param_8,
                            (int)param_9 >> ((byte)iVar1 & 0x1f));
      uVar3 = iVar1 << (bVar7 & 0x1f) | uVar3;
    }
    uVar6 = (ulonglong)uVar3;
  }
  return uVar6;
}



uint FUN_180718c67(uint64_t param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong in_RAX;
  byte bVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong unaff_RDI;
  char unaff_R12B;
  byte bVar8;
  int unaff_R13D;
  int unaff_R15D;
  int32_t *puStack0000000000000028;
  int iStack0000000000000030;
  float fStack0000000000000038;
  uint uStack0000000000000040;
  int iStack0000000000000048;
  int32_t *puStack0000000000000050;
  uint64_t in_stack_00000068;
  int iStack0000000000000070;
  int iStack0000000000000074;
  int iStack0000000000000078;
  int iStack000000000000007c;
  longlong lStack00000000000000f0;
  int in_stack_00000108;
  int iStack0000000000000110;
  longlong in_stack_00000118;
  int32_t in_stack_00000120;
  float in_stack_00000128;
  uint in_stack_00000130;
  
  lStack00000000000000f0 = param_2 + in_RAX * 4;
  if (unaff_R13D == 1) {
    in_stack_00000130 = in_stack_00000130 & 1 | in_stack_00000130 * 2;
  }
  puStack0000000000000050 = &stack0x00000130;
  iVar5 = (int)unaff_RDI;
  iStack0000000000000030 = unaff_R13D + 1 >> 1;
  puStack0000000000000028 = &stack0x00000108;
  iStack0000000000000048 = iVar5;
  iStack0000000000000110 = iStack0000000000000030;
  FUN_180715830();
  fVar1 = in_stack_00000128;
  if ((1 < unaff_R13D) && ((_iStack0000000000000078 & 0x3fff) != 0)) {
    if (iStack0000000000000078 < 0x2001) {
      iStack0000000000000074 = (unaff_R15D * 8 >> (5U - unaff_R12B & 0x1f)) + iStack0000000000000074
      ;
      if (0 < iStack0000000000000074) {
        iStack0000000000000074 = iVar5;
      }
    }
    else {
      iStack0000000000000074 =
           iStack0000000000000074 - (iStack0000000000000074 >> (4U - unaff_R12B & 0x1f));
    }
  }
  iVar2 = (in_stack_00000108 - iStack0000000000000074) / 2;
  iVar3 = iVar2;
  if (in_stack_00000108 < iVar2) {
    iVar3 = in_stack_00000108;
  }
  if ((-1 < iVar3) && (iVar5 = iVar2, in_stack_00000108 < iVar2)) {
    iVar5 = in_stack_00000108;
  }
  *(int *)(unaff_RBX + 0x28) = *(int *)(unaff_RBX + 0x28) - iStack000000000000007c;
  in_stack_00000120 = *(int32_t *)(unaff_RBX + 0x28);
  lVar7 = in_stack_00000118 + (longlong)unaff_R15D * 4;
  if (in_stack_00000118 == 0) {
    lVar7 = unaff_RDI;
  }
  bVar6 = (byte)iStack0000000000000110;
  bVar8 = (byte)(unaff_R13D >> 1);
  if (iVar5 < in_stack_00000108 - iVar5) {
    uStack0000000000000040 = (int)in_stack_00000130 >> (bVar6 & 0x1f);
    fStack0000000000000038 = (float)iStack0000000000000070 * 3.0517578e-05 * in_stack_00000128;
    puStack0000000000000028 = (int32_t *)lVar7;
    iVar5 = FUN_180718bd0();
    uStack0000000000000040 = in_stack_00000130;
    fStack0000000000000038 = (float)in_stack_00000068._4_4_ * 3.0517578e-05 * fVar1;
    puStack0000000000000028 = (int32_t *)in_stack_00000118;
    uVar4 = FUN_180718bd0();
    uVar4 = uVar4 | iVar5 << (bVar8 & 0x1f);
  }
  else {
    uStack0000000000000040 = in_stack_00000130;
    fStack0000000000000038 = (float)in_stack_00000068._4_4_ * 3.0517578e-05 * in_stack_00000128;
    puStack0000000000000028 = (int32_t *)in_stack_00000118;
    uVar4 = FUN_180718bd0();
    uStack0000000000000040 = (int)in_stack_00000130 >> (bVar6 & 0x1f);
    fStack0000000000000038 = (float)iStack0000000000000070 * 3.0517578e-05 * fVar1;
    puStack0000000000000028 = (int32_t *)lVar7;
    iVar5 = FUN_180718bd0();
    uVar4 = iVar5 << (bVar8 & 0x1f) | uVar4;
  }
  return uVar4;
}



uint FUN_180718dab(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong in_RAX;
  byte bVar3;
  int unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int unaff_R13D;
  bool in_ZF;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  longlong lStack0000000000000028;
  float fStack0000000000000038;
  int iStack0000000000000040;
  longlong lStack0000000000000060;
  byte in_stack_00000110;
  uint64_t in_stack_00000118;
  float in_stack_00000128;
  int in_stack_00000130;
  
  lStack0000000000000028 = in_RAX + param_1 * 4;
  if (in_ZF) {
    lStack0000000000000028 = unaff_RDI;
  }
  bVar3 = (byte)(unaff_R13D >> 1);
  lStack0000000000000060 = lStack0000000000000028;
  if (unaff_ESI < unaff_EBP) {
    iStack0000000000000040 = in_stack_00000130 >> (in_stack_00000110 & 0x1f);
    fStack0000000000000038 = unaff_XMM7_Da * in_stack_00000128;
    iVar2 = FUN_180718bd0();
    iStack0000000000000040 = in_stack_00000130;
    fStack0000000000000038 = unaff_XMM6_Da * in_stack_00000128;
    lStack0000000000000028 = in_stack_00000118;
    uVar1 = FUN_180718bd0();
    uVar1 = uVar1 | iVar2 << (bVar3 & 0x1f);
  }
  else {
    iStack0000000000000040 = in_stack_00000130;
    fStack0000000000000038 = unaff_XMM6_Da * in_stack_00000128;
    uVar1 = FUN_180718bd0();
    iStack0000000000000040 = in_stack_00000130 >> (in_stack_00000110 & 0x1f);
    fStack0000000000000038 = unaff_XMM7_Da * in_stack_00000128;
    lStack0000000000000028 = lStack0000000000000060;
    iVar2 = FUN_180718bd0();
    uVar1 = iVar2 << (bVar3 & 0x1f) | uVar1;
  }
  return uVar1;
}







