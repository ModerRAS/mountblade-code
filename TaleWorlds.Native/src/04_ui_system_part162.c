#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part162.c - 5 个函数

// 函数: void FUN_18076203a(void)
void FUN_18076203a(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x400) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_180762070(longlong param_1,byte param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puStackX_20;
  
  if (((byte)(*(uint *)(param_1 + 100) >> 7) & 1) != param_2) {
    if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
      uVar1 = FUN_180743700(*(undefined8 *)(param_1 + 0xa8),&puStackX_20,0x18,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *puStackX_20 = 0xe;
      puStackX_20[0x10] = param_2;
      *(longlong *)(puStackX_20 + 8) = param_1;
      uVar1 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),puStackX_20,param_3);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    else if (param_2 == 0) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffdfff;
      UNLOCK();
    }
    else {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x2000;
      UNLOCK();
    }
    if (param_2 != 0) {
      LOCK();
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x80;
      UNLOCK();
      return 0;
    }
    LOCK();
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) & 0xffffff7f;
    UNLOCK();
  }
  return 0;
}



undefined8 FUN_1807621f0(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  if (0x20 < param_3) {
    return 0x1f;
  }
  if ((param_4 == 0) && (0 < (int)param_3)) {
    *(short *)(param_1 + 0x118) = (short)param_3;
    return 0;
  }
  *(int *)(param_1 + 0xc4) = param_4;
  if ((param_3 == 0) && (param_4 != 0)) {
    param_3 = func_0x0001807462a0(param_4);
  }
  *(short *)(param_1 + 0x118) = (short)param_3;
  return 0;
}



undefined8 FUN_180762250(longlong param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  undefined8 uVar1;
  undefined1 *puStackX_10;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_3 < param_2)) {
    return 0x1f;
  }
  if (((param_2 != *(ulonglong *)(param_1 + 0x40)) || (param_3 != *(ulonglong *)(param_1 + 0x48)))
     || (param_4 != *(char *)(param_1 + 0x50))) {
    *(ulonglong *)(param_1 + 0x40) = param_2;
    *(ulonglong *)(param_1 + 0x48) = param_3;
    *(char *)(param_1 + 0x50) = param_4;
    uVar1 = FUN_180743700(*(undefined8 *)(param_1 + 0xa8),&puStackX_10,0x28,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *puStackX_10 = 0xf;
    *(longlong *)(puStackX_10 + 8) = param_1;
    *(ulonglong *)(puStackX_10 + 0x10) = param_2;
    *(ulonglong *)(puStackX_10 + 0x18) = param_3;
    puStackX_10[0x20] = param_4;
    uVar1 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),puStackX_10,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  return 0;
}



