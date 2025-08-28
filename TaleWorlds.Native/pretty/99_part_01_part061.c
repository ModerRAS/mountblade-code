#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part061.c - 4 个函数
// 函数: void GenericFunction_1800df3bb(void)
void GenericFunction_1800df3bb(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint uVar12;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  float *unaff_R15;
  int32_t uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  lVar10 = *(int64_t *)(unaff_RBX + 0x1cd8);
  fVar1 = *(float *)(lVar10 + 0x1120);
  fVar2 = *(float *)(lVar10 + 0x1124);
  fVar14 = *(float *)(lVar10 + 0x1128);
  fVar16 = *(float *)(unaff_RSI + 0x120) - fVar1 * 1e+07;
  fVar17 = *(float *)(unaff_RSI + 0x124) - fVar2 * 1e+07;
  fVar18 = *(float *)(unaff_RSI + 0x128) - fVar14 * 1e+07;
  fVar3 = unaff_R15[5];
  fVar4 = unaff_R15[1];
  fVar5 = unaff_R15[9];
  fVar6 = *(float *)(unaff_RSI + 0x114);
  fVar7 = *(float *)(unaff_RSI + 0x118);
  fVar15 = unaff_XMM11_Da /
           (fVar17 * unaff_R15[7] + fVar16 * unaff_R15[3] + fVar18 * unaff_R15[0xb] + unaff_R15[0xf]
           );
  fVar8 = unaff_R15[0xd];
  fVar9 = *(float *)(unaff_RSI + 0x110);
  *(float *)(lVar10 + 0x1c08) =
       ((fVar17 * unaff_R15[4] + fVar16 * *unaff_R15 + fVar18 * unaff_R15[8] + unaff_R15[0xc]) *
        fVar15 + unaff_XMM11_Da) * unaff_XMM12_Da;
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c0c) =
       unaff_XMM12_Da -
       (fVar17 * fVar3 + fVar16 * fVar4 + fVar18 * fVar5 + fVar8) * fVar15 * unaff_XMM12_Da;
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c04) =
       -(fVar9 * fVar1 + fVar6 * fVar2 + fVar7 * fVar14);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c00) = *(int32_t *)(unaff_RDI + 0x1dc);
  if (unaff_RDI != 0) {
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c6c) = *(int32_t *)(unaff_RDI + 0x180)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1bfc) = *(int32_t *)(unaff_RDI + 0x1d8)
    ;
    lVar10 = *(int64_t *)(unaff_RBX + 0x1cd8);
    *(int32_t *)(lVar10 + 0x1c10) = *(int32_t *)(unaff_RDI + 0x1e8);
    fVar1 = *(float *)(unaff_R14 + 0x1260);
    fVar2 = *(float *)(unaff_RDI + 0x1ec);
    if (fVar1 <= 0.0) {
      fVar14 = fVar2;
      if ((fVar1 < 0.0) && (fVar14 = *(float *)(unaff_RDI + 0x1f0) + fVar1, fVar2 <= fVar14)) {
        fVar14 = fVar2;
      }
    }
    else {
      fVar14 = fVar2 + fVar1;
    }
    uVar13 = powf(lVar10,fVar14);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c18) = uVar13;
    uVar13 = powf();
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c1c) = uVar13;
    uVar13 = powf();
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d58) = uVar13;
    uVar13 = powf();
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c14) = uVar13;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c20) = *(int32_t *)(unaff_RDI + 0x1f8)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c24) = *(int32_t *)(unaff_RDI + 0x1fc)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c28) = *(int32_t *)(unaff_RDI + 0x200)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce8) = *(int32_t *)(unaff_RDI + 0x208)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cec) = *(int32_t *)(unaff_RDI + 0x20c)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d34) = *(int32_t *)(unaff_RDI + 0x210)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d30) = *(int32_t *)(unaff_RDI + 0x218)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d2c) = *(int32_t *)(unaff_RDI + 0x214)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d18) = *(int32_t *)(unaff_RDI + 0x21c)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d1c) = *(int32_t *)(unaff_RDI + 0x220)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d20) = *(int32_t *)(unaff_RDI + 0x224)
    ;
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d24) = (float)*(int *)(unaff_RDI + 0x228);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d28) = *(int32_t *)(unaff_RDI + 0x22c)
    ;
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d14) = (float)*(int *)(unaff_RDI + 0x230);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d10) = *(int32_t *)(unaff_RDI + 0x234)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf0) = *(int32_t *)(unaff_RDI + 0x288)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cfc) = *(int32_t *)(unaff_RDI + 0x28c)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce0) = *(int32_t *)(unaff_RSI + 0x180)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce4) = *(int32_t *)(unaff_RDI + 0x294)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf4) = *(int32_t *)(unaff_RDI + 0x290)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf8) = *(int32_t *)(unaff_RDI + 0x298)
    ;
    lVar10 = *(int64_t *)(unaff_RBX + 0x1cd8);
    uVar11 = *(uint64_t *)(unaff_RDI + 0x2a4);
    *(uint64_t *)(lVar10 + 0x1d00) = *(uint64_t *)(unaff_RDI + 0x29c);
    *(uint64_t *)(lVar10 + 0x1d08) = uVar11;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d38) = *(int32_t *)(unaff_RDI + 0x2ac)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d3c) = *(int32_t *)(unaff_RDI + 0x2b0)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d50) = *(int32_t *)(unaff_RDI + 0x2b4)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d40) = *(int32_t *)(unaff_RDI + 0x2b8)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d44) = *(int32_t *)(unaff_RDI + 700);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d48) = *(int32_t *)(unaff_RDI + 0x2c0)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d4c) = *(int32_t *)(unaff_RDI + 0x2c4)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c60) = *(int32_t *)(unaff_RDI + 0x2c8)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c64) = *(int32_t *)(unaff_RDI + 0x2cc)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c8c) = *(int32_t *)(unaff_RDI + 0x204)
    ;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d88) = *(int32_t *)(unaff_RDI + 0x98);
    uVar12 = *(uint *)(unaff_RSI + 0x12450) & 0x800000ff;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xffffff00) + 1;
    }
    *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d84) = (float)(int)uVar12;
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d8c) =
         *(int32_t *)(unaff_RSI + 0x11cec);
  }
  return;
}
// 函数: void GenericFunction_1800df54f(void)
void GenericFunction_1800df54f(void)
{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int32_t uVar6;
  float fVar7;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c6c) = *(int32_t *)(unaff_RDI + 0x180);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1bfc) = *(int32_t *)(unaff_RDI + 0x1d8);
  lVar3 = *(int64_t *)(unaff_RBX + 0x1cd8);
  *(int32_t *)(lVar3 + 0x1c10) = *(int32_t *)(unaff_RDI + 0x1e8);
  fVar1 = *(float *)(unaff_R14 + 0x1260);
  fVar2 = *(float *)(unaff_RDI + 0x1ec);
  if (fVar1 <= 0.0) {
    fVar7 = fVar2;
    if ((fVar1 < 0.0) && (fVar7 = *(float *)(unaff_RDI + 0x1f0) + fVar1, fVar2 <= fVar7)) {
      fVar7 = fVar2;
    }
  }
  else {
    fVar7 = fVar2 + fVar1;
  }
  uVar6 = powf(lVar3,fVar7);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c18) = uVar6;
  uVar6 = powf();
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c1c) = uVar6;
  uVar6 = powf();
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d58) = uVar6;
  uVar6 = powf();
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c14) = uVar6;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c20) = *(int32_t *)(unaff_RDI + 0x1f8);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c24) = *(int32_t *)(unaff_RDI + 0x1fc);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c28) = *(int32_t *)(unaff_RDI + 0x200);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce8) = *(int32_t *)(unaff_RDI + 0x208);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cec) = *(int32_t *)(unaff_RDI + 0x20c);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d34) = *(int32_t *)(unaff_RDI + 0x210);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d30) = *(int32_t *)(unaff_RDI + 0x218);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d2c) = *(int32_t *)(unaff_RDI + 0x214);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d18) = *(int32_t *)(unaff_RDI + 0x21c);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d1c) = *(int32_t *)(unaff_RDI + 0x220);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d20) = *(int32_t *)(unaff_RDI + 0x224);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d24) = (float)*(int *)(unaff_RDI + 0x228);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d28) = *(int32_t *)(unaff_RDI + 0x22c);
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d14) = (float)*(int *)(unaff_RDI + 0x230);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d10) = *(int32_t *)(unaff_RDI + 0x234);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf0) = *(int32_t *)(unaff_RDI + 0x288);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cfc) = *(int32_t *)(unaff_RDI + 0x28c);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce0) = *(int32_t *)(unaff_RSI + 0x180);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1ce4) = *(int32_t *)(unaff_RDI + 0x294);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf4) = *(int32_t *)(unaff_RDI + 0x290);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1cf8) = *(int32_t *)(unaff_RDI + 0x298);
  lVar3 = *(int64_t *)(unaff_RBX + 0x1cd8);
  uVar4 = *(uint64_t *)(unaff_RDI + 0x2a4);
  *(uint64_t *)(lVar3 + 0x1d00) = *(uint64_t *)(unaff_RDI + 0x29c);
  *(uint64_t *)(lVar3 + 0x1d08) = uVar4;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d38) = *(int32_t *)(unaff_RDI + 0x2ac);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d3c) = *(int32_t *)(unaff_RDI + 0x2b0);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d50) = *(int32_t *)(unaff_RDI + 0x2b4);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d40) = *(int32_t *)(unaff_RDI + 0x2b8);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d44) = *(int32_t *)(unaff_RDI + 700);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d48) = *(int32_t *)(unaff_RDI + 0x2c0);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d4c) = *(int32_t *)(unaff_RDI + 0x2c4);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c60) = *(int32_t *)(unaff_RDI + 0x2c8);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c64) = *(int32_t *)(unaff_RDI + 0x2cc);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1c8c) = *(int32_t *)(unaff_RDI + 0x204);
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d88) = *(int32_t *)(unaff_RDI + 0x98);
  uVar5 = *(uint *)(unaff_RSI + 0x12450) & 0x800000ff;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
  }
  *(float *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d84) = (float)(int)uVar5;
  *(int32_t *)(*(int64_t *)(unaff_RBX + 0x1cd8) + 0x1d8c) = *(int32_t *)(unaff_RSI + 0x11cec)
  ;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800df927(uint64_t param_1,code *param_2)
