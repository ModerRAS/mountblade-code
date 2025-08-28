#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part544.c - 10 个函数

// 函数: void FUN_180566420(int64_t param_1,float param_2)
void FUN_180566420(int64_t param_1,float param_2)

{
  code *pcVar1;
  uint64_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_138 [32];
  void *puStack_118;
  uint64_t *puStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_b8;
  void *puStack_b0;
  int8_t *puStack_a8;
  int32_t uStack_a0;
  int8_t auStack_98 [16];
  uint64_t uStack_88;
  
  if (param_1 == 0) {
    return;
  }
  uStack_b8 = 0xfffffffffffffffe;
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  if (0.0 <= render_system_control_memory) {
    param_2 = render_system_control_memory;
  }
  *(float *)(*(int64_t *)(param_1 + 0x3360) + 0xe1c) = param_2;
  *(float *)(param_1 + 0x3044) = param_2 * 0.1;
  *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
  FUN_1803aad40(*(uint64_t *)(param_1 + 0x3360),param_1 + 0x3018,1);
  FUN_1803addf0(*(uint64_t *)(param_1 + 0x3360),param_1);
  pcVar1 = *(code **)(*render_system_data_memory + 0x18);
  puStack_b0 = &system_config_ptr;
  puStack_a8 = auStack_98;
  auStack_98[0] = 0;
  uStack_a0 = 7;
  strcpy_s(auStack_98,0x10,&unknown_var_4064_ptr);
  (*pcVar1)(render_system_data_memory,&puStack_b0,param_2 * 0.1);
  puStack_b0 = &system_state_ptr;
  fVar5 = *(float *)(param_1 + 0x440) * 0.0031847134;
  fVar6 = 0.0;
  if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
    fVar6 = 1.0;
  }
  uVar2 = *(uint64_t *)(*(int64_t *)(param_1 + 0x3360) + 0xe20);
  puStack_118 = &system_data_buffer_ptr;
  uStack_100 = 0;
  puStack_110 = (uint64_t *)0x0;
  uStack_108 = 0;
  puVar4 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x29,0x13);
  *(int8_t *)puVar4 = 0;
  puStack_110 = puVar4;
  uVar3 = CoreEngineSystemCleanup(puVar4);
  uStack_100 = CONCAT44(uStack_100._4_4_,uVar3);
  *puVar4 = 0x616373236373694d;
  puVar4[1] = 0x7274735f72657474;
  *(int32_t *)(puVar4 + 2) = 0x74676e65;
  *(int32_t *)((int64_t)puVar4 + 0x14) = 0x6c655f68;
  *(int32_t *)(puVar4 + 3) = 0x74617665;
  *(int32_t *)((int64_t)puVar4 + 0x1c) = 0x5f6e6f69;
  puVar4[4] = 0x7265696669646f6d;
  *(int8_t *)(puVar4 + 5) = 0;
  uStack_108 = 0x28;
  FUN_180418550(uVar2,&puStack_118,fVar6 * 240.0);
  puStack_118 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}



