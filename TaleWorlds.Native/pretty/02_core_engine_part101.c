n//  的语义化别名
#define SystemCore_StateController 


// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator


/* 函数别名定义: DataProcessingEngine */
#define DataProcessingEngine DataProcessingEngine



// 02_core_engine_part101.c - 23 个函数

// 函数: void FUN_18011cdf8(void)
void FUN_18011cdf8(void)

{
  return;
}





// 函数: void FUN_18011ce11(void)
void FUN_18011ce11(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float * FUN_18011ce30(float *param_1,char *param_2,char param_3)

{
  float *pfVar1;
  int64_t lVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStackX_8;
  float fStackX_c;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  pcVar3 = param_2;
  if (param_2 != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*pcVar3 == '\0') break;
      if (((*pcVar3 == '#') && (pcVar3[1] == '#')) ||
         (pcVar3 = pcVar3 + 1, pcVar3 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar1 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
  fVar5 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  if (param_2 == pcVar3) {
    fVar4 = 0.0;
    fStackX_c = fVar5;
  }
  else {
    SystemCore_StateController(pfVar1,&fStackX_8,fVar5,0x7f7fffff,0xbf800000,param_2,pcVar3,0);
    if (0.0 < fStackX_8) {
      fStackX_8 = fStackX_8 - fVar5 / *pfVar1;
    }
    fVar4 = (float)(int)(fStackX_8 + 0.95);
  }
  if (param_3 == '\0') {
    fVar5 = 1.0;
  }
  else {
    fVar5 = *(float *)(lVar2 + 0x1674) + *(float *)(lVar2 + 0x19f8);
  }
  fVar6 = *(float *)(lVar2 + 0x19f8) * 20.0;
  fVar5 = *(float *)(lVar2 + 0x165c) + fVar5 + *(float *)(lVar2 + 0x165c) + fVar4;
  param_1[1] = *(float *)(lVar2 + 0x1660) + *(float *)(lVar2 + 0x1660) + fStackX_c;
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  *param_1 = fVar5;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011cf80(int64_t param_1,float *param_2,uint param_3,int32_t param_4)
void FUN_18011cf80(int64_t param_1,float *param_2,uint param_3,int32_t param_4)

{
  int *piVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int32_t uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStackX_8;
  float fStackX_c;
  uint uVar11;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  float fStack_5c;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  fStackX_8 = *param_2;
  fVar10 = param_2[1];
  fVar8 = (param_2[2] - fStackX_8) * 0.5 - 1.0;
  if (*(float *)(SYSTEM_DATA_MANAGER_A + 0x169c) <= fVar8) {
    fVar8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x169c);
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if ((param_3 >> 0x15 & 1) == 0) {
    fVar9 = -1.0;
  }
  else {
    fVar9 = 0.0;
  }
  fVar9 = fVar9 + param_2[3];
  piVar1 = (int *)(param_1 + 0x80);
  iVar5 = *piVar1;
  iVar7 = 8;
  iVar4 = *(int *)(param_1 + 0x84);
  fStackX_c = fVar9;
  if (iVar5 == iVar4) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar2 = iVar5 + 1;
    if (iVar5 + 1 < iVar4) {
      iVar2 = iVar4;
    }
    DataProcessingEngine0(piVar1,iVar2);
    iVar5 = *piVar1;
  }
  fVar10 = fVar10 + 1.0 + fVar8;
  *(uint64_t *)(*(int64_t *)(param_1 + 0x88) + (int64_t)iVar5 * 8) =
       CONCAT44(fStackX_c,fStackX_8);
  *piVar1 = *piVar1 + 1;
  fStackX_8 = fVar8 + *param_2;
  fStackX_c = fVar10;
  UtilitiesSystem_FileHandler(param_1,&fStackX_8,fVar8,6,9);
  fStackX_8 = param_2[2] - fVar8;
  uVar11 = 0;
  fStackX_c = fVar10;
  UtilitiesSystem_FileHandler(param_1,&fStackX_8,fVar8,9,0xc);
  fStackX_8 = param_2[2];
  iVar5 = *piVar1;
  iVar4 = *(int *)(param_1 + 0x84);
  fStackX_c = fVar9;
  if (iVar5 == iVar4) {
    if (iVar4 != 0) {
      iVar7 = iVar4 + iVar4 / 2;
    }
    iVar4 = iVar5 + 1;
    if (iVar5 + 1 < iVar7) {
      iVar4 = iVar7;
    }
    DataProcessingEngine0(piVar1,iVar4);
    iVar5 = *piVar1;
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 0x88) + (int64_t)iVar5 * 8) =
       CONCAT44(fStackX_c,fStackX_8);
  *piVar1 = *piVar1 + 1;
  FUN_180293190(param_1,*(uint64_t *)(param_1 + 0x88),*piVar1,param_4);
  fVar10 = *(float *)(lVar3 + 0x16a0);
  if (0.0 < fVar10) {
    uStack_68 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1718);
    uStack_64 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x171c);
    uStack_60 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1720);
    fStack_5c = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    uVar6 = func_0x000180121e20(&uStack_68);
    RenderingSystem_LightManager(param_1,*(uint64_t *)(param_1 + 0x88),*piVar1,uVar6,uVar11 & 0xffffff00,fVar10);
  }
  *piVar1 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18011d200(int64_t param_1,float *param_2,uint param_3,char *param_4,int param_5,
                       int param_6)

