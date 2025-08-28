#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part119_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801299e9(uint64_t param_1,uint64_t param_2)
void FUN_1801299e9(uint64_t param_1,uint64_t param_2)

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
  longlong lVar14;
  uint64_t uVar15;
  float *pfVar16;
  float *pfVar17;
  uint64_t *puVar18;
  longlong *plVar19;
  uint64_t uVar20;
  int8_t uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  int *piVar25;
  float *pfVar26;
  float unaff_EBX;
  int32_t *puVar27;
  float *unaff_RBP;
  longlong unaff_RSI;
  byte bVar28;
  longlong in_R11;
  uint64_t unaff_R12;
  longlong lVar29;
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
  uint64_t *in_stack_00000020;
  ulonglong uVar39;
  longlong *in_stack_00000040;
  char in_stack_00000048;
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
  in_stack_00000040 = (longlong *)func_0x000180128b60();
  iVar24 = *(int *)(unaff_RSI + 0x1ad0);
  cStack0000000000000049 = in_stack_00000040 == (longlong *)0x0;
  if (in_stack_00000040 == (longlong *)0x0) {
    if (*(int *)(unaff_RSI + 0x1bd4) == 0) {
      _fStack0000000000000050 = 0;
      pfVar16 = &stack0x00000050;
    }
    else {
      pfVar16 = unaff_RBP + -0xe;
      *(uint64_t *)(unaff_RBP + -0xe) = *(uint64_t *)(unaff_RSI + 0x1c04);
    }
    in_stack_00000040 = (longlong *)FUN_180128bd0(param_1,*(uint64_t *)pfVar16,unaff_EBX);
  }
  in_stack_00000078 = *(float *)(in_stack_00000040 + 0x50);
  uVar9 = *(uint *)((longlong)in_stack_00000040 + 0xdc);
  fVar33 = (float)((uint)unaff_EBX | 6);
  if (((uint)unaff_EBX & 0xc0200) != 0xc0200) {
    fVar33 = unaff_EBX;
  }
  fVar31 = *(float *)(unaff_RSI + 0x1a90);
  unaff_RBP[-0x10] = fVar31;
  cStack000000000000004a = (int)in_stack_00000078 < (int)fVar31 + -1;
  if (((uint)fVar33 >> 0x1a & 1) != 0) {
    piVar25 = (int *)((longlong)*(int *)(unaff_RSI + 0x1bc0) * 0x30 +
                     *(longlong *)(unaff_RSI + 0x1bb8));
    cStack000000000000004a =
         (bool)cStack000000000000004a ||
         (in_stack_00000040 != *(longlong **)(piVar25 + 2) ||
         (int)in_stack_00000040[0x18] != *piVar25);
  }
  if (((bool)cStack000000000000004a) || (0 < (int)uVar9)) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  *(char *)((longlong)in_stack_00000040 + 0xb5) = cVar7;
  in_stack_00000068 = uVar9;
  if (cVar7 != '\0') {
    func_0x000180128ae0(in_stack_00000040,8,1);
  }
  if (in_stack_00000078 == fVar31) {
    fVar33 = *(float *)((longlong)in_stack_00000040 + 0xc);
  }
  else {
    *(int32_t *)(in_stack_00000040 + 2) = *(int32_t *)((longlong)in_stack_00000040 + 0xc);
    *(float *)((longlong)in_stack_00000040 + 0xc) = fVar33;
    *(float *)(in_stack_00000040 + 0x50) = fVar31;
    *(int16_t *)((longlong)in_stack_00000040 + 0xba) = 0;
    uVar3 = *(int16_t *)(unaff_RSI + 0x1af0);
    *(int *)(unaff_RSI + 0x1af0) = *(int *)(unaff_RSI + 0x1af0) + 1;
    *(int16_t *)((longlong)in_stack_00000040 + 0xbc) = uVar3;
  }
  if (*(int *)(unaff_RSI + 0x1bf0) != 0) {
    FUN_18013b040(in_stack_00000040,*(int32_t *)(unaff_RSI + 0x1c40));
  }
  if ((in_stack_00000078 != fVar31) &&
     ((((int)in_stack_00000040[0x83] != 0 || (in_stack_00000040[0x81] != 0)) ||
      ((*(char *)(unaff_RSI + 0xc2) != '\0' && ((((uint)fVar33 & 0x1200001) == 0 && (iVar24 != 0))))
      )))) {
    FUN_18013b5a0(in_stack_00000040,param_2);
    fVar33 = *(float *)((longlong)in_stack_00000040 + 0xc);
  }
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) {
    if (*(int *)(unaff_RSI + 0x1ad0) == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(uint64_t *)
                (*(longlong *)(unaff_RSI + 0x1ad8) + -8 + (longlong)*(int *)(unaff_RSI + 0x1ad0) * 8
                );
    }
  }
  else {
    uVar15 = *(uint64_t *)(in_stack_00000040[0x81] + 0x68);
  }
  if (in_stack_00000078 == fVar31) {
    *(longlong *)(unaff_RBP + 8) = in_stack_00000040[0x73];
  }
  else {
    uVar20 = 0;
    if (((uint)fVar33 & 0x5000000) != 0) {
      uVar20 = uVar15;
    }
    *(uint64_t *)(unaff_RBP + 8) = uVar20;
  }
  FUN_18011d9a0(unaff_RSI + 0x1ad0,&stack0x00000040);
  *(uint64_t *)(unaff_RSI + 0x1af8) = 0;
  func_0x000180128a80(in_stack_00000040,1);
  if (((uint)fVar33 >> 0x1a & 1) != 0) {
    puVar27 = (int32_t *)
              ((longlong)*(int *)(unaff_RSI + 0x1bc0) * 0x30 + *(longlong *)(unaff_RSI + 0x1bb8));
    *(longlong **)(puVar27 + 2) = in_stack_00000040;
    FUN_18013df80((int *)(unaff_RSI + 0x1bc0),puVar27);
    *(int32_t *)(in_stack_00000040 + 0x18) = *puVar27;
  }
  if ((0 < (int)uVar9) && (((uint)fVar33 >> 0x18 & 1) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0x79) = 0;
  }
  bVar30 = false;
  bVar6 = false;
  in_stack_00000048 = '\0';
  if (*(uint *)(unaff_RSI + 0x1bd0) != 0) {
    uVar9 = *(uint *)(in_stack_00000040 + 0x1c) & *(uint *)(unaff_RSI + 0x1bd0);
    in_stack_00000048 = uVar9 != 0;
    if ((uVar9 == 0) ||
       (*(float *)(unaff_RSI + 0x1bfc) * *(float *)(unaff_RSI + 0x1bfc) +
        *(float *)(unaff_RSI + 0x1c00) * *(float *)(unaff_RSI + 0x1c00) <= 1e-05)) {
      func_0x00018012ddc0(in_stack_00000040,unaff_RSI + 0x1bf4);
    }
    else {
      in_stack_00000040[0x1e] = *(longlong *)(unaff_RSI + 0x1bf4);
      in_stack_00000040[0x1f] = *(longlong *)(unaff_RSI + 0x1bfc);
      *(uint *)(in_stack_00000040 + 0x1c) = *(uint *)(in_stack_00000040 + 0x1c) & 0xfffffff1;
    }
  }
  if (*(uint *)(unaff_RSI + 0x1bd4) != 0) {
    uVar9 = *(uint *)((longlong)in_stack_00000040 + 0xe4) & *(uint *)(unaff_RSI + 0x1bd4);
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
    func_0x00018012de80();
  }
  if (*(int *)(unaff_RSI + 0x1bd8) == 0) {
    fVar31 = unaff_RBP[-0x10];
    if (in_stack_00000078 != fVar31) {
      in_stack_00000040[0xd] = 0;
    }
  }
  else {
    in_stack_00000040[0xd] = *(longlong *)(unaff_RSI + 0x1c0c);
    if (*(float *)((longlong)in_stack_00000040 + 0x6c) != 0.0) {
      fVar31 = (float)func_0x00018010e7a0();
      fVar32 = (float)func_0x00018010e760(in_stack_00000040);
      *(float *)((longlong)in_stack_00000040 + 0x6c) =
           fVar31 + fVar32 + *(float *)((longlong)in_stack_00000040 + 0x6c);
    }
    fVar31 = unaff_RBP[-0x10];
  }
  fVar32 = in_stack_00000078;
  uVar15 = *(uint64_t *)(unaff_RSI + 0x1c4c);
  *(uint64_t *)((longlong)in_stack_00000040 + 0x14) = *(uint64_t *)(unaff_RSI + 0x1c44);
  *(uint64_t *)((longlong)in_stack_00000040 + 0x1c) = uVar15;
  *(int32_t *)((longlong)in_stack_00000040 + 0x24) = *(int32_t *)(unaff_RSI + 0x1c54);
  if (*(uint *)(unaff_RSI + 0x1bdc) != 0) {
    if ((*(uint *)(unaff_RSI + 0x1bdc) & *(uint *)(in_stack_00000040 + 0x1d)) != 0) {
      *(int8_t *)((longlong)in_stack_00000040 + 0xb2) = *(int8_t *)(unaff_RSI + 0x1c15);
      *(uint *)(in_stack_00000040 + 0x1d) = *(uint *)(in_stack_00000040 + 0x1d) & 0xfffffff1;
    }
  }
  if (*(int *)(unaff_RSI + 0x1be4) != 0) {
    FUN_18012d2e0();
  }
  if (*(char *)((longlong)in_stack_00000040 + 0xb5) != '\0') {
    func_0x000180128ae0(in_stack_00000040,8);
  }
  if (fVar32 == fVar31) {
    func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
    func_0x000180123e50(in_stack_00000040);
    lVar14 = *(longlong *)(unaff_RBP + 8);
    goto LAB_18012ce0f;
  }
  unaff_RBP[-4] = (float)((uint)fVar33 & 0x3000000);
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
  func_0x000180129900(in_stack_00000040,fVar33,*(uint64_t *)(unaff_RBP + 8));
  lVar14 = *(longlong *)(unaff_RBP + 10);
  unaff_RBP[0x20] = -3.4028235e+38;
  unaff_RBP[0x21] = -3.4028235e+38;
  unaff_RBP[0x22] = 3.4028235e+38;
  unaff_RBP[0x23] = 3.4028235e+38;
  *(int8_t *)((longlong)in_stack_00000040 + 0xaf) = 1;
  *(bool *)((longlong)in_stack_00000040 + 0xb7) = lVar14 != 0;
  func_0x00018010e540(unaff_RBP + -0x20,unaff_RBP + 0x20);
  lVar14 = *(longlong *)(unaff_RBP + -0x1e);
  in_stack_00000040[0x45] = *(longlong *)(unaff_RBP + -0x20);
  in_stack_00000040[0x46] = lVar14;
  FUN_18013dae0(in_stack_00000040 + 0x43,1);
  cVar7 = cStack0000000000000049;
  if (((((in_stack_00000040[5] != 0) &&
        (*(longlong **)(in_stack_00000040[5] + 0x78) == in_stack_00000040)) ||
       ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0)) ||
      ((*(longlong *)(unaff_RSI + 0x1ce8) != 0 &&
       ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x80000) == 0)))) &&
     (cStack0000000000000049 == '\0')) {
    pcVar4 = *(char **)(unaff_RBP + 0x1e);
    pcVar13 = pcVar4;
    do {
      cVar2 = *pcVar13;
      cVar8 = pcVar13[*in_stack_00000040 - (longlong)pcVar4];
      if (cVar2 != cVar8) break;
      pcVar13 = pcVar13 + 1;
    } while (cVar8 != '\0');
    if (cVar2 != cVar8) {
      _fStack0000000000000050 = (longlong)(int)in_stack_00000040[0x10];
      lVar14 = FUN_180121130(*in_stack_00000040,&stack0x00000050,pcVar4);
      *in_stack_00000040 = lVar14;
      *(float *)(in_stack_00000040 + 0x10) = fStack0000000000000050;
    }
  }
  if (*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') {
    if (((*(char *)((longlong)in_stack_00000040 + 0xb6) == '\0') ||
        (*(int *)((longlong)in_stack_00000040 + 0xdc) != 0)) || ((int)in_stack_00000040[0x1b] < 1))
    {
      fVar31 = *(float *)(in_stack_00000040 + 0xd);
      if (fVar31 == 0.0) {
        fVar31 = (*(float *)(in_stack_00000040 + 0x23) - *(float *)(in_stack_00000040 + 8)) +
                 *(float *)((longlong)in_stack_00000040 + 0x8c);
      }
      fVar32 = *(float *)((longlong)in_stack_00000040 + 0x6c);
      if (fVar32 == 0.0) {
        fVar32 = (*(float *)((longlong)in_stack_00000040 + 0x11c) -
                 *(float *)((longlong)in_stack_00000040 + 0x44)) +
                 *(float *)(in_stack_00000040 + 0x12);
      }
      fVar31 = (float)(int)fVar31 + *(float *)(in_stack_00000040 + 0xe);
      fVar32 = (float)(int)fVar32 + *(float *)((longlong)in_stack_00000040 + 0x74);
    }
    else {
      fVar31 = *(float *)(in_stack_00000040 + 0xc);
      fVar32 = *(float *)((longlong)in_stack_00000040 + 100);
    }
  }
  else {
    fVar31 = *(float *)(in_stack_00000040 + 0xc);
    fVar32 = *(float *)((longlong)in_stack_00000040 + 100);
  }
  *(float *)(in_stack_00000040 + 0xc) = fVar31;
  *(float *)((longlong)in_stack_00000040 + 100) = fVar32;
  if (0 < (int)in_stack_00000040[0x1b]) {
    *(int *)(in_stack_00000040 + 0x1b) = (int)in_stack_00000040[0x1b] + -1;
  }
  if (0 < *(int *)((longlong)in_stack_00000040 + 0xdc)) {
    *(int *)((longlong)in_stack_00000040 + 0xdc) = *(int *)((longlong)in_stack_00000040 + 0xdc) + -1
    ;
  }
  if ((cVar7 != '\0') && ((!bVar30 || (!bVar6)))) {
    *(int32_t *)((longlong)in_stack_00000040 + 0xdc) = 1;
  }
  if (((cStack000000000000004a != '\0') && (((uint)fVar33 & 0x6000000) != 0)) &&
     (*(int32_t *)((longlong)in_stack_00000040 + 0xdc) = 1, ((uint)fVar33 & 0x40) != 0)) {
    if (!bVar30) {
      *(int32_t *)(in_stack_00000040 + 10) = 0;
      *(int32_t *)(in_stack_00000040 + 9) = 0;
    }
    if (!bVar6) {
      *(int32_t *)((longlong)in_stack_00000040 + 0x54) = 0;
      *(int32_t *)((longlong)in_stack_00000040 + 0x4c) = 0;
    }
    in_stack_00000040[0xc] = 0;
  }
  FUN_180130a80(in_stack_00000040);
  func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
  if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
    uVar11 = 0x3f800000;
  }
  else {
    uVar11 = *(int32_t *)(in_stack_00000040[5] + 0x18);
  }
  *(int32_t *)((longlong)in_stack_00000040 + 0x2dc) = uVar11;
  func_0x000180123e50(in_stack_00000040);
  fVar33 = *(float *)((longlong)in_stack_00000040 + 0xc);
  unaff_RBP[-10] = fVar33;
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) {
    if (((uint)fVar33 >> 0x18 & 1) == 0) {
      if ((((uint)fVar33 & 0x6000000) == 0) || (((uint)fVar33 >> 0x1b & 1) != 0)) {
        uVar11 = *(int32_t *)(unaff_RSI + 0x1638);
      }
      else {
        uVar11 = *(int32_t *)(unaff_RSI + 0x1658);
      }
      *(int32_t *)((longlong)in_stack_00000040 + 0x7c) = uVar11;
    }
    else {
      *(int32_t *)((longlong)in_stack_00000040 + 0x7c) = *(int32_t *)(unaff_RSI + 0x1650);
    }
  }
  else {
    *(int32_t *)((longlong)in_stack_00000040 + 0x7c) = 0;
  }
  if ((((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) &&
      (((uint)fVar33 & 0x5010000) == 0x1000000)) &&
     (*(float *)((longlong)in_stack_00000040 + 0x7c) == 0.0)) {
    if (((uint)fVar33 >> 10 & 1) == 0) {
      *(int32_t *)(in_stack_00000040 + 0xe) = 0;
      *(int32_t *)((longlong)in_stack_00000040 + 0x74) = 0;
    }
    else {
      uVar11 = *(int32_t *)(unaff_RSI + 0x1630);
      *(int32_t *)(in_stack_00000040 + 0xe) = 0;
      *(int32_t *)((longlong)in_stack_00000040 + 0x74) = uVar11;
    }
  }
  else {
    in_stack_00000040[0xe] = *(longlong *)(unaff_RSI + 0x162c);
  }
  fVar31 = *(float *)(in_stack_00000040 + 0xe);
  if (*(float *)(in_stack_00000040 + 0xe) <= *(float *)(unaff_RSI + 0x166c)) {
    fVar31 = *(float *)(unaff_RSI + 0x166c);
  }
  if (fVar31 <= *(float *)(unaff_RSI + 0x1c58)) {
    fVar31 = *(float *)(unaff_RSI + 0x1c58);
  }
  *(float *)(in_stack_00000040 + 0x30) = fVar31;
  *(int32_t *)((longlong)in_stack_00000040 + 0x184) = *(int32_t *)(unaff_RSI + 0x1c5c);
  if ((((uint)fVar33 & 0x21) == 0) && ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
    func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    if ((((*(longlong **)(unaff_RSI + 0x1b00) == in_stack_00000040) &&
         (*(int *)(unaff_RSI + 0x1b18) == 0)) && (*(int *)(unaff_RSI + 0x1b20) == 0)) &&
       ((cVar7 = FUN_180128040(unaff_RBP + 0x20,unaff_RBP + 0x22,1), cVar7 != '\0' &&
        (*(char *)(unaff_RSI + 0x415) != '\0')))) {
      *(int8_t *)((longlong)in_stack_00000040 + 0xb3) = 1;
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xb3) != '\0') {
      *(bool *)((longlong)in_stack_00000040 + 0xb2) =
           *(char *)((longlong)in_stack_00000040 + 0xb2) == '\0';
      if (((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x100) == 0) &&
         (*(float *)(_DAT_180c8a9b0 + 0x2e04) <= 0.0)) {
        *(int32_t *)(_DAT_180c8a9b0 + 0x2e04) = *(int32_t *)(_DAT_180c8a9b0 + 0x1c);
      }
      FUN_18012d2e0(in_stack_00000040);
    }
  }
  else {
    *(int8_t *)((longlong)in_stack_00000040 + 0xb2) = 0;
  }
  plVar19 = in_stack_00000040;
  lVar14 = _DAT_180c8a9b0;
  *(int8_t *)((longlong)in_stack_00000040 + 0xb3) = 0;
  if ((*(uint *)((longlong)in_stack_00000040 + 0xc) >> 0x19 & 1) == 0) {
    _fStack0000000000000070 = *(uint64_t *)(lVar14 + 0x163c);
    if ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x14000000) != 0) {
      _fStack0000000000000050 = 0x4080000040800000;
      puVar18 = (uint64_t *)
                func_0x00018011fc20(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050);
      _fStack0000000000000070 = *puVar18;
    }
    fVar31 = *(float *)(plVar19[5] + 0x10);
    fVar32 = *(float *)(plVar19[5] + 0x14);
    if (*(char *)((longlong)plVar19 + 0xae) != '\0') {
      fVar31 = 3.4028235e+38;
      fVar32 = 3.4028235e+38;
    }
    iVar24 = *(int *)((longlong)plVar19 + 0x3c);
    if ((-1 < iVar24) && (iVar24 < *(int *)(lVar14 + 0x1600))) {
      fVar31 = *(float *)(*(longlong *)(lVar14 + 0x1608) + 0x18 + (longlong)iVar24 * 0x24);
      fVar32 = *(float *)(*(longlong *)(lVar14 + 0x1608) + 0x1c + (longlong)iVar24 * 0x24);
    }
    _fStack0000000000000050 =
         CONCAT44(fVar32 - (*(float *)(lVar14 + 0x16b8) + *(float *)(lVar14 + 0x16b8)),
                  fVar31 - (*(float *)(lVar14 + 0x16b4) + *(float *)(lVar14 + 0x16b4)));
    puVar18 = (uint64_t *)func_0x00018011fc50(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050)
    ;
    FUN_18011fc80(&stack0x00000060,plVar19 + 0xc,&stack0x00000070,*puVar18);
    FUN_180128fd0(unaff_RBP + 2,plVar19,CONCAT44(fStack0000000000000064,fStack0000000000000060));
    if (((unaff_RBP[2] < *(float *)(plVar19 + 0xc)) &&
        ((*(uint *)((longlong)plVar19 + 0xc) & 8) == 0)) &&
       ((*(uint *)((longlong)plVar19 + 0xc) >> 0xb & 1) != 0)) {
      fStack0000000000000064 = fStack0000000000000064 + *(float *)(lVar14 + 0x168c);
    }
    lVar23 = _DAT_180c8a9b0;
    fVar32 = fStack0000000000000060;
    fVar31 = fStack0000000000000064;
    if ((unaff_RBP[3] < *(float *)((longlong)plVar19 + 100)) &&
       ((*(byte *)((longlong)plVar19 + 0xc) & 8) == 0)) {
      fStack0000000000000060 = fStack0000000000000060 + *(float *)(lVar14 + 0x168c);
      fVar32 = fStack0000000000000060;
    }
  }
  else {
    lVar23 = lVar14;
    fVar32 = *(float *)(in_stack_00000040 + 0xc);
    fVar31 = *(float *)((longlong)in_stack_00000040 + 100);
  }
  fVar34 = 3.4028235e+38;
  _fStack0000000000000050 = CONCAT44(fVar31,fVar32);
  fVar38 = 3.4028235e+38;
  if ((((uint)fVar33 & 0x40) == 0) || (*(char *)((longlong)in_stack_00000040 + 0xb2) != '\0')) {
    if ((0 < *(int *)((longlong)in_stack_00000040 + 0xc4)) || (0 < (int)in_stack_00000040[0x19])) {
      if ((!bVar30) && (0 < *(int *)((longlong)in_stack_00000040 + 0xc4))) {
        fVar34 = fVar32;
        if ((*(char *)((longlong)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar34 = *(float *)(in_stack_00000040 + 10),
           *(float *)(in_stack_00000040 + 10) <= fVar32)) {
          fVar34 = fVar32;
        }
        *(float *)(in_stack_00000040 + 10) = fVar34;
      }
      if ((!bVar6) && (0 < (int)in_stack_00000040[0x19])) {
        fVar38 = fVar31;
        if ((*(char *)((longlong)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar38 = *(float *)((longlong)in_stack_00000040 + 0x54),
           *(float *)((longlong)in_stack_00000040 + 0x54) <= fVar31)) {
          fVar38 = fVar31;
        }
        *(float *)((longlong)in_stack_00000040 + 0x54) = fVar38;
      }
      if (((*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') &&
          ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar23 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar23 + 0x2e04) = *(int32_t *)(lVar23 + 0x1c);
      }
    }
  }
  else {
    if (!bVar30) {
      *(float *)(in_stack_00000040 + 10) = fVar32;
      fVar34 = fVar32;
    }
    if (!bVar6) {
      *(float *)((longlong)in_stack_00000040 + 0x54) = fVar31;
      fVar38 = fVar31;
    }
  }
  puVar27 = (int32_t *)FUN_180128fd0(unaff_RBP + -0x18,in_stack_00000040,in_stack_00000040[10]);
  uVar11 = puVar27[1];
  *(int32_t *)(in_stack_00000040 + 10) = *puVar27;
  *(int32_t *)((longlong)in_stack_00000040 + 0x54) = uVar11;
  if ((*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') || (((uint)fVar33 >> 0x18 & 1) != 0))
  {
    pfVar16 = unaff_RBP + -0xe;
    *(longlong *)(unaff_RBP + -0xe) = in_stack_00000040[10];
  }
  else {
    uVar15 = func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    pfVar16 = (float *)func_0x00018010e570(uVar15,unaff_RBP + -0x18);
  }
  cVar2 = cStack000000000000004a;
  cVar7 = in_stack_00000048;
  in_stack_00000040[9] = *(longlong *)pfVar16;
  if (*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') {
    if (fVar34 == 3.4028235e+38) {
      fVar31 = *(float *)(in_stack_00000040 + 0xb);
    }
    else {
      fVar31 = *(float *)(in_stack_00000040 + 10);
    }
    if (fVar38 == 3.4028235e+38) {
      fVar32 = *(float *)((longlong)in_stack_00000040 + 0x5c);
    }
    else {
      fVar32 = *(float *)((longlong)in_stack_00000040 + 0x54);
    }
    if ((((uint)fVar33 >> 0xe & 1) != 0) ||
       ((fVar32 < *(float *)((longlong)in_stack_00000040 + 100) && (((uint)fVar33 & 8) == 0)))) {
      cVar8 = '\x01';
    }
    else {
      cVar8 = '\0';
    }
    *(char *)((longlong)in_stack_00000040 + 0xad) = cVar8;
    if (((uint)fVar33 >> 0xf & 1) == 0) {
      if (cVar8 == '\0') {
        fVar34 = 0.0;
      }
      else {
        fVar34 = *(float *)(unaff_RSI + 0x168c);
      }
      if ((fVar31 - fVar34 < *(float *)(in_stack_00000040 + 0xc)) &&
         (((uint)fVar33 & 0x808) == 0x800)) goto LAB_18012a70f;
      cVar8 = '\0';
    }
    else {
LAB_18012a70f:
      cVar8 = '\x01';
    }
    *(char *)((longlong)in_stack_00000040 + 0xac) = cVar8;
    if ((cVar8 != '\0') && (*(char *)((longlong)in_stack_00000040 + 0xad) == '\0')) {
      if ((*(float *)((longlong)in_stack_00000040 + 100) <= fVar32 - *(float *)(unaff_RSI + 0x168c))
         || (((uint)fVar33 & 8) != 0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
      }
      *(int8_t *)((longlong)in_stack_00000040 + 0xad) = uVar21;
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xac) == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int32_t *)(unaff_RSI + 0x168c);
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xad) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int32_t *)(unaff_RSI + 0x168c);
    }
    *(int32_t *)((longlong)in_stack_00000040 + 0xa4) = uVar10;
    *(int32_t *)(in_stack_00000040 + 0x15) = uVar11;
  }
  unaff_RBP[0xc] = -NAN;
  if (((cStack000000000000004a != '\0') &&
      (*(int32_t *)((longlong)in_stack_00000040 + 0xd4) = 0xffffffff,
      ((uint)fVar33 >> 0x1a & 1) != 0)) && (in_stack_00000048 == '\0')) {
    uVar11 = *(int32_t *)
              (*(longlong *)(unaff_RSI + 0x1bc8) + -0xc +
              (longlong)*(int *)(unaff_RSI + 0x1bc0) * 0x30);
    *(int32_t *)(in_stack_00000040 + 8) =
         *(int32_t *)
          (*(longlong *)(unaff_RSI + 0x1bc8) + -0x10 + (longlong)*(int *)(unaff_RSI + 0x1bc0) * 0x30
          );
    *(int32_t *)((longlong)in_stack_00000040 + 0x44) = uVar11;
  }
  fVar31 = (float)((uint)fVar33 & 0x1000000);
  unaff_RBP[0x16] = fVar31;
  if (fVar31 == 0.0) {
    fVar32 = unaff_RBP[-4];
  }
  else {
    lVar14 = *(longlong *)(unaff_RBP + 8);
    puVar1 = (int16_t *)(lVar14 + 0x188);
    *(int16_t *)((longlong)in_stack_00000040 + 0xba) = *puVar1;
    FUN_18011d9a0(puVar1,&stack0x00000040);
    fVar32 = unaff_RBP[-4];
    if (((((uint)fVar33 >> 0x1a & 1) == 0) && (cVar7 == '\0')) && (fVar32 != 3.761582e-37)) {
      in_stack_00000040[8] = *(longlong *)(lVar14 + 0x100);
    }
  }
  if ((*(float *)(in_stack_00000040 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((longlong)in_stack_00000040 + 0xdc) != 0)) {
    if (((uint)fVar33 >> 0x1c & 1) == 0) {
      if ((((((uint)fVar33 >> 0x1a & 1) != 0) && (in_stack_00000048 == '\0')) &&
          (0 < (int)in_stack_00000068)) ||
         (((cVar7 = in_stack_00000048, ((uint)fVar33 >> 0x19 & 1) != 0 &&
           (in_stack_00000048 == '\0')) && (fVar32 != 3.761582e-37)))) {
        puVar27 = (int32_t *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
        uVar11 = puVar27[1];
        *(int32_t *)(in_stack_00000040 + 8) = *puVar27;
        *(int32_t *)((longlong)in_stack_00000040 + 0x44) = uVar11;
        cVar7 = in_stack_00000048;
      }
    }
    else {
      puVar27 = (int32_t *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
      uVar11 = puVar27[1];
      *(int32_t *)(in_stack_00000040 + 8) = *puVar27;
      *(int32_t *)((longlong)in_stack_00000040 + 0x44) = uVar11;
    }
  }
  else {
    fVar34 = *(float *)(in_stack_00000040 + 0x1e) -
             *(float *)(in_stack_00000040 + 0x1f) * *(float *)(in_stack_00000040 + 10);
    fVar32 = *(float *)((longlong)in_stack_00000040 + 0xf4) -
             *(float *)((longlong)in_stack_00000040 + 0x54) *
             *(float *)((longlong)in_stack_00000040 + 0xfc);
    if (fVar34 <= *(float *)(unaff_RSI + 0x16b4)) {
      fVar34 = *(float *)(unaff_RSI + 0x16b4);
    }
    if (fVar32 <= *(float *)(unaff_RSI + 0x16b8)) {
      fVar32 = *(float *)(unaff_RSI + 0x16b8);
    }
    _fStack0000000000000070 = CONCAT44(fVar32,fVar34);
    func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,0);
  }
  if (*(int *)((longlong)in_stack_00000040 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((longlong)in_stack_00000040 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((longlong)in_stack_00000040 + 0xae) == '\0') {
      if (*(char *)(in_stack_00000040[5] + 0x77) == '\0') {
        pfVar16 = (float *)func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 0x20);
        pfVar17 = (float *)func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x20);
        if (((*pfVar17 <= *pfVar16 && *pfVar16 != *pfVar17) ||
            (pfVar17[1] <= pfVar16[1] && pfVar16[1] != pfVar17[1])) ||
           ((pfVar16[2] < pfVar17[2] || (pfVar16[3] < pfVar17[3])))) {
          in_stack_00000020 = (uint64_t *)CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),4);
          lVar14 = FUN_180130830(in_stack_00000040,(int)in_stack_00000040[1],in_stack_00000040 + 8,
                                 in_stack_00000040 + 9,in_stack_00000020);
          in_stack_00000040[5] = lVar14;
          func_0x00018012fb50(in_stack_00000040,lVar14);
          if ((*(uint *)(unaff_RSI + 8) & 0x8000) == 0) {
            uVar11 = 0x3f800000;
          }
          else {
            uVar11 = *(int32_t *)(in_stack_00000040[5] + 0x18);
          }
          *(int32_t *)((longlong)in_stack_00000040 + 0x2dc) = uVar11;
          func_0x000180123e50(in_stack_00000040);
        }
      }
      goto LAB_18012aa37;
    }
LAB_18012aa45:
    if (*(char *)(in_stack_00000040[5] + 0x49) != '\0') {
      in_stack_00000040[8] = *(longlong *)(in_stack_00000040[5] + 8);
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) != '\0') {
      lVar14 = *(longlong *)(in_stack_00000040[5] + 0x10);
      in_stack_00000040[10] = lVar14;
      in_stack_00000040[9] = lVar14;
    }
    uVar22 = *(uint *)(in_stack_00000040[5] + 4) & 0xffffffdc;
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
    iVar24 = (int)in_stack_00000040[3];
    if ((iVar24 == 0) && (iVar24 = 0x11111111, *(char *)(unaff_RSI + 199) != '\0')) {
      iVar24 = 0;
    }
    *(int *)(in_stack_00000040[5] + 0x28) = iVar24;
    uVar22 = *(uint *)((longlong)in_stack_00000040 + 0x1c);
    if (uVar22 != 0) {
      uVar9 = uVar9 & ~uVar22 | *(uint *)(in_stack_00000040 + 4) & uVar22;
    }
    *(uint *)(in_stack_00000040[5] + 4) = uVar9 | 0x10;
  }
  func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 4);
  if ((((cVar7 == '\0') && (fVar31 == 0.0)) && (*(int *)((longlong)in_stack_00000040 + 0xc4) < 1))
     && ((int)in_stack_00000040[0x19] < 1)) {
    func_0x00018011fc50(&stack0x00000060,unaff_RSI + 0x16ac,unaff_RSI + 0x16b4);
    if (*(char *)((longlong)in_stack_00000040 + 0xae) == '\0') {
      if ((0.0 < unaff_RBP[6] - unaff_RBP[4]) && (0.0 < unaff_RBP[7] - unaff_RBP[5])) {
        pfVar16 = unaff_RBP + 4;
LAB_18012ac57:
        func_0x000180129830(in_stack_00000040,pfVar16,&stack0x00000060);
      }
    }
    else if (0 < *(int *)(unaff_RSI + 0x1600)) {
      if (*(short *)(in_stack_00000040[5] + 0x74) != -1) {
        lVar23 = (longlong)*(short *)(in_stack_00000040[5] + 0x74);
        pfVar16 = unaff_RBP + -8;
        lVar14 = *(longlong *)(unaff_RSI + 0x1608);
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
                    *(float *)(**(longlong **)(unaff_RSI + 0x1c70) + 0xc),
                    *(float *)(**(longlong **)(unaff_RSI + 0x1c70) + 8) +
                    *(float *)(unaff_RSI + 0x16ac));
      func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,1);
    }
  }
  *(float *)(in_stack_00000040 + 8) = (float)(int)*(float *)(in_stack_00000040 + 8);
  *(float *)((longlong)in_stack_00000040 + 0x44) =
       (float)(int)*(float *)((longlong)in_stack_00000040 + 0x44);
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
  *(int32_t *)(in_stack_00000040 + 0xf) = uVar11;
  if (*(char *)((longlong)in_stack_00000040 + 0xae) != '\0') {
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
  if ((*(int *)((longlong)in_stack_00000040 + 0x404) == 0x7fffffff) ||
     (iVar24 = *(int *)((longlong)in_stack_00000040 + 0x3f4), iVar24 == -1)) {
    iVar24 = 0x7fffffff;
  }
  else {
    iVar24 = (*(int *)((longlong)in_stack_00000040 + 0x404) + 1 + iVar24) % (iVar24 + 1);
  }
  *(int *)((longlong)in_stack_00000040 + 0x3fc) = iVar24;
  pfVar16 = unaff_RBP + -0x18;
  *(int32_t *)((longlong)in_stack_00000040 + 0x3f4) = 0xffffffff;
  *(int32_t *)(in_stack_00000040 + 0x7e) = 0xffffffff;
  *(int32_t *)((longlong)in_stack_00000040 + 0x404) = 0x7fffffff;
  *(int32_t *)(in_stack_00000040 + 0x80) = 0x7fffffff;
  puVar27 = (int32_t *)FUN_1801293e0(pfVar16,in_stack_00000040,1);
  plVar19 = in_stack_00000040;
  in_stack_00000068 = (uint)pfVar16 & 0xffffff00;
  uVar11 = puVar27[1];
  *(int32_t *)((longlong)in_stack_00000040 + 0x8c) = *puVar27;
  *(int32_t *)(in_stack_00000040 + 0x12) = uVar11;
  *(int32_t *)((longlong)in_stack_00000040 + 0x94) = 0x7f7fffff;
  *(int32_t *)(in_stack_00000040 + 0x13) = 0x7f7fffff;
  if ((cVar2 != '\0') && (((uint)fVar33 >> 0xc & 1) == 0)) {
    if (((uint)fVar33 >> 0x1a & 1) == 0) {
      if (((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0) || (fVar31 == 0.0)) {
        in_stack_00000068 = (uint)(((uint)fVar33 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar22 = in_stack_00000068 >> 8;
      in_stack_00000068 = CONCAT31((int3)uVar22,1);
    }
  }
  fVar31 = *(float *)(unaff_RSI + 0x19f8);
  fVar32 = *(float *)(in_stack_00000040 + 0xf);
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
  cVar2 = *(char *)((longlong)in_stack_00000040 + 0xb2);
  fVar31 = (float)(int)fVar31;
  *(ulonglong *)(unaff_RBP + -0xe) = (ulonglong)(cVar7 != '\0') + 1;
  lVar14 = _DAT_180c8a9b0;
  in_stack_00000200 = unaff_XMM9_Qa;
  in_stack_00000208 = unaff_XMM9_Qb;
  if ((((cVar2 == '\0') && ((*(byte *)((longlong)in_stack_00000040 + 0xc) & 0x42) == 0)) &&
      (*(int *)((longlong)in_stack_00000040 + 0xc4) < 1)) &&
     (((int)in_stack_00000040[0x19] < 1 && ((char)in_stack_00000040[0x16] != '\0')))) {
    cVar7 = *(char *)(_DAT_180c8a9b0 + 0xcb);
    fVar34 = *(float *)(_DAT_180c8a9b0 + 0x19f8) * 1.35;
    fVar33 = fVar32 + 1.0 + *(float *)(_DAT_180c8a9b0 + 0x19f8) * 0.2;
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
    FUN_18012e1b0(&unknown_var_2464_ptr);
    lVar23 = _fStack0000000000000050;
    lVar29 = 0;
    pfVar16 = (float *)0x180bf66e8;
    do {
      uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
      _fStack0000000000000050 =
           CONCAT44(*(float *)((longlong)plVar19 + 0x4c) + *(float *)((longlong)plVar19 + 0x44),
                    *(float *)(plVar19 + 8) + *(float *)(plVar19 + 9));
      func_0x00018011fcd0(unaff_RBP + 0xe,plVar19 + 8,&stack0x00000050,pfVar16 + -2);
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
      uVar10 = func_0x000180123c50(plVar19,(longlong)(int)uVar9);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,0x2020);
      FUN_18010f170(unaff_RBP + -0x1c,uVar10,&stack0x00000048,&stack0x00000049,in_stack_00000020);
      if (((in_stack_00000048 == '\0') && (cStack0000000000000049 == '\0')) ||
         (*(uint *)(lVar14 + 0x1dcc) = (~uVar9 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
        if (uVar9 == 0) goto LAB_18012b0c8;
        if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
        if (in_stack_00000048 != '\0') goto LAB_18012b1a3;
      }
      else {
        if ((*(char *)(lVar14 + 0x415) == '\0') || (uVar9 != 0)) {
          fVar34 = *pfVar16;
          fVar38 = pfVar16[1];
          unaff_RBP[0x10] = fVar34 * -fVar32;
          unaff_RBP[0x11] = fVar38 * -fVar32;
          unaff_RBP[0x12] = fVar33 * fVar34;
          unaff_RBP[0x13] = fVar33 * fVar38;
          pfVar17 = (float *)func_0x00018011fcd0(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                                 pfVar16 + -2);
          fVar34 = *(float *)(lVar14 + 0x118);
          fVar38 = *(float *)(lVar14 + 0x1b48);
          fVar35 = *pfVar17;
          in_stack_00000020 = (uint64_t *)&stack0x00000060;
          unaff_RBP[0x15] = (*(float *)(lVar14 + 0x11c) - *(float *)(lVar14 + 0x1b4c)) + pfVar17[1];
          unaff_RBP[0x14] = (fVar34 - fVar38) + fVar35;
          FUN_1801295b0(plVar19,unaff_RBP + 0x14,pfVar16 + -2,&stack0x00000070,in_stack_00000020);
          goto LAB_18012b18f;
        }
        pfVar17 = (float *)FUN_180128fd0(unaff_RBP + -0x14,plVar19,lVar23);
        fStack0000000000000060 = *pfVar17;
        fStack0000000000000064 = pfVar17[1];
        func_0x000180123e90(0,0);
LAB_18012b0c8:
        if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
          cVar7 = (in_stack_00000048 != '\0') + '\x1e';
        }
        else {
LAB_18012b0d0:
          cVar7 = ' ';
        }
        fVar34 = (float)FUN_180121ed0(cVar7);
        unaff_RBP[lVar29 + 0x20] = fVar34;
      }
      uVar9 = uVar9 + 1;
      lVar29 = lVar29 + 1;
      pfVar16 = pfVar16 + 6;
    } while (lVar29 < *(longlong *)(unaff_RBP + -0xe));
    fVar34 = unaff_RBP[2];
    fVar33 = unaff_RBP[-10];
    fVar38 = 0.0;
    if (fVar34 != 0.0) {
      do {
        uVar15 = CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),0x40800000);
        FUN_1801296e0(unaff_RBP + -0x20,plVar19,fVar38,fVar32,uVar15);
        uVar10 = (int32_t)((ulonglong)uVar15 >> 0x20);
        uVar11 = func_0x000180123c50(plVar19,(longlong)((int)fVar38 + 4));
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar10,0x20);
        FUN_18010f170(unaff_RBP + -0x20,uVar11,(longlong)&stack0x00000058 + 1,&stack0x00000058,
                      in_stack_00000020);
        if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar14 + 0x1b24))) ||
            (cStack0000000000000058 != '\0')) &&
           (*(uint *)(lVar14 + 0x1dcc) = ((uint)fVar38 & 1) + 3, cStack0000000000000058 != '\0')) {
          *(longlong *)(unaff_RBP + -10) = plVar19[8];
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
          in_stack_00000020 = (uint64_t *)&stack0x00000060;
          FUN_1801295b0(plVar19,unaff_RBP + -10,&stack0x00000050,&stack0x00000070,in_stack_00000020)
          ;
        }
        fVar38 = (float)((int)fVar38 + 1);
      } while ((int)fVar38 < (int)fVar34);
    }
    piVar25 = (int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1af8) + 0x218);
    *piVar25 = *piVar25 + -1;
    if ((*(longlong *)(lVar14 + 0x1cd8) != 0) &&
       (*(longlong **)(*(longlong *)(lVar14 + 0x1cd8) + 0x3a0) == plVar19)) {
      iVar24 = *(int *)(lVar14 + 0x1cc0);
      fVar34 = 0.0;
      fVar32 = 0.0;
      if (iVar24 == 3) {
        if (*(char *)(lVar14 + 0x135) == '\0') goto LAB_18012b465;
        in_stack_00000020 = (uint64_t *)((ulonglong)in_stack_00000020 & 0xffffffff00000000);
        pfVar16 = (float *)FUN_180131aa0(unaff_RBP + -0x14,1,0,0,in_stack_00000020);
        fVar32 = *pfVar16;
        fVar34 = pfVar16[1];
        iVar24 = *(int *)(lVar14 + 0x1cc0);
      }
      if (iVar24 == 4) {
        in_stack_00000020 = (uint64_t *)((ulonglong)in_stack_00000020 & 0xffffffff00000000);
        pfVar16 = (float *)FUN_180131aa0(unaff_RBP + 0x18,2,0,0,in_stack_00000020);
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
        fVar38 = (float)FUN_180121ed0(0x20);
        unaff_RBP[0x20] = fVar38;
        pfVar16 = (float *)FUN_180128fd0(unaff_RBP + -0x18,plVar19,
                                         CONCAT44(fVar34 * fVar35 +
                                                  *(float *)((longlong)plVar19 + 0x54),
                                                  fVar32 * fVar35 + *(float *)(plVar19 + 10)));
        fStack0000000000000060 = *pfVar16;
        fStack0000000000000064 = pfVar16[1];
      }
    }
