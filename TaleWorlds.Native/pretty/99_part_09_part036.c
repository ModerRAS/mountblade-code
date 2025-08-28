#include "ultra_high_freq_fun_definitions.h"

// $fun 的语义化别名
#define $alias_name $fun

#define StatusChecker System_StatusChecker  // 状态检查器


// 99_part_09_part036.c - 4 个函数

// 函数: void SystemCore_Sorter2(void)
void SystemCore_Sorter2(void)

{
  int64_t *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int64_t lVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  char *pcVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  char unaff_BPL;
  int64_t *unaff_RSI;
  short sVar14;
  uint uVar15;
  int64_t unaff_R12;
  char unaff_R14B;
  int64_t unaff_R15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  float fVar19;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  cVar3 = (char)unaff_R12;
  uVar15 = (uint)unaff_R12;
  if (unaff_R14B == '\0') {
    if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
      SystemCore_Validator(unaff_RSI + 1);
    }
    if (unaff_XMM10_Da == *(float *)(unaff_RSI + 0x1b)) goto LAB_1805cd41e;
    if ((((int)unaff_RSI[0x284] != 1) && (unaff_BPL != '\0')) && ((int)unaff_RSI[0x295] != 1)) {
      if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_RSI + 1);
      }
      if ((char)unaff_RSI[0x20] == cVar3) goto LAB_1805cd41e;
    }
    lVar6 = *unaff_RSI;
    cVar2 = func_0x00018051f6a0(lVar6);
    if (cVar2 == '\0') {
      fVar17 = *(float *)(lVar6 + 0x2e0);
    }
    else {
      fVar17 = *(float *)(lVar6 + 0x2dc);
    }
    uVar13 = *(uint *)(unaff_RSI + 2);
    if (-1 < (char)uVar13) {
      SystemCore_Validator(unaff_RSI + 1);
      uVar13 = *(uint *)(unaff_RSI + 2);
    }
    if ((*(char *)((int64_t)unaff_RSI + 0xd5) == cVar3) || (unaff_BPL == '\0')) {
LAB_1805cd360:
      fVar19 = 1.0;
    }
    else {
      if ((uVar13 & 0x20) == 0) {
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = uVar13 | 0x20;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if (lVar6 == 0) goto LAB_1805cd360;
      lVar6 = func_0x0001805b6e80(unaff_RSI + 1);
      if ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)) &
          0x40) == 0) {
        pfVar7 = (float *)func_0x0001805b7020(unaff_RSI + 1);
        pfVar8 = (float *)FUN_1805b7580(unaff_RSI + 1);
        if (*pfVar7 <= *pfVar8 * 0.77) goto LAB_1805cd360;
      }
      fVar19 = 0.1;
    }
    uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar13 = uVar13 >> 0x11 ^ uVar13;
    uVar13 = uVar13 << 5 ^ uVar13;
    *(uint *)(unaff_RSI + 0x272) = uVar13;
    if ((*(uint *)(unaff_RSI + 2) & 0x10000000) == 0) {
      FUN_1805d5680(unaff_RSI + 1);
    }
    fVar16 = (float)powf((float)(uVar13 - 1) * 2.3283064e-10);
    if (((fVar19 * fVar17 <= fVar16) ||
        ((piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1), *piVar9 != 1 &&
         (piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1), *piVar9 != 2)))) ||
       ((piVar9 = (int *)SystemCore_ResourceHandler0(unaff_RSI + 1), *piVar9 < 2 &&
        ((float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2df] * 8) - unaff_RSI[0x2de])
         * unaff_XMM12_Da <= unaff_XMM10_Da)))) goto LAB_1805cd41e;
