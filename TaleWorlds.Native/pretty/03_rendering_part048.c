#include "TaleWorlds.Native.Split.h"

// 03_rendering_part048.c - 11 个函数

// 函数: void FUN_180291b40(int *param_1,undefined8 param_2,undefined8 param_3,char param_4)
void FUN_180291b40(int *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  float fVar20;
  float fVar21;
  float fStackX_8;
  float fStackX_c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  fStackX_8 = (float)param_2;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  uStack_28._0_4_ = (float)param_3;
  uStack_28._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar20 = uStack_28._4_4_;
  fVar21 = (float)uStack_28;
  uVar11 = param_3;
  uStack_18 = param_2;
  uStack_10 = param_3;
  if ((param_4 != '\0') && (uVar11 = param_3, param_1[0x18] != 0)) {
    pfVar2 = (float *)(*(longlong *)(param_1 + 0x1a) + -0x10 + (longlong)param_1[0x18] * 0x10);
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
    fVar9 = pfVar2[3];
    if (fStackX_8 < fVar6) {
      uStack_18 = CONCAT44(fStackX_c,fVar6);
      fStackX_8 = fVar6;
    }
    if (fStackX_c < fVar7) {
      uStack_18 = CONCAT44(fVar7,(undefined4)uStack_18);
      fStackX_c = fVar7;
    }
    if (fVar8 < (float)uStack_28) {
      uStack_10 = CONCAT44(uStack_28._4_4_,fVar8);
      fVar21 = fVar8;
    }
    uVar11 = *(undefined8 *)pfVar2;
    if (fVar9 < uStack_28._4_4_) {
      uStack_10 = CONCAT44(fVar9,(undefined4)uStack_10);
      fVar20 = fVar9;
    }
  }
  uStack_28 = uVar11;
  if (fVar21 <= fStackX_8) {
    uStack_10 = CONCAT44(uStack_10._4_4_,fStackX_8);
  }
  if (fVar20 <= fStackX_c) {
    uStack_10 = CONCAT44(fStackX_c,(undefined4)uStack_10);
  }
  iVar12 = param_1[0x18];
  iVar13 = param_1[0x19];
  if (iVar12 == iVar13) {
    if (iVar13 == 0) {
      iVar13 = 8;
    }
    else {
      iVar13 = iVar13 / 2 + iVar13;
    }
    iVar4 = iVar12 + 1;
    if (iVar12 + 1 < iVar13) {
      iVar4 = iVar13;
    }
    FUN_18013e620(param_1 + 0x18,iVar4);
    iVar12 = param_1[0x18];
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x1a) + (longlong)iVar12 * 0x10);
  *puVar1 = uStack_18;
  puVar1[1] = uStack_10;
  param_1[0x18] = param_1[0x18] + 1;
  if (param_1[0x18] == 0) {
    plVar16 = (longlong *)(*(longlong *)(param_1 + 0xe) + 0x18);
  }
  else {
    plVar16 = (longlong *)((longlong)(param_1[0x18] + -1) * 0x10 + *(longlong *)(param_1 + 0x1a));
  }
  lVar10 = *plVar16;
  lVar3 = plVar16[1];
  iVar12 = *param_1;
  piVar19 = (int *)0x0;
  piVar17 = piVar19;
  if (0 < iVar12) {
    piVar17 = (int *)((longlong)(iVar12 + -1) * 0x30 + *(longlong *)(param_1 + 2));
  }
  if (((piVar17 != (int *)0x0) &&
      ((*piVar17 == 0 ||
       ((*(longlong *)(piVar17 + 1) == lVar10 && (*(longlong *)(piVar17 + 3) == lVar3)))))) &&
     (*(longlong *)(piVar17 + 8) == 0)) {
    piVar18 = piVar17 + -0xc;
    if (iVar12 < 2) {
      piVar18 = piVar19;
    }
    if ((((*piVar17 == 0) && (piVar18 != (int *)0x0)) && (*(longlong *)(piVar18 + 1) == lVar10)) &&
       (*(longlong *)(piVar18 + 3) == lVar3)) {
      if (param_1[0x1c] != 0) {
        piVar19 = *(int **)(*(longlong *)(param_1 + 0x1e) + -8 + (longlong)param_1[0x1c] * 8);
      }
      if ((*(int **)(piVar18 + 6) == piVar19) && (*(longlong *)(piVar18 + 8) == 0)) {
        *param_1 = iVar12 + -1;
        return;
      }
    }
    *(longlong *)(piVar17 + 1) = lVar10;
    *(longlong *)(piVar17 + 3) = lVar3;
    return;
  }
  if (param_1[0x18] == 0) {
    puVar15 = (uint *)(*(longlong *)(param_1 + 0xe) + 0x18);
  }
  else {
    puVar15 = (uint *)((longlong)(param_1[0x18] + -1) * 0x10 + *(longlong *)(param_1 + 0x1a));
  }
  uVar5 = *puVar15;
  lVar10 = *(longlong *)(puVar15 + 1);
  uStack_28 = CONCAT44(uStack_28._4_4_,puVar15[3]);
  if (param_1[0x1c] == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + -8 + (longlong)param_1[0x1c] * 8);
  }
  iVar12 = *param_1;
  iVar13 = param_1[1];
  if (iVar12 == iVar13) {
    if (iVar13 == 0) {
      iVar13 = 8;
    }
    else {
      iVar13 = iVar13 / 2 + iVar13;
    }
    iVar4 = iVar12 + 1;
    if (iVar12 + 1 < iVar13) {
      iVar4 = iVar13;
    }
    FUN_18013e760(param_1,iVar4);
    iVar12 = *param_1;
  }
  lVar14 = (longlong)iVar12;
  lVar3 = *(longlong *)(param_1 + 2);
  plVar16 = (longlong *)(lVar3 + lVar14 * 0x30);
  *plVar16 = (ulonglong)uVar5 << 0x20;
  plVar16[1] = lVar10;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar14 * 0x30);
  *puVar1 = uStack_28;
  puVar1[1] = uStack_20;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar14 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = *param_1 + 1;
  return;
}





