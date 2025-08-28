#include "TaleWorlds.Native.Split.h"

// 99_part_10_part021.c - 12 个函数

// 函数: void FUN_1806b1e00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806b1e00(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x28));
  (**(code **)**(uint64_t **)(param_1 + 0x30))
            (*(uint64_t **)(param_1 + 0x30),param_2,param_3,param_4,param_5,param_6);
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x28));
  return;
}






// 函数: void FUN_1806b1e80(longlong param_1,uint64_t param_2)
void FUN_1806b1e80(longlong param_1,uint64_t param_2)

{
  _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30),param_2);
                    // WARNING: Could not recover jumptable at 0x0001808ffe03. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(param_1 + 0x28));
  return;
}






// 函数: void FUN_1806b1ec0(longlong param_1,longlong param_2,ulonglong param_3)
void FUN_1806b1ec0(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong lStack_28;
  longlong lStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lStack_20 = param_2 + (param_3 & 0xffffffff);
    uStack_18 = 0x8094a280;
    uStack_14 = 1;
    uStack_10 = 0x8094a288;
    uStack_c = 1;
    lStack_28 = param_2;
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(uint64_t *)(param_1 + 0x28),&UNK_180a25ac8,&lStack_28,&uStack_18);
  }
  return;
}



uint64_t * FUN_1806b1f40(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094b130;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806b1f70(uint64_t *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  *param_1 = &UNK_18094b168;
  param_1[1] = &UNK_18094b1a0;
  (**(code **)(*(longlong *)param_1[2] + 0x50))((longlong *)param_1[2],param_1);
  cVar2 = (**(code **)(*(longlong *)(param_1[6] + 8) + 0x18))();
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)param_1[3] + 0x68))((longlong *)param_1[3],param_1[6]);
  }
  (**(code **)(*(longlong *)param_1[6] + 0x18))();
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[5]);
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar1);
  }
  param_1[1] = &UNK_18094a240;
  *param_1 = &UNK_18094b130;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x38);
  }
  return param_1;
}



longlong FUN_1806b2060(longlong *param_1,uint64_t param_2,int32_t *param_3,int32_t param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1,0x1e0,&UNK_18094b480,&UNK_18094b3d0,0x31);
  uStack_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  lVar2 = FUN_1806b2770(uVar1,param_1,param_2,param_4,&uStack_18);
  return lVar2 + 0xa0;
}



uint64_t * FUN_1806b20f0(longlong *param_1)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *puVar7;
  uint64_t uVar8;
  
  puVar4 = (uint64_t *)
           (**(code **)(*param_1 + 8))(param_1,0x48,&UNK_18094b480,&UNK_18094b3d0,0x36);
  puVar1 = puVar4 + 1;
  *puVar4 = &UNK_18094b208;
  *puVar1 = param_1;
  uVar8 = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = puVar1;
  puVar4[5] = puVar1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  iVar3 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  if (iVar3 != 0) {
    plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar6 = (longlong *)PxGetFoundation();
    cVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (cVar2 == '\0') {
      puVar7 = &UNK_18094a1f0;
    }
    else {
      puVar7 = (void *)__std_type_info_name(0x180bfc198,0x180c827e0);
    }
    uVar8 = (**(code **)(*plVar5 + 8))(plVar5,iVar3,puVar7,&UNK_18094a1b0,0x71);
  }
  puVar4[8] = uVar8;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar8);
  return puVar4;
}



uint64_t * FUN_1806b21e0(longlong *param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  puVar3 = (uint64_t *)
           (**(code **)(*param_1 + 8))(param_1,0xe0,&UNK_18094b480,&UNK_18094b3d0,0x3b);
  if (puVar3 != (uint64_t *)0x0) {
    puVar1 = puVar3 + 5;
    puVar2 = puVar3 + 4;
    *puVar3 = &UNK_18094b290;
    puVar3[1] = &UNK_18094b2b0;
    puVar3[2] = &UNK_18094b2d0;
    puVar3[3] = &UNK_18094b250;
    *puVar2 = param_1;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *puVar1 = puVar2;
    puVar3[6] = &UNK_18094b418;
    puVar3[10] = puVar2;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(int *)(puVar3 + 0xd) = param_2;
    puVar3[0x10] = 0;
    *(int8_t *)(puVar3 + 0x11) = 0;
    puVar3[0x12] = puVar1;
    FUN_1806b5600(puVar1,param_2 + 0x44);
    puVar3[3] = &UNK_18094b270;
    puVar3[0x13] = puVar2;
    puVar3[0x14] = &UNK_18094b440;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    *(int32_t *)(puVar3 + 0x1a) = 0x3f400000;
    *(int32_t *)((longlong)puVar3 + 0xd4) = 0xffffffff;
    puVar3[0x1b] = 0;
    FUN_1806b5870(puVar3 + 0x13,0x40);
    return puVar3;
  }
  return (uint64_t *)0x0;
}






