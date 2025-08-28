#include "TaleWorlds.Native.Split.h"

// 99_part_11_part004.c - 25 个函数

// 函数: void FUN_1806d7f00(longlong param_1,uint param_2,uint64_t *param_3)
void FUN_1806d7f00(longlong param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) < param_2) {
    FUN_1806d7560();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 8);
  puVar5 = (uint64_t *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8);
  uVar6 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 0x38) = param_2;
  return;
}






// 函数: void FUN_1806d7fe0(longlong param_1,uint param_2,uint64_t *param_3)
void FUN_1806d7fe0(longlong param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x3c) & 0x7fffffff) < param_2) {
    FUN_1806d7660();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 8);
  puVar5 = (uint64_t *)(*(longlong *)(param_1 + 0x30) + (ulonglong)*(uint *)(param_1 + 0x38) * 8);
  uVar6 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar5)) >> 3;
  if (puVar4 < puVar5) {
    uVar6 = uVar3;
  }
  if (uVar6 != 0) {
    if (1 < uVar6) {
      uVar1 = *param_3;
      if ((param_3 < puVar5) || (puVar5 + (uVar6 - 1) < param_3)) {
        do {
          uVar3 = uVar3 + 2;
        } while (uVar3 < (uVar6 & 0xfffffffffffffffe));
        puVar4 = puVar5;
        for (uVar2 = uVar6 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar5 + (uVar6 & 0xfffffffffffffffe);
      }
    }
    for (; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      *puVar5 = *param_3;
      puVar5 = puVar5 + 1;
    }
  }
  *(uint *)(param_1 + 0x38) = param_2;
  return;
}






// 函数: void FUN_1806d80c0(char *param_1)
void FUN_1806d80c0(char *param_1)

{
  char cVar1;
  int iVar2;
  int8_t auStack_108 [256];
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (iVar2 = isspace(cVar1), iVar2 != 0))) {
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
                    // WARNING: Subroutine does not return
  memset(auStack_108,0,0x100);
}






// 函数: void FUN_1806d80d4(longlong param_1)
void FUN_1806d80d4(longlong param_1)

{
  char in_AL;
  int iVar1;
  int8_t auStackX_20 [8];
  
  if (in_AL != '\0') {
    do {
      iVar1 = isspace(in_AL);
      if (iVar1 == 0) break;
      in_AL = *(char *)(param_1 + 1);
      param_1 = param_1 + 1;
    } while (in_AL != '\0');
  }
                    // WARNING: Subroutine does not return
  memset(auStackX_20,0,0x100);
}



float FUN_1806d8129(void)

{
  double dVar1;
  char in_AL;
  int iVar2;
  int8_t *unaff_RBX;
  longlong unaff_RDI;
  uint64_t *unaff_R14;
  int8_t auStackX_20 [8];
  int8_t *in_stack_00000130;
  
  do {
    iVar2 = isspace(in_AL);
    if ((iVar2 != 0) || (in_stack_00000130 <= unaff_RBX)) break;
    *unaff_RBX = unaff_RBX[unaff_RDI - (longlong)auStackX_20];
    unaff_RBX = unaff_RBX + 1;
    in_AL = unaff_RBX[unaff_RDI - (longlong)auStackX_20];
  } while (in_AL != '\0');
  *unaff_RBX = 0;
  dVar1 = (double)strtod(auStackX_20,&stack0x00000130);
  if (unaff_R14 != (uint64_t *)0x0) {
    *unaff_R14 = in_stack_00000130 + (unaff_RDI - (longlong)auStackX_20);
  }
  return (float)dVar1;
}



float FUN_1806d8170(void)

{
  double dVar1;
  int8_t *unaff_RBX;
  longlong unaff_RDI;
  longlong *unaff_R14;
  int8_t auStackX_20 [8];
  longlong in_stack_00000130;
  
  *unaff_RBX = 0;
  dVar1 = (double)strtod(auStackX_20,&stack0x00000130);
  if (unaff_R14 != (longlong *)0x0) {
    *unaff_R14 = (in_stack_00000130 - (longlong)auStackX_20) + unaff_RDI;
  }
  return (float)dVar1;
}






// 函数: void FUN_1806d8197(void)
void FUN_1806d8197(void)

