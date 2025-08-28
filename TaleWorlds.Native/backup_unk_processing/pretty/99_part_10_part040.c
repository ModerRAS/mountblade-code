#include "TaleWorlds.Native.Split.h"

// 99_part_10_part040.c - 12 个函数

// 函数: void FUN_1806c17d0(longlong *param_1,longlong param_2)
void FUN_1806c17d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int8_t *puVar3;
  char cVar4;
  uint uVar5;
  uint64_t uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint64_t uStackX_8;
  void *puStack_88;
  longlong lStack_80;
  longlong lStack_78;
  int8_t auStack_68 [40];
  int8_t uStack_40;
  int8_t *puStack_38;
  int32_t uStack_30;
  uint uStack_2c;
  
  uVar5 = (**(code **)(param_2 + 0x18))(param_1[2]);
  if (uVar5 != 0) {
    puStack_38 = auStack_68;
    uStack_30 = 0;
    uStack_40 = 1;
    uStack_2c = 5;
    uStackX_8 = 0;
    FUN_1806d7f00(auStack_68,uVar5,&uStackX_8);
    (**(code **)(param_2 + 0x10))(param_1[2],puStack_38,uVar5);
    FUN_1806d7170(param_1,&UNK_18094c9a0);
    if (uVar5 != 0) {
      uVar9 = (ulonglong)uVar5;
      lVar10 = 0;
      do {
        plVar8 = (longlong *)param_1[4];
        plVar1 = (longlong *)param_1[1];
        lVar2 = *(longlong *)(puStack_38 + lVar10);
        if ((lVar2 != 0) && (cVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,lVar2), cVar4 == '\0')) {
          uVar6 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
          _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar6,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770,&UNK_18094c9a0);
        }
        lVar7 = 0;
        if ((lVar2 != 0) && (lVar7 = (**(code **)(*plVar8 + 0x68))(plVar8,lVar2), lVar7 == 0)) {
          lVar7 = lVar2;
        }
        puStack_88 = &UNK_18094bec8;
        lStack_80 = lVar2;
        lStack_78 = lVar7;
        (**(code **)(*plVar1 + 8))(plVar1,&UNK_18094c9a0,&puStack_88);
        lVar10 = lVar10 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    lVar10 = *param_1;
    if (*(int *)(lVar10 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar10 + 8) + 8 + (ulonglong)(*(int *)(lVar10 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
        lVar10 = *param_1;
      }
      *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
    }
    puVar3 = puStack_38;
    if (((((uStack_2c & 0x7fffffff) != 0) && (-1 < (int)uStack_2c)) && (puStack_38 != auStack_68))
       && (puStack_38 != (int8_t *)0x0)) {
      plVar8 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar8 + 0x10))(plVar8,puVar3);
    }
  }
  return;
}






// 函数: void FUN_1806c17f7(void)
void FUN_1806c17f7(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int8_t *in_RAX;
  uint64_t uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint unaff_EBX;
  ulonglong uVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar8;
  void *in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  int8_t uStack0000000000000078;
  int8_t *puStack0000000000000080;
  int32_t uStack0000000000000088;
  uint uStack000000000000008c;
  uint64_t uStack00000000000000c0;
  
  uStack0000000000000088 = 0;
  uStack0000000000000078 = 1;
  uStack000000000000008c = 5;
  uStack00000000000000c0 = 0;
  puStack0000000000000080 = in_RAX;
  FUN_1806d7f00(&stack0x00000050,unaff_EBX,&stack0x000000c0);
  (**(code **)(unaff_RSI + 0x10))(unaff_RDI[2],puStack0000000000000080,unaff_EBX);
  FUN_1806d7170();
  if (unaff_EBX != 0) {
    uVar7 = (ulonglong)unaff_EBX;
    lVar8 = 0;
    do {
      plVar6 = (longlong *)unaff_RDI[4];
      plVar1 = (longlong *)unaff_RDI[1];
      lVar2 = *(longlong *)(puStack0000000000000080 + lVar8);
      if ((lVar2 != 0) && (cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,lVar2), cVar3 == '\0')) {
        uVar4 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
        _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                  (uVar4,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770);
      }
      lVar5 = 0;
      if ((lVar2 != 0) && (lVar5 = (**(code **)(*plVar6 + 0x68))(plVar6,lVar2), lVar5 == 0)) {
        lVar5 = lVar2;
      }
      in_stack_00000030 = &UNK_18094bec8;
      in_stack_00000038 = lVar2;
      in_stack_00000040 = lVar5;
      (**(code **)(*plVar1 + 8))(plVar1,&UNK_18094c9a0,&stack0x00000030);
      lVar8 = lVar8 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar8 = *unaff_RDI;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_RDI[1] + 0x20))();
      lVar8 = *unaff_RDI;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  if (((((uStack000000000000008c & 0x7fffffff) != 0) && (-1 < (int)uStack000000000000008c)) &&
      (puStack0000000000000080 != &stack0x00000050)) &&
     (puStack0000000000000080 != (int8_t *)0x0)) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar6 + 0x10))(plVar6,puStack0000000000000080);
  }
  return;
}






