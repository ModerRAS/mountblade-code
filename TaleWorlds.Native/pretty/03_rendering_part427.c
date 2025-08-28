#include "TaleWorlds.Native.Split.h"

// 03_rendering_part427.c - 13 个函数

// 函数: void FUN_18049cc80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18049cc80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,uint param_6,longlong param_7,longlong param_8,longlong param_9
                  ,longlong param_10,char param_11,uint param_12)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  longlong lVar23;
  int aiStack_88 [2];
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)aiStack_88;
  uVar15 = 0;
  lStack_70 = 8;
  lStack_68 = param_10;
  do {
    lVar17 = *(longlong *)(param_1 + 0x28 + (ulonglong)param_12 * 8);
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x68);
    puVar1 = (undefined8 *)(lVar17 + (ulonglong)*(uint *)(lStack_70 + -4 + lVar14) * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    if (param_11 == '\0') {
      pfVar2 = (float *)(lVar17 + (ulonglong)*(uint *)(lStack_70 + lVar14) * 0x10);
      fStack_50 = *pfVar2;
      fStack_4c = pfVar2[1];
      fStack_48 = pfVar2[2];
      fStack_44 = pfVar2[3];
      uVar3 = *(uint *)(lVar14 + 4 + lStack_70);
    }
    else {
      pfVar2 = (float *)(lVar17 + (ulonglong)*(uint *)(lVar14 + 4 + lStack_70) * 0x10);
      fStack_50 = *pfVar2;
      fStack_4c = pfVar2[1];
      fStack_48 = pfVar2[2];
      fStack_44 = pfVar2[3];
      uVar3 = *(uint *)(lStack_70 + lVar14);
    }
    uStack_60._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
    puVar1 = (undefined8 *)(lVar17 + (ulonglong)uVar3 * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uStack_60._0_4_ = (float)uVar5;
    iVar13 = (int)(uStack_60._4_4_ + 0.5);
    iVar18 = (int)((float)uStack_60 + 0.5);
    iVar20 = (int)(fStack_4c + 0.5);
    uStack_40._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
    iVar16 = (int)(fStack_50 + 0.5);
    uStack_40._0_4_ = (float)uVar7;
    iVar19 = (int)(uStack_40._4_4_ + 0.5);
    iVar11 = (int)((float)uStack_40 + 0.5);
    iVar22 = (iVar19 - iVar13) * (iVar16 - iVar18) - (iVar13 - iVar20) * (iVar18 - iVar11);
    iVar9 = iVar16;
    if (iVar18 < iVar16) {
      iVar9 = iVar18;
    }
    iVar4 = iVar11;
    if (iVar9 < iVar11) {
      iVar4 = iVar9;
    }
    aiStack_88[0] = 0;
    if (0 < iVar4) {
      aiStack_88[0] = iVar4;
    }
    if (iVar16 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar11 < iVar16) {
      iVar11 = iVar16;
    }
    iVar16 = 0x27f;
    if (iVar11 < 0x27f) {
      iVar16 = iVar11;
    }
    iVar9 = iVar20;
    if (iVar13 < iVar20) {
      iVar9 = iVar13;
    }
    iVar11 = iVar19;
    if (iVar9 < iVar19) {
      iVar11 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar11) {
      iVar9 = iVar11;
    }
    lStack_80 = CONCAT44(lStack_80._4_4_,iVar9);
    if (iVar20 < iVar13) {
      iVar20 = iVar13;
    }
    if (iVar19 < iVar20) {
      iVar19 = iVar20;
    }
    iVar11 = 0x167;
    if (iVar19 < 0x167) {
      iVar11 = iVar19;
    }
    if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
      if (0 < iVar22) goto LAB_18049ce60;
    }
    else if (iVar22 != 0) {
LAB_18049ce60:
      if ((((aiStack_88[0] <= iVar16) && (iVar9 <= iVar11)) &&
          (uStack_58._4_4_ = (float)((ulonglong)uVar6 >> 0x20), 0.0 < uStack_58._4_4_)) &&
         ((0.0 < fStack_44 &&
          (uStack_38._4_4_ = (float)((ulonglong)uVar8 >> 0x20), 0.0 < uStack_38._4_4_)))) {
        iVar19 = aiStack_88[0] / 0x50;
        aiStack_88[0] = 0;
        if (0 < iVar19) {
          aiStack_88[0] = iVar19;
        }
        iVar19 = 0;
        if (0 < iVar9 / 0x60) {
          iVar19 = iVar9 / 0x60;
        }
        iVar9 = 7;
        if (iVar16 / 0x50 < 7) {
          iVar9 = iVar16 / 0x50;
        }
        lVar17 = (longlong)iVar19;
        lStack_80 = (longlong)iVar9;
        iVar16 = 3;
        if (iVar11 / 0x60 < 3) {
          iVar16 = iVar11 / 0x60;
        }
        if (lVar17 <= iVar16) {
          lVar23 = (longlong)aiStack_88[0];
          iVar19 = iVar19 << 0x11;
          lVar14 = (iVar16 - lVar17) + 1;
          piVar21 = (int *)(param_10 + (lVar17 * 8 + lVar23) * 4);
          do {
            if (lVar23 <= lStack_80) {
              iVar16 = aiStack_88[0] << 0xe;
              lVar17 = (lStack_80 - lVar23) + 1;
              piVar12 = piVar21;
              do {
                iVar9 = iVar19 + iVar16;
                iVar16 = iVar16 + 0x4000;
                lVar10 = (longlong)(iVar9 + *piVar12);
                *(uint *)(param_7 + lVar10 * 4) = uVar15;
                *(undefined4 *)(param_8 + lVar10 * 4) = param_3;
                *(undefined4 *)(param_9 + lVar10 * 4) = param_4;
                *piVar12 = *piVar12 + 1;
                lVar17 = lVar17 + -1;
                piVar12 = piVar12 + 1;
              } while (lVar17 != 0);
            }
            iVar19 = iVar19 + 0x20000;
            piVar21 = piVar21 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
    }
    uVar15 = uVar15 + 1;
    lStack_70 = lStack_70 + 0x18;
    if (param_6 < uVar15) {
      lStack_78 = param_1;
      uStack_60 = uVar5;
      uStack_58 = uVar6;
      uStack_40 = uVar7;
      uStack_38 = uVar8;
                    // WARNING: Subroutine does not return
      FUN_1808fc050(uStack_30 ^ (ulonglong)aiStack_88);
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049d010(undefined8 param_1,undefined8 param_2)
void FUN_18049d010(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &UNK_180a2d6a0;
  *(undefined4 *)(puVar3 + 0xe) = 0x1f;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x20726574736c6f48;
  *(undefined4 *)(puVar3 + 1) = 0x65646e49;
  *(undefined2 *)((longlong)puVar3 + 0xc) = 0x78;
  uStack_30 = 0xd;
  FUN_1803460a0(puVar2,&puStack_40,puVar2 + 0xe,4);
  puStack_40 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049d150(undefined8 param_1)
void FUN_18049d150(undefined8 param_1)

{
  undefined1 auStack_198 [32];
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined **appuStack_168 [2];
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [136];
  undefined *apuStack_b8 [19];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  uStack_178 = 0;
  puStack_158 = &UNK_1809fcc28;
  puStack_150 = auStack_140;
  auStack_140[0] = 0;
  uStack_148 = 0xd;
  strcpy_s(auStack_140,0x80,&DAT_180a2ca38);
  FUN_180049b30(apuStack_b8,&puStack_158);
  uStack_20 = 4;
  uStack_178 = 1;
  FUN_1803617c0(param_1,appuStack_168,apuStack_b8);
  uStack_178 = 0;
  appuStack_168[0] = apuStack_b8;
  apuStack_b8[0] = &UNK_18098bcb0;
  puStack_158 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_198);
}



undefined8 *
FUN_18049d260(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a2d6a0;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049d2b0(undefined8 param_1,undefined8 param_2)
void FUN_18049d2b0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x118,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar4 = &UNK_180a2dcc8;
  puVar4[0xe] = &UNK_18098bcb0;
  puVar4[0xf] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  puVar4[0xe] = &UNK_180a3c3e0;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(undefined4 *)(puVar4 + 0x10) = 0;
  puVar2[0x12] = &UNK_18098bcb0;
  puVar2[0x13] = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0;
  puVar2[0x12] = &UNK_180a3c3e0;
  puVar2[0x15] = 0;
  puVar2[0x13] = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0;
  puVar4 = puVar2 + 0x16;
  *puVar4 = &UNK_18098bcb0;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0;
  *puVar4 = &UNK_180a3c3e0;
  puVar2[0x19] = 0;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0;
  puVar2[0x1a] = &UNK_18098bcb0;
  puVar2[0x1b] = 0;
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  puVar2[0x1a] = &UNK_180a3c3e0;
  puVar2[0x1d] = 0;
  puVar2[0x1b] = 0;
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  puVar2[0x1e] = &UNK_18098bcb0;
  puVar2[0x1f] = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  puVar2[0x1e] = &UNK_180a3c3e0;
  puVar2[0x21] = 0;
  puVar2[0x1f] = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  puStack_a0 = &UNK_180a3c3e0;
  uStack_88 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_98 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_88 = CONCAT44(uStack_88._4_4_,uVar1);
  *puVar3 = 0x656d614e6873654d;
  *(undefined1 *)(puVar3 + 1) = 0;
  uStack_90 = 8;
  FUN_1803460a0(puVar2,&puStack_a0,puVar4,0,uVar5);
  puStack_a0 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049d300(undefined8 param_1,undefined8 param_2)
void FUN_18049d300(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &UNK_180a2de60;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x20646c6975626552;
  *(undefined4 *)(puVar3 + 1) = 0x64697247;
  *(undefined1 *)((longlong)puVar3 + 0xc) = 0;
  uStack_30 = 0xc;
  FUN_1803460a0(puVar2,&puStack_40,0,0xb);
  puStack_40 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_18049d430(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0xb8,8,0x1a,0xfffffffffffffffe);
  FUN_1802565b0(puVar1,param_1,param_2);
  *puVar1 = &UNK_180a2d5c0;
  puVar1[0x16] = 0;
  return puVar1;
}



undefined8 FUN_18049d4e0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1802566c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049d530(undefined8 *param_1)
void FUN_18049d530(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_b8 [32];
  code *pcStack_98;
  undefined *puStack_88;
  undefined1 *puStack_80;
  uint uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  int iStack_40;
  undefined auStack_38 [16];
  ulonglong uStack_28;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uStack_68 = 0;
  *param_1 = &UNK_180a0e170;
  *param_1 = &UNK_180a2d448;
  pcStack_98 = FUN_180627b90;
  puStack_58 = param_1;
  FUN_1808fc838(param_1 + 2,0x20,0x20,FUN_180627850);
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0xffffffff;
  FUN_18049dc80();
  (**(code **)(_DAT_180c924d0 + 0x10))(&DAT_180c924d0,&DAT_1809fd128);
  *(undefined4 *)(param_1 + 1) = 0;
  puStack_50 = &UNK_1809fdc18;
  puStack_48 = auStack_38;
  auStack_38[0] = 0;
  iStack_40 = 6;
  strcpy_s(auStack_38,0x10,&UNK_180a3c07c);
  uStack_68 = 1;
  puStack_88 = &UNK_180a3c3e0;
  uStack_70 = 0;
  puStack_80 = (undefined1 *)0x0;
  uStack_78 = 0;
  FUN_1806277c0(&puStack_88,iStack_40);
  if (0 < iStack_40) {
    puVar1 = &DAT_18098bc73;
    if (puStack_48 != (undefined *)0x0) {
      puVar1 = puStack_48;
    }
                    // WARNING: Subroutine does not return
    memcpy(puStack_80,puVar1,(longlong)(iStack_40 + 1));
  }
  if (puStack_48 != (undefined *)0x0) {
    uStack_78 = 0;
    if (puStack_80 != (undefined1 *)0x0) {
      *puStack_80 = 0;
    }
  }
  uVar3 = uStack_78;
  uStack_68 = 0;
  puStack_50 = &UNK_18098bcb0;
  uVar2 = uStack_78 + 8;
  FUN_1806277c0(&puStack_88,uVar2);
  *(undefined8 *)(puStack_80 + uStack_78) = 0x2f73656c75646f4d;
  *(undefined1 *)((longlong)(puStack_80 + uStack_78) + 8) = 0;
  uStack_78 = uVar2;
  if (0 < _DAT_180c924e0) {
    FUN_1806277c0(&puStack_88,uVar2 + _DAT_180c924e0);
                    // WARNING: Subroutine does not return
    memcpy(puStack_80 + uStack_78,_DAT_180c924d8,(longlong)(_DAT_180c924e0 + 1));
  }
  uVar3 = uVar3 + 9;
  FUN_1806277c0(&puStack_88,(ulonglong)uVar3);
  *(undefined2 *)(puStack_80 + uStack_78) = 0x2f;
  uStack_78 = uVar3;
  if (puStack_80 != (undefined1 *)0x0) {
    FUN_1806277c0(&DAT_180c924f0,uVar3);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(_DAT_180c924f8,puStack_80,uVar3);
  }
  _DAT_180c92500 = uVar3;
  if (_DAT_180c924f8 != 0) {
    *(undefined1 *)((ulonglong)uVar3 + _DAT_180c924f8) = 0;
  }
  _DAT_180c9250c = uStack_70._4_4_;
  *(undefined4 *)(param_1 + 0x84) = 0;
  puStack_88 = &UNK_180a3c3e0;
  if (puStack_80 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_80 = (undefined1 *)0x0;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_b8,0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049d800(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_18049d800(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_180057110(param_2);
  FUN_180052200(_DAT_180c86870,param_2);
  if ((param_2[1] - *param_2 & 0xffffffffffffffe0U) == 0) {
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,uVar4);
    *(undefined1 *)puVar2 = 0;
    puStack_58 = (undefined8 *)puVar2;
    uVar1 = FUN_18064e990(puVar2);
    *puVar2 = 0x6974614e;
    *(undefined2 *)(puVar2 + 1) = 0x6576;
    *(undefined1 *)((longlong)puVar2 + 6) = 0;
    uStack_50 = 6;
    uStack_48._0_4_ = uVar1;
    FUN_180066df0(param_2,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (undefined8 *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x616c7069746c754d;
    *(undefined4 *)(puVar3 + 1) = 0x726579;
    uStack_30 = 0xb;
    uStack_28._0_4_ = uVar1;
    FUN_180066df0(param_2,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (undefined8 *)0x0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    puStack_40 = &UNK_18098bcb0;
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x43786f42646e6153;
    *(undefined4 *)(puVar3 + 1) = 0x65726f;
    uStack_50 = 0xb;
    uStack_48._0_4_ = uVar1;
    FUN_180066df0(param_2,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (undefined8 *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x786f42646e6153;
    uStack_30 = 7;
    uStack_28._0_4_ = uVar1;
    FUN_180066df0(param_2,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (undefined8 *)0x0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    puStack_40 = &UNK_18098bcb0;
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    *puVar3 = 0x61426d6f74737543;
    *(undefined4 *)(puVar3 + 1) = 0x656c7474;
    *(undefined1 *)((longlong)puVar3 + 0xc) = 0;
    uStack_50 = 0xc;
    uStack_48._0_4_ = uVar1;
    FUN_180066df0(param_2,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (undefined8 *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(undefined1 *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar1 = FUN_18064e990(puVar3);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
    *puVar3 = 0x646f4d79726f7453;
    *(undefined2 *)(puVar3 + 1) = 0x65;
    uStack_30 = 9;
    FUN_180066df0(param_2,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033383a)
// WARNING: Removing unreachable block (ram,0x0001803338cb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049dbc0(void)
void FUN_18049dbc0(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  char cVar10;
  float fVar11;
  longlong *aplStackX_8 [2];
  longlong *plStackX_18;
  longlong *plStackX_20;
  undefined8 uVar12;
  
  if ((((DAT_180c96098 != '\0') && (_DAT_180c96070 != 0)) &&
      (*(int *)(_DAT_180c96070 + 0x87b7a8) == 2)) && (*(char *)(_DAT_180c96070 + 0x87b750) != '\0'))
  {
    lVar5 = *(longlong *)(_DAT_180c86870 + 0x3d8);
    fVar11 = *(float *)(_DAT_180c86870 + 0x220) + *(float *)(lVar5 + 0x144);
    *(float *)(lVar5 + 0x144) = fVar11;
    if (*(float *)(lVar5 + 0x13c) <= fVar11) {
      *(float *)(lVar5 + 0x144) = fVar11 - *(float *)(lVar5 + 0x13c);
      FUN_1803224b0(lVar5);
      FUN_1803277f0(lVar5);
      *(longlong *)(lVar5 + 0x150) = *(longlong *)(lVar5 + 0x150) + 1;
      *(longlong *)(lVar5 + 0x160) = *(longlong *)(lVar5 + 0x160) + 1;
      uVar12 = 0xfffffffffffffffe;
      piVar9 = *(int **)(lVar5 + 0x230);
      lVar7 = *(longlong *)(lVar5 + 0x238) - (longlong)piVar9;
      while( true ) {
        if ((ulonglong)(lVar7 >> 2) < 0xb) {
          return;
        }
        iVar2 = *piVar9;
        puVar3 = *(undefined8 **)(lVar5 + 0x148);
        if (puVar3 != (undefined8 *)0x0) {
          if ((undefined *)*puVar3 == &UNK_180a1b2d8) {
            cVar10 = *(char *)(puVar3 + 2) != '\0';
          }
          else {
            cVar10 = (**(code **)((undefined *)*puVar3 + 0x68))();
          }
          uVar6 = _DAT_180c82868;
          if (cVar10 == '\0') {
            aplStackX_8[0] = *(longlong **)(lVar5 + 0x148);
            if (aplStackX_8[0] != (longlong *)0x0) {
              (**(code **)(*aplStackX_8[0] + 0x28))();
            }
            FUN_18005e6a0(uVar6,aplStackX_8,0);
          }
        }
        plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3,uVar12);
        plStackX_18 = plVar8;
        FUN_180049830(plVar8);
        *plVar8 = (longlong)&UNK_180a1b2d8;
        *(int *)(plVar8 + 0x18) = iVar2;
        plVar8[0x19] = lVar5;
        plStackX_20 = plVar8;
        (**(code **)(*plVar8 + 0x28))(plVar8);
        plStackX_20 = *(longlong **)(lVar5 + 0x148);
        *(longlong **)(lVar5 + 0x148) = plVar8;
        if (plStackX_20 != (longlong *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        uVar6 = _DAT_180c82868;
        plStackX_18 = *(longlong **)(lVar5 + 0x148);
        if (plStackX_18 != (longlong *)0x0) {
          (**(code **)(*plStackX_18 + 0x28))();
        }
        FUN_18005e110(uVar6,&plStackX_18);
        piVar4 = *(int **)(lVar5 + 0x238);
        for (piVar9 = *(int **)(lVar5 + 0x230); (piVar9 != piVar4 && (*piVar9 != iVar2));
            piVar9 = piVar9 + 1) {
        }
        piVar1 = piVar9 + 1;
        if (piVar1 < piVar4) break;
        *(int **)(lVar5 + 0x238) = piVar4 + -1;
        piVar9 = *(int **)(lVar5 + 0x230);
        lVar7 = (longlong)(piVar4 + -1) - (longlong)piVar9;
      }
                    // WARNING: Subroutine does not return
      memmove(piVar9,piVar1,(longlong)piVar4 - (longlong)piVar1);
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00018033383a)
// WARNING: Removing unreachable block (ram,0x0001803338cb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049dbfe(void)
void FUN_18049dbfe(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong in_RAX;
  int *piVar9;
  char cVar10;
  float fVar11;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  longlong *in_stack_00000040;
  longlong *in_stack_00000048;
  undefined8 uVar12;
  
  lVar5 = *(longlong *)(in_RAX + 0x3d8);
  fVar11 = *(float *)(in_RAX + 0x220) + *(float *)(lVar5 + 0x144);
  *(float *)(lVar5 + 0x144) = fVar11;
  if (fVar11 < *(float *)(lVar5 + 0x13c)) {
    return;
  }
  *(float *)(lVar5 + 0x144) = fVar11 - *(float *)(lVar5 + 0x13c);
  FUN_1803224b0(lVar5);
  FUN_1803277f0(lVar5);
  *(longlong *)(lVar5 + 0x150) = *(longlong *)(lVar5 + 0x150) + 1;
  *(longlong *)(lVar5 + 0x160) = *(longlong *)(lVar5 + 0x160) + 1;
  uVar12 = 0xfffffffffffffffe;
  piVar9 = *(int **)(lVar5 + 0x230);
  lVar7 = *(longlong *)(lVar5 + 0x238) - (longlong)piVar9;
  while( true ) {
    if ((ulonglong)(lVar7 >> 2) < 0xb) {
      return;
    }
    iVar2 = *piVar9;
    puVar3 = *(undefined8 **)(lVar5 + 0x148);
    if (puVar3 != (undefined8 *)0x0) {
      if ((undefined *)*puVar3 == &UNK_180a1b2d8) {
        cVar10 = *(char *)(puVar3 + 2) != '\0';
      }
      else {
        cVar10 = (**(code **)((undefined *)*puVar3 + 0x68))();
      }
      uVar6 = _DAT_180c82868;
      if (cVar10 == '\0') {
        in_stack_00000030 = *(longlong **)(lVar5 + 0x148);
        if (in_stack_00000030 != (longlong *)0x0) {
          (**(code **)(*in_stack_00000030 + 0x28))();
        }
        FUN_18005e6a0(uVar6,&stack0x00000030,0);
      }
    }
    plVar8 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0xd0,8,3,uVar12);
    in_stack_00000040 = plVar8;
    FUN_180049830(plVar8);
    *plVar8 = (longlong)&UNK_180a1b2d8;
    *(int *)(plVar8 + 0x18) = iVar2;
    plVar8[0x19] = lVar5;
    in_stack_00000048 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
    in_stack_00000048 = *(longlong **)(lVar5 + 0x148);
    *(longlong **)(lVar5 + 0x148) = plVar8;
    if (in_stack_00000048 != (longlong *)0x0) {
      (**(code **)(*in_stack_00000048 + 0x38))();
    }
    uVar6 = _DAT_180c82868;
    in_stack_00000040 = *(longlong **)(lVar5 + 0x148);
    if (in_stack_00000040 != (longlong *)0x0) {
      (**(code **)(*in_stack_00000040 + 0x28))();
    }
    FUN_18005e110(uVar6,&stack0x00000040);
    piVar4 = *(int **)(lVar5 + 0x238);
    for (piVar9 = *(int **)(lVar5 + 0x230); (piVar9 != piVar4 && (*piVar9 != iVar2));
        piVar9 = piVar9 + 1) {
    }
    piVar1 = piVar9 + 1;
    if (piVar1 < piVar4) break;
    *(int **)(lVar5 + 0x238) = piVar4 + -1;
    piVar9 = *(int **)(lVar5 + 0x230);
    lVar7 = (longlong)(piVar4 + -1) - (longlong)piVar9;
  }
                    // WARNING: Subroutine does not return
  memmove(piVar9,piVar1,(longlong)piVar4 - (longlong)piVar1);
}





// 函数: void FUN_18049dc6c(void)
void FUN_18049dc6c(void)

{
  return;
}





// 函数: void FUN_18049dc71(void)
void FUN_18049dc71(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00018049e162)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18049dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  _DAT_180c95ef8 = 0;
  uRam0000000180c95f00 = 0;
  _DAT_180c95f08 = 0;
  _DAT_180c95f10 = 3;
  _DAT_180c95f20 = 0xffffffff;
  _DAT_180c95f18 = 0;


// 函数: void FUN_18049e190(void)
void FUN_18049e190(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  FUN_1802567b0(_DAT_180c868a8[0x15],&DAT_180a2d688,&UNK_180a2ca80,FUN_18049d430,0xfffffffffffffffe)
  ;
  puVar2 = (undefined4 *)FUN_18008d660(_DAT_180c868a8 + 0x1c,&DAT_180a2d688);
  *puVar2 = 1;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *puVar3 = &UNK_180a2d430;
  *puVar3 = &UNK_180a2d418;
  puVar1 = puVar3 + 1;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 6) = 3;
  *puVar1 = puVar1;
  puVar3[2] = puVar1;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  *_DAT_180c868a8 = puVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