// 函数: void FUN_180291c70(int *param_1,undefined8 param_2)
void FUN_180291c70(int *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  iVar8 = param_1[0x1c];
  if (iVar8 == param_1[0x1d]) {
    FUN_18011dc70(param_1 + 0x1c);
    iVar8 = param_1[0x1c];
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + (longlong)iVar8 * 8) = param_2;
  param_1[0x1c] = param_1[0x1c] + 1;
  piVar14 = (int *)0x0;
  if (param_1[0x1c] != 0) {
    piVar14 = *(int **)(*(longlong *)(param_1 + 0x1e) + -8 + (longlong)param_1[0x1c] * 8);
  }
  iVar8 = *param_1;
  if (iVar8 != 0) {
    piVar13 = (int *)(*(longlong *)(param_1 + 2) + -0x30 + (longlong)iVar8 * 0x30);
    if ((piVar13 != (int *)0x0) &&
       (((*piVar13 == 0 || (*(int **)(piVar13 + 6) == piVar14)) && (*(longlong *)(piVar13 + 8) == 0)
        ))) {
      piVar12 = piVar13 + -0xc;
      if (iVar8 < 2) {
        piVar12 = (int *)0x0;
      }
      if (((*piVar13 == 0) && (piVar12 != (int *)0x0)) && (*(int **)(piVar12 + 6) == piVar14)) {
        if (param_1[0x18] == 0) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0xe) + 0x18);
        }
        else {
          plVar11 = (longlong *)
                    ((longlong)(param_1[0x18] + -1) * 0x10 + *(longlong *)(param_1 + 0x1a));
        }
        if (((*(longlong *)(piVar12 + 1) == *plVar11) && (*(longlong *)(piVar12 + 3) == plVar11[1]))
           && (*(longlong *)(piVar12 + 8) == 0)) {
          *param_1 = iVar8 + -1;
          return;
        }
      }
      *(int **)(piVar13 + 6) = piVar14;
      return;
    }
  }
  if (param_1[0x18] == 0) {
    puVar10 = (uint *)(*(longlong *)(param_1 + 0xe) + 0x18);
  }
  else {
    puVar10 = (uint *)((longlong)(param_1[0x18] + -1) * 0x10 + *(longlong *)(param_1 + 0x1a));
  }
  uVar4 = *puVar10;
  lVar6 = *(longlong *)(puVar10 + 1);
  uVar5 = puVar10[3];
  if (param_1[0x1c] == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + -8 + (longlong)param_1[0x1c] * 8);
  }
  iVar8 = *param_1;
  iVar7 = param_1[1];
  if (iVar8 == iVar7) {
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    iVar3 = iVar8 + 1;
    if (iVar8 + 1 < iVar7) {
      iVar3 = iVar7;
    }
    FUN_18013e760(param_1,iVar3);
    iVar8 = *param_1;
  }
  lVar9 = (longlong)iVar8;
  lVar2 = *(longlong *)(param_1 + 2);
  plVar11 = (longlong *)(lVar2 + lVar9 * 0x30);
  *plVar11 = (ulonglong)uVar4 << 0x20;
  plVar11[1] = lVar6;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar9 * 0x30);
  *puVar1 = CONCAT44(uStack_24,uVar5);
  puVar1[1] = uStack_20;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar9 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180291cf0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)
