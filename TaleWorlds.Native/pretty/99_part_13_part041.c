#include "TaleWorlds.Native.Split.h"

// 99_part_13_part041.c - 3 个函数

// 函数: void FUN_1808bfc22(void)
void FUN_1808bfc22(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int iVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int iVar16;
  int iVar17;
  int64_t unaff_RBP;
  int64_t unaff_R13;
  int64_t lVar18;
  int64_t unaff_R14;
  int iVar19;
  bool bVar20;
  int64_t *plStack0000000000000070;
  int iStack0000000000000078;
  
  plVar12 = (int64_t *)(unaff_R13 + 8);
  *(int64_t **)(unaff_RBP + -0x28) = plVar12;
  _iStack0000000000000078 = 0xffffffffffffffff;
  *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
  plStack0000000000000070 = plVar12;
  FUN_1808549c0(plVar12,&stack0x00000078,unaff_RBP + -0x80);
  plVar15 = plStack0000000000000070;
  iVar7 = *(int *)(unaff_RBP + -0x80);
  if (iVar7 != -1) {
    iVar19 = iStack0000000000000078;
    do {
      do {
        plVar12 = (int64_t *)0x0;
        iVar17 = *(int *)(unaff_R14 + 0x15c);
        puVar10 = (uint64_t *)(plVar15[2] + (int64_t)iVar7 * 0x18);
        uVar4 = puVar10[1];
        *(uint64_t *)(unaff_RBP + -0x48) = *puVar10;
        *(uint64_t *)(unaff_RBP + -0x40) = uVar4;
        *(int32_t *)(unaff_RBP + -0x70) = *(int32_t *)(unaff_RBP + -0x48);
        *(int32_t *)(unaff_RBP + -0x6c) = *(int32_t *)(unaff_RBP + -0x44);
        *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBP + -0x40);
        *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + -0x3c);
        lVar9 = *(int64_t *)(unaff_RBP + -0x68);
        lVar13 = *(int64_t *)(unaff_RBP + -0x70);
        if (((iVar17 != 0) && (*(int *)(unaff_R14 + 0x140) != 0)) &&
           (iVar17 = *(int *)(*(int64_t *)(unaff_R14 + 0x138) +
                             (int64_t)
                             (int)(((uint)lVar13 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar9 ^
                                   *(uint *)(unaff_RBP + -100)) & *(int *)(unaff_R14 + 0x140) - 1U)
                             * 4), iVar17 != -1)) {
          do {
            plVar8 = (int64_t *)((int64_t)iVar17 * 0x20 + *(int64_t *)(unaff_R14 + 0x148));
            if ((*plVar8 == lVar13) && (plVar8[1] == lVar9)) {
              plStack0000000000000070 = (int64_t *)plVar8[3];
              if (plStack0000000000000070 != (int64_t *)0x0) goto LAB_1808bfd9d;
              break;
            }
            iVar17 = (int)plVar8[2];
          } while (iVar17 != -1);
        }
        if (((*(int *)(unaff_R14 + 300) != 0) && (*(int *)(unaff_R14 + 0x110) != 0)) &&
           (iVar17 = *(int *)(*(int64_t *)(unaff_R14 + 0x108) +
                             (int64_t)
                             (int)(((uint)lVar13 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar9 ^
                                   *(uint *)(unaff_RBP + -100)) & *(int *)(unaff_R14 + 0x110) - 1U)
                             * 4), iVar17 != -1)) {
          do {
            plVar8 = (int64_t *)((int64_t)iVar17 * 0x20 + *(int64_t *)(unaff_R14 + 0x118));
            if ((*plVar8 == lVar13) && (plVar8[1] == lVar9)) {
              plVar12 = (int64_t *)plVar8[3];
              break;
            }
            iVar17 = (int)plVar8[2];
          } while (iVar17 != -1);
        }
        plStack0000000000000070 = plVar12;
        if (plVar12 != (int64_t *)0x0) {
LAB_1808bfd9d:
          _iStack0000000000000078 = 0xffffffffffffffff;
          *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
          FUN_1807d1650(*(int32_t *)(unaff_RBP + -0x48),&stack0x00000078,unaff_RBP + -0x80);
          plVar12 = plStack0000000000000070;
          iVar17 = *(int *)(unaff_RBP + -0x80);
          if (iVar17 != -1) {
            iVar16 = iStack0000000000000078;
            do {
              do {
                iVar6 = FUN_180852090(*(uint64_t *)(plVar12[2] + 8 + (int64_t)iVar17 * 0x10),
                                      *(uint64_t *)(unaff_RBP + -0x58));
                if (iVar6 != 0) goto LAB_1808c06fb;
              } while ((iVar17 != -1) &&
                      (iVar17 = *(int *)(plVar12[2] + 4 + (int64_t)iVar17 * 0x10), iVar17 != -1));
              iVar17 = iVar16 + 1;
              bVar20 = iVar16 != -1;
              iVar16 = 0;
              if (bVar20) {
                iVar16 = iVar17;
              }
              if (iVar16 != (int)plVar12[1]) {
                lVar9 = (int64_t)iVar16;
                do {
                  if (*(int *)(*plVar12 + lVar9 * 4) != -1) {
                    iVar17 = *(int *)(*plVar12 + (int64_t)iVar16 * 4);
                    goto LAB_1808bfe4b;
                  }
                  iVar16 = iVar16 + 1;
                  lVar9 = lVar9 + 1;
                } while (lVar9 != (int)plVar12[1]);
              }
              iVar17 = -1;
              iVar16 = iVar17;
LAB_1808bfe4b:
            } while (iVar17 != -1);
            unaff_R14 = *(int64_t *)(unaff_RBP + -0x50);
          }
        }
      } while ((iVar7 != -1) &&
              (iVar7 = *(int *)(plVar15[2] + 0x10 + (int64_t)iVar7 * 0x18), iVar7 != -1));
      iVar7 = iVar19 + 1;
      bVar20 = iVar19 != -1;
      iVar19 = 0;
      if (bVar20) {
        iVar19 = iVar7;
      }
      if (iVar19 != (int)plVar15[1]) {
        lVar9 = (int64_t)iVar19;
        do {
          if (*(int *)(*plVar15 + lVar9 * 4) != -1) {
            iVar7 = *(int *)(*plVar15 + (int64_t)iVar19 * 4);
            goto LAB_1808bfebe;
          }
          iVar19 = iVar19 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != (int)plVar15[1]);
      }
      iVar7 = -1;
      iVar19 = iVar7;
LAB_1808bfebe:
    } while (iVar7 != -1);
    plVar12 = *(int64_t **)(unaff_RBP + -0x28);
    unaff_R13 = *(int64_t *)(unaff_RBP + -0x58);
  }
  _iStack0000000000000078 = 0xffffffffffffffff;
  plStack0000000000000070 = plVar12 + 5;
  *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
  if (plVar12 == (int64_t *)0x0) {
    plStack0000000000000070 = (int64_t *)0x0;
  }
  FUN_1808549c0(plStack0000000000000070,&stack0x00000078,unaff_RBP + -0x80);
  plVar15 = plStack0000000000000070;
  iVar7 = *(int *)(unaff_RBP + -0x80);
  if (iVar7 != -1) {
    iVar19 = iStack0000000000000078;
    do {
      do {
        puVar10 = (uint64_t *)(plVar15[2] + (int64_t)iVar7 * 0x18);
        uVar4 = puVar10[1];
        *(uint64_t *)(unaff_RBP + -0x38) = *puVar10;
        *(uint64_t *)(unaff_RBP + -0x30) = uVar4;
        *(int32_t *)(unaff_RBP + -0x70) = *(int32_t *)(unaff_RBP + -0x38);
        *(int32_t *)(unaff_RBP + -0x6c) = *(int32_t *)(unaff_RBP + -0x34);
        *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBP + -0x30);
        *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + -0x2c);
        if ((*(int *)(unaff_R14 + 0x264) != 0) && (*(int *)(unaff_R14 + 0x248) != 0)) {
          lVar9 = *(int64_t *)(unaff_RBP + -0x68);
          lVar13 = *(int64_t *)(unaff_RBP + -0x70);
          iVar17 = *(int *)(*(int64_t *)(unaff_R14 + 0x240) +
                           (int64_t)
                           (int)(((uint)((uint64_t)lVar9 >> 0x20) ^
                                  (uint)((uint64_t)lVar13 >> 0x20) ^ (uint)lVar13 ^ (uint)lVar9) &
                                *(int *)(unaff_R14 + 0x248) - 1U) * 4);
          if (iVar17 != -1) {
            do {
              plVar8 = (int64_t *)((int64_t)iVar17 * 0x20 + *(int64_t *)(unaff_R14 + 0x250));
              if ((*plVar8 == lVar13) && (plVar8[1] == lVar9)) {
                if ((plVar8[3] != 0) && (iVar17 = FUN_1808cc190(plVar8[3],unaff_R13), iVar17 != 0))
                goto LAB_1808c06fb;
                break;
              }
              iVar17 = (int)plVar8[2];
            } while (iVar17 != -1);
          }
        }
      } while ((iVar7 != -1) &&
              (iVar7 = *(int *)(plVar15[2] + 0x10 + (int64_t)iVar7 * 0x18), iVar7 != -1));
      iVar7 = iVar19 + 1;
      bVar20 = iVar19 != -1;
      iVar19 = 0;
      if (bVar20) {
        iVar19 = iVar7;
      }
      if (iVar19 != (int)plVar15[1]) {
        lVar9 = (int64_t)iVar19;
        do {
          if (*(int *)(*plVar15 + lVar9 * 4) != -1) {
            iVar7 = *(int *)(*plVar15 + (int64_t)iVar19 * 4);
            goto LAB_1808c003c;
          }
          iVar19 = iVar19 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != (int)plVar15[1]);
      }
      iVar7 = -1;
      iVar19 = iVar7;
