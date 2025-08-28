#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part062.c - 4 个函数

// 函数: void FUN_180699620(int64_t param_1)
void FUN_180699620(int64_t param_1)

{
  int64_t lVar1;
  byte bVar2;
  uint64_t *puVar3;
  int8_t *puVar4;
  int8_t *puVar5;
  int8_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  int iVar11;
  int64_t lVar12;
  int64_t lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int64_t lVar17;
  int8_t auStack_178 [32];
  int iStack_158;
  int64_t lStack_150;
  int64_t lStack_148;
  int64_t lStack_140;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int64_t lStack_128;
  int64_t lStack_120;
  int64_t lStack_118;
  int64_t lStack_110;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int64_t lStack_d8;
  int64_t lStack_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint auStack_b0 [6];
  int64_t alStack_98 [9];
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  lStack_e8 = *(int64_t *)(param_1 + 0xf00);
  lVar1 = param_1 + 0x12c0;
  auStack_b0[0] = 0;
  iStack_f0 = 1 << ((byte)*(int32_t *)(param_1 + 0x34e4) & 0x1f);
  lVar17 = *(int64_t *)(param_1 + 0x12a0);
  lVar9 = *(int64_t *)(param_1 + 0x12a8);
  iStack_f4 = 0;
  iStack_138 = *(int *)(lVar17 + 0x10);
  iStack_134 = *(int *)(lVar17 + 0x24);
  alStack_98[3] = *(uint64_t *)(lVar9 + 0x38);
  alStack_98[4] = *(uint64_t *)(lVar9 + 0x40);
  alStack_98[5] = *(uint64_t *)(lVar9 + 0x48);
  auStack_b0[1] = *(int32_t *)(lVar9 + 0x88);
  lVar9 = *(int64_t *)(param_1 + 0x12b0);
  iStack_108 = 0;
  alStack_98[6] = *(uint64_t *)(lVar9 + 0x38);
  alStack_98[7] = *(uint64_t *)(lVar9 + 0x40);
  alStack_98[8] = *(uint64_t *)(lVar9 + 0x48);
  auStack_b0[2] = *(int32_t *)(lVar9 + 0x88);
  lVar9 = *(int64_t *)(param_1 + 0x12b8);
  uStack_50 = *(uint64_t *)(lVar9 + 0x38);
  uStack_48 = *(uint64_t *)(lVar9 + 0x40);
  uStack_40 = *(uint64_t *)(lVar9 + 0x48);
  auStack_b0[3] = *(int32_t *)(lVar9 + 0x88);
  lVar9 = *(int64_t *)(lVar17 + 0x38);
  lVar13 = *(int64_t *)(lVar17 + 0x40);
  lVar8 = *(int64_t *)(lVar17 + 0x48);
  *(int32_t *)(param_1 + 0xf10) = 0;
  lStack_128 = lVar8;
  lStack_120 = lVar8;
  lStack_118 = lVar13;
  lStack_110 = lVar9;
  lStack_e0 = lVar9;
  lStack_d8 = lVar13;
  lStack_d0 = lVar9;
  lStack_c8 = lVar13;
  lStack_c0 = lVar8;
  lStack_b8 = lVar17;
  if (*(int *)(param_1 + 0x2be0) != 0) {
    FUN_1806982a0(lVar1,param_1);
  }
  FUN_18069def0(lVar17);
  iStack_104 = 0;
  if (0 < *(int *)(param_1 + 0x1e74)) {
    iStack_f8 = 0;
    iStack_fc = 0;
    iStack_12c = iStack_134 * 8;
    iStack_100 = 0;
    iStack_130 = iStack_138 << 4;
    iVar16 = 0;
    do {
      lVar17 = lStack_d0;
      if (1 < iStack_f0) {
        iStack_f4 = iVar16 + 1;
        *(int64_t *)(param_1 + 0xfb8) = ((int64_t)iVar16 + 0x15c) * 0x30 + param_1;
        if (iStack_f4 == iStack_f0) {
          iStack_f4 = 0;
        }
      }
      *(uint64_t *)(param_1 + 0xf50) = *(uint64_t *)(param_1 + 0x2c18);
      puVar3 = *(uint64_t **)(param_1 + 0xf58);
      *puVar3 = 0;
      *(int8_t *)(puVar3 + 1) = 0;
      *(int32_t *)(param_1 + 0xf14) = 0;
      *(int *)(param_1 + 0xf8c) = iStack_f8;
      *(int *)(param_1 + 0xf90) = ((*(int *)(param_1 + 0x1e74) - iStack_104) + -1) * 0x80;
      *(int64_t *)(param_1 + 0xf18) = iStack_100 + lStack_d0;
      *(int64_t *)(param_1 + 0xf20) = lStack_c8 + iStack_fc;
      *(int64_t *)(param_1 + 0xf28) = lStack_c0 + iStack_fc;
      *(int64_t *)(param_1 + 0xf30) = *(int64_t *)(param_1 + 0xf18) + -1;
      *(int64_t *)(param_1 + 0xf38) = *(int64_t *)(param_1 + 0xf20) + -1;
      puVar4 = *(int8_t **)(param_1 + 0xf38);
      *(int64_t *)(param_1 + 0xf40) = *(int64_t *)(param_1 + 0xf28) + -1;
      puVar5 = *(int8_t **)(param_1 + 0xf40);
      *(int64_t *)(param_1 + 0xf18) =
           *(int64_t *)(param_1 + 0xf18) - (int64_t)*(int *)(param_1 + 0xe80);
      lVar8 = 0x10;
      *(int64_t *)(param_1 + 0xf20) =
           *(int64_t *)(param_1 + 0xf20) - (int64_t)*(int *)(param_1 + 0xe94);
      *(int64_t *)(param_1 + 0xf28) =
           *(int64_t *)(param_1 + 0xf28) - (int64_t)*(int *)(param_1 + 0xe94);
      *(int32_t *)(param_1 + 0xf48) = *(int32_t *)(param_1 + 0xe80);
      *(int32_t *)(param_1 + 0xf4c) = *(int32_t *)(param_1 + 0xe94);
      lVar12 = (int64_t)*(int *)(param_1 + 0xe94);
      puVar6 = *(int8_t **)(param_1 + 0xf30);
      iVar16 = *(int *)(param_1 + 0xe80);
      do {
        *puVar6 = 0x81;
        puVar6 = puVar6 + iVar16;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      *puVar4 = 0x81;
      puVar4[lVar12] = 0x81;
      puVar4[lVar12 * 2] = 0x81;
      puVar4[lVar12 * 3] = 0x81;
      puVar4[lVar12 * 4] = 0x81;
      puVar4[lVar12 * 5] = 0x81;
      puVar4[lVar12 * 6] = 0x81;
      puVar4[lVar12 * 7] = 0x81;
      *puVar5 = 0x81;
      puVar5[lVar12] = 0x81;
      puVar5[lVar12 * 2] = 0x81;
      puVar5[lVar12 * 3] = 0x81;
      puVar5[lVar12 * 4] = 0x81;
      puVar5[lVar12 * 5] = 0x81;
      puVar5[lVar12 * 6] = 0x81;
      iVar10 = 0;
      puVar5[lVar12 * 7] = 0x81;
      iVar15 = iStack_108;
      iVar14 = iStack_fc;
      iVar16 = iStack_100;
      iVar11 = iVar10;
      if (0 < *(int *)(param_1 + 0x1e78)) {
        do {
          lVar9 = 0;
          *(int *)(param_1 + 0xf84) = iVar10;
          lVar13 = (int64_t)iVar14;
          *(int *)(param_1 + 0xf88) = ((*(int *)(param_1 + 0x1e78) - iVar11) + -1) * 0x80;
          *(int64_t *)(param_1 + 0xea8) = iVar16 + lVar17;
          *(int64_t *)(param_1 + 0xeb0) = lStack_c8 + lVar13;
          *(int64_t *)(param_1 + 0xeb8) = lStack_c0 + lVar13;
          bVar2 = *(byte *)(*(int64_t *)(param_1 + 0xf00) + 2);
          if (bVar2 == 0) {
            *(uint64_t *)(param_1 + 0xe18) = 0;
            *(uint64_t *)(param_1 + 0xe20) = 0;
          }
          else {
            uVar7 = (uint64_t)bVar2;
            *(int64_t *)(param_1 + 0xe18) = alStack_98[uVar7 * 3] + (int64_t)iVar16;
            *(int64_t *)(param_1 + 0xe20) = alStack_98[uVar7 * 3 + 1] + lVar13;
            lVar9 = alStack_98[uVar7 * 3 + 2] + lVar13;
          }
          *(int64_t *)(param_1 + 0xe28) = lVar9;
          *(uint *)(param_1 + 0xfc0) =
               *(uint *)(param_1 + 0xfc0) |
               auStack_b0[*(byte *)(*(int64_t *)(param_1 + 0xf00) + 2)];
          FUN_180699280(param_1,param_1,iVar15);
          *(int32_t *)(param_1 + 0xf14) = 1;
          iVar15 = iVar15 + 1;
          iVar16 = iVar16 + 0x10;
          *(uint *)(param_1 + 0xfc0) =
               *(uint *)(param_1 + 0xfc0) |
               (uint)(*(int *)(*(int64_t *)(param_1 + 0xfb8) + 0x18) - 0x41U < 0x3fffffbf);
          iVar14 = iVar14 + 8;
          *(int64_t *)(param_1 + 0xf18) = *(int64_t *)(param_1 + 0xf18) + 0x10;
          iVar11 = iVar11 + 1;
          *(int64_t *)(param_1 + 0xf20) = *(int64_t *)(param_1 + 0xf20) + 8;
          iVar10 = iVar10 + -0x80;
          *(int64_t *)(param_1 + 0xf28) = *(int64_t *)(param_1 + 0xf28) + 8;
          *(int64_t *)(param_1 + 0xf30) = *(int64_t *)(param_1 + 0xf30) + 0x10;
          *(int64_t *)(param_1 + 0xf38) = *(int64_t *)(param_1 + 0xf38) + 8;
          *(int64_t *)(param_1 + 0xf40) = *(int64_t *)(param_1 + 0xf40) + 8;
          *(int64_t *)(param_1 + 0xf00) = *(int64_t *)(param_1 + 0xf00) + 0x4c;
          *(int64_t *)(param_1 + 0xf50) = *(int64_t *)(param_1 + 0xf50) + 9;
          lVar13 = lStack_d8;
          lVar9 = lStack_e0;
        } while (iVar11 < *(int *)(param_1 + 0x1e78));
      }
      iStack_108 = iVar15;
      lVar17 = lStack_b8;
      iVar16 = iStack_104;
      func_0x00018069cbd0(lStack_b8,*(int64_t *)(param_1 + 0xea8) + 0x10,
                          *(int64_t *)(param_1 + 0xeb0) + 8,*(int64_t *)(param_1 + 0xeb8) + 8);
      lVar12 = lStack_e8;
      lVar8 = lStack_128;
      *(int64_t *)(param_1 + 0xf00) = *(int64_t *)(param_1 + 0xf00) + 0x4c;
      *(int32_t *)(param_1 + 0xf10) = 1;
      if (*(int *)(param_1 + 0x2be0) == 0) {
        if (0 < iVar16) {
          FUN_18069bd60(lVar17,lVar9,lVar13,lStack_128);
          lVar13 = lVar13 + iStack_12c;
          lVar9 = lVar9 + iStack_130;
          lStack_128 = lVar8 + iStack_12c;
          lStack_e0 = lVar9;
          lStack_d8 = lVar13;
        }
      }
      else if (0 < iVar16) {
        lStack_140 = lStack_120;
        lStack_148 = lStack_118;
        lStack_150 = lStack_110;
        iStack_158 = iStack_134;
        if (*(int *)(param_1 + 0x1ec0) == 0) {
          FUN_1806984b0();
        }
        else {
          FUN_1806986d0(lVar1,lStack_e8,iVar16 + -1,iStack_138);
        }
        lVar8 = lStack_128;
        if (1 < iVar16) {
          FUN_18069bd60(lVar17,lVar9,lVar13,lStack_128);
          lVar13 = lVar13 + iStack_12c;
          lVar9 = lVar9 + iStack_130;
          lStack_128 = lVar8 + iStack_12c;
          lStack_e0 = lVar9;
          lStack_d8 = lVar13;
        }
        lStack_110 = lStack_110 + iStack_130;
        lStack_118 = lStack_118 + iStack_12c;
        lStack_120 = lStack_120 + iStack_12c;
        lStack_e8 = lVar12 + (int64_t)*(int *)(param_1 + 0x1e78) * 0x4c + 0x4c;
      }
      iStack_104 = iVar16 + 1;
      iStack_100 = iStack_100 + iStack_130;
      iStack_f8 = iStack_f8 + -0x80;
      iStack_fc = iStack_fc + iStack_12c;
      lVar8 = lStack_128;
      iVar16 = iStack_f4;
    } while (iStack_104 < *(int *)(param_1 + 0x1e74));
  }
  if (*(int *)(param_1 + 0x2be0) != 0) {
    lStack_140 = lStack_120;
    lStack_148 = lStack_118;
    lStack_150 = lStack_110;
    iStack_158 = iStack_134;
    if (*(int *)(param_1 + 0x1ec0) == 0) {
      FUN_1806984b0();
    }
    else {
      FUN_1806986d0(lVar1,lStack_e8,iStack_104 + -1,iStack_138);
    }
    FUN_18069bd60(lVar17,lVar9,lVar13,lVar8);
    lVar9 = lVar9 + (iStack_138 << 4);
    lVar13 = lVar13 + iStack_134 * 8;
    lVar8 = lVar8 + iStack_134 * 8;
  }
  FUN_18069bd60(lVar17,lVar9,lVar13,lVar8);
  FUN_18069beb0(lVar17);
  FUN_18069bc50(lVar17);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_178);
}



