#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part059.c - 5 个函数

// 函数: void FUN_180095420(longlong param_1)
void FUN_180095420(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180095480(void)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  undefined4 uStack_38;
  
  lVar14 = _DAT_180c86960;
  puVar11 = (undefined8 *)(_DAT_180c86960 + 0x40);
  FUN_1806279c0(&puStack_50);
  puVar13 = *(undefined8 **)(lVar14 + 0x50);
  puVar9 = puVar11;
  if (puVar13 != (undefined8 *)0x0) {
    do {
      if (iStack_40 == 0) {
        bVar3 = false;
        puVar12 = (undefined8 *)puVar13[1];
      }
      else {
        if (*(int *)(puVar13 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_48;
          do {
            uVar7 = (uint)pbVar4[puVar13[5] - (longlong)pbStack_48];
            iVar8 = *pbVar4 - uVar7;
            if (*pbVar4 != uVar7) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar7 != 0);
          bVar3 = 0 < iVar8;
          if (iVar8 < 1) {
            puVar12 = (undefined8 *)puVar13[1];
            goto LAB_180095527;
          }
        }
        puVar12 = (undefined8 *)*puVar13;
      }
LAB_180095527:
      puVar10 = puVar13;
      if (bVar3) {
        puVar10 = puVar9;
      }
      puVar9 = puVar10;
      puVar13 = puVar12;
    } while (puVar12 != (undefined8 *)0x0);
    puVar13 = (undefined8 *)0x0;
    if (puVar10 != puVar11) {
      if (*(int *)(puVar10 + 6) == 0) goto LAB_18009556a;
      if (iStack_40 != 0) {
        pbVar4 = (byte *)puVar10[5];
        lVar14 = (longlong)pbStack_48 - (longlong)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar7 = (uint)pbVar4[lVar14];
          if (bVar2 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar2 - uVar7) < 1) goto LAB_18009556a;
      }
    }
  }
  puVar10 = puVar11;
LAB_18009556a:
  puStack_50 = &UNK_180a3c3e0;
  if (pbStack_48 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pbStack_48 = (byte *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  if (puVar10 == puVar11) {
    return 0;
  }
  pbVar4 = (byte *)FUN_18062b420(_DAT_180c8ed18,0x10,CONCAT71((int7)((ulonglong)puVar13 >> 8),0x13))
  ;
  *pbVar4 = 0;
  FUN_18064e990(pbVar4);
  pbVar4[0] = 0x41;
  pbVar4[1] = 0x6c;
  pbVar4[2] = 0x6c;
  pbVar4[3] = 0;
  puVar11 = puVar10 + 8;
  puVar13 = (undefined8 *)puVar10[10];
  if ((undefined8 *)puVar10[10] != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar13 + 6) == 0) {
        bVar3 = true;
LAB_180095648:
        puVar9 = (undefined8 *)*puVar13;
      }
      else {
        pbVar5 = pbVar4;
        do {
          uVar7 = (uint)pbVar5[puVar13[5] - (longlong)pbVar4];
          iVar8 = *pbVar5 - uVar7;
          if (*pbVar5 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        bVar3 = 0 < iVar8;
        if (0 < iVar8) goto LAB_180095648;
        puVar9 = (undefined8 *)puVar13[1];
      }
      if (bVar3) {
        puVar13 = puVar11;
      }
      puVar11 = puVar13;
      puVar13 = puVar9;
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar11 != puVar10 + 8) && (*(int *)(puVar11 + 6) != 0)) {
      pcVar6 = (char *)puVar11[5];
      lVar14 = (longlong)pbVar4 - (longlong)pcVar6;
      do {
        pcVar1 = pcVar6 + lVar14;
        if (*pcVar6 != *pcVar1) break;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(pbVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_180095720(void)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined *puStack_50;
  byte *pbStack_48;
  int iStack_40;
  undefined4 uStack_38;
  
  lVar14 = _DAT_180c86960;
  puVar11 = (undefined8 *)(_DAT_180c86960 + 0x40);
  FUN_1806279c0(&puStack_50);
  puVar13 = *(undefined8 **)(lVar14 + 0x50);
  puVar9 = puVar11;
  if (puVar13 != (undefined8 *)0x0) {
    do {
      if (iStack_40 == 0) {
        bVar3 = false;
        puVar12 = (undefined8 *)puVar13[1];
      }
      else {
        if (*(int *)(puVar13 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar4 = pbStack_48;
          do {
            uVar7 = (uint)pbVar4[puVar13[5] - (longlong)pbStack_48];
            iVar8 = *pbVar4 - uVar7;
            if (*pbVar4 != uVar7) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar7 != 0);
          bVar3 = 0 < iVar8;
          if (iVar8 < 1) {
            puVar12 = (undefined8 *)puVar13[1];
            goto LAB_1800957c7;
          }
        }
        puVar12 = (undefined8 *)*puVar13;
      }
LAB_1800957c7:
      puVar10 = puVar13;
      if (bVar3) {
        puVar10 = puVar9;
      }
      puVar9 = puVar10;
      puVar13 = puVar12;
    } while (puVar12 != (undefined8 *)0x0);
    puVar13 = (undefined8 *)0x0;
    if (puVar10 != puVar11) {
      if (*(int *)(puVar10 + 6) == 0) goto LAB_18009580a;
      if (iStack_40 != 0) {
        pbVar4 = (byte *)puVar10[5];
        lVar14 = (longlong)pbStack_48 - (longlong)pbVar4;
        do {
          bVar2 = *pbVar4;
          uVar7 = (uint)pbVar4[lVar14];
          if (bVar2 != uVar7) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar2 - uVar7) < 1) goto LAB_18009580a;
      }
    }
  }
  puVar10 = puVar11;
LAB_18009580a:
  puStack_50 = &UNK_180a3c3e0;
  if (pbStack_48 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  pbStack_48 = (byte *)0x0;
  uStack_38 = 0;
  puStack_50 = &UNK_18098bcb0;
  if (puVar10 == puVar11) {
    return 0;
  }
  pbVar4 = (byte *)FUN_18062b420(_DAT_180c8ed18,0x10,CONCAT71((int7)((ulonglong)puVar13 >> 8),0x13))
  ;
  *pbVar4 = 0;
  FUN_18064e990(pbVar4);
  pbVar4[0] = 0x41;
  pbVar4[1] = 0x6c;
  pbVar4[2] = 0x6c;
  pbVar4[3] = 0;
  puVar11 = puVar10 + 8;
  puVar13 = (undefined8 *)puVar10[10];
  if ((undefined8 *)puVar10[10] != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar13 + 6) == 0) {
        bVar3 = true;
LAB_1800958e8:
        puVar9 = (undefined8 *)*puVar13;
      }
      else {
        pbVar5 = pbVar4;
        do {
          uVar7 = (uint)pbVar5[puVar13[5] - (longlong)pbVar4];
          iVar8 = *pbVar5 - uVar7;
          if (*pbVar5 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        bVar3 = 0 < iVar8;
        if (0 < iVar8) goto LAB_1800958e8;
        puVar9 = (undefined8 *)puVar13[1];
      }
      if (bVar3) {
        puVar13 = puVar11;
      }
      puVar11 = puVar13;
      puVar13 = puVar9;
    } while (puVar9 != (undefined8 *)0x0);
    if ((puVar11 != puVar10 + 8) && (*(int *)(puVar11 + 6) != 0)) {
      pcVar6 = (char *)puVar11[5];
      lVar14 = (longlong)pbVar4 - (longlong)pcVar6;
      do {
        pcVar1 = pcVar6 + lVar14;
        if (*pcVar6 != *pcVar1) break;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 != '\0');
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(pbVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180095bf0(undefined8 param_1,undefined4 param_2,undefined4 param_3)
void FUN_180095bf0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  puVar1 = _DAT_180c86960;
  uVar6 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(0x180c91970);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  uVar3 = FUN_180124730();
  _DAT_180c8a9b0 = uVar3;
  FUN_180290fd0(0);
  uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3,uVar6);
  uVar6 = FUN_180095350(uVar6,uVar3);
  *puVar1 = uVar6;
  uVar6 = FUN_180124730();
  _DAT_180c8a9b0 = uVar6;
  FUN_180290fd0(0);
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0xe8,8,3);
  uVar6 = FUN_180095350(uVar3,uVar6);
  puVar1[1] = uVar6;
  FUN_180098ae0(*puVar1,param_2,param_3,FUN_180098980);
  FUN_180098ae0(puVar1[1],param_2,param_3,0);
  _DAT_180c8a9b0 = *(undefined8 *)*puVar1;
  FUN_180080ca0(puVar1 + 0xf,0x96);
  puVar5 = (undefined4 *)puVar1[0xf];
  uVar4 = (ulonglong)((longlong)puVar1[0x10] + (3 - (longlong)puVar5)) >> 2;
  if ((undefined4 *)puVar1[0x10] < puVar5) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0x3d072b02;
      puVar5 = puVar5 + 1;
    }
  }
  FUN_180080ca0(puVar1 + 0x13,0x96);
  puVar5 = (undefined4 *)puVar1[0x13];
  uVar4 = (ulonglong)((longlong)puVar1[0x14] + (3 - (longlong)puVar5)) >> 2;
  if ((undefined4 *)puVar1[0x14] < puVar5) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0x3c83126f;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined1 *)(puVar1 + 7) = 1;
  iVar2 = _Mtx_unlock(0x180c91970);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180095da0(undefined8 param_1,longlong param_2,longlong param_3,char param_4)
void FUN_180095da0(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  char *pcVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  float fVar15;
  undefined4 uStackX_18;
  undefined4 uStackX_1c;
  char acStackX_20 [8];
  
  acStackX_20[0] = param_4;
  pfVar6 = (float *)FUN_18009b3a0(param_3 + 0xc0,param_2 + 0x20);
  fVar15 = *pfVar6;
  func_0x000180112210();
  iVar13 = 0;
  uVar11 = 0;
  if ((*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) & 0xfffffffffffffff8U) == 0) {
    uVar11 = 0x100;
  }
  puVar10 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar10 = *(undefined **)(param_2 + 8);
  }
  cVar2 = FUN_180118a80((double)(fVar15 * 1000.0),uVar11,&UNK_180a01430,puVar10,
                        (double)(fVar15 * 1000.0));
  FUN_180134130();
  pcVar7 = (char *)FUN_18009b960(param_3 + 0xf0,param_2 + 0x20);
  acStackX_20[0] = *pcVar7;
  puVar8 = (undefined2 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar8 = 0;
  uVar4 = FUN_18064e990(puVar8);
  *puVar8 = 0x2323;
  *(undefined1 *)(puVar8 + 1) = 0;
  iVar5 = *(int *)(param_2 + 0x30);
  if (0 < iVar5) {
    if ((iVar5 != -2) && (uVar4 < iVar5 + 3U)) {
      puVar8 = (undefined2 *)FUN_18062b8b0(_DAT_180c8ed18,puVar8,iVar5 + 3U,0x10,0x13);
      FUN_18064e990(puVar8);
      iVar5 = *(int *)(param_2 + 0x30);
    }
                    // WARNING: Subroutine does not return
    memcpy(puVar8 + 1,*(undefined8 *)(param_2 + 0x28),(longlong)(iVar5 + 1));
  }
  puVar14 = (undefined2 *)&DAT_18098bc73;
  if (puVar8 != (undefined2 *)0x0) {
    puVar14 = puVar8;
  }
  cVar3 = FUN_180111070(puVar14,acStackX_20);
  cVar1 = acStackX_20[0];
  if (cVar3 != '\0') {
    pcVar7 = (char *)FUN_18009b960(param_3 + 0xf0,param_2 + 0x20);
    *pcVar7 = cVar1;
  }
  if (cVar1 != '\0') {
    func_0x00018012e760(0,0xbf800000);
  }
  if (puVar8 != (undefined2 *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar8);
  }
  FUN_180134130();
  puVar9 = (undefined4 *)FUN_18009b3a0(param_3 + 0x90,param_2 + 0x20);
  uStackX_18 = 0xbf800000;
  uStackX_1c = 0;
  FUN_180111c30(*puVar9,&uStackX_18);
  FUN_180134130();
  if (cVar2 != '\0') {
    if (*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3 != 0) {
      lVar12 = 0;
      do {
        FUN_180095da0(param_1,*(undefined8 *)(lVar12 + *(longlong *)(param_2 + 0x48)),param_3,1);
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 8;
      } while ((ulonglong)(longlong)iVar13 <
               (ulonglong)(*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3));
    }
    func_0x000180119790();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180096040(void)
void FUN_180096040(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined *puStack_30;
  byte *pbStack_28;
  int iStack_20;
  undefined4 uStack_18;
  
  lVar11 = _DAT_180c86960;
  puVar8 = (undefined8 *)(_DAT_180c86960 + 0x40);
  FUN_1806279c0(&puStack_30);
  puVar9 = *(undefined8 **)(lVar11 + 0x50);
  puVar6 = puVar8;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      if (iStack_20 == 0) {
        bVar2 = false;
        puVar10 = (undefined8 *)puVar9[1];
      }
      else {
        if (*(int *)(puVar9 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar4 = pbStack_28;
          do {
            uVar5 = (uint)pbVar4[puVar9[5] - (longlong)pbStack_28];
            iVar3 = *pbVar4 - uVar5;
            if (*pbVar4 != uVar5) break;
            pbVar4 = pbVar4 + 1;
          } while (uVar5 != 0);
          bVar2 = 0 < iVar3;
          if (iVar3 < 1) {
            puVar10 = (undefined8 *)puVar9[1];
            goto LAB_1800960d8;
          }
        }
        puVar10 = (undefined8 *)*puVar9;
      }
LAB_1800960d8:
      puVar7 = puVar9;
      if (bVar2) {
        puVar7 = puVar6;
      }
      puVar6 = puVar7;
      puVar9 = puVar10;
    } while (puVar10 != (undefined8 *)0x0);
    if (puVar7 != puVar8) {
      if (*(int *)(puVar7 + 6) == 0) goto LAB_18009611a;
      if (iStack_20 != 0) {
        pbVar4 = (byte *)puVar7[5];
        lVar11 = (longlong)pbStack_28 - (longlong)pbVar4;
        do {
          bVar1 = *pbVar4;
          uVar5 = (uint)pbVar4[lVar11];
          if (bVar1 != uVar5) break;
          pbVar4 = pbVar4 + 1;
        } while (uVar5 != 0);
        if ((int)(bVar1 - uVar5) < 1) goto LAB_18009611a;
      }
    }
  }
  puVar7 = puVar8;
LAB_18009611a:
  puStack_30 = &UNK_180a3c3e0;
  if (pbStack_28 == (byte *)0x0) {
    pbStack_28 = (byte *)0x0;
    uStack_18 = 0;
    puStack_30 = &UNK_18098bcb0;
    if (puVar7 != puVar8) {
      iVar3 = _Mtx_lock(puVar7 + 0x2d);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
      puVar8 = puVar7 + 0x1a;
      FUN_180058370(puVar8,puVar7[0x1c]);
      *puVar8 = puVar8;
      puVar7[0x1b] = puVar8;
      puVar7[0x1c] = 0;
      *(undefined1 *)(puVar7 + 0x1d) = 0;
      puVar7[0x1e] = 0;
      puVar8 = puVar7 + 8;
      FUN_1800593f0(puVar8,puVar7[10]);
      *puVar8 = puVar8;
      puVar7[9] = puVar8;
      puVar7[10] = 0;
      *(undefined1 *)(puVar7 + 0xb) = 0;
      puVar7[0xc] = 0;
      puVar8 = puVar7 + 0x14;
      FUN_1800593f0(puVar8,puVar7[0x16]);
      *puVar8 = puVar8;
      puVar7[0x15] = puVar8;
      puVar7[0x16] = 0;
      *(undefined1 *)(puVar7 + 0x17) = 0;
      puVar7[0x18] = 0;
      puVar8 = puVar7 + 0xe;
      FUN_180058710(puVar8,puVar7[0x10]);
      *puVar8 = puVar8;
      puVar7[0xf] = puVar8;
      puVar7[0x10] = 0;
      *(undefined1 *)(puVar7 + 0x11) = 0;
      puVar7[0x12] = 0;
      iVar3 = _Mtx_unlock(puVar7 + 0x2d);
      if (iVar3 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar3);
      }
    }
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180096240(undefined8 param_1,longlong param_2,undefined8 *param_3)
void FUN_180096240(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  short sVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  float extraout_XMM0_Da;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackX_10 [8];
  undefined8 *puStackX_18;
  undefined1 auStackX_20 [8];
  undefined *puStack_b0;
  undefined1 *puStack_a8;
  uint uStack_a0;
  undefined8 uStack_98;
  
  uVar17 = 0;
  uVar16 = 0;
  uVar22 = uVar17;
  uVar24 = uVar17;
  puStackX_18 = param_3;
  if (*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3 != 0) {
    do {
      puStack_b0 = &UNK_180a3c3e0;
      uStack_98 = 0;
      puStack_a8 = (undefined1 *)0x0;
      uStack_a0 = 0;
      FUN_1806277c0(&puStack_b0,*(undefined4 *)(param_2 + 0x30));
      if (*(int *)(param_2 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(puStack_a8,*(undefined8 *)(param_2 + 0x28),*(int *)(param_2 + 0x30) + 1);
      }
      if (*(longlong *)(param_2 + 0x28) != 0) {
        uStack_a0 = 0;
        if (puStack_a8 != (undefined1 *)0x0) {
          *puStack_a8 = 0;
        }
        uStack_98 = uStack_98 & 0xffffffff;
      }
      uVar23 = uStack_a0 + 2;
      FUN_1806277c0(&puStack_b0,(ulonglong)uVar23);
      *(undefined2 *)(puStack_a8 + uStack_a0) = 0x2f2f;
      *(undefined1 *)((longlong)(puStack_a8 + uStack_a0) + 2) = 0;
      lVar11 = *(longlong *)(uVar24 + *(longlong *)(param_2 + 0x48));
      uStack_a0 = uVar23;
      if (0 < *(int *)(lVar11 + 0x10)) {
        FUN_1806277c0(&puStack_b0,uVar23 + *(int *)(lVar11 + 0x10));
                    // WARNING: Subroutine does not return
        memcpy(puStack_a8 + uStack_a0,*(undefined8 *)(lVar11 + 8),
               (longlong)(*(int *)(lVar11 + 0x10) + 1));
      }
      lVar11 = *(longlong *)(uVar24 + *(longlong *)(param_2 + 0x48));
      if (puStack_a8 != (undefined1 *)0x0) {
        FUN_1806277c0(lVar11 + 0x20,uVar23);
      }
      if (uVar23 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*(undefined8 *)(lVar11 + 0x28),puStack_a8,uVar23);
      }
      *(undefined4 *)(lVar11 + 0x30) = 0;
      if (*(longlong *)(lVar11 + 0x28) != 0) {
        *(undefined1 *)((ulonglong)uVar23 + *(longlong *)(lVar11 + 0x28)) = 0;
      }
      *(uint *)(lVar11 + 0x3c) = uStack_98._4_4_;
      puStack_b0 = &UNK_180a3c3e0;
      if (puStack_a8 != (undefined1 *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(puStack_a8,puStack_a8);
      }
      puStack_a8 = (undefined1 *)0x0;
      uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
      puStack_b0 = &UNK_18098bcb0;
      uVar23 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar23;
      uVar24 = uVar24 + 8;
    } while ((ulonglong)(longlong)(int)uVar23 <
             (ulonglong)(*(longlong *)(param_2 + 0x50) - *(longlong *)(param_2 + 0x48) >> 3));
  }
  puVar12 = puStackX_18;
  if (*(char *)((longlong)puStackX_18 + 0x124) != '\x01') {
    plVar5 = *(longlong **)(param_2 + 0x48);
    uVar22 = uVar17;
    uVar24 = uVar17;
    if (*(longlong *)(param_2 + 0x50) - (longlong)plVar5 >> 3 != 0) {
      do {
        FUN_180096240(param_1,*(undefined8 *)(uVar22 + *(longlong *)(param_2 + 0x48)),puVar12);
        uVar23 = (int)uVar24 + 1;
        plVar5 = *(longlong **)(param_2 + 0x48);
        uVar22 = uVar22 + 8;
        uVar24 = (ulonglong)uVar23;
      } while ((ulonglong)(longlong)(int)uVar23 <
               (ulonglong)(*(longlong *)(param_2 + 0x50) - (longlong)plVar5 >> 3));
    }
    if ((*(char *)((longlong)puVar12 + 0x125) != '\0') &&
       (plVar2 = *(longlong **)(param_2 + 0x50), plVar5 != plVar2)) {
      lVar21 = (longlong)plVar2 - (longlong)plVar5 >> 3;
      for (lVar11 = lVar21; lVar11 != 0; lVar11 = lVar11 >> 1) {
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
      }
      FUN_18009d3a0(plVar5,plVar2,(longlong)(int)(uVar16 - 1) * 2,puVar12);
      if (lVar21 < 0x1d) {
        FUN_18009d140(plVar5,plVar2,puVar12);
      }
      else {
        plVar25 = plVar5 + 0x1c;
        FUN_18009d140(plVar5,plVar25,puVar12);
        if (plVar25 != plVar2) {
LAB_180096990:
          lVar11 = *plVar25;
          plVar5 = plVar25;
          do {
            lVar21 = plVar5[-1];
            FUN_180058080(puVar12 + 0x12,auStackX_10,lVar11 + 0x20);
            plVar13 = (longlong *)FUN_180058080(puVar12 + 0x12,auStackX_20,lVar21 + 0x20);
            if (extraout_XMM0_Da == *(float *)(*plVar13 + 0x40)) {
              if (*(int *)(lVar11 + 0x30) == 0) {
                bVar3 = false;
              }
              else if (*(int *)(lVar21 + 0x30) == 0) {
                bVar3 = true;
              }
              else {
                pbVar14 = *(byte **)(lVar11 + 0x28);
                lVar19 = *(longlong *)(lVar21 + 0x28) - (longlong)pbVar14;
                do {
                  bVar1 = *pbVar14;
                  uVar16 = (uint)pbVar14[lVar19];
                  if (bVar1 != uVar16) break;
                  pbVar14 = pbVar14 + 1;
                } while (uVar16 != 0);
                bVar3 = 0 < (int)(bVar1 - uVar16);
              }
            }
            else {
              bVar3 = *(float *)(*plVar13 + 0x40) < extraout_XMM0_Da;
            }
            if (!bVar3) goto LAB_180096a34;
            *plVar5 = lVar21;
            plVar5 = plVar5 + -1;
          } while( true );
        }
      }
    }
    return;
  }
  puVar8 = puStackX_18 + 0x1e;
  lVar11 = param_2 + 0x20;
  plVar5 = (longlong *)FUN_180058080(puVar8,&puStackX_18,lVar11);
  if ((undefined8 *)*plVar5 == puVar8) {
    puVar6 = (undefined1 *)FUN_18009b960(puVar8,lVar11);
    *puVar6 = 0;
  }
  puVar8 = puVar12 + 0x18;
  FUN_180058080(puVar8,&puStackX_18,lVar11);
  dVar27 = 0.0;
  if (puStackX_18 == puVar8) {
    fVar29 = (float)*(double *)(param_2 + 0x40);
    pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
  }
  else {
    fVar29 = *(float *)(puStackX_18 + 8);
    puStackX_18 = (undefined8 *)CONCAT44(puStackX_18._4_4_,fVar29);
    sVar4 = _fdtest(&puStackX_18);
    if (sVar4 == 2) {
      fVar29 = 0.0;
    }
    puStackX_18 = *(undefined8 **)(param_2 + 0x40);
    sVar4 = _dtest(&puStackX_18);
    if (sVar4 == 2) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      dVar26 = 0.0;
    }
    else {
      dVar26 = *(double *)(param_2 + 0x40);
    }
    fVar28 = fVar29;
    if (*(char *)((longlong)puVar12 + 0x124) != '\0') {
      fVar28 = (float)dVar26;
    }
    puStackX_18 = (undefined8 *)CONCAT44(puStackX_18._4_4_,fVar28);
    sVar4 = _fdtest(&puStackX_18);
    if (sVar4 == 2) {
      fVar28 = fVar29;
    }
    pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
    fVar29 = (fVar28 - fVar29) * 0.02 + fVar29;
  }
  *pfVar7 = fVar29;
  puVar8 = puVar12 + 0x12;
  if ((undefined8 *)puVar12[0x13] == puVar8) {
    if (0.0 < *(float *)(puVar12 + 0x24)) {
      dVar27 = *(double *)(param_2 + 0x40) / (double)*(float *)(puVar12 + 0x24);
    }
    fVar29 = (float)dVar27;
  }
  else {
    pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
    fVar29 = *pfVar7;
    if ((*(char *)((longlong)puVar12 + 0x124) == '\0') || (*(float *)(puVar12 + 0x24) == 0.0)) {
      dVar27 = (double)fVar29;
    }
    else {
      dVar27 = *(double *)(param_2 + 0x40) / (double)*(float *)(puVar12 + 0x24);
    }
    fVar29 = ((float)dVar27 - fVar29) * 0.02 + fVar29;
  }
  pfVar7 = (float *)FUN_18009b3a0(puVar8,lVar11);
  *pfVar7 = fVar29;
  puVar8 = puVar12;
  if ((undefined8 *)puVar12[2] != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)puVar12[2];
    do {
      if (*(int *)(param_2 + 0x30) == 0) {
        bVar3 = false;
        puVar15 = (undefined8 *)puVar20[1];
      }
      else {
        if (*(int *)(puVar20 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar14 = *(byte **)(param_2 + 0x28);
          lVar21 = puVar20[5] - (longlong)pbVar14;
          do {
            uVar16 = (uint)pbVar14[lVar21];
            iVar18 = *pbVar14 - uVar16;
            if (*pbVar14 != uVar16) break;
            pbVar14 = pbVar14 + 1;
          } while (uVar16 != 0);
          bVar3 = 0 < iVar18;
          if (iVar18 < 1) {
            puVar15 = (undefined8 *)puVar20[1];
            goto LAB_18009662b;
          }
        }
        puVar15 = (undefined8 *)*puVar20;
      }
LAB_18009662b:
      if (bVar3) {
        puVar20 = puVar8;
      }
      puVar8 = puVar20;
      puVar20 = puVar15;
    } while (puVar15 != (undefined8 *)0x0);
  }
  if (puVar8 == puVar12) {
LAB_18009667a:
    puVar8 = (undefined8 *)FUN_18009bf40(puVar12,&puStackX_18);
    puVar8 = (undefined8 *)*puVar8;
  }
  else if (*(int *)(puVar8 + 6) != 0) {
    if (*(int *)(param_2 + 0x30) != 0) {
      pbVar14 = (byte *)puVar8[5];
      lVar21 = *(longlong *)(param_2 + 0x28) - (longlong)pbVar14;
      do {
        bVar1 = *pbVar14;
        uVar16 = (uint)pbVar14[lVar21];
        if (bVar1 != uVar16) break;
        pbVar14 = pbVar14 + 1;
      } while (uVar16 != 0);
      if ((int)(bVar1 - uVar16) < 1) goto LAB_180096691;
    }
    goto LAB_18009667a;
  }
LAB_180096691:
  puVar20 = puVar8 + 8;
  FUN_18009b5a0(puVar12 + 6,lVar11);
  puVar9 = (undefined8 *)FUN_18009b780(puVar12 + 0xc,lVar11);
  dVar27 = *(double *)(param_2 + 0x40);
  puVar15 = (undefined8 *)puVar8[10];
  puVar10 = puVar20;
  if (puVar15 != (undefined8 *)0x0) {
    do {
      if (*(int *)(puVar15 + 4) < *(int *)(puVar12 + 0x2f)) {
        puVar15 = (undefined8 *)*puVar15;
      }
      else {
        puVar10 = puVar15;
        puVar15 = (undefined8 *)puVar15[1];
      }
    } while (puVar15 != (undefined8 *)0x0);
  }
  if ((puVar10 == puVar20) || (*(int *)(puVar12 + 0x2f) < *(int *)(puVar10 + 4))) {
    puVar10 = (undefined8 *)FUN_18009c5b0(puVar20,auStackX_10);
    puVar10 = (undefined8 *)*puVar10;
  }
  *(float *)((longlong)puVar10 + 0x24) = (float)dVar27;
  if (0x96 < (ulonglong)puVar8[0xc]) {
    lVar11 = puVar8[9];
    puVar8[0xc] = puVar8[0xc] - 1;
    func_0x00018066bd70(lVar11);
    FUN_18066ba00(lVar11,puVar20);
    if (lVar11 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar11);
    }
  }
  lVar11 = FUN_18062b420(_DAT_180c8ed18,0x28,*(undefined1 *)(puVar9 + 5));
  dVar27 = *(double *)(param_2 + 0x40);
  *(float *)(lVar11 + 0x20) = (float)dVar27;
  bVar3 = true;
  puVar12 = (undefined8 *)puVar9[2];
  puVar8 = puVar9;
  while (puVar12 != (undefined8 *)0x0) {
    bVar3 = (float)dVar27 < *(float *)(puVar12 + 4);
    puVar8 = puVar12;
    if (bVar3) {
      puVar12 = (undefined8 *)puVar12[1];
    }
    else {
      puVar12 = (undefined8 *)*puVar12;
    }
  }
  puVar12 = puVar8;
  if (bVar3) {
    if (puVar8 == (undefined8 *)puVar9[1]) goto LAB_1800967cd;
    puVar12 = (undefined8 *)func_0x00018066b9a0(puVar8);
  }
  if (*(float *)(lVar11 + 0x20) < *(float *)(puVar12 + 4) ||
      *(float *)(lVar11 + 0x20) == *(float *)(puVar12 + 4)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar11);
  }
LAB_1800967cd:
  if ((puVar8 == puVar9) ||
     (uVar22 = 1,
     *(float *)(lVar11 + 0x20) <= *(float *)(puVar8 + 4) &&
     *(float *)(puVar8 + 4) != *(float *)(lVar11 + 0x20))) {
    uVar22 = uVar17;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar11,puVar8,puVar9,uVar22);
LAB_180096a34:
  *plVar5 = lVar11;
  plVar25 = plVar25 + 1;
  if (plVar25 == plVar2) {
    return;
  }
  goto LAB_180096990;
}



bool FUN_180096a80(longlong *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  undefined1 auStackX_8 [8];
  
  lVar5 = *param_1;
  FUN_180058080(lVar5 + 0x90,auStackX_8,param_2 + 0x20);
  plVar2 = (longlong *)FUN_180058080(lVar5 + 0x90,auStackX_8,param_3 + 0x20);
  if (extraout_XMM0_Da != *(float *)(*plVar2 + 0x40)) {
    return *(float *)(*plVar2 + 0x40) < extraout_XMM0_Da;
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    return false;
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    return true;
  }
  pbVar3 = *(byte **)(param_2 + 0x28);
  lVar5 = *(longlong *)(param_3 + 0x28) - (longlong)pbVar3;
  do {
    bVar1 = *pbVar3;
    uVar4 = (uint)pbVar3[lVar5];
    if (bVar1 != uVar4) break;
    pbVar3 = pbVar3 + 1;
  } while (uVar4 != 0);
  return 0 < (int)(bVar1 - uVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



