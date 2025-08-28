#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part326.c - 18 个函数

// 函数: void FUN_180848dc0(longlong *param_1,uint param_2,undefined8 param_3)
void FUN_180848dc0(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStackX_18;
  undefined1 auStackX_20 [8];
  
  if (param_2 < 0x10600) {
    *(undefined4 *)(param_1 + 2) = 0;
FUN_18088f050:
    iVar1 = FUN_18088f710(param_3,auStackX_20);
    if ((iVar1 == 0) && (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
      iVar1 = FUN_18010cbc0(uStackX_18,&UNK_180986258,(longlong)param_1 + 0x14,param_1 + 3,
                            (longlong)param_1 + 0x1c);
      if (((iVar1 == 3) ||
          (((iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x14), iVar1 == 0 &&
            (iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 3), iVar1 == 0)) &&
           (iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x1c), iVar1 == 0)))) &&
         (iVar1 = FUN_18088f710(auStackX_20,&uStackX_18), iVar1 == 0)) {
        iVar1 = FUN_18010cbc0(uStackX_18,&UNK_180986258,param_1 + 4,(longlong)param_1 + 0x24,
                              param_1 + 5);
        if (((iVar1 == 3) ||
            (((iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 4), iVar1 == 0 &&
              (iVar1 = FUN_18088eea0(&uStackX_18,(longlong)param_1 + 0x24), iVar1 == 0)) &&
             (iVar1 = FUN_18088eea0(&uStackX_18,param_1 + 5), iVar1 == 0)))) &&
           (iVar1 = FUN_18088f3a0(auStackX_20,(longlong)param_1 + 0x2c), iVar1 == 0)) {
          FUN_18088f3a0(auStackX_20,param_1 + 7);
        }
      }
    }
    return;
  }
  if (param_2 < 0x20100) {
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined8 *)((longlong)param_1 + 0x44) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    iVar1 = FUN_18088ee20(param_3,param_1 + 2);
    if (iVar1 == 0) goto FUN_18088f050;
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180848e50(char *param_1,undefined8 *param_2)
void FUN_180848e50(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *apuStack_88 [5];
  undefined1 uStack_60;
  undefined1 auStack_5f [8];
  undefined1 uStack_57;
  undefined1 auStack_56 [4];
  undefined1 uStack_52;
  undefined1 auStack_51 [4];
  undefined1 uStack_4d;
  undefined1 auStack_4c [4];
  undefined1 uStack_48;
  undefined1 auStack_47 [10];
  undefined1 auStack_3d [5];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  if (param_2 != (undefined8 *)0x0) {
    if ((((param_1 == (char *)0x0) || (iVar5 = func_0x00018076b690(), iVar5 != 0x26)) ||
        (*param_1 != '{')) || (param_1[0x25] != '}')) {
FUN_180848ff1:
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      func_0x00018076b450(&uStack_60,param_1,0x27);
      uStack_57 = 0;
      apuStack_88[0] = auStack_5f;
      lVar9 = 0;
      uStack_52 = 0;
      apuStack_88[1] = auStack_56;
      uStack_4d = 0;
      apuStack_88[2] = auStack_51;
      apuStack_88[3] = auStack_4c;
      apuStack_88[4] = auStack_47;
      uStack_48 = 0;
      auStack_3d[2] = 0;
      do {
        pcVar6 = apuStack_88[lVar9];
        cVar2 = *pcVar6;
        while (cVar2 != '\0') {
          if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
             (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
          pcVar1 = pcVar6 + 1;
          pcVar6 = pcVar6 + 1;
          cVar2 = *pcVar1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < 5);
      uStack_98 = func_0x00018076b320(auStack_5f);
      uVar4 = func_0x00018076b320(auStack_56);
      uStack_94 = CONCAT22(uStack_94._2_2_,uVar4);
      uVar4 = func_0x00018076b320(auStack_51);
      uStack_94 = CONCAT22(uVar4,(undefined2)uStack_94);
      uVar4 = func_0x00018076b320(auStack_4c);
      puVar8 = (undefined1 *)((longlong)&uStack_8c + 3);
      uStack_90 = CONCAT31(CONCAT21(uStack_90._2_2_,(char)uVar4),(char)((ushort)uVar4 >> 8));
      puVar7 = auStack_3d;
      iVar5 = 5;
      puVar10 = auStack_3d;
      do {
        uVar3 = func_0x00018076b320(puVar10);
        puVar10 = puVar10 + -2;
        *puVar8 = uVar3;
        iVar5 = iVar5 + -1;
        *puVar7 = 0;
        puVar8 = puVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (-1 < iVar5);
      *(undefined4 *)param_2 = uStack_98;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_94;
      *(undefined4 *)(param_2 + 1) = uStack_90;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_8c;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_b8);
}





// 函数: void FUN_180848e82(void)
void FUN_180848e82(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  char *unaff_RBX;
  longlong unaff_RBP;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  undefined8 *unaff_R15;
  
  if ((((unaff_RBX == (char *)0x0) || (iVar7 = func_0x00018076b690(), iVar7 != 0x26)) ||
      (*unaff_RBX != '{')) || (unaff_RBX[0x25] != '}')) {
FUN_180848ff1:
    *unaff_R15 = 0;
    unaff_R15[1] = 0;
  }
  else {
    func_0x00018076b450(unaff_RBP + -1);
    *(undefined1 *)(unaff_RBP + 8) = 0;
    *(longlong *)(unaff_RBP + -0x29) = unaff_RBP;
    lVar12 = 0;
    *(undefined1 *)(unaff_RBP + 0xd) = 0;
    *(longlong *)(unaff_RBP + -0x21) = unaff_RBP + 9;
    *(undefined1 *)(unaff_RBP + 0x12) = 0;
    *(longlong *)(unaff_RBP + -0x19) = unaff_RBP + 0xe;
    *(longlong *)(unaff_RBP + -0x11) = unaff_RBP + 0x13;
    *(longlong *)(unaff_RBP + -9) = unaff_RBP + 0x18;
    *(undefined1 *)(unaff_RBP + 0x17) = 0;
    *(undefined1 *)(unaff_RBP + 0x24) = 0;
    do {
      pcVar9 = *(char **)(unaff_RBP + -0x29 + lVar12 * 8);
      cVar2 = *pcVar9;
      while (cVar2 != '\0') {
        if (((9 < (byte)(cVar2 - 0x30U)) && (5 < (byte)(cVar2 + 0xbfU))) &&
           (5 < (byte)(cVar2 + 0x9fU))) goto FUN_180848ff1;
        pcVar1 = pcVar9 + 1;
        pcVar9 = pcVar9 + 1;
        cVar2 = *pcVar1;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < 5);
    uVar8 = func_0x00018076b320();
    *(undefined4 *)(unaff_RBP + -0x39) = uVar8;
    uVar6 = func_0x00018076b320(unaff_RBP + 9);
    *(undefined2 *)(unaff_RBP + -0x35) = uVar6;
    uVar6 = func_0x00018076b320(unaff_RBP + 0xe);
    *(undefined2 *)(unaff_RBP + -0x33) = uVar6;
    uVar6 = func_0x00018076b320(unaff_RBP + 0x13);
    *(char *)(unaff_RBP + -0x30) = (char)uVar6;
    puVar11 = (undefined1 *)(unaff_RBP + -0x2a);
    *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar6 >> 8);
    puVar10 = (undefined1 *)(unaff_RBP + 0x22);
    iVar7 = 5;
    lVar12 = unaff_RBP + 0x22;
    do {
      uVar5 = func_0x00018076b320(lVar12);
      lVar12 = lVar12 + -2;
      *puVar11 = uVar5;
      iVar7 = iVar7 + -1;
      *puVar10 = 0;
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -2;
    } while (-1 < iVar7);
    uVar8 = *(undefined4 *)(unaff_RBP + -0x35);
    uVar3 = *(undefined4 *)(unaff_RBP + -0x31);
    uVar4 = *(undefined4 *)(unaff_RBP + -0x2d);
    *(undefined4 *)unaff_R15 = *(undefined4 *)(unaff_RBP + -0x39);
    *(undefined4 *)((longlong)unaff_R15 + 4) = uVar8;
    *(undefined4 *)(unaff_R15 + 1) = uVar3;
    *(undefined4 *)((longlong)unaff_R15 + 0xc) = uVar4;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180848f4e(void)
void FUN_180848f4e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong unaff_RBP;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 unaff_R12B;
  longlong lVar9;
  undefined4 *unaff_R15;
  
  uVar5 = func_0x00018076b320();
  *(undefined4 *)(unaff_RBP + -0x39) = uVar5;
  uVar4 = func_0x00018076b320(unaff_RBP + 9);
  *(undefined2 *)(unaff_RBP + -0x35) = uVar4;
  uVar4 = func_0x00018076b320(unaff_RBP + 0xe);
  *(undefined2 *)(unaff_RBP + -0x33) = uVar4;
  uVar4 = func_0x00018076b320(unaff_RBP + 0x13);
  *(char *)(unaff_RBP + -0x30) = (char)uVar4;
  puVar8 = (undefined1 *)(unaff_RBP + -0x2a);
  *(char *)(unaff_RBP + -0x31) = (char)((ushort)uVar4 >> 8);
  puVar7 = (undefined1 *)(unaff_RBP + 0x22);
  iVar6 = 5;
  lVar9 = unaff_RBP + 0x22;
  do {
    uVar3 = func_0x00018076b320(lVar9);
    lVar9 = lVar9 + -2;
    *puVar8 = uVar3;
    iVar6 = iVar6 + -1;
    *puVar7 = unaff_R12B;
    puVar8 = puVar8 + -1;
    puVar7 = puVar7 + -2;
  } while (-1 < iVar6);
  uVar5 = *(undefined4 *)(unaff_RBP + -0x35);
  uVar1 = *(undefined4 *)(unaff_RBP + -0x31);
  uVar2 = *(undefined4 *)(unaff_RBP + -0x2d);
  *unaff_R15 = *(undefined4 *)(unaff_RBP + -0x39);
  unaff_R15[1] = uVar5;
  unaff_R15[2] = uVar1;
  unaff_R15[3] = uVar2;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180848ff1(void)
void FUN_180848ff1(void)

{
  longlong unaff_RBP;
  undefined8 *unaff_R15;
  
  *unaff_R15 = 0;
  unaff_R15[1] = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18084900b(void)
void FUN_18084900b(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x27) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180849030(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_2;
  if (iVar2 < (int)param_1[1]) {
    return 0x1c;
  }
  lVar1 = 0;
  if (iVar2 != 0) {
    if (iVar2 - 1U < 0x3fffffff) {
      lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180957f70,0xf4,0,0,
                            1);
      if (lVar1 != 0) {
        if ((int)param_1[1] != 0) {
                    // WARNING: Subroutine does not return
          memcpy(lVar1,*param_1,(longlong)(int)param_1[1]);
        }
        goto LAB_1808490b9;
      }
    }
    return 0x26;
  }
LAB_1808490b9:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180849054(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  lVar1 = 0;
  if (unaff_EDI == 0) {
LAB_1808490b9:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = lVar1;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if ((int)param_2 - 1U < 0x3fffffff) {
    lVar1 = FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2,&UNK_180957f70,0xf4,0);
    if (lVar1 != 0) {
      if ((int)unaff_RBX[1] != 0) {
                    // WARNING: Subroutine does not return
        memcpy(lVar1,*unaff_RBX,(longlong)(int)unaff_RBX[1]);
      }
      goto LAB_1808490b9;
    }
  }
  return 0x26;
}



undefined8 FUN_180849104(void)

{
  return 0x26;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180849120(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  if (param_2 < (int)param_1[1]) {
    return 0x1c;
  }
  puVar7 = (undefined4 *)0x0;
  if (param_2 != 0) {
    if (param_2 * 0x14 - 1U < 0x3fffffff) {
      puVar7 = (undefined4 *)
               FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x14,&UNK_180957f70,
                             0xf4,0,0,1);
      if (puVar7 != (undefined4 *)0x0) {
        iVar2 = (int)param_1[1];
        lVar8 = (longlong)iVar2;
        if ((iVar2 != 0) && (lVar3 = *param_1, 0 < iVar2)) {
          puVar9 = puVar7;
          do {
            puVar1 = (undefined4 *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            puVar9[4] = *(undefined4 *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
            lVar8 = lVar8 + -1;
            puVar9 = puVar9 + 5;
          } while (lVar8 != 0);
        }
        goto LAB_1808491ce;
      }
    }
    return 0x26;
  }
LAB_1808491ce:
  if ((0 < *(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*param_1,&UNK_180957f70,0x100,1);
  }
  *param_1 = (longlong)puVar7;
  *(int *)((longlong)param_1 + 0xc) = param_2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180849144(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *unaff_RBX;
  int unaff_EDI;
  
  puVar7 = (undefined4 *)0x0;
  if (unaff_EDI == 0) {
LAB_1808491ce:
    if ((0 < *(int *)((longlong)unaff_RBX + 0xc)) && (*unaff_RBX != 0)) {
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),*unaff_RBX,&UNK_180957f70,0x100,1);
    }
    *unaff_RBX = (longlong)puVar7;
    *(int *)((longlong)unaff_RBX + 0xc) = unaff_EDI;
    return 0;
  }
  if (param_2 * 0x14 - 1U < 0x3fffffff) {
    puVar7 = (undefined4 *)
             FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),param_2 * 0x14,&UNK_180957f70,
                           0xf4,0);
    if (puVar7 != (undefined4 *)0x0) {
      iVar2 = (int)unaff_RBX[1];
      lVar8 = (longlong)iVar2;
      if ((iVar2 != 0) && (lVar3 = *unaff_RBX, 0 < iVar2)) {
        puVar9 = puVar7;
        do {
          puVar1 = (undefined4 *)((lVar3 - (longlong)puVar7) + (longlong)puVar9);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          *puVar9 = *puVar1;
          puVar9[1] = uVar4;
          puVar9[2] = uVar5;
          puVar9[3] = uVar6;
          puVar9[4] = *(undefined4 *)((lVar3 - (longlong)puVar7) + -4 + (longlong)(puVar9 + 5));
          lVar8 = lVar8 + -1;
          puVar9 = puVar9 + 5;
        } while (lVar8 != 0);
      }
      goto LAB_1808491ce;
    }
  }
  return 0x26;
}



undefined8 FUN_180849219(void)

{
  return 0x26;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849230(undefined8 param_1)
void FUN_180849230(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [48];
  longlong alStack_138 [2];
  undefined8 *apuStack_128 [34];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  alStack_138[1] = 0;
  iVar1 = func_0x00018088c590(param_1,alStack_138);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) == 0) goto LAB_1808492e6;
    iVar2 = FUN_18088c740(alStack_138 + 1);
    if (iVar2 == 0) goto LAB_180849294;
  }
  else {
LAB_180849294:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(alStack_138[0] + 0x98),apuStack_128,0x18), iVar1 == 0))
  {
    *apuStack_128[0] = &UNK_180983cf8;
    *(undefined4 *)(apuStack_128[0] + 1) = 0x18;
    *(int *)(apuStack_128[0] + 2) = (int)param_1;
    func_0x00018088e0d0(*(undefined8 *)(alStack_138[0] + 0x98));
  }
LAB_1808492e6:
                    // WARNING: Subroutine does not return
  FUN_18088c790(alStack_138 + 1);
}



// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849360(ulonglong param_1)
void FUN_180849360(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_168 [32];
  undefined1 *puStack_148;
  longlong alStack_138 [4];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar1 = func_0x00018088c590(param_1,alStack_138 + 2);
  if (iVar1 == 0) {
    if ((*(uint *)(alStack_138[2] + 0x24) >> 1 & 1) != 0) {
      FUN_18084b0c0(param_1);
      alStack_138[1] = 0;
      iVar1 = func_0x00018088c590(param_1 & 0xffffffff,alStack_138);
      if (((iVar1 != 0) ||
          (((*(uint *)(alStack_138[0] + 0x24) >> 1 & 1) != 0 &&
           (iVar2 = FUN_18088c740(alStack_138 + 1), iVar2 == 0)))) && (iVar1 == 0)) {
        FUN_18088da50(*(undefined8 *)(alStack_138[0] + 0x98));
      }
                    // WARNING: Subroutine does not return
      FUN_18088c790(alStack_138 + 1);
    }
    iVar1 = FUN_180883a30();
    if (iVar1 == 0) goto LAB_180849462;
  }
  if ((iVar1 != 0) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    puStack_148 = auStack_118;
    auStack_118[0] = 0;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&UNK_1809570e8);
  }
LAB_180849462:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849490(undefined8 param_1,undefined8 *param_2)
void FUN_180849490(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_178 [32];
  undefined1 *puStack_158;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined8 *apuStack_138 [2];
  undefined1 auStack_128 [256];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  if (param_2 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_178);
    }
    func_0x00018074bda0(auStack_128,0x100,0);
    puStack_158 = auStack_128;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xd,param_1,&UNK_1809838a8);
  }
  uStack_148 = 0;
  iVar5 = func_0x00018088c590(param_1,&lStack_140);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_140 + 0x24) >> 1 & 1) == 0) goto LAB_1808494eb;
    iVar6 = FUN_18088c740(&uStack_148);
    if (iVar6 == 0) goto LAB_180849553;
  }
  else {
LAB_180849553:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = FUN_18088dec0(*(undefined8 *)(lStack_140 + 0x98),apuStack_138,0x48), iVar5 == 0)) {
    *apuStack_138[0] = &UNK_180983840;
    *(undefined4 *)(apuStack_138[0] + 1) = 0x48;
    *(int *)(apuStack_138[0] + 2) = (int)param_1;
    uVar4 = param_2[1];
    apuStack_138[0][3] = *param_2;
    apuStack_138[0][4] = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 3);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(apuStack_138[0] + 5) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)apuStack_138[0] + 0x2c) = uVar1;
    *(undefined4 *)(apuStack_138[0] + 6) = uVar2;
    *(undefined4 *)((longlong)apuStack_138[0] + 0x34) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar2 = *(undefined4 *)(param_2 + 5);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined4 *)(apuStack_138[0] + 7) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)apuStack_138[0] + 0x3c) = uVar1;
    *(undefined4 *)(apuStack_138[0] + 8) = uVar2;
    *(undefined4 *)((longlong)apuStack_138[0] + 0x44) = uVar3;
    func_0x00018088e0d0(*(undefined8 *)(lStack_140 + 0x98));
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_148);
  }
