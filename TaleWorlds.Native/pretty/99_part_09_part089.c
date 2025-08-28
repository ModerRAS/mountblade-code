#include "TaleWorlds.Native.Split.h"

// 99_part_09_part089.c - 10 个函数

// 函数: void FUN_1805f9a90(longlong *param_1,uint64_t param_2)
void FUN_1805f9a90(longlong *param_1,uint64_t param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int8_t auStack_478 [32];
  longlong alStack_458 [2];
  int aiStack_448 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_478;
  uVar8 = 0;
  if (0 < *(int *)(param_1[4] + 0x5c8)) {
    FUN_1805fa870();
    *(int32_t *)(*(longlong *)(param_1[1] + -8) + 0x5c4) = 0;
  }
  FUN_1805f9d00(param_1,param_2);
  lVar2 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(alStack_458);
    lVar2 = alStack_458[0];
  }
  lVar10 = param_1[1];
  plVar4 = (longlong *)*param_1;
  dVar1 = (double)(lVar2 - _DAT_180c8ed48) * _DAT_180c8ed50;
  uVar3 = uVar8;
  uVar5 = uVar8;
  if (lVar10 - (longlong)plVar4 >> 3 != 0) {
    do {
      lVar2 = *(longlong *)((longlong)plVar4 + uVar3);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x5c0) == 1)) &&
         ((double)param_1[0x969] + *(double *)(lVar2 + 0x5b8) < dVar1)) {
        *(int32_t *)(lVar2 + 0x5c0) = 2;
        plVar4 = (longlong *)*param_1;
      }
      lVar10 = param_1[1];
      uVar12 = (int)uVar5 + 1;
      uVar3 = uVar3 + 8;
      uVar5 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < (ulonglong)(lVar10 - (longlong)plVar4 >> 3));
  }
  lVar2 = param_1[0x96a];
  uVar11 = lVar10 - (longlong)plVar4 >> 3;
  uVar3 = uVar8;
  uVar5 = uVar8;
  uVar6 = uVar8;
  uVar9 = uVar8;
  if (uVar11 != 0) {
    do {
      lVar10 = *plVar4;
      uVar12 = (int)uVar6 + 0x19 + *(int *)(lVar10 + 0x5c8);
      if (((int)lVar2 * 8 + -8 < (int)uVar12) || (0xfe < (longlong)uVar9)) break;
      if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x5c0) & 0xfffffffd) == 0)) {
        uVar5 = (ulonglong)((int)uVar5 + 1);
        aiStack_448[uVar9] = (int)uVar3;
        uVar9 = uVar9 + 1;
        uVar6 = (ulonglong)uVar12;
      }
      uVar12 = (int)uVar3 + 1;
      plVar4 = plVar4 + 1;
      uVar3 = (ulonglong)uVar12;
    } while ((ulonglong)(longlong)(int)uVar12 < uVar11);
  }
  FUN_180645c10(param_2,uVar5,&unknown_var_5960_ptr);
  if (0 < (int)uVar5) {
    do {
      lVar7 = (longlong)aiStack_448[uVar8];
      lVar2 = *(longlong *)(*param_1 + lVar7 * 8);
      FUN_180645c10(param_2,*(uint *)(lVar2 + 0x5a0) % 0xffa,&unknown_var_5976_ptr);
      FUN_180645c10(param_2,*(int32_t *)(lVar2 + 0x5c8),&unknown_var_5912_ptr);
      FUN_180646200(param_2,lVar2,*(int32_t *)(lVar2 + 0x5c8));
      *(double *)(*(longlong *)(*param_1 + lVar7 * 8) + 0x5b8) = dVar1;
      lVar2 = *param_1;
      lVar10 = *(longlong *)(lVar2 + lVar7 * 8);
      if (*(int *)(lVar10 + 0x5c0) != 2) {
        *(double *)(lVar10 + 0x5b0) = dVar1;
        lVar2 = *param_1;
      }
      uVar8 = uVar8 + 1;
      *(int32_t *)(*(longlong *)(lVar2 + lVar7 * 8) + 0x5c0) = 1;
    } while ((longlong)uVar8 < (longlong)(int)uVar5);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_478);
}



// WARNING: Removing unreachable block (ram,0x000180645c49)
// WARNING: Removing unreachable block (ram,0x000180645c31)
// WARNING: Removing unreachable block (ram,0x000180645c3a)

