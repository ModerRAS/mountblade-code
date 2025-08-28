#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part109.c - 5 个函数

// 函数: void FUN_180730e60(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180730e60(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t auStack_c8 [8];
  int32_t uStack_c0;
  uint64_t uStack_a0;
  uint64_t uStack_88;
  uint64_t uStack_58;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  uStack_c0 = *(int32_t *)(param_2 + 0x10e8);
  uStack_a0 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200(0xffffffffffffff0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807319b0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)
void FUN_1807319b0(uint64_t param_1,uint64_t param_2,int32_t param_3,uint64_t param_4)

{
  int in_stack_000000c0;
  int8_t auStack_128 [40];
  uint64_t uStack_100;
  int32_t uStack_f0;
  uint64_t uStack_c8;
  uint64_t uStack_78;
  longlong lStack_70;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_128;
  lStack_70 = (longlong)in_stack_000000c0;
  uStack_100 = param_4;
  uStack_f0 = param_3;
  uStack_c8 = param_2;
  uStack_78 = param_1;
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_1807326d0(longlong param_1,longlong param_2,longlong param_3,short *param_4,
void FUN_1807326d0(longlong param_1,longlong param_2,longlong param_3,short *param_4,
                  int32_t *param_5,longlong param_6,longlong param_7,int param_8,int param_9,
                  short param_10,longlong param_11,longlong param_12,int param_13,int param_14)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int32_t *puVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  short *psVar18;
  longlong lVar19;
  
  iVar8 = *(int *)((longlong)param_8 * 4 + param_12);
  puVar12 = (uint *)(param_11 + (longlong)param_8 * 4);
  uVar15 = 1;
  if (1 < (int)*puVar12) {
    uVar15 = *puVar12;
  }
  uVar2 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
  if (uVar2 == 0) {
    iVar13 = 0x20;
  }
  else {
    iVar13 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar13 = 0x1f - iVar13;
  }
  iVar16 = uVar15 << ((byte)(iVar13 + -1) & 0x1f);
  lVar10 = 0x1fffffff / (longlong)(iVar16 >> 0x10);
  iVar3 = (int)lVar10;
  iVar7 = 0xe - (iVar13 + -1);
  iVar13 = (int)((ulonglong)
                 ((longlong)
                  ((int)((ulonglong)((longlong)iVar16 * (longlong)(short)lVar10) >> 0x10) * -8) *
                 (longlong)iVar3) >> 0x10) + iVar3 * 0x10000;
  if (iVar7 < 1) {
    bVar6 = -(byte)iVar7;
    iVar7 = -0x80000000 >> (bVar6 & 0x1f);
    iVar3 = 0x7fffffff >> (bVar6 & 0x1f);
    if (iVar3 < iVar7) {
      iVar16 = iVar7;
      if (iVar7 < iVar13) {
LAB_1807327de:
        iVar13 = iVar16 << (bVar6 & 0x1f);
      }
      else {
        if (iVar13 < iVar3) {
          iVar13 = iVar3;
        }
        iVar13 = iVar13 << (bVar6 & 0x1f);
      }
    }
    else {
      if (iVar13 <= iVar3) {
        iVar16 = iVar13;
        if (iVar13 < iVar7) {
          iVar16 = iVar7;
        }
        goto LAB_1807327de;
      }
      iVar13 = iVar3 << (bVar6 & 0x1f);
    }
  }
  else if (iVar7 < 0x20) {
    iVar13 = iVar13 >> ((byte)iVar7 & 0x1f);
  }
  else {
    iVar13 = 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x11e8)) {
    do {
      sVar1 = *param_4;
      param_4 = param_4 + 1;
      iVar3 = iVar3 + 1;
      *param_5 = (int)((ulonglong)((longlong)sVar1 * (longlong)((iVar13 >> 4) + 1 >> 1)) >> 0x10);
      param_5 = param_5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x11e8));
  }
  if (*(int *)(param_2 + 0x10fc) != 0) {
    if (param_8 == 0) {
      iVar13 = (int)((ulonglong)((longlong)iVar13 * (longlong)param_10) >> 0x10) << 2;
    }
    iVar3 = (*(int *)(param_2 + 0x10ec) - iVar8) + -2;
    if (iVar3 < *(int *)(param_2 + 0x10ec)) {
      psVar18 = (short *)(param_6 + (longlong)iVar3 * 2);
      puVar9 = (int32_t *)(param_7 + (longlong)iVar3 * 4);
      do {
        sVar1 = *psVar18;
        psVar18 = psVar18 + 1;
        iVar3 = iVar3 + 1;
        *puVar9 = (int)((ulonglong)((longlong)sVar1 * (longlong)iVar13) >> 0x10);
        puVar9 = puVar9 + 1;
      } while (iVar3 < *(int *)(param_2 + 0x10ec));
    }
  }
  uVar15 = *puVar12;
  uVar2 = *(uint *)(param_2 + 0x10f8);
  if (uVar15 == uVar2) {
    return;
  }
  uVar4 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  if (uVar4 == 0) {
    iVar13 = 0x20;
  }
  else {
    iVar13 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar13 = 0x1f - iVar13;
  }
  iVar3 = uVar2 << ((byte)(iVar13 + -1) & 0x1f);
  uVar2 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
  if (uVar2 == 0) {
    iVar7 = 0x20;
  }
  else {
    iVar7 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar7 = 0x1f - iVar7;
  }
  iVar11 = uVar15 << ((byte)(iVar7 + -1) & 0x1f);
  lVar10 = (longlong)(short)(0x1fffffff / (longlong)(iVar11 >> 0x10));
  iVar16 = (int)((ulonglong)(iVar3 * lVar10) >> 0x10);
  iVar16 = iVar16 + (int)((ulonglong)
                          ((iVar3 + (int)((ulonglong)((longlong)iVar16 * (longlong)iVar11) >> 0x20)
                                    * -8) * lVar10) >> 0x10);
  iVar13 = ((iVar13 + -1) - (iVar7 + -1)) + 0xd;
  if (iVar13 < 0) {
    bVar6 = -(byte)iVar13;
    iVar3 = -0x80000000 >> (bVar6 & 0x1f);
    iVar13 = 0x7fffffff >> (bVar6 & 0x1f);
    if (iVar13 < iVar3) {
      iVar7 = iVar3;
      if (iVar16 <= iVar3) {
        if (iVar16 < iVar13) {
          iVar16 = iVar13;
        }
        iVar16 = iVar16 << (bVar6 & 0x1f);
        goto LAB_180732998;
      }
    }
    else {
      if (iVar13 < iVar16) {
        iVar16 = iVar13 << (bVar6 & 0x1f);
        goto LAB_180732998;
      }
      iVar7 = iVar16;
      if (iVar16 < iVar3) {
        iVar7 = iVar3;
      }
    }
    iVar16 = iVar7 << (bVar6 & 0x1f);
  }
  else if (iVar13 < 0x20) {
    iVar16 = iVar16 >> ((byte)iVar13 & 0x1f);
  }
  else {
    iVar16 = 0;
  }