LAB_1805cdf27:
    *(int32_t *)((int64_t)unaff_RSI + 0x178c) = 6;
    uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
    uVar13 = uVar13 >> 0x11 ^ uVar13;
    uVar13 = uVar13 << 5 ^ uVar13;
    *(uint *)(unaff_RSI + 0x272) = uVar13;
    unaff_RSI[0x2eb] =
         *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ec] * 8) -
         (int64_t)(-60000.004 - (float)(uVar13 - 1) * 1.1641532e-05);
  }
  else {
LAB_1805cd41e:
    lVar6 = func_0x0001805b7270(unaff_RSI + 1);
    sVar14 = (short)unaff_R12;
    if (lVar6 == 0) {
LAB_1805cd86d:
      if ((unaff_R14B == '\0') && ((*(byte *)(*unaff_RSI + 0x56c) & 0x10) != 0)) {
        if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RSI + 1);
        }
        if (unaff_RSI[0x1e] == unaff_R12) {
          if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
            lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RSI[1] + 0x8f8) + 0x9e8);
            unaff_RSI[0x15] = lVar6;
            *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
          }
          else {
            lVar6 = unaff_RSI[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) <= (int)uVar15))
              || (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                             *(int64_t *)(lVar6 + 0xd0)) >> 9 & 1) != 0 &&
                  (*(short *)(lVar6 + 8) <= sVar14)))) &&
             ((pfVar7 = (float *)SystemCore_ConfigLoader(unaff_RSI + 1), unaff_XMM10_Da != *pfVar7 &&
              ((piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1), *piVar9 == 1 ||
               (piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1), *piVar9 == 2)))))) {
            uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
            uVar13 = uVar13 >> 0x11 ^ uVar13;
            uVar13 = uVar13 << 5 ^ uVar13;
            *(uint *)(unaff_RSI + 0x272) = uVar13;
            SystemCore_ResourceHandler0(unaff_RSI + 1);
            powf((float)(uVar13 - 1) * 2.3283064e-10);
            piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1);
            fVar17 = unaff_XMM13_Da;
            if (*piVar9 != 1) {
              fVar17 = 1.0;
            }
            fVar17 = fVar17 * *(float *)(*unaff_RSI + 0x32c);
            if (0.95 <= fVar17) {
              fVar17 = 0.95;
            }
            if ((extraout_XMM0_Da < fVar17) &&
               ((piVar9 = (int *)SystemCore_ResourceHandler0(unaff_RSI + 1), 1 < *piVar9 ||
                (unaff_XMM10_Da <
                 (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2df] * 8) -
                        unaff_RSI[0x2de]) * unaff_XMM12_Da)))) {
              uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
              uVar13 = uVar13 >> 0x11 ^ uVar13;
              uVar13 = uVar13 << 5 ^ uVar13;
              *(uint *)(unaff_RSI + 0x272) = uVar13;
              unaff_RSI[0x2eb] =
                   *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ec] * 8) -
                   (int64_t)(-129999.99 - (float)(uVar13 - 1) * 4.656613e-05);
              *(int32_t *)((int64_t)unaff_RSI + 0x178c) = 6;
              goto LAB_1805cdfa0;
            }
          }
        }
      }
      uVar13 = *(uint *)(unaff_RSI + 2);
      if ((uVar13 & 0x20) == 0) {
        uVar13 = uVar13 | 0x20;
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = uVar13;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if (lVar6 == 0) {
LAB_1805cdb67:
        if ((unaff_BPL == '\0') &&
           (pfVar7 = (float *)FUN_1805b6a70(unaff_RSI + 1), *pfVar7 <= 0.70710677))
        goto LAB_1805cdf8d;
        if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
          SystemCore_Validator(unaff_RSI + 1);
        }
        if ((*(char *)((int64_t)unaff_RSI + 0xd4) == cVar3) ||
           (((unaff_RSI[0x41e] == unaff_R12 ||
             ((1 < (int)unaff_RSI[0x295] - 5U &&
              (((*(byte *)((int64_t)unaff_RSI + 0x209c) & 1) == 0 ||
               ((*(byte *)(unaff_RSI + 0x413) & 1) == 0)))))) &&
            (cVar2 = FUN_1805d06b0(), cVar2 != '\0')))) goto LAB_1805cdf8d;
        if (unaff_XMM10_Da <
            (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2dd] * 8) -
                   unaff_RSI[0x2dc]) * unaff_XMM12_Da) {
          cVar2 = func_0x0001805b7bd0();
          if (((cVar2 == '\0') &&
              (pfVar7 = (float *)FUN_1805b6b40(unaff_RSI + 1),
              unaff_XMM10_Da < *pfVar7 || unaff_XMM10_Da == *pfVar7)) &&
             ((int)unaff_RSI[0x295] != 3)) {
            pcVar10 = (char *)SystemCore_NetworkHandler(unaff_RSI + 1);
            if (unaff_BPL == *pcVar10) {
              piVar9 = (int *)SystemCore_ResourceHandler0(unaff_RSI + 1);
              fVar17 = (float)*piVar9;
              if (fVar17 <= 1.0) {
                fVar17 = 1.0;
              }
            }
            else {
              fVar17 = 0.3;
            }
            fVar19 = *(float *)(*unaff_RSI + 0x350);
            uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
            uVar13 = uVar13 >> 0x11 ^ uVar13;
            uVar13 = uVar13 << 5 ^ uVar13;
            *(uint *)(unaff_RSI + 0x272) = uVar13;
            if (fVar19 <= (float)(uVar13 - 1) * 2.3283064e-10 * fVar17) goto LAB_1805cde99;
          }
          cVar2 = StatusChecker();
          if (cVar2 != '\0') {
            uVar13 = *(uint *)(unaff_RSI + 2);
            if ((uVar13 & 0x40) == 0) {
              FUN_1805d4040(unaff_RSI + 1);
              uVar13 = *(uint *)(unaff_RSI + 2);
            }
            if ((uVar13 >> 0x19 & 1) == 0) {
              fVar17 = *(float *)(*(int64_t *)unaff_RSI[1] + 0x7dc);
              *(float *)((int64_t)unaff_RSI + 0xb4) = fVar17;
              *(uint *)(unaff_RSI + 2) = uVar13 | 0x2000000;
            }
            else {
              fVar17 = *(float *)((int64_t)unaff_RSI + 0xb4);
            }
            if (((*(float *)((int64_t)unaff_RSI + 0xbc) <= fVar17 &&
                  fVar17 != *(float *)((int64_t)unaff_RSI + 0xbc)) &&
                (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), lVar6 != 0)) &&
               ((lVar6 = func_0x0001805b6e80(unaff_RSI + 1), (int)uVar15 < *(int *)(lVar6 + 0x30) &&
                (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                            *(int64_t *)(lVar6 + 0xd0)) >> 9 & 1) == 0 ||
                 (sVar14 < *(short *)(lVar6 + 8))))))) {
              lVar6 = func_0x0001805b6e80(unaff_RSI + 1);
              lVar11 = func_0x0001805b6e80(unaff_RSI + 1);
              if (((float)*(int *)((int64_t)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x7c +
                                  *(int64_t *)(lVar11 + 0xd0)) * 5.0 <
                   (float)*(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x78 +
                                  *(int64_t *)(lVar6 + 0xd0))) ||
                 (fVar17 = *(float *)(*unaff_RSI + 0x2f8),
                 uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272),
                 uVar13 = uVar13 >> 0x11 ^ uVar13, uVar13 = uVar13 << 5 ^ uVar13,
                 *(uint *)(unaff_RSI + 0x272) = uVar13, (float)(uVar13 - 1) * 2.3283064e-10 < fVar17
                 )) {
                *(uint *)(unaff_RSI + 0x27a) = *(uint *)(unaff_RSI + 0x27a) | 0x8000;
                *(int32_t *)((int64_t)unaff_RSI + 0x178c) = 10;
                goto LAB_1805cdfa0;
              }
            }
          }
          pfVar7 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RSI + 1);
          if (1000.0 < *pfVar7 || *pfVar7 == 1000.0) {
            lVar6 = *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ea] * 8);
          }
          else {
            pfVar7 = (float *)UltraHighFreq_RenderingProcessor1(unaff_RSI + 1);
            lVar6 = *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ea] * 8) -
                    (int64_t)(*pfVar7 * -100000.0);
          }
          unaff_RSI[0x2e9] = lVar6;
          *(int32_t *)((int64_t)unaff_RSI + 0x178c) = 7;
          *(char *)(unaff_RSI + 0x2e4) = cVar3;
          *(uint *)(unaff_RSI + 0x2f1) = uVar15;
          unaff_RSI[0x2ed] =
               *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ee] * 8) + -0x8000000000000000;
          goto LAB_1805cdfa0;
        }
