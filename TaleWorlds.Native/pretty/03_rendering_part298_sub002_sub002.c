#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part298_sub002_sub002.c - 1 个函数

// 函数: void FUN_180427a30(uint *param_1,uint *param_2,uint *param_3,uint *param_4)
void FUN_180427a30(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  byte *pbVar1;
  int64_t lVar2;
  int8_t *puVar3;
  int64_t lVar4;
  int8_t uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int8_t *puVar11;
  int8_t *puVar12;
  int iVar13;
  uint uVar14;
  int8_t *puVar15;
  uint uVar16;
  int iVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  int8_t *puVar25;
  int8_t *puVar26;
  int8_t auStack_508 [32];
  uint uStack_4e8;
  int iStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  uint uStack_4d8;
  int iStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  int iStack_4c4;
  uint uStack_4c0;
  int iStack_4b8;
  int iStack_4b4;
  int iStack_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  uint uStack_49c;
  int64_t lStack_498;
  int32_t uStack_490;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
  int iStack_480;
  uint uStack_47c;
  int64_t lStack_478;
  uint *puStack_470;
  uint *puStack_468;
  uint *puStack_460;
  int8_t auStack_458 [1024];
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_508;
  iVar24 = 0;
  uStack_49c = 0xff;
  puStack_470 = param_2;
  puStack_468 = param_3;
  puStack_460 = param_4;
  lVar2 = FUN_1804276f0(param_1,&iStack_4b8);
  uVar22 = uStack_49c;
  iVar10 = iStack_4b0;
  iVar13 = iStack_4b8;
  if (lVar2 == 0) goto LAB_180428659;
  uStack_47c = param_1[1];
  uStack_4e8 = uStack_49c;
  uVar16 = (uStack_47c ^ (int)uStack_47c >> 0x1f) - ((int)uStack_47c >> 0x1f);
  param_1[1] = uVar16;
  if (iStack_4b0 == 0xc) {
    iVar24 = 0;
    if (iStack_4b8 < 0x18) {
      iVar24 = (iStack_4b4 + -0x26) / 3;
    }
  }
  else if (iStack_4b8 < 0x10) {
    iVar24 = (iStack_4b4 - iStack_4b0) + -0xe >> 2;
  }
  uVar23 = *param_1;
  uVar21 = (uStack_4a0 != 0) + 3;
  param_1[2] = uVar21;
  if (((((int)uVar23 < 0) ||
       (((uVar23 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar23) < (int)uVar21)) ||
        (iVar17 = uVar23 * uVar21, iVar17 < 0)))) || ((int)uVar16 < 0)) ||
     (((((uVar16 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar16) < iVar17)) ||
        (((int)uVar23 < 0 ||
         ((uVar23 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar23) < (int)uVar21)))))) ||
       (iVar17 < 0)) ||
      (((int)uVar16 < 0 ||
       (((uVar16 != 0 && ((int)(0x7fffffff / (int64_t)(int)uVar16) < iVar17)) ||
        (lVar2 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)(uVar23 * uVar16 * uVar21),
                               CONCAT71((uint7)(uint3)(uVar16 >> 8),0x22)), lStack_478 = lVar2,
        lVar2 == 0)))))))) goto LAB_180428659;
  if (iVar13 < 0x10) {
    iVar13 = 0;
    if ((iVar24 == 0) || (0x100 < iVar24)) {
LAB_18042864f:
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar2);
    }
    if (0 < iVar24) {
      puVar3 = *(int8_t **)(param_1 + 0x2e);
      lVar2 = 0;
      do {
        puVar12 = *(int8_t **)(param_1 + 0x30);
        if (puVar3 < puVar12) {
          uVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          *(int8_t **)(param_1 + 0x2e) = puVar3;
        }
        else if (param_1[0xc] == 0) {
          uVar5 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          puVar12 = *(int8_t **)(param_1 + 0x30);
          uVar5 = **(int8_t **)(param_1 + 0x2e);
          puVar3 = *(int8_t **)(param_1 + 0x2e) + 1;
          *(int8_t **)(param_1 + 0x2e) = puVar3;
        }
        auStack_458[lVar2 * 4 + 2] = uVar5;
        if (puVar3 < puVar12) {
          uVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          *(int8_t **)(param_1 + 0x2e) = puVar3;
        }
        else if (param_1[0xc] == 0) {
          uVar5 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          puVar12 = *(int8_t **)(param_1 + 0x30);
          uVar5 = **(int8_t **)(param_1 + 0x2e);
          puVar3 = *(int8_t **)(param_1 + 0x2e) + 1;
          *(int8_t **)(param_1 + 0x2e) = puVar3;
        }
        auStack_458[lVar2 * 4 + 1] = uVar5;
        if (puVar3 < puVar12) {
          uVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          *(int8_t **)(param_1 + 0x2e) = puVar3;
        }
        else if (param_1[0xc] == 0) {
          uVar5 = 0;
        }
        else {
          FUN_18041ee20(param_1);
          uVar5 = **(int8_t **)(param_1 + 0x2e);
          puVar3 = *(int8_t **)(param_1 + 0x2e) + 1;
          *(int8_t **)(param_1 + 0x2e) = puVar3;
        }
        auStack_458[lVar2 * 4] = uVar5;
        if (iVar10 != 0xc) {
          if (puVar3 < *(int8_t **)(param_1 + 0x30)) {
            puVar3 = puVar3 + 1;
            *(int8_t **)(param_1 + 0x2e) = puVar3;
          }
          else if (param_1[0xc] != 0) {
            FUN_18041ee20(param_1);
            *(int64_t *)(param_1 + 0x2e) = *(int64_t *)(param_1 + 0x2e) + 1;
            puVar3 = *(int8_t **)(param_1 + 0x2e);
          }
        }
        auStack_458[lVar2 * 4 + 3] = 0xff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar24);
    }
    lVar2 = lStack_478;
    func_0x00018041ee90(param_1,((iStack_4b4 - ((iVar10 != 0xc) + 3) * iVar24) - iVar10) + -0xe);
    if (iStack_4b8 == 4) {
      uVar22 = *param_1 + 1 >> 1;
    }
    else {
      if (iStack_4b8 != 8) goto LAB_18042864f;
      uVar22 = *param_1;
    }
    uVar8 = param_1[1];
    uVar16 = -uVar22 & 3;
    iVar24 = 0;
    uVar22 = uStack_49c;
    if (0 < (int)uVar8) {
      do {
        iVar10 = 0;
        if (0 < (int)*param_1) {
          do {
            pbVar1 = *(byte **)(param_1 + 0x2e);
            if (pbVar1 < *(byte **)(param_1 + 0x30)) {
              bVar6 = *pbVar1;
              *(byte **)(param_1 + 0x2e) = pbVar1 + 1;
            }
            else if (param_1[0xc] == 0) {
              bVar6 = 0;
            }
            else {
              FUN_18041ee20(param_1);
              bVar6 = **(byte **)(param_1 + 0x2e);
              *(byte **)(param_1 + 0x2e) = *(byte **)(param_1 + 0x2e) + 1;
            }
            uVar9 = 0;
            if (iStack_4b8 == 4) {
              uVar9 = (uint64_t)(bVar6 & 0xf);
              bVar6 = bVar6 >> 4;
            }
            lVar4 = (uint64_t)bVar6 * 4;
            *(int8_t *)(iVar13 + lVar2) = auStack_458[lVar4];
            *(int8_t *)((iVar13 + 1) + lVar2) = auStack_458[lVar4 + 1];
            iVar17 = iVar13 + 3;
            *(int8_t *)((iVar13 + 2) + lVar2) = auStack_458[lVar4 + 2];
            if (uVar21 == 4) {
              lVar4 = (int64_t)iVar17;
              iVar17 = iVar13 + 4;
              *(int8_t *)(lVar4 + lVar2) = 0xff;
            }
            iVar13 = iVar17;
            if (iVar10 + 1U == *param_1) break;
            if (iStack_4b8 == 8) {
              pbVar1 = *(byte **)(param_1 + 0x2e);
              if (pbVar1 < *(byte **)(param_1 + 0x30)) {
                bVar6 = *pbVar1;
                *(byte **)(param_1 + 0x2e) = pbVar1 + 1;
              }
              else if (param_1[0xc] == 0) {
                bVar6 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                bVar6 = **(byte **)(param_1 + 0x2e);
                *(byte **)(param_1 + 0x2e) = *(byte **)(param_1 + 0x2e) + 1;
              }
              uVar9 = (uint64_t)bVar6;
            }
            lVar4 = uVar9 * 4;
            *(int8_t *)(iVar17 + lVar2) = auStack_458[lVar4];
            *(int8_t *)((iVar17 + 1) + lVar2) = auStack_458[lVar4 + 1];
            iVar13 = iVar17 + 3;
            *(int8_t *)((iVar17 + 2) + lVar2) = auStack_458[lVar4 + 2];
            if (uVar21 == 4) {
              lVar4 = (int64_t)iVar13;
              iVar13 = iVar17 + 4;
              *(int8_t *)(lVar4 + lVar2) = 0xff;
            }
            iVar10 = iVar10 + 2;
          } while (iVar10 < (int)*param_1);
        }
        if ((*(int64_t *)(param_1 + 4) == 0) ||
           (uVar22 = param_1[0x2e], (int)uVar16 <= (int)(param_1[0x30] - uVar22))) {
          *(uint64_t *)(param_1 + 0x2e) = *(int64_t *)(param_1 + 0x2e) + (uint64_t)uVar16;
        }
        else {
          *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x30);
          (**(code **)(param_1 + 6))
                    (*(uint64_t *)(param_1 + 10),uVar16 - (param_1[0x30] - uVar22));
        }
        uVar8 = param_1[1];
        iVar24 = iVar24 + 1;
        uVar22 = uStack_49c;
      } while (iVar24 < (int)uVar8);
    }
  }
  else {
    iStack_4e4 = 0;
    uVar16 = 0;
    uStack_4e0 = 0;
    uVar23 = 0;
    iStack_4d4 = 0;
    uStack_4dc = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4cc = 0;
    uStack_4c0 = 0;
    func_0x00018041ee90(param_1,(iStack_4b4 - iStack_4b0) + -0xe);
    if (iVar13 == 0x18) {
      iVar24 = *param_1 * 3;
    }
    else if (iVar13 == 0x10) {
      iVar24 = *param_1 * 2;
    }
    else {
      iVar24 = 0;
    }
    uStack_4c8 = -iVar24 & 3;
    uVar9 = (uint64_t)uStack_4ac;
    if (iVar13 == 0x18) {
      lStack_498 = 1;
      iVar24 = 0;
      uVar20 = 0;
      uVar14 = 0;
      uVar7 = 0;
      uVar16 = 0;
    }
    else {
      if (((iVar13 == 0x20) && (uStack_4a4 == 0xff)) &&
         ((uStack_4a8 == 0xff00 && (uStack_4ac == 0xff0000)))) {
        if (uStack_4a0 == 0xff000000) {
          lStack_498 = 2;
          iVar24 = 0;
          uVar20 = uVar23;
          uVar14 = uVar23;
          uVar7 = uVar23;
          goto LAB_180428199;
        }
      }
      else if (((uStack_4ac == 0) || (uStack_4a8 == 0)) || (uStack_4a4 == 0)) goto LAB_18042864f;
      uVar18 = (uint64_t)uStack_4a0;
      iStack_4e4 = func_0x000180427680(uVar9);
      uVar19 = (uint64_t)uStack_4a8;
      iStack_4e4 = iStack_4e4 + -7;
      uVar16 = ((uint)(uVar9 >> 1) & 0x55555555) + ((uint)uVar9 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = (uVar16 >> 4) + uVar16 & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      uVar20 = (uVar16 >> 0x10) + uVar16 & 0xff;
      uStack_4d8 = uVar20;
      iVar24 = iStack_4e4;
      iVar13 = func_0x000180427680(uVar19);
      uVar9 = (uint64_t)uStack_4a4;
      uVar14 = iVar13 - 7;
      uVar16 = ((uint)(uVar19 >> 1) & 0x55555555) + ((uint)uVar19 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = (uVar16 >> 4) + uVar16 & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      uStack_4d0 = (uVar16 >> 0x10) + uVar16 & 0xff;
      uStack_4e0 = uVar14;
      iStack_4d4 = func_0x000180427680(uVar9);
      iStack_4d4 = iStack_4d4 + -7;
      uVar16 = ((uint)(uVar9 >> 1) & 0x55555555) + ((uint)uVar9 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = (uVar16 >> 4) + uVar16 & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      uStack_4cc = (uVar16 >> 0x10) + uVar16 & 0xff;
      iVar13 = func_0x000180427680(uVar18 & 0xffffffff);
      uVar16 = ((uint)(uVar18 >> 1) & 0x55555555) + ((uint)uVar18 & 0x55555555);
      uVar7 = iVar13 - 7;
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = (uVar16 >> 4) + uVar16 & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      uVar16 = (uVar16 >> 0x10) + uVar16 & 0xff;
      lStack_498 = 0;
      uStack_4dc = uVar7;
      uStack_4c0 = uVar16;
    }
LAB_180428199:
    uVar8 = param_1[1];
    iStack_4c4 = 0;
    if (0 < (int)uVar8) {
      iStack_48c = -iVar24;
      iStack_488 = -uVar14;
      iStack_484 = -iStack_4d4;
      iStack_480 = -uVar7;
      do {
        if (lStack_498 == 0) {
          uStack_490 = 0;
          if (0 < (int)*param_1) {
            iVar24 = 0;
            puVar3 = (int8_t *)((int)uVar23 + lVar2);
            do {
              uVar22 = FUN_18041f0a0(param_1);
              if (iStack_4b8 != 0x10) {
                iVar13 = FUN_18041f0a0(param_1);
                uVar22 = uVar22 + iVar13 * 0x10000;
              }
              iVar13 = (uVar22 & uStack_4ac) << ((byte)iStack_48c & 0x1f);
              if (-1 < iStack_4e4) {
                iVar13 = (int)(uVar22 & uStack_4ac) >> ((byte)iStack_4e4 & 0x1f);
              }
              uVar5 = (int8_t)iVar13;
              uVar14 = uVar20;
              iVar10 = iVar13;
              if (uVar20 < 8) {
                do {
                  uVar7 = uVar14 + uVar20;
                  iVar10 = iVar10 + (iVar13 >> ((byte)uVar14 & 0x1f));
                  uVar5 = (int8_t)iVar10;
                  uVar14 = uVar7;
                } while ((int)uVar7 < 8);
              }
              *puVar3 = uVar5;
              iVar13 = (uVar22 & uStack_4a8) << ((byte)iStack_488 & 0x1f);
              if (-1 < (int)uStack_4e0) {
                iVar13 = (int)(uVar22 & uStack_4a8) >> ((byte)uStack_4e0 & 0x1f);
              }
              uVar5 = (int8_t)iVar13;
              uVar14 = uStack_4d0;
              iVar10 = iVar13;
              if (uStack_4d0 < 8) {
                do {
                  uVar7 = uVar14 + uStack_4d0;
                  iVar10 = iVar10 + (iVar13 >> ((byte)uVar14 & 0x1f));
                  uVar5 = (int8_t)iVar10;
                  uVar14 = uVar7;
                } while ((int)uVar7 < 8);
              }
              puVar3[1] = uVar5;
              iVar13 = (uVar22 & uStack_4a4) << ((byte)iStack_484 & 0x1f);
              if (-1 < iStack_4d4) {
                iVar13 = (int)(uVar22 & uStack_4a4) >> ((byte)iStack_4d4 & 0x1f);
              }
              uVar14 = uStack_4cc;
              iVar10 = iVar13;
              if (uStack_4cc < 8) {
                do {
                  uVar7 = uVar14 + uStack_4cc;
                  iVar10 = iVar10 + (iVar13 >> ((byte)uVar14 & 0x1f));
                  uVar14 = uVar7;
                } while ((int)uVar7 < 8);
              }
              puVar3[2] = (char)iVar10;
              puVar12 = puVar3 + 3;
              if (uStack_4a0 == 0) {
                uVar22 = 0xff;
              }
              else {
                uVar14 = (uVar22 & uStack_4a0) << ((byte)iStack_480 & 0x1f);
                if (-1 < (int)uStack_4dc) {
                  uVar14 = (int)(uVar22 & uStack_4a0) >> ((byte)uStack_4dc & 0x1f);
                }
                uVar7 = uVar16;
                uVar22 = uVar14;
                if (uVar16 < 8) {
                  do {
                    uVar8 = uVar7 + uVar16;
                    uVar22 = uVar22 + ((int)uVar14 >> ((byte)uVar7 & 0x1f));
                    uVar7 = uVar8;
                  } while ((int)uVar8 < 8);
                }
              }
              uStack_4e8 = uStack_4e8 | uVar22;
              uVar14 = uVar23 + 3;
              if (uVar21 == 4) {
                *puVar12 = (char)uVar22;
                puVar12 = puVar3 + 4;
                uVar14 = uVar23 + 4;
              }
              uVar23 = uVar14;
              iVar24 = iVar24 + 1;
              lVar2 = lStack_478;
              puVar3 = puVar12;
            } while (iVar24 < (int)*param_1);
          }
        }
        else {
          iVar24 = 0;
          if (0 < (int)*param_1) {
            puVar3 = (int8_t *)((int)uVar23 + lVar2);
            puVar12 = puVar3 + 1;
            puVar25 = puVar3 + 2;
            do {
              puVar11 = *(int8_t **)(param_1 + 0x2e);
              if (puVar11 < *(int8_t **)(param_1 + 0x30)) {
                uVar5 = *puVar11;
                *(int8_t **)(param_1 + 0x2e) = puVar11 + 1;
              }
              else if (param_1[0xc] == 0) {
                uVar5 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                uVar5 = **(int8_t **)(param_1 + 0x2e);
                *(int8_t **)(param_1 + 0x2e) = *(int8_t **)(param_1 + 0x2e) + 1;
              }
              *puVar25 = uVar5;
              puVar11 = *(int8_t **)(param_1 + 0x2e);
              if (puVar11 < *(int8_t **)(param_1 + 0x30)) {
                uVar5 = *puVar11;
                *(int8_t **)(param_1 + 0x2e) = puVar11 + 1;
              }
              else if (param_1[0xc] == 0) {
                uVar5 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                uVar5 = **(int8_t **)(param_1 + 0x2e);
                *(int8_t **)(param_1 + 0x2e) = *(int8_t **)(param_1 + 0x2e) + 1;
              }
              *puVar12 = uVar5;
              puVar11 = *(int8_t **)(param_1 + 0x2e);
              if (puVar11 < *(int8_t **)(param_1 + 0x30)) {
                uVar5 = *puVar11;
                *(int8_t **)(param_1 + 0x2e) = puVar11 + 1;
              }
              else if (param_1[0xc] == 0) {
                uVar5 = 0;
              }
              else {
                FUN_18041ee20(param_1);
                uVar5 = **(int8_t **)(param_1 + 0x2e);
                *(int8_t **)(param_1 + 0x2e) = *(int8_t **)(param_1 + 0x2e) + 1;
              }
              *puVar3 = uVar5;
              puVar15 = puVar3 + 3;
              puVar26 = puVar25 + 3;
              puVar11 = puVar12 + 3;
              if (lStack_498 == 2) {
                pbVar1 = *(byte **)(param_1 + 0x2e);
                if (pbVar1 < *(byte **)(param_1 + 0x30)) {
                  uVar22 = (uint)*pbVar1;
                  *(byte **)(param_1 + 0x2e) = pbVar1 + 1;
                }
                else if (param_1[0xc] == 0) {
                  uVar22 = 0;
                }
                else {
                  FUN_18041ee20(param_1);
                  uVar22 = (uint)**(byte **)(param_1 + 0x2e);
                  *(byte **)(param_1 + 0x2e) = *(byte **)(param_1 + 0x2e) + 1;
                }
              }
              else {
                uVar22 = 0xff;
              }
              uStack_4e8 = uStack_4e8 | uVar22;
              uVar16 = uVar23 + 3;
              if (uVar21 == 4) {
                *puVar15 = (char)uVar22;
                puVar26 = puVar25 + 4;
                puVar11 = puVar12 + 4;
                puVar15 = puVar3 + 4;
                uVar16 = uVar23 + 4;
              }
              uVar23 = uVar16;
              iVar24 = iVar24 + 1;
              puVar12 = puVar11;
              puVar3 = puVar15;
              puVar25 = puVar26;
            } while (iVar24 < (int)*param_1);
          }
        }
        if ((*(int64_t *)(param_1 + 4) == 0) ||
           (uVar22 = param_1[0x2e], (int)uStack_4c8 <= (int)(param_1[0x30] - uVar22))) {
          *(uint64_t *)(param_1 + 0x2e) = *(int64_t *)(param_1 + 0x2e) + (uint64_t)uStack_4c8;
        }
        else {
          *(uint64_t *)(param_1 + 0x2e) = *(uint64_t *)(param_1 + 0x30);
          (**(code **)(param_1 + 6))
                    (*(uint64_t *)(param_1 + 10),uStack_4c8 - (param_1[0x30] - uVar22));
        }
        uVar8 = param_1[1];
        iStack_4c4 = iStack_4c4 + 1;
        uVar20 = uStack_4d8;
        uVar16 = uStack_4c0;
        uVar22 = uStack_4e8;
      } while (iStack_4c4 < (int)uVar8);
    }
  }
  if (((uVar21 == 4) && (uVar22 == 0)) &&
     (iVar24 = *param_1 * uVar8 * 4 + -1, lVar4 = (int64_t)iVar24, -1 < iVar24)) {
    do {
      *(int8_t *)(lVar4 + lVar2) = 0xff;
      lVar4 = lVar4 + -4;
    } while (-1 < lVar4);
    uVar8 = param_1[1];
  }
  if ((0 < (int)uStack_47c) && (iVar24 = 0, (uVar8 & 0xfffffffe) != 0 && -1 < (int)uVar8)) {
    do {
      uVar22 = *param_1;
      iVar13 = 0;
      uVar9 = (uint64_t)(((uVar8 - iVar24) + -1) * uVar22 * uVar21);
      puVar3 = (int8_t *)(uVar9 + lVar2);
      if (0 < (int)(uVar22 * uVar21)) {
        lVar4 = uVar22 * iVar24 * uVar21 - uVar9;
        do {
          iVar13 = iVar13 + 1;
          uVar5 = puVar3[lVar4];
          puVar3[lVar4] = *puVar3;
          *puVar3 = uVar5;
          puVar3 = puVar3 + 1;
        } while (iVar13 < (int)(*param_1 * uVar21));
      }
      uVar8 = param_1[1];
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)uVar8 >> 1);
  }
  *puStack_470 = *param_1;
  *puStack_468 = param_1[1];
  if (puStack_460 != (uint *)0x0) {
    *puStack_460 = param_1[2];
  }
LAB_180428659:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_508);
}



