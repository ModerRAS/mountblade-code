#include "TaleWorlds.Native.Split.h"

// 99_part_06_part065.c - 5 个函数

// 函数: void FUN_1803e581b(int param_1,longlong param_2,int param_3,longlong param_4)
void FUN_1803e581b(int param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int *piVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong unaff_RBX;
  undefined8 unaff_RSI;
  int unaff_EDI;
  longlong in_R11;
  int unaff_R14D;
  longlong unaff_R15;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  undefined4 in_stack_00000080;
  
  *(undefined8 *)(in_R11 + -0x28) = unaff_RSI;
  iStack0000000000000038 = param_3;
  if ((((param_4 != 0) && (*(char *)(param_4 + 0x1e50) != (char)unaff_RBX)) && (param_1 == 0x800))
     && (param_3 == 0x800)) {
    param_1 = 0x400;
    iStack0000000000000038 = 0x400;
  }
  iStack0000000000000030 = *(int *)(param_2 + 0x324);
  iStack000000000000003c = (int)unaff_RBX;
  iStack0000000000000034 = param_1;
  uVar6 = FUN_1803e74c0();
  FUN_180284cf0(uVar6,&stack0x00000040);
  uVar12 = unaff_RBX & 0xffffffff;
  uVar14 = *(longlong *)(unaff_R15 + 0xf8) - *(longlong *)(unaff_R15 + 0xf0) >> 4;
  uVar7 = unaff_RBX;
  if (uVar14 != 0) {
    do {
      piVar8 = (int *)(uVar7 * 0x10 + *(longlong *)(unaff_R15 + 0xf0));
      if (((*piVar8 == iStack0000000000000030) && (piVar8[1] == iStack0000000000000034)) &&
         ((piVar8[2] == iStack0000000000000038 && (piVar8[3] == iStack000000000000003c))))
      goto LAB_1803e58e9;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar7 = (longlong)(int)uVar11;
    } while ((ulonglong)(longlong)(int)uVar11 < uVar14);
  }
  FUN_1800863a0(unaff_R15 + 0xf0,&stack0x00000030);
LAB_1803e58e9:
  plVar9 = (longlong *)FUN_1803e74c0();
  lVar2 = plVar9[1];
  lVar3 = *plVar9;
  uVar12 = *(longlong *)(unaff_R15 + 0xf8) - *(longlong *)(unaff_R15 + 0xf0) >> 4;
  uVar7 = unaff_RBX;
  if (uVar12 != 0) {
    do {
      iVar15 = (int)uVar7;
      piVar8 = (int *)(unaff_RBX * 0x10 + *(longlong *)(unaff_R15 + 0xf0));
      if (((*piVar8 == iStack0000000000000030) && (piVar8[1] == iStack0000000000000034)) &&
         ((piVar8[2] == iStack0000000000000038 && (piVar8[3] == iStack000000000000003c))))
      goto LAB_1803e596c;
      unaff_RBX = (ulonglong)(int)(iVar15 + 1U);
      uVar7 = (ulonglong)(iVar15 + 1U);
    } while (unaff_RBX < uVar12);
  }
  iVar15 = -1;
LAB_1803e596c:
  puVar1 = (undefined8 *)(unaff_R15 + 0x30);
  puVar13 = *(undefined8 **)(unaff_R15 + 0x40);
  puVar5 = puVar1;
  while (puVar10 = puVar5, puVar5 = puVar13, puVar5 != (undefined8 *)0x0) {
    if ((*(int *)(puVar5 + 4) < unaff_EDI) ||
       ((*(int *)(puVar5 + 4) <= unaff_EDI && (*(int *)((longlong)puVar5 + 0x24) < unaff_R14D)))) {
      puVar13 = (undefined8 *)*puVar5;
      bVar4 = true;
    }
    else {
      puVar13 = (undefined8 *)puVar5[1];
      bVar4 = false;
    }
    if (bVar4) {
      puVar5 = puVar10;
    }
  }
  if (((puVar10 == puVar1) || (unaff_EDI < *(int *)(puVar10 + 4))) ||
     ((unaff_EDI <= *(int *)(puVar10 + 4) && (unaff_R14D < *(int *)((longlong)puVar10 + 0x24))))) {
    puVar10 = (undefined8 *)FUN_1803e77a0(puVar1,&stack0x00000098);
    puVar10 = (undefined8 *)*puVar10;
  }
  *(int *)((longlong)puVar10 + 0x2c) = (int)(lVar2 - lVar3 >> 4) + -1;
  *(int *)(puVar10 + 5) = iVar15;
  return;
}






