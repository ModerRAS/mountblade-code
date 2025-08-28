#include "TaleWorlds.Native.Split.h"

// 01_initialization_part025.c - 14 个函数

// 函数: 初始化资源管理器
void initialize_resource_manager(longlong *context_ptr)

{
  undefined8 *******pppppppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 *******pppppppuVar14;
  longlong *plVar15;
  uint uVar16;
  undefined *puVar17;
  longlong lVar18;
  undefined8 ******ppppppuVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_3b8 [32];
  undefined *puStack_398;
  undefined1 *puStack_390;
  undefined4 uStack_388;
  ulonglong uStack_380;
  uint uStack_378;
  int iStack_374;
  int iStack_370;
  longlong lStack_368;
  undefined8 ******ppppppuStack_360;
  undefined8 ******ppppppuStack_358;
  undefined8 ******ppppppuStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined4 uStack_320;
  ulonglong uStack_318;
  longlong lStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined *puStack_2e8;
  longlong lStack_2e0;
  undefined4 uStack_2d0;
  longlong lStack_2c8;
  ulonglong uStack_2c0;
  longlong lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
  undefined4 uStack_280;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x180059023;
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x270,8,3);
  uStack_30 = 0x18005902b;
  lVar10 = FUN_180175aa0(uVar9);
  uVar7 = *(undefined4 *)(_DAT_180c86920 + 0x1dc0);
  _DAT_180c8a9d0 = lVar10;
  *(undefined4 *)(lVar10 + 0x1e0) = *(undefined4 *)(_DAT_180c86920 + 0x1d50);
  *(undefined4 *)(lVar10 + 0x1e4) = uVar7;
  uStack_30 = 0x180059066;
  (**(code **)(**(longlong **)(*param_1 + 0x2b0) + 0xf8))();
  uStack_298 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  uStack_378 = 0;
  lStack_310 = _DAT_180c8a9d0;
  *(undefined8 *)(_DAT_180c8a9d0 + 0xf0) = 0;
  uStack_338 = 3;
  ppppppuStack_360 = &ppppppuStack_360;
  ppppppuStack_358 = &ppppppuStack_360;
  ppppppuStack_350 = (undefined8 *******)0x0;
  uStack_348 = 0;
  uStack_340 = 0;
  lStack_2b8 = *_DAT_180c86870;
  iStack_370 = 0;
  lVar10 = *(longlong *)(lStack_2b8 + 0x8a8);
  if (*(longlong *)(lStack_2b8 + 0x8b0) - lVar10 >> 5 != 0) {
    lStack_368 = 0;
    do {
      lVar12 = lStack_368;
      iVar8 = iStack_370;
      puVar17 = *(undefined **)(lStack_368 * 0x20 + 8 + lVar10);
      puVar13 = &DAT_18098bc73;
      if (puVar17 != (undefined *)0x0) {
        puVar13 = puVar17;
      }
      puStack_398 = &UNK_180a3c3e0;
      uStack_380 = 0;
      puStack_390 = (undefined1 *)0x0;
      uStack_388 = 0;
      if (puVar13 != (undefined *)0x0) {
        lVar10 = -1;
        do {
          lVar18 = lVar10;
          lVar10 = lVar18 + 1;
        } while (puVar13[lVar10] != '\0');
        if ((int)lVar10 != 0) {
          iVar20 = (int)lVar18 + 2;
          iVar8 = iVar20;
          if (iVar20 < 0x10) {
            iVar8 = 0x10;
          }
          puVar11 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
          *puVar11 = 0;
          puStack_390 = puVar11;
          uVar7 = FUN_18064e990(puVar11);
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar7);
                    // WARNING: Subroutine does not return
          memcpy(puVar11,puVar13,iVar20);
        }
      }
      uStack_388 = 0;
      FUN_180175f80(&UNK_180a3c3e0,&puStack_2e8,&puStack_398);
      puStack_390 = (undefined1 *)0x0;
      uStack_380 = uStack_380 & 0xffffffff00000000;
      puStack_398 = &UNK_18098bcb0;
      puStack_308 = (undefined8 *)0x0;
      puStack_300 = (undefined8 *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 3;
      puStack_290 = &UNK_1809fdc18;
      puStack_288 = auStack_278;
      auStack_278[0] = 0;
      uStack_280 = 4;
      strcpy_s(auStack_278,0x10,&UNK_180a092c4);
      FUN_18062cb00(&puStack_2e8,&puStack_308,&puStack_290);
      puStack_290 = &UNK_18098bcb0;
      iStack_374 = 0;
      lStack_2c8 = 0;
      uStack_2c0 = (longlong)puStack_300 - (longlong)puStack_308 >> 5;
      puVar2 = puStack_308;
      puVar3 = puStack_308;
      puVar4 = puStack_300;
      if (uStack_2c0 != 0) {
        do {
          lVar10 = lStack_2c8;
          puVar2 = puStack_308;
          iVar8 = iStack_374;
          puVar17 = &DAT_18098bc73;
          if ((undefined *)puStack_308[lStack_2c8 * 4 + 1] != (undefined *)0x0) {
            puVar17 = (undefined *)puStack_308[lStack_2c8 * 4 + 1];
          }
          lVar12 = strrchr(puVar17,0x2f);
          if (lVar12 == 0) {
            puVar17 = &DAT_18098bc73;
            if ((undefined *)puVar2[lVar10 * 4 + 1] != (undefined *)0x0) {
              puVar17 = (undefined *)puVar2[lVar10 * 4 + 1];
            }
          }
          else {
            puVar17 = (undefined *)(lVar12 + 1);
          }
          puVar13 = (undefined *)strchr(puVar17,0x2e);
          if (puVar13 == (undefined *)0x0) {
            puVar13 = &DAT_18098bc73;
            if ((undefined *)puVar2[lVar10 * 4 + 1] != (undefined *)0x0) {
              puVar13 = (undefined *)puVar2[lVar10 * 4 + 1];
            }
            puVar13 = puVar13 + *(int *)(puVar2 + lVar10 * 4 + 2);
          }
          if ((longlong)puVar13 - (longlong)puVar17 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(&uStack_268,puVar17,(longlong)puVar13 - (longlong)puVar17);
          }
                    // WARNING: Ignoring partial resolution of indirect
          uStack_268._0_1_ = 0;
          uVar16 = 0;
          uVar7 = 0;
          puStack_330 = &UNK_180a3c3e0;
          uStack_318 = 0;
          puStack_328 = (undefined *)0x0;
          uStack_320 = 0;
          lVar12 = -1;
          do {
            lVar18 = lVar12;
            lVar12 = lVar18 + 1;
          } while (*(char *)((longlong)&uStack_268 + lVar18 + 1) != '\0');
          if ((int)(lVar18 + 1) != 0) {
            iVar20 = (int)lVar18 + 2;
            iVar8 = iVar20;
            if (iVar20 < 0x10) {
              iVar8 = 0x10;
            }
            puStack_328 = (undefined *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
            *puStack_328 = 0;
            uVar22 = (ulonglong)puStack_328 & 0xffffffffffc00000;
            if (uVar22 != 0) {
              lVar10 = ((longlong)puStack_328 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
              puVar21 = (uint *)(lVar10 - (ulonglong)*(uint *)(lVar10 + 4));
              if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
                uVar16 = puVar21[7];
                if (0x3ffffff < uVar16) {
                  uVar16 = *puVar21 << 0x10;
                }
              }
              else {
                uVar16 = puVar21[7];
                if (uVar16 < 0x4000000) {
                  uVar23 = (ulonglong)uVar16;
                }
                else {
                  uVar23 = (ulonglong)*puVar21 << 0x10;
                }
                if (0x3ffffff < uVar16) {
                  uVar16 = *puVar21 << 0x10;
                }
                uVar16 = uVar16 - (int)(((longlong)puStack_328 -
                                        (((longlong)((longlong)puVar21 + (-0x80 - uVar22)) / 0x50) *
                                         0x10000 + uVar22)) % uVar23);
              }
            }
            uStack_318 = CONCAT44(uStack_318._4_4_,uVar16);
                    // WARNING: Subroutine does not return
            memcpy(puStack_328,&uStack_268,iVar20);
          }
          uStack_320 = 0;
          pppppppuVar14 = &ppppppuStack_360;
          for (pppppppuVar1 = (undefined8 *******)ppppppuStack_350;
              pppppppuVar1 != (undefined8 *******)0x0;
              pppppppuVar1 = (undefined8 *******)pppppppuVar1[1]) {
            pppppppuVar14 = pppppppuVar1;
          }
          if ((pppppppuVar14 == &ppppppuStack_360) ||
             (lVar12 = lVar10, *(int *)(pppppppuVar14 + 6) != 0)) {
            if ((pppppppuVar14 != (undefined8 *******)ppppppuStack_360) &&
               (pppppppuVar14 != &ppppppuStack_360)) {
              func_0x00018066bd70(pppppppuVar14);
            }
            bVar26 = true;
            pppppppuVar14 = &ppppppuStack_360;
            pppppppuVar1 = (undefined8 *******)ppppppuStack_350;
            while (pppppppuVar1 != (undefined8 *******)0x0) {
              bVar26 = *(int *)(pppppppuVar1 + 6) != 0;
              pppppppuVar14 = pppppppuVar1;
              if (bVar26) {
                pppppppuVar1 = (undefined8 *******)pppppppuVar1[1];
              }
              else {
                pppppppuVar1 = (undefined8 *******)*pppppppuVar1;
              }
            }
            lVar12 = lStack_2c8;
            iVar8 = iStack_374;
            if (bVar26) {
              if (pppppppuVar14 == (undefined8 *******)ppppppuStack_358) {
                if ((pppppppuVar14 != &ppppppuStack_360) && (*(int *)(pppppppuVar14 + 6) == 0)) {
                  uVar7 = 1;
                }
                lVar10 = FUN_18062b420(_DAT_180c8ed18,0x60,(undefined1)uStack_338);
                puStack_2b0 = (undefined8 *)(lVar10 + 0x20);
                *puStack_2b0 = &UNK_18098bcb0;
                *(undefined8 *)(lVar10 + 0x28) = 0;
                *(undefined4 *)(lVar10 + 0x30) = 0;
                *puStack_2b0 = &UNK_180a3c3e0;
                *(undefined8 *)(lVar10 + 0x38) = 0;
                *(undefined8 *)(lVar10 + 0x28) = 0;
                *(undefined4 *)(lVar10 + 0x30) = 0;
                puStack_2a8 = puStack_2b0;
                FUN_1806277c0(puStack_2b0,0);
                puStack_2a0 = (undefined8 *)(lVar10 + 0x40);
                *puStack_2a0 = &UNK_18098bcb0;
                *(undefined8 *)(lVar10 + 0x48) = 0;
                *(undefined4 *)(lVar10 + 0x50) = 0;
                *puStack_2a0 = &UNK_180a3c3e0;
                *(undefined8 *)(lVar10 + 0x58) = 0;
                *(undefined8 *)(lVar10 + 0x48) = 0;
                *(undefined4 *)(lVar10 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                FUN_18066bdc0(lVar10,pppppppuVar14,&ppppppuStack_360,uVar7);
              }
              pppppppuVar14 = (undefined8 *******)func_0x00018066b9a0(pppppppuVar14);
              lVar12 = lStack_2c8;
              iVar8 = iStack_374;
            }
          }
          uVar16 = *(uint *)(puVar2 + lVar10 * 4 + 2);
          uVar22 = (ulonglong)uVar16;
          if (puVar2[lVar10 * 4 + 1] != 0) {
            FUN_1806277c0(pppppppuVar14 + 8,uVar22);
          }
          if (uVar16 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(pppppppuVar14[9],puVar2[lVar10 * 4 + 1],uVar22);
          }
          *(undefined4 *)(pppppppuVar14 + 10) = 0;
          if (pppppppuVar14[9] != (undefined8 ******)0x0) {
            *(undefined1 *)(uVar22 + (longlong)pppppppuVar14[9]) = 0;
          }
          *(undefined4 *)((longlong)pppppppuVar14 + 0x5c) =
               *(undefined4 *)((longlong)puVar2 + lVar10 * 0x20 + 0x1c);
          puStack_328 = (undefined *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &UNK_18098bcb0;
          iStack_374 = iVar8 + 1;
          lStack_2c8 = lVar12 + 1;
          puVar2 = puStack_308;
          puVar3 = puStack_308;
          puVar4 = puStack_300;
          iVar8 = iStack_370;
          lVar12 = lStack_368;
        } while ((ulonglong)(longlong)iStack_374 < uStack_2c0);
      }
      for (; puVar6 = puStack_300, puVar5 = puStack_308, puVar2 != puStack_300; puVar2 = puVar2 + 4)
      {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
        (**(code **)*puVar2)(puVar2,0);
        puVar3 = puStack_308;
        puVar4 = puStack_300;
        puStack_300 = puVar6;
        puStack_308 = puVar5;
      }
      if (puStack_308 != (undefined8 *)0x0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      puStack_2e8 = &UNK_180a3c3e0;
      if (lStack_2e0 != 0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_2e0 = 0;
      uStack_2d0 = 0;
      puStack_2e8 = &UNK_18098bcb0;
      iStack_370 = iVar8 + 1;
      lStack_368 = lVar12 + 1;
      lVar10 = *(longlong *)(lStack_2b8 + 0x8a8);
      puStack_308 = puVar3;
      puStack_300 = puVar4;
    } while ((ulonglong)(longlong)iStack_370 <
             (ulonglong)(*(longlong *)(lStack_2b8 + 0x8b0) - lVar10 >> 5));
  }
  uStack_48 = 0x3f8000003f800000;
  uStack_40 = 0x3f000000;
  uStack_3c = 0;
  if ((undefined8 *******)ppppppuStack_358 != &ppppppuStack_360) {
    lVar10 = lStack_310 + 0x150;
    pppppppuVar14 = (undefined8 *******)ppppppuStack_358;
    lVar12 = lStack_310;
    lStack_368 = lVar10;
    do {
      plVar15 = (longlong *)FUN_180058080(lVar10,&puStack_2a0,pppppppuVar14 + 4);
      if (*plVar15 != lVar10) {
        bVar26 = false;
        uVar23 = 0;
        lVar18 = *(longlong *)(lVar12 + 0xc0);
        uVar22 = uVar23;
        if (*(longlong *)(lVar12 + 200) - lVar18 >> 3 != 0) {
          do {
            lVar10 = *(longlong *)(lVar18 + uVar23);
            puStack_398 = &UNK_180a3c3e0;
            uStack_380 = 0;
            puStack_390 = (undefined1 *)0x0;
            uStack_388 = 0;
            if (*(int *)(lVar10 + 0xb8) != 0) {
              iVar8 = *(int *)(lVar10 + 0xb8) + 1;
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
              puStack_390 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
              *puStack_390 = 0;
              uVar24 = (ulonglong)puStack_390 & 0xffffffffffc00000;
              if (uVar24 == 0) {
                uVar16 = 0;
              }
              else {
                lVar12 = ((longlong)puStack_390 - uVar24 >> 0x10) * 0x50 + 0x80 + uVar24;
                puVar21 = (uint *)(lVar12 - (ulonglong)*(uint *)(lVar12 + 4));
                if ((*(byte *)((longlong)puVar21 + 0xe) & 2) == 0) {
                  uVar16 = puVar21[7];
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar21 << 0x10;
                  }
                }
                else {
                  uVar16 = puVar21[7];
                  if (uVar16 < 0x4000000) {
                    uVar25 = (ulonglong)uVar16;
                  }
                  else {
                    uVar25 = (ulonglong)*puVar21 << 0x10;
                  }
                  if (0x3ffffff < uVar16) {
                    uVar16 = *puVar21 << 0x10;
                  }
                  uVar16 = uVar16 - (int)(((longlong)puStack_390 -
                                          (((longlong)((longlong)puVar21 + (-0x80 - uVar24)) / 0x50)
                                           * 0x10000 + uVar24)) % uVar25);
                }
              }
              uStack_380 = CONCAT44(uStack_380._4_4_,uVar16);
              if (*(int *)(lVar10 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
                memcpy(puStack_390,*(undefined8 *)(lVar10 + 0xb0),*(int *)(lVar10 + 0xb8) + 1);
              }
            }
            if (*(longlong *)(lVar10 + 0xb0) != 0) {
              uStack_388 = 0;
              if (puStack_390 != (undefined1 *)0x0) {
                *puStack_390 = 0;
              }
              uStack_380 = uStack_380 & 0xffffffff;
            }
            uStack_378 = uStack_378 & 0xfffffffd;
            puStack_398 = &UNK_180a3c3e0;
            if (puStack_390 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puStack_390);
            }
            puStack_390 = (undefined1 *)0x0;
            uStack_380 = uStack_380 & 0xffffffff00000000;
            puStack_398 = &UNK_18098bcb0;
            lVar12 = lStack_310;
            lVar10 = lStack_368;
            if (*(int *)(pppppppuVar14 + 6) == 0) {
              bVar26 = true;
              break;
            }
            uVar16 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar16;
            uVar23 = uVar23 + 8;
            lVar18 = *(longlong *)(lStack_310 + 0xc0);
          } while ((ulonglong)(longlong)(int)uVar16 <
                   (ulonglong)(*(longlong *)(lStack_310 + 200) - lVar18 >> 3));
        }
        if (!bVar26) {
          uVar9 = FUN_180624440(&uStack_268,pppppppuVar14 + 8);
          FUN_1806279c0(&puStack_330,uVar9);
          uStack_268 = &UNK_18098bcb0;
          ppppppuVar19 = (undefined8 ******)&DAT_18098bc73;
          if (pppppppuVar14[5] != (undefined8 ******)0x0) {
            ppppppuVar19 = pppppppuVar14[5];
          }
          FUN_180627910(&puStack_308,ppppppuVar19);
          puVar17 = &DAT_18098bc73;
          if (puStack_328 != (undefined *)0x0) {
            puVar17 = puStack_328;
          }
          FUN_180627910(&puStack_2e8,puVar17);
          FUN_1801762b0(lVar12,&puStack_2e8,&puStack_308,&uStack_48);
          puStack_2e8 = &UNK_180a3c3e0;
          if (lStack_2e0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_2e0 = 0;
          uStack_2d0 = 0;
          puStack_2e8 = &UNK_18098bcb0;
          puStack_308 = (undefined8 *)&UNK_180a3c3e0;
          if (puStack_300 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_300 = (undefined8 *)0x0;
          uStack_2f0 = 0;
          puStack_308 = (undefined8 *)&UNK_18098bcb0;
          puStack_330 = &UNK_180a3c3e0;
          if (puStack_328 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_328 = (undefined *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &UNK_18098bcb0;
        }
      }
      pppppppuVar14 = (undefined8 *******)func_0x00018066bd70(pppppppuVar14);
    } while (pppppppuVar14 != &ppppppuStack_360);
  }
  FUN_180058020(&ppppppuStack_360);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3b8);
}



// 函数: 查找资源节点
resource_node_t *find_resource_node(resource_node_t *root_node, uint8_t *found_flag, resource_search_context_t *search_context)

{
  uint8_t byte1;
  bool comparison_result;
  resource_node_t *current_node;
  resource_node_t *previous_node;
  uint uint_val;
  uint8_t *byte_ptr;
  longlong length_diff;
  
  comparison_result = true;
  current_node = (resource_node_t *)root_node[2];
  previous_node = root_node;
  while (current_node != (resource_node_t *)0x0) {
    previous_node = current_node;
    if (*(int *)(current_node + 6) == 0) {
      comparison_result = false;
LAB_1800590e2:
      current_node = (resource_node_t *)*current_node;
    }
    else {
      if (*(int *)(search_context + 0x10) == 0) {
        comparison_result = true;
      }
      else {
        byte_ptr = (uint8_t *)current_node[5];
        length_diff = *(longlong *)(search_context + 8) - (longlong)byte_ptr;
        do {
          byte1 = *byte_ptr;
          uint_val = (uint)byte_ptr[length_diff];
          if (byte1 != uint_val) break;
          byte_ptr = byte_ptr + 1;
        } while (uint_val != 0);
        comparison_result = 0 < (int)(byte1 - uint_val);
      }
      if (!comparison_result) goto LAB_1800590e2;
      current_node = (resource_node_t *)current_node[1];
    }
  }
  current_node = previous_node;
  if (comparison_result) {
    if (previous_node == (resource_node_t *)root_node[1]) {
      *found_flag = 1;
      return previous_node;
    }
    current_node = (resource_node_t *)remove_resource_node(previous_node);
  }
  if (*(int *)(search_context + 0x10) != 0) {
    if (*(int *)(current_node + 6) != 0) {
      byte_ptr = *(uint8_t **)(search_context + 8);
      length_diff = current_node[5] - (longlong)byte_ptr;
      do {
        byte1 = *byte_ptr;
        uint_val = (uint)byte_ptr[length_diff];
        if (byte1 != uint_val) break;
        byte_ptr = byte_ptr + 1;
      } while (uint_val != 0);
      if ((int)(byte1 - uint_val) < 1) goto LAB_1800591a6;
    }
    *found_flag = 1;
    return previous_node;
  }
LAB_1800591a6:
  *found_flag = 0;
  return current_node;
}





// 函数: 清理资源池
void cleanup_resource_pool(resource_pool_t *pool)

{
  longlong pool_end;
  longlong current_resource;
  
  pool_end = pool[1];
  for (current_resource = *pool; current_resource != pool_end; current_resource = current_resource + 0x548) {
    cleanup_resource_entry(current_resource);
  }
  if (*pool == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  free_memory_pool();
}





// 函数: 初始化资源管理器实例
void initialize_resource_manager_instance(resource_manager_t *manager, undefined8 param_2, undefined8 param_3, undefined8 param_4)

{
  initialize_resource_manager_internal(manager,*(undefined8 *)(manager + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// 函数: 复制资源数据
longlong copy_resource_data(resource_data_t *src_start, resource_data_t *src_end, resource_data_t *dst)

{
  uint data_size;
  resource_data_t *src_entry;
  longlong entry_count;
  ulonglong size_ulong;
  
  entry_count = src_end - src_start >> 5;
  if (0 < entry_count) {
    src_entry = (resource_data_t *)(src_start + 8);
    src_start = dst - src_start;
    do {
      data_size = *(uint *)(src_entry + 1);
      size_ulong = (ulonglong)data_size;
      if (*src_entry != 0) {
        allocate_resource_memory(dst,size_ulong);
      }
      if (data_size != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(src_start + (longlong)src_entry),*src_entry,size_ulong);
      }
      *(undefined4 *)(src_start + 8 + (longlong)src_entry) = 0;
      if (*(longlong *)(src_start + (longlong)src_entry) != 0) {
        *(undefined1 *)(size_ulong + *(longlong *)(src_start + (longlong)src_entry)) = 0;
      }
      entry_count = entry_count + -1;
      *(undefined4 *)(src_start + 0x14 + (longlong)src_entry) = *(undefined4 *)((longlong)src_entry + 0x14);
      dst = dst + 0x20;
      src_entry = src_entry + 4;
    } while (0 < entry_count);
  }
  return dst;
}



longlong FUN_18005926c(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong unaff_RBP;
  longlong unaff_RSI;
  ulonglong uVar3;
  
  plVar2 = (longlong *)(param_1 + 8);
  param_3 = param_3 - param_1;
  do {
    uVar1 = *(uint *)(plVar2 + 1);
    uVar3 = (ulonglong)uVar1;
    if (*plVar2 != 0) {
      FUN_1806277c0(unaff_RSI,uVar3);
    }
    if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(param_3 + (longlong)plVar2),*plVar2,uVar3);
    }
    *(undefined4 *)(param_3 + 8 + (longlong)plVar2) = 0;
    if (*(longlong *)(param_3 + (longlong)plVar2) != 0) {
      *(undefined1 *)(uVar3 + *(longlong *)(param_3 + (longlong)plVar2)) = 0;
    }
    unaff_RBP = unaff_RBP + -1;
    *(undefined4 *)(param_3 + 0x14 + (longlong)plVar2) = *(undefined4 *)((longlong)plVar2 + 0x14);
    unaff_RSI = unaff_RSI + 0x20;
    plVar2 = plVar2 + 4;
  } while (0 < unaff_RBP);
  return unaff_RSI;
}





// 函数: void FUN_1800592e4(void)
void FUN_1800592e4(void)

{
  return;
}



longlong FUN_180059300(longlong param_1,longlong param_2,longlong param_3)

{
  if (param_1 != param_2) {
    do {
      FUN_180627ae0(param_3,param_1);
      param_1 = param_1 + 0x20;
      param_3 = param_3 + 0x20;
    } while (param_1 != param_2);
  }
  return param_3;
}





// 函数: void FUN_180059350(longlong param_1,longlong param_2,undefined8 param_3)
void FUN_180059350(longlong param_1,longlong param_2,undefined8 param_3)

{
  if (param_1 != param_2) {
                    // WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}





// 函数: void FUN_180059380(undefined8 *param_1)
void FUN_180059380(undefined8 *param_1)

{
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_1800593f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800593f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_1800593f0(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  FUN_18004b730();
  param_2[4] = &UNK_180a3c3e0;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[4] = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}





// 函数: void FUN_1800594b0(undefined8 *param_1)
void FUN_1800594b0(undefined8 *param_1)

{
  FUN_1808fc8a8(param_1 + 0x7d,0x58,4,FUN_180044a30,0xfffffffffffffffe);
  FUN_1808fc8a8(param_1 + 0x51,0x58,4,FUN_180044a30);
  FUN_1808fc8a8(param_1 + 0x11,0x20,0x10,FUN_180059620);
  param_1[8] = &UNK_180a3c3e0;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[8] = &UNK_18098bcb0;
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_1800595c0(undefined8 *param_1)
void FUN_1800595c0(undefined8 *param_1)

{
  FUN_18004b730();
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180059620(longlong *param_1)
void FUN_180059620(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180059640(longlong *param_1)
void FUN_180059640(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1800596a0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1800596a0(undefined8 *param_1)
void FUN_1800596a0(undefined8 *param_1)

{
  param_1[4] = &UNK_180a3c3e0;
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[4] = &UNK_18098bcb0;
  *param_1 = &UNK_180a3c3e0;
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: void FUN_180059730(longlong param_1)
void FUN_180059730(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  return;
}



undefined8 * FUN_180059780(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    lVar3 = (longlong)param_3 - (longlong)param_1;
    puVar2 = param_1 + 1;
    do {
      *param_3 = &UNK_18098bcb0;
      *(undefined8 *)(lVar3 + (longlong)puVar2) = 0;
      *(undefined4 *)(lVar3 + 8 + (longlong)puVar2) = 0;
      *param_3 = &UNK_180a3c3e0;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)puVar2) = 0;
      *(undefined8 *)(lVar3 + (longlong)puVar2) = 0;
      *(undefined4 *)(lVar3 + 8 + (longlong)puVar2) = 0;
      *(undefined4 *)(lVar3 + 8 + (longlong)puVar2) = *(undefined4 *)(puVar2 + 1);
      *(undefined8 *)(lVar3 + (longlong)puVar2) = *puVar2;
      *(undefined4 *)(lVar3 + 0x14 + (longlong)puVar2) = *(undefined4 *)((longlong)puVar2 + 0x14);
      *(undefined4 *)(lVar3 + 0x10 + (longlong)puVar2) = *(undefined4 *)(puVar2 + 2);
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      param_3 = param_3 + 4;
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
  }
  return param_3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180059820(longlong *param_1,undefined8 param_2)
void FUN_180059820(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  lVar6 = lVar3 - lVar4 >> 5;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      lVar2 = 0;
      goto LAB_180059885;
    }
  }
  lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar6 << 5,(char)param_1[3]);
  lVar3 = param_1[1];
  lVar4 = *param_1;
LAB_180059885:
  lVar3 = FUN_180059780(lVar4,lVar3,lVar2);
  FUN_180627ae0(lVar3,param_2);
  puVar1 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != puVar1) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
    puVar5 = (undefined8 *)*param_1;
  }
  if (puVar5 == (undefined8 *)0x0) {
    *param_1 = lVar2;
    param_1[2] = lVar6 * 0x20 + lVar2;
    param_1[1] = lVar3 + 0x20;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



undefined8 *
FUN_180059900(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





