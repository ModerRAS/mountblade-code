#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part609_sub002_sub002.c - 1 个函数
// 函数: void function_59ea80(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t *param_4)
void function_59ea80(int64_t param_1,uint64_t param_2,int64_t param_3,int32_t *param_4)
{
  float fVar1;
  int iVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  char cVar5;
  int16_t uVar6;
  int iVar7;
  int32_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  int64_t lVar17;
  short sVar18;
  int64_t *plVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int64_t lVar22;
  int32_t uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t stack_array_4f8 [32];
  int8_t local_var_4d8;
  int iStack_4d0;
  int32_t local_var_4c8;
  uint64_t local_var_4c0;
  uint64_t local_var_4b8;
  int32_t local_var_4b0;
  int iStack_4a4;
  int iStack_4a0;
  int64_t lStack_498;
  int iStack_488;
  int32_t local_var_484;
  int32_t *plocal_var_480;
  int32_t local_var_478;
  int iStack_474;
  uint64_t local_var_470;
  float fStack_468;
  int32_t local_var_464;
  float fStack_460;
  int32_t local_var_45c;
  int32_t local_var_458;
  int32_t local_var_454;
  int32_t local_var_450;
  int8_t local_var_44c;
  int64_t lStack_448;
  int32_t local_var_440;
  int32_t local_var_43c;
  uint64_t local_var_438;
  int32_t local_var_430;
  int32_t local_var_42c;
  int32_t local_var_428;
  int32_t local_var_424;
  int32_t local_var_420;
  int32_t local_var_41c;
  int32_t local_var_418;
  int8_t local_var_414;
  int32_t local_var_410;
  int32_t local_var_40c;
  uint64_t local_var_408;
  uint64_t local_var_400;
  uint64_t local_var_3f8;
  int32_t local_var_3f0;
  int32_t local_var_3ec;
  int8_t local_var_3e8;
  int32_t local_var_3e7;
  uint64_t local_var_3e0;
  int32_t local_var_3d8;
  uint64_t local_var_3d0;
  uint64_t local_var_3c8;
  uint64_t local_var_3c0;
  int32_t local_var_3b8;
  int32_t local_var_3b4;
  int32_t local_var_3b0;
  int32_t local_var_3ac;
  uint64_t local_var_3a8;
  int16_t local_var_3a0;
  int8_t local_var_398;
  int32_t local_var_394;
  int32_t local_var_390;
  int32_t local_var_38c;
  int32_t local_var_388;
  int32_t local_var_384;
  int32_t local_var_380;
  int32_t local_var_37c;
  int32_t local_var_378;
  int32_t local_var_374;
  int32_t local_var_370;
  int32_t local_var_36c;
  uint64_t local_var_368;
  int8_t local_var_360;
  uint64_t local_var_35c;
  int32_t local_var_354;
  uint64_t local_var_350;
  int32_t local_var_348;
  uint64_t local_var_340;
  uint64_t local_var_338;
  uint64_t local_var_330;
  int32_t local_var_328;
  int32_t local_var_324;
  int32_t local_var_320;
  int32_t local_var_31c;
  uint64_t local_var_318;
  int16_t local_var_310;
  int8_t local_var_308;
  int32_t local_var_304;
  int32_t local_var_300;
  int32_t local_var_2fc;
  int32_t local_var_2f8;
  int32_t local_var_2f4;
  int32_t local_var_2f0;
  int32_t local_var_2ec;
  int32_t local_var_2e8;
  int32_t local_var_2e4;
  int32_t local_var_2e0;
  int32_t local_var_2dc;
  uint64_t local_var_2d8;
  int8_t local_var_2d0;
  uint64_t local_var_2cc;
  int32_t local_var_2c4;
  uint64_t local_var_2c0;
  int32_t local_var_2b8;
  uint64_t local_var_2b0;
  uint64_t local_var_2a8;
  uint64_t local_var_2a0;
  int32_t local_var_298;
  int32_t local_var_294;
  int32_t local_var_290;
  int32_t local_var_28c;
  uint64_t local_var_288;
  int16_t local_var_280;
  int8_t local_var_278;
  int32_t local_var_274;
  int32_t local_var_270;
  int32_t local_var_26c;
  int32_t local_var_268;
  int32_t local_var_264;
  int32_t local_var_260;
  int32_t local_var_25c;
  int32_t local_var_258;
  int32_t local_var_254;
  int32_t local_var_250;
  int32_t local_var_24c;
  uint64_t local_var_248;
  int8_t local_var_240;
  uint64_t local_var_23c;
  int32_t local_var_234;
  uint64_t local_var_230;
  int32_t local_var_228;
  uint64_t local_var_220;
  uint64_t local_var_218;
  uint64_t local_var_210;
  int32_t local_var_208;
  int32_t local_var_204;
  int32_t local_var_200;
  int32_t local_var_1fc;
  uint64_t local_var_1f8;
  int16_t local_var_1f0;
  int8_t local_var_1e8;
  int iStack_1e4;
  int32_t local_var_1e0;
  int32_t local_var_1dc;
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  uint64_t local_var_1b8;
  int8_t local_var_1b0;
  uint64_t local_var_1ac;
  int32_t local_var_1a4;
  uint64_t local_var_1a0;
  int32_t local_var_198;
  uint64_t local_var_190;
  uint64_t local_var_188;
  uint64_t local_var_180;
  int32_t local_var_178;
  int32_t local_var_174;
  int32_t local_var_170;
  int32_t local_var_16c;
  uint64_t local_var_168;
  int16_t local_var_160;
  int8_t local_var_158;
  int32_t local_var_154;
  int32_t local_var_150;
  int32_t local_var_14c;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  uint64_t local_var_128;
  int8_t local_var_120;
  uint64_t local_var_11c;
  int32_t local_var_114;
  uint64_t local_var_110;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint local_var_ac;
  uint64_t local_var_a8;
  local_var_110 = 0xfffffffffffffffe;
  local_var_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_4f8;
  lVar22 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8);
  plVar19 = *(int64_t **)(lVar22 + 0x9e8);
  iVar7 = *(int *)(lVar22 + 0x9e0);
  lVar22 = (int64_t)iVar7;
  lVar17 = (int64_t)*(int *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 100 + plVar19[0x1a]) * 0x170 +
           render_system_memory;
  iStack_4a0 = *(int *)(*(int64_t *)(param_1 + 0x108) + 0x638);
  iStack_4a4 = iVar7;
  iStack_488 = iStack_4a0;
  plocal_var_480 = param_4;
  lStack_448 = param_3;
  lVar9 = PhysicsSystem_ForceCalculator(param_1,9);
  *(int64_t *)(param_1 + 600) = lVar9;
  uVar20 = 0x3000000000;
  uVar21 = 0x2000000000;
  uVar8 = 0xffffffff;
  uVar11 = 0;
  fVar28 = 0.0;
  fVar26 = 1.0;
  uVar23 = 0;
  if (lVar9 == 0) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(lVar9 + 0x50);
    if (iVar14 != -1) {
      uVar10 = *(uint64_t *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]);
      if ((uVar10 >> 0x13 & 1) != 0) {
        if ((uVar10 >> 8 & 1) == 0) {
          if ((*plVar19 == 0) || (*(short *)(*plVar19 + 8) < 1)) goto LAB_18059ebf6;
        }
        else if (*(short *)((int64_t)plVar19 + 10) == 0) {
LAB_18059ebf6:
          if (((0 < iStack_4a0) &&
              (lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590),
              *(int *)(lVar9 + 0x2498) != iVar14)) && (*(int *)(param_1 + 0x1d4) != 4)) {
            uVar10 = SystemFunction_000180534e20(lVar9,0);
            if (*(char *)((int64_t)iVar14 * 0x68 + 0x60 + render_system_memory) != '\x03') {
              uVar20 = uVar21;
            }
            if ((uVar10 & uVar20) == 0) {
              local_var_398 = 0;
              local_var_3e0 = 0xffffffffffffffff;
              local_var_3d8 = 0;
              local_var_3d0 = 0;
              local_var_3c8 = 0;
              local_var_3c0 = 0;
              local_var_3b8 = 0;
              local_var_3b4 = 0x3f800000;
              local_var_3b0 = 0xbe4ccccd;
              local_var_3ac = 0xbe4ccccd;
              local_var_3a8 = 0x3ecccccd;
              local_var_3a0 = 0x100;
              local_var_394 = 0xc;
              local_var_390 = 0xffffffff;
              local_var_38c = 0;
              local_var_388 = 0;
              local_var_384 = 0;
              local_var_380 = 0;
              local_var_37c = 0;
              local_var_378 = 0;
              local_var_374 = 0;
              local_var_370 = 0;
              local_var_368 = 0xffffffffffffffff;
              local_var_360 = 0xff;
              local_var_35c = 0;
              local_var_36c = 0xffffffff;
              local_var_354 = 0x3f800000;
              UISystem_InputHandler(param_1,1,&local_var_3e0);
            }
          }
        }
      }
      lVar9 = *(int64_t *)(param_1 + 0x108);
      plVar3 = *(int64_t **)(lVar9 + 0x590);
      iVar13 = (int)plVar3[0x493];
      fVar27 = 1.0;
      if ((iVar13 == -1) || (*(int *)((int64_t)iVar13 * 0x68 + 0x58 + render_system_memory) != 0x12)) {
        uVar20 = *(uint64_t *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]);
        if (((uint)uVar20 & 0xc00) == 0xc00) {
          lVar22 = *(int64_t *)(param_1 + 600);
          if (lVar22 != 0) {
            iVar2 = *(int *)(lVar22 + 0x1c);
            if (iVar13 == iVar2) {
              fVar25 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1);
              lVar22 = *(int64_t *)(param_1 + 600);
              if (0.9999 <= fVar25) {
                local_var_438 = 0;
                local_var_430 = 0;
                local_var_418 = 0x1000000;
                local_var_428 = 0x3f800000;
                local_var_424 = 0xbe4ccccd;
                local_var_420 = 0xbe4ccccd;
                local_var_41c = 0x3ecccccd;
                local_var_414 = 0;
                local_var_440 = 1;
                if (lVar22 == 0) {
                  local_var_43c = 0xffffffff;
                }
                else {
                  local_var_43c = *(int32_t *)(lVar22 + 0x48);
                }
                local_var_42c = 0x3d4ccccd;
                CoreSystemThreadManager(*(uint64_t *)(param_1 + 0x108),&local_var_440);
                iVar7 = iStack_4a4;
                goto LAB_18059ef32;
              }
              lVar9 = *(int64_t *)(param_1 + 0x108);
            }
            if (lVar22 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = *(int *)(lVar22 + 0x48);
            }
            iVar7 = iStack_4a4;
            if (*(int *)(*(int64_t *)(lVar9 + 0x590) + 0x2498) == iVar13) {
              lVar9 = SystemCore_Initializer(&system_data_5f30,
                                    *(int32_t *)(*(int64_t *)(lVar9 + 0x590) + 0xac),iVar2);
              lVar22 = *(int64_t *)(param_1 + 0x108);
              fVar25 = ((float)(*(int64_t *)
                                 (&system_error_code + (int64_t)*(int *)(param_1 + 0x240) * 8) -
                               *(int64_t *)(param_1 + 0x238)) * 1e-05 -
                       (*(float *)(lVar22 + 0x3cc) + *(float *)(lVar9 + 0x188))) /
                       (*(float *)(lVar22 + 0x3d0) - *(float *)(lVar22 + 0x3cc));
              if (0.0 <= fVar25) {
                if (1.0 <= fVar25) {
                  fVar25 = fVar27;
                }
              }
              else {
                fVar25 = 0.0;
              }
              *(float *)(*(int64_t *)(lVar22 + 0x590) + 0x24d4) = fVar25 * 0.9 + 0.05;
              iVar7 = iStack_4a4;
            }
          }