// WARNING: Removing unreachable block (ram,0x000180567510)
// WARNING: Removing unreachable block (ram,0x000180567518)
// WARNING: Removing unreachable block (ram,0x00018056751e)
// WARNING: Removing unreachable block (ram,0x0001805670f4)
// WARNING: Removing unreachable block (ram,0x000180567100)
// WARNING: Removing unreachable block (ram,0x000180567132)
// WARNING: Removing unreachable block (ram,0x000180567155)
// WARNING: Removing unreachable block (ram,0x00018056715b)
// WARNING: Removing unreachable block (ram,0x000180567256)
// WARNING: Removing unreachable block (ram,0x000180567267)
// WARNING: Removing unreachable block (ram,0x00018056738f)
// WARNING: Removing unreachable block (ram,0x0001805673a0)
// WARNING: Removing unreachable block (ram,0x000180567420)
// WARNING: Removing unreachable block (ram,0x000180567443)
// WARNING: Removing unreachable block (ram,0x000180567447)
// WARNING: Removing unreachable block (ram,0x00018056744f)
// WARNING: Removing unreachable block (ram,0x000180567453)
// WARNING: Removing unreachable block (ram,0x00018056745e)
// WARNING: Removing unreachable block (ram,0x000180567480)
// WARNING: Removing unreachable block (ram,0x000180567495)
// WARNING: Removing unreachable block (ram,0x00018056749b)
// WARNING: Removing unreachable block (ram,0x0001805674ad)
// WARNING: Removing unreachable block (ram,0x000180567265)
// WARNING: Removing unreachable block (ram,0x0001805674b9)
// WARNING: Removing unreachable block (ram,0x0001805674d0)
// WARNING: Removing unreachable block (ram,0x0001805674d6)
// WARNING: Removing unreachable block (ram,0x0001805674fb)
// WARNING: Removing unreachable block (ram,0x00018056752c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180566900(uint64_t param_1)
void FUN_180566900(uint64_t param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int iVar6;
  int32_t uVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  uint64_t *puVar13;
  void *puVar14;
  int *piVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  uint64_t *puVar18;
  char *pcVar19;
  uint64_t *puVar20;
  int64_t lStack_200;
  void *puStack_1d0;
  int64_t lStack_1c8;
  int32_t uStack_1c0;
  uint64_t uStack_1b8;
  uint64_t uStack_1b0;
  char *pcStack_1a8;
  void *puStack_1a0;
  char *pcStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  void *puStack_180;
  int64_t lStack_178;
  int iStack_170;
  uint64_t uStack_168;
  int *piStack_160;
  int64_t lStack_150;
  uint64_t *puStack_148;
  uint64_t *puStack_140;
  uint64_t *puStack_138;
  int32_t uStack_130;
  int32_t *puStack_128;
  int32_t *puStack_120;
  int32_t *puStack_118;
  int32_t uStack_110;
  uint64_t *puStack_108;
  uint64_t *puStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  void *puStack_e8;
  int64_t lStack_e0;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  
  uStack_c8 = 0xfffffffffffffffe;
  puStack_128 = (int32_t *)0x0;
  puStack_120 = (int32_t *)0x0;
  pcVar8 = (char *)0x0;
  puStack_118 = (int32_t *)0x0;
  uStack_110 = 3;
  puStack_148 = (uint64_t *)0x0;
  puStack_140 = (uint64_t *)0x0;
  puStack_138 = (uint64_t *)0x0;
  uStack_130 = 3;
  FUN_180627910(&puStack_e8);
  puStack_108 = (uint64_t *)0x0;
  puStack_100 = (uint64_t *)0x0;
  uStack_f8 = 0;
  uStack_f0 = 3;
  if (lStack_e0 != 0) {
    FUN_180057980(&puStack_e8,&puStack_108,&system_data_63b4);
  }
  puVar18 = puStack_108;
  puVar5 = puStack_120;
  puVar17 = puStack_140;
  puVar10 = puStack_148;
  lStack_150 = ((int64_t)puStack_100 - (int64_t)puStack_108 >> 5) + -1;
  if (lStack_150 == 0) {
    FUN_1801ae4a0(param_1,&unknown_var_8576_ptr);
    puVar20 = puStack_100;
    puVar18 = puStack_108;
    puVar5 = puStack_128;
    uStack_1b0 = 0;
    for (puVar17 = puStack_108; puVar17 != puVar20; puVar17 = puVar17 + 4) {
      (**(code **)*puVar17)(puVar17,0);
    }
    if (puVar18 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar18);
    }
    puStack_e8 = &system_data_buffer_ptr;
    if (lStack_e0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_e0 = 0;
    uStack_d0 = 0;
    puStack_e8 = &system_state_ptr;
    if (puVar10 == (uint64_t *)0x0) {
      if (puVar5 == (int32_t *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar10);
  }
  piVar15 = (int *)(puStack_108 + 2);
  puStack_1a0 = &system_data_buffer_ptr;
  uStack_188 = 0;
  pcStack_198 = (char *)0x0;
  uStack_190 = uStack_190 & 0xffffffff00000000;
  piStack_160 = piVar15;
  if (*piVar15 != 0) {
    iVar6 = *piVar15 + 1;
    if (iVar6 < 0x10) {
      iVar6 = 0x10;
    }
    pcVar8 = (char *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,&unknown_var_3251_ptr);
    *pcVar8 = '\0';
    pcStack_198 = pcVar8;
    uVar7 = CoreEngineSystemCleanup(pcVar8);
    uStack_188 = CONCAT44(uStack_188._4_4_,uVar7);
    if (*piVar15 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(pcVar8,puVar18[1],*piVar15 + 1);
    }
  }
  if (puVar18[1] != 0) {
    uStack_190 = uStack_190 & 0xffffffff00000000;
    if (pcVar8 != (char *)0x0) {
      *pcVar8 = '\0';
    }
    uStack_188 = uStack_188 & 0xffffffff;
  }
  puVar13 = (uint64_t *)0x0;
  puVar18 = (uint64_t *)0x0;
  puVar20 = (uint64_t *)0x0;
  if (pcVar8 != (char *)0x0) {
    cVar1 = *pcStack_198;
    pcVar19 = pcVar8;
    while( true ) {
      if (cVar1 == '\0') break;
      puVar10 = (uint64_t *)0x0;
      lVar9 = strchr(&system_data_d518,(int)*pcVar8);
      if ((lVar9 != 0) && (pcVar19 != pcVar8)) {
        puStack_180 = &system_data_buffer_ptr;
        uStack_168 = 0;
        lStack_178 = 0;
        iStack_170 = 0;
        FUN_180628210(&puStack_180,pcVar19,(int)pcVar8 - (int)pcVar19);
        pcVar19 = pcVar8 + 1;
        pcStack_1a8 = pcVar19;
        if (puVar18 < puVar13) {
          *puVar18 = &system_state_ptr;
          puVar18[1] = 0;
          *(int32_t *)(puVar18 + 2) = 0;
          *puVar18 = &system_data_buffer_ptr;
          puVar18[3] = 0;
          puVar18[1] = 0;
          *(int32_t *)(puVar18 + 2) = 0;
          CoreEngineDataBufferProcessor(puVar18,iStack_170);
          if (iStack_170 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(puVar18[1],lStack_178,iStack_170 + 1);
          }
          if (lStack_178 != 0) {
            *(int32_t *)(puVar18 + 2) = 0;
            if ((int8_t *)puVar18[1] != (int8_t *)0x0) {
              *(int8_t *)puVar18[1] = 0;
            }
            *(int32_t *)((int64_t)puVar18 + 0x1c) = 0;
          }
        }
        else {
          lVar9 = (int64_t)puVar18 - (int64_t)puVar20 >> 5;
          if (lVar9 == 0) {
            lVar9 = 1;
LAB_180566c1e:
            puVar10 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 << 5,3);
          }
          else {
            lVar9 = lVar9 * 2;
            if (lVar9 != 0) goto LAB_180566c1e;
          }
          puVar11 = (uint64_t *)FUN_180059780(puVar20,puVar18,puVar10);
          CoreEngineDataTransformer(puVar11,&puStack_180);
          pcVar19 = pcStack_1a8;
          for (puVar13 = puVar20; pcStack_1a8 = pcVar19, puVar13 != puVar18; puVar13 = puVar13 + 4)
          {
            (**(code **)*puVar13)(puVar13,0);
            pcVar19 = pcStack_1a8;
          }
          if (puVar20 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar20);
          }
          puVar13 = puVar10 + lVar9 * 4;
          puVar20 = puVar10;
          puVar18 = puVar11;
        }
        puVar18 = puVar18 + 4;
        puStack_180 = &system_data_buffer_ptr;
        if (lStack_178 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_178 = 0;
        uStack_168 = uStack_168 & 0xffffffff00000000;
        puStack_180 = &system_state_ptr;
      }
      pcVar8 = pcVar8 + 1;
      cVar1 = *pcVar8;
      puVar10 = puStack_148;
    }
    puVar11 = (uint64_t *)0x0;
    if (pcVar19 != pcVar8) {
      puStack_1d0 = &system_data_buffer_ptr;
      uStack_1b8 = 0;
      lStack_1c8 = 0;
      uStack_1c0 = 0;
      FUN_180628210(&puStack_1d0,pcVar19,(int)pcVar8 - (int)pcVar19);
      if (puVar18 < puVar13) {
        CoreEngineDataTransformer(puVar18,&puStack_1d0);
        puVar11 = puVar20;
        puVar13 = puVar18;
      }
      else {
        lVar9 = (int64_t)puVar18 - (int64_t)puVar20 >> 5;
        if (lVar9 == 0) {
          lVar9 = 1;
LAB_180566d7c:
          puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 << 5,3);
        }
        else {
          lVar9 = lVar9 * 2;
          if (lVar9 != 0) goto LAB_180566d7c;
        }
        puVar13 = (uint64_t *)FUN_180059780(puVar20,puVar18,puVar11);
        CoreEngineDataTransformer(puVar13,&puStack_1d0);
        for (puVar16 = puVar20; puVar16 != puVar18; puVar16 = puVar16 + 4) {
          (**(code **)*puVar16)(puVar16,0);
        }
        if (puVar20 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar20);
        }
      }
      puVar18 = puVar13 + 4;
      puStack_1d0 = &system_data_buffer_ptr;
      if (lStack_1c8 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_1c8 = 0;
      uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
      puStack_1d0 = &system_state_ptr;
      puVar20 = puVar11;
    }
  }
  puVar12 = (int32_t *)0x0;
  dVar2 = (double)atof(puVar20[1]);
  dVar3 = (double)atof(puVar20[5]);
  puVar14 = &system_buffer_ptr;
  if ((void *)puVar20[9] != (void *)0x0) {
    puVar14 = (void *)puVar20[9];
  }
  uVar7 = atoll(puVar14);
  puVar4 = puStack_128;
  if (puVar5 < puStack_118) {
    *puVar5 = uVar7;
    puVar12 = puVar5;
  }
  else {
    pcStack_1a8 = (char *)((int64_t)puVar5 - (int64_t)puStack_128);
    if ((int64_t)pcStack_1a8 >> 2 == 0) {
      lStack_200 = 1;
LAB_180566ec9:
      puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStack_200 * 4,3);
    }
    else {
      lStack_200 = ((int64_t)pcStack_1a8 >> 2) * 2;
      if (lStack_200 != 0) goto LAB_180566ec9;
    }
    if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
      memmove(puVar12,puVar4,pcStack_1a8);
    }
    *puVar12 = uVar7;
    if (puVar4 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar4);
    }
    puStack_118 = puVar12 + lStack_200;
    puStack_128 = puVar12;
  }
  puStack_120 = puVar12 + 1;
  uStack_1b0 = CONCAT44((float)dVar3,(float)dVar2);
  if (puVar17 < puStack_138) {
    *puVar17 = uStack_1b0;
    puVar13 = puVar17;
    goto LAB_180567006;
  }
  lVar9 = (int64_t)puVar17 - (int64_t)puVar10 >> 3;
  if (lVar9 == 0) {
    lVar9 = 1;
LAB_180566f98:
    puVar13 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 8,3);
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 != 0) goto LAB_180566f98;
    puVar13 = (uint64_t *)0x0;
  }
  if (puVar10 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar13,puVar10,(int64_t)puVar17 - (int64_t)puVar10);
  }
  *puVar13 = uStack_1b0;
  if (puVar10 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar10);
  }
  puStack_138 = puVar13 + lVar9;
  puStack_148 = puVar13;