uint64_t FUN_1805f9d00(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  FUN_180645c10(param_2,*(uint *)(param_1 + 0x4b38) % 0xffa,&unknown_var_5976_ptr);
  if (*(int *)(param_1 + 0x4b40) < *(int *)(param_1 + 0x4b3c)) {
    FUN_180645c10(param_2,1,&unknown_var_5928_ptr);
    FUN_180645c10(param_2,(*(int *)(param_1 + 0x4b3c) - 1U) % 0xffa,&unknown_var_5976_ptr);
    iVar6 = *(int *)(param_1 + 0x4b3c);
    *(int *)(param_1 + 0x4b40) = iVar6;
  }
  else {
    FUN_180645c10(param_2,0,&unknown_var_5928_ptr);
    iVar6 = *(int *)(param_1 + 0x4b3c);
  }
  iVar10 = *(int *)(param_1 + 0x4b38);
  bVar3 = true;
  iVar9 = iVar10 + 1;
  iVar11 = iVar10;
  if (iVar10 < iVar6) {
    do {
      bVar2 = false;
      iVar12 = iVar11;
      if (iVar9 == iVar6) {
        iVar12 = iVar9;
        if (!bVar3) {
          iVar12 = iVar11;
        }
LAB_1805f9e5e:
        FUN_180645c10(param_2,1,&unknown_var_5928_ptr);
        FUN_180645c10(param_2,iVar12 - iVar10,&unknown_var_5944_ptr);
        FUN_180645c10(param_2,iVar9 - iVar12,&unknown_var_5944_ptr);
        iVar6 = *(int *)(param_1 + 0x4b3c);
        bVar3 = true;
        iVar10 = iVar9;
        iVar11 = iVar9;
      }
      else {
        if (*(longlong *)(param_1 + 0x30 + (longlong)(iVar9 % 0x960) * 8) == 0) {
          bVar4 = bVar3;
          if (!bVar3) {
            bVar4 = true;
          }
          bVar2 = !bVar3;
          bVar3 = bVar4;
        }
        else if (bVar3) {
          bVar3 = false;
          iVar12 = iVar9;
        }
        if (bVar2) goto LAB_1805f9e5e;
        if (bVar3) {
          iVar7 = iVar9 - iVar10;
          iVar11 = iVar9;
          if (iVar7 < 0xf) {
            iVar11 = iVar12;
          }
        }
        else {
          iVar7 = iVar9 - iVar12;
          iVar11 = iVar12;
        }
        iVar12 = iVar11;
        if (0xe < iVar7) goto LAB_1805f9e5e;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar6);
  }
  uVar8 = *(int *)(param_2 + 0x5c4) >> 0x1f & 0x1f;
  uVar5 = *(int *)(param_2 + 0x5c4) + uVar8;
  iVar6 = (uVar5 & 0x1f) - uVar8;
  puVar1 = (ulonglong *)(*(longlong *)(param_2 + 0x598) + (longlong)((int)uVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 0L << ((byte)iVar6 & 0x3f);
  *(int *)(param_2 + 0x5c4) = *(int *)(param_2 + 0x5c4) + 1;
  *(int *)(param_2 + 0x5c8) = *(int *)(param_2 + 0x5c8) + 1;
  return CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
}






// 函数: void FUN_1805f9ee0(uint64_t param_1,uint64_t param_2)
void FUN_1805f9ee0(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int aiStackX_18 [2];
  
  iVar2 = 0;
  aiStackX_18[0] = 0;
  cVar1 = FUN_1805fa350();
  iVar3 = 0;
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_18055f260(param_2,aiStackX_18,&unknown_var_5960_ptr), iVar3 = aiStackX_18[0],
     cVar1 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (0 < iVar3) {
    do {
      if (!bVar4) {
        return;
      }
      cVar1 = FUN_1805f9f60(param_1,param_2);
      bVar4 = cVar1 != '\0';
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}



longlong FUN_1805f9f60(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  uint auStackX_8 [2];
  
  iVar7 = 0;
  iVar4 = 0;
  auStackX_8[0] = 0;
  cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5976_ptr);
  uVar10 = *(uint *)(param_1 + 0x4b38) % 0xffa;
  uVar8 = auStackX_8[0] - uVar10;
  if (auStackX_8[0] <= uVar10) {
    uVar8 = uVar10 - auStackX_8[0];
  }
  if ((0x7fd < uVar8) && (iVar4 = 1, uVar10 < 0x7fd)) {
    iVar4 = -1;
  }
  iVar13 = (*(uint *)(param_1 + 0x4b38) / 0xffa + iVar4) * 0xffa + auStackX_8[0];
  iVar4 = iVar13 - *(int *)(param_1 + 0x4b44);
  if ((0x95f < iVar4) || (iVar13 < 0)) {
    return (ulonglong)(uint3)((uint)iVar4 >> 8) << 8;
  }
  lVar6 = FUN_1805fab40();
  auStackX_8[0] = 0;
  if ((cVar3 == '\0') || (cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5912_ptr), cVar3 == '\0'))
  {
    lVar12 = 0;
  }
  else {
    lVar12 = 1;
  }
  uVar8 = auStackX_8[0];
  if ((((longlong)*(int *)(lVar6 + 0x5c4) & 7U) == 0) &&
     (((longlong)*(int *)(param_2 + 0x5c4) & 7U) == 0)) {
    iVar4 = (int)auStackX_8[0] >> 3;
    if ((auStackX_8[0] & 7) != 0) {
      iVar4 = ((int)auStackX_8[0] >> 3) + 1;
    }
                    // WARNING: Subroutine does not return
    memcpy(((longlong)*(int *)(lVar6 + 0x5c4) >> 3) + *(longlong *)(lVar6 + 0x598),
           ((longlong)*(int *)(param_2 + 0x5c4) >> 3) + *(longlong *)(param_2 + 0x598),
           (longlong)iVar4);
  }
  for (; 0 < (int)uVar8; uVar8 = uVar8 - uVar10) {
    iVar4 = *(int *)(param_2 + 0x5c4);
    uVar10 = 0x20;
    if ((int)uVar8 < 0x20) {
      uVar10 = uVar8;
    }
    bVar9 = (byte)iVar4 & 0x1f;
    iVar5 = iVar4;
    if (iVar4 < 0) {
      iVar5 = iVar4 + 0x1f;
      bVar9 = bVar9 - 0x20;
    }
    uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x598) + (longlong)(iVar5 >> 5) * 4);
    *(uint *)(param_2 + 0x5c4) = iVar4 + uVar10;
    iVar4 = *(int *)(lVar6 + 0x5c4);
    bVar11 = (byte)iVar4 & 0x1f;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
      bVar11 = bVar11 - 0x20;
    }
    puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 0x598) + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 | (ulonglong)
                        ((int)(1L << ((byte)uVar10 & 0x3f)) - 1U & (uint)(uVar2 >> (bVar9 & 0x3f)))
                        << (bVar11 & 0x3f);
    *(int *)(lVar6 + 0x5c4) = *(int *)(lVar6 + 0x5c4) + uVar10;
    *(int *)(lVar6 + 0x5c8) = *(int *)(lVar6 + 0x5c8) + uVar10;
  }
  if ((iVar13 < *(int *)(param_1 + 0x4b38)) || (*(int *)(param_1 + 0x4b3c) + 0x960 < iVar13)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
  if (*(longlong *)(param_1 + 0x30 + (longlong)(iVar13 % 0x960) * 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
  *(uint64_t *)(lVar6 + 0x5a8) = *(uint64_t *)(param_2 + 0x5a8);
  *(int32_t *)(lVar6 + 0x5c4) = 0;
  *(int *)(lVar6 + 0x5a0) = iVar13;
  *(int32_t *)(lVar6 + 0x5a4) = 0;
  *(longlong *)(param_1 + 0x30 + (longlong)(iVar13 % 0x960) * 8) = lVar6;
  do {
    if (*(longlong *)(param_1 + 0x30 + (longlong)((*(int *)(param_1 + 0x4b38) + iVar7) % 0x960) * 8)
        == 0) break;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x960);
  *(int *)(param_1 + 0x4b38) = *(int *)(param_1 + 0x4b38) + iVar7;
  if (*(int *)(param_1 + 0x4b3c) < iVar13) {
    *(int *)(param_1 + 0x4b3c) = iVar13 + 1;
    return lVar12;
  }
  return lVar12;
}



uint64_t FUN_1805fa011(void)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  byte bVar13;
  char unaff_R12B;
  uint64_t uVar14;
  int unaff_R14D;
  longlong unaff_R15;
  
  lVar7 = FUN_1805fab40();
  uVar8 = (uint)unaff_RBX;
  if ((unaff_R12B == '\0') || (cVar4 = FUN_18055f260(), cVar4 == '\0')) {
    uVar14 = 0;
  }
  else {
    uVar14 = 1;
  }
  uVar10 = unaff_RBX & 0xffffffff;
  uVar3 = uVar8;
  if ((((longlong)*(int *)(lVar7 + 0x5c4) & 7U) == 0) &&
     (((longlong)*(int *)(unaff_R15 + 0x5c4) & 7U) == 0)) {
    iVar6 = (int)uVar8 >> 3;
    if ((unaff_RBX & 7) != 0) {
      iVar6 = ((int)uVar8 >> 3) + 1;
    }
                    // WARNING: Subroutine does not return
    memcpy(((longlong)*(int *)(lVar7 + 0x5c4) >> 3) + *(longlong *)(lVar7 + 0x598),
           ((longlong)*(int *)(unaff_R15 + 0x5c4) >> 3) + *(longlong *)(unaff_R15 + 0x598),
           (longlong)iVar6);
  }
  while (0 < (int)uVar3) {
    iVar6 = *(int *)(unaff_R15 + 0x5c4);
    iVar9 = (int)uVar10;
    iVar12 = 0x20;
    if (iVar9 < 0x20) {
      iVar12 = iVar9;
    }
    bVar11 = (byte)iVar6 & 0x1f;
    iVar5 = iVar6;
    if (iVar6 < 0) {
      iVar5 = iVar6 + 0x1f;
      bVar11 = bVar11 - 0x20;
    }
    uVar2 = *(ulonglong *)(*(longlong *)(unaff_R15 + 0x598) + (longlong)(iVar5 >> 5) * 4);
    *(int *)(unaff_R15 + 0x5c4) = iVar6 + iVar12;
    iVar6 = *(int *)(lVar7 + 0x5c4);
    bVar13 = (byte)iVar6 & 0x1f;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0x1f;
      bVar13 = bVar13 - 0x20;
    }
    uVar10 = (ulonglong)(uint)(iVar9 - iVar12);
    puVar1 = (ulonglong *)(*(longlong *)(lVar7 + 0x598) + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 | (ulonglong)
                        ((int)(1L << ((byte)iVar12 & 0x3f)) - 1U & (uint)(uVar2 >> (bVar11 & 0x3f)))
                        << (bVar13 & 0x3f);
    *(int *)(lVar7 + 0x5c4) = *(int *)(lVar7 + 0x5c4) + iVar12;
    *(int *)(lVar7 + 0x5c8) = *(int *)(lVar7 + 0x5c8) + iVar12;
    uVar3 = iVar9 - iVar12;
  }
  if ((unaff_R14D < *(int *)(unaff_RBP + 0x4b38)) ||
     (*(int *)(unaff_RBP + 0x4b3c) + 0x960 < unaff_R14D)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar7);
  }
  if (*(ulonglong *)(unaff_RBP + 0x30 + (longlong)(unaff_R14D % 0x960) * 8) != unaff_RBX) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar7);
  }
  *(uint64_t *)(lVar7 + 0x5a8) = *(uint64_t *)(unaff_R15 + 0x5a8);
  *(uint *)(lVar7 + 0x5c4) = uVar8;
  *(int *)(lVar7 + 0x5a0) = unaff_R14D;
  *(uint *)(lVar7 + 0x5a4) = uVar8;
  *(longlong *)(unaff_RBP + 0x30 + (longlong)(unaff_R14D % 0x960) * 8) = lVar7;
  do {
    uVar8 = (uint)unaff_RBX;
    if (*(longlong *)
         (unaff_RBP + 0x30 + (longlong)((int)(*(int *)(unaff_RBP + 0x4b38) + uVar8) % 0x960) * 8) ==
        0) break;
    uVar8 = uVar8 + 1;
    unaff_RBX = (ulonglong)uVar8;
  } while ((int)uVar8 < 0x960);
  *(uint *)(unaff_RBP + 0x4b38) = *(int *)(unaff_RBP + 0x4b38) + uVar8;
  if (*(int *)(unaff_RBP + 0x4b3c) < unaff_R14D) {
    *(int *)(unaff_RBP + 0x4b3c) = unaff_R14D + 1;
    return uVar14;
  }
  return uVar14;
}



