#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_SyscallHandler 


// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator


/* 函数别名定义: DataStructureManager */
#define DataStructureManager DataStructureManager



// 99_part_06_part078.c - 9 个函数

// 函数: void FUN_1803f4d50(int64_t *param_1)
void FUN_1803f4d50(int64_t *param_1)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  
  param_1 = (int64_t *)*param_1;
  uVar1 = 0;
  uVar3 = uVar1;
  if (param_1[1] - *param_1 >> 5 != 0) {
    do {
      FUN_1803ee190(param_1[4],uVar1 * 0x20 + *param_1);
      uVar2 = (int)uVar3 + 1;
      uVar1 = (uint64_t)(int)uVar2;
      uVar3 = (uint64_t)uVar2;
    } while (uVar1 < (uint64_t)(param_1[1] - *param_1 >> 5));
  }
  LOCK();
  *(int *)(param_1[4] + 0x430) = *(int *)(param_1[4] + 0x430) + (int)param_1[5];
  UNLOCK();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1803f4dc0(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  if (param_3 == 3) {
    lVar4 = 0x180c070e0;
  }
  else if (param_3 == 4) {
    lVar4 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar4 = *param_1;
      if (lVar4 != 0) {
        DataSerializationEngine(lVar4);
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar4);
      }
    }
    else {
      if (param_3 == 1) {
        plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,system_allocation_flags,0xfffffffffffffffe);
        param_2 = (int64_t *)*param_2;
        lVar4 = param_2[1] - *param_2 >> 5;
        uVar1 = *(uint *)(param_2 + 3);
        *(uint *)(plVar2 + 3) = uVar1;
        if (lVar4 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 5,uVar1 & 0xff);
        }
        *plVar2 = lVar3;
        plVar2[1] = lVar3;
        plVar2[2] = lVar4 * 0x20 + lVar3;
        lVar4 = *plVar2;
        lVar3 = param_2[1];
        for (lVar5 = *param_2; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
          CoreEngineDataTransformer(lVar4,lVar5);
          lVar4 = lVar4 + 0x20;
        }
        plVar2[1] = lVar4;
        plVar2[4] = param_2[4];
        *(int *)(plVar2 + 5) = (int)param_2[5];
        *param_1 = (int64_t)plVar2;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}