LAB_180567006:
  puStack_140 = puVar13 + 1;
  for (puVar10 = puVar20; puVar10 != puVar18; puVar10 = puVar10 + 4) {
    (**(code **)*puVar10)(puVar10,0);
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180567600(uint64_t *param_1,uint64_t *param_2)
void FUN_180567600(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  
  puVar6 = (uint64_t *)param_1[1];
  if (puVar6 < (uint64_t *)param_1[2]) {
    param_1[1] = (int64_t)puVar6 + 0x1c;
    uVar4 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar4;
    puVar6[2] = param_2[2];
    *(int32_t *)(puVar6 + 3) = *(int32_t *)(param_2 + 3);
    return;
  }
  puVar7 = (uint64_t *)*param_1;
  lVar8 = ((int64_t)puVar6 - (int64_t)puVar7) / 0x1c;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) {
      puVar5 = (int32_t *)0x0;
      goto LAB_1805676a8;
    }
  }
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 0x1c,(char)param_1[3]);
  puVar7 = (uint64_t *)*param_1;
  puVar6 = (uint64_t *)param_1[1];
LAB_1805676a8:
  if (puVar7 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar7,(int64_t)puVar6 - (int64_t)puVar7);
  }
  uVar1 = *(int32_t *)((int64_t)param_2 + 4);
  uVar2 = *(int32_t *)(param_2 + 1);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0xc);
  *puVar5 = *(int32_t *)param_2;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  *(uint64_t *)(puVar5 + 4) = param_2[2];
  puVar5[6] = *(int32_t *)(param_2 + 3);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (uint64_t)puVar5;
  param_1[2] = (uint64_t)(puVar5 + lVar8 * 7);
  param_1[1] = (uint64_t)(puVar5 + 7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180567651(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180567651(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t *unaff_RBX;
  int32_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar5;
  
  if (param_1 / 0x1c == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = (param_1 / 0x1c) * 2;
    if (lVar5 == 0) {
      puVar4 = (int32_t *)0x0;
      goto LAB_1805676a8;
    }
  }
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x1c,(char)unaff_RBX[3]);
  param_4 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_1805676a8:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,param_4,unaff_RDI - param_4);
  }
  uVar1 = unaff_RSI[1];
  uVar2 = unaff_RSI[2];
  uVar3 = unaff_RSI[3];
  *puVar4 = *unaff_RSI;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  *(uint64_t *)(puVar4 + 4) = *(uint64_t *)(unaff_RSI + 4);
  puVar4[6] = unaff_RSI[6];
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RBX = (int64_t)puVar4;
  unaff_RBX[2] = (int64_t)(puVar4 + lVar5 * 7);
  unaff_RBX[1] = (int64_t)(puVar4 + 7);
  return;
}



