/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part047.c - 4 个函数

// 函数: void FUN_1805a891a(void)
void FUN_1805a891a(void)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int in_EAX;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  char unaff_SIL;
  char unaff_DIL;
  int64_t in_R10;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  uVar1 = *(uint *)(unaff_RBX + 0x1dc);
  if (((int)uVar1 < 0) ||
     (((&processed_var_6480_ptr)[uVar1 & 7] &
      *(byte *)((int64_t)((*(int *)(unaff_R15 + 0x87b770) >> 3) * in_EAX + ((int)uVar1 >> 3)) +
               *(int64_t *)(unaff_R15 + 0x87b768))) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(char *)(unaff_R14 + 0x1488) == '\0') || (bVar2)) {
    *(byte *)(in_R10 + 0x60) = *(byte *)(in_R10 + 0x60) | 3;
  }
  else {
    cVar3 = func_0x000180598dd0();
    if (cVar3 != '\0') {
      *(byte *)(in_R10 + 0x60) = *(byte *)(in_R10 + 0x60) | 1;
    }
    cVar3 = func_0x000180598dd0();
    if (cVar3 != '\0') {
      *(byte *)(in_R10 + 0x60) = *(byte *)(in_R10 + 0x60) | 2;
    }
  }
  if ((unaff_RBP != 0) && (*(char *)(unaff_R14 + 0x1489) != '\0')) {
    if (unaff_SIL == unaff_DIL) {
      *(byte *)(in_R10 + 0x60) = *(byte *)(in_R10 + 0x60) | 0x60;
    }
    else if (unaff_SIL == '\0') {
      *(byte *)(in_R10 + 0x60) = *(byte *)(in_R10 + 0x60) | 0x40;
    }
    else {
      *(byte *)(in_R10 + 0x60) = *(byte *)(in_R10 + 0x60) | 0x20;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1805a8a30(int64_t param_1,uint64_t *param_2,int64_t param_3,int32_t param_4,float param_5
             ,int64_t param_6,int64_t param_7)

{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  float fVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  uint uVar13;
  uint64_t *puVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t *puVar17;
  byte bVar18;
  uint64_t uVar19;
  int64_t lVar20;
  byte bVar21;
  int64_t lVar22;
  byte bVar23;
  byte bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int32_t uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int32_t uVar33;
  float fVar34;
  float fVar35;
  uint64_t uStack_370;
  float fStack_368;
  int32_t uStack_364;
  uint64_t uStack_360;
  float fStack_358;
  int32_t uStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  int32_t uStack_344;
  int32_t uStack_320;
  uint64_t auStack_318 [92];
  
  lVar15 = param_7;
  sVar7 = *(short *)((int64_t)param_2 + 0x36);
  lVar22 = 4;
  bVar24 = (byte)((ushort)sVar7 >> 0xf) ^ 1;
  if (param_7 != 0) {
    lVar16 = (int64_t)*(short *)((int64_t)param_2 + 0x34) * 0x240;
    if ((*(byte *)(lVar16 + 8 + param_7) & 1) == 0) {
      lVar20 = 4;
      puVar2 = (uint64_t *)(lVar16 + param_6);
      puVar12 = auStack_318;
      do {
        puVar17 = puVar12;
        puVar14 = puVar2;
        uVar8 = puVar14[1];
        uVar9 = puVar14[2];
        uVar10 = puVar14[3];
        *puVar17 = *puVar14;
        puVar17[1] = uVar8;
        uVar8 = puVar14[4];
        uVar11 = puVar14[5];
        puVar17[2] = uVar9;
        puVar17[3] = uVar10;
        uVar9 = puVar14[6];
        uVar10 = puVar14[7];
        puVar17[4] = uVar8;
        puVar17[5] = uVar11;
        uVar8 = puVar14[8];
        uVar11 = puVar14[9];
        puVar17[6] = uVar9;
        puVar17[7] = uVar10;
        uVar9 = puVar14[10];
        uVar10 = puVar14[0xb];
        puVar17[8] = uVar8;
        puVar17[9] = uVar11;
        uVar8 = puVar14[0xc];
        uVar11 = puVar14[0xd];
        puVar17[10] = uVar9;
        puVar17[0xb] = uVar10;
        uVar9 = puVar14[0xe];
        uVar10 = puVar14[0xf];
        puVar17[0xc] = uVar8;
        puVar17[0xd] = uVar11;
        puVar17[0xe] = uVar9;
        puVar17[0xf] = uVar10;
        lVar20 = lVar20 + -1;
        puVar2 = puVar14 + 0x10;
        puVar12 = puVar17 + 0x10;
      } while (lVar20 != 0);
      uVar8 = puVar14[0x11];
      uVar9 = puVar14[0x12];
      uVar10 = puVar14[0x13];
      puVar17[0x10] = puVar14[0x10];
      puVar17[0x11] = uVar8;
      uVar8 = puVar14[0x14];
      uVar11 = puVar14[0x15];
      puVar17[0x12] = uVar9;
      puVar17[0x13] = uVar10;
      uVar9 = puVar14[0x16];
      uVar10 = puVar14[0x17];
      puVar17[0x14] = uVar8;
      puVar17[0x15] = uVar11;
      puVar17[0x16] = uVar9;
      puVar17[0x17] = uVar10;
      lVar20 = 4;
      puVar2 = (uint64_t *)(lVar16 + param_7);
      puVar12 = auStack_318;
      do {
        puVar17 = puVar12;
        puVar14 = puVar2;
        uVar8 = puVar17[1];
        uVar9 = puVar17[2];
        uVar10 = puVar17[3];
        *puVar14 = *puVar17;
        puVar14[1] = uVar8;
        uVar8 = puVar17[4];
        uVar11 = puVar17[5];
        puVar14[2] = uVar9;
        puVar14[3] = uVar10;
        uVar9 = puVar17[6];
        uVar10 = puVar17[7];
        puVar14[4] = uVar8;
        puVar14[5] = uVar11;
        uVar8 = puVar17[8];
        uVar11 = puVar17[9];
        puVar14[6] = uVar9;
        puVar14[7] = uVar10;
        uVar9 = puVar17[10];
        uVar10 = puVar17[0xb];
        puVar14[8] = uVar8;
        puVar14[9] = uVar11;
        uVar8 = puVar17[0xc];
        uVar11 = puVar17[0xd];
        puVar14[10] = uVar9;
        puVar14[0xb] = uVar10;
        uVar9 = puVar17[0xe];
        uVar10 = puVar17[0xf];
        puVar14[0xc] = uVar8;
        puVar14[0xd] = uVar11;
        puVar14[0xe] = uVar9;
        puVar14[0xf] = uVar10;
        lVar20 = lVar20 + -1;
        puVar2 = puVar14 + 0x10;
        puVar12 = puVar17 + 0x10;
      } while (lVar20 != 0);
      uVar8 = puVar17[0x11];
      uVar9 = puVar17[0x12];
      uVar10 = puVar17[0x13];
      puVar14[0x10] = puVar17[0x10];
      puVar14[0x11] = uVar8;
      uVar8 = puVar17[0x14];
      uVar11 = puVar17[0x15];
      puVar14[0x12] = uVar9;
      puVar14[0x13] = uVar10;
      uVar9 = puVar17[0x16];
      uVar10 = puVar17[0x17];
      puVar14[0x14] = uVar8;
      puVar14[0x15] = uVar11;
      puVar14[0x16] = uVar9;
      puVar14[0x17] = uVar10;
    }
  }
  if ((bVar24 != 0) && (param_7 != 0)) {
    lVar16 = (int64_t)sVar7 * 0x240;
    if ((*(byte *)(lVar16 + 8 + param_7) & 1) == 0) {
      lVar20 = 4;
      puVar2 = (uint64_t *)(lVar16 + param_6);
      puVar12 = auStack_318;
      do {
        puVar17 = puVar12;
        puVar14 = puVar2;
        uVar8 = puVar14[1];
        uVar9 = puVar14[2];
        uVar10 = puVar14[3];
        *puVar17 = *puVar14;
        puVar17[1] = uVar8;
        uVar8 = puVar14[4];
        uVar11 = puVar14[5];
        puVar17[2] = uVar9;
        puVar17[3] = uVar10;
        uVar9 = puVar14[6];
        uVar10 = puVar14[7];
        puVar17[4] = uVar8;
        puVar17[5] = uVar11;
        uVar8 = puVar14[8];
        uVar11 = puVar14[9];
        puVar17[6] = uVar9;
        puVar17[7] = uVar10;
        uVar9 = puVar14[10];
        uVar10 = puVar14[0xb];
        puVar17[8] = uVar8;
        puVar17[9] = uVar11;
        uVar8 = puVar14[0xc];
        uVar11 = puVar14[0xd];
        puVar17[10] = uVar9;
        puVar17[0xb] = uVar10;
        uVar9 = puVar14[0xe];
        uVar10 = puVar14[0xf];
        puVar17[0xc] = uVar8;
        puVar17[0xd] = uVar11;
        puVar17[0xe] = uVar9;
        puVar17[0xf] = uVar10;
        lVar20 = lVar20 + -1;
        puVar2 = puVar14 + 0x10;
        puVar12 = puVar17 + 0x10;
      } while (lVar20 != 0);
      uVar8 = puVar14[0x11];
      uVar9 = puVar14[0x12];
      uVar10 = puVar14[0x13];
      puVar17[0x10] = puVar14[0x10];
      puVar17[0x11] = uVar8;
      uVar8 = puVar14[0x14];
      uVar11 = puVar14[0x15];
      puVar17[0x12] = uVar9;
      puVar17[0x13] = uVar10;
      uVar9 = puVar14[0x16];
      uVar10 = puVar14[0x17];
      puVar17[0x14] = uVar8;
      puVar17[0x15] = uVar11;
      puVar17[0x16] = uVar9;
      puVar17[0x17] = uVar10;
      puVar2 = (uint64_t *)(lVar16 + param_7);
      puVar12 = auStack_318;
      do {
        puVar17 = puVar12;
        puVar14 = puVar2;
        uVar8 = puVar17[1];
        uVar9 = puVar17[2];
        uVar10 = puVar17[3];
        *puVar14 = *puVar17;
        puVar14[1] = uVar8;
        uVar8 = puVar17[4];
        uVar11 = puVar17[5];
        puVar14[2] = uVar9;
        puVar14[3] = uVar10;
        uVar9 = puVar17[6];
        uVar10 = puVar17[7];
        puVar14[4] = uVar8;
        puVar14[5] = uVar11;
        uVar8 = puVar17[8];
        uVar11 = puVar17[9];
        puVar14[6] = uVar9;
        puVar14[7] = uVar10;
        uVar9 = puVar17[10];
        uVar10 = puVar17[0xb];
        puVar14[8] = uVar8;
        puVar14[9] = uVar11;
        uVar8 = puVar17[0xc];
        uVar11 = puVar17[0xd];
        puVar14[10] = uVar9;
        puVar14[0xb] = uVar10;
        uVar9 = puVar17[0xe];
        uVar10 = puVar17[0xf];
        puVar14[0xc] = uVar8;
        puVar14[0xd] = uVar11;
        puVar14[0xe] = uVar9;
        puVar14[0xf] = uVar10;
        lVar22 = lVar22 + -1;
        puVar2 = puVar14 + 0x10;
        puVar12 = puVar17 + 0x10;
      } while (lVar22 != 0);
      uVar8 = puVar17[0x11];
      uVar9 = puVar17[0x12];
      uVar10 = puVar17[0x13];
      puVar14[0x10] = puVar17[0x10];
      puVar14[0x11] = uVar8;
      uVar8 = puVar17[0x14];
      uVar11 = puVar17[0x15];
      puVar14[0x12] = uVar9;
      puVar14[0x13] = uVar10;
      uVar9 = puVar17[0x16];
      uVar10 = puVar17[0x17];
      puVar14[0x14] = uVar8;
      puVar14[0x15] = uVar11;
      puVar14[0x16] = uVar9;
      puVar14[0x17] = uVar10;
    }
  }
  if (param_7 == 0) {
    param_7 = param_6;
  }
  lVar16 = 0;
  lVar20 = (int64_t)*(short *)((int64_t)param_2 + 0x34) * 0x240 + param_7;
  lVar22 = lVar16;
  if (bVar24 != 0) {
    lVar22 = (int64_t)sVar7 * 0x240 + param_7;
  }
  fVar28 = *(float *)(param_2 + 7);
  fVar31 = *(float *)(param_2 + 8);
  fVar34 = *(float *)((int64_t)param_2 + 0x3c);
  param_7._0_4_ = *(float *)(param_2 + 9);
  fVar35 = *(float *)((int64_t)param_2 + 0x4c);
  fVar32 = fVar31 + fVar34;
  uVar33 = 0x3f800000;
  fVar27 = (*(float *)((int64_t)param_2 + 0x14) * *(float *)(lVar20 + 0xe4) +
            *(float *)(param_2 + 2) * *(float *)(lVar20 + 0xe0) +
           *(float *)(param_2 + 3) * *(float *)(lVar20 + 0xe8)) -
           fVar28 * *(float *)(lVar20 + 0x164);
  fVar4 = *(float *)((int64_t)param_2 + 0x44);
  if (bVar24 == 0) {
    fVar30 = 0.05;
    param_5 = 1.0;
    fVar26 = fVar32;
  }
  else {
    fVar30 = 0.1;
    fVar27 = (fVar27 - (*(float *)((int64_t)param_2 + 0x14) * *(float *)(lVar22 + 0xe4) +
                        *(float *)(param_2 + 2) * *(float *)(lVar22 + 0xe0) +
                       *(float *)(param_2 + 3) * *(float *)(lVar22 + 0xe8))) +
             fVar4 * *(float *)(lVar22 + 0x164);
    fVar26 = fVar32 + fVar35 + (float)param_7;
  }
  param_5 = ((*(float *)(param_2 + 6) - fVar27) - fVar30) * param_5;
  if (param_5 <= 0.0) {
    return 0;
  }
  fVar27 = -1.0;
  if ((-1.0 <= param_5) && (fVar27 = param_5, 1.0 <= param_5)) {
    fVar27 = 1.0;
  }
  bVar6 = *(byte *)(param_2 + 0xc);
  bVar21 = bVar6 & 2;
  bVar23 = bVar6 & 1;
  if (bVar23 == 0) {
    if (bVar21 == 0) goto LAB_1805a8fbe;
LAB_1805a8eca:
    if ((bVar21 != 0) && (fVar32 = *(float *)((int64_t)param_2 + 0x54), 0.001 < fVar32)) {
      if (bVar23 == 0) {
        if (fVar32 < *(float *)(param_2 + 10) || fVar32 == *(float *)(param_2 + 10)) {
          fVar32 = 0.32;
        }
        else {
          fVar32 = 0.3;
        }
      }
      else {
        fVar32 = 0.43;
      }
      param_7._0_4_ = (float)param_7 * fVar32;
      fVar35 = fVar35 * fVar32;
    }
  }
  else {
    if (bVar21 != 0) {
      fVar32 = *(float *)(param_2 + 10);
      fVar26 = *(float *)((int64_t)param_2 + 0x54);
      if (fVar32 <= fVar26) {
        *(int32_t *)(param_2 + 10) = 0;
        *(float *)((int64_t)param_2 + 0x54) = fVar26 - fVar32;
      }
      else {
        *(int32_t *)((int64_t)param_2 + 0x54) = 0;
        *(float *)(param_2 + 10) = fVar32 - fVar26;
      }
    }
    fVar32 = *(float *)(param_2 + 10);
    if (fVar32 <= 0.001) goto LAB_1805a8eca;
    if (bVar21 == 0) {
      if (fVar32 < *(float *)((int64_t)param_2 + 0x54) ||
          fVar32 == *(float *)((int64_t)param_2 + 0x54)) {
        fVar34 = fVar34 * 0.32;
        fVar31 = fVar31 * 0.32;
      }
      else {
        fVar34 = fVar34 * 0.3;
        fVar31 = fVar31 * 0.3;
      }
    }
    else {
      fVar34 = fVar34 * 0.43;
      fVar31 = fVar31 * 0.43;
    }
  }
  fVar32 = fVar31 + fVar34;
  fVar26 = fVar32 + (float)param_7 + fVar35;
LAB_1805a8fbe:
  fVar26 = 1.0 / fVar26;
  uVar19 = (uint64_t)(bVar6 >> 5 & 1);
  bVar18 = bVar6 >> 6 & 1;
  if ((bVar6 & 4) == 0) {
    fVar30 = 0.0;
    if (0.0 < fVar31) {
      fVar31 = fVar27 * 0.25 * fVar31 * fVar26 * fVar28;
      FUN_1805aad40(lVar20,-fVar31,uVar19,param_4);
      fVar30 = -(fVar31 * fVar28);
    }
    fVar28 = (fVar30 + fVar27) * fVar34 * fVar26;
    fStack_368 = (fVar30 + fVar27) * *(float *)(param_2 + 3) * fVar32 * fVar26;
    uStack_370 = CONCAT44(fVar28 * *(float *)((int64_t)param_2 + 0x14),
                          fVar28 * *(float *)(param_2 + 2));
  }
  else {
    uStack_364 = 0x7f7fffff;
    fVar28 = fVar27 * fVar34 * fVar26;
    fStack_368 = fVar28 * *(float *)(param_2 + 3);
    uStack_370 = CONCAT44(fVar28 * *(float *)((int64_t)param_2 + 0x14),
                          fVar28 * *(float *)(param_2 + 2));
  }
  if ((*(char *)(param_1 + 0x1489) != (char)lVar16) && (lVar15 == 0)) {
    FUN_18051f570((int64_t)*(short *)((int64_t)param_2 + 0x34) * 0xa60 + 0x30a0 + param_3,
                  &uStack_370);
  }
  if (((char)uVar19 == '\0') && (bVar24 != 0)) {
    if (bVar21 == 0) {
      uVar29 = 0;
    }
    else {
      uVar29 = 0x3f000000;
    }
  }
  else {
    uVar29 = 0x3f800000;
  }
  FUN_1805999d0(lVar20,&uStack_370,uVar29,uVar19 & 0xff);
  if (bVar24 != 0) {
    if ((*(byte *)(param_2 + 0xc) & 8) == 0) {
      fVar28 = 0.0;
      if (0.0 < fVar35) {
        fVar28 = fVar27 * 0.25 * fVar35 * fVar26 * fVar4;
        FUN_1805aad40(lVar22,-fVar28,bVar18,param_4);
        fVar28 = -(fVar28 * fVar4);
      }
      fVar31 = (fVar27 - fVar28) * (float)param_7 * fVar26;
      fVar26 = (fVar27 - fVar28) * *(float *)(param_2 + 3) * (fVar35 + (float)param_7) * fVar26;
      fVar28 = fVar31 * *(float *)((int64_t)param_2 + 0x14);
      fVar31 = fVar31 * *(float *)(param_2 + 2);
      uStack_360 = CONCAT44(fVar28,fVar31);
    }
    else {
      fVar26 = fVar27 * (float)param_7 * fVar26;
      fVar31 = fVar26 * *(float *)(param_2 + 2);
      fVar28 = fVar26 * *(float *)((int64_t)param_2 + 0x14);
      fVar26 = fVar26 * *(float *)(param_2 + 3);
    }
    if ((*(char *)(param_1 + 0x1489) != '\0') && (lVar15 == 0)) {
      uStack_344 = 0x7f7fffff;
      fStack_350 = -fVar31;
      fStack_34c = -fVar28;
      fStack_348 = -fVar26;
      FUN_18051f570((int64_t)*(short *)((int64_t)param_2 + 0x36) * 0xa60 + 0x30a0 + param_3,
                    &fStack_350);
    }
    if (bVar18 == 0) {
      if (bVar23 == 0) {
        uVar33 = 0;
      }
      else {
        uVar33 = 0x3f000000;
      }
    }
    uStack_354 = 0x7f7fffff;
    fStack_358 = -fVar26;
    uStack_360 = CONCAT44(fVar28,fVar31) ^ 0x8000000080000000;
    FUN_1805999d0(lVar22,&uStack_360,uVar33,bVar18);
    if (((*(byte *)(param_2 + 0xc) & 0x10) == 0) &&
       ((*(char *)(param_1 + 0x1489) == '\0' || (lVar15 != 0)))) {
      uVar8 = param_2[4];
      uVar9 = param_2[5];
      uStack_320 = *(int32_t *)((int64_t)param_2 + 0x34);
      uVar10 = *param_2;
      uVar11 = param_2[1];
      LOCK();
      puVar1 = (uint *)(param_1 + 0x288);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      uVar13 = uVar5 >> 6;
      if (*(int64_t *)(param_1 + 0x290 + (uint64_t)uVar13 * 8) == 0) {
        lVar15 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x900,8);
        plVar3 = (int64_t *)(param_1 + 0x290 + (uint64_t)uVar13 * 8);
        LOCK();
        bVar25 = *plVar3 == 0;
        if (bVar25) {
          *plVar3 = lVar15;
        }
        UNLOCK();
        if ((!bVar25) && (lVar15 != 0)) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
      }
      lVar15 = *(int64_t *)(param_1 + 0x290 + (uint64_t)uVar13 * 8);
      uVar19 = (uint64_t)(uVar5 + uVar13 * -0x40);
      puVar2 = (uint64_t *)(lVar15 + uVar19 * 0x24);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2 = (uint64_t *)(lVar15 + 0x10 + uVar19 * 0x24);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(int32_t *)(lVar15 + 0x20 + uVar19 * 0x24) = uStack_320;
    }
  }
  *(byte *)(param_2 + 0xc) = *(byte *)(param_2 + 0xc) | 0x10;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_1805a8e6f(double param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5,uint64_t param_6,uint64_t param_7,float param_8,
             uint64_t param_9,uint64_t param_10)

{
  uint *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint uVar4;
  byte bVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint uVar10;
  int64_t lVar11;
  uint64_t *unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  uint64_t uVar12;
  byte bVar13;
  uint64_t in_R10;
  uint64_t in_R11;
  byte bVar14;
  int64_t unaff_R13;
  char unaff_R14B;
  int64_t unaff_R15;
  bool bVar15;
  float fVar16;
  float in_XMM1_Da;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM7_Da;
  float fVar20;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  int32_t uStack0000000000000044;
  int32_t in_stack_00000078;
  
  fVar16 = SUB84(param_1,0);
  fVar20 = (float)param_1;
  fVar18 = -1.0;
  if ((-1.0 <= in_XMM1_Da) && (fVar18 = in_XMM1_Da, unaff_XMM12_Da <= in_XMM1_Da)) {
    fVar18 = unaff_XMM12_Da;
  }
  bVar5 = *(byte *)(unaff_RBX + 0xc);
  bVar13 = bVar5 & 2;
  bVar14 = bVar5 & 1;
  if (bVar14 == 0) {
    if (bVar13 == 0) goto LAB_1805a8fbe;
LAB_1805a8eca:
    if ((bVar13 != 0) && (fVar16 = *(float *)((int64_t)unaff_RBX + 0x54), 0.001 < fVar16)) {
      if (bVar14 == 0) {
        if (fVar16 < *(float *)(unaff_RBX + 10) || fVar16 == *(float *)(unaff_RBX + 10)) {
          fVar16 = 0.32;
        }
        else {
          fVar16 = 0.3;
        }
      }
      else {
        fVar16 = 0.43;
      }
      unaff_XMM7_Da = unaff_XMM7_Da * fVar16;
      unaff_XMM15_Da = unaff_XMM15_Da * fVar16;
      *(float *)(unaff_RBP + 0x2d0) = unaff_XMM7_Da;
    }
  }
  else {
    if (bVar13 != 0) {
      fVar16 = *(float *)(unaff_RBX + 10);
      fVar20 = *(float *)((int64_t)unaff_RBX + 0x54);
      if (fVar16 <= fVar20) {
        *(int *)(unaff_RBX + 10) = (int)param_2;
        *(float *)((int64_t)unaff_RBX + 0x54) = fVar20 - fVar16;
      }
      else {
        *(int *)((int64_t)unaff_RBX + 0x54) = (int)param_2;
        *(float *)(unaff_RBX + 10) = fVar16 - fVar20;
      }
    }
    fVar16 = *(float *)(unaff_RBX + 10);
    if (fVar16 <= 0.001) goto LAB_1805a8eca;
    if (bVar13 == 0) {
      if (fVar16 < *(float *)((int64_t)unaff_RBX + 0x54) ||
          fVar16 == *(float *)((int64_t)unaff_RBX + 0x54)) {
        unaff_XMM13_Da = unaff_XMM13_Da * 0.32;
        unaff_XMM11_Da = unaff_XMM11_Da * 0.32;
      }
      else {
        unaff_XMM13_Da = unaff_XMM13_Da * 0.3;
        unaff_XMM11_Da = unaff_XMM11_Da * 0.3;
      }
    }
    else {
      unaff_XMM13_Da = unaff_XMM13_Da * 0.43;
      unaff_XMM11_Da = unaff_XMM11_Da * 0.43;
    }
  }
  unaff_XMM10_Da = unaff_XMM11_Da + unaff_XMM13_Da;
  fVar16 = unaff_XMM10_Da + unaff_XMM7_Da + unaff_XMM15_Da;
  fVar20 = unaff_XMM12_Da / fVar16;
LAB_1805a8fbe:
  bVar13 = bVar5 >> 6 & 1;
  if ((bVar5 & 4) == 0) {
    fVar17 = 0.0;
    if (unaff_XMM14_Da < unaff_XMM11_Da) {
      fVar17 = fVar18 * 0.25 * unaff_XMM11_Da * fVar20 * *(float *)(unaff_RBP + 0x2a8);
      FUN_1805aad40(fVar16,-fVar17,bVar5 >> 5 & 1,*(int32_t *)(unaff_RBP + 0x2b8));
      fVar17 = -(fVar17 * *(float *)(unaff_RBP + 0x2a8));
    }
    fVar19 = (fVar17 + fVar18) * unaff_XMM13_Da * fVar20;
    param_6._0_4_ = (fVar17 + fVar18) * *(float *)(unaff_RBX + 3) * unaff_XMM10_Da * fVar20;
    fVar16 = *(float *)(unaff_RBX + 2);
    *(float *)(unaff_RBP + 0x2ac) = fVar19 * *(float *)((int64_t)unaff_RBX + 0x14);
    unaff_XMM7_Da = *(float *)(unaff_RBP + 0x2d0);
    *(float *)(unaff_RBP + 0x2a8) = fVar19 * fVar16;
    param_5 = *(uint64_t *)(unaff_RBP + 0x2a8);
  }
  else {
    param_6._4_4_ = 0x7f7fffff;
    fVar16 = fVar18 * unaff_XMM13_Da * fVar20;
    param_6._0_4_ = fVar16 * *(float *)(unaff_RBX + 3);
    param_5 = CONCAT44(fVar16 * *(float *)((int64_t)unaff_RBX + 0x14),
                       fVar16 * *(float *)(unaff_RBX + 2));
  }
  if ((*(char *)(unaff_R15 + 0x1489) != (char)param_2) && (unaff_RSI == 0)) {
    FUN_18051f570((int64_t)*(short *)((int64_t)unaff_RBX + 0x34) * 0xa60 + 0x30a0 + unaff_R13,
                  &param_5);
  }
  FUN_1805999d0(in_R11,&param_5);
  if (unaff_R14B != '\0') {
    if ((*(byte *)(unaff_RBX + 0xc) & 8) == 0) {
      fVar16 = 0.0;
      if (unaff_XMM14_Da < unaff_XMM15_Da) {
        fVar16 = fVar18 * 0.25 * unaff_XMM15_Da * fVar20 * fStackX_20;
        FUN_1805aad40(in_R10,-fVar16,bVar13,*(int32_t *)(unaff_RBP + 0x2b8));
        fVar16 = -(fVar16 * fStackX_20);
      }
      fVar17 = (fVar18 - fVar16) * *(float *)(unaff_RBP + 0x2d0) * fVar20;
      fVar19 = (fVar18 - fVar16) * *(float *)(unaff_RBX + 3) *
               (unaff_XMM15_Da + *(float *)(unaff_RBP + 0x2d0)) * fVar20;
      fVar18 = *(float *)(unaff_RBX + 2);
      *(float *)(unaff_RBP + 0x2d4) = fVar17 * *(float *)((int64_t)unaff_RBX + 0x14);
      *(float *)(unaff_RBP + 0x2d0) = fVar17 * fVar18;
      uVar6 = *(uint64_t *)(unaff_RBP + 0x2d0);
      param_7._4_4_ = (float)((uint64_t)uVar6 >> 0x20);
      param_7._0_4_ = (float)uVar6;
      fVar18 = (float)param_7;
      fVar16 = param_7._4_4_;
      param_7 = uVar6;
    }
    else {
      fVar20 = fVar18 * unaff_XMM7_Da * fVar20;
      fVar19 = fVar20 * *(float *)(unaff_RBX + 3);
      fVar18 = fVar20 * *(float *)(unaff_RBX + 2);
      fVar16 = fVar20 * *(float *)((int64_t)unaff_RBX + 0x14);
    }
    if ((*(char *)(unaff_R15 + 0x1489) != '\0') && (unaff_RSI == 0)) {
      param_10._4_4_ = 0x7f7fffff;
      param_9._0_4_ = -fVar18;
      param_9._4_4_ = -fVar16;
      param_10._0_4_ = -fVar19;
      FUN_18051f570((int64_t)*(short *)((int64_t)unaff_RBX + 0x36) * 0xa60 + 0x30a0 + unaff_R13,
                    &param_9);
    }
    if (bVar13 == 0) {
      if (bVar14 == 0) {
        unaff_XMM12_Da = 0.0;
      }
      else {
        unaff_XMM12_Da = 0.5;
      }
    }
    uStack0000000000000044 = 0x7f7fffff;
    param_8 = -fVar19;
    param_7 = CONCAT44(fVar16,fVar18) ^ 0x8000000080000000;
    FUN_1805999d0(in_R10,&param_7,unaff_XMM12_Da,bVar13);
    if (((*(byte *)(unaff_RBX + 0xc) & 0x10) == 0) &&
       ((*(char *)(unaff_R15 + 0x1489) == '\0' || (unaff_RSI != 0)))) {
      uVar6 = unaff_RBX[4];
      uVar7 = unaff_RBX[5];
      in_stack_00000078 = *(int32_t *)((int64_t)unaff_RBX + 0x34);
      uVar8 = *unaff_RBX;
      uVar9 = unaff_RBX[1];
      LOCK();
      puVar1 = (uint *)(unaff_R15 + 0x288);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      uVar10 = uVar4 >> 6;
      if (*(int64_t *)(unaff_R15 + 0x290 + (uint64_t)uVar10 * 8) == 0) {
        lVar11 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x900,8);
        plVar3 = (int64_t *)(unaff_R15 + 0x290 + (uint64_t)uVar10 * 8);
        LOCK();
        bVar15 = *plVar3 == 0;
        if (bVar15) {
          *plVar3 = lVar11;
        }
        UNLOCK();
        if ((!bVar15) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
      }
      lVar11 = *(int64_t *)(unaff_R15 + 0x290 + (uint64_t)uVar10 * 8);
      uVar12 = (uint64_t)(uVar4 + uVar10 * -0x40);
      puVar2 = (uint64_t *)(lVar11 + uVar12 * 0x24);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (uint64_t *)(lVar11 + 0x10 + uVar12 * 0x24);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      *(int32_t *)(lVar11 + 0x20 + uVar12 * 0x24) = in_stack_00000078;
    }
  }
  *(byte *)(unaff_RBX + 0xc) = *(byte *)(unaff_RBX + 0xc) | 0x10;
  return 1;
}



int8_t FUN_1805a9384(void)

{
  return 0;
}






// 函数: void FUN_1805a93d0(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1805a93d0(uint64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5,int64_t param_6,uint64_t *param_7,uint64_t param_8)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int64_t lVar4;
  char cVar5;
  uint uVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int32_t uStackX_8;
  int32_t uStackX_c;
  
  uVar6 = *(uint *)(param_4 + 0x24);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_6 + 8) = *(uint *)(param_6 + 8) & 0xfffffeff;
    uVar6 = *(uint *)(param_4 + 0x24);
  }
  if (((((uVar6 & 0x40) != 0) && ((*(byte *)(param_3 + 0x24) & 0x80) != 0)) &&
      (*(char *)(param_3 + 0x98) == '\0')) &&
     ((*(int *)(param_4 + 0x194) == 1 && (*(int *)(param_3 + 0x194) == 1)))) {
    fVar10 = *(float *)(param_6 + 0x24);
    fVar1 = *(float *)(param_6 + 0x28);
    fVar9 = *(float *)(param_5 + 0x24) - fVar10;
    fVar2 = *(float *)(param_6 + 0x2c);
    fVar8 = *(float *)(param_5 + 0x2c) - fVar2;
    fVar11 = *(float *)(param_5 + 0x28) - fVar1;
    lVar4 = *(int64_t *)((int64_t)*(int *)(param_4 + 0x1c) * 0xa60 + 0x37d0 + param_2);
    fVar8 = fVar11 * fVar11 + fVar9 * fVar9 + fVar8 * fVar8;
    fVar9 = *(float *)(lVar4 + 0x84) * *(float *)(lVar4 + 0x84);
    if ((fVar9 * 1.8496001 < fVar1 * fVar1 + fVar10 * fVar10 + fVar2 * fVar2) && (fVar9 < fVar8)) {
      bVar3 = *(byte *)(lVar4 + 0x80);
      if (bVar3 != 0) {
        lVar7 = 0;
        do {
          if ((uint)*(ushort *)(lVar4 + lVar7 * 2) == *(uint *)(param_3 + 0x1c)) goto LAB_1805a9559;
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int64_t)(uint64_t)bVar3);
      }
      if (bVar3 < 0x40) {
        *(int16_t *)(lVar4 + (uint64_t)bVar3 * 2) = *(int16_t *)(param_3 + 0x1c);
        *(char *)(lVar4 + 0x80) = *(char *)(lVar4 + 0x80) + '\x01';
      }
      fVar8 = SQRT(fVar8);
      FUN_1805a97d0(fVar8,param_2,*(int32_t *)(param_3 + 0x1c),*(int32_t *)(param_4 + 0x1c),
                    param_7,param_8,fVar8);
    }
  }