{
  int32_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char cVar8;
  int iVar9;
  int32_t uVar10;
  char *pcVar11;
  uint64_t uVar12;
  float *pfVar13;
  char *pcVar14;
  int iVar15;
  int64_t lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint64_t uStackX_10;
  uint uStackX_18;
  float fStackX_20;
  float fStackX_24;
  uint64_t in_stack_fffffffffffffee8;
  uint64_t uStack_f8;
  float fStack_f0;
  float fStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  int32_t uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  lVar3 = SYSTEM_DATA_MANAGER_A;
  pcVar11 = param_4;
  if (param_4 != (char *)0xffffffffffffffff) {
    while (*pcVar11 != '\0') {
      if (((*pcVar11 == '#') && (pcVar11[1] == '#')) ||
         (pcVar11 = pcVar11 + 1, pcVar11 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar13 = *(float **)(SYSTEM_DATA_MANAGER_A + 0x19f0);
  iVar15 = 0;
  fVar20 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8);
  uStackX_18 = param_3;
  if (param_4 == pcVar11) {
    fVar19 = 0.0;
    fStack_ec = fVar20;
  }
  else {
    in_stack_fffffffffffffee8 = CONCAT44((int)(in_stack_fffffffffffffee8 >> 0x20),0xbf800000);
    SystemCore_StateController(pfVar13,&uStackX_10,fVar20,0x7f7fffff,in_stack_fffffffffffffee8,param_4,pcVar11,0)
    ;
    fVar19 = (float)uStackX_10;
    if (0.0 < (float)uStackX_10) {
      fVar19 = (float)uStackX_10 - fVar20 / *pfVar13;
    }
    pcVar11 = (char *)(uint64_t)(uint)(int)(fVar19 + 0.95);
    fStack_ec = uStackX_10._4_4_;
    fVar19 = (float)(int)(fVar19 + 0.95);
  }
  if (1.0 < param_2[2] - *param_2) {
    fVar20 = param_2[2] - *(float *)(lVar3 + 0x165c);
    fVar21 = *param_2 + *(float *)(lVar3 + 0x165c);
    fStack_d4 = param_2[1] + *(float *)(lVar3 + 0x1660);
    fStack_cc = param_2[3];
    lVar16 = lVar3;
    fStack_f0 = fVar19;
    fStack_d8 = fVar21;
    fStack_d0 = fVar20;
    if ((uStackX_18 & 1) != 0) {
      pfVar13 = *(float **)(lVar3 + 0x19f0);
      fVar18 = *(float *)(lVar3 + 0x19f8);
      SystemCore_StateController(pfVar13,&uStackX_10,fVar18,0x7f7fffff,0xbf800000,&system_data_df28,0,0);
      if (0.0 < (float)uStackX_10) {
        uStackX_10._0_4_ = (float)uStackX_10 - fVar18 / *pfVar13;
      }
      fVar18 = (float)uStackX_10 + 0.95;
      uStackX_10 = 0;
      fVar20 = fVar20 - (float)(int)fVar18;
      fVar18 = *(float *)(lVar3 + 0x165c) + *param_2 + fVar19 + 2.0;
      if (fVar20 <= fVar18) {
        fVar18 = fVar20;
      }
      in_stack_fffffffffffffee8 = 0;
      fStackX_20 = param_2[2] - *(float *)(lVar3 + 0x165c);
      uStack_f8 = (char *)CONCAT44((param_2[1] + *(float *)(lVar3 + 0x1660)) -
                                   (float)(int)(*(float *)(lVar3 + 0x19f8) * 0.25),fVar18);
      fStackX_24 = param_2[3] - *(float *)(lVar3 + 0x1660);
      fStack_d0 = fVar20;
      UtilitiesSystem_DataValidator(param_1,&uStack_f8,&fStackX_20,&system_data_df28,0,0,&uStackX_10,0);
      lVar16 = SYSTEM_DATA_MANAGER_A;
    }
    uVar12 = uStackX_10;
    fStackX_20 = (float)((uint)fStackX_20 & 0xffffff00);
    uStackX_10 = uStackX_10 & 0xffffffffffffff00;
    if ((param_6 != 0) &&
       (((*(int *)(lVar3 + 0x1b18) == param_5 || (*(int *)(lVar3 + 0x1b18) == param_6)) ||
        (*(int *)(lVar3 + 0x1b2c) == param_6)))) {
      lVar16 = *(int64_t *)(lVar16 + 0x1af8);
      fVar18 = *(float *)(lVar3 + 0x19f8) * 0.5;
      uStackX_10 = CONCAT71(SUB87(uVar12,1),1);
      uVar10 = *(int32_t *)(lVar16 + 0x144);
      uVar1 = *(int32_t *)(lVar16 + 0x148);
      uVar4 = *(uint64_t *)(lVar16 + 0x14c);
      uVar5 = *(uint64_t *)(lVar16 + 0x154);
      uVar6 = *(uint64_t *)(lVar16 + 0x15c);
      uVar7 = *(uint64_t *)(lVar16 + 0x164);
      uStack_f8 = (char *)CONCAT44(param_2[1] + *(float *)(lVar3 + 0x1660) + fVar18,
                                   (param_2[2] - *(float *)(lVar3 + 0x165c)) - fVar18);
      cVar8 = FUN_18010fd40(param_6,&uStack_f8,fVar18);
      lVar16 = SYSTEM_DATA_MANAGER_A;
      fStackX_20 = (float)((uint)fStackX_20 & 0xff);
      if (cVar8 != '\0') {
        fStackX_20 = 1.4013e-45;
      }
      lVar2 = *(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
      *(int32_t *)(lVar2 + 0x144) = uVar10;
      *(int32_t *)(lVar2 + 0x148) = uVar1;
      *(uint64_t *)(lVar2 + 0x14c) = uVar4;
      *(uint64_t *)(lVar2 + 0x154) = uVar5;
      *(uint64_t *)(lVar2 + 0x15c) = uVar6;
      *(uint64_t *)(lVar2 + 0x164) = uVar7;
      if (((uStackX_18 & 4) == 0) && (*(float *)(lVar16 + 0x42c) == 0.0)) {
        fStackX_20 = 1.4013e-45;
      }
      fStack_d0 = fVar20 - (fVar18 + fVar18);
    }
    pcVar11 = param_4;
    if (param_4 != (char *)0xffffffffffffffff) {
      while (*pcVar11 != '\0') {
        if (((*pcVar11 == '#') && (pcVar11[1] == '#')) ||
           (pcVar11 = pcVar11 + 1, pcVar11 == (char *)0xffffffffffffffff)) break;
      }
    }
    if (fVar19 <= fVar20 - fVar21) {
      uStackX_10 = 0;
      UtilitiesSystem_DataValidator(param_1,&fStack_d8,&fStack_d0,param_4,pcVar11,&fStack_f0,&uStackX_10,0);
    }
    else {
      uVar12 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
      uStack_f8 = (char *)0x0;
      pfVar13 = (float *)SystemCore_StateController(*(uint64_t *)(lVar3 + 0x19f0),&uStack_e8,
                                       *(int32_t *)(lVar3 + 0x19f8),(fVar20 - fVar21) - 4.0,
                                       uVar12,param_4,pcVar11,&uStack_f8);
      fVar20 = *pfVar13;
      bVar17 = uStack_f8 == param_4;
      pcVar14 = uStack_f8;
      if (bVar17) {
        if (uStack_f8 < pcVar11) {
          iVar9 = FUN_180121550(&uStack_f8,param_4,pcVar11);
          pcVar14 = param_4 + iVar9;
          uVar12 = uVar12 & 0xffffffff00000000;
          pfVar13 = (float *)SystemCore_StateController(*(uint64_t *)(lVar3 + 0x19f0),&uStack_e8,
                                           *(int32_t *)(lVar3 + 0x19f8),0x7f7fffff,uVar12,param_4
                                           ,pcVar14,0);
          fVar20 = *pfVar13;
        }
        bVar17 = pcVar14 == param_4;
      }
      pcVar11 = pcVar14;
      if (param_4 <= pcVar14 && !bVar17) {
        do {
          if ((pcVar14[-1] != ' ') && (pcVar11 = pcVar14, pcVar14[-1] != '\t')) break;
          pcVar11 = pcVar14 + -1;
          uVar12 = uVar12 & 0xffffffff00000000;
          pfVar13 = (float *)SystemCore_StateController(*(uint64_t *)(lVar3 + 0x19f0),&uStack_e8,
                                           *(int32_t *)(lVar3 + 0x19f8),0x7f7fffff,uVar12,pcVar11
                                           ,pcVar14,0);
          fVar20 = fVar20 - *pfVar13;
          pcVar14 = pcVar11;
        } while (param_4 < pcVar11);
      }
      uStack_f8 = (char *)0x0;
      UtilitiesSystem_DataValidator(param_1,&fStack_d8,&fStack_d0,param_4,pcVar11,&fStack_f0,&uStack_f8,0);
      fVar20 = fStack_d8 + fVar20 + 1.0;
      if (((char)uStackX_10 == '\0') && (fVar20 + 5.0 < param_2[2] || fVar20 + 5.0 == param_2[2])) {
        uStack_e8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
        uStack_e4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
        uStack_e0 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
        fStack_dc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        uVar10 = func_0x000180121e20(&uStack_e8);
        lVar3 = *(int64_t *)(*(int64_t *)(param_1 + 0x38) + 8);
        fStack_ec = (float)(int)((*(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0xc)) - 0.5) +
                    fStack_d4;
        uStackX_10 = (uint64_t)(uint)(fStack_ec + 1.0) << 0x20;
        do {
          pcVar11 = (char *)((uint64_t)pcVar11 & 0xffffffff00000000);
          fVar19 = (float)iVar15 + (float)iVar15;
          fStack_f0 = fVar19 + fVar20;
          uStackX_10 = CONCAT44(uStackX_10._4_4_,fVar20 + 1.0 + fVar19);
          MathInterpolationCalculator0(param_1,&fStack_f0,&uStackX_10,uVar10,pcVar11,0xf);
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
      }
    }
    uVar12 = (uint64_t)fStackX_20._0_1_;
  }
  else {
    uVar12 = (uint64_t)pcVar11 & 0xffffffffffffff00;
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_18011d36f(float param_1,float param_2,uint64_t param_3,uint64_t param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  char cVar12;
  int iVar13;
  int32_t uVar14;
  float *pfVar15;
  char *pcVar16;
  int64_t unaff_RBP;
  char cVar17;
  uint uVar18;
  char *unaff_RSI;
  int64_t unaff_RDI;
  char *pcVar19;
  float *unaff_R12;
  int64_t unaff_R13;
  char *unaff_R14;
  int64_t unaff_R15;
  bool bVar20;
  float fVar21;
  float fVar22;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar23;
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fVar24;
  int32_t unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM14_Da;
  uint64_t in_stack_00000020;
  char *in_stack_00000040;
  float in_stack_00000048;
  float fStack000000000000004c;
  int32_t in_stack_00000050;
  int32_t uStack0000000000000054;
  int32_t in_stack_00000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  
  uVar14 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  fVar24 = unaff_XMM9_Da - param_2;
  param_2 = unaff_XMM14_Da + param_2;
  fStack0000000000000064 = param_1 + *(float *)(unaff_RDI + 0x1660);
  *(float *)(unaff_RBP + -0x7d) = unaff_R12[3];
  fStack0000000000000060 = param_2;
  fStack0000000000000068 = fVar24;
  if ((param_3 & 1) != 0) {
    pfVar15 = *(float **)(unaff_RDI + 0x19f0);
    fVar22 = *(float *)(unaff_RDI + 0x19f8);
    SystemCore_StateController(pfVar15,unaff_RBP + 0x5f,fVar22,param_4,CONCAT44(uVar14,unaff_XMM11_Da));
    fVar21 = *(float *)(unaff_RBP + 0x5f);
    if (unaff_XMM8_Da < fVar21) {
      fVar21 = fVar21 - fVar22 / *pfVar15;
    }
    fVar22 = *(float *)(unaff_R15 + 0x165c);
    fVar1 = unaff_R12[1];
    fVar2 = *(float *)(unaff_R15 + 0x1660);
    fVar3 = *(float *)(unaff_R15 + 0x19f8);
    *(char **)(unaff_RBP + 0x5f) = unaff_RSI;
    fVar24 = fVar24 - (float)(int)(fVar21 + 0.95);
    fVar21 = fVar22 + *unaff_R12 + unaff_XMM6_Da + 2.0;
    if (fVar24 <= fVar21) {
      fVar21 = fVar24;
    }
    fVar22 = unaff_R12[2] - fVar22;
    in_stack_00000040 = (char *)CONCAT44((fVar1 + fVar2) - (float)(int)(fVar3 * 0.25),fVar21);
    fVar21 = unaff_R12[3];
    fVar1 = *(float *)(unaff_R15 + 0x1660);
    *(float *)(unaff_RBP + 0x6f) = fVar22;
    *(float *)(unaff_RBP + 0x73) = fVar21 - fVar1;
    pcVar19 = unaff_RSI;
    fStack0000000000000068 = fVar24;
    UtilitiesSystem_DataValidator(fVar22,&stack0x00000040,unaff_RBP + 0x6f,&system_data_df28);
    uVar14 = (int32_t)((uint64_t)pcVar19 >> 0x20);
    unaff_RDI = SYSTEM_DATA_MANAGER_A;
  }
  iVar13 = *(int *)(unaff_RBP + 0x7f);
  cVar17 = (char)unaff_RSI;
  *(char *)(unaff_RBP + 0x6f) = cVar17;
  *(char *)(unaff_RBP + 0x5f) = cVar17;
  if ((iVar13 != 0) &&
     (((*(int *)(unaff_R15 + 0x1b18) == *(int *)(unaff_RBP + 0x77) ||
       (*(int *)(unaff_R15 + 0x1b18) == iVar13)) || (*(int *)(unaff_R15 + 0x1b2c) == iVar13)))) {
    lVar7 = *(int64_t *)(unaff_RDI + 0x1af8);
    fVar22 = *(float *)(unaff_R15 + 0x19f8) * 0.5;
    *(int8_t *)(unaff_RBP + 0x5f) = 1;
    uVar5 = *(int32_t *)(lVar7 + 0x144);
    uVar6 = *(int32_t *)(lVar7 + 0x148);
    uVar23 = *(uint64_t *)(lVar7 + 0x14c);
    uVar9 = *(uint64_t *)(lVar7 + 0x154);
    uVar10 = *(uint64_t *)(lVar7 + 0x15c);
    uVar11 = *(uint64_t *)(lVar7 + 0x164);
    in_stack_00000040 =
         (char *)CONCAT44(unaff_R12[1] + *(float *)(unaff_R15 + 0x1660) + fVar22,
                          (unaff_R12[2] - *(float *)(unaff_R15 + 0x165c)) - fVar22);
    cVar12 = FUN_18010fd40(iVar13,&stack0x00000040,fVar22);
    lVar7 = SYSTEM_DATA_MANAGER_A;
    uVar18 = *(uint *)(unaff_RBP + 0x6f) & 0xff;
    if (cVar12 != '\0') {
      uVar18 = 1;
    }
    bVar4 = *(byte *)(unaff_RBP + 0x67);
    *(uint *)(unaff_RBP + 0x6f) = uVar18;
    lVar8 = *(int64_t *)(lVar7 + 0x1af8);
    *(int32_t *)(lVar8 + 0x144) = uVar5;
    *(int32_t *)(lVar8 + 0x148) = uVar6;
    *(uint64_t *)(lVar8 + 0x14c) = uVar23;
    *(uint64_t *)(lVar8 + 0x154) = uVar9;
    *(uint64_t *)(lVar8 + 0x15c) = uVar10;
    *(uint64_t *)(lVar8 + 0x164) = uVar11;
    if (((bVar4 & 4) == 0) && (*(float *)(lVar7 + 0x42c) == unaff_XMM8_Da)) {
      *(int8_t *)(unaff_RBP + 0x6f) = 1;
    }
    fStack0000000000000068 = fVar24 - (fVar22 + fVar22);
  }
  pcVar19 = unaff_R14;
  if (unaff_R14 != (char *)0xffffffffffffffff) {
    do {
      if ((*pcVar19 == '\0') || ((*pcVar19 == '#' && (pcVar19[1] == '#')))) break;
      pcVar19 = pcVar19 + 1;
    } while (pcVar19 != (char *)0xffffffffffffffff);
  }
  if (unaff_XMM12_Da <= fVar24 - param_2) {
    *(char **)(unaff_RBP + 0x5f) = unaff_RSI;
    UtilitiesSystem_DataValidator();
  }
  else {
    in_stack_00000040 = unaff_RSI;
    pfVar15 = (float *)SystemCore_StateController(*(uint64_t *)(unaff_R15 + 0x19f0),&stack0x00000050,
                                     *(int32_t *)(unaff_R15 + 0x19f8),(fVar24 - param_2) - 4.0,
                                     CONCAT44(uVar14,unaff_XMM8_Da));
    fVar24 = *pfVar15;
    bVar20 = in_stack_00000040 == unaff_R14;
    pcVar16 = in_stack_00000040;
    uVar23 = extraout_XMM0_Qa;
    if (bVar20) {
      if (in_stack_00000040 < pcVar19) {
        iVar13 = FUN_180121550(&stack0x00000040);
        pcVar16 = unaff_R14 + iVar13;
        pfVar15 = (float *)SystemCore_StateController(*(uint64_t *)(unaff_R15 + 0x19f0),&stack0x00000050,
                                         *(int32_t *)(unaff_R15 + 0x19f8));
        fVar24 = *pfVar15;
        uVar23 = extraout_XMM0_Qa_00;
      }
      bVar20 = pcVar16 == unaff_R14;
    }
    if (unaff_R14 <= pcVar16 && !bVar20) {
      do {
        if ((pcVar16[-1] != ' ') && (pcVar16[-1] != '\t')) break;
        pcVar16 = pcVar16 + -1;
        pfVar15 = (float *)SystemCore_StateController(*(uint64_t *)(unaff_R15 + 0x19f0),&stack0x00000050,
                                         *(int32_t *)(unaff_R15 + 0x19f8));
        fVar24 = fVar24 - *pfVar15;
        uVar23 = extraout_XMM0_Qa_01;
      } while (unaff_R14 < pcVar16);
    }
    UtilitiesSystem_DataValidator(uVar23,&stack0x00000060,&stack0x00000068);
    fVar24 = fStack0000000000000060 + fVar24 + 1.0;
    if ((*(char *)(unaff_RBP + 0x5f) == cVar17) &&
       (fVar24 + 5.0 < unaff_R12[2] || fVar24 + 5.0 == unaff_R12[2])) {
      in_stack_00000050 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16c8);
      uStack0000000000000054 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16cc);
      in_stack_00000058 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x16d0);
      fStack000000000000005c =
           *(float *)(SYSTEM_DATA_MANAGER_A + 0x16d4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar14 = func_0x000180121e20(&stack0x00000050);
      lVar7 = *(int64_t *)(*(int64_t *)(unaff_R13 + 0x38) + 8);
      fStack000000000000004c =
           (float)(int)((*(float *)(lVar7 + 0x60) + *(float *)(lVar7 + 0xc)) - 0.5) +
           fStack0000000000000064;
      *(float *)(unaff_RBP + 99) = fStack000000000000004c + 1.0;
      do {
        in_stack_00000048 = (float)(int)unaff_RSI;
        in_stack_00000048 = in_stack_00000048 + in_stack_00000048;
        fVar22 = fVar24 + 1.0 + in_stack_00000048;
        in_stack_00000048 = in_stack_00000048 + fVar24;
        *(float *)(unaff_RBP + 0x5f) = fVar22;
        MathInterpolationCalculator0(fVar22,&stack0x00000048,unaff_RBP + 0x5f,uVar14,unaff_XMM8_Da);
        uVar18 = (int)unaff_RSI + 1;
        unaff_RSI = (char *)(uint64_t)uVar18;
      } while ((int)uVar18 < 3);
    }
  }
  return *(int8_t *)(unaff_RBP + 0x6f);
}





// 函数: void FUN_18011d8b8(void)
void FUN_18011d8b8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011d900(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18011d900(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  if (lVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    SystemResourceCleaner(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_18011d940(int *param_1,int32_t *param_2)
void FUN_18011d940(int *param_1,int32_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = param_1[1];
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_18011dbd0(param_1,iVar1);
    iVar3 = *param_1;
  }
  *(int32_t *)(*(int64_t *)(param_1 + 2) + (int64_t)iVar3 * 4) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}





// 函数: void SystemCore_InterruptHandler(int *param_1,uint64_t *param_2)
void SystemCore_InterruptHandler(int *param_1,uint64_t *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = param_1[1];
  if (iVar3 == iVar2) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 / 2 + iVar2;
    }
    iVar1 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar1 = iVar2;
    }
    DataProcessingEngine0(param_1,iVar1);
    iVar3 = *param_1;
  }
  *(uint64_t *)(*(int64_t *)(param_1 + 2) + (int64_t)iVar3 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011da00(int *param_1,int param_2)
void FUN_18011da00(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((int64_t)param_2,SYSTEM_DATA_MANAGER_B);
    if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(int64_t *)(param_1 + 2),(int64_t)*param_1);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011da1c(void)
void FUN_18011da1c(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int unaff_EDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0();
  if (*(int64_t *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(unaff_RBX + 2),(int64_t)*unaff_RBX);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = unaff_EDI;
  return;
}





// 函数: void FUN_18011da85(void)
void FUN_18011da85(void)

{
  return;
}





// 函数: void FUN_18011da90(int *param_1,int param_2)
void FUN_18011da90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (iVar1 < param_2) {
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar1 / 2 + iVar1;
    }
    iVar2 = param_2;
    if (param_2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_18011da00(param_1,iVar2);
  }
  *param_1 = param_2;
  return;
}





// 函数: void FUN_18011dae0(int *param_1,int param_2)
void FUN_18011dae0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (iVar1 < param_2) {
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar1 / 2 + iVar1;
    }
    iVar2 = param_2;
    if (param_2 < iVar1) {
      iVar2 = iVar1;
    }
    Memory_CacheManager(param_1,iVar2);
  }
  *param_1 = param_2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011db30(int *param_1,int param_2)
void FUN_18011db30(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((int64_t)param_2 * 0x28,SYSTEM_DATA_MANAGER_B);
    if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(int64_t *)(param_1 + 2),(int64_t)*param_1 * 0x28);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011db4c(void)
void FUN_18011db4c(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int64_t unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI * 0x28,SYSTEM_DATA_MANAGER_B);
  if (*(int64_t *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(unaff_RBX + 2),(int64_t)*unaff_RBX * 0x28);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18011dbc2(void)
void FUN_18011dbc2(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011dbd0(int *param_1,int param_2)
void FUN_18011dbd0(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((int64_t)param_2 << 2,SYSTEM_DATA_MANAGER_B);
    if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(int64_t *)(param_1 + 2),(int64_t)*param_1 << 2);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011dbec(void)
void FUN_18011dbec(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int64_t unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI << 2,SYSTEM_DATA_MANAGER_B);
  if (*(int64_t *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(unaff_RBX + 2),(int64_t)*unaff_RBX << 2);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18011dc5d(void)
void FUN_18011dc5d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void DataProcessingEngine0(int *param_1,int param_2)
void DataProcessingEngine0(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((int64_t)param_2 << 3,SYSTEM_DATA_MANAGER_B);
    if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(int64_t *)(param_1 + 2),(int64_t)*param_1 << 3);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011dc8c(void)
void FUN_18011dc8c(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int64_t unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI << 3,SYSTEM_DATA_MANAGER_B);
  if (*(int64_t *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(unaff_RBX + 2),(int64_t)*unaff_RBX << 3);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





// 函数: void FUN_18011dcfd(void)
void FUN_18011dcfd(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Memory_CacheManager(int *param_1,int param_2)
void Memory_CacheManager(int *param_1,int param_2)

{
  uint64_t uVar1;
  
  if (param_1[1] < param_2) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
    }
    uVar1 = func_0x000180120ce0((int64_t)param_2 * 2,SYSTEM_DATA_MANAGER_B);
    if (*(int64_t *)(param_1 + 2) != 0) {
                    // WARNING: Subroutine does not return
      memcpy(uVar1,*(int64_t *)(param_1 + 2),(int64_t)*param_1 * 2);
    }
    *(uint64_t *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011dd2c(void)
void FUN_18011dd2c(void)

{
  int64_t in_RAX;
  uint64_t uVar1;
  int *unaff_RBX;
  int64_t unaff_RDI;
  
  if (in_RAX != 0) {
    *(int *)(in_RAX + 0x3a8) = *(int *)(in_RAX + 0x3a8) + 1;
  }
  uVar1 = func_0x000180120ce0(unaff_RDI * 2,SYSTEM_DATA_MANAGER_B);
  if (*(int64_t *)(unaff_RBX + 2) != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uVar1,*(int64_t *)(unaff_RBX + 2),(int64_t)*unaff_RBX * 2);
  }
  *(uint64_t *)(unaff_RBX + 2) = uVar1;
  unaff_RBX[1] = (int)unaff_RDI;
  return;
}





