#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part049.c - 3 个函数
// 函数: void function_4cb300(int64_t param_1,uint param_2)
void function_4cb300(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t **ppuVar4;
  uint64_t uVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  uint64_t **ppuVar12;
  uint64_t **ppuVar13;
  uint64_t **ppuVar14;
  uint64_t *puVar15;
  uint64_t *pstack_special_x_8;
  uint stack_special_x_10;
  uint64_t **ppstack_special_x_18;
  uint64_t **ppstack_special_x_20;
  stack_special_x_10 = param_2;
  iVar6 = _Mtx_lock(param_1 + 0x2e8);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  if (param_2 != 0xffffffff) {
    puVar15 = (uint64_t *)((uint64_t)param_2 * 0x38 + *(int64_t *)(param_1 + 0x68));
    puVar7 = puVar15 + 1;
    if ((*puVar15 & 0xffffffff00000000) == 0) {
      puVar7 = (uint64_t *)0x0;
    }
    if (puVar7 != (uint64_t *)0x0) {
      *(int *)(puVar15 + 2) = (int)puVar15[2] + 1;
      plVar1 = *(int64_t **)
                ((uint64_t)(ushort)puVar15[5] * 0x50 + *(int64_t *)(param_1 + 0xe0) + 0x28);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uVar8 = (uint64_t)(ushort)puVar15[5];
      lVar9 = *(int64_t *)(param_1 + 0xe0);
      puVar10 = *(uint64_t **)(lVar9 + 8 + uVar8 * 0x50);
      puVar2 = *(uint64_t **)(lVar9 + 0x10 + uVar8 * 0x50);
      if (puVar10 != puVar2) {
        ppstack_special_x_18 = &pstack_special_x_8;
        do {
          ppstack_special_x_20 = &pstack_special_x_8;
          pstack_special_x_8 = (uint64_t *)*puVar10;
          if (pstack_special_x_8 != (uint64_t *)0x0) {
            (**(code **)(*pstack_special_x_8 + 0x28))();
          }
          function_2fc0f0(plVar1,pstack_special_x_8);
          if (pstack_special_x_8 != (uint64_t *)0x0) {
            (**(code **)(*pstack_special_x_8 + 0x38))();
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2);
        uVar8 = (uint64_t)(ushort)puVar15[5];
        lVar9 = *(int64_t *)(param_1 + 0xe0);
      }
      SystemCore_Controller(uVar8 * 0x50 + lVar9 + 8);
      function_4cdfe0((uint64_t)(ushort)puVar15[5] * 0x50 + 8 + *(int64_t *)(param_1 + 0xe0));
      uVar8 = (uint64_t)(ushort)puVar15[5];
      if ((*(uint64_t *)(*(int64_t *)(param_1 + 0xe0) + uVar8 * 0x50) & 0xffffffff00000000) != 0)
      {
        lVar9 = *(int64_t *)(param_1 + 0xf8);
        *(uint64_t *)(param_1 + 0xf8) = uVar8;
        plVar11 = (int64_t *)(uVar8 * 0x50 + *(int64_t *)(param_1 + 0xe0));
        if (lVar9 == 0xffffffff) {
          function_4ce670(plVar11 + 1);
          *plVar11 = 0xffffffff;
        }
        else {
          function_4ce670(plVar11 + 1);
          *plVar11 = (int64_t)(int)lVar9;
        }
      }
      uVar8 = (uint64_t)*(ushort *)((int64_t)puVar15 + 0x24);
      lVar9 = *(int64_t *)(param_1 + 0x90);
      if ((*(uint64_t *)(lVar9 + uVar8 * 0x48) & 0xffffffff00000000) != 0) {
        lVar3 = *(int64_t *)(param_1 + 0xa8);
        *(uint64_t *)(param_1 + 0xa8) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(lVar9 + uVar8 * 0x48) = 0xffffffff;
        }
        else {
          *(int64_t *)(lVar9 + uVar8 * 0x48) = (int64_t)(int)lVar3;
        }
      }
      uVar8 = (uint64_t)*(ushort *)((int64_t)puVar15 + 0x26);
      lVar9 = *(int64_t *)(param_1 + 0xb8);
      if ((*(uint64_t *)(uVar8 * 0xc0 + lVar9) & 0xffffffff00000000) != 0) {
        lVar3 = *(int64_t *)(param_1 + 0xd0);
        *(uint64_t *)(param_1 + 0xd0) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(uVar8 * 0xc0 + lVar9) = 0xffffffff;
        }
        else {
          *(int64_t *)(uVar8 * 0xc0 + lVar9) = (int64_t)(int)lVar3;
        }
      }
      uVar8 = (uint64_t)*(ushort *)((int64_t)puVar15 + 0x2a);
      lVar9 = *(int64_t *)(param_1 + 0x130);
      if ((*(uint64_t *)(lVar9 + uVar8 * 0x10) & 0xffffffff00000000) != 0) {
        lVar3 = *(int64_t *)(param_1 + 0x148);
        *(uint64_t *)(param_1 + 0x148) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(lVar9 + uVar8 * 0x10) = 0xffffffff;
        }
        else {
          *(int64_t *)(lVar9 + uVar8 * 0x10) = (int64_t)(int)lVar3;
        }
      }
      uVar8 = (uint64_t)*(ushort *)((int64_t)puVar15 + 0x2c);
      lVar9 = *(int64_t *)(param_1 + 0x158);
      if ((*(uint64_t *)(lVar9 + uVar8 * 0x10) & 0xffffffff00000000) != 0) {
        lVar3 = *(int64_t *)(param_1 + 0x170);
        *(uint64_t *)(param_1 + 0x170) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(lVar9 + uVar8 * 0x10) = 0xffffffff;
        }
        else {
          *(int64_t *)(lVar9 + uVar8 * 0x10) = (int64_t)(int)lVar3;
        }
      }
      uVar8 = (uint64_t)(ushort)puVar15[6];
      lVar9 = *(int64_t *)(param_1 + 0x108);
      if ((*(uint64_t *)(uVar8 * 0x88 + lVar9) & 0xffffffff00000000) != 0) {
        lVar3 = *(int64_t *)(param_1 + 0x120);
        *(uint64_t *)(param_1 + 0x120) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(uVar8 * 0x88 + lVar9) = 0xffffffff;
        }
        else {
          *(int64_t *)(uVar8 * 0x88 + lVar9) = (int64_t)(int)lVar3;
        }
      }
      ppuVar14 = (uint64_t **)((int64_t)puVar15 + 0x14);
      puVar7 = (uint64_t *)(param_1 + 0x1c0);
      pstack_special_x_8 = (uint64_t *)0x8;
      ppstack_special_x_20 = ppuVar14;
      do {
        lVar9 = puVar7[-3] + (uint64_t)*(ushort *)ppuVar14 * 0x28;
        ppuVar4 = *(uint64_t ***)(lVar9 + 0x10);
        ppuVar13 = *(uint64_t ***)(lVar9 + 8);
        ppuVar12 = ppuVar13;
        ppstack_special_x_18 = ppuVar13;
        if (ppuVar13 != ppuVar4) {
          do {
            ppstack_special_x_18 = ppuVar12;
            if (ppuVar12[9] != (uint64_t *)0x0) {
              (**(code **)(*ppuVar12[9] + 0x38))();
            }
            if (ppuVar12[8] != (uint64_t *)0x0) {
              (**(code **)(*ppuVar12[8] + 0x38))();
            }
            ppuVar12 = ppuVar12 + 0xc;
          } while (ppuVar12 != ppuVar4);
          ppuVar13 = *(uint64_t ***)(lVar9 + 8);
          ppstack_special_x_18 = ppuVar12;
        }
        *(uint64_t ***)(lVar9 + 0x10) = ppuVar13;
        uVar8 = (uint64_t)*(ushort *)ppuVar14;
        if ((*(uint64_t *)(puVar7[-3] + uVar8 * 0x28) & 0xffffffff00000000) != 0) {
          uVar5 = *puVar7;
          *puVar7 = uVar8;
          plVar11 = (int64_t *)(puVar7[-3] + uVar8 * 0x28);
          ppstack_special_x_18 = (uint64_t **)(plVar11 + 1);
          if (uVar5 == 0xffffffff) {
            function_4ce6b0();
            *plVar11 = 0xffffffff;
          }
          else {
            function_4ce6b0();
            *plVar11 = (int64_t)(int)uVar5;
          }
        }
        ppuVar14 = (uint64_t **)((int64_t)ppuVar14 + 2);
        puVar7 = puVar7 + 5;
        pstack_special_x_8 = (uint64_t *)((int64_t)pstack_special_x_8 + -1);
      } while (pstack_special_x_8 != (uint64_t *)0x0);
      *(ushort *)ppstack_special_x_20 = 0xffff;
      *(uint64_t *)((int64_t)puVar15 + 0x16) = 0xffffffffffffffff;
      *(uint64_t *)((int64_t)puVar15 + 0x1e) = 0xffffffffffffffff;
      *(uint64_t *)((int64_t)puVar15 + 0x26) = 0xffffffffffffffff;
      *(int32_t *)((int64_t)puVar15 + 0x2e) = 0xffffffff;
      *(int8_t *)((int64_t)puVar15 + 0x32) = 0;
      pstack_special_x_8 = (uint64_t *)0x0;
      if (stack_special_x_10 != 0xffffffff) {
        puVar7 = (uint64_t *)((uint64_t)stack_special_x_10 * 0x38 + *(int64_t *)(param_1 + 0x68));
        if ((*puVar7 & 0xffffffff00000000) != 0) {
          lVar9 = *(int64_t *)(param_1 + 0x80);
          *(uint64_t *)(param_1 + 0x80) = (uint64_t)stack_special_x_10;
          pstack_special_x_8 = puVar7 + 1;
          if (lVar9 == 0xffffffff) {
            if ((int64_t *)*pstack_special_x_8 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*pstack_special_x_8 + 0x38))();
            }
            *puVar7 = 0xffffffff;
          }
          else {
            if ((int64_t *)*pstack_special_x_8 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*pstack_special_x_8 + 0x38))();
            }
            *puVar7 = (int64_t)(int)lVar9;
          }
        }
      }
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
    }
  }
  iVar6 = _Mtx_unlock(param_1 + 0x2e8);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4cb810(int64_t param_1,int64_t param_2,int8_t param_3)
