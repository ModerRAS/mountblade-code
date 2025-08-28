n//  的语义化别名
#define SystemCore_SystemMonitor
n//  的语义化别名
#define SystemCore_DataCompressor
n//  的语义化别名
#define SystemCore_Formatter
n//  的语义化别名
#define SystemCore_InterruptHandler
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MathInterpolationCalculator */
#define MathInterpolationCalculator MathInterpolationCalculator
// 02_core_engine_part124_sub002_sub002.c - 1 个函数
// 函数: void GenericFunction_18012ae5a(float param_1,float param_2,float param_3,float param_4)
void GenericFunction_18012ae5a(float param_1,float param_2,float param_3,float param_4)
{
  int *piVar1;
  byte *pbVar2;
  int8_t *puVar3;
  char cVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int32_t *puVar14;
  int64_t lVar15;
  float *pfVar16;
  uint64_t uVar17;
  int8_t uVar18;
  float *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  byte bVar19;
  float *unaff_R12;
  int64_t lVar20;
  bool bVar21;
  int64_t unaff_R14;
  float unaff_R15D;
  bool in_ZF;
  uint64_t uVar22;
  uint64_t uVar23;
  int8_t auVar24 [16];
  int8_t auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float in_XMM4_Da;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  float fVar32;
  float unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  uint64_t *local_var_20;
  int64_t local_var_40;
  char cStack0000000000000048;
  char cStack0000000000000049;
  float fStack0000000000000050;
  float fStack0000000000000054;
  char cStack0000000000000058;
  char cStack0000000000000059;
  float fStack0000000000000060;
  float fStack0000000000000064;
  int32_t local_var_68;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float local_var_78;
  fVar32 = param_1 + unaff_XMM15_Da;
  if (param_1 + unaff_XMM15_Da <= param_2) {
    fVar32 = param_2;
  }
  cVar4 = *(char *)(unaff_R14 + 0xb2);
  fVar32 = (float)(int)fVar32;
  *(int64_t *)(unaff_RBP + -0xe) = CONCAT71((int7)(unaff_RDI >> 8),!in_ZF) + 1;
  lVar13 = SYSTEM_DATA_MANAGER_A;
  if ((((cVar4 != '\0') || ((*(byte *)(unaff_R14 + 0xc) & 0x42) != 0)) ||
      (0 < *(int *)(unaff_R14 + 0xc4))) ||
     ((0 < *(int *)(unaff_R14 + 200) || (*(char *)(unaff_R14 + 0xb0) == '\0')))) goto LAB_18012b510;
  cVar4 = *(char *)(SYSTEM_DATA_MANAGER_A + 0xcb);
  fVar26 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * in_XMM4_Da;
  fVar27 = param_3 + unaff_XMM15_Da + *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * param_4;
  unaff_RBP[2] = (float)(-(uint)(cVar4 != '\0') & 4);
  if (fVar27 <= fVar26) {
    fVar27 = fVar26;
  }
  fVar26 = (float)(int)((float)(int)fVar27 * 0.75);
  fVar27 = unaff_XMM13_Da;
  if (cVar4 != '\0') {
    fVar27 = unaff_XMM11_Da;
    unaff_XMM13_Db = unaff_XMM11_Db;
    unaff_XMM13_Dc = unaff_XMM11_Dc;
    unaff_XMM13_Dd = unaff_XMM11_Dd;
  }
  fStack0000000000000070 = 3.4028235e+38;
  fStack0000000000000074 = 3.4028235e+38;
  fStack0000000000000060 = 3.4028235e+38;
  fStack0000000000000064 = 3.4028235e+38;
  GenericFunction_18012e1b0(&rendering_buffer_2464_ptr);
  lVar20 = 0;
  do {
    uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    _fStack0000000000000050 =
         CONCAT44(*(float *)(unaff_R14 + 0x4c) + *(float *)(unaff_R14 + 0x44),
                  *(float *)(unaff_R14 + 0x40) + *(float *)(unaff_R14 + 0x48));
    Function_4fa7bf82(unaff_RBP + 0xe,unaff_R14 + 0x40,&local_buffer_00000050,unaff_R12 + -2);
    auVar24._4_4_ = unaff_XMM13_Db;
    auVar24._0_4_ = fVar27;
    auVar24._8_4_ = unaff_XMM13_Dc;
    auVar24._12_4_ = unaff_XMM13_Dd;
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = fVar27 * *unaff_R12;
    fVar29 = fVar26 * *unaff_R12 + unaff_RBP[0xe];
    fVar30 = unaff_R12[1];
    fVar28 = fVar26 * unaff_R12[1] + unaff_RBP[0xf];
    fVar31 = unaff_RBP[0xe] - auVar25._0_4_;
    unaff_RBP[-0x1a] = fVar29;
    fVar30 = unaff_RBP[0xf] - fVar27 * fVar30;
    unaff_RBP[-0x19] = fVar28;
    unaff_RBP[-0x1c] = fVar31;
    unaff_RBP[-0x1b] = fVar30;
    if (fVar29 < fVar31) {
      unaff_RBP[-0x1c] = fVar29;
      unaff_RBP[-0x1a] = fVar31;
    }
    if (fVar28 < fVar30) {
      unaff_RBP[-0x1b] = fVar28;
      unaff_RBP[-0x19] = fVar30;
    }
    uVar10 = (uint)unaff_RDI;
    uVar5 = Function_f2822285(auVar25._0_8_,(int64_t)(int)uVar10);
    local_var_20 = (uint64_t *)CONCAT44(uVar6,0x2020);
    SystemCore_Formatter(unaff_RBP + -0x1c,uVar5,&local_buffer_00000048,(int64_t)&local_buffer_00000048 + 1,
                  local_var_20);
    if (((cStack0000000000000048 == '\0') && (cStack0000000000000049 == '\0')) ||
       (*(uint *)(lVar13 + 0x1dcc) = (~uVar10 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
      if (uVar10 == 0) goto LAB_18012b0c8;
      if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
      if (cStack0000000000000048 != '\0') goto LAB_18012b1a3;
    }
    else {
      if ((*(char *)(lVar13 + 0x415) == '\0') || (uVar10 != 0)) {
        fVar30 = *unaff_R12;
        fVar28 = unaff_R12[1];
        unaff_RBP[0x10] = fVar30 * -fVar26;
        unaff_RBP[0x11] = fVar28 * -fVar26;
        unaff_RBP[0x12] = fVar27 * fVar30;
        unaff_RBP[0x13] = fVar27 * fVar28;
        pfVar11 = (float *)Function_4fa7bf82(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                               unaff_R12 + -2);
        fVar30 = (*(float *)(lVar13 + 0x118) - *(float *)(lVar13 + 0x1b48)) + *pfVar11;
        local_var_20 = (uint64_t *)&local_buffer_00000060;
        unaff_RBP[0x15] = (*(float *)(lVar13 + 0x11c) - *(float *)(lVar13 + 0x1b4c)) + pfVar11[1];
        unaff_RBP[0x14] = fVar30;
        GenericFunction_1801295b0(fVar30,unaff_RBP + 0x14,unaff_R12 + -2,&local_buffer_00000070,local_var_20);
        goto LAB_18012b18f;
      }
      pfVar11 = (float *)SystemCore_MemoryManager(unaff_RBP + -0x14);
      fStack0000000000000060 = *pfVar11;
      fStack0000000000000064 = pfVar11[1];
      Function_1b4012f5(0,0);
LAB_18012b0c8:
      if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
        cVar4 = (cStack0000000000000048 != '\0') + '\x1e';
      }
      else {
LAB_18012b0d0:
        cVar4 = ' ';
      }
      fVar30 = (float)GenericFunction_180121ed0(cVar4);
      unaff_RBP[lVar20 + 0x20] = fVar30;
    }
    unaff_RDI = (uint64_t)(uVar10 + 1);
    lVar20 = lVar20 + 1;
    unaff_R12 = unaff_R12 + 6;
  } while (lVar20 < *(int64_t *)(unaff_RBP + -0xe));
  fVar27 = unaff_RBP[2];
  unaff_R12 = (float *)0x180bf66e8;
  unaff_R15D = unaff_RBP[-10];
  fVar26 = 0.0;
  if (fVar27 != 0.0) {
    do {
      uVar5 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      uVar22 = GenericFunction_1801296e0(unaff_RBP + -0x20);
      uVar6 = Function_f2822285(uVar22,(int64_t)((int)fVar26 + 4));
      local_var_20 = (uint64_t *)CONCAT44(uVar5,0x20);
      SystemCore_Formatter(unaff_RBP + -0x20,uVar6,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058,
                    local_var_20);
      if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar13 + 0x1b24))) ||
          (cStack0000000000000058 != '\0')) &&
         (*(uint *)(lVar13 + 0x1dcc) = ((uint)fVar26 & 1) + 3, cStack0000000000000058 != '\0')) {
        uVar23 = *(uint64_t *)(unaff_R14 + 0x40);
        *(uint64_t *)(unaff_RBP + -10) = uVar23;
        unaff_RBP[0xc] = fVar26;
        _fStack0000000000000050 = 0;
        if (fVar26 == 0.0) {
LAB_18012b293:
          fVar30 = (*(float *)(lVar13 + 0x11c) - *(float *)(lVar13 + 0x1b4c)) + unaff_XMM11_Da;
          uVar23 = (uint64_t)(uint)fVar30;
          unaff_RBP[-9] = fVar30;
        }
        else if (fVar26 == 1.4013e-45) {
          _fStack0000000000000050 = 0x3f800000;
LAB_18012b2d2:
          fVar30 = (*(float *)(lVar13 + 0x118) - *(float *)(lVar13 + 0x1b48)) + unaff_XMM11_Da;
          uVar23 = (uint64_t)(uint)fVar30;
          unaff_RBP[-10] = fVar30;
        }
        else {
          if (fVar26 == 2.8026e-45) {
            _fStack0000000000000050 = 0x3f80000000000000;
            goto LAB_18012b293;
          }
          if (fVar26 == 4.2039e-45) goto LAB_18012b2d2;
        }
        local_var_20 = (uint64_t *)&local_buffer_00000060;
        GenericFunction_1801295b0(uVar23,unaff_RBP + -10,&local_buffer_00000050,&local_buffer_00000070,local_var_20);
      }
      fVar26 = (float)((int)fVar26 + 1);
    } while ((int)fVar26 < (int)fVar27);
  }
  piVar1 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
  *piVar1 = *piVar1 + -1;
  if ((*(int64_t *)(lVar13 + 0x1cd8) != 0) &&
     (*(int64_t *)(*(int64_t *)(lVar13 + 0x1cd8) + 0x3a0) == unaff_R14)) {
    iVar9 = *(int *)(lVar13 + 0x1cc0);
    fVar27 = unaff_XMM13_Da;
    fVar26 = unaff_XMM13_Da;
    if (iVar9 == 3) {
      if (*(char *)(lVar13 + 0x135) == '\0') goto LAB_18012b465;
      local_var_20 =
           (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),unaff_XMM13_Da);
      pfVar11 = (float *)SystemCore_ConfigLoader(unaff_RBP + -0x14,1,0);
      fVar27 = *pfVar11;
      fVar26 = pfVar11[1];
      iVar9 = *(int *)(lVar13 + 0x1cc0);
    }
    if (iVar9 == 4) {
      local_var_20 =
           (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),unaff_XMM13_Da);
      pfVar11 = (float *)SystemCore_ConfigLoader(unaff_RBP + 0x18,2,0);
      fVar27 = *pfVar11;
      fVar26 = pfVar11[1];
    }
    if ((fVar27 != unaff_XMM13_Da) || (fVar26 != unaff_XMM13_Da)) {
      *(int8_t *)(lVar13 + 0x1cf8) = 0;
      *(int8_t *)(lVar13 + 0x1d07) = 1;
      fVar27 = (float)GenericFunction_180121ed0(0x20);
      unaff_RBP[0x20] = fVar27;
      pfVar11 = (float *)SystemCore_MemoryManager(unaff_RBP + -0x18);
      fStack0000000000000060 = *pfVar11;
      fStack0000000000000064 = pfVar11[1];
    }
  }
