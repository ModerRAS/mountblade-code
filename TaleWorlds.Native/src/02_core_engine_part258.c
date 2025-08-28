#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part258.c - 12 个函数

// 函数: void FUN_180225ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)
void FUN_180225ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined *puStack_d8;
  longlong lStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  longlong alStack_a8 [2];
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
  undefined4 uStack_46;
  undefined1 uStack_42;
  ulonglong uStack_38;
  
  plVar1 = _DAT_180c86938;
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  FUN_1806279c0(&puStack_d8);
  FUN_1800b2a30();
  puStack_d8 = &UNK_180a3c3e0;
  if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_d0 = 0;
  uStack_c0 = 0;
  puStack_d8 = &UNK_18098bcb0;
  alStack_a8[0] = 0;
  alStack_a8[1] = 0;
  uStack_98 = 0;
  uStack_96 = 3;
  uStack_46 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_42 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  (**(code **)(*plVar1 + 0x108))(plVar1,param_4,alStack_a8);
  FUN_1802a8080(param_2,alStack_a8,param_3);
  if (uStack_98._1_1_ == '\0') {
    if (((char)uStack_98 == '\0') && (alStack_a8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_a8[0] = 0;
    alStack_a8[1] = 0;
    uStack_98 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180226020(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180226020(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  longlong lVar8;
  longlong lStackX_18;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  lVar8 = param_1[1];
  lVar5 = *param_1;
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8 - lVar5),8) + (lVar8 - lVar5);
  puVar2 = (undefined8 *)0x0;
  lStackX_18 = (lVar3 >> 6) - (lVar3 >> 0x3f);
  if (lStackX_18 == 0) {
    lStackX_18 = 1;
  }
  else {
    lStackX_18 = lStackX_18 * 2;
    if (lStackX_18 == 0) goto LAB_1802260bd;
  }
  puVar2 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lStackX_18 * 0x78,(char)param_1[3],param_4,
                         0xfffffffffffffffe);
  lVar8 = param_1[1];
  lVar5 = *param_1;
LAB_1802260bd:
  puVar4 = puVar2;
  if (lVar5 != lVar8) {
    puVar6 = puVar2 + 0xd;
    lVar5 = lVar5 - (longlong)puVar2;
    do {
      *puVar4 = &UNK_18098bcb0;
      puVar6[-0xc] = 0;
      *(undefined4 *)(puVar6 + -0xb) = 0;
      *puVar4 = &UNK_1809fcc58;
      puVar6[-0xc] = puVar6 + -10;
      *(undefined4 *)(puVar6 + -0xb) = 0;
      *(undefined1 *)(puVar6 + -10) = 0;
      *(undefined4 *)(puVar6 + -0xb) = *(undefined4 *)((longlong)puVar6 + lVar5 + -0x58);
      puVar1 = *(undefined **)((longlong)puVar6 + lVar5 + -0x60);
      puVar7 = &DAT_18098bc73;
      if (puVar1 != (undefined *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar6[-0xc],0x40,puVar7,param_4,uVar9,puVar4);
      puVar6[-2] = &UNK_18098bcb0;
      puVar6[-1] = 0;
      *(undefined4 *)puVar6 = 0;
      puVar6[-2] = &UNK_180a3c3e0;
      puVar6[1] = 0;
      puVar6[-1] = 0;
      *(undefined4 *)puVar6 = 0;
      *(undefined4 *)puVar6 = *(undefined4 *)((longlong)puVar6 + lVar5);
      puVar6[-1] = *(undefined8 *)((longlong)puVar6 + lVar5 + -8);
      *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar6 + lVar5 + 0xc);
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((longlong)puVar6 + lVar5 + 8);
      *(undefined4 *)((longlong)puVar6 + lVar5) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar5 + -8) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar5 + 8) = 0;
      puVar4 = puVar4 + 0xf;
      puVar6 = puVar6 + 0xf;
    } while (lVar5 + -0x68 + (longlong)puVar6 != lVar8);
  }
  FUN_1800b8300(puVar4,param_2);
  FUN_180627ae0(puVar4 + 0xb,param_2 + 0x58);
  lVar8 = param_1[1];
  lVar5 = *param_1;
  if (lVar5 != lVar8) {
    do {
      FUN_1800adb30(lVar5);
      lVar5 = lVar5 + 0x78;
    } while (lVar5 != lVar8);
    lVar5 = *param_1;
  }
  if (lVar5 == 0) {
    *param_1 = (longlong)puVar2;
    param_1[1] = (longlong)(puVar4 + 0xf);
    param_1[2] = (longlong)(puVar2 + lStackX_18 * 0xf);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar5);
}



