#include "TaleWorlds.Native.Split.h"

// 03_rendering_part087.c - 4 个函数

// 函数: void FUN_1803198f0(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)
void FUN_1803198f0(undefined8 param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_228 [32];
  undefined4 uStack_208;
  undefined4 uStack_200;
  undefined1 auStack_1f8 [8];
  longlong *plStack_1f0;
  longlong *aplStack_1e8 [2];
  longlong *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  longlong *plStack_1b8;
  longlong *plStack_1b0;
  longlong lStack_1a8;
  undefined4 uStack_1a0;
  ulonglong uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong *plStack_180;
  undefined8 uStack_178;
  longlong *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [32];
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong *plStack_118;
  longlong **pplStack_110;
  int iStack_108;
  int iStack_104;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [8];
  ulonglong uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_80 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  FUN_1802c22a0(auStack_1f8,&UNK_180a1abf8);
  lVar3 = _DAT_180c86938;
  iVar5 = 0x80 >> ((byte)param_3 & 0x1f);
  plVar1 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  if (*(longlong *)(param_2 + 0x1d8) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    if (_DAT_180c86870 != 0) {
      *(longlong *)(param_2 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    plVar4 = (longlong *)
             ((longlong)(int)((uint)*(byte *)(param_2 + 0x335) * param_4 + param_3) * 0x10 +
             *(longlong *)(param_2 + 0x1d8));
    if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
      (**(code **)(*plVar1 + 0x70))(plVar1,*plVar4,1);
      lVar3 = _DAT_180c86938;
    }
  }
  plVar1[0x1077] = (longlong)plVar4;
  *(undefined8 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x83f0) = 0;
  FUN_18029de40(*(undefined8 *)(lVar3 + 0x1cd8),1);
  uStack_200 = 0;
  uStack_208 = 0;
  FUN_18029c8a0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),1,0xff000000,0x3f800000);
  lVar3 = _DAT_180c86938;
  fStack_90 = (float)iVar5;
  fVar7 = 1.0 / fStack_90;
  *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0) = fVar7 * 0.5;
  *(float *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1be4) = fVar7 * 0.5;
  *(float *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1be8) = fVar7;
  *(float *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1bec) = fVar7;
  lVar3 = *(longlong *)(lVar3 + 0x1cd8);
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_84 = 0x3f800000;
  plVar1 = *(longlong **)(lVar3 + 0x8400);
  uStack_8c = fStack_90;
  (**(code **)(*plVar1 + 0x160))(plVar1,1,&uStack_98);
  pplStack_110 = (longlong **)0x0;
  plVar1 = *(longlong **)(lVar3 + 0x8400);
  iStack_108 = iVar5;
  iStack_104 = iVar5;
  (**(code **)(*plVar1 + 0x168))(plVar1,1,&pplStack_110);
  lVar3 = _DAT_180c86938;
  uVar6 = 0x7fc00000;
  uVar8 = 0x7fc00000;
  uVar9 = 0x7fc00000;
  uVar14 = 0x7fc00000;
  uVar10 = uVar8;
  uVar11 = uVar8;
  uVar12 = uVar8;
  uVar13 = uVar8;
  switch(param_4) {
  case 0:
    uVar8 = 0x3f800000;
    uVar12 = 0;
    uVar9 = 0xbf800000;
    goto code_r0x000180319bb4;
  case 1:
    uVar6 = 0xbf800000;
    uVar8 = 0xbf800000;
    uVar12 = 0;
    uVar9 = 0x3f800000;
    break;
  case 2:
    uVar6 = 0xbf800000;
    uVar8 = 0xbf800000;
    uVar12 = 0x3f800000;
    uVar9 = 0;
    uVar13 = 0x3f800000;
    uVar14 = 0;
    goto code_r0x000180319bba;
  case 3:
    uVar6 = 0xbf800000;
    uVar8 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar12 = 0x3f800000;
    uVar9 = 0;
    uVar14 = 0;
    uVar13 = uVar11;
    goto code_r0x000180319bbd;
  case 4:
    uVar6 = 0xbf800000;
    uVar8 = 0x3f800000;
    uVar12 = 0x3f800000;
    uVar9 = 0;
    break;
  case 5:
    uVar8 = 0xbf800000;
    uVar12 = 0xbf800000;
    uVar9 = 0;
code_r0x000180319bb4:
    uVar6 = 0x3f800000;
    break;
  default:
    goto LAB_180319bc0;
  }
  uVar14 = 0xbf800000;
  uVar13 = 0;
code_r0x000180319bba:
  uVar11 = 0x3f800000;
code_r0x000180319bbd:
  uVar10 = 0;