{
  longlong unaff_RDI;
  longlong *unaff_R14;
  int8_t auStackX_20 [8];
  longlong in_stack_00000130;
  
  *unaff_R14 = (in_stack_00000130 - (longlong)auStackX_20) + unaff_RDI;
  return;
}






// 函数: void FUN_1806d81c0(char *param_1,longlong *param_2,int32_t *param_3,longlong param_4)
void FUN_1806d81c0(char *param_1,longlong *param_2,int32_t *param_3,longlong param_4)

{
  char *pcVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 != 0) {
    *param_3 = 0;
    if ((param_1 != (char *)0x0) && (pcVar1 = param_1, iVar3 = 0, *param_1 != '\0')) {
      do {
        iVar4 = iVar3;
        iVar3 = iVar4 + 1;
        pcVar1 = pcVar1 + 1;
      } while (*pcVar1 != '\0');
      uVar2 = (**(code **)(*param_2 + 8))(param_2,iVar4 + 2);
                    // WARNING: Subroutine does not return
      memcpy(uVar2,param_1,iVar3);
    }
  }
  return;
}






// 函数: void FUN_1806d81d6(char *param_1,longlong *param_2,int32_t *param_3)
void FUN_1806d81d6(char *param_1,longlong *param_2,int32_t *param_3)

{
  char *pcVar1;
  uint64_t uVar2;
  int iVar3;
  int iVar4;
  
  *param_3 = 0;
  if ((param_1 != (char *)0x0) && (pcVar1 = param_1, iVar3 = 0, *param_1 != '\0')) {
    do {
      iVar4 = iVar3;
      iVar3 = iVar4 + 1;
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = (**(code **)(*param_2 + 8))(param_2,iVar4 + 2);
                    // WARNING: Subroutine does not return
    memcpy(uVar2,param_1,iVar3);
  }
  return;
}






// 函数: void FUN_1806d81fd(char *param_1,longlong *param_2)
void FUN_1806d81fd(char *param_1,longlong *param_2)

{
  uint64_t uVar1;
  
  do {
    param_1 = param_1 + 1;
  } while (*param_1 != '\0');
  uVar1 = (**(code **)(*param_2 + 8))();
                    // WARNING: Subroutine does not return
  memcpy(uVar1);
}






// 函数: void FUN_1806d828a(void)
void FUN_1806d828a(void)

{
  return;
}






// 函数: void FUN_1806d829c(void)
void FUN_1806d829c(void)

{
  return;
}






// 函数: void FUN_1806d82a0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint param_4,
void FUN_1806d82a0(longlong *param_1,uint64_t *param_2,uint64_t param_3,uint param_4,
                  longlong *param_5)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar2 = param_5;
  if ((param_5 != (longlong *)0x0) && (param_4 != 0)) {
    uVar4 = 0;
    lVar5 = *param_5;
    plVar3 = param_5;
    while (lVar5 != 0) {
      if ((*(uint *)(plVar3 + 1) & param_4) == *(uint *)(plVar3 + 1)) {
        if (*(int *)(param_2 + 3) != 0) {
          (**(code **)*param_2)(param_2,&UNK_18094c0a4,1);
        }
        pcVar1 = (char *)*plVar3;
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          lVar5 = -1;
          do {
            lVar5 = lVar5 + 1;
          } while (pcVar1[lVar5] != '\0');
          (**(code **)*param_2)(param_2);
        }
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      plVar3 = plVar2 + uVar4 * 2;
      lVar5 = *plVar3;
    }
    param_5._0_1_ = 0;
    (**(code **)*param_2)(param_2,&param_5,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_3,param_2[4]);
    param_2[3] = 0;
  }
  return;
}






