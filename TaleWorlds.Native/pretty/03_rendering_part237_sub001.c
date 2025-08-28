#include "TaleWorlds.Native.Split.h"

// 03_rendering_part237_sub001.c - 20 个函数

#include "TaleWorlds.Native.Split.h"

// 03_rendering_part237.c - 20 个函数


// 函数: void FUN_18039e97f(uint64_t param_1,int64_t param_2)
void FUN_18039e97f(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar5;
  
  uVar5 = unaff_RBP;
  do {
    cVar1 = (**(code **)(**(int64_t **)(uVar5 + param_2) + 0xc0))();
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(unaff_RSI + 0x30)) + 0x158))();
      uVar3 = (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(unaff_RSI + 0x30)) + 0x198))();
      UI_WidgetHandler(unaff_RSI + 0x70,uVar3,uVar2);
    }
    param_2 = *(int64_t *)(unaff_RSI + 0x30);
    uVar4 = (int)unaff_RBP + 1;
    unaff_RBP = (uint64_t)uVar4;
    uVar5 = uVar5 + 8;
  } while ((uint64_t)(int64_t)(int)uVar4 <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x38) - param_2 >> 3));
  return;
}






// 函数: void FUN_18039e9fc(void)
void FUN_18039e9fc(void)

{
  return;
}






// 函数: void FUN_18039ea10(int64_t param_1,int8_t param_2)
void FUN_18039ea10(int64_t param_1,int8_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(int64_t *)*puVar1 + 0x100))((int64_t *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}



int FUN_18039ea60(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  uint64_t *puVar2;
  int iVar3;
  
  puVar2 = *(uint64_t **)(param_1 + 0x30);
  iVar3 = 0;
  if (puVar2 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      iVar1 = (**(code **)(*(int64_t *)*puVar2 + 0x1a8))((int64_t *)*puVar2,param_2);
      iVar3 = iVar3 + iVar1;
      puVar2 = puVar2 + 1;
    } while (puVar2 < *(uint64_t **)(param_1 + 0x38));
  }
  return iVar3;
}






// 函数: void FUN_18039ead0(int64_t param_1,int32_t param_2)
void FUN_18039ead0(int64_t param_1,int32_t param_2)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(int64_t *)*puVar1 + 0x1b0))((int64_t *)*puVar1,param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}






// 函数: void FUN_18039eb20(int64_t param_1,int32_t param_2,int32_t param_3)
void FUN_18039eb20(int64_t param_1,int32_t param_2,int32_t param_3)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3 != 0) {
    do {
      plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(param_1 + 0x30));
      (**(code **)(*plVar1 + 0x1c0))(plVar1,param_2,param_3);
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3));
  }
  return;
}






// 函数: void FUN_18039eb51(void)
void FUN_18039eb51(void)

{
  int64_t *plVar1;
  int64_t unaff_RBX;
  int32_t unaff_EBP;
  uint64_t uVar2;
  uint unaff_EDI;
  int32_t unaff_R14D;
  
  uVar2 = (uint64_t)unaff_EDI;
  do {
    plVar1 = *(int64_t **)(uVar2 + *(int64_t *)(unaff_RBX + 0x30));
    (**(code **)(*plVar1 + 0x1c0))(plVar1,unaff_R14D,unaff_EBP);
    uVar2 = uVar2 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x38) - *(int64_t *)(unaff_RBX + 0x30) >> 3));
  return;
}






// 函数: void FUN_18039eb96(void)
void FUN_18039eb96(void)

{
  return;
}






// 函数: void FUN_18039ebd0(int64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_18039ebd0(int64_t param_1,uint64_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(int64_t *)*puVar1 + 0x170))((int64_t *)*puVar1,param_2,param_3);
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}