int8_t FUN_1805fa1b6(void)

{
  uint uVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int8_t unaff_R13B;
  int unaff_R14D;
  longlong unaff_R15;
  
  if (*(int *)(unaff_RBP + 0x4b3c) + 0x960 < unaff_R14D) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (*(ulonglong *)(unaff_RBP + 0x30 + (longlong)(unaff_R14D % 0x960) * 8) != unaff_RBX) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(unaff_RDI + 0x5a8) = *(uint64_t *)(unaff_R15 + 0x5a8);
  *(int *)(unaff_RDI + 0x5c4) = (int)unaff_RBX;
  *(int *)(unaff_RDI + 0x5a0) = unaff_R14D;
  *(int *)(unaff_RDI + 0x5a4) = (int)unaff_RBX;
  *(longlong *)(unaff_RBP + 0x30 + (longlong)(unaff_R14D % 0x960) * 8) = unaff_RDI;
  do {
    uVar1 = (uint)unaff_RBX;
    if (*(longlong *)
         (unaff_RBP + 0x30 + (longlong)((int)(*(int *)(unaff_RBP + 0x4b38) + uVar1) % 0x960) * 8) ==
        0) break;
    uVar1 = uVar1 + 1;
    unaff_RBX = (ulonglong)uVar1;
  } while ((int)uVar1 < 0x960);
  *(uint *)(unaff_RBP + 0x4b38) = *(int *)(unaff_RBP + 0x4b38) + uVar1;
  if (*(int *)(unaff_RBP + 0x4b3c) < unaff_R14D) {
    *(int *)(unaff_RBP + 0x4b3c) = unaff_R14D + 1;
    return unaff_R13B;
  }
  return unaff_R13B;
}






