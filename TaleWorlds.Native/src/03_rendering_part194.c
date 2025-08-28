#include "TaleWorlds.Native.Split.h"

// 03_rendering_part194.c - 12 个函数

// 函数: void FUN_18037e6b2(undefined8 *param_1,int param_2,int param_3)
void FUN_18037e6b2(undefined8 *param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong in_RAX;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined8 unaff_R12;
  longlong lVar17;
  undefined8 unaff_R13;
  ulonglong uVar18;
  int *piVar19;
  undefined8 unaff_R14;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lStackX_8;
  ulonglong uStackX_10;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  iVar14 = param_2 * 2;
  *(undefined8 *)(in_RAX + -0x10) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x20) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R13;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R14;
  uStackX_10 = (ulonglong)(uint)(param_3 - param_2);
  do {
    lStackX_8 = 0x10;
    lVar11 = (longlong)(*(int *)*param_1 + iVar14) << 9;
    do {
      piVar4 = *(int **)(lVar11 + 0x30 + param_1[1]);
      for (piVar19 = *(int **)(lVar11 + 0x28 + param_1[1]); piVar19 != piVar4; piVar19 = piVar19 + 1
          ) {
        iVar2 = *piVar19;
        lVar17 = (longlong)iVar2;
        lVar5 = *(longlong *)param_1[1];
        if ((*(int *)(lVar5 + 0x3c + lVar17 * 0x48) == 0) &&
           (iVar10 = *(int *)(lVar5 + 0x30 + lVar17 * 0x48), iVar12 = iVar10 + -1,
           iVar12 < iVar10 + 2)) {
          uVar18 = 0;
          do {
            iVar3 = *(int *)(lVar5 + 0x34 + lVar17 * 0x48);
            iVar10 = iVar3 + -1;
            if (iVar10 < iVar3 + 2) {
              uVar13 = (ulonglong)iVar10;
              do {
                uVar8 = uVar18;
                if ((-1 < iVar12) && (uVar8 = (longlong)iVar12, 0xf < iVar12)) {
                  uVar8 = 0xf;
                }
                uVar16 = uVar18;
                if ((-1 < iVar10) && (uVar16 = uVar13, 0xf < iVar10)) {
                  uVar16 = 0xf;
                }
                lVar9 = (uVar8 * 0x10 + uVar16) * 0x20;
                piVar15 = *(int **)(lVar9 + 0x28 + param_1[1]);
                piVar6 = *(int **)(lVar9 + 0x30 + param_1[1]);
                uVar8 = (ulonglong)((longlong)piVar6 + (3 - (longlong)piVar15)) >> 2;
                if (piVar6 < piVar15) {
                  uVar8 = uVar18;
                }
                uVar16 = uVar18;
                if (uVar8 != 0) {
                  do {
                    lVar9 = (longlong)*piVar15;
                    if (((*piVar15 != iVar2) &&
                        (lVar7 = *(longlong *)param_1[1], *(int *)(lVar7 + 0x3c + lVar9 * 0x48) == 0
                        )) && (fVar22 = *(float *)(lVar5 + 0xc + lVar17 * 0x48) -
                                        *(float *)(lVar7 + 0xc + lVar9 * 0x48),
                              fVar21 = *(float *)(lVar5 + 8 + lVar17 * 0x48) -
                                       *(float *)(lVar7 + 8 + lVar9 * 0x48),
                              fVar20 = *(float *)(lVar5 + 0x10 + lVar17 * 0x48) -
                                       *(float *)(lVar7 + 0x10 + lVar9 * 0x48),
                              fVar1 = *(float *)(lVar5 + 0x40 + lVar17 * 0x48),
                              fVar22 * fVar22 + fVar21 * fVar21 + fVar20 * fVar20 < fVar1 * fVar1))
                    {
                      *(undefined4 *)(lVar7 + 0x3c + lVar9 * 0x48) = 1;
                    }
                    piVar15 = piVar15 + 1;
                    uVar16 = uVar16 + 1;
                  } while (uVar16 != uVar8);
                }
                iVar10 = iVar10 + 1;
                uVar13 = uVar13 + 1;
              } while (iVar10 < *(int *)(lVar5 + 0x34 + lVar17 * 0x48) + 2);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(lVar5 + 0x30 + lVar17 * 0x48) + 2);
        }
      }
      lVar11 = lVar11 + 0x20;
      lStackX_8 = lStackX_8 + -1;
    } while (lStackX_8 != 0);
    iVar14 = iVar14 + 2;
    uStackX_10 = uStackX_10 - 1;
  } while (uStackX_10 != 0);
  return;
}





