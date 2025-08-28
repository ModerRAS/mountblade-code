#include "TaleWorlds.Native.Split.h"

// 99_part_02_part031.c - 3 个函数

// 函数: void FUN_1801a2410(longlong param_1)
void FUN_1801a2410(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  
  FUN_1803986d0(param_1 + 0x607e0);
  lVar7 = *(longlong *)(param_1 + 0x60860) - *(longlong *)(param_1 + 0x60858) >> 3;
  plVar3 = (longlong *)0x0;
  if (lVar7 != 0) {
    plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(uint *)(param_1 + 0x60870) & 0xff)
    ;
  }
  plVar13 = *(longlong **)(param_1 + 0x60860);
  plVar10 = plVar3;
  for (plVar8 = *(longlong **)(param_1 + 0x60858); plVar1 = plVar3, plVar8 != plVar13;
      plVar8 = plVar8 + 1) {
    plVar1 = (longlong *)*plVar8;
    *plVar10 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))();
    }
    plVar10 = plVar10 + 1;
  }
  for (; plVar1 != plVar10; plVar1 = plVar1 + 1) {
    lVar7 = *plVar1;
    if ((*(longlong *)(lVar7 + 0x20) != 0) && (*(longlong *)(lVar7 + 0x270) != 0)) {
      FUN_1802e8910(lVar7);
      *(undefined1 *)(lVar7 + 0x278) = 0;
    }
    FUN_1802eaec0(lVar7,0,1,1,0,0,1,0x17);
  }
  FUN_1800b8500(param_1 + 0x60d10);
  if (*(longlong *)(param_1 + 0x2838) != 0) {
    FUN_1803a89f0(*(longlong *)(param_1 + 0x2838) + 0x4c0);
    *(undefined8 *)(param_1 + 0x2838) = 0;
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1802d2f50(*(longlong *)(param_1 + 0x260));
    lVar7 = *(longlong *)(param_1 + 0x260);
    if (lVar7 != 0) {
      FUN_1802d1970(lVar7);
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  plVar13 = *(longlong **)(param_1 + 0x81f8);
  *(undefined8 *)(param_1 + 0x81f8) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(longlong **)(param_1 + 0x8200);
  *(undefined8 *)(param_1 + 0x8200) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(longlong **)(param_1 + 0x8208);
  *(undefined8 *)(param_1 + 0x8208) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(longlong **)(param_1 + 0x8210);
  *(undefined8 *)(param_1 + 0x8210) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x28c0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28c0) + 0x10))();
  }
  plVar13 = *(longlong **)(param_1 + 0x60858);
  plVar8 = plVar3;
  if (plVar13 < *(longlong **)(param_1 + 0x60860)) {
    do {
      uVar6 = 0;
      puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x12,0x13);
      *(undefined1 *)puVar4 = 0;
      uVar12 = (ulonglong)puVar4 & 0xffffffffffc00000;
      if (uVar12 != 0) {
        lVar7 = ((longlong)puVar4 - uVar12 >> 0x10) * 0x50 + 0x80 + uVar12;
        puVar11 = (uint *)(lVar7 - (ulonglong)*(uint *)(lVar7 + 4));
        if ((*(byte *)((longlong)puVar11 + 0xe) & 2) == 0) {
          uVar6 = puVar11[7];
          if (0x3ffffff < uVar6) {
            uVar6 = *puVar11 << 0x10;
          }
        }
        else {
          uVar6 = puVar11[7];
          uVar9 = (ulonglong)uVar6;
          uVar5 = uVar9;
          if (0x3ffffff < uVar9) {
            uVar5 = (ulonglong)*puVar11 << 0x10;
          }
          if (0x3ffffff < uVar9) {
            uVar6 = *puVar11 << 0x10;
          }
          uVar6 = uVar6 - (int)(((longlong)puVar4 -
                                (((longlong)((longlong)puVar11 + (-0x80 - uVar12)) / 0x50) * 0x10000
                                + uVar12)) % uVar5);
        }
      }
      *puVar4 = 0x69746e45;
      puVar4[1] = 0x77207974;
      puVar4[2] = 0x20687469;
      puVar4[3] = 0x656d616e;
      *(undefined2 *)(puVar4 + 4) = 0x20;
      lVar7 = *plVar13;
      iVar2 = *(int *)(lVar7 + 0x298);
      if (0 < iVar2) {
        if ((iVar2 != -0x11) && (uVar6 < iVar2 + 0x12U)) {
          puVar4 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,iVar2 + 0x12U,0x10,0x13);
          FUN_18064e990(puVar4);
          iVar2 = *(int *)(lVar7 + 0x298);
        }
                    // WARNING: Subroutine does not return
        memcpy((undefined1 *)((longlong)puVar4 + 0x11),*(undefined8 *)(lVar7 + 0x290),
               (longlong)(iVar2 + 1));
      }
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x44,0x13);
        *(undefined1 *)puVar4 = 0;
      }
      else if (uVar6 < 0x44) {
        puVar4 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puVar4,0x44,0x10,0x13);
        FUN_18064e990(puVar4);
      }
      *(undefined8 *)((longlong)puVar4 + 0x11) = 0x6e6f6e2073616820;
      *(undefined8 *)((longlong)puVar4 + 0x19) = 0x657361656c657220;
      *(undefined4 *)((longlong)puVar4 + 0x21) = 0x65722064;
      *(undefined4 *)((longlong)puVar4 + 0x25) = 0x65726566;
      *(undefined4 *)((longlong)puVar4 + 0x29) = 0x7365636e;
      *(undefined4 *)((longlong)puVar4 + 0x2d) = 0x20746120;
      *(undefined4 *)((longlong)puVar4 + 0x31) = 0x6e656373;
      *(undefined4 *)((longlong)puVar4 + 0x35) = 0x65642065;
      *(undefined4 *)((longlong)puVar4 + 0x39) = 0x75727473;
      *(undefined4 *)((longlong)puVar4 + 0x3d) = 0x6f697463;
      *(undefined2 *)((longlong)puVar4 + 0x41) = 0xa6e;
      *(undefined1 *)((longlong)puVar4 + 0x43) = 0;
      if (puVar4 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puVar4);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 < *(longlong **)(param_1 + 0x60860));
  }
  for (; plVar8 != plVar10; plVar8 = plVar8 + 1) {
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x38))();
    }
  }
  if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a29f0(longlong param_1,char param_2,char param_3,undefined8 param_4)