// 函数: void FUN_1806d82d7(void)
void FUN_1806d82d7(void)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *unaff_RBP;
  ulonglong uVar3;
  uint64_t *unaff_RDI;
  longlong lVar4;
  uint unaff_R14D;
  longlong *unaff_R15;
  
  uVar3 = 0;
  lVar4 = *unaff_RBP;
  plVar2 = unaff_RBP;
  while (lVar4 != 0) {
    if ((*(uint *)(plVar2 + 1) & unaff_R14D) == *(uint *)(plVar2 + 1)) {
      if (*(int *)(unaff_RDI + 3) != 0) {
        (**(code **)*unaff_RDI)();
      }
      pcVar1 = (char *)*plVar2;
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (pcVar1[lVar4] != '\0');
        (**(code **)*unaff_RDI)();
      }
    }
    uVar3 = (ulonglong)((int)uVar3 + 1);
    plVar2 = unaff_RBP + uVar3 * 2;
    lVar4 = *plVar2;
  }
  (**(code **)*unaff_RDI)();
  (**(code **)(*unaff_R15 + 0x10))();
  unaff_RDI[3] = 0;
  return;
}






// 函数: void FUN_1806d82e4(void)
void FUN_1806d82e4(void)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *unaff_RBP;
  uint unaff_ESI;
  uint64_t *unaff_RDI;
  longlong lVar3;
  uint unaff_R14D;
  longlong *unaff_R15;
  
  plVar2 = unaff_RBP;
  do {
    if ((*(uint *)(plVar2 + 1) & unaff_R14D) == *(uint *)(plVar2 + 1)) {
      if (*(int *)(unaff_RDI + 3) != 0) {
        (**(code **)*unaff_RDI)();
      }
      pcVar1 = (char *)*plVar2;
      if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (pcVar1[lVar3] != '\0');
        (**(code **)*unaff_RDI)();
      }
    }
    unaff_ESI = unaff_ESI + 1;
    plVar2 = unaff_RBP + (ulonglong)unaff_ESI * 2;
  } while (*plVar2 != 0);
  (**(code **)*unaff_RDI)();
  (**(code **)(*unaff_R15 + 0x10))();
  unaff_RDI[3] = 0;
  return;
}






// 函数: void FUN_1806d8355(void)
void FUN_1806d8355(void)

{
  uint64_t *unaff_RDI;
  longlong *unaff_R15;
  int8_t uStack0000000000000060;
  
  uStack0000000000000060 = 0;
  (**(code **)*unaff_RDI)();
  (**(code **)(*unaff_R15 + 0x10))();
  unaff_RDI[3] = 0;
  return;
}






// 函数: void FUN_1806d838a(void)
void FUN_1806d838a(void)

{
  return;
}






// 函数: void FUN_1806d83a0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d83a0(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4,
                  longlong param_5)

{
  char cVar1;
  uint64_t uVar2;
  void *puStack_28;
  longlong lStack_20;
  longlong lStack_18;
  
  if (param_5 != 0) {
    cVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_5);
    if (cVar1 == '\0') {
      uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar2,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770,param_4);
    }
  }
  lStack_18 = 0;
  if (param_5 != 0) {
    lStack_18 = (**(code **)(*param_2 + 0x68))(param_2,param_5);
    if (lStack_18 == 0) {
      lStack_18 = param_5;
    }
  }
  puStack_28 = &UNK_180a3bea0;
  lStack_20 = param_5;
  (**(code **)(*param_1 + 8))(param_1,param_4,&puStack_28);
  return;
}






// 函数: void FUN_1806d84a0(uint64_t *param_1)
void FUN_1806d84a0(uint64_t *param_1)

{
  *param_1 = &UNK_18094c9d0;
  if (param_1[2] != 0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    *param_1 = &UNK_18094a210;
    return;
  }
  *param_1 = &UNK_18094a210;
  return;
}






// 函数: void FUN_1806d84f0(longlong param_1,uint64_t param_2,int param_3)
void FUN_1806d84f0(longlong param_1,uint64_t param_2,int param_3)

{
  uint64_t uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18) + param_3;
  if (*(uint *)(param_1 + 0x1c) < uVar2) {
    uVar2 = uVar2 >> 1 | uVar2;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = (uVar2 >> 0x10 | uVar2) + 1;
    if (uVar2 < 0x1000) {
      uVar2 = 0x1000;
    }
    *(uint *)(param_1 + 0x1c) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                      (*(longlong **)(param_1 + 8),uVar2,&UNK_18094cab0,&UNK_18094ca60,0x43);
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(uint64_t *)(param_1 + 0x10),*(int32_t *)(param_1 + 0x18));
  }
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x10),param_2,param_3);
}






