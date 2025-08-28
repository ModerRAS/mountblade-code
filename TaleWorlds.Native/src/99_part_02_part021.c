#include "TaleWorlds.Native.Split.h"

// 99_part_02_part021.c - 9 个函数

// 函数: void FUN_1800fa160(undefined8 param_1)
void FUN_1800fa160(undefined8 param_1)

{
  undefined1 auStack_d8 [32];
  undefined4 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_d8;
  uStack_b8 = 0;
  uStack_a0 = param_1;
                    // WARNING: Subroutine does not return
  memset(auStack_98,0,0x80);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1800fa230(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined *puStack_40;
  byte *pbStack_38;
  int iStack_30;
  
  FUN_180627ae0(&puStack_40,param_4,param_3,param_4,0xfffffffffffffffe);
  bVar2 = true;
  puVar5 = (undefined8 *)param_1[2];
  puVar3 = param_1;
  while (puVar5 != (undefined8 *)0x0) {
    puVar3 = puVar5;
    if (*(int *)(puVar5 + 6) == 0) {
      bVar2 = false;
LAB_1800fa290:
      puVar5 = (undefined8 *)*puVar5;
    }
    else {
      if (iStack_30 == 0) {
        bVar2 = true;
      }
      else {
        pbVar9 = (byte *)puVar5[5];
        lVar6 = (longlong)pbStack_38 - (longlong)pbVar9;
        do {
          bVar1 = *pbVar9;
          uVar4 = (uint)pbVar9[lVar6];
          if (bVar1 != uVar4) break;
          pbVar9 = pbVar9 + 1;
        } while (uVar4 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar4);
      }
      if (!bVar2) goto LAB_1800fa290;
      puVar5 = (undefined8 *)puVar5[1];
    }
  }
  puVar5 = puVar3;
  if (bVar2) {
    if (puVar3 != (undefined8 *)param_1[1]) {
      puVar5 = (undefined8 *)func_0x00018066b9a0(puVar3);
      goto LAB_1800fa2b9;
    }
  }
  else {
LAB_1800fa2b9:
    if (iStack_30 == 0) {
LAB_1800fa3e0:
      *param_2 = puVar5;
      *(undefined1 *)(param_2 + 1) = 0;
      puStack_40 = &UNK_180a3c3e0;
      if (pbStack_38 != (byte *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      return param_2;
    }
    if (*(int *)(puVar5 + 6) != 0) {
      pbVar9 = pbStack_38;
      do {
        bVar1 = *pbVar9;
        uVar4 = (uint)pbVar9[puVar5[5] - (longlong)pbStack_38];
        if (bVar1 != uVar4) break;
        pbVar9 = pbVar9 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_1800fa3e0;
    }
  }
  lVar6 = FUN_18062b420(_DAT_180c8ed18,0x48,*(undefined1 *)(param_1 + 5));
  FUN_180627ae0(lVar6 + 0x20,param_4);
  *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(param_4 + 0x20);
  if (puVar3 != param_1) {
    if (*(int *)(puVar3 + 6) == 0) {
LAB_1800fa357:
      uVar8 = 1;
      goto LAB_1800fa3a0;
    }
    if (iStack_30 != 0) {
      pbVar9 = (byte *)puVar3[5];
      lVar7 = (longlong)pbStack_38 - (longlong)pbVar9;
      do {
        bVar1 = *pbVar9;
        uVar4 = (uint)pbVar9[lVar7];
        if (bVar1 != uVar4) break;
        pbVar9 = pbVar9 + 1;
      } while (uVar4 != 0);
      if ((int)(bVar1 - uVar4) < 1) goto LAB_1800fa357;
    }
  }
  uVar8 = 0;
LAB_1800fa3a0:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar6,puVar3,param_1,uVar8);
}



longlong FUN_1800fa440(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  *(undefined4 *)(param_1 + 0x30) = param_2[4];
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = 0x7f7fffff;
  uStack_18 = param_2[3];
  uStack_14 = *param_2;
  uStack_10 = param_2[1];
  uStack_c = param_2[2];
  FUN_18063b5f0(uStack_10,&uStack_18);
  return param_1;
}






// 函数: void FUN_1800fa4c0(longlong param_1)
void FUN_1800fa4c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  longlong *plVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if ((undefined *)*puVar1 == &UNK_180a24148) {
    LOCK();
    *(undefined1 *)(puVar1[5] + 0xd4) = 1;
    UNLOCK();
    if ((undefined *)*puVar1 == &UNK_180a24148) {
      (**(code **)(*(longlong *)puVar1[2] + 0x70))();
    }
    else {
      (**(code **)((undefined *)*puVar1 + 0x18))(puVar1);
    }
  }
  else {
    (**(code **)((undefined *)*puVar1 + 8))(puVar1);
  }
  puVar2 = (undefined *)**(undefined8 **)(param_1 + 0x20);
  if (puVar2 == &UNK_180a24148) {
    plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x20))[3];
    if (plVar3 != (longlong *)0x0) {
      if (*(code **)(*plVar3 + 0x20) == (code *)&UNK_1803cfb60) {
                    // WARNING: Could not recover jumptable at 0x0001800fa543. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)plVar3[2] + 0x80))();
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001800fa573. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*plVar3 + 0x20))(plVar3);
      return;
    }
  }
  else {
    (**(code **)(puVar2 + 0x30))();
  }
  return;
}



