#include "TaleWorlds.Native.Split.h"

// 99_part_06_part017.c - 4 个函数

// 函数: void FUN_1803b4b80(longlong *param_1,longlong param_2)
void FUN_1803b4b80(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_568 [88];
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined2 uStack_4f8;
  undefined1 uStack_4f6;
  undefined8 uStack_4f0;
  longlong lStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined1 uStack_4d7;
  undefined1 uStack_4d6;
  undefined8 uStack_490;
  undefined1 auStack_448 [1024];
  ulonglong uStack_48;
  
  uStack_490 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_568;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f6 = 0x23;
  uStack_4d6 = 0x23;
  puVar1 = (undefined8 *)*param_1;
  uStack_4f0 = *puVar1;
  uStack_4e0 = puVar1[2];
  _uStack_4d8 = CONCAT11(*(undefined1 *)((longlong)puVar1 + 0x19),1);
  lStack_4e8 = (longlong)*(int *)(param_2 + 8) + puVar1[1];
                    // WARNING: Subroutine does not return
  memset(auStack_448,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b4e80(longlong *param_1,uint param_2,int param_3)
void FUN_1803b4e80(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  int **ppiVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  uint uStackX_10;
  int *piStack_80;
  undefined8 *puStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  int *piStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  ulonglong uVar8;
  
  uVar10 = (ulonglong)(int)param_2;
  if ((int)param_2 < param_3) {
    lVar11 = uVar10 * 4;
    uStackX_10 = param_2;
    do {
      lVar6 = *param_1;
      uVar10 = (ulonglong)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff;
      iVar5 = (int)((longlong)uVar10 % (longlong)*(int *)(lVar6 + 0x14));
      iVar9 = (int)((longlong)uVar10 / (longlong)*(int *)(lVar6 + 0x14));
      lVar1 = *(longlong *)(lVar6 + 0x40);
      puVar4 = (undefined8 *)
               (lVar1 + ((ulonglong)(longlong)(iVar5 * 1000 + iVar9) %
                        (ulonglong)*(uint *)(lVar6 + 0x48)) * 8);
      for (piVar2 = (int *)*puVar4; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 4)) {
        if ((iVar5 == *piVar2) && (iVar9 == piVar2[1])) {
          piStack_80 = piVar2;
          puStack_78 = puVar4;
          ppiVar3 = &piStack_80;
          lVar6 = *(longlong *)(lVar6 + 0x48);
          goto LAB_1803b4f47;
        }
      }
      lVar6 = *(longlong *)(lVar6 + 0x48);
      puStack_68 = (undefined8 *)(lVar1 + lVar6 * 8);
      piStack_70 = (int *)*puStack_68;
      ppiVar3 = &piStack_70;
LAB_1803b4f47:
      uVar8 = 0;
      uVar10 = uVar8;
      if (*ppiVar3 != *(int **)(lVar1 + lVar6 * 8)) {
        uVar10 = *(ulonglong *)(*ppiVar3 + 2);
      }
      uStack_46 = 0x23;
      puVar4 = (undefined8 *)param_1[1];
      uStack_60 = *puVar4;
      uStack_50 = puVar4[2];
      _uStack_48 = CONCAT11(*(undefined1 *)((longlong)puVar4 + 0x19),1);
      piVar2 = (int *)((longlong)*(int *)(param_1[2] + lVar11) + puVar4[1]);
      do {
        piVar12 = piVar2 + 1;
        if (*piVar2 != 0) {
          piStack_58 = piVar12;
          puVar4 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x70,8,0x23);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined2 *)(puVar4 + 2) = 0;
          *(undefined4 *)((longlong)puVar4 + 0x62) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x54) = 0;
          *(undefined4 *)((longlong)puVar4 + 0x5c) = 0;
          *(undefined2 *)(puVar4 + 0xc) = 0;
          *(undefined1 *)((longlong)puVar4 + 0x66) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x24) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x3c) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
          *(undefined8 *)((longlong)puVar4 + 0x4c) = 0;
          *(undefined1 *)((longlong)puVar4 + 0x12) = 0x23;
          iVar5 = *piVar12;
          piVar12 = piVar2 + 2;
          piStack_58 = piVar12;
          FUN_1802a7bf0(piVar12,iVar5,puVar4);
          piVar12 = (int *)((longlong)piVar12 + (longlong)iVar5);
          *(undefined4 *)((longlong)puVar4 + 0x54) = 0xb;
          piStack_58 = piVar12;
          FUN_1803a39b0(uVar10,uVar8,puVar4);
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        piVar2 = piVar12;
      } while ((int)uVar7 < 0x10);
      uStackX_10 = uStackX_10 + 1;
      uVar10 = (ulonglong)uStackX_10;
      lVar11 = lVar11 + 4;
    } while ((int)uStackX_10 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b50e0(longlong *param_1,longlong param_2)
void FUN_1803b50e0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_568 [88];
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined2 uStack_4f8;
  undefined1 uStack_4f6;
  undefined8 uStack_4f0;
  longlong lStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined1 uStack_4d7;
  undefined1 uStack_4d6;
  undefined8 uStack_490;
  undefined1 auStack_448 [1024];
  ulonglong uStack_48;
  
  uStack_490 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_568;
  uStack_510 = 0;
  uStack_508 = 0;
  uStack_500 = 0;
  uStack_4f8 = 0;
  uStack_4f6 = 0x23;
  uStack_4d6 = 0x23;
  puVar1 = (undefined8 *)*param_1;
  uStack_4f0 = *puVar1;
  uStack_4e0 = puVar1[2];
  _uStack_4d8 = CONCAT11(*(undefined1 *)((longlong)puVar1 + 0x19),1);
  lStack_4e8 = (longlong)*(int *)(param_2 + 8) + puVar1[1];
                    // WARNING: Subroutine does not return
  memset(auStack_448,0,0x400);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b53e0(longlong *param_1,int param_2,int param_3)
void FUN_1803b53e0(longlong *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int **ppiVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piStack_80;
  undefined8 *puStack_78;
  int *piStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  int *piStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  
  uVar16 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar12 = uVar16 * 4;
    do {
      lVar9 = *param_1;
      uVar4 = (ulonglong)(uint)((int)uVar16 >> 0x1f) << 0x20 | uVar16 & 0xffffffff;
      uVar5 = (longlong)uVar4 / (longlong)*(int *)(lVar9 + 0x14);
      lVar6 = (longlong)uVar4 % (longlong)*(int *)(lVar9 + 0x14);
      iVar13 = (int)lVar6;
      iVar14 = (int)uVar5;
      lVar3 = *(longlong *)(lVar9 + 0x40);
      puVar1 = (undefined8 *)
               (lVar3 + ((ulonglong)(longlong)(iVar13 * 1000 + iVar14) %
                        (ulonglong)*(uint *)(lVar9 + 0x48)) * 8);
      for (piVar10 = (int *)*puVar1; piVar10 != (int *)0x0; piVar10 = *(int **)(piVar10 + 4)) {
        if ((iVar13 == *piVar10) && (iVar14 == piVar10[1])) {
          piStack_80 = piVar10;
          puStack_78 = puVar1;
          ppiVar7 = &piStack_80;
          lVar9 = *(longlong *)(lVar9 + 0x48);
          goto LAB_1803b54a7;
        }
      }
      lVar9 = *(longlong *)(lVar9 + 0x48);
      puStack_68 = (undefined8 *)(lVar3 + lVar9 * 8);
      piStack_70 = (int *)*puStack_68;
      ppiVar7 = &piStack_70;
LAB_1803b54a7:
      if (*ppiVar7 == *(int **)(lVar3 + lVar9 * 8)) {
        lVar9 = 0;
      }
      else {
        lVar9 = *(longlong *)(*ppiVar7 + 2);
      }
      uStack_46 = 0x23;
      puVar1 = (undefined8 *)param_1[1];
      uStack_60 = *puVar1;
      uStack_50 = puVar1[2];
      _uStack_48 = CONCAT11(*(undefined1 *)((longlong)puVar1 + 0x19),1);
      piVar10 = (int *)((longlong)*(int *)(lVar12 + param_1[2]) + puVar1[1]);
      iVar14 = *(int *)(lVar9 + 0x70) * *(int *)(lVar9 + 0x70);
      iVar13 = 0;
      do {
        iVar2 = *piVar10;
        piVar11 = piVar10 + 1;
        piVar10 = piVar10 + 2;
        if (iVar2 == iVar13) {
          if (*piVar11 == iVar14) {
            piStack_58 = piVar10;
            if (iVar14 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar14,
                                    CONCAT71((uint7)((ulonglong)lVar6 >> 8) & 0xffffff,3),
                                    uVar5 & 0xffffffff,0xfffffffffffffffe);
            }
                    // WARNING: Subroutine does not return
            memcpy(uVar8,piVar10,(longlong)iVar14);
          }
        }
        else {
          piVar10 = (int *)((longlong)piVar10 + (longlong)*piVar11);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 4);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      lVar12 = lVar12 + 4;
    } while ((int)uVar15 < param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




