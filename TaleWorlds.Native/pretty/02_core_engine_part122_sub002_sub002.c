#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part122_sub002_sub002.c - 1 个函数

// 函数: void FUN_18012a002(void)
void FUN_18012a002(void)

{
  int16_t *puVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  int8_t *puVar5;
  char cVar6;
  char cVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  char *pcVar11;
  int64_t lVar12;
  int32_t *puVar13;
  uint64_t uVar14;
  float *pfVar15;
  float *pfVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int8_t uVar20;
  uint uVar21;
  int64_t lVar22;
  uint uVar23;
  int iVar24;
  float *pfVar25;
  float *unaff_RBP;
  int64_t unaff_RSI;
  byte bVar26;
  char unaff_R12B;
  float fVar27;
  int64_t lVar28;
  char unaff_R13B;
  bool bVar29;
  int32_t unaff_R14D;
  float unaff_R15D;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
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
  float unaff_XMM13_Da;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  uint64_t *in_stack_00000020;
  int64_t *in_stack_00000040;
  char cStack0000000000000048;
  char cStack0000000000000049;
  char cStack000000000000004a;
  float fStack0000000000000050;
  float fStack0000000000000054;
  char cStack0000000000000058;
  char cStack0000000000000059;
  float fStack0000000000000060;
  float fStack0000000000000064;
  uint in_stack_00000068;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  int32_t in_stack_000001a0;
  int32_t in_stack_000001a8;
  int32_t in_stack_000001b0;
  int32_t in_stack_000001b8;
  uint64_t in_stack_000001d0;
  uint64_t in_stack_000001d8;
  int32_t in_stack_000001e0;
  int32_t in_stack_000001e8;
  int32_t in_stack_000001f0;
  int32_t in_stack_000001f8;
  uint64_t in_stack_00000200;
  uint64_t in_stack_00000208;
  int32_t in_stack_00000210;
  int32_t in_stack_00000218;
  
  fVar30 = in_stack_00000078;
  fVar27 = unaff_RBP[-0x10];
  if (in_stack_00000078 != fVar27) {
    in_stack_00000040[0xd] = 0;
  }
  uVar14 = *(uint64_t *)(unaff_RSI + 0x1c4c);
  *(uint64_t *)((int64_t)in_stack_00000040 + 0x14) = *(uint64_t *)(unaff_RSI + 0x1c44);
  *(uint64_t *)((int64_t)in_stack_00000040 + 0x1c) = uVar14;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x24) = *(int32_t *)(unaff_RSI + 0x1c54);
  if (*(uint *)(unaff_RSI + 0x1bdc) != 0) {
    if ((*(uint *)(unaff_RSI + 0x1bdc) & *(uint *)(in_stack_00000040 + 0x1d)) != 0) {
      *(int8_t *)((int64_t)in_stack_00000040 + 0xb2) = *(int8_t *)(unaff_RSI + 0x1c15);
      *(uint *)(in_stack_00000040 + 0x1d) = *(uint *)(in_stack_00000040 + 0x1d) & 0xfffffff1;
    }
  }
  if (*(int *)(unaff_RSI + 0x1be4) != 0) {
    FUN_18012d2e0();
  }
  if (*(char *)((int64_t)in_stack_00000040 + 0xb5) != '\0') {
    func_0x000180128ae0(in_stack_00000040,8);
  }
  if (fVar30 == fVar27) {
    func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
    func_0x000180123e50(in_stack_00000040);
    lVar12 = *(int64_t *)(unaff_RBP + 8);
    goto LAB_18012ce0f;
  }
  unaff_RBP[-4] = (float)((uint)unaff_R15D & 0x3000000);
  in_stack_000001a0 = unaff_XMM15_Da;
  in_stack_000001a8 = unaff_XMM15_Dc;
  in_stack_000001b0 = unaff_XMM14_Da;
  in_stack_000001b8 = unaff_XMM14_Dc;
  in_stack_000001d0 = unaff_XMM12_Qa;
  in_stack_000001d8 = unaff_XMM12_Qb;
  in_stack_000001e0 = unaff_XMM11_Da;
  in_stack_000001e8 = unaff_XMM11_Dc;
  in_stack_000001f0 = unaff_XMM10_Da;
  in_stack_000001f8 = unaff_XMM10_Dc;
  in_stack_00000210 = unaff_XMM8_Da;
  in_stack_00000218 = unaff_XMM8_Dc;
  func_0x000180129900(in_stack_00000040,unaff_R15D,*(uint64_t *)(unaff_RBP + 8));
  lVar12 = *(int64_t *)(unaff_RBP + 10);
  unaff_RBP[0x20] = -3.4028235e+38;
  unaff_RBP[0x21] = -3.4028235e+38;
  unaff_RBP[0x22] = 3.4028235e+38;
  unaff_RBP[0x23] = 3.4028235e+38;
  *(int8_t *)((int64_t)in_stack_00000040 + 0xaf) = 1;
  *(bool *)((int64_t)in_stack_00000040 + 0xb7) = lVar12 != 0;
  func_0x00018010e540(unaff_RBP + -0x20,unaff_RBP + 0x20);
  lVar12 = *(int64_t *)(unaff_RBP + -0x1e);
  in_stack_00000040[0x45] = *(int64_t *)(unaff_RBP + -0x20);
  in_stack_00000040[0x46] = lVar12;
  FUN_18013dae0(in_stack_00000040 + 0x43,1);
  cVar6 = cStack0000000000000049;
  if (((((in_stack_00000040[5] != 0) &&
        (*(int64_t **)(in_stack_00000040[5] + 0x78) == in_stack_00000040)) ||
       ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0)) ||
      ((*(int64_t *)(unaff_RSI + 0x1ce8) != 0 &&
       ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x80000) == 0)))) &&
     (cStack0000000000000049 == '\0')) {
    pcVar4 = *(char **)(unaff_RBP + 0x1e);
    pcVar11 = pcVar4;
    do {
      cVar7 = *pcVar11;
      cVar3 = pcVar11[*in_stack_00000040 - (int64_t)pcVar4];
      if (cVar7 != cVar3) break;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    if (cVar7 != cVar3) {
      _fStack0000000000000050 = (int64_t)(int)in_stack_00000040[0x10];
      lVar12 = FUN_180121130(*in_stack_00000040,&stack0x00000050,pcVar4);
      *in_stack_00000040 = lVar12;
      *(float *)(in_stack_00000040 + 0x10) = fStack0000000000000050;
    }
  }
  if (*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') {
    if (((*(char *)((int64_t)in_stack_00000040 + 0xb6) == '\0') ||
        (*(int *)((int64_t)in_stack_00000040 + 0xdc) != 0)) || ((int)in_stack_00000040[0x1b] < 1))
    {
      fVar27 = *(float *)(in_stack_00000040 + 0xd);
      if (fVar27 == unaff_XMM13_Da) {
        fVar27 = (*(float *)(in_stack_00000040 + 0x23) - *(float *)(in_stack_00000040 + 8)) +
                 *(float *)((int64_t)in_stack_00000040 + 0x8c);
      }
      fVar30 = *(float *)((int64_t)in_stack_00000040 + 0x6c);
      if (fVar30 == unaff_XMM13_Da) {
        fVar30 = (*(float *)((int64_t)in_stack_00000040 + 0x11c) -
                 *(float *)((int64_t)in_stack_00000040 + 0x44)) +
                 *(float *)(in_stack_00000040 + 0x12);
      }
      fVar27 = (float)(int)fVar27 + *(float *)(in_stack_00000040 + 0xe);
      fVar30 = (float)(int)fVar30 + *(float *)((int64_t)in_stack_00000040 + 0x74);
    }
    else {
      fVar27 = *(float *)(in_stack_00000040 + 0xc);
      fVar30 = *(float *)((int64_t)in_stack_00000040 + 100);
    }
  }
  else {
    fVar27 = *(float *)(in_stack_00000040 + 0xc);
    fVar30 = *(float *)((int64_t)in_stack_00000040 + 100);
  }
  *(float *)(in_stack_00000040 + 0xc) = fVar27;
  *(float *)((int64_t)in_stack_00000040 + 100) = fVar30;
  if (0 < (int)in_stack_00000040[0x1b]) {
    *(int *)(in_stack_00000040 + 0x1b) = (int)in_stack_00000040[0x1b] + -1;
  }
  if (0 < *(int *)((int64_t)in_stack_00000040 + 0xdc)) {
    *(int *)((int64_t)in_stack_00000040 + 0xdc) = *(int *)((int64_t)in_stack_00000040 + 0xdc) + -1
    ;
  }
  if ((cVar6 != '\0') && ((unaff_R12B == '\0' || (unaff_R13B == '\0')))) {
    *(int32_t *)((int64_t)in_stack_00000040 + 0xdc) = 1;
  }
  if (((cStack000000000000004a != '\0') && (((uint)unaff_R15D & 0x6000000) != 0)) &&
     (*(int32_t *)((int64_t)in_stack_00000040 + 0xdc) = 1, ((uint)unaff_R15D & 0x40) != 0)) {
    if (unaff_R12B == '\0') {
      *(int32_t *)(in_stack_00000040 + 10) = unaff_R14D;
      *(int32_t *)(in_stack_00000040 + 9) = unaff_R14D;
    }
    if (unaff_R13B == '\0') {
      *(int32_t *)((int64_t)in_stack_00000040 + 0x54) = unaff_R14D;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x4c) = unaff_R14D;
    }
    in_stack_00000040[0xc] = 0;
  }
  FUN_180130a80(in_stack_00000040);
  func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
  if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = *(int32_t *)(in_stack_00000040[5] + 0x18);
  }
  *(int32_t *)((int64_t)in_stack_00000040 + 0x2dc) = uVar9;
  func_0x000180123e50(in_stack_00000040);
  unaff_R15D = *(float *)((int64_t)in_stack_00000040 + 0xc);
  unaff_RBP[-10] = unaff_R15D;
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) {
    if (((uint)unaff_R15D >> 0x18 & 1) == 0) {
      if ((((uint)unaff_R15D & 0x6000000) == 0) || (((uint)unaff_R15D >> 0x1b & 1) != 0)) {
        uVar9 = *(int32_t *)(unaff_RSI + 0x1638);
      }
      else {
        uVar9 = *(int32_t *)(unaff_RSI + 0x1658);
      }
      *(int32_t *)((int64_t)in_stack_00000040 + 0x7c) = uVar9;
    }
    else {
      *(int32_t *)((int64_t)in_stack_00000040 + 0x7c) = *(int32_t *)(unaff_RSI + 0x1650);
    }
  }
  else {
    *(int32_t *)((int64_t)in_stack_00000040 + 0x7c) = unaff_R14D;
  }
  if ((((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) &&
      (((uint)unaff_R15D & 0x5010000) == 0x1000000)) &&
     (unaff_XMM13_Da == *(float *)((int64_t)in_stack_00000040 + 0x7c))) {
    if (((uint)unaff_R15D >> 10 & 1) == 0) {
      *(int32_t *)(in_stack_00000040 + 0xe) = unaff_R14D;
      *(float *)((int64_t)in_stack_00000040 + 0x74) = unaff_XMM13_Da;
    }
    else {
      uVar9 = *(int32_t *)(unaff_RSI + 0x1630);
      *(int32_t *)(in_stack_00000040 + 0xe) = unaff_R14D;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x74) = uVar9;
    }
  }
  else {
    in_stack_00000040[0xe] = *(int64_t *)(unaff_RSI + 0x162c);
  }
  fVar27 = *(float *)(in_stack_00000040 + 0xe);
  if (*(float *)(in_stack_00000040 + 0xe) <= *(float *)(unaff_RSI + 0x166c)) {
    fVar27 = *(float *)(unaff_RSI + 0x166c);
  }
  if (fVar27 <= *(float *)(unaff_RSI + 0x1c58)) {
    fVar27 = *(float *)(unaff_RSI + 0x1c58);
  }
  *(float *)(in_stack_00000040 + 0x30) = fVar27;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x184) = *(int32_t *)(unaff_RSI + 0x1c5c);
  if ((((uint)unaff_R15D & 0x21) == 0) &&
     ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)) {
    func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    if ((((*(int64_t **)(unaff_RSI + 0x1b00) == in_stack_00000040) &&
         (*(int *)(unaff_RSI + 0x1b18) == 0)) && (*(int *)(unaff_RSI + 0x1b20) == 0)) &&
       ((cVar6 = FUN_180128040(unaff_RBP + 0x20,unaff_RBP + 0x22,1), cVar6 != '\0' &&
        (*(char *)(unaff_RSI + 0x415) != '\0')))) {
      *(int8_t *)((int64_t)in_stack_00000040 + 0xb3) = 1;
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xb3) != '\0') {
      *(bool *)((int64_t)in_stack_00000040 + 0xb2) =
           *(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0';
      if (((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x100) == 0) &&
         (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= unaff_XMM13_Da)) {
        *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
      }
      FUN_18012d2e0(in_stack_00000040);
    }
  }
  else {
    *(int8_t *)((int64_t)in_stack_00000040 + 0xb2) = 0;
  }
  plVar18 = in_stack_00000040;
  lVar12 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)((int64_t)in_stack_00000040 + 0xb3) = 0;
  if ((*(uint *)((int64_t)in_stack_00000040 + 0xc) >> 0x19 & 1) == 0) {
    _fStack0000000000000070 = *(uint64_t *)(lVar12 + 0x163c);
    if ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x14000000) != 0) {
      _fStack0000000000000050 = 0x4080000040800000;
      puVar17 = (uint64_t *)
                func_0x00018011fc20(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050);
      _fStack0000000000000070 = *puVar17;
    }
    fVar27 = *(float *)(plVar18[5] + 0x10);
    fVar30 = *(float *)(plVar18[5] + 0x14);
    if (*(char *)((int64_t)plVar18 + 0xae) != '\0') {
      fVar27 = 3.4028235e+38;
      fVar30 = 3.4028235e+38;
    }
    iVar24 = *(int *)((int64_t)plVar18 + 0x3c);
    if ((-1 < iVar24) && (iVar24 < *(int *)(lVar12 + 0x1600))) {
      fVar27 = *(float *)(*(int64_t *)(lVar12 + 0x1608) + 0x18 + (int64_t)iVar24 * 0x24);
      fVar30 = *(float *)(*(int64_t *)(lVar12 + 0x1608) + 0x1c + (int64_t)iVar24 * 0x24);
    }
    _fStack0000000000000050 =
         CONCAT44(fVar30 - (*(float *)(lVar12 + 0x16b8) + *(float *)(lVar12 + 0x16b8)),
                  fVar27 - (*(float *)(lVar12 + 0x16b4) + *(float *)(lVar12 + 0x16b4)));
    puVar17 = (uint64_t *)func_0x00018011fc50(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050)
    ;
    FUN_18011fc80(&stack0x00000060,plVar18 + 0xc,&stack0x00000070,*puVar17);
    FUN_180128fd0(unaff_RBP + 2,plVar18,CONCAT44(fStack0000000000000064,fStack0000000000000060));
    if (((unaff_RBP[2] < *(float *)(plVar18 + 0xc)) &&
        ((*(uint *)((int64_t)plVar18 + 0xc) & 8) == 0)) &&
       ((*(uint *)((int64_t)plVar18 + 0xc) >> 0xb & 1) != 0)) {
      fStack0000000000000064 = fStack0000000000000064 + *(float *)(lVar12 + 0x168c);
    }
    lVar22 = SYSTEM_DATA_MANAGER_A;
    fVar30 = fStack0000000000000060;
    fVar27 = fStack0000000000000064;
    if ((unaff_RBP[3] < *(float *)((int64_t)plVar18 + 100)) &&
       ((*(byte *)((int64_t)plVar18 + 0xc) & 8) == 0)) {
      fStack0000000000000060 = fStack0000000000000060 + *(float *)(lVar12 + 0x168c);
      fVar30 = fStack0000000000000060;
    }
  }
  else {
    lVar22 = lVar12;
    fVar30 = *(float *)(in_stack_00000040 + 0xc);
    fVar27 = *(float *)((int64_t)in_stack_00000040 + 100);
  }
  fVar32 = 3.4028235e+38;
  _fStack0000000000000050 = CONCAT44(fVar27,fVar30);
  fVar35 = 3.4028235e+38;
  if ((((uint)unaff_R15D & 0x40) == 0) || (*(char *)((int64_t)in_stack_00000040 + 0xb2) != '\0')) {
    if ((0 < *(int *)((int64_t)in_stack_00000040 + 0xc4)) || (0 < (int)in_stack_00000040[0x19])) {
      if ((unaff_R12B == '\0') && (0 < *(int *)((int64_t)in_stack_00000040 + 0xc4))) {
        fVar32 = fVar30;
        if ((*(char *)((int64_t)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar32 = *(float *)(in_stack_00000040 + 10),
           *(float *)(in_stack_00000040 + 10) <= fVar30)) {
          fVar32 = fVar30;
        }
        *(float *)(in_stack_00000040 + 10) = fVar32;
      }
      if ((unaff_R13B == '\0') && (0 < (int)in_stack_00000040[0x19])) {
        fVar35 = fVar27;
        if ((*(char *)((int64_t)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar35 = *(float *)((int64_t)in_stack_00000040 + 0x54),
           *(float *)((int64_t)in_stack_00000040 + 0x54) <= fVar27)) {
          fVar35 = fVar27;
        }
        *(float *)((int64_t)in_stack_00000040 + 0x54) = fVar35;
      }
      if (((*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') &&
          ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar22 + 0x2e04) <= unaff_XMM13_Da)) {
        *(int32_t *)(lVar22 + 0x2e04) = *(int32_t *)(lVar22 + 0x1c);
      }
    }
  }
  else {
    if (unaff_R12B == '\0') {
      *(float *)(in_stack_00000040 + 10) = fVar30;
      fVar32 = fVar30;
    }
    if (unaff_R13B == '\0') {
      *(float *)((int64_t)in_stack_00000040 + 0x54) = fVar27;
      fVar35 = fVar27;
    }
  }
  puVar13 = (int32_t *)FUN_180128fd0(unaff_RBP + -0x18,in_stack_00000040,in_stack_00000040[10]);
  uVar9 = puVar13[1];
  *(int32_t *)(in_stack_00000040 + 10) = *puVar13;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x54) = uVar9;
  if ((*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') ||
     (((uint)unaff_R15D >> 0x18 & 1) != 0)) {
    pfVar15 = unaff_RBP + -0xe;
    *(int64_t *)(unaff_RBP + -0xe) = in_stack_00000040[10];
  }
  else {
    uVar14 = func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    pfVar15 = (float *)func_0x00018010e570(uVar14,unaff_RBP + -0x18);
  }
  cVar6 = cStack0000000000000048;
  in_stack_00000040[9] = *(int64_t *)pfVar15;
  if (*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') {
    if (fVar32 == 3.4028235e+38) {
      fVar27 = *(float *)(in_stack_00000040 + 0xb);
    }
    else {
      fVar27 = *(float *)(in_stack_00000040 + 10);
    }
    if (fVar35 == 3.4028235e+38) {
      fVar30 = *(float *)((int64_t)in_stack_00000040 + 0x5c);
    }
    else {
      fVar30 = *(float *)((int64_t)in_stack_00000040 + 0x54);
    }
    if ((((uint)unaff_R15D >> 0xe & 1) != 0) ||
       ((fVar30 < *(float *)((int64_t)in_stack_00000040 + 100) && (((uint)unaff_R15D & 8) == 0))))
    {
      cVar7 = '\x01';
    }
    else {
      cVar7 = '\0';
    }
    *(char *)((int64_t)in_stack_00000040 + 0xad) = cVar7;
    if (((uint)unaff_R15D >> 0xf & 1) == 0) {
      fVar32 = unaff_XMM13_Da;
      if (cVar7 != '\0') {
        fVar32 = *(float *)(unaff_RSI + 0x168c);
      }
      if ((fVar27 - fVar32 < *(float *)(in_stack_00000040 + 0xc)) &&
         (((uint)unaff_R15D & 0x808) == 0x800)) goto LAB_18012a70f;
      cVar7 = '\0';
    }
    else {
LAB_18012a70f:
      cVar7 = '\x01';
    }
    *(char *)((int64_t)in_stack_00000040 + 0xac) = cVar7;
    if ((cVar7 != '\0') && (*(char *)((int64_t)in_stack_00000040 + 0xad) == '\0')) {
      if ((*(float *)((int64_t)in_stack_00000040 + 100) <= fVar30 - *(float *)(unaff_RSI + 0x168c))
         || (((uint)unaff_R15D & 8) != 0)) {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
      *(int8_t *)((int64_t)in_stack_00000040 + 0xad) = uVar20;
    }
    fVar27 = unaff_XMM13_Da;
    if (*(char *)((int64_t)in_stack_00000040 + 0xac) != '\0') {
      fVar27 = *(float *)(unaff_RSI + 0x168c);
    }
    fVar30 = unaff_XMM13_Da;
    if (*(char *)((int64_t)in_stack_00000040 + 0xad) != '\0') {
      fVar30 = *(float *)(unaff_RSI + 0x168c);
    }
    *(float *)((int64_t)in_stack_00000040 + 0xa4) = fVar30;
    *(float *)(in_stack_00000040 + 0x15) = fVar27;
  }
  unaff_RBP[0xc] = -NAN;
  if (((cStack000000000000004a != '\0') &&
      (*(int32_t *)((int64_t)in_stack_00000040 + 0xd4) = 0xffffffff,
      ((uint)unaff_R15D >> 0x1a & 1) != 0)) && (cStack0000000000000048 == '\0')) {
    uVar9 = *(int32_t *)
             (*(int64_t *)(unaff_RSI + 0x1bc8) + -0xc +
             (int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30);
    *(int32_t *)(in_stack_00000040 + 8) =
         *(int32_t *)
          (*(int64_t *)(unaff_RSI + 0x1bc8) + -0x10 + (int64_t)*(int *)(unaff_RSI + 0x1bc0) * 0x30
          );
    *(int32_t *)((int64_t)in_stack_00000040 + 0x44) = uVar9;
  }
  fVar27 = (float)((uint)unaff_R15D & 0x1000000);
  unaff_RBP[0x16] = fVar27;
  if (fVar27 == 0.0) {
    fVar30 = unaff_RBP[-4];
  }
  else {
    lVar12 = *(int64_t *)(unaff_RBP + 8);
    puVar1 = (int16_t *)(lVar12 + 0x188);
    *(int16_t *)((int64_t)in_stack_00000040 + 0xba) = *puVar1;
    FUN_18011d9a0(puVar1,&stack0x00000040);
    fVar30 = unaff_RBP[-4];
    if (((((uint)unaff_R15D >> 0x1a & 1) == 0) && (cVar6 == '\0')) && (fVar30 != 3.761582e-37)) {
      in_stack_00000040[8] = *(int64_t *)(lVar12 + 0x100);
    }
  }
  if ((*(float *)(in_stack_00000040 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((int64_t)in_stack_00000040 + 0xdc) != 0)) {
    if (((uint)unaff_R15D >> 0x1c & 1) == 0) {
      if ((((((uint)unaff_R15D >> 0x1a & 1) != 0) && (cStack0000000000000048 == '\0')) &&
          (0 < (int)in_stack_00000068)) ||
         (((cVar6 = cStack0000000000000048, ((uint)unaff_R15D >> 0x19 & 1) != 0 &&
           (cStack0000000000000048 == '\0')) && (fVar30 != 3.761582e-37)))) {
        puVar13 = (int32_t *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
        uVar9 = puVar13[1];
        *(int32_t *)(in_stack_00000040 + 8) = *puVar13;
        *(int32_t *)((int64_t)in_stack_00000040 + 0x44) = uVar9;
        cVar6 = cStack0000000000000048;
      }
    }
    else {
      puVar13 = (int32_t *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
      uVar9 = puVar13[1];
      *(int32_t *)(in_stack_00000040 + 8) = *puVar13;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x44) = uVar9;
    }
  }
  else {
    fVar32 = *(float *)(in_stack_00000040 + 0x1e) -
             *(float *)(in_stack_00000040 + 0x1f) * *(float *)(in_stack_00000040 + 10);
    fVar30 = *(float *)((int64_t)in_stack_00000040 + 0xf4) -
             *(float *)((int64_t)in_stack_00000040 + 0x54) *
             *(float *)((int64_t)in_stack_00000040 + 0xfc);
    if (fVar32 <= *(float *)(unaff_RSI + 0x16b4)) {
      fVar32 = *(float *)(unaff_RSI + 0x16b4);
    }
    if (fVar30 <= *(float *)(unaff_RSI + 0x16b8)) {
      fVar30 = *(float *)(unaff_RSI + 0x16b8);
    }
    _fStack0000000000000070 = CONCAT44(fVar30,fVar32);
    func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,0);
  }
  if (*(int *)((int64_t)in_stack_00000040 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((int64_t)in_stack_00000040 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((int64_t)in_stack_00000040 + 0xae) == '\0') {
      if (*(char *)(in_stack_00000040[5] + 0x77) == '\0') {
        pfVar15 = (float *)func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 0x20);
        pfVar16 = (float *)func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x20);
        if (((*pfVar16 <= *pfVar15 && *pfVar15 != *pfVar16) ||
            (pfVar16[1] <= pfVar15[1] && pfVar15[1] != pfVar16[1])) ||
           ((pfVar15[2] < pfVar16[2] || (pfVar15[3] < pfVar16[3])))) {
          in_stack_00000020 = (uint64_t *)CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),4);
          lVar12 = FUN_180130830(in_stack_00000040,(int)in_stack_00000040[1],in_stack_00000040 + 8,
                                 in_stack_00000040 + 9,in_stack_00000020);
          in_stack_00000040[5] = lVar12;
          func_0x00018012fb50(in_stack_00000040,lVar12);
          if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
            uVar9 = 0x3f800000;
          }
          else {
            uVar9 = *(int32_t *)(in_stack_00000040[5] + 0x18);
          }
          *(int32_t *)((int64_t)in_stack_00000040 + 0x2dc) = uVar9;
          func_0x000180123e50(in_stack_00000040);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(in_stack_00000040[5] + 0x49) != '\0') {
      in_stack_00000040[8] = *(int64_t *)(in_stack_00000040[5] + 8);
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) != '\0') {
      lVar12 = *(int64_t *)(in_stack_00000040[5] + 0x10);
      in_stack_00000040[10] = lVar12;
      in_stack_00000040[9] = lVar12;
    }
    uVar21 = *(uint *)(in_stack_00000040[5] + 4) & 0xffffffdc;
    uVar23 = uVar21 | 0x20;
    if (((uint)unaff_R15D & 0x2000000) == 0) {
      uVar23 = uVar21;
    }
    if ((*(char *)(unaff_RSI + 0xc5) != '\0') || (((uint)unaff_R15D & 0x16000000) != 0)) {
      uVar23 = uVar23 | 2;
    }
    if ((*(char *)(unaff_RSI + 0xc6) != '\0') || (((uint)unaff_R15D & 0x16000000) != 0)) {
      uVar23 = uVar23 | 1;
    }
    iVar24 = (int)in_stack_00000040[3];
    if ((iVar24 == 0) && (iVar24 = 0x11111111, *(char *)(unaff_RSI + 199) != '\0')) {
      iVar24 = 0;
    }
    *(int *)(in_stack_00000040[5] + 0x28) = iVar24;
    uVar21 = *(uint *)((int64_t)in_stack_00000040 + 0x1c);
    if (uVar21 != 0) {
      uVar23 = uVar23 & ~uVar21 | *(uint *)(in_stack_00000040 + 4) & uVar21;
    }
    *(uint *)(in_stack_00000040[5] + 4) = uVar23 | 0x10;
  }
  func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 4);
  if ((((cVar6 == '\0') && (fVar27 == 0.0)) && (*(int *)((int64_t)in_stack_00000040 + 0xc4) < 1))
     && ((int)in_stack_00000040[0x19] < 1)) {
    func_0x00018011fc50(&stack0x00000060,unaff_RSI + 0x16ac,unaff_RSI + 0x16b4);
    if (*(char *)((int64_t)in_stack_00000040 + 0xae) == '\0') {
      if ((unaff_XMM13_Da < unaff_RBP[6] - unaff_RBP[4]) &&
         (unaff_XMM13_Da < unaff_RBP[7] - unaff_RBP[5])) {
        pfVar15 = unaff_RBP + 4;
LAB_18012ac57:
        func_0x000180129830(in_stack_00000040,pfVar15,&stack0x00000060);
      }
    }
    else if (0 < *(int *)(unaff_RSI + 0x1600)) {
      if (*(short *)(in_stack_00000040[5] + 0x74) != -1) {
        lVar22 = (int64_t)*(short *)(in_stack_00000040[5] + 0x74);
        pfVar15 = unaff_RBP + -8;
        lVar12 = *(int64_t *)(unaff_RSI + 0x1608);
        fVar30 = *(float *)(lVar12 + 0x10 + lVar22 * 0x24);
        fVar32 = *(float *)(lVar12 + 0x14 + lVar22 * 0x24);
        fVar35 = *(float *)(lVar12 + 0x18 + lVar22 * 0x24);
        unaff_RBP[-8] = fVar30;
        fVar31 = *(float *)(lVar12 + 0x1c + lVar22 * 0x24);
        unaff_RBP[-7] = fVar32;
        unaff_RBP[-6] = fVar30 + fVar35;
        unaff_RBP[-5] = fVar32 + fVar31;
        goto LAB_18012ac57;
      }
      _fStack0000000000000070 =
           CONCAT44(*(float *)(unaff_RSI + 0x16b0) +
                    *(float *)(**(int64_t **)(unaff_RSI + 0x1c70) + 0xc),
                    *(float *)(**(int64_t **)(unaff_RSI + 0x1c70) + 8) +
                    *(float *)(unaff_RSI + 0x16ac));
      func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,1);
    }
  }
  *(float *)(in_stack_00000040 + 8) = (float)(int)*(float *)(in_stack_00000040 + 8);
  *(float *)((int64_t)in_stack_00000040 + 0x44) =
       (float)(int)*(float *)((int64_t)in_stack_00000040 + 0x44);
  if (fVar27 == 0.0) {
    if (((uint)unaff_R15D & 0xc000000) == 0x4000000) {
      uVar9 = *(int32_t *)(unaff_RSI + 0x1654);
    }
    else {
      uVar9 = *(int32_t *)(unaff_RSI + 0x1634);
    }
  }
  else {
    uVar9 = *(int32_t *)(unaff_RSI + 0x164c);
  }
  uVar23 = 0;
  *(int32_t *)(in_stack_00000040 + 0xf) = uVar9;
  if (*(char *)((int64_t)in_stack_00000040 + 0xae) != '\0') {
    *(int32_t *)(in_stack_00000040 + 0xf) = 0;
  }
  if (((int)in_stack_00000040[0x80] == 0x7fffffff) ||
     (iVar24 = (int)in_stack_00000040[0x7e], iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = ((int)in_stack_00000040[0x80] + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)(in_stack_00000040 + 0x7f) = iVar24;
  if ((*(int *)((int64_t)in_stack_00000040 + 0x404) == 0x7fffffff) ||
     (iVar24 = *(int *)((int64_t)in_stack_00000040 + 0x3f4), iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = (*(int *)((int64_t)in_stack_00000040 + 0x404) + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)((int64_t)in_stack_00000040 + 0x3fc) = iVar24;
  pfVar15 = unaff_RBP + -0x18;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x3f4) = 0xffffffff;
  *(int32_t *)(in_stack_00000040 + 0x7e) = 0xffffffff;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x404) = 0x7fffffff;
  *(int32_t *)(in_stack_00000040 + 0x80) = 0x7fffffff;
  puVar13 = (int32_t *)FUN_1801293e0(pfVar15,in_stack_00000040,1);
  plVar18 = in_stack_00000040;
  in_stack_00000068 = (uint)pfVar15 & 0xffffff00;
  uVar9 = puVar13[1];
  *(int32_t *)((int64_t)in_stack_00000040 + 0x8c) = *puVar13;
  *(int32_t *)(in_stack_00000040 + 0x12) = uVar9;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x94) = 0x7f7fffff;
  *(int32_t *)(in_stack_00000040 + 0x13) = 0x7f7fffff;
  if ((cStack000000000000004a != '\0') && (((uint)unaff_R15D >> 0xc & 1) == 0)) {
    if (((uint)unaff_R15D >> 0x1a & 1) == 0) {
      if (((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0) || (fVar27 == 0.0)) {
        in_stack_00000068 = (uint)(((uint)unaff_R15D >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar21 = in_stack_00000068 >> 8;
      in_stack_00000068 = CONCAT31((int3)uVar21,1);
    }
  }
  fVar27 = *(float *)(unaff_RSI + 0x19f8);
  fVar30 = *(float *)(in_stack_00000040 + 0xf);
  cVar6 = *(char *)(unaff_RSI + 0xcb);
  unaff_RBP[0x20] = 0.0;
  unaff_RBP[0x21] = 0.0;
  unaff_RBP[0x22] = 0.0;
  unaff_RBP[0x23] = 0.0;
  fVar32 = fVar27 * 1.35;
  fVar27 = fVar27 * 0.2 + fVar30 + 1.0;
  if (fVar27 <= fVar32) {
    fVar27 = fVar32;
  }
  cVar7 = *(char *)((int64_t)in_stack_00000040 + 0xb2);
  fVar27 = (float)(int)fVar27;
  *(uint64_t *)(unaff_RBP + -0xe) = (uint64_t)(cVar6 != '\0') + 1;
  lVar12 = SYSTEM_DATA_MANAGER_A;
  in_stack_00000200 = unaff_XMM9_Qa;
  in_stack_00000208 = unaff_XMM9_Qb;
  if ((((cVar7 == '\0') && ((*(byte *)((int64_t)in_stack_00000040 + 0xc) & 0x42) == 0)) &&
      (*(int *)((int64_t)in_stack_00000040 + 0xc4) < 1)) &&
     (((int)in_stack_00000040[0x19] < 1 && ((char)in_stack_00000040[0x16] != '\0')))) {
    cVar6 = *(char *)(SYSTEM_DATA_MANAGER_A + 0xcb);
    fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 1.35;
    fVar30 = fVar30 + 1.0 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 0.2;
    unaff_RBP[2] = (float)(-(uint)(cVar6 != '\0') & 4);
    if (fVar30 <= fVar32) {
      fVar30 = fVar32;
    }
    fVar32 = (float)(int)((float)(int)fVar30 * 0.75);
    fVar30 = unaff_XMM13_Da;
    if (cVar6 != '\0') {
      fVar30 = 4.0;
    }
    _fStack0000000000000070 = 0x7f7fffff7f7fffff;
    fStack0000000000000060 = 3.4028235e+38;
    fStack0000000000000064 = 3.4028235e+38;
    FUN_18012e1b0(&rendering_buffer_2464_ptr);
    lVar22 = _fStack0000000000000050;
    pfVar15 = (float *)0x180bf66e8;
    lVar28 = 0;
    do {
      uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      _fStack0000000000000050 =
           CONCAT44(*(float *)((int64_t)plVar18 + 0x4c) + *(float *)((int64_t)plVar18 + 0x44),
                    *(float *)(plVar18 + 8) + *(float *)(plVar18 + 9));
      func_0x00018011fcd0(unaff_RBP + 0xe,plVar18 + 8,&stack0x00000050,pfVar15 + -2);
      fVar33 = fVar32 * *pfVar15 + unaff_RBP[0xe];
      fVar35 = pfVar15[1];
      fVar31 = fVar32 * pfVar15[1] + unaff_RBP[0xf];
      fVar34 = unaff_RBP[0xe] - fVar30 * *pfVar15;
      unaff_RBP[-0x1a] = fVar33;
      fVar35 = unaff_RBP[0xf] - fVar30 * fVar35;
      unaff_RBP[-0x19] = fVar31;
      unaff_RBP[-0x1c] = fVar34;
      unaff_RBP[-0x1b] = fVar35;
      if (fVar33 < fVar34) {
        unaff_RBP[-0x1c] = fVar33;
        unaff_RBP[-0x1a] = fVar34;
      }
      if (fVar31 < fVar35) {
        unaff_RBP[-0x1b] = fVar31;
        unaff_RBP[-0x19] = fVar35;
      }
      uVar8 = func_0x000180123c50(plVar18,(int64_t)(int)uVar23);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,0x2020);
      FUN_18010f170(unaff_RBP + -0x1c,uVar8,&stack0x00000048,(int64_t)&stack0x00000048 + 1,
                    in_stack_00000020);
      if (((cStack0000000000000048 == '\0') && (cStack0000000000000049 == '\0')) ||
         (*(uint *)(lVar12 + 0x1dcc) = (~uVar23 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
        if (uVar23 == 0) goto LAB_18012b0c8;
        if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
        if (cStack0000000000000048 != '\0') goto LAB_18012b1a3;
      }
      else {
        if ((*(char *)(lVar12 + 0x415) == '\0') || (uVar23 != 0)) {
          fVar35 = *pfVar15;
          fVar31 = pfVar15[1];
          unaff_RBP[0x10] = fVar35 * -fVar32;
          unaff_RBP[0x11] = fVar31 * -fVar32;
          unaff_RBP[0x12] = fVar30 * fVar35;
          unaff_RBP[0x13] = fVar30 * fVar31;
          pfVar16 = (float *)func_0x00018011fcd0(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                                 pfVar15 + -2);
          fVar35 = *(float *)(lVar12 + 0x118);
          fVar31 = *(float *)(lVar12 + 0x1b48);
          fVar33 = *pfVar16;
          in_stack_00000020 = (uint64_t *)&stack0x00000060;
          unaff_RBP[0x15] = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + pfVar16[1];
          unaff_RBP[0x14] = (fVar35 - fVar31) + fVar33;
          FUN_1801295b0(plVar18,unaff_RBP + 0x14,pfVar15 + -2,&stack0x00000070,in_stack_00000020);
          goto LAB_18012b18f;
        }
        pfVar16 = (float *)FUN_180128fd0(unaff_RBP + -0x14,plVar18,lVar22);
        fStack0000000000000060 = *pfVar16;
        fStack0000000000000064 = pfVar16[1];
        func_0x000180123e90(0,0);
LAB_18012b0c8:
        if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
          cVar6 = (cStack0000000000000048 != '\0') + '\x1e';
        }
        else {
LAB_18012b0d0:
          cVar6 = ' ';
        }
        fVar35 = (float)FUN_180121ed0(cVar6);
        unaff_RBP[lVar28 + 0x20] = fVar35;
      }
      uVar23 = uVar23 + 1;
      lVar28 = lVar28 + 1;
      pfVar15 = pfVar15 + 6;
    } while (lVar28 < *(int64_t *)(unaff_RBP + -0xe));
    fVar30 = unaff_RBP[2];
    unaff_R15D = unaff_RBP[-10];
    fVar35 = 0.0;
    if (fVar30 != 0.0) {
      do {
        uVar14 = CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),0x40800000);
        FUN_1801296e0(unaff_RBP + -0x20,plVar18,fVar35,fVar32,uVar14);
        uVar8 = (int32_t)((uint64_t)uVar14 >> 0x20);
        uVar9 = func_0x000180123c50(plVar18,(int64_t)((int)fVar35 + 4));
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar8,0x20);
        FUN_18010f170(unaff_RBP + -0x20,uVar9,(int64_t)&stack0x00000058 + 1,&stack0x00000058,
                      in_stack_00000020);
        if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar12 + 0x1b24))) ||
            (cStack0000000000000058 != '\0')) &&
           (*(uint *)(lVar12 + 0x1dcc) = ((uint)fVar35 & 1) + 3, cStack0000000000000058 != '\0')) {
          *(int64_t *)(unaff_RBP + -10) = plVar18[8];
          unaff_RBP[0xc] = fVar35;
          _fStack0000000000000050 = 0;
          if (fVar35 == 0.0) {
LAB_18012b293:
            unaff_RBP[-9] = (*(float *)(lVar12 + 0x11c) - *(float *)(lVar12 + 0x1b4c)) + 4.0;
          }
          else if (fVar35 == 1.4013e-45) {
            _fStack0000000000000050 = 0x3f800000;
LAB_18012b2d2:
            unaff_RBP[-10] = (*(float *)(lVar12 + 0x118) - *(float *)(lVar12 + 0x1b48)) + 4.0;
          }
          else {
            if (fVar35 == 2.8026e-45) {
              _fStack0000000000000050 = 0x3f80000000000000;
              goto LAB_18012b293;
            }
            if (fVar35 == 4.2039e-45) goto LAB_18012b2d2;
          }
          in_stack_00000020 = (uint64_t *)&stack0x00000060;
          FUN_1801295b0(plVar18,unaff_RBP + -10,&stack0x00000050,&stack0x00000070,in_stack_00000020)
          ;
        }
        fVar35 = (float)((int)fVar35 + 1);
      } while ((int)fVar35 < (int)fVar30);
    }
    piVar2 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar2 = *piVar2 + -1;
    if ((*(int64_t *)(lVar12 + 0x1cd8) != 0) &&
       (*(int64_t **)(*(int64_t *)(lVar12 + 0x1cd8) + 0x3a0) == plVar18)) {
      iVar24 = *(int *)(lVar12 + 0x1cc0);
      fVar30 = unaff_XMM13_Da;
      fVar32 = unaff_XMM13_Da;
      if (iVar24 == 3) {
        if (*(char *)(lVar12 + 0x135) == '\0') goto LAB_18012b465;
        in_stack_00000020 =
             (uint64_t *)CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),unaff_XMM13_Da);
        pfVar15 = (float *)FUN_180131aa0(unaff_RBP + -0x14,1,0);
        fVar30 = *pfVar15;
        fVar32 = pfVar15[1];
        iVar24 = *(int *)(lVar12 + 0x1cc0);
      }
      if (iVar24 == 4) {
        in_stack_00000020 =
             (uint64_t *)CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),unaff_XMM13_Da);
        pfVar15 = (float *)FUN_180131aa0(unaff_RBP + 0x18,2,0);
        fVar30 = *pfVar15;
        fVar32 = pfVar15[1];
      }
      if ((fVar30 != unaff_XMM13_Da) || (fVar32 != unaff_XMM13_Da)) {
        fVar35 = *(float *)(lVar12 + 0xbc);
        if (*(float *)(lVar12 + 0xb8) <= *(float *)(lVar12 + 0xbc)) {
          fVar35 = *(float *)(lVar12 + 0xb8);
        }
        *(int8_t *)(lVar12 + 0x1cf8) = 0;
        *(int8_t *)(lVar12 + 0x1d07) = 1;
        fVar31 = (float)(int)(fVar35 * *(float *)(lVar12 + 0x18) * 600.0);
        fVar35 = (float)FUN_180121ed0(0x20);
        unaff_RBP[0x20] = fVar35;
        pfVar15 = (float *)FUN_180128fd0(unaff_RBP + -0x18,plVar18,
                                         CONCAT44(fVar32 * fVar31 +
                                                  *(float *)((int64_t)plVar18 + 0x54),
                                                  fVar30 * fVar31 + *(float *)(plVar18 + 10)));
        fStack0000000000000060 = *pfVar15;
        fStack0000000000000064 = pfVar15[1];
      }
    }