// 函数: void FUN_18037e8fb(void)
void FUN_18037e8fb(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037e900(longlong *param_1,int param_2)
void FUN_18037e900(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lStackX_20;
  longlong lStack_a8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  int *piStack_70;
  
  if (*param_1 != param_1[1]) {
    piStack_70 = (int *)0x0;
    piVar16 = (int *)0x0;
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    puStack_80 = (undefined8 *)0x0;
    plVar12 = param_1 + 5;
    lStack_a8 = 0x10;
    piVar14 = (int *)0x0;
    piVar9 = (int *)0x0;
    do {
      lStackX_20 = 0x10;
      do {
        lVar18 = *plVar12;
        lVar17 = 0;
        lVar8 = (longlong)(int)(plVar12[1] - lVar18 >> 2);
        piVar13 = piVar14;
        piVar15 = piVar9;
        if (0 < lVar8) {
          do {
            iVar3 = *(int *)(*plVar12 + lVar17 * 4);
            piVar14 = piVar13;
            piVar9 = piVar15;
            if (*(int *)(*param_1 + 0x38 + (longlong)iVar3 * 0x48) != param_2) {
              if (piVar13 < piVar16) {
                piVar14 = piVar13 + 1;
                *piVar13 = iVar3;
              }
              else {
                lVar18 = (longlong)piVar13 - (longlong)piVar15 >> 2;
                if (lVar18 == 0) {
                  lVar18 = 1;
LAB_18037ea1e:
                  piVar9 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar18 * 4,
                                                CONCAT71((int7)((ulonglong)piVar16 >> 8),3));
                }
                else {
                  lVar18 = lVar18 * 2;
                  if (lVar18 != 0) goto LAB_18037ea1e;
                  piVar9 = (int *)0x0;
                }
                if (piVar15 != piVar13) {
                    // WARNING: Subroutine does not return
                  memmove(piVar9,piVar15,(longlong)piVar13 - (longlong)piVar15);
                }
                *piVar9 = iVar3;
                piVar14 = piVar9 + 1;
                if (piVar15 != (int *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(piVar15);
                }
                piVar16 = piVar9 + lVar18;
                piStack_70 = piVar9;
              }
            }
            lVar17 = lVar17 + 1;
            piVar13 = piVar14;
            piVar15 = piVar9;
          } while (lVar17 < lVar8);
          lVar18 = *plVar12;
        }
        plVar12[1] = lVar18;
        plVar12 = plVar12 + 4;
        lStackX_20 = lStackX_20 + -1;
      } while (lStackX_20 != 0);
      lStack_a8 = lStack_a8 + -1;
      piVar13 = piVar9;
    } while (lStack_a8 != 0);
    for (; piVar9 != piVar14; piVar9 = piVar9 + 1) {
      lVar8 = (longlong)*piVar9;
      lVar18 = *param_1;
      if (puStack_88 < puStack_80) {
        puVar10 = (undefined8 *)(lVar18 + lVar8 * 0x48);
        uVar7 = puVar10[1];
        *puStack_88 = *puVar10;
        puStack_88[1] = uVar7;
        puVar10 = (undefined8 *)(lVar18 + 0x10 + lVar8 * 0x48);
        uVar7 = puVar10[1];
        puStack_88[2] = *puVar10;
        puStack_88[3] = uVar7;
        puVar10 = (undefined8 *)(lVar18 + 0x20 + lVar8 * 0x48);
        uVar7 = puVar10[1];
        puStack_88[4] = *puVar10;
        puStack_88[5] = uVar7;
        puVar10 = (undefined8 *)(lVar18 + 0x30 + lVar8 * 0x48);
        uVar7 = puVar10[1];
        puStack_88[6] = *puVar10;
        puStack_88[7] = uVar7;
        puStack_88[8] = *(undefined8 *)(lVar18 + 0x40 + lVar8 * 0x48);
        puVar10 = puStack_90;
      }
      else {
        lVar11 = (longlong)puStack_88 - (longlong)puStack_90;
        lVar17 = lVar11 / 0x12 + (lVar11 >> 0x3f);
        lVar17 = (lVar17 >> 2) - (lVar17 >> 0x3f);
        if (lVar17 == 0) {
          lVar17 = 1;
LAB_18037eb8c:
          puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar17 * 0x48,0xe);
        }
        else {
          lVar17 = lVar17 * 2;
          if (lVar17 != 0) goto LAB_18037eb8c;
          puVar10 = (undefined8 *)0x0;
        }
        if (puStack_90 != puStack_88) {
                    // WARNING: Subroutine does not return
          memmove(puVar10,puStack_90,lVar11);
        }
        puVar1 = (undefined8 *)(lVar18 + lVar8 * 0x48);
        uVar7 = puVar1[1];
        *puVar10 = *puVar1;
        puVar10[1] = uVar7;
        puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar8 * 0x48);
        uVar7 = puVar1[1];
        puVar10[2] = *puVar1;
        puVar10[3] = uVar7;
        puVar1 = (undefined8 *)(lVar18 + 0x20 + lVar8 * 0x48);
        uVar7 = puVar1[1];
        puVar10[4] = *puVar1;
        puVar10[5] = uVar7;
        puVar2 = (undefined4 *)(lVar18 + 0x30 + lVar8 * 0x48);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar10 + 6) = *puVar2;
        *(undefined4 *)((longlong)puVar10 + 0x34) = uVar4;
        *(undefined4 *)(puVar10 + 7) = uVar5;
        *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar6;
        puVar10[8] = *(undefined8 *)(lVar18 + 0x40 + lVar8 * 0x48);
        if (puStack_90 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puStack_90);
        }
        puStack_80 = puVar10 + lVar17 * 9;
        puStack_88 = puVar10;
      }
      puStack_88 = puStack_88 + 9;
      piVar13 = piStack_70;
      puStack_90 = puVar10;
    }
    param_1[1] = *param_1;
    if (puStack_90 != puStack_88) {
      puVar10 = puStack_90 + 7;
      do {
        FUN_18037e260(param_1,puVar10[-7],puVar10 + -6,*(undefined4 *)puVar10,
                      *(undefined4 *)(puVar10 + 1));
        puVar1 = puVar10 + 2;
        puVar10 = puVar10 + 9;
      } while (puVar1 != puStack_88);
    }
    if (puStack_90 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_90);
    }
    if (piVar13 != (int *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(piVar13);
    }
  }
  return;
}





