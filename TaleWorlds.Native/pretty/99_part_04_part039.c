#include "TaleWorlds.Native.Split.h"

// 99_part_04_part039.c - 7 个函数

// 函数: void FUN_1802ab850(longlong *param_1,int param_2,int param_3)
void FUN_1802ab850(longlong *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar15 = (ulonglong)param_2;
  uVar16 = uVar15;
  while( true ) {
    uVar5 = (uint)uVar16;
    uVar10 = uVar16 & 0xffffffff;
    puVar2 = *(undefined **)
              (*(longlong *)(*param_1 + (longlong)((int)(uVar5 + param_3) >> 1) * 8) + 0x18);
    puVar8 = &DAT_18098bc73;
    if (puVar2 != (undefined *)0x0) {
      puVar8 = puVar2;
    }
    lVar13 = (longlong)param_3;
    iVar14 = param_3;
    uVar9 = uVar5;
    if ((longlong)uVar15 <= (longlong)param_3) break;
LAB_1802ab97d:
    if ((int)uVar5 < iVar14) {
      FUN_1802ab850(param_1,uVar16 & 0xffffffff,iVar14);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar16 = (ulonglong)uVar9;
  }
LAB_1802ab8c0:
  lVar3 = *param_1;
  plVar12 = (longlong *)(lVar3 + uVar15 * 8);
  do {
    uVar9 = (uint)uVar10;
    pbVar6 = &DAT_18098bc73;
    if (*(byte **)(*plVar12 + 0x18) != (byte *)0x0) {
      pbVar6 = *(byte **)(*plVar12 + 0x18);
    }
    lVar11 = (longlong)puVar8 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      uVar7 = (uint)pbVar6[lVar11];
      if (bVar1 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar1 - uVar7)) break;
    uVar10 = (ulonglong)(uVar9 + 1);
    uVar15 = uVar15 + 1;
    plVar12 = plVar12 + 1;
  } while( true );
  plVar12 = (longlong *)(lVar3 + lVar13 * 8);
  do {
    pbVar6 = &DAT_18098bc73;
    if (*(byte **)(*plVar12 + 0x18) != (byte *)0x0) {
      pbVar6 = *(byte **)(*plVar12 + 0x18);
    }
    lVar11 = (longlong)puVar8 - (longlong)pbVar6;
    do {
      bVar1 = *pbVar6;
      uVar7 = (uint)pbVar6[lVar11];
      if (bVar1 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar1 - uVar7) < 1) break;
    iVar14 = iVar14 + -1;
    lVar13 = lVar13 + -1;
    plVar12 = plVar12 + -1;
  } while( true );
  if (lVar13 < (longlong)uVar15) goto LAB_1802ab97d;
  uVar9 = uVar9 + 1;
  uVar10 = (ulonglong)uVar9;
  uVar4 = *(undefined8 *)(lVar3 + uVar15 * 8);
  iVar14 = iVar14 + -1;
  *(undefined8 *)(lVar3 + uVar15 * 8) = *(undefined8 *)(lVar3 + lVar13 * 8);
  uVar15 = uVar15 + 1;
  *(undefined8 *)(lVar3 + lVar13 * 8) = uVar4;
  lVar13 = lVar13 + -1;
  if (lVar13 < (longlong)uVar15) goto LAB_1802ab97d;
  goto LAB_1802ab8c0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ab9c0(ulonglong *param_1)
void FUN_1802ab9c0(ulonglong *param_1)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  iVar3 = _Mtx_lock(param_1 + 8);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  if ((char)param_1[0x12] != '\0') {
    lVar4 = (longlong)(param_1[1] - *param_1) >> 3;
    if (lVar4 != 0) {
      FUN_1802ab850(param_1,0,(int)lVar4 + -1);
      param_1[5] = param_1[4];
      FUN_1802ab620(param_1 + 4,100);
      uVar7 = 0;
      iVar3 = 0;
      plVar8 = (longlong *)*param_1;
      uVar5 = uVar7;
      uVar10 = uVar7;
      uVar11 = uVar7;
      if (plVar8 < (longlong *)param_1[1]) {
        do {
          pcVar2 = *(char **)(*plVar8 + 0x18);
          pcVar9 = "";
          if (pcVar2 != (char *)0x0) {
            pcVar9 = pcVar2;
          }
          iVar3 = *(int *)(*plVar8 + 0x20);
          uVar6 = 0;
          if (iVar3 < 4) {
            if (iVar3 == 1) {
              uVar6 = (int)*pcVar9 << 0x18;
            }
            else if (iVar3 == 2) {
              uVar6 = (*pcVar9 * 0x100 + (int)pcVar9[1]) * 0x10000;
            }
            else if (iVar3 == 3) {
              uVar6 = ((*pcVar9 * 0x100 + (int)pcVar9[1]) * 0x100 + (int)pcVar9[2]) * 0x100;
            }
          }
          else {
            uVar6 = (((int)*pcVar9 << 8 | (int)pcVar9[1]) << 8 | (int)pcVar9[2]) << 8 |
                    (int)pcVar9[3];
          }
          if (uVar6 != (uint)uVar5) {
            uVar5 = param_1[4];
            iVar3 = (int)uVar10;
            if ((ulonglong)((longlong)(param_1[5] - uVar5) >> 3) <= (ulonglong)(longlong)iVar3) {
              FUN_1802ab620(param_1 + 4,(longlong)(iVar3 * 2));
              uVar5 = param_1[4];
            }
            *(uint *)(uVar5 + uVar7) = uVar6;
            *(int *)(param_1[4] + 4 + uVar7) = (int)uVar11;
            uVar10 = (ulonglong)(iVar3 + 1);
            uVar7 = uVar7 + 8;
            uVar5 = (ulonglong)uVar6;
          }
          iVar3 = (int)uVar10;
          plVar8 = plVar8 + 1;
          uVar11 = (ulonglong)((int)uVar11 + 1);
        } while (plVar8 < (longlong *)param_1[1]);
      }
      FUN_1802ab620(param_1 + 4,(longlong)iVar3);
      uVar5 = param_1[5];
      uVar10 = param_1[4];
      uVar7 = 0;
      uVar11 = param_1[7];
      lVar12 = uVar5 - uVar10;
      lVar4 = lVar12 >> 3;
      if (lVar4 != 0) {
        uVar7 = FUN_18062b420(_DAT_180c8ed18,lVar4 * 8,(uint)uVar11 & 0xff);
      }
      uVar1 = uVar7 + lVar4 * 8;
      if (uVar10 != uVar5) {
                    // WARNING: Subroutine does not return
        memmove(uVar7,uVar10,lVar12);
      }
      uVar5 = param_1[4];
      param_1[4] = uVar7;
      param_1[5] = uVar1;
      param_1[6] = uVar1;
      *(uint *)(param_1 + 7) = (uint)uVar11;
      if (uVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  iVar3 = _Mtx_unlock(param_1 + 8);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}



longlong FUN_1802abc50(longlong *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar6 = _Mtx_lock(param_1 + 8);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  if ((param_1[1] - *param_1 & 0xfffffffffffffff8U) == 0) {
LAB_1802abca0:
    lVar14 = 0;
  }
  else {
    if ((char)param_1[0x12] != '\0') {
      FUN_1802ab9c0(param_1);
    }
    iVar6 = FUN_1802abf70(param_1,param_2);
    lVar13 = (longlong)iVar6;
    bVar5 = false;
    lVar14 = param_1[4];
    if (lVar13 == (param_1[5] - lVar14 >> 3) + -1) {
      lVar11 = (longlong)*(int *)(lVar14 + 4 + lVar13 * 8);
      lVar3 = *param_1;
      if (lVar11 == param_1[1] - lVar3 >> 3) {
        puVar4 = *(undefined **)(*(longlong *)(lVar3 + lVar11 * 8) + 0x18);
        puVar9 = &DAT_18098bc73;
        if (puVar4 != (undefined *)0x0) {
          puVar9 = puVar4;
        }
        lVar14 = (longlong)puVar9 - (longlong)param_2;
        do {
          bVar1 = *param_2;
          bVar2 = param_2[lVar14];
          if (bVar1 != bVar2) break;
          param_2 = param_2 + 1;
        } while (bVar2 != 0);
        if (bVar1 == bVar2) {
          lVar14 = *(longlong *)(lVar3 + lVar11 * 8);
          goto LAB_1802abdd4;
        }
        goto LAB_1802abca0;
      }
      bVar5 = true;
    }
    iVar12 = *(int *)(lVar14 + 4 + lVar13 * 8);
    if (bVar5) {
      iVar6 = (int)(param_1[1] - *param_1 >> 3) + -1;
    }
    else {
      iVar6 = *(int *)(lVar14 + 4 + (longlong)(iVar6 + 1) * 8);
    }
    lVar14 = 0;
    if (iVar12 <= iVar6) {
      do {
        iVar10 = iVar6 + iVar12 >> 1;
        lVar14 = *(longlong *)(*param_1 + (longlong)iVar10 * 8);
        puVar4 = *(undefined **)(lVar14 + 0x18);
        puVar9 = &DAT_18098bc73;
        if (puVar4 != (undefined *)0x0) {
          puVar9 = puVar4;
        }
        pbVar8 = param_2;
        do {
          bVar1 = *pbVar8;
          if (bVar1 != pbVar8[(longlong)puVar9 - (longlong)param_2]) {
            uVar7 = -(uint)(bVar1 < pbVar8[(longlong)puVar9 - (longlong)param_2]) | 1;
            goto LAB_1802abdba;
          }
          pbVar8 = pbVar8 + 1;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_1802abdba:
        if ((int)uVar7 < 1) {
          if (-1 < (int)uVar7) break;
          iVar6 = iVar10 + -1;
        }
        else {
          iVar12 = iVar10 + 1;
        }
        lVar14 = 0;
      } while (iVar12 <= iVar6);
    }
  }
LAB_1802abdd4:
  iVar6 = _Mtx_unlock(param_1 + 8);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return lVar14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802abe00(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802abe00(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar7 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)0x0;
  if (puVar7 < (undefined8 *)param_1[2]) {
    param_1[1] = (longlong)(puVar7 + 1);
    *puVar7 = param_2;
    goto LAB_1802abf36;
  }
  puVar4 = (undefined8 *)*param_1;
  lVar5 = (longlong)puVar7 - (longlong)puVar4 >> 3;
  if (lVar5 == 0) {
    lVar5 = 1;
LAB_1802abea0:
    puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,lVar5 * 8,(char)param_1[3],param_4,uVar9);
    puVar7 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)*param_1;
    puVar8 = puVar3;
  }
  else {
    lVar5 = lVar5 * 2;
    puVar8 = puVar3;
    if (lVar5 != 0) goto LAB_1802abea0;
  }
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_2;
  plVar1 = (longlong *)param_1[1];
  plVar6 = (longlong *)*param_1;
  if (plVar6 != plVar1) {
    do {
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar6);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar3 + 1);
  param_1[2] = (longlong)(puVar8 + lVar5);
LAB_1802abf36:
  *(undefined1 *)(param_1 + 0x12) = 1;
  iVar2 = _Mtx_unlock(param_1 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



ulonglong FUN_1802abf70(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar2 = _Mtx_lock(param_1 + 0x40);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  iVar2 = 0;
  uVar4 = 0;
  uVar7 = 0xffffffffffffffff;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (param_2[lVar6] != '\0');
  iVar5 = (int)lVar6;
  if (iVar5 < 4) {
    if (iVar5 == 1) {
      uVar4 = (int)*param_2 << 0x18;
    }
    else if (iVar5 == 2) {
      uVar4 = (*param_2 * 0x100 + (int)param_2[1]) * 0x10000;
    }
    else if (iVar5 == 3) {
      uVar4 = ((*param_2 * 0x100 + (int)param_2[1]) * 0x100 + (int)param_2[2]) * 0x100;
    }
  }
  else {
    uVar4 = (((int)*param_2 << 8 | (int)param_2[1]) << 8 | (int)param_2[2]) << 8 | (int)param_2[3];
  }
  iVar5 = (int)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3) + -1;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar5 + iVar2 >> 1;
      uVar7 = (ulonglong)iVar3;
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + uVar7 * 8);
      if (iVar1 < (int)uVar4) {
        iVar2 = iVar3 + 1;
      }
      else {
        if (iVar1 <= (int)uVar4) break;
        iVar5 = iVar3 + -1;
      }
    } while (iVar2 <= iVar5);
  }
  iVar2 = _Mtx_unlock(param_1 + 0x40);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return uVar7 & 0xffffffff;
}



undefined8 * FUN_1802ac0a0(undefined8 *param_1)

{
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = &UNK_1809fcc28;
  param_1[3] = param_1 + 5;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &UNK_180a17da8;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 3;
  param_1[0x15] = 0;
  return param_1;
}



undefined8 *
FUN_1802ac160(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a17da8;
  FUN_1800ff020();
  *param_1 = &UNK_180a02e68;
  param_1[2] = &UNK_18098bcb0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0xe0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802ac200(undefined8 param_1,longlong *param_2,longlong param_3)
void FUN_1802ac200(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [136];
  ulonglong uStack_28;
  
  uVar1 = _DAT_180c86970;
  uStack_e0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  uStack_e8 = 0;
  puStack_c8 = &UNK_1809fcc28;
  puStack_c0 = auStack_b0;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  plStack_d8 = param_2;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_b8 = (undefined4)lVar2;
    strcpy_s(auStack_b0,0x80);
  }
  FUN_1800c1520(uVar1,param_2,&puStack_c8);
  uStack_e8 = 1;
  puStack_c8 = &UNK_18098bcb0;
  if (*param_2 == 0) {
    FUN_180627020(&UNK_180a17e18,param_3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_108);
}



undefined8 *
FUN_1802ac310(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = &UNK_18098bcb0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = &UNK_1809fcc28;
  param_2[1] = param_2 + 3;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)(param_2 + 2) = 0x1c;
  strcpy_s(param_2[1],0x80,&UNK_180a17e48,param_4,0,0xfffffffffffffffe);
  return param_2;
}



undefined8 * FUN_1802ac390(undefined8 *param_1)

{
  *param_1 = &UNK_180a21690;
  *param_1 = &UNK_180a21720;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &UNK_180a14860;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_180a18648;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 3;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 3;
  param_1[6] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x2b) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15a) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffffffffffff;
  FUN_1802ae420(param_1);
  return param_1;
}



