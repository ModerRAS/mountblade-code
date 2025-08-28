#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part173.c - 10 个函数

// 函数: void FUN_180158780(longlong *param_1,int param_2)
void FUN_180158780(longlong *param_1,int param_2)

{
  code *pcVar1;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &UNK_1809fdc18;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&UNK_180a078fc);
    (*pcVar1)(param_1,&puStack_40,0);
  }
  else if (param_2 == 1) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &UNK_1809fdc18;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&UNK_180a078fc);
    (*pcVar1)(param_1,&puStack_40,0x3f800000);
  }
  else if (param_2 == 2) {
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &UNK_1809fdc18;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&UNK_180a078fc);
    (*pcVar1)(param_1,&puStack_40,0x40000000);
  }
  else {
    if (param_2 != 3) goto LAB_180158962;
    pcVar1 = *(code **)(*param_1 + 0x18);
    puStack_40 = &UNK_1809fdc18;
    puStack_38 = auStack_28;
    auStack_28[0] = 0;
    uStack_30 = 6;
    strcpy_s(auStack_28,0x10,&UNK_180a078fc);
    (*pcVar1)(param_1,&puStack_40,0x40400000);
  }
  puStack_40 = &UNK_18098bcb0;
LAB_180158962:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_68);
}



longlong * FUN_180158990(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  iVar3 = _Mtx_lock(param_1 + 0xd0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  piVar4 = *(int **)(lVar1 + ((ulonglong)(longlong)param_3 % (ulonglong)*(uint *)(param_1 + 0x40)) *
                             8);
  do {
    if (piVar4 == (int *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      piVar4 = *(int **)(lVar1 + lVar5 * 8);
LAB_180158a0c:
      if (piVar4 == *(int **)(lVar1 + lVar5 * 8)) {
        *param_2 = 0;
      }
      else {
        plVar2 = *(longlong **)(piVar4 + 2);
        *param_2 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
      iVar3 = _Mtx_unlock(param_1 + 0xd0);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      return param_2;
    }
    if (param_3 == *piVar4) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      goto LAB_180158a0c;
    }
    piVar4 = *(int **)(piVar4 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180158a70(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined *puStack_60;
  undefined4 *puStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  iVar3 = _Mtx_lock(param_1 + 0xd0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  for (piVar7 = *(int **)(lVar1 + ((ulonglong)(longlong)param_2 %
                                  (ulonglong)*(uint *)(param_1 + 0x40)) * 8); piVar7 != (int *)0x0;
      piVar7 = *(int **)(piVar7 + 4)) {
    if (param_2 == *piVar7) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      goto LAB_180158aea;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  piVar7 = *(int **)(lVar1 + lVar5 * 8);
LAB_180158aea:
  if (piVar7 != *(int **)(lVar1 + lVar5 * 8)) {
    plVar2 = *(longlong **)(piVar7 + 2);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    (**(code **)(*plVar2 + 0x170))(plVar2);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    uVar8 = 1;
    goto LAB_180158cb6;
  }
  if (*(int *)(_DAT_180c8a9c8 + 0x9a0) != 0) {
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    puStack_58 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x1b,0x13);
    *(undefined1 *)puStack_58 = 0;
    uVar4 = FUN_18064e990(puStack_58);
    *puStack_58 = 0x65657266;
    puStack_58[1] = 0x6576655f;
    puStack_58[2] = 0x6320746e;
    puStack_58[3] = 0x646c756f;
    *(undefined8 *)(puStack_58 + 4) = 0x6e696620746f6e20;
    *(undefined2 *)(puStack_58 + 6) = 0x2064;
    *(undefined1 *)((longlong)puStack_58 + 0x1a) = 0;
    uStack_50 = 0x1a;
    uStack_48._0_4_ = uVar4;
    FUN_180628380(&puStack_60,param_2);
    iVar3 = uStack_50 + 1;
    if (iVar3 != 0) {
      uVar4 = uStack_50 + 2;
      if (puStack_58 == (undefined4 *)0x0) {
        if ((int)uVar4 < 0x10) {
          uVar4 = 0x10;
        }
        puStack_58 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,(longlong)(int)uVar4,0x13);
        *(undefined1 *)puStack_58 = 0;
      }
      else {
        if (uVar4 <= (uint)uStack_48) goto LAB_180158c0c;
        puStack_58 = (undefined4 *)FUN_18062b8b0(_DAT_180c8ed18,puStack_58,uVar4,0x10,0x13);
      }
      uStack_48._0_4_ = FUN_18064e990(puStack_58);
    }
LAB_180158c0c:
    *(undefined2 *)((ulonglong)uStack_50 + (longlong)puStack_58) = 10;
    puVar6 = (undefined4 *)&DAT_18098bc73;
    if (puStack_58 != (undefined4 *)0x0) {
      puVar6 = puStack_58;
    }
    uStack_50 = iVar3;
    FUN_1800623b0(_DAT_180c86928,0,0x1000000000000,3,puVar6);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (undefined4 *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (undefined4 *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
  }
  uVar8 = 0;
LAB_180158cb6:
  iVar3 = _Mtx_unlock(param_1 + 0xd0);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180158ce0(undefined8 param_1,longlong param_2)
void FUN_180158ce0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar4 = _DAT_180c86878;
  lVar1 = _DAT_180c86878 + 0xd0;
  iVar6 = _Mtx_lock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar2 = *(longlong **)(lVar4 + 0x38);
  lVar8 = *plVar2;
  plVar7 = plVar2;
  if (lVar8 == 0) {
    plVar7 = plVar2 + 1;
    lVar8 = *plVar7;
    while (lVar8 == 0) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
  }
  lVar3 = plVar2[*(longlong *)(lVar4 + 0x40)];
  while (lVar8 != lVar3) {
    cVar5 = (**(code **)(**(longlong **)(lVar8 + 8) + 0xd8))();
    if (cVar5 != '\0') {
      cVar5 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x90))();
      if ((((*(longlong **)(lVar8 + 8))[0xb] == param_2) && (cVar5 == '\0')) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x80))(), cVar5 != '\0')) {
        (**(code **)(**(longlong **)(lVar8 + 8) + 0x70))();
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x10);
    while (lVar8 == 0) {
      plVar7 = plVar7 + 1;
      lVar8 = *plVar7;
    }
  }
  *(undefined1 *)(lVar4 + 0x161) = 0;
  iVar6 = _Mtx_unlock(lVar1);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180158e10(undefined8 param_1,longlong param_2)
void FUN_180158e10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar5 = _DAT_180c86878;
  lVar1 = _DAT_180c86878 + 0xd0;
  iVar7 = _Mtx_lock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  plVar2 = *(longlong **)(lVar5 + 0x38);
  lVar8 = *plVar2;
  plVar9 = plVar2;
  if (lVar8 == 0) {
    plVar9 = plVar2 + 1;
    lVar8 = *plVar9;
    while (lVar8 == 0) {
      plVar9 = plVar9 + 1;
      lVar8 = *plVar9;
    }
  }
  lVar3 = plVar2[*(longlong *)(lVar5 + 0x40)];
  while (lVar8 != lVar3) {
    lVar4 = (*(longlong **)(lVar8 + 8))[0xb];
    cVar6 = (**(code **)(**(longlong **)(lVar8 + 8) + 0xd8))();
    if ((cVar6 != '\0') && (lVar4 == param_2)) {
      (**(code **)(**(longlong **)(lVar8 + 8) + 0x78))();
      (**(code **)(**(longlong **)(lVar8 + 8) + 0xf8))
                (*(longlong **)(lVar8 + 8),*(undefined4 *)(_DAT_180c86920 + 0x1500));
    }
    lVar8 = *(longlong *)(lVar8 + 0x10);
    while (lVar8 == 0) {
      plVar9 = plVar9 + 1;
      lVar8 = *plVar9;
    }
  }
  *(undefined1 *)(lVar5 + 0x161) = 1;
  iVar7 = _Mtx_unlock(lVar1);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180158f40(undefined8 param_1,longlong param_2)
void FUN_180158f40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lStackX_20;
  
  lVar3 = _DAT_180c86878;
  lVar1 = _DAT_180c86878 + 0xd0;
  iVar5 = _Mtx_lock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  plVar8 = *(longlong **)(lVar3 + 0x38);
  lVar15 = *plVar8;
  if (lVar15 == 0) {
    plVar8 = plVar8 + 1;
    lVar15 = *plVar8;
    while (lVar15 == 0) {
      plVar8 = plVar8 + 1;
      lVar15 = *plVar8;
    }
  }
  plVar12 = (longlong *)0x0;
  plVar6 = (longlong *)0x0;
  plVar14 = (longlong *)0x0;
  plVar7 = plVar12;
  plVar9 = plVar6;
  plVar13 = plVar14;
  if (lVar15 != *(longlong *)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x40) * 8)) {
    do {
      plVar2 = *(longlong **)(lVar15 + 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar6 = plVar9;
      plVar14 = plVar13;
      if (plVar2[0xb] == param_2) {
        if (plVar9 < plVar7) {
          plVar6 = plVar9 + 1;
          *plVar9 = (longlong)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
        }
        else {
          lStackX_20 = (longlong)plVar9 - (longlong)plVar13 >> 3;
          plVar7 = plVar13;
          if (lStackX_20 == 0) {
            lStackX_20 = 1;
LAB_18015906f:
            plVar6 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lStackX_20 * 8,3);
            plVar14 = plVar6;
          }
          else {
            lStackX_20 = lStackX_20 * 2;
            plVar6 = plVar12;
            plVar14 = plVar12;
            if (lStackX_20 != 0) goto LAB_18015906f;
          }
          for (; plVar7 != plVar9; plVar7 = plVar7 + 1) {
            *plVar6 = *plVar7;
            *plVar7 = 0;
            plVar6 = plVar6 + 1;
          }
          *plVar6 = (longlong)plVar2;
          (**(code **)(*plVar2 + 0x28))(plVar2);
          plVar6 = plVar6 + 1;
          for (plVar7 = plVar13; plVar7 != plVar9; plVar7 = plVar7 + 1) {
            if ((longlong *)*plVar7 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar7 + 0x38))();
            }
          }
          if (plVar13 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar13);
          }
          plVar7 = plVar14 + lStackX_20;
        }
      }
      lVar15 = *(longlong *)(lVar15 + 0x10);
      while (lVar15 == 0) {
        plVar8 = plVar8 + 1;
        lVar15 = *plVar8;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2);
      plVar9 = plVar6;
      plVar13 = plVar14;
    } while (lVar15 != *(longlong *)(*(longlong *)(lVar3 + 0x38) + *(longlong *)(lVar3 + 0x40) * 8))
    ;
  }
  uVar10 = (longlong)plVar6 - (longlong)plVar14 >> 3;
  plVar8 = plVar14;
  if (uVar10 != 0) {
    do {
      cVar4 = (**(code **)(*(longlong *)*plVar8 + 0xd8))();
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)*plVar8 + 0x68))();
      }
      uVar11 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar11;
      plVar8 = plVar8 + 1;
    } while ((ulonglong)(longlong)(int)uVar11 < uVar10);
  }
  *(undefined2 *)(lVar3 + 0x160) = 0;
  for (plVar8 = plVar14; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x38))();
    }
  }
  if (plVar14 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar14);
  }
  iVar5 = _Mtx_unlock(lVar1);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  return;
}



