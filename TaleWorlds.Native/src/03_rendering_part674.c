#include "TaleWorlds.Native.Split.h"

// 03_rendering_part674.c - 16 个函数

// 函数: void FUN_180650a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180650a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180651560(param_1,_DAT_180c967a0,param_3,param_4,0xfffffffffffffffe);
  return;
}



longlong FUN_180650aa0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_180627be0();
  FUN_180627be0(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_180627be0(param_1 + 0x58,param_2 + 0x58);
  FUN_180627be0(param_1 + 0x78,param_2 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  return param_1;
}



ulonglong FUN_180650b30(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  
  lVar5 = *(int *)(param_3 + 0x3c) + param_2;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar5 + 0x50);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar5 + 8);
  if ((*(ushort *)(lVar5 + 0x16) & 0x200) != 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  uVar8 = (ulonglong)*(uint *)(lVar5 + 0xbc);
  uVar4 = uVar8 * 0x2492492492492493;
  uVar7 = (uint)((uVar8 - uVar8 / 7 >> 1) + uVar8 / 7 >> 4);
  if (uVar7 == 0) {
LAB_180650c04:
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    uVar9 = 0;
    if (uVar7 != 0) {
      piVar6 = (int *)((ulonglong)*(uint *)(lVar5 + 0xb8) + 0xc + param_2);
      do {
        if ((piVar6[1] != 0) && (*piVar6 == 2)) {
          puVar10 = (uint *)((ulonglong)(uint)piVar6[2] + param_2);
          if (*puVar10 != 0x53445352) goto LAB_180650c04;
          *(uint *)(param_1 + 0xac) = puVar10[5];
          (**(code **)(*(longlong *)(param_1 + 0x78) + 0x10))
                    ((longlong *)(param_1 + 0x78),puVar10 + 6);
          uVar4 = (ulonglong)*puVar10;
          *(uint *)(param_1 + 0xa8) = *puVar10;
          uVar1 = puVar10[2];
          uVar2 = puVar10[3];
          uVar3 = puVar10[4];
          *(uint *)(param_1 + 0x98) = puVar10[1];
          *(uint *)(param_1 + 0x9c) = uVar1;
          *(uint *)(param_1 + 0xa0) = uVar2;
          *(uint *)(param_1 + 0xa4) = uVar3;
        }
        uVar9 = uVar9 + 1;
        piVar6 = piVar6 + 7;
      } while (uVar9 < uVar7);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650c20(longlong param_1)
void FUN_180650c20(longlong param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_228 [32];
  short **ppsStack_208;
  short *psStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  longlong alStack_1d8 [4];
  undefined1 auStack_1b8 [8];
  longlong lStack_1b0;
  uint uStack_1a8;
  undefined4 uStack_19c;
  short *psStack_190;
  undefined1 auStack_128 [272];
  ulonglong uStack_18;
  
  uStack_1f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_228;
  puVar4 = &DAT_18098bc73;
  if (*(undefined **)(param_1 + 8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(param_1 + 8);
  }
  psVar1 = (short *)LoadLibraryA(puVar4);
  if (psVar1 != (short *)0x0) {
    puVar5 = (undefined8 *)&DAT_180c96790;
    puVar2 = _DAT_180c967a0;
    psStack_1f8 = psVar1;
    if (_DAT_180c967a0 != (undefined8 *)0x0) {
      do {
        if ((short *)puVar2[4] < psVar1) {
          puVar3 = (undefined8 *)*puVar2;
        }
        else {
          puVar3 = (undefined8 *)puVar2[1];
          puVar5 = puVar2;
        }
        puVar2 = puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      if ((puVar5 != (undefined8 *)&DAT_180c96790) && ((short *)puVar5[4] <= psVar1))
      goto LAB_180650dc8;
    }
    FUN_180650950(param_1,auStack_128);
    FUN_18063ccc0(alStack_1d8);
    psStack_190 = psVar1;
    (**(code **)(alStack_1d8[0] + 0x10))(alStack_1d8,auStack_128);
    uStack_1a8 = *(uint *)(param_1 + 0x10);
    uVar6 = (ulonglong)uStack_1a8;
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1806277c0(auStack_1b8,uVar6);
    }
    if (uStack_1a8 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(lStack_1b0,*(undefined8 *)(param_1 + 8),uVar6);
    }
    if (lStack_1b0 != 0) {
      *(undefined1 *)(uVar6 + lStack_1b0) = 0;
    }
    uStack_19c = *(undefined4 *)(param_1 + 0x1c);
    if (*psStack_190 == 0x5a4d) {
      FUN_180650b30(alStack_1d8,psStack_190,psStack_190);
    }
    puVar5 = (undefined8 *)&DAT_180c96790;
    puVar2 = _DAT_180c967a0;
    while (puVar2 != (undefined8 *)0x0) {
      if ((short *)puVar2[4] < psVar1) {
        puVar2 = (undefined8 *)*puVar2;
      }
      else {
        puVar5 = puVar2;
        puVar2 = (undefined8 *)puVar2[1];
      }
    }
    if ((puVar5 == (undefined8 *)&DAT_180c96790) || (psVar1 < (short *)puVar5[4])) {
      ppsStack_208 = &psStack_1f8;
      puVar5 = (undefined8 *)FUN_1806515e0(puVar5,auStack_1e8);
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_180650aa0(puVar5 + 5,alStack_1d8);
    FUN_18063cfe0(alStack_1d8);
  }
LAB_180650dc8:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180650e00(void)
void FUN_180650e00(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_3c8 [128];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_324 [748];
  ulonglong uStack_38;
  
  uStack_348 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3c8;
  uStack_340 = 0x180c96740;
  iVar1 = _Mtx_lock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  uVar3 = GetModuleHandleA(0);
  uVar2 = GetProcessId(uVar3);
  lVar4 = CreateToolhelp32Snapshot(0x18,uVar2);
  while( true ) {
    if (lVar4 != -1) {
                    // WARNING: Subroutine does not return
      memset(auStack_324,0,0x234);
    }
    iVar1 = GetLastError();
    if (iVar1 != 0x18) break;
    lVar4 = CreateToolhelp32Snapshot(0x18,uVar2);
  }
  iVar1 = _Mtx_unlock(0x180c96740);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180651540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_180651560(param_1,_DAT_180c967a0,param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180651560(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180651560(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_180651560(&DAT_180c96790,*param_2,param_3,param_4,0xfffffffffffffffe);
    FUN_18063cfe0(param_2 + 5);
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1806515e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if ((param_4 == _DAT_180c96790) || (param_4 == (longlong *)&DAT_180c96790)) {
    if ((_DAT_180c967b0 != 0) && (param_4 = _DAT_180c96790, (ulonglong)_DAT_180c96790[4] < *param_5)
       ) goto LAB_18065166c;
  }
  else {
    plVar1 = (longlong *)func_0x00018066bd70(param_4);
    if (((ulonglong)param_4[4] < *param_5) && (*param_5 < (ulonglong)plVar1[4])) {
      if (*param_4 != 0) {
        param_4 = plVar1;
      }
LAB_18065166c:
      if (param_4 != (longlong *)0x0) {
        FUN_180651770();
        return param_2;
      }
    }
  }
  puVar5 = (undefined8 *)&DAT_180c96790;
  bVar7 = true;
  if (_DAT_180c967a0 != (undefined8 *)0x0) {
    puVar2 = _DAT_180c967a0;
    do {
      puVar5 = puVar2;
      bVar7 = *param_5 < (ulonglong)puVar5[4];
      if (bVar7) {
        puVar2 = (undefined8 *)puVar5[1];
      }
      else {
        puVar2 = (undefined8 *)*puVar5;
      }
    } while (puVar2 != (undefined8 *)0x0);
  }
  puVar2 = puVar5;
  if (bVar7) {
    if (puVar5 == _DAT_180c96798) {
      uVar3 = *param_5;
      goto LAB_1806516e0;
    }
    puVar2 = (undefined8 *)func_0x00018066b9a0(puVar5);
  }
  uVar3 = *param_5;
  if (uVar3 <= (ulonglong)puVar2[4]) {
    *param_2 = puVar2;
    return param_2;
  }
LAB_1806516e0:
  if ((puVar5 == (undefined8 *)&DAT_180c96790) || (uVar3 < (ulonglong)puVar5[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar4 = FUN_18062b420(_DAT_180c8ed18,0xd8,DAT_180c967b8);
  *(ulonglong *)(lVar4 + 0x20) = *param_5;
  FUN_18063ccc0(lVar4 + 0x28);
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,puVar5,&DAT_180c96790,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651770(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
void FUN_180651770(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != &DAT_180c96790)) &&
     (*(ulonglong *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0xd8,DAT_180c967b8,param_4,0xfffffffffffffffe);
  *(ulonglong *)(lVar1 + 0x20) = *param_5;
  FUN_18063ccc0(lVar1 + 0x28);
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,&DAT_180c96790,uVar2);
}





// 函数: void FUN_180651830(longlong param_1)
void FUN_180651830(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x80) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x60) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x28) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 8) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = &UNK_18098bcb0;
  return;
}



undefined8 * FUN_180651860(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a3dca0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x160);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass_managed_library_callback_method_pointers(undefined8 param_1)

{
                    // 0x651890  36  pass_managed_library_callback_method_pointers
                    // WARNING: Could not recover jumptable at 0x00018065189d. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*_DAT_180c8f008 + 0x40))(_DAT_180c8f008,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass_controller_methods(undefined8 param_1)

{
                    // 0x6518b0  34  pass_controller_methods
  _DAT_180c8f018 = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pass_managed_initialize_method_pointer(undefined8 param_1)

{
                    // 0x6518c0  35  pass_managed_initialize_method_pointer
  _DAT_180c8f010 = param_1;
  return;
}



undefined8 FUN_1806518d0(undefined8 param_1,ulonglong param_2)

{
  FUN_180651910();
  if ((param_2 & 1) != 0) {
    free(param_1,400);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651910(undefined8 *param_1)
void FUN_180651910(undefined8 *param_1)

{
  *param_1 = &UNK_180a3dcb0;
  _DAT_180c8f008 = 0;
  if (param_1[0x2d] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[1] = &UNK_180a3dca0;
  return;
}





// 函数: void FUN_180651970(longlong param_1,undefined8 param_2)
void FUN_180651970(longlong param_1,undefined8 param_2)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  FUN_18005ea90(param_1 + 0x168,auStackX_10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651990(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_180651990(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong *plStackX_10;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  plStackX_10 = param_2;
  FUN_18005ea90(param_1 + 0x168,&plStackX_10,param_3,param_4,0xfffffffffffffffe);
  (**(code **)(*param_2 + 8))(param_2,&puStack_30);
  (**(code **)(*param_2 + 0x10))(param_2,&puStack_50);
  puVar2 = &DAT_18098bc73;
  if (puStack_48 != (undefined *)0x0) {
    puVar2 = puStack_48;
  }
  puVar1 = &DAT_18098bc73;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  (**(code **)(_DAT_180c8f008 + 0xe8))(puVar1,puVar2);
  (**(code **)*param_2)(param_2);
  puStack_50 = &UNK_180a3c3e0;
  if (puStack_48 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_48 = (undefined *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  puStack_30 = &UNK_180a3c3e0;
  if (puStack_28 != (undefined *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180651a80(longlong param_1,longlong param_2,longlong param_3)
void FUN_180651a80(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  pcVar1 = _DAT_180c8f018;
  *(undefined1 *)(param_1 + 0x189) = 1;
  if (pcVar1 == (code *)0x0) {
    FUN_180626ee0(&UNK_180a3dc30);
  }
  else {
    puVar2 = &DAT_18098bc73;
    if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
      puVar2 = *(undefined **)(param_2 + 8);
    }
    puVar3 = &DAT_18098bc73;
    if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_3 + 8);
    }
    (*pcVar1)(puVar2,puVar3,_DAT_180c8ecfc,_DAT_180bf3ff4);
  }
  if (_DAT_180c8f010 == (code *)0x0) {
    FUN_180626f80(&UNK_180a3dc58);
    if (_DAT_180c8f010 == (code *)0x0) {
      FUN_180626ee0(&UNK_180a3dc30);
      goto LAB_180651b0f;
    }
  }
  (*_DAT_180c8f010)();
LAB_180651b0f:
  *(longlong *)(param_1 + 0x10) = param_1;
  (**(code **)(param_1 + 0x78))(0,FUN_1806555f0);
  (**(code **)(param_1 + 0x78))(1,FUN_1806552e0);
  (**(code **)(param_1 + 0x78))(2,&UNK_1803f60a0);
  (**(code **)(param_1 + 0x78))(3,FUN_180655e60);
  (**(code **)(param_1 + 0x78))(4,&UNK_180655e50);
  (**(code **)(param_1 + 0x78))(5,&UNK_180084650);
  (**(code **)(param_1 + 0x78))(6,&UNK_180655f30);
  (**(code **)(param_1 + 0x78))(7,&UNK_1806561b0);
  (**(code **)(param_1 + 0x78))(8,FUN_180656160);
  (**(code **)(param_1 + 0x78))(9,FUN_180656110);
  (**(code **)(param_1 + 0x78))(10,&UNK_1806561c0);
  (**(code **)(param_1 + 0x78))(0xb,FUN_180656020);
  (**(code **)(param_1 + 0x78))(0xc,&UNK_180150380);
  (**(code **)(param_1 + 0x78))(0xd,FUN_180655f50);
  (**(code **)(param_1 + 0x78))(0xe,&UNK_180656100);
  (**(code **)(param_1 + 0x78))(0xf,&UNK_180656330);
  (**(code **)(param_1 + 0x78))(0x10,FUN_1806563a0);
  (**(code **)(param_1 + 0x78))(0x11,FUN_1806561d0);
  (**(code **)(param_1 + 0x78))(0x12,&UNK_180656320);
  (**(code **)(param_1 + 0x78))(0x13,FUN_180656340);
  (**(code **)(param_1 + 0x78))(0x14,FUN_180656410);
  (**(code **)(param_1 + 0x78))(0x15,FUN_1806565a0);
  (**(code **)(param_1 + 0x78))(0x16,FUN_180656610);
  (**(code **)(param_1 + 0x78))(0x17,FUN_1806566c0);
  (**(code **)(param_1 + 0x78))(0x18,FUN_18006f4c0);
  (**(code **)(param_1 + 0x78))(0x19,&UNK_180656700);
  (**(code **)(param_1 + 0x78))(0x1a,&UNK_180046680);
  (**(code **)(param_1 + 0x78))(0x1b,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x1c,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x1d,0x180069ee0);
  (**(code **)(param_1 + 0x78))(0x1e,&UNK_180046230);
  (**(code **)(param_1 + 0x78))(0x1f,_guard_check_icall);
  (**(code **)(param_1 + 0x78))(0x20,_guard_check_icall);
  (**(code **)(param_1 + 0x80))();
                    // WARNING: Could not recover jumptable at 0x000180651d0e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(param_1 + 0x58))();
  return;
}





// 函数: void FUN_180651d20(longlong param_1)
void FUN_180651d20(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3 == 0) {
    *(undefined1 *)(param_1 + 0x188) = 1;
    return;
  }
  do {
    (**(code **)**(undefined8 **)(uVar1 + *(longlong *)(param_1 + 0x168)))();
    uVar1 = uVar1 + 8;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((ulonglong)(longlong)(int)uVar2 <
           (ulonglong)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3));
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}





// 函数: void FUN_180651d46(void)
void FUN_180651d46(void)

{
  longlong unaff_RBX;
  ulonglong uVar1;
  uint unaff_EDI;
  
  uVar1 = (ulonglong)unaff_EDI;
  do {
    (**(code **)**(undefined8 **)(uVar1 + *(longlong *)(unaff_RBX + 0x168)))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((ulonglong)(longlong)(int)unaff_EDI <
           (ulonglong)(*(longlong *)(unaff_RBX + 0x170) - *(longlong *)(unaff_RBX + 0x168) >> 3));
  *(undefined1 *)(unaff_RBX + 0x188) = 1;
  return;
}





// 函数: void FUN_180651d97(longlong param_1)
void FUN_180651d97(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}



undefined8 FUN_180652100(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined *puVar2;
  
  lVar1 = (**(code **)(param_1 + 0x148))(param_3);
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(lVar1 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar1 + 8);
  }
  FUN_180627910(param_2,puVar2);
  return param_2;
}



ulonglong FUN_180652190(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puStack_30;
  longlong lStack_28;
  uint uStack_20;
  undefined4 uStack_14;
  
  uVar5 = 0xfffffffffffffffe;
  if (*(int *)(param_3 + 0x10) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_3 + 8);
  }
  lVar1 = (**(code **)(param_1 + 0xb0))(puVar3);
  puVar3 = &DAT_18098bc73;
  if (*(undefined **)(lVar1 + 8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(lVar1 + 8);
  }
  FUN_180627910(&puStack_30,puVar3);
  if (uStack_20 == 7) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 + 1;
      if (*(char *)(lStack_28 + lVar1) != (&UNK_180a16f70)[lVar1]) goto LAB_180652228;
      lVar1 = lVar2;
    } while (lVar2 != 8);
    uVar4 = 0;
  }
  else {
LAB_180652228:
    if (lStack_28 != 0) {
      FUN_1806277c0(param_2,uStack_20);
    }
    if (uStack_20 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(param_2 + 8),lStack_28,(ulonglong)uStack_20,param_4,uVar5);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    if (*(longlong *)(param_2 + 8) != 0) {
      *(undefined1 *)((ulonglong)uStack_20 + *(longlong *)(param_2 + 8)) = 0;
    }
    *(undefined4 *)(param_2 + 0x1c) = uStack_14;
    uVar4 = 1;
  }
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar4;
}



undefined8 FUN_1806522b0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  (**(code **)(param_1 + 0x110))(puVar1);
  return 1;
}



undefined8 FUN_1806522e0(longlong param_1,longlong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  (**(code **)(param_1 + 0x118))(puVar1);
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_180652310(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar5 = 0;
  iVar2 = (**(code **)(param_1 + 0x60))(param_3[1] - *param_3 >> 5);
  *param_2 = iVar2;
  if ((iVar2 != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x30))(iVar2);
  }
  uVar8 = 1;
  lVar3 = *param_3;
  uVar6 = uVar5;
  if (param_3[1] - lVar3 >> 5 != 0) {
    do {
      puVar1 = *(undefined **)(lVar3 + 8 + uVar6);
      puVar7 = &DAT_18098bc73;
      if (puVar1 != (undefined *)0x0) {
        puVar7 = puVar1;
      }
      (**(code **)(param_1 + 0x128))(*param_2,uVar5,puVar7,param_4,uVar8,uVar9);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar3 = *param_3;
      uVar6 = uVar6 + 0x20;
    } while ((ulonglong)(longlong)(int)uVar4 < (ulonglong)(param_3[1] - lVar3 >> 5));
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 get_ftdn_managed_interface(void)

{
                    // 0x6523f0  33  get_ftdn_managed_interface
  return _DAT_180c8f008;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180652400(longlong *param_1,longlong param_2)
void FUN_180652400(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined2 auStackX_10 [4];
  ulonglong uStackX_18;
  undefined8 uStackX_20;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined *puStack_78;
  longlong lStack_70;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    puStack_98 = (undefined8 *)0x0;
    puStack_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    uStack_80 = 3;
    auStackX_10[0] = 10;
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_180057980(param_2,&puStack_98,auStackX_10);
    }
    uVar9 = (longlong)puStack_90 - (longlong)puStack_98 >> 5;
    puVar15 = puStack_98;
    puVar13 = puStack_98;
    puVar5 = puStack_90;
    if ((int)uVar9 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        puStack_58 = (undefined8 *)0x0;
        puStack_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        uStack_40 = 3;
        auStackX_10[0] = 0x40;
        uStackX_18 = uVar9;
        if (puVar15[1] != 0) {
          FUN_180057980(puVar15,&puStack_58,auStackX_10);
        }
        puVar6 = puStack_50;
        puVar5 = puStack_58;
        puVar13 = puStack_58;
        if (((longlong)puStack_50 - (longlong)puStack_58 & 0xffffffffffffffe0U) == 0x60) {
          FUN_180627ae0(&puStack_78,puStack_58);
          iVar7 = atoi(puVar5[5]);
          iVar8 = atoi(puVar5[9]);
          uStackX_20 = FUN_180650c20(&puStack_78);
          puVar13 = (undefined8 *)param_1[1];
          if (puVar13 < (undefined8 *)param_1[2]) {
            *puVar13 = uStackX_20;
            puVar13[1] = (longlong)iVar7;
            puVar13[2] = (longlong)iVar8;
            param_1[1] = param_1[1] + 0x18;
          }
          else {
            lVar14 = *param_1;
            lVar12 = ((longlong)puVar13 - lVar14) / 0x18;
            if (lVar12 == 0) {
              lVar12 = 1;
LAB_18065258b:
              puVar10 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x18,(char)param_1[3]);
              puVar13 = (undefined8 *)param_1[1];
              lVar14 = *param_1;
            }
            else {
              lVar12 = lVar12 * 2;
              if (lVar12 != 0) goto LAB_18065258b;
              puVar10 = (undefined8 *)0x0;
            }
            lVar11 = ((longlong)puVar13 - lVar14) / 0x18;
            puVar13 = puVar10;
            if (0 < lVar11) {
              do {
                puVar1 = (undefined4 *)((longlong)puVar13 + (lVar14 - (longlong)puVar10));
                uVar2 = puVar1[1];
                uVar3 = puVar1[2];
                uVar4 = puVar1[3];
                *(undefined4 *)puVar13 = *puVar1;
                *(undefined4 *)((longlong)puVar13 + 4) = uVar2;
                *(undefined4 *)(puVar13 + 1) = uVar3;
                *(undefined4 *)((longlong)puVar13 + 0xc) = uVar4;
                puVar13[2] = *(undefined8 *)
                              ((longlong)puVar13 + (lVar14 - (longlong)puVar10) + 0x10);
                lVar11 = lVar11 + -1;
                puVar13 = puVar13 + 3;
              } while (0 < lVar11);
            }
            *puVar13 = uStackX_20;
            puVar13[1] = (longlong)iVar7;
            puVar13[2] = (longlong)iVar8;
            if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *param_1 = (longlong)puVar10;
            param_1[1] = (longlong)(puVar13 + 3);
            param_1[2] = (longlong)(puVar10 + lVar12 * 3);
            uVar9 = uStackX_18;
          }
          puStack_78 = &UNK_180a3c3e0;
          if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          lStack_70 = 0;
          uStack_60 = 0;
          puStack_78 = &UNK_18098bcb0;
          for (puVar13 = puVar5; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        else {
          for (; puVar13 != puVar6; puVar13 = puVar13 + 4) {
            (**(code **)*puVar13)(puVar13,0);
          }
        }
        if (puVar5 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar5);
        }
        puVar15 = puVar15 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      uStackX_18 = 0;
      puVar15 = puStack_98;
      puVar13 = puStack_98;
      puVar5 = puStack_90;
    }
    for (; puVar10 = puStack_90, puVar6 = puStack_98, puVar15 != puStack_90; puVar15 = puVar15 + 4)
    {
      puStack_98 = puVar13;
      puStack_90 = puVar5;
      (**(code **)*puVar15)(puVar15,0);
      puVar13 = puStack_98;
      puVar5 = puStack_90;
      puStack_90 = puVar10;
      puStack_98 = puVar6;
    }
    if (puStack_98 != (undefined8 *)0x0) {
      puStack_98 = puVar13;
      puStack_90 = puVar5;
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806526f0(void)
void FUN_1806526f0(void)

{
  undefined1 auStack_2a8 [144];
  undefined8 uStack_218;
  undefined1 auStack_178 [288];
  ulonglong uStack_58;
  
  uStack_218 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_2a8;
                    // WARNING: Subroutine does not return
  memset(auStack_178,0,0x118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



