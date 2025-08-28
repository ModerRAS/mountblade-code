#include "TaleWorlds.Native.Split.h"

// 99_part_03_part058.c - 8 个函数

// 函数: void FUN_180234600(longlong param_1,int param_2)
void FUN_180234600(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar2 + 0x14) < param_2) {
    iVar1 = *(int *)(lVar2 + 0x14);
    iVar3 = 8;
    if (iVar1 < param_2) {
      if (param_2 == 0) {
        if (iVar1 < 2) {
          *(int32_t *)(lVar2 + 0x14) = 8;
        }
        else {
          *(int *)(lVar2 + 0x14) = (iVar1 >> 1) + iVar1;
        }
      }
      else {
        *(int *)(lVar2 + 0x14) = param_2;
      }
      FUN_1800846d0();
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if ((*(int *)(lVar2 + 0x38) != 0) && (iVar1 = *(int *)(lVar2 + 0x3c), iVar1 < param_2)) {
      if (param_2 == 0) {
        if (1 < iVar1) {
          iVar3 = (iVar1 >> 1) + iVar1;
        }
        *(int *)(lVar2 + 0x3c) = iVar3;
      }
      else {
        *(int *)(lVar2 + 0x3c) = param_2;
      }
      FUN_1800846d0();
    }
  }
  return;
}






// 函数: void FUN_18023461f(longlong param_1,int param_2)
void FUN_18023461f(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong unaff_RSI;
  int unaff_EDI;
  
  iVar3 = 8;
  if (param_2 < unaff_EDI) {
    if (unaff_EDI == 0) {
      if (param_2 < 2) {
        *(int32_t *)(param_1 + 4) = 8;
      }
      else {
        *(int *)(param_1 + 4) = (param_2 >> 1) + param_2;
      }
    }
    else {
      *(int *)(param_1 + 4) = unaff_EDI;
    }
    FUN_1800846d0();
  }
  lVar2 = *(longlong *)(unaff_RSI + 8);
  if ((*(int *)(lVar2 + 0x38) != 0) && (iVar1 = *(int *)(lVar2 + 0x3c), iVar1 < unaff_EDI)) {
    if (unaff_EDI == 0) {
      if (1 < iVar1) {
        iVar3 = (iVar1 >> 1) + iVar1;
      }
      *(int *)(lVar2 + 0x3c) = iVar3;
    }
    else {
      *(int *)(lVar2 + 0x3c) = unaff_EDI;
    }
    FUN_1800846d0();
  }
  return;
}






// 函数: void FUN_180234685(void)
void FUN_180234685(void)

{
  return;
}