LAB_180732998:
  iVar13 = *(int *)(param_2 + 0x10f0) - *(int *)(param_1 + 0x11ec);
  lVar10 = (longlong)iVar16;
  if (iVar13 < *(int *)(param_2 + 0x10f0)) {
    piVar14 = (int *)(param_2 + ((longlong)iVar13 + 0x140) * 4);
    do {
      iVar13 = iVar13 + 1;
      *piVar14 = (int)((ulonglong)(*piVar14 * lVar10) >> 0x10);
      piVar14 = piVar14 + 1;
    } while (iVar13 < *(int *)(param_2 + 0x10f0));
  }
  if (((param_13 == 2) && (*(int *)(param_2 + 0x10fc) == 0)) &&
     (iVar8 = (*(int *)(param_2 + 0x10ec) - iVar8) + -2,
     iVar8 < *(int *)(param_2 + 0x10ec) - param_14)) {
    piVar14 = (int *)(param_7 + (longlong)iVar8 * 4);
    do {
      iVar8 = iVar8 + 1;
      *piVar14 = (int)((ulonglong)(*piVar14 * lVar10) >> 0x10);
      piVar14 = piVar14 + 1;
    } while (iVar8 < *(int *)(param_2 + 0x10ec) - param_14);
  }
  lVar17 = (longlong)param_9;
  if (0 < lVar17) {
    piVar14 = (int *)(param_3 + 0x504);
    do {
      piVar14[-1] = (int)((ulonglong)(piVar14[-1] * lVar10) >> 0x10);
      *piVar14 = (int)((ulonglong)(*piVar14 * lVar10) >> 0x10);
      piVar14[-0x141] = (int)((ulonglong)(piVar14[-0x141] * lVar10) >> 0x10);
      piVar14[-0x140] = (int)((ulonglong)(piVar14[-0x140] * lVar10) >> 0x10);
      piVar14[-0x13f] = (int)((ulonglong)(piVar14[-0x13f] * lVar10) >> 0x10);
      piVar14[-0x13e] = (int)((ulonglong)(piVar14[-0x13e] * lVar10) >> 0x10);
      piVar14[-0x13d] = (int)((ulonglong)(piVar14[-0x13d] * lVar10) >> 0x10);
      piVar14[-0x13c] = (int)((ulonglong)(piVar14[-0x13c] * lVar10) >> 0x10);
      piVar14[-0x13b] = (int)((ulonglong)(piVar14[-0x13b] * lVar10) >> 0x10);
      piVar14[-0x13a] = (int)((ulonglong)(piVar14[-0x13a] * lVar10) >> 0x10);
      piVar14[-0x139] = (int)((ulonglong)(piVar14[-0x139] * lVar10) >> 0x10);
      piVar14[-0x138] = (int)((ulonglong)(piVar14[-0x138] * lVar10) >> 0x10);
      piVar14[-0x137] = (int)((ulonglong)(piVar14[-0x137] * lVar10) >> 0x10);
      piVar14[-0x136] = (int)((ulonglong)(piVar14[-0x136] * lVar10) >> 0x10);
      piVar14[-0x135] = (int)((ulonglong)(piVar14[-0x135] * lVar10) >> 0x10);
      piVar14[-0x134] = (int)((ulonglong)(piVar14[-0x134] * lVar10) >> 0x10);
      piVar14[-0x133] = (int)((ulonglong)(piVar14[-0x133] * lVar10) >> 0x10);
      piVar14[-0x132] = (int)((ulonglong)(piVar14[-0x132] * lVar10) >> 0x10);
      piVar14[-0x19] = (int)((ulonglong)(piVar14[-0x19] * lVar10) >> 0x10);
      piVar14[-0x18] = (int)((ulonglong)(piVar14[-0x18] * lVar10) >> 0x10);
      piVar14[-0x17] = (int)((ulonglong)(piVar14[-0x17] * lVar10) >> 0x10);
      piVar14[-0x16] = (int)((ulonglong)(piVar14[-0x16] * lVar10) >> 0x10);
      piVar14[-0x15] = (int)((ulonglong)(piVar14[-0x15] * lVar10) >> 0x10);
      piVar14[-0x14] = (int)((ulonglong)(piVar14[-0x14] * lVar10) >> 0x10);
      piVar14[-0x13] = (int)((ulonglong)(piVar14[-0x13] * lVar10) >> 0x10);
      piVar14[-0x12] = (int)((ulonglong)(piVar14[-0x12] * lVar10) >> 0x10);
      piVar14[-0x11] = (int)((ulonglong)(piVar14[-0x11] * lVar10) >> 0x10);
      piVar14[-0x10] = (int)((ulonglong)(piVar14[-0x10] * lVar10) >> 0x10);
      piVar14[-0xf] = (int)((ulonglong)(piVar14[-0xf] * lVar10) >> 0x10);
      piVar14[-0xe] = (int)((ulonglong)(piVar14[-0xe] * lVar10) >> 0x10);
      piVar14[-0xd] = (int)((ulonglong)(piVar14[-0xd] * lVar10) >> 0x10);
      piVar14[-0xc] = (int)((ulonglong)(piVar14[-0xc] * lVar10) >> 0x10);
      piVar14[-0xb] = (int)((ulonglong)(piVar14[-0xb] * lVar10) >> 0x10);
      piVar14[-10] = (int)((ulonglong)(piVar14[-10] * lVar10) >> 0x10);
      piVar14[-9] = (int)((ulonglong)(piVar14[-9] * lVar10) >> 0x10);
      piVar14[-8] = (int)((ulonglong)(piVar14[-8] * lVar10) >> 0x10);
      piVar14[-7] = (int)((ulonglong)(piVar14[-7] * lVar10) >> 0x10);
      piVar14[-6] = (int)((ulonglong)(piVar14[-6] * lVar10) >> 0x10);
      piVar14[-5] = (int)((ulonglong)(piVar14[-5] * lVar10) >> 0x10);
      piVar14[-4] = (int)((ulonglong)(piVar14[-4] * lVar10) >> 0x10);
      lVar19 = 2;
      piVar14[-3] = (int)((ulonglong)(piVar14[-3] * lVar10) >> 0x10);
      piVar14[-2] = (int)((ulonglong)(piVar14[-2] * lVar10) >> 0x10);
      piVar5 = piVar14 + -0x41;
      do {
        piVar5[-0x28] = (int)((ulonglong)(piVar5[-0x28] * lVar10) >> 0x10);
        *piVar5 = (int)((ulonglong)(*piVar5 * lVar10) >> 0x10);
        piVar5[-0x27] = (int)((ulonglong)(piVar5[-0x27] * lVar10) >> 0x10);
        piVar5[1] = (int)((ulonglong)(piVar5[1] * lVar10) >> 0x10);
        piVar5[-0x26] = (int)((ulonglong)(piVar5[-0x26] * lVar10) >> 0x10);
        piVar5[2] = (int)((ulonglong)(piVar5[2] * lVar10) >> 0x10);
        piVar5[-0x25] = (int)((ulonglong)(piVar5[-0x25] * lVar10) >> 0x10);
        piVar5[3] = (int)((ulonglong)(piVar5[3] * lVar10) >> 0x10);
        piVar5[-0x24] = (int)((ulonglong)(piVar5[-0x24] * lVar10) >> 0x10);
        piVar5[4] = (int)((ulonglong)(piVar5[4] * lVar10) >> 0x10);
        piVar5[-0x23] = (int)((ulonglong)(piVar5[-0x23] * lVar10) >> 0x10);
        piVar5[5] = (int)((ulonglong)(piVar5[5] * lVar10) >> 0x10);
        piVar5[-0x22] = (int)((ulonglong)(piVar5[-0x22] * lVar10) >> 0x10);
        piVar5[6] = (int)((ulonglong)(piVar5[6] * lVar10) >> 0x10);
        piVar5[-0x21] = (int)((ulonglong)(piVar5[-0x21] * lVar10) >> 0x10);
        piVar5[7] = (int)((ulonglong)(piVar5[7] * lVar10) >> 0x10);
        piVar5[-0x20] = (int)((ulonglong)(piVar5[-0x20] * lVar10) >> 0x10);
        piVar5[8] = (int)((ulonglong)(piVar5[8] * lVar10) >> 0x10);
        piVar5[-0x1f] = (int)((ulonglong)(piVar5[-0x1f] * lVar10) >> 0x10);
        piVar5[9] = (int)((ulonglong)(piVar5[9] * lVar10) >> 0x10);
        piVar5[-0x1e] = (int)((ulonglong)(piVar5[-0x1e] * lVar10) >> 0x10);
        piVar5[10] = (int)((ulonglong)(piVar5[10] * lVar10) >> 0x10);
        piVar5[-0x1d] = (int)((ulonglong)(piVar5[-0x1d] * lVar10) >> 0x10);
        piVar5[0xb] = (int)((ulonglong)(piVar5[0xb] * lVar10) >> 0x10);
        piVar5[-0x1c] = (int)((ulonglong)(piVar5[-0x1c] * lVar10) >> 0x10);
        piVar5[0xc] = (int)((ulonglong)(piVar5[0xc] * lVar10) >> 0x10);
        piVar5[-0x1b] = (int)((ulonglong)(piVar5[-0x1b] * lVar10) >> 0x10);
        piVar5[0xd] = (int)((ulonglong)(piVar5[0xd] * lVar10) >> 0x10);
        piVar5[-0x1a] = (int)((ulonglong)(piVar5[-0x1a] * lVar10) >> 0x10);
        piVar5[0xe] = (int)((ulonglong)(piVar5[0xe] * lVar10) >> 0x10);
        piVar5[-0x19] = (int)((ulonglong)(piVar5[-0x19] * lVar10) >> 0x10);
        piVar5[0xf] = (int)((ulonglong)(piVar5[0xf] * lVar10) >> 0x10);
        piVar5[-0x18] = (int)((ulonglong)(piVar5[-0x18] * lVar10) >> 0x10);
        piVar5[0x10] = (int)((ulonglong)(piVar5[0x10] * lVar10) >> 0x10);
        piVar5[-0x17] = (int)((ulonglong)(piVar5[-0x17] * lVar10) >> 0x10);
        piVar5[0x11] = (int)((ulonglong)(piVar5[0x11] * lVar10) >> 0x10);
        piVar5[-0x16] = (int)((ulonglong)(piVar5[-0x16] * lVar10) >> 0x10);
        piVar5[0x12] = (int)((ulonglong)(piVar5[0x12] * lVar10) >> 0x10);
        piVar5[-0x15] = (int)((ulonglong)(piVar5[-0x15] * lVar10) >> 0x10);
        piVar5[0x13] = (int)((ulonglong)(piVar5[0x13] * lVar10) >> 0x10);
        lVar19 = lVar19 + -1;
        piVar5 = piVar5 + 0x14;
      } while (lVar19 != 0);
      piVar14 = piVar14 + 0x145;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  *(uint *)(param_2 + 0x10f8) = *puVar12;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180733080(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_180733080(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t in_XMM1 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t in_XMM4 [16];
  int8_t auVar23 [16];
  int8_t auStack_f8 [32];
  int iStack_d8;
  int32_t uStack_d0;
  int iStack_c8;
  ulonglong auStack_b8 [4];
  ulonglong auStack_98 [4];
  int8_t auStack_78 [32];
  ulonglong uStack_58;
  ulonglong uVar9;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  iVar6 = (int)((ulonglong)((longlong)*(short *)(param_1 + 0x11b0) * -0x41892) >> 0x10) + 0xc4a;
  if (*(int *)(param_1 + 0x11e0) == 2) {
    iVar6 = iVar6 + (iVar6 >> 1);
  }
  FUN_180737100(auStack_b8,param_3,*(int32_t *)(param_1 + 0x121c));
  if ((*(int *)(param_1 + 0x1214) == 1) && (*(char *)(param_1 + 0x12a7) < '\x04')) {
    iStack_d8 = *(int32_t *)(param_1 + 0x121c);
    bVar2 = true;
    FUN_180736180(auStack_78,param_4,param_3,(int)*(char *)(param_1 + 0x12a7));
    FUN_180737100(auStack_98,auStack_78,*(int32_t *)(param_1 + 0x121c));
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x121c);
    uVar8 = 0;
    sVar7 = (short)*(char *)(param_1 + 0x12a7) * (short)*(char *)(param_1 + 0x12a7) * 0x800;
    auVar10._0_4_ = CONCAT22(sVar7,sVar7);
    auVar10._4_4_ = auVar10._0_4_;
    if (((0 < (int)uVar1) && (0xf < uVar1)) && (1 < _DAT_180bf00b0)) {
      uVar3 = uVar1 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      auVar10._8_8_ = 0;
      auVar10 = pmovsxwd(in_XMM4,auVar10);
      auVar23 = ZEXT416(0x10);
      uVar9 = uVar4;
      do {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)((longlong)auStack_b8 + uVar4 * 2);
        uVar8 = (int)uVar9 + 0x10;
        uVar9 = (ulonglong)uVar8;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)((longlong)auStack_98 + uVar4 * 2);
        auVar13 = pmovsxwd(in_XMM1,auVar11);
        auVar13 = pmulld(auVar13,auVar10);
        auVar14._0_4_ = auVar13._0_4_ >> auVar23;
        auVar14._4_4_ = auVar13._4_4_ >> auVar23;
        auVar14._8_4_ = auVar13._8_4_ >> auVar23;
        auVar14._12_4_ = auVar13._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar11,auVar14,0xd8);
        auVar11 = pshufhw(auVar14,auVar11,0xd8);
        auVar19 = psraw(auVar18,ZEXT816(1));
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)((longlong)auStack_98 + uVar4 * 2 + 8);
        *(ulonglong *)((longlong)auStack_b8 + uVar4 * 2) =
             CONCAT26(auVar11._10_2_ + auVar19._6_2_,
                      CONCAT24(auVar11._8_2_ + auVar19._4_2_,
                               CONCAT22(auVar11._2_2_ + auVar19._2_2_,auVar11._0_2_ + auVar19._0_2_)
                              ));
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulonglong *)((longlong)auStack_b8 + uVar4 * 2 + 8);
        auVar11 = pmovsxwd(auVar11,auVar13);
        auVar11 = pmulld(auVar11,auVar10);
        auVar15._0_4_ = auVar11._0_4_ >> auVar23;
        auVar15._4_4_ = auVar11._4_4_ >> auVar23;
        auVar15._8_4_ = auVar11._8_4_ >> auVar23;
        auVar15._12_4_ = auVar11._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar13,auVar15,0xd8);
        auVar11 = pshufhw(auVar15,auVar11,0xd8);
        auVar13 = psraw(auVar20,ZEXT816(1));
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulonglong *)((longlong)auStack_98 + uVar4 * 2 + 0x10);
        *(ulonglong *)((longlong)auStack_b8 + uVar4 * 2 + 8) =
             CONCAT26(auVar11._10_2_ + auVar13._6_2_,
                      CONCAT24(auVar11._8_2_ + auVar13._4_2_,
                               CONCAT22(auVar11._2_2_ + auVar13._2_2_,auVar11._0_2_ + auVar13._0_2_)
                              ));
        auVar21._8_8_ = 0;
        auVar21._0_8_ = *(ulonglong *)((longlong)auStack_b8 + uVar4 * 2 + 0x10);
        auVar11 = pmovsxwd(auVar11,auVar19);
        auVar11 = pmulld(auVar11,auVar10);
        auVar16._0_4_ = auVar11._0_4_ >> auVar23;
        auVar16._4_4_ = auVar11._4_4_ >> auVar23;
        auVar16._8_4_ = auVar11._8_4_ >> auVar23;
        auVar16._12_4_ = auVar11._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar19,auVar16,0xd8);
        auVar11 = pshufhw(auVar16,auVar11,0xd8);
        auVar13 = psraw(auVar21,ZEXT816(1));
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(auStack_78 + uVar4 * 2 + -8);
        *(ulonglong *)((longlong)auStack_b8 + uVar4 * 2 + 0x10) =
             CONCAT26(auVar11._10_2_ + auVar13._6_2_,
                      CONCAT24(auVar11._8_2_ + auVar13._4_2_,
                               CONCAT22(auVar11._2_2_ + auVar13._2_2_,auVar11._0_2_ + auVar13._0_2_)
                              ));
        auVar22._8_8_ = 0;
        auVar22._0_8_ = *(ulonglong *)((longlong)auStack_98 + uVar4 * 2 + -8);
        auVar11 = pmovsxwd(auVar11,auVar12);
        auVar11 = pmulld(auVar11,auVar10);
        auVar17._0_4_ = auVar11._0_4_ >> auVar23;
        auVar17._4_4_ = auVar11._4_4_ >> auVar23;
        auVar17._8_4_ = auVar11._8_4_ >> auVar23;
        auVar17._12_4_ = auVar11._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar12,auVar17,0xd8);
        in_XMM1 = pshufhw(auVar17,auVar11,0xd8);
        auVar11 = psraw(auVar22,ZEXT816(1));
        *(ulonglong *)((longlong)auStack_98 + uVar4 * 2 + -8) =
             CONCAT26(in_XMM1._10_2_ + auVar11._6_2_,
                      CONCAT24(in_XMM1._8_2_ + auVar11._4_2_,
                               CONCAT22(in_XMM1._2_2_ + auVar11._2_2_,in_XMM1._0_2_ + auVar11._0_2_)
                              ));
        uVar4 = uVar4 + 0x10;
      } while ((longlong)uVar4 < (longlong)(int)(uVar1 - uVar3));
    }
    lVar5 = (longlong)(int)uVar8;
    if (lVar5 < (int)uVar1) {
      do {
        *(short *)((longlong)auStack_b8 + lVar5 * 2) =
             (short)((uint)((int)*(short *)((longlong)auStack_98 + lVar5 * 2) * (int)sVar7) >> 0x10)
             + (*(short *)((longlong)auStack_b8 + lVar5 * 2) >> 1);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uVar1);
    }
  }
  else {
    bVar2 = false;
  }
  iStack_c8 = (int)*(char *)(param_1 + 0x12a5);
  uStack_d0 = *(int32_t *)(param_1 + 0x1230);
  iStack_d8 = iVar6;
  FUN_180737240(param_1 + 0x1290,param_3,*(uint64_t *)(param_1 + 0x1258),auStack_b8);
  FUN_18072f4d0(param_2 + 0x20,param_3,*(int32_t *)(param_1 + 0x121c),
                *(int32_t *)(param_1 + 0x13ec));
  if (!bVar2) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,param_2 + 0x20,(longlong)*(int *)(param_1 + 0x121c) * 2);
  }
  iStack_d8 = *(int *)(param_1 + 0x121c);
  FUN_180736180(auStack_78,param_4,param_3,(int)*(char *)(param_1 + 0x12a7));
  FUN_18072f4d0(param_2,auStack_78,*(int32_t *)(param_1 + 0x121c),
                *(int32_t *)(param_1 + 0x13ec));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1807330b2(longlong param_1,longlong param_2,uint64_t param_3)