// 函数: void FUN_1806d8610(longlong param_1,uint64_t param_2,uint param_3)
void FUN_1806d8610(longlong param_1,uint64_t param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 8) - *(uint *)(param_1 + 0x18);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2,(ulonglong)*(uint *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x10),uVar1);
}



uint64_t * FUN_1806d86a0(uint64_t *param_1,longlong param_2)

{
  char cVar1;
  uint64_t uVar2;
  int32_t *puVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  char acStack_138 [304];
  
  uVar6 = 0;
  *param_1 = &UNK_18094ca18;
  param_1[1] = 0;
  pcVar4 = acStack_138;
  do {
    cVar1 = pcVar4[param_2 - (longlong)acStack_138];
    if (cVar1 == '\0') break;
    if (cVar1 == '/') {
      cVar1 = '\\';
    }
    uVar5 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar5;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (uVar5 < 300);
  acStack_138[uVar6] = '\0';
  if ((int)uVar6 != 300) {
    fopen_s(param_1 + 1,acStack_138,&UNK_180a0cf4c);
  }
  if (param_1[1] == 0) {
    uVar2 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
    puVar3 = (int32_t *)_errno();
    _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
              (uVar2,0x20,&UNK_18094ca60,0x7a,&UNK_18094cad0,param_2,*puVar3);
  }
  return param_1;
}






// 函数: void FUN_1806d8790(uint64_t *param_1)
void FUN_1806d8790(uint64_t *param_1)

{
  *param_1 = &UNK_18094ca18;
  if (param_1[1] != 0) {
    fclose();
  }
  *param_1 = &UNK_18094a210;
  return;
}



uint64_t * FUN_1806d8810(uint64_t *param_1,longlong param_2)

{
  char cVar1;
  int32_t uVar2;
  char *pcVar3;
  uint uVar4;
  ulonglong uVar5;
  char acStack_138 [304];
  
  param_1[1] = 0;
  uVar5 = 0;
  *param_1 = &UNK_18094ca30;
  pcVar3 = acStack_138;
  do {
    cVar1 = pcVar3[param_2 - (longlong)acStack_138];
    if (cVar1 == '\0') break;
    if (cVar1 == '/') {
      cVar1 = '\\';
    }
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (uVar4 < 300);
  acStack_138[uVar5] = '\0';
  if ((int)uVar5 != 300) {
    fopen_s(param_1 + 1,acStack_138,&UNK_180a01ff0);
  }
  if (param_1[1] == 0) {
    *(int32_t *)(param_1 + 2) = 0;
  }
  else {
    fseek(param_1[1],0,2);
    uVar2 = ftell(param_1[1]);
    *(int32_t *)(param_1 + 2) = uVar2;
    fseek(param_1[1],0,0);
  }
  return param_1;
}






// 函数: void FUN_1806d88f0(uint64_t *param_1)
void FUN_1806d88f0(uint64_t *param_1)

{
  *param_1 = &UNK_18094ca30;
  if (param_1[1] != 0) {
    fclose();
  }
  *param_1 = &UNK_180a23da0;
  return;
}



uint64_t * FUN_1806d89b0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094ca30;
  if (param_1[1] != 0) {
    fclose();
  }
  *param_1 = &UNK_180a23da0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}



uint64_t * FUN_1806d8a10(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18094ca18;
  if (param_1[1] != 0) {
    fclose();
  }
  *param_1 = &UNK_18094a210;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



uint64_t * FUN_1806d8a70(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a23da0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}



longlong *
FUN_1806d8aa0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *puVar4;
  longlong lVar5;
  uint64_t uVar6;
  uint64_t in_stack_ffffffffffffffe8;
  int32_t uVar7;
  uint64_t in_stack_fffffffffffffff0;
  int32_t uVar8;
  
  uVar8 = (int32_t)((ulonglong)in_stack_fffffffffffffff0 >> 0x20);
  uVar7 = (int32_t)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    puVar4 = &UNK_18094a1f0;
  }
  else {
    puVar4 = (void *)__std_type_info_name(0x180bfc5e8,0x180c827e0);
  }
  lVar5 = (**(code **)(*plVar2 + 8))(plVar2,0x78,puVar4,&UNK_18094cb00,CONCAT44(uVar7,0x31));
  if (lVar5 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    plVar2 = (longlong *)FUN_1806d8d70(lVar5,uVar6,param_2,param_3,param_4,param_5);
    uVar8 = (int32_t)((ulonglong)param_5 >> 0x20);
  }
  lVar5 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar2 + 3,0x180be0760,CONCAT44(uVar8,0x1e0));
  plVar2[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}