undefined8 *
FUN_1800fa580(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_1800fa5d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a05088;
  *param_1 = &UNK_180a05068;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}






// 函数: void FUN_1800fa620(undefined8 param_1,undefined8 *param_2)
void FUN_1800fa620(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  uStack_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  lVar1 = FUN_180084ae0(&uStack_48);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  lVar1 = FUN_18063b470(&uStack_78,&uStack_48);
  uStack_68 = uStack_74;
  uStack_60 = uStack_6c;
  uStack_64 = uStack_70;
  uStack_58 = uStack_18;
  uStack_5c = uStack_78;
  uStack_50 = uStack_10;
  uStack_54 = uStack_14;
  (**(code **)(lVar1 + 0x98))(uVar2,&uStack_68,1);
  return;
}



undefined8 FUN_1800fa6f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [32];
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                    (*(longlong **)(param_1 + 0x28),auStack_28);
  FUN_1800fa440(param_2,uVar1);
  return param_2;
}



undefined8 FUN_1800fa720(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 200))();
  return param_2;
}



bool FUN_1800fa760(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&UNK_180a05010);
  plVar3 = (longlong *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plVar1;
  }
  return plVar3 != (longlong *)0x0;
}



byte FUN_1800fa790(longlong param_1)

{
  byte *pbVar1;
  undefined1 auStackX_8 [32];
  
  pbVar1 = (byte *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x60))
                             (*(longlong **)(param_1 + 0x28),auStackX_8);
  return ~(*pbVar1 >> 3) & 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fa7c0(longlong param_1,undefined4 *param_2)
