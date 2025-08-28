#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor



// 99_part_02_part011.c - 1 个函数

// 函数: void FUN_1800eee70(int64_t *******param_1,int32_t param_2)
void FUN_1800eee70(int64_t *******param_1,int32_t param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  char cVar3;
  int64_t ****pppplVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int64_t ******pppppplVar8;
  int8_t *puVar9;
  int8_t *puVar10;
  uint *puVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int64_t *******ppppppplVar15;
  int64_t ******pppppplVar16;
  char cVar17;
  uint uVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t *plVar22;
  uint *puVar23;
  int64_t *plVar24;
  char cVar25;
  int64_t lVar26;
  int64_t lVar27;
  bool bVar28;
  bool bVar29;
  int32_t extraout_XMM0_Da;
  int32_t uVar30;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int64_t *******ppppppplStackX_8;
  uint64_t uStackX_10;
  int64_t *******ppppppplStackX_18;
  int64_t *******ppppppplStackX_20;
  uint uStack_100;
  uint uStack_fc;
  int64_t *******ppppppplStack_f0;
  int64_t lStack_e8;
  int64_t ******pppppplStack_e0;
  int64_t *plStack_d8;
  int64_t *******ppppppplStack_d0;
  int64_t ******pppppplStack_c8;
  int8_t uStack_c0;
  int64_t ******pppppplStack_b8;
  int64_t ******pppppplStack_b0;
  uint64_t uStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  uint *puStack_90;
  uint64_t *puStack_88;
  int8_t uStack_80;
  uint64_t uStack_78;
  int64_t ******pppppplStack_70;
  int64_t ****pppplStack_68;
  int64_t *******ppppppplStack_60;
  int64_t *******ppppppplStack_58;
  uint64_t uStack_50;
  
  puVar9 = system_system_data_memory;
  uStackX_10 = CONCAT44(uStackX_10._4_4_,param_2);
  uStack_78 = 0xfffffffffffffffe;
  system_system_data_memory[4] = 0;
  ppppppplStackX_8 = param_1;
  cVar12 = FUN_180160500(param_1,0x39);
  if (cVar12 != '\0') {
    *(int32_t *)(puVar9 + 0x2f8) = *(int32_t *)(system_main_module_state + 0x224);
  }
  ppppppplStackX_18 = (int64_t *******)(puVar9 + 0x1c0);
  iVar13 = _Mtx_lock(ppppppplStackX_18);
  if (iVar13 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar13);
  }
  iVar13 = 0;
  plVar1 = (int64_t *)(puVar9 + 0x210);
  lVar26 = *plVar1;
  if (*(int64_t *)(puVar9 + 0x218) - lVar26 >> 3 != 0) {
    lVar27 = 0;
    do {
      lVar26 = *(int64_t *)(lVar27 + lVar26);
      *(int16_t *)(lVar26 + 0x2e8) = 0;
      lVar19 = *(int64_t *)(lVar26 + 0x2e0);
      if (lVar19 != 0) {
        FUN_180083f10(lVar19);
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar19);
      }
      *(uint64_t *)(lVar26 + 0x2e0) = 0;
      puVar10 = system_system_data_memory;
      if (*(int *)(lVar26 + 0x2ec) != -1) {
        lVar19 = (int64_t)*(int *)(lVar26 + 0x2ec);
        uStackX_10 = CONCAT44(uStackX_10._4_4_,*(int *)(lVar26 + 0x2ec));
        puVar2 = (uint64_t *)(system_system_data_memory + 0x2b8);
        uStack_80 = 0;
        puStack_88 = puVar2;
        AcquireSRWLockExclusive(puVar2);
        uStack_80 = 1;
        *puVar10 = 1;
        **(int8_t **)(*(int64_t *)(puVar10 + 0x140) + lVar19 * 8) = 0;
        *(uint64_t *)(*(int64_t *)(*(int64_t *)(puVar10 + 0x140) + lVar19 * 8) + 0x1a8) = 0;
        FUN_1800f8a50(*(int64_t *)(*(int64_t *)(puVar10 + 0x140) + lVar19 * 8) + 8);
        SystemDatabaseProcessor(puVar10 + 0xc0,&uStackX_10);
        *(int32_t *)(lVar26 + 0x2ec) = 0xffffffff;
        ReleaseSRWLockExclusive(puVar2);
        *(int32_t *)(lVar26 + 0x2ec) = 0xffffffff;
      }
      iVar13 = iVar13 + 1;
      lVar27 = lVar27 + 8;
      lVar26 = *plVar1;
    } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(*(int64_t *)(puVar9 + 0x218) - lVar26 >> 3))
    ;
  }
  SystemCore_Controller(plVar1);
  iVar13 = 0;
  plVar1 = (int64_t *)(puVar9 + 0x230);
  lVar26 = *plVar1;
  if (*(int64_t *)(puVar9 + 0x238) - lVar26 >> 3 != 0) {
    lVar27 = 0;
    do {
      lVar26 = *(int64_t *)(lVar27 + lVar26);
      *(int16_t *)(lVar26 + 0x2f8) = 0;
      pppppplVar16 = *(int64_t *******)(lVar26 + 0x2f0);
      if (pppppplVar16 != (int64_t ******)0x0) {
        ppppppplStackX_8 = (int64_t *******)pppppplVar16;
        if (pppppplVar16[1] != (int64_t *****)0x0) {
          (*(code *)(*pppppplVar16[1])[7])();
        }
        if (*pppppplVar16 != (int64_t *****)0x0) {
          (*(code *)(**pppppplVar16)[7])();
        }
                    // WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(pppppplVar16);
      }
      *(uint64_t *)(lVar26 + 0x2f0) = 0;
      puVar10 = system_system_data_memory;
      ppppppplStackX_8 = (int64_t *******)0x0;
      if (*(int *)(lVar26 + 0x2fc) != -1) {
        lVar19 = (int64_t)(int)*(uint *)(lVar26 + 0x2fc);
        ppppppplStackX_8 = (int64_t *******)(uint64_t)*(uint *)(lVar26 + 0x2fc);
        pppppplVar16 = (int64_t ******)(system_system_data_memory + 0x2b8);
        uStack_c0 = 0;
        pppppplStack_c8 = pppppplVar16;
        AcquireSRWLockExclusive(pppppplVar16);
        uStack_c0 = 1;
        puVar10[2] = 1;
        **(int8_t **)(*(int64_t *)(puVar10 + 0x160) + lVar19 * 8) = 0;
        *(uint64_t *)(*(int64_t *)(*(int64_t *)(puVar10 + 0x160) + lVar19 * 8) + 0x20) = 0;
        lVar19 = *(int64_t *)(*(int64_t *)(puVar10 + 0x160) + lVar19 * 8);
        plStack_d8 = *(int64_t **)(lVar19 + 0x10);
        *(uint64_t *)(lVar19 + 0x10) = 0;
        if (plStack_d8 != (int64_t *)0x0) {
          (**(code **)(*plStack_d8 + 0x38))();
        }
        pppppplStack_e0 = *(int64_t *******)(lVar19 + 8);
        *(uint64_t *)(lVar19 + 8) = 0;
        if (pppppplStack_e0 != (int64_t ******)0x0) {
          (*(code *)(*pppppplStack_e0)[7])();
        }
        SystemDatabaseProcessor(puVar10 + 0x100,&ppppppplStackX_8);
        *(int32_t *)(lVar26 + 0x2fc) = 0xffffffff;
        ReleaseSRWLockExclusive(pppppplVar16);
        *(int32_t *)(lVar26 + 0x2fc) = 0xffffffff;
      }
      iVar13 = iVar13 + 1;
      lVar27 = lVar27 + 8;
      lVar26 = *plVar1;
    } while ((uint64_t)(int64_t)iVar13 < (uint64_t)(*(int64_t *)(puVar9 + 0x238) - lVar26 >> 3))
    ;
  }
  SystemCore_Controller(plVar1);
  iVar13 = _Mtx_unlock();
  uVar30 = extraout_XMM0_Da;
  if (iVar13 != 0) {
    uVar30 = __Throw_C_error_std__YAXH_Z();
  }
  puStack_90 = (uint *)(puVar9 + 0x250);
  uStack_fc = *puStack_90;
  uStack_100 = 0;
  if (0 < (int)uStack_fc) {
    do {
      bVar29 = false;
      uStack_a8 = (uint64_t)(uStack_100 >> 0xc);
      plStack_d8 = (int64_t *)
                   (*(int64_t *)(puVar9 + uStack_a8 * 8 + 600) +
                   (uint64_t)(uStack_100 & 0xfff) * 0x18);
      lVar26 = *plStack_d8;
      pppppplVar16 = *(int64_t *******)(*(int64_t *)(*(int64_t *)(lVar26 + 0x48) + 0x3c8) + 0x20)
      ;
      lStack_e8 = lVar26;
      pppppplStack_c8 = pppppplVar16;
      pppppplStack_70 = pppppplVar16;
      if (pppppplVar16 != (int64_t ******)0x0) {
        (*(code *)(*pppppplVar16)[5])(pppppplVar16);
        uVar30 = (*(code *)(*pppppplVar16)[7])(pppppplVar16);
      }
      pppppplStack_e0 = *(int64_t *******)(lVar26 + 0x48);
      bVar28 = pppppplVar16 != (int64_t ******)0x0;
      pppppplVar8 = pppppplStack_e0;
      if (bVar28) {
        bVar29 = ((int64_t)pppppplVar16[8] - (int64_t)pppppplVar16[7] & 0xfffffffffffffff0U) !=
                 0x10;
        pppppplVar8 = pppppplVar16;
      }
      pppplVar4 = pppppplStack_e0[0x79][3];
      pppplStack_68 = pppplVar4;
      if (pppplVar4 != (int64_t ****)0x0) {
        (*(code *)(*pppplVar4)[5])(pppplVar4);
        uVar30 = (*(code *)(*pppplVar4)[7])(pppplVar4);
        if (*(char *)((int64_t)pppplVar4 + 0x14) == '\0') {
          uVar30 = FUN_1800f4980(puVar9,*(int32_t *)(pppplVar4 + 2),pppplVar4);
          *(int8_t *)((int64_t)pppplVar4 + 0x14) = 1;
        }
      }
      uVar20 = (uint64_t)ppppppplStackX_20 >> 8;
      ppppppplStackX_20 = (int64_t *******)(uVar20 << 8);
      if (bVar29) {
        ppppppplStackX_20 = (int64_t *******)(uVar20 << 8);
LAB_1800ef87d:
        uStack_fc = uStack_fc - 1;
        lVar26 = (uint64_t)(uStack_100 & 0xfff) * 0x18;
        *(int8_t *)(*(int64_t *)(*(int64_t *)(puVar9 + uStack_a8 * 8 + 600) + lVar26) + 0x41)
             = 0;
        *(int8_t *)(*(int64_t *)(*(int64_t *)(puVar9 + uStack_a8 * 8 + 600) + lVar26) + 0x42)
             = ppppppplStackX_20._0_1_;
        plVar22 = (int64_t *)
                  (*(int64_t *)(puVar9 + (uint64_t)(uStack_fc >> 0xc) * 8 + 600) +
                  (uint64_t)(uStack_fc + (uStack_fc >> 0xc) * -0x1000) * 0x18);
        plVar24 = (int64_t *)(*(int64_t *)(puVar9 + uStack_a8 * 8 + 600) + lVar26);
        plVar1 = (int64_t *)*plVar22;
        if (plVar1 != (int64_t *)0x0) {
          plStack_a0 = plVar1;
          uVar30 = (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        plStack_a0 = (int64_t *)*plVar24;
        *plVar24 = (int64_t)plVar1;
        if (plStack_a0 != (int64_t *)0x0) {
          uVar30 = (**(code **)(*plStack_a0 + 0x38))();
        }
        plVar1 = (int64_t *)plVar22[1];
        if (plVar1 != (int64_t *)0x0) {
          plStack_98 = plVar1;
          uVar30 = (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        plStack_98 = (int64_t *)plVar24[1];
        plVar24[1] = (int64_t)plVar1;
        if (plStack_98 != (int64_t *)0x0) {
          uVar30 = (**(code **)(*plStack_98 + 0x38))();
        }
        *(char *)(plVar24 + 2) = (char)plVar22[2];
      }
      else {
        cVar17 = '\0';
        uStackX_10 = uStackX_10 & 0xffffffffffffff00;
        ppppppplStackX_8 = (int64_t *******)((uint64_t)ppppppplStackX_8 & 0xffffffffffffff00);
        cVar12 = '\0';
        ppppppplStackX_18 = (int64_t *******)((uint64_t)ppppppplStackX_18 & 0xffffffffffffff00);
        bVar29 = false;
        bVar5 = true;
        iVar13 = (int)((int64_t)pppppplVar8[8] - (int64_t)pppppplVar8[7] >> 4);
        lVar26 = (int64_t)iVar13;
        if (iVar13 < 1) {
LAB_1800ef4ce:
          bVar6 = false;
        }
        else {
          lVar27 = 0;
          bVar29 = false;
          do {
            lVar19 = *(int64_t *)(lVar27 + (int64_t)pppppplVar8[7]);
            iVar13 = *(int *)(SYSTEM_STATE_MANAGER + 0x620);
            if (iVar13 == -1) {
LAB_1800ef36c:
              if (bVar28) goto LAB_1800ef375;
              cVar17 = (char)uStackX_10;
              cVar25 = (char)ppppppplStackX_8;
              cVar12 = (char)ppppppplStackX_18;
            }
            else {
              if (iVar13 == 0) {
                uVar14 = *(uint *)(lVar19 + 0x100) >> 4;
              }
              else {
                if (iVar13 != 1) goto LAB_1800ef36c;
                uVar14 = *(uint *)(lVar19 + 0x100) >> 0x16;
              }
              if ((uVar14 & 1) == 0) goto LAB_1800ef36c;
LAB_1800ef375:
              if ((*(byte *)(lVar19 + 0xfd) & 0x20) == 0) {
                lVar19 = func_0x000180085de0(*(uint64_t *)(lVar19 + 0x1b0));
                uVar30 = extraout_XMM0_Da_00;
              }
              if (*(int64_t *)(lVar19 + 0x2e0) == 0) {
                puStack_88 = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0xa8,8,3);
                *puStack_88 = 0;
                puStack_88[1] = 0;
                puStack_88[2] = 0;
                puStack_88[3] = 0;
                puStack_88[4] = 0;
                puStack_88[5] = 0;
                puStack_88[6] = 0;
                puStack_88[7] = 0;
                puStack_88[8] = 0;
                puStack_88[9] = 0;
                puStack_88[10] = 0;
                puStack_88[0xb] = 0;
                puStack_88[0xc] = 0;
                *(int32_t *)(puStack_88 + 0x10) = 0;
                *(int32_t *)((int64_t)puStack_88 + 0x84) = 0;
                *(int32_t *)(puStack_88 + 0x11) = 0;
                *(int32_t *)((int64_t)puStack_88 + 0x8c) = 0;
                *(int32_t *)(puStack_88 + 0x12) = 0;
                *(int32_t *)((int64_t)puStack_88 + 0x94) = 0;
                *(int32_t *)(puStack_88 + 0x13) = 0;
                *(int32_t *)((int64_t)puStack_88 + 0x9c) = 0;
                *(uint64_t *)((int64_t)puStack_88 + 0x6c) = 0;
                *(uint64_t *)((int64_t)puStack_88 + 0x74) = 0;
                *(int32_t *)((int64_t)puStack_88 + 0x7c) = 0;
                *(int32_t *)(puStack_88 + 0xd) = 0;
                *(int32_t *)(puStack_88 + 0x14) = 0;
                *(uint64_t **)(lVar19 + 0x2e0) = puStack_88;
                uVar30 = FUN_1800f4090(system_system_data_memory,0,lVar19 + 0x2ec);
              }
              cVar3 = *(char *)(lVar19 + 0x2e9);
              cVar25 = (char)ppppppplStackX_8;
              if (cVar3 == '\0') {
                cVar17 = '\x01';
                uStackX_10 = CONCAT71(uStackX_10._1_7_,1);
LAB_1800ef483:
                cVar12 = (char)ppppppplStackX_18;
              }
              else {
                cVar17 = (char)uStackX_10;
                if (cVar3 == '\x02') {
                  cVar25 = '\x01';
                  ppppppplStackX_8 = (int64_t *******)CONCAT71(ppppppplStackX_8._1_7_,1);
                  goto LAB_1800ef483;
                }
                if (cVar3 != '\x01') {
                  if (cVar3 == '\x03') {
                    bVar29 = true;
                  }
                  goto LAB_1800ef483;
                }
                ppppppplStackX_18 = (int64_t *******)CONCAT71(ppppppplStackX_18._1_7_,1);
                cVar12 = '\x01';
              }
              if ((bVar5) && (cVar3 == '\x04')) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
            }
            lVar27 = lVar27 + 0x10;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          pppppplVar16 = pppppplStack_c8;
          if ((cVar25 == '\0') || ((char)plStack_d8[2] == '\0')) goto LAB_1800ef4ce;
          bVar6 = true;
        }
        if (cVar12 == '\0') {
          if ((bVar29) || (bVar5)) {
            if ((cVar17 != '\0') || ((bVar6 || (bVar29)))) goto LAB_1800ef691;
LAB_1800ef6dd:
            if (pppppplVar16 == (int64_t ******)0x0) {
              if (!bVar5) goto LAB_1800ef873;
LAB_1800efa9b:
              uVar30 = FUN_1800f3260(puVar9,lStack_e8);
              ppppppplStackX_20 = (int64_t *******)CONCAT71(ppppppplStackX_20._1_7_,1);
              goto LAB_1800ef87d;
            }
            if (!bVar5) {
LAB_1800ef873:
              uVar30 = FUN_1800f3ce0(uVar30,lStack_e8);
              goto LAB_1800ef87d;
            }
            bVar7 = false;
            bVar29 = false;
            cVar12 = '\0';
            uStackX_10 = uStackX_10 & 0xffffffffffffff00;
            bVar5 = false;
            bVar28 = false;
            bVar6 = true;
            iVar13 = (int)((int64_t)pppppplStack_e0[8] - (int64_t)pppppplStack_e0[7] >> 4);
            lVar26 = (int64_t)iVar13;
            if (iVar13 < 1) {
LAB_1800ef846:
              bVar29 = false;
            }
            else {
              lVar27 = 0;
              do {
                lVar19 = *(int64_t *)(lVar27 + (int64_t)pppppplStack_e0[7]);
                iVar13 = *(int *)(SYSTEM_STATE_MANAGER + 0x620);
                if (iVar13 == -1) {
LAB_1800ef81c:
                  cVar12 = (char)uStackX_10;
                }
                else {
                  if (iVar13 == 0) {
                    uVar14 = *(uint *)(lVar19 + 0x100) >> 4;
                  }
                  else {
                    if (iVar13 != 1) goto LAB_1800ef81c;
                    uVar14 = *(uint *)(lVar19 + 0x100) >> 0x16;
                  }
                  if ((uVar14 & 1) == 0) goto LAB_1800ef81c;
                  if ((*(byte *)(lVar19 + 0xfd) & 0x20) == 0) {
                    lVar19 = func_0x000180085de0(*(uint64_t *)(lVar19 + 0x1b0));
                    uVar30 = extraout_XMM0_Da_01;
                  }
                  if (*(int64_t *)(lVar19 + 0x2f0) == 0) {
                    ppppppplStackX_8 = (int64_t *******)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x18,8);
                    *ppppppplStackX_8 = (int64_t ******)0x0;
                    ppppppplStackX_8[1] = (int64_t ******)0x0;
                    *(int32_t *)(ppppppplStackX_8 + 2) = 0;
                    *(int64_t ********)(lVar19 + 0x2f0) = ppppppplStackX_8;
                    uVar30 = FUN_1800f4090(system_system_data_memory,1,lVar19 + 0x2fc);
                  }
                  cVar17 = *(char *)(lVar19 + 0x2f9);
                  if (cVar17 == '\0') {
                    bVar7 = true;
LAB_1800ef805:
                    cVar12 = (char)uStackX_10;
                  }
                  else {
                    if (cVar17 == '\x02') {
                      bVar29 = true;
                      goto LAB_1800ef805;
                    }
                    if (cVar17 != '\x01') {
                      bVar28 = bVar5;
                      if (cVar17 == '\x03') {
                        bVar5 = true;
                        bVar28 = true;
                      }
                      goto LAB_1800ef805;
                    }
                    uStackX_10 = CONCAT71(uStackX_10._1_7_,1);
                    cVar12 = '\x01';
                  }
                  if ((bVar6) && (cVar17 == '\x04')) {
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                  }
                }
                lVar27 = lVar27 + 0x10;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              if ((!bVar29) || ((char)plStack_d8[2] == '\0')) goto LAB_1800ef846;
              bVar29 = true;
            }
            if ((cVar12 == '\0') && (!bVar28)) {
              if (bVar6) {
                if ((!bVar7) && (!bVar29)) goto LAB_1800efa9b;
              }
              else {
                if (bVar7) {
                  ppppppplVar15 = (int64_t *******)CoreSystem_LoggingManager0(system_memory_pool_ptr,200,8);
                  ppppppplStackX_8 = ppppppplVar15;
                  UltraHighFreq_PerformanceMonitor1(ppppppplVar15);
                  pppppplVar16 = pppppplStack_e0;
                  *ppppppplVar15 = (int64_t ******)&processed_var_6584_ptr;
                  ppppppplVar15[0x18] = (int64_t ******)0x0;
                  pppppplStack_b0 = pppppplStack_e0;
                  (*(code *)(*pppppplStack_e0)[5])(pppppplStack_e0);
                  pppppplStack_b0 = ppppppplVar15[0x18];
                  ppppppplVar15[0x18] = pppppplVar16;
                  if (pppppplStack_b0 != (int64_t ******)0x0) {
                    (*(code *)(*pppppplStack_b0)[7])();
                  }
                  iVar13 = (int)((int64_t)ppppppplVar15[0x18][8] - (int64_t)ppppppplVar15[0x18][7]
                                >> 4);
                  lVar26 = (int64_t)iVar13;
                  if (0 < iVar13) {
                    lVar27 = 0;
                    do {
                      lVar19 = *(int64_t *)(lVar27 + (int64_t)ppppppplVar15[0x18][7]);
                      if ((*(uint *)(lVar19 + 0x100) & 0x400000) != 0) {
                        if ((*(byte *)(lVar19 + 0xfd) & 0x20) == 0) {
                          lVar19 = func_0x000180085de0(*(uint64_t *)(lVar19 + 0x1b0));
                        }
                        if (*(char *)(lVar19 + 0x2f9) != '\x04') {
                          *(int16_t *)(lVar19 + 0x2f8) = 0x100;
                        }
                      }
                      lVar27 = lVar27 + 0x10;
                      lVar26 = lVar26 + -1;
                    } while (lVar26 != 0);
                  }
                  ppppppplStack_58 = ppppppplVar15;
                  (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
                  lVar26 = system_context_ptr;
                  ppppppplStackX_8 = (int64_t *******)&ppppppplStack_d0;
                  ppppppplStack_d0 = ppppppplVar15;
                  (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
                  SystemCore_TimerManager(lVar26,&ppppppplStack_d0);
                  pppppplVar16 = *ppppppplVar15;
                  goto LAB_1800ef68e;
                }
                if (!bVar29) goto LAB_1800ef873;
              }
            }
          }
          else {
            if (bVar6) {
              if (cVar17 == '\0') goto LAB_1800ef691;
            }
            else if (cVar17 == '\0') goto LAB_1800ef6dd;
            ppppppplVar15 = (int64_t *******)CoreSystem_LoggingManager0(system_memory_pool_ptr,0xd0,8);
            ppppppplStackX_8 = ppppppplVar15;
            UltraHighFreq_PerformanceMonitor1(ppppppplVar15);
            *ppppppplVar15 = (int64_t ******)&processed_var_6728_ptr;
            ppppppplVar15[0x18] = (int64_t ******)0x0;
            *(bool *)(ppppppplVar15 + 0x19) = bVar28;
            if (pppppplVar8 != (int64_t ******)0x0) {
              pppppplStack_b8 = pppppplVar8;
              (*(code *)(*pppppplVar8)[5])(pppppplVar8);
            }
            pppppplStack_b8 = ppppppplVar15[0x18];
            ppppppplVar15[0x18] = pppppplVar8;
            if (pppppplStack_b8 != (int64_t ******)0x0) {
              (*(code *)(*pppppplStack_b8)[7])();
            }
            iVar13 = (int)((int64_t)ppppppplVar15[0x18][8] - (int64_t)ppppppplVar15[0x18][7] >> 4)
            ;
            lVar26 = (int64_t)iVar13;
            if (0 < iVar13) {
              lVar27 = 0;
              do {
                lVar19 = *(int64_t *)(lVar27 + (int64_t)ppppppplVar15[0x18][7]);
                if (((*(uint *)(lVar19 + 0x100) & 0x400000) != 0) ||
                   (*(char *)(ppppppplVar15 + 0x19) != '\0')) {
                  if ((*(byte *)(lVar19 + 0xfd) & 0x20) == 0) {
                    lVar19 = func_0x000180085de0(*(uint64_t *)(lVar19 + 0x1b0));
                  }
                  if (*(char *)(lVar19 + 0x2e9) != '\x04') {
                    *(int16_t *)(lVar19 + 0x2e8) = 0x100;
                  }
                }
                lVar27 = lVar27 + 0x10;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
            }
            ppppppplStack_60 = ppppppplVar15;
            (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
            lVar26 = system_context_ptr;
            ppppppplStackX_18 = (int64_t *******)&ppppppplStack_f0;
            ppppppplStack_f0 = ppppppplVar15;
            (*(code *)(*ppppppplVar15)[5])(ppppppplVar15);
            ppppppplStackX_20 = (int64_t *******)&ppppppplStack_f0;
            (*(code *)(*ppppppplStack_f0)[0xf])();
            lVar27 = FUN_18005eb80(lVar26 + 0x2e0);
            if (lVar27 != 0) {
              FUN_18005f220(lVar27,&ppppppplStack_f0);
            }
            do {
              iVar13 = ReleaseSemaphore(*(uint64_t *)(lVar26 + 0x70),1,0);
              ppppppplVar15 = ppppppplStackX_8;
            } while (iVar13 == 0);
            if (ppppppplStack_f0 != (int64_t *******)0x0) {
              (*(code *)(*ppppppplStack_f0)[7])();
            }
            pppppplVar16 = *ppppppplVar15;
LAB_1800ef68e:
            uVar30 = (*(code *)pppppplVar16[7])(ppppppplVar15);
          }
        }
LAB_1800ef691:
        uStack_100 = uStack_100 + 1;
      }
    } while ((int)uStack_100 < (int)uStack_fc);
  }
  puVar11 = puStack_90;
  if (*puStack_90 < uStack_fc) {
    iVar13 = uStack_fc - *puStack_90;
    if (iVar13 != 0) {
      LOCK();
      uVar14 = *puStack_90;
      *puStack_90 = *puStack_90 + iVar13;
      UNLOCK();
      uVar21 = (uint64_t)(uVar14 >> 0xc);
      uVar20 = (uint64_t)(iVar13 + -1 + uVar14 >> 0xc);
      if (uVar21 <= uVar20) {
        puVar23 = puStack_90 + (uint64_t)(uVar14 >> 0xc) * 2 + 2;
        lVar26 = (uVar20 - uVar21) + 1;
        do {
          if (*(int64_t *)puVar23 == 0) {
            uStack_50 = 0x1800f695c;
            lVar27 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x18000,0x1e);
            LOCK();
            bVar29 = *(int64_t *)(puVar11 + (int64_t)(int)uVar21 * 2 + 2) == 0;
            if (bVar29) {
              *(int64_t *)(puVar11 + (int64_t)(int)uVar21 * 2 + 2) = lVar27;
            }
            UNLOCK();
            if ((!bVar29) && (lVar27 != 0)) {
                    // WARNING: Subroutine does not return
              uStack_50 = 0x1800f697a;
              CoreEngine_MemoryPoolManager(lVar27);
            }
          }
          uVar21 = (uint64_t)((int)uVar21 + 1);
          puVar23 = puVar23 + 2;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      uStack_50 = 0x1800f6994;
      FUN_1800f6e10(puVar11,uVar14,iVar13);
    }
  }
  else if (uStack_fc < *puStack_90) {
    uVar14 = *puStack_90;
    for (uVar18 = uStack_fc; (int)uVar18 < (int)uVar14; uVar18 = uVar18 + 1) {
      pppppplVar16 = (int64_t ******)
                     (*(int64_t *)(puVar11 + (uint64_t)(uVar18 >> 0xc) * 2 + 2) +
                     (int64_t)(int)(uVar18 + (uVar18 >> 0xc) * -0x1000) * 0x18);
      ppppppplStackX_8 = (int64_t *******)pppppplVar16;
      if (pppppplVar16[1] != (int64_t *****)0x0) {
        uStack_50 = 0x1800f69e2;
        (*(code *)(*pppppplVar16[1])[7])();
      }
      if (*pppppplVar16 != (int64_t *****)0x0) {
        uStack_50 = 0x1800f69f1;
        (*(code *)(**pppppplVar16)[7])();
      }
    }
    LOCK();
    *puVar11 = uStack_fc;
    UNLOCK();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




