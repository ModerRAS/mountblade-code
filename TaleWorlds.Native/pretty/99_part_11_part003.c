#include "TaleWorlds.Native.Split.h"

// 99_part_11_part003.c - 29 个函数

// 函数: void FUN_1806d68fa(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1806d68fa(int32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_R15;
  
  FUN_1806d7170(param_1,&processed_var_9592_ptr);
  lVar1 = 0;
  if (*(short *)(unaff_RBX + 8) == 0xe) {
    lVar1 = unaff_RBX;
  }
  if (lVar1 == 0) {
    __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x1c0);
    lVar1 = *unaff_R15;
    __0PxArticulationJointReducedCoordinateGeneratedInfo_physx__QEAA_XZ(&stack0x00000060);
    FUN_1806cc6c0(&stack0x00000060,&stack0x00000020,0,param_4,lVar1);
    FUN_1806cd1e0(&stack0x00000060,&stack0x00000020,0,param_4,lVar1);
  }
  else {
    __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(&stack0x00000060);
    lVar1 = *unaff_R15;
    __0PxArticulationJointGeneratedInfo_physx__QEAA_XZ(unaff_RBP + 0x1c0);
    FUN_1806cc6c0(unaff_RBP + 0x1c0,&stack0x00000020,0,param_4,lVar1);
    FUN_1806cc880(unaff_RBP + 0x1c0,&stack0x00000020,0,param_4,lVar1);
  }
  lVar1 = *unaff_R15;
  if (*(int *)(lVar1 + 0x10) != 0) {
    if (*(char *)(*(int64_t *)(lVar1 + 8) + 8 + (uint64_t)(*(int *)(lVar1 + 0x10) - 1) * 0x10) !=
        '\0') {
      (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
      lVar1 = *unaff_R15;
    }
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806d6aad(uint64_t param_1,int64_t param_2)
void FUN_1806d6aad(uint64_t param_1,int64_t param_2)

{
  int in_EAX;
  int64_t *unaff_R15;
  
  if (*(char *)(*(int64_t *)(param_2 + 8) + 8 + (uint64_t)(in_EAX - 1) * 0x10) != '\0') {
    (**(code **)(*(int64_t *)unaff_R15[1] + 0x20))();
    param_2 = *unaff_R15;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}






// 函数: void FUN_1806d6af0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d6af0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  uint64_t *puStack_168;
  int64_t lStack_160;
  uint64_t uStack_158;
  uint64_t **ppuStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  int64_t lStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  uint64_t uStack_120;
  int8_t auStack_118 [272];
  
  puStack_168 = *(uint64_t **)(param_5 + 0x10);
  lStack_160 = 0;
  uStack_158 = 0;
  __0PxMaterialGeneratedInfo_physx__QEAA_XZ(auStack_118);
  ppuStack_150 = &puStack_168;
  lStack_138 = param_5;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_148 = param_4;
  uStack_140 = param_2;
  uStack_130 = param_3;
  FUN_1806d08f0(auStack_118,&ppuStack_150,0);
  if ((((uStack_158 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_158)) && (lStack_160 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_168 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806d6bc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d6bc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  int32_t uVar1;
  uint64_t *puStack_458;
  int64_t lStack_450;
  uint64_t uStack_448;
  uint64_t **ppuStack_440;
  uint64_t uStack_438;
  uint64_t uStack_430;
  int64_t lStack_428;
  uint64_t uStack_420;
  uint64_t uStack_418;
  uint64_t uStack_410;
  int8_t auStack_408 [1024];
  
  puStack_458 = *(uint64_t **)(param_5 + 0x10);
  lStack_450 = 0;
  uStack_448 = 0;
  __0PxRigidDynamicGeneratedInfo_physx__QEAA_XZ(auStack_408);
  ppuStack_440 = &puStack_458;
  lStack_428 = param_5;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_438 = param_4;
  uStack_430 = param_2;
  uStack_420 = param_3;
  uVar1 = FUN_1806c50f0(auStack_408,&ppuStack_440,0);
  ppuStack_440 = &puStack_458;
  lStack_428 = param_5;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_438 = param_4;
  uStack_430 = param_2;
  uStack_420 = param_3;
  FUN_1806cd860(auStack_408,&ppuStack_440,uVar1);
  ppuStack_440 = &puStack_458;
  lStack_428 = param_5;
  uStack_418 = 0;
  uStack_410 = 0;
  uStack_438 = param_4;
  uStack_430 = param_2;
  uStack_420 = param_3;
  FUN_1806d1870(auStack_408,&ppuStack_440,0);
  if ((((uStack_448 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_448)) && (lStack_450 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_458 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806d6d10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d6d10(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  uint64_t *puStack_1a8;
  int64_t lStack_1a0;
  uint64_t uStack_198;
  uint64_t **ppuStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  int64_t lStack_178;
  uint64_t uStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  int8_t auStack_158 [336];
  
  puStack_1a8 = *(uint64_t **)(param_5 + 0x10);
  lStack_1a0 = 0;
  uStack_198 = 0;
  __0PxRigidStaticGeneratedInfo_physx__QEAA_XZ(auStack_158);
  ppuStack_190 = &puStack_1a8;
  lStack_178 = param_5;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_188 = param_4;
  uStack_180 = param_2;
  uStack_170 = param_3;
  FUN_1806c50f0(auStack_158,&ppuStack_190,0);
  if ((((uStack_198 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_198)) && (lStack_1a0 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_1a8 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806d6de0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806d6de0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int64_t param_5)

{
  uint64_t *puStack_238;
  int64_t lStack_230;
  uint64_t uStack_228;
  uint64_t **ppuStack_220;
  uint64_t uStack_218;
  uint64_t uStack_210;
  int64_t lStack_208;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  uint64_t uStack_1f0;
  int8_t auStack_1e8 [480];
  
  puStack_238 = *(uint64_t **)(param_5 + 0x10);
  lStack_230 = 0;
  uStack_228 = 0;
  __0PxShapeGeneratedInfo_physx__QEAA_XZ(auStack_1e8);
  ppuStack_220 = &puStack_238;
  lStack_208 = param_5;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_218 = param_4;
  uStack_210 = param_2;
  uStack_200 = param_3;
  FUN_1806d1d70(auStack_1e8,&ppuStack_220,0);
  if ((((uStack_228 & 0x7fffffff00000000) != 0) && (-1 < (int64_t)uStack_228)) && (lStack_230 != 0)
     ) {
    (**(code **)(*(int64_t *)*puStack_238 + 0x10))();
  }
  return;
}






// 函数: void FUN_1806d6eb0(int64_t *param_1)
void FUN_1806d6eb0(int64_t *param_1)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  
  lVar4 = param_1[1];
  if (*(int *)(lVar4 + 0x10) != 0) {
    uVar1 = *(uint *)(*(int64_t *)(lVar4 + 8) + (uint64_t)(*(int *)(lVar4 + 0x10) - 1) * 4);
    lVar2 = *param_1;
    if (uVar1 < *(uint *)(lVar2 + 0x10)) {
      do {
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = (uint64_t)(*(int *)(lVar2 + 0x10) - 1);
          if ((*(char *)(*(int64_t *)(lVar2 + 8) + 8 + uVar3 * 0x18) != '\0') &&
             (*(char *)(*(int64_t *)(lVar2 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
            (**(code **)(*(int64_t *)param_1[5] + 0x48))();
            lVar2 = *param_1;
          }
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          lVar2 = *param_1;
        }
        *(int8_t *)(param_1 + 9) = 1;
        uVar5 = *(uint *)(lVar2 + 0x10);
        if ((uVar5 != 0) &&
           (*(char *)(*(int64_t *)(lVar2 + 8) + 0x10 + (uint64_t)(uVar5 - 1) * 0x18) == '\0')) {
          *(int8_t *)(param_1 + 9) = 0;
          uVar5 = *(uint *)(lVar2 + 0x10);
        }
      } while (uVar1 < uVar5);
      lVar4 = param_1[1];
    }
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  return;
}






// 函数: void FUN_1806d6ecb(int64_t param_1,int64_t param_2)
void FUN_1806d6ecb(int64_t param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *unaff_RBX;
  uint uVar4;
  
  uVar1 = *(uint *)(*(int64_t *)(param_1 + 8) + param_2 * 4);
  lVar2 = *unaff_RBX;
  if (uVar1 < *(uint *)(lVar2 + 0x10)) {
    do {
      if (*(int *)(lVar2 + 0x10) != 0) {
        uVar3 = (uint64_t)(*(int *)(lVar2 + 0x10) - 1);
        if ((*(char *)(*(int64_t *)(lVar2 + 8) + 8 + uVar3 * 0x18) != '\0') &&
           (*(char *)(*(int64_t *)(lVar2 + 8) + 0x10 + uVar3 * 0x18) != '\0')) {
          (**(code **)(*(int64_t *)unaff_RBX[5] + 0x48))();
          lVar2 = *unaff_RBX;
        }
        *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
        lVar2 = *unaff_RBX;
      }
      *(int8_t *)(unaff_RBX + 9) = 1;
      uVar4 = *(uint *)(lVar2 + 0x10);
      if ((uVar4 != 0) &&
         (*(char *)(*(int64_t *)(lVar2 + 8) + 0x10 + (uint64_t)(uVar4 - 1) * 0x18) == '\0')) {
        *(int8_t *)(unaff_RBX + 9) = 0;
        uVar4 = *(uint *)(lVar2 + 0x10);
      }
    } while (uVar1 < uVar4);
    param_1 = unaff_RBX[1];
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}






// 函数: void FUN_1806d6f53(void)
void FUN_1806d6f53(void)

{
  return;
}






// 函数: void SystemResourceProcessor(int64_t *param_1)
void SystemResourceProcessor(int64_t *param_1)

{
  uint64_t uVar1;
  int8_t uVar2;
  int64_t lVar3;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar1 = (uint64_t)(*(int *)(lVar3 + 0x10) - 1);
    if ((*(char *)(*(int64_t *)(lVar3 + 8) + 8 + uVar1 * 0x18) != '\0') &&
       (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + uVar1 * 0x18) != '\0')) {
      (**(code **)(*(int64_t *)param_1[5] + 0x48))();
      lVar3 = *param_1;
    }
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    lVar3 = *param_1;
  }
  *(int8_t *)(param_1 + 9) = 1;
  if (*(int *)(lVar3 + 0x10) != 0) {
    uVar2 = (int8_t)param_1[9];
    if (*(char *)(*(int64_t *)(lVar3 + 8) + 0x10 + (uint64_t)(*(int *)(lVar3 + 0x10) - 1) * 0x18)
        == '\0') {
      uVar2 = 0;
    }
    *(int8_t *)(param_1 + 9) = uVar2;
  }
  return;
}






// 函数: void FUN_1806d7000(int64_t *param_1,uint64_t param_2)
void FUN_1806d7000(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uStack_28;
  int8_t uStack_20;
  uint7 uStack_1f;
  int8_t uStack_18;
  uint8_t uStack_17;
  
  FUN_1806d56e0();
  lVar3 = *param_1;
  uStack_18 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar3 + 0x10);
  uStack_20 = 0;
  if ((*(uint *)(lVar3 + 0x14) & 0x7fffffff) <= uVar2) {
    uStack_28 = param_2;
    FUN_1806d5b60(lVar3,&uStack_28);
    return;
  }
  lVar4 = *(int64_t *)(lVar3 + 8);
  puVar1 = (uint64_t *)(lVar4 + (uint64_t)uVar2 * 0x18);
  *puVar1 = param_2;
  puVar1[1] = (uint64_t)uStack_1f << 8;
  *(uint64_t *)(lVar4 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT71(uStack_17,uStack_18);
  *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  return;
}






// 函数: void FUN_1806d7080(int64_t *param_1,uint64_t param_2)
void FUN_1806d7080(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint uVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uStack_28;
  int8_t uStack_20;
  uint7 uStack_1f;
  int8_t uStack_18;
  uint8_t uStack_17;
  
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 0x10) != 0) {
    uVar5 = (uint64_t)(*(int *)(lVar6 + 0x10) - 1);
    if (*(char *)(*(int64_t *)(lVar6 + 8) + 8 + uVar5 * 0x18) == '\0') {
      cVar4 = (char)param_1[9];
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(*(int64_t *)param_1[5] + 0x18))
                          ((int64_t *)param_1[5],
                           *(uint64_t *)(*(int64_t *)(lVar6 + 8) + uVar5 * 0x18));
        lVar6 = *param_1;
        *(char *)(param_1 + 9) = cVar4;
      }
      *(char *)(*(int64_t *)(lVar6 + 8) + 0x10 + (uint64_t)(*(int *)(lVar6 + 0x10) - 1) * 0x18) =
           cVar4;
      *(char *)(*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x18)
           = (char)param_1[9];
      lVar6 = *param_1;
    }
  }
  uStack_18 = (int8_t)param_1[9];
  uVar2 = *(uint *)(lVar6 + 0x10);
  uStack_20 = 0;
  if ((*(uint *)(lVar6 + 0x14) & 0x7fffffff) <= uVar2) {
    uStack_28 = param_2;
    FUN_1806d5b60(lVar6,&uStack_28);
    return;
  }
  lVar3 = *(int64_t *)(lVar6 + 8);
  puVar1 = (uint64_t *)(lVar3 + (uint64_t)uVar2 * 0x18);
  *puVar1 = param_2;
  puVar1[1] = (uint64_t)uStack_1f << 8;
  *(uint64_t *)(lVar3 + 0x10 + (uint64_t)uVar2 * 0x18) = CONCAT71(uStack_17,uStack_18);
  *(int *)(lVar6 + 0x10) = *(int *)(lVar6 + 0x10) + 1;
  return;
}






// 函数: void FUN_1806d7170(int64_t *param_1,uint64_t param_2)
void FUN_1806d7170(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uStack_18;
  int8_t uStack_10;
  uint7 uStack_f;
  
  lVar2 = *param_1;
  if ((*(int *)(lVar2 + 0x10) != 0) &&
     (puVar1 = (uint64_t *)
               ((uint64_t)(*(int *)(lVar2 + 0x10) - 1) * 0x10 + *(int64_t *)(lVar2 + 8)),
     *(char *)(puVar1 + 1) == '\0')) {
    (**(code **)(*(int64_t *)param_1[1] + 0x18))((int64_t *)param_1[1],*puVar1);
    *(int8_t *)
     (*(int64_t *)(*param_1 + 8) + 8 + (uint64_t)(*(int *)(*param_1 + 0x10) - 1) * 0x10) = 1;
    lVar2 = *param_1;
  }
  uStack_10 = 0;
  if ((*(uint *)(lVar2 + 0x14) & 0x7fffffff) <= *(uint *)(lVar2 + 0x10)) {
    uStack_18 = param_2;
    FUN_1806d5a70(lVar2,&uStack_18);
    return;
  }
  puVar1 = (uint64_t *)(*(int64_t *)(lVar2 + 8) + (uint64_t)*(uint *)(lVar2 + 0x10) * 0x10);
  *puVar1 = param_2;
  puVar1[1] = (uint64_t)uStack_f << 8;
  *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  return;
}






// 函数: void FUN_1806d7220(uint64_t *param_1,int param_2)
void FUN_1806d7220(uint64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar4 = 0;
  if (param_2 == 0) {
    puVar1 = (uint64_t *)0x0;
  }
  else if ((*(char *)(param_1 + 0x41) == '\0') && ((uint)(param_2 * 8) < 0x201)) {
    *(int8_t *)(param_1 + 0x41) = 1;
    puVar1 = param_1 + 1;
  }
  else {
    puVar1 = (uint64_t *)
             (**(code **)(**(int64_t **)*param_1 + 8))
                       (*(int64_t **)*param_1,param_2 * 8,&processed_var_6480_ptr,&rendering_buffer_2784_ptr,0x229);
  }
  puVar3 = (uint64_t *)param_1[0x42];
  if (puVar1 < puVar1 + *(uint *)(param_1 + 0x43)) {
    uVar5 = (uint64_t)*(uint *)(param_1 + 0x43);
    if (puVar1 + *(uint *)(param_1 + 0x43) < puVar1) {
      uVar5 = uVar4;
    }
    puVar2 = puVar1;
    if (uVar5 != 0) {
      do {
        uVar4 = uVar4 + 1;
        *puVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar4 < uVar5);
      puVar3 = (uint64_t *)param_1[0x42];
    }
  }
  if (-1 < *(int *)((int64_t)param_1 + 0x21c)) {
    if (puVar3 == param_1 + 1) {
      *(int8_t *)(param_1 + 0x41) = 0;
    }
    else if (puVar3 != (uint64_t *)0x0) {
      (**(code **)(**(int64_t **)*param_1 + 0x10))();
    }
  }
  *(int *)((int64_t)param_1 + 0x21c) = param_2;
  param_1[0x42] = puVar1;
  return;
}






// 函数: void FUN_1806d7340(uint64_t *param_1,int param_2)
void FUN_1806d7340(uint64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  uVar5 = 0;
  if (param_2 == 0) {
    puVar1 = (uint64_t *)0x0;
  }
  else if ((*(char *)(param_1 + 0x40) == '\0') && ((uint)(param_2 * 8) < 0x201)) {
    *(int8_t *)(param_1 + 0x40) = 1;
    puVar1 = param_1;
  }
  else {
    puVar1 = (uint64_t *)FUN_1806d35c0(param_1,param_2 * 8,&rendering_buffer_2784_ptr,0x229);
  }
  puVar6 = (uint64_t *)param_1[0x41];
  if (puVar1 < puVar1 + *(uint *)(param_1 + 0x42)) {
    uVar4 = (uint64_t)*(uint *)(param_1 + 0x42);
    if (puVar1 + *(uint *)(param_1 + 0x42) < puVar1) {
      uVar4 = uVar5;
    }
    puVar3 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 < uVar4);
      puVar6 = (uint64_t *)param_1[0x41];
    }
  }
  if (-1 < *(int *)((int64_t)param_1 + 0x214)) {
    if (puVar6 == param_1) {
      *(int8_t *)(param_1 + 0x40) = 0;
    }
    else if (puVar6 != (uint64_t *)0x0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,puVar6);
    }
  }
  *(int *)((int64_t)param_1 + 0x214) = param_2;
  param_1[0x41] = puVar1;
  return;
}






// 函数: void FUN_1806d7460(uint64_t *param_1,int param_2)
void FUN_1806d7460(uint64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  uVar5 = 0;
  if (param_2 == 0) {
    puVar1 = (uint64_t *)0x0;
  }
  else if ((*(char *)(param_1 + 8) == '\0') && ((uint)(param_2 * 8) < 0x41)) {
    *(int8_t *)(param_1 + 8) = 1;
    puVar1 = param_1;
  }
  else {
    puVar1 = (uint64_t *)FUN_1806d35c0(param_1,param_2 * 8,&rendering_buffer_2784_ptr,0x229);
  }
  puVar6 = (uint64_t *)param_1[9];
  if (puVar1 < puVar1 + *(uint *)(param_1 + 10)) {
    uVar4 = (uint64_t)*(uint *)(param_1 + 10);
    if (puVar1 + *(uint *)(param_1 + 10) < puVar1) {
      uVar4 = uVar5;
    }
    puVar3 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < uVar4);
      puVar6 = (uint64_t *)param_1[9];
    }
  }
  if (-1 < *(int *)((int64_t)param_1 + 0x54)) {
    if (puVar6 == param_1) {
      *(int8_t *)(param_1 + 8) = 0;
    }
    else if (puVar6 != (uint64_t *)0x0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,puVar6);
    }
  }
  *(int *)((int64_t)param_1 + 0x54) = param_2;
  param_1[9] = puVar1;
  return;
}






// 函数: void FUN_1806d7560(uint64_t *param_1,int param_2)
void FUN_1806d7560(uint64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  uVar5 = 0;
  if (param_2 == 0) {
    puVar1 = (uint64_t *)0x0;
  }
  else if ((*(char *)(param_1 + 5) == '\0') && ((uint)(param_2 * 8) < 0x29)) {
    *(int8_t *)(param_1 + 5) = 1;
    puVar1 = param_1;
  }
  else {
    puVar1 = (uint64_t *)FUN_1806d3660(param_1,param_2 * 8,&rendering_buffer_2784_ptr,0x229);
  }
  puVar6 = (uint64_t *)param_1[6];
  if (puVar1 < puVar1 + *(uint *)(param_1 + 7)) {
    uVar4 = (uint64_t)*(uint *)(param_1 + 7);
    if (puVar1 + *(uint *)(param_1 + 7) < puVar1) {
      uVar4 = uVar5;
    }
    puVar3 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar5 < uVar4);
      puVar6 = (uint64_t *)param_1[6];
    }
  }
  if (-1 < *(int *)((int64_t)param_1 + 0x3c)) {
    if (puVar6 == param_1) {
      *(int8_t *)(param_1 + 5) = 0;
    }
    else if (puVar6 != (uint64_t *)0x0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,puVar6);
    }
  }
  *(int *)((int64_t)param_1 + 0x3c) = param_2;
  param_1[6] = puVar1;
  return;
}






