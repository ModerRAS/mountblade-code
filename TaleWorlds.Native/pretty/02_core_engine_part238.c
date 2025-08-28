#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part238.c - 9 个函数

// 函数: void FUN_180207f50(uint64_t param_1,int64_t *param_2)
void FUN_180207f50(uint64_t param_1,int64_t *param_2)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  int64_t *plStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  uint64_t uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int32_t uStack_58;
  int32_t uStack_54;
  int64_t lStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  uint64_t uStack_28;
  
  uVar6 = 0;
  uStack_28 = 0xfffffffffffffffe;
  uStack_38 = 3;
  uStack_40 = 0;
  uStack_48 = 0;
  lStack_50 = 0;
  plStack_98 = (int64_t *)0x0;
  uStack_a0 = 0;
  plStack_a8 = (int64_t *)0x0;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar3 = param_2;
  if (plStack_a8 != (int64_t *)0x0) {
    lVar5 = *plStack_a8;
    plStack_a8 = param_2;
    (**(code **)(lVar5 + 0x38))();
    plVar3 = plStack_a8;
  }
  plStack_a8 = plVar3;
  plVar3 = plStack_98;
  uStack_a0 = 0;
  plStack_98 = (int64_t *)0x0;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  uStack_90 = 0x3f800000;
  uStack_88 = 0;
  uStack_80 = 0x3f80000000000000;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  FUN_180209470(&plStack_a8);
  lVar5 = SYSTEM_STATE_MANAGER;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (param_2[8] - param_2[7] >> 4 != 0) {
    do {
      *(char *)(*(int64_t *)(uVar7 + param_2[7]) + 0xf5) = (*(int *)(lVar5 + 0xe00) != 0) + -1;
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 0x10;
      uVar9 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)(param_2[8] - param_2[7] >> 4));
  }
  FUN_180209720(param_1,&plStack_a8);
  if ((plStack_a8 != (int64_t *)0x0) &&
     (iVar4 = (int)(plStack_a8[8] - plStack_a8[7] >> 4), lVar5 = (int64_t)iVar4, 0 < iVar4)) {
    do {
      puVar1 = (uint *)(*(int64_t *)(uVar6 + plStack_a8[7]) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      lVar2 = *(int64_t *)(uVar6 + plStack_a8[7]);
      *(uint64_t *)(lVar2 + 0x108) = 0xffffffffffffffff;
      *(int32_t *)(lVar2 + 0x110) = 0xffffffff;
      uVar6 = uVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lStack_50 == 0) {
    if (plStack_98 != (int64_t *)0x0) {
      (**(code **)(*plStack_98 + 0x38))();
    }
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}



// WARNING: Removing unreachable block (ram,0x0001802081ca)
// WARNING: Removing unreachable block (ram,0x0001802081e9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180208160(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
void FUN_180208160(uint64_t param_1,int64_t *param_2,uint64_t param_3,int64_t *param_4,
                  uint64_t *param_5)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint uVar8;
  uint64_t uVar9;
  int64_t *plStack_b8;
  uint64_t uStack_b0;
  int64_t *plStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  int32_t uStack_64;
  int64_t lStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  uint64_t uStack_38;
  
  uVar6 = 0;
  uStack_38 = 0xfffffffffffffffe;
  uStack_48 = 3;
  uStack_50 = 0;
  uStack_58 = 0;
  lStack_60 = 0;
  plStack_a8 = (int64_t *)0x0;
  uStack_b0 = 0;
  plStack_b8 = (int64_t *)0x0;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar3 = param_2;
  if (plStack_b8 != (int64_t *)0x0) {
    lVar5 = *plStack_b8;
    plStack_b8 = param_2;
    (**(code **)(lVar5 + 0x38))();
    plVar3 = plStack_b8;
  }
  plStack_b8 = plVar3;
  uStack_b0 = param_3;
  if (param_4 != (int64_t *)0x0) {
    (**(code **)(*param_4 + 0x28))(param_4);
  }
  plVar3 = param_4;
  if (plStack_a8 != (int64_t *)0x0) {
    lVar5 = *plStack_a8;
    plStack_a8 = param_4;
    (**(code **)(lVar5 + 0x38))();
    plVar3 = plStack_a8;
  }
  plStack_a8 = plVar3;
  uStack_a0 = *param_5;
  uStack_98 = param_5[1];
  uStack_90 = param_5[2];
  uStack_88 = param_5[3];
  uStack_80 = *(int32_t *)(param_5 + 4);
  uStack_7c = *(int32_t *)((int64_t)param_5 + 0x24);
  uStack_78 = *(int32_t *)(param_5 + 5);
  uStack_74 = *(int32_t *)((int64_t)param_5 + 0x2c);
  uStack_70 = *(int32_t *)(param_5 + 6);
  uStack_6c = *(int32_t *)((int64_t)param_5 + 0x34);
  uStack_68 = *(int32_t *)(param_5 + 7);
  uStack_64 = *(int32_t *)((int64_t)param_5 + 0x3c);
  FUN_180209470(&plStack_b8);
  lVar5 = SYSTEM_STATE_MANAGER;
  uVar7 = uVar6;
  uVar9 = uVar6;
  if (param_2[8] - param_2[7] >> 4 != 0) {
    do {
      *(char *)(*(int64_t *)(uVar7 + param_2[7]) + 0xf5) = (*(int *)(lVar5 + 0xe00) != 0) + -1;
      uVar8 = (int)uVar9 + 1;
      uVar7 = uVar7 + 0x10;
      uVar9 = (uint64_t)uVar8;
    } while ((uint64_t)(int64_t)(int)uVar8 < (uint64_t)(param_2[8] - param_2[7] >> 4));
  }
  FUN_180209720(param_1,&plStack_b8);
  if ((plStack_b8 != (int64_t *)0x0) &&
     (iVar4 = (int)(plStack_b8[8] - plStack_b8[7] >> 4), lVar5 = (int64_t)iVar4, 0 < iVar4)) {
    do {
      puVar1 = (uint *)(*(int64_t *)(uVar6 + plStack_b8[7]) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      lVar2 = *(int64_t *)(uVar6 + plStack_b8[7]);
      *(uint64_t *)(lVar2 + 0x108) = 0xffffffffffffffff;
      *(int32_t *)(lVar2 + 0x110) = 0xffffffff;
      uVar6 = uVar6 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lStack_60 == 0) {
    if (plStack_a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_a8 + 0x38))();
    }
    if (plStack_b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}





// 函数: void FUN_180208390(uint64_t param_1,uint64_t param_2,int8_t param_3)
void FUN_180208390(uint64_t param_1,uint64_t param_2,int8_t param_3)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t *plStackX_20;
  
  puVar2 = (uint64_t *)FUN_1800b3590(param_1,&plStackX_20,param_2,0);
  uVar1 = *puVar2;
  if (plStackX_20 != (int64_t *)0x0) {
    (**(code **)(*plStackX_20 + 0x38))();
  }
  FUN_180208400(param_1,uVar1,param_3);
  return;
}





// 函数: void FUN_180208400(int64_t param_1,int64_t *param_2,int8_t param_3,uint64_t param_4)
void FUN_180208400(int64_t param_1,int64_t *param_2,int8_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  
  if (*(int64_t *)(param_1 + 0x38) != 0) {
    FUN_180080810(param_1 + 0x20,param_1 + 0x38,param_3,param_4,0xfffffffffffffffe);
    *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_1 + 0x848);
    *(int32_t *)(param_1 + 0x2c) = 0x3f800000;
    *(int8_t *)(param_1 + 0x30) = *(int8_t *)(param_1 + 0x40);
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar1 = *(int64_t **)(param_1 + 0x38);
  *(int64_t **)(param_1 + 0x38) = param_2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x40) = param_3;
  *(int32_t *)(param_1 + 0x848) = 0;
  *(int8_t *)(param_1 + 0x41) = 0;
  return;
}





// 函数: void FUN_1802084b0(int64_t *param_1)
void FUN_1802084b0(int64_t *param_1)

{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  lVar7 = *param_1;
  uVar8 = 0;
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar7),8) +
          (param_1[1] - lVar7);
  uVar3 = uVar8;
  uVar9 = uVar8;
  if (lVar2 >> 6 == lVar2 >> 0x3f) {
    *(int8_t *)((int64_t)param_1 + 0x41) = 1;
    return;
  }
  do {
    lVar7 = *(int64_t *)(uVar9 + lVar7);
    lVar2 = *(int64_t *)(lVar7 + 0x38);
    uVar5 = uVar8;
    uVar6 = uVar8;
    if (*(int64_t *)(lVar7 + 0x40) - lVar2 >> 4 != 0) {
      do {
        puVar1 = (uint *)(*(int64_t *)(uVar6 + lVar2) + 0x100);
        *puVar1 = *puVar1 & 0xfffff7ff;
        lVar2 = *(int64_t *)(uVar6 + *(int64_t *)(lVar7 + 0x38));
        *(uint64_t *)(lVar2 + 0x108) = 0xffffffffffffffff;
        *(int32_t *)(lVar2 + 0x110) = 0xffffffff;
        if (*(int64_t *)(*(int64_t *)(uVar6 + *(int64_t *)(lVar7 + 0x38)) + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        uVar4 = (int)uVar5 + 1;
        *(uint64_t *)(*(int64_t *)(uVar6 + *(int64_t *)(lVar7 + 0x38)) + 0x2d0) = 0;
        lVar2 = *(int64_t *)(lVar7 + 0x38);
        uVar5 = (uint64_t)uVar4;
        uVar6 = uVar6 + 0x10;
      } while ((uint64_t)(int64_t)(int)uVar4 <
               (uint64_t)(*(int64_t *)(lVar7 + 0x40) - lVar2 >> 4));
    }
    lVar7 = *param_1;
    uVar4 = (int)uVar3 + 1;
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar7),8) +
            (param_1[1] - lVar7);
    uVar3 = (uint64_t)uVar4;
    uVar9 = uVar9 + 0x78;
  } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)((lVar2 >> 6) - (lVar2 >> 0x3f)));
  *(int8_t *)((int64_t)param_1 + 0x41) = 1;
  return;
}