LAB_1805cde99:
        if ((int)unaff_RSI[0x295] != 3) {
          pcVar10 = (char *)SystemCore_NetworkHandler(unaff_RSI + 1);
          if ((unaff_BPL == *pcVar10) &&
             (pfVar7 = (float *)FUN_1805b6b40(unaff_RSI + 1),
             unaff_XMM10_Da < *pfVar7 || unaff_XMM10_Da == *pfVar7)) {
            if ((((int)unaff_RSI[0x284] == 1) ||
                (((unaff_BPL == '\0' || ((int)unaff_RSI[0x295] == 1)) ||
                 (pcVar10 = (char *)SystemCore_NetworkHandler(unaff_RSI + 1), *pcVar10 != cVar3)))) &&
               ((piVar9 = (int *)SystemCore_ResourceHandler0(unaff_RSI + 1), 1 < *piVar9 ||
                (unaff_XMM10_Da <
                 (float)(*(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2df] * 8) -
                        unaff_RSI[0x2de]) * unaff_XMM12_Da)))) goto LAB_1805cdf27;
            goto LAB_1805cdf8d;
          }
          goto LAB_1805cdfa0;
        }
      }
      else {
        if ((uVar13 & 0x20) == 0) {
          uVar13 = uVar13 | 0x20;
          unaff_RSI[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          *(uint *)(unaff_RSI + 2) = uVar13;
          lVar6 = unaff_RSI[0x15];
        }
        if ((*(int *)(lVar6 + 0x30) <= (int)uVar15) ||
           (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0)
                       ) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) <= sVar14)))) goto LAB_1805cdb67;
        if ((uVar13 & 0x20) == 0) {
          unaff_RSI[0x15] = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          *(uint *)(unaff_RSI + 2) = uVar13 | 0x20;
          lVar6 = unaff_RSI[0x15];
        }
        if ((*(byte *)((int64_t)
                       *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                               *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10
            ) == 0) goto LAB_1805cdb67;
LAB_1805cdf8d:
        if (*(int *)((int64_t)unaff_RSI + 0x178c) == 9) goto LAB_1805cdfa0;
      }
      *(int32_t *)((int64_t)unaff_RSI + 0x178c) = 1;
    }
    else {
      if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_RSI + 1);
      }
      if (unaff_RSI[0x1e] == unaff_R12) goto LAB_1805cd86d;
      if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if ((((lVar6 != 0) &&
           (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), (int)uVar15 < *(int *)(lVar6 + 0x30))) &&
          (((*(uint *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0))
             >> 9 & 1) == 0 || (sVar14 < *(short *)(lVar6 + 8))))) &&
         (lVar6 = func_0x0001805b6e80(unaff_RSI + 1),
         (*(byte *)((int64_t)
                    *(int *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                            *(int64_t *)(lVar6 + 0xd0)) * 0x170 + 0x140 + system_system_ui) & 0x10)
         != 0)) goto LAB_1805cd86d;
      if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_RSI + 1);
      }
      if (((((*(byte *)((int64_t)*(int *)(unaff_RSI[0x1e] + 0xf0) * 0xa0 + 0x50 +
                       *(int64_t *)(unaff_RSI[0x1e] + 0xd0)) & 1) == 0) ||
           (pfVar7 = (float *)SystemCore_ConfigLoader(unaff_RSI + 1), unaff_XMM10_Da == *pfVar7)) ||
          (unaff_BPL != '\0')) ||
         (pcVar10 = (char *)SystemCore_NetworkHandler(unaff_RSI + 1), *pcVar10 != cVar3)) goto LAB_1805cd86d;
      lVar6 = *unaff_RSI;
      cVar2 = func_0x00018051f6a0(lVar6);
      if (cVar2 == '\0') {
        fVar17 = *(float *)(lVar6 + 0x2e0);
      }
      else {
        fVar17 = *(float *)(lVar6 + 0x2dc);
      }
      FUN_1805b73f0(unaff_RSI + 1);
      uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(unaff_RSI + 0x272) = uVar13;
      piVar9 = (int *)SystemCore_ResourceHandler0(unaff_RSI + 1);
      fVar19 = (float)*piVar9;
      if (fVar19 <= 1.0) {
        fVar19 = 1.0;
      }
      if (fVar17 <= ((float)(uVar13 - 1) * 2.3283064e-10) / fVar19) goto LAB_1805cd86d;
      piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1);
      if (*piVar9 != 1) {
LAB_1805cd645:
        piVar9 = (int *)SystemCore_Executor(unaff_RSI + 1);
        if (*piVar9 == 2) {
          uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
          uVar13 = uVar13 >> 0x11 ^ uVar13;
          uVar13 = uVar13 << 5 ^ uVar13;
          *(uint *)(unaff_RSI + 0x272) = uVar13;
          fVar17 = *(float *)(*unaff_RSI + 0x32c);
          if (0.95 <= fVar17) {
            fVar17 = 0.95;
          }
          if ((float)(uVar13 - 1) * 2.3283064e-10 < fVar17) goto LAB_1805cd6a0;
        }
        goto LAB_1805cd86d;
      }
      uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(unaff_RSI + 0x272) = uVar13;
      fVar17 = *(float *)(*unaff_RSI + 0x32c) * unaff_XMM13_Da;
      if (0.95 <= fVar17) {
        fVar17 = 0.95;
      }
      if (fVar17 <= (float)(uVar13 - 1) * 2.3283064e-10) goto LAB_1805cd645;