// 函数: void FUN_1806d7660(uint64_t *param_1,int32_t param_2)
void FUN_1806d7660(uint64_t *param_1,int32_t param_2)

{
  uint64_t *puVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  puVar1 = (uint64_t *)FUN_1806d3440();
  puVar5 = (uint64_t *)param_1[6];
  if (puVar1 < puVar1 + *(uint *)(param_1 + 7)) {
    uVar3 = 0;
    uVar4 = (uint64_t)*(uint *)(param_1 + 7);
    if (puVar1 + *(uint *)(param_1 + 7) < puVar1) {
      uVar4 = uVar3;
    }
    puVar6 = puVar1;
    if (uVar4 != 0) {
      do {
        uVar3 = uVar3 + 1;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 < uVar4);
      puVar5 = (uint64_t *)param_1[6];
    }
  }
  if (-1 < *(int *)((int64_t)param_1 + 0x3c)) {
    if (puVar5 == param_1) {
      *(int8_t *)(param_1 + 5) = 0;
    }
    else if (puVar5 != (uint64_t *)0x0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,puVar5);
    }
  }
  *(int32_t *)((int64_t)param_1 + 0x3c) = param_2;
  param_1[6] = puVar1;
  return;
}






// 函数: void FUN_1806d7720(int64_t *param_1,int64_t param_2)
void FUN_1806d7720(int64_t *param_1,int64_t param_2)

