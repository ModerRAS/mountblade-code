#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part159.c - 1 个函数
// 函数: void function_760d50(int64_t param_1,uint param_2,int param_3)
void function_760d50(int64_t param_1,uint param_2,int param_3)
{
  uint64_t **ppuVar1;
  int32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int32_t *puVar11;
  int64_t lVar12;
  int32_t *puVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t *puVar18;
  char cVar19;
  int64_t lVar20;
  int64_t *plVar21;
  uint64_t **ppuVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  int8_t stack_array_568 [32];
  int32_t *plocal_var_548;
  int *piStack_540;
  uint local_var_538;
  uint local_var_530;
  char cStack_528;
  uint local_var_524;
  uint local_var_520;
  int iStack_51c;
  int iStack_518;
  uint local_var_514;
  uint local_var_510;
  uint64_t *plocal_var_508;
  int64_t lStack_500;
  uint64_t local_var_4f8;
  uint64_t local_var_4f0;
  int iStack_4e8;
  int iStack_4e4;
  int64_t lStack_4e0;
  uint64_t *plocal_var_4d8;
  int64_t lStack_4d0;
  uint64_t local_var_4c8;
  int32_t local_var_4c0;
  int32_t local_var_4b8;
  int32_t local_var_4b4;
  int32_t local_var_4b0;
  int32_t local_var_4ac;
  int32_t stack_array_4a8 [2];
  uint64_t *plocal_var_4a0;
  int64_t lStack_498;
  uint64_t local_var_490;
  int32_t local_var_488;
  int64_t alStack_480 [2];
  uint64_t ***ppplocal_var_470;
  uint64_t ***ppplocal_var_468;
  uint64_t local_var_460;
  uint64_t ***ppplocal_var_458;
  uint64_t ***ppplocal_var_450;
  uint64_t local_var_448;
  int32_t local_var_440;
  uint64_t local_var_438;
  int32_t local_var_430;
  uint64_t local_var_428;
  uint64_t local_var_420;
  uint64_t local_var_418;
  int32_t local_var_3e0;
  uint64_t local_var_3d8;
  uint64_t local_var_3c8;
  uint64_t ***ppplocal_var_3c0;
  uint64_t ***ppplocal_var_3b8;
  uint64_t local_var_3b0;
  uint64_t ***ppplocal_var_3a8;
  uint64_t ***ppplocal_var_3a0;
  uint64_t local_var_398;
  int32_t local_var_390;
  uint64_t local_var_388;
  int32_t local_var_380;
  uint64_t local_var_378;
  uint64_t local_var_370;
  uint64_t local_var_368;
  int32_t local_var_330;
  uint64_t local_var_328;
  uint64_t local_var_318;
  uint64_t ***ppplocal_var_310;
  uint64_t ***ppplocal_var_308;
  uint64_t local_var_300;
  uint64_t ***ppplocal_var_2f8;
  uint64_t ***ppplocal_var_2f0;
  uint64_t local_var_2e8;
  int32_t local_var_2e0;
  uint64_t local_var_2d8;
  int32_t local_var_2d0;
  uint64_t local_var_2c8;
  uint64_t local_var_2c0;
  uint64_t local_var_2b8;
  float fStack_2b0;
  int32_t local_var_294;
  int32_t local_var_280;
  uint64_t local_var_278;
  uint64_t local_var_268;
  uint64_t ***ppplocal_var_260;
  uint64_t ***ppplocal_var_258;
  uint64_t local_var_250;
  uint64_t ***ppplocal_var_248;
  uint64_t ***ppplocal_var_240;
  uint64_t local_var_238;
  int32_t local_var_230;
  uint64_t local_var_228;
  int32_t local_var_220;
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  int32_t local_var_1d0;
  uint64_t local_var_1c8;
  int32_t local_var_1b8;
  int *piStack_1b0;
  int32_t *plocal_var_1a8;
  int64_t *plStack_1a0;
  int32_t local_var_198;
  int aiStack_190 [2];
  int32_t *plocal_var_188;
  int32_t *plocal_var_180;
  int64_t *plStack_178;
  int32_t local_var_170;
  int8_t stack_array_168 [256];
  uint64_t local_var_68;
  local_var_68 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_568;
  piStack_540 = &iStack_4e8;
  plocal_var_548 = &local_var_4b8;
  puVar13 = (int32_t *)0x0;
  iStack_4e8 = 0;
  local_var_514 = 0;
  local_var_524 = param_2;
  local_var_520 = param_2;
  iStack_51c = param_3;
  function_75ece0(param_1,*(int32_t *)(param_1 + 0x148),*(int32_t *)(param_1 + 0x14c),
                &local_var_4b4);
  bVar23 = iStack_4e8 == 0;
  cStack_528 = iStack_4e8 == 0xb;
  puVar11 = *(int32_t **)(param_1 + 0x210);
  if (puVar11 != (int32_t *)0x0) {
    lVar12 = *(int64_t *)(param_1 + 0xa8);
    bVar24 = lVar12 != 0;
    if (bVar24) {
      SystemFunction_000180743c20(lVar12,7);
      puVar11 = *(int32_t **)(param_1 + 0x210);
    }
    if ((puVar11 == (int32_t *)0x0) ||
       (plocal_var_548 = puVar11, *(char *)((int64_t)puVar11 + 0x212) == '\0')) {
      plocal_var_548 = puVar13;
    }
    puVar11 = puVar13;
    if (*(int64_t *)(param_1 + 0x138) != 0) {
      puVar11 = *(int32_t **)(*(int64_t *)(param_1 + 0x138) + 0x10);
    }
    iVar3 = function_762e40(param_1,puVar11,param_2,*(int32_t *)(param_1 + 0x148));
    if (iVar3 != 0) {
      if ((bVar24) && (lVar12 != 0)) {
// WARNING: Subroutine does not return
        SystemMemoryProcessor(lVar12,7);
      }
      goto label_76203a;
    }
    if ((bVar24) && (lVar12 != 0)) {
// WARNING: Subroutine does not return
      SystemMemoryProcessor(lVar12,7);
    }
  }
  cVar19 = cStack_528;
  if ((param_2 == 0) || ((*(uint *)(param_1 + 100) & 0x10001) != 0)) {
LAB_180761b18:
    puVar11 = (int32_t *)0x0;
    if ((cVar19 != '\0') &&
       (puVar14 = *(uint64_t **)(param_1 + 0x138), puVar14 != (uint64_t *)0x0)) {
      if (0 < *(int *)(puVar14 + 1)) {
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + -1;
        puVar14 = *(uint64_t **)(param_1 + 0x138);
      }
      if (*(int *)(puVar14 + 1) == 0) {
        if (puVar14[3] != 0) {
          plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
// WARNING: Subroutine does not return
          SystemDataValidator(*(int64_t *)(param_1 + 0x140) + 0x10bd0,puVar14[3],&system_buffer_ptr,0);
        }
        *puVar14 = *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + 0x107a8);
        *(uint64_t *)(*(int64_t *)(param_1 + 0x140) + 0x107a8) = *(uint64_t *)(param_1 + 0x138)
        ;
      }
      *(uint64_t *)(param_1 + 0x138) = 0;
      *(uint64_t *)(param_1 + 0x148) = 0;
      *(int32_t *)(param_1 + 0x150) = 0xffffffff;
    }
    lVar12 = *(int64_t *)(param_1 + 0x210);
    if (lVar12 != 0) {
      lVar9 = *(int64_t *)(param_1 + 0xa8);
      bVar23 = lVar9 != 0;
      if (bVar23) {
        SystemFunction_000180743c20(lVar9,7);
        lVar12 = *(int64_t *)(param_1 + 0x210);
      }
      if ((lVar12 == 0) ||
         (plocal_var_548 = (int32_t *)(lVar12 + 0x214), *(char *)(lVar12 + 0x426) == '\0')) {
        plocal_var_548 = puVar11;
      }
      if (*(int64_t *)(param_1 + 0x138) != 0) {
        puVar11 = *(int32_t **)(*(int64_t *)(param_1 + 0x138) + 0x10);
      }
      iVar3 = function_762e40(param_1,puVar11,param_2,*(int32_t *)(param_1 + 0x148));
      if (iVar3 != 0) {
        if ((bVar23) && (lVar9 != 0)) {
// WARNING: Subroutine does not return
          SystemMemoryProcessor(lVar9,7);
        }
        goto label_76203a;
      }
      if ((bVar23) && (lVar9 != 0)) {
// WARNING: Subroutine does not return
        SystemMemoryProcessor(lVar9,7);
      }
    }
    if (*(int64_t *)(param_1 + 0x138) == 0) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x4000;
      UNLOCK();
    }
    else {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffbfff;
      UNLOCK();
    }
    if (*(short *)(param_1 + 0x1aa) != 0) {
      plVar21 = *(int64_t **)(param_1 + 400);
      if (plVar21 != (int64_t *)(param_1 + 400)) {
        do {
          lVar12 = *(int64_t *)((int64_t)plVar21 + 0x10);
          lVar9 = *(int64_t *)(lVar12 + 0x60);
          if ((*(short *)(lVar9 + 0x5a) != 0) || ((*(byte *)(lVar12 + 0x7c) & 1) != 0)) {
            iVar3 = (int)*(short *)(lVar9 + 0x1b0);
            uVar6 = *(uint *)(lVar12 + 0x7c) & 1;
            plVar21 = (int64_t *)(lVar9 + 0x138 + (uint64_t)uVar6 * 0x20);
            if (uVar6 == 0) {
              iVar3 = *(short *)(lVar9 + 0x1a8) - iVar3;
            }
            if (*(ushort *)(lVar9 + 0x118) == 0) {
              if (*(int64_t *)(lVar9 + 0x138) == 0) {
                if (iVar3 < 2) {
                  if (*(int64_t *)(lVar12 + 0x40) == 0) {
                    uVar6 = *(uint *)(*(int64_t *)(lVar12 + 0x58) + 0x148);
                    if (uVar6 != 0) {
                      iVar3 = *(int *)(*(int64_t *)(lVar12 + 0x58) + 0x14c);
                      goto LAB_180761d5c;
                    }
                  }
                  else {
                    uVar6 = (uint)*(short *)(lVar12 + 0x3a);
                    iVar3 = 0;
LAB_180761d5c:
                    if (uVar6 != 0) goto LAB_180761db7;
                  }
                  uVar6 = *(uint *)(lVar9 + 0x1c0);
                  if (uVar6 == 0) {
                    iVar3 = 2;
                    uVar6 = 1;
                  }
                  else {
                    iVar3 = 0;
                  }
                }
                else {
                  iVar3 = iStack_51c;
                  if (iStack_51c == 0) {
                    iVar3 = *(int *)(*(int64_t *)(lVar9 + 0xa8) + 0x1193c);
                  }
                  if (iVar3 == 1) {
                    uVar6 = *(uint *)(*(int64_t *)(lVar9 + 0xa8) + 0x6d4);
                  }
                  else {
                    uVar6 = SystemFunction_0001807462a0(iVar3);
                  }
                }
              }
              else {
                uVar6 = *(uint *)(lVar9 + 0x148);
                iVar3 = *(int *)(lVar9 + 0x14c);
              }
            }
            else {
              iVar3 = *(int *)(lVar9 + 0xc4);
              uVar6 = (uint)*(ushort *)(lVar9 + 0x118);
            }
LAB_180761db7:
            if ((*(int64_t *)(param_1 + 0x138) == 0) || (local_var_524 == 0)) {
LAB_180761fe9:
              if (*(int *)(lVar12 + 0x6c) != 0) {
                SystemFunction_000180765bd0(lVar12);
              }
            }
            else {
              if ((*plVar21 == 0) && (*(int64_t *)(lVar12 + 0x40) == 0)) {
                if ((((*(float *)(lVar12 + 0x80) == *(float *)(lVar12 + 0x68)) &&
                     (*(float *)(lVar12 + 0x80) == 1.0)) && (*(float *)(lVar12 + 0x68) == 1.0)) &&
                   (*(short *)(lVar9 + 0x1a8) < 2)) {
                  local_var_510 = *(uint *)(param_1 + 0x148);
                  iVar4 = *(int *)(param_1 + 0x14c);
                  iStack_518 = iVar3;
                  if ((local_var_510 != uVar6) || (iVar4 != iVar3)) {
                    if ((iVar4 == 0) && (iVar4 = iStack_51c, 0 < (int)local_var_510)) {
                      iVar4 = SystemFunction_000180746b50(local_var_510);
                    }
                    uVar7 = SystemFunction_0001807462a0(iVar4);
                    if (uVar7 != 0) {
                      local_var_510 = uVar7;
                    }
                    iVar5 = iVar3;
                    if (iVar3 == 0) {
                      if ((int)uVar6 < 1) {
                        iStack_518 = iStack_51c;
                        iVar5 = iStack_51c;
                      }
                      else {
                        iStack_518 = SystemFunction_000180746b50(uVar6);
                        iVar5 = iStack_518;
                      }
                    }
                    uVar8 = SystemFunction_0001807462a0(iVar5);
                    uVar7 = uVar6;
                    if (uVar8 != 0) {
                      uVar7 = uVar8;
                    }
                    if ((local_var_510 != uVar7) || (iVar4 != iStack_518)) goto LAB_180761ebf;
                  }
                  if (local_var_524 != 0) {
                    function_75d580(param_1 + 0x138,plVar21);
                  }
                  goto LAB_180761fe9;
                }
              }
LAB_180761ebf:
              lVar15 = *plVar21;
              uVar7 = *(uint *)(lVar9 + 100) >> 0xf & 1;
              if (lVar15 == 0) {
                plocal_var_548 = (int32_t *)((uint64_t)plocal_var_548 & 0xffffffffffffff00);
                iVar4 = function_75a100(plVar21,*(uint64_t *)(param_1 + 0xa8),uVar6,0);
                if (iVar4 != 0) goto label_76203a;
                lVar15 = *plVar21;
                uVar7 = 1;
                *(int *)((int64_t)plVar21 + 0x14) = iVar3;
              }
              if ((uVar7 != 0) &&
                 (((local_var_514 != 0 || (local_var_524 < local_var_520)) ||
                  ((*(int64_t *)(lVar12 + 0x40) != 0 &&
                   ((int)*(short *)(lVar12 + 0x3a) != (int)plVar21[2])))))) {
                if (lVar15 != 0) {
                  lVar15 = *(int64_t *)(lVar15 + 0x10);
                }
// WARNING: Subroutine does not return
                memset(lVar15,0,(uint64_t)(local_var_520 * (int)plVar21[2]) << 2);
              }
              lVar16 = 0;
              if ((*(int *)((int64_t)plVar21 + 0x14) == 1) || (*(int *)(param_1 + 0x14c) == 1)) {
                uVar17 = 1;
              }
              else {
                uVar17 = 0;
              }
              lVar20 = lVar16;
              if (*(int64_t *)(param_1 + 0x138) != 0) {
                lVar20 = *(int64_t *)(*(int64_t *)(param_1 + 0x138) + 0x10);
              }
              if (lVar15 != 0) {
                lVar16 = *(int64_t *)(lVar15 + 0x10);
              }
              local_var_538 = local_var_524;
              piStack_540 = (int *)CONCAT44(piStack_540._4_4_,*(int *)(param_1 + 0x148));
              plocal_var_548 = (int32_t *)CONCAT44(plocal_var_548._4_4_,(int)plVar21[2]);
              local_var_530 = uVar7;
              function_7636f0(lVar12,lVar16 + (uint64_t)((int)plVar21[2] * local_var_514) * 4,
                            lVar20 + (uint64_t)(*(int *)(param_1 + 0x148) * local_var_514) * 4,uVar17)
              ;
            }
          }
          LOCK();
          *(uint *)(lVar9 + 100) = *(uint *)(lVar9 + 100) & 0xffff7fff;
          UNLOCK();
          plVar21 = *(int64_t **)(lVar12 + 0x20);
        } while (plVar21 != (int64_t *)(param_1 + 400));
      }
      UtilitiesSystem_DataValidator(param_1 + 0x138);
    }
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xfffeffff;
    UNLOCK();
    *(int32_t *)(param_1 + 0x58) = 0;
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffc7ffff;
    UNLOCK();
  }
  else {
    local_var_4c8 = 0;
    local_var_4c0 = 0xffffffff;
    plocal_var_4d8 = (uint64_t *)0x0;
    lStack_4d0 = 0;
    if (bVar23) {
      local_var_4f8 = 0;
      local_var_4f0 = CONCAT44(local_var_4f0._4_4_,0xffffffff);
      plocal_var_508 = (uint64_t *)0x0;
      lStack_500 = 0;
      if (*(int64_t *)(param_1 + 0xe8) == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = *(int *)(*(int64_t *)(param_1 + 0xe8) + 0x28);
      }
      ppuVar1 = (uint64_t **)(param_1 + 0x138);
      if ((*ppuVar1 == (uint64_t *)0x0) && (iVar3 != 0)) {
        plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
        iVar4 = function_75a100(ppuVar1,*(uint64_t *)(param_1 + 0xa8),local_var_4b4,local_var_4b8);
        puVar18 = plocal_var_508;
        puVar14 = plocal_var_4d8;
        if (iVar4 == 0) goto LAB_180760f3a;
      }
      else {
LAB_180760f3a:
        plocal_var_548 = (int32_t *)((uint64_t)plocal_var_548 & 0xffffffffffffff00);
        iVar4 = function_75a100(&plocal_var_508,*(uint64_t *)(param_1 + 0xa8),local_var_4b4);
        puVar18 = plocal_var_508;
        puVar14 = plocal_var_4d8;
        if (iVar4 == 0) {
          if ((*(uint *)(param_1 + 100) >> 3 & 1) != 0) {
            lVar12 = *(int64_t *)(param_1 + 0x158);
            if (((lVar12 == 0) || (*(int64_t *)(lVar12 + 0x10) == 0)) ||
               (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x148))) {
              plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
              iVar4 = function_75a100((int64_t *)(param_1 + 0x158),*(uint64_t *)(param_1 + 0xa8),
                                    *(int32_t *)(param_1 + 0x148));
              if (iVar4 != 0) {
                UtilitiesSystem_DataValidator(&plocal_var_508);
                puVar18 = plocal_var_508;
                puVar14 = plocal_var_4d8;
                goto LAB_180761496;
              }
            }
          }
          puVar14 = plocal_var_4d8;
          puVar18 = plocal_var_508;
          lVar12 = 0;
          alStack_480[0] = lVar12;
          if (*ppuVar1 != (uint64_t *)0x0) {
            alStack_480[0] = (*ppuVar1)[2];
          }
          lStack_4e0 = lVar12;
          if (plocal_var_508 != (uint64_t *)0x0) {
            lStack_4e0 = plocal_var_508[2];
          }
          lVar9 = lVar12;
          if (*(int64_t *)(param_1 + 0x158) != 0) {
            lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x158) + 0x10);
          }
          *(int64_t *)(param_1 + 200) = lVar9;
          *(int32_t *)(param_1 + 0xd0) = *(int32_t *)(param_1 + 0x168);
          if (iVar3 == 0) {
            local_var_524 = (uint)*(ushort *)(param_1 + 0x5a);
          }
          uVar6 = local_var_524;
          if ((*(float *)(param_1 + 0x1c4) == 1.0) && (*(float *)(param_1 + 0x1d0) == 1.0)) {
            iVar4 = (int)local_var_4f8;
            if (*(code **)(param_1 + 0x128) != (code *)0x0) {
              local_var_4ac = *(int32_t *)(param_1 + 0x148);
              plocal_var_180 = &local_var_4b0;
              local_var_4b0 = 0;
              plocal_var_188 = &local_var_4ac;
              stack_array_4a8[0] = 0;
              plStack_178 = alStack_480;
              local_var_170 = *(int32_t *)(param_1 + 0x14c);
              plocal_var_1a8 = stack_array_4a8;
              piStack_1b0 = &iStack_4e4;
              plStack_1a0 = &lStack_4e0;
              local_var_198 = local_var_4f8._4_4_;
              piStack_540 = (int *)((uint64_t)piStack_540 & 0xffffffff00000000);
              plocal_var_548 = (int32_t *)((uint64_t)plocal_var_548 & 0xffffffff00000000);
              iStack_4e4 = (int)local_var_4f8;
              local_var_1b8 = 1;
              *(int64_t *)(param_1 + 0xb0) = param_1;
              aiStack_190[0] = iVar3;
              iVar5 = (**(code **)(param_1 + 0x128))
                                ((int64_t *)(param_1 + 0xb0),local_var_524,aiStack_190);
              if (iVar5 == 0xb) {
                cStack_528 = '\x01';
              }
              else if ((iVar5 != 0) && ((*(byte *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x10) & 0x80) != 0)) {
                plocal_var_548 = (int32_t *)stack_array_168;
                stack_array_168[0] = 0;
// WARNING: Subroutine does not return
                DataTransformer(iVar5,7,param_1,&ui_system_data_1152_ptr);
              }
              if ((((*(int64_t *)(param_1 + 0xe8) != 0) &&
                   (*(int64_t *)(*(int64_t *)(param_1 + 0xe8) + 0x48) != 0)) &&
                  (iVar4 != iStack_4e4)) &&
                 (iStack_4e4 <= *(int *)(*(int64_t *)(param_1 + 0xa8) + 0x107b0))) {
                if (iStack_4e4 != 0) {
                  iVar4 = iStack_4e4;
                }
                local_var_4f8 = CONCAT44(local_var_4f8._4_4_,iVar4);
              }
            }
            if (iVar3 == 0) {
              if (*(ushort *)(param_1 + 0x58) == 0) {
// WARNING: Subroutine does not return
                memset(lStack_4e0 + (uint64_t)((local_var_524 + local_var_514) * iVar4) * 4,0,
                       (uint64_t)((local_var_520 - local_var_514) - local_var_524) * (int64_t)iVar4 * 4);
              }
              local_var_514 = (uint)*(ushort *)(param_1 + 0x58);
// WARNING: Subroutine does not return
              memmove(lStack_4e0 + (uint64_t)(iVar4 * local_var_514) * 4,lStack_4e0,
                      (uint64_t)(iVar4 * uVar6) << 2);
            }
            uVar2 = local_var_4f8._4_4_;
            if ((*(float *)(param_1 + 0x1c8) == 1.0) && (*(float *)(param_1 + 0x1d4) == 1.0)) {
              fVar25 = *(float *)(param_1 + 0x1cc);
              if ((fVar25 != 0.0) || (*(float *)(param_1 + 0x1d8) != 0.0)) {
                ppplocal_var_308 = &ppplocal_var_310;
                ppplocal_var_310 = &ppplocal_var_310;
                local_var_300 = 0;
                ppplocal_var_2f0 = &ppplocal_var_2f8;
                local_var_2e8 = 0;
                ppuVar22 = &plocal_var_4d8;
                if (puVar14 == (uint64_t *)0x0) {
                  ppuVar22 = ppuVar1;
                }
                ppplocal_var_2f8 = &ppplocal_var_2f8;
                local_var_2d8 = 0;
                local_var_2e0 = 0;
                local_var_2c8 = 0;
                local_var_2d0 = 0;
                local_var_278 = 0;
                local_var_280 = 0;
                local_var_318 = 0;
                local_var_2c0 = 0;
                local_var_2b8 = 0;
                SystemFunction_000180763630(&local_var_318,*(uint64_t *)(param_1 + 0xa8),
                                    *(int32_t *)(param_1 + 0x1d8));
                uVar17 = 0;
                local_var_294 = 0x40;
                fStack_2b0 = *(float *)(param_1 + 0x1cc);
                if (*(float *)(param_1 + 0x1cc) == *(float *)(param_1 + 0x1d8)) {
                  local_var_294 = 0;
                }
                uVar10 = uVar17;
                if (*ppuVar22 != (uint64_t *)0x0) {
                  uVar10 = (*ppuVar22)[2];
                }
                if (puVar18 != (uint64_t *)0x0) {
                  uVar17 = puVar18[2];
                }
                local_var_530 = 0;
                local_var_538 = local_var_524;
                piStack_540 = (int *)CONCAT44(piStack_540._4_4_,*(int32_t *)(ppuVar22 + 2));
                plocal_var_548 = (int32_t *)CONCAT44(plocal_var_548._4_4_,iVar4);
                function_7636f0(&local_var_318,uVar17,uVar10,0);
                UtilitiesSystem_DataValidator(&plocal_var_4d8);
                fVar25 = *(float *)(param_1 + 0x1cc);
              }
              if (((*(float *)(param_1 + 0x1c8) != 0.0) || (*(float *)(param_1 + 0x1d4) != 0.0)) ||
                 ((fVar25 != 0.0 || (cVar19 = '\x01', *(float *)(param_1 + 0x1d8) != 0.0)))) {
                cVar19 = cStack_528;
              }
              *(int32_t *)(param_1 + 0x1d0) = *(int32_t *)(param_1 + 0x1c4);
              *(float *)(param_1 + 0x1d4) = *(float *)(param_1 + 0x1c8);
              *(float *)(param_1 + 0x1d8) = fVar25;
              UtilitiesSystem_DataValidator(param_1 + 0x158);
              UtilitiesSystem_DataValidator(ppuVar1);
              if ((*ppuVar1 == (uint64_t *)0x0) || (iVar3 = UtilitiesSystem_DataValidator(ppuVar1), iVar3 == 0)) {
                *(int64_t *)(param_1 + 0x140) = lStack_500;
                *(int32_t *)(param_1 + 0x150) = (int32_t)local_var_4f0;
                plocal_var_508 = (uint64_t *)0x0;
                lStack_500 = 0;
                local_var_4f8 = 0;
                local_var_4f0 = 0;
                *ppuVar1 = puVar18;
                *(int *)(param_1 + 0x148) = iVar4;
                *(int32_t *)(param_1 + 0x14c) = uVar2;
              }
              LOCK();
              *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x10000;
              UNLOCK();
              *(int32_t *)(param_1 + 0x1c0) = *(int32_t *)(param_1 + 0x148);
              if (plocal_var_508 != (uint64_t *)0x0) {
                iVar3 = *(int *)(plocal_var_508 + 1);
                if (0 < iVar3) {
                  iVar3 = iVar3 + -1;
                  *(int *)(plocal_var_508 + 1) = iVar3;
                }
                if (iVar3 == 0) {
                  if (plocal_var_508[3] != 0) {
                    plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
// WARNING: Subroutine does not return
                    SystemDataValidator(lStack_500 + 0x10bd0,plocal_var_508[3],&system_buffer_ptr,0);
                  }
                  *plocal_var_508 = *(uint64_t *)(lStack_500 + 0x107a8);
                  *(uint64_t **)(lStack_500 + 0x107a8) = plocal_var_508;
                }
              }
              param_2 = local_var_520;
              if (plocal_var_4d8 != (uint64_t *)0x0) {
                iVar3 = *(int *)(plocal_var_4d8 + 1);
                if (0 < iVar3) {
                  iVar3 = iVar3 + -1;
                  *(int *)(plocal_var_4d8 + 1) = iVar3;
                }
                if (iVar3 == 0) {
                  if (plocal_var_4d8[3] != 0) {
                    plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
// WARNING: Subroutine does not return
                    SystemDataValidator(lStack_4d0 + 0x10bd0,plocal_var_4d8[3],&system_buffer_ptr,0);
                  }
                  *plocal_var_4d8 = *(uint64_t *)(lStack_4d0 + 0x107a8);
                  *(uint64_t **)(lStack_4d0 + 0x107a8) = plocal_var_4d8;
                }
              }
              goto LAB_180761b18;
            }
            ppplocal_var_3b8 = &ppplocal_var_3c0;
            ppplocal_var_3c0 = &ppplocal_var_3c0;
            local_var_3b0 = 0;
            ppplocal_var_3a0 = &ppplocal_var_3a8;
            local_var_398 = 0;
            ppplocal_var_3a8 = &ppplocal_var_3a8;
            local_var_388 = 0;
            local_var_390 = 0;
            local_var_378 = 0;
            local_var_380 = 0;
            local_var_328 = 0;
            local_var_330 = 0;
            local_var_3c8 = 0;
            local_var_370 = 0;
            local_var_368 = 0;
            local_var_490 = 0;
            plocal_var_548 = (int32_t *)((uint64_t)plocal_var_548 & 0xffffffffffffff00);
            plocal_var_4a0 = (uint64_t *)0x0;
            lStack_498 = 0;
            local_var_488 = 0xffffffff;
            iVar3 = function_75a100(&plocal_var_4a0,*(uint64_t *)(param_1 + 0xa8),iVar4,
                                  local_var_4f8._4_4_);
            if (iVar3 == 0) {
              uVar10 = 0;
              uVar17 = uVar10;
              if (puVar18 != (uint64_t *)0x0) {
                uVar17 = puVar18[2];
              }
              if (plocal_var_4a0 != (uint64_t *)0x0) {
                uVar10 = plocal_var_4a0[2];
              }
// WARNING: Subroutine does not return
              memcpy(uVar10,uVar17,(uint64_t)(iVar4 * local_var_524) << 2);
            }
            if (plocal_var_4a0 != (uint64_t *)0x0) {
              iVar3 = *(int *)(plocal_var_4a0 + 1);
              if (0 < iVar3) {
                iVar3 = iVar3 + -1;
                *(int *)(plocal_var_4a0 + 1) = iVar3;
              }
              if (iVar3 == 0) {
                if (plocal_var_4a0[3] != 0) {
                  plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
// WARNING: Subroutine does not return
                  SystemDataValidator(lStack_498 + 0x10bd0,plocal_var_4a0[3],&system_buffer_ptr,0);
                }
                *plocal_var_4a0 = *(uint64_t *)(lStack_498 + 0x107a8);
                *(uint64_t **)(lStack_498 + 0x107a8) = plocal_var_4a0;
              }
            }
          }
          else {
            ppplocal_var_468 = &ppplocal_var_470;
            ppplocal_var_470 = &ppplocal_var_470;
            ppplocal_var_450 = &ppplocal_var_458;
            ppplocal_var_458 = &ppplocal_var_458;
            local_var_460 = 0;
            local_var_448 = 0;
            local_var_438 = 0;
            local_var_440 = 0;
            local_var_428 = 0;
            local_var_430 = 0;
            local_var_3d8 = 0;
            local_var_3e0 = 0;
            alStack_480[1] = 0;
            local_var_420 = 0;
            local_var_418 = 0;
            plocal_var_548 = (int32_t *)((uint64_t)plocal_var_548 & 0xffffffffffffff00);
            iVar3 = function_75a100(&plocal_var_4d8,*(uint64_t *)(param_1 + 0xa8),
                                  *(int32_t *)(param_1 + 0x148),*(int32_t *)(param_1 + 0x14c))
            ;
            puVar14 = plocal_var_4d8;
            if (iVar3 == 0) {
              lVar9 = lVar12;
              if (*ppuVar1 != (uint64_t *)0x0) {
                lVar9 = (*ppuVar1)[2];
              }
              if (plocal_var_4d8 != (uint64_t *)0x0) {
                lVar12 = plocal_var_4d8[2];
              }
// WARNING: Subroutine does not return
              memcpy(lVar12,lVar9,(uint64_t)(*(int *)(param_1 + 0x148) * local_var_524) << 2);
            }
          }
        }
      }
