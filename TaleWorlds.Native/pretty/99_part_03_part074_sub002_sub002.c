#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part074_sub002_sub002.c - 1 个函数

// 函数: void FUN_18023ec80(int64_t param_1)
void FUN_18023ec80(int64_t param_1)

{
  int64_t *plVar1;
  byte *pbVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  uint uVar12;
  uint uVar13;
  void *puVar14;
  void *puVar15;
  int64_t **pplVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int64_t **pplVar20;
  int64_t lVar21;
  int64_t **pplVar22;
  int64_t **pplVar23;
  int32_t uVar24;
  int8_t auStack_268 [32];
  int64_t *plStack_248;
  int64_t **pplStack_240;
  int64_t **pplStack_238;
  int64_t **pplStack_230;
  int32_t uStack_228;
  int64_t *plStack_220;
  int64_t **pplStack_218;
  int64_t *plStack_210;
  int64_t *plStack_208;
  uint64_t uStack_200;
  void *puStack_1f8;
  int8_t *puStack_1f0;
  uint auStack_1e8 [2];
  int8_t auStack_1e0 [64];
  void *puStack_1a0;
  int8_t *puStack_198;
  int32_t uStack_190;
  int8_t auStack_188 [64];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [64];
  void *puStack_f0;
  int8_t *puStack_e8;
  int32_t uStack_e0;
  int8_t auStack_d8 [64];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [72];
  uint64_t uStack_38;
  int64_t **pplVar16;
  
  uStack_200 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_268;
  lVar21 = *(int64_t *)(*(int64_t *)(param_1 + 0xa8) + 0x20);
  puVar15 = *(void **)(*(int64_t *)(param_1 + 0xa8) + 0x70);
  puVar14 = &system_buffer_ptr;
  if (puVar15 != (void *)0x0) {
    puVar14 = puVar15;
  }
  (**(code **)(*(int64_t *)(param_1 + 0x10) + 0x10))((int64_t *)(param_1 + 0x10),puVar14);
  *(int32_t *)(param_1 + 0x1588) = *(int32_t *)(lVar21 + 8);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x18) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x18);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x16b0) + 0x10))((int64_t *)(param_1 + 0x16b0),puVar15);
  cVar3 = *(char *)(lVar21 + 0x7d4);
  *(char *)(param_1 + 0x1614) = cVar3;
  plVar1 = (int64_t *)(param_1 + 0x1708);
  if (cVar3 == '\0') {
    puVar15 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0x38) != (void *)0x0) {
      puVar15 = *(void **)(lVar21 + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar15);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0x58) != (void *)0x0) {
      puVar15 = *(void **)(lVar21 + 0x58);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x1760) + 0x10))((int64_t *)(param_1 + 0x1760),puVar15);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0x78) != (void *)0x0) {
      puVar15 = *(void **)(lVar21 + 0x78);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x17b8) + 0x10))((int64_t *)(param_1 + 0x17b8),puVar15);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0x98) != (void *)0x0) {
      puVar15 = *(void **)(lVar21 + 0x98);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x1810) + 0x10))((int64_t *)(param_1 + 0x1810),puVar15);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(lVar21 + 0xf8) != (void *)0x0) {
      puVar15 = *(void **)(lVar21 + 0xf8);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x1918) + 0x10))((int64_t *)(param_1 + 0x1918),puVar15);
  }
  else {
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1,puVar15);
    uVar13 = *(uint *)(param_1 + 0x1718) + 8;
    if (uVar13 < 0x3f) {
      puVar10 = (uint64_t *)
                ((uint64_t)*(uint *)(param_1 + 0x1718) + *(int64_t *)(param_1 + 0x1710));
      *puVar10 = 0x726566667562675f;
      *(int8_t *)(puVar10 + 1) = 0;
      *(uint *)(param_1 + 0x1718) = uVar13;
    }
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x18);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x1760) + 0x10))((int64_t *)(param_1 + 0x1760),puVar15);
    uVar13 = *(uint *)(param_1 + 6000) + 10;
    if (uVar13 < 0x3f) {
      puVar10 = (uint64_t *)
                ((uint64_t)*(uint *)(param_1 + 6000) + *(int64_t *)(param_1 + 0x1768));
      *puVar10 = 0x6d776f646168735f;
      *(int16_t *)(puVar10 + 1) = 0x7061;
      *(int8_t *)((int64_t)puVar10 + 10) = 0;
      *(uint *)(param_1 + 6000) = uVar13;
    }
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x18);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x17b8) + 0x10))((int64_t *)(param_1 + 0x17b8),puVar15);
    uVar13 = *(uint *)(param_1 + 0x17c8) + 0xb;
    if (uVar13 < 0x3f) {
      puVar10 = (uint64_t *)
                ((uint64_t)*(uint *)(param_1 + 0x17c8) + *(int64_t *)(param_1 + 0x17c0));
      *puVar10 = 0x696c746e696f705f;
      *(int32_t *)(puVar10 + 1) = 0x746867;
      *(uint *)(param_1 + 0x17c8) = uVar13;
    }
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x18);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x1810) + 0x10))((int64_t *)(param_1 + 0x1810),puVar15);
    uVar13 = *(uint *)(param_1 + 0x1820) + 0x10;
    if (uVar13 < 0x3f) {
      puVar11 = (int32_t *)
                ((uint64_t)*(uint *)(param_1 + 0x1820) + *(int64_t *)(param_1 + 0x1818));
      *puVar11 = 0x6e6f635f;
      puVar11[1] = 0x6e617473;
      puVar11[2] = 0x756f5f74;
      puVar11[3] = 0x74757074;
      *(int8_t *)(puVar11 + 4) = 0;
      *(uint *)(param_1 + 0x1820) = uVar13;
    }
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x18) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x18);
    }
    (**(code **)(*(int64_t *)(param_1 + 0x1918) + 0x10))((int64_t *)(param_1 + 0x1918),puVar15);
    uVar13 = *(uint *)(param_1 + 0x1928) + 9;
    if (uVar13 < 0x3f) {
      puVar10 = (uint64_t *)
                ((uint64_t)*(uint *)(param_1 + 0x1928) + *(int64_t *)(param_1 + 0x1920));
      *puVar10 = 0x6172647265766f5f;
      *(int16_t *)(puVar10 + 1) = 0x77;
      *(uint *)(param_1 + 0x1928) = uVar13;
    }
  }
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0xb8) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0xb8);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1868) + 0x10))((int64_t *)(param_1 + 0x1868),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0xd8) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0xd8);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x18c0) + 0x10))((int64_t *)(param_1 + 0x18c0),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x118) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x118);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1618) + 0x10))((int64_t *)(param_1 + 0x1618),puVar15);
  if ((uint64_t *)(param_1 + 0x1598) != (uint64_t *)(lVar21 + 0x130)) {
    FUN_180241a50((uint64_t *)(param_1 + 0x1598),*(uint64_t *)(lVar21 + 0x130),
                  *(uint64_t *)(lVar21 + 0x138));
  }
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x158) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x158);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1970) + 0x10))((int64_t *)(param_1 + 0x1970),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x178) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x178);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x19c8) + 0x10))((int64_t *)(param_1 + 0x19c8),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x198) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x198);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1a20) + 0x10))((int64_t *)(param_1 + 0x1a20),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x1b8) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x1b8);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1a78) + 0x10))((int64_t *)(param_1 + 0x1a78),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x1d8) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x1d8);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1ad0) + 0x10))((int64_t *)(param_1 + 0x1ad0),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x1f8) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x1f8);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1b28) + 0x10))((int64_t *)(param_1 + 0x1b28),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x218) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x218);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1b80) + 0x10))((int64_t *)(param_1 + 0x1b80),puVar15);
  puVar15 = &system_buffer_ptr;
  if (*(void **)(lVar21 + 0x238) != (void *)0x0) {
    puVar15 = *(void **)(lVar21 + 0x238);
  }
  (**(code **)(*(int64_t *)(param_1 + 0x1bd8) + 0x10))((int64_t *)(param_1 + 0x1bd8),puVar15);
  puVar10 = (uint64_t *)(param_1 + 0x1c38);
  lVar19 = 0x10;
  do {
    *(int32_t *)(puVar10 + 1) = *(int32_t *)((lVar21 - param_1) + -0x19d8 + (int64_t)puVar10)
    ;
    puVar15 = *(void **)((lVar21 - param_1) + -0x19e0 + (int64_t)puVar10);
    puVar14 = &system_buffer_ptr;
    if (puVar15 != (void *)0x0) {
      puVar14 = puVar15;
    }
    strcpy_s(*puVar10,0x40,puVar14);
    puVar10 = puVar10 + 0xb;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  *(int32_t *)(param_1 + 0x1610) = *(int32_t *)(lVar21 + 2000);
  uVar24 = FUN_18023fa30(param_1 + 0xe8,lVar21 + 0x7d8);
  plVar1 = (int64_t *)(param_1 + 0xc0);
  iVar5 = (int)(*(int64_t *)(param_1 + 200) - *plVar1 >> 3);
  pplVar16 = (int64_t **)0x0;
  pplVar17 = pplVar16;
  if (0 < iVar5) {
    do {
      pplStack_218 = &plStack_248;
      plStack_248 = *(int64_t **)(*plVar1 + (int64_t)pplVar17 * 8);
      if (plStack_248 != (int64_t *)0x0) {
        uVar24 = (**(code **)(*plStack_248 + 0x28))();
      }
      uVar24 = FUN_1800b55b0(uVar24,&plStack_248);
      pplVar17 = (int64_t **)((int64_t)pplVar17 + 1);
    } while ((int64_t)pplVar17 < (int64_t)iVar5);
  }
  if (*(char *)(param_1 + 0x1614) == '\0') {
    FUN_1800b8500(plVar1);
  }
  else {
    puStack_1f8 = &unknown_var_3480_ptr;
    puStack_1f0 = auStack_1e0;
    auStack_1e0[0] = 0;
    auStack_1e8[0] = *(uint *)(param_1 + 0x1718);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x1710) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x1710);
    }
    strcpy_s(auStack_1e0,0x40,puVar15);
    puStack_1a0 = &unknown_var_3480_ptr;
    puStack_198 = auStack_188;
    auStack_188[0] = 0;
    uStack_190 = *(int32_t *)(param_1 + 6000);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x1768) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x1768);
    }
    strcpy_s(auStack_188,0x40,puVar15);
    puStack_148 = &unknown_var_3480_ptr;
    puStack_140 = auStack_130;
    auStack_130[0] = 0;
    uStack_138 = *(int32_t *)(param_1 + 0x17c8);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x17c0) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x17c0);
    }
    strcpy_s(auStack_130,0x40,puVar15);
    puStack_f0 = &unknown_var_3480_ptr;
    puStack_e8 = auStack_d8;
    auStack_d8[0] = 0;
    uStack_e0 = *(int32_t *)(param_1 + 0x1820);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x1818) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x1818);
    }
    strcpy_s(auStack_d8,0x40,puVar15);
    puStack_98 = &unknown_var_3480_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = *(int32_t *)(param_1 + 0x1928);
    puVar15 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x1920) != (void *)0x0) {
      puVar15 = *(void **)(param_1 + 0x1920);
    }
    strcpy_s(auStack_80,0x40,puVar15);
    pplStack_240 = (int64_t **)0x0;
    pplStack_238 = (int64_t **)0x0;
    pplStack_230 = (int64_t **)0x0;
    uStack_228 = 3;
    plStack_248 = (int64_t *)((uint64_t)plStack_248 & 0xffffffff00000000);
    pplVar17 = (int64_t **)0x0;
    pplVar9 = pplVar16;
    pplVar22 = (int64_t **)0x0;
    do {
      iVar5 = (int)pplVar16;
      pplVar20 = pplVar17;
      pplVar23 = pplVar22;
      if (auStack_1e8[(int64_t)iVar5 * 0x16] != 0) {
        plStack_220 = (int64_t *)0x0;
        plVar1 = *(int64_t **)(param_1 + 200);
        plVar8 = *(int64_t **)(param_1 + 0xc0);
        if (plVar8 == plVar1) {
LAB_18023f4be:
          uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2210,0x10,0x11);
          plVar8 = (int64_t *)FUN_18023fe10(uVar7);
          if (plVar8 != (int64_t *)0x0) {
            plStack_210 = plVar8;
            (**(code **)(*plVar8 + 0x28))(plVar8);
          }
          plStack_210 = (int64_t *)0x0;
          puVar15 = &system_buffer_ptr;
          if (*(void **)(auStack_1e8 + (int64_t)(int)plStack_248 * 0x16 + -2) !=
              (void *)0x0) {
            puVar15 = *(void **)(auStack_1e8 + (int64_t)(int)plStack_248 * 0x16 + -2);
          }
          plStack_220 = plVar8;
          (**(code **)(plVar8[2] + 0x10))(plVar8 + 2,puVar15);
        }
        else {
          uVar13 = auStack_1e8[(int64_t)(int)plStack_248 * 0x16];
          do {
            uVar4 = *(uint *)(*plVar8 + 0x20);
            uVar12 = uVar13;
            if (uVar4 == uVar13) {
              if (uVar4 != 0) {
                pbVar6 = *(byte **)(*plVar8 + 0x18);
                lVar21 = *(int64_t *)(auStack_1e8 + (int64_t)(int)plStack_248 * 0x16 + -2) -
                         (int64_t)pbVar6;
                do {
                  pbVar2 = pbVar6 + lVar21;
                  uVar12 = (uint)*pbVar6 - (uint)*pbVar2;
                  if (uVar12 != 0) break;
                  pbVar6 = pbVar6 + 1;
                } while (*pbVar2 != 0);
              }
LAB_18023f4ae:
              if (uVar12 == 0) break;
            }
            else if (uVar4 == 0) goto LAB_18023f4ae;
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar1);
          if (plVar8 == plVar1) goto LAB_18023f4be;
          plVar8 = (int64_t *)*plVar8;
          if (plVar8 != (int64_t *)0x0) {
            plStack_208 = plVar8;
            (**(code **)(*plVar8 + 0x28))(plVar8);
          }
          plStack_208 = (int64_t *)0x0;
          plStack_220 = plVar8;
        }
        (**(code **)(plVar8[0x302] + 0x10))(plVar8 + 0x302,&system_buffer_ptr);
        (**(code **)(plVar8[0x30d] + 0x10))(plVar8 + 0x30d,&system_buffer_ptr);
        (**(code **)(plVar8[0x318] + 0x10))(plVar8 + 0x318,&system_buffer_ptr);
        (**(code **)(plVar8[0x2e1] + 0x10))(plVar8 + 0x2e1,&system_buffer_ptr);
        (**(code **)(plVar8[0x2ec] + 0x10))(plVar8 + 0x2ec,&system_buffer_ptr);
        (**(code **)(plVar8[0x2f7] + 0x10))(plVar8 + 0x2f7,&system_buffer_ptr);
        (**(code **)(plVar8[0x323] + 0x10))(plVar8 + 0x323,&system_buffer_ptr);
        *(uint *)(plVar8 + 0x2d8) = auStack_1e8[(int64_t)(int)plStack_248 * 0x16];
        puVar15 = &system_buffer_ptr;
        if (*(void **)(auStack_1e8 + (int64_t)(int)plStack_248 * 0x16 + -2) !=
            (void *)0x0) {
          puVar15 = *(void **)(auStack_1e8 + (int64_t)(int)plStack_248 * 0x16 + -2);
        }
        strcpy_s(plVar8[0x2d7],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x330) = *(int32_t *)(param_1 + 0x1980);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1978) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1978);
        }
        strcpy_s(plVar8[0x32f],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x33b) = *(int32_t *)(param_1 + 0x19d8);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x19d0) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x19d0);
        }
        strcpy_s(plVar8[0x33a],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x346) = *(int32_t *)(param_1 + 0x1a30);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1a28) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1a28);
        }
        strcpy_s(plVar8[0x345],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x351) = *(int32_t *)(param_1 + 0x1a88);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1a80) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1a80);
        }
        strcpy_s(plVar8[0x350],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x35c) = *(int32_t *)(param_1 + 0x1980);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1978) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1978);
        }
        strcpy_s(plVar8[0x35b],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x367) = *(int32_t *)(param_1 + 0x19d8);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x19d0) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x19d0);
        }
        strcpy_s(plVar8[0x366],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x372) = *(int32_t *)(param_1 + 0x1a30);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1a28) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1a28);
        }
        strcpy_s(plVar8[0x371],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x37d) = *(int32_t *)(param_1 + 0x1a88);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1a80) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1a80);
        }
        strcpy_s(plVar8[0x37c],0x40,puVar15);
        *(int32_t *)(plVar8 + 0x2b1) = *(int32_t *)(param_1 + 0x1588);
        *(int32_t *)(plVar8 + 0x2c2) = *(int32_t *)(param_1 + 0x1610);
        *(int32_t *)(plVar8 + 0x2c5) = *(int32_t *)(param_1 + 0x1628);
        puVar15 = &system_buffer_ptr;
        if (*(void **)(param_1 + 0x1620) != (void *)0x0) {
          puVar15 = *(void **)(param_1 + 0x1620);
        }
        strcpy_s(plVar8[0x2c4],0x40,puVar15);
        if (plVar8 + 0x2b3 != (int64_t *)(param_1 + 0x1598)) {
          FUN_180241a50(plVar8 + 0x2b3,*(int64_t *)(param_1 + 0x1598),
                        *(uint64_t *)(param_1 + 0x15a0));
        }
        plVar8[0x1c] = param_1;
        plVar8[0x15] = *(int64_t *)(param_1 + 0xa8);
        if (pplVar17 < pplVar9) {
          pplVar20 = pplVar17 + 1;
          *pplVar17 = plVar8;
          pplStack_238 = pplVar20;
          (**(code **)(*plVar8 + 0x28))(plVar8);
        }
        else {
          lVar21 = (int64_t)pplVar17 - (int64_t)pplVar22 >> 3;
          pplVar16 = pplVar22;
          if (lVar21 == 0) {
            lVar21 = 1;
LAB_18023f87a:
            pplVar9 = (int64_t **)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar21 * 8,3);
            pplVar23 = pplVar9;
          }
          else {
            lVar21 = lVar21 * 2;
            if (lVar21 != 0) goto LAB_18023f87a;
            pplVar9 = (int64_t **)0x0;
            pplVar23 = pplVar9;
          }
          for (; pplVar16 != pplVar17; pplVar16 = pplVar16 + 1) {
            *pplVar9 = *pplVar16;
            *pplVar16 = (int64_t *)0x0;
            pplVar9 = pplVar9 + 1;
          }
          *pplVar9 = plVar8;
          (**(code **)(*plVar8 + 0x28))(plVar8);
          pplVar20 = pplVar9 + 1;
          for (pplVar16 = pplVar22; pplStack_218 = pplVar20, pplVar16 != pplVar17;
              pplVar16 = pplVar16 + 1) {
            if (*pplVar16 != (int64_t *)0x0) {
              (**(code **)(**pplVar16 + 0x38))();
            }
            pplVar20 = pplStack_218;
          }
          if (pplVar22 != (int64_t **)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(pplVar22);
          }
          pplVar9 = pplVar23 + lVar21;
          pplStack_240 = pplVar23;
          pplStack_238 = pplVar20;
          pplStack_230 = pplVar9;
        }
        lVar21 = system_resource_state;
        iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
        *(int8_t *)((int64_t)plVar8 + 0xb2) = 1;
        FUN_1802abe00((int64_t)iVar5 * 0x98 + lVar21 + 8,plVar8);
        (**(code **)(*plVar8 + 0x38))(plVar8);
        iVar5 = (int)plStack_248;
      }
      uVar13 = iVar5 + 1;
      pplVar16 = (int64_t **)(uint64_t)uVar13;
      plStack_248 = (int64_t *)CONCAT44(plStack_248._4_4_,uVar13);
      pplVar17 = pplVar20;
      pplVar22 = pplVar23;
    } while ((int)uVar13 < 5);
    plVar1 = *(int64_t **)(param_1 + 0xc0);
    *(int64_t ***)(param_1 + 0xc0) = pplVar23;
    plVar8 = *(int64_t **)(param_1 + 200);
    *(int64_t ***)(param_1 + 200) = pplVar20;
    pplStack_230 = *(int64_t ***)(param_1 + 0xd0);
    *(int64_t ***)(param_1 + 0xd0) = pplVar9;
    uStack_228 = *(int32_t *)(param_1 + 0xd8);
    *(int32_t *)(param_1 + 0xd8) = 3;
    pplStack_240 = (int64_t **)plVar1;
    pplStack_238 = (int64_t **)plVar8;
    for (plVar18 = plVar1; plVar18 != plVar8; plVar18 = plVar18 + 1) {
      if ((int64_t *)*plVar18 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar18 + 0x38))();
      }
    }
    if (plVar1 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar1);
    }
    FUN_1808fc8a8(&puStack_1f8,0x58,5,FUN_180044a30);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_268);
}