LAB_18059ef32:
          fVar25 = 0.0;
          if (*(int64_t *)(param_1 + 600) != 0) {
            lVar22 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590);
            iVar13 = *(int *)(lVar22 + 0x2498);
            if (iVar13 == -1) {
              if (*(int *)(lVar22 + 0x2450) == -1) {
LAB_18059ef8e:
                puVar15 = (uint *)((int64_t)*(char *)(lVar22 + 0x25fb) * 0x100 +
                                  *(int64_t *)
                                   (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18));
                do {
                  LOCK();
                  uVar16 = *puVar15;
                  *puVar15 = *puVar15 | 1;
                  UNLOCK();
                } while ((uVar16 & 1) != 0);
                local_var_108 = *(uint64_t *)(puVar15 + 1);
                local_var_100 = *(uint64_t *)(puVar15 + 3);
                local_var_f8 = *(uint64_t *)(puVar15 + 5);
                local_var_f0 = *(uint64_t *)(puVar15 + 7);
                *puVar15 = 0;
                puVar15 = (uint *)((int64_t)
                                   *(char *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) +
                                            0x25fc) * 0x100 +
                                  *(int64_t *)
                                   (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x658) + 0x18));
                do {
                  LOCK();
                  uVar16 = *puVar15;
                  *puVar15 = *puVar15 | 1;
                  UNLOCK();
                } while ((uVar16 & 1) != 0);
                local_var_c8 = *(uint64_t *)(puVar15 + 1);
                local_var_c0 = *(uint64_t *)(puVar15 + 3);
                fStack_b8 = (float)puVar15[5];
                fStack_b4 = (float)puVar15[6];
                fStack_b0 = (float)puVar15[7];
                local_var_ac = puVar15[8];
                *puVar15 = 0;
                local_var_e8._4_4_ = (float)((uint64_t)local_var_108 >> 0x20);
                local_var_e0._4_4_ = (float)((uint64_t)local_var_100 >> 0x20);
                local_var_e8._0_4_ = (float)local_var_108;
                local_var_e0._0_4_ = (float)local_var_100;
                fVar27 = local_var_e8._4_4_ * local_var_e0._4_4_ - (float)local_var_e8 * (float)local_var_e0;
                local_var_d8._0_4_ = (float)local_var_f8;
                local_var_d8._4_4_ = (float)((uint64_t)local_var_f8 >> 0x20);
                local_var_d0._0_4_ = (float)local_var_f0;
                fVar25 = *(float *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8) + 0x8c0) *
                         (((((float)local_var_e0 * (float)local_var_e0 +
                             (float)local_var_e0 * (float)local_var_e0 +
                            local_var_e0._4_4_ * local_var_e0._4_4_ + local_var_e0._4_4_ * local_var_e0._4_4_) -
                           1.0) * (fStack_b8 - (float)local_var_d8) -
                          ((float)local_var_e0 * local_var_e8._4_4_ + (float)local_var_e0 * local_var_e8._4_4_ +
                          (float)local_var_e8 * local_var_e0._4_4_ + (float)local_var_e8 * local_var_e0._4_4_) *
                          (fStack_b4 - local_var_d8._4_4_)) -
                         (fVar27 + fVar27) * (fStack_b0 - (float)local_var_d0)) - render_system_memory;
                if (fVar25 <= 0.0) {
                  fVar25 = 0.0;
                }
                fVar25 = fVar25 * render_system_memory;
                iStack_4a0 = iStack_488;
                local_var_e8 = local_var_108;
                local_var_e0 = local_var_100;
                local_var_d8 = local_var_f8;
                local_var_d0 = local_var_f0;
              }
            }
            else if ((*(int *)((int64_t)iVar13 * 0x68 + 0x58 + render_system_memory) == 0x23) ||
                    (*(char *)((int64_t)iVar13 * 0x68 + 0x60 + render_system_memory) == '\0'))
            goto LAB_18059ef8e;
          }
          lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8);
          lVar22 = (int64_t)iVar7;
