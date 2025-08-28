/* 函数别名定义: RenderingEngineCore */
#define RenderingEngineCore RenderingEngineCore
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part039.c - 2 个函数
// 函数: void function_0c7cb0(uint64_t param_1,int64_t param_2)
void function_0c7cb0(uint64_t param_1,int64_t param_2)
{
  float fVar1;
  float fVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  float fVar14;
  int32_t uVar15;
  if ((*(char *)(param_2 + 0x11cf4) == '\0') ||
     (lVar8 = *(int64_t *)(param_2 + 0x11d00), lVar8 == 0)) {
    lVar8 = system_system_data_ui + 0x58;
  }
  uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
  lVar7 = *(int64_t *)(param_2 + 0x9988);
  if (lVar7 == 0) {
    lVar7 = function_0bde30();
  }
  RenderingEngineCore0(uVar3,0x25,lVar7,0x10,0xffffffff);
  lVar7 = system_message_buffer;
  if ((*(float *)(param_2 + 0x12494) < *(float *)(param_2 + 0x128) ||
       *(float *)(param_2 + 0x12494) == *(float *)(param_2 + 0x128)) ||
     ((*(byte *)(param_2 + 0x1bd9) & 2) != 0)) {
    uVar3 = *(uint64_t *)(lVar8 + 0xfc);
    plVar9 = (int64_t *)(system_message_buffer + 0x1cd8);
    lVar4 = *plVar9;
    *(uint64_t *)(lVar4 + 0x1430) = *(uint64_t *)(lVar8 + 0xf4);
    *(uint64_t *)(lVar4 + 0x1438) = uVar3;
    *(int32_t *)(*plVar9 + 0x143c) = *(int32_t *)(lVar8 + 0x114);
    *(int32_t *)(*plVar9 + 0x1484) = *(int32_t *)(lVar8 + 0x118);
    *(float *)(*plVar9 + 0x15d0) = *(float *)(param_2 + 0x9a08) + *(float *)(lVar8 + 0x2e8);
  }
  else {
    plVar9 = (int64_t *)(system_message_buffer + 0x1cd8);
    lVar4 = *plVar9;
    *(uint64_t *)(lVar4 + 0x1430) = 0x3e051eb83d75c28f;
    *(uint64_t *)(lVar4 + 0x1438) = 0x42c800003e851eb8;
    *(int32_t *)(*plVar9 + 0x1494) = 0x3dcccccd;
    lVar4 = *plVar9;
    *(uint64_t *)(lVar4 + 0x1470) = 0x3e8f5c293e0f5c29;
    *(uint64_t *)(lVar4 + 0x1478) = 0x3f8000003f0f5c29;
    *(int32_t *)(*plVar9 + 0x1484) = 0x3dcccccd;
  }
  plVar9 = (int64_t *)(lVar7 + 0x1cd8);
  if (*(char *)(param_2 + 0x12455) == '\0') {
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0xbf800000;
    uVar13 = 0x7f7fffff;
    fVar14 = 0.0;
  }
  else {
    uVar10 = *(int32_t *)(param_2 + 0x1245c);
    uVar11 = *(int32_t *)(param_2 + 0x12460);
    uVar12 = *(int32_t *)(param_2 + 0x12464);
    uVar13 = *(int32_t *)(param_2 + 0x12468);
    fVar14 = *(float *)(lVar8 + 0xb0);
  }
  lVar7 = *plVar9;
  uVar15 = 0x3f800000;
  *(int32_t *)(lVar7 + 0x1120) = uVar10;
  *(int32_t *)(lVar7 + 0x1124) = uVar11;
  *(int32_t *)(lVar7 + 0x1128) = uVar12;
  *(int32_t *)(lVar7 + 0x112c) = uVar13;
  lVar7 = *plVar9;
  fVar1 = *(float *)(lVar8 + 200);
  fVar2 = *(float *)(lVar8 + 0xcc);
  *(float *)(lVar7 + 0x1440) = fVar14 * *(float *)(lVar8 + 0xc4);
  *(float *)(lVar7 + 0x1444) = fVar14 * fVar1;
  *(float *)(lVar7 + 0x1448) = fVar14 * fVar2;
  *(int32_t *)(lVar7 + 0x144c) = 0x7f7fffff;
  *(float *)(*plVar9 + 0x144c) = 1.0 / *(float *)(param_2 + 0x124a4);
  fVar14 = *(float *)(lVar8 + 0xb0);
  lVar7 = *plVar9;
  fVar1 = *(float *)(lVar8 + 200);
  fVar2 = *(float *)(lVar8 + 0xcc);
  *(float *)(lVar7 + 0x1450) = fVar14 * *(float *)(lVar8 + 0xc4);
  *(float *)(lVar7 + 0x1454) = fVar14 * fVar1;
  *(float *)(lVar7 + 0x1458) = fVar14 * fVar2;
  *(int32_t *)(lVar7 + 0x145c) = 0x7f7fffff;
  *(int32_t *)(*plVar9 + 0x148c) = *(int32_t *)(lVar8 + 0x1d0);
  *(int32_t *)(*plVar9 + 0x1494) = *(int32_t *)(lVar8 + 0x1d4);
  *(int32_t *)(*plVar9 + 0x1498) = *(int32_t *)(lVar8 + 0x2e4);
  *(float *)(*plVar9 + 0x149c) = *(float *)(param_2 + 0x9a04) + *(float *)(lVar8 + 0x2e0);
  *(int32_t *)(*plVar9 + 0x1488) = *(int32_t *)(lVar8 + 0x128);
  lVar7 = *plVar9;
  uVar3 = *(uint64_t *)(lVar8 + 0xdc);
  *(uint64_t *)(lVar7 + 0x1460) = *(uint64_t *)(lVar8 + 0xd4);
  *(uint64_t *)(lVar7 + 0x1468) = uVar3;
  lVar7 = *plVar9;
  uVar3 = *(uint64_t *)(lVar8 + 0xec);
  *(uint64_t *)(lVar7 + 0x1470) = *(uint64_t *)(lVar8 + 0xe4);
  *(uint64_t *)(lVar7 + 0x1478) = uVar3;
  lVar7 = *plVar9;
  fVar14 = *(float *)(lVar8 + 0xb4);
  fVar1 = *(float *)(lVar8 + 0xf8);
  fVar2 = *(float *)(lVar8 + 0xfc);
  *(float *)(lVar7 + 0x1430) = fVar14 * *(float *)(lVar8 + 0xf4);
  *(float *)(lVar7 + 0x1434) = fVar14 * fVar1;
  *(float *)(lVar7 + 0x1438) = fVar14 * fVar2;
  *(int32_t *)(lVar7 + 0x143c) = 0x7f7fffff;
  *(int32_t *)(*plVar9 + 0x143c) = *(int32_t *)(lVar8 + 0x114);
  *(int32_t *)(*plVar9 + 0x1740) = *(int32_t *)(lVar8 + 0x1e0);
  *(int32_t *)(*plVar9 + 0x1744) = *(int32_t *)(lVar8 + 0x1e4);
  *(float *)(*plVar9 + 0x15d0) = *(float *)(param_2 + 0x9a08) + *(float *)(lVar8 + 0x2e8);
  *(int32_t *)(*plVar9 + 0x15e0) = *(int32_t *)(lVar8 + 0x2ec);
  *(int32_t *)(*plVar9 + 0x15e4) = *(int32_t *)(lVar8 + 0x2f0);
  *(int32_t *)(*plVar9 + 0x15e8) = *(int32_t *)(lVar8 + 0x2f4);
  fVar14 = *(float *)(lVar8 + 0x2f8) - *(float *)(lVar8 + 0x2f4);
  if (fVar14 <= 0.001) {
    fVar14 = 0.001;
  }
  *(float *)(*plVar9 + 0x15ec) = 1.0 / fVar14;
  *(int32_t *)(*plVar9 + 0x15f0) = *(int32_t *)(lVar8 + 0x2fc);
  *(int32_t *)(*plVar9 + 0x15f4) = *(int32_t *)(lVar8 + 0x300);
  *(int32_t *)(*plVar9 + 0x15dc) = *(int32_t *)(lVar8 + 0x30);
  *(int32_t *)(*plVar9 + 0x1640) = *(int32_t *)(lVar8 + 0xb4);
  *(int32_t *)(*plVar9 + 0x1644) = *(int32_t *)(lVar8 + 0x34);
  *(float *)(*plVar9 + 0x175c) = *(float *)(param_2 + 0x124a0) * *(float *)(lVar8 + 0x2dc);
  *(int32_t *)(*plVar9 + 0x1760) = *(int32_t *)(lVar8 + 0xa4);
  *(int32_t *)(*plVar9 + 0x178c) = *(int32_t *)(lVar8 + 0xa8);
  if (*(char *)(lVar8 + 0x305) == '\0') {
    uVar15 = powf(0x40000000,*(int32_t *)(lVar8 + 500));
  }
  *(int32_t *)(*plVar9 + 0x17b0) = uVar15;
  uVar10 = powf(0x40000000,*(int32_t *)(lVar8 + 500));
  *(int32_t *)(*plVar9 + 0x17b4) = uVar10;
  fVar5 = *(float *)(lVar8 + 0x1c4);
  fVar6 = *(float *)(lVar8 + 0x1c8);
  lVar7 = *plVar9;
  fVar14 = *(float *)(lVar8 + 0x1b8);
  fVar1 = *(float *)(param_2 + 0x11d08);
  fVar2 = *(float *)(lVar8 + 0x1bc);
  *(float *)(lVar7 + 0x1620) = *(float *)(lVar8 + 0x1c0) * fVar14;
  *(float *)(lVar7 + 0x1624) = fVar5 * fVar14;
  *(float *)(lVar7 + 0x1628) = fVar6 * fVar14;
  *(float *)(lVar7 + 0x162c) = fVar1 * fVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0c8190(int64_t param_1,int64_t param_2)
void function_0c8190(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int iVar15;
  uint64_t *puVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  float fVar20;
  float fVar21;
  int64_t *plStackX_8;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_d0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  uint64_t local_var_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int8_t stack_array_78 [112];
  lVar18 = system_message_buffer;
  if ((*(byte *)(param_2 + 0x1bd8) & 0x40) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x128);
    lVar17 = *(int64_t *)(system_message_buffer + 0x1cd8);
    *(uint64_t *)(lVar17 + 0x1110) = *(uint64_t *)(param_2 + 0x120);
    *(uint64_t *)(lVar17 + 0x1118) = uVar1;
  }
  if ((*(int *)(param_2 + 8) == -1) || (*(int *)(param_2 + 8) != 1)) {
    local_var_d8 = (int32_t)*(uint64_t *)(param_2 + 0x120);
    local_var_d4 = (int32_t)((uint64_t)*(uint64_t *)(param_2 + 0x120) >> 0x20);
    local_var_d0 = (int32_t)*(uint64_t *)(param_2 + 0x128);
    lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
    *(int32_t *)(lVar17 + 0x1100) = local_var_d8;
    *(int32_t *)(lVar17 + 0x1104) = local_var_d4;
    *(int32_t *)(lVar17 + 0x1108) = local_var_d0;
    *(int32_t *)(lVar17 + 0x110c) = 0;
  }
  else {
    uVar1 = *(uint64_t *)(param_2 + 0x11cc4);
    lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
    *(uint64_t *)(lVar17 + 0x1100) = *(uint64_t *)(param_2 + 0x11cbc);
    *(uint64_t *)(lVar17 + 0x1108) = uVar1;
  }
  uVar1 = *(uint64_t *)(param_2 + 0x12a08);
  uVar19 = *(uint64_t *)(param_2 + 0x12a10);
  uVar10 = *(uint64_t *)(param_2 + 0x12a18);
  uVar11 = *(uint64_t *)(param_2 + 0x12a20);
  uVar12 = *(uint64_t *)(param_2 + 0x12a28);
  uVar13 = *(uint64_t *)(param_2 + 0x12a30);
  uVar14 = *(uint64_t *)(param_2 + 0x12a38);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1170) = *(uint64_t *)(param_2 + 0x12a00);
  *(uint64_t *)(lVar17 + 0x1178) = uVar1;
  *(uint64_t *)(lVar17 + 0x1180) = uVar19;
  *(uint64_t *)(lVar17 + 0x1188) = uVar10;
  *(uint64_t *)(lVar17 + 0x1190) = uVar11;
  *(uint64_t *)(lVar17 + 0x1198) = uVar12;
  *(uint64_t *)(lVar17 + 0x11a0) = uVar13;
  *(uint64_t *)(lVar17 + 0x11a8) = uVar14;
  uVar1 = *(uint64_t *)(param_2 + 0x12a48);
  uVar19 = *(uint64_t *)(param_2 + 0x12a50);
  uVar10 = *(uint64_t *)(param_2 + 0x12a58);
  uVar11 = *(uint64_t *)(param_2 + 0x12a60);
  uVar12 = *(uint64_t *)(param_2 + 0x12a68);
  uVar13 = *(uint64_t *)(param_2 + 0x12a70);
  uVar14 = *(uint64_t *)(param_2 + 0x12a78);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x11b0) = *(uint64_t *)(param_2 + 0x12a40);
  *(uint64_t *)(lVar17 + 0x11b8) = uVar1;
  *(uint64_t *)(lVar17 + 0x11c0) = uVar19;
  *(uint64_t *)(lVar17 + 0x11c8) = uVar10;
  *(uint64_t *)(lVar17 + 0x11d0) = uVar11;
  *(uint64_t *)(lVar17 + 0x11d8) = uVar12;
  *(uint64_t *)(lVar17 + 0x11e0) = uVar13;
  *(uint64_t *)(lVar17 + 0x11e8) = uVar14;
  uVar1 = *(uint64_t *)(param_2 + 0x12a88);
  uVar19 = *(uint64_t *)(param_2 + 0x12a90);
  uVar10 = *(uint64_t *)(param_2 + 0x12a98);
  uVar11 = *(uint64_t *)(param_2 + 0x12aa0);
  uVar12 = *(uint64_t *)(param_2 + 0x12aa8);
  uVar13 = *(uint64_t *)(param_2 + 0x12ab0);
  uVar14 = *(uint64_t *)(param_2 + 0x12ab8);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x11f0) = *(uint64_t *)(param_2 + 0x12a80);
  *(uint64_t *)(lVar17 + 0x11f8) = uVar1;
  *(uint64_t *)(lVar17 + 0x1200) = uVar19;
  *(uint64_t *)(lVar17 + 0x1208) = uVar10;
  *(uint64_t *)(lVar17 + 0x1210) = uVar11;
  *(uint64_t *)(lVar17 + 0x1218) = uVar12;
  *(uint64_t *)(lVar17 + 0x1220) = uVar13;
  *(uint64_t *)(lVar17 + 0x1228) = uVar14;
  uVar1 = *(uint64_t *)(param_2 + 0x12ac8);
  uVar19 = *(uint64_t *)(param_2 + 0x12ad0);
  uVar10 = *(uint64_t *)(param_2 + 0x12ad8);
  uVar11 = *(uint64_t *)(param_2 + 0x12ae0);
  uVar12 = *(uint64_t *)(param_2 + 0x12ae8);
  uVar13 = *(uint64_t *)(param_2 + 0x12af0);
  uVar14 = *(uint64_t *)(param_2 + 0x12af8);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1230) = *(uint64_t *)(param_2 + 0x12ac0);
  *(uint64_t *)(lVar17 + 0x1238) = uVar1;
  *(uint64_t *)(lVar17 + 0x1240) = uVar19;
  *(uint64_t *)(lVar17 + 0x1248) = uVar10;
  *(uint64_t *)(lVar17 + 0x1250) = uVar11;
  *(uint64_t *)(lVar17 + 0x1258) = uVar12;
  *(uint64_t *)(lVar17 + 0x1260) = uVar13;
  *(uint64_t *)(lVar17 + 0x1268) = uVar14;
  uVar1 = *(uint64_t *)(param_2 + 0xf8);
  uVar19 = *(uint64_t *)(param_2 + 0x100);
  uVar10 = *(uint64_t *)(param_2 + 0x108);
  uVar2 = *(int32_t *)(param_2 + 0x110);
  uVar3 = *(int32_t *)(param_2 + 0x114);
  uVar4 = *(int32_t *)(param_2 + 0x118);
  uVar5 = *(int32_t *)(param_2 + 0x11c);
  uVar6 = *(int32_t *)(param_2 + 0x120);
  uVar7 = *(int32_t *)(param_2 + 0x124);
  uVar8 = *(int32_t *)(param_2 + 0x128);
  uVar9 = *(int32_t *)(param_2 + 300);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x14a0) = *(uint64_t *)(param_2 + 0xf0);
  *(uint64_t *)(lVar17 + 0x14a8) = uVar1;
  *(uint64_t *)(lVar17 + 0x14b0) = uVar19;
  *(uint64_t *)(lVar17 + 0x14b8) = uVar10;
  *(int32_t *)(lVar17 + 0x14c0) = uVar2;
  *(int32_t *)(lVar17 + 0x14c4) = uVar3;
  *(int32_t *)(lVar17 + 0x14c8) = uVar4;
  *(int32_t *)(lVar17 + 0x14cc) = uVar5;
  *(int32_t *)(lVar17 + 0x14d0) = uVar6;
  *(int32_t *)(lVar17 + 0x14d4) = uVar7;
  *(int32_t *)(lVar17 + 0x14d8) = uVar8;
  *(int32_t *)(lVar17 + 0x14dc) = uVar9;
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(int32_t *)(lVar17 + 0x14ac) = 0;
  *(int32_t *)(lVar17 + 0x14bc) = 0;
  *(int32_t *)(lVar17 + 0x14cc) = 0;
  *(int32_t *)(lVar17 + 0x14dc) = 0x3f800000;
  function_094120((uint64_t *)(param_2 + 0x12a80),&local_var_b8);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x13b0) = local_var_b8;
  *(uint64_t *)(lVar17 + 0x13b8) = local_var_b0;
  *(uint64_t *)(lVar17 + 0x13c0) = local_var_a8;
  *(uint64_t *)(lVar17 + 0x13c8) = local_var_a0;
  *(uint64_t *)(lVar17 + 0x13d0) = local_var_98;
  *(uint64_t *)(lVar17 + 0x13d8) = local_var_90;
  *(uint64_t *)(lVar17 + 0x13e0) = local_var_88;
  *(uint64_t *)(lVar17 + 0x13e8) = local_var_80;
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1748) = *(int32_t *)(param_2 + 0x12c00);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x174c) = *(int32_t *)(param_2 + 0x12c04);
  if ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) {
    function_094120(param_2 + 0x12ac0,&local_var_b8);
    puVar16 = (uint64_t *)ErrorRecoverySystem(&local_var_b8,stack_array_78,param_2 + 0x12b40);
    uVar1 = puVar16[1];
    uVar19 = puVar16[2];
    uVar10 = puVar16[3];
    uVar11 = puVar16[4];
    uVar12 = puVar16[5];
    uVar13 = puVar16[6];
    uVar14 = puVar16[7];
    lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
    *(uint64_t *)(lVar17 + 0x13f0) = *puVar16;
    *(uint64_t *)(lVar17 + 0x13f8) = uVar1;
    *(uint64_t *)(lVar17 + 0x1400) = uVar19;
    *(uint64_t *)(lVar17 + 0x1408) = uVar10;
    *(uint64_t *)(lVar17 + 0x1410) = uVar11;
    *(uint64_t *)(lVar17 + 0x1418) = uVar12;
    *(uint64_t *)(lVar17 + 0x1420) = uVar13;
    *(uint64_t *)(lVar17 + 0x1428) = uVar14;
  }
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1630) = *(int32_t *)(param_2 + 0x144);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x15d4) = *(int32_t *)(param_2 + 0x138);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x15d8) = *(int32_t *)(param_2 + 0x13c);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1634) = *(int32_t *)(param_2 + 0x12a68);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1638) = *(int32_t *)(param_2 + 0x12a78);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x15c0) = *(int32_t *)(param_2 + 0x148);
  *(float *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x15c4) = 1.0 / *(float *)(param_2 + 0x148);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1648) = *(int32_t *)(param_2 + 0x11c20);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x164c) = *(int32_t *)(param_2 + 0x11c24);
  *(float *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1650) = (float)*(int *)(param_2 + 0x129f0);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1658) = *(int32_t *)(param_2 + 0x129f4);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1788) = *(int32_t *)(param_2 + 0x129f8);
  *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x165c) = *(int32_t *)(param_2 + 0x129fc);
  uVar1 = *(uint64_t *)(param_2 + 0x9758);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1690) = *(uint64_t *)(param_2 + 0x9750);
  *(uint64_t *)(lVar17 + 0x1698) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9768);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x16a0) = *(uint64_t *)(param_2 + 0x9760);
  *(uint64_t *)(lVar17 + 0x16a8) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9778);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x16b0) = *(uint64_t *)(param_2 + 0x9770);
  *(uint64_t *)(lVar17 + 0x16b8) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9788);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x16c0) = *(uint64_t *)(param_2 + 0x9780);
  *(uint64_t *)(lVar17 + 0x16c8) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9798);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x16d0) = *(uint64_t *)(param_2 + 0x9790);
  *(uint64_t *)(lVar17 + 0x16d8) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x97d0);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x16e0) = *(uint64_t *)(param_2 + 0x97c8);
  *(uint64_t *)(lVar17 + 0x16e8) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x97e0);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x16f0) = *(uint64_t *)(param_2 + 0x97d8);
  *(uint64_t *)(lVar17 + 0x16f8) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x97f0);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1700) = *(uint64_t *)(param_2 + 0x97e8);
  *(uint64_t *)(lVar17 + 0x1708) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9800);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1710) = *(uint64_t *)(param_2 + 0x97f8);
  *(uint64_t *)(lVar17 + 0x1718) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9810);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1720) = *(uint64_t *)(param_2 + 0x9808);
  *(uint64_t *)(lVar17 + 0x1728) = uVar1;
  uVar1 = *(uint64_t *)(param_2 + 0x9820);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(uint64_t *)(lVar17 + 0x1730) = *(uint64_t *)(param_2 + 0x9818);
  *(uint64_t *)(lVar17 + 0x1738) = uVar1;
  *(uint64_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1790) = *(uint64_t *)(param_2 + 0x35a8);
  *(uint64_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x17c0) = *(uint64_t *)(param_2 + 0x35b0);
  lVar17 = SystemOptimizer(param_2);
  lVar18 = system_message_buffer;
  if (lVar17 != 0) {
    lVar18 = SystemOptimizer(param_2);
    *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17c8) =
         0.5 / (float)*(ushort *)(lVar18 + 0x32c);
    lVar17 = SystemOptimizer(param_2);
    lVar18 = system_message_buffer;
    *(float *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x17cc) =
         0.5 / (float)*(ushort *)(lVar17 + 0x32e);
  }
  *(uint64_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1798) = *(uint64_t *)(param_2 + 0x35b8);
  fVar20 = 1.0 / *(float *)(param_2 + 0x11c20);
  fVar21 = 1.0 / *(float *)(param_2 + 0x11c24);
  lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
  *(float *)(lVar17 + 0x1510) = fVar20 * 0.5;
  *(float *)(lVar17 + 0x1514) = fVar21 * 0.5;
  *(float *)(lVar17 + 0x1518) = fVar20;
  *(float *)(lVar17 + 0x151c) = fVar21;
  if (*(int64_t *)(param_2 + 0x9960) != 0) {
    uVar1 = *(uint64_t *)(param_2 + 0x12578);
    uVar19 = *(uint64_t *)(param_2 + 0x12580);
    uVar10 = *(uint64_t *)(param_2 + 0x12588);
    uVar2 = *(int32_t *)(param_2 + 0x12590);
    uVar3 = *(int32_t *)(param_2 + 0x12594);
    uVar4 = *(int32_t *)(param_2 + 0x12598);
    uVar5 = *(int32_t *)(param_2 + 0x1259c);
    uVar6 = *(int32_t *)(param_2 + 0x125a0);
    uVar7 = *(int32_t *)(param_2 + 0x125a4);
    uVar8 = *(int32_t *)(param_2 + 0x125a8);
    uVar9 = *(int32_t *)(param_2 + 0x125ac);
    lVar17 = *(int64_t *)(lVar18 + 0x1cd8);
    *(uint64_t *)(lVar17 + 0x1130) = *(uint64_t *)(param_2 + 0x12570);
    *(uint64_t *)(lVar17 + 0x1138) = uVar1;
    *(uint64_t *)(lVar17 + 0x1140) = uVar19;
    *(uint64_t *)(lVar17 + 0x1148) = uVar10;
    *(int32_t *)(lVar17 + 0x1150) = uVar2;
    *(int32_t *)(lVar17 + 0x1154) = uVar3;
    *(int32_t *)(lVar17 + 0x1158) = uVar4;
    *(int32_t *)(lVar17 + 0x115c) = uVar5;
    *(int32_t *)(lVar17 + 0x1160) = uVar6;
    *(int32_t *)(lVar17 + 0x1164) = uVar7;
    *(int32_t *)(lVar17 + 0x1168) = uVar8;
    *(int32_t *)(lVar17 + 0x116c) = uVar9;
  }
  lVar17 = *(int64_t *)(param_2 + 0x99b8);
  if (((lVar17 == 0) || ((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0)) ||
     (*(char *)(param_1 + 0x1320) != '\0')) {
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1750) = 0;
    uVar1 = *(uint64_t *)(lVar18 + 0x1cd8);
    uVar19 = function_0bdc80();
    RenderingEngineCore0(uVar1,0x1c,uVar19,0x10,0xffffffff);
    lVar18 = system_message_buffer;
  }
  else if (*(float *)(lVar17 + 0x40) <= 0.0) {
    uVar1 = *(uint64_t *)(lVar18 + 0x1cd8);
    puVar16 = (uint64_t *)function_2c8dc0(lVar17,&plStackX_8);
    RenderingEngineCore0(uVar1,0x1c,*puVar16,0x10,0xffffffff);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    lVar18 = system_message_buffer;
    *(int32_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x1750) = 0x3f800000;
  }
  else {
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1750) = 0;
  }
  iVar15 = *(int *)(param_1 + 0x12d8);
  if (iVar15 == 0x11) {
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1768) = *(int32_t *)(param_1 + 0x1334);
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x176c) = *(int32_t *)(param_1 + 0x1338);
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 6000) = *(int32_t *)(param_1 + 0x133c);
    iVar15 = *(int *)(param_1 + 0x12d8);
  }
  if (iVar15 == 0xc) {
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1780) = *(int32_t *)(param_1 + 0x1344);
    iVar15 = *(int *)(param_1 + 0x12d8);
  }
  if (iVar15 == 0xd) {
    *(int32_t *)(*(int64_t *)(lVar18 + 0x1cd8) + 0x1784) = *(int32_t *)(param_1 + 0x1348);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address