// 函数: void FUN_180234690(longlong param_1)
void FUN_180234690(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x38) == iVar1) {
    return;
  }
  *(int *)(lVar2 + 0x38) = iVar1;
  *(int8_t *)(lVar2 + 0x58) = *(int8_t *)(lVar2 + 0x30);
  if (*(int *)(lVar2 + 0x3c) < *(int *)(lVar2 + 0x14)) {
    *(int *)(lVar2 + 0x3c) = *(int *)(lVar2 + 0x14);
    FUN_1800846d0(lVar2 + 0x38);
    iVar1 = *(int *)(lVar2 + 0x38);
  }
                    // WARNING: Subroutine does not return
  memcpy(*(uint64_t *)(lVar2 + 0x40),*(uint64_t *)(lVar2 + 0x18),(longlong)iVar1 << 4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1802346f0(longlong *param_1)

{
  int iVar1;
  void *puVar2;
  
  iVar1 = FUN_1802349a0(param_1[1]);
  if ((10 < iVar1) ||
     ((int)(*(int *)(param_1[1] + 0x88) + (*(int *)(param_1[1] + 0x88) >> 0x1f & 3U)) >> 2 < iVar1))
  {
    puVar2 = &DAT_18098bc73;
    if (*(void **)(*param_1 + 0x18) != (void *)0x0) {
      puVar2 = *(void **)(*param_1 + 0x18);
    }
    FUN_1800623b0(_DAT_180c86928,0,0x80000000000,3,&UNK_1809ffb30,iVar1,puVar2,
                  *(int32_t *)(param_1[1] + 0x60));
  }
  *(int8_t *)(param_1 + 6) = 1;
  return iVar1;
}






// 函数: void FUN_180234880(longlong param_1,float *param_2,float param_3,int param_4,int param_5)
void FUN_180234880(longlong param_1,float *param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  
  fVar1 = param_2[2];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  param_3 = -param_3;
  lVar4 = (longlong)
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) +
                  ((longlong)param_4 * 3 + (longlong)param_5) * 4) * 0x5c +
          *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
  *(float *)(lVar4 + 0x14) = fVar2;
  *(float *)(lVar4 + 0x18) = fVar3;
  *(float *)(lVar4 + 0x1c) = fVar1;
  *(int32_t *)(lVar4 + 0x20) = 0x7f7fffff;
  *(float *)(lVar4 + 0x24) =
       (fVar1 * *(float *)(lVar4 + 0x38) - fVar3 * *(float *)(lVar4 + 0x3c)) * param_3;
  *(float *)(lVar4 + 0x28) =
       (fVar2 * *(float *)(lVar4 + 0x3c) - fVar1 * *(float *)(lVar4 + 0x34)) * param_3;
  *(float *)(lVar4 + 0x2c) =
       (fVar3 * *(float *)(lVar4 + 0x34) - fVar2 * *(float *)(lVar4 + 0x38)) * param_3;
  *(int32_t *)(lVar4 + 0x30) = 0x7f7fffff;
  return;
}



uint64_t FUN_1802349a0(uint64_t param_1)

{
  void **ppuStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  void *puStack_40;
  void *puStack_38;
  void *puStack_30;
  void *puStack_28;
  code *pcStack_20;
  uint64_t uStack_18;
  
  puStack_48 = &UNK_180234790;
  uStack_18 = 0;
  puStack_40 = &UNK_18022bf60;
  puStack_38 = &UNK_1802347a0;
  puStack_30 = &UNK_1802347f0;
  puStack_28 = &UNK_180234830;
  pcStack_20 = FUN_180234880;
  ppuStack_58 = &puStack_48;
  uStack_50 = param_1;
  FUN_18040fa30(&ppuStack_58);
  return 0;
}






