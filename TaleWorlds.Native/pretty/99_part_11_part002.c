#include "TaleWorlds.Native.Split.h"

// 99_part_11_part002.c - 11 个函数

// 函数: void FUN_1806d5c70(longlong *param_1,longlong param_2)
void FUN_1806d5c70(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  int8_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint64_t uStackX_8;
  int8_t auStack_7d8 [512];
  int8_t uStack_5d8;
  int8_t *puStack_5d0;
  int32_t uStack_5c8;
  uint uStack_5c4;
  int8_t auStack_5b8 [512];
  int8_t uStack_3b8;
  int8_t *puStack_3b0;
  int32_t uStack_3a8;
  uint uStack_3a4;
  int8_t auStack_398 [896];
  
  uVar6 = (**(code **)(param_2 + 0x18))(param_1[2]);
  uVar12 = (ulonglong)uVar6;
  if (uVar6 != 0) {
    puStack_3b0 = auStack_5b8;
    lVar9 = 0;
    uStack_3a8 = 0;
    uStack_3a4 = 0x40;
    uStack_3b8 = 1;
    uStackX_8 = 0;
    FUN_1806d7d40(auStack_5b8,uVar12,&uStackX_8);
    (**(code **)(param_2 + 0x10))(param_1[2],puStack_3b0,uVar6);
    uStack_5c8 = 0;
    puStack_5d0 = auStack_7d8;
    uStack_5d8 = 1;
    uStack_5c4 = 0x40;
    if (uVar6 != 0) {
      uVar13 = (ulonglong)uVar6;
      lVar10 = lVar9;
      do {
        lVar2 = param_1[5];
        lVar3 = *(longlong *)(puStack_3b0 + lVar10);
        if ((*(int *)(lVar2 + 0x3c) != 0) &&
           (uVar7 = ~(lVar3 << 0x20) + lVar3, uVar7 = uVar7 ^ uVar7 >> 0x16,
           uVar7 = uVar7 + ~(uVar7 << 0xd), uVar7 = (uVar7 >> 8 ^ uVar7) * 9,
           uVar7 = uVar7 ^ uVar7 >> 0xf, uVar7 = uVar7 + ~(uVar7 << 0x1b),
           uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x20) +
                            ((uVar7 >> 0x1f ^ uVar7) & (ulonglong)(*(int *)(lVar2 + 0x2c) - 1)) * 4)
           , uVar6 != 0xffffffff)) {
          do {
            plVar11 = (longlong *)((ulonglong)uVar6 * 0x10 + *(longlong *)(lVar2 + 0x10));
            if (*plVar11 == lVar3) {
              if ((uVar6 != 0xffffffff) && (plVar11 != (longlong *)0x0)) goto LAB_1806d5e06;
              break;
            }
            uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar6 * 4);
          } while (uVar6 != 0xffffffff);
        }
        FUN_1806d7720(lVar3,auStack_7d8);
LAB_1806d5e06:
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      do {
        uVar4 = *(uint64_t *)(puStack_5d0 + lVar9);
        FUN_1806d7170(param_1,&unknown_var_9224_ptr);
        iVar1 = *(int *)(*param_1 + 0x10);
        if ((iVar1 != 0) &&
           (puVar8 = (uint64_t *)(*(longlong *)(*param_1 + 8) + (ulonglong)(iVar1 - 1) * 0x10),
           *(char *)(puVar8 + 1) == '\0')) {
          (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],*puVar8);
          *(int8_t *)
           (*(longlong *)(*param_1 + 8) + 8 + (ulonglong)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1
          ;
        }
        uStackX_8 = uVar4;
        lVar10 = func_0x0001806d5360(param_1[5],&uStackX_8);
        if (lVar10 != 0) {
          FUN_1806d2c90(param_1[1],param_1[4],param_1[3],&unknown_var_9600_ptr,*(uint64_t *)(lVar10 + 8))
          ;
        }
        FUN_1806d2c90(param_1[1],param_1[4],param_1[3],&unknown_var_3672_ptr,uVar4);
        __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(auStack_398);
        FUN_1806d28e0(*param_1,uVar4,param_1[1],param_1[3],param_1[4]);
        lVar10 = *param_1;
        if (*(int *)(lVar10 + 0x10) != 0) {
          if (*(char *)(*(longlong *)(lVar10 + 8) + 8 +
                       (ulonglong)(*(int *)(lVar10 + 0x10) - 1) * 0x10) != '\0') {
            (**(code **)(*(longlong *)param_1[1] + 0x20))();
            lVar10 = *param_1;
          }
          *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
        }
        lVar9 = lVar9 + 8;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    lVar9 = *param_1;
    if (*(int *)(lVar9 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
        lVar9 = *param_1;
      }
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    puVar5 = puStack_5d0;
    if (((uStack_5c4 & 0x7fffffff) != 0) && (-1 < (int)uStack_5c4)) {
      if (puStack_5d0 == auStack_7d8) {
        uStack_5d8 = 0;
      }
      else if (puStack_5d0 != (int8_t *)0x0) {
        plVar11 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar11 + 0x10))(plVar11,puVar5);
      }
    }
    puVar5 = puStack_3b0;
    if (((((uStack_3a4 & 0x7fffffff) != 0) && (-1 < (int)uStack_3a4)) &&
        (puStack_3b0 != auStack_5b8)) && (puStack_3b0 != (int8_t *)0x0)) {
      plVar11 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar11 + 0x10))(plVar11,puVar5);
    }
  }
  return;
}






