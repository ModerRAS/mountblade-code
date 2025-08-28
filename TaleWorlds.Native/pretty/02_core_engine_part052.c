#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part052.c - 20 个函数

// 函数: void FUN_18008e1c7(void)
void FUN_18008e1c7(void)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  int32_t *puVar11;
  uint64_t *unaff_RBX;
  int64_t *unaff_RBP;
  int32_t *puVar12;
  uint64_t uVar13;
  int64_t unaff_RDI;
  int64_t *unaff_R12;
  int64_t *unaff_R13;
  int32_t *puVar14;
  int32_t *puVar15;
  int64_t in_stack_00000068;
  int64_t in_stack_00000070;
  
  puVar14 = (int32_t *)0x0;
  puVar15 = puVar14;
  if (in_RAX != unaff_RDI) {
    do {
      in_RAX = func_0x00018066bd70(in_RAX);
      puVar15 = (int32_t *)((int64_t)puVar15 + 1);
    } while (in_RAX != unaff_RDI);
  }
  puVar11 = (int32_t *)unaff_RBP[1];
  if ((int32_t *)(unaff_RBP[2] - (int64_t)puVar11 >> 4) < puVar15) {
    puVar8 = (uint64_t *)*unaff_RBP;
    lVar9 = (int64_t)puVar11 - (int64_t)puVar8 >> 4;
    uVar13 = lVar9 * 2;
    if (lVar9 == 0) {
      uVar13 = 1;
    }
    if (uVar13 <= (uint64_t)((int64_t)puVar15 + lVar9)) {
      uVar13 = (int64_t)puVar15 + lVar9;
    }
    puVar15 = puVar14;
    if (uVar13 != 0) {
      puVar14 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar13 << 4,(char)unaff_RBP[3]);
      puVar8 = (uint64_t *)*unaff_RBP;
      puVar15 = puVar14;
    }
    for (; puVar8 != unaff_RBX; puVar8 = puVar8 + 2) {
      uVar1 = *(int32_t *)((int64_t)puVar8 + 4);
      uVar2 = *(int32_t *)(puVar8 + 1);
      uVar3 = *(int32_t *)((int64_t)puVar8 + 0xc);
      *puVar14 = *(int32_t *)puVar8;
      puVar14[1] = uVar1;
      puVar14[2] = uVar2;
      puVar14[3] = uVar3;
      puVar14 = puVar14 + 4;
    }
    in_stack_00000068 = *unaff_R13;
    in_stack_00000070 = *unaff_R12;
    puVar14 = (int32_t *)FUN_18008eaf0(&stack0x00000070,&stack0x00000068);
    puVar8 = (uint64_t *)unaff_RBP[1];
    if (unaff_RBX != puVar8) {
      do {
        uVar1 = *(int32_t *)unaff_RBX;
        uVar2 = *(int32_t *)((int64_t)unaff_RBX + 4);
        uVar3 = *(int32_t *)(unaff_RBX + 1);
        uVar4 = *(int32_t *)((int64_t)unaff_RBX + 0xc);
        unaff_RBX = unaff_RBX + 2;
        *puVar14 = uVar1;
        puVar14[1] = uVar2;
        puVar14[2] = uVar3;
        puVar14[3] = uVar4;
        puVar14 = puVar14 + 4;
      } while (unaff_RBX != puVar8);
    }
    if (*unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RBP = (int64_t)puVar15;
    unaff_RBP[2] = (int64_t)(puVar15 + uVar13 * 4);
    unaff_RBP[1] = (int64_t)puVar14;
  }
  else {
    puVar14 = (int32_t *)((int64_t)puVar11 - (int64_t)unaff_RBX >> 4);
    if (puVar15 < puVar14) {
      puVar12 = puVar11 + (int64_t)puVar15 * -4;
      puVar14 = puVar11;
      if (puVar12 != puVar11) {
        do {
          uVar1 = *puVar12;
          uVar2 = puVar12[1];
          uVar3 = puVar12[2];
          uVar4 = puVar12[3];
          puVar12 = puVar12 + 4;
          *puVar14 = uVar1;
          puVar14[1] = uVar2;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
          puVar14 = puVar14 + 4;
        } while (puVar12 != puVar11);
        puVar11 = (int32_t *)unaff_RBP[1];
      }
      puVar14 = puVar11 + (int64_t)puVar15 * -4;
      for (lVar9 = (int64_t)(puVar11 + (int64_t)puVar15 * -4) - (int64_t)unaff_RBX >> 4;
          0 < lVar9; lVar9 = lVar9 + -1) {
        puVar11 = puVar14 + -4;
        *(uint64_t *)(puVar11 + (int64_t)puVar15 * 4) = *(uint64_t *)(puVar14 + -4);
        puVar11[(int64_t)puVar15 * 4 + 2] = puVar14[-2];
        puVar14 = puVar11;
      }
      lVar9 = *unaff_R13;
      lVar5 = *unaff_R12;
      if (lVar5 != lVar9) {
        do {
          *unaff_RBX = *(uint64_t *)(lVar5 + 0x20);
          *(int32_t *)(unaff_RBX + 1) = *(int32_t *)(lVar5 + 0x28);
          lVar5 = func_0x00018066bd70(lVar5);
          unaff_RBX = unaff_RBX + 2;
        } while (lVar5 != lVar9);
        unaff_RBP[1] = unaff_RBP[1] + (int64_t)puVar15 * 0x10;
        return;
      }
    }
    else {
      lVar9 = *unaff_R12;
      puVar12 = puVar14;
      if (puVar14 != (int32_t *)0x0) {
        do {
          lVar9 = func_0x00018066bd70(lVar9);
          puVar12 = (int32_t *)((int64_t)puVar12 + -1);
        } while (puVar12 != (int32_t *)0x0);
        puVar11 = (int32_t *)unaff_RBP[1];
      }
      in_stack_00000068 = *unaff_R13;
      in_stack_00000070 = lVar9;
      FUN_18008eaf0(&stack0x00000070,&stack0x00000068,puVar11);
      puVar8 = (uint64_t *)unaff_RBP[1];
      puVar10 = puVar8 + ((int64_t)puVar15 - (int64_t)puVar14) * 2;
      puVar6 = unaff_RBX;
      if (unaff_RBX != puVar8) {
        do {
          uVar1 = *(int32_t *)((int64_t)puVar6 + 4);
          uVar2 = *(int32_t *)(puVar6 + 1);
          uVar3 = *(int32_t *)((int64_t)puVar6 + 0xc);
          puVar7 = puVar6 + 2;
          *(int32_t *)puVar10 = *(int32_t *)puVar6;
          *(int32_t *)((int64_t)puVar10 + 4) = uVar1;
          *(int32_t *)(puVar10 + 1) = uVar2;
          *(int32_t *)((int64_t)puVar10 + 0xc) = uVar3;
          puVar6 = puVar7;
          puVar10 = puVar10 + 2;
        } while (puVar7 != puVar8);
      }
      lVar5 = *unaff_R12;
      puVar8 = unaff_RBX + (int64_t)puVar14 * 2;
      while (lVar5 != lVar9) {
        lVar9 = func_0x00018066b9a0(lVar9);
        puVar8[-2] = *(uint64_t *)(lVar9 + 0x20);
        *(int32_t *)(puVar8 + -1) = *(int32_t *)(lVar9 + 0x28);
        puVar8 = puVar8 + -2;
      }
    }
    unaff_RBP[1] = unaff_RBP[1] + (int64_t)puVar15 * 0x10;
  }
  return;
}





