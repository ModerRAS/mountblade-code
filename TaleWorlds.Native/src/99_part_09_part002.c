#include "TaleWorlds.Native.Split.h"

// 99_part_09_part002.c - 4 个函数

// 函数: void FUN_1805bda40(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)
void FUN_1805bda40(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  undefined4 auStackX_18 [2];
  undefined1 auStackX_20 [8];
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
    param_1[0x15] = lVar2;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
  }
  else {
    lVar2 = param_1[0x15];
  }
  uVar5 = 0;
  uVar3 = FUN_1805bd630(param_1,param_2,param_3,lVar2,0,1);
  *param_4 = uVar3;
  lVar2 = *param_1;
  if ((param_2 == 0) ||
     ((*(longlong *)(lVar2 + 0x628) == param_2 && (*(int *)(lVar2 + 0x644) == (int)param_3)))) {
    uVar3 = *(undefined4 *)(lVar2 + 0x638);
    uVar1 = *(undefined4 *)(lVar2 + 0x63c);
  }
  else {
    puVar4 = auStackX_10;
    auStackX_10[0] = 0xffffffff;
    auStackX_8[0] = 0xffffffff;
    auStackX_18[0] = 0xffffffff;
    FUN_18050e440(lVar2,param_2,auStackX_8,auStackX_18,puVar4,auStackX_20,(int)param_3);
    uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
    lVar2 = *param_1;
    uVar1 = auStackX_18[0];
    uVar3 = auStackX_8[0];
  }
  FUN_1805bdb70(param_1,*param_4,
                (float)(*(longlong *)
                         (&DAT_180c8ed30 +
                         (longlong)*(int *)(*(longlong *)(lVar2 + 0x8d8) + 0x87b790) * 8) -
                       *(longlong *)(*(longlong *)(lVar2 + 0x8d8) + 0x87b788)) * 1e-05,uVar3,
                CONCAT44(uVar5,uVar1));
  return;
}



undefined8
FUN_1805bdb70(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x209c) & 0x400) != 0) {
    return param_2;
  }
  fVar4 = 0.7;
  uVar5 = 0;
  if (0 < param_5) {
    uVar1 = fmodf(param_3,0x40a00000);
    uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
    fVar3 = (float)uVar1 * 0.05 + ((float)param_4 / (float)param_5 + 1.0) * 0.5;
    fVar4 = 0.0;
    uVar5 = 0;
    if ((0.0 <= fVar3) && (fVar4 = fVar3, uVar5 = uVar2, 1.0 <= fVar3)) {
      fVar4 = 1.0;
    }
    fVar4 = fVar4 * 0.7;
  }
  return CONCAT44(uVar5,fVar4 * (float)param_2);
}



undefined8 *
FUN_1805bdc30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined *puVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  int iStack_f8;
  float afStack_f4 [45];
  
  if ((int)param_1[0x295] == 0) {
    if (*(char *)((longlong)param_1 + 0x2024) == '\0') {
LAB_1805bdeac:
      bVar4 = false;
      goto LAB_1805bdcb7;
    }
  }
  else if (((int)param_1[0x295] - 2U & 0xfffffffd) != 0) goto LAB_1805bdeac;
  bVar4 = true;
LAB_1805bdcb7:
  puVar14 = &DAT_180c8ed30;
  fVar31 = (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8)
                  - *(longlong *)(param_1[0x291] + 0x87b788)) * 1e-05;
  uVar5 = func_0x0001805b7c00(param_1);
  uVar17 = 0;
  uVar32 = 0;