// 函数: void FUN_1806d5ca1(void)
void FUN_1806d5ca1(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint64_t uVar4;
  int8_t *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint64_t *puVar8;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong unaff_R14;
  longlong unaff_R15;
  ulonglong uVar12;
  
  lVar9 = 0;
  uVar6 = 0x40;
  *(int32_t *)(unaff_RBP + 0x360) = 0;
  *(int32_t *)(unaff_RBP + 0x364) = 0x40;
  *(int8_t *)(unaff_RBP + 0x350) = 1;
  *(longlong *)(unaff_RBP + 0x358) = unaff_RBP + 0x150;
  *(uint64_t *)(unaff_RBP + 0x710) = 0;
  FUN_1806d7d40(unaff_RBP + 0x150,unaff_R14 & 0xffffffff,unaff_RBP + 0x710);
  (**(code **)(unaff_R15 + 0x10))
            (unaff_RBX[2],*(uint64_t *)(unaff_RBP + 0x358),unaff_R14 & 0xffffffff);
  *(int32_t *)(unaff_RBP + 0x140) = 0;
  *(int8_t **)(unaff_RBP + 0x138) = &stack0x00000030;
  *(int8_t *)(unaff_RBP + 0x130) = 1;
  *(int32_t *)(unaff_RBP + 0x144) = 0x40;
  if ((int)unaff_R14 != 0) {
    uVar12 = unaff_R14 & 0xffffffff;
    lVar10 = lVar9;
    do {
      lVar2 = unaff_RBX[5];
      lVar3 = *(longlong *)(lVar10 + *(longlong *)(unaff_RBP + 0x358));
      if ((*(int *)(lVar2 + 0x3c) != 0) &&
         (uVar7 = ~(lVar3 << 0x20) + lVar3, uVar7 = uVar7 ^ uVar7 >> 0x16,
         uVar7 = uVar7 + ~(uVar7 << 0xd), uVar7 = (uVar7 >> 8 ^ uVar7) * 9,
         uVar7 = uVar7 ^ uVar7 >> 0xf, uVar7 = uVar7 + ~(uVar7 << 0x1b),
         uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x20) +
                          ((uVar7 >> 0x1f ^ uVar7) & (ulonglong)(*(int *)(lVar2 + 0x2c) - 1)) * 4),
         uVar6 != 0xffffffff)) {
        do {
          plVar11 = (longlong *)((ulonglong)uVar6 * 0x10 + *(longlong *)(lVar2 + 0x10));
          if (*plVar11 == lVar3) {
            if ((uVar6 != 0xffffffff) && (plVar11 != (longlong *)0x0)) goto LAB_1806d5e06;
            break;
          }
          uVar6 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (ulonglong)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      FUN_1806d7720(lVar3,&stack0x00000030);
LAB_1806d5e06:
      lVar10 = lVar10 + 8;
      unaff_R14 = unaff_R14 - 1;
    } while (unaff_R14 != 0);
    do {
      uVar4 = *(uint64_t *)(lVar9 + *(longlong *)(unaff_RBP + 0x138));
      FUN_1806d7170();
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if ((iVar1 != 0) &&
         (puVar8 = (uint64_t *)(*(longlong *)(*unaff_RBX + 8) + (ulonglong)(iVar1 - 1) * 0x10),
         *(char *)(puVar8 + 1) == '\0')) {
        (**(code **)(*(longlong *)unaff_RBX[1] + 0x18))((longlong *)unaff_RBX[1],*puVar8);
        *(int8_t *)
         (*(longlong *)(*unaff_RBX + 8) + 8 + (ulonglong)(*(int *)(*unaff_RBX + 0x10) - 1) * 0x10) =
             1;
      }
      lVar10 = unaff_RBX[5];
      *(uint64_t *)(unaff_RBP + 0x710) = uVar4;
      lVar10 = func_0x0001806d5360(lVar10,unaff_RBP + 0x710);
      if (lVar10 != 0) {
        FUN_1806d2c90(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],&unknown_var_9600_ptr,
                      *(uint64_t *)(lVar10 + 8));
      }
      FUN_1806d2c90(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],&unknown_var_3672_ptr,uVar4);
      __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x370);
      FUN_1806d28e0(*unaff_RBX,uVar4,unaff_RBX[1],unaff_RBX[3],unaff_RBX[4]);
      lVar10 = *unaff_RBX;
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(char *)(*(longlong *)(lVar10 + 8) + 8 +
                     (ulonglong)(*(int *)(lVar10 + 0x10) - 1) * 0x10) != '\0') {
          (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
          lVar10 = *unaff_RBX;
        }
        *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + -1;
      }
      lVar9 = lVar9 + 8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar6 = *(uint *)(unaff_RBP + 0x144);
  }
  lVar9 = *unaff_RBX;
  if (*(int *)(lVar9 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar9 + 8) + 8 + (ulonglong)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
      lVar9 = *unaff_RBX;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    uVar6 = *(uint *)(unaff_RBP + 0x144);
  }
  if (((uVar6 & 0x7fffffff) != 0) && (-1 < (int)uVar6)) {
    puVar5 = *(int8_t **)(unaff_RBP + 0x138);
    if (puVar5 == &stack0x00000030) {
      *(int8_t *)(unaff_RBP + 0x130) = 0;
    }
    else if (puVar5 != (int8_t *)0x0) {
      plVar11 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar11 + 0x10))(plVar11,puVar5);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x364) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x364))) &&
      (lVar9 = *(longlong *)(unaff_RBP + 0x358), lVar9 != unaff_RBP + 0x150)) && (lVar9 != 0)) {
    plVar11 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar11 + 0x10))(plVar11,lVar9);
  }
  return;
}






