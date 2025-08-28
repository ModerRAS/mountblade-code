#include "TaleWorlds.Native.Split.h"

// 99_part_01_part024_sub001.c - 13 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_01_part024.c - 14 个函数


// 函数: void FUN_1800b7a70(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b7a70(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lStackX_8;
  longlong *plStackX_10;
  longlong lStackX_18;
  undefined8 uVar7;
  
  lVar3 = _DAT_180c86930;
  uVar7 = 0xfffffffffffffffe;
  lVar2 = _DAT_180c86930 + 0x8b0;
  lStackX_8 = param_1;
  plStackX_10 = param_2;
  lStackX_18 = lVar2;
  iVar5 = _Mtx_lock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar6 = lVar3 + 0xa90;
  FUN_180058080(lVar6,&lStackX_8,*param_2 + 0x1f0,param_4,uVar7);
  lVar4 = lStackX_8;
  if (lStackX_8 != lVar6) {
    plVar1 = (longlong *)(lVar3 + 0xab0);
    *plVar1 = *plVar1 + -1;
    func_0x00018066bd70(lStackX_8);
    FUN_18066ba00(lVar4,lVar6);
    FUN_1800b94f0(lVar4);
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
  }
  iVar5 = _Mtx_unlock(lVar2);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1800b7b50(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plStack_28;
  longlong *plStack_20;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  plStack_28 = (longlong *)0x0;
  plStack_20 = (longlong *)0x0;
  uStack_18 = 0;
  uStack_10 = 3;
  FUN_1800b7ca0(_DAT_180c86930,param_3,&plStack_28,param_4,0,0xfffffffffffffffe);
  plVar3 = plStack_20;
  plVar2 = plStack_28;
  uVar5 = (longlong)plStack_20 - (longlong)plStack_28 >> 3;
  if (uVar5 == 0) {
    FUN_1800befa0(_DAT_180c86898,param_2);
    for (plVar4 = plVar2; plVar4 != plVar3; plVar4 = plVar4 + 1) {
      if ((longlong *)*plVar4 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar4 + 0x38))();
      }
    }
  }
  else {
    _DAT_180bf65b8 = _DAT_180bf65b8 << 0xd ^ _DAT_180bf65b8;
    _DAT_180bf65b8 = _DAT_180bf65b8 >> 0x11 ^ _DAT_180bf65b8;
    _DAT_180bf65b8 = _DAT_180bf65b8 << 5 ^ _DAT_180bf65b8;
    plVar4 = (longlong *)plStack_28[(int)((ulonglong)(_DAT_180bf65b8 - 1) % (uVar5 & 0xffffffff))];
    *param_2 = (longlong)plVar4;
    plVar1 = plVar2;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))();
    }
    for (; plVar1 != plVar3; plVar1 = plVar1 + 1) {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x38))();
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1800b7ca0(longlong param_1,byte param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  plVar8 = *(longlong **)(param_1 + 0x4c8);
  if (plVar8 < *(longlong **)(param_1 + 0x4d0)) {
    do {
      plVar2 = (longlong *)*plVar8;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar4 = (longlong *)0x0;
      lVar5 = plVar2[0x37];
      bVar3 = *(byte *)(lVar5 + 0x38c);
      if (bVar3 == 9) {
        uVar1 = *(uint *)(lVar5 + 0x388);
        if ((uVar1 >> 0x1e & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            bVar3 = (byte)(uVar1 >> 0x18);
            if ((int)uVar1 < 0) {
              if ((uVar1 >> 0x1b & 1) == 0) {
                bVar3 = bVar3 & 1 | 0xc;
              }
              else {
                bVar3 = bVar3 & 1 | 0xe;
              }
            }
            else if ((uVar1 >> 0x19 & 1) == 0) {
              bVar3 = bVar3 & 1;
            }
            else if ((uVar1 >> 0x1b & 1) == 0) {
              bVar3 = bVar3 & 1 | 2;
            }
            else {
              bVar3 = ((uVar1 >> 0x18 & 1) != 0) + 7;
            }
          }
          else {
            bVar3 = 4;
          }
        }
        else {
          bVar3 = 9;
        }
        *(byte *)(lVar5 + 0x38c) = bVar3;
      }
      if (bVar3 == param_2) {
        plVar6 = (longlong *)param_3[1];
        if (plVar6 < (longlong *)param_3[2]) {
          param_3[1] = (longlong)(plVar6 + 1);
          *plVar6 = (longlong)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        else {
          plVar7 = (longlong *)*param_3;
          lVar5 = (longlong)plVar6 - (longlong)plVar7 >> 3;
          if (lVar5 == 0) {
            lVar5 = 1;
LAB_1800b7dd5:
            plVar4 = (longlong *)
                     FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,(char)param_3[3],param_4,uVar10);
            plVar6 = (longlong *)param_3[1];
            plVar7 = (longlong *)*param_3;
            plVar9 = plVar4;
          }
          else {
            lVar5 = lVar5 * 2;
            plVar9 = plVar4;
            if (lVar5 != 0) goto LAB_1800b7dd5;
          }
          for (; plVar7 != plVar6; plVar7 = plVar7 + 1) {
            *plVar4 = *plVar7;
            *plVar7 = 0;
            plVar4 = plVar4 + 1;
          }
          *plVar4 = (longlong)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar6 = (longlong *)param_3[1];
          plVar7 = (longlong *)*param_3;
          if (plVar7 != plVar6) {
            do {
              if ((longlong *)*plVar7 != (longlong *)0x0) {
                (**(code **)(*(longlong *)*plVar7 + 0x38))();
              }
              plVar7 = plVar7 + 1;
            } while (plVar7 != plVar6);
            plVar7 = (longlong *)*param_3;
          }
          if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar7);
          }
          *param_3 = (longlong)plVar9;
          param_3[1] = (longlong)(plVar4 + 1);
          param_3[2] = (longlong)(plVar9 + lVar5);
        }
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      plVar8 = plVar8 + 1;
    } while (plVar8 < *(longlong **)(param_1 + 0x4d0));
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b7eb0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b7eb0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar4 = _DAT_180c86930;
  uVar11 = 0xfffffffffffffffe;
  lVar1 = _DAT_180c86930 + 0x8b0;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  uVar2 = *(ulonglong *)(lVar4 + 0xab0);
  lVar8 = *param_2;
  if ((ulonglong)(param_2[2] - lVar8 >> 3) < uVar2) {
    if (uVar2 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 8,(char)param_2[3],param_4,uVar11);
      lVar8 = *param_2;
    }
    if (lVar8 != param_2[1]) {
                    // WARNING: Subroutine does not return
      memmove(lVar6,lVar8,param_2[1] - lVar8);
    }
    if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *param_2 = lVar6;
    param_2[1] = lVar6;
    param_2[2] = lVar6 + uVar2 * 8;
  }
  lVar8 = *(longlong *)(lVar4 + 0xa98);
  do {
    if (lVar8 == lVar4 + 0xa90) {
      iVar5 = _Mtx_unlock(lVar1);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      return;
    }
    uVar3 = *(undefined8 *)(lVar8 + 0x40);
    puVar10 = (undefined8 *)param_2[1];
    if (puVar10 < (undefined8 *)param_2[2]) {
      param_2[1] = (longlong)(puVar10 + 1);
      *puVar10 = uVar3;
    }
    else {
      puVar9 = (undefined8 *)*param_2;
      lVar6 = (longlong)puVar10 - (longlong)puVar9 >> 3;
      if (lVar6 == 0) {
        lVar6 = 1;
LAB_1800b7fe3:
        puVar7 = (undefined8 *)
                 FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,(char)param_2[3],param_4,uVar11);
        puVar10 = (undefined8 *)param_2[1];
        puVar9 = (undefined8 *)*param_2;
      }
      else {
        lVar6 = lVar6 * 2;
        if (lVar6 != 0) goto LAB_1800b7fe3;
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar9 != puVar10) {
                    // WARNING: Subroutine does not return
        memmove(puVar7,puVar9,(longlong)puVar10 - (longlong)puVar9);
      }
      *puVar7 = uVar3;
      if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *param_2 = (longlong)puVar7;
      param_2[1] = (longlong)(puVar7 + 1);
      param_2[2] = (longlong)(puVar7 + lVar6);
    }
    lVar8 = func_0x00018066bd70(lVar8);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8090(longlong *param_1)
