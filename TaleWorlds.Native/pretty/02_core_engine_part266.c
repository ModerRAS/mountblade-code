#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part266.c - 4 个函数

// 函数: void FUN_18022d860(int64_t param_1)
void FUN_18022d860(int64_t param_1)

{
  void *puVar1;
  uint64_t uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  void *puVar11;
  int64_t lVar12;
  int8_t auStack_248 [32];
  uint64_t uStack_228;
  void *puStack_218;
  int8_t *puStack_210;
  int32_t uStack_208;
  int8_t auStack_200 [72];
  void *puStack_1b8;
  int8_t *puStack_1b0;
  int32_t uStack_1a8;
  int8_t auStack_1a0 [72];
  void *puStack_158;
  int8_t *puStack_150;
  int32_t uStack_148;
  int8_t auStack_140 [72];
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [72];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  
  uStack_228 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uVar8 = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  iVar3 = (int)((*(int64_t *)(param_1 + 0x370) - *(int64_t *)(param_1 + 0x368)) / 0x58);
  lVar12 = (int64_t)iVar3;
  uVar6 = uVar8;
  if (0 < iVar3) {
    do {
      uVar5 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),
                            (int64_t)(int)uVar8 * 0x58 + *(int64_t *)(param_1 + 0x368),0);
      if (uVar5 == 0) {
        puVar11 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x18) != (void *)0x0) {
          puVar11 = *(void **)(param_1 + 0x18);
        }
        puVar1 = *(void **)(*(int64_t *)(param_1 + 0x1e0) + 0x18);
        puVar10 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar10 = puVar1;
        }
        puVar1 = *(void **)(uVar6 + 8 + *(int64_t *)(param_1 + 0x368));
        puVar9 = &system_buffer_ptr;
        if (puVar1 != (void *)0x0) {
          puVar9 = puVar1;
        }
        FUN_180626f80(&unknown_var_7456_ptr,puVar9,puVar10,puVar11);
      }
      *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) | uVar5;
      uVar8 = (uint64_t)((int)uVar8 + 1);
      lVar12 = lVar12 + -1;
      uVar6 = uVar6 + 0x58;
    } while (lVar12 != 0);
  }
  if ((*(int64_t *)(param_1 + 0xb8) != 0) &&
     ((*(uint *)(*(int64_t *)(param_1 + 0xb8) + 0x328) >> 0xf & 1) == 0)) {
    uVar7 = *(uint64_t *)(param_1 + 0x1e0);
    puStack_218 = &unknown_var_672_ptr;
    puStack_210 = auStack_200;
    auStack_200[0] = 0;
    uStack_208 = 0x10;
    strcpy_s(auStack_200,0x20,&system_data_3c30);
    uVar6 = FUN_180240430(uVar7,&puStack_218,0);
    *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) | uVar6;
  }
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_218 = &unknown_var_672_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 10;
  strcpy_s(auStack_200,0x20,&system_data_d648);
  uVar6 = FUN_180240430(uVar7,&puStack_218,0);
  if ((((uVar6 & *(uint64_t *)(param_1 + 0x140)) != 0) && (-0.001 < *(float *)(param_1 + 600))) &&
     (*(float *)(param_1 + 600) < 0.001)) {
    *(uint64_t *)(param_1 + 0x140) = ~uVar6 & *(uint64_t *)(param_1 + 0x140);
  }
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_218 = &unknown_var_3480_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0xf;
  strcpy_s(auStack_200,0x40,&system_data_ba58);
  uVar7 = FUN_180240430(uVar7,&puStack_218,0);
  *(uint64_t *)(param_1 + 0x390) = uVar7;
  puStack_218 = &system_state_ptr;
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_1b8 = &unknown_var_3480_ptr;
  puStack_1b0 = auStack_1a0;
  auStack_1a0[0] = 0;
  uStack_1a8 = 9;
  strcpy_s(auStack_1a0,0x40,&unknown_var_7256_ptr);
  uVar2 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_218 = &unknown_var_3480_ptr;
  puStack_210 = auStack_200;
  auStack_200[0] = 0;
  uStack_208 = 0x17;
  strcpy_s(auStack_200,0x40,&unknown_var_7272_ptr);
  uVar6 = FUN_180240430(uVar2,&puStack_218,0);
  uVar8 = FUN_180240430(uVar7,&puStack_1b8,0);
  *(uint64_t *)(param_1 + 0x3a8) = uVar6 | uVar8;
  puStack_218 = &system_state_ptr;
  puStack_1b8 = &system_state_ptr;
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_158 = &unknown_var_3480_ptr;
  puStack_150 = auStack_140;
  auStack_140[0] = 0;
  uStack_148 = 0x10;
  strcpy_s(auStack_140,0x40,&system_data_d580);
  uVar7 = FUN_180240430(uVar7,&puStack_158,0);
  *(uint64_t *)(param_1 + 0x3b0) = uVar7;
  puStack_158 = &system_state_ptr;
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_f8 = &unknown_var_3480_ptr;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0x14;
  strcpy_s(auStack_e0,0x40,&system_data_d5b8);
  uVar7 = FUN_180240430(uVar7,&puStack_f8,0);
  *(uint64_t *)(param_1 + 0x3b8) = uVar7;
  puStack_f8 = &system_state_ptr;
  uVar7 = *(uint64_t *)(param_1 + 0x1e0);
  puStack_98 = &unknown_var_3480_ptr;
  puStack_90 = auStack_80;
  auStack_80[0] = 0;
  uStack_88 = 0x1d;
  strcpy_s(auStack_80,0x40,&unknown_var_7528_ptr);
  uVar7 = FUN_180240430(uVar7,&puStack_98,0);
  *(uint64_t *)(param_1 + 0x398) = uVar7;
  puStack_98 = &system_state_ptr;
  uVar4 = FUN_18022d6c0(param_1);
  *(uint64_t *)(param_1 + 0x3a0) = (uint64_t)uVar4;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_248);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18022dd60(int64_t param_1)

