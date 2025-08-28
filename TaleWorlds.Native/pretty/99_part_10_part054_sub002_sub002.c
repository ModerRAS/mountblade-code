#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part054_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806cb8f0(int64_t param_1,int64_t param_2)
void FUN_1806cb8f0(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int8_t auStack_110 [232];
  
  FUN_1806d7000(param_2,*(uint64_t *)(param_1 + 0x1d8));
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_110,0,0xe0);
}



int FUN_1806cbbd0(uint64_t *param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  char cVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void *puVar9;
  void *puVar10;
  char *pcStackX_8;
  char *pcStackX_10;
  uint auStackX_18 [4];
  int32_t uStack_148;
  int32_t uStack_144;
  int32_t uStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  int32_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_f0;
  int32_t uStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int32_t *puStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int8_t uStack_58;
  uint *puStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_f0 = *(int32_t *)(param_1 + 2);
  uStack_ec = *(int32_t *)((int64_t)param_1 + 0x14);
  uStack_e8 = *(int32_t *)(param_1 + 3);
  uStack_e4 = *(int32_t *)((int64_t)param_1 + 0x1c);
  FUN_1806d7000(param_2,*param_1);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&uStack_e0);
  cVar4 = FUN_1806d56e0(param_2);
  if (cVar4 != '\0') {
    puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_ec,uStack_f0))(&uStack_128,param_2[6]);
    lStack_98 = param_2[1];
    lStack_78 = param_2[5];
    lStack_68 = param_2[7];
    uStack_148 = *puVar5;
    lStack_60 = param_2[8];
    uStack_144 = puVar5[1];
    uStack_140 = puVar5[2];
    uStack_13c = puVar5[3];
    uStack_138 = puVar5[4];
    uStack_134 = puVar5[5];
    uStack_130 = puVar5[6];
    lStack_a0 = *param_2;
    lStack_80 = param_2[4];
    lStack_90 = param_2[2];
    lStack_88 = param_2[3];
    puStack_70 = &uStack_148;
    puStack_50 = auStackX_18;
    auStackX_18[0] = auStackX_18[0] & 0xffffff00;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 1;
    FUN_1806c95f0(&uStack_e0,&lStack_a0,0);
    if ((char)auStackX_18[0] != '\0') {
      *(int8_t *)param_2[10] = 1;
    }
    uStack_128 = CONCAT44(uStack_144,uStack_148);
    uStack_120 = CONCAT44(uStack_13c,uStack_140);
    uStack_118 = uStack_138;
    uStack_110 = uStack_130;
    uStack_114 = uStack_134;
    (*(code *)CONCAT44(uStack_e4,uStack_e8))(param_2[6],&uStack_128);
  }
  SystemResourceProcessor(param_2);
  uStack_f0 = *(int32_t *)(param_1 + 6);
  uStack_ec = *(int32_t *)((int64_t)param_1 + 0x34);
  uStack_e8 = *(int32_t *)(param_1 + 7);
  uStack_e4 = *(int32_t *)((int64_t)param_1 + 0x3c);
  FUN_1806d7000(param_2,param_1[4]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar7 = 0;
  puVar10 = &ui_system_data_1920_ptr;
  pcStackX_8 = (char *)0x0;
  if ((char)param_2[9] != '\0') {
    iVar1 = *(int *)(*param_2 + 0x10);
    if (iVar1 == 0) {
      puVar9 = &ui_system_data_1920_ptr;
    }
    else {
      puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
    }
    cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar9,&pcStackX_8)
    ;
    if (((cVar4 != '\0') && (pcStackX_8 != (char *)0x0)) && (*pcStackX_8 != '\0')) {
      auStackX_18[0] = 0;
      FUN_1806d81c0(pcStackX_8,param_2[7],auStackX_18,0x180be0510);
      (*(code *)CONCAT44(uStack_e4,uStack_e8))(param_2[6],auStackX_18);
    }
  }
  SystemResourceProcessor(param_2);
  uStack_f0 = *(int32_t *)(param_1 + 10);
  uStack_ec = *(int32_t *)((int64_t)param_1 + 0x54);
  uStack_e8 = *(int32_t *)(param_1 + 0xb);
  uStack_e4 = *(int32_t *)((int64_t)param_1 + 0x5c);
  FUN_1806d7000(param_2,param_1[8]);
  piVar2 = (int *)param_2[0xb];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x18);
  }
  plVar3 = (int64_t *)param_2[8];
  cVar4 = (**(code **)(*(int64_t *)param_2[5] + 0x10))((int64_t *)param_2[5],puVar10,&pcStackX_8);
  if (((cVar4 == '\0') || (pcStackX_10 = pcStackX_8, pcStackX_8 == (char *)0x0)) ||
     ((*pcStackX_8 == '\0' ||
      ((lVar6 = _strtoui64(pcStackX_8,&pcStackX_10,10), lVar7 = 0, lVar6 == 0 ||
       (lVar7 = (**(code **)(*plVar3 + 0x50))(plVar3,lVar6), lVar7 != 0)))))) {
    (*(code *)CONCAT44(uStack_e4,uStack_e8))(param_2[6],lVar7);
  }
  else {
    uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar8,4,&ui_system_data_1776_ptr,0x6c,&ui_system_data_1584_ptr,lVar6);
  }
  SystemResourceProcessor(param_2);
  return param_3 + 3;
}