// 函数: void FUN_1806d5f4d(uint64_t param_1,longlong param_2)
void FUN_1806d5f4d(uint64_t param_1,longlong param_2)

{
  int8_t *puVar1;
  longlong lVar2;
  int in_EAX;
  longlong *plVar3;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 8 + (ulonglong)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(longlong *)unaff_RBX[1] + 0x20))();
    param_2 = *unaff_RBX;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  if (((*(uint *)(unaff_RBP + 0x144) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x144))
     ) {
    puVar1 = *(int8_t **)(unaff_RBP + 0x138);
    if (puVar1 == &stack0x00000030) {
      *(int8_t *)(unaff_RBP + 0x130) = 0;
    }
    else if (puVar1 != (int8_t *)0x0) {
      plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,puVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x364) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x364))) &&
      (lVar2 = *(longlong *)(unaff_RBP + 0x358), lVar2 != unaff_RBP + 0x150)) && (lVar2 != 0)) {
    plVar3 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  return;
}






// 函数: void FUN_1806d5fc7(void)
void FUN_1806d5fc7(void)

{
  longlong lVar1;
  int in_EAX;
  longlong *plVar2;
  longlong unaff_RBP;
  
  if (((-1 < in_EAX) && (lVar1 = *(longlong *)(unaff_RBP + 0x358), lVar1 != unaff_RBP + 0x150)) &&
     (lVar1 != 0)) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}