// 函数: void FUN_1806b222a(uint64_t *param_1)
void FUN_1806b222a(uint64_t *param_1)

{
  uint64_t *puVar1;
  int unaff_EBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  
  puVar1 = unaff_RSI + 4;
  *unaff_RSI = &UNK_18094b290;
  unaff_RSI[1] = &UNK_18094b2b0;
  unaff_RSI[2] = &UNK_18094b2d0;
  unaff_RSI[3] = &UNK_18094b250;
  *puVar1 = unaff_RDI;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = puVar1;
  param_1[1] = &UNK_18094b418;
  unaff_RSI[10] = puVar1;
  unaff_RSI[0xb] = 0;
  unaff_RSI[0xc] = 0;
  *(int *)(unaff_RSI + 0xd) = unaff_EBP;
  unaff_RSI[0x10] = 0;
  *(int8_t *)(unaff_RSI + 0x11) = 0;
  unaff_RSI[0x12] = param_1;
  FUN_1806b5600(param_1,unaff_EBP + 0x44);
  unaff_RSI[3] = &UNK_18094b270;
  unaff_RSI[0x13] = puVar1;
  unaff_RSI[0x14] = &UNK_18094b440;
  unaff_RSI[0x15] = 0;
  unaff_RSI[0x16] = 0;
  unaff_RSI[0x17] = 0;
  unaff_RSI[0x18] = 0;
  unaff_RSI[0x19] = 0;
  *(int32_t *)(unaff_RSI + 0x1a) = 0x3f400000;
  *(int32_t *)((longlong)unaff_RSI + 0xd4) = 0xffffffff;
  unaff_RSI[0x1b] = 0;
  FUN_1806b5870(unaff_RSI + 0x13,0x40);
  return;
}



uint64_t FUN_1806b230f(void)

{
  return 0;
}






// 函数: void FUN_1806b2330(longlong *param_1,ulonglong *param_2)
void FUN_1806b2330(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte bStackX_9;
  
  if (*(uint *)((longlong)param_2 + 0xc) < 0x100) {
    uVar5 = 0x3f32;
  }
  else {
    uVar5 = 0x3fb2;
    if (*(uint *)((longlong)param_2 + 0xc) < 0x10000) {
      uVar5 = 0x3f72;
    }
  }
  uVar6 = 0;
  if ((uint)param_2[2] < 0x100) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
    if (0xffff < (uint)param_2[2]) {
      bVar4 = 2;
    }
  }
  if ((uint)param_2[1] < 0x100) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x400;
    if (0xffff < (uint)param_2[1]) {
      uVar7 = 0x800;
    }
  }
  if (*(uint *)((longlong)param_2 + 0x14) < 0x100) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x1000;
    if (0xffff < *(uint *)((longlong)param_2 + 0x14)) {
      uVar8 = 0x2000;
    }
  }
  uVar1 = *param_2;
  if (0xff < uVar1) {
    if (uVar1 < 0x10000) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x20;
      if (0xffffffff < uVar1) {
        uVar6 = 0x30;
      }
    }
  }
  lVar2 = param_1[0xf];
  bStackX_9 = bVar4 | (byte)(uVar7 >> 8) | (byte)(uVar8 >> 8);
  FUN_1806b5600(lVar2,(*(int *)(lVar2 + 0x18) - *(int *)(lVar2 + 0x10)) + 2);
  pbVar3 = *(byte **)(lVar2 + 0x18);
  *pbVar3 = (byte)uVar5 & 0xcf | (byte)uVar6;
  pbVar3[1] = bStackX_9;
  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 2;
  FUN_1806b68d0(param_1 + 0xf,&UNK_180a2fcd8,param_2 + 1,uVar7 >> 10);
  FUN_1806b68d0(param_1 + 0xf,&UNK_18094b500,(longlong)param_2 + 0xc,(uVar5 & 0xc0) >> 6);
  FUN_1806b68d0(param_1 + 0xf,&UNK_18094b508,param_2 + 2,bVar4);
  FUN_1806b68d0(param_1 + 0xf,&UNK_18094b510,(longlong)param_2 + 0x14,uVar8 >> 0xc);
  FUN_1806b6980(param_1 + 0xf,&UNK_18094b4f8,param_2,uVar6 >> 4);
  if (*(uint *)(param_1 + 10) <= (uint)((int)param_1[5] - (int)param_1[4])) {
    FUN_1806b5bb0(param_1,param_1[4]);
    param_1[5] = param_1[4];
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}



