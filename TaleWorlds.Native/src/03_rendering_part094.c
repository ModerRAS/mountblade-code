#include "TaleWorlds.Native.Split.h"

// 03_rendering_part094.c - 5 个函数

// 函数: void FUN_1803216f0(longlong *param_1,undefined8 *param_2)
void FUN_1803216f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 extraout_XMM0_Da;
  longlong **pplStackX_10;
  longlong *plStackX_18;
  undefined4 *puStackX_20;
  undefined1 auStack_40 [16];
  
  lVar2 = *(longlong *)(_DAT_180c86870 + 0x3d8);
  pplStackX_10 = &plStackX_18;
  plStackX_18 = (longlong *)*param_1;
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x28))();
  }
  iVar7 = _Mtx_lock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x68,8,3);
  puVar10 = (undefined4 *)FUN_1803202a0(uVar9);
  puStackX_20 = puVar10;
  uVar8 = FUN_1800c17c0(extraout_XMM0_Da,plStackX_18 + 9);
  *puVar10 = uVar8;
  FUN_180627be0(puVar10 + 0x12,plStackX_18 + 9);
  uVar9 = param_2[1];
  *(undefined8 *)(puVar10 + 1) = *param_2;
  *(undefined8 *)(puVar10 + 3) = uVar9;
  uVar9 = param_2[3];
  *(undefined8 *)(puVar10 + 5) = param_2[2];
  *(undefined8 *)(puVar10 + 7) = uVar9;
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
  puVar10[9] = uVar8;
  puVar10[10] = uVar4;
  puVar10[0xb] = uVar5;
  puVar10[0xc] = uVar6;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar10[0xd] = *(undefined4 *)(param_2 + 6);
  puVar10[0xe] = uVar4;
  puVar10[0xf] = uVar5;
  puVar10[0x10] = uVar6;
  uVar8 = FUN_1800c17c0(uVar8,puVar10 + 0x12);
  *puVar10 = uVar8;
  puVar1 = (undefined8 *)(lVar2 + 0x848);
  iVar7 = *(int *)(lVar2 + 0x150);
  pplStackX_10 = (longlong **)CONCAT44(pplStackX_10._4_4_,iVar7);
  puVar11 = puVar1;
  puVar3 = *(undefined8 **)(lVar2 + 0x858);
  while (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 4) < iVar7) {
      puVar3 = (undefined8 *)*puVar3;
    }
    else {
      puVar11 = puVar3;
      puVar3 = (undefined8 *)puVar3[1];
    }
  }
  if ((puVar11 == puVar1) || (iVar7 < *(int *)(puVar11 + 4))) {
    puVar11 = (undefined8 *)FUN_18020d730(puVar1,auStack_40,puVar1,puVar11,&pplStackX_10);
    puVar11 = (undefined8 *)*puVar11;
  }
  FUN_18005ea90(puVar11 + 5,&puStackX_20);
  iVar7 = _Mtx_unlock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  if (plStackX_18 != (longlong *)0x0) {
    (**(code **)(*plStackX_18 + 0x38))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803218b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)