int FUN_1806cbf20(int64_t param_1,int64_t *param_2,int param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint *puVar6;
  int iVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  uint auStackX_18 [2];
  int8_t auStack_58 [4];
  int iStack_54;
  int8_t uStack_50;
  uint64_t *puStack_48;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  
  auStackX_18[0] = 0x68;
  puVar6 = auStackX_18;
  if ((uint *)param_2[6] != (uint *)0x0) {
    puVar6 = (uint *)param_2[6];
  }
  iVar7 = 0;
  if ((int *)param_2[7] != (int *)0x0) {
    iVar7 = *(int *)param_2[7];
  }
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x18));
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x28));
  iStack_54 = iVar7 + 8;
  uStack_50 = 1;
  auStack_58[0] = 1;
  puStack_48 = (uint64_t *)(param_1 + 0x18);
  FUN_1806c14e0(param_2,*puVar6,auStack_58);
  *puVar6 = *puVar6 + 1;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x30));
  iStack_54 = iVar7 + 0xc;
  uStack_50 = 0;
  FUN_1806c14e0(param_2,*puVar6,auStack_58);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
    lVar5 = *param_2;
  }
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  uStack_40 = *(int32_t *)(param_1 + 0x70);
  uStack_3c = *(int32_t *)(param_1 + 0x74);
  uStack_38 = *(int32_t *)(param_1 + 0x78);
  uStack_34 = *(int32_t *)(param_1 + 0x7c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_3c,uStack_40))(param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar10);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  uStack_40 = *(int32_t *)(param_1 + 0x90);
  uStack_3c = *(int32_t *)(param_1 + 0x94);
  uStack_38 = *(int32_t *)(param_1 + 0x98);
  uStack_34 = *(int32_t *)(param_1 + 0x9c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_3c,uStack_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar10);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  uStack_40 = *(int32_t *)(param_1 + 0xb0);
  uStack_3c = *(int32_t *)(param_1 + 0xb4);
  uStack_38 = *(int32_t *)(param_1 + 0xb8);
  uStack_34 = *(int32_t *)(param_1 + 0xbc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_3c,uStack_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar10);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  FUN_1806d7170(param_2,&ui_system_data_1912_ptr);
  FUN_1806d5c70(param_2,param_1 + 0xc0);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  uStack_40 = *(int32_t *)(param_1 + 0xf0);
  uStack_3c = *(int32_t *)(param_1 + 0xf4);
  uStack_38 = *(int32_t *)(param_1 + 0xf8);
  uStack_34 = *(int32_t *)(param_1 + 0xfc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar1 = (int *)param_2[6];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*(code *)CONCAT44(uStack_3c,uStack_40))(param_2[2]);
  iVar7 = *(int *)(*param_2 + 0x10);
  if (iVar7 != 0) {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar7 - 1) * 0x10);
  }
  FUN_1806d2c10(param_2[1],param_2[4],param_2[3],puVar9,uVar4);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 10;
}



