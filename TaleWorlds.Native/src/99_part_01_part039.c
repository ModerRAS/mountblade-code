#include "TaleWorlds.Native.Split.h"

// 99_part_01_part039.c - 2 个函数

// 函数: void FUN_1800c7cb0(undefined8 param_1,longlong param_2)
void FUN_1800c7cb0(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  
  if ((*(char *)(param_2 + 0x11cf4) == '\0') ||
     (lVar8 = *(longlong *)(param_2 + 0x11d00), lVar8 == 0)) {
    lVar8 = _DAT_180c8a9f8 + 0x58;
  }
  uVar3 = *(undefined8 *)(_DAT_180c86938 + 0x1cd8);
  lVar7 = *(longlong *)(param_2 + 0x9988);
  if (lVar7 == 0) {
    lVar7 = FUN_1800bde30();
  }
  FUN_18029d150(uVar3,0x25,lVar7,0x10,0xffffffff);
  lVar7 = _DAT_180c86938;
  if ((*(float *)(param_2 + 0x12494) < *(float *)(param_2 + 0x128) ||
       *(float *)(param_2 + 0x12494) == *(float *)(param_2 + 0x128)) ||
     ((*(byte *)(param_2 + 0x1bd9) & 2) != 0)) {
    uVar3 = *(undefined8 *)(lVar8 + 0xfc);
    plVar9 = (longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar4 = *plVar9;
    *(undefined8 *)(lVar4 + 0x1430) = *(undefined8 *)(lVar8 + 0xf4);
    *(undefined8 *)(lVar4 + 0x1438) = uVar3;
    *(undefined4 *)(*plVar9 + 0x143c) = *(undefined4 *)(lVar8 + 0x114);
    *(undefined4 *)(*plVar9 + 0x1484) = *(undefined4 *)(lVar8 + 0x118);
    *(float *)(*plVar9 + 0x15d0) = *(float *)(param_2 + 0x9a08) + *(float *)(lVar8 + 0x2e8);
  }
  else {
    plVar9 = (longlong *)(_DAT_180c86938 + 0x1cd8);
    lVar4 = *plVar9;
    *(undefined8 *)(lVar4 + 0x1430) = 0x3e051eb83d75c28f;
    *(undefined8 *)(lVar4 + 0x1438) = 0x42c800003e851eb8;
    *(undefined4 *)(*plVar9 + 0x1494) = 0x3dcccccd;
    lVar4 = *plVar9;
    *(undefined8 *)(lVar4 + 0x1470) = 0x3e8f5c293e0f5c29;
    *(undefined8 *)(lVar4 + 0x1478) = 0x3f8000003f0f5c29;
    *(undefined4 *)(*plVar9 + 0x1484) = 0x3dcccccd;
  }
  plVar9 = (longlong *)(lVar7 + 0x1cd8);
  if (*(char *)(param_2 + 0x12455) == '\0') {
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0xbf800000;
    uVar13 = 0x7f7fffff;
    fVar14 = 0.0;
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 0x1245c);
    uVar11 = *(undefined4 *)(param_2 + 0x12460);
    uVar12 = *(undefined4 *)(param_2 + 0x12464);
    uVar13 = *(undefined4 *)(param_2 + 0x12468);
    fVar14 = *(float *)(lVar8 + 0xb0);
  }
  lVar7 = *plVar9;
  uVar15 = 0x3f800000;
  *(undefined4 *)(lVar7 + 0x1120) = uVar10;
  *(undefined4 *)(lVar7 + 0x1124) = uVar11;
  *(undefined4 *)(lVar7 + 0x1128) = uVar12;
  *(undefined4 *)(lVar7 + 0x112c) = uVar13;
  lVar7 = *plVar9;
  fVar1 = *(float *)(lVar8 + 200);
  fVar2 = *(float *)(lVar8 + 0xcc);
  *(float *)(lVar7 + 0x1440) = fVar14 * *(float *)(lVar8 + 0xc4);
  *(float *)(lVar7 + 0x1444) = fVar14 * fVar1;
  *(float *)(lVar7 + 0x1448) = fVar14 * fVar2;
  *(undefined4 *)(lVar7 + 0x144c) = 0x7f7fffff;
  *(float *)(*plVar9 + 0x144c) = 1.0 / *(float *)(param_2 + 0x124a4);
  fVar14 = *(float *)(lVar8 + 0xb0);
  lVar7 = *plVar9;
  fVar1 = *(float *)(lVar8 + 200);
  fVar2 = *(float *)(lVar8 + 0xcc);
  *(float *)(lVar7 + 0x1450) = fVar14 * *(float *)(lVar8 + 0xc4);
  *(float *)(lVar7 + 0x1454) = fVar14 * fVar1;
  *(float *)(lVar7 + 0x1458) = fVar14 * fVar2;
  *(undefined4 *)(lVar7 + 0x145c) = 0x7f7fffff;
  *(undefined4 *)(*plVar9 + 0x148c) = *(undefined4 *)(lVar8 + 0x1d0);
  *(undefined4 *)(*plVar9 + 0x1494) = *(undefined4 *)(lVar8 + 0x1d4);
  *(undefined4 *)(*plVar9 + 0x1498) = *(undefined4 *)(lVar8 + 0x2e4);
  *(float *)(*plVar9 + 0x149c) = *(float *)(param_2 + 0x9a04) + *(float *)(lVar8 + 0x2e0);
  *(undefined4 *)(*plVar9 + 0x1488) = *(undefined4 *)(lVar8 + 0x128);
  lVar7 = *plVar9;
  uVar3 = *(undefined8 *)(lVar8 + 0xdc);
  *(undefined8 *)(lVar7 + 0x1460) = *(undefined8 *)(lVar8 + 0xd4);
  *(undefined8 *)(lVar7 + 0x1468) = uVar3;
  lVar7 = *plVar9;
  uVar3 = *(undefined8 *)(lVar8 + 0xec);
  *(undefined8 *)(lVar7 + 0x1470) = *(undefined8 *)(lVar8 + 0xe4);
  *(undefined8 *)(lVar7 + 0x1478) = uVar3;
  lVar7 = *plVar9;
  fVar14 = *(float *)(lVar8 + 0xb4);
  fVar1 = *(float *)(lVar8 + 0xf8);
  fVar2 = *(float *)(lVar8 + 0xfc);
  *(float *)(lVar7 + 0x1430) = fVar14 * *(float *)(lVar8 + 0xf4);
  *(float *)(lVar7 + 0x1434) = fVar14 * fVar1;
  *(float *)(lVar7 + 0x1438) = fVar14 * fVar2;
  *(undefined4 *)(lVar7 + 0x143c) = 0x7f7fffff;
  *(undefined4 *)(*plVar9 + 0x143c) = *(undefined4 *)(lVar8 + 0x114);
  *(undefined4 *)(*plVar9 + 0x1740) = *(undefined4 *)(lVar8 + 0x1e0);
  *(undefined4 *)(*plVar9 + 0x1744) = *(undefined4 *)(lVar8 + 0x1e4);
  *(float *)(*plVar9 + 0x15d0) = *(float *)(param_2 + 0x9a08) + *(float *)(lVar8 + 0x2e8);
  *(undefined4 *)(*plVar9 + 0x15e0) = *(undefined4 *)(lVar8 + 0x2ec);
  *(undefined4 *)(*plVar9 + 0x15e4) = *(undefined4 *)(lVar8 + 0x2f0);
  *(undefined4 *)(*plVar9 + 0x15e8) = *(undefined4 *)(lVar8 + 0x2f4);
  fVar14 = *(float *)(lVar8 + 0x2f8) - *(float *)(lVar8 + 0x2f4);
  if (fVar14 <= 0.001) {
    fVar14 = 0.001;
  }
  *(float *)(*plVar9 + 0x15ec) = 1.0 / fVar14;
  *(undefined4 *)(*plVar9 + 0x15f0) = *(undefined4 *)(lVar8 + 0x2fc);
  *(undefined4 *)(*plVar9 + 0x15f4) = *(undefined4 *)(lVar8 + 0x300);
  *(undefined4 *)(*plVar9 + 0x15dc) = *(undefined4 *)(lVar8 + 0x30);
  *(undefined4 *)(*plVar9 + 0x1640) = *(undefined4 *)(lVar8 + 0xb4);
  *(undefined4 *)(*plVar9 + 0x1644) = *(undefined4 *)(lVar8 + 0x34);
  *(float *)(*plVar9 + 0x175c) = *(float *)(param_2 + 0x124a0) * *(float *)(lVar8 + 0x2dc);
  *(undefined4 *)(*plVar9 + 0x1760) = *(undefined4 *)(lVar8 + 0xa4);
  *(undefined4 *)(*plVar9 + 0x178c) = *(undefined4 *)(lVar8 + 0xa8);
  if (*(char *)(lVar8 + 0x305) == '\0') {
    uVar15 = powf(0x40000000,*(undefined4 *)(lVar8 + 500));
  }
  *(undefined4 *)(*plVar9 + 0x17b0) = uVar15;
  uVar10 = powf(0x40000000,*(undefined4 *)(lVar8 + 500));
  *(undefined4 *)(*plVar9 + 0x17b4) = uVar10;
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




// 函数: void FUN_1800c8190(longlong param_1,longlong param_2)
void FUN_1800c8190(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  longlong *plStackX_8;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [112];
  
  lVar18 = _DAT_180c86938;
  if ((*(byte *)(param_2 + 0x1bd8) & 0x40) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x128);
    lVar17 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
    *(undefined8 *)(lVar17 + 0x1110) = *(undefined8 *)(param_2 + 0x120);
    *(undefined8 *)(lVar17 + 0x1118) = uVar1;
  }
  if ((*(int *)(param_2 + 8) == -1) || (*(int *)(param_2 + 8) != 1)) {
    uStack_d8 = (undefined4)*(undefined8 *)(param_2 + 0x120);
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x120) >> 0x20);
    uStack_d0 = (undefined4)*(undefined8 *)(param_2 + 0x128);
    lVar17 = *(longlong *)(lVar18 + 0x1cd8);
    *(undefined4 *)(lVar17 + 0x1100) = uStack_d8;
    *(undefined4 *)(lVar17 + 0x1104) = uStack_d4;
    *(undefined4 *)(lVar17 + 0x1108) = uStack_d0;
    *(undefined4 *)(lVar17 + 0x110c) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x11cc4);
    lVar17 = *(longlong *)(lVar18 + 0x1cd8);
    *(undefined8 *)(lVar17 + 0x1100) = *(undefined8 *)(param_2 + 0x11cbc);
    *(undefined8 *)(lVar17 + 0x1108) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x12a08);
  uVar19 = *(undefined8 *)(param_2 + 0x12a10);
  uVar10 = *(undefined8 *)(param_2 + 0x12a18);
  uVar11 = *(undefined8 *)(param_2 + 0x12a20);
  uVar12 = *(undefined8 *)(param_2 + 0x12a28);
  uVar13 = *(undefined8 *)(param_2 + 0x12a30);
  uVar14 = *(undefined8 *)(param_2 + 0x12a38);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1170) = *(undefined8 *)(param_2 + 0x12a00);
  *(undefined8 *)(lVar17 + 0x1178) = uVar1;
  *(undefined8 *)(lVar17 + 0x1180) = uVar19;
  *(undefined8 *)(lVar17 + 0x1188) = uVar10;
  *(undefined8 *)(lVar17 + 0x1190) = uVar11;
  *(undefined8 *)(lVar17 + 0x1198) = uVar12;
  *(undefined8 *)(lVar17 + 0x11a0) = uVar13;
  *(undefined8 *)(lVar17 + 0x11a8) = uVar14;
  uVar1 = *(undefined8 *)(param_2 + 0x12a48);
  uVar19 = *(undefined8 *)(param_2 + 0x12a50);
  uVar10 = *(undefined8 *)(param_2 + 0x12a58);
  uVar11 = *(undefined8 *)(param_2 + 0x12a60);
  uVar12 = *(undefined8 *)(param_2 + 0x12a68);
  uVar13 = *(undefined8 *)(param_2 + 0x12a70);
  uVar14 = *(undefined8 *)(param_2 + 0x12a78);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x11b0) = *(undefined8 *)(param_2 + 0x12a40);
  *(undefined8 *)(lVar17 + 0x11b8) = uVar1;
  *(undefined8 *)(lVar17 + 0x11c0) = uVar19;
  *(undefined8 *)(lVar17 + 0x11c8) = uVar10;
  *(undefined8 *)(lVar17 + 0x11d0) = uVar11;
  *(undefined8 *)(lVar17 + 0x11d8) = uVar12;
  *(undefined8 *)(lVar17 + 0x11e0) = uVar13;
  *(undefined8 *)(lVar17 + 0x11e8) = uVar14;
  uVar1 = *(undefined8 *)(param_2 + 0x12a88);
  uVar19 = *(undefined8 *)(param_2 + 0x12a90);
  uVar10 = *(undefined8 *)(param_2 + 0x12a98);
  uVar11 = *(undefined8 *)(param_2 + 0x12aa0);
  uVar12 = *(undefined8 *)(param_2 + 0x12aa8);
  uVar13 = *(undefined8 *)(param_2 + 0x12ab0);
  uVar14 = *(undefined8 *)(param_2 + 0x12ab8);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x11f0) = *(undefined8 *)(param_2 + 0x12a80);
  *(undefined8 *)(lVar17 + 0x11f8) = uVar1;
  *(undefined8 *)(lVar17 + 0x1200) = uVar19;
  *(undefined8 *)(lVar17 + 0x1208) = uVar10;
  *(undefined8 *)(lVar17 + 0x1210) = uVar11;
  *(undefined8 *)(lVar17 + 0x1218) = uVar12;
  *(undefined8 *)(lVar17 + 0x1220) = uVar13;
  *(undefined8 *)(lVar17 + 0x1228) = uVar14;
  uVar1 = *(undefined8 *)(param_2 + 0x12ac8);
  uVar19 = *(undefined8 *)(param_2 + 0x12ad0);
  uVar10 = *(undefined8 *)(param_2 + 0x12ad8);
  uVar11 = *(undefined8 *)(param_2 + 0x12ae0);
  uVar12 = *(undefined8 *)(param_2 + 0x12ae8);
  uVar13 = *(undefined8 *)(param_2 + 0x12af0);
  uVar14 = *(undefined8 *)(param_2 + 0x12af8);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1230) = *(undefined8 *)(param_2 + 0x12ac0);
  *(undefined8 *)(lVar17 + 0x1238) = uVar1;
  *(undefined8 *)(lVar17 + 0x1240) = uVar19;
  *(undefined8 *)(lVar17 + 0x1248) = uVar10;
  *(undefined8 *)(lVar17 + 0x1250) = uVar11;
  *(undefined8 *)(lVar17 + 0x1258) = uVar12;
  *(undefined8 *)(lVar17 + 0x1260) = uVar13;
  *(undefined8 *)(lVar17 + 0x1268) = uVar14;
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  uVar19 = *(undefined8 *)(param_2 + 0x100);
  uVar10 = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(undefined4 *)(param_2 + 0x110);
  uVar3 = *(undefined4 *)(param_2 + 0x114);
  uVar4 = *(undefined4 *)(param_2 + 0x118);
  uVar5 = *(undefined4 *)(param_2 + 0x11c);
  uVar6 = *(undefined4 *)(param_2 + 0x120);
  uVar7 = *(undefined4 *)(param_2 + 0x124);
  uVar8 = *(undefined4 *)(param_2 + 0x128);
  uVar9 = *(undefined4 *)(param_2 + 300);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x14a0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(lVar17 + 0x14a8) = uVar1;
  *(undefined8 *)(lVar17 + 0x14b0) = uVar19;
  *(undefined8 *)(lVar17 + 0x14b8) = uVar10;
  *(undefined4 *)(lVar17 + 0x14c0) = uVar2;
  *(undefined4 *)(lVar17 + 0x14c4) = uVar3;
  *(undefined4 *)(lVar17 + 0x14c8) = uVar4;
  *(undefined4 *)(lVar17 + 0x14cc) = uVar5;
  *(undefined4 *)(lVar17 + 0x14d0) = uVar6;
  *(undefined4 *)(lVar17 + 0x14d4) = uVar7;
  *(undefined4 *)(lVar17 + 0x14d8) = uVar8;
  *(undefined4 *)(lVar17 + 0x14dc) = uVar9;
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined4 *)(lVar17 + 0x14ac) = 0;
  *(undefined4 *)(lVar17 + 0x14bc) = 0;
  *(undefined4 *)(lVar17 + 0x14cc) = 0;
  *(undefined4 *)(lVar17 + 0x14dc) = 0x3f800000;
  FUN_180094120((undefined8 *)(param_2 + 0x12a80),&uStack_b8);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x13b0) = uStack_b8;
  *(undefined8 *)(lVar17 + 0x13b8) = uStack_b0;
  *(undefined8 *)(lVar17 + 0x13c0) = uStack_a8;
  *(undefined8 *)(lVar17 + 0x13c8) = uStack_a0;
  *(undefined8 *)(lVar17 + 0x13d0) = uStack_98;
  *(undefined8 *)(lVar17 + 0x13d8) = uStack_90;
  *(undefined8 *)(lVar17 + 0x13e0) = uStack_88;
  *(undefined8 *)(lVar17 + 0x13e8) = uStack_80;
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1748) = *(undefined4 *)(param_2 + 0x12c00);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x174c) = *(undefined4 *)(param_2 + 0x12c04);
  if ((*(byte *)(param_2 + 0x1bd8) & 0x20) != 0) {
    FUN_180094120(param_2 + 0x12ac0,&uStack_b8);
    puVar16 = (undefined8 *)FUN_1800946d0(&uStack_b8,auStack_78,param_2 + 0x12b40);
    uVar1 = puVar16[1];
    uVar19 = puVar16[2];
    uVar10 = puVar16[3];
    uVar11 = puVar16[4];
    uVar12 = puVar16[5];
    uVar13 = puVar16[6];
    uVar14 = puVar16[7];
    lVar17 = *(longlong *)(lVar18 + 0x1cd8);
    *(undefined8 *)(lVar17 + 0x13f0) = *puVar16;
    *(undefined8 *)(lVar17 + 0x13f8) = uVar1;
    *(undefined8 *)(lVar17 + 0x1400) = uVar19;
    *(undefined8 *)(lVar17 + 0x1408) = uVar10;
    *(undefined8 *)(lVar17 + 0x1410) = uVar11;
    *(undefined8 *)(lVar17 + 0x1418) = uVar12;
    *(undefined8 *)(lVar17 + 0x1420) = uVar13;
    *(undefined8 *)(lVar17 + 0x1428) = uVar14;
  }
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1630) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x15d4) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x15d8) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1634) = *(undefined4 *)(param_2 + 0x12a68);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1638) = *(undefined4 *)(param_2 + 0x12a78);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x15c0) = *(undefined4 *)(param_2 + 0x148);
  *(float *)(*(longlong *)(lVar18 + 0x1cd8) + 0x15c4) = 1.0 / *(float *)(param_2 + 0x148);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1648) = *(undefined4 *)(param_2 + 0x11c20);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x164c) = *(undefined4 *)(param_2 + 0x11c24);
  *(float *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1650) = (float)*(int *)(param_2 + 0x129f0);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1658) = *(undefined4 *)(param_2 + 0x129f4);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1788) = *(undefined4 *)(param_2 + 0x129f8);
  *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x165c) = *(undefined4 *)(param_2 + 0x129fc);
  uVar1 = *(undefined8 *)(param_2 + 0x9758);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1690) = *(undefined8 *)(param_2 + 0x9750);
  *(undefined8 *)(lVar17 + 0x1698) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9768);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x16a0) = *(undefined8 *)(param_2 + 0x9760);
  *(undefined8 *)(lVar17 + 0x16a8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9778);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x16b0) = *(undefined8 *)(param_2 + 0x9770);
  *(undefined8 *)(lVar17 + 0x16b8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9788);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x16c0) = *(undefined8 *)(param_2 + 0x9780);
  *(undefined8 *)(lVar17 + 0x16c8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9798);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x16d0) = *(undefined8 *)(param_2 + 0x9790);
  *(undefined8 *)(lVar17 + 0x16d8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x97d0);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x16e0) = *(undefined8 *)(param_2 + 0x97c8);
  *(undefined8 *)(lVar17 + 0x16e8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x97e0);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x16f0) = *(undefined8 *)(param_2 + 0x97d8);
  *(undefined8 *)(lVar17 + 0x16f8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x97f0);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1700) = *(undefined8 *)(param_2 + 0x97e8);
  *(undefined8 *)(lVar17 + 0x1708) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9800);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1710) = *(undefined8 *)(param_2 + 0x97f8);
  *(undefined8 *)(lVar17 + 0x1718) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9810);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1720) = *(undefined8 *)(param_2 + 0x9808);
  *(undefined8 *)(lVar17 + 0x1728) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x9820);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(undefined8 *)(lVar17 + 0x1730) = *(undefined8 *)(param_2 + 0x9818);
  *(undefined8 *)(lVar17 + 0x1738) = uVar1;
  *(undefined8 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1790) = *(undefined8 *)(param_2 + 0x35a8);
  *(undefined8 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x17c0) = *(undefined8 *)(param_2 + 0x35b0);
  lVar17 = FUN_180244ff0(param_2);
  lVar18 = _DAT_180c86938;
  if (lVar17 != 0) {
    lVar18 = FUN_180244ff0(param_2);
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x17c8) =
         0.5 / (float)*(ushort *)(lVar18 + 0x32c);
    lVar17 = FUN_180244ff0(param_2);
    lVar18 = _DAT_180c86938;
    *(float *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x17cc) =
         0.5 / (float)*(ushort *)(lVar17 + 0x32e);
  }
  *(undefined8 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1798) = *(undefined8 *)(param_2 + 0x35b8);
  fVar20 = 1.0 / *(float *)(param_2 + 0x11c20);
  fVar21 = 1.0 / *(float *)(param_2 + 0x11c24);
  lVar17 = *(longlong *)(lVar18 + 0x1cd8);
  *(float *)(lVar17 + 0x1510) = fVar20 * 0.5;
  *(float *)(lVar17 + 0x1514) = fVar21 * 0.5;
  *(float *)(lVar17 + 0x1518) = fVar20;
  *(float *)(lVar17 + 0x151c) = fVar21;
  if (*(longlong *)(param_2 + 0x9960) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x12578);
    uVar19 = *(undefined8 *)(param_2 + 0x12580);
    uVar10 = *(undefined8 *)(param_2 + 0x12588);
    uVar2 = *(undefined4 *)(param_2 + 0x12590);
    uVar3 = *(undefined4 *)(param_2 + 0x12594);
    uVar4 = *(undefined4 *)(param_2 + 0x12598);
    uVar5 = *(undefined4 *)(param_2 + 0x1259c);
    uVar6 = *(undefined4 *)(param_2 + 0x125a0);
    uVar7 = *(undefined4 *)(param_2 + 0x125a4);
    uVar8 = *(undefined4 *)(param_2 + 0x125a8);
    uVar9 = *(undefined4 *)(param_2 + 0x125ac);
    lVar17 = *(longlong *)(lVar18 + 0x1cd8);
    *(undefined8 *)(lVar17 + 0x1130) = *(undefined8 *)(param_2 + 0x12570);
    *(undefined8 *)(lVar17 + 0x1138) = uVar1;
    *(undefined8 *)(lVar17 + 0x1140) = uVar19;
    *(undefined8 *)(lVar17 + 0x1148) = uVar10;
    *(undefined4 *)(lVar17 + 0x1150) = uVar2;
    *(undefined4 *)(lVar17 + 0x1154) = uVar3;
    *(undefined4 *)(lVar17 + 0x1158) = uVar4;
    *(undefined4 *)(lVar17 + 0x115c) = uVar5;
    *(undefined4 *)(lVar17 + 0x1160) = uVar6;
    *(undefined4 *)(lVar17 + 0x1164) = uVar7;
    *(undefined4 *)(lVar17 + 0x1168) = uVar8;
    *(undefined4 *)(lVar17 + 0x116c) = uVar9;
  }
  lVar17 = *(longlong *)(param_2 + 0x99b8);
  if (((lVar17 == 0) || ((*(byte *)(param_2 + 0x1bd8) & 0x20) == 0)) ||
     (*(char *)(param_1 + 0x1320) != '\0')) {
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1750) = 0;
    uVar1 = *(undefined8 *)(lVar18 + 0x1cd8);
    uVar19 = FUN_1800bdc80();
    FUN_18029d150(uVar1,0x1c,uVar19,0x10,0xffffffff);
    lVar18 = _DAT_180c86938;
  }
  else if (*(float *)(lVar17 + 0x40) <= 0.0) {
    uVar1 = *(undefined8 *)(lVar18 + 0x1cd8);
    puVar16 = (undefined8 *)FUN_1802c8dc0(lVar17,&plStackX_8);
    FUN_18029d150(uVar1,0x1c,*puVar16,0x10,0xffffffff);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    lVar18 = _DAT_180c86938;
    *(undefined4 *)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x1750) = 0x3f800000;
  }
  else {
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1750) = 0;
  }
  iVar15 = *(int *)(param_1 + 0x12d8);
  if (iVar15 == 0x11) {
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1768) = *(undefined4 *)(param_1 + 0x1334);
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x176c) = *(undefined4 *)(param_1 + 0x1338);
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 6000) = *(undefined4 *)(param_1 + 0x133c);
    iVar15 = *(int *)(param_1 + 0x12d8);
  }
  if (iVar15 == 0xc) {
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1780) = *(undefined4 *)(param_1 + 0x1344);
    iVar15 = *(int *)(param_1 + 0x12d8);
  }
  if (iVar15 == 0xd) {
    *(undefined4 *)(*(longlong *)(lVar18 + 0x1cd8) + 0x1784) = *(undefined4 *)(param_1 + 0x1348);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




