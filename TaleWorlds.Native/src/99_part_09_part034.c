#include "TaleWorlds.Native.Split.h"

// 99_part_09_part034.c - 1 个函数

// 函数: void FUN_1805ccfa3(longlong *param_1,uint param_2)
void FUN_1805ccfa3(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong in_RAX;
  longlong lVar6;
  float *pfVar7;
  int *piVar8;
  char *pcVar9;
  byte *pbVar10;
  longlong lVar11;
  float *pfVar12;
  undefined8 uVar13;
  uint uVar14;
  byte bVar15;
  undefined8 unaff_RBP;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong uVar18;
  ulonglong extraout_XMM0_Qa_02;
  ulonglong extraout_XMM0_Qa_03;
  ulonglong extraout_XMM0_Qa_04;
  float fVar19;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + 0x18) = unaff_RDI;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R14;
  *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  *(undefined4 *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(undefined4 *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(undefined4 *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(undefined4 *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  bVar15 = (byte)((uint)*(undefined4 *)(*param_1 + 0x564) >> 0x1f) ^ 1;
  if ((param_2 & 0x20) == 0) {
    param_2 = param_2 | 0x20;
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    unaff_RSI[0x15] = lVar6;
    *(uint *)(unaff_RSI + 2) = param_2;
  }
  else {
    lVar6 = param_1[0x15];
  }
  if (lVar6 == 0) {
LAB_1805cd0a2:
    bVar2 = false;
  }
  else {
    if ((param_2 & 0x20) == 0) {
      param_2 = param_2 | 0x20;
      unaff_RSI[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
      *(uint *)(unaff_RSI + 2) = param_2;
      lVar6 = unaff_RSI[0x15];
    }
    if ((*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)) &
        0x40) == 0) goto LAB_1805cd0a2;
    if ((param_2 >> 9 & 1) == 0) {
      func_0x0001805d4cd0(unaff_RSI + 1);
    }
    if ((char)unaff_RSI[0x20] == '\0') goto LAB_1805cd0a2;
    if ((*(uint *)(unaff_RSI + 2) & 0x8000000) == 0) {
      bVar3 = (byte)((uint)*(undefined4 *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
      *(byte *)((longlong)unaff_RSI + 0x11c) = bVar3;
    }
    else {
      bVar3 = *(byte *)((longlong)unaff_RSI + 0x11c);
    }
    if (bVar3 != 0) goto LAB_1805cd0a2;
    bVar2 = true;
  }
  *(undefined4 *)(unaff_RSI + 0x405) = 0;
  if (((bVar2) || ((*(uint *)((longlong)unaff_RSI + 0x209c) >> 2 & 1) == 0)) ||
     (lVar6 = func_0x0001805b7270(unaff_RSI + 1), lVar6 == 0)) {
    if ((*(uint *)(unaff_RSI + 2) & 0x4000) == 0) {
      FUN_1805d53a0(unaff_RSI + 1);
    }
    if ((*(char *)((longlong)unaff_RSI + 0xc3) != '\0') && ((*(byte *)(unaff_RSI + 0x269) & 2) != 0)
       ) {
      if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if ((((lVar6 == 0) || (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) < 1)
           ) || (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                            *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) != 0 &&
                 (*(short *)(lVar6 + 8) < 1)))) ||
         (lVar6 = func_0x0001805b6e80(unaff_RSI + 1),
         (*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)) {
        cVar4 = func_0x0001805b7d30();
        if (cVar4 == '\0') {
          func_0x0001805d89b0(extraout_XMM0_Qa,0x4000);
        }
        else {
          FUN_1805caef0();
        }
        goto FUN_1805cdfb9;
      }
    }
    if (bVar2) {
LAB_1805cd41e:
      lVar6 = func_0x0001805b7270(unaff_RSI + 1);
      if (lVar6 != 0) {
        if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RSI + 1);
        }
        if (unaff_RSI[0x1e] != 0) {
          if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
            lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
            unaff_RSI[0x15] = lVar6;
            *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
          }
          else {
            lVar6 = unaff_RSI[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) < 1)) ||
              (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                          *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)
               ))) || (lVar6 = func_0x0001805b6e80(unaff_RSI + 1),
                      (*(byte *)((longlong)
                                 *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                                         *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 +
                                _DAT_180c95ff0) & 0x10) == 0)) {
            if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
              func_0x0001805d4cd0(unaff_RSI + 1);
            }
            if (((((*(byte *)((longlong)*(int *)(unaff_RSI[0x1e] + 0xf0) * 0xa0 + 0x50 +
                             *(longlong *)(unaff_RSI[0x1e] + 0xd0)) & 1) != 0) &&
                 (pfVar12 = (float *)FUN_1805b7450(unaff_RSI + 1), *pfVar12 != 0.0)) &&
                (bVar15 == 0)) && (pcVar9 = (char *)FUN_1805b7540(unaff_RSI + 1), *pcVar9 == '\0'))
            {
              lVar6 = *unaff_RSI;
              cVar4 = func_0x00018051f6a0(lVar6);
              if (cVar4 == '\0') {
                fVar17 = *(float *)(lVar6 + 0x2e0);
              }
              else {
                fVar17 = *(float *)(lVar6 + 0x2dc);
              }
              FUN_1805b73f0(unaff_RSI + 1);
              uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
              uVar14 = uVar14 >> 0x11 ^ uVar14;
              uVar14 = uVar14 << 5 ^ uVar14;
              *(uint *)(unaff_RSI + 0x272) = uVar14;
              piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1);
              fVar19 = (float)*piVar8;
              if (fVar19 <= 1.0) {
                fVar19 = 1.0;
              }
              if (((float)(uVar14 - 1) * 2.3283064e-10) / fVar19 < fVar17) {
                piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1);
                if (*piVar8 == 1) {
                  uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
                  uVar14 = uVar14 >> 0x11 ^ uVar14;
                  uVar14 = uVar14 << 5 ^ uVar14;
                  *(uint *)(unaff_RSI + 0x272) = uVar14;
                  fVar17 = *(float *)(*unaff_RSI + 0x32c) * 0.5;
                  if (0.95 <= fVar17) {
                    fVar17 = 0.95;
                  }
                  if (fVar17 <= (float)(uVar14 - 1) * 2.3283064e-10) goto LAB_1805cd645;
LAB_1805cd6a0:
                  cVar4 = func_0x0001805b7bd0();
                  if ((cVar4 != '\0') || (cVar4 = FUN_1805d06b0(), cVar4 == '\0')) {
                    lVar6 = FUN_1805b74c0(unaff_RSI + 1);
                    uVar18 = extraout_XMM0_Qa_00;
                    if (lVar6 != 0) {
                      fVar17 = *(float *)(*unaff_RSI + 0x2e4);
                      uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
                      uVar14 = uVar14 >> 0x11 ^ uVar14;
                      uVar14 = uVar14 << 5 ^ uVar14;
                      *(uint *)(unaff_RSI + 0x272) = uVar14;
                      fVar19 = (float)(uVar14 - 1) * 2.3283064e-10;
                      uVar18 = (ulonglong)(uint)fVar19;
                      if ((fVar19 < fVar17 * 0.5) &&
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
                            uVar14 = 0x100;
                          }
                          else if (iVar5 == 1) {
                            lVar6 = *unaff_RSI;
                            iVar5 = FUN_1805a0a20(lVar6 + 0x28,1);
                            if (iVar5 == -1) goto LAB_1805cd82e;
                            uVar14 = 0x200;
                          }
                          else {
                            if (iVar5 == 2) {
                              iVar5 = FUN_1805a0a20(*unaff_RSI + 0x28,3);
                              uVar14 = 0x80;
                              uVar18 = extraout_XMM0_Qa_03;
                            }
                            else {
                              if (iVar5 != 3) goto LAB_1805cd7f2;
                              iVar5 = FUN_1805a0a20(*unaff_RSI + 0x28,2);
                              uVar14 = 0x40;
                              uVar18 = extraout_XMM0_Qa_02;
                            }
                            if (iVar5 == -1) {
                              uVar14 = 0;
                            }
                            if (uVar14 == 0) goto LAB_1805cd7f2;
                          }
                          unaff_RSI[0x2e9] =
                               *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ea] * 8);
                          *(uint *)((longlong)unaff_RSI + 0x158c) =
                               *(uint *)((longlong)unaff_RSI + 0x158c) | uVar14;
                          *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 7;
                          *(undefined1 *)(unaff_RSI + 0x2e4) = 0;
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
                    uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
                    uVar14 = uVar14 >> 0x11 ^ uVar14;
                    uVar14 = uVar14 << 5 ^ uVar14;
                    *(uint *)(unaff_RSI + 0x272) = uVar14;
                    fVar17 = *(float *)(*unaff_RSI + 0x32c);
                    if (0.95 <= fVar17) {
                      fVar17 = 0.95;
                    }
                    if ((float)(uVar14 - 1) * 2.3283064e-10 < fVar17) goto LAB_1805cd6a0;
                  }
                }
              }
            }
          }
        }
      }
      if ((!bVar2) && ((*(byte *)(*unaff_RSI + 0x56c) & 0x10) != 0)) {
        if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RSI + 1);
        }
        if (unaff_RSI[0x1e] == 0) {
          if ((*(uint *)(unaff_RSI + 2) & 0x20) == 0) {
            lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
            unaff_RSI[0x15] = lVar6;
            *(uint *)(unaff_RSI + 2) = *(uint *)(unaff_RSI + 2) | 0x20;
          }
          else {
            lVar6 = unaff_RSI[0x15];
          }
          if ((((lVar6 == 0) ||
               (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), *(int *)(lVar6 + 0x30) < 1)) ||
              (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                          *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)
               ))) && ((pfVar12 = (float *)FUN_1805b7450(unaff_RSI + 1), *pfVar12 != 0.0 &&
                       ((piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 == 1 ||
                        (piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 == 2)))))) {
            uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
            uVar14 = uVar14 >> 0x11 ^ uVar14;
            uVar14 = uVar14 << 5 ^ uVar14;
            *(uint *)(unaff_RSI + 0x272) = uVar14;
            FUN_1805b7740(unaff_RSI + 1);
            powf((float)(uVar14 - 1) * 2.3283064e-10);
            piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1);
            if (*piVar8 == 1) {
              fVar17 = 0.5;
            }
            else {
              fVar17 = 1.0;
            }
            fVar17 = fVar17 * *(float *)(*unaff_RSI + 0x32c);
            if (0.95 <= fVar17) {
              fVar17 = 0.95;
            }
            if ((extraout_XMM0_Da < fVar17) &&
               ((piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1), 1 < *piVar8 ||
                (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2df] * 8) -
                              unaff_RSI[0x2de]) * 1e-05)))) {
              uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
              uVar14 = uVar14 >> 0x11 ^ uVar14;
              uVar14 = uVar14 << 5 ^ uVar14;
              *(uint *)(unaff_RSI + 0x272) = uVar14;
              unaff_RSI[0x2eb] =
                   *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ec] * 8) -
                   (longlong)(-129999.99 - (float)(uVar14 - 1) * 4.656613e-05);
              *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 6;
              goto FUN_1805cdfb9;
            }
          }
        }
      }
      uVar14 = *(uint *)(unaff_RSI + 2);
      if ((uVar14 & 0x20) == 0) {
        uVar14 = uVar14 | 0x20;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
        unaff_RSI[0x15] = lVar6;
        *(uint *)(unaff_RSI + 2) = uVar14;
      }
      else {
        lVar6 = unaff_RSI[0x15];
      }
      if (lVar6 == 0) {
LAB_1805cdb67:
        if ((bVar15 == 0) &&
           (pfVar12 = (float *)FUN_1805b6a70(unaff_RSI + 1), *pfVar12 <= 0.70710677))
        goto LAB_1805cdf8d;
        if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
          FUN_1805d4440(unaff_RSI + 1);
        }
        if ((*(char *)((longlong)unaff_RSI + 0xd4) == '\0') ||
           (((unaff_RSI[0x41e] == 0 ||
             ((1 < (int)unaff_RSI[0x295] - 5U &&
              (((*(byte *)((longlong)unaff_RSI + 0x209c) & 1) == 0 ||
               ((*(byte *)(unaff_RSI + 0x413) & 1) == 0)))))) &&
            (cVar4 = FUN_1805d06b0(), cVar4 != '\0')))) goto LAB_1805cdf8d;
        if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2dd] * 8) -
                         unaff_RSI[0x2dc]) * 1e-05) {
          cVar4 = func_0x0001805b7bd0();
          if (((cVar4 == '\0') &&
              (pfVar12 = (float *)FUN_1805b6b40(unaff_RSI + 1), 0.0 < *pfVar12 || *pfVar12 == 0.0))
             && ((int)unaff_RSI[0x295] != 3)) {
            pbVar10 = (byte *)FUN_1805b7540(unaff_RSI + 1);
            if (bVar15 == *pbVar10) {
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
            uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
            uVar14 = uVar14 >> 0x11 ^ uVar14;
            uVar14 = uVar14 << 5 ^ uVar14;
            *(uint *)(unaff_RSI + 0x272) = uVar14;
            if (fVar19 <= (float)(uVar14 - 1) * 2.3283064e-10 * fVar17) goto LAB_1805cde99;
          }
          cVar4 = FUN_1805b7ac0();
          if (cVar4 != '\0') {
            uVar14 = *(uint *)(unaff_RSI + 2);
            if ((uVar14 & 0x40) == 0) {
              FUN_1805d4040(unaff_RSI + 1);
              uVar14 = *(uint *)(unaff_RSI + 2);
            }
            if ((uVar14 >> 0x19 & 1) == 0) {
              fVar17 = *(float *)(*(longlong *)unaff_RSI[1] + 0x7dc);
              *(float *)((longlong)unaff_RSI + 0xb4) = fVar17;
              *(uint *)(unaff_RSI + 2) = uVar14 | 0x2000000;
            }
            else {
              fVar17 = *(float *)((longlong)unaff_RSI + 0xb4);
            }
            if (((*(float *)((longlong)unaff_RSI + 0xbc) <= fVar17 &&
                  fVar17 != *(float *)((longlong)unaff_RSI + 0xbc)) &&
                (lVar6 = func_0x0001805b6e80(unaff_RSI + 1), lVar6 != 0)) &&
               ((lVar6 = func_0x0001805b6e80(unaff_RSI + 1), 0 < *(int *)(lVar6 + 0x30) &&
                (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 +
                            *(longlong *)(lVar6 + 0xd0)) >> 9 & 1) == 0 ||
                 (0 < *(short *)(lVar6 + 8))))))) {
              lVar6 = func_0x0001805b6e80(unaff_RSI + 1);
              lVar11 = func_0x0001805b6e80(unaff_RSI + 1);
              if (((float)*(int *)((longlong)*(int *)(lVar11 + 0xf0) * 0xa0 + 0x7c +
                                  *(longlong *)(lVar11 + 0xd0)) * 5.0 <
                   (float)*(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x78 +
                                  *(longlong *)(lVar6 + 0xd0))) ||
                 (fVar17 = *(float *)(*unaff_RSI + 0x2f8),
                 uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272),
                 uVar14 = uVar14 >> 0x11 ^ uVar14, uVar14 = uVar14 << 5 ^ uVar14,
                 *(uint *)(unaff_RSI + 0x272) = uVar14, (float)(uVar14 - 1) * 2.3283064e-10 < fVar17
                 )) {
                *(uint *)(unaff_RSI + 0x27a) = *(uint *)(unaff_RSI + 0x27a) | 0x8000;
                *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 10;
                goto FUN_1805cdfb9;
              }
            }
          }
          pfVar12 = (float *)FUN_1805b6e50(unaff_RSI + 1);
          if (1000.0 < *pfVar12 || *pfVar12 == 1000.0) {
            lVar6 = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ea] * 8);
          }
          else {
            pfVar12 = (float *)FUN_1805b6e50(unaff_RSI + 1);
            lVar6 = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ea] * 8) -
                    (longlong)(*pfVar12 * -100000.0);
          }
          unaff_RSI[0x2e9] = lVar6;
          *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 7;
          *(undefined1 *)(unaff_RSI + 0x2e4) = 0;
          *(undefined4 *)(unaff_RSI + 0x2f1) = 0;
          unaff_RSI[0x2ed] =
               *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ee] * 8) +
               -0x8000000000000000;
          goto FUN_1805cdfb9;
        }
