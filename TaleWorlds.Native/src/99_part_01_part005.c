#include "TaleWorlds.Native.Split.h"

// 99_part_01_part005.c - 12 个函数

// 函数: void FUN_1800a1b20(undefined8 param_1,longlong param_2)
void FUN_1800a1b20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_748 [32];
  undefined1 *puStack_728;
  undefined4 uStack_720;
  undefined4 uStack_718;
  undefined1 *puStack_708;
  undefined **ppuStack_700;
  undefined *puStack_6f8;
  longlong lStack_6f0;
  undefined4 uStack_6e0;
  undefined8 uStack_6d8;
  int iStack_6cc;
  undefined *puStack_6c8;
  undefined1 auStack_6c0 [8];
  undefined1 auStack_6b8 [120];
  longlong lStack_640;
  undefined1 auStack_620 [104];
  undefined1 auStack_5b8 [16];
  undefined *puStack_5a8;
  undefined1 *puStack_5a0;
  undefined4 uStack_598;
  undefined1 auStack_590 [264];
  undefined *apuStack_488 [68];
  undefined1 auStack_268 [560];
  ulonglong uStack_38;
  
  uStack_6d8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_748;
  uStack_718 = 0;
  puStack_5a8 = &UNK_1809feda8;
  puStack_5a0 = auStack_590;
  uStack_598 = 0;
  auStack_590[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_598 = (undefined4)lVar1;
    strcpy_s(auStack_590,0x100,param_2);
  }
  uVar2 = FUN_180624440(apuStack_488,&puStack_5a8);
  FUN_1806279c0(&puStack_6f8,uVar2);
  apuStack_488[0] = &UNK_18098bcb0;
  puStack_5a8 = &UNK_18098bcb0;
  uStack_720 = 0x118;
  puStack_728 = auStack_268;
  MultiByteToWideChar(0xfde9,0,lStack_6f0,0xffffffff);
  puStack_6c8 = &UNK_180a01620;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(auStack_620);
  uStack_718 = 1;
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (&puStack_6c8,auStack_6c0,0,0);
  *(undefined **)(auStack_6c0 + (longlong)*(int *)(puStack_6c8 + 4) + -8) = &UNK_180a01630;
  *(int *)((longlong)&iStack_6cc + (longlong)*(int *)(puStack_6c8 + 4)) =
       *(int *)(puStack_6c8 + 4) + -0xa8;
  FUN_18009ec20(auStack_6c0);
  lVar1 = FUN_18009ec80(auStack_6c0,auStack_268,2);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_6c0 + (longlong)*(int *)(puStack_6c8 + 4) + -8,2);
  }
  if (lStack_640 == 0) {
    FUN_180626f80(&UNK_180a016e0,param_2);
  }
  ppuStack_700 = &puStack_6c8;
  puStack_708 = (undefined1 *)0x0;
  puStack_728 = (undefined1 *)((ulonglong)puStack_728 & 0xffffffff00000000);
  FUN_1800a1310(auStack_5b8,&puStack_708,param_1,0);
  lVar1 = FUN_1800a19c0(auStack_6c0);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_6c0 + (longlong)*(int *)(puStack_6c8 + 4) + -8,2);
  }
  puStack_708 = auStack_620;
  *(undefined **)(auStack_6c0 + (longlong)*(int *)(puStack_6c8 + 4) + -8) = &UNK_180a01630;
  *(int *)((longlong)&iStack_6cc + (longlong)*(int *)(puStack_6c8 + 4)) =
       *(int *)(puStack_6c8 + 4) + -0xa8;
  FUN_18009fb60(auStack_6c0);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_6b8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_620);
  puStack_6f8 = &UNK_180a3c3e0;
  if (lStack_6f0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_6f0 = 0;
  uStack_6e0 = 0;
  puStack_6f8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_748);
}



undefined8 * FUN_1800a1e20(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_180a3c3e0;
  param_1[3] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = &UNK_18098bcb0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = &UNK_180a3c3e0;
  param_1[7] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  param_1[8] = 0;
  return param_1;
}