// 函数: void FUN_18008e454(void)
void FUN_18008e454(void)

{
  return;
}





// 函数: void FUN_18008e460(int64_t *param_1,int64_t *param_2)
void FUN_18008e460(int64_t *param_1,int64_t *param_2)

{
  byte bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int iStack_10;
  
  if (param_1 != param_2) {
    for (plVar7 = param_1 + 2; plVar7 != param_2; plVar7 = plVar7 + 2) {
      lVar3 = *plVar7;
      iStack_10 = (int)plVar7[1];
      plVar10 = plVar7;
      plVar4 = plVar7;
      while (plVar4 != param_1) {
        plVar8 = plVar4 + -2;
        if (iStack_10 == (int)plVar4[-1]) {
          if (*(int *)(*plVar8 + 0x78) == 0) {
            bVar2 = false;
          }
          else if (*(int *)(lVar3 + 0x78) == 0) {
            bVar2 = true;
          }
          else {
            pbVar5 = *(byte **)(*plVar8 + 0x70);
            lVar9 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar5;
            do {
              bVar1 = *pbVar5;
              uVar6 = (uint)pbVar5[lVar9];
              if (bVar1 != uVar6) break;
              pbVar5 = pbVar5 + 1;
            } while (uVar6 != 0);
            bVar2 = 0 < (int)(bVar1 - uVar6);
          }
        }
        else {
          bVar2 = iStack_10 < (int)plVar4[-1];
        }
        if (!bVar2) break;
        *plVar10 = *plVar8;
        *(int *)(plVar10 + 1) = (int)plVar4[-1];
        plVar10 = plVar10 + -2;
        plVar4 = plVar8;
      }
      *plVar10 = lVar3;
      *(int *)(plVar10 + 1) = iStack_10;
    }
  }
  return;
}





