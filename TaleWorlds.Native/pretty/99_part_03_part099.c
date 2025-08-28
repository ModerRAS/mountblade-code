#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part099.c - 7 个函数
// 函数: void DataStructure_54e7d(void)
void DataStructure_54e7d(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t in_RAX;
  float *pfVar20;
  float *unaff_RBX;
  int64_t unaff_RDI;
  uint64_t local_var_90;
  pfVar20 = (float *)(**(code **)(in_RAX + 0x158))();
  fVar4 = *(float *)(unaff_RDI + 0x70);
  fVar5 = *(float *)(unaff_RDI + 0x74);
  fVar6 = *(float *)(unaff_RDI + 0x78);
  fVar7 = *(float *)(unaff_RDI + 0x7c);
  fVar8 = *(float *)(unaff_RDI + 0x80);
  fVar9 = *(float *)(unaff_RDI + 0x84);
  fVar10 = *(float *)(unaff_RDI + 0x88);
  fVar11 = *(float *)(unaff_RDI + 0x8c);
  fVar12 = *(float *)(unaff_RDI + 0x90);
  fVar13 = *(float *)(unaff_RDI + 0x94);
  fVar14 = *(float *)(unaff_RDI + 0x98);
  fVar15 = *(float *)(unaff_RDI + 0x9c);
  fVar16 = *(float *)(unaff_RDI + 0xa0);
  fVar17 = *(float *)(unaff_RDI + 0xa4);
  fVar18 = *(float *)(unaff_RDI + 0xa8);
  fVar19 = *(float *)(unaff_RDI + 0xac);
  fVar1 = pfVar20[1];
  fVar2 = *pfVar20;
  fVar3 = pfVar20[2];
  *unaff_RBX = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
  unaff_RBX[1] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  unaff_RBX[2] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  unaff_RBX[3] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  fVar1 = pfVar20[5];
  fVar2 = pfVar20[4];
  fVar3 = pfVar20[6];
  unaff_RBX[4] = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
  unaff_RBX[5] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  unaff_RBX[6] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  unaff_RBX[7] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  fVar1 = pfVar20[9];
  fVar2 = pfVar20[8];
  fVar3 = pfVar20[10];
  unaff_RBX[8] = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12;
  unaff_RBX[9] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13;
  unaff_RBX[10] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14;
  unaff_RBX[0xb] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
  fVar1 = pfVar20[0xd];
  fVar2 = pfVar20[0xc];
  fVar3 = pfVar20[0xe];
  unaff_RBX[0xc] = fVar1 * fVar8 + fVar2 * fVar4 + fVar3 * fVar12 + fVar16;
  unaff_RBX[0xd] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar13 + fVar17;
  unaff_RBX[0xe] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar14 + fVar18;
  unaff_RBX[0xf] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15 + fVar19;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_90 ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
void *
DataStructure_54e90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < system_system_config_memory) {
    SystemInitializer(&system_ptr_8da4);
    if (system_system_config_memory == -1) {
      system_system_config_memory = 0;
      system_system_config_memory = 0;
      uRam0000000180d48d78 = 0;
      system_system_config_memory = 0;
      uRam0000000180d48d88 = 0;
      system_system_config_memory = 0;
      uRam0000000180d48d98 = 0;
      SystemCore_StateController(&system_ptr_8da4,0,param_3,param_4,uVar1);
      return &system_ptr_8d70;
    }
  }
  return &system_ptr_8d70;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t DataStructure_54f30(int64_t param_1,int8_t param_2)
{
  int32_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int *piVar24;
  int *piVar25;
  int64_t lVar26;
  int64_t *plVar27;
  int64_t lVar28;
  int64_t lVar29;
  uint64_t uVar30;
  int *piVar31;
  uint uVar32;
  int64_t lVar33;
  int iVar34;
  int64_t lVar35;
  int32_t astack_special_x_10 [2];
  int64_t *plStackX_18;
  int64_t lStackX_20;
  uint local_var_198;
  int iStack_194;
  int64_t lStack_190;
  int64_t lStack_170;
  int64_t lStack_160;
  int64_t lStack_158;
  int64_t *plStack_150;
  int64_t *plStack_148;
  uint64_t local_var_140;
  int32_t local_var_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int8_t local_var_110;
  int64_t lStack_108;
  int64_t alStack_100 [3];
  int32_t local_var_e8;
  uint64_t local_var_e0;
  astack_special_x_10[0] = CONCAT31(astack_special_x_10[0]._1_3_,param_2);
  local_var_e0 = 0xfffffffffffffffe;
  iVar5 = *(int *)(param_1 + 0x60);
  lVar29 = (int64_t)iVar5;
  lStack_170 = (int64_t)*(int *)(param_1 + 0x10);
  plStack_150 = (int64_t *)0x0;
  plStack_148 = (int64_t *)0x0;
  local_var_140 = 0;
  local_var_138 = 3;
  GenericFunction_180081010(&plStack_150,lStack_170);
  alStack_100[0] = 0;
  alStack_100[1] = 0;
  alStack_100[2] = 0;
  local_var_e8 = 3;
  astack_special_x_10[0] = 0xffffffff;
  lStack_108 = lVar29;
  GenericFunction_18014e020(alStack_100,lVar29,astack_special_x_10);
  iStack_194 = 0;
  lStack_190 = 0;
  if (0 < iVar5) {
    if (iVar5 == 0) {
      iStack_194 = 8;
      lVar28 = 0x2e0;
    }
    else {
      lVar28 = lVar29 * 0x5c;
      iStack_194 = iVar5;
    }
    lStack_190 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar28,3);
  }
  local_var_198 = 0;
  iVar34 = 0;
  if (0 < iVar5) {
    lVar28 = 0;
    plVar27 = plStack_150;
    do {
      uVar30 = (uint64_t)*(uint *)(lVar28 + *(int64_t *)(param_1 + 0x68));
      piVar31 = (int *)plVar27[uVar30 * 4 + 1];
      if (piVar31 < (int *)plVar27[uVar30 * 4 + 2]) {
        plVar27[uVar30 * 4 + 1] = (int64_t)(piVar31 + 1);
        *piVar31 = iVar34;
      }
      else {
        piVar25 = (int *)plVar27[uVar30 * 4];
        lVar33 = (int64_t)piVar31 - (int64_t)piVar25 >> 2;
        if (lVar33 == 0) {
          lVar33 = 1;
LAB_1802550b3:
          piVar24 = (int *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar33 * 4,(char)plVar27[uVar30 * 4 + 3]);
          piVar31 = (int *)plStack_150[uVar30 * 4 + 1];
          piVar25 = (int *)plStack_150[uVar30 * 4];
        }
        else {
          lVar33 = lVar33 * 2;
          if (lVar33 != 0) goto LAB_1802550b3;
          piVar24 = (int *)0x0;
        }
        if (piVar25 != piVar31) {
// WARNING: Subroutine does not return
          memmove(piVar24,piVar25,(int64_t)piVar31 - (int64_t)piVar25);
        }
        *piVar24 = iVar34;
        if (plStack_150[uVar30 * 4] != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        plStack_150[uVar30 * 4] = (int64_t)piVar24;
        plStack_150[uVar30 * 4 + 1] = (int64_t)(piVar24 + 1);
        plStack_150[uVar30 * 4 + 2] = (int64_t)(piVar24 + lVar33);
        plVar27 = plStack_150;
      }
      iVar34 = iVar34 + 1;
      lVar28 = lVar28 + 0x5c;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  lVar29 = alStack_100[0];
  plVar27 = plStack_150;
  if (0 < lStack_170) {
    do {
      lVar28 = (int64_t)(int)(plVar27[1] - *plVar27 >> 2);
      if (0 < lVar28) {
        lStackX_20 = 1;
        lStack_160 = 0;
        plStackX_18 = plVar27;
        lStack_158 = lVar28;
        do {
          lVar33 = (int64_t)*(int *)(lStack_160 + *plVar27);
          piVar31 = (int *)(lVar33 * 0x5c + *(int64_t *)(param_1 + 0x68));
          if (*(int *)(lVar29 + lVar33 * 4) == -1) {
            *(uint *)(lVar29 + lVar33 * 4) = local_var_198;
            uVar9 = *(uint64_t *)piVar31;
            uVar10 = *(uint64_t *)(piVar31 + 2);
            uVar11 = *(uint64_t *)(piVar31 + 4);
            uVar12 = *(uint64_t *)(piVar31 + 6);
            uVar13 = *(uint64_t *)(piVar31 + 8);
            uVar14 = *(uint64_t *)(piVar31 + 10);
            uVar15 = *(uint64_t *)(piVar31 + 0xc);
            uVar16 = *(uint64_t *)(piVar31 + 0xe);
            uVar17 = *(uint64_t *)(piVar31 + 0x10);
            uVar18 = *(uint64_t *)(piVar31 + 0x12);
            uVar4 = *(uint64_t *)(piVar31 + 0x14);
            iVar5 = piVar31[0x16];
            lVar26 = lStack_190;
            if (iStack_194 <= (int)local_var_198) {
              if (iStack_194 < 2) {
                iStack_194 = 8;
              }
              else {
                iStack_194 = iStack_194 + (iStack_194 >> 1);
                if (iStack_194 < 1) {
                  if (lStack_190 != 0) {
// WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager(lStack_190);
                  }
                  lStack_190 = 0;
                  lVar26 = lStack_190;
                  goto LAB_1802552ca;
                }
              }
              lVar26 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iStack_194 * 0x5c,3);
              if (lStack_190 != 0) {
// WARNING: Subroutine does not return
                memcpy(lVar26,lStack_190,(int64_t)(int)local_var_198 * 0x5c);
              }
            }
LAB_1802552ca:
            lStack_190 = lVar26;
            lVar26 = (int64_t)(int)local_var_198 * 0x5c;
            *(uint64_t *)(lVar26 + lStack_190) = uVar9;
            ((uint64_t *)(lVar26 + lStack_190))[1] = uVar10;
            puVar3 = (uint64_t *)(lVar26 + 0x10 + lStack_190);
            *puVar3 = uVar11;
            puVar3[1] = uVar12;
            puVar3 = (uint64_t *)(lVar26 + 0x20 + lStack_190);
            *puVar3 = uVar13;
            puVar3[1] = uVar14;
            puVar3 = (uint64_t *)(lVar26 + 0x30 + lStack_190);
            *puVar3 = uVar15;
            puVar3[1] = uVar16;
            puVar3 = (uint64_t *)(lVar26 + 0x40 + lStack_190);
            *puVar3 = uVar17;
            puVar3[1] = uVar18;
            *(uint64_t *)(lVar26 + 0x50 + lStack_190) = uVar4;
            *(int *)(lVar26 + 0x58 + lStack_190) = iVar5;
            local_var_198 = local_var_198 + 1;
            for (lVar26 = lStackX_20; plVar27 = plStackX_18, lVar26 < lVar28; lVar26 = lVar26 + 1) {
              lVar35 = (int64_t)*(int *)(*plStackX_18 + lVar26 * 4);
              piVar25 = (int *)(lVar35 * 0x5c + *(int64_t *)(param_1 + 0x68));
              if (((0.0001 <= ABS((float)piVar31[0xd] - (float)piVar25[0xd])) ||
                  (0.0001 <= ABS((float)piVar31[0xe] - (float)piVar25[0xe]))) ||
                 (0.0001 <= ABS((float)piVar31[0xf] - (float)piVar25[0xf]))) {
                bVar19 = false;
              }
              else {
                bVar19 = true;
              }
              if (((0.001 <= ABS((float)piVar31[5] - (float)piVar25[5])) ||
                  (0.001 <= ABS((float)piVar31[6] - (float)piVar25[6]))) ||
                 (0.001 <= ABS((float)piVar31[7] - (float)piVar25[7]))) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if (((0.001 <= ABS((float)piVar31[9] - (float)piVar25[9])) ||
                  (0.001 <= ABS((float)piVar31[10] - (float)piVar25[10]))) ||
                 (0.001 <= ABS((float)piVar31[0xb] - (float)piVar25[0xb]))) {
                bVar21 = false;
              }
              else {
                bVar21 = true;
              }
              if ((0.0001 <= ABS((float)piVar31[0x11] - (float)piVar25[0x11])) ||
                 (0.0001 <= ABS((float)piVar31[0x12] - (float)piVar25[0x12]))) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
              if ((0.0001 <= ABS((float)piVar31[0x13] - (float)piVar25[0x13])) ||
                 (0.0001 <= ABS((float)piVar31[0x14] - (float)piVar25[0x14]))) {
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
              if (((((*piVar31 == *piVar25) && (bVar19)) && (bVar20)) && ((bVar21 && (bVar22)))) &&
                 ((bVar23 && ((piVar31[0x15] == piVar25[0x15] && (piVar31[0x16] == piVar25[0x16]))))
                 )) {
                *(int32_t *)(lVar29 + lVar35 * 4) = *(int32_t *)(lVar29 + lVar33 * 4);
              }
            }
          }
          lStack_160 = lStack_160 + 4;
          lStackX_20 = lStackX_20 + 1;
          lStack_158 = lStack_158 + -1;
        } while (lStack_158 != 0);
      }
      plStackX_18 = plVar27 + 4;
      lStack_170 = lStack_170 + -1;
      plVar27 = plStackX_18;
    } while (lStack_170 != 0);
  }
  if (local_var_198 != *(uint *)(param_1 + 0x60)) {
    lVar26 = (int64_t)*(int *)(param_1 + 0x88);
    lVar33 = 0;
    lVar28 = lVar33;
    if (0 < lVar26) {
      do {
        lVar35 = *(int64_t *)(param_1 + 0x90);
        *(int32_t *)(lVar28 + lVar35) =
             *(int32_t *)(lVar29 + (uint64_t)*(uint *)(lVar28 + lVar35) * 4);
        *(int32_t *)(lVar28 + lVar35 + 4) =
             *(int32_t *)(lVar29 + (uint64_t)*(uint *)(lVar28 + lVar35 + 4) * 4);
        *(int32_t *)(lVar28 + lVar35 + 8) =
             *(int32_t *)(lVar29 + (uint64_t)*(uint *)(lVar28 + lVar35 + 8) * 4);
        lVar26 = lVar26 + -1;
        lVar28 = lVar28 + 0xc;
      } while (lVar26 != 0);
    }
    if (*(short *)(param_1 + 0xc0) == 0) {
      *(uint *)(param_1 + 0x60) = local_var_198;
      *(int8_t *)(param_1 + 0x80) = 3;
      if (iStack_194 <= *(int *)(param_1 + 100)) {
// WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(param_1 + 0x68),lStack_190,(int64_t)(int)local_var_198 * 0x5c);
      }
      *(int *)(param_1 + 100) = iStack_194;
      if (iStack_194 < 1) {
        if (*(int64_t *)(param_1 + 0x68) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
      }
      else {
        lVar33 = CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iStack_194 * 0x5c,3);
        if (*(int64_t *)(param_1 + 0x68) != 0) {
// WARNING: Subroutine does not return
          memcpy(lVar33,*(int64_t *)(param_1 + 0x68),(int64_t)*(int *)(param_1 + 0x60) * 0x5c);
        }
      }
      *(int64_t *)(param_1 + 0x68) = lVar33;
// WARNING: Subroutine does not return
      memcpy(lVar33,lStack_190,(int64_t)*(int *)(param_1 + 0x60) * 0x5c);
    }
    uVar32 = 0;
    lStack_130 = 0;
    lStack_128 = 0;
    local_var_110 = 3;
    if (0 < (int)local_var_198) {
      if (local_var_198 == 0) {
        uVar30 = 8;
        lVar28 = 0x80;
        uVar32 = 8;
      }
      else {
        uVar30 = (uint64_t)local_var_198;
        lVar28 = (int64_t)(int)local_var_198 << 4;
        uVar32 = local_var_198;
      }
      lStack_130 = uVar30 << 0x20;
      lStack_128 = CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar28,3);
    }
    lVar33 = lStack_128;
    lStack_130 = CONCAT44(lStack_130._4_4_,local_var_198);
    lVar28 = *(int64_t *)(param_1 + 0xb0);
    lVar26 = 0;
    if (0 < lStack_108) {
      lVar35 = 0;
      do {
        puVar1 = (int32_t *)(lVar35 + *(int64_t *)(lVar28 + 0x30));
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (int32_t *)(lStack_128 + (int64_t)*(int *)(lVar29 + lVar26 * 4) * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        lVar26 = lVar26 + 1;
        lVar35 = lVar35 + 0x10;
      } while (lVar26 < lStack_108);
    }
    *(uint *)(lVar28 + 0x28) = local_var_198;
    *(int8_t *)(lVar28 + 0x48) = 3;
    if (*(int *)(lVar28 + 0x2c) < (int)uVar32) {
      *(uint *)(lVar28 + 0x2c) = uVar32;
      CoreEngine_DataProcessor(lVar28 + 0x28);
      local_var_198 = *(uint *)(lVar28 + 0x28);
    }
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar28 + 0x30),lVar33,(int64_t)(int)local_var_198 << 4);
  }
  if (lStack_190 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lStack_190);
  }
  plVar27 = plStack_150;
  if (lVar29 == 0) {
    for (; plVar27 != plStack_148; plVar27 = plVar27 + 4) {
      if (*plVar27 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
    }
    if (plStack_150 == (int64_t *)0x0) {
      return 0;
    }
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(plStack_150);
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(lVar29);
}
uint64_t *
DataStructure_55800(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x20;
  strcpy_s(param_2[1],0x80,&ui_system_data_1352_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Removing unreachable block (ram,0x00018025599c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_55880(uint64_t param_1,int64_t *param_2)
void DataStructure_55880(uint64_t param_1,int64_t *param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t ******pppppplVar3;
  int iVar4;
  int64_t ******pppppplVar5;
  int64_t *****ppppplStackX_18;
  int64_t *****ppppplStackX_20;
  uint64_t uVar6;
  int64_t ***ppplStack_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int64_t ***ppplStack_40;
  uint64_t local_var_38;
  code *pcStack_30;
  code *pcStack_28;
  uVar6 = 0xfffffffffffffffe;
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  iVar4 = _Thrd_id();
  if (iVar4 == iVar1) {
    ppppplStackX_20 = (int64_t *****)&ppppplStackX_18;
    ppppplStackX_18 = (int64_t *****)*param_2;
    if ((int64_t ******)ppppplStackX_18 != (int64_t ******)0x0) {
      (*(code *)(*ppppplStackX_18)[5])();
    }
    GenericFunction_1800e31a0();
  }
  else {
    uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3,uVar6);
    ppppplStackX_18 = (int64_t *****)&ppplStack_40;
    ppppplStackX_20 = (int64_t *****)&ppplStack_60;
    ppplStack_60 = (int64_t ***)*param_2;
    if ((int64_t ****)ppplStack_60 != (int64_t ****)0x0) {
      (*(code *)(*ppplStack_60)[5])();
    }
    ppppplStackX_20 = (int64_t *****)&ppplStack_60;
    pcStack_28 = DataStructure_55e50;
    pcStack_30 = DataStructure_55ea0;
    ppplStack_40 = ppplStack_60;
    local_var_50 = 0;
    ppplStack_60 = (int64_t ***)0x0;
    local_var_58 = param_1;
    local_var_48 = param_1;
    local_var_38 = param_1;
    pppppplVar5 = (int64_t ******)GenericFunction_18005c2a0(uVar6,&ppplStack_40);
    pppppplVar3 = pppppplVar5;
    ppppplStackX_20 = (int64_t *****)pppppplVar5;
    lVar2 = system_context_ptr;
    if (pppppplVar5 != (int64_t ******)0x0) {
      (*(code *)(*pppppplVar5)[5])(pppppplVar5);
      lVar2 = system_context_ptr;
      ppppplStackX_18 = (int64_t *****)pppppplVar5;
      (*(code *)(*pppppplVar5)[5])(pppppplVar5);
      pppppplVar3 = (int64_t ******)ppppplStackX_18;
    }
    ppppplStackX_18 = (int64_t *****)pppppplVar3;
    SystemPerformance_Monitor(lVar2,&ppppplStackX_18);
    if (pppppplVar5 != (int64_t ******)0x0) {
      (*(code *)(*pppppplVar5)[7])(pppppplVar5);
    }
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void DataStructure_55a30(int64_t *param_1)
void DataStructure_55a30(int64_t *param_1)
{
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_55a60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_55a60(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int *piVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plStackX_10;
  int32_t uVar7;
  uint64_t uVar8;
  uVar8 = 0xfffffffffffffffe;
  uVar7 = 0;
  plVar5 = (int64_t *)(param_1 + 0x18);
  lVar3 = 0x10;
  plVar2 = plVar5;
  do {
    plVar1 = (int64_t *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar2 = plVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = (uint64_t)*(byte *)(param_1 + 0x14) * 0x1c0;
  lVar6 = (int64_t)*(int *)(lVar3 + 0x70 + system_message_buffer);
  if (0 < lVar6) {
    piVar4 = (int *)(system_message_buffer + 0xe8 + lVar3);
    do {
      plVar2 = (int64_t *)
               GenericFunction_180081480(system_system_data_memory,&plStackX_10,*(int *)(param_1 + 0x10) * *piVar4,param_4,
                             uVar7,uVar8);
      plVar2 = (int64_t *)*plVar2;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar1 = (int64_t *)*plVar5;
      *plVar5 = (int64_t)plVar2;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar7 = 0;
      if (plStackX_10 != (int64_t *)0x0) {
        (**(code **)(*plStackX_10 + 0x38))();
      }
      piVar4 = piVar4 + 1;
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180255c8c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_55b70(uint64_t param_1,int64_t *param_2)
void DataStructure_55b70(uint64_t param_1,int64_t *param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t ******pppppplVar3;
  int iVar4;
  int64_t ******pppppplVar5;
  int64_t *****ppppplStackX_18;
  int64_t *****ppppplStackX_20;
  uint64_t uVar6;
  int64_t ***ppplStack_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  int64_t ***ppplStack_40;
  uint64_t local_var_38;
  code *pcStack_30;
  code *pcStack_28;
  uVar6 = 0xfffffffffffffffe;
  iVar1 = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  iVar4 = _Thrd_id();
  if (iVar4 == iVar1) {
    ppppplStackX_20 = (int64_t *****)&ppppplStackX_18;
    ppppplStackX_18 = (int64_t *****)*param_2;
    if ((int64_t ******)ppppplStackX_18 != (int64_t ******)0x0) {
      (*(code *)(*ppppplStackX_18)[5])();
    }
    GenericFunction_1800e3580();
  }
  else {
    uVar6 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x40,8,3,uVar6);
    ppppplStackX_18 = (int64_t *****)&ppplStack_40;
    ppppplStackX_20 = (int64_t *****)&ppplStack_60;
    ppplStack_60 = (int64_t ***)*param_2;
    if ((int64_t ****)ppplStack_60 != (int64_t ****)0x0) {
      (*(code *)(*ppplStack_60)[5])();
    }
    ppppplStackX_20 = (int64_t *****)&ppplStack_60;
    pcStack_28 = DataStructure_55d20;
    pcStack_30 = DataStructure_55d70;
    ppplStack_40 = ppplStack_60;
    local_var_50 = 0;
    ppplStack_60 = (int64_t ***)0x0;
    local_var_58 = param_1;
    local_var_48 = param_1;
    local_var_38 = param_1;
    pppppplVar5 = (int64_t ******)GenericFunction_18005c2a0(uVar6,&ppplStack_40);
    pppppplVar3 = pppppplVar5;
    ppppplStackX_20 = (int64_t *****)pppppplVar5;
    lVar2 = system_context_ptr;
    if (pppppplVar5 != (int64_t ******)0x0) {
      (*(code *)(*pppppplVar5)[5])(pppppplVar5);
      lVar2 = system_context_ptr;
      ppppplStackX_18 = (int64_t *****)pppppplVar5;
      (*(code *)(*pppppplVar5)[5])(pppppplVar5);
      pppppplVar3 = (int64_t ******)ppppplStackX_18;
    }
    ppppplStackX_18 = (int64_t *****)pppppplVar3;
    SystemPerformance_Monitor(lVar2,&ppppplStackX_18);
    if (pppppplVar5 != (int64_t ******)0x0) {
      (*(code *)(*pppppplVar5)[7])(pppppplVar5);
    }
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// 函数: void DataStructure_55d20(int64_t *param_1)
void DataStructure_55d20(int64_t *param_1)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  GenericFunction_1800e3580();
  return;
}
int64_t * DataStructure_55d70(int64_t *param_1,int64_t *param_2,int param_3)
{
  int64_t *plVar1;
  if (param_3 == 3) {
    return (int64_t *)0x180c042a0;
  }
  if (param_3 == 4) {
    return param_1;
  }
  if (param_3 == 0) {
    param_2 = (int64_t *)*param_1;
  }
  else {
    if (param_3 == 1) {
      plVar1 = (int64_t *)*param_2;
      *param_1 = (int64_t)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      param_1[1] = param_2[1];
      return (int64_t *)0x0;
    }
    if (param_3 != 2) {
      return (int64_t *)0x0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2 = (int64_t *)*param_2;
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))();
  }
  return (int64_t *)0x0;
}
// 函数: void DataStructure_55e50(int64_t *param_1)
void DataStructure_55e50(int64_t *param_1)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (int64_t *)*param_1;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  GenericFunction_1800e31a0();
  return;
}
int64_t * DataStructure_55ea0(int64_t *param_1,int64_t *param_2,int param_3)
{
  int64_t *plVar1;
  if (param_3 == 3) {
    return (int64_t *)0x180c04260;
  }
  if (param_3 == 4) {
    return param_1;
  }
  if (param_3 == 0) {
    param_2 = (int64_t *)*param_1;
  }
  else {
    if (param_3 == 1) {
      plVar1 = (int64_t *)*param_2;
      *param_1 = (int64_t)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
      param_1[1] = param_2[1];
      return (int64_t *)0x0;
    }
    if (param_3 != 2) {
      return (int64_t *)0x0;
    }
    *param_1 = *param_2;
    *param_2 = 0;
    param_1[1] = param_2[1];
    param_2 = (int64_t *)*param_2;
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))();
  }
  return (int64_t *)0x0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * DataStructure_55f80(int64_t param_1,int64_t *param_2,int64_t *param_3)
{
  char *pcVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lStackX_8;
  if (((*(int64_t *)(param_1 + 0x88) != 0) &&
      (pcVar1 = *(char **)(*(int64_t *)(param_1 + 0x88) + 8), pcVar1 != (char *)0x0)) &&
     (*pcVar1 != '\0')) {
    plVar3 = *(int64_t **)(pcVar1 + 0x180);
    iVar2 = (int)(*(int64_t *)(pcVar1 + 0x188) - (int64_t)plVar3 >> 3);
    if ((*param_2 == 0) && (param_2[1] == 0)) {
      if (0 < iVar2) {
        lVar5 = 0;
        do {
          plVar6 = (int64_t *)*plVar3;
          if ((*(int64_t *)((int64_t)plVar6 + 0xc) == *param_3) &&
             (*(int64_t *)((int64_t)plVar6 + 0x14) == param_3[1])) goto LAB_1802560fa;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar5 < iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar5 = 0;
      do {
        plVar6 = *(int64_t **)(*(int64_t *)(pcVar1 + 0x180) + lVar5 * 8);
        plVar3 = (int64_t *)(**(code **)(*plVar6 + 8))(plVar6);
        if (((*plVar3 == *param_2) && (plVar3[1] == param_2[1])) &&
           ((*(int64_t *)((int64_t)plVar6 + 0xc) == *param_3 &&
            (*(int64_t *)((int64_t)plVar6 + 0x14) == param_3[1])))) goto LAB_1802560fa;
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar2);
    }
  }
LAB_180256026:
  lVar5 = system_system_data_memory + 0x78;
  if ((*param_2 == 0) && (param_2[1] == 0)) {
    for (lVar4 = *(int64_t *)(system_system_data_memory + 0x80); lVar4 != lVar5;
        lVar4 = Function_7bfb2422(lVar4)) {
      puVar8 = *(uint64_t **)(lVar4 + 0x40);
      puVar7 = (uint64_t *)(lVar4 + 0x30);
      if (puVar8 != (uint64_t *)0x0) {
        do {
          iVar2 = memcmp(puVar8 + 4,param_3,0x10);
          if (iVar2 < 0) {
            puVar9 = (uint64_t *)*puVar8;
          }
          else {
            puVar9 = (uint64_t *)puVar8[1];
            puVar7 = puVar8;
          }
          puVar8 = puVar9;
        } while (puVar9 != (uint64_t *)0x0);
        if ((puVar7 != (uint64_t *)(lVar4 + 0x30)) &&
           (iVar2 = memcmp(param_3,puVar7 + 4,0x10), -1 < iVar2)) {
          plVar3 = (int64_t *)puVar7[6];
          goto LAB_180256192;
        }
      }
    }
  }
  else {
    GenericFunction_18008d5c0(lVar5,&lStackX_8,param_2);
    lVar4 = lStackX_8;
    if ((lStackX_8 != lVar5) &&
       (lVar5 = lStackX_8 + 0x30, GenericFunction_18008d400(lVar5,&lStackX_8,param_3), lStackX_8 != lVar5)) {
      plVar3 = *(int64_t **)(lStackX_8 + 0x30);
LAB_180256192:
      GenericFunction_18008d4a0(lVar4 + 0x60,&lStackX_8,plVar3 + 0xd);
      if (lStackX_8 == lVar4 + 0x60) {
        return plVar3;
      }
      return *(int64_t **)(lStackX_8 + 0x40);
    }
  }
  return (int64_t *)0x0;
LAB_1802560fa:
  if (plVar6 != (int64_t *)0x0) {
    return plVar6;
  }
  goto LAB_180256026;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address