int64_t FUN_18023fa30(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  int32_t *puVar2;
  uint64_t uVar3;
  void *puVar4;
  void *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  
  FUN_180627be0();
  if ((uint64_t *)(param_1 + 0x20) != (uint64_t *)(param_2 + 0x20)) {
    FUN_1802418c0((uint64_t *)(param_1 + 0x20),*(uint64_t *)(param_2 + 0x20),
                  *(uint64_t *)(param_2 + 0x28));
  }
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(param_2 + 0x50);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x48) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x48);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x48),0x80,puVar4);
  *(int8_t *)(param_1 + 0xd8) = *(int8_t *)(param_2 + 0xd8);
  *(int32_t *)(param_1 + 0xdc) = *(int32_t *)(param_2 + 0xdc);
  *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_2 + 0xf0);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0xe8) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0xe8);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0xe8),0x80,puVar4);
  if ((uint64_t *)(param_1 + 0x178) != (uint64_t *)(param_2 + 0x178)) {
    FUN_1802418c0((uint64_t *)(param_1 + 0x178),*(uint64_t *)(param_2 + 0x178),
                  *(uint64_t *)(param_2 + 0x180));
  }
  puVar2 = (int32_t *)(param_1 + 0x1a8);
  lVar6 = param_2 - param_1;
  lVar7 = 5;
  do {
    *puVar2 = *(int32_t *)(lVar6 + (int64_t)puVar2);
    puVar4 = *(void **)(lVar6 + -8 + (int64_t)puVar2);
    puVar5 = &system_buffer_ptr;
    if (puVar4 != (void *)0x0) {
      puVar5 = puVar4;
    }
    strcpy_s(*(uint64_t *)(puVar2 + -2),0x80,puVar5);
    puVar2 = puVar2 + 0x26;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if ((uint64_t *)(param_1 + 0x490) != (uint64_t *)(param_2 + 0x490)) {
    FUN_1802418c0((uint64_t *)(param_1 + 0x490),*(uint64_t *)(param_2 + 0x490),
                  *(uint64_t *)(param_2 + 0x498));
  }
  puVar2 = (int32_t *)(param_1 + 0x4c0);
  lVar7 = 0x10;
  do {
    *puVar2 = *(int32_t *)((int64_t)puVar2 + lVar6);
    puVar4 = *(void **)((int64_t)puVar2 + lVar6 + -8);
    puVar5 = &system_buffer_ptr;
    if (puVar4 != (void *)0x0) {
      puVar5 = puVar4;
    }
    strcpy_s(*(uint64_t *)(puVar2 + -2),0x40,puVar5);
    puVar2 = puVar2 + 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar2 = (int32_t *)(param_1 + 0xa40);
  lVar7 = 9;
  do {
    *puVar2 = *(int32_t *)((int64_t)puVar2 + lVar6);
    puVar4 = *(void **)((int64_t)puVar2 + lVar6 + -8);
    puVar5 = &system_buffer_ptr;
    if (puVar4 != (void *)0x0) {
      puVar5 = puVar4;
    }
    strcpy_s(*(uint64_t *)(puVar2 + -2),0x80,puVar5);
    puVar2 = puVar2 + 0x26;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  *(int32_t *)(param_1 + 0xf98) = *(int32_t *)(param_2 + 0xf98);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0xf90) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0xf90);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0xf90),0x80,puVar4);
  *(int32_t *)(param_1 + 0x1030) = *(int32_t *)(param_2 + 0x1030);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x1028) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x1028);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x1028),0x80,puVar4);
  if ((uint64_t *)(param_1 + 0x10b8) != (uint64_t *)(param_2 + 0x10b8)) {
    FUN_1802418c0((uint64_t *)(param_1 + 0x10b8),*(uint64_t *)(param_2 + 0x10b8),
                  *(uint64_t *)(param_2 + 0x10c0));
  }
  uVar1 = *(uint *)(param_2 + 0x10e8);
  uVar3 = (uint64_t)uVar1;
  if (*(int64_t *)(param_2 + 0x10e0) != 0) {
    CoreEngineDataBufferProcessor(param_1 + 0x10d8,uVar3);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 0x10e0),*(uint64_t *)(param_2 + 0x10e0),uVar3);
  }
  *(int32_t *)(param_1 + 0x10e8) = 0;
  if (*(int64_t *)(param_1 + 0x10e0) != 0) {
    *(int8_t *)(uVar3 + *(int64_t *)(param_1 + 0x10e0)) = 0;
  }
  *(int32_t *)(param_1 + 0x10f4) = *(int32_t *)(param_2 + 0x10f4);
  *(int8_t *)(param_1 + 0x10f8) = *(int8_t *)(param_2 + 0x10f8);
  *(int8_t *)(param_1 + 0x10f9) = *(int8_t *)(param_2 + 0x10f9);
  *(int32_t *)(param_1 + 0x1110) = *(int32_t *)(param_2 + 0x1110);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x1108) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x1108);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x1108),0x80,puVar4);
  *(int32_t *)(param_1 + 0x11a8) = *(int32_t *)(param_2 + 0x11a8);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x11a0) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x11a0);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x11a0),0x80,puVar4);
  *(int32_t *)(param_1 + 0x1240) = *(int32_t *)(param_2 + 0x1240);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x1238) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x1238);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x1238),0x80,puVar4);
  *(int32_t *)(param_1 + 0x12d8) = *(int32_t *)(param_2 + 0x12d8);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x12d0) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x12d0);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x12d0),0x80,puVar4);
  *(int32_t *)(param_1 + 0x1370) = *(int32_t *)(param_2 + 0x1370);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x1368) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x1368);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x1368),0x80,puVar4);
  *(int32_t *)(param_1 + 0x1408) = *(int32_t *)(param_2 + 0x1408);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(param_2 + 0x1400) != (void *)0x0) {
    puVar4 = *(void **)(param_2 + 0x1400);
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x1400),0x80,puVar4);
  return param_1;
}