// 函数: void FUN_1800a1f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800a1f10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_18021f7f0();
  *param_1 = &UNK_180a02740;
  param_1[0x2438] = 0;
  param_1[0x2439] = 0;
  param_1[0x243a] = 0;
  *(undefined4 *)(param_1 + 0x243b) = 3;
  param_1[0x243c] = 0;
  plVar1 = (longlong *)param_1[0x394];
  param_1[0x394] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x38f];
  param_1[0x38f] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x390];
  param_1[0x390] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = (longlong *)param_1[0x391];
  param_1[0x391] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0x3ae] = 0;
  plVar2 = (longlong *)param_1[0x243c];
  param_1[0x243c] = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x3ad] = 0;
  param_1[0x3af] = 0;
  *(undefined1 *)(param_1 + 0x2437) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0x1c;
  LOCK();
  *(undefined4 *)(param_1 + 0x243d) = 0;
  UNLOCK();
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x3c1,0,0x103b0,param_4,plVar1,plVar2);
}






// 函数: void FUN_1800a2060(longlong param_1)
void FUN_1800a2060(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x1d50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d50) + 0x38))();
  }
  FUN_1800ad6f0();
  if (*(longlong **)(param_1 + 0x1cd0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cd0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1cc8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cc8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1cc0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cc0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1cb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cb8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1cb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1cb0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1ca8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1ca8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1ca0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1ca0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c98) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c90) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c88) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c80) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c78) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x1c70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c70) + 0x38))();
  }
  _Mtx_destroy_in_situ();
  return;
}






// 函数: void FUN_1800a21b0(ulonglong *param_1)
void FUN_1800a21b0(ulonglong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_1[1];
  for (uVar4 = *param_1; uVar4 != uVar5; uVar4 = uVar4 + 0xd0) {
    *(undefined **)(uVar4 + 0x10) = &UNK_18098bcb0;
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar3 = uVar5 + 0x80 + ((longlong)puVar2 - uVar5 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar2,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a21d0(longlong param_1)
void FUN_1800a21d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_3b8 [80];
  longlong *plStack_368;
  longlong lStack_360;
  undefined **ppuStack_358;
  longlong lStack_350;
  undefined8 uStack_348;
  longlong *plStack_338;
  undefined4 uStack_330;
  undefined *puStack_328;
  undefined1 *puStack_320;
  undefined4 uStack_318;
  undefined1 auStack_310 [128];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined1 auStack_268 [304];
  undefined1 auStack_138 [256];
  ulonglong uStack_38;
  
  uStack_348 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_3b8;
  *(undefined4 *)(param_1 + 0x121bc) = 4;
  puVar1 = (undefined8 *)(param_1 + 0x1d68);
  lStack_350 = param_1;
  iVar3 = CreateDXGIFactory1(&UNK_180a028c8,puVar1);
  if (iVar3 < 0) {
    *(undefined4 *)(param_1 + 0x121bc) = 1;
    iVar3 = CreateDXGIFactory1(&UNK_180a02718,puVar1);
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x121bc) = 0;
      iVar3 = CreateDXGIFactory1(&UNK_180a02728,puVar1);
      if (iVar3 < 0) {
        FUN_180220810(iVar3,&UNK_180a01748);
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x1d28);
  lVar4 = *(longlong *)(param_1 + 0x1d20);
  lStack_360 = lVar4;
  if (lVar4 != lVar2) {
    do {
      ppuStack_358 = (undefined **)(lVar4 + 0x10);
      *ppuStack_358 = &UNK_18098bcb0;
      lStack_360 = lVar4 + 0xd0;
      lVar4 = lStack_360;
    } while (lStack_360 != lVar2);
    lVar4 = *(longlong *)(param_1 + 0x1d20);
  }
  *(longlong *)(param_1 + 0x1d28) = lVar4;
  iVar3 = (**(code **)(*(longlong *)*puVar1 + 0x38))((longlong *)*puVar1,0,&plStack_368);
  if (iVar3 == -0x7785fffe) {
    *(undefined4 *)(param_1 + 0x1d48) = 0;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_3b8);
  }
  (**(code **)(*plStack_368 + 0x40))(plStack_368,auStack_268);
  ppuStack_358 = &puStack_328;
  puStack_328 = &UNK_1809fcc28;
  puStack_320 = auStack_310;
  uStack_318 = 0;
  auStack_310[0] = 0;
  plStack_338 = (longlong *)0x0;
  uStack_330 = 6;
  FUN_18004a180(&puStack_328,&UNK_180a02710);
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  plStack_338 = plStack_368;
                    // WARNING: Subroutine does not return
  memset(auStack_138,0,0x100);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a25c0(longlong param_1)
void FUN_1800a25c0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_398 [136];
  undefined *puStack_310;
  undefined4 *puStack_308;
  undefined4 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2a8;
  undefined8 uStack_280;
  ulonglong uStack_38;
  
  uStack_280 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_398;
  uStack_2a8 = 0;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,8,8,3);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x120,8,3);
  uVar3 = FUN_1800ae430(uVar3);
  *(undefined8 *)(param_1 + 8) = uVar3;
  lVar1 = _DAT_180c86898;
  puStack_310 = &UNK_180a3c3e0;
  uStack_2f8 = 0;
  puStack_308 = (undefined4 *)0x0;
  uStack_300 = 0;
  puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
  *(undefined1 *)puVar4 = 0;
  puStack_308 = puVar4;
  uVar2 = FUN_18064e990(puVar4);
  uStack_2f8 = CONCAT44(uStack_2f8._4_4_,uVar2);
  *puVar4 = 0x526c6772;
  puVar4[1] = 0x756f7365;
  puVar4[2] = 0x5f656372;
  puVar4[3] = 0x68636163;
  *(undefined2 *)(puVar4 + 4) = 0x65;
  uStack_300 = 0x11;
  *(undefined4 *)(lVar1 + 0x468) = 0xffffffff;
  puStack_310 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar4);
}



