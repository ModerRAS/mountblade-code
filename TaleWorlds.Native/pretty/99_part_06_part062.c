#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part062.c - 3 个函数
// 函数: void RenderingSystem_e306f(void)
void RenderingSystem_e306f(void)
{
  int64_t *plVar1;
  bool bVar2;
  int iVar3;
  int in_EAX;
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
  int unaff_ESI;
  uint64_t unaff_RDI;
  int64_t *plVar12;
  int64_t in_R11;
  int unaff_R12D;
  uint64_t unaff_R13;
  uint64_t uVar13;
  int64_t unaff_R14;
  int iVar14;
  uint64_t unaff_R15;
  uint64_t uVar15;
  uint64_t local_var_30;
  int local_var_38;
  int iStack00000000000000b0;
  int iStack00000000000000b8;
  int32_t local_var_c0;
  int32_t local_buffer_c4;
  uint64_t local_var_c8;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x28) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x40) = unaff_R15;
  do {
    iStack00000000000000b8 = 0;
    if (0 < in_EAX) {
      do {
        iVar3 = iStack00000000000000b8;
        lVar7 = *(int64_t *)(unaff_R14 + 400);
        iStack00000000000000b0 = 0;
        if (0 < *(int *)(lVar7 + 0x78)) {
          plVar1 = (int64_t *)(unaff_R14 + 0x60);
          do {
            iVar14 = iStack00000000000000b0;
            plVar6 = *(int64_t **)(unaff_R14 + 0x70);
            plVar4 = plVar6;
            plVar11 = plVar1;
            if (plVar6 == (int64_t *)0x0) {
LAB_1803e33c4:
              puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
              local_var_c8 = 0xffffffffffffffff;
              if (*(uint64_t **)(unaff_R14 + 0x140) <= puVar8) {
                puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                lVar7 = (int64_t)puVar8 - (int64_t)puVar10 >> 3;
                if (lVar7 == 0) {
                  lVar7 = 1;
LAB_1803e3424:
                  puVar9 = (uint64_t *)
                           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(unaff_R14 + 0x148)
                                        );
                  puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
                  puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
                }
                else {
                  lVar7 = lVar7 * 2;
                  if (lVar7 != 0) goto LAB_1803e3424;
                  puVar9 = (uint64_t *)0x0;
                }
                uVar15 = local_var_c8;
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
                    ((*(int *)((int64_t)plVar4 + 0x24) < unaff_R12D ||
                     ((*(int *)((int64_t)plVar4 + 0x24) <= unaff_R12D && ((int)plVar4[5] < iVar3)))
                     ))))) {
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
                  ((unaff_R12D < *(int *)((int64_t)plVar12 + 0x24) ||
                   ((unaff_R12D <= *(int *)((int64_t)plVar12 + 0x24) && (iVar3 < (int)plVar12[5])))
                   ))))) goto LAB_1803e33c4;
              while (plVar11 = plVar4, plVar6 != (int64_t *)0x0) {
                if (((int)plVar6[4] < iStack00000000000000b0) ||
                   (((int)plVar6[4] <= iStack00000000000000b0 &&
                    ((*(int *)((int64_t)plVar6 + 0x24) < unaff_R12D ||
                     ((*(int *)((int64_t)plVar6 + 0x24) <= unaff_R12D && ((int)plVar6[5] < iVar3)))
                     ))))) {
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
                  ((unaff_R12D < *(int *)((int64_t)plVar11 + 0x24) ||
                   ((unaff_R12D <= *(int *)((int64_t)plVar11 + 0x24) && (iVar3 < (int)plVar11[5])))
                   ))))) {
                plVar6 = (int64_t *)*plVar1;
                if ((plVar11 == plVar6) || (plVar11 == plVar1)) {
                  if ((*(int64_t *)(unaff_R14 + 0x80) != 0) &&
                     ((plVar11 = plVar6, (int)plVar6[4] < iStack00000000000000b0 ||
                      (((int)plVar6[4] <= iStack00000000000000b0 &&
                       ((*(int *)((int64_t)plVar6 + 0x24) < unaff_R12D ||
                        ((*(int *)((int64_t)plVar6 + 0x24) <= unaff_R12D &&
                         ((int)plVar6[5] < iVar3)))))))))) {
LAB_1803e326f:
                    bVar2 = false;
                    goto LAB_1803e3271;
                  }
                }
                else {
                  plVar6 = (int64_t *)SystemFunction_00018066bd70(plVar11);
                  if ((((int)plVar11[4] < iVar14) ||
                      (((int)plVar11[4] <= iVar14 &&
                       ((*(int *)((int64_t)plVar11 + 0x24) < unaff_R12D ||
                        ((*(int *)((int64_t)plVar11 + 0x24) <= unaff_R12D &&
                         ((int)plVar11[5] < iVar3)))))))) &&
                     ((iVar14 < (int)plVar6[4] ||
                      ((iVar14 <= (int)plVar6[4] &&
                       ((unaff_R12D < *(int *)((int64_t)plVar6 + 0x24) ||
                        ((unaff_R12D <= *(int *)((int64_t)plVar6 + 0x24) &&
                         (iVar3 < (int)plVar6[5])))))))))) {
                    if (*plVar11 == 0) goto LAB_1803e326f;
                    bVar2 = true;
                    plVar11 = plVar6;
LAB_1803e3271:
                    if (plVar11 != (int64_t *)0x0) {
                      if ((((bVar2) || (plVar11 == plVar1)) || (iVar14 < (int)plVar11[4])) ||
                         ((iVar14 <= (int)plVar11[4] &&
                          ((unaff_R12D < *(int *)((int64_t)plVar11 + 0x24) ||
                           ((unaff_R12D <= *(int *)((int64_t)plVar11 + 0x24) &&
                            (iVar3 < (int)plVar11[5])))))))) {
                        uVar15 = 0;
                      }
                      else {
                        uVar15 = 1;
                      }
                      lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x38,*(int8_t *)(unaff_R14 + 0x88));
                      *(uint64_t *)(lVar7 + 0x20) = CONCAT44(unaff_R12D,iVar14);
                      *(int *)(lVar7 + 0x28) = iVar3;
                      *(uint64_t *)(lVar7 + 0x2c) = 0;
// WARNING: Subroutine does not return
                      SystemNetworkHandler(lVar7,plVar11,plVar1,uVar15);
                    }
                  }
                }
                puVar8 = (uint64_t *)RenderingSystem_e8000(plVar1,&local_buffer_00000050);
                plVar11 = (int64_t *)*puVar8;
              }
              uVar15 = *(uint64_t *)((int64_t)plVar11 + 0x2c);
              puVar8 = *(uint64_t **)(unaff_R14 + 0x138);
              local_var_c0 = (int32_t)uVar15;
              local_buffer_c4 = (int32_t)((uint64_t)uVar15 >> 0x20);
              if (puVar8 < *(uint64_t **)(unaff_R14 + 0x140)) {
                *(uint64_t **)(unaff_R14 + 0x138) = puVar8 + 1;
                *puVar8 = uVar15;
                goto LAB_1803e34ad;
              }
              puVar10 = *(uint64_t **)(unaff_R14 + 0x130);
              lVar7 = (int64_t)puVar8 - (int64_t)puVar10 >> 3;
              if (lVar7 == 0) {
                lVar7 = 1;
LAB_1803e336f:
                puVar9 = (uint64_t *)
                         CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(unaff_R14 + 0x148));
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
              uVar15 = CONCAT44(local_buffer_c4,local_var_c0);
