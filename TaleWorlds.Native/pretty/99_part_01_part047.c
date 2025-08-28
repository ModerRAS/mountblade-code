#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part047.c - 4 个函数

// 函数: void FUN_1800d36c0(uint64_t param_1,uint64_t param_2)
void FUN_1800d36c0(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  double dVar2;
  int64_t lVar3;
  int8_t *puVar4;
  void *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int32_t uVar10;
  int32_t uVar11;
  char *pcVar12;
  int iVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  int64_t *plVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint uVar21;
  uint64_t uVar22;
  char cVar23;
  int32_t uVar24;
  int8_t auStack_248 [32];
  int64_t *plStack_228;
  int64_t **pplStack_220;
  int64_t *plStack_218;
  uint64_t uStack_210;
  char cStack_208;
  int64_t lStack_200;
  int64_t lStack_1f8;
  uint64_t uStack_1f0;
  int32_t uStack_1e8;
  uint64_t uStack_1d8;
  int64_t *plStack_1d0;
  uint64_t uStack_1c8;
  int64_t *plStack_1c0;
  int64_t **pplStack_1b8;
  void **ppuStack_1b0;
  uint64_t uStack_1a8;
  void *puStack_198;
  int8_t *puStack_190;
  int32_t uStack_188;
  int8_t auStack_180 [128];
  int32_t uStack_100;
  uint64_t uStack_f8;
  uint64_t *puStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  uint64_t uStack_58;
  
  lVar16 = system_parameter_buffer;
  uStack_1a8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_248;
  uVar20 = 0;
  uStack_1c8 = param_2;
  while( true ) {
    uStack_210 = 0x180c91148;
    cStack_208 = 0;
    iVar13 = _Mtx_lock(0x180c91148);
    if (iVar13 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar13);
    }
    cStack_208 = '\x01';
    if (system_data_1198 == '\x01') break;
    uStack_1d8 = 1;
    FUN_1800495d0(0x180c91100,&uStack_210,&uStack_1d8);
    cVar23 = system_data_1198;



// 函数: void FUN_1800d40d0(int *param_1,uint64_t *param_2)
void FUN_1800d40d0(int *param_1,uint64_t *param_2)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint uVar10;
  
  iVar1 = *param_1;
  uVar9 = (uint64_t)iVar1;
  uVar6 = *param_2;
  if ((uint64_t)((int64_t)(param_2[2] - uVar6) >> 3) < uVar9) {
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8,(char)param_2[3]);
      uVar6 = *param_2;
    }
    if (uVar6 != param_2[1]) {
                    // WARNING: Subroutine does not return
      memmove(uVar3,uVar6,param_2[1] - uVar6);
    }
    if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *param_2 = uVar3;
    param_2[2] = uVar3 + uVar9 * 8;
    param_2[1] = uVar3;
  }
  uVar10 = 0;
  if (0 < iVar1) {
    do {
      puVar8 = (uint64_t *)param_2[1];
      uVar2 = *(uint64_t *)
               (*(int64_t *)(param_1 + (uint64_t)(uVar10 >> 0xb) * 2 + 2) + 0x10 +
               (uint64_t)(uVar10 + (uVar10 >> 0xb) * -0x800) * 0x18);
      if (puVar8 < (uint64_t *)param_2[2]) {
        param_2[1] = (uint64_t)(puVar8 + 1);
        *puVar8 = uVar2;
      }
      else {
        puVar7 = (uint64_t *)*param_2;
        lVar4 = (int64_t)puVar8 - (int64_t)puVar7 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1800d41dc:
          puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,(char)param_2[3]);
          puVar7 = (uint64_t *)*param_2;
          puVar8 = (uint64_t *)param_2[1];
        }
        else {
          lVar4 = lVar4 * 2;
          if (lVar4 != 0) goto LAB_1800d41dc;
          puVar5 = (uint64_t *)0x0;
        }
        if (puVar7 != puVar8) {
                    // WARNING: Subroutine does not return
          memmove(puVar5,puVar7,(int64_t)puVar8 - (int64_t)puVar7);
        }
        *puVar5 = uVar2;
        if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *param_2 = (uint64_t)puVar5;
        param_2[2] = (uint64_t)(puVar5 + lVar4);
        param_2[1] = (uint64_t)(puVar5 + 1);
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800d4179(void)
void FUN_1800d4179(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  uint64_t *puVar5;
  int unaff_R12D;
  int64_t unaff_R13;
  uint unaff_R14D;
  
  do {
    puVar5 = (uint64_t *)unaff_RBX[1];
    uVar1 = *(uint64_t *)
             (*(int64_t *)(unaff_R13 + 8 + (uint64_t)(unaff_R14D >> 0xb) * 8) + 0x10 +
             (uint64_t)(unaff_R14D + (unaff_R14D >> 0xb) * -0x800) * 0x18);
    if (puVar5 < (uint64_t *)unaff_RBX[2]) {
      unaff_RBX[1] = (uint64_t)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar4 = (uint64_t *)*unaff_RBX;
      lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1800d41dc:
        puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)unaff_RBX[3]);
        puVar4 = (uint64_t *)*unaff_RBX;
        puVar5 = (uint64_t *)unaff_RBX[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_1800d41dc;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
                    // WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
      }
      *puVar3 = uVar1;
      if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *unaff_RBX = (uint64_t)puVar3;
      unaff_RBX[2] = (uint64_t)(puVar3 + lVar2);
      unaff_RBX[1] = (uint64_t)(puVar3 + 1);
    }
    unaff_R14D = unaff_R14D + 1;
    if (unaff_R12D <= (int)unaff_R14D) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800d4253(void)
void FUN_1800d4253(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