void FUN_1807330b2(longlong param_1,longlong param_2,uint64_t param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint64_t unaff_RDI;
  short sVar7;
  uint uVar8;
  int8_t auVar10 [16];
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  int8_t in_XMM1 [16];
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t in_XMM4 [16];
  int8_t auVar23 [16];
  uint64_t unaff_XMM6_Qa;
  uint64_t unaff_XMM6_Qb;
  ulonglong in_stack_000000a0;
  uint64_t in_stack_000000b0;
  uint64_t in_stack_000000b8;
  ulonglong uVar9;
  
  iVar6 = (int)((ulonglong)unaff_RDI >> 0x10) + 0xc4a;
  if (*(int *)(param_1 + 0x11e0) == 2) {
    iVar6 = iVar6 + (iVar6 >> 1);
  }
  FUN_180737100(&stack0x00000040,param_3,*(int32_t *)(param_1 + 0x121c));
  if ((*(int *)(param_1 + 0x1214) == 1) && (*(char *)(param_1 + 0x12a7) < '\x04')) {
    bVar2 = true;
    FUN_180736180(&stack0x00000080);
    FUN_180737100(&stack0x00000060,&stack0x00000080,*(int32_t *)(param_1 + 0x121c));
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 0x121c);
    uVar8 = 0;
    sVar7 = (short)*(char *)(param_1 + 0x12a7) * (short)*(char *)(param_1 + 0x12a7) * 0x800;
    auVar10._0_4_ = CONCAT22(sVar7,sVar7);
    auVar10._4_4_ = auVar10._0_4_;
    if (((0 < (int)uVar1) && (0xf < uVar1)) && (1 < _DAT_180bf00b0)) {
      uVar3 = uVar1 & 0x8000000f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
      }
      auVar10._8_8_ = 0;
      auVar10 = pmovsxwd(in_XMM4,auVar10);
      auVar23 = ZEXT416(0x10);
      uVar9 = uVar4;
      in_stack_000000b0 = unaff_XMM6_Qa;
      in_stack_000000b8 = unaff_XMM6_Qb;
      do {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(&stack0x00000040 + uVar4 * 2);
        uVar8 = (int)uVar9 + 0x10;
        uVar9 = (ulonglong)uVar8;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *(ulonglong *)(&stack0x00000060 + uVar4 * 2);
        auVar13 = pmovsxwd(in_XMM1,auVar11);
        auVar13 = pmulld(auVar13,auVar10);
        auVar14._0_4_ = auVar13._0_4_ >> auVar23;
        auVar14._4_4_ = auVar13._4_4_ >> auVar23;
        auVar14._8_4_ = auVar13._8_4_ >> auVar23;
        auVar14._12_4_ = auVar13._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar11,auVar14,0xd8);
        auVar11 = pshufhw(auVar14,auVar11,0xd8);
        auVar19 = psraw(auVar18,ZEXT816(1));
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(&stack0x00000068 + uVar4 * 2);
        *(ulonglong *)(&stack0x00000040 + uVar4 * 2) =
             CONCAT26(auVar11._10_2_ + auVar19._6_2_,
                      CONCAT24(auVar11._8_2_ + auVar19._4_2_,
                               CONCAT22(auVar11._2_2_ + auVar19._2_2_,auVar11._0_2_ + auVar19._0_2_)
                              ));
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulonglong *)(&stack0x00000048 + uVar4 * 2);
        auVar11 = pmovsxwd(auVar11,auVar13);
        auVar11 = pmulld(auVar11,auVar10);
        auVar15._0_4_ = auVar11._0_4_ >> auVar23;
        auVar15._4_4_ = auVar11._4_4_ >> auVar23;
        auVar15._8_4_ = auVar11._8_4_ >> auVar23;
        auVar15._12_4_ = auVar11._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar13,auVar15,0xd8);
        auVar11 = pshufhw(auVar15,auVar11,0xd8);
        auVar13 = psraw(auVar20,ZEXT816(1));
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulonglong *)(&stack0x00000070 + uVar4 * 2);
        *(ulonglong *)(&stack0x00000048 + uVar4 * 2) =
             CONCAT26(auVar11._10_2_ + auVar13._6_2_,
                      CONCAT24(auVar11._8_2_ + auVar13._4_2_,
                               CONCAT22(auVar11._2_2_ + auVar13._2_2_,auVar11._0_2_ + auVar13._0_2_)
                              ));
        auVar21._8_8_ = 0;
        auVar21._0_8_ = *(ulonglong *)(&stack0x00000050 + uVar4 * 2);
        auVar11 = pmovsxwd(auVar11,auVar19);
        auVar11 = pmulld(auVar11,auVar10);
        auVar16._0_4_ = auVar11._0_4_ >> auVar23;
        auVar16._4_4_ = auVar11._4_4_ >> auVar23;
        auVar16._8_4_ = auVar11._8_4_ >> auVar23;
        auVar16._12_4_ = auVar11._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar19,auVar16,0xd8);
        auVar11 = pshufhw(auVar16,auVar11,0xd8);
        auVar13 = psraw(auVar21,ZEXT816(1));
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *(ulonglong *)(&stack0x00000078 + uVar4 * 2);
        *(ulonglong *)(&stack0x00000050 + uVar4 * 2) =
             CONCAT26(auVar11._10_2_ + auVar13._6_2_,
                      CONCAT24(auVar11._8_2_ + auVar13._4_2_,
                               CONCAT22(auVar11._2_2_ + auVar13._2_2_,auVar11._0_2_ + auVar13._0_2_)
                              ));
        auVar22._8_8_ = 0;
        auVar22._0_8_ = *(ulonglong *)(&stack0x00000058 + uVar4 * 2);
        auVar11 = pmovsxwd(auVar11,auVar12);
        auVar11 = pmulld(auVar11,auVar10);
        auVar17._0_4_ = auVar11._0_4_ >> auVar23;
        auVar17._4_4_ = auVar11._4_4_ >> auVar23;
        auVar17._8_4_ = auVar11._8_4_ >> auVar23;
        auVar17._12_4_ = auVar11._12_4_ >> auVar23;
        auVar11 = pshuflw(auVar12,auVar17,0xd8);
        in_XMM1 = pshufhw(auVar17,auVar11,0xd8);
        auVar11 = psraw(auVar22,ZEXT816(1));
        *(ulonglong *)(&stack0x00000058 + uVar4 * 2) =
             CONCAT26(in_XMM1._10_2_ + auVar11._6_2_,
                      CONCAT24(in_XMM1._8_2_ + auVar11._4_2_,
                               CONCAT22(in_XMM1._2_2_ + auVar11._2_2_,in_XMM1._0_2_ + auVar11._0_2_)
                              ));
        uVar4 = uVar4 + 0x10;
      } while ((longlong)uVar4 < (longlong)(int)(uVar1 - uVar3));
    }
    lVar5 = (longlong)(int)uVar8;
    if (lVar5 < (int)uVar1) {
      do {
        *(short *)(&stack0x00000040 + lVar5 * 2) =
             (short)((uint)((int)*(short *)(&stack0x00000060 + lVar5 * 2) * (int)sVar7) >> 0x10) +
             (*(short *)(&stack0x00000040 + lVar5 * 2) >> 1);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uVar1);
    }
  }
  else {
    bVar2 = false;
  }
  FUN_180737240(param_1 + 0x1290,param_3,*(uint64_t *)(param_1 + 0x1258),&stack0x00000040,iVar6);
  FUN_18072f4d0(param_2 + 0x20,param_3,*(int32_t *)(param_1 + 0x121c),
                *(int32_t *)(param_1 + 0x13ec));
  iVar6 = *(int *)(param_1 + 0x121c);
  if (!bVar2) {
                    // WARNING: Subroutine does not return
    memcpy(param_2,param_2 + 0x20,(longlong)iVar6 * 2);
  }
  FUN_180736180(&stack0x00000080);
  FUN_18072f4d0(param_2,&stack0x00000080,*(int32_t *)(param_1 + 0x121c),
                *(int32_t *)(param_1 + 0x13ec),iVar6);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}





