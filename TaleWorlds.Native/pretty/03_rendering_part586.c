#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part586.c - 2 个函数

// 函数: void FUN_18058d360(int64_t *param_1)
void FUN_18058d360(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char acStackX_18 [8];
  int64_t *plStackX_20;
  uint64_t uStack_b0;
  uint64_t uStack_a8;
  
  uStack_a8 = 0xfffffffffffffffe;
  if (*(code **)(*param_1 + 0xe8) == (code *)&unknown_var_2608_ptr) {
    if ((param_1[0x49c] == 0) && (param_1[0x49d] == 0)) {
      cVar5 = '\0';
    }
    else {
      cVar5 = '\x01';
    }
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0xe8))();
  }
  if ((cVar5 != '\0') && (*(char *)(render_system_data_config + 0x210) == '\0')) {
    iVar9 = 0;
    plVar7 = param_1 + 0x1f;
    do {
      plVar1 = (int64_t *)*plVar7;
      lVar2 = *plVar1;
      if (((lVar2 != 0) && (0.0 < *(float *)(plVar1 + 2))) &&
         (0.0 < *(float *)(lVar2 + 0x6c) || *(float *)(lVar2 + 0x6c) == 0.0)) {
        fVar13 = *(float *)(plVar1 + 6);
        fVar14 = *(float *)(plVar1 + 1);
        if (fVar13 != fVar14) {
          fVar12 = *(float *)(plVar1 + 8);
          fVar11 = fVar13;
          if (fVar13 <= fVar12) {
            fVar11 = 0.0;
          }
          if ((fVar12 <= 0.0) || (fVar13 != fVar12)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            fVar11 = 0.0;
          }
          fVar13 = fVar14;
          if (fVar14 <= fVar11) {
            fVar13 = fVar11;
          }
          if (fVar11 <= fVar14) {
            fVar14 = fVar11;
          }
          if (fVar13 - fVar14 <= 0.5) {
            iVar8 = 3;
            pfVar10 = (float *)(lVar2 + 0x78);
            do {
              fVar12 = *pfVar10;
              if ((fVar12 < fVar14) || (fVar13 <= fVar12)) {
                if ((1.0 < fVar13) &&
                   ((*(byte *)((int64_t)plVar7 + (int64_t)(int)plVar7[1] * 0x48 + -0x14) & 4) != 0
                   )) {
                  fVar14 = 0.0;
                  fVar13 = fVar13 + -1.0;
                  if ((0.0 <= fVar12) && (fVar12 < fVar13)) goto LAB_18058d500;
                }
              }
              else {
LAB_18058d500:
                if (bVar4) {
                  fVar12 = (*(float *)(lVar2 + 0x188) * (fVar13 - fVar12)) /
                           *(float *)(*plVar7 + 0x2c);
                }
                else {
                  fVar12 = 0.0;
                }
                plStackX_20 = (int64_t *)0x0;
                acStackX_18[0] = '\0';
                (*(code *)param_1[0x49d])
                          (param_1[0x49c],iVar9,iVar8,fVar12,lVar2,&plStackX_20,acStackX_18);
                if (acStackX_18[0] != '\0') {
                  if ((plStackX_20 == (int64_t *)0x0) ||
                     (cVar5 = (**(code **)(*plStackX_20 + 0xd8))(), cVar5 == '\0')) {
                    uStack_b0 = 0;
                    FUN_180434290(plVar7 + -1,&uStack_b0);
                  }
                  else {
                    lVar6 = (int64_t)(int)plVar7[1];
                    if (((int64_t *)plVar7[lVar6 * 9] != (int64_t *)0x0) &&
                       ((cVar5 = (**(code **)(*(int64_t *)plVar7[lVar6 * 9] + 0xd8))(),
                        cVar5 != '\0' &&
                        (cVar5 = (**(code **)(*(int64_t *)plVar7[lVar6 * 9] + 0x80))(),
                        cVar5 != '\0')))) {
                      (**(code **)(*(int64_t *)plVar7[lVar6 * 9] + 0x68))();
                    }
                    plVar1 = plStackX_20;
                    if (plStackX_20 != (int64_t *)0x0) {
                      (**(code **)(*plStackX_20 + 0x28))(plStackX_20);
                    }
                    plVar3 = (int64_t *)plVar7[lVar6 * 9];
                    plVar7[lVar6 * 9] = (int64_t)plVar1;
                    if (plVar3 != (int64_t *)0x0) {
                      (**(code **)(*plVar3 + 0x38))();
                    }
                  }
                }
                if (plStackX_20 != (int64_t *)0x0) {
                  (**(code **)(*plStackX_20 + 0x38))();
                }
              }
              pfVar10 = pfVar10 + -1;
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
          }
        }
      }
      iVar9 = iVar9 + 1;
      plVar7 = plVar7 + 0x236;
    } while (iVar9 < 2);
  }
  return;
}