// 函数: void FUN_180234a10(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_180234a10(longlong param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int32_t *puVar8;
  float *pfVar9;
  ulonglong uVar10;
  float *pfVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  int32_t uVar18;
  int32_t uVar20;
  int32_t uVar21;
  int8_t auVar19 [16];
  int32_t uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int32_t *puStack_c0;
  longlong lStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  longlong alStack_a0 [3];
  int32_t uStack_88;
  
  cVar12 = (char)param_3;
  alStack_a0[0] = 0;
  alStack_a0[1] = 0;
  uVar10 = 0;
  alStack_a0[2] = 0;
  uStack_88 = 3;
  FUN_180080aa0(alStack_a0,(longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x88),param_3,param_4,
                0xfffffffffffffffe);
  lVar4 = alStack_a0[0];
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < *(int *)(lVar7 + 0x88)) {
    pfVar9 = (float *)(alStack_a0[0] + 4);
    uVar14 = uVar10;
    uVar15 = uVar10;
    do {
      lVar7 = *(longlong *)(param_1 + 8);
      lVar6 = *(longlong *)(lVar7 + 0x90);
      lVar3 = *(longlong *)(lVar7 + 0x68);
      lVar7 = *(longlong *)(lVar7 + 0x18);
      pfVar11 = (float *)((longlong)*(int *)((longlong)*(int *)(lVar6 + uVar14) * 0x5c + lVar3) *
                          0x10 + lVar7);
      lVar5 = (longlong)*(int *)((longlong)*(int *)(lVar6 + 4 + uVar14) * 0x5c + lVar3);
      fVar29 = *(float *)(lVar7 + lVar5 * 0x10) - *pfVar11;
      fVar27 = *(float *)(lVar7 + 4 + lVar5 * 0x10) - pfVar11[1];
      fVar26 = *(float *)(lVar7 + 8 + lVar5 * 0x10) - pfVar11[2];
      lVar6 = (longlong)*(int *)((longlong)*(int *)(lVar6 + 8 + uVar14) * 0x5c + lVar3);
      fVar25 = *(float *)(lVar7 + lVar6 * 0x10) - *pfVar11;
      fVar24 = *(float *)(lVar7 + 4 + lVar6 * 0x10) - pfVar11[1];
      fVar23 = *(float *)(lVar7 + 8 + lVar6 * 0x10) - pfVar11[2];
      fVar28 = fVar23 * fVar27 - fVar24 * fVar26;
      fVar26 = fVar25 * fVar26 - fVar29 * fVar23;
      fVar25 = fVar29 * fVar24 - fVar25 * fVar27;
      fVar23 = fVar25 * fVar25 + fVar26 * fVar26 + fVar28 * fVar28;
      auVar19 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
      fVar24 = auVar19._0_4_;
      fVar23 = fVar24 * 0.5 * (3.0 - fVar23 * fVar24 * fVar24);
      pfVar9[-1] = fVar23 * fVar28;
      *pfVar9 = fVar23 * fVar26;
      pfVar9[1] = fVar25 * fVar23;
      uVar16 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar16;
      uVar14 = uVar14 + 0xc;
      pfVar9 = pfVar9 + 4;
      lVar7 = *(longlong *)(param_1 + 8);
    } while ((int)uVar16 < *(int *)(lVar7 + 0x88));
  }
  uVar14 = uVar10;
  uVar15 = uVar10;
  if (0 < *(int *)(lVar7 + 0x60)) {
    do {
      if ((param_2 == '\0') || (*(int *)(*(longlong *)(lVar7 + 0x68) + 0x58 + uVar14) != 0xbaddad))
      {
        puVar8 = (int32_t *)(*(longlong *)(lVar7 + 0x68) + 0x34 + uVar14);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0x7f7fffff;
        lVar7 = *(longlong *)(param_1 + 8);
      }
      uVar16 = (int)uVar15 + 1;
      uVar14 = uVar14 + 0x5c;
      uVar15 = (ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(lVar7 + 0x60));
  }
  puStack_c0 = (int32_t *)0x0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 3;
  if (cVar12 == '\0') {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x60);
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  FUN_180080aa0(&puStack_c0,(longlong)iVar2);
  uVar15 = lStack_b8 - (longlong)puStack_c0 >> 4;
  puVar8 = puStack_c0;
  uVar14 = uVar10;
  if (uVar15 != 0) {
    do {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0x7f7fffff;
      uVar16 = (int)uVar14 + 1;
      puVar8 = puVar8 + 4;
      uVar14 = (ulonglong)uVar16;
    } while ((ulonglong)(longlong)(int)uVar16 < uVar15);
  }
  lVar7 = *(longlong *)(param_1 + 8);
  if (0 < *(int *)(lVar7 + 0x88)) {
    pfVar9 = (float *)(lVar4 + 8);
    uVar14 = uVar10;
    uVar13 = uVar10;
    uVar17 = uVar10;
    do {
      uVar16 = *(uint *)(uVar13 + *(longlong *)(lVar7 + 0x90));
      if (cVar12 == '\0') {
        pfVar11 = (float *)(puStack_c0 + (ulonglong)uVar16 * 4);
        *pfVar11 = *pfVar11 + pfVar9[-2];
        pfVar11[1] = pfVar9[-1] + pfVar11[1];
        pfVar11[2] = pfVar11[2] + *pfVar9;
      }
      else {
        pfVar11 = (float *)(puStack_c0 +
                           (ulonglong)
                           *(uint *)((longlong)(int)uVar16 * 0x5c + *(longlong *)(lVar7 + 0x68)) * 4
                           );
        *pfVar11 = pfVar9[-2] + *pfVar11;
        pfVar11[1] = pfVar11[1] + pfVar9[-1];
        pfVar11[2] = pfVar11[2] + *pfVar9;
      }
      uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + uVar13);
      if (cVar12 == '\0') {
        pfVar11 = (float *)(puStack_c0 + (ulonglong)uVar16 * 4);
        *pfVar11 = *pfVar11 + pfVar9[-2];
        pfVar11[1] = pfVar9[-1] + pfVar11[1];
        pfVar11[2] = pfVar11[2] + *pfVar9;
      }
      else {
        pfVar11 = (float *)(puStack_c0 +
                           (ulonglong)
                           *(uint *)((longlong)(int)uVar16 * 0x5c +
                                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x68)) * 4);
        *pfVar11 = pfVar9[-2] + *pfVar11;
        pfVar11[1] = pfVar11[1] + pfVar9[-1];
        pfVar11[2] = pfVar11[2] + *pfVar9;
      }
      uVar16 = *(uint *)(uVar17 + 8 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90));
      if (cVar12 == '\0') {
        pfVar11 = (float *)(puStack_c0 + (ulonglong)uVar16 * 4);
        *pfVar11 = *pfVar11 + pfVar9[-2];
        fVar23 = pfVar9[-1] + pfVar11[1];
      }
      else {
        pfVar11 = (float *)(puStack_c0 +
                           (ulonglong)
                           *(uint *)((longlong)(int)uVar16 * 0x5c +
                                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x68)) * 4);
        *pfVar11 = pfVar9[-2] + *pfVar11;
        fVar23 = pfVar11[1] + pfVar9[-1];
      }
      pfVar11[1] = fVar23;
      pfVar11[2] = pfVar11[2] + *pfVar9;
      lVar7 = *(longlong *)(param_1 + 8);
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      uVar13 = uVar13 + 0xc;
      uVar17 = uVar17 + 0xc;
      pfVar9 = pfVar9 + 4;
    } while ((int)uVar16 < *(int *)(lVar7 + 0x88));
  }
  if (uVar15 != 0) {
    pfVar9 = (float *)(puStack_c0 + 2);
    uVar14 = uVar10;
    do {
      fVar23 = pfVar9[-1];
      fVar24 = pfVar9[-2];
      fVar25 = *pfVar9;
      fVar26 = fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25;
      if (fVar26 <= 0.0001) {
        pfVar9[-2] = 0.0;
        pfVar9[-1] = 0.0;
        *pfVar9 = 1.0;
        pfVar9[1] = 3.4028235e+38;
      }
      else {
        auVar19 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
        fVar27 = auVar19._0_4_;
        fVar26 = fVar27 * 0.5 * (3.0 - fVar26 * fVar27 * fVar27);
        pfVar9[-2] = fVar26 * fVar24;
        pfVar9[-1] = fVar26 * fVar23;
        *pfVar9 = fVar26 * fVar25;
      }
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      pfVar9 = pfVar9 + 4;
    } while ((ulonglong)(longlong)(int)uVar16 < uVar15);
    lVar7 = *(longlong *)(param_1 + 8);
  }
  uVar14 = uVar10;
  puVar8 = puStack_c0;
  if (0 < *(int *)(lVar7 + 0x60)) {
    do {
      lVar7 = *(longlong *)(lVar7 + 0x68);
      if ((param_2 == '\0') || (*(int *)(uVar10 + 0x58 + lVar7) != 0xbaddad)) {
        if (cVar12 == '\0') {
          uVar18 = *puVar8;
          uVar20 = puVar8[1];
          uVar21 = puVar8[2];
          uVar22 = puVar8[3];
        }
        else {
          puVar1 = puStack_c0 + (ulonglong)*(uint *)(uVar10 + lVar7) * 4;
          uVar18 = *puVar1;
          uVar20 = puVar1[1];
          uVar21 = puVar1[2];
          uVar22 = puVar1[3];
        }
        puVar1 = (int32_t *)(uVar10 + 0x34 + lVar7);
        *puVar1 = uVar18;
        puVar1[1] = uVar20;
        puVar1[2] = uVar21;
        puVar1[3] = uVar22;
      }
      uVar16 = (int)uVar14 + 1;
      uVar10 = uVar10 + 0x5c;
      lVar7 = *(longlong *)(param_1 + 8);
      uVar14 = (ulonglong)uVar16;
      puVar8 = puVar8 + 4;
    } while ((int)uVar16 < *(int *)(lVar7 + 0x60));
  }
  *(int8_t *)(param_1 + 0x30) = 1;
  if (puStack_c0 == (int32_t *)0x0) {
    if (lVar4 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puStack_c0);
}



