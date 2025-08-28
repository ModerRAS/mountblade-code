#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 01_initialization_part050.c - 4 个函数
// 函数: void GenericFunction_180077ad8(void)
void GenericFunction_180077ad8(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int32_t uVar7;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t lVar29;
  byte bVar30;
  byte bVar31;
  int32_t uVar32;
  int64_t lVar33;
  int32_t *puVar34;
  int64_t unaff_RBX;
  uint64_t *unaff_RDI;
  int64_t lVar35;
  float *pfVar36;
  int32_t local_var_30;
  int64_t local_var_40;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  int32_t local_buffer_e0;
  int32_t local_buffer_e8;
  int32_t local_buffer_f0;
  int32_t local_buffer_f8;
  int32_t local_var_100;
  int32_t local_var_108;
  int32_t local_var_110;
  int32_t local_var_118;
  int32_t local_var_170;
  int64_t local_var_178;
  float *local_var_180;
  uint64_t local_var_188;
  int64_t local_var_190;
  lVar33 = *(int64_t *)(unaff_RBX + 0x1b8);
  bVar30 = *(byte *)(lVar33 + 0x38c);
  lVar35 = unaff_RBX;
  if (bVar30 == 9) {
    bVar30 = SystemFunction_00018022d300();
    *(byte *)(lVar33 + 0x38c) = bVar30;
  }
  lVar29 = local_var_178;
  lVar33 = *(int64_t *)(lVar35 + 0x1e0);
  *unaff_RDI = *(uint64_t *)(lVar33 + (uint64_t)bVar30 * 0x18);
  unaff_RDI[1] = *(uint64_t *)(lVar33 + 8 + (uint64_t)bVar30 * 0x18);
  *(int32_t *)(local_var_40 + 0x10) = *(int32_t *)(*(int64_t *)(unaff_RBX + 600) + 0x2c)
  ;
  *(int32_t *)(local_var_40 + 0x14) = *(int32_t *)(*(int64_t *)(unaff_RBX + 600) + 0x4c)
  ;
  *(int *)(local_var_40 + 0x48) = (int)*(char *)(*(int64_t *)(unaff_RBX + 600) + 0x44);
  if ((*(int64_t *)(unaff_RBX + 0x2d0) == 0) ||
     (*(int *)(*(int64_t *)(unaff_RBX + 0x2d0) + 0x14) == 0)) {
    uVar32 = 0xffffffff;
  }
  else {
    uVar32 = *(int32_t *)(unaff_RBX + 0x108);
  }
  *(int32_t *)(local_var_40 + 0x18) = uVar32;
  if ((*(int64_t *)(unaff_RBX + 0x2d0) == 0) ||
     (*(int *)(*(int64_t *)(unaff_RBX + 0x2d0) + 0x14) == 0)) {
    uVar32 = 0xffffffff;
  }
  else {
    uVar32 = *(int32_t *)(unaff_RBX + 0x10c);
  }
  *(int32_t *)(local_var_40 + 0x1c) = uVar32;
  if ((*(int64_t *)(unaff_RBX + 0x2d0) == 0) ||
     (*(int *)(*(int64_t *)(unaff_RBX + 0x2d0) + 0x14) == 0)) {
    uVar32 = 0xffffffff;
  }
  else {
    uVar32 = *(int32_t *)(unaff_RBX + 0x110);
  }
  *(int32_t *)(local_var_40 + 0x20) = uVar32;
  *(byte *)(local_var_40 + 0x4e) = *(byte *)(unaff_RBX + 0xfe) >> 3 & 1;
  if (*(int *)(unaff_RBX + 0x108) != -1) {
    puVar34 = *(int32_t **)(unaff_RBX + 0x2d0);
    uVar32 = puVar34[1];
    uVar7 = puVar34[2];
    uVar8 = puVar34[3];
    *(int32_t *)(local_var_40 + 0x28) = *puVar34;
    *(int32_t *)(local_var_40 + 0x2c) = uVar32;
    *(int32_t *)(local_var_40 + 0x30) = uVar7;
    *(int32_t *)(local_var_40 + 0x34) = uVar8;
    uVar21 = *(uint64_t *)(puVar34 + 6);
    *(uint64_t *)(local_var_40 + 0x38) = *(uint64_t *)(puVar34 + 4);
    *(uint64_t *)(local_var_40 + 0x40) = uVar21;
  }
  *(int8_t *)(local_var_40 + 0x4f) = *(int8_t *)(*(int64_t *)(unaff_RBX + 600) + 0x24)
  ;
  lVar33 = *(int64_t *)(unaff_RBX + 600);
  if (*(char *)(lVar33 + 0x24) != '\0') {
    uVar32 = *(int32_t *)(unaff_RBX + 0x2ac);
    uVar7 = *(int32_t *)(unaff_RBX + 0x2b0);
    uVar8 = *(int32_t *)(unaff_RBX + 0x2b4);
    *(int32_t *)(local_var_40 + 0x50) = *(int32_t *)(unaff_RBX + 0x2a8);
    *(int32_t *)(local_var_40 + 0x54) = uVar32;
    *(int32_t *)(local_var_40 + 0x58) = uVar7;
    *(int32_t *)(local_var_40 + 0x5c) = uVar8;
    lVar33 = *(int64_t *)(unaff_RBX + 600);
  }
  *(bool *)(local_var_40 + 0x4c) = *(int64_t *)(lVar33 + 0x10) != 0;
  *(int8_t *)(local_var_40 + 0x4d) = 1;
  if ((*(char *)(local_var_190 + 0xc) != '\0') ||
     (0 < *(int *)(*(int64_t *)(unaff_RBX + 600) + 0x1c))) {
    *(int8_t *)(local_var_40 + 0x4d) = 0;
  }
  if (*(int64_t *)(local_var_178 + 0x28) == 0) {
    local_var_30 = 0xffffffff;
    puVar34 = &local_buffer_00000030;
    lVar33 = local_var_178;
  }
  else {
    local_var_170 = 0xffffffff;
    puVar34 = &local_buffer_00000170;
    lVar33 = *(int64_t *)(local_var_178 + 0x28);
  }
  GenericFunction_180080e90(lVar33 + 0x3388,puVar34,&local_buffer_00000040);
  pfVar36 = local_var_180;
  if ((*(uint *)(unaff_RBX + 0x100) & 0x4000000) != 0) {
    fVar9 = *local_var_180;
    fVar10 = local_var_180[1];
    fVar11 = local_var_180[2];
    fVar12 = local_var_180[3];
    fVar13 = local_var_180[4];
    fVar14 = local_var_180[5];
    fVar15 = local_var_180[6];
    fVar16 = local_var_180[7];
    fVar17 = local_var_180[8];
    fVar18 = local_var_180[9];
    fVar19 = local_var_180[10];
    fVar20 = local_var_180[0xb];
    fVar1 = *(float *)(unaff_RBX + 0x124);
    fVar2 = *(float *)(unaff_RBX + 0x120);
    fVar3 = *(float *)(unaff_RBX + 0x128);
    fVar4 = *(float *)(unaff_RBX + 0x134);
    fVar5 = *(float *)(unaff_RBX + 0x130);
    fStack00000000000000a0 = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17;
    fStack00000000000000a4 = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar18;
    fStack00000000000000a8 = fVar1 * fVar15 + fVar2 * fVar11 + fVar3 * fVar19;
    fStack00000000000000ac = fVar1 * fVar16 + fVar2 * fVar12 + fVar3 * fVar20;
    fVar1 = *(float *)(unaff_RBX + 0x138);
    fVar2 = *(float *)(unaff_RBX + 0x140);
    fVar3 = *(float *)(unaff_RBX + 0x144);
    fStack00000000000000b0 = fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17;
    fStack00000000000000b4 = fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18;
    fStack00000000000000b8 = fVar4 * fVar15 + fVar5 * fVar11 + fVar1 * fVar19;
    fStack00000000000000bc = fVar4 * fVar16 + fVar5 * fVar12 + fVar1 * fVar20;
    fVar1 = *(float *)(unaff_RBX + 0x148);
    fVar4 = *(float *)(unaff_RBX + 0x154);
    fVar5 = *(float *)(unaff_RBX + 0x150);
    fStack00000000000000c0 = fVar3 * fVar13 + fVar2 * fVar9 + fVar1 * fVar17;
    fStack00000000000000c4 = fVar3 * fVar14 + fVar2 * fVar10 + fVar1 * fVar18;
    fStack00000000000000c8 = fVar3 * fVar15 + fVar2 * fVar11 + fVar1 * fVar19;
    fStack00000000000000cc = fVar3 * fVar16 + fVar2 * fVar12 + fVar1 * fVar20;
    fVar1 = *(float *)(unaff_RBX + 0x158);
    fStack00000000000000d0 =
         fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17 + local_var_180[0xc];
    fStack00000000000000d4 =
         fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18 + local_var_180[0xd];
    fStack00000000000000d8 =
         fVar4 * fVar15 + fVar5 * fVar11 + fVar1 * fVar19 + local_var_180[0xe];
    fStack00000000000000dc =
         fVar4 * fVar16 + fVar5 * fVar12 + fVar1 * fVar20 + local_var_180[0xf];
    pfVar36 = &local_buffer_000000a0;
  }
  GenericFunction_180085190(&local_buffer_00000060,lVar29 + 0x30,*(int8_t *)(unaff_RBX + 0xf7),pfVar36);
  uVar28 = local_buffer_98;
  uVar27 = local_buffer_90;
  uVar26 = local_buffer_88;
  uVar25 = local_buffer_80;
  uVar24 = local_buffer_78;
  uVar23 = local_buffer_70;
  uVar22 = local_buffer_68;
  uVar21 = local_buffer_60;
  bVar30 = *(byte *)(lVar29 + 0x1bd8);
  iVar6 = *(int *)(system_main_module_state + 0x224);
  if (((*(byte *)(unaff_RBX + 0xfd) & 1) == 0) &&
     ((*(int *)(unaff_RBX + 0x1d0) == iVar6 || (*(int *)(unaff_RBX + 0x1d0) == iVar6 + -1)))) {
    bVar31 = 0;
  }
  else {
    bVar31 = 1;
  }
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe | bVar31;
  bVar30 = bVar30 & 0x20;
  if ((bVar30 != 0) && (bVar31 != 0)) {
    *(uint64_t *)(unaff_RBX + 0x160) = local_buffer_60;
    *(uint64_t *)(unaff_RBX + 0x168) = local_buffer_68;
    *(uint64_t *)(unaff_RBX + 0x170) = local_buffer_70;
    *(uint64_t *)(unaff_RBX + 0x178) = local_buffer_78;
    *(uint64_t *)(unaff_RBX + 0x180) = local_buffer_80;
    *(uint64_t *)(unaff_RBX + 0x188) = local_buffer_88;
    *(uint64_t *)(unaff_RBX + 400) = local_buffer_90;
    *(uint64_t *)(unaff_RBX + 0x198) = local_buffer_98;
  }
  DataStructure_4a290(lVar29);
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe;
  *(int *)(unaff_RBX + 0x1d0) = iVar6;
  if (bVar30 != 0) {
    *(uint64_t *)(unaff_RBX + 0x160) = uVar21;
    *(uint64_t *)(unaff_RBX + 0x168) = uVar22;
    *(uint64_t *)(unaff_RBX + 0x170) = uVar23;
    *(uint64_t *)(unaff_RBX + 0x178) = uVar24;
    *(uint64_t *)(unaff_RBX + 0x180) = uVar25;
    *(uint64_t *)(unaff_RBX + 0x188) = uVar26;
    *(uint64_t *)(unaff_RBX + 400) = uVar27;
    *(uint64_t *)(unaff_RBX + 0x198) = uVar28;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180077c96(void)
void GenericFunction_180077c96(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  byte bVar27;
  int64_t unaff_RBX;
  byte bVar28;
  float *unaff_RSI;
  int64_t unaff_R13;
  bool in_ZF;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  if (!in_ZF) {
    fVar7 = *unaff_RSI;
    fVar8 = unaff_RSI[1];
    fVar9 = unaff_RSI[2];
    fVar10 = unaff_RSI[3];
    fVar11 = unaff_RSI[4];
    fVar12 = unaff_RSI[5];
    fVar13 = unaff_RSI[6];
    fVar14 = unaff_RSI[7];
    fVar15 = unaff_RSI[8];
    fVar16 = unaff_RSI[9];
    fVar17 = unaff_RSI[10];
    fVar18 = unaff_RSI[0xb];
    fVar1 = *(float *)(unaff_RBX + 0x124);
    fVar2 = *(float *)(unaff_RBX + 0x120);
    fVar3 = *(float *)(unaff_RBX + 0x128);
    fVar4 = *(float *)(unaff_RBX + 0x134);
    fVar5 = *(float *)(unaff_RBX + 0x130);
    fStack00000000000000a0 = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
    fStack00000000000000a4 = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
    fStack00000000000000a8 = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17;
    fStack00000000000000ac = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0x138);
    fVar2 = *(float *)(unaff_RBX + 0x140);
    fVar3 = *(float *)(unaff_RBX + 0x144);
    fStack00000000000000b0 = fVar4 * fVar11 + fVar5 * fVar7 + fVar1 * fVar15;
    fStack00000000000000b4 = fVar4 * fVar12 + fVar5 * fVar8 + fVar1 * fVar16;
    fStack00000000000000b8 = fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17;
    fStack00000000000000bc = fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0x148);
    fVar4 = *(float *)(unaff_RBX + 0x154);
    fVar5 = *(float *)(unaff_RBX + 0x150);
    fStack00000000000000c0 = fVar3 * fVar11 + fVar2 * fVar7 + fVar1 * fVar15;
    fStack00000000000000c4 = fVar3 * fVar12 + fVar2 * fVar8 + fVar1 * fVar16;
    fStack00000000000000c8 = fVar3 * fVar13 + fVar2 * fVar9 + fVar1 * fVar17;
    fStack00000000000000cc = fVar3 * fVar14 + fVar2 * fVar10 + fVar1 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0x158);
    fStack00000000000000d0 = fVar4 * fVar11 + fVar5 * fVar7 + fVar1 * fVar15 + unaff_RSI[0xc];
    fStack00000000000000d4 = fVar4 * fVar12 + fVar5 * fVar8 + fVar1 * fVar16 + unaff_RSI[0xd];
    fStack00000000000000d8 = fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17 + unaff_RSI[0xe];
    fStack00000000000000dc = fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18 + unaff_RSI[0xf];
  }
  GenericFunction_180085190(&local_buffer_00000060,unaff_R13 + 0x30,*(int8_t *)(unaff_RBX + 0xf7));
  uVar26 = local_buffer_98;
  uVar25 = local_buffer_90;
  uVar24 = local_buffer_88;
  uVar23 = local_buffer_80;
  uVar22 = local_buffer_78;
  uVar21 = local_buffer_70;
  uVar20 = local_buffer_68;
  uVar19 = local_buffer_60;
  bVar28 = *(byte *)(unaff_R13 + 0x1bd8);
  iVar6 = *(int *)(system_main_module_state + 0x224);
  if (((*(byte *)(unaff_RBX + 0xfd) & 1) == 0) &&
     ((*(int *)(unaff_RBX + 0x1d0) == iVar6 || (*(int *)(unaff_RBX + 0x1d0) == iVar6 + -1)))) {
    bVar27 = 0;
  }
  else {
    bVar27 = 1;
  }
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe | bVar27;
  bVar28 = bVar28 & 0x20;
  if ((bVar28 != 0) && (bVar27 != 0)) {
    *(uint64_t *)(unaff_RBX + 0x160) = local_buffer_60;
    *(uint64_t *)(unaff_RBX + 0x168) = local_buffer_68;
    *(uint64_t *)(unaff_RBX + 0x170) = local_buffer_70;
    *(uint64_t *)(unaff_RBX + 0x178) = local_buffer_78;
    *(uint64_t *)(unaff_RBX + 0x180) = local_buffer_80;
    *(uint64_t *)(unaff_RBX + 0x188) = local_buffer_88;
    *(uint64_t *)(unaff_RBX + 400) = local_buffer_90;
    *(uint64_t *)(unaff_RBX + 0x198) = local_buffer_98;
  }
  DataStructure_4a290();
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe;
  *(int *)(unaff_RBX + 0x1d0) = iVar6;
  if (bVar28 != 0) {
    *(uint64_t *)(unaff_RBX + 0x160) = uVar19;
    *(uint64_t *)(unaff_RBX + 0x168) = uVar20;
    *(uint64_t *)(unaff_RBX + 0x170) = uVar21;
    *(uint64_t *)(unaff_RBX + 0x178) = uVar22;
    *(uint64_t *)(unaff_RBX + 0x180) = uVar23;
    *(uint64_t *)(unaff_RBX + 0x188) = uVar24;
    *(uint64_t *)(unaff_RBX + 400) = uVar25;
    *(uint64_t *)(unaff_RBX + 0x198) = uVar26;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180077dc6(void)
void GenericFunction_180077dc6(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  byte bVar27;
  int64_t unaff_RBX;
  byte bVar28;
  float *pfVar29;
  int64_t unaff_R13;
  int32_t local_var_30;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float fStack00000000000000b8;
  float fStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  int32_t local_buffer_e0;
  int32_t local_buffer_e8;
  int32_t local_buffer_f0;
  int32_t local_buffer_f8;
  int32_t local_var_100;
  int32_t local_var_108;
  int32_t local_var_110;
  int32_t local_var_118;
  float *local_var_180;
  uint64_t local_var_188;
  local_var_30 = 0xffffffff;
  GenericFunction_180080e90(unaff_R13 + 0x3388,&local_buffer_00000030);
  pfVar29 = local_var_180;
  if ((*(uint *)(unaff_RBX + 0x100) & 0x4000000) != 0) {
    fVar7 = *local_var_180;
    fVar8 = local_var_180[1];
    fVar9 = local_var_180[2];
    fVar10 = local_var_180[3];
    fVar11 = local_var_180[4];
    fVar12 = local_var_180[5];
    fVar13 = local_var_180[6];
    fVar14 = local_var_180[7];
    fVar15 = local_var_180[8];
    fVar16 = local_var_180[9];
    fVar17 = local_var_180[10];
    fVar18 = local_var_180[0xb];
    fVar1 = *(float *)(unaff_RBX + 0x124);
    fVar2 = *(float *)(unaff_RBX + 0x120);
    fVar3 = *(float *)(unaff_RBX + 0x128);
    fVar4 = *(float *)(unaff_RBX + 0x134);
    fVar5 = *(float *)(unaff_RBX + 0x130);
    fStack00000000000000a0 = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar15;
    fStack00000000000000a4 = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar16;
    fStack00000000000000a8 = fVar1 * fVar13 + fVar2 * fVar9 + fVar3 * fVar17;
    fStack00000000000000ac = fVar1 * fVar14 + fVar2 * fVar10 + fVar3 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0x138);
    fVar2 = *(float *)(unaff_RBX + 0x140);
    fVar3 = *(float *)(unaff_RBX + 0x144);
    fStack00000000000000b0 = fVar4 * fVar11 + fVar5 * fVar7 + fVar1 * fVar15;
    fStack00000000000000b4 = fVar4 * fVar12 + fVar5 * fVar8 + fVar1 * fVar16;
    fStack00000000000000b8 = fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17;
    fStack00000000000000bc = fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0x148);
    fVar4 = *(float *)(unaff_RBX + 0x154);
    fVar5 = *(float *)(unaff_RBX + 0x150);
    fStack00000000000000c0 = fVar3 * fVar11 + fVar2 * fVar7 + fVar1 * fVar15;
    fStack00000000000000c4 = fVar3 * fVar12 + fVar2 * fVar8 + fVar1 * fVar16;
    fStack00000000000000c8 = fVar3 * fVar13 + fVar2 * fVar9 + fVar1 * fVar17;
    fStack00000000000000cc = fVar3 * fVar14 + fVar2 * fVar10 + fVar1 * fVar18;
    fVar1 = *(float *)(unaff_RBX + 0x158);
    fStack00000000000000d0 =
         fVar4 * fVar11 + fVar5 * fVar7 + fVar1 * fVar15 + local_var_180[0xc];
    fStack00000000000000d4 =
         fVar4 * fVar12 + fVar5 * fVar8 + fVar1 * fVar16 + local_var_180[0xd];
    fStack00000000000000d8 =
         fVar4 * fVar13 + fVar5 * fVar9 + fVar1 * fVar17 + local_var_180[0xe];
    fStack00000000000000dc =
         fVar4 * fVar14 + fVar5 * fVar10 + fVar1 * fVar18 + local_var_180[0xf];
    pfVar29 = &local_buffer_000000a0;
  }
  GenericFunction_180085190(&local_buffer_00000060,unaff_R13 + 0x30,*(int8_t *)(unaff_RBX + 0xf7),pfVar29);
  uVar26 = local_buffer_98;
  uVar25 = local_buffer_90;
  uVar24 = local_buffer_88;
  uVar23 = local_buffer_80;
  uVar22 = local_buffer_78;
  uVar21 = local_buffer_70;
  uVar20 = local_buffer_68;
  uVar19 = local_buffer_60;
  bVar28 = *(byte *)(unaff_R13 + 0x1bd8);
  iVar6 = *(int *)(system_main_module_state + 0x224);
  if (((*(byte *)(unaff_RBX + 0xfd) & 1) == 0) &&
     ((*(int *)(unaff_RBX + 0x1d0) == iVar6 || (*(int *)(unaff_RBX + 0x1d0) == iVar6 + -1)))) {
    bVar27 = 0;
  }
  else {
    bVar27 = 1;
  }
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe | bVar27;
  bVar28 = bVar28 & 0x20;
  if ((bVar28 != 0) && (bVar27 != 0)) {
    *(uint64_t *)(unaff_RBX + 0x160) = local_buffer_60;
    *(uint64_t *)(unaff_RBX + 0x168) = local_buffer_68;
    *(uint64_t *)(unaff_RBX + 0x170) = local_buffer_70;
    *(uint64_t *)(unaff_RBX + 0x178) = local_buffer_78;
    *(uint64_t *)(unaff_RBX + 0x180) = local_buffer_80;
    *(uint64_t *)(unaff_RBX + 0x188) = local_buffer_88;
    *(uint64_t *)(unaff_RBX + 400) = local_buffer_90;
    *(uint64_t *)(unaff_RBX + 0x198) = local_buffer_98;
  }
  DataStructure_4a290();
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe;
  *(int *)(unaff_RBX + 0x1d0) = iVar6;
  if (bVar28 != 0) {
    *(uint64_t *)(unaff_RBX + 0x160) = uVar19;
    *(uint64_t *)(unaff_RBX + 0x168) = uVar20;
    *(uint64_t *)(unaff_RBX + 0x170) = uVar21;
    *(uint64_t *)(unaff_RBX + 0x178) = uVar22;
    *(uint64_t *)(unaff_RBX + 0x180) = uVar23;
    *(uint64_t *)(unaff_RBX + 0x188) = uVar24;
    *(uint64_t *)(unaff_RBX + 400) = uVar25;
    *(uint64_t *)(unaff_RBX + 0x198) = uVar26;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_180077dec(void)
void GenericFunction_180077dec(void)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  byte bVar10;
  int64_t unaff_RBX;
  byte bVar11;
  int64_t unaff_R13;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  uint64_t local_buffer_80;
  uint64_t local_buffer_88;
  uint64_t local_buffer_90;
  uint64_t local_buffer_98;
  GenericFunction_180085190(&local_buffer_00000060,unaff_R13 + 0x30,*(int8_t *)(unaff_RBX + 0xf7));
  uVar9 = local_buffer_98;
  uVar8 = local_buffer_90;
  uVar7 = local_buffer_88;
  uVar6 = local_buffer_80;
  uVar5 = local_buffer_78;
  uVar4 = local_buffer_70;
  uVar3 = local_buffer_68;
  uVar2 = local_buffer_60;
  bVar11 = *(byte *)(unaff_R13 + 0x1bd8);
  iVar1 = *(int *)(system_main_module_state + 0x224);
  if (((*(byte *)(unaff_RBX + 0xfd) & 1) == 0) &&
     ((*(int *)(unaff_RBX + 0x1d0) == iVar1 || (*(int *)(unaff_RBX + 0x1d0) == iVar1 + -1)))) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
  }
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe | bVar10;
  bVar11 = bVar11 & 0x20;
  if ((bVar11 != 0) && (bVar10 != 0)) {
    *(uint64_t *)(unaff_RBX + 0x160) = local_buffer_60;
    *(uint64_t *)(unaff_RBX + 0x168) = local_buffer_68;
    *(uint64_t *)(unaff_RBX + 0x170) = local_buffer_70;
    *(uint64_t *)(unaff_RBX + 0x178) = local_buffer_78;
    *(uint64_t *)(unaff_RBX + 0x180) = local_buffer_80;
    *(uint64_t *)(unaff_RBX + 0x188) = local_buffer_88;
    *(uint64_t *)(unaff_RBX + 400) = local_buffer_90;
    *(uint64_t *)(unaff_RBX + 0x198) = local_buffer_98;
  }
  DataStructure_4a290();
  *(byte *)(unaff_RBX + 0xfd) = *(byte *)(unaff_RBX + 0xfd) & 0xfe;
  *(int *)(unaff_RBX + 0x1d0) = iVar1;
  if (bVar11 != 0) {
    *(uint64_t *)(unaff_RBX + 0x160) = uVar2;
    *(uint64_t *)(unaff_RBX + 0x168) = uVar3;
    *(uint64_t *)(unaff_RBX + 0x170) = uVar4;
    *(uint64_t *)(unaff_RBX + 0x178) = uVar5;
    *(uint64_t *)(unaff_RBX + 0x180) = uVar6;
    *(uint64_t *)(unaff_RBX + 0x188) = uVar7;
    *(uint64_t *)(unaff_RBX + 400) = uVar8;
    *(uint64_t *)(unaff_RBX + 0x198) = uVar9;
  }
  return;
}
int8_t GenericFunction_180077ef9(void)
{
  return 0;
}
uint64_t GenericFunction_180077f20(int64_t param_1,uint64_t param_2,int32_t param_3,float *param_4,
                       int32_t param_5,int32_t param_6)
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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  char cVar19;
  uint64_t in_RAX;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t lVar22;
  byte bVar23;
  uint64_t local_var_88;
  uint64_t local_var_80;
  uint64_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  uint64_t local_var_60;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int32_t local_var_4c;
  lVar22 = *(int64_t *)(param_1 + 0x1b8);
  if (lVar22 != 0) {
    bVar23 = *(byte *)(param_1 + 0xfd) & 0x20;
    lVar20 = param_1;
    if (bVar23 == 0) {
      lVar20 = SystemFunction_000180085de0(*(uint64_t *)(param_1 + 0x1b0));
    }
    if (*(int *)(lVar20 + 0x200) != 0) {
      lVar20 = param_1;
      if (bVar23 == 0) {
        lVar20 = SystemFunction_000180085de0(*(uint64_t *)(param_1 + 0x1b0));
      }
      if (*(int *)(lVar20 + 0x1fc) * 3 != 0) goto LAB_180077fcf;
    }
    if ((*(byte *)(param_1 + 0x100) & 4) != 0) {
LAB_180077fcf:
      lVar22 = *(int64_t *)(param_1 + 0x1b8);
      cVar19 = *(char *)(lVar22 + 0x38c);
      if (cVar19 == '\t') {
        cVar19 = SystemFunction_00018022d300();
        *(char *)(lVar22 + 0x38c) = cVar19;
      }
      cVar19 = GenericFunction_18007b240(param_1,param_1 + 0x1e8,cVar19,1);
      if (cVar19 == '\0') {
        *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfb;
      }
      if ((*(uint *)(param_1 + 0x100) & 0x4000000) == 0) {
        local_var_88 = *(uint64_t *)param_4;
        local_var_80._0_4_ = (float)*(uint64_t *)(param_4 + 2);
        local_var_78 = *(uint64_t *)(param_4 + 4);
        local_var_70._0_4_ = (float)*(uint64_t *)(param_4 + 6);
        local_var_68 = *(uint64_t *)(param_4 + 8);
        local_var_60._0_4_ = (float)*(uint64_t *)(param_4 + 10);
        fStack_58 = param_4[0xc];
        fStack_54 = param_4[0xd];
        fStack_50 = param_4[0xe];
      }
      else {
        fVar10 = param_4[4];
        fVar11 = param_4[5];
        fVar12 = param_4[6];
        fVar1 = *(float *)(param_1 + 0x120);
        fVar2 = *(float *)(param_1 + 0x128);
        fVar3 = *(float *)(param_1 + 0x134);
        fVar4 = *(float *)(param_1 + 0x144);
        fVar5 = *(float *)(param_1 + 0x154);
        fVar13 = *param_4;
        fVar14 = param_4[1];
        fVar15 = param_4[2];
        fVar16 = param_4[8];
        fVar17 = param_4[9];
        fVar18 = param_4[10];
        fVar6 = *(float *)(param_1 + 0x124);
        fVar7 = *(float *)(param_1 + 0x130);
        local_var_80._0_4_ = fVar6 * fVar12 + fVar1 * fVar15 + fVar2 * fVar18;
        fVar8 = *(float *)(param_1 + 0x138);
        fVar9 = *(float *)(param_1 + 0x140);
        local_var_70._0_4_ = fVar3 * fVar12 + fVar7 * fVar15 + fVar8 * fVar18;
        local_var_88 = CONCAT44(fVar6 * fVar11 + fVar1 * fVar14 + fVar2 * fVar17,
                             fVar6 * fVar10 + fVar1 * fVar13 + fVar2 * fVar16);
        fVar1 = *(float *)(param_1 + 0x148);
        fVar2 = *(float *)(param_1 + 0x150);
        local_var_60._0_4_ = fVar4 * fVar12 + fVar9 * fVar15 + fVar1 * fVar18;
        fVar6 = *(float *)(param_1 + 0x158);
        local_var_78 = CONCAT44(fVar3 * fVar11 + fVar7 * fVar14 + fVar8 * fVar17,
                             fVar3 * fVar10 + fVar7 * fVar13 + fVar8 * fVar16);
        local_var_68 = CONCAT44(fVar4 * fVar11 + fVar9 * fVar14 + fVar1 * fVar17,
                             fVar4 * fVar10 + fVar9 * fVar13 + fVar1 * fVar16);
        fStack_58 = fVar5 * fVar10 + fVar2 * fVar13 + fVar6 * fVar16 + param_4[0xc];
        fStack_54 = fVar5 * fVar11 + fVar2 * fVar14 + fVar6 * fVar17 + param_4[0xd];
        fStack_50 = fVar5 * fVar12 + fVar2 * fVar15 + fVar6 * fVar18 + param_4[0xe];
      }
      local_var_4c = 0x3f800000;
      local_var_60 = (uint64_t)(uint)(float)local_var_60;
      local_var_70 = (uint64_t)(uint)(float)local_var_70;
      local_var_80 = (uint64_t)(uint)(float)local_var_80;
      uVar21 = DataStructure_52ca0(param_2,param_1,param_3,&local_var_88,param_5,param_6);
      return uVar21;
    }
    in_RAX = 0;
    if (*(char *)(lVar22 + 0x38c) == '\t') {
      in_RAX = SystemFunction_00018022d300(lVar22);
      *(char *)(lVar22 + 0x38c) = (char)in_RAX;
      if ((char)in_RAX == '\t') goto LAB_180077fcf;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}