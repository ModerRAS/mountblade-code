#include "TaleWorlds.Native.Split.h"

// 99_part_03_part068.c - 5 个函数

// 函数: void FUN_180239b65(void)
void FUN_180239b65(void)

{
  char cVar1;
  longlong in_RAX;
  uint64_t *unaff_RBX;
  uint64_t *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_R15;
  longlong lVar6;
  bool bVar7;
  uint64_t uStack0000000000000068;
  
  puVar2 = (uint64_t *)(in_RAX + -8);
  do {
    uStack0000000000000068 = *puVar2;
    lVar6 = unaff_R15 + -1;
    lVar5 = 0;
    lVar4 = 2;
    *puVar2 = *unaff_RBX;
    bVar7 = lVar6 == 2;
    lVar3 = lVar5;
    if (2 < lVar6) {
      do {
        cVar1 = func_0x000180233670(unaff_RBX + lVar4,unaff_RBX + lVar4 + -1);
        lVar5 = lVar4;
        if (cVar1 != '\0') {
          lVar5 = lVar4 + -1;
        }
        unaff_RBX[lVar3] = unaff_RBX[lVar5];
        lVar4 = lVar5 * 2 + 2;
        bVar7 = lVar4 == lVar6;
        lVar3 = lVar5;
      } while (lVar4 < lVar6);
    }
    if (bVar7) {
      unaff_RBX[lVar5] = unaff_RBX[lVar4 + -1];
      lVar5 = lVar4 + -1;
    }
    while (0 < lVar5) {
      lVar4 = lVar5 + -1 >> 1;
      cVar1 = func_0x000180233670(unaff_RBX + lVar4,&stack0x00000068);
      if (cVar1 == '\0') break;
      unaff_RBX[lVar5] = unaff_RBX[lVar4];
      lVar5 = lVar4;
    }
    puVar2 = puVar2 + -1;
    unaff_RBX[lVar5] = uStack0000000000000068;
    unaff_R15 = (8 - (longlong)unaff_RBX) + (longlong)puVar2 >> 3;
    if (unaff_R15 < 2) {
      return;
    }
  } while( true );
}