LAB_1808c003c:
    } while (iVar7 != -1);
  }
  _iStack0000000000000078 = 0xffffffffffffffff;
  plStack0000000000000070 = plVar12 + 10;
  *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
  if (plVar12 == (int64_t *)0x0) {
    plStack0000000000000070 = (int64_t *)0x0;
  }
  FUN_1808549c0(plStack0000000000000070,&stack0x00000078,unaff_RBP + -0x80);
  iVar7 = *(int *)(unaff_RBP + -0x80);
  *(int *)(unaff_RBP + -0x74) = iVar7;
  if (iVar7 != -1) {
    *(int *)(unaff_RBP + -0x78) = iStack0000000000000078;
    iVar19 = iStack0000000000000078;
    do {
      lVar9 = 0;
      if (iVar7 == -1) {
        puVar10 = (uint64_t *)FUN_180847820();
        uVar4 = puVar10[1];
        puVar11 = (int32_t *)(unaff_RBP + -0x48);
        *(uint64_t *)(unaff_RBP + -0x48) = *puVar10;
        *(uint64_t *)(unaff_RBP + -0x40) = uVar4;
      }
      else {
        puVar10 = (uint64_t *)(plStack0000000000000070[2] + (int64_t)iVar7 * 0x18);
        uVar4 = puVar10[1];
        puVar11 = (int32_t *)(unaff_RBP + -0x38);
        *(uint64_t *)(unaff_RBP + -0x38) = *puVar10;
        *(uint64_t *)(unaff_RBP + -0x30) = uVar4;
      }
      iVar7 = *(int *)(unaff_R14 + 0x8c);
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *(int32_t *)(unaff_RBP + -0x70) = *puVar11;
      *(int32_t *)(unaff_RBP + -0x6c) = uVar1;
      *(int32_t *)(unaff_RBP + -0x68) = uVar2;
      *(int32_t *)(unaff_RBP + -100) = uVar3;
      lVar13 = *(int64_t *)(unaff_RBP + -0x68);
      lVar14 = *(int64_t *)(unaff_RBP + -0x70);
      if (((iVar7 != 0) && (*(int *)(unaff_R14 + 0x70) != 0)) &&
         (iVar7 = *(int *)(*(int64_t *)(unaff_R14 + 0x68) +
                          (int64_t)
                          (int)(((uint)lVar14 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar13 ^
                                *(uint *)(unaff_RBP + -100)) & *(int *)(unaff_R14 + 0x70) - 1U) * 4)
         , iVar7 != -1)) {
        do {
          plVar12 = (int64_t *)((int64_t)iVar7 * 0x20 + *(int64_t *)(unaff_R14 + 0x78));
          if ((*plVar12 == lVar14) && (plVar12[1] == lVar13)) {
            lVar18 = plVar12[3];
            if (lVar18 != 0) goto LAB_1808c01ad;
            break;
          }
          iVar7 = (int)plVar12[2];
        } while (iVar7 != -1);
      }
      if (((*(int *)(unaff_R14 + 0x5c) != 0) && (*(int *)(unaff_R14 + 0x40) != 0)) &&
         (iVar7 = *(int *)(*(int64_t *)(unaff_R14 + 0x38) +
                          (int64_t)
                          (int)(((uint)lVar14 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar13 ^
                                *(uint *)(unaff_RBP + -100)) & *(int *)(unaff_R14 + 0x40) - 1U) * 4)
         , iVar7 != -1)) {
        do {
          plVar12 = (int64_t *)((int64_t)iVar7 * 0x20 + *(int64_t *)(unaff_R14 + 0x48));
          if ((*plVar12 == lVar14) && (plVar12[1] == lVar13)) {
            lVar9 = plVar12[3];
            break;
          }
          iVar7 = (int)plVar12[2];
        } while (iVar7 != -1);
      }
      lVar18 = lVar9;
      if (lVar9 == 0) {
        unaff_R13 = *(int64_t *)(unaff_RBP + -0x58);
      }
      else {
LAB_1808c01ad:
        lVar9 = *(int64_t *)(lVar18 + 0x50);
        if (lVar9 != 0) {
          lVar13 = (**(code **)(*(int64_t *)**(uint64_t **)(unaff_RBP + -0x58) + 0x288))
                             ((int64_t *)**(uint64_t **)(unaff_RBP + -0x58),lVar9 + 0x10,
                              CONCAT71((int7)((uint64_t)lVar13 >> 8),1));
          *(int64_t *)(unaff_RBP + -0x70) = lVar13;
          if (lVar13 == 0) {
                    // WARNING: Subroutine does not return
            FUN_18076b390(unaff_RBP + -0x20,0x27,&unknown_var_8960_ptr,*(int32_t *)(lVar9 + 0x10),
                          *(int16_t *)(lVar9 + 0x14));
          }
          *(int64_t *)(lVar18 + 0x50) = lVar13;
        }
        *(int64_t *)(unaff_RBP + -0x70) = lVar18;
        *(uint64_t *)(unaff_RBP + -0x68) = 0xffffffffffffffff;
        *(int32_t *)(unaff_RBP + -0x60) = 0xffffffff;
        FUN_1807d1650(lVar18,unaff_RBP + -0x68,unaff_RBP + -0x60);
        iVar7 = *(int *)(unaff_RBP + -0x60);
        unaff_R13 = *(int64_t *)(unaff_RBP + -0x58);
        if (iVar7 != -1) {
          plVar12 = *(int64_t **)(unaff_RBP + -0x70);
          iVar17 = *(int *)(unaff_RBP + -0x68);
          do {
            iVar16 = FUN_180860690(*(uint64_t *)(plVar12[2] + 8 + (int64_t)iVar7 * 0x10),
                                   unaff_R13);
            if (iVar16 != 0) goto LAB_1808c06fb;
            if ((iVar7 == -1) ||
               (iVar7 = *(int *)(plVar12[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 == -1)) {
              iVar7 = iVar17 + 1;
              bVar20 = iVar17 != -1;
              iVar17 = 0;
              if (bVar20) {
                iVar17 = iVar7;
              }
              if (iVar17 != (int)plVar12[1]) {
                lVar9 = (int64_t)iVar17;
                do {
                  if (*(int *)(*plVar12 + lVar9 * 4) != -1) {
                    iVar7 = *(int *)(*plVar12 + (int64_t)iVar17 * 4);
                    goto LAB_1808c032d;
                  }
                  iVar17 = iVar17 + 1;
                  lVar9 = lVar9 + 1;
                } while (lVar9 != (int)plVar12[1]);
              }
              iVar7 = -1;
              iVar17 = iVar7;
            }
LAB_1808c032d:
          } while (iVar7 != -1);
        }
      }
      *(int *)(unaff_RBP + -0x78) = iVar19;
      if (*(int *)(unaff_RBP + -0x74) == -1) {
LAB_1808c0367:
        iVar7 = iVar19 + 1;
        bVar20 = iVar19 != -1;
        iVar19 = 0;
        if (bVar20) {
          iVar19 = iVar7;
        }
        *(int *)(unaff_RBP + -0x78) = iVar19;
        lVar9 = plStack0000000000000070[1];
        if (iVar19 != (int)lVar9) {
          lVar13 = *plStack0000000000000070;
          lVar14 = (int64_t)iVar19;
          do {
            if (*(int *)(lVar13 + lVar14 * 4) != -1) {
              iVar7 = *(int *)(lVar13 + (int64_t)iVar19 * 4);
              goto LAB_1808c03b2;
            }
            iVar19 = iVar19 + 1;
            lVar14 = lVar14 + 1;
            *(int *)(unaff_RBP + -0x78) = iVar19;
          } while (lVar14 != (int)lVar9);
        }
        iVar7 = -1;
        *(int32_t *)(unaff_RBP + -0x78) = 0xffffffff;
        iVar19 = iVar7;
LAB_1808c03b2:
        *(int *)(unaff_RBP + -0x74) = iVar7;
        if (iVar7 == -1) goto LAB_1808c03cb;
      }
      else {
        iVar7 = *(int *)(plStack0000000000000070[2] + 0x10 +
                        (int64_t)*(int *)(unaff_RBP + -0x74) * 0x18);
        *(int *)(unaff_RBP + -0x74) = iVar7;
        if (iVar7 == -1) goto LAB_1808c0367;
      }
      unaff_R14 = *(int64_t *)(unaff_RBP + -0x50);
    } while( true );
  }
LAB_1808c03cf:
  plVar8 = (int64_t *)0x0;
  lVar9 = *(int64_t *)(unaff_RBP + -0x50);
  plVar15 = (int64_t *)(*(int64_t *)(lVar9 + 0x28) + -0x18);
  if (*(int64_t *)(lVar9 + 0x28) == 0) {
    plVar15 = plVar8;
  }
  plVar5 = plVar8;
  if (plVar15 != (int64_t *)0x0) {
    plVar5 = plVar15 + 3;
  }
  while (plVar5 != (int64_t *)(lVar9 + 0x28)) {
    plVar15 = plVar5 + -3;
    if (plVar5 == (int64_t *)0x0) {
      plVar15 = plVar8;
    }
    iVar7 = FUN_1808d6650(plVar15,unaff_R13,lVar9 + 0x290);
    if (iVar7 != 0) goto LAB_1808c06fb;
    if (plVar5 == (int64_t *)(lVar9 + 0x28)) break;
    plVar15 = (int64_t *)(*plVar5 + -0x18);
    if (*plVar5 == 0) {
      plVar15 = plVar8;
    }
    plVar5 = plVar8;
    if (plVar15 != (int64_t *)0x0) {
      plVar5 = plVar15 + 3;
    }
  }
  iVar7 = FUN_1808bfa10(lVar9,unaff_R13);
  if ((iVar7 == 0) && (iVar7 = FUN_1808d3ee0(lVar9 + 0x338,unaff_R13), iVar7 == 0)) {
    _iStack0000000000000078 = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
    plStack0000000000000070 = plVar12 + 0xf;
    if (plVar12 == (int64_t *)0x0) {
      plStack0000000000000070 = plVar8;
    }
    FUN_1808549c0(plStack0000000000000070,&stack0x00000078,unaff_RBP + -0x80);
    plVar12 = plStack0000000000000070;
    iVar7 = *(int *)(unaff_RBP + -0x80);
    if (iVar7 != -1) {
      iVar19 = iStack0000000000000078;
      do {
        do {
          iVar17 = *(int *)(lVar9 + 0x22c);
          puVar10 = (uint64_t *)(plVar12[2] + (int64_t)iVar7 * 0x18);
          uVar4 = puVar10[1];
          *(uint64_t *)(unaff_RBP + -0x38) = *puVar10;
          *(uint64_t *)(unaff_RBP + -0x30) = uVar4;
          *(int32_t *)(unaff_RBP + -0x70) = *(int32_t *)(unaff_RBP + -0x38);
          *(int32_t *)(unaff_RBP + -0x6c) = *(int32_t *)(unaff_RBP + -0x34);
          *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBP + -0x30);
          *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + -0x2c);
          lVar13 = *(int64_t *)(unaff_RBP + -0x68);
          lVar14 = *(int64_t *)(unaff_RBP + -0x70);
          if (((iVar17 != 0) && (*(int *)(lVar9 + 0x210) != 0)) &&
             (iVar17 = *(int *)(*(int64_t *)(lVar9 + 0x208) +
                               (int64_t)
                               (int)(((uint)lVar14 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar13 ^
                                     *(uint *)(unaff_RBP + -100)) & *(int *)(lVar9 + 0x210) - 1U) *
                               4), iVar17 != -1)) {
            do {
              plVar15 = (int64_t *)((int64_t)iVar17 * 0x20 + *(int64_t *)(lVar9 + 0x218));
              if ((*plVar15 == lVar14) && (plVar15[1] == lVar13)) {
                plVar15 = (int64_t *)plVar15[3];
                if (plVar15 != (int64_t *)0x0) goto LAB_1808c05ce;
                break;
              }
              iVar17 = (int)plVar15[2];
            } while (iVar17 != -1);
          }
          if (((*(int *)(lVar9 + 0x1fc) != 0) && (*(int *)(lVar9 + 0x1e0) != 0)) &&
             (iVar17 = *(int *)(*(int64_t *)(lVar9 + 0x1d8) +
                               (int64_t)
                               (int)(((uint)lVar14 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar13 ^
                                     *(uint *)(unaff_RBP + -100)) & *(int *)(lVar9 + 0x1e0) - 1U) *
                               4), iVar17 != -1)) {
            do {
              plVar15 = (int64_t *)((int64_t)iVar17 * 0x20 + *(int64_t *)(lVar9 + 0x1e8));
              if ((*plVar15 == lVar14) && (plVar15[1] == lVar13)) {
                plVar15 = (int64_t *)plVar15[3];
                goto LAB_1808c05c5;
              }
              iVar17 = (int)plVar15[2];
            } while (iVar17 != -1);
          }
          plVar15 = (int64_t *)0x0;
LAB_1808c05c5:
          if (plVar15 != (int64_t *)0x0) {
LAB_1808c05ce:
            _iStack0000000000000078 = 0xffffffffffffffff;
            *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
            plStack0000000000000070 = plVar15;
            FUN_1807d1650(*(int32_t *)(unaff_RBP + -0x38),&stack0x00000078,unaff_RBP + -0x80);
            plVar15 = plStack0000000000000070;
            iVar17 = *(int *)(unaff_RBP + -0x80);
            if (iVar17 != -1) {
              iVar16 = iStack0000000000000078;
              do {
                do {
                  iVar6 = FUN_1808c3980(*(uint64_t *)(plVar15[2] + 8 + (int64_t)iVar17 * 0x10));
                  if (iVar6 != 0) goto LAB_1808c06fb;
                } while ((iVar17 != -1) &&
                        (iVar17 = *(int *)(plVar15[2] + 4 + (int64_t)iVar17 * 0x10), iVar17 != -1))
                ;
                iVar17 = iVar16 + 1;
                bVar20 = iVar16 != -1;
                iVar16 = 0;
                if (bVar20) {
                  iVar16 = iVar17;
                }
                if (iVar16 != (int)plVar15[1]) {
                  lVar9 = (int64_t)iVar16;
                  do {
                    if (*(int *)(*plVar15 + lVar9 * 4) != -1) {
                      iVar17 = *(int *)(*plVar15 + (int64_t)iVar16 * 4);
                      goto LAB_1808c066c;
                    }
                    iVar16 = iVar16 + 1;
                    lVar9 = lVar9 + 1;
                  } while (lVar9 != (int)plVar15[1]);
                }
                iVar17 = -1;
                iVar16 = iVar17;
LAB_1808c066c:
              } while (iVar17 != -1);
              lVar9 = *(int64_t *)(unaff_RBP + -0x50);
            }
          }
        } while ((iVar7 != -1) &&
                (iVar7 = *(int *)(plVar12[2] + 0x10 + (int64_t)iVar7 * 0x18), iVar7 != -1));
        iVar7 = iVar19 + 1;
        bVar20 = iVar19 != -1;
        iVar19 = 0;
        if (bVar20) {
          iVar19 = iVar7;
        }
        if (iVar19 != (int)plVar12[1]) {
          lVar13 = (int64_t)iVar19;
          do {
            if (*(int *)(*plVar12 + lVar13 * 4) != -1) {
              iVar7 = *(int *)(*plVar12 + (int64_t)iVar19 * 4);
              goto LAB_1808c06de;
            }
            iVar19 = iVar19 + 1;
            lVar13 = lVar13 + 1;
          } while (lVar13 != (int)plVar12[1]);
        }
        iVar7 = -1;
        iVar19 = iVar7;
LAB_1808c06de:
      } while (iVar7 != -1);
      unaff_R13 = *(int64_t *)(unaff_RBP + -0x58);
    }
    FUN_1808d8820(lVar9 + 0x2c8,unaff_R13);
  }
