#include "TaleWorlds.Native.Split.h"

// 03_rendering_part327.c - 18 个函数

// 函数: void FUN_18043bff0(undefined8 param_1)
void FUN_18043bff0(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*_DAT_180c8ed00 + 0x70))(_DAT_180c8ed00,&DAT_1809fcc18);
                    // WARNING: Could not recover jumptable at 0x00018043c01b. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x70))(plVar1,param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c020(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)
void FUN_18043c020(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 auStackX_18 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  if (*(char *)(_DAT_180c8ed68 + 0x50) != '\0') {
    auStackX_18[0] = param_3;
    FUN_180636790(_DAT_180c8ed68,&uStack_18,&uStack_28,auStackX_18,param_4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c060(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
void FUN_18043c060(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_28 = *param_2;
  uStack_20 = param_2[1];
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_180633110(_DAT_180c8ed68,&uStack_18,&uStack_28,param_3,param_4,param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c0b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
void FUN_18043c0b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_1806345f0(_DAT_180c8ed68,&uStack_18,param_2,param_3,param_4,param_5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c0f0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
void FUN_18043c0f0(undefined4 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_28 = *param_2;
  uStack_20 = param_2[1];
  uStack_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_1806336a0(_DAT_180c8ed68,&uStack_18,&uStack_28,param_3,param_4,param_5,param_6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c160(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18043c160(undefined4 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  undefined8 uVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  longlong lStack_28;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180627910(&puStack_30);
  uStackX_c = param_5;
  uStack_40 = *param_1;
  uStack_3c = param_1[1];
  uStack_38 = param_1[2];
  uStack_34 = param_1[3];
  uStackX_8 = param_4;
  FUN_180632d00(_DAT_180c8ed68,&uStack_40,&puStack_30,param_3,&uStackX_8,param_6,uVar1);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18043c230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18043c230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_30;
  longlong lStack_28;
  
  FUN_180627910(&puStack_30,param_3,param_3,param_4,0xfffffffffffffffe);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
void FUN_18043c290(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = 0x22663399;
  uStack_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_1806371f0(_DAT_180c8ed68 + 0x158,&uStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18043c2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_5;
  uStack_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_1806371f0(_DAT_180c8ed68 + 0x158,&uStack_28);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c350(void)
void FUN_18043c350(void)

{
  code *pcVar1;
  
  func_0x0001800624b0(_DAT_180c86928);
  FUN_180055f70();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





// 函数: void FUN_18043c370(int param_1)
void FUN_18043c370(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180623ce0();
  if ((ulonglong)(longlong)param_1 < uVar1 >> 0x14) {
                    // WARNING: Subroutine does not return
    FUN_1808fd200();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c3b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
void FUN_18043c3b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  lVar1 = _DAT_180c8ed68;
  uStack_a8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_f8;
  uStack_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  uStack_c8 = *param_1;
  uStack_c4 = param_1[1];
  uStack_c0 = param_1[2];
  uStack_bc = param_1[3];
  if (*(char *)(_DAT_180c8ed68 + 0x50) != '\0') {
    lStack_a0 = _DAT_180c8ed68;
    iVar2 = _Mtx_lock(_DAT_180c8ed68);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    uStack_98 = uStack_c8;
    uStack_94 = uStack_c4;
    uStack_90 = uStack_c0;
    uStack_88 = uStack_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_78 = uStack_c8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_c0;
    uStack_68 = uStack_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_c0;
    uStack_58 = uStack_c8;
    uStack_54 = uStack_c4;
    uStack_50 = uStack_b0;
    uStack_48 = uStack_b8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_b0;
    uStack_38 = uStack_c8;
    uStack_34 = uStack_b4;
    uStack_30 = uStack_b0;
    uStack_28 = uStack_b8;
    uStack_24 = uStack_c4;
    uStack_20 = uStack_c0;
    uStack_d8 = param_5;
    FUN_180633220(lVar1,&uStack_98,param_3,param_4);
    iVar2 = _Mtx_unlock(lVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_f8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c510(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
void FUN_18043c510(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_138 [32];
  undefined4 uStack_118;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  lVar1 = _DAT_180c8ed68;
  uStack_108 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_138;
  uStack_f8 = *param_2;
  uStack_f0 = param_2[1];
  uStack_e8 = *param_1;
  uStack_e0 = param_1[1];
  uStack_d8 = *param_3;
  uStack_d0 = param_3[1];
  uStack_c8 = param_3[2];
  uStack_c0 = param_3[3];
  uStack_b8 = *(undefined4 *)(param_3 + 4);
  uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_b0 = *(undefined4 *)(param_3 + 5);
  uStack_ac = *(undefined4 *)((longlong)param_3 + 0x2c);
  uStack_a8 = *(undefined4 *)(param_3 + 6);
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_a0 = *(undefined4 *)(param_3 + 7);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x3c);
  if (*(char *)(_DAT_180c8ed68 + 0x50) != '\0') {
    lStack_100 = _DAT_180c8ed68;
    iVar2 = _Mtx_lock(_DAT_180c8ed68);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    func_0x000180632b30(auStack_98,&uStack_e8,&uStack_f8,&uStack_d8);
    uStack_118 = param_6;
    FUN_180633220(lVar1,auStack_98,param_4,param_5);
    iVar2 = _Mtx_unlock(lVar1);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_138);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)
void FUN_18043c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x20))
            ((longlong *)*_DAT_180c8ed08,param_2,param_4,param_1,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18043c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_18043c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  (**(code **)(*(longlong *)*_DAT_180c8ed08 + 0x28))
            ((longlong *)*_DAT_180c8ed08,param_2,param_4,param_1,param_5,1);
  return;
}





// 函数: void FUN_18043c740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18043c740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_30;
  longlong lStack_28;
  
  FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  FUN_18016ae30();
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



longlong * FUN_18043c7a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  plVar1 = *(longlong **)(param_2 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *param_1 = (longlong)plVar1;
    param_1[1] = CONCAT44(uStack_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_18043c820(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0x298,8,3,0xfffffffffffffffe);
  plVar3 = (longlong *)FUN_1802f5f70(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  if (param_2 != 0) {
    FUN_1802f8640(plVar3,param_2);
  }
  if (plVar3 == (longlong *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (undefined4)((ulonglong)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  return param_1;
}



uint FUN_18043c8e0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (param_1 != 0) {
    fVar1 = *(float *)(param_1 + 0x288);
    fVar2 = *(float *)(param_1 + 0x28c);
    fVar3 = *(float *)(param_1 + 0x290);
    dVar9 = (double)pow((double)*(float *)(param_1 + 0x284),0x3fdd1745d1745d17);
    dVar10 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
    dVar11 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
    uVar6 = (uint)(longlong)(fVar3 * 256.0);
    uVar8 = 0xff;
    if (uVar6 < 0xff) {
      uVar8 = uVar6;
    }
    uVar7 = (uint)(longlong)((float)dVar9 * 256.0);
    uVar6 = 0xff;
    if (uVar7 < 0xff) {
      uVar6 = uVar7;
    }
    uVar5 = (uint)(longlong)((float)dVar10 * 256.0);
    uVar7 = 0xff;
    if (uVar5 < 0xff) {
      uVar7 = uVar5;
    }
    uVar4 = (uint)(longlong)((float)dVar11 * 256.0);
    uVar5 = 0xff;
    if (uVar4 < 0xff) {
      uVar5 = uVar4;
    }
    return ((uVar6 | uVar8 << 8) << 8 | uVar7) << 8 | uVar5;
  }
  return 0;
}



uint FUN_18043c8f5(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  fVar1 = *(float *)(param_1 + 0x288);
  fVar2 = *(float *)(param_1 + 0x28c);
  fVar3 = *(float *)(param_1 + 0x290);
  dVar9 = (double)pow((double)*(float *)(param_1 + 0x284));
  dVar10 = (double)pow((double)fVar1,0x3fdd1745d1745d17);
  dVar11 = (double)pow((double)fVar2,0x3fdd1745d1745d17);
  uVar6 = (uint)(longlong)(fVar3 * 256.0);
  uVar8 = 0xff;
  if (uVar6 < 0xff) {
    uVar8 = uVar6;
  }
  uVar7 = (uint)(longlong)((float)dVar9 * 256.0);
  uVar6 = 0xff;
  if (uVar7 < 0xff) {
    uVar6 = uVar7;
  }
  uVar5 = (uint)(longlong)((float)dVar10 * 256.0);
  uVar7 = 0xff;
  if (uVar5 < 0xff) {
    uVar7 = uVar5;
  }
  uVar4 = (uint)(longlong)((float)dVar11 * 256.0);
  uVar5 = 0xff;
  if (uVar4 < 0xff) {
    uVar5 = uVar4;
  }
  return ((uVar6 | uVar8 << 8) << 8 | uVar7) << 8 | uVar5;
}



undefined8 FUN_18043c9fc(void)

{
  return 0;
}





// 函数: void FUN_18043ca10(longlong *param_1,uint param_2)
void FUN_18043ca10(longlong *param_1,uint param_2)

{
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (param_1 != (longlong *)0x0) {
    fStack_c = (float)(param_2 >> 0x18) * 0.003921569;
    fStack_18 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
    fStack_14 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    fStack_10 = (float)(param_2 & 0xff) * 0.003921569;
    (**(code **)(*param_1 + 0x108))(fStack_10,&fStack_18);
  }
  return;
}





// 函数: void FUN_18043caa0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
void FUN_18043caa0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x60) = param_2;
    *(undefined4 *)(param_1 + 100) = param_3;
    *(undefined4 *)(param_1 + 0x68) = param_4;
    *(undefined4 *)(param_1 + 0x6c) = param_5;
  }
  return;
}





