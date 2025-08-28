#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part049.c - 3 个函数

// 函数: void FUN_1804cb300(longlong param_1,uint param_2)
void FUN_1804cb300(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong **ppuVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint64_t *puVar10;
  longlong *plVar11;
  ulonglong **ppuVar12;
  ulonglong **ppuVar13;
  ulonglong **ppuVar14;
  ulonglong *puVar15;
  ulonglong *puStackX_8;
  uint uStackX_10;
  ulonglong **ppuStackX_18;
  ulonglong **ppuStackX_20;
  
  uStackX_10 = param_2;
  iVar6 = _Mtx_lock(param_1 + 0x2e8);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  if (param_2 != 0xffffffff) {
    puVar15 = (ulonglong *)((ulonglong)param_2 * 0x38 + *(longlong *)(param_1 + 0x68));
    puVar7 = puVar15 + 1;
    if ((*puVar15 & 0xffffffff00000000) == 0) {
      puVar7 = (ulonglong *)0x0;
    }
    if (puVar7 != (ulonglong *)0x0) {
      *(int *)(puVar15 + 2) = (int)puVar15[2] + 1;
      plVar1 = *(longlong **)
                ((ulonglong)(ushort)puVar15[5] * 0x50 + *(longlong *)(param_1 + 0xe0) + 0x28);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      uVar8 = (ulonglong)(ushort)puVar15[5];
      lVar9 = *(longlong *)(param_1 + 0xe0);
      puVar10 = *(uint64_t **)(lVar9 + 8 + uVar8 * 0x50);
      puVar2 = *(uint64_t **)(lVar9 + 0x10 + uVar8 * 0x50);
      if (puVar10 != puVar2) {
        ppuStackX_18 = &puStackX_8;
        do {
          ppuStackX_20 = &puStackX_8;
          puStackX_8 = (ulonglong *)*puVar10;
          if (puStackX_8 != (ulonglong *)0x0) {
            (**(code **)(*puStackX_8 + 0x28))();
          }
          FUN_1802fc0f0(plVar1,puStackX_8);
          if (puStackX_8 != (ulonglong *)0x0) {
            (**(code **)(*puStackX_8 + 0x38))();
          }
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar2);
        uVar8 = (ulonglong)(ushort)puVar15[5];
        lVar9 = *(longlong *)(param_1 + 0xe0);
      }
      FUN_1800b8500(uVar8 * 0x50 + lVar9 + 8);
      FUN_1804cdfe0((ulonglong)(ushort)puVar15[5] * 0x50 + 8 + *(longlong *)(param_1 + 0xe0));
      uVar8 = (ulonglong)(ushort)puVar15[5];
      if ((*(ulonglong *)(*(longlong *)(param_1 + 0xe0) + uVar8 * 0x50) & 0xffffffff00000000) != 0)
      {
        lVar9 = *(longlong *)(param_1 + 0xf8);
        *(ulonglong *)(param_1 + 0xf8) = uVar8;
        plVar11 = (longlong *)(uVar8 * 0x50 + *(longlong *)(param_1 + 0xe0));
        if (lVar9 == 0xffffffff) {
          FUN_1804ce670(plVar11 + 1);
          *plVar11 = 0xffffffff;
        }
        else {
          FUN_1804ce670(plVar11 + 1);
          *plVar11 = (longlong)(int)lVar9;
        }
      }
      uVar8 = (ulonglong)*(ushort *)((longlong)puVar15 + 0x24);
      lVar9 = *(longlong *)(param_1 + 0x90);
      if ((*(ulonglong *)(lVar9 + uVar8 * 0x48) & 0xffffffff00000000) != 0) {
        lVar3 = *(longlong *)(param_1 + 0xa8);
        *(ulonglong *)(param_1 + 0xa8) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(lVar9 + uVar8 * 0x48) = 0xffffffff;
        }
        else {
          *(longlong *)(lVar9 + uVar8 * 0x48) = (longlong)(int)lVar3;
        }
      }
      uVar8 = (ulonglong)*(ushort *)((longlong)puVar15 + 0x26);
      lVar9 = *(longlong *)(param_1 + 0xb8);
      if ((*(ulonglong *)(uVar8 * 0xc0 + lVar9) & 0xffffffff00000000) != 0) {
        lVar3 = *(longlong *)(param_1 + 0xd0);
        *(ulonglong *)(param_1 + 0xd0) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(uVar8 * 0xc0 + lVar9) = 0xffffffff;
        }
        else {
          *(longlong *)(uVar8 * 0xc0 + lVar9) = (longlong)(int)lVar3;
        }
      }
      uVar8 = (ulonglong)*(ushort *)((longlong)puVar15 + 0x2a);
      lVar9 = *(longlong *)(param_1 + 0x130);
      if ((*(ulonglong *)(lVar9 + uVar8 * 0x10) & 0xffffffff00000000) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x148);
        *(ulonglong *)(param_1 + 0x148) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(lVar9 + uVar8 * 0x10) = 0xffffffff;
        }
        else {
          *(longlong *)(lVar9 + uVar8 * 0x10) = (longlong)(int)lVar3;
        }
      }
      uVar8 = (ulonglong)*(ushort *)((longlong)puVar15 + 0x2c);
      lVar9 = *(longlong *)(param_1 + 0x158);
      if ((*(ulonglong *)(lVar9 + uVar8 * 0x10) & 0xffffffff00000000) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x170);
        *(ulonglong *)(param_1 + 0x170) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(lVar9 + uVar8 * 0x10) = 0xffffffff;
        }
        else {
          *(longlong *)(lVar9 + uVar8 * 0x10) = (longlong)(int)lVar3;
        }
      }
      uVar8 = (ulonglong)(ushort)puVar15[6];
      lVar9 = *(longlong *)(param_1 + 0x108);
      if ((*(ulonglong *)(uVar8 * 0x88 + lVar9) & 0xffffffff00000000) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x120);
        *(ulonglong *)(param_1 + 0x120) = uVar8;
        if (lVar3 == 0xffffffff) {
          *(uint64_t *)(uVar8 * 0x88 + lVar9) = 0xffffffff;
        }
        else {
          *(longlong *)(uVar8 * 0x88 + lVar9) = (longlong)(int)lVar3;
        }
      }
      ppuVar14 = (ulonglong **)((longlong)puVar15 + 0x14);
      puVar7 = (ulonglong *)(param_1 + 0x1c0);
      puStackX_8 = (ulonglong *)0x8;
      ppuStackX_20 = ppuVar14;
      do {
        lVar9 = puVar7[-3] + (ulonglong)*(ushort *)ppuVar14 * 0x28;
        ppuVar4 = *(ulonglong ***)(lVar9 + 0x10);
        ppuVar13 = *(ulonglong ***)(lVar9 + 8);
        ppuVar12 = ppuVar13;
        ppuStackX_18 = ppuVar13;
        if (ppuVar13 != ppuVar4) {
          do {
            ppuStackX_18 = ppuVar12;
            if (ppuVar12[9] != (ulonglong *)0x0) {
              (**(code **)(*ppuVar12[9] + 0x38))();
            }
            if (ppuVar12[8] != (ulonglong *)0x0) {
              (**(code **)(*ppuVar12[8] + 0x38))();
            }
            ppuVar12 = ppuVar12 + 0xc;
          } while (ppuVar12 != ppuVar4);
          ppuVar13 = *(ulonglong ***)(lVar9 + 8);
          ppuStackX_18 = ppuVar12;
        }
        *(ulonglong ***)(lVar9 + 0x10) = ppuVar13;
        uVar8 = (ulonglong)*(ushort *)ppuVar14;
        if ((*(ulonglong *)(puVar7[-3] + uVar8 * 0x28) & 0xffffffff00000000) != 0) {
          uVar5 = *puVar7;
          *puVar7 = uVar8;
          plVar11 = (longlong *)(puVar7[-3] + uVar8 * 0x28);
          ppuStackX_18 = (ulonglong **)(plVar11 + 1);
          if (uVar5 == 0xffffffff) {
            FUN_1804ce6b0();
            *plVar11 = 0xffffffff;
          }
          else {
            FUN_1804ce6b0();
            *plVar11 = (longlong)(int)uVar5;
          }
        }
        ppuVar14 = (ulonglong **)((longlong)ppuVar14 + 2);
        puVar7 = puVar7 + 5;
        puStackX_8 = (ulonglong *)((longlong)puStackX_8 + -1);
      } while (puStackX_8 != (ulonglong *)0x0);
      *(ushort *)ppuStackX_20 = 0xffff;
      *(uint64_t *)((longlong)puVar15 + 0x16) = 0xffffffffffffffff;
      *(uint64_t *)((longlong)puVar15 + 0x1e) = 0xffffffffffffffff;
      *(uint64_t *)((longlong)puVar15 + 0x26) = 0xffffffffffffffff;
      *(int32_t *)((longlong)puVar15 + 0x2e) = 0xffffffff;
      *(int8_t *)((longlong)puVar15 + 0x32) = 0;
      puStackX_8 = (ulonglong *)0x0;
      if (uStackX_10 != 0xffffffff) {
        puVar7 = (ulonglong *)((ulonglong)uStackX_10 * 0x38 + *(longlong *)(param_1 + 0x68));
        if ((*puVar7 & 0xffffffff00000000) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x80);
          *(ulonglong *)(param_1 + 0x80) = (ulonglong)uStackX_10;
          puStackX_8 = puVar7 + 1;
          if (lVar9 == 0xffffffff) {
            if ((longlong *)*puStackX_8 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*puStackX_8 + 0x38))();
            }
            *puVar7 = 0xffffffff;
          }
          else {
            if ((longlong *)*puStackX_8 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*puStackX_8 + 0x38))();
            }
            *puVar7 = (longlong)(int)lVar9;
          }
        }
      }
      *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + -1;
      if (plVar1 != (longlong *)0x0) {
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




// 函数: void FUN_1804cb810(longlong param_1,longlong param_2,int8_t param_3)
void FUN_1804cb810(longlong param_1,longlong param_2,int8_t param_3)

{
  int32_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
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
  ulonglong *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint64_t *puVar30;
  uint64_t *puVar31;
  uint64_t *puVar32;
  ulonglong *puVar33;
  longlong lVar34;
  ulonglong uVar35;
  uint64_t *puVar36;
  int16_t *puVar37;
  int8_t auStack_248 [48];
  ulonglong *puStack_218;
  ulonglong uStack_210;
  longlong *plStack_208;
  uint64_t *puStack_200;
  ulonglong *puStack_1f8;
  int16_t *puStack_1f0;
  uint64_t *puStack_1e8;
  uint64_t *puStack_1e0;
  longlong lStack_1d8;
  longlong *plStack_1d0;
  ulonglong uStack_1c8;
  uint64_t uStack_1c0;
  longlong lStack_1b8;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  ulonglong uStack_48;
  
  uStack_1c0 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_248;
  if (*(int *)(param_1 + 0x338) == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_248);
  }
  lStack_1b8 = param_1 + 0x2e8;
  iVar25 = _Mtx_lock(lStack_1b8);
  if (iVar25 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar25);
  }
  if (*(int *)(param_1 + 0x338) <= *(int *)(param_1 + 0x180)) {
    uVar35 = (ulonglong)*(uint *)(param_1 + 0x33c);
    while( true ) {
      puVar26 = (ulonglong *)(uVar35 * 0x38 + *(longlong *)(param_1 + 0x68));
      puVar33 = puVar26 + 1;
      if ((*puVar26 & 0xffffffff00000000) == 0) {
        puVar33 = (ulonglong *)0x0;
      }
      if (puVar33 != (ulonglong *)0x0) break;
      uVar27 = (longlong)((int)uVar35 + 1) % (longlong)*(int *)(param_1 + 0x338);
      uVar35 = uVar27 & 0xffffffff;
      *(int *)(param_1 + 0x33c) = (int)uVar27;
    }
    FUN_1804cb300(param_1);
    *(int *)(param_1 + 0x33c) = (*(int *)(param_1 + 0x33c) + 1) % *(int *)(param_1 + 0x338);
  }
  uStack_1c8 = *(ulonglong *)(param_1 + 0x80);
  lVar28 = *(longlong *)(param_1 + 0x68);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (uStack_1c8 == 0xffffffff) {
    uStack_1c8 = (ulonglong)*(int *)(param_1 + 0x70);
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
    lVar34 = uStack_1c8 * 0x38;
    *(longlong *)(param_1 + 0x78) = lVar2 + 1;
    *(ulonglong *)(lVar34 + lVar28) = lVar2 << 0x20 | uStack_1c8;
    puStack_1f8 = (ulonglong *)(lVar28 + 8 + lVar34);
    *(uint64_t *)(lVar34 + 0x10 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x18 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x20 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x28 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x30 + lVar28) = 0;
    *puStack_1f8 = 0;
  }
  else {
    lVar34 = (longlong)(int)uStack_1c8 * 0x38;
    *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(lVar34 + lVar28);
    *(longlong *)(param_1 + 0x78) = lVar2 + 1;
    *(longlong *)(lVar34 + lVar28) = lVar2 << 0x20 | (longlong)(int)uStack_1c8;
    puStack_1f8 = (ulonglong *)(lVar28 + 8 + lVar34);
    *(uint64_t *)(lVar34 + 0x10 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x18 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x20 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x28 + lVar28) = 0;
    *(uint64_t *)(lVar34 + 0x30 + lVar28) = 0;
    *puStack_1f8 = 0;
    uVar35 = *(ulonglong *)(param_1 + 0x78);
    if (0xffffffff < uVar35) {
      uVar35 = 1;
    }
    *(ulonglong *)(param_1 + 0x78) = uVar35;
  }
  *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
  lVar34 = (uStack_1c8 & 0xffff) * 0x38 + *(longlong *)(param_1 + 0x68);
  puVar37 = (int16_t *)(lVar34 + 0x14);
  *puVar37 = 0xffff;
  *(uint64_t *)(lVar34 + 0x16) = 0xffffffffffffffff;
  *(uint64_t *)(lVar34 + 0x1e) = 0xffffffffffffffff;
  *(uint64_t *)(lVar34 + 0x26) = 0xffffffffffffffff;
  *(int32_t *)(lVar34 + 0x2e) = 0xffffffff;
  *(int8_t *)(lVar34 + 0x32) = param_3;
  uVar35 = *(ulonglong *)(param_1 + 0xa8);
  lVar28 = *(longlong *)(param_1 + 0x90);
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (uVar35 == 0xffffffff) {
    uVar35 = (ulonglong)*(int *)(param_1 + 0x98);
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
    *(longlong *)(param_1 + 0xa0) = lVar2 + 1;
    *(ulonglong *)(lVar28 + uVar35 * 0x48) = lVar2 << 0x20 | uVar35;
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
    uVar27 = (ulonglong)(int)uVar35;
    *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(lVar28 + uVar27 * 0x48);
    *(longlong *)(param_1 + 0xa0) = lVar2 + 1;
    *(ulonglong *)(lVar28 + uVar27 * 0x48) = lVar2 << 0x20 | uVar27;
    *(uint64_t *)(lVar28 + 8 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x10 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x18 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x20 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x28 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x30 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x38 + uVar27 * 0x48) = 0;
    *(uint64_t *)(lVar28 + 0x40 + uVar27 * 0x48) = 0;
    uVar27 = *(ulonglong *)(param_1 + 0xa0);
    if (0xffffffff < uVar27) {
      uVar27 = 1;
    }
    *(ulonglong *)(param_1 + 0xa0) = uVar27;
  }
  *(short *)(lVar34 + 0x24) = (short)uVar35;
  puStack_1f0 = puVar37;
  lStack_1d8 = lVar34;
  uVar24 = func_0x0001804ce370(param_1 + 0xb8);
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
  uVar35 = (ulonglong)*(ushort *)(lVar34 + 0x24);
  lVar28 = *(longlong *)(param_1 + 0x90);
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
  FUN_1801c0d90(param_2);
  puStack_200 = *(uint64_t **)(param_2 + 0x28);
  uStack_108 = *puStack_200;
  uStack_100 = puStack_200[1];
  uStack_f8 = puStack_200[2];
  uStack_f0 = puStack_200[3];
  uStack_e8 = puStack_200[4];
  uStack_e0 = puStack_200[5];
  uStack_d8 = puStack_200[6];
  uStack_d0 = puStack_200[7];
  uStack_c8 = puStack_200[8];
  uStack_c0 = puStack_200[9];
  uStack_b8 = puStack_200[10];
  uStack_b0 = puStack_200[0xb];
  uStack_a8 = puStack_200[0xc];
  uStack_a0 = puStack_200[0xd];
  uStack_98 = puStack_200[0xe];
  uStack_90 = puStack_200[0xf];
  uStack_88 = puStack_200[0x10];
  uStack_80 = puStack_200[0x11];
  uVar20 = puStack_200[0x12];
  uVar21 = puStack_200[0x13];
  uVar22 = puStack_200[0x14];
  uVar23 = puStack_200[0x15];
  uStack_58 = puStack_200[0x16];
  lVar28 = (ulonglong)*(ushort *)(lVar34 + 0x26) * 0xc0 + *(longlong *)(param_1 + 0xb8);
  *(uint64_t *)(lVar28 + 8) = uStack_108;
  *(uint64_t *)(lVar28 + 0x10) = uStack_100;
  *(uint64_t *)(lVar28 + 0x18) = uStack_f8;
  *(uint64_t *)(lVar28 + 0x20) = uStack_f0;
  *(uint64_t *)(lVar28 + 0x28) = uStack_e8;
  *(uint64_t *)(lVar28 + 0x30) = uStack_e0;
  *(uint64_t *)(lVar28 + 0x38) = uStack_d8;
  *(uint64_t *)(lVar28 + 0x40) = uStack_d0;
  *(uint64_t *)(lVar28 + 0x48) = uStack_c8;
  *(uint64_t *)(lVar28 + 0x50) = uStack_c0;
  *(uint64_t *)(lVar28 + 0x58) = uStack_b8;
  *(uint64_t *)(lVar28 + 0x60) = uStack_b0;
  *(uint64_t *)(lVar28 + 0x68) = uStack_a8;
  *(uint64_t *)(lVar28 + 0x70) = uStack_a0;
  *(uint64_t *)(lVar28 + 0x78) = uStack_98;
  *(uint64_t *)(lVar28 + 0x80) = uStack_90;
  *(uint64_t *)(lVar28 + 0x88) = uStack_88;
  *(uint64_t *)(lVar28 + 0x90) = uStack_80;
  uStack_78._0_4_ = (int32_t)uVar20;
  uStack_78._4_4_ = (int32_t)((ulonglong)uVar20 >> 0x20);
  uStack_70._0_4_ = (int32_t)uVar21;
  uStack_70._4_4_ = (int32_t)((ulonglong)uVar21 >> 0x20);
  *(int32_t *)(lVar28 + 0x98) = (int32_t)uStack_78;
  *(int32_t *)(lVar28 + 0x9c) = uStack_78._4_4_;
  *(int32_t *)(lVar28 + 0xa0) = (int32_t)uStack_70;
  *(int32_t *)(lVar28 + 0xa4) = uStack_70._4_4_;
  uStack_68._0_4_ = (int32_t)uVar22;
  uStack_68._4_4_ = (int32_t)((ulonglong)uVar22 >> 0x20);
  uStack_60._0_4_ = (int32_t)uVar23;
  uStack_60._4_4_ = (int32_t)((ulonglong)uVar23 >> 0x20);
  *(int32_t *)(lVar28 + 0xa8) = (int32_t)uStack_68;
  *(int32_t *)(lVar28 + 0xac) = uStack_68._4_4_;
  *(int32_t *)(lVar28 + 0xb0) = (int32_t)uStack_60;
  *(int32_t *)(lVar28 + 0xb4) = uStack_60._4_4_;
  *(uint64_t *)(lVar28 + 0xb8) = uStack_58;
  uVar35 = *(ulonglong *)(param_1 + 0xf8);
  lVar28 = *(longlong *)(param_1 + 0xf0);
  uStack_78 = uVar20;
  uStack_70 = uVar21;
  uStack_68 = uVar22;
  uStack_60 = uVar23;
  if (uVar35 == 0xffffffff) {
    uVar35 = (ulonglong)*(int *)(param_1 + 0xe8);
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 1;
    puVar33 = (ulonglong *)(uVar35 * 0x50 + *(longlong *)(param_1 + 0xe0));
    *(longlong *)(param_1 + 0xf0) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | uVar35;
    puStack_218 = puVar33 + 1;
    *puStack_218 = 0;
    puVar33[2] = 0;
    puVar33[3] = 0;
    *(int32_t *)(puVar33 + 4) = 3;
    puVar33[5] = 0;
    puStack_1f8 = puStack_218;
    FUN_1804cdfe0();
  }
  else {
    puVar33 = (ulonglong *)((longlong)(int)uVar35 * 0x50 + *(longlong *)(param_1 + 0xe0));
    *(ulonglong *)(param_1 + 0xf8) = *puVar33;
    *(longlong *)(param_1 + 0xf0) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | (longlong)(int)uVar35;
    puStack_218 = puVar33 + 1;
    *puStack_218 = 0;
    puVar33[2] = 0;
    puVar33[3] = 0;
    *(int32_t *)(puVar33 + 4) = 3;
    puVar33[5] = 0;
    puStack_1f8 = puStack_218;
    FUN_1804cdfe0();
    if (0xffffffff < *(ulonglong *)(param_1 + 0xf0)) {
      *(uint64_t *)(param_1 + 0xf0) = 1;
    }
  }
  *(short *)(lVar34 + 0x28) = (short)uVar35;
  plVar3 = *(longlong **)(param_2 + 0x260);
  plStack_1d0 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  puStack_1f8 = (ulonglong *)(uVar35 & 0xffffffff);
  lVar28 = (longlong)puStack_1f8 * 0x50 + *(longlong *)(param_1 + 0xe0);
  if (plVar3 != (longlong *)0x0) {
    plStack_208 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plStack_208 = *(longlong **)(lVar28 + 0x28);
  *(longlong **)(lVar28 + 0x28) = plVar3;
  if (plStack_208 != (longlong *)0x0) {
    (**(code **)(*plStack_208 + 0x38))();
  }
  uVar35 = *(ulonglong *)(param_1 + 0x148);
  lVar28 = *(longlong *)(param_1 + 0x140);
  if (uVar35 == 0xffffffff) {
    uVar35 = (ulonglong)*(int *)(param_1 + 0x138);
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x138) + 1;
    puVar33 = (ulonglong *)(uVar35 * 0x10 + *(longlong *)(param_1 + 0x130));
    *(longlong *)(param_1 + 0x140) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | uVar35;
    puVar33 = puVar33 + 1;
    if (puVar33 != (ulonglong *)0x0) {
      *(int8_t *)puVar33 = 0;
    }
  }
  else {
    puVar33 = (ulonglong *)((longlong)(int)uVar35 * 0x10 + *(longlong *)(param_1 + 0x130));
    *(ulonglong *)(param_1 + 0x148) = *puVar33;
    *(longlong *)(param_1 + 0x140) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | (longlong)(int)uVar35;
    if (puVar33 + 1 != (ulonglong *)0x0) {
      *(int8_t *)(puVar33 + 1) = 0;
    }
    uVar27 = *(ulonglong *)(param_1 + 0x140);
    if (0xffffffff < uVar27) {
      uVar27 = 1;
    }
    *(ulonglong *)(param_1 + 0x140) = uVar27;
  }
  *(short *)(lVar34 + 0x2a) = (short)uVar35;
  uVar35 = *(ulonglong *)(param_1 + 0x170);
  lVar28 = *(longlong *)(param_1 + 0x168);
  if (uVar35 == 0xffffffff) {
    uVar35 = (ulonglong)*(int *)(param_1 + 0x160);
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 1;
    puVar33 = (ulonglong *)(uVar35 * 0x10 + *(longlong *)(param_1 + 0x158));
    *(longlong *)(param_1 + 0x168) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | uVar35;
    puVar33 = puVar33 + 1;
    if (puVar33 != (ulonglong *)0x0) {
      *(int16_t *)puVar33 = 0;
    }
  }
  else {
    puVar33 = (ulonglong *)((longlong)(int)uVar35 * 0x10 + *(longlong *)(param_1 + 0x158));
    *(ulonglong *)(param_1 + 0x170) = *puVar33;
    *(longlong *)(param_1 + 0x168) = lVar28 + 1;
    *puVar33 = lVar28 << 0x20 | (longlong)(int)uVar35;
    if (puVar33 + 1 != (ulonglong *)0x0) {
      *(int16_t *)(puVar33 + 1) = 0;
    }
    uVar27 = *(ulonglong *)(param_1 + 0x168);
    if (0xffffffff < uVar27) {
      uVar27 = 1;
    }
    *(ulonglong *)(param_1 + 0x168) = uVar27;
  }
  *(short *)(lVar34 + 0x2c) = (short)uVar35;
  puVar33 = (ulonglong *)(param_1 + 0x1b8);
  plStack_208 = (longlong *)0x8;
  do {
    uVar35 = puVar33[1];
    uVar27 = puVar33[-2];
    uVar4 = *puVar33;
    if (uVar35 == 0xffffffff) {
      uVar35 = (ulonglong)(int)puVar33[-1];
      puVar33[-1] = puVar33[-1] + 1;
      *puVar33 = uVar4 + 1;
      *(ulonglong *)(uVar27 + uVar35 * 0x28) = uVar4 << 0x20 | uVar35;
      puStack_1e8 = (uint64_t *)(uVar27 + (uVar35 * 5 + 1) * 8);
      *(uint64_t *)(uVar27 + 0x10 + uVar35 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x18 + uVar35 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x20 + uVar35 * 0x28) = 0;
      *puStack_1e8 = 0;
      puStack_1e8[1] = 0;
      puStack_1e8[2] = 0;
      *(int32_t *)(puStack_1e8 + 3) = 0x18;
    }
    else {
      uVar29 = (ulonglong)(int)uVar35;
      puVar33[1] = *(ulonglong *)(uVar27 + uVar29 * 0x28);
      *puVar33 = uVar4 + 1;
      *(ulonglong *)(uVar27 + uVar29 * 0x28) = uVar4 << 0x20 | uVar29;
      puStack_1e8 = (uint64_t *)(uVar27 + (uVar29 * 5 + 1) * 8);
      *(uint64_t *)(uVar27 + 0x10 + uVar29 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x18 + uVar29 * 0x28) = 0;
      *(uint64_t *)(uVar27 + 0x20 + uVar29 * 0x28) = 0;
      *puStack_1e8 = 0;
      puStack_1e8[1] = 0;
      puStack_1e8[2] = 0;
      *(int32_t *)(puStack_1e8 + 3) = 0x18;
      uVar27 = *puVar33;
      if (0xffffffff < uVar27) {
        uVar27 = 1;
      }
      *puVar33 = uVar27;
    }
    *puVar37 = (short)uVar35;
    uVar35 = uVar35 & 0xffff;
    uVar27 = puVar33[-2];
    puStack_218 = puStack_1e8;
    uStack_210 = uVar27;
    if ((ulonglong)
        ((*(longlong *)(uVar27 + 0x18 + uVar35 * 0x28) - *(longlong *)(uVar27 + 8 + uVar35 * 0x28))
        / 0x60) < 8) {
      puStack_1e8 = (uint64_t *)
                    FUN_18062b420(_DAT_180c8ed18,0x300,
                                  *(int8_t *)(uVar27 + 0x20 + uVar35 * 0x28));
      puVar36 = *(uint64_t **)(uVar27 + 0x10 + uVar35 * 0x28);
      puVar32 = *(uint64_t **)(uVar27 + 8 + uVar35 * 0x28);
      puVar30 = puStack_1e8;
      if (puVar32 != puVar36) {
        do {
          puStack_218 = puVar30;
          uVar20 = puVar32[1];
          *puStack_218 = *puVar32;
          puStack_218[1] = uVar20;
          uVar20 = puVar32[3];
          puStack_218[2] = puVar32[2];
          puStack_218[3] = uVar20;
          uVar5 = *(int32_t *)((longlong)puVar32 + 0x24);
          uVar6 = *(int32_t *)(puVar32 + 5);
          uVar7 = *(int32_t *)((longlong)puVar32 + 0x2c);
          *(int32_t *)(puStack_218 + 4) = *(int32_t *)(puVar32 + 4);
          *(int32_t *)((longlong)puStack_218 + 0x24) = uVar5;
          *(int32_t *)(puStack_218 + 5) = uVar6;
          *(int32_t *)((longlong)puStack_218 + 0x2c) = uVar7;
          uVar20 = puVar32[7];
          puStack_218[6] = puVar32[6];
          puStack_218[7] = uVar20;
          puStack_218[8] = puVar32[8];
          puVar32[8] = 0;
          puStack_218[9] = puVar32[9];
          puVar32[9] = 0;
          *(int8_t *)(puStack_218 + 10) = *(int8_t *)(puVar32 + 10);
          *(int32_t *)((longlong)puStack_218 + 0x54) = *(int32_t *)((longlong)puVar32 + 0x54);
          *(int32_t *)(puStack_218 + 0xb) = *(int32_t *)(puVar32 + 0xb);
          *(int32_t *)((longlong)puStack_218 + 0x5c) = *(int32_t *)((longlong)puVar32 + 0x5c);
          puVar32 = puVar32 + 0xc;
          puVar30 = puStack_218 + 0xc;
        } while (puVar32 != puVar36);
        puVar36 = *(uint64_t **)(uStack_210 + 0x10 + uVar35 * 0x28);
        puVar32 = *(uint64_t **)(uStack_210 + 8 + uVar35 * 0x28);
      }
      puVar31 = puVar32;
      puStack_1e0 = puVar32;
      if (puVar32 != puVar36) {
        do {
          puStack_1e0 = puVar31;
          if ((longlong *)puVar31[9] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar31[9] + 0x38))();
          }
          if ((longlong *)puVar31[8] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar31[8] + 0x38))();
          }
          puVar31 = puVar31 + 0xc;
        } while (puVar31 != puVar36);
        puVar32 = *(uint64_t **)(uStack_210 + 8 + uVar35 * 0x28);
        puStack_1e0 = puVar31;
      }
      if (puVar32 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar32);
      }
      *(uint64_t **)(uStack_210 + 8 + uVar35 * 0x28) = puStack_1e8;
      *(uint64_t **)(uStack_210 + 0x10 + uVar35 * 0x28) = puVar30;
      *(uint64_t **)(uStack_210 + 0x18 + uVar35 * 0x28) = puStack_1e8 + 0x60;
      puVar37 = puStack_1f0;
    }
    puVar37 = puVar37 + 1;
    puVar33 = puVar33 + 5;
    plStack_208 = (longlong *)((longlong)plStack_208 + -1);
    puStack_1f0 = puVar37;
    if (plStack_208 == (longlong *)0x0) {
      lVar28 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x120) != 0xffffffff) {
        uVar35 = (ulonglong)(int)*(longlong *)(param_1 + 0x120);
        puVar33 = (ulonglong *)(uVar35 * 0x88 + *(longlong *)(param_1 + 0x108));
        *(ulonglong *)(param_1 + 0x120) = *puVar33;
        *(longlong *)(param_1 + 0x118) = lVar28 + 1;
        *puVar33 = lVar28 << 0x20 | uVar35;
                    // WARNING: Subroutine does not return
        memset(puVar33 + 1,0,0x80);
      }
      iVar25 = *(int *)(param_1 + 0x110);
      *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + 1;
      puVar33 = (ulonglong *)((longlong)iVar25 * 0x88 + *(longlong *)(param_1 + 0x108));
      *(longlong *)(param_1 + 0x118) = lVar28 + 1;
      *puVar33 = lVar28 << 0x20 | (longlong)iVar25;
                    // WARNING: Subroutine does not return
      memset(puVar33 + 1,0,0x80);
    }
  } while( true );
}






// 函数: void FUN_1804cc710(void)
void FUN_1804cc710(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