LAB_1808494eb:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849600(undefined8 param_1,undefined8 param_2)
void FUN_180849600(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined1 *puStack_138;
  undefined8 auStack_128 [2];
  undefined1 auStack_118 [256];
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  iVar1 = func_0x00018088c590(param_1,auStack_128);
  if ((((iVar1 != 0) || (iVar1 = FUN_180889f10(auStack_128[0],param_2), iVar1 != 0)) && (iVar1 != 0)
      ) && ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) != 0)) {
    func_0x00018074bda0(auStack_118,0x100,param_2);
    puStack_138 = auStack_118;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(iVar1,0xb,param_1,&UNK_180957208);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1808496c0(undefined4 param_1,longlong param_2,undefined4 param_3)
void FUN_1808496c0(undefined4 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar2 = func_0x00018088c590(0,&uStack_150);
  if (((iVar2 == 0) && (iVar2 = FUN_18088c740(&uStack_158,uStack_150), iVar2 == 0)) &&
     (iVar2 = func_0x00018088c530(param_1,alStack_140), iVar2 == 0)) {
    lStack_148 = *(longlong *)(alStack_140[0] + 8);
  }
  else if (iVar2 != 0) goto LAB_180849763;
  lVar1 = *(longlong *)(lStack_148 + 0xd0);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = param_3;
  }
  *(undefined4 *)(lVar1 + 0x48) = uVar3;
  *(longlong *)(lVar1 + 0x40) = param_2;
LAB_180849763:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}





