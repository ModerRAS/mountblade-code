/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part435.c - 12 个函数

// 函数: void FUN_180505f80(int64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
void FUN_180505f80(int64_t *param_1,uint64_t param_2,int64_t param_3,int64_t param_4,
                  uint64_t param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  uint uVar16;
  int64_t lVar17;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int64_t lStack_48;
  int64_t lStack_40;
  int64_t lStack_38;
  int32_t uStack_30;
  
  lVar13 = param_4 * 2 + 2;
  if (lVar13 < param_3) {
    iVar3 = (int)param_1[1];
    lVar4 = *param_1;
    lVar17 = param_4;
    do {
      uVar12 = (int)lVar13 + iVar3 + -1;
      uVar10 = uVar12 >> 4;
      uVar16 = (int)lVar13 + iVar3;
      uVar11 = uVar16 >> 4;
      lVar5 = *(int64_t *)
               (*(int64_t *)(lVar4 + 8 + (uint64_t)uVar11 * 8) +
               (uint64_t)(uVar16 + uVar11 * -0x10) * 0x50);
      lVar6 = *(int64_t *)
               (*(int64_t *)(lVar4 + 8 + (uint64_t)uVar10 * 8) +
               (uint64_t)(uVar12 + uVar10 * -0x10) * 0x50);
      fVar1 = *(float *)(lVar5 + 0xca4);
      fVar2 = *(float *)(lVar6 + 0xca4);
      if (fVar1 == fVar2) {
        bVar7 = *(float *)(lVar5 + 0xc90) < *(float *)(lVar6 + 0xc90);
      }
      else {
        bVar7 = fVar1 < fVar2;
      }
      param_4 = lVar13 + -1;
      if (!bVar7) {
        param_4 = lVar13;
      }
      uVar11 = iVar3 + (int)param_4;
      uVar10 = uVar11 >> 4;
      plVar15 = (int64_t *)
                (*(int64_t *)(lVar4 + 8 + (uint64_t)uVar10 * 8) +
                (uint64_t)(uVar11 + uVar10 * -0x10) * 0x50);
      uVar11 = (int)lVar17 + iVar3;
      uVar10 = uVar11 >> 4;
      plVar14 = (int64_t *)
                (*(int64_t *)(lVar4 + 8 + (uint64_t)uVar10 * 8) +
                (uint64_t)(uVar11 + uVar10 * -0x10) * 0x50);
      if (plVar14 != plVar15) {
        plVar14[1] = *plVar14;
        lVar13 = *plVar14;
        *plVar14 = 0;
        lVar17 = plVar14[1];
        plVar14[1] = 0;
        lVar5 = plVar14[2];
        plVar14[2] = 0;
        lVar6 = plVar14[3];
        *(int *)(plVar14 + 3) = (int)plVar14[3];
        lStack_48 = *plVar14;
        *plVar14 = lVar13;
        lStack_40 = plVar14[1];
        plVar14[1] = lVar17;
        lStack_38 = plVar14[2];
        plVar14[2] = lVar5;
        uStack_30 = (int32_t)plVar14[3];
        *(int *)(plVar14 + 3) = (int)lVar6;
        if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lStack_48);
        }
        lVar13 = *plVar14;
        *plVar14 = *plVar15;
        *plVar15 = lVar13;
        lVar13 = plVar14[1];
        plVar14[1] = plVar15[1];
        plVar15[1] = lVar13;
        lVar13 = plVar14[2];
        plVar14[2] = plVar15[2];
        plVar15[2] = lVar13;
        lVar13 = plVar14[3];
        *(int *)(plVar14 + 3) = (int)plVar15[3];
        *(int *)(plVar15 + 3) = (int)lVar13;
        lStack_48 = 0;
      }
      lVar13 = plVar15[5];
      plVar14[4] = plVar15[4];
      plVar14[5] = lVar13;
      uVar8 = *(int32_t *)((int64_t)plVar15 + 0x34);
      lVar13 = plVar15[7];
      uVar9 = *(int32_t *)((int64_t)plVar15 + 0x3c);
      *(int *)(plVar14 + 6) = (int)plVar15[6];
      *(int32_t *)((int64_t)plVar14 + 0x34) = uVar8;
      *(int *)(plVar14 + 7) = (int)lVar13;
      *(int32_t *)((int64_t)plVar14 + 0x3c) = uVar9;
      uVar8 = *(int32_t *)((int64_t)plVar15 + 0x44);
      lVar13 = plVar15[9];
      uVar9 = *(int32_t *)((int64_t)plVar15 + 0x4c);
      *(int *)(plVar14 + 8) = (int)plVar15[8];
      *(int32_t *)((int64_t)plVar14 + 0x44) = uVar8;
      *(int *)(plVar14 + 9) = (int)lVar13;
      *(int32_t *)((int64_t)plVar14 + 0x4c) = uVar9;
      lVar13 = param_4 * 2 + 2;
      lVar17 = param_4;
    } while (lVar13 < param_3);
  }
  if (lVar13 == param_3) {
    uVar12 = (int)param_1[1] + -1 + (int)lVar13;
    uVar10 = uVar12 >> 4;
    lVar4 = *(int64_t *)(*param_1 + 8 + (uint64_t)uVar10 * 8);
    uVar16 = (int)param_1[1] + (int)param_4;
    uVar11 = uVar16 >> 4;
    lVar17 = (uint64_t)(uVar16 + uVar11 * -0x10) * 0x50;
    FUN_1805021f0(*(int64_t *)(*param_1 + 8 + (uint64_t)uVar11 * 8) + lVar17,
                  (uint64_t)(uVar12 + uVar10 * -0x10) * 0x50 + lVar4,lVar17,lVar4,
                  0xfffffffffffffffe);
    param_4 = lVar13 + -1;
  }
  uStack_58 = (int32_t)*param_1;
  uStack_54 = *(int32_t *)((int64_t)param_1 + 4);
  uStack_50 = (int32_t)param_1[1];
  uStack_4c = *(int32_t *)((int64_t)param_1 + 0xc);
  FUN_180506230(&uStack_58,param_2,param_4,param_5);
  return;
}



