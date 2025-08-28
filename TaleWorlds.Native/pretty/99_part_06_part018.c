#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part018.c - 1 个函数

// 函数: void FUN_1803b5630(int64_t *param_1,char param_2,char param_3)
void FUN_1803b5630(int64_t *param_1,char param_2,char param_3)

{
  code *pcVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int *piVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int **ppiVar14;
  int32_t *puVar15;
  int iVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  int8_t auStack_ac8 [32];
  uint64_t uStack_aa8;
  uint64_t **ppuStack_aa0;
  int64_t *plStack_a98;
  int iStack_a90;
  char cStack_a88;
  int iStack_a84;
  uint64_t uStack_a80;
  uint64_t uStack_a78;
  int64_t lStack_a70;
  int *piStack_a68;
  uint64_t uStack_a60;
  int16_t uStack_a58;
  int8_t uStack_a56;
  int iStack_a50;
  int iStack_a4c;
  uint64_t **ppuStack_a48;
  int64_t lStack_a40;
  int *piStack_a38;
  uint64_t uStack_a30;
  char cStack_a28;
  int8_t uStack_a27;
  int8_t uStack_a26;
  uint64_t uStack_a20;
  uint64_t uStack_a18;
  uint64_t uStack_a10;
  int16_t uStack_a08;
  int8_t uStack_a06;
  void *puStack_a00;
  int8_t *puStack_9f8;
  int32_t uStack_9f0;
  uint uStack_9e8;
  int32_t uStack_9e4;
  uint64_t uStack_9e0;
  void *puStack_9d8;
  int32_t *puStack_9d0;
  int32_t uStack_9c8;
  uint64_t uStack_9c0;
  int64_t *plStack_998;
  int64_t *plStack_990;
  uint64_t uStack_988;
  uint64_t uStack_980;
  int *piStack_978;
  int iStack_970;
  int iStack_96c;
  char acStack_968 [4];
  uint uStack_964;
  int *piStack_918;
  uint64_t *puStack_910;
  int *piStack_908;
  uint64_t *puStack_900;
  int *piStack_8f8;
  uint64_t *puStack_8f0;
  int *piStack_8e8;
  uint64_t *puStack_8e0;
  int *piStack_8d8;
  uint64_t *puStack_8d0;
  int *piStack_8c8;
  uint64_t *puStack_8c0;
  int *piStack_8b8;
  uint64_t *puStack_8b0;
  int *piStack_8a8;
  uint64_t *puStack_8a0;
  int *piStack_898;
  uint64_t *puStack_890;
  int *piStack_888;
  uint64_t *puStack_880;
  uint64_t *apuStack_878 [2];
  code *pcStack_868;
  void *puStack_860;
  uint64_t uStack_858;
  int8_t auStack_848 [2048];
  uint64_t uStack_48;
  
  uStack_858 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_ac8;
  cStack_a88 = param_3;
  SystemCore_NetworkHandler0(&puStack_a00);
  lStack_a70 = 0;
  piStack_a68 = (int *)0x0;
  iVar22 = 0;
  uStack_a60 = 0;
  uStack_a58 = 0;
  uStack_a56 = 0x23;
  if (*(char *)((int64_t)param_1 + 0x1c42) == '\0') {
    FUN_1803b27a0(param_1);
  }
  while (uVar9 = system_context_ptr, (char)param_1[0x388] == '\0') {
    lVar7 = FUN_18005e890(system_context_ptr);
    if (lVar7 != 0) {
      plVar8 = (int64_t *)FUN_18005e890(uVar9);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
  }
  *(int8_t *)((int64_t)param_1 + 0x1c42) = 0;
  iStack_a84 = 0;
  if ((param_2 == '\0') && (*(char *)((int64_t)param_1 + 0x1c41) != '\0')) {
    piVar11 = (int *)param_1[0x385];
    iVar21 = *piVar11;
    param_1[0x385] = (int64_t)(piVar11 + 1);
    if (iVar21 == 0x3252475a) {
      uVar17 = (uint64_t)(uint)piVar11[1];
      piVar11 = piVar11 + 2;
      param_1[0x385] = (int64_t)piVar11;
      iStack_a84 = iVar21;
      if (uStack_a60 < uVar17) {
        System_BufferManager(&lStack_a70,uVar17);
        piVar11 = (int *)param_1[0x385];
      }
      if ((uStack_a60 - (int64_t)piStack_a68) + lStack_a70 <= uVar17) {
        System_BufferManager(&lStack_a70,(int64_t)piStack_a68 + (uVar17 - lStack_a70));
      }
                    // WARNING: Subroutine does not return
      memcpy(piStack_a68,piVar11,uVar17);
    }
    if ((iVar21 + 0xccadb8a6U & 0xfcffffff) == 0) {
      if (iVar21 != 0x3652475a) {
        uStack_a20 = 0;
        uStack_a18 = 0;
        uStack_a10 = 0;
        uStack_a08 = 0;
        uStack_a06 = 3;
        iStack_a84 = iVar21;
                    // WARNING: Subroutine does not return
        memset(auStack_848,0,0x800);
      }
    }
    else if (iVar21 != 0x3652475a) goto LAB_1803b57c6;
    iStack_a84 = 0x3652475a;
  }
LAB_1803b57c6:
  lVar7 = param_1[0xd];
  if (lVar7 == 0) goto LAB_1803b685b;
  if ((iStack_a84 + 0xcbadb8a6U & 0xfeffffff) == 0) {
    if (param_1[900] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(param_1[900]);
    }
    if ((param_3 != '\0') && (0 < *(int *)((int64_t)param_1 + 0x14))) {
      do {
        iVar21 = 0;
        if (0 < (int)param_1[3]) {
          uStack_9e0 = CONCAT44(uStack_9e0._4_4_,iVar22);
          uStack_a80 = CONCAT44(uStack_a80._4_4_,iVar22 * 1000);
          iVar16 = iVar22 * 1000;
          do {
            ppuStack_a48 = (uint64_t **)
                           (**(code **)(*param_1 + 0x90))(param_1,param_1[0xd],iVar22,iVar21);
            uStack_9e0 = CONCAT44(iVar21,(int32_t)uStack_9e0);
            uVar17 = (uint64_t)(int64_t)(iVar16 + iVar21) % (uint64_t)*(uint *)(param_1 + 9);
            for (plVar8 = *(int64_t **)(param_1[8] + uVar17 * 8); plVar8 != (int64_t *)0x0;
                plVar8 = (int64_t *)plVar8[2]) {
              if ((iVar22 == (int)*plVar8) && (iVar21 == *(int *)((int64_t)plVar8 + 4)))
              goto LAB_1803b6243;
            }
            uStack_aa8 = CONCAT44(uStack_aa8._4_4_,1);
            FUN_18066c220(param_1 + 0xb,&uStack_a78,(uint64_t)*(uint *)(param_1 + 9),
                          (int)param_1[10]);
            plVar8 = (int64_t *)
                     CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)((int64_t)param_1 + 100));
            *plVar8 = uStack_9e0;
            plVar8[1] = 0;
            plVar8[2] = 0;
            if ((char)uStack_a78 != '\0') {
              uVar17 = (uint64_t)(int64_t)(iVar16 + iVar21) % (uint64_t)uStack_a78._4_4_;
              FUN_1803b94a0(param_1 + 7,uStack_a78._4_4_);
            }
            plVar8[2] = *(int64_t *)(param_1[8] + uVar17 * 8);
            *(int64_t **)(param_1[8] + uVar17 * 8) = plVar8;
            param_1[10] = param_1[10] + 1;
LAB_1803b6243:
            plVar8[1] = (int64_t)ppuStack_a48;
            iVar21 = iVar21 + 1;
            iVar16 = (int)uStack_a80;
          } while (iVar21 < (int)param_1[3]);
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < *(int *)((int64_t)param_1 + 0x14));
      lVar7 = param_1[0xd];
    }
    FUN_1801bea60(lVar7 + 0x608f0);
    ppuStack_a48 = apuStack_878;
    plStack_990 = &lStack_a70;
    uStack_988 = auStack_848;
    uStack_980 = &puStack_a00;
    piStack_978 = &iStack_a84;
    pcStack_868 = FUN_1803b9640;
    puStack_860 = &processed_var_6016_ptr;
    plStack_998 = param_1;
    apuStack_878[0] = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
    *apuStack_878[0] = plStack_998;
    apuStack_878[0][1] = plStack_990;
    *(int32_t *)(apuStack_878[0] + 2) = (int32_t)uStack_988;
    *(int32_t *)((int64_t)apuStack_878[0] + 0x14) = uStack_988._4_4_;
    *(int32_t *)(apuStack_878[0] + 3) = (int32_t)uStack_980;
    *(int32_t *)((int64_t)apuStack_878[0] + 0x1c) = uStack_980._4_4_;
    apuStack_878[0][4] = piStack_978;
    ppuStack_aa0 = apuStack_878;
    uStack_aa8 = 0xffffffffffffffff;
    FUN_18015b810((int)piStack_978,0,(int)param_1[3] * *(int *)((int64_t)param_1 + 0x14),1);
    if (iStack_a84 == 0x3552475a) {
      uStack_a26 = 3;
      uStack_a80 = lStack_a70;
      lStack_a40 = lStack_a70;
      uStack_a78 = uStack_a60;
      uStack_a30 = uStack_a60;
      _cStack_a28 = CONCAT11((char)((ushort)uStack_a58 >> 8),1);
      piVar11 = piStack_a68 + 1;
      cVar4 = '\x01';
      piStack_a38 = piVar11;
      if (*piStack_a68 == 2) {
        iStack_a50 = 0;
        do {
          if (iStack_a50 == *(int *)(param_1[0xd] + 0x3054)) {
            piStack_a38 = piVar11;
            uVar9 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,3);
            lVar12 = FUN_18023a2e0(uVar9,0);
            puStack_9d8 = &system_data_buffer_ptr;
            uStack_9c0 = 0;
            puStack_9d0 = (int32_t *)0x0;
            uStack_9c8 = 0;
            puVar13 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
            *(int8_t *)puVar13 = 0;
            puStack_9d0 = puVar13;
            uVar6 = CoreMemoryPoolCleaner(puVar13);
            *puVar13 = 0x72726574;
            puVar13[1] = 0x5f6e6961;
            puVar13[2] = 0x6574616d;
            puVar13[3] = 0x6c616972;
            *(uint64_t *)(puVar13 + 4) = 0x5f7865646e695f;
            uStack_9c8 = 0x17;
            lVar7 = param_1[0xd];
            iVar22 = *(int *)(lVar7 + 0x4e8);
            uStack_9c0._0_4_ = uVar6;
            if (0 < iVar22) {
              if ((iVar22 != -0x17) && (uVar6 < iVar22 + 0x18U)) {
                uStack_aa8 = CONCAT71(uStack_aa8._1_7_,0x13);
                puVar13 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar13,iVar22 + 0x18U,0x10);
                puStack_9d0 = puVar13;
                uStack_9c0._0_4_ = CoreMemoryPoolCleaner(puVar13);
                iVar22 = *(int *)(lVar7 + 0x4e8);
              }
                    // WARNING: Subroutine does not return
              memcpy((int8_t *)((int64_t)puVar13 + 0x17),*(uint64_t *)(lVar7 + 0x4e0),
                     (int64_t)(iVar22 + 1));
            }
            puVar15 = (int32_t *)&system_buffer_ptr;
            if (puVar13 != (int32_t *)0x0) {
              puVar15 = puVar13;
            }
            (**(code **)(*(int64_t *)(lVar12 + 0x10) + 0x10))((int64_t *)(lVar12 + 0x10),puVar15);
            puVar10 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
            uVar9 = 0;
            *puVar10 = 0;
            puVar10[1] = 0;
            *(int16_t *)(puVar10 + 2) = 0;
            *(int32_t *)((int64_t)puVar10 + 0x62) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x54) = 0;
            *(int32_t *)((int64_t)puVar10 + 0x5c) = 0;
            *(int16_t *)(puVar10 + 0xc) = 0;
            *(int8_t *)((int64_t)puVar10 + 0x66) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x14) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x1c) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x24) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x2c) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x34) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x3c) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x44) = 0;
            *(uint64_t *)((int64_t)puVar10 + 0x4c) = 0;
            *(int8_t *)((int64_t)puVar10 + 0x12) = 0x23;
            iVar22 = *piVar11;
            piStack_a38 = piVar11 + 1;
            if (iVar22 != 0) {
              uVar9 = CoreMemoryPoolAllocator(system_memory_pool_ptr,iVar22,3);
            }
                    // WARNING: Subroutine does not return
            memcpy(uVar9,piStack_a38,(int64_t)iVar22);
          }
          uVar17 = (uint64_t)*piVar11;
          piStack_a38 = piVar11 + 1;
          if ((uStack_a78 - (int64_t)piStack_a38) + uStack_a80 <= uVar17) {
            System_BufferManager(&lStack_a40,(int64_t)piStack_a38 + (uVar17 - uStack_a80));
            uStack_a78 = uStack_a30;
            uStack_a80 = lStack_a40;
          }
          piVar11 = (int *)((int64_t)piStack_a38 + uVar17);
          iStack_a50 = iStack_a50 + 1;
        } while (iStack_a50 < 4);
        cVar4 = cStack_a28;
        piStack_a38 = piVar11;
      }
      if ((cVar4 == '\0') && (uStack_a80 != 0)) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(uStack_a80);
      }
    }
    if ((void *)*param_1 != &processed_var_952_ptr) {
      (**(code **)((void *)*param_1 + 0x28))(param_1);
    }
    iVar22 = 0;
    if (0 < *(int *)((int64_t)param_1 + 0x14)) {
      do {
        if (0 < (int)param_1[3]) {
          iVar21 = 0;
          do {
            lVar7 = param_1[8];
            puVar10 = (uint64_t *)
                      (lVar7 + ((uint64_t)(int64_t)(iVar22 * 1000 + iVar21) %
                               (uint64_t)*(uint *)(param_1 + 9)) * 8);
            for (piVar11 = (int *)*puVar10; piVar11 != (int *)0x0; piVar11 = *(int **)(piVar11 + 4))
            {
              if ((iVar22 == *piVar11) && (iVar21 == piVar11[1])) {
                piStack_8d8 = piVar11;
                puStack_8d0 = puVar10;
                ppiVar14 = &piStack_8d8;
                lVar12 = param_1[9];
                goto LAB_1803b680a;
              }
            }
            lVar12 = param_1[9];
            puStack_8c0 = (uint64_t *)(lVar7 + lVar12 * 8);
            piStack_8c8 = (int *)*puStack_8c0;
            ppiVar14 = &piStack_8c8;
LAB_1803b680a:
            if ((*ppiVar14 != *(int **)(lVar7 + lVar12 * 8)) &&
               (plVar8 = *(int64_t **)(*ppiVar14 + 2), plVar8 != (int64_t *)0x0)) {
              uStack_aa8 = CONCAT71(uStack_aa8._1_7_,1);
              (**(code **)(*plVar8 + 0x58))
                        (plVar8,iVar22,iVar21,*(uint64_t *)(param_1[0xd] + 0x2908));
              plVar8[0xcb] = param_1[0xe];
            }
            iVar21 = iVar21 + 1;
          } while (iVar21 < (int)param_1[3]);
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < *(int *)((int64_t)param_1 + 0x14));
    }
    goto LAB_1803b685b;
  }
  if ((iStack_a84 + 0xcdadb8a6U & 0xfeffffff) == 0) {
    if (param_1[900] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (0 < *(int *)((int64_t)param_1 + 0x14)) {
      do {
        iVar21 = 0;
        if (0 < (int)param_1[3]) {
          uStack_9e0 = (int64_t)iVar22 << 4;
          uStack_a80 = CONCAT44(uStack_a80._4_4_,iVar22 * 1000);
          iVar16 = iVar22 * 1000;
          do {
            plVar8 = (int64_t *)0x0;
            if (param_3 == '\0') {
              lVar7 = param_1[8];
              puVar10 = (uint64_t *)
                        (lVar7 + ((uint64_t)(int64_t)(iVar16 + iVar21) %
                                 (uint64_t)*(uint *)(param_1 + 9)) * 8);
              for (piVar11 = (int *)*puVar10; piVar11 != (int *)0x0;
                  piVar11 = *(int **)(piVar11 + 4)) {
                if ((iVar22 == *piVar11) && (iVar21 == piVar11[1])) {
                  piStack_8f8 = piVar11;
                  puStack_8f0 = puVar10;
                  ppiVar14 = &piStack_8f8;
                  lVar12 = param_1[9];
                  goto LAB_1803b6009;
                }
              }
              lVar12 = param_1[9];
              puStack_8e0 = (uint64_t *)(lVar7 + lVar12 * 8);
              piStack_8e8 = (int *)*puStack_8e0;
              ppiVar14 = &piStack_8e8;
LAB_1803b6009:
              if (*ppiVar14 != *(int **)(lVar7 + lVar12 * 8)) {
                plVar8 = *(int64_t **)(*ppiVar14 + 2);
              }
            }
            else {
              plVar8 = (int64_t *)
                       (**(code **)(*param_1 + 0x90))(param_1,param_1[0xd],iVar22,iVar21);
              uStack_a78 = (uint64_t)(iVar16 + iVar21);
              uVar17 = uStack_a78 % (uint64_t)*(uint *)(param_1 + 9);
              for (piVar11 = *(int **)(param_1[8] + uVar17 * 8); iStack_970 = iVar22,
                  iStack_96c = iVar21, piVar11 != (int *)0x0; piVar11 = *(int **)(piVar11 + 4)) {
                if ((iVar22 == *piVar11) && (iVar21 == piVar11[1])) goto LAB_1803b5f97;
              }
              uStack_aa8 = CONCAT44(uStack_aa8._4_4_,1);
              FUN_18066c220(param_1 + 0xb,acStack_968,(uint64_t)*(uint *)(param_1 + 9),
                            (int)param_1[10]);
              piVar11 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,
                                             *(int8_t *)((int64_t)param_1 + 100));
              *(uint64_t *)piVar11 = CONCAT44(iStack_96c,iStack_970);
              piVar11[2] = 0;
              piVar11[3] = 0;
              piVar11[4] = 0;
              piVar11[5] = 0;
              if (acStack_968[0] != '\0') {
                uVar17 = uStack_a78 % (uint64_t)uStack_964;
                FUN_1803b94a0(param_1 + 7,uStack_964);
              }
              *(uint64_t *)(piVar11 + 4) = *(uint64_t *)(param_1[8] + uVar17 * 8);
              *(int **)(param_1[8] + uVar17 * 8) = piVar11;
              param_1[10] = param_1[10] + 1;
LAB_1803b5f97:
              *(int64_t **)(piVar11 + 2) = plVar8;
            }
            ppuStack_a48 = *(uint64_t ***)(*plVar8 + 0x10);
            iStack_a50 = iStack_a84;
            uStack_a78 = param_1[0xd];
            if (*(int64_t *)(uStack_a78 + 0x60b40) == 0) {
              uVar9 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x6c00,4,3);
                    // WARNING: Subroutine does not return
              memset(uVar9,0,0x6c00);
            }
            iStack_a90 = iStack_a84;
            plStack_a98 = &lStack_a70;
            ppuStack_aa0 = (uint64_t **)(param_1 + 0x10);
            uStack_aa8 = CONCAT44(uStack_aa8._4_4_,iVar21);
            (*(code *)ppuStack_a48)
                      (plVar8,&puStack_a00,
                       (iVar21 + uStack_9e0) * 0x6c + *(int64_t *)(uStack_a78 + 0x60b40),iVar22);
            plVar8[0xcb] = param_1[0xe];
            iVar21 = iVar21 + 1;
            param_3 = cStack_a88;
            iVar16 = (int)uStack_a80;
          } while (iVar21 < (int)param_1[3]);
        }
        iVar22 = iVar22 + 1;
        param_3 = cStack_a88;
      } while (iVar22 < *(int *)((int64_t)param_1 + 0x14));
    }
    goto LAB_1803b685b;
  }
  if (iStack_a84 == 0x3652475a) {
    if ((param_3 != '\0') && (iVar21 = iVar22, 0 < (int)param_1[3])) {
      do {
        iVar16 = iVar22;
        if (0 < *(int *)((int64_t)param_1 + 0x14)) {
          do {
            uVar9 = (**(code **)(*param_1 + 0x90))(param_1,param_1[0xd],iVar16,iVar21);
            uStack_a80 = CONCAT44(iVar21,iVar16);
            puVar10 = (uint64_t *)FUN_1803b9300(param_1 + 7);
            *puVar10 = uVar9;
            iVar16 = iVar16 + 1;
          } while (iVar16 < *(int *)((int64_t)param_1 + 0x14));
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < (int)param_1[3]);
    }
    (**(code **)(*param_1 + 8))(param_1);
    FUN_180639d30(param_1 + 900);
    if ((void *)*param_1 != &processed_var_952_ptr) {
      (**(code **)((void *)*param_1 + 0x28))(param_1);
    }
    iVar21 = iVar22;
    if (0 < *(int *)((int64_t)param_1 + 0x14)) {
      do {
        if (0 < (int)param_1[3]) {
          iVar16 = iVar22;
          do {
            lVar7 = param_1[8];
            puVar10 = (uint64_t *)
                      (lVar7 + ((uint64_t)(int64_t)(iVar21 * 1000 + iVar16) %
                               (uint64_t)*(uint *)(param_1 + 9)) * 8);
            for (piVar11 = (int *)*puVar10; piVar11 != (int *)0x0; piVar11 = *(int **)(piVar11 + 4))
            {
              if ((iVar21 == *piVar11) && (iVar16 == piVar11[1])) {
                piStack_918 = piVar11;
                puStack_910 = puVar10;
                ppiVar14 = &piStack_918;
                lVar12 = param_1[9];
                goto LAB_1803b5c5a;
              }
            }
            lVar12 = param_1[9];
            puStack_900 = (uint64_t *)(lVar7 + lVar12 * 8);
            piStack_908 = (int *)*puStack_900;
            ppiVar14 = &piStack_908;
LAB_1803b5c5a:
            if ((*ppiVar14 != *(int **)(lVar7 + lVar12 * 8)) &&
               (plVar8 = *(int64_t **)(*ppiVar14 + 2), plVar8 != (int64_t *)0x0)) {
              uStack_aa8 = CONCAT71(uStack_aa8._1_7_,1);
              (**(code **)(*plVar8 + 0x58))
                        (plVar8,iVar21,iVar16,*(uint64_t *)(param_1[0xd] + 0x2908));
              plVar8[0xcb] = param_1[0xe];
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < (int)param_1[3]);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < *(int *)((int64_t)param_1 + 0x14));
    }
    goto LAB_1803b685b;
  }
  FUN_180639d30(param_1 + 900);
  if (param_2 != '\0') {
    lVar7 = FUN_180628ca0();
    uVar6 = *(uint *)(lVar7 + 0x10);
    if ((*(int64_t *)(lVar7 + 8) != 0) && (uVar6 != 0)) {
      uVar5 = uVar6 + 1;
      if (puStack_9f8 == (int8_t *)0x0) {
        if ((int)uVar5 < 0x10) {
          uVar5 = 0x10;
        }
        puStack_9f8 = (int8_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar5,0x13);
        *puStack_9f8 = 0;
      }
      else {
        if (uVar5 <= uStack_9e8) goto LAB_1803b5d45;
        uStack_aa8 = CONCAT71(uStack_aa8._1_7_,0x13);
        puStack_9f8 = (int8_t *)DataValidator(system_memory_pool_ptr,puStack_9f8,uVar5,0x10);
      }
      uStack_9e8 = CoreMemoryPoolCleaner(puStack_9f8);
    }
LAB_1803b5d45:
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_9f8,*(uint64_t *)(lVar7 + 8),(uint64_t)uVar6);
    }
    if (puStack_9f8 != (int8_t *)0x0) {
      puStack_9f8[uVar6] = 0;
    }
    uStack_9e4 = *(int32_t *)(lVar7 + 0x1c);
    uStack_9f0 = 0;
  }
  if (0 < *(int *)((int64_t)param_1 + 0x14)) {
    do {
      iVar21 = 0;
      if (0 < (int)param_1[3]) {
        do {
          if (cStack_a88 == '\0') {
            plVar8 = (int64_t *)FUN_180195330(param_1,iVar22,iVar21);
          }
          else {
            plVar8 = (int64_t *)(**(code **)(*param_1 + 0x90))(param_1,param_1[0xd],iVar22,iVar21);
            iStack_a50 = iVar22;
            iStack_a4c = iVar21;
            puVar10 = (uint64_t *)FUN_1803b9300(param_1 + 7,&iStack_a50);
            *puVar10 = plVar8;
          }
          pcVar1 = *(code **)(*plVar8 + 8);
          lVar7 = FUN_1801bea60(param_1[0xd] + 0x608f0);
          uStack_aa8 = CONCAT44(uStack_aa8._4_4_,iVar21);
          ppuStack_aa0 = (uint64_t **)(param_1 + 0x10);
          (*pcVar1)(plVar8,&puStack_a00,lVar7 + ((int64_t)iVar21 + (int64_t)iVar22 * 0x10) * 0x6c,
                    iVar22);
          plVar8[0xcb] = param_1[0xe];
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)param_1[3]);
      }
      iVar22 = iVar22 + 1;
    } while (iVar22 < *(int *)((int64_t)param_1 + 0x14));
  }
