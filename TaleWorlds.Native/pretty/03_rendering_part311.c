#include "TaleWorlds.Native.Split.h"

// 03_rendering_part311.c - 5 个函数

// 函数: void FUN_180432170(longlong param_1,float param_2,float *param_3,undefined1 param_4)
void FUN_180432170(longlong param_1,float param_2,float *param_3,undefined1 param_4)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = (longlong)*(int *)(param_1 + 0x10);
  if (0 < lVar6) {
    pfVar5 = (float *)(param_1 + 0x30);
    do {
      fVar8 = *param_3;
      if (fVar8 == 0.0) {
        pfVar5[-3] = param_2;
        *pfVar5 = param_2;
LAB_180432215:
        *(undefined1 *)(pfVar5 + 2) = param_4;
        pfVar5[-2] = param_2;
        pfVar5[-1] = 0.0;
        pfVar5[1] = fVar8;
        fVar9 = param_2;
      }
      else {
        fVar7 = pfVar5[-2];
        fVar1 = pfVar5[-3];
        fVar9 = fVar7;
        if (fVar1 != fVar7) {
          fVar7 = (float)func_0x0001804352f0(pfVar5 + -6);
        }
        if (((param_2 != fVar9) || (fVar8 != pfVar5[1])) || (fVar7 != fVar1)) {
          *pfVar5 = fVar1;
          goto LAB_180432215;
        }
      }
      if (*(longlong **)(pfVar5 + 8) != (longlong *)0x0) {
        lVar2 = **(longlong **)(pfVar5 + 8);
        if (0.0001 < fVar9) {
          cVar3 = (**(code **)(lVar2 + 0xd8))();
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(**(longlong **)(pfVar5 + 8) + 0x80))();
            if (cVar3 != '\0') goto LAB_1804322b7;
          }
          plVar4 = *(longlong **)(pfVar5 + 8);
          pfVar5[8] = 0.0;
          pfVar5[9] = 0.0;
        }
        else {
          cVar3 = (**(code **)(lVar2 + 0xd8))();
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(**(longlong **)(pfVar5 + 8) + 0x80))();
            if (cVar3 != '\0') {
              (**(code **)(**(longlong **)(pfVar5 + 8) + 0x68))();
            }
          }
          plVar4 = *(longlong **)(pfVar5 + 8);
          pfVar5[8] = 0.0;
          pfVar5[9] = 0.0;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
LAB_1804322b7:
      pfVar5 = pfVar5 + 0x12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}





// 函数: void FUN_1804322f0(longlong param_1,float param_2,longlong param_3)
void FUN_1804322f0(longlong param_1,float param_2,longlong param_3)

