#include "TaleWorlds.Native.Split.h"

// 99_part_10_part013_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806aa710(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1806aa710(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uStackX_8;
  char acStackX_18 [8];
  
  uStackX_8 = CONCAT44(uStackX_8._4_4_,param_3);
  puVar1 = (undefined4 *)FUN_1806aad10(param_1 + 0x48,&uStackX_8,acStackX_18);
  if (acStackX_18[0] == '\0') {
    *puVar1 = param_3;
    *(undefined8 *)(puVar1 + 2) = param_2;
  }
  uStackX_8 = param_2;
  puVar2 = (undefined8 *)FUN_1806a45c0(param_1 + 0x80,&uStackX_8,acStackX_18);
  if (acStackX_18[0] == '\0') {
    *puVar2 = param_2;
    *(undefined4 *)(puVar2 + 1) = param_3;
  }
  return;
}



undefined8 FUN_1806aa790(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulonglong)param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc300,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)param_2 << 2,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa79c(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc300,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))
                      (plVar2,(param_2 & 0xffffffff) << 2,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa815(void)

{
  return 0;
}



undefined8 FUN_1806aa821(void)

{
  return 0;
}



undefined8 FUN_1806aa830(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulonglong)param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc390,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)param_2 << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa83c(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc390,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))
                      (plVar2,(param_2 & 0xffffffff) << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa8b5(void)

{
  return 0;
}



undefined8 FUN_1806aa8c1(void)

{
  return 0;
}



undefined8 FUN_1806aa8d0(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulonglong)param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc470,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)param_2 << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa8dc(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc470,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))
                      (plVar2,(param_2 & 0xffffffff) << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa955(void)

{
  return 0;
}



undefined8 FUN_1806aa961(void)

{
  return 0;
}



undefined8 FUN_1806aa970(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulonglong)param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc348,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)param_2 << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa97c(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc348,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))
                      (plVar2,(param_2 & 0xffffffff) << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aa9f5(void)

{
  return 0;
}



undefined8 FUN_1806aaa01(void)

{
  return 0;
}



undefined8 FUN_1806aaa10(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulonglong)param_2 * 0x78 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc400,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)param_2 * 0x78,puVar4,&UNK_18094abe0,0x229)
    ;
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aaa1e(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (in_RAX * 0x78 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc400,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,in_RAX * 0x78,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aaa95(void)

{
  return 0;
}



undefined8 FUN_1806aaaa1(void)

{
  return 0;
}



undefined8 FUN_1806aaab0(undefined8 param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((ulonglong)param_2 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc440,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))(plVar2,(ulonglong)param_2 << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aaabc(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    plVar3 = (longlong *)PxGetFoundation();
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (cVar1 == '\0') {
      puVar4 = &UNK_18094a1f0;
    }
    else {
      puVar4 = (undefined *)__std_type_info_name(0x180bfc440,0x180c827e0);
    }
    uVar5 = (**(code **)(*plVar2 + 8))
                      (plVar2,(param_2 & 0xffffffff) << 3,puVar4,&UNK_18094abe0,0x229);
    return uVar5;
  }
  return 0;
}



undefined8 FUN_1806aab35(void)

{
  return 0;
}



undefined8 FUN_1806aab41(void)

{
  return 0;
}



undefined8 *
FUN_1806aab50(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uStackX_8;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [24];
  int iStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  char cStack_98;
  undefined1 auStack_88 [24];
  int iStack_70;
  int iStack_68;
  undefined4 uStack_64;
  char cStack_18;
  
  (**(code **)(*param_1 + 0x20))(param_1,auStack_108,param_4);
  if ((cStack_98 != '\0') &&
     ((**(code **)(*param_1 + 0x20))(param_1,auStack_88,param_3), cStack_18 != '\0')) {
    cVar1 = '\0';
    uStackX_8 = 0;
    cVar2 = '\0';
    if ((iStack_70 == iStack_f0) ||
       (((-1 < iStack_68 && (-1 < iStack_e8)) &&
        ((cVar1 = func_0x0001806ace30(auStack_118,&uStackX_8,uStack_64,uStack_e4), cVar2 = cVar1,
         iStack_68 == iStack_e8 || (cVar2 = '\x01', cVar1 != '\0')))))) {
      param_2[2] = uStackX_8;
      *(undefined4 *)param_2 = param_3;
      *(undefined4 *)((longlong)param_2 + 4) = param_4;
      *(char *)(param_2 + 1) = cVar1;
      *(char *)((longlong)param_2 + 9) = cVar2;
      return param_2;
    }
  }
  *param_2 = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return param_2;
}



longlong FUN_1806aad10(longlong param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = *param_2;
    uVar2 = ~(iVar1 << 0xf) + iVar1;
    uVar2 = (uVar2 >> 10 ^ uVar2) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + ~(uVar2 << 0xb);
    uVar4 = (ulonglong)((uVar2 >> 0x10 ^ uVar2) & *(int *)(param_1 + 0x24) - 1U);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
    bVar5 = uVar2 == 0xffffffff;
    if (!bVar5) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 0x10) == iVar1) break;
        uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      bVar5 = uVar2 == 0xffffffff;
    }
    *param_3 = !bVar5;
    if (!bVar5) {
      return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x20)) goto LAB_1806aae19;
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar2 == 0) {
    uVar3 = 0x10;
LAB_1806aadd7:
    FUN_1806b0560(param_1,uVar3);
    uVar2 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar3 = uVar2 * 2;
    if (uVar2 < uVar3) goto LAB_1806aadd7;
  }
  uVar3 = *param_2 + ~(*param_2 << 0xf);
  uVar3 = (uVar3 >> 10 ^ uVar3) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = uVar3 + ~(uVar3 << 0xb);
  uVar4 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar2 - 1);