LAB_1803e3474:
              *puVar9 = uVar15;
              if (*(int64_t *)(unaff_R14 + 0x130) != 0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              *(uint64_t **)(unaff_R14 + 0x130) = puVar9;
              *(uint64_t **)(unaff_R14 + 0x140) = puVar9 + lVar7;
              *(uint64_t **)(unaff_R14 + 0x138) = puVar9 + 1;
              iVar14 = iStack00000000000000b0;
            }
LAB_1803e34ad:
            lVar7 = *(int64_t *)(unaff_R14 + 400);
            iStack00000000000000b0 = iVar14 + 1;
          } while (iStack00000000000000b0 < *(int *)(lVar7 + 0x78));
        }
        if (*(int *)(lVar7 + 0x78) < 0x10) {
          uVar13 = (uint64_t)(0x10 - *(int *)(lVar7 + 0x78));
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
                puVar9 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8);
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
                CoreEngineMemoryPoolCleaner();
              }
              *(uint64_t **)(unaff_R14 + 0x130) = puVar9;
              *(uint64_t **)(unaff_R14 + 0x140) = puVar9 + lVar7;
              *(uint64_t **)(unaff_R14 + 0x138) = puVar9 + 1;
            }
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        iStack00000000000000b8 = iStack00000000000000b8 + 1;
        in_EAX = local_var_30._4_4_;
        unaff_ESI = local_var_38;
      } while (iStack00000000000000b8 < local_var_30._4_4_);
    }
    unaff_R12D = unaff_R12D + 1;
    if (unaff_ESI <= unaff_R12D) {
      return;
    }
  } while( true );
}
// 函数: void RenderingSystem_e3616(void)
void RenderingSystem_e3616(void)
{
  return;
}
// 函数: void RenderingSystem_e361b(void)
void RenderingSystem_e361b(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address