// 函数: void FUN_1805fa29a(void)
void FUN_1805fa29a(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



int8_t FUN_1805fa2bd(void)

{
  return 0;
}






// 函数: void FUN_1805fa2d0(longlong param_1)
void FUN_1805fa2d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30 + (longlong)(*(int *)(param_1 + 0x4b44) % 0x960) * 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x30 + (longlong)(*(int *)(param_1 + 0x4b44) % 0x960) * 8) = 0;
  *(int *)(param_1 + 0x4b44) = *(int *)(param_1 + 0x4b44) + 1;
  return;
}



char FUN_1805fa350(longlong *param_1,uint64_t param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint auStackX_8 [2];
  int aiStackX_18 [2];
  uint auStackX_20 [2];
  
  uVar11 = 0;
  iVar9 = 0;
  auStackX_8[0] = 0;
  cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5976_ptr);
  uVar13 = *(uint *)((longlong)param_1 + 0x4b34);
  uVar12 = uVar13 % 0xffa;
  uVar5 = auStackX_8[0] - uVar12;
  if (auStackX_8[0] <= uVar12) {
    uVar5 = uVar12 - auStackX_8[0];
  }
  iVar8 = iVar9;
  if ((0x7fd < uVar5) && (iVar8 = 1, uVar12 < 0x7fd)) {
    iVar8 = -1;
  }
  iVar8 = (uVar13 / 0xffa + iVar8) * 0xffa + auStackX_8[0];
  if ((int)uVar13 < iVar8) {
    *(int *)((longlong)param_1 + 0x4b34) = iVar8;
  }
  bVar15 = false;
  if (cVar3 == '\0') {
LAB_1805fa42b:
    bVar2 = false;
  }
  else {
    auStackX_8[0] = 0;
    cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5928_ptr);
    bVar15 = auStackX_8[0] != 0;
    if (cVar3 == '\0') goto LAB_1805fa42b;
    bVar2 = true;
  }
  if (bVar15) {
    if ((bVar2) && (cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5976_ptr), cVar3 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  lVar10 = param_1[1];
  lVar4 = *param_1;
  uVar7 = uVar11;
  uVar14 = uVar11;
  if (lVar10 - lVar4 >> 3 != 0) {
    do {
      uVar13 = (uint)uVar14;
      if (*(int *)((longlong)param_1 + 0x4b34) <= *(int *)(*(longlong *)(uVar7 + lVar4) + 0x5a0))
      break;
      if (*(longlong *)(uVar7 + lVar4) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar7 + lVar4) = 0;
      uVar5 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar5;
      lVar4 = *param_1;
      uVar13 = uVar13 + 1;
      lVar10 = param_1[1];
      uVar7 = uVar7 + 8;
      uVar14 = (ulonglong)uVar13;
    } while ((ulonglong)(longlong)(int)uVar5 < (ulonglong)(lVar10 - lVar4 >> 3));
    if (0 < (int)uVar13) {
      lVar1 = (longlong)(int)uVar13 * 8 + lVar4;
      if (lVar4 != lVar1) {
        if (lVar1 != lVar10) {
                    // WARNING: Subroutine does not return
          memmove(lVar4,lVar1,lVar10 - lVar1);
        }
        param_1[1] = lVar10 + (longlong)(int)uVar13 * -8;
      }
    }
  }
  bVar15 = false;
  if (bVar2) {
    auStackX_8[0] = 0;
    cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5928_ptr);
    bVar15 = auStackX_8[0] != 0;
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_1805fa531;
    }
  }
  cVar3 = '\0';
