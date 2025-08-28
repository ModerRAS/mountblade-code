#include "TaleWorlds.Native.Split.h"

// 99_part_09_part096.c - 9 个函数

// 函数: void FUN_1806a1a0d(void)
void FUN_1806a1a0d(void)

{
  uint uVar1;
  longlong unaff_RBX;
  uint uVar3;
  ulonglong unaff_RDI;
  undefined8 *puVar4;
  longlong *unaff_R14;
  ulonglong uVar2;
  
  do {
    if (unaff_R14 == *(longlong **)(unaff_RDI * 8 + *(longlong *)(unaff_RBX + 0x18))) {
      (**(code **)(*unaff_R14 + 0x20))();
      uVar1 = (int)unaff_RDI + 1;
      uVar3 = *(uint *)(unaff_RBX + 0x20);
      puVar4 = (undefined8 *)(*(longlong *)(unaff_RBX + 0x18) + unaff_RDI * 8);
      if (uVar1 < uVar3) {
        do {
          uVar2 = (ulonglong)uVar1;
          uVar1 = uVar1 + 1;
          *puVar4 = *(undefined8 *)(*(longlong *)(unaff_RBX + 0x18) + uVar2 * 8);
          uVar3 = *(uint *)(unaff_RBX + 0x20);
          puVar4 = puVar4 + 1;
        } while (uVar1 < uVar3);
      }
      *(uint *)(unaff_RBX + 0x20) = uVar3 - 1;
    }
    uVar3 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar3;
  } while (uVar3 < *(uint *)(unaff_RBX + 0x20));
  return;
}






