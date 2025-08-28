#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part038.c - 10 个函数
// 函数: void function_2efad0(int64_t param_1,int64_t param_2)
void function_2efad0(int64_t param_1,int64_t param_2)
{
  uint *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int64_t **pplVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint uVar17;
  int64_t lVar19;
  char cVar20;
  int8_t stack_array_e8 [32];
  int64_t *plStack_c8;
  int64_t **pplStack_c0;
  int64_t *plStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  uint64_t local_var_a0;
  int64_t **pplStack_98;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t uVar18;
  if (param_2 == 0) {
    return;
  }
  local_var_a0 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_e8;
  plVar6 = *(int64_t **)(param_2 + 0x210);
  uVar18 = 0;
  uVar13 = uVar18;
  lStack_b0 = param_1;
  lStack_a8 = param_2;
  if (plVar6 != (int64_t *)0x0) {
    uVar13 = (**(code **)(*plVar6 + 0x58))(plVar6,*(uint64_t *)(param_2 + 0x208));
  }
  function_2ec3d0(param_1,*(uint64_t *)(param_2 + 0x208),uVar13);
  lVar15 = *(int64_t *)(param_2 + 0x1a8);
  if (*(int64_t *)(param_2 + 0x1b0) - lVar15 >> 3 != 0) {
    pplStack_c0 = &plStack_c8;
    uVar13 = uVar18;
    do {
      (**(code **)(**(int64_t **)(uVar13 + lVar15) + 0xa8))
                (*(int64_t **)(uVar13 + lVar15),&plStack_b8);
      uVar7 = *(uint64_t *)(param_1 + 0x260);
      pplStack_98 = &plStack_c8;
      plStack_c8 = plStack_b8;
      if (plStack_b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_b8 + 0x28))();
      }
      function_2fc0f0(uVar7,plStack_c8);
      if (plStack_c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_c8 + 0x38))();
      }
      if (plStack_b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_b8 + 0x38))();
      }
      uVar17 = (int)uVar18 + 1;
      uVar18 = (uint64_t)uVar17;
      uVar13 = uVar13 + 8;
      lVar15 = *(int64_t *)(param_2 + 0x1a8);
    } while ((uint64_t)(int64_t)(int)uVar17 <
             (uint64_t)(*(int64_t *)(param_2 + 0x1b0) - lVar15 >> 3));
  }
  cVar20 = '\0';
  if ('\0' < *(char *)(param_2 + 0x20)) {
    do {
      lVar12 = lStack_b0;
      uVar18 = 0;
      lVar19 = (int64_t)cVar20 * 0x100;
      lVar15 = *(int64_t *)(param_2 + 0x18);
      lVar16 = *(int64_t *)(lVar19 + 0xb0 + lVar15);
      uVar13 = uVar18;
      if (*(int64_t *)(lVar19 + 0xb8 + lVar15) - lVar16 >> 3 != 0) {
        do {
          (**(code **)(**(int64_t **)(uVar13 + lVar16) + 0xa8))
                    (*(int64_t **)(uVar13 + lVar16),&pplStack_c0);
          pplVar11 = pplStack_c0;
          uVar7 = *(uint64_t *)(lVar12 + 0x260);
          uVar14 = (*(code *)(*pplStack_c0)[0x2b])(pplStack_c0);
          function_2fbf30(uVar7,cVar20,pplVar11,uVar14);
          if (pplStack_c0 != (int64_t **)0x0) {
            (*(code *)(*pplStack_c0)[7])();
          }
          uVar17 = (int)uVar18 + 1;
          uVar18 = (uint64_t)uVar17;
          lVar16 = *(int64_t *)(lVar19 + 0xb0 + lVar15);
          param_2 = lStack_a8;
          param_1 = lStack_b0;
          uVar13 = uVar13 + 8;
        } while ((uint64_t)(int64_t)(int)uVar17 <
                 (uint64_t)(*(int64_t *)(lVar19 + 0xb8 + lVar15) - lVar16 >> 3));
      }
      lVar16 = *(int64_t *)(*(int64_t *)(param_1 + 0x260) + 0x18);
      puVar2 = (uint64_t *)(lVar19 + 0x30 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x30 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar2 = (uint64_t *)(lVar19 + 0x40 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x40 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      *(int32_t *)(lVar19 + 0x4c + lVar16) = 0x3f800000;
      do {
        LOCK();
        puVar1 = (uint *)(lVar19 + lVar15);
        uVar17 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar17 & 1) != 0);
      puVar2 = (uint64_t *)(lVar19 + 4 + lVar15);
      local_var_88 = *puVar2;
      local_var_80 = puVar2[1];
      puVar2 = (uint64_t *)(lVar19 + 0x14 + lVar15);
      local_var_78 = *puVar2;
      local_var_70 = puVar2[1];
      *(int32_t *)(lVar19 + lVar15) = 0;
      do {
        LOCK();
        puVar1 = (uint *)(lVar19 + lVar16);
        uVar17 = *puVar1;
        *puVar1 = *puVar1 | 1;
        UNLOCK();
      } while ((uVar17 & 1) != 0);
      puVar2 = (uint64_t *)(lVar19 + 4 + lVar16);
      *puVar2 = local_var_88;
      puVar2[1] = local_var_80;
      puVar2 = (uint64_t *)(lVar19 + 0x14 + lVar16);
      *puVar2 = local_var_78;
      puVar2[1] = local_var_70;
      *(int32_t *)(lVar19 + lVar16) = 0;
      puVar2 = (uint64_t *)(lVar19 + 0x60 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x60 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar2 = (uint64_t *)(lVar19 + 0x70 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x70 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar4 = (int32_t *)(lVar19 + 0x80 + lVar15);
      uVar8 = puVar4[1];
      uVar9 = puVar4[2];
      uVar10 = puVar4[3];
      puVar5 = (int32_t *)(lVar19 + 0x80 + lVar16);
      *puVar5 = *puVar4;
      puVar5[1] = uVar8;
      puVar5[2] = uVar9;
      puVar5[3] = uVar10;
      puVar2 = (uint64_t *)(lVar19 + 0x90 + lVar15);
      uVar7 = puVar2[1];
      puVar3 = (uint64_t *)(lVar19 + 0x90 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      cVar20 = cVar20 + '\x01';
      local_var_68 = local_var_88;
      local_var_60 = local_var_80;
      local_var_58 = local_var_78;
      local_var_50 = local_var_70;
    } while (cVar20 < *(char *)(param_2 + 0x20));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_e8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_2efdd0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  if (*param_2 != 0) {
    plVar6 = *(int64_t **)(param_1 + 0x208);
    plVar4 = (int64_t *)0x0;
    lVar8 = 1;
    if (plVar6 < *(int64_t **)(param_1 + 0x210)) {
      *(int64_t **)(param_1 + 0x208) = plVar6 + 1;
      plVar5 = (int64_t *)*param_2;
      *plVar6 = (int64_t)plVar5;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x28))();
      }
    }
    else {
      plVar5 = *(int64_t **)(param_1 + 0x200);
      lVar3 = (int64_t)plVar6 - (int64_t)plVar5 >> 3;
      lVar7 = lVar8;
      if ((lVar3 == 0) || (lVar7 = lVar3 * 2, plVar2 = plVar4, plVar9 = plVar4, lVar7 != 0)) {
        plVar2 = (int64_t *)
                 CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 8,*(int8_t *)(param_1 + 0x218),param_4,
                               0xfffffffffffffffe);
        plVar6 = *(int64_t **)(param_1 + 0x208);
        plVar5 = *(int64_t **)(param_1 + 0x200);
        plVar9 = plVar2;
      }
      for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
        *plVar2 = *plVar5;
        *plVar5 = 0;
        plVar2 = plVar2 + 1;
      }
      plVar6 = (int64_t *)*param_2;
      *plVar2 = (int64_t)plVar6;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))();
      }
      plVar6 = *(int64_t **)(param_1 + 0x208);
      plVar5 = *(int64_t **)(param_1 + 0x200);
      if (plVar5 != plVar6) {
        do {
          if ((int64_t *)*plVar5 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar5 + 0x38))();
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar6);
        plVar5 = *(int64_t **)(param_1 + 0x200);
      }
      if (plVar5 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(plVar5);
      }
      *(int64_t **)(param_1 + 0x200) = plVar9;
      *(int64_t **)(param_1 + 0x208) = plVar2 + 1;
      *(int64_t **)(param_1 + 0x210) = plVar9 + lVar7;
    }
    cVar1 = (**(code **)(*(int64_t *)*param_2 + 0xe8))();
    if (cVar1 != '\0') {
      lVar7 = *param_2;
      plVar6 = *(int64_t **)(param_1 + 0x228);
      if (plVar6 < *(int64_t **)(param_1 + 0x230)) {
        *(int64_t **)(param_1 + 0x228) = plVar6 + 1;
        *plVar6 = lVar7;
      }
      else {
        plVar5 = *(int64_t **)(param_1 + 0x220);
        lVar3 = (int64_t)plVar6 - (int64_t)plVar5 >> 3;
        if ((lVar3 == 0) || (lVar8 = lVar3 * 2, lVar8 != 0)) {
          plVar4 = (int64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar8 * 8,*(int8_t *)(param_1 + 0x238));
          plVar6 = *(int64_t **)(param_1 + 0x228);
          plVar5 = *(int64_t **)(param_1 + 0x220);
        }
        if (plVar5 != plVar6) {
// WARNING: Subroutine does not return
          memmove(plVar4,plVar5,(int64_t)plVar6 - (int64_t)plVar5);
        }
        *plVar4 = lVar7;
        if (*(int64_t *)(param_1 + 0x220) != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        *(int64_t **)(param_1 + 0x220) = plVar4;
        *(int64_t **)(param_1 + 0x228) = plVar4 + 1;
        *(int64_t **)(param_1 + 0x230) = plVar4 + lVar8;
      }
    }
    cVar1 = (**(code **)(*(int64_t *)*param_2 + 0x128))();
    if (cVar1 != '\0') {
      function_2e8580(param_1,1);
    }
    (**(code **)(*(int64_t *)*param_2 + 0x160))((int64_t *)*param_2,param_1);
    if (*(int64_t *)(param_1 + 0x20) != 0) {
      (**(code **)(*(int64_t *)*param_2 + 0x158))();
    }
    PhysicsSystem_CharacterController(param_1,1);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return 1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_2f0080(int64_t param_1,int64_t *param_2,int32_t param_3)
{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t *plVar15;
  int iVar16;
  iVar16 = 0;
  plVar4 = *(int64_t **)(param_1 + 0x200);
  uVar12 = *(int64_t *)(param_1 + 0x208) - (int64_t)plVar4 >> 3;
  if (uVar12 != 0) {
    iVar11 = iVar16;
    do {
      if (*plVar4 == *param_2) break;
      iVar11 = iVar11 + 1;
      plVar4 = plVar4 + 1;
    } while ((uint64_t)(int64_t)iVar11 < uVar12);
  }
  if (**(char **)(*param_2 + 0x10) != '\0') {
    lVar5 = *(int64_t *)(param_1 + 0x228);
    lVar6 = *(int64_t *)(param_1 + 0x220);
    if (lVar5 - lVar6 >> 3 != 0) {
      lVar8 = 0;
      do {
        if (*(int64_t *)(lVar6 + lVar8) == *param_2) {
          *(uint64_t *)(lVar6 + lVar8) = *(uint64_t *)(lVar6 + -8 + (lVar5 - lVar6 >> 3) * 8);
          lVar6 = *(int64_t *)(param_1 + 0x228);
          lVar5 = *(int64_t *)(param_1 + 0x220);
          uVar10 = lVar6 - lVar5 >> 3;
          uVar13 = uVar10 - 1;
          if (uVar10 < uVar13) {
            if (*(int64_t *)(param_1 + 0x230) - lVar6 >> 3 == -1) {
// WARNING: Subroutine does not return
              memset(lVar6,0,0xfffffffffffffff8,uVar12,0xfffffffffffffffe);
            }
            if (uVar10 == 0) {
              uVar10 = 1;
            }
            else {
              uVar10 = uVar10 * 2;
            }
            if (uVar10 < uVar13) {
              uVar10 = uVar13;
            }
            if (uVar10 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar10 * 8,*(int8_t *)(param_1 + 0x238));
              lVar6 = *(int64_t *)(param_1 + 0x228);
              lVar5 = *(int64_t *)(param_1 + 0x220);
            }
            if (lVar5 == lVar6) {
// WARNING: Subroutine does not return
              memset(uVar1,0,0xfffffffffffffff8);
            }
// WARNING: Subroutine does not return
            memmove(uVar1,lVar5,lVar6 - lVar5);
          }
          lVar5 = lVar5 + uVar13 * 8;
          *(int64_t *)(param_1 + 0x228) = lVar5;
        }
        iVar16 = iVar16 + 1;
        lVar8 = lVar8 + 8;
        lVar6 = *(int64_t *)(param_1 + 0x220);
      } while ((uint64_t)(int64_t)iVar16 < (uint64_t)(lVar5 - lVar6 >> 3));
    }
  }
  uVar13 = 0;
  lVar5 = *(int64_t *)(param_1 + 0x200);
  uVar12 = uVar13;
  if (*(int64_t *)(param_1 + 0x208) - lVar5 >> 3 != 0) {
    do {
      plVar2 = (int64_t *)0x0;
      plVar4 = (int64_t *)*param_2;
      if (*(int64_t **)(uVar13 + lVar5) == plVar4) {
        (**(code **)(*plVar4 + 0x80))(plVar4,param_3);
        (**(code **)(*(int64_t *)*param_2 + 0x160))((int64_t *)*param_2,0);
        lVar5 = *(int64_t *)(param_1 + 0x200);
        plVar4 = *(int64_t **)(lVar5 + -8 + (*(int64_t *)(param_1 + 0x208) - lVar5 >> 3) * 8);
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4);
        }
        plVar3 = *(int64_t **)(lVar5 + uVar13);
        *(int64_t **)(lVar5 + uVar13) = plVar4;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))();
        }
        plVar4 = *(int64_t **)(param_1 + 0x208);
        plVar3 = *(int64_t **)(param_1 + 0x200);
        uVar7 = (int64_t)plVar4 - (int64_t)plVar3 >> 3;
        uVar10 = uVar7 - 1;
        if (uVar7 < uVar10) {
          if (*(int64_t *)(param_1 + 0x210) - (int64_t)plVar4 >> 3 == -1) {
            for (lVar5 = 0x1fffffffffffffff; lVar5 != 0; lVar5 = lVar5 + -1) {
              *plVar4 = 0;
              plVar4 = plVar4 + 1;
            }
            *(int64_t *)(param_1 + 0x208) = *(int64_t *)(param_1 + 0x208) + -8;
          }
          else {
            uVar9 = uVar7 * 2;
            if (uVar7 == 0) {
              uVar9 = 1;
            }
            if (uVar9 < uVar10) {
              uVar9 = uVar10;
            }
            plVar15 = plVar2;
            if (uVar9 != 0) {
              plVar2 = (int64_t *)
                       CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar9 * 8,*(int8_t *)(param_1 + 0x218));
              plVar4 = *(int64_t **)(param_1 + 0x208);
              plVar3 = *(int64_t **)(param_1 + 0x200);
              plVar15 = plVar2;
            }
            for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
              *plVar2 = *plVar3;
              *plVar3 = 0;
              plVar2 = plVar2 + 1;
            }
            plVar4 = plVar2;
            for (lVar5 = 0x1fffffffffffffff; lVar5 != 0; lVar5 = lVar5 + -1) {
              *plVar4 = 0;
              plVar4 = plVar4 + 1;
            }
            plVar4 = *(int64_t **)(param_1 + 0x208);
            plVar3 = *(int64_t **)(param_1 + 0x200);
            if (plVar3 != plVar4) {
              do {
                if ((int64_t *)*plVar3 != (int64_t *)0x0) {
                  (**(code **)(*(int64_t *)*plVar3 + 0x38))();
                }
                plVar3 = plVar3 + 1;
              } while (plVar3 != plVar4);
              plVar3 = *(int64_t **)(param_1 + 0x200);
            }
            if (plVar3 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager(plVar3);
            }
            *(int64_t **)(param_1 + 0x200) = plVar15;
            *(int64_t **)(param_1 + 0x208) = plVar2 + -1;
            *(int64_t **)(param_1 + 0x210) = plVar15 + uVar9;
          }
        }
        else {
          plVar2 = plVar3 + uVar10;
          if (plVar2 != plVar4) {
            do {
              if ((int64_t *)*plVar2 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar2 + 0x38))();
              }
              plVar2 = plVar2 + 1;
            } while (plVar2 != plVar4);
            plVar3 = *(int64_t **)(param_1 + 0x200);
          }
          *(int64_t **)(param_1 + 0x208) = plVar3 + uVar10;
        }
        function_1b0660(*(uint64_t *)(param_1 + 0x20),*param_2);
        PhysicsSystem_CharacterController(param_1,1);
      }
      uVar14 = (int)uVar12 + 1;
      uVar13 = uVar13 + 8;
      lVar5 = *(int64_t *)(param_1 + 0x200);
      uVar12 = (uint64_t)uVar14;
    } while ((uint64_t)(int64_t)(int)uVar14 <
             (uint64_t)(*(int64_t *)(param_1 + 0x208) - lVar5 >> 3));
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return 1;
}
uint64_t function_2f0510(int64_t param_1,char param_2,int32_t param_3)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  plVar1 = (int64_t *)(param_1 + 0x200);
  lVar4 = *plVar1;
  iVar2 = 0;
  if (*(int64_t *)(param_1 + 0x208) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar3 + lVar4) + 0x80))(*(int64_t **)(lVar3 + lVar4),param_3);
      (**(code **)(**(int64_t **)(lVar3 + *plVar1) + 0x160))(*(int64_t **)(lVar3 + *plVar1),0);
      if (*(int64_t *)(param_1 + 0x20) != 0) {
        function_1b0660(*(int64_t *)(param_1 + 0x20),*(uint64_t *)(*plVar1 + lVar3));
      }
      lVar4 = *plVar1;
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((uint64_t)(int64_t)iVar2 < (uint64_t)(*(int64_t *)(param_1 + 0x208) - lVar4 >> 3));
  }
  SystemCore_Controller(plVar1);
  *(uint64_t *)(param_1 + 0x228) = *(uint64_t *)(param_1 + 0x220);
  if (param_2 != '\0') {
    PhysicsSystem_CharacterController(param_1,1);
  }
  return 1;
}
uint64_t function_2f0516(int64_t param_1,char param_2,int32_t param_3)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  plVar1 = (int64_t *)(param_1 + 0x200);
  lVar4 = *plVar1;
  iVar2 = 0;
  if (*(int64_t *)(param_1 + 0x208) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(int64_t **)(lVar3 + lVar4) + 0x80))(*(int64_t **)(lVar3 + lVar4),param_3);
      (**(code **)(**(int64_t **)(lVar3 + *plVar1) + 0x160))(*(int64_t **)(lVar3 + *plVar1),0);
      if (*(int64_t *)(param_1 + 0x20) != 0) {
        function_1b0660(*(int64_t *)(param_1 + 0x20),*(uint64_t *)(*plVar1 + lVar3));
      }
      lVar4 = *plVar1;
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while ((uint64_t)(int64_t)iVar2 < (uint64_t)(*(int64_t *)(param_1 + 0x208) - lVar4 >> 3));
  }
  SystemCore_Controller(plVar1);
  *(uint64_t *)(param_1 + 0x228) = *(uint64_t *)(param_1 + 0x220);
  if (param_2 != '\0') {
    PhysicsSystem_CharacterController(param_1,1);
  }
  return 1;
}
uint64_t function_2f0550(void)
{
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint64_t uVar1;
  int64_t in_R9;
  int32_t unaff_R14D;
  char unaff_R15B;
  uVar1 = (uint64_t)unaff_ESI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + in_R9) + 0x80))(*(int64_t **)(uVar1 + in_R9),unaff_R14D);
    (**(code **)(**(int64_t **)(uVar1 + *unaff_RBX) + 0x160))(*(int64_t **)(uVar1 + *unaff_RBX),0)
    ;
    if (*(int64_t *)(unaff_RBP + 0x20) != 0) {
      function_1b0660(*(int64_t *)(unaff_RBP + 0x20),*(uint64_t *)(*unaff_RBX + uVar1));
    }
    in_R9 = *unaff_RBX;
    unaff_ESI = unaff_ESI + 1;
    uVar1 = uVar1 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_ESI < (uint64_t)(unaff_RBX[1] - in_R9 >> 3));
  SystemCore_Controller();
  *(uint64_t *)(unaff_RBP + 0x228) = *(uint64_t *)(unaff_RBP + 0x220);
  if (unaff_R15B != '\0') {
    PhysicsSystem_CharacterController();
  }
  return 1;
}
uint64_t function_2f05b8(void)
{
  int64_t unaff_RBP;
  char unaff_R15B;
  SystemCore_Controller();
  *(uint64_t *)(unaff_RBP + 0x228) = *(uint64_t *)(unaff_RBP + 0x220);
  if (unaff_R15B != '\0') {
    PhysicsSystem_CharacterController();
  }
  return 1;
}
int8_t function_2f05e7(void)
{
  PhysicsSystem_CharacterController();
  return 1;
}
// 函数: void function_2f0600(int64_t param_1,int32_t param_2)
void function_2f0600(int64_t param_1,int32_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  char cVar8;
  uVar4 = 0;
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      function_2f0600(*(uint64_t *)(uVar7 + *(int64_t *)(param_1 + 0x1c0)),param_2);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar6;
      uVar7 = uVar7 + 8;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  uVar5 = uVar4;
  uVar7 = uVar4;
  if (*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar7 + *(int64_t *)(param_1 + 0xf0));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
      uVar6 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar6;
      uVar7 = uVar7 + 8;
    } while ((uint64_t)(int64_t)(int)uVar6 <
             (uint64_t)(*(int64_t *)(param_1 + 0xf8) - *(int64_t *)(param_1 + 0xf0) >> 3));
  }
  lVar2 = *(int64_t *)(param_1 + 0x260);
  if (lVar2 != 0) {
    cVar8 = '\0';
    if ('\0' < *(char *)(lVar2 + 0x20)) {
      do {
        lVar3 = (int64_t)cVar8 * 0x100 + *(int64_t *)(lVar2 + 0x18);
        uVar5 = uVar4;
        uVar7 = uVar4;
        if (*(int64_t *)(lVar3 + 0xb8) - *(int64_t *)(lVar3 + 0xb0) >> 3 != 0) {
          do {
            plVar1 = *(int64_t **)(uVar5 + *(int64_t *)(lVar3 + 0xb0));
            (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffffffff);
            uVar6 = (int)uVar7 + 1;
            uVar5 = uVar5 + 8;
            uVar7 = (uint64_t)uVar6;
          } while ((uint64_t)(int64_t)(int)uVar6 <
                   (uint64_t)(*(int64_t *)(lVar3 + 0xb8) - *(int64_t *)(lVar3 + 0xb0) >> 3));
        }
        cVar8 = cVar8 + '\x01';
      } while (cVar8 < *(char *)(lVar2 + 0x20));
    }
    uVar5 = uVar4;
    if (*(int64_t *)(lVar2 + 0x1b0) - *(int64_t *)(lVar2 + 0x1a8) >> 3 != 0) {
      do {
        plVar1 = *(int64_t **)(uVar4 + *(int64_t *)(lVar2 + 0x1a8));
        (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
        uVar4 = uVar4 + 8;
        uVar6 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar6;
      } while ((uint64_t)(int64_t)(int)uVar6 <
               (uint64_t)(*(int64_t *)(lVar2 + 0x1b0) - *(int64_t *)(lVar2 + 0x1a8) >> 3));
    }
  }
  return;
}
// 函数: void function_2f06d7(void)
void function_2f06d7(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  uint uVar4;
  uint64_t uVar5;
  char cVar6;
  cVar6 = '\0';
  if ((char)unaff_RBP < *(char *)(unaff_RDI + 0x20)) {
    do {
      uVar5 = unaff_RBP & 0xffffffff;
      lVar2 = (int64_t)cVar6 * 0x100 + *(int64_t *)(unaff_RDI + 0x18);
      uVar3 = unaff_RBP;
      if (*(int64_t *)(lVar2 + 0xb8) - *(int64_t *)(lVar2 + 0xb0) >> 3 != 0) {
        do {
          plVar1 = *(int64_t **)(uVar3 + *(int64_t *)(lVar2 + 0xb0));
          (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffffffff);
          uVar4 = (int)uVar5 + 1;
          uVar5 = (uint64_t)uVar4;
          uVar3 = uVar3 + 8;
        } while ((uint64_t)(int64_t)(int)uVar4 <
                 (uint64_t)(*(int64_t *)(lVar2 + 0xb8) - *(int64_t *)(lVar2 + 0xb0) >> 3));
      }
      cVar6 = cVar6 + '\x01';
    } while (cVar6 < *(char *)(unaff_RDI + 0x20));
  }
  uVar3 = unaff_RBP;
  if (*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1a8));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
      unaff_RBP = unaff_RBP + 8;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3));
  }
  return;
}
// 函数: void function_2f06e9(void)
void function_2f06e9(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  uint uVar4;
  uint64_t uVar5;
  char unaff_R15B;
  do {
    uVar5 = unaff_RBP & 0xffffffff;
    lVar2 = (int64_t)unaff_R15B * 0x100 + *(int64_t *)(unaff_RDI + 0x18);
    uVar3 = unaff_RBP;
    if (*(int64_t *)(lVar2 + 0xb8) - *(int64_t *)(lVar2 + 0xb0) >> 3 != 0) {
      do {
        plVar1 = *(int64_t **)(uVar3 + *(int64_t *)(lVar2 + 0xb0));
        (**(code **)(*plVar1 + 0x1b0))(plVar1,0xffffffff);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar3 = uVar3 + 8;
      } while ((uint64_t)(int64_t)(int)uVar4 <
               (uint64_t)(*(int64_t *)(lVar2 + 0xb8) - *(int64_t *)(lVar2 + 0xb0) >> 3));
    }
    unaff_R15B = unaff_R15B + '\x01';
  } while (unaff_R15B < *(char *)(unaff_RDI + 0x20));
  uVar3 = unaff_RBP;
  if (*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1a8));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
      unaff_RBP = unaff_RBP + 8;
      uVar4 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar4;
    } while ((uint64_t)(int64_t)(int)uVar4 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3));
  }
  return;
}
// 函数: void function_2f0768(void)
void function_2f0768(void)
{
  int64_t *plVar1;
  uint uVar2;
  uint64_t unaff_RBP;
  uint64_t uVar3;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  uVar3 = unaff_RBP;
  if (*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1a8));
      (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
      unaff_RBP = unaff_RBP + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3));
  }
  return;
}
// 函数: void function_2f0784(void)
void function_2f0784(void)
{
  int64_t *plVar1;
  uint uVar2;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int32_t unaff_R12D;
  uint64_t uVar3;
  uVar3 = unaff_RBP;
  do {
    plVar1 = *(int64_t **)(unaff_RBP + *(int64_t *)(unaff_RDI + 0x1a8));
    (**(code **)(*plVar1 + 0x1b0))(plVar1,unaff_R12D);
    unaff_RBP = unaff_RBP + 8;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (uint64_t)uVar2;
  } while ((uint64_t)(int64_t)(int)uVar2 <
           (uint64_t)(*(int64_t *)(unaff_RDI + 0x1b0) - *(int64_t *)(unaff_RDI + 0x1a8) >> 3));
  return;
}
// 函数: void function_2f07e0(int64_t param_1)
void function_2f07e0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  iVar3 = 0;
  lVar2 = *(int64_t *)(param_1 + 0x200);
  if (*(int64_t *)(param_1 + 0x208) - lVar2 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(int64_t **)(lVar4 + lVar2);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      function_354170(plVar1);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
      lVar2 = *(int64_t *)(param_1 + 0x200);
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x208) - lVar2 >> 3));
  }
  return;
}
// 函数: void function_2f0890(int64_t param_1,int32_t param_2)
void function_2f0890(int64_t param_1,int32_t param_2)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  iVar2 = 0;
  lVar4 = *(int64_t *)(param_1 + 0x200);
  if (*(int64_t *)(param_1 + 0x208) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(int64_t **)(lVar3 + lVar4);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      (**(code **)(*plVar1 + 200))(plVar1,param_2);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
      lVar4 = *(int64_t *)(param_1 + 0x200);
    } while ((uint64_t)(int64_t)iVar2 < (uint64_t)(*(int64_t *)(param_1 + 0x208) - lVar4 >> 3));
  }
  return;
}
// 函数: void function_2f0940(int64_t param_1,int32_t param_2)
void function_2f0940(int64_t param_1,int32_t param_2)
{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uVar1 = 0;
  *(int32_t *)(param_1 + 700) = param_2;
  uVar3 = uVar1;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      function_2f0940(*(uint64_t *)(*(int64_t *)(param_1 + 0x1c0) + uVar1),param_2,1);
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// 函数: void function_2f0976(void)
void function_2f0976(void)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    function_2f0940(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x1c0) + uVar1));
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x1c8) - *(int64_t *)(unaff_RBX + 0x1c0) >> 3));
  return;
}