int64_t * FUN_1803f4f30(float *param_1,int64_t *param_2,uint64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t auStack_48 [2];
  uint64_t uStack_38;
  uint64_t uStack_30;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar4 = param_3;
  if (0xf < (uint64_t)param_3[3]) {
    puVar4 = (uint64_t *)*param_3;
  }
  uVar10 = 0xcbf29ce484222325;
  for (uVar5 = 0; uVar5 < (uint64_t)param_3[2]; uVar5 = uVar5 + 1) {
    uVar10 = (uVar10 ^ *(byte *)(uVar5 + (int64_t)puVar4)) * 0x100000001b3;
  }
  uVar5 = *(uint64_t *)(param_1 + 0xc) & uVar10;
  uStack_30 = uVar5;
  if (*(int64_t *)(*(int64_t *)(param_1 + 6) + uVar5 * 0x10) == *(int64_t *)(param_1 + 2)) {
    lVar7 = *(int64_t *)(param_1 + 2);
  }
  else {
    lVar7 = **(int64_t **)(*(int64_t *)(param_1 + 6) + 8 + uVar5 * 0x10);
  }
  do {
    if (lVar7 == *(int64_t *)(*(int64_t *)(param_1 + 6) + uVar5 * 0x10)) {
      lVar1 = *param_4;
      if (lVar7 != lVar1) {
        *(int64_t *)param_4[1] = lVar1;
        **(int64_t **)(lVar1 + 8) = lVar7;
        **(uint64_t **)(lVar7 + 8) = param_4;
        lVar2 = *(int64_t *)(lVar7 + 8);
        *(uint64_t *)(lVar7 + 8) = *(uint64_t *)(lVar1 + 8);
        *(int64_t *)(lVar1 + 8) = param_4[1];
        param_4[1] = lVar2;
      }
      lVar1 = *(int64_t *)(param_1 + 6);
      lVar2 = *(int64_t *)(lVar1 + uVar5 * 0x10);
      if (lVar2 == *(int64_t *)(param_1 + 2)) {
        *(int64_t **)(lVar1 + uVar5 * 0x10) = param_4;
        *(int64_t **)(*(int64_t *)(param_1 + 6) + 8 + uVar5 * 0x10) = param_4;
      }
      else if (lVar2 == lVar7) {
        *(int64_t **)(lVar1 + uVar5 * 0x10) = param_4;
      }
      else {
        plVar6 = (int64_t *)**(uint64_t **)(lVar1 + 8 + uVar5 * 0x10);
        *(int64_t **)(lVar1 + 8 + uVar5 * 0x10) = plVar6;
        if (plVar6 != param_4) {
          *(uint64_t *)(*(int64_t *)(param_1 + 6) + 8 + uVar5 * 0x10) =
               *(uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 6) + 8 + uVar5 * 0x10) + 8);
        }
      }
      uVar5 = *(uint64_t *)(param_1 + 0xe);
      fVar8 = (float)*(int64_t *)(param_1 + 4);
      if (*(int64_t *)(param_1 + 4) < 0) {
        fVar8 = fVar8 + 1.8446744e+19;
      }
      fVar9 = (float)(int64_t)uVar5;
      if ((int64_t)uVar5 < 0) {
        fVar9 = fVar9 + 1.8446744e+19;
      }
      if (*param_1 <= fVar8 / fVar9 && fVar8 / fVar9 != *param_1) {
        if (uVar5 < 0x200) {
          uVar5 = uVar5 * 8;
        }
        else {
          auStack_48[0] = 0x7fffffffffffffff;
          if (uVar5 < 0xfffffffffffffff) {
            uVar5 = uVar5 * 2;
          }
        }
        plVar11 = param_4;
        FUN_1803f3480(param_1);
        plVar6 = *(int64_t **)(param_1 + 2);
        if ((int64_t *)*plVar6 != plVar6) {
          lVar7 = plVar6[1];
          do {
            lVar1 = **(int64_t **)(param_1 + 2);
            FUN_1803f4f30(param_1,auStack_48,lVar1 + 0x10,lVar1,uVar10,uVar5,plVar11);
          } while (lVar1 != lVar7);
        }
      }
      *param_2 = (int64_t)param_4;
      *(int8_t *)(param_2 + 1) = 1;
      return param_2;
    }
    lVar7 = *(int64_t *)(lVar7 + 8);
    plVar6 = (int64_t *)(lVar7 + 0x10);
    if (0xf < *(uint64_t *)(lVar7 + 0x28)) {
      plVar6 = (int64_t *)*plVar6;
    }
    puVar4 = param_3;
    if (0xf < (uint64_t)param_3[3]) {
      puVar4 = (uint64_t *)*param_3;
    }
  } while ((param_3[2] != *(int64_t *)(lVar7 + 0x20)) ||
          (iVar3 = memcmp(puVar4,plVar6), iVar3 != 0));
  *(int64_t *)param_4[1] = *param_4;
  lVar1 = param_4[1];
  *(int64_t *)(*param_4 + 8) = lVar1;
  *(int64_t *)(param_1 + 4) = *(int64_t *)(param_1 + 4) + -1;
  FUN_1803f3690(lVar1,param_4);
  *param_2 = lVar7;
  *(int8_t *)(param_2 + 1) = 0;
  return param_2;
}



int64_t FUN_1803f5220(void)

