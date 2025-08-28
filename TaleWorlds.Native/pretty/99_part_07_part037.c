#include "TaleWorlds.Native.Split.h"

// 99_part_07_part037.c - 1 个函数

// 函数: void FUN_1804bd560(int64_t param_1,int64_t param_2,int32_t *param_3)
void FUN_1804bd560(int64_t param_1,int64_t param_2,int32_t *param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint uVar5;
  uint64_t *puVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  int8_t auStackX_10 [8];
  
  uVar13 = 0;
  *(uint64_t *)(param_3 + 4) = 0;
  *(uint64_t *)(param_3 + 6) = 0;
  *(uint64_t *)(param_3 + 8) = 0;
  *(uint64_t *)(param_3 + 10) = 0;
  *(uint64_t *)(param_3 + 0xc) = 0;
  *(uint64_t *)(param_3 + 0xe) = 0;
  *(uint64_t *)(param_3 + 0x10) = 0;
  *(uint64_t *)(param_3 + 0x12) = 0;
  uVar10 = *(uint64_t *)(param_3 + 4) & 0xffffffffffffffc0 | (int64_t)*(int *)(param_2 + 8);
  *(uint64_t *)(param_3 + 4) = uVar10;
  uVar10 = (int64_t)*(int *)(param_2 + 4) << 6 | uVar10 & 0xfffffffffffff03f;
  *(uint64_t *)(param_3 + 4) = uVar10;
  uVar10 = (int64_t)*(int *)(param_2 + 0x18) << 0xc | uVar10 & 0xfffffffffffc0fff;
  *(uint64_t *)(param_3 + 4) = uVar10;
  uVar10 = (int64_t)(int)(*(float *)(param_2 + 0x558) * 63.0) << 0x12 | uVar10 & 0xffffffffff03ffff
  ;
  *(uint64_t *)(param_3 + 4) = uVar10;
  uVar10 = (int64_t)*(int *)(param_2 + 0x20) << 0x18 | uVar10 & 0xffffffffc0ffffff;
  *(uint64_t *)(param_3 + 4) = uVar10;
  *(uint64_t *)(param_3 + 4) =
       (int64_t)(int)(*(float *)(param_2 + 0x54c) * 63.0) << 0x1e | uVar10 & 0xfffffff03fffffff;
  *param_3 = *(int32_t *)(param_2 + 0x53c);
  param_3[1] = *(int32_t *)(param_2 + 0x540);
  param_3[2] = *(int32_t *)(param_2 + 0x544);
  uVar10 = (int64_t)(int)(*(float *)(param_2 + 0x550) * 63.0) << 0x2a |
           *(uint64_t *)(param_3 + 4) & 0xffff03ffffffffff;
  *(uint64_t *)(param_3 + 4) = uVar10;
  *(uint64_t *)(param_3 + 4) =
       (int64_t)(int)(*(float *)(param_2 + 0x548) * 63.0) << 0x30 | uVar10 & 0xffc0ffffffffffff;
  uVar10 = *(uint64_t *)(param_3 + 0xe) & 0xffffffff80000000 | (int64_t)*(int *)(param_2 + 0x28);
  *(uint64_t *)(param_3 + 0xe) = uVar10;
  *(uint64_t *)(param_3 + 0xe) =
       (int64_t)*(int *)(param_2 + 0x2c) << 0x20 | uVar10 & 0x80000000ffffffff;
  uVar10 = *(uint64_t *)(param_3 + 0x10) & 0xffffffff80000000 | (int64_t)*(int *)(param_2 + 0x30);
  *(uint64_t *)(param_3 + 0x10) = uVar10;
  *(uint64_t *)(param_3 + 0x10) =
       (int64_t)*(int *)(param_2 + 0x34) << 0x20 | uVar10 & 0x80000000ffffffff;
  uVar10 = *(uint64_t *)(param_3 + 0x12) & 0xffffffffffffffc0 | (int64_t)*(int *)(param_2 + 0x24);
  *(uint64_t *)(param_3 + 0x12) = uVar10;
  uVar10 = (int64_t)*(int *)(param_2 + 0x1c) << 6 | uVar10 & 0xfffffffffffff03f;
  *(uint64_t *)(param_3 + 0x12) = uVar10;
  uVar14 = (int64_t)*(int *)(param_2 + 0xc) << 0xc | uVar10 & 0xfffffffffffc0fff;
  *(uint64_t *)(param_3 + 0x12) = uVar14;
  uVar10 = (uint64_t)(-(uint)(*(char *)(param_2 + 0x564) != '\0') & 0x40000);
  *(uint64_t *)(param_3 + 0x12) = uVar14 & 0xfffffffffffbffff | uVar10;
  fVar19 = *(float *)(param_2 + 0x55c);
  fVar21 = 0.0;
  if ((0.0 <= fVar19) && (fVar21 = fVar19, 1.0 <= fVar19)) {
    fVar21 = 1.0;
  }
  uVar10 = (int64_t)(int)(fVar21 * 63.0) << 0x13 | uVar14 & 0xfffffffffe03ffff | uVar10;
  puVar15 = (uint64_t *)(param_1 + 0xb8);
  *(uint64_t *)(param_3 + 0x12) = uVar10;
  *(uint64_t *)(param_3 + 0x12) =
       (int64_t)(int)(*(float *)(param_2 + 0x560) * 63.0) << 0x19 | uVar10 & 0xffffffff81ffffff;
  uVar4 = func_0x0001804bb950(param_2);
  puVar3 = (uint64_t *)puVar15[2];
  puVar6 = puVar15;
  while (puVar2 = puVar3, puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = (uint64_t *)puVar2[1];
      puVar6 = puVar2;
    }
  }
  if ((puVar6 == puVar15) || (uVar4 < *(uint *)(puVar6 + 4))) {
    puVar6 = (uint64_t *)PhysicsSystem_IntegrationProcessor(puVar15,auStackX_10);
    puVar6 = (uint64_t *)*puVar6;
  }
  lVar1 = puVar6[5];
  iVar9 = *(int *)(lVar1 + 0x298);
  if (0 < iVar9) {
    piVar7 = (int *)(*(int64_t *)(lVar1 + 0x290) + 0x44);
    uVar10 = uVar13;
    uVar14 = uVar13;
    do {
      iVar17 = (int)uVar14;
      if (*piVar7 == 0x3c) goto LAB_1804bd86c;
      uVar14 = (uint64_t)(iVar17 + 1);
      uVar10 = uVar10 + 1;
      piVar7 = piVar7 + 0x2a;
    } while ((int64_t)uVar10 < (int64_t)iVar9);
  }
  iVar17 = -1;
