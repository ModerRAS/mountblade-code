#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part021.c - 4 个函数

// 函数: void FUN_18026ad00(int64_t param_1,uint64_t *param_2,int64_t *param_3)
void FUN_18026ad00(int64_t param_1,uint64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  int8_t auVar5 [16];
  byte bVar6;
  int iVar7;
  int iVar8;
  int32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  void *puVar15;
  int64_t lVar16;
  int64_t *plVar17;
  uint uVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  int64_t *plVar22;
  void *puVar23;
  void *puVar24;
  uint64_t *puVar25;
  int64_t *plVar26;
  int8_t auStack_608 [32];
  uint uStack_5e8;
  uint uStack_5e0;
  uint uStack_5d8;
  uint uStack_5d0;
  uint uStack_5c8;
  uint uStack_5c0;
  uint uStack_5b8;
  uint uStack_5b0;
  uint uStack_5a8;
  uint uStack_5a0;
  int64_t **pplStack_598;
  int32_t uStack_590;
  int32_t uStack_58c;
  int64_t *aplStack_588 [2];
  uint64_t uStack_578;
  int32_t uStack_568;
  int32_t uStack_564;
  void *puStack_560;
  int64_t alStack_558 [22];
  void *puStack_4a8;
  void *puStack_4a0;
  int32_t uStack_498;
  int8_t auStack_490 [72];
  int32_t uStack_448;
  int32_t uStack_444;
  void *puStack_440;
  int64_t alStack_438 [21];
  void *puStack_390;
  int64_t alStack_388 [22];
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int8_t auStack_2d0 [184];
  int32_t uStack_218;
  int32_t uStack_214;
  int8_t auStack_210 [184];
  int32_t uStack_158;
  int32_t uStack_154;
  int8_t auStack_150 [184];
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  
  uStack_578 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_608;
  lVar11 = 0;
  uVar4 = param_2[1];
  *(uint64_t *)(param_1 + 0x34) = *param_2;
  *(uint64_t *)(param_1 + 0x3c) = uVar4;
  aplStack_588[0] = param_3;
  SystemCore_ConfigurationHandler0(param_1 + 0x48,param_2 + 8);
  lVar16 = lVar11;
  if (((param_2[4] != 0) || (lVar10 = lVar11, param_2[5] != 0)) &&
     (lVar10 = FUN_180087070(system_system_data_config,&system_data_12f0), lVar10 != 0)) {
    lVar16 = *(int64_t *)(lVar10 + 0xb0);
  }
  FUN_1802b4cf0(param_1,lVar16);
  if ((param_2[6] == 0) && (param_2[7] == 0)) {
LAB_18026b04e:
    if (lVar11 == 0) goto LAB_18026af4d;
    aplStack_588[0] = *(int64_t **)(lVar11 + 0xb0);
  }
  else {
    lVar11 = FUN_180087070(system_system_data_config,&system_data_02e0);
    if (lVar11 != 0) {
      if ((lVar10 == 0) &&
         ((lVar16 = *(int64_t *)(*(int64_t *)(lVar11 + 0xb0) + 0x1e0),
          *(int *)(lVar16 + 0x20) != 0x10 ||
          (iVar7 = strcmp(*(uint64_t *)(lVar16 + 0x18),&system_data_3870), iVar7 != 0)))) {
        lVar11 = 0;
      }
      goto LAB_18026b04e;
    }
    puStack_4a8 = &memory_allocator_3480_ptr;
    puStack_4a0 = auStack_490;
    uStack_498 = 0;
    auStack_490[0] = 0;
    auVar5 = *(int8_t (*) [16])(param_2 + 6);
    uStack_5a8 = auVar5._14_2_ & 0xff;
    uStack_5b0 = auVar5._12_4_ >> 8 & 0xff;
    uStack_5b8 = auVar5._12_4_ & 0xff;
    uStack_5c0 = auVar5._11_4_ & 0xff;
    uStack_5c8 = auVar5._10_4_ & 0xff;
    uStack_5d0 = auVar5._9_4_ & 0xff;
    uStack_5e8 = auVar5._4_4_ & 0xffff;
    uStack_5a0 = (uint)auVar5[0xf];
    uStack_5d8 = (uint)auVar5[8];
    uStack_5e0 = (uint)auVar5._6_2_;
    FUN_180626eb0(&uStack_98,0x28,&processed_var_6672_ptr);
    (**(code **)(puStack_4a8 + 0x18))(&puStack_4a8,&uStack_98,0x26);
    puVar24 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      puVar24 = *(void **)(param_1 + 0x50);
    }
    puVar23 = &system_buffer_ptr;
    if ((void *)aplStack_588[0][1] != (void *)0x0) {
      puVar23 = (void *)aplStack_588[0][1];
    }
    puVar15 = &system_buffer_ptr;
    if (puStack_4a0 != (void *)0x0) {
      puVar15 = puStack_4a0;
    }
    FUN_180627020(&processed_var_7056_ptr,puVar15,puVar23,puVar24);
    puStack_4a8 = &system_state_ptr;
LAB_18026af4d:
    aplStack_588[0] = (int64_t *)0x0;
  }
  pplStack_598 = aplStack_588;
  uVar14 = 0;
  if (aplStack_588[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_588[0] + 0x28))();
  }
  FUN_1802b4c70(param_1,aplStack_588);
  plVar1 = (int64_t *)(param_1 + 0x1018);
  FUN_1800b8cb0(plVar1,(int64_t)(param_2[0x10e] - param_2[0x10d]) >> 4);
  aplStack_588[0] = (int64_t *)((uint64_t)aplStack_588[0] & 0xffffffff00000000);
  lVar16 = param_2[0x10d];
  uVar19 = uVar14;
  if (param_2[0x10e] - lVar16 >> 4 != 0) {
    do {
      plVar17 = (int64_t *)(lVar16 + uVar14 * 0x10);
      if ((*plVar17 == 0) && (iVar7 = (int)uVar19, plVar17[1] == 0)) goto LAB_18026b24e;
      puVar25 = (uint64_t *)(system_system_data_config + 0x78);
      puVar13 = puVar25;
      puVar20 = *(uint64_t **)(system_system_data_config + 0x88);
      if (*(uint64_t **)(system_system_data_config + 0x88) == (uint64_t *)0x0) {
LAB_18026b0c8:
        puVar13 = puVar25;
      }
      else {
        do {
          iVar7 = memcmp(puVar20 + 4,&system_data_02e0);
          if (iVar7 < 0) {
            puVar21 = (uint64_t *)*puVar20;
          }
          else {
            puVar21 = (uint64_t *)puVar20[1];
            puVar13 = puVar20;
          }
          puVar20 = puVar21;
        } while (puVar21 != (uint64_t *)0x0);
        if ((puVar13 == puVar25) || (iVar7 = memcmp(&system_data_02e0,puVar13 + 4), iVar7 < 0))
        goto LAB_18026b0c8;
      }
      if (puVar13 == puVar25) {
LAB_18026b24b:
        iVar7 = (int)aplStack_588[0];
      }
      else {
        puVar20 = (uint64_t *)puVar13[8];
        puVar25 = puVar13 + 6;
        if (puVar20 == (uint64_t *)0x0) goto LAB_18026b24b;
        do {
          iVar7 = memcmp(puVar20 + 4,plVar17);
          if (iVar7 < 0) {
            puVar21 = (uint64_t *)*puVar20;
          }
          else {
            puVar21 = (uint64_t *)puVar20[1];
            puVar25 = puVar20;
          }
          puVar20 = puVar21;
        } while (puVar21 != (uint64_t *)0x0);
        if (puVar25 == puVar13 + 6) goto LAB_18026b24b;
        iVar8 = memcmp(plVar17,puVar25 + 4);
        iVar7 = (int)aplStack_588[0];
        if ((-1 < iVar8) && (lVar16 = puVar25[6], lVar16 != 0)) {
          plVar17 = *(int64_t **)(param_1 + 0x1020);
          if (*(int64_t **)(param_1 + 0x1028) <= plVar17) {
            plVar22 = (int64_t *)*plVar1;
            lVar11 = (int64_t)plVar17 - (int64_t)plVar22 >> 3;
            if (lVar11 == 0) {
              lVar11 = 1;
LAB_18026b1a1:
              plVar12 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 8);
              plVar17 = *(int64_t **)(param_1 + 0x1020);
              plVar22 = (int64_t *)*plVar1;
              plVar26 = plVar12;
            }
            else {
              lVar11 = lVar11 * 2;
              if (lVar11 != 0) goto LAB_18026b1a1;
              plVar12 = (int64_t *)0x0;
              plVar26 = plVar12;
            }
            for (; plVar22 != plVar17; plVar22 = plVar22 + 1) {
              *plVar12 = *plVar22;
              *plVar22 = 0;
              plVar12 = plVar12 + 1;
            }
            plVar17 = *(int64_t **)(lVar16 + 0xb0);
            *plVar12 = (int64_t)plVar17;
            if (plVar17 != (int64_t *)0x0) {
              (**(code **)(*plVar17 + 0x28))();
            }
            pplStack_598 = (int64_t **)(plVar12 + 1);
            plVar17 = *(int64_t **)(param_1 + 0x1020);
            plVar22 = (int64_t *)*plVar1;
            if (plVar22 != plVar17) {
              do {
                if ((int64_t *)*plVar22 != (int64_t *)0x0) {
                  (**(code **)(*(int64_t *)*plVar22 + 0x38))();
                }
                plVar22 = plVar22 + 1;
              } while (plVar22 != plVar17);
              plVar22 = (int64_t *)*plVar1;
            }
            if (plVar22 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plVar22);
            }
            *plVar1 = (int64_t)plVar26;
            *(int64_t ***)(param_1 + 0x1020) = pplStack_598;
            *(int64_t **)(param_1 + 0x1028) = plVar26 + lVar11;
            goto LAB_18026b24b;
          }
          *(int64_t **)(param_1 + 0x1020) = plVar17 + 1;
          plVar22 = *(int64_t **)(lVar16 + 0xb0);
          *plVar17 = (int64_t)plVar22;
          if (plVar22 != (int64_t *)0x0) {
            (**(code **)(*plVar22 + 0x28))();
          }
        }
      }