bool FUN_1800a2ff0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStackX_10 [2];
  
  uVar3 = 2;
  if ((DAT_180c82860 == '\0') && (*(int *)(param_1 + 0x121bc) == 4)) {
    aiStackX_10[0] = 0;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1d68) + 0xe0))
                      (*(longlong **)(param_1 + 0x1d68),0,aiStackX_10,4);
    if ((iVar2 < 0) || (aiStackX_10[0] == 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0x121b8) = cVar1;
    uVar3 = 2;
    if (cVar1 != '\0') {
      uVar3 = 0x802;
    }
  }
  iVar2 = (**(code **)(*(longlong *)*param_2 + 0x68))
                    ((longlong *)*param_2,0,param_3,param_4,0,uVar3);
  return -1 < iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a30a0(longlong param_1,undefined4 param_2,undefined4 param_3)
void FUN_1800a30a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  int aiStack_98 [2];
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong uStack_6c;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  ulonglong uStack_38;
  
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  iStack_64 = 0;
  iStack_5c = 0;
  uStack_88 = param_2;
  uStack_84 = param_3;
  if (DAT_180c82860 == '\0') {
    if (*(int *)(param_1 + 0x121bc) == 4) {
      aiStack_98[0] = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d68) + 0xe0))
                        (*(longlong **)(param_1 + 0x1d68),0,aiStack_98,4);
      if ((iVar3 < 0) || (aiStack_98[0] == 0)) {
        bVar2 = 0;
      }
      else {
        bVar2 = 1;
      }
      *(byte *)(param_1 + 0x121b8) = bVar2;
      iStack_5c = (uint)bVar2 * 0x800;
      iStack_64 = (uint)bVar2 << 2;
      if (DAT_180c82860 != '\0') goto LAB_1800a31d1;
    }
    iStack_5c = iStack_5c + 2;
    if (*(int *)(param_1 + 0x121bc) != 0) {
      puStack_a8 = &uStack_90;
      uStack_80 = (ulonglong)*(uint *)(param_1 + 0x1d80);
      uStack_60 = 0;
      uStack_78 = 1;
      uStack_74 = 0;
      uStack_6c = (ulonglong)*(uint *)(param_1 + 0x1d4c);
      uStack_70 = 0x20;
      uStack_90 = 0;
      uStack_b0 = 0;
      uStack_b8 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x1d68) + 0x78))
                (*(longlong **)(param_1 + 0x1d68),*(undefined8 *)(param_1 + 0x1d78),
                 *(undefined8 *)(*(longlong *)(_DAT_180c86870 + 8) + 8),&uStack_88);
      *(undefined8 *)(param_1 + 0x1d70) = uStack_90;
      goto LAB_1800a326b;
    }
  }
