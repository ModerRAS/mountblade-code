#include "TaleWorlds.Native.Split.h"

// 99_part_01_part022.c - 5 个函数

// 函数: void FUN_1800b5f00(longlong param_1)
void FUN_1800b5f00(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  undefined4 extraout_XMM0_Da;
  undefined *puStack_100;
  undefined1 *puStack_f8;
  uint uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 *puStack_d8;
  uint uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  uint uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  uint uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined4 uStack_70;
  ulonglong uStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  int iStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puVar10 = (undefined1 *)0x0;
  puStack_100 = &UNK_180a3c3e0;
  uStack_e8 = 0;
  puStack_f8 = (undefined1 *)0x0;
  uStack_f0 = 0;
  puVar13 = &DAT_18098bc73;
  if (*(undefined **)(*_DAT_180c86870 + 0x440) != (undefined *)0x0) {
    puVar13 = *(undefined **)(*_DAT_180c86870 + 0x440);
  }
  FUN_180627c50(&puStack_100,puVar13);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49238) && (FUN_1808fcb90(&DAT_180d49238), _DAT_180d49238 == -1)) {
    _DAT_180d49240 = &UNK_180a3c3e0;
    _DAT_180d49258 = 0;
    _DAT_180d49248 = (undefined4 *)0x0;
    _DAT_180d49250 = 0;
    _DAT_180d49248 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13);
    *(undefined1 *)_DAT_180d49248 = 0;
    uVar4 = FUN_18064e990(_DAT_180d49248);
    puVar1 = _DAT_180d49248;
    _DAT_180d49258 = CONCAT44(_DAT_180d4925c,uVar4);
    *_DAT_180d49248 = 0x656e6547;
    puVar1[1] = 0x65746172;
    puVar1[2] = 0x78655464;
    puVar1[3] = 0x65727574;
    *(undefined2 *)(puVar1 + 4) = 0x2f73;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    _DAT_180d49250 = 0x12;
    FUN_1808fc820(FUN_180941a30);
    FUN_1808fcb30(&DAT_180d49238);
  }
  puStack_80 = &UNK_180a3c3e0;
  uStack_68 = 0;
  puStack_78 = (undefined1 *)0x0;
  uStack_70 = 0;
  puVar8 = puVar10;
  if (_DAT_180d49250 != 0) {
    iVar3 = _DAT_180d49250 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar8 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar8 = 0;
    puStack_78 = puVar8;
    uVar4 = FUN_18064e990(puVar8);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar4);
    if (_DAT_180d49250 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar8,_DAT_180d49248,_DAT_180d49250 + 1);
    }
  }
  uVar2 = uStack_f0;
  if (_DAT_180d49248 != (undefined4 *)0x0) {
    uStack_70 = 0;
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = 0;
    }
    uStack_68 = uStack_68 & 0xffffffff;
  }
  puStack_a0 = &UNK_180a3c3e0;
  uVar6 = 0;
  uStack_88 = 0;
  puStack_98 = (undefined1 *)0x0;
  uStack_90 = 0;
  uVar14 = (ulonglong)uStack_f0;
  puVar9 = puVar10;
  if (puStack_f8 == (undefined1 *)0x0) {
LAB_1800b60e2:
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar9,puStack_f8,uVar14);
    }
  }
  else if (uStack_f0 != 0) {
    iVar3 = uStack_f0 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar9 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar9 = 0;
    puStack_98 = puVar9;
    uVar4 = FUN_18064e990(puVar9);
    uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
    goto LAB_1800b60e2;
  }
  uStack_90 = uVar2;
  if (puVar9 != (undefined1 *)0x0) {
    puVar9[uVar14] = 0;
  }
  uVar4 = uStack_e8._4_4_;
  uStack_88 = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_88);
  FUN_1806279c0(&puStack_60,param_1 + 0x10);
  puStack_c0 = &UNK_180a3c3e0;
  uStack_a8 = 0;
  puStack_b8 = (undefined1 *)0x0;
  puVar11 = (undefined1 *)0x0;
  uVar7 = 0;
  uStack_b0 = 0;
  uVar5 = 0;
  if (puVar9 == (undefined1 *)0x0) {
LAB_1800b6221:
    uVar6 = uVar5;
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar10,puVar9,uVar14);
    }
  }
  else if (uVar2 != 0) {
    iVar3 = uVar2 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar10 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar10 = 0;
    puStack_b8 = puVar10;
    uVar5 = FUN_18064e990(puVar10);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar5);
    goto LAB_1800b6221;
  }
  uStack_b0 = uVar2;
  if (puVar10 != (undefined1 *)0x0) {
    puVar10[uVar14] = 0;
  }
  uStack_a8 = CONCAT44(uVar4,(undefined4)uStack_a8);
  if (0 < iStack_50) {
    iVar3 = iStack_50 + uVar2;
    if (iVar3 != 0) {
      if (puVar10 == (undefined1 *)0x0) {
        iVar3 = iVar3 + 1;
        if (iVar3 < 0x10) {
          iVar3 = 0x10;
        }
        puVar10 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
        *puVar10 = 0;
      }
      else {
        if (iVar3 + 1U <= uVar6) goto LAB_1800b62bf;
        puVar10 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar10,iVar3 + 1U,0x10,0x13);
      }
      puStack_b8 = puVar10;
      uVar4 = FUN_18064e990(puVar10);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar4);
    }