// 函数: void FUN_1806c186e(void)
void FUN_1806c186e(void)

{
  longlong *plVar1;
  longlong lVar2;
  int8_t *puVar3;
  char cVar4;
  uint64_t uVar5;
  longlong *plVar6;
  uint unaff_EBX;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  int8_t *in_stack_00000080;
  uint64_t in_stack_00000088;
  
  uVar7 = (ulonglong)unaff_EBX;
  lVar8 = 0;
  do {
    plVar6 = (longlong *)unaff_RDI[4];
    plVar1 = (longlong *)unaff_RDI[1];
    lVar2 = *(longlong *)(in_stack_00000080 + lVar8);
    if ((lVar2 != 0) && (cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,lVar2), cVar4 == '\0')) {
      uVar5 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
      _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                (uVar5,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770);
    }
    if (lVar2 != 0) {
      (**(code **)(*plVar6 + 0x68))(plVar6,lVar2);
    }
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar8 = lVar8 + 8;
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  lVar8 = *unaff_RDI;
  if (*(int *)(lVar8 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar8 + 8) + 8 + (ulonglong)(*(int *)(lVar8 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_RDI[1] + 0x20))();
      lVar8 = *unaff_RDI;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + -1;
  }
  puVar3 = in_stack_00000080;
  if (((((in_stack_00000088._4_4_ & 0x7fffffff) != 0) && (-1 < (int)in_stack_00000088._4_4_)) &&
      (in_stack_00000080 != &stack0x00000050)) && (in_stack_00000080 != (int8_t *)0x0)) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar6 + 0x10))(plVar6,puVar3);
  }
  return;
}






// 函数: void FUN_1806c1951(void)
void FUN_1806c1951(void)

{
  int8_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  int8_t *in_stack_00000080;
  uint64_t in_stack_00000088;
  
  lVar3 = *unaff_RDI;
  if (*(int *)(lVar3 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar3 + 8) + 8 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_RDI[1] + 0x20))();
      lVar3 = *unaff_RDI;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  puVar1 = in_stack_00000080;
  if (((((in_stack_00000088._4_4_ & 0x7fffffff) != 0) && (-1 < (int)in_stack_00000088._4_4_)) &&
      (in_stack_00000080 != &stack0x00000050)) && (in_stack_00000080 != (int8_t *)0x0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar1);
  }
  return;
}






// 函数: void FUN_1806c1963(uint64_t param_1,longlong param_2)
void FUN_1806c1963(uint64_t param_1,longlong param_2)

{
  int8_t *puVar1;
  int in_EAX;
  longlong *plVar2;
  longlong *unaff_RDI;
  int8_t *in_stack_00000080;
  uint64_t in_stack_00000088;
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(longlong *)unaff_RDI[1] + 0x20))();
    param_2 = *unaff_RDI;
  }
  puVar1 = in_stack_00000080;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  if (((((in_stack_00000088._4_4_ & 0x7fffffff) != 0) && (-1 < (int)in_stack_00000088._4_4_)) &&
      (in_stack_00000080 != &stack0x00000050)) && (in_stack_00000080 != (int8_t *)0x0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar1);
  }
  return;
}