int FUN_180235000(longlong param_1,uint64_t *param_2)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  longlong lVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  lVar4 = *(longlong *)(param_1 + 8);
  iVar10 = 8;
  iVar3 = *(int *)(lVar4 + 0x10);
  iVar9 = *(int *)(lVar4 + 0x14);
  iVar11 = iVar3 + 1;
  if (iVar9 < iVar11) {
    if (iVar9 < 2) {
      iVar9 = 8;
    }
    else {
      iVar9 = (iVar9 >> 1) + iVar9;
    }
    *(int *)(lVar4 + 0x14) = iVar9;
    FUN_1800846d0(lVar4 + 0x10);
  }
  *(int *)(lVar4 + 0x10) = iVar11;
  uVar5 = *(int32_t *)((longlong)param_2 + 4);
  uVar6 = *(int32_t *)(param_2 + 1);
  uVar7 = *(int32_t *)((longlong)param_2 + 0xc);
  puVar1 = (int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + (longlong)iVar3 * 0x10)
  ;
  *puVar1 = *(int32_t *)param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar4 + 0x38) != 0) {
    iVar9 = *(int *)(lVar4 + 0x3c);
    if (iVar9 < iVar11) {
      if (1 < iVar9) {
        iVar10 = (iVar9 >> 1) + iVar9;
      }
      *(int *)(lVar4 + 0x3c) = iVar10;
      FUN_1800846d0(lVar4 + 0x38);
    }
    *(int *)(lVar4 + 0x38) = iVar11;
    uVar8 = param_2[1];
    puVar2 = (uint64_t *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar3 * 0x10);
    *puVar2 = *param_2;
    puVar2[1] = uVar8;
  }
  *(int8_t *)(param_1 + 0x30) = 1;
  *(int8_t *)(param_1 + 0x32) = 1;
  return iVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802350e0(longlong param_1)