LAB_1800b62bf:
                    // WARNING: Subroutine does not return
    memcpy(puVar10 + uVar2,lStack_58,(longlong)(iStack_50 + 1));
  }
  puStack_e0 = &UNK_180a3c3e0;
  uStack_c8 = 0;
  puStack_d8 = (undefined1 *)0x0;
  uStack_d0 = 0;
  uVar6 = 0;
  if (puVar10 == (undefined1 *)0x0) {
LAB_1800b6357:
    uVar7 = uVar6;
    if (uVar2 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(puVar11,puVar10,uVar2);
    }
  }
  else if (uVar2 != 0) {
    iVar3 = uVar2 + 1;
    if (iVar3 < 0x10) {
      iVar3 = 0x10;
    }
    puVar11 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)iVar3,0x13);
    *puVar11 = 0;
    puStack_d8 = puVar11;
    uVar6 = FUN_18064e990(puVar11);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar6);
    goto LAB_1800b6357;
  }
  uStack_d0 = uVar2;
  if (puVar11 != (undefined1 *)0x0) {
    puVar11[uVar2] = 0;
  }
  uStack_c8 = CONCAT44(uVar4,(undefined4)uStack_c8);
  iVar3 = uVar2 + 4;
  if (iVar3 != 0) {
    uVar6 = uVar2 + 5;
    if (puVar11 == (undefined1 *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puVar11 = (undefined1 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar6,0x13);
      *puVar11 = 0;
    }
    else {
      if (uVar6 <= uVar7) goto LAB_1800b63ec;
      puVar11 = (undefined1 *)FUN_18062b8b0(_DAT_180c8ed18,puVar11,uVar6,0x10,0x13);
    }
    puStack_d8 = puVar11;
    uVar7 = FUN_18064e990(puVar11);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar7);
  }
