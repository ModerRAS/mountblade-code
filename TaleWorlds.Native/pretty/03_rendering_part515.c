#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part515.c - 13 个函数

// 函数: void FUN_1805435c0(int64_t param_1,byte *param_2,int64_t param_3)
void FUN_1805435c0(int64_t param_1,byte *param_2,int64_t param_3)

{
  code *pcVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *aplStackX_10 [2];
  int64_t *plStackX_20;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  int64_t lStack_40;
  
  uVar11 = 0;
  if ((*param_2 & 0x80) != 0) {
    uVar6 = FUN_1804bc380(0x180c95de0,*(int32_t *)(param_2 + 0x24),
                          *(int32_t *)(param_2 + 0x20),*(int32_t *)(param_3 + 0x53c),0,
                          0xfffffffffffffffe);
    uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16);
    plVar8 = (int64_t *)FUN_180275090(uVar7);
    plStackX_20 = plVar8;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    FUN_180275a60(uVar6,plVar8,1);
    pcVar1 = *(code **)(*plVar8 + 0x108);
    uVar4 = FUN_1804bbc50(0x180c95de0,param_3);
    uStack_58 = (int64_t **)
                CONCAT44((float)(uVar4 >> 8 & 0xff) * 0.003921569,
                         (float)(uVar4 >> 0x10 & 0xff) * 0.003921569);
    uStack_50 = CONCAT44((float)(uVar4 >> 0x18) * 0.003921569,(float)(uVar4 & 0xff) * 0.003921569);
    (*pcVar1)(plVar8,&uStack_58);
    if ((param_2[0x19] != 0) || (param_2[0x1a] != 0)) {
      uStack_58 = (int64_t **)0x0;
      uStack_50 = 0;
      uStack_48 = 0;
      lStack_40 = CONCAT44(lStack_40._4_4_,3);
      (**(code **)(*plVar8 + 0xb8))(plVar8,0,&uStack_58);
      uVar9 = uVar11;
      uVar10 = uVar11;
      if (uStack_50 - (int64_t)uStack_58 >> 3 != 0) {
        do {
          lVar2 = *(int64_t *)(uVar9 + (int64_t)uStack_58);
          uVar6 = FUN_18022cb40(*(uint64_t *)(lVar2 + 0x1b8),aplStackX_10);
          FUN_180076910(lVar2,uVar6);
          if (aplStackX_10[0] != (int64_t *)0x0) {
            (**(code **)(*aplStackX_10[0] + 0x38))();
          }
          uVar4 = (int)uVar10 + 1;
          uVar9 = uVar9 + 8;
          uVar10 = (uint64_t)uVar4;
        } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(uStack_50 - (int64_t)uStack_58 >> 3)
                );
      }
      if (uStack_58 != (int64_t **)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    uStack_58 = aplStackX_10;
    aplStackX_10[0] = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
    FUN_180544860(param_1,4,aplStackX_10);
    if (*(int64_t *)(param_1 + 0x8a8) != 0) {
      uVar11 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    }
    FUN_1802fc0f0(uVar11,*(uint64_t *)(param_1 + 0x38));
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  uStack_48 = 0xfffffffffffffffe;
  lVar3 = *(int64_t *)(param_1 + 0x930);
  lVar2 = lVar3 + 0x2be8;
  lStack_40 = lVar2;
  iVar5 = _Mtx_lock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  FUN_1804dd4d0(lVar3 + 0x2b88,&stack0xffffffffffffffe0,&stack0xffffffffffffffd0);
  iVar5 = _Mtx_unlock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}





// 函数: void FUN_180543820(int64_t param_1,int32_t param_2)
void FUN_180543820(int64_t param_1,int32_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t lVar6;
  int iVar8;
  int64_t lVar10;
  int32_t uVar11;
  uint64_t uVar7;
  uint64_t uVar9;
  
  uVar2 = 0;
  plVar1 = (int64_t *)(param_1 + 0xa8);
  lVar10 = 5;
  do {
    if (plVar1[-3] != 0) {
      lVar6 = *(int64_t *)(plVar1[-3] + 0x260);
      if ((lVar6 != 0) && (lVar6 = *(int64_t *)(lVar6 + 0x210), lVar6 != 0)) {
        uVar11 = param_2;
        if (*(char *)((int64_t)plVar1 + 0x10c) != '\0') {
          uVar11 = 0;
        }
        *(int32_t *)(lVar6 + 0x100) = uVar11;
      }
      if (plVar1[-2] != 0) {
        FUN_1805ec530(plVar1[-2],param_2);
      }
      lVar6 = plVar1[-1];
      uVar3 = uVar2;
      uVar9 = uVar2;
      if (*plVar1 - lVar6 >> 3 != 0) {
        do {
          iVar8 = (int)uVar9;
          FUN_1805ec530(*(uint64_t *)(lVar6 + uVar3),param_2);
          lVar6 = plVar1[-1];
          uVar3 = uVar3 + 8;
          uVar9 = (uint64_t)(iVar8 + 1U);
        } while ((uint64_t)(int64_t)(int)(iVar8 + 1U) < (uint64_t)(*plVar1 - lVar6 >> 3));
      }
    }
    plVar1 = plVar1 + 0x30;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  lVar10 = *(int64_t *)(param_1 + 0x810);
  uVar3 = uVar2;
  uVar9 = uVar2;
  if (*(int64_t *)(param_1 + 0x818) - lVar10 >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(lVar10 + uVar3);
      if (((*plVar1 != 0) && (lVar10 = *(int64_t *)(*plVar1 + 0x260), lVar10 != 0)) &&
         (lVar10 = *(int64_t *)(lVar10 + 0x210), lVar10 != 0)) {
        *(int32_t *)(lVar10 + 0x100) = 0;
      }
      if (plVar1[1] != 0) {
        FUN_1805ec530(plVar1[1],0);
      }
      iVar8 = (int)uVar9;
      uVar4 = uVar2;
      uVar7 = uVar2;
      if (plVar1[3] - plVar1[2] >> 3 != 0) {
        do {
          iVar5 = (int)uVar7;
          FUN_1805ec530(*(uint64_t *)(uVar4 + plVar1[2]),0);
          iVar8 = (int)uVar9;
          uVar4 = uVar4 + 8;
          uVar7 = (uint64_t)(iVar5 + 1U);
        } while ((uint64_t)(int64_t)(int)(iVar5 + 1U) < (uint64_t)(plVar1[3] - plVar1[2] >> 3));
      }
      lVar10 = *(int64_t *)(param_1 + 0x810);
      uVar3 = uVar3 + 8;
      uVar9 = (uint64_t)(iVar8 + 1U);
    } while ((uint64_t)(int64_t)(int)(iVar8 + 1U) <
             (uint64_t)(*(int64_t *)(param_1 + 0x818) - lVar10 >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805439d0(int64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4)
void FUN_1805439d0(int64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4)

{
  int8_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *plStackX_8;
  int64_t lStackX_10;
  int64_t lStackX_18;
  int8_t uStackX_20;
  int64_t *plStack_a8;
  int64_t **pplStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t *plStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t **pplStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  int64_t **pplStack_50;
  
  uStack_58 = 0xfffffffffffffffe;
  if (((*(uint *)(param_2 + 0xc) & 0xfffffffa) == 0) && (*(uint *)(param_2 + 0xc) != 5)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  uStackX_20 = param_4;
  FUN_1805707a0(param_3,uVar12);
  uVar12 = 0;
  plStack_88 = (int64_t *)0x0;
  plStack_80 = (int64_t *)0x0;
  plStack_78 = (int64_t *)0x0;
  plStack_70 = (int64_t *)0x0;
  plVar7 = (int64_t *)FUN_1804bca40();
  plVar4 = (int64_t *)*plVar7;
  *plVar7 = 0;
  plStackX_8 = (int64_t *)0x0;
  plStack_88 = plVar4;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  plVar8 = (int64_t *)FUN_1804bd030();
  plVar7 = (int64_t *)*plVar8;
  *plVar8 = 0;
  plStackX_8 = (int64_t *)0x0;
  plStack_80 = plVar7;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  plVar9 = (int64_t *)FUN_1804bd2b0();
  plVar8 = (int64_t *)*plVar9;
  *plVar9 = 0;
  plStackX_8 = (int64_t *)0x0;
  plStack_78 = plVar8;
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  plVar10 = (int64_t *)FUN_1804bce70();
  plVar9 = (int64_t *)*plVar10;
  *plVar10 = 0;
  plStackX_8 = (int64_t *)0x0;
  plStack_70 = plVar9;
  if (pplStack_a0 != (int64_t **)0x0) {
    (**(code **)((int64_t)*pplStack_a0 + 0x38))();
  }
  if (*(int64_t *)(param_1 + 0x830) != 0) {
    FUN_18054a450();
    plStackX_8 = *(int64_t **)(param_1 + 0x18);
    *(uint64_t *)(param_1 + 0x18) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(int64_t **)(param_1 + 0x28);
    *(uint64_t *)(param_1 + 0x28) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(int64_t **)(param_1 + 0x20);
    *(uint64_t *)(param_1 + 0x20) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    plStackX_8 = *(int64_t **)(param_1 + 0x30);
    *(uint64_t *)(param_1 + 0x30) = 0;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  uVar11 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1a8,8,0x12);
  uVar1 = *(int8_t *)(param_1 + 0x8bc);
  pplStack_a0 = &plStackX_8;
  plStackX_8 = plVar9;
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9);
  }
  pplStack_50 = &plStack_98;
  plStack_98 = plVar7;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  pplStack_68 = &plStack_90;
  plStack_90 = plVar8;
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  pplStack_60 = &plStack_a8;
  plStack_a8 = plVar4;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar10 = (int64_t *)
            FUN_180546fa0(uVar11,&plStack_a8,&plStack_90,&plStack_98,&plStackX_8,param_1,uStackX_20,
                          uVar1);
  if (plVar10 != (int64_t *)0x0) {
    pplStack_a0 = (int64_t **)plVar10;
    (**(code **)(*plVar10 + 0x28))(plVar10);
  }
  pplStack_a0 = *(int64_t ***)(param_1 + 0x830);
  *(int64_t **)(param_1 + 0x830) = plVar10;
  if (pplStack_a0 != (int64_t **)0x0) {
    (**(code **)((int64_t)*pplStack_a0 + 0x38))();
  }
  uVar11 = uVar12;
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    uVar11 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  }
  pplStack_60 = &plStackX_8;
  plStackX_8 = *(int64_t **)(param_1 + 0x830);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  pplStack_68 = &plStackX_8;
  FUN_1802fc0f0(uVar11,plStackX_8);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  lVar6 = lStackX_10;
  *(bool *)(*(int64_t *)(param_1 + 0x830) + 400) = *(char *)(lStackX_10 + 0x18) != '\0';
  (**(code **)(**(int64_t **)(param_1 + 0x830) + 0x1c0))
            (*(int64_t **)(param_1 + 0x830),0x40000000,0xffffffff);
  *(bool *)(*(int64_t *)(param_1 + 0x830) + 0x194) = *(char *)(lVar6 + 0x1a) != '\0';
  *(bool *)(*(int64_t *)(param_1 + 0x830) + 0x193) = *(char *)(lVar6 + 0x19) != '\0';
  lVar5 = *(int64_t *)(param_1 + 0x830);
  uVar2 = *(int32_t *)(lVar6 + 0x10);
  uVar3 = *(int32_t *)(lVar6 + 0xc);
  uVar11 = uVar12;
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    uVar11 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  }
  *(uint64_t *)(lVar5 + 0x180) = uVar11;
  *(int32_t *)(lVar5 + 0x174) = uVar3;
  *(int32_t *)(lVar5 + 0x178) = uVar2;
  *(int64_t *)(lVar5 + 0x188) = lStackX_18;
  *(int8_t *)(lStackX_18 + 0x565) = 0;
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    uVar12 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  }
  FUN_18054a3b0(*(uint64_t *)(param_1 + 0x830),uVar12,*(int32_t *)(lVar6 + 0x14));
  if ((*(char *)(lVar6 + 0x18) != '\0') ||
     ((*(int64_t *)(system_main_module_state + 0x3d8) != 0 &&
      (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 1)))) {
    FUN_180548880(*(uint64_t *)(param_1 + 0x830),*(int8_t *)(param_1 + 0x8bc));
  }
  FUN_180544ac0(param_1);
  if (plVar9 != (int64_t *)0x0) {
    (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x38))(plVar8);
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180543e30(int64_t param_1)
void FUN_180543e30(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  int *piVar14;
  int64_t lVar15;
  int *piVar16;
  int8_t auStack_78 [32];
  int64_t *aplStack_58 [4];
  int aiStack_38 [4];
  uint64_t uStack_28;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    plVar1 = (int64_t *)(param_1 + 0x90);
    uVar10 = 0;
    lVar13 = 0;
    lVar15 = *plVar1;
    aplStack_58[0] = (int64_t *)0x0;
    aplStack_58[1] = (int64_t *)0x0;
    aplStack_58[2] = (int64_t *)0x0;
    aplStack_58[3] = (int64_t *)0x0;
    if ((lVar15 != 0) && (*(char *)(param_1 + 0x200) == '\0')) {
      uVar10 = 1;
      aplStack_58[0] = plVar1;
      lVar13 = 1;
    }
    plVar2 = (int64_t *)(param_1 + 0x210);
    lVar12 = *plVar2;
    if ((lVar12 != 0) && (*(char *)(param_1 + 0x380) == '\0')) {
      uVar10 = uVar10 + 1;
      aplStack_58[lVar13] = plVar2;
      lVar13 = lVar13 + 1;
    }
    plVar3 = (int64_t *)(param_1 + 0x390);
    lVar7 = *plVar3;
    if ((lVar7 != 0) && (*(char *)(param_1 + 0x500) == '\0')) {
      uVar10 = uVar10 + 1;
      aplStack_58[lVar13] = plVar3;
      lVar13 = lVar13 + 1;
    }
    plVar4 = (int64_t *)(param_1 + 0x510);
    lVar8 = *plVar4;
    if ((lVar8 != 0) && (*(char *)(param_1 + 0x680) == '\0')) {
      aplStack_58[lVar13] = plVar4;
      uVar10 = uVar10 + 1;
    }
    uVar11 = (uint64_t)uVar10;
    if ((lVar15 == 0) || (*(char *)(param_1 + 0x200) != '\0')) {
      aplStack_58[uVar11] = plVar1;
      uVar11 = uVar11 + 1;
    }
    if ((lVar12 == 0) || (*(char *)(param_1 + 0x380) != '\0')) {
      aplStack_58[uVar11] = plVar2;
      uVar11 = uVar11 + 1;
    }
    if ((lVar7 == 0) || (*(char *)(param_1 + 0x500) != '\0')) {
      aplStack_58[uVar11] = plVar3;
      uVar11 = uVar11 + 1;
    }
    if ((lVar8 == 0) || (*(char *)(param_1 + 0x680) != '\0')) {
      aplStack_58[uVar11] = plVar4;
    }
    lVar15 = 0;
    piVar16 = aiStack_38;
    do {
      plVar1 = aplStack_58[lVar15];
      if (*plVar1 != 0) {
        bVar9 = false;
        piVar14 = (int *)((int64_t)plVar1 + 0x15c);
        lVar13 = 0;
        do {
          if (bVar9) goto LAB_180544017;
          iVar5 = *piVar14;
          if (-1 < iVar5) {
            bVar9 = true;
            iVar6 = *(int *)((int64_t)iVar5 * 200 + 0x2c + render_system_memory);
            lVar12 = 0;
            *piVar16 = iVar6;
            if (0 < lVar15) {
              do {
                if (!bVar9) goto LAB_180543ff4;
                if ((*aplStack_58[lVar12] != 0) &&
                   ((iVar5 == *(int *)((int64_t)aplStack_58[lVar12] + 0x16c) ||
                    (iVar6 == aiStack_38[lVar12])))) {
                  bVar9 = false;
                }
                lVar12 = lVar12 + 1;
              } while (lVar12 < lVar15);
              if (!bVar9) goto LAB_180543ff4;
            }
            FUN_1805ed050(plVar1);
          }
LAB_180543ff4:
          lVar13 = lVar13 + 1;
          piVar14 = piVar14 + 1;
        } while (lVar13 < 4);
        if (!bVar9) {
          *piVar16 = -1;
          *(int32_t *)((int64_t)plVar1 + 0x16c) = 0xffffffff;
        }
      }
LAB_180544017:
      lVar15 = lVar15 + 1;
      piVar16 = piVar16 + 1;
    } while (lVar15 < 4);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180543e54(int64_t param_1)
void FUN_180543e54(int64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int *piVar14;
  uint64_t unaff_RDI;
  int64_t lVar15;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int *piVar16;
  int64_t lStackX_20;
  uint64_t in_stack_00000050;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  plVar1 = (int64_t *)(param_1 + 0x90);
  uVar10 = 0;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBP;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  lVar13 = 0;
  *(uint64_t *)(in_R11 + -8) = unaff_RDI;
  lVar15 = *plVar1;
  *(uint64_t *)(in_R11 + -0x10) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x58) = 0;
  *(uint64_t *)(in_R11 + -0x50) = 0;
  *(uint64_t *)(in_R11 + -0x48) = 0;
  *(uint64_t *)(in_R11 + -0x40) = 0;
  if ((lVar15 != 0) && (*(char *)(param_1 + 0x200) == '\0')) {
    uVar10 = 1;
    *(int64_t **)(in_R11 + -0x58) = plVar1;
    lVar13 = 1;
  }
  plVar2 = (int64_t *)(param_1 + 0x210);
  lVar12 = *plVar2;
  if ((lVar12 != 0) && (*(char *)(param_1 + 0x380) == '\0')) {
    uVar10 = uVar10 + 1;
    (&lStackX_20)[lVar13] = (int64_t)plVar2;
    lVar13 = lVar13 + 1;
  }
  plVar3 = (int64_t *)(param_1 + 0x390);
  lVar7 = *plVar3;
  if ((lVar7 != 0) && (*(char *)(param_1 + 0x500) == '\0')) {
    uVar10 = uVar10 + 1;
    (&lStackX_20)[lVar13] = (int64_t)plVar3;
    lVar13 = lVar13 + 1;
  }
  plVar4 = (int64_t *)(param_1 + 0x510);
  lVar8 = *plVar4;
  if ((lVar8 != 0) && (*(char *)(param_1 + 0x680) == '\0')) {
    (&lStackX_20)[lVar13] = (int64_t)plVar4;
    uVar10 = uVar10 + 1;
  }
  uVar11 = (uint64_t)uVar10;
  if ((lVar15 == 0) || (*(char *)(param_1 + 0x200) != '\0')) {
    (&lStackX_20)[uVar11] = (int64_t)plVar1;
    uVar11 = uVar11 + 1;
  }
  if ((lVar12 == 0) || (*(char *)(param_1 + 0x380) != '\0')) {
    (&lStackX_20)[uVar11] = (int64_t)plVar2;
    uVar11 = uVar11 + 1;
  }
  if ((lVar7 == 0) || (*(char *)(param_1 + 0x500) != '\0')) {
    (&lStackX_20)[uVar11] = (int64_t)plVar3;
    uVar11 = uVar11 + 1;
  }
  if ((lVar8 == 0) || (*(char *)(param_1 + 0x680) != '\0')) {
    (&lStackX_20)[uVar11] = (int64_t)plVar4;
  }
  lVar15 = 0;
  piVar16 = (int *)&stack0x00000040;
  do {
    plVar1 = (int64_t *)(&lStackX_20)[lVar15];
    if (*plVar1 != 0) {
      bVar9 = false;
      piVar14 = (int *)((int64_t)plVar1 + 0x15c);
      lVar13 = 0;
      do {
        if (bVar9) goto LAB_180544017;
        iVar5 = *piVar14;
        if (-1 < iVar5) {
          bVar9 = true;
          iVar6 = *(int *)((int64_t)iVar5 * 200 + 0x2c + render_system_memory);
          lVar12 = 0;
          *piVar16 = iVar6;
          if (0 < lVar15) {
            do {
              if (!bVar9) goto LAB_180543ff4;
              if ((*(int64_t *)(&lStackX_20)[lVar12] != 0) &&
                 ((iVar5 == *(int *)((&lStackX_20)[lVar12] + 0x16c) ||
                  (iVar6 == *(int *)(&stack0x00000040 + lVar12 * 4))))) {
                bVar9 = false;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < lVar15);
            if (!bVar9) goto LAB_180543ff4;
          }
          FUN_1805ed050(plVar1);
        }
LAB_180543ff4:
        lVar13 = lVar13 + 1;
        piVar14 = piVar14 + 1;
      } while (lVar13 < 4);
      if (!bVar9) {
        *piVar16 = -1;
        *(int32_t *)((int64_t)plVar1 + 0x16c) = 0xffffffff;
      }
    }
LAB_180544017:
    lVar15 = lVar15 + 1;
    piVar16 = piVar16 + 1;
    if (3 < lVar15) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_18054404f(void)
void FUN_18054404f(void)

{
  uint64_t in_stack_00000050;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000050 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180544070(int64_t param_1,int64_t *param_2,int param_3)
void FUN_180544070(int64_t param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t lStack_40;
  uint64_t uStack_38;
  int64_t lStack_30;
  int32_t uStack_28;
  int8_t auStack_20 [8];
  
  lVar3 = *(int64_t *)(param_1 + 0x8a8);
  if (lVar3 != 0) {
    lVar3 = *(int64_t *)(lVar3 + 0x260);
  }
  if ((param_2 == (int64_t *)0x0) || (lVar3 == 0)) goto LAB_1805441e5;
  if (param_3 == 0xd) {
    FUN_1802fbee0(lVar3,0,param_2);
LAB_180544126:
    pplStackX_10 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_180544860(param_1,param_3,&plStackX_8);
  }
  else {
    if (param_3 == 0) {
      lVar2 = FUN_180275820(param_2);
      if (lVar2 != 0) {
        lVar2 = FUN_180275820(param_2);
        if ((char)param_3 < *(char *)(lVar2 + 0xf6)) goto LAB_180544116;
      }
      FUN_1802fbee0(lVar3,*(int8_t *)
                           (*(int64_t *)
                             (*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260) + 0x210) + 0xde)
                    ,param_2);
      goto LAB_180544126;
    }
LAB_180544116:
    FUN_1802fc0f0(lVar3,param_2);
    if (param_3 != -1) goto LAB_180544126;
  }
  if (*(int64_t *)(param_1 + 0x830) != 0) {
    lStack_40 = 0;
    uStack_38 = 0;
    lStack_30 = 0;
    uStack_28 = 3;
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x830) + 0x188);
    FUN_1805443d0(param_1,*(int32_t *)(lVar2 + 0x10),*(int32_t *)(lVar2 + 0x14),
                  *(int32_t *)(lVar2 + 0x53c),&lStack_40);
  }
  if ((param_3 == 0xd) && (lVar2 = *(int64_t *)(lVar3 + 0x210), lVar2 != 0)) {
    *(uint64_t *)(lVar2 + 0x48) = 0;
    *(uint64_t *)(lVar2 + 0x50) = 0;
    lVar3 = *(int64_t *)(lVar3 + 0x210);
    *(code **)(lVar3 + 0x50) = FUN_180541110;
    *(int64_t *)(lVar3 + 0x48) = param_1;
  }
LAB_1805441e5:
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar3 = lVar2 + 0x2be8;
  uStack_38 = uStack_38 & 0xffffffffffffff00;
  lStack_40 = lVar3;
  iVar1 = _Mtx_lock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uStack_38 = CONCAT71(uStack_38._1_7_,1);
  uStack_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30);
  iVar1 = _Mtx_unlock(lVar3);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180544200(int64_t param_1,int param_2,uint64_t param_3,uint64_t *param_4,
                       uint64_t param_5,int32_t param_6)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  uint64_t uStack_78;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  uint64_t uStack_38;
  
  if (((-1 < *(int *)(param_1 + 0x8b4)) &&
      (iVar4 = *(int *)(*(int64_t *)
                         ((int64_t)*(int *)(param_1 + 0x8b4) * 0x60 + 0x50 + render_system_memory) +
                       (int64_t)param_2 * 4), iVar4 != -1)) &&
     (lVar2 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260) + 0x210) +
               0xabf0), lVar2 != 0)) {
    iVar3 = _Mtx_lock(param_1 + 0x958);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    *(int *)(lVar2 + 0x1108) = iVar4;
    *(int8_t *)(lVar2 + 0x1114) = 0;
    *(int32_t *)(lVar2 + 0x1118) = 0xffffffff;
    iVar4 = _Mtx_unlock(param_1 + 0x958);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
  }
  uVar5 = render_system_data_memory;
  if ((*(char *)(render_system_data_memory + 0x210) == '\0') &&
     (uVar5 = (uint64_t)*(int *)(param_1 + 0x8b4), -1 < *(int *)(param_1 + 0x8b4))) {
    uVar1 = *(uint *)(*(int64_t *)(uVar5 * 0x60 + 0x48 + render_system_memory) + (int64_t)param_2 * 4);
    uVar5 = (uint64_t)uVar1;
    if (uVar1 != 0xffffffff) {
      uStack_a4 = (int32_t)*param_4;
      uStack_a0 = (int32_t)((uint64_t)*param_4 >> 0x20);
      uStack_9c = (int32_t)param_4[1];
      uStack_98 = (int32_t)((uint64_t)param_4[1] >> 0x20);
      uStack_3c = *(int32_t *)(param_1 + 0x8b8);
      uStack_68 = CONCAT44(uStack_a4,uVar1);
      uStack_60 = CONCAT44(uStack_9c,uStack_a0);
      uStack_58 = uStack_98;
      uStack_54 = 1;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_38 = CONCAT44((int)((uint64_t)uStack_78 >> 0x20),param_6);
      if (-1 < (int)uVar1) {
        uVar5 = FUN_180545140(&system_data_6110,&uStack_68,param_3,param_5);
        return uVar5;
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}





// 函数: void FUN_1805443d0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_1805443d0(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5)

{
  int64_t lVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if ((((*(int64_t *)(param_1 + 0x8a8) != 0) &&
       (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260), lVar1 != 0)) &&
      (*(int64_t *)(lVar1 + 0x210) != 0)) && (*(char *)(param_1 + 0x8bc) != '\0')) {
    FUN_180573020(*(int64_t *)(lVar1 + 0x210),*(uint64_t *)(lVar1 + 0x208),param_2,param_3,
                  param_4,*(uint64_t *)(param_1 + 0x830),*(uint64_t *)(param_1 + 0x38),
                  *(uint64_t *)(param_1 + 0x50),param_5);
  }
  iVar2 = _Mtx_unlock(param_1 + 0x958);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}





// 函数: void FUN_1805444c0(int64_t param_1)
void FUN_1805444c0(int64_t param_1)

{
  int64_t lVar1;
  uint64_t *puVar2;
  
  if ((*(int64_t *)(param_1 + 0x8a8) != 0) &&
     (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260), lVar1 != 0)) {
    puVar2 = (uint64_t *)
             FUN_1804db620(*(uint64_t *)(param_1 + 0x930),*(uint64_t *)(lVar1 + 0x208));
    *(uint64_t *)(param_1 + 0x850) = *puVar2;
    *(int8_t *)(param_1 + 0x858) = *(int8_t *)(puVar2 + 1);
    *(uint64_t *)(param_1 + 0x860) = puVar2[2];
    *(uint64_t *)(param_1 + 0x868) = puVar2[3];
    return;
  }
  *(uint64_t *)(param_1 + 0x850) = 0;
  *(int8_t *)(param_1 + 0x858) = 0;
  *(uint64_t *)(param_1 + 0x860) = 0;
  *(uint64_t *)(param_1 + 0x868) = 0;
  return;
}





