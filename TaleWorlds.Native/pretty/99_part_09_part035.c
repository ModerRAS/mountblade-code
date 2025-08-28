#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part035.c - 1 个函数

// 函数: void FUN_1805cd0c1(void)
void FUN_1805cd0c1(void)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  int *piVar8;
  char *pcVar9;
  longlong lVar10;
  float *pfVar11;
  uint64_t uVar12;
  uint uVar13;
  char unaff_BPL;
  longlong *unaff_RSI;
  short sVar14;
  uint uVar15;
  longlong unaff_R12;
  char unaff_R14B;
  longlong unaff_R15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  uint64_t extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong uVar18;
  ulonglong extraout_XMM0_Qa_02;
  ulonglong extraout_XMM0_Qa_03;
  ulonglong extraout_XMM0_Qa_04;
  float fVar19;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  uVar15 = (uint)unaff_R12;
  *(uint *)(unaff_RSI + 0x405) = uVar15;
  if (((unaff_R14B == '\0') && ((*(uint *)((longlong)unaff_RSI + 0x209c) >> 2 & 1) != 0)) &&
     (lVar6 = func_0x0001805b7270(unaff_RSI + 1), lVar6 != 0)) {
    *(int32_t *)((longlong)unaff_RSI + 0x178c) = 9;
  }
  else {
    if ((*(uint *)(unaff_RSI + 2) & 0x4000) == 0) {
      FUN_1805d53a0(unaff_RSI + 1);
    }
    cVar3 = (char)unaff_R12;
    sVar14 = (short)unaff_R12;
    if ((*(char *)((longlong)unaff_RSI + 0xc3) != cVar3) &&
       ((*(byte *)(unaff_RSI + 0x269) & 2) != 0)) {
      if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if ((((lVar6 == 0) ||
           (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) <= (int)uVar15)) ||
          (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0))
             >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) <= sVar14)))) ||
         (lVar6 = func_0x0001805b6e80(unaff_RSI + 1),
         (*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)) {
        cVar3 = func_0x0001805b7d30();
        if (cVar3 == '\0') {
          func_0x0001805d89b0(extraout_XMM0_Qa,0x4000);
        }
        else {
          FUN_1805caef0();
        }
        goto FUN_1805cdfb9;
      }
    }
    if (unaff_R14B == '\0') {
      if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
        FUN_1805d4440(unaff_RSI + 1);
      }
      if (*(float *)(unaff_RSI + 0x1b) == 0.0) goto LAB_1805cd41e;
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
        FUN_1805d4440(unaff_RSI + 1);
        uVar13 = *(uint *)(unaff_RSI + 2);
      }
      if ((*(char *)((longlong)unaff_RSI + 0xd5) == cVar3) || (unaff_BPL == '\0')) {
LAB_1805cd360:
        fVar19 = 1.0;
      }
      else {
        if ((uVar13 & 0x20) == 0) {
          lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          unaff_RSI[0x15] = lVar6;
          *(uint *)(unaff_RSI + 2) = uVar13 | 0x20;
        }
        else {
          lVar6 = unaff_RSI[0x15];
        }
        if (lVar6 == 0) goto LAB_1805cd360;
        lVar6 = func_0x0001805b6e80(unaff_RSI + 1);
        if ((*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0))
            & 0x40) == 0) {
          pfVar11 = (float *)func_0x0001805b7020(unaff_RSI + 1);
          pfVar7 = (float *)FUN_1805b7580(unaff_RSI + 1);
          if (*pfVar11 <= *pfVar7 * 0.77) goto LAB_1805cd360;
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
          ((piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 != 1 &&
           (piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 != 2)))) ||
         ((piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1), *piVar8 < 2 &&
          ((float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2df] * 8) - unaff_RSI[0x2de]
                  ) * unaff_XMM12_Da <= 0.0)))) goto LAB_1805cd41e;