uint FUN_180699e30(int64_t param_1,uint param_2,int32_t *param_3)

{
  byte bVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  iVar2 = FUN_18069bbd0(param_1,0x80);
  if (iVar2 != 0) {
    uVar6 = 0;
    iVar2 = 3;
    do {
      uVar5 = ((uint)((*(int *)(param_1 + 0x1c) + -1) * 0x80) >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar4 = *(uint64_t *)(param_1 + 0x10);
      uVar3 = (uint64_t)uVar5 << 0x38;
      bVar7 = uVar3 <= uVar4;
      if (bVar7) {
        uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
        uVar4 = uVar4 - uVar3;
      }
      bVar1 = (&processed_var_8608_ptr)[uVar5];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      uVar6 = uVar6 | (uint)bVar7 << ((byte)iVar2 & 0x1f);
      *(uint64_t *)(param_1 + 0x10) = uVar4 << (bVar1 & 0x3f);
      iVar2 = iVar2 + -1;
      *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
    } while (-1 < iVar2);
    iVar2 = FUN_18069bbd0(param_1,0x80);
    if (iVar2 != 0) {
      uVar6 = -uVar6;
    }
  }
  if (uVar6 != param_2) {
    *param_3 = 1;
  }
  return uVar6;
}



uint FUN_180699e38(int64_t param_1,uint param_2,int32_t *param_3)

{
  byte bVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = 0;
  iVar2 = FUN_18069bbd0(param_1,0x80);
  if (iVar2 != 0) {
    uVar6 = 0;
    iVar2 = 3;
    do {
      uVar5 = ((uint)((*(int *)(param_1 + 0x1c) + -1) * 0x80) >> 8) + 1;
      if (*(int *)(param_1 + 0x18) < 0) {
        FUN_18069ec80(param_1);
      }
      uVar4 = *(uint64_t *)(param_1 + 0x10);
      uVar3 = (uint64_t)uVar5 << 0x38;
      bVar7 = uVar3 <= uVar4;
      if (bVar7) {
        uVar5 = *(int *)(param_1 + 0x1c) - uVar5;
        uVar4 = uVar4 - uVar3;
      }
      bVar1 = (&processed_var_8608_ptr)[uVar5];
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - (uint)bVar1;
      uVar6 = uVar6 | (uint)bVar7 << ((byte)iVar2 & 0x1f);
      *(uint64_t *)(param_1 + 0x10) = uVar4 << (bVar1 & 0x3f);
      iVar2 = iVar2 + -1;
      *(uint *)(param_1 + 0x1c) = uVar5 << (bVar1 & 0x1f);
    } while (-1 < iVar2);
    iVar2 = FUN_18069bbd0(param_1,0x80);
    if (iVar2 != 0) {
      uVar6 = -uVar6;
    }
  }
  if (uVar6 != param_2) {
    *param_3 = 1;
  }
  return uVar6;
}



uint FUN_180699e5f(void)

{
  byte bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_ESI;
  int64_t unaff_RDI;
  int32_t *unaff_R12;
  uint unaff_R13D;
  uint uVar6;
  int iVar7;
  
  iVar7 = unaff_ESI + 3;
  uVar6 = unaff_ESI;
  do {
    uVar4 = ((uint)((*(int *)(unaff_RDI + 0x1c) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(unaff_RDI + 0x18) < (int)unaff_ESI) {
      FUN_18069ec80();
    }
    uVar3 = *(uint64_t *)(unaff_RDI + 0x10);
    uVar2 = (uint64_t)uVar4;
    uVar5 = unaff_ESI;
    if (uVar2 << 0x38 <= uVar3) {
      uVar5 = 1;
      uVar4 = *(int *)(unaff_RDI + 0x1c) - uVar4;
      uVar3 = uVar3 - (uVar2 << 0x38);
    }
    bVar1 = (&processed_var_8608_ptr)[uVar4];
    *(int *)(unaff_RDI + 0x18) = *(int *)(unaff_RDI + 0x18) - (uint)bVar1;
    uVar6 = uVar6 | uVar5 << ((byte)iVar7 & 0x1f);
    *(uint64_t *)(unaff_RDI + 0x10) = uVar3 << (bVar1 & 0x3f);
    iVar7 = iVar7 + -1;
    *(uint *)(unaff_RDI + 0x1c) = uVar4 << (bVar1 & 0x1f);
  } while (-1 < iVar7);
  iVar7 = FUN_18069bbd0();
  if (iVar7 != 0) {
    uVar6 = -uVar6;
  }
  if (uVar6 != unaff_R13D) {
    *unaff_R12 = 1;
  }
  return uVar6;
}



int FUN_180699f09(void)

{
  int unaff_ESI;
  int32_t *unaff_R12;
  int unaff_R13D;
  
  if (-unaff_ESI != unaff_R13D) {
    *unaff_R12 = 1;
  }
  return -unaff_ESI;
}



int FUN_180699f10(void)

{
  int unaff_ESI;
  int32_t *unaff_R12;
  int unaff_R13D;
  
  if (unaff_ESI != unaff_R13D) {
    *unaff_R12 = 1;
  }
  return unaff_ESI;
}





// 函数: void FUN_180699f21(void)
void FUN_180699f21(void)

{
  int32_t *unaff_R12;
  
  *unaff_R12 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180699f40(int64_t param_1)
void FUN_180699f40(int64_t param_1)

{
  int32_t uVar1;
  uint64_t uVar2;
  
  if (*(int *)(param_1 + 0x1e64) == 0) {
    *(int32_t *)(param_1 + 0x34b5) = 0x92e180a2;
    *(int32_t *)(param_1 + 0x34b9) = 0x27d693ac;
    *(int32_t *)(param_1 + 0x34bd) = 0x8481809c;
    *(int32_t *)(param_1 + 0x34c1) = 0xceb2914b;
    *(int32_t *)(param_1 + 0x34c5) = 0xa4fefeef;
    *(int32_t *)(param_1 + 0x34c9) = 0x77aacc80;
    *(int32_t *)(param_1 + 0x34cd) = 0xe4e68ceb;
    *(int32_t *)(param_1 + 0x34d1) = 0x4a828280;
    *(int32_t *)(param_1 + 0x34d5) = 0xeccbb494;
    *(int16_t *)(param_1 + 0x34d9) = 0xfefe;
    func_0x0001806980f0(param_1 + 0x12c0);
    func_0x00018069df60(param_1 + 0x12c0);
    *(uint64_t *)(param_1 + 0xf67) = 0;
    *(int8_t *)(param_1 + 0xf63) = 0;
    *(int32_t *)(param_1 + 0xf75) = 0;
    *(int32_t *)(param_1 + 0xf7d) = 0;
    *(int32_t *)(param_1 + 0x2bf0) = 1;
    *(uint64_t *)(param_1 + 0x2bf4) = 1;
    *(int32_t *)(param_1 + 0x2bfc) = 0;
    *(uint64_t *)(param_1 + 0x2c0c) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1e88) == 0) {
      *(uint64_t *)(param_1 + 0xf98) = ui_system_config_config;
      *(uint64_t *)(param_1 + 4000) = ui_system_config_config;
      *(uint64_t *)(param_1 + 0xfa8) = ui_system_config_config;
      uVar2 = ui_system_config_config;
    }
    else {
      *(void **)(param_1 + 0xf98) = &processed_var_8356_ptr;
      *(void **)(param_1 + 4000) = &processed_var_8044_ptr;
      *(uint64_t *)(param_1 + 0xfa8) = ui_system_config_config;
      uVar2 = ui_system_config_global_data;
    }
    *(uint64_t *)(param_1 + 0xfb0) = uVar2;
    if (((*(int *)(param_1 + 0x4420) != 0) && (*(int *)(param_1 + 0x4418) != 0)) &&
       (*(int *)(param_1 + 0x441c) == 0)) {
      *(int32_t *)(param_1 + 0x441c) = 1;
    }
  }
  *(int64_t *)(param_1 + 0xf58) = param_1 + 0x2c20;
  *(int8_t **)(param_1 + 0xf00) = *(int8_t **)(param_1 + 0x1eb0);
  *(int32_t *)(param_1 + 0xf0c) = *(int32_t *)(param_1 + 0x1e64);
  **(int8_t **)(param_1 + 0x1eb0) = 0;
  *(int32_t *)(param_1 + 0xf08) = *(int32_t *)(param_1 + 0x1e7c);
  *(int32_t *)(param_1 + 0xdd8) = 0xffffffff;
  uVar1 = *(int32_t *)(param_1 + 0xdd8);
  *(int32_t *)(param_1 + 0xfc0) = 0;
  if (*(int *)(param_1 + 0x1e8c) != 0) {
    uVar1 = 0xfffffff8;
  }
  *(int32_t *)(param_1 + 0xdd8) = uVar1;
  return;
}



uint64_t FUN_18069a100(int64_t param_1,int64_t param_2,uint64_t param_3,byte *param_4,
                       uint64_t param_5,int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  iVar1 = param_6;
  pbVar3 = (byte *)(param_6 * 3 + param_2);
  uVar2 = (uint)(param_5 - param_3);
  if (param_6 < param_7 + -1) {
    if ((pbVar3 < pbVar3 + 3) && (pbVar3 + 3 <= param_4)) {
      if (*(code **)(param_1 + 0x4430) != (code *)0x0) {
        (**(code **)(param_1 + 0x4430))(*(uint64_t *)(param_1 + 0x4438),pbVar3,&param_6,3);
        pbVar3 = (byte *)&param_6;
      }
      uVar2 = (uint)pbVar3[2] * 0x10000 + (uint)pbVar3[1] * 0x100 + (uint)*pbVar3;
    }
    else if (*(int *)(param_1 + 0x441c) == 0) {
      SystemInitializationProcessor(param_1 + 0x12c0,7,&processed_var_6152_ptr);
      uVar2 = 0;
    }
  }
  if ((uVar2 + param_3 <= param_3) || (param_5 < uVar2 + param_3)) {
    if (*(int *)(param_1 + 0x441c) != 0) {
      return param_5 - param_3 & 0xffffffff;
    }
    SystemInitializationProcessor(param_1 + 0x12c0,7,&processed_var_6184_ptr,iVar1 + 1);
  }
  return (uint64_t)uVar2;
}





// 函数: void FUN_18069a210(int64_t param_1,int64_t param_2)
void FUN_18069a210(int64_t param_1,int64_t param_2)

{
  byte bVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int iVar9;
  int64_t *plVar10;
  uint uVar11;
  uint uVar13;
  bool bVar14;
  int iStackX_8;
  uint64_t uVar12;
  
  uVar13 = *(uint *)(param_1 + 0x4358);
  lVar8 = *(int64_t *)(param_1 + 0x4310);
  uVar7 = 0;
  iStackX_8 = 1;
  uVar12 = uVar7;
  do {
    uVar6 = ((uint)((*(int *)(param_1 + 0x42dc) + -1) * 0x80) >> 8) + 1;
    if (*(int *)(param_1 + 0x42d8) < 0) {
      FUN_18069ec80(param_1 + 0x42c0);
    }
    uVar5 = *(uint64_t *)(param_1 + 0x42d0);
    uVar4 = (uint64_t)uVar6 << 0x38;
    bVar14 = uVar4 <= uVar5;
    if (bVar14) {
      uVar6 = *(int *)(param_1 + 0x42dc) - uVar6;
      uVar5 = uVar5 - uVar4;
    }
    bVar1 = (&processed_var_8608_ptr)[uVar6];
    iVar9 = *(int *)(param_1 + 0x42d8) - (uint)bVar1;
    uVar11 = (uint)uVar12 | (uint)bVar14 << ((byte)iStackX_8 & 0x1f);
    uVar12 = (uint64_t)uVar11;
    *(uint64_t *)(param_1 + 0x42d0) = uVar5 << (bVar1 & 0x3f);
    iStackX_8 = iStackX_8 + -1;
    *(int *)(param_1 + 0x42d8) = iVar9;
    *(uint *)(param_1 + 0x42dc) = uVar6 << (bVar1 & 0x1f);
  } while (-1 < iStackX_8);
  if (0x3fffffbe < iVar9 - 0x41U) {
    *(uint *)(param_1 + 0x34e4) = uVar11;
  }
  iVar9 = 1 << ((byte)*(int32_t *)(param_1 + 0x34e4) & 0x1f);
  if (*(int *)(param_1 + 0x430c) != 0) {
    do {
      uVar6 = *(uint *)(param_1 + 0x4358 + uVar7 * 4);
      uVar12 = (uint64_t)uVar6;
      lVar2 = *(int64_t *)(param_1 + 0x4310 + uVar7 * 8);
      if ((int)uVar7 == 0) {
        uVar5 = ((uint64_t)(uint)((iVar9 + -1) * 3) - *(int64_t *)(param_1 + 0x4310)) + param_2;
        iVar3 = (int)uVar5;
        uVar6 = uVar6 - iVar3;
        if (uVar6 != 0) {
          *(int *)(param_1 + 0x4358) = iVar3;
          uVar7 = 1;
          *(uint64_t *)(param_1 + 0x4318) = (uVar5 & 0xffffffff) + *(int64_t *)(param_1 + 0x4310);
          goto LAB_18069a35d;
        }
      }
      else {
LAB_18069a35d:
        if (uVar6 != 0) {
          plVar10 = (int64_t *)(param_1 + 0x4310 + uVar7 * 8);
          while( true ) {
            uVar11 = FUN_18069a100(param_1,param_2,*plVar10,(uint64_t)uVar13 + lVar8,uVar12 + lVar2
                                   ,(int)uVar7 + -1,iVar9);
            *(uint *)(param_1 + 0x4358 + uVar7 * 4) = uVar11;
            uVar6 = uVar6 - uVar11;
            if (uVar6 == 0) break;
            uVar5 = (uint64_t)((int)uVar7 + 1);
            plVar10 = (int64_t *)(param_1 + 0x4310 + uVar5 * 8);
            *plVar10 = *(int64_t *)(param_1 + 0x4310 + uVar7 * 8) + (uint64_t)uVar11;
            uVar7 = uVar5;
          }
        }
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x430c));
  }
  uVar7 = 1;
  *(uint *)(param_1 + 0x430c) = iVar9 + 1U;
  if (1 < iVar9 + 1U) {
    lVar8 = param_1 + 0x4140;
    do {
      iVar3 = FUN_18069ed90(lVar8,*(uint64_t *)(param_1 + 0x4310 + uVar7 * 8),
                            *(int32_t *)(param_1 + 0x4358 + uVar7 * 4),
                            *(uint64_t *)(param_1 + 0x4430),*(uint64_t *)(param_1 + 0x4438));
      if (iVar3 != 0) {
        SystemInitializationProcessor(param_1 + 0x12c0,2,&processed_var_6232_ptr,uVar7);
      }
      lVar8 = lVar8 + 0x30;
      uVar13 = (int)uVar7 + 1;
      uVar7 = (uint64_t)uVar13;
    } while (uVar13 < *(uint *)(param_1 + 0x430c));
  }
  if (iVar9 - 1U < *(uint *)(param_1 + 0x438c)) {
    *(uint *)(param_1 + 0x438c) = iVar9 - 1U;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



