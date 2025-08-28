n//  的语义化别名
#define SystemCore_StateController 


// $fun 的语义化别名
#define $alias_name $fun

/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator



// 02_core_engine_part084_sub002_sub002.c - 1 个函数

// 函数: void FUN_180110c5d(void)
void FUN_180110c5d(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180110ca0(int64_t param_1,float *param_2,uint64_t param_3,uint64_t param_4,
                       char param_5,float *param_6,float *param_7)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t lVar6;
  byte bVar7;
  int iVar8;
  int32_t uVar9;
  int32_t uVar10;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  uint64_t in_stack_ffffffffffffff18;
  char acStack_d8 [8];
  uint64_t uStack_d0;
  int32_t uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar11 = (uint)((uint64_t)in_stack_ffffffffffffff18 >> 0x20);
  uVar12 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar12 + 0xb1) = 1;
  lVar3 = *(int64_t *)(lVar5 + 0x1af8);
  if (*(char *)(lVar3 + 0xb4) == '\0') {
    FUN_18012e250();
    iVar8 = SystemCore_HandleInput(&rendering_buffer_2096_ptr,0,
                          *(int32_t *)
                           (*(int64_t *)(lVar3 + 0x220) + -4 +
                           (int64_t)*(int *)(lVar3 + 0x218) * 4));
    lVar6 = SYSTEM_DATA_MANAGER_A;
    if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar8) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar8;
    }
    if (*(int *)(lVar6 + 0x1b30) == iVar8) {
      *(int8_t *)(lVar6 + 0x1b3f) = 1;
    }
    piVar1 = (int *)(*(int64_t *)(lVar6 + 0x1af8) + 0x218);
    *piVar1 = *piVar1 + -1;
    fStack_c0 = *(float *)(lVar3 + 0x100);
    fStack_bc = *(float *)(lVar3 + 0x104);
    fVar14 = (float)*(uint64_t *)(lVar5 + 0x165c);
    fStack_b0 = fStack_c0 + fVar14;
    uStack_d0._4_4_ = (float)((uint64_t)*(uint64_t *)(lVar5 + 0x165c) >> 0x20);
    fVar15 = uStack_d0._4_4_;
    fStack_ac = fStack_bc + uStack_d0._4_4_;
    fStack_a8 = fStack_b0 + *param_2;
    fStack_b8 = fStack_c0 + *param_2 + fVar14 * 2.0;
    fStack_b4 = param_2[1] + fStack_bc + uStack_d0._4_4_ * 2.0;
    fStack_a4 = fStack_ac + param_2[1];
    uStack_d0 = CONCAT44(fStack_b4 - fStack_bc,fStack_b8 - fStack_c0);
    func_0x000180124080(&uStack_d0,0);
    uVar12 = Memory_GarbageCollector(&fStack_c0,iVar8,0);
    if ((char)uVar12 != '\0') {
      lVar13 = (uint64_t)uVar11 << 0x20;
      bVar7 = SystemCore_Formatter(&fStack_c0,iVar8,&param_5,acStack_d8,lVar13);
      uVar10 = (int32_t)((uint64_t)lVar13 >> 0x20);
      if ((acStack_d8[0] == '\0') || (param_5 == '\0')) {
        lVar13 = (uint64_t)(param_5 != '\0') + 0x15;
      }
      else {
        lVar13 = 0x17;
      }
      puVar2 = (uint64_t *)(lVar6 + 0x1628 + (lVar13 + 10) * 0x10);
      uStack_d0 = *puVar2;
      uStack_c8 = *(int32_t *)(puVar2 + 1);
      fStack_c4 = *(float *)((int64_t)puVar2 + 0xc) * *(float *)(lVar6 + 0x1628);
      uVar9 = func_0x000180121e20(&uStack_d0);
      if (iVar8 == *(int *)(lVar6 + 0x1ca0)) {
        UtilitiesSystem_Validator(&fStack_c0,1,lVar6);
      }
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      if (0.0 <= fVar15) {
        fVar14 = *(float *)(lVar5 + 0x1664);
        if (fVar15 <= *(float *)(lVar5 + 0x1664)) {
          fVar14 = fVar15;
        }
      }
      else {
        fVar14 = 0.0;
      }
      uVar12 = CONCAT44(uVar10,fVar14);
      SystemCore_ResourceManager(CONCAT44(fStack_bc,fStack_c0),CONCAT44(fStack_b4,fStack_b8),uVar9,1,uVar12);
      if (0.0 < param_6[3]) {
        fStack_c0 = *param_6;
        fStack_bc = param_6[1];
        fStack_b8 = param_6[2];
        fStack_b4 = param_6[3] * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        uVar10 = func_0x000180121e20(&fStack_c0);
        MathInterpolationCalculator0(*(uint64_t *)(lVar3 + 0x2e8),&fStack_b0,&fStack_a8,uVar10,
                      uVar12 & 0xffffffff00000000,0xf);
      }
      lVar3 = *(int64_t *)(lVar3 + 0x2e8);
      fStack_c0 = *param_7;
      fStack_bc = param_7[1];
      fStack_b8 = param_7[2];
      fStack_b4 = param_7[3] * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar11 = func_0x000180121e20(&fStack_c0);
      if ((uVar11 & 0xff000000) != 0) {
        if ((*(int *)(lVar3 + 0x70) == 0) ||
           (param_1 !=
            *(int64_t *)(*(int64_t *)(lVar3 + 0x78) + -8 + (int64_t)*(int *)(lVar3 + 0x70) * 8)))
        {
          bVar4 = true;
          RenderingSystem_TextureLoader(lVar3,param_1);
        }
        else {
          bVar4 = false;
        }
        Network_ConnectionManager(lVar3,6,4);
        FUN_180292290(lVar3,&fStack_b0,&fStack_a8,param_3,param_4,uVar11);
        if (bVar4) {
          *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + -1;
          SystemCore_Initialize(lVar3);
        }
      }
      return (uint64_t)bVar7;
    }
  }
  return uVar12 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180110d03(void)