// 函数: void FUN_180849782(void)
void FUN_180849782(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  iVar1 = func_0x00018074bda0(&stack0x00000050,0x100);
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xc);
}





// 函数: void FUN_1808497fa(void)
void FUN_1808497fa(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849820(undefined4 param_1,longlong param_2,undefined4 param_3)
void FUN_180849820(undefined4 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_188 [48];
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong alStack_140 [33];
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  lStack_148 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  iVar1 = func_0x00018088c590(0,&uStack_150);
  if (((iVar1 == 0) && (iVar1 = FUN_18088c740(&uStack_158,uStack_150), iVar1 == 0)) &&
     (iVar1 = func_0x00018088c530(param_1,alStack_140), iVar1 == 0)) {
    if (alStack_140[0] == 0) {
      lStack_148 = alStack_140[0];
    }
    else {
      lStack_148 = alStack_140[0] + -8;
    }
  }
  else if (iVar1 != 0) goto LAB_1808498c8;
  *(longlong *)(lStack_148 + 0x78) = param_2;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = param_3;
  }
  *(undefined4 *)(lStack_148 + 0x74) = uVar2;
LAB_1808498c8:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_158);
}





// 函数: void FUN_1808498e7(void)
void FUN_1808498e7(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_R14D;
  
  iVar1 = func_0x00018074bda0(&stack0x00000050,0x100);
  iVar2 = FUN_18074b880(&stack0x00000050 + iVar1,0x100 - iVar1,&DAT_180a06434);
  func_0x00018074b800(&stack0x00000050 + (iVar1 + iVar2),0x100 - (iVar1 + iVar2),unaff_R14D);
                    // WARNING: Subroutine does not return
  FUN_180749ef0(unaff_ESI,0xd);
}