LAB_18012b465:
    lVar14 = _DAT_180c8a9b0;
    if ((fStack0000000000000060 != 3.4028235e+38) &&
       ((fStack0000000000000060 != *(float *)(plVar19 + 10) ||
        (fStack0000000000000064 != *(float *)((longlong)plVar19 + 0x54))))) {
      *(float *)(plVar19 + 10) = fStack0000000000000060;
      *(float *)((longlong)plVar19 + 0x54) = fStack0000000000000064;
      if (((*(uint *)((longlong)plVar19 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar14 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar14 + 0x2e04) = *(int32_t *)(lVar14 + 0x1c);
      }
    }
    lVar14 = _DAT_180c8a9b0;
    if (fStack0000000000000070 != 3.4028235e+38) {
      *(float *)(plVar19 + 8) = (float)(int)fStack0000000000000070;
      *(float *)((longlong)plVar19 + 0x44) = (float)(int)fStack0000000000000074;
      if (((*(uint *)((longlong)plVar19 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar14 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar14 + 0x2e04) = *(int32_t *)(lVar14 + 0x1c);
      }
    }
    plVar19[9] = plVar19[10];
  }
  pfVar16 = (float *)0x180bf66e8;
  if (*(char *)((longlong)in_stack_00000040 + 0xae) != '\0') {
    if (*(char *)(in_stack_00000040[5] + 0x49) == '\0') {
      *(longlong *)(in_stack_00000040[5] + 8) = in_stack_00000040[8];
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) == '\0') {
      *(longlong *)(in_stack_00000040[5] + 0x10) = in_stack_00000040[9];
    }
    puVar18 = (uint64_t *)func_0x00018011feb0(in_stack_00000040[5]);
    uVar15 = puVar18[1];
    *(uint64_t *)(unaff_RBP + 4) = *puVar18;
    *(uint64_t *)(unaff_RBP + 6) = uVar15;
  }
  *(uint64_t *)((longlong)in_stack_00000040 + 0x34) = *(uint64_t *)(in_stack_00000040[5] + 8);
  if ((*(float *)(in_stack_00000040 + 9) <= 0.0) || (((uint)fVar33 & 0x2000040) != 0)) {
    fVar32 = *(float *)(unaff_RSI + 0x19f8) * 16.0;
  }
  else {
    fVar32 = *(float *)(in_stack_00000040 + 9) * 0.65;
  }
  *(float *)((longlong)in_stack_00000040 + 0x284) = (float)(int)fVar32;
  FUN_180291500(in_stack_00000040[0x5d]);
  *(uint *)(in_stack_00000040[0x5d] + 0x30) =
       -(uint)(*(char *)(unaff_RSI + 0x16c1) != '\0') & 2 |
       (uint)(*(char *)(unaff_RSI + 0x16c0) != '\0');
  lVar14 = in_stack_00000040[0x5d];
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x19f0) + 0x58) + 8);
  FUN_18011d9a0(lVar14 + 0x70,unaff_RBP + -0x14);
  FUN_180291a50(lVar14);
  if ((((uint)fVar33 & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar17 = (float *)(*(longlong *)(unaff_RBP + 8) + 0x228);
    pfVar26 = (float *)(*(longlong *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar17 = unaff_RBP + 4;
    pfVar26 = unaff_RBP + 6;
  }
  FUN_180126d10(pfVar17,pfVar26);
  if (((((uint)fVar33 >> 0x1b & 1) == 0) ||
      (plVar19 = (longlong *)func_0x00018012ea90(), in_stack_00000040 != plVar19)) ||
     (0 < *(int *)((longlong)in_stack_00000040 + 0xdc))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  lVar14 = *(longlong *)(unaff_RSI + 0x1ce0);
  if ((lVar14 == 0) ||
     ((in_stack_00000040 != *(longlong **)(lVar14 + 0x3a0) &&
      (((plVar19 = *(longlong **)(unaff_RSI + 0x1ce8), plVar19 == (longlong *)0x0 ||
        (in_stack_00000040 != plVar19)) || (plVar19[5] == *(longlong *)(lVar14 + 0x28))))))) {
    bVar30 = false;
  }
  else {
    bVar30 = true;
  }
  if ((bVar28 != 0) || (bVar30)) {
    fVar32 = *(float *)(unaff_RSI + 0x1dc8);
    fVar34 = *(float *)(_DAT_180c8a9b0 + 0x1628);
    pfVar17 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar28 + 0x3a) * 0x10);
    fVar38 = pfVar17[1];
    fVar35 = pfVar17[2];
    fVar36 = pfVar17[3];
    unaff_RBP[-0x20] = *pfVar17;
    unaff_RBP[-0x1f] = fVar38;
    unaff_RBP[-0x1e] = fVar35;
    unaff_RBP[-0x1d] = fVar36;
    unaff_RBP[-0x1d] = fVar36 * fVar32 * fVar34;
    uVar11 = func_0x000180121e20(unaff_RBP + -0x20);
    in_stack_00000020 = (uint64_t *)((ulonglong)in_stack_00000020 & 0xffffffff00000000);
    FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + 4,unaff_RBP + 6,uVar11,in_stack_00000020);
    if ((bVar30) && (in_stack_00000040 == *(longlong **)(unaff_RSI + 0x1ce0))) {
      func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e610(unaff_RBP + -0x18);
      uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar32 = *(float *)(unaff_RSI + 0x1cf4);
        lVar14 = in_stack_00000040[0x5d];
        uVar10 = *(int32_t *)(unaff_RSI + 0x1634);
        fVar38 = *(float *)(_DAT_180c8a9b0 + 0x19bc);
        fVar35 = *(float *)(_DAT_180c8a9b0 + 0x19c0);
        fVar36 = *(float *)(_DAT_180c8a9b0 + 0x19c4);
        fVar34 = *(float *)(_DAT_180c8a9b0 + 0x1628);
        unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x19b8);
        unaff_RBP[-0x1f] = fVar38;
        unaff_RBP[-0x1e] = fVar35;
        unaff_RBP[-0x1d] = fVar36;
        unaff_RBP[-0x1d] = fVar36 * fVar32 * 0.25 * fVar34;
        uVar12 = func_0x000180121e20(unaff_RBP + -0x20);
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,uVar10);
        FUN_180293f50(lVar14,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar12,in_stack_00000020);
      }
    }
  }
  uVar9 = in_stack_00000068;
  lVar14 = *(longlong *)(unaff_RSI + 0x1cd8);
  fVar32 = *(float *)(in_stack_00000040 + 0xf);
  fVar34 = *(float *)((longlong)in_stack_00000040 + 0x7c);
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(unaff_RSI + 0x1c98);
  }
  if (((char)in_stack_00000068 == '\0') &&
     ((lVar14 == 0 ||
      ((in_stack_00000040[0x76] != *(longlong *)(lVar14 + 0x3b0) &&
       ((in_stack_00000040[0x81] == 0 || (in_stack_00000040[0x81] != *(longlong *)(lVar14 + 0x408)))
       )))))) {
    bVar28 = 0;
  }
  else {
    bVar28 = 1;
  }
  func_0x000180120c80(in_stack_00000040,unaff_RBP + -2);
  plVar19 = in_stack_00000040;
  uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  if (*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)fVar33 & 0x80);
    if (((uint)fVar33 & 0x80) == 0) {
      bVar30 = false;
      if (((*(char *)(unaff_RSI + 0x1dd0) != '\0') &&
          (*(int *)(unaff_RSI + 0x1a90) - *(int *)(unaff_RSI + 0x1e44) < 2)) &&
         ((*(char *)(unaff_RSI + 0xc3) != '\0' &&
          (((*(int *)(unaff_RSI + 0x1df4) != -1 &&
            (iVar24 = strcmp(&unknown_var_2304_ptr,unaff_RSI + 0x1df8), iVar24 == 0)) &&
           (bVar30 = false, (longlong *)**(uint64_t **)(unaff_RSI + 0x1de0) == plVar19)))))) {
        bVar30 = true;
      }
      lVar14 = _DAT_180c8a9b0;
      if (((uint)fVar33 & 0x6000000) == 0) {
        lVar23 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar23 = 0xd0;
        }
      }
      else {
        lVar23 = 0xe0;
      }
      pfVar17 = (float *)(lVar23 + 0x1628 + _DAT_180c8a9b0);
      fVar38 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar36 = pfVar17[3];
      unaff_RBP[-0x20] = *pfVar17;
      unaff_RBP[-0x1f] = fVar38;
      unaff_RBP[-0x1e] = fVar35;
      unaff_RBP[-0x1d] = fVar36;
      unaff_RBP[-0x1d] = fVar36 * *(float *)(lVar14 + 0x1628);
      uVar9 = func_0x000180121e20(unaff_RBP + -0x20);
      if (*(char *)((longlong)in_stack_00000040 + 0xae) == '\0') {
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
          *(float *)(in_stack_00000040[5] + 0x6c) = *(float *)(in_stack_00000040[5] + 0x6c) * 0.5;
        }
      }
      fVar38 = *(float *)(in_stack_00000040 + 9);
      fVar35 = *(float *)(in_stack_00000040 + 8);
      lVar14 = in_stack_00000040[0x5d];
      unaff_RBP[0x15] =
           *(float *)((longlong)in_stack_00000040 + 0x4c) +
           *(float *)((longlong)in_stack_00000040 + 0x44);
      unaff_RBP[0x14] = fVar38 + fVar35;
      fVar35 = (float)func_0x00018010e760(in_stack_00000040);
      fVar38 = *(float *)((longlong)in_stack_00000040 + 0x44);
      unaff_RBP[0x12] = *(float *)(in_stack_00000040 + 8);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,fVar32);
      unaff_RBP[0x13] = fVar35 + fVar38;
      FUN_180293f50(lVar14,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar9,in_stack_00000020);
    }
    uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    bVar30 = false;
    *(int32_t *)(unaff_RSI + 0x1be8) = 0;
    lVar14 = _DAT_180c8a9b0;
    if ((((uint)fVar33 & 1) == 0) && ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
      pfVar17 = (float *)(_DAT_180c8a9b0 + 0x1628 + ((ulonglong)bVar28 + 0x14) * 0x10);
      fVar38 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar36 = pfVar17[3];
      unaff_RBP[-0x20] = *pfVar17;
      unaff_RBP[-0x1f] = fVar38;
      unaff_RBP[-0x1e] = fVar35;
      unaff_RBP[-0x1d] = fVar36;
      unaff_RBP[-0x1d] = fVar36 * *(float *)(lVar14 + 0x1628);
      func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,fVar32);
      FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + -2);
    }
    uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if (((uint)fVar33 >> 10 & 1) != 0) {
      func_0x00018010e7f0(in_stack_00000040,unaff_RBP + -8);
      uVar15 = func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e690(unaff_RBP + -8,uVar15);
      lVar23 = _DAT_180c8a9b0;
      lVar14 = in_stack_00000040[0x5d];
      fVar38 = fVar32;
      if (((uint)fVar33 & 1) == 0) {
        fVar38 = 0.0;
      }
      fVar35 = *(float *)(_DAT_180c8a9b0 + 0x179c);
      fVar36 = *(float *)(_DAT_180c8a9b0 + 0x17a0);
      fVar37 = *(float *)(_DAT_180c8a9b0 + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x1798);
      unaff_RBP[-0x1f] = fVar35;
      unaff_RBP[-0x1e] = fVar36;
      unaff_RBP[-0x1d] = fVar37;
      unaff_RBP[-0x1d] = fVar37 * *(float *)(lVar23 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,fVar38);
      FUN_180293f50(lVar14,unaff_RBP + -8,unaff_RBP + -6,uVar10,in_stack_00000020);
      lVar14 = _DAT_180c8a9b0;
      uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
      fVar38 = *(float *)(unaff_RSI + 0x1668);
      if ((0.0 < fVar38) &&
         (unaff_RBP[-5] <
          *(float *)((longlong)in_stack_00000040 + 0x4c) +
          *(float *)((longlong)in_stack_00000040 + 0x44))) {
        lVar23 = in_stack_00000040[0x5d];
        fVar35 = *(float *)(_DAT_180c8a9b0 + 0x171c);
        fVar36 = *(float *)(_DAT_180c8a9b0 + 0x1720);
        fVar37 = *(float *)(_DAT_180c8a9b0 + 0x1724);
        unaff_RBP[-0x20] = *(float *)(_DAT_180c8a9b0 + 0x1718);
        unaff_RBP[-0x1f] = fVar35;
        unaff_RBP[-0x1e] = fVar36;
        unaff_RBP[-0x1d] = fVar37;
        unaff_RBP[-0x1d] = fVar37 * *(float *)(lVar14 + 0x1628);
        uVar10 = func_0x000180121e20(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,fVar38);
        FUN_180293d20(lVar23,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar10,in_stack_00000020);
      }
    }
    uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    lVar14 = in_stack_00000040[0x81];
    if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0xa0) & 0x40) != 0)) {
      fVar38 = *(float *)(lVar14 + 0x38);
      fVar35 = *(float *)(unaff_RSI + 0x19f8);
      fVar36 = *(float *)(lVar14 + 0x3c);
      _fStack0000000000000050 = *(longlong *)(lVar14 + 0x38);
      unaff_RBP[-0x20] = fVar38;
      unaff_RBP[-0x1f] = fVar36;
      fVar37 = (float)(int)(fVar35 * 0.7);
      fVar35 = (float)(int)(fVar35 * 0.55);
      unaff_RBP[-0x1e] = fVar38 + fVar35;
      unaff_RBP[-0x1d] = fVar36 + fVar35;
      uVar10 = FUN_180123c00(in_stack_00000040,&unknown_var_2496_ptr,0);
      uVar15 = CONCAT44(uVar11,0x20);
      cVar7 = FUN_18010f170(unaff_RBP + -0x20,uVar10,(longlong)&stack0x00000058 + 1,&stack0x00000058
                            ,uVar15);
      uVar11 = (int32_t)((ulonglong)uVar15 >> 0x20);
      if (cVar7 != '\0') {
        *(byte *)(in_stack_00000040[0x81] + 0xa1) = *(byte *)(in_stack_00000040[0x81] + 0xa1) | 0x10
        ;
      }
      lVar14 = _DAT_180c8a9b0;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(in_stack_00000040[0x81] + 0xa0) & 8) == 0 || (cStack0000000000000059 != '\0'))
         )) {
        lVar23 = (ulonglong)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar23 = 0x17;
      }
      pfVar17 = (float *)(_DAT_180c8a9b0 + 0x1628 + (lVar23 + 10) * 0x10);
      fVar38 = pfVar17[1];
      fVar35 = pfVar17[2];
      fVar36 = pfVar17[3];
      unaff_RBP[-0x14] = *pfVar17;
      unaff_RBP[-0x13] = fVar38;
      unaff_RBP[-0x12] = fVar35;
      unaff_RBP[-0x11] = fVar36;
      unaff_RBP[-0x11] = fVar36 * *(float *)(lVar14 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + -0x14);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,uVar10);
      lVar14 = in_stack_00000040[0x5d];
      unaff_RBP[0xe] = fStack0000000000000050;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar37;
      _fStack0000000000000070 = CONCAT44(fStack0000000000000054,fStack0000000000000050 + fVar37);
      FUN_1802940f0(lVar14,&stack0x00000050,&stack0x00000070,unaff_RBP + 0xe,in_stack_00000020);
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xac) != '\0') {
      FUN_180110540(0);
    }
    if (*(char *)((longlong)in_stack_00000040 + 0xad) != '\0') {
      FUN_180110540(1);
    }
    if (((uint)fVar33 & 2) == 0) {
      lVar14 = 0;
      do {
        uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
        fVar38 = *(float *)(in_stack_00000040 + 8);
        fVar35 = *(float *)((longlong)in_stack_00000040 + 0x44);
        lVar23 = in_stack_00000040[0x5d];
        fVar38 = ((fVar38 + *(float *)(in_stack_00000040 + 9)) - fVar38) * pfVar16[-2] + fVar38;
        fVar35 = ((fVar35 + *(float *)((longlong)in_stack_00000040 + 0x4c)) - fVar35) * pfVar16[-1]
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
        pfVar17 = (float *)((longlong)&stack0x00000060 + 4);
        if (bVar30) {
          pfVar17 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar36 * *pfVar16 + fVar38;
        unaff_RBP[-3] = *pfVar17 * pfVar16[1] + fVar35;
        FUN_18011d9a0(lVar23 + 0x80,unaff_RBP + -4);
        lVar23 = in_stack_00000040[0x5d];
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
        FUN_18011d9a0(lVar23 + 0x80,unaff_RBP + 0x18);
        fVar36 = pfVar16[1];
        lVar23 = in_stack_00000040[0x5d];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,pfVar16[3]);
        unaff_RBP[-0x14] = (fVar34 + fVar32) * *pfVar16 + fVar38;
        unaff_RBP[-0x13] = (fVar34 + fVar32) * fVar36 + fVar35;
        FUN_180293730(lVar23,unaff_RBP + -0x14);
        lVar23 = in_stack_00000040[0x5d];
        FUN_180293190(lVar23,*(uint64_t *)(lVar23 + 0x88),*(int32_t *)(lVar23 + 0x80),
                      unaff_RBP[lVar14 + 0x20],in_stack_00000020);
        bVar30 = (bool)(bVar30 ^ 1);
        *(int32_t *)(lVar23 + 0x80) = 0;
        lVar14 = lVar14 + 1;
        pfVar16 = pfVar16 + 6;
      } while (lVar14 < *(longlong *)(unaff_RBP + -0xe));
    }
    lVar14 = _DAT_180c8a9b0;
    if ((0.0 < fVar34) && (unaff_RBP[-10] == 0.0)) {
      lVar23 = in_stack_00000040[0x5d];
      fVar38 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      fVar35 = *(float *)(_DAT_180c8a9b0 + 0x1720);
      fVar36 = *(float *)(_DAT_180c8a9b0 + 0x1724);
      unaff_RBP[0x20] = *(float *)(_DAT_180c8a9b0 + 0x1718);
      unaff_RBP[0x21] = fVar38;
      unaff_RBP[0x22] = fVar35;
      unaff_RBP[0x23] = fVar36;
      unaff_RBP[0x23] = fVar36 * *(float *)(lVar14 + 0x1628);
      uVar9 = func_0x000180121e20(unaff_RBP + 0x20);
      fVar38 = *(float *)((longlong)in_stack_00000040 + 0x44);
      fVar35 = *(float *)(in_stack_00000040 + 8) + *(float *)(in_stack_00000040 + 9);
      fVar36 = fVar38 + *(float *)((longlong)in_stack_00000040 + 0x4c);
      if ((uVar9 & 0xff000000) != 0) {
        bVar28 = *(byte *)(lVar23 + 0x30);
        in_stack_00000020 = (uint64_t *)CONCAT44((int)((ulonglong)in_stack_00000020 >> 0x20),0xf);
        unaff_RBP[-0x14] = *(float *)(in_stack_00000040 + 8) + 0.5;
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
        FUN_1802939e0(lVar23,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar32,in_stack_00000020);
        FUN_18010e4e0(lVar23,uVar9,1,fVar34);
      }
    }
    uVar11 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
    if (unaff_RBP[0xc] != -NAN) {
      uVar39 = (ulonglong)in_stack_00000020 & 0xffffffff00000000;
      FUN_1801296e0(unaff_RBP + -0x14,in_stack_00000040,unaff_RBP[0xc],fVar31,uVar39);
      lVar23 = _DAT_180c8a9b0;
      uVar10 = (int32_t)(uVar39 >> 0x20);
      lVar14 = in_stack_00000040[0x5d];
      fVar31 = *(float *)(_DAT_180c8a9b0 + 0x189c);
      fVar32 = *(float *)(_DAT_180c8a9b0 + 0x18a0);
      fVar38 = *(float *)(_DAT_180c8a9b0 + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(_DAT_180c8a9b0 + 0x1898);
      unaff_RBP[-0xd] = fVar31;
      unaff_RBP[-0xc] = fVar32;
      unaff_RBP[-0xb] = fVar38;
      unaff_RBP[-0xb] = fVar38 * *(float *)(lVar23 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + -0xe);
      if (fVar34 <= 1.0) {
        fVar34 = 1.0;
      }
      uVar15 = CONCAT44(uVar10,fVar34);
      FUN_180293d20(lVar14,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar11,uVar15);
      uVar11 = (int32_t)((ulonglong)uVar15 >> 0x20);
    }
    lVar14 = _DAT_180c8a9b0;
    fVar31 = *(float *)(unaff_RSI + 0x1668);
    uVar9 = in_stack_00000068;
    if (((0.0 < fVar31) && (((uint)fVar33 & 1) == 0)) &&
       ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
      lVar23 = in_stack_00000040[0x5d];
      fVar32 = *(float *)(_DAT_180c8a9b0 + 0x171c);
      fVar34 = *(float *)(_DAT_180c8a9b0 + 0x1720);
      fVar38 = *(float *)(_DAT_180c8a9b0 + 0x1724);
      unaff_RBP[0x18] = *(float *)(_DAT_180c8a9b0 + 0x1718);
      unaff_RBP[0x19] = fVar32;
      unaff_RBP[0x1a] = fVar34;
      unaff_RBP[0x1b] = fVar38;
      unaff_RBP[0x1b] = fVar38 * *(float *)(lVar14 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + 0x18);
      fVar32 = *(float *)(unaff_RSI + 0x1638);
      uVar15 = CONCAT44(uVar11,fVar31);
      unaff_RBP[-0xe] = *unaff_RBP - fVar32;
      unaff_RBP[-0xd] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x13] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar32;
      FUN_180293d20(lVar23,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar10,uVar15);
      uVar11 = (int32_t)((ulonglong)uVar15 >> 0x20);
      uVar9 = in_stack_00000068;
    }
  }
  else {
    uVar10 = *(int32_t *)(unaff_RSI + 0x1668);
    *(int32_t *)(unaff_RSI + 0x1668) = *(int32_t *)((longlong)in_stack_00000040 + 0x7c);
    lVar14 = _DAT_180c8a9b0;
    if ((bVar28 == 0) || (lVar23 = 0x150, *(char *)(unaff_RSI + 0x1d06) != '\0')) {
      lVar23 = 0x160;
    }
    pfVar16 = (float *)(lVar23 + 0x1628 + _DAT_180c8a9b0);
    fVar31 = pfVar16[1];
    fVar34 = pfVar16[2];
    fVar38 = pfVar16[3];
    unaff_RBP[0x20] = *pfVar16;
    unaff_RBP[0x21] = fVar31;
    unaff_RBP[0x22] = fVar34;
    unaff_RBP[0x23] = fVar38;
    unaff_RBP[0x23] = fVar38 * *(float *)(lVar14 + 0x1628);
    uVar12 = func_0x000180121e20(unaff_RBP + 0x20);
    uVar15 = CONCAT44(uVar11,fVar32);
    FUN_180122960(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar12,1,uVar15);
    uVar11 = (int32_t)((ulonglong)uVar15 >> 0x20);
    *(int32_t *)(unaff_RSI + 0x1668) = uVar10;
  }
  pfVar16 = (float *)(unaff_RSI + 0x1668);
  in_stack_00000040[0xb] = in_stack_00000040[10];
  *(float *)(in_stack_00000040 + 0x4e) =
       (*(float *)(in_stack_00000040 + 8) - *(float *)((longlong)in_stack_00000040 + 0x8c)) +
       *(float *)(in_stack_00000040 + 0xe);
  fVar38 = (float)func_0x00018010e760(in_stack_00000040);
  fVar31 = *(float *)((longlong)in_stack_00000040 + 0x44);
  fVar32 = *(float *)(in_stack_00000040 + 0x12);
  fVar34 = *(float *)((longlong)in_stack_00000040 + 0x74);
  fVar35 = (float)func_0x00018010e7a0();
  *(float *)((longlong)in_stack_00000040 + 0x274) = fVar35 + fVar38 + (fVar31 - fVar32) + fVar34;
  fVar31 = *(float *)(in_stack_00000040 + 0xd);
  if (fVar31 == 0.0) {
    fVar31 = *(float *)(in_stack_00000040 + 9) - *(float *)((longlong)in_stack_00000040 + 0xa4);
  }
  *(float *)(in_stack_00000040 + 0x4f) =
       ((*(float *)(in_stack_00000040 + 8) - *(float *)((longlong)in_stack_00000040 + 0x8c)) -
       *(float *)(in_stack_00000040 + 0xe)) + fVar31;
  fVar31 = *(float *)((longlong)in_stack_00000040 + 0x6c);
  if (fVar31 == 0.0) {
    fVar31 = *(float *)((longlong)in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0x15);
  }
  *(float *)((longlong)in_stack_00000040 + 0x27c) =
       ((*(float *)((longlong)in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x12)) -
       *(float *)((longlong)in_stack_00000040 + 0x74)) + fVar31;
  *(float *)((longlong)in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0xe) - *(float *)((longlong)in_stack_00000040 + 0x8c);
  uVar12 = 0;
  *(int32_t *)(in_stack_00000040 + 0x41) = 0;
  *(int32_t *)((longlong)in_stack_00000040 + 0x20c) = 0;
  func_0x00018010e7a0(in_stack_00000040);
  func_0x00018010e760(in_stack_00000040);
  uVar15 = func_0x00018004ba20(unaff_RBP + -0x18,
                               *(float *)((longlong)in_stack_00000040 + 0x20c) +
                               *(float *)((longlong)in_stack_00000040 + 0x204));
  puVar27 = (int32_t *)func_0x00018011fbf0(unaff_RBP + -0xe,in_stack_00000040 + 8,uVar15);
  uVar10 = puVar27[1];
  *(int32_t *)(in_stack_00000040 + 0x22) = *puVar27;
  *(int32_t *)((longlong)in_stack_00000040 + 0x114) = uVar10;
  in_stack_00000040[0x20] = in_stack_00000040[0x22];
  in_stack_00000040[0x21] = in_stack_00000040[0x22];
  in_stack_00000040[0x23] = in_stack_00000040[0x22];
  puVar27 = (int32_t *)func_0x00018004ba20(unaff_RBP + -0x18);
  uVar10 = puVar27[1];
  *(int32_t *)((longlong)in_stack_00000040 + 300) = *puVar27;
  *(int32_t *)(in_stack_00000040 + 0x26) = uVar10;
  in_stack_00000040[0x24] = *(longlong *)((longlong)in_stack_00000040 + 300);
  *(int32_t *)((longlong)in_stack_00000040 + 0x134) = 0;
  *(int32_t *)(in_stack_00000040 + 0x25) = 0;
  *(int8_t *)((longlong)in_stack_00000040 + 0x17c) = 0;
  fVar31 = (float)func_0x0001801293c0(in_stack_00000040);
  *(bool *)((longlong)in_stack_00000040 + 0x17d) = 0.0 < fVar31;
  *(int *)((longlong)in_stack_00000040 + 0x174) = (int)in_stack_00000040[0x2f];
  *(int32_t *)(in_stack_00000040 + 0x2f) = 0;
  *(int8_t *)((longlong)in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x27) = *(float *)((longlong)in_stack_00000040 + 0x104) - 9999.0;
  FUN_18013e200(in_stack_00000040 + 0x31,0);
  lVar14 = *(longlong *)(unaff_RBP + 8);
  *(int32_t *)(in_stack_00000040 + 0x34) = 1;
  if (lVar14 == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = *(int32_t *)(lVar14 + 0x1a0);
  }
  *(int32_t *)((longlong)in_stack_00000040 + 0x1a4) = uVar10;
  if (lVar14 != 0) {
    uVar12 = *(int32_t *)(lVar14 + 0x1a8);
  }
  *(int32_t *)(in_stack_00000040 + 0x35) = uVar12;
  *(int32_t *)((longlong)in_stack_00000040 + 0x1ac) =
       *(int32_t *)((longlong)in_stack_00000040 + 0x284);
  *(int32_t *)(in_stack_00000040 + 0x36) = 0xbf800000;
  FUN_18013e340(in_stack_00000040 + 0x37,0);
  FUN_18013e2f0(in_stack_00000040 + 0x39,0);
  FUN_18013e2f0(in_stack_00000040 + 0x3b,0);
  in_stack_00000040[0x42] = 0;
  *(int32_t *)((longlong)in_stack_00000040 + 0x13c) = 0;
  *(int32_t *)(in_stack_00000040 + 0x28) = 0;
  in_stack_00000040[0x33] = (longlong)(in_stack_00000040 + 0x57);
  FUN_18013db40(in_stack_00000040 + 0x3d,0);
  func_0x00018011a9d0(in_stack_00000040 + 0x51,3);
  if ((unaff_RBP[0x16] != 0.0) && ((int)in_stack_00000040[0x35] != *(int *)(lVar14 + 0x1a8))) {
    *(int *)(in_stack_00000040 + 0x35) = *(int *)(lVar14 + 0x1a8);
    FUN_18011d940(in_stack_00000040 + 0x37,in_stack_00000040 + 0x35);
  }
  if (0 < *(int *)((longlong)in_stack_00000040 + 0xc4)) {
    *(int *)((longlong)in_stack_00000040 + 0xc4) = *(int *)((longlong)in_stack_00000040 + 0xc4) + -1
    ;
  }
  if (0 < (int)in_stack_00000040[0x19]) {
    *(int *)(in_stack_00000040 + 0x19) = (int)in_stack_00000040[0x19] + -1;
  }
  if ((char)uVar9 != '\0') {
    FUN_18012d2e0(in_stack_00000040);
    func_0x000180131810(in_stack_00000040,0);
  }
  puVar5 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar5 != (int8_t *)0x0) &&
       (lVar23 = in_stack_00000040[5], *(char *)(lVar23 + 0x48) != '\0')) &&
      (lVar29 = func_0x00018012fae0(), lVar23 != lVar29)) &&
     (((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar23 + 0x48) = 0;
    *(int8_t *)(unaff_RSI + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if ((((uint)fVar33 & 1) == 0) && ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0)) {
    uVar9 = *(uint *)(in_stack_00000040 + 0x35);
    *(uint *)(in_stack_00000040 + 0x35) = uVar9 | 0x10;
    *(int32_t *)((longlong)in_stack_00000040 + 0x16c) = 1;
    *(int32_t *)(in_stack_00000040 + 0x2e) = 2;
    if (((uint)fVar33 & 0x20) == 0) {
      plVar19 = in_stack_00000040 + 8;
      uVar10 = FUN_180123c00(in_stack_00000040,&unknown_var_2480_ptr,0);
      cVar7 = FUN_180110000(uVar10,plVar19,0);
      if (cVar7 != '\0') {
        *(int8_t *)((longlong)in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(longlong *)(unaff_RBP + 10) != 0) {
      fVar31 = *(float *)(unaff_RSI + 0x19f8) * 0.5;
      uVar15 = func_0x00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(in_stack_00000040 + 9) +
                                    *(float *)(in_stack_00000040 + 8)) -
                                   *(float *)(unaff_RSI + 0x165c)) - fVar31,
                                   *(float *)((longlong)in_stack_00000040 + 0x44) +
                                   *(float *)(unaff_RSI + 0x1660) + fVar31);
      uVar10 = FUN_180123c00(in_stack_00000040,&unknown_var_2512_ptr,0);
      cVar7 = FUN_18010fd40(uVar10,uVar15);
      if (cVar7 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)((longlong)in_stack_00000040 + 0x16c) = 0;
    *(int32_t *)(in_stack_00000040 + 0x2e) = 1;
    *(uint *)(in_stack_00000040 + 0x35) = uVar9;
    if (((uint)fVar33 & 0x100000) == 0) {
      fVar31 = 0.0;
    }
    else {
      uVar15 = CONCAT44(uVar11,0xbf800000);
      pfVar17 = (float *)FUN_180127c60(unaff_RBP + -0x18,&system_data_df28,0,0,uVar15);
      uVar11 = (int32_t)((ulonglong)uVar15 >> 0x20);
      fVar31 = *pfVar17;
    }
    uVar15 = func_0x00018004ba20(unaff_RBP + -0x18);
    uVar20 = FUN_180127c60(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar11,0xbf800000));
    func_0x00018011fbf0(&stack0x00000050,uVar20,uVar15);
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
    lVar23 = *(longlong *)(unaff_RBP + 10);
    if (lVar23 != 0) {
      fVar36 = fVar36 + *(float *)(unaff_RSI + 0x19f8) + *(float *)(unaff_RSI + 0x1674);
    }
    if (0.0 < *(float *)(unaff_RSI + 0x1644)) {
      fVar36 = (float)func_0x00018013e9f0();
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
      fVar32 = (float)func_0x00018010e5a0(unaff_RBP + -2);
      fVar32 = fVar32 - 3.0;
    }
    unaff_RBP[-6] = (*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) - fVar32
    ;
    FUN_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &stack0x00000050);
    if (((uint)fVar33 & 0x100000) != 0) {
      uVar15 = func_0x00018004ba20(unaff_RBP + -0x14,2.0 - fVar31);
      func_0x00018010e590(unaff_RBP + -0x1c);
      func_0x00018013e900();
      uVar20 = func_0x00018004ba20(unaff_RBP + 0x18);
      func_0x00018011fbf0(unaff_RBP + -0x18,uVar20,uVar15);
      func_0x00018004ba20(unaff_RBP + -0xe);
      func_0x00018004ba20(unaff_RBP + -0x14);
      uVar15 = func_0x00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar20 = func_0x00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      FUN_180122890(uVar20,uVar15,&system_data_df28,0,0);
    }
  }
  *(int16_t *)((longlong)in_stack_00000040 + 0x26a) = 0;
  *(int16_t *)(in_stack_00000040 + 0x4d) = 0;
  plVar19 = (longlong *)func_0x00018010e720(in_stack_00000040,unaff_RBP + 0x20);
  lVar23 = plVar19[1];
  in_stack_00000040[0x47] = *plVar19;
  in_stack_00000040[0x48] = lVar23;
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0) {
    fVar31 = (float)func_0x00018010e760();
    *(float *)((longlong)in_stack_00000040 + 0x23c) =
         fVar31 + *(float *)((longlong)in_stack_00000040 + 0x23c);
  }
  func_0x00018010e690(in_stack_00000040 + 0x47,in_stack_00000040 + 0x45);
  *(float *)(in_stack_00000040 + 0x49) =
       unaff_RBP[-2] + *(float *)((longlong)in_stack_00000040 + 0x7c);
  if (((uint)fVar33 & 0x401) == 1) {
    pfVar16 = (float *)((longlong)in_stack_00000040 + 0x7c);
  }
  fVar31 = *pfVar16;
  fVar32 = (float)func_0x00018010e7a0();
  *(float *)((longlong)in_stack_00000040 + 0x24c) = fVar32 + unaff_RBP[1] + fVar31;
  *(float *)(in_stack_00000040 + 0x4a) =
       ((*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) -
       *(float *)((longlong)in_stack_00000040 + 0xa4)) -
       *(float *)((longlong)in_stack_00000040 + 0x7c);
  *(float *)((longlong)in_stack_00000040 + 0x254) =
       ((*(float *)((longlong)in_stack_00000040 + 0x4c) +
        *(float *)((longlong)in_stack_00000040 + 0x44)) - *(float *)(in_stack_00000040 + 0x15)) -
       *(float *)((longlong)in_stack_00000040 + 0x7c);
  fVar31 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4b) =
       (float)(int)(fVar31 + *(float *)(in_stack_00000040 + 0x49) + 0.5);
  *(float *)((longlong)in_stack_00000040 + 0x25c) =
       (float)(int)(*(float *)((longlong)in_stack_00000040 + 0x24c) + 0.5);
  fVar31 = *(float *)(in_stack_00000040 + 0x4a);
  fVar32 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4c) = (float)(int)((fVar31 + 0.5) - fVar32);
  *(float *)((longlong)in_stack_00000040 + 0x264) =
       (float)(int)(*(float *)((longlong)in_stack_00000040 + 0x254) + 0.5);
  if ((*(byte *)(unaff_RSI + 8) & 0x40) != 0) {
    if ((*(int *)(unaff_RSI + 0x1b2c) == *(int *)((longlong)in_stack_00000040 + 0x84)) &&
       (((*(char *)(unaff_RSI + 0xc1) == '\0' || (*(char *)(unaff_RSI + 0x135) != '\0')) &&
        ((*(uint *)(in_stack_00000040[0x74] + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(unaff_RSI + 0x1dd0) != '\0') && (((uint)fVar33 >> 0x15 & 1) == 0)) &&
        ((*(longlong *)(unaff_RSI + 0x1b78) == 0 ||
         (*(longlong **)(*(longlong *)(unaff_RSI + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == (longlong *)in_stack_00000040[0x74] &&
        ((*(uint *)((longlong)in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)((longlong)in_stack_00000040 + 0x144) =
         *(int32_t *)((longlong)in_stack_00000040 + 0x84);
    cVar7 = FUN_180128040(unaff_RBP + -2);
    fVar31 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x29) = (uint)(cVar7 != '\0');
    uVar15 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)((longlong)in_stack_00000040 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)((longlong)in_stack_00000040 + 0x154) = uVar15;
    fVar32 = in_stack_00000078;
  }
  else {
    fVar31 = unaff_RBP[-0x10];
    *(int *)((longlong)in_stack_00000040 + 0x144) = (int)in_stack_00000040[1];
    *(int32_t *)(in_stack_00000040 + 0x29) = *(int32_t *)((longlong)in_stack_00000040 + 0x41c)
    ;
    *(longlong *)((longlong)in_stack_00000040 + 0x14c) = in_stack_00000040[0x84];
    *(longlong *)((longlong)in_stack_00000040 + 0x154) = in_stack_00000040[0x85];
    fVar32 = in_stack_00000078;
  }
LAB_18012ce0f:
  if (((uint)fVar33 >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 0x4b,in_stack_00000040 + 0x4c,1);
  }
  if (fVar32 != fVar31) {
    *(int8_t *)((longlong)in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0x17) = (short)in_stack_00000040[0x17] + 1;
  FUN_18011ff20(unaff_RSI + 0x1bd0);
  if (((*(byte *)((longlong)in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)((longlong)in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((uint)fVar33 >> 0x18 & 1) != 0) {
    if ((((((uint)fVar33 & 0x40) == 0) && (*(int *)((longlong)in_stack_00000040 + 0xc4) < 1)) &&
        ((int)in_stack_00000040[0x19] < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x48) < *(float *)(in_stack_00000040 + 0x47) ||
         *(float *)(in_stack_00000040 + 0x48) == *(float *)(in_stack_00000040 + 0x47) ||
        (*(float *)((longlong)in_stack_00000040 + 0x244) <
         *(float *)((longlong)in_stack_00000040 + 0x23c) ||
         *(float *)((longlong)in_stack_00000040 + 0x244) ==
         *(float *)((longlong)in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
    }
    if ((lVar14 != 0) && ((*(char *)(lVar14 + 0xb2) != '\0' || (*(char *)(lVar14 + 0xb6) != '\0'))))
    {
      *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
    }
  }
  if (*(float *)(unaff_RSI + 0x1628) <= 0.0) {
    *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((int)in_stack_00000040[0x1b] < 1) && (*(int *)((longlong)in_stack_00000040 + 0xdc) < 1)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  *(char *)((longlong)in_stack_00000040 + 0xb6) = cVar7;
  if (((((*(char *)((longlong)in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)((longlong)in_stack_00000040 + 0xaf) != '\0')) && (cVar7 == '\0')) ||
      ((0 < *(int *)((longlong)in_stack_00000040 + 0xc4) || (0 < (int)in_stack_00000040[0x19])))) ||
     (0 < *(int *)((longlong)in_stack_00000040 + 0xdc))) {
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  *(int8_t *)((longlong)in_stack_00000040 + 0xb4) = uVar21;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x24) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





