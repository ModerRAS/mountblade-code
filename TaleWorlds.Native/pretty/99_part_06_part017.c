#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part017.c - 4 个函数

// 函数: void FUN_1803b4b80(int64_t *param_1,int64_t param_2)
void FUN_1803b4b80(int64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int8_t auStack_568 [88];
  uint64_t uStack_510;
  uint64_t uStack_508;
  uint64_t uStack_500;
  int16_t uStack_4f8;
  int8_t uStack_4f6;
  uint64_t uStack_4f0;
  int64_t lStack_4e8;
  uint64_t uStack_4e0;
  int8_t uStack_4d8;
  int8_t uStack_4d7;
  int8_t uStack_4d6;
  uint64_t uStack_490;
  int8_t auStack_448 [1024];
  uint64_t uStack_48;
  
  uStack_490 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_568;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f6 = 0x23;
  uStack_4d6 = 0x23;
  puVar1 = (uint64_t *)*param_1;
  uStack_4f0 = *puVar1;
  uStack_4e0 = puVar1[2];
  _uStack_4d8 = CONCAT11(*(int8_t *)((int64_t)puVar1 + 0x19),1);
  lStack_4e8 = (int64_t)*(int *)(param_2 + 8) + puVar1[1];
                    // WARNING: Subroutine does not return
  memset(auStack_448,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b4e80(int64_t *param_1,uint param_2,int param_3)
void FUN_1803b4e80(int64_t *param_1,uint param_2,int param_3)

{
  int64_t lVar1;
  int *piVar2;
  int **ppiVar3;
  uint64_t *puVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int *piVar12;
  uint uStackX_10;
  int *piStack_80;
  uint64_t *puStack_78;
  int *piStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  int *piStack_58;
  uint64_t uStack_50;
  int8_t uStack_48;
  int8_t uStack_47;
  int8_t uStack_46;
  uint64_t uVar8;
  
  uVar10 = (uint64_t)(int)param_2;
  if ((int)param_2 < param_3) {
    lVar11 = uVar10 * 4;
    uStackX_10 = param_2;
    do {
      lVar6 = *param_1;
      uVar10 = (uint64_t)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff;
      iVar5 = (int)((int64_t)uVar10 % (int64_t)*(int *)(lVar6 + 0x14));
      iVar9 = (int)((int64_t)uVar10 / (int64_t)*(int *)(lVar6 + 0x14));
      lVar1 = *(int64_t *)(lVar6 + 0x40);
      puVar4 = (uint64_t *)
               (lVar1 + ((uint64_t)(int64_t)(iVar5 * 1000 + iVar9) %
                        (uint64_t)*(uint *)(lVar6 + 0x48)) * 8);
      for (piVar2 = (int *)*puVar4; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
        if ((iVar5 == *piVar2) && (iVar9 == piVar2[1])) {
          piStack_80 = piVar2;
          puStack_78 = puVar4;
          ppiVar3 = &piStack_80;
          lVar6 = *(int64_t *)(lVar6 + 0x48);
          goto LAB_1803b4f47;
        }
      }
      lVar6 = *(int64_t *)(lVar6 + 0x48);
      puStack_68 = (uint64_t *)(lVar1 + lVar6 * 8);
      piStack_70 = (int *)*puStack_68;
      ppiVar3 = &piStack_70;
LAB_1803b4f47:
      uVar8 = 0;
      uVar10 = uVar8;
      if (*ppiVar3 != *(int **)(lVar1 + lVar6 * 8)) {
        uVar10 = *(uint64_t *)(*ppiVar3 + 2);
      }
      uStack_46 = 0x23;
      puVar4 = (uint64_t *)param_1[1];
      uStack_60 = *puVar4;
      uStack_50 = puVar4[2];
      _uStack_48 = CONCAT11(*(int8_t *)((int64_t)puVar4 + 0x19),1);
      piVar2 = (int *)((int64_t)*(int *)(param_1[2] + lVar11) + puVar4[1]);
      do {
        piVar12 = piVar2 + 1;
        if (*piVar2 != 0) {
          piStack_58 = piVar12;
          puVar4 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,0x23);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(int16_t *)(puVar4 + 2) = 0;
          *(int32_t *)((int64_t)puVar4 + 0x62) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x54) = 0;
          *(int32_t *)((int64_t)puVar4 + 0x5c) = 0;
          *(int16_t *)(puVar4 + 0xc) = 0;
          *(int8_t *)((int64_t)puVar4 + 0x66) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x14) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x1c) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x24) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x2c) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x34) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x3c) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x44) = 0;
          *(uint64_t *)((int64_t)puVar4 + 0x4c) = 0;
          *(int8_t *)((int64_t)puVar4 + 0x12) = 0x23;
          iVar5 = *piVar12;
          piVar12 = piVar2 + 2;
          piStack_58 = piVar12;
          FUN_1802a7bf0(piVar12,iVar5,puVar4);
          piVar12 = (int *)((int64_t)piVar12 + (int64_t)iVar5);
          *(int32_t *)((int64_t)puVar4 + 0x54) = 0xb;
          piStack_58 = piVar12;
          FUN_1803a39b0(uVar10,uVar8,puVar4);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar7;
        piVar2 = piVar12;
      } while ((int)uVar7 < 0x10);
      uStackX_10 = uStackX_10 + 1;
      uVar10 = (uint64_t)uStackX_10;
      lVar11 = lVar11 + 4;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b50e0(int64_t *param_1,int64_t param_2)
