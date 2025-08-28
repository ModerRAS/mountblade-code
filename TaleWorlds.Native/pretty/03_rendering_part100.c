#define SystemInitializer System_Initializer2  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part100.c - 1 个函数

// 函数: void FUN_1803276a0(int64_t param_1,int64_t *param_2,int64_t param_3)
void FUN_1803276a0(int64_t param_1,int64_t *param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  void *puVar3;
  int64_t *plStackX_20;
  int64_t *plStack_38;
  uint64_t uStack_30;
  void *puStack_28;
  int64_t lStack_20;
  int32_t uStack_10;
  
  uStack_30 = 0xfffffffffffffffe;
  FUN_1800b30d0(system_resource_state,&plStackX_20,param_3,0);
  if (plStackX_20 == (int64_t *)0x0) {
    puVar3 = &system_buffer_ptr;
    if (*(void **)(param_3 + 8) != (void *)0x0) {
      puVar3 = *(void **)(param_3 + 8);
    }
    CoreMemoryPoolValidator(&puStack_28,puVar3);
    FUN_180058080(param_1 + 0xbf8,&plStack_38,&puStack_28);
    puStack_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_20 = 0;
    uStack_10 = 0;
    puStack_28 = &system_state_ptr;
    plVar2 = (int64_t *)plStack_38[8];
    if (plVar2 != (int64_t *)0x0) {
      plStack_38 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStack_38 = (int64_t *)*param_2;
    *param_2 = (int64_t)plVar2;
  }
  else {
    plVar2 = (int64_t *)FUN_18022cb40(plStackX_20,&plStack_38);
    lVar1 = *plVar2;
    *plVar2 = 0;
    plVar2 = (int64_t *)*param_2;
    *param_2 = lVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  return;
}



uint64_t FUN_1803277f0(int64_t param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int64_t lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint64_t uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int64_t lVar13;
  uint *puVar14;
  uint64_t in_stack_ffffffffffffff48;
  int32_t uVar15;
  uint64_t in_stack_ffffffffffffff50;
  uint64_t uVar16;
  uint *puStack_90;
  uint *puStack_88;
  uint64_t uStack_80;
  int32_t uStack_78;
  uint *puStack_70;
  uint *puStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int64_t lStack_50;
  uint **ppuStack_48;
  void *puStack_40;
  code *pcStack_38;
  
  uVar15 = (int32_t)((uint64_t)in_stack_ffffffffffffff48 >> 0x20);
  uVar16 = 0xfffffffffffffffe;
  puStack_90 = (uint *)0x0;
  puStack_88 = (uint *)0x0;
  uStack_80 = 0;
  uStack_78 = 3;
  puStack_70 = (uint *)0x0;
  puStack_68 = (uint *)0x0;
  uStack_60 = 0;
  uStack_58 = 3;
  FUN_18032b1c0(0,&puStack_90,*(int32_t *)(param_1 + 0x150),0);
  FUN_18032b1c0(param_1,&puStack_70,*(int *)(param_1 + 0x150) + -1,0);
  puVar4 = puStack_88;
  puVar3 = puStack_90;
  iVar11 = 0;
  if (puStack_90 != puStack_88) {
    lVar13 = (int64_t)puStack_88 - (int64_t)puStack_90 >> 2;
    iVar10 = iVar11;
    for (lVar5 = lVar13; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar10 = iVar10 + 1;
    }
    FUN_18033d680(puStack_90,puStack_88,(int64_t)(iVar10 + -1) * 2);
    puVar14 = puVar3;
    if (lVar13 < 0x1d) {
      while (puVar14 = puVar14 + 1, puVar14 != puVar4) {
        uVar1 = *puVar14;
        puVar7 = puVar14;
        puVar6 = puVar14;
        while (puVar7 != puVar3) {
          puVar7 = puVar7 + -1;
          if (*puVar7 <= uVar1) break;
          *puVar6 = *puVar7;
          puVar6 = puVar6 + -1;
        }
        *puVar6 = uVar1;
      }
    }
    else {
      puVar14 = puVar3 + 0x1c;
      puVar7 = puVar3;
      if (puVar3 != puVar14) {
        while (puVar7 = puVar7 + 1, puVar7 != puVar14) {
          uVar1 = *puVar7;
          puVar6 = puVar7;
          puVar12 = puVar7;
          while (puVar6 != puVar3) {
            puVar6 = puVar6 + -1;
            if (*puVar6 <= uVar1) break;
            *puVar12 = *puVar6;
            puVar12 = puVar12 + -1;
          }
          *puVar12 = uVar1;
        }
      }
      for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
        uVar1 = *puVar14;
        uVar2 = puVar14[-1];
        puVar7 = puVar14 + -1;
        puVar3 = puVar14;
        while (puVar6 = puVar7, uVar1 < uVar2) {
          *puVar3 = uVar2;
          puVar7 = puVar6 + -1;
          uVar2 = *puVar7;
          puVar3 = puVar6;
        }
        *puVar3 = uVar1;
      }
    }
  }
  puVar4 = puStack_68;
  puVar3 = puStack_70;
  if (puStack_70 != puStack_68) {
    lVar13 = (int64_t)puStack_68 - (int64_t)puStack_70 >> 2;
    iVar10 = iVar11;
    for (lVar5 = lVar13; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar10 = iVar10 + 1;
    }
    FUN_18033d680(puStack_70,puStack_68,(int64_t)(iVar10 + -1) * 2);
    puVar14 = puVar3;
    if (lVar13 < 0x1d) {
      while (puVar14 = puVar14 + 1, puVar14 != puVar4) {
        uVar1 = *puVar14;
        puVar7 = puVar14;
        puVar6 = puVar14;
        while (puVar7 != puVar3) {
          puVar7 = puVar7 + -1;
          if (*puVar7 <= uVar1) break;
          *puVar6 = *puVar7;
          puVar6 = puVar6 + -1;
        }
        *puVar6 = uVar1;
      }
    }
    else {
      puVar14 = puVar3 + 0x1c;
      puVar7 = puVar3;
      if (puVar3 != puVar14) {
        while (puVar7 = puVar7 + 1, puVar7 != puVar14) {
          uVar1 = *puVar7;
          puVar6 = puVar7;
          puVar12 = puVar7;
          while (puVar12 != puVar3) {
            puVar12 = puVar12 + -1;
            if (*puVar12 <= uVar1) break;
            *puVar6 = *puVar12;
            puVar6 = puVar6 + -1;
          }
          *puVar6 = uVar1;
        }
      }
      for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
        uVar1 = *puVar14;
        uVar2 = puVar14[-1];
        puVar7 = puVar14 + -1;
        puVar3 = puVar14;
        while (puVar6 = puVar7, uVar1 < uVar2) {
          *puVar3 = uVar2;
          puVar7 = puVar6 + -1;
          uVar2 = *puVar7;
          puVar3 = puVar6;
        }
        *puVar3 = uVar1;
      }
    }
  }
  uVar9 = CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff50 >> 8),1);
  FUN_18032bd90(param_1,&puStack_70,&puStack_90,*(int *)(param_1 + 0x150) + -1,CONCAT44(uVar15,4),
                uVar9,uVar16);
  FUN_18032bd90(param_1,&puStack_90,&puStack_70,*(int32_t *)(param_1 + 0x150),2,
                uVar9 & 0xffffffffffffff00);
  ppuStack_48 = &puStack_90;
  puStack_40 = &processed_var_6576_ptr;
  pcStack_38 = FUN_18033ced0;
  lStack_50 = param_1;
  FUN_18015b810(&lStack_50,0,(int64_t)puStack_88 - (int64_t)puStack_90 >> 2 & 0xffffffff,0x10,
                0xffffffffffffffff,&lStack_50);
  if (puStack_70 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (puStack_90 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  puStack_70 = (uint *)0x0;
  puStack_68 = (uint *)0x0;
  uStack_60 = 0;
  uStack_58 = 3;
  puStack_90 = (uint *)0x0;
  puStack_88 = (uint *)0x0;
  uStack_80 = 0;
  uStack_78 = 3;
  FUN_18032afa0(param_1,&puStack_70,*(int32_t *)(param_1 + 0x150));
  FUN_18032afa0(param_1,&puStack_90,*(int *)(param_1 + 0x150) + -1);
  puVar4 = puStack_68;
  puVar3 = puStack_70;
  if (puStack_70 != puStack_68) {
    lVar13 = (int64_t)puStack_68 - (int64_t)puStack_70 >> 2;
    iVar10 = iVar11;
    for (lVar5 = lVar13; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar10 = iVar10 + 1;
    }
    FUN_18033d680(puStack_70,puStack_68,(int64_t)(iVar10 + -1) * 2);
    puVar14 = puVar3;
    if (lVar13 < 0x1d) {
      while (puVar14 = puVar14 + 1, puVar14 != puVar4) {
        uVar1 = *puVar14;
        puVar7 = puVar14;
        puVar6 = puVar14;
        while (puVar7 != puVar3) {
          puVar7 = puVar7 + -1;
          if (*puVar7 <= uVar1) break;
          *puVar6 = *puVar7;
          puVar6 = puVar6 + -1;
        }
        *puVar6 = uVar1;
      }
    }
    else {
      puVar14 = puVar3 + 0x1c;
      puVar7 = puVar3;
      if (puVar3 != puVar14) {
        while (puVar7 = puVar7 + 1, puVar7 != puVar14) {
          uVar1 = *puVar7;
          puVar6 = puVar7;
          puVar12 = puVar7;
          while (puVar6 != puVar3) {
            puVar6 = puVar6 + -1;
            if (*puVar6 <= uVar1) break;
            *puVar12 = *puVar6;
            puVar12 = puVar12 + -1;
          }
          *puVar12 = uVar1;
        }
      }
      for (; puVar14 != puVar4; puVar14 = puVar14 + 1) {
        uVar1 = *puVar14;
        uVar2 = puVar14[-1];
        puVar6 = puVar14 + -1;
        puVar7 = puVar14;
        while (puVar12 = puVar6, uVar1 < uVar2) {
          *puVar7 = uVar2;
          puVar6 = puVar12 + -1;
          uVar2 = *puVar6;
          puVar7 = puVar12;
        }
        *puVar7 = uVar1;
      }
    }
  }
  puVar14 = puStack_88;
  puVar4 = puStack_90;
  if (puStack_90 != puStack_88) {
    lVar13 = (int64_t)puStack_88 - (int64_t)puStack_90 >> 2;
    for (lVar5 = lVar13; lVar5 != 0; lVar5 = lVar5 >> 1) {
      iVar11 = iVar11 + 1;
    }
    FUN_18033d680(puStack_90,puStack_88,(int64_t)(iVar11 + -1) * 2);
    puVar7 = puVar4;
    if (lVar13 < 0x1d) {
      while (puVar7 = puVar7 + 1, puVar7 != puVar14) {
        uVar1 = *puVar7;
        puVar6 = puVar7;
        puVar12 = puVar7;
        while (puVar6 != puVar4) {
          puVar6 = puVar6 + -1;
          if (*puVar6 <= uVar1) break;
          *puVar12 = *puVar6;
          puVar12 = puVar12 + -1;
        }
        *puVar12 = uVar1;
      }
    }
    else {
      puVar7 = puVar4 + 0x1c;
      puVar6 = puVar4;
      if (puVar4 != puVar7) {
        while (puVar6 = puVar6 + 1, puVar6 != puVar7) {
          uVar1 = *puVar6;
          puVar12 = puVar6;
          puVar8 = puVar6;
          while (puVar8 != puVar4) {
            puVar8 = puVar8 + -1;
            if (*puVar8 <= uVar1) break;
            *puVar12 = *puVar8;
            puVar12 = puVar12 + -1;
          }
          *puVar12 = uVar1;
        }
      }
      for (; puVar7 != puVar14; puVar7 = puVar7 + 1) {
        uVar1 = *puVar7;
        uVar2 = puVar7[-1];
        puVar12 = puVar7 + -1;
        puVar6 = puVar7;
        while (puVar8 = puVar12, uVar1 < uVar2) {
          *puVar6 = uVar2;
          puVar12 = puVar8 + -1;
          uVar2 = *puVar12;
          puVar6 = puVar8;
        }
        *puVar6 = uVar1;
      }
    }
  }
  FUN_180329420(param_1,&puStack_90,&puStack_70);
  if (puVar4 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
  if (puVar3 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar3);
  }
  puStack_70 = (uint *)0x0;
  puStack_68 = (uint *)0x0;
  uStack_60 = 0;
  uStack_58 = 3;
  lStack_50 = 0;
  ppuStack_48 = (uint **)0x0;
  puStack_40 = (void *)0x0;
  pcStack_38 = (code *)CONCAT44(pcStack_38._4_4_,3);
  uVar9 = FUN_180328540(param_1,&lStack_50,&puStack_70);
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (puStack_70 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar9 & 0xffffffffffffff00;
}



uint64_t FUN_180327e70(int64_t param_1,uint64_t param_2,int64_t *param_3,char param_4)

{
  char cVar1;
  uint64_t uVar2;
  uint *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  float fVar7;
  uint64_t in_stack_ffffffffffffff80;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  void *puStack_50;
  code *pcStack_48;
  
  uVar2 = CONCAT71((int7)((uint64_t)in_stack_ffffffffffffff80 >> 8),1);
  FUN_18032bd90(param_1,param_2,param_3,*(int *)(param_1 + 0x150) + -1,4,uVar2,0xfffffffffffffffe);
  FUN_18032bd90(param_1,param_3,param_2,*(int32_t *)(param_1 + 0x150),2,
                uVar2 & 0xffffffffffffff00);
  uVar2 = param_3[1] - *param_3 >> 2;
  if (param_4 == '\0') {
    if ((int)uVar2 != 0) {
      lVar6 = 0;
      uVar5 = uVar2 & 0xffffffff;
      do {
        puVar3 = (uint *)FUN_18032ba60(param_1,*(int32_t *)(lVar6 + *param_3),
                                       *(int32_t *)(param_1 + 0x150));
        lVar4 = FUN_18032ba60(param_1,*(int32_t *)(lVar6 + *param_3),
                              *(int *)(param_1 + 0x150) + -1);
        cVar1 = func_0x000180285f10(lVar4 + 4,puVar3 + 1,0x38d1b717);
        if (cVar1 == '\0') {
          *puVar3 = *puVar3 | 8;
        }
        if (*(char *)(lVar4 + 0xb0) != (char)puVar3[0x2c]) {
          *puVar3 = *puVar3 | 8;
        }
        if (*(char *)(lVar4 + 0x4c) != (char)puVar3[0x13]) {
          *puVar3 = *puVar3 | 8;
        }
        if (*(uint *)(lVar4 + 0x44) != puVar3[0x11]) {
          *puVar3 = *puVar3 | 8;
        }
        if (*(uint *)(lVar4 + 0x48) != puVar3[0x12]) {
          *puVar3 = *puVar3 | 8;
        }
        fVar7 = *(float *)(lVar4 + 0xa8) - (float)puVar3[0x2a];
        if ((fVar7 <= -0.0001) || (0.0001 <= fVar7)) {
          *puVar3 = *puVar3 | 8;
        }
        FUN_1803280a0(param_1,lVar4 + 0xc0,puVar3 + 0x30);
        FUN_180328540(param_1,lVar4 + 400,puVar3 + 100);
        uVar2 = FUN_180327e70(param_1,lVar4 + 0x170,puVar3 + 0x5c,0);
        lVar6 = lVar6 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  else {
    puStack_50 = &processed_var_6576_ptr;
    pcStack_48 = FUN_18033ced0;
    uStack_70 = (int32_t)param_1;
    uStack_6c = (int32_t)((uint64_t)param_1 >> 0x20);
    uStack_68 = SUB84(param_3,0);
    uStack_64 = (int32_t)((uint64_t)param_3 >> 0x20);
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    uVar2 = FUN_18015b810(&uStack_60,0,uVar2 & 0xffffffff,0x10,0xffffffffffffffff,&uStack_60);
  }
  return uVar2 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1803280a0(uint64_t param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  void *puVar6;
  uint *puVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  
  iVar9 = *param_3;
  uVar3 = 0;
  if ((*(byte *)(param_3 + 2) & 1) == 0) {
    if ((*(byte *)(param_2 + 2) & 1) == 0) goto LAB_180328385;
    if (iVar9 != *param_2) {
      FUN_1803297e0(param_1,param_2,4,CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1),
                    0xfffffffffffffffe);
    }
  }
  else if (((*(byte *)(param_2 + 2) & 1) == 0) && (iVar9 != *param_2)) {
    param_3[2] = param_3[2] | 2;
  }
  FUN_180328540(param_1,param_2 + 0x22,param_3 + 0x22);
  iVar9 = param_2[8];
  iVar5 = param_3[8];
  iVar4 = iVar5;
  if (iVar9 == iVar5) {
    if (iVar9 != 0) {
      pbVar2 = *(byte **)(param_2 + 6);
      lVar10 = *(int64_t *)(param_3 + 6) - (int64_t)pbVar2;
      do {
        pbVar1 = pbVar2 + lVar10;
        iVar4 = (uint)*pbVar2 - (uint)*pbVar1;
        if (iVar4 != 0) break;
        pbVar2 = pbVar2 + 1;
      } while (*pbVar1 != 0);
    }
LAB_180328172:
    if (iVar4 != 0) goto LAB_180328174;
  }
  else {
    if (iVar9 == 0) goto LAB_180328172;
LAB_180328174:
    param_3[2] = param_3[2] | 2;
    iVar9 = param_2[8];
  }
  if (iVar9 == iVar5) {
    if (iVar9 != 0) {
      pbVar2 = *(byte **)(param_2 + 6);
      lVar10 = *(int64_t *)(param_3 + 6) - (int64_t)pbVar2;
      do {
        pbVar1 = pbVar2 + lVar10;
        iVar5 = (uint)*pbVar2 - (uint)*pbVar1;
        if (iVar5 != 0) break;
        pbVar2 = pbVar2 + 1;
      } while (*pbVar1 != 0);
    }
LAB_1803281b0:
    if (iVar5 != 0) goto LAB_1803281b2;
  }
  else {
    if (iVar9 == 0) goto LAB_1803281b0;
LAB_1803281b2:
    param_2[2] = param_2[2] | 4;
  }
  if (param_2[0x2b] != param_3[0x2b]) {
    param_3[2] = param_3[2] | 8;
  }
  if (param_2[0x2a] != param_3[0x2a]) {
    param_3[2] = param_3[2] | 8;
  }
  uVar11 = (*(int64_t *)(param_3 + 0x1c) - *(int64_t *)(param_3 + 0x1a)) / 0xb0;
  uVar3 = -(*(int64_t *)(param_3 + 0x1c) - *(int64_t *)(param_3 + 0x1a) >> 0x3f);
  if ((int)uVar11 != 0) {
    lVar10 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
    uVar8 = 0;
    uVar11 = uVar11 & 0xffffffff;
    uVar12 = uVar8;
    do {
      if ((*(int *)(lVar10 + 0x48) < render_system_config_memory) &&
         (SystemInitializer(&system_ptr_8e24), render_system_config_memory == -1)) {
        render_system_config_memory = &memory_allocator_3480_ptr;
        render_system_config_memory = &system_ptr_8e78;
        render_system_config_memory = 0;