void FUN_1800b8090(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar5;
  longlong *plVar6;
  undefined *puVar7;
  int iVar8;
  undefined1 auStack_168 [32];
  longlong *plStack_148;
  longlong *plStack_140;
  undefined8 uStack_138;
  longlong *plStack_130;
  undefined4 uStack_f8;
  undefined *puStack_e8;
  undefined *puStack_e0;
  uint uStack_d8;
  undefined auStack_d0 [136];
  char acStack_48 [16];
  ulonglong uStack_38;
  longlong lVar4;
  
  uStack_138 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iVar8 = 0;
  puStack_e8 = &UNK_1809fcc28;
  puStack_e0 = auStack_d0;
  uStack_d8 = 0;
  auStack_d0[0] = 0;
  FUN_1800c0570(_DAT_180c86898,&plStack_148);
  do {
    (**(code **)(puStack_e8 + 0x10))(&puStack_e8,&UNK_180a02db8);
    FUN_180060680(acStack_48,&UNK_1809fd0a0,iVar8);
    lVar4 = -1;
    do {
      lVar3 = lVar4 + 1;
      lVar1 = lVar4 + 1;
      lVar4 = lVar3;
    } while (acStack_48[lVar1] != '\0');
    iVar2 = (int)lVar3;
    if ((0 < iVar2) && (uStack_d8 + iVar2 < 0x7f)) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_e0 + uStack_d8,acStack_48,(longlong)(iVar2 + 1));
    }
    uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
    plVar6 = (longlong *)FUN_180075030(uVar5,0,1);
    plStack_130 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    puVar7 = &DAT_18098bc73;
    if (puStack_e0 != (undefined *)0x0) {
      puVar7 = puStack_e0;
    }
    (**(code **)(plVar6[2] + 0x10))(plVar6 + 2,puVar7);
    *(uint *)(plVar6 + 0x20) = *(uint *)(plVar6 + 0x20) | 0x40080;
    FUN_180076910(plVar6,&plStack_148);
    *(undefined4 *)(plVar6 + 0x4e) = 0x31;
    uStack_f8 = 0x443504f3;
    *(undefined4 *)((longlong)plVar6 + 0x274) = 0;
    *(undefined4 *)(plVar6 + 0x4f) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x27c) = 0;
    *(undefined4 *)(plVar6 + 0x50) = 0x7f7fffff;
    *(undefined8 *)((longlong)plVar6 + 0x284) = 0x4480000044800000;
    *(undefined8 *)((longlong)plVar6 + 0x28c) = 0x7f7fffff00000000;
    *(undefined4 *)((longlong)plVar6 + 0x294) = 0x44000000;
    *(undefined4 *)(plVar6 + 0x53) = 0x44000000;
    *(undefined4 *)((longlong)plVar6 + 0x29c) = 0;
    *(undefined4 *)(plVar6 + 0x54) = 0x7f7fffff;
    *(undefined4 *)((longlong)plVar6 + 0x2a4) = 0x443504f3;
    *(uint *)(plVar6 + 0x20) = *(uint *)(plVar6 + 0x20) | 0x80;
    plStack_140 = plVar6;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    plStack_140 = (longlong *)*param_1;
    *param_1 = (longlong)plVar6;
    if (plStack_140 != (longlong *)0x0) {
      (**(code **)(*plStack_140 + 0x38))();
    }
    (**(code **)(*plVar6 + 0x38))(plVar6);
    iVar8 = iVar8 + 1;
    param_1 = param_1 + 1;
  } while (iVar8 < 10);
  if (plStack_148 != (longlong *)0x0) {
    (**(code **)(*plStack_148 + 0x38))();
  }
  puStack_e8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b82b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b82b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [56];
  
  uVar1 = *(undefined8 *)(param_1 + 0xf8);
  uVar2 = FUN_18009eae0(auStack_40,param_1 + 0xc0,param_3,param_4,0xfffffffffffffffe);
  FUN_1800a5110(_DAT_180c86938,uVar2,uVar1);
  return;
}



