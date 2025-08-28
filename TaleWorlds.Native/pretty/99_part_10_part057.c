#include "TaleWorlds.Native.Split.h"

// 99_part_10_part057.c - 13 个函数

// 函数: void FUN_1806d2e60(longlong *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
void FUN_1806d2e60(longlong *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
                  longlong param_5)

{
  longlong lVar1;
  
  lVar1 = param_5;
  FUN_1806d3200(param_3,param_5);
  (**(code **)*param_3)(param_3,&system_data_c8e4,1);
  FUN_1806d3290(param_3,lVar1 + 0x10);
  param_5._0_1_ = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}






// 函数: void FUN_1806d2f00(longlong *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
void FUN_1806d2f00(longlong *param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4,
                  char param_5)

{
  char *pcVar1;
  longlong lVar2;
  
  pcVar1 = "false";
  if (param_5 != '\0') {
    pcVar1 = "true";
  }
  if (*pcVar1 != '\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pcVar1[lVar2] != '\0');
    (**(code **)*param_3)(param_3);
  }
  param_5 = 0;
  (**(code **)*param_3)(param_3,&param_5,1);
  (**(code **)(*param_1 + 0x10))(param_1,param_4,param_3[4]);
  param_3[3] = 0;
  return;
}



uint64_t *
FUN_1806d2f90(uint64_t *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4,
             longlong param_5,uint64_t param_6,uint64_t param_7)

{
  uint64_t uVar1;
  int8_t *puVar2;
  uint uVar3;
  uint64_t *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint64_t *puStack_468;
  int8_t auStack_460 [512];
  int8_t uStack_260;
  int8_t *puStack_258;
  int32_t uStack_250;
  uint uStack_24c;
  int8_t auStack_248 [512];
  int8_t uStack_48;
  int8_t *puStack_40;
  int32_t uStack_38;
  uint uStack_34;
  
  uVar8 = 0;
  param_1[4] = param_6;
  *param_1 = param_2;
  param_1[5] = param_7;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  puStack_468 = *(uint64_t **)(param_5 + 0x10);
  puStack_258 = auStack_460;
  uStack_250 = 0;
  uStack_260 = 1;
  uStack_24c = 0x40;
  uVar3 = (**(code **)(*param_4 + 0x90))(param_4);
  param_5 = 0;
  FUN_1806d7c60(&puStack_468,uVar3,&param_5);
  (**(code **)(*param_4 + 0x98))(param_4,puStack_258,uVar3,0);
  if (uVar3 != 0) {
    uVar9 = (ulonglong)uVar3;
    param_6 = 0;
    uVar6 = uVar8;
    do {
      plVar5 = *(longlong **)(puStack_258 + uVar8);
      puStack_40 = auStack_248;
      uStack_38 = (int32_t)uVar6;
      uStack_48 = 1;
      uStack_34 = 0x40;
      uVar3 = (**(code **)(*plVar5 + 0x200))(plVar5);
      FUN_1806d7d40(auStack_248,uVar3,&param_6);
      (**(code **)(*plVar5 + 0x210))(plVar5,puStack_40,uVar3,0);
      uVar7 = uVar6;
      if (uVar3 != 0) {
        uVar7 = (ulonglong)uVar3;
        do {
          uVar1 = *(uint64_t *)(puStack_40 + uVar6);
          param_7 = uVar1;
          puVar4 = (uint64_t *)FUN_1806d3700(param_1[5],&param_7,&param_5);
          if ((char)param_5 == '\0') {
            *puVar4 = uVar1;
            puVar4[1] = plVar5;
          }
          uVar6 = uVar6 + 8;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      puVar2 = puStack_40;
      if (((((uStack_34 & 0x7fffffff) != 0) && (-1 < (int)uStack_34)) && (puStack_40 != auStack_248)
          ) && (puStack_40 != (int8_t *)0x0)) {
        plVar5 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar5 + 0x10))(plVar5,puVar2);
      }
      uVar8 = uVar8 + 8;
      uVar9 = uVar9 - 1;
      uVar6 = uVar7;
    } while (uVar9 != 0);
  }
  if ((((uStack_24c & 0x7fffffff) != 0) && (-1 < (int)uStack_24c)) &&
     ((puStack_258 != auStack_460 && (puStack_258 != (int8_t *)0x0)))) {
    (**(code **)(*(longlong *)*puStack_468 + 0x10))();
  }
  return param_1;
}



