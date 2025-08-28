#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part609_sub002_sub002.c - 1 个函数

// 函数: void FUN_18059ea80(longlong param_1,uint64_t param_2,longlong param_3,int32_t *param_4)
void FUN_18059ea80(longlong param_1,uint64_t param_2,longlong param_3,int32_t *param_4)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  int32_t *puVar4;
  char cVar5;
  int16_t uVar6;
  int iVar7;
  int32_t uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint64_t uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  short sVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int32_t uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t auStack_4f8 [32];
  int8_t uStack_4d8;
  int iStack_4d0;
  int32_t uStack_4c8;
  uint64_t uStack_4c0;
  uint64_t uStack_4b8;
  int32_t uStack_4b0;
  int iStack_4a4;
  int iStack_4a0;
  longlong lStack_498;
  int iStack_488;
  int32_t uStack_484;
  int32_t *puStack_480;
  int32_t uStack_478;
  int iStack_474;
  uint64_t uStack_470;
  float fStack_468;
  int32_t uStack_464;
  float fStack_460;
  int32_t uStack_45c;
  int32_t uStack_458;
  int32_t uStack_454;
  int32_t uStack_450;
  int8_t uStack_44c;
  longlong lStack_448;
  int32_t uStack_440;
  int32_t uStack_43c;
  uint64_t uStack_438;
  int32_t uStack_430;
  int32_t uStack_42c;
  int32_t uStack_428;
  int32_t uStack_424;
  int32_t uStack_420;
  int32_t uStack_41c;
  int32_t uStack_418;
  int8_t uStack_414;
  int32_t uStack_410;
  int32_t uStack_40c;
  uint64_t uStack_408;
  uint64_t uStack_400;
  uint64_t uStack_3f8;
  int32_t uStack_3f0;
  int32_t uStack_3ec;
  int8_t uStack_3e8;
  int32_t uStack_3e7;
  uint64_t uStack_3e0;
  int32_t uStack_3d8;
  uint64_t uStack_3d0;
  uint64_t uStack_3c8;
  uint64_t uStack_3c0;
  int32_t uStack_3b8;
  int32_t uStack_3b4;
  int32_t uStack_3b0;
  int32_t uStack_3ac;
  uint64_t uStack_3a8;
  int16_t uStack_3a0;
  int8_t uStack_398;
  int32_t uStack_394;
  int32_t uStack_390;
  int32_t uStack_38c;
  int32_t uStack_388;
  int32_t uStack_384;
  int32_t uStack_380;
  int32_t uStack_37c;
  int32_t uStack_378;
  int32_t uStack_374;
  int32_t uStack_370;
  int32_t uStack_36c;
  uint64_t uStack_368;
  int8_t uStack_360;
  uint64_t uStack_35c;
  int32_t uStack_354;
  uint64_t uStack_350;
  int32_t uStack_348;
  uint64_t uStack_340;
  uint64_t uStack_338;
  uint64_t uStack_330;
  int32_t uStack_328;
  int32_t uStack_324;
  int32_t uStack_320;
  int32_t uStack_31c;
  uint64_t uStack_318;
  int16_t uStack_310;
  int8_t uStack_308;
  int32_t uStack_304;
  int32_t uStack_300;
  int32_t uStack_2fc;
  int32_t uStack_2f8;
  int32_t uStack_2f4;
  int32_t uStack_2f0;
  int32_t uStack_2ec;
  int32_t uStack_2e8;
  int32_t uStack_2e4;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  uint64_t uStack_2d8;
  int8_t uStack_2d0;
  uint64_t uStack_2cc;
  int32_t uStack_2c4;
  uint64_t uStack_2c0;
  int32_t uStack_2b8;
  uint64_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  int32_t uStack_298;
  int32_t uStack_294;
  int32_t uStack_290;
  int32_t uStack_28c;
  uint64_t uStack_288;
  int16_t uStack_280;
  int8_t uStack_278;
  int32_t uStack_274;
  int32_t uStack_270;
  int32_t uStack_26c;
  int32_t uStack_268;
  int32_t uStack_264;
  int32_t uStack_260;
  int32_t uStack_25c;
  int32_t uStack_258;
  int32_t uStack_254;
  int32_t uStack_250;
  int32_t uStack_24c;
  uint64_t uStack_248;
  int8_t uStack_240;
  uint64_t uStack_23c;
  int32_t uStack_234;
  uint64_t uStack_230;
  int32_t uStack_228;
  uint64_t uStack_220;
  uint64_t uStack_218;
  uint64_t uStack_210;
  int32_t uStack_208;
  int32_t uStack_204;
  int32_t uStack_200;
  int32_t uStack_1fc;
  uint64_t uStack_1f8;
  int16_t uStack_1f0;
  int8_t uStack_1e8;
  int iStack_1e4;
  int32_t uStack_1e0;
  int32_t uStack_1dc;
  int32_t uStack_1d8;
  int32_t uStack_1d4;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  int32_t uStack_1c8;
  int32_t uStack_1c4;
  int32_t uStack_1c0;
  int32_t uStack_1bc;
  uint64_t uStack_1b8;
  int8_t uStack_1b0;
  uint64_t uStack_1ac;
  int32_t uStack_1a4;
  uint64_t uStack_1a0;
  int32_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  uint64_t uStack_168;
  int16_t uStack_160;
  int8_t uStack_158;
  int32_t uStack_154;
  int32_t uStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  int32_t uStack_12c;
  uint64_t uStack_128;
  int8_t uStack_120;
  uint64_t uStack_11c;
  int32_t uStack_114;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  ulonglong uStack_a8;
  
  uStack_110 = 0xfffffffffffffffe;
  uStack_a8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_4f8;
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
  plVar19 = *(longlong **)(lVar22 + 0x9e8);
  iVar7 = *(int *)(lVar22 + 0x9e0);
  lVar22 = (longlong)iVar7;
  lVar17 = (longlong)*(int *)((longlong)(int)plVar19[0x1e] * 0xa0 + 100 + plVar19[0x1a]) * 0x170 +
           _DAT_180c95ff0;
  iStack_4a0 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x638);
  iStack_4a4 = iVar7;
  iStack_488 = iStack_4a0;
  puStack_480 = param_4;
  lStack_448 = param_3;
  lVar9 = FUN_1805a0610(param_1,9);
  *(longlong *)(param_1 + 600) = lVar9;
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
      uVar10 = *(ulonglong *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]);
      if ((uVar10 >> 0x13 & 1) != 0) {
        if ((uVar10 >> 8 & 1) == 0) {
          if ((*plVar19 == 0) || (*(short *)(*plVar19 + 8) < 1)) goto LAB_18059ebf6;
        }
        else if (*(short *)((longlong)plVar19 + 10) == 0) {
LAB_18059ebf6:
          if (((0 < iStack_4a0) &&
              (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590),
              *(int *)(lVar9 + 0x2498) != iVar14)) && (*(int *)(param_1 + 0x1d4) != 4)) {
            uVar10 = func_0x000180534e20(lVar9,0);
            if (*(char *)((longlong)iVar14 * 0x68 + 0x60 + _DAT_180c96150) != '\x03') {
              uVar20 = uVar21;
            }
            if ((uVar10 & uVar20) == 0) {
              uStack_398 = 0;
              uStack_3e0 = 0xffffffffffffffff;
              uStack_3d8 = 0;
              uStack_3d0 = 0;
              uStack_3c8 = 0;
              uStack_3c0 = 0;
              uStack_3b8 = 0;
              uStack_3b4 = 0x3f800000;
              uStack_3b0 = 0xbe4ccccd;
              uStack_3ac = 0xbe4ccccd;
              uStack_3a8 = 0x3ecccccd;
              uStack_3a0 = 0x100;
              uStack_394 = 0xc;
              uStack_390 = 0xffffffff;
              uStack_38c = 0;
              uStack_388 = 0;
              uStack_384 = 0;
              uStack_380 = 0;
              uStack_37c = 0;
              uStack_378 = 0;
              uStack_374 = 0;
              uStack_370 = 0;
              uStack_368 = 0xffffffffffffffff;
              uStack_360 = 0xff;
              uStack_35c = 0;
              uStack_36c = 0xffffffff;
              uStack_354 = 0x3f800000;
              FUN_1805a4a20(param_1,1,&uStack_3e0);
            }
          }
        }
      }
      lVar9 = *(longlong *)(param_1 + 0x108);
      plVar3 = *(longlong **)(lVar9 + 0x590);
      iVar13 = (int)plVar3[0x493];
      fVar27 = 1.0;
      if ((iVar13 == -1) || (*(int *)((longlong)iVar13 * 0x68 + 0x58 + _DAT_180c96150) != 0x12)) {
        uVar20 = *(ulonglong *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]);
        if (((uint)uVar20 & 0xc00) == 0xc00) {
          lVar22 = *(longlong *)(param_1 + 600);
          if (lVar22 != 0) {
            iVar2 = *(int *)(lVar22 + 0x1c);
            if (iVar13 == iVar2) {
              fVar25 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1);
              lVar22 = *(longlong *)(param_1 + 600);
              if (0.9999 <= fVar25) {
                uStack_438 = 0;
                uStack_430 = 0;
                uStack_418 = 0x1000000;
                uStack_428 = 0x3f800000;
                uStack_424 = 0xbe4ccccd;
                uStack_420 = 0xbe4ccccd;
                uStack_41c = 0x3ecccccd;
                uStack_414 = 0;
                uStack_440 = 1;
                if (lVar22 == 0) {
                  uStack_43c = 0xffffffff;
                }
                else {
                  uStack_43c = *(int32_t *)(lVar22 + 0x48);
                }
                uStack_42c = 0x3d4ccccd;
                FUN_18051ec50(*(uint64_t *)(param_1 + 0x108),&uStack_440);
                iVar7 = iStack_4a4;
                goto LAB_18059ef32;
              }
              lVar9 = *(longlong *)(param_1 + 0x108);
            }
            if (lVar22 == 0) {
              iVar13 = -1;
            }
            else {
              iVar13 = *(int *)(lVar22 + 0x48);
            }
            iVar7 = iStack_4a4;
            if (*(int *)(*(longlong *)(lVar9 + 0x590) + 0x2498) == iVar13) {
              lVar9 = FUN_18053a5a0(&system_data_5f30,
                                    *(int32_t *)(*(longlong *)(lVar9 + 0x590) + 0xac),iVar2);
              lVar22 = *(longlong *)(param_1 + 0x108);
              fVar25 = ((float)(*(longlong *)
                                 (&system_error_code + (longlong)*(int *)(param_1 + 0x240) * 8) -
                               *(longlong *)(param_1 + 0x238)) * 1e-05 -
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
              *(float *)(*(longlong *)(lVar22 + 0x590) + 0x24d4) = fVar25 * 0.9 + 0.05;
              iVar7 = iStack_4a4;
            }
          }
LAB_18059ef32:
          fVar25 = 0.0;
          if (*(longlong *)(param_1 + 600) != 0) {
            lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590);
            iVar13 = *(int *)(lVar22 + 0x2498);
            if (iVar13 == -1) {
              if (*(int *)(lVar22 + 0x2450) == -1) {
LAB_18059ef8e:
                puVar15 = (uint *)((longlong)*(char *)(lVar22 + 0x25fb) * 0x100 +
                                  *(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x658) + 0x18));
                do {
                  LOCK();
                  uVar16 = *puVar15;
                  *puVar15 = *puVar15 | 1;
                  UNLOCK();
                } while ((uVar16 & 1) != 0);
                uStack_108 = *(uint64_t *)(puVar15 + 1);
                uStack_100 = *(uint64_t *)(puVar15 + 3);
                uStack_f8 = *(uint64_t *)(puVar15 + 5);
                uStack_f0 = *(uint64_t *)(puVar15 + 7);
                *puVar15 = 0;
                puVar15 = (uint *)((longlong)
                                   *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) +
                                            0x25fc) * 0x100 +
                                  *(longlong *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x658) + 0x18));
                do {
                  LOCK();
                  uVar16 = *puVar15;
                  *puVar15 = *puVar15 | 1;
                  UNLOCK();
                } while ((uVar16 & 1) != 0);
                uStack_c8 = *(uint64_t *)(puVar15 + 1);
                uStack_c0 = *(uint64_t *)(puVar15 + 3);
                fStack_b8 = (float)puVar15[5];
                fStack_b4 = (float)puVar15[6];
                fStack_b0 = (float)puVar15[7];
                uStack_ac = puVar15[8];
                *puVar15 = 0;
                uStack_e8._4_4_ = (float)((ulonglong)uStack_108 >> 0x20);
                uStack_e0._4_4_ = (float)((ulonglong)uStack_100 >> 0x20);
                uStack_e8._0_4_ = (float)uStack_108;
                uStack_e0._0_4_ = (float)uStack_100;
                fVar27 = uStack_e8._4_4_ * uStack_e0._4_4_ - (float)uStack_e8 * (float)uStack_e0;
                uStack_d8._0_4_ = (float)uStack_f8;
                uStack_d8._4_4_ = (float)((ulonglong)uStack_f8 >> 0x20);
                uStack_d0._0_4_ = (float)uStack_f0;
                fVar25 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x6d8) + 0x8c0) *
                         (((((float)uStack_e0 * (float)uStack_e0 +
                             (float)uStack_e0 * (float)uStack_e0 +
                            uStack_e0._4_4_ * uStack_e0._4_4_ + uStack_e0._4_4_ * uStack_e0._4_4_) -
                           1.0) * (fStack_b8 - (float)uStack_d8) -
                          ((float)uStack_e0 * uStack_e8._4_4_ + (float)uStack_e0 * uStack_e8._4_4_ +
                          (float)uStack_e8 * uStack_e0._4_4_ + (float)uStack_e8 * uStack_e0._4_4_) *
                          (fStack_b4 - uStack_d8._4_4_)) -
                         (fVar27 + fVar27) * (fStack_b0 - (float)uStack_d0)) - _DAT_180c964c8;
                if (fVar25 <= 0.0) {
                  fVar25 = 0.0;
                }
                fVar25 = fVar25 * _DAT_180c964cc;
                iStack_4a0 = iStack_488;
                uStack_e8 = uStack_108;
                uStack_e0 = uStack_100;
                uStack_d8 = uStack_f8;
                uStack_d0 = uStack_f0;
              }
            }
            else if ((*(int *)((longlong)iVar13 * 0x68 + 0x58 + _DAT_180c96150) == 0x23) ||
                    (*(char *)((longlong)iVar13 * 0x68 + 0x60 + _DAT_180c96150) == '\0'))
            goto LAB_18059ef8e;
          }
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
          lVar22 = (longlong)iVar7;