{
  int *piVar1;
  int64_t lVar2;
  int64_t in_R9;
  
  lVar2 = FUN_1803f4cb0();
  FUN_18018b350(lVar2 + 0x10,in_R9);
  *(uint64_t *)(lVar2 + 0x30) = 0;
  *(uint64_t *)(lVar2 + 0x38) = 0;
  if (*(int64_t *)(in_R9 + 0x28) != 0) {
    LOCK();
    piVar1 = (int *)(*(int64_t *)(in_R9 + 0x28) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(uint64_t *)(lVar2 + 0x30) = *(uint64_t *)(in_R9 + 0x20);
  *(uint64_t *)(lVar2 + 0x38) = *(uint64_t *)(in_R9 + 0x28);
  return lVar2;
}



int64_t * FUN_1803f52c0(int64_t param_1,int64_t *param_2,int64_t *param_3)

{
  byte *pbVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  plVar3 = param_3 + 2;
  if (0xf < (uint64_t)param_3[5]) {
    plVar3 = (int64_t *)*plVar3;
  }
  uVar5 = 0;
  uVar6 = 0xcbf29ce484222325;
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)(uVar5 + (int64_t)plVar3);
      uVar5 = uVar5 + 1;
      uVar6 = (uVar6 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (uint64_t)param_3[4]);
  }
  lVar4 = (*(uint64_t *)(param_1 + 0x30) & uVar6) * 0x10;
  plVar3 = (int64_t *)(*(int64_t *)(param_1 + 0x18) + lVar4);
  if ((int64_t *)plVar3[1] == param_3) {
    if ((int64_t *)*plVar3 == param_3) {
      *plVar3 = *(int64_t *)(param_1 + 8);
      *(uint64_t *)(lVar4 + 8 + *(int64_t *)(param_1 + 0x18)) = *(uint64_t *)(param_1 + 8);
    }
    else {
      plVar3[1] = param_3[1];
    }
  }
  else if ((int64_t *)*plVar3 == param_3) {
    *plVar3 = *param_3;
  }
  lVar4 = *param_3;
  *(int64_t *)param_3[1] = lVar4;
  lVar2 = *param_3;
  *(int64_t *)(lVar2 + 8) = param_3[1];
  *(int64_t *)(param_1 + 0x10) = *(int64_t *)(param_1 + 0x10) + -1;
  FUN_1803f3690(lVar2,param_3);
  *param_2 = lVar4;
  return param_2;
}






// 函数: void FUN_1803f53b0(int64_t *param_1)
void FUN_1803f53b0(int64_t *param_1)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  int64_t lVar4;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*param_1)();
    LOCK();
    piVar2 = (int *)((int64_t)param_1 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}






// 函数: void FUN_1803f5400(uint64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_1803f5400(uint64_t *param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  
  uVar2 = param_1[3];
  lVar3 = param_1[2];
  if (param_3 <= uVar2 - lVar3) {
    param_1[2] = lVar3 + param_3;
    if (0xf < uVar2) {
      param_1 = (uint64_t *)*param_1;
    }
                    // WARNING: Subroutine does not return
    memmove((int64_t)param_1 + lVar3);
  }
  if (param_3 <= 0x7fffffffffffffffU - lVar3) {
    uVar6 = lVar3 + param_3 | 0xf;
    uVar7 = 0x7fffffffffffffff;
    if (((uVar6 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar7 = uVar6, uVar6 < uVar1)) {
      uVar7 = uVar1;
    }
    uVar5 = SystemCore_SyscallHandler(uVar7 + 1);
    param_1[2] = lVar3 + param_3;
    param_1[3] = uVar7;
    if (0xf < uVar2) {
                    // WARNING: Subroutine does not return
      memcpy(uVar5,*param_1,lVar3);
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar5,param_1,lVar3);
  }
  FUN_1800670f0();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}






// 函数: void FUN_1803f546e(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_1803f546e(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t *unaff_RDI;
  int64_t unaff_R14;
  
  uVar3 = unaff_R14 + param_3 | 0xf;
  if (((uVar3 <= unaff_RBX) && (unaff_RBP <= unaff_RBX - (unaff_RBP >> 1))) &&
     (uVar1 = (unaff_RBP >> 1) + unaff_RBP, unaff_RBX = uVar3, uVar3 < uVar1)) {
    unaff_RBX = uVar1;
  }
  uVar2 = SystemCore_SyscallHandler(unaff_RBX + 1);
  unaff_RDI[2] = unaff_R14 + param_3;
  unaff_RDI[3] = unaff_RBX;
  if (0xf < unaff_RBP) {
                    // WARNING: Subroutine does not return
    memcpy(uVar2,*unaff_RDI);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2);
}






