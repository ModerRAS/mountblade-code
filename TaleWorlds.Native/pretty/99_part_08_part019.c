#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part019.c - 9 个函数

// 函数: void FUN_1804f20b0(int64_t param_1,int32_t param_2)
void FUN_1804f20b0(int64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  char cVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int iVar14;
  int32_t *puStackX_8;
  int32_t auStackX_10 [2];
  int32_t **ppuStackX_18;
  int64_t *plStackX_20;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t *puStack_80;
  void *puStack_78;
  code *pcStack_70;
  
  uVar13 = 0;
  auStackX_10[0] = param_2;
  FUN_1804f9390();
  puStackX_8 = &uStack_88;
  puStack_80 = auStackX_10;
  puStack_78 = &system_handler3_ptr;
  pcStack_70 = FUN_180502820;
  uStack_98 = (int32_t)param_1;
  uStack_94 = (int32_t)((uint64_t)param_1 >> 0x20);
  uStack_88 = uStack_98;
  uStack_84 = uStack_94;
  uVar8 = 0xffffffffffffffff;
  FUN_18015b810(&uStack_88,0,
                *(int64_t *)(param_1 + 0x87b370) - *(int64_t *)(param_1 + 0x87b368) >> 3,1,
                0xffffffffffffffff,&uStack_88);
  iVar14 = *(int *)(param_1 + 0x87b318);
  uVar9 = uVar13;
  if (0 < iVar14) {
    do {
      if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uVar9 >> 4) * 8) + 8 +
                  (uint64_t)((uint)uVar9 & 0xf) * 0xbe0) != 0) break;
      uVar7 = (uint)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
    } while ((int)uVar7 < iVar14);
  }
  if ((int)uVar9 < iVar14) {
    do {
      cVar2 = FUN_180583b80((uint64_t)((uint)uVar9 & 0xf) * 0xbe0 +
                            *(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uVar9 >> 4) * 8),
                            auStackX_10[0]);
      if (cVar2 != '\0') {
        FUN_1804e9160(param_1,uVar9);
      }
      uVar7 = (uint)uVar9 + 1;
      uVar9 = (uint64_t)uVar7;
      iVar14 = *(int *)(param_1 + 0x87b318);
      if (iVar14 <= (int)uVar7) break;
      do {
        if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uVar9 >> 4) * 8) + 8 +
                    (uint64_t)((uint)uVar9 & 0xf) * 0xbe0) != 0) break;
        uVar7 = (uint)uVar9 + 1;
        uVar9 = (uint64_t)uVar7;
      } while ((int)uVar7 < iVar14);
    } while ((int)uVar9 < iVar14);
  }
  FUN_1804f9390(param_1);
  lVar6 = *(int64_t *)(param_1 + 0x87b2f8);
  lVar5 = *(int64_t *)(param_1 + 0x87b300) - lVar6;
  lVar5 = SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816(lVar5),8) + lVar5;
  uVar9 = uVar13;
  uVar10 = uVar13;
  uVar12 = uVar13;
  if (lVar5 >> 0xb != lVar5 >> 0x3f) {
    do {
      FUN_180583b80(uVar12 * 0xbe0 + lVar6,auStackX_10[0]);
      lVar6 = *(int64_t *)(param_1 + 0x87b2f8);
      uVar12 = uVar10;
      if ((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(uVar9 + 0x298 + lVar6) * 8) -
                 *(int64_t *)(uVar9 + 0x290 + lVar6)) * 1e-05 <= 1.0) {
        uVar12 = uVar8 & 0xffffffff;
      }
      uVar8 = uVar12;
      uVar7 = (int)uVar10 + 1;
      iVar14 = (int)uVar8;
      lVar5 = *(int64_t *)(param_1 + 0x87b300) - lVar6;
      lVar5 = SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816(lVar5),8) + lVar5;
      uVar9 = uVar9 + 0xbe0;
      uVar10 = (uint64_t)uVar7;
      uVar12 = (int64_t)(int)uVar7;
    } while ((uint64_t)(int64_t)(int)uVar7 < (uint64_t)((lVar5 >> 0xb) - (lVar5 >> 0x3f)));
    if (-1 < iVar14) {
      uVar9 = (uint64_t)(iVar14 + 1);
      do {
        uVar1 = *(uint64_t *)(param_1 + 0x18);
        ppuStackX_18 = &puStackX_8;
        plVar3 = (int64_t *)FUN_1805078f0(*(int64_t *)(param_1 + 0x87b2f8) + uVar13,&puStackX_8);
        plStackX_20 = plVar3;
        FUN_180198980(uVar1,*plVar3);
        if ((int64_t *)*plVar3 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*plVar3 + 0x38))();
        }
        uVar13 = uVar13 + 0xbe0;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      lVar6 = *(int64_t *)(param_1 + 0x87b2f8);
      lVar5 = ((int64_t)iVar14 + 1) * 0xbe0 + lVar6;
      if (lVar6 != lVar5) {
        puVar4 = (uint64_t *)FUN_180504b50(lVar5,*(uint64_t *)(param_1 + 0x87b300),lVar6);
        puVar11 = *(uint64_t **)(param_1 + 0x87b300);
        if (puVar4 != puVar11) {
          do {
            (**(code **)*puVar4)(puVar4,0);
            puVar4 = puVar4 + 0x17c;
          } while (puVar4 != puVar11);
          puVar11 = *(uint64_t **)(param_1 + 0x87b300);
        }
        lVar6 = SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816(lVar5 - lVar6),8) + (lVar5 - lVar6);
        *(uint64_t **)(param_1 + 0x87b300) = puVar11 + ((lVar6 >> 0xb) - (lVar6 >> 0x3f)) * -0x17c
        ;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1804f2420(uint64_t *param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  uVar7 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[2] = &ui_system_data_1920_ptr;
  param_1[3] = 0;
  FUN_1804d9b70(param_1 + 4);
  FUN_1804ca350(param_1 + 0x5a8,0x7f80);
  *param_1 = &processed_var_5632_ptr;
  param_1[2] = &processed_var_5736_ptr;
  DataStructureManager(param_1 + 0x614,0xa60,0x7f8,FUN_180522fd0,FUN_180523570);
  puVar3 = param_1 + 0x616;
  lVar6 = 0x7f8;
  do {
    *(int32_t *)puVar3 = 0xffffffff;
    puVar3 = puVar3 + 0x14c;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar3 = param_1 + 0xa5bb4;
  for (lVar6 = 0x7f8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(int16_t *)puVar3 = 0xffff;
    puVar3 = (uint64_t *)((int64_t)puVar3 + 2);
  }
  param_1[0xa5db2] = 0;
  puVar3 = param_1 + 0xa5db4;
  lVar6 = 0x7f8;
  do {
    FUN_1805077e0(puVar3);
    puVar3 = puVar3 + 0x40;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar4 = (int32_t *)((int64_t)param_1 + 0x52edbc);
  lVar6 = 0x7f8;
  do {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 0x80;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar3 = param_1 + 0xc5bb4;
  for (lVar6 = 0x7f8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(int16_t *)puVar3 = 0xffff;
    puVar3 = (uint64_t *)((int64_t)puVar3 + 2);
  }
  param_1[0xc5db2] = 0;
  FUN_1804fc360(param_1 + 0xc5db3);
  FUN_1804fc360(param_1 + 0xe9d72);
  param_1[0x10e529] = 0;
  param_1[0x10e52a] = 0;
  param_1[0x10e52b] = 0;
  *(int32_t *)(param_1 + 0x10e52c) = 3;
  *(int8_t *)((int64_t)param_1 + 0x87296c) = 1;
  *(int32_t *)(param_1 + 0x10e52d) = 0;
  param_1[0x10ed26] = 0;
  param_1[0x10ed27] = 0;
  param_1[0x10ed28] = 0;
  *(int32_t *)(param_1 + 0x10ed29) = 3;
  *(int8_t *)((int64_t)param_1 + 0x876954) = 1;
  *(int32_t *)(param_1 + 0x10ed2a) = 0;
  param_1[0x10f523] = 0;
  param_1[0x10f524] = 0;
  param_1[0x10f525] = 0;
  *(int32_t *)(param_1 + 0x10f526) = 3;
  *(int8_t *)((int64_t)param_1 + 0x87a93c) = 1;
  *(int32_t *)(param_1 + 0x10f527) = 0;
  param_1[0x10f529] = 0;
  _Mtx_init_in_situ(param_1 + 0x10f52a,2);
  _Mtx_init_in_situ(param_1 + 0x10f534,0x102);
  LOCK();
  *(int32_t *)(param_1 + 0x10f53e) = 0;
  UNLOCK();
  uVar5 = uVar7;
  do {
    iVar8 = (int)uVar5;
    param_1[(int64_t)iVar8 + 0x10f53f] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + (int64_t)iVar8 + 0x87adf0) = 1;
    UNLOCK();
    uVar5 = (uint64_t)(iVar8 + 1U);
  } while (iVar8 + 1U < 0x7f);
  LOCK();
  *(int32_t *)(param_1 + 0x10f5ce) = 0;
  UNLOCK();
  uVar5 = uVar7;
  do {
    iVar8 = (int)uVar5;
    param_1[(int64_t)iVar8 + 0x10f5cf] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + (int64_t)iVar8 + 0x87b270) = 1;
    UNLOCK();
    uVar5 = (uint64_t)(iVar8 + 1U);
  } while (iVar8 + 1U < 0x7f);
  param_1[0x10f65f] = 0;
  param_1[0x10f660] = 0;
  param_1[0x10f661] = 0;
  *(int32_t *)(param_1 + 0x10f662) = 3;
  param_1[0x10f664] = 0;
  param_1[0x10f665] = 0;
  param_1[0x10f666] = 0;
  *(int32_t *)(param_1 + 0x10f667) = 3;
  param_1[0x10f668] = 0;
  param_1[0x10f669] = 0;
  param_1[0x10f66a] = 0;
  *(int32_t *)(param_1 + 0x10f66b) = 3;
  param_1[0x10f663] = 0;
  *(int32_t *)(param_1 + 0x10f66c) = 0;
  param_1[0x10f66d] = 0;
  param_1[0x10f66e] = 0;
  param_1[0x10f66f] = 0;
  *(int32_t *)(param_1 + 0x10f670) = 3;
  param_1[0x10f672] = 0;
  param_1[0x10f673] = 0;
  param_1[0x10f674] = 0;
  *(int32_t *)(param_1 + 0x10f675) = 3;
  param_1[0x10f677] = 0;
  *(int32_t *)(param_1 + 0x10f678) = 0;
  param_1[0x10f679] = 0;
  param_1[0x10f67c] = 0;
  puVar3 = param_1 + 0x10f682;
  lVar6 = 0x20;
  lVar11 = 0x20;
  puVar10 = puVar3;
  do {
    func_0x000180059bb0(puVar10);
    puVar10 = puVar10 + 2;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *(uint64_t *)((int64_t)param_1 + 0x87b614) = 0;
  *(int32_t *)(param_1 + 0x10f6c2) = 0;
  param_1[0x10f67e] = 0;
  param_1[0x10f67f] = 0x20;
  param_1[0x10f680] = puVar3;
  do {
    *(int32_t *)puVar3 = 0;
    puVar3 = puVar3 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[0x10f681] = 0;
  param_1[0x10f67d] = param_1 + 0x10f67f;
  param_1[0x10f67b] = 0x15;
  lVar6 = FUN_180059bc0();
  param_1[0x10f67a] = lVar6;
  if (lVar6 == 0) {
    param_1[0x10f67b] = 0;
    uVar5 = uVar7;
  }
  else {
    uVar5 = param_1[0x10f67b];
  }
  uVar9 = uVar7;
  if (uVar5 != 0) {
    do {
      *(int8_t *)(param_1[0x10f67a] + 0x141 + uVar7) = 0;
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 + 0x148;
    } while (uVar9 < (uint64_t)param_1[0x10f67b]);
  }
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(param_1 + 0x10f6cd,2);
  param_1[0x10f6d7] = 0;
  param_1[0x10f6d8] = 0;
  param_1[0x10f6d9] = 0;
  *(int32_t *)(param_1 + 0x10f6da) = 3;
  param_1[0x10f6db] = 0;
  param_1[0x10f6dc] = 0;
  param_1[0x10f6dd] = 0;
  *(int32_t *)(param_1 + 0x10f6de) = 3;
  *(int32_t *)(param_1 + 0x10f6e1) = 1;
  param_1[0x10f6e0] = system_system_data_config;
  param_1[0x10f6e6] = &system_state_ptr;
  param_1[0x10f6e7] = 0;
  *(int32_t *)(param_1 + 0x10f6e8) = 0;
  param_1[0x10f6e6] = &system_data_buffer_ptr;
  param_1[0x10f6e9] = 0;
  param_1[0x10f6e7] = 0;
  *(int32_t *)(param_1 + 0x10f6e8) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x87b754) = 0;
  param_1[0x10f6ed] = 0;
  *(int32_t *)(param_1 + 0x10f6ee) = 0;
  FUN_1805b30a0(param_1 + 0x10f6ed,8);
  *(int32_t *)(param_1 + 0x10f6ec) = 0;
  *(int32_t *)(param_1 + 0x10f6f0) = 1;
  uVar2 = system_system_data_config;
  param_1[0x10f6ef] = system_system_data_config;
  *(int32_t *)(param_1 + 0x10f6f2) = 1;
  param_1[0x10f6f1] = uVar2;
  *(int32_t *)(param_1 + 0x10f6f4) = 1;
  param_1[0x10f6f3] = uVar2;
  FUN_180507290((int64_t)param_1 + 0x87b7ac);
  param_1[0x10f7a1] = 0;
  param_1[0x10f7a2] = 0;
  param_1[0x10f7a3] = 0;
  *(int32_t *)(param_1 + 0x10f7a4) = 3;
  param_1[0x10f7a6] = 0;
  param_1[0x10f7a7] = 0;
  param_1[0x10f7a8] = 0;
  *(int32_t *)(param_1 + 0x10f7a9) = 3;
  param_1[0x10f7aa] = 0;
  param_1[0x10f7ab] = 0;
  param_1[0x10f7ac] = 0;
  *(int32_t *)(param_1 + 0x10f7ad) = 3;
  param_1[0x10f7a5] = 0;
  *(int32_t *)(param_1 + 0x10f7ae) = 0;
  FUN_180507180(param_1 + 0x10f7b0);
  puVar3 = param_1 + 0x10fa44;
  lVar6 = 0x400;
  lVar11 = 0x400;
  do {
    FUN_1805077e0(puVar3);
    puVar3 = puVar3 + 0x40;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  param_1[0x11fa44] = 0;
  puVar3 = param_1 + 0x11fa45;
  do {
    func_0x0001804fc480(puVar3);
    puVar3 = puVar3 + 0x48;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[0x131a45] = 0;
  param_1[0x131a46] = 0;
  param_1[0x131a49] = 0;
  param_1[0x131a47] = 0;
  *(int32_t *)(param_1 + 0x131a4c) = 1;
  uVar2 = system_system_data_config;
  param_1[0x131a4b] = system_system_data_config;
  *(int32_t *)(param_1 + 0x131a4e) = 1;
  param_1[0x131a4d] = uVar2;
  *(int32_t *)(param_1 + 0x131a58) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x98d2c4) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x98d2cc) = 3;
  param_1[0x131a56] = 1;
  param_1[0x131a55] = &system_data_0000;
  param_1[0x131a57] = 0;
  *(int32_t *)(param_1 + 0x131a59) = 0;
  FUN_1804f2db0(param_1 + 0x131a5b);
  param_1[0x131b1b] = 0;
  param_1[0x131b1c] = 0;
  param_1[0x131b1d] = 0;
  *(int32_t *)(param_1 + 0x131b1e) = 3;
  param_1[0x131b1f] = 0;
  param_1[0x131b20] = 0;
  param_1[0x131b21] = 0;
  *(int32_t *)(param_1 + 0x131b22) = 3;
  *(int32_t *)(param_1 + 0x131b25) = 0;
  param_1[0x131b32] = &system_state_ptr;
  param_1[0x131b33] = 0;
  *(int32_t *)(param_1 + 0x131b34) = 0;
  param_1[0x131b32] = &system_data_buffer_ptr;
  param_1[0x131b35] = 0;
  param_1[0x131b33] = 0;
  *(int32_t *)(param_1 + 0x131b34) = 0;
  param_1[0x131b36] = &system_state_ptr;
  param_1[0x131b37] = 0;
  *(int32_t *)(param_1 + 0x131b38) = 0;
  param_1[0x131b36] = &system_data_buffer_ptr;
  param_1[0x131b39] = 0;
  param_1[0x131b37] = 0;
  *(int32_t *)(param_1 + 0x131b38) = 0;
  param_1[0x10f6df] = 0;
  plVar1 = (int64_t *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x10fa42] = 0;
  param_1[0x10fa43] = 0;
  *(int8_t *)(param_1 + 0x131a51) = 1;
  *(int8_t *)((int64_t)param_1 + 0x98d92c) = 1;
  *(int32_t *)((int64_t)param_1 + 0x98d934) = 0x3f800000;
  *(int32_t *)(param_1 + 0x131b27) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x98d93c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x131b28) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x87b72c) = 0xffffffff;
  *(int8_t *)(param_1 + 0x10f6e3) = 0;
  *(int32_t *)(param_1 + 0x10f6f5) = 0;
  param_1[0x131b23] = 0;
  param_1[0x131b24] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x98d94c) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x98d954) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x98d95c) = 0x3f80000000000000;
  *(uint64_t *)((int64_t)param_1 + 0x98d964) = 0;
  *(int32_t *)((int64_t)param_1 + 0x98d96c) = 0;
  *(int32_t *)(param_1 + 0x131b2e) = 0;
  *(int32_t *)((int64_t)param_1 + 0x98d974) = 0x3f800000;
  *(int32_t *)(param_1 + 0x131b2f) = 0;
  *(int32_t *)((int64_t)param_1 + 0x98d97c) = 0;
  *(int32_t *)(param_1 + 0x131b30) = 0;
  *(int32_t *)((int64_t)param_1 + 0x98d984) = 0;
  *(int32_t *)(param_1 + 0x131b31) = 0x3f800000;
  param_1[0x131a4a] = 0;
  *(int32_t *)((int64_t)param_1 + 0x98d944) = 0;
  *(int32_t *)((int64_t)param_1 + 0x98d9dc) = 0x3c888889;
  FUN_1804f3510(param_1);
  return param_1;
}



