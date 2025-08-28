/* 函数别名定义: DataTransformer */
#define DataTransformer DataTransformer
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part229.c - 12 个函数
// 函数: void RenderingSystem_97ce0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_97ce0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  RenderingSystem_981a0();
  if (*(int64_t *)(param_1 + 200) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  GenericFunction_18017b400(param_1 + 0x98,*(uint64_t *)(param_1 + 0xa8),param_3,param_4,uVar1);
  DataTransformer0();
  if (*(int64_t *)(param_1 + 0x50) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ(param_1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_97d70(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_97d70(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uVar8 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  CoreEngine_0E8140(param_2,*(int64_t *)(param_1 + 0x80) - *(int64_t *)(param_1 + 0x78) >> 3);
  iVar1 = 0;
  lVar4 = *(int64_t *)(param_1 + 0x78);
  if (*(int64_t *)(param_1 + 0x80) - lVar4 >> 3 != 0) {
    lVar7 = 0;
    do {
      lVar4 = *(int64_t *)(lVar7 + lVar4);
      if ((*(uint *)(lVar4 + 0x2ac) & 0x20000000) == 0) {
        plVar6 = (int64_t *)param_2[1];
        if (plVar6 < (int64_t *)param_2[2]) {
          param_2[1] = (int64_t)(plVar6 + 1);
          *plVar6 = lVar4;
        }
        else {
          plVar5 = (int64_t *)*param_2;
          lVar2 = (int64_t)plVar6 - (int64_t)plVar5 >> 3;
          if (lVar2 == 0) {
            lVar2 = 1;
LAB_180397e43:
            plVar3 = (int64_t *)
                     CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)param_2[3],param_4,uVar8);
            plVar6 = (int64_t *)param_2[1];
            plVar5 = (int64_t *)*param_2;
          }
          else {
            lVar2 = lVar2 * 2;
            if (lVar2 != 0) goto LAB_180397e43;
            plVar3 = (int64_t *)0x0;
          }
          if (plVar5 != plVar6) {
// WARNING: Subroutine does not return
            memmove(plVar3,plVar5,(int64_t)plVar6 - (int64_t)plVar5);
          }
          *plVar3 = lVar4;
          if (*param_2 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *param_2 = (int64_t)plVar3;
          param_2[1] = (int64_t)(plVar3 + 1);
          param_2[2] = (int64_t)(plVar3 + lVar2);
        }
      }
      iVar1 = iVar1 + 1;
      lVar7 = lVar7 + 8;
      lVar4 = *(int64_t *)(param_1 + 0x78);
    } while ((uint64_t)(int64_t)iVar1 < (uint64_t)(*(int64_t *)(param_1 + 0x80) - lVar4 >> 3));
  }
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// 函数: void RenderingSystem_97f00(int64_t param_1)
void RenderingSystem_97f00(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t *plVar8;
  uint uVar9;
  uint64_t *puVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  uint64_t uVar10;
  iVar4 = _Mtx_lock();
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puVar1 = (uint64_t *)(param_1 + 200);
  if (*(int64_t *)(param_1 + 0x58) != (int64_t)(*(int64_t *)(param_1 + 0xd0) - *puVar1) >> 3) {
    RenderingSystem_98a30(param_1 + 0x50);
    puVar2 = *(uint64_t **)(param_1 + 0xd0);
    puVar3 = (uint64_t *)*puVar1;
    uVar15 = 0;
    if (puVar3 != puVar2) {
      uVar9 = 0;
      lVar16 = (int64_t)puVar2 - (int64_t)puVar3 >> 3;
      uVar10 = uVar15;
      for (lVar5 = lVar16; lVar5 != 0; lVar5 = lVar5 >> 1) {
        uVar9 = (int)uVar10 + 1;
        uVar10 = (uint64_t)uVar9;
      }
      DataStructure_d9ff0(puVar3,puVar2,(int64_t)(int)(uVar9 - 1) * 2);
      puVar17 = puVar3;
      if (lVar16 < 0x1d) {
        while (puVar17 = puVar17 + 1, puVar17 != puVar2) {
          uVar10 = *puVar17;
          puVar7 = puVar17;
          puVar6 = puVar17;
          while (puVar6 != puVar3) {
            puVar6 = puVar6 + -1;
            if (*puVar6 <= uVar10) break;
            *puVar7 = *puVar6;
            puVar7 = puVar7 + -1;
          }
          *puVar7 = uVar10;
        }
      }
      else {
        puVar17 = puVar3 + 0x1c;
        puVar7 = puVar3;
        if (puVar3 != puVar17) {
          while (puVar7 = puVar7 + 1, puVar7 != puVar17) {
            uVar10 = *puVar7;
            puVar6 = puVar7;
            puVar11 = puVar7;
            while (puVar6 != puVar3) {
              puVar6 = puVar6 + -1;
              if (*puVar6 <= uVar10) break;
              *puVar11 = *puVar6;
              puVar11 = puVar11 + -1;
            }
            *puVar11 = uVar10;
          }
        }
        for (; puVar17 != puVar2; puVar17 = puVar17 + 1) {
          uVar10 = *puVar17;
          uVar14 = puVar17[-1];
          puVar7 = puVar17 + -1;
          puVar3 = puVar17;
          while (puVar6 = puVar7, uVar10 < uVar14) {
            *puVar3 = uVar14;
            puVar7 = puVar6 + -1;
            uVar14 = *puVar7;
            puVar3 = puVar6;
          }
          *puVar3 = uVar10;
        }
      }
    }
    plVar18 = *(int64_t **)(param_1 + 0xd0);
    plVar8 = (int64_t *)*puVar1;
    if ((plVar8 != plVar18) && (plVar8 + 1 != plVar18)) {
      plVar13 = plVar8 + 1;
      lVar5 = *plVar8;
      do {
        lVar16 = *plVar13;
        if (lVar5 == lVar16) {
          if (plVar8 != plVar18) {
            plVar13 = plVar8 + 1;
            uVar10 = (uint64_t)((int64_t)plVar18 + (7 - (int64_t)plVar13)) >> 3;
            if (plVar18 < plVar13) {
              uVar10 = uVar15;
            }
            uVar14 = uVar15;
            if (uVar10 != 0) {
              do {
                if (*plVar8 != *plVar13) {
                  plVar8 = plVar8 + 1;
                  *plVar8 = *plVar13;
                }
                plVar13 = plVar13 + 1;
                uVar14 = uVar14 + 1;
              } while (uVar14 != uVar10);
            }
            plVar18 = plVar8 + 1;
          }
          break;
        }
        plVar12 = plVar13 + 1;
        plVar8 = plVar13;
        plVar13 = plVar12;
        lVar5 = lVar16;
      } while (plVar12 != plVar18);
    }
    plVar8 = *(int64_t **)(param_1 + 0xd0);
    if (plVar18 != plVar8) {
      *(uint64_t *)(param_1 + 0xd0) =
           (int64_t)plVar8 - ((int64_t)plVar8 - (int64_t)plVar18 & 0xfffffffffffffff8U);
    }
    iVar4 = (int)((int64_t)(*(int64_t *)(param_1 + 0xd0) - *puVar1) >> 3);
    if (0 < iVar4) {
      do {
        *(int32_t *)(*(int64_t *)(*puVar1 + uVar15 * 8) + 0x2b8) = 0xffffffff;
        RenderingSystem_982f0(param_1);
        uVar15 = uVar15 + 1;
      } while ((int64_t)uVar15 < (int64_t)iVar4);
    }
    RenderingSystem_98ab0(puVar1);
  }
  iVar4 = _Mtx_unlock(param_1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}
// 函数: void RenderingSystem_981a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_981a0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int32_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int iVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uVar8 = 0xfffffffffffffffe;
  iVar6 = _Mtx_lock();
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  if (*(int64_t *)(param_1 + 0x50) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  SystemCore_Controller(param_1 + 0x78);
  plVar3 = *(int64_t **)(param_1 + 0x78);
  *(uint64_t *)(param_1 + 0x78) = 0;
  plVar4 = *(int64_t **)(param_1 + 0x80);
  *(uint64_t *)(param_1 + 0x80) = 0;
  uVar5 = *(uint64_t *)(param_1 + 0x88);
  *(uint64_t *)(param_1 + 0x88) = 0;
  uVar2 = *(int32_t *)(param_1 + 0x90);
  *(int32_t *)(param_1 + 0x90) = 3;
  lVar1 = param_1 + 0x98;
  GenericFunction_18017b400(lVar1,*(uint64_t *)(param_1 + 0xa8),param_3,param_4,uVar8,plVar3,plVar4,uVar5,
                uVar2);
  *(int64_t *)lVar1 = lVar1;
  *(int64_t *)(param_1 + 0xa0) = lVar1;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int8_t *)(param_1 + 0xb0) = 0;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xd0) = *(uint64_t *)(param_1 + 200);
  RenderingSystem_98ab0();
  for (plVar7 = plVar3; plVar7 != plVar4; plVar7 = plVar7 + 1) {
    if ((int64_t *)*plVar7 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar7 + 0x38))();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar3);
  }
  iVar6 = _Mtx_unlock(param_1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_982f0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_982f0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar2 = SystemFunction_000180398990(param_1 + 0x50);
  *(int64_t *)((uint64_t)uVar2 * 0x10 + *(int64_t *)(param_1 + 0x50) + 8) = param_2;
  plVar6 = *(int64_t **)(param_1 + 0xd0);
  if (plVar6 < *(int64_t **)(param_1 + 0xd8)) {
    *(int64_t **)(param_1 + 0xd0) = plVar6 + 1;
    *plVar6 = param_2;
    goto LAB_180398414;
  }
  plVar5 = *(int64_t **)(param_1 + 200);
  lVar3 = (int64_t)plVar6 - (int64_t)plVar5 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
LAB_180398396:
    plVar4 = (int64_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,*(int8_t *)(param_1 + 0xe0),param_4,uVar7);
    plVar6 = *(int64_t **)(param_1 + 0xd0);
    plVar5 = *(int64_t **)(param_1 + 200);
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 != 0) goto LAB_180398396;
    plVar4 = (int64_t *)0x0;
  }
  if (plVar5 != plVar6) {
// WARNING: Subroutine does not return
    memmove(plVar4,plVar5,(int64_t)plVar6 - (int64_t)plVar5);
  }
  *plVar4 = param_2;
  if (*(int64_t *)(param_1 + 200) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(int64_t **)(param_1 + 200) = plVar4;
  *(int64_t **)(param_1 + 0xd0) = plVar4 + 1;
  *(int64_t **)(param_1 + 0xd8) = plVar4 + lVar3;
LAB_180398414:
  *(uint *)(param_2 + 0x2b8) = uVar2;
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// 函数: void RenderingSystem_98450(int64_t param_1,int64_t param_2)
void RenderingSystem_98450(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  plVar3 = *(int64_t **)(param_1 + 0xd0);
  plVar6 = *(int64_t **)(param_1 + 200);
  if (plVar6 != plVar3) {
    do {
      if (*plVar6 == param_2) break;
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
    if (plVar6 != plVar3) {
      plVar1 = plVar6 + 1;
      if (plVar1 < plVar3) {
// WARNING: Subroutine does not return
        memmove(plVar6,plVar1,(int64_t)plVar3 - (int64_t)plVar1);
      }
      *(int64_t **)(param_1 + 0xd0) = plVar3 + -1;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x2b8);
  if (uVar2 != 0xffffffff) {
    puVar7 = (uint64_t *)((uint64_t)uVar2 * 0x10 + *(int64_t *)(param_1 + 0x50));
    if ((*puVar7 & 0xffffffff00000000) != 0) {
      lVar4 = *(int64_t *)(param_1 + 0x68);
      *(uint64_t *)(param_1 + 0x68) = (uint64_t)uVar2;
      if (lVar4 == 0xffffffff) {
        *puVar7 = 0xffffffff;
      }
      else {
        *puVar7 = (int64_t)(int)lVar4;
      }
    }
  }
  *(int32_t *)(param_2 + 0x2b8) = 0xffffffff;
  RenderingSystem_98550(param_1,param_2);
  iVar5 = _Mtx_unlock(param_1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}
// 函数: void RenderingSystem_98550(int64_t param_1,int64_t param_2)
void RenderingSystem_98550(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  iVar3 = _Mtx_lock();
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  plVar2 = *(int64_t **)(param_1 + 0x80);
  plVar5 = *(int64_t **)(param_1 + 0x78);
  if (plVar5 != plVar2) {
    do {
      if (*plVar5 == param_2) break;
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar2);
    if (plVar5 != plVar2) {
      GenericFunction_1800ba050();
    }
  }
  lVar1 = param_1 + 0x98;
  lVar4 = *(int64_t *)(param_1 + 0xa0);
  if (lVar4 != lVar1) {
    do {
      if (*(int64_t *)(lVar4 + 0x20) == param_2) break;
      lVar4 = SystemFunction_00018066bd70(lVar4);
    } while (lVar4 != lVar1);
    if (lVar4 != lVar1) {
      *(int64_t *)(param_1 + 0xb8) = *(int64_t *)(param_1 + 0xb8) + -1;
      SystemFunction_00018066bd70(lVar4);
      RenderingSystem_BufferHandler(lVar4,lVar1);
      if (*(int64_t **)(lVar4 + 0x20) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar4 + 0x20) + 0x38))();
      }
      if (lVar4 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar4);
      }
    }
  }
  iVar3 = _Mtx_unlock(param_1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// 函数: void RenderingSystem_98640(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_98640(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int iVar1;
  int64_t *plStackX_8;
  int64_t lStackX_10;
  uint64_t uVar2;
  uVar2 = 0xfffffffffffffffe;
  lStackX_10 = param_1;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  GenericFunction_1800b87c0(param_1 + 0x78,&plStackX_8,param_3,param_4,uVar2);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_986d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_986d0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uVar11 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock();
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
    plVar8 = *(int64_t **)(param_1 + 0x80);
    plVar4 = *(int64_t **)(param_1 + 0x78);
    uVar10 = ((int64_t)plVar8 - (int64_t)plVar4 >> 3) + *(int64_t *)(param_1 + 0xb8);
    plVar3 = (int64_t *)0x0;
    if ((uint64_t)(*(int64_t *)(param_1 + 0x88) - (int64_t)plVar4 >> 3) < uVar10) {
      if (uVar10 != 0) {
        plVar3 = (int64_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 8,*(int8_t *)(param_1 + 0x90),param_4,
                               uVar11);
        plVar8 = *(int64_t **)(param_1 + 0x80);
        plVar4 = *(int64_t **)(param_1 + 0x78);
      }
      plVar7 = plVar3;
      if (plVar4 != plVar8) {
        do {
          *plVar7 = *plVar4;
          *plVar4 = 0;
          plVar4 = plVar4 + 1;
          plVar7 = plVar7 + 1;
        } while (plVar4 != plVar8);
        plVar8 = *(int64_t **)(param_1 + 0x80);
        plVar4 = *(int64_t **)(param_1 + 0x78);
        if (plVar4 != plVar8) {
          do {
            if ((int64_t *)*plVar4 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar4 + 0x38))();
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar8);
          plVar4 = *(int64_t **)(param_1 + 0x78);
        }
      }
      if (plVar4 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar4);
      }
      *(int64_t **)(param_1 + 0x78) = plVar3;
      *(int64_t **)(param_1 + 0x80) = plVar7;
      *(int64_t **)(param_1 + 0x88) = plVar3 + uVar10;
    }
    lVar1 = param_1 + 0x98;
    for (lVar5 = *(int64_t *)(param_1 + 0xa0); lVar5 != lVar1; lVar5 = SystemFunction_00018066bd70(lVar5))
    {
      plVar4 = (int64_t *)0x0;
      plVar8 = *(int64_t **)(lVar5 + 0x20);
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8);
      }
      plVar3 = *(int64_t **)(param_1 + 0x80);
      if (plVar3 < *(int64_t **)(param_1 + 0x88)) {
        *(int64_t **)(param_1 + 0x80) = plVar3 + 1;
        *plVar3 = (int64_t)plVar8;
      }
      else {
        plVar7 = *(int64_t **)(param_1 + 0x78);
        lVar6 = (int64_t)plVar3 - (int64_t)plVar7 >> 3;
        if (lVar6 == 0) {
          lVar6 = 1;
LAB_180398877:
          plVar4 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,*(int8_t *)(param_1 + 0x90));
          plVar3 = *(int64_t **)(param_1 + 0x80);
          plVar7 = *(int64_t **)(param_1 + 0x78);
          plVar9 = plVar4;
        }
        else {
          lVar6 = lVar6 * 2;
          plVar9 = plVar4;
          if (lVar6 != 0) goto LAB_180398877;
        }
        for (; plVar7 != plVar3; plVar7 = plVar7 + 1) {
          *plVar4 = *plVar7;
          *plVar7 = 0;
          plVar4 = plVar4 + 1;
        }
        *plVar4 = (int64_t)plVar8;
        plVar8 = *(int64_t **)(param_1 + 0x80);
        plVar3 = *(int64_t **)(param_1 + 0x78);
        if (plVar3 != plVar8) {
          do {
            if ((int64_t *)*plVar3 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar3 + 0x38))();
            }
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar8);
          plVar3 = *(int64_t **)(param_1 + 0x78);
        }
        if (plVar3 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar3);
        }
        *(int64_t **)(param_1 + 0x78) = plVar9;
        *(int64_t **)(param_1 + 0x80) = plVar4 + 1;
        *(int64_t **)(param_1 + 0x88) = plVar9 + lVar6;
      }
    }
    GenericFunction_18017b400(lVar1,*(uint64_t *)(param_1 + 0xa8));
    *(int64_t *)lVar1 = lVar1;
    *(int64_t *)(param_1 + 0xa0) = lVar1;
    *(uint64_t *)(param_1 + 0xa8) = 0;
    *(int8_t *)(param_1 + 0xb0) = 0;
    *(uint64_t *)(param_1 + 0xb8) = 0;
  }
  iVar2 = _Mtx_unlock(param_1);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_98a30(int64_t *param_1)
void RenderingSystem_98a30(int64_t *param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  uVar1 = system_memory_pool_ptr;
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  param_1[2] = 1;
  lVar2 = CoreEngineMemoryPoolAllocator(uVar1,param_1[4] << 4,0xd);
  *param_1 = lVar2;
  return;
}
// 函数: void RenderingSystem_98a80(int64_t *param_1)
void RenderingSystem_98a80(int64_t *param_1)
{
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_98ab0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_98ab0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar4 = 0;
  uVar1 = *(uint *)(param_1 + 3);
  lVar6 = lVar2 - lVar3;
  lVar5 = lVar6 >> 3;
  if (lVar5 != 0) {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe,0,0,0,
                          uVar1);
  }
  lVar5 = lVar4 + lVar5 * 8;
  if (lVar3 != lVar2) {
// WARNING: Subroutine does not return
    memmove(lVar4,lVar3,lVar6,param_4,uVar7,lVar4,lVar5,lVar5);
  }
  lVar2 = *param_1;
  *param_1 = lVar4;
  param_1[1] = lVar5;
  param_1[2] = lVar5;
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar2 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}