void FUN_1803218b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  int iStackX_8;
  undefined4 uStackX_c;
  undefined4 *puStackX_20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_58 = 0x3f800000;
  uStack_50 = 0;
  uStack_48 = 0x3f80000000000000;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  lVar2 = *(longlong *)(_DAT_180c86870 + 0x3d8);
  iVar4 = _Mtx_lock(lVar2 + 0xc0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0xa8,8,3);
  puVar6 = (undefined4 *)FUN_180320330(uVar5);
  uVar5 = param_1[1];
  *(undefined8 *)(puVar6 + 1) = *param_1;
  *(undefined8 *)(puVar6 + 3) = uVar5;
  uVar5 = param_1[3];
  *(undefined8 *)(puVar6 + 5) = param_1[2];
  *(undefined8 *)(puVar6 + 7) = uVar5;
  uVar5 = param_1[5];
  *(undefined8 *)(puVar6 + 9) = param_1[4];
  *(undefined8 *)(puVar6 + 0xb) = uVar5;
  uVar5 = param_1[7];
  *(undefined8 *)(puVar6 + 0xd) = param_1[6];
  *(undefined8 *)(puVar6 + 0xf) = uVar5;
  *(undefined8 *)(puVar6 + 0x11) = uStack_58;
  *(undefined8 *)(puVar6 + 0x13) = uStack_50;
  *(undefined8 *)(puVar6 + 0x15) = uStack_48;
  *(undefined8 *)(puVar6 + 0x17) = uStack_40;
  puVar6[0x19] = (undefined4)uStack_38;
  puVar6[0x1a] = uStack_38._4_4_;
  puVar6[0x1b] = (undefined4)uStack_30;
  puVar6[0x1c] = uStack_30._4_4_;
  puVar6[0x1d] = uStack_28;
  puVar6[0x1e] = uStack_24;
  puVar6[0x1f] = uStack_20;
  puVar6[0x20] = uStack_1c;
  puStackX_20 = puVar6;
  plVar7 = (longlong *)FUN_1800c1750((undefined4)uStack_38,&iStackX_8,param_3);
  uVar9 = FUN_180627be0(puVar6 + 0x22,*plVar7 + 0x48);
  if ((longlong *)CONCAT44(uStackX_c,iStackX_8) != (longlong *)0x0) {
    uVar9 = (**(code **)(*(longlong *)CONCAT44(uStackX_c,iStackX_8) + 0x38))();
  }
  uVar9 = FUN_1800c17c0(uVar9,puVar6 + 0x22);
  *puVar6 = uVar9;
  puVar1 = (undefined8 *)(lVar2 + 0x878);
  iStackX_8 = *(int *)(lVar2 + 0x150);
  puVar8 = puVar1;
  puVar3 = *(undefined8 **)(lVar2 + 0x888);
  while (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 4) < iStackX_8) {
      puVar3 = (undefined8 *)*puVar3;
    }
    else {
      puVar8 = puVar3;
      puVar3 = (undefined8 *)puVar3[1];
    }
  }
  if ((puVar8 == puVar1) || (iStackX_8 < *(int *)(puVar8 + 4))) {
    puVar8 = (undefined8 *)FUN_18020d730(puVar1,&uStack_58,puVar1,puVar8,&iStackX_8);
    puVar8 = (undefined8 *)*puVar8;
  }
  FUN_18005ea90(puVar8 + 5,&puStackX_20);
  iVar4 = _Mtx_unlock(lVar2 + 0xc0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180321a90(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)
void FUN_180321a90(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  int iStackX_8;
  undefined4 uStackX_c;
  undefined4 *puStackX_10;
  undefined1 auStack_30 [8];
  
  lVar2 = *(longlong *)(_DAT_180c86870 + 0x3d8);
  iVar7 = _Mtx_lock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  uVar8 = FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3);
  puVar9 = (undefined4 *)FUN_1803203f0(uVar8);
  uVar8 = param_1[1];
  *(undefined8 *)(puVar9 + 1) = *param_1;
  *(undefined8 *)(puVar9 + 3) = uVar8;
  uVar12 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  puVar9[5] = uVar12;
  puVar9[6] = uVar4;
  puVar9[7] = uVar5;
  puVar9[8] = uVar6;
  puStackX_10 = puVar9;
  plVar10 = (longlong *)FUN_1800c1750(uVar12,&iStackX_8,param_3);
  uVar12 = FUN_180627be0(puVar9 + 10,*plVar10 + 0x48);
  if ((longlong *)CONCAT44(uStackX_c,iStackX_8) != (longlong *)0x0) {
    uVar12 = (**(code **)(*(longlong *)CONCAT44(uStackX_c,iStackX_8) + 0x38))();
  }
  uVar12 = FUN_1800c17c0(uVar12,puVar9 + 10);
  *puVar9 = uVar12;
  puVar1 = (undefined8 *)(lVar2 + 0x8a8);
  iStackX_8 = *(int *)(lVar2 + 0x150);
  puVar11 = puVar1;
  puVar3 = *(undefined8 **)(lVar2 + 0x8b8);
  while (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 4) < iStackX_8) {
      puVar3 = (undefined8 *)*puVar3;
    }
    else {
      puVar11 = puVar3;
      puVar3 = (undefined8 *)puVar3[1];
    }
  }
  if ((puVar11 == puVar1) || (iStackX_8 < *(int *)(puVar11 + 4))) {
    puVar11 = (undefined8 *)FUN_18020d730(puVar1,auStack_30,puVar1,puVar11,&iStackX_8);
    puVar11 = (undefined8 *)*puVar11;
  }
  FUN_18005ea90(puVar11 + 5,&puStackX_10);
  iVar7 = _Mtx_unlock(lVar2 + 0xc0);
  if (iVar7 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_180321bf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined *puStack_58;
  longlong lStack_50;
  uint uStack_48;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  FUN_18032a200();
  *(longlong *)(param_1 + 0x2d8) = param_2;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x320c);
  }
  *(undefined4 *)(param_1 + 800) = uVar5;
  uVar3 = FUN_18062b1e0(_DAT_180c8ed18,0x560,8,3);
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  uStack_38 = *(undefined4 *)(lVar1 + 0x60b70);
  uStack_34 = *(undefined4 *)(lVar1 + 0x60b74);
  uStack_30 = 0;
  uStack_2c = 0x7f7fffff;
  uStack_28 = *(undefined4 *)(lVar1 + 0x60b68);
  uStack_24 = *(undefined4 *)(lVar1 + 0x60b6c);
  uStack_20 = 0;
  uStack_1c = 0x7f7fffff;
  uVar3 = FUN_1803a7870(uVar3,lVar1,0x41200000,&uStack_28,&uStack_38);
  *(undefined8 *)(param_1 + 0x528) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = 1;
  FUN_180627be0(param_1 + 0x2e0,param_2 + 0x4d8);
  FUN_180057110(param_1 + 0x300);
  uVar5 = FUN_18033d450(param_1 + 0x300,*(undefined8 *)(param_1 + 0x308),
                        *(undefined8 *)(param_2 + 0x60710),*(undefined8 *)(param_2 + 0x60718));
  FUN_18032d520(uVar5,&puStack_58);
  cVar2 = FUN_180624a00(&puStack_58);
  if (cVar2 == '\0') {
    FUN_180624910(&puStack_58);
  }
  uVar4 = (ulonglong)uStack_48;
  if (lStack_50 != 0) {
    FUN_1806277c0(param_1 + 0x208,uVar4);
  }
  if (uStack_48 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined8 *)(param_1 + 0x210),lStack_50,uVar4);
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    *(undefined1 *)(uVar4 + *(longlong *)(param_1 + 0x210)) = 0;
  }
  *(undefined4 *)(param_1 + 0x224) = uStack_3c;
  FUN_1803342d0(param_1,0,1);
  lVar1 = _DAT_180c86878;
  if (*(code **)(_DAT_180c86878 + 0x18) != (code *)0x0) {
    (**(code **)(_DAT_180c86878 + 0x18))(_DAT_180c86878 + 8,0,0);
  }
  *(undefined **)(lVar1 + 0x18) = &UNK_18033d410;
  *(undefined **)(lVar1 + 0x20) = &UNK_1801eb090;
  *(code **)(lVar1 + 8) = FUN_180321570;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x260);
  if (*(code **)(lVar1 + 0xb50) != (code *)0x0) {
    (**(code **)(lVar1 + 0xb50))(lVar1 + 0xb40,0,0);
  }
  *(undefined **)(lVar1 + 0xb50) = &UNK_18033d3d0;
  *(code **)(lVar1 + 0xb58) = FUN_18033d370;
  *(code **)(lVar1 + 0xb40) = FUN_1803216f0;
  puStack_58 = &UNK_180a3c3e0;
  if (lStack_50 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return &UNK_18098bc01;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_180321e80(longlong param_1,float param_2)

{
  ulonglong uVar1;
  
  *(undefined1 *)(param_1 + 0xae1) = 1;
  uVar1 = *(longlong *)(param_1 + 0x150) + 2;
  if (*(ulonglong *)(param_1 + 0x160) <= uVar1) {
    return uVar1 & 0xffffffffffffff00;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(_DAT_180c86928,&UNK_180a1b070,(double)param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803224b0(longlong param_1)
void FUN_1803224b0(longlong param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 auStackX_10 [2];
  uint uStackX_18;
  float fStackX_1c;
  char acStackX_20 [4];
  uint uStackX_24;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong alStack_70 [3];
  longlong *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  code *pcStack_40;
  
  uVar12 = 0xfffffffffffffffe;
  puVar5 = (undefined4 *)FUN_18062b1e0(_DAT_180c8ed18,0x908,8,3);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  uVar9 = 0;
  do {
    *(undefined8 *)(puVar5 + (longlong)(int)uVar9 * 2 + 2) = 0;
    LOCK();
    *(undefined1 *)((longlong)puVar5 + (longlong)(int)uVar9 + 0x808) = 1;
    UNLOCK();
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x100);
  LOCK();
  *puVar5 = 0;
  UNLOCK();
  puVar13 = puVar5;
  if (*(int *)(*(longlong *)(param_1 + 0x2d8) + 0x51d0) != 0) {
    FUN_1801b9a40(puVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x2d8) + 0x51d0));
    if (*(int *)(*(longlong *)(param_1 + 0x2d8) + 0x51d0) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)(*(longlong *)(param_1 + 0x2d8) + 0x51d0) - 1U >> 0xc) + 1;
    }
    if (iVar4 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(*(undefined8 *)(puVar5 + 2),*(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x51d8),
             0x20000);
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x958);
  iVar4 = *(int *)(param_1 + 0x150);
  bVar2 = true;
  puVar3 = puVar8;
  puVar6 = *(undefined8 **)(param_1 + 0x968);
  while (puVar6 != (undefined8 *)0x0) {
    bVar2 = iVar4 < *(int *)(puVar6 + 4);
    puVar3 = puVar6;
    if (iVar4 < *(int *)(puVar6 + 4)) {
      puVar6 = (undefined8 *)puVar6[1];
    }
    else {
      puVar6 = (undefined8 *)*puVar6;
    }
  }
  puVar6 = puVar3;
  if (bVar2) {
    if (puVar3 == *(undefined8 **)(param_1 + 0x960)) goto LAB_180322608;
    puVar6 = (undefined8 *)func_0x00018066b9a0(puVar3);
  }
  if (iVar4 <= *(int *)(puVar6 + 4)) {
    plStack_58 = (longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x60858);
    puStack_48 = &UNK_18033d2b0;
    pcStack_40 = FUN_18033d250;
    uStack_80 = SUB84(plStack_58,0);
    uStack_78 = (undefined4)param_1;
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    FUN_18015b810(uStack_80,0,
                  *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x60860) - *plStack_58 >> 3,0x10,
                  0xffffffffffffffff,&plStack_58,uVar12,puVar13);
    puVar8 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x20,8,3);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined4 *)(puVar8 + 3) = 3;
    FUN_1802d3000(*(undefined8 *)(*(longlong *)(param_1 + 0x2d8) + 0x260),puVar8);
    uVar11 = 0;
    iVar4 = _Mtx_lock(param_1 + 0x598);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    FUN_18033bd40(param_1 + 0x568,alStack_70);
    *(undefined8 **)(alStack_70[0] + 8) = puVar8;
    iVar4 = _Mtx_unlock(param_1 + 0x598);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    uVar9 = *(uint *)(param_1 + 0x150);
    fStackX_1c = (float)(*(longlong *)
                          (&DAT_180c8ed30 +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x2d8) + 0x5b98) * 8) %
                        1000000000) * 1e-05;
    uVar10 = (ulonglong)(uVar9 % *(uint *)(param_1 + 0x998));
    for (puVar1 = *(uint **)(*(longlong *)(param_1 + 0x990) + uVar10 * 8); uStackX_18 = uVar9,
        puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 2)) {
      if (uVar9 == *puVar1) goto LAB_18032285f;
    }
    puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,*(undefined1 *)(param_1 + 0x9b4));
    *puVar8 = CONCAT44(fStackX_1c,uStackX_18);
    puVar8[1] = 0;
    FUN_18066c220(param_1 + 0x9a8,acStackX_20,*(undefined4 *)(param_1 + 0x998),
                  *(undefined4 *)(param_1 + 0x9a0),CONCAT44(uVar11,1));
    if (acStackX_20[0] != '\0') {
      uVar10 = (ulonglong)(uVar9 % uStackX_24);
      FUN_18033c010(param_1 + 0x988,uStackX_24);
    }
    puVar8[1] = *(undefined8 *)(*(longlong *)(param_1 + 0x990) + uVar10 * 8);
    *(undefined8 **)(*(longlong *)(param_1 + 0x990) + uVar10 * 8) = puVar8;
    *(longlong *)(param_1 + 0x9a0) = *(longlong *)(param_1 + 0x9a0) + 1;