LAB_1805cd6a0:
      cVar2 = func_0x0001805b7bd0();
      if ((cVar2 == '\0') && (cVar2 = FUN_1805d06b0(), cVar2 != '\0')) goto LAB_1805cd86d;
      lVar6 = SystemCore_MemoryAllocator(unaff_RSI + 1);
      uVar18 = extraout_XMM0_Qa;
      if (lVar6 == 0) {
LAB_1805cd7f2:
        func_0x0001805d89b0(uVar18,0x2000);
      }
      else {
        fVar17 = *(float *)(*unaff_RSI + 0x2e4);
        uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
        uVar13 = uVar13 >> 0x11 ^ uVar13;
        uVar13 = uVar13 << 5 ^ uVar13;
        *(uint *)(unaff_RSI + 0x272) = uVar13;
        fVar19 = (float)(uVar13 - 1) * 2.3283064e-10;
        uVar18 = (uint64_t)(uint)fVar19;
        if ((fVar17 * unaff_XMM13_Da <= fVar19) ||
           (lVar6 = SystemCore_MemoryAllocator(unaff_RSI + 1), uVar18 = extraout_XMM0_Qa_00,
           *(int *)(lVar6 + 0x1fc) != 2)) goto LAB_1805cd7f2;
        plVar1 = *(int64_t **)(lVar6 + 0x590);
        if (((int)plVar1[0x493] == -1) ||
           (((*(int *)((int64_t)(int)plVar1[0x493] * 0x68 + 0x58 + system_system_ui) != 0x14 ||
             (uVar18 = (**(code **)(*plVar1 + 0x90))(plVar1,1), (float)uVar18 < 0.1)) ||
            (uVar18 = (**(code **)(**(int64_t **)(lVar6 + 0x590) + 0x90))
                                (*(int64_t **)(lVar6 + 0x590),1), 0.4 <= (float)uVar18))))
        goto LAB_1805cd7f2;
        if (*(int **)(lVar6 + 0x280) == (int *)0x0) {
          iVar5 = -1;
        }
        else {
          iVar5 = **(int **)(lVar6 + 0x280);
        }
        if (iVar5 == 0) {
          lVar6 = *unaff_RSI;
LAB_1805cd82e:
          iVar5 = CoreSystem_OperationHandler(lVar6 + 0x28,0);
          uVar18 = extraout_XMM0_Qa_03;
          if (iVar5 == -1) goto LAB_1805cd7f2;
          uVar13 = 0x100;
        }
        else if (iVar5 == 1) {
          lVar6 = *unaff_RSI;
          iVar5 = CoreSystem_OperationHandler(lVar6 + 0x28,1);
          if (iVar5 == -1) goto LAB_1805cd82e;
          uVar13 = 0x200;
        }
        else {
          if (iVar5 == 2) {
            iVar5 = CoreSystem_OperationHandler(*unaff_RSI + 0x28,3);
            uVar13 = 0x80;
            uVar18 = extraout_XMM0_Qa_02;
          }
          else {
            if (iVar5 != 3) goto LAB_1805cd7f2;
            iVar5 = CoreSystem_OperationHandler(*unaff_RSI + 0x28,2);
            uVar13 = 0x40;
            uVar18 = extraout_XMM0_Qa_01;
          }
          if (iVar5 == -1) {
            uVar13 = uVar15;
          }
          if (uVar13 == 0) goto LAB_1805cd7f2;
        }
        unaff_RSI[0x2e9] = *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ea] * 8);
        *(uint *)((int64_t)unaff_RSI + 0x158c) = *(uint *)((int64_t)unaff_RSI + 0x158c) | uVar13;
        *(int32_t *)((int64_t)unaff_RSI + 0x178c) = 7;
        *(char *)(unaff_RSI + 0x2e4) = cVar3;
      }
    }
  }
