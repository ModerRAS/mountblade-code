#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part091.c - 11 个函数

// 函数: void FUN_18024e7b0(int32_t *param_1)
void FUN_18024e7b0(int32_t *param_1)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 8);
  *(uint64_t *)(param_1 + 8) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 10);
  *(uint64_t *)(param_1 + 10) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0xc);
  *(uint64_t *)(param_1 + 0xc) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 2);
  *(uint64_t *)(param_1 + 2) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 4);
  *(uint64_t *)(param_1 + 4) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 6);
  *(uint64_t *)(param_1 + 6) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *param_1 = 0;
  return;
}






// 函数: void FUN_18024e890(int64_t *param_1)
void FUN_18024e890(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int iVar11;
  int64_t lVar12;
  
  param_1[8] = param_1[7];
  lVar1 = param_1[7];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x24;
  lVar2 = param_1[0x10];
  lVar7 = param_1[0xf];
  if (lVar7 != lVar2) {
    do {
      FUN_1801bd090(lVar7);
      lVar7 = lVar7 + 0x420;
    } while (lVar7 != lVar2);
    lVar7 = param_1[0xf];
  }
  param_1[0x10] = lVar7;
  lVar2 = param_1[0xf];
  param_1[0xf] = 0;
  lVar7 = param_1[0x10];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0x24;
  param_1[0x14] = param_1[0x13];
  lVar3 = param_1[0x13];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0x24;
  param_1[0x18] = param_1[0x17];
  lVar4 = param_1[0x17];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0x24;
  plVar8 = param_1 + 0x21e;
  lVar12 = 0x80;
  do {
    plVar8[-0x202] = plVar8[-0x203];
    lVar5 = plVar8[-0x203];
    plVar8[-0x203] = 0;
    plVar8[-0x202] = 0;
    plVar8[-0x201] = 0;
    *(int32_t *)(plVar8 + -0x200) = 0x24;
    plVar8[-2] = plVar8[-3];
    lVar6 = plVar8[-3];
    plVar8[-3] = 0;
    plVar8[-2] = 0;
    plVar8[-1] = 0;
    *(int32_t *)plVar8 = 0x24;
    if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar5);
    }
    plVar8 = plVar8 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FUN_1801b9920();
  if ((*param_1 != 0) && (iVar11 = 0, param_1[0x41c] - param_1[0x41b] >> 4 != 0)) {
    lVar12 = 0;
    do {
      (**(code **)(**(int64_t **)(*param_1 + 0x318) + 0x90))
                (*(int64_t **)(*param_1 + 0x318),*(uint64_t *)(lVar12 + param_1[0x41b]));
      lVar5 = *(int64_t *)(param_1[0x41b] + 8 + lVar12);
      *(int32_t *)(lVar5 + 0x128) = 0;
      FUN_18014e690(*(uint64_t *)(lVar5 + 0xc0));
      *(uint64_t *)(lVar5 + 0xc0) = 0;
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((uint64_t)(int64_t)iVar11 < (uint64_t)(param_1[0x41c] - param_1[0x41b] >> 4));
  }
  plVar8 = (int64_t *)param_1[0x41c];
  plVar9 = (int64_t *)param_1[0x41b];
  if (plVar9 != plVar8) {
    do {
      if ((int64_t *)plVar9[1] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)plVar9[1] + 0x38))();
      }
      if ((int64_t *)*plVar9 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar9 + 0x38))();
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
    plVar9 = (int64_t *)param_1[0x41b];
  }
  param_1[0x41c] = (int64_t)plVar9;
  plVar8 = (int64_t *)param_1[0x41b];
  param_1[0x41b] = 0;
  plVar9 = (int64_t *)param_1[0x41c];
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  *(int32_t *)(param_1 + 0x41e) = 0x24;
  for (plVar10 = plVar8; plVar10 != plVar9; plVar10 = plVar10 + 2) {
    if ((int64_t *)plVar10[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar10[1] + 0x38))();
    }
    if ((int64_t *)*plVar10 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar10 + 0x38))();
    }
  }
  if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar8);
  }
  if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  lVar4 = lVar2;
  if (lVar3 == 0) {
    for (; lVar4 != lVar7; lVar4 = lVar4 + 0x420) {
      FUN_1801bd090(lVar4);
    }
    if (lVar2 == 0) {
      if (lVar1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(lVar1);
    }
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(lVar2);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






// 函数: void FUN_18024ed80(int64_t *param_1)
void FUN_18024ed80(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x420) {
    FUN_1801bd090(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






// 函数: void FUN_18024eda0(int64_t *param_1)
void FUN_18024eda0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  for (plVar2 = (int64_t *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((int64_t *)plVar2[1] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[1] + 0x38))();
    }
    if ((int64_t *)*plVar2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar2 + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024edc0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_18024edc0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t unaff_RDI;
  int64_t lVar6;
  int64_t lVar7;
  
  lVar6 = ((int64_t)*(int *)(param_2 + 0x628) * 0x80 + (int64_t)*(int *)(param_3 + 0x9a28)) * 0x20
  ;
  FUN_180253970(system_system_data_config + lVar6,
                (*(int64_t *)(param_1 + 0xa0) - *(int64_t *)(param_1 + 0x98)) / 0xbc);
  uVar5 = (*(int64_t *)(param_1 + 0x40) - *(int64_t *)(param_1 + 0x38)) / 0xc;
  plVar2 = (int64_t *)(system_system_data_config + 0x8000 + lVar6);
  lVar7 = plVar2[1];
  lVar6 = *plVar2;
  uVar3 = lVar7 - lVar6;
  if (uVar5 <= uVar3) {
    plVar2[1] = lVar6 + uVar5;
    return;
  }
  uVar5 = (lVar6 - lVar7) + uVar5;
  if (uVar5 <= (uint64_t)(plVar2[2] - lVar7)) {
    if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar7,0,uVar5,param_4,unaff_RDI);
    }
    plVar2[1] = lVar7;
    return;
  }
  uVar4 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < uVar3 + uVar5) {
    uVar4 = uVar3 + uVar5;
  }
  if (uVar4 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar4,(char)plVar2[3]);
    lVar6 = *plVar2;
    lVar7 = plVar2[1];
  }
  if (lVar6 != lVar7) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar6,lVar7 - lVar6);
  }
  if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,uVar5,param_4,unaff_RDI);
  }
  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *plVar2 = lVar1;
  plVar2[2] = lVar1 + uVar4;
  plVar2[1] = lVar1;
  return;
}