LAB_1806aae19:
  uVar2 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar2 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar4 * 4) = uVar2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return (ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 8);
}



longlong FUN_1806aae60(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong lVar12;
  bool bVar13;
  
  uVar9 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    uVar4 = FUN_1806ae5f0();
    uVar9 = (ulonglong)uVar4;
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar9 * 4);
    bVar13 = uVar4 == 0xffffffff;
    if (!bVar13) {
      lVar3 = *(longlong *)(param_1 + 8);
      puVar8 = &DAT_18098bc73;
      if ((undefined *)*param_2 != (undefined *)0x0) {
        puVar8 = (undefined *)*param_2;
      }
      do {
        lVar12 = (ulonglong)uVar4 * 0x20;
        pcVar6 = "";
        if (*(char **)(lVar12 + lVar3) != (char *)0x0) {
          pcVar6 = *(char **)(lVar12 + lVar3);
        }
        lVar10 = (longlong)puVar8 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar10];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          pcVar6 = *(char **)(lVar12 + 8 + lVar3);
          puVar11 = &DAT_18098bc73;
          if ((undefined *)param_2[1] != (undefined *)0x0) {
            puVar11 = (undefined *)param_2[1];
          }
          pcVar5 = "";
          if (pcVar6 != (char *)0x0) {
            pcVar5 = pcVar6;
          }
          lVar10 = (longlong)puVar11 - (longlong)pcVar5;
          do {
            cVar1 = *pcVar5;
            cVar2 = pcVar5[lVar10];
            if (cVar1 != cVar2) break;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (cVar1 == cVar2) {
            pcVar6 = *(char **)(lVar12 + 0x10 + lVar3);
            puVar11 = &DAT_18098bc73;
            if ((undefined *)param_2[2] != (undefined *)0x0) {
              puVar11 = (undefined *)param_2[2];
            }
            pcVar5 = "";
            if (pcVar6 != (char *)0x0) {
              pcVar5 = pcVar6;
            }
            lVar12 = (longlong)puVar11 - (longlong)pcVar5;
            do {
              cVar1 = *pcVar5;
              cVar2 = pcVar5[lVar12];
              if (cVar1 != cVar2) break;
              pcVar5 = pcVar5 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) break;
          }
        }
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 4);
      } while (uVar4 != 0xffffffff);
      bVar13 = uVar4 == 0xffffffff;
    }
    *param_3 = !bVar13;
    if (!bVar13) {
      return (ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 8);
    }
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_1 + 0x20)) goto LAB_1806aaff4;
  uVar4 = *(uint *)(param_1 + 0x24);
  if (uVar4 == 0) {
    uVar7 = 0x10;
LAB_1806aafdb:
    FUN_1806b0720(param_1,uVar7);
    uVar4 = *(uint *)(param_1 + 0x24);
  }
  else {
    uVar7 = uVar4 * 2;
    if (uVar4 < uVar7) goto LAB_1806aafdb;
  }
  uVar4 = FUN_1806ae5f0(param_1,param_2,uVar4);
  uVar9 = (ulonglong)uVar4;
LAB_1806aaff4:
  uVar4 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar4 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar9 * 4) = uVar4;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  return (ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 8);
}



