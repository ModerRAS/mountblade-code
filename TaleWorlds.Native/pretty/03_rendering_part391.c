/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part391.c - 10 个函数

// 函数: void FUN_1804836c0(uint64_t param_1,uint64_t param_2,int64_t *param_3,int32_t param_4,
void FUN_1804836c0(uint64_t param_1,uint64_t param_2,int64_t *param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  void *puVar4;
  void *puVar5;
  void ***pppuVar6;
  int32_t uVar7;
  void **ppuStack_e8;
  int64_t lStack_e0;
  code *pcStack_d8;
  void *puStack_d0;
  void *puStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  uint64_t uStack_b0;
  void *puStack_a8;
  void *puStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int16_t uStack_58;
  uint64_t uStack_56;
  uint64_t uStack_4e;
  int16_t uStack_46;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_a8 = &system_data_buffer_ptr;
  uStack_90 = 0;
  puStack_a0 = (void *)0x0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 3;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_46 = 0;
  uStack_56 = 0;
  uStack_4e = 0;
  plVar1 = *(int64_t **)(*(int64_t *)(*param_3 + 0xa8) + 0x88);
  pcStack_d8 = (code *)&processed_var_5216_ptr;
  puStack_d0 = &processed_var_5280_ptr;
  ppuStack_e8 = &puStack_a8;
  pppuVar6 = &ppuStack_e8;
  (**(code **)(*plVar1 + 0x60))
            (plVar1,&system_data_c8f0,*(int64_t *)(*param_3 + 0xa8) + 0xc,0,pppuVar6);
  uVar7 = (int32_t)((uint64_t)pppuVar6 >> 0x20);
  if (pcStack_d8 != (code *)0x0) {
    (*pcStack_d8)(&ppuStack_e8,0,0);
  }
  puStack_c8 = &system_data_buffer_ptr;
  uStack_b0 = 0;
  puStack_c0 = (void *)0x0;
  uStack_b8 = 0;
  if (*(int64_t *)(*param_3 + 0xa8) != 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(*param_3 + 0xa8) + 0x20);
    if ((*(int64_t *)(lVar3 + 8) != 0) || (*(int64_t *)(lVar3 + 0x10) != 0)) {
      lVar3 = FUN_180087070(render_system_data_config,&system_data_0c90);
      if (lVar3 != 0) {
        lVar3 = lVar3 + 0x68;
        goto LAB_180483845;
      }
    }
  }
  lVar3 = MemoryDebugger0();
