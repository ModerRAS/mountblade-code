#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part118_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801299d3(uint64_t param_1,uint64_t param_2,float param_3)
void FUN_1801299d3(uint64_t param_1,uint64_t param_2,float param_3)

{
  int16_t *puVar1;
  char cVar2;
  int16_t uVar3;
  char *pcVar4;
  int8_t *puVar5;
  bool bVar6;
  int64_t lVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  char *pcVar14;
  int64_t lVar15;
  uint64_t uVar16;
  float *pfVar17;
  float *pfVar18;
  uint64_t *puVar19;
  int64_t *plVar20;
  uint64_t uVar21;
  int8_t uVar22;
  uint uVar23;
  int64_t lVar24;
  int iVar25;
  int *piVar26;
  float *pfVar27;
  uint64_t unaff_RBX;
  int32_t *puVar28;
  float *unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  byte bVar29;
  int64_t in_R11;
  uint64_t unaff_R12;
  int64_t lVar30;
  uint64_t unaff_R13;
  bool bVar31;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
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
  uint64_t uVar40;
  int64_t *in_stack_00000040;
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
  
  *(uint64_t *)(in_R11 + 0x20) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x10) = unaff_RSI;
  lVar7 = SYSTEM_DATA_MANAGER_A;
  *(uint64_t *)(in_R11 + -0x18) = unaff_RDI;
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
  in_stack_00000040 = (int64_t *)func_0x000180128b60();
  iVar25 = *(int *)(lVar7 + 0x1ad0);
  cStack0000000000000049 = in_stack_00000040 == (int64_t *)0x0;
  if (in_stack_00000040 == (int64_t *)0x0) {
    if (*(int *)(lVar7 + 0x1bd4) == 0) {
      _fStack0000000000000050 = 0;
      pfVar17 = &stack0x00000050;
    }
    else {
      pfVar17 = unaff_RBP + -0xe;
      *(uint64_t *)(unaff_RBP + -0xe) = *(uint64_t *)(lVar7 + 0x1c04);
    }
    in_stack_00000040 = (int64_t *)FUN_180128bd0(param_1,*(uint64_t *)pfVar17,param_3);
  }
  in_stack_00000078 = *(float *)(in_stack_00000040 + 0x50);
  uVar10 = *(uint *)((int64_t)in_stack_00000040 + 0xdc);
  fVar34 = (float)((uint)param_3 | 6);
  if (((uint)param_3 & 0xc0200) != 0xc0200) {
    fVar34 = param_3;
  }
  fVar32 = *(float *)(lVar7 + 0x1a90);
  unaff_RBP[-0x10] = fVar32;
  cStack000000000000004a = (int)in_stack_00000078 < (int)fVar32 + -1;
  if (((uint)fVar34 >> 0x1a & 1) != 0) {
    piVar26 = (int *)((int64_t)*(int *)(lVar7 + 0x1bc0) * 0x30 + *(int64_t *)(lVar7 + 0x1bb8));
    cStack000000000000004a =
         (bool)cStack000000000000004a ||
         (in_stack_00000040 != *(int64_t **)(piVar26 + 2) ||
         (int)in_stack_00000040[0x18] != *piVar26);
  }
  if (((bool)cStack000000000000004a) || (0 < (int)uVar10)) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
  }
  *(char *)((int64_t)in_stack_00000040 + 0xb5) = cVar8;
  in_stack_00000068 = uVar10;
  if (cVar8 != '\0') {
    func_0x000180128ae0(in_stack_00000040,8,1);
  }
  if (in_stack_00000078 == fVar32) {
    fVar34 = *(float *)((int64_t)in_stack_00000040 + 0xc);
  }
  else {
    *(int32_t *)(in_stack_00000040 + 2) = *(int32_t *)((int64_t)in_stack_00000040 + 0xc);
    *(float *)((int64_t)in_stack_00000040 + 0xc) = fVar34;
    *(float *)(in_stack_00000040 + 0x50) = fVar32;
    *(int16_t *)((int64_t)in_stack_00000040 + 0xba) = 0;
    uVar3 = *(int16_t *)(lVar7 + 0x1af0);
    *(int *)(lVar7 + 0x1af0) = *(int *)(lVar7 + 0x1af0) + 1;
    *(int16_t *)((int64_t)in_stack_00000040 + 0xbc) = uVar3;
  }
  if (*(int *)(lVar7 + 0x1bf0) != 0) {
    FUN_18013b040(in_stack_00000040,*(int32_t *)(lVar7 + 0x1c40));
  }
  if ((in_stack_00000078 != fVar32) &&
     ((((int)in_stack_00000040[0x83] != 0 || (in_stack_00000040[0x81] != 0)) ||
      ((*(char *)(lVar7 + 0xc2) != '\0' && ((((uint)fVar34 & 0x1200001) == 0 && (iVar25 != 0))))))))
  {
    FUN_18013b5a0(in_stack_00000040,param_2);
    fVar34 = *(float *)((int64_t)in_stack_00000040 + 0xc);
  }
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) {
    if (*(int *)(lVar7 + 0x1ad0) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint64_t *)
                (*(int64_t *)(lVar7 + 0x1ad8) + -8 + (int64_t)*(int *)(lVar7 + 0x1ad0) * 8);
    }
  }
  else {
    uVar16 = *(uint64_t *)(in_stack_00000040[0x81] + 0x68);
  }
  if (in_stack_00000078 == fVar32) {
    *(int64_t *)(unaff_RBP + 8) = in_stack_00000040[0x73];
  }
  else {
    uVar21 = 0;
    if (((uint)fVar34 & 0x5000000) != 0) {
      uVar21 = uVar16;
    }
    *(uint64_t *)(unaff_RBP + 8) = uVar21;
  }
  FUN_18011d9a0(lVar7 + 0x1ad0,&stack0x00000040);
  *(uint64_t *)(lVar7 + 0x1af8) = 0;
  func_0x000180128a80(in_stack_00000040,1);
  if (((uint)fVar34 >> 0x1a & 1) != 0) {
    puVar28 = (int32_t *)
              ((int64_t)*(int *)(lVar7 + 0x1bc0) * 0x30 + *(int64_t *)(lVar7 + 0x1bb8));
    *(int64_t **)(puVar28 + 2) = in_stack_00000040;
    FUN_18013df80((int *)(lVar7 + 0x1bc0),puVar28);
    *(int32_t *)(in_stack_00000040 + 0x18) = *puVar28;
  }
  if ((0 < (int)uVar10) && (((uint)fVar34 >> 0x18 & 1) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0x79) = 0;
  }
  bVar31 = false;
  bVar6 = false;
  in_stack_00000048 = '\0';
  if (*(uint *)(lVar7 + 0x1bd0) != 0) {
    uVar10 = *(uint *)(in_stack_00000040 + 0x1c) & *(uint *)(lVar7 + 0x1bd0);
    in_stack_00000048 = uVar10 != 0;
    if ((uVar10 == 0) ||
       (*(float *)(lVar7 + 0x1bfc) * *(float *)(lVar7 + 0x1bfc) +
        *(float *)(lVar7 + 0x1c00) * *(float *)(lVar7 + 0x1c00) <= 1e-05)) {
      func_0x00018012ddc0(in_stack_00000040,lVar7 + 0x1bf4);
    }
    else {
      in_stack_00000040[0x1e] = *(int64_t *)(lVar7 + 0x1bf4);
      in_stack_00000040[0x1f] = *(int64_t *)(lVar7 + 0x1bfc);
      *(uint *)(in_stack_00000040 + 0x1c) = *(uint *)(in_stack_00000040 + 0x1c) & 0xfffffff1;
    }
  }
  if (*(uint *)(lVar7 + 0x1bd4) != 0) {
    uVar10 = *(uint *)((int64_t)in_stack_00000040 + 0xe4) & *(uint *)(lVar7 + 0x1bd4);
    if ((uVar10 == 0) || (*(float *)(lVar7 + 0x1c04) <= 0.0)) {
      bVar31 = false;
    }
    else {
      bVar31 = true;
    }
    if ((uVar10 == 0) || (*(float *)(lVar7 + 0x1c08) <= 0.0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    func_0x00018012de80();
  }
  if (*(int *)(lVar7 + 0x1bd8) == 0) {
    fVar32 = unaff_RBP[-0x10];
    if (in_stack_00000078 != fVar32) {
      in_stack_00000040[0xd] = 0;
    }
  }
  else {
    in_stack_00000040[0xd] = *(int64_t *)(lVar7 + 0x1c0c);
    if (*(float *)((int64_t)in_stack_00000040 + 0x6c) != 0.0) {
      fVar32 = (float)func_0x00018010e7a0();
      fVar33 = (float)func_0x00018010e760(in_stack_00000040);
      *(float *)((int64_t)in_stack_00000040 + 0x6c) =
           fVar32 + fVar33 + *(float *)((int64_t)in_stack_00000040 + 0x6c);
    }
    fVar32 = unaff_RBP[-0x10];
  }
  fVar33 = in_stack_00000078;
  uVar16 = *(uint64_t *)(lVar7 + 0x1c4c);
  *(uint64_t *)((int64_t)in_stack_00000040 + 0x14) = *(uint64_t *)(lVar7 + 0x1c44);
  *(uint64_t *)((int64_t)in_stack_00000040 + 0x1c) = uVar16;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x24) = *(int32_t *)(lVar7 + 0x1c54);
  if (*(uint *)(lVar7 + 0x1bdc) != 0) {
    if ((*(uint *)(lVar7 + 0x1bdc) & *(uint *)(in_stack_00000040 + 0x1d)) != 0) {
      *(int8_t *)((int64_t)in_stack_00000040 + 0xb2) = *(int8_t *)(lVar7 + 0x1c15);
      *(uint *)(in_stack_00000040 + 0x1d) = *(uint *)(in_stack_00000040 + 0x1d) & 0xfffffff1;
    }
  }
  if (*(int *)(lVar7 + 0x1be4) != 0) {
    FUN_18012d2e0();
  }
  if (*(char *)((int64_t)in_stack_00000040 + 0xb5) != '\0') {
    func_0x000180128ae0(in_stack_00000040,8);
  }
  if (fVar33 == fVar32) {
    func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
    func_0x000180123e50(in_stack_00000040);
    lVar15 = *(int64_t *)(unaff_RBP + 8);
    goto LAB_18012ce0f;
  }
  unaff_RBP[-4] = (float)((uint)fVar34 & 0x3000000);
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
  func_0x000180129900(in_stack_00000040,fVar34,*(uint64_t *)(unaff_RBP + 8));
  lVar15 = *(int64_t *)(unaff_RBP + 10);
  unaff_RBP[0x20] = -3.4028235e+38;
  unaff_RBP[0x21] = -3.4028235e+38;
  unaff_RBP[0x22] = 3.4028235e+38;
  unaff_RBP[0x23] = 3.4028235e+38;
  *(int8_t *)((int64_t)in_stack_00000040 + 0xaf) = 1;
  *(bool *)((int64_t)in_stack_00000040 + 0xb7) = lVar15 != 0;
  func_0x00018010e540(unaff_RBP + -0x20,unaff_RBP + 0x20);
  lVar15 = *(int64_t *)(unaff_RBP + -0x1e);
  in_stack_00000040[0x45] = *(int64_t *)(unaff_RBP + -0x20);
  in_stack_00000040[0x46] = lVar15;
  FUN_18013dae0(in_stack_00000040 + 0x43,1);
  cVar8 = cStack0000000000000049;
  if (((((in_stack_00000040[5] != 0) &&
        (*(int64_t **)(in_stack_00000040[5] + 0x78) == in_stack_00000040)) ||
       ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0)) ||
      ((*(int64_t *)(lVar7 + 0x1ce8) != 0 &&
       ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x80000) == 0)))) &&
     (cStack0000000000000049 == '\0')) {
    pcVar4 = *(char **)(unaff_RBP + 0x1e);
    pcVar14 = pcVar4;
    do {
      cVar2 = *pcVar14;
      cVar9 = pcVar14[*in_stack_00000040 - (int64_t)pcVar4];
      if (cVar2 != cVar9) break;
      pcVar14 = pcVar14 + 1;
    } while (cVar9 != '\0');
    if (cVar2 != cVar9) {
      _fStack0000000000000050 = (int64_t)(int)in_stack_00000040[0x10];
      lVar15 = FUN_180121130(*in_stack_00000040,&stack0x00000050,pcVar4);
      *in_stack_00000040 = lVar15;
      *(float *)(in_stack_00000040 + 0x10) = fStack0000000000000050;
    }
  }
  if (*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') {
    if (((*(char *)((int64_t)in_stack_00000040 + 0xb6) == '\0') ||
        (*(int *)((int64_t)in_stack_00000040 + 0xdc) != 0)) || ((int)in_stack_00000040[0x1b] < 1))
    {
      fVar32 = *(float *)(in_stack_00000040 + 0xd);
      if (fVar32 == 0.0) {
        fVar32 = (*(float *)(in_stack_00000040 + 0x23) - *(float *)(in_stack_00000040 + 8)) +
                 *(float *)((int64_t)in_stack_00000040 + 0x8c);
      }
      fVar33 = *(float *)((int64_t)in_stack_00000040 + 0x6c);
      if (fVar33 == 0.0) {
        fVar33 = (*(float *)((int64_t)in_stack_00000040 + 0x11c) -
                 *(float *)((int64_t)in_stack_00000040 + 0x44)) +
                 *(float *)(in_stack_00000040 + 0x12);
      }
      fVar32 = (float)(int)fVar32 + *(float *)(in_stack_00000040 + 0xe);
      fVar33 = (float)(int)fVar33 + *(float *)((int64_t)in_stack_00000040 + 0x74);
    }
    else {
      fVar32 = *(float *)(in_stack_00000040 + 0xc);
      fVar33 = *(float *)((int64_t)in_stack_00000040 + 100);
    }
  }
  else {
    fVar32 = *(float *)(in_stack_00000040 + 0xc);
    fVar33 = *(float *)((int64_t)in_stack_00000040 + 100);
  }
  *(float *)(in_stack_00000040 + 0xc) = fVar32;
  *(float *)((int64_t)in_stack_00000040 + 100) = fVar33;
  if (0 < (int)in_stack_00000040[0x1b]) {
    *(int *)(in_stack_00000040 + 0x1b) = (int)in_stack_00000040[0x1b] + -1;
  }
  if (0 < *(int *)((int64_t)in_stack_00000040 + 0xdc)) {
    *(int *)((int64_t)in_stack_00000040 + 0xdc) = *(int *)((int64_t)in_stack_00000040 + 0xdc) + -1
    ;
  }
  if ((cVar8 != '\0') && ((!bVar31 || (!bVar6)))) {
    *(int32_t *)((int64_t)in_stack_00000040 + 0xdc) = 1;
  }
  if (((cStack000000000000004a != '\0') && (((uint)fVar34 & 0x6000000) != 0)) &&
     (*(int32_t *)((int64_t)in_stack_00000040 + 0xdc) = 1, ((uint)fVar34 & 0x40) != 0)) {
    if (!bVar31) {
      *(int32_t *)(in_stack_00000040 + 10) = 0;
      *(int32_t *)(in_stack_00000040 + 9) = 0;
    }
    if (!bVar6) {
      *(int32_t *)((int64_t)in_stack_00000040 + 0x54) = 0;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x4c) = 0;
    }
    in_stack_00000040[0xc] = 0;
  }
  FUN_180130a80(in_stack_00000040);
  func_0x00018012fb50(in_stack_00000040,in_stack_00000040[5]);
  if ((*(uint *)(lVar7 + 8) & 0x8000) == 0) {
    uVar12 = 0x3f800000;
  }
  else {
    uVar12 = *(int32_t *)(in_stack_00000040[5] + 0x18);
  }
  *(int32_t *)((int64_t)in_stack_00000040 + 0x2dc) = uVar12;
  func_0x000180123e50(in_stack_00000040);
  fVar34 = *(float *)((int64_t)in_stack_00000040 + 0xc);
  unaff_RBP[-10] = fVar34;
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) {
    if (((uint)fVar34 >> 0x18 & 1) == 0) {
      if ((((uint)fVar34 & 0x6000000) == 0) || (((uint)fVar34 >> 0x1b & 1) != 0)) {
        uVar12 = *(int32_t *)(lVar7 + 0x1638);
      }
      else {
        uVar12 = *(int32_t *)(lVar7 + 0x1658);
      }
      *(int32_t *)((int64_t)in_stack_00000040 + 0x7c) = uVar12;
    }
    else {
      *(int32_t *)((int64_t)in_stack_00000040 + 0x7c) = *(int32_t *)(lVar7 + 0x1650);
    }
  }
  else {
    *(int32_t *)((int64_t)in_stack_00000040 + 0x7c) = 0;
  }
  if ((((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) &&
      (((uint)fVar34 & 0x5010000) == 0x1000000)) &&
     (*(float *)((int64_t)in_stack_00000040 + 0x7c) == 0.0)) {
    if (((uint)fVar34 >> 10 & 1) == 0) {
      *(int32_t *)(in_stack_00000040 + 0xe) = 0;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x74) = 0;
    }
    else {
      uVar12 = *(int32_t *)(lVar7 + 0x1630);
      *(int32_t *)(in_stack_00000040 + 0xe) = 0;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x74) = uVar12;
    }
  }
  else {
    in_stack_00000040[0xe] = *(int64_t *)(lVar7 + 0x162c);
  }
  fVar32 = *(float *)(in_stack_00000040 + 0xe);
  if (*(float *)(in_stack_00000040 + 0xe) <= *(float *)(lVar7 + 0x166c)) {
    fVar32 = *(float *)(lVar7 + 0x166c);
  }
  if (fVar32 <= *(float *)(lVar7 + 0x1c58)) {
    fVar32 = *(float *)(lVar7 + 0x1c58);
  }
  *(float *)(in_stack_00000040 + 0x30) = fVar32;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x184) = *(int32_t *)(lVar7 + 0x1c5c);
  if ((((uint)fVar34 & 0x21) == 0) && ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)) {
    func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    if ((((*(int64_t **)(lVar7 + 0x1b00) == in_stack_00000040) && (*(int *)(lVar7 + 0x1b18) == 0))
        && (*(int *)(lVar7 + 0x1b20) == 0)) &&
       ((cVar8 = FUN_180128040(unaff_RBP + 0x20,unaff_RBP + 0x22,1), cVar8 != '\0' &&
        (*(char *)(lVar7 + 0x415) != '\0')))) {
      *(int8_t *)((int64_t)in_stack_00000040 + 0xb3) = 1;
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xb3) != '\0') {
      *(bool *)((int64_t)in_stack_00000040 + 0xb2) =
           *(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0';
      if (((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x100) == 0) &&
         (*(float *)(SYSTEM_DATA_MANAGER_A + 0x2e04) <= 0.0)) {
        *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x2e04) = *(int32_t *)(SYSTEM_DATA_MANAGER_A + 0x1c);
      }
      FUN_18012d2e0(in_stack_00000040);
    }
  }
  else {
    *(int8_t *)((int64_t)in_stack_00000040 + 0xb2) = 0;
  }
  plVar20 = in_stack_00000040;
  lVar15 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)((int64_t)in_stack_00000040 + 0xb3) = 0;
  if ((*(uint *)((int64_t)in_stack_00000040 + 0xc) >> 0x19 & 1) == 0) {
    _fStack0000000000000070 = *(uint64_t *)(lVar15 + 0x163c);
    if ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x14000000) != 0) {
      _fStack0000000000000050 = 0x4080000040800000;
      puVar19 = (uint64_t *)
                func_0x00018011fc20(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050);
      _fStack0000000000000070 = *puVar19;
    }
    fVar32 = *(float *)(plVar20[5] + 0x10);
    fVar33 = *(float *)(plVar20[5] + 0x14);
    if (*(char *)((int64_t)plVar20 + 0xae) != '\0') {
      fVar32 = 3.4028235e+38;
      fVar33 = 3.4028235e+38;
    }
    iVar25 = *(int *)((int64_t)plVar20 + 0x3c);
    if ((-1 < iVar25) && (iVar25 < *(int *)(lVar15 + 0x1600))) {
      fVar32 = *(float *)(*(int64_t *)(lVar15 + 0x1608) + 0x18 + (int64_t)iVar25 * 0x24);
      fVar33 = *(float *)(*(int64_t *)(lVar15 + 0x1608) + 0x1c + (int64_t)iVar25 * 0x24);
    }
    _fStack0000000000000050 =
         CONCAT44(fVar33 - (*(float *)(lVar15 + 0x16b8) + *(float *)(lVar15 + 0x16b8)),
                  fVar32 - (*(float *)(lVar15 + 0x16b4) + *(float *)(lVar15 + 0x16b4)));
    puVar19 = (uint64_t *)func_0x00018011fc50(unaff_RBP + -0x18,&stack0x00000070,&stack0x00000050)
    ;
    FUN_18011fc80(&stack0x00000060,plVar20 + 0xc,&stack0x00000070,*puVar19);
    FUN_180128fd0(unaff_RBP + 2,plVar20,CONCAT44(fStack0000000000000064,fStack0000000000000060));
    if (((unaff_RBP[2] < *(float *)(plVar20 + 0xc)) &&
        ((*(uint *)((int64_t)plVar20 + 0xc) & 8) == 0)) &&
       ((*(uint *)((int64_t)plVar20 + 0xc) >> 0xb & 1) != 0)) {
      fStack0000000000000064 = fStack0000000000000064 + *(float *)(lVar15 + 0x168c);
    }
    lVar24 = SYSTEM_DATA_MANAGER_A;
    fVar33 = fStack0000000000000060;
    fVar32 = fStack0000000000000064;
    if ((unaff_RBP[3] < *(float *)((int64_t)plVar20 + 100)) &&
       ((*(byte *)((int64_t)plVar20 + 0xc) & 8) == 0)) {
      fStack0000000000000060 = fStack0000000000000060 + *(float *)(lVar15 + 0x168c);
      fVar33 = fStack0000000000000060;
    }
  }
  else {
    lVar24 = lVar15;
    fVar33 = *(float *)(in_stack_00000040 + 0xc);
    fVar32 = *(float *)((int64_t)in_stack_00000040 + 100);
  }
  fVar35 = 3.4028235e+38;
  _fStack0000000000000050 = CONCAT44(fVar32,fVar33);
  fVar39 = 3.4028235e+38;
  if ((((uint)fVar34 & 0x40) == 0) || (*(char *)((int64_t)in_stack_00000040 + 0xb2) != '\0')) {
    if ((0 < *(int *)((int64_t)in_stack_00000040 + 0xc4)) || (0 < (int)in_stack_00000040[0x19])) {
      if ((!bVar31) && (0 < *(int *)((int64_t)in_stack_00000040 + 0xc4))) {
        fVar35 = fVar33;
        if ((*(char *)((int64_t)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar35 = *(float *)(in_stack_00000040 + 10),
           *(float *)(in_stack_00000040 + 10) <= fVar33)) {
          fVar35 = fVar33;
        }
        *(float *)(in_stack_00000040 + 10) = fVar35;
      }
      if ((!bVar6) && (0 < (int)in_stack_00000040[0x19])) {
        fVar39 = fVar32;
        if ((*(char *)((int64_t)in_stack_00000040 + 0xcc) != '\0') &&
           (fVar39 = *(float *)((int64_t)in_stack_00000040 + 0x54),
           *(float *)((int64_t)in_stack_00000040 + 0x54) <= fVar32)) {
          fVar39 = fVar32;
        }
        *(float *)((int64_t)in_stack_00000040 + 0x54) = fVar39;
      }
      if (((*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') &&
          ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x100) == 0)) &&
         (*(float *)(lVar24 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar24 + 0x2e04) = *(int32_t *)(lVar24 + 0x1c);
      }
    }
  }
  else {
    if (!bVar31) {
      *(float *)(in_stack_00000040 + 10) = fVar33;
      fVar35 = fVar33;
    }
    if (!bVar6) {
      *(float *)((int64_t)in_stack_00000040 + 0x54) = fVar32;
      fVar39 = fVar32;
    }
  }
  puVar28 = (int32_t *)FUN_180128fd0(unaff_RBP + -0x18,in_stack_00000040,in_stack_00000040[10]);
  uVar12 = puVar28[1];
  *(int32_t *)(in_stack_00000040 + 10) = *puVar28;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x54) = uVar12;
  if ((*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') || (((uint)fVar34 >> 0x18 & 1) != 0))
  {
    pfVar17 = unaff_RBP + -0xe;
    *(int64_t *)(unaff_RBP + -0xe) = in_stack_00000040[10];
  }
  else {
    uVar16 = func_0x000180120c80(in_stack_00000040,unaff_RBP + 0x20);
    pfVar17 = (float *)func_0x00018010e570(uVar16,unaff_RBP + -0x18);
  }
  cVar2 = cStack000000000000004a;
  cVar8 = in_stack_00000048;
  in_stack_00000040[9] = *(int64_t *)pfVar17;
  if (*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') {
    if (fVar35 == 3.4028235e+38) {
      fVar32 = *(float *)(in_stack_00000040 + 0xb);
    }
    else {
      fVar32 = *(float *)(in_stack_00000040 + 10);
    }
    if (fVar39 == 3.4028235e+38) {
      fVar33 = *(float *)((int64_t)in_stack_00000040 + 0x5c);
    }
    else {
      fVar33 = *(float *)((int64_t)in_stack_00000040 + 0x54);
    }
    if ((((uint)fVar34 >> 0xe & 1) != 0) ||
       ((fVar33 < *(float *)((int64_t)in_stack_00000040 + 100) && (((uint)fVar34 & 8) == 0)))) {
      cVar9 = '\x01';
    }
    else {
      cVar9 = '\0';
    }
    *(char *)((int64_t)in_stack_00000040 + 0xad) = cVar9;
    if (((uint)fVar34 >> 0xf & 1) == 0) {
      if (cVar9 == '\0') {
        fVar35 = 0.0;
      }
      else {
        fVar35 = *(float *)(lVar7 + 0x168c);
      }
      if ((fVar32 - fVar35 < *(float *)(in_stack_00000040 + 0xc)) &&
         (((uint)fVar34 & 0x808) == 0x800)) goto LAB_18012a70f;
      cVar9 = '\0';
    }
    else {
LAB_18012a70f:
      cVar9 = '\x01';
    }
    *(char *)((int64_t)in_stack_00000040 + 0xac) = cVar9;
    if ((cVar9 != '\0') && (*(char *)((int64_t)in_stack_00000040 + 0xad) == '\0')) {
      if ((*(float *)((int64_t)in_stack_00000040 + 100) <= fVar33 - *(float *)(lVar7 + 0x168c)) ||
         (((uint)fVar34 & 8) != 0)) {
        uVar22 = 0;
      }
      else {
        uVar22 = 1;
      }
      *(int8_t *)((int64_t)in_stack_00000040 + 0xad) = uVar22;
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xac) == '\0') {
      uVar12 = 0;
    }
    else {
      uVar12 = *(int32_t *)(lVar7 + 0x168c);
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xad) == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = *(int32_t *)(lVar7 + 0x168c);
    }
    *(int32_t *)((int64_t)in_stack_00000040 + 0xa4) = uVar11;
    *(int32_t *)(in_stack_00000040 + 0x15) = uVar12;
  }
  unaff_RBP[0xc] = -NAN;
  if (((cStack000000000000004a != '\0') &&
      (*(int32_t *)((int64_t)in_stack_00000040 + 0xd4) = 0xffffffff,
      ((uint)fVar34 >> 0x1a & 1) != 0)) && (in_stack_00000048 == '\0')) {
    uVar12 = *(int32_t *)
              (*(int64_t *)(lVar7 + 0x1bc8) + -0xc + (int64_t)*(int *)(lVar7 + 0x1bc0) * 0x30);
    *(int32_t *)(in_stack_00000040 + 8) =
         *(int32_t *)
          (*(int64_t *)(lVar7 + 0x1bc8) + -0x10 + (int64_t)*(int *)(lVar7 + 0x1bc0) * 0x30);
    *(int32_t *)((int64_t)in_stack_00000040 + 0x44) = uVar12;
  }
  fVar32 = (float)((uint)fVar34 & 0x1000000);
  unaff_RBP[0x16] = fVar32;
  if (fVar32 == 0.0) {
    fVar33 = unaff_RBP[-4];
  }
  else {
    lVar15 = *(int64_t *)(unaff_RBP + 8);
    puVar1 = (int16_t *)(lVar15 + 0x188);
    *(int16_t *)((int64_t)in_stack_00000040 + 0xba) = *puVar1;
    FUN_18011d9a0(puVar1,&stack0x00000040);
    fVar33 = unaff_RBP[-4];
    if (((((uint)fVar34 >> 0x1a & 1) == 0) && (cVar8 == '\0')) && (fVar33 != 3.761582e-37)) {
      in_stack_00000040[8] = *(int64_t *)(lVar15 + 0x100);
    }
  }
  if ((*(float *)(in_stack_00000040 + 0x1e) == 3.4028235e+38) ||
     (*(int *)((int64_t)in_stack_00000040 + 0xdc) != 0)) {
    if (((uint)fVar34 >> 0x1c & 1) == 0) {
      if ((((((uint)fVar34 >> 0x1a & 1) != 0) && (in_stack_00000048 == '\0')) &&
          (0 < (int)in_stack_00000068)) ||
         (((cVar8 = in_stack_00000048, ((uint)fVar34 >> 0x19 & 1) != 0 &&
           (in_stack_00000048 == '\0')) && (fVar33 != 3.761582e-37)))) {
        puVar28 = (int32_t *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
        uVar12 = puVar28[1];
        *(int32_t *)(in_stack_00000040 + 8) = *puVar28;
        *(int32_t *)((int64_t)in_stack_00000040 + 0x44) = uVar12;
        cVar8 = in_stack_00000048;
      }
    }
    else {
      puVar28 = (int32_t *)FUN_18012f6d0(unaff_RBP + -0x18,in_stack_00000040);
      uVar12 = puVar28[1];
      *(int32_t *)(in_stack_00000040 + 8) = *puVar28;
      *(int32_t *)((int64_t)in_stack_00000040 + 0x44) = uVar12;
    }
  }
  else {
    fVar35 = *(float *)(in_stack_00000040 + 0x1e) -
             *(float *)(in_stack_00000040 + 0x1f) * *(float *)(in_stack_00000040 + 10);
    fVar33 = *(float *)((int64_t)in_stack_00000040 + 0xf4) -
             *(float *)((int64_t)in_stack_00000040 + 0x54) *
             *(float *)((int64_t)in_stack_00000040 + 0xfc);
    if (fVar35 <= *(float *)(lVar7 + 0x16b4)) {
      fVar35 = *(float *)(lVar7 + 0x16b4);
    }
    if (fVar33 <= *(float *)(lVar7 + 0x16b8)) {
      fVar33 = *(float *)(lVar7 + 0x16b8);
    }
    _fStack0000000000000070 = CONCAT44(fVar33,fVar35);
    func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,0);
  }
  if (*(int *)((int64_t)in_stack_00000040 + 0x3c) < 0) {
LAB_18012aa37:
    if (*(char *)((int64_t)in_stack_00000040 + 0xae) != '\0') goto LAB_18012aa45;
  }
  else {
    if (*(char *)((int64_t)in_stack_00000040 + 0xae) == '\0') {
      if (*(char *)(in_stack_00000040[5] + 0x77) == '\0') {
        pfVar17 = (float *)func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 0x20);
        pfVar18 = (float *)func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x20);
        if (((*pfVar18 <= *pfVar17 && *pfVar17 != *pfVar18) ||
            (pfVar18[1] <= pfVar17[1] && pfVar17[1] != pfVar18[1])) ||
           ((pfVar17[2] < pfVar18[2] || (pfVar17[3] < pfVar18[3])))) {
          in_stack_00000020 = (uint64_t *)CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),4);
          lVar15 = FUN_180130830(in_stack_00000040,(int)in_stack_00000040[1],in_stack_00000040 + 8,
                                 in_stack_00000040 + 9,in_stack_00000020);
          in_stack_00000040[5] = lVar15;
          func_0x00018012fb50(in_stack_00000040,lVar15);
          if ((*(uint *)(lVar7 + 8) & 0x8000) == 0) {
            uVar12 = 0x3f800000;
          }
          else {
            uVar12 = *(int32_t *)(in_stack_00000040[5] + 0x18);
          }
          *(int32_t *)((int64_t)in_stack_00000040 + 0x2dc) = uVar12;
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
      lVar15 = *(int64_t *)(in_stack_00000040[5] + 0x10);
      in_stack_00000040[10] = lVar15;
      in_stack_00000040[9] = lVar15;
    }
    uVar23 = *(uint *)(in_stack_00000040[5] + 4) & 0xffffffdc;
    uVar10 = uVar23 | 0x20;
    if (((uint)fVar34 & 0x2000000) == 0) {
      uVar10 = uVar23;
    }
    if ((*(char *)(lVar7 + 0xc5) != '\0') || (((uint)fVar34 & 0x16000000) != 0)) {
      uVar10 = uVar10 | 2;
    }
    if ((*(char *)(lVar7 + 0xc6) != '\0') || (((uint)fVar34 & 0x16000000) != 0)) {
      uVar10 = uVar10 | 1;
    }
    iVar25 = (int)in_stack_00000040[3];
    if ((iVar25 == 0) && (iVar25 = 0x11111111, *(char *)(lVar7 + 199) != '\0')) {
      iVar25 = 0;
    }
    *(int *)(in_stack_00000040[5] + 0x28) = iVar25;
    uVar23 = *(uint *)((int64_t)in_stack_00000040 + 0x1c);
    if (uVar23 != 0) {
      uVar10 = uVar10 & ~uVar23 | *(uint *)(in_stack_00000040 + 4) & uVar23;
    }
    *(uint *)(in_stack_00000040[5] + 4) = uVar10 | 0x10;
  }
  func_0x00018011feb0(in_stack_00000040[5],unaff_RBP + 4);
  if ((((cVar8 == '\0') && (fVar32 == 0.0)) && (*(int *)((int64_t)in_stack_00000040 + 0xc4) < 1))
     && ((int)in_stack_00000040[0x19] < 1)) {
    func_0x00018011fc50(&stack0x00000060,lVar7 + 0x16ac,lVar7 + 0x16b4);
    if (*(char *)((int64_t)in_stack_00000040 + 0xae) == '\0') {
      if ((0.0 < unaff_RBP[6] - unaff_RBP[4]) && (0.0 < unaff_RBP[7] - unaff_RBP[5])) {
        pfVar17 = unaff_RBP + 4;
LAB_18012ac57:
        func_0x000180129830(in_stack_00000040,pfVar17,&stack0x00000060);
      }
    }
    else if (0 < *(int *)(lVar7 + 0x1600)) {
      if (*(short *)(in_stack_00000040[5] + 0x74) != -1) {
        lVar24 = (int64_t)*(short *)(in_stack_00000040[5] + 0x74);
        pfVar17 = unaff_RBP + -8;
        lVar15 = *(int64_t *)(lVar7 + 0x1608);
        fVar33 = *(float *)(lVar15 + 0x10 + lVar24 * 0x24);
        fVar35 = *(float *)(lVar15 + 0x14 + lVar24 * 0x24);
        fVar39 = *(float *)(lVar15 + 0x18 + lVar24 * 0x24);
        unaff_RBP[-8] = fVar33;
        fVar36 = *(float *)(lVar15 + 0x1c + lVar24 * 0x24);
        unaff_RBP[-7] = fVar35;
        unaff_RBP[-6] = fVar33 + fVar39;
        unaff_RBP[-5] = fVar35 + fVar36;
        goto LAB_18012ac57;
      }
      _fStack0000000000000070 =
           CONCAT44(*(float *)(lVar7 + 0x16b0) + *(float *)(**(int64_t **)(lVar7 + 0x1c70) + 0xc),
                    *(float *)(**(int64_t **)(lVar7 + 0x1c70) + 8) + *(float *)(lVar7 + 0x16ac));
      func_0x00018012ddc0(in_stack_00000040,&stack0x00000070,1);
    }
  }
  *(float *)(in_stack_00000040 + 8) = (float)(int)*(float *)(in_stack_00000040 + 8);
  *(float *)((int64_t)in_stack_00000040 + 0x44) =
       (float)(int)*(float *)((int64_t)in_stack_00000040 + 0x44);
  if (fVar32 == 0.0) {
    if (((uint)fVar34 & 0xc000000) == 0x4000000) {
      uVar12 = *(int32_t *)(lVar7 + 0x1654);
    }
    else {
      uVar12 = *(int32_t *)(lVar7 + 0x1634);
    }
  }
  else {
    uVar12 = *(int32_t *)(lVar7 + 0x164c);
  }
  uVar10 = 0;
  *(int32_t *)(in_stack_00000040 + 0xf) = uVar12;
  if (*(char *)((int64_t)in_stack_00000040 + 0xae) != '\0') {
    *(int32_t *)(in_stack_00000040 + 0xf) = 0;
  }
  if (((int)in_stack_00000040[0x80] == 0x7fffffff) ||
     (iVar25 = (int)in_stack_00000040[0x7e], iVar25 == -1)) {
    iVar25 = 0x7fffffff;
  }
  else {
    iVar25 = ((int)in_stack_00000040[0x80] + 1 + iVar25) % (iVar25 + 1);
  }
  *(int *)(in_stack_00000040 + 0x7f) = iVar25;
  if ((*(int *)((int64_t)in_stack_00000040 + 0x404) == 0x7fffffff) ||
     (iVar25 = *(int *)((int64_t)in_stack_00000040 + 0x3f4), iVar25 == -1)) {
    iVar25 = 0x7fffffff;
  }
  else {
    iVar25 = (*(int *)((int64_t)in_stack_00000040 + 0x404) + 1 + iVar25) % (iVar25 + 1);
  }
  *(int *)((int64_t)in_stack_00000040 + 0x3fc) = iVar25;
  pfVar17 = unaff_RBP + -0x18;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x3f4) = 0xffffffff;
  *(int32_t *)(in_stack_00000040 + 0x7e) = 0xffffffff;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x404) = 0x7fffffff;
  *(int32_t *)(in_stack_00000040 + 0x80) = 0x7fffffff;
  puVar28 = (int32_t *)FUN_1801293e0(pfVar17,in_stack_00000040,1);
  plVar20 = in_stack_00000040;
  in_stack_00000068 = (uint)pfVar17 & 0xffffff00;
  uVar12 = puVar28[1];
  *(int32_t *)((int64_t)in_stack_00000040 + 0x8c) = *puVar28;
  *(int32_t *)(in_stack_00000040 + 0x12) = uVar12;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x94) = 0x7f7fffff;
  *(int32_t *)(in_stack_00000040 + 0x13) = 0x7f7fffff;
  if ((cVar2 != '\0') && (((uint)fVar34 >> 0xc & 1) == 0)) {
    if (((uint)fVar34 >> 0x1a & 1) == 0) {
      if (((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0) || (fVar32 == 0.0)) {
        in_stack_00000068 = (uint)(((uint)fVar34 >> 0x19 & 1) == 0);
      }
    }
    else {
      uVar23 = in_stack_00000068 >> 8;
      in_stack_00000068 = CONCAT31((int3)uVar23,1);
    }
  }
  fVar32 = *(float *)(lVar7 + 0x19f8);
  fVar33 = *(float *)(in_stack_00000040 + 0xf);
  cVar8 = *(char *)(lVar7 + 0xcb);
  unaff_RBP[0x20] = 0.0;
  unaff_RBP[0x21] = 0.0;
  unaff_RBP[0x22] = 0.0;
  unaff_RBP[0x23] = 0.0;
  fVar35 = fVar32 * 1.35;
  fVar32 = fVar32 * 0.2 + fVar33 + 1.0;
  if (fVar32 <= fVar35) {
    fVar32 = fVar35;
  }
  cVar2 = *(char *)((int64_t)in_stack_00000040 + 0xb2);
  fVar32 = (float)(int)fVar32;
  *(uint64_t *)(unaff_RBP + -0xe) = (uint64_t)(cVar8 != '\0') + 1;
  lVar15 = SYSTEM_DATA_MANAGER_A;
  in_stack_00000200 = unaff_XMM9_Qa;
  in_stack_00000208 = unaff_XMM9_Qb;
  if ((((cVar2 == '\0') && ((*(byte *)((int64_t)in_stack_00000040 + 0xc) & 0x42) == 0)) &&
      (*(int *)((int64_t)in_stack_00000040 + 0xc4) < 1)) &&
     (((int)in_stack_00000040[0x19] < 1 && ((char)in_stack_00000040[0x16] != '\0')))) {
    cVar8 = *(char *)(SYSTEM_DATA_MANAGER_A + 0xcb);
    fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 1.35;
    fVar34 = fVar33 + 1.0 + *(float *)(SYSTEM_DATA_MANAGER_A + 0x19f8) * 0.2;
    unaff_RBP[2] = (float)(-(uint)(cVar8 != '\0') & 4);
    if (fVar34 <= fVar35) {
      fVar34 = fVar35;
    }
    fVar33 = (float)(int)((float)(int)fVar34 * 0.75);
    if (cVar8 == '\0') {
      fVar34 = 0.0;
    }
    else {
      fVar34 = 4.0;
    }
    _fStack0000000000000070 = 0x7f7fffff7f7fffff;
    fStack0000000000000060 = 3.4028235e+38;
    fStack0000000000000064 = 3.4028235e+38;
    FUN_18012e1b0(&rendering_buffer_2464_ptr);
    lVar24 = _fStack0000000000000050;
    lVar30 = 0;
    pfVar17 = (float *)0x180bf66e8;
    do {
      uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      _fStack0000000000000050 =
           CONCAT44(*(float *)((int64_t)plVar20 + 0x4c) + *(float *)((int64_t)plVar20 + 0x44),
                    *(float *)(plVar20 + 8) + *(float *)(plVar20 + 9));
      func_0x00018011fcd0(unaff_RBP + 0xe,plVar20 + 8,&stack0x00000050,pfVar17 + -2);
      fVar36 = fVar33 * *pfVar17 + unaff_RBP[0xe];
      fVar35 = pfVar17[1];
      fVar39 = fVar33 * pfVar17[1] + unaff_RBP[0xf];
      fVar37 = unaff_RBP[0xe] - fVar34 * *pfVar17;
      unaff_RBP[-0x1a] = fVar36;
      fVar35 = unaff_RBP[0xf] - fVar34 * fVar35;
      unaff_RBP[-0x19] = fVar39;
      unaff_RBP[-0x1c] = fVar37;
      unaff_RBP[-0x1b] = fVar35;
      if (fVar36 < fVar37) {
        unaff_RBP[-0x1c] = fVar36;
        unaff_RBP[-0x1a] = fVar37;
      }
      if (fVar39 < fVar35) {
        unaff_RBP[-0x1b] = fVar39;
        unaff_RBP[-0x19] = fVar35;
      }
      uVar11 = func_0x000180123c50(plVar20,(int64_t)(int)uVar10);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,0x2020);
      FUN_18010f170(unaff_RBP + -0x1c,uVar11,&stack0x00000048,&stack0x00000049,in_stack_00000020);
      if (((in_stack_00000048 == '\0') && (cStack0000000000000049 == '\0')) ||
         (*(uint *)(lVar15 + 0x1dcc) = (~uVar10 & 1) + 5, cStack0000000000000049 == '\0')) {
LAB_18012b18f:
        if (uVar10 == 0) goto LAB_18012b0c8;
        if (cStack0000000000000049 != '\0') goto LAB_18012b0d0;
        if (in_stack_00000048 != '\0') goto LAB_18012b1a3;
      }
      else {
        if ((*(char *)(lVar15 + 0x415) == '\0') || (uVar10 != 0)) {
          fVar35 = *pfVar17;
          fVar39 = pfVar17[1];
          unaff_RBP[0x10] = fVar35 * -fVar33;
          unaff_RBP[0x11] = fVar39 * -fVar33;
          unaff_RBP[0x12] = fVar34 * fVar35;
          unaff_RBP[0x13] = fVar34 * fVar39;
          pfVar18 = (float *)func_0x00018011fcd0(unaff_RBP + 0x1c,unaff_RBP + 0x12,unaff_RBP + 0x10,
                                                 pfVar17 + -2);
          fVar35 = *(float *)(lVar15 + 0x118);
          fVar39 = *(float *)(lVar15 + 0x1b48);
          fVar36 = *pfVar18;
          in_stack_00000020 = (uint64_t *)&stack0x00000060;
          unaff_RBP[0x15] = (*(float *)(lVar15 + 0x11c) - *(float *)(lVar15 + 0x1b4c)) + pfVar18[1];
          unaff_RBP[0x14] = (fVar35 - fVar39) + fVar36;
          FUN_1801295b0(plVar20,unaff_RBP + 0x14,pfVar17 + -2,&stack0x00000070,in_stack_00000020);
          goto LAB_18012b18f;
        }
        pfVar18 = (float *)FUN_180128fd0(unaff_RBP + -0x14,plVar20,lVar24);
        fStack0000000000000060 = *pfVar18;
        fStack0000000000000064 = pfVar18[1];
        func_0x000180123e90(0,0);
LAB_18012b0c8:
        if (cStack0000000000000049 == '\0') {
LAB_18012b1a3:
          cVar8 = (in_stack_00000048 != '\0') + '\x1e';
        }
        else {
LAB_18012b0d0:
          cVar8 = ' ';
        }
        fVar35 = (float)FUN_180121ed0(cVar8);
        unaff_RBP[lVar30 + 0x20] = fVar35;
      }
      uVar10 = uVar10 + 1;
      lVar30 = lVar30 + 1;
      pfVar17 = pfVar17 + 6;
    } while (lVar30 < *(int64_t *)(unaff_RBP + -0xe));
    fVar35 = unaff_RBP[2];
    fVar34 = unaff_RBP[-10];
    fVar39 = 0.0;
    if (fVar35 != 0.0) {
      do {
        uVar16 = CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),0x40800000);
        FUN_1801296e0(unaff_RBP + -0x20,plVar20,fVar39,fVar33,uVar16);
        uVar11 = (int32_t)((uint64_t)uVar16 >> 0x20);
        uVar12 = func_0x000180123c50(plVar20,(int64_t)((int)fVar39 + 4));
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar11,0x20);
        FUN_18010f170(unaff_RBP + -0x20,uVar12,(int64_t)&stack0x00000058 + 1,&stack0x00000058,
                      in_stack_00000020);
        if ((((cStack0000000000000059 != '\0') && (0.04 < *(float *)(lVar15 + 0x1b24))) ||
            (cStack0000000000000058 != '\0')) &&
           (*(uint *)(lVar15 + 0x1dcc) = ((uint)fVar39 & 1) + 3, cStack0000000000000058 != '\0')) {
          *(int64_t *)(unaff_RBP + -10) = plVar20[8];
          unaff_RBP[0xc] = fVar39;
          _fStack0000000000000050 = 0;
          if (fVar39 == 0.0) {
LAB_18012b293:
            unaff_RBP[-9] = (*(float *)(lVar15 + 0x11c) - *(float *)(lVar15 + 0x1b4c)) + 4.0;
          }
          else if (fVar39 == 1.4013e-45) {
            _fStack0000000000000050 = 0x3f800000;
LAB_18012b2d2:
            unaff_RBP[-10] = (*(float *)(lVar15 + 0x118) - *(float *)(lVar15 + 0x1b48)) + 4.0;
          }
          else {
            if (fVar39 == 2.8026e-45) {
              _fStack0000000000000050 = 0x3f80000000000000;
              goto LAB_18012b293;
            }
            if (fVar39 == 4.2039e-45) goto LAB_18012b2d2;
          }
          in_stack_00000020 = (uint64_t *)&stack0x00000060;
          FUN_1801295b0(plVar20,unaff_RBP + -10,&stack0x00000050,&stack0x00000070,in_stack_00000020)
          ;
        }
        fVar39 = (float)((int)fVar39 + 1);
      } while ((int)fVar39 < (int)fVar35);
    }
    piVar26 = (int *)(*(int64_t *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0x218);
    *piVar26 = *piVar26 + -1;
    if ((*(int64_t *)(lVar15 + 0x1cd8) != 0) &&
       (*(int64_t **)(*(int64_t *)(lVar15 + 0x1cd8) + 0x3a0) == plVar20)) {
      iVar25 = *(int *)(lVar15 + 0x1cc0);
      fVar35 = 0.0;
      fVar33 = 0.0;
      if (iVar25 == 3) {
        if (*(char *)(lVar15 + 0x135) == '\0') goto LAB_18012b465;
        in_stack_00000020 = (uint64_t *)((uint64_t)in_stack_00000020 & 0xffffffff00000000);
        pfVar17 = (float *)FUN_180131aa0(unaff_RBP + -0x14,1,0,0,in_stack_00000020);
        fVar33 = *pfVar17;
        fVar35 = pfVar17[1];
        iVar25 = *(int *)(lVar15 + 0x1cc0);
      }
      if (iVar25 == 4) {
        in_stack_00000020 = (uint64_t *)((uint64_t)in_stack_00000020 & 0xffffffff00000000);
        pfVar17 = (float *)FUN_180131aa0(unaff_RBP + 0x18,2,0,0,in_stack_00000020);
        fVar33 = *pfVar17;
        fVar35 = pfVar17[1];
      }
      if ((fVar33 != 0.0) || (fVar35 != 0.0)) {
        fVar39 = *(float *)(lVar15 + 0xbc);
        if (*(float *)(lVar15 + 0xb8) <= *(float *)(lVar15 + 0xbc)) {
          fVar39 = *(float *)(lVar15 + 0xb8);
        }
        *(int8_t *)(lVar15 + 0x1cf8) = 0;
        *(int8_t *)(lVar15 + 0x1d07) = 1;
        fVar36 = (float)(int)(fVar39 * *(float *)(lVar15 + 0x18) * 600.0);
        fVar39 = (float)FUN_180121ed0(0x20);
        unaff_RBP[0x20] = fVar39;
        pfVar17 = (float *)FUN_180128fd0(unaff_RBP + -0x18,plVar20,
                                         CONCAT44(fVar35 * fVar36 +
                                                  *(float *)((int64_t)plVar20 + 0x54),
                                                  fVar33 * fVar36 + *(float *)(plVar20 + 10)));
        fStack0000000000000060 = *pfVar17;
        fStack0000000000000064 = pfVar17[1];
      }
    }
LAB_18012b465:
    lVar15 = SYSTEM_DATA_MANAGER_A;
    if ((fStack0000000000000060 != 3.4028235e+38) &&
       ((fStack0000000000000060 != *(float *)(plVar20 + 10) ||
        (fStack0000000000000064 != *(float *)((int64_t)plVar20 + 0x54))))) {
      *(float *)(plVar20 + 10) = fStack0000000000000060;
      *(float *)((int64_t)plVar20 + 0x54) = fStack0000000000000064;
      if (((*(uint *)((int64_t)plVar20 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar15 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar15 + 0x2e04) = *(int32_t *)(lVar15 + 0x1c);
      }
    }
    lVar15 = SYSTEM_DATA_MANAGER_A;
    if (fStack0000000000000070 != 3.4028235e+38) {
      *(float *)(plVar20 + 8) = (float)(int)fStack0000000000000070;
      *(float *)((int64_t)plVar20 + 0x44) = (float)(int)fStack0000000000000074;
      if (((*(uint *)((int64_t)plVar20 + 0xc) & 0x100) == 0) &&
         (*(float *)(lVar15 + 0x2e04) <= 0.0)) {
        *(int32_t *)(lVar15 + 0x2e04) = *(int32_t *)(lVar15 + 0x1c);
      }
    }
    plVar20[9] = plVar20[10];
  }
  pfVar17 = (float *)0x180bf66e8;
  if (*(char *)((int64_t)in_stack_00000040 + 0xae) != '\0') {
    if (*(char *)(in_stack_00000040[5] + 0x49) == '\0') {
      *(int64_t *)(in_stack_00000040[5] + 8) = in_stack_00000040[8];
    }
    if (*(char *)(in_stack_00000040[5] + 0x4a) == '\0') {
      *(int64_t *)(in_stack_00000040[5] + 0x10) = in_stack_00000040[9];
    }
    puVar19 = (uint64_t *)func_0x00018011feb0(in_stack_00000040[5]);
    uVar16 = puVar19[1];
    *(uint64_t *)(unaff_RBP + 4) = *puVar19;
    *(uint64_t *)(unaff_RBP + 6) = uVar16;
  }
  *(uint64_t *)((int64_t)in_stack_00000040 + 0x34) = *(uint64_t *)(in_stack_00000040[5] + 8);
  if ((*(float *)(in_stack_00000040 + 9) <= 0.0) || (((uint)fVar34 & 0x2000040) != 0)) {
    fVar33 = *(float *)(lVar7 + 0x19f8) * 16.0;
  }
  else {
    fVar33 = *(float *)(in_stack_00000040 + 9) * 0.65;
  }
  *(float *)((int64_t)in_stack_00000040 + 0x284) = (float)(int)fVar33;
  FUN_180291500(in_stack_00000040[0x5d]);
  *(uint *)(in_stack_00000040[0x5d] + 0x30) =
       -(uint)(*(char *)(lVar7 + 0x16c1) != '\0') & 2 | (uint)(*(char *)(lVar7 + 0x16c0) != '\0');
  lVar15 = in_stack_00000040[0x5d];
  *(uint64_t *)(unaff_RBP + -0x14) =
       *(uint64_t *)(*(int64_t *)(*(int64_t *)(lVar7 + 0x19f0) + 0x58) + 8);
  FUN_18011d9a0(lVar15 + 0x70,unaff_RBP + -0x14);
  FUN_180291a50(lVar15);
  if ((((uint)fVar34 & 0x5000000) == 0x1000000) && (unaff_RBP[-4] != 3.761582e-37)) {
    pfVar18 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x228);
    pfVar27 = (float *)(*(int64_t *)(unaff_RBP + 8) + 0x230);
  }
  else {
    pfVar18 = unaff_RBP + 4;
    pfVar27 = unaff_RBP + 6;
  }
  FUN_180126d10(pfVar18,pfVar27);
  if (((((uint)fVar34 >> 0x1b & 1) == 0) ||
      (plVar20 = (int64_t *)func_0x00018012ea90(), in_stack_00000040 != plVar20)) ||
     (0 < *(int *)((int64_t)in_stack_00000040 + 0xdc))) {
    bVar29 = 0;
  }
  else {
    bVar29 = 1;
  }
  lVar15 = *(int64_t *)(lVar7 + 0x1ce0);
  if ((lVar15 == 0) ||
     ((in_stack_00000040 != *(int64_t **)(lVar15 + 0x3a0) &&
      (((plVar20 = *(int64_t **)(lVar7 + 0x1ce8), plVar20 == (int64_t *)0x0 ||
        (in_stack_00000040 != plVar20)) || (plVar20[5] == *(int64_t *)(lVar15 + 0x28))))))) {
    bVar31 = false;
  }
  else {
    bVar31 = true;
  }
  if ((bVar29 != 0) || (bVar31)) {
    fVar33 = *(float *)(lVar7 + 0x1dc8);
    fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
    pfVar18 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar29 + 0x3a) * 0x10);
    fVar39 = pfVar18[1];
    fVar36 = pfVar18[2];
    fVar37 = pfVar18[3];
    unaff_RBP[-0x20] = *pfVar18;
    unaff_RBP[-0x1f] = fVar39;
    unaff_RBP[-0x1e] = fVar36;
    unaff_RBP[-0x1d] = fVar37;
    unaff_RBP[-0x1d] = fVar37 * fVar33 * fVar35;
    uVar12 = func_0x000180121e20(unaff_RBP + -0x20);
    in_stack_00000020 = (uint64_t *)((uint64_t)in_stack_00000020 & 0xffffffff00000000);
    FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + 4,unaff_RBP + 6,uVar12,in_stack_00000020);
    if ((bVar31) && (in_stack_00000040 == *(int64_t **)(lVar7 + 0x1ce0))) {
      func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e610(unaff_RBP + -0x18);
      uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      if ((((unaff_RBP[4] < unaff_RBP[-0x18]) || (unaff_RBP[5] < unaff_RBP[-0x17])) ||
          (unaff_RBP[-0x16] <= unaff_RBP[6] && unaff_RBP[6] != unaff_RBP[-0x16])) ||
         (unaff_RBP[-0x15] <= unaff_RBP[7] && unaff_RBP[7] != unaff_RBP[-0x15])) {
        fVar33 = *(float *)(lVar7 + 0x1cf4);
        lVar15 = in_stack_00000040[0x5d];
        uVar11 = *(int32_t *)(lVar7 + 0x1634);
        fVar39 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19bc);
        fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c0);
        fVar37 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19c4);
        fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1628);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x19b8);
        unaff_RBP[-0x1f] = fVar39;
        unaff_RBP[-0x1e] = fVar36;
        unaff_RBP[-0x1d] = fVar37;
        unaff_RBP[-0x1d] = fVar37 * fVar33 * 0.25 * fVar35;
        uVar13 = func_0x000180121e20(unaff_RBP + -0x20);
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,uVar11);
        FUN_180293f50(lVar15,unaff_RBP + -0x18,unaff_RBP + -0x16,uVar13,in_stack_00000020);
      }
    }
  }
  uVar10 = in_stack_00000068;
  lVar15 = *(int64_t *)(lVar7 + 0x1cd8);
  fVar33 = *(float *)(in_stack_00000040 + 0xf);
  fVar35 = *(float *)((int64_t)in_stack_00000040 + 0x7c);
  if (lVar15 == 0) {
    lVar15 = *(int64_t *)(lVar7 + 0x1c98);
  }
  if (((char)in_stack_00000068 == '\0') &&
     ((lVar15 == 0 ||
      ((in_stack_00000040[0x76] != *(int64_t *)(lVar15 + 0x3b0) &&
       ((in_stack_00000040[0x81] == 0 || (in_stack_00000040[0x81] != *(int64_t *)(lVar15 + 0x408)))
       )))))) {
    bVar29 = 0;
  }
  else {
    bVar29 = 1;
  }
  func_0x000180120c80(in_stack_00000040,unaff_RBP + -2);
  plVar20 = in_stack_00000040;
  uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  if (*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') {
    unaff_RBP[-10] = (float)((uint)fVar34 & 0x80);
    if (((uint)fVar34 & 0x80) == 0) {
      bVar31 = false;
      if (((*(char *)(lVar7 + 0x1dd0) != '\0') &&
          (*(int *)(lVar7 + 0x1a90) - *(int *)(lVar7 + 0x1e44) < 2)) &&
         ((*(char *)(lVar7 + 0xc3) != '\0' &&
          (((*(int *)(lVar7 + 0x1df4) != -1 &&
            (iVar25 = strcmp(&rendering_buffer_2304_ptr,lVar7 + 0x1df8), iVar25 == 0)) &&
           (bVar31 = false, (int64_t *)**(uint64_t **)(lVar7 + 0x1de0) == plVar20)))))) {
        bVar31 = true;
      }
      lVar15 = SYSTEM_DATA_MANAGER_A;
      if (((uint)fVar34 & 0x6000000) == 0) {
        lVar24 = 0xc0;
        if (unaff_RBP[0x16] != 0.0) {
          lVar24 = 0xd0;
        }
      }
      else {
        lVar24 = 0xe0;
      }
      pfVar18 = (float *)(lVar24 + 0x1628 + SYSTEM_DATA_MANAGER_A);
      fVar39 = pfVar18[1];
      fVar36 = pfVar18[2];
      fVar37 = pfVar18[3];
      unaff_RBP[-0x20] = *pfVar18;
      unaff_RBP[-0x1f] = fVar39;
      unaff_RBP[-0x1e] = fVar36;
      unaff_RBP[-0x1d] = fVar37;
      unaff_RBP[-0x1d] = fVar37 * *(float *)(lVar15 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + -0x20);
      if (*(char *)((int64_t)in_stack_00000040 + 0xae) == '\0') {
        fVar39 = 1.0;
        if (*(int *)(lVar7 + 0x1be8) != 0) {
          fVar39 = *(float *)(lVar7 + 0x1c38);
        }
        if (bVar31) {
          fVar39 = fVar39 * 0.5;
        }
        if (fVar39 != 1.0) {
          if (0.0 <= fVar39) {
            if (1.0 <= fVar39) {
              fVar39 = 1.0;
            }
          }
          else {
            fVar39 = 0.0;
          }
          uVar10 = (int)(fVar39 * 255.0 + 0.5) << 0x18 | uVar10 & 0xffffff;
        }
      }
      else {
        uVar10 = uVar10 | 0xff000000;
        if (bVar31) {
          *(float *)(in_stack_00000040[5] + 0x6c) = *(float *)(in_stack_00000040[5] + 0x6c) * 0.5;
        }
      }
      fVar39 = *(float *)(in_stack_00000040 + 9);
      fVar36 = *(float *)(in_stack_00000040 + 8);
      lVar15 = in_stack_00000040[0x5d];
      unaff_RBP[0x15] =
           *(float *)((int64_t)in_stack_00000040 + 0x4c) +
           *(float *)((int64_t)in_stack_00000040 + 0x44);
      unaff_RBP[0x14] = fVar39 + fVar36;
      fVar36 = (float)func_0x00018010e760(in_stack_00000040);
      fVar39 = *(float *)((int64_t)in_stack_00000040 + 0x44);
      unaff_RBP[0x12] = *(float *)(in_stack_00000040 + 8);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,fVar33);
      unaff_RBP[0x13] = fVar36 + fVar39;
      FUN_180293f50(lVar15,unaff_RBP + 0x12,unaff_RBP + 0x14,uVar10,in_stack_00000020);
    }
    uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    bVar31 = false;
    *(int32_t *)(lVar7 + 0x1be8) = 0;
    lVar15 = SYSTEM_DATA_MANAGER_A;
    if ((((uint)fVar34 & 1) == 0) && ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)) {
      pfVar18 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + ((uint64_t)bVar29 + 0x14) * 0x10);
      fVar39 = pfVar18[1];
      fVar36 = pfVar18[2];
      fVar37 = pfVar18[3];
      unaff_RBP[-0x20] = *pfVar18;
      unaff_RBP[-0x1f] = fVar39;
      unaff_RBP[-0x1e] = fVar36;
      unaff_RBP[-0x1d] = fVar37;
      unaff_RBP[-0x1d] = fVar37 * *(float *)(lVar15 + 0x1628);
      func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,fVar33);
      FUN_180293f50(in_stack_00000040[0x5d],unaff_RBP + -2);
    }
    uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    if (((uint)fVar34 >> 10 & 1) != 0) {
      func_0x00018010e7f0(in_stack_00000040,unaff_RBP + -8);
      uVar16 = func_0x00018010e720(in_stack_00000040,unaff_RBP + -0x18);
      func_0x00018010e690(unaff_RBP + -8,uVar16);
      lVar24 = SYSTEM_DATA_MANAGER_A;
      lVar15 = in_stack_00000040[0x5d];
      fVar39 = fVar33;
      if (((uint)fVar34 & 1) == 0) {
        fVar39 = 0.0;
      }
      fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x179c);
      fVar37 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a0);
      fVar38 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x17a4);
      unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1798);
      unaff_RBP[-0x1f] = fVar36;
      unaff_RBP[-0x1e] = fVar37;
      unaff_RBP[-0x1d] = fVar38;
      unaff_RBP[-0x1d] = fVar38 * *(float *)(lVar24 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + -0x20);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,fVar39);
      FUN_180293f50(lVar15,unaff_RBP + -8,unaff_RBP + -6,uVar11,in_stack_00000020);
      lVar15 = SYSTEM_DATA_MANAGER_A;
      uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
      fVar39 = *(float *)(lVar7 + 0x1668);
      if ((0.0 < fVar39) &&
         (unaff_RBP[-5] <
          *(float *)((int64_t)in_stack_00000040 + 0x4c) +
          *(float *)((int64_t)in_stack_00000040 + 0x44))) {
        lVar24 = in_stack_00000040[0x5d];
        fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
        fVar37 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
        fVar38 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
        unaff_RBP[-0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
        unaff_RBP[-0x1f] = fVar36;
        unaff_RBP[-0x1e] = fVar37;
        unaff_RBP[-0x1d] = fVar38;
        unaff_RBP[-0x1d] = fVar38 * *(float *)(lVar15 + 0x1628);
        uVar11 = func_0x000180121e20(unaff_RBP + -0x20);
        *(uint64_t *)(unaff_RBP + -0x18) = *(uint64_t *)(unaff_RBP + -6);
        unaff_RBP[0x11] = unaff_RBP[-5];
        unaff_RBP[0x10] = unaff_RBP[-8];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,fVar39);
        FUN_180293d20(lVar24,unaff_RBP + 0x10,unaff_RBP + -0x18,uVar11,in_stack_00000020);
      }
    }
    uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    lVar15 = in_stack_00000040[0x81];
    if ((lVar15 != 0) && ((*(byte *)(lVar15 + 0xa0) & 0x40) != 0)) {
      fVar39 = *(float *)(lVar15 + 0x38);
      fVar36 = *(float *)(lVar7 + 0x19f8);
      fVar37 = *(float *)(lVar15 + 0x3c);
      _fStack0000000000000050 = *(int64_t *)(lVar15 + 0x38);
      unaff_RBP[-0x20] = fVar39;
      unaff_RBP[-0x1f] = fVar37;
      fVar38 = (float)(int)(fVar36 * 0.7);
      fVar36 = (float)(int)(fVar36 * 0.55);
      unaff_RBP[-0x1e] = fVar39 + fVar36;
      unaff_RBP[-0x1d] = fVar37 + fVar36;
      uVar11 = FUN_180123c00(in_stack_00000040,&rendering_buffer_2496_ptr,0);
      uVar16 = CONCAT44(uVar12,0x20);
      cVar8 = FUN_18010f170(unaff_RBP + -0x20,uVar11,(int64_t)&stack0x00000058 + 1,&stack0x00000058
                            ,uVar16);
      uVar12 = (int32_t)((uint64_t)uVar16 >> 0x20);
      if (cVar8 != '\0') {
        *(byte *)(in_stack_00000040[0x81] + 0xa1) = *(byte *)(in_stack_00000040[0x81] + 0xa1) | 0x10
        ;
      }
      lVar15 = SYSTEM_DATA_MANAGER_A;
      if (((cStack0000000000000058 == '\0') || (cStack0000000000000059 == '\0')) &&
         (((*(byte *)(in_stack_00000040[0x81] + 0xa0) & 8) == 0 || (cStack0000000000000059 != '\0'))
         )) {
        lVar24 = (uint64_t)(cStack0000000000000059 != '\0') + 0x15;
      }
      else {
        lVar24 = 0x17;
      }
      pfVar18 = (float *)(SYSTEM_DATA_MANAGER_A + 0x1628 + (lVar24 + 10) * 0x10);
      fVar39 = pfVar18[1];
      fVar36 = pfVar18[2];
      fVar37 = pfVar18[3];
      unaff_RBP[-0x14] = *pfVar18;
      unaff_RBP[-0x13] = fVar39;
      unaff_RBP[-0x12] = fVar36;
      unaff_RBP[-0x11] = fVar37;
      unaff_RBP[-0x11] = fVar37 * *(float *)(lVar15 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + -0x14);
      in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,uVar11);
      lVar15 = in_stack_00000040[0x5d];
      unaff_RBP[0xe] = fStack0000000000000050;
      unaff_RBP[0xf] = fStack0000000000000054 + fVar38;
      _fStack0000000000000070 = CONCAT44(fStack0000000000000054,fStack0000000000000050 + fVar38);
      FUN_1802940f0(lVar15,&stack0x00000050,&stack0x00000070,unaff_RBP + 0xe,in_stack_00000020);
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xac) != '\0') {
      FUN_180110540(0);
    }
    if (*(char *)((int64_t)in_stack_00000040 + 0xad) != '\0') {
      FUN_180110540(1);
    }
    if (((uint)fVar34 & 2) == 0) {
      lVar15 = 0;
      do {
        uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
        fVar39 = *(float *)(in_stack_00000040 + 8);
        fVar36 = *(float *)((int64_t)in_stack_00000040 + 0x44);
        lVar24 = in_stack_00000040[0x5d];
        fVar39 = ((fVar39 + *(float *)(in_stack_00000040 + 9)) - fVar39) * pfVar17[-2] + fVar39;
        fVar36 = ((fVar36 + *(float *)((int64_t)in_stack_00000040 + 0x4c)) - fVar36) * pfVar17[-1]
                 + fVar36;
        if (bVar31) {
          unaff_RBP[2] = fVar35;
          unaff_RBP[3] = fVar32;
          fVar37 = fVar35;
        }
        else {
          fStack0000000000000060 = fVar32;
          fStack0000000000000064 = fVar35;
          fVar37 = fVar32;
        }
        pfVar18 = (float *)((int64_t)&stack0x00000060 + 4);
        if (bVar31) {
          pfVar18 = unaff_RBP + 3;
        }
        unaff_RBP[-4] = fVar37 * *pfVar17 + fVar39;
        unaff_RBP[-3] = *pfVar18 * pfVar17[1] + fVar36;
        FUN_18011d9a0(lVar24 + 0x80,unaff_RBP + -4);
        lVar24 = in_stack_00000040[0x5d];
        if (bVar31) {
          unaff_RBP[0x1c] = fVar32;
          unaff_RBP[0x1d] = fVar35;
          fVar37 = fVar32;
        }
        else {
          unaff_RBP[-0x1c] = fVar35;
          unaff_RBP[-0x1b] = fVar32;
          fVar37 = fVar35;
        }
        pfVar18 = unaff_RBP + -0x1b;
        if (bVar31) {
          pfVar18 = unaff_RBP + 0x1d;
        }
        unaff_RBP[0x18] = fVar37 * *pfVar17 + fVar39;
        unaff_RBP[0x19] = *pfVar18 * pfVar17[1] + fVar36;
        FUN_18011d9a0(lVar24 + 0x80,unaff_RBP + 0x18);
        fVar37 = pfVar17[1];
        lVar24 = in_stack_00000040[0x5d];
        in_stack_00000020 = (uint64_t *)CONCAT44(uVar12,pfVar17[3]);
        unaff_RBP[-0x14] = (fVar35 + fVar33) * *pfVar17 + fVar39;
        unaff_RBP[-0x13] = (fVar35 + fVar33) * fVar37 + fVar36;
        FUN_180293730(lVar24,unaff_RBP + -0x14);
        lVar24 = in_stack_00000040[0x5d];
        FUN_180293190(lVar24,*(uint64_t *)(lVar24 + 0x88),*(int32_t *)(lVar24 + 0x80),
                      unaff_RBP[lVar15 + 0x20],in_stack_00000020);
        bVar31 = (bool)(bVar31 ^ 1);
        *(int32_t *)(lVar24 + 0x80) = 0;
        lVar15 = lVar15 + 1;
        pfVar17 = pfVar17 + 6;
      } while (lVar15 < *(int64_t *)(unaff_RBP + -0xe));
    }
    lVar15 = SYSTEM_DATA_MANAGER_A;
    if ((0.0 < fVar35) && (unaff_RBP[-10] == 0.0)) {
      lVar24 = in_stack_00000040[0x5d];
      fVar39 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar36 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar37 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x20] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x21] = fVar39;
      unaff_RBP[0x22] = fVar36;
      unaff_RBP[0x23] = fVar37;
      unaff_RBP[0x23] = fVar37 * *(float *)(lVar15 + 0x1628);
      uVar10 = func_0x000180121e20(unaff_RBP + 0x20);
      fVar39 = *(float *)((int64_t)in_stack_00000040 + 0x44);
      fVar36 = *(float *)(in_stack_00000040 + 8) + *(float *)(in_stack_00000040 + 9);
      fVar37 = fVar39 + *(float *)((int64_t)in_stack_00000040 + 0x4c);
      if ((uVar10 & 0xff000000) != 0) {
        bVar29 = *(byte *)(lVar24 + 0x30);
        in_stack_00000020 = (uint64_t *)CONCAT44((int)((uint64_t)in_stack_00000020 >> 0x20),0xf);
        unaff_RBP[-0x14] = *(float *)(in_stack_00000040 + 8) + 0.5;
        unaff_RBP[-0x13] = fVar39 + 0.5;
        if ((bVar29 & 1) == 0) {
          fVar36 = fVar36 - 0.49;
          fVar37 = fVar37 - 0.49;
        }
        else {
          fVar36 = fVar36 - 0.5;
          fVar37 = fVar37 - 0.5;
        }
        unaff_RBP[-0xe] = fVar36;
        unaff_RBP[-0xd] = fVar37;
        FUN_1802939e0(lVar24,unaff_RBP + -0x14,unaff_RBP + -0xe,fVar33,in_stack_00000020);
        FUN_18010e4e0(lVar24,uVar10,1,fVar35);
      }
    }
    uVar12 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
    if (unaff_RBP[0xc] != -NAN) {
      uVar40 = (uint64_t)in_stack_00000020 & 0xffffffff00000000;
      FUN_1801296e0(unaff_RBP + -0x14,in_stack_00000040,unaff_RBP[0xc],fVar32,uVar40);
      lVar24 = SYSTEM_DATA_MANAGER_A;
      uVar11 = (int32_t)(uVar40 >> 0x20);
      lVar15 = in_stack_00000040[0x5d];
      fVar32 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x189c);
      fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a0);
      fVar39 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x18a4);
      unaff_RBP[-0xe] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1898);
      unaff_RBP[-0xd] = fVar32;
      unaff_RBP[-0xc] = fVar33;
      unaff_RBP[-0xb] = fVar39;
      unaff_RBP[-0xb] = fVar39 * *(float *)(lVar24 + 0x1628);
      uVar12 = func_0x000180121e20(unaff_RBP + -0xe);
      if (fVar35 <= 1.0) {
        fVar35 = 1.0;
      }
      uVar16 = CONCAT44(uVar11,fVar35);
      FUN_180293d20(lVar15,unaff_RBP + -0x14,unaff_RBP + -0x12,uVar12,uVar16);
      uVar12 = (int32_t)((uint64_t)uVar16 >> 0x20);
    }
    lVar15 = SYSTEM_DATA_MANAGER_A;
    fVar32 = *(float *)(lVar7 + 0x1668);
    uVar10 = in_stack_00000068;
    if (((0.0 < fVar32) && (((uint)fVar34 & 1) == 0)) &&
       ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)) {
      lVar24 = in_stack_00000040[0x5d];
      fVar33 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x171c);
      fVar35 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1720);
      fVar39 = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1724);
      unaff_RBP[0x18] = *(float *)(SYSTEM_DATA_MANAGER_A + 0x1718);
      unaff_RBP[0x19] = fVar33;
      unaff_RBP[0x1a] = fVar35;
      unaff_RBP[0x1b] = fVar39;
      unaff_RBP[0x1b] = fVar39 * *(float *)(lVar15 + 0x1628);
      uVar11 = func_0x000180121e20(unaff_RBP + 0x18);
      fVar33 = *(float *)(lVar7 + 0x1638);
      uVar16 = CONCAT44(uVar12,fVar32);
      unaff_RBP[-0xe] = *unaff_RBP - fVar33;
      unaff_RBP[-0xd] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x13] = unaff_RBP[1] - 1.0;
      unaff_RBP[-0x14] = unaff_RBP[-2] + fVar33;
      FUN_180293d20(lVar24,unaff_RBP + -0x14,unaff_RBP + -0xe,uVar11,uVar16);
      uVar12 = (int32_t)((uint64_t)uVar16 >> 0x20);
      uVar10 = in_stack_00000068;
    }
  }
  else {
    uVar11 = *(int32_t *)(lVar7 + 0x1668);
    *(int32_t *)(lVar7 + 0x1668) = *(int32_t *)((int64_t)in_stack_00000040 + 0x7c);
    lVar15 = SYSTEM_DATA_MANAGER_A;
    if ((bVar29 == 0) || (lVar24 = 0x150, *(char *)(lVar7 + 0x1d06) != '\0')) {
      lVar24 = 0x160;
    }
    pfVar17 = (float *)(lVar24 + 0x1628 + SYSTEM_DATA_MANAGER_A);
    fVar32 = pfVar17[1];
    fVar35 = pfVar17[2];
    fVar39 = pfVar17[3];
    unaff_RBP[0x20] = *pfVar17;
    unaff_RBP[0x21] = fVar32;
    unaff_RBP[0x22] = fVar35;
    unaff_RBP[0x23] = fVar39;
    unaff_RBP[0x23] = fVar39 * *(float *)(lVar15 + 0x1628);
    uVar13 = func_0x000180121e20(unaff_RBP + 0x20);
    uVar16 = CONCAT44(uVar12,fVar33);
    FUN_180122960(*(uint64_t *)(unaff_RBP + -2),*(uint64_t *)unaff_RBP,uVar13,1,uVar16);
    uVar12 = (int32_t)((uint64_t)uVar16 >> 0x20);
    *(int32_t *)(lVar7 + 0x1668) = uVar11;
  }
  pfVar17 = (float *)(lVar7 + 0x1668);
  in_stack_00000040[0xb] = in_stack_00000040[10];
  *(float *)(in_stack_00000040 + 0x4e) =
       (*(float *)(in_stack_00000040 + 8) - *(float *)((int64_t)in_stack_00000040 + 0x8c)) +
       *(float *)(in_stack_00000040 + 0xe);
  fVar39 = (float)func_0x00018010e760(in_stack_00000040);
  fVar32 = *(float *)((int64_t)in_stack_00000040 + 0x44);
  fVar33 = *(float *)(in_stack_00000040 + 0x12);
  fVar35 = *(float *)((int64_t)in_stack_00000040 + 0x74);
  fVar36 = (float)func_0x00018010e7a0();
  *(float *)((int64_t)in_stack_00000040 + 0x274) = fVar36 + fVar39 + (fVar32 - fVar33) + fVar35;
  fVar32 = *(float *)(in_stack_00000040 + 0xd);
  if (fVar32 == 0.0) {
    fVar32 = *(float *)(in_stack_00000040 + 9) - *(float *)((int64_t)in_stack_00000040 + 0xa4);
  }
  *(float *)(in_stack_00000040 + 0x4f) =
       ((*(float *)(in_stack_00000040 + 8) - *(float *)((int64_t)in_stack_00000040 + 0x8c)) -
       *(float *)(in_stack_00000040 + 0xe)) + fVar32;
  fVar32 = *(float *)((int64_t)in_stack_00000040 + 0x6c);
  if (fVar32 == 0.0) {
    fVar32 = *(float *)((int64_t)in_stack_00000040 + 0x4c) - *(float *)(in_stack_00000040 + 0x15);
  }
  *(float *)((int64_t)in_stack_00000040 + 0x27c) =
       ((*(float *)((int64_t)in_stack_00000040 + 0x44) - *(float *)(in_stack_00000040 + 0x12)) -
       *(float *)((int64_t)in_stack_00000040 + 0x74)) + fVar32;
  *(float *)((int64_t)in_stack_00000040 + 0x204) =
       *(float *)(in_stack_00000040 + 0xe) - *(float *)((int64_t)in_stack_00000040 + 0x8c);
  uVar13 = 0;
  *(int32_t *)(in_stack_00000040 + 0x41) = 0;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x20c) = 0;
  func_0x00018010e7a0(in_stack_00000040);
  func_0x00018010e760(in_stack_00000040);
  uVar16 = func_0x00018004ba20(unaff_RBP + -0x18,
                               *(float *)((int64_t)in_stack_00000040 + 0x20c) +
                               *(float *)((int64_t)in_stack_00000040 + 0x204));
  puVar28 = (int32_t *)func_0x00018011fbf0(unaff_RBP + -0xe,in_stack_00000040 + 8,uVar16);
  uVar11 = puVar28[1];
  *(int32_t *)(in_stack_00000040 + 0x22) = *puVar28;
  *(int32_t *)((int64_t)in_stack_00000040 + 0x114) = uVar11;
  in_stack_00000040[0x20] = in_stack_00000040[0x22];
  in_stack_00000040[0x21] = in_stack_00000040[0x22];
  in_stack_00000040[0x23] = in_stack_00000040[0x22];
  puVar28 = (int32_t *)func_0x00018004ba20(unaff_RBP + -0x18);
  uVar11 = puVar28[1];
  *(int32_t *)((int64_t)in_stack_00000040 + 300) = *puVar28;
  *(int32_t *)(in_stack_00000040 + 0x26) = uVar11;
  in_stack_00000040[0x24] = *(int64_t *)((int64_t)in_stack_00000040 + 300);
  *(int32_t *)((int64_t)in_stack_00000040 + 0x134) = 0;
  *(int32_t *)(in_stack_00000040 + 0x25) = 0;
  *(int8_t *)((int64_t)in_stack_00000040 + 0x17c) = 0;
  fVar32 = (float)func_0x0001801293c0(in_stack_00000040);
  *(bool *)((int64_t)in_stack_00000040 + 0x17d) = 0.0 < fVar32;
  *(int *)((int64_t)in_stack_00000040 + 0x174) = (int)in_stack_00000040[0x2f];
  *(int32_t *)(in_stack_00000040 + 0x2f) = 0;
  *(int8_t *)((int64_t)in_stack_00000040 + 0x17e) = 0;
  *(float *)(in_stack_00000040 + 0x27) = *(float *)((int64_t)in_stack_00000040 + 0x104) - 9999.0;
  FUN_18013e200(in_stack_00000040 + 0x31,0);
  lVar15 = *(int64_t *)(unaff_RBP + 8);
  *(int32_t *)(in_stack_00000040 + 0x34) = 1;
  if (lVar15 == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = *(int32_t *)(lVar15 + 0x1a0);
  }
  *(int32_t *)((int64_t)in_stack_00000040 + 0x1a4) = uVar11;
  if (lVar15 != 0) {
    uVar13 = *(int32_t *)(lVar15 + 0x1a8);
  }
  *(int32_t *)(in_stack_00000040 + 0x35) = uVar13;
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
  if ((unaff_RBP[0x16] != 0.0) && ((int)in_stack_00000040[0x35] != *(int *)(lVar15 + 0x1a8))) {
    *(int *)(in_stack_00000040 + 0x35) = *(int *)(lVar15 + 0x1a8);
    FUN_18011d940(in_stack_00000040 + 0x37,in_stack_00000040 + 0x35);
  }
  if (0 < *(int *)((int64_t)in_stack_00000040 + 0xc4)) {
    *(int *)((int64_t)in_stack_00000040 + 0xc4) = *(int *)((int64_t)in_stack_00000040 + 0xc4) + -1
    ;
  }
  if (0 < (int)in_stack_00000040[0x19]) {
    *(int *)(in_stack_00000040 + 0x19) = (int)in_stack_00000040[0x19] + -1;
  }
  if ((char)uVar10 != '\0') {
    FUN_18012d2e0(in_stack_00000040);
    func_0x000180131810(in_stack_00000040,0);
  }
  puVar5 = *(int8_t **)(unaff_RBP + 10);
  if ((((puVar5 != (int8_t *)0x0) &&
       (lVar24 = in_stack_00000040[5], *(char *)(lVar24 + 0x48) != '\0')) &&
      (lVar30 = func_0x00018012fae0(), lVar24 != lVar30)) &&
     (((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0 ||
      ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 2) != 0)))) {
    *(int8_t *)(lVar24 + 0x48) = 0;
    *(int8_t *)(lVar7 + 0x1cf8) = 0;
    *puVar5 = 0;
  }
  if ((((uint)fVar34 & 1) == 0) && ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0)) {
    uVar10 = *(uint *)(in_stack_00000040 + 0x35);
    *(uint *)(in_stack_00000040 + 0x35) = uVar10 | 0x10;
    *(int32_t *)((int64_t)in_stack_00000040 + 0x16c) = 1;
    *(int32_t *)(in_stack_00000040 + 0x2e) = 2;
    if (((uint)fVar34 & 0x20) == 0) {
      plVar20 = in_stack_00000040 + 8;
      uVar11 = FUN_180123c00(in_stack_00000040,&rendering_buffer_2480_ptr,0);
      cVar8 = FUN_180110000(uVar11,plVar20,0);
      if (cVar8 != '\0') {
        *(int8_t *)((int64_t)in_stack_00000040 + 0xb3) = 1;
      }
    }
    if (*(int64_t *)(unaff_RBP + 10) != 0) {
      fVar32 = *(float *)(lVar7 + 0x19f8) * 0.5;
      uVar16 = func_0x00018004ba20(unaff_RBP + -0x18,
                                   ((*(float *)(in_stack_00000040 + 9) +
                                    *(float *)(in_stack_00000040 + 8)) - *(float *)(lVar7 + 0x165c))
                                   - fVar32,*(float *)((int64_t)in_stack_00000040 + 0x44) +
                                            *(float *)(lVar7 + 0x1660) + fVar32);
      uVar11 = FUN_180123c00(in_stack_00000040,&rendering_buffer_2512_ptr,0);
      cVar8 = FUN_18010fd40(uVar11,uVar16);
      if (cVar8 != '\0') {
        **(int8_t **)(unaff_RBP + 10) = 0;
      }
    }
    *(int32_t *)((int64_t)in_stack_00000040 + 0x16c) = 0;
    *(int32_t *)(in_stack_00000040 + 0x2e) = 1;
    *(uint *)(in_stack_00000040 + 0x35) = uVar10;
    if (((uint)fVar34 & 0x100000) == 0) {
      fVar32 = 0.0;
    }
    else {
      uVar16 = CONCAT44(uVar12,0xbf800000);
      pfVar18 = (float *)FUN_180127c60(unaff_RBP + -0x18,&system_data_df28,0,0,uVar16);
      uVar12 = (int32_t)((uint64_t)uVar16 >> 0x20);
      fVar32 = *pfVar18;
    }
    uVar16 = func_0x00018004ba20(unaff_RBP + -0x18);
    uVar21 = FUN_180127c60(unaff_RBP + -0xe,*(uint64_t *)(unaff_RBP + 0x1e),0,1,
                           CONCAT44(uVar12,0xbf800000));
    func_0x00018011fbf0(&stack0x00000050,uVar21,uVar16);
    fVar39 = unaff_RBP[-2];
    fVar33 = unaff_RBP[-1];
    fVar36 = *unaff_RBP;
    fVar35 = unaff_RBP[1];
    unaff_RBP[-0x1c] = fVar39;
    unaff_RBP[-0x1b] = fVar33;
    unaff_RBP[-0x1a] = fVar36;
    unaff_RBP[-0x19] = fVar35;
    if (((uint)fVar34 & 0x20) == 0) {
      fVar37 = *(float *)(lVar7 + 0x165c);
      fVar38 = fVar37 + *(float *)(lVar7 + 0x19f8) + *(float *)(lVar7 + 0x1674);
    }
    else {
      fVar37 = *(float *)(lVar7 + 0x165c);
      fVar38 = fVar37;
    }
    lVar24 = *(int64_t *)(unaff_RBP + 10);
    if (lVar24 != 0) {
      fVar37 = fVar37 + *(float *)(lVar7 + 0x19f8) + *(float *)(lVar7 + 0x1674);
    }
    if (0.0 < *(float *)(lVar7 + 0x1644)) {
      fVar37 = (float)func_0x00018013e9f0();
      fVar35 = unaff_RBP[-0x19];
      fVar36 = unaff_RBP[-0x1a];
      fVar33 = unaff_RBP[-0x1b];
      fVar39 = unaff_RBP[-0x1c];
    }
    unaff_RBP[-7] = fVar33;
    unaff_RBP[-5] = fVar35;
    unaff_RBP[-0x1c] = fVar39 + fVar38;
    unaff_RBP[-0x1a] = fVar36 - fVar37;
    unaff_RBP[-8] = fVar39 + fVar38;
    unaff_RBP[-6] = fVar36 - fVar37;
    if (lVar24 == 0) {
      fVar33 = *(float *)(lVar7 + 0x165c);
    }
    else {
      fVar33 = (float)func_0x00018010e5a0(unaff_RBP + -2);
      fVar33 = fVar33 - 3.0;
    }
    unaff_RBP[-6] = (*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) - fVar33
    ;
    FUN_180122890(unaff_RBP + -0x1c,unaff_RBP + -0x1a,*(uint64_t *)(unaff_RBP + 0x1e),0,
                  &stack0x00000050);
    if (((uint)fVar34 & 0x100000) != 0) {
      uVar16 = func_0x00018004ba20(unaff_RBP + -0x14,2.0 - fVar32);
      func_0x00018010e590(unaff_RBP + -0x1c);
      func_0x00018013e900();
      uVar21 = func_0x00018004ba20(unaff_RBP + 0x18);
      func_0x00018011fbf0(unaff_RBP + -0x18,uVar21,uVar16);
      func_0x00018004ba20(unaff_RBP + -0xe);
      func_0x00018004ba20(unaff_RBP + -0x14);
      uVar16 = func_0x00018011fbf0(unaff_RBP + 0x18,unaff_RBP + -0x1a,unaff_RBP + -0xe);
      uVar21 = func_0x00018011fbf0(unaff_RBP + 0x1c,unaff_RBP + -0x18,unaff_RBP + -0xe);
      FUN_180122890(uVar21,uVar16,&system_data_df28,0,0);
    }
  }
  *(int16_t *)((int64_t)in_stack_00000040 + 0x26a) = 0;
  *(int16_t *)(in_stack_00000040 + 0x4d) = 0;
  plVar20 = (int64_t *)func_0x00018010e720(in_stack_00000040,unaff_RBP + 0x20);
  lVar24 = plVar20[1];
  in_stack_00000040[0x47] = *plVar20;
  in_stack_00000040[0x48] = lVar24;
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0) {
    fVar32 = (float)func_0x00018010e760();
    *(float *)((int64_t)in_stack_00000040 + 0x23c) =
         fVar32 + *(float *)((int64_t)in_stack_00000040 + 0x23c);
  }
  func_0x00018010e690(in_stack_00000040 + 0x47,in_stack_00000040 + 0x45);
  *(float *)(in_stack_00000040 + 0x49) =
       unaff_RBP[-2] + *(float *)((int64_t)in_stack_00000040 + 0x7c);
  if (((uint)fVar34 & 0x401) == 1) {
    pfVar17 = (float *)((int64_t)in_stack_00000040 + 0x7c);
  }
  fVar32 = *pfVar17;
  fVar33 = (float)func_0x00018010e7a0();
  *(float *)((int64_t)in_stack_00000040 + 0x24c) = fVar33 + unaff_RBP[1] + fVar32;
  *(float *)(in_stack_00000040 + 0x4a) =
       ((*(float *)(in_stack_00000040 + 9) + *(float *)(in_stack_00000040 + 8)) -
       *(float *)((int64_t)in_stack_00000040 + 0xa4)) -
       *(float *)((int64_t)in_stack_00000040 + 0x7c);
  *(float *)((int64_t)in_stack_00000040 + 0x254) =
       ((*(float *)((int64_t)in_stack_00000040 + 0x4c) +
        *(float *)((int64_t)in_stack_00000040 + 0x44)) - *(float *)(in_stack_00000040 + 0x15)) -
       *(float *)((int64_t)in_stack_00000040 + 0x7c);
  fVar32 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4b) =
       (float)(int)(fVar32 + *(float *)(in_stack_00000040 + 0x49) + 0.5);
  *(float *)((int64_t)in_stack_00000040 + 0x25c) =
       (float)(int)(*(float *)((int64_t)in_stack_00000040 + 0x24c) + 0.5);
  fVar32 = *(float *)(in_stack_00000040 + 0x4a);
  fVar33 = (float)func_0x00018013e900();
  *(float *)(in_stack_00000040 + 0x4c) = (float)(int)((fVar32 + 0.5) - fVar33);
  *(float *)((int64_t)in_stack_00000040 + 0x264) =
       (float)(int)(*(float *)((int64_t)in_stack_00000040 + 0x254) + 0.5);
  if ((*(byte *)(lVar7 + 8) & 0x40) != 0) {
    if ((*(int *)(lVar7 + 0x1b2c) == *(int *)((int64_t)in_stack_00000040 + 0x84)) &&
       (((*(char *)(lVar7 + 0xc1) == '\0' || (*(char *)(lVar7 + 0x135) != '\0')) &&
        ((*(uint *)(in_stack_00000040[0x74] + 0xc) & 0x200004) == 0)))) {
      FUN_18013ba30();
    }
    if ((((*(char *)(lVar7 + 0x1dd0) != '\0') && (((uint)fVar34 >> 0x15 & 1) == 0)) &&
        ((*(int64_t *)(lVar7 + 0x1b78) == 0 ||
         (*(int64_t **)(*(int64_t *)(lVar7 + 0x1b78) + 0x3a0) != in_stack_00000040)))) &&
       ((in_stack_00000040 == (int64_t *)in_stack_00000040[0x74] &&
        ((*(uint *)((int64_t)in_stack_00000040 + 0xc) & 0x20000000) == 0)))) {
      FUN_18013baf0();
    }
  }
  if ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) == 0) {
    *(int32_t *)((int64_t)in_stack_00000040 + 0x144) =
         *(int32_t *)((int64_t)in_stack_00000040 + 0x84);
    cVar8 = FUN_180128040(unaff_RBP + -2);
    fVar32 = unaff_RBP[-0x10];
    *(uint *)(in_stack_00000040 + 0x29) = (uint)(cVar8 != '\0');
    uVar16 = *(uint64_t *)unaff_RBP;
    *(uint64_t *)((int64_t)in_stack_00000040 + 0x14c) = *(uint64_t *)(unaff_RBP + -2);
    *(uint64_t *)((int64_t)in_stack_00000040 + 0x154) = uVar16;
    fVar33 = in_stack_00000078;
  }
  else {
    fVar32 = unaff_RBP[-0x10];
    *(int *)((int64_t)in_stack_00000040 + 0x144) = (int)in_stack_00000040[1];
    *(int32_t *)(in_stack_00000040 + 0x29) = *(int32_t *)((int64_t)in_stack_00000040 + 0x41c)
    ;
    *(int64_t *)((int64_t)in_stack_00000040 + 0x14c) = in_stack_00000040[0x84];
    *(int64_t *)((int64_t)in_stack_00000040 + 0x154) = in_stack_00000040[0x85];
    fVar33 = in_stack_00000078;
  }