LAB_1805bdd33:
  uVar18 = 0xffffffffffffffff;
  fVar30 = 20.0;
  iStack_f8 = -1;
  *(undefined4 *)(param_1 + 0x29a) = 0xffffffff;
  iVar13 = -1;
  if (0 < *(int *)((longlong)param_1 + 0x1b6c)) {
    pfVar9 = (float *)(param_1 + 0x2fb);
    uVar15 = uVar17;
    uVar20 = uVar17;
    do {
      fVar26 = pfVar9[-0xb];
      lVar6 = (longlong)(int)fVar26 * 0xa60;
      iVar19 = (int)uVar20;
      if (*(int *)(lVar6 + 0x3608 + param_1[0x291]) == 1) {
        afStack_f4[0] = pfVar9[2];
        fVar25 = pfVar9[3];
        lVar6 = param_1[0x291] + 0x30a0 + lVar6;
        if (((fVar25 == 1.4013e-45) && (0.1 < fVar31 - pfVar9[-8])) || (0.8 < fVar31 - pfVar9[-8]))
        {
          fVar22 = (float)FUN_1805bac30(param_1,lVar6,
                                        CONCAT31((int3)((uint)fVar25 >> 8),fVar25 == 1.4013e-45),
                                        uVar5,afStack_f4);
          fVar23 = (float)FUN_1805bcba0(param_1,lVar6,fVar22);
          fVar25 = pfVar9[3];
          puVar14 = &DAT_180c8ed30;
          pfVar9[-9] = fVar23;
          pfVar9[-10] = fVar22;
          pfVar9[-8] = fVar31;
        }
        fVar23 = afStack_f4[0];
        fVar22 = pfVar9[-9];
        if (fVar25 == 2.8026e-45) {
          fVar22 = fVar22 * 0.5;
        }
        if (bVar4) {
          if (fVar25 != 1.4013e-45) {
            if ((afStack_f4[0] < fVar30) &&
               (*(longlong *)(*(longlong *)(param_1[0x291] + 0x18) + 0x2ee8) -
                *(longlong *)(*(longlong *)(param_1[0x291] + 0x18) + 12000) >> 3 != 0)) {
              lVar1 = *param_1;
              lVar2 = *(longlong *)(lVar1 + 0x8d8);
              if (fVar25 == 0.0) {
                lVar7 = *(longlong *)(lVar6 + 0x20);
              }
              else if (((float)(*(longlong *)(puVar14 + (longlong)*(int *)(lVar2 + 0x87b790) * 8) -
                               *(longlong *)(lVar2 + 0x87b788)) * 1e-05 - pfVar9[-7] <= 3.0) ||
                      ((lVar7 = *(longlong *)(lVar6 + 0x20),
                       fVar28 = pfVar9[-2] - *(float *)(lVar7 + 0xc),
                       fVar27 = pfVar9[-1] - *(float *)(lVar7 + 0x10),
                       fVar24 = *pfVar9 - *(float *)(lVar7 + 0x14),
                       fVar28 * fVar28 + fVar27 * fVar27 + fVar24 * fVar24 <= 4.0 &&
                       (lVar10 = *(longlong *)(lVar1 + 0x20),
                       fVar28 = pfVar9[-6] - *(float *)(lVar10 + 0xc),
                       fVar27 = pfVar9[-5] - *(float *)(lVar10 + 0x10),
                       fVar24 = pfVar9[-4] - *(float *)(lVar10 + 0x14),
                       fVar28 * fVar28 + fVar27 * fVar27 + fVar24 * fVar24 <= 4.0))))
              goto LAB_1805be066;
              lVar10 = *(longlong *)(lVar1 + 0x20);
              puVar11 = (undefined8 *)(lVar10 + 0xc);
              pfVar9[-7] = (float)(*(longlong *)(puVar14 + (longlong)*(int *)(lVar2 + 0x87b790) * 8)
                                  - *(longlong *)(lVar2 + 0x87b788)) * 1e-05;
              uVar3 = *(undefined8 *)(lVar10 + 0x14);
              *(undefined8 *)(pfVar9 + -6) = *puVar11;
              *(undefined8 *)(pfVar9 + -4) = uVar3;
              uVar3 = *(undefined8 *)(lVar7 + 0x14);
              *(undefined8 *)(pfVar9 + -2) = *(undefined8 *)(lVar7 + 0xc);
              *(undefined8 *)pfVar9 = uVar3;
              fVar25 = (float)FUN_180392600(*(longlong *)(*(longlong *)(lVar1 + 0x8d8) + 0x18) +
                                            0x2a68,*(undefined8 *)(lVar1 + 0x9d8),
                                            *(undefined8 *)(lVar6 + 0x9d8),puVar11,
                                            (undefined8 *)(lVar7 + 0xc),
                                            *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x1d0),
                                            0x41a00000);
              if (1e+30 <= fVar25) {
                fVar24 = 2.8026e-45;
                fVar25 = 20.0;
              }
              else {
                fVar24 = 1.4013e-45;
              }
              pfVar9[2] = fVar25;
              pfVar9[3] = fVar24;
              if (fVar24 != 1.4013e-45) goto LAB_1805be092;
              afStack_f4[0] = fVar25;
              fVar23 = (float)FUN_1805bac30(param_1,lVar6,1,uVar5,afStack_f4);
              fVar22 = (float)FUN_1805bcba0(param_1,lVar6,fVar23);
              fVar25 = pfVar9[3];
              pfVar9[-9] = fVar22;
              pfVar9[-10] = fVar23;
              pfVar9[-8] = fVar31;
            }
LAB_1805be066:
            fVar23 = afStack_f4[0];
            if (fVar25 != 1.4013e-45) goto LAB_1805be092;
          }
          fVar23 = pfVar9[2];
          if (fVar23 < fVar30) {
            *(float *)(param_1 + 0x29a) = fVar26;
            fVar30 = fVar23;
          }
        }
LAB_1805be092:
        if (uVar18 == 0xffffffffffffffff) {
          bVar21 = false;
          fVar26 = 0.0;
        }
        else {
          bVar21 = *(int *)(uVar18 * 0x3c + 0x17e4 + (longlong)param_1) == 2;
          fVar26 = *(float *)(uVar18 * 0x3c + 0x17b4 + (longlong)param_1);
          if (bVar21) {
            fVar26 = fVar26 * 0.5;
          }
        }
        if (((fVar22 <= fVar26) && ((!bVar21 || (fVar22 * 1.5 <= fVar26)))) ||
           ((uVar18 != 0xffffffffffffffff &&
            (*(float *)(uVar18 * 0x3c + 0x17e0 + (longlong)param_1) <= fVar23)))) {
          puVar14 = &DAT_180c8ed30;
        }
        else {
          puVar14 = &DAT_180c8ed30;
          lVar1 = *(longlong *)(param_1[0x291] + 0x18);
          uVar18 = uVar15;
          iStack_f8 = iVar19;
          if (*(longlong *)(lVar1 + 0x2ee8) - *(longlong *)(lVar1 + 12000) >> 3 != 0) {
            lVar1 = *param_1;
            fVar26 = pfVar9[3];
            lVar2 = *(longlong *)(lVar1 + 0x8d8);
            if ((fVar26 == 0.0) ||
               ((3.0 < (float)(*(longlong *)
                                (&DAT_180c8ed30 + (longlong)*(int *)(lVar2 + 0x87b790) * 8) -
                              *(longlong *)(lVar2 + 0x87b788)) * 1e-05 - pfVar9[-7] &&
                ((lVar6 = *(longlong *)(lVar6 + 0x20), fVar23 = pfVar9[-2] - *(float *)(lVar6 + 0xc)
                 , fVar22 = pfVar9[-1] - *(float *)(lVar6 + 0x10),
                 fVar25 = *pfVar9 - *(float *)(lVar6 + 0x14),
                 4.0 < fVar23 * fVar23 + fVar22 * fVar22 + fVar25 * fVar25 ||
                 (lVar6 = *(longlong *)(lVar1 + 0x20), fVar23 = pfVar9[-6] - *(float *)(lVar6 + 0xc)
                 , fVar22 = pfVar9[-5] - *(float *)(lVar6 + 0x10),
                 fVar25 = pfVar9[-4] - *(float *)(lVar6 + 0x14),
                 4.0 < fVar23 * fVar23 + fVar22 * fVar22 + fVar25 * fVar25)))))) {
              lVar6 = *(longlong *)(lVar1 + 0x20);
              puVar12 = (undefined8 *)(lVar6 + 0xc);
              lVar10 = (longlong)(int)pfVar9[-0xb] * 0xa60 + param_1[0x291];
              lVar7 = *(longlong *)(lVar10 + 0x30c0);
              puVar11 = (undefined8 *)(lVar7 + 0xc);
              pfVar9[-7] = (float)(*(longlong *)
                                    (&DAT_180c8ed30 + (longlong)*(int *)(lVar2 + 0x87b790) * 8) -
                                  *(longlong *)(lVar2 + 0x87b788)) * 1e-05;
              uVar3 = *(undefined8 *)(lVar6 + 0x14);
              *(undefined8 *)(pfVar9 + -6) = *puVar12;
              *(undefined8 *)(pfVar9 + -4) = uVar3;
              uVar3 = *(undefined8 *)(lVar7 + 0x14);
              *(undefined8 *)(pfVar9 + -2) = *puVar11;
              *(undefined8 *)pfVar9 = uVar3;
              fVar25 = (float)FUN_180392600(*(longlong *)(*(longlong *)(lVar1 + 0x8d8) + 0x18) +
                                            0x2a68,*(undefined8 *)(lVar1 + 0x9d8),
                                            *(undefined8 *)(lVar10 + 0x3a78),puVar12,puVar11,
                                            *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x1d0),
                                            0x41a00000);
              if (1e+30 <= fVar25) {
                fVar22 = 2.8026e-45;
                fVar25 = 20.0;
              }
              else {
                fVar22 = 1.4013e-45;
              }
              pfVar9[2] = fVar25;
              pfVar9[3] = fVar22;
              if ((fVar22 == 2.8026e-45) && (fVar26 == 0.0)) goto LAB_1805be3b0;
              puVar14 = &DAT_180c8ed30;
            }
          }
        }
      }
      uVar20 = (ulonglong)(iVar19 + 1U);
      uVar15 = uVar15 + 1;
      pfVar9 = pfVar9 + 0xf;
      iVar13 = iStack_f8;
      if (*(int *)((longlong)param_1 + 0x1b6c) <= (int)(iVar19 + 1U)) break;
    } while( true );
  }
  uVar29 = 0x7149f2ca;
  *param_2 = 0xffffffffffffffff;
  if (iVar13 < 0) {
    *param_2 = 0xffffffffffffffff;
  }
  else {
    iVar19 = iVar13;
    if (*(int *)((longlong)iVar13 * 0x3c + 0x17e4 + (longlong)param_1) != 1) {
      if ((*(uint *)(param_1 + 2) >> 0x19 & 1) == 0) {
        fVar31 = *(float *)(*(longlong *)param_1[1] + 0x7dc);
        *(float *)((longlong)param_1 + 0xb4) = fVar31;
        *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x2000000;
      }
      else {
        fVar31 = *(float *)((longlong)param_1 + 0xb4);
      }
      if (0 < *(int *)((longlong)param_1 + 0x1b6c)) {
        piVar8 = (int *)((longlong)param_1 + 0x17e4);
        do {
          if (((*(int *)((longlong)piVar8[-0xe] * 0xa60 + 0x3608 + param_1[0x291]) == 1) &&
              (*piVar8 == 1)) &&
             (iVar19 = (int)uVar17, (float)piVar8[-1] <= fVar31 && fVar31 != (float)piVar8[-1]))
          break;
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
          piVar8 = piVar8 + 0xf;
          iVar19 = iVar13;
        } while ((int)uVar16 < *(int *)((longlong)param_1 + 0x1b6c));
      }
    }
    *(int *)((longlong)param_2 + 4) = iVar19;
    lVar6 = ((longlong)iVar19 + 0x65) * 0x3c;
    uVar32 = *(undefined4 *)(lVar6 + 4 + (longlong)param_1);
    uVar29 = *(undefined4 *)(lVar6 + 0x34 + (longlong)param_1);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar6 + (longlong)param_1);
  }
  *param_4 = uVar29;
  *param_5 = uVar32;
  return param_2;
