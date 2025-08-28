#include "TaleWorlds.Native.Split.h"

// 99_part_10_part002.c - 13 个函数

// 函数: void FUN_1806a35ec(void)
void FUN_1806a35ec(void)

{
  int in_EAX;
  longlong *plVar1;
  longlong unaff_RBX;
  
  if ((-1 < in_EAX) && (unaff_RBX != 0)) {
    plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
                    // WARNING: Could not recover jumptable at 0x0001806a3608. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



uint64_t * FUN_1806a3620(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



uint64_t * FUN_1806a3650(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



uint64_t * FUN_1806a3680(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



uint64_t * FUN_1806a36b0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,0x38);
  }
  return param_1;
}



uint64_t * FUN_1806a36e0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a308;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30);
  }
  return param_1;
}



uint64_t FUN_1806a3710(uint64_t param_1,ulonglong param_2)

{
  FUN_1806a34c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t * FUN_1806a3750(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a9a8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



uint64_t * FUN_1806a3780(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a9b0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x60);
  }
  return param_1;
}



uint64_t * FUN_1806a37b0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a860;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a37e0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a830;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



uint64_t * FUN_1806a3810(uint64_t *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &UNK_18094aa60;
  param_1[1] = &UNK_18094ab40;
  FUN_1806a3590(param_1 + 0x3b);
  lVar1 = param_1[0x39];
  if ((((*(uint *)((longlong)param_1 + 0x1d4) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x1d4))) && (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[0x32];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  param_1[0x26] = &UNK_18094a9b0;
  param_1[0x18] = &UNK_18094a3e8;
  FUN_1806a34c0(param_1 + 0xc);
  lVar1 = param_1[10];
  if ((((*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)((longlong)param_1 + 0x5c))) && (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  param_1[1] = &UNK_18094a830;
  *param_1 = &UNK_18094a860;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x1f8);
  }
  return param_1;
}



uint64_t * FUN_1806a3970(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094a900;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}






// 函数: void FUN_1806a39a0(longlong param_1,longlong *param_2,int8_t param_3)
void FUN_1806a39a0(longlong param_1,longlong *param_2,int8_t param_3)

{
  int32_t auStackX_8 [2];
  int8_t auStackX_18 [8];
  void *puStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  int32_t *puStack_40;
  void *puStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uStack_28;
  uint64_t uStack_20;
  
  auStackX_8[0] = 0;
  puStack_48 = &UNK_18094ac20;
  puStack_40 = auStackX_8;
  auStackX_18[0] = param_3;
  func_0x0001806a72f0(&puStack_48,auStackX_18);
  (**(code **)(*param_2 + 8))(param_2,&puStack_48);
  uStack_20 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  uStack_2c = 1;
  puStack_38 = &UNK_18094a6c0;
  uStack_30 = auStackX_8[0];
  uStack_28 = *(uint64_t *)(param_1 + 0x1c0);
  uStack_50 = (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x20))();
  puStack_58 = &UNK_18094a5a8;
  func_0x0001806a2e70(&puStack_58,&uStack_30);
  (**(code **)(puStack_58 + 0x40))(&puStack_58,&uStack_2c);
  (**(code **)(puStack_58 + 0x30))(&puStack_58,&uStack_28);
  (**(code **)(puStack_58 + 0x30))(&puStack_58,&uStack_20);
  puStack_40 = *(int32_t **)(param_1 + 0x1f0);
  puStack_48 = &UNK_18094a5a8;
  auStackX_18[0] = param_3;
  func_0x0001806a2e30(&puStack_48,auStackX_18);
  (**(code **)(*param_2 + 8))(param_2,&puStack_48);
  (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x28))();
  return;
}






// 函数: void FUN_1806a3ad0(longlong param_1,uint64_t param_2,int32_t param_3)
void FUN_1806a3ad0(longlong param_1,uint64_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  uint64_t uStack_18;
  int32_t uStack_10;
  int32_t uStack_c;
  
  if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) <= *(uint *)(param_1 + 0x40)) {
    uStack_18 = param_2;
    uStack_10 = param_3;
    FUN_1806a59b0((longlong *)(param_1 + 0x38),&uStack_18);
    return;
  }
  puVar1 = (uint64_t *)
           (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 0x10);
  *puVar1 = param_2;
  puVar1[1] = CONCAT44(uStack_c,param_3);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}






