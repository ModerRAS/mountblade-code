#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part086.c - 4 个函数

// 函数: void FUN_1801122ca(void)
void FUN_1801122ca(void)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R10;
  longlong in_R11;
  longlong lVar9;
  bool in_ZF;
  float fVar10;
  float fVar11;
  undefined4 unaff_XMM6_Da;
  float fVar12;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  float fVar13;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar14;
  float fVar15;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar16;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM7_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM7_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM7_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_R11 + -0x38) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x34) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x30) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x2c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM9_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM9_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM9_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM9_Dd;
  *(undefined4 *)(in_R11 + -0x58) = unaff_XMM10_Da;
  *(undefined4 *)(in_R11 + -0x54) = unaff_XMM10_Db;
  *(undefined4 *)(in_R11 + -0x50) = unaff_XMM10_Dc;
  *(undefined4 *)(in_R11 + -0x4c) = unaff_XMM10_Dd;
  if (in_ZF) {
    *(undefined1 *)(unaff_RBX + 0xb1) = 1;
    lVar9 = *(longlong *)(in_R10 + 0x1af8);
    if (*(char *)(lVar9 + 0xb4) == '\0') {
      pfVar1 = (float *)(lVar9 + 0x100);
      fVar13 = *pfVar1;
      fVar15 = *(float *)(lVar9 + 0x104);
      fVar11 = *pfVar1;
      uVar5 = *(undefined4 *)(lVar9 + 0x104);
      fVar2 = *pfVar1;
      uVar8 = *(undefined4 *)(lVar9 + 0x104);
      fVar16 = fVar15 + *(float *)(lVar9 + 0x124);
      fVar14 = fVar13 + 1.0;
      *(undefined4 *)(unaff_RBP + 0x6b) = 0;
      *(float *)(unaff_RBP + 0x67) = fVar14 - fVar13;
      fVar10 = fVar14;
      fVar12 = fVar16;
      func_0x000180124080(unaff_RBP + 0x67,0);
      lVar3 = *(longlong *)(in_R10 + 0x1af8);
      *(undefined8 *)(lVar3 + 0x144) = 0;
      *(float *)(lVar3 + 0x14c) = fVar2;
      *(undefined4 *)(lVar3 + 0x150) = uVar8;
      *(float *)(lVar3 + 0x154) = fVar10;
      *(float *)(lVar3 + 0x158) = fVar12;
      lVar4 = *(longlong *)(in_R10 + 0x1af8);
      *(float *)(unaff_RBP + -0x19) = fVar11;
      *(undefined4 *)(unaff_RBP + -0x15) = uVar5;
      *(float *)(unaff_RBP + -0x11) = fVar10;
      *(float *)(unaff_RBP + -0xd) = fVar12;
      if ((((*(float *)(lVar4 + 0x22c) <= fVar16 && fVar16 != *(float *)(lVar4 + 0x22c)) &&
           (fVar15 < *(float *)(lVar4 + 0x234))) &&
          ((*(float *)(lVar4 + 0x228) <= fVar14 && fVar14 != *(float *)(lVar4 + 0x228) &&
           (fVar13 < *(float *)(lVar4 + 0x230))))) || (*(char *)(in_R10 + 0x2e38) != '\0')) {
        cVar7 = FUN_180128040(unaff_RBP + -0x19,unaff_RBP + -0x11,1);
        if (cVar7 != '\0') {
          *(uint *)(lVar3 + 0x148) = *(uint *)(lVar3 + 0x148) | 1;
        }
        uVar8 = *(undefined4 *)(in_R10 + 0x1878);
        uVar5 = *(undefined4 *)(in_R10 + 0x187c);
        uVar6 = *(undefined4 *)(in_R10 + 0x1880);
        fVar11 = *(float *)(in_R10 + 0x1884);
        *(float *)(unaff_RBP + 0x67) = fVar13;
        *(undefined4 *)(unaff_RBP + -0x19) = uVar8;
        *(undefined4 *)(unaff_RBP + -0x15) = uVar5;
        *(undefined4 *)(unaff_RBP + -0x11) = uVar6;
        *(float *)(unaff_RBP + -0xd) = fVar11;
        fVar2 = *(float *)(in_R10 + 0x1628);
        *(float *)(unaff_RBP + 0x6b) = fVar16;
        *(float *)(unaff_RBP + 0x6f) = fVar13;
        *(float *)(unaff_RBP + -0xd) = fVar11 * fVar2;
        *(float *)(unaff_RBP + 0x73) = fVar15;
        uVar8 = func_0x000180121e20(unaff_RBP + -0x19);
        FUN_180293d20(*(undefined8 *)(lVar9 + 0x2e8),unaff_RBP + 0x6f,unaff_RBP + 0x67,uVar8,
                      0x3f800000);
        if (*(char *)(unaff_RDI + 0x2e38) != '\0') {
          FUN_18013c760(&UNK_180a0634c);
        }
      }
    }
  }
  else {
    if (*(longlong *)(unaff_RBX + 0x210) != 0) {
      FUN_180126d80();
      in_R10 = _DAT_180c8a9b0;
    }
    fVar13 = *(float *)(unaff_RBX + 0x40);
    fVar15 = fVar13 + *(float *)(unaff_RBX + 0x48);
    if (*(int *)(unaff_RBX + 0x1e8) != 0) {
      fVar13 = fVar13 + *(float *)(unaff_RBX + 0x204);
    }
    fVar2 = *(float *)(unaff_RBX + 0x104);
    *(undefined8 *)(unaff_RBP + 0x67) = 0;
    fVar12 = fVar2 + 1.0;
    fVar11 = fVar15;
    fVar10 = fVar12;
    func_0x000180124080(unaff_RBP + 0x67,0);
    lVar9 = *(longlong *)(in_R10 + 0x1af8);
    *(undefined8 *)(lVar9 + 0x144) = 0;
    *(float *)(lVar9 + 0x14c) = fVar13;
    *(float *)(lVar9 + 0x150) = fVar2;
    *(float *)(lVar9 + 0x154) = fVar11;
    *(float *)(lVar9 + 0x158) = fVar10;
    lVar3 = *(longlong *)(in_R10 + 0x1af8);
    *(float *)(unaff_RBP + -0x19) = fVar13;
    *(float *)(unaff_RBP + -0x15) = fVar2;
    *(float *)(unaff_RBP + -0x11) = fVar11;
    *(float *)(unaff_RBP + -0xd) = fVar10;
    if (((((*(float *)(lVar3 + 0x22c) <= fVar12 && fVar12 != *(float *)(lVar3 + 0x22c)) &&
          (fVar2 < *(float *)(lVar3 + 0x234))) &&
         (*(float *)(lVar3 + 0x228) <= fVar15 && fVar15 != *(float *)(lVar3 + 0x228))) &&
        (fVar13 < *(float *)(lVar3 + 0x230))) || (*(char *)(in_R10 + 0x2e38) != '\0')) {
      cVar7 = FUN_180128040(unaff_RBP + -0x19,unaff_RBP + -0x11,1);
      if (cVar7 != '\0') {
        *(uint *)(lVar9 + 0x148) = *(uint *)(lVar9 + 0x148) | 1;
      }
      uVar8 = *(undefined4 *)(in_R10 + 0x1878);
      uVar5 = *(undefined4 *)(in_R10 + 0x187c);
      uVar6 = *(undefined4 *)(in_R10 + 0x1880);
      fVar11 = *(float *)(in_R10 + 0x1884);
      *(float *)(unaff_RBP + 0x67) = fVar15;
      *(undefined4 *)(unaff_RBP + -9) = uVar8;
      *(undefined4 *)(unaff_RBP + -5) = uVar5;
      *(undefined4 *)(unaff_RBP + -1) = uVar6;
      *(float *)(unaff_RBP + 3) = fVar11;
      fVar13 = *(float *)(in_R10 + 0x1628);
      *(float *)(unaff_RBP + 0x6b) = fVar2;
      *(float *)(unaff_RBP + 3) = fVar11 * fVar13;
      uVar8 = func_0x000180121e20(unaff_RBP + -9);
      FUN_180293d20(*(undefined8 *)(unaff_RBX + 0x2e8),unaff_RBP + -0x19,unaff_RBP + 0x67,uVar8,
                    0x3f800000);
      if (*(char *)(unaff_RDI + 0x2e38) != '\0') {
        FUN_18013c800(unaff_RBP + -0x19,&UNK_180a06350,0);
      }
      if (*(longlong *)(unaff_RBX + 0x210) != 0) {
        FUN_180134400();
        *(undefined4 *)(*(longlong *)(unaff_RBX + 0x210) + 0x1c) =
             *(undefined4 *)(unaff_RBX + 0x104);
      }
    }
    else if (*(longlong *)(unaff_RBX + 0x210) != 0) {
      FUN_180134400();
    }
  }
  return;
}