// 函数: void FUN_1806d8bd0(longlong param_1,longlong *param_2)
void FUN_1806d8bd0(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x1e0);
  }
                    // WARNING: Could not recover jumptable at 0x0001806d8c1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}






// 函数: void FUN_1806d8c80(longlong param_1,uint64_t param_2)
void FUN_1806d8c80(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1806f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be0760);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}



uint * FUN_1806d8cc0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((longlong)puVar6 + 10) = 2;
    *(void **)puVar6 = &UNK_18094cde8;
    *(void **)(puVar6 + 6) = &UNK_18094cfb0;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x78;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar5 + 0x1e0;
    *(ulonglong *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar4 = FUN_1806f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be0760);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}



uint64_t *
FUN_1806d8d70(uint64_t *param_1,float *param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6)

{
  float fVar1;
  longlong lVar2;
  int16_t auStackX_8 [4];
  float fStack_28;
  
  auStackX_8[0] = 3;
  FUN_1806de500(param_1,0x105,auStackX_8,param_3,param_4,param_5,param_6,0x1e0,&UNK_18094d000);
  lVar2 = param_1[0xd];
  *param_1 = &UNK_18094cde8;
  param_1[3] = &UNK_18094cfb0;
  *(int8_t *)(param_1 + 0xe) = 1;
  *(uint64_t *)(lVar2 + 0x50) = 0;
  *(uint64_t *)(lVar2 + 0x58) = 0;
  *(uint64_t *)(lVar2 + 0x60) = 0;
  *(uint64_t *)(lVar2 + 0xd4) = 0x3f00000000000000;
  *(uint64_t *)(lVar2 + 0xdc) = 0;
  *(uint64_t *)(lVar2 + 0xe4) = 0x3fc90fdb3dcccccd;
  *(int32_t *)(lVar2 + 0xec) = 0xbfc90fdb;
  *(uint64_t *)(lVar2 + 0xf0) = 0x3f00000000000000;
  *(uint64_t *)(lVar2 + 0xf8) = 0;
  *(uint64_t *)(lVar2 + 0x100) = 0x3fc90fdb3dcccccd;
  *(int32_t *)(lVar2 + 0x108) = 0x3fc90fdb;
  *(uint64_t *)(lVar2 + 0x10c) = 0x3f00000000000000;
  *(uint64_t *)(lVar2 + 0x114) = 0;
  *(uint64_t *)(lVar2 + 0x11c) = 0xbfc90fdb00000000;
  *(uint64_t *)(lVar2 + 0x124) = 0xbfc90fdb3fc90fdb;
  *(int32_t *)(lVar2 + 300) = 0x3fc90fdb;
  fVar1 = *param_2;
  *(uint64_t *)(lVar2 + 0x68) = 0;
  *(uint64_t *)(lVar2 + 0x70) = 0;
  *(ulonglong *)(lVar2 + 0x78) = CONCAT44(0x7f7fffff,fVar1 * 0.01);
  *(float *)(lVar2 + 0x1d0) = *param_2 * 1e-06;
  fVar1 = *param_2;
  fStack_28 = fVar1 * 0.01;
  if (1.111589e+38 <= fStack_28) {
    fStack_28 = 1.111589e+38;
  }
  *(int32_t *)(lVar2 + 0x80) = 0;
  *(float *)(lVar2 + 0x84) = fVar1 + fVar1;
  *(int32_t *)(lVar2 + 0x88) = 0;
  *(int32_t *)(lVar2 + 0x8c) = 0;
  *(ulonglong *)(lVar2 + 0x90) = CONCAT44(0x7eaaaaaa,fStack_28);
  *(int32_t *)(lVar2 + 0x98) = 0xfeaaaaaa;
  fVar1 = *param_2;
  fStack_28 = fVar1 * 0.01;
  if (1.111589e+38 <= fStack_28) {
    fStack_28 = 1.111589e+38;
  }
  *(int32_t *)(lVar2 + 0x9c) = 0;
  *(float *)(lVar2 + 0xa0) = fVar1 + fVar1;
  *(int32_t *)(lVar2 + 0xa4) = 0;
  *(int32_t *)(lVar2 + 0xa8) = 0;
  *(ulonglong *)(lVar2 + 0xac) = CONCAT44(0x7eaaaaaa,fStack_28);
  *(int32_t *)(lVar2 + 0xb4) = 0xfeaaaaaa;
  fVar1 = *param_2;
  fStack_28 = fVar1 * 0.01;
  if (1.111589e+38 <= fStack_28) {
    fStack_28 = 1.111589e+38;
  }
  *(int32_t *)(lVar2 + 0xb8) = 0;
  *(float *)(lVar2 + 0xbc) = fVar1 + fVar1;
  *(int32_t *)(lVar2 + 0xc0) = 0;
  *(int32_t *)(lVar2 + 0xc4) = 0;
  *(ulonglong *)(lVar2 + 200) = CONCAT44(0x7eaaaaaa,fStack_28);
  *(int32_t *)(lVar2 + 0xd0) = 0xfeaaaaaa;
  *(uint64_t *)(lVar2 + 0x130) = 0;
  *(uint64_t *)(lVar2 + 0x138) = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 0x140) = 0;
  *(uint64_t *)(lVar2 + 0x148) = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 0x150) = 0;
  *(uint64_t *)(lVar2 + 0x158) = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 0x160) = 0;
  *(uint64_t *)(lVar2 + 0x168) = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 0x170) = 0;
  *(uint64_t *)(lVar2 + 0x178) = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 0x180) = 0;
  *(uint64_t *)(lVar2 + 0x188) = 0x7f7fffff;
  *(uint64_t *)(lVar2 + 400) = 0;
  *(int32_t *)(lVar2 + 0x198) = 0;
  *(uint64_t *)(lVar2 + 0x19c) = 0x3f800000;
  *(uint64_t *)(lVar2 + 0x1a4) = 0;
  *(uint64_t *)(lVar2 + 0x1ac) = 0;
  *(uint64_t *)(lVar2 + 0x1b4) = 0;
  *(uint64_t *)(lVar2 + 0x1bc) = 0;
  *(int32_t *)(lVar2 + 0x1d4) = 0x501502f9;
  *(uint64_t *)(lVar2 + 0x1d8) = 0x40490fdb;
  return param_1;
}



