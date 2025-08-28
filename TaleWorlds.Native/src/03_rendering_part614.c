#include "TaleWorlds.Native.Split.h"

// 03_rendering_part614.c - 15 个函数

// 函数: void FUN_180605bc0(longlong param_1)
void FUN_180605bc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x8a8);
    if ((*(longlong *)(lVar2 + 0x260) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x210), lVar1 != 0)) {
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x50) = 0;
      lVar2 = *(longlong *)(param_1 + 0x8a8);
    }
    FUN_1802eeb00(lVar2);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x210), lVar2 != 0)) {
      *(longlong *)(lVar2 + 0x48) = param_1;
      *(code **)(lVar2 + 0x50) = FUN_180541110;
    }
    FUN_1805444c0(param_1);
    FUN_180544ac0(param_1);
  }
  return;
}





// 函数: void FUN_180605c80(longlong param_1,undefined1 param_2)
void FUN_180605c80(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined1 auStack_20 [24];
  
  FUN_180540840(param_1,0);
  if (*(longlong *)(param_1 + 0x8a8) != 0) {
    FUN_1802e9fa0(*(longlong *)(param_1 + 0x8a8),param_2,1);
  }
  FUN_180540130(param_1);
  if (*(longlong *)(param_1 + 0x830) != 0) {
    FUN_18054a450();
  }
  lVar2 = *(longlong *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_28 = *(undefined4 *)(param_1 + 0x938);
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605ce0(longlong param_1,longlong *param_2)
void FUN_180605ce0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  longlong **pplStackX_20;
  longlong lStack_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  
  uStack_28 = 0xfffffffffffffffe;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) && (param_2 != (longlong *)0x0)) {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,3);
    plVar5 = (longlong *)FUN_180275090(uVar4);
    plStackX_10 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplStackX_18 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_180275cf0(plVar5,0,&plStackX_8,1);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplStackX_20 = &plStackX_8;
    FUN_1802fc0f0(uVar4,plStackX_8);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_28 = CONCAT44(uStack_28._4_4_,*(undefined4 *)(param_1 + 0x938));
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar2 + 0x2b88,auStack_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}





// 函数: void FUN_180605df0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180605df0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plStackX_8;
  longlong *plStackX_10;
  longlong **pplStackX_18;
  undefined8 uVar8;
  longlong lVar9;
  longlong lStack_30;
  
  if (((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) && (param_2 != 0)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260);
    for (plVar7 = *(longlong **)(lVar2 + 0x1a8); plVar7 < *(longlong **)(lVar2 + 0x1b0);
        plVar7 = plVar7 + 1) {
      iVar6 = (**(code **)(*(longlong *)*plVar7 + 0x98))();
      if (iVar6 == 0) {
        plVar3 = (longlong *)*plVar7;
        plStackX_10 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        cVar4 = FUN_1802828a0(plVar3,param_2);
        if ((cVar4 != '\0') && ((plVar3[8] - plVar3[7] & 0xfffffffffffffff0U) == 0)) {
          plStackX_8 = plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          pplStackX_18 = &plStackX_8;
          uVar5 = FUN_1802fc790(lVar2,plStackX_8);
          FUN_1802fca80(lVar2,plStackX_8,uVar5);
          if (plStackX_8 != (longlong *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          break;
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3);
        }
      }
    }
  }
  uVar8 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x930);
  lVar2 = lVar1 + 0x2be8;
  lVar9 = lVar2;
  iVar6 = _Mtx_lock(lVar2);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lStack_30 = param_1;
  FUN_1804dd4d0(lVar1 + 0x2b88,&stack0xffffffffffffffe0,&lStack_30,param_4,uVar8,lVar9,1);
  iVar6 = _Mtx_unlock(lVar2);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



undefined8 * FUN_180605fa0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_18 [16];
  
  puVar2 = (undefined8 *)
           FUN_1804bc610(param_1,auStack_18,*(undefined8 *)(*(longlong *)(param_2 + 0x830) + 0x188))
  ;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x0001802e8b83)