LAB_1804bd86c:
  if (0 < iVar9) {
    piVar7 = (int *)(*(int64_t *)(lVar1 + 0x290) + 0x44);
    uVar10 = uVar13;
    uVar14 = uVar13;
    do {
      iVar16 = (int)uVar14;
      if (*piVar7 == 0x3d) goto LAB_1804bd89d;
      uVar14 = (uint64_t)(iVar16 + 1);
      uVar10 = uVar10 + 1;
      piVar7 = piVar7 + 0x2a;
    } while ((int64_t)uVar10 < (int64_t)iVar9);
  }
  iVar16 = -1;
LAB_1804bd89d:
  if (0 < iVar9) {
    pfVar18 = (float *)(param_2 + 0x3c);
    do {
      uVar12 = (uint)uVar13;
      uVar5 = uVar12 & 0xf;
      uVar4 = uVar12;
      if ((int)uVar12 < 0) {
        uVar4 = uVar12 + 0xf;
        uVar5 = uVar5 - 0x10;
      }
      bVar8 = (char)uVar5 * '\x04';
      iVar9 = (int)uVar4 >> 4;
      fVar21 = *pfVar18 * 15.0;
      iVar11 = (int)fVar21;
      fVar19 = fVar21;
      if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar21)) {
        auVar20._4_4_ = fVar21;
        auVar20._0_4_ = fVar21;
        auVar20._8_8_ = 0;
        uVar4 = movmskps(uVar5,auVar20);
        fVar19 = (float)(int)(iVar11 - (uVar4 & 1));
      }
      if ((iVar9 + 1 != iVar17) && (iVar9 + 1 != iVar16)) {
        iVar11 = (int)fVar19;
        if (0.5 < fVar21 - fVar19) {
          iVar11 = (int)fVar19 + 1;
        }
        *(uint64_t *)(param_3 + (int64_t)iVar9 * 2 + 6) =
             (int64_t)iVar11 << (bVar8 & 0x3f) |
             ~(0xfL << (bVar8 & 0x3f)) & *(uint64_t *)(param_3 + (int64_t)iVar9 * 2 + 6);
      }
      uVar13 = (uint64_t)(uVar12 + 1);
      pfVar18 = pfVar18 + 1;
    } while ((int)(uVar12 + 1) < *(int *)(lVar1 + 0x298));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