LAB_18012b465:
  lVar13 = SYSTEM_DATA_MANAGER_A;
  if ((fStack0000000000000060 != unaff_XMM14_Da) &&
     ((fStack0000000000000060 != *(float *)(unaff_R14 + 0x50) ||
      (fStack0000000000000064 != *(float *)(unaff_R14 + 0x54))))) {
    *(float *)(unaff_R14 + 0x50) = fStack0000000000000060;
    *(float *)(unaff_R14 + 0x54) = fStack0000000000000064;
    if (((*(uint *)(unaff_R14 + 0xc) & 0x100) == 0) &&
       (*(float *)(lVar13 + 0x2e04) <= unaff_XMM13_Da)) {
      *(int32_t *)(lVar13 + 0x2e04) = *(int32_t *)(lVar13 + 0x1c);
    }
  }
  lVar13 = SYSTEM_DATA_MANAGER_A;
  if (fStack0000000000000070 != unaff_XMM14_Da) {
    *(float *)(unaff_R14 + 0x40) = (float)(int)fStack0000000000000070;
    *(float *)(unaff_R14 + 0x44) = (float)(int)fStack0000000000000074;
    if (((*(uint *)(unaff_R14 + 0xc) & 0x100) == 0) &&
       (*(float *)(lVar13 + 0x2e04) <= unaff_XMM13_Da)) {
      *(int32_t *)(lVar13 + 0x2e04) = *(int32_t *)(lVar13 + 0x1c);
    }
  }
  unaff_RDI = 0;
  *(uint64_t *)(unaff_R14 + 0x48) = *(uint64_t *)(unaff_R14 + 0x50);
  unaff_R14 = local_var_40;