LAB_18059f107:
          lVar22 = *(int64_t *)(lVar22 * 0x1f8 + 0x100 + lVar9);
          fVar27 = fVar25;
        }
        else {
          if ((uVar20 >> 10 & 1) == 0) goto LAB_18059f15f;
          if (*(short *)((int64_t)plVar19 + 10) < 1) {
            fVar27 = 0.0;
            lVar22 = *(int64_t *)(lVar22 * 0x1f8 + 0x100 + *(int64_t *)(lVar9 + 0x8f8));
          }
          else {
            lVar22 = *(int64_t *)(lVar22 * 0x1f8 + 0x100 + *(int64_t *)(lVar9 + 0x8f8));
          }
        }
        if (lVar22 != 0) {
          *(float *)(lVar22 + 0x90) = fVar27;
        }
      }
      else {
        lVar9 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
        plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
        if (((int)plVar3[0x493] != -1) &&
           (*(char *)((int64_t)(int)plVar3[0x493] * 0x68 + 0x60 + render_system_memory) == '\x03')) {
          fVar25 = *(float *)(lVar9 + 0x1d8);
          fVar1 = *(float *)(lVar9 + 0x1dc);
          if (fVar1 != fVar25) {
            fVar24 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1);
            fVar25 = (fVar24 - fVar25) / (fVar1 - fVar25);
            if (0.0 <= fVar25) {
              if (1.0 <= fVar25) {
                fVar25 = fVar27;
              }
            }
            else {
              fVar25 = 0.0;
            }
            lVar9 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8);
            goto LAB_18059f107;
          }
        }
      }
    }
  }