void FUN_1800fa7c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_418 [32];
  undefined4 uStack_3f8;
  undefined2 *puStack_3f0;
  undefined4 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined2 auStack_3d8 [4];
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  undefined1 auStack_370 [16];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined2 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [48];
  undefined8 auStack_2c8 [64];
  ulonglong uStack_c8;
  
  uStack_c8 = _DAT_180bf00a8 ^ (ulonglong)auStack_418;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))();
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))
            (*(longlong **)(param_1 + 0x28),auStack_2c8,0x40,0);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28),&fStack_3b0);
  uStack_3c0 = *param_2;
  uStack_3bc = param_2[1];
  uVar1 = param_2[8];
  uStack_3b8 = param_2[2];
  uStack_3d0 = param_2[4];
  uStack_3cc = param_2[5];
  uStack_3c8 = param_2[6];
  if (0 < (longlong)iVar2) {
    lVar6 = 0;
    do {
      uStack_348 = 0;
      uStack_340 = 0;
      uStack_338 = 0xffffffff;
      uStack_330 = 0;
      uStack_32c = 0;
      uStack_328 = 0;
      uStack_320 = 0;
      uStack_318 = 0;
      uStack_314 = 0x7f7fffff;
      uStack_310 = 0;
      uStack_30c = 0;
      (**(code **)(*(longlong *)auStack_2c8[lVar6] + 0x98))
                ((longlong *)auStack_2c8[lVar6],auStack_370);
      auStack_3d8[0] = 0x40;
      puVar4 = (undefined4 *)FUN_1800fcb90(&fStack_3b0,auStack_308,auStack_370);
      fVar10 = fStack_360 * 2.0;
      fVar8 = fStack_35c * 2.0;
      fVar11 = fStack_358 * 2.0;
      fVar9 = fStack_3a4 * fStack_3a4 - 0.5;
      fVar7 = fStack_3ac * fVar8 + fStack_3b0 * fVar10 + fStack_3a8 * fVar11;
      fStack_380 = fStack_3a0 +
                   (fStack_3ac * fVar11 - fStack_3a8 * fVar8) * fStack_3a4 + fVar9 * fVar10 +
                   fStack_3b0 * fVar7;
      uStack_390 = *puVar4;
      uStack_38c = puVar4[1];
      uStack_388 = puVar4[2];
      fStack_37c = fStack_39c +
                   (fStack_3a8 * fVar10 - fStack_3b0 * fVar11) * fStack_3a4 + fVar9 * fVar8 +
                   fStack_3ac * fVar7;
      fStack_378 = fStack_398 +
                   (fStack_3b0 * fVar8 - fStack_3ac * fVar10) * fStack_3a4 + fVar9 * fVar11 +
                   fStack_3a8 * fVar7;
      uStack_384 = puVar4[3];
      uVar5 = (**(code **)(*(longlong *)auStack_2c8[lVar6] + 0x48))
                        ((longlong *)auStack_2c8[lVar6],auStack_2f8);
      puStack_3e0 = &uStack_348;
      puStack_3f0 = auStack_3d8;
      uStack_3e8 = 1;
      uStack_3f8 = uVar1;
      iVar3 = _raycast_PxGeometryQuery_physx__SAIAEBVPxVec3_2_0AEBVPxGeometry_2_AEBVPxTransform_2_MV__PxFlags_W4Enum_PxHitFlag_physx__G_2_IPEIAUPxRaycastHit_2__Z
                        (&uStack_3c0,&uStack_3d0,uVar5,&uStack_390);
      if (iVar3 != 0) break;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_c8 ^ (ulonglong)auStack_418);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fab40(longlong param_1,undefined4 *param_2)
void FUN_1800fab40(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_428 [32];
  undefined4 uStack_408;
  undefined2 *puStack_400;
  undefined4 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined2 auStack_3e8 [4];
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  undefined1 auStack_380 [16];
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined2 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [48];
  undefined8 auStack_2d8 [64];
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_428;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))
                    (*(longlong **)(param_1 + 0x28),auStack_2d8,0x40,0);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28),&fStack_3c0);
  uStack_3d0 = *param_2;
  uStack_3cc = param_2[1];
  uVar1 = param_2[8];
  uStack_3c8 = param_2[2];
  uStack_3e0 = param_2[4];
  uStack_3dc = param_2[5];
  uStack_3d8 = param_2[6];
  iVar7 = 0;
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_348 = 0xffffffff;
      uStack_340 = 0;
      uStack_33c = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_324 = 0x7f7fffff;
      uStack_320 = 0;
      uStack_31c = 0;
      (**(code **)(*(longlong *)auStack_2d8[lVar6] + 0x98))
                ((longlong *)auStack_2d8[lVar6],auStack_380);
      auStack_3e8[0] = 0x40;
      puVar4 = (undefined4 *)FUN_1800fcb90(&fStack_3c0,auStack_318,auStack_380);
      fVar11 = fStack_370 * 2.0;
      fVar9 = fStack_36c * 2.0;
      fVar12 = fStack_368 * 2.0;
      fVar10 = fStack_3b4 * fStack_3b4 - 0.5;
      fVar8 = fStack_3bc * fVar9 + fStack_3c0 * fVar11 + fStack_3b8 * fVar12;
      fStack_390 = fStack_3b0 +
                   (fStack_3bc * fVar12 - fStack_3b8 * fVar9) * fStack_3b4 + fVar10 * fVar11 +
                   fStack_3c0 * fVar8;
      uStack_3a0 = *puVar4;
      uStack_39c = puVar4[1];
      uStack_398 = puVar4[2];
      fStack_38c = fStack_3ac +
                   (fStack_3b8 * fVar11 - fStack_3c0 * fVar12) * fStack_3b4 + fVar10 * fVar9 +
                   fStack_3bc * fVar8;
      fStack_388 = fStack_3a8 +
                   (fStack_3c0 * fVar9 - fStack_3bc * fVar11) * fStack_3b4 + fVar10 * fVar12 +
                   fStack_3b8 * fVar8;
      uStack_394 = puVar4[3];
      uVar5 = (**(code **)(*(longlong *)auStack_2d8[lVar6] + 0x48))
                        ((longlong *)auStack_2d8[lVar6],auStack_308);
      puStack_3f0 = &uStack_358;
      puStack_400 = auStack_3e8;
      uStack_3f8 = 1;
      uStack_408 = uVar1;
      iVar3 = _raycast_PxGeometryQuery_physx__SAIAEBVPxVec3_2_0AEBVPxGeometry_2_AEBVPxTransform_2_MV__PxFlags_W4Enum_PxHitFlag_physx__G_2_IPEIAUPxRaycastHit_2__Z
                        (&uStack_3d0,&uStack_3e0,uVar5,&uStack_3a0);
      if (iVar3 != 0) {
        (**(code **)(*(longlong *)auStack_2d8[iVar7] + 0x38))();
        break;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_428);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800faf30(longlong param_1,undefined4 *param_2,undefined4 param_3)