LAB_180319bc0:
  *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1bf0) = uVar6;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1bf4) = uVar8;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1bf8) = uVar11;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1bfc) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c10) = uVar12;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c14) = uVar9;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c18) = uVar10;
  *(float *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c1c) = (float)param_3;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c20) = uVar10;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c24) = uVar13;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c28) = uVar14;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x1cd8) + 0x1c2c) = 0x3f800000;
  FUN_18031a240(aplStack_1e8,param_5);
  FUN_18029fc10(*(longlong *)(_DAT_180c86938 + 0x1cd8),*(undefined8 *)(_DAT_180c86938 + 0x1c88),
                *(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1be0,0x230);
  puStack_f8 = &UNK_1809fcc58;
  puStack_f0 = auStack_e4 + 4;
  auStack_e4[4] = 0;
  uStack_e8 = 0xd;
  strcpy_s(auStack_e4 + 4,0x40,&UNK_180a0d408);
  FUN_1800b4910(_DAT_180c86930,&plStack_1f0,&puStack_f8);
  puStack_f8 = &UNK_18098bcb0;
  uStack_98 = 0;
  fStack_90 = 0.0;
  uStack_8c._0_2_ = 4;
  plStack_1b8 = (longlong *)0x0;
  plStack_1b0 = (longlong *)&UNK_180a3c3e0;
  uStack_198 = 0;
  lStack_1a8 = 0;
  uStack_1a0 = 0;
  plStack_180 = (longlong *)0x0;
  plStack_1d8 = plStack_1f0;
  uStack_1c8 = CONCAT26(uStack_8c._2_2_,0x400000000);
  uStack_1d0 = 0;
  uStack_1c0 = 2;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  lVar3 = plStack_1f0[0x2b7];
  pplStack_110 = &plStack_170;
  plStack_170 = plStack_1f0;
  uStack_168 = 0;
  uStack_158 = 2;
  uStack_150 = 0;
  uStack_160 = uStack_1c8;
  FUN_180627ae0(auStack_148,&plStack_1b0);
  uStack_128 = CONCAT44(uStack_18c,uStack_190);
  uStack_120 = CONCAT44(uStack_184,uStack_188);
  plStack_118 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    (**(code **)(*plStack_180 + 0x28))();
  }
  puStack_f8 = (undefined *)FUN_180299eb0(lVar3,0,&plStack_170,auStack_1f8);
  uStack_e8 = 0xff;
  auStack_e4 = (undefined1  [8])0x4000300;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0x400;
  uStack_bc = 1;
  uStack_dc = (ulonglong)*(uint *)(param_2 + 0x324);
  puStack_f0 = (undefined1 *)0xff00000001060101;
  uStack_208 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),5,param_1,0x10);
  uStack_208 = 0xffffffff;
  FUN_18029d150(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),0,aplStack_1e8[0],0x10);
  FUN_18029d000(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),4);
  FUN_18029cdd0(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),&puStack_f8);
  lVar3 = _DAT_180c86938;
  lVar2 = strnlen(&UNK_180a1abc8,0x3f);
  strncpy(lVar3 + 0x1ce0,&UNK_180a1abc8,lVar2);
  *(undefined1 *)(lVar2 + 0x1ce0 + lVar3) = 0;
  FUN_18029e110(*(undefined8 *)(_DAT_180c86938 + 0x1cd8));
  if (plStack_180 != (longlong *)0x0) {
    (**(code **)(*plStack_180 + 0x38))();
  }
  pplStack_110 = &plStack_1b0;
  plStack_1b0 = (longlong *)&UNK_180a3c3e0;
  if (lStack_1a8 == 0) {
    lStack_1a8 = 0;
    uStack_198 = uStack_198 & 0xffffffff00000000;
    plStack_1b0 = (longlong *)&UNK_18098bcb0;
    if (plStack_1b8 != (longlong *)0x0) {
      (**(code **)(*plStack_1b8 + 0x38))();
    }
    if (plStack_1f0 != (longlong *)0x0) {
      (**(code **)(*plStack_1f0 + 0x38))();
    }
    if (aplStack_1e8[0] != (longlong *)0x0) {
      (**(code **)(*aplStack_1e8[0] + 0x38))();
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_80 ^ (ulonglong)auStack_228);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031a020(undefined8 *param_1,longlong param_2,undefined4 param_3)
void FUN_18031a020(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined *puStack_158;
  undefined *puStack_150;
  uint uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined8 uStack_10b;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  int iStack_d8;
  undefined1 auStack_d0 [136];
  ulonglong uStack_48;
  
  uStack_f8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_138 = 0;
  uVar1 = 0x80;
  iVar4 = -1;
  do {
    iVar5 = iVar4;
    uVar1 = uVar1 >> 1;
    iVar4 = iVar5 + 1;
  } while (uVar1 != 0);
  uVar6 = iVar5 + 2;
  uStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0x3f800000;
  uStack_10b = 0x1000001;
  uStack_fc = 0;
  uStack_130 = 0x80;
  uStack_12c = 0x80;
  uStack_128 = 6;
  uStack_120 = 0x1e;
  uStack_10c = 1;
  uStack_124 = uVar6;
  uStack_100 = param_3;
  puStack_f0 = param_1;
  FUN_1806279c0(&puStack_158,param_2 + 0x10);
  uVar1 = uStack_148;
  uVar3 = uStack_148 + 1;
  FUN_1806277c0(&puStack_158,uVar3);
  *(undefined2 *)(puStack_150 + uStack_148) = 0x5f;
  iVar4 = uVar1 + 0x11;
  uStack_148 = uVar3;
  FUN_1806277c0(&puStack_158,iVar4);
  puVar2 = (undefined4 *)(puStack_150 + uStack_148);
  *puVar2 = 0x746c6966;
  puVar2[1] = 0x64657265;
  puVar2[2] = 0x6275635f;
  puVar2[3] = 0x70616d65;
  *(undefined1 *)(puVar2 + 4) = 0;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  puVar7 = &DAT_18098bc73;
  if (puStack_150 != (undefined *)0x0) {
    puVar7 = puStack_150;
  }
  uStack_148 = iVar4;
  iStack_d8 = iVar4;
  strcpy_s(auStack_d0,0x80,puVar7);
  FUN_1800b1230(_DAT_180c86930,param_1,&puStack_e8,&uStack_130);
  uStack_138 = 1;
  puStack_e8 = &UNK_18098bcb0;
  uVar1 = 0;
  do {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        uStack_168 = param_3;
        FUN_1803198f0(param_2,*param_1,uVar3,uVar1);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  puStack_158 = &UNK_180a3c3e0;
  if (puStack_150 == (undefined *)0x0) {
    puStack_150 = (undefined *)0x0;
    uStack_140 = 0;
    puStack_158 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18031a240(undefined8 *param_1,undefined4 param_2)
void FUN_18031a240(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  float *pfStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined1 uStack_96;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined1 uStack_42;
  ulonglong uStack_38;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_c8 = 0;
  pfStack_a8 = (float *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_48 = 1;
  uStack_46 = 1;
  uStack_4c = 0x200020;
  uStack_54 = 0x21;
  uStack_44 = 0x102;
  puStack_b8 = param_1;
  FUN_1802a1bc0(&pfStack_a8);
  fVar11 = 0.0;
  pfVar5 = pfStack_a8;
  iVar7 = 0;
  do {
    fVar8 = 0.0;
    iVar6 = 0;
    do {
      uVar4 = (uint)(fVar11 * 32.0 + fVar8);
      *pfVar5 = (float)(int)uVar4 * 0.0009765625;
      dVar10 = 0.0;
      dVar9 = 0.5;
      for (; uVar4 != 0; uVar4 = (int)uVar4 / 2) {
        uVar1 = uVar4 & 0x80000001;
        if ((int)uVar1 < 0) {
          uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
        }
        dVar10 = dVar10 + (double)(int)uVar1 * dVar9;
        dVar9 = dVar9 * 0.5;
      }
      pfVar5[1] = (float)dVar10;
      pfVar5[2] = 0.0;
      pfVar5[3] = 1.0;
      pfVar5 = pfVar5 + 4;
      iVar6 = iVar6 + 1;
      fVar8 = (float)iVar6;
    } while (fVar8 < 32.0);
    iVar7 = iVar7 + 1;
    fVar11 = (float)iVar7;
  } while (fVar11 < 32.0);
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),3));
  plVar3 = (longlong *)FUN_18023a2e0(uVar2,0);
  *param_1 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_c8 = 1;
  uStack_d8 = *param_1;
  uStack_d0 = param_2;
  FUN_1800a5810(_DAT_180c86938,&pfStack_a8,1,0);
  if (uStack_98._1_1_ == '\0') {
    if (((char)uStack_98 == '\0') && (pfStack_a8 != (float *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    pfStack_a8 = (float *)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}





// 函数: void FUN_18031a470(longlong param_1,longlong param_2)
void FUN_18031a470(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)0x0;
  plVar3 = *(longlong **)(param_1 + 0x58);
  iVar4 = (int)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3);
  if (iVar4 < 1) {
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9970);
    *(longlong **)(param_2 + 0x9970) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9720);
    *(longlong **)(param_2 + 0x9720) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9728);
    *(longlong **)(param_2 + 0x9728) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(undefined4 *)(param_2 + 0x124c0) = 0;
  }
  else {
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9970);
    *(longlong **)(param_2 + 0x9970) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9720);
    *(longlong **)(param_2 + 0x9720) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9728);
    *(longlong **)(param_2 + 0x9728) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int *)(param_2 + 0x124c0) = iVar4;
  }
  if (*(longlong *)(param_2 + 0x9970) == 0) {
    plVar3 = (longlong *)FUN_1800bde30();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    plVar1 = *(longlong **)(param_2 + 0x9970);
    *(longlong **)(param_2 + 0x9970) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(undefined4 *)(param_2 + 0x124c0) = 0;
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x38) + 0x331d) == '\0') &&
     (*(int *)(param_1 + 0x30) != -1)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x30) * 8);
    if (*(longlong *)(lVar2 + 0x40) == 0) {
      plVar5 = *(longlong **)(lVar2 + 0x128);
    }
    else {
      plVar5 = *(longlong **)(lVar2 + 0x28);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar3 = *(longlong **)(param_2 + 0x9988);
  *(longlong **)(param_2 + 0x9988) = plVar5;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



