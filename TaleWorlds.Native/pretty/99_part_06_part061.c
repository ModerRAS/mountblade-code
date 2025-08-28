#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part061.c - 2 个函数
// 函数: void RenderingSystem_e3020(int64_t param_1)
void RenderingSystem_e3020(int64_t param_1)
{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t *plVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int iStackX_8;
  int iStackX_10;
  int iStack_74;
  int8_t stack_array_58 [24];
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(param_1 + 0x130);
  if (*(int64_t *)(param_1 + 400) != 0) {
    uVar15 = *(uint64_t *)(*(int64_t *)(param_1 + 400) + 0x14);
    iVar13 = 0;
    iVar11 = (int)uVar15;
    if (0 < iVar11) {
      iStack_74 = (int)((uint64_t)uVar15 >> 0x20);
      do {
        iStackX_10 = 0;
        if (0 < iStack_74) {
          do {
            lVar6 = *(int64_t *)(param_1 + 400);
            iStackX_8 = 0;
            if (0 < *(int *)(lVar6 + 0x78)) {
              plVar1 = (int64_t *)(param_1 + 0x60);
              do {
                plVar5 = *(int64_t **)(param_1 + 0x70);
                plVar3 = plVar5;
                plVar10 = plVar1;
                if (plVar5 == (int64_t *)0x0) {
LAB_1803e33c4:
                  puVar7 = *(uint64_t **)(param_1 + 0x138);
                  if (*(uint64_t **)(param_1 + 0x140) <= puVar7) {
                    puVar9 = *(uint64_t **)(param_1 + 0x130);
                    lVar6 = (int64_t)puVar7 - (int64_t)puVar9 >> 3;
                    if (lVar6 == 0) {
                      lVar6 = 1;
LAB_1803e3424:
                      puVar8 = (uint64_t *)
                               CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,
                                             *(int8_t *)(param_1 + 0x148));
                      puVar9 = *(uint64_t **)(param_1 + 0x130);
                      puVar7 = *(uint64_t **)(param_1 + 0x138);
                    }
                    else {
                      lVar6 = lVar6 * 2;
                      if (lVar6 != 0) goto LAB_1803e3424;
                      puVar8 = (uint64_t *)0x0;
                    }
                    if (puVar9 != puVar7) {
// WARNING: Subroutine does not return
                      memmove(puVar8,puVar9,(int64_t)puVar7 - (int64_t)puVar9);
                    }
                    uVar15 = 0xffffffffffffffff;
                    goto LAB_1803e3474;
                  }
                  *(uint64_t **)(param_1 + 0x138) = puVar7 + 1;
                  *puVar7 = 0xffffffffffffffff;
                }
                else {
                  do {
                    if (((int)plVar3[4] < iStackX_8) ||
                       (((int)plVar3[4] <= iStackX_8 &&
                        ((*(int *)((int64_t)plVar3 + 0x24) < iVar13 ||
                         ((*(int *)((int64_t)plVar3 + 0x24) <= iVar13 &&
                          ((int)plVar3[5] < iStackX_10)))))))) {
                      plVar4 = (int64_t *)*plVar3;
                      bVar2 = true;
                    }
                    else {
                      plVar4 = (int64_t *)plVar3[1];
                      bVar2 = false;
                    }
                    plVar12 = plVar3;
                    if (bVar2) {
                      plVar12 = plVar10;
                    }
                    plVar3 = plVar4;
                    plVar10 = plVar12;
                  } while (plVar4 != (int64_t *)0x0);
                  if (((plVar12 == plVar1) || (iStackX_8 < (int)plVar12[4])) ||
                     ((plVar3 = plVar1, iStackX_8 <= (int)plVar12[4] &&
                      ((iVar13 < *(int *)((int64_t)plVar12 + 0x24) ||
                       ((iVar13 <= *(int *)((int64_t)plVar12 + 0x24) &&
                        (iStackX_10 < (int)plVar12[5])))))))) goto LAB_1803e33c4;
                  while (plVar10 = plVar3, plVar5 != (int64_t *)0x0) {
                    if (((int)plVar5[4] < iStackX_8) ||
                       (((int)plVar5[4] <= iStackX_8 &&
                        ((*(int *)((int64_t)plVar5 + 0x24) < iVar13 ||
                         ((*(int *)((int64_t)plVar5 + 0x24) <= iVar13 &&
                          ((int)plVar5[5] < iStackX_10)))))))) {
                      plVar4 = (int64_t *)*plVar5;
                      bVar2 = true;
                    }
                    else {
                      plVar4 = (int64_t *)plVar5[1];
                      bVar2 = false;
                    }
                    plVar3 = plVar5;
                    plVar5 = plVar4;
                    if (bVar2) {
                      plVar3 = plVar10;
                    }
                  }
                  if (((plVar10 == plVar1) || (iStackX_8 < (int)plVar10[4])) ||
                     ((iStackX_8 <= (int)plVar10[4] &&
                      ((iVar13 < *(int *)((int64_t)plVar10 + 0x24) ||
                       ((iVar13 <= *(int *)((int64_t)plVar10 + 0x24) &&
                        (iStackX_10 < (int)plVar10[5])))))))) {
                    plVar5 = (int64_t *)*plVar1;
                    if ((plVar10 == plVar5) || (plVar10 == plVar1)) {
                      if ((*(int64_t *)(param_1 + 0x80) != 0) &&
                         ((plVar10 = plVar5, (int)plVar5[4] < iStackX_8 ||
                          (((int)plVar5[4] <= iStackX_8 &&
                           ((*(int *)((int64_t)plVar5 + 0x24) < iVar13 ||
                            ((*(int *)((int64_t)plVar5 + 0x24) <= iVar13 &&
                             ((int)plVar5[5] < iStackX_10)))))))))) {
LAB_1803e326f:
                        bVar2 = false;
                        goto LAB_1803e3271;
                      }
                    }
                    else {
                      plVar5 = (int64_t *)Function_7bfb2422(plVar10);
                      if ((((int)plVar10[4] < iStackX_8) ||
                          (((int)plVar10[4] <= iStackX_8 &&
                           ((*(int *)((int64_t)plVar10 + 0x24) < iVar13 ||
                            ((*(int *)((int64_t)plVar10 + 0x24) <= iVar13 &&
                             ((int)plVar10[5] < iStackX_10)))))))) &&
                         ((iStackX_8 < (int)plVar5[4] ||
                          ((iStackX_8 <= (int)plVar5[4] &&
                           ((iVar13 < *(int *)((int64_t)plVar5 + 0x24) ||
                            ((iVar13 <= *(int *)((int64_t)plVar5 + 0x24) &&
                             (iStackX_10 < (int)plVar5[5])))))))))) {
                        if (*plVar10 == 0) goto LAB_1803e326f;
                        bVar2 = true;
                        plVar10 = plVar5;
LAB_1803e3271:
                        if (plVar10 != (int64_t *)0x0) {
                          if ((((bVar2) || (plVar10 == plVar1)) || (iStackX_8 < (int)plVar10[4])) ||
                             ((iStackX_8 <= (int)plVar10[4] &&
                              ((iVar13 < *(int *)((int64_t)plVar10 + 0x24) ||
                               ((iVar13 <= *(int *)((int64_t)plVar10 + 0x24) &&
                                (iStackX_10 < (int)plVar10[5])))))))) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = 1;
                          }
                          lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(param_1 + 0x88))
                          ;
                          *(uint64_t *)(lVar6 + 0x20) = CONCAT44(iVar13,iStackX_8);
                          *(int *)(lVar6 + 0x28) = iStackX_10;
                          *(uint64_t *)(lVar6 + 0x2c) = 0;
// WARNING: Subroutine does not return
                          SystemStateController(lVar6,plVar10,plVar1,uVar15);
                        }
                      }
                    }
                    puVar7 = (uint64_t *)RenderingSystem_e8000(plVar1,stack_array_58);
                    plVar10 = (int64_t *)*puVar7;
                  }
                  uVar15 = *(uint64_t *)((int64_t)plVar10 + 0x2c);
                  puVar7 = *(uint64_t **)(param_1 + 0x138);
                  if (puVar7 < *(uint64_t **)(param_1 + 0x140)) {
                    *(uint64_t **)(param_1 + 0x138) = puVar7 + 1;
                    *puVar7 = uVar15;
                    goto LAB_1803e34ad;
                  }
                  puVar9 = *(uint64_t **)(param_1 + 0x130);
                  lVar6 = (int64_t)puVar7 - (int64_t)puVar9 >> 3;
                  if (lVar6 == 0) {
                    lVar6 = 1;
LAB_1803e336f:
                    puVar8 = (uint64_t *)
                             CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,*(int8_t *)(param_1 + 0x148)
                                          );
                    puVar9 = *(uint64_t **)(param_1 + 0x130);
                    puVar7 = *(uint64_t **)(param_1 + 0x138);
                  }
                  else {
                    lVar6 = lVar6 * 2;
                    if (lVar6 != 0) goto LAB_1803e336f;
                    puVar8 = (uint64_t *)0x0;
                  }
                  if (puVar9 != puVar7) {
// WARNING: Subroutine does not return
                    memmove(puVar8,puVar9,(int64_t)puVar7 - (int64_t)puVar9);
                  }
LAB_1803e3474:
                  *puVar8 = uVar15;
                  if (*(int64_t *)(param_1 + 0x130) != 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                  }
                  *(uint64_t **)(param_1 + 0x130) = puVar8;
                  *(uint64_t **)(param_1 + 0x140) = puVar8 + lVar6;
                  *(uint64_t **)(param_1 + 0x138) = puVar8 + 1;
                }
LAB_1803e34ad:
                lVar6 = *(int64_t *)(param_1 + 400);
                iStackX_8 = iStackX_8 + 1;
              } while (iStackX_8 < *(int *)(lVar6 + 0x78));
            }
            if (*(int *)(lVar6 + 0x78) < 0x10) {
              uVar14 = (uint64_t)(0x10 - *(int *)(lVar6 + 0x78));
              do {
                puVar7 = *(uint64_t **)(param_1 + 0x138);
                if (puVar7 < *(uint64_t **)(param_1 + 0x140)) {
                  *(uint64_t **)(param_1 + 0x138) = puVar7 + 1;
                  *puVar7 = 0xffffffffffffffff;
                }
                else {
                  puVar9 = *(uint64_t **)(param_1 + 0x130);
                  lVar6 = (int64_t)puVar7 - (int64_t)puVar9 >> 3;
                  if (lVar6 == 0) {
                    lVar6 = 1;
LAB_1803e353c:
                    puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8);
                    puVar9 = *(uint64_t **)(param_1 + 0x130);
                    puVar7 = *(uint64_t **)(param_1 + 0x138);
                  }
                  else {
                    lVar6 = lVar6 * 2;
                    if (lVar6 != 0) goto LAB_1803e353c;
                    puVar8 = (uint64_t *)0x0;
                  }
                  if (puVar9 != puVar7) {
// WARNING: Subroutine does not return
                    memmove(puVar8,puVar9,(int64_t)puVar7 - (int64_t)puVar9);
                  }
                  *puVar8 = 0xffffffffffffffff;
                  if (*(int64_t *)(param_1 + 0x130) != 0) {
// WARNING: Subroutine does not return
                    CoreMemoryPoolInitializer();
                  }
                  *(uint64_t **)(param_1 + 0x130) = puVar8;
                  *(uint64_t **)(param_1 + 0x140) = puVar8 + lVar6;
                  *(uint64_t **)(param_1 + 0x138) = puVar8 + 1;
                }
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            iStackX_10 = iStackX_10 + 1;
          } while (iStackX_10 < iStack_74);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar11);
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_e3052(void)
void RenderingSystem_e3052(void)
{
  int64_t *plVar1;
  bool bVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t unaff_RBX;
  int64_t *plVar11;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t *plVar12;
  int64_t in_R11;
  int iVar13;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t uVar14;
  int64_t unaff_R14;
  int iVar15;
  uint64_t unaff_R15;
  uint64_t uVar16;
  int iVar17;
  int iStack00000000000000b0;
  int iStack00000000000000b8;
  int32_t local_buffer_c0;
  int32_t local_buffer_c4;
  uint64_t local_buffer_c8;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R12;
  iVar13 = 0;
  if (0 < (int)unaff_RSI) {
    iVar17 = (int)((uint64_t)unaff_RSI >> 0x20);
    *(uint64_t *)(in_R11 + -0x18) = unaff_RBX;
    *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
    *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
    *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
    *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
    do {
      iStack00000000000000b8 = 0;
      if (0 < iVar17) {
        do {
          iVar3 = iStack00000000000000b8;
          lVar7 = *(int64_t *)(unaff_R14 + 400);
          iStack00000000000000b0 = 0;
          if (0 < *(int *)(lVar7 + 0x78)) {
            plVar1 = (int64_t *)(unaff_R14 + 0x60);
            do {
              iVar15 = iStack00000000000000b0;
              plVar6 = *(int64_t **)(unaff_R14 + 0x70);
              plVar4 = plVar6;
              plVar11 = plVar1;
              if (plVar6 == (int64_t *)0x0) {
LAB_1803e33c4:
                puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
                local_buffer_c8 = 0xffffffffffffffff;
                if (*(uint64_t **)(unaff_R14 + 0x140) <= puVar8) {
                  puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                  lVar7 = (int64_t)puVar8 - (int64_t)puVar10 >> 3;
                  if (lVar7 == 0) {
                    lVar7 = 1;
LAB_1803e3424:
                    puVar9 = (uint64_t *)
                             CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,
                                           *(int8_t *)(unaff_R14 + 0x148));
                    puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                    puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
                  }
                  else {
                    lVar7 = lVar7 * 2;
                    if (lVar7 != 0) goto LAB_1803e3424;
                    puVar9 = (uint64_t *)0x0;
                  }
                  uVar16 = local_buffer_c8;
                  if (puVar10 != puVar8) {
// WARNING: Subroutine does not return
                    memmove(puVar9,puVar10,(int64_t)puVar8 - (int64_t)puVar10);
                  }
                  goto LAB_1803e3474;
                }
                *(uint64_t **)(unaff_R14 + 0x138) = puVar8 + 1;
                *puVar8 = 0xffffffffffffffff;
              }
              else {
                do {
                  if (((int)plVar4[4] < iStack00000000000000b0) ||
                     (((int)plVar4[4] <= iStack00000000000000b0 &&
                      ((*(int *)((int64_t)plVar4 + 0x24) < iVar13 ||
                       ((*(int *)((int64_t)plVar4 + 0x24) <= iVar13 && ((int)plVar4[5] < iVar3)))))
                      ))) {
                    plVar5 = (int64_t *)*plVar4;
                    bVar2 = true;
                  }
                  else {
                    plVar5 = (int64_t *)plVar4[1];
                    bVar2 = false;
                  }
                  plVar12 = plVar4;
                  if (bVar2) {
                    plVar12 = plVar11;
                  }
                  plVar4 = plVar5;
                  plVar11 = plVar12;
                } while (plVar5 != (int64_t *)0x0);
                if (((plVar12 == plVar1) || (iStack00000000000000b0 < (int)plVar12[4])) ||
                   ((plVar4 = plVar1, iStack00000000000000b0 <= (int)plVar12[4] &&
                    ((iVar13 < *(int *)((int64_t)plVar12 + 0x24) ||
                     ((iVar13 <= *(int *)((int64_t)plVar12 + 0x24) && (iVar3 < (int)plVar12[5])))))
                    ))) goto LAB_1803e33c4;
                while (plVar11 = plVar4, plVar6 != (int64_t *)0x0) {
                  if (((int)plVar6[4] < iStack00000000000000b0) ||
                     (((int)plVar6[4] <= iStack00000000000000b0 &&
                      ((*(int *)((int64_t)plVar6 + 0x24) < iVar13 ||
                       ((*(int *)((int64_t)plVar6 + 0x24) <= iVar13 && ((int)plVar6[5] < iVar3)))))
                      ))) {
                    plVar5 = (int64_t *)*plVar6;
                    bVar2 = true;
                  }
                  else {
                    plVar5 = (int64_t *)plVar6[1];
                    bVar2 = false;
                  }
                  plVar4 = plVar6;
                  plVar6 = plVar5;
                  if (bVar2) {
                    plVar4 = plVar11;
                  }
                }
                if (((plVar11 == plVar1) || (iStack00000000000000b0 < (int)plVar11[4])) ||
                   ((iStack00000000000000b0 <= (int)plVar11[4] &&
                    ((iVar13 < *(int *)((int64_t)plVar11 + 0x24) ||
                     ((iVar13 <= *(int *)((int64_t)plVar11 + 0x24) && (iVar3 < (int)plVar11[5])))))
                    ))) {
                  plVar6 = (int64_t *)*plVar1;
                  if ((plVar11 == plVar6) || (plVar11 == plVar1)) {
                    if ((*(int64_t *)(unaff_R14 + 0x80) != 0) &&
                       ((plVar11 = plVar6, (int)plVar6[4] < iStack00000000000000b0 ||
                        (((int)plVar6[4] <= iStack00000000000000b0 &&
                         ((*(int *)((int64_t)plVar6 + 0x24) < iVar13 ||
                          ((*(int *)((int64_t)plVar6 + 0x24) <= iVar13 && ((int)plVar6[5] < iVar3))
                          )))))))) {
LAB_1803e326f:
                      bVar2 = false;
                      goto LAB_1803e3271;
                    }
                  }
                  else {
                    plVar6 = (int64_t *)Function_7bfb2422(plVar11);
                    if ((((int)plVar11[4] < iVar15) ||
                        (((int)plVar11[4] <= iVar15 &&
                         ((*(int *)((int64_t)plVar11 + 0x24) < iVar13 ||
                          ((*(int *)((int64_t)plVar11 + 0x24) <= iVar13 &&
                           ((int)plVar11[5] < iVar3)))))))) &&
                       ((iVar15 < (int)plVar6[4] ||
                        ((iVar15 <= (int)plVar6[4] &&
                         ((iVar13 < *(int *)((int64_t)plVar6 + 0x24) ||
                          ((iVar13 <= *(int *)((int64_t)plVar6 + 0x24) && (iVar3 < (int)plVar6[5]))
                          )))))))) {
                      if (*plVar11 == 0) goto LAB_1803e326f;
                      bVar2 = true;
                      plVar11 = plVar6;
LAB_1803e3271:
                      if (plVar11 != (int64_t *)0x0) {
                        if ((((bVar2) || (plVar11 == plVar1)) || (iVar15 < (int)plVar11[4])) ||
                           ((iVar15 <= (int)plVar11[4] &&
                            ((iVar13 < *(int *)((int64_t)plVar11 + 0x24) ||
                             ((iVar13 <= *(int *)((int64_t)plVar11 + 0x24) &&
                              (iVar3 < (int)plVar11[5])))))))) {
                          uVar16 = 0;
                        }
                        else {
                          uVar16 = 1;
                        }
                        lVar7 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(unaff_R14 + 0x88))
                        ;
                        *(uint64_t *)(lVar7 + 0x20) = CONCAT44(iVar13,iVar15);
                        *(int *)(lVar7 + 0x28) = iVar3;
                        *(uint64_t *)(lVar7 + 0x2c) = 0;
// WARNING: Subroutine does not return
                        SystemStateController(lVar7,plVar11,plVar1,uVar16);
                      }
                    }
                  }
                  puVar8 = (uint64_t *)RenderingSystem_e8000(plVar1,&local_buffer_00000050);
                  plVar11 = (int64_t *)*puVar8;
                }
                uVar16 = *(uint64_t *)((int64_t)plVar11 + 0x2c);
                puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
                local_buffer_c0 = (int32_t)uVar16;
                local_buffer_c4 = (int32_t)((uint64_t)uVar16 >> 0x20);
                if (puVar8 < *(uint64_t **)(unaff_R14 + 0x140)) {
                  *(uint64_t **)(unaff_R14 + 0x138) = puVar8 + 1;
                  *puVar8 = uVar16;
                  goto LAB_1803e34ad;
                }
                puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                lVar7 = (int64_t)puVar8 - (int64_t)puVar10 >> 3;
                if (lVar7 == 0) {
                  lVar7 = 1;
LAB_1803e336f:
                  puVar9 = (uint64_t *)
                           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(unaff_R14 + 0x148)
                                        );
                  puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                  puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
                }
                else {
                  lVar7 = lVar7 * 2;
                  if (lVar7 != 0) goto LAB_1803e336f;
                  puVar9 = (uint64_t *)0x0;
                }
                if (puVar10 != puVar8) {
// WARNING: Subroutine does not return
                  memmove(puVar9,puVar10,(int64_t)puVar8 - (int64_t)puVar10);
                }
                uVar16 = CONCAT44(local_buffer_c4,local_buffer_c0);
LAB_1803e3474:
                *puVar9 = uVar16;
                if (*(int64_t *)(unaff_R14 + 0x130) != 0) {
// WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                *(uint64_t **)(unaff_R14 + 0x130) = puVar9;
                *(uint64_t **)(unaff_R14 + 0x140) = puVar9 + lVar7;
                *(uint64_t **)(unaff_R14 + 0x138) = puVar9 + 1;
                iVar15 = iStack00000000000000b0;
              }
LAB_1803e34ad:
              lVar7 = *(int64_t *)(unaff_R14 + 400);
              iStack00000000000000b0 = iVar15 + 1;
            } while (iStack00000000000000b0 < *(int *)(lVar7 + 0x78));
          }
          if (*(int *)(lVar7 + 0x78) < 0x10) {
            uVar14 = (uint64_t)(0x10 - *(int *)(lVar7 + 0x78));
            do {
              puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
              if (puVar8 < *(uint64_t **)(unaff_R14 + 0x140)) {
                *(uint64_t **)(unaff_R14 + 0x138) = puVar8 + 1;
                *puVar8 = 0xffffffffffffffff;
              }
              else {
                puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                lVar7 = (int64_t)puVar8 - (int64_t)puVar10 >> 3;
                if (lVar7 == 0) {
                  lVar7 = 1;
LAB_1803e353c:
                  puVar9 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8);
                  puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                  puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
                }
                else {
                  lVar7 = lVar7 * 2;
                  if (lVar7 != 0) goto LAB_1803e353c;
                  puVar9 = (uint64_t *)0x0;
                }
                if (puVar10 != puVar8) {
// WARNING: Subroutine does not return
                  memmove(puVar9,puVar10,(int64_t)puVar8 - (int64_t)puVar10);
                }
                *puVar9 = 0xffffffffffffffff;
                if (*(int64_t *)(unaff_R14 + 0x130) != 0) {
// WARNING: Subroutine does not return
                  CoreMemoryPoolInitializer();
                }
                *(uint64_t **)(unaff_R14 + 0x130) = puVar9;
                *(uint64_t **)(unaff_R14 + 0x140) = puVar9 + lVar7;
                *(uint64_t **)(unaff_R14 + 0x138) = puVar9 + 1;
              }
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          iStack00000000000000b8 = iStack00000000000000b8 + 1;
        } while (iStack00000000000000b8 < iVar17);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)unaff_RSI);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address