#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part055.c - 9 个函数

// 函数: void UtilitiesSystem_CacheManager(int64_t param_1)
void UtilitiesSystem_CacheManager(int64_t param_1)

{
  if (*(short *)(param_1 + 0x2b2) != *(short *)(param_1 + 0x2b6)) {
    if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
      if (*(short *)(param_1 + 0x2b0) != *(short *)(param_1 + 0x2b4)) {
        if (*(char *)(param_1 + 0x2d8) == '\0') {
          FUN_1802e7e20();
        }
        else {
          UltraHighFreq_DataProcessor1(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,
                        param_1 + 0x70);
        }
        *(int16_t *)(param_1 + 0x2b0) = *(int16_t *)(param_1 + 0x2b4);
      }
      return;
    }
    UltraHighFreq_DataProcessor1(*(int64_t *)(param_1 + 0x28),*(int64_t *)(param_1 + 0x28) + 0xf8,param_1 + 0x70)
    ;
    *(int16_t *)(param_1 + 0x2b6) = *(int16_t *)(param_1 + 0x2b2);
  }
  return;
}






// 函数: void FUN_1801c0df0(int64_t *param_1)
void FUN_1801c0df0(int64_t *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  func_0x0001801c0ee0();
  iVar3 = 0;
  if (0 < (int)param_1[4]) {
    do {
      iVar2 = 0;
      iVar1 = *(int *)((int64_t)param_1 + 0x24);
      if (0 < iVar1) {
        do {
          if (*(int64_t *)(*param_1 + (int64_t)(iVar1 * iVar3 + iVar2) * 0x28 + 8) != 0) {
                    // WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          iVar2 = iVar2 + 1;
          iVar1 = *(int *)((int64_t)param_1 + 0x24);
        } while (iVar2 < iVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  if (*param_1 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1801c0f40(int64_t *param_1)
void FUN_1801c0f40(int64_t *param_1)

{
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (param_1[1] - *param_1 >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar1 + *param_1) + 0x50))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 < (uint64_t)(param_1[1] - *param_1 >> 3));
  }
  return;
}






// 函数: void FUN_1801c0f5f(void)
void FUN_1801c0f5f(void)

{
  int64_t *unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *unaff_RBX) + 0x50))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI < (uint64_t)(unaff_RBX[1] - *unaff_RBX >> 3));
  return;
}






// 函数: void FUN_1801c0f9b(void)
void FUN_1801c0f9b(void)

{
  return;
}



float * SystemFileHandler(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[3];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = *param_1;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  param_2[3] = 3.4028235e+38;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar9 = fVar8 * fVar6 - fVar3 * fVar1;
  fVar8 = fVar2 * fVar1 - param_3[2] * fVar5;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 * fVar5 - fVar2 * fVar6;
  fVar8 = fVar8 + fVar8;
  fVar7 = fVar7 + fVar7;
  fVar3 = param_3[2];
  *param_2 = (fVar7 * fVar6 - fVar8 * fVar1) + fVar9 * fVar4 + fVar2;
  fVar2 = param_3[1];
  param_2[2] = (fVar8 * fVar5 - fVar9 * fVar6) + fVar7 * fVar4 + fVar3;
  param_2[1] = (fVar9 * fVar1 - fVar7 * fVar5) + fVar8 * fVar4 + fVar2;
  return param_2;
}



float * UltraHighFreq_ConfigManager1(int64_t param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int8_t auStack_18 [24];
  
  pfVar5 = (float *)SystemFileHandler(param_1,auStack_18);
  fVar1 = *(float *)(param_1 + 0x14);
  param_2[3] = 3.4028235e+38;
  fVar2 = pfVar5[1];
  *param_2 = *pfVar5 + *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = pfVar5[2];
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar3 + fVar4;
  return param_2;
}