void FUN_1801a29f0(longlong param_1,char param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  if (_DAT_180c82868 != 0) {
    FUN_18005e630();
  }
  uVar7 = 0;
  lVar5 = *(longlong *)(param_1 + 0x60858);
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (*(longlong *)(param_1 + 0x60860) - lVar5 >> 3 != 0) {
    do {
      FUN_1802f0600(*(undefined8 *)(lVar5 + uVar6),0xffffffff,lVar5,param_4,uVar10);
      uVar8 = (int)uVar9 + 1;
      lVar5 = *(longlong *)(param_1 + 0x60858);
      uVar6 = uVar6 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x60860) - lVar5 >> 3));
  }
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (*(longlong *)(param_1 + 0x60d18) - *(longlong *)(param_1 + 0x60d10) >> 3 != 0) {
    do {
      FUN_1802f0600(*(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x60d10)),0xffffffff);
      uVar8 = (int)uVar9 + 1;
      uVar6 = uVar6 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x60d18) - *(longlong *)(param_1 + 0x60d10) >> 3));
  }
  plVar1 = *(longlong **)(param_1 + 0x60c50);
  *(undefined8 *)(param_1 + 0x60c50) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x60c58);
  *(undefined8 *)(param_1 + 0x60c58) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x60c68);
  *(undefined8 *)(param_1 + 0x60c68) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  uVar6 = uVar7;
  if (*(longlong *)(param_1 + 0x60c28) - *(longlong *)(param_1 + 0x60c20) >> 3 != 0) {
    do {
      FUN_1803162f0(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x60c20)));
      uVar8 = (int)uVar6 + 1;
      uVar7 = uVar7 + 8;
      uVar6 = (ulonglong)uVar8;
    } while ((ulonglong)(longlong)(int)uVar8 <
             (ulonglong)(*(longlong *)(param_1 + 0x60c28) - *(longlong *)(param_1 + 0x60c20) >> 3));
  }
  FUN_180143430(param_1 + 0x3018);
  lVar5 = *(longlong *)(param_1 + 0x3360);
  if (lVar5 != 0) {
    for (lVar4 = *(longlong *)(lVar5 + 0xe48); lVar4 != lVar5 + 0xe40;
        lVar4 = func_0x00018066bd70(lVar4)) {
      FUN_18023b050(*(undefined8 *)(lVar4 + 0x28),0);
    }
    for (lVar4 = *(longlong *)(lVar5 + 0xe78); lVar4 != lVar5 + 0xe70;
        lVar4 = func_0x00018066bd70(lVar4)) {
      FUN_18023b050(*(undefined8 *)(lVar4 + 0x28),0);
    }
    FUN_1800572d0(lVar5 + 0xe40);
    FUN_1800572d0(lVar5 + 0xe70);
    *(undefined1 *)(lVar5 + 0xe18) = 1;
  }
  FUN_180397960(param_1 + 14000);
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FUN_180374050();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1802d2f50();
    FUN_1802d33c0(*(undefined8 *)(param_1 + 0x260));
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1801ba720();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x60b80) != 0)) {
    if ((*(longlong **)(param_1 + 0x318) != (longlong *)0x0) &&
       (((*(char *)(param_1 + 0x2a61) != '\0' && (*(char *)(param_1 + 0x2a62) != '\0')) &&
        (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x318) + 0x18))();
      (**(code **)(**(longlong **)(param_1 + 0x318) + 0x38))();
    }
    FUN_1801c0f40(param_1 + 0xe0);
    FUN_1803b0350(*(undefined8 *)(param_1 + 0x60b80));
    puVar2 = *(undefined8 **)(param_1 + 0x60b80);
    if (puVar2 != (undefined8 *)0x0) {
      lVar5 = __RTCastToVoid(puVar2);
      (**(code **)*puVar2)(puVar2,0);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x60b80) = 0;
    lVar5 = *(longlong *)(param_1 + 0x2908);
    if (lVar5 != 0) {
      FUN_1803a5ff0(lVar5);
      if (*(longlong **)(lVar5 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar5 + 0x48) + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
    *(undefined8 *)(param_1 + 0x2908) = 0;
    plVar1 = *(longlong **)(param_1 + 0x2918);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(*plVar1 + 0x318) + 0x90))
                (*(longlong **)(*plVar1 + 0x318),plVar1[1]);
      if ((longlong *)plVar1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[1] + 0x38))();
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar1);
    }
    *(undefined8 *)(param_1 + 0x2918) = 0;
    *(undefined8 *)(param_1 + 0x60b80) = 0;
    if (*(longlong *)(param_1 + 0x448) != 0) {
      FUN_180374e60();
      *(undefined1 *)(*(longlong *)(param_1 + 0x448) + 0x2314) = 1;
    }
    FUN_180389800(param_1 + 0x29a0);
  }
  if (*(longlong *)(param_1 + 0x81f8) != 0) {
    FUN_1802f0600(*(longlong *)(param_1 + 0x81f8),0xffffffff);
  }
  if (param_3 != '\0') {
    FUN_18024e890(param_1 + 0x570);
  }
  *(undefined4 *)(param_1 + 0x27c0) = 1;
  *(undefined1 *)(param_1 + 0x3f31) = 1;
  if (_DAT_180c82868 != 0) {
    FUN_18020f150(*(undefined8 *)(*(longlong *)(_DAT_180c82868 + 8) + 8));
    lVar5 = _DAT_180c86938 + 0x20;
    iVar3 = _Mtx_lock(lVar5);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    iVar3 = _Mtx_unlock(lVar5);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a2ea0(longlong param_1)
void FUN_1801a2ea0(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  code *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  
  FUN_1801a29f0(param_1,1);
  puVar2 = (ulonglong *)(param_1 + 0xe0);
  FUN_1801c0f40(puVar2);
  FUN_18038c3d0(param_1 + 0x2a68);
  uVar11 = 0;
  plVar13 = *(longlong **)(param_1 + 0x81f8);
  *(undefined8 *)(param_1 + 0x81f8) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(longlong **)(param_1 + 0x8200);
  *(undefined8 *)(param_1 + 0x8200) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(longlong **)(param_1 + 0x8208);
  *(undefined8 *)(param_1 + 0x8208) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  plVar13 = *(longlong **)(param_1 + 0x8210);
  *(undefined8 *)(param_1 + 0x8210) = 0;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x38))();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x3360);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x3360) = 0;
  FUN_1802eaec0(*(undefined8 *)(param_1 + 0x90),0,0,1,0,0,0,0x18);
  lVar5 = *(longlong *)(param_1 + 0x448);
  if (lVar5 != 0) {
    FUN_180373d90(lVar5);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_18031dfa0();
    plVar13 = *(longlong **)(param_1 + 800);
    *(undefined8 *)(param_1 + 800) = 0;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x38))();
    }
  }
  FUN_180389800(param_1 + 0x29a0);
  lVar5 = *(longlong *)(param_1 + 0x318);
  if (lVar5 != 0) {
    lVar12 = lVar5 + 0x90;
    if (lVar12 != param_1 + 0x608d0) {
      if (*(code **)(lVar5 + 0xa0) != (code *)0x0) {
        (**(code **)(lVar5 + 0xa0))(lVar12,0,0);
      }
      pcVar8 = *(code **)(param_1 + 0x608e0);
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(lVar12,param_1 + 0x608d0,1);
        pcVar8 = *(code **)(param_1 + 0x608e0);
      }
      *(code **)(lVar5 + 0xa0) = pcVar8;
      *(undefined8 *)(lVar5 + 0xa8) = *(undefined8 *)(param_1 + 0x608e8);
    }
  }
  *(undefined1 *)(param_1 + 0x60a0c) = 0;
  *(undefined8 *)(param_1 + 0x60a38) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x60a40) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x60a50) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x60b40) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x60b40) = 0;
  lVar5 = *(longlong *)(param_1 + 0x60b20);
  uVar9 = uVar11;
  uVar10 = uVar11;
  if (*(longlong *)(param_1 + 0x60b28) - lVar5 >> 3 != 0) {
    do {
      lVar5 = *(longlong *)(uVar10 + lVar5);
      if (lVar5 != 0) {
        FUN_1801fddb0(lVar5);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
      *(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x60b20)) = 0;
      uVar7 = (int)uVar9 + 1;
      lVar5 = *(longlong *)(param_1 + 0x60b20);
      uVar9 = (ulonglong)uVar7;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x60b28) - lVar5 >> 3));
  }
  *(longlong *)(param_1 + 0x60b28) = lVar5;
  puVar3 = *(undefined8 **)(param_1 + 0x60b80);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x60b80) = 0;
  FUN_1801a2410(param_1);
  func_0x0001801c0ee0(param_1 + 0x28c8);
  if (*(char *)(param_1 + 0x2901) != '\0') {
    *(undefined1 *)(param_1 + 0x2901) = 0;
    FUN_1801c0df0(param_1 + 0x28c8);
  }
  FUN_1803837e0(param_1 + 0x120);
  lVar5 = *(longlong *)(param_1 + 0x2908);
  if (lVar5 != 0) {
    FUN_1803a5ff0(lVar5);
    if (*(longlong **)(lVar5 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar5 + 0x48) + 0x38))();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar5);
  }
  *(undefined8 *)(param_1 + 0x2908) = 0;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1801be4d0();
    plVar13 = *(longlong **)(param_1 + 0xe8);
    plVar6 = (longlong *)*puVar2;
    if (plVar6 != plVar13) {
      do {
        if (*plVar6 == *(longlong *)(param_1 + 0x328)) break;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar13);
      if (plVar6 != plVar13) {
        plVar1 = plVar6 + 1;
        if (plVar1 < plVar13) {
                    // WARNING: Subroutine does not return
          memmove(plVar6,plVar1,(longlong)plVar13 - (longlong)plVar1);
        }
        *(longlong **)(param_1 + 0xe8) = plVar13 + -1;
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x328);
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = __RTCastToVoid(puVar3);
      (**(code **)*puVar3)(puVar3,0);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x328) = 0;
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    plVar13 = *(longlong **)(param_1 + 0xe8);
    plVar6 = (longlong *)*puVar2;
    if (plVar6 != plVar13) {
      do {
        if (*plVar6 == *(longlong *)(param_1 + 0x330)) break;
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar13);
      if (plVar6 != plVar13) {
        plVar1 = plVar6 + 1;
        if (plVar1 < plVar13) {
                    // WARNING: Subroutine does not return
          memmove(plVar6,plVar1,(longlong)plVar13 - (longlong)plVar1);
        }
        *(longlong **)(param_1 + 0xe8) = plVar13 + -1;
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x330);
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = __RTCastToVoid(puVar3);
      (**(code **)*puVar3)(puVar3,0);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x330) = 0;
  }
  FUN_1800b8500(param_1 + 0x81b0);
  *(undefined4 *)(param_1 + 0x36a8) = 0xffffffff;
  FUN_1801b9920(param_1 + 0x60c80);
  iVar4 = (int)(*(longlong *)(param_1 + 0x29b8) - *(longlong *)(param_1 + 0x29b0) >> 3) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      FUN_1802fc520(*(undefined8 *)(*(longlong *)(param_1 + 0x29b0) + lVar5 * 8),0);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined8 *)(param_1 + 0x29b8) = *(undefined8 *)(param_1 + 0x29b0);
  puVar3 = *(undefined8 **)(param_1 + 0x318);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x318) = 0;
  plVar13 = (longlong *)(param_1 + 0x2f0);
  lVar5 = 4;
  do {
    plVar6 = (longlong *)*plVar13;
    *plVar13 = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
    plVar13 = plVar13 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FUN_1800b8500(param_1 + 0x2970);
  FUN_18024e890(param_1 + 0x570);
  if ((*(int *)(param_1 + 0x286c) != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x286c) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x28c0);
  if (puVar3 != (undefined8 *)0x0) {
    lVar5 = __RTCastToVoid(puVar3);
    (**(code **)*puVar3)(puVar3,0);
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x28c0) = 0;
  if (*(longlong *)(param_1 + 0x81f0) == 0) {
    *(undefined8 *)(param_1 + 0x81f0) = 0;
    FUN_1801b0140(param_1);
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      FUN_1802c60f0();
      lVar5 = *(longlong *)(param_1 + 0x3a8);
      if (lVar5 != 0) {
        FUN_1802c60f0(lVar5);
        FUN_180246760(lVar5);
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar5);
      }
      *(undefined8 *)(param_1 + 0x3a8) = 0;
    }
    if (*(longlong **)(param_1 + 0x60b80) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x60b80) + 0x68))();
    }
    if (*(longlong *)(param_1 + 0x358) != 0) {
      FUN_1801ba720();
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
    uVar9 = uVar11;
    if ((longlong)(*(longlong *)(param_1 + 0xe8) - *puVar2) >> 3 != 0) {
      do {
        (**(code **)(**(longlong **)(uVar9 + *puVar2) + 0x48))();
        uVar7 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar7;
        uVar9 = uVar9 + 8;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)((longlong)(*(longlong *)(param_1 + 0xe8) - *puVar2) >> 3));
    }
    FUN_1803981a0(param_1 + 0x607e0);
    plVar13 = *(longlong **)(param_1 + 0x8258);
    *(undefined8 *)(param_1 + 0x8258) = 0;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x38))();
    }
    plVar13 = *(longlong **)(param_1 + 0x8260);
    *(undefined8 *)(param_1 + 0x8260) = 0;
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x38))();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 FUN_1801a35b0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x340);
  pplStackX_18 = &plStackX_8;
  plStackX_8 = (longlong *)*param_2;
  plStackX_10 = param_2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_1803a61d0(uVar1,&plStackX_8,param_3,param_4,uVar2);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