{
  int8_t *puVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plStackX_8;
  int8_t auStack_68 [64];
  int8_t uStack_28;
  int8_t *puStack_20;
  int32_t uStack_18;
  uint uStack_14;
  
  plStackX_8 = param_1;
  if (*(uint *)(param_2 + 0x210) < (*(uint *)(param_2 + 0x214) & 0x7fffffff)) {
    *(int64_t **)(*(int64_t *)(param_2 + 0x208) + (uint64_t)*(uint *)(param_2 + 0x210) * 8) =
         param_1;
    *(int *)(param_2 + 0x210) = *(int *)(param_2 + 0x210) + 1;
  }
  else {
    FUN_1806d5970(param_2,&plStackX_8);
  }
  puStack_20 = auStack_68;
  uStack_28 = 1;
  lVar4 = 0;
  uStack_18 = 0;
  uStack_14 = 8;
  uVar2 = (**(code **)(*param_1 + 0x200))(param_1);
  plStackX_8 = (int64_t *)0x0;
  FUN_1806d7e20(auStack_68,uVar2,&plStackX_8);
  (**(code **)(*param_1 + 0x210))(param_1,puStack_20,uVar2,0);
  if (uVar2 != 0) {
    uVar5 = (uint64_t)uVar2;
    do {
      FUN_1806d7720(*(uint64_t *)(puStack_20 + lVar4),param_2);
      lVar4 = lVar4 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar1 = puStack_20;
  if (((((uStack_14 & 0x7fffffff) != 0) && (-1 < (int)uStack_14)) && (puStack_20 != auStack_68)) &&
     (puStack_20 != (int8_t *)0x0)) {
    plVar3 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar3 + 0x10))(plVar3,puVar1);
  }
  return;
}






