#include "TaleWorlds.Native.Split.h"

// 99_part_13_part040.c - 1 个函数

// 函数: void FUN_1808bfbe0(longlong param_1,undefined8 *param_2)
void FUN_1808bfbe0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  uint uStack_128;
  uint uStack_120;
  uint uStack_118;
  uint uStack_110;
  uint uStack_108;
  uint uStack_100;
  uint uStack_f8;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  int aiStack_c8 [2];
  int iStack_c0;
  int iStack_bc;
  longlong *plStack_b8;
  longlong lStack_b0;
  int aiStack_a8 [2];
  undefined8 *puStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong *plStack_70;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  puStack_a0 = param_2;
  lStack_98 = param_1;
  iVar3 = FUN_1808b8950(param_1 + 0x290);
  if (iVar3 == 0) {
    plVar12 = param_2 + 1;
    uStack_d0 = 0xffffffffffffffff;
    aiStack_c8[0] = -1;
    plStack_d8 = plVar12;
    plStack_70 = plVar12;
    FUN_1808549c0(plVar12,&uStack_d0,aiStack_c8);
    plVar9 = plStack_d8;
    if (aiStack_c8[0] != -1) {
      iVar3 = aiStack_c8[0];
      iVar15 = (int)uStack_d0;
      do {
        do {
          plVar12 = (longlong *)0x0;
          puVar10 = (undefined8 *)(plVar9[2] + (longlong)iVar3 * 0x18);
          plStack_b8 = (longlong *)*puVar10;
          lStack_b0 = puVar10[1];
          uStack_90._0_4_ = (uint)plStack_b8;
          uStack_90._4_4_ = (uint)((ulonglong)plStack_b8 >> 0x20);
          uStack_88._4_4_ = (uint)((ulonglong)lStack_b0 >> 0x20);
          uStack_88 = lStack_b0;
          if (((*(int *)(param_1 + 0x15c) != 0) && (*(int *)(param_1 + 0x140) != 0)) &&
             (iVar14 = *(int *)(*(longlong *)(param_1 + 0x138) +
                               (longlong)
                               (int)(((uint)uStack_90 ^ uStack_90._4_4_ ^ (uint)lStack_b0 ^
                                     uStack_88._4_4_) & *(int *)(param_1 + 0x140) - 1U) * 4),
             iVar14 != -1)) {
            do {
              plVar5 = (longlong *)((longlong)iVar14 * 0x20 + *(longlong *)(param_1 + 0x148));
              if (((longlong *)*plVar5 == plStack_b8) && (plVar5[1] == lStack_b0)) {
                plStack_d8 = (longlong *)plVar5[3];
                if (plStack_d8 != (longlong *)0x0) goto LAB_1808bfd9d;
                break;
              }
              iVar14 = (int)plVar5[2];
            } while (iVar14 != -1);
          }
          if (((*(int *)(param_1 + 300) != 0) && (*(int *)(param_1 + 0x110) != 0)) &&
             (iVar14 = *(int *)(*(longlong *)(param_1 + 0x108) +
                               (longlong)
                               (int)(((uint)uStack_90 ^ uStack_90._4_4_ ^ (uint)lStack_b0 ^
                                     uStack_88._4_4_) & *(int *)(param_1 + 0x110) - 1U) * 4),
             iVar14 != -1)) {
            do {
              plVar5 = (longlong *)((longlong)iVar14 * 0x20 + *(longlong *)(param_1 + 0x118));
              if (((longlong *)*plVar5 == plStack_b8) && (plVar5[1] == lStack_b0)) {
                plVar12 = (longlong *)plVar5[3];
                break;
              }
              iVar14 = (int)plVar5[2];
            } while (iVar14 != -1);
          }
          plStack_d8 = plVar12;
          plVar5 = plStack_b8;
          if (plVar12 != (longlong *)0x0) {
LAB_1808bfd9d:
            uStack_d0 = 0xffffffffffffffff;
            aiStack_c8[0] = -1;
            uVar1 = (uint)uStack_90;
            uStack_90 = plStack_b8;
            FUN_1807d1650(uVar1,&uStack_d0,aiStack_c8);
            plVar12 = plStack_d8;
            plVar5 = uStack_90;
            if (aiStack_c8[0] != -1) {
              iVar14 = aiStack_c8[0];
              iVar13 = (int)uStack_d0;
              do {
                do {
                  iVar4 = FUN_180852090(*(undefined8 *)(plVar12[2] + 8 + (longlong)iVar14 * 0x10),
                                        puStack_a0);
                  if (iVar4 != 0) goto FUN_1808c0723;
                } while ((iVar14 != -1) &&
                        (iVar14 = *(int *)(plVar12[2] + 4 + (longlong)iVar14 * 0x10), iVar14 != -1))
                ;
                iVar14 = iVar13 + 1;
                bVar16 = iVar13 != -1;
                iVar13 = 0;
                if (bVar16) {
                  iVar13 = iVar14;
                }
                if (iVar13 != (int)plVar12[1]) {
                  lVar6 = (longlong)iVar13;
                  do {
                    if (*(int *)(*plVar12 + lVar6 * 4) != -1) {
                      iVar14 = *(int *)(*plVar12 + (longlong)iVar13 * 4);
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
                plVar5 = uStack_90;
              } while (iVar14 != -1);
            }
          }
          uStack_90 = plVar5;
        } while ((iVar3 != -1) &&
                (iVar3 = *(int *)(plVar9[2] + 0x10 + (longlong)iVar3 * 0x18), iVar3 != -1));
        iVar3 = iVar15 + 1;
        bVar16 = iVar15 != -1;
        iVar15 = 0;
        if (bVar16) {
          iVar15 = iVar3;
        }
        if (iVar15 != (int)plVar9[1]) {
          lVar6 = (longlong)iVar15;
          do {
            if (*(int *)(*plVar9 + lVar6 * 4) != -1) {
              iVar3 = *(int *)(*plVar9 + (longlong)iVar15 * 4);
              goto LAB_1808bfebe;
            }
            iVar15 = iVar15 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plVar9[1]);
        }
        iVar3 = -1;
        iVar15 = iVar3;
LAB_1808bfebe:
        param_2 = puStack_a0;
        plVar12 = plStack_70;
      } while (iVar3 != -1);
    }
    uStack_d0 = 0xffffffffffffffff;
    plStack_d8 = plVar12 + 5;
    aiStack_c8[0] = -1;
    if (plVar12 == (longlong *)0x0) {
      plStack_d8 = (longlong *)0x0;
    }
    FUN_1808549c0(plStack_d8,&uStack_d0,aiStack_c8);
    plVar9 = plStack_d8;
    if (aiStack_c8[0] != -1) {
      iVar3 = aiStack_c8[0];
      iVar15 = (int)uStack_d0;
      do {
        do {
          puVar10 = (undefined8 *)(plVar9[2] + (longlong)iVar3 * 0x18);
          plStack_b8 = (longlong *)*puVar10;
          lStack_b0 = puVar10[1];
          uStack_80._4_4_ = (uint)((ulonglong)plStack_b8 >> 0x20);
          uStack_78._4_4_ = (uint)((ulonglong)lStack_b0 >> 0x20);
          plVar5 = plStack_b8;
          lVar6 = lStack_b0;
          if (((*(int *)(param_1 + 0x264) != 0) &&
              (plVar5 = plStack_b8, lVar6 = lStack_b0, *(int *)(param_1 + 0x248) != 0)) &&
             (iVar14 = *(int *)(*(longlong *)(param_1 + 0x240) +
                               (longlong)
                               (int)((uStack_78._4_4_ ^ uStack_80._4_4_ ^ (uint)plStack_b8 ^
                                     (uint)lStack_b0) & *(int *)(param_1 + 0x248) - 1U) * 4),
             plVar5 = plStack_b8, lVar6 = lStack_b0, iVar14 != -1)) {
            do {
              plVar7 = (longlong *)((longlong)iVar14 * 0x20 + *(longlong *)(param_1 + 0x250));
              if (((longlong *)*plVar7 == plStack_b8) && (plVar7[1] == lStack_b0)) {
                plVar5 = plStack_b8;
                lVar6 = lStack_b0;
                if ((plVar7[3] != 0) &&
                   (uStack_80 = plStack_b8, uStack_78 = lStack_b0,
                   iVar14 = FUN_1808cc190(plVar7[3],param_2), plVar5 = uStack_80, lVar6 = uStack_78,
                   iVar14 != 0)) goto FUN_1808c0723;
                break;
              }
              iVar14 = (int)plVar7[2];
              plVar5 = plStack_b8;
              lVar6 = lStack_b0;
            } while (iVar14 != -1);
          }
          uStack_78 = lVar6;
          uStack_80 = plVar5;
        } while ((iVar3 != -1) &&
                (iVar3 = *(int *)(plVar9[2] + 0x10 + (longlong)iVar3 * 0x18), iVar3 != -1));
        iVar3 = iVar15 + 1;
        bVar16 = iVar15 != -1;
        iVar15 = 0;
        if (bVar16) {
          iVar15 = iVar3;
        }
        if (iVar15 != (int)plVar9[1]) {
          lVar6 = (longlong)iVar15;
          do {
            if (*(int *)(*plVar9 + lVar6 * 4) != -1) {
              iVar3 = *(int *)(*plVar9 + (longlong)iVar15 * 4);
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
    uStack_d0 = 0xffffffffffffffff;
    plStack_d8 = plVar12 + 10;
    aiStack_c8[0] = -1;
    if (plVar12 == (longlong *)0x0) {
      plStack_d8 = (longlong *)0x0;
    }
    FUN_1808549c0(plStack_d8,&uStack_d0,aiStack_c8);
    iStack_bc = aiStack_c8[0];
    if (aiStack_c8[0] != -1) {
      iStack_c0 = (int)uStack_d0;
      do {
        do {
          iVar3 = iStack_c0;
          plVar12 = (longlong *)0x0;
          if (iStack_bc == -1) {
            puVar10 = (undefined8 *)FUN_180847820();
            puVar8 = (uint *)&uStack_90;
            uStack_90 = (longlong *)*puVar10;
            uStack_88 = puVar10[1];
          }
          else {
            puVar10 = (undefined8 *)(plStack_d8[2] + (longlong)iStack_bc * 0x18);
            puVar8 = (uint *)&uStack_80;
            uStack_80 = (longlong *)*puVar10;
            uStack_78 = puVar10[1];
          }
          plStack_b8 = *(longlong **)puVar8;
          uVar1 = puVar8[2];
          lStack_b0 = *(longlong *)(puVar8 + 2);
          if (((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(param_1 + 0x70) != 0)) &&
             (iVar15 = *(int *)(*(longlong *)(param_1 + 0x68) +
                               (longlong)
                               (int)((*puVar8 ^ puVar8[1] ^ uVar1 ^ puVar8[3]) &
                                    *(int *)(param_1 + 0x70) - 1U) * 4), iVar15 != -1)) {
            do {
              plVar9 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0x78));
              if (((longlong *)*plVar9 == plStack_b8) && (plVar9[1] == lStack_b0)) {
                plVar9 = (longlong *)plVar9[3];
                if (plVar9 != (longlong *)0x0) goto LAB_1808c01ad;
                break;
              }
              iVar15 = (int)plVar9[2];
            } while (iVar15 != -1);
          }
          if (((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
             (iVar15 = *(int *)(*(longlong *)(param_1 + 0x38) +
                               (longlong)
                               (int)((*puVar8 ^ puVar8[1] ^ uVar1 ^ puVar8[3]) &
                                    *(int *)(param_1 + 0x40) - 1U) * 4), iVar15 != -1)) {
            do {
              plVar9 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0x48));
              if (((longlong *)*plVar9 == plStack_b8) && (plVar9[1] == lStack_b0)) {
                plVar12 = (longlong *)plVar9[3];
                break;
              }
              iVar15 = (int)plVar9[2];
            } while (iVar15 != -1);
          }
          plVar9 = plVar12;
          param_2 = puStack_a0;
          if (plVar12 != (longlong *)0x0) {
LAB_1808c01ad:
            lVar6 = plVar9[10];
            if (lVar6 != 0) {
              plStack_b8 = (longlong *)
                           (**(code **)(*(longlong *)*puStack_a0 + 0x288))
                                     ((longlong *)*puStack_a0,lVar6 + 0x10,
                                      CONCAT71((int7)((ulonglong)lStack_b0 >> 8),1));
              if (plStack_b8 == (longlong *)0x0) {
                uStack_e0 = (uint)*(byte *)(lVar6 + 0x1f);
                uStack_e8 = (uint)*(byte *)(lVar6 + 0x1e);
                uStack_f0 = (uint)*(byte *)(lVar6 + 0x1d);
                uStack_f8 = (uint)*(byte *)(lVar6 + 0x1c);
                uStack_100 = (uint)*(byte *)(lVar6 + 0x1b);
                uStack_108 = (uint)*(byte *)(lVar6 + 0x1a);
                uStack_110 = (uint)*(byte *)(lVar6 + 0x19);
                uStack_118 = (uint)*(byte *)(lVar6 + 0x18);
                uStack_120 = (uint)*(ushort *)(lVar6 + 0x16);
                uStack_128 = (uint)*(ushort *)(lVar6 + 0x14);
                    // WARNING: Subroutine does not return
                FUN_18076b390(auStack_68,0x27,&UNK_180958180,*(undefined4 *)(lVar6 + 0x10));
              }
              plVar9[10] = (longlong)plStack_b8;
            }
            lStack_b0 = -1;
            aiStack_a8[0] = -1;
            plStack_b8 = plVar9;
            FUN_1807d1650(plVar9,&lStack_b0,aiStack_a8);
            param_2 = puStack_a0;
            plVar12 = plStack_b8;
            if (aiStack_a8[0] != -1) {
              iVar15 = aiStack_a8[0];
              iVar14 = (int)lStack_b0;
              do {
                iVar13 = FUN_180860690(*(undefined8 *)(plVar12[2] + 8 + (longlong)iVar15 * 0x10),
                                       param_2);
                if (iVar13 != 0) goto FUN_1808c0723;
                if ((iVar15 == -1) ||
                   (iVar15 = *(int *)(plVar12[2] + 4 + (longlong)iVar15 * 0x10), iVar15 == -1)) {
                  iVar15 = iVar14 + 1;
                  bVar16 = iVar14 != -1;
                  iVar14 = 0;
                  if (bVar16) {
                    iVar14 = iVar15;
                  }
                  if (iVar14 != (int)plVar12[1]) {
                    lVar6 = (longlong)iVar14;
                    do {
                      if (*(int *)(*plVar12 + lVar6 * 4) != -1) {
                        iVar15 = *(int *)(*plVar12 + (longlong)iVar14 * 4);
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
                (iStack_bc = *(int *)(plStack_d8[2] + 0x10 + (longlong)iStack_bc * 0x18),
                iStack_c0 = iVar3, iStack_bc != -1));
        iStack_c0 = 0;
        if (iVar3 != -1) {
          iStack_c0 = iVar3 + 1;
        }
        if (iStack_c0 != (int)plStack_d8[1]) {
          lVar6 = (longlong)iStack_c0;
          do {
            if (*(int *)(*plStack_d8 + lVar6 * 4) != -1) {
              iStack_bc = *(int *)(*plStack_d8 + (longlong)iStack_c0 * 4);
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
    plVar7 = (longlong *)0x0;
    plVar9 = (longlong *)(lStack_98 + 0x28);
    plVar5 = (longlong *)(*(longlong *)(lStack_98 + 0x28) + -0x18);
    if (*(longlong *)(lStack_98 + 0x28) == 0) {
      plVar5 = plVar7;
    }
    plVar2 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      plVar2 = plVar5 + 3;
    }
    while (plVar2 != plVar9) {
      plVar5 = plVar2 + -3;
      if (plVar2 == (longlong *)0x0) {
        plVar5 = plVar7;
      }
      iVar3 = FUN_1808d6650(plVar5,param_2,lVar6 + 0x290);
      if (iVar3 != 0) goto FUN_1808c0723;
      if (plVar2 == plVar9) break;
      plVar5 = (longlong *)(*plVar2 + -0x18);
      if (*plVar2 == 0) {
        plVar5 = plVar7;
      }
      plVar2 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        plVar2 = plVar5 + 3;
      }
    }
    iVar3 = FUN_1808bfa10(lVar6,param_2);
    if ((iVar3 == 0) && (iVar3 = FUN_1808d3ee0(lVar6 + 0x338,param_2), iVar3 == 0)) {
      uStack_d0 = 0xffffffffffffffff;
      aiStack_c8[0] = -1;
      plStack_d8 = plVar12 + 0xf;
      if (plVar12 == (longlong *)0x0) {
        plStack_d8 = plVar7;
      }
      FUN_1808549c0(plStack_d8,&uStack_d0,aiStack_c8);
      plVar12 = plStack_d8;
      if (aiStack_c8[0] != -1) {
        iVar3 = aiStack_c8[0];
        iVar15 = (int)uStack_d0;
        do {
          do {
            puVar10 = (undefined8 *)(plVar12[2] + (longlong)iVar3 * 0x18);
            plStack_b8 = (longlong *)*puVar10;
            lStack_b0 = puVar10[1];
            uStack_80._0_4_ = (uint)plStack_b8;
            uStack_80._4_4_ = (uint)((ulonglong)plStack_b8 >> 0x20);
            uStack_78._4_4_ = (uint)((ulonglong)lStack_b0 >> 0x20);
            uStack_78 = lStack_b0;
            if (((*(int *)(lVar6 + 0x22c) != 0) && (*(int *)(lVar6 + 0x210) != 0)) &&
               (iVar14 = *(int *)(*(longlong *)(lVar6 + 0x208) +
                                 (longlong)
                                 (int)(((uint)uStack_80 ^ uStack_80._4_4_ ^ (uint)lStack_b0 ^
                                       uStack_78._4_4_) & *(int *)(lVar6 + 0x210) - 1U) * 4),
               iVar14 != -1)) {
              do {
                puVar10 = (undefined8 *)((longlong)iVar14 * 0x20 + *(longlong *)(lVar6 + 0x218));
                if (((longlong *)*puVar10 == plStack_b8) && (puVar10[1] == lStack_b0)) {
                  plVar9 = (longlong *)puVar10[3];
                  if (plVar9 != (longlong *)0x0) goto LAB_1808c05ce;
                  break;
                }
                iVar14 = *(int *)(puVar10 + 2);
              } while (iVar14 != -1);
            }
            if (((*(int *)(lVar6 + 0x1fc) != 0) && (*(int *)(lVar6 + 0x1e0) != 0)) &&
               (iVar14 = *(int *)(*(longlong *)(lVar6 + 0x1d8) +
                                 (longlong)
                                 (int)(((uint)uStack_80 ^ uStack_80._4_4_ ^ (uint)lStack_b0 ^
                                       uStack_78._4_4_) & *(int *)(lVar6 + 0x1e0) - 1U) * 4),
               iVar14 != -1)) {
              do {
                puVar10 = (undefined8 *)((longlong)iVar14 * 0x20 + *(longlong *)(lVar6 + 0x1e8));
                if (((longlong *)*puVar10 == plStack_b8) && (puVar10[1] == lStack_b0)) {
                  plVar9 = (longlong *)puVar10[3];
                  goto LAB_1808c05c5;
                }
                iVar14 = *(int *)(puVar10 + 2);
              } while (iVar14 != -1);
            }
            plVar9 = (longlong *)0x0;
LAB_1808c05c5:
            plVar5 = plStack_b8;
            if (plVar9 != (longlong *)0x0) {
LAB_1808c05ce:
              uStack_d0 = 0xffffffffffffffff;
              aiStack_c8[0] = -1;
              plStack_d8 = plVar9;
              uVar1 = (uint)uStack_80;
              uStack_80 = plStack_b8;
              FUN_1807d1650(uVar1,&uStack_d0,aiStack_c8);
              plVar9 = plStack_d8;
              plVar5 = uStack_80;
              if (aiStack_c8[0] != -1) {
                iVar14 = aiStack_c8[0];
                iVar13 = (int)uStack_d0;
                do {
                  do {
                    iVar4 = FUN_1808c3980(*(undefined8 *)(plVar9[2] + 8 + (longlong)iVar14 * 0x10));
                    if (iVar4 != 0) goto FUN_1808c0723;
                  } while ((iVar14 != -1) &&
                          (iVar14 = *(int *)(plVar9[2] + 4 + (longlong)iVar14 * 0x10), iVar14 != -1)
                          );
                  iVar14 = iVar13 + 1;
                  bVar16 = iVar13 != -1;
                  iVar13 = 0;
                  if (bVar16) {
                    iVar13 = iVar14;
                  }
                  if (iVar13 != (int)plVar9[1]) {
                    lVar6 = (longlong)iVar13;
                    do {
                      if (*(int *)(*plVar9 + lVar6 * 4) != -1) {
                        iVar14 = *(int *)(*plVar9 + (longlong)iVar13 * 4);
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
                  plVar5 = uStack_80;
                } while (iVar14 != -1);
              }
            }
            uStack_80 = plVar5;
          } while ((iVar3 != -1) &&
                  (iVar3 = *(int *)(plVar12[2] + 0x10 + (longlong)iVar3 * 0x18), iVar3 != -1));
          iVar3 = iVar15 + 1;
          bVar16 = iVar15 != -1;
          iVar15 = 0;
          if (bVar16) {
            iVar15 = iVar3;
          }
          if (iVar15 != (int)plVar12[1]) {
            lVar11 = (longlong)iVar15;
            do {
              if (*(int *)(*plVar12 + lVar11 * 4) != -1) {
                iVar3 = *(int *)(*plVar12 + (longlong)iVar15 * 4);
                goto LAB_1808c06de;
              }
              iVar15 = iVar15 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != (int)plVar12[1]);
          }
          iVar3 = -1;
          iVar15 = iVar3;
LAB_1808c06de:
          param_2 = puStack_a0;
        } while (iVar3 != -1);
      }
      FUN_1808d8820(lVar6 + 0x2c8,param_2);
    }
  }
FUN_1808c0723:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_148);
}