void FUN_1803b50e0(int64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int8_t auStack_568 [88];
  uint64_t uStack_510;
  uint64_t uStack_508;
  uint64_t uStack_500;
  int16_t uStack_4f8;
  int8_t uStack_4f6;
  uint64_t uStack_4f0;
  int64_t lStack_4e8;
  uint64_t uStack_4e0;
  int8_t uStack_4d8;
  int8_t uStack_4d7;
  int8_t uStack_4d6;
  uint64_t uStack_490;
  int8_t auStack_448 [1024];
  uint64_t uStack_48;
  
  uStack_490 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_568;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f6 = 0x23;
  uStack_4d6 = 0x23;
  puVar1 = (uint64_t *)*param_1;
  uStack_4f0 = *puVar1;
  uStack_4e0 = puVar1[2];
  _uStack_4d8 = CONCAT11(*(int8_t *)((int64_t)puVar1 + 0x19),1);
  lStack_4e8 = (int64_t)*(int *)(param_2 + 8) + puVar1[1];
                    // WARNING: Subroutine does not return
  memset(auStack_448,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b53e0(int64_t *param_1,int param_2,int param_3)
void FUN_1803b53e0(int64_t *param_1,int param_2,int param_3)

{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int **ppiVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int *piVar10;
  int *piVar11;
  int64_t lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint64_t uVar16;
  int *piStack_80;
  uint64_t *puStack_78;
  int *piStack_70;
  uint64_t *puStack_68;
  uint64_t uStack_60;
  int *piStack_58;
  uint64_t uStack_50;
  int8_t uStack_48;
  int8_t uStack_47;
  int8_t uStack_46;
  
  uVar16 = (uint64_t)param_2;
  if (param_2 < param_3) {
    lVar12 = uVar16 * 4;
    do {
      lVar9 = *param_1;
      uVar4 = (uint64_t)(uint)((int)uVar16 >> 0x1f) << 0x20 | uVar16 & 0xffffffff;
      uVar5 = (int64_t)uVar4 / (int64_t)*(int *)(lVar9 + 0x14);
      lVar6 = (int64_t)uVar4 % (int64_t)*(int *)(lVar9 + 0x14);
      iVar13 = (int)lVar6;
      iVar14 = (int)uVar5;
      lVar3 = *(int64_t *)(lVar9 + 0x40);
      puVar1 = (uint64_t *)
               (lVar3 + ((uint64_t)(int64_t)(iVar13 * 1000 + iVar14) %
                        (uint64_t)*(uint *)(lVar9 + 0x48)) * 8);
      for (piVar10 = (int *)*puVar1; piVar10 != (int *)0x0; piVar10 = *(int **)(piVar10 + 4)) {
        if ((iVar13 == *piVar10) && (iVar14 == piVar10[1])) {
          piStack_80 = piVar10;
          puStack_78 = puVar1;
          ppiVar7 = &piStack_80;
          lVar9 = *(int64_t *)(lVar9 + 0x48);
          goto LAB_1803b54a7;
        }
      }
      lVar9 = *(int64_t *)(lVar9 + 0x48);
      puStack_68 = (uint64_t *)(lVar3 + lVar9 * 8);
      piStack_70 = (int *)*puStack_68;
      ppiVar7 = &piStack_70;
LAB_1803b54a7:
      if (*ppiVar7 == *(int **)(lVar3 + lVar9 * 8)) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(int64_t *)(*ppiVar7 + 2);
      }
      uStack_46 = 0x23;
      puVar1 = (uint64_t *)param_1[1];
      uStack_60 = *puVar1;
      uStack_50 = puVar1[2];
      _uStack_48 = CONCAT11(*(int8_t *)((int64_t)puVar1 + 0x19),1);
      piVar10 = (int *)((int64_t)*(int *)(lVar12 + param_1[2]) + puVar1[1]);
      iVar14 = *(int *)(lVar9 + 0x70) * *(int *)(lVar9 + 0x70);
      iVar13 = 0;
      do {
        iVar2 = *piVar10;
        piVar11 = piVar10 + 1;
        piVar10 = piVar10 + 2;
        if (iVar2 == iVar13) {
          if (*piVar11 == iVar14) {
            piStack_58 = piVar10;
            if (iVar14 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar14,
                                    CONCAT71((uint7)((uint64_t)lVar6 >> 8) & 0xffffff,3),
                                    uVar5 & 0xffffffff,0xfffffffffffffffe);
            }
                    // WARNING: Subroutine does not return
            memcpy(uVar8,piVar10,(int64_t)iVar14);
          }
        }
        else {
          piVar10 = (int *)((int64_t)piVar10 + (int64_t)*piVar11);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 4);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar15;
      lVar12 = lVar12 + 4;
    } while ((int)uVar15 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