float * FUN_1801c1140(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = param_1[4];
  fVar2 = param_1[8];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[9];
  fVar6 = param_1[1];
  fVar18 = fVar6 * fVar4 - param_1[2] * fVar3;
  fVar16 = param_1[2] * fVar1 - *param_1 * fVar4;
  fVar7 = param_1[10];
  fVar15 = *param_1 * fVar3 - fVar6 * fVar1;
  fVar8 = param_1[10];
  fVar17 = 1.0 / (fVar16 * fVar5 + fVar18 * fVar2 + fVar15 * param_1[10]);
  fVar9 = *param_1;
  fVar10 = param_1[2];
  fVar11 = param_1[2];
  fVar12 = *param_3;
  fVar13 = param_3[1];
  fVar14 = param_3[2];
  *param_2 = (fVar2 * fVar4 - fVar1 * fVar8) * fVar17 * fVar13 +
             (fVar8 * fVar3 - fVar5 * fVar4) * fVar17 * fVar12 +
             (fVar1 * fVar5 - fVar2 * fVar3) * fVar17 * fVar14;
  param_2[1] = (fVar9 * fVar8 - fVar10 * fVar2) * fVar17 * fVar13 +
               (fVar11 * fVar5 - fVar6 * fVar7) * fVar17 * fVar12 +
               (fVar6 * fVar2 - fVar9 * fVar5) * fVar17 * fVar14;
  param_2[2] = fVar17 * fVar16 * fVar13 + fVar17 * fVar18 * fVar12 + fVar17 * fVar15 * fVar14;
  param_2[3] = fVar13 * 3.4028235e+38 + fVar12 * 3.4028235e+38 + fVar14 * 3.4028235e+38;
  return param_2;
}



float * FUN_1801c13c0(int32_t *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uStack_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_84 = param_1[5];
  uStack_88 = param_1[4];
  uStack_78 = param_1[8];
  uStack_80 = param_1[6];
  uStack_70 = param_1[10];
  uStack_74 = param_1[9];
  uStack_64 = param_1[0xd];
  uStack_68 = param_1[0xc];
  uStack_60 = param_1[0xe];
  uStack_5c = 0x3f800000;
  uStack_8c = 0;
  uStack_7c = 0;
  uStack_6c = 0;
  SystemCore_PerformanceMonitor(&uStack_98,&fStack_58);
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  *param_2 = fVar3 * fStack_48 + fVar2 * fStack_58 + fVar1 * fStack_38 + fStack_28;
  param_2[1] = fStack_54 * fVar2 + fStack_44 * fVar3 + fStack_34 * fVar1 + fStack_24;
  param_2[2] = fStack_50 * fVar2 + fStack_40 * fVar3 + fStack_30 * fVar1 + fStack_20;
  param_2[3] = fStack_4c * fVar2 + fStack_3c * fVar3 + fStack_2c * fVar1 + fStack_1c;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c1560(uint *param_1,uint *param_2)
void FUN_1801c1560(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_38;
  do {
    LOCK();
    uVar1 = *param_1;
    *param_1 = *param_1 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_38 = param_1[1];
  uStack_34 = param_1[2];
  uStack_30 = param_1[3];
  uStack_2c = param_1[4];
  uStack_28 = param_1[5];
  uStack_24 = param_1[6];
  uStack_20 = param_1[7];
  uStack_1c = param_1[8];
  *param_1 = 0;
  *param_2 = uStack_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  param_2[4] = uStack_28;
  param_2[5] = uStack_24;
  param_2[6] = uStack_20;
  param_2[7] = uStack_1c;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)&uStack_38);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c15d0(int64_t param_1,uint *param_2,char param_3)
void FUN_1801c15d0(int64_t param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_38;
  puVar2 = (uint *)((int64_t)param_3 * 0x100 + *(int64_t *)(param_1 + 0x18));
  do {
    LOCK();
    uVar1 = *puVar2;
    *puVar2 = *puVar2 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uStack_38 = puVar2[1];
  uStack_34 = puVar2[2];
  uStack_30 = puVar2[3];
  uStack_2c = puVar2[4];
  uStack_28 = puVar2[5];
  uStack_24 = puVar2[6];
  uStack_20 = puVar2[7];
  uStack_1c = puVar2[8];
  *puVar2 = 0;
  *param_2 = uStack_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  param_2[4] = uStack_28;
  param_2[5] = uStack_24;
  param_2[6] = uStack_20;
  param_2[7] = uStack_1c;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)&uStack_38);
}



float * FUN_1801c1690(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar8 = param_3[1] - param_1[0xd];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  fVar7 = param_1[6];
  fVar9 = *param_3 - param_1[0xc];
  fVar10 = param_3[2] - param_1[0xe];
  *param_2 = param_1[1] * fVar8 + *param_1 * fVar9 + param_1[2] * fVar10;
  param_2[1] = fVar6 * fVar8 + fVar5 * fVar9 + fVar7 * fVar10;
  param_2[2] = fVar2 * fVar8 + fVar1 * fVar9 + fVar3 * fVar10;
  param_2[3] = fVar4 * fVar8 + fVar4 * fVar9 + fVar4 * fVar10;
  return param_2;
}