uint64_t *
FUN_1806d2fa4(uint64_t *param_1,uint64_t param_2,uint64_t param_3,longlong *param_4)

{
  uint64_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint uVar4;
  longlong in_RAX;
  uint64_t *puVar5;
  longlong *plVar6;
  uint64_t unaff_RBX;
  ulonglong uVar7;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  ulonglong uVar8;
  uint64_t unaff_RDI;
  ulonglong uVar9;
  ulonglong uVar10;
  uint64_t *puStackX_20;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RSI;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RDI;
  uVar9 = 0;
  param_1[4] = *(uint64_t *)(unaff_RBP + 0x3b8);
  uVar1 = *(uint64_t *)(unaff_RBP + 0x3c0);
  *param_1 = param_2;
  lVar2 = *(longlong *)(unaff_RBP + 0x3b0);
  param_1[5] = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = lVar2;
  puStackX_20 = *(uint64_t **)(lVar2 + 0x10);
  *(int8_t **)(unaff_RBP + 0x130) = &stack0x00000028;
  lVar2 = *param_4;
  *(int32_t *)(unaff_RBP + 0x138) = 0;
  *(int8_t *)(unaff_RBP + 0x128) = 1;
  *(int32_t *)(unaff_RBP + 0x13c) = 0x40;
  uVar4 = (**(code **)(lVar2 + 0x90))(param_4);
  *(uint64_t *)(unaff_RBP + 0x3b0) = 0;
  FUN_1806d7c60(&puStackX_20,uVar4,unaff_RBP + 0x3b0);
  (**(code **)(*param_4 + 0x98))(param_4,*(uint64_t *)(unaff_RBP + 0x130),uVar4,0);
  if (uVar4 != 0) {
    uVar10 = (ulonglong)uVar4;
    *(uint64_t *)(unaff_RBP + 0x3b8) = 0;
    uVar7 = uVar9;
    do {
      plVar6 = *(longlong **)(uVar9 + *(longlong *)(unaff_RBP + 0x130));
      *(int *)(unaff_RBP + 0x350) = (int)uVar7;
      *(int8_t *)(unaff_RBP + 0x340) = 1;
      *(longlong *)(unaff_RBP + 0x348) = unaff_RBP + 0x140;
      *(int32_t *)(unaff_RBP + 0x354) = 0x40;
      uVar4 = (**(code **)(*plVar6 + 0x200))(plVar6);
      FUN_1806d7d40(unaff_RBP + 0x140,uVar4,unaff_RBP + 0x3b8);
      (**(code **)(*plVar6 + 0x210))(plVar6,*(uint64_t *)(unaff_RBP + 0x348),uVar4,0);
      uVar8 = uVar7;
      if (uVar4 != 0) {
        uVar8 = (ulonglong)uVar4;
        do {
          uVar1 = param_1[5];
          uVar3 = *(uint64_t *)(uVar7 + *(longlong *)(unaff_RBP + 0x348));
          *(uint64_t *)(unaff_RBP + 0x3c0) = uVar3;
          puVar5 = (uint64_t *)FUN_1806d3700(uVar1,unaff_RBP + 0x3c0,unaff_RBP + 0x3b0);
          if (*(char *)(unaff_RBP + 0x3b0) == '\0') {
            *puVar5 = uVar3;
            puVar5[1] = plVar6;
          }
          uVar7 = uVar7 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (((((*(uint *)(unaff_RBP + 0x354) & 0x7fffffff) != 0) &&
           (-1 < (int)*(uint *)(unaff_RBP + 0x354))) &&
          (lVar2 = *(longlong *)(unaff_RBP + 0x348), lVar2 != unaff_RBP + 0x140)) && (lVar2 != 0)) {
        plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar6 + 0x10))(plVar6,lVar2);
      }
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 - 1;
      uVar7 = uVar8;
    } while (uVar10 != 0);
  }
  if ((((*(uint *)(unaff_RBP + 0x13c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + 0x13c))) &&
     ((*(int8_t **)(unaff_RBP + 0x130) != &stack0x00000028 &&
      (*(int8_t **)(unaff_RBP + 0x130) != (int8_t *)0x0)))) {
    (**(code **)(*(longlong *)*puStackX_20 + 0x10))();
  }
  return param_1;
}






// 函数: void FUN_1806d305a(void)
void FUN_1806d305a(void)

{
  uint64_t uVar1;
  uint64_t uVar2;
  longlong lVar3;
  uint uVar4;
  uint64_t *puVar5;
  longlong *plVar6;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar7;
  uint unaff_EDI;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_R15;
  uint64_t *puStackX_20;
  
  uVar8 = unaff_RSI & 0xffffffff;
  uVar9 = (ulonglong)unaff_EDI;
  *(ulonglong *)(unaff_RBP + 0x3b8) = unaff_RSI;
  do {
    plVar6 = *(longlong **)(uVar8 + *(longlong *)(unaff_RBP + 0x130));
    *(int *)(unaff_RBP + 0x350) = (int)unaff_RSI;
    *(int8_t *)(unaff_RBP + 0x340) = 1;
    *(longlong *)(unaff_RBP + 0x348) = unaff_RBP + 0x140;
    *(int32_t *)(unaff_RBP + 0x354) = 0x40;
    uVar4 = (**(code **)(*plVar6 + 0x200))(plVar6);
    FUN_1806d7d40(unaff_RBP + 0x140,uVar4,unaff_RBP + 0x3b8);
    (**(code **)(*plVar6 + 0x210))(plVar6,*(uint64_t *)(unaff_RBP + 0x348),uVar4,0);
    uVar7 = unaff_RSI;
    if (uVar4 != 0) {
      uVar7 = (ulonglong)uVar4;
      do {
        uVar1 = *(uint64_t *)(unaff_R15 + 0x28);
        uVar2 = *(uint64_t *)(unaff_RSI + *(longlong *)(unaff_RBP + 0x348));
        *(uint64_t *)(unaff_RBP + 0x3c0) = uVar2;
        puVar5 = (uint64_t *)FUN_1806d3700(uVar1,unaff_RBP + 0x3c0,unaff_RBP + 0x3b0);
        if (*(char *)(unaff_RBP + 0x3b0) == '\0') {
          *puVar5 = uVar2;
          puVar5[1] = plVar6;
        }
        unaff_RSI = unaff_RSI + 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (((((*(uint *)(unaff_RBP + 0x354) & 0x7fffffff) != 0) &&
         (-1 < (int)*(uint *)(unaff_RBP + 0x354))) &&
        (lVar3 = *(longlong *)(unaff_RBP + 0x348), lVar3 != unaff_RBP + 0x140)) && (lVar3 != 0)) {
      plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar6 + 0x10))(plVar6,lVar3);
    }
    uVar8 = uVar8 + 8;
    uVar9 = uVar9 - 1;
    unaff_RSI = uVar7;
  } while (uVar9 != 0);
  if ((((*(uint *)(unaff_RBP + 0x13c) & 0x7fffffff) != 0) &&
      (-1 < (int)*(uint *)(unaff_RBP + 0x13c))) &&
     ((*(int8_t **)(unaff_RBP + 0x130) != &stack0x00000028 &&
      (*(int8_t **)(unaff_RBP + 0x130) != (int8_t *)0x0)))) {
    (**(code **)(*(longlong *)*puStackX_20 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806d31a5(void)
void FUN_1806d31a5(void)

{
  longlong unaff_RBP;
  uint64_t *puStackX_20;
  
  if (((((*(uint *)(unaff_RBP + 0x13c) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x13c))) &&
      (*(int8_t **)(unaff_RBP + 0x130) != &stack0x00000028)) &&
     (*(int8_t **)(unaff_RBP + 0x130) != (int8_t *)0x0)) {
    (**(code **)(*(longlong *)*puStackX_20 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806d31ca(void)
void FUN_1806d31ca(void)

{
  int in_EAX;
  longlong unaff_RBP;
  uint64_t *puStackX_20;
  
  if (((-1 < in_EAX) && (*(int8_t **)(unaff_RBP + 0x130) != &stack0x00000028)) &&
     (*(int8_t **)(unaff_RBP + 0x130) != (int8_t *)0x0)) {
    (**(code **)(*(longlong *)*puStackX_20 + 0x10))();
  }
  return;
}



uint64_t * FUN_1806d3200(uint64_t *param_1,int32_t *param_2)

{
  FUN_1806d3300(param_1,*param_2);
  (**(code **)*param_1)(param_1,&system_data_c8e4,1);
  FUN_1806d3300(param_1,param_2[1]);
  (**(code **)*param_1)(param_1,&system_data_c8e4,1);
  FUN_1806d3300(param_1,param_2[2]);
  (**(code **)*param_1)(param_1,&system_data_c8e4,1);
  FUN_1806d3300(param_1,param_2[3]);
  return param_1;
}



uint64_t * FUN_1806d3290(uint64_t *param_1,int32_t *param_2)

{
  FUN_1806d3300(param_1,*param_2);
  (**(code **)*param_1)(param_1,&system_data_c8e4,1);
  FUN_1806d3300(param_1,param_2[1]);
  (**(code **)*param_1)(param_1,&system_data_c8e4,1);
  FUN_1806d3300(param_1,param_2[2]);
  return param_1;
}






// 函数: void FUN_1806d3300(void)
void FUN_1806d3300(void)

{
  int8_t auStack_98 [144];
  
                    // WARNING: Subroutine does not return
  memset(auStack_98,0,0x80);
}



uint64_t * FUN_1806d3390(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &UNK_18094b1b8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      return param_1;
    }
    _guard_check_icall(param_1,0x10);
  }
  return param_1;
}



uint64_t * FUN_1806d33e0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094be80;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



uint64_t * FUN_1806d3410(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094be80;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



longlong FUN_1806d3440(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  void *puVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 * 8;
  if ((*(char *)(param_1 + 0x28) == '\0') && (uVar2 < 0x29)) {
    *(int8_t *)(param_1 + 0x28) = 1;
    return param_1;
  }
  if (uVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar6 = &UNK_18094a1f0;
    }
    else {
      puVar6 = (void *)__std_type_info_name(0x180bfc538,0x180c827e0);
    }
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar2,puVar6,&UNK_18094a610,0x229);
    return lVar5;
  }
  return 0;
}



uint64_t FUN_1806d346a(void)

{
  char cVar1;
  int in_EAX;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  void *puVar5;
  
  if (in_EAX != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar5 = &UNK_18094a1f0;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc538,0x180c827e0);
    }
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2,in_EAX,puVar5,&UNK_18094a610,0x229);
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1806d34e2(void)

{
  return 0;
}



uint64_t FUN_1806d34f0(void)

{
  return 0;
}



longlong FUN_1806d3500(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  void *puVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = param_2 * 8;
  if ((*(char *)(param_1 + 0x200) == '\0') && (uVar2 < 0x201)) {
    *(int8_t *)(param_1 + 0x200) = 1;
    return param_1;
  }
  if (uVar2 != 0) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar4 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar1 == '\0') {
      puVar6 = &UNK_18094a1f0;
    }
    else {
      puVar6 = (void *)__std_type_info_name(0x180bfc590,0x180c827e0);
    }
    lVar5 = (**(code **)(*plVar3 + 8))(plVar3,uVar2,puVar6,&UNK_18094a610,0x229);
    return lVar5;
  }
  return 0;
}



uint64_t FUN_1806d3532(void)

{
  char cVar1;
  int in_EAX;
  longlong *plVar2;
  longlong *plVar3;
  uint64_t uVar4;
  void *puVar5;
  
  if (in_EAX != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar5 = &UNK_18094a1f0;
    }
    else {
      puVar5 = (void *)__std_type_info_name(0x180bfc590,0x180c827e0);
    }
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2,in_EAX,puVar5,&UNK_18094a610,0x229);
    return uVar4;
  }
  return 0;
}



uint64_t FUN_1806d35aa(void)

{
  return 0;
}



uint64_t FUN_1806d35b8(void)

{
  return 0;
}



uint64_t FUN_1806d35c0(uint64_t param_1,longlong param_2,uint64_t param_3,int32_t param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *puVar4;
  uint64_t uVar5;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (void *)__std_type_info_name(0x180bfc560,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,param_2,puVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}






// 函数: void FUN_1806d35dd(void)
void FUN_1806d35dd(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 != '\0') {
    __std_type_info_name(0x180bfc560,0x180c827e0);
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



uint64_t FUN_1806d3647(void)

{
  return 0;
}



uint64_t FUN_1806d3660(uint64_t param_1,longlong param_2,uint64_t param_3,int32_t param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *puVar4;
  uint64_t uVar5;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (void *)__std_type_info_name(0x180bfc5c0,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,param_2,puVar4,param_3,param_4);
    return uVar5;
  }
  return 0;
}






// 函数: void FUN_1806d367d(void)
void FUN_1806d367d(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 != '\0') {
    __std_type_info_name(0x180bfc5c0,0x180c827e0);
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  return;
}



uint64_t FUN_1806d36e7(void)

{
  return 0;
}



longlong FUN_1806d3700(longlong param_1,longlong *param_2,int8_t *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
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
    uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & *(int *)(param_1 + 0x2c) - 1U);
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar2 * 4);
    bVar5 = uVar3 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 0x10) == lVar1) break;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
      bVar5 = uVar3 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x10);
    }
  }
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x28)) goto LAB_1806d385a;
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 == 0) {
    uVar4 = 0x10;
LAB_1806d37f1:
    FUN_1806d7a90(param_1,uVar4);
    uVar3 = *(uint *)(param_1 + 0x2c);
  }
  else {
    uVar4 = uVar3 * 2;
    if (uVar3 < uVar4) goto LAB_1806d37f1;
  }
  uVar2 = *param_2 + ~(*param_2 << 0x20);
  uVar2 = uVar2 ^ uVar2 >> 0x16;
  uVar2 = uVar2 + ~(uVar2 << 0xd);
  uVar2 = (uVar2 >> 8 ^ uVar2) * 9;
  uVar2 = uVar2 ^ uVar2 >> 0xf;
  uVar2 = uVar2 + ~(uVar2 << 0x1b);
  uVar2 = (ulonglong)(((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & uVar3 - 1);
LAB_1806d385a:
  uVar3 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_1 + 0x34) = uVar3 + 1;
  *(int32_t *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar3 * 4) =
       *(int32_t *)(*(longlong *)(param_1 + 0x20) + uVar2 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x20) + uVar2 * 4) = uVar3;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  return (ulonglong)uVar3 * 0x10 + *(longlong *)(param_1 + 0x10);
}






