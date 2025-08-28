#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part233.c - 2 个函数

// 函数: void FUN_18039b3a0(int64_t param_1,uint64_t param_2)
void FUN_18039b3a0(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t *plVar2;
  char cVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int iVar6;
  uint64_t *puVar7;
  int64_t *plStackX_20;
  void *puStack_70;
  uint64_t *puStack_68;
  int32_t uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int64_t lStack_48;
  uint uStack_40;
  
  SystemCore_NetworkHandler0(&puStack_50);
  iVar6 = uStack_40 + 0xc;
  CoreMemoryPoolProcessor(&puStack_50,iVar6);
  puVar7 = (uint64_t *)((uint64_t)uStack_40 + lStack_48);
  *puVar7 = 0x70616d776f6c662f;
  *(int32_t *)(puVar7 + 1) = 0x7364642e;
  *(int8_t *)((int64_t)puVar7 + 0xc) = 0;
  uStack_40 = iVar6;
  cVar3 = FUN_180624af0(&puStack_50);
  if (cVar3 != '\0') {
    puStack_70 = &system_data_buffer_ptr;
    uStack_58 = 0;
    puStack_68 = (uint64_t *)0x0;
    uStack_60 = 0;
    puVar7 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar7 = 0;
    puStack_68 = puVar7;
    uVar4 = CoreMemoryPoolCleaner(puVar7);
    uStack_58 = CONCAT44(uStack_58._4_4_,uVar4);
    *puVar7 = 0x2e70616d776f6c66;
    *(int32_t *)(puVar7 + 1) = 0x736464;
    uStack_60 = 0xb;
    puVar5 = (uint64_t *)FUN_1800b2cd0(0x736464,&plStackX_20,&puStack_70,param_2);
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
    puStack_70 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar7);
  }
  puStack_50 = &system_data_buffer_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18039b530(uint64_t param_1,int64_t param_2,int64_t *param_3,int32_t param_4)