longlong * FUN_180159210(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  iVar2 = _Mtx_lock(param_1 + 0xd0);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = (int)(*(longlong *)(param_1 + 0x170) - *(longlong *)(param_1 + 0x168) >> 3);
  if (iVar2 < 1) {
    *param_2 = 0;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x168) + -8 + (longlong)iVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    FUN_1800b8630(param_1 + 0x168,(longlong)iVar2 + -1,param_3,param_4,uVar3,uVar4);
    *param_2 = (longlong)plVar1;
  }
  iVar2 = _Mtx_unlock(param_1 + 0xd0);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801592f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801592f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  lVar3 = _DAT_180c86878;
  uVar11 = 0xfffffffffffffffe;
  lVar1 = _DAT_180c86878 + 0xd0;
  iVar4 = _Mtx_lock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (*(char *)(lVar3 + 0x162) != '\0') goto LAB_180159499;
  puVar5 = (undefined8 *)0x0;
  *(undefined4 *)(param_2 + 2) = 0;
  if (param_2[7] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[7] = 0;
  param_2[8] = 0;
  (**(code **)(param_2[3] + 0x10))(param_2 + 3,&DAT_18098bc73);
  *(undefined2 *)(param_2 + 9) = 0;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar9 = *(undefined8 **)(lVar3 + 0x170);
  if (puVar9 < *(undefined8 **)(lVar3 + 0x178)) {
    *(undefined8 **)(lVar3 + 0x170) = puVar9 + 1;
    *puVar9 = param_2;
    goto LAB_180159499;
  }
  puVar6 = *(undefined8 **)(lVar3 + 0x168);
  lVar7 = (longlong)puVar9 - (longlong)puVar6 >> 3;
  if (lVar7 == 0) {
    lVar7 = 1;
LAB_1801593e3:
    puVar5 = (undefined8 *)
             FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,*(undefined1 *)(lVar3 + 0x180),param_4,uVar11);
    puVar9 = *(undefined8 **)(lVar3 + 0x170);
    puVar6 = *(undefined8 **)(lVar3 + 0x168);
    puVar10 = puVar5;
  }
  else {
    lVar7 = lVar7 * 2;
    puVar10 = puVar5;
    if (lVar7 != 0) goto LAB_1801593e3;
  }
  for (; puVar6 != puVar9; puVar6 = puVar6 + 1) {
    *puVar5 = *puVar6;
    *puVar6 = 0;
    puVar5 = puVar5 + 1;
  }
  *puVar5 = param_2;
  plVar2 = *(longlong **)(lVar3 + 0x170);
  plVar8 = *(longlong **)(lVar3 + 0x168);
  if (plVar8 != plVar2) {
    do {
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar8 + 0x38))();
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar2);
    plVar8 = *(longlong **)(lVar3 + 0x168);
  }
  if (plVar8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar8);
  }
  *(undefined8 **)(lVar3 + 0x168) = puVar10;
  *(undefined8 **)(lVar3 + 0x170) = puVar5 + 1;
  *(undefined8 **)(lVar3 + 0x178) = puVar10 + lVar7;