// 函数: void FUN_1806d7850(uint64_t param_1,int64_t *param_2,uint64_t *param_3)
void FUN_1806d7850(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  void *puStack_18;
  uint64_t *puStack_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  puStack_18 = &ui_system_data_1224_ptr;
  puStack_10 = param_3;
  (**(code **)(*param_2 + 0x1b8))(param_2,&puStack_18);
  return;
}






// 函数: void FUN_1806d78a0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)
void FUN_1806d78a0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  void *puStack_18;
  uint64_t *puStack_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  puStack_18 = &ui_system_data_1224_ptr;
  puStack_10 = param_3;
  (**(code **)(*param_2 + 0x160))(param_2,&puStack_18);
  return;
}






// 函数: void FUN_1806d78f0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)
void FUN_1806d78f0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  void *puStack_18;
  uint64_t *puStack_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  puStack_18 = &ui_system_data_1224_ptr;
  puStack_10 = param_3;
  (**(code **)(*param_2 + 0x110))(param_2,&puStack_18);
  return;
}






// 函数: void FUN_1806d7940(uint64_t param_1,int64_t *param_2,uint64_t *param_3)
void FUN_1806d7940(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  void *puStack_18;
  uint64_t *puStack_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  puStack_18 = &ui_system_data_1224_ptr;
  puStack_10 = param_3;
  (**(code **)(*param_2 + 0x148))(param_2,&puStack_18);
  return;
}