LAB_1805cdfa0:
  cVar3 = func_0x0001805b7d30();
  if ((cVar3 == '\0') && (lVar6 = func_0x0001805b7270(unaff_RSI + 1), lVar6 != 0)) {
    if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RSI + 1);
    }
    lVar6 = unaff_RSI[0x1e];
    if (lVar6 != 0) {
      if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_RSI + 1);
        lVar6 = unaff_RSI[0x1e];
      }
      if ((*(byte *)((int64_t)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar6 + 0xd0))
           >> 1 & 1) != 0) {
        lVar6 = SystemCore_MemoryAllocator(unaff_RSI + 1);
        iVar5 = *(int *)(*(int64_t *)(lVar6 + 0x590) + 0x2498);
        if ((iVar5 != -1) && (0xe < *(int *)((int64_t)iVar5 * 0x68 + 0x58 + system_system_ui))) {
          lVar6 = SystemCore_MemoryAllocator(unaff_RSI + 1);
          iVar5 = *(int *)(*(int64_t *)(lVar6 + 0x590) + 0x2498);
          if ((iVar5 == -1) || (*(int *)((int64_t)iVar5 * 0x68 + 0x58 + system_system_ui) < 0x12)) {
            if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
              bVar4 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
              *(byte *)((int64_t)unaff_RSI + 0x11c) = bVar4;
            }
            else {
              bVar4 = *(byte *)((int64_t)unaff_RSI + 0x11c);
            }
            if ((bVar4 == 0) ||
               (pfVar7 = (float *)FUN_1805b6a70(unaff_RSI + 1), unaff_XMM13_Da < *pfVar7)) {
              lVar6 = *unaff_RSI;
              uVar12 = FUN_1805a0900(lVar6 + 0x28,4);
              fVar17 = (float)FUN_1805b2b20(lVar6 + 0x138,uVar12);
              *(int32_t *)(unaff_RSI + 0x2f1) = 0x1000;
              lVar6 = *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ee] * 8);
              fVar19 = (float)(lVar6 - unaff_RSI[0x2ed]) * unaff_XMM12_Da;
              if ((fVar19 < -100.0) || (fVar19 < -fVar17)) {
                lVar6 = lVar6 - (int64_t)(-fVar17 * 100000.0);
LAB_1805ce16e:
                unaff_RSI[0x2ed] = lVar6;
              }
              else if (unaff_XMM10_Da < fVar19) goto LAB_1805ce16e;
              unaff_RSI[0x42d] =
                   *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x42e] * 8) + 400000;
              goto LAB_1805ce1a9;
            }
          }
        }
      }
    }
  }
  cVar3 = func_0x0001805b7d30();
  if (cVar3 == '\0') {
    RenderingSystem_DrawCallManager();
  }