void function_4cb810(int64_t param_1,int64_t param_2,int8_t param_3)
{
  int32_t *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  int16_t uVar24;
  int iVar25;
  uint64_t *puVar26;
  uint64_t uVar27;
  int64_t lVar28;
  uint64_t uVar29;
  uint64_t *puVar30;
  uint64_t *puVar31;
  uint64_t *puVar32;
  uint64_t *puVar33;
  int64_t lVar34;
  uint64_t uVar35;
  uint64_t *puVar36;
  int16_t *puVar37;
  int8_t stack_array_248 [48];
  uint64_t *plocal_var_218;
  uint64_t local_var_210;
  int64_t *plStack_208;
  uint64_t *plocal_var_200;
  uint64_t *plocal_var_1f8;
  int16_t *plocal_var_1f0;
  uint64_t *plocal_var_1e8;
  uint64_t *plocal_var_1e0;
  int64_t lStack_1d8;
  int64_t *plStack_1d0;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  int64_t lStack_1b8;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_48;
  local_var_1c0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_248;
  if (*(int *)(param_1 + 0x338) == 0) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_248);
  }
  lStack_1b8 = param_1 + 0x2e8;
  iVar25 = _Mtx_lock(lStack_1b8);
  if (iVar25 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar25);
  }
  if (*(int *)(param_1 + 0x338) <= *(int *)(param_1 + 0x180)) {
    uVar35 = (uint64_t)*(uint *)(param_1 + 0x33c);
    while( true ) {
      puVar26 = (uint64_t *)(uVar35 * 0x38 + *(int64_t *)(param_1 + 0x68));
      puVar33 = puVar26 + 1;
      if ((*puVar26 & 0xffffffff00000000) == 0) {
        puVar33 = (uint64_t *)0x0;
      }
      if (puVar33 != (uint64_t *)0x0) break;
      uVar27 = (int64_t)((int)uVar35 + 1) % (int64_t)*(int *)(param_1 + 0x338);
      uVar35 = uVar27 & 0xffffffff;
      *(int *)(param_1 + 0x33c) = (int)uVar27;
    }
    function_4cb300(param_1);
    *(int *)(param_1 + 0x33c) = (*(int *)(param_1 + 0x33c) + 1) % *(int *)(param_1 + 0x338);
  }
  local_var_1c8 = *(uint64_t *)(param_1 + 0x80);
  lVar28 = *(int64_t *)(param_1 + 0x68);
  lVar2 = *(int64_t *)(param_1 + 0x78);
  if (local_var_1c8 == 0xffffffff) {
    local_var_1c8 = (uint64_t)*(int *)(param_1 + 0x70);
    *(int64_t *)(param_1 + 0x70) = *(int64_t *)(param_1 + 0x70) + 1;
    lVar34 = local_var_1c8 * 0x38;
    *(int64_t *)(param_1 + 0x78) = lVar2 + 1;
    *(uint64_t *)(lVar34 + lVar28) = lVar2 << 0x20 | local_var_1c8;
    plocal_var_1f8 = (uint64_t *)(lVar28 + 8 + lVar34);
    *(uint64_t *)(lVar34 + 0x10 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x18 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x20 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x28 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x30 + lVar28) = 0;
    *plocal_var_1f8 = 0;
  }
  else {
    lVar34 = (int64_t)(int)local_var_1c8 * 0x38;
    *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(lVar34 + lVar28);
    *(int64_t *)(param_1 + 0x78) = lVar2 + 1;
    *(int64_t *)(lVar34 + lVar28) = lVar2 << 0x20 | (int64_t)(int)local_var_1c8;
    plocal_var_1f8 = (uint64_t *)(lVar28 + 8 + lVar34);
    *(uint64_t *)(lVar34 + 0x10 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x18 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x20 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x28 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x30 + lVar28) = 0;
    *plocal_var_1f8 = 0;
    uVar35 = *(uint64_t *)(param_1 + 0x78);
    if (0xffffffff < uVar35) {
      uVar35 = 1;
    }
    *(uint64_t *)(param_1 + 0x78) = uVar35;
  }
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  lVar34 = (local_var_1c8 & 0xffff) * 0x38 + *(int64_t *)(param_1 + 0x68);
  puVar37 = (int16_t *)(lVar34 + 0x14);
  *puVar37 = 0xffff;
  *(uint64_t *)(lVar34 + 0x16) = 0xffffffffffffffff;
  *(uint64_t *)(lVar34 + 0x1e) = 0xffffffffffffffff;
  *(uint64_t *)(lVar34 + 0x26) = 0xffffffffffffffff;
  *(int32_t *)(lVar34 + 0x2e) = 0xffffffff;
  *(int8_t *)(lVar34 + 0x32) = param_3;
  uVar35 = *(uint64_t *)(param_1 + 0xa8);
  lVar28 = *(int64_t *)(param_1 + 0x90);
  lVar2 = *(int64_t *)(param_1 + 0xa0);
  if (uVar35 == 0xffffffff) {
    uVar35 = (uint64_t)*(int *)(param_1 + 0x98);
    *(int64_t *)(param_1 + 0x98) = *(int64_t *)(param_1 + 0x98) + 1;
    *(int64_t *)(param_1 + 0xa0) = lVar2 + 1;
    *(uint64_t *)(lVar28 + uVar35 * 0x48) = lVar2 << 0x20 | uVar35;
    *(uint64_t *)(lVar28 + 8 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x10 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x18 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x20 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x28 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x30 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x38 + uVar35 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x40 + uVar35 * 0x48) = 0;
  }
  else {
    uVar27 = (uint64_t)(int)uVar35;
    *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(lVar28 + uVar27 * 0x48);
    *(int64_t *)(param_1 + 0xa0) = lVar2 + 1;
    *(uint64_t *)(lVar28 + uVar27 * 0x48) = lVar2 << 0x20 | uVar27;
    *(uint64_t *)(lVar28 + 8 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x10 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x18 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x20 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x28 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x30 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x38 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x40 + uVar27 * 0x48) = 0;
    uVar27 = *(uint64_t *)(param_1 + 0xa0);
    if (0xffffffff < uVar27) {
      uVar27 = 1;
    }
    *(uint64_t *)(param_1 + 0xa0) = uVar27;
  }
  *(short *)(lVar34 + 0x24) = (short)uVar35;
  plocal_var_1f0 = puVar37;
  lStack_1d8 = lVar34;
  uVar24 = SystemFunction_0001804ce370(param_1 + 0xb8);
  *(int16_t *)(lVar34 + 0x26) = uVar24;
  uVar5 = *(int32_t *)(param_2 + 0x74);
  uVar6 = *(int32_t *)(param_2 + 0x78);
  uVar7 = *(int32_t *)(param_2 + 0x7c);
  uVar8 = *(int32_t *)(param_2 + 0x80);
  uVar9 = *(int32_t *)(param_2 + 0x84);
  uVar10 = *(int32_t *)(param_2 + 0x88);
  uVar11 = *(int32_t *)(param_2 + 0x8c);
  uVar12 = *(int32_t *)(param_2 + 0x90);
  uVar13 = *(int32_t *)(param_2 + 0x94);
  uVar14 = *(int32_t *)(param_2 + 0x98);
  uVar15 = *(int32_t *)(param_2 + 0x9c);
  uVar16 = *(int32_t *)(param_2 + 0xa0);
  uVar17 = *(int32_t *)(param_2 + 0xa4);
  uVar18 = *(int32_t *)(param_2 + 0xa8);
  uVar19 = *(int32_t *)(param_2 + 0xac);
  uVar35 = (uint64_t)*(ushort *)(lVar34 + 0x24);
  lVar28 = *(int64_t *)(param_1 + 0x90);
  puVar1 = (int32_t *)(lVar28 + 8 + uVar35 * 0x48);
  *puVar1 = *(int32_t *)(param_2 + 0x70);
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (int32_t *)(lVar28 + 0x18 + uVar35 * 0x48);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (int32_t *)(lVar28 + 0x28 + uVar35 * 0x48);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (int32_t *)(lVar28 + 0x38 + uVar35 * 0x48);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  UtilitiesSystem_CacheManager(param_2);
  plocal_var_200 = *(uint64_t **)(param_2 + 0x28);
  local_var_108 = *plocal_var_200;
  local_var_100 = plocal_var_200[1];
  local_var_f8 = plocal_var_200[2];
  local_var_f0 = plocal_var_200[3];
  local_var_e8 = plocal_var_200[4];
  local_var_e0 = plocal_var_200[5];
  local_var_d8 = plocal_var_200[6];
  local_var_d0 = plocal_var_200[7];
  local_var_c8 = plocal_var_200[8];
  local_var_c0 = plocal_var_200[9];
  local_var_b8 = plocal_var_200[10];
  local_var_b0 = plocal_var_200[0xb];
  local_var_a8 = plocal_var_200[0xc];
  local_var_a0 = plocal_var_200[0xd];
  local_var_98 = plocal_var_200[0xe];
  local_var_90 = plocal_var_200[0xf];
  local_var_88 = plocal_var_200[0x10];
  local_var_80 = plocal_var_200[0x11];
  uVar20 = plocal_var_200[0x12];
  uVar21 = plocal_var_200[0x13];
  uVar22 = plocal_var_200[0x14];
  uVar23 = plocal_var_200[0x15];
  local_var_58 = plocal_var_200[0x16];
  lVar28 = (uint64_t)*(ushort *)(lVar34 + 0x26) * 0xc0 + *(int64_t *)(param_1 + 0xb8);
  *(uint64_t *)(lVar28 + 8) = local_var_108;
  *(uint64_t *)(lVar28 + 0x10) = local_var_100;
  *(uint64_t *)(lVar28 + 0x18) = local_var_f8;
  *(uint64_t *)(lVar28 + 0x20) = local_var_f0;
  *(uint64_t *)(lVar28 + 0x28) = local_var_e8;
  *(uint64_t *)(lVar28 + 0x30) = local_var_e0;
  *(uint64_t *)(lVar28 + 0x38) = local_var_d8;
  *(uint64_t *)(lVar28 + 0x40) = local_var_d0;
  *(uint64_t *)(lVar28 + 0x48) = local_var_c8;
  *(uint64_t *)(lVar28 + 0x50) = local_var_c0;
  *(uint64_t *)(lVar28 + 0x58) = local_var_b8;
  *(uint64_t *)(lVar28 + 0x60) = local_var_b0;
  *(uint64_t *)(lVar28 + 0x68) = local_var_a8;
  *(uint64_t *)(lVar28 + 0x70) = local_var_a0;
  *(uint64_t *)(lVar28 + 0x78) = local_var_98;
  *(uint64_t *)(lVar28 + 0x80) = local_var_90;
  *(uint64_t *)(lVar28 + 0x88) = local_var_88;
  *(uint64_t *)(lVar28 + 0x90) = local_var_80;
  local_var_78._0_4_ = (int32_t)uVar20;
  local_var_78._4_4_ = (int32_t)((uint64_t)uVar20 >> 0x20);
  local_var_70._0_4_ = (int32_t)uVar21;
  local_var_70._4_4_ = (int32_t)((uint64_t)uVar21 >> 0x20);
  *(int32_t *)(lVar28 + 0x98) = (int32_t)local_var_78;
  *(int32_t *)(lVar28 + 0x9c) = local_var_78._4_4_;
  *(int32_t *)(lVar28 + 0xa0) = (int32_t)local_var_70;
  *(int32_t *)(lVar28 + 0xa4) = local_var_70._4_4_;
  local_var_68._0_4_ = (int32_t)uVar22;
  local_var_68._4_4_ = (int32_t)((uint64_t)uVar22 >> 0x20);
  local_var_60._0_4_ = (int32_t)uVar23;
  local_var_60._4_4_ = (int32_t)((uint64_t)uVar23 >> 0x20);
  *(int32_t *)(lVar28 + 0xa8) = (int32_t)local_var_68;
  *(int32_t *)(lVar28 + 0xac) = local_var_68._4_4_;
  *(int32_t *)(lVar28 + 0xb0) = (int32_t)local_var_60;
  *(int32_t *)(lVar28 + 0xb4) = local_var_60._4_4_;
  *(uint64_t *)(lVar28 + 0xb8) = local_var_58;
  uVar35 = *(uint64_t *)(param_1 + 0xf8);
  lVar28 = *(int64_t *)(param_1 + 0xf0);
  local_var_78 = uVar20;
  local_var_70 = uVar21;
  local_var_68 = uVar22;
  local_var_60 = uVar23;
  if (uVar35 == 0xffffffff) {
    uVar35 = (uint64_t)*(int *)(param_1 + 0xe8);
    *(int64_t *)(param_1 + 0xe8) = *(int64_t *)(param_1 + 0xe8) + 1;
    puVar33 = (uint64_t *)(uVar35 * 0x50 + *(int64_t *)(param_1 + 0xe0));
    *(int64_t *)(param_1 + 0xf0) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | uVar35;
    plocal_var_218 = puVar33 + 1;
    *plocal_var_218 = 0;
    puVar33[2] = 0;
    puVar33[3] = 0;
    *(int32_t *)(puVar33 + 4) = 3;
    puVar33[5] = 0;
    plocal_var_1f8 = plocal_var_218;
    function_4cdfe0();
  }
  else {
    puVar33 = (uint64_t *)((int64_t)(int)uVar35 * 0x50 + *(int64_t *)(param_1 + 0xe0));
    *(uint64_t *)(param_1 + 0xf8) = *puVar33;
    *(int64_t *)(param_1 + 0xf0) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | (int64_t)(int)uVar35;
    plocal_var_218 = puVar33 + 1;
    *plocal_var_218 = 0;
    puVar33[2] = 0;
    puVar33[3] = 0;
    *(int32_t *)(puVar33 + 4) = 3;
    puVar33[5] = 0;
    plocal_var_1f8 = plocal_var_218;
    function_4cdfe0();
    if (0xffffffff < *(uint64_t *)(param_1 + 0xf0)) {
      *(uint64_t *)(param_1 + 0xf0) = 1;
    }
  }
  *(short *)(lVar34 + 0x28) = (short)uVar35;
  plVar3 = *(int64_t **)(param_2 + 0x260);
  plStack_1d0 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plocal_var_1f8 = (uint64_t *)(uVar35 & 0xffffffff);
  lVar28 = (int64_t)plocal_var_1f8 * 0x50 + *(int64_t *)(param_1 + 0xe0);
  if (plVar3 != (int64_t *)0x0) {
    plStack_208 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStack_208 = *(int64_t **)(lVar28 + 0x28);
  *(int64_t **)(lVar28 + 0x28) = plVar3;
  if (plStack_208 != (int64_t *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  uVar35 = *(uint64_t *)(param_1 + 0x148);
  lVar28 = *(int64_t *)(param_1 + 0x140);
  if (uVar35 == 0xffffffff) {
    uVar35 = (uint64_t)*(int *)(param_1 + 0x138);
    *(int64_t *)(param_1 + 0x138) = *(int64_t *)(param_1 + 0x138) + 1;
    puVar33 = (uint64_t *)(uVar35 * 0x10 + *(int64_t *)(param_1 + 0x130));
    *(int64_t *)(param_1 + 0x140) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | uVar35;
    puVar33 = puVar33 + 1;
    if (puVar33 != (uint64_t *)0x0) {
      *(int8_t *)puVar33 = 0;
    }
  }
  else {
    puVar33 = (uint64_t *)((int64_t)(int)uVar35 * 0x10 + *(int64_t *)(param_1 + 0x130));
    *(uint64_t *)(param_1 + 0x148) = *puVar33;
    *(int64_t *)(param_1 + 0x140) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | (int64_t)(int)uVar35;
    if (puVar33 + 1 != (uint64_t *)0x0) {
      *(int8_t *)(puVar33 + 1) = 0;
    }
    uVar27 = *(uint64_t *)(param_1 + 0x140);
    if (0xffffffff < uVar27) {
      uVar27 = 1;
    }
    *(uint64_t *)(param_1 + 0x140) = uVar27;
  }
  *(short *)(lVar34 + 0x2a) = (short)uVar35;
  uVar35 = *(uint64_t *)(param_1 + 0x170);
  lVar28 = *(int64_t *)(param_1 + 0x168);
  if (uVar35 == 0xffffffff) {
    uVar35 = (uint64_t)*(int *)(param_1 + 0x160);
    *(int64_t *)(param_1 + 0x160) = *(int64_t *)(param_1 + 0x160) + 1;
    puVar33 = (uint64_t *)(uVar35 * 0x10 + *(int64_t *)(param_1 + 0x158));
    *(int64_t *)(param_1 + 0x168) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | uVar35;
    puVar33 = puVar33 + 1;
    if (puVar33 != (uint64_t *)0x0) {
      *(int16_t *)puVar33 = 0;
    }
  }
  else {
    puVar33 = (uint64_t *)((int64_t)(int)uVar35 * 0x10 + *(int64_t *)(param_1 + 0x158));
    *(uint64_t *)(param_1 + 0x170) = *puVar33;
    *(int64_t *)(param_1 + 0x168) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | (int64_t)(int)uVar35;
    if (puVar33 + 1 != (uint64_t *)0x0) {
      *(int16_t *)(puVar33 + 1) = 0;
    }
    uVar27 = *(uint64_t *)(param_1 + 0x168);
    if (0xffffffff < uVar27) {
      uVar27 = 1;
    }
    *(uint64_t *)(param_1 + 0x168) = uVar27;
  }
  *(short *)(lVar34 + 0x2c) = (short)uVar35;
  puVar33 = (uint64_t *)(param_1 + 0x1b8);
  plStack_208 = (int64_t *)0x8;
  do {
    uVar35 = puVar33[1];
    uVar27 = puVar33[-2];
    uVar4 = *puVar33;
    if (uVar35 == 0xffffffff) {
      uVar35 = (uint64_t)(int)puVar33[-1];
      puVar33[-1] = puVar33[-1] + 1;
      *puVar33 = uVar4 + 1;
      *(uint64_t *)(uVar27 + uVar35 * 0x28) = uVar4 << 0x20 | uVar35;
      plocal_var_1e8 = (uint64_t *)(uVar27 + (uVar35 * 5 + 1) * 8);
      *(uint64_t *)(uVar27 + 0x10 + uVar35 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x18 + uVar35 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x20 + uVar35 * 0x28) = 0;
      *plocal_var_1e8 = 0;
      plocal_var_1e8[1] = 0;
      plocal_var_1e8[2] = 0;
      *(int32_t *)(plocal_var_1e8 + 3) = 0x18;
    }
    else {
      uVar29 = (uint64_t)(int)uVar35;
      puVar33[1] = *(uint64_t *)(uVar27 + uVar29 * 0x28);
      *puVar33 = uVar4 + 1;
      *(uint64_t *)(uVar27 + uVar29 * 0x28) = uVar4 << 0x20 | uVar29;
      plocal_var_1e8 = (uint64_t *)(uVar27 + (uVar29 * 5 + 1) * 8);
      *(uint64_t *)(uVar27 + 0x10 + uVar29 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x18 + uVar29 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x20 + uVar29 * 0x28) = 0;
      *plocal_var_1e8 = 0;
      plocal_var_1e8[1] = 0;
      plocal_var_1e8[2] = 0;
      *(int32_t *)(plocal_var_1e8 + 3) = 0x18;
      uVar27 = *puVar33;
      if (0xffffffff < uVar27) {
        uVar27 = 1;
      }
      *puVar33 = uVar27;
    }
    *puVar37 = (short)uVar35;
    uVar35 = uVar35 & 0xffff;
    uVar27 = puVar33[-2];
    plocal_var_218 = plocal_var_1e8;
    local_var_210 = uVar27;
    if ((uint64_t)
        ((*(int64_t *)(uVar27 + 0x18 + uVar35 * 0x28) - *(int64_t *)(uVar27 + 8 + uVar35 * 0x28))
        / 0x60) < 8) {
      plocal_var_1e8 = (uint64_t *)
                    CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x300,
                                  *(int8_t *)(uVar27 + 0x20 + uVar35 * 0x28));
      puVar36 = *(uint64_t **)(uVar27 + 0x10 + uVar35 * 0x28);
      puVar32 = *(uint64_t **)(uVar27 + 8 + uVar35 * 0x28);
      puVar30 = plocal_var_1e8;
      if (puVar32 != puVar36) {
        do {
          plocal_var_218 = puVar30;
          uVar20 = puVar32[1];
          *plocal_var_218 = *puVar32;
          plocal_var_218[1] = uVar20;
          uVar20 = puVar32[3];
          plocal_var_218[2] = puVar32[2];
          plocal_var_218[3] = uVar20;
          uVar5 = *(int32_t *)((int64_t)puVar32 + 0x24);
          uVar6 = *(int32_t *)(puVar32 + 5);
          uVar7 = *(int32_t *)((int64_t)puVar32 + 0x2c);
          *(int32_t *)(plocal_var_218 + 4) = *(int32_t *)(puVar32 + 4);
          *(int32_t *)((int64_t)plocal_var_218 + 0x24) = uVar5;
          *(int32_t *)(plocal_var_218 + 5) = uVar6;
          *(int32_t *)((int64_t)plocal_var_218 + 0x2c) = uVar7;
          uVar20 = puVar32[7];
          plocal_var_218[6] = puVar32[6];
          plocal_var_218[7] = uVar20;
          plocal_var_218[8] = puVar32[8];
          puVar32[8] = 0;
          plocal_var_218[9] = puVar32[9];
          puVar32[9] = 0;
          *(int8_t *)(plocal_var_218 + 10) = *(int8_t *)(puVar32 + 10);
          *(int32_t *)((int64_t)plocal_var_218 + 0x54) = *(int32_t *)((int64_t)puVar32 + 0x54);
          *(int32_t *)(plocal_var_218 + 0xb) = *(int32_t *)(puVar32 + 0xb);
          *(int32_t *)((int64_t)plocal_var_218 + 0x5c) = *(int32_t *)((int64_t)puVar32 + 0x5c);
          puVar32 = puVar32 + 0xc;
          puVar30 = plocal_var_218 + 0xc;
        } while (puVar32 != puVar36);
        puVar36 = *(uint64_t **)(local_var_210 + 0x10 + uVar35 * 0x28);
        puVar32 = *(uint64_t **)(local_var_210 + 8 + uVar35 * 0x28);
      }
      puVar31 = puVar32;
      plocal_var_1e0 = puVar32;
      if (puVar32 != puVar36) {
        do {
          plocal_var_1e0 = puVar31;
          if ((int64_t *)puVar31[9] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)puVar31[9] + 0x38))();
          }
          if ((int64_t *)puVar31[8] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)puVar31[8] + 0x38))();
          }
          puVar31 = puVar31 + 0xc;
        } while (puVar31 != puVar36);
        puVar32 = *(uint64_t **)(local_var_210 + 8 + uVar35 * 0x28);
        plocal_var_1e0 = puVar31;
      }
      if (puVar32 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar32);
      }
      *(uint64_t **)(local_var_210 + 8 + uVar35 * 0x28) = plocal_var_1e8;
      *(uint64_t **)(local_var_210 + 0x10 + uVar35 * 0x28) = puVar30;
      *(uint64_t **)(local_var_210 + 0x18 + uVar35 * 0x28) = plocal_var_1e8 + 0x60;
      puVar37 = plocal_var_1f0;
    }
    puVar37 = puVar37 + 1;
    puVar33 = puVar33 + 5;
    plStack_208 = (int64_t *)((int64_t)plStack_208 + -1);
    plocal_var_1f0 = puVar37;
    if (plStack_208 == (int64_t *)0x0) {
      lVar28 = *(int64_t *)(param_1 + 0x118);
      if (*(int64_t *)(param_1 + 0x120) != 0xffffffff) {
        uVar35 = (uint64_t)(int)*(int64_t *)(param_1 + 0x120);
        puVar33 = (uint64_t *)(uVar35 * 0x88 + *(int64_t *)(param_1 + 0x108));
        *(uint64_t *)(param_1 + 0x120) = *puVar33;
        *(int64_t *)(param_1 + 0x118) = lVar28 + 1;
        *puVar33 = lVar28 << 0x20 | uVar35;
// WARNING: Subroutine does not return
        memset(puVar33 + 1,0,0x80);
      }
      iVar25 = *(int *)(param_1 + 0x110);
      *(int64_t *)(param_1 + 0x110) = *(int64_t *)(param_1 + 0x110) + 1;
      puVar33 = (uint64_t *)((int64_t)iVar25 * 0x88 + *(int64_t *)(param_1 + 0x108));
      *(int64_t *)(param_1 + 0x118) = lVar28 + 1;
      *puVar33 = lVar28 << 0x20 | (int64_t)iVar25;
// WARNING: Subroutine does not return
      memset(puVar33 + 1,0,0x80);
    }
  } while( true );
}
// 函数: void function_4cc710(void)
void function_4cc710(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}