longlong FUN_180226240(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*plVar1 == 0) {
    FormatMessageA(0x1300,0,*(undefined4 *)(param_1 + 8),0x400,plVar1,0,0);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
      } while (*(char *)(lVar2 + uVar4) != '\0');
      if (uVar4 < 2) {
        return lVar2;
      }
      if (*(char *)(lVar2 + -1 + uVar4) != '\n') {
        return lVar2;
      }
      *(undefined1 *)(lVar2 + -1 + uVar4) = 0;
      lVar2 = *plVar1;
      if (*(char *)((uVar5 - 1) + lVar2) != '\r') {
        return lVar2;
      }
      *(undefined1 *)((uVar5 - 1) + lVar2) = 0;
      return *plVar1;
    }
    lVar2 = LocalAlloc(0,0x20);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 8);
    if ((uVar7 + 0x7ffbfe00 < 0xfe00) && (uVar3 = (short)uVar7 - 0x200, uVar3 != 0)) {
      uVar7 = (uint)uVar3;
      puVar6 = &UNK_180a13620;
    }
    else {
      puVar6 = &UNK_180a13608;
    }
    FUN_1800634b0(lVar2,0x20,puVar6,uVar7);
  }
  return *plVar1;
}





// 函数: void FUN_180226360(undefined8 *param_1)
void FUN_180226360(undefined8 *param_1)

{
  *param_1 = &UNK_180a13640;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (param_1[3] != 0) {
    LocalFree();
  }
  return;
}



undefined8 *
FUN_1802263b0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a13640;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (param_1[3] != 0) {
    LocalFree();
  }
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,uVar1);
  }
  return param_1;
}



undefined8 * FUN_180226430(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 0x17;
  lVar1 = 0x10;
  do {
    func_0x000180226420(puVar2);
    puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *param_1 = 0;
  param_1[0x37] = 0;
  param_1[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 8) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xe;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 9) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xe;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xe;
  param_1[4] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xe;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0xe;
  *(undefined4 *)((longlong)param_1 + 100) = 0xe;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xe;
  param_1[7] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0xe;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xe;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x2f] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x30] = 0xffffffffffffffff;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x31] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x32] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x33] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x34] = 0xffffffffffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x35] = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x36] = 0xffffffffffffffff;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802265d0(undefined8 param_1,undefined8 *param_2)
void FUN_1802265d0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_268 [32];
  undefined4 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined1 auStack_218 [512];
  ulonglong uStack_18;
  
  uStack_230 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_268;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  puStack_228 = param_2;
  uVar1 = (*_DAT_180c96828)(1,&DAT_180c96810,&uStack_240);
  if ((uVar1 & 0xfff00000) != 0xbad00000) {
                    // WARNING: Subroutine does not return
    memset(auStack_218,0,0x200);
  }
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_180a3c3e0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0);
  *(undefined4 *)(param_2 + 2) = 0;
  if ((undefined1 *)param_2[1] != (undefined1 *)0x0) {
    *(undefined1 *)param_2[1] = 0;
  }
  uStack_248 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_268);
}





// 函数: void FUN_180226750(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180226750(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    FUN_180639830(param_1,param_1[1],param_3,param_4,0xfffffffffffffffe);
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = __RTCastToVoid(puVar1);
      (**(code **)*puVar1)(puVar1,0);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    *param_1 = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802267d0(longlong *param_1)