// 函数: void FUN_18037ecf0(longlong *param_1)
void FUN_18037ecf0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1[1] = *param_1;
  lVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xe;
  param_1 = param_1 + 6;
  lVar3 = 0x10;
  do {
    lVar4 = 0x10;
    do {
      *param_1 = param_1[-1];
      lVar2 = param_1[-1];
      param_1[-1] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 2) = 3;
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      param_1 = param_1 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037ee20(longlong *param_1)
void FUN_18037ee20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((ulonglong)((param_1[2] - *param_1) / 0x28) < 0x1000) {
    lVar2 = FUN_18062b420(_DAT_180c8ed18,0x28000,(char)param_1[3]);
    lVar1 = *param_1;
    if (lVar1 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar2,lVar1,param_1[1] - lVar1);
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + 0x28000;
  }
  return;
}





// 函数: void FUN_18037ee70(void)
void FUN_18037ee70(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RBX;
  
  lVar2 = FUN_18062b420();
  lVar1 = *unaff_RBX;
  if (lVar1 != unaff_RBX[1]) {
                    // WARNING: Subroutine does not return
    memmove(lVar2,lVar1,unaff_RBX[1] - lVar1);
  }
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = lVar2;
  unaff_RBX[1] = lVar2;
  unaff_RBX[2] = lVar2 + 0x28000;
  return;
}