// 函数: void FUN_1802084f6(void)
void FUN_1802084f6(void)

{
  uint *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int unaff_EBP;
  uint uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t in_R9;
  uint64_t unaff_R12;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  uint64_t uVar7;
  
  uVar7 = unaff_R12 & 0xffffffff;
  do {
    lVar3 = *(int64_t *)(uVar7 + in_R9);
    uVar5 = unaff_R12 & 0xffffffff;
    lVar2 = *(int64_t *)(lVar3 + 0x38);
    uVar6 = unaff_R12;
    if (*(int64_t *)(lVar3 + 0x40) - lVar2 >> 4 != 0) {
      do {
        puVar1 = (uint *)(*(int64_t *)(uVar6 + lVar2) + 0x100);
        *puVar1 = *puVar1 & 0xfffff7ff;
        lVar2 = *(int64_t *)(uVar6 + *(int64_t *)(lVar3 + 0x38));
        *(uint64_t *)(lVar2 + 0x108) = 0xffffffffffffffff;
        *(int32_t *)(lVar2 + 0x110) = 0xffffffff;
        if (*(int64_t *)(*(int64_t *)(uVar6 + *(int64_t *)(lVar3 + 0x38)) + 0x2d0) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        *(uint64_t *)(*(int64_t *)(uVar6 + *(int64_t *)(lVar3 + 0x38)) + 0x2d0) = unaff_R12;
        lVar2 = *(int64_t *)(lVar3 + 0x38);
        uVar6 = uVar6 + 0x10;
      } while ((uint64_t)(int64_t)(int)uVar4 <
               (uint64_t)(*(int64_t *)(lVar3 + 0x40) - lVar2 >> 4));
    }
    in_R9 = *unaff_R14;
    unaff_EBP = unaff_EBP + 1;
    uVar7 = uVar7 + 0x78;
    lVar3 = SUB168(SEXT816(unaff_R13) * SEXT816(unaff_R14[1] - in_R9),8) + (unaff_R14[1] - in_R9);
  } while ((uint64_t)(int64_t)unaff_EBP < (uint64_t)((lVar3 >> 6) - (lVar3 >> 0x3f)));
  *(int8_t *)((int64_t)unaff_R14 + 0x41) = 1;
  return;
}





// 函数: void FUN_1802085f8(int64_t param_1)
void FUN_1802085f8(int64_t param_1)

{
  *(int8_t *)(param_1 + 0x41) = 1;
  return;
}





// 函数: void FUN_180208610(int64_t param_1,float param_2)
void FUN_180208610(int64_t param_1,float param_2)

{
  int64_t *plVar1;
  float fVar2;
  float fVar3;
  
  if (*(int64_t *)(param_1 + 0x38) != 0) {
    fVar2 = param_2 + *(float *)(param_1 + 0x848);
    *(float *)(param_1 + 0x848) = fVar2;
    fVar3 = (float)*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x38) + 0xc0) + -0x28) *
            0.033333335;
    if (fVar3 < fVar2) {
      if (*(char *)(param_1 + 0x40) == '\0') {
        *(float *)(param_1 + 0x848) = fVar3;
      }
      else {
        fVar2 = fVar2 - fVar3;
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        *(float *)(param_1 + 0x848) = fVar2;
      }
    }
  }
  if (*(int64_t *)(param_1 + 0x20) != 0) {
    fVar2 = param_2 + *(float *)(param_1 + 0x28);
    *(float *)(param_1 + 0x28) = fVar2;
    fVar3 = (float)*(int *)(*(int64_t *)(*(int64_t *)(param_1 + 0x20) + 0xc0) + -0x28) *
            0.033333335;
    if (fVar3 < fVar2) {
      if (*(char *)(param_1 + 0x30) == '\0') {
        *(float *)(param_1 + 0x28) = fVar3;
      }
      else {
        fVar2 = fVar2 - fVar3;
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        *(float *)(param_1 + 0x28) = fVar2;
      }
    }
    fVar2 = *(float *)(param_1 + 0x2c) - param_2 * 5.0;
    *(float *)(param_1 + 0x2c) = fVar2;
    if (fVar2 <= 0.0) {
      plVar1 = *(int64_t **)(param_1 + 0x20);
      *(uint64_t *)(param_1 + 0x20) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      *(int32_t *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180208720(int64_t *param_1,uint64_t param_2,float *param_3,int param_4)
void FUN_180208720(int64_t *param_1,uint64_t param_2,float *param_3,int param_4)

{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  char cVar5;
  byte bVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  float *pfVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  float *pfVar13;
  int iVar14;
  char *pcVar15;
  int64_t lVar16;
  int32_t uVar17;
  uint *puVar18;
  uint uVar19;
  int64_t lVar20;
  int iVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint uVar26;
  uint *puVar27;
  bool bVar28;
  float fVar29;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float fVar30;
  uint64_t uStackX_10;
  uint uStack_68;
  uint uStack_64;
  int64_t lStack_60;
  int64_t lStack_58;
  int64_t lStack_48;
  
  if (((*(char *)((int64_t)param_1 + 0x41) != '\0') ||
      (lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - *param_1),8) +
                (param_1[1] - *param_1), lVar11 >> 6 == lVar11 >> 0x3f)) ||
     ((lVar11 = param_1[7], lVar11 == 0 &&
      ((param_4 < 1 && (*(float *)((int64_t)param_1 + 0x2c) <= 0.0)))))) {
    lVar11 = *param_1;
    uVar22 = 0;
    lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
             (param_1[1] - lVar11);
    uVar24 = uVar22;
    uVar25 = uVar22;
    if (lVar20 >> 6 != lVar20 >> 0x3f) {
      do {
        lVar20 = *(int64_t *)(lVar11 + uVar25);
        uVar12 = uVar22;
        uVar23 = uVar22;
        if (*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4 != 0) {
          do {
            if (((*(byte *)(*(int64_t *)(lVar20 + 0x38) + 8 + uVar12) & 1) != 0) &&
               (lVar16 = *(int64_t *)(*(int64_t *)(lVar20 + 0x38) + uVar12),
               (*(uint *)(lVar16 + 0x100) & 0x800) != 0)) {
              *(int32_t *)(*(int64_t *)(lVar16 + 0x2d0) + 0x10) = 0;
              *(int32_t *)(*(int64_t *)(lVar16 + 0x2d0) + 0xc) = 0;
              *(int32_t *)(*(int64_t *)(lVar16 + 0x2d0) + 0x14) = 0;
              *(int32_t *)(*(int64_t *)(lVar16 + 0x2d0) + 0x18) = 0;
              lVar20 = *(int64_t *)(lVar11 + uVar25);
            }
            uVar19 = (int)uVar23 + 1;
            uVar12 = uVar12 + 0x10;
            uVar23 = (uint64_t)uVar19;
          } while ((uint64_t)(int64_t)(int)uVar19 <
                   (uint64_t)(*(int64_t *)(lVar20 + 0x40) - *(int64_t *)(lVar20 + 0x38) >> 4));
        }
        lVar11 = *param_1;
        uVar19 = (int)uVar24 + 1;
        lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
                 (param_1[1] - lVar11);
        uVar24 = (uint64_t)uVar19;
        uVar25 = uVar25 + 0x78;
      } while ((uint64_t)(int64_t)(int)uVar19 < (uint64_t)((lVar20 >> 6) - (lVar20 >> 0x3f)));
    }
  }
  else {
    fVar30 = 1.0;
    uVar25 = 0;
    uStackX_10 = param_2 & 0xffffffff00000000;
    uVar24 = uVar25;
    if (lVar11 != 0) {
      fVar29 = 1.0 - *(float *)((int64_t)param_1 + 0x2c);
      FUN_180208f20(fVar29,lVar11,&uStackX_10,(int64_t)param_1 + 0x44,fVar29);
      uVar24 = uStackX_10 & 0xffffffff;
    }
    if (param_1[4] != 0) {
      FUN_180208f20(param_1,param_1[4],&uStackX_10,(int64_t)param_1 + 0x44,
                    *(int32_t *)((int64_t)param_1 + 0x2c));
      uVar24 = uStackX_10 & 0xffffffff;
    }
    uVar22 = uVar25;
    if (0 < (int64_t)param_4) {
      do {
        iVar14 = (int)uVar24;
        if (0xff < iVar14) break;
        bVar28 = false;
        pfVar9 = (float *)(param_1 + 9);
        uVar12 = uVar25;
        do {
          if (iVar14 <= (int)uVar12) {
            if (!bVar28) {
              uVar24 = (uint64_t)(iVar14 + 1);
              *(float *)((int64_t)param_1 + (int64_t)iVar14 * 8 + 0x44) = *param_3;
              *(float *)(param_1 + (int64_t)iVar14 + 9) = param_3[1];
            }
            break;
          }
          if (pfVar9[-1] == *param_3) {
            fVar29 = param_3[1];
            fVar1 = *pfVar9;
            *pfVar9 = fVar29 + fVar1;
            if (fVar30 < fVar29 + fVar1) {
              *pfVar9 = 1.0;
            }
            bVar28 = true;
          }
          uVar12 = (uint64_t)((int)uVar12 + 1);
          pfVar9 = pfVar9 + 2;
        } while (!bVar28);
        uVar22 = uVar22 + 1;
        param_3 = param_3 + 2;
      } while ((int64_t)uVar22 < (int64_t)param_4);
      uStackX_10 = CONCAT44(uStackX_10._4_4_,(int)uVar24);
    }
    iVar14 = (int)uVar24;
    if (0 < iVar14) {
      if (0x80 < iVar14) {
        if (1 < iVar14) {
          lVar11 = (int64_t)(iVar14 + -1);
          uVar24 = (uint64_t)(iVar14 - 1);
          do {
            uVar22 = uVar25;
            if (3 < lVar11) {
              puVar7 = (uint64_t *)((int64_t)param_1 + 0x44);
              lVar20 = (lVar11 - 4U >> 2) + 1;
              uVar22 = lVar20 * 4;
              do {
                fVar30 = *(float *)((int64_t)puVar7 + 0xc);
                if (*(float *)((int64_t)puVar7 + 4) <= fVar30 &&
                    fVar30 != *(float *)((int64_t)puVar7 + 4)) {
                  uVar4 = puVar7[1];
                  puVar7[1] = *puVar7;
                  fVar30 = *(float *)((int64_t)puVar7 + 0xc);
                  *puVar7 = uVar4;
                }
                if (fVar30 < *(float *)((int64_t)puVar7 + 0x14)) {
                  uVar4 = puVar7[1];
                  puVar7[1] = puVar7[2];
                  puVar7[2] = uVar4;
                }
                if (*(float *)((int64_t)puVar7 + 0x14) <= *(float *)((int64_t)puVar7 + 0x1c) &&
                    *(float *)((int64_t)puVar7 + 0x1c) != *(float *)((int64_t)puVar7 + 0x14)) {
                  uVar4 = puVar7[2];
                  puVar7[2] = puVar7[3];
                  puVar7[3] = uVar4;
                }
                if (*(float *)((int64_t)puVar7 + 0x1c) <= *(float *)((int64_t)puVar7 + 0x24) &&
                    *(float *)((int64_t)puVar7 + 0x24) != *(float *)((int64_t)puVar7 + 0x1c)) {
                  uVar4 = puVar7[3];
                  puVar7[3] = puVar7[4];
                  puVar7[4] = uVar4;
                }
                puVar7 = puVar7 + 4;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            if ((int64_t)uVar22 < lVar11) {
              puVar7 = (uint64_t *)((int64_t)param_1 + uVar22 * 8 + 0x44);
              lVar20 = lVar11 - uVar22;
              do {
                if (*(float *)((int64_t)puVar7 + 4) <= *(float *)((int64_t)puVar7 + 0xc) &&
                    *(float *)((int64_t)puVar7 + 0xc) != *(float *)((int64_t)puVar7 + 4)) {
                  uVar4 = *puVar7;
                  *puVar7 = puVar7[1];
                  puVar7[1] = uVar4;
                }
                puVar7 = puVar7 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            lVar11 = lVar11 + -1;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        uVar24 = 0x80;
        uStackX_10 = CONCAT44(uStackX_10._4_4_,0x80);
      }
      *(int *)((int64_t)param_1 + 0x844) = (int)uVar24;
      lVar11 = *param_1;
      uStack_64 = 0;
      lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
               (param_1[1] - lVar11);
      if (lVar20 >> 6 != lVar20 >> 0x3f) {
        lStack_58 = 0;
        uVar22 = uVar25;
        do {
          lVar20 = *(int64_t *)(lVar11 + 0x58 + lStack_58);
          lVar10 = *(int64_t *)(lVar11 + 0x60 + lStack_58) - lVar20;
          uStack_68 = 0;
          lVar16 = lVar10 >> 0x3f;
          uVar19 = (uint)uVar22;
          if (lVar10 / 0xc + lVar16 != lVar16) {
            lStack_48 = 0;
            lStack_60 = 0;
            uVar22 = uVar25;
            do {
              lVar16 = *(int64_t *)(*(int64_t *)(lVar11 + lStack_58) + 0x38);
              uVar19 = (uint)uVar22;
              if ((*(byte *)(lStack_60 + 8 + lVar16) & 1) != 0) {
                iVar14 = *(int *)(lVar20 + lStack_48);
                lVar10 = *(int64_t *)(lStack_60 + lVar16);
                bVar6 = 0;
                if (iVar14 == -1) {
                  lVar8 = *(int64_t *)(lVar11 + 0x10 + lStack_58);
                  if (lVar8 == 0) {
                    lVar16 = FUN_1801efdb0(lVar16,lVar10);
                    uVar19 = uStack_68;
                    if ((lVar16 == 0) || (iVar21 = *(int *)(lVar16 + 0x18), iVar21 == 0))
                    goto LAB_180208aa2;
                    uVar17 = *(int32_t *)(lVar16 + 0x2c);
                  }
                  else {
                    cVar5 = FUN_1801ef300(lVar16,lVar10,lVar8);
                    if (cVar5 == '\0') {
                      FUN_180626f80(&unknown_var_1920_ptr);
                      iVar14 = *(int *)(lVar20 + lStack_48);
                      uVar19 = uStack_68;
                      goto LAB_180208aa2;
                    }
                    lVar16 = FUN_1801ef620(extraout_XMM0_Qa,lVar10,lVar8);
                    uVar17 = *(int32_t *)(lVar16 + 0x2c);
                    lVar16 = FUN_1801efdb0(extraout_XMM0_Qa_00,lVar8);
                    iVar21 = *(int *)(lVar16 + 0x18);
                  }
                  uVar2 = *(int32_t *)(lVar16 + 0x24);
                  uVar3 = *(int32_t *)(lVar16 + 0x28);
                  *(int *)(lVar20 + 4 + lStack_48) = iVar21;
                  *(int32_t *)(lVar20 + 8 + lStack_48) = *(int32_t *)(lVar16 + 0x1c);
                  *(byte *)(lVar10 + 0xfe) = *(byte *)(lVar10 + 0xfe) & 0xf7;
                  *(uint *)(lVar10 + 0x100) = *(uint *)(lVar10 + 0x100) | 0x800;
                  uVar4 = system_memory_pool_ptr;
                  *(int32_t *)(lVar10 + 0x10c) = uVar2;
                  if (lVar8 == 0) {
                    bVar6 = 8;
                  }
                  *(int32_t *)(lVar10 + 0x110) = uVar3;
                  *(byte *)(lVar10 + 0xfe) = *(byte *)(lVar10 + 0xfe) | bVar6;
                  *(int32_t *)(lVar10 + 0x108) = uVar17;
                  puVar7 = (uint64_t *)CoreMemoryPoolReallocator(uVar4,0x20,8,3);
                  *puVar7 = 0;
                  *(int32_t *)(puVar7 + 1) = 0;
                  *(int32_t *)((int64_t)puVar7 + 0xc) = 0xffffffff;
                  puVar7[2] = 0;
                  *(int32_t *)(puVar7 + 3) = 0;
                  *(uint64_t **)(lVar10 + 0x2d0) = puVar7;
                  *(int32_t *)(lVar20 + lStack_48) = 0;
                }
                else {
LAB_180208aa2:
                  if (iVar14 < 0) goto LAB_180208d4a;
                }
                puVar18 = (uint *)((int64_t)*(int *)(system_parameter_buffer + 0x9c8) * 0x488 +
                                  system_parameter_buffer + 0xb8);
                if ((int)uVar24 == 0) {
                  uVar26 = 0xffffffff;
                }
                else {
                  LOCK();
                  uVar26 = *puVar18;
                  *puVar18 = *puVar18 + (int)uVar24;
                  UNLOCK();
                  uVar22 = (uint64_t)(uVar26 >> 0xb);
                  uVar24 = (uint64_t)(((uint)uStackX_10 - 1) + uVar26 >> 0xb);
                  if (uVar22 <= uVar24) {
                    pcVar15 = (char *)((int64_t)puVar18 + uVar22 + 0x408);
                    lVar16 = (uVar24 - uVar22) + 1;
                    puVar27 = puVar18 + (uint64_t)(uVar26 >> 0xb) * 2 + 2;
                    do {
                      iVar14 = (int)uVar22;
                      if (*(int64_t *)puVar27 == 0) {
                        lVar8 = CoreMemoryPoolAllocator(system_memory_pool_ptr,0x4000,0x25);
                        LOCK();
                        bVar28 = *(int64_t *)(puVar18 + (int64_t)iVar14 * 2 + 2) == 0;
                        if (bVar28) {
                          *(int64_t *)(puVar18 + (int64_t)iVar14 * 2 + 2) = lVar8;
                        }
                        UNLOCK();
                        if (bVar28) {
                          uVar19 = iVar14 * 0x800;
                          iVar21 = uVar19 + 0x800;
                          for (; (int)uVar19 < iVar21; uVar19 = uVar19 + 1) {
                            *(uint64_t *)
                             (*(int64_t *)(puVar18 + (uint64_t)(uVar19 >> 0xb) * 2 + 2) +
                             (int64_t)(int)(uVar19 + (uVar19 >> 0xb) * -0x800) * 8) = 0;
                          }
                          LOCK();
                          *(int8_t *)((int64_t)iVar14 + 0x408 + (int64_t)puVar18) = 0;
                          UNLOCK();
                        }
                        else {
                          if (lVar8 != 0) {
                    // WARNING: Subroutine does not return
                            CoreEngine_MemoryPoolManager();
                          }
                          do {
                          } while (*pcVar15 != '\0');
                        }
                      }
                      else {
                        do {
                        } while (*pcVar15 != '\0');
                      }
                      uVar22 = (uint64_t)(iVar14 + 1);
                      puVar27 = puVar27 + 2;
                      pcVar15 = pcVar15 + 1;
                      lVar16 = lVar16 + -1;
                    } while (lVar16 != 0);
                  }
                  uVar24 = (uint64_t)(uint)uStackX_10;
                }
                *(int32_t *)(*(int64_t *)(lVar10 + 0x2d0) + 0x10) =
                     *(int32_t *)(lVar20 + 8 + lStack_48);
                *(int *)(*(int64_t *)(lVar10 + 0x2d0) + 0x14) = (int)uVar24;
                *(uint *)(*(int64_t *)(lVar10 + 0x2d0) + 0x18) = uVar26;
                *(int32_t *)(*(int64_t *)(lVar10 + 0x2d0) + 0xc) =
                     *(int32_t *)(system_main_module_state + 0x224);
                uVar19 = uStack_68;
                if (0 < (int)uVar24) {
                  pfVar9 = (float *)(param_1 + 9);
                  do {
                    pfVar13 = (float *)(*(int64_t *)(puVar18 + (uint64_t)(uVar26 >> 0xb) * 2 + 2)
                                       + (uint64_t)(uVar26 + (uVar26 >> 0xb) * -0x800) * 8);
                    *pfVar13 = (float)(int)pfVar9[-1];
                    pfVar13[1] = *pfVar9;
                    uVar24 = uVar24 - 1;
                    pfVar9 = pfVar9 + 2;
                    uVar26 = uVar26 + 1;
                  } while (uVar24 != 0);
                  uVar24 = uStackX_10 & 0xffffffff;
                }
              }
LAB_180208d4a:
              lVar20 = *(int64_t *)(lVar11 + 0x58 + lStack_58);
              uStack_68 = uVar19 + 1;
              uVar22 = (uint64_t)uStack_68;
              lStack_60 = lStack_60 + 0x10;
              lStack_48 = lStack_48 + 0xc;
              uVar19 = uStack_64;
            } while ((uint64_t)(int64_t)(int)uStack_68 <
                     (uint64_t)((*(int64_t *)(lVar11 + 0x60 + lStack_58) - lVar20) / 0xc));
          }
          lVar11 = *param_1;
          uStack_64 = uVar19 + 1;
          uVar22 = (uint64_t)uStack_64;
          lStack_58 = lStack_58 + 0x78;
          lVar20 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar11),8) +
                   (param_1[1] - lVar11);
          if ((uint64_t)((lVar20 >> 6) - (lVar20 >> 0x3f)) <= (uint64_t)(int64_t)(int)uStack_64)
          {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