uint64_t FUN_1806b2560(longlong *param_1,uint64_t param_2,int8_t *param_3)

{
  longlong lVar1;
  int8_t *puVar2;
  
  lVar1 = *param_1;
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 4);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = *param_3;
  puVar2[1] = param_3[1];
  puVar2[2] = param_3[2];
  puVar2[3] = param_3[3];
  *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 4;
  return 4;
}



int FUN_1806b25c0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int8_t *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_1806b6980(param_2,&system_data_d7b0,param_1,*(byte *)(param_3 + 1) & 3);
  iVar4 = FUN_1806b6980(param_2,&UNK_18094b518,param_1 + 8,*(byte *)(param_3 + 1) >> 2 & 3);
  lVar1 = *param_2;
  FUN_1806b5600(lVar1,(*(int *)(lVar1 + 0x18) - *(int *)(lVar1 + 0x10)) + 4);
  puVar2 = *(int8_t **)(lVar1 + 0x18);
  *puVar2 = *(int8_t *)(param_1 + 0x10);
  puVar2[1] = *(int8_t *)(param_1 + 0x11);
  puVar2[2] = *(int8_t *)(param_1 + 0x12);
  puVar2[3] = *(int8_t *)(param_1 + 0x13);
  *(longlong *)(lVar1 + 0x18) = *(longlong *)(lVar1 + 0x18) + 4;
  return iVar3 + iVar4 + 4;
}



int FUN_1806b2670(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  int8_t uVar2;
  longlong lVar3;
  int8_t *puVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *param_2;
  bVar1 = *(byte *)(param_3 + 1);
  FUN_1806b5600(lVar3,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x10)) + 4);
  puVar4 = *(int8_t **)(lVar3 + 0x18);
  *puVar4 = *(int8_t *)(param_1 + 8);
  puVar4[1] = *(int8_t *)(param_1 + 9);
  puVar4[2] = *(int8_t *)(param_1 + 10);
  puVar4[3] = *(int8_t *)(param_1 + 0xb);
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 4;
  iVar5 = FUN_1806b6980(param_2,&UNK_18094b518,param_1,bVar1 >> 2 & 3);
  lVar3 = *param_2;
  uVar2 = *(int8_t *)(param_1 + 0xc);
  FUN_1806b5600(lVar3,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x10)) + 1);
  **(int8_t **)(lVar3 + 0x18) = uVar2;
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  lVar3 = *param_2;
  uVar2 = *(int8_t *)(param_1 + 0xd);
  FUN_1806b5600(lVar3,(*(int *)(lVar3 + 0x18) - *(int *)(lVar3 + 0x10)) + 1);
  **(int8_t **)(lVar3 + 0x18) = uVar2;
  *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 1;
  iVar6 = FUN_1806b6980(param_2,&UNK_18094b528,param_1 + 0x10,*(byte *)(param_3 + 1) & 3);
  return iVar6 + iVar5 + 6;
}