// 函数: void FUN_18039ec40(int64_t param_1,uint64_t *param_2)
void FUN_18039ec40(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  char cVar2;
  
  *(int8_t *)(param_1 + 0xa8) = 0;
  cVar2 = func_0x00018023a100(param_2);
  if (cVar2 != '\0') {
    *(int8_t *)(param_1 + 0xa8) = 1;
  }
  uVar1 = param_2[1];
  *(uint64_t *)(param_1 + 0xac) = *param_2;
  *(uint64_t *)(param_1 + 0xb4) = uVar1;
  uVar1 = param_2[3];
  *(uint64_t *)(param_1 + 0xbc) = param_2[2];
  *(uint64_t *)(param_1 + 0xc4) = uVar1;
  uVar1 = param_2[5];
  *(uint64_t *)(param_1 + 0xcc) = param_2[4];
  *(uint64_t *)(param_1 + 0xd4) = uVar1;
  uVar1 = param_2[7];
  *(uint64_t *)(param_1 + 0xdc) = param_2[6];
  *(uint64_t *)(param_1 + 0xe4) = uVar1;
  return;
}



int FUN_18039ecc0(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  
  iVar2 = 0;
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3 != 0) {
    lVar4 = 0;
    do {
      iVar1 = (**(code **)(**(int64_t **)(lVar4 + *(int64_t *)(param_1 + 0x30)) + 0x180))();
      lVar4 = lVar4 + 8;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + iVar1;
    } while ((uint64_t)(int64_t)iVar3 <
             (uint64_t)(*(int64_t *)(param_1 + 0x38) - *(int64_t *)(param_1 + 0x30) >> 3));
  }
  return iVar2;
}



uint FUN_18039ece7(void)

{
  int iVar1;
  uint unaff_EBX;
  int unaff_EBP;
  uint64_t uVar2;
  int64_t unaff_RDI;
  
  uVar2 = (uint64_t)unaff_EBX;
  do {
    iVar1 = (**(code **)(**(int64_t **)(uVar2 + *(int64_t *)(unaff_RDI + 0x30)) + 0x180))();
    uVar2 = uVar2 + 8;
    unaff_EBP = unaff_EBP + 1;
    unaff_EBX = unaff_EBX + iVar1;
  } while ((uint64_t)(int64_t)unaff_EBP <
           (uint64_t)(*(int64_t *)(unaff_RDI + 0x38) - *(int64_t *)(unaff_RDI + 0x30) >> 3));
  return unaff_EBX;
}



int32_t FUN_18039ed22(void)

{
  int32_t unaff_EBX;
  
  return unaff_EBX;
}



int64_t * FUN_18039ed40(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *aplStackX_18 [2];
  
  plVar1 = (int64_t *)FUN_18039e0a0(param_1,aplStackX_18,param_3,param_4,0,0xfffffffffffffffe);
  plVar1 = (int64_t *)*plVar1;
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return param_2;
}