uint64_t FUN_1806d9160(longlong *param_1)

{
  float *pfVar1;
  float fVar2;
  uint64_t uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_48 [72];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x48))(param_1,auStack_48);
  fVar6 = *pfVar1;
  fVar5 = pfVar1[3];
  if (fVar6 == 0.0) {
    fVar6 = 0.0;
    fVar5 = 1.0;
  }
  else {
    fVar2 = 1.0 / SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    fVar5 = fVar5 * fVar2;
    fVar6 = fVar6 * fVar2;
  }
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  uVar3 = acosf(fVar5);
  uVar4 = (uint)((ulonglong)uVar3 >> 0x20);
  fVar5 = (float)uVar3 + (float)uVar3;
  if (fVar6 < 0.0) {
    fVar5 = -fVar5;
    uVar4 = uVar4 ^ 0x80000000;
  }
  return CONCAT44(uVar4,fVar5);
}



float FUN_1806d9200(longlong *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_48 [72];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,auStack_48);
  fVar6 = *pfVar2;
  fVar1 = pfVar2[3];
  if (fVar6 == 0.0) {
    fVar5 = 0.0;
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar6 * fVar6);
    fVar5 = fVar6 * fVar3;
    fVar3 = fVar1 * fVar3;
  }
  fVar6 = -fVar5 * fVar6;
  fVar4 = pfVar2[1] * fVar3 + -fVar5 * pfVar2[2];
  fVar5 = fVar1 * fVar3 - fVar6;
  if (fVar5 < 0.0) {
    fVar4 = -fVar4;
    fVar5 = fVar6 - fVar1 * fVar3;
  }
  fVar6 = (float)atan2f(fVar4,fVar5 + 1.0);
  return fVar6 * 4.0;
}