void FUN_1802350e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int8_t *puVar4;
  int8_t auStack_b8 [32];
  int8_t auStack_98 [68];
  int8_t auStack_54 [28];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 100);
  iVar3 = *(int *)(lVar2 + 0x60) + 1;
  if (iVar1 < iVar3) {
    if (iVar1 < 2) {
      iVar1 = 8;
    }
    else {
      iVar1 = (iVar1 >> 1) + iVar1;
    }
    *(int *)(lVar2 + 100) = iVar1;
    FUN_180086010(lVar2 + 0x60);
  }
  *(int *)(lVar2 + 0x60) = iVar3;
  puVar4 = auStack_54;
  lVar2 = 2;
  do {
    func_0x00018005d390(puVar4);
    puVar4 = puVar4 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    // WARNING: Subroutine does not return
  memset(auStack_98,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180235270(longlong param_1)
void FUN_180235270(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int8_t *puVar4;
  int8_t auStack_b8 [32];
  int8_t auStack_98 [68];
  int8_t auStack_54 [28];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 100);
  iVar3 = *(int *)(lVar2 + 0x60) + 1;
  if (iVar1 < iVar3) {
    if (iVar1 < 2) {
      iVar1 = 8;
    }
    else {
      iVar1 = (iVar1 >> 1) + iVar1;
    }
    *(int *)(lVar2 + 100) = iVar1;
    FUN_180086010(lVar2 + 0x60);
  }
  *(int *)(lVar2 + 0x60) = iVar3;
  puVar4 = auStack_54;
  lVar2 = 2;
  do {
    func_0x00018005d390(puVar4);
    puVar4 = puVar4 + 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    // WARNING: Subroutine does not return
  memset(auStack_98,0,0x5c);
}



int FUN_180235410(longlong param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x88);
  iVar3 = *(int *)(lVar2 + 0x8c);
  if (iVar3 < iVar1 + 1) {
    if (iVar3 < 2) {
      iVar3 = 8;
    }
    else {
      iVar3 = (iVar3 >> 1) + iVar3;
    }
    *(int *)(lVar2 + 0x8c) = iVar3;
    FUN_180085f20(lVar2 + 0x88);
  }
  *(int *)(lVar2 + 0x88) = iVar1 + 1;
  lVar2 = (longlong)iVar1 * 0xc;
  *(int32_t *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90)) = param_2;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + lVar2) = param_3;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8 + lVar2) = param_4;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar1;
}