LAB_1805be3b0:
  puVar14 = &DAT_180c8ed30;
  goto LAB_1805bdd33;
}



int FUN_1805be4d0(longlong *param_1,longlong param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = -1;
  iVar5 = 0;
  iVar4 = -1;
  piVar6 = (int *)(*(longlong *)(param_2 + 0x6e0) + 0x13c);
  do {
    iVar1 = *piVar6;
    iVar2 = iVar3;
    if (((iVar1 < 0) || (*(int *)(param_1[0x291] + 0x52ed94) <= iVar1)) ||
       (*(short *)(param_1[0x291] + 0x52dda0 + (longlong)iVar1 * 2) < 0)) {
      if (iVar4 == -1) {
        iVar4 = iVar5;
      }
    }
    else {
      iVar4 = -1;
      if ((float)piVar6[1] <= param_3 && param_3 != (float)piVar6[1]) {
        iVar4 = iVar5;
        if (-1 < iVar5) goto LAB_1805be5b5;
        goto LAB_1805be561;
      }
      iVar2 = iVar5;
      if (iVar1 != *(int *)(*param_1 + 0x10)) {
        iVar2 = iVar3;
      }
    }
    iVar3 = iVar2;
    iVar5 = iVar5 + 1;
    piVar6 = piVar6 + 2;
  } while (iVar5 < 4);
  if (iVar4 == -1) {
LAB_1805be561:
    if (iVar3 < 0) {
      iVar4 = *(int *)(param_2 + 0x678);
      if (*(int *)((longlong)param_1 + 0x14b4) == *(int *)(param_2 + 0x10)) {
        if ((char)param_1[0x43d] == '\0') {
          iVar3 = (int)param_1[0x295];
        }
        else {
          iVar3 = *(int *)((longlong)param_1 + 0x21ec);
        }
        if (iVar3 == 0) {
          if (*(char *)((longlong)param_1 + 0x2024) == '\0') {
LAB_1805be5b2:
            iVar4 = iVar4 + -1;
          }
        }
        else if ((iVar3 - 1U & 0xfffffffd) == 0) goto LAB_1805be5b2;
      }
    }
    else {
      iVar4 = 3;
    }
  }
LAB_1805be5b5:
  iVar3 = *(int *)(param_2 + 0x678);
  if (*(int *)((longlong)param_1 + 0x14b4) == *(int *)(param_2 + 0x10)) {
    if ((char)param_1[0x43d] == '\0') {
      iVar5 = (int)param_1[0x295];
    }
    else {
      iVar5 = *(int *)((longlong)param_1 + 0x21ec);
    }
    if (iVar5 == 0) {
      if (*(char *)((longlong)param_1 + 0x2024) != '\0') goto LAB_1805be5fe;
    }
    else if ((iVar5 - 1U & 0xfffffffd) != 0) goto LAB_1805be5fe;
    iVar3 = iVar3 + -1;
  }
LAB_1805be5fe:
  if ((iVar4 != -1) && (iVar4 < iVar3)) {
    iVar3 = iVar4;
  }
  return iVar3;
}