longlong FUN_1806aaea1(undefined *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong unaff_RBX;
  undefined *puVar7;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  uint in_R10D;
  undefined8 unaff_R14;
  
  lVar3 = *(longlong *)(unaff_RBX + 8);
  puVar7 = &DAT_18098bc73;
  if (param_1 != (undefined *)0x0) {
    puVar7 = param_1;
  }
  do {
    lVar10 = (ulonglong)in_R10D * 0x20;
    pcVar6 = "";
    if (*(char **)(lVar10 + lVar3) != (char *)0x0) {
      pcVar6 = *(char **)(lVar10 + lVar3);
    }
    lVar8 = (longlong)puVar7 - (longlong)pcVar6;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      pcVar6 = *(char **)(lVar10 + 8 + lVar3);
      puVar9 = &DAT_18098bc73;
      if (*(undefined **)(unaff_RDI + 8) != (undefined *)0x0) {
        puVar9 = *(undefined **)(unaff_RDI + 8);
      }
      pcVar5 = "";
      if (pcVar6 != (char *)0x0) {
        pcVar5 = pcVar6;
      }
      lVar8 = (longlong)puVar9 - (longlong)pcVar5;
      do {
        cVar1 = *pcVar5;
        cVar2 = pcVar5[lVar8];
        if (cVar1 != cVar2) break;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        pcVar6 = *(char **)(lVar10 + 0x10 + lVar3);
        puVar9 = &DAT_18098bc73;
        if (*(undefined **)(unaff_RDI + 0x10) != (undefined *)0x0) {
          puVar9 = *(undefined **)(unaff_RDI + 0x10);
        }
        pcVar5 = "";
        if (pcVar6 != (char *)0x0) {
          pcVar5 = pcVar6;
        }
        lVar10 = (longlong)puVar9 - (longlong)pcVar5;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[lVar10];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) break;
      }
    }
    in_R10D = *(uint *)(*(longlong *)(unaff_RBX + 0x10) + (ulonglong)in_R10D * 4);
  } while (in_R10D != 0xffffffff);
  *(bool *)unaff_R14 = in_R10D != 0xffffffff;
  if (in_R10D == 0xffffffff) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar4 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar4 == 0) || (uVar4 < uVar4 * 2)) {
        FUN_1806b0720();
      }
      uVar4 = FUN_1806ae5f0();
      unaff_RSI = (ulonglong)uVar4;
    }
    uVar4 = *(uint *)(unaff_RBX + 0x2c);
    *(uint *)(unaff_RBX + 0x2c) = uVar4 + 1;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + (ulonglong)uVar4 * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x18) + (unaff_RSI & 0xffffffff) * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x18) + (unaff_RSI & 0xffffffff) * 4) = uVar4;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
    return (ulonglong)uVar4 * 0x20 + *(longlong *)(unaff_RBX + 8);
  }
  return (ulonglong)in_R10D * 0x20 + *(longlong *)(unaff_RBX + 8);
}



longlong FUN_1806aaf97(void)

{
  uint uVar1;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  uint in_R10D;
  undefined8 unaff_R14;
  bool in_ZF;
  
  *(bool *)unaff_R14 = !in_ZF;
  if (in_ZF) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar1 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar1 == 0) || (uVar1 < uVar1 * 2)) {
        FUN_1806b0720();
      }
      uVar1 = FUN_1806ae5f0();
      unaff_RSI = (ulonglong)uVar1;
    }
    uVar1 = *(uint *)(unaff_RBX + 0x2c);
    *(uint *)(unaff_RBX + 0x2c) = uVar1 + 1;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + (ulonglong)uVar1 * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x18) + (unaff_RSI & 0xffffffff) * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x18) + (unaff_RSI & 0xffffffff) * 4) = uVar1;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
    return (ulonglong)uVar1 * 0x20 + *(longlong *)(unaff_RBX + 8);
  }
  return (ulonglong)in_R10D * 0x20 + *(longlong *)(unaff_RBX + 8);
}



longlong FUN_1806ab040(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined *puVar11;
  bool bVar12;
  
  uVar9 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    uVar5 = FUN_1806ae680();
    uVar9 = (ulonglong)uVar5;
    uVar5 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar9 * 4);
    bVar12 = uVar5 == 0xffffffff;
    if (!bVar12) {
      puVar8 = &DAT_18098bc73;
      if ((undefined *)*param_2 != (undefined *)0x0) {
        puVar8 = (undefined *)*param_2;
      }
      do {
        uVar6 = (ulonglong)uVar5;
        pcVar4 = *(char **)(*(longlong *)(param_1 + 8) + uVar6 * 0x18);
        pcVar7 = "";
        if (pcVar4 != (char *)0x0) {
          pcVar7 = pcVar4;
        }
        lVar10 = (longlong)puVar8 - (longlong)pcVar7;
        do {
          cVar2 = *pcVar7;
          cVar3 = pcVar7[lVar10];
          if (cVar2 != cVar3) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        if (cVar2 == cVar3) {
          pcVar4 = *(char **)(*(longlong *)(param_1 + 8) + uVar6 * 0x18 + 8);
          puVar11 = &DAT_18098bc73;
          if ((undefined *)param_2[1] != (undefined *)0x0) {
            puVar11 = (undefined *)param_2[1];
          }
          pcVar7 = "";
          if (pcVar4 != (char *)0x0) {
            pcVar7 = pcVar4;
          }
          lVar10 = (longlong)puVar11 - (longlong)pcVar7;
          do {
            cVar2 = *pcVar7;
            cVar3 = pcVar7[lVar10];
            if (cVar2 != cVar3) break;
            pcVar7 = pcVar7 + 1;
          } while (cVar3 != '\0');
          if (cVar2 == cVar3) break;
        }
        uVar5 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar6 * 4);
      } while (uVar5 != 0xffffffff);
      bVar12 = uVar5 == 0xffffffff;
    }
    *param_3 = !bVar12;
    if (!bVar12) {
      uVar6 = (ulonglong)uVar5;
      goto LAB_1806ab1b2;
    }
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar5 = *(uint *)(param_1 + 0x24);
    if (uVar5 == 0) {
      uVar1 = 0x10;
LAB_1806ab167:
      FUN_1806b0950(param_1,uVar1);
    }
    else {
      uVar1 = uVar5 * 2;
      if (uVar5 < uVar1) goto LAB_1806ab167;
    }
    uVar5 = FUN_1806ae680(param_1,param_2);
    uVar9 = (ulonglong)uVar5;
  }
  uVar5 = *(uint *)(param_1 + 0x2c);
  uVar6 = (ulonglong)uVar5;
  *(uint *)(param_1 + 0x2c) = uVar5 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar6 * 4) =
       *(undefined4 *)(uVar9 * 4 + *(longlong *)(param_1 + 0x18));
  *(uint *)(uVar9 * 4 + *(longlong *)(param_1 + 0x18)) = uVar5;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_1806ab1b2:
  return *(longlong *)(param_1 + 8) + uVar6 * 0x18;
}



