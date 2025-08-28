#include "TaleWorlds.Native.Split.h"

// 03_rendering_part689.c - 9 个函数

// 函数: void FUN_18065edd0(void)
void FUN_18065edd0(void)

{
  int unaff_EBX;
  int64_t unaff_RBP;
  int64_t *unaff_RDI;
  float *unaff_R14;
  float unaff_XMM12_Da;
  float unaff_XMM15_Da;
  
  do {
    if ((*unaff_RDI != 0) && (unaff_XMM15_Da < unaff_XMM12_Da * *unaff_R14)) {
      FUN_180403910();
    }
    unaff_EBX = unaff_EBX + 1;
    unaff_R14 = unaff_R14 + 1;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_EBX < 0x12);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0xfb0) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Possible PIC construction at 0x00018065f1c5: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018065f1ca)



// 函数: void FUN_18065ee60(int64_t param_1,float *param_2,int32_t param_3,int32_t param_4,
void FUN_18065ee60(int64_t param_1,float *param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float *pfVar4;
  int64_t lVar5;
  int8_t uVar6;
  uint64_t *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t uVar12;
  float fStackX_10;
  int32_t uStackX_14;
  
  pfVar4 = param_6;
  pfVar4[0] = 0.0;
  pfVar4[1] = 0.0;
  pfVar4[2] = 0.0;
  pfVar4[3] = 0.0;
  param_6[4] = 0.0;
  pfVar4[6] = 0.0;
  pfVar4[7] = 0.0;
  pfVar4[8] = 0.0;
  pfVar4[9] = 0.0;
  param_6[10] = 0.0;
  fVar9 = *param_2;
  fVar10 = param_2[9];
  if (0.0 < fVar10) {
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    fVar11 = *(float *)(lVar5 + 0x14) - *(float *)(lVar5 + 0x1c);
    if (fVar11 < 0.0) {
      fVar11 = fVar11 + 1.0;
    }
    fVar1 = *(float *)(lVar5 + 0xc);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    fVar2 = *(float *)(lVar5 + 0x14);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    param_6._0_4_ = fVar2;
    param_6._4_4_ = fmodf(fVar2 + *(float *)(lVar5 + 0xc),0x3f800000);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    func_0x000180669850(pfVar4,*(int32_t *)(lVar5 + 0xc),&param_6,fVar11 + fVar1,param_4,fVar10);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    fVar11 = *(float *)(lVar5 + 0x18) - *(float *)(lVar5 + 0x20);
    if (fVar11 < 0.0) {
      fVar11 = fVar11 + 1.0;
    }
    fVar1 = *(float *)(lVar5 + 0x10);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    fVar2 = *(float *)(lVar5 + 0x18);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    param_6._0_4_ = fVar2;
    param_6._4_4_ = fmodf(fVar2 + *(float *)(lVar5 + 0x10),0x3f800000);
    lVar5 = FUN_18065fd40(*(uint64_t *)(param_1 + 0x48));
    func_0x000180669850(pfVar4 + 6,*(int32_t *)(lVar5 + 0x10),&param_6,fVar11 + fVar1,param_4,
                        fVar10);
  }
  if (((fVar9 * 6.0 - 15.0) * fVar9 + 10.0) * fVar9 * fVar9 * fVar9 + fVar10 < 1.0) {
    puVar7 = (uint64_t *)(param_1 + 8);
    iVar8 = 1;
    do {
      param_2 = param_2 + 1;
      fVar9 = *param_2;
      if (0.0 < fVar9) {
        uVar12 = param_5;
        if (1 < iVar8 - 7U) {
          uVar12 = param_3;
        }
        lVar5 = FUN_18065fd40(*puVar7);
        fVar10 = *(float *)(lVar5 + 0x14) - *(float *)(lVar5 + 0x1c);
        if (fVar10 < 0.0) {
          fVar10 = fVar10 + 1.0;
        }
        fVar11 = *(float *)(lVar5 + 0xc);
        lVar5 = FUN_18065fd40(*puVar7);
        fVar1 = *(float *)(lVar5 + 0x14);
        lVar5 = FUN_18065fd40(*puVar7);
        param_6._0_4_ = fVar1;
        param_6._4_4_ = fmodf(fVar1 + *(float *)(lVar5 + 0xc),0x3f800000);
        lVar5 = FUN_18065fd40(*puVar7);
        func_0x000180669850(pfVar4,*(int32_t *)(lVar5 + 0xc),&param_6,fVar10 + fVar11,uVar12,
                            fVar9);
        fVar9 = *param_2;
        lVar5 = FUN_18065fd40(*puVar7);
        fVar10 = *(float *)(lVar5 + 0x18) - *(float *)(lVar5 + 0x20);
        if (fVar10 < 0.0) {
          fVar10 = fVar10 + 1.0;
        }
        fVar11 = *(float *)(lVar5 + 0x10);
        lVar5 = FUN_18065fd40(*puVar7);
        fVar1 = *(float *)(lVar5 + 0x18);
        lVar5 = FUN_18065fd40(*puVar7);
        fStackX_10 = fVar1;
        uStackX_14 = fmodf(fVar1 + *(float *)(lVar5 + 0x10),0x3f800000);
        lVar5 = FUN_18065fd40(*puVar7);
        func_0x000180669850(pfVar4 + 6,*(int32_t *)(lVar5 + 0x10),&fStackX_10,fVar10 + fVar11,
                            uVar12,fVar9);
      }
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 9);
  }
  cVar3 = *(char *)((int64_t)pfVar4 + 0x16);
  fVar9 = 0.0;
  if (cVar3 == '\0') {
    fVar10 = 0.0;
  }
  else {
    fVar10 = pfVar4[4] * 0.05;
  }
  fVar11 = *pfVar4;
  fVar1 = pfVar4[3];
  if ((fVar11 + fVar10 < fVar1) || (cVar3 != '\0')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(int8_t *)(pfVar4 + 5) = uVar6;
  if (cVar3 != '\0') {
    fVar9 = pfVar4[4] * 0.05;
  }
  fVar10 = fVar11 + 0.2;
  *(bool *)((int64_t)pfVar4 + 0x16) = fVar1 <= fVar11 + fVar9;
  if ((fVar1 <= fVar10) && (*(char *)((int64_t)pfVar4 + 0x17) == '\0')) {
    *(int8_t *)((int64_t)pfVar4 + 0x15) = 1;
    *(bool *)((int64_t)pfVar4 + 0x17) = fVar1 <= fVar10;
    return;
  }
  *(int8_t *)((int64_t)pfVar4 + 0x15) = 0;
  *(bool *)((int64_t)pfVar4 + 0x17) = fVar1 <= fVar10;
  return;
}



// WARNING: Possible PIC construction at 0x00018065f1c5: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018065f1ca)



// 函数: void FUN_18065f057(void)
void FUN_18065f057(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int64_t lVar4;
  int8_t uVar5;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  float *pfVar6;
  int iVar7;
  float *unaff_R15;
  int32_t extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  float unaff_XMM8_Da;
  int32_t uVar10;
  float unaff_XMM10_Da;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM13_Da;
  float fStack00000000000000d8;
  int32_t uStack00000000000000dc;
  float fStack00000000000000f8;
  int32_t uStack00000000000000fc;
  
  pfVar6 = (float *)(unaff_RSI + 4);
  iVar7 = 1;
  do {
    if (unaff_XMM10_Da < *pfVar6) {
      uVar10 = unaff_XMM12_Da;
      if (1 < iVar7 - 7U) {
        uVar10 = unaff_XMM13_Da;
      }
      lVar4 = FUN_18065fd40(*unaff_RBX);
      fVar9 = *(float *)(lVar4 + 0x14) - *(float *)(lVar4 + 0x1c);
      if (fVar9 < unaff_XMM10_Da) {
        fVar9 = fVar9 + unaff_XMM8_Da;
      }
      fVar8 = *(float *)(lVar4 + 0xc);
      lVar4 = FUN_18065fd40(*unaff_RBX);
      fVar1 = *(float *)(lVar4 + 0x14);
      lVar4 = FUN_18065fd40(*unaff_RBX);
      fStack00000000000000f8 = fVar1;
      uStack00000000000000fc = fmodf(fVar1 + *(float *)(lVar4 + 0xc));
      lVar4 = FUN_18065fd40(*unaff_RBX);
      func_0x000180669850(extraout_XMM0_Da,*(int32_t *)(lVar4 + 0xc),&stack0x000000f8,
                          fVar9 + fVar8,uVar10);
      lVar4 = FUN_18065fd40(*unaff_RBX);
      fVar9 = *(float *)(lVar4 + 0x18) - *(float *)(lVar4 + 0x20);
      if (fVar9 < unaff_XMM10_Da) {
        fVar9 = fVar9 + unaff_XMM8_Da;
      }
      fVar8 = *(float *)(lVar4 + 0x10);
      lVar4 = FUN_18065fd40(*unaff_RBX);
      fVar1 = *(float *)(lVar4 + 0x18);
      lVar4 = FUN_18065fd40(*unaff_RBX);
      fStack00000000000000d8 = fVar1;
      uStack00000000000000dc = fmodf(fVar1 + *(float *)(lVar4 + 0x10));
      lVar4 = FUN_18065fd40(*unaff_RBX);
      func_0x000180669850(unaff_R15 + 6,*(int32_t *)(lVar4 + 0x10),&stack0x000000d8,fVar9 + fVar8
                          ,uVar10);
    }
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar6 + 1;
    unaff_RBX = unaff_RBX + 1;
  } while (iVar7 < 9);
  cVar3 = *(char *)((int64_t)unaff_R15 + 0x16);
  fVar9 = 0.0;
  if (cVar3 == '\0') {
    fVar8 = 0.0;
  }
  else {
    fVar8 = unaff_R15[4] * 0.05;
  }
  fVar1 = *unaff_R15;
  fVar2 = unaff_R15[3];
  if ((fVar1 + fVar8 < fVar2) || (cVar3 != '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  *(int8_t *)(unaff_R15 + 5) = uVar5;
  if (cVar3 != '\0') {
    fVar9 = unaff_R15[4] * 0.05;
  }
  fVar8 = fVar1 + 0.2;
  *(bool *)((int64_t)unaff_R15 + 0x16) = fVar2 <= fVar1 + fVar9;
  if ((fVar2 <= fVar8) && (*(char *)((int64_t)unaff_R15 + 0x17) == '\0')) {
    *(int8_t *)((int64_t)unaff_R15 + 0x15) = 1;
    *(bool *)((int64_t)unaff_R15 + 0x17) = fVar2 <= fVar8;
    return;
  }
  *(int8_t *)((int64_t)unaff_R15 + 0x15) = 0;
  *(bool *)((int64_t)unaff_R15 + 0x17) = fVar2 <= fVar8;
  return;
}



// WARNING: Possible PIC construction at 0x00018065f1c5: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00018065f1ca)



// 函数: void FUN_18065f1c2(void)
void FUN_18065f1c2(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int8_t uVar4;
  float *unaff_R15;
  float fVar5;
  float fVar6;
  
  cVar3 = *(char *)((int64_t)unaff_R15 + 0x16);
  fVar5 = 0.0;
  if (cVar3 == '\0') {
    fVar6 = 0.0;
  }
  else {
    fVar6 = unaff_R15[4] * 0.05;
  }
  fVar1 = *unaff_R15;
  fVar2 = unaff_R15[3];
  if ((fVar1 + fVar6 < fVar2) || (cVar3 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(int8_t *)(unaff_R15 + 5) = uVar4;
  if (cVar3 != '\0') {
    fVar5 = unaff_R15[4] * 0.05;
  }
  fVar6 = fVar1 + 0.2;
  *(bool *)((int64_t)unaff_R15 + 0x16) = fVar2 <= fVar1 + fVar5;
  if ((fVar2 <= fVar6) && (*(char *)((int64_t)unaff_R15 + 0x17) == '\0')) {
    *(int8_t *)((int64_t)unaff_R15 + 0x15) = 1;
    *(bool *)((int64_t)unaff_R15 + 0x17) = fVar2 <= fVar6;
    return;
  }
  *(int8_t *)((int64_t)unaff_R15 + 0x15) = 0;
  *(bool *)((int64_t)unaff_R15 + 0x17) = fVar2 <= fVar6;
  return;
}





// 函数: void FUN_18065f210(void)
void FUN_18065f210(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18065fa20(int64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_18065fa20(int64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,float param_6,float param_7,float param_8,float param_9,
                  float param_10,float param_11,char param_12)

{
  uint64_t uVar1;
  int64_t lVar2;
  char cVar3;
  int8_t uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auStackX_10 [8];
  uint64_t uStackX_18;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uStack_f8;
  int64_t lStack_f0;
  char cStack_e8;
  uint64_t uStack_e0;
  int64_t lStack_d8;
  char cStack_d0;
  uint64_t uStack_c8;
  int8_t auStack_b8 [32];
  int8_t auStack_98 [96];
  
  uStack_c8 = 0xfffffffffffffffe;
  uVar1 = *(uint64_t *)(param_2 + 0x208);
  fVar7 = (1.0 - param_10) - param_11;
  iVar5 = 0;
  uStackX_18 = param_3;
  do {
    fVar6 = param_10;
    switch(iVar5) {
    case 0:
      fVar6 = fVar7 * param_9;
      break;
    case 1:
      fVar6 = (1.0 - param_9) * fVar7;
      break;
    case 2:
      goto joined_r0x00018065faf6;
    case 3:
      fVar6 = param_11;
joined_r0x00018065faf6:
      if (param_12 == '\0') break;
      goto LAB_18065fce5;
    case 4:
      goto joined_r0x00018065fb15;
    case 5:
      fVar6 = param_11;
joined_r0x00018065fb15:
      if (param_12 != '\0') break;
    default:
      goto LAB_18065fce5;
    }
    fVar6 = param_8 * fVar6;
    if (0.001 < fVar6) {
      fVar8 = param_6;
      if (iVar5 - 2U < 4) {
        fVar8 = param_7;
      }
      uVar9 = (uint64_t)(uint)fVar6;
      uVar10 = uVar1;
      FUN_180403910(*param_1,param_3,param_3,fVar8,uVar9,uVar1);
      if (*(int64_t *)(param_4 + 0x810) != 0) {
        uVar9 = (uint64_t)(uint)fVar6;
        uVar10 = uVar1;
        FUN_180403910(param_1[6],param_4);
      }
      cVar3 = func_0x000180435420(param_5,0);
      param_3 = uStackX_18;
      if (-1 < cVar3) {
        uVar4 = func_0x000180435400();
        lVar2 = *param_1;
        fVar8 = (float)(*(int *)(lVar2 + 400) - *(int *)(lVar2 + 0x18c)) * fVar8 +
                (float)*(int *)(lVar2 + 0x18c);
        auStackX_10[0] = 0;
        FUN_180405240(&uStack_f8,lVar2,fVar8,0,uVar9,uVar10);
        FUN_18040dbf0(uStack_f8,auStack_b8,cVar3,fVar8,uVar1,auStackX_10);
        if ((cStack_e8 == '\0') && (*(char *)(lStack_f0 + 0x194) != '\0')) {
          LOCK();
          *(int *)(lStack_f0 + 0xd8) = *(int *)(lStack_f0 + 0xd8) + -1;
          UNLOCK();
        }
        FUN_180405240(&uStack_e0,*param_1,fVar8,0);
        FUN_18040dbf0(uStack_e0,auStack_98,uVar4,fVar8,uVar1,auStackX_10);
        if ((cStack_d0 == '\0') && (*(char *)(lStack_d8 + 0x194) != '\0')) {
          LOCK();
          *(int *)(lStack_d8 + 0xd8) = *(int *)(lStack_d8 + 0xd8) + -1;
          UNLOCK();
        }
        FUN_180403be0(param_5,cVar3,auStack_b8,fVar6);
        FUN_180403be0(param_5,uVar4,auStack_98,fVar6);
        param_3 = uStackX_18;
      }
    }
LAB_18065fce5:
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 1;
    if (5 < iVar5) {
      return;
    }
  } while( true );
}



uint64_t FUN_18065fd40(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  
  plVar3 = (int64_t *)(param_1 + 0x198);
  iVar2 = 0;
  do {
    if ((int64_t *)*plVar3 != (int64_t *)0x0) {
      iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))();
      if (iVar1 == 2) {
        return *(uint64_t *)(param_1 + 0x198 + (int64_t)iVar2 * 8);
      }
    }
    iVar2 = iVar2 + 1;
    plVar3 = plVar3 + 1;
  } while (iVar2 < 2);
  return 0;
}





// 函数: void FUN_18065fdb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_18065fdb0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6,int32_t param_7,float param_8,
                  uint64_t param_9,float param_10,float param_11,float param_12,char param_13,
                  int64_t param_14,int *param_15)

{
  uint64_t uVar1;
  int iVar2;
  float fVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = -1.0;
  iVar2 = 0;
  fVar6 = (1.0 - param_12) - param_11;
  uVar1 = *(uint64_t *)(param_14 + 0x208);
  do {
    switch(iVar2) {
    case 0:
      fVar3 = fVar6 * param_10 * param_8;
      break;
    case 1:
      fVar3 = (1.0 - param_10) * fVar6 * param_8;
      break;
    case 2:
      if (param_13 != '\0') goto LAB_18065fef9;
      fVar3 = param_8 * param_12;
      break;
    case 3:
      if (param_13 != '\0') goto LAB_18065fef9;
      fVar3 = param_8 * param_11;
      break;
    case 4:
      if (param_13 == '\0') goto LAB_18065fef9;
      fVar3 = param_8 * param_12;
      break;
    case 5:
      if (param_13 == '\0') goto LAB_18065fef9;
      fVar3 = param_8 * param_11;
      break;
    default:
LAB_18065fef9:
      fVar3 = 0.0;
    }
    if ((param_15 != (int *)0x0) && (fVar5 < fVar3)) {
      *param_15 = iVar2;
      fVar5 = fVar3;
    }
    if (0.001 < fVar3) {
      uVar4 = param_6;
      if (iVar2 - 2U < 4) {
        uVar4 = param_7;
      }
      FUN_180403910(*param_1,param_2,param_3,uVar4,fVar3,uVar1);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    if (5 < iVar2) {
      return;
    }
  } while( true );
}



float FUN_18065ffa0(int64_t *param_1,float param_2)

{
  float fVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_18065cec0(param_1,0);
  fVar6 = *(float *)(*param_1 + 0x188);
  if (*(float *)(lVar2 + 8) != 0.0) {
    fVar1 = *(float *)(param_1[1] + 0x188);
    lVar2 = FUN_18065cec0(param_1,0);
    fVar5 = *(float *)(lVar2 + 0xc);
    fVar3 = *(float *)(lVar2 + 0x10);
    fVar4 = fVar5;
    if (fVar5 < 0.0) {
      fVar4 = -fVar3;
      fVar3 = -fVar5;
    }
    fVar5 = (param_2 - fVar4) / (fVar3 - fVar4);
    if (fVar5 <= 1.0) {
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    fVar6 = (fVar6 - fVar1) * fVar5 + fVar1;
  }
  return fVar6;
}



float FUN_18065ffdf(void)

{
  float fVar1;
  int64_t in_RAX;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  float unaff_XMM6_Da;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  
  fVar1 = *(float *)(in_RAX + 0x188);
  lVar2 = FUN_18065cec0();
  fVar5 = *(float *)(lVar2 + 0xc);
  fVar3 = *(float *)(lVar2 + 0x10);
  fVar4 = fVar5;
  if (fVar5 < unaff_XMM8_Da) {
    fVar4 = -fVar3;
    fVar3 = -fVar5;
  }
  fVar5 = (unaff_XMM6_Da - fVar4) / (fVar3 - fVar4);
  if (fVar5 <= 1.0) {
    if (fVar5 <= unaff_XMM8_Da) {
      fVar5 = unaff_XMM8_Da;
    }
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  return (unaff_XMM7_Da - fVar1) * fVar5 + fVar1;
}





// 函数: void FUN_180660051(void)
void FUN_180660051(void)

{
  return;
}



float FUN_180660070(int64_t param_1,float param_2)

{
  float fVar1;
  int64_t lVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(*(int64_t *)(param_1 + 0x10) + 0x188);
  if (0.0 < param_2) {
    lVar2 = FUN_18065cec0(param_1,2);
    fVar4 = *(float *)(lVar2 + 8) / (fVar1 * param_2);
    fVar3 = fVar1 * 0.7;
    if ((fVar1 * 0.7 <= fVar4) && (fVar3 = fVar1 * 1.3, fVar4 <= fVar1 * 1.3)) {
      fVar3 = fVar4;
    }
    return fVar3;
  }
  return fVar1;
}



int64_t FUN_180660100(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = 6;
  lVar2 = 6;
  lVar1 = param_1;
  do {
    func_0x0001804aabb0(lVar1);
    lVar1 = lVar1 + 0x104;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  lVar1 = param_1 + 0x618;
  do {
    func_0x0001804aabb0(lVar1);
    lVar1 = lVar1 + 0x104;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(uint64_t *)(param_1 + 0xc30) = 0;
  return param_1;
}





// 函数: void FUN_180660190(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
void FUN_180660190(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4,
                  uint64_t param_5,int64_t param_6)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int8_t uVar12;
  
  fVar6 = *(float *)(param_6 + 0x2c);
  iVar5 = *(int *)(param_6 + 0x10);
  uVar9 = *(int32_t *)(param_6 + 0x40);
  uVar1 = *(int32_t *)(param_6 + 0x30);
  uVar2 = *(int32_t *)(param_6 + 0x34);
  uVar3 = *(int32_t *)(param_6 + 0x38);
  uVar4 = *(int32_t *)(param_6 + 0x44);
  uVar11 = *(int32_t *)(param_6 + 0x24);
  fVar7 = (3.0 - (fVar6 + fVar6)) * fVar6 * fVar6;
  fVar6 = 1.0 - fVar7;
  if (0.0 < fVar6) {
    if (*(int *)(param_6 + 0x14) == 1) {
      uVar12 = *(int8_t *)(param_6 + 0x28);
      uVar8 = uVar4;
      uVar10 = uVar11;
    }
    else {
      uVar12 = 0;
      uVar8 = uVar9;
      uVar10 = uVar9;
    }
    FUN_18065fa20(**(int64_t **)(param_1 + 0xc30) + (int64_t)*(int *)(param_6 + 0x14) * 0x60,
                  param_2,fVar6,param_4,param_5,uVar8,uVar10,fVar6,uVar1,uVar2,uVar3,uVar12);
  }
  if (iVar5 == 1) {
    uVar12 = *(int8_t *)(param_6 + 0x28);
    uVar9 = uVar4;
  }
  else {
    uVar12 = 0;
    uVar11 = uVar9;
  }
  FUN_18065fa20(**(int64_t **)(param_1 + 0xc30) + (int64_t)iVar5 * 0x60,param_2,param_3,param_4,
                param_5,uVar9,uVar11,fVar7,uVar1,uVar2,uVar3,uVar12);
  func_0x000180435370(param_3);
  if (*(int64_t *)(param_4 + 0x808) != 0) {
    func_0x000180435370(param_4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



