#include "TaleWorlds.Native.Split.h"

// 03_rendering_part240.c - 6 个函数

// 函数: void FUN_180402a70(longlong param_1,undefined8 param_2,longlong param_3,float param_4,
void FUN_180402a70(longlong param_1,undefined8 param_2,longlong param_3,float param_4,
                  undefined4 param_5)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_288 [32];
  undefined4 uStack_268;
  char acStack_258 [8];
  float afStack_250 [2];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 uStack_230;
  longlong *plStack_228;
  undefined *puStack_220;
  longlong lStack_218;
  undefined4 uStack_210;
  ulonglong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [32];
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong *plStack_188;
  undefined8 uStack_180;
  uint uStack_178;
  uint uStack_174;
  undefined8 uStack_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [72];
  undefined *puStack_f8;
  undefined *puStack_f0;
  uint uStack_e8;
  undefined auStack_e0 [136];
  ulonglong uStack_58;
  
  uStack_1e8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  puStack_f8 = &UNK_1809fcc28;
  puStack_f0 = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0xc;
  afStack_250[0] = param_4;
  strcpy_s(auStack_e0,0x80,&DAT_180a0eb68);
  puVar7 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar7 = *(undefined **)(param_1 + 0x18);
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (puVar7[lVar4] != '\0');
  iVar16 = (int)lVar4;
  if ((0 < iVar16) && (uStack_e8 + iVar16 < 0x7f)) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_f0 + uStack_e8,puVar7,(longlong)(iVar16 + 1));
  }
  puVar7 = &DAT_18098bc73;
  if (puStack_f0 != (undefined *)0x0) {
    puVar7 = puStack_f0;
  }
  FUN_1802c22a0(acStack_258,puVar7);
  puVar7 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 0x18) != (undefined *)0x0) {
    puVar7 = *(undefined **)(param_1 + 0x18);
  }
  uStack_180 = &puStack_158;
  puStack_158 = &UNK_1809fcc58;
  puStack_150 = auStack_140;
  uStack_148 = 0;
  auStack_140[0] = 0;
  if (puVar7 != (undefined *)0x0) {
    FUN_180049bf0(&puStack_158,puVar7);
    FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_158);
  }
  lVar4 = _DAT_180c86870;
  if (*(int *)(param_1 + 0x48) < 1) {
    lVar6 = *(longlong *)(param_1 + 0x428);
    if ((lVar6 == 0) || (lVar12 = *(longlong *)(lVar6 + 0x1d8), lVar12 == 0)) {
      lVar12 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    lVar6 = *(longlong *)(param_1 + 0x430);
    if ((lVar6 == 0) || (lVar14 = *(longlong *)(lVar6 + 0x1d8), lVar14 == 0)) {
      lVar14 = 0;
    }
    else if (lVar4 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(lVar4 + 0x224);
    }
    lVar6 = *(longlong *)(param_1 + 0x438);
    if ((lVar6 == 0) || (lVar10 = *(longlong *)(lVar6 + 0x1d8), lVar10 == 0)) {
      lVar10 = 0;
    }
    else if (lVar4 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(lVar4 + 0x224);
    }
    lVar6 = *(longlong *)(param_1 + 0x440);
    if ((lVar6 == 0) || (lVar11 = *(longlong *)(lVar6 + 0x1d8), lVar11 == 0)) {
      lVar11 = 0;
    }
    else if (lVar4 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(lVar4 + 0x224);
    }
    lVar6 = *(longlong *)(param_1 + 0x448);
    if ((lVar6 == 0) || (plVar9 = *(longlong **)(lVar6 + 0x1e0), plVar9 == (longlong *)0x0)) {
      plVar9 = (longlong *)0x0;
    }
    else if (lVar4 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(lVar4 + 0x224);
    }
    FUN_18029ad30(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,lVar12);
    FUN_18029ad30(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,lVar14);
    FUN_18029ad30(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),2,lVar10);
    FUN_18029ad30(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),3,lVar11);
    plVar3 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
    if ((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) {
      (**(code **)(*plVar3 + 0x70))(plVar3,*plVar9,2);
    }
    lVar4 = _DAT_180c86938;
    plVar3[0x107e] = (longlong)plVar9;
    FUN_18029de40(*(undefined8 *)(lVar4 + 0x1cd8),4);
    if (*(char *)(param_1 + 0x4d) == '\0') {
      uVar13 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x428) + 0x32c);
      uVar15 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x428) + 0x32e);
      fStack_168 = (float)uVar13;
      uStack_164 = (float)uVar15;
      fVar1 = *(float *)(param_3 + 0x11c18);
      fVar2 = *(float *)(param_3 + 0x11c1c);
      lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      uStack_170 = 0;
      uStack_160 = 0;
      uStack_15c = 0x3f800000;
      plVar9 = *(longlong **)(lVar4 + 0x8400);
      (**(code **)(*plVar9 + 0x160))(plVar9,1,&uStack_170);
      uStack_180 = (undefined **)CONCAT44((int)fVar1,(int)fVar2);
      plVar9 = *(longlong **)(lVar4 + 0x8400);
      uStack_178 = uVar13;
      uStack_174 = uVar15;
      (**(code **)(*plVar9 + 0x168))(plVar9,1,&uStack_180);
    }
    else {
      uVar13 = (uint)*(float *)(param_3 + 0x11c20);
      uVar15 = (uint)*(float *)(param_3 + 0x11c24);
      uStack_180 = (undefined **)
                   CONCAT44((int)*(float *)(param_3 + 0x11c18),(int)*(float *)(param_3 + 0x11c1c));
      uStack_178 = uVar13;
      uStack_174 = uVar15;
      FUN_18029d0a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),(float *)(param_3 + 0x11c18),
                    &uStack_180);
    }
    lVar6 = _DAT_180c86938;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1df0) =
         *(undefined8 *)(param_3 + 0x35a8);
    *(undefined8 *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1df8) = *(undefined8 *)(param_3 + 0x35b0);
    *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1be0) = 0.5 / (float)(int)uVar13;
    *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1be4) = 0.5 / (float)(int)uVar15;
    plVar9 = (longlong *)(param_1 + 0x138);
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1be8) =
           (float)(1.0 / *(double *)(param_1 + 0x58));
      *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1bec) =
           (float)(1.0 / *(double *)(param_1 + 0x60));
    }
    else {
      *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1be8) = 1.0 / (float)*(ushort *)(lVar4 + 0x32c);
      *(float *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1bec) = 1.0 / (float)*(ushort *)(lVar4 + 0x32e);
    }
    lVar4 = _DAT_180c86890;
    if (*(char *)(_DAT_180c86890 + 0x12f8) == '\x01') {
      *(undefined4 *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1c78) =
           *(undefined4 *)(_DAT_180c86890 + 0x1304);
      *(undefined4 *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1c7c) = *(undefined4 *)(lVar4 + 0x12fc);
      *(undefined4 *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1c74) = *(undefined4 *)(lVar4 + 0x1300);
      *(undefined4 *)(*(longlong *)(lVar6 + 0x1cd8) + 0x1bfc) = *(undefined4 *)(lVar4 + 0x1308);
    }
    FUN_18029fc10(*(longlong *)(lVar6 + 0x1cd8),*(undefined8 *)(lVar6 + 0x1c88),
                  *(longlong *)(lVar6 + 0x1cd8) + 0x1be0,0x230);
    iVar16 = 0;
    uStack_180 = (undefined **)0x0;
    uStack_268 = param_5;
    FUN_1801f7d20(param_1,param_3,afStack_250,&uStack_180);
    uStack_170 = uStack_180;
    fStack_168 = afStack_250[0];
    uStack_164._0_2_ = 4;
    uStack_248 = *(undefined8 *)(param_1 + 0x30);
    plStack_228 = (longlong *)0x0;
    puStack_220 = &UNK_180a3c3e0;
    uStack_208 = 0;
    lStack_218 = 0;
    uStack_210 = 0;
    plStack_1f0 = (longlong *)0x0;
    uStack_238 = CONCAT26(uStack_164._2_2_,CONCAT24(4,afStack_250[0]));
    uStack_240 = uStack_180;
    uStack_230 = 2;
    uStack_200 = 0;
    uStack_1f8 = 0;
    uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x15b8);
    uStack_1d8 = uStack_180;
    uStack_1c8 = 2;
    uStack_1c0 = 0;
    uStack_1e0 = uStack_248;
    uStack_1d0 = uStack_238;
    uStack_180 = (undefined **)&uStack_1e0;
    FUN_180627ae0(auStack_1b8,&puStack_220);
    uStack_198 = uStack_200;
    uStack_190 = uStack_1f8;
    plStack_188 = plStack_1f0;
    if (plStack_1f0 != (longlong *)0x0) {
      (**(code **)(*plStack_1f0 + 0x28))();
    }
    uVar5 = FUN_180299eb0(uVar5,param_3,&uStack_1e0,acStack_258);
    if (acStack_258[0] == '\0') {
      *(undefined8 *)(param_1 + 0xf8) = uVar5;
      *(undefined4 *)(param_1 + 0x134) = 4;
      *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(*(longlong *)(param_1 + 0x428) + 0x324);
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(*(longlong *)(param_1 + 0x430) + 0x324);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(*(longlong *)(param_1 + 0x438) + 0x324);
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(*(longlong *)(param_1 + 0x440) + 0x324);
      iVar8 = iVar16;
      do {
        if (*plVar9 != 0) {
          uStack_268 = 0xffffffff;
          FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),iVar8,*plVar9,0x10);
        }
        iVar8 = iVar8 + 1;
        plVar9 = plVar9 + 1;
      } while (iVar8 < 0x10);
      FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4);
      FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),param_1 + 0xf8);
      FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
      lVar4 = _DAT_180c86938;
      lVar6 = strnlen(&UNK_180a27020,0x3f);
      strncpy(lVar4 + 0x1ce0,&UNK_180a27020,lVar6);
      *(undefined1 *)(lVar6 + 0x1ce0 + lVar4) = 0;
      lVar12 = 0x8a38;
      lVar6 = 0x8438;
      lVar4 = _DAT_180c86938;
      do {
        if ((*(longlong *)(param_1 + -0x8300 + lVar6) != 0) &&
           (((lVar14 = *(longlong *)(lVar4 + 0x1cd8), *(longlong *)(lVar14 + lVar6) != 0 ||
             (*(int *)(lVar12 + -0x200 + lVar14) != -1)) || (*(int *)(lVar14 + lVar12) != 0x10)))) {
          uStack_180 = (undefined **)0x0;
          (**(code **)(**(longlong **)(lVar14 + 0x8400) + 0x40))
                    (*(longlong **)(lVar14 + 0x8400),iVar16,1,&uStack_180);
          *(undefined8 *)(lVar14 + lVar6) = 0;
          *(undefined4 *)(lVar12 + -0x200 + lVar14) = 0xffffffff;
          *(undefined4 *)(lVar14 + lVar12) = 0x10;
          *(int *)(lVar14 + 0x82b4) = *(int *)(lVar14 + 0x82b4) + 1;
          lVar4 = _DAT_180c86938;
        }
        iVar16 = iVar16 + 1;
        lVar6 = lVar6 + 8;
        lVar12 = lVar12 + 4;
      } while (iVar16 < 0x10);
      *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83b8) = 0;
      *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83c0) = 0;
      *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83c8) = 0;
      *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83d0) = 0;
      *(undefined8 *)(*(longlong *)(lVar4 + 0x1cd8) + 0x83f0) = 0;
      FUN_18029de40(*(undefined8 *)(lVar4 + 0x1cd8),4);
    }
    if (plStack_1f0 != (longlong *)0x0) {
      (**(code **)(*plStack_1f0 + 0x38))();
    }
    uStack_180 = &puStack_220;
    puStack_220 = &UNK_180a3c3e0;
    if (lStack_218 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_218 = 0;
    uStack_208 = uStack_208 & 0xffffffff00000000;
    puStack_220 = &UNK_18098bcb0;
    if (plStack_228 != (longlong *)0x0) {
      (**(code **)(*plStack_228 + 0x38))();
    }
  }
  else {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  }
  FUN_1802c2ac0(&puStack_158);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  puStack_f8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_288);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180403440(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_180403440(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackX_8 [8];
  
  FUN_1801f6650();
  uVar11 = _DAT_180c86890;
  lVar6 = *(longlong *)(param_1 + 0x428);
  FUN_1802c22a0(auStackX_8,&UNK_180a04538);
  lVar13 = _DAT_180c86938;
  plVar7 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  plVar8 = *(longlong **)(lVar6 + 0x1d8);
  if (plVar8 != (longlong *)0x0) {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar6 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    if (*plVar8 != 0) {
      (**(code **)(*plVar7 + 0x70))(plVar7,*plVar8,1,param_4,param_5);
      lVar13 = _DAT_180c86938;
    }
  }
  plVar7[0x1077] = (longlong)plVar8;
  FUN_18029de40(*(undefined8 *)(lVar13 + 0x1cd8),1);
  for (uVar14 = 0; (ulonglong)(longlong)(int)uVar14 < (ulonglong)*(uint *)(param_3 + 0x2480);
      uVar14 = uVar14 + 1) {
    lVar13 = (ulonglong)(uVar14 >> 0xb) * 8;
    lVar1 = (ulonglong)(uVar14 & 0x7ff) * 0x18;
    lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x2488 + param_3) + 0x10 + lVar1);
    if (*(char *)(lVar9 + 0x330) != '\x03') {
      uVar3 = *(undefined1 *)(lVar9 + 0xc0);
      uVar2 = *(undefined8 *)(lVar9 + 0x90);
      uVar5 = *(undefined2 *)(lVar9 + 0x98);
      uVar10 = *(undefined8 *)(lVar9 + 0x88);
      uVar4 = *(undefined1 *)(lVar9 + 0x9b);
      *(undefined4 *)(lVar9 + 0x90) = 0x1020101;
      *(undefined1 *)(lVar9 + 0xc0) = 0;
      *(undefined4 *)(lVar9 + 0xc4) = 1;
      *(undefined4 *)(lVar9 + 0xa4) = *(undefined4 *)(lVar6 + 0x324);
      lVar12 = FUN_180245280(param_3);
      *(undefined4 *)(lVar9 + 0xa0) = *(undefined4 *)(lVar12 + 0x324);
      *(undefined4 *)(lVar9 + 0x21c) = 1;
      FUN_1800e8640(uVar11,*(undefined8 *)(*(longlong *)(lVar13 + 0x2488 + param_3) + lVar1 + 0x10))
      ;
      *(undefined1 *)(lVar9 + 0xc0) = uVar3;
      *(undefined8 *)(lVar9 + 0x90) = uVar2;
      *(undefined2 *)(lVar9 + 0x98) = uVar5;
      *(undefined1 *)(lVar9 + 0x9b) = uVar4;
      *(undefined8 *)(lVar9 + 0x88) = uVar10;
      *(undefined4 *)(lVar9 + 0x21c) = 0;
    }
  }
  _DAT_180c8695c = _DAT_180c8695c + -1;
                    // WARNING: Could not recover jumptable at 0x00018040366d. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_DAT_180c86968 + 0x20))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180403680(undefined8 *param_1,undefined8 param_2,undefined8 param_3)
