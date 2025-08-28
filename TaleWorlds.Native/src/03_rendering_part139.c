#include "TaleWorlds.Native.Split.h"

// 03_rendering_part139.c - 8 个函数

// 函数: void FUN_18034ef70(undefined8 *param_1)
void FUN_18034ef70(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1dee0;
  plVar1 = puVar3 + 0xe;
  *plVar1 = (longlong)&UNK_18098bcb0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *plVar1 = (longlong)&UNK_180a3c3e0;
  puVar3[0x11] = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  puVar3[0x12] = 0;
  plVar5 = plVar1;
  (**(code **)(*plVar1 + 0x10))(plVar1,&DAT_18098bc73);
  puStack_98 = &UNK_180a3c3e0;
  uStack_80 = 0;
  puStack_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_90 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
  *puVar3 = 0x6d614e2068746150;
  *(undefined2 *)(puVar3 + 1) = 0x65;
  uStack_88 = 9;
  FUN_1803460a0(param_1,&puStack_98,plVar1,0,uVar4,plVar5);
  puStack_98 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



undefined8 * FUN_18034f1f0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a1dee0;
  plVar1 = (longlong *)param_1[0x12];
  param_1[0x12] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &UNK_180a3c3e0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0xa0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034f2c0(longlong param_1)
void FUN_18034f2c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 unaff_XMM6_Da;
  float fVar10;
  undefined4 unaff_XMM6_Db;
  float fVar11;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_40;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x90) != 0) && (*(int *)(*(longlong *)(param_1 + 0x90) + 8) == 1)) {
    plVar1 = *(longlong **)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (plVar1 != (longlong *)0x0) {
      uStack_40 = 0x18034f30b;
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  lVar4 = _DAT_180c86878;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uStack_148 = *(undefined8 *)(lVar2 + 0x70);
    uStack_140 = *(undefined8 *)(lVar2 + 0x78);
    uStack_138 = *(undefined8 *)(lVar2 + 0x80);
    uStack_130 = *(undefined8 *)(lVar2 + 0x88);
    fVar16 = *(float *)(lVar2 + 0x90);
    fVar12 = *(float *)(lVar2 + 0x94);
    fVar13 = *(float *)(lVar2 + 0x98);
    uVar3 = *(undefined4 *)(lVar2 + 0x9c);
    fStack_128 = fVar16;
    fStack_124 = fVar12;
    fStack_120 = fVar13;
    uStack_11c = uVar3;
    FUN_1804664b0(*(longlong *)(param_1 + 0x90),&uStack_e8,_DAT_180c86878 + 0x1b8);
    fStack_118 = fStack_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
    uStack_10c = uStack_ac;
    if (*(char *)(param_1 + 0x98) != '\0') {
      uStack_18 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      uStack_40 = CONCAT44(unaff_XMM9_Dd,unaff_XMM9_Dc);
      FUN_180085020(&uStack_148,&fStack_f8);
      fVar11 = fStack_b8 - *(float *)(lVar4 + 0x1b8);
      fVar10 = fStack_b4 - *(float *)(lVar4 + 0x1bc);
      fVar9 = fStack_b0 - *(float *)(lVar4 + 0x1c0);
      fVar5 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar8 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar5 = fVar12 * fVar12 + fVar16 * fVar16 + fVar13 * fVar13;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar13 = fVar13 * fVar5;
      fVar16 = fVar16 * fVar5;
      fVar12 = fVar12 * fVar5;
      fVar15 = fVar12 * fVar9 * fVar8 - fVar13 * fVar10 * fVar8;
      fVar14 = fVar13 * fVar11 * fVar8 - fVar16 * fVar9 * fVar8;
      uStack_fc = 0x7f7fffff;
      fVar11 = fVar16 * fVar10 * fVar8 - fVar12 * fVar11 * fVar8;
      fVar5 = fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      fVar14 = fVar14 * fVar5;
      fVar11 = fVar11 * fVar5;
      fVar15 = fVar15 * fVar5;
      fVar10 = fVar13 * fVar14 - fVar12 * fVar11;
      fVar9 = fVar11 * fVar16 - fVar13 * fVar15;
      fVar8 = fVar12 * fVar15 - fVar14 * fVar16;
      fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
      uStack_148 = CONCAT44(fStack_f8 * fVar14,fStack_f8 * fVar15);
      uStack_130 = CONCAT44(0x7f7fffff,fVar8 * fVar5 * fStack_f4);
      uStack_140 = CONCAT44(0x7f7fffff,fStack_f8 * fVar11);
      uStack_138 = CONCAT44(fVar9 * fVar5 * fStack_f4,fStack_f4 * fVar10 * fVar5);
      fStack_128 = fStack_f0 * fVar16;
      fStack_124 = fVar12 * fStack_f0;
      fStack_120 = fVar13 * fStack_f0;
      uStack_11c = uVar3;
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
      uStack_148 = uStack_e8;
      uStack_140 = uStack_e0;
      fStack_128 = fStack_c8;
      fStack_124 = fStack_c4;
      fStack_120 = fStack_c0;
      uStack_11c = uStack_bc;
      uStack_138 = uStack_d8;
      uStack_130 = uStack_d0;
      fStack_118 = fStack_b8;
      fStack_114 = fStack_b4;
      fStack_110 = fStack_b0;
      uStack_10c = uStack_ac;
    }
    FUN_1802ea790(*(undefined8 *)(param_1 + 0x18),&uStack_148);
  }
  return;
}