int8_t (*) [16] FUN_180239c40(double *param_1,int8_t (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int8_t auVar13 [16];
  int8_t auVar14 [16];
  int8_t auVar15 [16];
  int8_t auVar16 [16];
  int8_t auVar17 [16];
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar22 = param_3[0xc];
  dVar1 = param_3[0xd];
  dVar2 = param_3[0xe];
  dVar3 = param_1[2];
  dVar4 = param_1[6];
  dVar5 = param_1[1];
  dVar6 = *param_1;
  dVar7 = param_1[5];
  dVar8 = param_1[9];
  dVar9 = param_1[10];
  dVar10 = param_3[2];
  dVar11 = *param_3;
  dVar23 = dVar5 * dVar22 + dVar7 * dVar1 + dVar8 * dVar2 + param_1[0xd];
  dVar12 = param_1[4];
  dVar21 = param_3[1];
  auVar13._8_4_ = SUB84(dVar23,0);
  auVar13._0_8_ = dVar22 * dVar6 + param_1[4] * dVar1 + param_1[8] * dVar2 + param_1[0xc];
  auVar13._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  param_2[6] = auVar13;
  auVar17._8_4_ = 0;
  auVar17._0_8_ = dVar3 * dVar22 + dVar4 * dVar1 + dVar9 * dVar2 + param_1[0xe];
  auVar17._12_4_ = 0x3ff00000;
  param_2[7] = auVar17;
  dVar23 = dVar11 * dVar5 + dVar21 * dVar7 + dVar10 * dVar8;
  dVar22 = param_3[5];
  dVar1 = param_3[6];
  dVar2 = param_3[4];
  auVar14._8_4_ = SUB84(dVar23,0);
  auVar14._0_8_ = dVar11 * dVar6 + dVar21 * dVar12 + dVar10 * param_1[8];
  auVar14._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *param_2 = auVar14;
  auVar18._8_4_ = 0;
  auVar18._0_8_ = dVar11 * dVar3 + dVar21 * dVar4 + dVar10 * dVar9;
  auVar18._12_4_ = 0x3ff00000;
  param_2[1] = auVar18;
  dVar10 = param_3[9];
  dVar21 = dVar2 * dVar5 + dVar22 * dVar7 + dVar1 * dVar8;
  dVar11 = param_3[10];
  auVar15._8_4_ = SUB84(dVar21,0);
  auVar15._0_8_ = dVar2 * dVar6 + dVar22 * dVar12 + dVar1 * param_1[8];
  auVar15._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  param_2[2] = auVar15;
  dVar21 = param_3[8];
  auVar19._8_4_ = 0;
  auVar19._0_8_ = dVar2 * dVar3 + dVar22 * dVar4 + dVar1 * dVar9;
  auVar19._12_4_ = 0x3ff00000;
  param_2[3] = auVar19;
  dVar22 = dVar21 * dVar5 + dVar10 * dVar7 + dVar11 * dVar8;
  auVar16._8_4_ = SUB84(dVar22,0);
  auVar16._0_8_ = dVar21 * dVar6 + dVar10 * dVar12 + dVar11 * param_1[8];
  auVar16._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  param_2[4] = auVar16;
  auVar20._8_4_ = 0;
  auVar20._0_8_ = dVar21 * dVar3 + dVar10 * dVar4 + dVar11 * dVar9;
  auVar20._12_4_ = 0x3ff00000;
  param_2[5] = auVar20;
  return param_2;
}



uint64_t *
FUN_18023a260(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 10;
  strcpy_s(param_2[1],0x80,&unknown_var_8184_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_18023a2e0(uint64_t *param_1,int32_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &unknown_var_3432_ptr;
  param_1[3] = param_1 + 5;
  *(int32_t *)(param_1 + 4) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  *(int8_t *)((longlong)param_1 + 0xb2) = 0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  param_1[0x15] = 0;
  *param_1 = &unknown_var_8720_ptr;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_18009ebb0(param_1 + 0x1a);
  param_1[0x21] = 0;
  *(int32_t *)(param_1 + 0x22) = 1;
  *(uint64_t *)((longlong)param_1 + 0x114) = 1;
  *(int32_t *)((longlong)param_1 + 0x11c) = 0;
  *(int32_t *)(param_1 + 0x24) = 0;
  *(int32_t *)((longlong)param_1 + 0x124) = 0;
  *(int32_t *)(param_1 + 0x25) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x12d) = 1;
  *(int8_t *)((longlong)param_1 + 300) = 0;
  *(int32_t *)(param_1 + 0x27) = 0xffffffff;
  *(int8_t *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 1;
  *(int16_t *)((longlong)param_1 + 0x155) = 1;
  *(int8_t *)((longlong)param_1 + 0x157) = 0;
  *(int32_t *)(param_1 + 0x2a) = 0;
  *(int8_t *)((longlong)param_1 + 0x154) = 0x8a;
  *(int32_t *)(param_1 + 0x2b) = 0xffffffff;
  *(int32_t *)(param_1 + 0x2c) = param_2;
  *(int32_t *)(param_1 + 0x31) = 0;
  param_1[0x2d] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(int32_t *)(param_1 + 0x32) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  param_1[0x34] = 0;
  *(int8_t *)(param_1 + 0x3a) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(int32_t *)(param_1 + 0x39) = 0;
  *(int32_t *)(param_1 + 0x43) = 0;
  param_1[0x40] = 0;
  *(int32_t *)(param_1 + 0x3f) = 0xffffffff;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  _Mtx_init_in_situ(param_1 + 0x44,2);
  plVar1 = param_1 + 0x50;
  *plVar1 = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(int32_t *)(param_1 + 0x53) = 3;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(int32_t *)(param_1 + 0x5b) = 3;
  *(int16_t *)(param_1 + 0x54) = 0;
  *(int32_t *)((longlong)param_1 + 0x2a4) = 0;
  *(int32_t *)(param_1 + 0x55) = 0;
  *(int32_t *)((longlong)param_1 + 0x2ac) = 0;
  *(int32_t *)(param_1 + 0x56) = 0;
  *(uint64_t *)((longlong)param_1 + 0x2b4) = 0;
  *(int32_t *)((longlong)param_1 + 0x332) = 0;
  *(uint64_t *)((longlong)param_1 + 0x324) = 0;
  *(int32_t *)((longlong)param_1 + 0x32c) = 0;
  *(int16_t *)(param_1 + 0x66) = 0;
  *(int8_t *)((longlong)param_1 + 0x336) = 0;
  *(uint64_t *)((longlong)param_1 + 0x2e4) = 0;
  *(uint64_t *)((longlong)param_1 + 0x2ec) = 0;
  *(uint64_t *)((longlong)param_1 + 0x2f4) = 0;
  *(uint64_t *)((longlong)param_1 + 0x2fc) = 0;
  *(uint64_t *)((longlong)param_1 + 0x304) = 0;
  *(uint64_t *)((longlong)param_1 + 0x30c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x314) = 0;
  *(uint64_t *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x6e] = 0;
  param_1[0x71] = &unknown_var_720_ptr;
  param_1[0x72] = 0;
  *(int32_t *)(param_1 + 0x73) = 0;
  param_1[0x71] = &unknown_var_3456_ptr;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  *(int32_t *)(param_1 + 0x73) = 0;
  *(int32_t *)((longlong)param_1 + 0x3ac) = 0;
  LOCK();
  *(int8_t *)((longlong)param_1 + 900) = 0;
  UNLOCK();
  LOCK();
  *(int32_t *)(param_1 + 0x70) = 0;
  UNLOCK();
  param_1[0x2d] = 0;
  *(int8_t *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(int32_t *)(param_1 + 0x32) = 0;
  param_1[0x15] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(uint64_t *)((longlong)param_1 + 0x35c) = 0;
  *(int32_t *)(param_1 + 0x75) = 0xffffffff;
  param_1[0x68] = 0;
  *(int32_t *)((longlong)param_1 + 0x36c) = 0;
  *(int32_t *)((longlong)param_1 + 0x364) = 0;
  param_1[0x3e] = 0;
  *(int32_t *)((longlong)param_1 + 0x354) = 0;
  *(int32_t *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x6f] = 0;
  param_1[0x4e] = 0;
  *(int8_t *)(param_1 + 0x6b) = 0;
  param_1[0x69] = 0;
  *(int32_t *)(param_1 + 0x6a) = 0xffffffff;
  param_1[0x17] = 0;
  LOCK();
  *(int8_t *)(param_1 + 0x19) = 0;
  UNLOCK();
  *(int8_t *)((longlong)param_1 + 0xc9) = 0;
  *(int32_t *)((longlong)param_1 + 0xcc) = 0;
  lVar2 = *plVar1;
  uVar3 = (param_1[0x51] - lVar2) / 0x14;
  if (uVar3 < 5) {
    FUN_18023dcd0(plVar1,5 - uVar3,plVar1,lVar2,uVar4);
  }
  else {
    param_1[0x51] = lVar2 + 100;
  }
  return param_1;
}



uint64_t FUN_18023a6d0(uint64_t param_1,ulonglong param_2)

{
  FUN_18023a780();
  if ((param_2 & 1) != 0) {
    free(param_1,0x3b0);
  }
  return param_1;
}






// 函数: void FUN_18023a710(longlong param_1)
void FUN_18023a710(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  }
  return;
}






// 函数: void FUN_18023a740(longlong param_1)
void FUN_18023a740(longlong param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint64_t **)(param_1 + 0x20);
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023a780(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18023a780(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_1 = &unknown_var_8720_ptr;
  FUN_18023b050(param_1,1,param_3,param_4,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_1[0x6f];
  if (puVar1 != (uint64_t *)0x0) {
    puVar1[4] = &unknown_var_3456_ptr;
    if (puVar1[5] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar1[5] = 0;
    *(int32_t *)(puVar1 + 7) = 0;
    puVar1[4] = &unknown_var_720_ptr;
    *puVar1 = &unknown_var_3456_ptr;
    if (puVar1[1] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 3) = 0;
    *puVar1 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar1);
  }
  param_1[0x6f] = 0;
  if ((*(int *)((longlong)param_1 + 0x3ac) != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  param_1[0x71] = &unknown_var_3456_ptr;
  if (param_1[0x72] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x72] = 0;
  *(int32_t *)(param_1 + 0x74) = 0;
  param_1[0x71] = &unknown_var_720_ptr;
  if ((longlong *)param_1[0x6e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x6e] + 0x38))();
  }
  if (param_1[0x58] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[0x50] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  _Mtx_destroy_in_situ();
  FUN_1802a0bb0(param_1 + 0x3f);
  if ((longlong *)param_1[0x1f] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1f] + 0x38))();
  }
  *param_1 = &unknown_var_8584_ptr;
  param_1[2] = &unknown_var_720_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_18023a940(longlong param_1)

{
  longlong *plVar1;
  uint64_t *puVar2;
  longlong lVar3;
  int iVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t auStack_70 [2];
  int8_t auStack_60 [16];
  uint64_t uStack_50;
  uint64_t uStack_48;
  code *pcStack_40;
  code *pcStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  int32_t uStack_14;
  uint64_t uStack_10;
  
  uVar6 = 0xfffffffffffffffe;
  while( true ) {
    *(longlong *)(param_1 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
    if (*(uint64_t **)(param_1 + 0x1f0) != (uint64_t *)0x0) {
      plVar1 = (longlong *)**(uint64_t **)(param_1 + 0x1f0);
      (**(code **)(*plVar1 + 0xb0))(plVar1,auStack_60);
      puVar2 = *(uint64_t **)(param_1 + 0x1f0);
      *(int32_t *)((longlong)puVar2 + 0x44) = *(int32_t *)(_DAT_180c86890 + 0x2ca8);
      iVar4 = (**(code **)(*(longlong *)*puVar2 + 0xb0))((longlong *)*puVar2,auStack_70);
      uVar5 = (**(code **)(*(longlong *)*puVar2 + 0xa8))();
      *(int32_t *)((longlong)puVar2 + 0x4c) = uVar5;
      if (iVar4 != 0) {
        FUN_180626ee0(&unknown_var_128_ptr,iVar4);
      }
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_30 = (**(code **)(**(longlong **)(_DAT_180c8a9d0 + 0x260) + 0xc0))
                            (*(longlong **)(_DAT_180c8a9d0 + 0x260),auStack_70[0]);
      uStack_28 = FUN_180179480(_DAT_180c8a9d0 + 0x228,auStack_70[0],auStack_70);
      lVar3 = puVar2[2];
      *(uint64_t *)(lVar3 + 0x170) = uStack_30;
      *(uint64_t *)(lVar3 + 0x178) = uStack_28;
      *(uint64_t *)(lVar3 + 0x180) = uStack_20;
      *(ulonglong *)(lVar3 + 0x188) = CONCAT44(uStack_14,uStack_18);
      *(uint64_t *)(lVar3 + 400) = uStack_10;
      lVar3 = puVar2[2];
      *(longlong *)(lVar3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      LOCK();
      *(int32_t *)(lVar3 + 0x380) = 2;
      UNLOCK();
      LOCK();
      *(int8_t *)(lVar3 + 900) = 1;
      UNLOCK();
    }
    if ((*(longlong *)(param_1 + 0x170) != 0) || (*(longlong *)(param_1 + 0x178) != 0))
    goto LAB_18023ab3f;
    if (*(longlong *)(param_1 + 0xa8) != 0) break;
    if (*(int *)(param_1 + 0x160) == 2) {
      FUN_18023ab60(param_1);
LAB_18023ab3f:
      return param_1 + 0x168;
    }
    param_1 = FUN_1800bd410(_DAT_180c86898);
  }
  uStack_50 = 0;
  uStack_48 = 0;
  pcStack_40 = (code *)0x0;
  pcStack_38 = _guard_check_icall;
  FUN_18023c450(param_1,1,0xffffffff,&uStack_50,uVar6);
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(&uStack_50,0,0);
  }
  goto LAB_18023ab3f;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18023ab60(uint64_t *param_1,uint64_t param_2,int32_t param_3)
void FUN_18023ab60(uint64_t *param_1,uint64_t param_2,int32_t param_3)

{
  uint64_t *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  void *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int8_t auStack_1b8 [32];
  uint64_t *puStack_198;
  int32_t uStack_190;
  longlong *plStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  int32_t uStack_170;
  int32_t uStack_16c;
  code *pcStack_168;
  code *pcStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  ushort uStack_148;
  int8_t uStack_146;
  uint64_t uStack_144;
  uint64_t uStack_13c;
  uint64_t uStack_134;
  uint64_t uStack_12c;
  uint64_t uStack_124;
  uint64_t uStack_11c;
  uint64_t uStack_114;
  uint64_t uStack_10c;
  uint64_t uStack_104;
  int32_t uStack_fc;
  int16_t uStack_f8;
  int32_t uStack_f6;
  int8_t uStack_f2;
  uint64_t uStack_b8;
  uint64_t *puStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int16_t uStack_46;
  int16_t uStack_44;
  int8_t uStack_42;
  uint8_t uStack_41;
  ulonglong uStack_38;
  
  uStack_b8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_1b8;
  puVar1 = param_1 + 0x44;
  puStack_b0 = puVar1;
  iVar3 = _Mtx_lock(puVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,(int32_t)uStack_178);
  if ((param_1[0x2e] == 0) &&
     (uStack_178 = (longlong *)CONCAT44(uStack_178._4_4_,(int32_t)uStack_178), param_1[0x2f] == 0
     )) {
    uVar7 = 0;
    lStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_96 = 3;
    uStack_46 = 0;
    uStack_44 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    if (param_1[0x15] == 0) {
      cVar2 = FUN_18023aef0(param_1,&lStack_a8);
    }
    else {
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_146 = 3;
      uStack_f6 = 0;
      uStack_104 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_f2 = 0;
      uStack_144 = 0;
      uStack_13c = 0;
      uStack_134 = 0;
      uStack_12c = 0;
      uStack_124 = 0;
      uStack_11c = 0;
      uStack_114 = 0;
      uStack_10c = 0;
      plStack_188 = &lStack_a8;
      pcStack_168 = (code *)&unknown_var_5040_ptr;
      pcStack_160 = FUN_18023eac0;
      uStack_180._0_4_ = SUB84(param_1,0);
      uStack_180._4_4_ = (int32_t)((ulonglong)param_1 >> 0x20);
      uStack_170 = (int32_t)uStack_180;
      uStack_16c = uStack_180._4_4_;
      puStack_198 = &uStack_178;
      uStack_180 = param_1;
      uStack_178 = plStack_188;
      cVar2 = (**(code **)(**(longlong **)(param_1[0x15] + 0x88) + 0x60))
                        (*(longlong **)(param_1[0x15] + 0x88),&system_data_1050,param_1[0x15] + 0xc,0);
      if (pcStack_168 != (code *)0x0) {
        (*pcStack_168)(&uStack_178,0,0);
      }
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = uStack_148 & 0xff00;
    }
    if (cVar2 == '\0') {
      puVar6 = &system_buffer_ptr;
      if ((void *)param_1[3] != (void *)0x0) {
        puVar6 = (void *)param_1[3];
      }
      FUN_180626f80(&unknown_var_8200_ptr,puVar6);
      uStack_94 = *(uint64_t *)((longlong)param_1 + 0x2e4);
      uStack_8c = *(uint64_t *)((longlong)param_1 + 0x2ec);
      uStack_84 = *(uint64_t *)((longlong)param_1 + 0x2f4);
      uStack_7c = *(uint64_t *)((longlong)param_1 + 0x2fc);
      uStack_74 = *(uint64_t *)((longlong)param_1 + 0x304);
      uStack_6c = *(uint64_t *)((longlong)param_1 + 0x30c);
      uStack_64 = *(uint64_t *)((longlong)param_1 + 0x314);
      uStack_5c = *(uint64_t *)((longlong)param_1 + 0x31c);
      uStack_54 = *(uint64_t *)((longlong)param_1 + 0x324);
      uStack_4c = *(int32_t *)((longlong)param_1 + 0x32c);
      uStack_48 = (int16_t)*(int32_t *)(param_1 + 0x66);
      uStack_46 = (int16_t)((uint)*(int32_t *)(param_1 + 0x66) >> 0x10);
      uVar5 = *(uint64_t *)((longlong)param_1 + 0x334);
      uStack_44 = (int16_t)uVar5;
      uStack_42 = (int8_t)((ulonglong)uVar5 >> 0x10);
      uStack_41 = (uint8_t)((ulonglong)uVar5 >> 0x18);
      FUN_1802a1bc0(&lStack_a8);
      plStack_188 = (longlong *)CONCAT44(plStack_188._4_4_,0xffff00ff);
      uVar8 = uVar7;
      if (uStack_a0 != 0) {
        do {
          uVar4 = (uint)uVar7 & 0x80000003;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
          }
          *(int8_t *)(uVar8 + lStack_a8) =
               *(int8_t *)((longlong)&plStack_188 + (longlong)(int)uVar4);
          uVar4 = (uint)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
          uVar8 = uVar8 + 1;
        } while ((ulonglong)(longlong)(int)uVar4 < uStack_a0);
      }
    }
    uStack_54 = CONCAT44(uStack_54._4_4_ | *(uint *)(param_1 + 0x65),(int32_t)uStack_54);
    puStack_198 = param_1;
    uStack_190 = param_3;
    cVar2 = FUN_1800a5810(_DAT_180c86938,&lStack_a8,1);
    if (cVar2 == '\0') {
      uVar5 = FUN_1800c0100();
      puStack_198 = param_1;
      uStack_190 = param_3;
      FUN_1800a5810(_DAT_180c86938,uVar5,1);
    }
    puVar6 = &system_buffer_ptr;
    if ((void *)param_1[3] != (void *)0x0) {
      puVar6 = (void *)param_1[3];
    }
    plStack_188 = (longlong *)FUN_180086570(&uStack_158,puVar6);
    *plStack_188 = (longlong)&unknown_var_720_ptr;
    if (uStack_98._1_1_ == '\0') {
      if (((char)uStack_98 == '\0') && (lStack_a8 != 0)) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
    }
  }
  iVar3 = _Mtx_unlock(puVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_1b8);
}



char FUN_18023aef0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  char cVar6;
  char cVar7;
  void *puVar8;
  longlong lStackX_10;
  longlong *aplStack_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  
  cVar6 = '\0';
  lStackX_10 = param_2;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    uVar5 = *(uint64_t *)(param_1 + 0x2ec);
    *(uint64_t *)(param_2 + 0x14) = *(uint64_t *)(param_1 + 0x2e4);
    *(uint64_t *)(param_2 + 0x1c) = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0x2fc);
    *(uint64_t *)(param_2 + 0x24) = *(uint64_t *)(param_1 + 0x2f4);
    *(uint64_t *)(param_2 + 0x2c) = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0x30c);
    *(uint64_t *)(param_2 + 0x34) = *(uint64_t *)(param_1 + 0x304);
    *(uint64_t *)(param_2 + 0x3c) = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0x31c);
    *(uint64_t *)(param_2 + 0x44) = *(uint64_t *)(param_1 + 0x314);
    *(uint64_t *)(param_2 + 0x4c) = uVar5;
    uVar2 = *(int32_t *)(param_1 + 0x328);
    uVar3 = *(int32_t *)(param_1 + 0x32c);
    uVar4 = *(int32_t *)(param_1 + 0x330);
    *(int32_t *)(param_2 + 0x54) = *(int32_t *)(param_1 + 0x324);
    *(int32_t *)(param_2 + 0x58) = uVar2;
    *(int32_t *)(param_2 + 0x5c) = uVar3;
    *(int32_t *)(param_2 + 0x60) = uVar4;
    *(uint64_t *)(param_2 + 100) = *(uint64_t *)(param_1 + 0x334);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x88);
    pcStack_20 = (code *)&unknown_var_4736_ptr;
    pcStack_18 = FUN_18023e030;
    aplStack_30[0] = &lStackX_10;
    cVar6 = (**(code **)(*plVar1 + 0x60))
                      (plVar1,&system_data_1050,*(longlong *)(param_1 + 0xa8) + 0xc,0,aplStack_30);
    if (pcStack_20 != (code *)0x0) {
      (*pcStack_20)(aplStack_30,0,0);
    }
    if (cVar6 != '\0') {
      return cVar6;
    }
  }
  if (((*(int *)(param_1 + 0x398) != 0) && (cVar7 = FUN_180624af0(param_1 + 0x388), cVar7 != '\0'))
     && (cVar6 = FUN_1802a7680(param_1 + 0x388,lStackX_10), cVar6 != '\0')) {
    return cVar6;
  }
  puVar8 = &system_buffer_ptr;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    puVar8 = *(void **)(param_1 + 0x18);
  }
  FUN_180626f80(&unknown_var_8112_ptr,puVar8);
  return cVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




