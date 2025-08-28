#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part233.c - 2 个函数
// 函数: void function_39b3a0(int64_t param_1,uint64_t param_2)
void function_39b3a0(int64_t param_1,uint64_t param_2)
{
  uint64_t uVar1;
  int64_t *plVar2;
  char cVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  uint64_t *puVar7;
  int64_t *plStackX_20;
  void *plocal_var_70;
  uint64_t *plocal_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  uint local_var_40;
  SystemCore_NetworkHandler0(&plocal_var_50);
  iVar6 = local_var_40 + 0xc;
  CoreMemoryPoolProcessor(&plocal_var_50,iVar6);
  puVar7 = (uint64_t *)((uint64_t)local_var_40 + lStack_48);
  *puVar7 = 0x70616d776f6c662f;
  *(int32_t *)(puVar7 + 1) = 0x7364642e;
  *(int8_t *)((int64_t)puVar7 + 0xc) = 0;
  local_var_40 = iVar6;
  cVar3 = RenderingSystem_RenderQueue(&plocal_var_50);
  if (cVar3 != '\0') {
    plocal_var_70 = &system_data_buffer_ptr;
    local_var_58 = 0;
    plocal_var_68 = (uint64_t *)0x0;
    local_var_60 = 0;
    puVar7 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar7 = 0;
    plocal_var_68 = puVar7;
    uVar4 = CoreMemoryPoolCleaner(puVar7);
    local_var_58 = CONCAT44(local_var_58._4_4_,uVar4);
    *puVar7 = 0x2e70616d776f6c66;
    *(int32_t *)(puVar7 + 1) = 0x736464;
    local_var_60 = 0xb;
    puVar5 = (uint64_t *)function_0b2cd0(0x736464,&plStackX_20,&plocal_var_70,param_2);
    uVar1 = *puVar5;
    *puVar5 = 0;
    plVar2 = *(int64_t **)(param_1 + 0x158);
    *(uint64_t *)(param_1 + 0x158) = uVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    plocal_var_70 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar7);
  }
  plocal_var_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_39b530(uint64_t param_1,int64_t param_2,int64_t *param_3,int32_t param_4)
