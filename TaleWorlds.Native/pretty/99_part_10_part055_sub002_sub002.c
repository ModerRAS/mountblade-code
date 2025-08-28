#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_10_part055_sub002_sub002.c - 1 个函数

// 函数: void FUN_1806ce700(longlong param_1,longlong *param_2,int32_t param_3)
void FUN_1806ce700(longlong param_1,longlong *param_2,int32_t param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  void *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int aiStackX_8 [2];
  int *piStackX_10;
  int32_t uStackX_18;
  int8_t auStack_278 [576];
  
  uStackX_18 = param_3;
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1d8));
  aiStackX_8[0] = 0x16c;
  piStackX_10 = aiStackX_8;
  if ((int *)param_2[5] != (int *)0x0) {
    piStackX_10 = (int *)param_2[5];
  }
  if (_DAT_180be0560 != 0) {
    plVar7 = (longlong *)&system_data_0560;
    lVar3 = _DAT_180be0560;
    do {
      FUN_1806d7170(param_2,lVar3);
      iVar2 = (**(code **)(param_1 + 0x1f0))(param_2[2],(int)plVar7[1]);
      lVar3 = *param_2;
      if (*(int *)(lVar3 + 0x10) == 0) {
        puVar5 = &unknown_var_1920_ptr;
      }
      else {
        puVar5 = *(void **)
                  (*(longlong *)(lVar3 + 8) + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10);
      }
      plVar4 = (longlong *)&system_data_05d0;
      plVar6 = (longlong *)param_2[1];
      if (_DAT_180be05d0 != 0) {
        do {
          if ((int)plVar4[1] == iVar2) {
            (**(code **)(*plVar6 + 0x10))(plVar6,puVar5,*plVar4);
          }
          plVar4 = plVar4 + 2;
        } while (*plVar4 != 0);
        lVar3 = *param_2;
        plVar6 = (longlong *)param_2[1];
      }
      if (*(int *)(lVar3 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*plVar6 + 0x20))(plVar6);
          lVar3 = *param_2;
        }
        *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      }
      plVar7 = plVar7 + 2;
      *piStackX_10 = *piStackX_10 + 1;
      lVar3 = *plVar7;
    } while (lVar3 != 0);
  }
  lVar3 = *param_2;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar3 = *param_2;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 600));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_278,0,0xc0);
}



int FUN_1806cf000(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  int16_t *puVar6;
  uint64_t uVar7;
  longlong lVar8;
  void *puVar9;
  void *puVar10;
  int32_t uVar11;
  int8_t auStackX_18 [8];
  
  FUN_1806bffb0(param_2,param_1);
  FUN_1806c2070(param_2,param_3 + 1,param_1 + 0x30,0x180be0530,auStackX_18);
  FUN_1806c0450(param_2,param_1 + 0x98,param_3 + 5);
  pcVar5 = *(code **)(param_1 + 0xd8);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 200));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int16_t *)(*pcVar5)(auStackX_18,param_2[2]);
  puVar10 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &unknown_var_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0430);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xf8);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xe8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &unknown_var_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar11);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x118);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x108));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &unknown_var_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar11);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x138);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x128));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &unknown_var_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar11);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x158);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x148));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar11 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar9 = &unknown_var_1920_ptr;
  }
  else {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar11);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar9,puVar3[4]);
  puVar3[3] = 0;
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 400);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x180));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar7 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar10 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d2c10(param_2[1],param_2[4],param_2[3],puVar10,uVar7);
  lVar8 = *param_2;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar8 = *param_2;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  return param_3 + 0xf;
}



int FUN_1806cf480(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  int32_t *puVar6;
  longlong lVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t auStackX_18 [16];
  
  pcVar5 = *(code **)(param_1 + 0x50);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x40));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  puVar9 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x70);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x60));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int32_t *)(*pcVar5)(auStackX_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0740);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 2;
}



int FUN_1806cf610(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  int16_t *puVar6;
  longlong lVar7;
  void *puVar8;
  void *puVar9;
  int32_t uVar10;
  int8_t auStackX_18 [8];
  
  pcVar5 = *(code **)(param_1 + 0x200);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1f0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  puVar9 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x220);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x210));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x240);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x230));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x260);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x250));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x280);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x270));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar10 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar10);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x2a0);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x290));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar6 = (int16_t *)(*pcVar5)(auStackX_18,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar9 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar9,*puVar6,0x180be0680);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 8;
}



int FUN_1806cfa80(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t auStackX_18 [16];
  
  pcVar5 = *(code **)(param_1 + 0x1e8);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1d8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x208);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x1f8));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 3;
}