void FUN_180291cf0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  int *piVar16;
  int iVar17;
  undefined1 auStackX_10 [8];
  undefined1 *puStackX_18;
  undefined8 *puStackX_20;
  undefined4 uStack_5c;
  
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 < param_2) {
    iVar17 = *(int *)(param_1 + 0x9c);
    if (iVar17 < param_2) {
      if (iVar17 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar17 / 2 + iVar17;
      }
      iVar13 = param_2;
      if (param_2 < iVar9) {
        iVar13 = iVar9;
      }
      if (iVar17 < iVar13) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
        }
        uVar10 = func_0x000180120ce0((longlong)iVar13 << 5,_DAT_180c8a9a8,param_3,param_4,
                                     0xfffffffffffffffe);
        if (*(longlong *)(param_1 + 0xa0) != 0) {
                    // WARNING: Subroutine does not return
          memcpy(uVar10,*(longlong *)(param_1 + 0xa0),(longlong)*(int *)(param_1 + 0x98) << 5);
        }
        *(undefined8 *)(param_1 + 0xa0) = uVar10;
        *(int *)(param_1 + 0x9c) = iVar13;
      }
    }
    *(int *)(param_1 + 0x98) = param_2;
  }
  *(int *)(param_1 + 0x94) = param_2;
  puVar4 = *(undefined8 **)(param_1 + 0xa0);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (1 < (longlong)param_2) {
    lVar12 = 1;
    lVar14 = 0x20;
    do {
      iVar17 = 0;
      if (lVar12 < iVar3) {
        puVar15 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + lVar14);
        iVar9 = puVar15[1];
        if (iVar9 < 0) {
          iVar9 = iVar9 / 2 + iVar9;
          iVar13 = 0;
          if (0 < iVar9) {
            iVar13 = iVar9;
          }
          FUN_18013e760(puVar15,iVar13);
        }
        *puVar15 = 0;
        lVar5 = *(longlong *)(param_1 + 0xa0);
        iVar9 = *(int *)(lVar5 + 0x14 + lVar14);
        if (iVar9 < 0) {
          iVar9 = iVar9 / 2 + iVar9;
          iVar13 = 0;
          if (0 < iVar9) {
            iVar13 = iVar9;
          }
          FUN_18011dd10(lVar5 + 0x10 + lVar14,iVar13);
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar14) = 0;
      }
      else {
        puStackX_20 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar14);
        puStackX_18 = auStackX_10;
        if (puStackX_20 != (undefined8 *)0x0) {
          puStackX_20[2] = 0;
          puStackX_20[3] = 0;
          *puStackX_20 = 0;
          puStackX_20[1] = 0;
          puStackX_20[2] = 0;
          puStackX_20[3] = 0;
        }
      }
      piVar16 = (int *)(*(longlong *)(param_1 + 0xa0) + lVar14);
      if (*piVar16 == 0) {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x68) + -0x10 +
                         (longlong)*(int *)(param_1 + 0x60) * 0x10);
        uVar7 = *puVar2;
        lVar5 = *(longlong *)(puVar2 + 1);
        uVar8 = puVar2[3];
        uVar10 = *(undefined8 *)
                  (*(longlong *)(param_1 + 0x78) + -8 + (longlong)*(int *)(param_1 + 0x70) * 8);
        if (piVar16[1] == 0) {
          FUN_18013e760(piVar16,8);
          iVar17 = *piVar16;
        }
        lVar11 = (longlong)iVar17;
        lVar6 = *(longlong *)(piVar16 + 2);
        plVar1 = (longlong *)(lVar6 + lVar11 * 0x30);
        *plVar1 = (ulonglong)uVar7 << 0x20;
        plVar1[1] = lVar5;
        puVar4 = (undefined8 *)(lVar6 + 0x10 + lVar11 * 0x30);
        *puVar4 = CONCAT44(uStack_5c,uVar8);
        puVar4[1] = uVar10;
        puVar15 = (undefined4 *)(lVar6 + 0x20 + lVar11 * 0x30);
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15[2] = 0;
        puVar15[3] = 0;
        *piVar16 = *piVar16 + 1;
      }
      lVar12 = lVar12 + 1;
      lVar14 = lVar14 + 0x20;
    } while (lVar12 < param_2);
  }
  return;
}