LAB_18032285f:
    auStackX_10[0] = *(undefined4 *)(param_1 + 0x150);
    FUN_1800571e0(param_1 + 0x230,auStackX_10);
    return;
  }
LAB_180322608:
  lVar7 = FUN_18062b420(_DAT_180c8ed18,0x30,*(undefined1 *)(param_1 + 0x980));
  uStack_78 = SUB84(puVar5,0);
  uStack_74 = (undefined4)((ulonglong)puVar5 >> 0x20);
  *(int *)(lVar7 + 0x20) = iVar4;
  *(undefined4 *)(lVar7 + 0x24) = uStack_7c;
  *(undefined4 *)(lVar7 + 0x28) = uStack_78;
  *(undefined4 *)(lVar7 + 0x2c) = uStack_74;
  if ((puVar3 == puVar8) || (uVar9 = 1, iVar4 < *(int *)(puVar3 + 4))) {
    uVar9 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar7,puVar3,puVar8,uVar9);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180322890(longlong param_1,longlong param_2,int param_3)
void FUN_180322890(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int *piVar12;
  undefined *puVar13;
  longlong *plVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  bool bVar23;
  undefined1 auStack_f8 [32];
  ulonglong uStack_d8;
  undefined4 auStack_c8 [2];
  longlong lStack_c0;
  undefined4 *puStack_b8;
  ulonglong auStack_b0 [3];
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  int iStack_70;
  undefined1 auStack_68 [32];
  ulonglong uStack_48;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  if (((*(byte *)(param_2 + 0x2e8) & 0xb) == 0xb) && ((*(uint *)(param_2 + 0x2ac) >> 0x12 & 1) != 0)
     ) {
    bVar23 = true;
  }
  else {
    bVar23 = false;
  }
  lStack_98 = param_1;
  if ((param_3 != -1) || (bVar23)) {
    uVar4 = FUN_18032b4a0(param_1,param_2);
    auStack_c8[0] = uVar4;
    lStack_90 = FUN_18032b680(param_1,uVar4);
    if (param_3 == -1) {
      puVar7 = (undefined4 *)(param_1 + 0x4d8);
      puStack_b8 = puVar7;
      iVar5 = _Mtx_lock(puVar7);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      uStack_d8 = (ulonglong)*(uint *)(param_1 + 0x150);
      lStack_c0 = CONCAT44(lStack_c0._4_4_,*(uint *)(param_1 + 0x150));
      FUN_18033af10(param_1 + 0x4a8,auStack_b0);
      FUN_180239390(auStack_b0[0] + 8,auStack_b0,auStack_c8);
      iVar5 = _Mtx_unlock(puVar7);
      uVar4 = auStack_c8[0];
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
        uVar4 = auStack_c8[0];
      }
    }
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x1b0,8,3);
    puVar7 = (undefined4 *)FUN_180320c80(uVar6);
    *puVar7 = 1;
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(puVar7 + 1) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(puVar7 + 3) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(puVar7 + 5) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(puVar7 + 7) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(puVar7 + 9) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(puVar7 + 0xb) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(puVar7 + 0xd) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(puVar7 + 0xf) = uVar6;
    puVar7[0x2a] = *(undefined4 *)(param_2 + 700);
    puVar7[0x2b] = *(undefined4 *)(param_2 + 0x2cc);
    *(undefined1 *)(puVar7 + 0x13) = *(undefined1 *)(param_2 + 0x2e5);
    *(bool *)(puVar7 + 0x2c) = (*(byte *)(param_2 + 0x2e8) & 0xb) == 0xb;
    puVar7[0x11] = uVar4;
    puVar7[0x12] = param_3;
    puVar13 = &DAT_18098bc73;
    if (*(undefined **)(param_2 + 0x290) != (undefined *)0x0) {
      puVar13 = *(undefined **)(param_2 + 0x290);
    }
    puStack_b8 = puVar7;
    (**(code **)(*(longlong *)(puVar7 + 0x14) + 0x10))(puVar7 + 0x14,puVar13);
    uVar18 = 0;
    lVar21 = *(longlong *)(param_2 + 0x200);
    uVar19 = uVar18;
    if (*(longlong *)(param_2 + 0x208) - lVar21 >> 3 != 0) {
      do {
        lVar21 = *(longlong *)(*(longlong *)(lVar21 + uVar18) + 0x10);
        puStack_80 = &UNK_18098bc80;
        puStack_78 = auStack_68;
        auStack_68[0] = 0;
        iStack_70 = 0xb;
        strcpy_s(auStack_68,0x20,&UNK_180a09a40);
        iVar5 = *(int *)(lVar21 + 0x18);
        if (iVar5 == iStack_70) {
          if (iVar5 == 0) {
LAB_180322b1e:
            if (iStack_70 != 0) goto LAB_180322b26;
            bVar23 = true;
          }
          else {
            pcVar8 = *(char **)(lVar21 + 0x10);
            lVar21 = (longlong)puStack_78 - (longlong)pcVar8;
            do {
              cVar2 = *pcVar8;
              cVar3 = pcVar8[lVar21];
              if (cVar2 != cVar3) break;
              pcVar8 = pcVar8 + 1;
            } while (cVar3 != '\0');
            bVar23 = cVar2 == cVar3;
          }
        }
        else {
          if (iVar5 == 0) goto LAB_180322b1e;
LAB_180322b26:
          bVar23 = false;
        }
        puStack_80 = &UNK_18098bcb0;
        if (bVar23) {
          lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x200) + (longlong)(int)uVar19 * 8);
          puVar7[0x2e] = (float)*(double *)(lVar21 + 0x78);
          puVar7[0x2d] = (float)*(double *)(lVar21 + 0x70);
          break;
        }
        uVar20 = (int)uVar19 + 1;
        uVar18 = uVar18 + 8;
        lVar21 = *(longlong *)(param_2 + 0x200);
        uVar19 = (ulonglong)uVar20;
      } while ((ulonglong)(longlong)(int)uVar20 <
               (ulonglong)(*(longlong *)(param_2 + 0x208) - lVar21 >> 3));
    }
    FUN_180322e90(param_1,puVar7 + 0x30,*(undefined8 *)(param_2 + 0x260));
    uVar18 = *(longlong *)(param_2 + 0xf8) - *(longlong *)(param_2 + 0xf0) >> 3;
    puVar1 = (ulonglong *)(puVar7 + 100);
    uVar19 = uVar18 & 0xffffffff;
    auStack_b0[0] = uVar19;
    FUN_1800e8140(puVar1,uVar18 & 0xffffffff);
    puVar22 = puVar7;
    if ((int)uVar18 != 0) {
      lVar21 = 0;
      do {
        lStack_c0 = 0;
        FUN_180323340(param_1,&lStack_c0,*(undefined8 *)(lVar21 + *(longlong *)(param_2 + 0xf0)),
                      0xffffffff);
        lVar11 = lStack_c0;
        if (lStack_c0 != 0) {
          plVar16 = *(longlong **)(puVar7 + 0x66);
          if (plVar16 < *(longlong **)(puVar7 + 0x68)) {
            *(longlong **)(puVar7 + 0x66) = plVar16 + 1;
            *plVar16 = lStack_c0;
          }
          else {
            plVar14 = (longlong *)*puVar1;
            lVar9 = (longlong)plVar16 - (longlong)plVar14 >> 3;
            if (lVar9 == 0) {
              lVar9 = 1;
LAB_180322c61:
              plVar10 = (longlong *)
                        FUN_18062b420(_DAT_180c8ed18,lVar9 * 8,*(undefined1 *)(puVar7 + 0x6a));
              plVar16 = *(longlong **)(puVar7 + 0x66);
              plVar14 = (longlong *)*puVar1;
            }
            else {
              lVar9 = lVar9 * 2;
              if (lVar9 != 0) goto LAB_180322c61;
              plVar10 = (longlong *)0x0;
            }
            if (plVar14 != plVar16) {
                    // WARNING: Subroutine does not return
              memmove(plVar10,plVar14,(longlong)plVar16 - (longlong)plVar14);
            }
            *plVar10 = lVar11;
            if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *puVar1 = (ulonglong)plVar10;
            *(longlong **)(puVar7 + 0x66) = plVar10 + 1;
            *(longlong **)(puVar7 + 0x68) = plVar10 + lVar9;
            uVar19 = auStack_b0[0];
            param_1 = lStack_98;
          }
        }
        lVar21 = lVar21 + 8;
        uVar19 = uVar19 - 1;
        puVar22 = puStack_b8;
        uVar4 = auStack_c8[0];
        auStack_b0[0] = uVar19;
      } while (uVar19 != 0);
    }
    uVar18 = *(longlong *)(param_2 + 0x1c8) - *(longlong *)(param_2 + 0x1c0) >> 3;
    puVar1 = (ulonglong *)(puVar22 + 0x5c);
    uVar19 = uVar18 & 0xffffffff;
    auStack_b0[0] = uVar19;
    FUN_18014e8b0(puVar1,uVar18 & 0xffffffff);
    if ((int)uVar18 != 0) {
      lVar21 = 0;
      do {
        iVar5 = FUN_180322890(param_1,*(undefined8 *)(lVar21 + *(longlong *)(param_2 + 0x1c0)),uVar4
                             );
        if (iVar5 != -1) {
          piVar17 = *(int **)(puVar22 + 0x5e);
          if (piVar17 < *(int **)(puVar22 + 0x60)) {
            *(int **)(puVar22 + 0x5e) = piVar17 + 1;
            *piVar17 = iVar5;
          }
          else {
            piVar15 = (int *)*puVar1;
            lVar11 = (longlong)piVar17 - (longlong)piVar15 >> 2;
            if (lVar11 == 0) {
              lVar11 = 1;
LAB_180322d80:
              piVar12 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar11 * 4,
                                             *(undefined1 *)(puVar22 + 0x62));
              piVar17 = *(int **)(puVar22 + 0x5e);
              piVar15 = (int *)*puVar1;
            }
            else {
              lVar11 = lVar11 * 2;
              if (lVar11 != 0) goto LAB_180322d80;
              piVar12 = (int *)0x0;
            }
            if (piVar15 != piVar17) {
                    // WARNING: Subroutine does not return
              memmove(piVar12,piVar15,(longlong)piVar17 - (longlong)piVar15);
            }
            *piVar12 = iVar5;
            if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *puVar1 = (ulonglong)piVar12;
            *(int **)(puVar22 + 0x5e) = piVar12 + 1;
            *(int **)(puVar22 + 0x60) = piVar12 + lVar11;
            uVar19 = auStack_b0[0];
            param_1 = lStack_98;
          }
        }
        lVar21 = lVar21 + 8;
        uVar19 = uVar19 - 1;
        uVar4 = auStack_c8[0];
        auStack_b0[0] = uVar19;
      } while (uVar19 != 0);
      auStack_b0[0] = 0;
      puVar22 = puStack_b8;
    }
    lVar11 = lStack_90;
    uVar20 = *(uint *)(param_1 + 0x150);
    lStack_c0 = CONCAT44(lStack_c0._4_4_,uVar20);
    lVar21 = lStack_90 + 0x30;
    lStack_90 = lVar21;
    iVar5 = _Mtx_lock(lVar21);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
    uStack_d8 = (ulonglong)uVar20;
    FUN_18033bd40(lVar11,auStack_b0);
    *(undefined4 **)(auStack_b0[0] + 8) = puVar22;
    iVar5 = _Mtx_unlock(lVar21);
    if (iVar5 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar5);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



