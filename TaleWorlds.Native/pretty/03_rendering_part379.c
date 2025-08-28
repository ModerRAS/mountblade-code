#include "TaleWorlds.Native.Split.h"

// 03_rendering_part379.c - 2 个函数

// 函数: void FUN_180474d30(int8_t *param_1,longlong param_2,uint64_t param_3,int param_4)
void FUN_180474d30(int8_t *param_1,longlong param_2,uint64_t param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  int8_t *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint64_t uVar14;
  int8_t auStack_488 [32];
  uint uStack_468;
  uint64_t ****ppppuStack_460;
  int32_t auStack_458 [2];
  uint64_t ****ppppuStack_450;
  uint64_t uStack_448;
  longlong alStack_440 [5];
  uint64_t ***pppuStack_418;
  longlong *plStack_410;
  int32_t uStack_408;
  uint64_t ****ppppuStack_400;
  int8_t *apuStack_3f8 [2];
  int8_t auStack_3e8 [8];
  longlong *plStack_3e0;
  int8_t auStack_3d8 [8];
  longlong lStack_3d0;
  uint64_t uStack_3c8;
  int8_t *puStack_3b8;
  int8_t auStack_3a8 [64];
  uint64_t ***apppuStack_368 [8];
  int8_t auStack_328 [64];
  int8_t auStack_2e8 [64];
  int8_t uStack_2a8;
  undefined7 uStack_2a7;
  uint64_t uStack_298;
  ulonglong uStack_290;
  char acStack_288 [8];
  uint64_t ***apppuStack_280 [4];
  int8_t auStack_260 [56];
  int8_t uStack_228;
  undefined7 uStack_227;
  uint64_t uStack_218;
  ulonglong uStack_210;
  char cStack_208;
  undefined7 uStack_207;
  uint64_t uStack_1f8;
  ulonglong uStack_1f0;
  int8_t uStack_1e8;
  undefined7 uStack_1e7;
  uint64_t uStack_1d8;
  ulonglong uStack_1d0;
  int8_t uStack_1c8;
  undefined7 uStack_1c7;
  uint64_t uStack_1b8;
  ulonglong uStack_1b0;
  int8_t uStack_1a8;
  undefined7 uStack_1a7;
  uint64_t uStack_198;
  ulonglong uStack_190;
  int8_t uStack_188;
  undefined7 uStack_187;
  uint64_t uStack_178;
  ulonglong uStack_170;
  int8_t auStack_168 [16];
  uint64_t uStack_158;
  uint64_t uStack_150;
  int8_t auStack_148 [32];
  uint64_t ***pppuStack_128;
  longlong *plStack_120;
  char acStack_118 [8];
  uint64_t ***apppuStack_110 [4];
  int8_t auStack_f0 [56];
  char acStack_b8 [8];
  uint64_t ***apppuStack_b0 [4];
  int8_t auStack_90 [56];
  ulonglong uStack_58;
  
  uStack_3c8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_488;
  uVar11 = 0;
  uStack_468 = 0;
  puStack_3b8 = param_1;
  if (param_4 == 0) {
    uStack_218 = 0;
    uStack_210 = 0xf;
    uStack_228 = 0;
    FUN_1800671b0(&uStack_228,&UNK_180a2b1b8,0x2a);
    FUN_180472d60(param_2,param_1,&uStack_228,0);
    uStack_468 = 1;
    if (0xf < uStack_210) {
      uVar10 = uStack_210 + 1;
      lVar6 = CONCAT71(uStack_227,uStack_228);
      lVar9 = lVar6;
      if (0xfff < uVar10) {
        uVar10 = uStack_210 + 0x28;
        lVar9 = *(longlong *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar9,uVar10);
    }
    uStack_218 = 0;
    uStack_210 = 0xf;
    uStack_228 = 0;
  }
  else {
    cVar5 = **(char **)(param_2 + 8);
    if ((cVar5 == '\0') || (*(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1, cVar5 != '{')) {
      uStack_178 = 0;
      uStack_170 = 0xf;
      uStack_188 = 0;
      FUN_1800671b0(&uStack_188,&UNK_180a2b3d0,0xc);
      FUN_180472d60(param_2,param_1,&uStack_188,0);
      uStack_468 = 1;
      if (0xf < uStack_170) {
        uVar10 = uStack_170 + 1;
        lVar6 = CONCAT71(uStack_187,uStack_188);
        lVar9 = lVar6;
        if (0xfff < uVar10) {
          uVar10 = uStack_170 + 0x28;
          lVar9 = *(longlong *)(lVar6 + -8);
          if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
        }
        free(lVar9,uVar10);
      }
      uStack_178 = 0;
      uStack_170 = 0xf;
      uStack_188 = 0;
    }
    else {
      FUN_180472d20(param_2);
      uStack_408 = 0;
      auStack_458[0] = 0;
      ppppuStack_400 = &ppppuStack_450;
      ppppuStack_450 = (uint64_t ****)0x0;
      uStack_448 = 0;
      ppppuStack_450 = (uint64_t ****)FUN_1803f4cb0();
      alStack_440[0] = 0;
      alStack_440[1] = 0;
      alStack_440[2] = 0;
      auStack_458[0] = 0x3f800000;
      FUN_1803f3720(alStack_440,0x10);
      ppppuStack_400 = ppppuStack_450;
      uVar14 = FUN_1803f3510(alStack_440,0x10,&ppppuStack_400);
      alStack_440[3] = 7;
      alStack_440[4] = 8;
      cVar5 = **(char **)(param_2 + 8);
      if (cVar5 == '\0') {
        uStack_1f8 = 0;
        uStack_1f0 = 0xf;
        cStack_208 = cVar5;
        FUN_1800671b0(&cStack_208,&UNK_180a2b3e0,0x24);
        FUN_180472d60(param_2,param_1,&cStack_208,0);
        uStack_468 = 1;
        if (0xf < uStack_1f0) {
          uVar10 = uStack_1f0 + 1;
          lVar6 = CONCAT71(uStack_207,cStack_208);
          lVar9 = lVar6;
          if (0xfff < uVar10) {
            uVar10 = uStack_1f0 + 0x28;
            lVar9 = *(longlong *)(lVar6 + -8);
            if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
              _invalid_parameter_noinfo_noreturn();
            }
          }
          free(lVar9,uVar10);
        }
        uStack_1f8 = 0;
        uStack_1f0 = 0xf;
        cStack_208 = '\0';
        if (alStack_440[0] != 0) {
          uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
          if ((0xfff < uVar10) &&
             (uVar10 = uVar10 + 0x27,
             0x1f < (alStack_440[0] - *(longlong *)(alStack_440[0] + -8)) - 8U)) {
                    // WARNING: Subroutine does not return
            _invalid_parameter_noinfo_noreturn();
          }
          free(0,uVar10);
          alStack_440[0] = 0;
          alStack_440[1] = 0;
          alStack_440[2] = 0;
        }
        ppppuStack_400 = &ppppuStack_450;
        FUN_1803f33b0(&ppppuStack_450);
        free(ppppuStack_450,0x40);
      }
      else if (cVar5 == '}') {
        apuStack_3f8[0] = auStack_3a8;
        uVar14 = FUN_1803f4bd0(auStack_328,auStack_458);
        ppppuStack_460 = (uint64_t ****)uVar14;
        FUN_1803f4bd0(auStack_3a8,uVar14);
        FUN_1803e8470(uVar14);
        FUN_1804724f0(auStack_3e8,auStack_3a8);
        FUN_180473d60(param_3,auStack_3e8);
        if (plStack_3e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_3e0 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_3e0)(plStack_3e0);
            LOCK();
            piVar2 = (int *)((longlong)plStack_3e0 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_3e0 + 8))(plStack_3e0);
            }
          }
        }
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
        *param_1 = 0;
        uStack_468 = 1;
        if (alStack_440[0] != 0) {
          uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
          lVar9 = alStack_440[0];
          if (0xfff < uVar10) {
            uVar10 = uVar10 + 0x27;
            lVar9 = *(longlong *)(alStack_440[0] + -8);
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
        ppppuStack_460 = &ppppuStack_450;
        FUN_1803f33b0(&ppppuStack_450);
        free(ppppuStack_450,0x40);
      }
      else {
        while( true ) {
          FUN_1804779f0(uVar14,acStack_288);
          uStack_298 = 0;
          uStack_290 = 0xf;
          uStack_2a8 = 0;
          pppuStack_418 = (uint64_t ****)0x0;
          plStack_410 = (longlong *)0x0;
          pcVar7 = (char *)FUN_1804732b0(acStack_118,param_2,&uStack_2a8);
          cVar5 = *pcVar7;
          if (acStack_118[0] != '\0') {
            ppppuStack_460 = apppuStack_110;
            FUN_180067070(auStack_f0);
            FUN_180067070(apppuStack_110);
          }
          if (cVar5 != '\0') {
            uStack_198 = 0;
            uStack_190 = 0xf;
            uStack_1a8 = 0;
            FUN_1800671b0(&uStack_1a8,&UNK_180a2b3e0,0x24);
            FUN_180472d60(param_2,param_1,&uStack_1a8,0);
            uStack_468 = uVar11 | 1;
            if (0xf < uStack_190) {
              uVar10 = uStack_190 + 1;
              lVar6 = CONCAT71(uStack_1a7,uStack_1a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_190 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            plVar1 = plStack_410;
            uStack_198 = 0;
            uStack_190 = 0xf;
            uStack_1a8 = 0;
            if (plStack_410 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_410 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_410)(plStack_410);
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
            if (0xf < uStack_290) {
              uVar10 = uStack_290 + 1;
              lVar6 = CONCAT71(uStack_2a7,uStack_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_290 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            uStack_298 = 0;
            uStack_290 = 0xf;
            uStack_2a8 = 0;
            if (acStack_288[0] != '\0') {
              ppppuStack_460 = apppuStack_280;
              FUN_180067070(auStack_260);
              FUN_180067070(apppuStack_280);
            }
            if (alStack_440[0] != 0) {
              uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
              lVar9 = alStack_440[0];
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(longlong *)(alStack_440[0] + -8);
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
            ppppuStack_460 = &ppppuStack_450;
            FUN_1803f33b0(&ppppuStack_450);
            free(ppppuStack_450,0x40);
            goto LAB_180475c55;
          }
          FUN_180472d20(param_2);
          if (**(char **)(param_2 + 8) != ':') {
            uStack_1b8 = 0;
            uStack_1b0 = 0xf;
            uStack_1c8 = 0;
            FUN_1800671b0(&uStack_1c8,&UNK_180a2b320,0xc);
            FUN_180472d60(param_2,param_1,&uStack_1c8,0);
            uStack_468 = uVar11 | 1;
            if (0xf < uStack_1b0) {
              uVar10 = uStack_1b0 + 1;
              lVar6 = CONCAT71(uStack_1c7,uStack_1c8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_1b0 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            plVar1 = plStack_410;
            uStack_1b8 = 0;
            uStack_1b0 = 0xf;
            uStack_1c8 = 0;
            if (plStack_410 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_410 + 1;
              lVar9 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_410)(plStack_410);
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
            if (0xf < uStack_290) {
              uVar10 = uStack_290 + 1;
              lVar6 = CONCAT71(uStack_2a7,uStack_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_290 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            uStack_298 = 0;
            uStack_290 = 0xf;
            uStack_2a8 = 0;
            if (acStack_288[0] != '\0') {
              ppppuStack_460 = apppuStack_280;
              FUN_180067070(auStack_260);
              FUN_180067070(apppuStack_280);
            }
            if (alStack_440[0] != 0) {
              uVar10 = (alStack_440[2] - alStack_440[0] >> 3) * 8;
              lVar9 = alStack_440[0];
              if (0xfff < uVar10) {
                uVar10 = uVar10 + 0x27;
                lVar9 = *(longlong *)(alStack_440[0] + -8);
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
            ppppuStack_460 = &ppppuStack_450;
            FUN_1803f33b0(&ppppuStack_450);
            free(ppppuStack_450,0x40);
            goto LAB_180475c55;
          }
          *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
          FUN_180472d20(param_2);
          pcVar7 = (char *)FUN_180476030(acStack_b8,param_2,alStack_440 + 5);
          if (pcVar7 != acStack_288) {
            if (acStack_288[0] != '\0') {
              ppppuStack_460 = apppuStack_280;
              FUN_180067070(auStack_260);
              FUN_180067070(apppuStack_280);
            }
            FUN_1804776c0(acStack_288,pcVar7);
          }
          bVar13 = acStack_288[0] != '\0';
          if (acStack_b8[0] != '\0') {
            ppppuStack_460 = apppuStack_b0;
            FUN_180067070(auStack_90);
            FUN_180067070(apppuStack_b0);
          }
          if (bVar13) {
            FUN_1804776c0(param_1,acStack_288);
            uStack_468 = uVar11 | 1;
            if (plStack_410 != (longlong *)0x0) {
              FUN_1803f53b0();
            }
            if (0xf < uStack_290) {
              uVar10 = uStack_290 + 1;
              lVar6 = CONCAT71(uStack_2a7,uStack_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_290 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            uStack_298 = 0;
            uStack_290 = 0xf;
            uStack_2a8 = 0;
            if (acStack_288[0] != '\0') {
              ppppuStack_460 = apppuStack_280;
              FUN_180067070(auStack_260);
              FUN_180067070(apppuStack_280);
            }
            FUN_1803e8470(auStack_458);
            goto LAB_180475c55;
          }
          FUN_18018b350(auStack_148,&uStack_2a8);
          ppppuStack_460 = &pppuStack_128;
          uVar12 = uVar11;
          if (plStack_410 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_410 + 1) = (int)plStack_410[1] + 1;
            UNLOCK();
            uVar12 = uStack_468;
          }
          pppuStack_128 = pppuStack_418;
          plStack_120 = plStack_410;
          uStack_468 = uVar12 | 0x20;
          FUN_180477950(auStack_458,apuStack_3f8,auStack_148);
          uVar11 = uVar12 & 0xffffffdf;
          uStack_468 = uVar11;
          FUN_180472880(auStack_148);
          FUN_180472d20(param_2);
          pcVar7 = *(char **)(param_2 + 8);
          cVar5 = *pcVar7;
          if (cVar5 == '\0') {
            uStack_1d8 = 0;
            uStack_1d0 = 0xf;
            uStack_1e8 = 0;
            FUN_1800671b0(&uStack_1e8,&UNK_180a2b330,0x13);
            FUN_180472d60(param_2,param_1,&uStack_1e8,0);
            uStack_468 = uVar11 | 1;
            if (0xf < uStack_1d0) {
              uVar10 = uStack_1d0 + 1;
              lVar6 = CONCAT71(uStack_1e7,uStack_1e8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_1d0 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            uStack_1d8 = 0;
            uStack_1d0 = 0xf;
            uStack_1e8 = 0;
            if (plStack_410 != (longlong *)0x0) {
              FUN_1803f53b0();
            }
            if (0xf < uStack_290) {
              uVar10 = uStack_290 + 1;
              lVar6 = CONCAT71(uStack_2a7,uStack_2a8);
              lVar9 = lVar6;
              if (0xfff < uVar10) {
                uVar10 = uStack_290 + 0x28;
                lVar9 = *(longlong *)(lVar6 + -8);
                if (0x1f < (lVar6 - lVar9) - 8U) {
                    // WARNING: Subroutine does not return
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              free(lVar9,uVar10);
            }
            uStack_298 = 0;
            uStack_290 = 0xf;
            uStack_2a8 = 0;
            if (acStack_288[0] != '\0') {
              ppppuStack_460 = apppuStack_280;
              FUN_180067070(auStack_260);
              FUN_180067070(apppuStack_280);
            }
            FUN_1803e8470(auStack_458);
            goto LAB_180475c55;
          }
          if (cVar5 == '}') {
            *(char **)(param_2 + 8) = pcVar7 + 1;
            ppppuStack_460 = apppuStack_368;
            puVar8 = (int8_t *)FUN_1803f4bd0(auStack_2e8,auStack_458);
            apuStack_3f8[0] = puVar8;
            FUN_1803f4bd0(apppuStack_368,puVar8);
            FUN_1803e8470(puVar8);
            FUN_1804724f0(auStack_3d8,apppuStack_368);
            FUN_180473d60(param_3,auStack_3d8);
            if (lStack_3d0 != 0) {
              FUN_1803f53b0();
            }
            *param_1 = 0;
            uStack_468 = uVar12 & 0xffffff1f | 1;
            if (plStack_410 != (longlong *)0x0) {
              FUN_1803f53b0();
            }
            FUN_180067070(&uStack_2a8);
            if (acStack_288[0] != '\0') {
              ppppuStack_460 = apppuStack_280;
              FUN_180067070(auStack_260);
              FUN_180067070(apppuStack_280);
            }
            FUN_1803e8470(auStack_458);
            goto LAB_180475c55;
          }
          if (cVar5 != ',') break;
          *(char **)(param_2 + 8) = pcVar7 + 1;
          FUN_180472d20(param_2);
          if (plStack_410 != (longlong *)0x0) {
            FUN_1803f53b0();
          }
          uVar14 = FUN_180067070(&uStack_2a8);
          if (acStack_288[0] != '\0') {
            ppppuStack_460 = apppuStack_280;
            FUN_180067070(auStack_260);
            uVar14 = FUN_180067070(apppuStack_280);
          }
        }
        uStack_158 = 0;
        uStack_150 = 0xf;
        auStack_168[0] = 0;
        FUN_1800671b0(auStack_168,&UNK_180a2b330,0x13);
        FUN_180472d60(param_2,param_1,auStack_168,0);
        uStack_468 = uVar11 | 1;
        FUN_180067070(auStack_168);
        if (plStack_410 != (longlong *)0x0) {
          FUN_1803f53b0();
        }
        FUN_180067070(&uStack_2a8);
        if (acStack_288[0] != '\0') {
          ppppuStack_460 = apppuStack_280;
          FUN_180067070(auStack_260);
          FUN_180067070(apppuStack_280);
        }
        FUN_1803e8470(auStack_458);
      }
    }
  }
LAB_180475c55:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_488);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180475c80(int8_t *param_1,longlong param_2,uint64_t param_3)
void FUN_180475c80(int8_t *param_1,longlong param_2,uint64_t param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  double dVar14;
  int8_t auStack_108 [32];
  uint uStack_e8;
  char *pcStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  int8_t *puStack_a8;
  longlong **pplStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  int8_t uStack_80;
  undefined7 uStack_7f;
  uint64_t uStack_70;
  ulonglong uStack_68;
  int8_t uStack_60;
  undefined7 uStack_5f;
  uint64_t uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  uStack_e8 = 0;
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
  puStack_a8 = param_1;
  dVar14 = (double)strtod(pcVar4,&pcStack_e0);
  if ((pcStack_e0 == *(char **)(param_2 + 8)) || (pcStack_e0 != pcVar9)) {
    uStack_50 = 0;
    uStack_48 = 0xf;
    uStack_60 = 0;
    FUN_1800671b0(&uStack_60,&UNK_180a2b348,0x1c);
    FUN_180472d60(param_2,param_1,&uStack_60,0);
    uStack_e8 = 1;
    if (0xf < uStack_48) {
      uVar12 = uStack_48 + 1;
      lVar5 = CONCAT71(uStack_5f,uStack_60);
      lVar11 = lVar5;
      if (0xfff < uVar12) {
        uVar12 = uStack_48 + 0x28;
        lVar11 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar12);
    }
    uStack_50 = 0;
    uStack_48 = 0xf;
    uStack_60 = 0;
  }
  else if ((dVar14 == INFINITY) || (dVar14 == -INFINITY)) {
    uStack_70 = 0;
    uStack_68 = 0xf;
    uStack_80 = 0;
    FUN_1800671b0(&uStack_80,&UNK_180a2b368,0x28);
    FUN_180472d60(param_2,param_1,&uStack_80,0);
    uStack_e8 = 1;
    if (0xf < uStack_68) {
      uVar12 = uStack_68 + 1;
      lVar5 = CONCAT71(uStack_7f,uStack_80);
      lVar11 = lVar5;
      if (0xfff < uVar12) {
        uVar12 = uStack_68 + 0x28;
        lVar11 = *(longlong *)(lVar5 + -8);
        if (0x1f < (lVar5 - lVar11) - 8U) {
                    // WARNING: Subroutine does not return
          _invalid_parameter_noinfo_noreturn();
        }
      }
      free(lVar11,uVar12);
    }
    uStack_70 = 0;
    uStack_68 = 0xf;
    uStack_80 = 0;
  }
  else {
    *(char **)(param_2 + 8) = pcStack_e0;
    pplStack_98 = &plStack_d8;
    plStack_d0 = (longlong *)FUN_1808fc418(0x20);
    *(int32_t *)(plStack_d0 + 1) = 1;
    *(int32_t *)((longlong)plStack_d0 + 0xc) = 1;
    *plStack_d0 = (longlong)&UNK_180a2b4f8;
    plStack_d8 = plStack_d0 + 2;
    *plStack_d8 = (longlong)&UNK_180a2b5d0;
    *plStack_d8 = (longlong)&UNK_180a2b608;
    plStack_d0[3] = (longlong)dVar14;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    plStack_90 = plStack_d0;
    plStack_88 = plStack_d8;
    FUN_180473d60(param_3,&plStack_d8);
    plVar6 = plStack_d0;
    uVar13 = 0;
    if (plStack_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_d0 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar13 = uStack_e8;
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_d0)(plStack_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar13 = uStack_e8;
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
          uVar13 = uStack_e8;
        }
      }
    }
    *param_1 = 0;
    uStack_e8 = uVar13 & 0xffffffe7 | 1;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_40 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