// 函数: void FUN_18084995f(void)
void FUN_18084995f(void)

{
  ulonglong in_stack_00000150;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000150 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849990(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)
void FUN_180849990(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_198 [32];
  undefined1 *puStack_178;
  undefined8 uStack_168;
  longlong lStack_160;
  undefined8 *apuStack_158 [2];
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  if (param_3 == (undefined8 *)0x0) {
    if ((*(byte *)(_DAT_180be12f0 + 0x10) & 0x80) == 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
    }
    iVar5 = func_0x00018074b7d0(auStack_148,0x100,param_2);
    iVar6 = FUN_18074b880(auStack_148 + iVar5,0x100 - iVar5,&DAT_180a06434);
    iVar5 = iVar5 + iVar6;
    iVar6 = func_0x00018074bda0(auStack_148 + iVar5,0x100 - iVar5,0);
    iVar5 = iVar5 + iVar6;
    iVar6 = FUN_18074b880(auStack_148 + iVar5,0x100 - iVar5,&DAT_180a06434);
    FUN_18074bd40(auStack_148 + (iVar5 + iVar6),0x100 - (iVar5 + iVar6),param_4);
    puStack_178 = auStack_148;
                    // WARNING: Subroutine does not return
    FUN_180749ef0(0x1f,0xb,param_1,&UNK_180982460);
  }
  uStack_168 = 0;
  iVar5 = func_0x00018088c590(param_1,&lStack_160);
  if (iVar5 == 0) {
    if ((*(uint *)(lStack_160 + 0x24) >> 1 & 1) == 0) goto LAB_1808499fb;
    iVar6 = FUN_18088c740(&uStack_168);
    if (iVar6 == 0) goto LAB_180849ad3;
  }
  else {
LAB_180849ad3:
    iVar6 = iVar5;
  }
  if ((iVar6 == 0) &&
     (iVar5 = FUN_18088dec0(*(undefined8 *)(lStack_160 + 0x98),apuStack_158,0x58), iVar5 == 0)) {
    *apuStack_158[0] = &UNK_1809823f8;
    *(undefined4 *)(apuStack_158[0] + 1) = 0x58;
    *(undefined4 *)(apuStack_158[0] + 2) = param_2;
    uVar4 = param_3[1];
    *(undefined8 *)((longlong)apuStack_158[0] + 0x14) = *param_3;
    *(undefined8 *)((longlong)apuStack_158[0] + 0x1c) = uVar4;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 3);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)((longlong)apuStack_158[0] + 0x24) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(apuStack_158[0] + 5) = uVar1;
    *(undefined4 *)((longlong)apuStack_158[0] + 0x2c) = uVar2;
    *(undefined4 *)(apuStack_158[0] + 6) = uVar3;
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 5);
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(undefined4 *)((longlong)apuStack_158[0] + 0x34) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(apuStack_158[0] + 7) = uVar1;
    *(undefined4 *)((longlong)apuStack_158[0] + 0x3c) = uVar2;
    *(undefined4 *)(apuStack_158[0] + 8) = uVar3;
    if (param_4 == (undefined8 *)0x0) {
      *(undefined8 *)((longlong)apuStack_158[0] + 0x44) = 0;
      *(undefined4 *)((longlong)apuStack_158[0] + 0x4c) = 0;
    }
    else {
      *(undefined8 *)((longlong)apuStack_158[0] + 0x44) = *param_4;
      *(undefined4 *)((longlong)apuStack_158[0] + 0x4c) = *(undefined4 *)(param_4 + 1);
    }
    *(bool *)(apuStack_158[0] + 10) = param_4 != (undefined8 *)0x0;
    func_0x00018088e0d0(*(undefined8 *)(lStack_160 + 0x98));
                    // WARNING: Subroutine does not return
    FUN_18088c790(&uStack_168);
  }