int FUN_1802354f0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  
  uVar4 = FUN_180235000();
  uVar5 = FUN_180235000(param_1,param_3);
  uVar6 = FUN_180235000(param_1,param_4);
  uVar4 = FUN_1802350e0(param_1,uVar4,param_5,param_8,&stack0xffffffffffffffe8);
  uVar5 = FUN_1802350e0(param_1,uVar5,param_6,param_8,&stack0xffffffffffffffe8);
  uVar6 = FUN_1802350e0(param_1,uVar6,param_7,param_8,&stack0xffffffffffffffe8);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x88);
  iVar3 = *(int *)(lVar2 + 0x8c);
  if (iVar3 < iVar1 + 1) {
    if (iVar3 < 2) {
      iVar3 = 8;
    }
    else {
      iVar3 = (iVar3 >> 1) + iVar3;
    }
    *(int *)(lVar2 + 0x8c) = iVar3;
    FUN_180085f20(lVar2 + 0x88);
  }
  *(int *)(lVar2 + 0x88) = iVar1 + 1;
  lVar2 = (longlong)iVar1 * 0xc;
  *(int32_t *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90)) = uVar4;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + lVar2) = uVar5;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8 + lVar2) = uVar6;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar1;
}



int FUN_1802355d0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                 uint64_t param_5,uint64_t param_6,uint64_t param_7,uint64_t param_8,
                 uint64_t param_9,uint64_t param_10,uint64_t param_11,uint64_t param_12,
                 uint64_t param_13)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  
  uVar4 = FUN_180235000();
  uVar5 = FUN_180235000(param_1,param_3);
  uVar6 = FUN_180235000(param_1,param_4);
  uVar4 = FUN_1802350e0(param_1,uVar4,param_8,param_11,param_5);
  uVar5 = FUN_1802350e0(param_1,uVar5,param_9,param_12,param_6);
  uVar6 = FUN_1802350e0(param_1,uVar6,param_10,param_13,param_7);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x88);
  iVar3 = *(int *)(lVar2 + 0x8c);
  if (iVar3 < iVar1 + 1) {
    if (iVar3 < 2) {
      iVar3 = 8;
    }
    else {
      iVar3 = (iVar3 >> 1) + iVar3;
    }
    *(int *)(lVar2 + 0x8c) = iVar3;
    FUN_180085f20(lVar2 + 0x88);
  }
  *(int *)(lVar2 + 0x88) = iVar1 + 1;
  lVar2 = (longlong)iVar1 * 0xc;
  *(int32_t *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90)) = uVar4;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + lVar2) = uVar5;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8 + lVar2) = uVar6;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar1;
}



