#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// $fun 的语义化别名
#define $alias_name $fun


// 99_part_03_part051.c - 4 个函数

// 函数: void FUN_180230250(int64_t param_1)
void FUN_180230250(int64_t param_1)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 8);
  *(int32_t *)(lVar1 + 0x10) = 0;
  *(int32_t *)(lVar1 + 0x38) = 0;
  *(int32_t *)(lVar1 + 0x88) = 0;
  *(int32_t *)(lVar1 + 0x60) = 0;
  *(int16_t *)(lVar1 + 0xc0) = 0;
  if (*(int64_t *)(lVar1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(lVar1 + 0xb8) = 0;
  FUN_180085530(*(uint64_t *)(lVar1 + 0xb0));
  *(uint64_t *)(lVar1 + 0xb0) = 0;
  *(int32_t *)(lVar1 + 200) = 0;
  *(int16_t *)(param_1 + 0x30) = 0x101;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802302d0(int64_t *param_1)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t lVar9;
  char cVar10;
  int iVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint uVar17;
  uint64_t uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  int8_t auVar22 [16];
  float fVar23;
  int64_t lStack_60;
  int32_t uStack_58;
  
  lStack_60 = *param_1;
  if ((((*(byte *)(lStack_60 + 0xfd) & 0x40) == 0) || (*(int64_t *)(lStack_60 + 0x210) == 0)) &&
     (*(int64_t *)(lStack_60 + 0x1b0) != 0)) {
    lStack_60 = FUN_180085900();
  }
  uVar14 = 0;
  uStack_58 = 0;
  uVar12 = FUN_18007f770(&lStack_60);
  lVar9 = lStack_60;
  lVar15 = param_1[1];
  uVar16 = uVar14;
  uVar18 = uVar14;
  if (0 < *(int *)(lVar15 + 0x60)) {
    do {
      lVar7 = *(int64_t *)(lVar15 + 0x68);
      piVar1 = (int *)(lVar15 + 0x38);
      iVar11 = *(int *)(lVar15 + 0x10);
      if (*piVar1 != iVar11) {
        *piVar1 = iVar11;
        *(int8_t *)(lVar15 + 0x58) = *(int8_t *)(lVar15 + 0x30);
        if (*(int *)(lVar15 + 0x3c) < *(int *)(lVar15 + 0x14)) {
          *(int *)(lVar15 + 0x3c) = *(int *)(lVar15 + 0x14);
          CoreEngine_DataProcessor(piVar1);
          iVar11 = *piVar1;
        }
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)(lVar15 + 0x40),*(uint64_t *)(lVar15 + 0x18),(int64_t)iVar11 << 4);
      }
      uVar12 = param_1[1];
      puVar13 = (uint64_t *)
                ((int64_t)*(int *)(uVar16 + lVar7) * 0x10 + *(int64_t *)(uVar12 + 0x40));
      *puVar13 = 0;
      puVar13[1] = 0x7f7fffff00000000;
      puVar13 = (uint64_t *)(uVar16 + 0x34 + lVar7);
      *puVar13 = 0;
      puVar13[1] = 0x7f7fffff00000000;
      uVar17 = (int)uVar18 + 1;
      lVar15 = param_1[1];
      uVar16 = uVar16 + 0x5c;
      uVar18 = (uint64_t)uVar17;
    } while ((int)uVar17 < *(int *)(lVar15 + 0x60));
  }
  if (0 < *(int *)(lVar15 + 0x60)) {
    fVar23 = (float)system_data_01f0;
    uVar16 = uVar14;
    do {
      lVar15 = *(int64_t *)(param_1[1] + 0x68);
      fVar4 = *(float *)(lVar15 + 0x38 + uVar14);
      fVar5 = *(float *)(lVar15 + 0x34 + uVar14);
      fVar6 = *(float *)(lVar15 + 0x3c + uVar14);
      fVar20 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
      auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
      fVar21 = auVar22._0_4_;
      fVar20 = fVar21 * 0.5 * (fVar23 - fVar20 * fVar21 * fVar21);
      *(float *)(lVar15 + 0x34 + uVar14) = fVar5 * fVar20;
      *(float *)(lVar15 + 0x38 + uVar14) = fVar4 * fVar20;
      *(float *)(lVar15 + 0x3c + uVar14) = fVar6 * fVar20;
      uVar17 = (int)uVar16 + 1;
      uVar16 = (uint64_t)uVar17;
      uVar14 = uVar14 + 0x5c;
      uVar12 = param_1[1];
    } while ((int)uVar17 < *(int *)(uVar12 + 0x60));
  }
  *(int8_t *)(param_1 + 6) = 1;
  if (lStack_60 != 0) {
    while( true ) {
      LOCK();
      cVar10 = *(char *)(lVar9 + 0xec);
      bVar19 = cVar10 == '\0';
      if (bVar19) {
        *(char *)(lVar9 + 0xec) = '\x01';
        cVar10 = '\0';
      }
      UNLOCK();
      if (bVar19) break;
      iVar11 = _Thrd_id();
      if ((*(int *)(lVar9 + 0xf0) == iVar11) || (*(int *)(lVar9 + 0xf0) != 0)) goto LAB_1802304cf;
      Sleep();
    }
    cVar10 = '\0';
LAB_1802304cf:
    LOCK();
    puVar2 = (uint *)(lVar9 + 0xe8);
    uVar17 = *puVar2;
    uVar12 = (uint64_t)uVar17;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (cVar10 == '\0') {
      if ((((uVar17 == 1) && (*(int64_t *)(lStack_60 + 0x210) != 0)) &&
          ((lVar15 = lStack_60, FUN_1800791a0(lStack_60), *(char *)(lVar15 + 0xfc) == '\0' &&
           (*(char *)(lVar15 + 0xf4) == '\0')))) &&
         (((*(byte *)(lVar15 + 0xfd) & 0x20) == 0 || ((*(byte *)(lVar15 + 0xfe) & 1) == 0)))) {
        plVar8 = *(int64_t **)(lVar15 + 0x210);
        *(uint64_t *)(lVar15 + 0x210) = 0;
        if (plVar8 != (int64_t *)0x0) {
          (**(code **)(*plVar8 + 0x38))();
        }
      }
      LOCK();
      bVar3 = *(byte *)(lVar9 + 0xec);
      *(byte *)(lVar9 + 0xec) = 0;
      uVar12 = (uint64_t)bVar3;
      UNLOCK();
    }
  }
  return uVar12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180230580(int64_t param_1)