// 函数: void FUN_1806d3900(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1806d3900(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)PxGetFoundation();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,0x78,&UNK_18094c758,&UNK_18094c718,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  lVar3 = param_2[0xb];
  plVar5[10] = param_2[10];
  plVar5[0xb] = lVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(int32_t *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x6c) = uVar2;
  plVar5[0xe] = param_2[0xe];
  (**(code **)(*plVar5 + 0x1b0))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x78);
                    // WARNING: Could not recover jumptable at 0x0001806d39d2. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}






// 函数: void FUN_1806d39e0(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1806d39e0(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)PxGetFoundation();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,0x70,&UNK_18094c758,&UNK_18094c718,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x54);
  lVar3 = param_2[0xb];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x5c);
  *(int *)(plVar5 + 10) = (int)param_2[10];
  *(int32_t *)((longlong)plVar5 + 0x54) = uVar1;
  *(int *)(plVar5 + 0xb) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x5c) = uVar2;
  uVar1 = *(int32_t *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(int32_t *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x6c) = uVar2;
  (**(code **)(*plVar5 + 0x158))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x70);
                    // WARNING: Could not recover jumptable at 0x0001806d3aa8. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}






// 函数: void FUN_1806d3ab0(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1806d3ab0(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)PxGetFoundation();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,0x70,&UNK_18094c758,&UNK_18094c718,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x54);
  lVar3 = param_2[0xb];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x5c);
  *(int *)(plVar5 + 10) = (int)param_2[10];
  *(int32_t *)((longlong)plVar5 + 0x54) = uVar1;
  *(int *)(plVar5 + 0xb) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x5c) = uVar2;
  uVar1 = *(int32_t *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(int32_t *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x6c) = uVar2;
  (**(code **)(*plVar5 + 0x108))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x70);
                    // WARNING: Could not recover jumptable at 0x0001806d3b78. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}