uint64_t FUN_180428680(int64_t param_1,int *param_2,int *param_3,uint *param_4)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  pbVar4 = *(byte **)(param_1 + 0xb8);
  pbVar3 = *(byte **)(param_1 + 0xc0);
  if (pbVar4 < pbVar3) {
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_18041ee20(param_1);
    *(int64_t *)(param_1 + 0xb8) = *(int64_t *)(param_1 + 0xb8) + 1;
    pbVar4 = *(byte **)(param_1 + 0xb8);
    pbVar3 = *(byte **)(param_1 + 0xc0);
  }
  if (pbVar4 < pbVar3) {
    bVar6 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar6 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar6 = **(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  if (1 < bVar6) {
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
    return 0;
  }
  if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
    bVar5 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar5 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    bVar5 = **(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
  }
  bVar1 = false;
  if (bVar6 == 1) {
    if ((bVar5 - 1 & 0xf7) != 0) {
LAB_18042887b:
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
      *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
      return 0;
    }
    if ((*(int64_t *)(param_1 + 0x10) == 0) ||
       (iVar9 = *(int *)(param_1 + 0xc0) - (int)pbVar4, 3 < iVar9)) {
      pbVar4 = pbVar4 + 4;
      *(byte **)(param_1 + 0xb8) = pbVar4;
    }
    else {
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28),4 - iVar9);
      pbVar4 = *(byte **)(param_1 + 0xb8);
    }
    if (pbVar4 < *(byte **)(param_1 + 0xc0)) {
      bVar6 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar4;
    }
    else {
      if (*(int *)(param_1 + 0x30) == 0) {
        bVar6 = 0;
      }
      else {
        FUN_18041ee20(param_1);
        bVar6 = **(byte **)(param_1 + 0xb8);
        pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
      }
      pbVar3 = (byte *)((uint64_t)pbVar4 & 0xffffffff);
    }
    uVar7 = (uint)bVar6;
    if ((0x20 < bVar6) || ((0x101018100U >> ((uint64_t)bVar6 & 0x3f) & 1) == 0))
    goto LAB_18042887b;
    if ((*(int64_t *)(param_1 + 0x10) == 0) || (3 < *(int *)(param_1 + 0xc0) - (int)pbVar3)) {
      *(byte **)(param_1 + 0xb8) = pbVar4 + 4;
    }
    else {
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
    }
  }
  else {
    if ((bVar5 - 2 & 0xf6) != 0) goto LAB_18042887b;
    if ((*(int64_t *)(param_1 + 0x10) == 0) || (8 < *(int *)(param_1 + 0xc0) - (int)pbVar4)) {
      *(byte **)(param_1 + 0xb8) = pbVar4 + 9;
    }
    else {
      *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xc0);
      (**(code **)(param_1 + 0x18))(*(uint64_t *)(param_1 + 0x28));
    }
    uVar7 = 0;
  }
  iVar9 = FUN_18041f0a0(param_1);
  if (iVar9 < 1) {
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
    return 0;
  }
  iVar2 = FUN_18041f0a0(param_1);
  if (iVar2 < 1) goto LAB_180428a0b;
  pbVar4 = *(byte **)(param_1 + 0xb8);
  pbVar3 = *(byte **)(param_1 + 0xc0);
  if (pbVar4 < pbVar3) {
    uVar8 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    uVar8 = 0;
  }
  else {
    FUN_18041ee20(param_1);
    pbVar3 = *(byte **)(param_1 + 0xc0);
    uVar8 = (uint)**(byte **)(param_1 + 0xb8);
    pbVar4 = *(byte **)(param_1 + 0xb8) + 1;
    *(byte **)(param_1 + 0xb8) = pbVar4;
  }
  if (pbVar4 < pbVar3) {
    *(byte **)(param_1 + 0xb8) = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_18041ee20(param_1);
    *(int64_t *)(param_1 + 0xb8) = *(int64_t *)(param_1 + 0xb8) + 1;
  }
  if (uVar7 == 0) {
    if ((bVar5 == 3) || (bVar5 == 0xb)) {
      bVar1 = true;
    }
    if (uVar8 == 8) {
LAB_180428a3e:
      uVar8 = 1;
      goto LAB_180428a43;
    }
    if (uVar8 != 0xf) {
      uVar7 = uVar8;
      if (uVar8 != 0x10) goto joined_r0x0001804289fb;
      if (bVar1) {
        uVar8 = 2;
        goto LAB_180428a43;
      }
    }
  }
  else {
    if ((uVar8 - 8 & 0xfffffff7) != 0) goto LAB_180428a0b;
    if (uVar7 == 8) goto LAB_180428a3e;
    if ((uVar7 != 0xf) && (uVar7 != 0x10)) {
joined_r0x0001804289fb:
      if (((uVar7 != 0x18) && (uVar7 != 0x20)) || (uVar8 = uVar7 >> 3, uVar7 >> 3 == 0)) {
LAB_180428a0b:
        *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 200);
        *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0xd0);
        return 0;
      }
      goto LAB_180428a43;
    }
  }
  uVar8 = 3;