LAB_1808c06fb:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 8) ^ (uint64_t)&stack0x00000000);
LAB_1808c03cb:
  plVar12 = *(int64_t **)(unaff_RBP + -0x28);
  goto LAB_1808c03cf;
}






// 函数: void FUN_1808c0723(void)
void FUN_1808c0723(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 8) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1808c073c(void)
void FUN_1808c073c(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *in_RAX;
  int iVar7;
  int iVar8;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_R12D;
  int64_t *unaff_R13;
  int unaff_R15D;
  bool bVar9;
  int iStack0000000000000078;
  
code_r0x0001808c073c:
  plVar5 = (int64_t *)in_RAX[3];
LAB_1808c05c5:
  if (plVar5 == (int64_t *)0x0) goto LAB_1808c0675;
  do {
    _iStack0000000000000078 = 0xffffffffffffffff;
    *(int32_t *)(unaff_RBP + -0x80) = 0xffffffff;
    FUN_1807d1650(plVar5,&stack0x00000078,unaff_RBP + -0x80);
    iVar7 = *(int *)(unaff_RBP + -0x80);
    if (iVar7 != -1) {
      iVar8 = iStack0000000000000078;
      do {
        do {
          iVar4 = FUN_1808c3980(*(uint64_t *)(plVar5[2] + 8 + (int64_t)iVar7 * 0x10));
          if (iVar4 != 0) goto LAB_1808c06fb;
        } while ((iVar7 != -1) &&
                (iVar7 = *(int *)(plVar5[2] + 4 + (int64_t)iVar7 * 0x10), iVar7 != -1));
        iVar7 = iVar8 + 1;
        bVar9 = iVar8 != -1;
        iVar8 = 0;
        if (bVar9) {
          iVar8 = iVar7;
        }
        if (iVar8 != (int)plVar5[1]) {
          lVar6 = (int64_t)iVar8;
          do {
            if (*(int *)(*plVar5 + lVar6 * 4) != -1) {
              iVar7 = *(int *)(*plVar5 + (int64_t)iVar8 * 4);
              goto LAB_1808c066c;
            }
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != (int)plVar5[1]);
        }
        iVar7 = -1;
        iVar8 = iVar7;
LAB_1808c066c:
      } while (iVar7 != -1);
      unaff_RSI = *(int64_t *)(unaff_RBP + -0x50);
    }
LAB_1808c0675:
    if ((unaff_R12D == -1) ||
       (unaff_R12D = *(int *)(unaff_R13[2] + 0x10 + (int64_t)unaff_R12D * 0x18), unaff_R12D == -1))
    {
      iVar7 = unaff_R15D + 1;
      bVar9 = unaff_R15D != -1;
      unaff_R15D = 0;
      if (bVar9) {
        unaff_R15D = iVar7;
      }
      if (unaff_R15D != (int)unaff_R13[1]) {
        lVar6 = (int64_t)unaff_R15D;
        do {
          if (*(int *)(*unaff_R13 + lVar6 * 4) != -1) {
            unaff_R12D = *(int *)(*unaff_R13 + (int64_t)unaff_R15D * 4);
            goto LAB_1808c06de;
          }
          unaff_R15D = unaff_R15D + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 != (int)unaff_R13[1]);
      }
      unaff_R12D = -1;
      unaff_R15D = unaff_R12D;
LAB_1808c06de:
      if (unaff_R12D == -1) {
        FUN_1808d8820(unaff_RSI + 0x2c8,*(uint64_t *)(unaff_RBP + -0x58));
LAB_1808c06fb:
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 8) ^ (uint64_t)&stack0x00000000);
      }
    }
    iVar7 = *(int *)(unaff_RSI + 0x22c);
    puVar1 = (uint64_t *)(unaff_R13[2] + (int64_t)unaff_R12D * 0x18);
    uVar3 = puVar1[1];
    *(uint64_t *)(unaff_RBP + -0x38) = *puVar1;
    *(uint64_t *)(unaff_RBP + -0x30) = uVar3;
    *(int32_t *)(unaff_RBP + -0x70) = *(int32_t *)(unaff_RBP + -0x38);
    *(int32_t *)(unaff_RBP + -0x6c) = *(int32_t *)(unaff_RBP + -0x34);
    *(int32_t *)(unaff_RBP + -0x68) = *(int32_t *)(unaff_RBP + -0x30);
    *(int32_t *)(unaff_RBP + -100) = *(int32_t *)(unaff_RBP + -0x2c);
    lVar6 = *(int64_t *)(unaff_RBP + -0x68);
    lVar2 = *(int64_t *)(unaff_RBP + -0x70);
    if (((iVar7 == 0) || (*(int *)(unaff_RSI + 0x210) == 0)) ||
       (iVar7 = *(int *)(*(int64_t *)(unaff_RSI + 0x208) +
                        (int64_t)
                        (int)(((uint)lVar2 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar6 ^
                              *(uint *)(unaff_RBP + -100)) & *(int *)(unaff_RSI + 0x210) - 1U) * 4),
       iVar7 == -1)) break;
    while ((plVar5 = (int64_t *)((int64_t)iVar7 * 0x20 + *(int64_t *)(unaff_RSI + 0x218)),
           *plVar5 != lVar2 || (plVar5[1] != lVar6))) {
      iVar7 = (int)plVar5[2];
      if (iVar7 == -1) goto LAB_1808c0558;
    }
    plVar5 = (int64_t *)plVar5[3];
    if (plVar5 == (int64_t *)0x0) break;
  } while( true );
LAB_1808c0558:
  if (((*(int *)(unaff_RSI + 0x1fc) != 0) && (*(int *)(unaff_RSI + 0x1e0) != 0)) &&
     (iVar7 = *(int *)(*(int64_t *)(unaff_RSI + 0x1d8) +
                      (int64_t)
                      (int)(((uint)lVar2 ^ *(uint *)(unaff_RBP + -0x6c) ^ (uint)lVar6 ^
                            *(uint *)(unaff_RBP + -100)) & *(int *)(unaff_RSI + 0x1e0) - 1U) * 4),
     iVar7 != -1)) {
    do {
      in_RAX = (int64_t *)((int64_t)iVar7 * 0x20 + *(int64_t *)(unaff_RSI + 0x1e8));
      if ((*in_RAX == lVar2) && (in_RAX[1] == lVar6)) goto code_r0x0001808c073c;
      iVar7 = (int)in_RAX[2];
    } while (iVar7 != -1);
  }
  plVar5 = (int64_t *)0x0;
  goto LAB_1808c05c5;
}