int64_t * FUN_180506230(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t *param_4)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  bool bVar7;
  int32_t uVar8;
  int32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint uVar13;
  int64_t lVar14;
  uint uVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t *plVar19;
  
  lVar18 = param_3 + -1;
  if (param_2 < param_3) {
    lVar10 = param_1[1];
    lVar3 = *param_1;
    do {
      lVar17 = lVar18 >> 1;
      uVar15 = (int)lVar17 + (int)lVar10;
      uVar13 = uVar15 >> 4;
      lVar14 = (uint64_t)(uVar15 + uVar13 * -0x10) * 0x50;
      lVar18 = *(int64_t *)(*(int64_t *)(lVar3 + 8 + (uint64_t)uVar13 * 8) + lVar14);
      fVar1 = *(float *)(lVar18 + 0xca4);
      fVar2 = *(float *)(*param_4 + 0xca4);
      if (fVar1 == fVar2) {
        bVar7 = *(float *)(lVar18 + 0xc90) < *(float *)(*param_4 + 0xc90);
      }
      else {
        bVar7 = fVar1 < fVar2;
      }
      if (!bVar7) break;
      plVar19 = (int64_t *)(*(int64_t *)(lVar3 + 8 + (uint64_t)uVar13 * 8) + lVar14);
      uVar15 = (int)param_3 + (int)lVar10;
      uVar13 = uVar15 >> 4;
      plVar16 = (int64_t *)
                (*(int64_t *)(lVar3 + 8 + (uint64_t)uVar13 * 8) +
                (uint64_t)(uVar15 + uVar13 * -0x10) * 0x50);
      if (plVar16 != plVar19) {
        plVar16[1] = *plVar16;
        lVar18 = *plVar16;
        *plVar16 = 0;
        lVar14 = plVar16[1];
        plVar16[1] = 0;
        lVar4 = plVar16[2];
        plVar16[2] = 0;
        lVar11 = plVar16[3];
        *(int *)(plVar16 + 3) = (int)plVar16[3];
        lVar5 = *plVar16;
        *plVar16 = lVar18;
        lVar18 = plVar16[1];
        plVar16[1] = lVar14;
        lVar6 = plVar16[2];
        plVar16[2] = lVar4;
        lVar12 = plVar16[3];
        *(int *)(plVar16 + 3) = (int)lVar11;
        if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(lVar5,lVar4,(int)lVar11,lVar14,0xfffffffffffffffe,lVar5,lVar18,lVar6,
                        (int)lVar12);
        }
        lVar18 = *plVar16;
        *plVar16 = *plVar19;
        *plVar19 = lVar18;
        lVar18 = plVar16[1];
        plVar16[1] = plVar19[1];
        plVar19[1] = lVar18;
        lVar18 = plVar16[2];
        plVar16[2] = plVar19[2];
        plVar19[2] = lVar18;
        lVar18 = plVar16[3];
        *(int *)(plVar16 + 3) = (int)plVar19[3];
        *(int *)(plVar19 + 3) = (int)lVar18;
      }
      lVar18 = plVar19[5];
      plVar16[4] = plVar19[4];
      plVar16[5] = lVar18;
      uVar8 = *(int32_t *)((int64_t)plVar19 + 0x34);
      lVar18 = plVar19[7];
      uVar9 = *(int32_t *)((int64_t)plVar19 + 0x3c);
      *(int *)(plVar16 + 6) = (int)plVar19[6];
      *(int32_t *)((int64_t)plVar16 + 0x34) = uVar8;
      *(int *)(plVar16 + 7) = (int)lVar18;
      *(int32_t *)((int64_t)plVar16 + 0x3c) = uVar9;
      lVar18 = plVar19[9];
      plVar16[8] = plVar19[8];
      plVar16[9] = lVar18;
      lVar18 = lVar17 + -1;
      param_3 = lVar17;
    } while (param_2 < lVar17);
  }
  uVar15 = (int)param_1[1] + (int)param_3;
  uVar13 = uVar15 >> 4;
  plVar16 = (int64_t *)
            (*(int64_t *)(*param_1 + 8 + (uint64_t)uVar13 * 8) +
            (uint64_t)(uVar15 + uVar13 * -0x10) * 0x50);
  if (plVar16 != param_4) {
    plVar16[1] = *plVar16;
    lVar18 = *plVar16;
    *plVar16 = 0;
    lVar3 = plVar16[1];
    plVar16[1] = 0;
    lVar10 = plVar16[2];
    plVar16[2] = 0;
    lVar4 = plVar16[3];
    *(int *)(plVar16 + 3) = (int)plVar16[3];
    lVar14 = *plVar16;
    *plVar16 = lVar18;
    lVar18 = plVar16[1];
    plVar16[1] = lVar3;
    lVar17 = plVar16[2];
    plVar16[2] = lVar10;
    lVar5 = plVar16[3];
    *(int *)(plVar16 + 3) = (int)lVar4;
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar14,(int)lVar4,lVar10,lVar3,0xfffffffffffffffe,lVar14,lVar18,lVar17,
                    (int)lVar5);
    }
    lVar18 = *plVar16;
    *plVar16 = *param_4;
    *param_4 = lVar18;
    lVar18 = plVar16[1];
    plVar16[1] = param_4[1];
    param_4[1] = lVar18;
    lVar18 = plVar16[2];
    plVar16[2] = param_4[2];
    param_4[2] = lVar18;
    lVar18 = plVar16[3];
    *(int *)(plVar16 + 3) = (int)param_4[3];
    *(int *)(param_4 + 3) = (int)lVar18;
  }
  lVar18 = param_4[5];
  plVar16[4] = param_4[4];
  plVar16[5] = lVar18;
  lVar18 = param_4[7];
  plVar16[6] = param_4[6];
  plVar16[7] = lVar18;
  lVar18 = param_4[9];
  plVar16[8] = param_4[8];
  plVar16[9] = lVar18;
  return plVar16;
}