// 函数: void FUN_180544550(int64_t param_1,int64_t param_2)
void FUN_180544550(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  lVar2 = 0;
  lVar3 = lVar2;
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
  }
  if (lVar3 == 0) {
    *(uint64_t *)(param_1 + 0x948) = 0;
  }
  else {
    lVar1 = *(int64_t *)(param_1 + 0x948);
    lVar4 = lVar2;
    if (lVar1 != 0) {
      lVar4 = *(int64_t *)(lVar3 + 0x28);
    }
    if (lVar4 != 0) {
      FUN_180300650(lVar3,0);
      *(int8_t *)(lVar4 + 0xaa) = 0;
      lVar1 = *(int64_t *)(param_1 + 0x948);
    }
    if (lVar1 != 0) {
      *(uint64_t *)(lVar1 + 0x940) = 0;
    }
    *(int64_t *)(param_1 + 0x948) = param_2;
    if (param_2 != 0) {
      *(int64_t *)(param_2 + 0x940) = param_1;
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x948) + 0x8a8);
      if (lVar1 != 0) {
        lVar2 = *(int64_t *)(lVar1 + 0x260);
      }
      FUN_180300650(lVar3,lVar2);
      if (lVar2 != 0) {
        *(int8_t *)(lVar2 + 0xaa) = 1;
      }
    }
  }
  return;
}