undefined8 FUN_180762360(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  
  if (param_3 == '\0') {
    if (*(char *)(param_2 + 0x212) != '\0') {
                    // WARNING: Subroutine does not return
      memset(param_2,0,0x214);
    }
  }
  else if (*(char *)(param_2 + 0x212) == '\0') {
    *(undefined1 *)(param_2 + 0x212) = 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + 0x10f70);
    *piVar1 = *piVar1 + 1;
    return 0;
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807623d0(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x210);
  lVar1 = *(longlong *)(param_1 + 0xa8);
  bVar9 = false;
  if (((lVar5 == 0) && (param_2 == '\0')) && (param_3 == '\0')) {
    iVar8 = 0;
    goto LAB_1807625b6;
  }
  bVar9 = lVar1 != 0;
  if (bVar9) {
    func_0x000180743c20(lVar1,7);
    lVar5 = *(longlong *)(param_1 + 0x210);
  }
  if ((lVar5 == 0) ||
     ((*(char *)(lVar5 + 0x212) == '\0' &&
      (((lVar5 == 0 || (*(char *)(lVar5 + 0x426) == '\0')) || (lVar5 == -0x214)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((param_2 == '\0') && (param_3 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar8 = 0;
  if ((bVar2) || (!bVar3)) {
LAB_180762564:
    if (*(longlong *)(param_1 + 0x210) == 0) {
LAB_18076259e:
      if ((!bVar2) || (bVar3)) goto LAB_1807625b6;
      iVar4 = FUN_18075e410(param_1);
      if (iVar4 == 0) goto LAB_1807625b6;
    }
    else {
      iVar4 = FUN_180762360(param_1,*(longlong *)(param_1 + 0x210),param_2);
      if (iVar4 == 0) {
        iVar4 = FUN_180762360(param_1,*(longlong *)(param_1 + 0x210) + 0x214,param_3);
        if (iVar4 == 0) goto LAB_18076259e;
      }
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (lVar5 != 0) {
      func_0x000180743c20(lVar5,7);
    }
    lVar6 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x450,&UNK_1809589a0,0x16e5,0);
    *(longlong *)(param_1 + 0x208) = lVar6;
    if (lVar6 == 0) {
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar5,7);
      }
      iVar8 = 0x26;
      goto LAB_1807625b6;
    }
    uVar7 = lVar6 + 0xfU & 0xfffffffffffffff0;
    lVar6 = uVar7 + 0x428;
    *(longlong *)(uVar7 + 0x430) = lVar6;
    *(longlong *)lVar6 = lVar6;
    *(ulonglong *)(uVar7 + 0x438) = uVar7;
    *(ulonglong *)(param_1 + 0x210) = uVar7;
    iVar4 = func_0x00018078b810(*(undefined8 *)(param_1 + 0xa8));
    if (iVar4 == 0) {
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar5,7);
      }
      goto LAB_180762564;
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar5,7);
    }
  }
  iVar8 = iVar4;
LAB_1807625b6:
  if ((bVar9) && (lVar1 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60(lVar1,7);
  }
  return iVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1807623e6(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong unaff_R15;
  bool bVar8;
  char cStack0000000000000070;
  
  cStack0000000000000070 = '\0';
  if (((in_RAX == 0) && (param_2 == '\0')) && (param_3 == '\0')) {
    iVar7 = 0;
    goto LAB_1807625b6;
  }
  bVar8 = unaff_R15 != 0;
  if (bVar8) {
    func_0x000180743c20();
    in_RAX = *(longlong *)(param_1 + 0x210);
  }
  if ((in_RAX == 0) ||
     ((*(char *)(in_RAX + 0x212) == '\0' &&
      (((in_RAX == 0 || (*(char *)(in_RAX + 0x426) == '\0')) || (in_RAX == -0x214)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((param_2 == '\0') && (param_3 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  iVar7 = 0;
  cStack0000000000000070 = bVar8;
  if ((bVar2) || (!bVar3)) {
LAB_180762564:
    if (*(longlong *)(param_1 + 0x210) == 0) {
LAB_18076259e:
      if ((!bVar2) || (bVar3)) goto LAB_1807625b6;
      iVar4 = FUN_18075e410(param_1);
      if (iVar4 == 0) goto LAB_1807625b6;
    }
    else {
      iVar4 = FUN_180762360(param_1,*(longlong *)(param_1 + 0x210),param_2);
      if (iVar4 == 0) {
        iVar4 = FUN_180762360(param_1,*(longlong *)(param_1 + 0x210) + 0x214,param_3);
        if (iVar4 == 0) goto LAB_18076259e;
      }
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 != 0) {
      func_0x000180743c20(lVar1,7);
    }
    lVar5 = FUN_180742050(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x450,&UNK_1809589a0,0x16e5,0);
    *(longlong *)(param_1 + 0x208) = lVar5;
    if (lVar5 == 0) {
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,7);
      }
      iVar7 = 0x26;
      goto LAB_1807625b6;
    }
    uVar6 = lVar5 + 0xfU & 0xfffffffffffffff0;
    lVar5 = uVar6 + 0x428;
    *(longlong *)(uVar6 + 0x430) = lVar5;
    *(longlong *)lVar5 = lVar5;
    *(ulonglong *)(uVar6 + 0x438) = uVar6;
    *(ulonglong *)(param_1 + 0x210) = uVar6;
    iVar4 = func_0x00018078b810(*(undefined8 *)(param_1 + 0xa8));
    if (iVar4 == 0) {
      if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180743d60(lVar1,7);
      }
      goto LAB_180762564;
    }
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_180743d60(lVar1,7);
    }
  }
  iVar7 = iVar4;
LAB_1807625b6:
  if ((cStack0000000000000070 != '\0') && (unaff_R15 != 0)) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return iVar7;
}



undefined4 FUN_1807625db(void)

{
  undefined4 unaff_EBX;
  longlong unaff_R15;
  
  if (unaff_R15 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180743d60();
  }
  return unaff_EBX;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180762660(longlong param_1,int param_2,undefined8 *param_3,int param_4)
void FUN_180762660(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int *piVar13;
  undefined1 auStack_2e8 [32];
  undefined4 uStack_2c8;
  undefined1 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2a8;
  int iStack_2a0;
  int iStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  uint uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  uint uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  uint uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  uint uStack_23c;
  int aiStack_238 [6];
  uint auStack_220 [101];
  uint uStack_8c;
  uint uStack_80;
  uint uStack_74;
  uint uStack_68;
  ulonglong uStack_58;
  
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2e8;
  if (((((param_2 < 0) || (puVar1 = *(uint **)(param_1 + 0xe8), (int)puVar1[0x18] <= param_2)) ||
       (piVar2 = *(int **)(*(longlong *)(puVar1 + 0x1a) + (longlong)param_2 * 8), *piVar2 != 3)) ||
      ((iVar12 = piVar2[0xc], iVar12 == -1 || (*(longlong *)(puVar1 + 0x22) == 0)))) ||
     (((*(int *)(param_1 + 0x100) == 0 || (iVar12 != 0)) && (param_3 == (undefined8 *)0x0))))
  goto FUN_180762a50;
  *(longlong *)(param_1 + 0xb0) = param_1;
  if ((iVar12 == -2) || (iVar12 == -5)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((((*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x78) >> 2 & 1) == 0) || (*puVar1 < 0x6d)) ||
     (!bVar7)) {
    iVar8 = (**(code **)(puVar1 + 0x22))(param_1 + 0xb0,param_2);
    if (iVar8 != 0) goto FUN_180762a50;
  }
  else {
    if (iVar12 == -2) {
      if (param_4 == 0x60) {
        uStack_268 = *(undefined4 *)(param_3 + 6);
        uStack_264 = *(undefined4 *)((longlong)param_3 + 0x34);
        uStack_25c = *(undefined4 *)((longlong)param_3 + 0x3c);
        uStack_244 = *(undefined4 *)((longlong)param_3 + 0x54);
        uStack_240 = *(undefined4 *)(param_3 + 0xb);
        uStack_298 = *(undefined4 *)param_3;
        uStack_294 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_28c = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_288 = *(undefined4 *)(param_3 + 2);
        uStack_280 = *(undefined4 *)(param_3 + 3);
        uStack_27c = *(undefined4 *)((longlong)param_3 + 0x1c);
        uStack_258 = *(undefined4 *)(param_3 + 8);
        uStack_250 = *(undefined4 *)(param_3 + 9);
        uStack_24c = *(undefined4 *)((longlong)param_3 + 0x4c);
        uStack_260 = *(uint *)(param_3 + 7) ^ 0x80000000;
        uStack_248 = *(uint *)(param_3 + 10) ^ 0x80000000;
        uStack_23c = *(uint *)((longlong)param_3 + 0x5c) ^ 0x80000000;
        uStack_274 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_270 = *(undefined4 *)(param_3 + 5);
        uStack_254 = *(uint *)((longlong)param_3 + 0x44) ^ 0x80000000;
        uStack_278 = *(uint *)(param_3 + 4) ^ 0x80000000;
        uStack_26c = *(uint *)((longlong)param_3 + 0x2c) ^ 0x80000000;
        uStack_290 = *(uint *)(param_3 + 1) ^ 0x80000000;
        uStack_284 = *(uint *)((longlong)param_3 + 0x14) ^ 0x80000000;
        (**(code **)(puVar1 + 0x22))(param_1 + 0xb0,param_2,&uStack_298,0x60);
      }
      goto FUN_180762a50;
    }
    if (iVar12 == -5) {
      if (param_4 == 0x1d4) {
        lVar9 = 3;
        piVar2 = aiStack_238;
        do {
          puVar11 = param_3;
          piVar13 = piVar2;
          uVar3 = puVar11[1];
          uVar4 = puVar11[2];
          uVar5 = puVar11[3];
          *(undefined8 *)piVar13 = *puVar11;
          *(undefined8 *)(piVar13 + 2) = uVar3;
          uVar3 = puVar11[4];
          uVar6 = puVar11[5];
          *(undefined8 *)(piVar13 + 4) = uVar4;
          *(undefined8 *)(piVar13 + 6) = uVar5;
          uVar4 = puVar11[6];
          uVar5 = puVar11[7];
          *(undefined8 *)(piVar13 + 8) = uVar3;
          *(undefined8 *)(piVar13 + 10) = uVar6;
          uVar3 = puVar11[8];
          uVar6 = puVar11[9];
          *(undefined8 *)(piVar13 + 0xc) = uVar4;
          *(undefined8 *)(piVar13 + 0xe) = uVar5;
          uVar4 = puVar11[10];
          uVar5 = puVar11[0xb];
          *(undefined8 *)(piVar13 + 0x10) = uVar3;
          *(undefined8 *)(piVar13 + 0x12) = uVar6;
          uVar3 = puVar11[0xc];
          uVar6 = puVar11[0xd];
          *(undefined8 *)(piVar13 + 0x14) = uVar4;
          *(undefined8 *)(piVar13 + 0x16) = uVar5;
          uVar4 = puVar11[0xe];
          uVar5 = puVar11[0xf];
          *(undefined8 *)(piVar13 + 0x18) = uVar3;
          *(undefined8 *)(piVar13 + 0x1a) = uVar6;
          *(undefined8 *)(piVar13 + 0x1c) = uVar4;
          *(undefined8 *)(piVar13 + 0x1e) = uVar5;
          lVar9 = lVar9 + -1;
          piVar2 = piVar13 + 0x20;
          param_3 = puVar11 + 0x10;
        } while (lVar9 != 0);
        uVar3 = puVar11[0x11];
        iVar12 = *(int *)(puVar11 + 0x1a);
        uVar4 = puVar11[0x12];
        uVar5 = puVar11[0x13];
        *(undefined8 *)(piVar13 + 0x20) = puVar11[0x10];
        *(undefined8 *)(piVar13 + 0x22) = uVar3;
        uVar3 = puVar11[0x14];
        uVar6 = puVar11[0x15];
        *(undefined8 *)(piVar13 + 0x24) = uVar4;
        *(undefined8 *)(piVar13 + 0x26) = uVar5;
        uVar4 = puVar11[0x16];
        uVar5 = puVar11[0x17];
        *(undefined8 *)(piVar13 + 0x28) = uVar3;
        *(undefined8 *)(piVar13 + 0x2a) = uVar6;
        uVar3 = puVar11[0x18];
        uVar6 = puVar11[0x19];
        *(undefined8 *)(piVar13 + 0x2c) = uVar4;
        *(undefined8 *)(piVar13 + 0x2e) = uVar5;
        *(undefined8 *)(piVar13 + 0x30) = uVar3;
        *(undefined8 *)(piVar13 + 0x32) = uVar6;
        piVar13[0x34] = iVar12;
        uStack_8c = uStack_8c ^ 0x80000000;
        uStack_74 = uStack_74 ^ 0x80000000;
        uStack_80 = uStack_80 ^ 0x80000000;
        uStack_68 = uStack_68 ^ 0x80000000;
        if (0 < aiStack_238[0]) {
          iVar12 = 0;
          if (0 < aiStack_238[0]) {
            puVar10 = auStack_220;
            do {
              iVar12 = iVar12 + 1;
              puVar10[-3] = puVar10[-3] ^ 0x80000000;
              *puVar10 = *puVar10 ^ 0x80000000;
              puVar10[3] = puVar10[3] ^ 0x80000000;
              puVar10[6] = puVar10[6] ^ 0x80000000;
              puVar10 = puVar10 + 0xc;
            } while (iVar12 < aiStack_238[0]);
          }
          (**(code **)(puVar1 + 0x22))(param_1 + 0xb0,param_2,aiStack_238,0x1d4);
        }
      }
      goto FUN_180762a50;
    }
  }
  if (iVar12 == 0) {
    uStack_2a8 = param_3;
    iStack_2a0 = param_4;
    iStack_29c = param_2;
    if ((*(int *)(param_1 + 0x100) - 0x1eU & 0xfffffffd) == 0) {
      FUN_18075e390(param_1,0,&uStack_2a8);
    }
    else {
      uStack_2b8 = 1;
      uStack_2c0 = 0;
      uStack_2c8 = 0;
      puVar11 = (undefined8 *)
                FUN_180741e10(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),0x18,&UNK_1809589a0,0x1288);
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_2a8;
        *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_2a8._4_4_;
        *(int *)(puVar11 + 2) = iStack_2a0;
        *(int *)((longlong)puVar11 + 0x14) = iStack_29c;
        *puVar11 = *(undefined8 *)(param_1 + 0x200);
        *(undefined8 **)(param_1 + 0x200) = puVar11;
      }
    }
  }
FUN_180762a50:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_2e8);
}





// 函数: void FUN_1807627a8(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)
void FUN_1807627a8(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  longlong unaff_RBP;
  longlong in_R8;
  longlong in_R10;
  uint uVar1;
  uint in_XMM4_Dc;
  uint in_XMM5_Db;
  uint uStack0000000000000058;
  uint uStack0000000000000064;
  uint uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  uint uStack000000000000007c;
  
  uStack0000000000000074 = *(undefined4 *)(in_R8 + 0x24);
  uStack0000000000000078 = *(undefined4 *)(in_R8 + 0x28);
  uVar1 = (uint)((ulonglong)param_2 >> 0x20) ^ param_4;
  uStack0000000000000070 = *(uint *)(in_R8 + 0x20) ^ param_4;
  uStack000000000000007c = *(uint *)(in_R8 + 0x2c) ^ param_4;
  uStack0000000000000058 = in_XMM4_Dc ^ param_4;
  uStack0000000000000064 = in_XMM5_Db ^ param_4;
  *(uint *)(unaff_RBP + -0x6c) = uVar1;
  *(undefined4 *)(unaff_RBP + -0x60) = param_3;
  (**(code **)(in_R10 + 0x88))(uStack000000000000007c,uVar1,&stack0x00000050);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}



void thunk_FUN_180762a50(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180762a50(void)
void FUN_180762a50(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 400) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_180762b60(longlong param_1,float param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 *puStackX_20;
  
  if ((param_2 < 0.0) || (256.0 < param_2)) {
    return 0x1f;
  }
  cVar4 = '\0';
  if ((*(uint *)(param_1 + 100) >> 8 & 1) == 0) {
    cVar4 = param_3;
  }
  if (cVar4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = (int)(longlong)(param_2 * 1048576.0);
    *(int *)(param_1 + 0x28) = iVar2;
    if ((iVar1 == 0) != (iVar2 == 0)) {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x107b8) + 0x30) = 1;
    }
  }
  else {
    uVar3 = FUN_180743700(*(undefined8 *)(param_1 + 0xa8),&puStackX_20,0x10,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *puStackX_20 = 0x13;
    *(longlong *)(puStackX_20 + 8) = param_1;
    *(float *)(puStackX_20 + 4) = param_2;
    uVar3 = func_0x000180743b40(*(undefined8 *)(param_1 + 0xa8),puStackX_20,1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  return 0;
}



undefined8 FUN_180762c70(undefined8 *param_1,undefined8 param_2,char param_3,char param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined1 *puStackX_8;
  
  cVar5 = '\0';
  if ((*(uint *)((longlong)param_1 + 100) >> 8 & 1) == 0) {
    cVar5 = param_4;
  }
  if (cVar5 == '\0') {
    if (param_3 != '\0') {
      iVar6 = 0;
      sVar1 = *(short *)(param_1 + 0x35);
      if (0 < sVar1) {
        do {
          if ((iVar6 < *(short *)(param_1 + 0x35)) &&
             (puVar3 = (undefined8 *)param_1[0xf], puVar3 != param_1 + 0xf)) {
            for (iVar4 = 0; iVar4 < iVar6; iVar4 = iVar4 + 1) {
              puVar3 = (undefined8 *)*puVar3;
            }
            if (puVar3[2] == 0) goto LAB_180762d68;
            puVar3 = *(undefined8 **)(puVar3[2] + 0x58);
          }
          else {
LAB_180762d68:
            puVar3 = (undefined8 *)0x0;
          }
          (**(code **)*puVar3)(puVar3,param_2);
          iVar6 = iVar6 + 1;
        } while (iVar6 < sVar1);
      }
    }
    (**(code **)*param_1)(param_1,param_2);
  }
  else {
    uVar2 = FUN_180743700(param_1[0x15],&puStackX_8,0x20,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *puStackX_8 = 0xc;
    *(undefined8 **)(puStackX_8 + 8) = param_1;
    *(undefined8 *)(puStackX_8 + 0x10) = param_2;
    puStackX_8[0x18] = param_3;
    param_1[0x37] = param_2;
    LOCK();
    *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 100) | 0x800;
    UNLOCK();
    uVar2 = func_0x000180743b40(param_1[0x15],puStackX_8,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



undefined8 FUN_180762d22(longlong param_1)

{
  short sVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  int iVar4;
  
  iVar4 = 0;
  sVar1 = *(short *)(param_1 + 0x1a8);
  if (0 < sVar1) {
    do {
      if ((iVar4 < *(short *)(unaff_RSI + 0x35)) &&
         (puVar2 = (undefined8 *)unaff_RSI[0xf], puVar2 != unaff_RSI + 0xf)) {
        for (iVar3 = 0; iVar3 < iVar4; iVar3 = iVar3 + 1) {
          puVar2 = (undefined8 *)*puVar2;
        }
        if (puVar2[2] == 0) goto LAB_180762d68;
        puVar2 = *(undefined8 **)(puVar2[2] + 0x58);
      }
      else {
LAB_180762d68:
        puVar2 = (undefined8 *)0x0;
      }
      (**(code **)*puVar2)();
      iVar4 = iVar4 + 1;
    } while (iVar4 < sVar1);
  }
  (**(code **)*unaff_RSI)();
  return 0;
}



undefined8 FUN_180762d7d(void)

{
  undefined8 *unaff_RSI;
  
  (**(code **)*unaff_RSI)();
  return 0;
}



undefined8 FUN_180762da0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x58) != 0)) {
    *(longlong *)(param_1 + 0xb0) = param_1;
    uVar2 = (**(code **)(lVar1 + 0x58))((longlong *)(param_1 + 0xb0),param_2 >> 0x20);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180762e40(longlong param_1,longlong param_2,int param_3,uint param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_4;
  if (param_5 != (undefined4 *)0x0) {
    *(short *)(param_5 + 0x84) = (short)param_4;
    param_5[0x82] = *(undefined4 *)(param_1 + 0x60);
    if (param_2 != 0) {
      (*(code *)*_DAT_180c0c6d0)(param_2,param_3,uVar2,param_5 + 0x20,param_5);
      param_5[0x83] = param_5[0x83] + param_3;
      return 0;
    }
    puVar1 = param_5;
    if (param_4 != 0) {
      do {
        *puVar1 = 0;
        puVar1[0x20] = 0;
        uVar2 = uVar2 - 1;
        puVar1 = puVar1 + 1;
      } while (uVar2 != 0);
    }
    param_5[0x83] = param_5[0x83] + param_3;
  }
  return 0;
}



undefined8
FUN_180762ee0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,uint param_6,undefined1 *param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = param_6;
  if ((param_6 != *(uint *)(param_1 + 0x58)) && ((*(uint *)(param_1 + 0x5c) >> 0x15 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0x5c) >> 0xd & 1) == 0) {
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 0;
      }
    }
    else {
      param_6 = param_6 & 0xffffff00;
      LOCK();
      *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x200000;
      UNLOCK();
      if (*(longlong *)(param_1 + 0x68) == 0) {
        for (puVar1 = *(undefined8 **)(param_1 + 0x70); puVar1 != (undefined8 *)(param_1 + 0x70);
            puVar1 = (undefined8 *)*puVar1) {
          FUN_180762ee0(*(longlong *)(puVar1[2] + 0x58) + 8,param_2,param_3,param_4,param_5,uVar2,
                        &param_6);
        }
      }
      else {
        FUN_180762ee0(*(longlong *)(param_1 + 0x68) + 8);
      }
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 1;
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x60) + 0xf8) != 0) &&
         ((*(uint *)(param_1 + 0x5c) >> 0x14 & 1) == 0)) {
        FUN_18075a030(param_2,param_1);
        return 0;
      }
    }
  }
  return 0;
}



undefined8 FUN_180762f61(void)

{
  undefined8 *puVar1;
  longlong unaff_RBX;
  undefined1 *in_stack_000000a0;
  
  for (puVar1 = *(undefined8 **)(unaff_RBX + 0x70); puVar1 != (undefined8 *)(unaff_RBX + 0x70);
      puVar1 = (undefined8 *)*puVar1) {
    FUN_180762ee0(*(longlong *)(puVar1[2] + 0x58) + 8);
  }
  if (in_stack_000000a0 != (undefined1 *)0x0) {
    *in_stack_000000a0 = 1;
  }
  if ((*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) &&
     ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0)) {
    FUN_18075a030();
    return 0;
  }
  return 0;
}



