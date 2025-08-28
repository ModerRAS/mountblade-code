#include "CoreSystem_ValidationEngine0_definition.h"
#include "SystemAdvancedValidator_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part028.c - 2 个函数

// 函数: void FUN_1804b6a20(int64_t param_1)
void FUN_1804b6a20(int64_t param_1)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int8_t auStack_188 [32];
  int32_t uStack_168;
  int64_t *plStack_158;
  int64_t *plStack_150;
  int64_t *plStack_148;
  int8_t auStack_140 [8];
  uint64_t uStack_138;
  int64_t *plStack_128;
  char cStack_120;
  char cStack_11f;
  char cStack_11e;
  uint64_t ****ppppuStack_118;
  uint64_t ****ppppuStack_110;
  uint64_t *puStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  int8_t auStack_a0 [16];
  uint64_t *puStack_90;
  int64_t alStack_70 [9];
  
  uStack_a8 = 0xfffffffffffffffe;
  alStack_70[6] = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_188;
  if (*(int64_t *)(param_1 + 0x2a0) != 0) {
    uVar11 = 0;
    uStack_f0 = 3;
    ppppuStack_118 = &ppppuStack_118;
    ppppuStack_110 = &ppppuStack_118;
    puStack_108 = (uint64_t *)0x0;
    uStack_100 = 0;
    uStack_f8 = 0;
    lVar8 = **(int64_t **)(*(int64_t *)(param_1 + 0x2a0) + 0x38);
    uVar3 = *(uint64_t *)(param_1 + 0x370);
    alStack_70[0] = FUN_1804b6970(uVar3);
    uVar4 = *(uint64_t *)(param_1 + 0x2b8);
    alStack_70[1] = FUN_1804b6970(uVar4);
    uVar5 = *(uint64_t *)(param_1 + 0x2d0);
    alStack_70[2] = FUN_1804b6970(uVar5);
    alStack_70[3] = uVar3;
    alStack_70[4] = uVar4;
    alStack_70[5] = uVar5;
    plStack_150 = (int64_t *)0x0;
    plStack_148 = (int64_t *)0x0;
    plStack_158 = (int64_t *)auStack_140;
    plStack_128 = (int64_t *)0x0;
    uStack_138 = 0;
    auStack_140[0] = 0;
    uVar12 = uVar11;
    if (lVar8 != 0) {
      RenderingSystem_MaterialProcessor(&plStack_150,lVar8,4);
    }
    do {
      lVar8 = *(int64_t *)((int64_t)alStack_70 + uVar12);
      iVar10 = (int)uVar11;
      if ((lVar8 != 0) &&
         (plVar6 = *(int64_t **)((int64_t)alStack_70 + uVar12 + 0x18), plVar6 != (int64_t *)0x0))
      {
        lVar7 = (**(code **)(*plVar6 + 0x178))();
        if ((*(char *)(lVar7 + 0xf6) < '\x01') && (iVar10 == 0)) {
          lVar9 = (int64_t)*(char *)(*(int64_t *)(param_1 + 0xa78) + 0xcc) * 0x1b0;
          lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0xa78) + 0x140);
          uStack_e8 = *(uint64_t *)(lVar9 + lVar7);
          uStack_e0 = ((uint64_t *)(lVar9 + lVar7))[1];
          puVar1 = (uint64_t *)(lVar9 + 0x10 + lVar7);
          uStack_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          puVar2 = (int32_t *)(lVar9 + 0x20 + lVar7);
          uStack_c8 = *puVar2;
          uStack_c4 = puVar2[1];
          uStack_c0 = puVar2[2];
          uStack_bc = puVar2[3];
          puVar2 = (int32_t *)(lVar9 + 0x30 + lVar7);
          uStack_b8 = *puVar2;
          uStack_b4 = puVar2[1];
          uStack_b0 = puVar2[2];
          uStack_ac = puVar2[3];
        }
        else {
          uStack_d8 = 0x3f80000000000000;
          uStack_d0 = 0;
          uStack_e8 = 0x3f800000;
          uStack_e0 = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = 0;
          uStack_ac = 0x3f800000;
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0x3f800000;
          uStack_bc = 0;
        }
        uStack_168 = 0x3ccccccd;
        lVar8 = FUN_180233690(&plStack_150,auStack_a0,lVar8,&uStack_e8);
        lVar7 = param_1 + 0x2d8 + (int64_t)iVar10 * 0x30;
        if (lVar7 != lVar8) {
          FUN_1800572d0(lVar7);
          func_0x00018023a030(lVar7,lVar8);
        }
        if (puStack_90 != (uint64_t *)0x0) {
          SystemCache_Manager(auStack_a0,*puStack_90);
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puStack_90);
        }
      }
      uVar11 = (uint64_t)(iVar10 + 1U);
      uVar12 = uVar12 + 8;
    } while ((int)(iVar10 + 1U) < 3);
    if (plStack_148 != (int64_t *)0x0) {
      if (cStack_11e != '\0') {
        SystemConfig_Manager(plStack_150);
      }
      SystemSecurityManager(auStack_140);
      if (cStack_120 != '\0') {
        SystemInitializer(plStack_150);
      }
      if (cStack_11f != '\0') {
        SystemInitializer(plStack_150);
      }
      plVar6 = plStack_148;
      plStack_158 = plStack_148;
      plStack_148 = (int64_t *)0x0;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
      }
    }
    if ((plStack_150 != (int64_t *)0x0) && (plStack_148 != (int64_t *)0x0)) {
      if (cStack_11e != '\0') {
        SystemConfig_Manager();
      }
      SystemSecurityManager(auStack_140);
      if (cStack_120 != '\0') {
        SystemInitializer(plStack_150);
      }
      if (cStack_11f != '\0') {
        SystemInitializer(plStack_150);
      }
      plVar6 = plStack_148;
      plStack_158 = plStack_148;
      plStack_148 = (int64_t *)0x0;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
      }
    }
    plStack_158 = (int64_t *)auStack_140;
    SystemSecurityManager(auStack_140);
    if (plStack_128 != (int64_t *)0x0) {
      (**(code **)(*plStack_128 + 0x38))();
    }
    if (plStack_148 != (int64_t *)0x0) {
      (**(code **)(*plStack_148 + 0x38))();
    }
    if (plStack_150 != (int64_t *)0x0) {
      (**(code **)(*plStack_150 + 0x38))();
    }
    puVar1 = puStack_108;
    if (puStack_108 != (uint64_t *)0x0) {
      SystemCache_Manager(&ppppuStack_118,*puStack_108);
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar1);
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(alStack_70[6] ^ (uint64_t)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804b6de0(int64_t param_1,int64_t param_2)
void FUN_1804b6de0(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  void *puVar15;
  uint64_t uVar16;
  int64_t lVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  uint64_t *puVar22;
  bool bVar23;
  int8_t auStack_e8 [32];
  void *puStack_c8;
  int8_t *puStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  uint64_t *puStack_a0;
  int64_t lStack_98;
  int32_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  void *puStack_78;
  void *puStack_70;
  int iStack_68;
  uint8_t auStack_60 [32];
  uint64_t uStack_40;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_40 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  puVar22 = (uint64_t *)0x0;
  uVar21 = 0;
  *(int32_t *)(param_1 + 0x298) = 0;
  *(uint64_t *)(param_1 + 0x290) = 0;
  pcVar19 = "deform_keys";
  do {
    pcVar20 = pcVar19;
    pcVar19 = pcVar20 + 1;
  } while (*pcVar19 != '\0');
  puVar3 = *(uint64_t **)(param_2 + 0x30);
joined_r0x0001804b6e46:
  if (puVar3 == (uint64_t *)0x0) goto LAB_1804b7416;
  pcVar19 = (char *)*puVar3;
  if (pcVar19 == (char *)0x0) {
    pcVar19 = (char *)0x180d48d24;
    puVar7 = puVar22;
  }
  else {
    puVar7 = (uint64_t *)puVar3[2];
  }
  if (puVar7 == (uint64_t *)(pcVar20 + -0x180a2e787)) {
    pcVar18 = (char *)((int64_t)puVar7 + (int64_t)pcVar19);
    if (pcVar18 <= pcVar19) {
LAB_1804b6e90:
      pcVar19 = "deform_key";
      do {
        pcVar20 = pcVar19;
        pcVar19 = pcVar20 + 1;
      } while (*pcVar19 != '\0');
      for (puVar12 = (uint64_t *)puVar3[6]; puVar12 != (uint64_t *)0x0;
          puVar12 = (uint64_t *)puVar12[0xb]) {
        pcVar19 = (char *)*puVar12;
        if (pcVar19 == (char *)0x0) {
          pcVar19 = (char *)0x180d48d24;
          puVar7 = puVar22;
        }
        else {
          puVar7 = (uint64_t *)puVar12[2];
        }
        if (puVar7 == (uint64_t *)(pcVar20 + -0x180a2e7b7)) {
          pcVar2 = (char *)((int64_t)puVar7 + (int64_t)pcVar19);
          puVar7 = puVar22;
          if (pcVar2 <= pcVar19) {
LAB_1804b6f10:
            do {
              uVar21 = (int)puVar7 + 1;
              pcVar19 = "deform_key";
              do {
                pcVar20 = pcVar19;
                pcVar19 = pcVar20 + 1;
              } while (*pcVar19 != '\0');
              while( true ) {
                do {
                  puVar12 = (uint64_t *)puVar12[0xb];
                  if (puVar12 == (uint64_t *)0x0) goto LAB_1804b6f76;
                  pcVar19 = (char *)*puVar12;
                  if (pcVar19 == (char *)0x0) {
                    pcVar19 = (char *)0x180d48d24;
                    puVar7 = puVar22;
                  }
                  else {
                    puVar7 = (uint64_t *)puVar12[2];
                  }
                } while (puVar7 != (uint64_t *)(pcVar20 + -0x180a2e7b7));
                pcVar2 = (char *)((int64_t)puVar7 + (int64_t)pcVar19);
                puVar7 = (uint64_t *)(uint64_t)uVar21;
                if (pcVar2 <= pcVar19) break;
                pcVar18 = &processed_var_7096_ptr + -(int64_t)pcVar19;
                while (*pcVar19 == pcVar18[(int64_t)pcVar19]) {
                  pcVar19 = pcVar19 + 1;
                  if (pcVar2 <= pcVar19) goto LAB_1804b6f10;
                }
              }
            } while( true );
          }
          pcVar18 = &processed_var_7096_ptr + -(int64_t)pcVar19;
          while (*pcVar19 == pcVar18[(int64_t)pcVar19]) {
            pcVar19 = pcVar19 + 1;
            if (pcVar2 <= pcVar19) goto LAB_1804b6f10;
          }
        }
      }
LAB_1804b6f76:
      *(uint *)(param_1 + 0x298) = uVar21;
      pcVar19 = "deform_key";
      do {
        pcVar20 = pcVar19;
        pcVar19 = pcVar20 + 1;
      } while (*pcVar19 != '\0');
      for (puVar7 = (uint64_t *)puVar3[6]; puVar9 = puVar22, puVar7 != (uint64_t *)0x0;
          puVar7 = (uint64_t *)puVar7[0xb]) {
        pcVar19 = (char *)*puVar7;
        if (pcVar19 == (char *)0x0) {
          pcVar19 = (char *)0x180d48d24;
        }
        else {
          puVar9 = (uint64_t *)puVar7[2];
        }
        if (puVar9 == (uint64_t *)(pcVar20 + -0x180a2e7b7)) {
          pcVar18 = (char *)((int64_t)puVar9 + (int64_t)pcVar19);
          puVar9 = puVar7;
          if (pcVar18 <= pcVar19) break;
          lVar11 = (int64_t)&processed_var_7096_ptr - (int64_t)pcVar19;
          while (*pcVar19 == pcVar19[lVar11]) {
            pcVar19 = pcVar19 + 1;
            if (pcVar18 <= pcVar19) goto LAB_1804b6fde;
          }
        }
      }
LAB_1804b6fde:
      uVar16 = (uint64_t)(int)uVar21;
      puVar7 = puVar22;
      if (uVar21 != 0) {
        puVar8 = (uint64_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar16 * 0xa8 + 0x10,
                               CONCAT71((int7)((uint64_t)pcVar18 >> 8),0x12));
        *puVar8 = uVar16 << 0x20 | 0xa8;
        puVar10 = puVar8 + 7;
        puVar13 = puVar22;
        do {
          puStack_a8 = puVar10 + -5;
          *puStack_a8 = (uint64_t)&system_state_ptr;
          puVar10[-4] = 0;
          *(int32_t *)(puVar10 + -3) = 0;
          *puStack_a8 = (uint64_t)&system_data_buffer_ptr;
          puVar10[-2] = 0;
          puVar10[-4] = 0;
          *(int32_t *)(puVar10 + -3) = 0;
          puStack_a0 = puVar10 + -1;
          *puStack_a0 = (uint64_t)&system_state_ptr;
          *puVar10 = 0;
          *(int32_t *)(puVar10 + 1) = 0;
          *puStack_a0 = (uint64_t)&system_data_buffer_ptr;
          puVar10[2] = 0;
          *puVar10 = 0;
          *(int32_t *)(puVar10 + 1) = 0;
          *(uint64_t *)((int64_t)puVar10 + 0x4c) = 0;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          *(int16_t *)(puVar10 + 5) = 0;
          *(int8_t *)((int64_t)puVar10 + 0x2a) = 0;
          *(int32_t *)((int64_t)puVar10 + 0x2c) = 0x3f800000;
          *(int32_t *)(puVar10 + 6) = 0x3f800000;
          *(int32_t *)((int64_t)puVar10 + 0x34) = 0x3f800000;
          *(int32_t *)(puVar10 + 7) = 0x7f7fffff;
          *(int32_t *)((int64_t)puVar10 + 0x3c) = 0x3f800000;
          *(int32_t *)(puVar10 + 8) = 0x3f800000;
          *(int32_t *)((int64_t)puVar10 + 0x44) = 0x3f800000;
          *(int32_t *)(puVar10 + 9) = 0x7f7fffff;
          *(uint64_t *)((int64_t)puVar10 + 0x54) = 0;
          *(uint64_t *)((int64_t)puVar10 + 0x5c) = 0x7f7fffff00000000;
          uVar21 = (int)puVar13 + 1;
          puVar13 = (uint64_t *)(uint64_t)uVar21;
          puVar10 = puVar10 + 0x15;
          puVar7 = puVar8 + 2;
        } while ((uint64_t)(int64_t)(int)uVar21 < uVar16);
      }
      *(uint64_t **)(param_1 + 0x290) = puVar7;
      lVar11 = *(int64_t *)(param_1 + 0x370);
      plVar14 = *(int64_t **)(lVar11 + 0x38);
      lVar17 = *plVar14;
      puVar7 = puVar22;
      if (*(int64_t *)(lVar11 + 0x40) - (int64_t)plVar14 >> 4 != 0) {
        do {
          lVar4 = *(int64_t *)((int64_t)plVar14 + (int64_t)puVar22);
          puStack_78 = &processed_var_672_ptr;
          puStack_70 = auStack_60;
          auStack_60[0] = 0;
          iStack_68 = 0xe;
          strcpy_s(auStack_60,0x20);
          puStack_c8 = &system_data_buffer_ptr;
          uStack_b0 = 0;
          puStack_c0 = (int8_t *)0x0;
          uStack_b8 = 0;
          CoreEngineDataBufferProcessor(&puStack_c8,iStack_68);
          if (0 < iStack_68) {
            puVar15 = &system_buffer_ptr;
            if (puStack_70 != (void *)0x0) {
              puVar15 = puStack_70;
            }
                    // WARNING: Subroutine does not return
            memcpy(puStack_c0,puVar15,(int64_t)(iStack_68 + 1));
          }
          if ((puStack_70 != (void *)0x0) && (uStack_b8 = 0, puStack_c0 != (int8_t *)0x0))
          {
            *puStack_c0 = 0;
          }
          cVar5 = FUN_180063510(lVar4 + 0x218,&puStack_c8);
          puStack_c8 = &system_data_buffer_ptr;
          if (puStack_c0 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_c0 = (int8_t *)0x0;
          uStack_b0 = uStack_b0 & 0xffffffff00000000;
          puStack_c8 = &system_state_ptr;
          puStack_78 = &system_state_ptr;
          if (cVar5 != '\0') {
            lVar17 = *(int64_t *)(*(int64_t *)(lVar11 + 0x38) + (int64_t)(int)puVar7 * 0x10);
            break;
          }
          uVar21 = (int)puVar7 + 1;
          puVar22 = puVar22 + 2;
          plVar14 = *(int64_t **)(lVar11 + 0x38);
          puVar7 = (uint64_t *)(uint64_t)uVar21;
        } while ((uint64_t)(int64_t)(int)uVar21 <
                 (uint64_t)(*(int64_t *)(lVar11 + 0x40) - (int64_t)plVar14 >> 4));
      }
      puVar22 = (uint64_t *)0x0;
      uStack_90 = 0;
      lStack_98 = lVar17;
      iVar6 = _Thrd_id();
      while( true ) {
        LOCK();
        cVar5 = *(char *)(lVar17 + 0xec);
        bVar23 = cVar5 == '\0';
        if (bVar23) {
          *(char *)(lVar17 + 0xec) = '\x01';
          cVar5 = '\0';
        }
        UNLOCK();
        if (bVar23) break;
        if (*(int *)(lVar17 + 0xf0) == iVar6) goto LAB_1804b7297;
        Sleep(0);
      }
      cVar5 = '\0';
LAB_1804b7297:
      LOCK();
      *(int *)(lVar17 + 0xe8) = *(int *)(lVar17 + 0xe8) + 1;
      UNLOCK();
      FUN_18007eb80(lVar17,0);
      if (cVar5 == '\0') {
        LOCK();
        *(int8_t *)(lVar17 + 0xec) = 0;
        UNLOCK();
      }
      uStack_88 = *(uint64_t *)(lVar17 + 0x210);
      puVar7 = puVar22;
      if (0 < *(int *)(param_1 + 0x298)) {
        do {
          FUN_1804ad730((int64_t)(int)puVar7 * 0xa8 + *(int64_t *)(param_1 + 0x290),puVar9,
                        &lStack_98);
          pcVar19 = "deform_key";
          do {
            pcVar20 = pcVar19;
            pcVar19 = pcVar20 + 1;
          } while (*pcVar19 != '\0');
          for (puVar10 = (uint64_t *)puVar9[0xb]; puVar9 = puVar22, puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[0xb]) {
            pcVar19 = (char *)*puVar10;
            if (pcVar19 == (char *)0x0) {
              pcVar19 = (char *)0x180d48d24;
            }
            else {
              puVar9 = (uint64_t *)puVar10[2];
            }
            if (puVar9 == (uint64_t *)(pcVar20 + -0x180a2e7b7)) {
              pcVar18 = (char *)((int64_t)puVar9 + (int64_t)pcVar19);
              puVar9 = puVar10;
              if (pcVar18 <= pcVar19) break;
              lVar11 = (int64_t)&processed_var_7096_ptr - (int64_t)pcVar19;
              while (*pcVar19 == pcVar19[lVar11]) {
                pcVar19 = pcVar19 + 1;
                if (pcVar18 <= pcVar19) goto LAB_1804b735f;
              }
            }
          }
LAB_1804b735f:
          uVar21 = (int)puVar7 + 1;
          puVar7 = (uint64_t *)(uint64_t)uVar21;
        } while ((int)uVar21 < *(int *)(param_1 + 0x298));
      }
      while( true ) {
        LOCK();
        cVar5 = *(char *)(lVar17 + 0xec);
        bVar23 = cVar5 == '\0';
        if (bVar23) {
          *(char *)(lVar17 + 0xec) = '\x01';
          cVar5 = '\0';
        }
        UNLOCK();
        if (bVar23) break;
        iVar6 = _Thrd_id();
        if ((*(int *)(lVar17 + 0xf0) == iVar6) || (*(int *)(lVar17 + 0xf0) != 0))
        goto LAB_1804b739e;
        Sleep();
      }
      cVar5 = '\0';
LAB_1804b739e:
      LOCK();
      piVar1 = (int *)(lVar17 + 0xe8);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (cVar5 == '\0') {
        if ((((iVar6 == 1) && (*(int64_t *)(lVar17 + 0x210) != 0)) &&
            (FUN_1800791a0(lVar17), *(char *)(lVar17 + 0xfc) == '\0')) &&
           ((*(char *)(lVar17 + 0xf4) == '\0' &&
            (((*(byte *)(lVar17 + 0xfd) & 0x20) == 0 || ((*(byte *)(lVar17 + 0xfe) & 1) == 0)))))) {
          puStack_a8 = *(uint64_t **)(lVar17 + 0x210);
          *(uint64_t *)(lVar17 + 0x210) = 0;
          if (puStack_a8 != (uint64_t *)0x0) {
            (**(code **)(*puStack_a8 + 0x38))();
          }
        }
        LOCK();
        *(int8_t *)(lVar17 + 0xec) = 0;
        UNLOCK();
      }
      lStack_98 = 0;
LAB_1804b7416:
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_40 ^ (uint64_t)auStack_e8);
    }
    lVar11 = (int64_t)&processed_var_7048_ptr - (int64_t)pcVar19;
    while (*pcVar19 == pcVar19[lVar11]) {
      pcVar19 = pcVar19 + 1;
      if (pcVar18 <= pcVar19) goto LAB_1804b6e90;
    }
  }
  puVar3 = (uint64_t *)puVar3[0xb];
  goto joined_r0x0001804b6e46;
}