// 函数: void FUN_1803e5923(ulonglong param_1)
void FUN_1803e5923(ulonglong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong unaff_RBX;
  ulonglong uVar8;
  undefined4 unaff_EBP;
  int unaff_EDI;
  uint7 uVar10;
  ulonglong uVar9;
  longlong in_R11;
  int unaff_R14D;
  longlong unaff_R15;
  int iStack0000000000000030;
  int iStack0000000000000034;
  int iStack0000000000000038;
  int iStack000000000000003c;
  
  uVar9 = _iStack0000000000000038 & 0xffffffff;
  uVar8 = unaff_RBX;
  do {
    iVar7 = (int)uVar8;
    piVar4 = (int *)(unaff_RBX * 0x10 + in_R11);
    if ((((*piVar4 == iStack0000000000000030) && (piVar4[1] == iStack0000000000000034)) &&
        (piVar4[2] == iStack0000000000000038)) && (piVar4[3] == iStack000000000000003c))
    goto LAB_1803e596c;
    uVar8 = (ulonglong)(iVar7 + 1U);
    unaff_RBX = (ulonglong)(int)(iVar7 + 1U);
  } while (unaff_RBX < param_1);
  iVar7 = -1;
LAB_1803e596c:
  puVar1 = (undefined8 *)(unaff_R15 + 0x30);
  puVar6 = *(undefined8 **)(unaff_R15 + 0x40);
  puVar3 = puVar1;
  while (puVar5 = puVar3, puVar3 = puVar6, puVar3 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar3 + 4);
    uVar10 = (uint7)(uint3)((uint)iVar2 >> 8);
    if ((iVar2 < unaff_EDI) ||
       ((iVar2 <= unaff_EDI && (*(int *)((longlong)puVar3 + 0x24) < unaff_R14D)))) {
      puVar6 = (undefined8 *)*puVar3;
      uVar9 = CONCAT71(uVar10,1);
    }
    else {
      puVar6 = (undefined8 *)puVar3[1];
      uVar9 = (ulonglong)uVar10 << 8;
    }
    if ((char)uVar9 != '\0') {
      puVar3 = puVar5;
    }
  }
  if (((puVar5 == puVar1) || (unaff_EDI < *(int *)(puVar5 + 4))) ||
     ((unaff_EDI <= *(int *)(puVar5 + 4) && (unaff_R14D < *(int *)((longlong)puVar5 + 0x24))))) {
    puVar5 = (undefined8 *)FUN_1803e77a0(puVar1,&stack0x00000098,uVar9,puVar5,&stack0x00000080);
    puVar5 = (undefined8 *)*puVar5;
  }
  *(undefined4 *)((longlong)puVar5 + 0x2c) = unaff_EBP;
  *(int *)(puVar5 + 5) = iVar7;
  return;
}