// 函数: void FUN_18039eda0(uint64_t param_1,uint64_t param_2,int64_t *param_3)
void FUN_18039eda0(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int iVar12;
  uint64_t *puVar13;
  int64_t lVar14;
  int iVar15;
  int64_t lVar16;
  int64_t *plVar17;
  code *pcVar18;
  int64_t lVar19;
  int iVar20;
  int64_t *aplStackX_18 [2];
  int64_t lStack_248;
  int64_t lStack_240;
  uint64_t uStack_238;
  int32_t uStack_230;
  int32_t uStack_228;
  int32_t uStack_224;
  int32_t uStack_220;
  int32_t uStack_21c;
  int32_t uStack_218;
  int32_t uStack_214;
  int32_t uStack_210;
  int32_t uStack_20c;
  int32_t uStack_208;
  int32_t uStack_204;
  int32_t uStack_200;
  int32_t uStack_1fc;
  int32_t uStack_1f8;
  int32_t uStack_1f4;
  int32_t uStack_1f0;
  int32_t uStack_1ec;
  uint64_t uStack_1d8;
  int64_t lStack_1d0;
  uint64_t uStack_1c8;
  int64_t lStack_1c0;
  int32_t uStack_1b8;
  int32_t uStack_1b4;
  int32_t uStack_1b0;
  int32_t uStack_1ac;
  uint64_t uStack_1a8;
  int64_t lStack_1a0;
  uint64_t uStack_198;
  uint64_t uStack_190;
  uint64_t uStack_188;
  uint64_t uStack_180;
  int32_t uStack_178;
  int32_t uStack_174;
  int32_t uStack_170;
  int32_t uStack_16c;
  int32_t uStack_168;
  int32_t uStack_164;
  int32_t uStack_160;
  int32_t uStack_15c;
  uint64_t uStack_158;
  uint64_t uStack_150;
  uint64_t uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  int32_t uStack_130;
  int32_t uStack_12c;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int8_t auStack_108 [224];
  
  uStack_158 = 0xfffffffffffffffe;
  lStack_248 = 0;
  lStack_240 = 0;
  uStack_238 = 0;
  uStack_230 = 3;
  aplStackX_18[0] = param_3;
  NetworkSystem_SecurityManager(param_3,&lStack_248);
  SystemSecurity_Manager(&lStack_248,aplStackX_18);
  uStack_1d8 = param_3[0xe];
  lStack_1d0 = param_3[0xf];
  lVar14 = param_3[0x10];
  lStack_1c0 = param_3[0x11];
  uVar2 = (int32_t)param_3[0x12];
  uVar3 = *(int32_t *)((int64_t)param_3 + 0x94);
  uVar4 = (int32_t)param_3[0x13];
  uStack_1ac = *(int32_t *)((int64_t)param_3 + 0x9c);
  lVar16 = param_3[0x14];
  lStack_1a0 = param_3[0x15];
  iVar20 = 0;
  uStack_1c8 = lVar14;
  uStack_1b8 = uVar2;
  uStack_1b4 = uVar3;
  uStack_1b0 = uVar4;
  uStack_1a8 = lVar16;
  if (lStack_240 - lStack_248 >> 3 != 0) {
    lVar19 = 0;
    uVar11 = (int32_t)lStack_1a0;
    uStack_1a8._4_4_ = (int32_t)((uint64_t)lVar16 >> 0x20);
    uVar10 = uStack_1a8._4_4_;
    uStack_1a8._0_4_ = (int32_t)lVar16;
    uVar9 = (int32_t)uStack_1a8;
    uVar8 = (int32_t)lStack_1c0;
    uStack_1c8._4_4_ = (int32_t)((uint64_t)lVar14 >> 0x20);
    uVar7 = uStack_1c8._4_4_;
    uStack_1c8._0_4_ = (int32_t)lVar14;
    uVar6 = (int32_t)uStack_1c8;
    uVar5 = (int32_t)lStack_1d0;
    lVar14 = lStack_248;
    lVar16 = lStack_240;
    do {
      lVar1 = *(int64_t *)(lVar19 + lVar14);
      iVar15 = 0;
      if (0 < (int)(*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3)) {
        do {
          FUN_1802ed230(lVar1,aplStackX_18,iVar15);
          iVar12 = (**(code **)(*aplStackX_18[0] + 0x98))();
          if (iVar12 == 4) {
            FUN_1802ae9a0(aplStackX_18[0],param_2);
          }
          pcVar18 = *(code **)(*aplStackX_18[0] + 0x148);
          uStack_228 = (int32_t)uStack_1d8;
          uStack_224 = uStack_1d8._4_4_;
          uStack_220 = uVar5;
          uStack_21c = 0;
          uStack_218 = uVar6;
          uStack_214 = uVar7;
          uStack_210 = uVar8;
          uStack_20c = 0;
          uStack_1fc = 0;
          uStack_1f8 = uVar9;
          uStack_1f4 = uVar10;
          uStack_1f0 = uVar11;
          uStack_1ec = 0x3f800000;
          plVar17 = aplStackX_18[0];
          uStack_208 = uVar2;
          uStack_204 = uVar3;
          uStack_200 = uVar4;
          SystemCore_PerformanceMonitor(&uStack_228,auStack_108);
          uStack_198 = *(uint64_t *)(lVar1 + 0x70);
          uStack_188 = *(uint64_t *)(lVar1 + 0x80);
          uStack_178 = *(int32_t *)(lVar1 + 0x90);
          uStack_174 = *(int32_t *)(lVar1 + 0x94);
          uStack_170 = *(int32_t *)(lVar1 + 0x98);
          uStack_168 = *(int32_t *)(lVar1 + 0xa0);
          uStack_164 = *(int32_t *)(lVar1 + 0xa4);
          uStack_160 = *(int32_t *)(lVar1 + 0xa8);
          uStack_190 = *(uint64_t *)(lVar1 + 0x78) & 0xffffffff;
          uStack_180 = *(uint64_t *)(lVar1 + 0x88) & 0xffffffff;
          uStack_16c = 0;
          uStack_15c = 0x3f800000;
          puVar13 = (uint64_t *)ErrorRecoverySystem(&uStack_198,&uStack_228,auStack_108);
          uStack_150 = *puVar13;
          uStack_148 = puVar13[1];
          uStack_140 = puVar13[2];
          uStack_138 = puVar13[3];
          uStack_130 = *(int32_t *)(puVar13 + 4);
          uStack_12c = *(int32_t *)((int64_t)puVar13 + 0x24);
          uStack_128 = *(int32_t *)(puVar13 + 5);
          uStack_124 = *(int32_t *)((int64_t)puVar13 + 0x2c);
          uStack_120 = *(int32_t *)(puVar13 + 6);
          uStack_11c = *(int32_t *)((int64_t)puVar13 + 0x34);
          uStack_118 = *(int32_t *)(puVar13 + 7);
          uStack_114 = *(int32_t *)((int64_t)puVar13 + 0x3c);
          (*pcVar18)(plVar17,&uStack_150);
          FUN_18039f160(param_1,aplStackX_18[0]);
          if (aplStackX_18[0] != (int64_t *)0x0) {
            (**(code **)(*aplStackX_18[0] + 0x38))();
          }
          iVar15 = iVar15 + 1;
          lVar14 = lStack_248;
          lVar16 = lStack_240;
        } while (iVar15 < (int)(*(int64_t *)(lVar1 + 0xf8) - *(int64_t *)(lVar1 + 0xf0) >> 3));
      }
      iVar20 = iVar20 + 1;
      lVar19 = lVar19 + 8;
    } while ((uint64_t)(int64_t)iVar20 < (uint64_t)(lVar16 - lVar14 >> 3));
  }
  if (lStack_248 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}






// 函数: void FUN_18039f110(int64_t param_1)
void FUN_18039f110(int64_t param_1)

{
  uint64_t *puVar1;
  
  puVar1 = *(uint64_t **)(param_1 + 0x30);
  if (puVar1 < *(uint64_t **)(param_1 + 0x38)) {
    do {
      (**(code **)(*(int64_t *)*puVar1 + 0xd8))();
      puVar1 = puVar1 + 1;
    } while (puVar1 < *(uint64_t **)(param_1 + 0x38));
  }
  return;
}






// 函数: void FUN_18039f160(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_18039f160(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plStackX_8;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  (**(code **)(*param_2 + 0x1e0))
            (param_2,*(uint64_t *)(param_1 + 0x28),param_3,param_4,0xfffffffffffffffe);
  plStackX_8 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  FUN_1800b87c0(param_1 + 0x30,&plStackX_8);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  cVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  if (cVar2 != '\0') {
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1800b87c0(param_1 + 0x50,&plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    *(int8_t *)(param_1 + 0xaa) = 1;
    if ((((*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) & 0xfffffffffffffff8U) == 8
         ) && (*(int64_t *)(param_1 + 0x28) != 0)) &&
       (lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x260), lVar1 != 0)) {
      cVar2 = FUN_1802fc790(lVar1,param_1);
      if (cVar2 != -1) {
        FUN_180300eb0(*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x260),cVar2);
      }
    }
  }
  FUN_18039e8f0(param_1);
  uStack_18 = (int32_t)param_1;
  uStack_14 = (int32_t)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(param_2 + 2) = 2;
  *(int32_t *)((int64_t)param_2 + 0x14) = uStack_1c;
  *(int32_t *)(param_2 + 3) = uStack_18;
  *(int32_t *)((int64_t)param_2 + 0x1c) = uStack_14;
  param_2[4] = 0;
  if ((*(int64_t *)(param_1 + 0x28) != 0) &&
     (*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x20) != 0)) {
    FUN_1802548a0(param_2);
  }
  return;
}



