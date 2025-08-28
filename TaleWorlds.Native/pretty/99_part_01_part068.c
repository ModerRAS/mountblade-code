#include "TaleWorlds.Native.Split.h"

// 99_part_01_part068.c - 15 个函数

// 函数: void FUN_1800e545a(void)
void FUN_1800e545a(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *unaff_RDI;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  int in_R10D;
  int unaff_R14D;
  uint *puVar20;
  bool bVar21;
  longlong lStack0000000000000030;
  
  iVar18 = 0;
  uVar17 = 0;
  uVar19 = 0x7fffffff;
  if (0 < in_R10D) {
    do {
      uVar16 = (uint)uVar17;
      lVar14 = (ulonglong)(uVar16 & 0x7ff) * 0x18;
      lStack0000000000000030 =
           *(longlong *)(*(longlong *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2) + 0x10 + lVar14);
      puVar2 = (undefined8 *)(*(longlong *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2) + lVar14);
      uVar5 = puVar2[1];
      uVar9 = (uint)uVar19;
      if (iVar18 == 0) {
        uVar8 = uVar16;
        iVar1 = unaff_R14D;
        if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
          uVar8 = uVar9;
          iVar1 = iVar18;
        }
        iVar18 = iVar1;
        uVar19 = (ulonglong)uVar8;
      }
      else if ((*(uint *)(lStack0000000000000030 + 0x2e0) & 0x100) == 0) {
        if ((int)uVar9 < (int)uVar16) {
          uVar15 = uVar19 >> 0xb;
          uVar12 = (ulonglong)(uVar9 & 0x7ff);
          uVar19 = (ulonglong)(uVar9 + 1);
          puVar3 = (undefined8 *)(*(longlong *)(unaff_RDI + uVar15 * 2 + 2) + uVar12 * 0x18);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          uVar4 = *(undefined8 *)(*(longlong *)(unaff_RDI + uVar15 * 2 + 2) + 0x10 + uVar12 * 0x18);
          lVar10 = *(longlong *)(unaff_RDI + uVar15 * 2 + 2);
          puVar3 = (undefined8 *)(lVar10 + uVar12 * 0x18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          *(longlong *)(lVar10 + 0x10 + uVar12 * 0x18) = lStack0000000000000030;
          lVar10 = *(longlong *)(unaff_RDI + (uVar17 >> 0xb) * 2 + 2);
          puVar2 = (undefined8 *)(lVar10 + lVar14);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          *(undefined8 *)(lVar10 + 0x10 + lVar14) = uVar4;
        }
        else {
          iVar18 = 0;
        }
      }
      uVar17 = (ulonglong)(uVar16 + 1);
    } while ((int)(uVar16 + 1) < in_R10D);
    uVar16 = (uint)uVar19;
    if (uVar16 != 0x7fffffff) {
      if (*unaff_RDI < uVar16) {
        iVar18 = uVar16 - *unaff_RDI;
        if (iVar18 != 0) {
          LOCK();
          uVar16 = *unaff_RDI;
          *unaff_RDI = *unaff_RDI + iVar18;
          UNLOCK();
          uVar9 = uVar16 >> 0xb;
          uVar15 = (ulonglong)uVar9;
          uVar19 = (ulonglong)(iVar18 + -1 + uVar16 >> 0xb);
          if (uVar15 <= uVar19) {
            pcVar13 = (char *)((longlong)unaff_RDI + uVar15 + 0x108);
            lVar14 = (uVar19 - uVar15) + 1;
            puVar20 = unaff_RDI + (ulonglong)uVar9 * 2 + 2;
            do {
              iVar18 = (int)uVar15;
              if (*(longlong *)puVar20 == 0) {
                lVar10 = FUN_18062b420(_DAT_180c8ed18,0xc000,CONCAT71((int7)(uVar17 >> 8),0x25));
                uVar17 = (ulonglong)iVar18;
                LOCK();
                bVar21 = *(longlong *)(unaff_RDI + uVar17 * 2 + 2) == 0;
                if (bVar21) {
                  *(longlong *)(unaff_RDI + uVar17 * 2 + 2) = lVar10;
                }
                UNLOCK();
                if (bVar21) {
                  iVar11 = iVar18 * 0x800;
                  iVar1 = iVar11 + 0x800;
                  for (; iVar11 < iVar1; iVar11 = iVar11 + 1) {
                  }
                  LOCK();
                  *(undefined1 *)(uVar17 + 0x108 + (longlong)unaff_RDI) = 0;
                  UNLOCK();
                }
                else {
                  if (lVar10 != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  do {
                  } while (*pcVar13 != '\0');
                }
              }
              else {
                do {
                } while (*pcVar13 != '\0');
              }
              uVar15 = (ulonglong)(iVar18 + 1);
              puVar20 = puVar20 + 2;
              pcVar13 = pcVar13 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
        }
      }
      else if (uVar16 < *unaff_RDI) {
        LOCK();
        *unaff_RDI = uVar16;
        UNLOCK();
      }
    }
  }
  return;
}






// 函数: void FUN_1800e563b(void)
void FUN_1800e563b(void)

{
  return;
}






// 函数: void FUN_1800e5650(void)
void FUN_1800e5650(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e6820(longlong param_1,longlong param_2)
void FUN_1800e6820(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_338 [32];
  undefined4 uStack_318;
  undefined1 auStack_308 [8];
  longlong *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  longlong lStack_2e8;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  longlong lStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ulonglong auStack_1d8 [2];
  undefined8 uStack_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined1 uStack_194;
  undefined8 uStack_193;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [72];
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_1f8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_338;
  if ((*(int *)(_DAT_180c86920 + 0xbd0) == 1) && (*(int *)(_DAT_180c86920 + 0x540) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uStack_2f8 = *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83b8);
  *(undefined1 *)(param_1 + 0x1350) = 1;
  lStack_2e8 = param_1;
  FUN_1802c22a0(auStack_308,&UNK_180a046e0);
  ppuStack_2e0 = &puStack_158;
  puStack_158 = &UNK_1809fcc58;
  puStack_150 = auStack_140;
  uStack_148 = 0;
  auStack_140[0] = 0;
  FUN_180049bf0(&puStack_158,&UNK_180a046e0);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_158);
  uVar1 = *(undefined8 *)(param_2 + 0x99c0);
  puStack_1f0 = &UNK_1809fdc18;
  uStack_1e8 = auStack_1d8;
  auStack_1d8[0] = auStack_1d8[0] & 0xffffffffffffff00;
  uStack_1e0 = 0xb;
  strcpy_s(auStack_1d8,0x10,&UNK_180a046d0);
  lVar5 = FUN_1802c90a0(uVar1,&puStack_1f0);
  puStack_1f0 = &UNK_18098bcb0;
  ppuStack_2e0 = *(undefined ***)(lVar5 + 0x428);
  lVar5 = *(longlong *)(param_2 + 0x97c0);
  lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar2 + 0x85f0) != 0) || (*(int *)(lVar2 + 0x8914) != -1)) ||
     (*(int *)(lVar2 + 0x8b14) != 0x10)) {
    uStack_2f0 = 0;
    (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
              (*(longlong **)(lVar2 + 0x8400),0x37,1,&uStack_2f0);
    *(undefined8 *)(lVar2 + 0x85f0) = 0;
    *(undefined4 *)(lVar2 + 0x8914) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x8b14) = 0x10;
    *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
  }
  uVar9 = (uint)*(ushort *)(lVar5 + 0x32c);
  fVar11 = (float)uVar9;
  uVar10 = (uint)*(ushort *)(lVar5 + 0x32e);
  fVar12 = (float)uVar10;
  if (bVar3) {
    fVar11 = fVar11 * 0.5;
    fVar12 = fVar12 * 0.5;
  }
  lVar5 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  puStack_1f0 = (undefined *)0x0;
  uStack_1e8 = (ulonglong *)CONCAT44(fVar12,fVar11);
  uStack_1e0 = 0;
  uStack_1dc = 0x3f800000;
  plVar6 = *(longlong **)(lVar5 + 0x8400);
  (**(code **)(*plVar6 + 0x160))(plVar6,1,&puStack_1f0);
  uStack_1c8 = 0;
  plVar6 = *(longlong **)(lVar5 + 0x8400);
  uStack_1c0 = uVar9;
  uStack_1bc = uVar10;
  (**(code **)(*plVar6 + 0x168))(plVar6,1,&uStack_1c8);
  lStack_200 = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x96a8);
  uStack_2d8 = uVar1;
  if (bVar3) {
    uStack_1b0 = 1;
    uStack_1ac = 1;
    uStack_1a4 = 0;
    uStack_19c = 0x3f80000000000000;
    uStack_193 = 1;
    uStack_194 = 0;
    uStack_188 = 0xffffffff;
    uStack_184 = 0;
    uStack_1b8 = (undefined4)(longlong)(*(float *)(param_2 + 0x11c20) * 0.5);
    uStack_1b4 = (undefined4)(longlong)(*(float *)(param_2 + 0x11c24) * 0.5);
    uStack_1a8 = 0x1e;
    puStack_f8 = &UNK_1809fcc28;
    puStack_f0 = auStack_e0;
    auStack_e0[0] = 0;
    uStack_e8 = 0xf;
    strcpy_s(auStack_e0,0x80,&UNK_180a04720);
    plVar6 = (longlong *)FUN_1800b1230(_DAT_180c86930,&plStack_300,&puStack_f8,&uStack_1b8);
    lVar2 = *plVar6;
    *plVar6 = 0;
    uStack_2f0 = 0;
    lStack_200 = lVar2;
    if (plStack_300 != (longlong *)0x0) {
      (**(code **)(*plStack_300 + 0x38))();
    }
    _Thrd_id();
    puStack_f8 = &UNK_18098bcb0;
    uVar8 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar5 = *(longlong *)(lVar2 + 0x1d8);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
  }
  else {
    uVar8 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x97c0) + 0x1d8);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(param_2 + 0x97c0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
  }
  FUN_18029ad30(uVar8,0,lVar5);
  lVar5 = _DAT_180c86938;
  *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(undefined8 *)(lVar5 + 0x1cd8),1);
  uStack_318 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0x10,uVar1);
  uStack_318 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,*(undefined8 *)(param_2 + 0x96e8));
  uStack_318 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,*(undefined8 *)(param_2 + 0x96f0));
  puStack_1f0 = &UNK_180a3c3e0;
  auStack_1d8[0] = 0;
  uStack_1e8 = (ulonglong *)0x0;
  uStack_1e0 = 0;
  puVar7 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1b,0x13);
  *(undefined1 *)puVar7 = 0;
  uStack_1e8 = (ulonglong *)puVar7;
  uVar4 = FUN_18064e990(puVar7);
  auStack_1d8[0] = CONCAT44(auStack_1d8[0]._4_4_,uVar4);
  *puVar7 = 0x66666964;
  puVar7[1] = 0x5f657375;
  puVar7[2] = 0x69626d61;
  puVar7[3] = 0x5f746e65;
  *(undefined8 *)(puVar7 + 4) = 0x74616c75636c6163;
  *(undefined2 *)(puVar7 + 6) = 0x726f;
  *(undefined1 *)((longlong)puVar7 + 0x1a) = 0;
  uStack_1e0 = 0x1a;
  FUN_1800b31f0(_DAT_180c86930,&plStack_300,&puStack_1f0,1);
  if (plStack_300 != (longlong *)0x0) {
    (**(code **)(*plStack_300 + 0x38))();
  }
  puStack_1f0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}






