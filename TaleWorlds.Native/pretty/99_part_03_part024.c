#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part024.c - 1 个函数

// 函数: void FUN_1801e35b0(int64_t param_1,int64_t *param_2)
void FUN_1801e35b0(int64_t param_1,int64_t *param_2)

{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int8_t *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint *puVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  char *pcVar17;
  int iVar18;
  char cVar19;
  uint *puVar20;
  int64_t *plVar21;
  uint *puVar22;
  void *puVar23;
  int iVar24;
  int32_t extraout_XMM0_Da;
  int8_t auStack_1c8 [32];
  uint *puStack_1a8;
  uint *puStack_1a0;
  uint *puStack_198;
  int32_t uStack_190;
  int iStack_188;
  int64_t lStack_180;
  int64_t *plStack_178;
  char cStack_168;
  byte bStack_167;
  uint uStack_164;
  uint *puStack_160;
  uint *puStack_158;
  int64_t *plStack_150;
  int8_t uStack_148;
  void *puStack_140;
  int8_t *puStack_138;
  int iStack_130;
  uint64_t uStack_128;
  void *puStack_120;
  int8_t *puStack_118;
  int iStack_110;
  uint64_t uStack_108;
  int32_t uStack_100;
  int iStack_fc;
  uint auStack_f8 [2];
  int64_t *plStack_f0;
  void *puStack_e8;
  int64_t *plStack_e0;
  uint uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int64_t lStack_c0;
  uint *puStack_b8;
  int8_t uStack_b0;
  uint uStack_a8;
  int64_t *plStack_a0;
  uint *puStack_98;
  int8_t uStack_90;
  uint8_t uStack_8f;
  uint auStack_88 [2];
  int64_t lStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int8_t uStack_70;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int16_t uStack_50;
  int8_t uStack_4e;
  uint64_t uStack_48;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  plVar21 = (int64_t *)0x0;
  uStack_100 = 0;
  bStack_167 = *(byte *)((int64_t)param_2 + 0x14);
  uStack_c8 = (int32_t)param_2[2];
  puStack_b8 = (uint *)param_2[1];
  iVar24 = *(int *)((int64_t)param_2 + 0xa4);
  puStack_e8 = &system_data_buffer_ptr;
  uStack_d0 = 0;
  plStack_e0 = (int64_t *)0x0;
  uStack_d8 = 0;
  lVar12 = param_2[4];
  plVar15 = plVar21;
  iStack_fc = iVar24;
  lStack_c0 = param_1;
  if (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x2c0);
    plVar15 = (int64_t *)(uint64_t)uVar7;
    plVar8 = plVar21;
    if (*(int64_t *)(lVar12 + 0x2b8) == 0) {
LAB_1801e36a0:
      if (uVar7 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar8,*(uint64_t *)(lVar12 + 0x2b8),plVar15);
      }
    }
    else if (uVar7 != 0) {
      iVar18 = uVar7 + 1;
      if ((int)(uVar7 + 1) < 0x10) {
        iVar18 = 0x10;
      }
      plVar8 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar18,0x13);
      *(int8_t *)plVar8 = 0;
      plStack_e0 = plVar8;
      uVar5 = CoreEngineSystemCleanup(plVar8);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
      goto LAB_1801e36a0;
    }
    if (plVar8 != (int64_t *)0x0) {
      *(int8_t *)((int64_t)plVar15 + (int64_t)plVar8) = 0;
    }
    uStack_d0 = CONCAT44(*(int32_t *)(lVar12 + 0x2cc),(int32_t)uStack_d0);
    uStack_d8 = uVar7;
  }
  lStack_80 = -1;
  uStack_78 = 0xffffffff;
  uStack_74 = CONCAT22(uStack_74._2_2_,0xffff);
  uVar7 = 0xffffffff;
  uStack_a8 = 0xffffffff;
  plStack_f0 = (int64_t *)0x0;
  plStack_a0 = (int64_t *)0x0;
  iVar18 = (int)plVar15;
  cVar19 = 0 < iVar18;
  pcVar2 = *(char **)(*param_2 + 0x18);
  cStack_168 = cVar19;
  if (iVar18 < 1) {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar1 = *pcVar17;
    uStack_60 = 0x1505;
    while (cVar1 != '\0') {
      pcVar17 = pcVar17 + 1;
      uStack_60 = uStack_60 * 0x21 + (int)cVar1;
      cVar1 = *pcVar17;
    }
    lVar12 = param_2[1];
    uStack_5c = (int32_t)((uint64_t)lVar12 >> 0x20);
    uStack_58 = (int32_t)lVar12;
    uStack_54 = (int32_t)param_2[2];
    uStack_50 = *(int16_t *)((int64_t)param_2 + 0x14);
    uStack_4e = *(int8_t *)((int64_t)param_2 + 0xa4);
    puVar20 = (uint *)FUN_1801c7390(lVar12,&puStack_98,&uStack_60);
    uVar7 = *puVar20;
    plVar21 = *(int64_t **)(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0;
    plStack_150 = (int64_t *)0x0;
    uVar5 = extraout_XMM0_Da;
    plStack_f0 = plVar21;
    uStack_a8 = uVar7;
    plStack_a0 = plVar21;
    if ((int64_t *)CONCAT71(uStack_8f,uStack_90) != (int64_t *)0x0) {
      uVar5 = (**(code **)(*(int64_t *)CONCAT71(uStack_8f,uStack_90) + 0x38))();
    }
  }
  else {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar19 = *pcVar17;
    auStack_88[0] = 0x1505;
    while (cVar19 != '\0') {
      pcVar17 = pcVar17 + 1;
      auStack_88[0] = auStack_88[0] * 0x21 + (int)cVar19;
      cVar19 = *pcVar17;
    }
    lStack_80 = param_2[1];
    uStack_78 = (int32_t)param_2[2];
    uStack_74 = *(int32_t *)((int64_t)param_2 + 0x14);
    uStack_70 = *(int8_t *)((int64_t)param_2 + 0xa4);
    uStack_6c = (int32_t)param_2[0x14];
    puVar20 = (uint *)(param_2[4] + 0x360);
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
    puStack_160 = puVar20;
    AcquireSRWLockShared(puVar20);
    FUN_1801e1020(param_2[4] + 0x328,&plStack_150,auStack_88);
    if (plStack_150 != (int64_t *)(param_2[4] + 0x328)) {
      uVar7 = *(uint *)(plStack_150 + 8);
      uStack_a8 = uVar7;
    }
    uVar5 = ReleaseSRWLockShared(puVar20);
    cVar19 = cStack_168;
  }
  auStack_f8[0] = uVar7;
  if (uVar7 == 0xffffffff) {
LAB_1801e3d76:
    if ((*(int *)(system_module_state + 0x620) == 0) && (*(int *)(system_module_state + 0x690) != 0)) {
      FUN_1801c7500(uVar5,param_2);
    }
    if (*(char *)(system_main_module_state + 0x60) == '\0') {
      lStack_180 = *param_2;
      puVar23 = &system_buffer_ptr;
      if ((void *)param_2[0x11] != (void *)0x0) {
        puVar23 = (void *)param_2[0x11];
      }
      plStack_178 = param_2 + 5;
      uStack_190 = 0xffffffff;
      puStack_198 = &uStack_164;
      puStack_1a0 = puStack_b8;
      puStack_1a8 = (uint *)CONCAT44(puStack_1a8._4_4_,uStack_c8);
      iStack_188 = iVar24;
      lVar12 = FUN_1800a6420(system_message_buffer,param_2 + 0xc,puVar23,bStack_167);
      if (lVar12 != 0) {
        puStack_1a0 = auStack_88;
        puStack_1a8 = &uStack_60;
        FUN_1801e5be0(param_1,param_2,lVar12,uStack_164);
      }
    }
    else {
      (**(code **)(*(int64_t *)*system_global_data_ptr + 0x40))((int64_t *)*system_global_data_ptr,param_2);
    }
    goto LAB_1801e402f;
  }
  puVar20 = *(uint **)(param_1 + 0x20);
  if (cVar19 != '\0') {
    plVar21 = (int64_t *)param_2[4];
  }
  plVar8 = plVar21 + (int64_t)iVar24 * 0xe + 2;
  puVar22 = (uint *)(plVar21 + (int64_t)iVar24 * 0xe + 0xe);
  puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
  puStack_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar11 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
  plVar16 = plVar8;
  if (plVar11 != (int64_t *)0x0) {
    do {
      if ((int)plVar11[4] < (int)uVar7) {
        plVar9 = (int64_t *)*plVar11;
      }
      else {
        plVar9 = (int64_t *)plVar11[1];
        plVar16 = plVar11;
      }
      plVar11 = plVar9;
    } while (plVar9 != (int64_t *)0x0);
    if ((((plVar16 != plVar8) && ((int)plVar16[4] <= (int)uVar7)) &&
        (lVar12 = plVar16[5], lVar12 != 0)) && (*(char *)(lVar12 + 0x81) != '\0')) {
      puVar13 = *(uint **)(lVar12 + 0x20);
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      ReleaseSRWLockShared(puVar22);
      goto LAB_1801e402f;
    }
  }
  uVar5 = ReleaseSRWLockShared();
  puStack_160 = (uint *)0x0;
  if ((cStack_168 == '\0') && (plStack_f0 == (int64_t *)system_global_data_ptr[10])) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  puStack_1a8 = (uint *)CONCAT71(puStack_1a8._1_7_,uVar4);
  FUN_1801c6b50(uVar5,&puStack_140,iStack_fc,uVar7);
  puVar13 = (uint *)0x0;
  if (cStack_168 != '\0') {
    puVar10 = (int8_t *)0x0;
    puStack_120 = &system_data_buffer_ptr;
    plStack_150 = (int64_t *)0x0;
    puStack_118 = (int8_t *)0x0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 1;
    if (plStack_e0 == (int64_t *)0x0) {
LAB_1801e39f8:
      if (iVar18 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puVar10,plStack_e0,plVar15);
      }
    }
    else if (iVar18 != 0) {
      iVar6 = iVar18 + 1;
      if (iVar6 < 0x10) {
        iVar6 = 0x10;
      }
      puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,0x13);
      *puVar10 = 0;
      puStack_118 = puVar10;
      plStack_150 = (int64_t *)CoreEngineSystemCleanup(puVar10);
      uStack_108 = CONCAT44(uStack_108._4_4_,(int)plStack_150);
      goto LAB_1801e39f8;
    }
    if (puVar10 != (int8_t *)0x0) {
      *(int8_t *)((int64_t)plVar15 + (int64_t)puVar10) = 0;
    }
    uStack_108 = CONCAT44(uStack_d0._4_4_,(int32_t)uStack_108);
    iStack_110 = iVar18;
    if (0 < iStack_130) {
      uStack_164 = iVar18 + iStack_130;
      if (uStack_164 != 0) {
        uVar7 = uStack_164 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar7 < 0x10) {
            uVar7 = 0x10;
          }
          puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar7 <= (uint)plStack_150) goto LAB_1801e3a9e;
          puStack_1a8 = (uint *)CONCAT71(puStack_1a8._1_7_,0x13);
          puVar10 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar10,uVar7,0x10);
        }
        puStack_118 = puVar10;
        plStack_150 = (int64_t *)CoreEngineSystemCleanup(puVar10);
        uStack_108 = CONCAT44(uStack_108._4_4_,(int)plStack_150);
      }