void FUN_1800faf30(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_448 [32];
  undefined8 uStack_428;
  undefined4 *puStack_420;
  undefined8 *puStack_418;
  undefined2 *puStack_410;
  undefined4 uStack_408;
  undefined2 auStack_3f8 [2];
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  undefined1 auStack_398 [16];
  float fStack_388;
  float fStack_384;
  float fStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined2 uStack_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [48];
  undefined8 auStack_2d8 [64];
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_448;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))
                    (*(longlong **)(param_1 + 0x28),auStack_2d8,0x40,0);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28),&fStack_3d8);
  uStack_3e8 = param_2[4];
  uStack_3e4 = param_2[5];
  uStack_3e0 = param_2[6];
  uStack_3f4 = param_2[8];
  uStack_364 = param_2[1];
  uStack_3f0 = 0;
  uStack_378 = 0;
  uStack_370 = 0x3f80000000000000;
  uStack_368 = *param_2;
  uStack_360 = param_2[2];
  iVar5 = 0;
  uStack_3ec = param_3;
  if (0 < (longlong)iVar2) {
    lVar4 = 0;
    do {
      uStack_348 = 0xffffffff;
      uStack_358 = 0;
      uStack_350 = 0;
      uStack_340 = 0;
      uStack_33c = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      uStack_324 = 0x7f7fffff;
      (**(code **)(*(longlong *)auStack_2d8[lVar4] + 0x98))
                ((longlong *)auStack_2d8[lVar4],auStack_398);
      auStack_3f8[0] = 0x40;
      puVar3 = (undefined4 *)FUN_1800fcb90(&fStack_3d8,auStack_318,auStack_398);
      fVar9 = fStack_388 * 2.0;
      fVar7 = fStack_384 * 2.0;
      fVar10 = fStack_380 * 2.0;
      fVar8 = fStack_3cc * fStack_3cc - 0.5;
      fVar6 = fStack_3d4 * fVar7 + fStack_3d8 * fVar9 + fStack_3d0 * fVar10;
      fStack_3a8 = fStack_3c8 +
                   (fStack_3d4 * fVar10 - fStack_3d0 * fVar7) * fStack_3cc + fVar8 * fVar9 +
                   fStack_3d8 * fVar6;
      uStack_3b8 = *puVar3;
      uStack_3b4 = puVar3[1];
      uStack_3b0 = puVar3[2];
      fStack_3a4 = fStack_3c4 +
                   (fStack_3d0 * fVar9 - fStack_3d8 * fVar10) * fStack_3cc + fVar8 * fVar7 +
                   fStack_3d4 * fVar6;
      fStack_3a0 = fStack_3c0 +
                   (fStack_3d8 * fVar7 - fStack_3d4 * fVar9) * fStack_3cc + fVar8 * fVar10 +
                   fStack_3d0 * fVar6;
      uStack_3ac = puVar3[3];
      uStack_428 = (**(code **)(*(longlong *)auStack_2d8[lVar4] + 0x48))
                             ((longlong *)auStack_2d8[lVar4],auStack_308);
      puStack_410 = auStack_3f8;
      uStack_408 = 0;
      puStack_418 = &uStack_358;
      puStack_420 = &uStack_3b8;
      cVar1 = _sweep_PxGeometryQuery_physx__SA_NAEBVPxVec3_2_MAEBVPxGeometry_2_AEBVPxTransform_2_12AEAUPxSweepHit_2_V__PxFlags_W4Enum_PxHitFlag_physx__G_2_M_Z
                        (&uStack_3e8,uStack_3f4,&uStack_3f0,&uStack_378);
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)auStack_2d8[iVar5] + 0x38))();
        break;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_448);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fb350(longlong param_1,float *param_2)