{
  int *piVar1;
  uint64_t *puVar2;
  float fVar3;
  float fVar4;
  int32_t *puVar5;
  int64_t lVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  int64_t unaff_RBP;
  float *unaff_RDI;
  int64_t lVar14;
  int64_t in_R11;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar15;
  float fVar16;
  int32_t unaff_XMM7_Da;
  float fVar17;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar18;
  float fVar19;
  uint64_t in_stack_00000020;
  char in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  
  uVar12 = (uint)((uint64_t)in_stack_00000020 >> 0x20);
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  FUN_18012e250();
  iVar9 = SystemCore_HandleInput(&rendering_buffer_2096_ptr,0,
                        *(int32_t *)
                         (*(int64_t *)(unaff_R14 + 0x220) + -4 +
                         (int64_t)*(int *)(unaff_R14 + 0x218) * 4));
  lVar6 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar9) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x1b34) = iVar9;
  }
  if (*(int *)(lVar6 + 0x1b30) == iVar9) {
    *(int8_t *)(lVar6 + 0x1b3f) = 1;
  }
  piVar1 = (int *)(*(int64_t *)(lVar6 + 0x1af8) + 0x218);
  *piVar1 = *piVar1 + -1;
  fVar15 = *(float *)(unaff_R14 + 0x100);
  fVar3 = *(float *)(unaff_R14 + 0x104);
  fVar4 = unaff_RDI[1];
  fVar19 = (float)*(uint64_t *)(unaff_R15 + 0x165c);
  in_stack_00000038._4_4_ = (float)((uint64_t)*(uint64_t *)(unaff_R15 + 0x165c) >> 0x20);
  fVar18 = in_stack_00000038._4_4_;
  *(float *)(unaff_RBP + -0x79) = fVar15;
  *(float *)(unaff_RBP + -0x75) = fVar3;
  fVar16 = *unaff_RDI;
  *(float *)(unaff_RBP + -0x69) = fVar15 + fVar19;
  fVar17 = *unaff_RDI;
  *(float *)(unaff_RBP + -0x65) = fVar3 + in_stack_00000038._4_4_;
  *(float *)(unaff_RBP + -0x61) = fVar15 + fVar19 + fVar16;
  fVar17 = fVar15 + fVar17 + fVar19 * 2.0;
  fVar16 = fVar4 + fVar3 + in_stack_00000038._4_4_ * 2.0;
  *(float *)(unaff_RBP + -0x71) = fVar17;
  *(float *)(unaff_RBP + -0x6d) = fVar16;
  *(float *)(unaff_RBP + -0x5d) = fVar3 + in_stack_00000038._4_4_ + fVar4;
  in_stack_00000038 = CONCAT44(fVar16 - fVar3,fVar17 - fVar15);
  func_0x000180124080(&stack0x00000038,0);
  uVar13 = Memory_GarbageCollector(unaff_RBP + -0x79,iVar9,0);
  if ((char)uVar13 == '\0') {
    uVar13 = uVar13 & 0xffffffffffffff00;
  }
  else {
    lVar14 = (uint64_t)uVar12 << 0x20;
    bVar8 = SystemCore_Formatter(unaff_RBP + -0x79,iVar9,unaff_RBP + 0x6f,&stack0x00000030,lVar14);
    uVar11 = (int32_t)((uint64_t)lVar14 >> 0x20);
    if ((in_stack_00000030 == '\0') || (*(char *)(unaff_RBP + 0x6f) == '\0')) {
      lVar14 = (uint64_t)(*(char *)(unaff_RBP + 0x6f) != '\0') + 0x15;
    }
    else {
      lVar14 = 0x17;
    }
    puVar2 = (uint64_t *)(lVar6 + 0x1628 + (lVar14 + 10) * 0x10);
    in_stack_00000038 = *puVar2;
    in_stack_00000040 = *(int32_t *)(puVar2 + 1);
    fStack0000000000000044 = *(float *)((int64_t)puVar2 + 0xc);
    *(float *)(unaff_RBP + -0x7d) = fStack0000000000000044 * *(float *)(lVar6 + 0x1628);
    uVar10 = func_0x000180121e20(&stack0x00000038);
    if (iVar9 == *(int *)(lVar6 + 0x1ca0)) {
      UtilitiesSystem_Validator(unaff_RBP + -0x79,1,lVar6);
    }
    if (fVar19 <= fVar18) {
      fVar18 = fVar19;
    }
    if (0.0 <= fVar18) {
      fVar15 = *(float *)(unaff_R15 + 0x1664);
      if (fVar18 <= *(float *)(unaff_R15 + 0x1664)) {
        fVar15 = fVar18;
      }
    }
    else {
      fVar15 = 0.0;
    }
    uVar13 = CONCAT44(uVar11,fVar15);
    SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -0x79),*(uint64_t *)(unaff_RBP + -0x71),uVar10,1,
                  uVar13);
    lVar6 = SYSTEM_DATA_MANAGER_A;
    puVar5 = *(int32_t **)(unaff_RBP + 0x77);
    if (0.0 < (float)puVar5[3]) {
      uVar11 = puVar5[1];
      uVar10 = puVar5[2];
      fVar15 = (float)puVar5[3];
      *(int32_t *)(unaff_RBP + -0x79) = *puVar5;
      *(int32_t *)(unaff_RBP + -0x75) = uVar11;
      *(int32_t *)(unaff_RBP + -0x71) = uVar10;
      *(float *)(unaff_RBP + -0x6d) = fVar15;
      *(float *)(unaff_RBP + -0x6d) = fVar15 * *(float *)(lVar6 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + -0x79);
      MathInterpolationCalculator0(*(uint64_t *)(unaff_R14 + 0x2e8),unaff_RBP + -0x69,unaff_RBP + -0x61,uVar11,
                    uVar13 & 0xffffffff00000000);
    }
    lVar14 = SYSTEM_DATA_MANAGER_A;
    puVar5 = *(int32_t **)(unaff_RBP + 0x7f);
    lVar6 = *(int64_t *)(unaff_R14 + 0x2e8);
    uVar11 = puVar5[1];
    uVar10 = puVar5[2];
    fVar15 = (float)puVar5[3];
    *(int32_t *)(unaff_RBP + -0x79) = *puVar5;
    *(int32_t *)(unaff_RBP + -0x75) = uVar11;
    *(int32_t *)(unaff_RBP + -0x71) = uVar10;
    *(float *)(unaff_RBP + -0x6d) = fVar15;
    *(float *)(unaff_RBP + -0x6d) = fVar15 * *(float *)(lVar14 + 0x1628);
    uVar12 = func_0x000180121e20(unaff_RBP + -0x79);
    if ((uVar12 & 0xff000000) != 0) {
      if ((*(int *)(lVar6 + 0x70) == 0) ||
         (unaff_R12 !=
          *(int64_t *)(*(int64_t *)(lVar6 + 0x78) + -8 + (int64_t)*(int *)(lVar6 + 0x70) * 8))) {
        bVar7 = true;
        RenderingSystem_TextureLoader(lVar6);
      }
      else {
        bVar7 = false;
      }
      Network_ConnectionManager(lVar6,6,4);
      FUN_180292290(lVar6,unaff_RBP + -0x69,unaff_RBP + -0x61,*(uint64_t *)(unaff_RBP + 0x5f),
                    *(uint64_t *)(unaff_RBP + 0x67));
      if (bVar7) {
        *(int *)(lVar6 + 0x70) = *(int *)(lVar6 + 0x70) + -1;
        SystemCore_Initialize(lVar6);
      }
    }
    uVar13 = (uint64_t)bVar8;
  }
  return uVar13;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_180110e69(void)