// 函数: void FUN_1806a1a7b(void)
void FUN_1806a1a7b(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1b30(void)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  puVar10 = _DAT_180c0c2f0;
  if (_DAT_180c0c2f8 == 0) {
    puVar3 = (undefined8 *)
             (**(code **)(*_DAT_180be0050 + 8))
                       (_DAT_180be0050,0xa8,&UNK_18094a608,&UNK_18094a4d8,300);
    puVar10 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      *puVar3 = &UNK_18094a440;
      puVar3[1] = &UNK_18094a4c0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = &UNK_18094a3f0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined4 *)(puVar3 + 0xc) = 0x3f400000;
      *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
      puVar3[0xd] = 0;
      FUN_1806a2bd0(puVar3 + 7,0x40);
      iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
      puVar7 = puVar10;
      if (iVar2 != 0) {
        plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        plVar5 = (longlong *)PxGetFoundation();
        cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (cVar1 == '\0') {
          puVar6 = &UNK_18094a1f0;
        }
        else {
          puVar6 = (undefined *)__std_type_info_name(0x180bfc198,0x180c827e0);
        }
        puVar7 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,iVar2,puVar6,&UNK_18094a1b0,0x71);
      }
      puVar3[0xe] = puVar7;
      __0MutexImpl_shdfnd_physx__QEAA_XZ(puVar7);
      puVar3[0xf] = 0;
      *(undefined2 *)(puVar3 + 0x10) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x82) = 1;
      *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0x11] = 1;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      uVar8 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      uVar8 = FUN_1806b20f0(uVar8);
      puVar3[0x12] = uVar8;
      lVar9 = (**(code **)(*_DAT_180be0050 + 8))
                        (_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e);
      if (lVar9 != 0) {
        puVar10 = (undefined8 *)FUN_1806b6ae0(lVar9,puVar3);
      }
      puVar3[0x13] = puVar10;
      puVar10 = puVar3;
    }
  }
  _DAT_180c0c2f0 = puVar10;
  _DAT_180c0c2f8 = _DAT_180c0c2f8 + 1;
  return CONCAT31((int3)((uint)_DAT_180c0c2f8 >> 8),_DAT_180c0c2f0 != (undefined8 *)0x0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1b59(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0xa8,param_3,param_4,300);
  puVar10 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0;
    *puVar3 = &UNK_18094a440;
    puVar3[1] = &UNK_18094a4c0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = &UNK_18094a3f0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0x3f400000;
    *(undefined4 *)((longlong)puVar3 + 100) = 0xffffffff;
    puVar3[0xd] = 0;
    FUN_1806a2bd0(puVar3 + 7,0x40);
    iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
    puVar7 = puVar10;
    if (iVar2 != 0) {
      plVar4 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      plVar5 = (longlong *)PxGetFoundation();
      cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar1 == '\0') {
        puVar6 = &UNK_18094a1f0;
      }
      else {
        puVar6 = (undefined *)__std_type_info_name(0x180bfc198,0x180c827e0);
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,iVar2,puVar6,&UNK_18094a1b0,0x71);
    }
    puVar3[0xe] = puVar7;
    __0MutexImpl_shdfnd_physx__QEAA_XZ(puVar7);
    puVar3[0xf] = 0;
    *(undefined2 *)(puVar3 + 0x10) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x82) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
    puVar3[0x11] = 1;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    uVar8 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    uVar8 = FUN_1806b20f0(uVar8);
    puVar3[0x12] = uVar8;
    lVar9 = (**(code **)(*_DAT_180be0050 + 8))
                      (_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e);
    if (lVar9 != 0) {
      puVar10 = (undefined8 *)FUN_1806b6ae0(lVar9,puVar3);
    }
    puVar3[0x13] = puVar10;
    puVar10 = puVar3;
  }
  _DAT_180c0c2f0 = puVar10;
  _DAT_180c0c2f8 = _DAT_180c0c2f8 + 1;
  return CONCAT31((int3)((uint)_DAT_180c0c2f8 >> 8),puVar10 != (undefined8 *)0x0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1b8e(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  longlong *plVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *unaff_RBX;
  undefined8 unaff_RDI;
  
  *unaff_RBX = in_RAX;
  unaff_RBX[1] = &UNK_18094a4c0;
  unaff_RBX[3] = unaff_RDI;
  unaff_RBX[4] = unaff_RDI;
  unaff_RBX[5] = unaff_RDI;
  unaff_RBX[6] = &UNK_18094a3f0;
  *param_1 = unaff_RDI;
  param_1[1] = unaff_RDI;
  param_1[2] = unaff_RDI;
  param_1[3] = unaff_RDI;
  param_1[4] = unaff_RDI;
  *(undefined4 *)(param_1 + 5) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = unaff_RDI;
  FUN_1806a2bd0(param_1,(int)unaff_RDI + 0x40);
  iVar2 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  uVar6 = unaff_RDI;
  if (iVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar5 = &UNK_18094a1f0;
    }
    else {
      puVar5 = (undefined *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,iVar2,puVar5,&UNK_18094a1b0,0x71);
  }
  unaff_RBX[0xe] = uVar6;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar6);
  unaff_RBX[0xf] = unaff_RDI;
  *(short *)(unaff_RBX + 0x10) = (short)unaff_RDI;
  *(undefined1 *)((longlong)unaff_RBX + 0x82) = 1;
  *(int *)((longlong)unaff_RBX + 0x84) = (int)unaff_RDI;
  unaff_RBX[0x11] = 1;
  unaff_RBX[0x13] = unaff_RDI;
  unaff_RBX[0x14] = unaff_RDI;
  uVar6 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar6 = FUN_1806b20f0(uVar6);
  unaff_RBX[0x12] = uVar6;
  lVar7 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar7 != 0) {
    unaff_RDI = FUN_1806b6ae0(lVar7);
  }
  unaff_RBX[0x13] = unaff_RDI;
  _DAT_180c0c2f0 = unaff_RBX;
  _DAT_180c0c2f8 = _DAT_180c0c2f8 + 1;
  return CONCAT31((int3)((uint)_DAT_180c0c2f8 >> 8),unaff_RBX != (undefined8 *)0x0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1bf0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 != '\0') {
    __std_type_info_name(0x180bfc198,0x180c827e0);
  }
  uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
  *(undefined8 *)(unaff_RBX + 0x70) = uVar4;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar4);
  *(undefined8 *)(unaff_RBX + 0x78) = unaff_RDI;
  *(short *)(unaff_RBX + 0x80) = (short)unaff_RDI;
  *(undefined1 *)(unaff_RBX + 0x82) = 1;
  *(int *)(unaff_RBX + 0x84) = (int)unaff_RDI;
  *(undefined8 *)(unaff_RBX + 0x88) = 1;
  *(undefined8 *)(unaff_RBX + 0x98) = unaff_RDI;
  *(undefined8 *)(unaff_RBX + 0xa0) = unaff_RDI;
  uVar4 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar4 = FUN_1806b20f0(uVar4);
  *(undefined8 *)(unaff_RBX + 0x90) = uVar4;
  lVar5 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar5 != 0) {
    unaff_RDI = FUN_1806b6ae0(lVar5);
  }
  *(undefined8 *)(unaff_RBX + 0x98) = unaff_RDI;
  _DAT_180c0c2f0 = unaff_RBX;
  _DAT_180c0c2f8 = _DAT_180c0c2f8 + 1;
  return CONCAT31((int3)((uint)_DAT_180c0c2f8 >> 8),unaff_RBX != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1c51(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong unaff_RBX;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBX + 0x70) = unaff_RDI;
  __0MutexImpl_shdfnd_physx__QEAA_XZ();
  *(undefined8 *)(unaff_RBX + 0x78) = unaff_RDI;
  *(short *)(unaff_RBX + 0x80) = (short)unaff_RDI;
  *(undefined1 *)(unaff_RBX + 0x82) = 1;
  *(int *)(unaff_RBX + 0x84) = (int)unaff_RDI;
  *(undefined8 *)(unaff_RBX + 0x88) = 1;
  *(undefined8 *)(unaff_RBX + 0x98) = unaff_RDI;
  *(undefined8 *)(unaff_RBX + 0xa0) = unaff_RDI;
  uVar1 = _getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  uVar1 = FUN_1806b20f0(uVar1);
  *(undefined8 *)(unaff_RBX + 0x90) = uVar1;
  lVar2 = (**(code **)(*_DAT_180be0050 + 8))(_DAT_180be0050,0x40,&UNK_18094a510,&UNK_18094a4d8,0x5e)
  ;
  if (lVar2 != 0) {
    unaff_RDI = FUN_1806b6ae0(lVar2);
  }
  *(undefined8 *)(unaff_RBX + 0x98) = unaff_RDI;
  _DAT_180c0c2f0 = unaff_RBX;
  _DAT_180c0c2f8 = _DAT_180c0c2f8 + 1;
  return CONCAT31((int3)((uint)_DAT_180c0c2f8 >> 8),unaff_RBX != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1cd7(void)

{
  undefined8 uVar1;
  longlong unaff_RBX;
  
  uVar1 = FUN_1806b6ae0();
  *(undefined8 *)(unaff_RBX + 0x98) = uVar1;
  _DAT_180c0c2f0 = unaff_RBX;
  _DAT_180c0c2f8 = _DAT_180c0c2f8 + 1;
  return CONCAT31((int3)((uint)_DAT_180c0c2f8 >> 8),unaff_RBX != 0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1806a1d05(void)

{
  int in_EAX;
  
  _DAT_180c0c2f8 = in_EAX + 1;
  return CONCAT31((int3)((uint)(in_EAX + 1) >> 8),_DAT_180c0c2f0 != 0);
}



undefined8 FUN_1806a1d40(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))();
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    lVar1 = *plVar3;
    if (param_3 != '\0') {
      (**(code **)(lVar1 + 8))();
      return 0;
    }
    (**(code **)(lVar1 + 0x10))(plVar3,uVar2,param_4);
  }
  return 0;
}






// 函数: void FUN_1806a1dc0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
void FUN_1806a1dc0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined2 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_3);
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    lVar1 = *plVar3;
    if (param_4 != '\0') {
                    // WARNING: Could not recover jumptable at 0x0001806a1e11. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(lVar1 + 0x18))();
      return;
    }
    (**(code **)(lVar1 + 0x20))(plVar3,uVar2,param_5);
  }
  return;
}