LAB_1808499fb:
                    // WARNING: Subroutine does not return
  FUN_18088c790(&uStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180849bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)
void FUN_180849bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_198 [48];
  longlong lStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [34];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  auStack_158[0] = 0;
  iVar1 = func_0x00018088c590(param_1,&lStack_168);
  if (iVar1 == 0) {
    if ((*(uint *)(lStack_168 + 0x24) >> 1 & 1) == 0) goto LAB_180849c81;
    iVar2 = FUN_18088c740(auStack_158);
    if (iVar2 == 0) goto LAB_180849c22;
  }
  else {
LAB_180849c22:
    iVar2 = iVar1;
  }
  if ((iVar2 == 0) &&
     (iVar1 = FUN_18088dec0(*(undefined8 *)(lStack_168 + 0x98),&puStack_160,0x28), iVar1 == 0)) {
    *puStack_160 = &UNK_180983e88;
    *(undefined4 *)(puStack_160 + 1) = 0x28;
    *(undefined4 *)(puStack_160 + 4) = param_3;
    *(int *)(puStack_160 + 2) = (int)param_1;
    puStack_160[3] = param_2;
    *(undefined1 *)((longlong)puStack_160 + 0x24) = param_4;
    func_0x00018088e0d0(*(undefined8 *)(lStack_168 + 0x98));
  }
LAB_180849c81:
                    // WARNING: Subroutine does not return
  FUN_18088c790(auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