// 函数: void FUN_180291f60(int *param_1)
void FUN_180291f60(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (1 < param_1[0x25]) {
    func_0x000180292160(param_1,0);
    iVar4 = *param_1;
    if ((iVar4 != 0) &&
       (iVar5 = iVar4 + -1, *(int *)(*(longlong *)(param_1 + 2) + (longlong)iVar5 * 0x30) == 0)) {
      *param_1 = iVar5;
      iVar4 = iVar5;
    }
    iVar6 = 0;
    iVar7 = 1;
    iVar5 = 0;
    lVar9 = 0x20;
    lVar8 = lVar9;
    if (1 < param_1[0x25]) {
      do {
        piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + lVar8);
        iVar4 = *piVar3;
        if ((iVar4 != 0) &&
           (*(int *)(*(longlong *)(piVar3 + 2) + -0x30 + (longlong)iVar4 * 0x30) == 0)) {
          *piVar3 = iVar4 + -1;
          iVar4 = iVar4 + -1;
        }
        iVar5 = iVar5 + piVar3[4];
        iVar6 = iVar6 + iVar4;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (iVar7 < param_1[0x25]);
      iVar4 = *param_1;
    }
    iVar2 = param_1[1];
    iVar4 = iVar4 + iVar6;
    iVar7 = 8;
    if (iVar2 < iVar4) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      iVar1 = iVar4;
      if (iVar4 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_18013e760(param_1,iVar1);
    }
    *param_1 = iVar4;
    iVar4 = param_1[5];
    iVar2 = param_1[4] + iVar5;
    if (iVar4 < iVar2) {
      if (iVar4 != 0) {
        iVar7 = iVar4 + iVar4 / 2;
      }
      iVar4 = iVar2;
      if (iVar2 < iVar7) {
        iVar4 = iVar7;
      }
      FUN_18011dd10(param_1 + 4,iVar4);
    }
    param_1[4] = iVar2;
    iVar4 = 1;
    *(longlong *)(param_1 + 0x16) =
         *(longlong *)(param_1 + 6) + ((longlong)iVar2 - (longlong)iVar5) * 2;
    if (1 < param_1[0x25]) {
      do {
        piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + lVar9);
        if (*piVar3 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(((longlong)*param_1 - (longlong)iVar6) * 0x30 + *(longlong *)(param_1 + 2),
                 *(undefined8 *)(piVar3 + 2),(longlong)*piVar3 * 0x30);
        }
        if (piVar3[4] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(*(undefined8 *)(param_1 + 0x16),*(undefined8 *)(piVar3 + 6),(longlong)piVar3[4] * 2
                );
        }
        iVar4 = iVar4 + 1;
        lVar9 = lVar9 + 0x20;
      } while (iVar4 < param_1[0x25]);
    }
    FUN_180291950(param_1);
    param_1[0x25] = 1;
  }
  return;
}





// 函数: void FUN_180291f76(undefined8 param_1)
void FUN_180291f76(undefined8 param_1)