LAB_18012ce0f:
  if (((uint)fVar34 >> 0x1d & 1) == 0) {
    FUN_180126d10(in_stack_00000040 + 0x4b,in_stack_00000040 + 0x4c,1);
  }
  if (fVar33 != fVar32) {
    *(int8_t *)((int64_t)in_stack_00000040 + 0xb1) = 0;
  }
  *(short *)(in_stack_00000040 + 0x17) = (short)in_stack_00000040[0x17] + 1;
  FUN_18011ff20(lVar7 + 0x1bd0);
  if (((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 1) != 0) &&
     ((*(byte *)((int64_t)in_stack_00000040 + 0x432) & 2) == 0)) {
    *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((uint)fVar34 >> 0x18 & 1) != 0) {
    if ((((((uint)fVar34 & 0x40) == 0) && (*(int *)((int64_t)in_stack_00000040 + 0xc4) < 1)) &&
        ((int)in_stack_00000040[0x19] < 1)) &&
       ((*(float *)(in_stack_00000040 + 0x48) < *(float *)(in_stack_00000040 + 0x47) ||
         *(float *)(in_stack_00000040 + 0x48) == *(float *)(in_stack_00000040 + 0x47) ||
        (*(float *)((int64_t)in_stack_00000040 + 0x244) <
         *(float *)((int64_t)in_stack_00000040 + 0x23c) ||
         *(float *)((int64_t)in_stack_00000040 + 0x244) ==
         *(float *)((int64_t)in_stack_00000040 + 0x23c))))) {
      *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
    }
    if ((lVar15 != 0) && ((*(char *)(lVar15 + 0xb2) != '\0' || (*(char *)(lVar15 + 0xb6) != '\0'))))
    {
      *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
    }
  }
  if (*(float *)(lVar7 + 0x1628) <= 0.0) {
    *(int32_t *)(in_stack_00000040 + 0x1b) = 1;
  }
  if (((int)in_stack_00000040[0x1b] < 1) && (*(int *)((int64_t)in_stack_00000040 + 0xdc) < 1)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  *(char *)((int64_t)in_stack_00000040 + 0xb6) = cVar8;
  if (((((*(char *)((int64_t)in_stack_00000040 + 0xb2) == '\0') &&
        (*(char *)((int64_t)in_stack_00000040 + 0xaf) != '\0')) && (cVar8 == '\0')) ||
      ((0 < *(int *)((int64_t)in_stack_00000040 + 0xc4) || (0 < (int)in_stack_00000040[0x19])))) ||
     (0 < *(int *)((int64_t)in_stack_00000040 + 0xdc))) {
    uVar22 = 0;
  }
  else {
    uVar22 = 1;
  }
  *(int8_t *)((int64_t)in_stack_00000040 + 0xb4) = uVar22;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + 0x24) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address