LAB_1805ce1a9:
  if ((*(uint *)((int64_t)unaff_RSI + 0x178c) == uVar15) &&
     (*(uint *)((int64_t)unaff_RSI + 0x178c) = uVar15, *(int *)(*unaff_RSI + 0x1fc) - 1U < 2)) {
    *(uint *)((int64_t)unaff_RSI + 0x158c) =
         *(uint *)((int64_t)unaff_RSI + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805cdfb9(void)
void FUN_1805cdfb9(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int64_t lVar4;
  float *pfVar5;
  uint64_t uVar6;
  int64_t *unaff_RSI;
  int unaff_R12D;
  int64_t unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  cVar2 = func_0x0001805b7d30();
  if ((cVar2 == '\0') && (lVar4 = func_0x0001805b7270(unaff_RSI + 1), lVar4 != 0)) {
    if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RSI + 1);
    }
    lVar4 = unaff_RSI[0x1e];
    if (lVar4 != 0) {
      if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_RSI + 1);
        lVar4 = unaff_RSI[0x1e];
      }
      if ((*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0))
           >> 1 & 1) != 0) {
        lVar4 = SystemCore_MemoryAllocator(unaff_RSI + 1);
        iVar1 = *(int *)(*(int64_t *)(lVar4 + 0x590) + 0x2498);
        if ((iVar1 != -1) && (0xe < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_ui))) {
          lVar4 = SystemCore_MemoryAllocator(unaff_RSI + 1);
          iVar1 = *(int *)(*(int64_t *)(lVar4 + 0x590) + 0x2498);
          if ((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_ui) < 0x12)) {
            if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
              bVar3 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
              *(byte *)((int64_t)unaff_RSI + 0x11c) = bVar3;
            }
            else {
              bVar3 = *(byte *)((int64_t)unaff_RSI + 0x11c);
            }
            if ((bVar3 == 0) ||
               (pfVar5 = (float *)FUN_1805b6a70(unaff_RSI + 1), unaff_XMM13_Da < *pfVar5)) {
              lVar4 = *unaff_RSI;
              uVar6 = FUN_1805a0900(lVar4 + 0x28,4);
              fVar7 = (float)FUN_1805b2b20(lVar4 + 0x138,uVar6);
              *(int32_t *)(unaff_RSI + 0x2f1) = 0x1000;
              lVar4 = *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ee] * 8);
              fVar8 = (float)(lVar4 - unaff_RSI[0x2ed]) * unaff_XMM12_Da;
              if ((fVar8 < -100.0) || (fVar8 < -fVar7)) {
                lVar4 = lVar4 - (int64_t)(-fVar7 * 100000.0);
LAB_1805ce16e:
                unaff_RSI[0x2ed] = lVar4;
              }
              else if (unaff_XMM10_Da < fVar8) goto LAB_1805ce16e;
              unaff_RSI[0x42d] =
                   *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x42e] * 8) + 400000;
              goto LAB_1805ce1a9;
            }
          }
        }
      }
    }
  }
  cVar2 = func_0x0001805b7d30();
  if (cVar2 == '\0') {
    RenderingSystem_DrawCallManager();
  }