LAB_1805fa531:
  if ((bVar15) && (cVar3 != '\0')) {
    iVar6 = (int)(param_1[1] - *param_1 >> 3);
    if (0 < iVar6) {
      iVar9 = iVar8 - *(int *)(*(longlong *)*param_1 + 0x5a0);
    }
    do {
      cVar3 = FUN_18055f260(param_2,aiStackX_18,&unknown_var_5944_ptr);
      if ((cVar3 == '\0') ||
         (cVar3 = FUN_18055f260(param_2,auStackX_20,&unknown_var_5944_ptr), cVar3 == '\0')) {
        return '\0';
      }
      iVar9 = iVar9 + aiStackX_18[0];
      if (0 < (int)auStackX_20[0]) {
        lVar4 = (longlong)iVar9;
        uVar11 = (ulonglong)auStackX_20[0];
        iVar9 = iVar9 + auStackX_20[0];
        do {
          if ((-1 < lVar4) && (lVar4 < iVar6)) {
            *(int32_t *)(*(longlong *)(*param_1 + lVar4 * 8) + 0x5c0) = 3;
          }
          lVar4 = lVar4 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      auStackX_8[0] = 1;
      cVar3 = FUN_18055f260(param_2,auStackX_8,&unknown_var_5928_ptr);
      if (cVar3 == '\0') {
        return '\0';
      }
    } while (auStackX_8[0] != 0);
    cVar3 = '\x01';
  }
  return cVar3;
}



uint64_t *
FUN_1805fa620(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  longlong lVar2;
  ulonglong uStackX_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  _Mtx_init_in_situ(param_1 + 0x96b,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x966] = 0;
  param_1[0x967] = 0;
  param_1[0x968] = 0;
  param_1[0x969] = 0x3fb999999999999a;
  *(int32_t *)(param_1 + 0x96a) = 0x348;
  lVar2 = 300;
  puVar1 = param_1 + 6;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 8;
  } while (lVar2 != 0);
  param_1[4] = 0;
  lVar2 = FUN_1805fab40();
  param_1[4] = lVar2;
  uStackX_10 = (ulonglong)*(uint *)(param_1 + 0x966);
  *(ulonglong *)(lVar2 + 0x5a0) = uStackX_10;
  *(int32_t *)(param_1 + 5) = 0;
  *(int32_t *)(param_1[4] + 0x5c0) = 0;
  return param_1;
}






