/* 函数别名定义: MathCoreCalculator */
#define MathCoreCalculator MathCoreCalculator
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part378.c - 1 个函数
// 函数: void UISystem_74260(char *param_1,int64_t param_2,uint64_t param_3,int param_4)
void UISystem_74260(char *param_1,int64_t param_2,uint64_t param_3,int param_4)
{
  int64_t *plVar1;
  int *piVar2;
  int64_t *plVar3;
  int iVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t uVar10;
  bool bVar11;
  int8_t stack_array_2b8 [32];
  int32_t local_var_298;
  int64_t lStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  uint64_t local_var_270;
  int64_t *plStack_268;
  int64_t *plStack_260;
  int8_t stack_array_258 [8];
  int64_t *plStack_250;
  int8_t stack_array_248 [8];
  int64_t *plStack_240;
  char acStack_238 [24];
  int64_t lStack_220;
  char *pcStack_218;
  char *pcStack_210;
  uint64_t local_var_208;
  char *pcStack_1f8;
  int64_t alStack_1e8 [3];
  char acStack_1d0 [24];
  char acStack_1b8 [8];
  char cStack_1b0;
  uint8_t local_var_1af;
  uint64_t local_var_1a8;
  uint64_t local_var_1a0;
  uint64_t local_var_198;
  int8_t local_var_190;
  uint8_t local_var_18f;
  uint64_t local_var_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  uint64_t local_var_170;
  uint64_t local_var_168;
  int8_t local_var_158;
  uint8_t local_var_157;
  uint64_t local_var_148;
  uint64_t local_var_140;
  int8_t local_var_138;
  uint8_t local_var_137;
  uint64_t local_var_128;
  uint64_t local_var_120;
  int8_t local_var_118;
  uint8_t local_var_117;
  uint64_t local_var_108;
  uint64_t local_var_100;
  int8_t local_var_f8;
  uint8_t local_var_f7;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int8_t local_var_d8;
  uint8_t local_var_d7;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  char acStack_b8 [8];
  char acStack_b0 [32];
  int8_t stack_array_90 [56];
  uint64_t local_var_58;
  local_var_208 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  local_var_298 = 0;
  pcStack_1f8 = param_1;
  if (param_4 == 0) {
    local_var_148 = 0;
    local_var_140 = 0xf;
    local_var_158 = 0;
    MathCoreCalculator0(&local_var_158,&memory_allocator_3272_ptr,0x2a);
    CoreEngine_472D60(param_2,param_1,&local_var_158,0);
    local_var_298 = 1;
    if (0xf < local_var_140) {
      uVar10 = local_var_140 + 1;
      lVar6 = CONCAT71(local_var_157,local_var_158);
      lVar9 = lVar6;
      if (0xfff < uVar10) {
        uVar10 = local_var_140 + 0x28;
        lVar9 = *(int64_t *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    local_var_148 = 0;
    local_var_140 = 0xf;
    local_var_158 = 0;
  }
  else {
    cVar5 = **(char **)(param_2 + 8);
    if ((cVar5 == '\0') || (*(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1, cVar5 != '[')) {
      local_var_c8 = 0;
      local_var_c0 = 0xf;
      local_var_d8 = 0;
      MathCoreCalculator0(&local_var_d8,&memory_allocator_3320_ptr,0xc);
      CoreEngine_472D60(param_2,param_1,&local_var_d8,0);
      local_var_298 = 1;
      if (0xf < local_var_c0) {
        uVar10 = local_var_c0 + 1;
        lVar6 = CONCAT71(local_var_d7,local_var_d8);
        lVar9 = lVar6;
        if (0xfff < uVar10) {
          uVar10 = local_var_c0 + 0x28;
          lVar9 = *(int64_t *)(lVar6 + -8);
          if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar9,uVar10);
      }
      local_var_c8 = 0;
      local_var_c0 = 0xf;
      local_var_d8 = 0;
    }
    else {
      UISystem_72d20(param_2);
      if (**(char **)(param_2 + 8) == '\0') {
        local_var_128 = 0;
        local_var_120 = 0xf;
        local_var_138 = 0;
        MathCoreCalculator0(&local_var_138,&memory_allocator_3752_ptr,0x1a);
        CoreEngine_472D60(param_2,param_1,&local_var_138,0);
        local_var_298 = 1;
        if (0xf < local_var_120) {
          uVar10 = local_var_120 + 1;
          lVar6 = CONCAT71(local_var_137,local_var_138);
          lVar9 = lVar6;
          if (0xfff < uVar10) {
            uVar10 = local_var_120 + 0x28;
            lVar9 = *(int64_t *)(lVar6 + -8);
            if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(lVar9,uVar10);
        }
        local_var_128 = 0;
        local_var_120 = 0xf;
        local_var_138 = 0;
      }
      else {
        lStack_290 = 0;
        pcStack_288 = (char *)0x0;
        pcStack_280 = (char *)0x0;
        if (**(char **)(param_2 + 8) == ']') {
          plStack_260 = alStack_1e8;
          pcStack_278 = acStack_238;
          acStack_238[0] = '\0';
          acStack_238[1] = '\0';
          acStack_238[2] = '\0';
          acStack_238[3] = '\0';
          acStack_238[4] = '\0';
          acStack_238[5] = '\0';
          acStack_238[6] = '\0';
          acStack_238[7] = '\0';
          acStack_238[8] = '\0';
          acStack_238[9] = '\0';
          acStack_238[10] = '\0';
          acStack_238[0xb] = '\0';
          acStack_238[0xc] = '\0';
          acStack_238[0xd] = '\0';
          acStack_238[0xe] = '\0';
          acStack_238[0xf] = '\0';
          acStack_238[0x10] = '\0';
          acStack_238[0x11] = '\0';
          acStack_238[0x12] = '\0';
          acStack_238[0x13] = '\0';
          acStack_238[0x14] = '\0';
          acStack_238[0x15] = '\0';
          acStack_238[0x16] = '\0';
          acStack_238[0x17] = '\0';
          lStack_290 = 0;
          pcStack_288 = (char *)0x0;
          pcStack_280 = (char *)0x0;
          uVar7 = UISystem_72b70(alStack_1e8,acStack_238);
          UISystem_723d0(stack_array_258,uVar7);
          UISystem_73d60(param_3,stack_array_258);
          if (plStack_250 != (int64_t *)0x0) {
            LOCK();
            plVar1 = plStack_250 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_250)(plStack_250);
              LOCK();
              piVar2 = (int *)((int64_t)plStack_250 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_250 + 8))(plStack_250);
              }
            }
          }
          *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
          *param_1 = '\0';
          local_var_298 = 1;
          if (lStack_290 == 0) goto LAB_180474d04;
          UISystem_77be0(lStack_290,pcStack_288);
          uVar10 = (int64_t)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
          lVar9 = lStack_290;
          if (0xfff < uVar10) {
            uVar10 = uVar10 + 0x27;
            lVar9 = *(int64_t *)(lStack_290 + -8);
            if (0x1f < (lStack_290 - *(int64_t *)(lStack_290 + -8)) - 8U) {
// WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        else {
          while( true ) {
            UISystem_779f0();
            local_var_270 = 0;
            plStack_268 = (int64_t *)0x0;
            pcVar8 = (char *)UISystem_76030(acStack_b8,param_2,&local_var_270,param_4 + -1);
            if (pcVar8 != acStack_1b8) {
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = &cStack_1b0;
                SystemResourceAllocator(&local_var_190);
                SystemResourceAllocator(&cStack_1b0);
              }
              UISystem_776c0(acStack_1b8,pcVar8);
            }
            bVar11 = acStack_1b8[0] != '\0';
            if (acStack_b8[0] != '\0') {
              pcStack_278 = acStack_b0;
              SystemResourceAllocator(stack_array_90);
              SystemResourceAllocator(acStack_b0);
            }
            plVar1 = plStack_268;
            if (bVar11) {
              *param_1 = acStack_1b8[0];
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = param_1 + 8;
                *(uint64_t *)pcStack_278 = CONCAT71(local_var_1af,cStack_1b0);
                *(uint64_t *)(param_1 + 0x10) = local_var_1a8;
                *(uint64_t *)(param_1 + 0x18) = local_var_1a0;
                *(uint64_t *)(param_1 + 0x20) = local_var_198;
                local_var_1a0 = 0;
                local_var_198 = 0xf;
                cStack_1b0 = '\0';
                *(uint64_t *)(param_1 + 0x28) = CONCAT71(local_var_18f,local_var_190);
                *(uint64_t *)(param_1 + 0x30) = local_var_188;
                *(uint64_t *)(param_1 + 0x38) = local_var_180;
                *(uint64_t *)(param_1 + 0x40) = local_var_178;
                local_var_180 = 0;
                local_var_178 = 0xf;
                local_var_190 = 0;
                *(uint64_t *)(param_1 + 0x48) = local_var_170;
                *(uint64_t *)(param_1 + 0x50) = local_var_168;
              }
              local_var_298 = 1;
              if (plStack_268 != (int64_t *)0x0) {
                LOCK();
                plVar3 = plStack_268 + 1;
                lVar9 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_268)(plStack_268);
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
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = &cStack_1b0;
                SystemResourceAllocator(&local_var_190);
                SystemResourceAllocator(&cStack_1b0);
              }
              if (lStack_290 == 0) goto LAB_180474d04;
              UISystem_77be0(lStack_290,pcStack_288);
              uVar10 = (int64_t)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
              lVar9 = lStack_290;
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(int64_t *)(lStack_290 + -8);
                if (0x1f < (lStack_290 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn(lVar9,uVar10);
                }
              }
              goto LAB_180474567;
            }
            if (pcStack_280 == pcStack_288) {
              UISystem_77a30(&lStack_290,pcStack_288,&local_var_270);
            }
            else {
              pcStack_278 = pcStack_288;
              pcStack_288[0] = '\0';
              pcStack_288[1] = '\0';
              pcStack_288[2] = '\0';
              pcStack_288[3] = '\0';
              pcStack_288[4] = '\0';
              pcStack_288[5] = '\0';
              pcStack_288[6] = '\0';
              pcStack_288[7] = '\0';
              pcStack_288[8] = '\0';
              pcStack_288[9] = '\0';
              pcStack_288[10] = '\0';
              pcStack_288[0xb] = '\0';
              pcStack_288[0xc] = '\0';
              pcStack_288[0xd] = '\0';
              pcStack_288[0xe] = '\0';
              pcStack_288[0xf] = '\0';
              if (plStack_268 != (int64_t *)0x0) {
                LOCK();
                *(int *)(plStack_268 + 1) = (int)plStack_268[1] + 1;
                UNLOCK();
              }
              *(uint64_t *)pcStack_288 = local_var_270;
              *(int64_t **)(pcStack_288 + 8) = plStack_268;
              pcStack_288 = pcStack_288 + 0x10;
            }
            UISystem_72d20(param_2);
            cVar5 = **(char **)(param_2 + 8);
            if (cVar5 == '\0') {
              local_var_e8 = 0;
              local_var_e0 = 0xf;
              local_var_f8 = 0;
              MathCoreCalculator0(&local_var_f8,&memory_allocator_3784_ptr,0x13);
              CoreEngine_472D60(param_2,param_1,&local_var_f8,0);
              local_var_298 = 1;
              if (0xf < local_var_e0) {
                uVar10 = local_var_e0 + 1;
                lVar6 = CONCAT71(local_var_f7,local_var_f8);
                lVar9 = lVar6;
                if (0xfff < uVar10) {
                  uVar10 = local_var_e0 + 0x28;
                  lVar9 = *(int64_t *)(lVar6 + -8);
                  if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                free(lVar9,uVar10);
              }
              plVar1 = plStack_268;
              local_var_e8 = 0;
              local_var_e0 = 0xf;
              local_var_f8 = 0;
              if (plStack_268 != (int64_t *)0x0) {
                LOCK();
                plVar3 = plStack_268 + 1;
                lVar9 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_268)(plStack_268);
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
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = &cStack_1b0;
                SystemResourceAllocator(&local_var_190);
                SystemResourceAllocator(&cStack_1b0);
              }
              if (lStack_290 == 0) goto LAB_180474d04;
              UISystem_77be0(lStack_290,pcStack_288);
              uVar10 = (int64_t)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
              lVar9 = lStack_290;
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(int64_t *)(lStack_290 + -8);
                if (0x1f < (lStack_290 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn(lVar9,uVar10);
                }
              }
              goto LAB_180474567;
            }
            if (cVar5 == ']') {
              pcStack_278 = acStack_1d0;
              plStack_260 = &lStack_220;
              lStack_220 = lStack_290;
              pcStack_218 = pcStack_288;
              pcStack_210 = pcStack_280;
              lStack_290 = 0;
              pcStack_288 = (char *)0x0;
              pcStack_280 = (char *)0x0;
              uVar7 = UISystem_72b70(acStack_1d0,&lStack_220);
              UISystem_723d0(stack_array_248,uVar7);
              UISystem_73d60(param_3,stack_array_248);
              if (plStack_240 != (int64_t *)0x0) {
                LOCK();
                plVar1 = plStack_240 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_240)(plStack_240);
                  LOCK();
                  piVar2 = (int *)((int64_t)plStack_240 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plStack_240 + 8))(plStack_240);
                  }
                }
              }
              plVar1 = plStack_268;
              *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + 1;
              *param_1 = '\0';
              local_var_298 = 1;
              if (plStack_268 != (int64_t *)0x0) {
                LOCK();
                plVar3 = plStack_268 + 1;
                lVar9 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_268)(plStack_268);
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
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = &cStack_1b0;
                SystemResourceAllocator(&local_var_190);
                SystemResourceAllocator(&cStack_1b0);
              }
              if (lStack_290 == 0) goto LAB_180474d04;
              UISystem_77be0(lStack_290,pcStack_288);
              uVar10 = (int64_t)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
              lVar9 = lStack_290;
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(int64_t *)(lStack_290 + -8);
                if (0x1f < (lStack_290 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn(lVar9,uVar10);
                }
              }
              goto LAB_180474567;
            }
            if (cVar5 != ',') break;
            *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
            UISystem_72d20(param_2);
            plVar1 = plStack_268;
            if (plStack_268 != (int64_t *)0x0) {
              LOCK();
              plVar3 = plStack_268 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_268)(plStack_268);
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
            if (acStack_1b8[0] != '\0') {
              pcStack_278 = &cStack_1b0;
              SystemResourceAllocator(&local_var_190);
              SystemResourceAllocator(&cStack_1b0);
            }
          }
          local_var_108 = 0;
          local_var_100 = 0xf;
          local_var_118 = 0;
          MathCoreCalculator0(&local_var_118,&memory_allocator_3784_ptr,0x13);
          CoreEngine_472D60(param_2,param_1,&local_var_118,0);
          local_var_298 = 1;
          if (0xf < local_var_100) {
            uVar10 = local_var_100 + 1;
            lVar6 = CONCAT71(local_var_117,local_var_118);
            lVar9 = lVar6;
            if (0xfff < uVar10) {
              uVar10 = local_var_100 + 0x28;
              lVar9 = *(int64_t *)(lVar6 + -8);
              if (0x1f < (lVar6 - lVar9) - 8U) {
// WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            free(lVar9,uVar10);
          }
          plVar1 = plStack_268;
          local_var_108 = 0;
          local_var_100 = 0xf;
          local_var_118 = 0;
          if (plStack_268 != (int64_t *)0x0) {
            LOCK();
            plVar3 = plStack_268 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_268)(plStack_268);
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
          if (acStack_1b8[0] != '\0') {
            pcStack_278 = &cStack_1b0;
            SystemResourceAllocator(&local_var_190);
            SystemResourceAllocator(&cStack_1b0);
          }
          if (lStack_290 == 0) goto LAB_180474d04;
          UISystem_77be0(lStack_290,pcStack_288);
          uVar10 = (int64_t)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
          lVar9 = lStack_290;
          if (0xfff < uVar10) {
            uVar10 = uVar10 + 0x27;
            lVar9 = *(int64_t *)(lStack_290 + -8);
            if (0x1f < (lStack_290 - lVar9) - 8U) {
// WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn(lVar9,uVar10);
            }
          }
        }
LAB_180474567:
        free(lVar9,uVar10);
        lStack_290 = 0;
        pcStack_288 = (char *)0x0;
        pcStack_280 = (char *)0x0;
      }
    }
  }
LAB_180474d04:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_2b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address