LAB_18059f107:
          lVar22 = *(longlong *)(lVar22 * 0x1f8 + 0x100 + lVar9);
          fVar27 = fVar25;
        }
        else {
          if ((uVar20 >> 10 & 1) == 0) goto LAB_18059f15f;
          if (*(short *)((longlong)plVar19 + 10) < 1) {
            fVar27 = 0.0;
            lVar22 = *(longlong *)(lVar22 * 0x1f8 + 0x100 + *(longlong *)(lVar9 + 0x8f8));
          }
          else {
            lVar22 = *(longlong *)(lVar22 * 0x1f8 + 0x100 + *(longlong *)(lVar9 + 0x8f8));
          }
        }
        if (lVar22 != 0) {
          *(float *)(lVar22 + 0x90) = fVar27;
        }
      }
      else {
        lVar9 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
        if (((int)plVar3[0x493] != -1) &&
           (*(char *)((longlong)(int)plVar3[0x493] * 0x68 + 0x60 + _DAT_180c96150) == '\x03')) {
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
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
            goto LAB_18059f107;
          }
        }
      }
    }
  }
LAB_18059f15f:
  if (((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x200) * 8) -
              *(longlong *)(param_1 + 0x1f8)) * 1e-05 < 0.0) && (_DAT_180c92514 == 1)) {
    puVar15 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
    *puVar15 = *puVar15 & 0xfffffc3f;
  }
  iVar7 = *(int *)(param_1 + 0x1d4);
  if ((iVar7 == 0) || (iVar7 == 7)) {
    if ((((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x200) * 8) -
                 *(longlong *)(param_1 + 0x1f8)) * 1e-05 < 0.0) ||
        (uVar16 = *(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8), (uVar16 & 0x3c0) == 0)) ||
       ((uVar16 & 0x7c00) != 0)) {
      if ((((*(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8) & 0x7c00) != 0) &&
          (*(int32_t **)(param_1 + 600) != (int32_t *)0x0)) &&
         (*(int *)(param_1 + 0x1e0) == -1)) {
        iVar7 = FUN_1805b2220(param_1 + 0x110,**(int32_t **)(param_1 + 600),0);
        *(int *)(param_1 + 0x1e0) = iVar7;
        if (iVar7 != -1) {
          func_0x0001805b2480(param_1 + 0x110);
        }
        *(int32_t *)(param_1 + 0x278) = 0xc0000000;
      }
      goto LAB_1805a05b9;
    }
    if (iVar7 == 7) {
      uStack_1e8 = 0;
      uStack_230 = 0xffffffffffffffff;
      uStack_228 = 0;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      uStack_204 = 0x3f800000;
      uStack_200 = 0xbe4ccccd;
      uStack_1fc = 0xbe4ccccd;
      uStack_1f8 = 0x3ecccccd;
      uStack_1f0 = 0x100;
      uStack_1e0 = 0xffffffff;
      uStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0xffffffffffffffff;
      uStack_1b0 = 0xff;
      uStack_1ac = 0;
      uStack_1bc = 0xffffffff;
      uStack_1a4 = 0x3f800000;
      iStack_1e4 = iVar7;
      FUN_1805a4a20(param_1,1,&uStack_230,1);
    }
    lVar9 = (longlong)(int)plVar19[0x1e] * 0xa0;
    lVar22 = plVar19[0x1a];
    if ((*(short *)(lVar9 + 0x94 + lVar22) < 1) ||
       (cVar5 = func_0x0001805a7970(plVar19), cVar5 != '\0')) {
      lVar22 = *(longlong *)(param_1 + 0x108);
      if ((((*(int *)(lVar22 + 0x570) != 2) ||
           (0.0 <= (float)(*(longlong *)
                            (&system_error_code +
                            (longlong)*(int *)(*(longlong *)(param_1 + 0x100) + 0x87b708) * 8) -
                          *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x87b700)) * 1e-05)) &&
          ((iVar14 == -1 || (*(int *)(*(longlong *)(lVar22 + 0x590) + 0x2498) != iVar14)))) &&
         ((0 < iStack_4a0 || (cVar5 = func_0x0001805a7970(plVar19), cVar5 != '\0')))) {
        plVar19 = *(longlong **)(lVar22 + 0x590);
        if (((int)plVar19[0x493] != -1) &&
           (*(int *)((longlong)(int)plVar19[0x493] * 0x68 + 0x58 + _DAT_180c96150) == 0x23)) {
          fVar28 = (float)(**(code **)(*plVar19 + 0xa0))(plVar19,1);
        }
        if ((*(longlong *)(param_1 + 600) != 0) &&
           (iVar7 = *(int *)(*(longlong *)(param_1 + 600) + 0x1c), iVar7 != -1)) {
          lVar22 = *(longlong *)(param_1 + 0x1c8);
          lVar9 = *(longlong *)(*(longlong *)(lVar22 + 0x8f8) + 0x9e8);
          if (lVar9 != 0) {
            fVar26 = (float)*(int *)((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x68 +
                                    *(longlong *)(lVar9 + 0xd0)) * 0.01;
          }
          uStack_470 = 0;
          uStack_450 = 0x1000000;
          uStack_464 = 0;
          uStack_45c = 0xbe4ccccd;
          uStack_458 = 0xbe4ccccd;
          uStack_454 = 0x3ecccccd;
          uStack_44c = 0;
          uStack_478 = 1;
          fStack_460 = *(float *)(lVar22 + 0x3ac) * fVar26;
          iStack_474 = iVar7;
          fStack_468 = fVar28 * 0.4;
          cVar5 = FUN_18051ec50(lVar22,&uStack_478);
          if (cVar5 != '\0') {
            *(int32_t *)(param_1 + 0x1d4) = 1;
            *(int32_t *)(param_1 + 0x54) = 0xffff;
            *(int32_t *)(param_1 + 0x44) = 0x3f800000;
            *(uint64_t *)(param_1 + 0x4c) = 0xffffffffbf800000;
            *(int8_t *)(param_1 + 0x40) = 0;
            *(int32_t *)(param_1 + 0x88) = 0xf149f2ca;
            *(int32_t *)(param_1 + 200) = 0xf149f2ca;
            *(int8_t *)(param_1 + 0xd8) = 0xff;
            if (*(longlong *)(param_1 + 600) != 0) {
              uVar8 = *(int32_t *)(*(longlong *)(param_1 + 600) + 0x1c);
            }
            lVar22 = FUN_18053a5a0(&system_data_5f30,
                                   *(int32_t *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0xac),
                                   uVar8);
            *(longlong *)(param_1 + 0x238) =
                 *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x240) * 8) -
                 (longlong)(fVar28 * 0.4 * *(float *)(lVar22 + 0x188) * 100000.0);
            goto LAB_1805a05b9;
          }
        }
      }
    }
    else if (((0 < iStack_4a0) && (iVar14 != -1)) &&
            (lVar17 = *(longlong *)(param_1 + 0x108), (*(uint *)(lVar17 + 0x4c8) & 0x7c00) == 0)) {
      iVar7 = *(int *)(lVar17 + 0x564);
      if (iVar7 < 0) {
        uVar20 = func_0x000180534e20(*(uint64_t *)(lVar17 + 0x590),0);
        if ((uVar20 & 0x3000000000) == 0) goto LAB_1805a01a8;
      }
      else if ((((*(uint *)(lVar17 + 0x56c) & 0x2000000) != 0) ||
               ((*(uint *)(lVar9 + 0x50 + lVar22) >> 0x12 & 1) == 0)) ||
              (0 < *(short *)((longlong)plVar19 + 10))) {
LAB_1805a01a8:
        if ((iVar7 < 0) ||
           (uVar20 = func_0x000180534e20(*(uint64_t *)(lVar17 + 0x590),0),
           (uVar20 & 0x2000000000) == 0)) {
          lVar22 = FUN_18053a5a0(&system_data_5f30,
                                 *(int32_t *)(*(longlong *)(lVar17 + 0x590) + 0xac),iVar14);
          if (0 < *(short *)((longlong)plVar19 + 10)) {
            do {
              lVar22 = FUN_18053a5a0(&system_data_5f30,
                                     *(int32_t *)
                                      (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0xac)
                                     ,*(int32_t *)(lVar22 + 0x1f0));
              uVar16 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar16;
            } while ((int)uVar16 < (int)*(short *)((longlong)plVar19 + 10));
          }
          lVar9 = *(longlong *)(param_1 + 0x108);
          if (((*(int *)(lVar9 + 0x570) == 1) || (-1 < *(int *)(lVar9 + 0x564))) ||
             ((((*(byte *)(lVar9 + 0x4c8) & 0xf) == 0 &&
               ((*(float *)(lVar9 + 0x4d0) == 0.0 && (*(float *)(lVar9 + 0x4cc) == 0.0)))) ||
              ((*(uint *)(lVar22 + 0x1d0) >> 0x18 & 1) == 0)))) {
            uStack_158 = 0;
            uStack_1a0 = 0xffffffffffffffff;
            uStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_178 = 0;
            uStack_174 = 0x3f800000;
            uStack_170 = 0xbe4ccccd;
            uStack_16c = 0xbe4ccccd;
            uStack_168 = 0x3ecccccd;
            uStack_160 = 0x100;
            uStack_154 = 0xc;
            uStack_150 = 0xffffffff;
            uStack_14c = 0;
            uStack_148 = 0;
            uStack_144 = 0;
            uStack_140 = 0;
            uStack_13c = 0;
            uStack_138 = 0;
            uStack_134 = 0;
            uStack_130 = 0;
            uStack_128 = 0xffffffffffffffff;
            uStack_120 = 0xff;
            uStack_11c = 0;
            uStack_12c = 0xffffffff;
            uStack_114 = 0x3f800000;
            FUN_1805a4a20(param_1,1,&uStack_1a0);
            if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) goto LAB_1805a05b9;
            goto LAB_18059fcf8;
          }
        }
      }
    }
    puVar15 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
    *puVar15 = *puVar15 & 0xfffffc3f;
  }
  else {
    if (iVar7 == 1) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
      iVar7 = (int)plVar3[0x493];
      if (((iVar7 == -1) || (*(char *)((longlong)iVar7 * 0x68 + 0x60 + _DAT_180c96150) != '\0')) ||
         (((*(uint *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) >> 8 & 1) == 0 &&
          ((*plVar19 == 0 || (*(short *)(*plVar19 + 8) == 0)))))) {
LAB_18059f8a5:
        FUN_1805a79c0(param_1,lVar17);
        goto LAB_1805a05b9;
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8) & 0x7c00) != 0) {
        uStack_308 = 0;
        uStack_350 = 0xffffffffffffffff;
        uStack_348 = 0;
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0;
        uStack_328 = 0;
        uStack_324 = 0x3f800000;
        uStack_320 = 0xbe4ccccd;
        uStack_31c = 0xbe4ccccd;
        uStack_318 = 0x3ecccccd;
        uStack_310 = 0x100;
        uStack_304 = 6;
        uStack_300 = 0xffffffff;
        uStack_2fc = 0;
        uStack_2f8 = 0;
        uStack_2f4 = 0;
        uStack_2f0 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        uStack_2e4 = 0;
        uStack_2e0 = 0;
        uStack_2d8 = 0xffffffffffffffff;
        uStack_2d0 = 0xff;
        uStack_2cc = 0;
        uStack_2dc = 0xffffffff;
        uStack_2c4 = 0x3f800000;
        FUN_1805a4a20(param_1,1,&uStack_350);
        goto LAB_1805a05b9;
      }
      if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
        if (*(longlong *)(param_1 + 600) == 0) {
          iVar14 = -1;
        }
        else {
          iVar14 = *(int *)(*(longlong *)(param_1 + 600) + 0x48);
        }
        if (((iVar7 == iVar14) ||
            (fVar26 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1), uVar11 = 0, 0.7 < fVar26)) &&
           (uVar11 = FUN_18053a5a0(&system_data_5f30,
                                   *(int32_t *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0xac),
                                   *(int32_t *)(*(longlong *)(param_1 + 600) + 0x34)),
           *(float *)(uVar11 + 0x1d8) <= 0.05 && *(float *)(uVar11 + 0x1d8) != 0.05)) {
          FUN_18050aea0(*(uint64_t *)(param_1 + 0x108));
        }
      }
      lVar22 = *(longlong *)(param_1 + 0x108);
      if ((*(int *)(lVar22 + 0x570) == 0) && (_DAT_180c92514 - 2U < 2)) {
        if (((*(char *)(*(longlong *)(lVar22 + 0x728) + 0x5b8) != '\0') &&
            (*(longlong *)(param_1 + 600) != 0)) &&
           ((plVar3 = *(longlong **)(lVar22 + 0x590),
            (int)plVar3[0x493] == *(int *)(*(longlong *)(param_1 + 600) + 0x48) ||
            (fVar26 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1), 0.9 < fVar26)))) {
          *(int8_t *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728) + 0x5b8) = 0;
          goto LAB_18059f47b;
        }
      }
      else if (((*(uint *)(lVar22 + 0x4c8) & 0x3c0) == 0) && (*(longlong *)(param_1 + 600) != 0)) {
        fVar26 = (float)(**(code **)(**(longlong **)(lVar22 + 0x590) + 0x90))
                                  (*(longlong **)(lVar22 + 0x590),1);
        if (fVar26 <= 0.99) {
          if (*(longlong *)(param_1 + 600) == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = *(int *)(*(longlong *)(param_1 + 600) + 0x48);
          }
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0x2498) != iVar7)
          goto LAB_18059f875;
        }