longlong FUN_1806ab07d(undefined *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong unaff_RBX;
  undefined *puVar7;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  undefined *puVar9;
  uint in_R11D;
  undefined8 unaff_R14;
  
  puVar7 = &DAT_18098bc73;
  if (param_1 != (undefined *)0x0) {
    puVar7 = param_1;
  }
  do {
    uVar5 = (ulonglong)in_R11D;
    pcVar3 = *(char **)(*(longlong *)(unaff_RBX + 8) + uVar5 * 0x18);
    pcVar6 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar6 = pcVar3;
    }
    lVar8 = (longlong)puVar7 - (longlong)pcVar6;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      pcVar3 = *(char **)(*(longlong *)(unaff_RBX + 8) + uVar5 * 0x18 + 8);
      puVar9 = &DAT_18098bc73;
      if (*(undefined **)(unaff_RDI + 8) != (undefined *)0x0) {
        puVar9 = *(undefined **)(unaff_RDI + 8);
      }
      pcVar6 = "";
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
      }
      lVar8 = (longlong)puVar9 - (longlong)pcVar6;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar8];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) break;
    }
    in_R11D = *(uint *)(*(longlong *)(unaff_RBX + 0x10) + uVar5 * 4);
  } while (in_R11D != 0xffffffff);
  *(bool *)unaff_R14 = in_R11D != 0xffffffff;
  if (in_R11D != 0xffffffff) {
    uVar5 = (ulonglong)in_R11D;
  }
  else {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar4 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar4 == 0) || (uVar4 < uVar4 * 2)) {
        FUN_1806b0950();
      }
      uVar4 = FUN_1806ae680();
      unaff_RSI = (ulonglong)uVar4;
    }
    uVar4 = *(uint *)(unaff_RBX + 0x2c);
    uVar5 = (ulonglong)uVar4;
    *(uint *)(unaff_RBX + 0x2c) = uVar4 + 1;
    lVar8 = (unaff_RSI & 0xffffffff) * 4;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + uVar5 * 4) =
         *(undefined4 *)(lVar8 + *(longlong *)(unaff_RBX + 0x18));
    *(uint *)(lVar8 + *(longlong *)(unaff_RBX + 0x18)) = uVar4;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
  }
  return *(longlong *)(unaff_RBX + 8) + uVar5 * 0x18;
}



longlong FUN_1806ab138(void)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong unaff_RBX;
  ulonglong unaff_RSI;
  uint in_R11D;
  undefined8 unaff_R14;
  bool in_ZF;
  
  *(bool *)unaff_R14 = !in_ZF;
  if (in_ZF) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar2 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar2 == 0) || (uVar2 < uVar2 * 2)) {
        FUN_1806b0950();
      }
      uVar2 = FUN_1806ae680();
      unaff_RSI = (ulonglong)uVar2;
    }
    uVar2 = *(uint *)(unaff_RBX + 0x2c);
    uVar3 = (ulonglong)uVar2;
    *(uint *)(unaff_RBX + 0x2c) = uVar2 + 1;
    lVar1 = (unaff_RSI & 0xffffffff) * 4;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + uVar3 * 4) =
         *(undefined4 *)(lVar1 + *(longlong *)(unaff_RBX + 0x18));
    *(uint *)(lVar1 + *(longlong *)(unaff_RBX + 0x18)) = uVar2;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
  }
  else {
    uVar3 = (ulonglong)in_R11D;
  }
  return *(longlong *)(unaff_RBX + 8) + uVar3 * 0x18;
}



