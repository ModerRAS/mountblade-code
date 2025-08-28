#include "TaleWorlds.Native.Split.h"

// 03_rendering_part586.c - 2 个函数

// 函数: void FUN_18058d360(longlong *param_1)
void FUN_18058d360(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char acStackX_18 [8];
  longlong *plStackX_20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uStack_a8 = 0xfffffffffffffffe;
  if (*(code **)(*param_1 + 0xe8) == (code *)&UNK_18057c370) {
    if ((param_1[0x49c] == 0) && (param_1[0x49d] == 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0xe8))();
  }
  if ((cVar5 != '\0') && (*(char *)(_DAT_180c86878 + 0x210) == '\0')) {
    iVar9 = 0;
    plVar7 = param_1 + 0x1f;
    do {
      plVar1 = (longlong *)*plVar7;
      lVar2 = *plVar1;
      if (((lVar2 != 0) && (0.0 < *(float *)(plVar1 + 2))) &&
         (0.0 < *(float *)(lVar2 + 0x6c) || *(float *)(lVar2 + 0x6c) == 0.0)) {
        fVar13 = *(float *)(plVar1 + 6);
        fVar14 = *(float *)(plVar1 + 1);
        if (fVar13 != fVar14) {
          fVar12 = *(float *)(plVar1 + 8);
          fVar11 = fVar13;
          if (fVar13 <= fVar12) {
            fVar11 = 0.0;
          }
          if ((fVar12 <= 0.0) || (fVar13 != fVar12)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            fVar11 = 0.0;
          }
          fVar13 = fVar14;
          if (fVar14 <= fVar11) {
            fVar13 = fVar11;
          }
          if (fVar11 <= fVar14) {
            fVar14 = fVar11;
          }
          if (fVar13 - fVar14 <= 0.5) {
            iVar8 = 3;
            pfVar10 = (float *)(lVar2 + 0x78);
            do {
              fVar12 = *pfVar10;
              if ((fVar12 < fVar14) || (fVar13 <= fVar12)) {
                if ((1.0 < fVar13) &&
                   ((*(byte *)((longlong)plVar7 + (longlong)(int)plVar7[1] * 0x48 + -0x14) & 4) != 0
                   )) {
                  fVar14 = 0.0;
                  fVar13 = fVar13 + -1.0;
                  if ((0.0 <= fVar12) && (fVar12 < fVar13)) goto LAB_18058d500;
                }
              }
              else {
LAB_18058d500:
                if (bVar4) {
                  fVar12 = (*(float *)(lVar2 + 0x188) * (fVar13 - fVar12)) /
                           *(float *)(*plVar7 + 0x2c);
                }
                else {
                  fVar12 = 0.0;
                }
                plStackX_20 = (longlong *)0x0;
                acStackX_18[0] = '\0';
                (*(code *)param_1[0x49d])
                          (param_1[0x49c],iVar9,iVar8,fVar12,lVar2,&plStackX_20,acStackX_18);
                if (acStackX_18[0] != '\0') {
                  if ((plStackX_20 == (longlong *)0x0) ||
                     (cVar5 = (**(code **)(*plStackX_20 + 0xd8))(), cVar5 == '\0')) {
                    uStack_b0 = 0;
                    FUN_180434290(plVar7 + -1,&uStack_b0);
                  }
                  else {
                    lVar6 = (longlong)(int)plVar7[1];
                    if (((longlong *)plVar7[lVar6 * 9] != (longlong *)0x0) &&
                       ((cVar5 = (**(code **)(*(longlong *)plVar7[lVar6 * 9] + 0xd8))(),
                        cVar5 != '\0' &&
                        (cVar5 = (**(code **)(*(longlong *)plVar7[lVar6 * 9] + 0x80))(),
                        cVar5 != '\0')))) {
                      (**(code **)(*(longlong *)plVar7[lVar6 * 9] + 0x68))();
                    }
                    plVar1 = plStackX_20;
                    if (plStackX_20 != (longlong *)0x0) {
                      (**(code **)(*plStackX_20 + 0x28))(plStackX_20);
                    }
                    plVar3 = (longlong *)plVar7[lVar6 * 9];
                    plVar7[lVar6 * 9] = (longlong)plVar1;
                    if (plVar3 != (longlong *)0x0) {
                      (**(code **)(*plVar3 + 0x38))();
                    }
                  }
                }
                if (plStackX_20 != (longlong *)0x0) {
                  (**(code **)(*plStackX_20 + 0x38))();
                }
              }
              pfVar10 = pfVar10 + -1;
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
        }
      }
      iVar9 = iVar9 + 1;
      plVar7 = plVar7 + 0x236;
    } while (iVar9 < 2);
  }
  return;
}



undefined8
FUN_18058d6b0(int *param_1,int param_2,longlong param_3,ulonglong param_4,int param_5,int param_6,
             int param_7,int param_8,int param_9,int param_10,undefined1 param_11,char param_12)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  uVar5 = uVar4;
  if (param_3 != 0) {
    uVar5 = *(ulonglong *)(param_3 + 0x1d0);
  }
  if ((char)param_4 != '\0') {
    uVar5 = 0;
  }
  if ((param_12 == '\0') && (*param_1 != -1)) {
    uVar3 = uVar4;
    if (*(longlong *)(param_1 + 4) != 0) {
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 4) + 0x1d0);
    }
    bVar2 = (byte)uVar3;
    if ((byte)*(undefined8 *)(param_1 + 8) != 0) {
      bVar2 = (byte)*(undefined8 *)(param_1 + 8);
    }
    if (((uVar5 | param_4) & 0xff) < (ulonglong)bVar2) {
      return 0;
    }
  }
  *param_1 = param_2;
  uVar1 = param_1[2] + 1U & 0x8000000f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
  }
  if (param_2 != -1) {
    uVar4 = param_4;
  }
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[2] = uVar1;
  param_1[0xc] = param_7;
  param_1[0xd] = param_8;
  *(ulonglong *)(param_1 + 8) = uVar4;
  *(undefined1 *)(param_1 + 0x10) = param_11;
  param_1[0xe] = param_9;
  param_1[0xf] = param_10;
  *(longlong *)(param_1 + 4) = param_3;
  return 1;
}