// 函数: void FUN_1806a1e30(longlong param_1)
void FUN_1806a1e30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 auStackX_8 [2];
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined *puStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_30 = 0x31e5e882;
  uStack_2c = 1;
  puStack_38 = &UNK_18094a318;
  plVar1 = (longlong *)
           _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                     (auStack_48);
  lStack_28 = *plVar1 * 10;
  lVar2 = _getCounterFrequency_Time_shdfnd_physx__SA_AUCounterFrequencyToTensOfNanos_23_XZ
                    (auStack_48);
  uStack_20 = *(undefined8 *)(lVar2 + 8);
  uStack_18 = 1;
  uStack_50 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))();
  puStack_58 = &UNK_18094a5a8;
  func_0x0001806a2e70(&puStack_58,&uStack_30);
  (**(code **)(puStack_58 + 0x40))(&puStack_58,&uStack_2c);
  (**(code **)(puStack_58 + 0x30))(&puStack_58,&lStack_28);
  (**(code **)(puStack_58 + 0x30))(&puStack_58,&uStack_20);
  auStackX_8[0] = uStack_18;
  (**(code **)(puStack_58 + 0x40))(&puStack_58,auStackX_8);
  uStack_18 = auStackX_8[0];
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  return;
}






// 函数: void FUN_1806a1f20(longlong param_1)
void FUN_1806a1f20(longlong param_1)