{
  uint64_t *puVar1;
  void *puVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  
  uVar16 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)(param_1 + 0x368);
  FUN_18022ebe0(puVar1);
  plVar4 = (int64_t *)FUN_180240a60(*(uint64_t *)(param_1 + 0x1e0));
  uVar11 = 0;
  lVar15 = *plVar4;
  lVar7 = plVar4[1] - lVar15;
  lVar5 = lVar7 * 0x2aaaaaaaaaaaaaab;
  uVar13 = uVar11;
  if (lVar7 / 0x60 + (lVar7 >> 0x3f) != lVar7 >> 0x3f) {
    do {
      puVar6 = (uint64_t *)0x0;
      if ((*(uint64_t *)(param_1 + 0x140) >> (uVar13 & 0x3f) & 1) != 0) {
        lVar5 = uVar11 * 0x60 + lVar15;
        uVar11 = *(uint64_t *)(param_1 + 0x370);
        if (uVar11 < *(uint64_t *)(param_1 + 0x378)) {
          *(uint64_t *)(param_1 + 0x370) = uVar11 + 0x58;
          FUN_1800b8300(uVar11,lVar5);
        }
        else {
          uVar14 = *puVar1;
          lVar7 = (int64_t)(uVar11 - uVar14) / 0x58;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_18022de69:
            puVar6 = (uint64_t *)
                     FUN_18062b420(system_memory_pool_ptr,lVar7 * 0x58,*(int8_t *)(param_1 + 0x380),
                                   lVar15,uVar16);
            uVar11 = *(uint64_t *)(param_1 + 0x370);
            uVar14 = *puVar1;
          }
          else {
            lVar7 = lVar7 * 2;
            if (lVar7 != 0) goto LAB_18022de69;
          }
          puVar8 = puVar6;
          if (uVar14 != uVar11) {
            lVar15 = uVar14 - (int64_t)puVar6;
            do {
              *puVar8 = &system_state_ptr;
              puVar8[1] = 0;
              *(int32_t *)(puVar8 + 2) = 0;
              *puVar8 = &unknown_var_3480_ptr;
              puVar8[1] = puVar8 + 3;
              *(int32_t *)(puVar8 + 2) = 0;
              *(int8_t *)(puVar8 + 3) = 0;
              *(int32_t *)(puVar8 + 2) = *(int32_t *)(lVar15 + 0x10 + (int64_t)puVar8);
              puVar2 = *(void **)(lVar15 + 8 + (int64_t)puVar8);
              puVar10 = &system_buffer_ptr;
              if (puVar2 != (void *)0x0) {
                puVar10 = puVar2;
              }
              strcpy_s(puVar8[1],0x40,puVar10);
              puVar8 = puVar8 + 0xb;
            } while (lVar15 + (int64_t)puVar8 != uVar11);
          }
          FUN_1800b8300(puVar8,lVar5);
          puVar3 = *(uint64_t **)(param_1 + 0x370);
          puVar9 = (uint64_t *)*puVar1;
          if (puVar9 != puVar3) {
            do {
              (**(code **)*puVar9)(puVar9,0);
              puVar9 = puVar9 + 0xb;
            } while (puVar9 != puVar3);
            puVar9 = (uint64_t *)*puVar1;
          }
          if (puVar9 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(puVar9);
          }
          *puVar1 = (uint64_t)puVar6;
          *(uint64_t **)(param_1 + 0x370) = puVar8 + 0xb;
          *(uint64_t **)(param_1 + 0x378) = puVar6 + lVar7 * 0xb;
        }
      }
      uVar12 = (int)uVar13 + 1;
      lVar15 = *plVar4;
      uVar11 = (uint64_t)(int)uVar12;
      lVar5 = -(plVar4[1] - lVar15 >> 0x3f);
      uVar13 = (uint64_t)uVar12;
    } while (uVar11 < (uint64_t)((plVar4[1] - lVar15) / 0x60));
  }
  return lVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18022dfe0(int64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_18022dfe0(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  byte bVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  void *puVar13;
  void *puVar14;
  int64_t *plVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint64_t *puVar21;
  int32_t extraout_XMM0_Da;
  int8_t auStack_118 [32];
  int64_t *plStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  int64_t *plStack_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  uint64_t uStack_b8;
  void *puStack_a8;
  void *puStack_a0;
  int iStack_98;
  uint8_t auStack_90 [72];
  uint64_t uStack_48;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  lVar10 = FUN_180255f80(*(uint64_t *)(param_1 + 0xa8),&system_data_1228,param_3 + 0x20);
  if (lVar10 == 0) {
    plStack_f8 = *(int64_t **)(param_1 + 0x1e0);
    *(uint64_t *)(param_1 + 0x1e0) = 0;
    if (plStack_f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_f8 + 0x38))();
    }
    (**(code **)(*(int64_t *)(param_1 + 0x2d0) + 0x10))
              ((int64_t *)(param_1 + 0x2d0),&system_buffer_ptr);
    puVar13 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar13 = *(void **)(param_1 + 0x18);
    }
    FUN_180627020(&unknown_var_7672_ptr,puVar13);
  }
  else {
    plVar15 = *(int64_t **)(lVar10 + 0xb0);
    if (plVar15 != (int64_t *)0x0) {
      plStack_f8 = plVar15;
      (**(code **)(*plVar15 + 0x28))(plVar15);
    }
    plStack_f8 = *(int64_t **)(param_1 + 0x1e0);
    *(int64_t **)(param_1 + 0x1e0) = plVar15;
    if (plStack_f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_f8 + 0x38))();
    }
    *(int32_t *)(param_1 + 0x2e0) = *(int32_t *)(*(int64_t *)(param_1 + 0x1e0) + 0x20);
    puVar13 = *(void **)(*(int64_t *)(param_1 + 0x1e0) + 0x18);
    puVar14 = &system_buffer_ptr;
    if (puVar13 != (void *)0x0) {
      puVar14 = puVar13;
    }
    strcpy_s(*(uint64_t *)(param_1 + 0x2d8),0x80,puVar14);
  }
  lVar19 = 0;
  plVar15 = (int64_t *)(param_1 + 0xb8);
  plStack_f8 = (int64_t *)0x10;
  lVar10 = lVar19;
  lVar20 = lVar19;
  do {
    plStack_d0 = (int64_t *)*plVar15;
    *plVar15 = 0;
    if (plStack_d0 != (int64_t *)0x0) {
      (**(code **)(*plStack_d0 + 0x38))();
    }
    plVar18 = (int64_t *)(param_3 + 0x30 + lVar19);
    if (((*plVar18 != 0) || (plVar18[1] != 0)) &&
       (*(int *)(*(int64_t *)(param_1 + 0x1e0) + 0x1c40 + lVar10) != 0)) {
      lVar11 = FUN_180255f80(*(uint64_t *)(param_1 + 0xa8),&unknown_var_1168_ptr);
      lVar7 = core_system_data_config;
      if (lVar11 == 0) {
        if (*(int64_t *)(core_system_data_config + 0x98) == 0) {
          puVar12 = (uint64_t *)FUN_1800c1420(extraout_XMM0_Da,&plStack_c0,&unknown_var_9256_ptr,1);
          uVar2 = *puVar12;
          *puVar12 = 0;
          plStack_c8 = *(int64_t **)(lVar7 + 0x98);
          *(uint64_t *)(lVar7 + 0x98) = uVar2;
          if (plStack_c8 != (int64_t *)0x0) {
            (**(code **)(*plStack_c8 + 0x38))();
          }
          if (plStack_c0 != (int64_t *)0x0) {
            (**(code **)(*plStack_c0 + 0x38))();
          }
        }
        uStack_f0 = 0;
        uStack_e8 = 0;
        pcStack_e0 = (code *)0x0;
        pcStack_d8 = _guard_check_icall;
        FUN_18023c450(*(uint64_t *)(lVar7 + 0x98),0,*(int32_t *)(lVar7 + 0x468),&uStack_f0);
        if (pcStack_e0 != (code *)0x0) {
          (*pcStack_e0)(&uStack_f0,0,0);
        }
        FUN_180056f10(param_1 + 0xb8 + lVar20,*(uint64_t *)(lVar7 + 0x98));
        puStack_a8 = &unknown_var_3480_ptr;
        puStack_a0 = auStack_90;
        auStack_90[0] = 0;
        iStack_98 = *(int *)(lVar10 + 0x1c40 + *(int64_t *)(param_1 + 0x1e0));
        puVar13 = *(void **)(lVar10 + 0x1c38 + *(int64_t *)(param_1 + 0x1e0));
        puVar14 = &system_buffer_ptr;
        if (puVar13 != (void *)0x0) {
          puVar14 = puVar13;
        }
        strcpy_s(auStack_90,0x40,puVar14);
        puVar13 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x18) != (void *)0x0) {
          puVar13 = *(void **)(param_1 + 0x18);
        }
        if (iStack_98 == 0) {
          puVar14 = &system_data_e8a0;
        }
        else {
          puVar14 = &system_buffer_ptr;
          if (puStack_a0 != (void *)0x0) {
            puVar14 = puStack_a0;
          }
        }
        FUN_180627020(&unknown_var_7608_ptr,puVar14,puVar13);
        puStack_a8 = &system_state_ptr;
      }
      else {
        FUN_180080810(param_1 + 0xb8 + lVar20,lVar11 + 0xb0);
      }
    }
    lVar19 = lVar19 + 0x10;
    lVar20 = lVar20 + 8;
    plVar15 = plVar15 + 1;
    lVar10 = lVar10 + 0x58;
    plStack_f8 = (int64_t *)((int64_t)plStack_f8 + -1);
  } while (plStack_f8 != (int64_t *)0x0);
  if ((uint64_t *)(param_1 + 0x368) != (uint64_t *)(param_3 + 0x138)) {
    FUN_18022ec40((uint64_t *)(param_1 + 0x368),*(uint64_t *)(param_3 + 0x138),
                  *(uint64_t *)(param_3 + 0x140));
  }
  *(int32_t *)(param_1 + 0x138) = *(int32_t *)(param_3 + 0x18);
  *(int32_t *)(param_1 + 0x388) = *(int32_t *)(param_3 + 0x1c);
  *(int32_t *)(param_1 + 600) = *(int32_t *)(param_3 + 0x130);
  *(int8_t *)(param_1 + 0x13c) = *(int8_t *)(param_3 + 0x134);
  *(int32_t *)(param_1 + 0x25c) = *(int32_t *)(param_3 + 0x158);
  *(int32_t *)(param_1 + 0x260) = *(int32_t *)(param_3 + 0x15c);
  *(int32_t *)(param_1 + 0x264) = *(int32_t *)(param_3 + 0x160);
  *(int32_t *)(param_1 + 0x268) = *(int32_t *)(param_3 + 0x164);
  uVar2 = *(uint64_t *)(param_3 + 0x170);
  *(uint64_t *)(param_1 + 0x288) = *(uint64_t *)(param_3 + 0x168);
  *(uint64_t *)(param_1 + 0x290) = uVar2;
  uVar2 = *(uint64_t *)(param_3 + 0x180);
  *(uint64_t *)(param_1 + 0x298) = *(uint64_t *)(param_3 + 0x178);
  *(uint64_t *)(param_1 + 0x2a0) = uVar2;
  uVar2 = *(uint64_t *)(param_3 + 400);
  *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(param_3 + 0x188);
  *(uint64_t *)(param_1 + 0x2b0) = uVar2;
  uVar4 = *(int32_t *)(param_3 + 0x19c);
  uVar5 = *(int32_t *)(param_3 + 0x1a0);
  uVar6 = *(int32_t *)(param_3 + 0x1a4);
  *(int32_t *)(param_1 + 0x2b8) = *(int32_t *)(param_3 + 0x198);
  *(int32_t *)(param_1 + 700) = uVar4;
  *(int32_t *)(param_1 + 0x2c0) = uVar5;
  *(int32_t *)(param_1 + 0x2c4) = uVar6;
  *(int32_t *)(param_1 + 0x2c8) = *(int32_t *)(param_3 + 0x1a8);
  *(int32_t *)(param_1 + 0x26c) = *(int32_t *)(param_3 + 0x1ac);
  *(int32_t *)(param_1 + 0x270) = *(int32_t *)(param_3 + 0x1b0);
  *(int32_t *)(param_1 + 0x274) = *(int32_t *)(param_3 + 0x1b4);
  *(int32_t *)(param_1 + 0x278) = *(int32_t *)(param_3 + 0x1b8);
  *(int32_t *)(param_1 + 0x27c) = *(int32_t *)(param_3 + 0x1bc);
  *(int32_t *)(param_1 + 0x280) = *(int32_t *)(param_3 + 0x1c0);
  *(int32_t *)(param_1 + 0x284) = *(int32_t *)(param_3 + 0x1c4);
  lVar10 = *(int64_t *)(param_1 + 0xa8);
  puVar21 = (uint64_t *)(core_system_data_config + 0x180);
  puVar12 = puVar21;
  puVar16 = *(uint64_t **)(core_system_data_config + 400);
  if (*(uint64_t **)(core_system_data_config + 400) != (uint64_t *)0x0) {
    do {
      iVar9 = memcmp(puVar16 + 4,lVar10 + 0xc,0x10);
      if (iVar9 < 0) {
        puVar17 = (uint64_t *)*puVar16;
      }
      else {
        puVar17 = (uint64_t *)puVar16[1];
        puVar12 = puVar16;
      }
      puVar16 = puVar17;
    } while (puVar17 != (uint64_t *)0x0);
    if (puVar12 != puVar21) {
      iVar9 = memcmp(lVar10 + 0xc,puVar12 + 4,0x10);
      if (-1 < iVar9) goto LAB_18022e4c7;
    }
  }
  puVar12 = puVar21;