LAB_180159499:
  iVar4 = _Mtx_unlock(lVar1);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}





// 函数: void FUN_1801594d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_1801594d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  
  uVar2 = 0xfffffffffffffffe;
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  FUN_180627c50(&puStack_50);
  uStack_30 = 0xffffffff;
  uStack_2c = *(undefined4 *)(param_2 + 0x20);
  uStack_28 = 1;
  lVar1 = (longlong)*(int *)(param_1 + 0xc0) * 0x30 + param_1;
  FUN_18005d190(lVar1,&puStack_50,param_3,param_4,uVar2);
  *(undefined4 *)(lVar1 + 0x20) = uStack_30;
  *(undefined4 *)(lVar1 + 0x24) = uStack_2c;
  *(undefined1 *)(lVar1 + 0x28) = uStack_28;
  puStack_50 = &UNK_180a3c3e0;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801595d0(undefined8 param_1,longlong param_2)
void FUN_1801595d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  undefined *puStack_40;
  undefined1 *puStack_38;
  undefined4 uStack_30;
  undefined1 auStack_28 [16];
  ulonglong uStack_18;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  uStack_58 = 0;
  puStack_40 = &UNK_1809fdc18;
  puStack_38 = auStack_28;
  auStack_28[0] = 0;
  uStack_30 = 6;
  lStack_48 = param_2;
  strcpy_s(auStack_28,0x10,&UNK_180a3c07c);
  uStack_58 = 2;
  FUN_1806279c0(param_2,&puStack_40);
  uStack_58 = 1;
  puStack_40 = &UNK_18098bcb0;
  iVar1 = *(int *)(param_2 + 0x10) + 7;
  FUN_1806277c0(param_2,iVar1);
  *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
       0x2f73646e756f53;
  *(int *)(param_2 + 0x10) = iVar1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



