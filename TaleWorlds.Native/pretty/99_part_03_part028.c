#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part028.c - 4 个函数

// 函数: void FUN_1801e6b90(longlong param_1,longlong *param_2)
void FUN_1801e6b90(longlong param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  int8_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int8_t *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  uint64_t *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  char *pcVar17;
  int iVar18;
  char cVar19;
  uint *puVar20;
  longlong *plVar21;
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
  longlong lStack_180;
  longlong *plStack_178;
  char cStack_168;
  byte bStack_167;
  uint uStack_164;
  uint *puStack_160;
  uint *puStack_158;
  longlong *plStack_150;
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
  longlong *plStack_f0;
  void *puStack_e8;
  longlong *plStack_e0;
  uint uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  longlong lStack_c0;
  uint *puStack_b8;
  int8_t uStack_b0;
  uint uStack_a8;
  longlong *plStack_a0;
  uint *puStack_98;
  int8_t uStack_90;
  uint8_t uStack_8f;
  uint auStack_88 [2];
  longlong lStack_80;
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
  ulonglong uStack_48;
  
  uStack_68 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_1c8;
  plVar21 = (longlong *)0x0;
  uStack_100 = 0;
  bStack_167 = *(byte *)((longlong)param_2 + 0x14);
  uStack_c8 = (int32_t)param_2[2];
  puStack_b8 = (uint *)param_2[1];
  iVar24 = *(int *)((longlong)param_2 + 0xa4);
  puStack_e8 = &unknown_var_3456_ptr;
  uStack_d0 = 0;
  plStack_e0 = (longlong *)0x0;
  uStack_d8 = 0;
  lVar12 = param_2[4];
  plVar15 = plVar21;
  iStack_fc = iVar24;
  lStack_c0 = param_1;
  if (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x2c0);
    plVar15 = (longlong *)(ulonglong)uVar7;
    plVar8 = plVar21;
    if (*(longlong *)(lVar12 + 0x2b8) == 0) {
LAB_1801e6c80:
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
      plVar8 = (longlong *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar18,0x13);
      *(int8_t *)plVar8 = 0;
      plStack_e0 = plVar8;
      uVar5 = FUN_18064e990(plVar8);
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
      goto LAB_1801e6c80;
    }
    if (plVar8 != (longlong *)0x0) {
      *(int8_t *)((longlong)plVar15 + (longlong)plVar8) = 0;
    }
    uStack_d0 = CONCAT44(*(int32_t *)(lVar12 + 0x2cc),(int32_t)uStack_d0);
    uStack_d8 = uVar7;
  }
  lStack_80 = -1;
  uStack_78 = 0xffffffff;
  uStack_74 = CONCAT22(uStack_74._2_2_,0xffff);
  uVar7 = 0xffffffff;
  uStack_a8 = 0xffffffff;
  plStack_f0 = (longlong *)0x0;
  plStack_a0 = (longlong *)0x0;
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
    uStack_5c = (int32_t)((ulonglong)lVar12 >> 0x20);
    uStack_58 = (int32_t)lVar12;
    uStack_54 = (int32_t)param_2[2];
    uStack_50 = *(int16_t *)((longlong)param_2 + 0x14);
    uStack_4e = *(int8_t *)((longlong)param_2 + 0xa4);
    puVar20 = (uint *)FUN_1801c7390(lVar12,&puStack_98,&uStack_60);
    uVar7 = *puVar20;
    plVar21 = *(longlong **)(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0;
    plStack_150 = (longlong *)0x0;
    uVar5 = extraout_XMM0_Da;
    plStack_f0 = plVar21;
    uStack_a8 = uVar7;
    plStack_a0 = plVar21;
    if ((longlong *)CONCAT71(uStack_8f,uStack_90) != (longlong *)0x0) {
      uVar5 = (**(code **)(*(longlong *)CONCAT71(uStack_8f,uStack_90) + 0x38))();
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
    uStack_74 = *(int32_t *)((longlong)param_2 + 0x14);
    uStack_70 = *(int8_t *)((longlong)param_2 + 0xa4);
    uStack_6c = (int32_t)param_2[0x14];
    puVar20 = (uint *)(param_2[4] + 0x360);
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
    puStack_160 = puVar20;
    AcquireSRWLockShared(puVar20);
    FUN_1801e1020(param_2[4] + 0x328,&plStack_150,auStack_88);
    if (plStack_150 != (longlong *)(param_2[4] + 0x328)) {
      uVar7 = *(uint *)(plStack_150 + 8);
      uStack_a8 = uVar7;
    }
    uVar5 = ReleaseSRWLockShared(puVar20);
    cVar19 = cStack_168;
  }
  auStack_f8[0] = uVar7;
  if (uVar7 == 0xffffffff) {
LAB_1801e7356:
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
        FUN_1801e7b70(param_1,param_2,lVar12,uStack_164);
      }
    }
    else {
      (**(code **)(*(longlong *)*system_global_data_ptr + 0x40))((longlong *)*system_global_data_ptr,param_2);
    }
    goto LAB_1801e760f;
  }
  puVar20 = *(uint **)(param_1 + 0x10);
  if (cVar19 != '\0') {
    plVar21 = (longlong *)param_2[4];
  }
  plVar8 = plVar21 + (longlong)iVar24 * 0xe + 2;
  puVar22 = (uint *)(plVar21 + (longlong)iVar24 * 0xe + 0xe);
  puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
  puStack_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar11 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
  plVar16 = plVar8;
  if (plVar11 != (longlong *)0x0) {
    do {
      if ((int)plVar11[4] < (int)uVar7) {
        plVar9 = (longlong *)*plVar11;
      }
      else {
        plVar9 = (longlong *)plVar11[1];
        plVar16 = plVar11;
      }
      plVar11 = plVar9;
    } while (plVar9 != (longlong *)0x0);
    if ((((plVar16 != plVar8) && ((int)plVar16[4] <= (int)uVar7)) &&
        (lVar12 = plVar16[5], lVar12 != 0)) && (*(char *)(lVar12 + 0x81) != '\0')) {
      puVar13 = *(uint **)(lVar12 + 0x10);
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      ReleaseSRWLockShared(puVar22);
      goto LAB_1801e760f;
    }
  }
  uVar5 = ReleaseSRWLockShared();
  puStack_160 = (uint *)0x0;
  if ((cStack_168 == '\0') && (plStack_f0 == (longlong *)system_global_data_ptr[10])) {
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
    puStack_120 = &unknown_var_3456_ptr;
    plStack_150 = (longlong *)0x0;
    puStack_118 = (int8_t *)0x0;
    iStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 1;
    if (plStack_e0 == (longlong *)0x0) {
LAB_1801e6fd8:
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
      puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)iVar6,0x13);
      *puVar10 = 0;
      puStack_118 = puVar10;
      plStack_150 = (longlong *)FUN_18064e990(puVar10);
      uStack_108 = CONCAT44(uStack_108._4_4_,(int)plStack_150);
      goto LAB_1801e6fd8;
    }
    if (puVar10 != (int8_t *)0x0) {
      *(int8_t *)((longlong)plVar15 + (longlong)puVar10) = 0;
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
          puVar10 = (int8_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar7 <= (uint)plStack_150) goto LAB_1801e707e;
          puStack_1a8 = (uint *)CONCAT71(puStack_1a8._1_7_,0x13);
          puVar10 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar10,uVar7,0x10);
        }
        puStack_118 = puVar10;
        plStack_150 = (longlong *)FUN_18064e990(puVar10);
        uStack_108 = CONCAT44(uStack_108._4_4_,(int)plStack_150);
      }
