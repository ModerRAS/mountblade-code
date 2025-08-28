/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor


#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part573.c - 16 个函数

// 函数: void FUN_18057e860(int64_t param_1)
void FUN_18057e860(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057e880(uint64_t *param_1)
void FUN_18057e880(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  *param_1 = &ui_system_data_1480_ptr;
  plVar1 = (int64_t *)param_1[4];
  lVar3 = *plVar1;
  plVar2 = plVar1;
  if (lVar3 == 0) {
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    while (lVar3 == 0) {
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  if (lVar3 != plVar1[param_1[5]]) {
    do {
      (**(code **)**(uint64_t **)(lVar3 + 8))();
      lVar3 = *(int64_t *)(lVar3 + 0x38);
      while (lVar3 == 0) {
        plVar2 = plVar2 + 1;
        lVar3 = *plVar2;
      }
    } while (lVar3 != *(int64_t *)(param_1[4] + param_1[5] * 8));
  }
  plVar1 = (int64_t *)param_1[10];
  lVar3 = *plVar1;
  plVar2 = plVar1;
  if (lVar3 == 0) {
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    while (lVar3 == 0) {
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  if (lVar3 != plVar1[param_1[0xb]]) {
    do {
      (**(code **)**(uint64_t **)(lVar3 + 8))();
      lVar3 = *(int64_t *)(lVar3 + 0x10);
      while (lVar3 == 0) {
        plVar2 = plVar2 + 1;
        lVar3 = *plVar2;
      }
    } while (lVar3 != *(int64_t *)(param_1[10] + param_1[0xb] * 8));
  }
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  RenderingSystem_CameraController0(param_1 + 9);
  RenderingSystem_CameraController0(param_1 + 9);
  if ((1 < (uint64_t)param_1[0xb]) && (param_1[10] != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  FUN_18057ef40(param_1 + 3);
  *param_1 = &ui_system_data_1592_ptr;
  return;
}



uint64_t
FUN_18057ea00(int64_t param_1,float *param_2,float *param_3,float param_4,int32_t param_5,
             float *param_6,int8_t *param_7,float *param_8)

{
  float *pfVar1;
  int8_t *puVar2;
  float *pfVar3;
  char cVar4;
  uint64_t uVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  void *puStack_158;
  int64_t lStack_150;
  uint64_t uStack_148;
  int32_t uStack_140;
  int16_t uStack_138;
  uint64_t uStack_134;
  float fStack_12c;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  int8_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  void *puStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  uint64_t uStack_d0;
  int16_t uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint64_t uStack_90;
  
  pfVar3 = param_8;
  puVar2 = param_7;
  pfVar1 = param_6;
  uStack_90 = 0xfffffffffffffffe;
  *param_6 = 3.4028235e+38;
  *param_7 = 0;
  param_8[0] = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  fStack_160 = param_2[2];
  fStack_170 = param_3[2] - fStack_160;
  fStack_164 = param_2[1];
  fStack_174 = param_3[1] - fStack_164;
  fStack_168 = *param_2;
  fStack_178 = *param_3 - fStack_168;
  fVar7 = fStack_178 * fStack_178 + fStack_174 * fStack_174 + fStack_170 * fStack_170;
  auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar6._0_4_;
  fVar8 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
  fStack_178 = fVar8 * fStack_178;
  fStack_174 = fVar8 * fStack_174;
  fStack_170 = fVar8 * fStack_170;
  puStack_e8 = &ui_system_data_1560_ptr;
  uStack_e0 = param_5;
  uVar5 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 7;
  lStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0xffffffff;
  uStack_138 = 0;
  uStack_134 = 0;
  fStack_12c = 0.0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_120 = 0x7f7fffff00000000;
  if (param_4 <= 0.01) {
    uStack_118 = 0;
    puStack_158 = &memory_allocator_3376_ptr;
    param_5 = CONCAT22(param_5._2_2_,1);
    cVar4 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x2b0))
                      (*(int64_t **)(param_1 + 8),&fStack_168,&fStack_178,fVar8 * fVar7,
                       &puStack_158,&param_5,&uStack_d8,&puStack_e8,0);
    if (cVar4 != '\0') {
      uVar5 = *(uint64_t *)(lStack_150 + 0x10);
      *pfVar3 = (float)uStack_134;
      pfVar3[1] = uStack_134._4_4_;
      pfVar3[2] = fStack_12c;
      pfVar3[3] = 3.4028235e+38;
      *pfVar1 = SQRT((*param_2 - *pfVar3) * (*param_2 - *pfVar3) +
                     (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]) +
                     (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]));
    }
  }
  else {
    puStack_158 = &memory_allocator_3312_ptr;
    param_6._0_4_ = 0;
    uStack_b0 = 0;
    uStack_a8 = 0x3f80000000000000;
    param_5 = CONCAT22(param_5._2_2_,0x201);
    param_6._4_4_ = param_4;
    fStack_c0 = fStack_178;
    fStack_bc = fStack_174;
    fStack_b8 = fStack_170;
    fStack_a0 = fStack_168;
    fStack_9c = fStack_164;
    fStack_98 = fStack_160;
    cVar4 = (**(code **)(**(int64_t **)(param_1 + 8) + 0x2b8))
                      (*(int64_t **)(param_1 + 8),&param_6,&uStack_b0,&fStack_c0,fVar8 * fVar7,
                       &puStack_158,&param_5,&uStack_d8,&puStack_e8,0,0);
    if (cVar4 != '\0') {
      *puVar2 = uStack_120._4_4_ <= 0.0;
      uVar5 = *(uint64_t *)(lStack_150 + 0x10);
      *pfVar3 = (float)uStack_134;
      pfVar3[1] = uStack_134._4_4_;
      pfVar3[2] = fStack_12c;
      pfVar3[3] = 3.4028235e+38;
      *pfVar1 = SQRT((*param_2 - *pfVar3) * (*param_2 - *pfVar3) +
                     (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]) +
                     (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]));
    }
  }
  return uVar5;
}





// 函数: void FUN_18057eec0(uint64_t *param_1)
void FUN_18057eec0(uint64_t *param_1)

{
  *param_1 = &ui_system_data_1560_ptr;
  *param_1 = &processed_var_4032_ptr;
  return;
}



uint64_t *
FUN_18057eef0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &ui_system_data_1560_ptr;
  *param_1 = &processed_var_4032_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18057ef40(int64_t param_1)
void FUN_18057ef40(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057ef46(int64_t param_1)
void FUN_18057ef46(int64_t param_1)

{
  int *piVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  
  uVar6 = *(uint64_t *)(param_1 + 0x10);
  lVar4 = *(int64_t *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(int64_t *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(uint64_t *)(param_1 + 0x10);
  }
  *(uint64_t *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(uint64_t **)(param_1 + 8), puVar3 != (uint64_t *)0x0)) {
    uVar6 = (uint64_t)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((int64_t)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(uint64_t *)(lVar4 + 0x20);
        *(uint64_t **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057ef70(void)
void FUN_18057ef70(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar4;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar3 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar3);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(uint64_t *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057efa6(void)
void FUN_18057efa6(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar4;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(uint64_t **)(unaff_RBP + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057efc4(void)
void FUN_18057efc4(void)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  uint64_t uVar4;
  
  puVar2 = *(uint64_t **)(unaff_RBP + 8);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18057efe0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  plVar3 = *(int64_t **)(lVar1 + uVar2 * 8);
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[7];
    } while (plVar3 != (int64_t *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
  }
  plVar3[7] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057f03b(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18057f03b(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  RenderingShaderProcessor0(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)uStack0000000000000084 * 8);
  }
  puVar2[7] = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(uint64_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f15e(uint64_t param_1,uint64_t param_2)
void FUN_18057f15e(uint64_t param_1,uint64_t param_2)

{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void FUN_18057f17a(uint64_t param_1)
void FUN_18057f17a(uint64_t param_1)

{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x38) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f1a0(void)
void FUN_18057f1a0(void)

{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  
  *(uint64_t *)(unaff_R12 + 0x38) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18057f1f0(int64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t param_5)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  
  uVar2 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  lVar1 = *(int64_t *)(param_1 + 8);
  plVar3 = *(int64_t **)(lVar1 + uVar2 * 8);
  if (plVar3 != (int64_t *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (int64_t *)plVar3[2];
    } while (plVar3 != (int64_t *)0x0);
  }
  RenderingShaderProcessor0(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  plVar3[1] = 0;
  plVar3[2] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)param_5._4_4_ * 8 + 8,8,
                          *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(uint64_t)param_5._4_4_ * 8);
  }
  plVar3[2] = *(int64_t *)(*(int64_t *)(param_1 + 8) + uVar2 * 8);
  *(int64_t **)(*(int64_t *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(int8_t *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057f24b(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18057f24b(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t unaff_R13;
  uint64_t *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  RenderingShaderProcessor0(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,*(int8_t *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(uint64_t)uStack0000000000000084 * 8 + 8,8,
                          *(int8_t *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(uint64_t)uStack0000000000000084 * 8);
  }
  puVar2[2] = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(uint64_t **)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f34e(uint64_t param_1,uint64_t param_2)
void FUN_18057f34e(uint64_t param_1,uint64_t param_2)

{
  uint64_t in_RAX;
  uint64_t *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(int8_t *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void FUN_18057f36a(uint64_t param_1)
void FUN_18057f36a(uint64_t param_1)

{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  
  if ((1 < param_1) && (*(int64_t *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(*(int64_t *)(unaff_RDI + 8));
  }
  *(uint64_t *)(unaff_RDI + 0x10) = unaff_RBP;
  *(int64_t *)(unaff_RDI + 8) = unaff_R14;
  *(uint64_t *)(unaff_R12 + 0x10) = *(uint64_t *)(unaff_R14 + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f390(void)
void FUN_18057f390(void)

{
  int64_t lVar1;
  int64_t unaff_RDI;
  int64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R15;
  
  *(uint64_t *)(unaff_R12 + 0x10) = *(uint64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(int64_t *)(*(int64_t *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(int64_t *)(unaff_RDI + 8);
  *(int64_t *)(unaff_RDI + 0x18) = *(int64_t *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(int8_t *)(unaff_R15 + 2) = 1;
  return;
}



uint64_t * FUN_18057f3e0(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &ui_system_data_1592_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