// 函数: void FUN_1806a3b20(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806a3b20(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  void *puStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  
  puStack_28 = &UNK_18094a800;
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1806a39a0(param_1,&puStack_28,0x18);
  return;
}






// 函数: void FUN_1806a3b50(uint64_t param_1,uint64_t param_2,uint64_t param_3,int16_t param_4,
void FUN_1806a3b50(uint64_t param_1,uint64_t param_2,uint64_t param_3,int16_t param_4,
                  int8_t param_5)

{
  void *puStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  int16_t uStack_10;
  int8_t uStack_e;
  
  puStack_28 = &UNK_18094a810;
  uStack_e = param_5;
  uStack_20 = param_2;
  uStack_18 = param_3;
  uStack_10 = param_4;
  FUN_1806a39a0(param_1,&puStack_28,0x19);
  return;
}






// 函数: void FUN_1806a3b90(longlong param_1)
void FUN_1806a3b90(longlong param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x28))();
  }
  return;
}






// 函数: void FUN_1806a3bd0(longlong *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4)
void FUN_1806a3bd0(longlong *param_1,uint64_t *param_2,int32_t param_3,int32_t param_4)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  longlong *plVar11;
  longlong lVar12;
  int8_t auStackX_18 [16];
  uint64_t uStack_38;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  uVar4 = *(int32_t *)param_2;
  uVar5 = *(int32_t *)((longlong)param_2 + 4);
  uVar8 = *param_2;
  uVar6 = *(int32_t *)(param_2 + 1);
  uVar7 = *(int32_t *)((longlong)param_2 + 0xc);
  uVar9 = param_2[1];
  uVar10 = (**(code **)(*param_1 + 0x28))();
  plVar2 = (longlong *)param_1[2];
  plVar11 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
  plVar11 = (longlong *)(**(code **)(*plVar11 + 0xc0))(plVar11);
  uVar10 = (**(code **)(*plVar11 + 0x18))(plVar11,uVar10,auStackX_18);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  if (*(uint *)(param_1 + 10) < (*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff)) {
    lVar3 = param_1[9];
    lVar12 = (ulonglong)*(uint *)(param_1 + 10) * 0x20;
    puVar1 = (uint64_t *)(lVar12 + lVar3);
    *puVar1 = uVar10;
    puVar1[1] = uVar8;
    puVar1 = (uint64_t *)(lVar12 + 0x10 + lVar3);
    *puVar1 = uVar9;
    puVar1[1] = CONCAT44(param_4,param_3);
    *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  }
  else {
    uStack_38 = uVar10;
    uStack_30 = uVar4;
    uStack_2c = uVar5;
    uStack_28 = uVar6;
    uStack_24 = uVar7;
    uStack_20 = param_3;
    uStack_1c = param_4;
    FUN_1806a5af0(param_1 + 9,&uStack_38);
  }
  return;
}



longlong FUN_1806a3ca0(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (0x1000 < param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1e8);
  if (0x1000 < uVar1 + param_2) {
    FUN_1806a5580((longlong *)(param_1 + 0x1d8));
    uVar1 = *(uint *)(param_1 + 0x1e8);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (ulonglong)*(uint *)(param_1 + 0x1ec) * 8);
  *(uint *)(param_1 + 0x1e8) = uVar1 + param_2;
  return (ulonglong)uVar1 + lVar2;
}



bool FUN_1806a3d10(longlong param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint64_t *puVar4;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int8_t auStack_38 [16];
  void *puStack_28;
  uint64_t uStack_20;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  iVar2 = param_2[2];
  puStack_28 = *(void **)(param_1 + 0x108);
  iVar3 = *param_2;
  uStack_48 = *(uint64_t *)param_2;
  uStack_20 = CONCAT44(uStack_20._4_4_,*(int32_t *)(param_1 + 0x110));
  uStack_18 = *(uint64_t *)(param_1 + 0x118);
  uStack_40 = *(uint64_t *)(param_2 + 2);
  uStack_10 = *(uint64_t *)(param_1 + 0x120);
  puVar4 = (uint64_t *)FUN_1806a4370(param_1,auStack_38,&puStack_28,&uStack_48);
  uStack_10 = CONCAT44(uStack_10._4_4_,(uint)(iVar2 - iVar3) / uVar1);
  uStack_20 = *puVar4;
  *(uint64_t *)param_2 = uStack_20;
  uStack_18 = puVar4[1];
  *(uint64_t *)(param_2 + 2) = uStack_18;
  puStack_28 = &UNK_18094a770;
  FUN_1806a39a0(param_1,&puStack_28,9);
  return *(char *)(param_1 + 0x1b8) == '\0';
}