longlong FUN_1806ab1d0(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar12 = 0;
  uVar9 = 0x1505;
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
  }
  else {
    uVar11 = 0x1505;
    pbVar6 = (byte *)*param_2;
    bVar3 = *pbVar6;
    pbVar2 = pbVar6;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar11 = uVar11 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x24) - 1U & uVar11);
    uVar11 = *(uint *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
    uVar8 = (ulonglong)uVar11;
    bVar13 = uVar11 == 0xffffffff;
    if (!bVar13) {
      do {
        pcVar7 = *(char **)(*(longlong *)(param_1 + 8) + uVar8 * 0x10);
        lVar10 = (longlong)pbVar6 - (longlong)pcVar7;
        do {
          cVar4 = *pcVar7;
          cVar5 = pcVar7[lVar10];
          if (cVar4 != cVar5) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar5 != '\0');
      } while ((cVar4 != cVar5) &&
              (uVar11 = *(uint *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4),
              uVar8 = (ulonglong)uVar11, uVar11 != 0xffffffff));
      bVar13 = (int)uVar8 == -1;
    }
    *param_3 = !bVar13;
    if (!bVar13) goto LAB_1806ab329;
  }
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar11 = *(uint *)(param_1 + 0x24);
    if (uVar11 == 0) {
      uVar1 = 0x10;
LAB_1806ab2c4:
      FUN_1806b0b40(param_1,uVar1);
    }
    else {
      uVar1 = uVar11 * 2;
      if (uVar11 < uVar1) goto LAB_1806ab2c4;
    }
    pbVar2 = (byte *)*param_2;
    bVar3 = *pbVar2;
    while (bVar3 != 0) {
      pbVar2 = pbVar2 + 1;
      uVar9 = uVar9 * 0x21 ^ (uint)bVar3;
      bVar3 = *pbVar2;
    }
    uVar12 = (ulonglong)(*(int *)(param_1 + 0x24) - 1U & uVar9);
  }
  uVar9 = *(uint *)(param_1 + 0x2c);
  uVar8 = (ulonglong)uVar9;
  *(uint *)(param_1 + 0x2c) = uVar9 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar8 * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4);
  *(uint *)(*(longlong *)(param_1 + 0x18) + uVar12 * 4) = uVar9;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
LAB_1806ab329:
  return uVar8 * 0x10 + *(longlong *)(param_1 + 8);
}



longlong FUN_1806ab1fa(int param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  uint unaff_EDI;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 unaff_R14;
  undefined8 *unaff_R15;
  bool bVar11;
  
  pbVar5 = (byte *)*param_2;
  bVar2 = *pbVar5;
  pbVar1 = pbVar5;
  uVar9 = unaff_EDI;
  while (bVar2 != 0) {
    pbVar1 = pbVar1 + 1;
    uVar9 = uVar9 * 0x21 ^ (uint)bVar2;
    bVar2 = *pbVar1;
  }
  uVar10 = (ulonglong)(param_1 - 1U & uVar9);
  uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x18) + uVar10 * 4);
  uVar7 = (ulonglong)uVar9;
  bVar11 = uVar9 == 0xffffffff;
  if (!bVar11) {
    do {
      pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 8) + uVar7 * 0x10);
      lVar8 = (longlong)pbVar5 - (longlong)pcVar6;
      do {
        cVar3 = *pcVar6;
        cVar4 = pcVar6[lVar8];
        if (cVar3 != cVar4) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
    } while ((cVar3 != cVar4) &&
            (uVar9 = *(uint *)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 4),
            uVar7 = (ulonglong)uVar9, uVar9 != 0xffffffff));
    bVar11 = (int)uVar7 == -1;
  }
  *(bool *)unaff_R14 = !bVar11;
  if (bVar11) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar9 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar9 == 0) || (uVar9 < uVar9 * 2)) {
        FUN_1806b0b40();
      }
      pbVar1 = (byte *)*unaff_R15;
      bVar2 = *pbVar1;
      while (bVar2 != 0) {
        pbVar1 = pbVar1 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar2;
        bVar2 = *pbVar1;
      }
      uVar10 = (ulonglong)(*(int *)(unaff_RBX + 0x24) - 1U & unaff_EDI);
    }
    uVar9 = *(uint *)(unaff_RBX + 0x2c);
    uVar7 = (ulonglong)uVar9;
    *(uint *)(unaff_RBX + 0x2c) = uVar9 + 1;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x18) + uVar10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x18) + uVar10 * 4) = uVar9;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
  }
  return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 8);
}