// 函数: void FUN_1805fa720(longlong *param_1)
void FUN_1805fa720(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar4;
  
  plVar5 = param_1 + 6;
  lVar3 = 0x960;
  uVar4 = 0;
  do {
    lVar1 = *plVar5;
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x588) == 0) {
        *(uint64_t *)(lVar1 + 0x588) = 0;
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar1);
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *plVar5 = 0;
    plVar5 = plVar5 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  uVar6 = uVar4;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      lVar3 = *(longlong *)(uVar6 + *param_1);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x588) == 0) {
          *(uint64_t *)(lVar3 + 0x588) = 0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar3);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(uVar6 + *param_1) = 0;
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar2 < (ulonglong)(param_1[1] - *param_1 >> 3));
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x588) == 0) {
      *(uint64_t *)(lVar3 + 0x588) = 0;
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[4] = 0;
  _Mtx_destroy_in_situ();
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fa870(ulonglong *param_1)
void FUN_1805fa870(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  puVar4 = (ulonglong *)param_1[1];
  puVar2 = (ulonglong *)0x0;
  if (puVar4 < param_1[2]) {
    param_1[1] = (ulonglong)(puVar4 + 1);
    *puVar4 = param_1[4];
    goto FUN_1805fa93b;
  }
  uVar3 = *param_1;
  lVar1 = (longlong)((longlong)puVar4 - uVar3) >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
LAB_1805fa8cc:
    puVar2 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)param_1[3]);
    uVar3 = *param_1;
    puVar4 = (ulonglong *)param_1[1];
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 != 0) goto LAB_1805fa8cc;
  }
  if ((ulonglong *)uVar3 != puVar4) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,uVar3,(longlong)puVar4 - uVar3);
  }
  *puVar2 = param_1[4];
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar2;
  param_1[2] = (ulonglong)(puVar2 + lVar1);
  param_1[1] = (ulonglong)(puVar2 + 1);
