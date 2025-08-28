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
// 02_core_engine_part125_sub002_sub002.c - 1 个函数
// 函数: void GenericFunction_18012b523(void)
void GenericFunction_18012b523(void)
{
  byte *pbVar1;
  int8_t *puVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int iVar7;
  uint uVar8;
  int32_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  float *pfVar12;
  uint64_t uVar13;
  int32_t *puVar14;
  int64_t lVar15;
  float *pfVar16;
  uint64_t uVar17;
  int8_t uVar18;
  int64_t lVar19;
  float *unaff_RBP;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  byte bVar20;
  float *unaff_R12;
  bool bVar21;
  int64_t unaff_R14;
  uint unaff_R15D;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM15_Da;
  uint64_t local_var_20;
  int64_t local_var_40;
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
  if (*(char *)(*(int64_t *)(unaff_R14 + 0x28) + 0x49) == '\0') {
    *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x28) + 8) = *(uint64_t *)(unaff_R14 + 0x40);
    unaff_R14 = local_var_40;
  }
  if (*(char *)(*(int64_t *)(unaff_R14 + 0x28) + 0x4a) == '\0') {
    *(uint64_t *)(*(int64_t *)(unaff_R14 + 0x28) + 0x10) = *(uint64_t *)(unaff_R14 + 0x48);
    unaff_R14 = local_var_40;
  }
  puVar10 = (uint64_t *)Function_a50fc06d(*(uint64_t *)(unaff_R14 + 0x28));
  uVar13 = puVar10[1];
  *(uint64_t *)(unaff_RBP + 4) = *puVar10;
  *(uint64_t *)(unaff_RBP + 6) = uVar13;
  *(uint64_t *)(local_var_40 + 0x34) =
       *(uint64_t *)(*(int64_t *)(local_var_40 + 0x28) + 8);
  if ((*(float *)(local_var_40 + 0x48) <= unaff_XMM13_Da) || ((unaff_R15D & 0x2000040) != 0)) {
    fVar26 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar26 = *(float *)(local_var_40 + 0x48) * 0.65;
  }
  *(float *)(local_var_40 + 0x284) = (float)(int)fVar26;
  DataStructure_91500(*(uint64_t *)(local_var_40 + 0x2e8));
  *(uint *)(*(int64_t *)(local_var_40 + 0x2e8) + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)CONCAT71((int7)((uint64_t)unaff_RDI >> 8),*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar11 = *(int64_t *)(local_var_40 + 0x2e8);
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  SystemCore_InterruptHandler(lVar11 + 0x70,unaff_RBP + -0x14);
  SystemCore_Initialize(lVar11);
  if (((unaff_R15D & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar12 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x228);
    pfVar16 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar12 = unaff_RBP + 4;
    pfVar16 = unaff_RBP + 6;
  }
  SystemCore_PerformanceMonitor(pfVar12,pfVar16);
  if ((((unaff_R15D >> 0x1b & 1) == 0) ||
      (lVar11 = Function_25884858(), local_var_40 != lVar11)) ||
     (0 < *(int *)(local_var_40 + 0xdc))) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  lVar11 = *(int64_t *)(unaff_RSI + 0x1ce0);
  if ((lVar11 == 0) ||
     ((local_var_40 != *(int64_t *)(lVar11 + 0x3a0) &&
      (((lVar19 = *(int64_t *)(unaff_RSI + 0x1ce8), lVar19 == 0 || (local_var_40 != lVar19))
       || (*(int64_t *)(lVar19 + 0x28) == *(int64_t *)(lVar11 + 0x28))))))) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  if ((bVar20 != 0) || (bVar21)) {
    fVar26 = *(float *)(unaff_RSI + 0x1dc8);
    fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    pfVar12 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar20 + 0x3a) * 0x10);
    fVar27 = pfVar12[1];
    fVar22 = pfVar12[2];
    fVar23 = pfVar12[3];
    unaff_RBP[-0x20] = *pfVar12;
    unaff_RBP[-0x1f] = fVar27;
    unaff_RBP[-0x1e] = fVar22;
    unaff_RBP[-0x1d] = fVar23;
    unaff_RBP[-0x1d] = fVar23 * fVar26 * fVar25;
    uVar4 = Function_56da4ab5(unaff_RBP + -0x20);
    local_var_20 = CONCAT44(uVar9,unaff_XMM13_Da);
    MathInterpolationCalculator0(*(uint64_t *)(local_var_40 + 0x2e8),unaff_RBP + 4,unaff_RBP + 6,uVar4,
                  local_var_20);
    if ((bVar21) && (local_var_40 == *(int64_t *)(unaff_RSI + 0x1ce0))) {
      Function_455243f8(local_var_40,unaff_RBP + -0x18);
      Function_1031a748(unaff_RBP + -0x18);
      uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar26 = *(float *)(unaff_RSI + 0x1cf4);
        uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
        uVar4 = *(int32_t *)(unaff_RSI + 0x1634);
        fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
        fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
        fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
        fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
        unaff_RBP[-0x1f] = fVar27;
        unaff_RBP[-0x1e] = fVar22;
        unaff_RBP[-0x1d] = fVar23;
        unaff_RBP[-0x1d] = fVar23 * fVar26 * 0.25 * fVar25;
        uVar5 = Function_56da4ab5(unaff_RBP + -0x20);
        local_var_20 = CONCAT44(uVar9,uVar4);
        MathInterpolationCalculator0(uVar13,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar5,local_var_20);
      }
    }
  }
  uVar9 = local_var_68;
  lVar11 = *(int64_t *)(unaff_RSI + 0x1cd8);
  fVar26 = *(float *)(local_var_40 + 0x78);
  fVar25 = *(float *)(local_var_40 + 0x7c);
  if (lVar11 == 0) {
    lVar11 = *(int64_t *)(unaff_RSI + 0x1c98);
  }
  if (((char)local_var_68 == '\0') &&
     ((lVar11 == 0 ||
      ((*(int64_t *)(local_var_40 + 0x3b0) != *(int64_t *)(lVar11 + 0x3b0) &&
       ((*(int64_t *)(local_var_40 + 0x408) == 0 ||
        (*(int64_t *)(local_var_40 + 0x408) != *(int64_t *)(lVar11 + 0x408))))))))) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  Function_217066b7(local_var_40,unaff_RBP + -2);
  uVar4 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  if (*(char *)(local_var_40 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)(unaff_R15D & 0x80);
    if ((unaff_R15D & 0x80) == 0) {
      bVar21 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar7 = strcmp(&rendering_buffer_2304_ptr,unaff_RSI + 0x1df8), iVar7 == 0)) &&
           (bVar21 = false, **(int64_t **)(unaff_RSI + 0x1de0) == local_var_40)))))) {
        bVar21 = true;
      }
      lVar11 = SYSTEM_DATA_MANAGER_A;
      if ((unaff_R15D & 0x6000000) == 0) {
        lVar19 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar19 = 0xd0;
        }
      }
      else {
        lVar19 = 0xe0;
      }
      pfVar12 = (float *)(lVar19 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fVar27 = pfVar12[1];
      fVar22 = pfVar12[2];
      fVar23 = pfVar12[3];
      unaff_RBP[-0x20] = *pfVar12;
      unaff_RBP[-0x1f] = fVar27;
      unaff_RBP[-0x1e] = fVar22;
      unaff_RBP[-0x1d] = fVar23;
      unaff_RBP[-0x1d] = fVar23 * *(float *)(lVar11 + 0x1628);
      uVar8 = Function_56da4ab5(unaff_RBP + -0x20);
      if (*(char *)(local_var_40 + 0xae) == '\0') {
        fVar27 = unaff_XMM15_Da;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar27 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar21) {
          fVar27 = fVar27 * 0.5;
        }
        if (fVar27 != unaff_XMM15_Da) {
          fVar22 = unaff_XMM13_Da;
          if ((unaff_XMM13_Da <= fVar27) && (fVar22 = fVar27, unaff_XMM15_Da <= fVar27)) {
            fVar22 = unaff_XMM15_Da;
          }
          uVar8 = (int)(fVar22 * 255.0 + 0.5) << 0x18 | uVar8 & 0xffffff;
        }
      }
      else {
        uVar8 = uVar8 | 0xff000000;
        if (bVar21) {
          *(float *)(*(int64_t *)(local_var_40 + 0x28) + 0x6c) =
               *(float *)(*(int64_t *)(local_var_40 + 0x28) + 0x6c) * 0.5;
        }
      }
      fVar27 = *(float *)(local_var_40 + 0x48);
      fVar22 = *(float *)(local_var_40 + 0x40);
      uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
      unaff_RBP[0x15] = *(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44);
      unaff_RBP[0x14] = fVar27 + fVar22;
      fVar22 = (float)Function_71f4712c(local_var_40);
      fVar27 = *(float *)(local_var_40 + 0x44);
      unaff_RBP[0x12] = *(float *)(local_var_40 + 0x40);
      local_var_20 = CONCAT44(uVar4,fVar26);
      unaff_RBP[0x13] = fVar22 + fVar27;
      MathInterpolationCalculator0(uVar13,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar8,local_var_20);
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    bVar21 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar11 = SYSTEM_DATA_MANAGER_A;
    if (((unaff_R15D & 1) == 0) && ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
      pfVar12 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar20 + 0x14) * 0x10);
      fVar27 = pfVar12[1];
      fVar22 = pfVar12[2];
      fVar23 = pfVar12[3];
      unaff_RBP[-0x20] = *pfVar12;
      unaff_RBP[-0x1f] = fVar27;
      unaff_RBP[-0x1e] = fVar22;
      unaff_RBP[-0x1d] = fVar23;
      unaff_RBP[-0x1d] = fVar23 * *(float *)(lVar11 + 0x1628);
      Function_56da4ab5(unaff_RBP + -0x20);
      local_var_20 = CONCAT44(uVar9,fVar26);
      MathInterpolationCalculator0(*(uint64_t *)(local_var_40 + 0x2e8),unaff_RBP + -2);
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if ((unaff_R15D >> 10 & 1) != 0) {
      Function_36990d36(local_var_40,unaff_RBP + -8);
      uVar13 = Function_455243f8(local_var_40,unaff_RBP + -0x18);
      Function_989e7d01(unaff_RBP + -8,uVar13);
      lVar11 = SYSTEM_DATA_MANAGER_A;
      uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar27 = unaff_XMM13_Da;
      if ((unaff_R15D & 1) != 0) {
        fVar27 = fVar26;
      }
      fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fVar24 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      unaff_RBP[-0x1f] = fVar22;
      unaff_RBP[-0x1e] = fVar23;
      unaff_RBP[-0x1d] = fVar24;
      unaff_RBP[-0x1d] = fVar24 * *(float *)(lVar11 + 0x1628);
      uVar4 = Function_56da4ab5(unaff_RBP + -0x20);
      local_var_20 = CONCAT44(uVar9,fVar27);
      MathInterpolationCalculator0(uVar13,unaff_RBP + -8,unaff_RBP + -6,uVar4,local_var_20);
      lVar11 = SYSTEM_DATA_MANAGER_A;
      uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      fVar27 = *(float *)(unaff_RSI + 0x1668);
      if ((unaff_XMM13_Da < fVar27) &&
         (unaff_RBP[-5] <
          *(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44))) {
        uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
        fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fVar24 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        unaff_RBP[-0x1f] = fVar22;
        unaff_RBP[-0x1e] = fVar23;
        unaff_RBP[-0x1d] = fVar24;
        unaff_RBP[-0x1d] = fVar24 * *(float *)(lVar11 + 0x1628);
        uVar4 = Function_56da4ab5(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        local_var_20 = CONCAT44(uVar9,fVar27);
        SystemCore_SystemMonitor(uVar13,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar4,local_var_20);
      }
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    lVar11 = *(int64_t *)(local_var_40 + 0x408);
    if ((lVar11 != 0) && ((*(byte *)(lVar11 + 0xa0) & 0x40) != 0)) {
      fStack0000000000000050 = *(float *)(lVar11 + 0x38);
      fVar27 = *(float *)(unaff_RSI + 0x19f8);
      fStack0000000000000054 = *(float *)(lVar11 + 0x3c);
      unaff_RBP[-0x20] = fStack0000000000000050;
      unaff_RBP[-0x1f] = fStack0000000000000054;
      fVar22 = (float)(int)(fVar27 * 0.7);
      fVar27 = (float)(int)(fVar27 * 0.55);
      unaff_RBP[-0x1e] = fStack0000000000000050 + fVar27;
      unaff_RBP[-0x1d] = fStack0000000000000054 + fVar27;
      uVar4 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2496_ptr,0);
      uVar13 = CONCAT44(uVar9,0x20);
      cVar3 = SystemCore_Formatter(unaff_RBP + -0x20,uVar4,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058,
                            uVar13);
      uVar9 = (int32_t)((uint64_t)uVar13 >> 0x20);
      if (cVar3 != '\0') {
        pbVar1 = (byte *)(*(int64_t *)(local_var_40 + 0x408) + 0xa1);
        *pbVar1 = *pbVar1 | 0x10;
      }
      lVar11 = SYSTEM_DATA_MANAGER_A;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(*(int64_t *)(local_var_40 + 0x408) + 0xa0) & 8) == 0 ||
          (cStack0000000000000059 != '\0')))) {
        lVar19 = (uint64_t)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar19 = 0x17;
      }
      pfVar12 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar19 + 10) * 0x10);
      fVar27 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar24 = pfVar12[3];
      unaff_RBP[-0x14] = *pfVar12;
      unaff_RBP[-0x13] = fVar27;
      unaff_RBP[-0x12] = fVar23;
      unaff_RBP[-0x11] = fVar24;
      unaff_RBP[-0x11] = fVar24 * *(float *)(lVar11 + 0x1628);
      uVar4 = Function_56da4ab5(unaff_RBP + -0x14);
      local_var_20 = CONCAT44(uVar9,uVar4);
      uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
      unaff_RBP[0xe] = fStack0000000000000050;
      fStack0000000000000070 = fStack0000000000000050 + fVar22;
      fStack0000000000000074 = fStack0000000000000054;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar22;
      DataStructure_940f0(uVar13,&local_buffer_00000050,&local_buffer_00000070,unaff_RBP + 0xe,local_var_20);
    }
    if (*(char *)(local_var_40 + 0xac) != '\0') {
      GenericFunction_180110540(0);
    }
    if (*(char *)(local_var_40 + 0xad) != '\0') {
      GenericFunction_180110540(1);
    }
    uVar4 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if ((unaff_R15D & 2) == 0) {
      lVar11 = 0;
      do {
        uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        fVar27 = *(float *)(local_var_40 + 0x40);
        fVar22 = *(float *)(local_var_40 + 0x44);
        lVar19 = *(int64_t *)(local_var_40 + 0x2e8);
        fVar27 = ((fVar27 + *(float *)(local_var_40 + 0x48)) - fVar27) * unaff_R12[-2] + fVar27
        ;
        fVar22 = ((fVar22 + *(float *)(local_var_40 + 0x4c)) - fVar22) * unaff_R12[-1] + fVar22
        ;
        if (bVar21) {
          unaff_RBP[2] = fVar25;
          unaff_RBP[3] = unaff_XMM12_Da;
          fVar23 = fVar25;
        }
        else {
          fStack0000000000000064 = fVar25;
          fVar23 = unaff_XMM12_Da;
          fStack0000000000000060 = unaff_XMM12_Da;
        }
        pfVar12 = (float *)((int64_t)&local_buffer_00000060 + 4);
        if (bVar21) {
          pfVar12 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar23 * *unaff_R12 + fVar27;
        unaff_RBP[-3] = *pfVar12 * unaff_R12[1] + fVar22;
        SystemCore_InterruptHandler(lVar19 + 0x80,unaff_RBP + -4);
        lVar19 = *(int64_t *)(local_var_40 + 0x2e8);
        if (bVar21) {
          unaff_RBP[0x1c] = unaff_XMM12_Da;
          unaff_RBP[0x1d] = fVar25;
          fVar23 = unaff_XMM12_Da;
        }
        else {
          unaff_RBP[-0x1c] = fVar25;
          unaff_RBP[-0x1b] = unaff_XMM12_Da;
          fVar23 = fVar25;
        }
        pfVar12 = unaff_RBP + -0x1b;
        if (bVar21) {
          pfVar12 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar23 * *unaff_R12 + fVar27;
        unaff_RBP[0x19] = *pfVar12 * unaff_R12[1] + fVar22;
        SystemCore_InterruptHandler(lVar19 + 0x80,unaff_RBP + 0x18);
        fVar23 = unaff_R12[1];
        uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
        local_var_20 = CONCAT44(uVar9,unaff_R12[3]);
        unaff_RBP[-0x14] = (fVar25 + fVar26) * *unaff_R12 + fVar27;
        unaff_RBP[-0x13] = (fVar25 + fVar26) * fVar23 + fVar22;
        UtilitiesSystem_FileHandler(uVar13,unaff_RBP + -0x14);
        lVar19 = *(int64_t *)(local_var_40 + 0x2e8);
        DataStructure_93190(lVar19,*(uint64_t *)(lVar19 + 0x88),*(int32_t *)(lVar19 + 0x80),
                      unaff_RBP[lVar11 + 0x20],local_var_20);
        uVar4 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        bVar21 = (bool)(bVar21 ^ 1);
        *(int32_t *)(lVar19 + 0x80) = 0;
        lVar11 = lVar11 + 1;
        unaff_R12 = unaff_R12 + 6;
      } while (lVar11 < *(int64_t *)(unaff_RBP + -0xe));
    }
    lVar11 = SYSTEM_DATA_MANAGER_A;
    if ((unaff_XMM13_Da < fVar25) && (unaff_RBP[-10] == 0.0)) {
      lVar19 = *(int64_t *)(local_var_40 + 0x2e8);
      fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar23 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x21] = fVar27;
      unaff_RBP[0x22] = fVar22;
      unaff_RBP[0x23] = fVar23;
      unaff_RBP[0x23] = fVar23 * *(float *)(lVar11 + 0x1628);
      uVar8 = Function_56da4ab5(unaff_RBP + 0x20);
      fVar27 = *(float *)(local_var_40 + 0x44);
      fVar22 = *(float *)(local_var_40 + 0x40) + *(float *)(local_var_40 + 0x48);
      fVar23 = fVar27 + *(float *)(local_var_40 + 0x4c);
      if ((uVar8 & 0xff000000) != 0) {
        bVar20 = *(byte *)(lVar19 + 0x30);
        uVar13 = CONCAT44(uVar4,0xf);
        unaff_RBP[-0x14] = *(float *)(local_var_40 + 0x40) + 0.5;
        unaff_RBP[-0x13] = fVar27 + 0.5;
        if ((bVar20 & 1) == 0) {
          fVar22 = fVar22 - 0.49;
          fVar23 = fVar23 - 0.49;
        }
        else {
          fVar22 = fVar22 - 0.5;
          fVar23 = fVar23 - 0.5;
        }
        unaff_RBP[-0xe] = fVar22;
        unaff_RBP[-0xd] = fVar23;
        UtilitiesSystem_LogManager(lVar19,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar26,uVar13);
        uVar4 = (int32_t)((uint64_t)uVar13 >> 0x20);
        GenericFunction_18010e4e0(lVar19,uVar8,1,fVar25);
      }
    }
    if (unaff_RBP[0xc] != -NAN) {
      GenericFunction_1801296e0(unaff_RBP + -0x14,local_var_40);
      lVar11 = SYSTEM_DATA_MANAGER_A;
      uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar26 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x189c);
      fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      unaff_RBP[-0xd] = fVar26;
      unaff_RBP[-0xc] = fVar27;
      unaff_RBP[-0xb] = fVar22;
      unaff_RBP[-0xb] = fVar22 * *(float *)(lVar11 + 0x1628);
      uVar9 = Function_56da4ab5(unaff_RBP + -0xe);
      if (fVar25 <= unaff_XMM15_Da) {
        fVar25 = unaff_XMM15_Da;
      }
      uVar17 = CONCAT44(uVar4,fVar25);
      SystemCore_SystemMonitor(uVar13,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar9,uVar17);
      uVar4 = (int32_t)((uint64_t)uVar17 >> 0x20);
    }
    lVar11 = SYSTEM_DATA_MANAGER_A;
    fVar26 = *(float *)(unaff_RSI + 0x1668);
    if (((unaff_XMM13_Da < fVar26) && ((unaff_R15D & 1) == 0)) &&
       ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
      uVar13 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar22 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x18] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x19] = fVar25;
      unaff_RBP[0x1a] = fVar27;
      unaff_RBP[0x1b] = fVar22;
      unaff_RBP[0x1b] = fVar22 * *(float *)(lVar11 + 0x1628);
      uVar9 = Function_56da4ab5(unaff_RBP + 0x18);
      fVar25 = *(float *)(unaff_RSI + 0x1638);
      uVar17 = CONCAT44(uVar4,fVar26);
      unaff_RBP[-0xe] = *unaff_RBP - fVar25;
      unaff_RBP[-0xd] = unaff_RBP[1] - unaff_XMM15_Da;
      unaff_RBP[-0x13] = unaff_RBP[1] - unaff_XMM15_Da;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar25;
      SystemCore_SystemMonitor(uVar13,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar9,uVar17);
      uVar4 = (int32_t)((uint64_t)uVar17 >> 0x20);
    }
    unaff_RDI = 0;
    uVar9 = local_var_68;
  }
  else {
    uVar5 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)(local_var_40 + 0x7c);
    lVar11 = SYSTEM_DATA_MANAGER_A;
    if ((bVar20 == 0) || (lVar19 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar19 = 0x160;
    }
    pfVar12 = (float *)(lVar19 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    fVar25 = pfVar12[1];
    fVar27 = pfVar12[2];
    fVar22 = pfVar12[3];
    unaff_RBP[0x20] = *pfVar12;
    unaff_RBP[0x21] = fVar25;
    unaff_RBP[0x22] = fVar27;
    unaff_RBP[0x23] = fVar22;
    unaff_RBP[0x23] = fVar22 * *(float *)(lVar11 + 0x1628);
    uVar6 = Function_56da4ab5(unaff_RBP + 0x20);
    uVar13 = CONCAT44(uVar4,fVar26);
    SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar6,1,uVar13);
    uVar4 = (int32_t)((uint64_t)uVar13 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar5;
  }
  pfVar12 = (float *)(unaff_RSI + 0x1668);
  *(uint64_t *)(local_var_40 + 0x58) = *(uint64_t *)(local_var_40 + 0x50);
  *(float *)(local_var_40 + 0x270) =
       (*(float *)(local_var_40 + 0x40) - *(float *)(local_var_40 + 0x8c)) +
       *(float *)(local_var_40 + 0x70);
  fVar22 = (float)Function_71f4712c(local_var_40);
  fVar26 = *(float *)(local_var_40 + 0x44);
  fVar25 = *(float *)(local_var_40 + 0x90);
  fVar27 = *(float *)(local_var_40 + 0x74);
  fVar23 = (float)Function_e8c7ba88();
  *(float *)(local_var_40 + 0x274) = fVar23 + fVar22 + (fVar26 - fVar25) + fVar27;
  fVar26 = *(float *)(local_var_40 + 0x68);
  if (fVar26 == unaff_XMM13_Da) {
    fVar26 = *(float *)(local_var_40 + 0x48) - *(float *)(local_var_40 + 0xa4);
  }
  *(float *)(local_var_40 + 0x278) =
       ((*(float *)(local_var_40 + 0x40) - *(float *)(local_var_40 + 0x8c)) -
       *(float *)(local_var_40 + 0x70)) + fVar26;
  fVar26 = *(float *)(local_var_40 + 0x6c);
  if (fVar26 == unaff_XMM13_Da) {
    fVar26 = *(float *)(local_var_40 + 0x4c) - *(float *)(local_var_40 + 0xa8);
  }
  *(float *)(local_var_40 + 0x27c) =
       ((*(float *)(local_var_40 + 0x44) - *(float *)(local_var_40 + 0x90)) -
       *(float *)(local_var_40 + 0x74)) + fVar26;
  *(float *)(local_var_40 + 0x204) =
       *(float *)(local_var_40 + 0x70) - *(float *)(local_var_40 + 0x8c);
  uVar6 = (int32_t)unaff_RDI;
  *(int32_t *)(local_var_40 + 0x208) = uVar6;
  *(int32_t *)(local_var_40 + 0x20c) = uVar6;
  Function_e8c7ba88(local_var_40);
  Function_71f4712c(local_var_40);
  uVar13 = Function_87f5b9fb(unaff_RBP + -0x18,
                               *(float *)(local_var_40 + 0x20c) +
                               *(float *)(local_var_40 + 0x204));
  puVar14 = (int32_t *)Function_cb59ba0b(unaff_RBP + -0xe,local_var_40 + 0x40,uVar13);
  uVar5 = puVar14[1];
  *(int32_t *)(local_var_40 + 0x110) = *puVar14;
  *(int32_t *)(local_var_40 + 0x114) = uVar5;
  *(uint64_t *)(local_var_40 + 0x100) = *(uint64_t *)(local_var_40 + 0x110);
  *(uint64_t *)(local_var_40 + 0x108) = *(uint64_t *)(local_var_40 + 0x110);
  *(uint64_t *)(local_var_40 + 0x118) = *(uint64_t *)(local_var_40 + 0x110);
  puVar14 = (int32_t *)Function_87f5b9fb(unaff_RBP + -0x18);
  uVar5 = puVar14[1];
  *(int32_t *)(local_var_40 + 300) = *puVar14;
  *(int32_t *)(local_var_40 + 0x130) = uVar5;
  *(uint64_t *)(local_var_40 + 0x120) = *(uint64_t *)(local_var_40 + 300);
  *(int32_t *)(local_var_40 + 0x134) = uVar6;
  *(int32_t *)(local_var_40 + 0x128) = uVar6;
  *(int8_t *)(local_var_40 + 0x17c) = 0;
  fVar26 = (float)Function_553e241c(local_var_40);
  *(bool *)(local_var_40 + 0x17d) = unaff_XMM13_Da < fVar26;
  *(int32_t *)(local_var_40 + 0x174) = *(int32_t *)(local_var_40 + 0x178);
  *(int32_t *)(local_var_40 + 0x178) = uVar6;
  *(int8_t *)(local_var_40 + 0x17e) = 0;
  *(float *)(local_var_40 + 0x138) = *(float *)(local_var_40 + 0x104) - 9999.0;
  GenericFunction_18013e200(local_var_40 + 0x188,0);
  lVar11 = *(int64_t *)(unaff_RBP + 8);
  *(int32_t *)(local_var_40 + 0x1a0) = 1;
  if (lVar11 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = *(int32_t *)(lVar11 + 0x1a0);
  }
  *(int32_t *)(local_var_40 + 0x1a4) = uVar5;
  uVar5 = uVar6;
  if (lVar11 != 0) {
    uVar5 = *(int32_t *)(lVar11 + 0x1a8);
  }
  *(int32_t *)(local_var_40 + 0x1a8) = uVar5;
  *(int32_t *)(local_var_40 + 0x1ac) = *(int32_t *)(local_var_40 + 0x284);
  *(int32_t *)(local_var_40 + 0x1b0) = 0xbf800000;
  GenericFunction_18013e340(local_var_40 + 0x1b8,0);
  GenericFunction_18013e2f0(local_var_40 + 0x1c8,0);
  GenericFunction_18013e2f0(local_var_40 + 0x1d8,0);
  *(uint64_t *)(local_var_40 + 0x210) = unaff_RDI;
  *(int32_t *)(local_var_40 + 0x13c) = uVar6;
  *(int32_t *)(local_var_40 + 0x140) = uVar6;
  *(int64_t *)(local_var_40 + 0x198) = local_var_40 + 0x2b8;
  GenericFunction_18013db40(local_var_40 + 0x1e8,0);
  Function_65a94ed8(local_var_40 + 0x288,3);
  if ((unaff_RBP[0x16] != 0.0) && (*(int *)(local_var_40 + 0x1a8) != *(int *)(lVar11 + 0x1a8)))
  {
    *(int *)(local_var_40 + 0x1a8) = *(int *)(lVar11 + 0x1a8);
    GenericFunction_18011d940(local_var_40 + 0x1b8,local_var_40 + 0x1a8);
  }
  if (0 < *(int *)(local_var_40 + 0xc4)) {
    *(int *)(local_var_40 + 0xc4) = *(int *)(local_var_40 + 0xc4) + -1;
  }
  if (0 < *(int *)(local_var_40 + 200)) {
    *(int *)(local_var_40 + 200) = *(int *)(local_var_40 + 200) + -1;
  }
  if ((char)uVar9 != '\0') {
    SystemCore_DataCompressor(local_var_40);
    SystemFunction_000180131810(local_var_40,0);
  }
  puVar2 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar2 != (int8_t *)0x0) &&
       (lVar19 = *(int64_t *)(local_var_40 + 0x28), *(char *)(lVar19 + 0x48) != '\0')) &&
      (lVar15 = SystemFunction_00018012fae0(), lVar19 != lVar15)) &&
     (((*(byte *)(local_var_40 + 0x432) & 1) == 0 ||
      ((*(byte *)(local_var_40 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar19 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar2 = 0;
  }
  if (((unaff_R15D & 1) == 0) && ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
    uVar8 = *(uint *)(local_var_40 + 0x1a8);
    *(uint *)(local_var_40 + 0x1a8) = uVar8 | 0x10;
    *(int32_t *)(local_var_40 + 0x16c) = 1;
    *(int32_t *)(local_var_40 + 0x170) = 2;
    if ((unaff_R15D & 0x20) == 0) {
      uVar9 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2480_ptr,0);
      cVar3 = GenericFunction_180110000(uVar9,local_var_40 + 0x40,0);
      if (cVar3 != '\0') {
        *(int8_t *)(local_var_40 + 0xb3) = 1;
      }
    }
    if (*(int64_t *)(unaff_RBP + 10) != 0) {
      fVar26 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar13 = Function_87f5b9fb(unaff_RBP + -0x18,
                                   ((*(float *)(local_var_40 + 0x48) +
                                    *(float *)(local_var_40 + 0x40)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar26,
                                   *(float *)(local_var_40 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar26);
      uVar9 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2512_ptr,0);
      cVar3 = GenericFunction_18010fd40(uVar9,uVar13);
      if (cVar3 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)(local_var_40 + 0x16c) = 0;
    *(int32_t *)(local_var_40 + 0x170) = 1;
    *(uint *)(local_var_40 + 0x1a8) = uVar8;
    fVar26 = unaff_XMM13_Da;
    if ((unaff_R15D & 0x100000) != 0) {
      uVar13 = CONCAT44(uVar4,0xbf800000);
      pfVar16 = (float *)SystemCore_Controller(unaff_RBP + -0x18,&system_data_df28,0,0,uVar13);
      uVar4 = (int32_t)((uint64_t)uVar13 >> 0x20);
      fVar26 = *pfVar16;
    }
    uVar13 = Function_87f5b9fb(unaff_RBP + -0x18);
    uVar17 = SystemCore_Controller(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar4,0xbf800000));
    Function_cb59ba0b(&local_buffer_00000050,uVar17,uVar13);
    fVar23 = unaff_RBP[-2];
    fVar25 = unaff_RBP[-1];
    fVar22 = *unaff_RBP;
    fVar27 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar23;
    unaff_RBP[-0x1b] = fVar25;
    unaff_RBP[-0x1a] = fVar22;
    unaff_RBP[-0x19] = fVar27;
    if ((unaff_R15D & 0x20) == 0) {
      fVar24 = *(float *)(unaff_RSI + 0x165c);
      fVar28 = fVar24 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar24 = *(float *)(unaff_RSI + 0x165c);
      fVar28 = fVar24;
    }
    lVar19 = *(int64_t *)(unaff_RBP + 10);
    if (lVar19 != 0) {
      fVar24 = fVar24 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar24 = (float)SystemFunction_00018013e9f0();
      fVar27 = unaff_RBP[-0x19];
      fVar22 = unaff_RBP[-0x1a];
      fVar25 = unaff_RBP[-0x1b];
      fVar23 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar25;
    unaff_RBP[-5] = fVar27;
    unaff_RBP[-0x1c] = fVar23 + fVar28;
    unaff_RBP[-0x1a] = fVar22 - fVar24;
    unaff_RBP[-8] = fVar23 + fVar28;
    unaff_RBP[-6] = fVar22 - fVar24;
    if (lVar19 == 0) {
      fVar25 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar25 = (float)Function_5995e7a8(unaff_RBP + -2);
      fVar25 = fVar25 - 3.0;
    }
    unaff_RBP[-6] =
         (*(float *)(local_var_40 + 0x48) + *(float *)(local_var_40 + 0x40)) - fVar25;
    GenericFunction_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &local_buffer_00000050);
    if ((unaff_R15D & 0x100000) == 0) {
      unaff_RDI = 0;
    }
    else {
      uVar13 = Function_87f5b9fb(unaff_RBP + -0x14,2.0 - fVar26);
      Function_d92a2e20(unaff_RBP + -0x1c);
      SystemFunction_00018013e900();
      uVar17 = Function_87f5b9fb(unaff_RBP + 0x18);
      Function_cb59ba0b(unaff_RBP + -0x18,uVar17,uVar13);
      Function_87f5b9fb(unaff_RBP + -0xe);
      Function_87f5b9fb(unaff_RBP + -0x14);
      uVar13 = Function_cb59ba0b(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar17 = Function_cb59ba0b(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      unaff_RDI = 0;
      GenericFunction_180122890(uVar17,uVar13,&system_data_df28,0,0);
    }
  }
  *(short *)(local_var_40 + 0x26a) = (short)unaff_RDI;
  *(short *)(local_var_40 + 0x268) = (short)unaff_RDI;
  puVar10 = (uint64_t *)Function_455243f8(local_var_40,unaff_RBP + 0x20);
  uVar13 = puVar10[1];
  *(uint64_t *)(local_var_40 + 0x238) = *puVar10;
  *(uint64_t *)(local_var_40 + 0x240) = uVar13;
  if ((*(byte *)(local_var_40 + 0x432) & 1) != 0) {
    fVar26 = (float)Function_71f4712c();
    *(float *)(local_var_40 + 0x23c) = fVar26 + *(float *)(local_var_40 + 0x23c);
  }
  Function_989e7d01(local_var_40 + 0x238,local_var_40 + 0x228);
  *(float *)(local_var_40 + 0x248) = unaff_RBP[-2] + *(float *)(local_var_40 + 0x7c);
  if ((unaff_R15D & 0x401) == 1) {
    pfVar12 = (float *)(local_var_40 + 0x7c);
  }
  fVar26 = *pfVar12;
  fVar25 = (float)Function_e8c7ba88();
  *(float *)(local_var_40 + 0x24c) = fVar25 + unaff_RBP[1] + fVar26;
  *(float *)(local_var_40 + 0x250) =
       ((*(float *)(local_var_40 + 0x48) + *(float *)(local_var_40 + 0x40)) -
       *(float *)(local_var_40 + 0xa4)) - *(float *)(local_var_40 + 0x7c);
  *(float *)(local_var_40 + 0x254) =
       ((*(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44)) -
       *(float *)(local_var_40 + 0xa8)) - *(float *)(local_var_40 + 0x7c);
  fVar26 = (float)SystemFunction_00018013e900();
  *(float *)(local_var_40 + 600) =
       (float)(int)(fVar26 + *(float *)(local_var_40 + 0x248) + 0.5);
  *(float *)(local_var_40 + 0x25c) = (float)(int)(*(float *)(local_var_40 + 0x24c) + 0.5);
  fVar26 = *(float *)(local_var_40 + 0x250);
  fVar25 = (float)SystemFunction_00018013e900();
  *(float *)(local_var_40 + 0x260) = (float)(int)((fVar26 + 0.5) - fVar25);
  *(float *)(local_var_40 + 0x264) = (float)(int)(*(float *)(local_var_40 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(local_var_40 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(*(int64_t *)(local_var_40 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      GenericFunction_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && ((unaff_R15D >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(unaff_RSI + 0x1b78) == 0 ||
         (*(int64_t *)(*(int64_t *)(unaff_RSI + 0x1b78) + 0x3a0) != local_var_40)))) &&
       ((local_var_40 == *(int64_t *)(local_var_40 + 0x3a0) &&
        ((*(uint *)(local_var_40 + 0xc) & 0x20000000) == 0)))) {
      GenericFunction_18013baf0();
    }
  }
  if ((*(byte *)(local_var_40 + 0x432) & 1) == 0) {
    *(int32_t *)(local_var_40 + 0x144) = *(int32_t *)(local_var_40 + 0x84);
    cVar3 = SystemCore_HashCalculator(unaff_RBP + -2);
    fVar26 = unaff_RBP[-0x10];
    *(uint *)(local_var_40 + 0x148) = (uint)(cVar3 != '\0');
    uVar13 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)(local_var_40 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)(local_var_40 + 0x154) = uVar13;
  }
  else {
    fVar26 = unaff_RBP[-0x10];
    *(int32_t *)(local_var_40 + 0x144) = *(int32_t *)(local_var_40 + 8);
    *(int32_t *)(local_var_40 + 0x148) = *(int32_t *)(local_var_40 + 0x41c);
    *(uint64_t *)(local_var_40 + 0x14c) = *(uint64_t *)(local_var_40 + 0x420);
    *(uint64_t *)(local_var_40 + 0x154) = *(uint64_t *)(local_var_40 + 0x428);
  }
  fVar25 = local_var_78;
  if ((unaff_R15D >> 0x1d & 1) == 0) {
    SystemCore_PerformanceMonitor(local_var_40 + 600,local_var_40 + 0x260,1);
  }
  if (fVar25 != fVar26) {
    *(int8_t *)(local_var_40 + 0xb1) = 0;
  }
  *(short *)(local_var_40 + 0xb8) = *(short *)(local_var_40 + 0xb8) + 1;
  GenericFunction_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(local_var_40 + 0x432) & 1) != 0) &&
     ((*(byte *)(local_var_40 + 0x432) & 2) == 0)) {
    *(int32_t *)(local_var_40 + 0xd8) = 1;
  }
  if ((unaff_R15D >> 0x18 & 1) != 0) {
    if (((((unaff_R15D & 0x40) == 0) && (*(int *)(local_var_40 + 0xc4) < 1)) &&
        (*(int *)(local_var_40 + 200) < 1)) &&
       ((*(float *)(local_var_40 + 0x240) < *(float *)(local_var_40 + 0x238) ||
         *(float *)(local_var_40 + 0x240) == *(float *)(local_var_40 + 0x238) ||
        (*(float *)(local_var_40 + 0x244) < *(float *)(local_var_40 + 0x23c) ||
         *(float *)(local_var_40 + 0x244) == *(float *)(local_var_40 + 0x23c))))) {
      *(int32_t *)(local_var_40 + 0xd8) = 1;
    }
    if ((lVar11 != 0) && ((*(char *)(lVar11 + 0xb2) != '\0' || (*(char *)(lVar11 + 0xb6) != '\0'))))
    {
      *(int32_t *)(local_var_40 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(local_var_40 + 0xd8) = 1;
  }
  if ((*(int *)(local_var_40 + 0xd8) < 1) && (*(int *)(local_var_40 + 0xdc) < 1)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(local_var_40 + 0xb6) = cVar3;
  if (((((*(char *)(local_var_40 + 0xb2) == '\0') &&
        (*(char *)(local_var_40 + 0xaf) != '\0')) && (cVar3 == '\0')) ||
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