void FUN_1800fb350(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_538 [32];
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  undefined1 auStack_500 [12];
  undefined4 uStack_4f4;
  undefined1 auStack_4e4 [60];
  undefined8 auStack_4a8 [128];
  ulonglong uStack_a8;
  
  uStack_a8 = _DAT_180bf00a8 ^ (ulonglong)auStack_538;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))();
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8))
            (*(longlong **)(param_1 + 0x28),auStack_4a8,0x80,0);
  fVar6 = 3.4028235e+38;
  fVar8 = -3.4028235e+38;
  fVar10 = 3.4028235e+38;
  fVar12 = 3.4028235e+38;
  fVar14 = -3.4028235e+38;
  fVar16 = -3.4028235e+38;
  if (0 < iVar2) {
    lVar5 = 0;
    fVar7 = fVar6;
    fVar9 = fVar8;
    fVar11 = fVar10;
    fVar13 = fVar12;
    fVar15 = fVar14;
    fVar17 = fVar16;
    do {
      plVar1 = (longlong *)auStack_4a8[lVar5];
      uVar3 = FUN_1800fc980(auStack_500,plVar1,*(undefined8 *)(param_1 + 0x28));
      uVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,auStack_4e4);
      _getWorldBounds_PxGeometryQuery_physx__SA_AVPxBounds3_2_AEBVPxGeometry_2_AEBVPxTransform_2_M_Z
                (&fStack_518,uVar4,uVar3,0x3f8147ae);
      lVar5 = lVar5 + 1;
      fVar12 = fStack_510;
      if (fVar13 <= fStack_510) {
        fVar12 = fVar13;
      }
      fVar10 = fStack_514;
      if (fVar11 <= fStack_514) {
        fVar10 = fVar11;
      }
      fVar6 = fStack_518;
      if (fVar7 <= fStack_518) {
        fVar6 = fVar7;
      }
      fVar14 = fStack_508;
      if (fStack_508 <= fVar15) {
        fVar14 = fVar15;
      }
      fVar16 = fStack_504;
      if (fStack_504 <= fVar17) {
        fVar16 = fVar17;
      }
      fVar8 = fStack_50c;
      if (fStack_50c <= fVar9) {
        fVar8 = fVar9;
      }
      fVar7 = fVar6;
      fVar9 = fVar8;
      fVar11 = fVar10;
      fVar13 = fVar12;
      fVar15 = fVar14;
      fVar17 = fVar16;
    } while (lVar5 < iVar2);
  }
  fStack_50c = 3.4028235e+38;
  uStack_4f4 = 0x7f7fffff;
  *param_2 = fVar6;
  param_2[1] = fVar10;
  param_2[2] = fVar12;
  param_2[3] = 3.4028235e+38;
  param_2[4] = fVar8;
  param_2[5] = fVar14;
  param_2[6] = fVar16;
  param_2[7] = 3.4028235e+38;
  FUN_1800b9f60(param_2);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_538);
}






