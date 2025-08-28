#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part244.c - 10 个函数

// 函数: void FUN_18020cae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18020cae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar10 = 0xfffffffffffffffe;
  uVar6 = 0;
  for (lVar4 = *(longlong *)(param_1 + 8); lVar4 != param_1; lVar4 = func_0x00018066bd70(lVar4)) {
    lVar5 = *(longlong *)(lVar4 + 0x28);
    uVar8 = uVar6;
    uVar9 = uVar6;
    if (*(longlong *)(lVar4 + 0x30) - lVar5 >> 3 != 0) {
      do {
        puVar2 = *(undefined8 **)(uVar9 + lVar5);
        if (puVar2 != (undefined8 *)0x0) {
          plVar1 = puVar2 + 5;
          iVar3 = (int)(puVar2[6] - *plVar1 >> 3);
          if (0 < iVar3) {
            do {
              FUN_18020d310(*(undefined8 *)(*plVar1 + uVar6 * 8));
              uVar6 = uVar6 + 1;
            } while ((longlong)uVar6 < (longlong)iVar3);
          }
          FUN_1800b8500(plVar1);
          FUN_180057830(plVar1);
          *puVar2 = &UNK_180a3c3e0;
          if (puVar2[1] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          puVar2[1] = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          *puVar2 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(puVar2);
        }
        *(undefined8 *)(uVar9 + *(longlong *)(lVar4 + 0x28)) = 0;
        uVar7 = (int)uVar8 + 1;
        lVar5 = *(longlong *)(lVar4 + 0x28);
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 8;
      } while ((ulonglong)(longlong)(int)uVar7 <
               (ulonglong)(*(longlong *)(lVar4 + 0x30) - lVar5 >> 3));
    }
    *(longlong *)(lVar4 + 0x30) = lVar5;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    *(longlong *)param_1 = param_1;
    *(longlong *)(param_1 + 8) = param_1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  FUN_180179f00(param_1,*puVar2,param_3,param_4,uVar10);
  if (puVar2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020ccb0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)
void FUN_18020ccb0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined *puVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  int iVar20;
  undefined8 uStackX_8;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  undefined4 uStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 *puStack_48;
  
  puVar3 = _DAT_180c868e8;
  uStack_58 = 0xfffffffffffffffe;
  puStack_68 = _DAT_180c868e8;
  uVar18 = *_DAT_180c86870;
  uStackX_8 = param_1;
  FUN_1806279c0(&plStack_b8);
  iStack_8c = FUN_180141820(uVar18,&plStack_b8);
  plStack_b8 = (longlong *)&UNK_180a3c3e0;
  if (plStack_b0 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  plStack_b0 = (longlong *)0x0;
  uStack_a0 = 0;
  plStack_b8 = (longlong *)&UNK_18098bcb0;
  puVar6 = (undefined8 *)puVar3[2];
  puVar14 = puVar3;
  if ((undefined8 *)puVar3[2] != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar6 + 4) < iStack_8c) {
        puVar7 = (undefined8 *)*puVar6;
      }
      else {
        puVar7 = (undefined8 *)puVar6[1];
        puVar14 = puVar6;
      }
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
    if ((puVar14 != puVar3) && (*(int *)(puVar14 + 4) <= iStack_8c)) goto LAB_18020cd75;
  }
  puVar14 = puVar3;
LAB_18020cd75:
  iStack_90 = 0;
  iVar4 = (int)((longlong)(puVar14[6] - puVar14[5]) >> 3);
  if (0 < iVar4) {
    lVar16 = 0;
    do {
      iVar20 = iStack_90;
      puVar13 = &DAT_18098bc73;
      if (*(undefined **)(param_3 + 8) != (undefined *)0x0) {
        puVar13 = *(undefined **)(param_3 + 8);
      }
      puVar2 = *(undefined **)(*(longlong *)(puVar14[5] + lVar16 * 8) + 8);
      puVar11 = &DAT_18098bc73;
      if (puVar2 != (undefined *)0x0) {
        puVar11 = puVar2;
      }
      lVar8 = strstr(puVar11,puVar13);
      if (lVar8 != 0) {
        lVar16 = *(longlong *)(puVar14[5] + (longlong)iVar20 * 8);
        plVar19 = (longlong *)(lVar16 + 0x28);
        iStack_94 = 0;
        lVar8 = *plVar19;
        plStack_70 = plVar19;
        if (*(longlong *)(lVar16 + 0x30) - lVar8 >> 3 == 0) goto LAB_18020d12d;
        lStack_80 = 0;
        goto LAB_18020ce30;
      }
      iStack_90 = iVar20 + 1;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar4);
  }
  return;
LAB_18020ce30:
  lVar16 = lStack_80;
  plVar15 = *(longlong **)(lStack_80 + lVar8);
  plStack_78 = plVar15;
  plStack_50 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x28))(plVar15);
  }
  plStack_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  plStack_a8 = (longlong *)0x0;
  uStack_a0 = 3;
  FUN_1802e8c60(plVar15);
  if (plStack_b0 < plStack_a8) {
    *plStack_b0 = (longlong)plVar15;
    plVar9 = plStack_b0;
  }
  else {
    lVar8 = (longlong)plStack_b0 - (longlong)plStack_b8 >> 3;
    if (lVar8 == 0) {
      lVar8 = 1;
LAB_18020ceb6:
      plVar9 = (longlong *)FUN_18062b420(_DAT_180c8ed18);
    }
    else {
      lVar8 = lVar8 * 2;
      if (lVar8 != 0) goto LAB_18020ceb6;
      plVar9 = (longlong *)0x0;
    }
    if (plStack_b8 != plStack_b0) {
                    // WARNING: Subroutine does not return
      memmove(plVar9,plStack_b8,(longlong)plStack_b0 - (longlong)plStack_b8);
    }
    *plVar9 = (longlong)plVar15;
    if (plStack_b8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    plStack_a8 = plVar9 + lVar8;
    plStack_b8 = plVar9;
  }
  plStack_b0 = plVar9 + 1;
  iStack_98 = 0;
  if ((longlong)plStack_b0 - (longlong)plStack_b8 >> 3 != 0) {
    lStack_88 = 0;
    do {
      lVar16 = *param_4;
      if (param_4[1] - lVar16 >> 5 != 0) {
        lVar8 = *(longlong *)(lStack_88 + (longlong)plStack_b8) + 400;
        lVar10 = FUN_18062b420(_DAT_180c8ed18,0x78,
                               *(undefined1 *)
                                (*(longlong *)(lStack_88 + (longlong)plStack_b8) + 0x1b8));
        puStack_48 = (undefined8 *)(lVar10 + 0x20);
        *puStack_48 = &UNK_18098bcb0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
        *(undefined4 *)(lVar10 + 0x30) = 0;
        *puStack_48 = &UNK_1809fcc58;
        *(undefined1 **)(lVar10 + 0x28) = (undefined1 *)(lVar10 + 0x38);
        *(undefined4 *)(lVar10 + 0x30) = 0;
        *(undefined1 *)(lVar10 + 0x38) = 0;
        *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(lVar16 + 0x10);
        puVar13 = &DAT_18098bc73;
        if (*(undefined **)(lVar16 + 8) != (undefined *)0x0) {
          puVar13 = *(undefined **)(lVar16 + 8);
        }
        puStack_60 = puStack_48;
        strcpy_s(*(undefined8 *)(lVar10 + 0x28),0x40,puVar13);
        puStack_60 = (undefined8 *)lVar10;
        lVar16 = FUN_1800590b0(lVar8,&uStackX_8,puStack_48);
        if ((char)uStackX_8 == '\0') {
          *puStack_48 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar10);
        }
        if (lVar16 == lVar8) goto LAB_18020d04f;
        if (*(int *)(lVar16 + 0x30) == 0) goto LAB_18020d047;
        if (*(int *)(lVar10 + 0x30) == 0) goto LAB_18020d04f;
        pbVar12 = *(byte **)(lVar16 + 0x28);
        lVar17 = *(longlong *)(lVar10 + 0x28) - (longlong)pbVar12;
        goto LAB_18020d030;
      }
      iStack_98 = iStack_98 + 1;
      lStack_88 = lStack_88 + 8;
      plVar15 = plStack_78;
      lVar16 = lStack_80;
      plVar19 = plStack_70;
    } while ((ulonglong)(longlong)iStack_98 <
             (ulonglong)((longlong)plStack_b0 - (longlong)plStack_b8 >> 3));
  }
  if (plStack_b8 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x38))(plVar15);
  }
  iStack_94 = iStack_94 + 1;
  lStack_80 = lVar16 + 8;
  lVar8 = *plVar19;
  iVar20 = iStack_90;
  if ((ulonglong)(plVar19[1] - lVar8 >> 3) <= (ulonglong)(longlong)iStack_94) {
LAB_18020d12d:
    FUN_18020b790(puStack_68,iStack_8c,iVar20);
    return;
  }
  goto LAB_18020ce30;
  while (pbVar12 = pbVar12 + 1, uVar5 != 0) {
LAB_18020d030:
    bVar1 = *pbVar12;
    uVar5 = (uint)pbVar12[lVar17];
    if (bVar1 != uVar5) break;
  }
  if ((int)(bVar1 - uVar5) < 1) {
LAB_18020d047:
    uVar18 = 1;
  }
  else {
LAB_18020d04f:
    uVar18 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar10,lVar16,lVar8,uVar18);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d160(longlong param_1)