// 函数: void FUN_1803f5547(void)
void FUN_1803f5547(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f5570(char *param_1,uint param_2)
void FUN_1803f5570(char *param_1,uint param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  char *pcVar3;
  int8_t auStack_68 [32];
  int32_t uStack_48;
  uint64_t uStack_40;
  char *pcStack_38;
  char acStack_1c [4];
  uint64_t uStack_18;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_68;
  uStack_48 = 0;
  pcVar3 = acStack_1c + 1;
  uVar2 = (uint64_t)param_2;
  do {
    pcVar3 = pcVar3 + -1;
    uVar1 = uVar2 / 10;
    *pcVar3 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while ((int)uVar1 != 0);
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *param_1 = (char)uVar1;
  pcStack_38 = param_1;
  if (pcVar3 != acStack_1c + 1) {
    MathCoreCalculator0(param_1,pcVar3,acStack_1c + (1 - (int64_t)pcVar3));
  }
  uStack_48 = 1;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_68);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803f5640(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int8_t auStack_90 [24];
  int8_t auStack_78 [24];
  int8_t auStack_60 [24];
  int8_t auStack_48 [32];
  
  puVar5 = (uint64_t *)0x0;
  uVar6 = 0xf;
  uVar11 = 0xf;
  uVar7 = 1;
  uVar10 = 1;
  do {
    uVar11 = uVar11 | uVar11 >> (((byte)uVar10 & 7) << 3);
    uVar10 = uVar10 * 2;
  } while (uVar10 < 8);
  param_1[9] = uVar11 + 1;
  if (uVar11 + 1 < 0x401) {
    puVar4 = (uint64_t *)FUN_1801ee700();
    if (puVar4 == (uint64_t *)0x0) {
      FUN_180287f70(auStack_78);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_78,&rendering_buffer_2600_ptr);
    }
    puVar4[0x10] = puVar4;
  }
  else {
    param_1[9] = 0x200;
    puVar8 = puVar5;
    puVar9 = puVar5;
    puVar12 = puVar5;
    do {
      lVar1 = param_1[9];
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 0x10 + 0xaa,3);
      puVar3 = puVar5;
      if (lVar2 != 0) {
        puVar3 = (uint64_t *)((uint64_t)(-(int)lVar2 & 7) + lVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (uint64_t)(-(int)(puVar3 + 0x14) & 3) + (int64_t)(puVar3 + 0x14);
        puVar3[0x12] = lVar1 + -1;
        puVar3[0x13] = lVar2;
      }
      if (puVar3 == (uint64_t *)0x0) {
        FUN_180287f70(auStack_90);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_90,&rendering_buffer_2600_ptr);
      }
      puVar4 = puVar3;
      if (puVar8 != (uint64_t *)0x0) {
        puVar9[0x10] = puVar3;
        puVar4 = puVar8;
      }
      puVar3[0x10] = puVar4;
      puVar12 = (uint64_t *)((int64_t)puVar12 + 1);
      puVar8 = puVar4;
      puVar9 = puVar3;
    } while (puVar12 != (uint64_t *)0x2);
  }
  *param_1 = puVar4;
  param_1[8] = puVar4;
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  do {
    uVar6 = uVar6 | uVar6 >> (((byte)uVar7 & 7) << 3);
    uVar7 = uVar7 * 2;
  } while (uVar7 < 8);
  param_1[0x13] = uVar6 + 1;
  if (uVar6 + 1 < 0x401) {
    puVar4 = (uint64_t *)FUN_1801ee610();
    if (puVar4 == (uint64_t *)0x0) {
      FUN_180287f70(auStack_48);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_48,&rendering_buffer_2600_ptr);
    }
    puVar4[0x10] = puVar4;
  }
  else {
    param_1[0x13] = 0x200;
    puVar8 = puVar5;
    puVar9 = puVar5;
    puVar12 = puVar5;
    do {
      lVar1 = param_1[0x13];
      lVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8 + 0xaa,3);
      puVar3 = puVar5;
      if (lVar2 != 0) {
        puVar3 = (uint64_t *)((uint64_t)(-(int)lVar2 & 7) + lVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (uint64_t)(-(int)(puVar3 + 0x14) & 3) + (int64_t)(puVar3 + 0x14);
        puVar3[0x12] = lVar1 + -1;
        puVar3[0x13] = lVar2;
      }
      if (puVar3 == (uint64_t *)0x0) {
        FUN_180287f70(auStack_60);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_60,&rendering_buffer_2600_ptr);
      }
      puVar4 = puVar3;
      if (puVar9 != (uint64_t *)0x0) {
        puVar12[0x10] = puVar3;
        puVar4 = puVar9;
      }
      puVar3[0x10] = puVar4;
      puVar8 = (uint64_t *)((int64_t)puVar8 + 1);
      puVar9 = puVar4;
      puVar12 = puVar3;
    } while (puVar8 != (uint64_t *)0x2);
  }
  param_1[10] = puVar4;
  param_1[0x12] = puVar4;
  LOCK();
  system_system_config_config = 0;
  UNLOCK();
  return param_1;
}



