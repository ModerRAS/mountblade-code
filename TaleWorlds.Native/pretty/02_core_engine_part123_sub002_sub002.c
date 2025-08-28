/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
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
// 02_core_engine_part123_sub002_sub002.c - 1 个函数
// 函数: void GenericFunction_18012a023(uint64_t param_1,int64_t param_2)
void GenericFunction_18012a023(uint64_t param_1,int64_t param_2)
{
  int16_t *puVar1;
  int *piVar2;
  byte *pbVar3;
  short sVar4;
  int8_t *puVar5;
  char cVar6;
  char cVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t *puVar11;
  uint64_t uVar12;
  float *pfVar13;
  float *pfVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int8_t uVar18;
  uint uVar19;
  int64_t lVar20;
  uint uVar21;
  int iVar22;
  float *pfVar23;
  float *unaff_RBP;
  int64_t unaff_RSI;
  byte bVar24;
  uint unaff_EDI;
  char unaff_R12B;
  float fVar25;
  int64_t lVar26;
  char unaff_R13B;
  bool bVar27;
  int32_t unaff_R14D;
  uint64_t unaff_R15;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_XMM13_Da;
  uint64_t *local_var_20;
  int64_t local_var_40;
  char cStack0000000000000048;
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
  uint64_t local_var_200;
  uint64_t local_var_208;
  if (*(char *)(param_2 + 0xb2) == '\0') {
    if (((*(char *)(param_2 + 0xb6) == '\0') || (*(int *)(param_2 + 0xdc) != 0)) ||
       (*(int *)(param_2 + 0xd8) < 1)) {
      fVar28 = *(float *)(param_2 + 0x68);
      if (fVar28 == unaff_XMM13_Da) {
        fVar28 = (*(float *)(param_2 + 0x118) - *(float *)(param_2 + 0x40)) +
                 *(float *)(param_2 + 0x8c);
      }
      fVar25 = *(float *)(param_2 + 0x6c);
      if (fVar25 == unaff_XMM13_Da) {
        fVar25 = (*(float *)(param_2 + 0x11c) - *(float *)(param_2 + 0x44)) +
                 *(float *)(param_2 + 0x90);
      }
      fVar28 = (float)(int)fVar28 + *(float *)(param_2 + 0x70);
      fVar25 = (float)(int)fVar25 + *(float *)(param_2 + 0x74);
    }
    else {
      fVar28 = *(float *)(param_2 + 0x60);
      fVar25 = *(float *)(param_2 + 100);
    }
  }
  else {
    fVar28 = *(float *)(param_2 + 0x60);
    fVar25 = *(float *)(param_2 + 100);
  }
  *(float *)(param_2 + 0x60) = fVar28;
  *(float *)(param_2 + 100) = fVar25;
  if (0 < *(int *)(local_var_40 + 0xd8)) {
    *(int *)(local_var_40 + 0xd8) = *(int *)(local_var_40 + 0xd8) + -1;
  }
  if (0 < *(int *)(local_var_40 + 0xdc)) {
    *(int *)(local_var_40 + 0xdc) = *(int *)(local_var_40 + 0xdc) + -1;
  }
  if ((cStack0000000000000049 != '\0') && ((unaff_R12B == '\0' || (unaff_R13B == '\0')))) {
    *(uint *)(local_var_40 + 0xdc) = unaff_EDI;
  }
  if (((cStack000000000000004a != '\0') && ((unaff_R15 & 0x6000000) != 0)) &&
     (*(uint *)(local_var_40 + 0xdc) = unaff_EDI, (unaff_R15 & 0x40) != 0)) {
    if (unaff_R12B == '\0') {
      *(int32_t *)(local_var_40 + 0x50) = unaff_R14D;
      *(int32_t *)(local_var_40 + 0x48) = unaff_R14D;
    }
    if (unaff_R13B == '\0') {
      *(int32_t *)(local_var_40 + 0x54) = unaff_R14D;
      *(int32_t *)(local_var_40 + 0x4c) = unaff_R14D;
    }
    *(uint64_t *)(local_var_40 + 0x60) = 0;
  }
  GenericFunction_180130a80(local_var_40);
  SystemFunction_00018012fb50(local_var_40,*(uint64_t *)(local_var_40 + 0x28));
  if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(int32_t *)(*(int64_t *)(local_var_40 + 0x28) + 0x18);
  }
  *(int32_t *)(local_var_40 + 0x2dc) = uVar9;
  SystemFunction_000180123e50(local_var_40);
  fVar28 = *(float *)(local_var_40 + 0xc);
  unaff_RBP[-10] = fVar28;
  bVar24 = (byte)unaff_EDI;
  if ((*(byte *)(local_var_40 + 0x432) & bVar24) == 0) {
    if (((uint)fVar28 >> 0x18 & 1) == 0) {
      if ((((uint)fVar28 & 0x6000000) == 0) || (((uint)fVar28 >> 0x1b & 1) != 0)) {
        uVar9 = *(int32_t *)(unaff_RSI + 0x1638);
      }
      else {
        uVar9 = *(int32_t *)(unaff_RSI + 0x1658);
      }
      *(int32_t *)(local_var_40 + 0x7c) = uVar9;
    }
    else {
      *(int32_t *)(local_var_40 + 0x7c) = *(int32_t *)(unaff_RSI + 0x1650);
    }
  }
  else {
    *(int32_t *)(local_var_40 + 0x7c) = unaff_R14D;
  }
  if ((((*(byte *)(local_var_40 + 0x432) & bVar24) == 0) &&
      (((uint)fVar28 & 0x5010000) == 0x1000000)) &&
     (unaff_XMM13_Da == *(float *)(local_var_40 + 0x7c))) {
    if (((uint)fVar28 >> 10 & 1) == 0) {
      *(int32_t *)(local_var_40 + 0x70) = unaff_R14D;
      *(float *)(local_var_40 + 0x74) = unaff_XMM13_Da;
    }
    else {
      uVar9 = *(int32_t *)(unaff_RSI + 0x1630);
      *(int32_t *)(local_var_40 + 0x70) = unaff_R14D;
      *(int32_t *)(local_var_40 + 0x74) = uVar9;
    }
  }
  else {
    *(uint64_t *)(local_var_40 + 0x70) = *(uint64_t *)(unaff_RSI + 0x162c);
  }
  fVar25 = *(float *)(local_var_40 + 0x70);
  if (*(float *)(local_var_40 + 0x70) <= *(float *)(unaff_RSI + 0x166c)) {
    fVar25 = *(float *)(unaff_RSI + 0x166c);
  }
  if (fVar25 <= *(float *)(unaff_RSI + 0x1c58)) {
    fVar25 = *(float *)(unaff_RSI + 0x1c58);
  }
  *(float *)(local_var_40 + 0x180) = fVar25;
  *(int32_t *)(local_var_40 + 0x184) = *(int32_t *)(unaff_RSI + 0x1c5c);
  if ((((uint)fVar28 & 0x21) == 0) && ((*(byte *)(local_var_40 + 0x432) & bVar24) == 0)) {
    SystemFunction_000180120c80(local_var_40,unaff_RBP + 0x20);
    if (((*(int64_t *)(unaff_RSI + 0x1b00) == local_var_40) &&
        (*(int *)(unaff_RSI + 0x1b18) == 0)) &&
       ((*(int *)(unaff_RSI + 0x1b20) == 0 &&
        ((cVar6 = SystemCore_HashCalculator(unaff_RBP + 0x20,unaff_RBP + 0x22,unaff_EDI & 0xff), cVar6 != '\0'
         && (*(char *)(unaff_RSI + 0x415) != '\0')))))) {
      *(byte *)(local_var_40 + 0xb3) = bVar24;
    }
    if (*(char *)(local_var_40 + 0xb3) != '\0') {
      *(bool *)(local_var_40 + 0xb2) = *(char *)(local_var_40 + 0xb2) == '\0';
      if (((*(uint *)(local_var_40 + 0xc) & 0x100) == 0) &&
         (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= unaff_XMM13_Da)) {
        *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
      }
      SystemCore_DataCompressor(local_var_40);
    }
  }
  else {
    *(int8_t *)(local_var_40 + 0xb2) = 0;
  }
  lVar20 = local_var_40;
  lVar16 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(local_var_40 + 0xb3) = 0;
  if ((*(uint *)(local_var_40 + 0xc) >> 0x19 & 1) == 0) {
    _fStack0000000000000070 = *(uint64_t *)(lVar16 + 0x163c);
    if ((*(uint *)(local_var_40 + 0xc) & 0x14000000) != 0) {
      _fStack0000000000000050 = 0x4080000040800000;
      puVar15 = (uint64_t *)
                SystemFunction_00018011fc20(unaff_RBP + -0x18,&local_buffer_00000070,&local_buffer_00000050);
      _fStack0000000000000070 = *puVar15;
    }
    fVar25 = *(float *)(*(int64_t *)(lVar20 + 0x28) + 0x10);
    fVar29 = *(float *)(*(int64_t *)(lVar20 + 0x28) + 0x14);
    if (*(char *)(lVar20 + 0xae) != '\0') {
      fVar25 = 3.4028235e+38;
      fVar29 = 3.4028235e+38;
    }
    iVar22 = *(int *)(lVar20 + 0x3c);
    if ((-1 < iVar22) && (iVar22 < *(int *)(lVar16 + 0x1600))) {
      fVar25 = *(float *)(*(int64_t *)(lVar16 + 0x1608) + 0x18 + (int64_t)iVar22 * 0x24);
      fVar29 = *(float *)(*(int64_t *)(lVar16 + 0x1608) + 0x1c + (int64_t)iVar22 * 0x24);
    }
    _fStack0000000000000050 =
         CONCAT44(fVar29 - (*(float *)(lVar16 + 0x16b8) + *(float *)(lVar16 + 0x16b8)),
                  fVar25 - (*(float *)(lVar16 + 0x16b4) + *(float *)(lVar16 + 0x16b4)));
    puVar15 = (uint64_t *)SystemFunction_00018011fc50(unaff_RBP + -0x18,&local_buffer_00000070,&local_buffer_00000050)
    ;
    GenericFunction_18011fc80(&local_buffer_00000060,lVar20 + 0x60,&local_buffer_00000070,*puVar15);
    SystemCore_MemoryManager(unaff_RBP + 2,lVar20,CONCAT44(fStack0000000000000064,fStack0000000000000060));
    if (((unaff_RBP[2] < *(float *)(lVar20 + 0x60)) && ((*(uint *)(lVar20 + 0xc) & 8) == 0)) &&
       ((*(uint *)(lVar20 + 0xc) >> 0xb & 1) != 0)) {
      fStack0000000000000064 = fStack0000000000000064 + *(float *)(lVar16 + 0x168c);
    }
    lVar26 = SYSTEM_DATA_MANAGER_A;
    fVar29 = fStack0000000000000060;
    fVar25 = fStack0000000000000064;
    if ((unaff_RBP[3] < *(float *)(lVar20 + 100)) && ((*(byte *)(lVar20 + 0xc) & 8) == 0)) {
      fStack0000000000000060 = fStack0000000000000060 + *(float *)(lVar16 + 0x168c);
      fVar29 = fStack0000000000000060;
    }
  }
  else {
    lVar26 = lVar16;
    fVar29 = *(float *)(local_var_40 + 0x60);
    fVar25 = *(float *)(local_var_40 + 100);
  }
  fVar30 = 3.4028235e+38;
  _fStack0000000000000050 = CONCAT44(fVar25,fVar29);
  fVar34 = 3.4028235e+38;
  if ((((uint)fVar28 & 0x40) == 0) || (*(char *)(local_var_40 + 0xb2) != '\0')) {
    if ((0 < *(int *)(local_var_40 + 0xc4)) || (0 < *(int *)(local_var_40 + 200))) {
      if ((unaff_R12B == '\0') && (0 < *(int *)(local_var_40 + 0xc4))) {
        fVar30 = fVar29;
        if ((*(char *)(local_var_40 + 0xcc) != '\0') &&
           (fVar30 = *(float *)(local_var_40 + 0x50),
           *(float *)(local_var_40 + 0x50) <= fVar29)) {
          fVar30 = fVar29;
        }
        *(float *)(local_var_40 + 0x50) = fVar30;
      }
      if ((unaff_R13B == '\0') && (0 < *(int *)(local_var_40 + 200))) {
        fVar34 = fVar25;
        if ((*(char *)(local_var_40 + 0xcc) != '\0') &&
           (fVar34 = *(float *)(local_var_40 + 0x54),
           *(float *)(local_var_40 + 0x54) <= fVar25)) {
          fVar34 = fVar25;
        }
        *(float *)(local_var_40 + 0x54) = fVar34;
      }
      if (((*(char *)(local_var_40 + 0xb2) == '\0') &&
          ((*(uint *)(local_var_40 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar26 + 0x2e04) <= unaff_XMM13_Da)) {
        *(int32_t *)(lVar26 + 0x2e04) = *(int32_t *)(lVar26 + 0x1c);
      }
    }
  }
  else {
    if (unaff_R12B == '\0') {
      *(float *)(local_var_40 + 0x50) = fVar29;
      fVar30 = fVar29;
    }
    if (unaff_R13B == '\0') {
      *(float *)(local_var_40 + 0x54) = fVar25;
      fVar34 = fVar25;
    }
  }
  puVar11 = (int32_t *)
            SystemCore_MemoryManager(unaff_RBP + -0x18,local_var_40,
                          *(uint64_t *)(local_var_40 + 0x50));
  uVar9 = puVar11[1];
  *(int32_t *)(local_var_40 + 0x50) = *puVar11;
  *(int32_t *)(local_var_40 + 0x54) = uVar9;
  if ((*(char *)(local_var_40 + 0xb2) == '\0') || (((uint)fVar28 >> 0x18 & 1) != 0)) {
    pfVar13 = unaff_RBP + -0xe;
    *(uint64_t *)(unaff_RBP + -0xe) = *(uint64_t *)(local_var_40 + 0x50);
  }
  else {
    uVar12 = SystemFunction_000180120c80(local_var_40,unaff_RBP + 0x20);
    pfVar13 = (float *)SystemFunction_00018010e570(uVar12,unaff_RBP + -0x18);
  }
  cVar6 = cStack0000000000000048;
  *(uint64_t *)(local_var_40 + 0x48) = *(uint64_t *)pfVar13;
  if (*(char *)(local_var_40 + 0xb2) == '\0') {
    if (fVar30 == 3.4028235e+38) {
      fVar25 = *(float *)(local_var_40 + 0x58);
    }
    else {
      fVar25 = *(float *)(local_var_40 + 0x50);
    }
    if (fVar34 == 3.4028235e+38) {
      fVar29 = *(float *)(local_var_40 + 0x5c);
    }
    else {
      fVar29 = *(float *)(local_var_40 + 0x54);
    }
    if ((((uint)fVar28 >> 0xe & 1) != 0) ||
       ((fVar29 < *(float *)(local_var_40 + 100) && (((uint)fVar28 & 8) == 0)))) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *(char *)(local_var_40 + 0xad) = cVar7;
    if (((uint)fVar28 >> 0xf & 1) == 0) {
      fVar30 = unaff_XMM13_Da;
      if (cVar7 != '\0') {
        fVar30 = *(float *)(unaff_RSI + 0x168c);
      }
      if ((fVar25 - fVar30 < *(float *)(local_var_40 + 0x60)) &&
         (((uint)fVar28 & 0x808) == 0x800)) goto LAB_18012a70f;
      cVar7 = '\0';
    }
    else {
LAB_18012a70f:
      cVar7 = '\x01';
    }
    *(char *)(local_var_40 + 0xac) = cVar7;
    if ((cVar7 != '\0') && (*(char *)(local_var_40 + 0xad) == '\0')) {
      if ((*(float *)(local_var_40 + 100) <= fVar29 - *(float *)(unaff_RSI + 0x168c)) ||
         (((uint)fVar28 & 8) != 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      *(int8_t *)(local_var_40 + 0xad) = uVar18;
    }
    fVar25 = unaff_XMM13_Da;
    if (*(char *)(local_var_40 + 0xac) != '\0') {
      fVar25 = *(float *)(unaff_RSI + 0x168c);
    }
    fVar29 = unaff_XMM13_Da;
    if (*(char *)(local_var_40 + 0xad) != '\0') {
      fVar29 = *(float *)(unaff_RSI + 0x168c);
    }
    *(float *)(local_var_40 + 0xa4) = fVar29;
    *(float *)(local_var_40 + 0xa8) = fVar25;
  }
  unaff_RBP[0xc] = -NAN;
  if (((cStack000000000000004a != '\0') &&
      (*(int32_t *)(local_var_40 + 0xd4) = 0xffffffff, ((uint)fVar28 >> 0x1a & 1) != 0)) &&
     (cStack0000000000000048 == '\0')) {
    uVar9 = *(int32_t *)
             (*(int64_t *)(unaff_RSI + 0x1bc8) + -0xc +
             (int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30);
    *(int32_t *)(local_var_40 + 0x40) =
         *(int32_t *)
          (*(int64_t *)(unaff_RSI + 0x1bc8) + -0x10 + (int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30
          );
    *(int32_t *)(local_var_40 + 0x44) = uVar9;
  }
  fVar25 = (float)((uint)fVar28 & 0x1000000);
  unaff_RBP[0x16] = fVar25;
  if (fVar25 == 0.0) {
    fVar29 = unaff_RBP[-4];
  }
  else {
    lVar16 = *(int64_t *)(unaff_RBP + 8);
    puVar1 = (int16_t *)(lVar16 + 0x188);
    *(int16_t *)(local_var_40 + 0xba) = *puVar1;
    SystemCore_InterruptHandler(puVar1,&local_buffer_00000040);
    fVar29 = unaff_RBP[-4];
    if (((((uint)fVar28 >> 0x1a & 1) == 0) && (cVar6 == '\0')) && (fVar29 != 3.761582e-37)) {
      *(uint64_t *)(local_var_40 + 0x40) = *(uint64_t *)(lVar16 + 0x100);
    }
  }
  if ((*(float *)(local_var_40 + 0xf0) == 3.4028235e+38) ||
     (*(int *)(local_var_40 + 0xdc) != 0)) {
    if (((uint)fVar28 >> 0x1c & 1) == 0) {
      if ((((((uint)fVar28 >> 0x1a & 1) != 0) && (cStack0000000000000048 == '\0')) &&
          (0 < (int)local_buffer_68)) ||
         (((cVar6 = cStack0000000000000048, ((uint)fVar28 >> 0x19 & 1) != 0 &&
           (cStack0000000000000048 == '\0')) && (fVar29 != 3.761582e-37)))) {
        puVar11 = (int32_t *)GenericFunction_18012f6d0(unaff_RBP + -0x18,local_var_40);
        uVar9 = puVar11[1];
        *(int32_t *)(local_var_40 + 0x40) = *puVar11;
        *(int32_t *)(local_var_40 + 0x44) = uVar9;
        cVar6 = cStack0000000000000048;
      }
    }
    else {
      puVar11 = (int32_t *)GenericFunction_18012f6d0(unaff_RBP + -0x18,local_var_40);
      uVar9 = puVar11[1];
      *(int32_t *)(local_var_40 + 0x40) = *puVar11;
      *(int32_t *)(local_var_40 + 0x44) = uVar9;
    }
  }
  else {
    fVar30 = *(float *)(local_var_40 + 0xf0) -
             *(float *)(local_var_40 + 0xf8) * *(float *)(local_var_40 + 0x50);
    fVar29 = *(float *)(local_var_40 + 0xf4) -
             *(float *)(local_var_40 + 0x54) * *(float *)(local_var_40 + 0xfc);
    if (fVar30 <= *(float *)(unaff_RSI + 0x16b4)) {
      fVar30 = *(float *)(unaff_RSI + 0x16b4);
    }
    if (fVar29 <= *(float *)(unaff_RSI + 0x16b8)) {
      fVar29 = *(float *)(unaff_RSI + 0x16b8);
    }
    _fStack0000000000000070 = CONCAT44(fVar29,fVar30);
    SystemFunction_00018012ddc0(local_var_40,&local_buffer_00000070,0);
  }
  if (*(int *)(local_var_40 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)(local_var_40 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)(local_var_40 + 0xae) == '\0') {
      if (*(char *)(*(int64_t *)(local_var_40 + 0x28) + 0x77) == '\0') {
        pfVar13 = (float *)SystemFunction_00018011feb0(*(int64_t *)(local_var_40 + 0x28),
                                               unaff_RBP + 0x20);
        pfVar14 = (float *)SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x20);
        if (((*pfVar14 <= *pfVar13 && *pfVar13 != *pfVar14) ||
            (pfVar14[1] <= pfVar13[1] && pfVar13[1] != pfVar14[1])) ||
           ((pfVar13[2] < pfVar14[2] || (pfVar13[3] < pfVar14[3])))) {
          local_var_20 = (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),4);
          uVar12 = GenericFunction_180130830(local_var_40,*(int32_t *)(local_var_40 + 8),
                                 local_var_40 + 0x40,local_var_40 + 0x48,local_var_20
                                );
          *(uint64_t *)(local_var_40 + 0x28) = uVar12;
          SystemFunction_00018012fb50(local_var_40,uVar12);
          if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
            uVar9 = 0x3f800000;
          }
          else {
            uVar9 = *(int32_t *)(*(int64_t *)(local_var_40 + 0x28) + 0x18);
          }
          *(int32_t *)(local_var_40 + 0x2dc) = uVar9;
          SystemFunction_000180123e50(local_var_40);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(*(int64_t *)(local_var_40 + 0x28) + 0x49) != '\0') {
      *(uint64_t *)(local_var_40 + 0x40) =
           *(uint64_t *)(*(int64_t *)(local_var_40 + 0x28) + 8);
    }
    if (*(char *)(*(int64_t *)(local_var_40 + 0x28) + 0x4a) != '\0') {
      uVar12 = *(uint64_t *)(*(int64_t *)(local_var_40 + 0x28) + 0x10);
      *(uint64_t *)(local_var_40 + 0x50) = uVar12;
      *(uint64_t *)(local_var_40 + 0x48) = uVar12;
    }
    uVar19 = *(uint *)(*(int64_t *)(local_var_40 + 0x28) + 4) & 0xffffffdc;
    uVar21 = uVar19 | 0x20;
    if (((uint)fVar28 & 0x2000000) == 0) {
      uVar21 = uVar19;
    }
    if ((*(char *)(unaff_RSI + 0xc5) != '\0') || (((uint)fVar28 & 0x16000000) != 0)) {
      uVar21 = uVar21 | 2;
    }
    if ((*(char *)(unaff_RSI + 0xc6) != '\0') || (((uint)fVar28 & 0x16000000) != 0)) {
      uVar21 = uVar21 | 1;
    }
    iVar22 = *(int *)(local_var_40 + 0x18);
    if ((iVar22 == 0) && (iVar22 = 0x11111111, *(char *)(unaff_RSI + 199) != '\0')) {
      iVar22 = 0;
    }
    *(int *)(*(int64_t *)(local_var_40 + 0x28) + 0x28) = iVar22;
    uVar19 = *(uint *)(local_var_40 + 0x1c);
    if (uVar19 != 0) {
      uVar21 = uVar21 & ~uVar19 | *(uint *)(local_var_40 + 0x20) & uVar19;
    }
    *(uint *)(*(int64_t *)(local_var_40 + 0x28) + 4) = uVar21 | 0x10;
  }
  SystemFunction_00018011feb0(*(uint64_t *)(local_var_40 + 0x28),unaff_RBP + 4);
  if ((((cVar6 == '\0') && (fVar25 == 0.0)) && (*(int *)(local_var_40 + 0xc4) < 1)) &&
     (*(int *)(local_var_40 + 200) < 1)) {
    SystemFunction_00018011fc50(&local_buffer_00000060,unaff_RSI + 0x16ac,unaff_RSI + 0x16b4);
    if (*(char *)(local_var_40 + 0xae) == '\0') {
      if ((unaff_XMM13_Da < unaff_RBP[6] - unaff_RBP[4]) &&
         (unaff_XMM13_Da < unaff_RBP[7] - unaff_RBP[5])) {
        pfVar13 = unaff_RBP + 4;
LAB_18012ac57:
        SystemFunction_000180129830(local_var_40,pfVar13,&local_buffer_00000060);
      }
    }
    else if (0 < *(int *)(unaff_RSI + 0x1600)) {
      sVar4 = *(short *)(*(int64_t *)(local_var_40 + 0x28) + 0x74);
      if (sVar4 != -1) {
        lVar20 = (int64_t)sVar4;
        pfVar13 = unaff_RBP + -8;
        lVar16 = *(int64_t *)(unaff_RSI + 0x1608);
        fVar29 = *(float *)(lVar16 + 0x10 + lVar20 * 0x24);
        fVar30 = *(float *)(lVar16 + 0x14 + lVar20 * 0x24);
        fVar34 = *(float *)(lVar16 + 0x18 + lVar20 * 0x24);
        unaff_RBP[-8] = fVar29;
        fVar31 = *(float *)(lVar16 + 0x1c + lVar20 * 0x24);
        unaff_RBP[-7] = fVar30;
        unaff_RBP[-6] = fVar29 + fVar34;
        unaff_RBP[-5] = fVar30 + fVar31;
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
  *(float *)(local_var_40 + 0x40) = (float)(int)*(float *)(local_var_40 + 0x40);
  *(float *)(local_var_40 + 0x44) = (float)(int)*(float *)(local_var_40 + 0x44);
  if (fVar25 == 0.0) {
    if (((uint)fVar28 & 0xc000000) == 0x4000000) {
      uVar9 = *(int32_t *)(unaff_RSI + 0x1654);
    }
    else {
      uVar9 = *(int32_t *)(unaff_RSI + 0x1634);
    }
  }
  else {
    uVar9 = *(int32_t *)(unaff_RSI + 0x164c);
  }
  uVar21 = 0;
  *(int32_t *)(local_var_40 + 0x78) = uVar9;
  if (*(char *)(local_var_40 + 0xae) != '\0') {
    *(int32_t *)(local_var_40 + 0x78) = 0;
  }
  if ((*(int *)(local_var_40 + 0x400) == 0x7fffffff) ||
     (iVar22 = *(int *)(local_var_40 + 0x3f0), iVar22 == -1)) {
    iVar22 = 0x7fffffff;
  }
  else {
    iVar22 = (*(int *)(local_var_40 + 0x400) + 1 + iVar22) % (iVar22 + 1);
  }
  *(int *)(local_var_40 + 0x3f8) = iVar22;
  if ((*(int *)(local_var_40 + 0x404) == 0x7fffffff) ||
     (iVar22 = *(int *)(local_var_40 + 0x3f4), iVar22 == -1)) {
    iVar22 = 0x7fffffff;
  }
  else {
    iVar22 = (*(int *)(local_var_40 + 0x404) + 1 + iVar22) % (iVar22 + 1);
  }
  *(int *)(local_var_40 + 0x3fc) = iVar22;
  pfVar13 = unaff_RBP + -0x18;
  *(int32_t *)(local_var_40 + 0x3f4) = 0xffffffff;
  *(int32_t *)(local_var_40 + 0x3f0) = 0xffffffff;
  *(int32_t *)(local_var_40 + 0x404) = 0x7fffffff;
  *(int32_t *)(local_var_40 + 0x400) = 0x7fffffff;
  puVar11 = (int32_t *)GenericFunction_1801293e0(pfVar13,local_var_40,1);
  lVar16 = local_var_40;
  local_buffer_68 = (uint)pfVar13 & 0xffffff00;
  uVar9 = puVar11[1];
  *(int32_t *)(local_var_40 + 0x8c) = *puVar11;
  *(int32_t *)(local_var_40 + 0x90) = uVar9;
  *(int32_t *)(local_var_40 + 0x94) = 0x7f7fffff;
  *(int32_t *)(local_var_40 + 0x98) = 0x7f7fffff;
  if ((cStack000000000000004a != '\0') && (((uint)fVar28 >> 0xc & 1) == 0)) {
    if (((uint)fVar28 >> 0x1a & 1) == 0) {
      if (((*(byte *)(local_var_40 + 0x432) & 1) != 0) || (fVar25 == 0.0)) {
        local_buffer_68 = (uint)(((uint)fVar28 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar19 = local_buffer_68 >> 8;
      local_buffer_68 = CONCAT31((int3)uVar19,1);
    }
  }
  fVar25 = *(float *)(unaff_RSI + 0x19f8);
  fVar29 = *(float *)(local_var_40 + 0x78);
  cVar6 = *(char *)(unaff_RSI + 0xcb);
  unaff_RBP[0x20] = 0.0;
  unaff_RBP[0x21] = 0.0;
  unaff_RBP[0x22] = 0.0;
  unaff_RBP[0x23] = 0.0;
  fVar30 = fVar25 * 1.35;
  fVar25 = fVar25 * 0.2 + fVar29 + 1.0;
  if (fVar25 <= fVar30) {
    fVar25 = fVar30;
  }
  cVar7 = *(char *)(local_var_40 + 0xb2);
  fVar25 = (float)(int)fVar25;
  *(uint64_t *)(unaff_RBP + -0xe) = (uint64_t)(cVar6 != '\0') + 1;
  lVar20 = SYSTEM_DATA_MANAGER_A;
  if ((((cVar7 != '\0') || ((*(byte *)(local_var_40 + 0xc) & 0x42) != 0)) ||
      (0 < *(int *)(local_var_40 + 0xc4))) ||
     ((0 < *(int *)(local_var_40 + 200) || (*(char *)(local_var_40 + 0xb0) == '\0'))))
  goto LAB_18012b510;
  cVar6 = *(char *)(SYSTEM_DATA_MANAGER_A + 0xcb);
  fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 1.35;
  fVar28 = fVar29 + 1.0 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 0.2;
  unaff_RBP[2] = (float)(-(uint)(cVar6 != '\0') & 4);
  if (fVar28 <= fVar30) {
    fVar28 = fVar30;
  }
  fVar29 = (float)(int)((float)(int)fVar28 * 0.75);
  fVar28 = unaff_XMM13_Da;
  if (cVar6 != '\0') {
    fVar28 = 4.0;
  }
  _fStack0000000000000070 = 0x7f7fffff7f7fffff;
  fStack0000000000000060 = 3.4028235e+38;
  fStack0000000000000064 = 3.4028235e+38;
  GenericFunction_18012e1b0(&rendering_buffer_2464_ptr);
  uVar12 = _fStack0000000000000050;
  pfVar13 = (float *)0x180bf66e8;
  lVar26 = 0;
  do {
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    _fStack0000000000000050 =
         CONCAT44(*(float *)(lVar16 + 0x4c) + *(float *)(lVar16 + 0x44),
                  *(float *)(lVar16 + 0x40) + *(float *)(lVar16 + 0x48));
    SystemFunction_00018011fcd0(unaff_RBP + 0xe,lVar16 + 0x40,&local_buffer_00000050,pfVar13 + -2);
    fVar31 = fVar29 * *pfVar13 + unaff_RBP[0xe];
    fVar30 = pfVar13[1];
    fVar34 = fVar29 * pfVar13[1] + unaff_RBP[0xf];
    fVar32 = unaff_RBP[0xe] - fVar28 * *pfVar13;
    unaff_RBP[-0x1a] = fVar31;
    fVar30 = unaff_RBP[0xf] - fVar28 * fVar30;
    unaff_RBP[-0x19] = fVar34;
    unaff_RBP[-0x1c] = fVar32;
    unaff_RBP[-0x1b] = fVar30;
    if (fVar31 < fVar32) {
      unaff_RBP[-0x1c] = fVar31;
      unaff_RBP[-0x1a] = fVar32;
    }
    if (fVar34 < fVar30) {
      unaff_RBP[-0x1b] = fVar34;
      unaff_RBP[-0x19] = fVar30;
    }
    uVar8 = SystemFunction_000180123c50(lVar16,(int64_t)(int)uVar21);
    local_var_20 = (uint64_t *)CONCAT44(uVar9,0x2020);
    SystemCore_Formatter(unaff_RBP + -0x1c,uVar8,&local_buffer_00000048,(int64_t)&local_buffer_00000048 + 1,
                  local_var_20);
    if (((cStack0000000000000048 == '\0') && (cStack0000000000000049 == '\0')) ||
       (*(uint *)(lVar20 + 0x1dcc) = (~uVar21 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
      if (uVar21 == 0) goto LAB_18012b0c8;
      if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
      if (cStack0000000000000048 != '\0') goto LAB_18012b1a3;
    }
    else {
      if ((*(char *)(lVar20 + 0x415) == '\0') || (uVar21 != 0)) {
        fVar30 = *pfVar13;
        fVar34 = pfVar13[1];
        unaff_RBP[0x10] = fVar30 * -fVar29;
        unaff_RBP[0x11] = fVar34 * -fVar29;
        unaff_RBP[0x12] = fVar28 * fVar30;
        unaff_RBP[0x13] = fVar28 * fVar34;
        pfVar14 = (float *)SystemFunction_00018011fcd0(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                               pfVar13 + -2);
        fVar30 = *(float *)(lVar20 + 0x118);
        fVar34 = *(float *)(lVar20 + 0x1b48);
        fVar31 = *pfVar14;
        local_var_20 = (uint64_t *)&local_buffer_00000060;
        unaff_RBP[0x15] = (*(float *)(lVar20 + 0x11c) - *(float *)(lVar20 + 0x1b4c)) + pfVar14[1];
        unaff_RBP[0x14] = (fVar30 - fVar34) + fVar31;
        GenericFunction_1801295b0(lVar16,unaff_RBP + 0x14,pfVar13 + -2,&local_buffer_00000070,local_var_20);
        goto LAB_18012b18f;
      }
      pfVar14 = (float *)SystemCore_MemoryManager(unaff_RBP + -0x14,lVar16,uVar12);
      fStack0000000000000060 = *pfVar14;
      fStack0000000000000064 = pfVar14[1];
      SystemFunction_000180123e90(0,0);
LAB_18012b0c8:
      if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
        cVar6 = (cStack0000000000000048 != '\0') + '\x1e';
      }
      else {
LAB_18012b0d0:
        cVar6 = ' ';
      }
      fVar30 = (float)GenericFunction_180121ed0(cVar6);
      unaff_RBP[lVar26 + 0x20] = fVar30;
    }
    uVar21 = uVar21 + 1;
    lVar26 = lVar26 + 1;
    pfVar13 = pfVar13 + 6;
  } while (lVar26 < *(int64_t *)(unaff_RBP + -0xe));
  fVar30 = unaff_RBP[2];
  fVar28 = unaff_RBP[-10];
  fVar34 = 0.0;
  if (fVar30 != 0.0) {
    do {
      uVar12 = CONCAT44((int)((uint64_t)local_var_20 >> 0x20),0x40800000);
      GenericFunction_1801296e0(unaff_RBP + -0x20,lVar16,fVar34,fVar29,uVar12);
      uVar8 = (int32_t)((uint64_t)uVar12 >> 0x20);
      uVar9 = SystemFunction_000180123c50(lVar16,(int64_t)((int)fVar34 + 4));
      local_var_20 = (uint64_t *)CONCAT44(uVar8,0x20);
      SystemCore_Formatter(unaff_RBP + -0x20,uVar9,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058,
                    local_var_20);
      if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar20 + 0x1b24))) ||
          (cStack0000000000000058 != '\0')) &&
         (*(uint *)(lVar20 + 0x1dcc) = ((uint)fVar34 & 1) + 3, cStack0000000000000058 != '\0')) {
        *(uint64_t *)(unaff_RBP + -10) = *(uint64_t *)(lVar16 + 0x40);
        unaff_RBP[0xc] = fVar34;
        _fStack0000000000000050 = 0;
        if (fVar34 == 0.0) {
LAB_18012b293:
          unaff_RBP[-9] = (*(float *)(lVar20 + 0x11c) - *(float *)(lVar20 + 0x1b4c)) + 4.0;
        }
        else if (fVar34 == 1.4013e-45) {
          _fStack0000000000000050 = 0x3f800000;
LAB_18012b2d2:
          unaff_RBP[-10] = (*(float *)(lVar20 + 0x118) - *(float *)(lVar20 + 0x1b48)) + 4.0;
        }
        else {
          if (fVar34 == 2.8026e-45) {
            _fStack0000000000000050 = 0x3f80000000000000;
            goto LAB_18012b293;
          }
          if (fVar34 == 4.2039e-45) goto LAB_18012b2d2;
        }
        local_var_20 = (uint64_t *)&local_buffer_00000060;
        GenericFunction_1801295b0(lVar16,unaff_RBP + -10,&local_buffer_00000050,&local_buffer_00000070,local_var_20);
      }
      fVar34 = (float)((int)fVar34 + 1);
    } while ((int)fVar34 < (int)fVar30);
  }
  piVar2 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
  *piVar2 = *piVar2 + -1;
  if ((*(int64_t *)(lVar20 + 0x1cd8) != 0) &&
     (*(int64_t *)(*(int64_t *)(lVar20 + 0x1cd8) + 0x3a0) == lVar16)) {
    iVar22 = *(int *)(lVar20 + 0x1cc0);
    fVar29 = unaff_XMM13_Da;
    fVar30 = unaff_XMM13_Da;
    if (iVar22 == 3) {
      if (*(char *)(lVar20 + 0x135) == '\0') goto LAB_18012b465;
      local_var_20 =
           (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),unaff_XMM13_Da);
      pfVar13 = (float *)SystemCore_ConfigLoader(unaff_RBP + -0x14,1,0);
      fVar29 = *pfVar13;
      fVar30 = pfVar13[1];
      iVar22 = *(int *)(lVar20 + 0x1cc0);
    }
    if (iVar22 == 4) {
      local_var_20 =
           (uint64_t *)CONCAT44((int)((uint64_t)local_var_20 >> 0x20),unaff_XMM13_Da);
      pfVar13 = (float *)SystemCore_ConfigLoader(unaff_RBP + 0x18,2,0);
      fVar29 = *pfVar13;
      fVar30 = pfVar13[1];
    }
    if ((fVar29 != unaff_XMM13_Da) || (fVar30 != unaff_XMM13_Da)) {
      fVar34 = *(float *)(lVar20 + 0xbc);
      if (*(float *)(lVar20 + 0xb8) <= *(float *)(lVar20 + 0xbc)) {
        fVar34 = *(float *)(lVar20 + 0xb8);
      }
      *(int8_t *)(lVar20 + 0x1cf8) = 0;
      *(int8_t *)(lVar20 + 0x1d07) = 1;
      fVar31 = (float)(int)(fVar34 * *(float *)(lVar20 + 0x18) * 600.0);
      fVar34 = (float)GenericFunction_180121ed0(0x20);
      unaff_RBP[0x20] = fVar34;
      pfVar13 = (float *)SystemCore_MemoryManager(unaff_RBP + -0x18,lVar16,
                                       CONCAT44(fVar30 * fVar31 + *(float *)(lVar16 + 0x54),
                                                fVar29 * fVar31 + *(float *)(lVar16 + 0x50)));
      fStack0000000000000060 = *pfVar13;
      fStack0000000000000064 = pfVar13[1];
    }
  }
LAB_18012b465:
  lVar20 = SYSTEM_DATA_MANAGER_A;
  if ((fStack0000000000000060 != 3.4028235e+38) &&
     ((fStack0000000000000060 != *(float *)(lVar16 + 0x50) ||
      (fStack0000000000000064 != *(float *)(lVar16 + 0x54))))) {
    *(float *)(lVar16 + 0x50) = fStack0000000000000060;
    *(float *)(lVar16 + 0x54) = fStack0000000000000064;
    if (((*(uint *)(lVar16 + 0xc) & 0x100) == 0) && (*(float *)(lVar20 + 0x2e04) <= unaff_XMM13_Da))
    {
      *(int32_t *)(lVar20 + 0x2e04) = *(int32_t *)(lVar20 + 0x1c);
    }
  }
  lVar20 = SYSTEM_DATA_MANAGER_A;
  if (fStack0000000000000070 != 3.4028235e+38) {
    *(float *)(lVar16 + 0x40) = (float)(int)fStack0000000000000070;
    *(float *)(lVar16 + 0x44) = (float)(int)fStack0000000000000074;
    if (((*(uint *)(lVar16 + 0xc) & 0x100) == 0) && (*(float *)(lVar20 + 0x2e04) <= unaff_XMM13_Da))
    {
      *(int32_t *)(lVar20 + 0x2e04) = *(int32_t *)(lVar20 + 0x1c);
    }
  }
  *(uint64_t *)(lVar16 + 0x48) = *(uint64_t *)(lVar16 + 0x50);
LAB_18012b510:
  pfVar13 = (float *)0x180bf66e8;
  if (*(char *)(local_var_40 + 0xae) != '\0') {
    if (*(char *)(*(int64_t *)(local_var_40 + 0x28) + 0x49) == '\0') {
      *(uint64_t *)(*(int64_t *)(local_var_40 + 0x28) + 8) =
           *(uint64_t *)(local_var_40 + 0x40);
    }
    if (*(char *)(*(int64_t *)(local_var_40 + 0x28) + 0x4a) == '\0') {
      *(uint64_t *)(*(int64_t *)(local_var_40 + 0x28) + 0x10) =
           *(uint64_t *)(local_var_40 + 0x48);
    }
    puVar15 = (uint64_t *)SystemFunction_00018011feb0(*(uint64_t *)(local_var_40 + 0x28));
    uVar12 = puVar15[1];
    *(uint64_t *)(unaff_RBP + 4) = *puVar15;
    *(uint64_t *)(unaff_RBP + 6) = uVar12;
  }
  *(uint64_t *)(local_var_40 + 0x34) =
       *(uint64_t *)(*(int64_t *)(local_var_40 + 0x28) + 8);
  if ((*(float *)(local_var_40 + 0x48) <= unaff_XMM13_Da) || (((uint)fVar28 & 0x2000040) != 0))
  {
    fVar29 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar29 = *(float *)(local_var_40 + 0x48) * 0.65;
  }
  *(float *)(local_var_40 + 0x284) = (float)(int)fVar29;
  DataStructure_91500(*(uint64_t *)(local_var_40 + 0x2e8));
  *(uint *)(*(int64_t *)(local_var_40 + 0x2e8) + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)(*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar16 = *(int64_t *)(local_var_40 + 0x2e8);
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  SystemCore_InterruptHandler(lVar16 + 0x70,unaff_RBP + -0x14);
  SystemCore_Initialize(lVar16);
  if ((((uint)fVar28 & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar14 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x228);
    pfVar23 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar14 = unaff_RBP + 4;
    pfVar23 = unaff_RBP + 6;
  }
  SystemCore_PerformanceMonitor(pfVar14,pfVar23);
  if (((((uint)fVar28 >> 0x1b & 1) == 0) ||
      (lVar16 = SystemFunction_00018012ea90(), local_var_40 != lVar16)) ||
     (0 < *(int *)(local_var_40 + 0xdc))) {
    bVar24 = 0;
  }
  else {
    bVar24 = 1;
  }
  uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  lVar16 = *(int64_t *)(unaff_RSI + 0x1ce0);
  if ((lVar16 == 0) ||
     ((local_var_40 != *(int64_t *)(lVar16 + 0x3a0) &&
      (((lVar20 = *(int64_t *)(unaff_RSI + 0x1ce8), lVar20 == 0 || (local_var_40 != lVar20))
       || (*(int64_t *)(lVar20 + 0x28) == *(int64_t *)(lVar16 + 0x28))))))) {
    bVar27 = false;
  }
  else {
    bVar27 = true;
  }
  if ((bVar24 != 0) || (bVar27)) {
    fVar29 = *(float *)(unaff_RSI + 0x1dc8);
    fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    pfVar14 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar24 + 0x3a) * 0x10);
    fVar34 = pfVar14[1];
    fVar31 = pfVar14[2];
    fVar32 = pfVar14[3];
    unaff_RBP[-0x20] = *pfVar14;
    unaff_RBP[-0x1f] = fVar34;
    unaff_RBP[-0x1e] = fVar31;
    unaff_RBP[-0x1d] = fVar32;
    unaff_RBP[-0x1d] = fVar32 * fVar29 * fVar30;
    uVar8 = SystemFunction_000180121e20(unaff_RBP + -0x20);
    local_var_20 = (uint64_t *)CONCAT44(uVar9,unaff_XMM13_Da);
    MathInterpolationCalculator0(*(uint64_t *)(local_var_40 + 0x2e8),unaff_RBP + 4,unaff_RBP + 6,uVar8,
                  local_var_20);
    if ((bVar27) && (local_var_40 == *(int64_t *)(unaff_RSI + 0x1ce0))) {
      SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x18);
      SystemFunction_00018010e610(unaff_RBP + -0x18);
      uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar29 = *(float *)(unaff_RSI + 0x1cf4);
        uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
        uVar8 = *(int32_t *)(unaff_RSI + 0x1634);
        fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
        fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
        fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
        fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
        unaff_RBP[-0x1f] = fVar34;
        unaff_RBP[-0x1e] = fVar31;
        unaff_RBP[-0x1d] = fVar32;
        unaff_RBP[-0x1d] = fVar32 * fVar29 * 0.25 * fVar30;
        uVar10 = SystemFunction_000180121e20(unaff_RBP + -0x20);
        local_var_20 = (uint64_t *)CONCAT44(uVar9,uVar8);
        MathInterpolationCalculator0(uVar12,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar10,local_var_20);
      }
    }
  }
  uVar21 = local_buffer_68;
  lVar16 = *(int64_t *)(unaff_RSI + 0x1cd8);
  fVar29 = *(float *)(local_var_40 + 0x78);
  fVar30 = *(float *)(local_var_40 + 0x7c);
  if (lVar16 == 0) {
    lVar16 = *(int64_t *)(unaff_RSI + 0x1c98);
  }
  if (((char)local_buffer_68 == '\0') &&
     ((lVar16 == 0 ||
      ((*(int64_t *)(local_var_40 + 0x3b0) != *(int64_t *)(lVar16 + 0x3b0) &&
       ((*(int64_t *)(local_var_40 + 0x408) == 0 ||
        (*(int64_t *)(local_var_40 + 0x408) != *(int64_t *)(lVar16 + 0x408))))))))) {
    bVar24 = 0;
  }
  else {
    bVar24 = 1;
  }
  SystemFunction_000180120c80(local_var_40,unaff_RBP + -2);
  lVar16 = local_var_40;
  uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
  if (*(char *)(local_var_40 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)fVar28 & 0x80);
    if ((float)((uint)fVar28 & 0x80) == 0.0) {
      bVar27 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar22 = strcmp(&rendering_buffer_2304_ptr,unaff_RSI + 0x1df8), iVar22 == 0)) &&
           (bVar27 = false, **(int64_t **)(unaff_RSI + 0x1de0) == lVar16)))))) {
        bVar27 = true;
      }
      lVar16 = SYSTEM_DATA_MANAGER_A;
      if (((uint)fVar28 & 0x6000000) == 0) {
        lVar20 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar20 = 0xd0;
        }
      }
      else {
        lVar20 = 0xe0;
      }
      pfVar14 = (float *)(lVar20 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fVar34 = pfVar14[1];
      fVar31 = pfVar14[2];
      fVar32 = pfVar14[3];
      unaff_RBP[-0x20] = *pfVar14;
      unaff_RBP[-0x1f] = fVar34;
      unaff_RBP[-0x1e] = fVar31;
      unaff_RBP[-0x1d] = fVar32;
      unaff_RBP[-0x1d] = fVar32 * *(float *)(lVar16 + 0x1628);
      uVar21 = SystemFunction_000180121e20(unaff_RBP + -0x20);
      if (*(char *)(local_var_40 + 0xae) == '\0') {
        fVar34 = 1.0;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar34 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar27) {
          fVar34 = fVar34 * 0.5;
        }
        if (fVar34 != 1.0) {
          fVar31 = unaff_XMM13_Da;
          if ((unaff_XMM13_Da <= fVar34) && (fVar31 = fVar34, 1.0 <= fVar34)) {
            fVar31 = 1.0;
          }
          uVar21 = (int)(fVar31 * 255.0 + 0.5) << 0x18 | uVar21 & 0xffffff;
        }
      }
      else {
        uVar21 = uVar21 | 0xff000000;
        if (bVar27) {
          *(float *)(*(int64_t *)(local_var_40 + 0x28) + 0x6c) =
               *(float *)(*(int64_t *)(local_var_40 + 0x28) + 0x6c) * 0.5;
        }
      }
      fVar34 = *(float *)(local_var_40 + 0x48);
      fVar31 = *(float *)(local_var_40 + 0x40);
      uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
      unaff_RBP[0x15] = *(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44);
      unaff_RBP[0x14] = fVar34 + fVar31;
      fVar31 = (float)SystemFunction_00018010e760(local_var_40);
      fVar34 = *(float *)(local_var_40 + 0x44);
      unaff_RBP[0x12] = *(float *)(local_var_40 + 0x40);
      local_var_20 = (uint64_t *)CONCAT44(uVar9,fVar29);
      unaff_RBP[0x13] = fVar31 + fVar34;
      MathInterpolationCalculator0(uVar12,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar21,local_var_20);
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    bVar27 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar16 = SYSTEM_DATA_MANAGER_A;
    if ((((uint)fVar28 & 1) == 0) && ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
      pfVar14 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar24 + 0x14) * 0x10);
      fVar34 = pfVar14[1];
      fVar31 = pfVar14[2];
      fVar32 = pfVar14[3];
      unaff_RBP[-0x20] = *pfVar14;
      unaff_RBP[-0x1f] = fVar34;
      unaff_RBP[-0x1e] = fVar31;
      unaff_RBP[-0x1d] = fVar32;
      unaff_RBP[-0x1d] = fVar32 * *(float *)(lVar16 + 0x1628);
      SystemFunction_000180121e20(unaff_RBP + -0x20);
      local_var_20 = (uint64_t *)CONCAT44(uVar9,fVar29);
      MathInterpolationCalculator0(*(uint64_t *)(local_var_40 + 0x2e8),unaff_RBP + -2);
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if (((uint)fVar28 >> 10 & 1) != 0) {
      SystemFunction_00018010e7f0(local_var_40,unaff_RBP + -8);
      uVar12 = SystemFunction_00018010e720(local_var_40,unaff_RBP + -0x18);
      SystemFunction_00018010e690(unaff_RBP + -8,uVar12);
      lVar16 = SYSTEM_DATA_MANAGER_A;
      uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar34 = unaff_XMM13_Da;
      if (((uint)fVar28 & 1) != 0) {
        fVar34 = fVar29;
      }
      fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      unaff_RBP[-0x1f] = fVar31;
      unaff_RBP[-0x1e] = fVar32;
      unaff_RBP[-0x1d] = fVar33;
      unaff_RBP[-0x1d] = fVar33 * *(float *)(lVar16 + 0x1628);
      uVar8 = SystemFunction_000180121e20(unaff_RBP + -0x20);
      local_var_20 = (uint64_t *)CONCAT44(uVar9,fVar34);
      MathInterpolationCalculator0(uVar12,unaff_RBP + -8,unaff_RBP + -6,uVar8,local_var_20);
      lVar16 = SYSTEM_DATA_MANAGER_A;
      uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
      fVar34 = *(float *)(unaff_RSI + 0x1668);
      if ((unaff_XMM13_Da < fVar34) &&
         (unaff_RBP[-5] <
          *(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44))) {
        uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
        fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        unaff_RBP[-0x1f] = fVar31;
        unaff_RBP[-0x1e] = fVar32;
        unaff_RBP[-0x1d] = fVar33;
        unaff_RBP[-0x1d] = fVar33 * *(float *)(lVar16 + 0x1628);
        uVar8 = SystemFunction_000180121e20(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        local_var_20 = (uint64_t *)CONCAT44(uVar9,fVar34);
        SystemCore_SystemMonitor(uVar12,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar8,local_var_20);
      }
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    lVar16 = *(int64_t *)(local_var_40 + 0x408);
    if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0xa0) & 0x40) != 0)) {
      fVar34 = *(float *)(lVar16 + 0x38);
      fVar31 = *(float *)(unaff_RSI + 0x19f8);
      fVar32 = *(float *)(lVar16 + 0x3c);
      _fStack0000000000000050 = *(uint64_t *)(lVar16 + 0x38);
      unaff_RBP[-0x20] = fVar34;
      unaff_RBP[-0x1f] = fVar32;
      fVar33 = (float)(int)(fVar31 * 0.7);
      fVar31 = (float)(int)(fVar31 * 0.55);
      unaff_RBP[-0x1e] = fVar34 + fVar31;
      unaff_RBP[-0x1d] = fVar32 + fVar31;
      uVar8 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2496_ptr,0);
      uVar12 = CONCAT44(uVar9,0x20);
      cVar6 = SystemCore_Formatter(unaff_RBP + -0x20,uVar8,(int64_t)&local_buffer_00000058 + 1,&local_buffer_00000058,
                            uVar12);
      uVar9 = (int32_t)((uint64_t)uVar12 >> 0x20);
      if (cVar6 != '\0') {
        pbVar3 = (byte *)(*(int64_t *)(local_var_40 + 0x408) + 0xa1);
        *pbVar3 = *pbVar3 | 0x10;
      }
      lVar16 = SYSTEM_DATA_MANAGER_A;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(*(int64_t *)(local_var_40 + 0x408) + 0xa0) & 8) == 0 ||
          (cStack0000000000000059 != '\0')))) {
        lVar20 = (uint64_t)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar20 = 0x17;
      }
      pfVar14 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar20 + 10) * 0x10);
      fVar34 = pfVar14[1];
      fVar31 = pfVar14[2];
      fVar32 = pfVar14[3];
      unaff_RBP[-0x14] = *pfVar14;
      unaff_RBP[-0x13] = fVar34;
      unaff_RBP[-0x12] = fVar31;
      unaff_RBP[-0x11] = fVar32;
      unaff_RBP[-0x11] = fVar32 * *(float *)(lVar16 + 0x1628);
      uVar8 = SystemFunction_000180121e20(unaff_RBP + -0x14);
      local_var_20 = (uint64_t *)CONCAT44(uVar9,uVar8);
      uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
      unaff_RBP[0xe] = fStack0000000000000050;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar33;
      _fStack0000000000000070 = CONCAT44(fStack0000000000000054,fStack0000000000000050 + fVar33);
      DataStructure_940f0(uVar12,&local_buffer_00000050,&local_buffer_00000070,unaff_RBP + 0xe,local_var_20);
    }
    if (*(char *)(local_var_40 + 0xac) != '\0') {
      GenericFunction_180110540(0);
    }
    if (*(char *)(local_var_40 + 0xad) != '\0') {
      GenericFunction_180110540(1);
    }
    uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
    if (((uint)fVar28 & 2) == 0) {
      lVar16 = 0;
      do {
        uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        fVar34 = *(float *)(local_var_40 + 0x40);
        fVar31 = *(float *)(local_var_40 + 0x44);
        lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
        fVar34 = ((fVar34 + *(float *)(local_var_40 + 0x48)) - fVar34) * pfVar13[-2] + fVar34;
        fVar31 = ((fVar31 + *(float *)(local_var_40 + 0x4c)) - fVar31) * pfVar13[-1] + fVar31;
        if (bVar27) {
          unaff_RBP[2] = fVar30;
          unaff_RBP[3] = fVar25;
          fVar32 = fVar30;
        }
        else {
          fStack0000000000000064 = fVar30;
          fStack0000000000000060 = fVar25;
          fVar32 = fVar25;
        }
        pfVar14 = (float *)((int64_t)&local_buffer_00000060 + 4);
        if (bVar27) {
          pfVar14 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar32 * *pfVar13 + fVar34;
        unaff_RBP[-3] = *pfVar14 * pfVar13[1] + fVar31;
        SystemCore_InterruptHandler(lVar20 + 0x80,unaff_RBP + -4);
        lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
        if (bVar27) {
          unaff_RBP[0x1c] = fVar25;
          unaff_RBP[0x1d] = fVar30;
          fVar32 = fVar25;
        }
        else {
          unaff_RBP[-0x1c] = fVar30;
          unaff_RBP[-0x1b] = fVar25;
          fVar32 = fVar30;
        }
        pfVar14 = unaff_RBP + -0x1b;
        if (bVar27) {
          pfVar14 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar32 * *pfVar13 + fVar34;
        unaff_RBP[0x19] = *pfVar14 * pfVar13[1] + fVar31;
        SystemCore_InterruptHandler(lVar20 + 0x80,unaff_RBP + 0x18);
        fVar32 = pfVar13[1];
        uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
        local_var_20 = (uint64_t *)CONCAT44(uVar9,pfVar13[3]);
        unaff_RBP[-0x14] = (fVar30 + fVar29) * *pfVar13 + fVar34;
        unaff_RBP[-0x13] = (fVar30 + fVar29) * fVar32 + fVar31;
        UtilitiesSystem_FileHandler(uVar12,unaff_RBP + -0x14);
        lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
        DataStructure_93190(lVar20,*(uint64_t *)(lVar20 + 0x88),*(int32_t *)(lVar20 + 0x80),
                      unaff_RBP[lVar16 + 0x20],local_var_20);
        uVar9 = (int32_t)((uint64_t)local_var_20 >> 0x20);
        bVar27 = (bool)(bVar27 ^ 1);
        *(int32_t *)(lVar20 + 0x80) = 0;
        lVar16 = lVar16 + 1;
        pfVar13 = pfVar13 + 6;
      } while (lVar16 < *(int64_t *)(unaff_RBP + -0xe));
    }
    lVar16 = SYSTEM_DATA_MANAGER_A;
    if ((unaff_XMM13_Da < fVar30) && (unaff_RBP[-10] == 0.0)) {
      lVar20 = *(int64_t *)(local_var_40 + 0x2e8);
      fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x21] = fVar34;
      unaff_RBP[0x22] = fVar31;
      unaff_RBP[0x23] = fVar32;
      unaff_RBP[0x23] = fVar32 * *(float *)(lVar16 + 0x1628);
      uVar21 = SystemFunction_000180121e20(unaff_RBP + 0x20);
      fVar34 = *(float *)(local_var_40 + 0x44);
      fVar31 = *(float *)(local_var_40 + 0x40) + *(float *)(local_var_40 + 0x48);
      fVar32 = fVar34 + *(float *)(local_var_40 + 0x4c);
      if ((uVar21 & 0xff000000) != 0) {
        bVar24 = *(byte *)(lVar20 + 0x30);
        uVar12 = CONCAT44(uVar9,0xf);
        unaff_RBP[-0x14] = *(float *)(local_var_40 + 0x40) + 0.5;
        unaff_RBP[-0x13] = fVar34 + 0.5;
        if ((bVar24 & 1) == 0) {
          fVar31 = fVar31 - 0.49;
          fVar32 = fVar32 - 0.49;
        }
        else {
          fVar31 = fVar31 - 0.5;
          fVar32 = fVar32 - 0.5;
        }
        unaff_RBP[-0xe] = fVar31;
        unaff_RBP[-0xd] = fVar32;
        UtilitiesSystem_LogManager(lVar20,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar29,uVar12);
        uVar9 = (int32_t)((uint64_t)uVar12 >> 0x20);
        GenericFunction_18010e4e0(lVar20,uVar21,1,fVar30);
      }
    }
    if (unaff_RBP[0xc] != -NAN) {
      uVar12 = CONCAT44(uVar9,unaff_XMM13_Da);
      GenericFunction_1801296e0(unaff_RBP + -0x14,local_var_40,unaff_RBP[0xc],fVar25,uVar12);
      lVar16 = SYSTEM_DATA_MANAGER_A;
      uVar8 = (int32_t)((uint64_t)uVar12 >> 0x20);
      uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar25 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x189c);
      fVar29 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      unaff_RBP[-0xd] = fVar25;
      unaff_RBP[-0xc] = fVar29;
      unaff_RBP[-0xb] = fVar34;
      unaff_RBP[-0xb] = fVar34 * *(float *)(lVar16 + 0x1628);
      uVar9 = SystemFunction_000180121e20(unaff_RBP + -0xe);
      if (fVar30 <= 1.0) {
        fVar30 = 1.0;
      }
      uVar17 = CONCAT44(uVar8,fVar30);
      SystemCore_SystemMonitor(uVar12,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar9,uVar17);
      uVar9 = (int32_t)((uint64_t)uVar17 >> 0x20);
    }
    lVar16 = SYSTEM_DATA_MANAGER_A;
    fVar25 = *(float *)(unaff_RSI + 0x1668);
    uVar21 = local_buffer_68;
    if (((unaff_XMM13_Da < fVar25) && (((uint)fVar28 & 1) == 0)) &&
       ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
      uVar12 = *(uint64_t *)(local_var_40 + 0x2e8);
      fVar29 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x18] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x19] = fVar29;
      unaff_RBP[0x1a] = fVar30;
      unaff_RBP[0x1b] = fVar34;
      unaff_RBP[0x1b] = fVar34 * *(float *)(lVar16 + 0x1628);
      uVar8 = SystemFunction_000180121e20(unaff_RBP + 0x18);
      fVar29 = *(float *)(unaff_RSI + 0x1638);
      uVar17 = CONCAT44(uVar9,fVar25);
      unaff_RBP[-0xe] = *unaff_RBP - fVar29;
      unaff_RBP[-0xd] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x13] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar29;
      SystemCore_SystemMonitor(uVar12,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar8,uVar17);
      uVar9 = (int32_t)((uint64_t)uVar17 >> 0x20);
      uVar21 = local_buffer_68;
    }
  }
  else {
    uVar8 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)(local_var_40 + 0x7c);
    lVar16 = SYSTEM_DATA_MANAGER_A;
    if ((bVar24 == 0) || (lVar20 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar20 = 0x160;
    }
    pfVar13 = (float *)(lVar20 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    fVar25 = pfVar13[1];
    fVar30 = pfVar13[2];
    fVar34 = pfVar13[3];
    unaff_RBP[0x20] = *pfVar13;
    unaff_RBP[0x21] = fVar25;
    unaff_RBP[0x22] = fVar30;
    unaff_RBP[0x23] = fVar34;
    unaff_RBP[0x23] = fVar34 * *(float *)(lVar16 + 0x1628);
    uVar10 = SystemFunction_000180121e20(unaff_RBP + 0x20);
    uVar12 = CONCAT44(uVar9,fVar29);
    SystemCore_ResourceManager(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar10,1,uVar12);
    uVar9 = (int32_t)((uint64_t)uVar12 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar8;
  }
  pfVar13 = (float *)(unaff_RSI + 0x1668);
  *(uint64_t *)(local_var_40 + 0x58) = *(uint64_t *)(local_var_40 + 0x50);
  *(float *)(local_var_40 + 0x270) =
       (*(float *)(local_var_40 + 0x40) - *(float *)(local_var_40 + 0x8c)) +
       *(float *)(local_var_40 + 0x70);
  fVar34 = (float)SystemFunction_00018010e760(local_var_40);
  fVar25 = *(float *)(local_var_40 + 0x44);
  fVar29 = *(float *)(local_var_40 + 0x90);
  fVar30 = *(float *)(local_var_40 + 0x74);
  fVar31 = (float)SystemFunction_00018010e7a0();
  *(float *)(local_var_40 + 0x274) = fVar31 + fVar34 + (fVar25 - fVar29) + fVar30;
  fVar25 = *(float *)(local_var_40 + 0x68);
  if (fVar25 == unaff_XMM13_Da) {
    fVar25 = *(float *)(local_var_40 + 0x48) - *(float *)(local_var_40 + 0xa4);
  }
  *(float *)(local_var_40 + 0x278) =
       ((*(float *)(local_var_40 + 0x40) - *(float *)(local_var_40 + 0x8c)) -
       *(float *)(local_var_40 + 0x70)) + fVar25;
  fVar25 = *(float *)(local_var_40 + 0x6c);
  if (fVar25 == unaff_XMM13_Da) {
    fVar25 = *(float *)(local_var_40 + 0x4c) - *(float *)(local_var_40 + 0xa8);
  }
  *(float *)(local_var_40 + 0x27c) =
       ((*(float *)(local_var_40 + 0x44) - *(float *)(local_var_40 + 0x90)) -
       *(float *)(local_var_40 + 0x74)) + fVar25;
  *(float *)(local_var_40 + 0x204) =
       *(float *)(local_var_40 + 0x70) - *(float *)(local_var_40 + 0x8c);
  uVar10 = 0;
  *(int32_t *)(local_var_40 + 0x208) = 0;
  *(int32_t *)(local_var_40 + 0x20c) = 0;
  SystemFunction_00018010e7a0(local_var_40);
  SystemFunction_00018010e760(local_var_40);
  uVar12 = SystemFunction_00018004ba20(unaff_RBP + -0x18,
                               *(float *)(local_var_40 + 0x20c) +
                               *(float *)(local_var_40 + 0x204));
  puVar11 = (int32_t *)SystemFunction_00018011fbf0(unaff_RBP + -0xe,local_var_40 + 0x40,uVar12);
  uVar8 = puVar11[1];
  *(int32_t *)(local_var_40 + 0x110) = *puVar11;
  *(int32_t *)(local_var_40 + 0x114) = uVar8;
  *(uint64_t *)(local_var_40 + 0x100) = *(uint64_t *)(local_var_40 + 0x110);
  *(uint64_t *)(local_var_40 + 0x108) = *(uint64_t *)(local_var_40 + 0x110);
  *(uint64_t *)(local_var_40 + 0x118) = *(uint64_t *)(local_var_40 + 0x110);
  puVar11 = (int32_t *)SystemFunction_00018004ba20(unaff_RBP + -0x18);
  uVar8 = puVar11[1];
  *(int32_t *)(local_var_40 + 300) = *puVar11;
  *(int32_t *)(local_var_40 + 0x130) = uVar8;
  *(uint64_t *)(local_var_40 + 0x120) = *(uint64_t *)(local_var_40 + 300);
  *(int32_t *)(local_var_40 + 0x134) = 0;
  *(int32_t *)(local_var_40 + 0x128) = 0;
  *(int8_t *)(local_var_40 + 0x17c) = 0;
  fVar25 = (float)SystemFunction_0001801293c0(local_var_40);
  *(bool *)(local_var_40 + 0x17d) = unaff_XMM13_Da < fVar25;
  *(int32_t *)(local_var_40 + 0x174) = *(int32_t *)(local_var_40 + 0x178);
  *(int32_t *)(local_var_40 + 0x178) = 0;
  *(int8_t *)(local_var_40 + 0x17e) = 0;
  *(float *)(local_var_40 + 0x138) = *(float *)(local_var_40 + 0x104) - 9999.0;
  GenericFunction_18013e200(local_var_40 + 0x188,0);
  lVar16 = *(int64_t *)(unaff_RBP + 8);
  *(int32_t *)(local_var_40 + 0x1a0) = 1;
  if (lVar16 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(int32_t *)(lVar16 + 0x1a0);
  }
  *(int32_t *)(local_var_40 + 0x1a4) = uVar8;
  if (lVar16 != 0) {
    uVar10 = *(int32_t *)(lVar16 + 0x1a8);
  }
  *(int32_t *)(local_var_40 + 0x1a8) = uVar10;
  *(int32_t *)(local_var_40 + 0x1ac) = *(int32_t *)(local_var_40 + 0x284);
  *(int32_t *)(local_var_40 + 0x1b0) = 0xbf800000;
  GenericFunction_18013e340(local_var_40 + 0x1b8,0);
  GenericFunction_18013e2f0(local_var_40 + 0x1c8,0);
  GenericFunction_18013e2f0(local_var_40 + 0x1d8,0);
  *(uint64_t *)(local_var_40 + 0x210) = 0;
  *(int32_t *)(local_var_40 + 0x13c) = 0;
  *(int32_t *)(local_var_40 + 0x140) = 0;
  *(int64_t *)(local_var_40 + 0x198) = local_var_40 + 0x2b8;
  GenericFunction_18013db40(local_var_40 + 0x1e8,0);
  SystemFunction_00018011a9d0(local_var_40 + 0x288,3);
  if ((unaff_RBP[0x16] != 0.0) && (*(int *)(local_var_40 + 0x1a8) != *(int *)(lVar16 + 0x1a8)))
  {
    *(int *)(local_var_40 + 0x1a8) = *(int *)(lVar16 + 0x1a8);
    GenericFunction_18011d940(local_var_40 + 0x1b8,local_var_40 + 0x1a8);
  }
  if (0 < *(int *)(local_var_40 + 0xc4)) {
    *(int *)(local_var_40 + 0xc4) = *(int *)(local_var_40 + 0xc4) + -1;
  }
  if (0 < *(int *)(local_var_40 + 200)) {
    *(int *)(local_var_40 + 200) = *(int *)(local_var_40 + 200) + -1;
  }
  if ((char)uVar21 != '\0') {
    SystemCore_DataCompressor(local_var_40);
    SystemFunction_000180131810(local_var_40,0);
  }
  puVar5 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar5 != (int8_t *)0x0) &&
       (lVar20 = *(int64_t *)(local_var_40 + 0x28), *(char *)(lVar20 + 0x48) != '\0')) &&
      (lVar26 = SystemFunction_00018012fae0(), lVar20 != lVar26)) &&
     (((*(byte *)(local_var_40 + 0x432) & 1) == 0 ||
      ((*(byte *)(local_var_40 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar20 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if ((((uint)fVar28 & 1) == 0) && ((*(byte *)(local_var_40 + 0x432) & 1) == 0)) {
    uVar21 = *(uint *)(local_var_40 + 0x1a8);
    *(uint *)(local_var_40 + 0x1a8) = uVar21 | 0x10;
    *(int32_t *)(local_var_40 + 0x16c) = 1;
    *(int32_t *)(local_var_40 + 0x170) = 2;
    if (((uint)fVar28 & 0x20) == 0) {
      lVar20 = local_var_40 + 0x40;
      uVar8 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2480_ptr,0);
      cVar6 = GenericFunction_180110000(uVar8,lVar20,0);
      if (cVar6 != '\0') {
        *(int8_t *)(local_var_40 + 0xb3) = 1;
      }
    }
    if (*(int64_t *)(unaff_RBP + 10) != 0) {
      fVar25 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar12 = SystemFunction_00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(local_var_40 + 0x48) +
                                    *(float *)(local_var_40 + 0x40)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar25,
                                   *(float *)(local_var_40 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar25);
      uVar8 = SystemCore_EventHandler(local_var_40,&rendering_buffer_2512_ptr,0);
      cVar6 = GenericFunction_18010fd40(uVar8,uVar12);
      if (cVar6 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)(local_var_40 + 0x16c) = 0;
    *(int32_t *)(local_var_40 + 0x170) = 1;
    *(uint *)(local_var_40 + 0x1a8) = uVar21;
    fVar25 = unaff_XMM13_Da;
    if (((uint)fVar28 & 0x100000) != 0) {
      uVar12 = CONCAT44(uVar9,0xbf800000);
      pfVar14 = (float *)SystemCore_Controller(unaff_RBP + -0x18,&system_data_df28,0,0,uVar12);
      uVar9 = (int32_t)((uint64_t)uVar12 >> 0x20);
      fVar25 = *pfVar14;
    }
    uVar12 = SystemFunction_00018004ba20(unaff_RBP + -0x18);
    uVar17 = SystemCore_Controller(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar9,0xbf800000));
    SystemFunction_00018011fbf0(&local_buffer_00000050,uVar17,uVar12);
    fVar31 = unaff_RBP[-2];
    fVar29 = unaff_RBP[-1];
    fVar34 = *unaff_RBP;
    fVar30 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar31;
    unaff_RBP[-0x1b] = fVar29;
    unaff_RBP[-0x1a] = fVar34;
    unaff_RBP[-0x19] = fVar30;
    if (((uint)fVar28 & 0x20) == 0) {
      fVar32 = *(float *)(unaff_RSI + 0x165c);
      fVar33 = fVar32 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar32 = *(float *)(unaff_RSI + 0x165c);
      fVar33 = fVar32;
    }
    lVar20 = *(int64_t *)(unaff_RBP + 10);
    if (lVar20 != 0) {
      fVar32 = fVar32 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar32 = (float)SystemFunction_00018013e9f0();
      fVar30 = unaff_RBP[-0x19];
      fVar34 = unaff_RBP[-0x1a];
      fVar29 = unaff_RBP[-0x1b];
      fVar31 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar29;
    unaff_RBP[-5] = fVar30;
    unaff_RBP[-0x1c] = fVar31 + fVar33;
    unaff_RBP[-0x1a] = fVar34 - fVar32;
    unaff_RBP[-8] = fVar31 + fVar33;
    unaff_RBP[-6] = fVar34 - fVar32;
    if (lVar20 == 0) {
      fVar29 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar29 = (float)SystemFunction_00018010e5a0(unaff_RBP + -2);
      fVar29 = fVar29 - 3.0;
    }
    unaff_RBP[-6] =
         (*(float *)(local_var_40 + 0x48) + *(float *)(local_var_40 + 0x40)) - fVar29;
    GenericFunction_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &local_buffer_00000050);
    if (((uint)fVar28 & 0x100000) != 0) {
      uVar12 = SystemFunction_00018004ba20(unaff_RBP + -0x14,2.0 - fVar25);
      SystemFunction_00018010e590(unaff_RBP + -0x1c);
      SystemFunction_00018013e900();
      uVar17 = SystemFunction_00018004ba20(unaff_RBP + 0x18);
      SystemFunction_00018011fbf0(unaff_RBP + -0x18,uVar17,uVar12);
      SystemFunction_00018004ba20(unaff_RBP + -0xe);
      SystemFunction_00018004ba20(unaff_RBP + -0x14);
      uVar12 = SystemFunction_00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar17 = SystemFunction_00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      GenericFunction_180122890(uVar17,uVar12,&system_data_df28,0,0);
    }
  }
  *(int16_t *)(local_var_40 + 0x26a) = 0;
  *(int16_t *)(local_var_40 + 0x268) = 0;
  puVar15 = (uint64_t *)SystemFunction_00018010e720(local_var_40,unaff_RBP + 0x20);
  uVar12 = puVar15[1];
  *(uint64_t *)(local_var_40 + 0x238) = *puVar15;
  *(uint64_t *)(local_var_40 + 0x240) = uVar12;
  if ((*(byte *)(local_var_40 + 0x432) & 1) != 0) {
    fVar25 = (float)SystemFunction_00018010e760();
    *(float *)(local_var_40 + 0x23c) = fVar25 + *(float *)(local_var_40 + 0x23c);
  }
  SystemFunction_00018010e690(local_var_40 + 0x238,local_var_40 + 0x228);
  *(float *)(local_var_40 + 0x248) = unaff_RBP[-2] + *(float *)(local_var_40 + 0x7c);
  if (((uint)fVar28 & 0x401) == 1) {
    pfVar13 = (float *)(local_var_40 + 0x7c);
  }
  fVar25 = *pfVar13;
  fVar29 = (float)SystemFunction_00018010e7a0();
  *(float *)(local_var_40 + 0x24c) = fVar29 + unaff_RBP[1] + fVar25;
  *(float *)(local_var_40 + 0x250) =
       ((*(float *)(local_var_40 + 0x48) + *(float *)(local_var_40 + 0x40)) -
       *(float *)(local_var_40 + 0xa4)) - *(float *)(local_var_40 + 0x7c);
  *(float *)(local_var_40 + 0x254) =
       ((*(float *)(local_var_40 + 0x4c) + *(float *)(local_var_40 + 0x44)) -
       *(float *)(local_var_40 + 0xa8)) - *(float *)(local_var_40 + 0x7c);
  fVar25 = (float)SystemFunction_00018013e900();
  *(float *)(local_var_40 + 600) =
       (float)(int)(fVar25 + *(float *)(local_var_40 + 0x248) + 0.5);
  *(float *)(local_var_40 + 0x25c) = (float)(int)(*(float *)(local_var_40 + 0x24c) + 0.5);
  fVar25 = *(float *)(local_var_40 + 0x250);
  fVar29 = (float)SystemFunction_00018013e900();
  *(float *)(local_var_40 + 0x260) = (float)(int)((fVar25 + 0.5) - fVar29);
  *(float *)(local_var_40 + 0x264) = (float)(int)(*(float *)(local_var_40 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)(local_var_40 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(*(int64_t *)(local_var_40 + 0x3a0) + 0xc) & 0x200004) == 0)))) {
      GenericFunction_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)fVar28 >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(unaff_RSI + 0x1b78) == 0 ||
         (*(int64_t *)(*(int64_t *)(unaff_RSI + 0x1b78) + 0x3a0) != local_var_40)))) &&
       ((local_var_40 == *(int64_t *)(local_var_40 + 0x3a0) &&
        ((*(uint *)(local_var_40 + 0xc) & 0x20000000) == 0)))) {
      GenericFunction_18013baf0();
    }
  }
  if ((*(byte *)(local_var_40 + 0x432) & 1) == 0) {
    *(int32_t *)(local_var_40 + 0x144) = *(int32_t *)(local_var_40 + 0x84);
    cVar6 = SystemCore_HashCalculator(unaff_RBP + -2);
    fVar25 = unaff_RBP[-0x10];
    *(uint *)(local_var_40 + 0x148) = (uint)(cVar6 != '\0');
    uVar12 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)(local_var_40 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)(local_var_40 + 0x154) = uVar12;
  }
  else {
    fVar25 = unaff_RBP[-0x10];
    *(int32_t *)(local_var_40 + 0x144) = *(int32_t *)(local_var_40 + 8);
    *(int32_t *)(local_var_40 + 0x148) = *(int32_t *)(local_var_40 + 0x41c);
    *(uint64_t *)(local_var_40 + 0x14c) = *(uint64_t *)(local_var_40 + 0x420);
    *(uint64_t *)(local_var_40 + 0x154) = *(uint64_t *)(local_var_40 + 0x428);
  }
  fVar29 = local_buffer_78;
  if (((uint)fVar28 >> 0x1d & 1) == 0) {
    SystemCore_PerformanceMonitor(local_var_40 + 600,local_var_40 + 0x260,1);
  }
  if (fVar29 != fVar25) {
    *(int8_t *)(local_var_40 + 0xb1) = 0;
  }
  *(short *)(local_var_40 + 0xb8) = *(short *)(local_var_40 + 0xb8) + 1;
  GenericFunction_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)(local_var_40 + 0x432) & 1) != 0) &&
     ((*(byte *)(local_var_40 + 0x432) & 2) == 0)) {
    *(int32_t *)(local_var_40 + 0xd8) = 1;
  }
  if (((uint)fVar28 >> 0x18 & 1) != 0) {
    if ((((((uint)fVar28 & 0x40) == 0) && (*(int *)(local_var_40 + 0xc4) < 1)) &&
        (*(int *)(local_var_40 + 200) < 1)) &&
       ((*(float *)(local_var_40 + 0x240) < *(float *)(local_var_40 + 0x238) ||
         *(float *)(local_var_40 + 0x240) == *(float *)(local_var_40 + 0x238) ||
        (*(float *)(local_var_40 + 0x244) < *(float *)(local_var_40 + 0x23c) ||
         *(float *)(local_var_40 + 0x244) == *(float *)(local_var_40 + 0x23c))))) {
      *(int32_t *)(local_var_40 + 0xd8) = 1;
    }
    if ((lVar16 != 0) && ((*(char *)(lVar16 + 0xb2) != '\0' || (*(char *)(lVar16 + 0xb6) != '\0'))))
    {
      *(int32_t *)(local_var_40 + 0xd8) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(local_var_40 + 0xd8) = 1;
  }
  if ((*(int *)(local_var_40 + 0xd8) < 1) && (*(int *)(local_var_40 + 0xdc) < 1)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)(local_var_40 + 0xb6) = cVar6;
  if (((((*(char *)(local_var_40 + 0xb2) == '\0') &&
        (*(char *)(local_var_40 + 0xaf) != '\0')) && (cVar6 == '\0')) ||
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