undefined8 FUN_18058d7f0(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  lVar1 = *(longlong *)(param_1 + 8);
  for (piVar2 = *(int **)(lVar1 + ((ulonglong)(longlong)param_2 %
                                  (ulonglong)*(uint *)(param_1 + 0x10)) * 8);
      (piVar3 = piVar4, piVar2 != (int *)0x0 && (piVar3 = piVar2, param_2 != *piVar2));
      piVar2 = *(int **)(piVar2 + 0x18)) {
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(lVar1 + *(longlong *)(param_1 + 0x10) * 8);
  }
  if (piVar3 != *(int **)(lVar1 + *(longlong *)(param_1 + 0x10) * 8)) {
    piVar4 = piVar3 + 2;
  }
  if (0.9999999 <= param_3) {
    param_3 = 0.9999999;
  }
  return *(undefined8 *)(piVar4 + (longlong)(int)(param_3 * 10.0) * 2 + 2);
}



longlong * FUN_18058d890(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x5f0);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058d930(longlong *param_1,longlong param_2)
void FUN_18058d930(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  uVar29 = (*(longlong *)(param_2 + 0xd8) - *(longlong *)(param_2 + 0xd0)) / 0xa0;
  lVar25 = param_1[0x1a];
  uVar31 = (param_1[0x1b] - lVar25) / 0xa0;
  if (uVar31 < uVar29) {
    lVar28 = uVar29 - uVar31;
    FUN_1805906f0(param_1 + 0x1a,lVar28,lVar28,lVar25,0xfffffffffffffffe);
  }
  else {
    param_1[0x1b] = uVar29 * 0xa0 + lVar25;
  }
  uVar29 = 0;
  uVar31 = uVar29;
  if ((*(longlong *)(param_2 + 0xd8) - *(longlong *)(param_2 + 0xd0)) / 0xa0 != 0) {
    do {
      puVar26 = (undefined8 *)(*(longlong *)(param_2 + 0xd0) + uVar29);
      uVar6 = puVar26[1];
      uVar7 = puVar26[2];
      uVar8 = puVar26[3];
      uVar9 = puVar26[4];
      uVar10 = puVar26[5];
      uVar11 = puVar26[6];
      uVar12 = puVar26[7];
      uVar13 = puVar26[8];
      uVar14 = puVar26[9];
      uVar15 = puVar26[10];
      uVar16 = puVar26[0xb];
      uVar17 = puVar26[0xc];
      uVar18 = puVar26[0xd];
      uVar19 = puVar26[0xe];
      uVar20 = puVar26[0xf];
      uVar21 = puVar26[0x10];
      uVar22 = puVar26[0x11];
      uVar23 = puVar26[0x12];
      uVar24 = puVar26[0x13];
      puVar27 = (undefined8 *)(param_1[0x1a] + uVar29);
      *puVar27 = *puVar26;
      puVar27[1] = uVar6;
      puVar27[2] = uVar7;
      puVar27[3] = uVar8;
      puVar27[4] = uVar9;
      puVar27[5] = uVar10;
      puVar27[6] = uVar11;
      puVar27[7] = uVar12;
      puVar27[8] = uVar13;
      puVar27[9] = uVar14;
      puVar27[10] = uVar15;
      puVar27[0xb] = uVar16;
      puVar27[0xc] = uVar17;
      puVar27[0xd] = uVar18;
      puVar27[0xe] = uVar19;
      puVar27[0xf] = uVar20;
      puVar27[0x10] = uVar21;
      puVar27[0x11] = uVar22;
      puVar27[0x12] = uVar23;
      puVar27[0x13] = uVar24;
      uVar30 = (int)uVar31 + 1;
      uVar29 = uVar29 + 0xa0;
      uVar31 = (ulonglong)uVar30;
    } while ((ulonglong)(longlong)(int)uVar30 <
             (ulonglong)((*(longlong *)(param_2 + 0xd8) - *(longlong *)(param_2 + 0xd0)) / 0xa0));
  }
  *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  uVar5 = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (longlong *)param_1[7];
  param_1[7] = (longlong)plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    param_1[8] = 0;
  }
  else {
    if (param_1[8] == 0) {
      lVar25 = FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
                    // WARNING: Subroutine does not return
      memset(lVar25 + 0x18,0,0x90);
    }
    FUN_1804efac0(param_1[8]);
  }
  lVar25 = *param_1;
  if (lVar25 == 0) {
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    uVar6 = *(undefined8 *)(param_2 + 0x6c);
    *(undefined8 *)((longlong)param_1 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)((longlong)param_1 + 0x6c) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x7c);
    *(undefined8 *)((longlong)param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
    *(undefined8 *)((longlong)param_1 + 0x7c) = uVar6;
    uVar3 = *(undefined4 *)(param_2 + 0x88);
    uVar4 = *(undefined4 *)(param_2 + 0x8c);
    uVar5 = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
    *(undefined4 *)(param_1 + 0x12) = uVar5;
    uVar3 = *(undefined4 *)(param_2 + 0x98);
    uVar4 = *(undefined4 *)(param_2 + 0x9c);
    uVar5 = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x13) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
    FUN_18058dd10(param_1 + 0x20,param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    param_1[0x1f] = 0;
    return;
  }
  FUN_18058f420(lVar25);
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar25);
}