// 函数: void FUN_1800fb3f3(void)
void FUN_1800fb3f3(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_R12;
  longlong lVar4;
  longlong unaff_R15;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined4 uStack0000000000000044;
  
  lVar4 = 0;
  do {
    plVar1 = *(longlong **)(unaff_RBP + -0x70 + lVar4 * 8);
    uVar2 = FUN_1800fc980(&stack0x00000038,plVar1,*(undefined8 *)(unaff_R15 + 0x28));
    uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1,&stack0x00000054);
    _getWorldBounds_PxGeometryQuery_physx__SA_AVPxBounds3_2_AEBVPxGeometry_2_AEBVPxTransform_2_M_Z
              (&fStackX_20,uVar3,uVar2,0x3f8147ae);
    lVar4 = lVar4 + 1;
    fVar5 = fStack0000000000000028;
    if (unaff_XMM9_Da <= fStack0000000000000028) {
      fVar5 = unaff_XMM9_Da;
    }
    fVar9 = fStackX_24;
    if (unaff_XMM8_Da <= fStackX_24) {
      fVar9 = unaff_XMM8_Da;
    }
    fVar6 = fStackX_20;
    if (unaff_XMM6_Da <= fStackX_20) {
      fVar6 = unaff_XMM6_Da;
    }
    fVar10 = fStack0000000000000030;
    if (fStack0000000000000030 <= unaff_XMM10_Da) {
      fVar10 = unaff_XMM10_Da;
    }
    fVar7 = fStack0000000000000034;
    if (fStack0000000000000034 <= unaff_XMM11_Da) {
      fVar7 = unaff_XMM11_Da;
    }
    fVar8 = fStack000000000000002c;
    if (fStack000000000000002c <= unaff_XMM7_Da) {
      fVar8 = unaff_XMM7_Da;
    }
    unaff_XMM6_Da = fVar6;
    unaff_XMM7_Da = fVar8;
    unaff_XMM8_Da = fVar9;
    unaff_XMM9_Da = fVar5;
    unaff_XMM10_Da = fVar10;
    unaff_XMM11_Da = fVar7;
  } while (lVar4 < unaff_R12);
  uStack0000000000000044 = 0x7f7fffff;
  *unaff_RSI = fVar6;
  unaff_RSI[1] = fVar9;
  unaff_RSI[2] = fVar5;
  unaff_RSI[3] = 3.4028235e+38;
  unaff_RSI[4] = fVar8;
  unaff_RSI[5] = fVar10;
  unaff_RSI[6] = fVar7;
  unaff_RSI[7] = 3.4028235e+38;
  FUN_1800b9f60();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x390) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1800fb4d7(void)