void FUN_1802267d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined *apuStack_b8 [20];
  ulonglong uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  if (*param_1 == 0) {
    puStack_c0 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x98,8,3);
    *puStack_c0 = &UNK_18098bcb0;
    puStack_c0[1] = 0;
    *(undefined4 *)(puStack_c0 + 2) = 0;
    *puStack_c0 = &UNK_1809fcc28;
    puStack_c0[1] = puStack_c0 + 3;
    *(undefined4 *)(puStack_c0 + 2) = 0;
    *(undefined1 *)(puStack_c0 + 3) = 0;
    *param_1 = (longlong)puStack_c0;
    lVar2 = FUN_1806393b0(puStack_c0,apuStack_b8,param_1[1]);
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
    puVar3 = &DAT_18098bc73;
    if (*(undefined **)(lVar2 + 8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(lVar2 + 8);
    }
    strcpy_s(*(undefined8 *)(lVar1 + 8),0x80,puVar3);
    apuStack_b8[0] = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1802268c0(longlong *param_1,longlong param_2)
void FUN_1802268c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puStackX_8;
  longlong lStackX_10;
  undefined1 auStackX_18 [16];
  
  if (*param_1 == 0) {
    puVar8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x98,8,3);
    *puVar8 = &UNK_18098bcb0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    *puVar8 = &UNK_1809fcc28;
    puVar8[1] = puVar8 + 3;
    *(undefined4 *)(puVar8 + 2) = 0;
    *(undefined1 *)(puVar8 + 3) = 0;
    *param_1 = (longlong)puVar8;
    puStackX_8 = puVar8;
  }
  else {
    FUN_180639830(param_1,param_1[1]);
    puVar8 = (undefined8 *)*param_1;
  }
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar10 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar10 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(puVar8[1],0x80,puVar10);
  lVar6 = _DAT_180c8ed70;
  lVar3 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar1 = _DAT_180c8ed70 + 200;
  puStackX_8 = puVar8;
  lStackX_10 = lVar1;
  iVar7 = _Mtx_lock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  puVar2 = (undefined8 *)(lVar6 + 0x98);
  puVar4 = *(undefined8 **)(lVar6 + 0xa8);
  puVar5 = puVar4;
  while (puVar9 = puVar2, puVar5 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar5[4] < puVar8) {
      puVar5 = (undefined8 *)*puVar5;
    }
    else {
      puVar5 = (undefined8 *)puVar5[1];
    }
  }
  while (puVar4 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar4[4] < puVar8) {
      puVar4 = (undefined8 *)*puVar4;
    }
    else {
      puVar9 = puVar4;
      puVar4 = (undefined8 *)puVar4[1];
    }
  }
  if ((puVar9 == puVar2) || (puVar8 < (undefined8 *)puVar9[4])) {
    puVar9 = (undefined8 *)FUN_180639930(puVar2,auStackX_18,puVar2,puVar9,&puStackX_8);
    puVar9 = (undefined8 *)*puVar9;
  }
  puVar10 = &DAT_18098bc73;
  if (*(undefined **)(lVar3 + 8) != (undefined *)0x0) {
    puVar10 = *(undefined **)(lVar3 + 8);
  }
  (**(code **)(puVar9[5] + 0x10))(puVar9 + 5,puVar10);
  iVar7 = _Mtx_unlock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}