// 函数: void FUN_1806d6010(longlong *param_1,longlong param_2)
void FUN_1806d6010(longlong *param_1,longlong param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int32_t uVar6;
  longlong lVar7;
  uint auStackX_8 [2];
  int8_t auStackX_18 [8];
  int32_t auStackX_20 [2];
  uint auStack_208 [2];
  uint64_t uStack_200;
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  uint64_t uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  uint64_t uStack_1d8;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  uint64_t uStack_1c8;
  uint64_t uStack_1c0;
  uint64_t uStack_1b8;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong *plStack_198;
  longlong lStack_190;
  longlong lStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  int8_t auStack_168 [160];
  int8_t auStack_c8 [160];
  
  uVar6 = (**(code **)(*(longlong *)param_1[2] + 0x38))();
  switch(uVar6) {
  case 0:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9496_ptr);
    auStackX_8[0] = 0;
    auStackX_8[1] = 0;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxSphereGeometry_2__Z
              (param_2 + 0x18,param_1[2],auStackX_8);
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(auStack_168);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(auStack_208);
    uStack_1d8 = auStackX_8;
    uStack_1d0 = (int32_t)lVar4;
    uStack_1cc = (int32_t)((ulonglong)lVar4 >> 0x20);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1e8 = lVar7;
    lStack_1e0 = lVar3;
    uStack_1c8 = lVar5;
    FUN_1806c10d0(&lStack_1e8,auStack_208,0);
    break;
  case 1:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9520_ptr);
    auStackX_20[0] = 1;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxPlaneGeometry_2__Z
              (param_2 + 0x18,param_1[2],auStackX_20);
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(auStackX_18);
    puVar1 = (uint64_t *)param_1[3];
    plVar2 = (longlong *)param_1[1];
    auStackX_8[0] = auStackX_8[0] & 0xffffff00;
    (**(code **)*puVar1)(puVar1,auStackX_8,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,&unknown_var_9520_ptr,puVar1[4]);
    puVar1[3] = 0;
    break;
  case 2:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9448_ptr);
    auStack_208[0] = 2;
    auStack_208[1] = 0;
    uStack_200 = (ulonglong)uStack_200._4_4_ << 0x20;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxCapsuleGeometry_2__Z
              (param_2 + 0x18,param_1[2],auStack_208);
    __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(auStack_168);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_1a8);
    uStack_1d8 = auStack_208;
    uStack_1d0 = (int32_t)lVar4;
    uStack_1cc = (int32_t)((ulonglong)lVar4 >> 0x20);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    lStack_1e8 = lVar7;
    lStack_1e0 = lVar3;
    uStack_1c8 = lVar5;
    FUN_1806ce230(&lStack_1a8,&lStack_1e8,0);
    break;
  case 3:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9432_ptr);
    auStack_208[0] = 3;
    auStack_208[1] = 0;
    uStack_200 = 0;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxBoxGeometry_2__Z
              (param_2 + 0x18,param_1[2],auStack_208);
    __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_1e8);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(auStack_168);
    plStack_198 = (longlong *)auStack_208;
    uStack_180 = 0;
    uStack_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    FUN_1806c0d90(&lStack_1a8,auStack_168,0);
    break;
  case 4:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9472_ptr);
    uStack_1cc = 0x3f800000;
    lStack_1e0 = 0x3f8000003f800000;
    uStack_1d8._0_4_ = 0;
    uStack_1c8 = 0;
    uStack_1c0 = (ulonglong)uStack_1c0._4_4_ << 0x20;
    lStack_1e8 = 0x3f80000000000004;
    uStack_1d8._4_4_ = 0;
    uStack_1d0 = 0;
    uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxConvexMeshGeometry_2__Z
              (param_2 + 0x18,param_1[2],&lStack_1e8);
    __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(auStack_c8);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(auStack_168);
    plStack_198 = &lStack_1e8;
    uStack_180 = 0;
    uStack_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    FUN_1806ce3e0(auStack_168,&lStack_1a8,0);
    break;
  case 5:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9536_ptr);
    uStack_1cc = 0x3f800000;
    lStack_1e0 = 0x3f8000003f800000;
    uStack_1d8._0_4_ = 0;
    uStack_1c8 = (ulonglong)uStack_1c8._4_4_ << 0x20;
    uStack_1c0 = 0;
    lStack_1e8 = 0x3f80000000000005;
    uStack_1d8._4_4_ = 0;
    uStack_1d0 = 0;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxTriangleMeshGeometry_2__Z
              (param_2 + 0x18,param_1[2],&lStack_1e8);
    __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(auStack_c8);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(auStack_168);
    plStack_198 = &lStack_1e8;
    uStack_180 = 0;
    uStack_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    FUN_1806d26b0(auStack_168,&lStack_1a8,0);
    break;
  case 6:
    FUN_1806d7170(param_1,&unknown_var_1520_ptr);
    FUN_1806d7170(param_1,&unknown_var_9560_ptr);
    auStack_208[0] = 6;
    uStack_200 = 0;
    uStack_1f8 = 0x3f800000;
    uStack_1f4 = 0x3f800000;
    uStack_1f0 = 0x3f800000;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxHeightFieldGeometry_2__Z
              (param_2 + 0x18,param_1[2],auStack_208);
    __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(auStack_168);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(auStack_c8);
    plStack_198 = (longlong *)auStack_208;
    uStack_180 = 0;
    uStack_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    FUN_1806cfc40(auStack_c8,&lStack_1a8,0);
    break;
  default:
    goto FUN_1806d6585;
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(longlong *)(lVar7 + 8) + 8 + (ulonglong)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(longlong *)param_1[1] + 0x20))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
FUN_1806d6585:
  return;
}