void FUN_18039b530(uint64_t param_1,int64_t param_2,int64_t *param_3,int32_t param_4)

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
  uint64_t ***pppuStack_1a8;
  uint64_t ***pppuStack_1a0;
  uint64_t ***pppuStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  int32_t uStack_180;
  void *puStack_178;
  uint64_t *puStack_170;
  int32_t uStack_168;
  uint64_t uStack_160;
  void *puStack_158;
  uint64_t *puStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  void *puStack_138;
  uint64_t uStack_130;
  int32_t uStack_128;
  uint64_t uStack_120;
  void *puStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  uint64_t uStack_100;
  void **ppuStack_f8;
  void *puStack_f0;
  int64_t lStack_e8;
  int32_t uStack_d8;
  int32_t uStack_d0;
  int8_t auStack_a0 [32];
  int8_t auStack_80 [32];
  uint64_t uStack_60;
  int8_t auStack_58 [32];
  
  uStack_60 = 0xfffffffffffffffe;
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
        puStack_138 = &system_data_buffer_ptr;
        uStack_120 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_180 = 3;
        pppuStack_1a8 = &pppuStack_1a8;
        pppuStack_1a0 = &pppuStack_1a8;
        pppuStack_198 = (uint64_t ****)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        do {
          if (pcVar10 == (char *)0x0) {
            FUN_180058370(&pppuStack_1a8,pppuStack_198);
            return;
          }
          pcVar16 = (char *)0x0;
          uVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,400,8,3);
          plVar5 = (int64_t *)FUN_1803dc330(uVar4);
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x28))(plVar5);
          }
          FUN_1803dc6f0(plVar5,pcVar10,param_4);
          if ((int)plVar5[10] == 0) {
            ppppuVar6 = (uint64_t ****)pppuStack_198;
            if ((uint64_t ****)pppuStack_198 != (uint64_t ****)0x0) {
              do {
                ppppuVar7 = ppppuVar6;
                ppppuVar6 = (uint64_t ****)ppppuVar7[1];
              } while ((uint64_t ****)ppppuVar7[1] != (uint64_t ****)0x0);
              if ((ppppuVar7 != &pppuStack_1a8) &&
                 (ppppuVar6 = (uint64_t ****)pppuStack_198, *(int *)(ppppuVar7 + 6) == 0)) {
                do {
                  ppppuVar7 = ppppuVar6;
                  ppppuVar6 = (uint64_t ****)ppppuVar7[1];
                } while ((uint64_t ****)ppppuVar7[1] != (uint64_t ****)0x0);
                if ((ppppuVar7 == &pppuStack_1a8) || (*(int *)(ppppuVar7 + 6) != 0)) {
                  if ((ppppuVar7 != (uint64_t ****)pppuStack_1a8) && (ppppuVar7 != &pppuStack_1a8)
                     ) {
                    func_0x00018066bd70();
                  }
                  ppppuVar7 = &pppuStack_1a8;
                  ppppuVar6 = (uint64_t ****)pppuStack_198;
                  if ((uint64_t ****)pppuStack_198 != (uint64_t ****)0x0) {
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
                  if (ppppuVar7 == (uint64_t ****)pppuStack_1a0) {
                    if ((ppppuVar7 == &pppuStack_1a8) ||
                       (pcVar15 = (char *)0x1, *(int *)(ppppuVar7 + 6) != 0)) {
                      pcVar15 = pcVar16;
                    }
                    lVar13 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x48,(int8_t)uStack_180);
                    ppuStack_f8 = (void **)(lVar13 + 0x20);
                    SystemCore_NetworkHandler0(ppuStack_f8,&puStack_138);
                    *(int32_t *)(lVar13 + 0x40) = 0;
                    // WARNING: Subroutine does not return
                    SystemStateController(lVar13,ppppuVar7,&pppuStack_1a8,pcVar15);
                  }
                  ppppuVar7 = (uint64_t ****)func_0x00018066b9a0(ppppuVar7);
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
              puStack_158 = &system_data_buffer_ptr;
              uStack_140 = 0;
              puStack_150 = (uint64_t *)0x0;
              uStack_148 = 0;
              puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x33,0x13);
              *(int8_t *)puVar8 = 0;
              puStack_150 = puVar8;
              uVar2 = CoreMemoryPoolCleaner(puVar8);
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar2);
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
              uStack_148 = 0x32;
              puStack_118 = &system_data_buffer_ptr;
              uStack_100 = 0;
              uStack_110 = 0;
              uStack_108 = 0;
              uVar4 = FUN_180627ce0(&puStack_158,auStack_80,&puStack_118);
              puStack_178 = &system_data_buffer_ptr;
              uStack_160 = 0;
              puStack_170 = (uint64_t *)0x0;
              uStack_168 = 0;
              puVar8 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
              *(int8_t *)puVar8 = 0;
              puStack_170 = puVar8;
              uVar2 = CoreMemoryPoolCleaner(puVar8);
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar2);
              *puVar8 = 0x6574656c6544202e;
              *(int32_t *)(puVar8 + 1) = 0x3f746920;
              *(int8_t *)((int64_t)puVar8 + 0xc) = 0;
              uStack_168 = 0xc;
              FUN_180627ce0(uVar4,auStack_a0,&puStack_178);
              puStack_178 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager(puVar8);
            }
            SystemCore_NetworkHandler0(&puStack_f0,&puStack_138);
            uStack_d0 = 4;
            FUN_18039dbd0(&pppuStack_1a8,auStack_58,&puStack_f0);
            ppuStack_f8 = &puStack_f0;
            puStack_f0 = &system_data_buffer_ptr;
            if (lStack_e8 != 0) {
                    // WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            lStack_e8 = 0;
            uStack_d8 = 0;
            puStack_f0 = &system_state_ptr;
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