int FUN_1802356b0(longlong param_1,float *param_2,float *param_3,float *param_4,uint64_t param_5,
                 uint64_t param_6)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  float fStackX_18;
  float fStackX_1c;
  float *pfStackX_20;
  uint64_t uStack_58;
  uint64_t uStack_50;
  
  uStack_58 = *(uint64_t *)param_2;
  uStack_50 = CONCAT44(0x7f7fffff,param_2[2]);
  pfStackX_20 = param_4;
  uVar7 = FUN_180235000(param_2[2],&uStack_58);
  uStack_50 = CONCAT44(0x7f7fffff,param_2[2]);
  uStack_58 = CONCAT44(param_2[1],*param_2 + *param_3);
  uVar8 = FUN_180235000(param_1,&uStack_58);
  uStack_50 = CONCAT44(0x7f7fffff,param_2[2]);
  uStack_58 = CONCAT44(param_3[1] + param_2[1],*param_2 + *param_3);
  uVar9 = FUN_180235000(param_1,&uStack_58);
  uStack_50 = CONCAT44(0x7f7fffff,param_2[2]);
  uStack_58 = CONCAT44(param_3[1] + param_2[1],*param_2);
  uVar10 = FUN_180235000(param_1,&uStack_58);
  uVar5 = param_6;
  pfVar4 = pfStackX_20;
  pfVar3 = (float *)CONCAT44(param_5._4_4_,(float)param_5);
  uStack_58 = 0;
  uStack_50 = 0x7f7fffff3f800000;
  _fStackX_18 = CONCAT44(pfStackX_20[1] - pfVar3[1],*pfStackX_20);
  uVar7 = FUN_1802350e0(param_1,uVar7,&fStackX_18,param_6,&uStack_58);
  param_5._0_4_ = *pfVar4 + *pfVar3;
  param_5._4_4_ = pfVar4[1] - pfVar3[1];
  uVar8 = FUN_1802350e0(param_1,uVar8,&param_5,uVar5,&uStack_58);
  param_5._0_4_ = *pfVar4 + *pfVar3;
  param_5._4_4_ = pfVar4[1];
  uVar9 = FUN_1802350e0(param_1,uVar9,&param_5,uVar5,&uStack_58);
  uVar10 = FUN_1802350e0(param_1,uVar10,pfStackX_20,uVar5,&uStack_58);
  FUN_180235410(param_1,uVar7,uVar8,uVar9);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x88);
  iVar6 = *(int *)(lVar2 + 0x8c);
  if (iVar6 < iVar1 + 1) {
    if (iVar6 < 2) {
      iVar6 = 8;
    }
    else {
      iVar6 = (iVar6 >> 1) + iVar6;
    }
    *(int *)(lVar2 + 0x8c) = iVar6;
    FUN_180085f20(lVar2 + 0x88);
  }
  *(int *)(lVar2 + 0x88) = iVar1 + 1;
  lVar2 = (longlong)iVar1 * 0xc;
  *(int32_t *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90)) = uVar7;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + lVar2) = uVar9;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8 + lVar2) = uVar10;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar1;
}



int FUN_1802358c0(longlong param_1,float *param_2,float *param_3,float *param_4,uint64_t param_5,
                 uint64_t param_6)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  uint64_t uVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  float fStackX_18;
  float fStackX_1c;
  uint64_t uStackX_20;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t uStack_4c;
  
  fStack_58 = *param_2;
  fStack_54 = param_2[1];
  fStack_50 = param_2[2];
  uStack_4c = 0x7f7fffff;
  uStackX_20 = param_4;
  uVar7 = FUN_180235000(fStack_50,&fStack_58);
  fStack_58 = *param_2 + *param_3;
  fStack_50 = param_2[2];
  uStack_4c = 0x7f7fffff;
  fStack_54 = param_2[1];
  uVar8 = FUN_180235000(param_1,&fStack_58);
  fStack_58 = *param_2 + *param_3;
  fStack_54 = param_3[1] + param_2[1];
  uStack_4c = 0x7f7fffff;
  fStack_50 = param_2[2];
  uVar9 = FUN_180235000(param_1,&fStack_58);
  fStack_58 = *param_2;
  fStack_54 = param_3[1] + param_2[1];
  fStack_50 = param_2[2];
  uStack_4c = 0x7f7fffff;
  uVar10 = FUN_180235000(param_1,&fStack_58);
  uVar5 = param_6;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  fStack_50 = 1.0;
  uStack_4c = 0x7f7fffff;
  uVar7 = FUN_1802350e0(param_1,uVar7,param_4,param_6,&fStack_58);
  pfVar4 = uStackX_20;
  pfVar3 = (float *)CONCAT44(param_5._4_4_,(float)param_5);
  _fStackX_18 = CONCAT44(uStackX_20[1] - pfVar3[1],*uStackX_20);
  uVar8 = FUN_1802350e0(param_1,uVar8,&fStackX_18,uVar5,&fStack_58);
  param_5._0_4_ = *pfVar4 + *pfVar3;
  param_5._4_4_ = pfVar4[1] - pfVar3[1];
  uVar9 = FUN_1802350e0(param_1,uVar9,&param_5,uVar5,&fStack_58);
  uStackX_20 = (float *)CONCAT44(uStackX_20[1],*uStackX_20 + *pfVar3);
  uVar10 = FUN_1802350e0(param_1,uVar10,&uStackX_20,uVar5,&fStack_58);
  FUN_180235410(param_1,uVar7,uVar8,uVar9);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x88);
  iVar6 = *(int *)(lVar2 + 0x8c);
  if (iVar6 < iVar1 + 1) {
    if (iVar6 < 2) {
      iVar6 = 8;
    }
    else {
      iVar6 = (iVar6 >> 1) + iVar6;
    }
    *(int *)(lVar2 + 0x8c) = iVar6;
    FUN_180085f20(lVar2 + 0x88);
  }
  *(int *)(lVar2 + 0x88) = iVar1 + 1;
  lVar2 = (longlong)iVar1 * 0xc;
  *(int32_t *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90)) = uVar7;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + lVar2) = uVar9;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8 + lVar2) = uVar10;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar1;
}