void FUN_180403680(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined1 auStack_a8 [8];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_90 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  lVar1 = param_1[0x27];
  lVar2 = *(longlong *)(lVar1 + 0x1d8);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (_DAT_180c86870 != 0) {
    *(longlong *)(lVar1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
  }
  FUN_1800cfb40(lVar1,param_3,lVar2);
  ppuStack_a0 = &puStack_88;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  FUN_180049bf0(&puStack_88,&UNK_180a03c10);
  FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_88);
  FUN_1802c22a0(auStack_a8,&UNK_180a03c00);
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x84b8) != 0) || (*(int *)(lVar1 + 0x8878) != -1)) ||
     (*(int *)(lVar1 + 0x8a78) != 0x10)) {
    uStack_98 = 0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x10,1,&uStack_98);
    *(undefined8 *)(lVar1 + 0x84b8) = 0;
    *(undefined4 *)(lVar1 + 0x8878) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x8a78) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  lVar1 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
  if (((*(longlong *)(lVar1 + 0x8540) != 0) || (*(int *)(lVar1 + 0x88bc) != -1)) ||
     (*(int *)(lVar1 + 0x8abc) != 0x10)) {
    ppuStack_a0 = (undefined **)0x0;
    (**(code **)(**(longlong **)(lVar1 + 0x8400) + 0x40))
              (*(longlong **)(lVar1 + 0x8400),0x21,1,&ppuStack_a0);
    *(undefined8 *)(lVar1 + 0x8540) = 0;
    *(undefined4 *)(lVar1 + 0x88bc) = 0xffffffff;
    *(undefined4 *)(lVar1 + 0x8abc) = 0x10;
    *(int *)(lVar1 + 0x82b4) = *(int *)(lVar1 + 0x82b4) + 1;
  }
  uStack_b8 = param_1[0x27];
  FUN_1800d0950(_DAT_180c86890,param_3,1);
  uStack_b8 = param_1[0x27];
  FUN_1800d0950(_DAT_180c86890,param_3,0,0);
  uStack_b8 = param_1[0x27];
  FUN_1800d0950(_DAT_180c86890,param_3,1,0);
  _DAT_180c8695c = _DAT_180c8695c + -1;
  (**(code **)(*_DAT_180c86968 + 0x20))();
  FUN_1802c2ac0(&puStack_88);
  if ((undefined *)*param_1 != &UNK_180a0ed30) {
    (**(code **)((undefined *)*param_1 + 0x28))(param_1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_d8);
}