uint64_t FUN_18039f2b0(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  int32_t uStack_24;
  
  plVar1 = *(int64_t **)(param_1 + 0x38);
  plVar6 = *(int64_t **)(param_1 + 0x30);
  if (plVar6 != plVar1) {
    do {
      if ((int64_t *)*plVar6 == param_2) break;
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    if (plVar6 != plVar1) {
      if ((*(int64_t *)(param_1 + 0x28) != 0) &&
         (*(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x20) != 0)) {
        FUN_1802549d0(param_2);
      }
      (**(code **)(*param_2 + 0x1e0))(param_2,0);
      *(int32_t *)(param_2 + 2) = 4;
      *(int32_t *)((int64_t)param_2 + 0x14) = uStack_24;
      *(int32_t *)(param_2 + 3) = 0;
      *(int32_t *)((int64_t)param_2 + 0x1c) = 0;
      param_2[4] = 0;
      FUN_1800ba050(param_1 + 0x30,plVar6);
      puVar2 = *(uint64_t **)(param_1 + 0x58);
      puVar5 = *(uint64_t **)(param_1 + 0x50);
      if (puVar5 != puVar2) {
        do {
          if ((int64_t *)*puVar5 == param_2) break;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar2);
        if ((((puVar5 != puVar2) &&
             (FUN_1800ba050(param_1 + 0x50),
             (*(int64_t *)(param_1 + 0x58) - *(int64_t *)(param_1 + 0x50) & 0xfffffffffffffff8U)
             == 0)) && (*(int64_t *)(param_1 + 0x28) != 0)) &&
           ((lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x28) + 0x260), lVar3 != 0 &&
            (cVar4 = FUN_1802fc790(lVar3,param_1), cVar4 != -1)))) {
          FUN_1802f9e70((int64_t)cVar4 * 0x100 + *(int64_t *)(lVar3 + 0x18),lVar3);
        }
      }
      FUN_18039e8f0(param_1);
      return 1;
    }
  }
  return 0;
}