LAB_1800a31d1:
  uStack_60 = *(undefined4 *)(param_1 + 0x1d4c);
  uStack_78 = *(undefined4 *)(param_1 + 0x1d80);
  iStack_5c = 0;
  uStack_44 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(_DAT_180c86870 + 8) + 8);
  uStack_58 = (undefined4)uVar1;
  uStack_54 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_6c = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_4c = 0x200000000;
  iStack_64 = 0x20;
  uStack_50 = 1;
  uStack_80 = 0x100000000;
  (**(code **)(**(longlong **)(param_1 + 0x1d68) + 0x50))
            (*(longlong **)(param_1 + 0x1d68),*(undefined8 *)(param_1 + 0x1d78),&uStack_88,
             param_1 + 0x1d70);
LAB_1800a326b:
  (**(code **)(**(longlong **)(param_1 + 0x1d68) + 0x40))
            (*(longlong **)(param_1 + 0x1d68),*(undefined8 *)(*(longlong *)(_DAT_180c86870 + 8) + 8)
             ,2);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_d8);
}



undefined8 * FUN_1800a32b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 3;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a3660(longlong param_1)
void FUN_1800a3660(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  
  if (*(longlong *)(param_1 + 0x1d78) == 0) {
    return;
  }
  plVar4 = (longlong *)(param_1 + 0x1e08);
  lVar5 = 9;
  do {
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x10))();
      *plVar4 = 0;
    }
    plVar4 = plVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  uVar3 = 0;
  uStackX_8 = 0x7000000;
  uStackX_c = 1;
  if ((*(int *)(_DAT_180c86920 + 0x4d0) - 3U & 0xfffffffd) == 0) {
    uVar3 = 2;
  }
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e08) = uVar2;
  uStackX_8 = 0x7000200;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e10) = uVar2;
  uStackX_8 = 0x7000007;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e18) = uVar2;
  uStackX_8 = 0x7000207;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e20) = uVar2;
  uStackX_8 = 0x7000107;
  uStackX_c = 1;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e28) = uVar2;
  iVar1 = *(int *)(_DAT_180c86920 + 0x310);
  if (iVar1 == 0) {
    uStackX_c = 1;
    uStackX_8 = 6;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 1) {
    uStackX_8 = 7;
    uStackX_c = 1;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 2) {
LAB_1800a37ee:
    uStackX_c = 2;
  }
  else if (iVar1 == 3) {
    uStackX_c = 4;
  }
  else if (iVar1 == 4) {
    uStackX_c = 8;
  }
  else {
    if (iVar1 != 5) goto LAB_1800a37ee;
    uStackX_c = 0x10;
  }
  uStackX_8._0_3_ = CONCAT12(uVar3,8);
  uStackX_8 = (uint)(uint3)uStackX_8;
LAB_1800a37f8:
  uStackX_8._0_2_ = (ushort)(byte)uStackX_8;
  uStackX_8 = CONCAT13(7,(uint3)uStackX_8);
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e30) = uVar2;
  uStackX_8 = 0x300020a;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e38) = uVar2;
  uStackX_8 = 0x600020a;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e40) = uVar2;
  uStackX_8 = 0x300030a;
  uVar2 = FUN_1800ab420(param_1,&uStackX_8);
  *(undefined8 *)(param_1 + 0x1e48) = uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a367b(longlong param_1)