int FUN_1806cfc40(uint64_t *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint64_t *puVar5;
  char cVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong lVar9;
  int8_t *puVar10;
  void *puVar11;
  void *puVar12;
  int32_t uVar13;
  int8_t auStackX_8 [8];
  void *puStack_68;
  longlong lStack_60;
  longlong lStack_58;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  
  lStack_60 = *param_1;
  lStack_58 = param_1[1];
  uStack_50 = *(int32_t *)(param_1 + 2);
  uStack_4c = *(int32_t *)((longlong)param_1 + 0x14);
  uStack_48 = *(int32_t *)(param_1 + 3);
  uStack_44 = *(int32_t *)((longlong)param_1 + 0x1c);
  FUN_1806d7170(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  lVar7 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  puVar12 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  plVar3 = (longlong *)param_2[4];
  plVar4 = (longlong *)param_2[1];
  if (lVar7 != 0) {
    cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,lVar7);
    if (cVar6 == '\0') {
      uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar8,0x20,&unknown_var_1424_ptr,0x32,&unknown_var_1328_ptr,puVar11);
    }
  }
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = (**(code **)(*plVar3 + 0x68))(plVar3,lVar7);
    if (lVar9 == 0) {
      lVar9 = lVar7;
    }
  }
  puStack_68 = &unknown_var_9192_ptr;
  lStack_60 = lVar7;
  lStack_58 = lVar9;
  (**(code **)(*plVar4 + 8))(plVar4,puVar11,&puStack_68);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 6);
  uStack_4c = *(int32_t *)((longlong)param_1 + 0x34);
  uStack_48 = *(int32_t *)(param_1 + 7);
  uStack_44 = *(int32_t *)((longlong)param_1 + 0x3c);
  FUN_1806d7170(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar13 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_2[3];
  plVar3 = (longlong *)param_2[1];
  FUN_1806d3300(puVar5,uVar13);
  auStackX_8[0] = 0;
  (**(code **)*puVar5)(puVar5,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar11,puVar5[4]);
  puVar5[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 10);
  uStack_4c = *(int32_t *)((longlong)param_1 + 0x54);
  uStack_48 = *(int32_t *)(param_1 + 0xb);
  uStack_44 = *(int32_t *)((longlong)param_1 + 0x5c);
  FUN_1806d7170(param_2,param_1[8]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar13 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_2[3];
  plVar3 = (longlong *)param_2[1];
  FUN_1806d3300(puVar5,uVar13);
  auStackX_8[0] = 0;
  (**(code **)*puVar5)(puVar5,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar11,puVar5[4]);
  puVar5[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0xe);
  uStack_4c = *(int32_t *)((longlong)param_1 + 0x74);
  uStack_48 = *(int32_t *)(param_1 + 0xf);
  uStack_44 = *(int32_t *)((longlong)param_1 + 0x7c);
  FUN_1806d7170(param_2,param_1[0xc]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar13 = (*(code *)CONCAT44(uStack_4c,uStack_50))(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar5 = (uint64_t *)param_2[3];
  plVar3 = (longlong *)param_2[1];
  FUN_1806d3300(puVar5,uVar13);
  auStackX_8[0] = 0;
  (**(code **)*puVar5)(puVar5,auStackX_8,1);
  (**(code **)(*plVar3 + 0x10))(plVar3,puVar11,puVar5[4]);
  puVar5[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  uStack_50 = *(int32_t *)(param_1 + 0x12);
  uStack_4c = *(int32_t *)((longlong)param_1 + 0x94);
  uStack_48 = *(int32_t *)(param_1 + 0x13);
  uStack_44 = *(int32_t *)((longlong)param_1 + 0x9c);
  FUN_1806d7170(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar10 = (int8_t *)(*(code *)CONCAT44(uStack_4c,uStack_50))(auStackX_8,param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar12 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar12,*puVar10,0x180be0510);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 5;
}



int FUN_1806d0030(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t auStackX_18 [16];
  
  pcVar5 = *(code **)(param_1 + 0xb0);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xd0);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 2;
}



int FUN_1806d01f0(uint64_t *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t auStackX_18 [8];
  
  pcVar5 = (code *)param_1[2];
  FUN_1806d7170(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar8 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &unknown_var_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
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
  if (iVar1 == 0) {
    puVar7 = &unknown_var_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[10];
  FUN_1806d7170(param_2,param_1[8]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &unknown_var_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[0xe];
  FUN_1806d7170(param_2,param_1[0xc]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &unknown_var_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = (code *)param_1[0x12];
  FUN_1806d7170(param_2,param_1[0x10]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 5;
}



int FUN_1806d05b0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  int32_t uVar9;
  int8_t auStackX_18 [8];
  
  pcVar5 = *(code **)(param_1 + 0xb0);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xa0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  puVar7 = &unknown_var_1920_ptr;
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xd0);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xc0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0xf0);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xe0));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar8 = &unknown_var_1920_ptr;
  }
  else {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  pcVar5 = *(code **)(param_1 + 0x110);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x100));
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  uVar9 = (*pcVar5)(param_2[2]);
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3300(puVar3,uVar9);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1806d08f0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int16_t *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *puVar10;
  void *puVar11;
  longlong *plVar12;
  int32_t uVar13;
  uint auStackX_8 [2];
  
  pcVar3 = *(code **)(param_1 + 0x28);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x18));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar13 = (*pcVar3)(param_2[2]);
  puVar10 = &unknown_var_1920_ptr;
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar12 = (longlong *)param_2[1];
  FUN_1806d3300(puVar2,uVar13);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x48);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x38));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar13 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar12 = (longlong *)param_2[1];
  FUN_1806d3300(puVar2,uVar13);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x68);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x58));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  uVar13 = (*pcVar3)(param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  puVar2 = (uint64_t *)param_2[3];
  plVar12 = (longlong *)param_2[1];
  FUN_1806d3300(puVar2,uVar13);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  (**(code **)*puVar2)(puVar2,auStackX_8,1);
  (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,puVar2[4]);
  puVar2[3] = 0;
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0x88);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x78));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  puVar6 = (int16_t *)(*pcVar3)(auStackX_8,param_2[2]);
  iVar5 = *(int *)(*param_2 + 0x10);
  if (iVar5 == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar5 - 1) * 0x10);
  }
  FUN_1806d82a0(param_2[1],param_2[3],puVar11,*puVar6,0x180be00c0);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 0xa8);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0x98));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  auStackX_8[0] = (*pcVar3)(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) == 0) {
    puVar11 = &unknown_var_1920_ptr;
  }
  else {
    puVar11 = *(void **)
               (*(longlong *)(lVar7 + 8) + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar8 = (longlong *)&system_data_0100;
  plVar12 = (longlong *)param_2[1];
  plVar9 = (longlong *)&system_data_0100;
  uVar4 = auStackX_8[0];
  if (_DAT_180be0100 != 0) {
    do {
      if (*(uint *)(plVar9 + 1) == uVar4) {
        (**(code **)(*plVar12 + 0x10))(plVar12,puVar11,*plVar9);
        uVar4 = auStackX_8[0];
      }
      plVar9 = plVar9 + 2;
    } while (*plVar9 != 0);
    plVar12 = (longlong *)param_2[1];
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*plVar12 + 0x20))(plVar12);
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  pcVar3 = *(code **)(param_1 + 200);
  FUN_1806d7170(param_2,*(uint64_t *)(param_1 + 0xb8));
  piVar1 = (int *)param_2[5];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  iVar5 = (*pcVar3)(param_2[2]);
  lVar7 = *param_2;
  if (*(int *)(lVar7 + 0x10) != 0) {
    puVar10 = *(void **)
               (*(longlong *)(lVar7 + 8) + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10);
  }
  plVar12 = (longlong *)param_2[1];
  if (_DAT_180be0100 != 0) {
    do {
      if ((int)plVar8[1] == iVar5) {
        (**(code **)(*plVar12 + 0x10))(plVar12,puVar10,*plVar8);
      }
      plVar8 = plVar8 + 2;
    } while (*plVar8 != 0);
    lVar7 = *param_2;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar7 = *param_2;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  return param_3 + 9;
}



int FUN_1806d0d40(uint64_t *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint64_t *puVar3;
  longlong *plVar4;
  int32_t *puVar5;
  longlong lVar6;
  void *puVar7;
  void *puVar8;
  int8_t auStackX_18 [16];
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  
  uStack_40 = *(int32_t *)(param_1 + 2);
  uStack_3c = *(int32_t *)((longlong)param_1 + 0x14);
  uStack_38 = *(int32_t *)(param_1 + 3);
  uStack_34 = *(int32_t *)((longlong)param_1 + 0x1c);
  FUN_1806d7170(param_2,*param_1);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_3c,uStack_40))(&uStack_68,param_2[2]);
  puVar8 = &unknown_var_1920_ptr;
  uStack_78 = *puVar5;
  uStack_74 = puVar5[1];
  uStack_70 = puVar5[2];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 == 0) {
    puVar7 = &unknown_var_1920_ptr;
  }
  else {
    puVar7 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3290(puVar3,&uStack_78);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar7,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  uStack_40 = *(int32_t *)(param_1 + 6);
  uStack_3c = *(int32_t *)((longlong)param_1 + 0x34);
  uStack_38 = *(int32_t *)(param_1 + 7);
  uStack_34 = *(int32_t *)((longlong)param_1 + 0x3c);
  FUN_1806d7170(param_2,param_1[4]);
  piVar2 = (int *)param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  puVar5 = (int32_t *)(*(code *)CONCAT44(uStack_3c,uStack_40))(&uStack_78,param_2[2]);
  uStack_68 = *puVar5;
  uStack_64 = puVar5[1];
  uStack_60 = puVar5[2];
  uStack_5c = puVar5[3];
  iVar1 = *(int *)(*param_2 + 0x10);
  if (iVar1 != 0) {
    puVar8 = *(void **)(*(longlong *)(*param_2 + 8) + (ulonglong)(iVar1 - 1) * 0x10);
  }
  puVar3 = (uint64_t *)param_2[3];
  plVar4 = (longlong *)param_2[1];
  FUN_1806d3200(puVar3,&uStack_68);
  auStackX_18[0] = 0;
  (**(code **)*puVar3)(puVar3,auStackX_18,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar8,puVar3[4]);
  puVar3[3] = 0;
  lVar6 = *param_2;
  if (*(int *)(lVar6 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_2[1] + 0x20))();
      lVar6 = *param_2;
    }
    *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
  }
  return param_3 + 2;
}