void FUN_18020d160(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uVar9 = 0;
  plStack_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
  uStack_28 = 0;
  uStack_20 = 3;
  FUN_1802f5440(&plStack_38,0,*(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x208));
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f1890(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x1c0)),&plStack_38);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  lVar6 = _DAT_180c8f008;
  uVar8 = uVar9;
  plVar2 = plStack_38;
  plVar3 = plStack_30;
  if ((longlong)plStack_30 - (longlong)plStack_38 >> 3 != 0) {
    do {
      lVar4 = _DAT_180c8a9c0;
      if (**(char **)(*(longlong *)(uVar8 + (longlong)plStack_38) + 0x10) != '\0') {
        iVar1 = *(int *)(*(longlong *)(uVar8 + (longlong)plStack_38) + 0x50);
        if ((iVar1 != 0) && (lVar6 != 0)) {
          (**(code **)(lVar6 + 0x30))(iVar1);
        }
        (**(code **)(lVar4 + 0x200))(iVar1);
        lVar6 = _DAT_180c8f008;
        if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
          lVar6 = _DAT_180c8f008;
        }
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
      plVar2 = plStack_38;
      plVar3 = plStack_30;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)((longlong)plStack_30 - (longlong)plStack_38 >> 3));
  }
  for (; plVar5 = plStack_30, plVar2 != plStack_30; plVar2 = plVar2 + 1) {
    plStack_30 = plVar3;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
    plVar3 = plStack_30;
    plStack_30 = plVar5;
  }
  if (plStack_38 == (longlong *)0x0) {
    return;
  }
  plStack_30 = plVar3;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d310(longlong param_1)