// 函数: void FUN_1806d603d(void)
void FUN_1806d603d(void)

{
  int in_EAX;
  
                    // WARNING: Could not recover jumptable at 0x0001806d6068. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)((ulonglong)*(uint *)(&unknown_var_372_ptr + (longlong)in_EAX * 4) + 0x180000000))
            ((code *)((ulonglong)*(uint *)(&unknown_var_372_ptr + (longlong)in_EAX * 4) + 0x180000000));
  return;
}






// 函数: void FUN_1806d6585(void)
void FUN_1806d6585(void)

{
  return;
}






// 函数: void FUN_1806d65b0(longlong *param_1,longlong param_2)
void FUN_1806d65b0(longlong *param_1,longlong param_2)

{
  int32_t *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  uint64_t uVar12;
  ulonglong uVar13;
  int8_t uVar14;
  char acStackX_8 [8];
  longlong lStack_328;
  longlong lStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  uint64_t uStack_2f8;
  longlong lStack_2f0;
  longlong lStack_2e8;
  int8_t uStack_2e0;
  char *pcStack_2d8;
  uint64_t uStack_2d0;
  uint64_t uStack_2c8;
  void *puStack_2c0;
  uint uStack_2b8;
  int32_t uStack_2b4;
  int8_t uStack_2b0;
  uint8_t uStack_2af;
  int8_t auStack_2a8 [632];
  uint64_t uStack_30;
  
  FUN_1806d56e0();
  lVar11 = *param_1;
  puStack_2c0 = &unknown_var_9592_ptr;
  uStack_2b0 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar11 + 0x10);
  uStack_2b8 = uStack_2b8 & 0xffffff00;
  if (uVar2 < (*(uint *)(lVar11 + 0x14) & 0x7fffffff)) {
    lVar3 = *(longlong *)(lVar11 + 8);
    puVar1 = (int32_t *)(lVar3 + (ulonglong)uVar2 * 0x18);
    *puVar1 = 0x8094c0a8;
    puVar1[1] = 1;
    puVar1[2] = uStack_2b8;
    puVar1[3] = uStack_2b4;
    *(ulonglong *)(lVar3 + 0x10 + (ulonglong)uVar2 * 0x18) = CONCAT71(uStack_2af,uStack_2b0);
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
  }
  else {
    FUN_1806d5b60(lVar11,&puStack_2c0);
  }
  cVar10 = FUN_1806d56e0(param_1);
  if (cVar10 != '\0') {
    lVar11 = (**(code **)(*(longlong *)param_1[6] + 0x1e8))();
    if (*(short *)(lVar11 + 8) == 0xb) {
      uVar12 = (**(code **)(param_2 + 0x10))();
      __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(auStack_2a8);
      lVar8 = param_1[2];
      lVar9 = param_1[3];
      lVar3 = *param_1;
      pcStack_2d8 = acStackX_8;
      lVar4 = param_1[1];
      lVar5 = param_1[5];
      lVar6 = param_1[7];
      lVar7 = param_1[8];
      lVar11 = param_1[4];
      acStackX_8[0] = '\0';
      uStack_2e0 = 1;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      uStack_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      FUN_1806c5850(auStack_2a8,&lStack_328);
      pcStack_2d8 = acStackX_8;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2e0 = 1;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      uStack_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      FUN_1806c59f0(auStack_2a8,&lStack_328);
    }
    else {
      uVar12 = (**(code **)(param_2 + 0x10))(param_1[6]);
      __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(auStack_2a8);
      lVar8 = param_1[2];
      lVar9 = param_1[3];
      lVar3 = *param_1;
      pcStack_2d8 = acStackX_8;
      lVar4 = param_1[1];
      lVar5 = param_1[5];
      lVar6 = param_1[7];
      lVar7 = param_1[8];
      lVar11 = param_1[4];
      acStackX_8[0] = '\0';
      uStack_2e0 = 1;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      uStack_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      FUN_1806c5850(auStack_2a8,&lStack_328);
      pcStack_2d8 = acStackX_8;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      uStack_2e0 = 1;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      uStack_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      FUN_1806c62d0(auStack_2a8,&lStack_328);
    }
    if (acStackX_8[0] != '\0') {
      *(int8_t *)param_1[10] = 1;
    }
    (**(code **)(*(longlong *)param_1[8] + 8))((longlong *)param_1[8],uVar12);
  }
  lVar11 = *param_1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar13 = (ulonglong)(*(int *)(lVar11 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar11 + 8) + 8 + uVar13 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar11 + 8) + 0x10 + uVar13 * 0x18) != '\0')) {
      uStack_30 = 0x1806d6f98;
      (**(code **)(*(longlong *)param_1[5] + 0x48))();
      lVar11 = *param_1;
    }
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    lVar11 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar14 = (int8_t)param_1[9];
    if (*(char *)(*(longlong *)(lVar11 + 8) + 0x10 + (ulonglong)(*(int *)(lVar11 + 0x10) - 1) * 0x18
                 ) == '\0') {
      uVar14 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar14;
  }
  return;
}