LAB_18059f47b:
        if ((*(int *)(*(longlong *)(param_1 + 0x108) + 0x570) == 2) ||
           ((_DAT_180c92514 != 1 && (_DAT_180c92514 != 4)))) {
          if (uVar11 == 0) {
            uVar11 = FUN_18053a5a0(&system_data_5f30,
                                   *(int32_t *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x590) + 0xac),
                                   *(int32_t *)(*(longlong *)(param_1 + 600) + 0x34));
          }
          fVar26 = *(float *)(uVar11 + 0x1d8);
          if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
            uStack_3e8 = 1;
          }
          else {
            uStack_3e8 = 0;
          }
          iVar7 = *(int *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x5c + plVar19[0x1a]);
          puVar4 = *(int32_t **)(param_1 + 600);
          if (puVar4 == (int32_t *)0x0) {
            uStack_40c = 0xffffffff;
          }
          else {
            uStack_40c = puVar4[0xd];
          }
          uStack_408 = 0;
          uStack_400 = 0;
          uStack_3f8 = 0xbe4ccccd3f800000;
          uStack_3f0 = 0xbe4ccccd;
          uStack_3ec = 0x3ecccccd;
          uStack_3e7 = 0x10000;
          uStack_410 = 1;
          cVar5 = FUN_18051ec50(*(uint64_t *)(param_1 + 0x1c8),&uStack_410);
          if (cVar5 != '\0') {
            if (iVar7 == 0xf) {
              iVar7 = FUN_1805b2220(param_1 + 0x110,*puVar4,0);
              *(int *)(param_1 + 0x1e0) = iVar7;
              if (iVar7 != -1) {
                func_0x0001805b2480(param_1 + 0x110);
              }
              *(int32_t *)(param_1 + 0x1d4) = 5;
            }
            else {
              if (0.0 < fVar26) {
                uVar23 = 2;
              }
              *(int32_t *)(param_1 + 0x1d4) = uVar23;
            }
            FUN_18050aea0(*(uint64_t *)(param_1 + 0x108));
            lVar22 = *(longlong *)(param_1 + 0x108);
            if (*(int *)(lVar22 + 0x570) == 2) {
              lVar9 = *(longlong *)(lVar22 + 0x590);
              fVar26 = *(float *)(lVar9 + 0x258c);
              fVar28 = *(float *)(lVar9 + 0x2588);
              fVar27 = *(float *)(lVar22 + 0x524);
              fVar25 = *(float *)(lVar22 + 0x534);
              uVar8 = *(int32_t *)(lVar9 + 0x2590);
              lVar9 = *(longlong *)(lVar22 + 0x728);
              *(float *)(lVar9 + 0x5d0) =
                   fVar26 * *(float *)(lVar22 + 0x530) + fVar28 * *(float *)(lVar22 + 0x520);
              *(float *)(lVar9 + 0x5d4) = fVar28 * fVar27 + fVar26 * fVar25;
              *(int32_t *)(lVar9 + 0x5d8) = uVar8;
              *(int32_t *)(lVar9 + 0x5dc) = 0x7f7fffff;
            }
            else if (*(int *)(lVar22 + 0x570) != 0) {
              lVar22 = *(longlong *)(lVar22 + 0x728);
              *(uint64_t *)(lVar22 + 0x5d0) = 0;
              *(uint64_t *)(lVar22 + 0x5d8) = 0;
            }
            lVar22 = _DAT_180c92590;
            if (_DAT_180c92514 == 1) {
              iVar7 = _Mtx_lock(_DAT_180c92590 + 0x4c4e8);
              if (iVar7 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar7);
              }
              uVar12 = FUN_1805fa9a0(lVar22 + 290000,0x28);
              lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728);
              uVar8 = *(int32_t *)(*(longlong *)(param_1 + 0x100) + 0x87b758);
              cVar5 = FUN_180645c10(uVar12,0,&unknown_var_6432_ptr);
              if ((((cVar5 != '\0') &&
                   (cVar5 = FUN_180645c10(uVar12,0,&unknown_var_6464_ptr), cVar5 != '\0')) &&
                  (cVar5 = FUN_180645c10(uVar12,uVar8,&unknown_var_6384_ptr), cVar5 != '\0')) &&
                 ((cVar5 = FUN_180645fa0(uVar12,*(int32_t *)(lVar22 + 0x5d0),&unknown_var_6400_ptr),
                  cVar5 != '\0' &&
                  (cVar5 = FUN_180645fa0(uVar12,*(int32_t *)(lVar22 + 0x5d4),&unknown_var_6400_ptr),
                  cVar5 != '\0')))) {
                FUN_180645fa0(uVar12,*(int32_t *)(lVar22 + 0x5d8),&unknown_var_6416_ptr);
              }
              lVar22 = _DAT_180c92590;
              FUN_1805faa20(_DAT_180c92590 + 290000);
              iVar7 = _Mtx_unlock(lVar22 + 0x4c4e8);
              if (iVar7 != 0) {
                __Throw_C_error_std__YAXH_Z(iVar7);
              }
            }
            if ((*(uint *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) >> 8 & 1) ==
                0) {
              *puStack_480 = 3;
              iVar7 = *(int *)(*(longlong *)(param_1 + 0x108) + 0x10);
              if (*(int *)(*(longlong *)(param_1 + 0x100) + 0x98d930) == iVar7) {
                lVar22 = (longlong)(int)plVar19[0x1e] * 0xa0;
                if ((*(uint *)(lVar22 + 0x50 + plVar19[0x1a]) >> 0xc & 1) == 0) {
                  if (iStack_4a0 != 0) goto LAB_1805a05b9;
                }
                else if (iStack_4a0 != 1) goto LAB_1805a05b9;
                uStack_4b0 = 0;
                uStack_4b8 = 0;
                uStack_4c0 = 0;
                uStack_4c8 = 0xffffffff;
                uStack_4d8 = 0;
                iStack_4d0 = iVar7;
                FUN_1804f83f0(*(longlong *)(param_1 + 0x100),
                              *(int32_t *)
                               ((longlong)*(int *)(lVar22 + 100 + plVar19[0x1a]) * 0x170 + 0x160 +
                               _DAT_180c95ff0),
                              *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20) + 0xc,
                              CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1));
              }
            }
          }
        }
        goto LAB_1805a05b9;
      }