LAB_1805cde99:
        if ((int)unaff_RSI[0x295] != 3) {
          pbVar10 = (byte *)FUN_1805b7540(unaff_RSI + 1);
          if ((bVar15 == *pbVar10) &&
             (pfVar12 = (float *)FUN_1805b6b40(unaff_RSI + 1), 0.0 < *pfVar12 || *pfVar12 == 0.0)) {
            if ((((int)unaff_RSI[0x284] == 1) ||
                (((bVar15 == 0 || ((int)unaff_RSI[0x295] == 1)) ||
                 (pcVar9 = (char *)FUN_1805b7540(unaff_RSI + 1), *pcVar9 != '\0')))) &&
               ((piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1), 1 < *piVar8 ||
                (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2df] * 8) -
                              unaff_RSI[0x2de]) * 1e-05)))) goto LAB_1805cdf27;
            goto LAB_1805cdf8d;
          }
          goto FUN_1805cdfb9;
        }
      }
      else {
        if ((uVar14 & 0x20) == 0) {
          uVar14 = uVar14 | 0x20;
          unaff_RSI[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          *(uint *)(unaff_RSI + 2) = uVar14;
          lVar6 = unaff_RSI[0x15];
        }
        if ((*(int *)(lVar6 + 0x30) < 1) ||
           (((*(uint *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0)
                       ) >> 9 & 1) != 0 && (*(short *)(lVar6 + 8) < 1)))) goto LAB_1805cdb67;
        if ((uVar14 & 0x20) == 0) {
          unaff_RSI[0x15] = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          *(uint *)(unaff_RSI + 2) = uVar14 | 0x20;
          lVar6 = unaff_RSI[0x15];
        }
        if ((*(byte *)((longlong)
                       *(int *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 100 +
                               *(longlong *)(lVar6 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10
            ) == 0) goto LAB_1805cdb67;
LAB_1805cdf8d:
        if (*(int *)((longlong)unaff_RSI + 0x178c) == 9) goto FUN_1805cdfb9;
      }
      *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 1;
    }
    else {
      if ((*(byte *)(unaff_RSI + 2) & 0x80) == 0) {
        FUN_1805d4440(unaff_RSI + 1);
      }
      if (*(float *)(unaff_RSI + 0x1b) == 0.0) goto LAB_1805cd41e;
      if ((((int)unaff_RSI[0x284] != 1) && (bVar15 != 0)) && ((int)unaff_RSI[0x295] != 1)) {
        if ((*(uint *)(unaff_RSI + 2) & 0x200) == 0) {
          func_0x0001805d4cd0(unaff_RSI + 1);
        }
        if ((char)unaff_RSI[0x20] == '\0') goto LAB_1805cd41e;
      }
      lVar6 = *unaff_RSI;
      cVar4 = func_0x00018051f6a0(lVar6);
      if (cVar4 == '\0') {
        fVar17 = *(float *)(lVar6 + 0x2e0);
      }
      else {
        fVar17 = *(float *)(lVar6 + 0x2dc);
      }
      uVar14 = *(uint *)(unaff_RSI + 2);
      if (-1 < (char)uVar14) {
        FUN_1805d4440(unaff_RSI + 1);
        uVar14 = *(uint *)(unaff_RSI + 2);
      }
      if ((*(char *)((longlong)unaff_RSI + 0xd5) == '\0') || (bVar15 == 0)) {
LAB_1805cd360:
        fVar19 = 1.0;
      }
      else {
        if ((uVar14 & 0x20) == 0) {
          lVar6 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RSI[1] + 0x8f8) + 0x9e8);
          unaff_RSI[0x15] = lVar6;
          *(uint *)(unaff_RSI + 2) = uVar14 | 0x20;
        }
        else {
          lVar6 = unaff_RSI[0x15];
        }
        if (lVar6 == 0) goto LAB_1805cd360;
        lVar6 = func_0x0001805b6e80(unaff_RSI + 1);
        if ((*(byte *)((longlong)*(int *)(lVar6 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar6 + 0xd0))
            & 0x40) == 0) {
          pfVar12 = (float *)func_0x0001805b7020(unaff_RSI + 1);
          pfVar7 = (float *)FUN_1805b7580(unaff_RSI + 1);
          if (*pfVar12 <= *pfVar7 * 0.77) goto LAB_1805cd360;
        }
        fVar19 = 0.1;
      }
      uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
      uVar14 = uVar14 >> 0x11 ^ uVar14;
      uVar14 = uVar14 << 5 ^ uVar14;
      *(uint *)(unaff_RSI + 0x272) = uVar14;
      if ((*(uint *)(unaff_RSI + 2) & 0x10000000) == 0) {
        FUN_1805d5680(unaff_RSI + 1);
      }
      fVar16 = (float)powf((float)(uVar14 - 1) * 2.3283064e-10);
      if (((fVar19 * fVar17 <= fVar16) ||
          ((piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 != 1 &&
           (piVar8 = (int *)FUN_1805b7660(unaff_RSI + 1), *piVar8 != 2)))) ||
         ((piVar8 = (int *)FUN_1805b7740(unaff_RSI + 1), *piVar8 < 2 &&
          ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2df] * 8) -
                  unaff_RSI[0x2de]) * 1e-05 <= 0.0)))) goto LAB_1805cd41e;