int FUN_1806cc370(int64_t param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int32_t uVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  int8_t auStackX_18 [8];
  
  pcVar5 = *(code **)(param_1 + 0x148);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x138));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  puVar8 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x168);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x158));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar3,uVar6);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x188);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x178));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x1a8);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x198));
  piVar2 = (int *)param_2[6];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 4;
}



int FUN_1806cc6c0(uint64_t *param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  void *puVar5;
  void *puVar6;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int8_t auStack_30 [40];
  
  uStack_50 = *param_1;
  uStack_48 = *(int32_t *)(param_1 + 1);
  uStack_44 = *(int32_t *)((int64_t)param_1 + 0xc);
  uStack_40 = *(int32_t *)(param_1 + 2);
  uStack_3c = *(int32_t *)((int64_t)param_1 + 0x14);
  uStack_38 = *(int32_t *)(param_1 + 3);
  uStack_34 = *(int32_t *)((int64_t)param_1 + 0x1c);
  FUN_1806d7170(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar3 = (uint64_t *)(*(code *)CONCAT44(uStack_3c,uStack_40))(auStack_30,param_2[2]);
  puVar5 = &ui_system_data_1920_ptr;
  uStack_58 = *puVar3;
  uStack_50 = puVar3[1];
  uStack_44 = *(int32_t *)((int64_t)puVar3 + 0x14);
  uStack_48 = *(int32_t *)(puVar3 + 2);
  uStack_40 = *(int32_t *)(puVar3 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar6 = &ui_system_data_1920_ptr;
  }
  else {
    puVar6 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d2e60(param_2[1],param_2[4],param_2[3],puVar6,&uStack_58);
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar4 = *param_2;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  uStack_50 = param_1[4];
  uStack_48 = *(int32_t *)(param_1 + 5);
  uStack_44 = *(int32_t *)((int64_t)param_1 + 0x2c);
  uStack_40 = *(int32_t *)(param_1 + 6);
  uStack_3c = *(int32_t *)((int64_t)param_1 + 0x34);
  uStack_38 = *(int32_t *)(param_1 + 7);
  uStack_34 = *(int32_t *)((int64_t)param_1 + 0x3c);
  FUN_1806d7170(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar3 = (uint64_t *)(*(code *)CONCAT44(uStack_3c,uStack_40))(auStack_30,param_2[2]);
  uStack_58 = *puVar3;
  uStack_50 = puVar3[1];
  uStack_44 = *(int32_t *)((int64_t)puVar3 + 0x14);
  uStack_48 = *(int32_t *)(puVar3 + 2);
  uStack_40 = *(int32_t *)(puVar3 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar5 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d2e60(param_2[1],param_2[4],param_2[3],puVar5,&uStack_58);
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar4 = *param_2;
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return param_3 + 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806cc880(int64_t param_1,int64_t *param_2,uint param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  uint uVar3;
  int8_t uVar4;
  int iVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  void *puVar10;
  void *puVar11;
  int32_t uVar12;
  int8_t auStackX_8 [8];
  uint auStackX_18 [4];
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  
  uStack_50 = *(int32_t *)(param_1 + 0x50);
  uStack_4c = *(int32_t *)(param_1 + 0x54);
  uStack_48 = *(int32_t *)(param_1 + 0x58);
  uStack_44 = *(int32_t *)(param_1 + 0x5c);
  auStackX_18[0] = param_3;
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int32_t *)(*(code *)CONCAT44(uStack_4c,uStack_50))(&uStack_88,param_2[2]);
  puVar11 = &ui_system_data_1920_ptr;
  uStack_78 = *puVar6;
  uStack_74 = puVar6[1];
  uStack_70 = puVar6[2];
  uStack_6c = puVar6[3];
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3200(puVar2,&uStack_78);
  auStackX_8[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x70);
  uStack_4c = *(int32_t *)(param_1 + 0x74);
  uStack_48 = *(int32_t *)(param_1 + 0x78);
  uStack_44 = *(int32_t *)(param_1 + 0x7c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int32_t *)(*(code *)CONCAT44(uStack_4c,uStack_50))(&uStack_78,param_2[2]);
  uStack_88 = *puVar6;
  uStack_84 = puVar6[1];
  uStack_80 = puVar6[2];
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3290(puVar2,&uStack_88);
  auStackX_8[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x90);
  uStack_4c = *(int32_t *)(param_1 + 0x94);
  uStack_48 = *(int32_t *)(param_1 + 0x98);
  uStack_44 = *(int32_t *)(param_1 + 0x9c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)
               (*(int64_t *)(lVar7 + 8) + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar8 = (int64_t *)&system_data_02c0;
  plVar9 = (int64_t *)param_2[1];
  if (system_system_buffer_config != 0) {
    do {
      if ((int)plVar8[1] == iVar5) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,*plVar8);
      }
      plVar8 = plVar8 + 2;
    } while (*plVar8 != 0);
    plVar9 = (int64_t *)param_2[1];
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar9 + 0x20))(plVar9);
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0xb0);
  uStack_4c = *(int32_t *)(param_1 + 0xb4);
  uStack_48 = *(int32_t *)(param_1 + 0xb8);
  uStack_44 = *(int32_t *)(param_1 + 0xbc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_8[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0xd0);
  uStack_4c = *(int32_t *)(param_1 + 0xd4);
  uStack_48 = *(int32_t *)(param_1 + 0xd8);
  uStack_44 = *(int32_t *)(param_1 + 0xdc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_8[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0xf0);
  uStack_4c = *(int32_t *)(param_1 + 0xf4);
  uStack_48 = *(int32_t *)(param_1 + 0xf8);
  uStack_44 = *(int32_t *)(param_1 + 0xfc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_8[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x110);
  uStack_4c = *(int32_t *)(param_1 + 0x114);
  uStack_48 = *(int32_t *)(param_1 + 0x118);
  uStack_44 = *(int32_t *)(param_1 + 0x11c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x100));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_8[0] = 0;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uVar3 = auStackX_18[0];
  FUN_1806c0620(param_2,param_1 + 0x120,auStackX_18[0] + 7);
  uStack_50 = *(int32_t *)(param_1 + 0x160);
  uStack_4c = *(int32_t *)(param_1 + 0x164);
  uStack_48 = *(int32_t *)(param_1 + 0x168);
  uStack_44 = *(int32_t *)(param_1 + 0x16c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x180);
  uStack_4c = *(int32_t *)(param_1 + 0x184);
  uStack_48 = *(int32_t *)(param_1 + 0x188);
  uStack_44 = *(int32_t *)(param_1 + 0x18c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x170));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x1a0);
  uStack_4c = *(int32_t *)(param_1 + 0x1a4);
  uStack_48 = *(int32_t *)(param_1 + 0x1a8);
  uStack_44 = *(int32_t *)(param_1 + 0x1ac);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 400));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar10,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x1c0);
  uStack_4c = *(int32_t *)(param_1 + 0x1c4);
  uStack_48 = *(int32_t *)(param_1 + 0x1c8);
  uStack_44 = *(int32_t *)(param_1 + 0x1cc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1b0));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  FUN_1806d2f00(param_2[1],param_2[4],param_2[3],puVar10,uVar4);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  FUN_1806c07f0(param_2,param_1 + 0x1d0,uVar3 + 0xc);
  uStack_50 = *(int32_t *)(param_1 + 0x210);
  uStack_4c = *(int32_t *)(param_1 + 0x214);
  uStack_48 = *(int32_t *)(param_1 + 0x218);
  uStack_44 = *(int32_t *)(param_1 + 0x21c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar4 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar10 = &ui_system_data_1920_ptr;
  }
  else {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  FUN_1806d2f00(param_2[1],param_2[4],param_2[3],puVar10,uVar4);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x230);
  uStack_4c = *(int32_t *)(param_1 + 0x234);
  uStack_48 = *(int32_t *)(param_1 + 0x238);
  uStack_44 = *(int32_t *)(param_1 + 0x23c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 != 0) {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar9 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_18[0] = auStackX_18[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_18,1);
  (**(code **)(*plVar9 + 0x10))(plVar9,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return uVar3 + 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806cd1e0(int64_t param_1,int64_t *param_2,int param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  code *pcVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void *puVar8;
  void *puVar9;
  uint *puVar10;
  int64_t *plVar11;
  int32_t uVar12;
  uint auStackX_8 [2];
  
  pcVar3 = *(code **)(param_1 + 0x50);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar4 = (*pcVar3)(param_2[2]);
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)
              (*(int64_t *)(lVar5 + 8) + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10);
  }
  plVar6 = (int64_t *)&system_data_02f0;
  plVar11 = (int64_t *)param_2[1];
  if (system_system_buffer_config != 0) {
    do {
      if ((int)plVar6[1] == iVar4) {
        (**(code **)(*plVar11 + 0x10))(plVar11,puVar8,*plVar6);
      }
      plVar6 = plVar6 + 2;
    } while (*plVar6 != 0);
    plVar11 = (int64_t *)param_2[1];
    lVar5 = *param_2;
  }
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11);
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x60));
  auStackX_8[0] = 0x61;
  puVar10 = auStackX_8;
  if ((uint *)param_2[5] != (uint *)0x0) {
    puVar10 = (uint *)param_2[5];
  }
  if (system_system_buffer_config != 0) {
    plVar11 = (int64_t *)&system_data_0350;
    lVar5 = system_system_buffer_config;
    do {
      FUN_1806d7170(param_2,lVar5);
      iVar4 = (**(code **)(param_1 + 0x78))(param_2[2],(int)plVar11[1]);
      lVar5 = *param_2;
      if (*(int *)(lVar5 + 0x10) == 0) {
        puVar8 = &ui_system_data_1920_ptr;
      }
      else {
        puVar8 = *(void **)
                  (*(int64_t *)(lVar5 + 8) + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10);
      }
      plVar7 = (int64_t *)&system_data_03c0;
      plVar6 = (int64_t *)param_2[1];
      if (system_system_buffer_config != 0) {
        do {
          if ((int)plVar7[1] == iVar4) {
            (**(code **)(*plVar6 + 0x10))(plVar6,puVar8,*plVar7);
          }
          plVar7 = plVar7 + 2;
        } while (*plVar7 != 0);
        lVar5 = *param_2;
        plVar6 = (int64_t *)param_2[1];
      }
      if (*(int *)(lVar5 + 0x10) != 0) {
        if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          lVar5 = *param_2;
        }
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      }
      *puVar10 = *puVar10 + 1;
      plVar11 = plVar11 + 2;
      lVar5 = *plVar11;
    } while (lVar5 != 0);
  }
  puVar8 = &ui_system_data_1920_ptr;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x90);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x80));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*pcVar3)(param_2[2]);
  iVar4 = *(int *)(*param_2 + 0x10);
  if (iVar4 == 0) {
    puVar9 = &ui_system_data_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar4 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar11 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar11 + 0x10))(plVar11,puVar9,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 200);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xb8));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar12 = (*pcVar3)(param_2[2]);
  iVar4 = *(int *)(*param_2 + 0x10);
  if (iVar4 != 0) {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar4 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar11 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar2,uVar12);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar11 + 0x10))(plVar11,puVar8,puVar2[4]);
  puVar2[3] = 0;
  lVar5 = *param_2;
  if (*(int *)(lVar5 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar5 + 8) + 8 + (uint64_t)(*(int *)(lVar5 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar5 = *param_2;
    }
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  return param_3 + 5;
}



int FUN_1806cd580(int64_t param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int8_t uVar6;
  uint64_t uVar7;
  int8_t *puVar8;
  int64_t lVar9;
  void *puVar10;
  void *puVar11;
  int8_t auStackX_18 [16];
  
  pcVar5 = *(code **)(param_1 + 0x28);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar7 = (*pcVar5)(param_2[2]);
  puVar10 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d2c10(param_2[1],param_2[4],param_2[3],puVar11,uVar7);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x48);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x38));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar8 = (int8_t *)(*pcVar5)(auStackX_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar11,*puVar8,0x180be0170);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x68);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x58));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &ui_system_data_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar11,puVar3[4]);
  puVar3[3] = 0;
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x88);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x78));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar6 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar10 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806c4e00(puVar3,&rendering_buffer_2208_ptr,uVar6);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar10,puVar3[4]);
  puVar3[3] = 0;
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  return param_3 + 7;
}