LAB_180483845:
  cVar2 = FUN_180484e60(param_1,&puStack_a8,lVar3,param_4,CONCAT44(uVar7,param_5));
  if (cVar2 == '\0') {
    puVar5 = &system_buffer_ptr;
    if (puStack_c0 != (void *)0x0) {
      puVar5 = puStack_c0;
    }
    puVar4 = &system_buffer_ptr;
    if (puStack_a0 != (void *)0x0) {
      puVar4 = puStack_a0;
    }
    SystemDataInitializer(&processed_var_6216_ptr,puVar4,puVar5);
  }
  else {
    ppuStack_e8 = (void **)&system_data_buffer_ptr;
    puStack_d0 = (void *)0x0;
    lStack_e0 = 0;
    pcStack_d8 = (code *)((uint64_t)pcStack_d8 & 0xffffffff00000000);
    FUN_1804966c0(param_6,param_1,param_2);
    ppuStack_e8 = (void **)&system_data_buffer_ptr;
    if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_e0 = 0;
    puStack_d0 = (void *)((uint64_t)puStack_d0 & 0xffffffff00000000);
    ppuStack_e8 = (void **)&system_state_ptr;
  }
  puStack_c8 = &system_data_buffer_ptr;
  if (puStack_c0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_c0 = (void *)0x0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  puStack_c8 = &system_state_ptr;
  FUN_1800739f0(&puStack_a8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180483970(int32_t *param_1,uint64_t param_2,int32_t param_3,char param_4,
void FUN_180483970(int32_t *param_1,uint64_t param_2,int32_t param_3,char param_4,
                  int param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  *param_1 = param_3;
  param_1[1] = param_5;
  *(char *)(param_1 + 2) = param_4;
  *(int8_t *)(param_1 + 6) = 0;
  if (0 < param_5) {
    lVar1 = (int64_t)(param_4 * param_5) * 2;
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(param_4 * param_5) << 2,4);
    }
                    // WARNING: Subroutine does not return
    memset(uVar2,0xffffffff,lVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804839a3(int param_1,uint64_t param_2,uint64_t param_3,char param_4)
void FUN_1804839a3(int param_1,uint64_t param_2,uint64_t param_3,char param_4)

{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  uint64_t unaff_RBX;
  uint64_t unaff_R12;
  uint64_t unaff_R14;
  int64_t lStack0000000000000030;
  
  *(uint64_t *)(in_RAX + -0x18) = unaff_RBX;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R14;
  lStack0000000000000030 = (int64_t)(param_4 * param_1);
  lVar1 = lStack0000000000000030 * 2;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStack0000000000000030 << 2,4);
  }
                    // WARNING: Subroutine does not return
  memset(uVar2,0xffffffff,lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180483a0b(char param_1,uint param_2,int param_3)
void FUN_180483a0b(char param_1,uint param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  int *unaff_RSI;
  int iVar9;
  int64_t *unaff_RDI;
  uint64_t uVar10;
  int iVar11;
  int iVar12;
  uint64_t uVar13;
  uint64_t unaff_R12;
  int64_t unaff_R14;
  int64_t *plVar14;
  int64_t *in_stack_000000b8;
  uint uStack00000000000000c0;
  int in_stack_000000c8;
  int in_stack_000000d0;
  
  uVar5 = unaff_R12;
  uVar13 = unaff_R12;
  do {
    uVar10 = uVar5 & 0xffffffff;
    plVar14 = (int64_t *)(*unaff_RDI + uVar13);
    uVar2 = *(ushort *)(plVar14 + 2);
    uStack00000000000000c0 = (uint)uVar2;
    if ((int)(uint)uVar2 <= (int)param_2) {
      uStack00000000000000c0 = param_2;
    }
    if (uVar2 != 0) {
      do {
        iVar9 = (int)uVar10;
        in_stack_000000c8 =
             ((*(byte *)((int64_t)plVar14 + 0x12) + 1) * 3 +
             (uint)*(byte *)((int64_t)plVar14 + 0x13)) * iVar9;
        FUN_18040f060(plVar14,*plVar14,&stack0x000000c8,&stack0x00000040,
                      *(byte *)((int64_t)plVar14 + 0x12));
        bVar6 = (byte)in_stack_000000c8 & 0xf;
        iVar11 = in_stack_000000c8;
        if (in_stack_000000c8 < 0) {
          iVar11 = in_stack_000000c8 + 0xf;
          bVar6 = bVar6 - 0x10;
        }
        iVar11 = (int)((float)(ushort)((ushort)(*(uint *)(*plVar14 + (int64_t)(iVar11 >> 4) * 2) >>
                                               (bVar6 & 0x1f)) &
                                      (1 << (*(byte *)((int64_t)plVar14 + 0x13) & 0x1f)) - 1U) -
                      (float)*unaff_RSI);
        if (iVar9 == uVar2 - 1) {
          *(short *)(unaff_R14 + ((int64_t)((char)unaff_RSI[2] * iVar11) + unaff_R12) * 2) =
               (short)uVar10;
        }
        else {
          in_stack_000000c8 =
               ((uint)*(byte *)((int64_t)plVar14 + 0x13) +
               (*(byte *)((int64_t)plVar14 + 0x12) + 1) * 3) * (iVar9 + 1);
          FUN_18040f060(plVar14,*plVar14,&stack0x000000c8,&stack0x00000040,
                        *(byte *)((int64_t)plVar14 + 0x12));
          bVar6 = (byte)in_stack_000000c8 & 0xf;
          iVar12 = in_stack_000000c8;
          if (in_stack_000000c8 < 0) {
            iVar12 = in_stack_000000c8 + 0xf;
            bVar6 = bVar6 - 0x10;
          }
          iVar3 = *unaff_RSI;
          uVar4 = *(uint *)(*plVar14 + (int64_t)(iVar12 >> 4) * 2);
          bVar1 = *(byte *)((int64_t)plVar14 + 0x13);
          for (; iVar11 < (int)((float)(ushort)((ushort)(uVar4 >> (bVar6 & 0x1f)) &
                                               (1 << (bVar1 & 0x1f)) - 1U) - (float)iVar3);
              iVar11 = iVar11 + 1) {
            *(short *)(unaff_R14 + ((int64_t)((char)unaff_RSI[2] * iVar11) + unaff_R12) * 2) =
                 (short)uVar10;
          }
        }
        uVar10 = (uint64_t)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < (int)(uint)uVar2);
      param_1 = (char)unaff_RSI[2];
      uVar5 = 0;
      param_3 = in_stack_000000d0;
    }
    param_3 = param_3 + 1;
    uVar13 = uVar13 + 0x4a;
    unaff_R12 = unaff_R12 + 1;
    unaff_RDI = in_stack_000000b8;
    param_2 = uStack00000000000000c0;
    in_stack_000000d0 = param_3;
  } while (param_3 < param_1);
  uVar4 = uStack00000000000000c0;
  if ((int)uStack00000000000000c0 < 2) {
    uVar4 = 2;
  }
  uVar13 = uVar5 & 0xffffffff;
  cVar7 = (char)uVar13;
  for (uVar4 = uVar4 - 1; uVar4 != 0; uVar4 = uVar4 >> 1) {
    uVar8 = (int)uVar13 + 1;
    uVar13 = (uint64_t)uVar8;
    cVar7 = (char)uVar8;
  }
  *(char *)(unaff_RSI + 6) = cVar7;
  iVar11 = (int)(char)unaff_RSI[2] * (int)cVar7 * unaff_RSI[1] + -1;
  iVar11 = (((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
  iVar11 = ((int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3) + 2;
  if (iVar11 != 0) {
    uVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar11,
                          CONCAT71((uint7)(uint3)((uint)param_3 >> 8),4));
  }
  *(uint64_t *)(unaff_RSI + 4) = uVar5;
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(int64_t)iVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180483c36(void)
void FUN_180483c36(void)

{
  int iVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t unaff_RSI;
  int32_t unaff_R12D;
  int32_t unaff_000000a4;
  
  cVar3 = (char)unaff_R12D + '\x01';
  *(char *)(unaff_RSI + 0x18) = cVar3;
  iVar1 = (int)*(char *)(unaff_RSI + 8) * (int)cVar3 * *(int *)(unaff_RSI + 4) + -1;
  iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) + 1) * 0x20;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 2;
  if (iVar1 == 0) {
    uVar2 = CONCAT44(unaff_000000a4,unaff_R12D);
  }
  else {
    uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar1,4);
  }
  *(uint64_t *)(unaff_RSI + 0x10) = uVar2;
                    // WARNING: Subroutine does not return
  memset(uVar2,0,(int64_t)iVar1);
}





// 函数: void FUN_180483d26(void)
void FUN_180483d26(void)

{
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180483d33(void)
void FUN_180483d33(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180483d80(uint64_t *param_1,int64_t *param_2)
void FUN_180483d80(uint64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  short sVar6;
  ushort uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  
  *(short *)(param_1 + 2) = (short)param_2[2];
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar10 = 0;
  param_1[1] = 0;
  if (*param_1 == 0) {
    *param_1 = 0;
    if ((short)param_2[2] == 0) {
      return;
    }
    if ((uint64_t)(ushort)param_1[2] == 0) {
      uVar8 = 0;
      uVar9 = uVar10;
    }
    else {
      uVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)(ushort)param_1[2] * 4,4);
      uVar8 = (uint64_t)(ushort)param_1[2];
    }
    sVar6 = (short)uVar8;
    param_1[1] = uVar9;
    uVar9 = uVar10;
    if (uVar8 != 0) {
      uVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 << 4,4);
      sVar6 = (short)param_1[2];
    }
    *param_1 = uVar9;
    uVar8 = uVar10;
    if (sVar6 == 0) {
      uVar7 = (ushort)param_1[2];
    }
    else {
      do {
        uVar11 = (int)uVar8 + 1;
        puVar1 = (int32_t *)(*param_2 + -0x10 + uVar10 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (int32_t *)(uVar10 + *param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar7 = (ushort)param_1[2];
        uVar10 = uVar10 + 0x10;
        uVar8 = (uint64_t)uVar11;
      } while ((int)uVar11 < (int)(uint)uVar7);
    }
                    // WARNING: Subroutine does not return
    memcpy(param_1[1],param_2[1],(uint64_t)uVar7 << 2);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180483e80(uint64_t *param_1,int64_t *param_2)
void FUN_180483e80(uint64_t *param_1,int64_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  short sVar6;
  ushort uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  
  *(short *)(param_1 + 2) = (short)param_2[2];
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  uVar10 = 0;
  param_1[1] = 0;
  if (*param_1 == 0) {
    *param_1 = 0;
    if ((short)param_2[2] == 0) {
      return;
    }
    if ((uint64_t)(ushort)param_1[2] == 0) {
      uVar8 = 0;
      uVar9 = uVar10;
    }
    else {
      uVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(uint64_t)(ushort)param_1[2] * 4,4);
      uVar8 = (uint64_t)(ushort)param_1[2];
    }
    sVar6 = (short)uVar8;
    param_1[1] = uVar9;
    uVar9 = uVar10;
    if (uVar8 != 0) {
      uVar9 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar8 << 4,4);
      sVar6 = (short)param_1[2];
    }
    *param_1 = uVar9;
    uVar8 = uVar10;
    if (sVar6 == 0) {
      uVar7 = (ushort)param_1[2];
    }
    else {
      do {
        uVar11 = (int)uVar8 + 1;
        puVar1 = (int32_t *)(*param_2 + -0x10 + uVar10 + 0x10);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar2 = (int32_t *)(uVar10 + *param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar7 = (ushort)param_1[2];
        uVar10 = uVar10 + 0x10;
        uVar8 = (uint64_t)uVar11;
      } while ((int)uVar11 < (int)(uint)uVar7);
    }
                    // WARNING: Subroutine does not return
    memcpy(param_1[1],param_2[1],(uint64_t)uVar7 << 2);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180483f80(uint64_t *param_1,uint64_t param_2)
void FUN_180483f80(uint64_t *param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  
  puVar7 = (uint64_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar7) / 0x48) < param_2) {
    puVar5 = (uint64_t *)*param_1;
    lVar2 = ((int64_t)puVar7 - (int64_t)puVar5) / 0x48;
    uVar10 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar10 = 1;
    }
    if (uVar10 < lVar2 + param_2) {
      uVar10 = lVar2 + param_2;
    }
    puVar3 = (uint64_t *)0x0;
    if (uVar10 != 0) {
      puVar3 = (uint64_t *)
               CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 0x48,*(int8_t *)(param_1 + 3),puVar7,
                             0xfffffffffffffffe);
      puVar7 = (uint64_t *)param_1[1];
      puVar5 = (uint64_t *)*param_1;
    }
    puVar4 = puVar3;
    if (puVar5 != puVar7) {
      puVar6 = (uint64_t *)((int64_t)puVar3 + 0x1a);
      do {
        *(int16_t *)((int64_t)puVar6 + -10) = 0;
        *puVar4 = 0;
        *(uint64_t *)((int64_t)puVar6 + -0x12) = 0;
        *(int16_t *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        *(int16_t *)((int64_t)puVar6 + 0x1a) = 0;
        *(uint64_t *)((int64_t)puVar6 + 10) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x12) = 0;
        *(int16_t *)((int64_t)puVar6 + 0x2c) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x1c) = 0;
        *(uint64_t *)((int64_t)puVar6 + 0x24) = 0;
        puVar4 = puVar4 + 9;
        puVar6 = puVar6 + 9;
      } while ((uint64_t *)((int64_t)puVar5 + (-0x1a - (int64_t)puVar3) + (int64_t)puVar6) !=
               puVar7);
    }
    if (param_2 != 0) {
      puVar7 = (uint64_t *)((int64_t)puVar4 + 0x1a);
      uVar9 = param_2;
      do {
        *(int16_t *)((int64_t)puVar7 + -10) = 0;
        *(uint64_t *)((int64_t)puVar7 + -0x1a) = 0;
        *(uint64_t *)((int64_t)puVar7 + -0x12) = 0;
        *(int16_t *)(puVar7 + 1) = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        *(int16_t *)((int64_t)puVar7 + 0x1a) = 0;
        *(uint64_t *)((int64_t)puVar7 + 10) = 0;
        *(uint64_t *)((int64_t)puVar7 + 0x12) = 0;
        *(int16_t *)((int64_t)puVar7 + 0x2c) = 0;
        *(uint64_t *)((int64_t)puVar7 + 0x1c) = 0;
        *(uint64_t *)((int64_t)puVar7 + 0x24) = 0;
        puVar7 = puVar7 + 9;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    plVar1 = (int64_t *)param_1[1];
    plVar8 = (int64_t *)*param_1;
    if (plVar8 != plVar1) {
      do {
        if (*(int64_t *)((int64_t)plVar8 + 0x36) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar8 + 0x36) = 0;
        if (*(int64_t *)((int64_t)plVar8 + 0x3e) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar8 + 0x3e) = 0;
        if (*(int64_t *)((int64_t)plVar8 + 0x24) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar8 + 0x24) = 0;
        if (*(int64_t *)((int64_t)plVar8 + 0x2c) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar8 + 0x2c) = 0;
        if (*(int64_t *)((int64_t)plVar8 + 0x12) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar8 + 0x12) = 0;
        if (*(int64_t *)((int64_t)plVar8 + 0x1a) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *(uint64_t *)((int64_t)plVar8 + 0x1a) = 0;
        if (*plVar8 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *plVar8 = 0;
        if (plVar8[1] != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        plVar8[1] = 0;
        plVar8 = plVar8 + 9;
      } while (plVar8 != plVar1);
      plVar8 = (int64_t *)*param_1;
    }
    if (plVar8 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar8);
    }
    *param_1 = puVar3;
    param_1[1] = puVar4 + param_2 * 9;
    param_1[2] = puVar3 + uVar10 * 9;
  }
  else {
    if (param_2 != 0) {
      puVar5 = (uint64_t *)((int64_t)puVar7 + 0x1a);
      uVar10 = param_2;
      do {
        *(int16_t *)((int64_t)puVar5 + -10) = 0;
        *puVar7 = 0;
        *(uint64_t *)((int64_t)puVar5 + -0x12) = 0;
        *(int16_t *)(puVar5 + 1) = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        *(int16_t *)((int64_t)puVar5 + 0x1a) = 0;
        *(uint64_t *)((int64_t)puVar5 + 10) = 0;
        *(uint64_t *)((int64_t)puVar5 + 0x12) = 0;
        *(int16_t *)((int64_t)puVar5 + 0x2c) = 0;
        *(uint64_t *)((int64_t)puVar5 + 0x1c) = 0;
        *(uint64_t *)((int64_t)puVar5 + 0x24) = 0;
        puVar7 = puVar7 + 9;
        puVar5 = puVar5 + 9;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar7 = (uint64_t *)param_1[1];
    }
    param_1[1] = puVar7 + param_2 * 9;
  }
  return;
}