LAB_18022e4c7:
  if (puVar12 != puVar21) {
    uVar2 = puVar12[6];
    uVar3 = puVar12[7];
    *(int32_t *)(param_1 + 0x170) = 0;
    **(int8_t **)(param_1 + 0x168) = 0;
    FUN_18004b860(param_1 + 0x160,&unknown_var_7284_ptr,uVar2);
    *(uint64_t *)(param_1 + 0x148) = uVar2;
    *(int32_t *)(param_1 + 0x1a8) = 0;
    **(int8_t **)(param_1 + 0x1a0) = 0;
    FUN_18004b860(param_1 + 0x198,&unknown_var_7284_ptr,uVar3);
    *(uint64_t *)(param_1 + 0x150) = uVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x388);
  if ((uVar1 >> 0x1e & 1) == 0) {
    if ((uVar1 >> 0x1c & 1) == 0) {
      bVar8 = (byte)(uVar1 >> 0x18);
      if ((int)uVar1 < 0) {
        if ((uVar1 >> 0x1b & 1) == 0) {
          bVar8 = bVar8 & 1 | 0xc;
        }
        else {
          bVar8 = bVar8 & 1 | 0xe;
        }
      }
      else if ((uVar1 >> 0x19 & 1) == 0) {
        bVar8 = bVar8 & 1;
      }
      else if ((uVar1 >> 0x1b & 1) == 0) {
        bVar8 = bVar8 & 1 | 2;
      }
      else {
        bVar8 = ((uVar1 >> 0x18 & 1) != 0) + 7;
      }
    }
    else {
      bVar8 = 4;
    }
  }
  else {
    bVar8 = 9;
  }
  *(byte *)(param_1 + 0x38c) = bVar8;
  FUN_18022d860(param_1);
  FUN_18022ce40(param_1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (uint64_t)auStack_118);
}