uint64_t *
FUN_1806b2770(uint64_t *param_1,uint64_t param_2,uint64_t param_3,int param_4,int *param_5)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int16_t uVar4;
  uint32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int16_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  char acStackX_8 [8];
  int16_t auStackX_10 [4];
  uint64_t uStackX_18;
  char acStackX_20 [8];
  uint64_t *puStack_68;
  int iStack_60;
  int iStack_5c;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  
  puVar9 = param_1 + 1;
  *param_1 = &UNK_18094b1d8;
  puVar10 = param_1 + 2;
  *puVar9 = param_2;
  *puVar10 = puVar9;
  param_1[3] = &UNK_18094b458;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = puVar9;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int *)(param_1 + 10) = param_4;
  param_1[0xd] = 0;
  *(int8_t *)(param_1 + 0xe) = 0;
  param_1[0xf] = puVar10;
  FUN_1806b5600(puVar10,param_4 + 0x44);
  param_1[0x12] = 0;
  param_1[0x10] = 0;
  puVar10 = param_1 + 0x18;
  param_1[0x11] = 0;
  puVar1 = param_1 + 0x1a;
  param_1[0x19] = param_3;
  *param_1 = &UNK_18094b2e0;
  param_1[0x14] = &UNK_18094b300;
  param_1[0x15] = &UNK_18094b358;
  param_1[0x16] = &UNK_18094b368;
  param_1[0x17] = &UNK_18094b3a0;
  *puVar10 = &UNK_18094b3b0;
  *puVar1 = puVar9;
  uVar6 = _getSize_MutexImpl_shdfnd_physx__SAIXZ();
  uVar7 = (**(code **)(**(longlong **)*puVar1 + 8))
                    (*(longlong **)*puVar1,uVar6,&UNK_18094b480,&UNK_18094a1b0,0x71);
  param_1[0x1b] = uVar7;
  __0MutexImpl_shdfnd_physx__QEAA_XZ(uVar7);
  param_1[0x1c] = puVar9;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar9;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(int32_t *)(param_1 + 0x25) = 0x3f400000;
  *(int32_t *)((longlong)param_1 + 300) = 0xffffffff;
  param_1[0x26] = 0;
  FUN_1806b5a10(param_1 + 0x1f,0x40);
  param_1[0x27] = puVar9;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(int32_t *)(param_1 + 0x2d) = 0x3f400000;
  *(int32_t *)((longlong)param_1 + 0x16c) = 0xffffffff;
  param_1[0x2e] = 0;
  FUN_1806b5a10(param_1 + 0x27,0x40);
  puVar2 = param_1 + 0x2f;
  *puVar2 = puVar9;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(int32_t *)(param_1 + 0x35) = 0x3f400000;
  *(int32_t *)((longlong)param_1 + 0x1ac) = 0xffffffff;
  param_1[0x36] = 0;
  FUN_1806b56d0(puVar2,0x40);
  param_1[0x37] = 0;
  param_1[0x38] = puVar9;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(int8_t *)(param_1 + 0x3b) = 0;
  param_1[0xd] = puVar1;
  puStack_68 = *(uint64_t **)param_5;
  iStack_60 = param_5[2];
  iStack_5c = param_5[3];
  puVar9 = *(uint64_t **)(param_5 + 2);
  if (*param_5 != 0) {
    puVar10 = puVar9 + 1;
    uVar4 = *(int16_t *)puVar10;
    uVar5 = *(uint32_t *)puVar10;
    uVar7 = *puVar9;
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(param_1[0x1b]);
    auStackX_10[0] = uVar4;
    puVar8 = (int16_t *)FUN_1806b3b20(puVar2,auStackX_10,acStackX_20);
    if (acStackX_20[0] == '\0') {
      *puVar8 = uVar4;
      *(uint64_t *)(puVar8 + 4) = uVar7;
    }
    uVar6 = *(int32_t *)(param_1 + 0x1e);
    uStackX_18 = uVar7;
    puVar9 = (uint64_t *)FUN_1806b3de0(param_1 + 0x27,&uStackX_18,acStackX_8);
    if (acStackX_8[0] == '\0') {
      *puVar9 = uVar7;
      *(int32_t *)(puVar9 + 1) = uVar6;
    }
    uStack_50 = CONCAT13(param_5._3_1_,uVar5);
    uStack_58 = uVar7;
    if (*(uint *)(param_1 + 0x1e) < (*(uint *)((longlong)param_1 + 0xf4) & 0x7fffffff)) {
      uStack_58._0_4_ = (int32_t)uVar7;
      uStack_58._4_4_ = (int32_t)((ulonglong)uVar7 >> 0x20);
      puVar3 = (int32_t *)(param_1[0x1d] + (ulonglong)*(uint *)(param_1 + 0x1e) * 0x10);
      *puVar3 = (int32_t)uStack_58;
      puVar3[1] = uStack_58._4_4_;
      puVar3[2] = uStack_50;
      puVar3[3] = uStack_4c;
      *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + 1;
    }
    else {
      FUN_1806b4d20(param_1 + 0x1c,&uStack_58);
    }
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(param_1[0x1b]);
  }
  if (puVar1 != (uint64_t *)0x0) {
    _lock_MutexImpl_shdfnd_physx__QEAAXXZ(param_1[0x1b]);
  }
  puStack_68 = puVar10;
  if (*(uint *)(param_1 + 9) < (*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff)) {
    *(uint64_t **)(param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 8) = puVar10;
    *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + 1;
  }
  else {
    FUN_1806b4c20(param_1 + 7,&puStack_68);
  }
  *(int8_t *)(param_1 + 0xe) = 1;
  if (puVar1 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
    _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(param_1[0x1b]);
  }
  return param_1;
}