// 函数: void FUN_18008e473(int64_t *param_1,int64_t *param_2)
void FUN_18008e473(int64_t *param_1,int64_t *param_2)

{
  byte bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int iStackX_8;
  
  plVar7 = param_1 + 2;
  do {
    if (plVar7 == param_2) {
      return;
    }
    lVar3 = *plVar7;
    iStackX_8 = (int)plVar7[1];
    plVar10 = plVar7;
    plVar4 = plVar7;
    while (plVar4 != param_1) {
      plVar8 = plVar4 + -2;
      if (iStackX_8 == (int)plVar4[-1]) {
        if (*(int *)(*plVar8 + 0x78) == 0) {
          bVar2 = false;
        }
        else if (*(int *)(lVar3 + 0x78) == 0) {
          bVar2 = true;
        }
        else {
          pbVar5 = *(byte **)(*plVar8 + 0x70);
          lVar9 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar5;
          do {
            bVar1 = *pbVar5;
            uVar6 = (uint)pbVar5[lVar9];
            if (bVar1 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < (int)(bVar1 - uVar6);
        }
      }
      else {
        bVar2 = iStackX_8 < (int)plVar4[-1];
      }
      if (!bVar2) break;
      *plVar10 = *plVar8;
      *(int *)(plVar10 + 1) = (int)plVar4[-1];
      plVar10 = plVar10 + -2;
      plVar4 = plVar8;
    }
    plVar7 = plVar7 + 2;
    *plVar10 = lVar3;
    *(int *)(plVar10 + 1) = iStackX_8;
  } while( true );
}





// 函数: void FUN_18008e48b(void)
void FUN_18008e48b(void)

{
  byte bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  byte *pbVar5;
  uint uVar6;
  int64_t *unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int iStackX_8;
  
  do {
    lVar3 = *unaff_RDI;
    iStackX_8 = (int)unaff_RDI[1];
    plVar4 = unaff_RDI;
    plVar9 = unaff_RDI;
    while (plVar4 != unaff_RSI) {
      plVar7 = plVar4 + -2;
      if (iStackX_8 == (int)plVar4[-1]) {
        if (*(int *)(*plVar7 + 0x78) == 0) {
          bVar2 = false;
        }
        else if (*(int *)(lVar3 + 0x78) == 0) {
          bVar2 = true;
        }
        else {
          pbVar5 = *(byte **)(*plVar7 + 0x70);
          lVar8 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar5;
          do {
            bVar1 = *pbVar5;
            uVar6 = (uint)pbVar5[lVar8];
            if (bVar1 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar2 = 0 < (int)(bVar1 - uVar6);
        }
      }
      else {
        bVar2 = iStackX_8 < (int)plVar4[-1];
      }
      if (!bVar2) break;
      *plVar9 = *plVar7;
      *(int *)(plVar9 + 1) = (int)plVar4[-1];
      plVar9 = plVar9 + -2;
      plVar4 = plVar7;
    }
    unaff_RDI = unaff_RDI + 2;
    *plVar9 = lVar3;
    *(int *)(plVar9 + 1) = iStackX_8;
    if (unaff_RDI == unaff_RBP) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18008e535(void)
void FUN_18008e535(void)

{
  return;
}





// 函数: void FUN_18008e544(void)
void FUN_18008e544(void)

{
  return;
}





// 函数: void FUN_18008e550(int64_t *param_1,int64_t *param_2)
void FUN_18008e550(int64_t *param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  
  if (param_1 != param_2) {
    for (plVar6 = param_1 + 1; plVar6 != param_2; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      plVar8 = plVar6;
      plVar9 = plVar6;
      while (plVar8 != param_1) {
        lVar3 = plVar8[-1];
        plVar8 = plVar8 + -1;
        if (*(int *)(lVar3 + 0x78) == 0) break;
        if (*(int *)(lVar2 + 0x78) != 0) {
          pbVar4 = *(byte **)(lVar3 + 0x70);
          lVar7 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar4;
          do {
            bVar1 = *pbVar4;
            uVar5 = (uint)pbVar4[lVar7];
            if (bVar1 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          if ((int)(bVar1 - uVar5) < 1) break;
        }
        *plVar9 = lVar3;
        plVar9 = plVar9 + -1;
      }
      *plVar9 = lVar2;
    }
  }
  return;
}





// 函数: void FUN_18008e55f(int64_t *param_1,int64_t *param_2)
void FUN_18008e55f(int64_t *param_1,int64_t *param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  
  plVar6 = param_1 + 1;
  do {
    if (plVar6 == param_2) {
      return;
    }
    lVar2 = *plVar6;
    plVar8 = plVar6;
    plVar9 = plVar6;
    while (plVar8 != param_1) {
      lVar3 = plVar8[-1];
      plVar8 = plVar8 + -1;
      if (*(int *)(lVar3 + 0x78) == 0) break;
      if (*(int *)(lVar2 + 0x78) != 0) {
        pbVar4 = *(byte **)(lVar3 + 0x70);
        lVar7 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar7];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) break;
      }
      *plVar9 = lVar3;
      plVar9 = plVar9 + -1;
    }
    plVar6 = plVar6 + 1;
    *plVar9 = lVar2;
  } while( true );
}





// 函数: void FUN_18008e573(void)
void FUN_18008e573(void)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  int64_t *unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  do {
    lVar2 = *unaff_RDI;
    plVar7 = unaff_RDI;
    plVar8 = unaff_RDI;
    while (plVar7 != unaff_RSI) {
      lVar3 = plVar7[-1];
      plVar7 = plVar7 + -1;
      if (*(int *)(lVar3 + 0x78) == 0) break;
      if (*(int *)(lVar2 + 0x78) != 0) {
        pbVar4 = *(byte **)(lVar3 + 0x70);
        lVar6 = *(int64_t *)(lVar2 + 0x70) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar6];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) break;
      }
      *plVar8 = lVar3;
      plVar8 = plVar8 + -1;
    }
    unaff_RDI = unaff_RDI + 1;
    *plVar8 = lVar2;
    if (unaff_RDI == unaff_RBP) {
      return;
    }
  } while( true );
}





// 函数: void FUN_18008e5e4(void)
void FUN_18008e5e4(void)

{
  return;
}





// 函数: void FUN_18008e5ef(void)
void FUN_18008e5ef(void)

{
  return;
}





// 函数: void FUN_18008e5f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18008e5f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  > HighFreq_ParticleSystem1();
  RenderingSystem_CameraSystem(param_1 + 0x40,*(uint64_t *)(param_1 + 0x50),param_3,param_4,uVar2);
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  if (puVar1 != (uint64_t *)0x0) {
    SystemCache_Manager(param_1 + 0x10,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar1);
  }
  return;
}





// 函数: void FUN_18008e640(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18008e640(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  > HighFreq_ParticleSystem1();
  RenderingSystem_CameraSystem(param_1 + 0x30,*(uint64_t *)(param_1 + 0x40),param_3,param_4,uVar2);
  puVar1 = *(uint64_t **)(param_1 + 0x10);
  if (puVar1 != (uint64_t *)0x0) {
    SystemCache_Manager(param_1,*puVar1,param_3,param_4,0xfffffffffffffffe);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar1);
  }
  return;
}