undefined8 *
FUN_1800b8300(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809fcc58;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x40,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8370(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1800b8370(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = param_1[1];
  if (uVar6 < param_1[2]) {
    param_1[1] = uVar6 + 0x58;
    FUN_1800b8300(uVar6);
    return;
  }
  uVar8 = *param_1;
  lVar10 = (longlong)(uVar6 - uVar8) / 0x58;
  puVar3 = (undefined8 *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1800b8417;
  }
  puVar3 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x58,(char)param_1[3],param_4,0xfffffffffffffffe);
  uVar6 = param_1[1];
  uVar8 = *param_1;
LAB_1800b8417:
  puVar4 = puVar3;
  if (uVar8 != uVar6) {
    lVar9 = uVar8 - (longlong)puVar3;
    do {
      *puVar4 = &UNK_18098bcb0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      *puVar4 = &UNK_1809fcc58;
      puVar4[1] = puVar4 + 3;
      *(undefined4 *)(puVar4 + 2) = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar4);
      puVar1 = *(undefined **)(lVar9 + 8 + (longlong)puVar4);
      puVar7 = &DAT_18098bc73;
      if (puVar1 != (undefined *)0x0) {
        puVar7 = puVar1;
      }
      strcpy_s(puVar4[1],0x40,puVar7);
      puVar4 = puVar4 + 0xb;
    } while (lVar9 + (longlong)puVar4 != uVar6);
  }
  FUN_1800b8300(puVar4,param_2);
  puVar2 = (undefined8 *)param_1[1];
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != puVar2) {
    do {
      (**(code **)*puVar5)(puVar5,0);
      puVar5 = puVar5 + 0xb;
    } while (puVar5 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  if (puVar5 == (undefined8 *)0x0) {
    *param_1 = (ulonglong)puVar3;
    param_1[1] = (ulonglong)(puVar4 + 0xb);
    param_1[2] = (ulonglong)(puVar3 + lVar10 * 0xb);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar5);
}







// 函数: void FUN_1800b8500(longlong *param_1)
void FUN_1800b8500(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)param_1[1];
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (longlong)plVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8570(longlong *param_1,ulonglong param_2)
void FUN_1800b8570(longlong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar11 = param_1[1];
  lVar10 = *param_1;
  uVar12 = (lVar11 - lVar10) / 0x28;
  if (param_2 <= uVar12) {
    lVar7 = param_2 * 0x28 + lVar10;
    if (lVar7 != lVar11) {
      do {
        if (*(longlong *)(lVar7 + 8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lVar7 = lVar7 + 0x28;
      } while (lVar7 != lVar11);
      lVar10 = *param_1;
    }
    param_1[1] = param_2 * 0x28 + lVar10;
    return;
  }
  param_2 = param_2 - uVar12;
  puVar6 = (undefined8 *)param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - (longlong)puVar6) / 0x28)) {
    if (param_2 != 0) {
      puVar5 = puVar6 + 2;
      uVar12 = param_2;
      do {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined4 *)(puVar5 + 2) = 0x12;
        puVar6 = puVar6 + 5;
        puVar5 = puVar5 + 5;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    param_1[1] = (longlong)(puVar6 + param_2 * 5);
    return;
  }
  puVar5 = (undefined8 *)*param_1;
  lVar11 = ((longlong)puVar6 - (longlong)puVar5) / 0x28;
  uVar12 = lVar11 * 2;
  if (lVar11 == 0) {
    uVar12 = 1;
  }
  if (uVar12 < lVar11 + param_2) {
    uVar12 = lVar11 + param_2;
  }
  puVar3 = (undefined4 *)0x0;
  if (uVar12 != 0) {
    puVar3 = (undefined4 *)
             FUN_18062b420(_DAT_180c8ed18,uVar12 * 0x28,(char)param_1[3],puVar5,0xfffffffffffffffe);
    puVar6 = (undefined8 *)param_1[1];
    puVar5 = (undefined8 *)*param_1;
  }
  puVar4 = puVar3;
  if (puVar5 != puVar6) {
    lVar11 = (longlong)puVar3 - (longlong)puVar5;
    puVar5 = puVar5 + 4;
    do {
      *puVar4 = *(undefined4 *)(puVar5 + -4);
      puVar9 = (undefined8 *)((longlong)puVar5 + lVar11 + -0x18);
      *puVar9 = 0;
      *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar5) = 0;
      *(undefined8 *)(lVar11 + -8 + (longlong)puVar5) = 0;
      *(undefined4 *)(lVar11 + (longlong)puVar5) = *(undefined4 *)puVar5;
      uVar2 = *puVar9;
      *puVar9 = puVar5[-3];
      puVar5[-3] = uVar2;
      uVar2 = *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar5);
      *(undefined8 *)(lVar11 + -0x10 + (longlong)puVar5) = puVar5[-2];
      puVar5[-2] = uVar2;
      uVar2 = *(undefined8 *)(lVar11 + -8 + (longlong)puVar5);
      *(undefined8 *)(lVar11 + -8 + (longlong)puVar5) = puVar5[-1];
      puVar5[-1] = uVar2;
      uVar1 = *(undefined4 *)(lVar11 + (longlong)puVar5);
      *(undefined4 *)(lVar11 + (longlong)puVar5) = *(undefined4 *)puVar5;
      *(undefined4 *)puVar5 = uVar1;
      puVar4 = puVar4 + 10;
      puVar9 = puVar5 + 1;
      puVar5 = puVar5 + 5;
    } while (puVar9 != puVar6);
  }
  if (param_2 != 0) {
    puVar6 = (undefined8 *)(puVar4 + 4);
    uVar8 = param_2;
    do {
      puVar6[-2] = 0;
      *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0x12;
      puVar6 = puVar6 + 5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lVar11 = *param_1;
  if (lVar11 != param_1[1]) {
    do {
      if (*(longlong *)(lVar11 + 8) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar11 = lVar11 + 0x28;
    } while (lVar11 != param_1[1]);
    lVar11 = *param_1;
  }
  if (lVar11 == 0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar4 + param_2 * 10);
    param_1[2] = (longlong)(puVar3 + uVar12 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar11);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8630(longlong *param_1,ulonglong param_2)
void FUN_1800b8630(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar3 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  uVar2 = (longlong)plVar3 - (longlong)plVar5 >> 3;
  if (param_2 <= uVar2) {
    plVar1 = plVar5 + param_2;
    if (plVar1 != plVar3) {
      do {
        if ((longlong *)*plVar1 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar1 + 0x38))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3);
      plVar5 = (longlong *)*param_1;
    }
    param_1[1] = (longlong)(plVar5 + param_2);
    return;
  }
  param_2 = param_2 - uVar2;
  if ((ulonglong)(param_1[2] - (longlong)plVar3 >> 3) < param_2) {
    uVar4 = uVar2 * 2;
    if (uVar2 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < uVar2 + param_2) {
      uVar4 = uVar2 + param_2;
    }
    plVar1 = (longlong *)0x0;
    plVar6 = plVar1;
    if (uVar4 != 0) {
      plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)param_1[3]);
      plVar5 = (longlong *)*param_1;
      plVar3 = (longlong *)param_1[1];
      plVar6 = plVar1;
    }
    for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
      *plVar1 = *plVar5;
      plVar1 = plVar1 + 1;
      *plVar5 = 0;
    }
    uVar2 = param_2;
    plVar5 = plVar1;
    if (param_2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *plVar5 = 0;
        plVar5 = plVar5 + 1;
      }
    }
    plVar5 = (longlong *)param_1[1];
    plVar3 = (longlong *)*param_1;
    if (plVar3 != plVar5) {
      do {
        if ((longlong *)*plVar3 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar3 + 0x38))();
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar5);
      plVar3 = (longlong *)*param_1;
    }
    if (plVar3 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar3);
    }
    *param_1 = (longlong)plVar6;
    param_1[2] = (longlong)(plVar6 + uVar4);
    param_1[1] = (longlong)(plVar1 + param_2);
    return;
  }
  uVar2 = param_2;
  if (param_2 != 0) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *plVar3 = 0;
      plVar3 = plVar3 + 1;
    }
    plVar3 = (longlong *)param_1[1];
  }
  param_1[1] = (longlong)(plVar3 + param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b8674(longlong param_1,undefined8 param_2,undefined8 *param_3)
void FUN_1800b8674(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *unaff_RBX;
  ulonglong uVar4;
  longlong unaff_RSI;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *unaff_R14;
  undefined8 *puVar7;
  
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(param_1 + unaff_RSI)) {
    uVar4 = param_1 + unaff_RSI;
  }
  puVar2 = (undefined8 *)0x0;
  puVar7 = puVar2;
  if (uVar4 != 0) {
    puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 8,(char)unaff_R14[3]);
    param_3 = (undefined8 *)*unaff_R14;
    unaff_RBX = (undefined8 *)unaff_R14[1];
    puVar7 = puVar2;
  }
  for (; param_3 != unaff_RBX; param_3 = param_3 + 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
    *param_3 = 0;
  }
  lVar3 = unaff_RSI;
  puVar5 = puVar2;
  if (unaff_RSI != 0) {
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  plVar1 = (longlong *)unaff_R14[1];
  plVar6 = (longlong *)*unaff_R14;
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (longlong *)*unaff_R14;
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
  *unaff_R14 = (longlong)puVar7;
  unaff_R14[2] = (longlong)(puVar7 + uVar4);
  unaff_R14[1] = (longlong)(puVar2 + unaff_RSI);
  return;
}