LAB_18026b24e:
      uVar18 = iVar7 + 1;
      aplStack_588[0] = (int64_t *)CONCAT44(aplStack_588[0]._4_4_,uVar18);
      lVar16 = param_2[0x10d];
      uVar14 = (uint64_t)(int)uVar18;
      uVar19 = (uint64_t)uVar18;
    } while (uVar14 < (uint64_t)(param_2[0x10e] - lVar16 >> 4));
  }
  uVar18 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x68) = uVar18;
  if ((uVar18 >> 0x1d & 1) == 0) {
    *(int32_t *)(param_1 + 0xb8) = *(int32_t *)((int64_t)param_2 + 0xbc);
  }
  else {
    *(int32_t *)(param_1 + 0xb8) = 0x3f800000;
  }
  *(int32_t *)(param_1 + 0x7c) = *(int32_t *)((int64_t)param_2 + 0x7c);
  *(int32_t *)(param_1 + 0x6c) = *(int32_t *)((int64_t)param_2 + 100);
  *(int32_t *)(param_1 + 0x84) = *(int32_t *)((int64_t)param_2 + 0x6c);
  *(uint64_t *)(param_1 + 0x74) = param_2[0xe];
  *(int32_t *)(param_1 + 0x88) = *(int32_t *)((int64_t)param_2 + 0x8c);
  *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_2 + 0x12);
  *(int32_t *)(param_1 + 0x90) = *(int32_t *)((int64_t)param_2 + 0x94);
  *(int32_t *)(param_1 + 0x94) = *(int32_t *)(param_2 + 0x13);
  *(int32_t *)(param_1 + 0x98) = *(int32_t *)((int64_t)param_2 + 0x9c);
  *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_2 + 0x14);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)((int64_t)param_2 + 0xa4);
  *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(param_2 + 0x15);
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)((int64_t)param_2 + 0xac);
  *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_2 + 0x16);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(param_2 + 0xd);
  *(int32_t *)(param_1 + 0xb0) = *(int32_t *)((int64_t)param_2 + 0xb4);
  *(int32_t *)(param_1 + 0xb4) = *(int32_t *)(param_2 + 0x17);
  *(int32_t *)(param_1 + 0xbc) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_1 + 0xc0) = *(int32_t *)((int64_t)param_2 + 0xc4);
  *(int32_t *)(param_1 + 0xc4) = *(int32_t *)(param_2 + 0x19);
  *(int32_t *)(param_1 + 200) = *(int32_t *)((int64_t)param_2 + 0xcc);
  *(int32_t *)(param_1 + 0xf8) = *(int32_t *)(param_2 + 0x29);
  *(int32_t *)(param_1 + 0x108) = *(int32_t *)((int64_t)param_2 + 0x14c);
  *(int32_t *)(param_1 + 0x10c) = *(int32_t *)(param_2 + 0x2a);
  uStack_568 = *(int32_t *)(param_2 + 0x2b);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x15c);
  FUN_18026daf0(&puStack_560,param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x1c8) = uStack_568;
  *(int32_t *)(param_1 + 0x1cc) = uStack_564;
  FUN_18026c2b0(param_1 + 0x1d0,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x32);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x194);
  FUN_18026daf0(&puStack_560,param_2 + 0x33);
  *(int32_t *)(param_1 + 0x280) = uStack_568;
  *(int32_t *)(param_1 + 0x284) = uStack_564;
  FUN_18026c2b0(param_1 + 0x288,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x39);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x1cc);
  FUN_18026daf0(&puStack_560,param_2 + 0x3a);
  *(int32_t *)(param_1 + 0x338) = uStack_568;
  *(int32_t *)(param_1 + 0x33c) = uStack_564;
  FUN_18026c2b0(param_1 + 0x340,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x40);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x204);
  FUN_18026daf0(&puStack_560,param_2 + 0x41);
  *(int32_t *)(param_1 + 0x3f0) = uStack_568;
  *(int32_t *)(param_1 + 0x3f4) = uStack_564;
  FUN_18026c2b0(param_1 + 0x3f8,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x47);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x23c);
  FUN_18026daf0(&puStack_560,param_2 + 0x48);
  *(int32_t *)(param_1 + 0x4a8) = uStack_568;
  *(int32_t *)(param_1 + 0x4ac) = uStack_564;
  FUN_18026c2b0(param_1 + 0x4b0,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_448 = *(int32_t *)(param_2 + 0x4e);
  uStack_444 = *(int32_t *)((int64_t)param_2 + 0x274);
  FUN_18026daf0(&puStack_440,param_2 + 0x4f);
  FUN_18026daf0(&puStack_390,param_2 + 0x55);
  *(int32_t *)(param_1 + 0x560) = uStack_448;
  *(int32_t *)(param_1 + 0x564) = uStack_444;
  FUN_18026c2b0(param_1 + 0x568,&puStack_440);
  FUN_18026c2b0(param_1 + 0x618,&puStack_390);
  pplStack_598 = (int64_t **)&puStack_390;
  puStack_390 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_388);
  pplStack_598 = (int64_t **)alStack_388;
  if (alStack_388[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pplStack_598 = (int64_t **)&puStack_440;
  puStack_440 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_438);
  pplStack_598 = (int64_t **)alStack_438;
  if (alStack_438[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x5b);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x2dc);
  FUN_18026daf0(&puStack_560,param_2 + 0x5c);
  *(int32_t *)(param_1 + 0x6c8) = uStack_568;
  *(int32_t *)(param_1 + 0x6cc) = uStack_564;
  FUN_18026c2b0(param_1 + 0x6d0,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x62);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x314);
  FUN_18026daf0(&puStack_560,param_2 + 99);
  *(int32_t *)(param_1 + 0x780) = uStack_568;
  *(int32_t *)(param_1 + 0x784) = uStack_564;
  FUN_18026c2b0(param_1 + 0x788,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x69);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 0x34c);
  FUN_18026daf0(&puStack_560,param_2 + 0x6a);
  *(int32_t *)(param_1 + 0x838) = uStack_568;
  *(int32_t *)(param_1 + 0x83c) = uStack_564;
  FUN_18026c2b0(param_1 + 0x840,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  puStack_560 = &processed_var_7440_ptr;
  FUN_1802708b0(alStack_558);
  pplStack_598 = (int64_t **)alStack_558;
  if (alStack_558[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uStack_568 = *(int32_t *)(param_2 + 0x70);
  uStack_564 = *(int32_t *)((int64_t)param_2 + 900);
  FUN_18026daf0(&puStack_560,param_2 + 0x71);
  *(int32_t *)(param_1 + 0x8f0) = uStack_568;
  *(int32_t *)(param_1 + 0x8f4) = uStack_564;
  FUN_18026c2b0(param_1 + 0x8f8,&puStack_560);
  pplStack_598 = (int64_t **)&puStack_560;
  FUN_180270920(&puStack_560);
  *(int32_t *)(param_1 + 0xd4) = *(int32_t *)(param_2 + 0x1b);
  uStack_2d8 = *(int32_t *)(param_2 + 0x77);
  uStack_2d4 = *(int32_t *)((int64_t)param_2 + 0x3bc);
  FUN_18026daf0(auStack_2d0,param_2 + 0x78);
  *(int32_t *)(param_1 + 0x9a8) = uStack_2d8;
  *(int32_t *)(param_1 + 0x9ac) = uStack_2d4;
  FUN_18026c2b0(param_1 + 0x9b0,auStack_2d0);
  pplStack_598 = (int64_t **)auStack_2d0;
  FUN_180270920(auStack_2d0);
  uStack_218 = *(int32_t *)(param_2 + 0x7e);
  uStack_214 = *(int32_t *)((int64_t)param_2 + 0x3f4);
  FUN_18026daf0(auStack_210,param_2 + 0x7f);
  *(int32_t *)(param_1 + 0xa60) = uStack_218;
  *(int32_t *)(param_1 + 0xa64) = uStack_214;
  FUN_18026c2b0(param_1 + 0xa68,auStack_210);
  pplStack_598 = (int64_t **)auStack_210;
  FUN_180270920(auStack_210);
  uStack_158 = *(int32_t *)(param_2 + 0x85);
  uStack_154 = *(int32_t *)((int64_t)param_2 + 0x42c);
  FUN_18026daf0(auStack_150,param_2 + 0x86);
  *(int32_t *)(param_1 + 0xb18) = uStack_158;
  *(int32_t *)(param_1 + 0xb1c) = uStack_154;
  FUN_18026c2b0(param_1 + 0xb20,auStack_150);
  pplStack_598 = (int64_t **)auStack_150;
  FUN_180270920(auStack_150);
  *(uint64_t *)(param_1 + 0xbd0) = param_2[0x8c];
  *(uint64_t *)(param_1 + 0xbd8) = param_2[0x8e];
  *(int32_t *)(param_1 + 0xbe8) = *(int32_t *)(param_2 + 0x8f);
  *(int32_t *)(param_1 + 0xbec) = *(int32_t *)((int64_t)param_2 + 0x47c);
  FUN_1802692c0(param_1 + 0xbf0,param_2 + 0x90);
  *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(param_2 + 0x1a);
  *(int32_t *)(param_1 + 0x1070) = *(int32_t *)(param_2 + 0x11f);
  uStack_448 = *(int32_t *)(param_2 + 0x20);
  uStack_444 = *(int32_t *)((int64_t)param_2 + 0x104);
  FUN_18026daf0(&puStack_440,param_2 + 0x21);
  *(int32_t *)(param_1 + 0x110) = uStack_448;
  *(int32_t *)(param_1 + 0x114) = uStack_444;
  FUN_18026c2b0(param_1 + 0x118,&puStack_440);
  pplStack_598 = (int64_t **)&puStack_440;
  FUN_180270920(&puStack_440);
  uVar4 = *(uint64_t *)((int64_t)param_2 + 0xf4);
  *(uint64_t *)(param_1 + 0xe8) = *(uint64_t *)((int64_t)param_2 + 0xec);
  *(uint64_t *)(param_1 + 0xf0) = uVar4;
  *(float *)(param_1 + 0xd8) = 1.0 / *(float *)((int64_t)param_2 + 0xdc);
  *(float *)(param_1 + 0xdc) = 1.0 / *(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0xe0) = 1.0 / *(float *)((int64_t)param_2 + 0xe4);
  *(int32_t *)(param_1 + 0xd0) = *(int32_t *)((int64_t)param_2 + 0xd4);
  *(int8_t *)(param_1 + 0x80) = *(int8_t *)(param_2 + 0x10);
  *(int8_t *)(param_1 + 0x81) = *(int8_t *)((int64_t)param_2 + 0x84);
  iVar7 = *(int *)((int64_t)param_2 + 0x47c);
  if (iVar7 == 0) {
    uVar4 = param_2[0xfd];
    *(uint64_t *)(param_1 + 0xf70) = param_2[0xfc];
    *(uint64_t *)(param_1 + 0xf78) = uVar4;
    *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfb;
    goto LAB_18026be4d;
  }
  if (iVar7 == 1) {
    uVar9 = *(int32_t *)(param_2 + 0xfe);
    *(int32_t *)(param_1 + 0xf70) = 0;
    *(int32_t *)(param_1 + 0xf74) = 0;
    *(int32_t *)(param_1 + 0xf78) = 0;
    *(int32_t *)(param_1 + 0xf7c) = uVar9;
    uStack_58c = *(int32_t *)((int64_t)param_2 + 0x7f4);
    *(int32_t *)(param_1 + 0xf80) = 0;
    *(int32_t *)(param_1 + 0xf84) = 0;
    *(int32_t *)(param_1 + 0xf88) = 0;
    *(int32_t *)(param_1 + 0xf8c) = uStack_58c;
    if (*(float *)((int64_t)param_2 + 0x7f4) == 0.0) {
LAB_18026be42:
      bVar6 = 0;
    }
    else {
      bVar6 = 4;
    }
  }
  else {
    if (iVar7 != 2) goto LAB_18026be4d;
    uVar9 = *(int32_t *)(param_2 + 0xff);
    *(int32_t *)(param_1 + 0xf70) = 0;
    *(int32_t *)(param_1 + 0xf74) = 0;
    *(int32_t *)(param_1 + 0xf78) = 0;
    *(int32_t *)(param_1 + 0xf7c) = uVar9;
    uStack_58c = *(int32_t *)((int64_t)param_2 + 0x7fc);
    *(int32_t *)(param_1 + 0xf80) = 0;
    *(int32_t *)(param_1 + 0xf84) = 0;
    *(int32_t *)(param_1 + 0xf88) = 0;
    *(int32_t *)(param_1 + 0xf8c) = uStack_58c;
    if (*(float *)((int64_t)param_2 + 0x7fc) == 0.0) goto LAB_18026be42;
    bVar6 = 4;
  }
  pplStack_598 = (int64_t **)0x0;
  uStack_590 = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfb;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | bVar6;
LAB_18026be4d:
  uVar4 = param_2[0x8d];
  *(uint64_t *)(param_1 + 0xbe0) = uVar4;
  if (((float)((uint64_t)uVar4 >> 0x20) != 0.0) || (*(float *)(param_1 + 0xbe0) != 0.0)) {
    *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 2;
  }
  uVar4 = param_2[0x105];
  *(uint64_t *)(param_1 + 0xf90) = param_2[0x104];
  *(uint64_t *)(param_1 + 0xf98) = uVar4;
  uVar4 = param_2[0x107];
  *(uint64_t *)(param_1 + 4000) = param_2[0x106];
  *(uint64_t *)(param_1 + 0xfa8) = uVar4;
  uVar4 = param_2[0x109];
  *(uint64_t *)(param_1 + 0xfb0) = param_2[0x108];
  *(uint64_t *)(param_1 + 0xfb8) = uVar4;
  *(int32_t *)(param_1 + 0xfc0) = *(int32_t *)(param_2 + 0x10a);
  *(uint64_t *)(param_1 + 0xfc4) = *(uint64_t *)((int64_t)param_2 + 0x854);
  *(int32_t *)(param_1 + 0xfcc) = *(int32_t *)((int64_t)param_2 + 0x85c);
  *(int32_t *)(param_1 + 0xfd0) = *(int32_t *)(param_2 + 0x10c);
  *(uint64_t *)(param_1 + 0x1040) = param_2[0x111];
  *(uint64_t *)(param_1 + 0x1048) = param_2[0x112];
  *(uint64_t *)(param_1 + 0x1050) = param_2[0x113];
  *(uint64_t *)(param_1 + 0x1058) = param_2[0x114];
  *(int32_t *)(param_1 + 0x1060) = *(int32_t *)(param_2 + 0x115);
  *(int32_t *)(param_1 + 0x1064) = *(int32_t *)((int64_t)param_2 + 0x8ac);
  *(int32_t *)(param_1 + 0x1074) = *(int32_t *)(param_2 + 0x116);
  puVar13 = (uint64_t *)FUN_180264090();
  uVar4 = *puVar13;
  *puVar13 = 0;
  pplStack_598 = *(int64_t ***)(param_1 + 0x100);
  *(uint64_t *)(param_1 + 0x100) = uVar4;
  if (pplStack_598 != (int64_t **)0x0) {
    (**(code **)((int64_t)*pplStack_598 + 0x38))();
  }
  if (aplStack_588[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_588[0] + 0x38))();
  }
  *(uint64_t *)(param_1 + 0xfd4) = 0x3f800000;
  *(uint64_t *)(param_1 + 0xfdc) = 0;
  *(uint64_t *)(param_1 + 0xfe4) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0xfec) = 0;
  *(uint64_t *)(param_1 + 0xff4) = 0;
  *(uint64_t *)(param_1 + 0xffc) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x1004) = 0;
  *(uint64_t *)(param_1 + 0x100c) = 0x3f80000000000000;
  fVar2 = *(float *)(param_2 + 0x102);
  fVar3 = *(float *)((int64_t)param_2 + 0x814);
  uStack_98 = 0x3f800000;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0x3f800000;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_70 = 0x3f800000;
  FUN_180085c10(&uStack_98,*(float *)(param_2 + 0x103) * 0.017453292);
  FUN_180085970(&uStack_98,fVar2 * 0.017453292);
  FUN_180085ac0(&uStack_98,fVar3 * 0.017453292);
  *(uint64_t *)(param_1 + 0xfd4) = uStack_98;
  *(uint64_t *)(param_1 + 0xfdc) = uStack_90;
  *(int32_t *)(param_1 + 0xfe4) = uStack_88;
  *(int32_t *)(param_1 + 0xfe8) = uStack_84;
  *(int32_t *)(param_1 + 0xfec) = uStack_80;
  *(int32_t *)(param_1 + 0xff0) = uStack_7c;
  *(uint64_t *)(param_1 + 0xff4) = uStack_78;
  *(uint64_t *)(param_1 + 0xffc) = uStack_70;
  uVar4 = param_2[0x101];
  *(uint64_t *)(param_1 + 0x1004) = param_2[0x100];
  *(uint64_t *)(param_1 + 0x100c) = uVar4;
  *(int32_t *)(param_1 + 0xfe0) = 0;
  *(int32_t *)(param_1 + 0xff0) = 0;
  *(int32_t *)(param_1 + 0x1000) = 0;
  *(int32_t *)(param_1 + 0x1010) = 0x3f800000;
  if (*(int *)(param_2 + 0x119) == 0) {
    *(int32_t *)(param_1 + 0x1068) = 0xffffffff;
  }
  else {
    uVar9 = (**(code **)(*system_system_data_config + 0xd0))(system_system_data_config,param_2 + 0x117);
    *(int32_t *)(param_1 + 0x1068) = uVar9;
  }
  if (*(int *)(param_2 + 0x11d) == 0) {
    *(int32_t *)(param_1 + 0x106c) = 0xffffffff;
  }
  else {
    uVar9 = (**(code **)(*system_system_data_config + 0xd0))(system_system_data_config,param_2 + 0x11b);
    *(int32_t *)(param_1 + 0x106c) = uVar9;
  }
  FUN_1802b4e70(param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_68 ^ (uint64_t)auStack_608);
}






