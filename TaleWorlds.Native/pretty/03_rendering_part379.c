/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part379.c - 2 个函数
// 函数: void UISystem_74d30(int8_t *param_1,int64_t param_2,uint64_t param_3,int param_4)
void UISystem_74d30(int8_t *param_1,int64_t param_2,uint64_t param_3,int param_4)
{
  int64_t *plVar1;
  int *piVar2;
  int64_t *plVar3;
  int iVar4;
  char cVar5;
  int64_t lVar6;
  char *pcVar7;
  int8_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint64_t uVar14;
  int8_t stack_array_488 [32];
  uint local_var_468;
  uint64_t ****pppplocal_var_460;
  int32_t stack_array_458 [2];
  uint64_t ****pppplocal_var_450;
  uint64_t local_var_448;
  int64_t alStack_440 [5];
  uint64_t ***ppplocal_var_418;
  int64_t *plStack_410;
  int32_t local_var_408;
  uint64_t ****pppplocal_var_400;
  int8_t *aplocal_var_3f8 [2];
  int8_t stack_array_3e8 [8];
  int64_t *plStack_3e0;
  int8_t stack_array_3d8 [8];
  int64_t lStack_3d0;
  uint64_t local_var_3c8;
  int8_t *plocal_var_3b8;
  int8_t stack_array_3a8 [64];
  uint64_t ***appplocal_var_368 [8];
  int8_t stack_array_328 [64];
  int8_t stack_array_2e8 [64];
  int8_t local_var_2a8;
  uint8_t local_var_2a7;
  uint64_t local_var_298;
  uint64_t local_var_290;
  char acStack_288 [8];
  uint64_t ***appplocal_var_280 [4];
  int8_t stack_array_260 [56];
  int8_t local_var_228;
  uint8_t local_var_227;
  uint64_t local_var_218;
  uint64_t local_var_210;
  char cStack_208;
  uint8_t local_var_207;
  uint64_t local_var_1f8;
  uint64_t local_var_1f0;
  int8_t local_var_1e8;
  uint8_t local_var_1e7;
  uint64_t local_var_1d8;
  uint64_t local_var_1d0;
  int8_t local_var_1c8;
  uint8_t local_var_1c7;
  uint64_t local_var_1b8;
  uint64_t local_var_1b0;
  int8_t local_var_1a8;
  uint8_t local_var_1a7;
  uint64_t local_var_198;
  uint64_t local_var_190;
  int8_t local_var_188;
  uint8_t local_var_187;
  uint64_t local_var_178;
  uint64_t local_var_170;
  int8_t stack_array_168 [16];
  uint64_t local_var_158;
  uint64_t local_var_150;
  int8_t stack_array_148 [32];
  uint64_t ***ppplocal_var_128;
  int64_t *plStack_120;
  char acStack_118 [8];
  uint64_t ***appplocal_var_110 [4];
  int8_t stack_array_f0 [56];
  char acStack_b8 [8];
  uint64_t ***appplocal_var_b0 [4];
  int8_t stack_array_90 [56];
  uint64_t local_var_58;
  local_var_3c8 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_488;
  uVar11 = 0;
  local_var_468 = 0;
  plocal_var_3b8 = param_1;
  if (param_4 == 0) {
    local_var_218 = 0;
    local_var_210 = 0xf;
    local_var_228 = 0;
    MathCoreCalculator0(&local_var_228,&memory_allocator_3272_ptr,0x2a);
    CoreEngine_472D60(param_2,param_1,&local_var_228,0);
    local_var_468 = 1;
    if (0xf < local_var_210) {
      uVar10 = local_var_210 + 1;
      lVar6 = CONCAT71(local_var_227,local_var_228);
      lVar9 = lVar6;
      if (0xfff < uVar10) {
        uVar10 = local_var_210 + 0x28;
        lVar9 = *(int64_t *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    local_var_218 = 0;
    local_var_210 = 0xf;
    local_var_228 = 0;
  }
  else {
    cVar5 = **(char **)(param_2 + 8);
    if ((cVar5 == '\0') || (*(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1, cVar5 != '{')) {
      local_var_178 = 0;
      local_var_170 = 0xf;
      local_var_188 = 0;
      MathCoreCalculator0(&local_var_188,&memory_allocator_3808_ptr,0xc);
      CoreEngine_472D60(param_2,param_1,&local_var_188,0);
      local_var_468 = 1;
      if (0xf < local_var_170) {
        uVar10 = local_var_170 + 1;
        lVar6 = CONCAT71(local_var_187,local_var_188);
        lVar9 = lVar6;
        if (0xfff < uVar10) {
          uVar10 = local_var_170 + 0x28;
          lVar9 = *(int64_t *)(lVar6 + -8);
          if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar9,uVar10);
      }
      local_var_178 = 0;
      local_var_170 = 0xf;
      local_var_188 = 0;
    }
    else {
      UISystem_72d20(param_2);
      local_var_408 = 0;
      stack_array_458[0] = 0;
      pppplocal_var_400 = &pppplocal_var_450;
      pppplocal_var_450 = (uint64_t ****)0x0;
      local_var_448 = 0;
      pppplocal_var_450 = (uint64_t ****)RenderingSystem_f4cb0();
      alStack_440[0] = 0;
      alStack_440[1] = 0;
      alStack_440[2] = 0;
      stack_array_458[0] = 0x3f800000;
      RenderingSystem_f3720(alStack_440,0x10);
      pppplocal_var_400 = pppplocal_var_450;
      uVar14 = RenderingSystem_f3510(alStack_440,0x10,&pppplocal_var_400);
      alStack_440[3] = 7;
      alStack_440[4] = 8;
      cVar5 = **(char **)(param_2 + 8);
      if (cVar5 == '\0') {
        local_var_1f8 = 0;
        local_var_1f0 = 0xf;
        cStack_208 = cVar5;
        MathCoreCalculator0(&cStack_208,&memory_allocator_3824_ptr,0x24);
        CoreEngine_472D60(param_2,param_1,&cStack_208,0);
        local_var_468 = 1;
        if (0xf < local_var_1f0) {
          uVar10 = local_var_1f0 + 1;
          lVar6 = CONCAT71(local_var_207,cStack_208);
          lVar9 = lVar6;
          if (0xfff < uVar10) {
            uVar10 = local_var_1f0 + 0x28;
            lVar9 = *(int64_t *)(lVar6 + -8);
            if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(lVar9,uVar10);
        }
        local_var_1f8 = 0;
        local_var_1f0 = 0xf;
        cStack_208 = '\0';
        if (alStack_440[0] != 0) {
          uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
          if ((0xfff < uVar10) &&
             (uVar10 = uVar10 + 0x27,
             0x1f < (alStack_440[0] - *(int64_t *)(alStack_440[0] + -8)) - 8U)) {
// WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          free(0,uVar10);
          alStack_440[0] = 0;
          alStack_440[1] = 0;
          alStack_440[2] = 0;
        }
        pppplocal_var_400 = &pppplocal_var_450;
        RenderingSystem_f33b0(&pppplocal_var_450);
        free(pppplocal_var_450,0x40);
      }
      else if (cVar5 == '}') {
        aplocal_var_3f8[0] = stack_array_3a8;
        uVar14 = RenderingSystem_f4bd0(stack_array_328,stack_array_458);
        pppplocal_var_460 = (uint64_t ****)uVar14;
        RenderingSystem_f4bd0(stack_array_3a8,uVar14);
        RenderingSystem_e8470(uVar14);
        UISystem_724f0(stack_array_3e8,stack_array_3a8);
        UISystem_73d60(param_3,stack_array_3e8);
        if (plStack_3e0 != (int64_t *)0x0) {
          LOCK();
          plVar1 = plStack_3e0 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_3e0)(plStack_3e0);
            LOCK();
            piVar2 = (int *)((int64_t)plStack_3e0 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_3e0 + 8))(plStack_3e0);
            }
          }
        }
        *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
        *param_1 = 0;
        local_var_468 = 1;
        if (alStack_440[0] != 0) {
          uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
          lVar9 = alStack_440[0];
          if (0xfff < uVar10) {
            uVar10 = uVar10 + 0x27;
            lVar9 = *(int64_t *)(alStack_440[0] + -8);
            if (0x1f < (alStack_440[0] - lVar9) - 8U) {
// WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(lVar9,uVar10);
          alStack_440[0] = 0;
          alStack_440[1] = 0;
          alStack_440[2] = 0;
        }
        pppplocal_var_460 = &pppplocal_var_450;
        RenderingSystem_f33b0(&pppplocal_var_450);
        free(pppplocal_var_450,0x40);
      }
      else {
        while( true ) {
          UISystem_779f0(uVar14,acStack_288);
          local_var_298 = 0;
          local_var_290 = 0xf;
          local_var_2a8 = 0;
          ppplocal_var_418 = (uint64_t ****)0x0;
          plStack_410 = (int64_t *)0x0;
          pcVar7 = (char *)UISystem_732b0(acStack_118,param_2,&local_var_2a8);
          cVar5 = *pcVar7;
          if (acStack_118[0] != '\0') {
            pppplocal_var_460 = appplocal_var_110;
            SystemResourceAllocator(stack_array_f0);
            SystemResourceAllocator(appplocal_var_110);
          }
          if (cVar5 != '\0') {
            local_var_198 = 0;
            local_var_190 = 0xf;
            local_var_1a8 = 0;
            MathCoreCalculator0(&local_var_1a8,&memory_allocator_3824_ptr,0x24);
            CoreEngine_472D60(param_2,param_1,&local_var_1a8,0);
            local_var_468 = uVar11 | 1;
            if (0xf < local_var_190) {
              uVar10 = local_var_190 + 1;
              lVar6 = CONCAT71(local_var_1a7,local_var_1a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_190 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            plVar1 = plStack_410;
            local_var_198 = 0;
            local_var_190 = 0xf;
            local_var_1a8 = 0;
            if (plStack_410 != (int64_t *)0x0) {
              LOCK();
              plVar3 = plStack_410 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_410)(plStack_410);
                LOCK();
                piVar2 = (int *)((int64_t)plVar1 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1);
                }
              }
            }
            if (0xf < local_var_290) {
              uVar10 = local_var_290 + 1;
              lVar6 = CONCAT71(local_var_2a7,local_var_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_290 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            local_var_298 = 0;
            local_var_290 = 0xf;
            local_var_2a8 = 0;
            if (acStack_288[0] != '\0') {
              pppplocal_var_460 = appplocal_var_280;
              SystemResourceAllocator(stack_array_260);
              SystemResourceAllocator(appplocal_var_280);
            }
            if (alStack_440[0] != 0) {
              uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
              lVar9 = alStack_440[0];
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(int64_t *)(alStack_440[0] + -8);
                if (0x1f < (alStack_440[0] - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
              alStack_440[0] = 0;
              alStack_440[1] = 0;
              alStack_440[2] = 0;
            }
            pppplocal_var_460 = &pppplocal_var_450;
            RenderingSystem_f33b0(&pppplocal_var_450);
            free(pppplocal_var_450,0x40);
            goto LAB_180475c55;
          }
          UISystem_72d20(param_2);
          if (**(char **)(param_2 + 8) != ':') {
            local_var_1b8 = 0;
            local_var_1b0 = 0xf;
            local_var_1c8 = 0;
            MathCoreCalculator0(&local_var_1c8,&memory_allocator_3632_ptr,0xc);
            CoreEngine_472D60(param_2,param_1,&local_var_1c8,0);
            local_var_468 = uVar11 | 1;
            if (0xf < local_var_1b0) {
              uVar10 = local_var_1b0 + 1;
              lVar6 = CONCAT71(local_var_1c7,local_var_1c8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_1b0 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            plVar1 = plStack_410;
            local_var_1b8 = 0;
            local_var_1b0 = 0xf;
            local_var_1c8 = 0;
            if (plStack_410 != (int64_t *)0x0) {
              LOCK();
              plVar3 = plStack_410 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_410)(plStack_410);
                LOCK();
                piVar2 = (int *)((int64_t)plVar1 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar1 + 8))(plVar1);
                }
              }
            }
            if (0xf < local_var_290) {
              uVar10 = local_var_290 + 1;
              lVar6 = CONCAT71(local_var_2a7,local_var_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_290 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            local_var_298 = 0;
            local_var_290 = 0xf;
            local_var_2a8 = 0;
            if (acStack_288[0] != '\0') {
              pppplocal_var_460 = appplocal_var_280;
              SystemResourceAllocator(stack_array_260);
              SystemResourceAllocator(appplocal_var_280);
            }
            if (alStack_440[0] != 0) {
              uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
              lVar9 = alStack_440[0];
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(int64_t *)(alStack_440[0] + -8);
                if (0x1f < (alStack_440[0] - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
              alStack_440[0] = 0;
              alStack_440[1] = 0;
              alStack_440[2] = 0;
            }
            pppplocal_var_460 = &pppplocal_var_450;
            RenderingSystem_f33b0(&pppplocal_var_450);
            free(pppplocal_var_450,0x40);
            goto LAB_180475c55;
          }
          *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
          UISystem_72d20(param_2);
          pcVar7 = (char *)UISystem_76030(acStack_b8,param_2,alStack_440 + 5);
          if (pcVar7 != acStack_288) {
            if (acStack_288[0] != '\0') {
              pppplocal_var_460 = appplocal_var_280;
              SystemResourceAllocator(stack_array_260);
              SystemResourceAllocator(appplocal_var_280);
            }
            UISystem_776c0(acStack_288,pcVar7);
          }
          bVar13 = acStack_288[0] != '\0';
          if (acStack_b8[0] != '\0') {
            pppplocal_var_460 = appplocal_var_b0;
            SystemResourceAllocator(stack_array_90);
            SystemResourceAllocator(appplocal_var_b0);
          }
          if (bVar13) {
            UISystem_776c0(param_1,acStack_288);
            local_var_468 = uVar11 | 1;
            if (plStack_410 != (int64_t *)0x0) {
              RenderingSystem_f53b0();
            }
            if (0xf < local_var_290) {
              uVar10 = local_var_290 + 1;
              lVar6 = CONCAT71(local_var_2a7,local_var_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_290 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            local_var_298 = 0;
            local_var_290 = 0xf;
            local_var_2a8 = 0;
            if (acStack_288[0] != '\0') {
              pppplocal_var_460 = appplocal_var_280;
              SystemResourceAllocator(stack_array_260);
              SystemResourceAllocator(appplocal_var_280);
            }
            RenderingSystem_e8470(stack_array_458);
            goto LAB_180475c55;
          }
          GenericFunction_18018b350(stack_array_148,&local_var_2a8);
          pppplocal_var_460 = &ppplocal_var_128;
          uVar12 = uVar11;
          if (plStack_410 != (int64_t *)0x0) {
            LOCK();
            *(int *)(plStack_410 + 1) = (int)plStack_410[1] + 1;
            UNLOCK();
            uVar12 = local_var_468;
          }
          ppplocal_var_128 = ppplocal_var_418;
          plStack_120 = plStack_410;
          local_var_468 = uVar12 | 0x20;
          UISystem_77950(stack_array_458,aplocal_var_3f8,stack_array_148);
          uVar11 = uVar12 & 0xffffffdf;
          local_var_468 = uVar11;
          UISystem_72880(stack_array_148);
          UISystem_72d20(param_2);
          pcVar7 = *(char **)(param_2 + 8);
          cVar5 = *pcVar7;
          if (cVar5 == '\0') {
            local_var_1d8 = 0;
            local_var_1d0 = 0xf;
            local_var_1e8 = 0;
            MathCoreCalculator0(&local_var_1e8,&memory_allocator_3648_ptr,0x13);
            CoreEngine_472D60(param_2,param_1,&local_var_1e8,0);
            local_var_468 = uVar11 | 1;
            if (0xf < local_var_1d0) {
              uVar10 = local_var_1d0 + 1;
              lVar6 = CONCAT71(local_var_1e7,local_var_1e8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_1d0 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            local_var_1d8 = 0;
            local_var_1d0 = 0xf;
            local_var_1e8 = 0;
            if (plStack_410 != (int64_t *)0x0) {
              RenderingSystem_f53b0();
            }
            if (0xf < local_var_290) {
              uVar10 = local_var_290 + 1;
              lVar6 = CONCAT71(local_var_2a7,local_var_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = local_var_290 + 0x28;
                lVar9 = *(int64_t *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            local_var_298 = 0;
            local_var_290 = 0xf;
            local_var_2a8 = 0;
            if (acStack_288[0] != '\0') {
              pppplocal_var_460 = appplocal_var_280;
              SystemResourceAllocator(stack_array_260);
              SystemResourceAllocator(appplocal_var_280);
            }
            RenderingSystem_e8470(stack_array_458);
            goto LAB_180475c55;
          }
          if (cVar5 == '}') {
            *(char **)(param_2 + 8) = pcVar7 + 1;
            pppplocal_var_460 = appplocal_var_368;
            puVar8 = (int8_t *)RenderingSystem_f4bd0(stack_array_2e8,stack_array_458);
            aplocal_var_3f8[0] = puVar8;
            RenderingSystem_f4bd0(appplocal_var_368,puVar8);
            RenderingSystem_e8470(puVar8);
            UISystem_724f0(stack_array_3d8,appplocal_var_368);
            UISystem_73d60(param_3,stack_array_3d8);
            if (lStack_3d0 != 0) {
              RenderingSystem_f53b0();
            }
            *param_1 = 0;
            local_var_468 = uVar12 & 0xffffff1f | 1;
            if (plStack_410 != (int64_t *)0x0) {
              RenderingSystem_f53b0();
            }
            SystemResourceAllocator(&local_var_2a8);
            if (acStack_288[0] != '\0') {
              pppplocal_var_460 = appplocal_var_280;
              SystemResourceAllocator(stack_array_260);
              SystemResourceAllocator(appplocal_var_280);
            }
            RenderingSystem_e8470(stack_array_458);
            goto LAB_180475c55;
          }
          if (cVar5 != ',') break;
          *(char **)(param_2 + 8) = pcVar7 + 1;
          UISystem_72d20(param_2);
          if (plStack_410 != (int64_t *)0x0) {
            RenderingSystem_f53b0();
          }
          uVar14 = SystemResourceAllocator(&local_var_2a8);
          if (acStack_288[0] != '\0') {
            pppplocal_var_460 = appplocal_var_280;
            SystemResourceAllocator(stack_array_260);
            uVar14 = SystemResourceAllocator(appplocal_var_280);
          }
        }
        local_var_158 = 0;
        local_var_150 = 0xf;
        stack_array_168[0] = 0;
        MathCoreCalculator0(stack_array_168,&memory_allocator_3648_ptr,0x13);
        CoreEngine_472D60(param_2,param_1,stack_array_168,0);
        local_var_468 = uVar11 | 1;
        SystemResourceAllocator(stack_array_168);
        if (plStack_410 != (int64_t *)0x0) {
          RenderingSystem_f53b0();
        }
        SystemResourceAllocator(&local_var_2a8);
        if (acStack_288[0] != '\0') {
          pppplocal_var_460 = appplocal_var_280;
          SystemResourceAllocator(stack_array_260);
          SystemResourceAllocator(appplocal_var_280);
        }
        RenderingSystem_e8470(stack_array_458);
      }
    }
  }
LAB_180475c55:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_488);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_75c80(int8_t *param_1,int64_t param_2,uint64_t param_3)
void UISystem_75c80(int8_t *param_1,int64_t param_2,uint64_t param_3)
{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  double dVar14;
  int8_t stack_array_108 [32];
  uint local_var_e8;
  char *pcStack_e0;
  int64_t *plStack_d8;
  int64_t *plStack_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  int8_t *plocal_var_a8;
  int64_t **pplStack_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int8_t local_var_80;
  uint8_t local_var_7f;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int8_t local_var_60;
  uint8_t local_var_5f;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_108;
  local_var_e8 = 0;
  pcVar4 = *(char **)(param_2 + 8);
  cVar7 = *pcVar4;
  pcVar8 = pcVar4;
  if (cVar7 == '-') {
    pcVar8 = pcVar4 + 1;
    cVar7 = *pcVar8;
  }
  if (cVar7 == '0') {
    pcVar9 = pcVar8 + 1;
LAB_180475d0e:
    pcVar8 = pcVar9;
    if (*pcVar9 == '.') {
      pcVar10 = pcVar9 + 1;
      cVar7 = *pcVar10;
      pcVar8 = pcVar10;
      while (('/' < cVar7 && (cVar7 < ':'))) {
        pcVar8 = pcVar8 + 1;
        cVar7 = *pcVar8;
      }
      if (pcVar8 == pcVar10) {
        pcVar9 = pcVar9 + -1;
        goto LAB_180475d76;
      }
    }
    if ((*pcVar8 + 0xbbU & 0xdf) == 0) {
      pcVar9 = pcVar8 + 1;
      cVar7 = *pcVar9;
      if ((cVar7 == '-') || (cVar7 == '+')) {
        pcVar9 = pcVar8 + 2;
        cVar7 = *pcVar9;
      }
      pcVar8 = pcVar9;
      if (cVar7 < '0') goto LAB_180475d76;
      do {
        if ('9' < cVar7) break;
        pcVar8 = pcVar8 + 1;
        cVar7 = *pcVar8;
      } while ('/' < cVar7);
      if (pcVar8 == pcVar9) goto LAB_180475d76;
    }
  }
  else if ((byte)(cVar7 - 0x31U) < 9) {
    pcVar9 = pcVar8 + 1;
    cVar7 = *pcVar9;
    while (('/' < cVar7 && (cVar7 < ':'))) {
      pcVar9 = pcVar9 + 1;
      cVar7 = *pcVar9;
    }
    goto LAB_180475d0e;
  }
  pcVar9 = pcVar8;
LAB_180475d76:
  pcStack_e0 = (char *)0x0;
  plocal_var_a8 = param_1;
  dVar14 = (double)strtod(pcVar4,&pcStack_e0);
  if ((pcStack_e0 == *(char **)(param_2 + 8)) || (pcStack_e0 != pcVar9)) {
    local_var_50 = 0;
    local_var_48 = 0xf;
    local_var_60 = 0;
    MathCoreCalculator0(&local_var_60,&memory_allocator_3672_ptr,0x1c);
    CoreEngine_472D60(param_2,param_1,&local_var_60,0);
    local_var_e8 = 1;
    if (0xf < local_var_48) {
      uVar12 = local_var_48 + 1;
      lVar5 = CONCAT71(local_var_5f,local_var_60);
      lVar11 = lVar5;
      if (0xfff < uVar12) {
        uVar12 = local_var_48 + 0x28;
        lVar11 = *(int64_t *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar12);
    }
    local_var_50 = 0;
    local_var_48 = 0xf;
    local_var_60 = 0;
  }
  else if ((dVar14 == INFINITY) || (dVar14 == -INFINITY)) {
    local_var_70 = 0;
    local_var_68 = 0xf;
    local_var_80 = 0;
    MathCoreCalculator0(&local_var_80,&memory_allocator_3704_ptr,0x28);
    CoreEngine_472D60(param_2,param_1,&local_var_80,0);
    local_var_e8 = 1;
    if (0xf < local_var_68) {
      uVar12 = local_var_68 + 1;
      lVar5 = CONCAT71(local_var_7f,local_var_80);
      lVar11 = lVar5;
      if (0xfff < uVar12) {
        uVar12 = local_var_68 + 0x28;
        lVar11 = *(int64_t *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar12);
    }
    local_var_70 = 0;
    local_var_68 = 0xf;
    local_var_80 = 0;
  }
  else {
    *(char **)(param_2 + 8) = pcStack_e0;
    pplStack_98 = &plStack_d8;
    plStack_d0 = (int64_t *)SystemRenderer(0x20);
    *(int32_t *)(plStack_d0 + 1) = 1;
    *(int32_t *)((int64_t)plStack_d0 + 0xc) = 1;
    *plStack_d0 = (int64_t)&processed_var_4104_ptr;
    plStack_d8 = plStack_d0 + 2;
    *plStack_d8 = (int64_t)&processed_var_4320_ptr;
    *plStack_d8 = (int64_t)&processed_var_4376_ptr;
    plStack_d0[3] = (int64_t)dVar14;
    local_var_c8 = 0;
    local_var_c0 = 0;
    local_var_e8 = 0;
    plStack_90 = plStack_d0;
    plStack_88 = plStack_d8;
    UISystem_73d60(param_3,&plStack_d8);
    plVar6 = plStack_d0;
    uVar13 = 0;
    if (plStack_d0 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar13 = local_var_e8;
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar2 = (int *)((int64_t)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar13 = local_var_e8;
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
          uVar13 = local_var_e8;
        }
      }
    }
    *param_1 = 0;
    local_var_e8 = uVar13 & 0xffffffe7 | 1;
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_108);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address