LAB_18059f15f:
  if (((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x200) * 8) -
              *(int64_t *)(param_1 + 0x1f8)) * 1e-05 < 0.0) && (system_status_flag == 1)) {
    puVar15 = (uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
    *puVar15 = *puVar15 & 0xfffffc3f;
  }
  iVar7 = *(int *)(param_1 + 0x1d4);
  if ((iVar7 == 0) || (iVar7 == 7)) {
    if ((((float)(*(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x200) * 8) -
                 *(int64_t *)(param_1 + 0x1f8)) * 1e-05 < 0.0) ||
        (uVar16 = *(uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8), (uVar16 & 0x3c0) == 0)) ||
       ((uVar16 & 0x7c00) != 0)) {
      if ((((*(uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8) & 0x7c00) != 0) &&
          (*(int32_t **)(param_1 + 600) != (int32_t *)0x0)) &&
         (*(int *)(param_1 + 0x1e0) == -1)) {
        iVar7 = function_5b2220(param_1 + 0x110,**(int32_t **)(param_1 + 600),0);
        *(int *)(param_1 + 0x1e0) = iVar7;
        if (iVar7 != -1) {
          SystemFunction_0001805b2480(param_1 + 0x110);
        }
        *(int32_t *)(param_1 + 0x278) = 0xc0000000;
      }
      goto LAB_1805a05b9;
    }
    if (iVar7 == 7) {
      local_var_1e8 = 0;
      local_var_230 = 0xffffffffffffffff;
      local_var_228 = 0;
      local_var_220 = 0;
      local_var_218 = 0;
      local_var_210 = 0;
      local_var_208 = 0;
      local_var_204 = 0x3f800000;
      local_var_200 = 0xbe4ccccd;
      local_var_1fc = 0xbe4ccccd;
      local_var_1f8 = 0x3ecccccd;
      local_var_1f0 = 0x100;
      local_var_1e0 = 0xffffffff;
      local_var_1dc = 0;
      local_var_1d8 = 0;
      local_var_1d4 = 0;
      local_var_1d0 = 0;
      local_var_1cc = 0;
      local_var_1c8 = 0;
      local_var_1c4 = 0;
      local_var_1c0 = 0;
      local_var_1b8 = 0xffffffffffffffff;
      local_var_1b0 = 0xff;
      local_var_1ac = 0;
      local_var_1bc = 0xffffffff;
      local_var_1a4 = 0x3f800000;
      iStack_1e4 = iVar7;
      UISystem_InputHandler(param_1,1,&local_var_230,1);
    }
    lVar9 = (int64_t)(int)plVar19[0x1e] * 0xa0;
    lVar22 = plVar19[0x1a];
    if ((*(short *)(lVar9 + 0x94 + lVar22) < 1) ||
       (cVar5 = SystemFunction_0001805a7970(plVar19), cVar5 != '\0')) {
      lVar22 = *(int64_t *)(param_1 + 0x108);
      if ((((*(int *)(lVar22 + 0x570) != 2) ||
           (0.0 <= (float)(*(int64_t *)
                            (&system_error_code +
                            (int64_t)*(int *)(*(int64_t *)(param_1 + 0x100) + 0x87b708) * 8) -
                          *(int64_t *)(*(int64_t *)(param_1 + 0x100) + 0x87b700)) * 1e-05)) &&
          ((iVar14 == -1 || (*(int *)(*(int64_t *)(lVar22 + 0x590) + 0x2498) != iVar14)))) &&
         ((0 < iStack_4a0 || (cVar5 = SystemFunction_0001805a7970(plVar19), cVar5 != '\0')))) {
        plVar19 = *(int64_t **)(lVar22 + 0x590);
        if (((int)plVar19[0x493] != -1) &&
           (*(int *)((int64_t)(int)plVar19[0x493] * 0x68 + 0x58 + render_system_memory) == 0x23)) {
          fVar28 = (float)(**(code **)(*plVar19 + 0xa0))(plVar19,1);
        }
        if ((*(int64_t *)(param_1 + 600) != 0) &&
           (iVar7 = *(int *)(*(int64_t *)(param_1 + 600) + 0x1c), iVar7 != -1)) {
          lVar22 = *(int64_t *)(param_1 + 0x1c8);
          lVar9 = *(int64_t *)(*(int64_t *)(lVar22 + 0x8f8) + 0x9e8);
          if (lVar9 != 0) {
            fVar26 = (float)*(int *)((int64_t)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x68 +
                                    *(int64_t *)(lVar9 + 0xd0)) * 0.01;
          }
          local_var_470 = 0;
          local_var_450 = 0x1000000;
          local_var_464 = 0;
          local_var_45c = 0xbe4ccccd;
          local_var_458 = 0xbe4ccccd;
          local_var_454 = 0x3ecccccd;
          local_var_44c = 0;
          local_var_478 = 1;
          fStack_460 = *(float *)(lVar22 + 0x3ac) * fVar26;
          iStack_474 = iVar7;
          fStack_468 = fVar28 * 0.4;
          cVar5 = CoreSystemThreadManager(lVar22,&local_var_478);
          if (cVar5 != '\0') {
            *(int32_t *)(param_1 + 0x1d4) = 1;
            *(int32_t *)(param_1 + 0x54) = 0xffff;
            *(int32_t *)(param_1 + 0x44) = 0x3f800000;
            *(uint64_t *)(param_1 + 0x4c) = 0xffffffffbf800000;
            *(int8_t *)(param_1 + 0x40) = 0;
            *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
            *(int32_t *)(param_1 + 200) = 0xf149f2ca;
            *(int8_t *)(param_1 + 0xd8) = 0xff;
            if (*(int64_t *)(param_1 + 600) != 0) {
              uVar8 = *(int32_t *)(*(int64_t *)(param_1 + 600) + 0x1c);
            }
            lVar22 = SystemCore_Initializer(&system_data_5f30,
                                   *(int32_t *)
                                    (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0xac),
                                   uVar8);
            *(int64_t *)(param_1 + 0x238) =
                 *(int64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x240) * 8) -
                 (int64_t)(fVar28 * 0.4 * *(float *)(lVar22 + 0x188) * 100000.0);
            goto LAB_1805a05b9;
          }
        }
      }
    }
    else if (((0 < iStack_4a0) && (iVar14 != -1)) &&
            (lVar17 = *(int64_t *)(param_1 + 0x108), (*(uint *)(lVar17 + 0x4c8) & 0x7c00) == 0)) {
      iVar7 = *(int *)(lVar17 + 0x564);
      if (iVar7 < 0) {
        uVar20 = SystemFunction_000180534e20(*(uint64_t *)(lVar17 + 0x590),0);
        if ((uVar20 & 0x3000000000) == 0) goto LAB_1805a01a8;
      }
      else if ((((*(uint *)(lVar17 + 0x56c) & 0x2000000) != 0) ||
               ((*(uint *)(lVar9 + 0x50 + lVar22) >> 0x12 & 1) == 0)) ||
              (0 < *(short *)((int64_t)plVar19 + 10))) {
LAB_1805a01a8:
        if ((iVar7 < 0) ||
           (uVar20 = SystemFunction_000180534e20(*(uint64_t *)(lVar17 + 0x590),0),
           (uVar20 & 0x2000000000) == 0)) {
          lVar22 = SystemCore_Initializer(&system_data_5f30,
                                 *(int32_t *)(*(int64_t *)(lVar17 + 0x590) + 0xac),iVar14);
          if (0 < *(short *)((int64_t)plVar19 + 10)) {
            do {
              lVar22 = SystemCore_Initializer(&system_data_5f30,
                                     *(int32_t *)
                                      (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0xac)
                                     ,*(int32_t *)(lVar22 + 0x1f0));
              uVar16 = (int)uVar11 + 1;
              uVar11 = (uint64_t)uVar16;
            } while ((int)uVar16 < (int)*(short *)((int64_t)plVar19 + 10));
          }
          lVar9 = *(int64_t *)(param_1 + 0x108);
          if (((*(int *)(lVar9 + 0x570) == 1) || (-1 < *(int *)(lVar9 + 0x564))) ||
             ((((*(byte *)(lVar9 + 0x4c8) & 0xf) == 0 &&
               ((*(float *)(lVar9 + 0x4d0) == 0.0 && (*(float *)(lVar9 + 0x4cc) == 0.0)))) ||
              ((*(uint *)(lVar22 + 0x1d0) >> 0x18 & 1) == 0)))) {
            local_var_158 = 0;
            local_var_1a0 = 0xffffffffffffffff;
            local_var_198 = 0;
            local_var_190 = 0;
            local_var_188 = 0;
            local_var_180 = 0;
            local_var_178 = 0;
            local_var_174 = 0x3f800000;
            local_var_170 = 0xbe4ccccd;
            local_var_16c = 0xbe4ccccd;
            local_var_168 = 0x3ecccccd;
            local_var_160 = 0x100;
            local_var_154 = 0xc;
            local_var_150 = 0xffffffff;
            local_var_14c = 0;
            local_var_148 = 0;
            local_var_144 = 0;
            local_var_140 = 0;
            local_var_13c = 0;
            local_var_138 = 0;
            local_var_134 = 0;
            local_var_130 = 0;
            local_var_128 = 0xffffffffffffffff;
            local_var_120 = 0xff;
            local_var_11c = 0;
            local_var_12c = 0xffffffff;
            local_var_114 = 0x3f800000;
            UISystem_InputHandler(param_1,1,&local_var_1a0);
            if ((system_status_flag == 1) || (system_status_flag == 4)) goto LAB_1805a05b9;
            goto LAB_18059fcf8;
          }
        }
      }
    }
    puVar15 = (uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
    *puVar15 = *puVar15 & 0xfffffc3f;
  }
  else {
    if (iVar7 == 1) {
      plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
      iVar7 = (int)plVar3[0x493];
      if (((iVar7 == -1) || (*(char *)((int64_t)iVar7 * 0x68 + 0x60 + render_system_memory) != '\0')) ||
         (((*(uint *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) >> 8 & 1) == 0 &&
          ((*plVar19 == 0 || (*(short *)(*plVar19 + 8) == 0)))))) {
LAB_18059f8a5:
        function_5a79c0(param_1,lVar17);
        goto LAB_1805a05b9;
      }
      if ((*(uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8) & 0x7c00) != 0) {
        local_var_308 = 0;
        local_var_350 = 0xffffffffffffffff;
        local_var_348 = 0;
        local_var_340 = 0;
        local_var_338 = 0;
        local_var_330 = 0;
        local_var_328 = 0;
        local_var_324 = 0x3f800000;
        local_var_320 = 0xbe4ccccd;
        local_var_31c = 0xbe4ccccd;
        local_var_318 = 0x3ecccccd;
        local_var_310 = 0x100;
        local_var_304 = 6;
        local_var_300 = 0xffffffff;
        local_var_2fc = 0;
        local_var_2f8 = 0;
        local_var_2f4 = 0;
        local_var_2f0 = 0;
        local_var_2ec = 0;
        local_var_2e8 = 0;
        local_var_2e4 = 0;
        local_var_2e0 = 0;
        local_var_2d8 = 0xffffffffffffffff;
        local_var_2d0 = 0xff;
        local_var_2cc = 0;
        local_var_2dc = 0xffffffff;
        local_var_2c4 = 0x3f800000;
        UISystem_InputHandler(param_1,1,&local_var_350);
        goto LAB_1805a05b9;
      }
      if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
        if (*(int64_t *)(param_1 + 600) == 0) {
          iVar14 = -1;
        }
        else {
          iVar14 = *(int *)(*(int64_t *)(param_1 + 600) + 0x48);
        }
        if (((iVar7 == iVar14) ||
            (fVar26 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1), uVar11 = 0, 0.7 < fVar26)) &&
           (uVar11 = SystemCore_Initializer(&system_data_5f30,
                                   *(int32_t *)
                                    (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0xac),
                                   *(int32_t *)(*(int64_t *)(param_1 + 600) + 0x34)),
           *(float *)(uVar11 + 0x1d8) <= 0.05 && *(float *)(uVar11 + 0x1d8) != 0.05)) {
          function_50aea0(*(uint64_t *)(param_1 + 0x108));
        }
      }
      lVar22 = *(int64_t *)(param_1 + 0x108);
      if ((*(int *)(lVar22 + 0x570) == 0) && (system_status_flag - 2U < 2)) {
        if (((*(char *)(*(int64_t *)(lVar22 + 0x728) + 0x5b8) != '\0') &&
            (*(int64_t *)(param_1 + 600) != 0)) &&
           ((plVar3 = *(int64_t **)(lVar22 + 0x590),
            (int)plVar3[0x493] == *(int *)(*(int64_t *)(param_1 + 600) + 0x48) ||
            (fVar26 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1), 0.9 < fVar26)))) {
          *(int8_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728) + 0x5b8) = 0;
          goto LAB_18059f47b;
        }
      }
      else if (((*(uint *)(lVar22 + 0x4c8) & 0x3c0) == 0) && (*(int64_t *)(param_1 + 600) != 0)) {
        fVar26 = (float)(**(code **)(**(int64_t **)(lVar22 + 0x590) + 0x90))
                                  (*(int64_t **)(lVar22 + 0x590),1);
        if (fVar26 <= 0.99) {
          if (*(int64_t *)(param_1 + 600) == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = *(int *)(*(int64_t *)(param_1 + 600) + 0x48);
          }
          if (*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0x2498) != iVar7)
          goto LAB_18059f875;
        }