// 函数: void FUN_1806b2b20(uint64_t *param_1)
void FUN_1806b2b20(uint64_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  *param_1 = &UNK_18094b1d8;
  iVar5 = *(int *)(param_1 + 9);
  do {
    if (iVar5 == 0) {
      if ((((*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)((longlong)param_1 + 0x4c))) && (param_1[8] != 0)) {
        (**(code **)(**(longlong **)param_1[7] + 0x10))();
      }
      if (param_1[4] != 0) {
                    // WARNING: Could not recover jumptable at 0x0001806b2c0f. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)param_1[2] + 0x10))();
        return;
      }
      return;
    }
    lVar1 = param_1[0xd];
    plVar2 = *(longlong **)param_1[8];
    if (lVar1 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
      iVar5 = *(int *)(param_1 + 9);
    }
    uVar4 = 0;
    bVar7 = iVar5 == 0;
    if (!bVar7) {
      do {
        if (*(longlong **)(param_1[8] + uVar4 * 8) == plVar2) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
          *(uint64_t *)(param_1[8] + uVar4 * 8) =
               *(uint64_t *)(param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 8);
          uVar6 = *(uint *)(param_1 + 9);
          break;
        }
        uVar6 = *(uint *)(param_1 + 9);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < uVar6);
      bVar7 = uVar6 == 0;
    }
    *(bool *)(param_1 + 0xe) = !bVar7;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    }
    iVar5 = *(int *)(param_1 + 9);
  } while( true );
}






// 函数: void FUN_1806b2b3e(int param_1)
void FUN_1806b2b3e(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong unaff_RDI;
  bool bVar6;
  
  do {
    lVar1 = *(longlong *)(unaff_RDI + 0x68);
    plVar2 = (longlong *)**(longlong **)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
      param_1 = *(int *)(unaff_RDI + 0x48);
    }
    uVar4 = 0;
    bVar6 = param_1 == 0;
    if (!bVar6) {
      do {
        if (*(longlong **)(*(longlong *)(unaff_RDI + 0x40) + uVar4 * 8) == plVar2) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          *(int *)(unaff_RDI + 0x48) = *(int *)(unaff_RDI + 0x48) + -1;
          *(uint64_t *)(*(longlong *)(unaff_RDI + 0x40) + uVar4 * 8) =
               *(uint64_t *)
                (*(longlong *)(unaff_RDI + 0x40) + (ulonglong)*(uint *)(unaff_RDI + 0x48) * 8);
          uVar5 = *(uint *)(unaff_RDI + 0x48);
          break;
        }
        uVar5 = *(uint *)(unaff_RDI + 0x48);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < uVar5);
      bVar6 = uVar5 == 0;
    }
    *(bool *)(unaff_RDI + 0x70) = !bVar6;
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar1 + 8));
    }
    param_1 = *(int *)(unaff_RDI + 0x48);
    if (param_1 == 0) {
      if ((((*(uint *)(unaff_RDI + 0x4c) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)(unaff_RDI + 0x4c))) && (*(longlong *)(unaff_RDI + 0x40) != 0)) {
        (**(code **)(*(longlong *)**(uint64_t **)(unaff_RDI + 0x38) + 0x10))();
      }
      if (*(longlong *)(unaff_RDI + 0x20) == 0) {
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001806b2c0f. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(longlong *)**(uint64_t **)(unaff_RDI + 0x10) + 0x10))();
      return;
    }
  } while( true );
}