{
  int32_t *puVar1;
  int32_t uVar2;
  bool bVar3;
  int64_t lVar4;
  int8_t uVar5;
  int32_t uVar6;
  uint uVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  int64_t lVar8;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  uint64_t in_stack_00000020;
  uint64_t uVar10;
  int32_t uVar12;
  uint64_t uVar11;
  char in_stack_00000030;
  int32_t in_stack_00000038;
  int32_t uStack000000000000003c;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  
  uVar10 = in_stack_00000020 & 0xffffffff00000000;
  uVar5 = SystemCore_Formatter(unaff_RBP + -0x79,unaff_ESI,unaff_RBP + 0x6f,&stack0x00000030,uVar10);
  uVar12 = (int32_t)(uVar10 >> 0x20);
  if ((in_stack_00000030 == '\0') || (*(char *)(unaff_RBP + 0x6f) == '\0')) {
    lVar8 = (uint64_t)(*(char *)(unaff_RBP + 0x6f) != '\0') + 0x15;
  }
  else {
    lVar8 = 0x17;
  }
  puVar1 = (int32_t *)(unaff_RBX + 0x1628 + (lVar8 + 10) * 0x10);
  in_stack_00000038 = *puVar1;
  uStack000000000000003c = puVar1[1];
  in_stack_00000040 = puVar1[2];
  fStack0000000000000044 = (float)puVar1[3];
  *(float *)(unaff_RBP + -0x7d) = fStack0000000000000044 * *(float *)(unaff_RBX + 0x1628);
  uVar6 = func_0x000180121e20(&stack0x00000038);
  if (unaff_ESI == *(int *)(unaff_RBX + 0x1ca0)) {
    UtilitiesSystem_Validator(unaff_RBP + -0x79,1);
  }
  if (unaff_XMM11_Da <= unaff_XMM10_Da) {
    unaff_XMM10_Da = unaff_XMM11_Da;
  }
  if (unaff_XMM6_Da <= unaff_XMM10_Da) {
    fVar9 = *(float *)(unaff_R15 + 0x1664);
    if (unaff_XMM10_Da <= *(float *)(unaff_R15 + 0x1664)) {
      fVar9 = unaff_XMM10_Da;
    }
  }
  else {
    fVar9 = 0.0;
  }
  uVar11 = CONCAT44(uVar12,fVar9);
  SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -0x79),*(uint64_t *)(unaff_RBP + -0x71),uVar6,1,uVar11
               );
  lVar8 = SYSTEM_DATA_MANAGER_A;
  uVar12 = (int32_t)((uint64_t)uVar11 >> 0x20);
  puVar1 = *(int32_t **)(unaff_RBP + 0x77);
  if (unaff_XMM6_Da < (float)puVar1[3]) {
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    fVar9 = (float)puVar1[3];
    *(int32_t *)(unaff_RBP + -0x79) = *puVar1;
    *(int32_t *)(unaff_RBP + -0x75) = uVar6;
    *(int32_t *)(unaff_RBP + -0x71) = uVar2;
    *(float *)(unaff_RBP + -0x6d) = fVar9;
    *(float *)(unaff_RBP + -0x6d) = fVar9 * *(float *)(lVar8 + 0x1628);
    uVar6 = func_0x000180121e20(unaff_RBP + -0x79);
    MathInterpolationCalculator0(*(uint64_t *)(unaff_R14 + 0x2e8),unaff_RBP + -0x69,unaff_RBP + -0x61,uVar6,
                  CONCAT44(uVar12,unaff_XMM6_Da));
  }
  lVar4 = SYSTEM_DATA_MANAGER_A;
  puVar1 = *(int32_t **)(unaff_RBP + 0x7f);
  lVar8 = *(int64_t *)(unaff_R14 + 0x2e8);
  uVar12 = puVar1[1];
  uVar6 = puVar1[2];
  fVar9 = (float)puVar1[3];
  *(int32_t *)(unaff_RBP + -0x79) = *puVar1;
  *(int32_t *)(unaff_RBP + -0x75) = uVar12;
  *(int32_t *)(unaff_RBP + -0x71) = uVar6;
  *(float *)(unaff_RBP + -0x6d) = fVar9;
  *(float *)(unaff_RBP + -0x6d) = fVar9 * *(float *)(lVar4 + 0x1628);
  uVar7 = func_0x000180121e20(unaff_RBP + -0x79);
  if ((uVar7 & 0xff000000) != 0) {
    if ((*(int *)(lVar8 + 0x70) == 0) ||
       (unaff_R12 !=
        *(int64_t *)(*(int64_t *)(lVar8 + 0x78) + -8 + (int64_t)*(int *)(lVar8 + 0x70) * 8))) {
      bVar3 = true;
      RenderingSystem_TextureLoader(lVar8);
    }
    else {
      bVar3 = false;
    }
    Network_ConnectionManager(lVar8,6,4);
    FUN_180292290(lVar8,unaff_RBP + -0x69,unaff_RBP + -0x61,*(uint64_t *)(unaff_RBP + 0x5f),
                  *(uint64_t *)(unaff_RBP + 0x67));
    if (bVar3) {
      *(int *)(lVar8 + 0x70) = *(int *)(lVar8 + 0x70) + -1;
      SystemCore_Initialize(lVar8);
    }
  }
  return uVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int8_t FUN_180110e6b(void)