// 函数: void FUN_1806d663d(longlong *param_1)
void FUN_1806d663d(longlong *param_1)

{
  longlong lVar1;
  uint64_t uVar2;
  ulonglong uVar3;
  int8_t uVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R12;
  longlong lStackX_20;
  
  lVar1 = (**(code **)(*param_1 + 0x1e8))();
  if (*(short *)(lVar1 + 8) == 0xb) {
    uVar2 = (**(code **)(unaff_RBX + 0x10))();
    __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x60);
    lVar1 = *unaff_R12;
    *(int8_t *)(unaff_RBP + 0x250) = 0;
    lStackX_20 = lVar1;
    FUN_1806c5850(unaff_RBP + -0x60,&lStackX_20);
    lStackX_20 = lVar1;
    FUN_1806c59f0(unaff_RBP + -0x60,&lStackX_20);
  }
  else {
    uVar2 = (**(code **)(unaff_RBX + 0x10))(unaff_R12[6]);
    __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x60);
    lVar1 = *unaff_R12;
    *(int8_t *)(unaff_RBP + 0x250) = 0;
    lStackX_20 = lVar1;
    FUN_1806c5850(unaff_RBP + -0x60,&lStackX_20);
    lStackX_20 = lVar1;
    FUN_1806c62d0(unaff_RBP + -0x60,&lStackX_20);
  }
  if (*(char *)(unaff_RBP + 0x250) != '\0') {
    *(int8_t *)unaff_R12[10] = 1;
  }
  (**(code **)(*(longlong *)unaff_R12[8] + 8))((longlong *)unaff_R12[8],uVar2);
  lVar1 = *unaff_R12;
  if (*(int *)(lVar1 + 0x10) != 0) {
    uVar3 = (ulonglong)(*(int *)(lVar1 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar1 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar1 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)unaff_R12[5] + 0x48))();
      lVar1 = *unaff_R12;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
    lVar1 = *unaff_R12;
  }
  *(int8_t *)(unaff_R12 + 9) = 1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    uVar4 = (int8_t)unaff_R12[9];
    if (*(char *)(*(longlong *)(lVar1 + 8) + 0x10 + (ulonglong)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(unaff_R12 + 9) = uVar4;
  }
  return;
}