{
  int *piVar1;
  int *unaff_RBX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  func_0x000180292160(param_1,0);
  iVar2 = *unaff_RBX;
  if ((iVar2 != 0) &&
     (iVar3 = iVar2 + -1, *(int *)(*(longlong *)(unaff_RBX + 2) + (longlong)iVar3 * 0x30) == 0)) {
    *unaff_RBX = iVar3;
    iVar2 = iVar3;
  }
  iVar4 = 0;
  iVar5 = 1;
  iVar3 = 0;
  lVar8 = 0x20;
  lVar6 = lVar8;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x28) + lVar6);
      iVar2 = *piVar1;
      if ((iVar2 != 0) &&
         (*(int *)(*(longlong *)(piVar1 + 2) + -0x30 + (longlong)iVar2 * 0x30) == 0)) {
        *piVar1 = iVar2 + -1;
        iVar2 = iVar2 + -1;
      }
      iVar3 = iVar3 + piVar1[4];
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar5 < unaff_RBX[0x25]);
    iVar2 = *unaff_RBX;
  }
  iVar5 = 8;
  if (unaff_RBX[1] < iVar2 + iVar4) {
    FUN_18013e760();
  }
  *unaff_RBX = iVar2 + iVar4;
  iVar2 = unaff_RBX[5];
  iVar7 = unaff_RBX[4] + iVar3;
  if (iVar2 < iVar7) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = iVar7;
    if (iVar7 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_18011dd10(unaff_RBX + 4,iVar2);
  }
  unaff_RBX[4] = iVar7;
  iVar2 = 1;
  *(longlong *)(unaff_RBX + 0x16) =
       *(longlong *)(unaff_RBX + 6) + ((longlong)iVar7 - (longlong)iVar3) * 2;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x28) + lVar8);
      if (*piVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(((longlong)*unaff_RBX - (longlong)iVar4) * 0x30 + *(longlong *)(unaff_RBX + 2),
               *(undefined8 *)(piVar1 + 2),(longlong)*piVar1 * 0x30);
      }
      if (piVar1[4] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(unaff_RBX + 0x16),*(undefined8 *)(piVar1 + 6),(longlong)piVar1[4] * 2
              );
      }
      iVar2 = iVar2 + 1;
      lVar8 = lVar8 + 0x20;
    } while (iVar2 < unaff_RBX[0x25]);
  }
  FUN_180291950();
  unaff_RBX[0x25] = 1;
  return;
}





// 函数: void FUN_180291f87(void)
void FUN_180291f87(void)

{
  int *piVar1;
  int *unaff_RBX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  func_0x000180292160();
  iVar2 = *unaff_RBX;
  if ((iVar2 != 0) &&
     (iVar3 = iVar2 + -1, *(int *)(*(longlong *)(unaff_RBX + 2) + (longlong)iVar3 * 0x30) == 0)) {
    *unaff_RBX = iVar3;
    iVar2 = iVar3;
  }
  iVar4 = 0;
  iVar5 = 1;
  iVar3 = 0;
  lVar8 = 0x20;
  lVar6 = lVar8;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x28) + lVar6);
      iVar2 = *piVar1;
      if ((iVar2 != 0) &&
         (*(int *)(*(longlong *)(piVar1 + 2) + -0x30 + (longlong)iVar2 * 0x30) == 0)) {
        *piVar1 = iVar2 + -1;
        iVar2 = iVar2 + -1;
      }
      iVar3 = iVar3 + piVar1[4];
      iVar4 = iVar4 + iVar2;
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while (iVar5 < unaff_RBX[0x25]);
    iVar2 = *unaff_RBX;
  }
  iVar5 = 8;
  if (unaff_RBX[1] < iVar2 + iVar4) {
    FUN_18013e760();
  }
  *unaff_RBX = iVar2 + iVar4;
  iVar2 = unaff_RBX[5];
  iVar7 = unaff_RBX[4] + iVar3;
  if (iVar2 < iVar7) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = iVar7;
    if (iVar7 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_18011dd10(unaff_RBX + 4,iVar2);
  }
  unaff_RBX[4] = iVar7;
  iVar2 = 1;
  *(longlong *)(unaff_RBX + 0x16) =
       *(longlong *)(unaff_RBX + 6) + ((longlong)iVar7 - (longlong)iVar3) * 2;
  if (1 < unaff_RBX[0x25]) {
    do {
      piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x28) + lVar8);
      if (*piVar1 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(((longlong)*unaff_RBX - (longlong)iVar4) * 0x30 + *(longlong *)(unaff_RBX + 2),
               *(undefined8 *)(piVar1 + 2),(longlong)*piVar1 * 0x30);
      }
      if (piVar1[4] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(unaff_RBX + 0x16),*(undefined8 *)(piVar1 + 6),(longlong)piVar1[4] * 2
              );
      }
      iVar2 = iVar2 + 1;
      lVar8 = lVar8 + 0x20;
    } while (iVar2 < unaff_RBX[0x25]);
  }
  FUN_180291950();
  unaff_RBX[0x25] = 1;
  return;
}





// 函数: void FUN_1802920d0(void)
void FUN_1802920d0(void)