{
  int32_t *puVar1;
  int32_t uVar2;
  bool bVar3;
  int64_t lVar4;
  int8_t uVar5;
  int32_t uVar6;
  uint uVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint64_t unaff_RDI;
  int64_t lVar8;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar9;
  float unaff_XMM6_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  uint64_t in_stack_00000020;
  uint64_t uVar10;
  int32_t uVar11;
  char in_stack_00000030;
  int32_t in_stack_00000038;
  int32_t uStack000000000000003c;
  int32_t in_stack_00000040;
  float fStack0000000000000044;
  
  uVar10 = CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),(int)unaff_RDI);
  uVar5 = SystemCore_Formatter(unaff_RBP + -0x79,unaff_ESI,unaff_RBP + 0x6f,&stack0x00000030,uVar10);
  uVar11 = (int32_t)((uint64_t)uVar10 >> 0x20);
  if ((in_stack_00000030 == (char)unaff_RDI) || (*(char *)(unaff_RBP + 0x6f) == '\0')) {
    lVar8 = CONCAT71((int7)((uint64_t)unaff_RDI >> 8),*(char *)(unaff_RBP + 0x6f) != '\0') + 0x15;
  }
  else {
    lVar8 = 0x17;
  }
  puVar1 = (int32_t *)(unaff_RBX + 0x1628 + (lVar8 + 10) * 0x10);
  in_stack_00000038 = *puVar1;
  uStack000000000000003c = puVar1[1];
  in_stack_00000040 = puVar1[2];
  fStack0000000000000044 = (float)puVar1[3];
  *(float *)(unaff_RBP + -0x7d) = fStack0000000000000044 * *(float *)(unaff_RBX + 0x1628);
  uVar6 = func_0x000180121e20(&stack0x00000038);
  if (unaff_ESI == *(int *)(unaff_RBX + 0x1ca0)) {
    UtilitiesSystem_Validator(unaff_RBP + -0x79,1);
  }
  if (unaff_XMM11_Da <= unaff_XMM10_Da) {
    unaff_XMM10_Da = unaff_XMM11_Da;
  }
  if (unaff_XMM6_Da <= unaff_XMM10_Da) {
    fVar9 = *(float *)(unaff_R15 + 0x1664);
    if (unaff_XMM10_Da <= *(float *)(unaff_R15 + 0x1664)) {
      fVar9 = unaff_XMM10_Da;
    }
  }
  else {
    fVar9 = 0.0;
  }
  uVar10 = CONCAT44(uVar11,fVar9);
  SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -0x79),*(uint64_t *)(unaff_RBP + -0x71),uVar6,1,uVar10
               );
  lVar8 = SYSTEM_DATA_MANAGER_A;
  uVar11 = (int32_t)((uint64_t)uVar10 >> 0x20);
  puVar1 = *(int32_t **)(unaff_RBP + 0x77);
  if (unaff_XMM6_Da < (float)puVar1[3]) {
    uVar6 = puVar1[1];
    uVar2 = puVar1[2];
    fVar9 = (float)puVar1[3];
    *(int32_t *)(unaff_RBP + -0x79) = *puVar1;
    *(int32_t *)(unaff_RBP + -0x75) = uVar6;
    *(int32_t *)(unaff_RBP + -0x71) = uVar2;
    *(float *)(unaff_RBP + -0x6d) = fVar9;
    *(float *)(unaff_RBP + -0x6d) = fVar9 * *(float *)(lVar8 + 0x1628);
    uVar6 = func_0x000180121e20(unaff_RBP + -0x79);
    MathInterpolationCalculator0(*(uint64_t *)(unaff_R14 + 0x2e8),unaff_RBP + -0x69,unaff_RBP + -0x61,uVar6,
                  CONCAT44(uVar11,unaff_XMM6_Da));
  }
  lVar4 = SYSTEM_DATA_MANAGER_A;
  puVar1 = *(int32_t **)(unaff_RBP + 0x7f);
  lVar8 = *(int64_t *)(unaff_R14 + 0x2e8);
  uVar11 = puVar1[1];
  uVar6 = puVar1[2];
  fVar9 = (float)puVar1[3];
  *(int32_t *)(unaff_RBP + -0x79) = *puVar1;
  *(int32_t *)(unaff_RBP + -0x75) = uVar11;
  *(int32_t *)(unaff_RBP + -0x71) = uVar6;
  *(float *)(unaff_RBP + -0x6d) = fVar9;
  *(float *)(unaff_RBP + -0x6d) = fVar9 * *(float *)(lVar4 + 0x1628);
  uVar7 = func_0x000180121e20(unaff_RBP + -0x79);
  if ((uVar7 & 0xff000000) != 0) {
    if ((*(int *)(lVar8 + 0x70) == 0) ||
       (unaff_R12 !=
        *(int64_t *)(*(int64_t *)(lVar8 + 0x78) + -8 + (int64_t)*(int *)(lVar8 + 0x70) * 8))) {
      bVar3 = true;
      RenderingSystem_TextureLoader(lVar8);
    }
    else {
      bVar3 = false;
    }
    Network_ConnectionManager(lVar8,6,4);
    FUN_180292290(lVar8,unaff_RBP + -0x69,unaff_RBP + -0x61,*(uint64_t *)(unaff_RBP + 0x5f),
                  *(uint64_t *)(unaff_RBP + 0x67));
    if (bVar3) {
      *(int *)(lVar8 + 0x70) = *(int *)(lVar8 + 0x70) + -1;
      SystemCore_Initialize(lVar8);
    }
  }
  return uVar5;
}