LAB_1805cdf27:
      *(int32_t *)((longlong)unaff_RSI + 0x178c) = 6;
      uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
      uVar13 = uVar13 >> 0x11 ^ uVar13;
      uVar13 = uVar13 << 5 ^ uVar13;
      *(uint *)(unaff_RSI + 0x272) = uVar13;
      unaff_RSI[0x2eb] =
           *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ec] * 8) -
           (longlong)(-60000.004 - (float)(uVar13 - 1) * 1.1641532e-05);
    }
    else {
LAB_1805cd41e:
      lVar6 = func_0x0001805b7270(unaff_RSI + 1);
      if (lVar6 != 0) {
        if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RSI + 1);
        }
        if (unaff_RSI[0x1e] != unaff_R12) {
          if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
            lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
            unaff_RSI[0x15] = lVar6;
            *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
          }
          else {
            lVar6 = unaff_RSI[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) <= (int)uVar15))
              || (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) != 0 &&
                  (*(short *)(lVar6 + 8) <= sVar14)))) ||
             (lVar6 = func_0x0001805b6e80(unaff_RSI + 1),
             (*(byte *)((longlong)
                        *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                                *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) &
             0x10) == 0)) {
            if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
              func_0x0001805d4cd0(unaff_RSI + 1);
            }
            if (((((*(byte *)((longlong)*(int *)(unaff_RSI[0x1e] + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(unaff_RSI[0x1e] + 0xd0)) & 1) != 0) &&
                 (pfVar11 = (float *)FUN_1805b7450(unaff_RSI + 1), *pfVar11 != 0.0)) &&
                (unaff_BPL == '\0')) &&
               (pcVar9 = (char *)FUN_1805b7540(unaff_RSI + 1), *pcVar9 == cVar3)) {
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
              piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1);
              fVar19 = (float)*piVar8;
              if (fVar19 <= 1.0) {
                fVar19 = 1.0;
              }
              if (((float)(uVar13 - 1) * 2.3283064e-10) / fVar19 < fVar17) {
                piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1);
                if (*piVar8 == 1) {
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
                  if ((cVar2 != '\0') || (cVar2 = FUN_1805d06b0(), cVar2 == '\0')) {
                    lVar6 = FUN_1805b74c0(unaff_RSI + 1);
                    uVar18 = extraout_XMM0_Qa_00;
                    if (lVar6 != 0) {
                      fVar17 = *(float *)(*unaff_RSI + 0x2e4);
                      uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
                      uVar13 = uVar13 >> 0x11 ^ uVar13;
                      uVar13 = uVar13 << 5 ^ uVar13;
                      *(uint *)(unaff_RSI + 0x272) = uVar13;
                      fVar19 = (float)(uVar13 - 1) * 2.3283064e-10;
                      uVar18 = (ulonglong)(uint)fVar19;
                      if ((fVar19 < fVar17 * unaff_XMM13_Da) &&
                         (lVar6 = FUN_1805b74c0(unaff_RSI + 1), uVar18 = extraout_XMM0_Qa_01,
                         *(int *)(lVar6 + 0x1fc) == 2)) {
                        plVar1 = *(longlong **)(lVar6 + 0x590);
                        if (((int)plVar1[0x493] != -1) &&
                           (((*(int *)((longlong)(int)plVar1[0x493] * 0x68 + 0x58 + _DAT_180c96150)
                              == 0x14 &&
                             (uVar18 = (**(code **)(*plVar1 + 0x90))(plVar1,1), 0.1 <= (float)uVar18
                             )) && (uVar18 = (**(code **)(**(longlong **)(lVar6 + 0x590) + 0x90))
                                                       (*(longlong **)(lVar6 + 0x590),1),
                                   (float)uVar18 < 0.4)))) {
                          if (*(int **)(lVar6 + 0x280) == (int *)0x0) {
                            iVar5 = -1;
                          }
                          else {
                            iVar5 = **(int **)(lVar6 + 0x280);
                          }
                          if (iVar5 == 0) {
                            lVar6 = *unaff_RSI;
LAB_1805cd82e:
                            iVar5 = FUN_1805a0a20(lVar6 + 0x28,0);
                            uVar18 = extraout_XMM0_Qa_04;
                            if (iVar5 == -1) goto LAB_1805cd7f2;
                            uVar13 = 0x100;
                          }
                          else if (iVar5 == 1) {
                            lVar6 = *unaff_RSI;
                            iVar5 = FUN_1805a0a20(lVar6 + 0x28,1);
                            if (iVar5 == -1) goto LAB_1805cd82e;
                            uVar13 = 0x200;
                          }
                          else {
                            if (iVar5 == 2) {
                              iVar5 = FUN_1805a0a20(*unaff_RSI + 0x28,3);
                              uVar13 = 0x80;
                              uVar18 = extraout_XMM0_Qa_03;
                            }
                            else {
                              if (iVar5 != 3) goto LAB_1805cd7f2;
                              iVar5 = FUN_1805a0a20(*unaff_RSI + 0x28,2);
                              uVar13 = 0x40;
                              uVar18 = extraout_XMM0_Qa_02;
                            }
                            if (iVar5 == -1) {
                              uVar13 = uVar15;
                            }
                            if (uVar13 == 0) goto LAB_1805cd7f2;
                          }
                          unaff_RSI[0x2e9] =
                               *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ea] * 8);
                          *(uint *)((longlong)unaff_RSI + 0x158c) =
                               *(uint *)((longlong)unaff_RSI + 0x158c) | uVar13;
                          *(int32_t *)((longlong)unaff_RSI + 0x178c) = 7;
                          *(char *)(unaff_RSI + 0x2e4) = cVar3;
                          goto FUN_1805cdfb9;
                        }
                      }
                    }
LAB_1805cd7f2:
                    func_0x0001805d89b0(uVar18,0x2000);
                    goto FUN_1805cdfb9;
                  }
                }
                else {
LAB_1805cd645:
                  piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1);
                  if (*piVar8 == 2) {
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
                }
              }
            }
          }
        }
      }
      if ((unaff_R14B == '\0') && ((*(byte *)(*unaff_RSI + 0x56c) & 0x10) != 0)) {
        if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RSI + 1);
        }
        if (unaff_RSI[0x1e] == unaff_R12) {
          if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
            lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
            unaff_RSI[0x15] = lVar6;
            *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
          }
          else {
            lVar6 = unaff_RSI[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) <= (int)uVar15))
              || (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) != 0 &&
                  (*(short *)(lVar6 + 8) <= sVar14)))) &&
             ((pfVar11 = (float *)FUN_1805b7450(unaff_RSI + 1), *pfVar11 != 0.0 &&
              ((piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 == 1 ||
               (piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 == 2)))))) {
            uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
            uVar13 = uVar13 >> 0x11 ^ uVar13;
            uVar13 = uVar13 << 5 ^ uVar13;
            *(uint *)(unaff_RSI + 0x272) = uVar13;
            FUN_1805b7740(unaff_RSI + 1);
            powf((float)(uVar13 - 1) * 2.3283064e-10);
            piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1);
            fVar17 = unaff_XMM13_Da;
            if (*piVar8 != 1) {
              fVar17 = 1.0;
            }
            fVar17 = fVar17 * *(float *)(*unaff_RSI + 0x32c);
            if (0.95 <= fVar17) {
              fVar17 = 0.95;
            }
            if ((extraout_XMM0_Da < fVar17) &&
               ((piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1), 1 < *piVar8 ||
                (0.0 < (float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2df] * 8) -
                              unaff_RSI[0x2de]) * unaff_XMM12_Da)))) {
              uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
              uVar13 = uVar13 >> 0x11 ^ uVar13;
              uVar13 = uVar13 << 5 ^ uVar13;
              *(uint *)(unaff_RSI + 0x272) = uVar13;
              unaff_RSI[0x2eb] =
                   *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ec] * 8) -
                   (longlong)(-129999.99 - (float)(uVar13 - 1) * 4.656613e-05);
              *(int32_t *)((longlong)unaff_RSI + 0x178c) = 6;
              goto FUN_1805cdfb9;
            }
          }
        }
      }
      uVar13 = *(uint *)(unaff_RSI + 2);
      if ((uVar13 & 0x20) == 0) {
        uVar13 = uVar13 | 0x20;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = uVar13;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if (lVar6 == 0) {
LAB_1805cdb67:
        if ((unaff_BPL == '\0') &&
           (pfVar11 = (float *)FUN_1805b6a70(unaff_RSI + 1), *pfVar11 <= 0.70710677))
        goto LAB_1805cdf8d;
        if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
          FUN_1805d4440(unaff_RSI + 1);
        }
        if ((*(char *)((longlong)unaff_RSI + 0xd4) == cVar3) ||
           (((unaff_RSI[0x41e] == unaff_R12 ||
             ((1 < (int)unaff_RSI[0x295] - 5U &&
              (((*(byte *)((longlong)unaff_RSI + 0x209c) & 1) == 0 ||
               ((*(byte *)(unaff_RSI + 0x413) & 1) == 0)))))) &&
            (cVar2 = FUN_1805d06b0(), cVar2 != '\0')))) goto LAB_1805cdf8d;
        if (0.0 < (float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2dd] * 8) -
                         unaff_RSI[0x2dc]) * unaff_XMM12_Da) {
          cVar2 = func_0x0001805b7bd0();
          if (((cVar2 == '\0') &&
              (pfVar11 = (float *)FUN_1805b6b40(unaff_RSI + 1), 0.0 < *pfVar11 || *pfVar11 == 0.0))
             && ((int)unaff_RSI[0x295] != 3)) {
            pcVar9 = (char *)FUN_1805b7540(unaff_RSI + 1);
            if (unaff_BPL == *pcVar9) {
              piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1);
              fVar17 = (float)*piVar8;
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
          cVar2 = FUN_1805b7ac0();
          if (cVar2 != '\0') {
            uVar13 = *(uint *)(unaff_RSI + 2);
            if ((uVar13 & 0x40) == 0) {
              FUN_1805d4040(unaff_RSI + 1);
              uVar13 = *(uint *)(unaff_RSI + 2);
            }
            if ((uVar13 >> 0x19 & 1) == 0) {
              fVar17 = *(float *)(*(longlong *)unaff_RSI[1] + 0x7dc);
              *(float *)((longlong)unaff_RSI + 0xb4) = fVar17;
              *(uint *)(unaff_RSI + 2) = uVar13 | 0x2000000;
            }
            else {
              fVar17 = *(float *)((longlong)unaff_RSI + 0xb4);
            }
            if (((*(float *)((longlong)unaff_RSI + 0xbc) <= fVar17 &&
                  fVar17 != *(float *)((longlong)unaff_RSI + 0xbc)) &&
                (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), lVar6 != 0)) &&
               ((lVar6 = func_0x0001805b6e80(unaff_RSI + 1), (int)uVar15 < *(int *)(lVar6 + 0x30) &&
                (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                            *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) == 0 ||
                 (sVar14 < *(short *)(lVar6 + 8))))))) {
              lVar6 = func_0x0001805b6e80(unaff_RSI + 1);
              lVar10 = func_0x0001805b6e80(unaff_RSI + 1);
              if (((float)*(int *)((longlong)*(int *)(lVar10 + 0xf0) * 0xa0 + 0x7c +
                                  *(longlong *)(lVar10 + 0xd0)) * 5.0 <
                   (float)*(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x78 +
                                  *(longlong *)(lVar6 + 0xd0))) ||
                 (fVar17 = *(float *)(*unaff_RSI + 0x2f8),
                 uVar13 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272),
                 uVar13 = uVar13 >> 0x11 ^ uVar13, uVar13 = uVar13 << 5 ^ uVar13,
                 *(uint *)(unaff_RSI + 0x272) = uVar13, (float)(uVar13 - 1) * 2.3283064e-10 < fVar17
                 )) {
                *(uint *)(unaff_RSI + 0x27a) = *(uint *)(unaff_RSI + 0x27a) | 0x8000;
                *(int32_t *)((longlong)unaff_RSI + 0x178c) = 10;
                goto FUN_1805cdfb9;
              }
            }
          }
          pfVar11 = (float *)FUN_1805b6e50(unaff_RSI + 1);
          if (1000.0 < *pfVar11 || *pfVar11 == 1000.0) {
            lVar6 = *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ea] * 8);
          }
          else {
            pfVar11 = (float *)FUN_1805b6e50(unaff_RSI + 1);
            lVar6 = *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ea] * 8) -
                    (longlong)(*pfVar11 * -100000.0);
          }
          unaff_RSI[0x2e9] = lVar6;
          *(int32_t *)((longlong)unaff_RSI + 0x178c) = 7;
          *(char *)(unaff_RSI + 0x2e4) = cVar3;
          *(uint *)(unaff_RSI + 0x2f1) = uVar15;
          unaff_RSI[0x2ed] =
               *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ee] * 8) + -0x8000000000000000;
          goto FUN_1805cdfb9;
        }