uint64_t FUN_1804f2c40(uint64_t param_1,uint64_t param_2)

{
  FUN_1804f30c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x98d9e0);
  }
  return param_1;
}






// 函数: void FUN_1804f2c80(void)
void FUN_1804f2c80(void)

{
  _Mtx_destroy_in_situ();
  _Mtx_destroy_in_situ();
  return;
}






// 函数: void FUN_1804f2cc0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804f2cc0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (uint64_t *)param_1[1];
  for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x17c) {
    (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






// 函数: void FUN_1804f2ce0(int64_t param_1)
void FUN_1804f2ce0(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 8) = 0;
  return;
}






// 函数: void FUN_1804f2d20(uint64_t *param_1)
void FUN_1804f2d20(uint64_t *param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_180507120(param_1 + 0x171);
  FUN_180507120(param_1 + 0x51);
  FUN_1805070c0(param_1 + 0xc);
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_180507030();
  puVar2 = (uint64_t *)*param_1;
  if (puVar2 != (uint64_t *)0x0) {
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
          FUN_18064d630();
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
  return;
}



uint64_t *
FUN_1804f2db0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar2 = 0;
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  puVar6 = param_1 + 0xb;
  lVar7 = 0x20;
  lVar8 = 0x20;
  puVar5 = puVar6;
  do {
    func_0x000180059bb0(puVar5);
    puVar5 = puVar5 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(uint64_t *)((int64_t)param_1 + 0x25c) = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  param_1[7] = 0;
  param_1[8] = 0x20;
  param_1[9] = puVar6;
  lVar8 = 0x20;
  do {
    *(int32_t *)puVar6 = 0;
    puVar6 = puVar6 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_1[10] = 0;
  param_1[6] = param_1 + 8;
  param_1[4] = 0x15;
  lVar8 = FUN_1804ff630();
  param_1[3] = lVar8;
  if (lVar8 == 0) {
    param_1[4] = 0;
    uVar1 = uVar2;
  }
  else {
    uVar1 = param_1[4];
  }
  uVar4 = uVar2;
  uVar3 = uVar2;
  if (uVar1 != 0) {
    do {
      *(int8_t *)(param_1[3] + 0x2041 + uVar4) = 0;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x2048;
    } while (uVar3 < (uint64_t)param_1[4]);
  }
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(param_1 + 0x56,2,param_3,param_4,uVar9);
  param_1[0x60] = 0;
  *(int32_t *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  puVar6 = param_1 + 0x6b;
  lVar8 = 0x20;
  puVar5 = puVar6;
  do {
    func_0x000180059bb0(puVar5);
    puVar5 = puVar5 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(uint64_t *)((int64_t)param_1 + 0x55c) = 0;
  *(int32_t *)(param_1 + 0xab) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0x20;
  param_1[0x69] = puVar6;
  do {
    *(int32_t *)puVar6 = 0;
    puVar6 = puVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  param_1[0x6a] = 0;
  param_1[0x66] = param_1 + 0x68;
  param_1[100] = 0x15;
  lVar7 = FUN_180059bc0();
  param_1[99] = lVar7;
  if (lVar7 == 0) {
    param_1[100] = 0;
    uVar1 = uVar2;
  }
  else {
    uVar1 = param_1[100];
  }
  uVar4 = uVar2;
  if (uVar1 != 0) {
    do {
      *(int8_t *)(uVar2 + 0x141 + param_1[99]) = 0;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 0x148;
    } while (uVar4 < (uint64_t)param_1[100]);
  }
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(param_1 + 0xb6,2);
  return param_1;
}






// 函数: void FUN_1804f2fb0(int64_t *param_1)
void FUN_1804f2fb0(int64_t *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  FUN_180059ee0(param_1 + 0x60);
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar3);
  }
  if ((param_1[6] != 0) && (*(int64_t *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x2041);
    lVar4 = *(int64_t *)(lVar4 + 0x2038);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (uint64_t)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((int64_t)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}






// 函数: void FUN_1804f3050(int64_t *param_1)
void FUN_1804f3050(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x70) {
    FUN_180502300(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






// 函数: void FUN_1804f3070(int64_t *param_1)
void FUN_1804f3070(int64_t *param_1)

{
  int *piVar1;
  char *pcVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  puVar3 = (uint64_t *)*param_1;
  if (puVar3 != (uint64_t *)0x0) {
    if ((uint64_t *)puVar3[3] != (uint64_t *)0x0) {
      *(uint64_t *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(puVar3);
  }
  if ((param_1[6] != 0) && (*(int64_t *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x2041);
    lVar4 = *(int64_t *)(lVar4 + 0x2038);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  puVar3 = (uint64_t *)param_1[3];
  if (puVar3 == (uint64_t *)0x0) {
    return;
  }
  uVar5 = (uint64_t)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((int64_t)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f30c0(uint64_t *param_1)
void FUN_1804f30c0(uint64_t *param_1)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  *param_1 = &processed_var_5632_ptr;
  param_1[2] = &processed_var_5736_ptr;
  FUN_1804f3510();
  uVar1 = 0;
  lVar4 = param_1[0x11];
  uVar3 = uVar1;
  if ((param_1[0x12] - lVar4) / 0x28 != 0) {
    do {
      if (*(int64_t *)(uVar1 + lVar4) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar1 + param_1[0x11]) = 0;
      if (*(int64_t *)(uVar1 + 0x10 + param_1[0x11]) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar1 + 0x10 + param_1[0x11]) = 0;
      if (*(int64_t *)(uVar1 + 0x18 + param_1[0x11]) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(uVar1 + 0x18 + param_1[0x11]) = 0;
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 0x28;
      lVar4 = param_1[0x11];
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 < (uint64_t)((param_1[0x12] - lVar4) / 0x28));
  }
  param_1[0x12] = lVar4;
  param_1[0x131b36] = &system_data_buffer_ptr;
  if (param_1[0x131b37] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x131b37] = 0;
  *(int32_t *)(param_1 + 0x131b39) = 0;
  param_1[0x131b36] = &system_state_ptr;
  param_1[0x131b32] = &system_data_buffer_ptr;
  if (param_1[0x131b33] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x131b33] = 0;
  *(int32_t *)(param_1 + 0x131b35) = 0;
  param_1[0x131b32] = &system_state_ptr;
  if ((*(int *)(param_1 + 0x131b25) != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x18))();
  }
  FUN_1804fd860();
  if (param_1[0x131b1b] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_1804f2fb0(param_1 + 0x131a5b);
  FUN_180368c20();
  if (param_1[0x131a49] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x131a49] = 0;
  FUN_1804f2d20(param_1 + 0x10f7b0);
  FUN_1804fb8a0(param_1 + 0x10f7a5);
  FUN_1801944b0();
  if (param_1[0x10f6ed] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x10f6ed] = 0;
  param_1[0x10f6e6] = &system_data_buffer_ptr;
  if (param_1[0x10f6e7] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  param_1[0x10f6e7] = 0;
  *(int32_t *)(param_1 + 0x10f6e9) = 0;
  param_1[0x10f6e6] = &system_state_ptr;
  if (param_1[0x10f6db] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_180057830();
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  FUN_180059ee0(param_1 + 0x10f677);
  if (param_1[0x10f672] != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (param_1[0x10f66d] == 0) {
    FUN_1804fb8a0(param_1 + 0x10f663);
    FUN_1804fd590();
    FUN_1804fbac0(param_1 + 0x10f5ce);
    FUN_1804fbac0(param_1 + 0x10f53e);
    _Mtx_destroy_in_situ();
    _Mtx_destroy_in_situ();
    FUN_1804fbb20(param_1 + 0x10ed2b);
    FUN_1804fbb20(param_1 + 0x10e52e);
    FUN_1804fbb20(param_1 + 0x10dd31);
    FUN_1804fbfb0(param_1 + 0xe9d72);
    FUN_1804fbfb0(param_1 + 0xc5db3);
    FUN_1804fc3f0(param_1 + 0xa5db4);
    FUN_1804fbb80(param_1 + 0x614);
    SystemDataValidator(param_1 + 0x614,0xa60,0x7f8,FUN_180523570);
    param_1[2] = &ui_system_data_1920_ptr;
    FUN_1804ca960(param_1 + 0x5a8);
    FUN_1804a7f00(param_1 + 4);
    if ((int64_t *)param_1[3] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)param_1[3] + 0x38))();
    }
    *param_1 = &system_handler2_ptr;
    *param_1 = &system_handler1_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