int8_t FUN_18011103c(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180111070(char *param_1,char *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint64_t uVar6;
  int64_t lVar7;
  byte bVar8;
  int iVar9;
  int32_t uVar10;
  int32_t uVar11;
  uint64_t uVar12;
  char *pcVar13;
  void *puVar14;
  int64_t lVar15;
  int64_t lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStackX_18;
  float fStackX_1c;
  char acStackX_20 [8];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int32_t uStack_e8;
  int32_t uStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar7 = SYSTEM_DATA_MANAGER_A;
  uVar12 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar12 + 0xb1) = 1;
  lVar15 = *(int64_t *)(lVar7 + 0x1af8);
  if (*(char *)(lVar15 + 0xb4) == '\0') {
    iVar9 = SystemCore_HandleInput(param_1,0,
                          *(int32_t *)
                           (*(int64_t *)(lVar15 + 0x220) + -4 +
                           (int64_t)*(int *)(lVar15 + 0x218) * 4));
    if (*(int *)(lVar7 + 0x1b2c) == iVar9) {
      *(int *)(lVar7 + 0x1b34) = iVar9;
    }
    if (*(int *)(lVar7 + 0x1b30) == iVar9) {
      *(int8_t *)(lVar7 + 0x1b3f) = 1;
    }
    pcVar13 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar13 != '\0') {
        if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
           (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar5 = *(float **)(lVar7 + 0x19f0);
    fVar19 = *(float *)(lVar7 + 0x19f8);
    if (param_1 == pcVar13) {
      fVar20 = 0.0;
    }
    else {
      SystemCore_StateController(pfVar5,&fStackX_18,fVar19,0x7f7fffff,0xbf800000,param_1,pcVar13,0);
      if (0.0 < fStackX_18) {
        fStackX_18 = fStackX_18 - fVar19 / *pfVar5;
      }
      fVar20 = (float)(int)(fStackX_18 + 0.95);
      fVar19 = fStackX_1c;
    }
    fVar2 = *(float *)(lVar15 + 0x100);
    fVar3 = *(float *)(lVar15 + 0x104);
    uVar6 = *(uint64_t *)(lVar15 + 0x100);
    fVar17 = *(float *)(lVar7 + 0x1660) + *(float *)(lVar7 + 0x1660) + fVar19;
    fVar22 = fVar3 + fVar17;
    fVar17 = fVar2 + fVar17;
    fStackX_18 = fVar17 - fVar2;
    fVar23 = fVar22 - fVar3;
    fStackX_1c = fVar23;
    fStack_e0 = fVar17;
    fStack_dc = fVar22;
    func_0x000180124080(&fStackX_18);
    fStack_108 = fVar2;
    fStack_104 = fVar3;
    fStack_100 = fVar17;
    fStack_fc = fVar22;
    if (0.0 < fVar20) {
      func_0x00018012e760(0);
    }
    fVar4 = *(float *)(lVar15 + 0x100);
    fVar21 = *(float *)(lVar7 + 0x1660) + *(float *)(lVar15 + 0x104);
    fVar18 = fVar4 + fVar20;
    fVar19 = fVar19 + fVar21;
    fStack_f8 = fVar4;
    fStack_f4 = fVar21;
    fStack_f0 = fVar18;
    fStack_ec = fVar19;
    if (0.0 < fVar20) {
      fStackX_18 = fVar18 - fVar4;
      fStackX_1c = fVar23;
      func_0x000180124080(&fStackX_18);
      fStack_108 = fVar4;
      if (fVar2 <= fVar4) {
        fStack_108 = fVar2;
      }
      fStack_104 = fVar3;
      if (fVar21 <= fVar3) {
        fStack_104 = fVar21;
      }
      fStack_100 = fVar18;
      if (fVar18 <= fVar17) {
        fStack_100 = fVar17;
      }
      fStack_fc = fVar19;
      if (fVar19 <= fVar22) {
        fStack_fc = fVar22;
      }
    }
    uVar12 = Memory_GarbageCollector(&fStack_108,iVar9,0);
    if ((char)uVar12 != '\0') {
      bVar8 = SystemCore_Formatter(&fStack_108,iVar9,&fStackX_18,acStackX_20,0);
      if (bVar8 != 0) {
        *param_2 = *param_2 == '\0';
        *(int8_t *)(lVar7 + 0x1b3e) = 1;
        puVar1 = (uint *)(*(int64_t *)(lVar7 + 0x1af8) + 0x148);
        *puVar1 = *puVar1 | 4;
      }
      lVar15 = lVar7;
      if (iVar9 == *(int *)(lVar7 + 0x1ca0)) {
        UtilitiesSystem_Validator(&fStack_108,1,lVar7);
        lVar15 = SYSTEM_DATA_MANAGER_A;
      }
      uVar11 = *(int32_t *)(lVar7 + 0x1664);
      if ((acStackX_20[0] == '\0') || (fStackX_18._0_1_ == '\0')) {
        lVar16 = (uint64_t)(fStackX_18._0_1_ != '\0') + 7;
      }
      else {
        lVar16 = 9;
      }
      pfVar5 = (float *)(lVar15 + 0x1628 + (lVar16 + 10) * 0x10);
      fStack_108 = *pfVar5;
      fStack_104 = pfVar5[1];
      fStack_100 = pfVar5[2];
      fStack_fc = pfVar5[3] * *(float *)(lVar15 + 0x1628);
      uVar10 = func_0x000180121e20(&fStack_108);
      SystemCore_ResourceManager(uVar6,CONCAT44(fStack_dc,fStack_e0),uVar10,1,uVar11);
      if (*param_2 != '\0') {
        fVar17 = fVar17 - fVar2;
        fVar19 = fVar17;
        if (fVar23 <= fVar17) {
          fVar19 = fVar23;
        }
        fVar19 = (float)(int)(fVar19 * 0.16666667);
        uStack_e8 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17e8);
        uStack_e4 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17ec);
        fStack_e0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17f0);
        if (fVar19 <= 1.0) {
          fVar19 = 1.0;
        }
        fStack_dc = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17f4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        uVar11 = func_0x000180121e20(&uStack_e8);
        FUN_180122f40(CONCAT44(fVar19 + fVar3,fVar19 + fVar2),uVar11,fVar17 - (fVar19 + fVar19));
      }
      if (*(char *)(lVar7 + 0x2e38) != '\0') {
        puVar14 = &rendering_buffer_2108_ptr;
        if (*param_2 != '\0') {
          puVar14 = &rendering_buffer_2092_ptr;
        }
        SystemCore_ThreadController(&fStack_f8,puVar14,0);
      }
      if (0.0 < fVar20) {
        SystemCore_ManageMemory(CONCAT44(fStack_f4,fStack_f8),param_1,0,1);
      }
      return (uint64_t)bVar8;
    }
  }
  return uVar12 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180111101(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint *puVar1;
  int32_t *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  uint64_t uVar7;
  byte bVar8;
  int iVar9;
  int32_t uVar10;
  int32_t uVar11;
  int64_t in_RAX;
  uint64_t uVar12;
  char *pcVar13;
  void *puVar14;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar15;
  int64_t unaff_R13;
  char *unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  
  iVar9 = SystemCore_HandleInput(param_1,param_2,*(int32_t *)(in_RAX + -4 + param_3 * 4));
  if (*(int *)(unaff_RSI + 0x1b2c) == iVar9) {
    *(int *)(unaff_RSI + 0x1b34) = iVar9;
  }
  if (*(int *)(unaff_RSI + 0x1b30) == iVar9) {
    *(int8_t *)(unaff_RSI + 0x1b3f) = 1;
  }
  pcVar13 = unaff_R15;
  if (unaff_R15 != (char *)0xffffffffffffffff) {
    while (*pcVar13 != '\0') {
      if (((*pcVar13 == '#') && (pcVar13[1] == '#')) ||
         (pcVar13 = pcVar13 + 1, pcVar13 == (char *)0xffffffffffffffff)) break;
    }
  }
  pfVar6 = *(float **)(unaff_RSI + 0x19f0);
  fVar19 = *(float *)(unaff_RSI + 0x19f8);
  if (unaff_R15 == pcVar13) {
    fVar16 = 0.0;
  }
  else {
    SystemCore_StateController(pfVar6,unaff_RBP + 0x60,fVar19,0x7f7fffff,0xbf800000);
    fVar16 = *(float *)(unaff_RBP + 0x60);
    if (0.0 < fVar16) {
      fVar16 = fVar16 - fVar19 / *pfVar6;
    }
    fVar19 = *(float *)(unaff_RBP + 100);
    fVar16 = (float)(int)(fVar16 + 0.95);
  }
  fVar3 = *(float *)(unaff_R13 + 0x100);
  fVar4 = *(float *)(unaff_R13 + 0x104);
  uVar7 = *(uint64_t *)(unaff_R13 + 0x100);
  fVar17 = *(float *)(unaff_RSI + 0x1660) + *(float *)(unaff_RSI + 0x1660) + fVar19;
  fVar21 = fVar4 + fVar17;
  fVar17 = fVar3 + fVar17;
  fVar22 = fVar21 - fVar4;
  *(float *)(unaff_RBP + 0x60) = fVar17 - fVar3;
  *(float *)(unaff_RBP + 100) = fVar22;
  in_stack_00000068 = fVar17;
  fStack000000000000006c = fVar21;
  func_0x000180124080(unaff_RBP + 0x60);
  in_stack_00000040 = fVar3;
  fStack0000000000000044 = fVar4;
  in_stack_00000048 = fVar17;
  fStack000000000000004c = fVar21;
  if (0.0 < fVar16) {
    func_0x00018012e760(0);
  }
  fVar5 = *(float *)(unaff_R13 + 0x100);
  fVar20 = *(float *)(unaff_RSI + 0x1660) + *(float *)(unaff_R13 + 0x104);
  fVar18 = fVar5 + fVar16;
  fVar19 = fVar19 + fVar20;
  in_stack_00000050 = fVar5;
  fStack0000000000000054 = fVar20;
  in_stack_00000058 = fVar18;
  fStack000000000000005c = fVar19;
  if (0.0 < fVar16) {
    *(float *)(unaff_RBP + 100) = fVar22;
    *(float *)(unaff_RBP + 0x60) = fVar18 - fVar5;
    func_0x000180124080(unaff_RBP + 0x60);
    in_stack_00000040 = fVar5;
    if (fVar3 <= fVar5) {
      in_stack_00000040 = fVar3;
    }
    fStack0000000000000044 = fVar4;
    if (fVar20 <= fVar4) {
      fStack0000000000000044 = fVar20;
    }
    in_stack_00000048 = fVar18;
    if (fVar18 <= fVar17) {
      in_stack_00000048 = fVar17;
    }
    fStack000000000000004c = fVar19;
    if (fVar19 <= fVar21) {
      fStack000000000000004c = fVar21;
    }
  }
  uVar12 = Memory_GarbageCollector(&stack0x00000040,iVar9,0);
  if ((char)uVar12 == '\0') {
    uVar12 = uVar12 & 0xffffffffffffff00;
  }
  else {
    bVar8 = SystemCore_Formatter(&stack0x00000040,iVar9,unaff_RBP + 0x60,unaff_RBP + 0x68,0);
    pcVar13 = *(char **)(unaff_RBP + 0x58);
    if (bVar8 != 0) {
      *pcVar13 = *pcVar13 == '\0';
      *(int8_t *)(unaff_RSI + 0x1b3e) = 1;
      puVar1 = (uint *)(*(int64_t *)(unaff_RSI + 0x1af8) + 0x148);
      *puVar1 = *puVar1 | 4;
    }
    if (iVar9 == *(int *)(unaff_RSI + 0x1ca0)) {
      UtilitiesSystem_Validator(&stack0x00000040,1);
      unaff_RSI = SYSTEM_DATA_MANAGER_A;
    }
    uVar11 = *(int32_t *)(unaff_RBX + 0x1664);
    if ((*(char *)(unaff_RBP + 0x68) == '\0') || (*(char *)(unaff_RBP + 0x60) == '\0')) {
      lVar15 = (uint64_t)(*(char *)(unaff_RBP + 0x60) != '\0') + 7;
    }
    else {
      lVar15 = 9;
    }
    puVar2 = (int32_t *)(unaff_RSI + 0x1628 + (lVar15 + 10) * 0x10);
    in_stack_00000040 = (float)*puVar2;
    fStack0000000000000044 = (float)puVar2[1];
    in_stack_00000048 = (float)puVar2[2];
    fStack000000000000004c = (float)puVar2[3] * *(float *)(unaff_RSI + 0x1628);
    uVar10 = func_0x000180121e20(&stack0x00000040);
    SystemCore_ResourceManager(uVar7,CONCAT44(fStack000000000000006c,in_stack_00000068),uVar10,1,uVar11);
    if (*pcVar13 != '\0') {
      fVar17 = fVar17 - fVar3;
      fVar19 = fVar17;
      if (fVar22 <= fVar17) {
        fVar19 = fVar22;
      }
      fVar19 = (float)(int)(fVar19 * 0.16666667);
      uStack0000000000000060 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17e8);
      uStack0000000000000064 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17ec);
      in_stack_00000068 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17f0);
      if (fVar19 <= 1.0) {
        fVar19 = 1.0;
      }
      fStack000000000000006c =
           *(float *)(SYSTEM_DATA_MANAGER_A + 0x17f4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
      uVar11 = func_0x000180121e20(&stack0x00000060);
      FUN_180122f40(CONCAT44(fVar19 + fVar4,fVar19 + fVar3),uVar11,fVar17 - (fVar19 + fVar19));
    }
    if (*(char *)(unaff_RBX + 0x2e38) != '\0') {
      puVar14 = &rendering_buffer_2108_ptr;
      if (*pcVar13 != '\0') {
        puVar14 = &rendering_buffer_2092_ptr;
      }
      SystemCore_ThreadController(&stack0x00000050,puVar14,0);
    }
    if (0.0 < fVar16) {
      SystemCore_ManageMemory(CONCAT44(fStack0000000000000054,in_stack_00000050));
    }
    uVar12 = (uint64_t)bVar8;
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char FUN_180111351(void)