// 函数: void FUN_1801c1720(float *param_1,int32_t *param_2)
void FUN_1801c1720(float *param_1,int32_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int32_t uVar10;
  float fVar11;
  
  fVar1 = param_1[9];
  fVar2 = param_1[8];
  fVar3 = param_1[10];
  fVar4 = param_1[1];
  fVar5 = param_1[10];
  fVar6 = *param_1;
  fVar7 = param_1[2];
  fVar8 = param_1[4];
  fVar11 = 1.0 / SQRT(fVar8 * fVar8 + param_1[5] * param_1[5] + param_1[6] * param_1[6]);
  fVar9 = param_1[5];
  uVar10 = asinf(fVar11 * param_1[6]);
  *param_2 = uVar10;
  uVar10 = atan2f(-(fVar7 / SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar7 * fVar7)),
                  fVar5 / SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
  param_2[1] = uVar10;
  uVar10 = atan2f(-(fVar8 * fVar11),fVar11 * fVar9);
  param_2[2] = uVar10;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801c1880(void *param_1,int64_t param_2,uint64_t param_3,int8_t *param_4)
void FUN_1801c1880(void *param_1,int64_t param_2,uint64_t param_3,int8_t *param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t auStack_138 [32];
  int8_t auStack_118 [8];
  void **ppuStack_110;
  void *puStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  int32_t uStack_f0;
  int64_t *plStack_e8;
  void *puStack_e0;
  int64_t lStack_d8;
  int32_t uStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int64_t *plStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  int16_t uStack_9c;
  ushort uStack_9a;
  uint64_t uStack_98;
  void *puStack_90;
  uint *puStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  uint auStack_78 [2];
  uint64_t uStack_70;
  int8_t auStack_68 [32];
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int64_t *plStack_38;
  uint64_t uStack_30;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  puStack_90 = &processed_var_672_ptr;
  puStack_88 = auStack_78;
  uStack_80 = 0;
  auStack_78[0] = auStack_78[0] & 0xffffff00;
  if (param_2 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar2) != '\0');
    uStack_80 = (int32_t)lVar2;
    strcpy_s(auStack_78,0x20,param_2);
  }
  uStack_100 = SystemCore_LoggingSystem0(param_1,&puStack_90,1);
  uStack_a0 = 0;
  uStack_9c = 0;
  plStack_e8 = (int64_t *)0x0;
  puStack_e0 = &system_data_buffer_ptr;
  uStack_c8 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  plStack_b0 = (int64_t *)0x0;
  uStack_f0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  auStack_118[0] = 0;
  uVar1 = *(uint64_t *)(param_1 + 0x15b8);
  ppuStack_110 = &puStack_90;
  uStack_f8._4_4_ = (int32_t)(((uint64_t)uStack_9a << 0x30) >> 0x20);
  uStack_80 = 0;
  uStack_7c = uStack_f8._4_4_;
  auStack_78[0] = 0;
  uStack_70 = 0;
  puStack_108 = param_1;
  uStack_f8 = (uint64_t)uStack_9a << 0x30;
  uStack_a8 = uStack_100;
  puStack_90 = param_1;
  puStack_88 = (uint *)uStack_100;
  SystemCore_NetworkHandler0(auStack_68,&puStack_e0);
  uStack_48 = uStack_c0;
  uStack_44 = uStack_bc;
  uStack_40 = uStack_b8;
  uStack_3c = uStack_b4;
  plStack_38 = plStack_b0;
  if (plStack_b0 != (int64_t *)0x0) {
    (**(code **)(*plStack_b0 + 0x28))();
  }
  lVar2 = UIRenderingEngine(uVar1,0,&puStack_90,auStack_118);
  if ((param_4 != (int8_t *)0x0) && (lVar2 == 0)) {
    *param_4 = 0;
  }
  if (plStack_b0 != (int64_t *)0x0) {
    (**(code **)(*plStack_b0 + 0x38))();
  }
  ppuStack_110 = &puStack_e0;
  puStack_e0 = &system_data_buffer_ptr;
  if (lStack_d8 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_d8 = 0;
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  puStack_e0 = &system_state_ptr;
  if (plStack_e8 != (int64_t *)0x0) {
    (**(code **)(*plStack_e8 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_138);
}



uint64_t *
FUN_1801c1aa0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6552_ptr;
  SystemCore_SecurityManager();
  if ((param_2 & 1) != 0) {
    free(param_1,0xe8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