uint64_t FUN_18039f3e0(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  
  lVar2 = *(int64_t *)(param_1 + 0x30);
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x38) - lVar2 >> 3 != 0) {
    lVar4 = 0;
    do {
      if (((void *)**(uint64_t **)(lVar4 + lVar2) != &processed_var_9656_ptr) &&
         (iVar1 = (**(code **)((void *)**(uint64_t **)(lVar4 + lVar2) + 0x98))(), iVar1 == 0)
         ) {
        return *(uint64_t *)(*(int64_t *)(param_1 + 0x30) + (int64_t)iVar3 * 8);
      }
      lVar2 = *(int64_t *)(param_1 + 0x30);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x38) - lVar2 >> 3));
  }
  return 0;
}



uint64_t FUN_18039f480(int64_t param_1,int32_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar4 = *(int64_t *)(param_1 + 0x30);
  if (*(int64_t *)(param_1 + 0x38) - lVar4 >> 3 != 0) {
    lVar3 = 0;
    do {
      if (((void *)**(uint64_t **)(lVar3 + lVar4) != &processed_var_9656_ptr) &&
         (iVar2 = (**(code **)((void *)**(uint64_t **)(lVar3 + lVar4) + 0x98))(), iVar2 == 0)
         ) {
        plVar1 = *(int64_t **)(lVar3 + *(int64_t *)(param_1 + 0x30));
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
        }
        (**(code **)(*plVar1 + 0xb8))(plVar1,param_2,param_3);
        (**(code **)(*plVar1 + 0x38))(plVar1);
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 8;
      lVar4 = *(int64_t *)(param_1 + 0x30);
    } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(*(int64_t *)(param_1 + 0x38) - lVar4 >> 3));
  }
  return 0;
}