uint64_t FUN_1803f5970(uint64_t param_1,uint param_2)

{
  uint64_t uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (0x7f < param_2) {
    uVar2 = param_2 - 0x80 | 0xe000;
  }
  uVar1 = MapVirtualKeyA(uVar2,3);
  switch((int)uVar1) {
  case 0xc:
    if (param_2 < 0x80) {
      return 0x65;
    }
    break;
  case 0xd:
    uVar1 = uVar1 & 0xffffffff;
    if (0x7f < param_2) {
      uVar1 = 0x6c;
    }
    break;
  case 0x21:
    if (param_2 < 0x80) {
      return 0x69;
    }
    break;
  case 0x22:
    if (param_2 < 0x80) {
      return 99;
    }
    break;
  case 0x23:
    if (param_2 < 0x80) {
      return 0x61;
    }
    break;
  case 0x24:
    if (param_2 < 0x80) {
      return 0x67;
    }
    break;
  case 0x25:
    if (param_2 < 0x80) {
      return 100;
    }
    break;
  case 0x26:
    if (param_2 < 0x80) {
      return 0x68;
    }
    break;
  case 0x27:
    if (param_2 < 0x80) {
      return 0x66;
    }
    break;
  case 0x28:
    if (param_2 < 0x80) {
      return 0x62;
    }
    break;
  case 0x2d:
    if (param_2 < 0x80) {
      return 0x60;
    }
    break;
  case 0x2e:
    if (param_2 < 0x80) {
      return 0x6e;
    }
  }
  return uVar1;
}



uint64_t FUN_1803f5b20(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x70,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1803f5b70(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3,0xfffffffffffffffe);
  SystemCore_SyncController(puVar1,param_2,param_1);
  *puVar1 = &rendering_buffer_2376_ptr;
  return puVar1;
}