longlong FUN_1806ab23b(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  longlong lVar8;
  uint in_R9D;
  ulonglong in_R10;
  undefined8 unaff_R14;
  undefined8 *unaff_R15;
  
  do {
    pcVar6 = *(char **)(*(longlong *)(unaff_RBX + 8) + (ulonglong)in_R9D * 0x10);
    lVar8 = unaff_RBP - (longlong)pcVar6;
    do {
      cVar1 = *pcVar6;
      cVar2 = pcVar6[lVar8];
      if (cVar1 != cVar2) break;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) ||
       (in_R9D = *(uint *)(*(longlong *)(unaff_RBX + 0x10) + (ulonglong)in_R9D * 4),
       in_R9D == 0xffffffff)) {
      *(bool *)unaff_R14 = in_R9D != 0xffffffff;
      if (in_R9D != 0xffffffff) {
        uVar7 = (ulonglong)in_R9D;
      }
      else {
        if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
          uVar4 = *(uint *)(unaff_RBX + 0x24);
          if ((uVar4 == 0) || (uVar4 < uVar4 * 2)) {
            FUN_1806b0b40();
          }
          pbVar5 = (byte *)*unaff_R15;
          bVar3 = *pbVar5;
          while (bVar3 != 0) {
            pbVar5 = pbVar5 + 1;
            unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar3;
            bVar3 = *pbVar5;
          }
          in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x24) - 1U & unaff_EDI);
        }
        uVar4 = *(uint *)(unaff_RBX + 0x2c);
        uVar7 = (ulonglong)uVar4;
        *(uint *)(unaff_RBX + 0x2c) = uVar4 + 1;
        *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + uVar7 * 4) =
             *(undefined4 *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4);
        *(uint *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4) = uVar4;
        *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
        *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
      }
      return uVar7 * 0x10 + *(longlong *)(unaff_RBX + 8);
    }
  } while( true );
}



longlong FUN_1806ab291(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  uint unaff_EDI;
  uint in_R9D;
  ulonglong in_R10;
  undefined8 unaff_R14;
  undefined8 *unaff_R15;
  bool in_ZF;
  
  *(bool *)unaff_R14 = !in_ZF;
  if (in_ZF) {
    if (*(int *)(unaff_RBX + 0x34) == *(int *)(unaff_RBX + 0x20)) {
      uVar2 = *(uint *)(unaff_RBX + 0x24);
      if ((uVar2 == 0) || (uVar2 < uVar2 * 2)) {
        FUN_1806b0b40();
      }
      pbVar3 = (byte *)*unaff_R15;
      bVar1 = *pbVar3;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        unaff_EDI = unaff_EDI * 0x21 ^ (uint)bVar1;
        bVar1 = *pbVar3;
      }
      in_R10 = (ulonglong)(*(int *)(unaff_RBX + 0x24) - 1U & unaff_EDI);
    }
    uVar2 = *(uint *)(unaff_RBX + 0x2c);
    uVar4 = (ulonglong)uVar2;
    *(uint *)(unaff_RBX + 0x2c) = uVar2 + 1;
    *(undefined4 *)(*(longlong *)(unaff_RBX + 0x10) + uVar4 * 4) =
         *(undefined4 *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4);
    *(uint *)(*(longlong *)(unaff_RBX + 0x18) + in_R10 * 4) = uVar2;
    *(int *)(unaff_RBX + 0x34) = *(int *)(unaff_RBX + 0x34) + 1;
    *(int *)(unaff_RBX + 0x30) = *(int *)(unaff_RBX + 0x30) + 1;
  }
  else {
    uVar4 = (ulonglong)in_R9D;
  }
  return uVar4 * 0x10 + *(longlong *)(unaff_RBX + 8);
}



longlong FUN_1806ab29e(void)