// 函数: void FUN_1803e5a05(void)
void FUN_1803e5a05(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e5a10(uint *param_1)
void FUN_1803e5a10(uint *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  int iVar29;
  undefined1 auStackX_8 [8];
  char acStackX_10 [8];
  undefined1 auStackX_18 [8];
  char acStackX_20 [8];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int *piStack_88;
  undefined8 *puStack_80;
  int *piStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  
  uStack_68 = 0xfffffffffffffffe;
  lVar10 = *(longlong *)(param_1 + 100);
  uVar27 = *(undefined8 *)(lVar10 + 0x14);
  iStack_e4 = 0;
  if (0 < (int)uVar27) {
    uStack_c0._4_4_ = (int)((ulonglong)uVar27 >> 0x20);
    iVar7 = uStack_c0._4_4_;
    uStack_c0 = uVar27;
    uStack_b0 = uVar27;
    do {
      iStack_e8 = 0;
      iVar29 = iStack_e4;
      if (0 < iVar7) {
        iStack_e0 = iStack_e4 * 1000;
        do {
          lVar4 = *(longlong *)(lVar10 + 0x40);
          puVar16 = (undefined8 *)
                    (lVar4 + ((ulonglong)(longlong)(iStack_e0 + iStack_e8) %
                             (ulonglong)*(uint *)(lVar10 + 0x48)) * 8);
          for (piVar8 = (int *)*puVar16; piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
            if ((iVar29 == *piVar8) && (iStack_e8 == piVar8[1])) {
              piStack_88 = piVar8;
              puStack_80 = puVar16;
              ppiVar9 = &piStack_88;
              lVar21 = *(longlong *)(lVar10 + 0x48);
              goto LAB_1803e5adb;
            }
          }
          lVar21 = *(longlong *)(lVar10 + 0x48);
          puStack_70 = (undefined8 *)(lVar4 + lVar21 * 8);
          piStack_78 = (int *)*puStack_70;
          ppiVar9 = &piStack_78;
LAB_1803e5adb:
          iVar7 = iStack_e8;
          if (((*ppiVar9 != *(int **)(lVar4 + lVar21 * 8)) &&
              (lVar4 = *(longlong *)(*ppiVar9 + 2), lVar4 != 0)) &&
             (iVar26 = 1, 1 < *(int *)(lVar10 + 0x78))) {
            uStack_98 = 0;
            do {
              uStack_90 = *(longlong *)(lVar4 + 0x710 + (longlong)iVar26 * 8);
              if (uStack_90 != 0) {
                uVar1 = *(ushort *)(uStack_90 + 0x5c);
                uVar2 = *(ushort *)(uStack_90 + 0x5e);
                uStack_f8 = *(uint *)(uStack_90 + 0x54);
                uStack_f4 = (uint)uVar1;
                uStack_f0 = (uint)uVar2;
                uStack_ec = 0;
                uVar18 = (uint)uVar1;
                uVar23 = (uint)uVar1;
                uVar25 = (uint)uVar2;
                puVar15 = *(uint **)(param_1 + 4);
                puVar24 = param_1;
                while (puVar14 = puVar24, puVar24 = puVar15, puVar24 != (uint *)0x0) {
                  uVar3 = puVar24[8];
                  if ((((uVar3 < uStack_f8) ||
                       ((uVar3 <= uStack_f8 && ((int)puVar24[9] < (int)uVar23)))) ||
                      ((uVar3 <= uStack_f8 &&
                       (((uVar3 < uStack_f8 || ((int)puVar24[9] <= (int)uVar23)) &&
                        ((int)puVar24[10] < (int)uVar25)))))) ||
                     (((uVar3 <= uStack_f8 && ((int)puVar24[9] <= (int)uVar18)) &&
                      ((((int)puVar24[9] < (int)uVar18 || ((int)puVar24[10] <= (int)uVar25)) &&
                       ((int)puVar24[0xb] < 0)))))) {
                    bVar5 = true;
                    puVar15 = *(uint **)puVar24;
                  }
                  else {
                    bVar5 = false;
                    puVar15 = *(uint **)(puVar24 + 2);
                  }
                  if (bVar5) {
                    puVar24 = puVar14;
                  }
                }
                if ((((puVar14 == param_1) || (uVar3 = puVar14[8], uStack_f8 < uVar3)) ||
                    ((uStack_f8 <= uVar3 && ((int)uVar18 < (int)puVar14[9])))) ||
                   (((uStack_f8 <= uVar3 &&
                     (((uStack_f8 < uVar3 || ((int)uVar23 <= (int)puVar14[9])) &&
                      ((int)(uint)uVar2 < (int)puVar14[10])))) ||
                    ((((puVar15 = puStack_d8, uStack_f8 <= uVar3 && ((int)uVar23 <= (int)puVar14[9])
                       ) && (((int)uVar23 < (int)puVar14[9] || ((int)uVar25 <= (int)puVar14[10]))))
                     && (0 < (int)puVar14[0xb])))))) {
                  lVar10 = FUN_1803e7da0(param_1,puVar14,auStackX_8,&uStack_f8);
                  if (lVar10 == 0) {
                    puVar14 = (uint *)FUN_1803e8310(param_1,acStackX_10,&uStack_f8);
                    puVar15 = puVar14;
                    if (acStackX_10[0] != '\0') {
                      if (((((puVar14 == param_1) || (uVar18 = puVar14[8], uStack_f8 < uVar18)) ||
                           ((uStack_f8 <= uVar18 && ((int)uStack_f4 < (int)puVar14[9])))) ||
                          ((uStack_f8 <= uVar18 &&
                           (((uStack_f8 < uVar18 || ((int)uStack_f4 <= (int)puVar14[9])) &&
                            ((int)uStack_f0 < (int)puVar14[10])))))) ||
                         ((((uStack_f8 <= uVar18 && ((int)uStack_f4 <= (int)puVar14[9])) &&
                           (((int)uStack_f4 < (int)puVar14[9] ||
                            ((int)uStack_f0 <= (int)puVar14[10])))) &&
                          ((int)uStack_ec < (int)puVar14[0xb])))) {
                        uVar27 = 0;
                      }
                      else {
                        uVar27 = 1;
                      }
                      lVar10 = FUN_18062b420(_DAT_180c8ed18,0x50,(char)param_1[10]);
                      puStack_d8 = (uint *)(lVar10 + 0x20);
                      *puStack_d8 = uStack_f8;
                      *(uint *)(lVar10 + 0x24) = uStack_f4;
                      *(uint *)(lVar10 + 0x28) = uStack_f0;
                      *(uint *)(lVar10 + 0x2c) = uStack_ec;
                      puStack_60 = (undefined8 *)(lVar10 + 0x30);
                      *puStack_60 = 0;
                      *(undefined8 *)(lVar10 + 0x38) = 0;
                      *(undefined8 *)(lVar10 + 0x40) = 0;
                      *(undefined4 *)(lVar10 + 0x48) = 3;
                    // WARNING: Subroutine does not return
                      FUN_18066bdc0(lVar10,puVar14,param_1,uVar27);
                    }
                  }
                  else {
                    FUN_1803e7c80(param_1,&puStack_d8,lVar10,auStackX_8[0],&uStack_f8);
                    puVar14 = puStack_d8;
                    puVar15 = puStack_d8;
                  }
                }
                puStack_d8 = puVar15;
                puVar16 = *(undefined8 **)(puVar14 + 0xe);
                if (puVar16 < *(undefined8 **)(puVar14 + 0x10)) {
                  *(undefined8 **)(puVar14 + 0xe) = puVar16 + 2;
                  *(undefined4 *)puVar16 = (undefined4)uStack_98;
                  *(undefined4 *)((longlong)puVar16 + 4) = uStack_98._4_4_;
                  *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_90._4_4_;
                }
                else {
                  puVar12 = *(undefined8 **)(puVar14 + 0xc);
                  lVar10 = (longlong)puVar16 - (longlong)puVar12 >> 4;
                  if (lVar10 == 0) {
                    lVar10 = 1;
LAB_1803e5d54:
                    puVar11 = (undefined8 *)
                              FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,(char)puVar14[0x12]);
                    puVar16 = *(undefined8 **)(puVar14 + 0xe);
                    puVar12 = *(undefined8 **)(puVar14 + 0xc);
                    puVar28 = puVar11;
                  }
                  else {
                    lVar10 = lVar10 * 2;
                    if (lVar10 != 0) goto LAB_1803e5d54;
                    puVar11 = (undefined8 *)0x0;
                    puVar28 = puVar11;
                  }
                  for (; puVar12 != puVar16; puVar12 = puVar12 + 2) {
                    uVar27 = puVar12[1];
                    *puVar11 = *puVar12;
                    puVar11[1] = uVar27;
                    puVar11 = puVar11 + 2;
                  }
                  *(undefined4 *)puVar11 = (undefined4)uStack_98;
                  *(undefined4 *)((longlong)puVar11 + 4) = uStack_98._4_4_;
                  *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_90;
                  *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_90._4_4_;
                  if (*(longlong *)(puVar14 + 0xc) != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  *(undefined8 **)(puVar14 + 0xc) = puVar28;
                  *(undefined8 **)(puVar14 + 0xe) = puVar11 + 2;
                  *(undefined8 **)(puVar14 + 0x10) = puVar28 + lVar10 * 2;
                  iVar29 = iStack_e4;
                }
                uVar19 = 0;
                puVar15 = *(uint **)(param_1 + 0x3e);
                puVar24 = *(uint **)(param_1 + 0x3c);
                uVar22 = (longlong)puVar15 - (longlong)puVar24 >> 4;
                if (uVar22 != 0) {
                  uVar13 = 0;
                  do {
                    puVar15 = puVar24 + uVar13 * 4;
                    if (((*puVar15 == uStack_f8) && (puVar15[1] == uStack_f4)) &&
                       ((puVar15[2] == uStack_f0 && (puVar15[3] == uStack_ec)))) goto LAB_1803e5eff;
                    uVar18 = (int)uVar19 + 1;
                    uVar19 = (ulonglong)uVar18;
                    uVar13 = (ulonglong)(int)uVar18;
                  } while (uVar13 < uVar22);
                  puVar15 = *(uint **)(param_1 + 0x3e);
                }
                if (puVar15 < *(uint **)(param_1 + 0x40)) {
                  *(uint **)(param_1 + 0x3e) = puVar15 + 4;
                  *puVar15 = uStack_f8;
                  puVar15[1] = uStack_f4;
                  puVar15[2] = uStack_f0;
                  puVar15[3] = uStack_ec;
                }
                else {
                  if (uVar22 == 0) {
                    lVar10 = 1;
LAB_1803e5e66:
                    puVar14 = (uint *)FUN_18062b420(_DAT_180c8ed18,lVar10 << 4,(char)param_1[0x42]);
                    puVar15 = *(uint **)(param_1 + 0x3e);
                    puVar24 = *(uint **)(param_1 + 0x3c);
                  }
                  else {
                    lVar10 = uVar22 * 2;
                    if (lVar10 != 0) goto LAB_1803e5e66;
                    puVar14 = (uint *)0x0;
                  }
                  if (puVar24 != puVar15) {
                    // WARNING: Subroutine does not return
                    memmove(puVar14,puVar24,(longlong)puVar15 - (longlong)puVar24);
                  }
                  *puVar14 = uStack_f8;
                  puVar14[1] = uStack_f4;
                  puVar14[2] = uStack_f0;
                  puVar14[3] = uStack_ec;
                  if (*(longlong *)(param_1 + 0x3c) != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  *(uint **)(param_1 + 0x3c) = puVar14;
                  *(uint **)(param_1 + 0x3e) = puVar14 + 4;
                  *(uint **)(param_1 + 0x40) = puVar14 + lVar10 * 4;
                  uVar19 = 0;
                }
LAB_1803e5eff:
                puVar15 = *(uint **)(param_1 + 4);
                puVar24 = param_1;
                while (puVar14 = puVar24, puVar24 = puVar15, puVar24 != (uint *)0x0) {
                  uVar18 = puVar24[8];
                  uVar19 = (ulonglong)uVar18;
                  if ((uVar18 < uStack_f8) ||
                     ((uVar18 <= uStack_f8 && ((int)puVar24[9] < (int)uStack_f4)))) {
LAB_1803e5f53:
                    uVar19 = CONCAT71((int7)(uVar19 >> 8),1);
                    puVar15 = *(uint **)puVar24;
                  }
                  else {
                    if (uVar18 <= uStack_f8) {
                      if (((int)puVar24[9] <= (int)uStack_f4) && ((int)puVar24[10] < (int)uStack_f0)
                         ) goto LAB_1803e5f53;
                      if (uVar18 <= uStack_f8) {
                        uVar18 = puVar24[9];
                        uVar19 = (ulonglong)uVar18;
                        if (((int)uVar18 <= (int)uStack_f4) &&
                           ((((int)uVar18 < (int)uStack_f4 || ((int)puVar24[10] <= (int)uStack_f0))
                            && ((int)puVar24[0xb] < (int)uStack_ec)))) goto LAB_1803e5f53;
                      }
                    }
                    uVar19 = uVar19 & 0xffffffffffffff00;
                    puVar15 = *(uint **)(puVar24 + 2);
                  }
                  if ((char)uVar19 != '\0') {
                    puVar24 = puVar14;
                  }
                }
                if ((puVar14 == param_1) ||
                   (cVar6 = func_0x0001803e7a30(uVar19,&uStack_f8,puVar14 + 8), puVar15 = puStack_d0
                   , cVar6 != '\0')) {
                  lVar10 = FUN_1803e7da0(param_1,puVar14,auStackX_18,&uStack_f8);
                  if (lVar10 == 0) {
                    puVar14 = (uint *)FUN_1803e8310(param_1,acStackX_20,&uStack_f8);
                    puVar15 = puVar14;
                    if (acStackX_20[0] != '\0') {
                      FUN_1803e7c80(param_1,&puStack_b8,puVar14,0,&uStack_f8);
                      puVar14 = puStack_b8;
                      puVar15 = puStack_b8;
                    }
                  }
                  else {
                    FUN_1803e7c80(param_1,&puStack_d0,lVar10,auStackX_18[0],&uStack_f8);
                    puVar14 = puStack_d0;
                    puVar15 = puStack_d0;
                  }
                }
                puStack_d0 = puVar15;
                lVar10 = *(longlong *)(puVar14 + 0xe);
                lVar21 = *(longlong *)(puVar14 + 0xc);
                uVar18 = 0;
                uVar19 = *(longlong *)(param_1 + 0x3e) - *(longlong *)(param_1 + 0x3c) >> 4;
                if (uVar19 != 0) {
                  uVar22 = 0;
                  do {
                    puVar15 = (uint *)(uVar22 * 0x10 + *(longlong *)(param_1 + 0x3c));
                    if (((*puVar15 == uStack_f8) && (puVar15[1] == uStack_f4)) &&
                       ((puVar15[2] == uStack_f0 && (puVar15[3] == uStack_ec)))) goto LAB_1803e606c;
                    uVar18 = uVar18 + 1;
                    uVar22 = (ulonglong)(int)uVar18;
                  } while (uVar22 < uVar19);
                }
                uVar18 = 0xffffffff;
LAB_1803e606c:
                iStack_c4 = iStack_e8;
                uStack_a4 = CONCAT44(iStack_e8,iVar29);
                puVar15 = param_1 + 0x18;
                puVar14 = puVar15;
                puVar24 = *(uint **)(param_1 + 0x1c);
                while (puVar17 = puVar14, puVar24 != (uint *)0x0) {
                  if (((int)puVar24[8] < iVar26) ||
                     (((int)puVar24[8] <= iVar26 &&
                      (((int)puVar24[9] < iVar29 ||
                       (((int)puVar24[9] <= iVar29 && ((int)puVar24[10] < iStack_e8)))))))) {
                    bVar5 = true;
                    puVar20 = *(uint **)puVar24;
                  }
                  else {
                    bVar5 = false;
                    puVar20 = *(uint **)(puVar24 + 2);
                  }
                  puVar14 = puVar24;
                  puVar24 = puVar20;
                  if (bVar5) {
                    puVar14 = puVar17;
                  }
                }
                iStack_c8 = iVar29;
                iStack_a8 = iVar26;
                if (((puVar17 == puVar15) || (iVar26 < (int)puVar17[8])) ||
                   ((iVar26 <= (int)puVar17[8] &&
                    ((iVar29 < (int)puVar17[9] ||
                     ((iVar29 <= (int)puVar17[9] && (iStack_e8 < (int)puVar17[10])))))))) {
                  puVar16 = (undefined8 *)FUN_1803e7940(puVar15);
                  puVar17 = (uint *)*puVar16;
                }
                puVar17[0xb] = uVar18;
                puVar17[0xc] = (int)(lVar10 - lVar21 >> 4) - 1;
                iVar7 = iStack_e8;
              }
              iVar26 = iVar26 + 1;
              lVar10 = *(longlong *)(param_1 + 100);
            } while (iVar26 < *(int *)(lVar10 + 0x78));
          }
          iStack_e8 = iVar7 + 1;
          uVar27 = uStack_b0;
          iVar7 = uStack_c0._4_4_;
        } while (iStack_e8 < uStack_c0._4_4_);
      }
      iStack_e4 = iVar29 + 1;
    } while (iStack_e4 < (int)uVar27);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001803e634f)
// WARNING: Removing unreachable block (ram,0x0001803e6515)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803e6170(longlong param_1,longlong param_2)
void FUN_1803e6170(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  longlong lStackX_8;
  undefined4 uVar14;
  undefined *puStack_90;
  undefined *puStack_88;
  int iStack_80;
  ulonglong uStack_78;
  undefined *puStack_70;
  longlong lStack_68;
  int iStack_60;
  ulonglong uStack_58;
  undefined *puStack_50;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  ulonglong uStack_38;
  longlong lVar9;
  
  if (*(char *)(param_1 + 0x1e8) == '\0') {
    FUN_180628040(param_2,&UNK_180a253d0,0x5d);
    FUN_180628040(param_2,&UNK_180a25428,0x5e);
    uVar10 = 0x5f;
    puVar5 = &UNK_180a25458;
  }
  else {
    FUN_180628040(param_2,&UNK_180a25310,0);
    FUN_180628040(param_2,&UNK_180a25350,1);
    uVar10 = 2;
    puVar5 = &UNK_180a25390;
  }
  FUN_180628040(param_2,puVar5,uVar10);
  iVar13 = 0;
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf8) - lVar3 >> 4 != 0) {
    lStackX_8 = 0;
    do {
      iVar12 = 0x10;
      puVar5 = &UNK_180a3c3e0;
      lVar3 = func_0x000180220c90(*(undefined4 *)(lVar3 + lStackX_8));
      uStack_38 = 0;
      puStack_48 = (undefined1 *)0x0;
      uStack_40 = 0;
      puStack_50 = puVar5;
      if (lVar3 != 0) {
        lVar8 = -1;
        do {
          lVar9 = lVar8;
          lVar8 = lVar9 + 1;
        } while (*(char *)(lVar3 + lVar8) != '\0');
        if ((int)lVar8 != 0) {
          iVar7 = (int)lVar9 + 2;
          iVar13 = iVar7;
          if (iVar7 < 0x10) {
            iVar13 = iVar12;
          }
          puVar4 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar13,0x13);
          *puVar4 = 0;
          puStack_48 = puVar4;
          uVar2 = FUN_18064e990(puVar4);
          uStack_38 = CONCAT44(uStack_38._4_4_,uVar2);
                    // WARNING: Subroutine does not return
          memcpy(puVar4,lVar3,iVar7);
        }
      }
      uStack_40 = 0;
      lVar3 = *(longlong *)(param_1 + 0xf0);
      uVar2 = *(undefined4 *)(lStackX_8 + 8 + lVar3);
      uVar14 = *(undefined4 *)(lStackX_8 + 0xc + lVar3);
      puStack_90 = &UNK_180a3c3e0;
      uStack_78 = 0;
      puStack_88 = (undefined *)0x0;
      iStack_80 = 0;
      puVar5 = &DAT_18098bc73;
      FUN_180628040(&puStack_90,&UNK_180a25488,iVar13,*(undefined4 *)(lStackX_8 + 4 + lVar3),uVar2,
                    &DAT_18098bc73,uVar14);
      puStack_70 = &UNK_180a3c3e0;
      uStack_58 = 0;
      lStack_68 = 0;
      iStack_60 = 0;
      if (*(char *)(param_1 + 0x1e8) == '\0') {
        iVar12 = iVar13 + 0x60;
        puVar6 = &UNK_180a25400;
      }
      else {
        iVar12 = iVar13 + 3;
        puVar6 = &UNK_180a254a8;
      }
      puVar11 = &DAT_18098bc73;
      if (puStack_88 != (undefined *)0x0) {
        puVar11 = puStack_88;
      }
      FUN_180628040(&puStack_70,puVar6,puVar11,iVar12,uVar2,puVar5,uVar14);
      if (0 < iStack_60) {
        FUN_1806277c0(param_2,*(int *)(param_2 + 0x10) + iStack_60);
                    // WARNING: Subroutine does not return
        memcpy((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8),lStack_68,
               (longlong)(iStack_60 + 1));
      }
      puVar1 = *(undefined8 **)(param_1 + 0x118);
      if (puVar1 < *(undefined8 **)(param_1 + 0x120)) {
        *(undefined8 **)(param_1 + 0x118) = puVar1 + 4;
        *puVar1 = &UNK_18098bcb0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *puVar1 = &UNK_180a3c3e0;
        puVar1[3] = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        FUN_1806277c0(puVar1,iStack_80);
        if (iStack_80 != 0) {
                    // WARNING: Subroutine does not return
          memcpy(puVar1[1],puStack_88,iStack_80 + 1);
        }
        if (puStack_88 != (undefined *)0x0) {
          *(undefined4 *)(puVar1 + 2) = 0;
          if ((undefined1 *)puVar1[1] != (undefined1 *)0x0) {
            *(undefined1 *)puVar1[1] = 0;
          }
          *(undefined4 *)((longlong)puVar1 + 0x1c) = 0;
        }
      }
      else {
        FUN_180059820(param_1 + 0x110,&puStack_90);
      }
      puStack_70 = &UNK_180a3c3e0;
      if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_68 = 0;
      uStack_58 = uStack_58 & 0xffffffff00000000;
      puStack_70 = &UNK_18098bcb0;
      puStack_90 = &UNK_180a3c3e0;
      if (puStack_88 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puStack_88 = (undefined *)0x0;
      uStack_78 = uStack_78 & 0xffffffff00000000;
      puStack_90 = &UNK_18098bcb0;
      puStack_48 = (undefined1 *)0x0;
      uStack_38 = uStack_38 & 0xffffffff00000000;
      puStack_50 = &UNK_18098bcb0;
      iVar13 = iVar13 + 1;
      lStackX_8 = lStackX_8 + 0x10;
      lVar3 = *(longlong *)(param_1 + 0xf0);
    } while ((ulonglong)(longlong)iVar13 < (ulonglong)(*(longlong *)(param_1 + 0xf8) - lVar3 >> 4));
  }
  return;
}