// 函数: void FUN_18039f590(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18039f590(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,int32_t param_6,uint64_t param_7,int8_t param_8,
                  uint64_t param_9)

{
  int64_t *plVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  
  lVar5 = *(int64_t *)(param_1 + 0x30);
  iVar3 = 0;
  if (*(int64_t *)(param_1 + 0x38) - lVar5 >> 3 != 0) {
    lVar4 = 0;
    do {
      plVar1 = *(int64_t **)(lVar4 + lVar5);
      if (((void *)*plVar1 != &processed_var_9656_ptr) &&
         (iVar2 = (**(code **)((void *)*plVar1 + 0x98))(plVar1), iVar2 == 0)) {
        (**(code **)(*plVar1 + 0x208))
                  (plVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      }
      lVar5 = *(int64_t *)(param_1 + 0x30);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar3 < (uint64_t)(*(int64_t *)(param_1 + 0x38) - lVar5 >> 3));
  }
  return;
}






// 函数: void FUN_18039f5c2(void)
void FUN_18039f5c2(void)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint unaff_ESI;
  uint64_t unaff_RDI;
  uint64_t uVar3;
  int64_t in_R10;
  int64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  uint64_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
  uVar3 = (uint64_t)unaff_ESI;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  do {
    plVar1 = *(int64_t **)(uVar3 + in_R10);
    if ((void *)*plVar1 != &processed_var_9656_ptr) {
      iVar2 = (**(code **)((void *)*plVar1 + 0x98))(plVar1);
      if (iVar2 == 0) {
        (**(code **)(*plVar1 + 0x208))
                  (plVar1,in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0);
      }
    }
    in_R10 = *(int64_t *)(unaff_RBP + 0x30);
    unaff_ESI = unaff_ESI + 1;
    uVar3 = uVar3 + 8;
  } while ((uint64_t)(int64_t)(int)unaff_ESI <
           (uint64_t)(*(int64_t *)(unaff_RBP + 0x38) - in_R10 >> 3));
  return;
}






// 函数: void FUN_18039f655(void)
void FUN_18039f655(void)

{
  return;
}






// 函数: void FUN_18039f65c(void)
void FUN_18039f65c(void)

{
  int iVar1;
  void *in_RAX;
  int64_t *unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t unaff_RDI;
  uint64_t in_stack_00000098;
  uint64_t in_stack_000000a0;
  uint64_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  
  do {
    iVar1 = (**(code **)(in_RAX + 0x98))(unaff_RBX);
    if (iVar1 == 0) {
      (**(code **)(*unaff_RBX + 0x208))
                (unaff_RBX,in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0);
    }
    do {
      unaff_ESI = unaff_ESI + 1;
      unaff_RDI = unaff_RDI + 8;
      if ((uint64_t)(*(int64_t *)(unaff_RBP + 0x38) - *(int64_t *)(unaff_RBP + 0x30) >> 3) <=
          (uint64_t)(int64_t)unaff_ESI) {
        return;
      }
      unaff_RBX = *(int64_t **)(unaff_RDI + *(int64_t *)(unaff_RBP + 0x30));
      in_RAX = (void *)*unaff_RBX;
    } while (in_RAX == &processed_var_9656_ptr);
  } while( true );
}