{
  float *pfVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  uVar19 = 0xfffffffffffffffe;
  fVar18 = 0.0;
  lVar11 = *(longlong *)(param_3 + 0x208);
  fVar15 = *(float *)(param_1 + 0x1190);
  if (0.0 < fVar15) {
    fVar13 = fVar15 - param_2 * 3.0;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    fVar15 = 1.0 - (fVar15 - fVar13) / fVar15;
    *(float *)(param_1 + 0x1190) = fVar13;
    cVar8 = '\0';
    if ('\0' < *(char *)(param_1 + 0x1180)) {
      do {
        uVar6 = (ulonglong)cVar8;
        pfVar5 = (float *)(param_1 + 0x140 + (uVar6 + 0x82) * 0x10);
        fVar13 = pfVar5[1];
        fVar16 = pfVar5[2];
        fVar17 = pfVar5[3];
        pfVar1 = (float *)(param_1 + 0x140 + (uVar6 + 0x82) * 0x10);
        *pfVar1 = fVar15 * *pfVar5;
        pfVar1[1] = fVar15 * fVar13;
        pfVar1[2] = fVar15 * fVar16;
        pfVar1[3] = fVar15 * fVar17;
        *(ulonglong *)(param_1 + 0x940) =
             *(ulonglong *)(param_1 + 0x940) |
             *(ulonglong *)(uVar6 * 0x1b0 + *(longlong *)(lVar11 + 0x140) + 0xe8);
        *(ulonglong *)(param_1 + 0x948) = *(ulonglong *)(param_1 + 0x948) | 1L << (uVar6 & 0x3f);
        cVar8 = cVar8 + '\x01';
      } while (cVar8 < *(char *)(param_1 + 0x1180));
    }
    *(ulonglong *)(param_1 + 0x940) =
         *(ulonglong *)(param_1 + 0x940) | *(ulonglong *)(param_1 + 0x950);
    *(float *)(param_1 + 0x1170) = fVar15 * *(float *)(param_1 + 0x1170);
    *(float *)(param_1 + 0x1174) = fVar15 * *(float *)(param_1 + 0x1174);
    *(float *)(param_1 + 0x1178) = fVar15 * *(float *)(param_1 + 0x1178);
    *(undefined4 *)(param_1 + 0x117c) = 0x7f7fffff;
    *(ulonglong *)(param_1 + 0x940) =
         *(ulonglong *)(param_1 + 0x940) | *(ulonglong *)(param_1 + 0x950);
    *(float *)(param_1 + 0x1160) = fVar15 * *(float *)(param_1 + 0x1160);
    *(float *)(param_1 + 0x1164) = fVar15 * *(float *)(param_1 + 0x1164);
    *(float *)(param_1 + 0x1168) = fVar15 * *(float *)(param_1 + 0x1168);
    *(undefined4 *)(param_1 + 0x116c) = 0x7f7fffff;
  }
  lVar11 = 0;
  if (*(int *)(param_1 + 0x10) < 1) goto LAB_180432c9e;
  fVar15 = *(float *)(param_1 + 0x1190);
  iVar10 = *(int *)(param_1 + 0x10) + -1;
  if (iVar10 < 0) {
LAB_180432635:
    if (1.0 <= fVar18) {
      fVar18 = 1.0;
    }
  }
  else {
    pfVar5 = (float *)(param_1 + 0x2c + (longlong)iVar10 * 0x48);
    do {
      fVar13 = *pfVar5;
      *pfVar5 = param_2 + fVar13;
      fVar16 = pfVar5[-1];
      fVar17 = pfVar5[-2];
      if (fVar16 != fVar17) {
        fVar13 = (param_2 + fVar13) / pfVar5[2];
        if (1.0 <= fVar13) {
          fVar13 = 1.0;
        }
        if (*(char *)(pfVar5 + 3) == '\0') {
          fVar13 = ((fVar13 * 6.0 - 15.0) * fVar13 + 10.0) * fVar13 * fVar13 * fVar13;
        }
        fVar17 = fVar13 * (fVar16 - pfVar5[1]) + pfVar5[1];
        if (0.0 <= fVar17) {
          if (1.0 <= fVar17) {
            fVar17 = 1.0;
          }
        }
        else {
          fVar17 = 0.0;
        }
        pfVar5[-2] = fVar17;
      }
      fVar13 = pfVar5[-3];
      pfVar5[7] = fVar13;
      if (((uint)pfVar5[4] >> 0xe & 1) != 0) {
        fVar13 = fVar13 + (param_2 * pfVar5[6]) / *(float *)(*(longlong *)(pfVar5 + -5) + 0x188);
        pfVar5[-3] = fVar13;
      }
      if (1.0 < fVar13) {
        if (((uint)pfVar5[4] & 4) == 0) {
          pfVar5[-3] = 1.0;
        }
        else {
          fVar13 = (float)fmodf(fVar13,0x3f800000);
          pfVar5[-3] = fVar13;
        }
      }
      if ((0.0 < fVar17) || (fVar16 != 0.0)) {
        fVar18 = fVar18 + fVar16;
        fVar15 = fVar15 + fVar17;
      }
      else {
        FUN_180431fb0(param_1,iVar10);
      }
      pfVar5 = pfVar5 + -0x12;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
    if (0.0 <= fVar18) goto LAB_180432635;
    fVar18 = 0.0;
  }
  fVar13 = param_2 + *(float *)(param_1 + 0x11a0);
  *(float *)(param_1 + 0x11a0) = fVar13;
  lVar12 = (longlong)*(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) < 1) {
    *(undefined4 *)(param_1 + 0x1194) = 0;
    *(undefined4 *)(param_1 + 0x11a4) = 0;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x11a4);
    if (fVar18 != fVar16) {
      fVar17 = *(float *)(param_1 + -0x14 + lVar12 * 0x48);
      if ((fVar17 != *(float *)(param_1 + 0x119c)) ||
         ((((fVar13 = *(float *)(param_1 + 0x1194), fVar16 <= fVar13 || (fVar18 <= fVar13)) ||
           (fVar14 = *(float *)(param_1 + 0x1198), fVar13 <= fVar14)) &&
          (((fVar13 <= fVar16 || (fVar13 <= fVar18)) ||
           (fVar14 = *(float *)(param_1 + 0x1198), fVar14 <= fVar13)))))) {
        *(undefined4 *)(param_1 + 0x1198) = *(undefined4 *)(param_1 + 0x1194);
        *(undefined4 *)(param_1 + 0x119c) = *(undefined4 *)(param_1 + -0x14 + lVar12 * 0x48);
        *(float *)(param_1 + 0x11a0) = param_2;
        *(float *)(param_1 + 0x11a4) = fVar18;
        *(undefined1 *)(param_1 + 0x11a8) = *(undefined1 *)(param_1 + -0x10 + lVar12 * 0x48);
        fVar13 = param_2;
        fVar16 = fVar18;
      }
      else {
        fVar13 = (fVar13 - fVar14) / (fVar18 - fVar14);
        if (*(char *)(param_1 + -0x10 + lVar12 * 0x48) == '\0') {
          fVar13 = *(float *)(&UNK_180995ce0 + (longlong)(int)(fVar13 * 100000.0) * 4);
        }
        fVar13 = fVar13 * fVar17;
        *(float *)(param_1 + 0x11a0) = fVar13;
        *(float *)(param_1 + 0x11a4) = fVar18;
        *(undefined4 *)(param_1 + 0x119c) = *(undefined4 *)(param_1 + -0x14 + lVar12 * 0x48);
        fVar16 = fVar18;
      }
    }
    fVar18 = *(float *)(param_1 + 0x119c);
    if ((0.0 < fVar18) && (*(float *)(param_1 + 0x1194) != fVar16)) {
      if (fVar18 == *(float *)(param_1 + -0x14 + lVar12 * 0x48)) {
        cVar8 = *(char *)(param_1 + 0x11a8);
      }
      else {
        *(float *)(param_1 + 0x1198) = *(float *)(param_1 + 0x1194);
        *(float *)(param_1 + 0x11a0) = param_2;
        fVar18 = *(float *)(param_1 + -0x14 + lVar12 * 0x48);
        *(float *)(param_1 + 0x119c) = fVar18;
        cVar8 = *(char *)(param_1 + -0x10 + lVar12 * 0x48);
        *(char *)(param_1 + 0x11a8) = cVar8;
        fVar13 = param_2;
      }
      fVar13 = fVar13 / fVar18;
      if (1.0 <= fVar13) {
        fVar13 = 1.0;
      }
      if (cVar8 == '\0') {
        fVar18 = ((fVar13 * 6.0 - 15.0) * fVar13 + 10.0) * fVar13 * fVar13 * fVar13 *
                 (fVar16 - *(float *)(param_1 + 0x1198)) + *(float *)(param_1 + 0x1198);
        if (0.0 <= fVar18) {
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          *(float *)(param_1 + 0x1194) = fVar18;
        }
        else {
          *(undefined4 *)(param_1 + 0x1194) = 0;
        }
      }
      else {
        fVar18 = (fVar16 - *(float *)(param_1 + 0x1198)) * fVar13 + *(float *)(param_1 + 0x1198);
        if (0.0 <= fVar18) {
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          *(float *)(param_1 + 0x1194) = fVar18;
        }
        else {
          *(undefined4 *)(param_1 + 0x1194) = 0;
        }
      }
    }
  }
  if ((0.0 < fVar15) &&
     ((fVar18 = *(float *)(param_1 + 0x1194), fVar15 < fVar18 - 0.001 || (fVar18 + 0.001 <= fVar15))
     )) {
    fVar13 = 0.0;
    lVar4 = lVar11;
    if (3 < lVar12) {
      pfVar5 = (float *)(param_1 + 0x24);
      lVar7 = (lVar12 - 4U >> 2) + 1;
      lVar4 = lVar7 * 4;
      do {
        if (((fVar15 < fVar18) && (*pfVar5 < pfVar5[1])) ||
           ((fVar18 < fVar15 && (pfVar5[1] == 0.0)))) {
          fVar13 = fVar13 + *pfVar5;
        }
        if (((fVar15 < fVar18) && (pfVar5[0x12] < pfVar5[0x13])) ||
           ((fVar18 < fVar15 && (pfVar5[0x13] == 0.0)))) {
          fVar13 = fVar13 + pfVar5[0x12];
        }
        if (((fVar15 < fVar18) && (pfVar5[0x24] < pfVar5[0x25])) ||
           ((fVar18 < fVar15 && (pfVar5[0x25] == 0.0)))) {
          fVar13 = fVar13 + pfVar5[0x24];
        }
        if (((fVar15 < fVar18) && (pfVar5[0x36] < pfVar5[0x37])) ||
           ((fVar18 < fVar15 && (pfVar5[0x37] == 0.0)))) {
          fVar13 = fVar13 + pfVar5[0x36];
        }
        pfVar5 = pfVar5 + 0x48;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar4 < lVar12) {
      pfVar5 = (float *)(param_1 + 0x24 + lVar4 * 0x48);
      lVar4 = lVar12 - lVar4;
      do {
        if (((fVar15 < fVar18) && (*pfVar5 < pfVar5[1])) ||
           ((fVar18 < fVar15 && (pfVar5[1] == 0.0)))) {
          fVar13 = fVar13 + *pfVar5;
        }
        pfVar5 = pfVar5 + 0x12;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if ((fVar18 < fVar15) && (0.0 < *(float *)(param_1 + 0x1190))) {
      fVar13 = fVar13 + *(float *)(param_1 + 0x1190);
    }
    if (0.0 < fVar13) {
      fVar16 = (fVar18 - fVar15) / fVar13 + 1.0;
      fVar13 = fVar16;
      if (fVar16 < 0.0) {
        fVar13 = 0.0;
      }
      fVar17 = 0.0;
      lVar4 = lVar11;
      if (3 < lVar12) {
        pfVar5 = (float *)(param_1 + 0x24);
        lVar7 = (lVar12 - 4U >> 2) + 1;
        lVar4 = lVar7 * 4;
        do {
          fVar18 = *(float *)(param_1 + 0x1194);
          if ((fVar18 <= fVar15) || (fVar14 = *pfVar5, pfVar5[1] <= fVar14)) {
            if ((fVar18 < fVar15) && (pfVar5[1] == 0.0)) {
              fVar14 = *pfVar5;
              goto LAB_180432a4a;
            }
          }
          else {
LAB_180432a4a:
            fVar14 = fVar14 * fVar13;
            if (1.0 <= fVar14) {
              fVar14 = 1.0;
            }
            *pfVar5 = fVar14;
            fVar18 = *(float *)(param_1 + 0x1194);
          }
          if ((fVar18 <= fVar15) || (fVar14 = pfVar5[0x12], pfVar5[0x13] <= fVar14)) {
            if ((fVar18 < fVar15) && (pfVar5[0x13] == 0.0)) {
              fVar14 = pfVar5[0x12];
              goto LAB_180432a87;
            }
          }
          else {
LAB_180432a87:
            fVar14 = fVar14 * fVar13;
            if (1.0 <= fVar14) {
              fVar14 = 1.0;
            }
            pfVar5[0x12] = fVar14;
            fVar18 = *(float *)(param_1 + 0x1194);
          }
          if ((fVar18 <= fVar15) || (fVar14 = pfVar5[0x24], pfVar5[0x25] <= fVar14)) {
            if ((fVar18 < fVar15) && (pfVar5[0x25] == 0.0)) {
              fVar14 = pfVar5[0x24];
              goto LAB_180432ad2;
            }
          }
          else {
LAB_180432ad2:
            fVar14 = fVar14 * fVar13;
            if (1.0 <= fVar14) {
              fVar14 = 1.0;
            }
            pfVar5[0x24] = fVar14;
            fVar18 = *(float *)(param_1 + 0x1194);
          }
          if ((fVar18 <= fVar15) || (fVar14 = pfVar5[0x36], pfVar5[0x37] <= fVar14)) {
            if ((fVar18 < fVar15) && (pfVar5[0x37] == 0.0)) {
              fVar14 = pfVar5[0x36];
              goto LAB_180432b29;
            }
          }
          else {
LAB_180432b29:
            fVar14 = fVar14 * fVar13;
            if (1.0 <= fVar14) {
              fVar14 = 1.0;
            }
            pfVar5[0x36] = fVar14;
            fVar18 = *(float *)(param_1 + 0x1194);
          }
          fVar17 = fVar17 + *pfVar5 + pfVar5[0x12] + pfVar5[0x24] + pfVar5[0x36];
          pfVar5 = pfVar5 + 0x48;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar4 < lVar12) {
        pfVar5 = (float *)(param_1 + 0x24 + lVar4 * 0x48);
        lVar12 = lVar12 - lVar4;
        do {
          fVar18 = *(float *)(param_1 + 0x1194);
          if (((fVar15 < fVar18) && (*pfVar5 < pfVar5[1])) ||
             ((fVar18 < fVar15 && (pfVar5[1] == 0.0)))) {
            fVar18 = fVar13 * *pfVar5;
            if (1.0 <= fVar18) {
              fVar18 = 1.0;
            }
            *pfVar5 = fVar18;
            fVar18 = *(float *)(param_1 + 0x1194);
          }
          fVar17 = fVar17 + *pfVar5;
          pfVar5 = pfVar5 + 0x12;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if ((fVar18 < fVar15) && (0.0 < *(float *)(param_1 + 0x1190))) {
        *(float *)(param_1 + 0x1190) = *(float *)(param_1 + 0x1190) * fVar13;
      }
      fVar15 = fVar17 + *(float *)(param_1 + 0x1190);
      if (0.0 <= fVar16) goto LAB_180432c9e;
    }
    if (fVar15 <= 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = fVar18 / fVar15;
    }
    lVar12 = (longlong)*(int *)(param_1 + 0x10);
    if (3 < lVar12) {
      pfVar5 = (float *)(param_1 + 0x6c);
      lVar4 = (lVar12 - 4U >> 2) + 1;
      lVar11 = lVar4 * 4;
      do {
        pfVar5[-0x12] = fVar18 * pfVar5[-0x12];
        *pfVar5 = fVar18 * *pfVar5;
        pfVar5[0x12] = fVar18 * pfVar5[0x12];
        pfVar5[0x24] = fVar18 * pfVar5[0x24];
        pfVar5 = pfVar5 + 0x48;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar11 < lVar12) {
      pfVar5 = (float *)(param_1 + 0x24 + lVar11 * 0x48);
      lVar12 = lVar12 - lVar11;
      do {
        *pfVar5 = fVar18 * *pfVar5;
        pfVar5 = pfVar5 + 0x12;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    *(float *)(param_1 + 0x1190) = fVar18 * *(float *)(param_1 + 0x1190);
  }
LAB_180432c9e:
  lVar11 = (longlong)*(int *)(param_1 + 0x10);
  if (0 < lVar11) {
    plVar9 = (longlong *)(param_1 + 0x50);
    do {
      if ((((longlong *)*plVar9 != (longlong *)0x0) && (0.0 < *(float *)(plVar9 + 1))) &&
         (cVar8 = (**(code **)(*(longlong *)*plVar9 + 0xd8))(), cVar8 != '\0')) {
        fVar15 = (float)(**(code **)(*(longlong *)*plVar9 + 0xc0))();
        lVar12 = plVar9[-7];
        pfVar5 = (float *)(lVar12 + 0x78);
        iVar10 = 3;
        do {
          fVar18 = *pfVar5;
          if ((0.0 <= fVar18) && (fVar18 < *(float *)(plVar9 + 1))) {
            fVar18 = (*(float *)(lVar12 + 0x188) * (*(float *)(plVar9 + -6) - fVar18)) /
                     *(float *)((longlong)plVar9 + -0xc);
            if (param_2 + 0.1 + fVar15 < fVar18) {
              fVar18 = param_2 + 0.1 + fVar18;
              fVar15 = (float)(**(code **)(*(longlong *)*plVar9 + 0x118))
                                        ((longlong *)*plVar9,iVar10,lVar12,fVar15,uVar19);
              lVar12 = *(longlong *)*plVar9;
              if (fVar18 < fVar15) {
                (**(code **)(lVar12 + 200))((longlong *)*plVar9,fVar18);
              }
              else {
                (**(code **)(lVar12 + 0x68))();
                plVar2 = (longlong *)*plVar9;
                *plVar9 = 0;
                if (plVar2 != (longlong *)0x0) {
                  (**(code **)(*plVar2 + 0x38))();
                }
              }
            }
            break;
          }
          pfVar5 = pfVar5 + -1;
          bVar3 = 0 < iVar10;
          iVar10 = iVar10 + -1;
        } while (bVar3);
      }
      plVar9 = plVar9 + 9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}





// 函数: void FUN_180432e00(longlong param_1,int param_2,longlong param_3)
void FUN_180432e00(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  
  lVar5 = (longlong)param_2;
  *(float *)(param_1 + 0x1190) =
       *(float *)(param_1 + 0x24 + lVar5 * 0x48) + *(float *)(param_1 + 0x1190);
  fVar17 = *(float *)(param_1 + 0x20 + lVar5 * 0x48);
  lVar6 = *(longlong *)(param_1 + 0x18 + lVar5 * 0x48);
  iVar4 = *(int *)(lVar6 + 0x18c);
  fVar18 = (float)(*(int *)(lVar6 + 400) - iVar4) * fVar17 + (float)iVar4;
  cVar2 = FUN_1804044a0();
  if (cVar2 != '\0') {
    FUN_180404500(*(undefined8 *)(param_1 + 0x18 + lVar5 * 0x48),&fStack_58,fVar18);
    fVar12 = *(float *)(param_1 + 0x24 + lVar5 * 0x48);
    fStack_5c = *(float *)(param_1 + 0x116c);
    *(ulonglong *)(param_1 + 0x940) =
         *(ulonglong *)(param_1 + 0x940) | *(ulonglong *)(param_1 + 0x950);
    fStack_68 = fStack_58 * fVar12 + *(float *)(param_1 + 0x1160);
    fStack_64 = *(float *)(param_1 + 0x1164) + fVar12 * fStack_54;
    fStack_60 = *(float *)(param_1 + 0x1168) + fStack_50 * fVar12;
    *(float *)(param_1 + 0x1160) = fStack_68;
    *(float *)(param_1 + 0x1164) = fStack_64;
    *(float *)(param_1 + 0x1168) = fStack_60;
    *(float *)(param_1 + 0x116c) = fStack_5c;
  }
  lVar6 = FUN_18040db80(*(undefined8 *)(param_1 + 0x18 + lVar5 * 0x48));
  if (lVar6 != 0) {
    fVar17 = fVar17 / *(float *)(lVar6 + 0x18);
    fVar12 = *(float *)(param_1 + 0x24 + lVar5 * 0x48);
    if (1.0 <= fVar17) {
      fVar17 = 1.0;
    }
    fVar13 = *(float *)(lVar6 + 8);
    fVar14 = *(float *)(lVar6 + 0xc);
    fVar15 = *(float *)(lVar6 + 0x10);
    *(ulonglong *)(param_1 + 0x940) =
         *(ulonglong *)(param_1 + 0x940) | *(ulonglong *)(param_1 + 0x950);
    *(float *)(param_1 + 0x1170) = fVar17 * fVar13 * fVar12 + *(float *)(param_1 + 0x1170);
    *(float *)(param_1 + 0x1174) = fVar17 * fVar14 * fVar12 + *(float *)(param_1 + 0x1174);
    *(float *)(param_1 + 0x1178) = fVar17 * fVar15 * fVar12 + *(float *)(param_1 + 0x1178);
    *(undefined4 *)(param_1 + 0x117c) = 0x7f7fffff;
  }
  FUN_180404420(*(undefined8 *)(param_1 + 0x18 + lVar5 * 0x48));
  cVar2 = FUN_180404420(*(undefined8 *)(param_1 + 0x18 + lVar5 * 0x48));
  cVar7 = '\0';
  if ('\0' < cVar2) {
    pfVar9 = (float *)(param_1 + 0x960);
    uVar8 = 0;
    uVar10 = uVar8;
    do {
      uVar3 = FUN_180404730(*(undefined8 *)(param_1 + 0x18 + lVar5 * 0x48),&fStack_68,fVar18,cVar7);
      fVar17 = fStack_68 * *pfVar9;
      fVar12 = fStack_64 * pfVar9[1];
      fVar13 = fStack_60 * pfVar9[2];
      fVar14 = fStack_5c * pfVar9[3];
      fVar15 = fVar14 + fVar17;
      fVar16 = fVar13 + fVar12;
      auVar11._0_4_ = fVar16 + fVar15;
      auVar11._4_4_ = fVar15 + fVar16;
      auVar11._8_4_ = fVar15 + fVar12 + fVar13;
      auVar11._12_4_ = fVar16 + fVar17 + fVar14;
      iVar4 = movmskps(uVar3,auVar11);
      if (iVar4 != 0) {
        fStack_60 = -fStack_60;
        fStack_5c = -fStack_5c;
        fStack_68 = -fStack_68;
        fStack_64 = -fStack_64;
      }
      fVar17 = *(float *)(param_1 + 0x24 + lVar5 * 0x48);
      cVar7 = cVar7 + '\x01';
      *pfVar9 = fVar17 * fStack_68 + *pfVar9;
      pfVar9[1] = fVar17 * fStack_64 + pfVar9[1];
      pfVar9[2] = fVar17 * fStack_60 + pfVar9[2];
      pfVar9[3] = fVar17 * fStack_5c + pfVar9[3];
      pfVar9 = pfVar9 + 4;
      lVar6 = uVar8 + 0xe8;
      uVar8 = uVar8 + 0x1b0;
      *(ulonglong *)(param_1 + 0x940) =
           *(ulonglong *)(param_1 + 0x940) | *(ulonglong *)(lVar6 + *(longlong *)(param_3 + 0x140));
      uVar1 = uVar10 & 0x3f;
      uVar10 = uVar10 + 1;
      *(ulonglong *)(param_1 + 0x948) = *(ulonglong *)(param_1 + 0x948) | 1L << uVar1;
    } while (cVar7 < cVar2);
  }
  return;
}





// 函数: void FUN_180432fc2(void)
void FUN_180432fc2(void)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  longlong unaff_RDI;
  ulonglong uVar11;
  char unaff_R13B;
  float *pfVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint unaff_XMM6_Da;
  
  pfVar12 = (float *)(unaff_RBX + 0x960);
  uVar11 = 0;
  uVar13 = uVar11;
  do {
    uVar9 = FUN_180404730(*(undefined8 *)(unaff_RBX + 0x18 + unaff_RDI * 8),unaff_RBP + -0x40);
    fVar23 = *(float *)(unaff_RBP + -0x40);
    fVar15 = *(float *)(unaff_RBP + -0x3c);
    fVar20 = *(float *)(unaff_RBP + -0x38);
    fVar22 = *(float *)(unaff_RBP + -0x34);
    fVar5 = *pfVar12;
    fVar6 = pfVar12[1];
    fVar7 = pfVar12[2];
    fVar8 = pfVar12[3];
    fVar14 = fVar23 * fVar5;
    fVar16 = fVar15 * fVar6;
    fVar17 = fVar20 * fVar7;
    fVar18 = fVar22 * fVar8;
    fVar19 = fVar18 + fVar14;
    fVar21 = fVar17 + fVar16;
    auVar4._4_4_ = fVar19 + fVar21;
    auVar4._0_4_ = fVar21 + fVar19;
    auVar4._8_4_ = fVar19 + fVar16 + fVar17;
    auVar4._12_4_ = fVar21 + fVar14 + fVar18;
    iVar10 = movmskps(uVar9,auVar4);
    if (iVar10 != 0) {
      fVar23 = (float)(*(uint *)(unaff_RBP + -0x40) ^ unaff_XMM6_Da);
      fVar15 = (float)(*(uint *)(unaff_RBP + -0x3c) ^ unaff_XMM6_Da);
      fVar20 = (float)(*(uint *)(unaff_RBP + -0x38) ^ unaff_XMM6_Da);
      fVar22 = (float)(*(uint *)(unaff_RBP + -0x34) ^ unaff_XMM6_Da);
      *(float *)(unaff_RBP + -0x40) = fVar23;
      *(float *)(unaff_RBP + -0x3c) = fVar15;
      *(float *)(unaff_RBP + -0x38) = fVar20;
      *(float *)(unaff_RBP + -0x34) = fVar22;
    }
    fVar14 = *(float *)(unaff_RBX + 0x24 + unaff_RDI * 8);
    unaff_SIL = unaff_SIL + '\x01';
    lVar2 = *(longlong *)(unaff_RBP + 0x40);
    *pfVar12 = fVar14 * fVar23 + fVar5;
    pfVar12[1] = fVar14 * fVar15 + fVar6;
    pfVar12[2] = fVar14 * fVar20 + fVar7;
    pfVar12[3] = fVar14 * fVar22 + fVar8;
    pfVar12 = pfVar12 + 4;
    lVar1 = uVar11 + 0xe8;
    uVar11 = uVar11 + 0x1b0;
    *(ulonglong *)(unaff_RBX + 0x940) =
         *(ulonglong *)(unaff_RBX + 0x940) | *(ulonglong *)(lVar1 + *(longlong *)(lVar2 + 0x140));
    uVar3 = uVar13 & 0x3f;
    uVar13 = uVar13 + 1;
    *(ulonglong *)(unaff_RBX + 0x948) = *(ulonglong *)(unaff_RBX + 0x948) | 1L << uVar3;
  } while (unaff_SIL < unaff_R13B);
  return;
}





// 函数: void FUN_1804330e0(void)
void FUN_1804330e0(void)

{
  return;
}