LAB_18059f47b:
        if ((*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) == 2) ||
           ((system_status_flag != 1 && (system_status_flag != 4)))) {
          if (uVar11 == 0) {
            uVar11 = SystemCore_Initializer(&system_data_5f30,
                                   *(int32_t *)
                                    (*(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x590) + 0xac),
                                   *(int32_t *)(*(int64_t *)(param_1 + 600) + 0x34));
          }
          fVar26 = *(float *)(uVar11 + 0x1d8);
          if ((system_status_flag == 1) || (system_status_flag == 4)) {
            local_var_3e8 = 1;
          }
          else {
            local_var_3e8 = 0;
          }
          iVar7 = *(int *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x5c + plVar19[0x1a]);
          puVar4 = *(int32_t **)(param_1 + 600);
          if (puVar4 == (int32_t *)0x0) {
            local_var_40c = 0xffffffff;
          }
          else {
            local_var_40c = puVar4[0xd];
          }
          local_var_408 = 0;
          local_var_400 = 0;
          local_var_3f8 = 0xbe4ccccd3f800000;
          local_var_3f0 = 0xbe4ccccd;
          local_var_3ec = 0x3ecccccd;
          local_var_3e7 = 0x10000;
          local_var_410 = 1;
          cVar5 = CoreSystemThreadManager(*(uint64_t *)(param_1 + 0x1c8),&local_var_410);
          if (cVar5 != '\0') {
            if (iVar7 == 0xf) {
              iVar7 = function_5b2220(param_1 + 0x110,*puVar4,0);
              *(int *)(param_1 + 0x1e0) = iVar7;
              if (iVar7 != -1) {
                SystemFunction_0001805b2480(param_1 + 0x110);
              }
              *(int32_t *)(param_1 + 0x1d4) = 5;
            }
            else {
              if (0.0 < fVar26) {
                uVar23 = 2;
              }
              *(int32_t *)(param_1 + 0x1d4) = uVar23;
            }
            function_50aea0(*(uint64_t *)(param_1 + 0x108));
            lVar22 = *(int64_t *)(param_1 + 0x108);
            if (*(int *)(lVar22 + 0x570) == 2) {
              lVar9 = *(int64_t *)(lVar22 + 0x590);
              fVar26 = *(float *)(lVar9 + 0x258c);
              fVar28 = *(float *)(lVar9 + 0x2588);
              fVar27 = *(float *)(lVar22 + 0x524);
              fVar25 = *(float *)(lVar22 + 0x534);
              uVar8 = *(int32_t *)(lVar9 + 0x2590);
              lVar9 = *(int64_t *)(lVar22 + 0x728);
              *(float *)(lVar9 + 0x5d0) =
                   fVar26 * *(float *)(lVar22 + 0x530) + fVar28 * *(float *)(lVar22 + 0x520);
              *(float *)(lVar9 + 0x5d4) = fVar28 * fVar27 + fVar26 * fVar25;
              *(int32_t *)(lVar9 + 0x5d8) = uVar8;
              *(int32_t *)(lVar9 + 0x5dc) = 0x7f7fffff;
            }
            else if (*(int *)(lVar22 + 0x570) != 0) {
              lVar22 = *(int64_t *)(lVar22 + 0x728);
              *(uint64_t *)(lVar22 + 0x5d0) = 0;
              *(uint64_t *)(lVar22 + 0x5d8) = 0;
            }
            lVar22 = render_system_memory;
            if (system_status_flag == 1) {
              iVar7 = _Mtx_lock(render_system_memory + 0x4c4e8);
              if (iVar7 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar7);
              }
              uVar12 = function_5fa9a0(lVar22 + 290000,0x28);
              lVar22 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728);
              uVar8 = *(int32_t *)(*(int64_t *)(param_1 + 0x100) + 0x87b758);
              cVar5 = SystemBufferProcessor(uVar12,0,&processed_var_6432_ptr);
              if ((((cVar5 != '\0') &&
                   (cVar5 = SystemBufferProcessor(uVar12,0,&processed_var_6464_ptr), cVar5 != '\0')) &&
                  (cVar5 = SystemBufferProcessor(uVar12,uVar8,&processed_var_6384_ptr), cVar5 != '\0')) &&
                 ((cVar5 = UI_LayoutManager(uVar12,*(int32_t *)(lVar22 + 0x5d0),&processed_var_6400_ptr),
                  cVar5 != '\0' &&
                  (cVar5 = UI_LayoutManager(uVar12,*(int32_t *)(lVar22 + 0x5d4),&processed_var_6400_ptr),
                  cVar5 != '\0')))) {
                UI_LayoutManager(uVar12,*(int32_t *)(lVar22 + 0x5d8),&processed_var_6416_ptr);
              }
              lVar22 = render_system_memory;
              function_5faa20(render_system_memory + 290000);
              iVar7 = _Mtx_unlock(lVar22 + 0x4c4e8);
              if (iVar7 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar7);
              }
            }
            if ((*(uint *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) >> 8 & 1) ==
                0) {
              *plocal_var_480 = 3;
              iVar7 = *(int *)(*(int64_t *)(param_1 + 0x108) + 0x10);
              if (*(int *)(*(int64_t *)(param_1 + 0x100) + 0x98d930) == iVar7) {
                lVar22 = (int64_t)(int)plVar19[0x1e] * 0xa0;
                if ((*(uint *)(lVar22 + 0x50 + plVar19[0x1a]) >> 0xc & 1) == 0) {
                  if (iStack_4a0 != 0) goto LAB_1805a05b9;
                }
                else if (iStack_4a0 != 1) goto LAB_1805a05b9;
                local_var_4b0 = 0;
                local_var_4b8 = 0;
                local_var_4c0 = 0;
                local_var_4c8 = 0xffffffff;
                local_var_4d8 = 0;
                iStack_4d0 = iVar7;
                function_4f83f0(*(int64_t *)(param_1 + 0x100),
                              *(int32_t *)
                               ((int64_t)*(int *)(lVar22 + 100 + plVar19[0x1a]) * 0x170 + 0x160 +
                               render_system_memory),
                              *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x20) + 0xc,
                              CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1));
              }
            }
          }
        }
        goto LAB_1805a05b9;
      }