void FUN_180230580(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  uint64_t uVar3;
  
  lVar2 = *(int64_t *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x14) < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)*(int *)(lVar2 + 0x14) << 4);
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar3,*(uint64_t *)(lVar2 + 0x18),(int64_t)iVar1 << 4);
}



// WARNING: Type propagation algorithm not settling

int FUN_1802309b0(int64_t param_1,float *param_2,float *param_3,uint64_t param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int iVar12;
  uint64_t auStackX_10 [3];
  uint64_t uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int32_t uStack_54;
  uint64_t uStack_40;
  
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = *param_3;
  fVar4 = *param_2;
  uStack_68 = 0;
  auStackX_10[2] = param_4;
  uVar8 = SystemCore_DataSerializer();
  auStackX_10[0] = CONCAT44(auStackX_10[0]._4_4_,uVar8);
  uStack_54 = 0x7f7fffff;
  if (ABS(fVar1 - fVar2) <= fVar3 - fVar4) {
    fStack_60 = *param_3;
    fStack_5c = param_3[1];
    fStack_58 = param_3[2];
    uVar8 = SystemCore_DataSerializer(param_1,&fStack_60);
    fStack_60 = *param_3;
    fStack_58 = param_2[2];
    fStack_5c = *param_5 + param_3[1];
    uStack_54 = 0x7f7fffff;
    uVar9 = SystemCore_DataSerializer(param_1,&fStack_60);
    fStack_5c = *param_5 + param_2[1];
    fStack_60 = *param_2;
  }
  else {
    fStack_5c = param_3[1];
    if (fStack_5c - param_2[1] <= 0.0) {
      fStack_60 = *param_3;
      fStack_58 = param_2[2];
      uVar8 = SystemCore_DataSerializer(param_1,&fStack_60);
      fStack_58 = param_3[2];
      uStack_54 = 0x7f7fffff;
      fStack_60 = *param_3 + *param_5;
      fStack_5c = param_3[1];
      uVar9 = SystemCore_DataSerializer(param_1,&fStack_60);
      fStack_60 = *param_2 + *param_5;
      fStack_58 = param_2[2];
      fStack_5c = param_2[1];
      goto LAB_180230b9d;
    }
    fStack_60 = *param_2 + *param_5;
    fStack_58 = param_2[2];
    fStack_5c = param_2[1];
    uVar8 = SystemCore_DataSerializer(param_1,&fStack_60);
    fStack_60 = *param_3 + *param_5;
    fStack_58 = param_3[2];
    uStack_54 = 0x7f7fffff;
    fStack_5c = param_3[1];
    uVar9 = SystemCore_DataSerializer(param_1,&fStack_60);
    fStack_60 = *param_3;
    fStack_5c = param_3[1];
  }
  fStack_58 = param_2[2];
LAB_180230b9d:
  uStack_54 = 0x7f7fffff;
  uVar10 = SystemCore_DataSerializer(param_1,&fStack_60);
  uVar7 = auStackX_10[2];
  auStackX_10[1] = 0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  fStack_58 = 1.0;
  uStack_54 = 0x7f7fffff;
  uVar11 = SystemCore_Decoder(param_1,auStackX_10[0] & 0xffffffff,auStackX_10 + 1,auStackX_10[2],
                         &fStack_60);
  auStackX_10[0] = 0;
  uVar8 = SystemCore_Decoder(param_1,uVar8,auStackX_10,uVar7,&fStack_60);
  auStackX_10[0] = 0;
  uVar9 = SystemCore_Decoder(param_1,uVar9,auStackX_10,uVar7,&fStack_60);
  SystemCore_RenderFrame(param_1,uVar11,uVar8,uVar9);
  uVar8 = SystemCore_Decoder(param_1,uVar10,&uStack_68,auStackX_10[2],&fStack_60);
  lVar6 = *(int64_t *)(param_1 + 8);
  iVar5 = *(int *)(lVar6 + 0x88);
  iVar12 = *(int *)(lVar6 + 0x8c);
  if (iVar12 < iVar5 + 1) {
    if (iVar12 < 2) {
      iVar12 = 8;
    }
    else {
      iVar12 = (iVar12 >> 1) + iVar12;
    }
    *(int *)(lVar6 + 0x8c) = iVar12;
    uStack_40 = 0x18023547b;
    FUN_180085f20(lVar6 + 0x88);
  }
  *(int *)(lVar6 + 0x88) = iVar5 + 1;
  lVar6 = (int64_t)iVar5 * 0xc;
  *(int32_t *)(lVar6 + *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90)) = uVar11;
  *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90) + 4 + lVar6) = uVar9;
  *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90) + 8 + lVar6) = uVar8;
  *(int16_t *)(param_1 + 0x31) = 0x101;
  return iVar5;
}