// 函数: void FUN_1805be620(longlong param_1,int param_2)
void FUN_1805be620(longlong param_1,int param_2)

{
  longlong lVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x209c);
  uVar4 = uVar3 >> 2;
  if (param_2 == -1) {
    *(uint *)(param_1 + 0x209c) = uVar3 & 0xfffffffb;
  }
  else {
    uVar4 = (uint)(byte)~(byte)uVar4;
    *(uint *)(param_1 + 0x209c) = uVar3 | 4;
    if (1 < *(int *)(param_1 + 0x178c) - 2U) {
      lVar1 = func_0x0001805b7270(param_1 + 8);
      if (lVar1 != 0) {
        pcVar2 = (char *)func_0x0001805b71d0(param_1 + 8);
        if (*pcVar2 == '\0') {
          pcVar2 = (char *)FUN_1805b7080(param_1 + 8);
          if (*pcVar2 == '\0') {
            if (param_2 == 4) {
              func_0x0001805d88c0(param_1,0x1000);
            }
            else if (param_2 == 5) {
              func_0x0001805d88c0(param_1,0x2000);
            }
            else if (param_2 == 6) {
              func_0x0001805d88c0(param_1,0x400);
            }
            else if (param_2 == 7) {
              func_0x0001805d88c0(param_1,0x800);
            }
            else {
              func_0x0001805d88c0(param_1,0);
            }
          }
        }
      }
    }
  }
  if ((uVar4 & 1) != 0) {
    FUN_180508100(param_1,0,0x3e800000);
    *(undefined4 *)(param_1 + 0x178c) = 0;
    if ((*(uint *)(param_1 + 0x209c) >> 2 & 1) != 0) {
      if ((*(uint *)(param_1 + 0x10) & 0x20) == 0) {
        lVar1 = *(longlong *)(*(longlong *)(**(longlong **)(param_1 + 8) + 0x8f8) + 0x9e8);
        *(longlong *)(param_1 + 0xa8) = lVar1;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0xa8);
      }
      if ((lVar1 != 0) &&
         ((*(byte *)((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar1 + 0xd0))
           >> 4 & 1) != 0)) {
        uVar3 = *(uint *)(param_1 + 0x1390) << 0xd ^ *(uint *)(param_1 + 0x1390);
        uVar3 = uVar3 >> 0x11 ^ uVar3;
        uVar3 = uVar3 << 5 ^ uVar3;
        *(uint *)(param_1 + 0x1390) = uVar3;
        *(longlong *)(param_1 + 0x1398) =
             *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1 + 0x13a0) * 8) -
             (longlong)((float)(uVar3 - 1) * 2.3283064e-05 - 150000.0);
      }
    }
  }
  return;
}