{
  uint *puVar1;
  int32_t *puVar2;
  char *pcVar3;
  char cVar4;
  int32_t uVar5;
  int32_t uVar6;
  void *puVar7;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar8;
  int unaff_R14D;
  float fVar9;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM11_Da;
  float fVar10;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  int32_t in_stack_00000040;
  int32_t uStack0000000000000044;
  int32_t in_stack_00000048;
  float fStack000000000000004c;
  uint64_t in_stack_00000050;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  float fStack000000000000006c;
  
  cVar4 = SystemCore_Formatter(&stack0x00000040,unaff_R14D,unaff_RBP + 0x60,unaff_RBP + 0x68);
  pcVar3 = *(char **)(unaff_RBP + 0x58);
  if (cVar4 != '\0') {
    *pcVar3 = *pcVar3 == (char)unaff_RDI;
    *(int8_t *)(unaff_RSI + 0x1b3e) = 1;
    puVar1 = (uint *)(*(int64_t *)(unaff_RSI + 0x1af8) + 0x148);
    *puVar1 = *puVar1 | 4;
  }
  if (unaff_R14D == *(int *)(unaff_RSI + 0x1ca0)) {
    UtilitiesSystem_Validator(&stack0x00000040,1);
    unaff_RSI = SYSTEM_DATA_MANAGER_A;
  }
  uVar6 = *(int32_t *)(unaff_RBX + 0x1664);
  if ((*(char *)(unaff_RBP + 0x68) == (char)unaff_RDI) || (*(char *)(unaff_RBP + 0x60) == '\0')) {
    lVar8 = CONCAT71((int7)((uint64_t)unaff_RDI >> 8),*(char *)(unaff_RBP + 0x60) != '\0') + 7;
  }
  else {
    lVar8 = 9;
  }
  puVar2 = (int32_t *)(unaff_RSI + 0x1628 + (lVar8 + 10) * 0x10);
  in_stack_00000040 = *puVar2;
  uStack0000000000000044 = puVar2[1];
  in_stack_00000048 = puVar2[2];
  fStack000000000000004c = (float)puVar2[3] * *(float *)(unaff_RSI + 0x1628);
  uVar5 = func_0x000180121e20(&stack0x00000040);
  SystemCore_ResourceManager(CONCAT44(unaff_XMM14_Da,unaff_XMM13_Da),
                CONCAT44(fStack000000000000006c,uStack0000000000000068),uVar5,1,uVar6);
  if (*pcVar3 != '\0') {
    fVar10 = unaff_XMM11_Da - unaff_XMM13_Da;
    fVar9 = fVar10;
    if (unaff_XMM15_Da <= fVar10) {
      fVar9 = unaff_XMM15_Da;
    }
    fVar9 = (float)(int)(fVar9 * 0.16666667);
    uStack0000000000000060 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17e8);
    uStack0000000000000064 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17ec);
    uStack0000000000000068 = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x17f0);
    if (fVar9 <= 1.0) {
      fVar9 = 1.0;
    }
    fStack000000000000006c =
         *(float *)(SYSTEM_DATA_MANAGER_A + 0x17f4) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    uVar6 = func_0x000180121e20(&stack0x00000060);
    FUN_180122f40(CONCAT44(fVar9 + unaff_XMM14_Da,fVar9 + unaff_XMM13_Da),uVar6,
                  fVar10 - (fVar9 + fVar9));
  }
  if (*(char *)(unaff_RBX + 0x2e38) != '\0') {
    puVar7 = &rendering_buffer_2108_ptr;
    if (*pcVar3 != '\0') {
      puVar7 = &rendering_buffer_2092_ptr;
    }
    SystemCore_ThreadController(&stack0x00000050,puVar7,0);
  }
  if (unaff_XMM8_Da < unaff_XMM9_Da) {
    SystemCore_ManageMemory(in_stack_00000050);
  }
  return cVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180111560(char *param_1,char param_2)