uint64_t FUN_18022e5d0(int64_t param_1)

{
  bool bVar1;
  uint64_t in_RAX;
  int64_t lVar2;
  void *puVar3;
  
  if ((*(uint *)(param_1 + 0x138) & 0x200) == 0) {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
      puVar3 = *(void **)(param_1 + 0x2d8);
    }
    lVar2 = strstr(puVar3,&unknown_var_7644_ptr);
    if (lVar2 == 0) {
      puVar3 = &system_buffer_ptr;
      if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
        puVar3 = *(void **)(param_1 + 0x2d8);
      }
      lVar2 = strstr(puVar3,&unknown_var_7748_ptr);
      if (lVar2 == 0) {
        puVar3 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
          puVar3 = *(void **)(param_1 + 0x2d8);
        }
        lVar2 = strstr(puVar3,&unknown_var_7760_ptr);
        if (lVar2 == 0) {
          puVar3 = &system_buffer_ptr;
          if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
            puVar3 = *(void **)(param_1 + 0x2d8);
          }
          lVar2 = strstr(puVar3,&unknown_var_4176_ptr);
          if (lVar2 == 0) {
            puVar3 = &system_buffer_ptr;
            if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
              puVar3 = *(void **)(param_1 + 0x2d8);
            }
            lVar2 = strstr(puVar3,&unknown_var_7712_ptr);
            if (lVar2 == 0) {
              puVar3 = &system_buffer_ptr;
              if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
                puVar3 = *(void **)(param_1 + 0x2d8);
              }
              lVar2 = strstr(puVar3,&unknown_var_7736_ptr);
              if (lVar2 == 0) {
                puVar3 = &system_buffer_ptr;
                if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
                  puVar3 = *(void **)(param_1 + 0x2d8);
                }
                lVar2 = strstr(puVar3,&unknown_var_7772_ptr);
                if (lVar2 == 0) {
                  puVar3 = &system_buffer_ptr;
                  if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
                    puVar3 = *(void **)(param_1 + 0x2d8);
                  }
                  lVar2 = strstr(puVar3,&unknown_var_5544_ptr);
                  if (lVar2 == 0) {
                    puVar3 = &system_buffer_ptr;
                    if (*(void **)(param_1 + 0x2d8) != (void *)0x0) {
                      puVar3 = *(void **)(param_1 + 0x2d8);
                    }
                    lVar2 = strstr(puVar3,&system_data_388c);
                    bVar1 = false;
                    if (lVar2 != 0) {
                      bVar1 = true;
                    }
                  }
                  else {
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
    in_RAX = (uint64_t)(*(uint *)(param_1 + 0x138) >> 0x13) & 0xffffffffffffff01;
    if ((bVar1) &&
       ((((char)in_RAX != '\0' || ((*(uint *)(param_1 + 0x138) >> 0x12 & 1) != 0)) ||
        (*(char *)(param_1 + 0x13c) == '\x06' || *(char *)(param_1 + 0x13c) == '\0')))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



int64_t FUN_18022e5f7(void)

{
  bool bVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint7 uVar4;
  void *puVar5;
  int64_t unaff_RBX;
  
  lVar2 = strstr();
  if (lVar2 == 0) {
    puVar5 = &system_buffer_ptr;
    if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
      puVar5 = *(void **)(unaff_RBX + 0x2d8);
    }
    lVar2 = strstr(puVar5,&unknown_var_7748_ptr);
    if (lVar2 == 0) {
      puVar5 = &system_buffer_ptr;
      if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
        puVar5 = *(void **)(unaff_RBX + 0x2d8);
      }
      lVar2 = strstr(puVar5,&unknown_var_7760_ptr);
      if (lVar2 == 0) {
        puVar5 = &system_buffer_ptr;
        if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
          puVar5 = *(void **)(unaff_RBX + 0x2d8);
        }
        lVar2 = strstr(puVar5,&unknown_var_4176_ptr);
        if (lVar2 == 0) {
          puVar5 = &system_buffer_ptr;
          if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
            puVar5 = *(void **)(unaff_RBX + 0x2d8);
          }
          lVar2 = strstr(puVar5,&unknown_var_7712_ptr);
          if (lVar2 == 0) {
            puVar5 = &system_buffer_ptr;
            if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
              puVar5 = *(void **)(unaff_RBX + 0x2d8);
            }
            lVar2 = strstr(puVar5,&unknown_var_7736_ptr);
            if (lVar2 == 0) {
              puVar5 = &system_buffer_ptr;
              if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
                puVar5 = *(void **)(unaff_RBX + 0x2d8);
              }
              lVar2 = strstr(puVar5,&unknown_var_7772_ptr);
              if (lVar2 == 0) {
                puVar5 = &system_buffer_ptr;
                if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
                  puVar5 = *(void **)(unaff_RBX + 0x2d8);
                }
                lVar2 = strstr(puVar5,&unknown_var_5544_ptr);
                if (lVar2 == 0) {
                  puVar5 = &system_buffer_ptr;
                  if (*(void **)(unaff_RBX + 0x2d8) != (void *)0x0) {
                    puVar5 = *(void **)(unaff_RBX + 0x2d8);
                  }
                  lVar2 = strstr(puVar5,&system_data_388c);
                  bVar1 = false;
                  if (lVar2 != 0) {
                    bVar1 = true;
                  }
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  uVar3 = (uint64_t)(*(uint *)(unaff_RBX + 0x138) >> 0x13) & 0xffffffffffffff01;
  uVar4 = (uint7)(uVar3 >> 8);
  if ((bVar1) &&
     ((((char)uVar3 != '\0' || ((*(uint *)(unaff_RBX + 0x138) >> 0x12 & 1) != 0)) ||
      (*(char *)(unaff_RBX + 0x13c) == '\x06' || *(char *)(unaff_RBX + 0x13c) == '\0')))) {
    return CONCAT71(uVar4,1);
  }
  return (uint64_t)uVar4 << 8;
}



int8_t FUN_18022e79c(char param_1)

{
  if (param_1 != '\0') {
    return 1;
  }
  return 0;
}





// 函数: void FUN_18022e7d0(uint64_t *param_1,int64_t param_2)
void FUN_18022e7d0(uint64_t *param_1,int64_t param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int64_t *)(param_2 + 0xb8) != 0) {
    uVar2 = *(uint64_t *)(*(int64_t *)(param_2 + 0xb8) + 0x278);
    uVar2 = (((((((uVar2 >> 8 & 0xff ^ (uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x38) *
            0x7ba81627b075296b;
    uVar2 = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
    uVar2 = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
    *param_1 = uVar2;
  }
  if (*(int64_t *)(param_2 + 200) != 0) {
    uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 200) + 0x278);
    uVar1 = (uVar2 ^ (((((((uVar1 >> 8 & 0xff ^ (uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3)
                           * 0x100000001b3 ^ uVar1 >> 0x10 & 0xff) * 0x100000001b3 ^
                         uVar1 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x20 & 0xff) *
                        0x100000001b3 ^ uVar1 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x30 & 0xff
                      ) * 0x100000001b3 ^ uVar1 >> 0x38) * 0x100000001b3) * -0x622015f714c7d297;
    uVar2 = (uVar1 >> 0x2f ^ uVar2 ^ uVar1) * -0x622015f714c7d297;
    uVar2 = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
    *param_1 = uVar2;
  }
  if (*(int64_t *)(param_2 + 0xd8) != 0) {
    uVar1 = *(uint64_t *)(*(int64_t *)(param_2 + 0xd8) + 0x278);
    uVar1 = (uVar2 ^ (((((((uVar1 >> 8 & 0xff ^ (uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3)
                           * 0x100000001b3 ^ uVar1 >> 0x10 & 0xff) * 0x100000001b3 ^
                         uVar1 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x20 & 0xff) *
                        0x100000001b3 ^ uVar1 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x30 & 0xff
                      ) * 0x100000001b3 ^ uVar1 >> 0x38) * 0x100000001b3) * -0x622015f714c7d297;
    uVar2 = (uVar1 >> 0x2f ^ uVar2 ^ uVar1) * -0x622015f714c7d297;
    *param_1 = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  }
  if (*(int64_t *)(param_2 + 0xc0) != 0) {
    uVar2 = *(uint64_t *)(*(int64_t *)(param_2 + 0xc0) + 0x278);
    uVar2 = (param_1[1] ^
            (((((((uVar2 >> 8 & 0xff ^ (uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3
            ) * -0x622015f714c7d297;
    uVar2 = (uVar2 >> 0x2f ^ param_1[1] ^ uVar2) * -0x622015f714c7d297;
    param_1[1] = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  }
  if (*(int64_t *)(param_2 + 0xd0) != 0) {
    uVar2 = *(uint64_t *)(*(int64_t *)(param_2 + 0xd0) + 0x278);
    uVar2 = (param_1[1] ^
            (((((((uVar2 >> 8 & 0xff ^ (uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                  0x100000001b3 ^ uVar2 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x18 & 0xff) *
                0x100000001b3 ^ uVar2 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x28 & 0xff) *
              0x100000001b3 ^ uVar2 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar2 >> 0x38) * 0x100000001b3
            ) * -0x622015f714c7d297;
    uVar2 = (uVar2 >> 0x2f ^ param_1[1] ^ uVar2) * -0x622015f714c7d297;
    param_1[1] = (uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
  }
  return;
}





// 函数: void FUN_18022ebe0(int64_t *param_1)
void FUN_18022ebe0(int64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  
  puVar1 = (uint64_t *)param_1[1];
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != puVar1) {
    do {
      (**(code **)*puVar2)(puVar2,0);
      puVar2 = puVar2 + 0xb;
    } while (puVar2 != puVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)puVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