{
  longlong unaff_RBX;
  int unaff_EBP;
  int *piVar1;
  longlong unaff_R14;
  
  while( true ) {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0xa0) + unaff_R14);
    if (*piVar1 != 0) {
                    // WARNING: Subroutine does not return
      memcpy();
    }
    if (piVar1[4] != 0) break;
    unaff_EBP = unaff_EBP + 1;
    unaff_R14 = unaff_R14 + 0x20;
    if (*(int *)(unaff_RBX + 0x94) <= unaff_EBP) {
      FUN_180291950();
      *(undefined4 *)(unaff_RBX + 0x94) = 1;
      return;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(*(undefined8 *)(unaff_RBX + 0x58),*(undefined8 *)(piVar1 + 6),(longlong)piVar1[4] * 2);
}





// 函数: void FUN_180292156(void)
void FUN_180292156(void)

{
  return;
}





// 函数: void FUN_1802921e0(int *param_1,int param_2,int param_3)
void FUN_1802921e0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x30 + (longlong)*param_1 * 0x30);
  *piVar1 = *piVar1 + param_2;
  iVar4 = param_1[8];
  FUN_18013e800(param_1 + 8,iVar4 + param_3);
  iVar2 = param_1[4];
  *(longlong *)(param_1 + 0x14) = *(longlong *)(param_1 + 10) + (longlong)iVar4 * 0x14;
  param_2 = iVar2 + param_2;
  iVar4 = param_1[5];
  if (iVar4 < param_2) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = param_2;
    if (param_2 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_18011dd10(param_1 + 4,iVar3);
  }
  param_1[4] = param_2;
  *(longlong *)(param_1 + 0x16) = *(longlong *)(param_1 + 6) + (longlong)iVar2 * 2;
  return;
}