LAB_1805cde99:
        if ((int)unaff_RSI[0x295] != 3) {
          pcVar9 = (char *)FUN_1805b7540(unaff_RSI + 1);
          if ((unaff_BPL == *pcVar9) &&
             (pfVar11 = (float *)FUN_1805b6b40(unaff_RSI + 1), 0.0 < *pfVar11 || *pfVar11 == 0.0)) {
            if ((((int)unaff_RSI[0x284] == 1) ||
                (((unaff_BPL == '\0' || ((int)unaff_RSI[0x295] == 1)) ||
                 (pcVar9 = (char *)FUN_1805b7540(unaff_RSI + 1), *pcVar9 != cVar3)))) &&
               ((piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1), 1 < *piVar8 ||
                (0.0 < (float)(*(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2df] * 8) -
                              unaff_RSI[0x2de]) * unaff_XMM12_Da)))) goto LAB_1805cdf27;
            goto LAB_1805cdf8d;
          }
          goto FUN_1805cdfb9;
        }
      }
      else {
        if ((uVar13 & 0x20) == 0) {
          uVar13 = uVar13 | 0x20;
          unaff_RSI[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          *(uint *)(unaff_RSI + 2) = uVar13;
          lVar6 = unaff_RSI[0x15];
        }
        if ((*(int *)(lVar6 + 0x30) <= (int)uVar15) ||
           (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)
                       ) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) <= sVar14)))) goto LAB_1805cdb67;
        if ((uVar13 & 0x20) == 0) {
          unaff_RSI[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          *(uint *)(unaff_RSI + 2) = uVar13 | 0x20;
          lVar6 = unaff_RSI[0x15];
        }
        if ((*(byte *)((longlong)
                       *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                               *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10
            ) == 0) goto LAB_1805cdb67;
LAB_1805cdf8d:
        if (*(int *)((longlong)unaff_RSI + 0x178c) == 9) goto FUN_1805cdfb9;
      }
      *(int32_t *)((longlong)unaff_RSI + 0x178c) = 1;
    }
  }