{
  longlong *plVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  plVar1 = (longlong *)(param_1 + 8);
  puStack_48 = &UNK_18094a2a0;
  puStack_40 = &UNK_18094a328;
  (**(code **)(*(longlong *)(param_1 + 8) + 8))(plVar1,&puStack_48);
  puStack_38 = (undefined *)0x0;
  puStack_30 = (undefined *)0x0;
  puStack_28 = &UNK_18094a280;
  puStack_20 = &UNK_18094a288;
  puStack_48 = &UNK_18094a2a0;
  puStack_40 = &UNK_18094a328;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&puStack_48,&UNK_180a25ac8,&UNK_18094a3a0,&puStack_28,2,&puStack_38);
  puStack_40 = &UNK_18094a338;
  puStack_48 = &UNK_18094a2a0;
  puStack_28 = &UNK_18094a2a0;
  puStack_20 = &UNK_18094a338;
  (**(code **)(*plVar1 + 8))(plVar1,&puStack_28);
  puStack_28 = (undefined *)0x0;
  puStack_20 = (undefined *)0x0;
  puStack_38 = &UNK_18094a280;
  puStack_30 = &UNK_18094a288;
  puStack_48 = &UNK_18094a2a0;
  puStack_40 = &UNK_18094a338;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&puStack_48,&UNK_180a25ac8,&UNK_18094a3b8,&puStack_38,2,&puStack_28);
  puStack_40 = &UNK_18094a290;
  puStack_48 = &UNK_18094a2a0;
  puStack_28 = &UNK_18094a2a0;
  puStack_20 = &UNK_18094a290;
  (**(code **)(*plVar1 + 8))(plVar1,&puStack_28);
  puStack_28 = (undefined *)0x0;
  puStack_20 = (undefined *)0x0;
  puStack_38 = &UNK_18094a280;
  puStack_30 = &UNK_18094a288;
  puStack_48 = &UNK_18094a2a0;
  puStack_40 = &UNK_18094a290;
  (**(code **)(*plVar1 + 0x20))
            (plVar1,&puStack_48,&UNK_180a25ac8,&UNK_18094a3d0,&puStack_38,2,&puStack_28);
  return;
}






