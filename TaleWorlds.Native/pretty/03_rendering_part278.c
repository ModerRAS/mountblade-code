#include "TaleWorlds.Native.Split.h"

// 03_rendering_part278.c - 4 个函数

// 函数: void FUN_18041c4ab(void)
void FUN_18041c4ab(void)

{
  ulonglong uVar1;
  uint unaff_EBX;
  longlong unaff_RSI;
  uint64_t *puVar2;
  ulonglong in_stack_00000060;
  
  if (unaff_EBX != 0) {
    puVar2 = (uint64_t *)(unaff_RSI + 0x180);
    for (uVar1 = (ulonglong)unaff_EBX; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0x406fe00000000000;
      puVar2 = puVar2 + 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000060 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18041c5b0(uint *param_1,longlong param_2,byte *param_3)
void FUN_18041c5b0(uint *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  int8_t auStack_738 [32];
  uint64_t uStack_718;
  longlong lStack_710;
  uint *puStack_708;
  longlong lStack_700;
  int32_t uStack_6f8;
  uint auStack_6e8 [24];
  uint auStack_688 [16];
  uint64_t auStack_648 [16];
  uint64_t auStack_5c8 [16];
  uint64_t auStack_548 [16];
  uint64_t auStack_4c8 [144];
  ulonglong uStack_48;
  ulonglong uVar11;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_738;
  uVar6 = 0;
  param_1[4] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  bVar1 = *param_3;
  uVar7 = 1;
  param_1[4] = 1;
  uVar14 = uVar6;
  lStack_710 = param_2;
  if ((bVar1 & 1) == 0) {
    do {
      uVar12 = *param_1;
      if (7 < uVar12) goto LAB_18041c634;
      *param_1 = uVar12 + 1;
      uVar12 = param_1[4];
      uVar7 = uVar12 + 1;
      bVar1 = param_3[uVar12 >> 3];
      param_1[4] = uVar7;
    } while ((bVar1 >> ((byte)uVar12 & 7) & 1) == 0);
    uVar12 = *param_1;
LAB_18041c634:
    uVar14 = (ulonglong)uVar12;
    if (7 < uVar12) goto FUN_18041ccb8;
  }
  uVar4 = uVar6;
  uVar8 = uVar6;
  uVar12 = uVar7;
  if (*(int *)(uVar14 * 0x28 + 0x180bf02b8) != 0) {
    do {
      uVar7 = uVar12 + 1;
      bVar1 = param_3[uVar12 >> 3];
      param_1[4] = uVar7;
      uVar9 = (int)uVar4 + 1;
      uVar12 = (uint)uVar8 | (bVar1 >> ((byte)uVar12 & 7) & 1) << ((byte)uVar4 & 0x1f);
      param_1[2] = uVar12;
      uVar4 = (ulonglong)uVar9;
      uVar8 = (ulonglong)uVar12;
      uVar12 = uVar7;
    } while (uVar9 < *(uint *)(uVar14 * 0x28 + 0x180bf02b8));
  }
  uVar4 = uVar6;
  uVar8 = uVar6;
  uVar12 = uVar7;
  if (*(int *)(uVar14 * 0x28 + 0x180bf02bc) != 0) {
    do {
      uVar7 = uVar12 + 1;
      bVar1 = param_3[uVar12 >> 3];
      param_1[4] = uVar7;
      uVar9 = (int)uVar4 + 1;
      uVar12 = (uint)uVar8 | (bVar1 >> ((byte)uVar12 & 7) & 1) << ((byte)uVar4 & 0x1f);
      param_1[3] = uVar12;
      uVar4 = (ulonglong)uVar9;
      uVar8 = (ulonglong)uVar12;
      uVar12 = uVar7;
    } while (uVar9 < *(uint *)(uVar14 * 0x28 + 0x180bf02bc));
  }
  uVar4 = uVar6;
  uVar8 = uVar6;
  if (*(int *)(uVar14 * 0x28 + 0x180bf02b4) != 0) {
    do {
      bVar1 = param_3[uVar7 >> 3];
      param_1[4] = uVar7 + 1;
      uVar12 = (int)uVar4 + 1;
      uVar9 = (uint)uVar8 | (bVar1 >> ((byte)uVar7 & 7) & 1) << ((byte)uVar4 & 0x1f);
      param_1[1] = uVar9;
      uVar4 = (ulonglong)uVar12;
      uVar8 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
    } while (uVar12 < *(uint *)(uVar14 * 0x28 + 0x180bf02b4));
  }
  iVar2 = *(int *)(uVar14 * 0x28 + 0x180bf02b0);
  if (iVar2 == 0) {
    param_1[8] = 0;
LAB_18041c796:
    uVar7 = *(uint *)((ulonglong)*param_1 * 0x28 + 0x180bf02c4) / 3;
    param_1[5] = uVar7;
    param_1[6] = uVar7;
    param_1[7] = uVar7;
  }
  else if (iVar2 == 1) {
    uVar7 = *(uint *)(uVar14 * 0x28 + 0x180bf02c4) >> 2;
    param_1[7] = uVar7;
    param_1[6] = uVar7;
    param_1[5] = uVar7;
    param_1[8] = uVar7;
  }
  else if (iVar2 == 2) {
    param_1[8] = *(uint *)(uVar14 * 0x28 + 0x180bf02c0);
    goto LAB_18041c796;
  }
  puVar13 = param_1 + 5;
  uStack_718 = 4;
  uVar14 = uVar6;
  do {
    uVar4 = (ulonglong)*param_1;
    if (*(int *)(uVar4 * 0x28 + 0x180bf02cc) != 0) {
      uVar7 = *puVar13;
      uVar8 = uVar6;
      do {
        lVar15 = uVar8 * 8 + uVar14;
        auStack_6e8[lVar15] = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6;
          uVar11 = uVar6;
          uVar12 = param_1[4];
          do {
            bVar1 = param_3[uVar12 >> 3];
            param_1[4] = uVar12 + 1;
            bVar3 = (byte)uVar4;
            uVar9 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar9;
            uVar7 = *puVar13;
            uVar10 = (uint)uVar11 | (bVar1 >> ((byte)uVar12 & 7) & 1) << (bVar3 & 0x1f);
            uVar11 = (ulonglong)uVar10;
            uVar12 = uVar12 + 1;
          } while (uVar9 < uVar7);
          auStack_6e8[lVar15] = uVar10;
        }
        lVar15 = uVar8 * 8 + uVar14;
        auStack_6e8[lVar15 + 4] = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6;
          uVar11 = uVar6;
          uVar12 = param_1[4];
          do {
            bVar1 = param_3[uVar12 >> 3];
            param_1[4] = uVar12 + 1;
            bVar3 = (byte)uVar4;
            uVar9 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar9;
            uVar7 = *puVar13;
            uVar10 = (uint)uVar11 | (bVar1 >> ((byte)uVar12 & 7) & 1) << (bVar3 & 0x1f);
            uVar11 = (ulonglong)uVar10;
            uVar12 = uVar12 + 1;
          } while (uVar9 < uVar7);
          auStack_6e8[lVar15 + 4] = uVar10;
        }
        uVar4 = (ulonglong)*param_1;
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
    }
    uVar14 = uVar14 + 1;
    puVar13 = puVar13 + 1;
    uStack_718 = uStack_718 + -1;
  } while (uStack_718 != 0);
  iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
  uVar14 = uVar4;
  if (iVar2 != 0) {
    if (*(int *)(uVar4 * 0x28 + 0x180bf02cc) != 0) {
      uStack_718._0_4_ = 0;
      uVar14 = uVar6;
      uVar7 = (uint)uStack_718;
      do {
        iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
        if (iVar2 == 1) {
          uVar7 = param_1[4];
          uVar12 = uVar7 + 1;
          uStack_718._0_4_ = param_3[uVar7 >> 3] >> ((byte)uVar7 & 7) & 1;
          uVar7 = (uint)uStack_718;
LAB_18041c98c:
          param_1[4] = uVar12;
        }
        else if (iVar2 == 2) {
          uVar12 = param_1[4];
          uVar7 = uVar12 + 1;
          uStack_718._0_4_ = param_3[uVar12 >> 3] >> ((byte)uVar12 & 7) & 1;
          param_1[4] = uVar7;
          uVar12 = uVar12 + 2;
          uVar7 = param_3[uVar7 >> 3] >> ((byte)uVar7 & 7) & 1;
          goto LAB_18041c98c;
        }
        if (param_1[5] != 0) {
          auStack_6e8[uVar14 * 8] = auStack_6e8[uVar14 * 8] * 2 | (uint)uStack_718;
          auStack_6e8[uVar14 * 8 + 4] = auStack_6e8[uVar14 * 8 + 4] * 2 | uVar7;
        }
        if (param_1[6] != 0) {
          auStack_6e8[uVar14 * 8 + 1] = auStack_6e8[uVar14 * 8 + 1] * 2 | (uint)uStack_718;
          auStack_6e8[uVar14 * 8 + 5] = auStack_6e8[uVar14 * 8 + 5] * 2 | uVar7;
        }
        if (param_1[7] != 0) {
          auStack_6e8[uVar14 * 8 + 2] = auStack_6e8[uVar14 * 8 + 2] * 2 | (uint)uStack_718;
          auStack_6e8[uVar14 * 8 + 6] = auStack_6e8[uVar14 * 8 + 6] * 2 | uVar7;
        }
        if (param_1[8] != 0) {
          auStack_6e8[uVar14 * 8 + 3] = auStack_6e8[uVar14 * 8 + 3] * 2 | (uint)uStack_718;
          auStack_6e8[uVar14 * 8 + 7] = auStack_6e8[uVar14 * 8 + 7] * 2 | uVar7;
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
      uVar14 = (ulonglong)*param_1;
      iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
    }
    if (iVar2 != 0) {
      uVar7 = param_1[5];
      if (uVar7 != 0) {
        param_1[5] = uVar7 + 1;
      }
      if (param_1[6] != 0) {
        param_1[6] = param_1[6] + 1;
      }
      if (param_1[7] != 0) {
        param_1[7] = param_1[7] + 1;
      }
      if (param_1[8] != 0) {
        param_1[8] = param_1[8] + 1;
      }
      uVar14 = (ulonglong)*param_1;
    }
  }
  if (*(int *)(uVar14 * 0x28 + 0x180bf02b0) == 2) {
    FUN_18041cce0(param_1,param_2,param_3,auStack_6e8);
  }
  else {
    iVar2 = *(int *)(uVar14 * 0x28 + 0x180bf02cc);
    lStack_700 = 0;
    uStack_6f8 = 0;
    if (iVar2 == 2) {
      lStack_700 = (ulonglong)*(uint *)(&unknown_var_7700_ptr + (ulonglong)param_1[1] * 0xc) << 0x20;
    }
    else if (iVar2 == 3) {
      lStack_700 = (ulonglong)*(uint *)(&unknown_var_8468_ptr + (ulonglong)param_1[1] * 0xc) << 0x20;
      uStack_6f8 = *(int32_t *)(&unknown_var_8472_ptr + (ulonglong)param_1[1] * 0xc);
    }
    puVar13 = auStack_688;
    puVar16 = (uint *)(((ulonglong)(iVar2 - 1) * 0x40 + (ulonglong)param_1[1]) * 0x40 + 0x180bf03f0)
    ;
    uVar4 = uVar6;
    do {
      uVar12 = *(uint *)(uVar14 * 0x28 + 0x180bf02d0);
      uVar7 = *(uint *)(((longlong)puVar16 - (longlong)auStack_688) + (longlong)puVar13);
      *puVar13 = 0;
      uVar9 = uVar12;
      if ((int)uVar4 == *(int *)((longlong)&lStack_700 + (ulonglong)uVar7 * 4)) {
        uVar9 = uVar12 - 1;
      }
      if (uVar9 != 0) {
        uVar8 = uVar6;
        uVar11 = uVar6;
        uVar7 = param_1[4];
        do {
          bVar1 = param_3[uVar7 >> 3];
          param_1[4] = uVar7 + 1;
          bVar3 = (byte)uVar8;
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar12;
          uVar10 = (uint)uVar11 | (bVar1 >> ((byte)uVar7 & 7) & 1) << (bVar3 & 0x1f);
          uVar11 = (ulonglong)uVar10;
          uVar7 = uVar7 + 1;
        } while (uVar12 < uVar9);
        *puVar13 = uVar10;
        uVar12 = *(uint *)(uVar14 * 0x28 + 0x180bf02d0);
      }
      uVar7 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar7;
      puVar13 = puVar13 + 1;
    } while (uVar7 < 0x10);
    iVar2 = 1 << ((byte)uVar12 & 0x1f);
    uStack_718 = CONCAT44(iVar2,iVar2);
    puStack_708 = puVar16;
    if (*(int *)(uVar14 * 0x28 + 0x180bf02cc) != 0) {
      do {
        FUN_18041c120(auStack_6e8 + uVar6 * 8,auStack_648 + uVar6 * 0x40,&uStack_718,param_1 + 5);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while (uVar7 < *(uint *)((ulonglong)*param_1 * 0x28 + 0x180bf02cc));
    }
    lVar15 = 0x10;
    puVar5 = (uint64_t *)(lStack_710 + 0x10);
    puVar13 = puVar16;
    do {
      uVar14 = (ulonglong)*(uint *)(((longlong)auStack_688 - (longlong)puVar16) + (longlong)puVar13)
      ;
      puVar5[-2] = auStack_648[(ulonglong)*puVar13 * 0x40 + uVar14];
      puVar5[-1] = auStack_5c8[(ulonglong)*puVar13 * 0x40 + uVar14];
      *puVar5 = auStack_548[(ulonglong)*puVar13 * 0x40 + uVar14];
      puVar5[1] = auStack_4c8[(ulonglong)*puVar13 * 0x40 + uVar14];
      lVar15 = lVar15 + -1;
      puVar5 = puVar5 + 4;
      puVar13 = puVar13 + 1;
    } while (lVar15 != 0);
  }
FUN_18041ccb8:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_738);
}





// 函数: void FUN_18041c63f(ulonglong param_1,uint64_t param_2,uint param_3,uint64_t param_4,
void FUN_18041c63f(ulonglong param_1,uint64_t param_2,uint param_3,uint64_t param_4,
                  longlong param_5,uint64_t param_6,ulonglong param_7)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint uVar6;
  ulonglong unaff_RDI;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  uint64_t uVar19;
  
  uVar6 = (uint)unaff_RDI;
  uVar15 = unaff_RDI & 0xffffffff;
  param_1 = param_1 & 0xffffffff;
  if (uVar6 < *(uint *)(param_1 * 0x28 + 0x180bf02b8)) {
    uVar4 = unaff_RDI & 0xffffffff;
    do {
      uVar10 = param_3 >> 3;
      bVar7 = (byte)param_3;
      param_3 = param_3 + 1;
      bVar1 = *(byte *)((ulonglong)uVar10 + unaff_RSI);
      unaff_RBX[4] = param_3;
      bVar3 = (byte)uVar15;
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar10;
      uVar13 = (uint)uVar4 | (bVar1 >> (bVar7 & 7) & 1) << (bVar3 & 0x1f);
      uVar4 = (ulonglong)uVar13;
      unaff_RBX[2] = uVar13;
    } while (uVar10 < *(uint *)(param_1 * 0x28 + 0x180bf02b8));
  }
  uVar15 = unaff_RDI & 0xffffffff;
  if (uVar6 < *(uint *)(param_1 * 0x28 + 0x180bf02bc)) {
    uVar4 = unaff_RDI & 0xffffffff;
    do {
      uVar10 = param_3 >> 3;
      bVar7 = (byte)param_3;
      param_3 = param_3 + 1;
      bVar1 = *(byte *)((ulonglong)uVar10 + unaff_RSI);
      unaff_RBX[4] = param_3;
      bVar3 = (byte)uVar15;
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar10;
      uVar13 = (uint)uVar4 | (bVar1 >> (bVar7 & 7) & 1) << (bVar3 & 0x1f);
      uVar4 = (ulonglong)uVar13;
      unaff_RBX[3] = uVar13;
    } while (uVar10 < *(uint *)(param_1 * 0x28 + 0x180bf02bc));
  }
  uVar15 = unaff_RDI & 0xffffffff;
  if (uVar6 < *(uint *)(param_1 * 0x28 + 0x180bf02b4)) {
    uVar4 = unaff_RDI & 0xffffffff;
    do {
      uVar10 = param_3 >> 3;
      bVar7 = (byte)param_3;
      param_3 = param_3 + 1;
      bVar1 = *(byte *)((ulonglong)uVar10 + unaff_RSI);
      unaff_RBX[4] = param_3;
      bVar3 = (byte)uVar15;
      uVar10 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar10;
      uVar13 = (uint)uVar4 | (bVar1 >> (bVar7 & 7) & 1) << (bVar3 & 0x1f);
      uVar4 = (ulonglong)uVar13;
      unaff_RBX[1] = uVar13;
    } while (uVar10 < *(uint *)(param_1 * 0x28 + 0x180bf02b4));
  }
  iVar2 = *(int *)(param_1 * 0x28 + 0x180bf02b0);
  if (iVar2 == 0) {
    unaff_RBX[8] = uVar6;
  }
  else {
    if (iVar2 == 1) {
      uVar10 = *(uint *)(param_1 * 0x28 + 0x180bf02c4) >> 2;
      unaff_RBX[7] = uVar10;
      unaff_RBX[6] = uVar10;
      unaff_RBX[5] = uVar10;
      unaff_RBX[8] = uVar10;
      goto LAB_18041c7b4;
    }
    if (iVar2 != 2) goto LAB_18041c7b4;
    unaff_RBX[8] = *(uint *)(param_1 * 0x28 + 0x180bf02c0);
  }
  uVar10 = *(uint *)((ulonglong)*unaff_RBX * 0x28 + 0x180bf02c4) / 3;
  unaff_RBX[5] = uVar10;
  unaff_RBX[6] = uVar10;
  unaff_RBX[7] = uVar10;
LAB_18041c7b4:
  puVar14 = unaff_RBX + 5;
  lVar18 = 4;
  uVar15 = unaff_RDI;
  do {
    uVar4 = (ulonglong)*unaff_RBX;
    uVar9 = unaff_RDI & 0xffffffff;
    if (uVar6 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc)) {
      uVar10 = *puVar14;
      do {
        uVar12 = unaff_RDI & 0xffffffff;
        uVar4 = unaff_RDI & 0xffffffff;
        lVar16 = uVar9 * 8 + uVar15;
        *(uint *)(&stack0x00000050 + lVar16 * 4) = uVar6;
        if (uVar10 != 0) {
          uVar13 = unaff_RBX[4];
          do {
            bVar1 = *(byte *)((ulonglong)(uVar13 >> 3) + unaff_RSI);
            unaff_RBX[4] = uVar13 + 1;
            bVar3 = (byte)uVar4;
            uVar8 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar8;
            uVar10 = *puVar14;
            uVar11 = (uint)uVar12 | (bVar1 >> ((byte)uVar13 & 7) & 1) << (bVar3 & 0x1f);
            uVar12 = (ulonglong)uVar11;
            uVar13 = uVar13 + 1;
          } while (uVar8 < uVar10);
          *(uint *)(&stack0x00000050 + lVar16 * 4) = uVar11;
        }
        uVar12 = unaff_RDI & 0xffffffff;
        lVar16 = uVar9 * 8 + uVar15;
        uVar4 = unaff_RDI & 0xffffffff;
        *(uint *)(&stack0x00000060 + lVar16 * 4) = uVar6;
        if (uVar10 != 0) {
          uVar13 = unaff_RBX[4];
          do {
            bVar1 = *(byte *)((ulonglong)(uVar13 >> 3) + unaff_RSI);
            unaff_RBX[4] = uVar13 + 1;
            bVar3 = (byte)uVar4;
            uVar8 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar8;
            uVar10 = *puVar14;
            uVar11 = (uint)uVar12 | (bVar1 >> ((byte)uVar13 & 7) & 1) << (bVar3 & 0x1f);
            uVar12 = (ulonglong)uVar11;
            uVar13 = uVar13 + 1;
          } while (uVar8 < uVar10);
          *(uint *)(&stack0x00000060 + lVar16 * 4) = uVar11;
        }
        uVar4 = (ulonglong)*unaff_RBX;
        uVar13 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar13;
      } while (uVar13 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
    }
    uVar15 = uVar15 + 1;
    puVar14 = puVar14 + 1;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
  uVar15 = uVar4;
  if (iVar2 != 0) {
    uVar9 = unaff_RDI & 0xffffffff;
    if (uVar6 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc)) {
      uVar13 = 0;
      uVar10 = uVar13;
      do {
        iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
        if (iVar2 == 1) {
          uVar10 = unaff_RBX[4];
          uVar8 = uVar10 + 1;
          uVar13 = *(byte *)((ulonglong)(uVar10 >> 3) + unaff_RSI) >> ((byte)uVar10 & 7) & 1;
          uVar10 = uVar13;
LAB_18041c98c:
          unaff_RBX[4] = uVar8;
        }
        else if (iVar2 == 2) {
          uVar8 = unaff_RBX[4];
          uVar10 = uVar8 + 1;
          uVar13 = *(byte *)((ulonglong)(uVar8 >> 3) + unaff_RSI) >> ((byte)uVar8 & 7) & 1;
          unaff_RBX[4] = uVar10;
          uVar8 = uVar8 + 2;
          uVar10 = *(byte *)((ulonglong)(uVar10 >> 3) + unaff_RSI) >> ((byte)uVar10 & 7) & 1;
          goto LAB_18041c98c;
        }
        if (unaff_RBX[5] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&stack0x00000050 + lVar18) = *(int *)(&stack0x00000050 + lVar18) * 2 | uVar13;
          *(uint *)(&stack0x00000060 + lVar18) = *(int *)(&stack0x00000060 + lVar18) * 2 | uVar10;
        }
        if (unaff_RBX[6] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&stack0x00000054 + lVar18) = *(int *)(&stack0x00000054 + lVar18) * 2 | uVar13;
          *(uint *)(&stack0x00000064 + lVar18) = *(int *)(&stack0x00000064 + lVar18) * 2 | uVar10;
        }
        if (unaff_RBX[7] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&stack0x00000058 + lVar18) = *(int *)(&stack0x00000058 + lVar18) * 2 | uVar13;
          *(uint *)(&stack0x00000068 + lVar18) = *(int *)(&stack0x00000068 + lVar18) * 2 | uVar10;
        }
        if (unaff_RBX[8] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&stack0x0000005c + lVar18) = *(int *)(&stack0x0000005c + lVar18) * 2 | uVar13;
          *(uint *)(&stack0x0000006c + lVar18) = *(int *)(&stack0x0000006c + lVar18) * 2 | uVar10;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
      uVar15 = (ulonglong)*unaff_RBX;
      iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
    }
    if (iVar2 != 0) {
      uVar10 = unaff_RBX[5];
      if (uVar10 != 0) {
        unaff_RBX[5] = uVar10 + 1;
      }
      if (unaff_RBX[6] != 0) {
        unaff_RBX[6] = unaff_RBX[6] + 1;
      }
      if (unaff_RBX[7] != 0) {
        unaff_RBX[7] = unaff_RBX[7] + 1;
      }
      if (unaff_RBX[8] != 0) {
        unaff_RBX[8] = unaff_RBX[8] + 1;
      }
      uVar15 = (ulonglong)*unaff_RBX;
    }
  }
  if (*(int *)(uVar15 * 0x28 + 0x180bf02b0) == 2) {
    FUN_18041cce0();
  }
  else {
    iVar2 = *(int *)(uVar15 * 0x28 + 0x180bf02cc);
    if (iVar2 == 2) {
      param_7 = CONCAT44(*(int32_t *)(&unknown_var_7700_ptr + (ulonglong)unaff_RBX[1] * 0xc),uVar6);
    }
    else {
      param_7 = unaff_RDI;
      if (iVar2 == 3) {
        param_7 = CONCAT44(*(int32_t *)(&unknown_var_8468_ptr + (ulonglong)unaff_RBX[1] * 0xc),uVar6);
      }
    }
    puVar14 = (uint *)(unaff_RBP + -0x50);
    uVar4 = unaff_RDI & 0xffffffff;
    puVar17 = (uint *)(((ulonglong)(iVar2 - 1) * 0x40 + (ulonglong)unaff_RBX[1]) * 0x40 +
                      0x180bf03f0);
    do {
      uVar13 = *(uint *)(uVar15 * 0x28 + 0x180bf02d0);
      uVar10 = *(uint *)(((longlong)puVar17 - (unaff_RBP + -0x50)) + (longlong)puVar14);
      *puVar14 = uVar6;
      uVar8 = uVar13;
      if ((int)uVar4 == *(int *)((longlong)&stack0x00000038 + (ulonglong)uVar10 * 4)) {
        uVar8 = uVar13 - 1;
      }
      uVar9 = unaff_RDI & 0xffffffff;
      if (uVar8 != 0) {
        uVar12 = unaff_RDI & 0xffffffff;
        uVar10 = unaff_RBX[4];
        do {
          bVar1 = *(byte *)((ulonglong)(uVar10 >> 3) + unaff_RSI);
          unaff_RBX[4] = uVar10 + 1;
          bVar3 = (byte)uVar9;
          uVar13 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar13;
          uVar11 = (uint)uVar12 | (bVar1 >> ((byte)uVar10 & 7) & 1) << (bVar3 & 0x1f);
          uVar12 = (ulonglong)uVar11;
          uVar10 = uVar10 + 1;
        } while (uVar13 < uVar8);
        *puVar14 = uVar11;
        uVar13 = *(uint *)(uVar15 * 0x28 + 0x180bf02d0);
      }
      uVar10 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar10;
      puVar14 = puVar14 + 1;
    } while (uVar10 < 0x10);
    iVar2 = 1 << ((byte)uVar13 & 0x1f);
    uVar19 = CONCAT44(iVar2,iVar2);
    if (uVar6 < *(uint *)(uVar15 * 0x28 + 0x180bf02cc)) {
      do {
        FUN_18041c120(&stack0x00000050 + (unaff_RDI & 0xffffffff) * 0x20,
                      unaff_RBP + -0x10 + (unaff_RDI & 0xffffffff) * 0x200,&stack0x00000020,
                      unaff_RBX + 5,uVar19);
        uVar6 = (int)unaff_RDI + 1;
        unaff_RDI = (ulonglong)uVar6;
      } while (uVar6 < *(uint *)((ulonglong)*unaff_RBX * 0x28 + 0x180bf02cc));
    }
    lVar18 = 0x10;
    puVar5 = (uint64_t *)(param_5 + 0x10);
    puVar14 = puVar17;
    do {
      uVar15 = (ulonglong)*(uint *)(((unaff_RBP + -0x50) - (longlong)puVar17) + (longlong)puVar14);
      puVar5[-2] = *(uint64_t *)(unaff_RBP + -0x10 + ((ulonglong)*puVar14 * 0x40 + uVar15) * 8);
      puVar5[-1] = *(uint64_t *)(unaff_RBP + 0x70 + ((ulonglong)*puVar14 * 0x40 + uVar15) * 8);
      *puVar5 = *(uint64_t *)(unaff_RBP + 0xf0 + ((ulonglong)*puVar14 * 0x40 + uVar15) * 8);
      puVar5[1] = *(uint64_t *)(unaff_RBP + 0x170 + ((ulonglong)*puVar14 * 0x40 + uVar15) * 8);
      lVar18 = lVar18 + -1;
      puVar5 = puVar5 + 4;
      puVar14 = puVar14 + 1;
    } while (lVar18 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x5f0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18041ccb8(void)
void FUN_18041ccb8(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x5f0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