undefined8 FUN_180762f77(void)

{
  longlong unaff_RBX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined1 *puStack0000000000000030;
  undefined1 *in_stack_000000a0;
  
  do {
    puStack0000000000000030 = &stack0x00000098;
    FUN_180762ee0(*(longlong *)(unaff_RDI[2] + 0x58) + 8);
    unaff_RDI = (longlong *)*unaff_RDI;
  } while (unaff_RDI != (longlong *)unaff_RSI);
  if (in_stack_000000a0 != (undefined1 *)0x0) {
    *in_stack_000000a0 = 1;
  }
  if ((*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) &&
     ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0)) {
    FUN_18075a030();
    return 0;
  }
  return 0;
}



undefined8 FUN_180762fd1(void)

{
  longlong unaff_RBX;
  undefined1 *in_stack_000000a0;
  
  if (in_stack_000000a0 != (undefined1 *)0x0) {
    *in_stack_000000a0 = 1;
  }
  if ((*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) &&
     ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0)) {
    FUN_18075a030();
    return 0;
  }
  return 0;
}



undefined8 FUN_180762fdb(void)

{
  longlong unaff_RBX;
  undefined1 *in_stack_000000a0;
  
  if (in_stack_000000a0 != (undefined1 *)0x0) {
    *in_stack_000000a0 = 1;
  }
  if ((*(int *)(*(longlong *)(unaff_RBX + 0x60) + 0xf8) != 0) &&
     ((*(uint *)(unaff_RBX + 0x5c) >> 0x14 & 1) == 0)) {
    FUN_18075a030();
    return 0;
  }
  return 0;
}