LAB_180428a43:
  if (param_2 != (int *)0x0) {
    *param_2 = iVar9;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar8;
  }
  return 1;
}



uint64_t FUN_180428782(int64_t param_1)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint uVar4;
  char unaff_DIL;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int64_t unaff_R12;
  uint *unaff_R13;
  int *in_stack_00000068;
  int *in_stack_00000070;
  
  uVar6 = (uint)unaff_R12;
  if (unaff_DIL == '\x01') {
    if ((unaff_BPL - 1U & 0xf7) != 0) {
LAB_18042887b:
      *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
      *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
      return 0;
    }
    uVar4 = uVar6 + 4;
    if ((*(int64_t *)(unaff_RBX + 0x10) == unaff_R12) ||
       (iVar8 = *(int *)(unaff_RBX + 0xc0) - (int)param_1, (int)uVar4 <= iVar8)) {
      pbVar2 = (byte *)(param_1 + (uint64_t)uVar4);
      *(byte **)(unaff_RBX + 0xb8) = pbVar2;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 0xc0);
      (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28),uVar4 - iVar8);
      pbVar2 = *(byte **)(unaff_RBX + 0xb8);
    }
    if (pbVar2 < *(byte **)(unaff_RBX + 0xc0)) {
      bVar7 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar2;
    }
    else {
      if (*(uint *)(unaff_RBX + 0x30) == uVar6) {
        bVar7 = 0;
      }
      else {
        FUN_18041ee20();
        bVar7 = **(byte **)(unaff_RBX + 0xb8);
        pbVar2 = *(byte **)(unaff_RBX + 0xb8) + 1;
      }
      pbVar3 = (byte *)((uint64_t)pbVar2 & 0xffffffff);
    }
    if ((0x20 < bVar7) || ((0x101018100U >> ((uint64_t)bVar7 & 0x3f) & 1) == 0))
    goto LAB_18042887b;
    uVar5 = (uint)bVar7;
    if ((*(int64_t *)(unaff_RBX + 0x10) == unaff_R12) ||
       ((int)uVar4 <= *(int *)(unaff_RBX + 0xc0) - (int)pbVar3)) {
      *(byte **)(unaff_RBX + 0xb8) = pbVar2 + 4;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 0xc0);
      (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28));
    }
  }
  else {
    if ((unaff_BPL - 2U & 0xf6) != 0) goto LAB_18042887b;
    uVar5 = uVar6;
    if ((*(int64_t *)(unaff_RBX + 0x10) == unaff_R12) ||
       (8 < *(int *)(unaff_RBX + 0xc0) - (int)param_1)) {
      *(int64_t *)(unaff_RBX + 0xb8) = param_1 + 9;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 0xc0);
      (**(code **)(unaff_RBX + 0x18))(*(uint64_t *)(unaff_RBX + 0x28));
    }
  }
  iVar8 = FUN_18041f0a0();
  if (iVar8 < 1) {
    *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
    *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
    return 0;
  }
  iVar1 = FUN_18041f0a0();
  if (iVar1 < 1) goto LAB_180428a0b;
  pbVar2 = *(byte **)(unaff_RBX + 0xb8);
  pbVar3 = *(byte **)(unaff_RBX + 0xc0);
  if (pbVar2 < pbVar3) {
    uVar4 = (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
    *(byte **)(unaff_RBX + 0xb8) = pbVar2;
  }
  else if (*(uint *)(unaff_RBX + 0x30) == uVar6) {
    uVar4 = 0;
  }
  else {
    FUN_18041ee20();
    pbVar3 = *(byte **)(unaff_RBX + 0xc0);
    uVar4 = (uint)**(byte **)(unaff_RBX + 0xb8);
    pbVar2 = *(byte **)(unaff_RBX + 0xb8) + 1;
    *(byte **)(unaff_RBX + 0xb8) = pbVar2;
  }
  if (pbVar2 < pbVar3) {
    *(byte **)(unaff_RBX + 0xb8) = pbVar2 + 1;
  }
  else if (*(uint *)(unaff_RBX + 0x30) != uVar6) {
    FUN_18041ee20();
    *(int64_t *)(unaff_RBX + 0xb8) = *(int64_t *)(unaff_RBX + 0xb8) + 1;
  }
  if (uVar5 == 0) {
    if ((unaff_BPL == '\x03') || (unaff_BPL == '\v')) {
      unaff_R12 = 1;
    }
    if (uVar4 == 8) {
LAB_180428a3e:
      uVar6 = 1;
      goto LAB_180428a43;
    }
    if (uVar4 != 0xf) {
      uVar5 = uVar4;
      if (uVar4 != 0x10) goto joined_r0x0001804289fb;
      if ((int)unaff_R12 != 0) {
        uVar6 = 2;
        goto LAB_180428a43;
      }
    }
  }
  else {
    if ((uVar4 - 8 & 0xfffffff7) != 0) goto LAB_180428a0b;
    if (uVar5 == 8) goto LAB_180428a3e;
    if ((uVar5 != 0xf) && (uVar5 != 0x10)) {
joined_r0x0001804289fb:
      if (((uVar5 != 0x18) && (uVar5 != 0x20)) || (uVar6 = uVar5 >> 3, uVar5 >> 3 == 0)) {
LAB_180428a0b:
        *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
        *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
        return 0;
      }
      goto LAB_180428a43;
    }
  }
  uVar6 = 3;
LAB_180428a43:
  if (in_stack_00000068 != (int *)0x0) {
    *in_stack_00000068 = iVar8;
  }
  if (in_stack_00000070 != (int *)0x0) {
    *in_stack_00000070 = iVar1;
  }
  if (unaff_R13 != (uint *)0x0) {
    *unaff_R13 = uVar6;
  }
  return 1;
}