LAB_1805a9559:
  if (((*(int *)(param_3 + 0x194) == 1) && ((*(byte *)(param_3 + 0xe0) & 2) != 0)) &&
     ((*(char *)(param_3 + 0x84) == '\0' || (*(char *)(param_3 + 0x84) == '\x05')))) {
    cVar5 = func_0x000180508460(param_2 + 0x87b760,param_3,param_4);
    if (cVar5 == '\0') {
      uStackX_8 = (float)*param_7;
      uStackX_c = (float)((uint64_t)*param_7 >> 0x20);
      fVar10 = uStackX_8 * uStackX_8 + uStackX_c * uStackX_c;
      if ((fVar10 <= 0.98010004) || (1.0201 <= fVar10)) {
        rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      }
                    // WARNING: Subroutine does not return
      AdvancedSystemController(*(int32_t *)(param_5 + 0x34));
    }
  }
  return;
}






// 函数: void FUN_1805a95a3(void)
void FUN_1805a95a3(void)

{
  uint64_t in_RAX;
  int64_t unaff_R15;
  float fVar1;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  
  fStack00000000000000c0 = (float)in_RAX;
  fStack00000000000000c4 = (float)((uint64_t)in_RAX >> 0x20);
  fVar1 = fStack00000000000000c0 * fStack00000000000000c0 +
          fStack00000000000000c4 * fStack00000000000000c4;
  if ((fVar1 <= 0.98010004) || (1.0201 <= fVar1)) {
    rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  }
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(unaff_R15 + 0x34));
}






// 函数: void FUN_1805a97b3(void)
void FUN_1805a97b3(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