// 函数: void FUN_18008e690(int64_t *param_1,uint64_t param_2,int64_t *param_3)
void FUN_18008e690(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  lVar3 = param_1[1];
  puVar1 = (uint64_t *)*param_3;
  uVar2 = puVar1[6];
  if ((uint64_t)((param_1[2] - lVar3) + *param_1) <= uVar2) {
    System_BufferManager(param_1,(lVar3 - *param_1) + uVar2);
    lVar3 = param_1[1];
  }
  param_1[1] = lVar3 + uVar2;
                    // WARNING: Could not recover jumptable at 0x00018008e6fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)puVar1[4])(param_1,*puVar1,*(int32_t *)(puVar1 + 5),puVar1 + 1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18008e700(int64_t *param_1,int64_t *param_2,int param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_3 == 3) {
    return 0x180bfe210;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar1);
    }
  }
  else {
    if (param_3 == 1) {
      lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
      FUN_18008e9e0(lVar1,*param_2);
      *param_1 = lVar1;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



uint64_t FUN_18008e820(uint64_t param_1,uint64_t *param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  
  uVar2 = FUN_1800890a0(*param_2,param_1);
  if ((char)uVar2 == '\0') {
    return uVar2 & 0xffffffffffffff00;
  }
  plVar1 = *(int64_t **)param_2[1];
  if (plVar1 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00018008e85b. Too many branches
                    // WARNING: Treating indirect jump as call
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1);
    return uVar2;
  }
  return CONCAT71((int7)((uint64_t)param_2[1] >> 8),1);
}



uint64_t *
FUN_18008e9e0(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  
  *param_1 = *param_2;
  param_1[3] = 0;
  param_1[4] = _guard_check_icall;
  if (param_1 + 1 != param_2 + 1) {
    pcVar1 = (code *)param_2[3];
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1 + 1,param_2 + 1,1,param_4,0xfffffffffffffffe);
      pcVar1 = (code *)param_2[3];
    }
    param_1[3] = pcVar1;
    param_1[4] = param_2[4];
  }
  *(int32_t *)(param_1 + 5) = *(int32_t *)(param_2 + 5);
  param_1[6] = param_2[6];
  return param_1;
}