uint64_t FUN_1804288e4(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint unaff_EDI;
  uint uVar5;
  int unaff_R12D;
  uint *unaff_R13;
  int *in_stack_00000068;
  int *in_stack_00000070;
  
  iVar1 = FUN_18041f0a0();
  if (iVar1 < 1) {
    *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
    *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
    return 0;
  }
  iVar2 = FUN_18041f0a0();
  if (iVar2 < 1) goto LAB_180428a0b;
  pbVar3 = *(byte **)(unaff_RBX + 0xb8);
  pbVar4 = *(byte **)(unaff_RBX + 0xc0);
  if (pbVar3 < pbVar4) {
    uVar5 = (uint)*pbVar3;
    pbVar3 = pbVar3 + 1;
    *(byte **)(unaff_RBX + 0xb8) = pbVar3;
  }
  else if (*(int *)(unaff_RBX + 0x30) == unaff_R12D) {
    uVar5 = 0;
  }
  else {
    FUN_18041ee20();
    pbVar4 = *(byte **)(unaff_RBX + 0xc0);
    uVar5 = (uint)**(byte **)(unaff_RBX + 0xb8);
    pbVar3 = *(byte **)(unaff_RBX + 0xb8) + 1;
    *(byte **)(unaff_RBX + 0xb8) = pbVar3;
  }
  if (pbVar3 < pbVar4) {
    *(byte **)(unaff_RBX + 0xb8) = pbVar3 + 1;
  }
  else if (*(int *)(unaff_RBX + 0x30) != unaff_R12D) {
    FUN_18041ee20();
    *(int64_t *)(unaff_RBX + 0xb8) = *(int64_t *)(unaff_RBX + 0xb8) + 1;
  }
  if (unaff_EDI == 0) {
    if ((unaff_BPL == '\x03') || (unaff_BPL == '\v')) {
      unaff_R12D = 1;
    }
    if (uVar5 == 8) {
LAB_180428a3e:
      uVar5 = 1;
      goto LAB_180428a43;
    }
    if (uVar5 != 0xf) {
      if (uVar5 != 0x10) {
        unaff_EDI = uVar5;
        if ((uVar5 != 0x18) && (uVar5 != 0x20)) goto LAB_180428a0b;
        goto LAB_180428a04;
      }
      if (unaff_R12D != 0) {
        uVar5 = 2;
        goto LAB_180428a43;
      }
    }
  }
  else {
    if ((uVar5 - 8 & 0xfffffff7) != 0) goto LAB_180428a0b;
    if (unaff_EDI == 8) goto LAB_180428a3e;
    if ((unaff_EDI != 0xf) && (unaff_EDI != 0x10)) {
      if ((unaff_EDI != 0x18) && (unaff_EDI != 0x20)) goto LAB_180428a0b;
LAB_180428a04:
      uVar5 = unaff_EDI >> 3;
      if (unaff_EDI >> 3 == 0) {
LAB_180428a0b:
        *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
        *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
        return 0;
      }
      goto LAB_180428a43;
    }
  }
  uVar5 = 3;
LAB_180428a43:
  if (in_stack_00000068 != (int *)0x0) {
    *in_stack_00000068 = iVar1;
  }
  if (in_stack_00000070 != (int *)0x0) {
    *in_stack_00000070 = iVar2;
  }
  if (unaff_R13 != (uint *)0x0) {
    *unaff_R13 = uVar5;
  }
  return 1;
}