void FUN_1800a367b(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong unaff_RBP;
  longlong lVar6;
  longlong unaff_RDI;
  
  plVar5 = (longlong *)(param_1 + 0x1e08);
  lVar6 = 9;
  do {
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x10))();
      *plVar5 = 0;
    }
    lVar2 = _DAT_180c86920;
    plVar5 = plVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar4 = 0;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000000;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  if ((*(int *)(lVar2 + 0x4d0) - 3U & 0xfffffffd) == 0) {
    uVar4 = 2;
  }
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e08) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000200;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e10) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000007;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e18) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000207;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e20) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000107;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e28) = uVar3;
  iVar1 = *(int *)(_DAT_180c86920 + 0x310);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 1;
    *(undefined1 *)(unaff_RBP + 0x1a) = 0;
    *(undefined1 *)(unaff_RBP + 0x18) = 6;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 1;
    *(undefined1 *)(unaff_RBP + 0x1a) = 0;
    *(undefined1 *)(unaff_RBP + 0x18) = 7;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 2) {
LAB_1800a37ee:
    *(undefined4 *)(unaff_RBP + 0x1c) = 2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 4;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 8;
  }
  else {
    if (iVar1 != 5) goto LAB_1800a37ee;
    *(undefined4 *)(unaff_RBP + 0x1c) = 0x10;
  }
  *(undefined1 *)(unaff_RBP + 0x18) = 8;
  *(undefined1 *)(unaff_RBP + 0x1a) = uVar4;
LAB_1800a37f8:
  *(undefined1 *)(unaff_RBP + 0x19) = 0;
  *(undefined1 *)(unaff_RBP + 0x1b) = 7;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e30) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x300020a;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e38) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x600020a;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e40) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x300030a;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e48) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800a3691(void)
void FUN_1800a3691(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  do {
    if ((longlong *)*unaff_RBX != (longlong *)0x0) {
      (**(code **)(*(longlong *)*unaff_RBX + 0x10))();
      *unaff_RBX = 0;
    }
    lVar2 = _DAT_180c86920;
    unaff_RBX = unaff_RBX + 1;
    unaff_RSI = unaff_RSI + -1;
  } while (unaff_RSI != 0);
  uVar4 = 0;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000000;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  if ((*(int *)(lVar2 + 0x4d0) - 3U & 0xfffffffd) == 0) {
    uVar4 = 2;
  }
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e08) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000200;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e10) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000007;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e18) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000207;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e20) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x7000107;
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e28) = uVar3;
  iVar1 = *(int *)(_DAT_180c86920 + 0x310);
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 1;
    *(undefined1 *)(unaff_RBP + 0x1a) = 0;
    *(undefined1 *)(unaff_RBP + 0x18) = 6;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 1;
    *(undefined1 *)(unaff_RBP + 0x1a) = 0;
    *(undefined1 *)(unaff_RBP + 0x18) = 7;
    goto LAB_1800a37f8;
  }
  if (iVar1 == 2) {
LAB_1800a37ee:
    *(undefined4 *)(unaff_RBP + 0x1c) = 2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 4;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(unaff_RBP + 0x1c) = 8;
  }
  else {
    if (iVar1 != 5) goto LAB_1800a37ee;
    *(undefined4 *)(unaff_RBP + 0x1c) = 0x10;
  }
  *(undefined1 *)(unaff_RBP + 0x18) = 8;
  *(undefined1 *)(unaff_RBP + 0x1a) = uVar4;
LAB_1800a37f8:
  *(undefined1 *)(unaff_RBP + 0x19) = 0;
  *(undefined1 *)(unaff_RBP + 0x1b) = 7;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e30) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x300020a;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e38) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x600020a;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e40) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x300030a;
  uVar3 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e48) = uVar3;
  return;
}






// 函数: void FUN_1800a379e(undefined1 param_1)
void FUN_1800a379e(undefined1 param_1)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RBP + 0x1c) = 1;
  *(undefined1 *)(unaff_RBP + 0x1a) = param_1;
  *(undefined1 *)(unaff_RBP + 0x18) = 6;
  *(undefined1 *)(unaff_RBP + 0x19) = 0;
  *(undefined1 *)(unaff_RBP + 0x1b) = 7;
  uVar1 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e30) = uVar1;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x300020a;
  uVar1 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e38) = uVar1;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x600020a;
  uVar1 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e40) = uVar1;
  *(undefined4 *)(unaff_RBP + 0x18) = 0x300030a;
  uVar1 = FUN_1800ab420();
  *(undefined8 *)(unaff_RDI + 0x1e48) = uVar1;
  return;
}






// 函数: void FUN_1800a386b(void)
void FUN_1800a386b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