LAB_180761496:
      if (puVar18 != (uint64_t *)0x0) {
        iVar3 = *(int *)(puVar18 + 1);
        if (0 < iVar3) {
          iVar3 = iVar3 + -1;
          *(int *)(puVar18 + 1) = iVar3;
        }
        if (iVar3 == 0) {
          if (puVar18[3] != 0) {
            plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
// WARNING: Subroutine does not return
            SystemDataValidator(lStack_500 + 0x10bd0,puVar18[3],&system_buffer_ptr,0);
          }
          *puVar18 = *(uint64_t *)(lStack_500 + 0x107a8);
          *(uint64_t **)(lStack_500 + 0x107a8) = puVar18;
        }
      }
    }
    else {
      if (((*(float *)(param_1 + 0x1cc) == 0.0) && (*(float *)(param_1 + 0x1d8) == 0.0)) ||
         (*(int64_t *)(param_1 + 0x138) == 0)) goto LAB_180761b18;
      ppplocal_var_258 = &ppplocal_var_260;
      ppplocal_var_260 = &ppplocal_var_260;
      ppplocal_var_240 = &ppplocal_var_248;
      ppplocal_var_248 = &ppplocal_var_248;
      local_var_250 = 0;
      local_var_238 = 0;
      local_var_228 = 0;
      local_var_230 = 0;
      local_var_218 = 0;
      local_var_220 = 0;
      local_var_1c8 = 0;
      local_var_1d0 = 0;
      local_var_268 = 0;
      local_var_210 = 0;
      local_var_208 = 0;
      plocal_var_548 = (int32_t *)((uint64_t)plocal_var_548._1_7_ << 8);
      iVar3 = function_75a100(&plocal_var_4d8,*(uint64_t *)(param_1 + 0xa8),
                            *(int32_t *)(param_1 + 0x148),*(int32_t *)(param_1 + 0x14c));
      puVar14 = plocal_var_4d8;
      if (iVar3 == 0) {
        puVar11 = puVar13;
        if (*(int64_t *)(param_1 + 0x138) != 0) {
          puVar11 = *(int32_t **)(*(int64_t *)(param_1 + 0x138) + 0x10);
        }
        if (plocal_var_4d8 != (uint64_t *)0x0) {
          puVar13 = (int32_t *)plocal_var_4d8[2];
        }
// WARNING: Subroutine does not return
        memcpy(puVar13,puVar11,(uint64_t)(*(int *)(param_1 + 0x148) * param_2) << 2);
      }
    }
    if (puVar14 != (uint64_t *)0x0) {
      iVar3 = *(int *)(puVar14 + 1);
      if (0 < iVar3) {
        iVar3 = iVar3 + -1;
        *(int *)(puVar14 + 1) = iVar3;
      }
      if (iVar3 == 0) {
        if (puVar14[3] != 0) {
          plocal_var_548 = (int32_t *)CONCAT71(plocal_var_548._1_7_,1);
// WARNING: Subroutine does not return
          SystemDataValidator(lStack_4d0 + 0x10bd0,puVar14[3],&system_buffer_ptr,0);
        }
        *puVar14 = *(uint64_t *)(lStack_4d0 + 0x107a8);
        *(uint64_t **)(lStack_4d0 + 0x107a8) = puVar14;
      }
    }
  }
label_76203a:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_68 ^ (uint64_t)stack_array_568);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address