uint64_t
FUN_18058d6b0(int *param_1,int param_2,int64_t param_3,uint64_t param_4,int param_5,int param_6,
             int param_7,int param_8,int param_9,int param_10,int8_t param_11,char param_12)

{
  uint uVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  uVar4 = 0;
  uVar5 = uVar4;
  if (param_3 != 0) {
    uVar5 = *(uint64_t *)(param_3 + 0x1d0);
  }
  if ((char)param_4 != '\0') {
    uVar5 = 0;
  }
  if ((param_12 == '\0') && (*param_1 != -1)) {
    uVar3 = uVar4;
    if (*(int64_t *)(param_1 + 4) != 0) {
      uVar3 = *(uint64_t *)(*(int64_t *)(param_1 + 4) + 0x1d0);
    }
    bVar2 = (byte)uVar3;
    if ((byte)*(uint64_t *)(param_1 + 8) != 0) {
      bVar2 = (byte)*(uint64_t *)(param_1 + 8);
    }
    if (((uVar5 | param_4) & 0xff) < (uint64_t)bVar2) {
      return 0;
    }
  }
  *param_1 = param_2;
  uVar1 = param_1[2] + 1U & 0x8000000f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
  }
  if (param_2 != -1) {
    uVar4 = param_4;
  }
  param_1[10] = param_5;
  param_1[0xb] = param_6;
  param_1[2] = uVar1;
  param_1[0xc] = param_7;
  param_1[0xd] = param_8;
  *(uint64_t *)(param_1 + 8) = uVar4;
  *(int8_t *)(param_1 + 0x10) = param_11;
  param_1[0xe] = param_9;
  param_1[0xf] = param_10;
  *(int64_t *)(param_1 + 4) = param_3;
  return 1;
}



uint64_t FUN_18058d7f0(int64_t param_1,int param_2,float param_3)

{
  int64_t lVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  lVar1 = *(int64_t *)(param_1 + 8);
  for (piVar2 = *(int **)(lVar1 + ((uint64_t)(int64_t)param_2 %
                                  (uint64_t)*(uint *)(param_1 + 0x10)) * 8);
      (piVar3 = piVar4, piVar2 != (int *)0x0 && (piVar3 = piVar2, param_2 != *piVar2));
      piVar2 = *(int **)(piVar2 + 0x18)) {
  }
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(lVar1 + *(int64_t *)(param_1 + 0x10) * 8);
  }
  if (piVar3 != *(int **)(lVar1 + *(int64_t *)(param_1 + 0x10) * 8)) {
    piVar4 = piVar3 + 2;
  }
  if (0.9999999 <= param_3) {
    param_3 = 0.9999999;
  }
  return *(uint64_t *)(piVar4 + (int64_t)(int)(param_3 * 10.0) * 2 + 2);
}



