#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part167.c - 4 个函数

// 函数: void FUN_180150480(undefined8 param_1)
void FUN_180150480(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = _DAT_180c8a9c0;
  func_0x000180315fe0(_DAT_180c8a9c0 + 8,*(undefined4 *)(_DAT_180c8a9c0 + 0x230),param_1);
  *(int *)(lVar1 + 0x230) = *(int *)(lVar1 + 0x230) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1801504b0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &UNK_180a07310;
  param_1[1] = &UNK_180a07300;
  param_1[2] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  _DAT_180c8a9c0 = param_1;
  *(undefined4 *)(param_1 + 0x46) = 0;
  plVar1 = (longlong *)param_1[0x44];
  param_1[0x44] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x45];
  param_1[0x45] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180150560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180150560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong *plStack_48;
  undefined4 uStack_40;
  undefined *puStack_38;
  longlong lStack_30;
  uint uStack_28;
  undefined8 uStack_20;
  
  (*(code *)_DAT_180c8f008[0x1d])
            (&DAT_180a072b8,&DAT_180a072d0,(code *)_DAT_180c8f008[0x1d],param_4,0,0xfffffffffffffffe
            );
  (*(code *)_DAT_180c8f008[0x1f])(&UNK_180a072f0,FUN_180150480);
  FUN_180310b50(param_1);
  (**(code **)(param_1 + 0x68))();
  *(longlong *)(param_1 + 0x10) = param_1;
  lVar2 = _DAT_180c86870;
  puStack_38 = &UNK_180a3c3e0;
  uStack_20 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  uVar4 = 1;
  uVar1 = *(uint *)(_DAT_180c86870 + 0x180);
  uVar3 = (ulonglong)uVar1;
  if (*(longlong *)(_DAT_180c86870 + 0x178) != 0) {
    FUN_1806277c0(&puStack_38,uVar3);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(lStack_30,*(undefined8 *)(lVar2 + 0x178),uVar3,param_4,uVar4);
  }
  if (lStack_30 != 0) {
    *(undefined1 *)(uVar3 + lStack_30) = 0;
  }
  uStack_20 = CONCAT44(*(undefined4 *)(lVar2 + 0x18c),(undefined4)uStack_20);
  uStack_28 = uVar1;
  FUN_1806277c0(&puStack_38,5);
  *(undefined4 *)((ulonglong)uStack_28 + lStack_30) = 0x73676f6c;
  *(undefined2 *)((undefined4 *)((ulonglong)uStack_28 + lStack_30) + 1) = 0x2f;
  uStack_28 = 5;
  (**(code **)(*_DAT_180c8f008 + 0x50))(_DAT_180c8f008,&puStack_38);
  (**(code **)(_DAT_180c8a9c0 + 0x38))();
  plStack_48 = *(longlong **)(_DAT_180c86870 + 0x3c0);
  if (plStack_48 == (longlong *)0x0) {
    uStack_40 = 0xffffffff;
  }
  else {
    uStack_40 = (**(code **)(*plStack_48 + 8))(plStack_48);
  }
  (**(code **)(_DAT_180c8a9c0 + 0x70))(&plStack_48);
  puStack_38 = &UNK_180a3c3e0;
  if (lStack_30 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



undefined8 *
FUN_180150730(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x11,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x6c726f57656c6154;
  puVar1[1] = 0x6e69676e452e7364;
  *(undefined2 *)(puVar1 + 2) = 0x65;
  *(undefined4 *)(param_2 + 2) = 0x11;
  return param_2;
}



undefined8 *
FUN_1801507b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0x1f,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (undefined8 *)param_2[1];
  *puVar1 = 0x6c726f57656c6154;
  puVar1[1] = 0x6e69676e452e7364;
  puVar1[2] = 0x656e69676e452e65;
  puVar1[3] = 0x646567616e614d;
  *(undefined4 *)(param_2 + 2) = 0x1f;
  return param_2;
}