// 函数: void FUN_1800b8754(void)
void FUN_1800b8754(void)

{
  longlong lVar1;
  undefined8 *unaff_RBX;
  longlong unaff_RSI;
  longlong unaff_R14;
  
  lVar1 = unaff_RSI;
  if (unaff_RSI != 0) {
    for (; lVar1 != 0; lVar1 = lVar1 + -1) {
      *unaff_RBX = 0;
      unaff_RBX = unaff_RBX + 1;
    }
    unaff_RBX = *(undefined8 **)(unaff_R14 + 8);
  }
  *(undefined8 **)(unaff_R14 + 8) = unaff_RBX + unaff_RSI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b87c0(longlong *param_1,undefined8 *param_2)
void FUN_1800b87c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)0x0;
  if (puVar6 < (undefined8 *)param_1[2]) {
    param_1[1] = (longlong)(puVar6 + 1);
    *puVar6 = *param_2;
    *param_2 = 0;
    return;
  }
  puVar3 = (undefined8 *)*param_1;
  lVar4 = (longlong)puVar6 - (longlong)puVar3 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    puVar7 = puVar2;
    if (lVar4 == 0) goto joined_r0x0001800b8850;
  }
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,(char)param_1[3]);
  puVar6 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)*param_1;
  puVar7 = puVar2;
