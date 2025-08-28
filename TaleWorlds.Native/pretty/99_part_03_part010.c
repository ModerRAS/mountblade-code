#include "TaleWorlds.Native.Split.h"

// 99_part_03_part010.c - 3 个函数

// 函数: void FUN_1801d0510(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801d0510(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(param_1 + 0x88);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar7 = *(undefined8 **)(param_1 + 0xe0);
  puVar3 = (undefined8 *)0x0;
  if (puVar7 < *(undefined8 **)(param_1 + 0xe8)) {
    *(undefined8 **)(param_1 + 0xe0) = puVar7 + 1;
    *puVar7 = param_2;
    goto LAB_1801d0679;
  }
  puVar4 = *(undefined8 **)(param_1 + 0xd8);
  lVar5 = (longlong)puVar7 - (longlong)puVar4 >> 3;
  if (lVar5 == 0) {
    lVar5 = 1;
LAB_1801d05c0:
    puVar3 = (undefined8 *)
             FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,*(undefined1 *)(param_1 + 0xf0),param_4,uVar9);
    puVar7 = *(undefined8 **)(param_1 + 0xe0);
    puVar4 = *(undefined8 **)(param_1 + 0xd8);
    puVar8 = puVar3;
  }
  else {
    lVar5 = lVar5 * 2;
    puVar8 = puVar3;
    if (lVar5 != 0) goto LAB_1801d05c0;
  }
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_2;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  plVar6 = *(longlong **)(param_1 + 0xd8);
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = *(longlong **)(param_1 + 0xd8);
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
  *(undefined8 **)(param_1 + 0xd8) = puVar8;
  *(undefined8 **)(param_1 + 0xe0) = puVar3 + 1;
  *(undefined8 **)(param_1 + 0xe8) = puVar8 + lVar5;
LAB_1801d0679:
  iVar2 = _Mtx_unlock(param_1 + 0x88);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