// 函数: void FUN_18034f320(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034f320(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *aplStackX_10 [3];
  
  puVar3 = (undefined8 *)
           FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,aplStackX_10,
                         param_1 + 0x70,param_4,0xfffffffffffffffe);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plVar2 = *(longlong **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034f3a0(undefined8 param_1)
void FUN_18034f3a0(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  undefined **appuStack_1c0 [2];
  undefined8 uStack_1b0;
  undefined *apuStack_1a8 [11];
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 9;
  strcpy_s(auStack_130,0x40,&DAT_180a1d578);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 0;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x10;
  strcpy_s(auStack_d0,0x40,&DAT_180a1dec0);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 3;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xb;
  strcpy_s(auStack_70,0x40,&DAT_180a1deb0);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 3;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}





// 函数: void FUN_18034f5c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_18034f5c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *aplStackX_18 [2];
  
  if (*(int *)(param_2 + 0x10) == 9) {
    iVar3 = strcmp(*(undefined8 *)(param_2 + 8),&DAT_180a1d578,param_3,param_4,0xfffffffffffffffe);
    if (iVar3 == 0) {
      puVar4 = (undefined8 *)
               FUN_180389090(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20) + 0x2970,
                             aplStackX_18,param_1 + 0x70);
      uVar1 = *puVar4;
      *puVar4 = 0;
      plVar2 = *(longlong **)(param_1 + 0x90);
      *(undefined8 *)(param_1 + 0x90) = uVar1;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      if (aplStackX_18[0] != (longlong *)0x0) {
        (**(code **)(*aplStackX_18[0] + 0x38))();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034f660(longlong param_1)
void FUN_18034f660(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  
  lVar3 = _DAT_180c86878;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uStack_148 = *(undefined8 *)(lVar1 + 0x70);
    uStack_140 = *(undefined8 *)(lVar1 + 0x78);
    uStack_138 = *(undefined8 *)(lVar1 + 0x80);
    uStack_130 = *(undefined8 *)(lVar1 + 0x88);
    fVar15 = *(float *)(lVar1 + 0x90);
    fVar11 = *(float *)(lVar1 + 0x94);
    fVar12 = *(float *)(lVar1 + 0x98);
    uVar2 = *(undefined4 *)(lVar1 + 0x9c);
    fStack_128 = fVar15;
    fStack_124 = fVar11;
    fStack_120 = fVar12;
    uStack_11c = uVar2;
    FUN_1804664b0(*(longlong *)(param_1 + 0x90),&uStack_e8,_DAT_180c86878 + 0x1b8);
    fStack_118 = fStack_b8;
    fStack_114 = fStack_b4;
    fStack_110 = fStack_b0;
    uStack_10c = uStack_ac;
    if (*(char *)(param_1 + 0x98) != '\0') {
      FUN_180085020(&uStack_148,&fStack_f8);
      fVar10 = fStack_b8 - *(float *)(lVar3 + 0x1b8);
      fVar9 = fStack_b4 - *(float *)(lVar3 + 0x1bc);
      fVar8 = fStack_b0 - *(float *)(lVar3 + 0x1c0);
      fVar4 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar7 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar4 = fVar11 * fVar11 + fVar15 * fVar15 + fVar12 * fVar12;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar12 = fVar12 * fVar4;
      fVar15 = fVar15 * fVar4;
      fVar11 = fVar11 * fVar4;
      fVar14 = fVar11 * fVar8 * fVar7 - fVar12 * fVar9 * fVar7;
      fVar13 = fVar12 * fVar10 * fVar7 - fVar15 * fVar8 * fVar7;
      uStack_fc = 0x7f7fffff;
      fVar10 = fVar15 * fVar9 * fVar7 - fVar11 * fVar10 * fVar7;
      fVar4 = fVar14 * fVar14 + fVar13 * fVar13 + fVar10 * fVar10;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      fVar13 = fVar13 * fVar4;
      fVar10 = fVar10 * fVar4;
      fVar14 = fVar14 * fVar4;
      fVar9 = fVar12 * fVar13 - fVar11 * fVar10;
      fVar8 = fVar10 * fVar15 - fVar12 * fVar14;
      fVar7 = fVar11 * fVar14 - fVar13 * fVar15;
      fVar4 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar4 = fVar5 * 0.5 * (3.0 - fVar4 * fVar5 * fVar5);
      uStack_148 = CONCAT44(fStack_f8 * fVar13,fStack_f8 * fVar14);
      uStack_130 = CONCAT44(0x7f7fffff,fVar7 * fVar4 * fStack_f4);
      uStack_140 = CONCAT44(0x7f7fffff,fStack_f8 * fVar10);
      uStack_138 = CONCAT44(fVar8 * fVar4 * fStack_f4,fStack_f4 * fVar9 * fVar4);
      fStack_128 = fStack_f0 * fVar15;
      fStack_124 = fVar11 * fStack_f0;
      fStack_120 = fVar12 * fStack_f0;
      uStack_11c = uVar2;
    }
    if (*(char *)(param_1 + 0x99) != '\0') {
      uStack_148 = uStack_e8;
      uStack_140 = uStack_e0;
      fStack_128 = fStack_c8;
      fStack_124 = fStack_c4;
      fStack_120 = fStack_c0;
      uStack_11c = uStack_bc;
      uStack_138 = uStack_d8;
      uStack_130 = uStack_d0;
      fStack_118 = fStack_b8;
      fStack_114 = fStack_b4;
      fStack_110 = fStack_b0;
      uStack_10c = uStack_ac;
    }
    FUN_1802ea790(*(undefined8 *)(param_1 + 0x18),&uStack_148);
  }
  return;
}





// 函数: void FUN_18034f69c(void)
void FUN_18034f69c(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined4 unaff_XMM6_Da;
  float fVar11;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM7_Da;
  float fVar12;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM9_Da;
  float fVar13;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM10_Da;
  float fVar14;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM11_Da;
  float fVar15;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM12_Da;
  float fVar16;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  float fVar17;
  undefined4 unaff_XMM13_Dc;
  float fVar18;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000078;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  
  uStack0000000000000030 = *(undefined8 *)(in_RAX + 0x70);
  uStack0000000000000038 = *(undefined8 *)(in_RAX + 0x78);
  uStack0000000000000040 = *(undefined8 *)(in_RAX + 0x80);
  uStack0000000000000048 = *(undefined8 *)(in_RAX + 0x88);
  fVar18 = *(float *)(in_RAX + 0x90);
  fVar14 = *(float *)(in_RAX + 0x94);
  fVar15 = *(float *)(in_RAX + 0x98);
  uVar1 = *(undefined4 *)(in_RAX + 0x9c);
  fStack0000000000000050 = fVar18;
  fStack0000000000000054 = fVar14;
  fStack0000000000000058 = fVar15;
  uStack000000000000005c = uVar1;
  FUN_1804664b0(*(undefined4 *)(in_RAX + 0x70),unaff_RBP + -0x70);
  fVar2 = *(float *)(unaff_RBP + -0x40);
  fVar3 = *(float *)(unaff_RBP + -0x3c);
  fVar4 = *(float *)(unaff_RBP + -0x38);
  uVar5 = *(undefined4 *)(unaff_RBP + -0x34);
  in_stack_00000060 = fVar2;
  fStack0000000000000064 = fVar3;
  in_stack_00000068 = fVar4;
  uStack000000000000006c = uVar5;
  if (*(char *)(unaff_RBX + 0x98) != '\0') {
    in_stack_000000f0 = unaff_XMM13_Da;
    in_stack_000000f8 = unaff_XMM13_Dc;
    in_stack_00000100 = unaff_XMM12_Da;
    in_stack_00000108 = unaff_XMM12_Dc;
    in_stack_00000110 = unaff_XMM11_Da;
    in_stack_00000118 = unaff_XMM11_Dc;
    in_stack_00000120 = unaff_XMM10_Da;
    in_stack_00000128 = unaff_XMM10_Dc;
    in_stack_00000130 = unaff_XMM9_Da;
    in_stack_00000138 = unaff_XMM9_Dc;
    in_stack_00000140 = unaff_XMM8_Da;
    in_stack_00000148 = unaff_XMM8_Dc;
    in_stack_00000150 = unaff_XMM7_Da;
    in_stack_00000158 = unaff_XMM7_Dc;
    in_stack_00000160 = unaff_XMM6_Da;
    in_stack_00000168 = unaff_XMM6_Dc;
    FUN_180085020(&stack0x00000030,unaff_RBP + -0x80);
    fVar12 = fVar2 - *(float *)(unaff_RDI + 0x1b8);
    fVar11 = fVar3 - *(float *)(unaff_RDI + 0x1bc);
    fVar10 = fVar4 - *(float *)(unaff_RDI + 0x1c0);
    fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar15 = fVar15 * fVar6;
    fVar18 = fVar18 * fVar6;
    fVar14 = fVar14 * fVar6;
    fVar17 = fVar14 * fVar10 * fVar9 - fVar15 * fVar11 * fVar9;
    fVar16 = fVar15 * fVar12 * fVar9 - fVar18 * fVar10 * fVar9;
    in_stack_00000078._4_4_ = 0x7f7fffff;
    fVar13 = fVar18 * fVar11 * fVar9 - fVar14 * fVar12 * fVar9;
    fVar6 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar16 = fVar16 * fVar6;
    fVar13 = fVar13 * fVar6;
    fVar17 = fVar17 * fVar6;
    fVar12 = fVar15 * fVar16 - fVar14 * fVar13;
    fVar11 = fVar13 * fVar18 - fVar15 * fVar17;
    fVar10 = fVar14 * fVar17 - fVar16 * fVar18;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = *(float *)(unaff_RBP + -0x80);
    fVar7 = *(float *)(unaff_RBP + -0x7c);
    uStack0000000000000030 = CONCAT44(fVar6 * fVar16,fVar6 * fVar17);
    uStack0000000000000048 = CONCAT44(0x7f7fffff,fVar10 * fVar9 * fVar7);
    uStack0000000000000038 = CONCAT44(0x7f7fffff,fVar6 * fVar13);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x78);
    uStack0000000000000040 = CONCAT44(fVar11 * fVar9 * fVar7,fVar7 * fVar12 * fVar9);
    fStack0000000000000050 = fStack0000000000000058 * fVar18;
    fStack0000000000000054 = fVar14 * fStack0000000000000058;
    fStack0000000000000058 = fVar15 * fStack0000000000000058;
    uStack000000000000005c = uVar1;
  }
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    uStack0000000000000030 = *(undefined8 *)(unaff_RBP + -0x70);
    uStack0000000000000038 = *(undefined8 *)(unaff_RBP + -0x68);
    uStack0000000000000040 = *(undefined8 *)(unaff_RBP + -0x60);
    uStack0000000000000048 = *(undefined8 *)(unaff_RBP + -0x58);
    fStack0000000000000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(undefined4 *)(unaff_RBP + -0x44);
    in_stack_00000060 = fVar2;
    fStack0000000000000064 = fVar3;
    in_stack_00000068 = fVar4;
    uStack000000000000006c = uVar5;
  }
  FUN_1802ea790(*(undefined8 *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034f6a9(void)
void FUN_18034f6a9(void)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined4 unaff_XMM6_Da;
  float fVar11;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM7_Da;
  float fVar12;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM9_Da;
  float fVar13;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM10_Da;
  float fVar14;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM11_Da;
  float fVar15;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM12_Da;
  float fVar16;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  float fVar17;
  undefined4 unaff_XMM13_Dc;
  float fVar18;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  undefined4 uStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000078;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined4 in_stack_00000160;
  undefined4 in_stack_00000168;
  
  uStack0000000000000030 = *(undefined8 *)(in_RAX + 0x70);
  uStack0000000000000038 = *(undefined8 *)(in_RAX + 0x78);
  uStack0000000000000040 = *(undefined8 *)(in_RAX + 0x80);
  uStack0000000000000048 = *(undefined8 *)(in_RAX + 0x88);
  fVar18 = *(float *)(in_RAX + 0x90);
  fVar14 = *(float *)(in_RAX + 0x94);
  fVar15 = *(float *)(in_RAX + 0x98);
  uVar1 = *(undefined4 *)(in_RAX + 0x9c);
  fStack0000000000000050 = fVar18;
  fStack0000000000000054 = fVar14;
  fStack0000000000000058 = fVar15;
  uStack000000000000005c = uVar1;
  FUN_1804664b0();
  fVar2 = *(float *)(unaff_RBP + -0x40);
  fVar3 = *(float *)(unaff_RBP + -0x3c);
  fVar4 = *(float *)(unaff_RBP + -0x38);
  uVar5 = *(undefined4 *)(unaff_RBP + -0x34);
  in_stack_00000060 = fVar2;
  fStack0000000000000064 = fVar3;
  in_stack_00000068 = fVar4;
  uStack000000000000006c = uVar5;
  if (*(char *)(unaff_RBX + 0x98) != '\0') {
    in_stack_000000f0 = unaff_XMM13_Da;
    in_stack_000000f8 = unaff_XMM13_Dc;
    in_stack_00000100 = unaff_XMM12_Da;
    in_stack_00000108 = unaff_XMM12_Dc;
    in_stack_00000110 = unaff_XMM11_Da;
    in_stack_00000118 = unaff_XMM11_Dc;
    in_stack_00000120 = unaff_XMM10_Da;
    in_stack_00000128 = unaff_XMM10_Dc;
    in_stack_00000130 = unaff_XMM9_Da;
    in_stack_00000138 = unaff_XMM9_Dc;
    in_stack_00000140 = unaff_XMM8_Da;
    in_stack_00000148 = unaff_XMM8_Dc;
    in_stack_00000150 = unaff_XMM7_Da;
    in_stack_00000158 = unaff_XMM7_Dc;
    in_stack_00000160 = unaff_XMM6_Da;
    in_stack_00000168 = unaff_XMM6_Dc;
    FUN_180085020(&stack0x00000030,unaff_RBP + -0x80);
    fVar12 = fVar2 - *(float *)(unaff_RDI + 0x1b8);
    fVar11 = fVar3 - *(float *)(unaff_RDI + 0x1bc);
    fVar10 = fVar4 - *(float *)(unaff_RDI + 0x1c0);
    fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = fVar14 * fVar14 + fVar18 * fVar18 + fVar15 * fVar15;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar15 = fVar15 * fVar6;
    fVar18 = fVar18 * fVar6;
    fVar14 = fVar14 * fVar6;
    fVar17 = fVar14 * fVar10 * fVar9 - fVar15 * fVar11 * fVar9;
    fVar16 = fVar15 * fVar12 * fVar9 - fVar18 * fVar10 * fVar9;
    in_stack_00000078._4_4_ = 0x7f7fffff;
    fVar13 = fVar18 * fVar11 * fVar9 - fVar14 * fVar12 * fVar9;
    fVar6 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar16 = fVar16 * fVar6;
    fVar13 = fVar13 * fVar6;
    fVar17 = fVar17 * fVar6;
    fVar12 = fVar15 * fVar16 - fVar14 * fVar13;
    fVar11 = fVar13 * fVar18 - fVar15 * fVar17;
    fVar10 = fVar14 * fVar17 - fVar16 * fVar18;
    fVar6 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar9 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    fVar6 = *(float *)(unaff_RBP + -0x80);
    fVar7 = *(float *)(unaff_RBP + -0x7c);
    uStack0000000000000030 = CONCAT44(fVar6 * fVar16,fVar6 * fVar17);
    uStack0000000000000048 = CONCAT44(0x7f7fffff,fVar10 * fVar9 * fVar7);
    uStack0000000000000038 = CONCAT44(0x7f7fffff,fVar6 * fVar13);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x78);
    uStack0000000000000040 = CONCAT44(fVar11 * fVar9 * fVar7,fVar7 * fVar12 * fVar9);
    fStack0000000000000050 = fStack0000000000000058 * fVar18;
    fStack0000000000000054 = fVar14 * fStack0000000000000058;
    fStack0000000000000058 = fVar15 * fStack0000000000000058;
    uStack000000000000005c = uVar1;
  }
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    uStack0000000000000030 = *(undefined8 *)(unaff_RBP + -0x70);
    uStack0000000000000038 = *(undefined8 *)(unaff_RBP + -0x68);
    uStack0000000000000040 = *(undefined8 *)(unaff_RBP + -0x60);
    uStack0000000000000048 = *(undefined8 *)(unaff_RBP + -0x58);
    fStack0000000000000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    fStack0000000000000058 = *(float *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(undefined4 *)(unaff_RBP + -0x44);
    in_stack_00000060 = fVar2;
    fStack0000000000000064 = fVar3;
    in_stack_00000068 = fVar4;
    uStack000000000000006c = uVar5;
  }
  FUN_1802ea790(*(undefined8 *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