longlong FUN_1801596c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801595d0();
  iVar2 = *(int *)(param_2 + 0x10) + 9;
  FUN_1806277c0(param_2,iVar2,param_3,param_4,1,uVar3);
  puVar1 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x78742e7344495547;
  *(undefined2 *)(puVar1 + 1) = 0x74;
  *(int *)(param_2 + 0x10) = iVar2;
  return param_2;
}



longlong FUN_180159730(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801595d0();
  iVar2 = *(int *)(param_2 + 0x10) + 0x13;
  FUN_1806277c0(param_2,iVar2,param_3,param_4,1,uVar3);
  puVar1 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x746144646e756f53;
  puVar1[1] = 0x732e6e65672e7361;
  *(undefined4 *)(puVar1 + 2) = 0x666465;
  *(int *)(param_2 + 0x10) = iVar2;
  return param_2;
}



longlong FUN_1801597a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1801595d0();
  iVar2 = *(int *)(param_2 + 0x10) + 0x14;
  FUN_1806277c0(param_2,iVar2,param_3,param_4,1,uVar3);
  puVar1 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x726150646e756f53;
  puVar1[1] = 0x2e6e65672e736d61;
  *(undefined4 *)(puVar1 + 2) = 0x66646573;
  *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
  *(int *)(param_2 + 0x10) = iVar2;
  return param_2;
}