// 函数: void FUN_180292290(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
void FUN_180292290(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  longlong lVar10;
  
  uVar1 = *(undefined4 *)((longlong)param_4 + 4);
  uVar2 = *(undefined4 *)param_3;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  uVar4 = *(undefined4 *)param_4;
  sVar9 = *(short *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)param_5;
  uVar6 = *(undefined4 *)((longlong)param_5 + 4);
  uVar7 = *(undefined4 *)param_2;
  uVar8 = *(undefined4 *)((longlong)param_3 + 4);
  **(short **)(param_1 + 0x58) = sVar9;
  *(short *)(*(longlong *)(param_1 + 0x58) + 2) = sVar9 + 1;
  *(short *)(*(longlong *)(param_1 + 0x58) + 4) = sVar9 + 2;
  *(short *)(*(longlong *)(param_1 + 0x58) + 6) = sVar9;
  *(short *)(*(longlong *)(param_1 + 0x58) + 8) = sVar9 + 2;
  *(short *)(*(longlong *)(param_1 + 0x58) + 10) = sVar9 + 3;
  **(undefined8 **)(param_1 + 0x50) = *param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = *param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10) = param_6;
  lVar10 = *(longlong *)(param_1 + 0x50);
  *(undefined4 *)(lVar10 + 0x14) = uVar2;
  *(undefined4 *)(lVar10 + 0x18) = uVar3;
  lVar10 = *(longlong *)(param_1 + 0x50);
  *(undefined4 *)(lVar10 + 0x1c) = uVar5;
  *(undefined4 *)(lVar10 + 0x20) = uVar1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x24) = param_6;
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x28) = *param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x30) = *param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x38) = param_6;
  lVar10 = *(longlong *)(param_1 + 0x50);
  *(undefined4 *)(lVar10 + 0x3c) = uVar7;
  *(undefined4 *)(lVar10 + 0x40) = uVar8;
  lVar10 = *(longlong *)(param_1 + 0x50);
  *(undefined4 *)(lVar10 + 0x44) = uVar4;
  *(undefined4 *)(lVar10 + 0x48) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x4c) = param_6;
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 0x50;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0xc;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802923e0(longlong param_1,longlong param_2,int param_3,uint param_4,char param_5,
void FUN_1802923e0(longlong param_1,longlong param_2,int param_3,uint param_4,char param_5,
                  float param_6)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_f8 [16];
  uint uStack_e8;
  uint uStack_e4;
  longlong lStack_d8;
  int iStack_d0;
  ulonglong uStack_c0;
  
  uStack_c0 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_e8 = param_4;
  if (1 < param_3) {
    iVar9 = param_3 + -1;
    if (param_5 != '\0') {
      iVar9 = param_3;
    }
    uVar2 = **(undefined4 **)(param_1 + 0x38);
    uVar3 = (*(undefined4 **)(param_1 + 0x38))[1];
    lVar10 = (longlong)iVar9;
    auStack_f8[0] = 1.0 < param_6;
    lStack_d8 = lVar10;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      uStack_e4 = param_4 & 0xffffff;
      iStack_d0 = ((byte)auStack_f8[0] + 3) * param_3;
      iVar7 = 0x12;
      if (!(bool)auStack_f8[0]) {
        iVar7 = 0xc;
      }
      FUN_1802921e0(param_1,iVar7 * iVar9,iStack_d0);
                    // WARNING: Subroutine does not return
      FUN_1808fd200();
    }
    FUN_1802921e0(param_1,iVar9 * 6,iVar9 * 4);
    if (0 < lVar10) {
      iVar9 = 0;
      lVar8 = 0;
      do {
        iVar9 = iVar9 + 1;
        fVar4 = *(float *)(param_2 + lVar8 * 8);
        pfVar1 = (float *)(param_2 + lVar8 * 8);
        lVar8 = lVar8 + 1;
        lVar6 = 0;
        if (iVar9 != param_3) {
          lVar6 = lVar8;
        }
        fVar12 = *(float *)(param_2 + lVar6 * 8) - fVar4;
        fVar13 = *(float *)(param_2 + 4 + lVar6 * 8) - pfVar1[1];
        fVar11 = fVar13 * fVar13 + fVar12 * fVar12;
        if (0.0 < fVar11) {
          fVar11 = 1.0 / SQRT(fVar11);
          fVar12 = fVar12 * fVar11;
          fVar13 = fVar13 * fVar11;
        }
        fVar13 = fVar13 * param_6 * 0.5;
        fVar12 = fVar12 * param_6 * 0.5;
        **(float **)(param_1 + 0x50) = fVar4 + fVar13;
        *(float *)(*(longlong *)(param_1 + 0x50) + 4) = pfVar1[1] - fVar12;
        lVar5 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(lVar5 + 8) = uVar2;
        *(undefined4 *)(lVar5 + 0xc) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x50) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x50) + 0x14) = fVar13 + *(float *)(param_2 + lVar6 * 8);
        *(float *)(*(longlong *)(param_1 + 0x50) + 0x18) =
             *(float *)(param_2 + 4 + lVar6 * 8) - fVar12;
        lVar5 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(lVar5 + 0x1c) = uVar2;
        *(undefined4 *)(lVar5 + 0x20) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x50) + 0x24) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x50) + 0x28) = *(float *)(param_2 + lVar6 * 8) - fVar13;
        *(float *)(*(longlong *)(param_1 + 0x50) + 0x2c) =
             fVar12 + *(float *)(param_2 + 4 + lVar6 * 8);
        lVar6 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(lVar6 + 0x30) = uVar2;
        *(undefined4 *)(lVar6 + 0x34) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x50) + 0x38) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x50) + 0x3c) = *pfVar1 - fVar13;
        *(float *)(*(longlong *)(param_1 + 0x50) + 0x40) = fVar12 + pfVar1[1];
        lVar6 = *(longlong *)(param_1 + 0x50);
        *(undefined4 *)(lVar6 + 0x44) = uVar2;
        *(undefined4 *)(lVar6 + 0x48) = uVar3;
        *(uint *)(*(longlong *)(param_1 + 0x50) + 0x4c) = param_4;
        *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 0x50;
        **(undefined2 **)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x48);
        *(short *)(*(longlong *)(param_1 + 0x58) + 2) = *(short *)(param_1 + 0x48) + 1;
        *(short *)(*(longlong *)(param_1 + 0x58) + 4) = *(short *)(param_1 + 0x48) + 2;
        *(undefined2 *)(*(longlong *)(param_1 + 0x58) + 6) = *(undefined2 *)(param_1 + 0x48);
        *(short *)(*(longlong *)(param_1 + 0x58) + 8) = *(short *)(param_1 + 0x48) + 2;
        *(short *)(*(longlong *)(param_1 + 0x58) + 10) = *(short *)(param_1 + 0x48) + 3;
        *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0xc;
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 4;
      } while (lVar8 < lVar10);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c0 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