// 函数: void FUN_1806b2bd3(void)
void FUN_1806b2bd3(void)

{
  longlong unaff_RDI;
  
  if ((((*(uint *)(unaff_RDI + 0x4c) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RDI + 0x4c)))
     && (*(longlong *)(unaff_RDI + 0x40) != 0)) {
    (**(code **)(*(longlong *)**(uint64_t **)(unaff_RDI + 0x38) + 0x10))();
  }
  if (*(longlong *)(unaff_RDI + 0x20) != 0) {
                    // WARNING: Could not recover jumptable at 0x0001806b2c0f. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)**(uint64_t **)(unaff_RDI + 0x10) + 0x10))();
    return;
  }
  return;
}






// 函数: void FUN_1806b2c20(uint64_t *param_1)
void FUN_1806b2c20(uint64_t *param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 9);
  *param_1 = &UNK_18094b250;
  do {
    if (iVar1 == 0) {
      if ((((*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)((longlong)param_1 + 0x4c))) && (param_1[8] != 0)) {
        (**(code **)(**(longlong **)param_1[7] + 0x10))();
      }
      if (param_1[4] != 0) {
                    // WARNING: Could not recover jumptable at 0x0001806b2cd1. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)param_1[2] + 0x10))();
        return;
      }
      return;
    }
    uVar4 = 0;
    plVar2 = *(longlong **)param_1[8];
    bVar6 = iVar1 == 0;
    if (!bVar6) {
      do {
        if ((longlong *)((longlong *)param_1[8])[uVar4] == plVar2) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
          *(uint64_t *)(param_1[8] + uVar4 * 8) =
               *(uint64_t *)(param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 8);
          uVar5 = *(uint *)(param_1 + 9);
          break;
        }
        uVar5 = *(uint *)(param_1 + 9);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < uVar5);
      bVar6 = uVar5 == 0;
    }
    *(bool *)(param_1 + 0xe) = !bVar6;
    iVar1 = *(int *)(param_1 + 9);
  } while( true );
}






// 函数: void FUN_1806b2c3a(uint64_t param_1,int param_2)
void FUN_1806b2c3a(uint64_t param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong unaff_RBX;
  bool bVar5;
  
  do {
    uVar3 = 0;
    plVar1 = (longlong *)**(longlong **)(unaff_RBX + 0x40);
    bVar5 = param_2 == 0;
    if (!bVar5) {
      do {
        if ((longlong *)(*(longlong **)(unaff_RBX + 0x40))[uVar3] == plVar1) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          *(int *)(unaff_RBX + 0x48) = *(int *)(unaff_RBX + 0x48) + -1;
          *(uint64_t *)(*(longlong *)(unaff_RBX + 0x40) + uVar3 * 8) =
               *(uint64_t *)
                (*(longlong *)(unaff_RBX + 0x40) + (ulonglong)*(uint *)(unaff_RBX + 0x48) * 8);
          uVar4 = *(uint *)(unaff_RBX + 0x48);
          break;
        }
        uVar4 = *(uint *)(unaff_RBX + 0x48);
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
      bVar5 = uVar4 == 0;
    }
    *(bool *)(unaff_RBX + 0x70) = !bVar5;
    param_2 = *(int *)(unaff_RBX + 0x48);
    if (param_2 == 0) {
      if ((((*(uint *)(unaff_RBX + 0x4c) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)(unaff_RBX + 0x4c))) && (*(longlong *)(unaff_RBX + 0x40) != 0)) {
        (**(code **)(*(longlong *)**(uint64_t **)(unaff_RBX + 0x38) + 0x10))();
      }
      if (*(longlong *)(unaff_RBX + 0x20) == 0) {
        return;
      }
                    // WARNING: Could not recover jumptable at 0x0001806b2cd1. Too many branches
                    // WARNING: Treating indirect jump as call
      (**(code **)(*(longlong *)**(uint64_t **)(unaff_RBX + 0x10) + 0x10))();
      return;
    }
  } while( true );
}






// 函数: void FUN_1806b2c95(void)
void FUN_1806b2c95(void)