// 函数: void FUN_1806d3b80(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1806d3b80(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)PxGetFoundation();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,0x70,&UNK_18094c758,&UNK_18094c718,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x54);
  lVar3 = param_2[0xb];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x5c);
  *(int *)(plVar5 + 10) = (int)param_2[10];
  *(int32_t *)((longlong)plVar5 + 0x54) = uVar1;
  *(int *)(plVar5 + 0xb) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x5c) = uVar2;
  uVar1 = *(int32_t *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(int32_t *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x6c) = uVar2;
  (**(code **)(*plVar5 + 0x140))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x70);
                    // WARNING: Could not recover jumptable at 0x0001806d3c48. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}






// 函数: void FUN_1806d3c50(uint64_t param_1,longlong *param_2,longlong *param_3)
void FUN_1806d3c50(uint64_t param_1,longlong *param_2,longlong *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)PxGetFoundation();
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
  plVar5 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,0x70,&UNK_18094c758,&UNK_18094c718,0xc5);
  lVar3 = param_2[1];
  *plVar5 = *param_2;
  plVar5[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[2] = param_2[2];
  plVar5[3] = lVar3;
  lVar3 = param_2[5];
  plVar5[4] = param_2[4];
  plVar5[5] = lVar3;
  lVar3 = param_2[7];
  plVar5[6] = param_2[6];
  plVar5[7] = lVar3;
  lVar3 = param_2[9];
  plVar5[8] = param_2[8];
  plVar5[9] = lVar3;
  uVar1 = *(int32_t *)((longlong)param_2 + 0x54);
  lVar3 = param_2[0xb];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x5c);
  *(int *)(plVar5 + 10) = (int)param_2[10];
  *(int32_t *)((longlong)plVar5 + 0x54) = uVar1;
  *(int *)(plVar5 + 0xb) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x5c) = uVar2;
  uVar1 = *(int32_t *)((longlong)param_2 + 100);
  lVar3 = param_2[0xd];
  uVar2 = *(int32_t *)((longlong)param_2 + 0x6c);
  *(int *)(plVar5 + 0xc) = (int)param_2[0xc];
  *(int32_t *)((longlong)plVar5 + 100) = uVar1;
  *(int *)(plVar5 + 0xd) = (int)lVar3;
  *(int32_t *)((longlong)plVar5 + 0x6c) = uVar2;
  (**(code **)(*plVar5 + 0x170))(plVar5);
  (**(code **)(*param_3 + 0x10))(param_3,plVar5,0x70);
                    // WARNING: Could not recover jumptable at 0x0001806d3d18. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar4 + 0x10))(plVar4,plVar5);
  return;
}






