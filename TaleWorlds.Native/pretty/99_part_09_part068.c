#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part068.c - 2 个函数

// 函数: void FUN_1805e7b40(uint64_t *param_1,uint param_2,uint param_3,char param_4)
void FUN_1805e7b40(uint64_t *param_1,uint param_2,uint param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  
  uVar6 = 0;
  if ((int)param_3 < (int)param_2) {
    iVar7 = (param_3 - param_2) + 0x40;
    if (param_4 != '\0') {
      uVar3 = *param_1;
      uVar1 = param_2 + 0x3f;
      for (; ((uVar3 | 1L << ((int64_t)(int)(uVar1 & 0x8000003f) & 0x3fU)) != uVar3 && (0 < iVar7))
          ; iVar7 = iVar7 + -1) {
        param_2 = param_2 + 1 & 0x8000003f;
        if ((int)param_2 < 0) {
          param_2 = (param_2 - 1 | 0xffffffc0) + 1;
        }
        uVar1 = param_2 + 0x3f;
      }
      uVar1 = param_3 + 1;
      for (; ((uVar3 | 1L << ((int64_t)(int)(uVar1 & 0x8000003f) & 0x3fU)) != uVar3 && (0 < iVar7))
          ; iVar7 = iVar7 + -1) {
        param_3 = param_3 - 1 & 0x8000003f;
        if ((int)param_3 < 0) {
          param_3 = (param_3 - 1 | 0xffffffc0) + 1;
        }
        uVar1 = param_3 + 1;
      }
    }
    iVar4 = 0;
    if (0 < iVar7) {
      do {
        uVar1 = iVar4 + param_2;
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 | 1L << ((int64_t)(int)(uVar1 & 0x8000003f) & 0x3fU);
      } while (iVar4 < iVar7);
      *param_1 = *param_1 & ~uVar6;
      return;
    }
  }
  else {
    if (param_4 != '\0') {
      uVar3 = *param_1;
      uVar1 = param_2 + 0x3f;
      for (; ((uVar3 | 1L << ((int64_t)(int)(uVar1 & 0x8000003f) & 0x3fU)) != uVar3 &&
             ((int)param_2 <= (int)param_3)); param_2 = param_2 + 1) {
        uVar1 = param_2 + 0x40;
      }
      uVar2 = param_3;
      uVar1 = param_3 + 1;
      while (param_3 = uVar2, (uVar3 | 1L << ((int64_t)(int)(uVar1 & 0x8000003f) & 0x3fU)) != uVar3
            ) {
        if ((int)param_3 < (int)param_2) goto LAB_1805e7d1d;
        uVar2 = param_3 - 1;
        uVar1 = param_3;
      }
    }
    if ((int)param_2 <= (int)param_3) {
      uVar3 = (uint64_t)(int)param_2;
      uVar5 = (uint64_t)((param_3 - param_2) + 1);
      do {
        uVar6 = uVar6 | 1L << (uVar3 & 0x3f);
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
LAB_1805e7d1d:
  *param_1 = *param_1 & ~uVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1805e7d30(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int32_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  int32_t *puVar14;
  int32_t *puVar15;
  int32_t *puVar16;
  int64_t lStackX_10;
  
  puVar1 = (uint64_t *)(param_1 + 0x1000);
  puVar16 = (int32_t *)0x0;
  *puVar1 = 0;
  *(uint64_t *)(param_1 + 0x1008) = 0;
  *(uint64_t *)(param_1 + 0x1010) = 0;
  *(int32_t *)(param_1 + 0x1018) = 3;
  *(int32_t *)(param_1 + 0x1020) = 0;
  if (*(char *)(param_1 + 0x1024) == '\0') {
    *(uint64_t *)(param_1 + 0x1008) = *puVar1;
    *(int8_t *)(param_1 + 0x1024) = 1;
  }
  *(int32_t *)(param_1 + 0x1020) = 0;
  *(int8_t *)(param_1 + 0x1024) = *(int8_t *)(param_2 + 0x1024);
  if (*(char *)(param_2 + 0x1024) == '\0') {
    lVar12 = (int64_t)(int)(*(int64_t *)(param_2 + 0x1008) - *(int64_t *)(param_2 + 0x1000) >> 5)
    ;
    FUN_180396d20(puVar1,lVar12,param_3,param_4,0xfffffffffffffffe);
    if (0 < lVar12) {
      lStackX_10 = 0;
      do {
        puVar15 = (int32_t *)(*(int64_t *)(param_2 + 0x1000) + lStackX_10);
        puVar14 = *(int32_t **)(param_1 + 0x1008);
        if (puVar14 < *(int32_t **)(param_1 + 0x1010)) {
          *(int32_t **)(param_1 + 0x1008) = puVar14 + 8;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          *puVar14 = *puVar15;
          puVar14[1] = uVar3;
          puVar14[2] = uVar4;
          puVar14[3] = uVar5;
          uVar6 = *(uint64_t *)(puVar15 + 6);
          *(uint64_t *)(puVar14 + 4) = *(uint64_t *)(puVar15 + 4);
          *(uint64_t *)(puVar14 + 6) = uVar6;
        }
        else {
          puVar11 = (int32_t *)*puVar1;
          lVar13 = (int64_t)puVar14 - (int64_t)puVar11 >> 5;
          if (lVar13 == 0) {
            lVar13 = 1;
LAB_1805e7eb4:
            puVar8 = (int32_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar13 << 5,*(int8_t *)(param_1 + 0x1018));
            puVar14 = *(int32_t **)(param_1 + 0x1008);
            puVar11 = (int32_t *)*puVar1;
          }
          else {
            lVar13 = lVar13 * 2;
            puVar8 = puVar16;
            if (lVar13 != 0) goto LAB_1805e7eb4;
          }
          if (puVar11 != puVar14) {
                    // WARNING: Subroutine does not return
            memmove(puVar8,puVar11,(int64_t)puVar14 - (int64_t)puVar11);
          }
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          *puVar8 = *puVar15;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          uVar3 = puVar15[5];
          uVar4 = puVar15[6];
          uVar5 = puVar15[7];
          puVar8[4] = puVar15[4];
          puVar8[5] = uVar3;
          puVar8[6] = uVar4;
          puVar8[7] = uVar5;
          if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *puVar1 = (uint64_t)puVar8;
          *(int32_t **)(param_1 + 0x1008) = puVar8 + 8;
          *(int32_t **)(param_1 + 0x1010) = puVar8 + lVar13 * 8;
        }
        lStackX_10 = lStackX_10 + 0x20;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x1020);
    *(uint *)(param_1 + 0x1020) = uVar2;
    if (0 < (int)uVar2) {
      uVar10 = (uint64_t)uVar2;
      do {
        if (*(char *)(param_1 + 0x1024) == '\0') {
          puVar9 = (uint64_t *)(*puVar1 + (int64_t)puVar16);
        }
        else {
          puVar9 = (uint64_t *)(param_1 + (int64_t)puVar16);
        }
        puVar7 = (uint64_t *)((int64_t)puVar16 + param_2);
        if (*(char *)(param_2 + 0x1024) == '\0') {
          puVar7 = (uint64_t *)(*(int64_t *)(param_2 + 0x1000) + (int64_t)puVar16);
        }
        uVar6 = puVar7[1];
        *puVar9 = *puVar7;
        puVar9[1] = uVar6;
        uVar6 = puVar7[3];
        puVar9[2] = puVar7[2];
        puVar9[3] = uVar6;
        puVar16 = puVar16 + 8;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return param_1;
}






// 函数: void FUN_1805e7fe0(int64_t *param_1,char param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805e7fe0(int64_t *param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  
  plVar1 = (int64_t *)*param_1;
  uVar4 = 0;
  uVar5 = uVar4;
  if (plVar1 != (int64_t *)0x0) {
    uVar5 = plVar1[4];
  }
  if (param_2 != '\0') {
    if (plVar1 == (int64_t *)0x0) goto LAB_1805e80a5;
    if (uVar5 != 0) {
      (**(code **)(*plVar1 + 0x28))();
      FUN_180198980(uVar5,plVar1,param_3,param_4,0x42);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      goto LAB_1805e80a5;
    }
  }
  if ((((plVar1 != (int64_t *)0x0) && ((*(uint *)((int64_t)plVar1 + 0x2ac) >> 0x1c & 1) != 0)) &&
      ((plVar1[0x2d] == 0 || ((*(uint *)(plVar1[0x2d] + 0x2ac) & 0x10000000) == 0)))) &&
     (*(uint *)((int64_t)plVar1 + 0x2ac) = *(uint *)((int64_t)plVar1 + 0x2ac) & 0xefffffff,
     uVar5 != 0)) {
    FUN_1801b01f0(uVar5,*param_1);
  }
LAB_1805e80a5:
  plVar1 = (int64_t *)*param_1;
  *param_1 = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x12) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x8c) = 0xbf800000;
  *(int32_t *)(param_1 + 0x13) = 0xbf800000;
  *(int32_t *)((int64_t)param_1 + 0x94) = 0xbf800000;
  plVar1 = (int64_t *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0xf];
  param_1[0xf] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (int64_t *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x11) = 0xff;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  *(int8_t *)(param_1 + 10) = 0xff;
  *(int16_t *)(param_1 + 0x24) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x9c) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0xa4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xac) = 0x3f80000000000000;
  *(uint64_t *)((int64_t)param_1 + 0xb4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xbc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xc4) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0xcc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xd4) = 0x3f80000000000000;
  *(int8_t *)((int64_t)param_1 + 0x122) = 0;
  *(int32_t *)((int64_t)param_1 + 0x124) = 0x10000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(int32_t *)(param_1 + 0x27) = 0;
  *(int32_t *)((int64_t)param_1 + 0x13c) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)((int64_t)param_1 + 0x144) = 0;
  *(int32_t *)(param_1 + 0x29) = 0;
  *(int32_t *)((int64_t)param_1 + 0x14c) = 0;
  *(int32_t *)(param_1 + 0x2a) = 0;
  *(int32_t *)((int64_t)param_1 + 0x154) = 0;
  *(int32_t *)(param_1 + 0x2b) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x15c) = 0xffffffffffffffff;
  *(uint64_t *)((int64_t)param_1 + 0x164) = 0xffffffffffffffff;
  *(int32_t *)((int64_t)param_1 + 0x16c) = 0xffffffff;
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    param_1[1] = 0;
    lVar2 = param_1[2];
    uVar5 = uVar4;
    if (param_1[3] - lVar2 >> 3 != 0) {
      do {
        lVar2 = *(int64_t *)(uVar5 + lVar2);
        if (lVar2 != 0) {
          FUN_180506660(lVar2);
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar2);
        }
        *(uint64_t *)(uVar5 + param_1[2]) = 0;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        lVar2 = param_1[2];
        uVar5 = uVar5 + 8;
      } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[3] - lVar2 >> 3));
    }
    param_1[3] = lVar2;
    return;
  }
  FUN_180506660(lVar2);
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t *
FUN_1805e82f0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  short *psVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t *plStackX_8;
  int64_t *plStack_40;
  uint64_t uStack_38;
  int64_t **pplStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x180,0x10,3,0);
  plVar8 = (int64_t *)FUN_180544dc0(uVar7);
  pplStack_30 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_4;
  plStack_40 = plVar8;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1805e8630(plVar8,param_2,param_3,&plStackX_8);
  *(int8_t *)((int64_t)plVar8 + 0x126) = 0;
  *(int8_t *)((int64_t)plVar8 + 0x124) = 1;
  *(int8_t *)(plVar8 + 0x11) = 0xff;
  uVar7 = param_5[1];
  *(uint64_t *)((int64_t)plVar8 + 0xdc) = *param_5;
  *(uint64_t *)((int64_t)plVar8 + 0xe4) = uVar7;
  uVar7 = param_5[3];
  *(uint64_t *)((int64_t)plVar8 + 0xec) = param_5[2];
  *(uint64_t *)((int64_t)plVar8 + 0xf4) = uVar7;
  uVar4 = *(int32_t *)((int64_t)param_5 + 0x24);
  uVar5 = *(int32_t *)(param_5 + 5);
  uVar6 = *(int32_t *)((int64_t)param_5 + 0x2c);
  *(int32_t *)((int64_t)plVar8 + 0xfc) = *(int32_t *)(param_5 + 4);
  *(int32_t *)(plVar8 + 0x20) = uVar4;
  *(int32_t *)((int64_t)plVar8 + 0x104) = uVar5;
  *(int32_t *)(plVar8 + 0x21) = uVar6;
  uVar4 = *(int32_t *)((int64_t)param_5 + 0x34);
  uVar5 = *(int32_t *)(param_5 + 7);
  uVar6 = *(int32_t *)((int64_t)param_5 + 0x3c);
  *(int32_t *)((int64_t)plVar8 + 0x10c) = *(int32_t *)(param_5 + 6);
  *(int32_t *)(plVar8 + 0x22) = uVar4;
  *(int32_t *)((int64_t)plVar8 + 0x114) = uVar5;
  *(int32_t *)(plVar8 + 0x23) = uVar6;
  SystemInitializer(param_1 + 2,&plStack_40);
  if ((*(uint *)(*param_1 + 0x2ac) & 0x10000000) != 0) {
    plVar2 = (int64_t *)*plVar8;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    func_0x0001804ceed0(plVar2);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  lVar3 = *param_1;
  plVar2 = (int64_t *)*plVar8;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_1802e8a50(lVar3,plVar2,0,1,2);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  lVar3 = *param_1;
  psVar1 = (short *)(lVar3 + 0x2b0);
  *psVar1 = *psVar1 + 1;
  if (*(int64_t *)(lVar3 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x38))();
  }
  return plVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1805e84b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  short *psVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t *plStackX_8;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  
  uVar6 = 0xfffffffffffffffe;
  uVar5 = 0;
  if (param_1[1] == 0) {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x180,0x10,3);
    lVar4 = FUN_180544dc0(uVar3);
    param_1[1] = lVar4;
  }
  else {
    FUN_1805e7fe0(param_1[1],0,param_3,param_4,0,0xfffffffffffffffe);
  }
  lVar4 = param_1[1];
  pplVar7 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_4;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1805e8630(lVar4,param_2,param_3,&plStackX_8,uVar5,uVar6,pplVar7);
  if ((*(uint *)(*param_1 + 0x2ac) & 0x10000000) != 0) {
    plVar2 = *(int64_t **)param_1[1];
    plStackX_8 = plVar2;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    func_0x0001804ceed0(plVar2);
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  lVar4 = *param_1;
  plVar2 = *(int64_t **)param_1[1];
  plStackX_8 = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_1802e8a50(lVar4,plVar2,0,1,2);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2);
  }
  lVar4 = *param_1;
  psVar1 = (short *)(lVar4 + 0x2b0);
  *psVar1 = *psVar1 + 1;
  if (*(int64_t *)(lVar4 + 0x168) != 0) {
    func_0x0001802eeba0();
  }
  lVar4 = param_1[1];
  if ((int64_t *)*param_4 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_4 + 0x38))();
  }
  return lVar4;
}



// WARNING: Removing unreachable block (ram,0x0001805ea0c6)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