// 函数: void FUN_1806a3de0(longlong param_1,longlong param_2)
void FUN_1806a3de0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int8_t auStackX_10 [8];
  
  if (param_2 != 0) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(uVar2 + param_2) != '\0');
    uVar1 = *(uint *)(param_1 + 0x20);
    auStackX_10[0] = 0;
    uVar3 = uVar1 + 1;
    if (uVar1 != 0) {
      uVar3 = uVar1;
    }
    FUN_1806a6540((longlong *)(param_1 + 0x18),uVar3 + (int)uVar2,auStackX_10);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      uVar4 = (ulonglong)uVar1 - 1;
    }
                    // WARNING: Subroutine does not return
    memcpy(uVar4 + *(longlong *)(param_1 + 0x18),param_2,uVar2 & 0xffffffff);
  }
  return;
}






// 函数: void FUN_1806a3dea(longlong param_1,longlong param_2)
void FUN_1806a3dea(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int8_t uStack0000000000000038;
  
  uVar2 = 0xffffffffffffffff;
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(uVar2 + param_2) != '\0');
  uVar1 = *(uint *)(param_1 + 0x20);
  uStack0000000000000038 = 0;
  uVar3 = uVar1 + 1;
  if (uVar1 != 0) {
    uVar3 = uVar1;
  }
  FUN_1806a6540((longlong *)(param_1 + 0x18),uVar3 + (int)uVar2,&stack0x00000038);
  uVar4 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar4 = (ulonglong)uVar1 - 1;
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar4 + *(longlong *)(param_1 + 0x18),param_2,uVar2 & 0xffffffff);
}






// 函数: void FUN_1806a3e60(void)
void FUN_1806a3e60(void)

{
  return;
}



bool FUN_1806a3e70(longlong param_1,uint64_t *param_2)

{
  char cVar1;
  int32_t uVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  longlong *plVar7;
  longlong lVar8;
  int32_t *puVar9;
  int8_t auStackX_8 [8];
  int8_t auStackX_10 [8];
  int32_t uStackX_18;
  int32_t uStackX_1c;
  void *puStack_98;
  uint64_t uStack_90;
  int8_t auStack_88 [112];
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  *(int32_t *)(param_1 + 0xb8) = 2;
  plVar7 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar8 = (**(code **)(*plVar7 + 0xa0))(plVar7,auStack_88,param_2);
  uVar6 = *(uint64_t *)(lVar8 + 0x10);
  *(uint64_t *)(param_1 + 0x138) = *(uint64_t *)(lVar8 + 8);
  *(uint64_t *)(param_1 + 0x140) = uVar6;
  *(int32_t *)(param_1 + 0x148) = *(int32_t *)(lVar8 + 0x18);
  uVar2 = *(int32_t *)(lVar8 + 0x24);
  uVar4 = *(int32_t *)(lVar8 + 0x28);
  uVar5 = *(int32_t *)(lVar8 + 0x2c);
  *(int32_t *)(param_1 + 0x150) = *(int32_t *)(lVar8 + 0x20);
  *(int32_t *)(param_1 + 0x154) = uVar2;
  *(int32_t *)(param_1 + 0x158) = uVar4;
  *(int32_t *)(param_1 + 0x15c) = uVar5;
  *(int32_t *)(param_1 + 0x160) = *(int32_t *)(lVar8 + 0x30);
  *(uint64_t *)(param_1 + 0x168) = *(uint64_t *)(lVar8 + 0x38);
  *(uint64_t *)(param_1 + 0x170) = *(uint64_t *)(lVar8 + 0x40);
  *(int32_t *)(param_1 + 0x178) = *(int32_t *)(lVar8 + 0x48);
  *(uint64_t *)(param_1 + 0x180) = *(uint64_t *)(lVar8 + 0x50);
  *(uint64_t *)(param_1 + 0x188) = *(uint64_t *)(lVar8 + 0x58);
  puVar9 = (int32_t *)FUN_1806a74b0(param_1,auStackX_8,param_2[1]);
  uVar2 = *puVar9;
  puVar9 = (int32_t *)FUN_1806a74b0(param_1,auStackX_10,*param_2);
  uStackX_18 = *puVar9;
  puStack_98 = &UNK_18094a6e0;
  uStack_90 = CONCAT44(uVar2,uStackX_18);
  uStackX_1c = uVar2;
  FUN_1806a39a0(param_1,&puStack_98,0xc);
  puStack_98 = &UNK_18094a308;
  cVar1 = *(char *)(param_1 + 0x1b8);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  return cVar1 == '\0';
}