// 函数: void FUN_18011260c(void)
void FUN_18011260c(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180112630(undefined8 *param_1,ulonglong param_2,int param_3,float *param_4,
                       float *param_5,float param_6,float param_7,byte param_8,char param_9)

{
  uint *puVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  undefined8 uStack_68;
  undefined4 uStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar6 = _DAT_180c8a9b0;
  lVar5 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  uVar4 = *(uint *)(lVar5 + 0x1a8);
  *(uint *)(lVar5 + 0x1a8) = uVar4 | 0x18;
  uVar10 = FUN_180124190(param_1,param_2,0);
  *(uint *)(lVar5 + 0x1a8) = uVar4;
  if ((char)uVar10 != '\0') {
    if (param_3 != 1) {
      fVar14 = 4.0;
      uStack_68 = 0x40800000;
    }
    else {
      fVar14 = 0.0;
      fStack_5c = 4.0;
      uStack_60 = 0;
    }
    uStack_58._0_4_ = (float)*param_1;
    fStack_50 = (float)param_1[1];
    uStack_58._0_4_ = (float)uStack_58 - fVar14;
    iVar13 = (int)param_2;
    pfVar11 = (float *)((longlong)&uStack_68 + 4);
    if (param_3 == 1) {
      pfVar11 = &fStack_5c;
    }
    uStack_58._4_4_ = (float)((ulonglong)*param_1 >> 0x20);
    fStack_4c = (float)((ulonglong)param_1[1] >> 0x20);
    uStack_58._4_4_ = uStack_58._4_4_ - *pfVar11;
    _fStack_50 = CONCAT44(fStack_4c + *pfVar11,fStack_50 + fVar14);
    FUN_18010f170(&uStack_58,param_2 & 0xffffffff,&param_9,&param_8,0x60);
    bVar7 = param_8;
    if (*(int *)(lVar6 + 0x1b2c) != iVar13) {
      iVar8 = *(int *)(*(longlong *)(lVar6 + 0x1af8) + 0x144);
      if (*(int *)(lVar6 + 0x1b18) == iVar8) {
        *(undefined1 *)(lVar6 + 0x1b1c) = 1;
        iVar8 = *(int *)(*(longlong *)(lVar6 + 0x1af8) + 0x144);
      }
      if (*(int *)(lVar6 + 0x1b2c) == iVar8) {
        *(undefined1 *)(lVar6 + 0x1b3d) = 1;
      }
    }
    if ((param_8 != 0) ||
       (((*(int *)(lVar6 + 0x1b18) == iVar13 && (*(int *)(lVar6 + 0x1b20) == iVar13)) &&
        (0.04 < *(float *)(lVar6 + 0x1b24) || *(float *)(lVar6 + 0x1b24) == 0.04)))) {
      *(uint *)(lVar6 + 0x1dcc) = (param_3 != 1) + 3;
    }
    uStack_48 = *param_1;
    uStack_40 = param_1[1];
    if (param_8 == 0) {
      if ((param_9 == '\0') ||
         (lVar12 = 0x1c, *(float *)(lVar6 + 0x1b24) <= 0.04 && *(float *)(lVar6 + 0x1b24) != 0.04))
      {
        lVar12 = 0x1b;
      }
    }
    else {
      if (param_3 == 1) {
        uStack_58._4_4_ = (*(float *)(lVar6 + 0x11c) - *(float *)(lVar6 + 0x1b4c)) - uStack_58._4_4_
        ;
      }
      else {
        uStack_58._4_4_ =
             (*(float *)(lVar6 + 0x118) - *(float *)(lVar6 + 0x1b48)) - (float)uStack_58;
      }
      param_6 = *param_4 - param_6;
      if (param_6 <= 0.0) {
        param_6 = 0.0;
      }
      fVar14 = -param_6;
      if (-param_6 <= uStack_58._4_4_) {
        fVar14 = uStack_58._4_4_;
      }
      param_7 = *param_5 - param_7;
      if (param_7 <= 0.0) {
        param_7 = 0.0;
      }
      if (param_7 <= fVar14) {
        fVar14 = param_7;
      }
      if (fVar14 != 0.0) {
        *param_4 = *param_4 + fVar14;
        *param_5 = *param_5 - fVar14;
        if (param_3 == 0) {
          uStack_68 = (ulonglong)(uint)fVar14;
        }
        else {
          fStack_5c = fVar14;
          fVar14 = 0.0;
          uStack_60 = 0;
        }
        *(undefined1 *)(lVar6 + 0x1b3e) = 1;
        pfVar11 = &fStack_5c;
        if (param_3 == 0) {
          pfVar11 = (float *)((longlong)&uStack_68 + 4);
        }
        uStack_48._4_4_ = (float)((ulonglong)uStack_48 >> 0x20);
        uStack_40._4_4_ = (float)((ulonglong)uStack_40 >> 0x20);
        uStack_48 = CONCAT44(uStack_48._4_4_ + *pfVar11,(float)uStack_48 + fVar14);
        fVar3 = *pfVar11;
        puVar1 = (uint *)(*(longlong *)(lVar6 + 0x1af8) + 0x148);
        *puVar1 = *puVar1 | 4;
        uStack_40 = CONCAT44(uStack_40._4_4_ + fVar3,(float)uStack_40 + fVar14);
      }
      lVar12 = 0x1d;
    }
    puVar2 = (undefined8 *)(lVar6 + 0x1628 + (lVar12 + 10) * 0x10);
    uStack_58 = *puVar2;
    _fStack_50 = CONCAT44(*(float *)((longlong)puVar2 + 0xc) * *(float *)(lVar6 + 0x1628),
                          *(undefined4 *)(puVar2 + 1));
    uVar9 = func_0x000180121e20(&uStack_58);
    FUN_180293f50(*(undefined8 *)(lVar5 + 0x2e8),&uStack_48,&uStack_40,uVar9,
                  *(undefined4 *)(lVar6 + 0x1664),0xf);
    uVar10 = (ulonglong)bVar7;
  }
  return uVar10;
}



char FUN_180112693(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  longlong lVar9;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  float *unaff_R12;
  longlong unaff_R13;
  int unaff_R14D;
  undefined8 *unaff_R15;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = unaff_R15[1];
  *(undefined8 *)(unaff_RBP + -0x30) = *unaff_R15;
  *(undefined8 *)(unaff_RBP + -0x28) = uVar5;
  if (unaff_ESI != 1) {
    fVar10 = 4.0;
    *(undefined8 *)(unaff_RBP + -0x40) = 0x40800000;
  }
  else {
    fVar10 = 0.0;
    *(undefined4 *)(unaff_RBP + -0x34) = 0x40800000;
    *(undefined4 *)(unaff_RBP + -0x38) = 0;
  }
  pfVar8 = (float *)(unaff_RBP + -0x3c);
  if (unaff_ESI == 1) {
    pfVar8 = (float *)(unaff_RBP + -0x34);
  }
  *(float *)(unaff_RBP + -0x30) = *(float *)(unaff_RBP + -0x30) - fVar10;
  fVar11 = *pfVar8;
  *(float *)(unaff_RBP + -0x28) = *(float *)(unaff_RBP + -0x28) + fVar10;
  *(float *)(unaff_RBP + -0x2c) = *(float *)(unaff_RBP + -0x2c) - fVar11;
  *(float *)(unaff_RBP + -0x24) = *(float *)(unaff_RBP + -0x24) + *pfVar8;
  FUN_18010f170(unaff_RBP + -0x30,unaff_R14D,unaff_RBP + 0x70,unaff_RBP + 0x68,0x60);
  if (*(int *)(unaff_RDI + 0x1b2c) != unaff_R14D) {
    iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x144);
    if (*(int *)(unaff_RDI + 0x1b18) == iVar6) {
      *(undefined1 *)(unaff_RDI + 0x1b1c) = 1;
      iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x144);
    }
    if (*(int *)(unaff_RDI + 0x1b2c) == iVar6) {
      *(undefined1 *)(unaff_RDI + 0x1b3d) = 1;
    }
  }
  cVar3 = *(char *)(unaff_RBP + 0x68);
  if ((cVar3 != '\0') ||
     (((*(int *)(unaff_RDI + 0x1b18) == unaff_R14D && (*(int *)(unaff_RDI + 0x1b20) == unaff_R14D))
      && (0.04 < *(float *)(unaff_RDI + 0x1b24) || *(float *)(unaff_RDI + 0x1b24) == 0.04)))) {
    *(uint *)(unaff_RDI + 0x1dcc) = (unaff_ESI != 1) + 3;
  }
  uVar5 = unaff_R15[1];
  *(undefined8 *)(unaff_RBP + -0x20) = *unaff_R15;
  *(undefined8 *)(unaff_RBP + -0x18) = uVar5;
  if (cVar3 == '\0') {
    if ((*(char *)(unaff_RBP + 0x70) == '\0') ||
       (lVar9 = 0x1c,
       *(float *)(unaff_RDI + 0x1b24) <= 0.04 && *(float *)(unaff_RDI + 0x1b24) != 0.04)) {
      lVar9 = 0x1b;
    }
  }
  else {
    if (unaff_ESI == 1) {
      fVar10 = (*(float *)(unaff_RDI + 0x11c) - *(float *)(unaff_RDI + 0x1b4c)) -
               *(float *)(unaff_RBP + -0x2c);
    }
    else {
      fVar10 = (*(float *)(unaff_RDI + 0x118) - *(float *)(unaff_RDI + 0x1b48)) -
               *(float *)(unaff_RBP + -0x30);
    }
    pfVar8 = *(float **)(unaff_RBP + 0x50);
    fVar11 = *unaff_R12 - *(float *)(unaff_RBP + 0x58);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar12 = -fVar11;
    if (-fVar11 <= fVar10) {
      fVar12 = fVar10;
    }
    fVar10 = *pfVar8 - *(float *)(unaff_RBP + 0x60);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (fVar10 <= fVar12) {
      fVar12 = fVar10;
    }
    if (fVar12 != 0.0) {
      *unaff_R12 = *unaff_R12 + fVar12;
      *pfVar8 = *pfVar8 - fVar12;
      if (unaff_ESI == 0) {
        *(float *)(unaff_RBP + -0x40) = fVar12;
        *(undefined4 *)(unaff_RBP + -0x3c) = 0;
      }
      else {
        *(float *)(unaff_RBP + -0x34) = fVar12;
        fVar12 = 0.0;
        *(undefined4 *)(unaff_RBP + -0x38) = 0;
      }
      fVar10 = *(float *)(unaff_RBP + -0x20);
      fVar11 = *(float *)(unaff_RBP + -0x18);
      *(undefined1 *)(unaff_RDI + 0x1b3e) = 1;
      pfVar8 = (float *)(unaff_RBP + -0x34);
      if (unaff_ESI == 0) {
        pfVar8 = (float *)(unaff_RBP + -0x3c);
      }
      *(float *)(unaff_RBP + -0x20) = fVar10 + fVar12;
      fVar10 = *pfVar8;
      *(float *)(unaff_RBP + -0x18) = fVar11 + fVar12;
      *(float *)(unaff_RBP + -0x1c) = *(float *)(unaff_RBP + -0x1c) + fVar10;
      fVar10 = *(float *)(unaff_RBP + -0x14);
      fVar11 = *pfVar8;
      puVar1 = (uint *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
      *(float *)(unaff_RBP + -0x14) = fVar10 + fVar11;
    }
    lVar9 = 0x1d;
  }
  puVar2 = (undefined4 *)(unaff_RDI + 0x1628 + (lVar9 + 10) * 0x10);
  uVar7 = puVar2[1];
  uVar4 = puVar2[2];
  fVar10 = (float)puVar2[3];
  *(undefined4 *)(unaff_RBP + -0x30) = *puVar2;
  *(undefined4 *)(unaff_RBP + -0x2c) = uVar7;
  *(undefined4 *)(unaff_RBP + -0x28) = uVar4;
  *(float *)(unaff_RBP + -0x24) = fVar10;
  *(float *)(unaff_RBP + -0x24) = fVar10 * *(float *)(unaff_RDI + 0x1628);
  uVar7 = func_0x000180121e20(unaff_RBP + -0x30);
  FUN_180293f50(*(undefined8 *)(unaff_R13 + 0x2e8),unaff_RBP + -0x20,unaff_RBP + -0x18,uVar7,
                *(undefined4 *)(unaff_RDI + 0x1664));
  return cVar3;
}