// 函数: void FUN_180403910(longlong param_1,longlong param_2,undefined8 param_3,float param_4,float param_5,
void FUN_180403910(longlong param_1,longlong param_2,undefined8 param_3,float param_4,float param_5,
                  longlong param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  
  fVar16 = (float)(*(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c)) * param_4 +
           (float)*(int *)(param_1 + 0x18c);
  if (((*(byte *)(param_2 + 0x810) & 1) != 0) && (cVar1 = FUN_1804044a0(), cVar1 != '\0')) {
    FUN_180404500(param_1,&fStack_68,fVar16);
    fStack_6c = *(float *)(param_2 + 0x102c);
    *(ulonglong *)(param_2 + 0x800) =
         *(ulonglong *)(param_2 + 0x800) | *(ulonglong *)(param_2 + 0x810);
    fStack_78 = fStack_68 * param_5 + *(float *)(param_2 + 0x1020);
    fStack_74 = *(float *)(param_2 + 0x1024) + fStack_64 * param_5;
    fStack_70 = *(float *)(param_2 + 0x1028) + fStack_60 * param_5;
    *(float *)(param_2 + 0x1020) = fStack_78;
    *(float *)(param_2 + 0x1024) = fStack_74;
    *(float *)(param_2 + 0x1028) = fStack_70;
    *(float *)(param_2 + 0x102c) = fStack_6c;
  }
  cVar1 = FUN_180404420(param_1);
  uVar5 = 0;
  if ('\0' < cVar1) {
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0x820);
    uVar8 = uVar6;
    do {
      if ((*(ulonglong *)(param_2 + 0x810) >> (uVar5 & 0x3f) & 1) != 0) {
        uVar2 = FUN_180404730(param_1,&fStack_78,fVar16,uVar5);
        fVar9 = *pfVar7 * fStack_78;
        fVar11 = pfVar7[1] * fStack_74;
        fVar12 = pfVar7[2] * fStack_70;
        fVar13 = pfVar7[3] * fStack_6c;
        fVar14 = fVar13 + fVar9;
        fVar15 = fVar12 + fVar11;
        auVar10._0_4_ = fVar15 + fVar14;
        auVar10._4_4_ = fVar14 + fVar15;
        auVar10._8_4_ = fVar14 + fVar11 + fVar12;
        auVar10._12_4_ = fVar15 + fVar9 + fVar13;
        iVar3 = movmskps(uVar2,auVar10);
        if (iVar3 != 0) {
          fStack_70 = -fStack_70;
          fStack_6c = -fStack_6c;
          fStack_78 = -fStack_78;
          fStack_74 = -fStack_74;
        }
        *pfVar7 = *pfVar7 + param_5 * fStack_78;
        pfVar7[1] = pfVar7[1] + param_5 * fStack_74;
        pfVar7[2] = pfVar7[2] + param_5 * fStack_70;
        pfVar7[3] = pfVar7[3] + param_5 * fStack_6c;
        *(ulonglong *)(param_2 + 0x800) =
             *(ulonglong *)(param_2 + 0x800) |
             *(ulonglong *)(*(longlong *)(param_6 + 0x140) + 0xe8 + uVar8);
        *(ulonglong *)(param_2 + 0x808) = *(ulonglong *)(param_2 + 0x808) | 1L << (uVar6 & 0x3f);
      }
      bVar4 = (char)uVar5 + 1;
      uVar5 = (ulonglong)bVar4;
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 4;
      uVar8 = uVar8 + 0x1b0;
    } while ((char)bVar4 < cVar1);
  }
  return;
}