joined_r0x0001800b8850:
  for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
    *puVar3 = 0;
  }
  *puVar2 = *param_2;
  *param_2 = 0;
  plVar1 = (longlong *)param_1[1];
  plVar5 = (longlong *)*param_1;
  if (plVar5 != plVar1) {
    do {
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x38))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    plVar5 = (longlong *)*param_1;
  }
  if (plVar5 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar5);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar2 + 1);
  param_1[2] = (longlong)(puVar7 + lVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





// 函数: void FUN_1800b88d0(longlong *param_1,longlong *param_2)
void FUN_1800b88d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)param_1[1];
  if (plVar4 < (longlong *)param_1[2]) {
    param_1[1] = (longlong)(plVar4 + 1);
    param_2 = (longlong *)*param_2;
    *plVar4 = (longlong)param_2;
    if (param_2 == (longlong *)0x0) {
      return;
    }
                    // WARNING: Could not recover jumptable at 0x0001800b8907. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 0x28))();
    return;
  }
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)0x0;
  lVar2 = (longlong)plVar4 - (longlong)plVar3 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    plVar5 = plVar1;
    if (lVar2 == 0) goto joined_r0x0001800b8970;
  }
  plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,(char)param_1[3]);
  plVar4 = (longlong *)param_1[1];
  plVar3 = (longlong *)*param_1;
  plVar5 = plVar1;
joined_r0x0001800b8970:
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    *plVar1 = *plVar3;
    plVar1 = plVar1 + 1;
    *plVar3 = 0;
  }
  param_2 = (longlong *)*param_2;
  *plVar1 = (longlong)param_2;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))();
  }
  plVar4 = (longlong *)param_1[1];
  plVar3 = (longlong *)*param_1;
  if (plVar3 != plVar4) {
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x38))();
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *param_1 = (longlong)plVar5;
    param_1[1] = (longlong)(plVar1 + 1);
    param_1[2] = (longlong)(plVar5 + lVar2);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