// 函数: void FUN_18039f6c0(int64_t param_1,int32_t param_2,float *param_3)
void FUN_18039f6c0(int64_t param_1,int32_t param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t *plVar6;
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
  char cVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint uVar22;
  uint64_t uVar23;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar20 = *(int64_t *)(param_1 + 0x50);
  uVar21 = 0;
  uVar23 = uVar21;
  if (*(int64_t *)(param_1 + 0x58) - lVar20 >> 3 != 0) {
    do {
      fVar7 = *param_3;
      fVar8 = param_3[1];
      fVar9 = param_3[2];
      fVar10 = param_3[3];
      plVar6 = *(int64_t **)(uVar21 + lVar20);
      fVar11 = param_3[4];
      fVar12 = param_3[5];
      fVar13 = param_3[6];
      fVar14 = param_3[7];
      fVar15 = param_3[8];
      fVar16 = param_3[9];
      fVar17 = param_3[10];
      fVar18 = param_3[0xb];
      fVar1 = *(float *)(param_1 + 0xb0);
      fVar2 = *(float *)(param_1 + 0xac);
      fVar3 = *(float *)(param_1 + 0xb4);
      fVar4 = *(float *)(param_1 + 0xbc);
      fVar5 = *(float *)(param_1 + 0xc0);
      fStack_78 = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
      fStack_74 = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
      fStack_70 = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17;
      fStack_6c = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar18;
      fVar1 = *(float *)(param_1 + 0xc4);
      fVar2 = *(float *)(param_1 + 0xd0);
      fVar3 = *(float *)(param_1 + 0xcc);
      fStack_68 = fVar4 * fVar7 + fVar5 * fVar11 + fVar1 * fVar15;
      fStack_64 = fVar4 * fVar8 + fVar5 * fVar12 + fVar1 * fVar16;
      fStack_60 = fVar4 * fVar9 + fVar5 * fVar13 + fVar1 * fVar17;
      fStack_5c = fVar4 * fVar10 + fVar5 * fVar14 + fVar1 * fVar18;
      fVar1 = *(float *)(param_1 + 0xd4);
      fVar4 = *(float *)(param_1 + 0xdc);
      fVar5 = *(float *)(param_1 + 0xe0);
      fStack_58 = fVar3 * fVar7 + fVar2 * fVar11 + fVar1 * fVar15;
      fStack_54 = fVar3 * fVar8 + fVar2 * fVar12 + fVar1 * fVar16;
      fStack_50 = fVar3 * fVar9 + fVar2 * fVar13 + fVar1 * fVar17;
      fStack_4c = fVar3 * fVar10 + fVar2 * fVar14 + fVar1 * fVar18;
      fVar1 = *(float *)(param_1 + 0xe4);
      fStack_48 = fVar4 * fVar7 + fVar5 * fVar11 + fVar1 * fVar15 + param_3[0xc];
      fStack_44 = fVar4 * fVar8 + fVar5 * fVar12 + fVar1 * fVar16 + param_3[0xd];
      fStack_40 = fVar4 * fVar9 + fVar5 * fVar13 + fVar1 * fVar17 + param_3[0xe];
      fStack_3c = fVar4 * fVar10 + fVar5 * fVar14 + fVar1 * fVar18 + param_3[0xf];
      (**(code **)(*plVar6 + 0x1b8))(plVar6,param_2,&fStack_78);
      cVar19 = (**(code **)(*plVar6 + 0x138))(plVar6);
      if ((cVar19 != '\0') && (*(int64_t *)(param_1 + 0x28) != 0)) {
        FUN_1801985e0(*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x20),plVar6,1,param_1,0);
      }
      lVar20 = *(int64_t *)(param_1 + 0x50);
      uVar22 = (int)uVar23 + 1;
      uVar21 = uVar21 + 8;
      uVar23 = (uint64_t)uVar22;
    } while ((uint64_t)(int64_t)(int)uVar22 <
             (uint64_t)(*(int64_t *)(param_1 + 0x58) - lVar20 >> 3));
  }
  return;
}