int FUN_1806cd860(int64_t param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int64_t *plVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  int8_t *puVar6;
  int64_t lVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t auStackX_18 [8];
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int8_t auStack_88 [24];
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  uint64_t uStack_60;
  uint64_t uStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int8_t auStack_38 [16];
  
  uStack_58 = *(uint64_t *)(param_1 + 0x130);
  uStack_50 = *(int32_t *)(param_1 + 0x138);
  uStack_4c = *(int32_t *)(param_1 + 0x13c);
  uStack_48 = *(int32_t *)(param_1 + 0x140);
  uStack_44 = *(int32_t *)(param_1 + 0x144);
  uStack_40 = *(int32_t *)(param_1 + 0x148);
  uStack_3c = *(int32_t *)(param_1 + 0x14c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x130));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar4 = (uint64_t *)(*(code *)CONCAT44(uStack_44,uStack_48))(auStack_88,param_2[2]);
  puVar9 = &ui_system_data_1920_ptr;
  uStack_60 = *puVar4;
  uStack_58 = puVar4[1];
  uStack_4c = *(int32_t *)((int64_t)puVar4 + 0x14);
  uStack_50 = *(int32_t *)(puVar4 + 2);
  uStack_48 = *(int32_t *)(puVar4 + 3);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d2e60(param_2[1],param_2[4],param_2[3],puVar8,&uStack_60);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x160);
  uStack_6c = *(int32_t *)(param_1 + 0x164);
  uStack_68 = *(int32_t *)(param_1 + 0x168);
  uStack_64 = *(int32_t *)(param_1 + 0x16c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x150));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x198);
  uStack_6c = *(int32_t *)(param_1 + 0x19c);
  uStack_68 = *(int32_t *)(param_1 + 0x1a0);
  uStack_64 = *(int32_t *)(param_1 + 0x1a4);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x188));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_6c,uStack_70))(auStack_38,param_2[2]);
  uStack_98 = *puVar5;
  uStack_94 = puVar5[1];
  uStack_90 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3290(puVar4,&uStack_98);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x1d0);
  uStack_6c = *(int32_t *)(param_1 + 0x1d4);
  uStack_68 = *(int32_t *)(param_1 + 0x1d8);
  uStack_64 = *(int32_t *)(param_1 + 0x1dc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1c0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x1f0);
  uStack_6c = *(int32_t *)(param_1 + 500);
  uStack_68 = *(int32_t *)(param_1 + 0x1f8);
  uStack_64 = *(int32_t *)(param_1 + 0x1fc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1e0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x210);
  uStack_6c = *(int32_t *)(param_1 + 0x214);
  uStack_68 = *(int32_t *)(param_1 + 0x218);
  uStack_64 = *(int32_t *)(param_1 + 0x21c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x200));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_6c,uStack_70))(auStack_38,param_2[2]);
  uStack_98 = *puVar5;
  uStack_94 = puVar5[1];
  uStack_90 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3290(puVar4,&uStack_98);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x230);
  uStack_6c = *(int32_t *)(param_1 + 0x234);
  uStack_68 = *(int32_t *)(param_1 + 0x238);
  uStack_64 = *(int32_t *)(param_1 + 0x23c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x220));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_6c,uStack_70))(auStack_38,param_2[2]);
  uStack_98 = *puVar5;
  uStack_94 = puVar5[1];
  uStack_90 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3290(puVar4,&uStack_98);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x250);
  uStack_6c = *(int32_t *)(param_1 + 0x254);
  uStack_68 = *(int32_t *)(param_1 + 600);
  uStack_64 = *(int32_t *)(param_1 + 0x25c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x240));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x270);
  uStack_6c = *(int32_t *)(param_1 + 0x274);
  uStack_68 = *(int32_t *)(param_1 + 0x278);
  uStack_64 = *(int32_t *)(param_1 + 0x27c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x260));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x290);
  uStack_6c = *(int32_t *)(param_1 + 0x294);
  uStack_68 = *(int32_t *)(param_1 + 0x298);
  uStack_64 = *(int32_t *)(param_1 + 0x29c);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x280));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int8_t *)(*(code *)CONCAT44(uStack_6c,uStack_70))(auStackX_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar8,*puVar6,0x180be01c0);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x2b0);
  uStack_6c = *(int32_t *)(param_1 + 0x2b4);
  uStack_68 = *(int32_t *)(param_1 + 0x2b8);
  uStack_64 = *(int32_t *)(param_1 + 700);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x2a0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x2d0);
  uStack_6c = *(int32_t *)(param_1 + 0x2d4);
  uStack_68 = *(int32_t *)(param_1 + 0x2d8);
  uStack_64 = *(int32_t *)(param_1 + 0x2dc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x2c0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar8,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_70 = *(int32_t *)(param_1 + 0x2f0);
  uStack_6c = *(int32_t *)(param_1 + 0x2f4);
  uStack_68 = *(int32_t *)(param_1 + 0x2f8);
  uStack_64 = *(int32_t *)(param_1 + 0x2fc);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x2e0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*(code *)CONCAT44(uStack_6c,uStack_70))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar9 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar4 = (uint64_t *)param_2[3];
  plVar3 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar4,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar4)(puVar4,auStackX_18,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar9,puVar4[4]);
  puVar4[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 0xf;
}



