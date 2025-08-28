/* 函数别名定义: DataDeserializer */
#define DataDeserializer DataDeserializer


/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part510.c - 12 个函数

// 函数: void FUN_18053d8f0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18053d8f0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int64_t *plVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  
  puVar4 = (uint64_t *)param_1[1];
  puVar9 = (uint64_t *)*param_1;
  lVar8 = 0;
  uVar2 = *(uint *)(param_1 + 3);
  lVar11 = (int64_t)puVar4 - (int64_t)puVar9 >> 5;
  if (lVar11 != 0) {
    lVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar11 << 5,uVar2 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar2);
  }
  lVar11 = lVar11 * 0x20 + lVar8;
  if (puVar9 != puVar4) {
    puVar12 = (uint64_t *)(lVar8 + 8);
    do {
      puVar1 = puVar12 + -1;
      *puVar1 = 0;
      *puVar12 = 0;
      puVar12[1] = 0;
      *(int32_t *)(puVar12 + 2) = *(int32_t *)(puVar9 + 3);
      uVar5 = *puVar1;
      *puVar1 = *puVar9;
      *puVar9 = uVar5;
      uVar5 = *puVar12;
      *puVar12 = puVar9[1];
      puVar9[1] = uVar5;
      uVar5 = puVar12[1];
      puVar12[1] = puVar9[2];
      puVar9[2] = uVar5;
      uVar3 = *(int32_t *)(puVar12 + 2);
      *(int32_t *)(puVar12 + 2) = *(int32_t *)(puVar9 + 3);
      *(int32_t *)(puVar9 + 3) = uVar3;
      puVar9 = puVar9 + 4;
      puVar12 = puVar12 + 4;
    } while (puVar9 != puVar4);
  }
  plVar6 = (int64_t *)*param_1;
  *param_1 = lVar8;
  plVar7 = (int64_t *)param_1[1];
  param_1[1] = lVar11;
  param_1[2] = lVar11;
  *(uint *)(param_1 + 3) = uVar2;
  for (plVar10 = plVar6; plVar10 != plVar7; plVar10 = plVar10 + 4) {
    if (*plVar10 != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  if (plVar6 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer(plVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18053da80(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar4 = (int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  plVar3 = (int64_t *)*plVar4;
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = plVar4;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[7];
    } while (plVar3 != (int64_t *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar4 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x2c));
  *plVar4 = *param_4;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(int16_t *)(plVar4 + 4) = 0;
  *(int8_t *)((int64_t)plVar4 + 0x22) = 3;
  plVar4[5] = 0;
  *(int32_t *)(plVar4 + 6) = 0;
  *(int8_t *)((int64_t)plVar4 + 0x34) = 0;
  plVar4[7] = 0;
  if ((char)param_5 == '\0') {
    plVar4[7] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
    *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar4;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar1 = *(int64_t *)(param_1 + 8);
    *param_2 = plVar4;
    param_2[1] = lVar1 + uVar2 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar5 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(uint64_t)param_5._4_4_ * 8);
}



int64_t FUN_18053dc90(int64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int64_t lVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t *plVar13;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  pbVar4 = *(byte **)(param_2 + 8);
  pbVar6 = &system_buffer_ptr;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  puVar10 = (uint64_t *)0x0;
  uVar11 = 0xcbf29ce484222325;
  puVar9 = puVar10;
  if (uVar2 != 0) {
    do {
      uVar11 = (uVar11 ^ *pbVar6) * 0x100000001b3;
      uVar7 = (int)puVar9 + 1;
      pbVar6 = pbVar6 + 1;
      puVar9 = (uint64_t *)(uint64_t)uVar7;
    } while (uVar7 < uVar2);
  }
  lVar5 = *(int64_t *)(param_1 + 0x18);
  plVar13 = (int64_t *)
            (*(int64_t *)(param_1 + 8) + (uVar11 % (uint64_t)*(uint *)(param_1 + 0x10)) * 8);
  lVar12 = *plVar13;
  while (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x10);
    if (uVar2 == uVar7) {
      if (uVar2 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar1 = pbVar6 + (*(int64_t *)(lVar12 + 8) - (int64_t)pbVar4);
          uVar7 = (uint)*pbVar6 - (uint)*pbVar1;
          if (uVar7 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18053dd6e:
      if (uVar7 == 0) break;
    }
    else if (uVar2 == 0) goto LAB_18053dd6e;
    plVar13 = (int64_t *)(*plVar13 + 0x60);
    lVar12 = *plVar13;
  }
  lVar12 = *plVar13;
  if (lVar12 != 0) {
    do {
      iVar8 = *(int *)(lVar12 + 0x10);
      iVar3 = *(int *)(param_2 + 0x10);
      if (iVar3 == iVar8) {
        if (iVar3 != 0) {
          pbVar6 = *(byte **)(param_2 + 8);
          lVar12 = *(int64_t *)(lVar12 + 8) - (int64_t)pbVar6;
          do {
            pbVar4 = pbVar6 + lVar12;
            iVar8 = (uint)*pbVar6 - (uint)*pbVar4;
            if (iVar8 != 0) break;
            pbVar6 = pbVar6 + 1;
          } while (*pbVar4 != 0);
        }
      }
      else if (iVar3 != 0) break;
      if (iVar8 != 0) break;
      puVar9 = (uint64_t *)*plVar13;
      *plVar13 = puVar9[0xc];
      puVar9[0xc] = puVar10;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + -1;
      lVar12 = *plVar13;
      puVar10 = puVar9;
    } while (lVar12 != 0);
    if (puVar10 != (uint64_t *)0x0) {
      *puVar10 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
  }
  return lVar5 - *(int64_t *)(param_1 + 0x18);
}



int64_t * FUN_18053de40(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int64_t lVar5;
  byte *pbVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  
  pbVar4 = *(byte **)(param_3 + 8);
  uVar3 = *(uint *)(param_3 + 0x10);
  pbVar6 = &system_buffer_ptr;
  if (pbVar4 != (byte *)0x0) {
    pbVar6 = pbVar4;
  }
  uVar7 = 0xcbf29ce484222325;
  uVar9 = 0;
  if (uVar3 != 0) {
    do {
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 + 1;
      uVar7 = (uVar7 ^ bVar2) * 0x100000001b3;
    } while (uVar9 < uVar3);
  }
  lVar5 = *(int64_t *)(param_1 + 8);
  uVar7 = uVar7 % (uint64_t)*(uint *)(param_1 + 0x10);
  for (lVar8 = *(int64_t *)(lVar5 + uVar7 * 8); lVar8 != 0; lVar8 = *(int64_t *)(lVar8 + 0x60)) {
    uVar9 = *(uint *)(lVar8 + 0x10);
    if (uVar3 == uVar9) {
      if (uVar3 != 0) {
        pbVar6 = pbVar4;
        do {
          pbVar1 = pbVar6 + (*(int64_t *)(lVar8 + 8) - (int64_t)pbVar4);
          uVar9 = (uint)*pbVar6 - (uint)*pbVar1;
          if (uVar9 != 0) break;
          pbVar6 = pbVar6 + 1;
        } while (*pbVar1 != 0);
      }
LAB_18053df0e:
      if (uVar9 == 0) goto LAB_18053df1c;
    }
    else if (uVar3 == 0) goto LAB_18053df0e;
  }
  lVar8 = 0;
LAB_18053df1c:
  if (lVar8 == 0) {
    uVar7 = *(uint64_t *)(param_1 + 0x10);
    lVar8 = *(int64_t *)(lVar5 + uVar7 * 8);
  }
  *param_2 = lVar8;
  param_2[1] = lVar5 + uVar7 * 8;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t *
FUN_18053df50(int64_t param_1,int64_t *param_2,uint64_t param_3,int64_t param_4,
             uint64_t param_5)

{
  int64_t *plVar1;
  byte *pbVar2;
  int iVar3;
  uint64_t uVar4;
  byte *pbVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t lVar9;
  
  uVar4 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  plVar1 = (int64_t *)(*(int64_t *)(param_1 + 8) + uVar4 * 8);
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    iVar3 = *(int *)(param_4 + 0x10);
    do {
      iVar8 = *(int *)(lVar6 + 0x10);
      if (iVar3 == iVar8) {
        if (iVar3 != 0) {
          pbVar5 = *(byte **)(param_4 + 8);
          lVar9 = *(int64_t *)(lVar6 + 8) - (int64_t)pbVar5;
          do {
            pbVar2 = pbVar5 + lVar9;
            iVar8 = (uint)*pbVar5 - (uint)*pbVar2;
            if (iVar8 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar2 != 0);
        }
LAB_18053dfde:
        if (iVar8 == 0) {
          *param_2 = lVar6;
          param_2[1] = (int64_t)plVar1;
          *(int8_t *)(param_2 + 2) = 0;
          return param_2;
        }
      }
      else if (iVar3 == 0) goto LAB_18053dfde;
      lVar6 = *(int64_t *)(lVar6 + 0x60);
    } while (lVar6 != 0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,*(uint *)(param_1 + 0x10),*(int32_t *)(param_1 + 0x18),1)
  ;
  lVar6 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x68,*(int8_t *)(param_1 + 0x2c));
  DataDeserializer0(lVar6,param_4);
  *(int32_t *)(lVar6 + 0x58) = 0;
  *(uint64_t *)(lVar6 + 0x60) = 0;
  if ((char)param_5 == '\0') {
    *(uint64_t *)(lVar6 + 0x60) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar4 * 8);
    *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar4 * 8) = lVar6;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar9 = *(int64_t *)(param_1 + 8);
    *param_2 = lVar6;
    param_2[1] = lVar9 + uVar4 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar7 = CoreMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar7,0,(uint64_t)param_5._4_4_ * 8);
}





// 函数: void FUN_18053e1d0(int64_t param_1)
void FUN_18053e1d0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_18053a6a0(uVar3 + param_1);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(param_1 + -0x10);
}





// 函数: void FUN_18053e1da(int64_t param_1)
void FUN_18053e1da(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      FUN_18053a6a0(uVar3 + param_1);
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(param_1 + -0x10);
}





// 函数: void FUN_18053e1fd(void)
void FUN_18053e1fd(void)

{
  int64_t in_RAX;
  uint unaff_EBX;
  int unaff_EBP;
  int64_t unaff_RDI;
  
  do {
    FUN_18053a6a0((uint64_t)unaff_EBX + unaff_RDI);
    unaff_EBX = unaff_EBX + unaff_EBP;
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(unaff_RDI + -0x10);
}





// 函数: void FUN_18053e21c(void)
void FUN_18053e21c(void)

{
  int64_t unaff_RDI;
  
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(unaff_RDI + -0x10);
}





// 函数: void FUN_18053e239(void)
void FUN_18053e239(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18053e240(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    puVar2 = (uint64_t *)0x0;
  }
  else {
    puVar3 = (uint64_t *)
             CoreMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 0xe0 + 0x10,3,param_4,0xfffffffffffffffe);
    *puVar3 = param_1 << 0x20 | 0xe0;
    puVar2 = puVar3 + 2;
    iVar4 = 0;
    puVar3 = puVar3 + 0x18;
    do {
      puVar3[-0x16] = (uint64_t)&system_state_ptr;
      puVar3[-0x15] = 0;
      *(int32_t *)(puVar3 + -0x14) = 0;
      puVar3[-0x16] = (uint64_t)&memory_allocator_3480_ptr;
      puVar3[-0x15] = (uint64_t)(puVar3 + -0x13);
      *(int32_t *)(puVar3 + -0x14) = 0;
      *(int8_t *)(puVar3 + -0x13) = 0;
      puVar1 = puVar3 + -7;
      *puVar1 = 0;
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      *(int32_t *)(puVar3 + -4) = 4;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      *(int32_t *)puVar3 = 3;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(int32_t *)(puVar3 + 4) = 3;
      puVar3[-6] = *puVar1;
      FUN_18053d710(puVar1,(int64_t)(int)((render_system_config - render_system_config) / 0x68));
      puVar3[-2] = puVar3[-3];
      puVar3[-9] = 0;
      *(int32_t *)(puVar3 + -8) = 0;
      *(int32_t *)(puVar3 + -10) = 0;
      puVar3[5] = 0;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x1c;
    } while ((uint64_t)(int64_t)iVar4 < param_1);
  }
  return puVar2;
}





// 函数: void FUN_18053e3f0(int64_t param_1)
void FUN_18053e3f0(int64_t param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(uint64_t *)(param_1 + 0x1b0) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x1b8) != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *(uint64_t *)(param_1 + 0x1b8) = 0;
  *(int32_t *)(param_1 + 0x1c8) = 0;
  *(uint64_t *)(param_1 + 0x1b0) = &system_state_ptr;
  FUN_18034dbe0(param_1);
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(param_1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053e470(int64_t param_1,int64_t param_2)
void FUN_18053e470(int64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18053e550(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18053e550(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int32_t *puVar10;
  
  puVar10 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar8 = (int64_t)puVar10 - (int64_t)puVar5 >> 5;
  puVar4 = (uint64_t *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_18053e5b6;
  }
  puVar4 = (uint64_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar8 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar10 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_18053e5b6:
  puVar6 = puVar4;
  if (puVar5 != puVar10) {
    lVar9 = (int64_t)puVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 6;
    do {
      *puVar6 = 0;
      *(uint64_t *)(lVar9 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar9 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar9 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar9 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar9 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar9 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar9 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar9 + (int64_t)puVar5);
      *(int32_t *)(lVar9 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar6 = puVar6 + 4;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 8;
    } while (puVar1 != puVar10);
  }
  puVar6[3] = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(int32_t *)(puVar6 + 3) = 3;
  plVar7 = (int64_t *)*param_1;
  if (plVar7 != (int64_t *)param_1[1]) {
    do {
      if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      plVar7 = plVar7 + 4;
    } while (plVar7 != (int64_t *)param_1[1]);
    plVar7 = (int64_t *)*param_1;
  }
  if (plVar7 == (int64_t *)0x0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar6 + 4);
    param_1[2] = (int64_t)(puVar4 + lVar8 * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(plVar7);
}





// 函数: void FUN_18053e6e0(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t param_4)
void FUN_18053e6e0(uint64_t *param_1,uint64_t *param_2,int64_t param_3,int8_t param_4)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uStackX_8;
  uint64_t *puStack_38;
  uint64_t *puStack_30;
  
  lVar4 = (int64_t)param_2 - (int64_t)param_1;
  do {
    lVar4 = lVar4 >> 3;
    if (lVar4 < 0x21) {
LAB_18053e797:
      if ((1 < lVar4) && (puVar6 = param_1, param_1 != param_2)) {
        while (puVar6 = puVar6 + 1, puVar6 != param_2) {
          uVar1 = *puVar6;
          puVar11 = puVar6;
          iVar2 = func_0x00018053d680(uVar1);
          iVar3 = func_0x00018053d680(*param_1);
          if (iVar3 < iVar2) {
                    // WARNING: Subroutine does not return
            memmove(param_1 + 1,param_1);
          }
          uVar10 = puVar6[-1];
          puVar7 = puVar6 + -1;
          iVar2 = func_0x00018053d680(uVar10);
          iVar3 = func_0x00018053d680(uVar1);
          if (iVar2 < iVar3) {
            do {
              *puVar11 = uVar10;
              uVar10 = puVar7[-1];
              puVar8 = puVar7 + -1;
              iVar2 = func_0x00018053d680(uVar1);
              puVar11 = puVar7;
              iVar3 = func_0x00018053d680(uVar10);
              puVar7 = puVar8;
            } while (iVar3 < iVar2);
          }
          *puVar11 = uVar1;
        }
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar4) {
        uVar13 = (int64_t)param_2 - (int64_t)param_1 >> 3;
        lVar4 = (int64_t)param_2 - (int64_t)param_1 >> 4;
        if (0 < lVar4) {
          lVar12 = (int64_t)(uVar13 - 1) >> 1;
          do {
            uVar1 = param_1[lVar4 + -1];
            lVar4 = lVar4 + -1;
            lVar9 = lVar4;
            while (lVar9 < lVar12) {
              lVar5 = lVar9 * 2;
              iVar2 = func_0x00018053d680(param_1[lVar9 * 2 + 2]);
              iVar3 = func_0x00018053d680(param_1[lVar5 + 1]);
              lVar5 = (uint64_t)(iVar2 <= iVar3) + 1 + lVar5;
              param_1[lVar9] = param_1[lVar5];
              lVar9 = lVar5;
            }
            if ((lVar9 == lVar12) && ((uVar13 & 1) == 0)) {
              param_1[lVar9] = param_1[uVar13 - 1];
              lVar9 = uVar13 - 1;
            }
            if (lVar4 < lVar9) {
              do {
                lVar5 = lVar9 + -1 >> 1;
                uVar10 = param_1[lVar5];
                iVar2 = func_0x00018053d680(uVar10);
                iVar3 = func_0x00018053d680(uVar1);
                if (iVar2 <= iVar3) break;
                param_1[lVar9] = uVar10;
                lVar9 = lVar5;
              } while (lVar4 < lVar5);
            }
            param_1[lVar9] = uVar1;
          } while (0 < lVar4);
        }
        if ((int64_t)uVar13 < 2) {
          return;
        }
        param_2 = param_2 + -1;
        do {
          if (1 < (int64_t)uVar13) {
            uStackX_8 = *param_2;
            *param_2 = *param_1;
            FUN_18053f170(param_1,0,(int64_t)param_2 - (int64_t)param_1 >> 3,&uStackX_8,param_4);
          }
          param_2 = param_2 + -1;
          uVar13 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < (int64_t)uVar13);
        return;
      }
      goto LAB_18053e797;
    }
    FUN_18053ea40(&puStack_38,param_1,param_2,param_4);
    puVar11 = puStack_30;
    puVar6 = puStack_38;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((int64_t)((int64_t)puStack_38 - (int64_t)param_1 & 0xfffffffffffffff8U) <
        (int64_t)((int64_t)param_2 - (int64_t)puStack_30 & 0xfffffffffffffff8U)) {
      FUN_18053e6e0(param_1,puStack_38,param_3,param_4);
      puVar6 = param_2;
      param_1 = puVar11;
    }
    else {
      FUN_18053e6e0(puStack_30,param_2,param_3,param_4);
    }
    lVar4 = (int64_t)puVar6 - (int64_t)param_1;
    param_2 = puVar6;
  } while( true );
}





// 函数: void FUN_18053e821(void)
void FUN_18053e821(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t unaff_RBP;
  uint64_t *puVar6;
  uint64_t *unaff_RDI;
  int64_t lVar7;
  int64_t in_R11;
  int64_t lVar8;
  uint64_t unaff_R14;
  
  lVar8 = (int64_t)(unaff_R14 - 1) >> 1;
  do {
    uVar1 = unaff_RDI[in_R11 + -1];
    in_R11 = in_R11 + -1;
    lVar7 = in_R11;
    while (lVar7 < lVar8) {
      lVar5 = lVar7 * 2;
      iVar3 = func_0x00018053d680(unaff_RDI[lVar7 * 2 + 2]);
      iVar4 = func_0x00018053d680(unaff_RDI[lVar5 + 1]);
      lVar5 = (uint64_t)(iVar3 <= iVar4) + 1 + lVar5;
      unaff_RDI[lVar7] = unaff_RDI[lVar5];
      lVar7 = lVar5;
    }
    if ((lVar7 == lVar8) && ((unaff_R14 & 1) == 0)) {
      unaff_RDI[lVar7] = unaff_RDI[unaff_R14 - 1];
      lVar7 = unaff_R14 - 1;
    }
    if (in_R11 < lVar7) {
      do {
        lVar5 = lVar7 + -1 >> 1;
        uVar2 = unaff_RDI[lVar5];
        iVar3 = func_0x00018053d680(uVar2);
        iVar4 = func_0x00018053d680(uVar1);
        if (iVar3 <= iVar4) break;
        unaff_RDI[lVar7] = uVar2;
        lVar7 = lVar5;
      } while (in_R11 < lVar5);
    }
    unaff_RDI[lVar7] = uVar1;
    if (in_R11 < 1) {
      if (1 < (int64_t)unaff_R14) {
        puVar6 = (uint64_t *)(unaff_RBP + -8);
        do {
          if (1 < (int64_t)unaff_R14) {
            *puVar6 = *unaff_RDI;
            FUN_18053f170();
          }
          puVar6 = puVar6 + -1;
          unaff_R14 = (8 - (int64_t)unaff_RDI) + (int64_t)puVar6 >> 3;
        } while (1 < (int64_t)unaff_R14);
      }
      return;
    }
  } while( true );
}





// 函数: void FUN_18053e908(void)
void FUN_18053e908(void)

{
  int64_t unaff_RBP;
  uint64_t *puVar1;
  uint64_t *unaff_RDI;
  int64_t unaff_R14;
  uint64_t uStack0000000000000070;
  
  if (1 < unaff_R14) {
    puVar1 = (uint64_t *)(unaff_RBP + -8);
    do {
      if (1 < unaff_R14) {
        uStack0000000000000070 = *puVar1;
        *puVar1 = *unaff_RDI;
        FUN_18053f170();
      }
      puVar1 = puVar1 + -1;
      unaff_R14 = (8 - (int64_t)unaff_RDI) + (int64_t)puVar1 >> 3;
    } while (1 < unaff_R14);
  }
  return;
}





