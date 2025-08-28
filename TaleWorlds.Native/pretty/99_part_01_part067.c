#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part067.c - 3 个函数

// 函数: void FUN_1800e5197(void)
void FUN_1800e5197(void)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int64_t in_RAX;
  int64_t lVar14;
  int iVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  uint64_t unaff_RBX;
  char *pcVar18;
  uint64_t unaff_RBP;
  int64_t lVar19;
  uint64_t unaff_RSI;
  uint64_t uVar20;
  uint *unaff_RDI;
  int64_t lVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint in_R10D;
  uint64_t uVar24;
  int iVar25;
  uint64_t unaff_R14;
  uint *puVar26;
  bool bVar27;
  int64_t lStack0000000000000030;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  uVar22 = 0;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x20) = unaff_R14;
  iVar25 = 1;
  if (0 < (int)in_R10D) {
    do {
      uVar11 = (uint)uVar22;
      uVar22 = uVar22 >> 0xb;
      if ((*(uint *)(*(int64_t *)
                      (*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 0x10 +
                      (uint64_t)(uVar11 & 0x7ff) * 0x18) + 0x2e0) & 0x800) != 0) {
        if ((int)uVar11 < (int)in_R10D) {
          lVar19 = (uint64_t)(uVar11 & 0x7ff) * 0x18;
          lVar14 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + lVar19);
          uVar24 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 8 + lVar19);
          lVar19 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 0x10 + lVar19);
          uVar11 = uVar11 + 1;
          *(int32_t *)(lVar19 + 0x2d0) = 1;
          if ((int)uVar11 < (int)in_R10D) goto LAB_1800e5260;
        }
        break;
      }
      uVar22 = (uint64_t)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (int)in_R10D);
  }
  goto FUN_1800e545a;
LAB_1800e5260:
  do {
    uVar22 = (uint64_t)(uVar11 >> 0xb);
    lVar4 = (uint64_t)(uVar11 & 0x7ff) * 0x18;
    lVar6 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 0x10 + lVar4);
    if (((lVar14 == *(int64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + lVar4)) &&
        ((char)*(uint64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 8 + lVar4) ==
         (char)uVar24)) && (uVar13 = *(uint *)(lVar6 + 0x2e0), (uVar13 >> 0xb & 1) != 0)) {
      lVar4 = *(int64_t *)(lVar19 + 0x280);
      lVar21 = 0;
      lVar7 = *(int64_t *)(lVar6 + 0x280);
      plVar17 = (int64_t *)(lVar4 + 0xb8);
      do {
        if (*(int64_t *)((lVar7 - lVar4) + (int64_t)plVar17) != *plVar17) goto LAB_1800e538e;
        lVar21 = lVar21 + 1;
        plVar17 = plVar17 + 1;
      } while (lVar21 < 0x10);
      if (((((*(char *)(lVar6 + 0x9b) != *(char *)(lVar19 + 0x9b)) ||
            (lVar21 = *(int64_t *)(*(int64_t *)(lVar6 + 0x2a8) + 0x18), lVar21 == 0)) ||
           (((uVar13 & 2) == 0 && (lVar21 != *(int64_t *)(*(int64_t *)(lVar19 + 0x2a8) + 0x18)))))
          || ((*(int *)(lVar7 + 0x138) != *(int *)(lVar4 + 0x138) ||
              (*(char *)(lVar6 + 0x322) != *(char *)(lVar19 + 0x322))))) ||
         ((*(int *)(lVar6 + 0x224) != *(int *)(lVar19 + 0x224) ||
          (*(char *)(lVar7 + 0x13c) != *(char *)(lVar4 + 0x13c))))) goto LAB_1800e538e;
      *(uint *)(lVar6 + 0x2e0) = uVar13 | 0x100;
      iVar25 = iVar25 + 1;
    }
    else {
LAB_1800e538e:
      while (((int)uVar11 < (int)in_R10D &&
             ((*(uint *)(*(int64_t *)
                          (*(int64_t *)(unaff_RDI + (uint64_t)(uVar11 >> 0xb) * 2 + 2) + 0x10 +
                          (uint64_t)(uVar11 + (uVar11 >> 0xb) * -0x800) * 0x18) + 0x2e0) & 0x800)
              == 0))) {
        uVar11 = uVar11 + 1;
      }
      if (1 < iVar25) {
        *(uint *)(lVar19 + 0x2e0) = *(uint *)(lVar19 + 0x2e0) | 0x80;
        *(int *)(lVar19 + 0x2d0) = iVar25;
      }
      if (uVar11 == in_R10D) goto FUN_1800e545a;
      uVar22 = (uint64_t)(uVar11 >> 0xb);
      lVar19 = (uint64_t)(uVar11 & 0x7ff) * 0x18;
      lVar14 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + lVar19);
      uVar24 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 8 + lVar19);
      lVar19 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar22 * 2 + 2) + 0x10 + lVar19);
      iVar25 = 1;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < (int)in_R10D);
  if (1 < iVar25) {
    *(uint *)(lVar19 + 0x2e0) = *(uint *)(lVar19 + 0x2e0) | 0x80;
    *(int *)(lVar19 + 0x2d0) = iVar25;
  }