LAB_1800b63ec:
  *(undefined4 *)(puVar11 + uVar2) = 0x7364642e;
  puVar11[(ulonglong)uVar2 + 4] = 0;
  if (puStack_f8 != (undefined1 *)0x0) {
    uStack_d0 = iVar3;
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  uStack_e8 = CONCAT44(uVar4,uVar7);
  uStack_d0 = 0;
  puStack_d8 = (undefined1 *)0x0;
  uStack_c8 = 0;
  puStack_e0 = &UNK_18098bcb0;
  puStack_c0 = &UNK_180a3c3e0;
  puStack_f8 = puVar11;
  uStack_f0 = iVar3;
  if (puVar10 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar10);
  }
  puStack_b8 = (undefined1 *)0x0;
  uStack_a8 = uStack_a8 & 0xffffffff00000000;
  puStack_c0 = &UNK_18098bcb0;
  puStack_60 = &UNK_180a3c3e0;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &UNK_18098bcb0;
  puStack_a0 = &UNK_180a3c3e0;
  if (puVar9 == (undefined1 *)0x0) {
    puStack_98 = (undefined1 *)0x0;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    puStack_a0 = &UNK_18098bcb0;
    puStack_80 = &UNK_180a3c3e0;
    if (puVar8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar8);
    }
    puStack_78 = (undefined1 *)0x0;
    uStack_68 = uStack_68 & 0xffffffff00000000;
    puStack_80 = &UNK_18098bcb0;
    uVar12 = FUN_18023a940(param_1);
    FUN_180225ee0(extraout_XMM0_Da,&puStack_100,4,uVar12);
    puStack_100 = &UNK_180a3c3e0;
    if (puStack_f8 == (undefined1 *)0x0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b6620(void)
void FUN_1800b6620(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cVar11;
  longlong lStackX_8;
  longlong lStackX_10;
  
  lStackX_10 = 9;
  lStackX_8 = 0;
  lVar10 = 0x5a0;
  do {
    lVar4 = _DAT_180c86930;
    uVar3 = _DAT_180c82868;
    lVar7 = *(longlong *)(lVar10 + 8 + _DAT_180c86930);
    lVar6 = *(longlong *)(lVar10 + _DAT_180c86930);
    do {
      bVar2 = false;
      uVar8 = 0;
      if (lVar7 - lVar6 >> 3 == 0) break;
      uVar9 = 0;
      do {
        plVar5 = *(longlong **)(uVar9 * 8 + lVar6);
        pcVar1 = *(code **)(*plVar5 + 0x68);
        if (pcVar1 == (code *)&UNK_1800467f0) {
          cVar11 = (char)plVar5[2] != '\0';
        }
        else {
          cVar11 = (*pcVar1)();
        }
        if (cVar11 == '\0') {
          bVar2 = true;
          plVar5 = (longlong *)FUN_18005e890(uVar3);
          cVar11 = (**(code **)(*plVar5 + 0x20))(plVar5,0);
          if (cVar11 == '\0') {
            plVar5 = *(longlong **)(uVar9 * 8 + *(longlong *)(lVar10 + lVar4));
            pcVar1 = *(code **)(*plVar5 + 0x80);
            if (pcVar1 == (code *)&UNK_180049760) {
              FUN_1800496b0(plVar5 + 4);
            }
            else {
              (*pcVar1)();
            }
          }
        }
        lVar7 = *(longlong *)(lVar10 + 8 + lVar4);
        uVar8 = uVar8 + 1;
        lVar6 = *(longlong *)(lVar10 + lVar4);
        uVar9 = (ulonglong)uVar8;
      } while (uVar9 < (ulonglong)(lVar7 - lVar6 >> 3));
    } while (bVar2);
    FUN_1800b8500(lVar4 + 0x5a0 + lStackX_8);
    lStackX_8 = lStackX_8 + 0x20;
    lVar10 = lVar10 + 0x20;
    lStackX_10 = lStackX_10 + -1;
    if (lStackX_10 == 0) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b6780(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b6780(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  
  lVar2 = _DAT_180c86930;
  uVar9 = 0xfffffffffffffffe;
  FUN_1800b8500(param_2);
  FUN_1800b8cb0(param_2,*(longlong *)(lVar2 + 0x4d0) - *(longlong *)(lVar2 + 0x4c8) >> 3 &
                        0xffffffff);
  plVar8 = *(longlong **)(lVar2 + 0x4c8);
  if (plVar8 < *(longlong **)(lVar2 + 0x4d0)) {
    do {
      plVar1 = (longlong *)*plVar8;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar3 = (longlong *)0x0;
      plVar5 = (longlong *)param_2[1];
      if (plVar5 < (longlong *)param_2[2]) {
        param_2[1] = (longlong)(plVar5 + 1);
        *plVar5 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
      }
      else {
        plVar6 = (longlong *)*param_2;
        lVar4 = (longlong)plVar5 - (longlong)plVar6 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1800b685e:
          plVar3 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,(char)param_2[3],param_4,uVar9);
          plVar5 = (longlong *)param_2[1];
          plVar6 = (longlong *)*param_2;
          plVar7 = plVar3;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar7 = plVar3;
          if (lVar4 != 0) goto LAB_1800b685e;
        }
        for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
          *plVar3 = *plVar6;
          *plVar6 = 0;
          plVar3 = plVar3 + 1;
        }
        *plVar3 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        plVar5 = (longlong *)param_2[1];
        plVar6 = (longlong *)*param_2;
        if (plVar6 != plVar5) {
          do {
            if ((longlong *)*plVar6 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar5);
          plVar6 = (longlong *)*param_2;
        }
        if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar6);
        }
        *param_2 = (longlong)plVar7;
        param_2[1] = (longlong)(plVar3 + 1);
        param_2[2] = (longlong)(plVar7 + lVar4);
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 < *(longlong **)(lVar2 + 0x4d0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b6940(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b6940(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  
  lVar1 = _DAT_180c86930;
  uVar9 = 0xfffffffffffffffe;
  plVar8 = (longlong *)param_2[1];
  plVar5 = (longlong *)*param_2;
  if (plVar5 != plVar8) {
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x38))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar8);
    plVar5 = (longlong *)*param_2;
  }
  param_2[1] = (longlong)plVar5;
  FUN_1800b8cb0(param_2,*(longlong *)(lVar1 + 0x1d8) - *(longlong *)(lVar1 + 0x1d0) >> 3 &
                        0xffffffff);
  plVar8 = *(longlong **)(lVar1 + 0x1d0);
  if (plVar8 < *(longlong **)(lVar1 + 0x1d8)) {
    do {
      plVar5 = (longlong *)*plVar8;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      plVar2 = (longlong *)0x0;
      plVar4 = (longlong *)param_2[1];
      if (plVar4 < (longlong *)param_2[2]) {
        param_2[1] = (longlong)(plVar4 + 1);
        *plVar4 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
      }
      else {
        plVar6 = (longlong *)*param_2;
        lVar3 = (longlong)plVar4 - (longlong)plVar6 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_1800b6a3c:
          plVar2 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)param_2[3],param_4,uVar9);
          plVar4 = (longlong *)param_2[1];
          plVar6 = (longlong *)*param_2;
          plVar7 = plVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          plVar7 = plVar2;
          if (lVar3 != 0) goto LAB_1800b6a3c;
        }
        for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
          *plVar2 = *plVar6;
          *plVar6 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        plVar4 = (longlong *)param_2[1];
        plVar6 = (longlong *)*param_2;
        if (plVar6 != plVar4) {
          do {
            if ((longlong *)*plVar6 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar4);
          plVar6 = (longlong *)*param_2;
        }
        if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar6);
        }
        *param_2 = (longlong)plVar7;
        param_2[1] = (longlong)(plVar2 + 1);
        param_2[2] = (longlong)(plVar7 + lVar3);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 < *(longlong **)(lVar1 + 0x1d8));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800b6b20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b6b20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  lVar1 = _DAT_180c86930;
  uVar10 = 0xfffffffffffffffe;
  FUN_1800b8500();
  uVar9 = *(longlong *)(lVar1 + 0xa8) - *(longlong *)(lVar1 + 0xa0) >> 3 & 0xffffffff;
  plVar7 = (longlong *)*param_2;
  plVar2 = (longlong *)0x0;
  if ((ulonglong)(param_2[2] - (longlong)plVar7 >> 3) < uVar9) {
    if (uVar9 != 0) {
      plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar9 * 8,(char)param_2[3],param_4,uVar10);
      plVar7 = (longlong *)*param_2;
    }
    plVar3 = (longlong *)param_2[1];
    plVar5 = plVar2;
    if (plVar7 != plVar3) {
      do {
        *plVar5 = *plVar7;
        *plVar7 = 0;
        plVar7 = plVar7 + 1;
        plVar5 = plVar5 + 1;
      } while (plVar7 != plVar3);
      plVar3 = (longlong *)param_2[1];
      plVar7 = (longlong *)*param_2;
      if (plVar7 != plVar3) {
        do {
          if ((longlong *)*plVar7 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar3);
        plVar7 = (longlong *)*param_2;
      }
    }
    if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
    *param_2 = (longlong)plVar2;
    param_2[1] = (longlong)plVar5;
    param_2[2] = (longlong)(plVar2 + uVar9);
  }
  plVar7 = *(longlong **)(lVar1 + 0xa0);
  if (plVar7 < *(longlong **)(lVar1 + 0xa8)) {
    do {
      plVar3 = (longlong *)0x0;
      plVar2 = (longlong *)*plVar7;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar5 = (longlong *)param_2[1];
      if (plVar5 < (longlong *)param_2[2]) {
        param_2[1] = (longlong)(plVar5 + 1);
        *plVar5 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
      }
      else {
        plVar6 = (longlong *)*param_2;
        lVar4 = (longlong)plVar5 - (longlong)plVar6 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_1800b6c99:
          plVar3 = (longlong *)
                   FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,(char)param_2[3],param_4,uVar10);
          plVar5 = (longlong *)param_2[1];
          plVar6 = (longlong *)*param_2;
          plVar8 = plVar3;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar8 = plVar3;
          if (lVar4 != 0) goto LAB_1800b6c99;
        }
        for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
          *plVar3 = *plVar6;
          *plVar6 = 0;
          plVar3 = plVar3 + 1;
        }
        *plVar3 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        plVar5 = (longlong *)param_2[1];
        plVar6 = (longlong *)*param_2;
        if (plVar6 != plVar5) {
          do {
            if ((longlong *)*plVar6 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar5);
          plVar6 = (longlong *)*param_2;
        }
        if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar6);
        }
        *param_2 = (longlong)plVar8;
        param_2[1] = (longlong)(plVar3 + 1);
        param_2[2] = (longlong)(plVar8 + lVar4);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 < *(longlong **)(lVar1 + 0xa8));
  }
  return;
}