void FUN_18020d310(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uVar9 = 0;
  plStack_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
  uStack_28 = 0;
  uStack_20 = 3;
  FUN_1802f5440(&plStack_38,0,*(undefined8 *)(param_1 + 0x200),*(undefined8 *)(param_1 + 0x208));
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      FUN_1802f1890(*(undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x1c0)),&plStack_38);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar10 = uVar10 + 8;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0x1c8) - *(longlong *)(param_1 + 0x1c0) >> 3));
  }
  lVar6 = _DAT_180c8f008;
  uVar8 = uVar9;
  plVar2 = plStack_38;
  plVar3 = plStack_30;
  if ((longlong)plStack_30 - (longlong)plStack_38 >> 3 != 0) {
    do {
      lVar4 = _DAT_180c8a9c0;
      if (**(char **)(*(longlong *)(uVar8 + (longlong)plStack_38) + 0x10) != '\0') {
        iVar1 = *(int *)(*(longlong *)(uVar8 + (longlong)plStack_38) + 0x50);
        if ((iVar1 != 0) && (lVar6 != 0)) {
          (**(code **)(lVar6 + 0x30))(iVar1);
        }
        (**(code **)(lVar4 + 0x178))(iVar1);
        lVar6 = _DAT_180c8f008;
        if ((iVar1 != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))(iVar1);
          lVar6 = _DAT_180c8f008;
        }
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
      plVar2 = plStack_38;
      plVar3 = plStack_30;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)((longlong)plStack_30 - (longlong)plStack_38 >> 3));
  }
  for (; plVar5 = plStack_30, plVar2 != plStack_30; plVar2 = plVar2 + 1) {
    plStack_30 = plVar3;
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x38))();
    }
    plVar3 = plStack_30;
    plStack_30 = plVar5;
  }
  if (plStack_38 == (longlong *)0x0) {
    return;
  }
  plStack_30 = plVar3;
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18020d4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puStack_58 = (undefined8 *)0x0;
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 3;
  FUN_18020c8f0(_DAT_180c868e8,&puStack_58,param_3,param_4,0,0xfffffffffffffffe);
  iVar6 = 0;
  uVar2 = lStack_50 - (longlong)puStack_58 >> 3;
  puVar7 = puStack_58;
  if (uVar2 != 0) {
    do {
      uVar1 = *puVar7;
      puStack_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 3;
      uVar8 = 1;
      FUN_1802e8c60(uVar1,&puStack_78);
      if (puStack_70 < puStack_68) {
        *puStack_70 = uVar1;
        puVar4 = puStack_70;
      }
      else {
        lVar3 = (longlong)puStack_70 - (longlong)puStack_78 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
LAB_18020d5b5:
          puVar4 = (undefined8 *)
                   FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(undefined1)uStack_60,param_4,uVar8);
        }
        else {
          lVar3 = lVar3 * 2;
          if (lVar3 != 0) goto LAB_18020d5b5;
          puVar4 = (undefined8 *)0x0;
        }
        if (puStack_78 != puStack_70) {
                    // WARNING: Subroutine does not return
          memmove(puVar4,puStack_78,(longlong)puStack_70 - (longlong)puStack_78);
        }
        *puVar4 = uVar1;
        if (puStack_78 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puStack_68 = puVar4 + lVar3;
        puStack_78 = puVar4;
      }
      puStack_70 = puVar4 + 1;
      iVar5 = 0;
      if ((longlong)puStack_70 - (longlong)puStack_78 >> 3 != 0) {
        lVar3 = 0;
        do {
          FUN_1802f1930(*(undefined8 *)(lVar3 + (longlong)puStack_78));
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 8;
        } while ((ulonglong)(longlong)iVar5 <
                 (ulonglong)((longlong)puStack_70 - (longlong)puStack_78 >> 3));
      }
      if (puStack_78 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
    } while ((ulonglong)(longlong)iVar6 < uVar2);
  }
  if (puStack_58 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



undefined8 * FUN_18020d6c0(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStackX_8 [32];
  
  puVar1 = (undefined8 *)param_1[2];
  puVar3 = param_1;
  if (puVar1 != (undefined8 *)0x0) {
    param_3 = param_1;
    do {
      if (*(int *)(puVar1 + 4) < *param_2) {
        puVar1 = (undefined8 *)*puVar1;
      }
      else {
        param_3 = puVar1;
        puVar1 = (undefined8 *)puVar1[1];
      }
      puVar3 = param_3;
    } while (puVar1 != (undefined8 *)0x0);
  }
  if ((puVar3 != param_1) && (*(int *)(puVar3 + 4) <= *param_2)) {
    return puVar3 + 5;
  }
  plVar2 = (longlong *)FUN_18020d730(param_1,auStackX_8,param_3,puVar3,param_2);
  return (undefined8 *)(*plVar2 + 0x28);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18020d730(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             int *param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar3 = (longlong *)*param_1;
  if ((param_4 == plVar3) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar3, *(int *)(plVar3 + 4) < *param_5)) {
LAB_18020d79f:
      uVar6 = 0;
      goto LAB_18020d7a2;
    }
  }
  else {
    plVar3 = (longlong *)func_0x00018066bd70(param_4);
    if (((int)param_4[4] < *param_5) && (*param_5 < (int)plVar3[4])) {
      if (*param_4 == 0) goto LAB_18020d79f;
      uVar6 = 1;
      param_4 = plVar3;
LAB_18020d7a2:
      if (param_4 != (longlong *)0x0) {
        FUN_18020da10(param_1,param_2,param_4,uVar6,param_5);
        return param_2;
      }
    }
  }
  bVar1 = true;
  plVar3 = param_1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[2];
    do {
      plVar3 = plVar4;
      bVar1 = *param_5 < (int)plVar3[4];
      if (*param_5 < (int)plVar3[4]) {
        plVar4 = (longlong *)plVar3[1];
      }
      else {
        plVar4 = (longlong *)*plVar3;
      }
    } while (plVar4 != (longlong *)0x0);
  }
  plVar4 = plVar3;
  if (bVar1) {
    if (plVar3 == (longlong *)param_1[1]) {
      iVar2 = *param_5;
      goto LAB_18020d80a;
    }
    plVar4 = (longlong *)func_0x00018066b9a0(plVar3);
  }
  iVar2 = *param_5;
  if (iVar2 <= (int)plVar4[4]) {
    *param_2 = plVar4;
    return param_2;
  }