int FUN_180235ae0(longlong param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4,
                 uint64_t param_5,uint64_t param_6)

{
  int iVar1;
  longlong lVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uStackX_20;
  int32_t uStack_48;
  int32_t uStack_44;
  uint64_t uStack_40;
  
  uStackX_20 = param_4;
  uVar6 = FUN_180235000();
  uStack_48 = *param_3;
  uStack_44 = param_2[1];
  uStack_40 = CONCAT44(0x7f7fffff,param_2[2]);
  uVar7 = FUN_180235000(param_1,&uStack_48);
  uStack_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = CONCAT44(0x7f7fffff,param_2[2]);
  uVar8 = FUN_180235000(param_1,&uStack_48);
  uStack_48 = *param_2;
  uStack_44 = param_3[1];
  uStack_40 = CONCAT44(0x7f7fffff,param_2[2]);
  uVar9 = FUN_180235000(param_1,&uStack_48);
  uVar4 = param_6;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0x7f7fffff3f800000;
  uVar6 = FUN_1802350e0(param_1,uVar6,param_4,param_6,&uStack_48);
  puVar3 = (int32_t *)CONCAT44(param_5._4_4_,(int32_t)param_5);
  param_5._0_4_ = *puVar3;
  param_5._4_4_ = uStackX_20[1];
  uVar7 = FUN_1802350e0(param_1,uVar7,&param_5,uVar4,&uStack_48);
  uVar8 = FUN_1802350e0(param_1,uVar8,puVar3,uVar4,&uStack_48);
  uStackX_20 = (int32_t *)CONCAT44(puVar3[1],*uStackX_20);
  uVar9 = FUN_1802350e0(param_1,uVar9,&uStackX_20,uVar4,&uStack_48);
  FUN_180235410(param_1,uVar6,uVar7,uVar8);
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x88);
  iVar5 = *(int *)(lVar2 + 0x8c);
  if (iVar5 < iVar1 + 1) {
    if (iVar5 < 2) {
      iVar5 = 8;
    }
    else {
      iVar5 = (iVar5 >> 1) + iVar5;
    }
    *(int *)(lVar2 + 0x8c) = iVar5;
    uStack_40 = 0x18023547b;
    FUN_180085f20(lVar2 + 0x88);
  }
  *(int *)(lVar2 + 0x88) = iVar1 + 1;
  lVar2 = (longlong)iVar1 * 0xc;
  *(int32_t *)(lVar2 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x90)) = uVar6;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 4 + lVar2) = uVar8;
  *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 8 + lVar2) = uVar9;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