uint64_t * FUN_180506460(uint64_t *param_1,uint64_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar1 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar2 = *(int32_t *)(param_2 + 5);
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((int64_t)param_1 + 0x24) = uVar1;
  *(int32_t *)(param_1 + 5) = uVar2;
  *(int32_t *)((int64_t)param_1 + 0x2c) = uVar3;
  param_1[6] = param_2[6];
  FUN_18033dc50(param_1 + 7,param_2 + 7);
  return param_1;
}



uint64_t * FUN_1805064a0(uint64_t *param_1,uint64_t *param_2)

{
  int iVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int iVar7;
  int64_t lVar8;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar3 = *(int32_t *)(param_2 + 5);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((int64_t)param_1 + 0x24) = uVar2;
  *(int32_t *)(param_1 + 5) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x2c) = uVar4;
  param_1[6] = param_2[6];
  DataStructureManager(param_1 + 7,0x30,4,FUN_1801c2890,FUN_18004a130);
  iVar1 = *(int *)(param_2 + 0x1f);
  *(int *)(param_1 + 0x1f) = iVar1;
  iVar7 = 0;
  if (0 < iVar1) {
    puVar6 = param_1 + 0xb;
    lVar8 = (int64_t)param_2 + (0x38 - (int64_t)(param_1 + 7));
    do {
      FUN_18005d190(puVar6 + -4,lVar8 + -0x20 + (int64_t)puVar6);
      *(int32_t *)puVar6 = *(int32_t *)(lVar8 + (int64_t)puVar6);
      *(int32_t *)((int64_t)puVar6 + 4) = *(int32_t *)(lVar8 + 4 + (int64_t)puVar6);
      *(int8_t *)(puVar6 + 1) = *(int8_t *)(lVar8 + 8 + (int64_t)puVar6);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 6;
    } while (iVar7 < *(int *)(param_1 + 0x1f));
  }
  *(int *)(param_2 + 0x1f) = 0;
  return param_1;
}