FUN_1805cdfb9:
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
      if ((*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0))
           >> 1 & 1) != 0) {
        lVar6 = FUN_1805b74c0(unaff_RSI + 1);
        iVar5 = *(int *)(*(longlong *)(lVar6 + 0x590) + 0x2498);
        if ((iVar5 != -1) && (0xe < *(int *)((longlong)iVar5 * 0x68 + 0x58 + _DAT_180c96150))) {
          lVar6 = FUN_1805b74c0(unaff_RSI + 1);
          iVar5 = *(int *)(*(longlong *)(lVar6 + 0x590) + 0x2498);
          if ((iVar5 == -1) || (*(int *)((longlong)iVar5 * 0x68 + 0x58 + _DAT_180c96150) < 0x12)) {
            if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
              bVar4 = (byte)((uint)*(int32_t *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
              *(byte *)((longlong)unaff_RSI + 0x11c) = bVar4;
            }
            else {
              bVar4 = *(byte *)((longlong)unaff_RSI + 0x11c);
            }
            if ((bVar4 == 0) ||
               (pfVar11 = (float *)FUN_1805b6a70(unaff_RSI + 1), unaff_XMM13_Da < *pfVar11)) {
              lVar6 = *unaff_RSI;
              uVar12 = FUN_1805a0900(lVar6 + 0x28,4);
              fVar17 = (float)FUN_1805b2b20(lVar6 + 0x138,uVar12);
              *(int32_t *)(unaff_RSI + 0x2f1) = 0x1000;
              lVar6 = *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x2ee] * 8);
              fVar19 = (float)(lVar6 - unaff_RSI[0x2ed]) * unaff_XMM12_Da;
              if ((fVar19 < -100.0) || (fVar19 < -fVar17)) {
                lVar6 = lVar6 - (longlong)(-fVar17 * 100000.0);
LAB_1805ce16e:
                unaff_RSI[0x2ed] = lVar6;
              }
              else if (0.0 < fVar19) goto LAB_1805ce16e;
              unaff_RSI[0x42d] =
                   *(longlong *)(unaff_R15 + (longlong)(int)unaff_RSI[0x42e] * 8) + 400000;
              goto LAB_1805ce1a9;
            }
          }
        }
      }
    }
  }
  cVar3 = func_0x0001805b7d30();
  if (cVar3 == '\0') {
    FUN_1805caef0();
  }
LAB_1805ce1a9:
  if ((*(uint *)((longlong)unaff_RSI + 0x178c) == uVar15) &&
     (*(uint *)((longlong)unaff_RSI + 0x178c) = uVar15, *(int *)(*unaff_RSI + 0x1fc) - 1U < 2)) {
    *(uint *)((longlong)unaff_RSI + 0x158c) =
         *(uint *)((longlong)unaff_RSI + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