{
  uint *puVar1;
  int64_t lVar2;
  float *pfVar3;
  int64_t lVar4;
  int64_t lVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  char *pcVar12;
  void *puVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStackX_18;
  float fStackX_1c;
  float fStackX_20;
  float fStackX_24;
  int32_t uVar25;
  uint64_t in_stack_fffffffffffffee0;
  char *pcVar26;
  uint64_t uVar27;
  int32_t uVar28;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar5 = SYSTEM_DATA_MANAGER_A;
  uVar28 = (int32_t)((uint64_t)in_stack_fffffffffffffee0 >> 0x20);
  uVar10 = *(uint64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  *(int8_t *)(uVar10 + 0xb1) = 1;
  lVar2 = *(int64_t *)(lVar5 + 0x1af8);
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    iVar7 = SystemCore_HandleInput(param_1,0,
                          *(int32_t *)
                           (*(int64_t *)(lVar2 + 0x220) + -4 +
                           (int64_t)*(int *)(lVar2 + 0x218) * 4));
    if (*(int *)(lVar5 + 0x1b2c) == iVar7) {
      *(int *)(lVar5 + 0x1b34) = iVar7;
    }
    if (*(int *)(lVar5 + 0x1b30) == iVar7) {
      *(int8_t *)(lVar5 + 0x1b3f) = 1;
    }
    pcVar12 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (*pcVar12 != '\0') {
        if (((*pcVar12 == '#') && (pcVar12[1] == '#')) ||
           (pcVar12 = pcVar12 + 1, pcVar12 == (char *)0xffffffffffffffff)) break;
      }
    }
    pfVar3 = *(float **)(lVar5 + 0x19f0);
    fVar21 = *(float *)(lVar5 + 0x19f8);
    if (param_1 == pcVar12) {
      fVar23 = 0.0;
    }
    else {
      pcVar26 = param_1;
      SystemCore_StateController(pfVar3,&fStackX_18,fVar21,0x7f7fffff,0xbf800000,param_1,pcVar12,0);
      uVar28 = (int32_t)((uint64_t)pcVar26 >> 0x20);
      if (0.0 < fStackX_18) {
        fStackX_18 = fStackX_18 - fVar21 / *pfVar3;
      }
      fVar23 = (float)(int)(fStackX_18 + 0.95);
      fVar21 = fStackX_1c;
    }
    fVar22 = *(float *)(lVar2 + 0x100);
    fVar17 = *(float *)(lVar2 + 0x104);
    fVar15 = (*(float *)(lVar5 + 0x1660) + *(float *)(lVar5 + 0x1660) + fVar21) - 1.0;
    fVar18 = fVar22 + fVar15;
    fVar15 = fVar17 + fVar15;
    fVar16 = fVar18 - fVar22;
    fVar24 = fVar15 - fVar17;
    fStackX_18 = fVar18;
    fStackX_20 = fVar16;
    fStackX_24 = fVar24;
    func_0x000180124080(&fStackX_20);
    fStack_f8 = fVar22;
    fStack_f4 = fVar17;
    fStack_f0 = fVar18;
    fStack_ec = fVar15;
    if (0.0 < fVar23) {
      func_0x00018012e760();
    }
    fVar18 = *(float *)(lVar2 + 0x100);
    fVar20 = *(float *)(lVar5 + 0x1660) + *(float *)(lVar2 + 0x104);
    fVar19 = fVar18 + fVar23;
    fVar21 = fVar20 + fVar21;
    fStack_e8 = fVar18;
    fStack_e4 = fVar20;
    fStack_e0 = fVar19;
    fStack_dc = fVar21;
    if (0.0 < fVar23) {
      fStackX_20 = fVar19 - fVar18;
      fStackX_24 = fVar24;
      func_0x000180124080(&fStackX_20);
      if (fVar18 < fVar22) {
        fStack_f8 = fVar18;
      }
      if (fVar20 < fVar17) {
        fStack_f4 = fVar20;
      }
      if (fStackX_18 < fVar19) {
        fStack_f0 = fVar19;
      }
      if (fVar15 < fVar21) {
        fStack_ec = fVar21;
      }
    }
    fVar21 = fStackX_18;
    uVar10 = Memory_GarbageCollector(&fStack_f8,iVar7,0);
    if ((char)uVar10 != '\0') {
      uVar25 = 0;
      fVar18 = fVar24 * 0.5;
      fVar22 = (float)(int)((fVar22 + fVar21) * 0.5) + 0.5;
      fVar21 = (float)(int)((fVar17 + fVar15) * 0.5) + 0.5;
      fStack_100 = fVar22;
      fStack_fc = fVar21;
      bVar6 = SystemCore_Formatter(&fStack_f8,iVar7,&fStackX_18,&fStackX_20,0);
      if (bVar6 != 0) {
        *(int8_t *)(lVar5 + 0x1b3e) = 1;
        puVar1 = (uint *)(*(int64_t *)(lVar5 + 0x1af8) + 0x148);
        *puVar1 = *puVar1 | 4;
      }
      lVar14 = lVar5;
      if (iVar7 == *(int *)(lVar5 + 0x1ca0)) {
        UtilitiesSystem_Validator(&fStack_f8,1,lVar5);
        lVar14 = SYSTEM_DATA_MANAGER_A;
      }
      lVar4 = *(int64_t *)(lVar2 + 0x2e8);
      if ((fStackX_20._0_1_ == '\0') || (fStackX_18._0_1_ == '\0')) {
        lVar11 = (uint64_t)(fStackX_18._0_1_ != '\0') + 7;
      }
      else {
        lVar11 = 9;
      }
      pfVar3 = (float *)(lVar14 + 0x1628 + (lVar11 + 10) * 0x10);
      fStack_f8 = *pfVar3;
      fStack_f4 = pfVar3[1];
      fStack_f0 = pfVar3[2];
      fStack_ec = pfVar3[3] * *(float *)(lVar14 + 0x1628);
      uVar8 = func_0x000180121e20(&fStack_f8);
      if ((uVar8 & 0xff000000) != 0) {
        uVar27 = CONCAT44(uVar28,0xf);
        uVar25 = 0x40bc7edd;
        FUN_180293860(lVar4,&fStack_100,fVar18,0,0x40bc7edd,uVar27);
        uVar28 = (int32_t)((uint64_t)uVar27 >> 0x20);
        FUN_180293190(lVar4,*(uint64_t *)(lVar4 + 0x88),*(int32_t *)(lVar4 + 0x80),uVar8);
        lVar14 = SYSTEM_DATA_MANAGER_A;
        *(int32_t *)(lVar4 + 0x80) = 0;
      }
      if (param_2 != '\0') {
        fStack_f8 = *(float *)(lVar14 + 0x17e8);
        fStack_f4 = *(float *)(lVar14 + 0x17ec);
        fStack_f0 = *(float *)(lVar14 + 0x17f0);
        lVar4 = *(int64_t *)(lVar2 + 0x2e8);
        fStack_ec = *(float *)(lVar14 + 0x17f4) * *(float *)(lVar14 + 0x1628);
        uVar8 = func_0x000180121e20(&fStack_f8);
        if ((uVar8 & 0xff000000) != 0) {
          if (fVar16 <= fVar24) {
            fVar24 = fVar16;
          }
          uVar27 = CONCAT44(uVar28,0xf);
          uVar25 = 0x40bc7edd;
          fVar17 = (float)(int)(fVar24 * 0.16666667);
          if (fVar17 <= 1.0) {
            fVar17 = 1.0;
          }
          FUN_180293860(lVar4,&fStack_100,fVar18 - fVar17,0,0x40bc7edd,uVar27);
          uVar28 = (int32_t)((uint64_t)uVar27 >> 0x20);
          FUN_180293190(lVar4,*(uint64_t *)(lVar4 + 0x88),*(int32_t *)(lVar4 + 0x80),uVar8);
          lVar14 = SYSTEM_DATA_MANAGER_A;
          *(int32_t *)(lVar4 + 0x80) = 0;
        }
      }
      fVar17 = *(float *)(lVar5 + 0x1668);
      if (0.0 < fVar17) {
        fStack_f8 = *(float *)(lVar14 + 0x1728);
        fStack_f4 = *(float *)(lVar14 + 0x172c);
        fStack_f0 = *(float *)(lVar14 + 0x1730);
        fStackX_18 = fVar22 + 1.0;
        fStackX_1c = fVar21 + 1.0;
        fStack_ec = *(float *)(lVar14 + 0x1734) * *(float *)(lVar14 + 0x1628);
        uVar9 = func_0x000180121e20(&fStack_f8);
        uVar27 = CONCAT44(uVar28,fVar17);
        FUN_180294180(*(uint64_t *)(lVar2 + 0x2e8),&fStackX_18,fVar18,uVar9,uVar25,uVar27);
        uVar25 = (int32_t)((uint64_t)uVar27 >> 0x20);
        lVar2 = *(int64_t *)(lVar2 + 0x2e8);
        uVar28 = *(int32_t *)(lVar5 + 0x1668);
        fStack_f8 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        fStack_f4 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fStack_f0 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fStack_ec = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724) * *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        uVar8 = func_0x000180121e20(&fStack_f8);
        if ((uVar8 & 0xff000000) != 0) {
          FUN_180293860(lVar2,&fStack_100,fVar18 - 0.5,0,0x40bc7edd,CONCAT44(uVar25,0xf));
          RenderingSystem_LightManager(lVar2,*(uint64_t *)(lVar2 + 0x88),*(int32_t *)(lVar2 + 0x80),uVar8,1,
                        uVar28);
          *(int32_t *)(lVar2 + 0x80) = 0;
        }
      }
      if (*(char *)(lVar5 + 0x2e38) != '\0') {
        puVar13 = &rendering_buffer_2120_ptr;
        if (param_2 != '\0') {
          puVar13 = &rendering_buffer_2104_ptr;
        }
        SystemCore_ThreadController(&fStack_e8,puVar13,0);
      }
      if (0.0 < fVar23) {
        SystemCore_ManageMemory(CONCAT44(fStack_e4,fStack_e8),param_1,0,1);
      }
      return (uint64_t)bVar6;
    }
  }
  return uVar10 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