// 函数: void FUN_18039f6fe(uint64_t param_1,int64_t param_2)
void FUN_18039f6fe(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t *plVar6;
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
  char cVar19;
  int64_t unaff_RBX;
  float *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t uVar20;
  int unaff_EDI;
  int64_t in_R11;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RSI;
  uVar20 = unaff_R15 & 0xffffffff;
  *(uint64_t *)(in_R11 + 0x10) = unaff_R14;
  *(int32_t *)(in_R11 + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x1c) = unaff_XMM6_Dd;
  do {
    fVar7 = *unaff_RBP;
    fVar8 = unaff_RBP[1];
    fVar9 = unaff_RBP[2];
    fVar10 = unaff_RBP[3];
    plVar6 = *(int64_t **)(uVar20 + param_2);
    fVar11 = unaff_RBP[4];
    fVar12 = unaff_RBP[5];
    fVar13 = unaff_RBP[6];
    fVar14 = unaff_RBP[7];
    fVar15 = unaff_RBP[8];
    fVar16 = unaff_RBP[9];
    fVar17 = unaff_RBP[10];
    fVar18 = unaff_RBP[0xb];
    fVar1 = *(float *)(unaff_RBX + 0xb0);
    fVar2 = *(float *)(unaff_RBX + 0xac);
    fVar3 = *(float *)(unaff_RBX + 0xb4);
    fVar4 = *(float *)(unaff_RBX + 0xbc);
    fVar5 = *(float *)(unaff_RBX + 0xc0);
    fStack0000000000000030 = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
    fStack0000000000000034 = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
    fStack0000000000000038 = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17;
    fStack000000000000003c = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0xc4);
    fVar2 = *(float *)(unaff_RBX + 0xd0);
    fVar3 = *(float *)(unaff_RBX + 0xcc);
    fStack0000000000000040 = fVar4 * fVar7 + fVar5 * fVar11 + fVar1 * fVar15;
    fStack0000000000000044 = fVar4 * fVar8 + fVar5 * fVar12 + fVar1 * fVar16;
    fStack0000000000000048 = fVar4 * fVar9 + fVar5 * fVar13 + fVar1 * fVar17;
    fStack000000000000004c = fVar4 * fVar10 + fVar5 * fVar14 + fVar1 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0xd4);
    fVar4 = *(float *)(unaff_RBX + 0xdc);
    fVar5 = *(float *)(unaff_RBX + 0xe0);
    fStack0000000000000050 = fVar3 * fVar7 + fVar2 * fVar11 + fVar1 * fVar15;
    fStack0000000000000054 = fVar3 * fVar8 + fVar2 * fVar12 + fVar1 * fVar16;
    fStack0000000000000058 = fVar3 * fVar9 + fVar2 * fVar13 + fVar1 * fVar17;
    fStack000000000000005c = fVar3 * fVar10 + fVar2 * fVar14 + fVar1 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0xe4);
    fStack0000000000000060 = fVar4 * fVar7 + fVar5 * fVar11 + fVar1 * fVar15 + unaff_RBP[0xc];
    fStack0000000000000064 = fVar4 * fVar8 + fVar5 * fVar12 + fVar1 * fVar16 + unaff_RBP[0xd];
    fStack0000000000000068 = fVar4 * fVar9 + fVar5 * fVar13 + fVar1 * fVar17 + unaff_RBP[0xe];
    fStack000000000000006c = fVar4 * fVar10 + fVar5 * fVar14 + fVar1 * fVar18 + unaff_RBP[0xf];
    (**(code **)(*plVar6 + 0x1b8))(plVar6,param_2,&stack0x00000030);
    cVar19 = (**(code **)(*plVar6 + 0x138))(plVar6);
    if ((cVar19 != '\0') && (*(int64_t *)(unaff_RBX + 0x28) != 0)) {
      FUN_1801985e0(*(uint64_t *)(*(int64_t *)(unaff_RBX + 0x28) + 0x20),plVar6,1);
    }
    param_2 = *(int64_t *)(unaff_RBX + 0x50);
    unaff_EDI = unaff_EDI + 1;
    uVar20 = uVar20 + 8;
  } while ((uint64_t)(int64_t)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0x58) - param_2 >> 3));
  return;
}






// 函数: void FUN_18039f887(void)
void FUN_18039f887(void)

{
  return;
}