undefined8 FUN_1802ac4a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1802ac800();
  if ((param_2 & 1) != 0) {
    free(param_1,0x168);
  }
  return param_1;
}






// 函数: void FUN_1802ac4e0(longlong *param_1)
void FUN_1802ac4e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_1802c00d0();
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802ac500(float *param_1,float *param_2,undefined8 *param_3)
void FUN_1802ac500(float *param_1,float *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float extraout_XMM0_Da;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar9 = param_2 + 8;
  *pfVar9 = *param_1 - param_1[4];
  param_2[9] = param_1[1] - param_1[5];
  param_2[10] = param_1[2] - param_1[6];
  puVar8 = (undefined4 *)FUN_1801c24a0();
  if (extraout_XMM0_Da < 0.0001) {
    pfVar9[0] = 0.0;
    pfVar9[1] = 0.0;
    pfVar9[2] = 1.0;
    pfVar9[3] = 0.0;
  }
  fVar12 = *pfVar9;
  if (ABS(fVar12) <= 0.999) {
    fVar13 = 1.0;
    fVar15 = 0.0;
  }
  else {
    fVar13 = 0.0;
    fVar15 = -1.0;
  }
  *param_2 = fVar13;
  param_2[1] = fVar15;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  param_2[4] = param_2[2] * param_2[9] - param_2[1] * param_2[10];
  param_2[5] = *param_2 * param_2[10] - param_2[2] * fVar12;
  param_2[6] = param_2[1] * fVar12 - *param_2 * param_2[9];
  param_2[7] = 3.4028235e+38;
  fVar12 = param_2[5];
  fVar13 = param_2[6];
  fVar15 = param_2[4];
  fVar10 = fVar15 * fVar15 + fVar12 * fVar12 + fVar13 * fVar13;
  auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar14 = auVar11._0_4_;
  fVar10 = fVar14 * 0.5 * (3.0 - fVar10 * fVar14 * fVar14);
  fVar13 = fVar13 * fVar10;
  fVar12 = fVar12 * fVar10;
  param_2[6] = fVar13;
  fVar15 = fVar15 * fVar10;
  param_2[5] = fVar12;
  param_2[4] = fVar15;
  fVar10 = fVar12 * pfVar9[2] - fVar13 * pfVar9[1];
  fVar14 = fVar13 * *pfVar9 - fVar15 * pfVar9[2];
  fVar15 = fVar15 * pfVar9[1] - fVar12 * *pfVar9;
  *param_2 = fVar10;
  param_2[1] = fVar14;
  param_2[2] = fVar15;
  param_2[3] = 3.4028235e+38;
  fVar12 = fVar10 * fVar10 + fVar14 * fVar14 + fVar15 * fVar15;
  auVar11 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
  fVar13 = auVar11._0_4_;
  fVar12 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
  *param_2 = fVar10 * fVar12;
  param_2[1] = fVar14 * fVar12;
  param_2[2] = fVar15 * fVar12;
  fVar12 = (float)puVar8[4];
  fVar13 = (float)puVar8[5];
  fVar15 = (float)puVar8[6];
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xc] = fVar12;
  param_2[0xd] = fVar13;
  param_2[0xe] = fVar15;
  param_2[0xf] = 3.4028235e+38;
  param_2[0xb] = 0.0;
  uVar4 = *(undefined8 *)(param_2 + 2);
  param_2[0xf] = 1.0;
  uVar5 = *(undefined8 *)(param_2 + 4);
  uVar6 = *(undefined8 *)(param_2 + 6);
  uVar1 = *puVar8;
  *param_3 = *(undefined8 *)param_2;
  param_3[1] = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 10);
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  uVar2 = puVar8[1];
  param_3[4] = uVar4;
  param_3[5] = uVar7;
  uVar3 = puVar8[2];
  *(undefined4 *)(param_3 + 6) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar2;
  *(undefined4 *)(param_3 + 7) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x3c) = 0x3f800000;
  return;
}






// 函数: void FUN_1802ac800(undefined8 *param_1)
void FUN_1802ac800(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  *param_1 = &UNK_180a18648;
  plVar1 = param_1 + 0x27;
  lVar2 = param_1[0x28];
  lVar5 = *plVar1;
  if (lVar5 != lVar2) {
    do {
      FUN_1802c00d0();
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar2);
    lVar5 = *plVar1;
  }
  param_1[0x28] = lVar5;
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    cVar4 = (**(code **)(*(longlong *)param_1[0x21] + 0xd8))();
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)param_1[0x21] + 0x68))();
    }
  }
  plVar3 = (longlong *)param_1[0x21];
  param_1[0x21] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  FUN_1802b7240(plVar1);
  FUN_180057830();
  if ((longlong *)param_1[0x21] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x21] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  *param_1 = &UNK_180a14860;
  param_1[5] = 0;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  return;
}






