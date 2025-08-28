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
// 02_core_engine_part119_sub002_sub002.c - 1 个函数
// 函数: void GenericFunction_1801299e9(uint64_t param_1,uint64_t param_2)
void GenericFunction_1801299e9(uint64_t param_1,uint64_t param_2)
{
  int16_t *puVar1;
  char cVar2;
  int16_t uVar3;
  char *pcVar4;
  int8_t *puVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  char *pcVar13;
  int64_t lVar14;
  uint64_t uVar15;
  float *pfVar16;
  float *pfVar17;
  uint64_t *puVar18;
  int64_t *plVar19;
  uint64_t uVar20;
  int8_t uVar21;
  uint uVar22;
  int64_t lVar23;
  int iVar24;
  int *piVar25;
  float *pfVar26;
  float unaff_EBX;
  int32_t *puVar27;
  float *unaff_RBP;
  int64_t unaff_RSI;
  byte bVar28;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar29;
  uint64_t unaff_R13;
  bool bVar30;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  uint64_t unaff_XMM9_Qa;
  uint64_t unaff_XMM9_Qb;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  uint64_t unaff_XMM12_Qa;
  uint64_t unaff_XMM12_Qb;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  uint64_t *local_var_20;
  uint64_t uVar39;
  int64_t *local_var_40;
  char local_var_48;
  char cStack0000000000000049;
  char cStack000000000000004a;
  float fStack0000000000000050;
  float fStack0000000000000054;
  char cStack0000000000000058;
  char cStack0000000000000059;
  float fStack0000000000000060;
  float fStack0000000000000064;
  uint local_buffer_68;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float local_buffer_78;
  int32_t local_var_1a0;
  int32_t local_var_1a8;
  int32_t local_var_1b0;
  int32_t local_var_1b8;
  uint64_t local_var_1d0;
  uint64_t local_var_1d8;
  int32_t local_var_1e0;
  int32_t local_var_1e8;
  int32_t local_var_1f0;
  int32_t local_var_1f8;
  uint64_t local_var_200;
  uint64_t local_var_208;
  int32_t local_var_210;
  int32_t local_var_218;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM13_Dd;
  *(uint64_t *)(unaff_RBP + 10) = param_2;
  *(uint64_t *)(unaff_RBP + 0x1e) = param_1;
  local_var_40 = (int64_t *)SystemFunction_000180128b60();
  iVar24 = *(int *)(unaff_RSI + 0x1ad0);
  cStack0000000000000049 = local_var_40 == (int64_t *)0x0;
  if (local_var_40 == (int64_t *)0x0) {
    if (*(int *)(unaff_RSI + 0x1bd4) == 0) {
      _fStack0000000000000050 = 0;
      pfVar16 = &local_buffer_00000050;
    }
    else {
      pfVar16 = unaff_RBP + -0xe;
      *(uint64_t *)(unaff_RBP + -0xe) = *(uint64_t *)(unaff_RSI + 0x1c04);
    }
    local_var_40 = (int64_t *)GenericFunction_180128bd0(param_1,*(uint64_t *)pfVar16,unaff_EBX);
  }
  local_buffer_78 = *(float *)(local_var_40 + 0x50);
  uVar9 = *(uint *)((int64_t)local_var_40 + 0xdc);
  fVar33 = (float)((uint)unaff_EBX | 6);
  if (((uint)unaff_EBX & 0xc0200) != 0xc0200) {
    fVar33 = unaff_EBX;
  }
  fVar31 = *(float *)(unaff_RSI + 0x1a90);
  unaff_RBP[-0x10] = fVar31;
  cStack000000000000004a = (int)local_buffer_78 < (int)fVar31 + -1;
  if (((uint)fVar33 >> 0x1a & 1) != 0) {
    piVar25 = (int *)((int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30 +
                     *(int64_t *)(unaff_RSI + 0x1bb8));
    cStack000000000000004a =
         (bool)cStack000000000000004a ||
         (local_var_40 != *(int64_t **)(piVar25 + 2) ||
         (int)local_var_40[0x18] != *piVar25);
  }
  if (((bool)cStack000000000000004a) || (0 < (int)uVar9)) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  *(char *)((int64_t)local_var_40 + 0xb5) = cVar7;
  local_buffer_68 = uVar9;
  if (cVar7 != '\0') {
    SystemFunction_000180128ae0(local_var_40,8,1);
  }
  if (local_buffer_78 == fVar31) {
    fVar33 = *(float *)((int64_t)local_var_40 + 0xc);
  }
  else {
    *(int32_t *)(local_var_40 + 2) = *(int32_t *)((int64_t)local_var_40 + 0xc);
    *(float *)((int64_t)local_var_40 + 0xc) = fVar33;
    *(float *)(local_var_40 + 0x50) = fVar31;
    *(int16_t *)((int64_t)local_var_40 + 0xba) = 0;
    uVar3 = *(int16_t *)(unaff_RSI + 0x1af0);
    *(int *)(unaff_RSI + 0x1af0) = *(int *)(unaff_RSI + 0x1af0) + 1;
    *(int16_t *)((int64_t)local_var_40 + 0xbc) = uVar3;
  }
  if (*(int *)(unaff_RSI + 0x1bf0) != 0) {
    GenericFunction_18013b040(local_var_40,*(int32_t *)(unaff_RSI + 0x1c40));
  }
  if ((local_buffer_78 != fVar31) &&
     ((((int)local_var_40[0x83] != 0 || (local_var_40[0x81] != 0)) ||
      ((*(char *)(unaff_RSI + 0xc2) != '\0' && ((((uint)fVar33 & 0x1200001) == 0 && (iVar24 != 0))))
      )))) {
    GenericFunction_18013b5a0(local_var_40,param_2);
    fVar33 = *(float *)((int64_t)local_var_40 + 0xc);
  }
  if ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0) {
    if (*(int *)(unaff_RSI + 0x1ad0) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(uint64_t *)
                (*(int64_t *)(unaff_RSI + 0x1ad8) + -8 + (int64_t)*(int *)(unaff_RSI + 0x1ad0) * 8
                );
    }
  }
  else {
    uVar15 = *(uint64_t *)(local_var_40[0x81] + 0x68);
  }
  if (local_buffer_78 == fVar31) {
    *(int64_t *)(unaff_RBP + 8) = local_var_40[0x73];
  }
  else {
    uVar20 = 0;
    if (((uint)fVar33 & 0x5000000) != 0) {
      uVar20 = uVar15;
    }
    *(uint64_t *)(unaff_RBP + 8) = uVar20;
  }
  SystemCore_InterruptHandler(unaff_RSI + 0x1ad0,&local_buffer_00000040);
  *(uint64_t *)(unaff_RSI + 0x1af8) = 0;
  SystemFunction_000180128a80(local_var_40,1);
  if (((uint)fVar33 >> 0x1a & 1) != 0) {
    puVar27 = (int32_t *)
              ((int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30 + *(int64_t *)(unaff_RSI + 0x1bb8));
    *(int64_t **)(puVar27 + 2) = local_var_40;
    GenericFunction_18013df80((int *)(unaff_RSI + 0x1bc0),puVar27);
    *(int32_t *)(local_var_40 + 0x18) = *puVar27;
  }
  if ((0 < (int)uVar9) && (((uint)fVar33 >> 0x18 & 1) == 0)) {
    *(int32_t *)(local_var_40 + 0x79) = 0;
  }
  bVar30 = false;
  bVar6 = false;
  local_var_48 = '\0';
  if (*(uint *)(unaff_RSI + 0x1bd0) != 0) {
    uVar9 = *(uint *)(local_var_40 + 0x1c) & *(uint *)(unaff_RSI + 0x1bd0);
    local_var_48 = uVar9 != 0;
    if ((uVar9 == 0) ||
       (*(float *)(unaff_RSI + 0x1bfc) * *(float *)(unaff_RSI + 0x1bfc) +
        *(float *)(unaff_RSI + 0x1c00) * *(float *)(unaff_RSI + 0x1c00) <= 1e-05)) {
      SystemFunction_00018012ddc0(local_var_40,unaff_RSI + 0x1bf4);
    }
    else {
      local_var_40[0x1e] = *(int64_t *)(unaff_RSI + 0x1bf4);
      local_var_40[0x1f] = *(int64_t *)(unaff_RSI + 0x1bfc);
      *(uint *)(local_var_40 + 0x1c) = *(uint *)(local_var_40 + 0x1c) & 0xfffffff1;
    }
  }
  if (*(uint *)(unaff_RSI + 0x1bd4) != 0) {
    uVar9 = *(uint *)((int64_t)local_var_40 + 0xe4) & *(uint *)(unaff_RSI + 0x1bd4);
    if ((uVar9 == 0) || (*(float *)(unaff_RSI + 0x1c04) <= 0.0)) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if ((uVar9 == 0) || (*(float *)(unaff_RSI + 0x1c08) <= 0.0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    SystemFunction_00018012de80();
  }
  if (*(int *)(unaff_RSI + 0x1bd8) == 0) {
    fVar31 = unaff_RBP[-0x10];
    if (local_buffer_78 != fVar31) {
      local_var_40[0xd] = 0;
    }
  }
  else {
    local_var_40[0xd] = *(int64_t *)(unaff_RSI + 0x1c0c);
    if (*(float *)((int64_t)local_var_40 + 0x6c) != 0.0) {
      fVar31 = (float)SystemFunction_00018010e7a0();
      fVar32 = (float)SystemFunction_00018010e760(local_var_40);
      *(float *)((int64_t)local_var_40 + 0x6c) =
           fVar31 + fVar32 + *(float *)((int64_t)local_var_40 + 0x6c);
    }
    fVar31 = unaff_RBP[-0x10];
  }
  fVar32 = local_buffer_78;
  uVar15 = *(uint64_t *)(unaff_RSI + 0x1c4c);
  *(uint64_t *)((int64_t)local_var_40 + 0x14) = *(uint64_t *)(unaff_RSI + 0x1c44);
  *(uint64_t *)((int64_t)local_var_40 + 0x1c) = uVar15;
  *(int32_t *)((int64_t)local_var_40 + 0x24) = *(int32_t *)(unaff_RSI + 0x1c54);
  if (*(uint *)(unaff_RSI + 0x1bdc) != 0) {
    if ((*(uint *)(unaff_RSI + 0x1bdc) & *(uint *)(local_var_40 + 0x1d)) != 0) {
      *(int8_t *)((int64_t)local_var_40 + 0xb2) = *(int8_t *)(unaff_RSI + 0x1c15);
      *(uint *)(local_var_40 + 0x1d) = *(uint *)(local_var_40 + 0x1d) & 0xfffffff1;
    }
  }
  if (*(int *)(unaff_RSI + 0x1be4) != 0) {
    SystemCore_DataCompressor();
  }
  if (*(char *)((int64_t)local_var_40 + 0xb5) != '\0') {
    SystemFunction_000180128ae0(local_var_40,8);
  }
  if (fVar32 == fVar31) {
    SystemFunction_00018012fb50(local_var_40,local_var_40[5]);
    SystemFunction_000180123e50(local_var_40);
    lVar14 = *(int64_t *)(unaff_RBP + 8);
    goto LAB_18012ce0f;
  }
  unaff_RBP[-4] = (float)((uint)fVar33 & 0x3000000);
  local_var_1a0 = unaff_XMM15_Da;
  local_var_1a8 = unaff_XMM15_Dc;
  local_var_1b0 = unaff_XMM14_Da;
  local_var_1b8 = unaff_XMM14_Dc;
  local_var_1d0 = unaff_XMM12_Qa;
  local_var_1d8 = unaff_XMM12_Qb;
  local_var_1e0 = unaff_XMM11_Da;
  local_var_1e8 = unaff_XMM11_Dc;
  local_var_1f0 = unaff_XMM10_Da;
  local_var_1f8 = unaff_XMM10_Dc;
  local_var_210 = unaff_XMM8_Da;
  local_var_218 = unaff_XMM8_Dc;
  SystemFunction_000180129900(local_var_40,fVar33,*(uint64_t *)(unaff_RBP + 8));
  lVar14 = *(int64_t *)(unaff_RBP + 10);
  unaff_RBP[0x20] = -3.4028235e+38;
  unaff_RBP[0x21] = -3.4028235e+38;
  unaff_RBP[0x22] = 3.4028235e+38;
  unaff_RBP[0x23] = 3.4028235e+38;
  *(int8_t *)((int64_t)local_var_40 + 0xaf) = 1;
  *(bool *)((int64_t)local_var_40 + 0xb7) = lVar14 != 0;
  SystemFunction_00018010e540(unaff_RBP + -0x20,unaff_RBP + 0x20);
  lVar14 = *(int64_t *)(unaff_RBP + -0x1e);
  local_var_40[0x45] = *(int64_t *)(unaff_RBP + -0x20);
  local_var_40[0x46] = lVar14;
  GenericFunction_18013dae0(local_var_40 + 0x43,1);
  cVar7 = cStack0000000000000049;
  if (((((local_var_40[5] != 0) &&
        (*(int64_t **)(local_var_40[5] + 0x78) == local_var_40)) ||
       ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) != 0)) ||
      ((*(int64_t *)(unaff_RSI + 0x1ce8) != 0 &&
       ((*(uint *)((int64_t)local_var_40 + 0xc) & 0x80000) == 0)))) &&
     (cStack0000000000000049 == '\0')) {
    pcVar4 = *(char **)(unaff_RBP + 0x1e);
    pcVar13 = pcVar4;
    do {
      cVar2 = *pcVar13;
      cVar8 = pcVar13[*local_var_40 - (int64_t)pcVar4];
      if (cVar2 != cVar8) break;
      pcVar13 = pcVar13 + 1;
    } while (cVar8 != '\0');
    if (cVar2 != cVar8) {
      _fStack0000000000000050 = (int64_t)(int)local_var_40[0x10];
      lVar14 = GenericFunction_180121130(*local_var_40,&local_buffer_00000050,pcVar4);
      *local_var_40 = lVar14;
      *(float *)(local_var_40 + 0x10) = fStack0000000000000050;
    }
  }
  if (*(char *)((int64_t)local_var_40 + 0xb2) == '\0') {
    if (((*(char *)((int64_t)local_var_40 + 0xb6) == '\0') ||
        (*(int *)((int64_t)local_var_40 + 0xdc) != 0)) || ((int)local_var_40[0x1b] < 1))
    {
      fVar31 = *(float *)(local_var_40 + 0xd);
      if (fVar31 == 0.0) {
        fVar31 = (*(float *)(local_var_40 + 0x23) - *(float *)(local_var_40 + 8)) +
                 *(float *)((int64_t)local_var_40 + 0x8c);
      }
      fVar32 = *(float *)((int64_t)local_var_40 + 0x6c);
      if (fVar32 == 0.0) {
        fVar32 = (*(float *)((int64_t)local_var_40 + 0x11c) -
                 *(float *)((int64_t)local_var_40 + 0x44)) +
                 *(float *)(local_var_40 + 0x12);
      }
      fVar31 = (float)(int)fVar31 + *(float *)(local_var_40 + 0xe);
      fVar32 = (float)(int)fVar32 + *(float *)((int64_t)local_var_40 + 0x74);
    }
    else {
      fVar31 = *(float *)(local_var_40 + 0xc);
      fVar32 = *(float *)((int64_t)local_var_40 + 100);
    }
  }
  else {
    fVar31 = *(float *)(local_var_40 + 0xc);
    fVar32 = *(float *)((int64_t)local_var_40 + 100);
  }
  *(float *)(local_var_40 + 0xc) = fVar31;
  *(float *)((int64_t)local_var_40 + 100) = fVar32;
  if (0 < (int)local_var_40[0x1b]) {
    *(int *)(local_var_40 + 0x1b) = (int)local_var_40[0x1b] + -1;
  }
  if (0 < *(int *)((int64_t)local_var_40 + 0xdc)) {
    *(int *)((int64_t)local_var_40 + 0xdc) = *(int *)((int64_t)local_var_40 + 0xdc) + -1
    ;
  }
  if ((cVar7 != '\0') && ((!bVar30 || (!bVar6)))) {
    *(int32_t *)((int64_t)local_var_40 + 0xdc) = 1;
  }
  if (((cStack000000000000004a != '\0') && (((uint)fVar33 & 0x6000000) != 0)) &&
     (*(int32_t *)((int64_t)local_var_40 + 0xdc) = 1, ((uint)fVar33 & 0x40) != 0)) {
    if (!bVar30) {
      *(int32_t *)(local_var_40 + 10) = 0;
      *(int32_t *)(local_var_40 + 9) = 0;
    }
    if (!bVar6) {
      *(int32_t *)((int64_t)local_var_40 + 0x54) = 0;
      *(int32_t *)((int64_t)local_var_40 + 0x4c) = 0;
    }
    local_var_40[0xc] = 0;
  }
  GenericFunction_180130a80(local_var_40);
  SystemFunction_00018012fb50(local_var_40,local_var_40[5]);
  if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
    uVar11 = 0x3f800000;
  }
  else {
    uVar11 = *(int32_t *)(local_var_40[5] + 0x18);
  }
  *(int32_t *)((int64_t)local_var_40 + 0x2dc) = uVar11;
  SystemFunction_000180123e50(local_var_40);
  fVar33 = *(float *)((int64_t)local_var_40 + 0xc);
  unaff_RBP[-10] = fVar33;
  if ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0) {
    if (((uint)fVar33 >> 0x18 & 1) == 0) {
      if ((((uint)fVar33 & 0x6000000) == 0) || (((uint)fVar33 >> 0x1b & 1) != 0)) {
        uVar11 = *(int32_t *)(unaff_RSI + 0x1638);
      }
      else {
        uVar11 = *(int32_t *)(unaff_RSI + 0x1658);
      }
      *(int32_t *)((int64_t)local_var_40 + 0x7c) = uVar11;
    }
    else {
      *(int32_t *)((int64_t)local_var_40 + 0x7c) = *(int32_t *)(unaff_RSI + 0x1650);
    }
  }
  else {
    *(int32_t *)((int64_t)local_var_40 + 0x7c) = 0;
  }
  if ((((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0) &&
      (((uint)fVar33 & 0x5010000) == 0x1000000)) &&
     (*(float *)((int64_t)local_var_40 + 0x7c) == 0.0)) {
    if (((uint)fVar33 >> 10 & 1) == 0) {
      *(int32_t *)(local_var_40 + 0xe) = 0;
      *(int32_t *)((int64_t)local_var_40 + 0x74) = 0;
    }
    else {
      uVar11 = *(int32_t *)(unaff_RSI + 0x1630);
      *(int32_t *)(local_var_40 + 0xe) = 0;
      *(int32_t *)((int64_t)local_var_40 + 0x74) = uVar11;
    }
  }
  else {
    local_var_40[0xe] = *(int64_t *)(unaff_RSI + 0x162c);
  }
  fVar31 = *(float *)(local_var_40 + 0xe);
  if (*(float *)(local_var_40 + 0xe) <= *(float *)(unaff_RSI + 0x166c)) {
    fVar31 = *(float *)(unaff_RSI + 0x166c);
  }
  if (fVar31 <= *(float *)(unaff_RSI + 0x1c58)) {
    fVar31 = *(float *)(unaff_RSI + 0x1c58);
  }
  *(float *)(local_var_40 + 0x30) = fVar31;
  *(int32_t *)((int64_t)local_var_40 + 0x184) = *(int32_t *)(unaff_RSI + 0x1c5c);
  if ((((uint)fVar33 & 0x21) == 0) && ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0)) {
    SystemFunction_000180120c80(local_var_40,unaff_RBP + 0x20);
    if ((((*(int64_t **)(unaff_RSI + 0x1b00) == local_var_40) &&
         (*(int *)(unaff_RSI + 0x1b18) == 0)) && (*(int *)(unaff_RSI + 0x1b20) == 0)) &&
       ((cVar7 = SystemCore_HashCalculator(unaff_RBP + 0x20,unaff_RBP + 0x22,1), cVar7 != '\0' &&
        (*(char *)(unaff_RSI + 0x415) != '\0')))) {
      *(int8_t *)((int64_t)local_var_40 + 0xb3) = 1;
    }
    if (*(char *)((int64_t)local_var_40 + 0xb3) != '\0') {
      *(bool *)((int64_t)local_var_40 + 0xb2) =
           *(char *)((int64_t)local_var_40 + 0xb2) == '\0';
      if (((*(uint *)((int64_t)local_var_40 + 0xc) & 0x100) == 0) &&
         (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= 0.0)) {
        *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
      }
      SystemCore_DataCompressor(local_var_40);
    }
  }
  else {
    *(int8_t *)((int64_t)local_var_40 + 0xb2) = 0;
  }
  plVar19 = local_var_40;
  lVar14 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)((int64_t)local_var_40 + 0xb3) = 0;
  if ((*(uint *)((int64_t)local_var_40 + 0xc) >> 0x19 & 1) == 0) {
    _fStack0000000000000070 = *(uint64_t *)(lVar14 + 0x163c);
    if ((*(uint *)((int64_t)local_var_40 + 0xc) & 0x14000000) != 0) {
      _fStack0000000000000050 = 0x4080000040800000;
      puVar18 = (uint64_t *)
                SystemFunction_00018011fc20(unaff_RBP + -0x18,&local_buffer_00000070,&local_buffer_00000050);
      _fStack0000000000000070 = *puVar18;
    }
    fVar31 = *(float *)(plVar19[5] + 0x10);
    fVar32 = *(float *)(plVar19[5] + 0x14);
    if (*(char *)((int64_t)plVar19 + 0xae) != '\0') {
      fVar31 = 3.4028235e+38;
      fVar32 = 3.4028235e+38;
    }
    iVar24 = *(int *)((int64_t)plVar19 + 0x3c);
    if ((-1 < iVar24) && (iVar24 < *(int *)(lVar14 + 0x1600))) {
      fVar31 = *(float *)(*(int64_t *)(lVar14 + 0x1608) + 0x18 + (int64_t)iVar24 * 0x24);
      fVar32 = *(float *)(*(int64_t *)(lVar14 + 0x1608) + 0x1c + (int64_t)iVar24 * 0x24);
    }
    _fStack0000000000000050 =
         CONCAT44(fVar32 - (*(float *)(lVar14 + 0x16b8) + *(float *)(lVar14 + 0x16b8)),
                  fVar31 - (*(float *)(lVar14 + 0x16b4) + *(float *)(lVar14 + 0x16b4)));
    puVar18 = (uint64_t *)SystemFunction_00018011fc50(unaff_RBP + -0x18,&local_buffer_00000070,&local_buffer_00000050)
    ;
    GenericFunction_18011fc80(&local_buffer_00000060,plVar19 + 0xc,&local_buffer_00000070,*puVar18);
    SystemCore_MemoryManager(unaff_RBP + 2,plVar19,CONCAT44(fStack0000000000000064,fStack0000000000000060));
    if (((unaff_RBP[2] < *(float *)(plVar19 + 0xc)) &&
        ((*(uint *)((int64_t)plVar19 + 0xc) & 8) == 0)) &&
       ((*(uint *)((int64_t)plVar19 + 0xc) >> 0xb & 1) != 0)) {
      fStack0000000000000064 = fStack0000000000000064 + *(float *)(lVar14 + 0x168c);
    }
    lVar23 = SYSTEM_DATA_MANAGER_A;
    fVar32 = fStack0000000000000060;
    fVar31 = fStack0000000000000064;
    if ((unaff_RBP[3] < *(float *)((int64_t)plVar19 + 100)) &&
       ((*(byte *)((int64_t)plVar19 + 0xc) & 8) == 0)) {
      fStack0000000000000060 = fStack0000000000000060 + *(float *)(lVar14 + 0x168c);
      fVar32 = fStack0000000000000060;
    }
  }
  else {
    lVar23 = lVar14;
    fVar32 = *(float *)(local_var_40 + 0xc);
    fVar31 = *(float *)((int64_t)local_var_40 + 100);
  }
  fVar34 = 3.4028235e+38;
  _fStack0000000000000050 = CONCAT44(fVar31,fVar32);
  fVar38 = 3.4028235e+38;
  if ((((uint)fVar33 & 0x40) == 0) || (*(char *)((int64_t)local_var_40 + 0xb2) != '\0')) {
    if ((0 < *(int *)((int64_t)local_var_40 + 0xc4)) || (0 < (int)local_var_40[0x19])) {
      if ((!bVar30) && (0 < *(int *)((int64_t)local_var_40 + 0xc4))) {
        fVar34 = fVar32;
        if ((*(char *)((int64_t)local_var_40 + 0xcc) != '\0') &&
           (fVar34 = *(float *)(local_var_40 + 10),
           *(float *)(local_var_40 + 10) <= fVar32)) {
          fVar34 = fVar32;
        }
        *(float *)(local_var_40 + 10) = fVar34;
      }
      if ((!bVar6) && (0 < (int)local_var_40[0x19])) {
        fVar38 = fVar31;
        if ((*(char *)((int64_t)local_var_40 + 0xcc) != '\0') &&
           (fVar38 = *(float *)((int64_t)local_var_40 + 0x54),
           *(float *)((int64_t)local_var_40 + 0x54) <= fVar31)) {
          fVar38 = fVar31;
        }
        *(float *)((int64_t)local_var_40 + 0x54) = fVar38;
      }
      if (((*(char *)((int64_t)local_var_40 + 0xb2) == '\0') &&
          ((*(uint *)((int64_t)local_var_40 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar23 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar23 + 0x2e04) = *(int32_t *)(lVar23 + 0x1c);
      }
    }
  }
  else {
    if (!bVar30) {
      *(float *)(local_var_40 + 10) = fVar32;
      fVar34 = fVar32;
    }
    if (!bVar6) {
      *(float *)((int64_t)local_var_40 + 0x54) = fVar31;
      fVar38 = fVar31;
    }
  }
  puVar27 = (int32_t *)SystemCore_MemoryManager(unaff_RBP + -0x18,local_var_40,local_var_40[10]);
  uVar11 = puVar27[1];
  *(int32_t *)(local_var_40 + 10) = *puVar27;
  *(int32_t *)((int64_t)local_var_40 + 0x54) = uVar11;
  if ((*(char *)((int64_t)local_var_40 + 0xb2) == '\0') || (((uint)fVar33 >> 0x18 & 1) != 0))
  {
    pfVar16 = unaff_RBP + -0xe;
    *(int64_t *)(unaff_RBP + -0xe) = local_var_40[10];
  }
  else {
    uVar15 = SystemFunction_000180120c80(local_var_40,unaff_RBP + 0x20);
    pfVar16 = (float *)SystemFunction_00018010e570(uVar15,unaff_RBP + -0x18);
  }
  cVar2 = cStack000000000000004a;
  cVar7 = local_var_48;
  local_var_40[9] = *(int64_t *)pfVar16;
  if (*(char *)((int64_t)local_var_40 + 0xb2) == '\0') {
    if (fVar34 == 3.4028235e+38) {
      fVar31 = *(float *)(local_var_40 + 0xb);
    }
    else {
      fVar31 = *(float *)(local_var_40 + 10);
    }
    if (fVar38 == 3.4028235e+38) {
      fVar32 = *(float *)((int64_t)local_var_40 + 0x5c);
    }
    else {
      fVar32 = *(float *)((int64_t)local_var_40 + 0x54);
    }
    if ((((uint)fVar33 >> 0xe & 1) != 0) ||
       ((fVar32 < *(float *)((int64_t)local_var_40 + 100) && (((uint)fVar33 & 8) == 0)))) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = '\0';
    }
    *(char *)((int64_t)local_var_40 + 0xad) = cVar8;
    if (((uint)fVar33 >> 0xf & 1) == 0) {
      if (cVar8 == '\0') {
        fVar34 = 0.0;
      }
      else {
        fVar34 = *(float *)(unaff_RSI + 0x168c);
      }
      if ((fVar31 - fVar34 < *(float *)(local_var_40 + 0xc)) &&
         (((uint)fVar33 & 0x808) == 0x800)) goto LAB_18012a70f;
      cVar8 = '\0';
    }
    else {
LAB_18012a70f:
      cVar8 = '\x01';
    }
    *(char *)((int64_t)local_var_40 + 0xac) = cVar8;
    if ((cVar8 != '\0') && (*(char *)((int64_t)local_var_40 + 0xad) == '\0')) {
      if ((*(float *)((int64_t)local_var_40 + 100) <= fVar32 - *(float *)(unaff_RSI + 0x168c))
         || (((uint)fVar33 & 8) != 0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
      }
      *(int8_t *)((int64_t)local_var_40 + 0xad) = uVar21;
    }
    if (*(char *)((int64_t)local_var_40 + 0xac) == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int32_t *)(unaff_RSI + 0x168c);
    }
    if (*(char *)((int64_t)local_var_40 + 0xad) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int32_t *)(unaff_RSI + 0x168c);
    }
    *(int32_t *)((int64_t)local_var_40 + 0xa4) = uVar10;
    *(int32_t *)(local_var_40 + 0x15) = uVar11;
  }
  unaff_RBP[0xc] = -NAN;
  if (((cStack000000000000004a != '\0') &&
      (*(int32_t *)((int64_t)local_var_40 + 0xd4) = 0xffffffff,
      ((uint)fVar33 >> 0x1a & 1) != 0)) && (local_var_48 == '\0')) {
    uVar11 = *(int32_t *)
              (*(int64_t *)(unaff_RSI + 0x1bc8) + -0xc +
              (int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30);
    *(int32_t *)(local_var_40 + 8) =
         *(int32_t *)
          (*(int64_t *)(unaff_RSI + 0x1bc8) + -0x10 + (int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30
          );
    *(int32_t *)((int64_t)local_var_40 + 0x44) = uVar11;
  }
  fVar31 = (float)((uint)fVar33 & 0x1000000);
  unaff_RBP[0x16] = fVar31;
  if (fVar31 == 0.0) {
    fVar32 = unaff_RBP[-4];
  }
  else {
    lVar14 = *(int64_t *)(unaff_RBP + 8);
    puVar1 = (int16_t *)(lVar14 + 0x188);
    *(int16_t *)((int64_t)local_var_40 + 0xba) = *puVar1;
    SystemCore_InterruptHandler(puVar1,&local_buffer_00000040);
    fVar32 = unaff_RBP[-4];
    if (((((uint)fVar33 >> 0x1a & 1) == 0) && (cVar7 == '\0')) && (fVar32 != 3.761582e-37)) {
      local_var_40[8] = *(int64_t *)(lVar14 + 0x100);
    }
  }
  if ((*(float *)(local_var_40 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((int64_t)local_var_40 + 0xdc) != 0)) {
    if (((uint)fVar33 >> 0x1c & 1) == 0) {
      if ((((((uint)fVar33 >> 0x1a & 1) != 0) && (local_var_48 == '\0')) &&
          (0 < (int)local_buffer_68)) ||
         (((cVar7 = local_var_48, ((uint)fVar33 >> 0x19 & 1) != 0 &&
           (local_var_48 == '\0')) && (fVar32 != 3.761582e-37)))) {
        puVar27 = (int32_t *)GenericFunction_18012f6d0(unaff_RBP + -0x18,local_var_40);
        uVar11 = puVar27[1];
        *(int32_t *)(local_var_40 + 8) = *puVar27;
        *(int32_t *)((int64_t)local_var_40 + 0x44) = uVar11;
        cVar7 = local_var_48;
      }
    }
    else {
      puVar27 = (int32_t *)GenericFunction_18012f6d0(unaff_RBP + -0x18,local_var_40);
      uVar11 = puVar27[1];
      *(int32_t *)(local_var_40 + 8) = *puVar27;
      *(int32_t *)((int64_t)local_var_40 + 0x44) = uVar11;
    }
  }
  else {
    fVar34 = *(float *)(local_var_40 + 0x1e) -
             *(float *)(local_var_40 + 0x1f) * *(float *)(local_var_40 + 10);
    fVar32 = *(float *)((int64_t)local_var_40 + 0xf4) -
             *(float *)((int64_t)local_var_40 + 0x54) *
             *(float *)((int64_t)local_var_40 + 0xfc);
    if (fVar34 <= *(float *)(unaff_RSI + 0x16b4)) {
      fVar34 = *(float *)(unaff_RSI + 0x16b4);
    }
    if (fVar32 <= *(float *)(unaff_RSI + 0x16b8)) {
      fVar32 = *(float *)(unaff_RSI + 0x16b8);
    }
    _fStack0000000000000070 = CONCAT44(fVar32,fVar34);
    SystemFunction_00018012ddc0(local_var_40,&local_buffer_00000070,0);
  }
  if (*(int *)((int64_t)local_var_40 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((int64_t)local_var_40 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((int64_t)local_var_40 + 0xae) == '\0') {
      if (*(char *)(local_var_40[5] + 0x77) == '\0') {
        pfVar16 = (float *)SystemFunction_00018011feb0(local_var_40[5],unaff_RBP + 0x20);
        pfVar17 = (float *)SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x20);
        if (((*pfVar17 <= *pfVar16 && *pfVar16 != *pfVar17) ||
            (pfVar17[1] <= pfVar16[1] && pfVar16[1] != pfVar17[1])) ||
           ((pfVar16[2] < pfVar17[2] || (pfVar16[3] < pfVar17[3])))) {
          local_var_20 = (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),4);
          lVar14 = GenericFunction_180130830(local_var_40,(int)local_var_40[1],local_var_40 + 8,
                                 local_var_40 + 9,local_var_20);
          local_var_40[5] = lVar14;
          SystemFunction_00018012fb50(local_var_40,lVar14);
          if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
            uVar11 = 0x3f800000;
          }
          else {
            uVar11 = *(int32_t *)(local_var_40[5] + 0x18);
          }
          *(int32_t *)((int64_t)local_var_40 + 0x2dc) = uVar11;
          SystemFunction_000180123e50(local_var_40);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(local_var_40[5] + 0x49) != '\0') {
      local_var_40[8] = *(int64_t *)(local_var_40[5] + 8);
    }
    if (*(char *)(local_var_40[5] + 0x4a) != '\0') {
      lVar14 = *(int64_t *)(local_var_40[5] + 0x10);
      local_var_40[10] = lVar14;
      local_var_40[9] = lVar14;
    }
    uVar22 = *(uint *)(local_var_40[5] + 4) & 0xffffffdc;
    uVar9 = uVar22 | 0x20;
    if (((uint)fVar33 & 0x2000000) == 0) {
      uVar9 = uVar22;
    }
    if ((*(char *)(unaff_RSI + 0xc5) != '\0') || (((uint)fVar33 & 0x16000000) != 0)) {
      uVar9 = uVar9 | 2;
    }
    if ((*(char *)(unaff_RSI + 0xc6) != '\0') || (((uint)fVar33 & 0x16000000) != 0)) {
      uVar9 = uVar9 | 1;
    }
    iVar24 = (int)local_var_40[3];
    if ((iVar24 == 0) && (iVar24 = 0x11111111, *(char *)(unaff_RSI + 199) != '\0')) {
      iVar24 = 0;
    }
    *(int *)(local_var_40[5] + 0x28) = iVar24;
    uVar22 = *(uint *)((int64_t)local_var_40 + 0x1c);
    if (uVar22 != 0) {
      uVar9 = uVar9 & ~uVar22 | *(uint *)(local_var_40 + 4) & uVar22;
    }
    *(uint *)(local_var_40[5] + 4) = uVar9 | 0x10;
  }
  SystemFunction_00018011feb0(local_var_40[5],unaff_RBP + 4);
  if ((((cVar7 == '\0') && (fVar31 == 0.0)) && (*(int *)((int64_t)local_var_40 + 0xc4) < 1))
     && ((int)local_var_40[0x19] < 1)) {
    SystemFunction_00018011fc50(&local_buffer_00000060,unaff_RSI + 0x16ac,unaff_RSI + 0x16b4);
    if (*(char *)((int64_t)local_var_40 + 0xae) == '\0') {
      if ((0.0 < unaff_RBP[6] - unaff_RBP[4]) && (0.0 < unaff_RBP[7] - unaff_RBP[5])) {
        pfVar16 = unaff_RBP + 4;
LAB_18012ac57:
        SystemFunction_000180129830(local_var_40,pfVar16,&local_buffer_00000060);
      }
    }
    else if (0 < *(int *)(unaff_RSI + 0x1600)) {
      if (*(short *)(local_var_40[5] + 0x74) != -1) {
        lVar23 = (int64_t)*(short *)(local_var_40[5] + 0x74);
        pfVar16 = unaff_RBP + -8;
        lVar14 = *(int64_t *)(unaff_RSI + 0x1608);
        fVar32 = *(float *)(lVar14 + 0x10 + lVar23 * 0x24);
        fVar34 = *(float *)(lVar14 + 0x14 + lVar23 * 0x24);
        fVar38 = *(float *)(lVar14 + 0x18 + lVar23 * 0x24);
        unaff_RBP[-8] = fVar32;
        fVar35 = *(float *)(lVar14 + 0x1c + lVar23 * 0x24);
        unaff_RBP[-7] = fVar34;
        unaff_RBP[-6] = fVar32 + fVar38;
        unaff_RBP[-5] = fVar34 + fVar35;
        goto LAB_18012ac57;
      }
      _fStack0000000000000070 =
           CONCAT44(*(float *)(unaff_RSI + 0x16b0) +
                    *(float *)(**(int64_t **)(unaff_RSI + 0x1c70) + 0xc),
                    *(float *)(**(int64_t **)(unaff_RSI + 0x1c70) + 8) +
                    *(float *)(unaff_RSI + 0x16ac));
      SystemFunction_00018012ddc0(local_var_40,&local_buffer_00000070,1);
    }
  }
  *(float *)(local_var_40 + 8) = (float)(int)*(float *)(local_var_40 + 8);
  *(float *)((int64_t)local_var_40 + 0x44) =
       (float)(int)*(float *)((int64_t)local_var_40 + 0x44);
  if (fVar31 == 0.0) {
    if (((uint)fVar33 & 0xc000000) == 0x4000000) {
      uVar11 = *(int32_t *)(unaff_RSI + 0x1654);
    }
    else {
      uVar11 = *(int32_t *)(unaff_RSI + 0x1634);
    }
  }
  else {
    uVar11 = *(int32_t *)(unaff_RSI + 0x164c);
  }
  uVar9 = 0;
  *(int32_t *)(local_var_40 + 0xf) = uVar11;
  if (*(char *)((int64_t)local_var_40 + 0xae) != '\0') {
    *(int32_t *)(local_var_40 + 0xf) = 0;
  }
  if (((int)local_var_40[0x80] == 0x7fffffff) ||
     (iVar24 = (int)local_var_40[0x7e], iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = ((int)local_var_40[0x80] + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)(local_var_40 + 0x7f) = iVar24;
  if ((*(int *)((int64_t)local_var_40 + 0x404) == 0x7fffffff) ||
     (iVar24 = *(int *)((int64_t)local_var_40 + 0x3f4), iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = (*(int *)((int64_t)local_var_40 + 0x404) + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)((int64_t)local_var_40 + 0x3fc) = iVar24;
  pfVar16 = unaff_RBP + -0x18;
  *(int32_t *)((int64_t)local_var_40 + 0x3f4) = 0xffffffff;
  *(int32_t *)(local_var_40 + 0x7e) = 0xffffffff;
  *(int32_t *)((int64_t)local_var_40 + 0x404) = 0x7fffffff;
  *(int32_t *)(local_var_40 + 0x80) = 0x7fffffff;
  puVar27 = (int32_t *)GenericFunction_1801293e0(pfVar16,local_var_40,1);
  plVar19 = local_var_40;
  local_buffer_68 = (uint)pfVar16 & 0xffffff00;
  uVar11 = puVar27[1];
  *(int32_t *)((int64_t)local_var_40 + 0x8c) = *puVar27;
  *(int32_t *)(local_var_40 + 0x12) = uVar11;
  *(int32_t *)((int64_t)local_var_40 + 0x94) = 0x7f7fffff;
  *(int32_t *)(local_var_40 + 0x13) = 0x7f7fffff;
  if ((cVar2 != '\0') && (((uint)fVar33 >> 0xc & 1) == 0)) {
    if (((uint)fVar33 >> 0x1a & 1) == 0) {
      if (((*(byte *)((int64_t)local_var_40 + 0x432) & 1) != 0) || (fVar31 == 0.0)) {
        local_buffer_68 = (uint)(((uint)fVar33 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar22 = local_buffer_68 >> 8;
      local_buffer_68 = CONCAT31((int3)uVar22,1);
    }
  }
  fVar31 = *(float *)(unaff_RSI + 0x19f8);
  fVar32 = *(float *)(local_var_40 + 0xf);
  cVar7 = *(char *)(unaff_RSI + 0xcb);
  unaff_RBP[0x20] = 0.0;
  unaff_RBP[0x21] = 0.0;
  unaff_RBP[0x22] = 0.0;
  unaff_RBP[0x23] = 0.0;
  fVar34 = fVar31 * 1.35;
  fVar31 = fVar31 * 0.2 + fVar32 + 1.0;
  if (fVar31 <= fVar34) {
    fVar31 = fVar34;
  }
  cVar2 = *(char *)((int64_t)local_var_40 + 0xb2);
  fVar31 = (float)(int)fVar31;
  *(uint64_t *)(unaff_RBP + -0xe) = (uint64_t)(cVar7 != '\0') + 1;
  lVar14 = SYSTEM_DATA_MANAGER_A;
  local_var_200 = unaff_XMM9_Qa;
  local_var_208 = unaff_XMM9_Qb;
  if ((((cVar2 == '\0') && ((*(byte *)((int64_t)local_var_40 + 0xc) & 0x42) == 0)) &&
      (*(int *)((int64_t)local_var_40 + 0xc4) < 1)) &&
     (((int)local_var_40[0x19] < 1 && ((char)local_var_40[0x16] != '\0')))) {
    cVar7 = *(char *)(SYSTEM_DATA_MANAGER_A + 0xcb);
    fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 1.35;
    fVar33 = fVar32 + 1.0 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 0.2;
    unaff_RBP[2] = (float)(-(uint)(cVar7 != '\0') & 4);
    if (fVar33 <= fVar34) {
      fVar33 = fVar34;
    }
    fVar32 = (float)(int)((float)(int)fVar33 * 0.75);
    if (cVar7 == '\0') {
      fVar33 = 0.0;
    }
    else {
      fVar33 = 4.0;
    }
    _fStack0000000000000070 = 0x7f7fffff7f7fffff;
    fStack0000000000000060 = 3.4028235e+38;
    fStack0000000000000064 = 3.4028235e+38;
    GenericFunction_18012e1b0(&rendering_buffer_2464_ptr);
    lVar23 = _fStack0000000000000050;
    lVar29 = 0;
    pfVar16 = (float *)0x180bf66e8;
    do {
      uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      _fStack0000000000000050 =
           CONCAT44(*(float *)((int64_t)plVar19 + 0x4c) + *(float *)((int64_t)plVar19 + 0x44),
                    *(float *)(plVar19 + 8) + *(float *)(plVar19 + 9));
      SystemFunction_00018011fcd0(unaff_RBP + 0xe,plVar19 + 8,&local_buffer_00000050,pfVar16 + -2);
      fVar35 = fVar32 * *pfVar16 + unaff_RBP[0xe];
      fVar34 = pfVar16[1];
      fVar38 = fVar32 * pfVar16[1] + unaff_RBP[0xf];
      fVar36 = unaff_RBP[0xe] - fVar33 * *pfVar16;
      unaff_RBP[-0x1a] = fVar35;
      fVar34 = unaff_RBP[0xf] - fVar33 * fVar34;
      unaff_RBP[-0x19] = fVar38;
      unaff_RBP[-0x1c] = fVar36;
      unaff_RBP[-0x1b] = fVar34;
      if (fVar35 < fVar36) {
        unaff_RBP[-0x1c] = fVar35;
        unaff_RBP[-0x1a] = fVar36;
      }
      if (fVar38 < fVar34) {
        unaff_RBP[-0x1b] = fVar38;
        unaff_RBP[-0x19] = fVar34;
      }
      uVar10 = SystemFunction_000180123c50(plVar19,(int64_t)(int)uVar9);
      local_var_20 = (uint64_t *)CONCAT44(uVar11,0x2020);
      SystemCore_Formatter(unaff_RBP + -0x1c,uVar10,&local_buffer_00000048,&local_buffer_00000049,local_var_20);
      if (((local_var_48 == '\0') && (cStack0000000000000049 == '\0')) ||
         (*(uint *)(lVar14 + 0x1dcc) = (~uVar9 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
        if (uVar9 == 0) goto LAB_18012b0c8;
        if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
        if (local_var_48 != '\0') goto LAB_18012b1a3;
      }
      else {
        if ((*(char *)(lVar14 + 0x415) == '\0') || (uVar9 != 0)) {
          fVar34 = *pfVar16;
          fVar38 = pfVar16[1];
          unaff_RBP[0x10] = fVar34 * -fVar32;
          unaff_RBP[0x11] = fVar38 * -fVar32;
          unaff_RBP[0x12] = fVar33 * fVar34;
          unaff_RBP[0x13] = fVar33 * fVar38;
          pfVar17 = (float *)SystemFunction_00018011fcd0(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                                 pfVar16 + -2);
          fVar34 = *(float *)(lVar14 + 0x118);
          fVar38 = *(float *)(lVar14 + 0x1b48);
          fVar35 = *pfVar17;
          local_var_20 = (uint64_t *)&local_buffer_00000060;
          unaff_RBP[0x15] = (*(float *)(lVar14 + 0x11c) - *(float *)(lVar14 + 0x1b4c)) + pfVar17[1];
          unaff_RBP[0x14] = (fVar34 - fVar38) + fVar35;
          GenericFunction_1801295b0(plVar19,unaff_RBP + 0x14,pfVar16 + -2,&local_buffer_00000070,local_var_20);
          goto LAB_18012b18f;
        }
        pfVar17 = (float *)SystemCore_MemoryManager(unaff_RBP + -0x14,plVar19,lVar23);
        fStack0000000000000060 = *pfVar17;
        fStack0000000000000064 = pfVar17[1];
        SystemFunction_000180123e90(0,0);
LAB_18012b0c8:
        if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
          cVar7 = (local_var_48 != '\0') + '\x1e';
        }
        else {
LAB_18012b0d0:
          cVar7 = ' ';
        }
        fVar34 = (float)GenericFunction_180121ed0(cVar7);
        unaff_RBP[lVar29 + 0x20] = fVar34;
      }
      uVar9 = uVar9 + 1;
      lVar29 = lVar29 + 1;
      pfVar16 = pfVar16 + 6;
    } while (lVar29 < *(int64_t *)(unaff_RBP + -0xe));
    fVar34 = unaff_RBP[2];
    fVar33 = unaff_RBP[-10];
    fVar38 = 0.0;
    if (fVar34 != 0.0) {
      do {
        uVar15 = CONCAT44((int)((uint64_t)local_var_20 >> 0x20),0x40800000);
        GenericFunction_1801296e0(unaff_RBP + -0x20,plVar19,fVar38,fVar32,uVar15);
        uVar10 = (int32_t)((uint64_t)uVar15 >> 0x20);
        uVar11 = SystemFunction_000180123c50(plVar19,(int64_t)((int)fVar38 + 4));
        local_var_20 = (uint64_t *)CONCAT44(uVar10,0x20);
        SystemCore_Formatter(unaff_RBP + -0x20,uVar11,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058,
                      local_var_20);
        if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar14 + 0x1b24))) ||
            (cStack0000000000000058 != '\0')) &&
           (*(uint *)(lVar14 + 0x1dcc) = ((uint)fVar38 & 1) + 3, cStack0000000000000058 != '\0')) {
          *(int64_t *)(unaff_RBP + -10) = plVar19[8];
          unaff_RBP[0xc] = fVar38;
          _fStack0000000000000050 = 0;
          if (fVar38 == 0.0) {
LAB_18012b293:
            unaff_RBP[-9] = (*(float *)(lVar14 + 0x11c) - *(float *)(lVar14 + 0x1b4c)) + 4.0;
          }
          else if (fVar38 == 1.4013e-45) {
            _fStack0000000000000050 = 0x3f800000;
LAB_18012b2d2:
            unaff_RBP[-10] = (*(float *)(lVar14 + 0x118) - *(float *)(lVar14 + 0x1b48)) + 4.0;
          }
          else {
            if (fVar38 == 2.8026e-45) {
              _fStack0000000000000050 = 0x3f80000000000000;
              goto LAB_18012b293;
            }
            if (fVar38 == 4.2039e-45) goto LAB_18012b2d2;
          }
          local_var_20 = (uint64_t *)&local_buffer_00000060;
          GenericFunction_1801295b0(plVar19,unaff_RBP + -10,&local_buffer_00000050,&local_buffer_00000070,local_var_20)
          ;
        }
        fVar38 = (float)((int)fVar38 + 1);
      } while ((int)fVar38 < (int)fVar34);
    }
    piVar25 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar25 = *piVar25 + -1;
    if ((*(int64_t *)(lVar14 + 0x1cd8) != 0) &&
       (*(int64_t **)(*(int64_t *)(lVar14 + 0x1cd8) + 0x3a0) == plVar19)) {
      iVar24 = *(int *)(lVar14 + 0x1cc0);
      fVar34 = 0.0;
      fVar32 = 0.0;
      if (iVar24 == 3) {
        if (*(char *)(lVar14 + 0x135) == '\0') goto LAB_18012b465;
        local_var_20 = (uint64_t *)((uint64_t)local_var_20 & 0xffffffff00000000);
        pfVar16 = (float *)SystemCore_ConfigLoader(unaff_RBP + -0x14,1,0,0,local_var_20);
        fVar32 = *pfVar16;
        fVar34 = pfVar16[1];
        iVar24 = *(int *)(lVar14 + 0x1cc0);
      }
      if (iVar24 == 4) {
        local_var_20 = (uint64_t *)((uint64_t)local_var_20 & 0xffffffff00000000);
        pfVar16 = (float *)SystemCore_ConfigLoader(unaff_RBP + 0x18,2,0,0,local_var_20);
        fVar32 = *pfVar16;
        fVar34 = pfVar16[1];
      }
      if ((fVar32 != 0.0) || (fVar34 != 0.0)) {
        fVar38 = *(float *)(lVar14 + 0xbc);
        if (*(float *)(lVar14 + 0xb8) <= *(float *)(lVar14 + 0xbc)) {
          fVar38 = *(float *)(lVar14 + 0xb8);
        }
        *(int8_t *)(lVar14 + 0x1cf8) = 0;
        *(int8_t *)(lVar14 + 0x1d07) = 1;
        fVar35 = (float)(int)(fVar38 * *(float *)(lVar14 + 0x18) * 600.0);
        fVar38 = (float)GenericFunction_180121ed0(0x20);
        unaff_RBP[0x20] = fVar38;
        pfVar16 = (float *)SystemCore_MemoryManager(unaff_RBP + -0x18,plVar19,
                                         CONCAT44(fVar34 * fVar35 +
                                                  *(float *)((int64_t)plVar19 + 0x54),
                                                  fVar32 * fVar35 + *(float *)(plVar19 + 10)));
        fStack0000000000000060 = *pfVar16;
        fStack0000000000000064 = pfVar16[1];
      }
    }
LAB_18012b465:
    lVar14 = SYSTEM_DATA_MANAGER_A;
    if ((fStack0000000000000060 != 3.4028235e+38) &&
       ((fStack0000000000000060 != *(float *)(plVar19 + 10) ||
        (fStack0000000000000064 != *(float *)((int64_t)plVar19 + 0x54))))) {
      *(float *)(plVar19 + 10) = fStack0000000000000060;
      *(float *)((int64_t)plVar19 + 0x54) = fStack0000000000000064;
      if (((*(uint *)((int64_t)plVar19 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar14 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar14 + 0x2e04) = *(int32_t *)(lVar14 + 0x1c);
      }
    }
    lVar14 = SYSTEM_DATA_MANAGER_A;
    if (fStack0000000000000070 != 3.4028235e+38) {
      *(float *)(plVar19 + 8) = (float)(int)fStack0000000000000070;
      *(float *)((int64_t)plVar19 + 0x44) = (float)(int)fStack0000000000000074;
      if (((*(uint *)((int64_t)plVar19 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar14 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar14 + 0x2e04) = *(int32_t *)(lVar14 + 0x1c);
      }
    }
    plVar19[9] = plVar19[10];
  }
  pfVar16 = (float *)0x180bf66e8;
  if (*(char *)((int64_t)local_var_40 + 0xae) != '\0') {
    if (*(char *)(local_var_40[5] + 0x49) == '\0') {
      *(int64_t *)(local_var_40[5] + 8) = local_var_40[8];
    }
    if (*(char *)(local_var_40[5] + 0x4a) == '\0') {
      *(int64_t *)(local_var_40[5] + 0x10) = local_var_40[9];
    }
    puVar18 = (uint64_t *)SystemFunction_00018011feb0(local_var_40[5]);
    uVar15 = puVar18[1];
    *(uint64_t *)(unaff_RBP + 4) = *puVar18;
    *(uint64_t *)(unaff_RBP + 6) = uVar15;
  }
  *(uint64_t *)((int64_t)local_var_40 + 0x34) = *(uint64_t *)(local_var_40[5] + 8);
  if ((*(float *)(local_var_40 + 9) <= 0.0) || (((uint)fVar33 & 0x2000040) != 0)) {
    fVar32 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar32 = *(float *)(local_var_40 + 9) * 0.65;
  }
  *(float *)((int64_t)local_var_40 + 0x284) = (float)(int)fVar32;
  DataStructure_91500(local_var_40[0x5d]);
  *(uint *)(local_var_40[0x5d] + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)(*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar14 = local_var_40[0x5d];
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  SystemCore_InterruptHandler(lVar14 + 0x70,unaff_RBP + -0x14);
  SystemCore_Initialize(lVar14);
  if ((((uint)fVar33 & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar17 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x228);
    pfVar26 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar17 = unaff_RBP + 4;
    pfVar26 = unaff_RBP + 6;
  }
  SystemCore_PerformanceMonitor(pfVar17,pfVar26);
  if (((((uint)fVar33 >> 0x1b & 1) == 0) ||
      (plVar19 = (int64_t *)SystemFunction_00018012ea90(), local_var_40 != plVar19)) ||
     (0 < *(int *)((int64_t)local_var_40 + 0xdc))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  lVar14 = *(int64_t *)(unaff_RSI + 0x1ce0);
  if ((lVar14 == 0) ||
     ((local_var_40 != *(int64_t **)(lVar14 + 0x3a0) &&
      (((plVar19 = *(int64_t **)(unaff_RSI + 0x1ce8), plVar19 == (int64_t *)0x0 ||
        (local_var_40 != plVar19)) || (plVar19[5] == *(int64_t *)(lVar14 + 0x28))))))) {
    bVar30 = false;
  }
  else {
    bVar30 = true;
  }
  if ((bVar28 != 0) || (bVar30)) {
    fVar32 = *(float *)(unaff_RSI + 0x1dc8);
    fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    pfVar17 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar28 + 0x3a) * 0x10);
    fVar38 = pfVar17[1];
    fVar35 = pfVar17[2];
    fVar36 = pfVar17[3];
    unaff_RBP[-0x20] = *pfVar17;
    unaff_RBP[-0x1f] = fVar38;
    unaff_RBP[-0x1e] = fVar35;
    unaff_RBP[-0x1d] = fVar36;
    unaff_RBP[-0x1d] = fVar36 * fVar32 * fVar34;
    uVar11 = SystemFunction_000180121e20(unaff_RBP + -0x20);
    local_var_20 = (uint64_t *)((uint64_t)local_var_20 & 0xffffffff00000000);
    MathInterpolationCalculator0(local_var_40[0x5d],unaff_RBP + 4,unaff_RBP + 6,uVar11,local_var_20);
    if ((bVar30) && (local_var_40 == *(int64_t **)(unaff_RSI + 0x1ce0))) {
      SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x18);
      SystemFunction_00018010e610(unaff_RBP + -0x18);
      uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar32 = *(float *)(unaff_RSI + 0x1cf4);
        lVar14 = local_var_40[0x5d];
        uVar10 = *(int32_t *)(unaff_RSI + 0x1634);
        fVar38 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
        fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
        fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
        fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
        unaff_RBP[-0x1f] = fVar38;
        unaff_RBP[-0x1e] = fVar35;
        unaff_RBP[-0x1d] = fVar36;
        unaff_RBP[-0x1d] = fVar36 * fVar32 * 0.25 * fVar34;
        uVar12 = SystemFunction_000180121e20(unaff_RBP + -0x20);
        local_var_20 = (uint64_t *)CONCAT44(uVar11,uVar10);
        MathInterpolationCalculator0(lVar14,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar12,local_var_20);
      }
    }
  }
  uVar9 = local_buffer_68;
  lVar14 = *(int64_t *)(unaff_RSI + 0x1cd8);
  fVar32 = *(float *)(local_var_40 + 0xf);
  fVar34 = *(float *)((int64_t)local_var_40 + 0x7c);
  if (lVar14 == 0) {
    lVar14 = *(int64_t *)(unaff_RSI + 0x1c98);
  }
  if (((char)local_buffer_68 == '\0') &&
     ((lVar14 == 0 ||
      ((local_var_40[0x76] != *(int64_t *)(lVar14 + 0x3b0) &&
       ((local_var_40[0x81] == 0 || (local_var_40[0x81] != *(int64_t *)(lVar14 + 0x408)))
       )))))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  SystemFunction_000180120c80(local_var_40,unaff_RBP + -2);
  plVar19 = local_var_40;
  uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  if (*(char *)((int64_t)local_var_40 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)fVar33 & 0x80);
    if (((uint)fVar33 & 0x80) == 0) {
      bVar30 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar24 = strcmp(&rendering_buffer_2304_ptr,unaff_RSI + 0x1df8), iVar24 == 0)) &&
           (bVar30 = false, (int64_t *)**(uint64_t **)(unaff_RSI + 0x1de0) == plVar19)))))) {
        bVar30 = true;
      }
      lVar14 = SYSTEM_DATA_MANAGER_A;
      if (((uint)fVar33 & 0x6000000) == 0) {
        lVar23 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar23 = 0xd0;
        }
      }
      else {
        lVar23 = 0xe0;
      }
      pfVar17 = (float *)(lVar23 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fVar38 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar36 = pfVar17[3];
      unaff_RBP[-0x20] = *pfVar17;
      unaff_RBP[-0x1f] = fVar38;
      unaff_RBP[-0x1e] = fVar35;
      unaff_RBP[-0x1d] = fVar36;
      unaff_RBP[-0x1d] = fVar36 * *(float *)(lVar14 + 0x1628);
      uVar9 = SystemFunction_000180121e20(unaff_RBP + -0x20);
      if (*(char *)((int64_t)local_var_40 + 0xae) == '\0') {
        fVar38 = 1.0;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar38 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar30) {
          fVar38 = fVar38 * 0.5;
        }
        if (fVar38 != 1.0) {
          if (0.0 <= fVar38) {
            if (1.0 <= fVar38) {
              fVar38 = 1.0;
            }
          }
          else {
            fVar38 = 0.0;
          }
          uVar9 = (int)(fVar38 * 255.0 + 0.5) << 0x18 | uVar9 & 0xffffff;
        }
      }
      else {
        uVar9 = uVar9 | 0xff000000;
        if (bVar30) {
          *(float *)(local_var_40[5] + 0x6c) = *(float *)(local_var_40[5] + 0x6c) * 0.5;
        }
      }
      fVar38 = *(float *)(local_var_40 + 9);
      fVar35 = *(float *)(local_var_40 + 8);
      lVar14 = local_var_40[0x5d];
      unaff_RBP[0x15] =
           *(float *)((int64_t)local_var_40 + 0x4c) +
           *(float *)((int64_t)local_var_40 + 0x44);
      unaff_RBP[0x14] = fVar38 + fVar35;
      fVar35 = (float)SystemFunction_00018010e760(local_var_40);
      fVar38 = *(float *)((int64_t)local_var_40 + 0x44);
      unaff_RBP[0x12] = *(float *)(local_var_40 + 8);
      local_var_20 = (uint64_t *)CONCAT44(uVar11,fVar32);
      unaff_RBP[0x13] = fVar35 + fVar38;
      MathInterpolationCalculator0(lVar14,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar9,local_var_20);
    }
    uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    bVar30 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar14 = SYSTEM_DATA_MANAGER_A;
    if ((((uint)fVar33 & 1) == 0) && ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0)) {
      pfVar17 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar28 + 0x14) * 0x10);
      fVar38 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar36 = pfVar17[3];
      unaff_RBP[-0x20] = *pfVar17;
      unaff_RBP[-0x1f] = fVar38;
      unaff_RBP[-0x1e] = fVar35;
      unaff_RBP[-0x1d] = fVar36;
      unaff_RBP[-0x1d] = fVar36 * *(float *)(lVar14 + 0x1628);
      SystemFunction_000180121e20(unaff_RBP + -0x20);
      local_var_20 = (uint64_t *)CONCAT44(uVar11,fVar32);
      MathInterpolationCalculator0(local_var_40[0x5d],unaff_RBP + -2);
    }
    uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if (((uint)fVar33 >> 10 & 1) != 0) {
      SystemFunction_00018010e7f0(local_var_40,unaff_RBP + -8);
      uVar15 = SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x18);
      SystemFunction_00018010e690(unaff_RBP + -8,uVar15);
      lVar23 = SYSTEM_DATA_MANAGER_A;
      lVar14 = local_var_40[0x5d];
      fVar38 = fVar32;
      if (((uint)fVar33 & 1) == 0) {
        fVar38 = 0.0;
      }
      fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fVar37 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      unaff_RBP[-0x1f] = fVar35;
      unaff_RBP[-0x1e] = fVar36;
      unaff_RBP[-0x1d] = fVar37;
      unaff_RBP[-0x1d] = fVar37 * *(float *)(lVar23 + 0x1628);
      uVar10 = SystemFunction_000180121e20(unaff_RBP + -0x20);
      local_var_20 = (uint64_t *)CONCAT44(uVar11,fVar38);
      MathInterpolationCalculator0(lVar14,unaff_RBP + -8,unaff_RBP + -6,uVar10,local_var_20);
      lVar14 = SYSTEM_DATA_MANAGER_A;
      uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      fVar38 = *(float *)(unaff_RSI + 0x1668);
      if ((0.0 < fVar38) &&
         (unaff_RBP[-5] <
          *(float *)((int64_t)local_var_40 + 0x4c) +
          *(float *)((int64_t)local_var_40 + 0x44))) {
        lVar23 = local_var_40[0x5d];
        fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fVar37 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        unaff_RBP[-0x1f] = fVar35;
        unaff_RBP[-0x1e] = fVar36;
        unaff_RBP[-0x1d] = fVar37;
        unaff_RBP[-0x1d] = fVar37 * *(float *)(lVar14 + 0x1628);
        uVar10 = SystemFunction_000180121e20(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        local_var_20 = (uint64_t *)CONCAT44(uVar11,fVar38);
        SystemCore_SystemMonitor(lVar23,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar10,local_var_20);
      }
    }
    uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    lVar14 = local_var_40[0x81];
    if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0xa0) & 0x40) != 0)) {
      fVar38 = *(float *)(lVar14 + 0x38);
      fVar35 = *(float *)(unaff_RSI + 0x19f8);
      fVar36 = *(float *)(lVar14 + 0x3c);
      _fStack0000000000000050 = *(int64_t *)(lVar14 + 0x38);
      unaff_RBP[-0x20] = fVar38;
      unaff_RBP[-0x1f] = fVar36;
      fVar37 = (float)(int)(fVar35 * 0.7);
      fVar35 = (float)(int)(fVar35 * 0.55);
      unaff_RBP[-0x1e] = fVar38 + fVar35;
      unaff_RBP[-0x1d] = fVar36 + fVar35;
      uVar10 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2496_ptr,0);
      uVar15 = CONCAT44(uVar11,0x20);
      cVar7 = SystemCore_Formatter(unaff_RBP + -0x20,uVar10,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058
                            ,uVar15);
      uVar11 = (int32_t)((uint64_t)uVar15 >> 0x20);
      if (cVar7 != '\0') {
        *(byte *)(local_var_40[0x81] + 0xa1) = *(byte *)(local_var_40[0x81] + 0xa1) | 0x10
        ;
      }
      lVar14 = SYSTEM_DATA_MANAGER_A;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(local_var_40[0x81] + 0xa0) & 8) == 0 || (cStack0000000000000059 != '\0'))
         )) {
        lVar23 = (uint64_t)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar23 = 0x17;
      }
      pfVar17 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar23 + 10) * 0x10);
      fVar38 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar36 = pfVar17[3];
      unaff_RBP[-0x14] = *pfVar17;
      unaff_RBP[-0x13] = fVar38;
      unaff_RBP[-0x12] = fVar35;
      unaff_RBP[-0x11] = fVar36;
      unaff_RBP[-0x11] = fVar36 * *(float *)(lVar14 + 0x1628);
      uVar10 = SystemFunction_000180121e20(unaff_RBP + -0x14);
      local_var_20 = (uint64_t *)CONCAT44(uVar11,uVar10);
      lVar14 = local_var_40[0x5d];
      unaff_RBP[0xe] = fStack0000000000000050;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar37;
      _fStack0000000000000070 = CONCAT44(fStack0000000000000054,fStack0000000000000050 + fVar37);
      DataStructure_940f0(lVar14,&local_buffer_00000050,&local_buffer_00000070,unaff_RBP + 0xe,local_var_20);
    }
    if (*(char *)((int64_t)local_var_40 + 0xac) != '\0') {
      GenericFunction_180110540(0);
    }
    if (*(char *)((int64_t)local_var_40 + 0xad) != '\0') {
      GenericFunction_180110540(1);
    }
    if (((uint)fVar33 & 2) == 0) {
      lVar14 = 0;
      do {
        uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        fVar38 = *(float *)(local_var_40 + 8);
        fVar35 = *(float *)((int64_t)local_var_40 + 0x44);
        lVar23 = local_var_40[0x5d];
        fVar38 = ((fVar38 + *(float *)(local_var_40 + 9)) - fVar38) * pfVar16[-2] + fVar38;
        fVar35 = ((fVar35 + *(float *)((int64_t)local_var_40 + 0x4c)) - fVar35) * pfVar16[-1]
                 + fVar35;
        if (bVar30) {
          unaff_RBP[2] = fVar34;
          unaff_RBP[3] = fVar31;
          fVar36 = fVar34;
        }
        else {
          fStack0000000000000060 = fVar31;
          fStack0000000000000064 = fVar34;
          fVar36 = fVar31;
        }
        pfVar17 = (float *)((int64_t)&local_buffer_00000060 + 4);
        if (bVar30) {
          pfVar17 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar36 * *pfVar16 + fVar38;
        unaff_RBP[-3] = *pfVar17 * pfVar16[1] + fVar35;
        SystemCore_InterruptHandler(lVar23 + 0x80,unaff_RBP + -4);
        lVar23 = local_var_40[0x5d];
        if (bVar30) {
          unaff_RBP[0x1c] = fVar31;
          unaff_RBP[0x1d] = fVar34;
          fVar36 = fVar31;
        }
        else {
          unaff_RBP[-0x1c] = fVar34;
          unaff_RBP[-0x1b] = fVar31;
          fVar36 = fVar34;
        }
        pfVar17 = unaff_RBP + -0x1b;
        if (bVar30) {
          pfVar17 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar36 * *pfVar16 + fVar38;
        unaff_RBP[0x19] = *pfVar17 * pfVar16[1] + fVar35;
        SystemCore_InterruptHandler(lVar23 + 0x80,unaff_RBP + 0x18);
        fVar36 = pfVar16[1];
        lVar23 = local_var_40[0x5d];
        local_var_20 = (uint64_t *)CONCAT44(uVar11,pfVar16[3]);
        unaff_RBP[-0x14] = (fVar34 + fVar32) * *pfVar16 + fVar38;
        unaff_RBP[-0x13] = (fVar34 + fVar32) * fVar36 + fVar35;
        UtilitiesSystem_FileHandler(lVar23,unaff_RBP + -0x14);
        lVar23 = local_var_40[0x5d];
        DataStructure_93190(lVar23,*(uint64_t *)(lVar23 + 0x88),*(int32_t *)(lVar23 + 0x80),
                      unaff_RBP[lVar14 + 0x20],local_var_20);
        bVar30 = (bool)(bVar30 ^ 1);
        *(int32_t *)(lVar23 + 0x80) = 0;
        lVar14 = lVar14 + 1;
        pfVar16 = pfVar16 + 6;
      } while (lVar14 < *(int64_t *)(unaff_RBP + -0xe));
    }
    lVar14 = SYSTEM_DATA_MANAGER_A;
    if ((0.0 < fVar34) && (unaff_RBP[-10] == 0.0)) {
      lVar23 = local_var_40[0x5d];
      fVar38 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x21] = fVar38;
      unaff_RBP[0x22] = fVar35;
      unaff_RBP[0x23] = fVar36;
      unaff_RBP[0x23] = fVar36 * *(float *)(lVar14 + 0x1628);
      uVar9 = SystemFunction_000180121e20(unaff_RBP + 0x20);
      fVar38 = *(float *)((int64_t)local_var_40 + 0x44);
      fVar35 = *(float *)(local_var_40 + 8) + *(float *)(local_var_40 + 9);
      fVar36 = fVar38 + *(float *)((int64_t)local_var_40 + 0x4c);
      if ((uVar9 & 0xff000000) != 0) {
        bVar28 = *(byte *)(lVar23 + 0x30);
        local_var_20 = (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),0xf);
        unaff_RBP[-0x14] = *(float *)(local_var_40 + 8) + 0.5;
        unaff_RBP[-0x13] = fVar38 + 0.5;
        if ((bVar28 & 1) == 0) {
          fVar35 = fVar35 - 0.49;
          fVar36 = fVar36 - 0.49;
        }
        else {
          fVar35 = fVar35 - 0.5;
          fVar36 = fVar36 - 0.5;
        }
        unaff_RBP[-0xe] = fVar35;
        unaff_RBP[-0xd] = fVar36;
        UtilitiesSystem_LogManager(lVar23,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar32,local_var_20);
        GenericFunction_18010e4e0(lVar23,uVar9,1,fVar34);
      }
    }
    uVar11 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if (unaff_RBP[0xc] != -NAN) {
      uVar39 = (uint64_t)local_var_20 & 0xffffffff00000000;
      GenericFunction_1801296e0(unaff_RBP + -0x14,local_var_40,unaff_RBP[0xc],fVar31,uVar39);
      lVar23 = SYSTEM_DATA_MANAGER_A;
      uVar10 = (int32_t)(uVar39 >> 0x20);
      lVar14 = local_var_40[0x5d];
      fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x189c);
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fVar38 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      unaff_RBP[-0xd] = fVar31;
      unaff_RBP[-0xc] = fVar32;
      unaff_RBP[-0xb] = fVar38;
      unaff_RBP[-0xb] = fVar38 * *(float *)(lVar23 + 0x1628);
      uVar11 = SystemFunction_000180121e20(unaff_RBP + -0xe);
      if (fVar34 <= 1.0) {
        fVar34 = 1.0;
      }
      uVar15 = CONCAT44(uVar10,fVar34);
      SystemCore_SystemMonitor(lVar14,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar11,uVar15);
      uVar11 = (int32_t)((uint64_t)uVar15 >> 0x20);
    }
    lVar14 = SYSTEM_DATA_MANAGER_A;
    fVar31 = *(float *)(unaff_RSI + 0x1668);
    uVar9 = local_buffer_68;
    if (((0.0 < fVar31) && (((uint)fVar33 & 1) == 0)) &&
       ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0)) {
      lVar23 = local_var_40[0x5d];
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar38 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x18] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x19] = fVar32;
      unaff_RBP[0x1a] = fVar34;
      unaff_RBP[0x1b] = fVar38;
      unaff_RBP[0x1b] = fVar38 * *(float *)(lVar14 + 0x1628);
      uVar10 = SystemFunction_000180121e20(unaff_RBP + 0x18);
      fVar32 = *(float *)(unaff_RSI + 0x1638);
      uVar15 = CONCAT44(uVar11,fVar31);
      unaff_RBP[-0xe] = *unaff_RBP - fVar32;
      unaff_RBP[-0xd] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x13] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar32;
      SystemCore_SystemMonitor(lVar23,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar10,uVar15);
      uVar11 = (int32_t)((uint64_t)uVar15 >> 0x20);
      uVar9 = local_buffer_68;
    }
  }
  else {
    uVar10 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)((int64_t)local_var_40 + 0x7c);
    lVar14 = SYSTEM_DATA_MANAGER_A;
    if ((bVar28 == 0) || (lVar23 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar23 = 0x160;
    }
    pfVar16 = (float *)(lVar23 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    fVar31 = pfVar16[1];
    fVar34 = pfVar16[2];
    fVar38 = pfVar16[3];
    unaff_RBP[0x20] = *pfVar16;
    unaff_RBP[0x21] = fVar31;
    unaff_RBP[0x22] = fVar34;
    unaff_RBP[0x23] = fVar38;
    unaff_RBP[0x23] = fVar38 * *(float *)(lVar14 + 0x1628);
    uVar12 = SystemFunction_000180121e20(unaff_RBP + 0x20);
    uVar15 = CONCAT44(uVar11,fVar32);
    SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar12,1,uVar15);
    uVar11 = (int32_t)((uint64_t)uVar15 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar10;
  }
  pfVar16 = (float *)(unaff_RSI + 0x1668);
  local_var_40[0xb] = local_var_40[10];
  *(float *)(local_var_40 + 0x4e) =
       (*(float *)(local_var_40 + 8) - *(float *)((int64_t)local_var_40 + 0x8c)) +
       *(float *)(local_var_40 + 0xe);
  fVar38 = (float)SystemFunction_00018010e760(local_var_40);
  fVar31 = *(float *)((int64_t)local_var_40 + 0x44);
  fVar32 = *(float *)(local_var_40 + 0x12);
  fVar34 = *(float *)((int64_t)local_var_40 + 0x74);
  fVar35 = (float)SystemFunction_00018010e7a0();
  *(float *)((int64_t)local_var_40 + 0x274) = fVar35 + fVar38 + (fVar31 - fVar32) + fVar34;
  fVar31 = *(float *)(local_var_40 + 0xd);
  if (fVar31 == 0.0) {
    fVar31 = *(float *)(local_var_40 + 9) - *(float *)((int64_t)local_var_40 + 0xa4);
  }
  *(float *)(local_var_40 + 0x4f) =
       ((*(float *)(local_var_40 + 8) - *(float *)((int64_t)local_var_40 + 0x8c)) -
       *(float *)(local_var_40 + 0xe)) + fVar31;
  fVar31 = *(float *)((int64_t)local_var_40 + 0x6c);
  if (fVar31 == 0.0) {
    fVar31 = *(float *)((int64_t)local_var_40 + 0x4c) - *(float *)(local_var_40 + 0x15);
  }
  *(float *)((int64_t)local_var_40 + 0x27c) =
       ((*(float *)((int64_t)local_var_40 + 0x44) - *(float *)(local_var_40 + 0x12)) -
       *(float *)((int64_t)local_var_40 + 0x74)) + fVar31;
  *(float *)((int64_t)local_var_40 + 0x204) =
       *(float *)(local_var_40 + 0xe) - *(float *)((int64_t)local_var_40 + 0x8c);
  uVar12 = 0;
  *(int32_t *)(local_var_40 + 0x41) = 0;
  *(int32_t *)((int64_t)local_var_40 + 0x20c) = 0;
  SystemFunction_00018010e7a0(local_var_40);
  SystemFunction_00018010e760(local_var_40);
  uVar15 = SystemFunction_00018004ba20(unaff_RBP + -0x18,
                               *(float *)((int64_t)local_var_40 + 0x20c) +
                               *(float *)((int64_t)local_var_40 + 0x204));
  puVar27 = (int32_t *)SystemFunction_00018011fbf0(unaff_RBP + -0xe,local_var_40 + 8,uVar15);
  uVar10 = puVar27[1];
  *(int32_t *)(local_var_40 + 0x22) = *puVar27;
  *(int32_t *)((int64_t)local_var_40 + 0x114) = uVar10;
  local_var_40[0x20] = local_var_40[0x22];
  local_var_40[0x21] = local_var_40[0x22];
  local_var_40[0x23] = local_var_40[0x22];
  puVar27 = (int32_t *)SystemFunction_00018004ba20(unaff_RBP + -0x18);
  uVar10 = puVar27[1];
  *(int32_t *)((int64_t)local_var_40 + 300) = *puVar27;
  *(int32_t *)(local_var_40 + 0x26) = uVar10;
  local_var_40[0x24] = *(int64_t *)((int64_t)local_var_40 + 300);
  *(int32_t *)((int64_t)local_var_40 + 0x134) = 0;
  *(int32_t *)(local_var_40 + 0x25) = 0;
  *(int8_t *)((int64_t)local_var_40 + 0x17c) = 0;
  fVar31 = (float)SystemFunction_0001801293c0(local_var_40);
  *(bool *)((int64_t)local_var_40 + 0x17d) = 0.0 < fVar31;
  *(int *)((int64_t)local_var_40 + 0x174) = (int)local_var_40[0x2f];
  *(int32_t *)(local_var_40 + 0x2f) = 0;
  *(int8_t *)((int64_t)local_var_40 + 0x17e) = 0;
  *(float *)(local_var_40 + 0x27) = *(float *)((int64_t)local_var_40 + 0x104) - 9999.0;
  GenericFunction_18013e200(local_var_40 + 0x31,0);
  lVar14 = *(int64_t *)(unaff_RBP + 8);
  *(int32_t *)(local_var_40 + 0x34) = 1;
  if (lVar14 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = *(int32_t *)(lVar14 + 0x1a0);
  }
  *(int32_t *)((int64_t)local_var_40 + 0x1a4) = uVar10;
  if (lVar14 != 0) {
    uVar12 = *(int32_t *)(lVar14 + 0x1a8);
  }
  *(int32_t *)(local_var_40 + 0x35) = uVar12;
  *(int32_t *)((int64_t)local_var_40 + 0x1ac) =
       *(int32_t *)((int64_t)local_var_40 + 0x284);
  *(int32_t *)(local_var_40 + 0x36) = 0xbf800000;
  GenericFunction_18013e340(local_var_40 + 0x37,0);
  GenericFunction_18013e2f0(local_var_40 + 0x39,0);
  GenericFunction_18013e2f0(local_var_40 + 0x3b,0);
  local_var_40[0x42] = 0;
  *(int32_t *)((int64_t)local_var_40 + 0x13c) = 0;
  *(int32_t *)(local_var_40 + 0x28) = 0;
  local_var_40[0x33] = (int64_t)(local_var_40 + 0x57);
  GenericFunction_18013db40(local_var_40 + 0x3d,0);
  SystemFunction_00018011a9d0(local_var_40 + 0x51,3);
  if ((unaff_RBP[0x16] != 0.0) && ((int)local_var_40[0x35] != *(int *)(lVar14 + 0x1a8))) {
    *(int *)(local_var_40 + 0x35) = *(int *)(lVar14 + 0x1a8);
    GenericFunction_18011d940(local_var_40 + 0x37,local_var_40 + 0x35);
  }
  if (0 < *(int *)((int64_t)local_var_40 + 0xc4)) {
    *(int *)((int64_t)local_var_40 + 0xc4) = *(int *)((int64_t)local_var_40 + 0xc4) + -1
    ;
  }
  if (0 < (int)local_var_40[0x19]) {
    *(int *)(local_var_40 + 0x19) = (int)local_var_40[0x19] + -1;
  }
  if ((char)uVar9 != '\0') {
    SystemCore_DataCompressor(local_var_40);
    SystemFunction_000180131810(local_var_40,0);
  }
  puVar5 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar5 != (int8_t *)0x0) &&
       (lVar23 = local_var_40[5], *(char *)(lVar23 + 0x48) != '\0')) &&
      (lVar29 = SystemFunction_00018012fae0(), lVar23 != lVar29)) &&
     (((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0 ||
      ((*(byte *)((int64_t)local_var_40 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar23 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if ((((uint)fVar33 & 1) == 0) && ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0)) {
    uVar9 = *(uint *)(local_var_40 + 0x35);
    *(uint *)(local_var_40 + 0x35) = uVar9 | 0x10;
    *(int32_t *)((int64_t)local_var_40 + 0x16c) = 1;
    *(int32_t *)(local_var_40 + 0x2e) = 2;
    if (((uint)fVar33 & 0x20) == 0) {
      plVar19 = local_var_40 + 8;
      uVar10 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2480_ptr,0);
      cVar7 = GenericFunction_180110000(uVar10,plVar19,0);
      if (cVar7 != '\0') {
        *(int8_t *)((int64_t)local_var_40 + 0xb3) = 1;
      }
    }
    if (*(int64_t *)(unaff_RBP + 10) != 0) {
      fVar31 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar15 = SystemFunction_00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(local_var_40 + 9) +
                                    *(float *)(local_var_40 + 8)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar31,
                                   *(float *)((int64_t)local_var_40 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar31);
      uVar10 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2512_ptr,0);
      cVar7 = GenericFunction_18010fd40(uVar10,uVar15);
      if (cVar7 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)((int64_t)local_var_40 + 0x16c) = 0;
    *(int32_t *)(local_var_40 + 0x2e) = 1;
    *(uint *)(local_var_40 + 0x35) = uVar9;
    if (((uint)fVar33 & 0x100000) == 0) {
      fVar31 = 0.0;
    }
    else {
      uVar15 = CONCAT44(uVar11,0xbf800000);
      pfVar17 = (float *)SystemCore_Controller(unaff_RBP + -0x18,&system_data_df28,0,0,uVar15);
      uVar11 = (int32_t)((uint64_t)uVar15 >> 0x20);
      fVar31 = *pfVar17;
    }
    uVar15 = SystemFunction_00018004ba20(unaff_RBP + -0x18);
    uVar20 = SystemCore_Controller(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar11,0xbf800000));
    SystemFunction_00018011fbf0(&local_buffer_00000050,uVar20,uVar15);
    fVar38 = unaff_RBP[-2];
    fVar32 = unaff_RBP[-1];
    fVar35 = *unaff_RBP;
    fVar34 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar38;
    unaff_RBP[-0x1b] = fVar32;
    unaff_RBP[-0x1a] = fVar35;
    unaff_RBP[-0x19] = fVar34;
    if (((uint)fVar33 & 0x20) == 0) {
      fVar36 = *(float *)(unaff_RSI + 0x165c);
      fVar37 = fVar36 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar36 = *(float *)(unaff_RSI + 0x165c);
      fVar37 = fVar36;
    }
    lVar23 = *(int64_t *)(unaff_RBP + 10);
    if (lVar23 != 0) {
      fVar36 = fVar36 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (0.0 < *(float *)(unaff_RSI + 0x1644)) {
      fVar36 = (float)SystemFunction_00018013e9f0();
      fVar34 = unaff_RBP[-0x19];
      fVar35 = unaff_RBP[-0x1a];
      fVar32 = unaff_RBP[-0x1b];
      fVar38 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar32;
    unaff_RBP[-5] = fVar34;
    unaff_RBP[-0x1c] = fVar38 + fVar37;
    unaff_RBP[-0x1a] = fVar35 - fVar36;
    unaff_RBP[-8] = fVar38 + fVar37;
    unaff_RBP[-6] = fVar35 - fVar36;
    if (lVar23 == 0) {
      fVar32 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar32 = (float)SystemFunction_00018010e5a0(unaff_RBP + -2);
      fVar32 = fVar32 - 3.0;
    }
    unaff_RBP[-6] = (*(float *)(local_var_40 + 9) + *(float *)(local_var_40 + 8)) - fVar32
    ;
    GenericFunction_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &local_buffer_00000050);
    if (((uint)fVar33 & 0x100000) != 0) {
      uVar15 = SystemFunction_00018004ba20(unaff_RBP + -0x14,2.0 - fVar31);
      SystemFunction_00018010e590(unaff_RBP + -0x1c);
      SystemFunction_00018013e900();
      uVar20 = SystemFunction_00018004ba20(unaff_RBP + 0x18);
      SystemFunction_00018011fbf0(unaff_RBP + -0x18,uVar20,uVar15);
      SystemFunction_00018004ba20(unaff_RBP + -0xe);
      SystemFunction_00018004ba20(unaff_RBP + -0x14);
      uVar15 = SystemFunction_00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar20 = SystemFunction_00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      GenericFunction_180122890(uVar20,uVar15,&system_data_df28,0,0);
    }
  }
  *(int16_t *)((int64_t)local_var_40 + 0x26a) = 0;
  *(int16_t *)(local_var_40 + 0x4d) = 0;
  plVar19 = (int64_t *)SystemFunction_00018010e720(local_var_40,unaff_RBP + 0x20);
  lVar23 = plVar19[1];
  local_var_40[0x47] = *plVar19;
  local_var_40[0x48] = lVar23;
  if ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) != 0) {
    fVar31 = (float)SystemFunction_00018010e760();
    *(float *)((int64_t)local_var_40 + 0x23c) =
         fVar31 + *(float *)((int64_t)local_var_40 + 0x23c);
  }
  SystemFunction_00018010e690(local_var_40 + 0x47,local_var_40 + 0x45);
  *(float *)(local_var_40 + 0x49) =
       unaff_RBP[-2] + *(float *)((int64_t)local_var_40 + 0x7c);
  if (((uint)fVar33 & 0x401) == 1) {
    pfVar16 = (float *)((int64_t)local_var_40 + 0x7c);
  }
  fVar31 = *pfVar16;
  fVar32 = (float)SystemFunction_00018010e7a0();
  *(float *)((int64_t)local_var_40 + 0x24c) = fVar32 + unaff_RBP[1] + fVar31;
  *(float *)(local_var_40 + 0x4a) =
       ((*(float *)(local_var_40 + 9) + *(float *)(local_var_40 + 8)) -
       *(float *)((int64_t)local_var_40 + 0xa4)) -
       *(float *)((int64_t)local_var_40 + 0x7c);
  *(float *)((int64_t)local_var_40 + 0x254) =
       ((*(float *)((int64_t)local_var_40 + 0x4c) +
        *(float *)((int64_t)local_var_40 + 0x44)) - *(float *)(local_var_40 + 0x15)) -
       *(float *)((int64_t)local_var_40 + 0x7c);
  fVar31 = (float)SystemFunction_00018013e900();
  *(float *)(local_var_40 + 0x4b) =
       (float)(int)(fVar31 + *(float *)(local_var_40 + 0x49) + 0.5);
  *(float *)((int64_t)local_var_40 + 0x25c) =
       (float)(int)(*(float *)((int64_t)local_var_40 + 0x24c) + 0.5);
  fVar31 = *(float *)(local_var_40 + 0x4a);
  fVar32 = (float)SystemFunction_00018013e900();
  *(float *)(local_var_40 + 0x4c) = (float)(int)((fVar31 + 0.5) - fVar32);
  *(float *)((int64_t)local_var_40 + 0x264) =
       (float)(int)(*(float *)((int64_t)local_var_40 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)((int64_t)local_var_40 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(local_var_40[0x74] + 0xc) & 0x200004) == 0)))) {
      GenericFunction_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)fVar33 >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(unaff_RSI + 0x1b78) == 0 ||
         (*(int64_t **)(*(int64_t *)(unaff_RSI + 0x1b78) + 0x3a0) != local_var_40)))) &&
       ((local_var_40 == (int64_t *)local_var_40[0x74] &&
        ((*(uint *)((int64_t)local_var_40 + 0xc) & 0x20000000) == 0)))) {
      GenericFunction_18013baf0();
    }
  }
  if ((*(byte *)((int64_t)local_var_40 + 0x432) & 1) == 0) {
    *(int32_t *)((int64_t)local_var_40 + 0x144) =
         *(int32_t *)((int64_t)local_var_40 + 0x84);
    cVar7 = SystemCore_HashCalculator(unaff_RBP + -2);
    fVar31 = unaff_RBP[-0x10];
    *(uint *)(local_var_40 + 0x29) = (uint)(cVar7 != '\0');
    uVar15 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)((int64_t)local_var_40 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)((int64_t)local_var_40 + 0x154) = uVar15;
    fVar32 = local_buffer_78;
  }
  else {
    fVar31 = unaff_RBP[-0x10];
    *(int *)((int64_t)local_var_40 + 0x144) = (int)local_var_40[1];
    *(int32_t *)(local_var_40 + 0x29) = *(int32_t *)((int64_t)local_var_40 + 0x41c)
    ;
    *(int64_t *)((int64_t)local_var_40 + 0x14c) = local_var_40[0x84];
    *(int64_t *)((int64_t)local_var_40 + 0x154) = local_var_40[0x85];
    fVar32 = local_buffer_78;
  }
