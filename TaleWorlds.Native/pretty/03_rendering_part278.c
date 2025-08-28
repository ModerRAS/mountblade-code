#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part278.c - 4 个函数
// 函数: void UISystem_1c4ab(void)
void UISystem_1c4ab(void)
{
  uint64_t uVar1;
  uint unaff_EBX;
  int64_t unaff_RSI;
  uint64_t *puVar2;
  uint64_t local_buffer_60;
  if (unaff_EBX != 0) {
    puVar2 = (uint64_t *)(unaff_RSI + 0x180);
    for (uVar1 = (uint64_t)unaff_EBX; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0x406fe00000000000;
      puVar2 = puVar2 + 1;
    }
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_buffer_60 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_1c5b0(uint *param_1,int64_t param_2,byte *param_3)
void UISystem_1c5b0(uint *param_1,int64_t param_2,byte *param_3)
{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  uint *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint *puVar16;
  int8_t stack_array_738 [32];
  uint64_t local_var_718;
  int64_t lStack_710;
  uint *plocal_var_708;
  int64_t lStack_700;
  int32_t local_var_6f8;
  uint stack_array_6e8 [24];
  uint stack_array_688 [16];
  uint64_t stack_array_648 [16];
  uint64_t stack_array_5c8 [16];
  uint64_t stack_array_548 [16];
  uint64_t stack_array_4c8 [144];
  uint64_t local_var_48;
  uint64_t uVar11;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_738;
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
    uVar14 = (uint64_t)uVar12;
    if (7 < uVar12) goto UISystem_1ccb8;
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
      uVar4 = (uint64_t)uVar9;
      uVar8 = (uint64_t)uVar12;
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
      uVar4 = (uint64_t)uVar9;
      uVar8 = (uint64_t)uVar12;
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
      uVar4 = (uint64_t)uVar12;
      uVar8 = (uint64_t)uVar9;
      uVar7 = uVar7 + 1;
    } while (uVar12 < *(uint *)(uVar14 * 0x28 + 0x180bf02b4));
  }
  iVar2 = *(int *)(uVar14 * 0x28 + 0x180bf02b0);
  if (iVar2 == 0) {
    param_1[8] = 0;
LAB_18041c796:
    uVar7 = *(uint *)((uint64_t)*param_1 * 0x28 + 0x180bf02c4) / 3;
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
  local_var_718 = 4;
  uVar14 = uVar6;
  do {
    uVar4 = (uint64_t)*param_1;
    if (*(int *)(uVar4 * 0x28 + 0x180bf02cc) != 0) {
      uVar7 = *puVar13;
      uVar8 = uVar6;
      do {
        lVar15 = uVar8 * 8 + uVar14;
        stack_array_6e8[lVar15] = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6;
          uVar11 = uVar6;
          uVar12 = param_1[4];
          do {
            bVar1 = param_3[uVar12 >> 3];
            param_1[4] = uVar12 + 1;
            bVar3 = (byte)uVar4;
            uVar9 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar9;
            uVar7 = *puVar13;
            uVar10 = (uint)uVar11 | (bVar1 >> ((byte)uVar12 & 7) & 1) << (bVar3 & 0x1f);
            uVar11 = (uint64_t)uVar10;
            uVar12 = uVar12 + 1;
          } while (uVar9 < uVar7);
          stack_array_6e8[lVar15] = uVar10;
        }
        lVar15 = uVar8 * 8 + uVar14;
        stack_array_6e8[lVar15 + 4] = 0;
        if (uVar7 != 0) {
          uVar4 = uVar6;
          uVar11 = uVar6;
          uVar12 = param_1[4];
          do {
            bVar1 = param_3[uVar12 >> 3];
            param_1[4] = uVar12 + 1;
            bVar3 = (byte)uVar4;
            uVar9 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar9;
            uVar7 = *puVar13;
            uVar10 = (uint)uVar11 | (bVar1 >> ((byte)uVar12 & 7) & 1) << (bVar3 & 0x1f);
            uVar11 = (uint64_t)uVar10;
            uVar12 = uVar12 + 1;
          } while (uVar9 < uVar7);
          stack_array_6e8[lVar15 + 4] = uVar10;
        }
        uVar4 = (uint64_t)*param_1;
        uVar12 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar12;
      } while (uVar12 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
    }
    uVar14 = uVar14 + 1;
    puVar13 = puVar13 + 1;
    local_var_718 = local_var_718 + -1;
  } while (local_var_718 != 0);
  iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
  uVar14 = uVar4;
  if (iVar2 != 0) {
    if (*(int *)(uVar4 * 0x28 + 0x180bf02cc) != 0) {
      local_var_718._0_4_ = 0;
      uVar14 = uVar6;
      uVar7 = (uint)local_var_718;
      do {
        iVar2 = *(int *)(uVar4 * 0x28 + 0x180bf02c8);
        if (iVar2 == 1) {
          uVar7 = param_1[4];
          uVar12 = uVar7 + 1;
          local_var_718._0_4_ = param_3[uVar7 >> 3] >> ((byte)uVar7 & 7) & 1;
          uVar7 = (uint)local_var_718;
LAB_18041c98c:
          param_1[4] = uVar12;
        }
        else if (iVar2 == 2) {
          uVar12 = param_1[4];
          uVar7 = uVar12 + 1;
          local_var_718._0_4_ = param_3[uVar12 >> 3] >> ((byte)uVar12 & 7) & 1;
          param_1[4] = uVar7;
          uVar12 = uVar12 + 2;
          uVar7 = param_3[uVar7 >> 3] >> ((byte)uVar7 & 7) & 1;
          goto LAB_18041c98c;
        }
        if (param_1[5] != 0) {
          stack_array_6e8[uVar14 * 8] = stack_array_6e8[uVar14 * 8] * 2 | (uint)local_var_718;
          stack_array_6e8[uVar14 * 8 + 4] = stack_array_6e8[uVar14 * 8 + 4] * 2 | uVar7;
        }
        if (param_1[6] != 0) {
          stack_array_6e8[uVar14 * 8 + 1] = stack_array_6e8[uVar14 * 8 + 1] * 2 | (uint)local_var_718;
          stack_array_6e8[uVar14 * 8 + 5] = stack_array_6e8[uVar14 * 8 + 5] * 2 | uVar7;
        }
        if (param_1[7] != 0) {
          stack_array_6e8[uVar14 * 8 + 2] = stack_array_6e8[uVar14 * 8 + 2] * 2 | (uint)local_var_718;
          stack_array_6e8[uVar14 * 8 + 6] = stack_array_6e8[uVar14 * 8 + 6] * 2 | uVar7;
        }
        if (param_1[8] != 0) {
          stack_array_6e8[uVar14 * 8 + 3] = stack_array_6e8[uVar14 * 8 + 3] * 2 | (uint)local_var_718;
          stack_array_6e8[uVar14 * 8 + 7] = stack_array_6e8[uVar14 * 8 + 7] * 2 | uVar7;
        }
        uVar12 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar12;
      } while (uVar12 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
      uVar14 = (uint64_t)*param_1;
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
      uVar14 = (uint64_t)*param_1;
    }
  }
  if (*(int *)(uVar14 * 0x28 + 0x180bf02b0) == 2) {
    UISystem_1cce0(param_1,param_2,param_3,stack_array_6e8);
  }
  else {
    iVar2 = *(int *)(uVar14 * 0x28 + 0x180bf02cc);
    lStack_700 = 0;
    local_var_6f8 = 0;
    if (iVar2 == 2) {
      lStack_700 = (uint64_t)*(uint *)(&processed_var_7700_ptr + (uint64_t)param_1[1] * 0xc) << 0x20;
    }
    else if (iVar2 == 3) {
      lStack_700 = (uint64_t)*(uint *)(&processed_var_8468_ptr + (uint64_t)param_1[1] * 0xc) << 0x20;
      local_var_6f8 = *(int32_t *)(&processed_var_8472_ptr + (uint64_t)param_1[1] * 0xc);
    }
    puVar13 = stack_array_688;
    puVar16 = (uint *)(((uint64_t)(iVar2 - 1) * 0x40 + (uint64_t)param_1[1]) * 0x40 + 0x180bf03f0)
    ;
    uVar4 = uVar6;
    do {
      uVar12 = *(uint *)(uVar14 * 0x28 + 0x180bf02d0);
      uVar7 = *(uint *)(((int64_t)puVar16 - (int64_t)stack_array_688) + (int64_t)puVar13);
      *puVar13 = 0;
      uVar9 = uVar12;
      if ((int)uVar4 == *(int *)((int64_t)&lStack_700 + (uint64_t)uVar7 * 4)) {
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
          uVar8 = (uint64_t)uVar12;
          uVar10 = (uint)uVar11 | (bVar1 >> ((byte)uVar7 & 7) & 1) << (bVar3 & 0x1f);
          uVar11 = (uint64_t)uVar10;
          uVar7 = uVar7 + 1;
        } while (uVar12 < uVar9);
        *puVar13 = uVar10;
        uVar12 = *(uint *)(uVar14 * 0x28 + 0x180bf02d0);
      }
      uVar7 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar7;
      puVar13 = puVar13 + 1;
    } while (uVar7 < 0x10);
    iVar2 = 1 << ((byte)uVar12 & 0x1f);
    local_var_718 = CONCAT44(iVar2,iVar2);
    plocal_var_708 = puVar16;
    if (*(int *)(uVar14 * 0x28 + 0x180bf02cc) != 0) {
      do {
        UISystem_1c120(stack_array_6e8 + uVar6 * 8,stack_array_648 + uVar6 * 0x40,&local_var_718,param_1 + 5);
        uVar7 = (int)uVar6 + 1;
        uVar6 = (uint64_t)uVar7;
      } while (uVar7 < *(uint *)((uint64_t)*param_1 * 0x28 + 0x180bf02cc));
    }
    lVar15 = 0x10;
    puVar5 = (uint64_t *)(lStack_710 + 0x10);
    puVar13 = puVar16;
    do {
      uVar14 = (uint64_t)*(uint *)(((int64_t)stack_array_688 - (int64_t)puVar16) + (int64_t)puVar13)
      ;
      puVar5[-2] = stack_array_648[(uint64_t)*puVar13 * 0x40 + uVar14];
      puVar5[-1] = stack_array_5c8[(uint64_t)*puVar13 * 0x40 + uVar14];
      *puVar5 = stack_array_548[(uint64_t)*puVar13 * 0x40 + uVar14];
      puVar5[1] = stack_array_4c8[(uint64_t)*puVar13 * 0x40 + uVar14];
      lVar15 = lVar15 + -1;
      puVar5 = puVar5 + 4;
      puVar13 = puVar13 + 1;
    } while (lVar15 != 0);
  }
UISystem_1ccb8:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_738);
}
// 函数: void UISystem_1c63f(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4,
void UISystem_1c63f(uint64_t param_1,uint64_t param_2,uint param_3,uint64_t param_4,
                  int64_t param_5,uint64_t param_6,uint64_t param_7)
{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint uVar6;
  uint64_t unaff_RDI;
  byte bVar7;
  uint uVar8;
  uint64_t uVar9;
  uint uVar10;
  uint uVar11;
  uint64_t uVar12;
  uint uVar13;
  uint *puVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint *puVar17;
  int64_t lVar18;
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
      bVar1 = *(byte *)((uint64_t)uVar10 + unaff_RSI);
      unaff_RBX[4] = param_3;
      bVar3 = (byte)uVar15;
      uVar10 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar10;
      uVar13 = (uint)uVar4 | (bVar1 >> (bVar7 & 7) & 1) << (bVar3 & 0x1f);
      uVar4 = (uint64_t)uVar13;
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
      bVar1 = *(byte *)((uint64_t)uVar10 + unaff_RSI);
      unaff_RBX[4] = param_3;
      bVar3 = (byte)uVar15;
      uVar10 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar10;
      uVar13 = (uint)uVar4 | (bVar1 >> (bVar7 & 7) & 1) << (bVar3 & 0x1f);
      uVar4 = (uint64_t)uVar13;
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
      bVar1 = *(byte *)((uint64_t)uVar10 + unaff_RSI);
      unaff_RBX[4] = param_3;
      bVar3 = (byte)uVar15;
      uVar10 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar10;
      uVar13 = (uint)uVar4 | (bVar1 >> (bVar7 & 7) & 1) << (bVar3 & 0x1f);
      uVar4 = (uint64_t)uVar13;
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
  uVar10 = *(uint *)((uint64_t)*unaff_RBX * 0x28 + 0x180bf02c4) / 3;
  unaff_RBX[5] = uVar10;
  unaff_RBX[6] = uVar10;
  unaff_RBX[7] = uVar10;
LAB_18041c7b4:
  puVar14 = unaff_RBX + 5;
  lVar18 = 4;
  uVar15 = unaff_RDI;
  do {
    uVar4 = (uint64_t)*unaff_RBX;
    uVar9 = unaff_RDI & 0xffffffff;
    if (uVar6 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc)) {
      uVar10 = *puVar14;
      do {
        uVar12 = unaff_RDI & 0xffffffff;
        uVar4 = unaff_RDI & 0xffffffff;
        lVar16 = uVar9 * 8 + uVar15;
        *(uint *)(&local_buffer_00000050 + lVar16 * 4) = uVar6;
        if (uVar10 != 0) {
          uVar13 = unaff_RBX[4];
          do {
            bVar1 = *(byte *)((uint64_t)(uVar13 >> 3) + unaff_RSI);
            unaff_RBX[4] = uVar13 + 1;
            bVar3 = (byte)uVar4;
            uVar8 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar8;
            uVar10 = *puVar14;
            uVar11 = (uint)uVar12 | (bVar1 >> ((byte)uVar13 & 7) & 1) << (bVar3 & 0x1f);
            uVar12 = (uint64_t)uVar11;
            uVar13 = uVar13 + 1;
          } while (uVar8 < uVar10);
          *(uint *)(&local_buffer_00000050 + lVar16 * 4) = uVar11;
        }
        uVar12 = unaff_RDI & 0xffffffff;
        lVar16 = uVar9 * 8 + uVar15;
        uVar4 = unaff_RDI & 0xffffffff;
        *(uint *)(&local_buffer_00000060 + lVar16 * 4) = uVar6;
        if (uVar10 != 0) {
          uVar13 = unaff_RBX[4];
          do {
            bVar1 = *(byte *)((uint64_t)(uVar13 >> 3) + unaff_RSI);
            unaff_RBX[4] = uVar13 + 1;
            bVar3 = (byte)uVar4;
            uVar8 = (int)uVar4 + 1;
            uVar4 = (uint64_t)uVar8;
            uVar10 = *puVar14;
            uVar11 = (uint)uVar12 | (bVar1 >> ((byte)uVar13 & 7) & 1) << (bVar3 & 0x1f);
            uVar12 = (uint64_t)uVar11;
            uVar13 = uVar13 + 1;
          } while (uVar8 < uVar10);
          *(uint *)(&local_buffer_00000060 + lVar16 * 4) = uVar11;
        }
        uVar4 = (uint64_t)*unaff_RBX;
        uVar13 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar13;
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
          uVar13 = *(byte *)((uint64_t)(uVar10 >> 3) + unaff_RSI) >> ((byte)uVar10 & 7) & 1;
          uVar10 = uVar13;
LAB_18041c98c:
          unaff_RBX[4] = uVar8;
        }
        else if (iVar2 == 2) {
          uVar8 = unaff_RBX[4];
          uVar10 = uVar8 + 1;
          uVar13 = *(byte *)((uint64_t)(uVar8 >> 3) + unaff_RSI) >> ((byte)uVar8 & 7) & 1;
          unaff_RBX[4] = uVar10;
          uVar8 = uVar8 + 2;
          uVar10 = *(byte *)((uint64_t)(uVar10 >> 3) + unaff_RSI) >> ((byte)uVar10 & 7) & 1;
          goto LAB_18041c98c;
        }
        if (unaff_RBX[5] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&local_buffer_00000050 + lVar18) = *(int *)(&local_buffer_00000050 + lVar18) * 2 | uVar13;
          *(uint *)(&local_buffer_00000060 + lVar18) = *(int *)(&local_buffer_00000060 + lVar18) * 2 | uVar10;
        }
        if (unaff_RBX[6] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&local_buffer_00000054 + lVar18) = *(int *)(&local_buffer_00000054 + lVar18) * 2 | uVar13;
          *(uint *)(&local_buffer_00000064 + lVar18) = *(int *)(&local_buffer_00000064 + lVar18) * 2 | uVar10;
        }
        if (unaff_RBX[7] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&local_buffer_00000058 + lVar18) = *(int *)(&local_buffer_00000058 + lVar18) * 2 | uVar13;
          *(uint *)(&local_buffer_00000068 + lVar18) = *(int *)(&local_buffer_00000068 + lVar18) * 2 | uVar10;
        }
        if (unaff_RBX[8] != uVar6) {
          lVar18 = uVar9 * 0x20;
          *(uint *)(&local_buffer_0000005c + lVar18) = *(int *)(&local_buffer_0000005c + lVar18) * 2 | uVar13;
          *(uint *)(&local_buffer_0000006c + lVar18) = *(int *)(&local_buffer_0000006c + lVar18) * 2 | uVar10;
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (uint64_t)uVar8;
      } while (uVar8 < *(uint *)(uVar4 * 0x28 + 0x180bf02cc));
      uVar15 = (uint64_t)*unaff_RBX;
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
      uVar15 = (uint64_t)*unaff_RBX;
    }
  }
  if (*(int *)(uVar15 * 0x28 + 0x180bf02b0) == 2) {
    UISystem_1cce0();
  }
  else {
    iVar2 = *(int *)(uVar15 * 0x28 + 0x180bf02cc);
    if (iVar2 == 2) {
      param_7 = CONCAT44(*(int32_t *)(&processed_var_7700_ptr + (uint64_t)unaff_RBX[1] * 0xc),uVar6);
    }
    else {
      param_7 = unaff_RDI;
      if (iVar2 == 3) {
        param_7 = CONCAT44(*(int32_t *)(&processed_var_8468_ptr + (uint64_t)unaff_RBX[1] * 0xc),uVar6);
      }
    }
    puVar14 = (uint *)(unaff_RBP + -0x50);
    uVar4 = unaff_RDI & 0xffffffff;
    puVar17 = (uint *)(((uint64_t)(iVar2 - 1) * 0x40 + (uint64_t)unaff_RBX[1]) * 0x40 +
                      0x180bf03f0);
    do {
      uVar13 = *(uint *)(uVar15 * 0x28 + 0x180bf02d0);
      uVar10 = *(uint *)(((int64_t)puVar17 - (unaff_RBP + -0x50)) + (int64_t)puVar14);
      *puVar14 = uVar6;
      uVar8 = uVar13;
      if ((int)uVar4 == *(int *)((int64_t)&local_buffer_00000038 + (uint64_t)uVar10 * 4)) {
        uVar8 = uVar13 - 1;
      }
      uVar9 = unaff_RDI & 0xffffffff;
      if (uVar8 != 0) {
        uVar12 = unaff_RDI & 0xffffffff;
        uVar10 = unaff_RBX[4];
        do {
          bVar1 = *(byte *)((uint64_t)(uVar10 >> 3) + unaff_RSI);
          unaff_RBX[4] = uVar10 + 1;
          bVar3 = (byte)uVar9;
          uVar13 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar13;
          uVar11 = (uint)uVar12 | (bVar1 >> ((byte)uVar10 & 7) & 1) << (bVar3 & 0x1f);
          uVar12 = (uint64_t)uVar11;
          uVar10 = uVar10 + 1;
        } while (uVar13 < uVar8);
        *puVar14 = uVar11;
        uVar13 = *(uint *)(uVar15 * 0x28 + 0x180bf02d0);
      }
      uVar10 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar10;
      puVar14 = puVar14 + 1;
    } while (uVar10 < 0x10);
    iVar2 = 1 << ((byte)uVar13 & 0x1f);
    uVar19 = CONCAT44(iVar2,iVar2);
    if (uVar6 < *(uint *)(uVar15 * 0x28 + 0x180bf02cc)) {
      do {
        UISystem_1c120(&local_buffer_00000050 + (unaff_RDI & 0xffffffff) * 0x20,
                      unaff_RBP + -0x10 + (unaff_RDI & 0xffffffff) * 0x200,&local_buffer_00000020,
                      unaff_RBX + 5,uVar19);
        uVar6 = (int)unaff_RDI + 1;
        unaff_RDI = (uint64_t)uVar6;
      } while (uVar6 < *(uint *)((uint64_t)*unaff_RBX * 0x28 + 0x180bf02cc));
    }
    lVar18 = 0x10;
    puVar5 = (uint64_t *)(param_5 + 0x10);
    puVar14 = puVar17;
    do {
      uVar15 = (uint64_t)*(uint *)(((unaff_RBP + -0x50) - (int64_t)puVar17) + (int64_t)puVar14);
      puVar5[-2] = *(uint64_t *)(unaff_RBP + -0x10 + ((uint64_t)*puVar14 * 0x40 + uVar15) * 8);
      puVar5[-1] = *(uint64_t *)(unaff_RBP + 0x70 + ((uint64_t)*puVar14 * 0x40 + uVar15) * 8);
      *puVar5 = *(uint64_t *)(unaff_RBP + 0xf0 + ((uint64_t)*puVar14 * 0x40 + uVar15) * 8);
      puVar5[1] = *(uint64_t *)(unaff_RBP + 0x170 + ((uint64_t)*puVar14 * 0x40 + uVar15) * 8);
      lVar18 = lVar18 + -1;
      puVar5 = puVar5 + 4;
      puVar14 = puVar14 + 1;
    } while (lVar18 != 0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x5f0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UISystem_1ccb8(void)
void UISystem_1ccb8(void)
{
  int64_t unaff_RBP;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x5f0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address