LAB_1805cdf27:
      *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 6;
      uVar14 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
      uVar14 = uVar14 >> 0x11 ^ uVar14;
      uVar14 = uVar14 << 5 ^ uVar14;
      *(uint *)(unaff_RSI + 0x272) = uVar14;
      unaff_RSI[0x2eb] =
           *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ec] * 8) -
           (longlong)(-60000.004 - (float)(uVar14 - 1) * 1.1641532e-05);
    }
  }
  else {
    *(undefined4 *)((longlong)unaff_RSI + 0x178c) = 9;
  }
FUN_1805cdfb9:
  cVar4 = func_0x0001805b7d30();
  if ((cVar4 == '\0') && (lVar6 = func_0x0001805b7270(unaff_RSI + 1), lVar6 != 0)) {
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
              bVar15 = (byte)((uint)*(undefined4 *)(*(longlong *)unaff_RSI[1] + 0x564) >> 0x1f) ^ 1;
              *(byte *)((longlong)unaff_RSI + 0x11c) = bVar15;
            }
            else {
              bVar15 = *(byte *)((longlong)unaff_RSI + 0x11c);
            }
            if ((bVar15 == 0) || (pfVar12 = (float *)FUN_1805b6a70(unaff_RSI + 1), 0.5 < *pfVar12))
            {
              lVar6 = *unaff_RSI;
              uVar13 = FUN_1805a0900(lVar6 + 0x28,4);
              fVar17 = (float)FUN_1805b2b20(lVar6 + 0x138,uVar13);
              *(undefined4 *)(unaff_RSI + 0x2f1) = 0x1000;
              lVar6 = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x2ee] * 8);
              fVar19 = (float)(lVar6 - unaff_RSI[0x2ed]) * 1e-05;
              if ((fVar19 < -100.0) || (fVar19 < -fVar17)) {
                lVar6 = lVar6 - (longlong)(-fVar17 * 100000.0);
LAB_1805ce16e:
                unaff_RSI[0x2ed] = lVar6;
              }
              else if (0.0 < fVar19) goto LAB_1805ce16e;
              unaff_RSI[0x42d] =
                   *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RSI[0x42e] * 8) + 400000;
              goto LAB_1805ce1a9;
            }
          }
        }
      }
    }
  }
  cVar4 = func_0x0001805b7d30();
  if (cVar4 == '\0') {
    FUN_1805caef0();
  }
LAB_1805ce1a9:
  if ((*(int *)((longlong)unaff_RSI + 0x178c) == 0) &&
     (*(undefined4 *)((longlong)unaff_RSI + 0x178c) = 0, *(int *)(*unaff_RSI + 0x1fc) - 1U < 2)) {
    *(uint *)((longlong)unaff_RSI + 0x158c) =
         *(uint *)((longlong)unaff_RSI + 0x158c) & 0xfffffc3f | 0x4000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