undefined8 FUN_180763070(ulonglong param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 == (ulonglong *)0x0) {
    return 0x1f;
  }
  *param_2 = param_1;
  if ((((param_1 != 0) && ((param_1 & 3) == 0)) && ((*(uint *)(param_1 + 100) >> 10 & 1) == 0)) &&
     (*(int *)(param_1 + 0x5c) == -0x5331aa13)) {
    if (param_3 != (longlong *)0x0) {
      if ((*param_3 != 0) || (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 == 0)) {
        return 0x1c;
      }
      uVar2 = FUN_180743c40(lVar1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *param_3 = lVar1;
    }
    return 0;
  }
  return 0x1e;
}



undefined8 FUN_1807630a7(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *unaff_RDI;
  
  if (unaff_RDI != (longlong *)0x0) {
    if ((*param_3 != 0) || (lVar1 = *(longlong *)(param_1 + 0xa8), lVar1 == 0)) {
      return 0x1c;
    }
    uVar2 = FUN_180743c40(lVar1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *unaff_RDI = lVar1;
  }
  return 0;
}



undefined8 FUN_1807630df(void)

{
  return 0x1c;
}



undefined8 FUN_1807630ef(void)

{
  return 0x1e;
}





// 函数: void FUN_180763100(void)
void FUN_180763100(void)

{
  FUN_1807636f0();
  return;
}



undefined8 FUN_1807631a0(undefined8 *param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  if (param_3 != '\0') {
    uVar1 = FUN_18076dc00(param_1 + 7,*param_1,param_2 + 0x38);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = FUN_18076dc00(param_1 + 9,*param_1,param_2 + 0x48);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  return 0;
}



undefined8 FUN_180763220(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  FUN_18076deb0(param_1 + 0x13,*param_1);
  FUN_18076deb0(param_1 + 7,*param_1);
  FUN_18076deb0(param_1 + 9,*param_1);
  param_1[0xb] = 0;
  plVar1 = param_1 + 1;
  *(longlong *)param_1[2] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[2];
  param_1[2] = plVar1;
  *plVar1 = (longlong)plVar1;
  plVar1 = param_1 + 4;
  param_1[3] = param_1;
  param_1[0xc] = 0;
  *(longlong *)param_1[5] = *plVar1;
  *(undefined8 *)(*plVar1 + 8) = param_1[5];
  param_1[5] = plVar1;
  *plVar1 = (longlong)plVar1;
  param_1[6] = param_1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