// 函数: void FUN_18008ea80(uint64_t param_1,int64_t param_2)
void FUN_18008ea80(uint64_t param_1,int64_t param_2)

{
  *(uint64_t *)(param_2 + 0x20) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_2 + 0x28) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_2 + 0x28) = 0;
  *(int32_t *)(param_2 + 0x38) = 0;
  *(uint64_t *)(param_2 + 0x20) = &system_state_ptr;
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}



uint64_t * FUN_18008eaf0(int64_t *param_1,int64_t *param_2,uint64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_1;
  while (lVar2 != lVar1) {
    *param_3 = *(uint64_t *)(lVar2 + 0x20);
    *(int32_t *)(param_3 + 1) = *(int32_t *)(lVar2 + 0x28);
    lVar2 = func_0x00018066bd70(lVar2);
    param_3 = param_3 + 2;
  }
  return param_3;
}





// 函数: void FUN_18008eb40(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_18008eb40(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  byte bVar1;
  bool bVar2;
  int32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  byte *pbVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t lStack_28;
  int64_t lStack_20;
  
  uVar5 = (int64_t)param_2 - (int64_t)param_1;
  do {
    if (((int64_t)(uVar5 & 0xfffffffffffffff0) < 0x1c1) || (param_3 < 1)) {
      if (param_3 == 0) {
        lVar9 = (int64_t)param_2 - (int64_t)param_1 >> 4;
        if (1 < lVar9) {
          lVar10 = (lVar9 + -2 >> 1) + 1;
          plVar6 = param_1 + lVar10 * 2;
          do {
            lStack_28 = plVar6[-2];
            lStack_20 = plVar6[-1];
            lVar10 = lVar10 + -1;
            plVar6 = plVar6 + -2;
            FUN_18008fbc0(param_1,lVar10,lVar9,lVar10,&lStack_28,param_4);
          } while (lVar10 != 0);
        }
        if (1 < lVar9) {
          param_2 = param_2 + -2;
          do {
            lStack_28 = *param_2;
            lStack_20 = param_2[1];
            *param_2 = *param_1;
            *(int *)(param_2 + 1) = (int)param_1[1];
            FUN_18008fbc0(param_1,0,lVar9 + -1,0,&lStack_28,param_4);
            param_2 = param_2 + -2;
            lVar9 = (0x10 - (int64_t)param_1) + (int64_t)param_2 >> 4;
          } while (1 < lVar9);
        }
      }
      return;
    }
    plVar6 = (int64_t *)
             FUN_18008f870(param_1,param_1 + (((int64_t)param_2 - (int64_t)param_1 >> 4) -
                                              ((int64_t)param_2 - (int64_t)param_1 >> 0x3f) >> 1)
                                             * 2,param_2 + -2);
    lStack_28 = *plVar6;
    iVar4 = (int)plVar6[1];
    lStack_20 = plVar6[1];
    plVar6 = param_1;
    plVar11 = param_2;
LAB_18008ebc0:
    if ((int)plVar6[1] == iVar4) {
      if (*(int *)(lStack_28 + 0x78) == 0) {
        bVar2 = false;
      }
      else if (*(int *)(*plVar6 + 0x78) == 0) {
        bVar2 = true;
      }
      else {
        pbVar7 = *(byte **)(lStack_28 + 0x70);
        lVar9 = *(int64_t *)(*plVar6 + 0x70) - (int64_t)pbVar7;
        do {
          bVar1 = *pbVar7;
          uVar8 = (uint)pbVar7[lVar9];
          if (bVar1 != uVar8) break;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar8);
      }
    }
    else {
      bVar2 = (int)plVar6[1] < iVar4;
    }
    if (bVar2) {
      plVar6 = plVar6 + 2;
      goto LAB_18008ebc0;
    }
    do {
      plVar12 = plVar11;
      plVar11 = plVar12 + -2;
      if (iVar4 == (int)plVar12[-1]) {
        if (*(int *)(*plVar11 + 0x78) == 0) {
          bVar2 = false;
        }
        else if (*(int *)(lStack_28 + 0x78) == 0) {
          bVar2 = true;
        }
        else {
          pbVar7 = *(byte **)(*plVar11 + 0x70);
          lVar9 = *(int64_t *)(lStack_28 + 0x70) - (int64_t)pbVar7;
          do {
            bVar1 = *pbVar7;
            uVar8 = (uint)pbVar7[lVar9];
            if (bVar1 != uVar8) break;
            pbVar7 = pbVar7 + 1;
          } while (uVar8 != 0);
          bVar2 = 0 < (int)(bVar1 - uVar8);
        }
      }
      else {
        bVar2 = iVar4 < (int)plVar12[-1];
      }
    } while (bVar2);
    if (plVar6 < plVar11) {
      lVar9 = *plVar6;
      uVar3 = *(int32_t *)((int64_t)plVar6 + 4);
      lVar10 = plVar6[1];
      *plVar6 = *plVar11;
      *(int *)(plVar6 + 1) = (int)plVar12[-1];
      plVar6 = plVar6 + 2;
      *(int *)plVar11 = (int)lVar9;
      *(int32_t *)((int64_t)plVar12 + -0xc) = uVar3;
      *(int *)(plVar12 + -1) = (int)lVar10;
      goto LAB_18008ebc0;
    }
    param_3 = param_3 + -1;
    FUN_18008eb40(plVar6,param_2,param_3,param_4);
    uVar5 = (int64_t)plVar6 - (int64_t)param_1;
    param_2 = plVar6;
  } while( true );
}