undefined8
FUN_180159820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801595d0();
  FUN_1806281a0(param_2,&UNK_180a07804,param_3,param_4,1,uVar1);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_180159870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1801595d0();
  FUN_1806281a0(param_2,&UNK_180a07804,param_3,param_4,2,uVar1);
  FUN_1806281a0(param_2,*(undefined8 *)
                         (&UNK_18098d6b0 + (longlong)*(int *)(_DAT_180c86920 + 0x15e0) * 8),param_3,
                param_4,1);
  return param_2;
}





// 函数: void FUN_1801598f0(void)
void FUN_1801598f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015a900(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_18015a900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 auStackX_10 [2];
  undefined8 auStackX_18 [2];
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined *puStack_80;
  longlong lStack_78;
  uint uStack_70;
  undefined4 *apuStack_60 [2];
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = _DAT_180c86878;
  uVar6 = 0xfffffffffffffffe;
  auStackX_10[0] = 0;
  auStackX_18[0] = param_3;
  FUN_1801595d0(param_1,&puStack_80);
  uVar5 = 1;
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while ((&UNK_180a07805)[lVar4] != '\0');
  iVar3 = (int)(lVar4 + 1);
  if (iVar3 < 1) {
    pcStack_50 = FUN_18015c0a0;
    puStack_48 = &UNK_18015c090;
    apuStack_60[0] = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
    uStack_98 = (undefined4)uVar1;
    uStack_94 = (undefined4)((ulonglong)uVar1 >> 0x20);
    *apuStack_60[0] = uStack_98;
    apuStack_60[0][1] = uStack_94;
    *(undefined4 **)(apuStack_60[0] + 2) = auStackX_10;
    *(undefined8 **)(apuStack_60[0] + 4) = auStackX_18;
    FUN_18015b810(uStack_98,0,4,1,0xffffffffffffffff,apuStack_60,uVar5,uVar6);
    puStack_80 = &UNK_180a3c3e0;
    if (lStack_78 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1806277c0(&puStack_80,uStack_70 + iVar3);
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)uStack_70 + lStack_78,&UNK_180a07804,(longlong)((int)lVar4 + 2));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18015aa70(longlong *param_1,int param_2,int param_3)
void FUN_18015aa70(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int aiStackX_10 [4];
  longlong lStackX_20;
  undefined *puStack_a0;
  longlong lStack_98;
  uint uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int *piStack_70;
  undefined4 *apuStack_68 [2];
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined4 **ppuStack_40;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar6 = (longlong)param_2;
  lStackX_20 = (longlong)param_3;
  if (lVar6 < lStackX_20) {
    do {
      if (lVar6 == 3) {
        plVar7 = (longlong *)(*param_1 + 0x140);
      }
      else {
        plVar7 = (longlong *)(*param_1 + 0x120);
      }
      aiStackX_10[0] = 0;
      iVar2 = *(int *)param_1[1];
      FUN_1801595d0(0,&puStack_a0);
      lVar3 = *(longlong *)(&DAT_18098d698 + (longlong)iVar2 * 8);
      if (lVar3 != 0) {
        lVar5 = -1;
        do {
          lVar4 = lVar5;
          lVar5 = lVar4 + 1;
        } while (*(char *)(lVar3 + lVar5) != '\0');
        if (0 < (int)lVar5) {
          FUN_1806277c0(&puStack_a0,uStack_90 + (int)lVar5);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)uStack_90 + lStack_98,lVar3,(longlong)((int)lVar4 + 2));
        }
      }
      lVar3 = *(longlong *)(&UNK_18098d6b0 + lVar6 * 8);
      if (lVar3 != 0) {
        lVar5 = -1;
        do {
          lVar4 = lVar5;
          lVar5 = lVar4 + 1;
        } while (*(char *)(lVar3 + lVar5) != '\0');
        if (0 < (int)lVar5) {
          FUN_1806277c0(&puStack_a0,uStack_90 + (int)lVar5);
                    // WARNING: Subroutine does not return
          memcpy((ulonglong)uStack_90 + lStack_98,lVar3,(longlong)((int)lVar4 + 2));
        }
      }
      ppuStack_40 = apuStack_68;
      uStack_80 = &puStack_a0;
      piStack_70 = aiStackX_10;
      pcStack_58 = FUN_18015c190;
      puStack_50 = &UNK_18015c180;
      uStack_78 = plVar7;
      apuStack_68[0] = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc);
      *apuStack_68[0] = (undefined4)uStack_80;
      apuStack_68[0][1] = uStack_80._4_4_;
      apuStack_68[0][2] = (undefined4)uStack_78;
      apuStack_68[0][3] = uStack_78._4_4_;
      *(int **)(apuStack_68[0] + 4) = piStack_70;
      FUN_18015b810(plVar7[1] - *plVar7,0,(plVar7[1] - *plVar7) / 0x28,1,0xffffffffffffffff,
                    apuStack_68);
      piVar1 = (int *)(*(longlong *)param_1[2] + lVar6 * 4);
      *piVar1 = *piVar1 + aiStackX_10[0];
      puStack_a0 = &UNK_180a3c3e0;
      if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_98 = 0;
      uStack_88 = 0;
      puStack_a0 = &UNK_18098bcb0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lStackX_20);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18015acc0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined *puStack_68;
  undefined1 *puStack_60;
  uint uStack_58;
  ulonglong uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  
  uVar5 = (ulonglong)param_2;
  if ((longlong)uVar5 < (longlong)param_3) {
    lVar10 = uVar5 * 0x28;
    lVar11 = (longlong)param_3 - uVar5;
    do {
      lVar9 = 0;
      lVar2 = *param_1;
      puStack_68 = &UNK_180a3c3e0;
      uStack_50 = 0;
      puStack_60 = (undefined1 *)0x0;
      uStack_58 = 0;
      FUN_1806277c0(&puStack_68,*(undefined4 *)(lVar2 + 0x10));
      if (*(int *)(lVar2 + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_60,*(undefined8 *)(lVar2 + 8),*(int *)(lVar2 + 0x10) + 1);
      }
      if (*(longlong *)(lVar2 + 8) != 0) {
        uStack_58 = 0;
        if (puStack_60 != (undefined1 *)0x0) {
          *puStack_60 = 0;
        }
        uStack_50 = uStack_50 & 0xffffffff;
      }
      lVar2 = *(longlong *)param_1[1];
      iVar1 = *(int *)(lVar2 + 0x10 + lVar10);
      if (0 < iVar1) {
        FUN_1806277c0(&puStack_68,uStack_58 + iVar1);
                    // WARNING: Subroutine does not return
        memcpy(puStack_60 + uStack_58,*(undefined8 *)(lVar2 + 8 + lVar10),
               (longlong)(*(int *)(lVar2 + 0x10 + lVar10) + 1));
      }
      uStack_80 = 0;
      lStack_78 = 0;
      puVar8 = &DAT_18098bc73;
      if (puStack_60 != (undefined1 *)0x0) {
        puVar8 = puStack_60;
      }
      uVar5 = FUN_18062dee0(&uStack_80,puVar8,&UNK_180a01ff0);
      lVar2 = lStack_78;
      if (lStack_78 != 0) {
        lStack_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        uStack_2e = 3;
        uVar6 = _ftelli64(lStack_78);
        _fseeki64(lVar2,0,2);
        uVar7 = _ftelli64(lVar2);
        _fseeki64(lVar2,uVar6,0);
        FUN_180639bf0(&lStack_48,uVar7);
        fread(uStack_40,1,uVar7,lVar2);
        fclose(lVar2);
        lStack_78 = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
        UNLOCK();
        uVar5 = 0xffffffff;
        uVar4 = 0xffffffff;
        if (0 < (longlong)(int)uStack_38) {
          do {
            uVar4 = *(uint *)(&UNK_180991df0 +
                             (uVar5 & 0xff ^ (ulonglong)*(byte *)(lVar9 + lStack_48)) * 4) ^
                    (uint)(uVar5 >> 8);
            uVar5 = (ulonglong)uVar4;
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)uStack_38);
        }
        puVar3 = (uint *)param_1[2];
        LOCK();
        uVar5 = (ulonglong)*puVar3;
        *puVar3 = *puVar3 + ~uVar4;
        UNLOCK();
        if (((char)uStack_30 == '\0') && (lStack_48 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      if (lStack_78 != 0) {
        fclose(lStack_78);
        lStack_78 = 0;
        LOCK();
        uVar5 = (ulonglong)_DAT_180c8ed60;
        UNLOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 - 1;
      }
      puStack_68 = &UNK_180a3c3e0;
      if (puStack_60 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar10 = lVar10 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