// 函数: void FUN_1806d68b7(void)
void FUN_1806d68b7(void)

{
  ulonglong uVar1;
  int8_t uVar2;
  longlong lVar3;
  longlong *unaff_R12;
  
  lVar3 = *unaff_R12;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (ulonglong)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(longlong *)(lVar3 + 8) + 8 + uVar1 * 0x18) != '\0') &&
       (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != '\0')) {
      (**(code **)(*(longlong *)unaff_R12[5] + 0x48))();
      lVar3 = *unaff_R12;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_R12;
  }
  *(int8_t *)(unaff_R12 + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar2 = (int8_t)unaff_R12[9];
    if (*(char *)(*(longlong *)(lVar3 + 8) + 0x10 + (ulonglong)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar2 = 0;
    }
    *(int8_t *)(unaff_R12 + 9) = uVar2;
  }
  return;
}






// 函数: void FUN_1806d68d0(longlong *param_1,longlong param_2)
void FUN_1806d68d0(longlong *param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lStack_528;
  longlong lStack_520;
  longlong lStack_518;
  longlong lStack_510;
  longlong lStack_508;
  uint64_t uStack_500;
  uint64_t uStack_4f8;
  int8_t auStack_4e8 [608];
  int8_t auStack_288 [608];
  
  lVar4 = (**(code **)(param_2 + 0x10))(param_1[2]);
  if (lVar4 != 0) {
    FUN_1806d7170(param_1,&unknown_var_9592_ptr);
    sVar1 = *(short *)(lVar4 + 8);
    lVar5 = 0;
    if (sVar1 == 0xe) {
      lVar5 = lVar4;
    }
    if (lVar5 == 0) {
      __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(auStack_288);
      lVar5 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[4];
      lVar6 = 0;
      if (sVar1 == 0xf) {
        lVar6 = lVar4;
      }
      lVar4 = param_1[3];
      __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(auStack_4e8);
      uStack_500 = 0;
      uStack_4f8 = 0;
      lStack_528 = lVar5;
      lStack_520 = lVar2;
      lStack_518 = lVar6;
      lStack_510 = lVar4;
      lStack_508 = lVar3;
      FUN_1806cc6c0(auStack_4e8,&lStack_528,0);
      uStack_500 = 0;
      uStack_4f8 = 0;
      lStack_528 = lVar5;
      lStack_520 = lVar2;
      lStack_518 = lVar6;
      lStack_510 = lVar4;
      lStack_508 = lVar3;
      FUN_1806cd1e0(auStack_4e8,&lStack_528,0);
    }
    else {
      __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(auStack_4e8);
      lVar4 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[3];
      lVar6 = param_1[4];
      __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(auStack_288);
      uStack_500 = 0;
      uStack_4f8 = 0;
      lStack_528 = lVar4;
      lStack_520 = lVar2;
      lStack_518 = lVar5;
      lStack_510 = lVar3;
      lStack_508 = lVar6;
      FUN_1806cc6c0(auStack_288,&lStack_528,0);
      uStack_500 = 0;
      uStack_4f8 = 0;
      lStack_528 = lVar4;
      lStack_520 = lVar2;
      lStack_518 = lVar5;
      lStack_510 = lVar3;
      lStack_508 = lVar6;
      FUN_1806cc880(auStack_288,&lStack_528,0);
    }
    lVar4 = *param_1;
    if (*(int *)(lVar4 + 0x10) != 0) {
      if (*(char *)(*(longlong *)(lVar4 + 8) + 8 + (ulonglong)(*(int *)(lVar4 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(longlong *)param_1[1] + 0x20))();
        lVar4 = *param_1;
      }
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    }
  }
  return;
}