// 函数: void FUN_1806c19d0(longlong *param_1,longlong param_2)
void FUN_1806c19d0(longlong *param_1,longlong param_2)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int8_t *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint64_t uVar8;
  longlong *plVar9;
  uint64_t *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint64_t uStackX_8;
  void *puStack_278;
  uint uStack_270;
  int32_t uStack_26c;
  int8_t auStack_268 [40];
  int8_t uStack_240;
  int8_t *puStack_238;
  int32_t uStack_230;
  uint uStack_22c;
  void *puStack_228;
  longlong *plStack_220;
  longlong *plStack_218;
  int8_t auStack_208 [480];
  
  __0PxShapeGeneratedInfo_physx__QEAA_XZ(auStack_208);
  uVar6 = (**(code **)(param_2 + 0x18))(param_1[2]);
  if (uVar6 != 0) {
    puStack_238 = auStack_268;
    lVar12 = 0;
    uStack_240 = 1;
    uStack_230 = 0;
    uStackX_8 = 0;
    uStack_22c = 5;
    FUN_1806d7fe0(auStack_268,uVar6,&uStackX_8);
    (**(code **)(param_2 + 0x10))(param_1[2],puStack_238,uVar6);
    if (uVar6 != 0) {
      uVar11 = (ulonglong)uVar6;
      do {
        plVar9 = *(longlong **)(puStack_238 + lVar12);
        lVar7 = *param_1;
        if ((*(int *)(lVar7 + 0x10) != 0) &&
           (puVar10 = (uint64_t *)
                      ((ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10 + *(longlong *)(lVar7 + 8)),
           *(char *)(puVar10 + 1) == '\0')) {
          (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],*puVar10);
          *(int8_t *)
           (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1
          ;
          lVar7 = *param_1;
        }
        puStack_278 = &UNK_18094bf90;
        uStack_270 = uStack_270 & 0xffffff00;
        if (*(uint *)(lVar7 + 0x10) < (*(uint *)(lVar7 + 0x14) & 0x7fffffff)) {
          puVar1 = (int32_t *)
                   (*(longlong *)(lVar7 + 8) + (ulonglong)*(uint *)(lVar7 + 0x10) * 0x10);
          *puVar1 = 0x8094bf90;
          puVar1[1] = 1;
          puVar1[2] = uStack_270;
          puVar1[3] = uStack_26c;
          *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
        }
        else {
          FUN_1806d5a70(lVar7,&puStack_278);
        }
        cVar5 = (**(code **)(*plVar9 + 0x138))(plVar9);
        plVar2 = (longlong *)param_1[4];
        if (cVar5 == '\0') {
          plVar3 = (longlong *)param_1[1];
          cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
          if (cVar5 == '\0') {
            uVar8 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
            _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                      (uVar8,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770,&UNK_18094c840);
          }
          plStack_218 = (longlong *)(**(code **)(*plVar2 + 0x68))(plVar2,plVar9);
          puStack_228 = &UNK_18094bf90;
          if (plStack_218 == (longlong *)0x0) {
            plStack_218 = plVar9;
          }
          plStack_220 = plVar9;
          (**(code **)(*plVar3 + 8))(plVar3,&UNK_18094c840,&puStack_228);
        }
        else {
          FUN_1806d2b80(*param_1,plVar9,param_1[1],param_1[3],plVar2);
        }
        lVar7 = *param_1;
        if (*(int *)(lVar7 + 0x10) != 0) {
          if (*(char *)(*(longlong *)(lVar7 + 8) + 8 +
                       (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) != '\0') {
            (**(code **)(*(longlong *)param_1[1] + 0x20))();
            lVar7 = *param_1;
          }
          *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
        }
        lVar12 = lVar12 + 8;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar4 = puStack_238;
    if (((((uStack_22c & 0x7fffffff) != 0) && (-1 < (int)uStack_22c)) &&
        (puStack_238 != auStack_268)) && (puStack_238 != (int8_t *)0x0)) {
      plVar9 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar9 + 0x10))(plVar9,puVar4);
    }
  }
  return;
}






// 函数: void FUN_1806c1a05(void)
void FUN_1806c1a05(void)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int8_t *in_RAX;
  longlong lVar5;
  uint64_t uVar6;
  longlong *plVar7;
  uint64_t *puVar8;
  longlong *unaff_RBX;
  ulonglong uVar9;
  longlong unaff_RSI;
  uint unaff_EDI;
  longlong lVar10;
  void *in_stack_00000030;
  uint uStack0000000000000038;
  int32_t uStack000000000000003c;
  int8_t uStack0000000000000068;
  int8_t *puStack0000000000000070;
  int32_t uStack0000000000000078;
  uint uStack000000000000007c;
  void *in_stack_00000080;
  longlong *in_stack_00000088;
  longlong *in_stack_00000090;
  
  lVar10 = 0;
  uStack0000000000000068 = 1;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 5;
  puStack0000000000000070 = in_RAX;
  FUN_1806d7fe0(&stack0x00000040,unaff_EDI,&stack0x000002b0);
  (**(code **)(unaff_RSI + 0x10))(unaff_RBX[2],puStack0000000000000070,unaff_EDI);
  if (unaff_EDI != 0) {
    uVar9 = (ulonglong)unaff_EDI;
    do {
      plVar7 = *(longlong **)(puStack0000000000000070 + lVar10);
      lVar5 = *unaff_RBX;
      if ((*(int *)(lVar5 + 0x10) != 0) &&
         (puVar8 = (uint64_t *)
                   ((ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10 + *(longlong *)(lVar5 + 8)),
         *(char *)(puVar8 + 1) == '\0')) {
        (**(code **)(*(longlong *)unaff_RBX[1] + 0x18))((longlong *)unaff_RBX[1],*puVar8);
        *(int8_t *)
         (*(longlong *)(*unaff_RBX + 8) + 8 + (ulonglong)(*(int *)(*unaff_RBX + 0x10) - 1) * 0x10) =
             1;
        lVar5 = *unaff_RBX;
      }
      in_stack_00000030 = &UNK_18094bf90;
      uStack0000000000000038 = uStack0000000000000038 & 0xffffff00;
      if (*(uint *)(lVar5 + 0x10) < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
        puVar1 = (int32_t *)
                 (*(longlong *)(lVar5 + 8) + (ulonglong)*(uint *)(lVar5 + 0x10) * 0x10);
        *puVar1 = 0x8094bf90;
        puVar1[1] = 1;
        puVar1[2] = uStack0000000000000038;
        puVar1[3] = uStack000000000000003c;
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
      }
      else {
        FUN_1806d5a70(lVar5,&stack0x00000030);
      }
      cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7);
      plVar2 = (longlong *)unaff_RBX[4];
      if (cVar4 == '\0') {
        plVar3 = (longlong *)unaff_RBX[1];
        cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
        if (cVar4 == '\0') {
          uVar6 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
          _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                    (uVar6,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770);
        }
        in_stack_00000090 = (longlong *)(**(code **)(*plVar2 + 0x68))(plVar2,plVar7);
        in_stack_00000080 = &UNK_18094bf90;
        if (in_stack_00000090 == (longlong *)0x0) {
          in_stack_00000090 = plVar7;
        }
        in_stack_00000088 = plVar7;
        (**(code **)(*plVar3 + 8))(plVar3,&UNK_18094c840,&stack0x00000080);
      }
      else {
        FUN_1806d2b80(*unaff_RBX,plVar7,unaff_RBX[1],unaff_RBX[3],plVar2);
      }
      lVar5 = *unaff_RBX;
      if (*(int *)(lVar5 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar5 + 8) + 8 + (ulonglong)(*(int *)(lVar5 + 0x10) - 1) * 0x10)
            != '\0') {
          (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
          lVar5 = *unaff_RBX;
        }
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
      }
      lVar10 = lVar10 + 8;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (((((uStack000000000000007c & 0x7fffffff) != 0) && (-1 < (int)uStack000000000000007c)) &&
      (puStack0000000000000070 != &stack0x00000040)) &&
     (puStack0000000000000070 != (int8_t *)0x0)) {
    plVar7 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar7 + 0x10))(plVar7,puStack0000000000000070);
  }
  return;
}