// WARNING: Removing unreachable block (ram,0x000180150a08)
// WARNING: Removing unreachable block (ram,0x000180150a14)
// WARNING: Removing unreachable block (ram,0x000180150a17)
// WARNING: Removing unreachable block (ram,0x0001801509ea)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180150830(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_180150830(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  undefined *puStack_60;
  undefined1 *puStack_58;
  undefined4 uStack_50;
  ulonglong uStack_48;
  
  puVar7 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar7 = *(undefined **)(param_2 + 8);
  }
  iVar2 = (**(code **)(_DAT_180c8a9c0 + 400))(puVar7);
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
  }
  iVar3 = (**(code **)(_DAT_180c8f008 + 200))(iVar2);
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      lVar5 = (**(code **)(_DAT_180c8f008 + 0xd0))(iVar2,iVar9);
      puVar7 = &DAT_18098bc73;
      if (*(undefined **)(lVar5 + 8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(lVar5 + 8);
      }
      puStack_60 = &UNK_180a3c3e0;
      uStack_48 = 0;
      puStack_58 = (undefined1 *)0x0;
      uStack_50 = 0;
      if (puVar7 != (undefined *)0x0) {
        lVar5 = -1;
        do {
          lVar8 = lVar5;
          lVar5 = lVar8 + 1;
        } while (puVar7[lVar5] != '\0');
        if ((int)lVar5 != 0) {
          iVar3 = (int)lVar8 + 2;
          iVar2 = iVar3;
          if (iVar3 < 0x10) {
            iVar2 = 0x10;
          }
          puVar6 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,0x13);
          *puVar6 = 0;
          puStack_58 = puVar6;
          uVar4 = FUN_18064e990(puVar6);
          uStack_48 = CONCAT44(uStack_48._4_4_,uVar4);
                    // WARNING: Subroutine does not return
          memcpy(puVar6,puVar7,iVar3);
        }
      }
      uStack_50 = 0;
      puVar1 = *(undefined8 **)(param_3 + 8);
      if (puVar1 < *(undefined8 **)(param_3 + 0x10)) {
        *(undefined8 **)(param_3 + 8) = puVar1 + 4;
        *puVar1 = &UNK_18098bcb0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        *puVar1 = &UNK_180a3c3e0;
        puVar1[3] = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        FUN_1806277c0(puVar1,0);
        puVar6 = (undefined1 *)0;
      }
      else {
        FUN_180059820(param_3,&puStack_60);
        puVar6 = puStack_58;
      }
      puStack_60 = &UNK_180a3c3e0;
      if (puVar6 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar6);
      }
      puStack_58 = (undefined1 *)0x0;
      uStack_48 = uStack_48 & 0xffffffff00000000;
      puStack_60 = &UNK_18098bcb0;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))(iVar2);
  }
  return;
}