int FUN_18024ee60(uint64_t param_1,int64_t param_2,uint64_t param_3,float *param_4,
                 int64_t param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(uint *)(param_5 + 4) & 0x200000) == 0) {
    fVar3 = *(float *)(param_2 + 0x20) - *param_4;
    fVar4 = *(float *)(param_2 + 0x24) - param_4[1];
    fVar2 = *(float *)(param_2 + 0x28) - param_4[2];
    fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (2.0 < *(float *)(param_2 + 0xb0)) {
      fVar2 = fVar2 - *(float *)(param_2 + 0xb0);
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = (float)func_0x0001802e7320(param_1,fVar2 * fVar2);
  }
  else {
    fVar2 = (float)*(int *)(param_5 + 0x124e0);
  }
  iVar1 = (int)fVar2;
  if (iVar1 < 0) {
    return 1;
  }
  if (7 < iVar1) {
    iVar1 = 7;
  }
  return (int)(float)iVar1 + 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024ef20(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_18024ef20(int64_t param_1,int64_t param_2,int64_t param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int64_t lVar4;
  byte bVar5;
  int64_t *plVar6;
  int iVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  
  uVar9 = 0;
  lVar4 = *(int64_t *)(param_1 + 0xa0) - *(int64_t *)(param_1 + 0x98);
  plVar6 = (int64_t *)
           (((int64_t)*(int *)(param_3 + 0x9a28) + (int64_t)*(int *)(param_2 + 0x628) * 0x80) *
            0x20 + system_system_data_config);
  if ((*(uint *)(param_3 + 4) & 0x100) == 0) {
    iVar2 = (int)(lVar4 / 0xbc);
    if (0 < iVar2) {
      do {
        lVar4 = *plVar6;
        bVar1 = *(byte *)(lVar4 + uVar9);
        if (((uint)(int)(char)bVar1 >> 4 & 1) != 0) {
          cVar3 = FUN_18024ee60();
          *(byte *)(lVar4 + uVar9) = (cVar3 - 1U ^ bVar1) & 0xf ^ bVar1;
        }
        uVar9 = uVar9 + 1;
      } while ((int64_t)uVar9 < (int64_t)iVar2);
    }
  }
  else {
    plVar10 = (int64_t *)((int64_t)*(int *)(param_2 + 0x628) * 0x1000 + system_system_data_config);
    iVar2 = (int)(lVar4 / 0xbc);
    uVar8 = uVar9;
    if (0 < iVar2) {
      do {
        iVar7 = (int)uVar9;
        lVar4 = *plVar6;
        if (((uint)(int)(char)*(byte *)(lVar4 + uVar8) >> 4 & 1) != 0) {
          bVar5 = *(byte *)(lVar4 + uVar8) & 0xf0;
          bVar1 = *(byte *)(uVar8 + *plVar10);
          if (((uint)(int)(char)bVar1 >> 4 & 1) == 0) {
            cVar3 = FUN_18024ee60((int)(char)bVar1,
                                  (int64_t)iVar7 * 0xbc + *(int64_t *)(param_1 + 0x98));
            *(byte *)(lVar4 + uVar8) = cVar3 - 1U & 0xf | bVar5;
            *(byte *)(uVar8 + *plVar6) = *(byte *)(uVar8 + *plVar6) | 0x10;
          }
          else {
            *(byte *)(lVar4 + uVar8) = bVar1 & 0xf | bVar5;
          }
        }
        uVar9 = (uint64_t)(iVar7 + 1);
        uVar8 = uVar8 + 1;
      } while ((int64_t)uVar8 < (int64_t)iVar2);
    }
  }
  return;
}



uint64_t * FUN_18024f160(uint64_t *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0x24;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0x24;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0x24;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0x24;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 0x24;
  DataStructureManager(param_1 + 0x1b,0x20,0x80,FUN_18005c060,FUN_180046860);
  DataStructureManager(param_1 + 0x21b,0x20,0x80,FUN_18005c060,FUN_180046860);
  param_1[0x41b] = 0;
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  *(int32_t *)(param_1 + 0x41e) = 0x24;
  *param_1 = 0;
  *(int32_t *)(param_1 + 0x41f) = 0;
  FUN_18024e890(param_1);
  return param_1;
}






// 函数: void FUN_18024f2c0(int64_t param_1)
void FUN_18024f2c0(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  FUN_18024e890();
  FUN_180253ab0();
  SystemDataValidator(param_1 + 0x10d8,0x20,0x80,FUN_180046860,uVar7);
  SystemDataValidator(param_1 + 0xd8,0x20,0x80,FUN_180046860);
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  FUN_1801bb2c0();
  if (*(int64_t *)(param_1 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  if (*(int64_t *)(param_1 + 0x38) == 0) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(param_1 + 0x2c)) {
          do {
            lVar1 = *(int64_t *)(param_1 + 8);
            iVar3 = *(int *)(param_1 + 0x2c) * iVar6 + iVar5;
            iVar5 = iVar5 + 1;
            lVar4 = (int64_t)iVar3;
            *(uint64_t *)(lVar1 + 0x10 + lVar4 * 0x28) = *(uint64_t *)(lVar1 + 8 + lVar4 * 0x28)
            ;
          } while (iVar5 < *(int *)(param_1 + 0x2c));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x28));
    }
    if ((*(int64_t *)(param_1 + 8) != 0) &&
       (plVar2 = *(int64_t **)(param_1 + 0x30), plVar2 != (int64_t *)0x0)) {
      if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *plVar2 = 0;
      *(uint64_t *)(param_1 + 0x30) = 0;
    }
    *(uint64_t *)(param_1 + 0x10) = 0;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(uint64_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f3b0(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4)
void FUN_18024f3b0(int64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t *param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  
  puVar9 = *(uint64_t **)(param_1 + 0x40);
  puVar8 = (uint64_t *)0x0;
  lVar11 = 1;
  if (puVar9 < *(uint64_t **)(param_1 + 0x48)) {
    *(int64_t *)(param_1 + 0x40) = (int64_t)puVar9 + 0xc;
    *puVar9 = *param_2;
    *(int32_t *)(puVar9 + 1) = *(int32_t *)(param_2 + 1);
  }
  else {
    puVar10 = *(uint64_t **)(param_1 + 0x38);
    lVar2 = ((int64_t)puVar9 - (int64_t)puVar10) / 0xc;
    lVar12 = lVar11;
    if ((lVar2 == 0) || (lVar12 = lVar2 * 2, puVar7 = puVar8, lVar12 != 0)) {
      puVar7 = (uint64_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar12 * 0xc,*(int8_t *)(param_1 + 0x50));
      puVar10 = *(uint64_t **)(param_1 + 0x38);
      puVar9 = *(uint64_t **)(param_1 + 0x40);
    }
    if (puVar10 != puVar9) {
                    // WARNING: Subroutine does not return
      memmove(puVar7,puVar10,(int64_t)puVar9 - (int64_t)puVar10);
    }
    *puVar7 = *param_2;
    *(int32_t *)(puVar7 + 1) = *(int32_t *)(param_2 + 1);
    if (*(int64_t *)(param_1 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *(uint64_t **)(param_1 + 0x38) = puVar7;
    *(int64_t *)(param_1 + 0x48) = (int64_t)puVar7 + lVar12 * 0xc;
    *(int64_t *)(param_1 + 0x40) = (int64_t)puVar7 + 0xc;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x80);
  if (uVar1 < *(uint64_t *)(param_1 + 0x88)) {
    *(uint64_t *)(param_1 + 0x80) = uVar1 + 0x420;
    FUN_1802533e0(uVar1);
  }
  else {
    FUN_180253bf0(param_1 + 0x78,param_3);
  }
  puVar9 = *(uint64_t **)(param_1 + 0x60);
  if (*(uint64_t **)(param_1 + 0x68) <= puVar9) {
    puVar10 = *(uint64_t **)(param_1 + 0x58);
    lVar2 = ((int64_t)puVar9 - (int64_t)puVar10) / 0x34;
    if ((lVar2 == 0) || (lVar11 = lVar2 * 2, lVar11 != 0)) {
      puVar8 = (uint64_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 * 0x34,*(int8_t *)(param_1 + 0x70));
      puVar10 = *(uint64_t **)(param_1 + 0x58);
      puVar9 = *(uint64_t **)(param_1 + 0x60);
    }
    if (puVar10 == puVar9) {
      uVar6 = param_4[1];
      *puVar8 = *param_4;
      puVar8[1] = uVar6;
      uVar3 = *(int32_t *)((int64_t)param_4 + 0x14);
      uVar4 = *(int32_t *)(param_4 + 3);
      uVar5 = *(int32_t *)((int64_t)param_4 + 0x1c);
      *(int32_t *)(puVar8 + 2) = *(int32_t *)(param_4 + 2);
      *(int32_t *)((int64_t)puVar8 + 0x14) = uVar3;
      *(int32_t *)(puVar8 + 3) = uVar4;
      *(int32_t *)((int64_t)puVar8 + 0x1c) = uVar5;
      uVar3 = *(int32_t *)((int64_t)param_4 + 0x24);
      uVar4 = *(int32_t *)(param_4 + 5);
      uVar5 = *(int32_t *)((int64_t)param_4 + 0x2c);
      *(int32_t *)(puVar8 + 4) = *(int32_t *)(param_4 + 4);
      *(int32_t *)((int64_t)puVar8 + 0x24) = uVar3;
      *(int32_t *)(puVar8 + 5) = uVar4;
      *(int32_t *)((int64_t)puVar8 + 0x2c) = uVar5;
      *(int32_t *)(puVar8 + 6) = *(int32_t *)(param_4 + 6);
      if (*(int64_t *)(param_1 + 0x58) == 0) {
        *(uint64_t **)(param_1 + 0x58) = puVar8;
        *(int64_t *)(param_1 + 0x60) = (int64_t)puVar8 + 0x34;
        *(int64_t *)(param_1 + 0x68) = lVar11 * 0x34 + (int64_t)puVar8;
        return;
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
                    // WARNING: Subroutine does not return
    memmove(puVar8,puVar10,(int64_t)puVar9 - (int64_t)puVar10);
  }
  *(uint64_t *)(param_1 + 0x60) = (int64_t)puVar9 + 0x34;
  uVar6 = param_4[1];
  *puVar9 = *param_4;
  puVar9[1] = uVar6;
  uVar6 = param_4[3];
  puVar9[2] = param_4[2];
  puVar9[3] = uVar6;
  uVar6 = param_4[5];
  puVar9[4] = param_4[4];
  puVar9[5] = uVar6;
  *(int32_t *)(puVar9 + 6) = *(int32_t *)(param_4 + 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f3ce(int64_t param_1,uint64_t *param_2,uint64_t param_3)
void FUN_18024f3ce(int64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *unaff_RDI;
  uint64_t *puVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t in_stack_00000060;
  
  uVar8 = (uint64_t)((int)unaff_RBP + 1);
  if (unaff_RDI < *(uint64_t **)(param_1 + 0x48)) {
    *(int64_t *)(param_1 + 0x40) = (int64_t)unaff_RDI + 0xc;
    *unaff_RDI = *param_2;
    *(int32_t *)(unaff_RDI + 1) = *(int32_t *)(param_2 + 1);
  }
  else {
    puVar7 = *(uint64_t **)(param_1 + 0x38);
    lVar1 = ((int64_t)unaff_RDI - (int64_t)puVar7) / 0xc;
    uVar9 = uVar8;
    if ((lVar1 == 0) || (uVar9 = lVar1 * 2, puVar6 = unaff_RBP, uVar9 != 0)) {
      puVar6 = (uint64_t *)
               CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 0xc,*(int8_t *)(param_1 + 0x50));
      puVar7 = *(uint64_t **)(param_1 + 0x38);
      unaff_RDI = *(uint64_t **)(param_1 + 0x40);
    }
    if (puVar7 != unaff_RDI) {
                    // WARNING: Subroutine does not return
      memmove(puVar6,puVar7,(int64_t)unaff_RDI - (int64_t)puVar7);
    }
    *puVar6 = *param_2;
    *(int32_t *)(puVar6 + 1) = *(int32_t *)(param_2 + 1);
    if (*(int64_t *)(param_1 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *(uint64_t **)(param_1 + 0x38) = puVar6;
    *(uint64_t *)(param_1 + 0x48) = (int64_t)puVar6 + uVar9 * 0xc;
    *(int64_t *)(param_1 + 0x40) = (int64_t)puVar6 + 0xc;
    param_3 = in_stack_00000060;
  }
  uVar9 = *(uint64_t *)(param_1 + 0x80);
  if (uVar9 < *(uint64_t *)(param_1 + 0x88)) {
    *(uint64_t *)(param_1 + 0x80) = uVar9 + 0x420;
    FUN_1802533e0(uVar9);
  }
  else {
    FUN_180253bf0(param_1 + 0x78,param_3);
  }
  puVar7 = *(uint64_t **)(param_1 + 0x60);
  if (*(uint64_t **)(param_1 + 0x68) <= puVar7) {
    puVar6 = *(uint64_t **)(param_1 + 0x58);
    lVar1 = ((int64_t)puVar7 - (int64_t)puVar6) / 0x34;
    if ((lVar1 == 0) || (uVar8 = lVar1 * 2, uVar8 != 0)) {
      unaff_RBP = (uint64_t *)
                  CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar8 * 0x34,*(int8_t *)(param_1 + 0x70));
      puVar6 = *(uint64_t **)(param_1 + 0x58);
      puVar7 = *(uint64_t **)(param_1 + 0x60);
    }
    if (puVar6 == puVar7) {
      uVar5 = unaff_RSI[1];
      *unaff_RBP = *unaff_RSI;
      unaff_RBP[1] = uVar5;
      uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0x14);
      uVar3 = *(int32_t *)(unaff_RSI + 3);
      uVar4 = *(int32_t *)((int64_t)unaff_RSI + 0x1c);
      *(int32_t *)(unaff_RBP + 2) = *(int32_t *)(unaff_RSI + 2);
      *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar2;
      *(int32_t *)(unaff_RBP + 3) = uVar3;
      *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar4;
      uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0x24);
      uVar3 = *(int32_t *)(unaff_RSI + 5);
      uVar4 = *(int32_t *)((int64_t)unaff_RSI + 0x2c);
      *(int32_t *)(unaff_RBP + 4) = *(int32_t *)(unaff_RSI + 4);
      *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar2;
      *(int32_t *)(unaff_RBP + 5) = uVar3;
      *(int32_t *)((int64_t)unaff_RBP + 0x2c) = uVar4;
      *(int32_t *)(unaff_RBP + 6) = *(int32_t *)(unaff_RSI + 6);
      if (*(int64_t *)(param_1 + 0x58) == 0) {
        *(uint64_t **)(param_1 + 0x58) = unaff_RBP;
        *(int64_t *)(param_1 + 0x60) = (int64_t)unaff_RBP + 0x34;
        *(uint64_t *)(param_1 + 0x68) = uVar8 * 0x34 + (int64_t)unaff_RBP;
        return;
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
                    // WARNING: Subroutine does not return
    memmove(unaff_RBP,puVar6,(int64_t)puVar7 - (int64_t)puVar6);
  }
  *(uint64_t *)(param_1 + 0x60) = (int64_t)puVar7 + 0x34;
  uVar5 = unaff_RSI[1];
  *puVar7 = *unaff_RSI;
  puVar7[1] = uVar5;
  uVar5 = unaff_RSI[3];
  puVar7[2] = unaff_RSI[2];
  puVar7[3] = uVar5;
  uVar5 = unaff_RSI[5];
  puVar7[4] = unaff_RSI[4];
  puVar7[5] = uVar5;
  *(int32_t *)(puVar7 + 6) = *(int32_t *)(unaff_RSI + 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f412(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18024f412(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t in_RAX;
  uint64_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t *puVar9;
  int64_t unaff_R12;
  uint64_t *unaff_R13;
  uint64_t in_stack_00000060;
  
  lVar7 = SUB168(SEXT816(in_RAX) * SEXT816(param_1 - param_4),8);
  lVar8 = (lVar7 >> 1) - (lVar7 >> 0x3f);
  lVar7 = unaff_R12;
  if ((lVar8 == 0) || (lVar7 = lVar8 * 2, puVar6 = unaff_RBP, lVar7 != 0)) {
    puVar6 = (uint64_t *)
             CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0xc,*(int8_t *)(unaff_RBX + 0x50));
    param_4 = *(int64_t *)(unaff_RBX + 0x38);
    unaff_RDI = *(int64_t *)(unaff_RBX + 0x40);
  }
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar6,param_4,unaff_RDI - param_4);
  }
  *puVar6 = *unaff_R13;
  *(int32_t *)(puVar6 + 1) = *(int32_t *)(unaff_R13 + 1);
  if (*(int64_t *)(unaff_RBX + 0x38) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t **)(unaff_RBX + 0x38) = puVar6;
  *(int64_t *)(unaff_RBX + 0x48) = (int64_t)puVar6 + lVar7 * 0xc;
  *(int64_t *)(unaff_RBX + 0x40) = (int64_t)puVar6 + 0xc;
  uVar1 = *(uint64_t *)(unaff_RBX + 0x80);
  if (uVar1 < *(uint64_t *)(unaff_RBX + 0x88)) {
    *(uint64_t *)(unaff_RBX + 0x80) = uVar1 + 0x420;
    FUN_1802533e0(uVar1);
  }
  else {
    FUN_180253bf0(unaff_RBX + 0x78,in_stack_00000060);
  }
  puVar6 = *(uint64_t **)(unaff_RBX + 0x60);
  if (*(uint64_t **)(unaff_RBX + 0x68) <= puVar6) {
    puVar9 = *(uint64_t **)(unaff_RBX + 0x58);
    lVar7 = ((int64_t)puVar6 - (int64_t)puVar9) / 0x34;
    if ((lVar7 == 0) || (unaff_R12 = lVar7 * 2, unaff_R12 != 0)) {
      unaff_RBP = (uint64_t *)
                  CoreMemoryPoolAllocator(system_memory_pool_ptr,unaff_R12 * 0x34,*(int8_t *)(unaff_RBX + 0x70));
      puVar9 = *(uint64_t **)(unaff_RBX + 0x58);
      puVar6 = *(uint64_t **)(unaff_RBX + 0x60);
    }
    if (puVar9 == puVar6) {
      uVar5 = unaff_RSI[1];
      *unaff_RBP = *unaff_RSI;
      unaff_RBP[1] = uVar5;
      uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0x14);
      uVar3 = *(int32_t *)(unaff_RSI + 3);
      uVar4 = *(int32_t *)((int64_t)unaff_RSI + 0x1c);
      *(int32_t *)(unaff_RBP + 2) = *(int32_t *)(unaff_RSI + 2);
      *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar2;
      *(int32_t *)(unaff_RBP + 3) = uVar3;
      *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar4;
      uVar2 = *(int32_t *)((int64_t)unaff_RSI + 0x24);
      uVar3 = *(int32_t *)(unaff_RSI + 5);
      uVar4 = *(int32_t *)((int64_t)unaff_RSI + 0x2c);
      *(int32_t *)(unaff_RBP + 4) = *(int32_t *)(unaff_RSI + 4);
      *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar2;
      *(int32_t *)(unaff_RBP + 5) = uVar3;
      *(int32_t *)((int64_t)unaff_RBP + 0x2c) = uVar4;
      *(int32_t *)(unaff_RBP + 6) = *(int32_t *)(unaff_RSI + 6);
      if (*(int64_t *)(unaff_RBX + 0x58) == 0) {
        *(uint64_t **)(unaff_RBX + 0x58) = unaff_RBP;
        *(int64_t *)(unaff_RBX + 0x60) = (int64_t)unaff_RBP + 0x34;
        *(int64_t *)(unaff_RBX + 0x68) = unaff_R12 * 0x34 + (int64_t)unaff_RBP;
        return;
      }
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
                    // WARNING: Subroutine does not return
    memmove(unaff_RBP,puVar9,(int64_t)puVar6 - (int64_t)puVar9);
  }
  *(uint64_t *)(unaff_RBX + 0x60) = (int64_t)puVar6 + 0x34;
  uVar5 = unaff_RSI[1];
  *puVar6 = *unaff_RSI;
  puVar6[1] = uVar5;
  uVar5 = unaff_RSI[3];
  puVar6[2] = unaff_RSI[2];
  puVar6[3] = uVar5;
  uVar5 = unaff_RSI[5];
  puVar6[4] = unaff_RSI[4];
  puVar6[5] = uVar5;
  *(int32_t *)(puVar6 + 6) = *(int32_t *)(unaff_RSI + 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024f4dd(void)
void FUN_18024f4dd(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t unaff_RBX;
  uint64_t *unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t *puVar7;
  uint64_t in_R9;
  uint64_t *puVar8;
  int64_t unaff_R12;
  
  uVar1 = *(uint64_t *)(unaff_RBX + 0x80);
  if (uVar1 < *(uint64_t *)(unaff_RBX + 0x88)) {
    *(uint64_t *)(unaff_RBX + 0x80) = uVar1 + 0x420;
    FUN_1802533e0(uVar1);
  }
  else {
    FUN_180253bf0(unaff_RBX + 0x78,in_R9);
  }
  puVar7 = *(uint64_t **)(unaff_RBX + 0x60);
  if (puVar7 < *(uint64_t **)(unaff_RBX + 0x68)) {
    *(uint64_t *)(unaff_RBX + 0x60) = (int64_t)puVar7 + 0x34;
    uVar6 = unaff_RSI[1];
    *puVar7 = *unaff_RSI;
    puVar7[1] = uVar6;
    uVar6 = unaff_RSI[3];
    puVar7[2] = unaff_RSI[2];
    puVar7[3] = uVar6;
    uVar6 = unaff_RSI[5];
    puVar7[4] = unaff_RSI[4];
    puVar7[5] = uVar6;
    *(int32_t *)(puVar7 + 6) = *(int32_t *)(unaff_RSI + 6);
    return;
  }
  puVar8 = *(uint64_t **)(unaff_RBX + 0x58);
  lVar2 = ((int64_t)puVar7 - (int64_t)puVar8) / 0x34;
  if ((lVar2 == 0) || (unaff_R12 = lVar2 * 2, unaff_R12 != 0)) {
    unaff_RBP = (uint64_t *)
                CoreMemoryPoolAllocator(system_memory_pool_ptr,unaff_R12 * 0x34,*(int8_t *)(unaff_RBX + 0x70));
    puVar8 = *(uint64_t **)(unaff_RBX + 0x58);
    puVar7 = *(uint64_t **)(unaff_RBX + 0x60);
  }
  if (puVar8 != puVar7) {
                    // WARNING: Subroutine does not return
    memmove(unaff_RBP,puVar8,(int64_t)puVar7 - (int64_t)puVar8);
  }
  uVar6 = unaff_RSI[1];
  *unaff_RBP = *unaff_RSI;
  unaff_RBP[1] = uVar6;
  uVar3 = *(int32_t *)((int64_t)unaff_RSI + 0x14);
  uVar4 = *(int32_t *)(unaff_RSI + 3);
  uVar5 = *(int32_t *)((int64_t)unaff_RSI + 0x1c);
  *(int32_t *)(unaff_RBP + 2) = *(int32_t *)(unaff_RSI + 2);
  *(int32_t *)((int64_t)unaff_RBP + 0x14) = uVar3;
  *(int32_t *)(unaff_RBP + 3) = uVar4;
  *(int32_t *)((int64_t)unaff_RBP + 0x1c) = uVar5;
  uVar3 = *(int32_t *)((int64_t)unaff_RSI + 0x24);
  uVar4 = *(int32_t *)(unaff_RSI + 5);
  uVar5 = *(int32_t *)((int64_t)unaff_RSI + 0x2c);
  *(int32_t *)(unaff_RBP + 4) = *(int32_t *)(unaff_RSI + 4);
  *(int32_t *)((int64_t)unaff_RBP + 0x24) = uVar3;
  *(int32_t *)(unaff_RBP + 5) = uVar4;
  *(int32_t *)((int64_t)unaff_RBP + 0x2c) = uVar5;
  *(int32_t *)(unaff_RBP + 6) = *(int32_t *)(unaff_RSI + 6);
  if (*(int64_t *)(unaff_RBX + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t **)(unaff_RBX + 0x58) = unaff_RBP;
  *(int64_t *)(unaff_RBX + 0x60) = (int64_t)unaff_RBP + 0x34;
  *(int64_t *)(unaff_RBX + 0x68) = unaff_R12 * 0x34 + (int64_t)unaff_RBP;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