int FUN_1806ce230(uint64_t *param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t auStackX_18 [16];
  
  pcVar5 = (code *)param_1[2];
  FUN_1806d7170(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &ui_system_data_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[6];
  FUN_1806d7170(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (int64_t *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 2;
}



int FUN_1806ce3e0(uint64_t *param_1,int64_t *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int8_t *puVar12;
  void *puVar13;
  void *puVar14;
  int8_t auStackX_8 [8];
  void *puStack_138;
  int64_t lStack_130;
  int64_t lStack_128;
  int32_t uStack_120;
  int64_t lStack_118;
  int64_t lStack_110;
  void **ppuStack_108;
  code *pcStack_100;
  int64_t lStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  int8_t auStack_a0 [40];
  int8_t auStack_78 [64];
  
  lStack_110 = *param_1;
  ppuStack_108 = (void **)param_1[1];
  pcStack_100 = (code *)param_1[2];
  lStack_f8 = param_1[3];
  FUN_1806d7170(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(&uStack_e0);
  puVar8 = (uint64_t *)(*pcStack_100)(auStack_a0,param_2[2]);
  lVar9 = *param_2;
  lVar11 = param_2[1];
  lVar3 = param_2[3];
  lVar4 = param_2[4];
  puStack_138 = (void *)*puVar8;
  lStack_130 = puVar8[1];
  lStack_128 = puVar8[2];
  uStack_120 = *(int32_t *)(puVar8 + 3);
  __0PxMeshScaleGeneratedInfo_physx__QEAA_XZ(auStack_78);
  ppuStack_108 = &puStack_138;
  uStack_f0 = 0;
  uStack_e8 = 0;
  lStack_118 = lVar9;
  lStack_110 = lVar11;
  pcStack_100 = (code *)lVar3;
  lStack_f8 = lVar4;
  FUN_1806d0d40(auStack_78,&lStack_118,0);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcStack_100 = (code *)param_1[6];
  lStack_f8 = param_1[7];
  FUN_1806d7170(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar9 = (*pcStack_100)(param_2[2]);
  puVar14 = &ui_system_data_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar13 = &ui_system_data_1920_ptr;
  }
  else {
    puVar13 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  plVar5 = (int64_t *)param_2[4];
  plVar6 = (int64_t *)param_2[1];
  if (lVar9 != 0) {
    cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar9);
    if (cVar7 == '\0') {
      uVar10 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar10,0x20,&ui_system_data_1424_ptr,0x32,&ui_system_data_1328_ptr,puVar13);
    }
  }
  lVar11 = 0;
  if (lVar9 != 0) {
    lVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,lVar9);
    if (lVar11 == 0) {
      lVar11 = lVar9;
    }
  }
  puStack_138 = &processed_var_9128_ptr;
  lStack_130 = lVar9;
  lStack_128 = lVar11;
  (**(code **)(*plVar6 + 8))(plVar6,puVar13,&puStack_138);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  pcStack_100 = (code *)param_1[10];
  lStack_f8 = param_1[0xb];
  FUN_1806d7170(param_2,param_1[8]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar12 = (int8_t *)(*pcStack_100)(auStackX_8,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar14 = *(void **)(*(int64_t *)(*param_2 + 8) + (uint64_t)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar14,*puVar12,0x180be04f0);
  lVar9 = *param_2;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_2[1] + 0x20))();
      lVar9 = *param_2;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
  }
  return param_3 + 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