undefined8 * FUN_180150ab0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a07300;
  if ((param_2 & 1) != 0) {
    free(param_1,0x218);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180150ae0(longlong param_1)
void FUN_180150ae0(longlong param_1)

{
  undefined **ppuVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint uVar15;
  char *pcVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1e8 [32];
  undefined **ppuStack_1c8;
  undefined1 auStack_1b8 [8];
  longlong *plStack_1b0;
  undefined4 uStack_1a8;
  undefined *puStack_1a0;
  longlong lStack_198;
  int iStack_190;
  ulonglong uStack_188;
  longlong *plStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  longlong lStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  ulonglong uStack_88;
  
  uStack_170 = 0xfffffffffffffffe;
  uStack_88 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  pcVar14 = (char *)0x0;
  uStack_1a8 = 0;
  if (*(char *)(_DAT_180c86890 + 0x12f3) != '\0') {
    *(undefined1 *)(_DAT_180c86890 + 0x12f3) = 0;
  }
  plVar5 = (longlong *)_DAT_180c86960[1];
  iVar3 = _Mtx_lock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  ppuVar1 = _DAT_180c8a9b0;
  ppuStack_168 = _DAT_180c8a9b0;
  _DAT_180c8a9b0 = (undefined **)*plVar5;
  FUN_18009b220((longlong)*(int *)(_DAT_180c86890 + 0x1590) * 0x238 + _DAT_180c86890 + 0x1598);
  *(undefined4 *)((longlong)_DAT_180c8a9b0 + 0x18) = _DAT_180bf3ff8;
  FUN_180125780();
  puVar12 = _DAT_180c86960;
  if (*(char *)(_DAT_180c86960 + 7) != '\0') {
    if (((*(char *)((longlong)_DAT_180c8a9b0 + 0x38c) == '\0') &&
        (*(char *)((longlong)_DAT_180c8a9b0 + 0x38d) == '\0')) &&
       (*(char *)((longlong)_DAT_180c8a9b0 + 0x38e) == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)(_DAT_180c86960 + 0xe) = uVar8;
    if ((*(char *)((longlong)_DAT_180c8a9b0 + 0x38d) == '\0') &&
       (*(char *)((longlong)_DAT_180c8a9b0 + 0x38e) == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)((longlong)puVar12 + 0x71) = uVar8;
  }
  _DAT_180c8a9b0 = ppuVar1;
  iVar3 = _Mtx_unlock(0x180c91970);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar4 = func_0x00018024b870(param_1);
  uVar13 = (ulonglong)(*(byte *)(param_1 + 6) & 1);
  puVar12 = (undefined8 *)(param_1 + 0x9a48);
  pcVar9 = pcVar14;
  while (iVar3 = (int)pcVar9, iVar3 < *(int *)(param_1 + 0x11a48)) {
    FUN_18024c080(*puVar12,uVar13 & 0xff);
    puVar12 = puVar12 + 1;
    pcVar9 = (char *)(ulonglong)(iVar3 + 1);
  }
  lVar6 = *(longlong *)(_DAT_180c86938 + 0x1d78);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d493f0) && (FUN_1808fcb90(&DAT_180d493f0), _DAT_180d493f0 == -1)) {
    _DAT_180d493f8 = 0;
    _DAT_180d49400 = 0;
    _DAT_180d49408 = 0;
    _DAT_180d49410 = 3;
    FUN_1808fc820(FUN_180941ad0);
    FUN_1808fcb30(&DAT_180d493f0);
  }
  _DAT_180d49400 = _DAT_180d493f8;
  FUN_1800da760(_DAT_180c86890,param_1,&DAT_180d493f8);
  if (lVar6 != 0) {
    *(int *)(_DAT_180c86890 + 0x2ca8) = *(int *)(_DAT_180c86890 + 0x2ca8) + 1;
    lVar6 = _DAT_180c8a9d0;
    if (_DAT_180c8a9d0 != 0) {
      lVar10 = _DAT_180c8a9d0 + 0x100;
      lStack_160 = lVar10;
      iVar3 = _Mtx_lock(lVar10);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      if (*(char *)(lVar6 + 0x1f0) == '\0') {
        (**(code **)(**(longlong **)(lVar6 + 0xe8) + 0xc0))();
        *(int *)(lVar6 + 0x268) = *(int *)(lVar6 + 0x268) + 1;
      }
      iVar3 = _Mtx_unlock(lVar10);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
    }
    if (((lVar4 != 0) && (0 < *(int *)(_DAT_180c86920 + 0x1b20))) &&
       (*(char *)(_DAT_180c86870 + 0x2b) != '\0')) {
      fVar17 = *(float *)(_DAT_180c86950 + 0x17ec);
      puStack_1a0 = &UNK_180a3c3e0;
      uStack_188 = 0;
      lStack_198 = 0;
      iStack_190 = 0;
      uStack_1a8 = 1;
      FUN_180628040(&puStack_1a0,&UNK_180a07328,(double)*(float *)(_DAT_180c86870 + 500));
      plStack_1b0 = (longlong *)CONCAT44(plStack_1b0._4_4_,0xffffff00);
      ppuStack_1c8 = &puStack_1a0;
      FUN_180632f00(lVar4 + 0x11a50,fVar17 - (float)((iStack_190 + 1) * 10));
      uStack_1a8 = 0;
      puStack_1a0 = &UNK_180a3c3e0;
      if (lStack_198 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_198 = 0;
      uStack_188 = uStack_188 & 0xffffffff00000000;
      puStack_1a0 = &UNK_18098bcb0;
    }
    if (((*(char *)(_DAT_180c86890 + 0x12e3) != '\0') ||
        (*(char *)(_DAT_180c86890 + 0x12dd) != '\0')) ||
       (*(char *)(_DAT_180c86890 + 0x12e7) != '\0')) {
      lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      iVar11 = (*(int *)(lVar4 + 0x8088) + 1) % 5;
      *(int *)(lVar4 + 0x8088) = iVar11;
      iVar3 = *(int *)(lVar4 + 0x808c);
      *(int *)(lVar4 + 0x808c) = iVar3 + 1;
      lVar6 = (longlong)iVar11;
      if (4 < iVar3) {
        pcVar9 = pcVar14;
        pcVar16 = pcVar14;
        if (*(longlong *)(lVar6 * 0x20 + 0x7ff0 + lVar4) -
            *(longlong *)(lVar6 * 0x20 + 0x7fe8 + lVar4) >> 3 != 0) {
          do {
            lVar6 = *(longlong *)
                     (pcVar9 + *(longlong *)
                                ((longlong)*(int *)(lVar4 + 0x8088) * 0x20 + 0x7fe8 + lVar4));
            FUN_18029f070(*(undefined8 *)(_DAT_180c86938 + 0x1cd8),lVar6);
            *(undefined2 *)(lVar6 + 0x60) = 0;
            uVar15 = (int)pcVar16 + 1;
            iVar11 = *(int *)(lVar4 + 0x8088);
            pcVar9 = pcVar9 + 8;
            pcVar16 = (char *)(ulonglong)uVar15;
          } while ((ulonglong)(longlong)(int)uVar15 <
                   (ulonglong)
                   (*(longlong *)((longlong)iVar11 * 0x20 + 0x7ff0 + lVar4) -
                    *(longlong *)((longlong)iVar11 * 0x20 + 0x7fe8 + lVar4) >> 3));
        }
        lVar6 = (longlong)iVar11;
      }
      *(undefined8 *)(lVar6 * 0x20 + 0x7ff0 + lVar4) =
           *(undefined8 *)(lVar6 * 0x20 + 0x7fe8 + lVar4);
      if (*(char *)(_DAT_180c86890 + 0x12dd) == '\0') {
        lVar6 = *(longlong *)(lVar4 + 0x80b0 + (longlong)*(int *)(lVar4 + 0x8088) * 8);
        if (lVar6 != 0) {
          *(double *)(_DAT_180c86890 + 0x1510) = 1.0 / *(double *)(lVar6 + 0x40);
          FUN_180057bf0();
        }
      }
      else {
        uVar19 = *(undefined8 *)(lVar4 + 0x80b0 + (longlong)*(int *)(lVar4 + 0x8088) * 8);
        puStack_e8 = &UNK_1809fcc58;
        puStack_e0 = auStack_d0;
        auStack_d0[0] = 0;
        uStack_d8 = 0xb;
        uVar18 = strcpy_s(auStack_d0,0x40,&UNK_1809fc790);
        FUN_180096b60(uVar18,&puStack_e8,uVar19,0);
        puStack_e8 = &UNK_18098bcb0;
      }
      if ((*(char *)(_DAT_180c86890 + 0x12e3) != '\0') && (*(char *)(lVar4 + 0x7f21) != '\0')) {
        puVar12 = (undefined8 *)_DAT_180c86960[1];
        iVar3 = _Mtx_lock(0x180c91970);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        ppuVar1 = _DAT_180c8a9b0;
        ppuStack_178 = _DAT_180c8a9b0;
        _DAT_180c8a9b0 = (undefined **)*puVar12;
        FUN_1801299b0(&UNK_180a18a40,0,0x40);
        for (lVar6 = *(longlong *)(lVar4 + 0x8210); lVar6 != lVar4 + 0x8208;
            lVar6 = func_0x00018066bd70(lVar6)) {
          puVar7 = &DAT_18098bc73;
          if (*(undefined **)(lVar6 + 0x28) != (undefined *)0x0) {
            puVar7 = *(undefined **)(lVar6 + 0x28);
          }
          cVar2 = FUN_1801189e0(puVar7);
          if (cVar2 != '\0') {
            fVar17 = (float)*(longlong *)(lVar6 + 0x138);
            if (*(longlong *)(lVar6 + 0x138) < 0) {
              fVar17 = fVar17 + 1.8446744e+19;
            }
            fVar21 = (float)*(longlong *)(lVar6 + 0x140);
            if (*(longlong *)(lVar6 + 0x140) < 0) {
              fVar21 = fVar21 + 1.8446744e+19;
            }
            fVar20 = (float)*(longlong *)(lVar6 + 0x150);
            if (*(longlong *)(lVar6 + 0x150) < 0) {
              fVar20 = fVar20 + 1.8446744e+19;
            }
            fVar22 = (float)*(longlong *)(lVar6 + 0x148);
            if (*(longlong *)(lVar6 + 0x148) < 0) {
              fVar22 = fVar22 + 1.8446744e+19;
            }
            FUN_18010f010(&UNK_180a18a00,(int)(fVar17 * 1e-06));
            FUN_18010f010(&UNK_180a18a20,(double)(fVar21 * 1e-06));
            FUN_18010f010(&UNK_180a18a58,(double)(fVar22 * 1e-06));
            FUN_18010f010(&UNK_180a18a78,(double)(fVar20 * 1e-06));
            func_0x000180119790();
          }
        }
        FUN_18012cfe0();
        _DAT_180c8a9b0 = ppuVar1;
        iVar3 = _Mtx_unlock(0x180c91970);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
      }
    }
    if (*(char *)(_DAT_180c86890 + 0x12e8) != '\0') {
      lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      lVar6 = *(longlong *)(lVar4 + 0x7fd0);
      lVar10 = *(longlong *)(lVar4 + 0x7fc8);
      if (lVar10 != lVar6) {
        do {
          FUN_180152b00(lVar10);
          lVar10 = lVar10 + 0x40;
        } while (lVar10 != lVar6);
        lVar10 = *(longlong *)(lVar4 + 0x7fc8);
      }
      *(longlong *)(lVar4 + 0x7fd0) = lVar10;
    }
    ppuStack_178 = &puStack_148;
    puStack_148 = &UNK_1809fcc58;
    puStack_140 = auStack_130;
    uStack_138 = 0;
    auStack_130[0] = 0;
    FUN_180049bf0(&puStack_148,&DAT_180a0143c);
    uVar19 = FUN_1802c2560(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x7f20,&puStack_148);
    plVar5 = plStack_180;
    if (*(char *)(_DAT_180c86890 + 0x12e7) != '\0') {
      lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      plVar5 = (longlong *)FUN_1802c28d0(lVar4 + 0x7f20);
      plStack_180 = plVar5;
      (**(code **)(*plVar5 + 0x10))(plVar5,&DAT_180a0143c);
      plStack_1b0 = plVar5;
      FUN_18005ea90(lVar4 + 0x7fe8 + (longlong)*(int *)(lVar4 + 0x8088) * 0x20,&plStack_1b0);
      uVar19 = FUN_18062b1e0(_DAT_180c8ed18,0x70,8,3);
      lVar4 = FUN_1800a1e20(uVar19);
      plVar5[0xb] = lVar4;
      uVar19 = FUN_1802c2400(plVar5);
    }
    cVar2 = FUN_1800c6910(uVar19,param_1);
    if (*(char *)(_DAT_180c86890 + 0x12e7) != '\0') {
      lVar4 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
      FUN_1802c24b0(plVar5);
      *(longlong *)(lVar4 + 0x80b0 + (longlong)*(int *)(lVar4 + 0x8088) * 8) = plVar5[0xb];
    }
    FUN_1802c2ac0(&puStack_148);
    if (cVar2 == '\0') {
      Sleep(1);
    }
    uVar19 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
    lVar4 = *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x1d8);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    FUN_18029ad30(uVar19,0,lVar4);
    lVar4 = _DAT_180c86938;
    *(undefined8 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(undefined8 *)(lVar4 + 0x1cd8),1);
    FUN_1802c22a0(auStack_1b8,&UNK_180a07370);
    puVar12 = (undefined8 *)*_DAT_180c86960;
    iVar3 = _Mtx_lock(0x180c91970);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    ppuVar1 = _DAT_180c8a9b0;
    ppuStack_158 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (undefined **)*puVar12;
    FUN_180099430(*_DAT_180c86960,
                  *(undefined8 *)
                   (_DAT_180c86890 + 0x1a08 + (longlong)*(int *)(_DAT_180c86890 + 0x1590) * 8));
    _DAT_180c8a9b0 = ppuVar1;
    iVar3 = _Mtx_unlock(0x180c91970);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    plVar5 = (longlong *)_DAT_180c86960[1];
    iVar3 = _Mtx_lock(0x180c91970);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    ppuVar1 = _DAT_180c8a9b0;
    ppuStack_150 = _DAT_180c8a9b0;
    _DAT_180c8a9b0 = (undefined **)*plVar5;
    FUN_180127860();
    pcVar9 = (char *)(**(longlong **)((longlong)_DAT_180c8a9b0 + 0x1c70) + 0x88);
    if (*pcVar9 == '\0') {
      pcVar9 = pcVar14;
    }
    FUN_180099430(_DAT_180c86960[1],pcVar9);
    _DAT_180c8a9b0 = ppuVar1;
    iVar3 = _Mtx_unlock(0x180c91970);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    _DAT_180c8695c = _DAT_180c8695c + -1;
    (**(code **)(*_DAT_180c86968 + 0x20))();
    FUN_1800a3f00(_DAT_180c86938,0);
  }
  FUN_1800466d0(0x180c91100);
  if (DAT_180c82852 != '\0') {
    FUN_1801c6120();
  }
  plVar5 = *(longlong **)(_DAT_180c86938 + 0x1cd8);
  plVar5[0x1077] = 0;
  plVar5[0x1078] = 0;
  plVar5[0x1079] = 0;
  plVar5[0x107a] = 0;
  plVar5[0x107b] = 0;
  plVar5[0x107c] = 0;
  plVar5[0x107d] = 0;
  plVar5[0x107e] = 0;
  (**(code **)(*plVar5 + 0x128))(plVar5,7);
  if (*(char *)(_DAT_180c86890 + 0x12f4) != '\0') {
    *(undefined1 *)(_DAT_180c86890 + 0x12f4) = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



