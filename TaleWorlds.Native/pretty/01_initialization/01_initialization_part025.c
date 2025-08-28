#include "TaleWorlds.Native.Split.h"

// 01_initialization_part025.c - 14 个函数

// 函数: 初始化资源管理器
void initialize_resource_manager(longlong *context_ptr)

{
  uint64_t *******pppppppuVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int32_t uVar7;
  int iVar8;
  uint64_t uVar9;
  longlong lVar10;
  int8_t *puVar11;
  longlong lVar12;
  void *puVar13;
  uint64_t *******pppppppuVar14;
  longlong *plVar15;
  uint uVar16;
  void *puVar17;
  longlong lVar18;
  uint64_t ******ppppppuVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  int8_t auStack_3b8 [32];
  void *puStack_398;
  int8_t *puStack_390;
  int32_t uStack_388;
  ulonglong uStack_380;
  uint uStack_378;
  int iStack_374;
  int iStack_370;
  longlong lStack_368;
  uint64_t ******ppppppuStack_360;
  uint64_t ******ppppppuStack_358;
  uint64_t ******ppppppuStack_350;
  uint64_t uStack_348;
  uint64_t uStack_340;
  int32_t uStack_338;
  void *puStack_330;
  void *puStack_328;
  int32_t uStack_320;
  ulonglong uStack_318;
  longlong lStack_310;
  uint64_t *puStack_308;
  uint64_t *puStack_300;
  uint64_t uStack_2f8;
  int32_t uStack_2f0;
  void *puStack_2e8;
  longlong lStack_2e0;
  int32_t uStack_2d0;
  longlong lStack_2c8;
  ulonglong uStack_2c0;
  longlong lStack_2b8;
  uint64_t *puStack_2b0;
  uint64_t *puStack_2a8;
  uint64_t *puStack_2a0;
  uint64_t uStack_298;
  void *puStack_290;
  int8_t *puStack_288;
  int32_t uStack_280;
  int8_t auStack_278 [16];
  uint64_t uStack_268;
  uint64_t uStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  ulonglong uStack_38;
  uint64_t uStack_30;
  
  uStack_30 = 0x180059023;
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x270,8,3);
  uStack_30 = 0x18005902b;
  lVar10 = FUN_180175aa0(uVar9);
  uVar7 = *(int32_t *)(_DAT_180c86920 + 0x1dc0);
  _DAT_180c8a9d0 = lVar10;
  *(int32_t *)(lVar10 + 0x1e0) = *(int32_t *)(_DAT_180c86920 + 0x1d50);
  *(int32_t *)(lVar10 + 0x1e4) = uVar7;
  uStack_30 = 0x180059066;
  (**(code **)(**(longlong **)(*param_1 + 0x2b0) + 0xf8))();
  uStack_298 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  uStack_378 = 0;
  lStack_310 = _DAT_180c8a9d0;
  *(uint64_t *)(_DAT_180c8a9d0 + 0xf0) = 0;
  uStack_338 = 3;
  ppppppuStack_360 = &ppppppuStack_360;
  ppppppuStack_358 = &ppppppuStack_360;
  ppppppuStack_350 = (uint64_t *******)0x0;
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
      puVar17 = *(void **)(lStack_368 * 0x20 + 8 + lVar10);
      puVar13 = &system_buffer_ptr;
      if (puVar17 != (void *)0x0) {
        puVar13 = puVar17;
      }
      puStack_398 = &unknown_var_3456_ptr;
      uStack_380 = 0;
      puStack_390 = (int8_t *)0x0;
      uStack_388 = 0;
      if (puVar13 != (void *)0x0) {
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
          puVar11 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
          *puVar11 = 0;
          puStack_390 = puVar11;
          uVar7 = FUN_18064e990(puVar11);
          uStack_380 = CONCAT44(uStack_380._4_4_,uVar7);
                    // WARNING: Subroutine does not return
          memcpy(puVar11,puVar13,iVar20);
        }
      }
      uStack_388 = 0;
      FUN_180175f80(&unknown_var_3456_ptr,&puStack_2e8,&puStack_398);
      puStack_390 = (int8_t *)0x0;
      uStack_380 = uStack_380 & 0xffffffff00000000;
      puStack_398 = &unknown_var_720_ptr;
      puStack_308 = (uint64_t *)0x0;
      puStack_300 = (uint64_t *)0x0;
      uStack_2f8 = 0;
      uStack_2f0 = 3;
      puStack_290 = &unknown_var_7512_ptr;
      puStack_288 = auStack_278;
      auStack_278[0] = 0;
      uStack_280 = 4;
      strcpy_s(auStack_278,0x10,&unknown_var_4276_ptr);
      FUN_18062cb00(&puStack_2e8,&puStack_308,&puStack_290);
      puStack_290 = &unknown_var_720_ptr;
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
          puVar17 = &system_buffer_ptr;
          if ((void *)puStack_308[lStack_2c8 * 4 + 1] != (void *)0x0) {
            puVar17 = (void *)puStack_308[lStack_2c8 * 4 + 1];
          }
          lVar12 = strrchr(puVar17,0x2f);
          if (lVar12 == 0) {
            puVar17 = &system_buffer_ptr;
            if ((void *)puVar2[lVar10 * 4 + 1] != (void *)0x0) {
              puVar17 = (void *)puVar2[lVar10 * 4 + 1];
            }
          }
          else {
            puVar17 = (void *)(lVar12 + 1);
          }
          puVar13 = (void *)strchr(puVar17,0x2e);
          if (puVar13 == (void *)0x0) {
            puVar13 = &system_buffer_ptr;
            if ((void *)puVar2[lVar10 * 4 + 1] != (void *)0x0) {
              puVar13 = (void *)puVar2[lVar10 * 4 + 1];
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
          puStack_330 = &unknown_var_3456_ptr;
          uStack_318 = 0;
          puStack_328 = (void *)0x0;
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
            puStack_328 = (void *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
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
          for (pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
              pppppppuVar1 != (uint64_t *******)0x0;
              pppppppuVar1 = (uint64_t *******)pppppppuVar1[1]) {
            pppppppuVar14 = pppppppuVar1;
          }
          if ((pppppppuVar14 == &ppppppuStack_360) ||
             (lVar12 = lVar10, *(int *)(pppppppuVar14 + 6) != 0)) {
            if ((pppppppuVar14 != (uint64_t *******)ppppppuStack_360) &&
               (pppppppuVar14 != &ppppppuStack_360)) {
              func_0x00018066bd70(pppppppuVar14);
            }
            bVar26 = true;
            pppppppuVar14 = &ppppppuStack_360;
            pppppppuVar1 = (uint64_t *******)ppppppuStack_350;
            while (pppppppuVar1 != (uint64_t *******)0x0) {
              bVar26 = *(int *)(pppppppuVar1 + 6) != 0;
              pppppppuVar14 = pppppppuVar1;
              if (bVar26) {
                pppppppuVar1 = (uint64_t *******)pppppppuVar1[1];
              }
              else {
                pppppppuVar1 = (uint64_t *******)*pppppppuVar1;
              }
            }
            lVar12 = lStack_2c8;
            iVar8 = iStack_374;
            if (bVar26) {
              if (pppppppuVar14 == (uint64_t *******)ppppppuStack_358) {
                if ((pppppppuVar14 != &ppppppuStack_360) && (*(int *)(pppppppuVar14 + 6) == 0)) {
                  uVar7 = 1;
                }
                lVar10 = FUN_18062b420(_DAT_180c8ed18,0x60,(int8_t)uStack_338);
                puStack_2b0 = (uint64_t *)(lVar10 + 0x20);
                *puStack_2b0 = &unknown_var_720_ptr;
                *(uint64_t *)(lVar10 + 0x28) = 0;
                *(int32_t *)(lVar10 + 0x30) = 0;
                *puStack_2b0 = &unknown_var_3456_ptr;
                *(uint64_t *)(lVar10 + 0x38) = 0;
                *(uint64_t *)(lVar10 + 0x28) = 0;
                *(int32_t *)(lVar10 + 0x30) = 0;
                puStack_2a8 = puStack_2b0;
                FUN_1806277c0(puStack_2b0,0);
                puStack_2a0 = (uint64_t *)(lVar10 + 0x40);
                *puStack_2a0 = &unknown_var_720_ptr;
                *(uint64_t *)(lVar10 + 0x48) = 0;
                *(int32_t *)(lVar10 + 0x50) = 0;
                *puStack_2a0 = &unknown_var_3456_ptr;
                *(uint64_t *)(lVar10 + 0x58) = 0;
                *(uint64_t *)(lVar10 + 0x48) = 0;
                *(int32_t *)(lVar10 + 0x50) = 0;
                    // WARNING: Subroutine does not return
                FUN_18066bdc0(lVar10,pppppppuVar14,&ppppppuStack_360,uVar7);
              }
              pppppppuVar14 = (uint64_t *******)func_0x00018066b9a0(pppppppuVar14);
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
          *(int32_t *)(pppppppuVar14 + 10) = 0;
          if (pppppppuVar14[9] != (uint64_t ******)0x0) {
            *(int8_t *)(uVar22 + (longlong)pppppppuVar14[9]) = 0;
          }
          *(int32_t *)((longlong)pppppppuVar14 + 0x5c) =
               *(int32_t *)((longlong)puVar2 + lVar10 * 0x20 + 0x1c);
          puStack_328 = (void *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &unknown_var_720_ptr;
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
      if (puStack_308 != (uint64_t *)0x0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar5);
      }
      puStack_2e8 = &unknown_var_3456_ptr;
      if (lStack_2e0 != 0) {
        puStack_308 = puVar3;
        puStack_300 = puVar4;
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_2e0 = 0;
      uStack_2d0 = 0;
      puStack_2e8 = &unknown_var_720_ptr;
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
  if ((uint64_t *******)ppppppuStack_358 != &ppppppuStack_360) {
    lVar10 = lStack_310 + 0x150;
    pppppppuVar14 = (uint64_t *******)ppppppuStack_358;
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
            puStack_398 = &unknown_var_3456_ptr;
            uStack_380 = 0;
            puStack_390 = (int8_t *)0x0;
            uStack_388 = 0;
            if (*(int *)(lVar10 + 0xb8) != 0) {
              iVar8 = *(int *)(lVar10 + 0xb8) + 1;
              if (iVar8 < 0x10) {
                iVar8 = 0x10;
              }
              puStack_390 = (int8_t *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar8,0x13);
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
                memcpy(puStack_390,*(uint64_t *)(lVar10 + 0xb0),*(int *)(lVar10 + 0xb8) + 1);
              }
            }
            if (*(longlong *)(lVar10 + 0xb0) != 0) {
              uStack_388 = 0;
              if (puStack_390 != (int8_t *)0x0) {
                *puStack_390 = 0;
              }
              uStack_380 = uStack_380 & 0xffffffff;
            }
            uStack_378 = uStack_378 & 0xfffffffd;
            puStack_398 = &unknown_var_3456_ptr;
            if (puStack_390 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(puStack_390);
            }
            puStack_390 = (int8_t *)0x0;
            uStack_380 = uStack_380 & 0xffffffff00000000;
            puStack_398 = &unknown_var_720_ptr;
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
          uStack_268 = &unknown_var_720_ptr;
          ppppppuVar19 = (uint64_t ******)&system_buffer_ptr;
          if (pppppppuVar14[5] != (uint64_t ******)0x0) {
            ppppppuVar19 = pppppppuVar14[5];
          }
          FUN_180627910(&puStack_308,ppppppuVar19);
          puVar17 = &system_buffer_ptr;
          if (puStack_328 != (void *)0x0) {
            puVar17 = puStack_328;
          }
          FUN_180627910(&puStack_2e8,puVar17);
          FUN_1801762b0(lVar12,&puStack_2e8,&puStack_308,&uStack_48);
          puStack_2e8 = &unknown_var_3456_ptr;
          if (lStack_2e0 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_2e0 = 0;
          uStack_2d0 = 0;
          puStack_2e8 = &unknown_var_720_ptr;
          puStack_308 = (uint64_t *)&unknown_var_3456_ptr;
          if (puStack_300 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_300 = (uint64_t *)0x0;
          uStack_2f0 = 0;
          puStack_308 = (uint64_t *)&unknown_var_720_ptr;
          puStack_330 = &unknown_var_3456_ptr;
          if (puStack_328 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puStack_328 = (void *)0x0;
          uStack_318 = uStack_318 & 0xffffffff00000000;
          puStack_330 = &unknown_var_720_ptr;
        }
      }
      pppppppuVar14 = (uint64_t *******)func_0x00018066bd70(pppppppuVar14);
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
void initialize_resource_manager_instance(resource_manager_t *manager, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  initialize_resource_manager_internal(manager,*(uint64_t *)(manager + 0x10),param_3,param_4,0xfffffffffffffffe);
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
        memcpy(*(uint64_t *)(src_start + (longlong)src_entry),*src_entry,size_ulong);
      }
      *(int32_t *)(src_start + 8 + (longlong)src_entry) = 0;
      if (*(longlong *)(src_start + (longlong)src_entry) != 0) {
        *(int8_t *)(size_ulong + *(longlong *)(src_start + (longlong)src_entry)) = 0;
      }
      entry_count = entry_count + -1;
      *(int32_t *)(src_start + 0x14 + (longlong)src_entry) = *(int32_t *)((longlong)src_entry + 0x14);
      dst = dst + 0x20;
      src_entry = src_entry + 4;
    } while (0 < entry_count);
  }
  return dst;
}



// 函数: 移动资源数据
longlong move_resource_data(resource_data_t *src_start, uint64_t param_2, resource_data_t *dst)

{
  uint data_size;
  resource_data_t *src_entry;
  longlong entry_count;
  ulonglong size_ulong;
  
  src_entry = (resource_data_t *)(src_start + 8);
  dst = dst - src_start;
  do {
    data_size = *(uint *)(src_entry + 1);
    size_ulong = (ulonglong)data_size;
    if (*src_entry != 0) {
      allocate_resource_memory(dst,size_ulong);
    }
    if (data_size != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(uint64_t *)(dst + (longlong)src_entry),*src_entry,size_ulong);
    }
    *(int32_t *)(dst + 8 + (longlong)src_entry) = 0;
    if (*(longlong *)(dst + (longlong)src_entry) != 0) {
      *(int8_t *)(size_ulong + *(longlong *)(dst + (longlong)src_entry)) = 0;
    }
    entry_count = entry_count + -1;
    *(int32_t *)(dst + 0x14 + (longlong)src_entry) = *(int32_t *)((longlong)src_entry + 0x14);
    dst = dst + 0x20;
    src_entry = src_entry + 4;
  } while (0 < entry_count);
  return dst;
}





// 函数: 空操作函数
void noop_function(void)

{
  return;
}



// 函数: 复制资源块
longlong copy_resource_blocks(resource_data_t *src_start, resource_data_t *src_end, resource_data_t *dst)

{
  if (src_start != src_end) {
    do {
      initialize_resource_block(dst,src_start);
      src_start = src_start + 0x20;
      dst = dst + 0x20;
    } while (src_start != src_end);
  }
  return dst;
}





// 函数: 移动资源块
void move_resource_blocks(resource_data_t *src_start, resource_data_t *src_end, uint64_t dst)

{
  if (src_start != src_end) {
                    // WARNING: Subroutine does not return
    memmove(dst,src_start,src_end - src_start);
  }
  return;
}





// 函数: 重置资源节点
void reset_resource_node(resource_node_t *node)

{
  if (node[4] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  *node = &RESOURCE_SENTINEL_START;
  if (node[1] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  node[1] = 0;
  *(int32_t *)(node + 3) = 0;
  *node = &RESOURCE_SENTINEL_END;
  return;
}





// 函数: 释放资源管理器内部数据
void release_resource_manager_internal(uint64_t param_1, resource_node_t *node, uint64_t param_3, uint64_t param_4)

{
  if (node == (resource_node_t *)0x0) {
    return;
  }
  release_resource_manager_internal(param_1,*node,param_3,param_4,0xfffffffffffffffe);
  cleanup_resource_cache();
  node[4] = &RESOURCE_SENTINEL_START;
  if (node[5] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  node[5] = 0;
  *(int32_t *)(node + 7) = 0;
  node[4] = &RESOURCE_SENTINEL_END;
                    // WARNING: Subroutine does not return
  free_resource_node(node);
}





// 函数: 清理资源条目
void cleanup_resource_entry(resource_entry_t *entry)

{
  cleanup_resource_array(entry + 0x7d,0x58,4,resource_array_cleanup_callback,0xfffffffffffffffe);
  cleanup_resource_array(entry + 0x51,0x58,4,resource_array_cleanup_callback);
  cleanup_resource_array(entry + 0x11,0x20,0x10,cleanup_resource_subentry);
  entry[8] = &RESOURCE_SENTINEL_START;
  if (entry[9] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  entry[9] = 0;
  *(int32_t *)(entry + 0xb) = 0;
  entry[8] = &RESOURCE_SENTINEL_END;
  entry[4] = &RESOURCE_SENTINEL_START;
  if (entry[5] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  entry[5] = 0;
  *(int32_t *)(entry + 7) = 0;
  entry[4] = &RESOURCE_SENTINEL_END;
  *entry = &RESOURCE_SENTINEL_START;
  if (entry[1] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  entry[1] = 0;
  *(int32_t *)(entry + 3) = 0;
  *entry = &RESOURCE_SENTINEL_END;
  return;
}





// 函数: 释放资源节点
void release_resource_node(resource_node_t *node)

{
  cleanup_resource_cache();
  *node = &RESOURCE_SENTINEL_START;
  if (node[1] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  node[1] = 0;
  *(int32_t *)(node + 3) = 0;
  *node = &RESOURCE_SENTINEL_END;
  return;
}





// 函数: 清理资源子条目数组
void cleanup_resource_subentry_array(resource_subentry_array_t *array)

{
  longlong array_end;
  longlong current_subentry;
  
  array_end = array[1];
  for (current_subentry = *array; current_subentry != array_end; current_subentry = current_subentry + 0x50) {
    cleanup_resource_subentry(current_subentry);
  }
  if (*array == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  free_resource_data();
}





// 函数: 清理资源子条目集合
void cleanup_resource_subentry_collection(resource_subentry_collection_t *collection)

{
  longlong collection_end;
  longlong current_subentry;
  
  collection_end = collection[1];
  for (current_subentry = *collection; current_subentry != collection_end; current_subentry = current_subentry + 0x50) {
    cleanup_resource_subentry(current_subentry);
  }
  if (*collection == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  free_resource_data();
}





// 函数: 清理资源子条目
void cleanup_resource_subentry(resource_subentry_t *subentry)

{
  subentry[4] = &RESOURCE_SENTINEL_START;
  if (subentry[5] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  subentry[5] = 0;
  *(int32_t *)(subentry + 7) = 0;
  subentry[4] = &RESOURCE_SENTINEL_END;
  *subentry = &RESOURCE_SENTINEL_START;
  if (subentry[1] != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  subentry[1] = 0;
  *(int32_t *)(subentry + 3) = 0;
  *subentry = &RESOURCE_SENTINEL_END;
  return;
}





// 函数: 销毁资源互斥锁
void destroy_resource_mutex(resource_mutex_t *mutex)

{
  if (*(longlong *)(mutex + 8) != 0) {
                    // WARNING: Subroutine does not return
    free_resource_data();
  }
  _Mtx_destroy_in_situ();
  return;
}



// 函数: 移动资源节点数组
resource_node_t *move_resource_node_array(resource_node_t *src_start, resource_node_t *src_end, resource_node_t *dst)

{
  resource_node_t *current_src;
  resource_node_t *src_iterator;
  longlong offset;
  
  if (src_start != src_end) {
    offset = (longlong)dst - (longlong)src_start;
    src_iterator = src_start + 1;
    do {
      *dst = &RESOURCE_SENTINEL_END;
      *(uint64_t *)(offset + (longlong)src_iterator) = 0;
      *(int32_t *)(offset + 8 + (longlong)src_iterator) = 0;
      *dst = &RESOURCE_SENTINEL_START;
      *(uint64_t *)(offset + 0x10 + (longlong)src_iterator) = 0;
      *(uint64_t *)(offset + (longlong)src_iterator) = 0;
      *(int32_t *)(offset + 8 + (longlong)src_iterator) = 0;
      *(int32_t *)(offset + 8 + (longlong)src_iterator) = *(int32_t *)(src_iterator + 1);
      *(uint64_t *)(offset + (longlong)src_iterator) = *src_iterator;
      *(int32_t *)(offset + 0x14 + (longlong)src_iterator) = *(int32_t *)((longlong)src_iterator + 0x14);
      *(int32_t *)(offset + 0x10 + (longlong)src_iterator) = *(int32_t *)(src_iterator + 2);
      *(int32_t *)(src_iterator + 1) = 0;
      *src_iterator = 0;
      src_iterator[2] = 0;
      dst = dst + 4;
      current_src = src_iterator + 3;
      src_iterator = src_iterator + 4;
    } while (current_src != src_end);
  }
  return dst;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 调整资源容器大小
void resize_resource_container(resource_container_t *container, uint64_t new_data)

{
  resource_node_t *current_node;
  longlong new_buffer;
  longlong container_end;
  longlong container_start;
  resource_node_t *node_iterator;
  longlong new_capacity;
  
  container_end = container[1];
  container_start = *container;
  new_capacity = container_end - container_start >> 5;
  if (new_capacity == 0) {
    new_capacity = 1;
  }
  else {
    new_capacity = new_capacity * 2;
    if (new_capacity == 0) {
      new_buffer = 0;
      goto LAB_180059885;
    }
  }
  new_buffer = allocate_resource_buffer(_GLOBAL_MEMORY_POOL,new_capacity << 5,(char)container[3]);
  container_end = container[1];
  container_start = *container;
LAB_180059885:
  container_end = move_resource_node_array(container_start,container_end,new_buffer);
  initialize_resource_block(container_end,new_data);
  current_node = (resource_node_t *)container[1];
  node_iterator = (resource_node_t *)*container;
  if (node_iterator != current_node) {
    do {
      (**(code **)*node_iterator)(node_iterator,0);
      node_iterator = node_iterator + 4;
    } while (node_iterator != current_node);
    node_iterator = (resource_node_t *)*container;
  }
  if (node_iterator == (resource_node_t *)0x0) {
    *container = new_buffer;
    container[2] = new_capacity * 0x20 + new_buffer;
    container[1] = container_end + 0x20;
    return;
  }
                    // WARNING: Subroutine does not return
  free_resource_data(node_iterator);
}



// 函数: 释放资源对象
resource_object_t *
release_resource_object(resource_object_t *object, ulonglong flags, uint64_t param_3, uint64_t param_4)

{
  *object = &RESOURCE_SENTINEL_END;
  if ((flags & 1) != 0) {
    free(object,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return object;
}