void thunk_CoreEngineMemoryPoolCleaner(void)

{
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180567730(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)
void FUN_180567730(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  lVar2 = *(int64_t *)param_4[1];
  lVar3 = *param_4;
  uVar6 = *(int32_t *)(lVar2 + 0x2e8);
  uVar7 = *(int32_t *)(lVar2 + 0x2ec);
  uVar8 = *(int32_t *)(lVar2 + 0x2f0);
  uVar9 = *(int32_t *)(lVar2 + 0x2f4);
  uVar10 = *(int32_t *)(lVar2 + 0x2f8);
  uVar11 = *(int32_t *)(lVar2 + 0x2fc);
  uVar12 = *(int32_t *)(lVar2 + 0x300);
  uVar13 = *(int32_t *)(lVar2 + 0x304);
  uVar14 = *(int32_t *)(lVar2 + 0x308);
  uVar15 = *(int32_t *)(lVar2 + 0x30c);
  uVar16 = *(int32_t *)(lVar2 + 0x310);
  uVar17 = *(uint64_t *)(lVar2 + 0x314);
  uVar18 = *(uint64_t *)(lVar2 + 0x31c);
  uVar19 = *(uint64_t *)(lVar2 + 0x324);
  uVar20 = *(uint64_t *)(lVar2 + 0x32c);
  uVar21 = *(uint64_t *)(lVar2 + 0x334);
  *(int32_t *)(lVar3 + 0x14) = *(int32_t *)(lVar2 + 0x2e4);
  *(int32_t *)(lVar3 + 0x18) = uVar6;
  *(int32_t *)(lVar3 + 0x1c) = uVar7;
  *(int32_t *)(lVar3 + 0x20) = uVar8;
  *(int32_t *)(lVar3 + 0x24) = uVar9;
  *(int32_t *)(lVar3 + 0x28) = uVar10;
  *(int32_t *)(lVar3 + 0x2c) = uVar11;
  *(int32_t *)(lVar3 + 0x30) = uVar12;
  *(int32_t *)(lVar3 + 0x34) = uVar13;
  *(int32_t *)(lVar3 + 0x38) = uVar14;
  *(int32_t *)(lVar3 + 0x3c) = uVar15;
  *(int32_t *)(lVar3 + 0x40) = uVar16;
  *(uint64_t *)(lVar3 + 0x44) = uVar17;
  *(uint64_t *)(lVar3 + 0x4c) = uVar18;
  *(uint64_t *)(lVar3 + 0x54) = uVar19;
  *(uint64_t *)(lVar3 + 0x5c) = uVar20;
  *(uint64_t *)(lVar3 + 100) = uVar21;
  plVar4 = (int64_t *)*param_4;
  if ((((char)plVar4[2] == '\0') && (*(char *)((int64_t)plVar4 + 0x11) == '\0')) && (*plVar4 != 0))
  {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int16_t *)(plVar4 + 2) = 1;
  *plVar4 = lVar1;
  plVar4[1] = param_2;
  puVar5 = (uint64_t *)*param_4;
  if ((*(char *)((int64_t)puVar5 + 0x66) == '\0') && (*(char *)(puVar5 + 2) != '\0')) {
    uVar21 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,puVar5[1],3);
                    // WARNING: Subroutine does not return
    memcpy(uVar21,*puVar5,puVar5[1]);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180567870(int64_t *param_1,int64_t *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_3;
  iVar5 = iVar4 + -3;
  if (iVar5 == 0) {
    return 0x180c0b2e0;
  }
  if (iVar5 == 1) {
    return *param_1;
  }
  if (iVar4 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(*param_1,param_2,param_3,iVar5,0xfffffffffffffffe);
    }
  }
  else {
    if (iVar4 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (iVar4 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_180567960(int64_t *param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  
  if (param_3 == 3) {
    return 0x180c0b260;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *param_1 = (int64_t)puVar3;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180567a40(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180567a40(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 3;
  *(uint64_t *)(param_1 + 6) = 0;
  *(int32_t **)param_1 = param_1;
  *(int32_t **)(param_1 + 2) = param_1;
  *(uint64_t *)(param_1 + 0x16e) = 0;
  param_1[0x16c] = 0;
  *(uint64_t *)(param_1 + 0x170) = 0;
  *(uint64_t *)(param_1 + 0x16a) = 0;
  *(uint64_t *)(param_1 + 0x170) = render_system_memory;
  *(uint64_t *)(param_1 + 0x178) = 0;
  *(int32_t **)(param_1 + 0x16e) = param_1 + 8;
  param_1[0x16c] = 0x2c40;
  param_1[0x17a] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 8,0,0x588,param_4,0xfffffffffffffffe);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180567bb0(int64_t param_1)
void FUN_180567bb0(int64_t param_1)

{
  int64_t lVar1;
  int8_t auStack_d98 [64];
  uint uStack_d58;
  int32_t uStack_d54;
  uint64_t uStack_58;
  
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d98;
  lVar1 = FUN_1805696d0();
  uStack_d58 = render_system_memory;
  uStack_d54 = 0;
  *(uint64_t *)(lVar1 + 0x5a0) = (uint64_t)render_system_memory;
  *(double *)(lVar1 + 0x5a8) =
       (double)((float)(*(int64_t *)
                         (&system_error_code + (int64_t)*(int *)(render_system_memory + 0x87b790) * 8) -
                       *(int64_t *)(render_system_memory + 0x87b788)) * 1e-05);
  SystemBufferProcessor(lVar1,*(int32_t *)(param_1 + 0x5f0),&unknown_var_8192_ptr);
  FUN_180569670(lVar1);
  FUN_18055f4e0(lVar1,*(int *)(lVar1 + 0x5c8) + *(int *)(param_1 + 0x5e8) + 8);
  FUN_18055f4e0(param_1 + 0x20,*(int *)(param_1 + 0x5e8) + 8);
                    // WARNING: Subroutine does not return
  memcpy((int64_t)
         (int)((uint)((*(uint *)(lVar1 + 0x5c8) & 7) != 0) + ((int)*(uint *)(lVar1 + 0x5c8) >> 3)) +
         *(int64_t *)(lVar1 + 0x598),*(uint64_t *)(param_1 + 0x5b8),
         (int64_t)
         (int)((uint)((*(uint *)(param_1 + 0x5e8) & 7) != 0) +
              ((int)*(uint *)(param_1 + 0x5e8) >> 3)));
}





// 函数: void FUN_180567f30(int64_t param_1,int64_t param_2)
void FUN_180567f30(int64_t param_1,int64_t param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x670) != '\0') {
    iVar1 = _Mtx_lock(param_1 + 0x678);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    FUN_18055f4e0(param_1 + 0x20,*(int *)(param_1 + 0x5e8) + *(int *)(param_2 + 0x5c8) + 0x40);
    FUN_180646200(param_1 + 0x20,param_2,*(int32_t *)(param_2 + 0x5c8));
    *(int *)(param_1 + 0x5f0) = *(int *)(param_1 + 0x5f0) + 1;
    iVar1 = _Mtx_unlock(param_1 + 0x678);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  return;
}





// 函数: void FUN_180567f49(int64_t param_1)
void FUN_180567f49(int64_t param_1)

{
  int iVar1;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  
  iVar1 = _Mtx_lock(param_1 + 0x678);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18055f4e0(unaff_RDI + 0x20,*(int *)(unaff_RDI + 0x5e8) + *(int *)(unaff_RBP + 0x5c8) + 0x40);
  FUN_180646200(unaff_RDI + 0x20);
  *(int *)(unaff_RDI + 0x5f0) = *(int *)(unaff_RDI + 0x5f0) + 1;
  iVar1 = _Mtx_unlock(unaff_RDI + 0x678);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void FUN_180567fba(void)
void FUN_180567fba(void)

{
  int32_t in_EAX;
  
  __Throw_C_error_std__YAXH_Z(in_EAX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