bool FUN_1806a3fb0(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  uint64_t uVar1;
  int32_t *puVar2;
  int8_t auStackX_8 [8];
  void *puStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  uint64_t uStack_10;
  
  uVar1 = _getCurrentCounterValue_Time_shdfnd_physx__SA_KXZ();
  puVar2 = (int32_t *)FUN_1806a74b0(param_1,auStackX_8,param_3);
  uStack_18 = *puVar2;
  puStack_28 = &UNK_18094a7b0;
  uStack_20 = param_2;
  uStack_10 = uVar1;
  FUN_1806a39a0(param_1,&puStack_28,0x12);
  return *(char *)(param_1 + 0x1b8) == '\0';
}



bool FUN_1806a4040(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t *param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong *plVar3;
  int32_t uVar4;
  longlong *plVar5;
  longlong lVar6;
  int32_t *puVar7;
  int8_t auStackX_8 [8];
  int8_t auStackX_10 [16];
  int8_t auStackX_20 [8];
  void *puStack_c0;
  uint64_t uStack_b8;
  int32_t uStack_b0;
  uint64_t uStack_ac;
  int8_t auStack_a0 [120];
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  *(int32_t *)(param_1 + 0xb8) = 1;
  plVar5 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
  lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,auStack_a0,param_4);
  uVar1 = *(int32_t *)(lVar6 + 0xc);
  uVar2 = *(int32_t *)(lVar6 + 0x10);
  uVar4 = *(int32_t *)(lVar6 + 0x14);
  *(int32_t *)(param_1 + 200) = *(int32_t *)(lVar6 + 8);
  *(int32_t *)(param_1 + 0xcc) = uVar1;
  *(int32_t *)(param_1 + 0xd0) = uVar2;
  *(int32_t *)(param_1 + 0xd4) = uVar4;
  *(int32_t *)(param_1 + 0xd8) = *(int32_t *)(lVar6 + 0x18);
  *(int32_t *)(param_1 + 0xdc) = *(int32_t *)(lVar6 + 0x1c);
  *(int32_t *)(param_1 + 0xe0) = *(int32_t *)(lVar6 + 0x20);
  *(int32_t *)(param_1 + 0xe4) = *(int32_t *)(lVar6 + 0x24);
  *(int32_t *)(param_1 + 0xe8) = *(int32_t *)(lVar6 + 0x28);
  *(int32_t *)(param_1 + 0xec) = *(int32_t *)(lVar6 + 0x2c);
  *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(lVar6 + 0x30);
  *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(lVar6 + 0x38);
  *(uint64_t *)(param_1 + 0x100) = *(uint64_t *)(lVar6 + 0x40);
  *(int32_t *)(param_1 + 0x108) = *(int32_t *)(lVar6 + 0x48);
  *(int32_t *)(param_1 + 0x10c) = *(int32_t *)(lVar6 + 0x4c);
  *(int32_t *)(param_1 + 0x110) = *(int32_t *)(lVar6 + 0x50);
  *(uint64_t *)(param_1 + 0x118) = *(uint64_t *)(lVar6 + 0x58);
  *(uint64_t *)(param_1 + 0x120) = *(uint64_t *)(lVar6 + 0x60);
  *(int8_t *)(param_1 + 0x128) = *(int8_t *)(lVar6 + 0x68);
  *(int8_t *)(param_1 + 0x129) = *(int8_t *)(lVar6 + 0x69);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  puVar7 = (int32_t *)FUN_1806a74b0(param_1,auStackX_8,param_4[1]);
  uVar1 = *puVar7;
  puVar7 = (int32_t *)FUN_1806a74b0(param_1,auStackX_10,*param_4);
  uVar2 = *puVar7;
  puVar7 = (int32_t *)FUN_1806a74b0(param_1,auStackX_20,param_3);
  uStack_b0 = *puVar7;
  uStack_ac = CONCAT44(uVar1,uVar2);
  puStack_c0 = &UNK_18094a760;
  uStack_b8 = param_2;
  FUN_1806a39a0(param_1,&puStack_c0,8);
  return *(char *)(param_1 + 0x1b8) == '\0';
}