LAB_18059f875:
      if ((*(int *)(*(longlong *)(param_1 + 0x108) + 0x570) == 2) && (_DAT_180c92514 == 1)) {
        puVar15 = (uint *)(*(longlong *)(param_1 + 0x108) + 0x4c8);
        *puVar15 = *puVar15 | 0x3c0;
      }
      goto LAB_1805a05b9;
    }
    if (iVar7 != 4) {
      if (iVar7 == 2) {
        if ((*(uint *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) >> 8 & 1) != 0) {
          plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
          if (((int)plVar19[0x493] != -1) &&
             (*(int *)((longlong)(int)plVar19[0x493] * 0x68 + 0x58 + _DAT_180c96150) == 0x11)) {
            lVar22 = (**(code **)(*plVar19 + 0x128))(plVar19,1);
            fVar26 = *(float *)(lVar22 + 0x1d8);
            if ((*(int *)(*(longlong *)(param_1 + 0x108) + 0x570) == 2) ||
               ((_DAT_180c92514 != 1 && (_DAT_180c92514 != 4)))) {
              FUN_18050aea0();
              lVar22 = *(longlong *)(param_1 + 0x108);
              if (*(int *)(lVar22 + 0x570) != 0) {
                lVar9 = *(longlong *)(lVar22 + 0x590);
                fVar28 = *(float *)(lVar9 + 0x258c);
                fVar27 = *(float *)(lVar9 + 0x2588);
                fVar25 = *(float *)(lVar22 + 0x524);
                fVar1 = *(float *)(lVar22 + 0x534);
                uVar8 = *(int32_t *)(lVar9 + 0x2590);
                lVar9 = *(longlong *)(lVar22 + 0x728);
                *(float *)(lVar9 + 0x5d0) =
                     fVar28 * *(float *)(lVar22 + 0x530) + fVar27 * *(float *)(lVar22 + 0x520);
                *(float *)(lVar9 + 0x5d4) = fVar27 * fVar25 + fVar28 * fVar1;
                *(int32_t *)(lVar9 + 0x5d8) = uVar8;
                *(int32_t *)(lVar9 + 0x5dc) = 0x7f7fffff;
              }
              lVar22 = _DAT_180c92590;
              if (_DAT_180c92514 == 1) {
                iVar7 = _Mtx_lock(_DAT_180c92590 + 0x4c4e8);
                if (iVar7 != 0) {
                  __Throw_C_error_std__YAXH_Z(iVar7);
                }
                uVar12 = FUN_1805fa9a0(lVar22 + 290000,0x28);
                lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x728);
                cVar5 = FUN_180645c10(uVar12,0,&unknown_var_6432_ptr);
                if ((((cVar5 != '\0') &&
                     (cVar5 = FUN_180645c10(uVar12,1,&unknown_var_6464_ptr), cVar5 != '\0')) &&
                    (cVar5 = FUN_180645fa0(uVar12,*(int32_t *)(lVar22 + 0x5d0),&unknown_var_6400_ptr),
                    cVar5 != '\0')) &&
                   (cVar5 = FUN_180645fa0(uVar12,*(int32_t *)(lVar22 + 0x5d4),&unknown_var_6400_ptr),
                   cVar5 != '\0')) {
                  FUN_180645fa0(uVar12,*(int32_t *)(lVar22 + 0x5d8),&unknown_var_6416_ptr);
                }
                lVar22 = _DAT_180c92590;
                FUN_1805faa20(_DAT_180c92590 + 290000);
                iVar7 = _Mtx_unlock(lVar22 + 0x4c4e8);
                if (iVar7 != 0) {
                  __Throw_C_error_std__YAXH_Z(iVar7);
                }
              }
            }
            plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
            fVar28 = (float)(**(code **)(*plVar19 + 0x90))(plVar19,1);
            if (fVar26 <= fVar28) {
              *puStack_480 = 3;
            }
            goto LAB_1805a05b9;
          }
        }
        FUN_1805b1d30(param_1 + 0x110,lVar17);
        *(uint64_t *)(param_1 + 600) = 0;
        *(uint64_t *)(param_1 + 0x268) = 0;
      }
      else if (iVar7 == 5) {
        plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
        iVar7 = func_0x0001805078c0(plVar19,1);
        if ((iVar7 == 0x11) &&
           (fVar26 = (float)(**(code **)(*plVar19 + 0x90))(plVar19,1), 0.99 < fVar26)) {
          FUN_1805a7450(param_1,lVar17);
        }
      }
      goto LAB_1805a05b9;
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590);
    iVar7 = (int)plVar3[0x493];
    if ((iVar7 == -1) || (*(int *)((longlong)iVar7 * 0x68 + 0x58 + _DAT_180c96150) != 0x12))
    goto LAB_18059f8a5;
    cVar5 = *(char *)((longlong)iVar7 * 0x68 + 0x60 + _DAT_180c96150);
    lVar22 = (**(code **)(*plVar3 + 0x128))(plVar3,1);
    fVar26 = *(float *)(lVar22 + 0x1d8);
    if (*(float *)(lVar22 + 0x1d8) <= *(float *)(lVar22 + 0x1dc)) {
      fVar26 = *(float *)(lVar22 + 0x1dc);
    }
    if (fVar26 == 0.0) {
      fVar26 = 0.9;
    }
    lVar9 = *(longlong *)(param_1 + 0x108);
    if ((((*(byte *)(lVar9 + 0x4c4) & 0xb) == 0) &&
        (((*(uint *)(lVar9 + 0x4c8) & 0x7c00) == 0 ||
         ((*(ulonglong *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x50 + plVar19[0x1a]) & 0x80000) !=
          0)))) &&
       ((*(int *)(lVar9 + 0x570) == 1 ||
        (((-1 < *(int *)(lVar9 + 0x564) ||
          ((((*(uint *)(lVar9 + 0x4c8) & 0xf) == 0 && (*(float *)(lVar9 + 0x4d0) == 0.0)) &&
           (*(float *)(lVar9 + 0x4cc) == 0.0)))) ||
         (uVar20 = func_0x000180534e20(*(uint64_t *)(lVar9 + 0x590),1), (uVar20 >> 0x18 & 1) == 0)
         ))))) {
      plVar3 = *(longlong **)(lVar9 + 0x590);
      if ((*(float *)(plVar3[0x255] + 0x30) < fVar26) &&
         (fVar28 = (float)(**(code **)(*plVar3 + 0x90))(plVar3,1), fVar26 <= fVar28)) {
        if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) {
          FUN_180540440(*(uint64_t *)(*(longlong *)(param_1 + 0x108) + 0x6d8),
                        *(longlong *)(param_1 + 0x108));
        }
        else {
          uVar12 = *(uint64_t *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
          lVar9 = lStack_448 + 8;
          lStack_498 = lVar9;
          iVar7 = _Mtx_lock(lVar9);
          if (iVar7 != 0) {
            __Throw_C_error_std__YAXH_Z(iVar7);
          }
          iVar7 = iStack_4a4;
          if (cVar5 == '\x03') {
            sVar18 = *(short *)((longlong)plVar19 + 10) + 1;
LAB_18059fb1d:
            FUN_180537de0(uVar12,iVar7,sVar18);
          }
          else if (cVar5 == '\x04') {
            lVar17 = (longlong)(int)plVar19[0x1e] * 0xa0;
            uVar20 = *(ulonglong *)(lVar17 + 0x50 + plVar19[0x1a]);
            if ((uVar20 >> 8 & 1) == 0) {
              if ((uVar20 >> 0xc & 1) == 0) {
                if (*plVar19 != 0) {
                  uVar11 = (ulonglong)*(ushort *)(*plVar19 + 8);
                }
                uVar6 = FUN_18050e990(*(uint64_t *)(param_1 + 0x108),
                                      *(short *)(lVar17 + 0x94 + plVar19[0x1a]) - (short)uVar11,
                                      &uStack_484);
                iVar7 = iStack_4a4;
                FUN_180537230(uVar12,iStack_4a4,uStack_484,uVar6);
              }
              else {
                uVar8 = FUN_180537ef0(uVar12,plVar19);
                iVar7 = iStack_4a4;
                FUN_180537230(uVar12,iStack_4a4,uVar8,1);
              }
            }
            sVar18 = *(short *)((longlong)(int)plVar19[0x1e] * 0xa0 + 0x96 + plVar19[0x1a]);
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
      if ((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) {
        uStack_278 = 0;
        uStack_2c0 = 0xffffffffffffffff;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_294 = 0x3f800000;
        uStack_290 = 0xbe4ccccd;
        uStack_28c = 0xbe4ccccd;
        uStack_288 = 0x3ecccccd;
        uStack_280 = 0x100;
        uStack_274 = 6;
        uStack_270 = 0xffffffff;
        uStack_26c = 0;
        uStack_268 = 0;
        uStack_264 = 0;
        uStack_260 = 0;
        uStack_25c = 0;
        uStack_258 = 0;
        uStack_254 = 0;
        uStack_250 = 0;
        uStack_248 = 0xffffffffffffffff;
        uStack_240 = 0xff;
        uStack_23c = 0;
        uStack_24c = 0xffffffff;
        uStack_234 = 0x3f800000;
        FUN_1805a4a20(param_1,1,&uStack_2c0);
      }
      FUN_1805b1d30(param_1 + 0x110,lVar17);
      *(uint64_t *)(param_1 + 600) = 0;
      *(uint64_t *)(param_1 + 0x268) = 0;
    }
    if (cVar5 != '\x04') goto LAB_1805a05b9;
    iVar7 = (int)plVar19[0x1e];
    lVar9 = plVar19[0x1a];
    if ((*(uint *)((longlong)iVar7 * 0xa0 + 0x50 + lVar9) >> 8 & 1) != 0) {
      FUN_180540440(*(uint64_t *)(*(longlong *)(param_1 + 0x108) + 0x6d8),
                    *(longlong *)(param_1 + 0x108));
      iVar7 = (int)plVar19[0x1e];
      lVar9 = plVar19[0x1a];
    }
    if ((((*(uint *)((longlong)iVar7 * 0xa0 + 0x50 + lVar9) >> 0xc & 1) != 0) ||
        (plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x590),
        *(float *)(lVar22 + 0x1d8) < *(float *)(plVar19[0x255] + 0x30) ||
        *(float *)(lVar22 + 0x1d8) == *(float *)(plVar19[0x255] + 0x30))) ||
       (fVar26 = (float)(**(code **)(*plVar19 + 0x90))(plVar19,1),
       fVar26 < *(float *)(lVar22 + 0x1d8))) goto LAB_1805a05b9;
LAB_18059fcf8:
    FUN_180540440(*(uint64_t *)(*(longlong *)(param_1 + 0x108) + 0x6d8),
                  *(longlong *)(param_1 + 0x108));
  }
LAB_1805a05b9:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_4f8);
}