// 函数: void FUN_180403a19(float param_1)
void FUN_180403a19(float param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  ulonglong unaff_RBX;
  ulonglong uVar5;
  float *pfVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  char unaff_R15B;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  longlong in_stack_000000c8;
  
  uVar5 = 0;
  pfVar6 = (float *)(unaff_RDI + 0x820);
  uVar7 = uVar5;
  do {
    if ((*(ulonglong *)(unaff_RDI + 0x810) >> (unaff_RBX & 0x3f) & 1) != 0) {
      uVar2 = FUN_180404730(param_1,&fStackX_20);
      fVar8 = *pfVar6 * fStackX_20;
      fVar9 = pfVar6[1] * fStackX_24;
      fVar10 = pfVar6[2] * fStack0000000000000028;
      fVar11 = pfVar6[3] * fStack000000000000002c;
      fVar12 = fVar11 + fVar8;
      fVar13 = fVar10 + fVar9;
      auVar1._4_4_ = fVar12 + fVar13;
      auVar1._0_4_ = fVar13 + fVar12;
      auVar1._8_4_ = fVar12 + fVar9 + fVar10;
      auVar1._12_4_ = fVar13 + fVar8 + fVar11;
      iVar3 = movmskps(uVar2,auVar1);
      if (iVar3 != 0) {
        fStack0000000000000028 = -fStack0000000000000028;
        fStack000000000000002c = -fStack000000000000002c;
        fStackX_20 = -fStackX_20;
        fStackX_24 = -fStackX_24;
      }
      param_1 = unaff_XMM8_Da * fStackX_20;
      *pfVar6 = *pfVar6 + param_1;
      pfVar6[1] = pfVar6[1] + unaff_XMM8_Da * fStackX_24;
      pfVar6[2] = pfVar6[2] + unaff_XMM8_Da * fStack0000000000000028;
      pfVar6[3] = pfVar6[3] + unaff_XMM8_Da * fStack000000000000002c;
      *(ulonglong *)(unaff_RDI + 0x800) =
           *(ulonglong *)(unaff_RDI + 0x800) |
           *(ulonglong *)(*(longlong *)(in_stack_000000c8 + 0x140) + 0xe8 + uVar7);
      *(ulonglong *)(unaff_RDI + 0x808) = *(ulonglong *)(unaff_RDI + 0x808) | 1L << (uVar5 & 0x3f);
    }
    bVar4 = (char)unaff_RBX + 1;
    unaff_RBX = (ulonglong)bVar4;
    uVar5 = uVar5 + 1;
    pfVar6 = pfVar6 + 4;
    uVar7 = uVar7 + 0x1b0;
  } while ((char)bVar4 < unaff_R15B);
  return;
}





// 函数: void FUN_180403b6b(void)
void FUN_180403b6b(void)

{
  return;
}



undefined8 FUN_180403b90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *aplStackX_8 [4];
  
  puVar2 = (undefined8 *)
           FUN_1800b3670(param_1,aplStackX_8,(*(byte *)(param_1 + 0x1a8) >> 4) - 1,
                         (*(byte *)(param_1 + 0x1a8) & 0xf) - 1,0xfffffffffffffffe);
  uVar1 = *puVar2;
  if (aplStackX_8[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