LAB_18012b465:
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if ((fStack0000000000000060 != 3.4028235e+38) &&
       ((fStack0000000000000060 != *(float *)(plVar18 + 10) ||
        (fStack0000000000000064 != *(float *)((int64_t)plVar18 + 0x54))))) {
      *(float *)(plVar18 + 10) = fStack0000000000000060;
      *(float *)((int64_t)plVar18 + 0x54) = fStack0000000000000064;
      if (((*(uint *)((int64_t)plVar18 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar12 + 0x2e04) <= unaff_XMM13_Da)) {
        *(int32_t *)(lVar12 + 0x2e04) = *(int32_t *)(lVar12 + 0x1c);
      }
    }
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if (fStack0000000000000070 != 3.4028235e+38) {
      *(float *)(plVar18 + 8) = (float)(int)fStack0000000000000070;
      *(float *)((int64_t)plVar18 + 0x44) = (float)(int)fStack0000000000000074;
      if (((*(uint *)((int64_t)plVar18 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar12 + 0x2e04) <= unaff_XMM13_Da)) {
        *(int32_t *)(lVar12 + 0x2e04) = *(int32_t *)(lVar12 + 0x1c);
      }
    }
    plVar18[9] = plVar18[10];
  }
  pfVar15 = (float *)0x180bf66e8;
  if (*(char *)((int64_t)in_stack_00000040 + 0xae) != '\0') {
    if (*(char *)(in_stack_00000040[5] + 0x49) == '\0') {
      *(int64_t *)(in_stack_00000040[5] + 8) = in_stack_00000040[8];
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) == '\0') {
      *(int64_t *)(in_stack_00000040[5] + 0x10) = in_stack_00000040[9];
    }
    puVar17 = (uint64_t *)func_0x00018011feb0(in_stack_00000040[5]);
    uVar14 = puVar17[1];
    *(uint64_t *)(unaff_RBP + 4) = *puVar17;
    *(uint64_t *)(unaff_RBP + 6) = uVar14;
  }
  *(uint64_t *)((int64_t)in_stack_00000040 + 0x34) = *(uint64_t *)(in_stack_00000040[5] + 8);
  if ((*(float *)(in_stack_00000040 + 9) <= unaff_XMM13_Da) || (((uint)unaff_R15D & 0x2000040) != 0)
     ) {
    fVar30 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar30 = *(float *)(in_stack_00000040 + 9) * 0.65;
  }
  *(float *)((int64_t)in_stack_00000040 + 0x284) = (float)(int)fVar30;
  FUN_180291500(in_stack_00000040[0x5d]);
  *(uint *)(in_stack_00000040[0x5d] + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)(*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar12 = in_stack_00000040[0x5d];
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(int64_t *)(*(int64_t *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  FUN_18011d9a0(lVar12 + 0x70,unaff_RBP + -0x14);
  FUN_180291a50(lVar12);
  if ((((uint)unaff_R15D & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar16 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x228);
    pfVar25 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar16 = unaff_RBP + 4;
    pfVar25 = unaff_RBP + 6;
  }
  FUN_180126d10(pfVar16,pfVar25);
  if (((((uint)unaff_R15D >> 0x1b & 1) == 0) ||
      (plVar18 = (int64_t *)func_0x00018012ea90(), in_stack_00000040 != plVar18)) ||
     (0 < *(int *)((int64_t)in_stack_00000040 + 0xdc))) {
    bVar26 = 0;
  }
  else {
    bVar26 = 1;
  }
  uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  lVar12 = *(int64_t *)(unaff_RSI + 0x1ce0);
  if ((lVar12 == 0) ||
     ((in_stack_00000040 != *(int64_t **)(lVar12 + 0x3a0) &&
      (((plVar18 = *(int64_t **)(unaff_RSI + 0x1ce8), plVar18 == (int64_t *)0x0 ||
        (in_stack_00000040 != plVar18)) || (plVar18[5] == *(int64_t *)(lVar12 + 0x28))))))) {
    bVar29 = false;
  }
  else {
    bVar29 = true;
  }
  if ((bVar26 != 0) || (bVar29)) {
    fVar30 = *(float *)(unaff_RSI + 0x1dc8);
    fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    pfVar16 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar26 + 0x3a) * 0x10);
    fVar35 = pfVar16[1];
    fVar31 = pfVar16[2];
    fVar33 = pfVar16[3];
    unaff_RBP[-0x20] = *pfVar16;
    unaff_RBP[-0x1f] = fVar35;
    unaff_RBP[-0x1e] = fVar31;
    unaff_RBP[-0x1d] = fVar33;
    unaff_RBP[-0x1d] = fVar33 * fVar30 * fVar32;
    uVar8 = func_0x000180121e20(unaff_RBP + -0x20);
    in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,unaff_XMM13_Da);
    FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + 4,unaff_RBP + 6,uVar8,in_stack_00000020);
    if ((bVar29) && (in_stack_00000040 == *(int64_t **)(unaff_RSI + 0x1ce0))) {
      func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e610(unaff_RBP + -0x18);
      uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar30 = *(float *)(unaff_RSI + 0x1cf4);
        lVar12 = in_stack_00000040[0x5d];
        uVar8 = *(int32_t *)(unaff_RSI + 0x1634);
        fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
        fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
        fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
        fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
        unaff_RBP[-0x1f] = fVar35;
        unaff_RBP[-0x1e] = fVar31;
        unaff_RBP[-0x1d] = fVar33;
        unaff_RBP[-0x1d] = fVar33 * fVar30 * 0.25 * fVar32;
        uVar10 = func_0x000180121e20(unaff_RBP + -0x20);
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,uVar8);
        FUN_180293f50(lVar12,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar10,in_stack_00000020);
      }
    }
  }
  uVar23 = in_stack_00000068;
  lVar12 = *(int64_t *)(unaff_RSI + 0x1cd8);
  fVar30 = *(float *)(in_stack_00000040 + 0xf);
  fVar32 = *(float *)((int64_t)in_stack_00000040 + 0x7c);
  if (lVar12 == 0) {
    lVar12 = *(int64_t *)(unaff_RSI + 0x1c98);
  }
  if (((char)in_stack_00000068 == '\0') &&
     ((lVar12 == 0 ||
      ((in_stack_00000040[0x76] != *(int64_t *)(lVar12 + 0x3b0) &&
       ((in_stack_00000040[0x81] == 0 || (in_stack_00000040[0x81] != *(int64_t *)(lVar12 + 0x408)))
       )))))) {
    bVar26 = 0;
  }
  else {
    bVar26 = 1;
  }
  func_0x000180120c80(in_stack_00000040,unaff_RBP + -2);
  plVar18 = in_stack_00000040;
  uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  if (*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)unaff_R15D & 0x80);
    if ((float)((uint)unaff_R15D & 0x80) == 0.0) {
      bVar29 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar24 = strcmp(&rendering_buffer_2304_ptr,unaff_RSI + 0x1df8), iVar24 == 0)) &&
           (bVar29 = false, (int64_t *)**(uint64_t **)(unaff_RSI + 0x1de0) == plVar18)))))) {
        bVar29 = true;
      }
      lVar12 = SYSTEM_DATA_MANAGER_A;
      if (((uint)unaff_R15D & 0x6000000) == 0) {
        lVar22 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar22 = 0xd0;
        }
      }
      else {
        lVar22 = 0xe0;
      }
      pfVar16 = (float *)(lVar22 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fVar35 = pfVar16[1];
      fVar31 = pfVar16[2];
      fVar33 = pfVar16[3];
      unaff_RBP[-0x20] = *pfVar16;
      unaff_RBP[-0x1f] = fVar35;
      unaff_RBP[-0x1e] = fVar31;
      unaff_RBP[-0x1d] = fVar33;
      unaff_RBP[-0x1d] = fVar33 * *(float *)(lVar12 + 0x1628);
      uVar23 = func_0x000180121e20(unaff_RBP + -0x20);
      if (*(char *)((int64_t)in_stack_00000040 + 0xae) == '\0') {
        fVar35 = 1.0;
        if (*(int *)(unaff_RSI + 0x1be8) != 0) {
          fVar35 = *(float *)(unaff_RSI + 0x1c38);
        }
        if (bVar29) {
          fVar35 = fVar35 * 0.5;
        }
        if (fVar35 != 1.0) {
          fVar31 = unaff_XMM13_Da;
          if ((unaff_XMM13_Da <= fVar35) && (fVar31 = fVar35, 1.0 <= fVar35)) {
            fVar31 = 1.0;
          }
          uVar23 = (int)(fVar31 * 255.0 + 0.5) << 0x18 | uVar23 & 0xffffff;
        }
      }
      else {
        uVar23 = uVar23 | 0xff000000;
        if (bVar29) {
          *(float *)(in_stack_00000040[5] + 0x6c) = *(float *)(in_stack_00000040[5] + 0x6c) * 0.5;
        }
      }
      fVar35 = *(float *)(in_stack_00000040 + 9);
      fVar31 = *(float *)(in_stack_00000040 + 8);
      lVar12 = in_stack_00000040[0x5d];
      unaff_RBP[0x15] =
           *(float *)((int64_t)in_stack_00000040 + 0x4c) +
           *(float *)((int64_t)in_stack_00000040 + 0x44);
      unaff_RBP[0x14] = fVar35 + fVar31;
      fVar31 = (float)func_0x00018010e760(in_stack_00000040);
      fVar35 = *(float *)((int64_t)in_stack_00000040 + 0x44);
      unaff_RBP[0x12] = *(float *)(in_stack_00000040 + 8);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,fVar30);
      unaff_RBP[0x13] = fVar31 + fVar35;
      FUN_180293f50(lVar12,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar23,in_stack_00000020);
    }
    uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    bVar29 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if ((((uint)unaff_R15D & 1) == 0) && ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)
       ) {
      pfVar16 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar26 + 0x14) * 0x10);
      fVar35 = pfVar16[1];
      fVar31 = pfVar16[2];
      fVar33 = pfVar16[3];
      unaff_RBP[-0x20] = *pfVar16;
      unaff_RBP[-0x1f] = fVar35;
      unaff_RBP[-0x1e] = fVar31;
      unaff_RBP[-0x1d] = fVar33;
      unaff_RBP[-0x1d] = fVar33 * *(float *)(lVar12 + 0x1628);
      func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,fVar30);
      FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + -2);
    }
    uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    if (((uint)unaff_R15D >> 10 & 1) != 0) {
      func_0x00018010e7f0(in_stack_00000040,unaff_RBP + -8);
      uVar14 = func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e690(unaff_RBP + -8,uVar14);
      lVar22 = SYSTEM_DATA_MANAGER_A;
      lVar12 = in_stack_00000040[0x5d];
      fVar35 = unaff_XMM13_Da;
      if (((uint)unaff_R15D & 1) != 0) {
        fVar35 = fVar30;
      }
      fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      unaff_RBP[-0x1f] = fVar31;
      unaff_RBP[-0x1e] = fVar33;
      unaff_RBP[-0x1d] = fVar34;
      unaff_RBP[-0x1d] = fVar34 * *(float *)(lVar22 + 0x1628);
      uVar8 = func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,fVar35);
      FUN_180293f50(lVar12,unaff_RBP + -8,unaff_RBP + -6,uVar8,in_stack_00000020);
      lVar12 = SYSTEM_DATA_MANAGER_A;
      uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      fVar35 = *(float *)(unaff_RSI + 0x1668);
      if ((unaff_XMM13_Da < fVar35) &&
         (unaff_RBP[-5] <
          *(float *)((int64_t)in_stack_00000040 + 0x4c) +
          *(float *)((int64_t)in_stack_00000040 + 0x44))) {
        lVar22 = in_stack_00000040[0x5d];
        fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fVar34 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        unaff_RBP[-0x1f] = fVar31;
        unaff_RBP[-0x1e] = fVar33;
        unaff_RBP[-0x1d] = fVar34;
        unaff_RBP[-0x1d] = fVar34 * *(float *)(lVar12 + 0x1628);
        uVar8 = func_0x000180121e20(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,fVar35);
        FUN_180293d20(lVar22,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar8,in_stack_00000020);
      }
    }
    uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    lVar12 = in_stack_00000040[0x81];
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0xa0) & 0x40) != 0)) {
      fVar35 = *(float *)(lVar12 + 0x38);
      fVar31 = *(float *)(unaff_RSI + 0x19f8);
      fVar33 = *(float *)(lVar12 + 0x3c);
      _fStack0000000000000050 = *(int64_t *)(lVar12 + 0x38);
      unaff_RBP[-0x20] = fVar35;
      unaff_RBP[-0x1f] = fVar33;
      fVar34 = (float)(int)(fVar31 * 0.7);
      fVar31 = (float)(int)(fVar31 * 0.55);
      unaff_RBP[-0x1e] = fVar35 + fVar31;
      unaff_RBP[-0x1d] = fVar33 + fVar31;
      uVar8 = FUN_180123c00(in_stack_00000040,&rendering_buffer_2496_ptr,0);
      uVar14 = CONCAT44(uVar9,0x20);
      cVar6 = FUN_18010f170(unaff_RBP + -0x20,uVar8,(int64_t)&stack0x00000058 + 1,&stack0x00000058,
                            uVar14);
      uVar9 = (int32_t)((uint64_t)uVar14 >> 0x20);
      if (cVar6 != '\0') {
        *(byte *)(in_stack_00000040[0x81] + 0xa1) = *(byte *)(in_stack_00000040[0x81] + 0xa1) | 0x10
        ;
      }
      lVar12 = SYSTEM_DATA_MANAGER_A;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(in_stack_00000040[0x81] + 0xa0) & 8) == 0 || (cStack0000000000000059 != '\0'))
         )) {
        lVar22 = (uint64_t)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar22 = 0x17;
      }
      pfVar16 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar22 + 10) * 0x10);
      fVar35 = pfVar16[1];
      fVar31 = pfVar16[2];
      fVar33 = pfVar16[3];
      unaff_RBP[-0x14] = *pfVar16;
      unaff_RBP[-0x13] = fVar35;
      unaff_RBP[-0x12] = fVar31;
      unaff_RBP[-0x11] = fVar33;
      unaff_RBP[-0x11] = fVar33 * *(float *)(lVar12 + 0x1628);
      uVar8 = func_0x000180121e20(unaff_RBP + -0x14);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,uVar8);
      lVar12 = in_stack_00000040[0x5d];
      unaff_RBP[0xe] = fStack0000000000000050;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar34;
      _fStack0000000000000070 = CONCAT44(fStack0000000000000054,fStack0000000000000050 + fVar34);
      FUN_1802940f0(lVar12,&stack0x00000050,&stack0x00000070,unaff_RBP + 0xe,in_stack_00000020);
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xac) != '\0') {
      FUN_180110540(0);
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xad) != '\0') {
      FUN_180110540(1);
    }
    uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    if (((uint)unaff_R15D & 2) == 0) {
      lVar12 = 0;
      do {
        uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        fVar35 = *(float *)(in_stack_00000040 + 8);
        fVar31 = *(float *)((int64_t)in_stack_00000040 + 0x44);
        lVar22 = in_stack_00000040[0x5d];
        fVar35 = ((fVar35 + *(float *)(in_stack_00000040 + 9)) - fVar35) * pfVar15[-2] + fVar35;
        fVar31 = ((fVar31 + *(float *)((int64_t)in_stack_00000040 + 0x4c)) - fVar31) * pfVar15[-1]
                 + fVar31;
        if (bVar29) {
          unaff_RBP[2] = fVar32;
          unaff_RBP[3] = fVar27;
          fVar33 = fVar32;
        }
        else {
          fStack0000000000000064 = fVar32;
          fStack0000000000000060 = fVar27;
          fVar33 = fVar27;
        }
        pfVar16 = (float *)((int64_t)&stack0x00000060 + 4);
        if (bVar29) {
          pfVar16 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar33 * *pfVar15 + fVar35;
        unaff_RBP[-3] = *pfVar16 * pfVar15[1] + fVar31;
        FUN_18011d9a0(lVar22 + 0x80,unaff_RBP + -4);
        lVar22 = in_stack_00000040[0x5d];
        if (bVar29) {
          unaff_RBP[0x1c] = fVar27;
          unaff_RBP[0x1d] = fVar32;
          fVar33 = fVar27;
        }
        else {
          unaff_RBP[-0x1c] = fVar32;
          unaff_RBP[-0x1b] = fVar27;
          fVar33 = fVar32;
        }
        pfVar16 = unaff_RBP + -0x1b;
        if (bVar29) {
          pfVar16 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar33 * *pfVar15 + fVar35;
        unaff_RBP[0x19] = *pfVar16 * pfVar15[1] + fVar31;
        FUN_18011d9a0(lVar22 + 0x80,unaff_RBP + 0x18);
        fVar33 = pfVar15[1];
        lVar22 = in_stack_00000040[0x5d];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar9,pfVar15[3]);
        unaff_RBP[-0x14] = (fVar32 + fVar30) * *pfVar15 + fVar35;
        unaff_RBP[-0x13] = (fVar32 + fVar30) * fVar33 + fVar31;
        FUN_180293730(lVar22,unaff_RBP + -0x14);
        lVar22 = in_stack_00000040[0x5d];
        FUN_180293190(lVar22,*(uint64_t *)(lVar22 + 0x88),*(int32_t *)(lVar22 + 0x80),
                      unaff_RBP[lVar12 + 0x20],in_stack_00000020);
        uVar9 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        bVar29 = (bool)(bVar29 ^ 1);
        *(int32_t *)(lVar22 + 0x80) = 0;
        lVar12 = lVar12 + 1;
        pfVar15 = pfVar15 + 6;
      } while (lVar12 < *(int64_t *)(unaff_RBP + -0xe));
    }
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if ((unaff_XMM13_Da < fVar32) && (unaff_RBP[-10] == 0.0)) {
      lVar22 = in_stack_00000040[0x5d];
      fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar31 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x21] = fVar35;
      unaff_RBP[0x22] = fVar31;
      unaff_RBP[0x23] = fVar33;
      unaff_RBP[0x23] = fVar33 * *(float *)(lVar12 + 0x1628);
      uVar23 = func_0x000180121e20(unaff_RBP + 0x20);
      fVar35 = *(float *)((int64_t)in_stack_00000040 + 0x44);
      fVar31 = *(float *)(in_stack_00000040 + 8) + *(float *)(in_stack_00000040 + 9);
      fVar33 = fVar35 + *(float *)((int64_t)in_stack_00000040 + 0x4c);
      if ((uVar23 & 0xff000000) != 0) {
        bVar26 = *(byte *)(lVar22 + 0x30);
        uVar14 = CONCAT44(uVar9,0xf);
        unaff_RBP[-0x14] = *(float *)(in_stack_00000040 + 8) + 0.5;
        unaff_RBP[-0x13] = fVar35 + 0.5;
        if ((bVar26 & 1) == 0) {
          fVar31 = fVar31 - 0.49;
          fVar33 = fVar33 - 0.49;
        }
        else {
          fVar31 = fVar31 - 0.5;
          fVar33 = fVar33 - 0.5;
        }
        unaff_RBP[-0xe] = fVar31;
        unaff_RBP[-0xd] = fVar33;
        FUN_1802939e0(lVar22,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar30,uVar14);
        uVar9 = (int32_t)((uint64_t)uVar14 >> 0x20);
        FUN_18010e4e0(lVar22,uVar23,1,fVar32);
      }
    }
    if (unaff_RBP[0xc] != -NAN) {
      uVar14 = CONCAT44(uVar9,unaff_XMM13_Da);
      FUN_1801296e0(unaff_RBP + -0x14,in_stack_00000040,unaff_RBP[0xc],fVar27,uVar14);
      lVar22 = SYSTEM_DATA_MANAGER_A;
      uVar8 = (int32_t)((uint64_t)uVar14 >> 0x20);
      lVar12 = in_stack_00000040[0x5d];
      fVar27 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x189c);
      fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      unaff_RBP[-0xd] = fVar27;
      unaff_RBP[-0xc] = fVar30;
      unaff_RBP[-0xb] = fVar35;
      unaff_RBP[-0xb] = fVar35 * *(float *)(lVar22 + 0x1628);
      uVar9 = func_0x000180121e20(unaff_RBP + -0xe);
      if (fVar32 <= 1.0) {
        fVar32 = 1.0;
      }
      uVar14 = CONCAT44(uVar8,fVar32);
      FUN_180293d20(lVar12,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar9,uVar14);
      uVar9 = (int32_t)((uint64_t)uVar14 >> 0x20);
    }
    lVar12 = SYSTEM_DATA_MANAGER_A;
    fVar27 = *(float *)(unaff_RSI + 0x1668);
    uVar23 = in_stack_00000068;
    if (((unaff_XMM13_Da < fVar27) && (((uint)unaff_R15D & 1) == 0)) &&
       ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)) {
      lVar22 = in_stack_00000040[0x5d];
      fVar30 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x18] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x19] = fVar30;
      unaff_RBP[0x1a] = fVar32;
      unaff_RBP[0x1b] = fVar35;
      unaff_RBP[0x1b] = fVar35 * *(float *)(lVar12 + 0x1628);
      uVar8 = func_0x000180121e20(unaff_RBP + 0x18);
      fVar30 = *(float *)(unaff_RSI + 0x1638);
      uVar14 = CONCAT44(uVar9,fVar27);
      unaff_RBP[-0xe] = *unaff_RBP - fVar30;
      unaff_RBP[-0xd] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x13] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar30;
      FUN_180293d20(lVar22,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar8,uVar14);
      uVar9 = (int32_t)((uint64_t)uVar14 >> 0x20);
      uVar23 = in_stack_00000068;
    }
  }
  else {
    uVar8 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)((int64_t)in_stack_00000040 + 0x7c);
    lVar12 = SYSTEM_DATA_MANAGER_A;
    if ((bVar26 == 0) || (lVar22 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar22 = 0x160;
    }
    pfVar15 = (float *)(lVar22 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    fVar27 = pfVar15[1];
    fVar32 = pfVar15[2];
    fVar35 = pfVar15[3];
    unaff_RBP[0x20] = *pfVar15;
    unaff_RBP[0x21] = fVar27;
    unaff_RBP[0x22] = fVar32;
    unaff_RBP[0x23] = fVar35;
    unaff_RBP[0x23] = fVar35 * *(float *)(lVar12 + 0x1628);
    uVar10 = func_0x000180121e20(unaff_RBP + 0x20);
    uVar14 = CONCAT44(uVar9,fVar30);
    FUN_180122960(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar10,1,uVar14);
    uVar9 = (int32_t)((uint64_t)uVar14 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar8;
  }
  pfVar15 = (float *)(unaff_RSI + 0x1668);
  in_stack_00000040[0xb] = in_stack_00000040[10];
  *(float *)(in_stack_00000040 + 0x4e) =
       (*(float *)(in_stack_00000040 + 8) - *(float *)((int64_t)in_stack_00000040 + 0x8c)) +
       *(float *)(in_stack_00000040 + 0xe);
  fVar35 = (float)func_0x00018010e760(in_stack_00000040);
  fVar27 = *(float *)((int64_t)in_stack_00000040 + 0x44);
  fVar30 = *(float *)(in_stack_00000040 + 0x12);
  fVar32 = *(float *)((int64_t)in_stack_00000040 + 0x74);
  fVar31 = (float)func_0x00018010e7a0();
  *(float *)((int64_t)in_stack_00000040 + 0x274) = fVar31 + fVar35 + (fVar27 - fVar30) + fVar32;
  fVar27 = *(float *)(in_stack_00000040 + 0xd);
  if (fVar27 == unaff_XMM13_Da) {
    fVar27 = *(float *)(in_stack_00000040 + 9) - *(float *)((int64_t)in_stack_00000040 + 0xa4);
  }
  *(float *)(in_stack_00000040 + 0x4f) =
       ((*(float *)(in_stack_00000040 + 8) - *(float *)((int64_t)in_stack_00000040 + 0x8c)) -
       *(float *)(in_stack_00000040 + 0xe)) + fVar27;
  fVar27 = *(float *)((int64_t)in_stack_00000040 + 0x6c);
  if (fVar27 == unaff_XMM13_Da) {
    fVar27 = *(float *)((int64_t)in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0x15);
  }
  *(float *)((int64_t)in_stack_00000040 + 0x27c) =
       ((*(float *)((int64_t)in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x12)) -
       *(float *)((int64_t)in_stack_00000040 + 0x74)) + fVar27;
  *(float *)((int64_t)in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0xe) - *(float *)((int64_t)in_stack_00000040 + 0x8c);
  uVar10 = 0;
  *(int32_t *)(in_stack_00000040 + 0x41) = 0;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x20c) = 0;
  func_0x00018010e7a0(in_stack_00000040);
  func_0x00018010e760(in_stack_00000040);
  uVar14 = func_0x00018004ba20(unaff_RBP + -0x18,
                               *(float *)((int64_t)in_stack_00000040 + 0x20c) +
                               *(float *)((int64_t)in_stack_00000040 + 0x204));
  puVar13 = (int32_t *)func_0x00018011fbf0(unaff_RBP + -0xe,in_stack_00000040 + 8,uVar14);
  uVar8 = puVar13[1];
  *(int32_t *)(in_stack_00000040 + 0x22) = *puVar13;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x114) = uVar8;
  in_stack_00000040[0x20] = in_stack_00000040[0x22];
  in_stack_00000040[0x21] = in_stack_00000040[0x22];
  in_stack_00000040[0x23] = in_stack_00000040[0x22];
  puVar13 = (int32_t *)func_0x00018004ba20(unaff_RBP + -0x18);
  uVar8 = puVar13[1];
  *(int32_t *)((int64_t)in_stack_00000040 + 300) = *puVar13;
  *(int32_t *)(in_stack_00000040 + 0x26) = uVar8;
  in_stack_00000040[0x24] = *(int64_t *)((int64_t)in_stack_00000040 + 300);
  *(int32_t *)((int64_t)in_stack_00000040 + 0x134) = 0;
  *(int32_t *)(in_stack_00000040 + 0x25) = 0;
  *(int8_t *)((int64_t)in_stack_00000040 + 0x17c) = 0;
  fVar27 = (float)func_0x0001801293c0(in_stack_00000040);
  *(bool *)((int64_t)in_stack_00000040 + 0x17d) = unaff_XMM13_Da < fVar27;
  *(int *)((int64_t)in_stack_00000040 + 0x174) = (int)in_stack_00000040[0x2f];
  *(int32_t *)(in_stack_00000040 + 0x2f) = 0;
  *(int8_t *)((int64_t)in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x27) = *(float *)((int64_t)in_stack_00000040 + 0x104) - 9999.0;
  FUN_18013e200(in_stack_00000040 + 0x31,0);
  lVar12 = *(int64_t *)(unaff_RBP + 8);
  *(int32_t *)(in_stack_00000040 + 0x34) = 1;
  if (lVar12 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = *(int32_t *)(lVar12 + 0x1a0);
  }
  *(int32_t *)((int64_t)in_stack_00000040 + 0x1a4) = uVar8;
  if (lVar12 != 0) {
    uVar10 = *(int32_t *)(lVar12 + 0x1a8);
  }
  *(int32_t *)(in_stack_00000040 + 0x35) = uVar10;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x1ac) =
       *(int32_t *)((int64_t)in_stack_00000040 + 0x284);
  *(int32_t *)(in_stack_00000040 + 0x36) = 0xbf800000;
  FUN_18013e340(in_stack_00000040 + 0x37,0);
  FUN_18013e2f0(in_stack_00000040 + 0x39,0);
  FUN_18013e2f0(in_stack_00000040 + 0x3b,0);
  in_stack_00000040[0x42] = 0;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x13c) = 0;
  *(int32_t *)(in_stack_00000040 + 0x28) = 0;
  in_stack_00000040[0x33] = (int64_t)(in_stack_00000040 + 0x57);
  FUN_18013db40(in_stack_00000040 + 0x3d,0);
  func_0x00018011a9d0(in_stack_00000040 + 0x51,3);
  if ((unaff_RBP[0x16] != 0.0) && ((int)in_stack_00000040[0x35] != *(int *)(lVar12 + 0x1a8))) {
    *(int *)(in_stack_00000040 + 0x35) = *(int *)(lVar12 + 0x1a8);
    FUN_18011d940(in_stack_00000040 + 0x37,in_stack_00000040 + 0x35);
  }
  if (0 < *(int *)((int64_t)in_stack_00000040 + 0xc4)) {
    *(int *)((int64_t)in_stack_00000040 + 0xc4) = *(int *)((int64_t)in_stack_00000040 + 0xc4) + -1
    ;
  }
  if (0 < (int)in_stack_00000040[0x19]) {
    *(int *)(in_stack_00000040 + 0x19) = (int)in_stack_00000040[0x19] + -1;
  }
  if ((char)uVar23 != '\0') {
    FUN_18012d2e0(in_stack_00000040);
    func_0x000180131810(in_stack_00000040,0);
  }
  puVar5 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar5 != (int8_t *)0x0) &&
       (lVar22 = in_stack_00000040[5], *(char *)(lVar22 + 0x48) != '\0')) &&
      (lVar28 = func_0x00018012fae0(), lVar22 != lVar28)) &&
     (((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar22 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if ((((uint)unaff_R15D & 1) == 0) && ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0))
  {
    uVar23 = *(uint *)(in_stack_00000040 + 0x35);
    *(uint *)(in_stack_00000040 + 0x35) = uVar23 | 0x10;
    *(int32_t *)((int64_t)in_stack_00000040 + 0x16c) = 1;
    *(int32_t *)(in_stack_00000040 + 0x2e) = 2;
    if (((uint)unaff_R15D & 0x20) == 0) {
      plVar18 = in_stack_00000040 + 8;
      uVar8 = FUN_180123c00(in_stack_00000040,&rendering_buffer_2480_ptr,0);
      cVar6 = FUN_180110000(uVar8,plVar18,0);
      if (cVar6 != '\0') {
        *(int8_t *)((int64_t)in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(int64_t *)(unaff_RBP + 10) != 0) {
      fVar27 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar14 = func_0x00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(in_stack_00000040 + 9) +
                                    *(float *)(in_stack_00000040 + 8)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar27,
                                   *(float *)((int64_t)in_stack_00000040 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar27);
      uVar8 = FUN_180123c00(in_stack_00000040,&rendering_buffer_2512_ptr,0);
      cVar6 = FUN_18010fd40(uVar8,uVar14);
      if (cVar6 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)((int64_t)in_stack_00000040 + 0x16c) = 0;
    *(int32_t *)(in_stack_00000040 + 0x2e) = 1;
    *(uint *)(in_stack_00000040 + 0x35) = uVar23;
    fVar27 = unaff_XMM13_Da;
    if (((uint)unaff_R15D & 0x100000) != 0) {
      uVar14 = CONCAT44(uVar9,0xbf800000);
      pfVar16 = (float *)FUN_180127c60(unaff_RBP + -0x18,&system_data_df28,0,0,uVar14);
      uVar9 = (int32_t)((uint64_t)uVar14 >> 0x20);
      fVar27 = *pfVar16;
    }
    uVar14 = func_0x00018004ba20(unaff_RBP + -0x18);
    uVar19 = FUN_180127c60(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar9,0xbf800000));
    func_0x00018011fbf0(&stack0x00000050,uVar19,uVar14);
    fVar31 = unaff_RBP[-2];
    fVar30 = unaff_RBP[-1];
    fVar35 = *unaff_RBP;
    fVar32 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar31;
    unaff_RBP[-0x1b] = fVar30;
    unaff_RBP[-0x1a] = fVar35;
    unaff_RBP[-0x19] = fVar32;
    if (((uint)unaff_R15D & 0x20) == 0) {
      fVar33 = *(float *)(unaff_RSI + 0x165c);
      fVar34 = fVar33 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    else {
      fVar33 = *(float *)(unaff_RSI + 0x165c);
      fVar34 = fVar33;
    }
    lVar22 = *(int64_t *)(unaff_RBP + 10);
    if (lVar22 != 0) {
      fVar33 = fVar33 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (unaff_XMM13_Da < *(float *)(unaff_RSI + 0x1644)) {
      fVar33 = (float)func_0x00018013e9f0();
      fVar32 = unaff_RBP[-0x19];
      fVar35 = unaff_RBP[-0x1a];
      fVar30 = unaff_RBP[-0x1b];
      fVar31 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar30;
    unaff_RBP[-5] = fVar32;
    unaff_RBP[-0x1c] = fVar31 + fVar34;
    unaff_RBP[-0x1a] = fVar35 - fVar33;
    unaff_RBP[-8] = fVar31 + fVar34;
    unaff_RBP[-6] = fVar35 - fVar33;
    if (lVar22 == 0) {
      fVar30 = *(float *)(unaff_RSI + 0x165c);
    }
    else {
      fVar30 = (float)func_0x00018010e5a0(unaff_RBP + -2);
      fVar30 = fVar30 - 3.0;
    }
    unaff_RBP[-6] = (*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) - fVar30
    ;
    FUN_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &stack0x00000050);
    if (((uint)unaff_R15D & 0x100000) != 0) {
      uVar14 = func_0x00018004ba20(unaff_RBP + -0x14,2.0 - fVar27);
      func_0x00018010e590(unaff_RBP + -0x1c);
      func_0x00018013e900();
      uVar19 = func_0x00018004ba20(unaff_RBP + 0x18);
      func_0x00018011fbf0(unaff_RBP + -0x18,uVar19,uVar14);
      func_0x00018004ba20(unaff_RBP + -0xe);
      func_0x00018004ba20(unaff_RBP + -0x14);
      uVar14 = func_0x00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar19 = func_0x00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      FUN_180122890(uVar19,uVar14,&system_data_df28,0,0);
    }
  }
  *(int16_t *)((int64_t)in_stack_00000040 + 0x26a) = 0;
  *(int16_t *)(in_stack_00000040 + 0x4d) = 0;
  plVar18 = (int64_t *)func_0x00018010e720(in_stack_00000040,unaff_RBP + 0x20);
  lVar22 = plVar18[1];
  in_stack_00000040[0x47] = *plVar18;
  in_stack_00000040[0x48] = lVar22;
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0) {
    fVar27 = (float)func_0x00018010e760();
    *(float *)((int64_t)in_stack_00000040 + 0x23c) =
         fVar27 + *(float *)((int64_t)in_stack_00000040 + 0x23c);
  }
  func_0x00018010e690(in_stack_00000040 + 0x47,in_stack_00000040 + 0x45);
  *(float *)(in_stack_00000040 + 0x49) =
       unaff_RBP[-2] + *(float *)((int64_t)in_stack_00000040 + 0x7c);
  if (((uint)unaff_R15D & 0x401) == 1) {
    pfVar15 = (float *)((int64_t)in_stack_00000040 + 0x7c);
  }
  fVar27 = *pfVar15;
  fVar30 = (float)func_0x00018010e7a0();
  *(float *)((int64_t)in_stack_00000040 + 0x24c) = fVar30 + unaff_RBP[1] + fVar27;
  *(float *)(in_stack_00000040 + 0x4a) =
       ((*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) -
       *(float *)((int64_t)in_stack_00000040 + 0xa4)) -
       *(float *)((int64_t)in_stack_00000040 + 0x7c);
  *(float *)((int64_t)in_stack_00000040 + 0x254) =
       ((*(float *)((int64_t)in_stack_00000040 + 0x4c) +
        *(float *)((int64_t)in_stack_00000040 + 0x44)) - *(float *)(in_stack_00000040 + 0x15)) -
       *(float *)((int64_t)in_stack_00000040 + 0x7c);
  fVar27 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4b) =
       (float)(int)(fVar27 + *(float *)(in_stack_00000040 + 0x49) + 0.5);
  *(float *)((int64_t)in_stack_00000040 + 0x25c) =
       (float)(int)(*(float *)((int64_t)in_stack_00000040 + 0x24c) + 0.5);
  fVar27 = *(float *)(in_stack_00000040 + 0x4a);
  fVar30 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4c) = (float)(int)((fVar27 + 0.5) - fVar30);
  *(float *)((int64_t)in_stack_00000040 + 0x264) =
       (float)(int)(*(float *)((int64_t)in_stack_00000040 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)((int64_t)in_stack_00000040 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(in_stack_00000040[0x74] + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)unaff_R15D >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(unaff_RSI + 0x1b78) == 0 ||
         (*(int64_t **)(*(int64_t *)(unaff_RSI + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == (int64_t *)in_stack_00000040[0x74] &&
        ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)((int64_t)in_stack_00000040 + 0x144) =
         *(int32_t *)((int64_t)in_stack_00000040 + 0x84);
    cVar6 = FUN_180128040(unaff_RBP + -2);
    fVar27 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x29) = (uint)(cVar6 != '\0');
    uVar14 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)((int64_t)in_stack_00000040 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)((int64_t)in_stack_00000040 + 0x154) = uVar14;
    fVar30 = in_stack_00000078;
  }
  else {
    fVar27 = unaff_RBP[-0x10];
    *(int *)((int64_t)in_stack_00000040 + 0x144) = (int)in_stack_00000040[1];
    *(int32_t *)(in_stack_00000040 + 0x29) = *(int32_t *)((int64_t)in_stack_00000040 + 0x41c)
    ;
    *(int64_t *)((int64_t)in_stack_00000040 + 0x14c) = in_stack_00000040[0x84];
    *(int64_t *)((int64_t)in_stack_00000040 + 0x154) = in_stack_00000040[0x85];
    fVar30 = in_stack_00000078;
  }
LAB_18012ce0f:
  if (((uint)unaff_R15D >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 0x4b,in_stack_00000040 + 0x4c,1);
  }
  if (fVar30 != fVar27) {
    *(int8_t *)((int64_t)in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0x17) = (short)in_stack_00000040[0x17] + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((uint)unaff_R15D >> 0x18 & 1) != 0) {
    if ((((((uint)unaff_R15D & 0x40) == 0) && (*(int *)((int64_t)in_stack_00000040 + 0xc4) < 1)) &&
        ((int)in_stack_00000040[0x19] < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x48) < *(float *)(in_stack_00000040 + 0x47) ||
         *(float *)(in_stack_00000040 + 0x48) == *(float *)(in_stack_00000040 + 0x47) ||
        (*(float *)((int64_t)in_stack_00000040 + 0x244) <
         *(float *)((int64_t)in_stack_00000040 + 0x23c) ||
         *(float *)((int64_t)in_stack_00000040 + 0x244) ==
         *(float *)((int64_t)in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
    }
    if ((lVar12 != 0) && ((*(char *)(lVar12 + 0xb2) != '\0' || (*(char *)(lVar12 + 0xb6) != '\0'))))
    {
      *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= unaff_XMM13_Da) {
    *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((int)in_stack_00000040[0x1b] < 1) && (*(int *)((int64_t)in_stack_00000040 + 0xdc) < 1)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)((int64_t)in_stack_00000040 + 0xb6) = cVar6;
  if (((((*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)((int64_t)in_stack_00000040 + 0xaf) != '\0')) && (cVar6 == '\0')) ||
      ((0 < *(int *)((int64_t)in_stack_00000040 + 0xc4) || (0 < (int)in_stack_00000040[0x19])))) ||
     (0 < *(int *)((int64_t)in_stack_00000040 + 0xdc))) {
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  *(int8_t *)((int64_t)in_stack_00000040 + 0xb4) = uVar20;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x24) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