LAB_18059f875:
      if ((*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) == 2) && (system_status_flag == 1)) {
        puVar15 = (uint *)(*(int64_t *)(param_1 + 0x108) + 0x4c8);
        *puVar15 = *puVar15 | 0x3c0;
      }
      goto LAB_1805a05b9;
    }
    if (iVar7 != 4) {
      if (iVar7 == 2) {
        if ((*(uint *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) >> 8 & 1) != 0) {
          plVar19 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
          if (((int)plVar19[0x493] != -1) &&
             (*(int *)((int64_t)(int)plVar19[0x493] * 0x68 + 0x58 + render_system_memory) == 0x11)) {
            lVar22 = (**(code **)(*plVar19 + 0x128))(plVar19,1);
            fVar26 = *(float *)(lVar22 + 0x1d8);
            if ((*(int *)(*(int64_t *)(param_1 + 0x108) + 0x570) == 2) ||
               ((system_status_flag != 1 && (system_status_flag != 4)))) {
              function_50aea0();
              lVar22 = *(int64_t *)(param_1 + 0x108);
              if (*(int *)(lVar22 + 0x570) != 0) {
                lVar9 = *(int64_t *)(lVar22 + 0x590);
                fVar28 = *(float *)(lVar9 + 0x258c);
                fVar27 = *(float *)(lVar9 + 0x2588);
                fVar25 = *(float *)(lVar22 + 0x524);
                fVar1 = *(float *)(lVar22 + 0x534);
                uVar8 = *(int32_t *)(lVar9 + 0x2590);
                lVar9 = *(int64_t *)(lVar22 + 0x728);
                *(float *)(lVar9 + 0x5d0) =
                     fVar28 * *(float *)(lVar22 + 0x530) + fVar27 * *(float *)(lVar22 + 0x520);
                *(float *)(lVar9 + 0x5d4) = fVar27 * fVar25 + fVar28 * fVar1;
                *(int32_t *)(lVar9 + 0x5d8) = uVar8;
                *(int32_t *)(lVar9 + 0x5dc) = 0x7f7fffff;
              }
              lVar22 = render_system_memory;
              if (system_status_flag == 1) {
                iVar7 = _Mtx_lock(render_system_memory + 0x4c4e8);
                if (iVar7 != 0) {
                  __Throw_C_error_std__YAXH_Z(iVar7);
                }
                uVar12 = function_5fa9a0(lVar22 + 290000,0x28);
                lVar22 = *(int64_t *)(*(int64_t *)(param_1 + 0x108) + 0x728);
                cVar5 = SystemBufferProcessor(uVar12,0,&processed_var_6432_ptr);
                if ((((cVar5 != '\0') &&
                     (cVar5 = SystemBufferProcessor(uVar12,1,&processed_var_6464_ptr), cVar5 != '\0')) &&
                    (cVar5 = UI_LayoutManager(uVar12,*(int32_t *)(lVar22 + 0x5d0),&processed_var_6400_ptr),
                    cVar5 != '\0')) &&
                   (cVar5 = UI_LayoutManager(uVar12,*(int32_t *)(lVar22 + 0x5d4),&processed_var_6400_ptr),
                   cVar5 != '\0')) {
                  UI_LayoutManager(uVar12,*(int32_t *)(lVar22 + 0x5d8),&processed_var_6416_ptr);
                }
                lVar22 = render_system_memory;
                function_5faa20(render_system_memory + 290000);
                iVar7 = _Mtx_unlock(lVar22 + 0x4c4e8);
                if (iVar7 != 0) {
                  __Throw_C_error_std__YAXH_Z(iVar7);
                }
              }
            }
            plVar19 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
            fVar28 = (float)(**(code **)(*plVar19 + 0x90))(plVar19,1);
            if (fVar26 <= fVar28) {
              *plocal_var_480 = 3;
            }
            goto LAB_1805a05b9;
          }
        }
        function_5b1d30(param_1 + 0x110,lVar17);
        *(uint64_t *)(param_1 + 600) = 0;
        *(uint64_t *)(param_1 + 0x268) = 0;
      }
      else if (iVar7 == 5) {
        plVar19 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
        iVar7 = SystemFunction_0001805078c0(plVar19,1);
        if ((iVar7 == 0x11) &&
           (fVar26 = (float)(**(code **)(*plVar19 + 0x90))(plVar19,1), 0.99 < fVar26)) {
          function_5a7450(param_1,lVar17);
        }
      }
      goto LAB_1805a05b9;
    }
    plVar3 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590);
    iVar7 = (int)plVar3[0x493];
    if ((iVar7 == -1) || (*(int *)((int64_t)iVar7 * 0x68 + 0x58 + render_system_memory) != 0x12))
    goto LAB_18059f8a5;
    cVar5 = *(char *)((int64_t)iVar7 * 0x68 + 0x60 + render_system_memory);
    lVar22 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
    fVar26 = *(float *)(lVar22 + 0x1d8);
    if (*(float *)(lVar22 + 0x1d8) <= *(float *)(lVar22 + 0x1dc)) {
      fVar26 = *(float *)(lVar22 + 0x1dc);
    }
    if (fVar26 == 0.0) {
      fVar26 = 0.9;
    }
    lVar9 = *(int64_t *)(param_1 + 0x108);
    if ((((*(byte *)(lVar9 + 0x4c4) & 0xb) == 0) &&
        (((*(uint *)(lVar9 + 0x4c8) & 0x7c00) == 0 ||
         ((*(uint64_t *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) & 0x80000) !=
          0)))) &&
       ((*(int *)(lVar9 + 0x570) == 1 ||
        (((-1 < *(int *)(lVar9 + 0x564) ||
          ((((*(uint *)(lVar9 + 0x4c8) & 0xf) == 0 && (*(float *)(lVar9 + 0x4d0) == 0.0)) &&
           (*(float *)(lVar9 + 0x4cc) == 0.0)))) ||
         (uVar20 = SystemFunction_000180534e20(*(uint64_t *)(lVar9 + 0x590),1), (uVar20 >> 0x18 & 1) == 0)
         ))))) {
      plVar3 = *(int64_t **)(lVar9 + 0x590);
      if ((*(float *)(plVar3[0x255] + 0x30) < fVar26) &&
         (fVar28 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1), fVar26 <= fVar28)) {
        if ((system_status_flag == 1) || (system_status_flag == 4)) {
          function_540440(*(uint64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8),
                        *(int64_t *)(param_1 + 0x108));
        }
        else {
          uVar12 = *(uint64_t *)(*(int64_t *)(param_1 + 0x108) + 0x8f8);
          lVar9 = lStack_448 + 8;
          lStack_498 = lVar9;
          iVar7 = _Mtx_lock(lVar9);
          if (iVar7 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar7);
          }
          iVar7 = iStack_4a4;
          if (cVar5 == '\x03') {
            sVar18 = *(short *)((int64_t)plVar19 + 10) + 1;
LAB_18059fb1d:
            function_537de0(uVar12,iVar7,sVar18);
          }
          else if (cVar5 == '\x04') {
            lVar17 = (int64_t)(int)plVar19[0x1e] * 0xa0;
            uVar20 = *(uint64_t *)(lVar17 + 0x50 + plVar19[0x1a]);
            if ((uVar20 >> 8 & 1) == 0) {
              if ((uVar20 >> 0xc & 1) == 0) {
                if (*plVar19 != 0) {
                  uVar11 = (uint64_t)*(ushort *)(*plVar19 + 8);
                }
                uVar6 = function_50e990(*(uint64_t *)(param_1 + 0x108),
                                      *(short *)(lVar17 + 0x94 + plVar19[0x1a]) - (short)uVar11,
                                      &local_var_484);
                iVar7 = iStack_4a4;
                function_537230(uVar12,iStack_4a4,local_var_484,uVar6);
              }
              else {
                uVar8 = function_537ef0(uVar12,plVar19);
                iVar7 = iStack_4a4;
                function_537230(uVar12,iStack_4a4,uVar8,1);
              }
            }
            sVar18 = *(short *)((int64_t)(int)plVar19[0x1e] * 0xa0 + 0x96 + plVar19[0x1a]);
            goto LAB_18059fb1d;
          }
          iVar7 = _Mtx_unlock(lVar9);
          if (iVar7 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar7);
          }
        }
      }
    }
    else {
      if ((system_status_flag != 1) && (system_status_flag != 4)) {
        local_var_278 = 0;
        local_var_2c0 = 0xffffffffffffffff;
        local_var_2b8 = 0;
        local_var_2b0 = 0;
        local_var_2a8 = 0;
        local_var_2a0 = 0;
        local_var_298 = 0;
        local_var_294 = 0x3f800000;
        local_var_290 = 0xbe4ccccd;
        local_var_28c = 0xbe4ccccd;
        local_var_288 = 0x3ecccccd;
        local_var_280 = 0x100;
        local_var_274 = 6;
        local_var_270 = 0xffffffff;
        local_var_26c = 0;
        local_var_268 = 0;
        local_var_264 = 0;
        local_var_260 = 0;
        local_var_25c = 0;
        local_var_258 = 0;
        local_var_254 = 0;
        local_var_250 = 0;
        local_var_248 = 0xffffffffffffffff;
        local_var_240 = 0xff;
        local_var_23c = 0;
        local_var_24c = 0xffffffff;
        local_var_234 = 0x3f800000;
        UISystem_InputHandler(param_1,1,&local_var_2c0);
      }
      function_5b1d30(param_1 + 0x110,lVar17);
      *(uint64_t *)(param_1 + 600) = 0;
      *(uint64_t *)(param_1 + 0x268) = 0;
    }
    if (cVar5 != '\x04') goto LAB_1805a05b9;
    iVar7 = (int)plVar19[0x1e];
    lVar9 = plVar19[0x1a];
    if ((*(uint *)((int64_t)iVar7 * 0xa0 + 0x50 + lVar9) >> 8 & 1) != 0) {
      function_540440(*(uint64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8),
                    *(int64_t *)(param_1 + 0x108));
      iVar7 = (int)plVar19[0x1e];
      lVar9 = plVar19[0x1a];
    }
    if ((((*(uint *)((int64_t)iVar7 * 0xa0 + 0x50 + lVar9) >> 0xc & 1) != 0) ||
        (plVar19 = *(int64_t **)(*(int64_t *)(param_1 + 0x108) + 0x590),
        *(float *)(lVar22 + 0x1d8) < *(float *)(plVar19[0x255] + 0x30) ||
        *(float *)(lVar22 + 0x1d8) == *(float *)(plVar19[0x255] + 0x30))) ||
       (fVar26 = (float)(**(code **)(*plVar19 + 0x90))(plVar19,1),
       fVar26 < *(float *)(lVar22 + 0x1d8))) goto LAB_1805a05b9;
LAB_18059fcf8:
    function_540440(*(uint64_t *)(*(int64_t *)(param_1 + 0x108) + 0x6d8),
                  *(int64_t *)(param_1 + 0x108));
  }
LAB_1805a05b9:
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_a8 ^ (uint64_t)stack_array_4f8);
}