LAB_1805ce1a9:
  if ((*(int *)((int64_t)unaff_RSI + 0x178c) == unaff_R12D) &&
     (*(int *)((int64_t)unaff_RSI + 0x178c) = unaff_R12D, *(int *)(*unaff_RSI + 0x1fc) - 1U < 2)) {
    *(uint *)((int64_t)unaff_RSI + 0x158c) =
         *(uint *)((int64_t)unaff_RSI + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805cdfd9(void)
void FUN_1805cdfd9(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int64_t lVar4;
  float *pfVar5;
  uint64_t uVar6;
  int64_t *unaff_RSI;
  int unaff_R12D;
  int64_t unaff_R15;
  float fVar7;
  float fVar8;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  lVar4 = func_0x0001805b7270(unaff_RSI + 1);
  if (lVar4 != 0) {
    if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RSI + 1);
    }
    lVar4 = unaff_RSI[0x1e];
    if (lVar4 != 0) {
      if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
        func_0x0001805d4cd0(unaff_RSI + 1);
        lVar4 = unaff_RSI[0x1e];
      }
      if ((*(byte *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0))
           >> 1 & 1) != 0) {
        lVar4 = SystemCore_MemoryAllocator(unaff_RSI + 1);
        iVar1 = *(int *)(*(int64_t *)(lVar4 + 0x590) + 0x2498);
        if ((iVar1 != -1) && (0xe < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_ui))) {
          lVar4 = SystemCore_MemoryAllocator(unaff_RSI + 1);
          iVar1 = *(int *)(*(int64_t *)(lVar4 + 0x590) + 0x2498);
          if ((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_ui) < 0x12)) {
            if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
              bVar2 = (byte)((uint)*(int32_t *)(*(int64_t *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
              *(byte *)((int64_t)unaff_RSI + 0x11c) = bVar2;
            }
            else {
              bVar2 = *(byte *)((int64_t)unaff_RSI + 0x11c);
            }
            if ((bVar2 == 0) ||
               (pfVar5 = (float *)FUN_1805b6a70(unaff_RSI + 1), unaff_XMM13_Da < *pfVar5)) {
              lVar4 = *unaff_RSI;
              uVar6 = FUN_1805a0900(lVar4 + 0x28,4);
              fVar7 = (float)FUN_1805b2b20(lVar4 + 0x138,uVar6);
              *(int32_t *)(unaff_RSI + 0x2f1) = 0x1000;
              lVar4 = *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x2ee] * 8);
              fVar8 = (float)(lVar4 - unaff_RSI[0x2ed]) * unaff_XMM12_Da;
              if ((fVar8 < -100.0) || (fVar8 < -fVar7)) {
                lVar4 = lVar4 - (int64_t)(-fVar7 * 100000.0);
LAB_1805ce16e:
                unaff_RSI[0x2ed] = lVar4;
              }
              else if (unaff_XMM10_Da < fVar8) goto LAB_1805ce16e;
              unaff_RSI[0x42d] =
                   *(int64_t *)(unaff_R15 + (int64_t)(int)unaff_RSI[0x42e] * 8) + 400000;
              goto LAB_1805ce1a9;
            }
          }
        }
      }
    }
  }
  cVar3 = func_0x0001805b7d30();
  if (cVar3 == '\0') {
    RenderingSystem_DrawCallManager();
  }
LAB_1805ce1a9:
  if ((*(int *)((int64_t)unaff_RSI + 0x178c) == unaff_R12D) &&
     (*(int *)((int64_t)unaff_RSI + 0x178c) = unaff_R12D, *(int *)(*unaff_RSI + 0x1fc) - 1U < 2)) {
    *(uint *)((int64_t)unaff_RSI + 0x158c) =
         *(uint *)((int64_t)unaff_RSI + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}






// 函数: void FUN_1805ce1dc(void)
void FUN_1805ce1dc(void)

{
  int64_t *unaff_RSI;
  int32_t unaff_R12D;
  
  *(int32_t *)((int64_t)unaff_RSI + 0x178c) = unaff_R12D;
  if (*(int *)(*unaff_RSI + 0x1fc) - 1U < 2) {
    *(uint *)((int64_t)unaff_RSI + 0x158c) =
         *(uint *)((int64_t)unaff_RSI + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