uint64_t FUN_18042891c(void)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int64_t unaff_RBX;
  char unaff_BPL;
  uint unaff_EDI;
  uint uVar4;
  int unaff_R12D;
  uint *unaff_R13;
  int32_t unaff_R15D;
  int32_t *in_stack_00000068;
  int *in_stack_00000070;
  
  iVar1 = FUN_18041f0a0();
  if (iVar1 < 1) goto LAB_180428a0b;
  pbVar2 = *(byte **)(unaff_RBX + 0xb8);
  pbVar3 = *(byte **)(unaff_RBX + 0xc0);
  if (pbVar2 < pbVar3) {
    uVar4 = (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
    *(byte **)(unaff_RBX + 0xb8) = pbVar2;
  }
  else if (*(int *)(unaff_RBX + 0x30) == unaff_R12D) {
    uVar4 = 0;
  }
  else {
    FUN_18041ee20();
    pbVar3 = *(byte **)(unaff_RBX + 0xc0);
    uVar4 = (uint)**(byte **)(unaff_RBX + 0xb8);
    pbVar2 = *(byte **)(unaff_RBX + 0xb8) + 1;
    *(byte **)(unaff_RBX + 0xb8) = pbVar2;
  }
  if (pbVar2 < pbVar3) {
    *(byte **)(unaff_RBX + 0xb8) = pbVar2 + 1;
  }
  else if (*(int *)(unaff_RBX + 0x30) != unaff_R12D) {
    FUN_18041ee20();
    *(int64_t *)(unaff_RBX + 0xb8) = *(int64_t *)(unaff_RBX + 0xb8) + 1;
  }
  if (unaff_EDI == 0) {
    if ((unaff_BPL == '\x03') || (unaff_BPL == '\v')) {
      unaff_R12D = 1;
    }
    if (uVar4 == 8) {
LAB_180428a3e:
      uVar4 = 1;
      goto LAB_180428a43;
    }
    if (uVar4 != 0xf) {
      if (uVar4 != 0x10) {
        unaff_EDI = uVar4;
        if ((uVar4 != 0x18) && (uVar4 != 0x20)) goto LAB_180428a0b;
        goto LAB_180428a04;
      }
      if (unaff_R12D != 0) {
        uVar4 = 2;
        goto LAB_180428a43;
      }
    }
  }
  else {
    if ((uVar4 - 8 & 0xfffffff7) != 0) goto LAB_180428a0b;
    if (unaff_EDI == 8) goto LAB_180428a3e;
    if ((unaff_EDI != 0xf) && (unaff_EDI != 0x10)) {
      if ((unaff_EDI != 0x18) && (unaff_EDI != 0x20)) goto LAB_180428a0b;
LAB_180428a04:
      uVar4 = unaff_EDI >> 3;
      if (unaff_EDI >> 3 == 0) {
LAB_180428a0b:
        *(uint64_t *)(unaff_RBX + 0xb8) = *(uint64_t *)(unaff_RBX + 200);
        *(uint64_t *)(unaff_RBX + 0xc0) = *(uint64_t *)(unaff_RBX + 0xd0);
        return 0;
      }
      goto LAB_180428a43;
    }
  }
  uVar4 = 3;
LAB_180428a43:
  if (in_stack_00000068 != (int32_t *)0x0) {
    *in_stack_00000068 = unaff_R15D;
  }
  if (in_stack_00000070 != (int *)0x0) {
    *in_stack_00000070 = iVar1;
  }
  if (unaff_R13 != (uint *)0x0) {
    *unaff_R13 = uVar4;
  }
  return 1;
}