LAB_1803b685b:
  uVar20 = 0;
  uVar17 = uVar20;
  if ((int)param_1[3] < 1) {
    iVar22 = *(int *)((int64_t)param_1 + 0x14);
  }
  else {
    do {
      iVar22 = *(int *)((int64_t)param_1 + 0x14);
      iVar21 = (int)uVar17;
      uVar17 = uVar20;
      if (0 < iVar22) {
        do {
          iVar16 = (int)uVar17;
          lVar7 = param_1[8];
          puVar10 = (uint64_t *)
                    (lVar7 + ((uint64_t)(int64_t)(iVar16 * 1000 + iVar21) %
                             (uint64_t)*(uint *)(param_1 + 9)) * 8);
          for (piVar11 = (int *)*puVar10; piVar11 != (int *)0x0; piVar11 = *(int **)(piVar11 + 4)) {
            if ((iVar16 == *piVar11) && (iVar21 == piVar11[1])) {
              piStack_8b8 = piVar11;
              puStack_8b0 = puVar10;
              ppiVar14 = &piStack_8b8;
              lVar12 = param_1[9];
              goto LAB_1803b68f2;
            }
          }
          lVar12 = param_1[9];
          puStack_8a0 = (uint64_t *)(lVar7 + lVar12 * 8);
          piStack_8a8 = (int *)*puStack_8a0;
          ppiVar14 = &piStack_8a8;
LAB_1803b68f2:
          if ((*ppiVar14 != *(int **)(lVar7 + lVar12 * 8)) &&
             (lVar7 = *(int64_t *)(*ppiVar14 + 2), lVar7 != 0)) {
            lVar12 = param_1[0x32];
            *(int64_t *)(lVar7 + 0x820) = param_1[0x31];
            *(int64_t *)(lVar7 + 0x828) = lVar12;
            lVar12 = param_1[0x34];
            *(int64_t *)(lVar7 + 0x830) = param_1[0x33];
            *(int64_t *)(lVar7 + 0x838) = lVar12;
            uVar2 = *(int32_t *)((int64_t)param_1 + 0x1ac);
            lVar12 = param_1[0x36];
            uVar3 = *(int32_t *)((int64_t)param_1 + 0x1b4);
            *(int *)(lVar7 + 0x840) = (int)param_1[0x35];
            *(int32_t *)(lVar7 + 0x844) = uVar2;
            *(int *)(lVar7 + 0x848) = (int)lVar12;
            *(int32_t *)(lVar7 + 0x84c) = uVar3;
            lVar12 = param_1[0x38];
            *(int64_t *)(lVar7 + 0x850) = param_1[0x37];
            *(int64_t *)(lVar7 + 0x858) = lVar12;
          }
          uVar17 = (uint64_t)(iVar16 + 1U);
          iVar22 = *(int *)((int64_t)param_1 + 0x14);
        } while ((int)(iVar16 + 1U) < iVar22);
      }
      uVar17 = (uint64_t)(iVar21 + 1U);
    } while ((int)(iVar21 + 1U) < (int)param_1[3]);
  }
  uVar17 = uVar20;
  if (0 < iVar22) {
    do {
      iVar22 = (int)uVar17;
      if (0 < (int)param_1[3]) {
        uVar19 = (uint64_t)(uint)(iVar22 * 1000);
        uVar18 = uVar20;
        do {
          iVar21 = (int)uVar18;
          lVar7 = param_1[8];
          puVar10 = (uint64_t *)
                    (lVar7 + ((uint64_t)(int64_t)((int)uVar19 + iVar21) %
                             (uint64_t)*(uint *)(param_1 + 9)) * 8);
          for (piVar11 = (int *)*puVar10; piVar11 != (int *)0x0; piVar11 = *(int **)(piVar11 + 4)) {
            if (((int)uVar17 == *piVar11) && (iVar21 == piVar11[1])) {
              piStack_898 = piVar11;
              puStack_890 = puVar10;
              ppiVar14 = &piStack_898;
              lVar12 = param_1[9];
              goto LAB_1803b69fc;
            }
          }
          lVar12 = param_1[9];
          puStack_880 = (uint64_t *)(lVar7 + lVar12 * 8);
          piStack_888 = (int *)*puStack_880;
          ppiVar14 = &piStack_888;
LAB_1803b69fc:
          if ((*ppiVar14 != *(int **)(lVar7 + lVar12 * 8)) &&
             (lVar7 = *(int64_t *)(*ppiVar14 + 2), lVar7 != 0)) {
            fVar23 = *(float *)(*(int64_t *)(lVar7 + 0x10) + 0x1c) * 0.0009765625;
            *(float *)(lVar7 + 0xc0) = fVar23;
            *(int32_t *)(lVar7 + 0xc4) = 0;
            *(int32_t *)(lVar7 + 200) = 0;
            *(int32_t *)(lVar7 + 0xcc) = 0;
            *(int32_t *)(lVar7 + 0xd0) = 0;
            *(float *)(lVar7 + 0xd4) = fVar23;
            *(int32_t *)(lVar7 + 0xd8) = 0;
            *(int32_t *)(lVar7 + 0xdc) = 0;
            *(int32_t *)(lVar7 + 0xe0) = 0;
            *(int32_t *)(lVar7 + 0xe4) = 0;
            *(int32_t *)(lVar7 + 0xe8) = 0x3f800000;
            *(int32_t *)(lVar7 + 0xec) = 0;
            *(uint64_t *)(lVar7 + 0xf0) = 0;
            *(uint64_t *)(lVar7 + 0xf8) = 0x3f80000000000000;
            *(int32_t *)(lVar7 + 0x100) = 0;
            *(int32_t *)(lVar7 + 0x104) = 0;
            *(int32_t *)(lVar7 + 0x108) = *(int32_t *)(lVar7 + 0x78);
            *(int32_t *)(lVar7 + 0x110) = 0x44800000;
            *(int32_t *)(lVar7 + 0x114) = 0x44800000;
            *(int32_t *)(lVar7 + 0x118) = *(int32_t *)(lVar7 + 0x7c);
            FUN_1800b9f60();
          }
          iVar22 = (int)uVar17;
          uVar18 = (uint64_t)(iVar21 + 1U);
        } while ((int)(iVar21 + 1U) < (int)param_1[3]);
      }
      uVar17 = (uint64_t)(iVar22 + 1U);
    } while ((int)(iVar22 + 1U) < *(int *)((int64_t)param_1 + 0x14));
  }
  if (((char)uStack_a58 == '\0') && (lStack_a70 != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_a00 = &system_data_buffer_ptr;
  if (puStack_9f8 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  puStack_9f8 = (int8_t *)0x0;
  uStack_9e8 = 0;
  puStack_a00 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_ac8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