// 函数: void FUN_18008ece8(void)
void FUN_18008ece8(void)

{
  uint64_t *puVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  int64_t unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  
  lVar2 = (unaff_RSI + -2 >> 1) + 1;
  puVar1 = unaff_R15 + lVar2 * 2;
  do {
    uStack0000000000000030 = *(int32_t *)(puVar1 + -2);
    uStack0000000000000034 = *(int32_t *)((int64_t)puVar1 + -0xc);
    uStack0000000000000038 = *(int32_t *)(puVar1 + -1);
    uStack000000000000003c = *(int32_t *)((int64_t)puVar1 + -4);
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + -2;
    FUN_18008fbc0(uStack0000000000000030,lVar2);
  } while (lVar2 != 0);
  if (1 < unaff_RSI) {
    puVar1 = (uint64_t *)(unaff_R14 + -0x10);
    do {
      uStack0000000000000030 = *(int32_t *)puVar1;
      uStack0000000000000034 = *(int32_t *)((int64_t)puVar1 + 4);
      uStack0000000000000038 = *(int32_t *)(puVar1 + 1);
      uStack000000000000003c = *(int32_t *)((int64_t)puVar1 + 0xc);
      *puVar1 = *unaff_R15;
      *(int32_t *)(puVar1 + 1) = *(int32_t *)(unaff_R15 + 1);
      FUN_18008fbc0(uStack0000000000000030,0,unaff_RSI + -1,0,&stack0x00000030);
      puVar1 = puVar1 + -2;
      unaff_RSI = (0x10 - (int64_t)unaff_R15) + (int64_t)puVar1 >> 4;
    } while (1 < unaff_RSI);
  }
  return;
}