uint64_t FUN_180506580(uint64_t param_1,uint64_t param_2)

{
  FUN_1805065c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}





// 函数: void FUN_1805065c0(uint64_t *param_1)
void FUN_1805065c0(uint64_t *param_1)

{
  *param_1 = &unknown_var_5224_ptr;
  param_1[7] = &system_data_buffer_ptr;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[8] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[7] = &system_state_ptr;
  param_1[1] = &system_data_buffer_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &system_state_ptr;
  return;
}





// 函数: void FUN_180506660(int64_t *param_1)
void FUN_180506660(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  uint64_t uVar4;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_180506660(lVar2);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar2);
  }
  uVar4 = 0;
  param_1[1] = 0;
  plVar1 = param_1 + 2;
  lVar2 = *plVar1;
  uVar5 = uVar4;
  if (param_1[3] - lVar2 >> 3 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar5 + lVar2);
      if (lVar2 != 0) {
        FUN_180506660(lVar2);
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar2);
      }
      *(uint64_t *)(uVar5 + *plVar1) = 0;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
      lVar2 = *plVar1;
      uVar5 = uVar5 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(param_1[3] - lVar2 >> 3));
  }
  param_1[3] = lVar2;
  if ((int64_t *)param_1[0x10] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x10] + 0x38))();
  }
  if ((int64_t *)param_1[0xf] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xf] + 0x38))();
  }
  if ((int64_t *)param_1[0xe] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xe] + 0x38))();
  }
  if ((int64_t *)param_1[0xd] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xd] + 0x38))();
  }
  if ((int64_t *)param_1[0xc] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xc] + 0x38))();
  }
  if ((int64_t *)param_1[0xb] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xb] + 0x38))();
  }
  if (*plVar1 == 0) {
    if ((int64_t *)*param_1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_1 + 0x38))();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_1805067a0(float *param_1,int32_t *param_2)