// 函数: void FUN_180230c90(int64_t param_1,float *param_2,float *param_3)
void FUN_180230c90(int64_t param_1,float *param_2,float *param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  float *pfVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar8 = 0;
  fVar16 = 9999.0;
  fVar18 = -9999.0;
  fVar17 = 9999.0;
  fVar19 = -9999.0;
  lVar10 = *(int64_t *)(param_1 + 8);
  lVar11 = (int64_t)*(int *)(lVar10 + 0x10);
  lVar7 = lVar8;
  if (3 < lVar11) {
    lVar4 = (lVar11 - 4U >> 2) + 1;
    lVar7 = lVar4 * 4;
    pfVar5 = (float *)(*(int64_t *)(lVar10 + 0x18) + 0x10);
    pfVar9 = (float *)(*(int64_t *)(lVar10 + 0x18) + 0x24);
    do {
      fVar15 = pfVar5[-4];
      fVar13 = pfVar5[-3];
      fVar14 = fVar15;
      if (fVar15 <= fVar18) {
        fVar14 = fVar18;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      fVar12 = fVar13;
      if (fVar13 <= fVar19) {
        fVar12 = fVar19;
      }
      if (fVar17 <= fVar13) {
        fVar13 = fVar17;
      }
      if (fVar14 <= *pfVar5) {
        fVar14 = *pfVar5;
      }
      if (*pfVar5 <= fVar15) {
        fVar15 = *pfVar5;
      }
      if (fVar12 <= pfVar9[-4]) {
        fVar12 = pfVar9[-4];
      }
      if (pfVar9[-4] <= fVar13) {
        fVar13 = pfVar9[-4];
      }
      if (fVar14 <= pfVar5[4]) {
        fVar14 = pfVar5[4];
      }
      if (pfVar5[4] <= fVar15) {
        fVar15 = pfVar5[4];
      }
      if (fVar12 <= *pfVar9) {
        fVar12 = *pfVar9;
      }
      if (*pfVar9 <= fVar13) {
        fVar13 = *pfVar9;
      }
      fVar18 = fVar14;
      if (fVar14 <= pfVar5[8]) {
        fVar18 = pfVar5[8];
      }
      fVar16 = fVar15;
      if (pfVar5[8] <= fVar15) {
        fVar16 = pfVar5[8];
      }
      fVar19 = fVar12;
      if (fVar12 <= pfVar9[4]) {
        fVar19 = pfVar9[4];
      }
      fVar17 = fVar13;
      if (pfVar9[4] <= fVar13) {
        fVar17 = pfVar9[4];
      }
      lVar4 = lVar4 + -1;
      pfVar5 = pfVar5 + 0x10;
      pfVar9 = pfVar9 + 0x10;
    } while (lVar4 != 0);
  }
  if (lVar7 < lVar11) {
    pfVar5 = (float *)(lVar7 * 0x10 + *(int64_t *)(lVar10 + 0x18));
    lVar7 = lVar11 - lVar7;
    fVar15 = fVar16;
    fVar13 = fVar17;
    fVar14 = fVar18;
    fVar12 = fVar19;
    do {
      fVar16 = *pfVar5;
      fVar17 = pfVar5[1];
      fVar18 = fVar16;
      if (fVar16 <= fVar14) {
        fVar18 = fVar14;
      }
      if (fVar15 <= fVar16) {
        fVar16 = fVar15;
      }
      pfVar5 = pfVar5 + 4;
      fVar19 = fVar17;
      if (fVar17 <= fVar12) {
        fVar19 = fVar12;
      }
      if (fVar13 <= fVar17) {
        fVar17 = fVar13;
      }
      lVar7 = lVar7 + -1;
      fVar15 = fVar16;
      fVar13 = fVar17;
      fVar14 = fVar18;
      fVar12 = fVar19;
    } while (lVar7 != 0);
  }
  if ((fVar18 - fVar16 != 0.0) && (fVar19 - fVar17 != 0.0)) {
    fVar15 = (param_3[1] - param_2[1]) / (fVar19 - fVar17);
    fVar19 = (*param_3 - *param_2) / (fVar18 - fVar16);
    fVar18 = (fVar15 + fVar19) * 0.5;
    lVar7 = lVar8;
    if (3 < lVar11) {
      lVar10 = (lVar11 - 4U >> 2) + 1;
      lVar7 = lVar10 * 4;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x18);
        *(float *)(lVar8 + lVar4) = *(float *)(lVar8 + lVar4) - fVar16;
        *(float *)(lVar8 + 4 + lVar4) = *(float *)(lVar8 + 4 + lVar4) - fVar17;
        *(float *)(lVar8 + lVar4) = fVar19 * *(float *)(lVar8 + lVar4);
        *(float *)(lVar8 + 4 + lVar4) = fVar15 * *(float *)(lVar8 + 4 + lVar4);
        *(float *)(lVar8 + 8 + lVar4) = fVar18 * *(float *)(lVar8 + 8 + lVar4);
        *(float *)(lVar8 + lVar4) = *(float *)(lVar8 + lVar4) + *param_2;
        *(float *)(lVar8 + 4 + lVar4) = param_2[1] + *(float *)(lVar8 + 4 + lVar4);
        lVar6 = *(int64_t *)(param_1 + 8);
        if (*(int *)(lVar6 + 0x38) != 0) {
          uVar3 = ((uint64_t *)(lVar8 + lVar4))[1];
          puVar1 = (uint64_t *)(*(int64_t *)(lVar6 + 0x40) + lVar8);
          *puVar1 = *(uint64_t *)(lVar8 + lVar4);
          puVar1[1] = uVar3;
          lVar6 = *(int64_t *)(param_1 + 8);
        }
        lVar4 = *(int64_t *)(lVar6 + 0x18);
        *(float *)(lVar4 + 0x10 + lVar8) = *(float *)(lVar4 + 0x10 + lVar8) - fVar16;
        *(float *)(lVar4 + 0x14 + lVar8) = *(float *)(lVar4 + 0x14 + lVar8) - fVar17;
        *(float *)(lVar4 + 0x10 + lVar8) = fVar19 * *(float *)(lVar4 + 0x10 + lVar8);
        *(float *)(lVar4 + 0x14 + lVar8) = fVar15 * *(float *)(lVar4 + 0x14 + lVar8);
        *(float *)(lVar4 + 0x18 + lVar8) = fVar18 * *(float *)(lVar4 + 0x18 + lVar8);
        *(float *)(lVar4 + 0x10 + lVar8) = *(float *)(lVar4 + 0x10 + lVar8) + *param_2;
        *(float *)(lVar4 + 0x14 + lVar8) = param_2[1] + *(float *)(lVar4 + 0x14 + lVar8);
        lVar6 = *(int64_t *)(param_1 + 8);
        if (*(int *)(lVar6 + 0x38) != 0) {
          puVar1 = (uint64_t *)(lVar4 + 0x10 + lVar8);
          uVar3 = puVar1[1];
          puVar2 = (uint64_t *)(*(int64_t *)(lVar6 + 0x40) + 0x10 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          lVar6 = *(int64_t *)(param_1 + 8);
        }
        lVar4 = *(int64_t *)(lVar6 + 0x18);
        *(float *)(lVar8 + 0x20 + lVar4) = *(float *)(lVar8 + 0x20 + lVar4) - fVar16;
        *(float *)(lVar8 + 0x24 + lVar4) = *(float *)(lVar8 + 0x24 + lVar4) - fVar17;
        *(float *)(lVar8 + 0x20 + lVar4) = fVar19 * *(float *)(lVar8 + 0x20 + lVar4);
        *(float *)(lVar8 + 0x24 + lVar4) = fVar15 * *(float *)(lVar8 + 0x24 + lVar4);
        *(float *)(lVar8 + 0x28 + lVar4) = fVar18 * *(float *)(lVar8 + 0x28 + lVar4);
        *(float *)(lVar8 + 0x20 + lVar4) = *(float *)(lVar8 + 0x20 + lVar4) + *param_2;
        *(float *)(lVar8 + 0x24 + lVar4) = param_2[1] + *(float *)(lVar8 + 0x24 + lVar4);
        lVar6 = *(int64_t *)(param_1 + 8);
        if (*(int *)(lVar6 + 0x38) != 0) {
          puVar1 = (uint64_t *)(lVar8 + 0x20 + lVar4);
          uVar3 = puVar1[1];
          puVar2 = (uint64_t *)(*(int64_t *)(lVar6 + 0x40) + 0x20 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          lVar6 = *(int64_t *)(param_1 + 8);
        }
        lVar4 = *(int64_t *)(lVar6 + 0x18);
        *(float *)(lVar8 + 0x30 + lVar4) = *(float *)(lVar8 + 0x30 + lVar4) - fVar16;
        *(float *)(lVar8 + 0x34 + lVar4) = *(float *)(lVar8 + 0x34 + lVar4) - fVar17;
        *(float *)(lVar8 + 0x30 + lVar4) = fVar19 * *(float *)(lVar8 + 0x30 + lVar4);
        *(float *)(lVar8 + 0x34 + lVar4) = fVar15 * *(float *)(lVar8 + 0x34 + lVar4);
        *(float *)(lVar8 + 0x38 + lVar4) = fVar18 * *(float *)(lVar8 + 0x38 + lVar4);
        *(float *)(lVar8 + 0x30 + lVar4) = *(float *)(lVar8 + 0x30 + lVar4) + *param_2;
        *(float *)(lVar8 + 0x34 + lVar4) = param_2[1] + *(float *)(lVar8 + 0x34 + lVar4);
        if (*(int *)(*(int64_t *)(param_1 + 8) + 0x38) != 0) {
          puVar1 = (uint64_t *)(lVar8 + 0x30 + lVar4);
          uVar3 = puVar1[1];
          puVar2 = (uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x40) + 0x30 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
        }
        lVar8 = lVar8 + 0x40;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lVar7 < lVar11) {
      lVar10 = lVar7 << 4;
      lVar11 = lVar11 - lVar7;
      do {
        lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x18);
        *(float *)(lVar10 + 8 + lVar7) = fVar18 * *(float *)(lVar10 + 8 + lVar7);
        fVar14 = (*(float *)(lVar10 + lVar7) - fVar16) * fVar19;
        fVar13 = (*(float *)(lVar10 + 4 + lVar7) - fVar17) * fVar15;
        *(float *)(lVar10 + lVar7) = fVar14;
        *(float *)(lVar10 + 4 + lVar7) = fVar13;
        *(float *)(lVar10 + lVar7) = fVar14 + *param_2;
        *(float *)(lVar10 + 4 + lVar7) = fVar13 + param_2[1];
        if (*(int *)(*(int64_t *)(param_1 + 8) + 0x38) != 0) {
          uVar3 = ((uint64_t *)(lVar10 + lVar7))[1];
          puVar1 = (uint64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x40) + lVar10);
          *puVar1 = *(uint64_t *)(lVar10 + lVar7);
          puVar1[1] = uVar3;
        }
        lVar10 = lVar10 + 0x10;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    *(int8_t *)(param_1 + 0x30) = 1;
    *(int8_t *)(param_1 + 0x32) = 1;
  }
  return;
}






// 函数: void FUN_180230cd3(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_180230cd3(int64_t param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t in_RAX;
  int64_t lVar5;
  float *pfVar6;
  int64_t lVar7;
  uint64_t unaff_RBX;
  float *unaff_RSI;
  int64_t unaff_RDI;
  int64_t lVar8;
  float *pfVar9;
  float *in_R10;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  lVar8 = *(int64_t *)(param_1 + 8);
  lVar10 = (int64_t)*(int *)(lVar8 + 0x10);
  fVar13 = unaff_XMM10_Da;
  if (3 < lVar10) {
    *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
    *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
    *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
    *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
    *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
    *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
    *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
    *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
    lVar5 = (lVar10 - 4U >> 2) + 1;
    param_2 = lVar5 * 4;
    pfVar6 = (float *)(*(int64_t *)(lVar8 + 0x18) + 0x10);
    pfVar9 = (float *)(*(int64_t *)(lVar8 + 0x18) + 0x24);
    do {
      fVar14 = pfVar6[-4];
      fVar15 = pfVar6[-3];
      fVar11 = fVar14;
      if (fVar14 <= unaff_XMM10_Da) {
        fVar11 = unaff_XMM10_Da;
      }
      if (unaff_XMM8_Da <= fVar14) {
        fVar14 = unaff_XMM8_Da;
      }
      fVar12 = fVar15;
      if (fVar15 <= fVar13) {
        fVar12 = fVar13;
      }
      if (unaff_XMM9_Da <= fVar15) {
        fVar15 = unaff_XMM9_Da;
      }
      if (fVar11 <= *pfVar6) {
        fVar11 = *pfVar6;
      }
      if (*pfVar6 <= fVar14) {
        fVar14 = *pfVar6;
      }
      if (fVar12 <= pfVar9[-4]) {
        fVar12 = pfVar9[-4];
      }
      if (pfVar9[-4] <= fVar15) {
        fVar15 = pfVar9[-4];
      }
      if (fVar11 <= pfVar6[4]) {
        fVar11 = pfVar6[4];
      }
      if (pfVar6[4] <= fVar14) {
        fVar14 = pfVar6[4];
      }
      if (fVar12 <= *pfVar9) {
        fVar12 = *pfVar9;
      }
      if (*pfVar9 <= fVar15) {
        fVar15 = *pfVar9;
      }
      unaff_XMM10_Da = fVar11;
      if (fVar11 <= pfVar6[8]) {
        unaff_XMM10_Da = pfVar6[8];
      }
      unaff_XMM8_Da = fVar14;
      if (pfVar6[8] <= fVar14) {
        unaff_XMM8_Da = pfVar6[8];
      }
      fVar13 = fVar12;
      if (fVar12 <= pfVar9[4]) {
        fVar13 = pfVar9[4];
      }
      unaff_XMM9_Da = fVar15;
      if (pfVar9[4] <= fVar15) {
        unaff_XMM9_Da = pfVar9[4];
      }
      lVar5 = lVar5 + -1;
      pfVar6 = pfVar6 + 0x10;
      pfVar9 = pfVar9 + 0x10;
    } while (lVar5 != 0);
  }
  if (param_2 < lVar10) {
    pfVar6 = (float *)(param_2 * 0x10 + *(int64_t *)(lVar8 + 0x18));
    param_2 = lVar10 - param_2;
    fVar14 = unaff_XMM8_Da;
    fVar15 = unaff_XMM9_Da;
    fVar11 = unaff_XMM10_Da;
    fVar12 = fVar13;
    do {
      unaff_XMM8_Da = *pfVar6;
      unaff_XMM9_Da = pfVar6[1];
      unaff_XMM10_Da = unaff_XMM8_Da;
      if (unaff_XMM8_Da <= fVar11) {
        unaff_XMM10_Da = fVar11;
      }
      if (fVar14 <= unaff_XMM8_Da) {
        unaff_XMM8_Da = fVar14;
      }
      pfVar6 = pfVar6 + 4;
      fVar13 = unaff_XMM9_Da;
      if (unaff_XMM9_Da <= fVar12) {
        fVar13 = fVar12;
      }
      if (fVar15 <= unaff_XMM9_Da) {
        unaff_XMM9_Da = fVar15;
      }
      param_2 = param_2 + -1;
      fVar14 = unaff_XMM8_Da;
      fVar15 = unaff_XMM9_Da;
      fVar11 = unaff_XMM10_Da;
      fVar12 = fVar13;
    } while (param_2 != 0);
  }
  if ((unaff_XMM10_Da - unaff_XMM8_Da != 0.0) && (fVar13 - unaff_XMM9_Da != 0.0)) {
    fVar14 = (unaff_RSI[1] - in_R10[1]) / (fVar13 - unaff_XMM9_Da);
    fVar13 = (*unaff_RSI - *in_R10) / (unaff_XMM10_Da - unaff_XMM8_Da);
    fVar15 = (fVar14 + fVar13) * 0.5;
    lVar8 = unaff_RDI;
    if (3 < lVar10) {
      lVar5 = (lVar10 - 4U >> 2) + 1;
      lVar8 = lVar5 * 4;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)(param_4 + 8) + 0x18);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 4 + lVar3) = *(float *)(unaff_RDI + 4 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + lVar3) = fVar13 * *(float *)(unaff_RDI + lVar3);
        *(float *)(unaff_RDI + 4 + lVar3) = fVar14 * *(float *)(unaff_RDI + 4 + lVar3);
        *(float *)(unaff_RDI + 8 + lVar3) = fVar15 * *(float *)(unaff_RDI + 8 + lVar3);
        *(float *)(unaff_RDI + lVar3) = *(float *)(unaff_RDI + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 4 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 4 + lVar3);
        lVar7 = *(int64_t *)(param_4 + 8);
        if (*(int *)(lVar7 + 0x38) != 0) {
          uVar4 = ((uint64_t *)(unaff_RDI + lVar3))[1];
          puVar1 = (uint64_t *)(*(int64_t *)(lVar7 + 0x40) + unaff_RDI);
          *puVar1 = *(uint64_t *)(unaff_RDI + lVar3);
          puVar1[1] = uVar4;
          lVar7 = *(int64_t *)(param_4 + 8);
        }
        lVar3 = *(int64_t *)(lVar7 + 0x18);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) - unaff_XMM8_Da;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = *(float *)(lVar3 + 0x14 + unaff_RDI) - unaff_XMM9_Da;
        *(float *)(lVar3 + 0x10 + unaff_RDI) = fVar13 * *(float *)(lVar3 + 0x10 + unaff_RDI);
        *(float *)(lVar3 + 0x14 + unaff_RDI) = fVar14 * *(float *)(lVar3 + 0x14 + unaff_RDI);
        *(float *)(lVar3 + 0x18 + unaff_RDI) = fVar15 * *(float *)(lVar3 + 0x18 + unaff_RDI);
        *(float *)(lVar3 + 0x10 + unaff_RDI) = *(float *)(lVar3 + 0x10 + unaff_RDI) + *in_R10;
        *(float *)(lVar3 + 0x14 + unaff_RDI) = in_R10[1] + *(float *)(lVar3 + 0x14 + unaff_RDI);
        lVar7 = *(int64_t *)(param_4 + 8);
        if (*(int *)(lVar7 + 0x38) != 0) {
          puVar1 = (uint64_t *)(lVar3 + 0x10 + unaff_RDI);
          uVar4 = puVar1[1];
          puVar2 = (uint64_t *)(*(int64_t *)(lVar7 + 0x40) + 0x10 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar7 = *(int64_t *)(param_4 + 8);
        }
        lVar3 = *(int64_t *)(lVar7 + 0x18);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x24 + lVar3) = *(float *)(unaff_RDI + 0x24 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x20 + lVar3) = fVar13 * *(float *)(unaff_RDI + 0x20 + lVar3);
        *(float *)(unaff_RDI + 0x24 + lVar3) = fVar14 * *(float *)(unaff_RDI + 0x24 + lVar3);
        *(float *)(unaff_RDI + 0x28 + lVar3) = fVar15 * *(float *)(unaff_RDI + 0x28 + lVar3);
        *(float *)(unaff_RDI + 0x20 + lVar3) = *(float *)(unaff_RDI + 0x20 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x24 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x24 + lVar3);
        lVar7 = *(int64_t *)(param_4 + 8);
        if (*(int *)(lVar7 + 0x38) != 0) {
          puVar1 = (uint64_t *)(unaff_RDI + 0x20 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (uint64_t *)(*(int64_t *)(lVar7 + 0x40) + 0x20 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          lVar7 = *(int64_t *)(param_4 + 8);
        }
        lVar3 = *(int64_t *)(lVar7 + 0x18);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) - unaff_XMM8_Da;
        *(float *)(unaff_RDI + 0x34 + lVar3) = *(float *)(unaff_RDI + 0x34 + lVar3) - unaff_XMM9_Da;
        *(float *)(unaff_RDI + 0x30 + lVar3) = fVar13 * *(float *)(unaff_RDI + 0x30 + lVar3);
        *(float *)(unaff_RDI + 0x34 + lVar3) = fVar14 * *(float *)(unaff_RDI + 0x34 + lVar3);
        *(float *)(unaff_RDI + 0x38 + lVar3) = fVar15 * *(float *)(unaff_RDI + 0x38 + lVar3);
        *(float *)(unaff_RDI + 0x30 + lVar3) = *(float *)(unaff_RDI + 0x30 + lVar3) + *in_R10;
        *(float *)(unaff_RDI + 0x34 + lVar3) = in_R10[1] + *(float *)(unaff_RDI + 0x34 + lVar3);
        if (*(int *)(*(int64_t *)(param_4 + 8) + 0x38) != 0) {
          puVar1 = (uint64_t *)(unaff_RDI + 0x30 + lVar3);
          uVar4 = puVar1[1];
          puVar2 = (uint64_t *)
                   (*(int64_t *)(*(int64_t *)(param_4 + 8) + 0x40) + 0x30 + unaff_RDI);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
        }
        unaff_RDI = unaff_RDI + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar8 < lVar10) {
      lVar5 = lVar8 << 4;
      lVar10 = lVar10 - lVar8;
      do {
        lVar8 = *(int64_t *)(*(int64_t *)(param_4 + 8) + 0x18);
        *(float *)(lVar5 + 8 + lVar8) = fVar15 * *(float *)(lVar5 + 8 + lVar8);
        fVar12 = (*(float *)(lVar5 + lVar8) - unaff_XMM8_Da) * fVar13;
        fVar11 = (*(float *)(lVar5 + 4 + lVar8) - unaff_XMM9_Da) * fVar14;
        *(float *)(lVar5 + lVar8) = fVar12;
        *(float *)(lVar5 + 4 + lVar8) = fVar11;
        *(float *)(lVar5 + lVar8) = fVar12 + *in_R10;
        *(float *)(lVar5 + 4 + lVar8) = fVar11 + in_R10[1];
        if (*(int *)(*(int64_t *)(param_4 + 8) + 0x38) != 0) {
          uVar4 = ((uint64_t *)(lVar5 + lVar8))[1];
          puVar1 = (uint64_t *)(*(int64_t *)(*(int64_t *)(param_4 + 8) + 0x40) + lVar5);
          *puVar1 = *(uint64_t *)(lVar5 + lVar8);
          puVar1[1] = uVar4;
        }
        lVar5 = lVar5 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    *(int8_t *)(param_4 + 0x30) = 1;
    *(int8_t *)(param_4 + 0x32) = 1;
  }
  return;
}