// 函数: void FUN_1806a2100(undefined8 *param_1)
void FUN_1806a2100(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094a3f0;
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[8]);
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}



undefined8 * FUN_1806a2170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a2b0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



undefined8 * FUN_1806a21a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a268;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1806a21d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a3e8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x70);
  }
  return param_1;
}



undefined8 * FUN_1806a2200(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1806a2230(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094a3f8;
  (**(code **)(*(longlong *)param_1[1] + 0xd8))();
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[2]);
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  *param_1 = &UNK_18094a358;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x58);
  }
  return param_1;
}



undefined8 FUN_1806a2300(undefined8 param_1,ulonglong param_2)

{
  FUN_1806a2100();
  if ((param_2 & 1) != 0) {
    free(param_1,0x48);
  }
  return param_1;
}



undefined8 * FUN_1806a2340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a2b0;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



longlong FUN_1806a2370(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FUN_1806a0f40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0xa8);
    }
  }
  return param_1;
}



undefined8 * FUN_1806a23d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a358;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1806a2400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a240;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



undefined8 * FUN_1806a2430(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28);
  }
  return param_1;
}






// 函数: void FUN_1806a2460(longlong param_1)
void FUN_1806a2460(longlong param_1)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x10));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x10));
  return;
}



longlong FUN_1806a2490(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    lVar1 = *param_2;
    uVar2 = ~(lVar1 << 0x20) + lVar1;
    uVar2 = uVar2 ^ uVar2 >> 0x16;
    uVar2 = uVar2 + ~(uVar2 << 0xd);
    uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 0xf;
    uVar2 = uVar2 + ~(uVar2 << 0x1b);
    uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x24) - 1U);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar2 * 4);
    bVar5 = uVar3 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 0x10) == lVar1) break;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
      bVar5 = uVar3 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x20)) goto LAB_1806a25ea;
  uVar3 = *(uint *)(param_1 + 0x24);
  if (uVar3 == 0) {
    uVar4 = 0x10;
LAB_1806a2581:
    FUN_1806a2bd0(param_1,uVar4);
    uVar3 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar3 < uVar4) goto LAB_1806a2581;
  }
  uVar2 = *param_2 + ~(*param_2 << 0x20);
  uVar2 = uVar2 ^ uVar2 >> 0x16;
  uVar2 = uVar2 + ~(uVar2 << 0xd);
  uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
  uVar2 = uVar2 ^ uVar2 >> 0xf;
  uVar2 = uVar2 + ~(uVar2 << 0x1b);
  uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & uVar3 - 1);
LAB_1806a25ea:
  uVar3 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar3 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar2 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar2 * 4) = uVar3;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 8);
}






// 函数: void FUN_1806a2630(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1806a2630(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char acStackX_8 [8];
  undefined8 uStackX_20;
  undefined *apuStack_88 [3];
  undefined4 uStack_70;
  char cStack_18;
  
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
            (*(longlong **)(param_1 + 8),apuStack_88,param_2);
  if ((cStack_18 != '\0') &&
     (uStackX_20 = param_3,
     puVar1 = (undefined8 *)FUN_1806a2490(param_1 + 0x20,&uStackX_20,acStackX_8),
     acStackX_8[0] == '\0')) {
    *puVar1 = param_3;
    *(undefined4 *)(puVar1 + 1) = uStack_70;
  }
  apuStack_88[0] = &UNK_18094a3e8;
                    // WARNING: Subroutine does not return
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x10));
}






// 函数: void FUN_1806a26e0(longlong param_1,undefined8 param_2)
void FUN_1806a26e0(longlong param_1,undefined8 param_2)

{
  undefined8 auStackX_10 [3];
  
  auStackX_10[0] = param_2;
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x10));
  func_0x0001806a2720(param_1 + 0x20,auStackX_10);
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(undefined8 *)(param_1 + 0x10));
  return;
}