float FUN_1806d92d0(longlong *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_48 [72];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,auStack_48);
  fVar6 = *pfVar2;
  fVar1 = pfVar2[3];
  if (fVar6 == 0.0) {
    fVar5 = 0.0;
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar6 * fVar6);
    fVar5 = fVar6 * fVar3;
    fVar3 = fVar1 * fVar3;
  }
  fVar6 = -fVar5 * fVar6;
  fVar4 = pfVar2[2] * fVar3 - -fVar5 * pfVar2[1];
  fVar5 = fVar1 * fVar3 - fVar6;
  if (fVar5 < 0.0) {
    fVar4 = -fVar4;
    fVar5 = fVar6 - fVar1 * fVar3;
  }
  fVar6 = (float)atan2f(fVar4,fVar5 + 1.0);
  return fVar6 * 4.0;
}






// 函数: void FUN_1806d9830(longlong param_1,float *param_2,char param_3)
void FUN_1806d9830(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  lVar8 = *(longlong *)(param_1 + 0x68);
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar9 = 1.0 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar7 = param_2[4];
  *(float *)(lVar8 + 400) = fVar2 * fVar9;
  *(float *)(lVar8 + 0x194) = fVar1 * fVar9;
  *(float *)(lVar8 + 0x198) = fVar3 * fVar9;
  *(float *)(lVar8 + 0x19c) = fVar4 * fVar9;
  *(float *)(lVar8 + 0x1a0) = fVar7;
  *(float *)(lVar8 + 0x1a4) = fVar5;
  *(float *)(lVar8 + 0x1a8) = fVar6;
  if (param_3 != '\0') {
    FUN_1806e3bc0();
  }
                    // WARNING: Could not recover jumptable at 0x0001806d98fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
  return;
}






// 函数: void FUN_1806d9960(longlong param_1,int32_t *param_2,int32_t *param_3,char param_4)
void FUN_1806d9960(longlong param_1,int32_t *param_2,int32_t *param_3,char param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  *(int32_t *)(lVar1 + 0x1ac) = *param_2;
  *(int32_t *)(lVar1 + 0x1b0) = param_2[1];
  *(int32_t *)(lVar1 + 0x1b4) = param_2[2];
  *(int32_t *)(lVar1 + 0x1b8) = *param_3;
  *(int32_t *)(lVar1 + 0x1bc) = param_3[1];
  *(int32_t *)(lVar1 + 0x1c0) = param_3[2];
  if (param_4 != '\0') {
    FUN_1806e3bc0();
  }
                    // WARNING: Could not recover jumptable at 0x0001806d99c0. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
  return;
}



bool FUN_1806d9aa0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be0760,0x1e0);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}



uint64_t *
FUN_1806d9d10(uint64_t *param_1,int32_t param_2,int32_t *param_3,int32_t param_4,
             int8_t *param_5)

{
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  *param_5 = 0;
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 4:
    *(int32_t *)param_1 = *param_3;
    *(int32_t *)((longlong)param_1 + 4) = param_3[1];
    *(int32_t *)(param_1 + 1) = param_3[2];
    *(int32_t *)((longlong)param_1 + 0xc) = param_3[3];
    return param_1;
  case 3:
    uStack_10 = 0x3f800000;
    uStack_18 = 0;
    uStack_14 = 0;
    FUN_1806e1f70(param_1,param_3,&uStack_18,param_5,param_5);
    return param_1;
  case 5:
    uStack_14 = 0x3f800000;
    uStack_18 = 0;
    uStack_10 = 0;
    FUN_1806e1f70(param_1,param_3,&uStack_18,param_5,param_5);
    return param_1;
  case 6:
    uStack_18 = 0x3f800000;
    uStack_14 = 0;
    uStack_10 = 0;
    FUN_1806e1f70(param_1,param_3,&uStack_18,param_5,param_5);
    return param_1;
  case 7:
    FUN_1806e2f90(param_1,param_3,param_4);
    return param_1;
  default:
    *(int32_t *)((longlong)param_1 + 0xc) = 0x3f800000;
    *param_1 = 0;
    *(int32_t *)(param_1 + 1) = 0;
    return param_1;
  }
}