void function_39b530(uint64_t param_1,int64_t param_2,int64_t *param_3,int32_t param_4)
{
  int64_t *plVar1;
  int32_t uVar2;
  char *pcVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t ****ppppuVar6;
  uint64_t ****ppppuVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int64_t lVar13;
  int64_t *plVar14;
  char *pcVar15;
  char *pcVar16;
  uint64_t ***ppplocal_var_1a8;
  uint64_t ***ppplocal_var_1a0;
  uint64_t ***ppplocal_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  int32_t local_var_180;
  void *plocal_var_178;
  uint64_t *plocal_var_170;
  int32_t local_var_168;
  uint64_t local_var_160;
  void *plocal_var_158;
  uint64_t *plocal_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  void **pplocal_var_f8;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_d8;
  int32_t local_var_d0;
  int8_t stack_array_a0 [32];
  int8_t stack_array_80 [32];
  uint64_t local_var_60;
  int8_t stack_array_58 [32];
  local_var_60 = 0xfffffffffffffffe;
  pcVar16 = "floras";
  do {
    pcVar15 = pcVar16;
    pcVar16 = pcVar15 + 1;
  } while (*pcVar16 != '\0');
  puVar8 = *(uint64_t **)(param_2 + 0x30);
  pcVar16 = (char *)0x0;
  do {
    pcVar10 = pcVar16;
    if (puVar8 == (uint64_t *)0x0) goto LAB_18039b640;
    pcVar10 = (char *)*puVar8;
    if (pcVar10 == (char *)0x0) {
      pcVar10 = (char *)0x180d48d24;
      pcVar12 = pcVar16;
    }
    else {
      pcVar12 = (char *)puVar8[2];
    }
    if (pcVar12 == pcVar15 + -0x180a21873) {
      pcVar12 = pcVar10 + (int64_t)pcVar12;
      if (pcVar12 <= pcVar10) {
LAB_18039b5d6:
        pcVar15 = "flora";
        do {
          pcVar12 = pcVar15;
          pcVar15 = pcVar12 + 1;
        } while (*pcVar15 != '\0');
        for (pcVar15 = (char *)puVar8[6]; pcVar10 = pcVar16, pcVar15 != (char *)0x0;
            pcVar15 = *(char **)(pcVar15 + 0x58)) {
          pcVar11 = *(char **)pcVar15;
          if (pcVar11 == (char *)0x0) {
            pcVar11 = (char *)0x180d48d24;
            pcVar3 = pcVar16;
          }
          else {
            pcVar3 = *(char **)(pcVar15 + 0x10);
          }
          if (pcVar3 == pcVar12 + -0x180a1cbf7) {
            pcVar3 = pcVar3 + (int64_t)pcVar11;
            pcVar10 = pcVar15;
            if (pcVar3 <= pcVar11) break;
            lVar13 = (int64_t)&processed_var_4456_ptr - (int64_t)pcVar11;
            while (*pcVar11 == pcVar11[lVar13]) {
              pcVar11 = pcVar11 + 1;
              if (pcVar3 <= pcVar11) goto LAB_18039b640;
            }
          }
        }
LAB_18039b640:
        plocal_var_138 = &system_data_buffer_ptr;
        local_var_120 = 0;
        local_var_130 = 0;
        local_var_128 = 0;
        local_var_180 = 3;
        ppplocal_var_1a8 = &ppplocal_var_1a8;
        ppplocal_var_1a0 = &ppplocal_var_1a8;
        ppplocal_var_198 = (uint64_t ****)0x0;
        local_var_190 = 0;
        local_var_188 = 0;
        do {
          if (pcVar10 == (char *)0x0) {
            RenderingSystem_CameraSystem(&ppplocal_var_1a8,ppplocal_var_198);
            return;
          }
          pcVar16 = (char *)0x0;
          uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,400,8,3);
          plVar5 = (int64_t *)function_3dc330(uVar4);
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          function_3dc6f0(plVar5,pcVar10,param_4);
          if ((int)plVar5[10] == 0) {
            ppppuVar6 = (uint64_t ****)ppplocal_var_198;
            if ((uint64_t ****)ppplocal_var_198 != (uint64_t ****)0x0) {
              do {
                ppppuVar7 = ppppuVar6;
                ppppuVar6 = (uint64_t ****)ppppuVar7[1];
              } while ((uint64_t ****)ppppuVar7[1] != (uint64_t ****)0x0);
              if ((ppppuVar7 != &ppplocal_var_1a8) &&
                 (ppppuVar6 = (uint64_t ****)ppplocal_var_198, *(int *)(ppppuVar7 + 6) == 0)) {
                do {
                  ppppuVar7 = ppppuVar6;
                  ppppuVar6 = (uint64_t ****)ppppuVar7[1];
                } while ((uint64_t ****)ppppuVar7[1] != (uint64_t ****)0x0);
                if ((ppppuVar7 == &ppplocal_var_1a8) || (*(int *)(ppppuVar7 + 6) != 0)) {
                  if ((ppppuVar7 != (uint64_t ****)ppplocal_var_1a8) && (ppppuVar7 != &ppplocal_var_1a8)
                     ) {
                    SystemFunction_00018066bd70();
                  }
                  ppppuVar7 = &ppplocal_var_1a8;
                  ppppuVar6 = (uint64_t ****)ppplocal_var_198;
                  if ((uint64_t ****)ppplocal_var_198 != (uint64_t ****)0x0) {
                    do {
                      ppppuVar7 = ppppuVar6;
                      if (*(int *)(ppppuVar7 + 6) != 0) {
                        ppppuVar6 = (uint64_t ****)ppppuVar7[1];
                      }
                      else {
                        ppppuVar6 = (uint64_t ****)*ppppuVar7;
                      }
                    } while (ppppuVar6 != (uint64_t ****)0x0);
                    if (*(int *)(ppppuVar7 + 6) == 0) goto LAB_18039b85d;
                  }
                  if (ppppuVar7 == (uint64_t ****)ppplocal_var_1a0) {
                    if ((ppppuVar7 == &ppplocal_var_1a8) ||
                       (pcVar15 = (char *)0x1, *(int *)(ppppuVar7 + 6) != 0)) {
                      pcVar15 = pcVar16;
                    }
                    lVar13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x48,(int8_t)local_var_180);
                    pplocal_var_f8 = (void **)(lVar13 + 0x20);
                    SystemCore_NetworkHandler0(pplocal_var_f8,&plocal_var_138);
                    *(int32_t *)(lVar13 + 0x40) = 0;
// WARNING: Subroutine does not return
                    SystemStateController(lVar13,ppppuVar7,&ppplocal_var_1a8,pcVar15);
                  }
                  ppppuVar7 = (uint64_t ****)SystemFunction_00018066b9a0(ppppuVar7);
                }
LAB_18039b85d:
                if (*(int *)(ppppuVar7 + 8) != 4) goto LAB_18039bcd4;
                pcVar15 = "flora";
                do {
                  pcVar12 = pcVar15;
                  pcVar15 = pcVar12 + 1;
                } while (*pcVar15 != '\0');
                for (pcVar10 = *(char **)(pcVar10 + 0x58); pcVar10 != (char *)0x0;
                    pcVar10 = *(char **)(pcVar10 + 0x58)) {
                  pcVar15 = *(char **)pcVar10;
                  if (pcVar15 == (char *)0x0) {
                    pcVar15 = (char *)0x180d48d24;
                    pcVar11 = pcVar16;
                  }
                  else {
                    pcVar11 = *(char **)(pcVar10 + 0x10);
                  }
                  if (pcVar11 == pcVar12 + -0x180a1cbf7) {
                    pcVar11 = pcVar11 + (int64_t)pcVar15;
                    if (pcVar11 <= pcVar15) goto LAB_18039be46;
                    lVar13 = (int64_t)&processed_var_4456_ptr - (int64_t)pcVar15;
                    while (*pcVar15 == pcVar15[lVar13]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar11 <= pcVar15) goto LAB_18039be46;
                    }
                  }
                }
                goto LAB_18039be43;
              }
            }
            if (system_debug_flag2 == '\0') {
              plocal_var_158 = &system_data_buffer_ptr;
              local_var_140 = 0;
              plocal_var_150 = (uint64_t *)0x0;
              local_var_148 = 0;
              puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x33,0x13);
              *(int8_t *)puVar8 = 0;
              plocal_var_150 = puVar8;
              uVar2 = CoreMemoryPoolCleaner(puVar8);
              local_var_140 = CONCAT44(local_var_140._4_4_,uVar2);
              *puVar8 = 0x6c61766e69206e41;
              puVar8[1] = 0x61726f6c66206469;
              *(int32_t *)(puVar8 + 2) = 0x70797420;
              *(int32_t *)((int64_t)puVar8 + 0x14) = 0x73692065;
              *(int32_t *)(puVar8 + 3) = 0x756f6620;
              *(int32_t *)((int64_t)puVar8 + 0x1c) = 0x6f20646e;
              *(int32_t *)(puVar8 + 4) = 0x6373206e;
              *(int32_t *)((int64_t)puVar8 + 0x24) = 0x20656e65;
              *(int32_t *)(puVar8 + 5) = 0x68746977;
              *(int32_t *)((int64_t)puVar8 + 0x2c) = 0x6d616e20;
              *(int16_t *)(puVar8 + 6) = 0x2065;
              *(int8_t *)((int64_t)puVar8 + 0x32) = 0;
              local_var_148 = 0x32;
              plocal_var_118 = &system_data_buffer_ptr;
              local_var_100 = 0;
              local_var_110 = 0;
              local_var_108 = 0;
              uVar4 = UtilitiesSystem_FileHandler(&plocal_var_158,stack_array_80,&plocal_var_118);
              plocal_var_178 = &system_data_buffer_ptr;
              local_var_160 = 0;
              plocal_var_170 = (uint64_t *)0x0;
              local_var_168 = 0;
              puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
              *(int8_t *)puVar8 = 0;
              plocal_var_170 = puVar8;
              uVar2 = CoreMemoryPoolCleaner(puVar8);
              local_var_160 = CONCAT44(local_var_160._4_4_,uVar2);
              *puVar8 = 0x6574656c6544202e;
              *(int32_t *)(puVar8 + 1) = 0x3f746920;
              *(int8_t *)((int64_t)puVar8 + 0xc) = 0;
              local_var_168 = 0xc;
              UtilitiesSystem_FileHandler(uVar4,stack_array_a0,&plocal_var_178);
              plocal_var_178 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager(puVar8);
            }
            SystemCore_NetworkHandler0(&plocal_var_f0,&plocal_var_138);
            local_var_d0 = 4;
            function_39dbd0(&ppplocal_var_1a8,stack_array_58,&plocal_var_f0);
            pplocal_var_f8 = &plocal_var_f0;
            plocal_var_f0 = &system_data_buffer_ptr;
            if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            lStack_e8 = 0;
            local_var_d8 = 0;
            plocal_var_f0 = &system_state_ptr;
            pcVar15 = "flora";
            do {
              pcVar12 = pcVar15;
              pcVar15 = pcVar12 + 1;
            } while (*pcVar15 != '\0');
            for (pcVar10 = *(char **)(pcVar10 + 0x58); pcVar10 != (char *)0x0;
                pcVar10 = *(char **)(pcVar10 + 0x58)) {
              pcVar15 = *(char **)pcVar10;
              if (pcVar15 == (char *)0x0) {
                pcVar15 = (char *)0x180d48d24;
                pcVar11 = pcVar16;
              }
              else {
                pcVar11 = *(char **)(pcVar10 + 0x10);
              }
              if (pcVar11 == pcVar12 + -0x180a1cbf7) {
                pcVar11 = pcVar11 + (int64_t)pcVar15;
                if (pcVar11 <= pcVar15) goto LAB_18039be46;
                lVar13 = (int64_t)&processed_var_4456_ptr - (int64_t)pcVar15;
                while (*pcVar15 == pcVar15[lVar13]) {
                  pcVar15 = pcVar15 + 1;
                  if (pcVar11 <= pcVar15) goto LAB_18039be46;
                }
              }
            }
          }
          else {
LAB_18039bcd4:
            puVar8 = (uint64_t *)param_3[1];
            if (puVar8 < (uint64_t *)param_3[2]) {
              param_3[1] = (int64_t)(puVar8 + 1);
              *puVar8 = plVar5;
              (**(code **)(*plVar5 + 0x28))(plVar5);
            }
            else {
              puVar9 = (uint64_t *)*param_3;
              lVar13 = (int64_t)puVar8 - (int64_t)puVar9 >> 3;
              if (lVar13 == 0) {
                lVar13 = 1;
LAB_18039bd25:
                pcVar16 = (char *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar13 * 8,(char)param_3[3]);
                puVar8 = (uint64_t *)param_3[1];
                puVar9 = (uint64_t *)*param_3;
                pcVar15 = pcVar16;
              }
              else {
                lVar13 = lVar13 * 2;
                pcVar15 = pcVar16;
                if (lVar13 != 0) goto LAB_18039bd25;
              }
              for (; puVar9 != puVar8; puVar9 = puVar9 + 1) {
                *(uint64_t *)pcVar16 = *puVar9;
                *puVar9 = 0;
                pcVar16 = pcVar16 + 8;
              }
              *(int64_t **)pcVar16 = plVar5;
              (**(code **)(*plVar5 + 0x28))(plVar5);
              plVar1 = (int64_t *)param_3[1];
              plVar14 = (int64_t *)*param_3;
              if (plVar14 != plVar1) {
                do {
                  if ((int64_t *)*plVar14 != (int64_t *)0x0) {
                    (**(code **)(*(int64_t *)*plVar14 + 0x38))();
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != plVar1);
                plVar14 = (int64_t *)*param_3;
              }
              if (plVar14 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager(plVar14);
              }
              *param_3 = (int64_t)pcVar15;
              param_3[1] = (int64_t)(pcVar16 + 8);
              param_3[2] = (int64_t)(pcVar15 + lVar13 * 8);
            }
            pcVar16 = "flora";
            do {
              pcVar15 = pcVar16;
              pcVar16 = pcVar15 + 1;
            } while (*pcVar16 != '\0');
            for (pcVar10 = *(char **)(pcVar10 + 0x58); pcVar10 != (char *)0x0;
                pcVar10 = *(char **)(pcVar10 + 0x58)) {
              pcVar16 = *(char **)pcVar10;
              if (pcVar16 == (char *)0x0) {
                pcVar12 = (char *)0x0;
                pcVar16 = (char *)0x180d48d24;
              }
              else {
                pcVar12 = *(char **)(pcVar10 + 0x10);
              }
              if (pcVar12 == pcVar15 + -0x180a1cbf7) {
                pcVar12 = pcVar12 + (int64_t)pcVar16;
                if (pcVar12 <= pcVar16) goto LAB_18039be46;
                lVar13 = (int64_t)&processed_var_4456_ptr - (int64_t)pcVar16;
                while (*pcVar16 == pcVar16[lVar13]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar12 <= pcVar16) goto LAB_18039be46;
                }
              }
            }
          }
LAB_18039be43:
          pcVar10 = (char *)0x0;
LAB_18039be46:
          (**(code **)(*plVar5 + 0x38))(plVar5);
        } while( true );
      }
      lVar13 = (int64_t)&processed_var_4036_ptr - (int64_t)pcVar10;
      while (*pcVar10 == pcVar10[lVar13]) {
        pcVar10 = pcVar10 + 1;
        if (pcVar12 <= pcVar10) goto LAB_18039b5d6;
      }
    }
    puVar8 = (uint64_t *)puVar8[0xb];
  } while( true );
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address