int * FUN_1805be810(longlong *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  longlong lStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  
  uStack_88 = (undefined4)param_1[5];
  fStack_84 = *(float *)((longlong)param_1 + 0x2c);
  uStack_80 = (undefined4)param_1[6];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x34);
  lStack_98 = param_1[3];
  lStack_90 = param_1[4];
  param_2[0] = -1;
  param_2[1] = -1;
  lStack_78 = param_1[7];
  if (fStack_84 < 0.0) {
    FUN_1805d5a50(param_1 + 1);
    lStack_98 = param_1[3];
    lStack_90 = param_1[4];
    uStack_88 = (undefined4)param_1[5];
    fStack_84 = *(float *)((longlong)param_1 + 0x2c);
    uStack_80 = (undefined4)param_1[6];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0x34);
    lStack_78 = param_1[7];
    if (lStack_90 == 0) {
      FUN_1805b77f0(param_1,0);
      return param_2;
    }
  }
  iVar7 = *(int *)((longlong)param_1 + 0x1c2c);
  iVar9 = *(int *)((longlong)param_1 + 0x200c);
  iVar6 = iVar9 - iVar7;
  if ((*(uint *)(param_1 + 2) & 0x1000) == 0) {
    FUN_1805d4df0(param_1 + 1);
    iVar7 = *(int *)((longlong)param_1 + 0x1c2c);
    iVar9 = *(int *)((longlong)param_1 + 0x200c);
  }
  fVar1 = *(float *)(param_1 + 0x22);
  lVar3 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(param_1[0x291] + 0x87b790) * 8);
  lVar4 = *(longlong *)(param_1[0x291] + 0x87b788);
  if (4 < iVar9) {
    iVar9 = 4;
  }
  iVar10 = 0;
  if (0 < iVar9) {
    do {
      fVar12 = 0.0;
      if (iVar6 != 0) {
        fVar12 = *(float *)((longlong)
                            ((*(int *)((longlong)param_1 + 0x200c) -
                             *(int *)((longlong)param_1 + 0x1c2c)) - iVar6) * 0x3c + 0x1c50 +
                           (longlong)param_1);
      }
      fVar11 = 0.0;
      if (iVar7 != 0) {
        fVar11 = *(float *)((longlong)(*(int *)((longlong)param_1 + 0x1c2c) - iVar7) * 0x3c + 0x1c50
                           + (longlong)param_1);
      }
      if (fVar11 <= fVar12) {
        iVar8 = (*(int *)((longlong)param_1 + 0x200c) - *(int *)((longlong)param_1 + 0x1c2c)) -
                iVar6;
        iVar6 = iVar6 + -1;
      }
      else {
        iVar8 = *(int *)((longlong)param_1 + 0x1c2c) - iVar7;
        iVar7 = iVar7 + -1;
      }
      iVar2 = *(int *)((longlong)param_1 + (longlong)iVar8 * 0x3c + 0x1c4c);
      lVar5 = (longlong)iVar2 * 0xa60;
      if ((*(int *)(lVar5 + 0x3608 + param_1[0x291]) == 1) &&
         (lVar5 = *(longlong *)(lVar5 + 0x30c0 + param_1[0x291]),
         fVar12 = *(float *)(lVar5 + 0x10) - *(float *)(*(longlong *)(*param_1 + 0x20) + 0x10),
         fVar11 = *(float *)(lVar5 + 0xc) - *(float *)(*(longlong *)(*param_1 + 0x20) + 0xc),
         fVar12 * fVar12 + fVar11 * fVar11 < fVar1 * fVar1)) {
        if ((float)(lVar3 - lVar4) * 1e-05 !=
            *(float *)((longlong)param_1 + (longlong)iVar8 * 0x3c + 0x1c58)) {
          FUN_1805b8050(param_1,(longlong)param_1 + (longlong)iVar8 * 0x3c + 0x1c4c,&lStack_98);
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x3c + 0x1c54) == 3) {
          *param_2 = iVar2;
          param_2[1] = iVar8;
          return param_2;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  return param_2;
}



int * FUN_1805be8b3(void)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM6_Da;
  undefined1 auStackX_20 [8];
  int *in_stack_000000c8;
  
  iVar7 = *(int *)((longlong)unaff_RBX + 0x1c2c);
  iVar9 = *(int *)((longlong)unaff_RBX + 0x200c);
  iVar6 = iVar9 - iVar7;
  if ((*(uint *)(unaff_RBX + 2) & 0x1000) == 0) {
    FUN_1805d4df0(unaff_RBX + 1);
    iVar7 = *(int *)((longlong)unaff_RBX + 0x1c2c);
    iVar9 = *(int *)((longlong)unaff_RBX + 0x200c);
  }
  fVar1 = *(float *)(unaff_RBX + 0x22);
  lVar3 = *(longlong *)(&DAT_180c8ed30 + (longlong)*(int *)(unaff_RBX[0x291] + 0x87b790) * 8);
  lVar4 = *(longlong *)(unaff_RBX[0x291] + 0x87b788);
  if (4 < iVar9) {
    iVar9 = 4;
  }
  iVar10 = 0;
  if (0 < iVar9) {
    do {
      fVar11 = unaff_XMM6_Da;
      if (iVar6 != 0) {
        fVar11 = *(float *)((longlong)
                            ((*(int *)((longlong)unaff_RBX + 0x200c) -
                             *(int *)((longlong)unaff_RBX + 0x1c2c)) - iVar6) * 0x3c + 0x1c50 +
                           (longlong)unaff_RBX);
      }
      fVar12 = unaff_XMM6_Da;
      if (iVar7 != 0) {
        fVar12 = *(float *)((longlong)(*(int *)((longlong)unaff_RBX + 0x1c2c) - iVar7) * 0x3c +
                            0x1c50 + (longlong)unaff_RBX);
      }
      if (fVar12 <= fVar11) {
        iVar8 = (*(int *)((longlong)unaff_RBX + 0x200c) - *(int *)((longlong)unaff_RBX + 0x1c2c)) -
                iVar6;
        iVar6 = iVar6 + -1;
      }
      else {
        iVar8 = *(int *)((longlong)unaff_RBX + 0x1c2c) - iVar7;
        iVar7 = iVar7 + -1;
      }
      iVar2 = *(int *)((longlong)unaff_RBX + (longlong)iVar8 * 0x3c + 0x1c4c);
      lVar5 = (longlong)iVar2 * 0xa60;
      if ((*(int *)(lVar5 + 0x3608 + unaff_RBX[0x291]) == 1) &&
         (lVar5 = *(longlong *)(lVar5 + 0x30c0 + unaff_RBX[0x291]),
         fVar11 = *(float *)(lVar5 + 0x10) - *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x10),
         fVar12 = *(float *)(lVar5 + 0xc) - *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0xc),
         fVar11 = fVar11 * fVar11 + fVar12 * fVar12, fVar11 < fVar1 * fVar1)) {
        if ((float)(lVar3 - lVar4) * 1e-05 !=
            *(float *)((longlong)unaff_RBX + (longlong)iVar8 * 0x3c + 0x1c58)) {
          FUN_1805b8050(fVar11,(longlong)unaff_RBX + (longlong)iVar8 * 0x3c + 0x1c4c,auStackX_20);
        }
        if (*(int *)((longlong)unaff_RBX + (longlong)iVar8 * 0x3c + 0x1c54) == 3) {
          *in_stack_000000c8 = iVar2;
          in_stack_000000c8[1] = iVar8;
          return in_stack_000000c8;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  return in_stack_000000c8;
}



int * FUN_1805be965(void)

{
  int iVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar3;
  int unaff_R13D;
  int unaff_R15D;
  float fVar4;
  float fVar5;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  undefined1 auStackX_20 [8];
  int *in_stack_000000c8;
  
  do {
    fVar4 = unaff_XMM6_Da;
    if (unaff_EBP != 0) {
      fVar4 = *(float *)((longlong)
                         ((*(int *)((longlong)unaff_RBX + 0x200c) -
                          *(int *)((longlong)unaff_RBX + 0x1c2c)) - unaff_EBP) * 0x3c + 0x1c50 +
                        (longlong)unaff_RBX);
    }
    fVar5 = unaff_XMM6_Da;
    if (unaff_ESI != 0) {
      fVar5 = *(float *)((longlong)(*(int *)((longlong)unaff_RBX + 0x1c2c) - unaff_ESI) * 0x3c +
                         0x1c50 + (longlong)unaff_RBX);
    }
    if (fVar5 <= fVar4) {
      iVar3 = (*(int *)((longlong)unaff_RBX + 0x200c) - *(int *)((longlong)unaff_RBX + 0x1c2c)) -
              unaff_EBP;
      unaff_EBP = unaff_EBP + -1;
    }
    else {
      iVar3 = *(int *)((longlong)unaff_RBX + 0x1c2c) - unaff_ESI;
      unaff_ESI = unaff_ESI + -1;
    }
    iVar1 = *(int *)((longlong)unaff_RBX + (longlong)iVar3 * 0x3c + 0x1c4c);
    lVar2 = (longlong)iVar1 * 0xa60;
    if ((*(int *)(lVar2 + 0x3608 + unaff_RBX[0x291]) == 1) &&
       (lVar2 = *(longlong *)(lVar2 + 0x30c0 + unaff_RBX[0x291]),
       fVar4 = *(float *)(lVar2 + 0x10) - *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0x10),
       fVar5 = *(float *)(lVar2 + 0xc) - *(float *)(*(longlong *)(*unaff_RBX + 0x20) + 0xc),
       fVar4 = fVar4 * fVar4 + fVar5 * fVar5, fVar4 < unaff_XMM8_Da)) {
      if (unaff_XMM7_Da != *(float *)((longlong)unaff_RBX + (longlong)iVar3 * 0x3c + 0x1c58)) {
        FUN_1805b8050(fVar4,(longlong)unaff_RBX + (longlong)iVar3 * 0x3c + 0x1c4c,auStackX_20);
      }
      if (*(int *)((longlong)unaff_RBX + (longlong)iVar3 * 0x3c + 0x1c54) == 3) {
        *in_stack_000000c8 = iVar1;
        in_stack_000000c8[1] = iVar3;
        return in_stack_000000c8;
      }
    }
    unaff_R15D = unaff_R15D + 1;
    if (unaff_R13D <= unaff_R15D) {
      return in_stack_000000c8;
    }
  } while( true );
}






// 函数: void FUN_1805bea82(void)
void FUN_1805bea82(void)

{
  return;
}






// 函数: void FUN_1805beabc(void)
void FUN_1805beabc(void)

{
  undefined4 unaff_EDI;
  undefined4 unaff_R12D;
  undefined4 *in_stack_000000c8;
  
  *in_stack_000000c8 = unaff_R12D;
  in_stack_000000c8[1] = unaff_EDI;
  return;
}



undefined8 FUN_1805beacc(void)

{
  undefined8 in_stack_000000c8;
  
  return in_stack_000000c8;
}



// WARNING: Removing unreachable block (ram,0x0001805b782c)