LAB_18020d80a:
  if ((plVar3 == param_1) || (iVar2 < (int)plVar3[4])) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  lVar5 = FUN_18062b420(_DAT_180c8ed18,0x48,(char)param_1[5]);
  *(int *)(lVar5 + 0x20) = *param_5;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined4 *)(lVar5 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar5,plVar3,param_1,uVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020d8a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)
void FUN_18020d8a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
  lVar8 = (longlong)puVar9 - (longlong)puVar4 >> 5;
  puVar3 = (undefined8 *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_18020d911;
  }
  puVar3 = (undefined8 *)
           FUN_18062b420(_DAT_180c8ed18,lVar8 << 5,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar9 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)*param_1;
LAB_18020d911:
  puVar6 = puVar3;
  if (puVar4 != puVar9) {
    lVar5 = (longlong)puVar3 - (longlong)puVar4;
    puVar4 = puVar4 + 2;
    do {
      *puVar6 = puVar4[-2];
      *(undefined4 *)(lVar5 + -8 + (longlong)puVar4) = *(undefined4 *)(puVar4 + -1);
      *(undefined8 *)(lVar5 + (longlong)puVar4) = *puVar4;
      *puVar4 = 0;
      *(undefined8 *)(lVar5 + 8 + (longlong)puVar4) = puVar4[1];
      puVar6 = puVar6 + 4;
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 4;
    } while (puVar1 != puVar9);
  }
  *puVar6 = *param_2;
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)param_2[2];
  puVar6[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  puVar6[3] = param_2[3];
  lVar5 = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != lVar5) {
    do {
      if (*(longlong **)(lVar7 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x38))();
      }
      lVar7 = lVar7 + 0x20;
    } while (lVar7 != lVar5);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    *param_1 = (longlong)puVar3;
    param_1[1] = (longlong)(puVar6 + 4);
    param_1[2] = (longlong)(puVar3 + lVar8 * 4);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020da10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