{
  longlong unaff_RBX;
  
  if ((((*(uint *)(unaff_RBX + 0x4c) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBX + 0x4c)))
     && (*(longlong *)(unaff_RBX + 0x40) != 0)) {
    (**(code **)(*(longlong *)**(uint64_t **)(unaff_RBX + 0x38) + 0x10))();
  }
  if (*(longlong *)(unaff_RBX + 0x20) != 0) {
                    // WARNING: Could not recover jumptable at 0x0001806b2cd1. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)**(uint64_t **)(unaff_RBX + 0x10) + 0x10))();
    return;
  }
  return;
}






// 函数: void FUN_1806b2ce0(uint64_t *param_1)
void FUN_1806b2ce0(uint64_t *param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  *param_1 = &UNK_18094b2e0;
  puVar1 = param_1 + 0x14;
  *puVar1 = &UNK_18094b300;
  param_1[0x15] = &UNK_18094b358;
  param_1[0x16] = &UNK_18094b368;
  param_1[0x17] = &UNK_18094b3a0;
  param_1[0x18] = &UNK_18094b3b0;
  plVar3 = (longlong *)param_1[0x37];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar1);
  }
  param_1[0x37] = 0;
  FUN_1806b5250(param_1,param_1 + 0x18);
  if ((((*(uint *)((longlong)param_1 + 0x1d4) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x1d4))) && (param_1[0x39] != 0)) {
    (**(code **)(**(longlong **)param_1[0x38] + 0x10))();
  }
  if (param_1[0x30] != 0) {
    (**(code **)(**(longlong **)param_1[0x2f] + 0x10))();
  }
  if (param_1[0x28] != 0) {
    (**(code **)(**(longlong **)param_1[0x27] + 0x10))();
  }
  if (param_1[0x20] != 0) {
    (**(code **)(**(longlong **)param_1[0x1f] + 0x10))();
  }
  if ((((*(uint *)((longlong)param_1 + 0xf4) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0xf4))) && (param_1[0x1d] != 0)) {
    (**(code **)(**(longlong **)param_1[0x1c] + 0x10))();
  }
  __1MutexImpl_shdfnd_physx__QEAA_XZ(param_1[0x1b]);
  if (param_1[0x1b] != 0) {
    (**(code **)(**(longlong **)param_1[0x1a] + 0x10))();
  }
  param_1[0x18] = &UNK_18094a240;
  param_1[0x17] = &UNK_18094a308;
  param_1[0x16] = &UNK_18094add0;
  param_1[0x15] = &UNK_18094a210;
  *puVar1 = &UNK_18094b1b8;
  *param_1 = &UNK_18094b1d8;
  iVar6 = *(int *)(param_1 + 9);
  do {
    if (iVar6 == 0) {
      if ((((*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) != 0) &&
          (-1 < (int)*(uint *)((longlong)param_1 + 0x4c))) && (param_1[8] != 0)) {
        (**(code **)(**(longlong **)param_1[7] + 0x10))();
      }
      if (param_1[4] != 0) {
                    // WARNING: Could not recover jumptable at 0x0001806b2c0f. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)param_1[2] + 0x10))();
        return;
      }
      return;
    }
    lVar2 = param_1[0xd];
    plVar3 = *(longlong **)param_1[8];
    if (lVar2 != 0) {
      _lock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar2 + 8));
      iVar6 = *(int *)(param_1 + 9);
    }
    uVar5 = 0;
    bVar8 = iVar6 == 0;
    if (!bVar8) {
      do {
        if (*(longlong **)(param_1[8] + uVar5 * 8) == plVar3) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          *(int *)(param_1 + 9) = *(int *)(param_1 + 9) + -1;
          *(uint64_t *)(param_1[8] + uVar5 * 8) =
               *(uint64_t *)(param_1[8] + (ulonglong)*(uint *)(param_1 + 9) * 8);
          uVar7 = *(uint *)(param_1 + 9);
          break;
        }
        uVar7 = *(uint *)(param_1 + 9);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < uVar7);
      bVar8 = uVar7 == 0;
    }
    *(bool *)(param_1 + 0xe) = !bVar8;
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      _unlock_MutexImpl_shdfnd_physx__QEAAXXZ(*(uint64_t *)(lVar2 + 8));
    }
    iVar6 = *(int *)(param_1 + 9);
  } while( true );
}