FUN_1800e545a:
  bVar27 = false;
  uVar22 = 0;
  uVar23 = 0x7fffffff;
  if (0 < (int)in_R10D) {
    do {
      uVar11 = (uint)uVar22;
      lVar19 = (uint64_t)(uVar11 & 0x7ff) * 0x18;
      lStack0000000000000030 =
           *(int64_t *)(*(int64_t *)(unaff_RDI + (uVar22 >> 0xb) * 2 + 2) + 0x10 + lVar19);
      puVar2 = (uint64_t *)(*(int64_t *)(unaff_RDI + (uVar22 >> 0xb) * 2 + 2) + lVar19);
      uVar24 = puVar2[1];
      uVar13 = (uint)uVar23;
      if (bVar27) {
        if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          if ((int)uVar13 < (int)uVar11) {
            uVar20 = uVar23 >> 0xb;
            uVar16 = (uint64_t)(uVar13 & 0x7ff);
            uVar23 = (uint64_t)(uVar13 + 1);
            puVar3 = (uint64_t *)(*(int64_t *)(unaff_RDI + uVar20 * 2 + 2) + uVar16 * 0x18);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            uVar5 = *(uint64_t *)
                     (*(int64_t *)(unaff_RDI + uVar20 * 2 + 2) + 0x10 + uVar16 * 0x18);
            lVar14 = *(int64_t *)(unaff_RDI + uVar20 * 2 + 2);
            puVar3 = (uint64_t *)(lVar14 + uVar16 * 0x18);
            *puVar3 = *puVar2;
            puVar3[1] = uVar24;
            *(int64_t *)(lVar14 + 0x10 + uVar16 * 0x18) = lStack0000000000000030;
            lVar14 = *(int64_t *)(unaff_RDI + (uVar22 >> 0xb) * 2 + 2);
            puVar2 = (uint64_t *)(lVar14 + lVar19);
            *puVar2 = uVar8;
            puVar2[1] = uVar9;
            *(uint64_t *)(lVar14 + 0x10 + lVar19) = uVar5;
          }
          else {
            bVar27 = false;
          }
        }
      }
      else {
        uVar12 = uVar11;
        bVar10 = true;
        if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          uVar12 = uVar13;
          bVar10 = bVar27;
        }
        bVar27 = bVar10;
        uVar23 = (uint64_t)uVar12;
      }
      uVar22 = (uint64_t)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < (int)in_R10D);
    uVar11 = (uint)uVar23;
    if (uVar11 != 0x7fffffff) {
      if (*unaff_RDI < uVar11) {
        iVar25 = uVar11 - *unaff_RDI;
        if (iVar25 != 0) {
          LOCK();
          uVar11 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + iVar25;
          UNLOCK();
          uVar13 = uVar11 >> 0xb;
          uVar20 = (uint64_t)uVar13;
          uVar23 = (uint64_t)(iVar25 + -1 + uVar11 >> 0xb);
          if (uVar20 <= uVar23) {
            pcVar18 = (char *)((int64_t)unaff_RDI + uVar20 + 0x108);
            lVar19 = (uVar23 - uVar20) + 1;
            puVar26 = unaff_RDI + (uint64_t)uVar13 * 2 + 2;
            do {
              iVar25 = (int)uVar20;
              if (*(int64_t *)puVar26 == 0) {
                lVar14 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc000,CONCAT71((int7)(uVar22 >> 8),0x25));
                uVar22 = (uint64_t)iVar25;
                LOCK();
                bVar27 = *(int64_t *)(unaff_RDI + uVar22 * 2 + 2) == 0;
                if (bVar27) {
                  *(int64_t *)(unaff_RDI + uVar22 * 2 + 2) = lVar14;
                }
                UNLOCK();
                if (bVar27) {
                  iVar15 = iVar25 * 0x800;
                  iVar1 = iVar15 + 0x800;
                  for (; iVar15 < iVar1; iVar15 = iVar15 + 1) {
                  }
                  LOCK();
                  *(int8_t *)(uVar22 + 0x108 + (int64_t)unaff_RDI) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  do {
                  } while (*pcVar18 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar18 != '\0');
              }
              uVar20 = (uint64_t)(iVar25 + 1);
              puVar26 = puVar26 + 2;
              pcVar18 = pcVar18 + 1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
        }
      }
      else if (uVar11 < *unaff_RDI) {
        LOCK();
        *unaff_RDI = uVar11;
        UNLOCK();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1800e5205(uint64_t param_1,uint64_t param_2,int param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  byte *pbVar4;
  byte bVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int iVar11;
  uint in_EAX;
  uint uVar12;
  uint uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t *plVar17;
  byte *pbVar18;
  uint64_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint *unaff_RDI;
  int64_t lVar22;
  uint64_t uVar23;
  int iVar24;
  uint in_R10D;
  uint64_t uVar25;
  int unaff_R14D;
  uint *puVar26;
  bool bVar27;
  uint64_t uStack0000000000000030;
  
  lVar20 = (uint64_t)(in_EAX & 0x7ff) * 0x18;
  lVar14 = *(int64_t *)(*(int64_t *)(unaff_RDI + param_4 * 2 + 2) + lVar20);
  uVar25 = *(uint64_t *)(*(int64_t *)(unaff_RDI + param_4 * 2 + 2) + 8 + lVar20);
  lVar20 = *(int64_t *)(*(int64_t *)(unaff_RDI + param_4 * 2 + 2) + 0x10 + lVar20);
  uVar15 = (uint64_t)(param_3 + 1U);
  *(int *)(lVar20 + 0x2d0) = unaff_R14D;
  iVar24 = unaff_R14D;
  if ((int)(param_3 + 1U) < (int)in_R10D) {
    do {
      uVar12 = (uint)uVar15;
      uVar23 = uVar15 >> 0xb;
      lVar3 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
      lVar7 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + 0x10 + lVar3);
      if (((lVar14 == *(int64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + lVar3)) &&
          ((char)*(uint64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + 8 + lVar3) ==
           (char)uVar25)) && (uVar13 = *(uint *)(lVar7 + 0x2e0), (uVar13 >> 0xb & 1) != 0)) {
        lVar3 = *(int64_t *)(lVar20 + 0x280);
        lVar22 = 0;
        lVar8 = *(int64_t *)(lVar7 + 0x280);
        plVar17 = (int64_t *)(lVar3 + 0xb8);
        do {
          if (*(int64_t *)((lVar8 - lVar3) + (int64_t)plVar17) != *plVar17) goto LAB_1800e5388;
          lVar22 = lVar22 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar22 < 0x10);
        if (((((*(char *)(lVar7 + 0x9b) != *(char *)(lVar20 + 0x9b)) ||
              (lVar22 = *(int64_t *)(*(int64_t *)(lVar7 + 0x2a8) + 0x18), lVar22 == 0)) ||
             (((uVar13 & 2) == 0 && (lVar22 != *(int64_t *)(*(int64_t *)(lVar20 + 0x2a8) + 0x18)))
             )) || ((*(int *)(lVar8 + 0x138) != *(int *)(lVar3 + 0x138) ||
                    (*(char *)(lVar7 + 0x322) != *(char *)(lVar20 + 0x322))))) ||
           (*(int *)(lVar7 + 0x224) != *(int *)(lVar20 + 0x224))) {
LAB_1800e5388:
          unaff_R14D = 1;
          goto joined_r0x0001800e5391;
        }
        unaff_R14D = 1;
        if (*(char *)(lVar8 + 0x13c) != *(char *)(lVar3 + 0x13c)) goto joined_r0x0001800e5391;
        *(uint *)(lVar7 + 0x2e0) = uVar13 | 0x100;
        iVar24 = iVar24 + 1;
      }
      else {
joined_r0x0001800e5391:
        while ((uVar13 = (uint)uVar15, (int)uVar12 < (int)in_R10D &&
               ((*(uint *)(*(int64_t *)
                            (*(int64_t *)(unaff_RDI + (uVar15 >> 0xb) * 2 + 2) + 0x10 +
                            (uint64_t)(uVar13 + (int)(uVar15 >> 0xb) * -0x800) * 0x18) + 0x2e0) &
                0x800) == 0))) {
          uVar12 = uVar13 + 1;
          uVar15 = (uint64_t)uVar12;
        }
        if (1 < iVar24) {
          *(uint *)(lVar20 + 0x2e0) = *(uint *)(lVar20 + 0x2e0) | 0x80;
          *(int *)(lVar20 + 0x2d0) = iVar24;
        }
        if (uVar13 == in_R10D) goto FUN_1800e5450;
        uVar23 = uVar15 >> 0xb;
        lVar20 = (uint64_t)(uVar13 & 0x7ff) * 0x18;
        lVar14 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + lVar20);
        uVar25 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + 8 + lVar20);
        lVar20 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + 0x10 + lVar20);
        iVar24 = unaff_R14D;
      }
      uVar12 = (int)uVar15 + 1;
      uVar15 = (uint64_t)uVar12;
    } while ((int)uVar12 < (int)in_R10D);
    if (1 < iVar24) {
      *(uint *)(lVar20 + 0x2e0) = *(uint *)(lVar20 + 0x2e0) | 0x80;
      *(int *)(lVar20 + 0x2d0) = iVar24;
    }
  }
FUN_1800e5450:
  iVar24 = 0;
  uVar23 = 0;
  uVar19 = 0x7fffffff;
  if (0 < (int)in_R10D) {
    do {
      uVar15 = uVar23;
      uVar12 = (uint)uVar15;
      uVar23 = uVar15 >> 0xb;
      lVar20 = (uint64_t)(uVar12 & 0x7ff) * 0x18;
      uStack0000000000000030 =
           *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + 0x10 + lVar20);
      puVar1 = (uint64_t *)(*(int64_t *)(unaff_RDI + uVar23 * 2 + 2) + lVar20);
      uVar25 = puVar1[1];
      uVar13 = (uint)uVar19;
      uVar21 = uVar19;
      iVar11 = iVar24;
      if (iVar24 == 0) {
        uVar21 = uVar15;
        iVar11 = unaff_R14D;
        if ((*(uint *)(uStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          uVar15 = uVar19;
          uVar21 = uVar19;
          iVar11 = iVar24;
        }
      }
      else {
        uVar15 = uStack0000000000000030;
        if ((*(uint *)(uStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          if ((int)uVar13 < (int)uVar12) {
            uVar15 = (uint64_t)(uVar13 & 0x7ff);
            puVar2 = (uint64_t *)
                     (*(int64_t *)(unaff_RDI + (uVar19 >> 0xb) * 2 + 2) + uVar15 * 0x18);
            uVar9 = *puVar2;
            uVar10 = puVar2[1];
            uVar6 = *(uint64_t *)
                     (*(int64_t *)(unaff_RDI + (uVar19 >> 0xb) * 2 + 2) + 0x10 + uVar15 * 0x18);
            lVar14 = *(int64_t *)(unaff_RDI + (uVar19 >> 0xb) * 2 + 2);
            puVar2 = (uint64_t *)(lVar14 + uVar15 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar25;
            *(uint64_t *)(lVar14 + 0x10 + uVar15 * 0x18) = uStack0000000000000030;
            uVar15 = *(uint64_t *)(unaff_RDI + uVar23 * 2 + 2);
            *(uint64_t *)(uVar15 + lVar20) = uVar9;
            ((uint64_t *)(uVar15 + lVar20))[1] = uVar10;
            *(uint64_t *)(uVar15 + 0x10 + lVar20) = uVar6;
            uVar21 = (uint64_t)(uVar13 + 1);
          }
          else {
            iVar11 = 0;
          }
        }
      }
      iVar24 = iVar11;
      uVar23 = (uint64_t)(uVar12 + 1);
      uVar19 = uVar21;
    } while ((int)(uVar12 + 1) < (int)in_R10D);
    uVar12 = (uint)uVar21;
    if (uVar12 != 0x7fffffff) {
      uVar13 = *unaff_RDI;
      uVar15 = (uint64_t)uVar13;
      if (*unaff_RDI < uVar12) {
        iVar24 = uVar12 - uVar13;
        if (iVar24 != 0) {
          LOCK();
          uVar12 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + iVar24;
          UNLOCK();
          uVar13 = uVar12 >> 0xb;
          uVar15 = (uint64_t)uVar13;
          uVar21 = (uint64_t)uVar13;
          uVar19 = (uint64_t)(iVar24 + -1 + uVar12 >> 0xb);
          if (uVar21 <= uVar19) {
            pbVar18 = (byte *)((int64_t)unaff_RDI + uVar21 + 0x108);
            lVar20 = (uVar19 - uVar21) + 1;
            puVar26 = unaff_RDI + uVar15 * 2 + 2;
            do {
              iVar24 = (int)uVar21;
              if (*(int64_t *)puVar26 == 0) {
                lVar14 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc000,CONCAT71((int7)(uVar23 >> 8),0x25));
                uVar23 = (uint64_t)iVar24;
                LOCK();
                bVar27 = *(int64_t *)(unaff_RDI + uVar23 * 2 + 2) == 0;
                if (bVar27) {
                  *(int64_t *)(unaff_RDI + uVar23 * 2 + 2) = lVar14;
                }
                UNLOCK();
                if (bVar27) {
                  iVar16 = iVar24 * 0x800;
                  iVar11 = iVar16 + 0x800;
                  for (; iVar16 < iVar11; iVar16 = iVar16 + 1) {
                  }
                  LOCK();
                  pbVar4 = (byte *)(uVar23 + 0x108 + (int64_t)unaff_RDI);
                  bVar5 = *pbVar4;
                  *pbVar4 = 0;
                  uVar15 = (uint64_t)bVar5;
                  UNLOCK();
                }
                else {
                  if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  do {
                    uVar15 = (uint64_t)*pbVar18;
                  } while (*pbVar18 != 0);
                }
              }
              else {
                do {
                  uVar15 = (uint64_t)*pbVar18;
                } while (*pbVar18 != 0);
              }
              uVar21 = (uint64_t)(iVar24 + 1);
              puVar26 = puVar26 + 2;
              pbVar18 = pbVar18 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
      }
      else if (uVar12 < uVar13) {
        LOCK();
        *unaff_RDI = uVar12;
        UNLOCK();
      }
    }
  }
  return uVar15;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e5254(void)
void FUN_1800e5254(void)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint in_EAX;
  uint uVar9;
  uint uVar10;
  int64_t lVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  char *pcVar15;
  int unaff_EBP;
  int iVar16;
  int64_t lVar17;
  uint64_t uVar18;
  uint *unaff_RDI;
  uint uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint in_R10D;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int unaff_R14D;
  uint *puVar23;
  bool bVar24;
  int64_t lStack0000000000000030;
  
  do {
    uVar21 = (uint64_t)(in_EAX >> 0xb);
    lVar17 = (uint64_t)(in_EAX & 0x7ff) * 0x18;
    lVar11 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar21 * 2 + 2) + 0x10 + lVar17);
    iVar16 = unaff_R14D;
    if (((unaff_R13 == *(int64_t *)(*(int64_t *)(unaff_RDI + uVar21 * 2 + 2) + lVar17)) &&
        ((char)*(uint64_t *)(*(int64_t *)(unaff_RDI + uVar21 * 2 + 2) + 8 + lVar17) ==
         (char)unaff_R12)) && (uVar19 = *(uint *)(lVar11 + 0x2e0), (uVar19 >> 0xb & 1) != 0)) {
      lVar17 = *(int64_t *)(in_R11 + 0x280);
      lVar20 = 0;
      lVar5 = *(int64_t *)(lVar11 + 0x280);
      plVar14 = (int64_t *)(lVar17 + 0xb8);
      do {
        if (*(int64_t *)((lVar5 - lVar17) + (int64_t)plVar14) != *plVar14) goto LAB_1800e5388;
        lVar20 = lVar20 + 1;
        plVar14 = plVar14 + 1;
      } while (lVar20 < 0x10);
      if (((((*(char *)(lVar11 + 0x9b) != *(char *)(in_R11 + 0x9b)) ||
            (lVar20 = *(int64_t *)(*(int64_t *)(lVar11 + 0x2a8) + 0x18), lVar20 == 0)) ||
           (((uVar19 & 2) == 0 && (lVar20 != *(int64_t *)(*(int64_t *)(in_R11 + 0x2a8) + 0x18)))))
          || ((*(int *)(lVar5 + 0x138) != *(int *)(lVar17 + 0x138) ||
              (*(char *)(lVar11 + 0x322) != *(char *)(in_R11 + 0x322))))) ||
         (*(int *)(lVar11 + 0x224) != *(int *)(in_R11 + 0x224))) {
LAB_1800e5388:
        iVar16 = 1;
        goto joined_r0x0001800e5391;
      }
      iVar16 = 1;
      if (*(char *)(lVar5 + 0x13c) != *(char *)(lVar17 + 0x13c)) goto joined_r0x0001800e5391;
      iVar16 = unaff_EBP + 1;
      *(uint *)(lVar11 + 0x2e0) = uVar19 | 0x100;
      unaff_R14D = 1;
    }
    else {
joined_r0x0001800e5391:
      while (((int)in_EAX < (int)in_R10D &&
             ((*(uint *)(*(int64_t *)
                          (*(int64_t *)(unaff_RDI + (uint64_t)(in_EAX >> 0xb) * 2 + 2) + 0x10 +
                          (uint64_t)(in_EAX + (in_EAX >> 0xb) * -0x800) * 0x18) + 0x2e0) & 0x800)
              == 0))) {
        in_EAX = in_EAX + 1;
      }
      if (1 < unaff_EBP) {
        *(uint *)(in_R11 + 0x2e0) = *(uint *)(in_R11 + 0x2e0) | 0x80;
        *(int *)(in_R11 + 0x2d0) = unaff_EBP;
      }
      unaff_R14D = iVar16;
      if (in_EAX == in_R10D) goto LAB_1800e544b;
      uVar21 = (uint64_t)(in_EAX >> 0xb);
      lVar17 = (uint64_t)(in_EAX & 0x7ff) * 0x18;
      unaff_R13 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar21 * 2 + 2) + lVar17);
      unaff_R12 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar21 * 2 + 2) + 8 + lVar17);
      in_R11 = *(int64_t *)(*(int64_t *)(unaff_RDI + uVar21 * 2 + 2) + 0x10 + lVar17);
    }
    in_EAX = in_EAX + 1;
    unaff_EBP = iVar16;
  } while ((int)in_EAX < (int)in_R10D);
  if (1 < iVar16) {
    *(uint *)(in_R11 + 0x2e0) = *(uint *)(in_R11 + 0x2e0) | 0x80;
    *(int *)(in_R11 + 0x2d0) = iVar16;
  }
LAB_1800e544b:
  iVar16 = 0;
  uVar21 = 0;
  uVar22 = 0x7fffffff;
  if (0 < (int)in_R10D) {
    do {
      uVar19 = (uint)uVar21;
      lVar17 = (uint64_t)(uVar19 & 0x7ff) * 0x18;
      lStack0000000000000030 =
           *(int64_t *)(*(int64_t *)(unaff_RDI + (uVar21 >> 0xb) * 2 + 2) + 0x10 + lVar17);
      puVar2 = (uint64_t *)(*(int64_t *)(unaff_RDI + (uVar21 >> 0xb) * 2 + 2) + lVar17);
      uVar6 = puVar2[1];
      uVar10 = (uint)uVar22;
      if (iVar16 == 0) {
        uVar9 = uVar19;
        iVar1 = unaff_R14D;
        if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          uVar9 = uVar10;
          iVar1 = iVar16;
        }
        iVar16 = iVar1;
        uVar22 = (uint64_t)uVar9;
      }
      else if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
        if ((int)uVar10 < (int)uVar19) {
          uVar18 = uVar22 >> 0xb;
          uVar13 = (uint64_t)(uVar10 & 0x7ff);
          uVar22 = (uint64_t)(uVar10 + 1);
          puVar3 = (uint64_t *)(*(int64_t *)(unaff_RDI + uVar18 * 2 + 2) + uVar13 * 0x18);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar4 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar18 * 2 + 2) + 0x10 + uVar13 * 0x18);
          lVar11 = *(int64_t *)(unaff_RDI + uVar18 * 2 + 2);
          puVar3 = (uint64_t *)(lVar11 + uVar13 * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar6;
          *(int64_t *)(lVar11 + 0x10 + uVar13 * 0x18) = lStack0000000000000030;
          lVar11 = *(int64_t *)(unaff_RDI + (uVar21 >> 0xb) * 2 + 2);
          puVar2 = (uint64_t *)(lVar11 + lVar17);
          *puVar2 = uVar7;
          puVar2[1] = uVar8;
          *(uint64_t *)(lVar11 + 0x10 + lVar17) = uVar4;
        }
        else {
          iVar16 = 0;
        }
      }
      uVar21 = (uint64_t)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < (int)in_R10D);
    uVar19 = (uint)uVar22;
    if (uVar19 != 0x7fffffff) {
      if (*unaff_RDI < uVar19) {
        iVar16 = uVar19 - *unaff_RDI;
        if (iVar16 != 0) {
          LOCK();
          uVar19 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + iVar16;
          UNLOCK();
          uVar10 = uVar19 >> 0xb;
          uVar18 = (uint64_t)uVar10;
          uVar22 = (uint64_t)(iVar16 + -1 + uVar19 >> 0xb);
          if (uVar18 <= uVar22) {
            pcVar15 = (char *)((int64_t)unaff_RDI + uVar18 + 0x108);
            lVar17 = (uVar22 - uVar18) + 1;
            puVar23 = unaff_RDI + (uint64_t)uVar10 * 2 + 2;
            do {
              iVar16 = (int)uVar18;
              if (*(int64_t *)puVar23 == 0) {
                lVar11 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc000,CONCAT71((int7)(uVar21 >> 8),0x25));
                uVar21 = (uint64_t)iVar16;
                LOCK();
                bVar24 = *(int64_t *)(unaff_RDI + uVar21 * 2 + 2) == 0;
                if (bVar24) {
                  *(int64_t *)(unaff_RDI + uVar21 * 2 + 2) = lVar11;
                }
                UNLOCK();
                if (bVar24) {
                  iVar12 = iVar16 * 0x800;
                  iVar1 = iVar12 + 0x800;
                  for (; iVar12 < iVar1; iVar12 = iVar12 + 1) {
                  }
                  LOCK();
                  *(int8_t *)(uVar21 + 0x108 + (int64_t)unaff_RDI) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  do {
                  } while (*pcVar15 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar15 != '\0');
              }
              uVar18 = (uint64_t)(iVar16 + 1);
              puVar23 = puVar23 + 2;
              pcVar15 = pcVar15 + 1;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
          }
        }
      }
      else if (uVar19 < *unaff_RDI) {
        LOCK();
        *unaff_RDI = uVar19;
        UNLOCK();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e5450(void)
void FUN_1800e5450(void)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  uint64_t uVar12;
  char *pcVar13;
  int64_t lVar14;
  uint64_t uVar15;
  uint *unaff_RDI;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  uint64_t uVar19;
  int in_R10D;
  int unaff_R14D;
  uint *puVar20;
  bool bVar21;
  int64_t lStack0000000000000030;
  
  iVar18 = 0;
  uVar17 = 0;
  uVar19 = 0x7fffffff;
  if (0 < in_R10D) {
    do {
      uVar16 = (uint)uVar17;
      lVar14 = (uint64_t)(uVar16 & 0x7ff) * 0x18;
      lStack0000000000000030 =
           *(int64_t *)(*(int64_t *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2) + 0x10 + lVar14);
      puVar2 = (uint64_t *)(*(int64_t *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2) + lVar14);
      uVar5 = puVar2[1];
      uVar9 = (uint)uVar19;
      if (iVar18 == 0) {
        uVar8 = uVar16;
        iVar1 = unaff_R14D;
        if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          uVar8 = uVar9;
          iVar1 = iVar18;
        }
        iVar18 = iVar1;
        uVar19 = (uint64_t)uVar8;
      }
      else if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
        if ((int)uVar9 < (int)uVar16) {
          uVar15 = uVar19 >> 0xb;
          uVar12 = (uint64_t)(uVar9 & 0x7ff);
          uVar19 = (uint64_t)(uVar9 + 1);
          puVar3 = (uint64_t *)(*(int64_t *)(unaff_RDI + uVar15 * 2 + 2) + uVar12 * 0x18);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          uVar4 = *(uint64_t *)(*(int64_t *)(unaff_RDI + uVar15 * 2 + 2) + 0x10 + uVar12 * 0x18);
          lVar10 = *(int64_t *)(unaff_RDI + uVar15 * 2 + 2);
          puVar3 = (uint64_t *)(lVar10 + uVar12 * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          *(int64_t *)(lVar10 + 0x10 + uVar12 * 0x18) = lStack0000000000000030;
          lVar10 = *(int64_t *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2);
          puVar2 = (uint64_t *)(lVar10 + lVar14);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          *(uint64_t *)(lVar10 + 0x10 + lVar14) = uVar4;
        }
        else {
          iVar18 = 0;
        }
      }
      uVar17 = (uint64_t)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < in_R10D);
    uVar16 = (uint)uVar19;
    if (uVar16 != 0x7fffffff) {
      if (*unaff_RDI < uVar16) {
        iVar18 = uVar16 - *unaff_RDI;
        if (iVar18 != 0) {
          LOCK();
          uVar16 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + iVar18;
          UNLOCK();
          uVar9 = uVar16 >> 0xb;
          uVar15 = (uint64_t)uVar9;
          uVar19 = (uint64_t)(iVar18 + -1 + uVar16 >> 0xb);
          if (uVar15 <= uVar19) {
            pcVar13 = (char *)((int64_t)unaff_RDI + uVar15 + 0x108);
            lVar14 = (uVar19 - uVar15) + 1;
            puVar20 = unaff_RDI + (uint64_t)uVar9 * 2 + 2;
            do {
              iVar18 = (int)uVar15;
              if (*(int64_t *)puVar20 == 0) {
                lVar10 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0xc000,CONCAT71((int7)(uVar17 >> 8),0x25));
                uVar17 = (uint64_t)iVar18;
                LOCK();
                bVar21 = *(int64_t *)(unaff_RDI + uVar17 * 2 + 2) == 0;
                if (bVar21) {
                  *(int64_t *)(unaff_RDI + uVar17 * 2 + 2) = lVar10;
                }
                UNLOCK();
                if (bVar21) {
                  iVar11 = iVar18 * 0x800;
                  iVar1 = iVar11 + 0x800;
                  for (; iVar11 < iVar1; iVar11 = iVar11 + 1) {
                  }
                  LOCK();
                  *(int8_t *)(uVar17 + 0x108 + (int64_t)unaff_RDI) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              uVar15 = (uint64_t)(iVar18 + 1);
              puVar20 = puVar20 + 2;
              pcVar13 = pcVar13 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
      }
      else if (uVar16 < *unaff_RDI) {
        LOCK();
        *unaff_RDI = uVar16;
        UNLOCK();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