LAB_1801e3a9e:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)plVar15 + (int64_t)puVar10),puStack_138,
             (int64_t)(iStack_130 + 1));
    }
    if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    uStack_128 = CONCAT44(uStack_d0._4_4_,(uint)plStack_150);
    iStack_110 = 0;
    uStack_100 = 0;
    puStack_118 = (int8_t *)0x0;
    uStack_108 = 0;
    puStack_120 = &system_state_ptr;
    puVar13 = puStack_160;
    puStack_138 = puVar10;
    iStack_130 = iVar18;
  }
  puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
  puStack_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar15 = plVar21 + (int64_t)iVar24 * 0xe + 8;
  plVar11 = plVar15;
  plVar16 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 10];
  if ((int64_t *)plVar21[(int64_t)iVar24 * 0xe + 10] == (int64_t *)0x0) {
LAB_1801e3b68:
    plVar11 = plVar15;
  }
  else {
    do {
      if ((int)plVar16[4] < (int)uVar7) {
        plVar9 = (int64_t *)*plVar16;
      }
      else {
        plVar9 = (int64_t *)plVar16[1];
        plVar11 = plVar16;
      }
      plVar16 = plVar9;
    } while (plVar9 != (int64_t *)0x0);
    if ((plVar11 == plVar15) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e3b68;
  }
  if (plVar11 != plVar15) {
    puVar13 = (uint *)plVar11[5];
  }
  uVar5 = ReleaseSRWLockShared(puVar22);
  if (puVar13 == (uint *)0x0) {
    lVar12 = FUN_1801c6d60(uVar5,&puStack_140,&uStack_164);
    plVar15 = plStack_f0;
    if (lVar12 == 0) {
      uStack_148 = 0;
      if (cStack_168 == '\0') {
        plVar21 = plStack_f0 + 0x6c;
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        uStack_148 = 1;
        puVar20 = (uint *)plVar15[99];
        FUN_1801e6940(puVar20,&puStack_160,&uStack_60);
        puVar22 = puStack_160;
        if (puStack_160 != puVar20) {
          *(int64_t *)(puVar20 + 8) = *(int64_t *)(puVar20 + 8) + -1;
          func_0x00018066bd70(puStack_160);
          FUN_18066ba00(puVar22,puVar20);
        }
      }
      else {
        plVar21 = (int64_t *)(param_2[4] + 0x360);
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        uStack_148 = 1;
        lVar12 = param_2[4];
        puVar22 = (uint *)(lVar12 + 0x328);
        FUN_1801e1020(puVar22,&puStack_160,auStack_88);
        puVar20 = puStack_160;
        if (puStack_160 != puVar22) {
          plVar15 = (int64_t *)(lVar12 + 0x348);
          *plVar15 = *plVar15 + -1;
          func_0x00018066bd70(puStack_160);
          FUN_18066ba00(puVar20,puVar22);
          if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar20);
          }
        }
      }
      uVar5 = ReleaseSRWLockExclusive(plVar21);
      puStack_140 = &system_data_buffer_ptr;
      if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puStack_138 = (int8_t *)0x0;
      uStack_128 = uStack_128 & 0xffffffff00000000;
      puStack_140 = &system_state_ptr;
      param_1 = lStack_c0;
      iVar24 = iStack_fc;
      goto LAB_1801e3d76;
    }
    *puVar20 = uVar7;
    puVar13 = (uint *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
    puVar13[5] = (uint)bStack_167;
    *(int64_t *)puVar13 = lVar12;
    puVar13[4] = uStack_164;
    puVar13[6] = uVar7;
    uStack_b0 = 0;
    puStack_b8 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    uStack_b0 = 1;
    puStack_160 = (uint *)CONCAT44(puStack_160._4_4_,uVar7);
    puStack_158 = puVar13;
    FUN_1801e8ce0(plVar21 + (int64_t)iVar24 * 0xe + 8,&puStack_98,&puStack_160);
    uVar5 = ReleaseSRWLockExclusive(puVar22);
  }
  lVar3 = lStack_c0;
  puVar20[4] = puVar13[4];
  lVar12 = *(int64_t *)puVar13;
  *(int64_t *)(puVar20 + 2) = lVar12;
  *puVar20 = uVar7;
  if (lVar12 == 0) {
    lVar12 = FUN_1801c70b0(uVar5,puVar13,param_2[4],plStack_f0);
    uStack_90 = 1;
    puStack_98 = puVar22;
    AcquireSRWLockShared(puVar22);
    plVar15 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
    plVar11 = plVar8;
    if ((int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4] == (int64_t *)0x0) {
LAB_1801e3dd6:
      plVar11 = plVar8;
    }
    else {
      do {
        if ((int)plVar15[4] < (int)uVar7) {
          plVar16 = (int64_t *)*plVar15;
        }
        else {
          plVar16 = (int64_t *)plVar15[1];
          plVar11 = plVar15;
        }
        plVar15 = plVar16;
      } while (plVar16 != (int64_t *)0x0);
      if ((plVar11 == plVar8) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e3dd6;
    }
    if (plVar11 != plVar8) {
      puVar13 = *(uint **)(plVar11[5] + 0x20);
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
    }
    ReleaseSRWLockShared(puVar22);
    lVar3 = lStack_c0;
    if (plVar11 == plVar8) {
      FUN_1801de690(system_global_data_ptr,lStack_c0,*(int32_t *)((int64_t)param_2 + 0xa4),lVar12);
      puStack_158 = (uint *)((uint64_t)puStack_158 & 0xffffffffffffff00);
      puStack_160 = puVar22;
      AcquireSRWLockExclusive(puVar22);
      puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
      plVar15 = plVar8;
      plVar21 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
      while (plVar21 != (int64_t *)0x0) {
        if ((int)plVar21[4] < (int)uVar7) {
          plVar21 = (int64_t *)*plVar21;
        }
        else {
          plVar15 = plVar21;
          plVar21 = (int64_t *)plVar21[1];
        }
      }
      if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
        puStack_1a8 = auStack_f8;
        puVar14 = (uint64_t *)FUN_180179aa0(plVar8,&puStack_b8);
        plVar15 = (int64_t *)*puVar14;
      }
      plVar15[5] = lVar3;
      ReleaseSRWLockExclusive(puVar22);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar12);
    }
  }
  else {
    FUN_1801de690(system_global_data_ptr,lStack_c0,*(int32_t *)((int64_t)param_2 + 0xa4));
    puStack_158 = (uint *)((uint64_t)puStack_158 & 0xffffffffffffff00);
    puStack_160 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
    plVar15 = plVar8;
    plVar21 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
    while (plVar21 != (int64_t *)0x0) {
      if ((int)plVar21[4] < (int)uVar7) {
        plVar21 = (int64_t *)*plVar21;
      }
      else {
        plVar15 = plVar21;
        plVar21 = (int64_t *)plVar21[1];
      }
    }
    if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
      puStack_1a8 = auStack_f8;
      puVar14 = (uint64_t *)FUN_180179aa0(plVar8,&puStack_b8);
      plVar15 = (int64_t *)*puVar14;
    }
    plVar15[5] = lVar3;
    ReleaseSRWLockExclusive(puVar22);
  }
  puStack_140 = &system_data_buffer_ptr;
  if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_138 = (int8_t *)0x0;
  uStack_128 = uStack_128 & 0xffffffff00000000;
  puStack_140 = &system_state_ptr;
LAB_1801e402f:
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  puStack_e8 = &system_data_buffer_ptr;
  if (plStack_e0 == (int64_t *)0x0) {
    plStack_e0 = (int64_t *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    puStack_e8 = &system_state_ptr;
                    // WARNING: Subroutine does not return
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1c8);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plStack_e0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