// 函数: void FUN_18008ed49(void)
void FUN_18008ed49(void)

{
  int64_t unaff_RSI;
  uint64_t *puVar1;
  int64_t unaff_R14;
  uint64_t *unaff_R15;
  int32_t uStack0000000000000030;
  int32_t uStack0000000000000034;
  int32_t uStack0000000000000038;
  int32_t uStack000000000000003c;
  
  if (1 < unaff_RSI) {
    puVar1 = (uint64_t *)(unaff_R14 + -0x10);
    do {
      uStack0000000000000030 = *(int32_t *)puVar1;
      uStack0000000000000034 = *(int32_t *)((int64_t)puVar1 + 4);
      uStack0000000000000038 = *(int32_t *)(puVar1 + 1);
      uStack000000000000003c = *(int32_t *)((int64_t)puVar1 + 0xc);
      *puVar1 = *unaff_R15;
      *(int32_t *)(puVar1 + 1) = *(int32_t *)(unaff_R15 + 1);
      FUN_18008fbc0(uStack0000000000000030,0,unaff_RSI + -1,0,&stack0x00000030);
      puVar1 = puVar1 + -2;
      unaff_RSI = (0x10 - (int64_t)unaff_R15) + (int64_t)puVar1 >> 4;
    } while (1 < unaff_RSI);
  }
  return;
}





// 函数: void FUN_18008edc0(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_18008edc0(int64_t *param_1,int64_t *param_2,int64_t param_3,int8_t param_4)