// WARNING: Removing unreachable block (ram,0x0001802e8ba5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180605ff0(longlong param_1,longlong param_2,longlong param_3)
void FUN_180605ff0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  longlong *unaff_RBX;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plStackX_8;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined1 uVar22;
  longlong *plStack_50;
  longlong *plStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  uVar18 = 0;
  if (*(int *)(param_3 + 0x58) < 2) {
    *(undefined4 *)(param_3 + 0x58) = 2;
  }
  else {
    plStack_50 = (longlong *)0x0;
    plStack_48 = (longlong *)0x0;
    uStack_40 = 0;
    uStack_38._0_4_ = 0x16;
    plVar11 = *(longlong **)(param_3 + 0x38);
    iVar7 = (int)(*(longlong *)(param_3 + 0x40) - (longlong)plVar11 >> 4);
    lVar20 = (longlong)iVar7;
    uVar13 = uVar18;
    uVar15 = uVar18;
    uVar21 = uVar18;
    uVar19 = 0x16;
    if (0 < iVar7) {
      do {
        plVar11 = *(longlong **)(param_3 + 0x38);
        if ((*(byte *)(uVar15 + 8 + (longlong)plVar11) & 1) != 0) {
          in_stack_ffffffffffffff80 = 0x18060607f;
          lVar12 = FUN_180607910(&plStack_50,plVar11 + (longlong)(int)uVar21 * 2);
          *(undefined4 *)(lVar12 + 8) = 1;
          plVar11 = *(longlong **)(param_3 + 0x38);
        }
        lVar20 = lVar20 + -1;
        uVar13 = uStack_40;
        uVar15 = uVar15 + 0x10;
        uVar21 = (ulonglong)((int)uVar21 + 1);
        uVar19 = (undefined4)uStack_38;
      } while (lVar20 != 0);
    }
    *(longlong **)(param_3 + 0x38) = plStack_50;
    plVar6 = *(longlong **)(param_3 + 0x40);
    *(longlong **)(param_3 + 0x40) = plStack_48;
    uStack_40 = *(undefined8 *)(param_3 + 0x48);
    *(ulonglong *)(param_3 + 0x48) = uVar13;
    uVar5 = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_3 + 0x50) = uVar19;
    uStack_38 = CONCAT44(uStack_38._4_4_,uVar5);
    plStack_48 = plVar6;
    plVar16 = plVar11;
    plStack_50 = plVar11;
    while (plVar16 != plVar6) {
      if ((longlong *)*plVar16 != (longlong *)0x0) {
        in_stack_ffffffffffffff80 = 0x1806060fe;
        plStackX_8 = plVar16;
        (**(code **)(*(longlong *)*plVar16 + 0x38))();
      }
      plVar16 = plVar16 + 2;
      plStackX_8 = plVar16;
    }
    if (plVar11 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar11);
    }
  }
  if (*(int *)(param_2 + 0x58) < 2) {
    iVar7 = (int)(*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 4);
    lVar20 = (longlong)iVar7;
    if (0 < iVar7) {
      do {
        piVar1 = (int *)(uVar18 + 8 + *(longlong *)(param_2 + 0x38));
        *piVar1 = *piVar1 << 1;
        uVar18 = uVar18 + 0x10;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    *(undefined4 *)(param_2 + 0x58) = 2;
  }
  else {
    in_stack_ffffffffffffff80 = 0x180606137;
    FUN_180277a20(param_2,0);
  }
  plStack_50 = (longlong *)0xfffffffffffffffe;
  lVar20 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x8a8) + 0x260) + 0x210);
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x220,0x10,3);
  uVar14 = *(undefined1 *)(lVar20 + 0x2589);
  bVar2 = *(byte *)(lVar20 + 0x2588);
  uVar22 = *(undefined1 *)(lVar20 + 0x2587);
  uVar3 = *(undefined1 *)(lVar20 + 0x2586);
  uVar4 = *(undefined1 *)(lVar20 + 0x2585);
  uVar10 = FUN_180544d70(lVar20,&plStackX_8);
  uVar17 = (uint)bVar2;
  uVar13 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff80 >> 8),uVar3);
  uVar18 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff78 >> 8),uVar4);
  FUN_1805ef6e0(uVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x8a8) + 0x260),
                *(undefined8 *)(lVar20 + 0x2548),uVar10,uVar18,uVar13,uVar22,uVar17,uVar14);
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x2f0,0x10,3);
  plVar11 = (longlong *)FUN_1802e6b00(uVar9,4);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  *(longlong **)(param_1 + 0x10) = plVar11;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  FUN_180170ac0(*(undefined8 *)(param_1 + 0x10),&UNK_180a34038);
  FUN_1802ec3d0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(lVar20 + 0x2548));
  FUN_1802fc0f0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x260),param_3);
  lVar20 = *(longlong *)(param_1 + 0x10);
  *(uint *)(lVar20 + 0x2ac) = *(uint *)(lVar20 + 0x2ac) | 0x10000000;
  lVar12 = *(longlong *)(lVar20 + 0x20);
  if (lVar12 != 0) {
    iVar7 = *(int *)(lVar20 + 0x2b8);
    if (((iVar7 != -1) && ((ulonglong)(longlong)iVar7 < *(ulonglong *)(lVar12 + 0x60838))) &&
       ((*(ulonglong *)(*(longlong *)(lVar12 + 0x60830) + (longlong)iVar7 * 0x10) &
        0xffffffff00000000) != 0)) {
      FUN_180398450(lVar12 + 0x607e0);
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x10);
  lVar12 = *(longlong *)(param_1 + 0x8a8);
  lVar20 = plVar11[4];
  plStackX_8 = unaff_RBX;
  if ((lVar20 == 0) || (lVar20 == *(longlong *)(lVar12 + 0x20))) {
    uVar14 = 0;
    if (plVar11[0x2d] == 0) {
      if (lVar20 != 0) {
        FUN_180398550(*(longlong *)(lVar12 + 0x20) + 0x607e0);
      }
    }
    else {
      uVar13 = CONCAT44((int)(uVar13 >> 0x20),0x14);
      FUN_1802eb9a0(plVar11[0x2d],plVar11,1,0,uVar18 & 0xffffffffffffff00,uVar13,uVar22,uVar17,
                    0xfffffffffffffffe);
    }
  }
  else {
    uVar14 = 1;
    FUN_180198980(lVar20);
  }
  if ((*(uint *)((longlong)plVar11 + 0x2ac) & 0x20000) == 0) {
    FUN_1802ed990(lVar12,1);
  }
  plVar11[0x2d] = lVar12;
  lVar20 = lVar12;
  do {
    lVar8 = lVar20;
    lVar20 = *(longlong *)(lVar8 + 0x168);
  } while (lVar20 != 0);
  FUN_1802f2700(lVar8,1);
  FUN_1802eaec0(plVar11,*(undefined8 *)(lVar12 + 0x20),uVar14,1,0,uVar13 & 0xffffffffffffff00,1,
                0xffffffff);
  (**(code **)(*plVar11 + 0x28))(plVar11);
  FUN_1800b87c0(lVar12 + 0x1c0,&stack0x00000010);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x38))();
  }
  FUN_180254610(plVar11);
  FUN_1802eace0(plVar11);
  *(short *)(plVar11 + 0x56) = (short)plVar11[0x56] + 1;
  if (plVar11[0x2d] != 0) {
    func_0x0001802eeba0();
  }
  *(short *)(lVar12 + 0x2b0) = *(short *)(lVar12 + 0x2b0) + 1;
  if (*(longlong *)(lVar12 + 0x168) != 0) {
    func_0x0001802eeba0();
    for (lVar20 = *(longlong *)(lVar12 + 0x168); lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x168)
        ) {
      lVar12 = lVar20;
    }
  }
  bVar2 = *(byte *)(lVar12 + 0x2e8);
  *(byte *)(lVar12 + 0x2e8) = bVar2 & 0xf7 | 8;
  lVar20 = *(longlong *)(lVar12 + 0x20);
  uVar18 = 0;
  if (lVar20 != 0) {
    lVar8 = *(longlong *)(lVar12 + 0x28);
    if ((bVar2 & 3 | 8) == 0xb) {
      if ((*(longlong *)(lVar8 + 0x170) == 0) &&
         (plVar11 = *(longlong **)(lVar12 + 0x10), plVar11 != (longlong *)0x0)) {
        plStack_50 = (longlong *)0x1802f2797;
        plStackX_8 = plVar11;
        (**(code **)(*plVar11 + 0x28))();
        plStack_50 = (longlong *)0x1802f27a5;
        uVar9 = FUN_180389a90(lVar20 + 0x29a0,&plStackX_8);
        *(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x170) = uVar9;
        lVar20 = *(longlong *)(lVar12 + 0x20);
        plVar11 = *(longlong **)(lVar20 + 0x29a8);
        if (plVar11 != (longlong *)0x0) {
          plStack_50 = (longlong *)0x1802f27d8;
          (**(code **)(*plVar11 + 0x18))
                    (plVar11,*(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x170),lVar12 + 0x70);
          lVar20 = *(longlong *)(lVar12 + 0x20);
        }
        plVar11 = *(longlong **)(lVar20 + 0x29a8);
        if (plVar11 != (longlong *)0x0) {
          plStack_50 = (longlong *)0x1802f27fd;
          (**(code **)(*plVar11 + 0x20))
                    (plVar11,*(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x170),
                     *(undefined4 *)(lVar12 + 0x18));
        }
      }
    }
    else if (*(longlong *)(lVar8 + 0x170) != 0) {
      plVar11 = *(longlong **)(lVar20 + 0x29a8);
      if (plVar11 != (longlong *)0x0) {
        plStack_50 = (longlong *)0x1802f2820;
        (**(code **)(*plVar11 + 0x10))(plVar11,*(longlong *)(lVar8 + 0x170));
        lVar8 = *(longlong *)(lVar12 + 0x28);
      }
      *(undefined8 *)(lVar8 + 0x170) = 0;
    }
  }
  uVar13 = uVar18;
  if (*(longlong *)(lVar12 + 0x1c8) - *(longlong *)(lVar12 + 0x1c0) >> 3 != 0) {
    do {
      plStack_50 = (longlong *)0x1802f2864;
      FUN_1802f2700(*(undefined8 *)(uVar13 + *(longlong *)(lVar12 + 0x1c0)),(bVar2 & 1) != 0);
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar13 = uVar13 + 8;
    } while ((ulonglong)(longlong)(int)uVar17 <
             (ulonglong)(*(longlong *)(lVar12 + 0x1c8) - *(longlong *)(lVar12 + 0x1c0) >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806061a0(longlong param_1,undefined4 *param_2,undefined4 param_3,byte param_4,
void FUN_1806061a0(longlong param_1,undefined4 *param_2,undefined4 param_3,byte param_4,
                  longlong param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 0x8a8);
  if (lVar11 != 0) {
    lVar11 = *(longlong *)(lVar11 + 0x260);
  }
  cVar2 = *(char *)(*(longlong *)(lVar11 + 0x208) + 0x148);
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  puVar9 = (undefined4 *)FUN_180435440(uVar8,cVar2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + param_5);
      if (cVar3 < cVar2) {
        uVar4 = param_6[1];
        uVar5 = param_6[2];
        uVar6 = param_6[3];
        puVar1 = (undefined4 *)(*(longlong *)(puVar9 + 6) + (longlong)cVar3 * 0x10);
        *puVar1 = *param_6;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        FUN_180627020(&UNK_180a38778,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      param_6 = param_6 + 4;
    } while (lVar10 < (longlong)(ulonglong)param_4);
  }
  lVar10 = *(longlong *)(lVar11 + 0xd8);
  if (lVar10 == 0) {
    *(undefined4 **)(lVar11 + 0xd8) = puVar9;
    return;
  }
  if (*(longlong *)(lVar10 + 0x18) == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806061b3(undefined8 param_1,undefined4 *param_2,undefined4 param_3)
void FUN_1806061b3(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  byte unaff_BL;
  longlong lVar10;
  longlong unaff_RSI;
  longlong in_stack_00000070;
  undefined4 *in_stack_00000078;
  
  if (unaff_RSI != 0) {
    unaff_RSI = *(longlong *)(unaff_RSI + 0x260);
  }
  cVar2 = *(char *)(*(longlong *)(unaff_RSI + 0x208) + 0x148);
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  puVar9 = (undefined4 *)FUN_180435440(uVar8,cVar2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (unaff_BL != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + in_stack_00000070);
      if (cVar3 < cVar2) {
        uVar4 = in_stack_00000078[1];
        uVar5 = in_stack_00000078[2];
        uVar6 = in_stack_00000078[3];
        puVar1 = (undefined4 *)(*(longlong *)(puVar9 + 6) + (longlong)cVar3 * 0x10);
        *puVar1 = *in_stack_00000078;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        FUN_180627020(&UNK_180a38778,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      in_stack_00000078 = in_stack_00000078 + 4;
    } while (lVar10 < (longlong)(ulonglong)unaff_BL);
  }
  lVar10 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar10 == 0) {
    *(undefined4 **)(unaff_RSI + 0xd8) = puVar9;
    return;
  }
  if (*(longlong *)(lVar10 + 0x18) == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806061c5(undefined8 param_1,undefined8 param_2,undefined4 param_3)
void FUN_1806061c5(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  byte unaff_BL;
  longlong lVar10;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  longlong in_stack_00000070;
  undefined4 *in_stack_00000078;
  
  if (unaff_RSI != 0) {
    unaff_RSI = *(longlong *)(unaff_RSI + 0x260);
  }
  cVar2 = *(char *)(*(longlong *)(unaff_RSI + 0x208) + 0x148);
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  puVar9 = (undefined4 *)FUN_180435440(uVar8,cVar2);
  uVar4 = *unaff_RDI;
  uVar5 = unaff_RDI[1];
  uVar6 = unaff_RDI[2];
  uVar7 = unaff_RDI[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (unaff_BL != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + in_stack_00000070);
      if (cVar3 < cVar2) {
        uVar4 = in_stack_00000078[1];
        uVar5 = in_stack_00000078[2];
        uVar6 = in_stack_00000078[3];
        puVar1 = (undefined4 *)(*(longlong *)(puVar9 + 6) + (longlong)cVar3 * 0x10);
        *puVar1 = *in_stack_00000078;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        FUN_180627020(&UNK_180a38778,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      in_stack_00000078 = in_stack_00000078 + 4;
    } while (lVar10 < (longlong)(ulonglong)unaff_BL);
  }
  lVar10 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar10 == 0) {
    *(undefined4 **)(unaff_RSI + 0xd8) = puVar9;
    return;
  }
  if (*(longlong *)(lVar10 + 0x18) == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar10);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180606227(void)
void FUN_180606227(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R12B;
  longlong unaff_R15;
  longlong in_stack_00000070;
  undefined4 *in_stack_00000078;
  
  lVar6 = 0;
  do {
    cVar2 = *(char *)(lVar6 + in_stack_00000070);
    if (cVar2 < unaff_R12B) {
      uVar3 = in_stack_00000078[1];
      uVar4 = in_stack_00000078[2];
      uVar5 = in_stack_00000078[3];
      puVar1 = (undefined4 *)(*(longlong *)(unaff_RBP + 0x18) + (longlong)cVar2 * 0x10);
      *puVar1 = *in_stack_00000078;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
    else {
      FUN_180627020(&UNK_180a38778,(int)cVar2);
    }
    lVar6 = lVar6 + 1;
    in_stack_00000078 = in_stack_00000078 + 4;
  } while (lVar6 < unaff_R15);
  lVar6 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar6 != 0) {
    if (*(longlong *)(lVar6 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar6);
  }
  *(longlong *)(unaff_RSI + 0xd8) = unaff_RBP;
  return;
}





// 函数: void FUN_18060622e(void)
void FUN_18060622e(void)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  longlong unaff_R15;
  longlong in_stack_00000070;
  
  do {
    cVar2 = *(char *)(unaff_RBX + in_stack_00000070);
    if (cVar2 < unaff_R12B) {
      uVar4 = unaff_RDI[1];
      uVar5 = unaff_RDI[2];
      uVar6 = unaff_RDI[3];
      puVar1 = (undefined4 *)(*(longlong *)(unaff_RBP + 0x18) + (longlong)cVar2 * 0x10);
      *puVar1 = *unaff_RDI;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
    }
    else {
      FUN_180627020(&UNK_180a38778,(int)cVar2);
    }
    unaff_RBX = unaff_RBX + 1;
    unaff_RDI = unaff_RDI + 4;
  } while (unaff_RBX < unaff_R15);
  lVar3 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar3);
  }
  *(longlong *)(unaff_RSI + 0xd8) = unaff_RBP;
  return;
}





// 函数: void FUN_18060627e(void)
void FUN_18060627e(void)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  
  lVar1 = *(longlong *)(unaff_RSI + 0xd8);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_RSI + 0xd8) = unaff_RBP;
    return;
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar1);
}





// 函数: void FUN_180606299(void)
void FUN_180606299(void)

{
  longlong unaff_RBX;
  
  if (*(longlong *)(unaff_RBX + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(unaff_RBX + 0x18) = 0;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_1806062d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)
void FUN_1806062d0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uStackX_8;
  
  if (param_1 != 0) {
    iVar3 = (int)param_3;
    if (*(char *)(param_1 + 0x8be) != '\0') {
      if (iVar3 != -1) {
        param_2 = *(longlong *)(param_1 + 0x18 + (longlong)iVar3 * 8);
      }
      lVar2 = *(longlong *)(param_1 + 0x8a8);
      if (lVar2 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x260);
      }
      if ((param_2 != 0) && (lVar2 != 0)) {
        uVar1 = FUN_1802fc790(lVar2,param_2,param_3,param_4,0xfffffffffffffffe);
        FUN_1802fca80(lVar2,param_2,uVar1);
        if (iVar3 != -1) {
          uStackX_8 = 0;
          FUN_180544860(param_1,param_3 & 0xffffffff,&uStackX_8);
        }
      }
      FUN_180544ac0(param_1);
    }
  }
  return;
}





// 函数: void FUN_180606380(longlong param_1)
void FUN_180606380(longlong param_1)

{
  undefined8 auStackX_8 [2];
  undefined8 *puStackX_18;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    puStackX_18 = auStackX_8;
    auStackX_8[0] = 0;
    uStack_160 = 0x3f800000;
    uStack_158 = 0;
    uStack_150 = 0x3f80000000000000;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0x3f800000;
    uStack_130 = 0;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0x3f800000;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    uStack_fc = 0x64ffffffff;
    uStack_f4 = 100;
    uStack_ec = 0;
    uStack_e4 = 0;
    uStack_e0 = 100;
    uStack_dc = 0;
    uStack_d4 = 0;
    uStack_cc = 0;
    uStack_c4 = 0;
    uStack_c0 = 0x3f800000;
    uStack_b8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0x3f800000;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0x3f800000;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_5c = 0x64ffffffff;
    uStack_54 = 100;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_40 = 100;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_24 = 0;
    FUN_180540960(param_1,100,0,0,&uStack_c0,&uStack_160,auStackX_8,1,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180606500(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180606500(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  longlong *param_9)

{
  undefined1 auStack_2b8 [32];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  longlong **pplStack_280;
  longlong lStack_278;
  undefined4 uStack_270;
  undefined1 uStack_268;
  longlong *plStack_258;
  undefined8 uStack_250;
  longlong **pplStack_248;
  undefined1 auStack_238 [512];
  ulonglong uStack_38;
  
  if (param_1 != 0) {
    uStack_250 = 0xfffffffffffffffe;
    uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_2b8;
    if (*(char *)(param_1 + 0x8be) != '\0') {
      FUN_18058f390(auStack_238);
      pplStack_248 = &plStack_258;
      plStack_258 = param_9;
      if (param_9 != (longlong *)0x0) {
        (**(code **)(*param_9 + 0x28))();
      }
      uStack_268 = 1;
      pplStack_280 = &plStack_258;
      uStack_288 = param_8;
      uStack_290 = param_7;
      uStack_298 = param_6;
      lStack_278 = param_1;
      uStack_270 = param_2;
      FUN_18058e430(auStack_238,param_3,param_4,param_5);
      FUN_18058f420(auStack_238);
    }
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_2b8);
  }
  return;
}