// 函数: void FUN_1806d7990(uint64_t param_1,int64_t *param_2,uint64_t *param_3)
void FUN_1806d7990(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  void *puStack_18;
  uint64_t *puStack_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  puStack_18 = &ui_system_data_1224_ptr;
  puStack_10 = param_3;
  (**(code **)(*param_2 + 0x178))(param_2,&puStack_18);
  return;
}






// 函数: void FUN_1806d79e0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)
void FUN_1806d79e0(uint64_t param_1,int64_t *param_2,uint64_t *param_3)

{
  void *puStack_18;
  uint64_t *puStack_10;
  
  (**(code **)*param_3)(param_3,param_2,0x80000000,param_2);
  puStack_18 = &ui_system_data_1224_ptr;
  puStack_10 = param_3;
  (**(code **)(*param_2 + 0x138))(param_2,&puStack_18);
  return;
}






// 函数: void FUN_1806d7a90(uint64_t *param_1,uint param_2)
void FUN_1806d7a90(uint64_t *param_1,uint param_2)

{
  uint64_t uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 == 0) || ((param_2 & param_2 - 1) != 0)) {
    param_2 = param_2 >> 1 | param_2;
    param_2 = param_2 | param_2 >> 2;
    param_2 = param_2 | param_2 >> 4;
    param_2 = param_2 | param_2 >> 8;
    param_2 = (param_2 >> 0x10 | param_2) + 1;
  }
  iVar3 = (int)(int64_t)((float)param_2 * *(float *)(param_1 + 6));
  iVar2 = param_2 * 4 + iVar3 * 4;
  uVar1 = (**(code **)(**(int64_t **)*param_1 + 8))
                    (*(int64_t **)*param_1,iVar3 * 0x10 + iVar2 + (-iVar2 & 0xfU),&processed_var_6480_ptr,
                     &rendering_buffer_2848_ptr,0x174);
                    // WARNING: Subroutine does not return
  memset(uVar1,0xffffffff,param_2 * 4);
}