FUN_1805fa93b:
  uVar3 = FUN_1805fab40();
  param_1[4] = uVar3;
  *(ulonglong *)(uVar3 + 0x5a0) = (ulonglong)(uint)param_1[0x966];
  *(int32_t *)(param_1 + 5) = 0;
  *(int32_t *)(param_1[4] + 0x5c0) = 0;
  *(int *)(param_1 + 0x966) = (int)param_1[0x966] + 1;
  *(ulonglong *)(param_1[4] + 0x5a0) = (ulonglong)(uint)param_1[0x966];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805fa8a6(longlong param_1,longlong param_2)
void FUN_1805fa8a6(longlong param_1,longlong param_2)

{
  longlong in_RAX;
  longlong *plVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  int32_t uVar3;
  longlong *unaff_R14;
  
  if (in_RAX >> 3 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = (in_RAX >> 3) * 2;
    plVar1 = unaff_R14;
    if (lVar2 == 0) goto LAB_1805fa8ef;
  }
  plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(int8_t *)(param_1 + 0x18));
  param_2 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_1805fa8ef:
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(plVar1,param_2,unaff_RDI - param_2);
  }
  *plVar1 = unaff_RBX[4];
  if (*unaff_RBX == 0) {
    *unaff_RBX = (longlong)plVar1;
    unaff_RBX[2] = (longlong)(plVar1 + lVar2);
    unaff_RBX[1] = (longlong)(plVar1 + 1);
    lVar2 = FUN_1805fab40();
    unaff_RBX[4] = lVar2;
    uVar3 = SUB84(unaff_R14,0);
    *(ulonglong *)(lVar2 + 0x5a0) = CONCAT44(uVar3,(int)unaff_RBX[0x966]);
    *(int32_t *)(unaff_RBX + 5) = uVar3;
    *(int32_t *)(unaff_RBX[4] + 0x5c0) = uVar3;
    *(int *)(unaff_RBX + 0x966) = (int)unaff_RBX[0x966] + 1;
    *(ulonglong *)(unaff_RBX[4] + 0x5a0) = CONCAT44(uVar3,(int)unaff_RBX[0x966]);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1805fa93b(void)
void FUN_1805fa93b(void)

{
  longlong lVar1;
  longlong unaff_RBX;
  int32_t unaff_R14D;
  
  lVar1 = FUN_1805fab40();
  *(longlong *)(unaff_RBX + 0x20) = lVar1;
  *(ulonglong *)(lVar1 + 0x5a0) = CONCAT44(unaff_R14D,*(int32_t *)(unaff_RBX + 0x4b30));
  *(int32_t *)(unaff_RBX + 0x28) = unaff_R14D;
  *(int32_t *)(*(longlong *)(unaff_RBX + 0x20) + 0x5c0) = unaff_R14D;
  *(int *)(unaff_RBX + 0x4b30) = *(int *)(unaff_RBX + 0x4b30) + 1;
  *(ulonglong *)(*(longlong *)(unaff_RBX + 0x20) + 0x5a0) =
       CONCAT44(unaff_R14D,*(int32_t *)(unaff_RBX + 0x4b30));
  return;
}



longlong FUN_1805fa9a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = _Mtx_lock(param_1 + 0x4b58);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x4b50) * 8 + -0x21 <= *(int *)(lVar2 + 0x5c8) + param_2) {
    FUN_1805fa870(param_1);
    *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + -8) + 0x5c4) = 0;
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(lVar2 + 0x5c8);
  return lVar2;
}