// 函数: void FUN_1806c1a5a(void)
void FUN_1806c1a5a(void)

{
  int32_t *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int8_t *puVar4;
  char cVar5;
  longlong lVar6;
  uint64_t uVar7;
  longlong *plVar8;
  uint64_t *puVar9;
  longlong *unaff_RBX;
  ulonglong uVar10;
  ulonglong unaff_RDI;
  longlong unaff_R14;
  void *in_stack_00000030;
  uint uStack0000000000000038;
  int32_t uStack000000000000003c;
  int8_t *in_stack_00000070;
  uint64_t in_stack_00000078;
  void *in_stack_00000080;
  longlong *in_stack_00000088;
  longlong *in_stack_00000090;
  
  uVar10 = unaff_RDI & 0xffffffff;
  do {
    plVar8 = *(longlong **)(in_stack_00000070 + unaff_R14);
    lVar6 = *unaff_RBX;
    if ((*(int *)(lVar6 + 0x10) != 0) &&
       (puVar9 = (uint64_t *)
                 ((ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10 + *(longlong *)(lVar6 + 8)),
       *(char *)(puVar9 + 1) == '\0')) {
      (**(code **)(*(longlong *)unaff_RBX[1] + 0x18))((longlong *)unaff_RBX[1],*puVar9);
      *(int8_t *)
       (*(longlong *)(*unaff_RBX + 8) + 8 + (ulonglong)(*(int *)(*unaff_RBX + 0x10) - 1) * 0x10) = 1
      ;
      lVar6 = *unaff_RBX;
    }
    in_stack_00000030 = &UNK_18094bf90;
    uStack0000000000000038 = uStack0000000000000038 & 0xffffff00;
    if (*(uint *)(lVar6 + 0x10) < (*(uint *)(lVar6 + 0x14) & 0x7fffffff)) {
      puVar1 = (int32_t *)(*(longlong *)(lVar6 + 8) + (ulonglong)*(uint *)(lVar6 + 0x10) * 0x10);
      *puVar1 = 0x8094bf90;
      puVar1[1] = 1;
      puVar1[2] = uStack0000000000000038;
      puVar1[3] = uStack000000000000003c;
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
    }
    else {
      FUN_1806d5a70(lVar6,&stack0x00000030);
    }
    cVar5 = (**(code **)(*plVar8 + 0x138))(plVar8);
    plVar2 = (longlong *)unaff_RBX[4];
    if (cVar5 == '\0') {
      plVar3 = (longlong *)unaff_RBX[1];
      cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
      if (cVar5 == '\0') {
        uVar7 = _getInstance_Foundation_shdfnd_physx__SAAEAV123_XZ();
        _error_Foundation_shdfnd_physx__QEAAXW4Enum_PxErrorCode_3_PEBDH1ZZ
                  (uVar7,0x20,&UNK_18094c7d0,0x32,&UNK_18094c770);
      }
      in_stack_00000090 = (longlong *)(**(code **)(*plVar2 + 0x68))(plVar2,plVar8);
      in_stack_00000080 = &UNK_18094bf90;
      if (in_stack_00000090 == (longlong *)0x0) {
        in_stack_00000090 = plVar8;
      }
      in_stack_00000088 = plVar8;
      (**(code **)(*plVar3 + 8))(plVar3,&UNK_18094c840,&stack0x00000080);
    }
    else {
      FUN_1806d2b80(*unaff_RBX,plVar8,unaff_RBX[1],unaff_RBX[3],plVar2);
    }
    lVar6 = *unaff_RBX;
    if (*(int *)(lVar6 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar6 + 8) + 8 + (ulonglong)(*(int *)(lVar6 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
        lVar6 = *unaff_RBX;
      }
      *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + -1;
    }
    puVar4 = in_stack_00000070;
    unaff_R14 = unaff_R14 + 8;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (((((in_stack_00000078._4_4_ & 0x7fffffff) != 0) && (-1 < (int)in_stack_00000078._4_4_)) &&
      (in_stack_00000070 != &stack0x00000040)) && (in_stack_00000070 != (int8_t *)0x0)) {
    plVar8 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar8 + 0x10))(plVar8,puVar4);
  }
  return;
}






// 函数: void FUN_1806c1c1e(void)
void FUN_1806c1c1e(void)

{
  int8_t *puVar1;
  longlong *plVar2;
  int8_t *in_stack_00000070;
  ulonglong in_stack_00000078;
  
  puVar1 = in_stack_00000070;
  if (((((in_stack_00000078 & 0x7fffffff00000000) != 0) && (-1 < (longlong)in_stack_00000078)) &&
      (in_stack_00000070 != &stack0x00000040)) && (in_stack_00000070 != (int8_t *)0x0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar1);
  }
  return;
}






// 函数: void FUN_1806c1c31(void)
void FUN_1806c1c31(void)

{
  int8_t *puVar1;
  int in_EAX;
  longlong *plVar2;
  int8_t *in_stack_00000070;
  
  puVar1 = in_stack_00000070;
  if (((-1 < in_EAX) && (in_stack_00000070 != &stack0x00000040)) &&
     (in_stack_00000070 != (int8_t *)0x0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar1);
  }
  return;
}






// 函数: void FUN_1806c1c70(longlong *param_1,uint64_t param_2,uint64_t *param_3,longlong *param_4)
void FUN_1806c1c70(longlong *param_1,uint64_t param_2,uint64_t *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  int8_t uVar4;
  void *puVar5;
  int *piVar6;
  longlong lVar7;
  int aiStackX_8 [2];
  char *pcStackX_20;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  
  FUN_1806d7000(param_1,*param_3);
  aiStackX_8[0] = 0x15c;
  piVar6 = aiStackX_8;
  if ((int *)param_1[0xb] != (int *)0x0) {
    piVar6 = (int *)param_1[0xb];
  }
  lVar7 = *param_4;
  while (lVar7 != 0) {
    FUN_1806d7000(param_1,lVar7);
    lVar7 = param_4[1];
    pcStackX_20 = (char *)0x0;
    if ((char)param_1[9] != '\0') {
      iVar1 = *(int *)(*param_1 + 0x10);
      if (iVar1 == 0) {
        puVar5 = &UNK_18094c9c0;
      }
      else {
        puVar5 = *(void **)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x10))
                        ((longlong *)param_1[5],puVar5,&pcStackX_20);
      if (((cVar2 != '\0') && (pcStackX_20 != (char *)0x0)) && (*pcStackX_20 != '\0')) {
        FUN_1806c4d50(pcStackX_20,&uStack_68);
        uStack_48 = uStack_68;
        uStack_40 = uStack_60;
        uStack_38 = uStack_58;
        uStack_30 = uStack_50;
        uStack_34 = uStack_54;
        (*(code *)param_3[2])(param_1[6],(int)lVar7,&uStack_48);
      }
    }
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
        (**(code **)(*(longlong *)param_1[5] + 0x48))();
        lVar7 = *param_1;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      lVar7 = *param_1;
    }
    *(int8_t *)(param_1 + 9) = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = (char)param_1[9];
      if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar4 = 0;
      }
      *(int8_t *)(param_1 + 9) = uVar4;
    }
    *piVar6 = *piVar6 + 1;
    param_4 = param_4 + 2;
    lVar7 = *param_4;
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)param_1[9];
    if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806c1c7e(uint64_t param_1,uint64_t param_2,longlong param_3,longlong *param_4,
void FUN_1806c1c7e(uint64_t param_1,uint64_t param_2,longlong param_3,longlong *param_4,
                  uint64_t param_5,int32_t param_6,int32_t param_7,uint64_t param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  int8_t uVar4;
  void *puVar5;
  longlong *unaff_RBX;
  int *piVar6;
  longlong lVar7;
  int32_t uVar8;
  int32_t extraout_XMM0_Da;
  uint64_t uStackX_20;
  int in_stack_00000090;
  char *in_stack_000000a8;
  
  uVar8 = FUN_1806d7000();
  in_stack_00000090 = 0x15c;
  piVar6 = &stack0x00000090;
  if ((int *)unaff_RBX[0xb] != (int *)0x0) {
    piVar6 = (int *)unaff_RBX[0xb];
  }
  lVar7 = *param_4;
  while (lVar7 != 0) {
    uVar8 = FUN_1806d7000(uVar8,lVar7);
    lVar7 = param_4[1];
    in_stack_000000a8 = (char *)0x0;
    if ((char)unaff_RBX[9] != '\0') {
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if (iVar1 == 0) {
        puVar5 = &UNK_18094c9c0;
      }
      else {
        puVar5 = *(void **)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x18);
      }
      cVar2 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x10))
                        ((longlong *)unaff_RBX[5],puVar5,&stack0x000000a8);
      uVar8 = extraout_XMM0_Da;
      if (((cVar2 != '\0') && (in_stack_000000a8 != (char *)0x0)) && (*in_stack_000000a8 != '\0')) {
        FUN_1806c4d50(in_stack_000000a8,&uStackX_20);
        param_8 = uStackX_20;
        param_9 = param_5;
        param_10 = param_6;
        param_11 = param_7;
        uVar8 = (**(code **)(param_3 + 0x10))(unaff_RBX[6],(int)lVar7,&param_8);
      }
    }
    lVar7 = *unaff_RBX;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
      if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
         (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
        uVar8 = (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
        lVar7 = *unaff_RBX;
      }
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
      lVar7 = *unaff_RBX;
    }
    *(int8_t *)(unaff_RBX + 9) = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = (char)unaff_RBX[9];
      if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18
                   ) == '\0') {
        uVar4 = 0;
      }
      *(int8_t *)(unaff_RBX + 9) = uVar4;
    }
    *piVar6 = *piVar6 + 1;
    param_4 = param_4 + 2;
    lVar7 = *param_4;
  }
  lVar7 = *unaff_RBX;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar7 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar7 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)unaff_RBX[5] + 0x48))();
      lVar7 = *unaff_RBX;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *unaff_RBX;
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar4 = (int8_t)unaff_RBX[9];
    if (*(char *)(*(longlong *)(lVar7 + 8) + 0x10 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(unaff_RBX + 9) = uVar4;
  }
  return;
}