LAB_18012b510:
  if (*(char *)(unaff_R14 + 0xae) != '\0') {
    if (*(char *)(*(int64_t *)(unaff_R14 + 0x28) + 0x49) == '\0') {
      *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x28) + 8) = *(uint64_t *)(unaff_R14 + 0x40);
      unaff_R14 = local_var_40;
    }
    if (*(char *)(*(int64_t *)(unaff_R14 + 0x28) + 0x4a) == '\0') {
      *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x28) + 0x10) = *(uint64_t *)(unaff_R14 + 0x48);
      unaff_R14 = local_var_40;
    }
    puVar12 = (uint64_t *)Function_a50fc06d(*(uint64_t *)(unaff_R14 + 0x28));
    uVar22 = puVar12[1];
    *(uint64_t *)(unaff_RBP + 4) = *puVar12;
    *(uint64_t *)(unaff_RBP + 6) = uVar22;
    unaff_R14 = local_var_40;
  }
  *(uint64_t *)(unaff_R14 + 0x34) = *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x28) + 8);
  if ((*(float *)(local_var_40 + 0x48) <= unaff_XMM13_Da) ||
     (((uint)unaff_R15D & 0x2000040) != 0)) {
    fVar27 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar27 = *(float *)(local_var_40 + 0x48) * 0.65;
  }
  *(float *)(local_var_40 + 0x284) = (float)(int)fVar27;
  DataStructure_91500(*(uint64_t *)(local_var_40 + 0x2e8));
  *(uint *)(*(int64_t *)(local_var_40 + 0x2e8) + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)CONCAT71((int7)(unaff_RDI >> 8),*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar13 = *(int64_t *)(local_var_40 + 0x2e8);
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  SystemCore_InterruptHandler(lVar13 + 0x70,unaff_RBP + -0x14);
  SystemCore_Initialize(lVar13);
  if ((((uint)unaff_R15D & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar11 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x228);
    pfVar16 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar11 = unaff_RBP + 4;
    pfVar16 = unaff_RBP + 6;
  }
  SystemCore_PerformanceMonitor(pfVar11,pfVar16);
  if (((((uint)unaff_R15D >> 0x1b & 1) == 0) ||
      (lVar13 = Function_25884858(), local_var_40 != lVar13)) ||
     (0 < *(int *)(local_var_40 + 0xdc))) {
    bVar19 = 0;
  }
  else {
    bVar19 = 1;
  }
  uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  lVar13 = *(int64_t *)(unaff_RSI + 0x1ce0);
  if ((lVar13 == 0) ||
     ((local_var_40 != *(int64_t *)(lVar13 + 0x3a0) &&
      (((lVar20 = *(int64_t *)(unaff_RSI + 0x1ce8), lVar20 == 0 || (local_var_40 != lVar20))
       || (*(int64_t *)(lVar20 + 0x28) == *(int64_t *)(lVar13 + 0x28))))))) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if ((bVar19 != 0) || (bVar21)) {
    fVar27 = *(float *)(unaff_RSI + 0x1dc8);
    fVar26 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    pfVar11 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar19 + 0x3a) * 0x10);
    fVar30 = pfVar11[1];
    fVar28 = pfVar11[2];
    fVar29 = pfVar11[3];
    unaff_RBP[-0x20] = *pfVar11;
    unaff_RBP[-0x1f] = fVar30;
    unaff_RBP[-0x1e] = fVar28;
    unaff_RBP[-0x1d] = fVar29;
    unaff_RBP[-0x1d] = fVar29 * fVar27 * fVar26;
    uVar5 = Function_56da4ab5(unaff_RBP + -0x20);
    local_var_20 = (uint64_t *)CONCAT44(uVar6,unaff_XMM13_Da);
    MathInterpolationCalculator0(*(uint64_t *)(local_var_40 + 0x2e8),unaff_RBP + 4,unaff_RBP + 6,uVar5,
                  local_var_20);
    if ((bVar21) && (local_var_40 == *(int64_t *)(unaff_RSI + 0x1ce0))) {
      SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x18);
      SystemFunction_00018010e610(unaff_RBP + -0x18);
      uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar27 = *(float *)(unaff_RSI + 0x1cf4);
        uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
        uVar5 = *(int32_t *)(unaff_RSI + 0x1634);
        fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
        fVar28 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
        fVar29 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
        fVar26 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
        unaff_RBP[-0x1f] = fVar30;
        unaff_RBP[-0x1e] = fVar28;
        unaff_RBP[-0x1d] = fVar29;
        unaff_RBP[-0x1d] = fVar29 * fVar27 * 0.25 * fVar26;
        uVar7 = Function_56da4ab5(unaff_RBP + -0x20);
        local_var_20 = (uint64_t *)CONCAT44(uVar6,uVar5);
        MathInterpolationCalculator0(uVar22,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar7,local_var_20);
      }
    }
  }
  uVar6 = local_var_68;
  lVar13 = *(int64_t *)(unaff_RSI + 0x1cd8);
  fVar27 = *(float *)(local_var_40 + 0x78);
  fVar26 = *(float *)(local_var_40 + 0x7c);
  if (lVar13 == 0) {
    lVar13 = *(int64_t *)(unaff_RSI + 0x1c98);
  }
  if (((char)local_var_68 == '\0') &&
     ((lVar13 == 0 ||
      ((*(int64_t *)(local_var_40 + 0x3b0) != *(int64_t *)(lVar13 + 0x3b0) &&
       ((*(int64_t *)(local_var_40 + 0x408) == 0 ||
        (*(int64_t *)(local_var_40 + 0x408) != *(int64_t *)(lVar13 + 0x408))))))))) {
    bVar19 = 0;
  }
  else {
    bVar19 = 1;
  }
  Function_217066b7(local_var_40,unaff_RBP + -2);
  uVar5 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  if (*(char *)(local_var_40 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)unaff_R15D & 0x80);
    if ((float)((uint)unaff_R15D & 0x80) == 0.0) {
      bVar21 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar9 = strcmp(&rendering_buffer_2304_ptr,unaff_RSI + 0x1df8), iVar9 == 0)) &&
           (bVar21 = false, **(int64_t **)(unaff_RSI + 0x1de0) == local_var_40)))))) {
        bVar21 = true;
      }
      lVar13 = SYSTEM_DATA_MANAGER_A;
      if (((uint)unaff_R15D & 0x6000000) == 0) {
        lVar20 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar20 = 0xd0;
        }
      }
      else {
        lVar20 = 0xe0;
      }
      pfVar11 = (float *)(lVar20 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fVar30 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar29 = pfVar11[3];
      unaff_RBP[-0x20] = *pfVar11;
      unaff_RBP[-0x1f] = fVar30;
      unaff_RBP[-0x1e] = fVar28;
      unaff_RBP[-0x1d] = fVar29;
      unaff_RBP[-0x1d] = fVar29 * *(float *)(lVar13 + 0x1628);
      uVar10 = Function_56da4ab5(unaff_RBP + -0x20);
      if (*(char *)(local_var_40 + 0xae) == '\0') {
        fVar30 = unaff_XMM15_Da;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar30 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar21) {
          fVar30 = fVar30 * 0.5;
        }
        if (fVar30 != unaff_XMM15_Da) {
          fVar28 = unaff_XMM13_Da;
          if ((unaff_XMM13_Da <= fVar30) && (fVar28 = fVar30, unaff_XMM15_Da <= fVar30)) {
            fVar28 = unaff_XMM15_Da;
          }
          uVar10 = (int)(fVar28 * 255.0 + 0.5) << 0x18 | uVar10 & 0xffffff;
        }
      }
      else {
        uVar10 = uVar10 | 0xff000000;
        if (bVar21) {
          *(float *)(*(int64_t *)(local_var_40 + 0x28) + 0x6c) =
               *(float *)(*(int64_t *)(local_var_40 + 0x28) + 0x6c) * 0.5;
        }
      }
      fVar30 = *(float *)(local_var_40 + 0x48);
      fVar28 = *(float *)(local_var_40 + 0x40);
      uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
      unaff_RBP[0x15] = *(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44);
      unaff_RBP[0x14] = fVar30 + fVar28;
      fVar28 = (float)Function_71f4712c(local_var_40);
      fVar30 = *(float *)(local_var_40 + 0x44);
      unaff_RBP[0x12] = *(float *)(local_var_40 + 0x40);
      local_var_20 = (uint64_t *)CONCAT44(uVar5,fVar27);
      unaff_RBP[0x13] = fVar28 + fVar30;
      MathInterpolationCalculator0(uVar22,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar10,local_var_20);
    }
    uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    bVar21 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar13 = SYSTEM_DATA_MANAGER_A;
    if ((((uint)unaff_R15D & 1) == 0) && ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
      pfVar11 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar19 + 0x14) * 0x10);
      fVar30 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar29 = pfVar11[3];
      unaff_RBP[-0x20] = *pfVar11;
      unaff_RBP[-0x1f] = fVar30;
      unaff_RBP[-0x1e] = fVar28;
      unaff_RBP[-0x1d] = fVar29;
      unaff_RBP[-0x1d] = fVar29 * *(float *)(lVar13 + 0x1628);
      Function_56da4ab5(unaff_RBP + -0x20);
      local_var_20 = (uint64_t *)CONCAT44(uVar6,fVar27);
      MathInterpolationCalculator0(*(uint64_t *)(local_var_40 + 0x2e8),unaff_RBP + -2);
    }
    uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if (((uint)unaff_R15D >> 10 & 1) != 0) {
      Function_36990d36(local_var_40,unaff_RBP + -8);
      uVar22 = SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x18);
      SystemFunction_00018010e690(unaff_RBP + -8,uVar22);
      lVar13 = SYSTEM_DATA_MANAGER_A;
      uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar30 = unaff_XMM13_Da;
      if (((uint)unaff_R15D & 1) != 0) {
        fVar30 = fVar27;
      }
      fVar28 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fVar29 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      unaff_RBP[-0x1f] = fVar28;
      unaff_RBP[-0x1e] = fVar29;
      unaff_RBP[-0x1d] = fVar31;
      unaff_RBP[-0x1d] = fVar31 * *(float *)(lVar13 + 0x1628);
      uVar5 = Function_56da4ab5(unaff_RBP + -0x20);
      local_var_20 = (uint64_t *)CONCAT44(uVar6,fVar30);
      MathInterpolationCalculator0(uVar22,unaff_RBP + -8,unaff_RBP + -6,uVar5,local_var_20);
      lVar13 = SYSTEM_DATA_MANAGER_A;
      uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      fVar30 = *(float *)(unaff_RSI + 0x1668);
      if ((unaff_XMM13_Da < fVar30) &&
         (unaff_RBP[-5] <
          *(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44))) {
        uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
        fVar28 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fVar29 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        unaff_RBP[-0x1f] = fVar28;
        unaff_RBP[-0x1e] = fVar29;
        unaff_RBP[-0x1d] = fVar31;
        unaff_RBP[-0x1d] = fVar31 * *(float *)(lVar13 + 0x1628);
        uVar5 = Function_56da4ab5(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        local_var_20 = (uint64_t *)CONCAT44(uVar6,fVar30);
        SystemCore_SystemMonitor(uVar22,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar5,local_var_20);
      }
    }
    uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    lVar13 = *(int64_t *)(local_var_40 + 0x408);
    if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0xa0) & 0x40) != 0)) {
      fVar30 = *(float *)(lVar13 + 0x38);
      fVar28 = *(float *)(unaff_RSI + 0x19f8);
      fVar29 = *(float *)(lVar13 + 0x3c);
      _fStack0000000000000050 = *(uint64_t *)(lVar13 + 0x38);
      unaff_RBP[-0x20] = fVar30;
      unaff_RBP[-0x1f] = fVar29;
      fVar31 = (float)(int)(fVar28 * 0.7);
      fVar28 = (float)(int)(fVar28 * 0.55);
      unaff_RBP[-0x1e] = fVar30 + fVar28;
      unaff_RBP[-0x1d] = fVar29 + fVar28;
      uVar5 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2496_ptr,0);
      uVar22 = CONCAT44(uVar6,0x20);
      cVar4 = SystemCore_Formatter(unaff_RBP + -0x20,uVar5,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058,
                            uVar22);
      uVar6 = (int32_t)((uint64_t)uVar22 >> 0x20);
      if (cVar4 != '\0') {
        pbVar2 = (byte *)(*(int64_t *)(local_var_40 + 0x408) + 0xa1);
        *pbVar2 = *pbVar2 | 0x10;
      }
      lVar13 = SYSTEM_DATA_MANAGER_A;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(*(int64_t *)(local_var_40 + 0x408) + 0xa0) & 8) == 0 ||
          (cStack0000000000000059 != '\0')))) {
        lVar20 = (uint64_t)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar20 = 0x17;
      }
      pfVar11 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar20 + 10) * 0x10);
      fVar30 = pfVar11[1];
      fVar28 = pfVar11[2];
      fVar29 = pfVar11[3];
      unaff_RBP[-0x14] = *pfVar11;
      unaff_RBP[-0x13] = fVar30;
      unaff_RBP[-0x12] = fVar28;
      unaff_RBP[-0x11] = fVar29;
      unaff_RBP[-0x11] = fVar29 * *(float *)(lVar13 + 0x1628);
      uVar5 = Function_56da4ab5(unaff_RBP + -0x14);
      local_var_20 = (uint64_t *)CONCAT44(uVar6,uVar5);
      uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
      unaff_RBP[0xe] = fStack0000000000000050;
      fStack0000000000000070 = fStack0000000000000050 + fVar31;
      fStack0000000000000074 = fStack0000000000000054;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar31;
      DataStructure_940f0(uVar22,&local_buffer_00000050,&local_buffer_00000070,unaff_RBP + 0xe,local_var_20);
    }
    if (*(char *)(local_var_40 + 0xac) != '\0') {
      GenericFunction_180110540(0);
    }
    if (*(char *)(local_var_40 + 0xad) != '\0') {
      GenericFunction_180110540(1);
    }
    uVar5 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if (((uint)unaff_R15D & 2) == 0) {
      lVar13 = 0;
      do {
        uVar6 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        fVar30 = *(float *)(local_var_40 + 0x40);
        fVar28 = *(float *)(local_var_40 + 0x44);
        lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
        fVar30 = ((fVar30 + *(float *)(local_var_40 + 0x48)) - fVar30) * unaff_R12[-2] + fVar30
        ;
        fVar28 = ((fVar28 + *(float *)(local_var_40 + 0x4c)) - fVar28) * unaff_R12[-1] + fVar28
        ;
        if (bVar21) {
          unaff_RBP[2] = fVar26;
          unaff_RBP[3] = fVar32;
          fVar29 = fVar26;
        }
        else {
          fStack0000000000000064 = fVar26;
          fStack0000000000000060 = fVar32;
          fVar29 = fVar32;
        }
        pfVar11 = (float *)((int64_t)&local_buffer_00000060 + 4);
        if (bVar21) {
          pfVar11 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar29 * *unaff_R12 + fVar30;
        unaff_RBP[-3] = *pfVar11 * unaff_R12[1] + fVar28;
        SystemCore_InterruptHandler(lVar20 + 0x80,unaff_RBP + -4);
        lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
        if (bVar21) {
          unaff_RBP[0x1c] = fVar32;
          unaff_RBP[0x1d] = fVar26;
          fVar29 = fVar32;
        }
        else {
          unaff_RBP[-0x1c] = fVar26;
          unaff_RBP[-0x1b] = fVar32;
          fVar29 = fVar26;
        }
        pfVar11 = unaff_RBP + -0x1b;
        if (bVar21) {
          pfVar11 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar29 * *unaff_R12 + fVar30;
        unaff_RBP[0x19] = *pfVar11 * unaff_R12[1] + fVar28;
        SystemCore_InterruptHandler(lVar20 + 0x80,unaff_RBP + 0x18);
        fVar29 = unaff_R12[1];
        uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
        local_var_20 = (uint64_t *)CONCAT44(uVar6,unaff_R12[3]);
        unaff_RBP[-0x14] = (fVar26 + fVar27) * *unaff_R12 + fVar30;
        unaff_RBP[-0x13] = (fVar26 + fVar27) * fVar29 + fVar28;
        UtilitiesSystem_FileHandler(uVar22,unaff_RBP + -0x14);
        lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
        DataStructure_93190(lVar20,*(uint64_t *)(lVar20 + 0x88),*(int32_t *)(lVar20 + 0x80),
                      unaff_RBP[lVar13 + 0x20],local_var_20);
        uVar5 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        bVar21 = (bool)(bVar21 ^ 1);
        *(int32_t *)(lVar20 + 0x80) = 0;
        lVar13 = lVar13 + 1;
        unaff_R12 = unaff_R12 + 6;
      } while (lVar13 < *(int64_t *)(unaff_RBP + -0xe));
    }
    lVar13 = SYSTEM_DATA_MANAGER_A;
    if ((unaff_XMM13_Da < fVar26) && (unaff_RBP[-10] == 0.0)) {
      lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
      fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar28 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar29 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x21] = fVar30;
      unaff_RBP[0x22] = fVar28;
      unaff_RBP[0x23] = fVar29;
      unaff_RBP[0x23] = fVar29 * *(float *)(lVar13 + 0x1628);
      uVar10 = Function_56da4ab5(unaff_RBP + 0x20);
      fVar30 = *(float *)(local_var_40 + 0x44);
      fVar28 = *(float *)(local_var_40 + 0x40) + *(float *)(local_var_40 + 0x48);
      fVar29 = fVar30 + *(float *)(local_var_40 + 0x4c);
      if ((uVar10 & 0xff000000) != 0) {
        bVar19 = *(byte *)(lVar20 + 0x30);
        uVar22 = CONCAT44(uVar5,0xf);
        unaff_RBP[-0x14] = *(float *)(local_var_40 + 0x40) + 0.5;
        unaff_RBP[-0x13] = fVar30 + 0.5;
        if ((bVar19 & 1) == 0) {
          fVar28 = fVar28 - 0.49;
          fVar29 = fVar29 - 0.49;
        }
        else {
          fVar28 = fVar28 - 0.5;
          fVar29 = fVar29 - 0.5;
        }
        unaff_RBP[-0xe] = fVar28;
        unaff_RBP[-0xd] = fVar29;
        UtilitiesSystem_LogManager(lVar20,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar27,uVar22);
        uVar5 = (int32_t)((uint64_t)uVar22 >> 0x20);
        GenericFunction_18010e4e0(lVar20,uVar10,1,fVar26);
      }
    }
    if (unaff_RBP[0xc] != -NAN) {
      uVar22 = CONCAT44(uVar5,unaff_XMM13_Da);
      GenericFunction_1801296e0(unaff_RBP + -0x14,local_var_40,unaff_RBP[0xc],fVar32,uVar22);
      lVar13 = SYSTEM_DATA_MANAGER_A;
      uVar5 = (int32_t)((uint64_t)uVar22 >> 0x20);
      uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x189c);
      fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      unaff_RBP[-0xd] = fVar32;
      unaff_RBP[-0xc] = fVar27;
      unaff_RBP[-0xb] = fVar30;
      unaff_RBP[-0xb] = fVar30 * *(float *)(lVar13 + 0x1628);
      uVar6 = Function_56da4ab5(unaff_RBP + -0xe);
      if (fVar26 <= unaff_XMM15_Da) {
        fVar26 = unaff_XMM15_Da;
      }
      uVar17 = CONCAT44(uVar5,fVar26);
      SystemCore_SystemMonitor(uVar22,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar6,uVar17);
      uVar5 = (int32_t)((uint64_t)uVar17 >> 0x20);
    }
    lVar13 = SYSTEM_DATA_MANAGER_A;
    fVar32 = *(float *)(unaff_RSI + 0x1668);
    if (((unaff_XMM13_Da < fVar32) && (((uint)unaff_R15D & 1) == 0)) &&
       ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
      uVar22 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar26 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x18] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x19] = fVar27;
      unaff_RBP[0x1a] = fVar26;
      unaff_RBP[0x1b] = fVar30;
      unaff_RBP[0x1b] = fVar30 * *(float *)(lVar13 + 0x1628);
      uVar6 = Function_56da4ab5(unaff_RBP + 0x18);
      fVar27 = *(float *)(unaff_RSI + 0x1638);
      uVar17 = CONCAT44(uVar5,fVar32);
      unaff_RBP[-0xe] = *unaff_RBP - fVar27;
      unaff_RBP[-0xd] = unaff_RBP[1] - unaff_XMM15_Da;
      unaff_RBP[-0x13] = unaff_RBP[1] - unaff_XMM15_Da;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar27;
      SystemCore_SystemMonitor(uVar22,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar6,uVar17);
      uVar5 = (int32_t)((uint64_t)uVar17 >> 0x20);
    }
    unaff_RDI = 0;
    uVar6 = local_var_68;
  }
  else {
    uVar7 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)(local_var_40 + 0x7c);
    lVar13 = SYSTEM_DATA_MANAGER_A;
    if ((bVar19 == 0) || (lVar20 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar20 = 0x160;
    }
    pfVar11 = (float *)(lVar20 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    fVar32 = pfVar11[1];
    fVar26 = pfVar11[2];
    fVar30 = pfVar11[3];
    unaff_RBP[0x20] = *pfVar11;
    unaff_RBP[0x21] = fVar32;
    unaff_RBP[0x22] = fVar26;
    unaff_RBP[0x23] = fVar30;
    unaff_RBP[0x23] = fVar30 * *(float *)(lVar13 + 0x1628);
    uVar8 = Function_56da4ab5(unaff_RBP + 0x20);
    uVar22 = CONCAT44(uVar5,fVar27);
    SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar8,1,uVar22);
    uVar5 = (int32_t)((uint64_t)uVar22 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar7;
  }
  pfVar11 = (float *)(unaff_RSI + 0x1668);
  *(uint64_t *)(local_var_40 + 0x58) = *(uint64_t *)(local_var_40 + 0x50);
  *(float *)(local_var_40 + 0x270) =
       (*(float *)(local_var_40 + 0x40) - *(float *)(local_var_40 + 0x8c)) +
       *(float *)(local_var_40 + 0x70);
  fVar30 = (float)Function_71f4712c(local_var_40);
  fVar32 = *(float *)(local_var_40 + 0x44);
  fVar27 = *(float *)(local_var_40 + 0x90);
  fVar26 = *(float *)(local_var_40 + 0x74);
  fVar28 = (float)Function_e8c7ba88();
  *(float *)(local_var_40 + 0x274) = fVar28 + fVar30 + (fVar32 - fVar27) + fVar26;
  fVar32 = *(float *)(local_var_40 + 0x68);
  if (fVar32 == unaff_XMM13_Da) {
    fVar32 = *(float *)(local_var_40 + 0x48) - *(float *)(local_var_40 + 0xa4);
  }
  *(float *)(local_var_40 + 0x278) =
       ((*(float *)(local_var_40 + 0x40) - *(float *)(local_var_40 + 0x8c)) -
       *(float *)(local_var_40 + 0x70)) + fVar32;
  fVar32 = *(float *)(local_var_40 + 0x6c);
  if (fVar32 == unaff_XMM13_Da) {
    fVar32 = *(float *)(local_var_40 + 0x4c) - *(float *)(local_var_40 + 0xa8);
  }
  *(float *)(local_var_40 + 0x27c) =
       ((*(float *)(local_var_40 + 0x44) - *(float *)(local_var_40 + 0x90)) -
       *(float *)(local_var_40 + 0x74)) + fVar32;
  *(float *)(local_var_40 + 0x204) =
       *(float *)(local_var_40 + 0x70) - *(float *)(local_var_40 + 0x8c);
  uVar8 = (int32_t)unaff_RDI;
  *(int32_t *)(local_var_40 + 0x208) = uVar8;
  *(int32_t *)(local_var_40 + 0x20c) = uVar8;
  Function_e8c7ba88(local_var_40);
  Function_71f4712c(local_var_40);
  uVar22 = Function_87f5b9fb(unaff_RBP + -0x18,
                               *(float *)(local_var_40 + 0x20c) +
                               *(float *)(local_var_40 + 0x204));
  puVar14 = (int32_t *)Function_cb59ba0b(unaff_RBP + -0xe,local_var_40 + 0x40,uVar22);
  uVar7 = puVar14[1];
  *(int32_t *)(local_var_40 + 0x110) = *puVar14;
  *(int32_t *)(local_var_40 + 0x114) = uVar7;
  *(uint64_t *)(local_var_40 + 0x100) = *(uint64_t *)(local_var_40 + 0x110);
  *(uint64_t *)(local_var_40 + 0x108) = *(uint64_t *)(local_var_40 + 0x110);
  *(uint64_t *)(local_var_40 + 0x118) = *(uint64_t *)(local_var_40 + 0x110);
  puVar14 = (int32_t *)Function_87f5b9fb(unaff_RBP + -0x18);
  uVar7 = puVar14[1];
  *(int32_t *)(local_var_40 + 300) = *puVar14;
  *(int32_t *)(local_var_40 + 0x130) = uVar7;
  *(uint64_t *)(local_var_40 + 0x120) = *(uint64_t *)(local_var_40 + 300);
  *(int32_t *)(local_var_40 + 0x134) = uVar8;
  *(int32_t *)(local_var_40 + 0x128) = uVar8;
  *(int8_t *)(local_var_40 + 0x17c) = 0;
  fVar32 = (float)Function_553e241c(local_var_40);
  *(bool *)(local_var_40 + 0x17d) = unaff_XMM13_Da < fVar32;
  *(int32_t *)(local_var_40 + 0x174) = *(int32_t *)(local_var_40 + 0x178);
  *(int32_t *)(local_var_40 + 0x178) = uVar8;
  *(int8_t *)(local_var_40 + 0x17e) = 0;
  *(float *)(local_var_40 + 0x138) = *(float *)(local_var_40 + 0x104) - 9999.0;
  GenericFunction_18013e200(local_var_40 + 0x188,0);
  lVar13 = *(int64_t *)(unaff_RBP + 8);
  *(int32_t *)(local_var_40 + 0x1a0) = 1;
  if (lVar13 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(int32_t *)(lVar13 + 0x1a0);
  }
  *(int32_t *)(local_var_40 + 0x1a4) = uVar7;
  uVar7 = uVar8;
  if (lVar13 != 0) {
    uVar7 = *(int32_t *)(lVar13 + 0x1a8);
  }
  *(int32_t *)(local_var_40 + 0x1a8) = uVar7;
  *(int32_t *)(local_var_40 + 0x1ac) = *(int32_t *)(local_var_40 + 0x284);
  *(int32_t *)(local_var_40 + 0x1b0) = 0xbf800000;
  GenericFunction_18013e340(local_var_40 + 0x1b8,0);
  GenericFunction_18013e2f0(local_var_40 + 0x1c8,0);
  GenericFunction_18013e2f0(local_var_40 + 0x1d8,0);
  *(uint64_t *)(local_var_40 + 0x210) = unaff_RDI;
  *(int32_t *)(local_var_40 + 0x13c) = uVar8;
  *(int32_t *)(local_var_40 + 0x140) = uVar8;
  *(int64_t *)(local_var_40 + 0x198) = local_var_40 + 0x2b8;
  GenericFunction_18013db40(local_var_40 + 0x1e8,0);
  Function_65a94ed8(local_var_40 + 0x288,3);
  if ((unaff_RBP[0x16] != 0.0) && (*(int *)(local_var_40 + 0x1a8) != *(int *)(lVar13 + 0x1a8)))
  {
    *(int *)(local_var_40 + 0x1a8) = *(int *)(lVar13 + 0x1a8);
    GenericFunction_18011d940(local_var_40 + 0x1b8,local_var_40 + 0x1a8);
  }
  if (0 < *(int *)(local_var_40 + 0xc4)) {
    *(int *)(local_var_40 + 0xc4) = *(int *)(local_var_40 + 0xc4) + -1;
  }
  if (0 < *(int *)(local_var_40 + 200)) {
    *(int *)(local_var_40 + 200) = *(int *)(local_var_40 + 200) + -1;
  }
  if ((char)uVar6 != '\0') {
    SystemCore_DataCompressor(local_var_40);
    Function_3984f6ae(local_var_40,0);
  }
  puVar3 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar3 != (int8_t *)0x0) &&
       (lVar20 = *(int64_t *)(local_var_40 + 0x28), *(char *)(lVar20 + 0x48) != '\0')) &&
      (lVar15 = Function_c13027ec(), lVar20 != lVar15)) &&
     (((*(byte *)(local_var_40 + 0x432) & 1) == 0 ||
      ((*(byte *)(local_var_40 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar20 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar3 = 0;
  }
  if ((((uint)unaff_R15D & 1) == 0) && ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
    uVar10 = *(uint *)(local_var_40 + 0x1a8);
    *(uint *)(local_var_40 + 0x1a8) = uVar10 | 0x10;
    *(int32_t *)(local_var_40 + 0x16c) = 1;
    *(int32_t *)(local_var_40 + 0x170) = 2;
    if (((uint)unaff_R15D & 0x20) == 0) {
      uVar6 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2480_ptr,0);
      cVar4 = GenericFunction_180110000(uVar6,local_var_40 + 0x40,0);
      if (cVar4 != '\0') {
        *(int8_t *)(local_var_40 + 0xb3) = 1;
      }
    }
    if (*(int64_t *)(unaff_RBP + 10) != 0) {
      fVar32 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar22 = Function_87f5b9fb(unaff_RBP + -0x18,
                                   ((*(float *)(local_var_40 + 0x48) +
                                    *(float *)(local_var_40 + 0x40)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar32,
                                   *(float *)(local_var_40 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar32);
      uVar6 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2512_ptr,0);
      cVar4 = GenericFunction_18010fd40(uVar6,uVar22);
      if (cVar4 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)(local_var_40 + 0x16c) = 0;
    *(int32_t *)(local_var_40 + 0x170) = 1;
    *(uint *)(local_var_40 + 0x1a8) = uVar10;
    fVar32 = unaff_XMM13_Da;
    if (((uint)unaff_R15D & 0x100000) != 0) {
      uVar22 = CONCAT44(uVar5,0xbf800000);
      pfVar16 = (float *)SystemCore_Controller(unaff_RBP + -0x18,&system_data_df28,0,0,uVar22);
      uVar5 = (int32_t)((uint64_t)uVar22 >> 0x20);
      fVar32 = *pfVar16;
    }
    uVar22 = Function_87f5b9fb(unaff_RBP + -0x18);
    uVar17 = SystemCore_Controller(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar5,0xbf800000));
    Function_cb59ba0b(&local_buffer_00000050,uVar17,uVar22);
    fVar28 = unaff_RBP[-2];
    fVar27 = unaff_RBP[-1];
    fVar30 = *unaff_RBP;
    fVar26 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar28;
    unaff_RBP[-0x1b] = fVar27;
    unaff_RBP[-0x1a] = fVar30;
    unaff_RBP[-0x19] = fVar26;
    if (((uint)unaff_R15D & 0x20) == 0) {
      fVar29 = *(float *)(unaff_RSI + 0x165c);
      fVar31 = fVar29 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar29 = *(float *)(unaff_RSI + 0x165c);
      fVar31 = fVar29;
    }
    lVar20 = *(int64_t *)(unaff_RBP + 10);
    if (lVar20 != 0) {
      fVar29 = fVar29 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar29 = (float)Function_43b443f9();
      fVar26 = unaff_RBP[-0x19];
      fVar30 = unaff_RBP[-0x1a];
      fVar27 = unaff_RBP[-0x1b];
      fVar28 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar27;
    unaff_RBP[-5] = fVar26;
    unaff_RBP[-0x1c] = fVar28 + fVar31;
    unaff_RBP[-0x1a] = fVar30 - fVar29;
    unaff_RBP[-8] = fVar28 + fVar31;
    unaff_RBP[-6] = fVar30 - fVar29;
    if (lVar20 == 0) {
      fVar27 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar27 = (float)Function_5995e7a8(unaff_RBP + -2);
      fVar27 = fVar27 - 3.0;
    }
    unaff_RBP[-6] =
         (*(float *)(local_var_40 + 0x48) + *(float *)(local_var_40 + 0x40)) - fVar27;
    GenericFunction_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &local_buffer_00000050);
    if (((uint)unaff_R15D & 0x100000) == 0) {
      unaff_RDI = 0;
    }
    else {
      uVar22 = Function_87f5b9fb(unaff_RBP + -0x14,2.0 - fVar32);
      Function_d92a2e20(unaff_RBP + -0x1c);
      Function_6f0b7d52();
      uVar17 = Function_87f5b9fb(unaff_RBP + 0x18);
      Function_cb59ba0b(unaff_RBP + -0x18,uVar17,uVar22);
      Function_87f5b9fb(unaff_RBP + -0xe);
      Function_87f5b9fb(unaff_RBP + -0x14);
      uVar22 = Function_cb59ba0b(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar17 = Function_cb59ba0b(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      unaff_RDI = 0;
      GenericFunction_180122890(uVar17,uVar22,&system_data_df28,0,0);
    }
  }
  *(short *)(local_var_40 + 0x26a) = (short)unaff_RDI;
  *(short *)(local_var_40 + 0x268) = (short)unaff_RDI;
  puVar12 = (uint64_t *)SystemFunction_00018010e720(local_var_40,unaff_RBP + 0x20);
  uVar22 = puVar12[1];
  *(uint64_t *)(local_var_40 + 0x238) = *puVar12;
  *(uint64_t *)(local_var_40 + 0x240) = uVar22;
  if ((*(byte *)(local_var_40 + 0x432) & 1) != 0) {
    fVar32 = (float)Function_71f4712c();
    *(float *)(local_var_40 + 0x23c) = fVar32 + *(float *)(local_var_40 + 0x23c);
  }
  SystemFunction_00018010e690(local_var_40 + 0x238,local_var_40 + 0x228);
  *(float *)(local_var_40 + 0x248) = unaff_RBP[-2] + *(float *)(local_var_40 + 0x7c);
  if (((uint)unaff_R15D & 0x401) == 1) {
    pfVar11 = (float *)(local_var_40 + 0x7c);
  }
  fVar32 = *pfVar11;
  fVar27 = (float)Function_e8c7ba88();
  *(float *)(local_var_40 + 0x24c) = fVar27 + unaff_RBP[1] + fVar32;
  *(float *)(local_var_40 + 0x250) =
       ((*(float *)(local_var_40 + 0x48) + *(float *)(local_var_40 + 0x40)) -
       *(float *)(local_var_40 + 0xa4)) - *(float *)(local_var_40 + 0x7c);
  *(float *)(local_var_40 + 0x254) =
       ((*(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44)) -
       *(float *)(local_var_40 + 0xa8)) - *(float *)(local_var_40 + 0x7c);
  fVar32 = (float)Function_6f0b7d52();
  *(float *)(local_var_40 + 600) =
       (float)(int)(fVar32 + *(float *)(local_var_40 + 0x248) + 0.5);
  *(float *)(local_var_40 + 0x25c) = (float)(int)(*(float *)(local_var_40 + 0x24c) + 0.5);
  fVar32 = *(float *)(local_var_40 + 0x250);
  fVar27 = (float)Function_6f0b7d52();
  *(float *)(local_var_40 + 0x260) = (float)(int)((fVar32 + 0.5) - fVar27);
  *(float *)(local_var_40 + 0x264) = (float)(int)(*(float *)(local_var_40 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(local_var_40 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(*(int64_t *)(local_var_40 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      GenericFunction_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)unaff_R15D >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(unaff_RSI + 0x1b78) == 0 ||
         (*(int64_t *)(*(int64_t *)(unaff_RSI + 0x1b78) + 0x3a0) != local_var_40)))) &&
       ((local_var_40 == *(int64_t *)(local_var_40 + 0x3a0) &&
        ((*(uint *)(local_var_40 + 0xc) & 0x20000000) == 0)))) {
      GenericFunction_18013baf0();
    }
  }
  if ((*(byte *)(local_var_40 + 0x432) & 1) == 0) {
    *(int32_t *)(local_var_40 + 0x144) = *(int32_t *)(local_var_40 + 0x84);
    cVar4 = SystemCore_HashCalculator(unaff_RBP + -2);
    fVar32 = unaff_RBP[-0x10];
    *(uint *)(local_var_40 + 0x148) = (uint)(cVar4 != '\0');
    uVar22 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)(local_var_40 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)(local_var_40 + 0x154) = uVar22;
  }
  else {
    fVar32 = unaff_RBP[-0x10];
    *(int32_t *)(local_var_40 + 0x144) = *(int32_t *)(local_var_40 + 8);
    *(int32_t *)(local_var_40 + 0x148) = *(int32_t *)(local_var_40 + 0x41c);
    *(uint64_t *)(local_var_40 + 0x14c) = *(uint64_t *)(local_var_40 + 0x420);
    *(uint64_t *)(local_var_40 + 0x154) = *(uint64_t *)(local_var_40 + 0x428);
  }
  fVar27 = local_var_78;
  if (((uint)unaff_R15D >> 0x1d & 1) == 0) {
    SystemCore_PerformanceMonitor(local_var_40 + 600,local_var_40 + 0x260,1);
  }
  if (fVar27 != fVar32) {
    *(int8_t *)(local_var_40 + 0xb1) = 0;
  }
  *(short *)(local_var_40 + 0xb8) = *(short *)(local_var_40 + 0xb8) + 1;
  GenericFunction_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(local_var_40 + 0x432) & 1) != 0) &&
     ((*(byte *)(local_var_40 + 0x432) & 2) == 0)) {
    *(int32_t *)(local_var_40 + 0xd8) = 1;
  }
  if (((uint)unaff_R15D >> 0x18 & 1) != 0) {
    if ((((((uint)unaff_R15D & 0x40) == 0) && (*(int *)(local_var_40 + 0xc4) < 1)) &&
        (*(int *)(local_var_40 + 200) < 1)) &&
       ((*(float *)(local_var_40 + 0x240) < *(float *)(local_var_40 + 0x238) ||
         *(float *)(local_var_40 + 0x240) == *(float *)(local_var_40 + 0x238) ||
        (*(float *)(local_var_40 + 0x244) < *(float *)(local_var_40 + 0x23c) ||
         *(float *)(local_var_40 + 0x244) == *(float *)(local_var_40 + 0x23c))))) {
      *(int32_t *)(local_var_40 + 0xd8) = 1;
    }
    if ((lVar13 != 0) && ((*(char *)(lVar13 + 0xb2) != '\0' || (*(char *)(lVar13 + 0xb6) != '\0'))))
    {
      *(int32_t *)(local_var_40 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(local_var_40 + 0xd8) = 1;
  }
  if ((*(int *)(local_var_40 + 0xd8) < 1) && (*(int *)(local_var_40 + 0xdc) < 1)) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  *(char *)(local_var_40 + 0xb6) = cVar4;
  if (((((*(char *)(local_var_40 + 0xb2) == '\0') &&
        (*(char *)(local_var_40 + 0xaf) != '\0')) && (cVar4 == '\0')) ||
      ((0 < *(int *)(local_var_40 + 0xc4) || (0 < *(int *)(local_var_40 + 200))))) ||
     (0 < *(int *)(local_var_40 + 0xdc))) {
    uVar18 = 0;
  }
  else {
    uVar18 = 1;
  }
  *(int8_t *)(local_var_40 + 0xb4) = uVar18;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x24) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address