void FUN_1805067a0(float *param_1,int32_t *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  
  uStack_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_54 = param_2[5];
  uStack_58 = param_2[4];
  uStack_48 = param_2[8];
  uStack_50 = param_2[6];
  uStack_40 = param_2[10];
  uStack_44 = param_2[9];
  uStack_34 = param_2[0xd];
  uStack_38 = param_2[0xc];
  uStack_30 = param_2[0xe];
  uStack_2c = 0x3f800000;
  uStack_5c = 0;
  uStack_4c = 0;
  uStack_3c = 0;
  FUN_180084760(&uStack_68,&fStack_b8);
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  param_1[3] = 1.0;
  *param_1 = fVar2 * fStack_b8 + fVar1 * fStack_a8 + fVar3 * fStack_98 + fStack_88;
  param_1[1] = fVar2 * fStack_b4 + fVar1 * fStack_a4 + fVar3 * fStack_94 + fStack_84;
  param_1[2] = fVar2 * fStack_b0 + fVar1 * fStack_a0 + fVar3 * fStack_90 + fStack_80;
  param_1[3] = fVar2 * fStack_ac + fVar1 * fStack_9c + fVar3 * fStack_8c + fStack_7c;
  param_1[7] = 1.0;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  param_1[4] = fVar1 * fStack_b8 + fVar2 * fStack_a8 + fVar3 * fStack_98 + fStack_88;
  param_1[5] = fVar1 * fStack_b4 + fVar2 * fStack_a4 + fVar3 * fStack_94 + fStack_84;
  param_1[6] = fVar1 * fStack_b0 + fVar2 * fStack_a0 + fVar3 * fStack_90 + fStack_80;
  param_1[7] = fVar1 * fStack_ac + fVar2 * fStack_9c + fVar3 * fStack_8c + fStack_7c;
  return;
}





// 函数: void FUN_180506a80(uint64_t param_1,int32_t param_2)
void FUN_180506a80(uint64_t param_1,int32_t param_2)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController(param_2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180506ae0(int64_t *param_1,int param_2)
void FUN_180506ae0(int64_t *param_1,int param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  uVar3 = (uint64_t)param_2;
  lVar2 = param_1[4];
  if (uVar3 < (uint64_t)(param_1[5] - lVar2 >> 3)) {
    *(int32_t *)(lVar2 + uVar3 * 8) = 0xffffffff;
    *(int16_t *)(lVar2 + 4 + uVar3 * 8) = 0;
  }
  lVar2 = param_1[1];
  lVar4 = *param_1;
  param_2 = param_2 * 0x10;
  if ((uint64_t)(int64_t)param_2 < (uint64_t)(lVar2 - lVar4 >> 5)) {
    puVar1 = (uint64_t *)(uVar3 * 0x200 + lVar4);
    *(uint64_t *)((int64_t)puVar1 + 0xc) = render_system_config;
    *puVar1 = 0;
    *(uint64_t *)((int64_t)puVar1 + 0x14) = render_system_config;
    *(int16_t *)(puVar1 + 1) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 1) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x2c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x20 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x34 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x28 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 2) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x4c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x40 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x54 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x48 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 3) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x6c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x60 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x74 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x68 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 4) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x8c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x80 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x94 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x88 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 5) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0xac + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0xa0 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0xb4 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0xa8 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 6) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0xcc + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0xc0 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0xd4 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 200 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 7) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0xec + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0xe0 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0xf4 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0xe8 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 8) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x10c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x100 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x114 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x108 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 9) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 300 + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x120 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x134 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x128 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 10) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x14c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x140 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x154 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x148 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 0xb) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x16c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x160 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x174 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x168 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 0xc) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x18c + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x180 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x194 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x188 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 0xd) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x1ac + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x1a0 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x1b4 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x1a8 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 0xe) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x1cc + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x1c0 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 0x1d4 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x1c8 + lVar4) = 0x101;
    lVar2 = param_1[1];
    lVar4 = *param_1;
  }
  if ((uint64_t)(int64_t)(param_2 + 0xf) < (uint64_t)(lVar2 - lVar4 >> 5)) {
    lVar2 = uVar3 * 0x200;
    *(uint64_t *)(lVar2 + 0x1ec + lVar4) = render_system_config;
    *(uint64_t *)(lVar2 + 0x1e0 + lVar4) = 0;
    *(uint64_t *)(lVar2 + 500 + lVar4) = render_system_config;
    *(int16_t *)(lVar2 + 0x1e8 + lVar4) = 0x101;
  }
  return;
}