void FUN_18020da10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if ((((char)param_4 == '\0') && (param_3 != param_1)) && (*(int *)(param_3 + 0x20) <= *param_5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(param_1 + 0x28),param_4,
                        0xfffffffffffffffe);
  *(int *)(lVar1 + 0x20) = *param_5;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 3;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1,param_3,param_1,uVar2);
}





// 函数: void FUN_18020dae0(uint param_1,int param_2,longlong *param_3)
void FUN_18020dae0(uint param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  if ((int)param_1 < param_2) {
    uVar5 = (ulonglong)param_1;
    do {
      uVar3 = (ulonglong)((uint)uVar5 & 0xfff);
      lVar1 = (uVar5 >> 0xc) * 8;
      plVar2 = *(longlong **)(*(longlong *)(*param_3 + 8 + lVar1) + uVar3 * 0x30);
      uStack_58 = 0xffffffffffffffff;
      uStack_50 = 0;
      uStack_48 = 0;
      plStack_30 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      uStack_28 = 0;
      uStack_20 = 1;
      *(byte *)(plVar2 + 0x5d) = *(byte *)(plVar2 + 0x5d) | 0x80;
      uStack_40 = 0;
      FUN_1803bb5f0(&uStack_58,
                    *(undefined8 *)(*(longlong *)(*param_3 + 8 + lVar1) + 8 + uVar3 * 0x30));
      (**(code **)(*plVar2 + 0x38))(plVar2);
      uVar4 = (uint)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < param_2);
  }
  return;
}