// 函数: void FUN_1805faa20(longlong param_1)
void FUN_1805faa20(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int8_t *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x5c8);
  if (*(int *)(param_1 + 0x4b50) * 8 + -0x21 < iVar7) {
    iVar4 = *(int *)(param_1 + 0x28);
    iVar7 = iVar7 - iVar4;
    FUN_1805fa870();
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    *(int *)(lVar2 + 0x5c4) = *(int *)(lVar2 + 0x5c4) - iVar7;
    FUN_180646200(*(uint64_t *)(param_1 + 0x20),lVar2,iVar7);
    *(int *)(lVar2 + 0x5c8) = iVar4;
    iVar7 = *(int *)(lVar2 + 0x5c4);
    if (iVar4 < *(int *)(lVar2 + 0x5c4)) {
      *(int *)(lVar2 + 0x5c4) = iVar4;
      iVar7 = iVar4;
    }
    lVar3 = *(longlong *)(lVar2 + 0x598);
    uVar5 = iVar7 >> 0x1f & 7;
    iVar7 = iVar7 + uVar5;
    iVar8 = iVar7 >> 3;
    iVar4 = iVar8 + 1;
    pbVar1 = (byte *)(iVar8 + lVar3);
    *pbVar1 = *pbVar1 & ~(-1 << (((byte)iVar7 & 7) - (char)uVar5 & 0x1f));
    if (iVar4 < *(int *)(lVar2 + 0x590) >> 3) {
      puVar6 = (int8_t *)(iVar4 + lVar3);
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar2 + 0x590) >> 3);
    }
    *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + -8) + 0x5c4) = 0;
  }
  iVar7 = _Mtx_unlock(param_1 + 0x4b58);
  if (iVar7 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar7);
    return;
  }
  return;
}






// 函数: void FUN_1805faa28(longlong param_1)
void FUN_1805faa28(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong in_RAX;
  uint uVar5;
  int8_t *puVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x4b50) * 8 + -0x21 < *(int *)(in_RAX + 0x5c8)) {
    iVar4 = *(int *)(param_1 + 0x28);
    iVar7 = *(int *)(in_RAX + 0x5c8) - iVar4;
    FUN_1805fa870();
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    *(int *)(lVar2 + 0x5c4) = *(int *)(lVar2 + 0x5c4) - iVar7;
    FUN_180646200(*(uint64_t *)(param_1 + 0x20),lVar2,iVar7);
    *(int *)(lVar2 + 0x5c8) = iVar4;
    iVar7 = *(int *)(lVar2 + 0x5c4);
    if (iVar4 < *(int *)(lVar2 + 0x5c4)) {
      *(int *)(lVar2 + 0x5c4) = iVar4;
      iVar7 = iVar4;
    }
    lVar3 = *(longlong *)(lVar2 + 0x598);
    uVar5 = iVar7 >> 0x1f & 7;
    iVar7 = iVar7 + uVar5;
    iVar8 = iVar7 >> 3;
    iVar4 = iVar8 + 1;
    pbVar1 = (byte *)(iVar8 + lVar3);
    *pbVar1 = *pbVar1 & ~(-1 << (((byte)iVar7 & 7) - (char)uVar5 & 0x1f));
    if (iVar4 < *(int *)(lVar2 + 0x590) >> 3) {
      puVar6 = (int8_t *)(iVar4 + lVar3);
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar2 + 0x590) >> 3);
    }
    *(int32_t *)(*(longlong *)(*(longlong *)(param_1 + 8) + -8) + 0x5c4) = 0;
  }
  iVar4 = _Mtx_unlock(param_1 + 0x4b58);
  if (iVar4 != 0) {
                    // WARNING: Could not recover jumptable at 0x0001805fab2e. Too many branches
                    // WARNING: Treating indirect jump as call
    __Throw_C_error_std__YAXH_Z(iVar4);
    return;
  }
  return;
}