void FUN_1800fb4d7(void)

{
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM11_Da;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000044;
  
  uStack000000000000002c = 0x7f7fffff;
  uStack0000000000000044 = 0x7f7fffff;
  *unaff_RSI = unaff_XMM6_Da;
  unaff_RSI[1] = unaff_XMM8_Da;
  unaff_RSI[2] = unaff_XMM9_Da;
  unaff_RSI[3] = 0x7f7fffff;
  unaff_RSI[4] = unaff_XMM7_Da;
  unaff_RSI[5] = unaff_XMM10_Da;
  unaff_RSI[6] = unaff_XMM11_Da;
  unaff_RSI[7] = 0x7f7fffff;
  FUN_1800b9f60();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x390) ^ (ulonglong)&stack0x00000000);
}



float * FUN_1800fb580(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined1 auStack_e8 [28];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [180];
  
  plVar6 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x20) + 8);
  uStack_f8 = 2;
  fStack_f0 = 0.0;
  (**(code **)(*plVar6 + 0x60))(plVar6,&uStack_f8);
  pfVar7 = (float *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                              (*(longlong **)(param_1 + 0x28),auStack_e8);
  lVar8 = (**(code **)(*plVar6 + 0x98))(plVar6,auStack_bc);
  pfVar9 = (float *)FUN_1800fcb90(pfVar7,auStack_cc,lVar8);
  fVar10 = pfVar7[3];
  fVar11 = pfVar7[1];
  fVar22 = *pfVar7;
  fVar1 = pfVar7[2];
  fVar18 = *(float *)(lVar8 + 0x10) + *(float *)(lVar8 + 0x10);
  fVar14 = *(float *)(lVar8 + 0x14) + *(float *)(lVar8 + 0x14);
  fVar16 = *(float *)(lVar8 + 0x18) + *(float *)(lVar8 + 0x18);
  fVar15 = fVar10 * fVar10 - 0.5;
  fVar13 = fVar22 * fVar18 + fVar11 * fVar14 + fVar1 * fVar16;
  fVar21 = (fVar11 * fVar16 - fVar1 * fVar14) * fVar10 + fVar15 * fVar18 + fVar22 * fVar13 +
           pfVar7[4];
  fVar2 = pfVar9[2];
  fVar20 = (fVar1 * fVar18 - fVar22 * fVar16) * fVar10 + fVar15 * fVar14 + fVar11 * fVar13 +
           pfVar7[5];
  fVar3 = pfVar9[1];
  fVar17 = fStack_f0 + fStack_f0;
  fVar12 = -fStack_f0 + -fStack_f0;
  fVar4 = pfVar9[3];
  fVar5 = *pfVar9;
  fVar19 = fVar4 * fVar4 - 0.5;
  fVar22 = (fVar22 * fVar14 - fVar11 * fVar18) * fVar10 + fVar15 * fVar16 + fVar1 * fVar13 +
           pfVar7[6];
  fVar10 = fVar5 * fVar12;
  fVar11 = fVar17 * fVar5;
  param_2[4] = fVar19 * fVar17 + fVar11 * fVar5 + fVar21;
  param_2[5] = fVar2 * fVar17 * fVar4 + fVar11 * fVar3 + fVar20;
  param_2[6] = (fVar2 * fVar11 - fVar17 * fVar3 * fVar4) + fVar22;
  param_2[7] = 3.4028235e+38;
  *param_2 = fVar19 * fVar12 + fVar5 * fVar10 + fVar21;
  param_2[1] = fVar2 * fVar12 * fVar4 + fVar3 * fVar10 + fVar20;
  param_2[2] = (fVar2 * fVar10 - fVar3 * fVar12 * fVar4) + fVar22;
  param_2[3] = 3.4028235e+38;
  param_2[8] = uStack_f8._4_4_;
  return param_2;
}