// 函数: void FUN_18020dc20(int param_1,int param_2,longlong *param_3)
void FUN_18020dc20(int param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_30;
  longlong *plStack_20;
  undefined8 uStack_18;
  undefined2 uStack_10;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_3;
  lVar2 = (longlong)param_1;
  if (lVar2 < param_2) {
    lVar3 = lVar2 << 5;
    lVar2 = param_2 - lVar2;
    do {
      plStack_20 = *(longlong **)(lVar3 + 0x10 + *(longlong *)*puVar1);
      uStack_48 = 0xffffffffffffffff;
      uStack_40 = 0;
      uStack_38 = 0;
      if (plStack_20 != (longlong *)0x0) {
        (**(code **)(*plStack_20 + 0x28))();
      }
      uStack_18 = 0;
      uStack_10 = 1;
      *(byte *)(plStack_20 + 0x5d) = *(byte *)(plStack_20 + 0x5d) | 0x80;
      uStack_30 = 0;
      FUN_1803ba550(&uStack_48,*(undefined8 *)(*(longlong *)*puVar1 + lVar3),puVar1[1],
                    *(undefined8 *)(*(longlong *)*puVar1 + 0x18 + lVar3),0,puVar1[2],uVar4);
      if (plStack_20 != (longlong *)0x0) {
        (**(code **)(*plStack_20 + 0x38))();
      }
      lVar3 = lVar3 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18020dd10(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 == 3) {
    return 0x180c038d0;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,DAT_180bf65bc,0xfffffffffffffffe);
      puVar1 = (undefined8 *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
      *param_1 = (longlong)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18020ddf0(undefined8 param_1,longlong param_2)
void FUN_18020ddf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined *puVar2;
  undefined1 auStack_838 [32];
  undefined1 *puStack_818;
  undefined4 uStack_810;
  undefined4 uStack_808;
  undefined1 *puStack_7f8;
  undefined **ppuStack_7f0;
  undefined8 uStack_7e8;
  int iStack_7dc;
  undefined *puStack_7d8;
  undefined1 auStack_7d0 [8];
  undefined1 auStack_7c8 [152];
  undefined1 auStack_730 [104];
  undefined1 auStack_6c8 [16];
  undefined *puStack_6b8;
  undefined1 *puStack_6b0;
  undefined4 uStack_6a8;
  undefined1 auStack_6a0 [264];
  undefined *puStack_598;
  undefined1 *puStack_590;
  undefined4 uStack_588;
  undefined1 auStack_580 [264];
  undefined *apuStack_478 [68];
  undefined1 auStack_258 [560];
  ulonglong uStack_28;
  
  uStack_7e8 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_838;
  uStack_808 = 0;
  puStack_6b8 = &UNK_1809feda8;
  puStack_6b0 = auStack_6a0;
  uStack_6a8 = 0;
  auStack_6a0[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_6a8 = (undefined4)lVar1;
    strcpy_s(auStack_6a0,0x100,param_2);
  }
  lVar1 = FUN_180624440(apuStack_478,&puStack_6b8);
  puStack_598 = &UNK_1809feda8;
  puStack_590 = auStack_580;
  auStack_580[0] = 0;
  uStack_588 = *(undefined4 *)(lVar1 + 0x10);
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(lVar1 + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(lVar1 + 8);
  }
  strcpy_s(auStack_580,0x100,puVar2);
  apuStack_478[0] = &UNK_18098bcb0;
  puStack_6b8 = &UNK_18098bcb0;
  uStack_810 = 0x118;
  puStack_818 = auStack_258;
  MultiByteToWideChar(0xfde9,0,puStack_590,0xffffffff);
  puStack_7d8 = &UNK_180a01620;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(auStack_730);
  uStack_808 = 1;
  __0__basic_ostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__N_Z
            (&puStack_7d8,auStack_7d0,0,0);
  *(undefined **)(auStack_7d0 + (longlong)*(int *)(puStack_7d8 + 4) + -8) = &UNK_180a01630;
  *(int *)((longlong)&iStack_7dc + (longlong)*(int *)(puStack_7d8 + 4)) =
       *(int *)(puStack_7d8 + 4) + -0xa8;
  FUN_18009ec20(auStack_7d0);
  lVar1 = FUN_18009ec80(auStack_7d0,auStack_258,0x12);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_7d0 + (longlong)*(int *)(puStack_7d8 + 4) + -8,2);
  }
  ppuStack_7f0 = &puStack_7d8;
  puStack_7f8 = (undefined1 *)0x0;
  puStack_818 = (undefined1 *)((ulonglong)puStack_818 & 0xffffffff00000000);
  FUN_1800a1310(auStack_6c8,&puStack_7f8,param_1,0);
  lVar1 = FUN_1800a19c0(auStack_7d0);
  if (lVar1 == 0) {
    _setstate___basic_ios_DU__char_traits_D_std___std__QEAAXH_N_Z
              (auStack_7d0 + (longlong)*(int *)(puStack_7d8 + 4) + -8,2);
  }
  puStack_7f8 = auStack_730;
  *(undefined **)(auStack_7d0 + (longlong)*(int *)(puStack_7d8 + 4) + -8) = &UNK_180a01630;
  *(int *)((longlong)&iStack_7dc + (longlong)*(int *)(puStack_7d8 + 4)) =
       *(int *)(puStack_7d8 + 4) + -0xa8;
  FUN_18009fb60(auStack_7d0);
  __1__basic_ostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_7c8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_730);
  puStack_598 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_838);
}