// 函数: void FUN_18054459c(void)
void FUN_18054459c(void)

{
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar1;
  
  lVar1 = unaff_RBX;
  if (in_RAX != 0) {
    lVar1 = *(int64_t *)(unaff_RSI + 0x28);
  }
  if (lVar1 != 0) {
    FUN_180300650();
    *(char *)(lVar1 + 0xaa) = (char)unaff_RBX;
    in_RAX = *(int64_t *)(unaff_RDI + 0x948);
  }
  if (in_RAX != 0) {
    *(int64_t *)(in_RAX + 0x940) = unaff_RBX;
  }
  *(int64_t *)(unaff_RDI + 0x948) = unaff_RBP;
  if (unaff_RBP != 0) {
    *(int64_t *)(unaff_RBP + 0x940) = unaff_RDI;
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x948) + 0x8a8);
    if (lVar1 != 0) {
      unaff_RBX = *(int64_t *)(lVar1 + 0x260);
    }
    FUN_180300650();
    if (unaff_RBX != 0) {
      *(int8_t *)(unaff_RBX + 0xaa) = 1;
    }
  }
  return;
}





// 函数: void FUN_1805445d6(void)
void FUN_1805445d6(void)

{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  
  *(int64_t *)(in_RAX + 0x940) = unaff_RBX;
  *(int64_t *)(unaff_RDI + 0x948) = unaff_RBP;
  if (unaff_RBP != 0) {
    *(int64_t *)(unaff_RBP + 0x940) = unaff_RDI;
    lVar1 = *(int64_t *)(*(int64_t *)(unaff_RDI + 0x948) + 0x8a8);
    if (lVar1 != 0) {
      unaff_RBX = *(int64_t *)(lVar1 + 0x260);
    }
    FUN_180300650();
    if (unaff_RBX != 0) {
      *(int8_t *)(unaff_RBX + 0xaa) = 1;
    }
  }
  return;
}