int64_t * FUN_18058d890(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(param_1 + 0x5f0);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18058d930(int64_t *param_1,int64_t param_2)
void FUN_18058d930(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t lVar25;
  uint64_t *puVar26;
  uint64_t *puVar27;
  int64_t lVar28;
  uint64_t uVar29;
  uint uVar30;
  uint64_t uVar31;
  
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 0x30);
  uVar29 = (*(int64_t *)(param_2 + 0xd8) - *(int64_t *)(param_2 + 0xd0)) / 0xa0;
  lVar25 = param_1[0x1a];
  uVar31 = (param_1[0x1b] - lVar25) / 0xa0;
  if (uVar31 < uVar29) {
    lVar28 = uVar29 - uVar31;
    FUN_1805906f0(param_1 + 0x1a,lVar28,lVar28,lVar25,0xfffffffffffffffe);
  }
  else {
    param_1[0x1b] = uVar29 * 0xa0 + lVar25;
  }
  uVar29 = 0;
  uVar31 = uVar29;
  if ((*(int64_t *)(param_2 + 0xd8) - *(int64_t *)(param_2 + 0xd0)) / 0xa0 != 0) {
    do {
      puVar26 = (uint64_t *)(*(int64_t *)(param_2 + 0xd0) + uVar29);
      uVar6 = puVar26[1];
      uVar7 = puVar26[2];
      uVar8 = puVar26[3];
      uVar9 = puVar26[4];
      uVar10 = puVar26[5];
      uVar11 = puVar26[6];
      uVar12 = puVar26[7];
      uVar13 = puVar26[8];
      uVar14 = puVar26[9];
      uVar15 = puVar26[10];
      uVar16 = puVar26[0xb];
      uVar17 = puVar26[0xc];
      uVar18 = puVar26[0xd];
      uVar19 = puVar26[0xe];
      uVar20 = puVar26[0xf];
      uVar21 = puVar26[0x10];
      uVar22 = puVar26[0x11];
      uVar23 = puVar26[0x12];
      uVar24 = puVar26[0x13];
      puVar27 = (uint64_t *)(param_1[0x1a] + uVar29);
      *puVar27 = *puVar26;
      puVar27[1] = uVar6;
      puVar27[2] = uVar7;
      puVar27[3] = uVar8;
      puVar27[4] = uVar9;
      puVar27[5] = uVar10;
      puVar27[6] = uVar11;
      puVar27[7] = uVar12;
      puVar27[8] = uVar13;
      puVar27[9] = uVar14;
      puVar27[10] = uVar15;
      puVar27[0xb] = uVar16;
      puVar27[0xc] = uVar17;
      puVar27[0xd] = uVar18;
      puVar27[0xe] = uVar19;
      puVar27[0xf] = uVar20;
      puVar27[0x10] = uVar21;
      puVar27[0x11] = uVar22;
      puVar27[0x12] = uVar23;
      puVar27[0x13] = uVar24;
      uVar30 = (int)uVar31 + 1;
      uVar29 = uVar29 + 0xa0;
      uVar31 = (uint64_t)uVar30;
    } while ((uint64_t)(int64_t)(int)uVar30 <
             (uint64_t)((*(int64_t *)(param_2 + 0xd8) - *(int64_t *)(param_2 + 0xd0)) / 0xa0));
  }
  *(int16_t *)((int64_t)param_1 + 10) = *(int16_t *)(param_2 + 10);
  *(int32_t *)(param_1 + 0x17) = *(int32_t *)(param_2 + 0xb8);
  *(int32_t *)((int64_t)param_1 + 0xbc) = *(int32_t *)(param_2 + 0xbc);
  *(int8_t *)((int64_t)param_1 + 0xcc) = *(int8_t *)(param_2 + 0xcc);
  *(int32_t *)(param_1 + 10) = *(int32_t *)(param_2 + 0x50);
  *(int32_t *)((int64_t)param_1 + 0x4c) = *(int32_t *)(param_2 + 0x4c);
  uVar3 = *(int32_t *)(param_2 + 0x58);
  uVar4 = *(int32_t *)(param_2 + 0x5c);
  uVar5 = *(int32_t *)(param_2 + 0x60);
  *(int32_t *)((int64_t)param_1 + 0x54) = *(int32_t *)(param_2 + 0x54);
  *(int32_t *)(param_1 + 0xb) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x5c) = uVar4;
  *(int32_t *)(param_1 + 0xc) = uVar5;
  *(int32_t *)(param_1 + 9) = *(int32_t *)(param_2 + 0x48);
  *(int32_t *)(param_1 + 0x19) = *(int32_t *)(param_2 + 200);
  plVar1 = *(int64_t **)(param_2 + 0x38);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = (int64_t *)param_1[7];
  param_1[7] = (int64_t)plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (*(int64_t *)(param_2 + 0x40) == 0) {
    param_1[8] = 0;
  }
  else {
    if (param_1[8] == 0) {
      lVar25 = FUN_18062b1e0(system_memory_pool_ptr,0xa8,8,3);
                    // WARNING: Subroutine does not return
      memset(lVar25 + 0x18,0,0x90);
    }
    FUN_1804efac0(param_1[8]);
  }
  lVar25 = *param_1;
  if (lVar25 == 0) {
    *param_1 = 0;
    *(int32_t *)((int64_t)param_1 + 0x34) = *(int32_t *)(param_2 + 0x34);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_2 + 0xc0);
    *(int32_t *)((int64_t)param_1 + 0xc4) = *(int32_t *)(param_2 + 0xc4);
    uVar6 = *(uint64_t *)(param_2 + 0x6c);
    *(uint64_t *)((int64_t)param_1 + 100) = *(uint64_t *)(param_2 + 100);
    *(uint64_t *)((int64_t)param_1 + 0x6c) = uVar6;
    uVar6 = *(uint64_t *)(param_2 + 0x7c);
    *(uint64_t *)((int64_t)param_1 + 0x74) = *(uint64_t *)(param_2 + 0x74);
    *(uint64_t *)((int64_t)param_1 + 0x7c) = uVar6;
    uVar3 = *(int32_t *)(param_2 + 0x88);
    uVar4 = *(int32_t *)(param_2 + 0x8c);
    uVar5 = *(int32_t *)(param_2 + 0x90);
    *(int32_t *)((int64_t)param_1 + 0x84) = *(int32_t *)(param_2 + 0x84);
    *(int32_t *)(param_1 + 0x11) = uVar3;
    *(int32_t *)((int64_t)param_1 + 0x8c) = uVar4;
    *(int32_t *)(param_1 + 0x12) = uVar5;
    uVar3 = *(int32_t *)(param_2 + 0x98);
    uVar4 = *(int32_t *)(param_2 + 0x9c);
    uVar5 = *(int32_t *)(param_2 + 0xa0);
    *(int32_t *)((int64_t)param_1 + 0x94) = *(int32_t *)(param_2 + 0x94);
    *(int32_t *)(param_1 + 0x13) = uVar3;
    *(int32_t *)((int64_t)param_1 + 0x9c) = uVar4;
    *(int32_t *)(param_1 + 0x14) = uVar5;
    *(int16_t *)(param_1 + 1) = *(int16_t *)(param_2 + 8);
    FUN_18058dd10(param_1 + 0x20,param_2 + 0x100);
    *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(param_2 + 0xf0);
    *(int32_t *)((int64_t)param_1 + 0xa4) = *(int32_t *)(param_2 + 0xa4);
    param_1[0x1f] = 0;
    return;
  }
  FUN_18058f420(lVar25);
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar25);
}