undefined4 * FUN_18058dd10(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 8);
  *(longlong **)(param_1 + 8) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 10);
  *(longlong **)(param_1 + 10) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 0xc);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0xc);
  *(longlong **)(param_1 + 0xc) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(longlong **)(param_2 + 0xe);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0xe);
  *(longlong **)(param_1 + 0xe) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x41);
  *(undefined1 *)((longlong)param_1 + 0x42) = *(undefined1 *)((longlong)param_2 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x43) = *(undefined1 *)((longlong)param_2 + 0x43);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
  *(undefined1 *)((longlong)param_1 + 0x46) = *(undefined1 *)((longlong)param_2 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x47) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_2 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0x4a) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4b) = *(undefined1 *)((longlong)param_2 + 0x4b);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x4e) = *(undefined1 *)((longlong)param_2 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x4f) = *(undefined1 *)((longlong)param_2 + 0x4f);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_2 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)((longlong)param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x53) = *(undefined1 *)((longlong)param_2 + 0x53);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_2 + 0x55);
  *(undefined1 *)((longlong)param_1 + 0x56) = *(undefined1 *)((longlong)param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x57) = *(undefined1 *)((longlong)param_2 + 0x57);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x59);
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + 0x5b);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_2 + 0x5d);
  *(undefined1 *)((longlong)param_1 + 0x5e) = *(undefined1 *)((longlong)param_2 + 0x5e);
  *(undefined1 *)((longlong)param_1 + 0x5f) = *(undefined1 *)((longlong)param_2 + 0x5f);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined1 *)((longlong)param_1 + 99) = *(undefined1 *)((longlong)param_2 + 99);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x65);
  *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
  *(undefined1 *)((longlong)param_1 + 0x67) = *(undefined1 *)((longlong)param_2 + 0x67);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
  *(undefined1 *)((longlong)param_1 + 0x6a) = *(undefined1 *)((longlong)param_2 + 0x6a);
  *(undefined1 *)((longlong)param_1 + 0x6b) = *(undefined1 *)((longlong)param_2 + 0x6b);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)param_2 + 0x6d);
  *(undefined1 *)((longlong)param_1 + 0x6e) = *(undefined1 *)((longlong)param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x6f) = *(undefined1 *)((longlong)param_2 + 0x6f);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x71) = *(undefined1 *)((longlong)param_2 + 0x71);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined1 *)((longlong)param_1 + 0x73) = *(undefined1 *)((longlong)param_2 + 0x73);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0x75);
  *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_2 + 0x76);
  *(undefined1 *)((longlong)param_1 + 0x77) = *(undefined1 *)((longlong)param_2 + 0x77);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)((longlong)param_1 + 0x7a) = *(undefined1 *)((longlong)param_2 + 0x7a);
  *(undefined1 *)((longlong)param_1 + 0x7b) = *(undefined1 *)((longlong)param_2 + 0x7b);
  *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_2 + 0x1f);
  *(undefined1 *)((longlong)param_1 + 0x7d) = *(undefined1 *)((longlong)param_2 + 0x7d);
  *(undefined1 *)((longlong)param_1 + 0x7e) = *(undefined1 *)((longlong)param_2 + 0x7e);
  *(undefined1 *)((longlong)param_1 + 0x7f) = *(undefined1 *)((longlong)param_2 + 0x7f);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x81) = *(undefined1 *)((longlong)param_2 + 0x81);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  *(undefined1 *)((longlong)param_1 + 0x83) = *(undefined1 *)((longlong)param_2 + 0x83);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x85) = *(undefined1 *)((longlong)param_2 + 0x85);
  *(undefined1 *)((longlong)param_1 + 0x86) = *(undefined1 *)((longlong)param_2 + 0x86);
  *(undefined1 *)((longlong)param_1 + 0x87) = *(undefined1 *)((longlong)param_2 + 0x87);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x89) = *(undefined1 *)((longlong)param_2 + 0x89);
  *(undefined1 *)((longlong)param_1 + 0x8a) = *(undefined1 *)((longlong)param_2 + 0x8a);
  *(undefined1 *)((longlong)param_1 + 0x8b) = *(undefined1 *)((longlong)param_2 + 0x8b);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x8d) = *(undefined1 *)((longlong)param_2 + 0x8d);
  *(undefined1 *)((longlong)param_1 + 0x8e) = *(undefined1 *)((longlong)param_2 + 0x8e);
  *(undefined1 *)((longlong)param_1 + 0x8f) = *(undefined1 *)((longlong)param_2 + 0x8f);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)((longlong)param_1 + 0x92) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)((longlong)param_1 + 0x93) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x95) = *(undefined1 *)((longlong)param_2 + 0x95);
  *(undefined1 *)((longlong)param_1 + 0x96) = *(undefined1 *)((longlong)param_2 + 0x96);
  *(undefined1 *)((longlong)param_1 + 0x97) = *(undefined1 *)((longlong)param_2 + 0x97);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x99) = *(undefined1 *)((longlong)param_2 + 0x99);
  *(undefined1 *)((longlong)param_1 + 0x9a) = *(undefined1 *)((longlong)param_2 + 0x9a);
  *(undefined1 *)((longlong)param_1 + 0x9b) = *(undefined1 *)((longlong)param_2 + 0x9b);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x9d) = *(undefined1 *)((longlong)param_2 + 0x9d);
  *(undefined1 *)((longlong)param_1 + 0x9e) = *(undefined1 *)((longlong)param_2 + 0x9e);
  *(undefined1 *)((longlong)param_1 + 0x9f) = *(undefined1 *)((longlong)param_2 + 0x9f);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0xa1) = *(undefined1 *)((longlong)param_2 + 0xa1);
  *(undefined1 *)((longlong)param_1 + 0xa2) = *(undefined1 *)((longlong)param_2 + 0xa2);
  *(undefined1 *)((longlong)param_1 + 0xa3) = *(undefined1 *)((longlong)param_2 + 0xa3);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0xa5) = *(undefined1 *)((longlong)param_2 + 0xa5);
  *(undefined1 *)((longlong)param_1 + 0xa6) = *(undefined1 *)((longlong)param_2 + 0xa6);
  *(undefined1 *)((longlong)param_1 + 0xa7) = *(undefined1 *)((longlong)param_2 + 0xa7);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0xa9);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0xaa);
  *(undefined1 *)((longlong)param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 0xab);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0xad) = *(undefined1 *)((longlong)param_2 + 0xad);
  *(undefined1 *)((longlong)param_1 + 0xae) = *(undefined1 *)((longlong)param_2 + 0xae);
  *(undefined1 *)((longlong)param_1 + 0xaf) = *(undefined1 *)((longlong)param_2 + 0xaf);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_2 + 0xb1);
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_2 + 0xb2);
  *(undefined1 *)((longlong)param_1 + 0xb3) = *(undefined1 *)((longlong)param_2 + 0xb3);
  *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0xb5) = *(undefined1 *)((longlong)param_2 + 0xb5);
  *(undefined1 *)((longlong)param_1 + 0xb6) = *(undefined1 *)((longlong)param_2 + 0xb6);
  *(undefined1 *)((longlong)param_1 + 0xb7) = *(undefined1 *)((longlong)param_2 + 0xb7);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_2 + 0xbb);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x2f);
  *(undefined1 *)((longlong)param_1 + 0xbd) = *(undefined1 *)((longlong)param_2 + 0xbd);
  *(undefined1 *)((longlong)param_1 + 0xbe) = *(undefined1 *)((longlong)param_2 + 0xbe);
  *(undefined1 *)((longlong)param_1 + 0xbf) = *(undefined1 *)((longlong)param_2 + 0xbf);
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  *(longlong **)(param_1 + 0x30) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar6 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar6;
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  uVar6 = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3a) = uVar6;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}