// 函数: void FUN_180544640(int64_t param_1,int8_t param_2)
void FUN_180544640(int64_t param_1,int8_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  
  FUN_1802ee720(*(uint64_t *)(param_1 + 0x8a8));
  lVar1 = *(int64_t *)(param_1 + 0x930);
  lVar2 = *(int64_t *)(lVar1 + 0x2b28);
  puVar3 = *(uint64_t **)
            (lVar2 + (*(uint64_t *)(param_1 + 0x8a8) % (uint64_t)*(uint *)(lVar1 + 0x2b30)) * 8);
  do {
    if (puVar3 == (uint64_t *)0x0) {
      lVar4 = *(int64_t *)(lVar1 + 0x2b30);
      puVar3 = *(uint64_t **)(lVar2 + lVar4 * 8);
LAB_1805446a9:
      if (puVar3 != *(uint64_t **)(lVar2 + lVar4 * 8)) {
        *(int8_t *)
         (*(int64_t *)(*(int64_t *)(lVar1 + 11000) + (int64_t)((int)(uint)puVar3[1] >> 10) * 8) +
          0x10 + (int64_t)(int)(*(uint *)(lVar1 + 0x2b18) & (uint)puVar3[1]) * 0xd8) = param_2;
      }
      return;
    }
    if (*(uint64_t *)(param_1 + 0x8a8) == *puVar3) {
      lVar4 = *(int64_t *)(lVar1 + 0x2b30);
      goto LAB_1805446a9;
    }
    puVar3 = (uint64_t *)puVar3[2];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