{
  byte bVar1;
  uint64_t uVar2;
  int64_t lVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t lStackX_8;
  
  uVar2 = (int64_t)param_2 - (int64_t)param_1;
joined_r0x00018008edee:
  if (((int64_t)(uVar2 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
    if (param_3 == 0) {
      lVar7 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      if (1 < lVar7) {
        lVar3 = (lVar7 + -2 >> 1) + 1;
        do {
          lStackX_8 = param_1[lVar3 + -1];
          lVar3 = lVar3 + -1;
          FUN_18008fa70(param_1,lVar3,lVar7,lVar3,&lStackX_8,param_4);
        } while (lVar3 != 0);
      }
      if (1 < lVar7) {
        param_2 = param_2 + -1;
        do {
          lStackX_8 = *param_2;
          *param_2 = *param_1;
          FUN_18008fa70(param_1,0,lVar7 + -1,0,&lStackX_8,param_4);
          param_2 = param_2 + -1;
          lVar7 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar7);
      }
    }
    return;
  }
  lVar7 = *param_1;
  lVar3 = (int64_t)param_2 - (int64_t)param_1 >> 3;
  if (lVar3 < 0) {
    lVar3 = lVar3 + 1;
  }
  lVar3 = param_1[lVar3 >> 1];
  plVar8 = param_1;
  plVar11 = param_2;
  if (*(int *)(lVar3 + 0x78) == 0) {
LAB_18008eecc:
    lVar9 = param_2[-1];
    lVar10 = lVar3;
    if ((*(int *)(lVar9 + 0x78) == 0) || (lVar10 = lVar7, *(int *)(lVar7 + 0x78) == 0))
    goto LAB_18008ef40;
    pbVar4 = *(byte **)(lVar9 + 0x70);
    lVar10 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
    do {
      bVar1 = *pbVar4;
      uVar5 = (uint)pbVar4[lVar10];
      if (bVar1 != uVar5) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    lVar10 = lVar7;
    if ((0 < (int)(bVar1 - uVar5)) || (lVar10 = lVar3, *(int *)(lVar9 + 0x78) == 0))
    goto LAB_18008ef40;
    if (*(int *)(lVar3 + 0x78) != 0) {
      pbVar4 = *(byte **)(lVar9 + 0x70);
      lVar10 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar4;
      do {
        uVar5 = (uint)pbVar4[lVar10];
        iVar6 = *pbVar4 - uVar5;
        lVar7 = lVar3;
        if (*pbVar4 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      goto joined_r0x00018008ef35;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x78) != 0) {
      pbVar4 = *(byte **)(lVar3 + 0x70);
      lVar9 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar9];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
      if ((int)(bVar1 - uVar5) < 1) goto LAB_18008eecc;
    }
    lVar9 = param_2[-1];
    lVar10 = lVar7;
    if (*(int *)(lVar9 + 0x78) == 0) goto LAB_18008ef40;
    pbVar4 = *(byte **)(lVar9 + 0x70);
    lVar10 = *(int64_t *)(lVar3 + 0x70) - (int64_t)pbVar4;
    do {
      bVar1 = *pbVar4;
      uVar5 = (uint)pbVar4[lVar10];
      if (bVar1 != uVar5) break;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    lVar10 = lVar3;
    if ((0 < (int)(bVar1 - uVar5)) || (lVar10 = lVar7, *(int *)(lVar9 + 0x78) == 0))
    goto LAB_18008ef40;
    if (*(int *)(lVar7 + 0x78) != 0) {
      pbVar4 = *(byte **)(lVar9 + 0x70);
      lVar3 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
      do {
        uVar5 = (uint)pbVar4[lVar3];
        iVar6 = *pbVar4 - uVar5;
        if (*pbVar4 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
joined_r0x00018008ef35:
      lVar10 = lVar7;
      if (iVar6 < 1) goto LAB_18008ef40;
    }
  }
  lVar10 = lVar9;
LAB_18008ef40:
  do {
    while( true ) {
      lVar7 = *plVar8;
      if (*(int *)(lVar10 + 0x78) == 0) break;
      if (*(int *)(lVar7 + 0x78) != 0) {
        pbVar4 = *(byte **)(lVar10 + 0x70);
        lVar3 = *(int64_t *)(lVar7 + 0x70) - (int64_t)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar3];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) break;
      }
      plVar8 = plVar8 + 1;
    }
    do {
      do {
        lVar3 = plVar11[-1];
        plVar11 = plVar11 + -1;
        if (*(int *)(lVar3 + 0x78) == 0) goto LAB_18008efb7;
      } while (*(int *)(lVar10 + 0x78) == 0);
      pbVar4 = *(byte **)(lVar3 + 0x70);
      lVar9 = *(int64_t *)(lVar10 + 0x70) - (int64_t)pbVar4;
      do {
        bVar1 = *pbVar4;
        uVar5 = (uint)pbVar4[lVar9];
        if (bVar1 != uVar5) break;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
    } while (0 < (int)(bVar1 - uVar5));
LAB_18008efb7:
    if (plVar11 <= plVar8) break;
    *plVar8 = lVar3;
    *plVar11 = lVar7;
    plVar8 = plVar8 + 1;
  } while( true );
  param_3 = param_3 + -1;
  FUN_18008edc0(plVar8,param_2,param_3,param_4);
  uVar2 = (int64_t)plVar8 - (int64_t)param_1;
  param_2 = plVar8;
  goto joined_r0x00018008edee;
}