longlong *
FUN_1801d06b0(undefined8 param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puStack_38;
  longlong lStack_30;
  int iStack_28;
  
  *param_2 = (longlong)&UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = (longlong)&UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_3 + 8);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,puVar3,*(code **)(*param_2 + 0x10),param_4,1,0xfffffffffffffffe);
  uVar2 = FUN_1800ade00(*(undefined4 *)(param_7 + 0xa4));
  FUN_180627910(&puStack_38,uVar2);
  FUN_1806277c0(param_2,(int)param_2[2] + 1);
  *(undefined1 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(undefined1 *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  lVar1 = param_2[2];
  iVar4 = (int)lVar1 + 1;
  *(int *)(param_2 + 2) = iVar4;
  if (0 < iStack_28) {
    FUN_1806277c0(param_2,iVar4 + iStack_28);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_2 + 2) + param_2[1],lStack_30,(longlong)(iStack_28 + 1));
  }
  FUN_1806277c0(param_2,(int)lVar1 + 2);
  *(undefined1 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(undefined1 *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  FUN_180628420(param_2,param_5);
  FUN_1806277c0(param_2,(int)param_2[2] + 1);
  *(undefined1 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(undefined1 *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  FUN_180628570(param_2,param_6);
  FUN_1806277c0(param_2,(int)param_2[2] + 1);
  *(undefined1 *)((ulonglong)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(undefined1 *)((ulonglong)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  FUN_180628380(param_2,param_4);
  puStack_38 = &UNK_180a3c3e0;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return param_2;
}



undefined8
FUN_1801d0890(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5,undefined2 *param_6,undefined4 *param_7,undefined8 *param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined2 auStack_68 [4];
  undefined2 auStack_60 [4];
  undefined4 auStack_58 [2];
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_38 = (undefined8 *)0x0;
  puStack_30 = (undefined8 *)0x0;
  uStack_28 = 0;
  uStack_20 = 3;
  auStack_68[0] = 0x2e;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180057980(0,&puStack_38,auStack_68);
  }
  puVar4 = puStack_30;
  puVar3 = puStack_38;
  puVar2 = puVar3;
  if (((longlong)puStack_30 - (longlong)puStack_38 & 0xffffffffffffffe0U) == 0xe0) {
    puVar5 = &DAT_18098bc73;
    if ((undefined *)puStack_38[1] != (undefined *)0x0) {
      puVar5 = (undefined *)puStack_38[1];
    }
    (**(code **)(*param_3 + 0x10))(param_3,puVar5);
    if (*(int *)(puVar3 + 6) == 2) {
      pcVar1 = (char *)puVar3[5];
      if (((*pcVar1 == 'v') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
        *param_2 = 0;
      }
      else {
        pcVar1 = (char *)puVar3[5];
        if (((*pcVar1 == 'p') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
          *param_2 = 1;
        }
        else {
          pcVar1 = (char *)puVar3[5];
          if (((*pcVar1 == 'd') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
            *param_2 = 2;
          }
          else {
            pcVar1 = (char *)puVar3[5];
            if (((*pcVar1 == 'h') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
              *param_2 = 3;
            }
            else {
              pcVar1 = (char *)puVar3[5];
              if (((*pcVar1 == 'g') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
                *param_2 = 5;
              }
              else {
                pcVar1 = (char *)puVar3[5];
                if (((*pcVar1 == 'c') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
                  *param_2 = 4;
                }
              }
            }
          }
        }
      }
    }
    puVar5 = &DAT_18098bc73;
    if ((undefined *)puVar3[9] != (undefined *)0x0) {
      puVar5 = (undefined *)puVar3[9];
    }
    FUN_18010cbc0(puVar5,&UNK_180a02954,auStack_60);
    puVar5 = &DAT_18098bc73;
    if ((undefined *)puVar3[0xd] != (undefined *)0x0) {
      puVar5 = (undefined *)puVar3[0xd];
    }
    FUN_18010cbc0(puVar5,&UNK_180a02954,param_4);
    puVar5 = &DAT_18098bc73;
    if ((undefined *)puVar3[0x11] != (undefined *)0x0) {
      puVar5 = (undefined *)puVar3[0x11];
    }
    FUN_18010cbc0(puVar5,&UNK_180a02954,auStack_58);
    puVar5 = &DAT_18098bc73;
    if ((undefined *)puVar3[0x15] != (undefined *)0x0) {
      puVar5 = (undefined *)puVar3[0x15];
    }
    FUN_18010cbc0(puVar5,&UNK_180a02954,auStack_50);
    puVar5 = &DAT_18098bc73;
    if ((undefined *)puVar3[0x19] != (undefined *)0x0) {
      puVar5 = (undefined *)puVar3[0x19];
    }
    FUN_18010cbc0(puVar5,&UNK_180a02954,&uStack_48);
    *param_6 = auStack_60[0];
    *param_5 = auStack_58[0];
    *param_7 = auStack_50[0];
    *param_8 = uStack_48;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puVar3 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  return uVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d0bb0(void)
void FUN_1801d0bb0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_2b8 [52];
  int iStack_284;
  undefined *puStack_280;
  undefined8 *puStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined4 uStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined4 uStack_218;
  longlong lStack_1f0;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  longlong *plStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [72];
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [72];
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [72];
  ulonglong uStack_38;
  
  uStack_160 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
  uVar10 = 0;
  puStack_1d8 = (undefined8 *)0x0;
  puStack_1d0 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1c0 = 3;
  puStack_260 = &UNK_180a3c3e0;
  uStack_248 = 0;
  puStack_258 = (undefined8 *)0x0;
  uStack_250 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_258 = puVar5;
  uVar4 = FUN_18064e990(puVar5);
  *puVar5 = 0x5f65737566666964;
  *(undefined4 *)(puVar5 + 1) = 0x656b6162;
  *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
  uStack_250 = 0xc;
  uStack_248._0_4_ = uVar4;
  FUN_180066df0(&puStack_1d8,&puStack_260);
  puStack_260 = &UNK_180a3c3e0;
  if (puStack_258 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_258 = (undefined8 *)0x0;
  uStack_248 = (ulonglong)uStack_248._4_4_ << 0x20;
  puStack_260 = &UNK_18098bcb0;
  puStack_280 = &UNK_180a3c3e0;
  uStack_268 = 0;
  puStack_278 = (undefined8 *)0x0;
  uStack_270 = 0;
  puVar5 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar5 = 0;
  puStack_278 = puVar5;
  uVar4 = FUN_18064e990(puVar5);
  *puVar5 = 0x625f6c616d726f6e;
  *(undefined4 *)(puVar5 + 1) = 0x656b61;
  uStack_270 = 0xb;
  uStack_268._0_4_ = uVar4;
  FUN_180066df0(&puStack_1d8,&puStack_280);
  puVar5 = puStack_1d8;
  puStack_280 = &UNK_180a3c3e0;
  if (puStack_278 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_278 = (undefined8 *)0x0;
  uStack_268 = (ulonglong)uStack_268._4_4_ << 0x20;
  puStack_280 = &UNK_18098bcb0;
  iStack_284 = 0;
  uStack_1a8 = (longlong)puStack_1d0 - (longlong)puStack_1d8 >> 5;
  puVar9 = puVar5;
  puVar2 = puStack_1d0;
  if (uStack_1a8 != 0) {
    do {
      plVar6 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&plStack_1b0,puVar5 + uVar10 * 4,0);
      lVar1 = *plVar6;
      lStack_240 = lVar1;
      lStack_1f0 = lVar1;
      if (plStack_1b0 != (longlong *)0x0) {
        (**(code **)(*plStack_1b0 + 0x38))();
      }
      if (lVar1 != 0) {
        puStack_158 = &UNK_1809fcc58;
        puStack_150 = auStack_140;
        auStack_140[0] = 0;
        uStack_148 = 10;
        strcpy_s(auStack_140,0x40,&DAT_180a0d648);
        uVar7 = FUN_180240430(lVar1,&puStack_158,0);
        puStack_158 = &UNK_18098bcb0;
        puStack_f8 = &UNK_1809fcc58;
        puStack_f0 = auStack_e0;
        auStack_e0[0] = 0;
        uStack_e8 = 0x13;
        strcpy_s(auStack_e0,0x40,&UNK_180a0d658);
        uVar8 = FUN_180240430(lVar1,&puStack_f8,0);
        puStack_f8 = &UNK_18098bcb0;
        puStack_98 = &UNK_1809fcc58;
        puStack_90 = auStack_80;
        auStack_80[0] = 0;
        uStack_88 = 0x1c;
        strcpy_s(auStack_80,0x40,&UNK_180a0d610);
        uStack_238 = FUN_180240430(lVar1,&puStack_98,0);
        puStack_98 = &UNK_18098bcb0;
        puStack_230 = (undefined8 *)0x0;
        puStack_228 = (undefined8 *)0x0;
        puStack_220 = (undefined8 *)0x0;
        uStack_218 = 3;
        puVar9 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,8,3);
        *puVar9 = uVar7;
        puVar5 = puVar9 + 1;
        puStack_230 = puVar9;
        puStack_228 = puVar5;
        puStack_220 = puVar5;
        puStack_1e0 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,3);
        if (puVar9 == puVar5) {
          *puStack_1e0 = uVar8;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar9);
        }
                    // WARNING: Subroutine does not return
        memmove(puStack_1e0,puVar9,8);
      }
      iStack_284 = iStack_284 + 1;
      uVar10 = (ulonglong)iStack_284;
      puVar2 = puStack_1d0;
    } while (uVar10 < uStack_1a8);
  }
  for (; puVar3 = puStack_1d0, puVar9 != puStack_1d0; puVar9 = puVar9 + 4) {
    puStack_1d0 = puVar2;
    (**(code **)*puVar9)(puVar9,0);
    puVar2 = puStack_1d0;
    puStack_1d0 = puVar3;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puStack_1d0 = puVar2;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2b8);
  }
  puStack_1d0 = puVar2;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801d1390(undefined8 param_1,undefined8 param_2)
void FUN_1801d1390(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined1 auStack_288 [32];
  longlong lStack_268;
  int aiStack_258 [2];
  longlong *plStack_250;
  undefined *puStack_248;
  undefined4 *puStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  longlong alStack_228 [3];
  undefined4 uStack_210;
  longlong lStack_200;
  undefined8 uStack_1f8;
  uint uStack_1f0;
  undefined2 uStack_1ec;
  undefined8 *puStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  uint *puStack_1c8;
  longlong lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  longlong alStack_1a8 [3];
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined1 *puStack_170;
  undefined4 uStack_168;
  undefined1 auStack_160 [136];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_188 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_288;
  puStack_248 = &UNK_180a3c3e0;
  uStack_230 = 0;
  puStack_240 = (undefined4 *)0x0;
  uStack_238 = 0;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x18,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_240 = puVar4;
  uVar3 = FUN_18064e990(puVar4);
  uStack_230 = CONCAT44(uStack_230._4_4_,uVar3);
  *puVar4 = 0x726f6c66;
  puVar4[1] = 0x69625f61;
  puVar4[2] = 0x6f626c6c;
  puVar4[3] = 0x5f647261;
  *(undefined8 *)(puVar4 + 4) = 0x72656666756267;
  uStack_238 = 0x17;
  plVar5 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&plStack_250,&puStack_248,0);
  lVar2 = *plVar5;
  lStack_200 = lVar2;
  if (plStack_250 != (longlong *)0x0) {
    (**(code **)(*plStack_250 + 0x38))();
  }
  if (lVar2 != 0) {
    alStack_228[0] = 0;
    alStack_228[1] = 0;
    alStack_228[2] = 0;
    uStack_210 = 3;
    aiStack_258[0] = 8;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x8000;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 2;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x80;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x400;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x200;
    FUN_1800571e0(alStack_228,aiStack_258);
    aiStack_258[0] = 0x800000;
    FUN_1800571e0(alStack_228,aiStack_258);
    alStack_1a8[0] = 0;
    alStack_1a8[1] = 0;
    alStack_1a8[2] = 0;
    uStack_190 = 3;
    puStack_178 = &UNK_1809fcc28;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0x1c;
    strcpy_s(auStack_160,0x80,&UNK_180a0d610);
    plStack_250 = (longlong *)FUN_180240430(lVar2,&puStack_178,0);
    FUN_18005ea90(alStack_1a8,&plStack_250);
    puStack_178 = &UNK_18098bcb0;
    puStack_d8 = &UNK_1809fcc28;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 10;
    strcpy_s(auStack_c0,0x80,&DAT_180a0d648);
    plStack_250 = (longlong *)FUN_180240430(lVar2,&puStack_d8,0);
    FUN_18005ea90(alStack_1a8,&plStack_250);
    puStack_d8 = &UNK_18098bcb0;
    puStack_1c8 = (uint *)0x0;
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 3;
    lStack_268 = lVar2;
    FUN_1801d7910(0,0,&puStack_1c8,alStack_228);
    puStack_1e8 = (undefined8 *)0x0;
    lStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 3;
    lStack_268 = lVar2;
    FUN_1801d7ad0(0,0,&puStack_1e8,alStack_1a8);
    plVar5 = (longlong *)(lStack_1c0 - (longlong)puStack_1c8 >> 2);
    aiStack_258[0] = 0;
    puVar6 = puStack_1e8;
    plStack_250 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      uVar10 = lStack_1e0 - (longlong)puStack_1e8 >> 3;
      puVar9 = puStack_1c8;
      do {
        iVar8 = 0;
        uVar1 = *puVar9;
        puVar7 = puVar6;
        if (uVar10 != 0) {
          do {
            uStack_1f8 = *puVar7;
            uStack_1ec = 0;
            uStack_1f0 = uVar1 & 0xffc78f;
            FUN_1801e66c0(param_2,&lStack_200);
            iVar8 = iVar8 + 1;
            puVar6 = puStack_1e8;
            plVar5 = plStack_250;
            puVar7 = puVar7 + 1;
          } while ((ulonglong)(longlong)iVar8 < uVar10);
        }
        aiStack_258[0] = aiStack_258[0] + 1;
        puVar9 = puVar9 + 1;
        puVar4 = puStack_240;
      } while ((longlong *)(longlong)aiStack_258[0] < plVar5);
    }
    if (puVar6 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (puStack_1c8 != (uint *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puStack_1c8);
    }
    if (alStack_1a8[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (alStack_228[0] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puStack_248 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