// 函数: void FUN_18037eeec(void)
void FUN_18037eeec(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037ef00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18037ef00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  lVar2 = param_1[1];
  lVar3 = *param_1;
  lVar5 = 0;
  lVar4 = param_1[4];
  lVar6 = lVar2 - lVar3;
  lVar1 = lVar6 / 0x28;
  if (lVar1 != 0) {
    lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar1 * 0x28,0xe,param_4,0xfffffffffffffffe,0,0,0,0xe,lVar4
                         );
  }
  lVar1 = lVar5 + lVar1 * 0x28;
  if (lVar3 != lVar2) {
                    // WARNING: Subroutine does not return
    memmove(lVar5,lVar3,lVar6,param_4,uVar7,lVar5,lVar1,lVar1);
  }
  lVar2 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[4] = lVar4;
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18037f020(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char acStackX_8 [4];
  uint uStackX_c;
  
  iVar1 = *param_3;
  uVar8 = (ulonglong)(longlong)iVar1 % (ulonglong)*(uint *)(param_1 + 0x10);
  piVar5 = *(int **)(*(longlong *)(param_1 + 8) + uVar8 * 8);
  lVar7 = *(longlong *)(param_1 + 8) + uVar8 * 8;
  do {
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x2c));
      iVar2 = param_3[1];
      iVar3 = param_3[2];
      iVar4 = param_3[3];
      *piVar5 = *param_3;
      piVar5[1] = iVar2;
      piVar5[2] = iVar3;
      piVar5[3] = iVar4;
      piVar5[4] = 0;
      piVar5[5] = 0;
      FUN_18066c220(param_1 + 0x20,acStackX_8,*(undefined4 *)(param_1 + 0x10),
                    *(undefined4 *)(param_1 + 0x18),1);
      if (acStackX_8[0] != '\0') {
        uVar8 = (ulonglong)(longlong)iVar1 % (ulonglong)uStackX_c;
        FUN_18015bdc0(param_1,uStackX_c);
      }
      *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar8 * 8);
      uVar6 = 1;
      *(int **)(*(longlong *)(param_1 + 8) + uVar8 * 8) = piVar5;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
      lVar7 = *(longlong *)(param_1 + 8) + uVar8 * 8;
LAB_18037f0fe:
      *param_2 = piVar5;
      param_2[1] = lVar7;
      *(undefined1 *)(param_2 + 2) = uVar6;
      return param_2;
    }
    if (iVar1 == *piVar5) {
      uVar6 = 0;
      goto LAB_18037f0fe;
    }
    piVar5 = *(int **)(piVar5 + 4);
  } while( true );
}





// 函数: void FUN_18037f130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18037f130(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    return;
  }
  uVar6 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar3 = uVar1 >> 0x20;
  uVar4 = 0;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      plVar5 = (longlong *)((ulonglong)uVar4 + param_1);
      puVar2 = (undefined8 *)plVar5[0x21];
      if (puVar2 != (undefined8 *)0x0) {
        FUN_180179f00(plVar5 + 0x1f,*puVar2,param_3,param_4,uVar6);
        if (puVar2[5] == 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x38))();
      }
      uVar4 = uVar4 + (int)uVar1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900((ulonglong *)(param_1 + -0x10));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong *
FUN_18037f230(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return (ulonglong *)0x0;
  }
  puVar2 = (ulonglong *)
           FUN_18062b420(_DAT_180c8ed18,param_1 * 0x130 + 0x10,0xe,param_4,0xfffffffffffffffe);
  *puVar2 = param_1 << 0x20 | 0x130;
  iVar4 = 0;
  puVar3 = puVar2 + 7;
  do {
    puVar3[-5] = 0;
    puVar3[-4] = 0;
    puVar3[-3] = 0x7f7fffff00000000;
    puVar3[-2] = 0;
    puVar3[-1] = 0x7f7fffff00000000;
    *puVar3 = 0;
    puVar3[1] = 0x7f7fffff00000000;
    puVar3[0x12] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *(undefined4 *)(puVar3 + 0x19) = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar1 = puVar3 + 0x1a;
    *(undefined4 *)((longlong)puVar3 + 0xe9) = 0;
    *(undefined2 *)((longlong)puVar3 + 0xed) = 0;
    *(undefined1 *)((longlong)puVar3 + 0xef) = 0;
    *(undefined4 *)(puVar3 + 0x1f) = 3;
    *puVar1 = (ulonglong)puVar1;
    puVar3[0x1b] = (ulonglong)puVar1;
    puVar3[0x1c] = 0;
    *(undefined1 *)(puVar3 + 0x1d) = 0;
    puVar3[0x1e] = 0;
    *(undefined4 *)(puVar3 + 0x20) = 0xbf800000;
    *(undefined4 *)((longlong)puVar3 + 0xcc) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 0x26;
  } while ((ulonglong)(longlong)iVar4 < param_1);
  return puVar2 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18037f3e0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar4 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar4;
    uVar4 = param_2[3];
    puVar7[2] = param_2[2];
    puVar7[3] = uVar4;
    puVar7[4] = param_2[4];
    param_1[1] = param_1[1] + 0x28;
    return (undefined8 *)(param_1[1] - 0x28);
  }
  puVar8 = (undefined8 *)*param_1;
  lVar6 = ((longlong)puVar7 - (longlong)puVar8) / 0x28;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_18037f493;
    }
  }
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x28,(char)param_1[3]);
  puVar8 = (undefined8 *)*param_1;
  puVar7 = (undefined8 *)param_1[1];
LAB_18037f493:
  if (puVar8 != puVar7) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar8,(longlong)puVar7 - (longlong)puVar8);
  }
  uVar4 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar1;
  *(undefined4 *)(puVar5 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
  puVar5[4] = param_2[4];
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (ulonglong)puVar5;
  param_1[2] = (ulonglong)(puVar5 + lVar6 * 5);
  param_1[1] = (ulonglong)(puVar5 + 5);
  return puVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18037f438(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *unaff_RBX;
  undefined8 *unaff_RBP;
  longlong lVar6;
  longlong unaff_RDI;
  
  if (param_1 / 0x28 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = (param_1 / 0x28) * 2;
    if (lVar6 == 0) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_18037f493;
    }
  }
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 0x28,(char)unaff_RBX[3]);
  param_4 = *unaff_RBX;
  unaff_RDI = unaff_RBX[1];