// 函数: void FUN_18026c170(int64_t param_1)
void FUN_18026c170(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  *(void **)(param_1 + 8) = &processed_var_7440_ptr;
  FUN_1802708b0((uint64_t *)(param_1 + 0x10));
  puVar2 = *(uint64_t **)(param_1 + 0x10);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_18026c1c0(int64_t param_1)
void FUN_18026c1c0(int64_t param_1)

{
  *(void **)(param_1 + 0xb8) = &processed_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0xc0));
  if (*(int64_t *)(param_1 + 0xc0) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(void **)(param_1 + 8) = &processed_var_7440_ptr;
  FUN_1802708b0((int64_t *)(param_1 + 0x10));
  if (*(int64_t *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}






// 函数: void FUN_18026c260(uint64_t *param_1)
void FUN_18026c260(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  *param_1 = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 1);
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



int64_t FUN_18026c2b0(int64_t param_1,int64_t param_2)

{
  FUN_180269810();
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_2 + 0x28);
  *(int32_t *)(param_1 + 0x2c) = *(int32_t *)(param_2 + 0x2c);
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(param_2 + 0x30);
  *(int32_t *)(param_1 + 0x34) = *(int32_t *)(param_2 + 0x34);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 0x38);
  *(int32_t *)(param_1 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
  *(int32_t *)(param_1 + 0x40) = *(int32_t *)(param_2 + 0x40);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_2 + 0x44);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_2 + 0x48);
  *(int32_t *)(param_1 + 0x4c) = *(int32_t *)(param_2 + 0x4c);
  *(int32_t *)(param_1 + 0x50) = *(int32_t *)(param_2 + 0x50);
  *(int32_t *)(param_1 + 0x54) = *(int32_t *)(param_2 + 0x54);
  *(int32_t *)(param_1 + 0x58) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x60);
  *(int32_t *)(param_1 + 100) = *(int32_t *)(param_2 + 100);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0x68);
  *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(param_2 + 0x70);
  *(int32_t *)(param_1 + 0x74) = *(int32_t *)(param_2 + 0x74);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_2 + 0x7c);
  *(int32_t *)(param_1 + 0x80) = *(int32_t *)(param_2 + 0x80);
  *(int32_t *)(param_1 + 0x84) = *(int32_t *)(param_2 + 0x84);
  *(int32_t *)(param_1 + 0x88) = *(int32_t *)(param_2 + 0x88);
  *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_2 + 0x8c);
  *(int32_t *)(param_1 + 0x90) = *(int32_t *)(param_2 + 0x90);
  *(int32_t *)(param_1 + 0x94) = *(int32_t *)(param_2 + 0x94);
  *(int32_t *)(param_1 + 0x98) = *(int32_t *)(param_2 + 0x98);
  *(int32_t *)(param_1 + 0x9c) = *(int32_t *)(param_2 + 0x9c);
  *(int32_t *)(param_1 + 0xa0) = *(int32_t *)(param_2 + 0xa0);
  *(int32_t *)(param_1 + 0xa4) = *(int32_t *)(param_2 + 0xa4);
  *(int32_t *)(param_1 + 0xa8) = *(int32_t *)(param_2 + 0xa8);
  *(int32_t *)(param_1 + 0xac) = *(int32_t *)(param_2 + 0xac);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