LAB_1801e707e:
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((longlong)plVar15 + (longlong)puVar10),puStack_138,
             (longlong)(iStack_130 + 1));
    }
    if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    uStack_128 = CONCAT44(uStack_d0._4_4_,(uint)plStack_150);
    iStack_110 = 0;
    uStack_100 = 0;
    puStack_118 = (int8_t *)0x0;
    uStack_108 = 0;
    puStack_120 = &unknown_var_720_ptr;
    puVar13 = puStack_160;
    puStack_138 = puVar10;
    iStack_130 = iVar18;
  }
  puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
  puStack_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar15 = plVar21 + (longlong)iVar24 * 0xe + 8;
  plVar11 = plVar15;
  plVar16 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 10];
  if ((longlong *)plVar21[(longlong)iVar24 * 0xe + 10] == (longlong *)0x0) {
LAB_1801e7148:
    plVar11 = plVar15;
  }
  else {
    do {
      if ((int)plVar16[4] < (int)uVar7) {
        plVar9 = (longlong *)*plVar16;
      }
      else {
        plVar9 = (longlong *)plVar16[1];
        plVar11 = plVar16;
      }
      plVar16 = plVar9;
    } while (plVar9 != (longlong *)0x0);
    if ((plVar11 == plVar15) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e7148;
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
          *(longlong *)(puVar20 + 8) = *(longlong *)(puVar20 + 8) + -1;
          func_0x00018066bd70(puStack_160);
          FUN_18066ba00(puVar22,puVar20);
        }
      }
      else {
        plVar21 = (longlong *)(param_2[4] + 0x360);
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        uStack_148 = 1;
        lVar12 = param_2[4];
        puVar22 = (uint *)(lVar12 + 0x328);
        FUN_1801e1020(puVar22,&puStack_160,auStack_88);
        puVar20 = puStack_160;
        if (puStack_160 != puVar22) {
          plVar15 = (longlong *)(lVar12 + 0x348);
          *plVar15 = *plVar15 + -1;
          func_0x00018066bd70(puStack_160);
          FUN_18066ba00(puVar20,puVar22);
          if (puVar20 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar20);
          }
        }
      }
      uVar5 = ReleaseSRWLockExclusive(plVar21);
      puStack_140 = &unknown_var_3456_ptr;
      if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_138 = (int8_t *)0x0;
      uStack_128 = uStack_128 & 0xffffffff00000000;
      puStack_140 = &unknown_var_720_ptr;
      param_1 = lStack_c0;
      iVar24 = iStack_fc;
      goto LAB_1801e7356;
    }
    *puVar20 = uVar7;
    puVar13 = (uint *)FUN_18062b1e0(system_memory_pool_ptr,0x20,8,3);
    puVar13[5] = (uint)bStack_167;
    *(longlong *)puVar13 = lVar12;
    puVar13[4] = uStack_164;
    puVar13[6] = uVar7;
    uStack_b0 = 0;
    puStack_b8 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    uStack_b0 = 1;
    puStack_160 = (uint *)CONCAT44(puStack_160._4_4_,uVar7);
    puStack_158 = puVar13;
    FUN_1801e8ce0(plVar21 + (longlong)iVar24 * 0xe + 8,&puStack_98,&puStack_160);
    uVar5 = ReleaseSRWLockExclusive(puVar22);
  }
  lVar3 = lStack_c0;
  puVar20[4] = puVar13[4];
  lVar12 = *(longlong *)puVar13;
  *(longlong *)(puVar20 + 2) = lVar12;
  *puVar20 = uVar7;
  if (lVar12 == 0) {
    lVar12 = FUN_1801c70b0(uVar5,puVar13,param_2[4],plStack_f0);
    uStack_90 = 1;
    puStack_98 = puVar22;
    AcquireSRWLockShared(puVar22);
    plVar15 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
    plVar11 = plVar8;
    if ((longlong *)plVar21[(longlong)iVar24 * 0xe + 4] == (longlong *)0x0) {
LAB_1801e73b6:
      plVar11 = plVar8;
    }
    else {
      do {
        if ((int)plVar15[4] < (int)uVar7) {
          plVar16 = (longlong *)*plVar15;
        }
        else {
          plVar16 = (longlong *)plVar15[1];
          plVar11 = plVar15;
        }
        plVar15 = plVar16;
      } while (plVar16 != (longlong *)0x0);
      if ((plVar11 == plVar8) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e73b6;
    }
    if (plVar11 != plVar8) {
      puVar13 = *(uint **)(plVar11[5] + 0x10);
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
      FUN_1801de690(system_global_data_ptr,lStack_c0,*(int32_t *)((longlong)param_2 + 0xa4),lVar12);
      puStack_158 = (uint *)((ulonglong)puStack_158 & 0xffffffffffffff00);
      puStack_160 = puVar22;
      AcquireSRWLockExclusive(puVar22);
      puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
      plVar15 = plVar8;
      plVar21 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
      while (plVar21 != (longlong *)0x0) {
        if ((int)plVar21[4] < (int)uVar7) {
          plVar21 = (longlong *)*plVar21;
        }
        else {
          plVar15 = plVar21;
          plVar21 = (longlong *)plVar21[1];
        }
      }
      if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
        puStack_1a8 = auStack_f8;
        puVar14 = (uint64_t *)FUN_180179aa0(plVar8,&puStack_b8);
        plVar15 = (longlong *)*puVar14;
      }
      plVar15[5] = lVar3;
      ReleaseSRWLockExclusive(puVar22);
    }
    if (lVar12 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar12);
    }
  }
  else {
    FUN_1801de690(system_global_data_ptr,lStack_c0,*(int32_t *)((longlong)param_2 + 0xa4));
    puStack_158 = (uint *)((ulonglong)puStack_158 & 0xffffffffffffff00);
    puStack_160 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    puStack_158 = (uint *)CONCAT71(puStack_158._1_7_,1);
    plVar15 = plVar8;
    plVar21 = (longlong *)plVar21[(longlong)iVar24 * 0xe + 4];
    while (plVar21 != (longlong *)0x0) {
      if ((int)plVar21[4] < (int)uVar7) {
        plVar21 = (longlong *)*plVar21;
      }
      else {
        plVar15 = plVar21;
        plVar21 = (longlong *)plVar21[1];
      }
    }
    if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
      puStack_1a8 = auStack_f8;
      puVar14 = (uint64_t *)FUN_180179aa0(plVar8,&puStack_b8);
      plVar15 = (longlong *)*puVar14;
    }
    plVar15[5] = lVar3;
    ReleaseSRWLockExclusive(puVar22);
  }
  puStack_140 = &unknown_var_3456_ptr;
  if (puStack_138 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_138 = (int8_t *)0x0;
  uStack_128 = uStack_128 & 0xffffffff00000000;
  puStack_140 = &unknown_var_720_ptr;
LAB_1801e760f:
  if (plStack_f0 != (longlong *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  puStack_e8 = &unknown_var_3456_ptr;
  if (plStack_e0 == (longlong *)0x0) {
    plStack_e0 = (longlong *)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    puStack_e8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_1c8);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plStack_e0);
}



longlong * FUN_1801e7680(longlong *param_1)

{
  int8_t uVar1;
  
  uVar1 = _widen___basic_ios_DU__char_traits_D_std___std__QEBADD_Z
                    ((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  _put___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_D_Z(param_1,uVar1);
  _flush___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_XZ(param_1);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1801e76c0(longlong param_1,longlong *param_2,uint64_t param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint64_t uVar7;
  char acStackX_8 [8];
  
  lVar3 = FUN_18062b420(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x28));
  FUN_1806279c0(lVar3 + 0x20,param_3);
  lVar4 = FUN_1800590b0(param_1,acStackX_8,lVar3 + 0x20);
  if (acStackX_8[0] == '\0') {
    FUN_18005d1f0();
    *param_2 = lVar4;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar4 != param_1) {
    if (*(int *)(lVar4 + 0x30) == 0) {
LAB_1801e7757:
      uVar7 = 1;
      goto LAB_1801e7762;
    }
    if (*(int *)(lVar3 + 0x30) != 0) {
      pbVar5 = *(byte **)(lVar4 + 0x28);
      lVar6 = *(longlong *)(lVar3 + 0x28) - (longlong)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar2 = (uint)pbVar5[lVar6];
        if (bVar1 != uVar2) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 != 0);
      if ((int)(bVar1 - uVar2) < 1) goto LAB_1801e7757;
    }
  }
  uVar7 = 0;
LAB_1801e7762:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar3,lVar4,param_1,uVar7);
}






// 函数: void FUN_1801e77b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801e77b0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1801e85e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801e77d0(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  uVar4 = *param_2;
  uVar1 = *(int32_t *)(param_2 + 3);
  uVar5 = param_2[2];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x24);
  uVar3 = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_2 + 3) = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_1[2] = FUN_1801eb3d0;
  param_1[3] = FUN_1801eb320;
  puVar6 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
  *puVar6 = uVar4;
  puVar6[1] = &unknown_var_720_ptr;
  puVar6[2] = 0;
  *(int32_t *)(puVar6 + 3) = 0;
  puVar6[1] = &unknown_var_3456_ptr;
  puVar6[4] = 0;
  puVar6[2] = 0;
  *(int32_t *)(puVar6 + 3) = 0;
  *(int32_t *)(puVar6 + 3) = uVar1;
  puVar6[2] = uVar5;
  *(int32_t *)((longlong)puVar6 + 0x24) = uVar2;
  *(int32_t *)(puVar6 + 4) = uVar3;
  *param_1 = puVar6;
  param_2[1] = &unknown_var_3456_ptr;
  if (param_2[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[2] = 0;
  *(int32_t *)(param_2 + 4) = 0;
  param_2[1] = &unknown_var_720_ptr;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801e7940(uint64_t *param_1,uint64_t *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  uVar1 = *param_3;
  bVar6 = true;
  puVar3 = (uint64_t *)param_1[2];
  puVar2 = param_1;
  while (puVar3 != (uint64_t *)0x0) {
    bVar6 = uVar1 < (ulonglong)puVar3[4];
    puVar2 = puVar3;
    if (bVar6) {
      puVar3 = (uint64_t *)puVar3[1];
    }
    else {
      puVar3 = (uint64_t *)*puVar3;
    }
  }
  puVar3 = puVar2;
  if (bVar6) {
    if (puVar2 == (uint64_t *)param_1[1]) goto LAB_1801e79ad;
    puVar3 = (uint64_t *)func_0x00018066b9a0(puVar2);
  }
  if (uVar1 <= (ulonglong)puVar3[4]) {
    *param_2 = puVar3;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801e79ad:
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 5));
  *(ulonglong *)(lVar4 + 0x20) = *param_3;
  if ((puVar2 == param_1) || (uVar1 < (ulonglong)puVar2[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar2,param_1,uVar5);
}






// 函数: void FUN_1801e7a20(longlong *param_1)
void FUN_1801e7a20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    FUN_18009e960(lVar2 + 8);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1801e7a90(ulonglong *param_1,uint64_t *param_2)
void FUN_1801e7a90(ulonglong *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  longlong lVar3;
  uint64_t *puVar4;
  
  puVar1 = (uint64_t *)param_1[1];
  if (puVar1 < (uint64_t *)param_1[2]) {
    param_1[1] = (ulonglong)(puVar1 + 1);
    *puVar1 = *param_2;
    return;
  }
  puVar2 = (uint64_t *)*param_1;
  lVar3 = (longlong)puVar1 - (longlong)puVar2 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 == 0) {
      puVar4 = (uint64_t *)0x0;
      goto LAB_1801e7b16;
    }
  }
  puVar4 = (uint64_t *)((longlong)param_1 + param_1[0x43] + 0x18);
  param_1[0x43] = param_1[0x43] + lVar3 * 8;
LAB_1801e7b16:
  if (puVar2 != puVar1) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,puVar2,(longlong)puVar1 - (longlong)puVar2);
  }
  *puVar4 = *param_2;
  param_1[1] = (ulonglong)(puVar4 + 1);
  *param_1 = (ulonglong)puVar4;
  param_1[2] = (ulonglong)(puVar4 + lVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