// 函数: void FUN_1806d7c60(int64_t param_1,uint param_2,uint64_t *param_3)
void FUN_1806d7c60(int64_t param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)(param_1 + 0x21c) & 0x7fffffff) < param_2) {
    FUN_1806d7220();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*(int64_t *)(param_1 + 0x210) + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)
           (*(int64_t *)(param_1 + 0x210) + (uint64_t)*(uint *)(param_1 + 0x218) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
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
  *(uint *)(param_1 + 0x218) = param_2;
  return;
}






// 函数: void FUN_1806d7d40(int64_t param_1,uint param_2,uint64_t *param_3)
void FUN_1806d7d40(int64_t param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)(param_1 + 0x214) & 0x7fffffff) < param_2) {
    FUN_1806d7340();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*(int64_t *)(param_1 + 0x208) + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)
           (*(int64_t *)(param_1 + 0x208) + (uint64_t)*(uint *)(param_1 + 0x210) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
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
  *(uint *)(param_1 + 0x210) = param_2;
  return;
}






// 函数: void FUN_1806d7e20(int64_t param_1,uint param_2,uint64_t *param_3)
void FUN_1806d7e20(int64_t param_1,uint param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  
  if ((*(uint *)(param_1 + 0x54) & 0x7fffffff) < param_2) {
    FUN_1806d7460();
  }
  uVar3 = 0;
  puVar4 = (uint64_t *)(*(int64_t *)(param_1 + 0x48) + (uint64_t)param_2 * 8);
  puVar5 = (uint64_t *)(*(int64_t *)(param_1 + 0x48) + (uint64_t)*(uint *)(param_1 + 0x50) * 8);
  uVar6 = (uint64_t)((int64_t)puVar4 + (7 - (int64_t)puVar5)) >> 3;
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
  *(uint *)(param_1 + 0x50) = param_2;
  return;
}