undefined8 *
FUN_180226a50(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809ffa18;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180226a90(char *param_1,longlong *param_2)
void FUN_180226a90(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  iVar3 = 0;
  pcVar2 = (char *)0x180bf7e28;
  *puVar4 = 0;
  param_2[1] = param_2[1] + 4;
  do {
    if (*pcVar2 == *param_1) {
      FUN_180639de0(param_2,*(undefined8 *)((longlong)iVar3 * 0x10 + 0x180bf7e20));
      break;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x10;
  } while ((longlong)pcVar2 < 0x180bf7e68);
  FUN_180639ec0(param_2,*(undefined8 *)(param_1 + 0x58));
  FUN_180639ec0(param_2,*(longlong *)(param_1 + 0x58) + 0x20);
  FUN_180639ec0(param_2,*(longlong *)(param_1 + 0x58) + 0x40);
  FUN_18063a050(param_2,param_1 + 0x10);
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    uVar5 = *(undefined4 *)(param_1 + 0x34);
  }
  else if (cVar1 == '\x01') {
    FUN_180229820();
    FUN_180229820();
    FUN_180229820();
    FUN_180229820();
    FUN_180229820();
    FUN_180229820();
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x48);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    puVar4 = (undefined4 *)param_2[1];
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
      FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
      puVar4 = (undefined4 *)param_2[1];
    }
    *puVar4 = uVar5;
    param_2[1] = param_2[1] + 4;
    uVar5 = *(undefined4 *)(param_1 + 0x38);
  }
  puVar4 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (4 - *param_2));
    puVar4 = (undefined4 *)param_2[1];
  }
  *puVar4 = uVar5;
  param_2[1] = param_2[1] + 4;
  return;
}