void GenericFunction_1800df927(uint64_t param_1,code *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  char unaff_R12B;
  code *unaff_R13;
  int64_t lVar16;
  float *unaff_R15;
  int32_t uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM14_Da;
  int32_t local_buffer_2c;
  lVar14 = (*param_2)();
  lVar15 = system_message_buffer;
  lVar16 = SYSTEM_STATE_MANAGER;
  if (lVar14 == 0) {
    *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1d5c) = 0x43960000;
    lVar14 = *(int64_t *)(lVar15 + 0x1cd8);
    *(uint64_t *)(lVar14 + 0x1d70) = 0;
    *(uint64_t *)(lVar14 + 0x1d78) = 0;
  }
  else {
    pcVar10 = *(code **)(**(int64_t **)(unaff_RSI + 0x3580) + 0xb8);
    if (pcVar10 != unaff_R13) {
      (*pcVar10)();
    }
    lVar15 = system_message_buffer;
    lVar16 = SYSTEM_STATE_MANAGER;
    *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1d5c) = 0x41f00000;
    pcVar10 = *(code **)(**(int64_t **)(unaff_RSI + 0x3580) + 0xb8);
    if (pcVar10 == unaff_R13) {
      lVar14 = (*(int64_t **)(unaff_RSI + 0x3580))[0xda];
    }
    else {
      lVar14 = (*pcVar10)();
      lVar15 = system_message_buffer;
      lVar16 = SYSTEM_STATE_MANAGER;
    }
    uVar12 = *(uint64_t *)(lVar14 + 0x3f44);
    lVar11 = *(int64_t *)(lVar15 + 0x1cd8);
    *(uint64_t *)(lVar11 + 0x1d70) = *(uint64_t *)(lVar14 + 0x3f3c);
    *(uint64_t *)(lVar11 + 0x1d78) = uVar12;
    pcVar10 = *(code **)(**(int64_t **)(unaff_RSI + 0x3580) + 0xb8);
    if (pcVar10 == unaff_R13) {
      lVar14 = (*(int64_t **)(unaff_RSI + 0x3580))[0xda];
    }
    else {
      lVar14 = (*pcVar10)();
      lVar15 = system_message_buffer;
      lVar16 = SYSTEM_STATE_MANAGER;
    }
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d7c) = *(int32_t *)(lVar14 + 0x3f38);
  }
  lVar14 = *(int64_t *)(lVar15 + 0x1cd8);
  *(int32_t *)(lVar14 + 0x1c30) = unaff_XMM10_Da;
  *(int32_t *)(lVar14 + 0x1c34) = unaff_XMM14_Da;
  *(int32_t *)(lVar14 + 0x1c38) = unaff_XMM8_Da;
  *(int32_t *)(lVar14 + 0x1c3c) = 0x7f7fffff;
  lVar14 = *(int64_t *)(lVar15 + 0x1cd8);
  local_buffer_2c = 0x7f7fffff;
  *(int32_t *)(lVar14 + 0x1c40) = unaff_XMM9_Da;
  *(int32_t *)(lVar14 + 0x1c44) = unaff_XMM13_Da;
  *(int32_t *)(lVar14 + 0x1c48) = unaff_XMM7_Da;
  *(int32_t *)(lVar14 + 0x1c4c) = 0x7f7fffff;
  if (unaff_R12B != '\0') {
    lVar14 = *(int64_t *)(lVar15 + 0x1cd8);
    fVar1 = *(float *)(lVar14 + 0x1120);
    fVar2 = *(float *)(lVar14 + 0x1124);
    fVar18 = *(float *)(lVar14 + 0x1128);
    fVar20 = *(float *)(unaff_RSI + 0x120) - fVar1 * 1e+07;
    fVar21 = *(float *)(unaff_RSI + 0x124) - fVar2 * 1e+07;
    fVar22 = *(float *)(unaff_RSI + 0x128) - fVar18 * 1e+07;
    fVar3 = unaff_R15[5];
    fVar4 = unaff_R15[1];
    fVar5 = unaff_R15[9];
    fVar6 = *(float *)(unaff_RSI + 0x114);
    fVar7 = *(float *)(unaff_RSI + 0x118);
    fVar19 = unaff_XMM11_Da /
             (fVar21 * unaff_R15[7] + fVar20 * unaff_R15[3] + fVar22 * unaff_R15[0xb] +
             unaff_R15[0xf]);
    fVar8 = unaff_R15[0xd];
    fVar9 = *(float *)(unaff_RSI + 0x110);
    *(float *)(lVar14 + 0x1c08) =
         ((fVar21 * unaff_R15[4] + fVar20 * *unaff_R15 + fVar22 * unaff_R15[8] + unaff_R15[0xc]) *
          fVar19 + unaff_XMM11_Da) * unaff_XMM12_Da;
    *(float *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c0c) =
         unaff_XMM12_Da -
         (fVar21 * fVar3 + fVar20 * fVar4 + fVar22 * fVar5 + fVar8) * fVar19 * unaff_XMM12_Da;
    *(float *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c04) =
         -(fVar9 * fVar1 + fVar6 * fVar2 + fVar7 * fVar18);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c00) = *(int32_t *)(unaff_RDI + 0x1dc);
  }
  if (unaff_RDI != 0) {
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c6c) = *(int32_t *)(unaff_RDI + 0x180);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1bfc) = *(int32_t *)(unaff_RDI + 0x1d8);
    lVar14 = *(int64_t *)(lVar15 + 0x1cd8);
    *(int32_t *)(lVar14 + 0x1c10) = *(int32_t *)(unaff_RDI + 0x1e8);
    fVar1 = *(float *)(lVar16 + 0x1260);
    fVar2 = *(float *)(unaff_RDI + 0x1ec);
    if (fVar1 <= 0.0) {
      fVar18 = fVar2;
      if ((fVar1 < 0.0) && (fVar18 = *(float *)(unaff_RDI + 0x1f0) + fVar1, fVar2 <= fVar18)) {
        fVar18 = fVar2;
      }
    }
    else {
      fVar18 = fVar2 + fVar1;
    }
    uVar17 = powf(lVar14,fVar18);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c18) = uVar17;
    uVar17 = powf();
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c1c) = uVar17;
    uVar17 = powf();
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d58) = uVar17;
    uVar17 = powf();
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c14) = uVar17;
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c20) = *(int32_t *)(unaff_RDI + 0x1f8);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c24) = *(int32_t *)(unaff_RDI + 0x1fc);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c28) = *(int32_t *)(unaff_RDI + 0x200);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1ce8) = *(int32_t *)(unaff_RDI + 0x208);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1cec) = *(int32_t *)(unaff_RDI + 0x20c);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d34) = *(int32_t *)(unaff_RDI + 0x210);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d30) = *(int32_t *)(unaff_RDI + 0x218);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d2c) = *(int32_t *)(unaff_RDI + 0x214);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d18) = *(int32_t *)(unaff_RDI + 0x21c);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d1c) = *(int32_t *)(unaff_RDI + 0x220);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d20) = *(int32_t *)(unaff_RDI + 0x224);
    *(float *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d24) = (float)*(int *)(unaff_RDI + 0x228);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d28) = *(int32_t *)(unaff_RDI + 0x22c);
    *(float *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d14) = (float)*(int *)(unaff_RDI + 0x230);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d10) = *(int32_t *)(unaff_RDI + 0x234);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1cf0) = *(int32_t *)(unaff_RDI + 0x288);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1cfc) = *(int32_t *)(unaff_RDI + 0x28c);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1ce0) = *(int32_t *)(unaff_RSI + 0x180);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1ce4) = *(int32_t *)(unaff_RDI + 0x294);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1cf4) = *(int32_t *)(unaff_RDI + 0x290);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1cf8) = *(int32_t *)(unaff_RDI + 0x298);
    lVar16 = *(int64_t *)(lVar15 + 0x1cd8);
    uVar12 = *(uint64_t *)(unaff_RDI + 0x2a4);
    *(uint64_t *)(lVar16 + 0x1d00) = *(uint64_t *)(unaff_RDI + 0x29c);
    *(uint64_t *)(lVar16 + 0x1d08) = uVar12;
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d38) = *(int32_t *)(unaff_RDI + 0x2ac);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d3c) = *(int32_t *)(unaff_RDI + 0x2b0);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d50) = *(int32_t *)(unaff_RDI + 0x2b4);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d40) = *(int32_t *)(unaff_RDI + 0x2b8);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d44) = *(int32_t *)(unaff_RDI + 700);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d48) = *(int32_t *)(unaff_RDI + 0x2c0);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d4c) = *(int32_t *)(unaff_RDI + 0x2c4);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c60) = *(int32_t *)(unaff_RDI + 0x2c8);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c64) = *(int32_t *)(unaff_RDI + 0x2cc);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1c8c) = *(int32_t *)(unaff_RDI + 0x204);
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d88) = *(int32_t *)(unaff_RDI + 0x98);
    uVar13 = *(uint *)(unaff_RSI + 0x12450) & 0x800000ff;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xffffff00) + 1;
    }
    *(float *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d84) = (float)(int)uVar13;
    *(int32_t *)(*(int64_t *)(lVar15 + 0x1cd8) + 0x1d8c) = *(int32_t *)(unaff_RSI + 0x11cec);
  }
  return;
}
// 函数: void SystemCore_Controller0(uint64_t param_1,int64_t param_2,int64_t param_3)
void SystemCore_Controller0(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint uVar20;
  uint64_t uVar21;
  uint uVar22;
  int iVar23;
  uint64_t uVar24;
  uint uVar25;
  float fVar26;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  lVar2 = *(int64_t *)(param_2 + 0x280);
  if ((*(uint *)(param_2 + 0x2e0) >> 0x10 & 1) == 0) {
    if ((*(uint64_t *)(lVar2 + 0x140) & *(uint64_t *)(*(int64_t *)(lVar2 + 0x1e0) + 0x1580)) == 0
       ) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint)(0.0 < *(float *)(lVar2 + 600));
    }
    iVar23 = uVar22 + *(int *)(lVar2 + 0x2c8);
    if (iVar23 < -8) {
      iVar23 = -8;
    }
    uVar24 = (int64_t)(iVar23 + 8) << 10 | (uint64_t)(*(uint *)(param_2 + 0x310) & 0x3ff);
  }
  else {
    uVar24 = (uint64_t)(*(uint *)(param_2 + 0x310) & 0x3ff);
  }
  puVar3 = (uint *)**(uint64_t **)(param_2 + 0x88);
  if (puVar3 == (uint *)0x0) {
    uVar22 = 0xffffffff;
  }
  else {
    uVar22 = *puVar3;
  }
  puVar3 = (uint *)(*(uint64_t **)(param_2 + 0x88))[1];
  if (puVar3 == (uint *)0x0) {
    uVar25 = 0xffffffff;
  }
  else {
    uVar25 = *puVar3;
  }
  if ((*(int64_t *)(param_2 + 0x2a8) == 0) || ((*(uint *)(param_2 + 0x2e0) & 2) != 0)) {
    uVar20 = *(uint *)(param_2 + 0x2ec);
  }
  else {
    uVar20 = (uint)(*(uint64_t *)(*(int64_t *)(param_2 + 0x2a8) + 0x18) >> 4);
  }
  uVar1 = *(uint *)(lVar2 + 0x138);
  fStack_18 = (float)*(uint64_t *)(param_3 + 0x120);
  fStack_18 = *(float *)(param_2 + 0xf8) - fStack_18;
  fStack_10 = (float)*(uint64_t *)(param_3 + 0x128);
  fStack_10 = *(float *)(param_2 + 0x100) - fStack_10;
  fStack_14 = (float)((uint64_t)*(uint64_t *)(param_3 + 0x120) >> 0x20);
  fStack_14 = *(float *)(param_2 + 0xfc) - fStack_14;
  lVar4 = *(int64_t *)(lVar2 + 0x130);
  lVar5 = *(int64_t *)(lVar2 + 0x128);
  lVar6 = *(int64_t *)(lVar2 + 0x120);
  lVar7 = *(int64_t *)(lVar2 + 0x118);
  lVar8 = *(int64_t *)(lVar2 + 0x110);
  lVar9 = *(int64_t *)(lVar2 + 0x108);
  lVar10 = *(int64_t *)(lVar2 + 0x100);
  lVar11 = *(int64_t *)(lVar2 + 0xf8);
  lVar12 = *(int64_t *)(lVar2 + 0xf0);
  lVar13 = *(int64_t *)(lVar2 + 0xe8);
  lVar14 = *(int64_t *)(lVar2 + 0xe0);
  lVar15 = *(int64_t *)(lVar2 + 0xd8);
  lVar16 = *(int64_t *)(lVar2 + 0xd0);
  lVar17 = *(int64_t *)(lVar2 + 200);
  lVar18 = *(int64_t *)(lVar2 + 0xc0);
  lVar19 = *(int64_t *)(lVar2 + 0xb8);
  fVar26 = SQRT(fStack_14 * fStack_14 + fStack_18 * fStack_18 + fStack_10 * fStack_10) *
           (65536.0 / *(float *)(param_3 + 0x148));
  if (9.223372e+18 <= fVar26) {
    fVar26 = fVar26 - 9.223372e+18;
  }
  uVar21 = (int64_t)fVar26 & 0xffff;
  if ((uVar1 & 0x40) != 0) {
    uVar21 = 0xffff - uVar21;
  }
  *(uint64_t *)(param_2 + 0x1f8) =
       ((uint64_t)(uVar25 & 0xfff) | (uint64_t)(uVar22 & 0x1ff) << 0xc) << 0x1d | uVar24 << 0x32 |
       (uint64_t)(uVar20 & 0x1fffffff);
  *(uint64_t *)(param_2 + 0x200) =
       uVar21 << 0x20 |
       (lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13 + lVar14 +
        lVar15 + lVar16 + lVar17 + lVar18 + lVar19 & 0xfffffffffffffffcU) << 0x2e |
       (uint64_t)
       (((((*(byte *)(param_2 + 0x97) >> 6 & 1) * 2 | uVar1 >> 5 & 1) * 2 | uVar1 >> 4 & 1) * 2 |
        uVar1 >> 0x1f) * 2 | uVar1 >> 1 & 1);
  *(int8_t *)(param_2 + 800) = *(int8_t *)(lVar2 + 0x2c8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address