int32_t * FUN_18058dd10(int32_t *param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  plVar1 = *(int64_t **)(param_2 + 8);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 8);
  *(int64_t **)(param_1 + 8) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 10);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 10);
  *(int64_t **)(param_1 + 10) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 0xc);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0xc);
  *(int64_t **)(param_1 + 0xc) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_2 + 0xe);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0xe);
  *(int64_t **)(param_1 + 0xe) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x10) = *(int8_t *)(param_2 + 0x10);
  *(int8_t *)((int64_t)param_1 + 0x41) = *(int8_t *)((int64_t)param_2 + 0x41);
  *(int8_t *)((int64_t)param_1 + 0x42) = *(int8_t *)((int64_t)param_2 + 0x42);
  *(int8_t *)((int64_t)param_1 + 0x43) = *(int8_t *)((int64_t)param_2 + 0x43);
  *(int8_t *)(param_1 + 0x11) = *(int8_t *)(param_2 + 0x11);
  *(int8_t *)((int64_t)param_1 + 0x45) = *(int8_t *)((int64_t)param_2 + 0x45);
  *(int8_t *)((int64_t)param_1 + 0x46) = *(int8_t *)((int64_t)param_2 + 0x46);
  *(int8_t *)((int64_t)param_1 + 0x47) = *(int8_t *)((int64_t)param_2 + 0x47);
  *(int8_t *)(param_1 + 0x12) = *(int8_t *)(param_2 + 0x12);
  *(int8_t *)((int64_t)param_1 + 0x49) = *(int8_t *)((int64_t)param_2 + 0x49);
  *(int8_t *)((int64_t)param_1 + 0x4a) = *(int8_t *)((int64_t)param_2 + 0x4a);
  *(int8_t *)((int64_t)param_1 + 0x4b) = *(int8_t *)((int64_t)param_2 + 0x4b);
  *(int8_t *)(param_1 + 0x13) = *(int8_t *)(param_2 + 0x13);
  *(int8_t *)((int64_t)param_1 + 0x4d) = *(int8_t *)((int64_t)param_2 + 0x4d);
  *(int8_t *)((int64_t)param_1 + 0x4e) = *(int8_t *)((int64_t)param_2 + 0x4e);
  *(int8_t *)((int64_t)param_1 + 0x4f) = *(int8_t *)((int64_t)param_2 + 0x4f);
  *(int8_t *)(param_1 + 0x14) = *(int8_t *)(param_2 + 0x14);
  *(int8_t *)((int64_t)param_1 + 0x51) = *(int8_t *)((int64_t)param_2 + 0x51);
  *(int8_t *)((int64_t)param_1 + 0x52) = *(int8_t *)((int64_t)param_2 + 0x52);
  *(int8_t *)((int64_t)param_1 + 0x53) = *(int8_t *)((int64_t)param_2 + 0x53);
  *(int8_t *)(param_1 + 0x15) = *(int8_t *)(param_2 + 0x15);
  *(int8_t *)((int64_t)param_1 + 0x55) = *(int8_t *)((int64_t)param_2 + 0x55);
  *(int8_t *)((int64_t)param_1 + 0x56) = *(int8_t *)((int64_t)param_2 + 0x56);
  *(int8_t *)((int64_t)param_1 + 0x57) = *(int8_t *)((int64_t)param_2 + 0x57);
  *(int8_t *)(param_1 + 0x16) = *(int8_t *)(param_2 + 0x16);
  *(int8_t *)((int64_t)param_1 + 0x59) = *(int8_t *)((int64_t)param_2 + 0x59);
  *(int8_t *)((int64_t)param_1 + 0x5a) = *(int8_t *)((int64_t)param_2 + 0x5a);
  *(int8_t *)((int64_t)param_1 + 0x5b) = *(int8_t *)((int64_t)param_2 + 0x5b);
  *(int8_t *)(param_1 + 0x17) = *(int8_t *)(param_2 + 0x17);
  *(int8_t *)((int64_t)param_1 + 0x5d) = *(int8_t *)((int64_t)param_2 + 0x5d);
  *(int8_t *)((int64_t)param_1 + 0x5e) = *(int8_t *)((int64_t)param_2 + 0x5e);
  *(int8_t *)((int64_t)param_1 + 0x5f) = *(int8_t *)((int64_t)param_2 + 0x5f);
  *(int8_t *)(param_1 + 0x18) = *(int8_t *)(param_2 + 0x18);
  *(int8_t *)((int64_t)param_1 + 0x61) = *(int8_t *)((int64_t)param_2 + 0x61);
  *(int8_t *)((int64_t)param_1 + 0x62) = *(int8_t *)((int64_t)param_2 + 0x62);
  *(int8_t *)((int64_t)param_1 + 99) = *(int8_t *)((int64_t)param_2 + 99);
  *(int8_t *)(param_1 + 0x19) = *(int8_t *)(param_2 + 0x19);
  *(int8_t *)((int64_t)param_1 + 0x65) = *(int8_t *)((int64_t)param_2 + 0x65);
  *(int8_t *)((int64_t)param_1 + 0x66) = *(int8_t *)((int64_t)param_2 + 0x66);
  *(int8_t *)((int64_t)param_1 + 0x67) = *(int8_t *)((int64_t)param_2 + 0x67);
  *(int8_t *)(param_1 + 0x1a) = *(int8_t *)(param_2 + 0x1a);
  *(int8_t *)((int64_t)param_1 + 0x69) = *(int8_t *)((int64_t)param_2 + 0x69);
  *(int8_t *)((int64_t)param_1 + 0x6a) = *(int8_t *)((int64_t)param_2 + 0x6a);
  *(int8_t *)((int64_t)param_1 + 0x6b) = *(int8_t *)((int64_t)param_2 + 0x6b);
  *(int8_t *)(param_1 + 0x1b) = *(int8_t *)(param_2 + 0x1b);
  *(int8_t *)((int64_t)param_1 + 0x6d) = *(int8_t *)((int64_t)param_2 + 0x6d);
  *(int8_t *)((int64_t)param_1 + 0x6e) = *(int8_t *)((int64_t)param_2 + 0x6e);
  *(int8_t *)((int64_t)param_1 + 0x6f) = *(int8_t *)((int64_t)param_2 + 0x6f);
  *(int8_t *)(param_1 + 0x1c) = *(int8_t *)(param_2 + 0x1c);
  *(int8_t *)((int64_t)param_1 + 0x71) = *(int8_t *)((int64_t)param_2 + 0x71);
  *(int8_t *)((int64_t)param_1 + 0x72) = *(int8_t *)((int64_t)param_2 + 0x72);
  *(int8_t *)((int64_t)param_1 + 0x73) = *(int8_t *)((int64_t)param_2 + 0x73);
  *(int8_t *)(param_1 + 0x1d) = *(int8_t *)(param_2 + 0x1d);
  *(int8_t *)((int64_t)param_1 + 0x75) = *(int8_t *)((int64_t)param_2 + 0x75);
  *(int8_t *)((int64_t)param_1 + 0x76) = *(int8_t *)((int64_t)param_2 + 0x76);
  *(int8_t *)((int64_t)param_1 + 0x77) = *(int8_t *)((int64_t)param_2 + 0x77);
  *(int8_t *)(param_1 + 0x1e) = *(int8_t *)(param_2 + 0x1e);
  *(int8_t *)((int64_t)param_1 + 0x79) = *(int8_t *)((int64_t)param_2 + 0x79);
  *(int8_t *)((int64_t)param_1 + 0x7a) = *(int8_t *)((int64_t)param_2 + 0x7a);
  *(int8_t *)((int64_t)param_1 + 0x7b) = *(int8_t *)((int64_t)param_2 + 0x7b);
  *(int8_t *)(param_1 + 0x1f) = *(int8_t *)(param_2 + 0x1f);
  *(int8_t *)((int64_t)param_1 + 0x7d) = *(int8_t *)((int64_t)param_2 + 0x7d);
  *(int8_t *)((int64_t)param_1 + 0x7e) = *(int8_t *)((int64_t)param_2 + 0x7e);
  *(int8_t *)((int64_t)param_1 + 0x7f) = *(int8_t *)((int64_t)param_2 + 0x7f);
  *(int8_t *)(param_1 + 0x20) = *(int8_t *)(param_2 + 0x20);
  *(int8_t *)((int64_t)param_1 + 0x81) = *(int8_t *)((int64_t)param_2 + 0x81);
  *(int8_t *)((int64_t)param_1 + 0x82) = *(int8_t *)((int64_t)param_2 + 0x82);
  *(int8_t *)((int64_t)param_1 + 0x83) = *(int8_t *)((int64_t)param_2 + 0x83);
  *(int8_t *)(param_1 + 0x21) = *(int8_t *)(param_2 + 0x21);
  *(int8_t *)((int64_t)param_1 + 0x85) = *(int8_t *)((int64_t)param_2 + 0x85);
  *(int8_t *)((int64_t)param_1 + 0x86) = *(int8_t *)((int64_t)param_2 + 0x86);
  *(int8_t *)((int64_t)param_1 + 0x87) = *(int8_t *)((int64_t)param_2 + 0x87);
  *(int8_t *)(param_1 + 0x22) = *(int8_t *)(param_2 + 0x22);
  *(int8_t *)((int64_t)param_1 + 0x89) = *(int8_t *)((int64_t)param_2 + 0x89);
  *(int8_t *)((int64_t)param_1 + 0x8a) = *(int8_t *)((int64_t)param_2 + 0x8a);
  *(int8_t *)((int64_t)param_1 + 0x8b) = *(int8_t *)((int64_t)param_2 + 0x8b);
  *(int8_t *)(param_1 + 0x23) = *(int8_t *)(param_2 + 0x23);
  *(int8_t *)((int64_t)param_1 + 0x8d) = *(int8_t *)((int64_t)param_2 + 0x8d);
  *(int8_t *)((int64_t)param_1 + 0x8e) = *(int8_t *)((int64_t)param_2 + 0x8e);
  *(int8_t *)((int64_t)param_1 + 0x8f) = *(int8_t *)((int64_t)param_2 + 0x8f);
  *(int8_t *)(param_1 + 0x24) = *(int8_t *)(param_2 + 0x24);
  *(int8_t *)((int64_t)param_1 + 0x91) = *(int8_t *)((int64_t)param_2 + 0x91);
  *(int8_t *)((int64_t)param_1 + 0x92) = *(int8_t *)((int64_t)param_2 + 0x92);
  *(int8_t *)((int64_t)param_1 + 0x93) = *(int8_t *)((int64_t)param_2 + 0x93);
  *(int8_t *)(param_1 + 0x25) = *(int8_t *)(param_2 + 0x25);
  *(int8_t *)((int64_t)param_1 + 0x95) = *(int8_t *)((int64_t)param_2 + 0x95);
  *(int8_t *)((int64_t)param_1 + 0x96) = *(int8_t *)((int64_t)param_2 + 0x96);
  *(int8_t *)((int64_t)param_1 + 0x97) = *(int8_t *)((int64_t)param_2 + 0x97);
  *(int8_t *)(param_1 + 0x26) = *(int8_t *)(param_2 + 0x26);
  *(int8_t *)((int64_t)param_1 + 0x99) = *(int8_t *)((int64_t)param_2 + 0x99);
  *(int8_t *)((int64_t)param_1 + 0x9a) = *(int8_t *)((int64_t)param_2 + 0x9a);
  *(int8_t *)((int64_t)param_1 + 0x9b) = *(int8_t *)((int64_t)param_2 + 0x9b);
  *(int8_t *)(param_1 + 0x27) = *(int8_t *)(param_2 + 0x27);
  *(int8_t *)((int64_t)param_1 + 0x9d) = *(int8_t *)((int64_t)param_2 + 0x9d);
  *(int8_t *)((int64_t)param_1 + 0x9e) = *(int8_t *)((int64_t)param_2 + 0x9e);
  *(int8_t *)((int64_t)param_1 + 0x9f) = *(int8_t *)((int64_t)param_2 + 0x9f);
  *(int8_t *)(param_1 + 0x28) = *(int8_t *)(param_2 + 0x28);
  *(int8_t *)((int64_t)param_1 + 0xa1) = *(int8_t *)((int64_t)param_2 + 0xa1);
  *(int8_t *)((int64_t)param_1 + 0xa2) = *(int8_t *)((int64_t)param_2 + 0xa2);
  *(int8_t *)((int64_t)param_1 + 0xa3) = *(int8_t *)((int64_t)param_2 + 0xa3);
  *(int8_t *)(param_1 + 0x29) = *(int8_t *)(param_2 + 0x29);
  *(int8_t *)((int64_t)param_1 + 0xa5) = *(int8_t *)((int64_t)param_2 + 0xa5);
  *(int8_t *)((int64_t)param_1 + 0xa6) = *(int8_t *)((int64_t)param_2 + 0xa6);
  *(int8_t *)((int64_t)param_1 + 0xa7) = *(int8_t *)((int64_t)param_2 + 0xa7);
  *(int8_t *)(param_1 + 0x2a) = *(int8_t *)(param_2 + 0x2a);
  *(int8_t *)((int64_t)param_1 + 0xa9) = *(int8_t *)((int64_t)param_2 + 0xa9);
  *(int8_t *)((int64_t)param_1 + 0xaa) = *(int8_t *)((int64_t)param_2 + 0xaa);
  *(int8_t *)((int64_t)param_1 + 0xab) = *(int8_t *)((int64_t)param_2 + 0xab);
  *(int8_t *)(param_1 + 0x2b) = *(int8_t *)(param_2 + 0x2b);
  *(int8_t *)((int64_t)param_1 + 0xad) = *(int8_t *)((int64_t)param_2 + 0xad);
  *(int8_t *)((int64_t)param_1 + 0xae) = *(int8_t *)((int64_t)param_2 + 0xae);
  *(int8_t *)((int64_t)param_1 + 0xaf) = *(int8_t *)((int64_t)param_2 + 0xaf);
  *(int8_t *)(param_1 + 0x2c) = *(int8_t *)(param_2 + 0x2c);
  *(int8_t *)((int64_t)param_1 + 0xb1) = *(int8_t *)((int64_t)param_2 + 0xb1);
  *(int8_t *)((int64_t)param_1 + 0xb2) = *(int8_t *)((int64_t)param_2 + 0xb2);
  *(int8_t *)((int64_t)param_1 + 0xb3) = *(int8_t *)((int64_t)param_2 + 0xb3);
  *(int8_t *)(param_1 + 0x2d) = *(int8_t *)(param_2 + 0x2d);
  *(int8_t *)((int64_t)param_1 + 0xb5) = *(int8_t *)((int64_t)param_2 + 0xb5);
  *(int8_t *)((int64_t)param_1 + 0xb6) = *(int8_t *)((int64_t)param_2 + 0xb6);
  *(int8_t *)((int64_t)param_1 + 0xb7) = *(int8_t *)((int64_t)param_2 + 0xb7);
  *(int8_t *)(param_1 + 0x2e) = *(int8_t *)(param_2 + 0x2e);
  *(int8_t *)((int64_t)param_1 + 0xb9) = *(int8_t *)((int64_t)param_2 + 0xb9);
  *(int8_t *)((int64_t)param_1 + 0xba) = *(int8_t *)((int64_t)param_2 + 0xba);
  *(int8_t *)((int64_t)param_1 + 0xbb) = *(int8_t *)((int64_t)param_2 + 0xbb);
  *(int8_t *)(param_1 + 0x2f) = *(int8_t *)(param_2 + 0x2f);
  *(int8_t *)((int64_t)param_1 + 0xbd) = *(int8_t *)((int64_t)param_2 + 0xbd);
  *(int8_t *)((int64_t)param_1 + 0xbe) = *(int8_t *)((int64_t)param_2 + 0xbe);
  *(int8_t *)((int64_t)param_1 + 0xbf) = *(int8_t *)((int64_t)param_2 + 0xbf);
  plVar1 = *(int64_t **)(param_2 + 0x30);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 0x30);
  *(int64_t **)(param_1 + 0x30) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  uVar6 = *(uint64_t *)(param_2 + 0x34);
  *(uint64_t *)(param_1 + 0x32) = *(uint64_t *)(param_2 + 0x32);
  *(uint64_t *)(param_1 + 0x34) = uVar6;
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  uVar6 = *(uint64_t *)(param_2 + 0x3a);
  *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x3a) = uVar6;
  *(int8_t *)(param_1 + 0x3c) = *(int8_t *)(param_2 + 0x3c);
  param_1[0x3d] = param_2[0x3d];
  return param_1;
}