LAB_18012ce0f:
  if (((uint)fVar33 >> 0x1d & 1) == 0) {
    SystemCore_PerformanceMonitor(local_var_40 + 0x4b,local_var_40 + 0x4c,1);
  }
  if (fVar32 != fVar31) {
    *(int8_t *)((int64_t)local_var_40 + 0xb1) = 0;
  }
  *(short *)(local_var_40 + 0x17) = (short)local_var_40[0x17] + 1;
  GenericFunction_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)((int64_t)local_var_40 + 0x432) & 1) != 0) &&
     ((*(byte *)((int64_t)local_var_40 + 0x432) & 2) == 0)) {
    *(int32_t *)(local_var_40 + 0x1b) = 1;
  }
  if (((uint)fVar33 >> 0x18 & 1) != 0) {
    if ((((((uint)fVar33 & 0x40) == 0) && (*(int *)((int64_t)local_var_40 + 0xc4) < 1)) &&
        ((int)local_var_40[0x19] < 1)) &&
       ((*(float *)(local_var_40 + 0x48) < *(float *)(local_var_40 + 0x47) ||
         *(float *)(local_var_40 + 0x48) == *(float *)(local_var_40 + 0x47) ||
        (*(float *)((int64_t)local_var_40 + 0x244) <
         *(float *)((int64_t)local_var_40 + 0x23c) ||
         *(float *)((int64_t)local_var_40 + 0x244) ==
         *(float *)((int64_t)local_var_40 + 0x23c))))) {
      *(int32_t *)(local_var_40 + 0x1b) = 1;
    }
    if ((lVar14 != 0) && ((*(char *)(lVar14 + 0xb2) != '\0' || (*(char *)(lVar14 + 0xb6) != '\0'))))
    {
      *(int32_t *)(local_var_40 + 0x1b) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= 0.0) {
    *(int32_t *)(local_var_40 + 0x1b) = 1;
  }
  if (((int)local_var_40[0x1b] < 1) && (*(int *)((int64_t)local_var_40 + 0xdc) < 1)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  *(char *)((int64_t)local_var_40 + 0xb6) = cVar7;
  if (((((*(char *)((int64_t)local_var_40 + 0xb2) == '\0') &&
        (*(char *)((int64_t)local_var_40 + 0xaf) != '\0')) && (cVar7 == '\0')) ||
      ((0 < *(int *)((int64_t)local_var_40 + 0xc4) || (0 < (int)local_var_40[0x19])))) ||
     (0 < *(int *)((int64_t)local_var_40 + 0xdc))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  *(int8_t *)((int64_t)local_var_40 + 0xb4) = uVar21;
// WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x24) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address