// 函数: void FUN_180226ce3(undefined4 *param_1)
void FUN_180226ce3(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong in_RAX;
  undefined4 *puVar2;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  
  uVar1 = *(undefined4 *)(unaff_RDI + 0x30);
  if ((ulonglong)(in_RAX + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    param_1 = (undefined4 *)unaff_RBX[1];
  }
  *param_1 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(unaff_RDI + 0x3c);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(unaff_RDI + 0x40);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(unaff_RDI + 0x34);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(unaff_RDI + 0x38);
  puVar2 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}





// 函数: void FUN_180226d30(void)
void FUN_180226d30(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong *unaff_RBX;
  longlong unaff_RDI;
  undefined4 unaff_XMM6_Da;
  
  FUN_180639bf0();
  *(undefined4 *)unaff_RBX[1] = unaff_XMM6_Da;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(unaff_RDI + 0x40);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  puVar2 = (undefined4 *)unaff_RBX[1];
  uVar1 = *(undefined4 *)(unaff_RDI + 0x34);
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  uVar1 = *(undefined4 *)(unaff_RDI + 0x38);
  puVar2 = (undefined4 *)unaff_RBX[1];
  if ((ulonglong)((*unaff_RBX - (longlong)puVar2) + unaff_RBX[2]) < 5) {
    FUN_180639bf0();
    puVar2 = (undefined4 *)unaff_RBX[1];
  }
  *puVar2 = uVar1;
  unaff_RBX[1] = unaff_RBX[1] + 4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180226e10(char *param_1,longlong param_2)
void FUN_180226e10(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_498 [32];
  undefined1 uStack_478;
  undefined4 uStack_474;
  undefined8 uStack_470;
  char *pcStack_468;
  undefined *puStack_458;
  byte *pbStack_450;
  int iStack_448;
  byte abStack_440 [1032];
  ulonglong uStack_38;
  
  uStack_470 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_498;
  iVar8 = 0;
  uStack_474 = 0;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  puStack_458 = &UNK_18098bb30;
  pbStack_450 = abStack_440;
  iStack_448 = 0;
  abStack_440[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  pcStack_468 = param_1;
  if (uVar3 != 0) {
    FUN_180045f60(&puStack_458,puVar7,uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
  }
  plVar9 = (longlong *)0x180bf7e20;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar9 + lVar4) != '\0');
    iVar6 = (int)lVar4;
    if (iStack_448 == iVar6) {
      if (iStack_448 != 0) {
        pbVar5 = pbStack_450;
        do {
          pbVar1 = pbVar5 + (*plVar9 - (longlong)pbStack_450);
          iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar1 != 0);
      }
LAB_180226f1e:
      if (iVar6 == 0) {
        uStack_478 = *(undefined1 *)((longlong)iVar8 * 0x10 + 0x180bf7e28);
        break;
      }
    }
    else if (iStack_448 == 0) goto LAB_180226f1e;
    iVar8 = iVar8 + 1;
    plVar9 = plVar9 + 2;
  } while ((longlong)plVar9 < 0x180bf7e60);
  puStack_458 = &UNK_18098bcb0;
  FUN_18040d750(param_1,uStack_478);
  uStack_474 = 1;
  plVar9 = *(longlong **)(param_1 + 0x58);
  uVar3 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*plVar9 + 0x18))(plVar9,puVar7,uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar7 = *(uint **)(param_2 + 8);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  uVar3 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x20) + 0x18))((longlong *)(lVar4 + 0x20),puVar7,uVar3);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar3;
    puVar7 = *(uint **)(param_2 + 8);
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  uVar3 = *puVar7;
  puVar7 = puVar7 + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar3 != 0) {
    (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x18))((longlong *)(lVar4 + 0x40),puVar7,uVar3);
    puVar7 = (uint *)((ulonglong)uVar3 + *(longlong *)(param_2 + 8));
  }
  *(uint *)(param_1 + 0x10) = *puVar7;
  *(uint *)(param_1 + 0x14) = puVar7[1];
  *(uint *)(param_1 + 0x18) = puVar7[2];
  *(uint *)(param_1 + 0x1c) = puVar7[3];
  *(uint *)(param_1 + 0x20) = puVar7[4];
  *(uint *)(param_1 + 0x24) = puVar7[5];
  *(uint *)(param_1 + 0x28) = puVar7[6];
  *(uint *)(param_1 + 0x2c) = puVar7[7];
  puVar7 = puVar7 + 8;
  *(uint **)(param_2 + 8) = puVar7;
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *(uint *)(param_1 + 0x30) = *puVar7;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x34) = **(undefined4 **)(param_2 + 8);
  }
  else if (cVar2 == '\x01') {
    FUN_1802296d0();
    FUN_1802296d0();
    FUN_1802296d0();
    FUN_1802296d0();
    FUN_1802296d0();
    FUN_1802296d0();
    *(undefined4 *)(param_1 + 0x34) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x3c) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x48) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x4c) = **(undefined4 **)(param_2 + 8);
  }
  else {
    if (cVar2 != '\x02') goto LAB_1802270fc;
    *(uint *)(param_1 + 0x30) = *puVar7;
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x3c) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x34) = **(undefined4 **)(param_2 + 8);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
    *(undefined4 *)(param_1 + 0x38) = **(undefined4 **)(param_2 + 8);
  }
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
LAB_1802270fc:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_498);
}





// 函数: void FUN_180227130(longlong param_1,longlong *param_2)
void FUN_180227130(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (4 - *param_2));
    puVar5 = (undefined4 *)param_2[1];
  }
  *puVar5 = 0;
  puVar3 = (undefined1 *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  if ((ulonglong)((*param_2 - (longlong)puVar3) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,puVar3 + (1 - *param_2));
    puVar3 = (undefined1 *)param_2[1];
  }
  *puVar3 = uVar1;
  puVar4 = (undefined8 *)(param_2[1] + 1);
  param_2[1] = (longlong)puVar4;
  if ((ulonglong)((*param_2 - (longlong)puVar4) + param_2[2]) < 0x11) {
    FUN_180639bf0(param_2,(longlong)puVar4 + (0x10 - *param_2));
    puVar4 = (undefined8 *)param_2[1];
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = *(undefined8 *)(param_1 + 8);
  puVar4[1] = uVar2;
  param_2[1] = param_2[1] + 0x10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_180227230(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3,0xfffffffffffffffe);
  *puVar2 = &UNK_1809ffa18;
  *puVar2 = &UNK_180a139f0;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar2[1] = *(undefined8 *)(param_2 + 8);
    puVar2[2] = uVar1;
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_2 + 0x18);
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