LAB_18037f493:
  if (param_4 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,param_4,unaff_RDI - param_4);
  }
  uVar4 = unaff_RBP[1];
  *puVar5 = *unaff_RBP;
  puVar5[1] = uVar4;
  uVar1 = *(undefined4 *)((longlong)unaff_RBP + 0x14);
  uVar2 = *(undefined4 *)(unaff_RBP + 3);
  uVar3 = *(undefined4 *)((longlong)unaff_RBP + 0x1c);
  *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(unaff_RBP + 2);
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar1;
  *(undefined4 *)(puVar5 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
  puVar5[4] = unaff_RBP[4];
  if (*unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RBX = (longlong)puVar5;
  unaff_RBX[2] = (longlong)(puVar5 + lVar6 * 5);
  unaff_RBX[1] = (longlong)(puVar5 + 5);
  return puVar5;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18037f530(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  
  plVar1 = (longlong *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (ulonglong)plVar1[4] < *param_5)) {
LAB_18037f5a2:
      uVar5 = 0;
      goto LAB_18037f5a5;
    }
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)plVar1[4])) {
      if (*param_4 == 0) goto LAB_18037f5a2;
      uVar5 = 1;
      param_4 = plVar1;
LAB_18037f5a5:
      if (param_4 != (longlong *)0x0) {
        FUN_18037fa40(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (ulonglong)plVar1[4];
      if (bVar6) {
        plVar2 = (longlong *)plVar1[1];
      }
      else {
        plVar2 = (longlong *)*plVar1;
      }
    } while (plVar2 != (longlong *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (longlong *)param_1[1]) {
      uVar3 = *param_5;
      goto LAB_18037f612;
    }
    plVar2 = (longlong *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (ulonglong)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
LAB_18037f612:
  if ((plVar1 == param_1) || (uVar3 < (ulonglong)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  *(ulonglong *)(lVar4 + 0x20) = *param_5;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined4 *)(lVar4 + 0x40) = 0xe;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037f6b0(longlong *param_1,undefined4 *param_2)
void FUN_18037f6b0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_1[1];
  lVar5 = *param_1;
  lVar6 = lVar7 - lVar5 >> 5;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = lVar6 * 2;
    if (lVar6 == 0) {
      puVar4 = (undefined4 *)0x0;
      goto LAB_18037f716;
    }
  }
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,lVar6 << 5,(char)param_1[3]);
  lVar5 = *param_1;
  lVar7 = param_1[1];
LAB_18037f716:
  if (lVar5 != lVar7) {
                    // WARNING: Subroutine does not return
    memmove(puVar4,lVar5,lVar7 - lVar5);
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *puVar4 = *param_2;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  puVar4[4] = param_2[4];
  puVar4[5] = uVar1;
  puVar4[6] = uVar2;
  puVar4[7] = uVar3;
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar4;
  param_1[2] = (longlong)(puVar4 + lVar6 * 8);
  param_1[1] = (longlong)(puVar4 + 8);
  return;
}





// 函数: void FUN_18037f790(longlong param_1,longlong param_2,code *param_3)
void FUN_18037f790(longlong param_1,longlong param_2,code *param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (param_1 != param_2) {
    iVar3 = 0;
    lVar4 = (param_2 - param_1) / 0x28;
    for (lVar2 = lVar4; lVar2 != 0; lVar2 = lVar2 >> 1) {
      iVar3 = iVar3 + 1;
    }
    FUN_1803809c0(param_1,param_2,(longlong)(iVar3 + -1) * 2,param_3,0xfffffffffffffffe);
    if (lVar4 < 0x1d) {
      FUN_18037fe30(param_1,param_2,param_3);
    }
    else {
      lVar4 = param_1 + 0x460;
      FUN_18037fe30(param_1,lVar4,param_3);
      for (; lVar4 != param_2; lVar4 = lVar4 + 0x28) {
        puStack_60 = &UNK_180a3c3e0;
        uStack_50 = *(undefined4 *)(lVar4 + 0x10);
        lStack_58 = *(longlong *)(lVar4 + 8);
        uStack_48 = *(undefined8 *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x10) = 0;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        uStack_40 = *(undefined4 *)(lVar4 + 0x20);
        lVar2 = lVar4 + -0x28;
        cVar1 = (*param_3)(&puStack_60,lVar2);
        lVar5 = lVar4;
        if (cVar1 != '\0') {
          lVar6 = lVar4 - lVar2;
          do {
            FUN_18005d190(lVar5,lVar2);
            *(undefined4 *)(lVar6 + 0x20 + lVar2) = *(undefined4 *)(lVar2 + 0x20);
            lVar5 = lVar5 + -0x28;
            lVar2 = lVar2 + -0x28;
            cVar1 = (*param_3)(&puStack_60,lVar2);
          } while (cVar1 != '\0');
        }
        FUN_18005d190(lVar5,&puStack_60);
        *(undefined4 *)(lVar5 + 0x20) = uStack_40;
        puStack_60 = &UNK_180a3c3e0;
        if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
    }
  }
  return;
}



undefined8 FUN_18037f980(undefined8 param_1,ulonglong param_2)

{
  FUN_1803dc460();
  if ((param_2 & 1) != 0) {
    free(param_1,400);
  }
  return param_1;
}



undefined8 *
FUN_18037f9c0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 * FUN_18037fa10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18037fa40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_18037fa40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 0xe;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



