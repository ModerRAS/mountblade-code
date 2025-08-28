#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part046.c - 1 个函数

// 函数: void FUN_1801b84e0(uint *param_1,int64_t param_2)
void FUN_1801b84e0(uint *param_1,int64_t param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint64_t *puVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint *puVar13;
  uint uVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  uint uVar18;
  uint64_t *puStack_50;
  
  puStack_50 = (uint64_t *)0x0;
  puVar10 = (uint64_t *)0x0;
  uVar18 = 0;
  puVar9 = param_1 + 2;
  puVar15 = (uint64_t *)0x0;
  puVar16 = (uint64_t *)0x0;
  do {
    puVar3 = puVar16;
    if (puVar9[4] != 0) {
      if (puVar15 < puVar10) {
        CoreEngineDataTransformer(puVar15,puVar9);
        puVar4 = puVar15;
      }
      else {
        lVar12 = (int64_t)puVar15 - (int64_t)puVar16 >> 5;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1801b8583:
          puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 << 5,3);
        }
        else {
          lVar12 = lVar12 * 2;
          if (lVar12 != 0) goto LAB_1801b8583;
          puVar3 = (uint64_t *)0x0;
        }
        puVar4 = (uint64_t *)FUN_180059780(puVar16,puVar15,puVar3);
        CoreEngineDataTransformer(puVar4,puVar9);
        for (puVar10 = puVar16; puVar10 != puVar15; puVar10 = puVar10 + 4) {
          (**(code **)*puVar10)(puVar10,0);
        }
        if (puVar16 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar16);
        }
        puVar10 = puVar3 + lVar12 * 4;
      }
      puVar15 = puVar4 + 4;
      puStack_50 = puVar15;
    }
    uVar18 = uVar18 + 1;
    puVar9 = puVar9 + 8;
    puVar16 = puVar3;
    if (0x1f < uVar18) {
      uVar17 = (int64_t)puVar15 - (int64_t)puVar3 >> 5;
      iVar8 = 0;
      if (uVar17 != 0) {
        uVar11 = 0;
        puVar9 = (uint *)(puVar3 + 2);
        do {
          uVar7 = 0;
          uVar14 = 1;
          uVar18 = *puVar9;
          puVar13 = param_1 + 4;
          do {
            uVar2 = puVar13[2];
            uVar6 = uVar18;
            if (uVar2 == uVar18) {
              if (uVar2 != 0) {
                pbVar5 = *(byte **)puVar13;
                lVar12 = *(int64_t *)(puVar9 + -2) - (int64_t)pbVar5;
                do {
                  pbVar1 = pbVar5 + lVar12;
                  uVar6 = (uint)*pbVar5 - (uint)*pbVar1;
                  if (uVar6 != 0) break;
                  pbVar5 = pbVar5 + 1;
                } while (*pbVar1 != 0);
              }
LAB_1801b86ae:
              if (uVar6 == 0) {
                if ((*param_1 & uVar14) != 0) {
                  if (*(uint64_t *)(param_2 + 8) < *(uint64_t *)(param_2 + 0x10)) {
                    *(uint64_t *)(param_2 + 8) = *(uint64_t *)(param_2 + 8) + 0x20;
                    CoreEngineDataTransformer();
                  }
                  else {
                    FUN_180059820(param_2,puVar3 + uVar11 * 4);
                  }
                }
                break;
              }
            }
            else if (uVar2 == 0) goto LAB_1801b86ae;
            uVar7 = uVar7 + 1;
            uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
            puVar13 = puVar13 + 8;
          } while (uVar7 < 0x20);
          iVar8 = iVar8 + 1;
          puVar9 = puVar9 + 8;
          uVar11 = (uint64_t)iVar8;
          puVar15 = puStack_50;
        } while (uVar11 < uVar17);
      }
      for (; puVar16 != puVar15; puVar16 = puVar16 + 4) {
        (**(code **)*puVar16)(puVar16,0);
      }
      if (puVar3 == (uint64_t *)0x0) {
        return;
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar3);
    }
  } while( true );
}






