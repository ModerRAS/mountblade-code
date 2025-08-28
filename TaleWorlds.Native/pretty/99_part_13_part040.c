#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_13_part040.c - 1 个函数
// 函数: void function_8bfbe0(int64_t param_1,uint64_t *param_2)
void function_8bfbe0(int64_t param_1,uint64_t *param_2)
{
  uint uVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint *puVar8;
  int64_t *plVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int8_t stack_array_148 [32];
  uint local_var_128;
  uint local_var_120;
  uint local_var_118;
  uint local_var_110;
  uint local_var_108;
  uint local_var_100;
  uint local_var_f8;
  uint local_var_f0;
  uint local_var_e8;
  uint local_var_e0;
  int64_t *plStack_d8;
  uint64_t local_var_d0;
  int aiStack_c8 [2];
  int iStack_c0;
  int iStack_bc;
  int64_t *plStack_b8;
  int64_t lStack_b0;
  int aiStack_a8 [2];
  uint64_t *plocal_var_a0;
  int64_t lStack_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  int64_t *plStack_70;
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_148;
  plocal_var_a0 = param_2;
  lStack_98 = param_1;
  iVar3 = function_8b8950(param_1 + 0x290);
  if (iVar3 == 0) {
    plVar12 = param_2 + 1;
    local_var_d0 = 0xffffffffffffffff;
    aiStack_c8[0] = -1;
    plStack_d8 = plVar12;
    plStack_70 = plVar12;
    function_8549c0(plVar12,&local_var_d0,aiStack_c8);
    plVar9 = plStack_d8;
    if (aiStack_c8[0] != -1) {
      iVar3 = aiStack_c8[0];
      iVar15 = (int)local_var_d0;
      do {
        do {
          plVar12 = (int64_t *)0x0;
          puVar10 = (uint64_t *)(plVar9[2] + (int64_t)iVar3 * 0x18);
          plStack_b8 = (int64_t *)*puVar10;
          lStack_b0 = puVar10[1];
          local_var_90._0_4_ = (uint)plStack_b8;
          local_var_90._4_4_ = (uint)((uint64_t)plStack_b8 >> 0x20);
          local_var_88._4_4_ = (uint)((uint64_t)lStack_b0 >> 0x20);
          local_var_88 = lStack_b0;
          if (((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(param_1 + 0x140) != 0)) &&
             (iVar14 = *(int *)(*(int64_t *)(param_1 + 0x138) +
                               (int64_t)
                               (int)(((uint)local_var_90 ^ local_var_90._4_4_ ^ (uint)lStack_b0 ^
                                     local_var_88._4_4_) & *(int *)(param_1 + 0x140) - 1U) * 4),
             iVar14 != -1)) {
            do {
              plVar5 = (int64_t *)((int64_t)iVar14 * 0x20 + *(int64_t *)(param_1 + 0x148));
              if (((int64_t *)*plVar5 == plStack_b8) && (plVar5[1] == lStack_b0)) {
                plStack_d8 = (int64_t *)plVar5[3];
                if (plStack_d8 != (int64_t *)0x0) goto LAB_1808bfd9d;
                break;
              }
              iVar14 = (int)plVar5[2];
            } while (iVar14 != -1);
          }
          if (((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 0x110) != 0)) &&
             (iVar14 = *(int *)(*(int64_t *)(param_1 + 0x108) +
                               (int64_t)
                               (int)(((uint)local_var_90 ^ local_var_90._4_4_ ^ (uint)lStack_b0 ^
                                     local_var_88._4_4_) & *(int *)(param_1 + 0x110) - 1U) * 4),
             iVar14 != -1)) {
            do {
              plVar5 = (int64_t *)((int64_t)iVar14 * 0x20 + *(int64_t *)(param_1 + 0x118));
              if (((int64_t *)*plVar5 == plStack_b8) && (plVar5[1] == lStack_b0)) {
                plVar12 = (int64_t *)plVar5[3];
                break;
              }
              iVar14 = (int)plVar5[2];
            } while (iVar14 != -1);
          }
          plStack_d8 = plVar12;
          plVar5 = plStack_b8;
          if (plVar12 != (int64_t *)0x0) {
LAB_1808bfd9d:
            local_var_d0 = 0xffffffffffffffff;
            aiStack_c8[0] = -1;
            uVar1 = (uint)local_var_90;
            local_var_90 = plStack_b8;
            NetworkSystem_ConnectionHandler(uVar1,&local_var_d0,aiStack_c8);
            plVar12 = plStack_d8;
            plVar5 = local_var_90;
            if (aiStack_c8[0] != -1) {
              iVar14 = aiStack_c8[0];
              iVar13 = (int)local_var_d0;
              do {
                do {
                  iVar4 = function_852090(*(uint64_t *)(plVar12[2] + 8 + (int64_t)iVar14 * 0x10),
                                        plocal_var_a0);
                  if (iVar4 != 0) goto label_8c0723;
                } while ((iVar14 != -1) &&
                        (iVar14 = *(int *)(plVar12[2] + 4 + (int64_t)iVar14 * 0x10), iVar14 != -1))
                ;
                iVar14 = iVar13 + 1;
                bVar16 = iVar13 != -1;
                iVar13 = 0;
                if (bVar16) {
                  iVar13 = iVar14;
                }
                if (iVar13 != (int)plVar12[1]) {
                  lVar6 = (int64_t)iVar13;
                  do {
                    if (*(int *)(*plVar12 + lVar6 * 4) != -1) {
                      iVar14 = *(int *)(*plVar12 + (int64_t)iVar13 * 4);
                      goto LAB_1808bfe4b;
                    }
                    iVar13 = iVar13 + 1;
                    lVar6 = lVar6 + 1;
                  } while (lVar6 != (int)plVar12[1]);
                }
                iVar14 = -1;
                iVar13 = iVar14;
LAB_1808bfe4b:
                param_1 = lStack_98;
                plVar5 = local_var_90;
              } while (iVar14 != -1);
            }
          }
          local_var_90 = plVar5;
        } while ((iVar3 != -1) &&
                (iVar3 = *(int *)(plVar9[2] + 0x10 + (int64_t)iVar3 * 0x18), iVar3 != -1));
        iVar3 = iVar15 + 1;
        bVar16 = iVar15 != -1;
        iVar15 = 0;
        if (bVar16) {
          iVar15 = iVar3;
        }
        if (iVar15 != (int)plVar9[1]) {
          lVar6 = (int64_t)iVar15;
          do {
            if (*(int *)(*plVar9 + lVar6 * 4) != -1) {
              iVar3 = *(int *)(*plVar9 + (int64_t)iVar15 * 4);
              goto LAB_1808bfebe;
            }
            iVar15 = iVar15 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plVar9[1]);
        }
        iVar3 = -1;
        iVar15 = iVar3;
LAB_1808bfebe:
        param_2 = plocal_var_a0;
        plVar12 = plStack_70;
      } while (iVar3 != -1);
    }
    local_var_d0 = 0xffffffffffffffff;
    plStack_d8 = plVar12 + 5;
    aiStack_c8[0] = -1;
    if (plVar12 == (int64_t *)0x0) {
      plStack_d8 = (int64_t *)0x0;
    }
    function_8549c0(plStack_d8,&local_var_d0,aiStack_c8);
    plVar9 = plStack_d8;
    if (aiStack_c8[0] != -1) {
      iVar3 = aiStack_c8[0];
      iVar15 = (int)local_var_d0;
      do {
        do {
          puVar10 = (uint64_t *)(plVar9[2] + (int64_t)iVar3 * 0x18);
          plStack_b8 = (int64_t *)*puVar10;
          lStack_b0 = puVar10[1];
          local_var_80._4_4_ = (uint)((uint64_t)plStack_b8 >> 0x20);
          local_var_78._4_4_ = (uint)((uint64_t)lStack_b0 >> 0x20);
          plVar5 = plStack_b8;
          lVar6 = lStack_b0;
          if (((*(int *)(param_1 + 0x264) != 0) &&
              (plVar5 = plStack_b8, lVar6 = lStack_b0, *(int *)(param_1 + 0x248) != 0)) &&
             (iVar14 = *(int *)(*(int64_t *)(param_1 + 0x240) +
                               (int64_t)
                               (int)((local_var_78._4_4_ ^ local_var_80._4_4_ ^ (uint)plStack_b8 ^
                                     (uint)lStack_b0) & *(int *)(param_1 + 0x248) - 1U) * 4),
             plVar5 = plStack_b8, lVar6 = lStack_b0, iVar14 != -1)) {
            do {
              plVar7 = (int64_t *)((int64_t)iVar14 * 0x20 + *(int64_t *)(param_1 + 0x250));
              if (((int64_t *)*plVar7 == plStack_b8) && (plVar7[1] == lStack_b0)) {
                plVar5 = plStack_b8;
                lVar6 = lStack_b0;
                if ((plVar7[3] != 0) &&
                   (local_var_80 = plStack_b8, local_var_78 = lStack_b0,
                   iVar14 = function_8cc190(plVar7[3],param_2), plVar5 = local_var_80, lVar6 = local_var_78,
                   iVar14 != 0)) goto label_8c0723;
                break;
              }
              iVar14 = (int)plVar7[2];
              plVar5 = plStack_b8;
              lVar6 = lStack_b0;
            } while (iVar14 != -1);
          }
          local_var_78 = lVar6;
          local_var_80 = plVar5;
        } while ((iVar3 != -1) &&
                (iVar3 = *(int *)(plVar9[2] + 0x10 + (int64_t)iVar3 * 0x18), iVar3 != -1));
        iVar3 = iVar15 + 1;
        bVar16 = iVar15 != -1;
        iVar15 = 0;
        if (bVar16) {
          iVar15 = iVar3;
        }
        if (iVar15 != (int)plVar9[1]) {
          lVar6 = (int64_t)iVar15;
          do {
            if (*(int *)(*plVar9 + lVar6 * 4) != -1) {
              iVar3 = *(int *)(*plVar9 + (int64_t)iVar15 * 4);
              goto LAB_1808c003c;
            }
            iVar15 = iVar15 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plVar9[1]);
        }
        iVar3 = -1;
        iVar15 = iVar3;
LAB_1808c003c:
      } while (iVar3 != -1);
    }
    local_var_d0 = 0xffffffffffffffff;
    plStack_d8 = plVar12 + 10;
    aiStack_c8[0] = -1;
    if (plVar12 == (int64_t *)0x0) {
      plStack_d8 = (int64_t *)0x0;
    }
    function_8549c0(plStack_d8,&local_var_d0,aiStack_c8);
    iStack_bc = aiStack_c8[0];
    if (aiStack_c8[0] != -1) {
      iStack_c0 = (int)local_var_d0;
      do {
        do {
          iVar3 = iStack_c0;
          plVar12 = (int64_t *)0x0;
          if (iStack_bc == -1) {
            puVar10 = (uint64_t *)SystemCoreProcessor();
            puVar8 = (uint *)&local_var_90;
            local_var_90 = (int64_t *)*puVar10;
            local_var_88 = puVar10[1];
          }
          else {
            puVar10 = (uint64_t *)(plStack_d8[2] + (int64_t)iStack_bc * 0x18);
            puVar8 = (uint *)&local_var_80;
            local_var_80 = (int64_t *)*puVar10;
            local_var_78 = puVar10[1];
          }
          plStack_b8 = *(int64_t **)puVar8;
          uVar1 = puVar8[2];
          lStack_b0 = *(int64_t *)(puVar8 + 2);
          if (((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(param_1 + 0x70) != 0)) &&
             (iVar15 = *(int *)(*(int64_t *)(param_1 + 0x68) +
                               (int64_t)
                               (int)((*puVar8 ^ puVar8[1] ^ uVar1 ^ puVar8[3]) &
                                    *(int *)(param_1 + 0x70) - 1U) * 4), iVar15 != -1)) {
            do {
              plVar9 = (int64_t *)((int64_t)iVar15 * 0x20 + *(int64_t *)(param_1 + 0x78));
              if (((int64_t *)*plVar9 == plStack_b8) && (plVar9[1] == lStack_b0)) {
                plVar9 = (int64_t *)plVar9[3];
                if (plVar9 != (int64_t *)0x0) goto LAB_1808c01ad;
                break;
              }
              iVar15 = (int)plVar9[2];
            } while (iVar15 != -1);
          }
          if (((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
             (iVar15 = *(int *)(*(int64_t *)(param_1 + 0x38) +
                               (int64_t)
                               (int)((*puVar8 ^ puVar8[1] ^ uVar1 ^ puVar8[3]) &
                                    *(int *)(param_1 + 0x40) - 1U) * 4), iVar15 != -1)) {
            do {
              plVar9 = (int64_t *)((int64_t)iVar15 * 0x20 + *(int64_t *)(param_1 + 0x48));
              if (((int64_t *)*plVar9 == plStack_b8) && (plVar9[1] == lStack_b0)) {
                plVar12 = (int64_t *)plVar9[3];
                break;
              }
              iVar15 = (int)plVar9[2];
            } while (iVar15 != -1);
          }
          plVar9 = plVar12;
          param_2 = plocal_var_a0;
          if (plVar12 != (int64_t *)0x0) {
LAB_1808c01ad:
            lVar6 = plVar9[10];
            if (lVar6 != 0) {
              plStack_b8 = (int64_t *)
                           (**(code **)(*(int64_t *)*plocal_var_a0 + 0x288))
                                     ((int64_t *)*plocal_var_a0,lVar6 + 0x10,
                                      CONCAT71((int7)((uint64_t)lStack_b0 >> 8),1));
              if (plStack_b8 == (int64_t *)0x0) {
                local_var_e0 = (uint)*(byte *)(lVar6 + 0x1f);
                local_var_e8 = (uint)*(byte *)(lVar6 + 0x1e);
                local_var_f0 = (uint)*(byte *)(lVar6 + 0x1d);
                local_var_f8 = (uint)*(byte *)(lVar6 + 0x1c);
                local_var_100 = (uint)*(byte *)(lVar6 + 0x1b);
                local_var_108 = (uint)*(byte *)(lVar6 + 0x1a);
                local_var_110 = (uint)*(byte *)(lVar6 + 0x19);
                local_var_118 = (uint)*(byte *)(lVar6 + 0x18);
                local_var_120 = (uint)*(ushort *)(lVar6 + 0x16);
                local_var_128 = (uint)*(ushort *)(lVar6 + 0x14);
// WARNING: Subroutine does not return
                SystemDataValidator(stack_array_68,0x27,&processed_var_8960_ptr,*(int32_t *)(lVar6 + 0x10));
              }
              plVar9[10] = (int64_t)plStack_b8;
            }
            lStack_b0 = -1;
            aiStack_a8[0] = -1;
            plStack_b8 = plVar9;
            NetworkSystem_ConnectionHandler(plVar9,&lStack_b0,aiStack_a8);
            param_2 = plocal_var_a0;
            plVar12 = plStack_b8;
            if (aiStack_a8[0] != -1) {
              iVar15 = aiStack_a8[0];
              iVar14 = (int)lStack_b0;
              do {
                iVar13 = function_860690(*(uint64_t *)(plVar12[2] + 8 + (int64_t)iVar15 * 0x10),
                                       param_2);
                if (iVar13 != 0) goto label_8c0723;
                if ((iVar15 == -1) ||
                   (iVar15 = *(int *)(plVar12[2] + 4 + (int64_t)iVar15 * 0x10), iVar15 == -1)) {
                  iVar15 = iVar14 + 1;
                  bVar16 = iVar14 != -1;
                  iVar14 = 0;
                  if (bVar16) {
                    iVar14 = iVar15;
                  }
                  if (iVar14 != (int)plVar12[1]) {
                    lVar6 = (int64_t)iVar14;
                    do {
                      if (*(int *)(*plVar12 + lVar6 * 4) != -1) {
                        iVar15 = *(int *)(*plVar12 + (int64_t)iVar14 * 4);
                        goto LAB_1808c032d;
                      }
                      iVar14 = iVar14 + 1;
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != (int)plVar12[1]);
                  }
                  iVar15 = -1;
                  iVar14 = iVar15;
                }
LAB_1808c032d:
              } while (iVar15 != -1);
            }
          }
          param_1 = lStack_98;
        } while ((iStack_bc != -1) &&
                (iStack_bc = *(int *)(plStack_d8[2] + 0x10 + (int64_t)iStack_bc * 0x18),
                iStack_c0 = iVar3, iStack_bc != -1));
        iStack_c0 = 0;
        if (iVar3 != -1) {
          iStack_c0 = iVar3 + 1;
        }
        if (iStack_c0 != (int)plStack_d8[1]) {
          lVar6 = (int64_t)iStack_c0;
          do {
            if (*(int *)(*plStack_d8 + lVar6 * 4) != -1) {
              iStack_bc = *(int *)(*plStack_d8 + (int64_t)iStack_c0 * 4);
              goto LAB_1808c03b2;
            }
            iStack_c0 = iStack_c0 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plStack_d8[1]);
        }
        iStack_bc = -1;
        iStack_c0 = -1;
LAB_1808c03b2:
        plVar12 = plStack_70;
      } while (iStack_bc != -1);
    }
    lVar6 = lStack_98;
    plVar7 = (int64_t *)0x0;
    plVar9 = (int64_t *)(lStack_98 + 0x28);
    plVar5 = (int64_t *)(*(int64_t *)(lStack_98 + 0x28) + -0x18);
    if (*(int64_t *)(lStack_98 + 0x28) == 0) {
      plVar5 = plVar7;
    }
    plVar2 = plVar7;
    if (plVar5 != (int64_t *)0x0) {
      plVar2 = plVar5 + 3;
    }
    while (plVar2 != plVar9) {
      plVar5 = plVar2 + -3;
      if (plVar2 == (int64_t *)0x0) {
        plVar5 = plVar7;
      }
      iVar3 = function_8d6650(plVar5,param_2,lVar6 + 0x290);
      if (iVar3 != 0) goto label_8c0723;
      if (plVar2 == plVar9) break;
      plVar5 = (int64_t *)(*plVar2 + -0x18);
      if (*plVar2 == 0) {
        plVar5 = plVar7;
      }
      plVar2 = plVar7;
      if (plVar5 != (int64_t *)0x0) {
        plVar2 = plVar5 + 3;
      }
    }
    iVar3 = function_8bfa10(lVar6,param_2);
    if ((iVar3 == 0) && (iVar3 = function_8d3ee0(lVar6 + 0x338,param_2), iVar3 == 0)) {
      local_var_d0 = 0xffffffffffffffff;
      aiStack_c8[0] = -1;
      plStack_d8 = plVar12 + 0xf;
      if (plVar12 == (int64_t *)0x0) {
        plStack_d8 = plVar7;
      }
      function_8549c0(plStack_d8,&local_var_d0,aiStack_c8);
      plVar12 = plStack_d8;
      if (aiStack_c8[0] != -1) {
        iVar3 = aiStack_c8[0];
        iVar15 = (int)local_var_d0;
        do {
          do {
            puVar10 = (uint64_t *)(plVar12[2] + (int64_t)iVar3 * 0x18);
            plStack_b8 = (int64_t *)*puVar10;
            lStack_b0 = puVar10[1];
            local_var_80._0_4_ = (uint)plStack_b8;
            local_var_80._4_4_ = (uint)((uint64_t)plStack_b8 >> 0x20);
            local_var_78._4_4_ = (uint)((uint64_t)lStack_b0 >> 0x20);
            local_var_78 = lStack_b0;
            if (((*(int *)(lVar6 + 0x22c) != 0) && (*(int *)(lVar6 + 0x210) != 0)) &&
               (iVar14 = *(int *)(*(int64_t *)(lVar6 + 0x208) +
                                 (int64_t)
                                 (int)(((uint)local_var_80 ^ local_var_80._4_4_ ^ (uint)lStack_b0 ^
                                       local_var_78._4_4_) & *(int *)(lVar6 + 0x210) - 1U) * 4),
               iVar14 != -1)) {
              do {
                puVar10 = (uint64_t *)((int64_t)iVar14 * 0x20 + *(int64_t *)(lVar6 + 0x218));
                if (((int64_t *)*puVar10 == plStack_b8) && (puVar10[1] == lStack_b0)) {
                  plVar9 = (int64_t *)puVar10[3];
                  if (plVar9 != (int64_t *)0x0) goto LAB_1808c05ce;
                  break;
                }
                iVar14 = *(int *)(puVar10 + 2);
              } while (iVar14 != -1);
            }
            if (((*(int *)(lVar6 + 0x1fc) != 0) && (*(int *)(lVar6 + 0x1e0) != 0)) &&
               (iVar14 = *(int *)(*(int64_t *)(lVar6 + 0x1d8) +
                                 (int64_t)
                                 (int)(((uint)local_var_80 ^ local_var_80._4_4_ ^ (uint)lStack_b0 ^
                                       local_var_78._4_4_) & *(int *)(lVar6 + 0x1e0) - 1U) * 4),
               iVar14 != -1)) {
              do {
                puVar10 = (uint64_t *)((int64_t)iVar14 * 0x20 + *(int64_t *)(lVar6 + 0x1e8));
                if (((int64_t *)*puVar10 == plStack_b8) && (puVar10[1] == lStack_b0)) {
                  plVar9 = (int64_t *)puVar10[3];
                  goto LAB_1808c05c5;
                }
                iVar14 = *(int *)(puVar10 + 2);
              } while (iVar14 != -1);
            }
            plVar9 = (int64_t *)0x0;
LAB_1808c05c5:
            plVar5 = plStack_b8;
            if (plVar9 != (int64_t *)0x0) {
LAB_1808c05ce:
              local_var_d0 = 0xffffffffffffffff;
              aiStack_c8[0] = -1;
              plStack_d8 = plVar9;
              uVar1 = (uint)local_var_80;
              local_var_80 = plStack_b8;
              NetworkSystem_ConnectionHandler(uVar1,&local_var_d0,aiStack_c8);
              plVar9 = plStack_d8;
              plVar5 = local_var_80;
              if (aiStack_c8[0] != -1) {
                iVar14 = aiStack_c8[0];
                iVar13 = (int)local_var_d0;
                do {
                  do {
                    iVar4 = function_8c3980(*(uint64_t *)(plVar9[2] + 8 + (int64_t)iVar14 * 0x10));
                    if (iVar4 != 0) goto label_8c0723;
                  } while ((iVar14 != -1) &&
                          (iVar14 = *(int *)(plVar9[2] + 4 + (int64_t)iVar14 * 0x10), iVar14 != -1)
                          );
                  iVar14 = iVar13 + 1;
                  bVar16 = iVar13 != -1;
                  iVar13 = 0;
                  if (bVar16) {
                    iVar13 = iVar14;
                  }
                  if (iVar13 != (int)plVar9[1]) {
                    lVar6 = (int64_t)iVar13;
                    do {
                      if (*(int *)(*plVar9 + lVar6 * 4) != -1) {
                        iVar14 = *(int *)(*plVar9 + (int64_t)iVar13 * 4);
                        goto LAB_1808c066c;
                      }
                      iVar13 = iVar13 + 1;
                      lVar6 = lVar6 + 1;
                    } while (lVar6 != (int)plVar9[1]);
                  }
                  iVar14 = -1;
                  iVar13 = iVar14;
LAB_1808c066c:
                  lVar6 = lStack_98;
                  plVar5 = local_var_80;
                } while (iVar14 != -1);
              }
            }
            local_var_80 = plVar5;
          } while ((iVar3 != -1) &&
                  (iVar3 = *(int *)(plVar12[2] + 0x10 + (int64_t)iVar3 * 0x18), iVar3 != -1));
          iVar3 = iVar15 + 1;
          bVar16 = iVar15 != -1;
          iVar15 = 0;
          if (bVar16) {
            iVar15 = iVar3;
          }
          if (iVar15 != (int)plVar12[1]) {
            lVar11 = (int64_t)iVar15;
            do {
              if (*(int *)(*plVar12 + lVar11 * 4) != -1) {
                iVar3 = *(int *)(*plVar12 + (int64_t)iVar15 * 4);
                goto LAB_1808c06de;
              }
              iVar15 = iVar15 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != (int)plVar12[1]);
          }
          iVar3 = -1;
          iVar15 = iVar3;
LAB_1808c06de:
          param_2 = plocal_var_a0;
        } while (iVar3 != -1);
      }
      function_8d8820(lVar6 + 0x2c8,param_2);
    }
  }
label_8c0723:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_148);
}