uint64_t *
FUN_1803f5bd0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &rendering_buffer_2896_ptr;
  FUN_1801f9920();
  if ((param_2 & 1) != 0) {
    free(param_1,0x470,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f5c20(int64_t param_1,int64_t param_2)
void FUN_1803f5c20(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  int iVar13;
  int8_t auStack_1c8 [32];
  int aiStack_1a8 [2];
  int iStack_1a0;
  int iStack_19c;
  uint64_t uStack_198;
  int64_t *plStack_190;
  int iStack_188;
  int iStack_184;
  int32_t uStack_180;
  int32_t uStack_17c;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int16_t uStack_164;
  int8_t uStack_162;
  int32_t uStack_161;
  int16_t uStack_15d;
  int32_t uStack_158;
  int8_t uStack_154;
  int64_t *plStack_150;
  int64_t *plStack_148;
  uint64_t uStack_140;
  int8_t auStack_138 [8];
  int8_t auStack_130 [28];
  uint64_t uStack_114;
  uint64_t uStack_10c;
  void *puStack_f8;
  int8_t *puStack_f0;
  int32_t uStack_e8;
  int8_t auStack_e0 [136];
  uint64_t uStack_58;
  
  uStack_140 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1c8;
  cVar9 = (**(code **)(**(int64_t **)(param_2 + 0x3580) + 0x78))();
  if (cVar9 == '\0') goto LAB_1803f606d;
  FUN_1801f9270(param_1,param_2);
  uStack_180 = 1;
  uStack_17c = 1;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0x3f800000;
  uStack_164 = 0x100;
  uStack_161 = 0;
  uStack_15d = 0;
  uStack_158 = 0xffffffff;
  uStack_154 = 0;
  uStack_178 = *(int32_t *)(param_1 + 0x70);
  uStack_162 = 1;
  FUN_1802c8e90(*(uint64_t *)(param_2 + 0x99b8),&plStack_190);
  lVar11 = SystemCore_Scheduler(plStack_190);
  lVar5 = *(int64_t *)(system_parameter_buffer + 0x7ab8);
  iStack_1a0 = *(int *)(param_2 + 0x3588);
  iStack_19c = *(int *)(param_2 + 0x358c);
  iVar4 = *(int *)(SYSTEM_STATE_MANAGER + 0x540);
  iVar13 = 2;
  if (iVar4 != 3) {
    if (iVar4 == 2) {
      iVar13 = 1;
    }
    else {
      iVar13 = 0;
      if ((iVar4 != 1) && (iVar13 = 2, iVar4 == 4)) {
        iVar13 = 3;
      }
    }
  }
  puVar1 = (uint64_t *)(param_1 + 0x460);
  iStack_188 = iStack_1a0;
  iStack_184 = iStack_19c;
  if ((((*(int *)puVar1 != iStack_1a0) || (*(int *)(param_1 + 0x464) != iStack_19c)) ||
      (*(int *)(param_1 + 0x46c) != iVar13)) || (*(char *)(param_1 + 0x469) != '\0')) {
    if (*(int64_t *)(lVar5 + 0xc0) == 0) {
      (**(code **)(**(int64_t **)(lVar11 + 8) + 0x50))(*(int64_t **)(lVar11 + 8),auStack_130);
      uStack_114 = 3;
      uStack_10c = 0x20000;
      (**(code **)(**(int64_t **)(lVar5 + 200) + 0x28))
                (*(int64_t **)(lVar5 + 200),auStack_130,0,lVar5 + 0xc0);
    }
    *(int8_t *)(param_1 + 0x469) = 0;
    *(int *)(param_1 + 0x46c) = iVar13;
    puStack_f8 = &memory_allocator_3432_ptr;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 4;
    strcpy_s(auStack_e0,0x80,&rendering_buffer_2736_ptr);
    lVar11 = *(int64_t *)(param_1 + 0x428);
    if (((lVar11 == 0) || (cVar9 = func_0x0001800ba3b0(lVar11 + 0x108,&iStack_188), cVar9 == '\0'))
       || (*(int *)(lVar11 + 0x380) == 0)) {
      puVar12 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_148,&puStack_f8,&iStack_188);
      uVar6 = *puVar12;
      *puVar12 = 0;
      plStack_150 = *(int64_t **)(param_1 + 0x428);
      *(uint64_t *)(param_1 + 0x428) = uVar6;
      if (plStack_150 != (int64_t *)0x0) {
        (**(code **)(*plStack_150 + 0x38))();
      }
      if (plStack_148 != (int64_t *)0x0) {
        (**(code **)(*plStack_148 + 0x38))();
      }
    }
    _Thrd_id();
    puStack_f8 = &system_state_ptr;
    uVar8 = CONCAT44(iStack_19c,iStack_1a0);
    *puVar1 = uVar8;
    cVar9 = *(char *)(lVar5 + 0xd8);
    if (cVar9 != '\0') {
      if (*(int64_t *)(lVar5 + 0xe8) != 0) {
        FUN_1802aa4b0(lVar5);
        if (*(int64_t *)(lVar5 + 0xe8) != 0) {
          NVSDK_NGX_D3D11_ReleaseFeature();
        }
        *(uint64_t *)(lVar5 + 0xe8) = 0;
        cVar9 = *(char *)(lVar5 + 0xd8);
      }
      fVar2 = *(float *)(param_2 + 0x148);
      fVar3 = *(float *)(param_2 + 0x144);
      if (cVar9 != '\0') {
        aiStack_1a8[0] = 0;
        uVar10 = (**(code **)(**(int64_t **)(lVar5 + 0xe0) + 0x58))
                           (*(int64_t **)(lVar5 + 0xe0),&memory_allocator_3760_ptr,aiStack_1a8);
        if (((uVar10 & 0xfff00000) != 0xbad00000) && (aiStack_1a8[0] != 0)) {
          *(int8_t *)(lVar5 + 0xd9) = 1;
          if ((*(char *)(lVar5 + 0xd8) != '\0') && (-1 < *(int *)(SYSTEM_STATE_MANAGER + 0x540) + -1)) {
            FUN_1802aa800(lVar5,&uStack_198,&iStack_1a0);
            uVar8 = uStack_198;
          }
          uStack_198 = uVar8;
          uVar6 = *(uint64_t *)(lVar5 + 0xd0);
          uVar7 = *(uint64_t *)(lVar5 + 0xe0);
          NVSDK_NGX_Parameter_SetUI(uVar7,&system_data_9e30,uStack_198 & 0xffffffff);
          NVSDK_NGX_Parameter_SetUI(uVar7,&system_data_9e38,uStack_198._4_4_);
          NVSDK_NGX_Parameter_SetUI(uVar7,&processed_var_4184_ptr,iStack_1a0);
          NVSDK_NGX_Parameter_SetUI(uVar7,&processed_var_4112_ptr,iStack_19c);
          NVSDK_NGX_Parameter_SetF(uVar7,&processed_var_4032_ptr,1.0 / (fVar2 - fVar3));
          NVSDK_NGX_Parameter_SetI(uVar7,&processed_var_4056_ptr,iVar13);
          NVSDK_NGX_Parameter_SetI(uVar7,&processed_var_4000_ptr,0x3b);
          NVSDK_NGX_D3D11_CreateFeature(uVar6,1,uVar7,lVar5 + 0xe8);
          goto LAB_1803f604a;
        }
      }
      *(int8_t *)(lVar5 + 0xd9) = 0;
    }
LAB_1803f604a:
    FUN_1802aa800(lVar5,auStack_138,puVar1,iVar13);
  }
  if (plStack_190 != (int64_t *)0x0) {
    (**(code **)(*plStack_190 + 0x38))();
  }
LAB_1803f606d:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_1c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f60b0(int64_t *param_1,uint64_t param_2,int64_t param_3)
void FUN_1803f60b0(int64_t *param_1,uint64_t param_2,int64_t param_3)

{
  void *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int64_t lVar5;
  void **ppuVar6;
  void *puVar7;
  int8_t auStack_1d8 [32];
  int64_t lStack_1b8;
  int64_t lStack_1b0;
  int8_t uStack_1a8;
  int32_t uStack_190;
  int32_t uStack_188;
  int8_t auStack_178 [8];
  void **ppuStack_170;
  int64_t *plStack_168;
  uint64_t uStack_160;
  void ***pppuStack_158;
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  void *puStack_e0;
  uint uStack_d8;
  uint8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1d8;
  cVar2 = (**(code **)(**(int64_t **)(param_3 + 0x3580) + 0x78))();
  if (cVar2 != '\0') {
    puStack_e8 = &memory_allocator_3432_ptr;
    puStack_e0 = auStack_d0;
    auStack_d0[0] = 0;
    uStack_d8 = 0xc;
    strcpy_s(auStack_d0,0x80,&system_data_eb68);
    puVar7 = &system_buffer_ptr;
    if ((void *)param_1[3] != (void *)0x0) {
      puVar7 = (void *)param_1[3];
    }
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (puVar7[lVar5] != '\0');
    iVar3 = (int)lVar5;
    if ((0 < iVar3) && (uStack_d8 + iVar3 < 0x7f)) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_e0 + uStack_d8,puVar7,(int64_t)(iVar3 + 1));
    }
    puVar7 = &system_buffer_ptr;
    if (puStack_e0 != (void *)0x0) {
      puVar7 = puStack_e0;
    }
    SystemData_Processor(auStack_178,puVar7);
    puVar7 = &system_buffer_ptr;
    if ((void *)param_1[3] != (void *)0x0) {
      puVar7 = (void *)param_1[3];
    }
    ppuStack_170 = &puStack_148;
    puStack_148 = &memory_allocator_3480_ptr;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    if (puVar7 != (void *)0x0) {
      DataStructureManager0(&puStack_148,puVar7);
      SystemCore_Analyzer(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x7f20,&puStack_148);
    }
    puVar7 = *(void **)(system_parameter_buffer + 0x7ab8);
    if ((puVar7 == (void *)0x0) || (puVar7[0xd9] == '\0')) {
      FUN_180080810(param_1 + 0x85,param_1 + 0x27);
    }
    else {
      uStack_188 = *(int32_t *)(param_3 + 0x12c04);
      uStack_190 = *(int32_t *)(param_3 + 0x12c00);
      uStack_1a8 = (int8_t)param_1[0x8d];
      lStack_1b0 = param_1[0x2a];
      lStack_1b8 = param_1[0x29];
      uVar4 = FUN_1802aa550(puVar7,param_1[0x27],param_1[0x85],param_1[0x28]);
      FUN_1802c8e90(*(uint64_t *)(param_3 + 0x99b8),&plStack_168);
      lVar5 = SystemCore_Scheduler(plStack_168);
      (**(code **)(**(int64_t **)(puVar7 + 0xd0) + 0x178))
                (*(int64_t **)(puVar7 + 0xd0),*(uint64_t *)(puVar7 + 0xc0),
                 *(uint64_t *)(lVar5 + 8));
      ppuVar6 = (void **)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
      puVar1 = *(void **)(puVar7 + 0xc0);
      ppuStack_170 = ppuVar6;
      UltraHighFreq_PerformanceMonitor1(ppuVar6);
      *ppuVar6 = &rendering_buffer_2752_ptr;
      ppuVar6[0x18] = puVar7;
      ppuVar6[0x19] = puVar1;
      pppuStack_158 = &ppuStack_170;
      ppuStack_170 = ppuVar6;
      (**(code **)(*ppuVar6 + 0x28))(ppuVar6);
      SystemPerformance_Monitor(system_context_ptr,&ppuStack_170);
      if ((uVar4 & 0xfff00000) == 0xbad00000) {
        *(int8_t *)((int64_t)param_1 + 0x469) = 1;
        (**(code **)(*param_1 + 0x38))(param_1,param_3);
      }
      *(int8_t *)(param_1 + 0x8d) = 0;
      if (plStack_168 != (int64_t *)0x0) {
        (**(code **)(*plStack_168 + 0x38))();
      }
    }
    SystemCore_Synchronizer(&puStack_148);
    system_system_data_config = system_system_data_config + -1;
    (**(code **)(*system_system_data_config + 0x20))();
    puStack_e8 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803f63f0(int64_t param_1)
void FUN_1803f63f0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  int32_t uVar6;
  int16_t *apuStack_30 [5];
  
  lVar1 = system_message_buffer;
  uVar2 = *(uint64_t *)(param_1 + 200);
  apuStack_30[0] = (int16_t *)0x0;
  plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
  iVar5 = (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,0,1,0,apuStack_30,0xfffffffffffffffe);
  if (iVar5 < 0) {
    uVar6 = (**(code **)(**(int64_t **)(lVar1 + 0x1d78) + 0x138))();
                    // WARNING: Subroutine does not return
    SystemParameterHandler(system_message_context,&memory_allocator_3992_ptr,uVar6);
  }
  if (apuStack_30[0] != (int16_t *)0x0) {
    uVar6 = func_0x0001800adf40(*apuStack_30[0]);
    plVar3 = *(int64_t **)(*(int64_t *)(lVar1 + 0x1cd8) + 0x8400);
    (**(code **)(*plVar3 + 0x78))(plVar3,uVar2,0);
    lVar4 = *(int64_t *)(param_1 + 0xc0);
    lVar1 = lVar4 + 0x70;
    iVar5 = _Mtx_lock(lVar1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    *(int32_t *)(lVar4 + 0x68) = uVar6;
    iVar5 = _Mtx_unlock(lVar1);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
  return;
}



uint64_t * FUN_1803f6500(uint64_t *param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &memory_allocator_3952_ptr;
  if ((int64_t *)param_1[0x8c] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x8c] + 0x38))();
  }
  SystemDataValidator(param_1 + 0x8a,8,2,DataCacheManager,uVar1);
  FUN_1801f9920(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x478);
  }
  return param_1;
}