longlong * FUN_1806a41e0(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  void *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  void *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if ((int)(*(longlong *)(param_3 + 0x58) - *(longlong *)(param_3 + 0x50) >> 2) == 0) {
    lVar5 = *param_4;
    lVar7 = param_4[1];
  }
  else {
    plVar1 = (longlong *)(param_1 + 400);
    *(longlong *)(param_1 + 0x198) = *plVar1;
    FUN_1806a3210(plVar1,*param_4,(int)param_4[1] - (int)*param_4);
    lVar5 = *(longlong *)(param_3 + 0x50);
    uVar10 = 0;
    if ((int)(*(longlong *)(param_3 + 0x58) - lVar5 >> 2) != 0) {
      do {
        lVar7 = -1;
        puVar2 = *(void **)((ulonglong)*(uint *)(lVar5 + uVar10 * 4) + *param_4);
        puVar8 = &DAT_18098bc73;
        if (puVar2 != (void *)0x0) {
          puVar8 = puVar2;
        }
        puVar2 = &DAT_18098bc73;
        if (puVar8 != (void *)0x0) {
          puVar2 = puVar8;
        }
        do {
          lVar7 = lVar7 + 1;
        } while (puVar2[lVar7] != '\0');
        uVar6 = (int)lVar7 + 1;
        if (puVar8 == (void *)0x0) {
          uVar9 = (ulonglong)uVar6;
          if ((uVar6 != 0) && (uVar6 != 0)) {
            do {
              puVar4 = (int32_t *)FUN_1806a5c40(plVar1,4);
              *puVar4 = 0;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        else if (uVar6 != 0) {
          uVar3 = FUN_1806a5c40(plVar1,uVar6);
                    // WARNING: Subroutine does not return
          memcpy(uVar3,puVar8,uVar6);
        }
        lVar5 = *(longlong *)(param_3 + 0x50);
        uVar6 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar6;
      } while (uVar6 < (uint)(*(longlong *)(param_3 + 0x58) - lVar5 >> 2));
    }
    lVar5 = *plVar1;
    lVar7 = *(longlong *)(param_1 + 0x198);
    param_4[1] = lVar7;
    *param_4 = lVar5;
  }
  *param_2 = lVar5;
  param_2[1] = lVar7;
  return param_2;
}






// 函数: void FUN_1806a420c(longlong param_1,uint64_t param_2,uint64_t param_3,int *param_4)
void FUN_1806a420c(longlong param_1,uint64_t param_2,uint64_t param_3,int *param_4)

{
  longlong *plVar1;
  void *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  void *puVar8;
  ulonglong uVar9;
  longlong *unaff_R12;
  longlong *unaff_R13;
  ulonglong uVar10;
  longlong unaff_R15;
  longlong in_stack_00000060;
  
  plVar1 = (longlong *)(param_1 + 400);
  *(longlong *)(param_1 + 0x198) = *plVar1;
  FUN_1806a3210(plVar1,*(uint64_t *)param_4,param_4[2] - *param_4);
  lVar5 = *(longlong *)(unaff_R15 + 0x50);
  uVar10 = 0;
  if ((int)(*(longlong *)(unaff_R15 + 0x58) - lVar5 >> 2) != 0) {
    do {
      lVar7 = -1;
      puVar2 = *(void **)((ulonglong)*(uint *)(lVar5 + uVar10 * 4) + *unaff_R12);
      puVar8 = &DAT_18098bc73;
      if (puVar2 != (void *)0x0) {
        puVar8 = puVar2;
      }
      puVar2 = &DAT_18098bc73;
      if (puVar8 != (void *)0x0) {
        puVar2 = puVar8;
      }
      do {
        lVar7 = lVar7 + 1;
      } while (puVar2[lVar7] != '\0');
      uVar6 = (int)lVar7 + 1;
      if (puVar8 == (void *)0x0) {
        uVar9 = (ulonglong)uVar6;
        if ((uVar6 != 0) && (uVar6 != 0)) {
          do {
            puVar4 = (int32_t *)FUN_1806a5c40(plVar1,4);
            *puVar4 = 0;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else if (uVar6 != 0) {
        uVar3 = FUN_1806a5c40(plVar1,uVar6);
                    // WARNING: Subroutine does not return
        memcpy(uVar3,puVar8,uVar6);
      }
      lVar5 = *(longlong *)(unaff_R15 + 0x50);
      uVar6 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar6;
    } while (uVar6 < (uint)(*(longlong *)(unaff_R15 + 0x58) - lVar5 >> 2));
  }
  lVar5 = *plVar1;
  lVar7 = *(longlong *)(in_stack_00000060 + 0x198);
  unaff_R12[1] = lVar7;
  *unaff_R12 = lVar5;
  *unaff_R13 = lVar5;
  unaff_R13[1] = lVar7;
  return;
}






// 函数: void FUN_1806a4250(longlong param_1)
void FUN_1806a4250(longlong param_1)

{
  longlong lVar1;
  void *puVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint uVar5;
  longlong lVar6;
  void *puVar7;
  longlong *unaff_RSI;
  ulonglong uVar8;
  longlong *unaff_R12;
  longlong *unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  void *puVar9;
  void *extraout_XMM0_Qa;
  longlong in_stack_00000060;
  void *puStack0000000000000068;
  
  do {
    lVar6 = -1;
    puVar9 = *(void **)((ulonglong)*(uint *)(param_1 + unaff_R14 * 4) + *unaff_R12);
    puVar7 = &DAT_18098bc73;
    if (puVar9 != (void *)0x0) {
      puVar7 = puVar9;
    }
    puVar2 = &DAT_18098bc73;
    if (puVar7 != (void *)0x0) {
      puVar2 = puVar7;
    }
    do {
      lVar6 = lVar6 + 1;
    } while (puVar2[lVar6] != '\0');
    uVar5 = (int)lVar6 + 1;
    if (puVar7 == (void *)0x0) {
      uVar8 = (ulonglong)uVar5;
      if ((uVar5 != 0) && (puStack0000000000000068 = (void *)0x0, uVar5 != 0)) {
        do {
          puVar4 = (int32_t *)FUN_1806a5c40(puVar9,4);
          *puVar4 = 0;
          uVar8 = uVar8 - 1;
          puVar9 = extraout_XMM0_Qa;
        } while (uVar8 != 0);
      }
    }
    else if (uVar5 != 0) {
      puStack0000000000000068 = puVar7;
      uVar3 = FUN_1806a5c40(puVar9,uVar5);
                    // WARNING: Subroutine does not return
      memcpy(uVar3,puVar7,uVar5);
    }
    param_1 = *(longlong *)(unaff_R15 + 0x50);
    uVar5 = (int)unaff_R14 + 1;
    unaff_R14 = (ulonglong)uVar5;
  } while (uVar5 < (uint)(*(longlong *)(unaff_R15 + 0x58) - param_1 >> 2));
  lVar6 = *unaff_RSI;
  lVar1 = *(longlong *)(in_stack_00000060 + 0x198);
  unaff_R12[1] = lVar1;
  *unaff_R12 = lVar6;
  *unaff_R13 = lVar6;
  unaff_R13[1] = lVar1;
  return;
}






// 函数: void FUN_1806a4323(void)
void FUN_1806a4323(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t *unaff_RSI;
  uint64_t *unaff_R12;
  uint64_t *unaff_R13;
  longlong in_stack_00000060;
  
  uVar1 = *unaff_RSI;
  uVar2 = *(uint64_t *)(in_stack_00000060 + 0x198);
  unaff_R12[1] = uVar2;
  *unaff_R12 = uVar1;
  *unaff_R13 = uVar1;
  unaff_R13[1] = uVar2;
  return;
}






