#include "SystemAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
// 99_part_11_part002.c - 11 个函数
// 函数: void function_6d5c70(int64_t *param_1,int64_t param_2)
void function_6d5c70(int64_t *param_1,int64_t param_2)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t stack_special_x_8;
  int8_t stack_array_7d8 [512];
  int8_t local_var_5d8;
  int8_t *plocal_var_5d0;
  int32_t local_var_5c8;
  uint local_var_5c4;
  int8_t stack_array_5b8 [512];
  int8_t local_var_3b8;
  int8_t *plocal_var_3b0;
  int32_t local_var_3a8;
  uint local_var_3a4;
  int8_t stack_array_398 [896];
  uVar6 = (**(code **)(param_2 + 0x18))(param_1[2]);
  uVar12 = (uint64_t)uVar6;
  if (uVar6 != 0) {
    plocal_var_3b0 = stack_array_5b8;
    lVar9 = 0;
    local_var_3a8 = 0;
    local_var_3a4 = 0x40;
    local_var_3b8 = 1;
    stack_special_x_8 = 0;
    function_6d7d40(stack_array_5b8,uVar12,&stack_special_x_8);
    (**(code **)(param_2 + 0x10))(param_1[2],plocal_var_3b0,uVar6);
    local_var_5c8 = 0;
    plocal_var_5d0 = stack_array_7d8;
    local_var_5d8 = 1;
    local_var_5c4 = 0x40;
    if (uVar6 != 0) {
      uVar13 = (uint64_t)uVar6;
      lVar10 = lVar9;
      do {
        lVar2 = param_1[5];
        lVar3 = *(int64_t *)(plocal_var_3b0 + lVar10);
        if ((*(int *)(lVar2 + 0x3c) != 0) &&
           (uVar7 = ~(lVar3 << 0x20) + lVar3, uVar7 = uVar7 ^ uVar7 >> 0x16,
           uVar7 = uVar7 + ~(uVar7 << 0xd), uVar7 = (uVar7 >> 8 ^ uVar7) * 9,
           uVar7 = uVar7 ^ uVar7 >> 0xf, uVar7 = uVar7 + ~(uVar7 << 0x1b),
           uVar6 = *(uint *)(*(int64_t *)(lVar2 + 0x20) +
                            ((uVar7 >> 0x1f ^ uVar7) & (uint64_t)(*(int *)(lVar2 + 0x2c) - 1)) * 4)
           , uVar6 != 0xffffffff)) {
          do {
            plVar11 = (int64_t *)((uint64_t)uVar6 * 0x10 + *(int64_t *)(lVar2 + 0x10));
            if (*plVar11 == lVar3) {
              if ((uVar6 != 0xffffffff) && (plVar11 != (int64_t *)0x0)) goto LAB_1806d5e06;
              break;
            }
            uVar6 = *(uint *)(*(int64_t *)(lVar2 + 0x18) + (uint64_t)uVar6 * 4);
          } while (uVar6 != 0xffffffff);
        }
        function_6d7720(lVar3,stack_array_7d8);
LAB_1806d5e06:
        lVar10 = lVar10 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      do {
        uVar4 = *(uint64_t *)(plocal_var_5d0 + lVar9);
        SystemValidator(param_1,&processed_var_9224_ptr);
        iVar1 = *(int *)(*param_1 + 0x10);
        if ((iVar1 != 0) &&
           (puVar8 = (uint64_t *)(*(int64_t *)(*param_1 + 8) + (uint64_t)(iVar1 - 1) * 0x10),
           *(char *)(puVar8 + 1) == '\0')) {
          (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],*puVar8);
          *(int8_t *)
           (*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1
          ;
        }
        stack_special_x_8 = uVar4;
        lVar10 = Function_93767cad(param_1[5],&stack_special_x_8);
        if (lVar10 != 0) {
          function_6d2c90(param_1[1],param_1[4],param_1[3],&processed_var_9600_ptr,*(uint64_t *)(lVar10 + 8))
          ;
        }
        function_6d2c90(param_1[1],param_1[4],param_1[3],&memory_allocator_3672_ptr,uVar4);
        __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(stack_array_398);
        function_6d28e0(*param_1,uVar4,param_1[1],param_1[3],param_1[4]);
        lVar10 = *param_1;
        if (*(int *)(lVar10 + 0x10) != 0) {
          if (*(char *)(*(int64_t *)(lVar10 + 8) + 8 +
                       (uint64_t)(*(int *)(lVar10 + 0x10) - 1) * 0x10) != '\0') {
            (**(code **)(*(int64_t *)param_1[1] + 0x20))();
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
      if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(int64_t *)param_1[1] + 0x20))();
        lVar9 = *param_1;
      }
      *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    }
    puVar5 = plocal_var_5d0;
    if (((local_var_5c4 & 0x7fffffff) != 0) && (-1 < (int)local_var_5c4)) {
      if (plocal_var_5d0 == stack_array_7d8) {
        local_var_5d8 = 0;
      }
      else if (plocal_var_5d0 != (int8_t *)0x0) {
        plVar11 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar11 + 0x10))(plVar11,puVar5);
      }
    }
    puVar5 = plocal_var_3b0;
    if (((((local_var_3a4 & 0x7fffffff) != 0) && (-1 < (int)local_var_3a4)) &&
        (plocal_var_3b0 != stack_array_5b8)) && (plocal_var_3b0 != (int8_t *)0x0)) {
      plVar11 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar11 + 0x10))(plVar11,puVar5);
    }
  }
  return;
}
// 函数: void function_6d5ca1(void)
void function_6d5ca1(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int8_t *puVar5;
  uint uVar6;
  uint64_t uVar7;
  uint64_t *puVar8;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t lVar9;
  int64_t lVar10;
  int64_t *plVar11;
  uint64_t unaff_R14;
  int64_t unaff_R15;
  uint64_t uVar12;
  lVar9 = 0;
  uVar6 = 0x40;
  *(int32_t *)(unaff_RBP + 0x360) = 0;
  *(int32_t *)(unaff_RBP + 0x364) = 0x40;
  *(int8_t *)(unaff_RBP + 0x350) = 1;
  *(int64_t *)(unaff_RBP + 0x358) = unaff_RBP + 0x150;
  *(uint64_t *)(unaff_RBP + 0x710) = 0;
  function_6d7d40(unaff_RBP + 0x150,unaff_R14 & 0xffffffff,unaff_RBP + 0x710);
  (**(code **)(unaff_R15 + 0x10))
            (unaff_RBX[2],*(uint64_t *)(unaff_RBP + 0x358),unaff_R14 & 0xffffffff);
  *(int32_t *)(unaff_RBP + 0x140) = 0;
  *(int8_t **)(unaff_RBP + 0x138) = &local_buffer_00000030;
  *(int8_t *)(unaff_RBP + 0x130) = 1;
  *(int32_t *)(unaff_RBP + 0x144) = 0x40;
  if ((int)unaff_R14 != 0) {
    uVar12 = unaff_R14 & 0xffffffff;
    lVar10 = lVar9;
    do {
      lVar2 = unaff_RBX[5];
      lVar3 = *(int64_t *)(lVar10 + *(int64_t *)(unaff_RBP + 0x358));
      if ((*(int *)(lVar2 + 0x3c) != 0) &&
         (uVar7 = ~(lVar3 << 0x20) + lVar3, uVar7 = uVar7 ^ uVar7 >> 0x16,
         uVar7 = uVar7 + ~(uVar7 << 0xd), uVar7 = (uVar7 >> 8 ^ uVar7) * 9,
         uVar7 = uVar7 ^ uVar7 >> 0xf, uVar7 = uVar7 + ~(uVar7 << 0x1b),
         uVar6 = *(uint *)(*(int64_t *)(lVar2 + 0x20) +
                          ((uVar7 >> 0x1f ^ uVar7) & (uint64_t)(*(int *)(lVar2 + 0x2c) - 1)) * 4),
         uVar6 != 0xffffffff)) {
        do {
          plVar11 = (int64_t *)((uint64_t)uVar6 * 0x10 + *(int64_t *)(lVar2 + 0x10));
          if (*plVar11 == lVar3) {
            if ((uVar6 != 0xffffffff) && (plVar11 != (int64_t *)0x0)) goto LAB_1806d5e06;
            break;
          }
          uVar6 = *(uint *)(*(int64_t *)(lVar2 + 0x18) + (uint64_t)uVar6 * 4);
        } while (uVar6 != 0xffffffff);
      }
      function_6d7720(lVar3,&local_buffer_00000030);
LAB_1806d5e06:
      lVar10 = lVar10 + 8;
      unaff_R14 = unaff_R14 - 1;
    } while (unaff_R14 != 0);
    do {
      uVar4 = *(uint64_t *)(lVar9 + *(int64_t *)(unaff_RBP + 0x138));
      SystemValidator();
      iVar1 = *(int *)(*unaff_RBX + 0x10);
      if ((iVar1 != 0) &&
         (puVar8 = (uint64_t *)(*(int64_t *)(*unaff_RBX + 8) + (uint64_t)(iVar1 - 1) * 0x10),
         *(char *)(puVar8 + 1) == '\0')) {
        (**(code **)(*(int64_t *)unaff_RBX[1] + 0x18))((int64_t *)unaff_RBX[1],*puVar8);
        *(int8_t *)
         (*(int64_t *)(*unaff_RBX + 8) + 8 + (uint64_t)(*(int *)(*unaff_RBX + 0x10) - 1) * 0x10) =
             1;
      }
      lVar10 = unaff_RBX[5];
      *(uint64_t *)(unaff_RBP + 0x710) = uVar4;
      lVar10 = Function_93767cad(lVar10,unaff_RBP + 0x710);
      if (lVar10 != 0) {
        function_6d2c90(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],&processed_var_9600_ptr,
                      *(uint64_t *)(lVar10 + 8));
      }
      function_6d2c90(unaff_RBX[1],unaff_RBX[4],unaff_RBX[3],&memory_allocator_3672_ptr,uVar4);
      __0PxArticulationLinkGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x370);
      function_6d28e0(*unaff_RBX,uVar4,unaff_RBX[1],unaff_RBX[3],unaff_RBX[4]);
      lVar10 = *unaff_RBX;
      if (*(int *)(lVar10 + 0x10) != 0) {
        if (*(char *)(*(int64_t *)(lVar10 + 8) + 8 +
                     (uint64_t)(*(int *)(lVar10 + 0x10) - 1) * 0x10) != '\0') {
          (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
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
    if (*(char *)(*(int64_t *)(lVar9 + 8) + 8 + (uint64_t)(*(int *)(lVar9 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
      lVar9 = *unaff_RBX;
    }
    *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
    uVar6 = *(uint *)(unaff_RBP + 0x144);
  }
  if (((uVar6 & 0x7fffffff) != 0) && (-1 < (int)uVar6)) {
    puVar5 = *(int8_t **)(unaff_RBP + 0x138);
    if (puVar5 == &local_buffer_00000030) {
      *(int8_t *)(unaff_RBP + 0x130) = 0;
    }
    else if (puVar5 != (int8_t *)0x0) {
      plVar11 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar11 + 0x10))(plVar11,puVar5);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x364) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x364))) &&
      (lVar9 = *(int64_t *)(unaff_RBP + 0x358), lVar9 != unaff_RBP + 0x150)) && (lVar9 != 0)) {
    plVar11 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar11 + 0x10))(plVar11,lVar9);
  }
  return;
}
// 函数: void function_6d5f4d(uint64_t param_1,int64_t param_2)
void function_6d5f4d(uint64_t param_1,int64_t param_2)
{
  int8_t *puVar1;
  int64_t lVar2;
  int in_EAX;
  int64_t *plVar3;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  if (*(char *)(*(int64_t *)(param_2 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(int64_t *)unaff_RBX[1] + 0x20))();
    param_2 = *unaff_RBX;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  if (((*(uint *)(unaff_RBP + 0x144) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(unaff_RBP + 0x144))
     ) {
    puVar1 = *(int8_t **)(unaff_RBP + 0x138);
    if (puVar1 == &local_buffer_00000030) {
      *(int8_t *)(unaff_RBP + 0x130) = 0;
    }
    else if (puVar1 != (int8_t *)0x0) {
      plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar3 + 0x10))(plVar3,puVar1);
    }
  }
  if (((((*(uint *)(unaff_RBP + 0x364) & 0x7fffffff) != 0) &&
       (-1 < (int)*(uint *)(unaff_RBP + 0x364))) &&
      (lVar2 = *(int64_t *)(unaff_RBP + 0x358), lVar2 != unaff_RBP + 0x150)) && (lVar2 != 0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar2);
  }
  return;
}
// 函数: void function_6d5fc7(void)
void function_6d5fc7(void)
{
  int64_t lVar1;
  int in_EAX;
  int64_t *plVar2;
  int64_t unaff_RBP;
  if (((-1 < in_EAX) && (lVar1 = *(int64_t *)(unaff_RBP + 0x358), lVar1 != unaff_RBP + 0x150)) &&
     (lVar1 != 0)) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  return;
}
// 函数: void function_6d6010(int64_t *param_1,int64_t param_2)
void function_6d6010(int64_t *param_1,int64_t param_2)
{
  uint64_t *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint astack_special_x_8 [2];
  int8_t astack_special_x_18 [8];
  int32_t astack_special_x_20 [2];
  uint stack_array_208 [2];
  uint64_t local_var_200;
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  uint64_t local_var_1f0;
  int64_t lStack_1e8;
  int64_t lStack_1e0;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  uint64_t local_var_1c8;
  uint64_t local_var_1c0;
  uint64_t local_var_1b8;
  int64_t lStack_1a8;
  int64_t lStack_1a0;
  int64_t *plStack_198;
  int64_t lStack_190;
  int64_t lStack_188;
  uint64_t local_var_180;
  uint64_t local_var_178;
  int8_t stack_array_168 [160];
  int8_t stack_array_c8 [160];
  uVar6 = (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  switch(uVar6) {
  case 0:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9496_ptr);
    astack_special_x_8[0] = 0;
    astack_special_x_8[1] = 0;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxSphereGeometry_2__Z
              (param_2 + 0x18,param_1[2],astack_special_x_8);
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_168);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxSphereGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_208);
    local_var_1d8 = astack_special_x_8;
    local_var_1d0 = (int32_t)lVar4;
    local_var_1cc = (int32_t)((uint64_t)lVar4 >> 0x20);
    local_var_1c0 = 0;
    local_var_1b8 = 0;
    lStack_1e8 = lVar7;
    lStack_1e0 = lVar3;
    local_var_1c8 = lVar5;
    function_6c10d0(&lStack_1e8,stack_array_208,0);
    break;
  case 1:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9520_ptr);
    astack_special_x_20[0] = 1;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxPlaneGeometry_2__Z
              (param_2 + 0x18,param_1[2],astack_special_x_20);
    __0PxPlaneGeometryGeneratedInfo_physx__QEAA_XZ(astack_special_x_18);
    puVar1 = (uint64_t *)param_1[3];
    plVar2 = (int64_t *)param_1[1];
    astack_special_x_8[0] = astack_special_x_8[0] & 0xffffff00;
    (**(code **)*puVar1)(puVar1,astack_special_x_8,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,&processed_var_9520_ptr,puVar1[4]);
    puVar1[3] = 0;
    break;
  case 2:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9448_ptr);
    stack_array_208[0] = 2;
    stack_array_208[1] = 0;
    local_var_200 = (uint64_t)local_var_200._4_4_ << 0x20;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxCapsuleGeometry_2__Z
              (param_2 + 0x18,param_1[2],stack_array_208);
    __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_168);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxCapsuleGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_1a8);
    local_var_1d8 = stack_array_208;
    local_var_1d0 = (int32_t)lVar4;
    local_var_1cc = (int32_t)((uint64_t)lVar4 >> 0x20);
    local_var_1c0 = 0;
    local_var_1b8 = 0;
    lStack_1e8 = lVar7;
    lStack_1e0 = lVar3;
    local_var_1c8 = lVar5;
    function_6ce230(&lStack_1a8,&lStack_1e8,0);
    break;
  case 3:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9432_ptr);
    stack_array_208[0] = 3;
    stack_array_208[1] = 0;
    local_var_200 = 0;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxBoxGeometry_2__Z
              (param_2 + 0x18,param_1[2],stack_array_208);
    __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(&lStack_1e8);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxBoxGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_168);
    plStack_198 = (int64_t *)stack_array_208;
    local_var_180 = 0;
    local_var_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    function_6c0d90(&lStack_1a8,stack_array_168,0);
    break;
  case 4:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9472_ptr);
    local_var_1cc = 0x3f800000;
    lStack_1e0 = 0x3f8000003f800000;
    local_var_1d8._0_4_ = 0;
    local_var_1c8 = 0;
    local_var_1c0 = (uint64_t)local_var_1c0._4_4_ << 0x20;
    lStack_1e8 = 0x3f80000000000004;
    local_var_1d8._4_4_ = 0;
    local_var_1d0 = 0;
    local_var_1c0 = CONCAT71(local_var_1c0._1_7_,1);
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxConvexMeshGeometry_2__Z
              (param_2 + 0x18,param_1[2],&lStack_1e8);
    __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_c8);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxConvexMeshGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_168);
    plStack_198 = &lStack_1e8;
    local_var_180 = 0;
    local_var_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    function_6ce3e0(stack_array_168,&lStack_1a8,0);
    break;
  case 5:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9536_ptr);
    local_var_1cc = 0x3f800000;
    lStack_1e0 = 0x3f8000003f800000;
    local_var_1d8._0_4_ = 0;
    local_var_1c8 = (uint64_t)local_var_1c8._4_4_ << 0x20;
    local_var_1c0 = 0;
    lStack_1e8 = 0x3f80000000000005;
    local_var_1d8._4_4_ = 0;
    local_var_1d0 = 0;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxTriangleMeshGeometry_2__Z
              (param_2 + 0x18,param_1[2],&lStack_1e8);
    __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_c8);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxTriangleMeshGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_168);
    plStack_198 = &lStack_1e8;
    local_var_180 = 0;
    local_var_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    function_6d26b0(stack_array_168,&lStack_1a8,0);
    break;
  case 6:
    SystemValidator(param_1,&ui_system_data_1520_ptr);
    SystemValidator(param_1,&processed_var_9560_ptr);
    stack_array_208[0] = 6;
    local_var_200 = 0;
    local_var_1f8 = 0x3f800000;
    local_var_1f4 = 0x3f800000;
    local_var_1f0 = 0x3f800000;
    _getGeometry_PxShapeGeometryPropertyHelper_physx__QEBA_NPEBVPxShape_2_AEAVPxHeightFieldGeometry_2__Z
              (param_2 + 0x18,param_1[2],stack_array_208);
    __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_168);
    lVar7 = *param_1;
    lVar3 = param_1[1];
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    __0PxHeightFieldGeometryGeneratedInfo_physx__QEAA_XZ(stack_array_c8);
    plStack_198 = (int64_t *)stack_array_208;
    local_var_180 = 0;
    local_var_178 = 0;
    lStack_1a8 = lVar7;
    lStack_1a0 = lVar3;
    lStack_190 = lVar4;
    lStack_188 = lVar5;
    function_6cfc40(stack_array_c8,&lStack_1a8,0);
    break;
  default:
    goto label_6d6585;
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
    lVar7 = *param_1;
  }
  if (*(int *)(lVar7 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar7 + 8) + 8 + (uint64_t)(*(int *)(lVar7 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)param_1[1] + 0x20))();
      lVar7 = *param_1;
    }
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
label_6d6585:
  return;
}
// 函数: void function_6d603d(void)
void function_6d603d(void)
{
  int in_EAX;
// WARNING: Could not recover jumptable at 0x0001806d6068. Too many branches
// WARNING: Treating indirect jump as call
  (*(code *)((uint64_t)*(uint *)(&memory_allocator_372_ptr + (int64_t)in_EAX * 4) + 0x180000000))
            ((code *)((uint64_t)*(uint *)(&memory_allocator_372_ptr + (int64_t)in_EAX * 4) + 0x180000000));
  return;
}
// 函数: void function_6d6585(void)
void function_6d6585(void)
{
  return;
}
// 函数: void function_6d65b0(int64_t *param_1,int64_t param_2)
void function_6d65b0(int64_t *param_1,int64_t param_2)
{
  int32_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  char cVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int8_t uVar14;
  char acStackX_8 [8];
  int64_t lStack_328;
  int64_t lStack_320;
  int64_t lStack_318;
  int64_t lStack_310;
  int64_t lStack_308;
  int64_t lStack_300;
  uint64_t local_var_2f8;
  int64_t lStack_2f0;
  int64_t lStack_2e8;
  int8_t local_var_2e0;
  char *pcStack_2d8;
  uint64_t local_var_2d0;
  uint64_t local_var_2c8;
  void *plocal_var_2c0;
  uint local_var_2b8;
  int32_t local_var_2b4;
  int8_t local_var_2b0;
  uint8_t local_var_2af;
  int8_t stack_array_2a8 [632];
  uint64_t local_var_30;
  RenderingSystem_ShaderCompiler();
  lVar11 = *param_1;
  plocal_var_2c0 = &processed_var_9592_ptr;
  local_var_2b0 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar11 + 0x10);
  local_var_2b8 = local_var_2b8 & 0xffffff00;
  if (uVar2 < (*(uint *)(lVar11 + 0x14) & 0x7fffffff)) {
    lVar3 = *(int64_t *)(lVar11 + 8);
    puVar1 = (int32_t *)(lVar3 + (uint64_t)uVar2 * 0x18);
    *puVar1 = 0x8094c0a8;
    puVar1[1] = 1;
    puVar1[2] = local_var_2b8;
    puVar1[3] = local_var_2b4;
    *(uint64_t *)(lVar3 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT71(local_var_2af,local_var_2b0);
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + 1;
  }
  else {
    function_6d5b60(lVar11,&plocal_var_2c0);
  }
  cVar10 = RenderingSystem_ShaderCompiler(param_1);
  if (cVar10 != '\0') {
    lVar11 = (**(code **)(*(int64_t *)param_1[6] + 0x1e8))();
    if (*(short *)(lVar11 + 8) == 0xb) {
      uVar12 = (**(code **)(param_2 + 0x10))();
      __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(stack_array_2a8);
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
      local_var_2e0 = 1;
      local_var_2d0 = 0;
      local_var_2c8 = 0;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      local_var_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      function_6c5850(stack_array_2a8,&lStack_328);
      pcStack_2d8 = acStackX_8;
      local_var_2d0 = 0;
      local_var_2c8 = 0;
      local_var_2e0 = 1;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      local_var_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      function_6c59f0(stack_array_2a8,&lStack_328);
    }
    else {
      uVar12 = (**(code **)(param_2 + 0x10))(param_1[6]);
      __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(stack_array_2a8);
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
      local_var_2e0 = 1;
      local_var_2d0 = 0;
      local_var_2c8 = 0;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      local_var_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      function_6c5850(stack_array_2a8,&lStack_328);
      pcStack_2d8 = acStackX_8;
      local_var_2d0 = 0;
      local_var_2c8 = 0;
      local_var_2e0 = 1;
      lStack_328 = lVar3;
      lStack_320 = lVar4;
      lStack_318 = lVar8;
      lStack_310 = lVar9;
      lStack_308 = lVar11;
      lStack_300 = lVar5;
      local_var_2f8 = uVar12;
      lStack_2f0 = lVar6;
      lStack_2e8 = lVar7;
      function_6c62d0(stack_array_2a8,&lStack_328);
    }
    if (acStackX_8[0] != '\0') {
      *(int8_t *)param_1[10] = 1;
    }
    (**(code **)(*(int64_t *)param_1[8] + 8))((int64_t *)param_1[8],uVar12);
  }
  lVar11 = *param_1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar13 = (uint64_t)(*(int *)(lVar11 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar11 + 8) + 8 + uVar13 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + uVar13 * 0x18) != '\0')) {
      local_var_30 = 0x1806d6f98;
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar11 = *param_1;
    }
    *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
    lVar11 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar11 + 0x10) != 0) {
    uVar14 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar11 + 8) + 0x10 + (uint64_t)(*(int *)(lVar11 + 0x10) - 1) * 0x18
                 ) == '\0') {
      uVar14 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar14;
  }
  return;
}
// 函数: void function_6d663d(int64_t *param_1)
void function_6d663d(int64_t *param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t uVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_R12;
  int64_t lStackX_20;
  lVar1 = (**(code **)(*param_1 + 0x1e8))();
  if (*(short *)(lVar1 + 8) == 0xb) {
    uVar2 = (**(code **)(unaff_RBX + 0x10))();
    __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x60);
    lVar1 = *unaff_R12;
    *(int8_t *)(unaff_RBP + 0x250) = 0;
    lStackX_20 = lVar1;
    function_6c5850(unaff_RBP + -0x60,&lStackX_20);
    lStackX_20 = lVar1;
    function_6c59f0(unaff_RBP + -0x60,&lStackX_20);
  }
  else {
    uVar2 = (**(code **)(unaff_RBX + 0x10))(unaff_R12[6]);
    __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(unaff_RBP + -0x60);
    lVar1 = *unaff_R12;
    *(int8_t *)(unaff_RBP + 0x250) = 0;
    lStackX_20 = lVar1;
    function_6c5850(unaff_RBP + -0x60,&lStackX_20);
    lStackX_20 = lVar1;
    function_6c62d0(unaff_RBP + -0x60,&lStackX_20);
  }
  if (*(char *)(unaff_RBP + 0x250) != '\0') {
    *(int8_t *)unaff_R12[10] = 1;
  }
  (**(code **)(*(int64_t *)unaff_R12[8] + 8))((int64_t *)unaff_R12[8],uVar2);
  lVar1 = *unaff_R12;
  if (*(int *)(lVar1 + 0x10) != 0) {
    uVar3 = (uint64_t)(*(int *)(lVar1 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar1 + 8) + 8 + uVar3 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar1 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_R12[5] + 0x48))();
      lVar1 = *unaff_R12;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
    lVar1 = *unaff_R12;
  }
  *(int8_t *)(unaff_R12 + 9) = 1;
  if (*(int *)(lVar1 + 0x10) != 0) {
    uVar4 = (int8_t)unaff_R12[9];
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 0x10 + (uint64_t)(*(int *)(lVar1 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar4 = 0;
    }
    *(int8_t *)(unaff_R12 + 9) = uVar4;
  }
  return;
}
// 函数: void function_6d68b7(void)
void function_6d68b7(void)
{
  uint64_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  int64_t *unaff_R12;
  lVar3 = *unaff_R12;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)unaff_R12[5] + 0x48))();
      lVar3 = *unaff_R12;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *unaff_R12;
  }
  *(int8_t *)(unaff_R12 + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar2 = (int8_t)unaff_R12[9];
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar2 = 0;
    }
    *(int8_t *)(unaff_R12 + 9) = uVar2;
  }
  return;
}
// 函数: void function_6d68d0(int64_t *param_1,int64_t param_2)
void function_6d68d0(int64_t *param_1,int64_t param_2)
{
  short sVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lStack_528;
  int64_t lStack_520;
  int64_t lStack_518;
  int64_t lStack_510;
  int64_t lStack_508;
  uint64_t local_var_500;
  uint64_t local_var_4f8;
  int8_t stack_array_4e8 [608];
  int8_t stack_array_288 [608];
  lVar4 = (**(code **)(param_2 + 0x10))(param_1[2]);
  if (lVar4 != 0) {
    SystemValidator(param_1,&processed_var_9592_ptr);
    sVar1 = *(short *)(lVar4 + 8);
    lVar5 = 0;
    if (sVar1 == 0xe) {
      lVar5 = lVar4;
    }
    if (lVar5 == 0) {
      __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(stack_array_288);
      lVar5 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[4];
      lVar6 = 0;
      if (sVar1 == 0xf) {
        lVar6 = lVar4;
      }
      lVar4 = param_1[3];
      __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(stack_array_4e8);
      local_var_500 = 0;
      local_var_4f8 = 0;
      lStack_528 = lVar5;
      lStack_520 = lVar2;
      lStack_518 = lVar6;
      lStack_510 = lVar4;
      lStack_508 = lVar3;
      function_6cc6c0(stack_array_4e8,&lStack_528,0);
      local_var_500 = 0;
      local_var_4f8 = 0;
      lStack_528 = lVar5;
      lStack_520 = lVar2;
      lStack_518 = lVar6;
      lStack_510 = lVar4;
      lStack_508 = lVar3;
      function_6cd1e0(stack_array_4e8,&lStack_528,0);
    }
    else {
      __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(stack_array_4e8);
      lVar4 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[3];
      lVar6 = param_1[4];
      __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(stack_array_288);
      local_var_500 = 0;
      local_var_4f8 = 0;
      lStack_528 = lVar4;
      lStack_520 = lVar2;
      lStack_518 = lVar5;
      lStack_510 = lVar3;
      lStack_508 = lVar6;
      function_6cc6c0(stack_array_288,&lStack_528,0);
      local_var_500 = 0;
      local_var_4f8 = 0;
      lStack_528 = lVar4;
      lStack_520 = lVar2;
      lStack_518 = lVar5;
      lStack_510 = lVar3;
      lStack_508 = lVar6;
      function_6cc880(stack_array_288,&lStack_528,0);
    }
    lVar4 = *param_1;
    if (*(int *)(lVar4 + 0x10) != 0) {
      if (*(char *)(*(int64_t *)(lVar4 + 8) + 8 + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 0x10)
          != '\0') {
        (**(code **)(*(int64_t *)param_1[1] + 0x20))();
        lVar4 = *param_1;
      }
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
    }
  }
  return;
}