// 函数: void FUN_180507030(int64_t *param_1)
void FUN_180507030(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x228) {
    FUN_1805070c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_1805070a0(int64_t *param_1)
void FUN_1805070a0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x228) {
    FUN_1805070c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_1805070c0(int64_t param_1)
void FUN_1805070c0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  if (*(char *)(param_1 + 0x224) == '\0') {
    *(uint64_t *)(param_1 + 0x208) = *(uint64_t *)(param_1 + 0x200);
    *(int8_t *)(param_1 + 0x224) = 1;
  }
  *(int32_t *)(param_1 + 0x220) = 0;
  puVar2 = *(uint64_t **)(param_1 + 0x200);
  if (puVar2 != (uint64_t *)0x0) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180507120(int64_t param_1)
void FUN_180507120(int64_t param_1)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  
  uVar2 = 0;
  plVar3 = (int64_t *)(param_1 + 8);
  do {
    if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lVar1 = (int64_t)(int)uVar2;
    plVar3 = plVar3 + 1;
    uVar2 = uVar2 + 1;
    *(uint64_t *)(param_1 + 8 + lVar1 * 8) = 0;
  } while (uVar2 < 0xff);
  return;
}



uint64_t * FUN_180507180(uint64_t *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 3;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(int32_t *)(param_1 + 0x4f) = 3;
  *(int8_t *)((int64_t)param_1 + 0x284) = 1;
  *(int32_t *)(param_1 + 0x50) = 0;
  LOCK();
  *(int32_t *)(param_1 + 0x51) = 0;
  UNLOCK();
  uVar2 = uVar1;
  do {
    param_1[(int64_t)(int)uVar2 + 0x52] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + (int64_t)(int)uVar2 + 0xa88) = 1;
    UNLOCK();
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xff);
  LOCK();
  *(int32_t *)(param_1 + 0x171) = 0;
  UNLOCK();
  do {
    param_1[(int64_t)(int)uVar1 + 0x172] = 0;
    LOCK();
    *(int8_t *)((int64_t)param_1 + (int64_t)(int)uVar1 + 5000) = 1;
    UNLOCK();
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xff);
  return param_1;
}





// 函数: void FUN_180507290(int32_t *param_1)
void FUN_180507290(int32_t *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x40c00000;
  *(int8_t *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(int8_t *)(param_1 + 7) = 0;
                    // WARNING: Subroutine does not return
  memset((int64_t)param_1 + 0x1d,0,0x1ff);
}





// 函数: void FUN_180507360(int64_t param_1,int64_t param_2)
void FUN_180507360(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x590);
  if (plVar1 != (int64_t *)0x0) {
    if (*(code **)(*plVar1 + 0xe0) == (code *)&unknown_var_2640_ptr) {
      plVar1[0x49c] = 0;
      plVar1[0x49d] = 0;
    }
    else {
      (**(code **)(*plVar1 + 0xe0))();
    }
    if ((*(uint *)(param_1 + 0x56c) & 0x800) != 0) {
      lVar2 = *(int64_t *)(param_1 + 0x590);
      *(uint64_t *)(lVar2 + 0x3440) = 0;
      *(uint64_t *)(lVar2 + 0x3448) = 0;
    }
  }
  *(int64_t *)(param_1 + 0x590) = param_2;
  if (param_2 != 0) {
    *(int64_t *)(param_2 + 0x24e0) = param_1;
    *(code **)(param_2 + 0x24e8) = FUN_1805298f0;
  }
  if (*(char *)(param_1 + 0x984) != '\0') {
    func_0x0001805afbb0(*(uint64_t *)(param_1 + 0x738),*(uint64_t *)(param_1 + 0x590));
    if (*(int64_t *)(param_1 + 0x590) == 0) {
      lVar2 = *(int64_t *)(param_1 + 0x738);
      *(int32_t *)(lVar2 + 0x94) = 0xffffffff;
      *(uint64_t *)(lVar2 + 0x44) = 0;
      *(uint64_t *)(lVar2 + 0x60) = 0;
      *(uint64_t *)(lVar2 + 0x68) = 0;
      *(uint64_t *)(lVar2 + 0x70) = 0xffffffffffffffff;
      *(uint64_t *)(lVar2 + 0x78) = 0;
      *(int32_t *)(lVar2 + 0x80) = 0xffffffff;
      *(int8_t *)(lVar2 + 0x84) = 0xff;
      *(uint64_t *)(lVar2 + 0x88) = 0;
      *(int32_t *)(lVar2 + 0x90) = 0;
    }
  }
  return;
}