// 函数: void FUN_180112934(void)
void FUN_180112934(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801129b0(char *param_1,float *param_2,uint param_3)
void FUN_1801129b0(char *param_1,float *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  byte *pbVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  float *pfVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_178 [32];
  float *pfStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined8 uStack_140;
  char cStack_138;
  char acStack_137 [3];
  float fStack_134;
  float fStack_130;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  float fStack_114;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char *pcStack_e8;
  byte bStack_e0;
  byte abStack_df [15];
  ulonglong uStack_d0;
  
  lVar5 = _DAT_180c8a9b0;
  uStack_d0 = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  fStack_128 = *(float *)(_DAT_180c8a9b0 + 0x1be0);
  *(undefined4 *)(_DAT_180c8a9b0 + 0x1be0) = 0;
  *(undefined1 *)(*(longlong *)(lVar5 + 0x1af8) + 0xb1) = 1;
  lVar17 = *(longlong *)(lVar5 + 0x1af8);
  uStack_110 = param_2;
  pcStack_e8 = param_1;
  if (*(char *)(lVar17 + 0xb4) == '\0') {
    iVar11 = FUN_180121250(param_1,0,
                           *(undefined4 *)
                            (*(longlong *)(lVar17 + 0x220) + -4 +
                            (longlong)*(int *)(lVar17 + 0x218) * 4));
    if (*(int *)(lVar5 + 0x1b2c) == iVar11) {
      *(int *)(lVar5 + 0x1b34) = iVar11;
    }
    if (*(int *)(lVar5 + 0x1b30) == iVar11) {
      *(undefined1 *)(lVar5 + 0x1b3f) = 1;
    }
    fStack_134 = (float)(param_3 & 0x20);
    if (fStack_134 == 0.0) {
      fVar26 = *(float *)(lVar5 + 0x1660) + *(float *)(lVar5 + 0x1660) + *(float *)(lVar5 + 0x19f8);
    }
    else {
      fVar26 = 0.0;
    }
    pcVar14 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar14 != '\0') {
        if (((*pcVar14 == '#') && (pcVar14[1] == '#')) ||
           (pcVar14 = pcVar14 + 1, pcVar14 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar21 = *(float **)(lVar5 + 0x19f0);
    fVar25 = *(float *)(lVar5 + 0x19f8);
    if (param_1 == pcVar14) {
      fVar23 = 0.0;
    }
    else {
      uStack_140 = 0;
      pfStack_158 = (float *)CONCAT44(pfStack_158._4_4_,0xbf800000);
      pcStack_150 = param_1;
      pcStack_148 = pcVar14;
      FUN_180297340(pfVar21,&uStack_120,fVar25,0x7f7fffff);
      fVar23 = (float)uStack_120;
      if (0.0 < (float)uStack_120) {
        fVar23 = (float)uStack_120 - fVar25 / *pfVar21;
      }
      fVar23 = (float)(int)(fVar23 + 0.95);
      fVar25 = uStack_120._4_4_;
    }
    uVar20 = param_3 & 0x40;
    fVar24 = fVar26;
    if (uVar20 == 0) {
      fVar24 = (float)func_0x00018012d6a0();
    }
    fStack_108 = *(float *)(lVar17 + 0x100);
    fStack_104 = *(float *)(lVar17 + 0x104);
    uStack_f8 = *(undefined8 *)(lVar17 + 0x100);
    fStack_fc = *(float *)(lVar5 + 0x1660) + *(float *)(lVar5 + 0x1660) + fVar25 + fStack_104;
    uStack_f0 = CONCAT44(fStack_fc,fStack_108 + fVar24);
    if (fVar23 <= 0.0) {
      fStack_100 = 0.0;
    }
    else {
      fStack_100 = fVar23 + *(float *)(lVar5 + 0x1674);
    }
    fStack_100 = fStack_108 + fVar24 + fStack_100;
    uStack_120 = CONCAT44(fStack_fc - fStack_104,fStack_100 - fStack_108);
    func_0x000180124080(&uStack_120);
    cVar10 = FUN_180124190(&fStack_108,iVar11,&uStack_f8);
    if (cVar10 != '\0') {
      pfStack_158 = (float *)((ulonglong)pfStack_158 & 0xffffffff00000000);
      acStack_137[0] = FUN_18010f170(&uStack_f8,iVar11,&cStack_138,acStack_137);
      uVar8 = uStack_f0;
      uVar18 = uStack_f8;
      if ((*(int *)(lVar5 + 0x1bc0) < *(int *)(lVar5 + 0x1bb0)) &&
         (*(int *)(*(longlong *)(lVar5 + 0x1bb8) + (longlong)*(int *)(lVar5 + 0x1bc0) * 0x30) ==
          iVar11)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      fVar25 = (float)uStack_f0;
      fVar9 = uStack_f0._4_4_;
      lVar15 = 0x110;
      if (cStack_138 != '\0') {
        lVar15 = 0x120;
      }
      fVar6 = (float)uStack_f8;
      fVar7 = uStack_f8._4_4_;
      fVar27 = (float)uStack_f0 - fVar26;
      fStack_108 = (float)uStack_f8;
      puVar1 = (undefined4 *)(lVar15 + 0x1628 + lVar5);
      uStack_120._0_4_ = (float)*puVar1;
      uStack_120._4_4_ = (float)puVar1[1];
      uStack_118 = puVar1[2];
      fStack_104 = uStack_f8._4_4_;
      fStack_114 = (float)puVar1[3] * *(float *)(lVar5 + 0x1628);
      fStack_fc = uStack_f0._4_4_;
      fStack_100 = fVar27;
      uVar12 = func_0x000180121e20(&uStack_120);
      uStack_120 = CONCAT44(uStack_120._4_4_,uVar12);
      lVar15 = lVar5;
      if (iVar11 == *(int *)(lVar5 + 0x1ca0)) {
        FUN_1801230e0(&uStack_f8,1);
        lVar15 = _DAT_180c8a9b0;
        uVar12 = (float)uStack_120;
      }
      if (uVar20 == 0) {
        pcStack_150 = (char *)CONCAT44(pcStack_150._4_4_,5);
        pfStack_158 = (float *)CONCAT44(pfStack_158._4_4_,*(undefined4 *)(lVar5 + 0x1664));
        uStack_120 = CONCAT44(fVar9,fVar27);
        FUN_180293f50(*(undefined8 *)(lVar17 + 0x2e8),&uStack_f8,&uStack_120,uVar12);
        lVar15 = _DAT_180c8a9b0;
      }
      if (fStack_134 == 0.0) {
        uVar12 = *(undefined4 *)(lVar5 + 0x1664);
        uVar22 = 10;
        if (fVar24 <= fVar26) {
          uVar22 = 0xf;
        }
        if ((bVar3) || (lVar16 = 0x1f0, cStack_138 != '\0')) {
          lVar16 = 0x200;
        }
        puVar2 = (undefined8 *)(lVar15 + 0x1628 + lVar16);
        uStack_120 = *puVar2;
        uStack_118 = *(undefined4 *)(puVar2 + 1);
        fStack_114 = *(float *)((longlong)puVar2 + 0xc) * *(float *)(lVar15 + 0x1628);
        fStack_130 = fVar7;
        fStack_134 = fVar27;
        uVar13 = func_0x000180121e20(&uStack_120);
        pcStack_150 = (char *)CONCAT44(pcStack_150._4_4_,uVar22);
        pfStack_158 = (float *)CONCAT44(pfStack_158._4_4_,uVar12);
        FUN_180293f50(*(undefined8 *)(lVar17 + 0x2e8),&fStack_134,&uStack_f0,uVar13);
        FUN_180122c80(CONCAT44(fVar7 + *(float *)(lVar5 + 0x1660),
                               fVar27 + *(float *)(lVar5 + 0x1660)),3,0x3f800000);
      }
      uStack_f8 = uVar18;
      uStack_f0 = uVar8;
      FUN_180122b10(uVar18,uVar8,*(undefined4 *)(lVar5 + 0x1664));
      lVar15 = _DAT_180c8a9b0;
      if ((uStack_110 != (float *)0x0) && (uVar20 == 0)) {
        uStack_120 = 0;
        fStack_134 = fVar6 + *(float *)(lVar5 + 0x165c);
        fStack_130 = fVar7 + *(float *)(lVar5 + 0x1660);
        pfVar21 = uStack_110;
        if (uStack_110 != (float *)0xffffffffffffffff) {
          while (*(char *)pfVar21 != '\0') {
            if (((*(char *)pfVar21 == '#') && (*(char *)((longlong)pfVar21 + 1) == '#')) ||
               (pfVar21 = (float *)((longlong)pfVar21 + 1), pfVar21 == (float *)0xffffffffffffffff))
            break;
          }
        }
        if ((int)pfVar21 != (int)uStack_110) {
          pcStack_148 = (char *)&uStack_120;
          uStack_140 = 0;
          pcStack_150 = (char *)0x0;
          pfStack_158 = pfVar21;
          FUN_1801224c0(*(undefined8 *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x2e8),&fStack_134,
                        &fStack_100,uStack_110);
          if (*(char *)(lVar15 + 0x2e38) != '\0') {
            FUN_18013c800(&fStack_134,uStack_110,pfVar21);
          }
        }
      }
      if (0.0 < fVar23) {
        FUN_180122320(CONCAT44(fVar7 + *(float *)(lVar5 + 0x1660),
                               fVar25 + *(float *)(lVar5 + 0x1674)),pcStack_e8,0,1);
      }
      if ((acStack_137[0] == '\0') && (*(int *)(lVar5 + 0x1ca4) != iVar11)) {
        if (!bVar3) goto LAB_180112f8f;
      }
      else if (!bVar3) {
        if (*(int *)(lVar17 + 0x16c) == 0) {
          *(int *)(lVar17 + 0x3c8) = iVar11;
        }
        FUN_18012eb50(iVar11);
      }
      if (fStack_128 == 0.0) {
        uVar20 = param_3 | 4;
        if ((param_3 & 0x1e) != 0) {
          uVar20 = param_3;
        }
        if ((uVar20 & 4) == 0) {
          if ((uVar20 & 2) == 0) {
            uVar18 = 0xffffffff;
            if ((uVar20 & 8) != 0) {
              uVar18 = 0x14;
            }
          }
          else {
            uVar18 = 4;
          }
        }
        else {
          uVar18 = 8;
        }
        fStack_fc = (float)func_0x000180112960(uVar18);
        lVar17 = _DAT_180c8a9b0;
        *(undefined4 *)(_DAT_180c8a9b0 + 0x1be0) = 1;
        *(undefined8 *)(lVar17 + 0x1c28) = 0;
        *(undefined8 *)(lVar17 + 0x1c30) = 0;
        fStack_104 = 0.0;
        fStack_100 = 3.4028235e+38;
        *(float *)(lVar17 + 0x1c18) = fVar24;
        *(undefined4 *)(lVar17 + 0x1c1c) = 0;
        *(undefined4 *)(lVar17 + 0x1c20) = 0x7f7fffff;
        *(float *)(lVar17 + 0x1c24) = fStack_fc;
        fStack_108 = fVar24;
      }
      else {
        fVar26 = *(float *)(lVar5 + 0x1c18);
        if (*(float *)(lVar5 + 0x1c18) <= fVar24) {
          fVar26 = fVar24;
        }
        *(float *)(lVar5 + 0x1be0) = fStack_128;
        *(float *)(lVar5 + 0x1c18) = fVar26;
        uVar20 = param_3;
      }
      FUN_180121200(&bStack_e0,0x10,&UNK_180a06388,*(undefined4 *)(lVar5 + 0x1bc0));
      uVar19 = 0xffffffff;
      pbVar4 = abStack_df;
      while (bStack_e0 != 0) {
        if (((bStack_e0 == 0x23) && (*pbVar4 == 0x23)) && (pbVar4[1] == 0x23)) {
          uVar19 = 0xffffffff;
        }
        uVar19 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar19 & 0xff) ^ (ulonglong)bStack_e0) * 4)
                 ^ uVar19 >> 8;
        bStack_e0 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      }
      lVar17 = FUN_180121fa0(_DAT_180c8a9b0 + 0x1ae0,~uVar19);
      if ((lVar17 != 0) && (*(char *)(lVar17 + 0xb0) != '\0')) {
        if (*(char *)(lVar17 + 0xb2) == '\0') {
          if (((*(char *)(lVar17 + 0xb6) == '\0') || (*(int *)(lVar17 + 0xdc) != 0)) ||
             (*(int *)(lVar17 + 0xd8) < 1)) {
            fVar26 = *(float *)(lVar17 + 0x68);
            if (fVar26 == 0.0) {
              fVar26 = (*(float *)(lVar17 + 0x118) - *(float *)(lVar17 + 0x40)) +
                       *(float *)(lVar17 + 0x8c);
            }
            fVar25 = *(float *)(lVar17 + 0x6c);
            if (fVar25 == 0.0) {
              fVar25 = (*(float *)(lVar17 + 0x11c) - *(float *)(lVar17 + 0x44)) +
                       *(float *)(lVar17 + 0x90);
            }
            fStack_128 = (float)(int)fVar26 + *(float *)(lVar17 + 0x70);
            fStack_124 = (float)(int)fVar25 + *(float *)(lVar17 + 0x74);
          }
          else {
            fStack_128 = *(float *)(lVar17 + 0x60);
            fStack_124 = *(float *)(lVar17 + 100);
          }
        }
        else {
          fStack_128 = *(float *)(lVar17 + 0x60);
          fStack_124 = *(float *)(lVar17 + 100);
        }
        if ((*(uint *)(lVar17 + 0xc) & 0x2000000) == 0) {
          pfVar21 = (float *)FUN_180129220(&fStack_134,lVar17,&fStack_128);
        }
        else {
          fStack_134 = fStack_128;
          pfVar21 = &fStack_134;
          fStack_130 = fStack_124;
        }
        FUN_180128fd0(&pcStack_e8,lVar17,*(undefined8 *)pfVar21);
        if ((uVar20 & 1) != 0) {
          *(undefined4 *)(lVar17 + 0xd4) = 0;
        }
        FUN_18012f580(&fStack_108,lVar17);
        pcStack_150 = (char *)&uStack_f8;
        pcStack_148 = (char *)CONCAT44(pcStack_148._4_4_,1);
        pfStack_158 = &fStack_108;
        uStack_110 = (float *)CONCAT44(fVar9,fVar6);
        FUN_18012f260(&fStack_128,&uStack_110,&pcStack_e8,lVar17 + 0xd4);
        lVar17 = _DAT_180c8a9b0;
        *(ulonglong *)(_DAT_180c8a9b0 + 0x1bf4) = CONCAT44(fStack_124,fStack_128);
        *(undefined8 *)(lVar17 + 0x1bfc) = 0;
        *(undefined4 *)(lVar17 + 0x1bd0) = 1;
        *(undefined1 *)(lVar17 + 0x1c14) = 1;
      }
      uStack_110 = (float *)CONCAT44(*(undefined4 *)(lVar5 + 0x1630),*(undefined4 *)(lVar5 + 0x165c)
                                    );
      FUN_18012da40(1,&uStack_110);
      cVar10 = FUN_1801299b0(&bStack_e0,0,0x4000143);
      FUN_18012dad0(1);
      if (cVar10 == '\0') {
        FUN_18012f0c0();
      }
    }
  }
LAB_180112f8f:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d0 ^ (ulonglong)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