// 函数: void FUN_1800e79f0(longlong param_1)
void FUN_1800e79f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xdc8);
  *(undefined8 *)(param_1 + 0xdc8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xdd0);
  *(undefined8 *)(param_1 + 0xdd0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xdd8);
  *(undefined8 *)(param_1 + 0xdd8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xde0);
  *(undefined8 *)(param_1 + 0xde0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xde8);
  *(undefined8 *)(param_1 + 0xde8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xdf0);
  *(undefined8 *)(param_1 + 0xdf0) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xdf8);
  *(undefined8 *)(param_1 + 0xdf8) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xe00);
  *(undefined8 *)(param_1 + 0xe00) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xe08);
  *(undefined8 *)(param_1 + 0xe08) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0xe10);
  *(undefined8 *)(param_1 + 0xe10) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}






// 函数: void FUN_1800e7b80(longlong param_1)
void FUN_1800e7b80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x40);
  return;
}






// 函数: void FUN_1800e7be0(longlong param_1)
void FUN_1800e7be0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x10);
  return;
}






// 函数: void FUN_1800e7c40(longlong param_1)
void FUN_1800e7c40(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 8);
  return;
}






// 函数: void FUN_1800e7ca0(longlong param_1)
void FUN_1800e7ca0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x80);
  return;
}






