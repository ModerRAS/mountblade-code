#include "CoreSystem_AuthenticationHandler0_definition.h"
#include "TaleWorlds.Native.Split.h"

// $fun 的语义化别名
#define $alias_name $fun


// 03_rendering_part312_sub002_sub002.c - 1 个函数

// 函数: void FUN_180433100(int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
void FUN_180433100(int64_t param_1,int64_t param_2,uint64_t *param_3,uint64_t param_4,
                  int64_t param_5,int32_t param_6,int8_t param_7)

{
  int *piVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int8_t uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint64_t uVar11;
  byte bVar12;
  uint uVar13;
  int64_t *plVar14;
  uint *puVar15;
  int iVar16;
  int64_t lVar17;
  char cVar18;
  int8_t auVar19 [8];
  int64_t *plVar20;
  uint64_t uVar21;
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  int8_t in_XMM2 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fStackX_8;
  int8_t uStack_338;
  int8_t uStack_337;
  char cStack_336;
  int8_t auStack_335 [13];
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  int8_t auStack_318 [8];
  uint64_t uStack_310;
  int64_t lStack_308;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  int32_t uStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  int32_t uStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  int32_t uStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  int32_t uStack_2b4;
  int64_t lStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  int32_t uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  int64_t lStack_288;
  int64_t lStack_280;
  char cStack_278;
  int64_t lStack_270;
  int64_t lStack_268;
  char cStack_260;
  int64_t lStack_258;
  int64_t lStack_250;
  char cStack_248;
  uint64_t uStack_240;
  int64_t lStack_238;
  char cStack_230;
  uint64_t uStack_228;
  int64_t lStack_220;
  char cStack_218;
  uint64_t uStack_210;
  int64_t lStack_208;
  char cStack_200;
  uint64_t uStack_1f8;
  int64_t lStack_1f0;
  char cStack_1e8;
  uint64_t uStack_1e0;
  int64_t lStack_1d8;
  char cStack_1d0;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  uint64_t uStack_1a8;
  uint64_t uStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  int8_t auStack_168 [8];
  int64_t lStack_160;
  char cStack_158;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int8_t auStack_120 [24];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  int8_t auStack_f8 [32];
  int8_t auStack_d8 [144];
  
  uStack_138 = 0xfffffffffffffffe;
  fVar34 = *(float *)(param_1 + 0x1194);
  if (0.0 < fVar34) {
    fVar38 = 1.0 / fVar34;
    fVar29 = *(float *)(param_1 + 0x1190);
    if (fVar29 <= 0.0) {
      uVar11 = *(uint64_t *)(param_2 + 0x810);
    }
    else {
      if (fVar34 <= fVar29) {
        fVar29 = fVar34;
      }
      fVar29 = fVar29 * fVar38;
      bVar12 = 0;
      if ('\0' < *(char *)(param_2 + 0x1040)) {
        do {
          if ((*(uint64_t *)(param_2 + 0x810) >> ((uint64_t)bVar12 & 0x3f) & 1) != 0) {
            uVar11 = (uint64_t)(char)bVar12;
            lVar17 = uVar11 + 0x82;
            pfVar9 = (float *)(param_1 + 0x140 + lVar17 * 0x10);
            fStack_148 = *pfVar9 * fVar29;
            fStack_144 = pfVar9[1] * fVar29;
            fStack_140 = pfVar9[2] * fVar29;
            fStack_13c = pfVar9[3] * fVar29;
            pfVar9 = (float *)(param_2 + lVar17 * 0x10);
            fVar34 = pfVar9[1];
            fVar35 = pfVar9[2];
            fVar36 = pfVar9[3];
            pfVar10 = (float *)(param_2 + lVar17 * 0x10);
            *pfVar10 = fStack_148 + *pfVar9;
            pfVar10[1] = fStack_144 + fVar34;
            pfVar10[2] = fStack_140 + fVar35;
            pfVar10[3] = fStack_13c + fVar36;
            *(uint64_t *)(param_2 + 0x800) =
                 *(uint64_t *)(param_2 + 0x800) |
                 *(uint64_t *)(uVar11 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
            *(uint64_t *)(param_2 + 0x808) =
                 *(uint64_t *)(param_2 + 0x808) | 1L << (uVar11 & 0x3f);
          }
          bVar12 = bVar12 + 1;
        } while ((char)bVar12 < *(char *)(param_2 + 0x1040));
      }
      fVar34 = *(float *)(param_1 + 0x1168);
      fVar35 = *(float *)(param_1 + 0x1164);
      fVar36 = *(float *)(param_1 + 0x1160);
      uVar11 = *(uint64_t *)(param_2 + 0x810);
      *(uint64_t *)(param_2 + 0x800) = *(uint64_t *)(param_2 + 0x800) | uVar11;
      *(float *)(param_2 + 0x1020) = fVar29 * fVar36 + *(float *)(param_2 + 0x1020);
      *(float *)(param_2 + 0x1024) = fVar29 * fVar35 + *(float *)(param_2 + 0x1024);
      *(float *)(param_2 + 0x1028) = fVar29 * fVar34 + *(float *)(param_2 + 0x1028);
      *(int32_t *)(param_2 + 0x102c) = 0x7f7fffff;
      fStack_320 = fVar29 * *(float *)(param_1 + 0x1178) + *(float *)(param_2 + 0x1038);
      in_XMM2 = ZEXT416((uint)fStack_320);
      fStack_324 = fVar29 * *(float *)(param_1 + 0x1174) + *(float *)(param_2 + 0x1034);
      fStack_328 = fVar29 * *(float *)(param_1 + 0x1170) + *(float *)(param_2 + 0x1030);
      *(uint64_t *)(param_2 + 0x800) = *(uint64_t *)(param_2 + 0x800) | uVar11;
      fStack_31c = 3.4028235e+38;
      *(float *)(param_2 + 0x1030) = fStack_328;
      *(float *)(param_2 + 0x1034) = fStack_324;
      *(float *)(param_2 + 0x1038) = fStack_320;
      *(int32_t *)(param_2 + 0x103c) = 0x7f7fffff;
    }
    cStack_336 = *(char *)(param_2 + 0x1041);
    auVar19 = (int8_t  [8])(int64_t)*(int *)(param_1 + 0x10);
    uStack_310 = auStack_318;
    auStack_318 = auVar19;
    cVar6 = cStack_336;
    if (0 < (int64_t)auVar19) {
      plVar14 = (int64_t *)(param_1 + 0x18);
      lStack_308 = (int64_t)auVar19;
      fVar34 = fStack_148;
      fVar29 = fStack_144;
      fVar35 = fStack_140;
      fVar36 = fStack_13c;
      do {
        fVar32 = *(float *)((int64_t)plVar14 + 0xc);
        if (0.0 < fVar32) {
          fVar37 = *(float *)(plVar14 + 1);
          fVar28 = *(float *)(param_1 + 0x1194);
          if (fVar32 <= *(float *)(param_1 + 0x1194)) {
            fVar28 = fVar32;
          }
          fVar33 = fVar28 * fVar38;
          lVar17 = *plVar14;
          fVar32 = (float)(*(int *)(lVar17 + 400) - *(int *)(lVar17 + 0x18c)) * fVar37 +
                   (float)*(int *)(lVar17 + 0x18c);
          FUN_180405240(&lStack_288,lVar17,param_1,*(char *)(lVar17 + 0x194) != '\x02');
          bVar12 = *(byte *)(lStack_288 + 0x48);
          if ((cStack_278 == '\0') && (*(char *)(lStack_280 + 0x194) != '\0')) {
            LOCK();
            *(int *)(lStack_280 + 0xd8) = *(int *)(lStack_280 + 0xd8) + -1;
            UNLOCK();
          }
          if ((bVar12 & 1) != 0) {
            FUN_180405240(&lStack_270,*plVar14);
            FUN_180405670(lStack_270 + 0x20,&fStack_328);
            if ((cStack_260 == '\0') && (*(char *)(lStack_268 + 0x194) != '\0')) {
              LOCK();
              *(int *)(lStack_268 + 0xd8) = *(int *)(lStack_268 + 0xd8) + -1;
              UNLOCK();
            }
            fStack_2f8 = fVar33 * fStack_320 + *(float *)(param_2 + 0x1028);
            fStack_2fc = fVar33 * fStack_324 + *(float *)(param_2 + 0x1024);
            fStack_300 = fVar33 * fStack_328 + *(float *)(param_2 + 0x1020);
            *(uint64_t *)(param_2 + 0x800) =
                 *(uint64_t *)(param_2 + 0x800) | *(uint64_t *)(param_2 + 0x810);
            uStack_2f4 = 0x7f7fffff;
            *(float *)(param_2 + 0x1020) = fStack_300;
            *(float *)(param_2 + 0x1024) = fStack_2fc;
            *(float *)(param_2 + 0x1028) = fStack_2f8;
            *(int32_t *)(param_2 + 0x102c) = 0x7f7fffff;
          }
          if (*(char *)(param_2 + 0x1042) != '\0') {
            FUN_180405240(&lStack_258);
            uVar13 = *(uint *)(lStack_258 + 0x48);
            if ((cStack_248 == '\0') && (*(char *)(lStack_250 + 0x194) != '\0')) {
              LOCK();
              *(int *)(lStack_250 + 0xd8) = *(int *)(lStack_250 + 0xd8) + -1;
              UNLOCK();
            }
            cVar18 = '\0';
            if ((uVar13 >> 2 & 1) == 0) {
              cVar5 = FUN_180404420(*plVar14);
              if ('\0' < cVar5) {
                do {
                  lVar17 = (int64_t)cVar18 * 0x1b0;
                  puVar3 = (uint64_t *)(*(int64_t *)(param_5 + 0x140) + 0x80 + lVar17);
                  uVar21 = puVar3[1];
                  puVar2 = (uint64_t *)(param_2 + ((int64_t)cVar18 + 0xc2) * 0x10);
                  *puVar2 = *puVar3;
                  puVar2[1] = uVar21;
                  *(uint64_t *)(param_2 + 0x800) =
                       *(uint64_t *)(param_2 + 0x800) |
                       *(uint64_t *)(lVar17 + 0xe8 + *(int64_t *)(param_5 + 0x140));
                  cVar18 = cVar18 + '\x01';
                  cVar5 = FUN_180404420(*plVar14);
                } while (cVar18 < cVar5);
              }
            }
            else {
              cVar5 = FUN_180404420(*plVar14);
              if ('\0' < cVar5) {
                fStack_2e4 = 3.4028235e+38;
                do {
                  pfVar9 = (float *)FUN_1804045a0(*plVar14,auStack_120);
                  lVar17 = (int64_t)cVar18 + 0xc2;
                  fStack_2e8 = fVar33 * pfVar9[2] + *(float *)(param_2 + 8 + lVar17 * 0x10);
                  fStack_2ec = fVar33 * pfVar9[1] + *(float *)(param_2 + 4 + lVar17 * 0x10);
                  fStack_2f0 = fVar33 * *pfVar9 + *(float *)(param_2 + lVar17 * 0x10);
                  pfVar9 = (float *)(param_2 + lVar17 * 0x10);
                  *pfVar9 = fStack_2f0;
                  pfVar9[1] = fStack_2ec;
                  pfVar9[2] = fStack_2e8;
                  pfVar9[3] = fStack_2e4;
                  *(uint64_t *)(param_2 + 0x800) =
                       *(uint64_t *)(param_2 + 0x800) |
                       *(uint64_t *)
                        ((int64_t)cVar18 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
                  cVar18 = cVar18 + '\x01';
                  cVar5 = FUN_180404420(*plVar14);
                } while (cVar18 < cVar5);
              }
            }
          }
          if ((*(uint *)((int64_t)plVar14 + 0x24) & 0x400) != 0) {
            lStack_2b0 = *plVar14;
            iVar16 = 0;
            lVar17 = 0;
            plVar20 = (int64_t *)(lStack_2b0 + 0x198);
            do {
              if (((int64_t *)*plVar20 != (int64_t *)0x0) &&
                 (iVar8 = (**(code **)(*(int64_t *)*plVar20 + 0x18))(), iVar8 == 0)) {
                lVar17 = *(int64_t *)(lStack_2b0 + 0x198 + lVar17 * 8);
                goto LAB_180433698;
              }
              iVar16 = iVar16 + 1;
              lVar17 = lVar17 + 1;
              plVar20 = plVar20 + 1;
            } while (iVar16 < 2);
            lVar17 = 0;
LAB_180433698:
            fVar37 = fVar37 / *(float *)(lVar17 + 0x18);
            if (1.0 <= fVar37) {
              fVar37 = 1.0;
            }
            fStack_2d8 = fVar37 * *(float *)(lVar17 + 0x10) * fVar33 + *(float *)(param_2 + 0x1038);
            fStack_2dc = fVar37 * *(float *)(lVar17 + 0xc) * fVar33 + *(float *)(param_2 + 0x1034);
            fStack_2e0 = fVar37 * *(float *)(lVar17 + 8) * fVar33 + *(float *)(param_2 + 0x1030);
            *(uint64_t *)(param_2 + 0x800) =
                 *(uint64_t *)(param_2 + 0x800) | *(uint64_t *)(param_2 + 0x810);
            uStack_2d4 = 0x7f7fffff;
            *(float *)(param_2 + 0x1030) = fStack_2e0;
            *(float *)(param_2 + 0x1034) = fStack_2dc;
            *(float *)(param_2 + 0x1038) = fStack_2d8;
            *(int32_t *)(param_2 + 0x103c) = 0x7f7fffff;
            cVar6 = cStack_336;
          }
          FUN_180405240(auStack_168);
          if ((cStack_158 == '\0') && (*(char *)(lStack_160 + 0x194) != '\0')) {
            LOCK();
            *(int *)(lStack_160 + 0xd8) = *(int *)(lStack_160 + 0xd8) + -1;
            UNLOCK();
          }
          if (((*(uint *)((int64_t)plVar14 + 0x24) & 0x2000) != 0) &&
             ((*(uint64_t *)(param_2 + 0x810) >> ((uint64_t)(uint)(int)cVar6 & 0x3f) & 1) != 0)) {
            pfVar9 = (float *)(param_2 + ((int64_t)cVar6 + 0x82) * 0x10);
            fVar34 = *pfVar9;
            fVar29 = pfVar9[1];
            fVar35 = pfVar9[2];
            fVar36 = pfVar9[3];
          }
          in_XMM2 = ZEXT416((uint)fVar28);
          FUN_180404a10(*plVar14,fVar32);
          uVar13 = *(uint *)((int64_t)plVar14 + 0x24);
          if (((uVar13 >> 0xd & 1) != 0) &&
             ((*(uint64_t *)(param_2 + 0x810) >> ((uint64_t)(uint)(int)cVar6 & 0x3f) & 1) != 0)) {
            uVar11 = (uint64_t)cVar6;
            pfVar9 = (float *)(param_2 + (uVar11 + 0x82) * 0x10);
            *pfVar9 = fVar34;
            pfVar9[1] = fVar29;
            pfVar9[2] = fVar35;
            pfVar9[3] = fVar36;
            *(uint64_t *)(param_2 + 0x800) =
                 *(uint64_t *)(param_2 + 0x800) |
                 *(uint64_t *)(uVar11 * 0x1b0 + *(int64_t *)(param_5 + 0x140) + 0xe8);
            *(uint64_t *)(param_2 + 0x808) =
                 *(uint64_t *)(param_2 + 0x808) | 1L << (uVar11 & 0x3f);
            uVar13 = *(uint *)((int64_t)plVar14 + 0x24);
          }
          if ((uVar13 >> 0xb & 1) != 0) {
            cVar6 = *(char *)(param_3 + 10);
            cVar18 = *(char *)((int64_t)param_3 + 0x51);
            if ((-1 < cVar6) && (-1 < cVar18)) {
              uStack_338 = param_7;
              FUN_180405240(&uStack_240,*plVar14);
              FUN_18040dbf0(uStack_240,&uStack_1c8,cVar6,fVar32,param_5,&uStack_338);
              if ((cStack_230 == '\0') && (*(char *)(lStack_238 + 0x194) != '\0')) {
                LOCK();
                *(int *)(lStack_238 + 0xd8) = *(int *)(lStack_238 + 0xd8) + -1;
                UNLOCK();
              }
              if (cVar6 == *(char *)(param_3 + 10)) {
                *param_3 = uStack_1c8;
                param_3[1] = uStack_1c0;
                *(int32_t *)(param_3 + 2) = uStack_1b8;
                *(int32_t *)((int64_t)param_3 + 0x14) = uStack_1b4;
                *(int32_t *)(param_3 + 3) = uStack_1b0;
                *(int32_t *)((int64_t)param_3 + 0x1c) = uStack_1ac;
              }
              else {
                param_3[4] = uStack_1c8;
                param_3[5] = uStack_1c0;
                *(int32_t *)(param_3 + 6) = uStack_1b8;
                *(int32_t *)((int64_t)param_3 + 0x34) = uStack_1b4;
                *(int32_t *)(param_3 + 7) = uStack_1b0;
                *(int32_t *)((int64_t)param_3 + 0x3c) = uStack_1ac;
              }
              in_XMM2 = ZEXT416((uint)fVar32);
              FUN_180405240(&uStack_228,*plVar14);
              FUN_18040dbf0(uStack_228,&uStack_1a8,cVar18,fVar32,param_5,&uStack_338);
              if ((cStack_218 == '\0') && (*(char *)(lStack_220 + 0x194) != '\0')) {
                LOCK();
                *(int *)(lStack_220 + 0xd8) = *(int *)(lStack_220 + 0xd8) + -1;
                UNLOCK();
              }
              if (cVar18 == *(char *)(param_3 + 10)) {
                *param_3 = uStack_1a8;
                param_3[1] = uStack_1a0;
                param_3[2] = uStack_198;
                param_3[3] = uStack_190;
              }
              else {
                param_3[4] = uStack_1a8;
                param_3[5] = uStack_1a0;
                param_3[6] = uStack_198;
                param_3[7] = uStack_190;
              }
              if (((*(char *)((int64_t)param_3 + 0x52) == '\0') && (0.0 < fVar28)) ||
                 (1.0 <= fVar28)) {
                fStack_2c8 = *(float *)(param_3 + 3) - *(float *)(param_3 + 7);
                in_XMM2 = ZEXT416((uint)fStack_2c8);
                fStack_2cc = *(float *)((int64_t)param_3 + 0x14) -
                             *(float *)((int64_t)param_3 + 0x34);
                fStack_2d0 = *(float *)(param_3 + 2) - *(float *)(param_3 + 6);
                uStack_2c4 = 0x7f7fffff;
                SystemCore_EventHandler(param_3 + 4,&uStack_130,&fStack_2d0);
                param_3[8] = uStack_130;
                param_3[9] = uStack_128;
                *(int8_t *)((int64_t)param_3 + 0x52) = 1;
              }
              else if (0.0 < fVar28) {
                fStack_2b8 = *(float *)(param_3 + 3) - *(float *)(param_3 + 7);
                fStack_2bc = *(float *)((int64_t)param_3 + 0x14) -
                             *(float *)((int64_t)param_3 + 0x34);
                fStack_2c0 = *(float *)(param_3 + 2) - *(float *)(param_3 + 6);
                uStack_2b4 = 0x7f7fffff;
                SystemCore_EventHandler(param_3 + 4,&fStack_298,&fStack_2c0);
                fStack_2a8 = (fStack_298 - *(float *)(param_3 + 8)) * fVar28 +
                             *(float *)(param_3 + 8);
                fStack_2a4 = (fStack_294 - *(float *)((int64_t)param_3 + 0x44)) * fVar28 +
                             *(float *)((int64_t)param_3 + 0x44);
                fStack_2a0 = (fStack_290 - *(float *)(param_3 + 9)) * fVar28 +
                             *(float *)(param_3 + 9);
                in_XMM2 = ZEXT416((uint)fStack_2a0);
                *(float *)(param_3 + 8) = fStack_2a8;
                *(float *)((int64_t)param_3 + 0x44) = fStack_2a4;
                *(float *)(param_3 + 9) = fStack_2a0;
                *(int32_t *)((int64_t)param_3 + 0x4c) = uStack_29c;
              }
            }
          }
          cVar6 = func_0x000180435420(param_4,param_6);
          if (-1 < cVar6) {
            uVar7 = func_0x000180435400();
            uStack_337 = 0;
            FUN_180405240(&uStack_210,*plVar14);
            FUN_18040dbf0(uStack_210,auStack_f8,cVar6,fVar32,param_5,&uStack_337);
            if ((cStack_200 == '\0') && (*(char *)(lStack_208 + 0x194) != '\0')) {
              LOCK();
              *(int *)(lStack_208 + 0xd8) = *(int *)(lStack_208 + 0xd8) + -1;
              UNLOCK();
            }
            in_XMM2 = ZEXT416((uint)fVar32);
            FUN_180405240(&uStack_1f8,*plVar14);
            FUN_18040dbf0(uStack_1f8,auStack_d8,uVar7,fVar32,param_5,&uStack_337);
            if ((cStack_1e8 == '\0') && (*(char *)(lStack_1f0 + 0x194) != '\0')) {
              LOCK();
              *(int *)(lStack_1f0 + 0xd8) = *(int *)(lStack_1f0 + 0xd8) + -1;
              UNLOCK();
            }
            FUN_180403be0(param_4,cVar6,auStack_f8,fVar28);
            FUN_180403be0(param_4,uVar7,auStack_d8,fVar28);
          }
          if ((*(char *)(param_2 + 0x1043) == '\0') &&
             ((*(byte *)((int64_t)plVar14 + 0x24) & 0x80) == 0)) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          *(int8_t *)(param_2 + 0x1043) = uVar7;
          cVar6 = cStack_336;
        }
        plVar14 = plVar14 + 9;
        lStack_308 = lStack_308 + -1;
      } while (lStack_308 != 0);
      uVar11 = *(uint64_t *)(param_2 + 0x810);
      lStack_308 = 0;
      auVar19 = auStack_318;
    }
    if (((uVar11 >> ((uint64_t)(uint)(int)cVar6 & 0x3f) & 1) != 0) &&
       (bVar4 = false, 0 < (int64_t)auVar19)) {
      puVar15 = (uint *)(param_1 + 0x3c);
      fStackX_8 = (float)param_1;
      fVar34 = fStack_328;
      fVar29 = fStack_324;
      fVar35 = fStack_320;
      fVar36 = fStack_31c;
      do {
        fVar32 = (float)puVar15[-6];
        if ((0.0 < fVar32) && ((*puVar15 & 0x2000) != 0)) {
          fVar37 = *(float *)(param_1 + 0x1194);
          if (fVar32 <= *(float *)(param_1 + 0x1194)) {
            fVar37 = fVar32;
          }
          lVar17 = *(int64_t *)(puVar15 + -9);
          fVar32 = (float)(*(int *)(lVar17 + 400) - *(int *)(lVar17 + 0x18c)) * (float)puVar15[-7] +
                   (float)*(int *)(lVar17 + 0x18c);
          auStack_335[0] = 0;
          in_XMM2 = ZEXT416((uint)fVar32);
          FUN_180405240(&uStack_1e0,lVar17,param_1,0);
          iVar16 = FUN_18040dbf0(uStack_1e0,&fStack_188,cVar6,fVar32,param_5,auStack_335);
          if ((cStack_1d0 == '\0') && (*(char *)(lStack_1d8 + 0x194) != '\0')) {
            LOCK();
            piVar1 = (int *)(lStack_1d8 + 0xd8);
            iVar16 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
          }
          auStack_318._4_4_ = fStack_184;
          auStack_318._0_4_ = fStack_188;
          uStack_310._0_4_ = fStack_180;
          uStack_310._4_4_ = fStack_17c;
          if (bVar4) {
            fVar32 = fVar36 * fStack_17c + fVar34 * fStack_188;
            fVar28 = fVar35 * fStack_180 + fVar29 * fStack_184;
            auVar25._0_4_ = fVar28 + fVar32;
            auVar25._4_4_ = fVar32 + fVar28;
            auVar25._8_4_ = fVar32 + fVar29 * fStack_184 + fVar35 * fStack_180;
            auVar25._12_4_ = fVar28 + fVar34 * fStack_188 + fVar36 * fStack_17c;
            iVar16 = movmskps(iVar16,auVar25);
            if (iVar16 != 0) {
              auStack_318 = (int8_t  [8])(CONCAT44(fStack_184,fStack_188) ^ 0x8000000080000000);
              uStack_310._0_4_ = -fStack_180;
              uStack_310._4_4_ = -fStack_17c;
            }
            fStackX_8 = fStackX_8 + fVar37 * fVar38;
            fStack_108 = fVar37 * auStack_318._0_4_;
            fStack_104 = fVar37 * auStack_318._4_4_;
            fStack_100 = fVar37 * auStack_318._8_4_;
            fStack_fc = fVar37 * auStack_318._12_4_;
            fVar34 = fVar34 + fVar38 * fStack_108;
            fVar29 = fVar29 + fVar38 * fStack_104;
            fVar35 = fVar35 + fVar38 * fStack_100;
            fVar36 = fVar36 + fVar38 * fStack_fc;
            in_XMM2 = _auStack_318;
          }
          else {
            bVar4 = true;
            fStackX_8 = fVar37 * fVar38;
            fVar34 = fStackX_8 * fStack_188;
            fVar29 = fStackX_8 * fStack_184;
            fVar35 = fStackX_8 * fStack_180;
            fVar36 = fStackX_8 * fStack_17c;
          }
        }
        puVar15 = puVar15 + 0x12;
        auVar19 = (int8_t  [8])((int64_t)auVar19 + -1);
      } while (auVar19 != (int8_t  [8])0x0);
      if (bVar4) {
        fVar38 = fVar36 * fVar36 + fVar34 * fVar34;
        fVar32 = fVar35 * fVar35 + fVar29 * fVar29;
        fVar30 = fVar38 + fVar29 * fVar29 + fVar35 * fVar35;
        fVar31 = fVar32 + fVar34 * fVar34 + fVar36 * fVar36;
        auVar22._0_4_ = fVar32 + fVar38 + 1.1754944e-38;
        auVar22._4_4_ = fVar38 + fVar32 + 1.1754944e-38;
        auVar22._8_4_ = fVar30 + 1.1754944e-38;
        auVar22._12_4_ = fVar31 + 1.1754944e-38;
        auVar25 = rsqrtps(in_XMM2,auVar22);
        fVar37 = auVar25._0_4_;
        fVar28 = auVar25._4_4_;
        fVar33 = auVar25._8_4_;
        fVar27 = auVar25._12_4_;
        fVar34 = fVar34 * (3.0 - fVar37 * fVar37 * (fVar32 + fVar38)) * fVar37 * 0.5;
        fVar29 = fVar29 * (3.0 - fVar28 * fVar28 * (fVar38 + fVar32)) * fVar28 * 0.5;
        fVar35 = fVar35 * (3.0 - fVar33 * fVar33 * fVar30) * fVar33 * 0.5;
        fVar36 = fVar36 * (3.0 - fVar27 * fVar27 * fVar31) * fVar27 * 0.5;
        uVar21 = func_0x000180435370(param_2);
        uVar11 = (uint64_t)cVar6;
        pfVar10 = (float *)SystemErrorHandler(uVar21,*(int8_t *)
                                                 (uVar11 * 0x1b0 + 0xf0 +
                                                 *(int64_t *)(param_5 + 0x140)),param_5);
        fVar38 = *pfVar10;
        fVar32 = pfVar10[1];
        fVar37 = pfVar10[2];
        fVar28 = pfVar10[3];
        auVar26._0_4_ = fVar28 * fVar35;
        auVar26._4_4_ = fVar32 * fVar36;
        auVar26._8_4_ = fVar37 * fVar29;
        auVar26._12_4_ = fVar32 * fVar29;
        fVar33 = fVar37 * fVar36 * -1.0 + fVar34 * fVar32 * -1.0 + fVar38 * fVar29 + auVar26._0_4_;
        fVar27 = fVar28 * fVar29 * -1.0 + fVar34 * fVar37 * -1.0 + fVar38 * fVar35 + auVar26._4_4_;
        fVar30 = fVar32 * fVar35 * -1.0 + fVar34 * fVar28 * -1.0 + fVar38 * fVar36 + auVar26._8_4_;
        fVar37 = fVar28 * fVar36 * 1.0 + fVar34 * fVar38 * 1.0 + fVar37 * fVar35 + auVar26._12_4_;
        pfVar9 = (float *)(param_2 + (uVar11 + 0x82) * 0x10);
        fVar34 = fVar37 * *pfVar9;
        fVar29 = fVar33 * pfVar9[1];
        fVar38 = fVar27 * pfVar9[2];
        fVar35 = fVar30 * pfVar9[3];
        fVar36 = fVar35 + fVar34;
        fVar32 = fVar38 + fVar29;
        auVar23._0_4_ = fVar32 + fVar36;
        auVar23._4_4_ = fVar36 + fVar32;
        auVar23._8_4_ = fVar36 + fVar29 + fVar38;
        auVar23._12_4_ = fVar32 + fVar34 + fVar35;
        iVar16 = movmskps((int)pfVar10,auVar23);
        if (iVar16 != 0) {
          fVar37 = -fVar37;
          fVar33 = -fVar33;
          fVar27 = -fVar27;
          auVar26._0_8_ = (uint64_t)(uint)fVar30 ^ 0x80000000;
          auVar26._8_8_ = 0;
          fVar30 = (float)auVar26._0_8_;
        }
        fVar34 = 1.0 - fStackX_8;
        fVar31 = fVar34 * *pfVar9 + fStackX_8 * fVar37;
        fVar33 = fVar34 * pfVar9[1] + fStackX_8 * fVar33;
        fVar27 = fVar34 * pfVar9[2] + fStackX_8 * fVar27;
        fVar30 = fVar34 * pfVar9[3] + fStackX_8 * fVar30;
        fVar34 = fVar30 * fVar30 + fVar31 * fVar31;
        fVar29 = fVar27 * fVar27 + fVar33 * fVar33;
        fVar37 = fVar34 + fVar33 * fVar33 + fVar27 * fVar27;
        fVar28 = fVar29 + fVar31 * fVar31 + fVar30 * fVar30;
        auVar24._0_4_ = fVar29 + fVar34 + 1.1754944e-38;
        auVar24._4_4_ = fVar34 + fVar29 + 1.1754944e-38;
        auVar24._8_4_ = fVar37 + 1.1754944e-38;
        auVar24._12_4_ = fVar28 + 1.1754944e-38;
        auVar25 = rsqrtps(auVar26,auVar24);
        fVar38 = auVar25._0_4_;
        fVar35 = auVar25._4_4_;
        fVar36 = auVar25._8_4_;
        fVar32 = auVar25._12_4_;
        pfVar9 = (float *)(param_2 + (uVar11 + 0x82) * 0x10);
        *pfVar9 = (3.0 - fVar38 * fVar38 * (fVar29 + fVar34)) * fVar38 * 0.5 * fVar31;
        pfVar9[1] = (3.0 - fVar35 * fVar35 * (fVar34 + fVar29)) * fVar35 * 0.5 * fVar33;
        pfVar9[2] = (3.0 - fVar36 * fVar36 * fVar37) * fVar36 * 0.5 * fVar27;
        pfVar9[3] = (3.0 - fVar32 * fVar32 * fVar28) * fVar32 * 0.5 * fVar30;
        *(uint64_t *)(param_2 + 0x800) =
             *(uint64_t *)(param_2 + 0x800) |
             *(uint64_t *)(uVar11 * 0x1b0 + 0xe8 + *(int64_t *)(param_5 + 0x140));
        *(uint64_t *)(param_2 + 0x808) = *(uint64_t *)(param_2 + 0x808) | 1L << (uVar11 & 0x3f);
      }
    }
  }
  return;
}



float FUN_180433fe0(int64_t param_1,int64_t param_2,char param_3)

{
  uint64_t uVar1;
  float *pfVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  float fVar7;
  
  lVar5 = (int64_t)*(int *)(param_1 + 0x10);
  fVar7 = 0.0;
  uVar1 = *(uint64_t *)(param_2 + 0x150);
  lVar4 = 0;
  if (3 < lVar5) {
    pfVar2 = (float *)(param_1 + 0x24);
    uVar6 = (uint)param_3;
    lVar3 = (lVar5 - 4U >> 2) + 1;
    lVar4 = lVar3 * 4;
    do {
      if ((((uint)pfVar2[6] & 2) != 0) ||
         ((((uint)pfVar2[6] & 1) != 0 && ((uVar1 >> ((uint64_t)uVar6 & 0x3f) & 1) != 0)))) {
        fVar7 = fVar7 + *pfVar2;
      }
      if ((((uint)pfVar2[0x18] & 2) != 0) ||
         ((((uint)pfVar2[0x18] & 1) != 0 && ((uVar1 >> ((uint64_t)uVar6 & 0x3f) & 1) != 0)))) {
        fVar7 = fVar7 + pfVar2[0x12];
      }
      if ((((uint)pfVar2[0x2a] & 2) != 0) ||
         ((((uint)pfVar2[0x2a] & 1) != 0 && ((uVar1 >> ((uint64_t)uVar6 & 0x3f) & 1) != 0)))) {
        fVar7 = fVar7 + pfVar2[0x24];
      }
      if ((((uint)pfVar2[0x3c] & 2) != 0) ||
         ((((uint)pfVar2[0x3c] & 1) != 0 && ((uVar1 >> ((uint64_t)uVar6 & 0x3f) & 1) != 0)))) {
        fVar7 = fVar7 + pfVar2[0x36];
      }
      pfVar2 = pfVar2 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (lVar4 < lVar5) {
    pfVar2 = (float *)(param_1 + lVar4 * 0x48 + 0x24);
    lVar5 = lVar5 - lVar4;
    do {
      if ((((uint)pfVar2[6] & 2) != 0) ||
         ((((uint)pfVar2[6] & 1) != 0 &&
          ((uVar1 >> ((uint64_t)(uint)(int)param_3 & 0x3f) & 1) != 0)))) {
        fVar7 = fVar7 + *pfVar2;
      }
      pfVar2 = pfVar2 + 0x12;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if ((1.0 < fVar7) && (fVar7 < 1.02)) {
    fVar7 = 1.0;
  }
  return fVar7;
}



float FUN_180433ff2(float param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  int64_t in_RCX;
  float *pfVar1;
  int64_t lVar2;
  int64_t in_R10;
  int64_t lVar3;
  uint uVar4;
  
  lVar3 = 0;
  if (3 < in_R10) {
    pfVar1 = (float *)(in_RCX + 0x24);
    uVar4 = (uint)param_3;
    lVar2 = (in_R10 - 4U >> 2) + 1;
    lVar3 = lVar2 * 4;
    do {
      if ((((uint)pfVar1[6] & 2) != 0) ||
         ((((uint)pfVar1[6] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
        param_1 = param_1 + *pfVar1;
      }
      if ((((uint)pfVar1[0x18] & 2) != 0) ||
         ((((uint)pfVar1[0x18] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
        param_1 = param_1 + pfVar1[0x12];
      }
      if ((((uint)pfVar1[0x2a] & 2) != 0) ||
         ((((uint)pfVar1[0x2a] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
        param_1 = param_1 + pfVar1[0x24];
      }
      if ((((uint)pfVar1[0x3c] & 2) != 0) ||
         ((((uint)pfVar1[0x3c] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
        param_1 = param_1 + pfVar1[0x36];
      }
      pfVar1 = pfVar1 + 0x48;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lVar3 < in_R10) {
    pfVar1 = (float *)(in_RCX + lVar3 * 0x48 + 0x24);
    lVar3 = in_R10 - lVar3;
    do {
      if ((((uint)pfVar1[6] & 2) != 0) ||
         ((((uint)pfVar1[6] & 1) != 0 &&
          ((param_4 >> ((uint64_t)(uint)(int)param_3 & 0x3f) & 1) != 0)))) {
        param_1 = param_1 + *pfVar1;
      }
      pfVar1 = pfVar1 + 0x12;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if ((1.0 < param_1) && (param_1 < 1.02)) {
    param_1 = 1.0;
  }
  return param_1;
}



float FUN_180434002(float param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  int64_t in_RCX;
  float *pfVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t in_R10;
  uint uVar4;
  
  pfVar1 = (float *)(in_RCX + 0x24);
  uVar4 = (uint)param_3;
  lVar2 = (in_R10 - 4U >> 2) + 1;
  lVar3 = lVar2;
  do {
    if ((((uint)pfVar1[6] & 2) != 0) ||
       ((((uint)pfVar1[6] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
      param_1 = param_1 + *pfVar1;
    }
    if ((((uint)pfVar1[0x18] & 2) != 0) ||
       ((((uint)pfVar1[0x18] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
      param_1 = param_1 + pfVar1[0x12];
    }
    if ((((uint)pfVar1[0x2a] & 2) != 0) ||
       ((((uint)pfVar1[0x2a] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
      param_1 = param_1 + pfVar1[0x24];
    }
    if ((((uint)pfVar1[0x3c] & 2) != 0) ||
       ((((uint)pfVar1[0x3c] & 1) != 0 && ((param_4 >> ((uint64_t)uVar4 & 0x3f) & 1) != 0)))) {
      param_1 = param_1 + pfVar1[0x36];
    }
    pfVar1 = pfVar1 + 0x48;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar2 * 4 < in_R10) {
    pfVar1 = (float *)(in_RCX + lVar2 * 0x120 + 0x24);
    lVar3 = in_R10 + lVar2 * -4;
    do {
      if ((((uint)pfVar1[6] & 2) != 0) ||
         ((((uint)pfVar1[6] & 1) != 0 &&
          ((param_4 >> ((uint64_t)(uint)(int)param_3 & 0x3f) & 1) != 0)))) {
        param_1 = param_1 + *pfVar1;
      }
      pfVar1 = pfVar1 + 0x12;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if ((1.0 < param_1) && (param_1 < 1.02)) {
    param_1 = 1.0;
  }
  return param_1;
}



float FUN_1804340a3(int64_t param_1,uint64_t param_2,char param_3,uint64_t param_4)

{
  float *pfVar1;
  int64_t unaff_RDI;
  int64_t in_R10;
  int64_t lVar2;
  float in_XMM0_Da;
  
  if (unaff_RDI < in_R10) {
    pfVar1 = (float *)(param_1 + unaff_RDI * 0x48 + 0x24);
    lVar2 = in_R10 - unaff_RDI;
    do {
      if ((((uint)pfVar1[6] & 2) != 0) ||
         ((((uint)pfVar1[6] & 1) != 0 &&
          ((param_4 >> ((uint64_t)(uint)(int)param_3 & 0x3f) & 1) != 0)))) {
        in_XMM0_Da = in_XMM0_Da + *pfVar1;
      }
      pfVar1 = pfVar1 + 0x12;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if ((1.0 < in_XMM0_Da) && (in_XMM0_Da < 1.02)) {
    in_XMM0_Da = 1.0;
  }
  return in_XMM0_Da;
}



float FUN_1804340ed(float param_1,float param_2)

{
  if (param_1 < 1.02) {
    param_1 = param_2;
  }
  return param_1;
}







