#include "TaleWorlds.Native.Split.h"

// 03_rendering_part378.c - 1 个函数

// 函数: void FUN_180474260(char *param_1,longlong param_2,uint64_t param_3,int param_4)
void FUN_180474260(char *param_1,longlong param_2,uint64_t param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  uint64_t uVar7;
  char *pcVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  int8_t auStack_2b8 [32];
  int32_t uStack_298;
  longlong lStack_290;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
  uint64_t uStack_270;
  longlong *plStack_268;
  longlong *plStack_260;
  int8_t auStack_258 [8];
  longlong *plStack_250;
  int8_t auStack_248 [8];
  longlong *plStack_240;
  char acStack_238 [24];
  longlong lStack_220;
  char *pcStack_218;
  char *pcStack_210;
  uint64_t uStack_208;
  char *pcStack_1f8;
  longlong alStack_1e8 [3];
  char acStack_1d0 [24];
  char acStack_1b8 [8];
  char cStack_1b0;
  uint8_t uStack_1af;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  int8_t uStack_190;
  uint8_t uStack_18f;
  uint64_t uStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  int8_t uStack_158;
  uint8_t uStack_157;
  uint64_t uStack_148;
  ulonglong uStack_140;
  int8_t uStack_138;
  uint8_t uStack_137;
  uint64_t uStack_128;
  ulonglong uStack_120;
  int8_t uStack_118;
  uint8_t uStack_117;
  uint64_t uStack_108;
  ulonglong uStack_100;
  int8_t uStack_f8;
  uint8_t uStack_f7;
  uint64_t uStack_e8;
  ulonglong uStack_e0;
  int8_t uStack_d8;
  uint8_t uStack_d7;
  uint64_t uStack_c8;
  ulonglong uStack_c0;
  char acStack_b8 [8];
  char acStack_b0 [32];
  int8_t auStack_90 [56];
  ulonglong uStack_58;
  
  uStack_208 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  uStack_298 = 0;
  pcStack_1f8 = param_1;
  if (param_4 == 0) {
    uStack_148 = 0;
    uStack_140 = 0xf;
    uStack_158 = 0;
    FUN_1800671b0(&uStack_158,&unknown_var_3272_ptr,0x2a);
    FUN_180472d60(param_2,param_1,&uStack_158,0);
    uStack_298 = 1;
    if (0xf < uStack_140) {
      uVar10 = uStack_140 + 1;
      lVar6 = CONCAT71(uStack_157,uStack_158);
      lVar9 = lVar6;
      if (0xfff < uVar10) {
        uVar10 = uStack_140 + 0x28;
        lVar9 = *(longlong *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    uStack_148 = 0;
    uStack_140 = 0xf;
    uStack_158 = 0;
  }
  else {
    cVar5 = **(char **)(param_2 + 8);
    if ((cVar5 == '\0') || (*(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1, cVar5 != '[')) {
      uStack_c8 = 0;
      uStack_c0 = 0xf;
      uStack_d8 = 0;
      FUN_1800671b0(&uStack_d8,&unknown_var_3320_ptr,0xc);
      FUN_180472d60(param_2,param_1,&uStack_d8,0);
      uStack_298 = 1;
      if (0xf < uStack_c0) {
        uVar10 = uStack_c0 + 1;
        lVar6 = CONCAT71(uStack_d7,uStack_d8);
        lVar9 = lVar6;
        if (0xfff < uVar10) {
          uVar10 = uStack_c0 + 0x28;
          lVar9 = *(longlong *)(lVar6 + -8);
          if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar9,uVar10);
      }
      uStack_c8 = 0;
      uStack_c0 = 0xf;
      uStack_d8 = 0;
    }
    else {
      FUN_180472d20(param_2);
      if (**(char **)(param_2 + 8) == '\0') {
        uStack_128 = 0;
        uStack_120 = 0xf;
        uStack_138 = 0;
        FUN_1800671b0(&uStack_138,&unknown_var_3752_ptr,0x1a);
        FUN_180472d60(param_2,param_1,&uStack_138,0);
        uStack_298 = 1;
        if (0xf < uStack_120) {
          uVar10 = uStack_120 + 1;
          lVar6 = CONCAT71(uStack_137,uStack_138);
          lVar9 = lVar6;
          if (0xfff < uVar10) {
            uVar10 = uStack_120 + 0x28;
            lVar9 = *(longlong *)(lVar6 + -8);
            if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(lVar9,uVar10);
        }
        uStack_128 = 0;
        uStack_120 = 0xf;
        uStack_138 = 0;
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
          uVar7 = FUN_180472b70(alStack_1e8,acStack_238);
          FUN_1804723d0(auStack_258,uVar7);
          FUN_180473d60(param_3,auStack_258);
          if (plStack_250 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_250 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_250)(plStack_250);
              LOCK();
              piVar2 = (int *)((longlong)plStack_250 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plStack_250 + 8))(plStack_250);
              }
            }
          }
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
          *param_1 = '\0';
          uStack_298 = 1;
          if (lStack_290 == 0) goto LAB_180474d04;
          FUN_180477be0(lStack_290,pcStack_288);
          uVar10 = (longlong)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
          lVar9 = lStack_290;
          if (0xfff < uVar10) {
            uVar10 = uVar10 + 0x27;
            lVar9 = *(longlong *)(lStack_290 + -8);
            if (0x1f < (lStack_290 - *(longlong *)(lStack_290 + -8)) - 8U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
        }
        else {
          while( true ) {
            FUN_1804779f0();
            uStack_270 = 0;
            plStack_268 = (longlong *)0x0;
            pcVar8 = (char *)FUN_180476030(acStack_b8,param_2,&uStack_270,param_4 + -1);
            if (pcVar8 != acStack_1b8) {
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = &cStack_1b0;
                FUN_180067070(&uStack_190);
                FUN_180067070(&cStack_1b0);
              }
              FUN_1804776c0(acStack_1b8,pcVar8);
            }
            bVar11 = acStack_1b8[0] != '\0';
            if (acStack_b8[0] != '\0') {
              pcStack_278 = acStack_b0;
              FUN_180067070(auStack_90);
              FUN_180067070(acStack_b0);
            }
            plVar1 = plStack_268;
            if (bVar11) {
              *param_1 = acStack_1b8[0];
              if (acStack_1b8[0] != '\0') {
                pcStack_278 = param_1 + 8;
                *(ulonglong *)pcStack_278 = CONCAT71(uStack_1af,cStack_1b0);
                *(uint64_t *)(param_1 + 0x10) = uStack_1a8;
                *(uint64_t *)(param_1 + 0x18) = uStack_1a0;
                *(uint64_t *)(param_1 + 0x20) = uStack_198;
                uStack_1a0 = 0;
                uStack_198 = 0xf;
                cStack_1b0 = '\0';
                *(ulonglong *)(param_1 + 0x28) = CONCAT71(uStack_18f,uStack_190);
                *(uint64_t *)(param_1 + 0x30) = uStack_188;
                *(uint64_t *)(param_1 + 0x38) = uStack_180;
                *(uint64_t *)(param_1 + 0x40) = uStack_178;
                uStack_180 = 0;
                uStack_178 = 0xf;
                uStack_190 = 0;
                *(uint64_t *)(param_1 + 0x48) = uStack_170;
                *(uint64_t *)(param_1 + 0x50) = uStack_168;
              }
              uStack_298 = 1;
              if (plStack_268 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_268 + 1;
                lVar9 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_268)(plStack_268);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
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
                FUN_180067070(&uStack_190);
                FUN_180067070(&cStack_1b0);
              }
              if (lStack_290 == 0) goto LAB_180474d04;
              FUN_180477be0(lStack_290,pcStack_288);
              uVar10 = (longlong)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
              lVar9 = lStack_290;
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(longlong *)(lStack_290 + -8);
                if (0x1f < (lStack_290 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn(lVar9,uVar10);
                }
              }
              goto LAB_180474567;
            }
            if (pcStack_280 == pcStack_288) {
              FUN_180477a30(&lStack_290,pcStack_288,&uStack_270);
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
              if (plStack_268 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_268 + 1) = (int)plStack_268[1] + 1;
                UNLOCK();
              }
              *(uint64_t *)pcStack_288 = uStack_270;
              *(longlong **)(pcStack_288 + 8) = plStack_268;
              pcStack_288 = pcStack_288 + 0x10;
            }
            FUN_180472d20(param_2);
            cVar5 = **(char **)(param_2 + 8);
            if (cVar5 == '\0') {
              uStack_e8 = 0;
              uStack_e0 = 0xf;
              uStack_f8 = 0;
              FUN_1800671b0(&uStack_f8,&unknown_var_3784_ptr,0x13);
              FUN_180472d60(param_2,param_1,&uStack_f8,0);
              uStack_298 = 1;
              if (0xf < uStack_e0) {
                uVar10 = uStack_e0 + 1;
                lVar6 = CONCAT71(uStack_f7,uStack_f8);
                lVar9 = lVar6;
                if (0xfff < uVar10) {
                  uVar10 = uStack_e0 + 0x28;
                  lVar9 = *(longlong *)(lVar6 + -8);
                  if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                free(lVar9,uVar10);
              }
              plVar1 = plStack_268;
              uStack_e8 = 0;
              uStack_e0 = 0xf;
              uStack_f8 = 0;
              if (plStack_268 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_268 + 1;
                lVar9 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_268)(plStack_268);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
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
                FUN_180067070(&uStack_190);
                FUN_180067070(&cStack_1b0);
              }
              if (lStack_290 == 0) goto LAB_180474d04;
              FUN_180477be0(lStack_290,pcStack_288);
              uVar10 = (longlong)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
              lVar9 = lStack_290;
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(longlong *)(lStack_290 + -8);
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
              uVar7 = FUN_180472b70(acStack_1d0,&lStack_220);
              FUN_1804723d0(auStack_248,uVar7);
              FUN_180473d60(param_3,auStack_248);
              if (plStack_240 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_240 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_240)(plStack_240);
                  LOCK();
                  piVar2 = (int *)((longlong)plStack_240 + 0xc);
                  iVar4 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plStack_240 + 8))(plStack_240);
                  }
                }
              }
              plVar1 = plStack_268;
              *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
              *param_1 = '\0';
              uStack_298 = 1;
              if (plStack_268 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_268 + 1;
                lVar9 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_268)(plStack_268);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
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
                FUN_180067070(&uStack_190);
                FUN_180067070(&cStack_1b0);
              }
              if (lStack_290 == 0) goto LAB_180474d04;
              FUN_180477be0(lStack_290,pcStack_288);
              uVar10 = (longlong)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
              lVar9 = lStack_290;
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(longlong *)(lStack_290 + -8);
                if (0x1f < (lStack_290 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn(lVar9,uVar10);
                }
              }
              goto LAB_180474567;
            }
            if (cVar5 != ',') break;
            *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
            FUN_180472d20(param_2);
            plVar1 = plStack_268;
            if (plStack_268 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_268 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_268)(plStack_268);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
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
              FUN_180067070(&uStack_190);
              FUN_180067070(&cStack_1b0);
            }
          }
          uStack_108 = 0;
          uStack_100 = 0xf;
          uStack_118 = 0;
          FUN_1800671b0(&uStack_118,&unknown_var_3784_ptr,0x13);
          FUN_180472d60(param_2,param_1,&uStack_118,0);
          uStack_298 = 1;
          if (0xf < uStack_100) {
            uVar10 = uStack_100 + 1;
            lVar6 = CONCAT71(uStack_117,uStack_118);
            lVar9 = lVar6;
            if (0xfff < uVar10) {
              uVar10 = uStack_100 + 0x28;
              lVar9 = *(longlong *)(lVar6 + -8);
              if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                _invalid_parameter_noinfo_noreturn();
              }
            }
            free(lVar9,uVar10);
          }
          plVar1 = plStack_268;
          uStack_108 = 0;
          uStack_100 = 0xf;
          uStack_118 = 0;
          if (plStack_268 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_268 + 1;
            lVar9 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_268)(plStack_268);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
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
            FUN_180067070(&uStack_190);
            FUN_180067070(&cStack_1b0);
          }
          if (lStack_290 == 0) goto LAB_180474d04;
          FUN_180477be0(lStack_290,pcStack_288);
          uVar10 = (longlong)pcStack_280 - lStack_290 & 0xfffffffffffffff0;
          lVar9 = lStack_290;
          if (0xfff < uVar10) {
            uVar10 = uVar10 + 0x27;
            lVar9 = *(longlong *)(lStack_290 + -8);
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
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