// 函数: void FUN_1800e7d00(longlong param_1)
void FUN_1800e7d00(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  plVar3 = (longlong *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = (longlong)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(undefined8 *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0x100);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1800e7d60(uint *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  bool bVar9;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar5 = (ulonglong)(uVar1 >> 0xc);
  uVar6 = (ulonglong)(param_2 + -1 + uVar1 >> 0xc);
  if (uVar5 <= uVar6) {
    pcVar3 = (char *)((longlong)param_1 + uVar5 + 0x208);
    lVar7 = (uVar6 - uVar5) + 1;
    puVar8 = param_1 + (ulonglong)(uVar1 >> 0xc) * 2 + 2;
    do {
      iVar4 = (int)uVar5;
      if (*(longlong *)puVar8 == 0) {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,0x130000,0x25);
        LOCK();
        bVar9 = *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) == 0;
        if (bVar9) {
          *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(undefined1 *)((longlong)iVar4 + 0x208 + (longlong)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      puVar8 = puVar8 + 2;
      pcVar3 = pcVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1800e7d93(longlong param_1)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RBP;
  int iVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong *plVar6;
  undefined4 unaff_R15D;
  bool bVar7;
  
  pcVar3 = (char *)(param_1 + 0x208 + unaff_RSI);
  lVar5 = (unaff_RDI - unaff_RSI) + 1;
  plVar6 = (longlong *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar4 = (int)unaff_RSI;
    if (*plVar6 == 0) {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,0x130000,0x25);
      plVar1 = (longlong *)(unaff_RBP + 8 + (longlong)iVar4 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        LOCK();
        *(undefined1 *)((longlong)iVar4 + 0x208 + unaff_RBP) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RSI = (ulonglong)(iVar4 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return unaff_R15D;
}



undefined4 FUN_1800e7e24(void)

{
  undefined4 unaff_R15D;
  
  return unaff_R15D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_1800e7e40(uint *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  bool bVar9;
  
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  uVar5 = (ulonglong)(uVar1 >> 0xc);
  uVar6 = (ulonglong)(param_2 + -1 + uVar1 >> 0xc);
  if (uVar5 <= uVar6) {
    pcVar3 = (char *)((longlong)param_1 + uVar5 + 0x208);
    lVar7 = (uVar6 - uVar5) + 1;
    puVar8 = param_1 + (ulonglong)(uVar1 >> 0xc) * 2 + 2;
    do {
      iVar4 = (int)uVar5;
      if (*(longlong *)puVar8 == 0) {
        lVar2 = FUN_18062b420(_DAT_180c8ed18,0xa0000,0x25);
        LOCK();
        bVar9 = *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) == 0;
        if (bVar9) {
          *(longlong *)(param_1 + (longlong)iVar4 * 2 + 2) = lVar2;
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(undefined1 *)((longlong)iVar4 + 0x208 + (longlong)param_1) = 0;
          UNLOCK();
        }
        else {
          if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          do {
          } while (*pcVar3 != '\0');
        }
      }
      else {
        do {
        } while (*pcVar3 != '\0');
      }
      uVar5 = (ulonglong)(iVar4 + 1);
      puVar8 = puVar8 + 2;
      pcVar3 = pcVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1800e7e73(longlong param_1)

{
  longlong *plVar1;
  longlong in_RAX;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RBP;
  int iVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong *plVar6;
  undefined4 unaff_R15D;
  bool bVar7;
  
  pcVar3 = (char *)(param_1 + 0x208 + unaff_RSI);
  lVar5 = (unaff_RDI - unaff_RSI) + 1;
  plVar6 = (longlong *)(param_1 + 8 + in_RAX * 8);
  do {
    iVar4 = (int)unaff_RSI;
    if (*plVar6 == 0) {
      lVar2 = FUN_18062b420(_DAT_180c8ed18,0xa0000,0x25);
      plVar1 = (longlong *)(unaff_RBP + 8 + (longlong)iVar4 * 8);
      LOCK();
      bVar7 = *plVar1 == 0;
      if (bVar7) {
        *plVar1 = lVar2;
      }
      UNLOCK();
      if (bVar7) {
        LOCK();
        *(undefined1 *)((longlong)iVar4 + 0x208 + unaff_RBP) = 0;
        UNLOCK();
      }
      else {
        if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        do {
        } while (*pcVar3 != '\0');
      }
    }
    else {
      do {
      } while (*pcVar3 != '\0');
    }
    unaff_RSI = (ulonglong)(iVar4 + 1);
    plVar6 = plVar6 + 1;
    pcVar3 = pcVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return unaff_R15D;
}



undefined4 FUN_1800e7f04(void)

{
  undefined4 unaff_R15D;
  
  return unaff_R15D;
}






// 函数: void FUN_1800e7f20(longlong *param_1)
void FUN_1800e7f20(longlong *param_1)

{
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_1800e8060(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = (longlong)param_2;
  if (*(longlong *)(param_1 + 8 + lVar6 * 8) != 0) {
    do {
      cVar4 = *(char *)(param_1 + 0x108 + lVar6);
    } while (cVar4 != '\0');
    return cVar4;
  }
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0xc000,0x25);
  plVar2 = (longlong *)(param_1 + 8 + lVar6 * 8);
  LOCK();
  bVar7 = *plVar2 == 0;
  if (bVar7) {
    *plVar2 = lVar5;
  }
  UNLOCK();
  if (!bVar7) {
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    do {
      cVar4 = *(char *)(lVar6 + param_1 + 0x108);
    } while (cVar4 != '\0');
    return cVar4;
  }
  param_2 = param_2 * 0x800;
  iVar1 = param_2 + 0x800;
  for (; param_2 < iVar1; param_2 = param_2 + 1) {
  }
  LOCK();
  pcVar3 = (char *)(lVar6 + 0x108 + param_1);
  cVar4 = *pcVar3;
  *pcVar3 = '\0';
  UNLOCK();
  return cVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8140(longlong *param_1,ulonglong param_2)
void FUN_1800e8140(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((ulonglong)(param_1[2] - lVar2 >> 3) < param_2) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2 * 8,(char)param_1[3]);
      lVar2 = *param_1;
    }
    if (lVar2 != param_1[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar1,lVar2,param_1[1] - lVar2);
    }
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 8;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8163(longlong param_1,longlong param_2)
void FUN_1800e8163(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  longlong unaff_RSI;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,param_2 * 8,(char)unaff_RBX[3]);
    param_1 = *unaff_RBX;
  }
  if (param_1 == unaff_RBX[1]) {
    if (param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *unaff_RBX = lVar1;
    unaff_RBX[1] = lVar1;
    unaff_RBX[2] = lVar1 + unaff_RSI * 8;
    return;
  }
                    // WARNING: Subroutine does not return
  memmove(lVar1,param_1,unaff_RBX[1] - param_1);
}






// 函数: void FUN_1800e81e2(void)
void FUN_1800e81e2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800e81f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puStack_48;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = _DAT_180c8a998;
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  puStack_40 = (undefined4 *)0x0;
  uStack_38 = 0;
  puVar3 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1d,0x13,param_4,0,0xfffffffffffffffe);
  *(undefined1 *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  *puVar3 = 0x6f736552;
  puVar3[1] = 0x65637275;
  puVar3[2] = 0x66754220;
  puVar3[3] = 0x73726566;
  *(undefined8 *)(puVar3 + 4) = 0x6f6f70206e6f6e28;
  puVar3[6] = 0x2964656c;
  *(undefined1 *)(puVar3 + 7) = 0;
  uStack_38 = 0x1c;
  uStack_30._0_4_ = uVar2;
  FUN_1802037e0(0,param_4,&puStack_48);
  puStack_48 = &UNK_180a3c3e0;
  if (puStack_40 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_40 = (undefined4 *)0x0;
  uStack_30 = (ulonglong)uStack_30._4_4_ << 0x20;
  puStack_48 = &UNK_18098bcb0;
  FUN_1800828d0(uVar1,param_2);
  *(undefined8 *)(*param_2 + 0x10) = param_3;
  *(undefined4 *)(*param_2 + 0x18) = param_4;
  *(undefined4 *)(*param_2 + 0x1c) = param_4;
  *(undefined1 *)(*param_2 + 0x20) = 1;
  return param_2;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800e8340(undefined8 param_1,longlong param_2)
void FUN_1800e8340(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong auStackX_10 [3];
  undefined8 auStack_38 [2];
  
  lVar1 = _DAT_180c86938;
  if (*(int *)(param_2 + 0x2108) != 0) {
    uVar6 = 0;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(undefined8 *)(lVar1 + 0x1cd8),
                  (*(uint *)(param_2 + 4) & 0x4000000 | 0x18000000) >> 0x1a);
    lVar1 = FUN_180245280(param_2);
    if (*(int *)(lVar1 + 0x160) == 5) {
      uVar3 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    }
    else {
      uVar3 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    }
    FUN_18029d150(uVar3,0x10,lVar1,0x10,0xffffffff);
    lVar2 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    lVar5 = lVar1 + 0x1a0;
    if ((((*(longlong *)(lVar2 + 0x8540) != lVar5) || (*(int *)(lVar2 + 0x88bc) != -1)) ||
        (*(int *)(lVar2 + 0x8abc) != 0x10)) &&
       (((lVar5 == 0 || (*(longlong *)(lVar1 + 0x1a8) != 0)) || (*(longlong *)(lVar1 + 0x1b0) != 0))
       )) {
      auStackX_10[0] = uVar6;
      if (lVar5 != 0) {
        auStackX_10[0] = *(ulonglong *)(lVar1 + 0x1b0);
      }
      (**(code **)(**(longlong **)(lVar2 + 0x8400) + 0x40))
                (*(longlong **)(lVar2 + 0x8400),0x21,1,auStackX_10);
      *(longlong *)(lVar2 + 0x8540) = lVar5;
      *(undefined4 *)(lVar2 + 0x88bc) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x8abc) = 0x10;
      *(int *)(lVar2 + 0x82b4) = *(int *)(lVar2 + 0x82b4) + 1;
    }
    while (iVar4 = (int)uVar6, (ulonglong)(longlong)iVar4 < (ulonglong)*(uint *)(param_2 + 0x2108))
    {
      FUN_1800e8640(param_1,*(undefined8 *)
                             (*(longlong *)(param_2 + 0x2110 + (uVar6 >> 0xb) * 8) + 0x10 +
                             (ulonglong)(uint)(iVar4 + (int)(uVar6 >> 0xb) * -0x800) * 0x18));
      uVar6 = (ulonglong)(iVar4 + 1);
    }
    lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
       (lVar2 = _DAT_180c86938, *(int *)(lVar1 + 0x8a78) != 0x10)) {
      auStackX_10[1] = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0x10,1,auStackX_10 + 1);
      lVar2 = _DAT_180c86938;
      *(undefined8 *)(lVar1 + 0x84b8) = 0;
      *(undefined4 *)(lVar1 + 0x8878) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a78) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(lVar2 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
       (*(int *)(lVar1 + 0x8abc) != 0x10)) {
      auStackX_10[2] = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),0x21,1,auStackX_10 + 2);
      lVar2 = _DAT_180c86938;
      *(undefined8 *)(lVar1 + 0x8540) = 0;
      *(undefined4 *)(lVar1 + 0x88bc) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8abc) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
    lVar1 = *(longlong *)(lVar2 + 0x1cd8);
    if (((*(longlong *)(lVar1 + 0x8450) != 0) || (*(int *)(lVar1 + 0x8844) != -1)) ||
       (*(int *)(lVar1 + 0x8a44) != 0x10)) {
      auStack_38[0] = 0;
      (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
                (*(longlong **)(lVar1 + 0x8400),3,1,auStack_38);
      *(undefined8 *)(lVar1 + 0x8450) = 0;
      *(undefined4 *)(lVar1 + 0x8844) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x8a44) = 0x10;
      *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