uint64_t * FUN_18023fe10(uint64_t *param_1)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &unknown_var_3432_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int8_t *)((int64_t)param_1 + 0xb2) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &unknown_var_9168_ptr;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 3;
  FUN_180241f10(param_1 + 0x1d);
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  *(int32_t *)(param_1 + 0x2b6) = 3;
  param_1[0x2c3] = &system_state_ptr;
  param_1[0x2c4] = 0;
  *(int32_t *)(param_1 + 0x2c5) = 0;
  param_1[0x2c3] = &unknown_var_3480_ptr;
  param_1[0x2c4] = param_1 + 0x2c6;
  *(int32_t *)(param_1 + 0x2c5) = 0;
  *(int8_t *)(param_1 + 0x2c6) = 0;
  FUN_1808fc838(param_1 + 0x2cf,8,7,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x2d6] = &system_state_ptr;
  param_1[0x2d7] = 0;
  *(int32_t *)(param_1 + 0x2d8) = 0;
  param_1[0x2d6] = &unknown_var_3480_ptr;
  param_1[0x2d7] = param_1 + 0x2d9;
  *(int32_t *)(param_1 + 0x2d8) = 0;
  *(int8_t *)(param_1 + 0x2d9) = 0;
  param_1[0x2e1] = &system_state_ptr;
  param_1[0x2e2] = 0;
  *(int32_t *)(param_1 + 0x2e3) = 0;
  param_1[0x2e1] = &unknown_var_3480_ptr;
  param_1[0x2e2] = param_1 + 0x2e4;
  *(int32_t *)(param_1 + 0x2e3) = 0;
  *(int8_t *)(param_1 + 0x2e4) = 0;
  param_1[0x2ec] = &system_state_ptr;
  param_1[0x2ed] = 0;
  *(int32_t *)(param_1 + 0x2ee) = 0;
  param_1[0x2ec] = &unknown_var_3480_ptr;
  param_1[0x2ed] = param_1 + 0x2ef;
  *(int32_t *)(param_1 + 0x2ee) = 0;
  *(int8_t *)(param_1 + 0x2ef) = 0;
  param_1[0x2f7] = &system_state_ptr;
  param_1[0x2f8] = 0;
  *(int32_t *)(param_1 + 0x2f9) = 0;
  param_1[0x2f7] = &unknown_var_3480_ptr;
  param_1[0x2f8] = param_1 + 0x2fa;
  *(int32_t *)(param_1 + 0x2f9) = 0;
  *(int8_t *)(param_1 + 0x2fa) = 0;
  param_1[0x302] = &system_state_ptr;
  param_1[0x303] = 0;
  *(int32_t *)(param_1 + 0x304) = 0;
  param_1[0x302] = &unknown_var_3480_ptr;
  param_1[0x303] = param_1 + 0x305;
  *(int32_t *)(param_1 + 0x304) = 0;
  *(int8_t *)(param_1 + 0x305) = 0;
  param_1[0x30d] = &system_state_ptr;
  param_1[0x30e] = 0;
  *(int32_t *)(param_1 + 0x30f) = 0;
  param_1[0x30d] = &unknown_var_3480_ptr;
  param_1[0x30e] = param_1 + 0x310;
  *(int32_t *)(param_1 + 0x30f) = 0;
  *(int8_t *)(param_1 + 0x310) = 0;
  param_1[0x318] = &system_state_ptr;
  param_1[0x319] = 0;
  *(int32_t *)(param_1 + 0x31a) = 0;
  param_1[0x318] = &unknown_var_3480_ptr;
  param_1[0x319] = param_1 + 0x31b;
  *(int32_t *)(param_1 + 0x31a) = 0;
  *(int8_t *)(param_1 + 0x31b) = 0;
  param_1[0x323] = &system_state_ptr;
  param_1[0x324] = 0;
  *(int32_t *)(param_1 + 0x325) = 0;
  param_1[0x323] = &unknown_var_3480_ptr;
  param_1[0x324] = param_1 + 0x326;
  *(int32_t *)(param_1 + 0x325) = 0;
  *(int8_t *)(param_1 + 0x326) = 0;
  param_1[0x32e] = &system_state_ptr;
  param_1[0x32f] = 0;
  *(int32_t *)(param_1 + 0x330) = 0;
  param_1[0x32e] = &unknown_var_3480_ptr;
  param_1[0x32f] = param_1 + 0x331;
  *(int32_t *)(param_1 + 0x330) = 0;
  *(int8_t *)(param_1 + 0x331) = 0;
  param_1[0x339] = &system_state_ptr;
  param_1[0x33a] = 0;
  *(int32_t *)(param_1 + 0x33b) = 0;
  param_1[0x339] = &unknown_var_3480_ptr;
  param_1[0x33a] = param_1 + 0x33c;
  *(int32_t *)(param_1 + 0x33b) = 0;
  *(int8_t *)(param_1 + 0x33c) = 0;
  param_1[0x344] = &system_state_ptr;
  param_1[0x345] = 0;
  *(int32_t *)(param_1 + 0x346) = 0;
  param_1[0x344] = &unknown_var_3480_ptr;
  param_1[0x345] = param_1 + 0x347;
  *(int32_t *)(param_1 + 0x346) = 0;
  *(int8_t *)(param_1 + 0x347) = 0;
  param_1[0x34f] = &system_state_ptr;
  param_1[0x350] = 0;
  *(int32_t *)(param_1 + 0x351) = 0;
  param_1[0x34f] = &unknown_var_3480_ptr;
  param_1[0x350] = param_1 + 0x352;
  *(int32_t *)(param_1 + 0x351) = 0;
  *(int8_t *)(param_1 + 0x352) = 0;
  param_1[0x35a] = &system_state_ptr;
  param_1[0x35b] = 0;
  *(int32_t *)(param_1 + 0x35c) = 0;
  param_1[0x35a] = &unknown_var_3480_ptr;
  param_1[0x35b] = param_1 + 0x35d;
  *(int32_t *)(param_1 + 0x35c) = 0;
  *(int8_t *)(param_1 + 0x35d) = 0;
  param_1[0x365] = &system_state_ptr;
  param_1[0x366] = 0;
  *(int32_t *)(param_1 + 0x367) = 0;
  param_1[0x365] = &unknown_var_3480_ptr;
  param_1[0x366] = param_1 + 0x368;
  *(int32_t *)(param_1 + 0x367) = 0;
  *(int8_t *)(param_1 + 0x368) = 0;
  param_1[0x370] = &system_state_ptr;
  param_1[0x371] = 0;
  *(int32_t *)(param_1 + 0x372) = 0;
  param_1[0x370] = &unknown_var_3480_ptr;
  param_1[0x371] = param_1 + 0x373;
  *(int32_t *)(param_1 + 0x372) = 0;
  *(int8_t *)(param_1 + 0x373) = 0;
  param_1[0x37b] = &system_state_ptr;
  param_1[0x37c] = 0;
  *(int32_t *)(param_1 + 0x37d) = 0;
  param_1[0x37b] = &unknown_var_3480_ptr;
  param_1[0x37c] = param_1 + 0x37e;
  *(int32_t *)(param_1 + 0x37d) = 0;
  *(int8_t *)(param_1 + 0x37e) = 0;
  FUN_1808fc838(param_1 + 0x386,0x58,0x10,FUN_180049cd0,FUN_180044a30);
  plVar1 = param_1 + 0x436;
  *plVar1 = 0;
  param_1[0x437] = 0;
  param_1[0x438] = 0;
  *(int32_t *)(param_1 + 0x439) = 0x1a;
  param_1[0x43a] = 0;
  param_1[0x43b] = 0;
  param_1[0x43c] = 0;
  *(int32_t *)(param_1 + 0x43d) = 0x1a;
  param_1[0x43e] = 0;
  param_1[0x43f] = 0;
  param_1[0x440] = 0;
  *(int32_t *)(param_1 + 0x441) = 3;
  *(int32_t *)(param_1 + 0x2b1) = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  param_1[0x2ce] = 0;
  *(int32_t *)(param_1 + 0x2c2) = 0;
  param_1[0x2b7] = 0;
  puVar2 = (uint64_t *)param_1[0x437];
  uVar3 = ((int64_t)puVar2 - *plVar1) / 0x58;
  if (uVar3 < 0x10) {
    FUN_180241480(plVar1,0x10 - uVar3);
  }
  else {
    for (puVar4 = (uint64_t *)(*plVar1 + 0x580); puVar4 != puVar2; puVar4 = puVar4 + 0xb) {
      (**(code **)*puVar4)(puVar4,0);
    }
    param_1[0x437] = *plVar1 + 0x580;
  }
  FUN_1802412f0(param_1 + 0x43a);
  FUN_1800f6ad0(param_1 + 0x43e,0x10);
  FUN_1802403c0(param_1);
  param_1[0x17] = 0;
  *(int8_t *)((int64_t)param_1 + 0x1614) = 0;
  param_1[0x2b8] = 0xffffffffffffffff;
  param_1[0x2b0] = 0xffffffffffffffff;
  param_1[0x2b9] = 0xffffffffffffffff;
  param_1[0x2ba] = 0xffffffffffffffff;
  param_1[699] = 0xffffffffffffffff;
  param_1[700] = 0xffffffffffffffff;
  param_1[0x2bd] = 0xffffffffffffffff;
  param_1[0x2be] = 0xffffffffffffffff;
  param_1[0x2bf] = 0xffffffffffffffff;
  param_1[0x2c0] = 0xffffffffffffffff;
  param_1[0x2c1] = 0xffffffffffffffff;
  return param_1;
}