{
  longlong unaff_RBX;
  uint in_R9D;
  
  return (ulonglong)in_R9D * 0x10 + *(longlong *)(unaff_RBX + 8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_1806ab340(longlong param_1,undefined8 *param_2,uint param_3,undefined *param_4,
             undefined8 param_5,uint param_6,int param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  uint uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined4 auStackX_18 [2];
  undefined *puStackX_20;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((int)param_3 < 0) || (uVar20 = *(uint *)(param_1 + 0x80), uVar20 <= param_3)) {
LAB_1806ab392:
    *param_2 = &UNK_18094a9a8;
    param_2[1] = &DAT_18098bc73;
    param_2[2] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = &DAT_18098bc73;
    param_2[5] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[8] = &DAT_18098bc73;
    param_2[7] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0xffffffff;
    param_2[10] = 0;
    *(undefined1 *)(param_2 + 0xb) = 0;
    return param_2;
  }
  lVar16 = *(longlong *)(param_1 + 0x78);
  lVar6 = *(longlong *)(lVar16 + (ulonglong)param_3 * 8);
  if ((lVar6 == 0) || (puVar17 = (undefined8 *)0x0, *(char *)(lVar6 + 0x68) != '\0'))
  goto LAB_1806ab392;
  if (*(uint *)(lVar6 + 0x78) != 0) {
    puVar11 = puVar17;
    puVar18 = &DAT_18098bc73;
    if (param_4 != (undefined *)0x0) {
      puVar18 = param_4;
    }
    do {
      lVar16 = *(longlong *)(*(longlong *)(lVar6 + 0x70) + (longlong)puVar11 * 8);
      pcVar7 = *(char **)(lVar16 + 0x20);
      pcVar15 = "";
      if (pcVar7 != (char *)0x0) {
        pcVar15 = pcVar7;
      }
      lVar19 = (longlong)puVar18 - (longlong)pcVar15;
      do {
        cVar1 = *pcVar15;
        cVar2 = pcVar15[lVar19];
        if (cVar1 != cVar2) break;
        pcVar15 = pcVar15 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        if (lVar16 != 0) goto FUN_1806ab8be;
        break;
      }
      uVar20 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar20;
    } while (uVar20 < *(uint *)(lVar6 + 0x78));
    lVar16 = *(longlong *)(param_1 + 0x78);
    uVar20 = *(uint *)(param_1 + 0x80);
  }
  if ((((param_6 == 0x4d) || ((int)param_6 < 0)) || (uVar20 <= param_6)) ||
     (lVar19 = *(longlong *)(lVar16 + (ulonglong)param_6 * 8), lVar19 == 0)) {
FUN_1806ab8be:
    *param_2 = &UNK_18094a9a8;
    param_2[1] = &DAT_18098bc73;
    param_2[2] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = &DAT_18098bc73;
    param_2[5] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[7] = &DAT_18098bc73;
    param_2[8] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0xffffffff;
    param_2[10] = 0;
    *(undefined1 *)(param_2 + 0xb) = 0;
    return param_2;
  }
  uStack_58._0_4_ = *(undefined4 *)(lVar19 + 8);
  uStack_58._4_4_ = *(undefined4 *)(lVar19 + 0xc);
  uStack_50._0_4_ = *(undefined4 *)(lVar19 + 0x10);
  uStack_50._4_4_ = *(undefined4 *)(lVar19 + 0x14);
  iVar3 = *(int *)(lVar19 + 0x24);
  uVar4 = *(uint *)(lVar19 + 0x20);
  if (*(char *)(lVar19 + 0x69) == '\0') {
    auStackX_18[0]._0_1_ = *(char *)(lVar6 + 0x69) != '\0';
    if (param_7 == 2) {
      if ((uVar20 < 2) || (lVar19 = *(longlong *)(lVar16 + 8), lVar19 == 0)) goto LAB_1806ab69a;
      auStackX_18[0]._0_1_ = true;
    }
    uVar20 = *(uint *)(lVar19 + 0x30);
    uVar9 = *(uint *)(lVar6 + 0x30);
    if (*(uint *)(lVar6 + 0x30) < uVar20) {
      uVar9 = uVar20;
    }
    *(uint *)(lVar6 + 0x30) = uVar9;
    uVar21 = *(int *)(lVar6 + 0x2c) + -1 + uVar20 & -uVar20;
    iVar14 = *(int *)(lVar19 + 0x28) + uVar21;
    puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,uVar21);
    *(int *)(lVar6 + 0x2c) = iVar14;
    *(uint *)(lVar6 + 0x28) = iVar14 + -1 + uVar9 & -uVar9;
    uVar20 = *(uint *)(lVar19 + 0x50);
    uVar9 = *(uint *)(lVar6 + 0x50);
    if (*(uint *)(lVar6 + 0x50) < uVar20) {
      uVar9 = uVar20;
    }
    *(uint *)(lVar6 + 0x50) = uVar9;
    uVar20 = *(int *)(lVar6 + 0x4c) + -1 + uVar20 & -uVar20;
    iVar14 = *(int *)(lVar19 + 0x48) + uVar20;
    *(int *)(lVar6 + 0x4c) = iVar14;
    *(uint *)(lVar6 + 0x48) = iVar14 + -1 + uVar9 & -uVar9;
    puStackX_20 = param_4;
    FUN_1806b15e0(param_1,lVar6 + 0x28,lVar6 + 0x80,lVar19 + 0x80,uVar21);
    FUN_1806b15e0(param_1,lVar6 + 0x48,lVar6 + 0x90,lVar19 + 0x90,uVar20);
    *(undefined1 *)(lVar19 + 0x68) = 1;
    uStack_78 = *(undefined4 *)(lVar6 + 8);
    uStack_74 = *(undefined4 *)(lVar6 + 0xc);
    uStack_70 = *(undefined4 *)(lVar6 + 0x10);
    uStack_6c = *(undefined4 *)(lVar6 + 0x14);
    uVar5 = *(undefined4 *)(lVar6 + 0x18);
    *(char *)(lVar6 + 0x69) = (char)auStackX_18[0];
    auStackX_18[0] = *(undefined4 *)(param_1 + 0x90);
    puVar11 = (undefined8 *)
              (**(code **)(*_DAT_180be0050 + 8))
                        (_DAT_180be0050,0x68,&UNK_18094b0d0,&UNK_18094b020,0x36a);
    if (puVar11 != (undefined8 *)0x0) {
      plVar8 = *(longlong **)(param_1 + 0x98);
      *(undefined4 *)(puVar11 + 3) = uVar5;
      *(uint *)(puVar11 + 6) = param_6;
      puVar11[1] = CONCAT44(uStack_74,uStack_78);
      puVar11[2] = CONCAT44(uStack_6c,uStack_70);
      puVar11[4] = puStackX_20;
      puVar11[5] = param_5;
      *(int *)(puVar11 + 9) = param_7;
      *(undefined4 *)((longlong)puVar11 + 0x4c) = auStackX_18[0];
      *(undefined4 *)(puVar11 + 10) = puStack_80._0_4_;
      *(uint *)((longlong)puVar11 + 0x54) = uVar20;
      *puVar11 = &UNK_18094aee8;
      *(undefined4 *)(puVar11 + 7) = (undefined4)uStack_58;
      *(undefined4 *)((longlong)puVar11 + 0x3c) = uStack_58._4_4_;
      *(undefined4 *)(puVar11 + 8) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar11 + 0x44) = uStack_50._4_4_;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      uVar12 = (**(code **)(*plVar8 + 0x18))(plVar8,puVar11[4],auStackX_18);
      puVar11[4] = uVar12;
      puVar17 = puVar11;
    }
    plVar8 = (longlong *)(param_1 + 0x88);
    puStack_80 = puVar17;
    if (*(uint *)(param_1 + 0x90) < (*(uint *)(param_1 + 0x94) & 0x7fffffff)) {
      *(undefined8 **)(*plVar8 + (ulonglong)*(uint *)(param_1 + 0x90) * 8) = puVar17;
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
      iVar14 = *(int *)(param_1 + 0x90);
    }
    else {
      FUN_1806adf60(plVar8,&puStack_80);
      iVar14 = *(int *)(param_1 + 0x90);
    }
    uStack_58 = *(undefined8 *)(lVar6 + 8);
    uStack_50 = *(undefined8 *)(lVar6 + 0x10);
    lVar16 = *(longlong *)(*plVar8 + (ulonglong)(iVar14 - 1) * 8);
    uStack_68 = *(undefined8 *)(lVar16 + 0x20);
    uStack_48 = uStack_68;
    puVar13 = (undefined4 *)FUN_1806aae60(param_1 + 0x40,&uStack_58,auStackX_18);
    if ((char)auStackX_18[0] == '\0') {
      *puVar13 = (undefined4)uStack_58;
      puVar13[1] = uStack_58._4_4_;
      puVar13[2] = (undefined4)uStack_50;
      puVar13[3] = uStack_50._4_4_;
      *(longlong *)(puVar13 + 6) = lVar16;
      *(undefined8 *)(puVar13 + 4) = uStack_48;
    }
    puStack_80 = *(undefined8 **)(*plVar8 + (ulonglong)(*(int *)(param_1 + 0x90) - 1) * 8);
    if (*(uint *)(lVar6 + 0x78) < (*(uint *)(lVar6 + 0x7c) & 0x7fffffff)) {
      *(undefined8 **)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x78) * 8) =
           puStack_80;
      *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
    }
    else {
      FUN_1806adf60();
    }
    if (*(int *)(lVar6 + 0x78) == 1) {
      *(int *)(lVar6 + 0x24) = iVar3;
      *(uint *)(lVar6 + 0x20) = uVar4;
    }
    else {
      if (((int)uVar4 < 1) || (*(uint *)(lVar6 + 0x2c) % uVar4 != 0)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if ((-1 < *(int *)(lVar6 + 0x24)) &&
         ((((iVar3 < 0 || (*(int *)(lVar6 + 0x24) != iVar3)) || (param_6 - 0x4e < 2)) || (!bVar10)))
         ) {
        *(undefined4 *)(lVar6 + 0x24) = 0xffffffff;
      }
      if ((-1 < (int)*(uint *)(lVar6 + 0x20)) &&
         ((((int)uVar4 < 0 || (*(uint *)(lVar6 + 0x20) != uVar4)) ||
          ((param_6 - 0x4e < 2 || (!bVar10)))))) {
        *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
      }
    }
    lVar16 = *(longlong *)(*plVar8 + (ulonglong)(*(int *)(param_1 + 0x90) - 1) * 8);
    *param_2 = &UNK_18094a9a8;
    uVar12 = *(undefined8 *)(lVar16 + 0x10);
    param_2[1] = *(undefined8 *)(lVar16 + 8);
    param_2[2] = uVar12;
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar16 + 0x18);
    param_2[4] = *(undefined8 *)(lVar16 + 0x20);
    param_2[5] = *(undefined8 *)(lVar16 + 0x28);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar16 + 0x30);
    uVar12 = *(undefined8 *)(lVar16 + 0x40);
    param_2[7] = *(undefined8 *)(lVar16 + 0x38);
    param_2[8] = uVar12;
    *(undefined4 *)(param_2 + 9) = *(undefined4 *)(lVar16 + 0x48);
    *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)(lVar16 + 0x4c);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(lVar16 + 0x50);
    *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(lVar16 + 0x54);
    *(undefined1 *)(param_2 + 0xb) = 1;
  }
  else {
LAB_1806ab69a:
    *param_2 = &UNK_18094a9a8;
    param_2[1] = &DAT_18098bc73;
    param_2[2] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 3) = 0xffffffff;
    param_2[4] = &DAT_18098bc73;
    param_2[5] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[7] = &DAT_18098bc73;
    param_2[8] = &DAT_18098bc73;
    *(undefined4 *)(param_2 + 9) = 0;
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0xffffffff;
    param_2[10] = 0;
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






