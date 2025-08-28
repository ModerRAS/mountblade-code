#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part032.c - 10 个函数

// 函数: void FUN_1804ffdd0(uint64_t *param_1)
void FUN_1804ffdd0(uint64_t *param_1)

{
  _Mtx_destroy_in_situ();
  *param_1 = &unknown_var_5224_ptr;
  param_1[7] = &unknown_var_3456_ptr;
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[8] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  param_1[7] = &unknown_var_720_ptr;
  param_1[1] = &unknown_var_3456_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = &unknown_var_720_ptr;
  return;
}



uint64_t FUN_1804ffe10(uint64_t param_1,ulonglong param_2)

{
  FUN_180585cf0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xbe0);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_1804ffe50(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  longlong lVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  param_1[1] = param_2[1];
  lVar6 = param_2[3] - param_2[2] >> 3;
  uVar1 = *(uint *)(param_2 + 5);
  *(uint *)(param_1 + 5) = uVar1;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,uVar1 & 0xff,param_4,uVar7);
  }
  param_1[2] = lVar5;
  param_1[3] = lVar5;
  param_1[4] = lVar5 + lVar6 * 8;
  lVar6 = param_1[2];
  lVar5 = param_2[2];
  if (lVar5 != param_2[3]) {
                    // WARNING: Subroutine does not return
    memmove(lVar6,lVar5,param_2[3] - lVar5);
  }
  param_1[3] = lVar6;
  uVar3 = *(int32_t *)((longlong)param_2 + 0x34);
  lVar6 = param_2[7];
  uVar4 = *(int32_t *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(int32_t *)((longlong)param_1 + 0x34) = uVar3;
  *(int *)(param_1 + 7) = (int)lVar6;
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar4;
  uVar3 = *(int32_t *)((longlong)param_2 + 0x44);
  lVar6 = param_2[9];
  uVar4 = *(int32_t *)((longlong)param_2 + 0x4c);
  *(int *)(param_1 + 8) = (int)param_2[8];
  *(int32_t *)((longlong)param_1 + 0x44) = uVar3;
  *(int *)(param_1 + 9) = (int)lVar6;
  *(int32_t *)((longlong)param_1 + 0x4c) = uVar4;
  *(char *)(param_1 + 10) = (char)param_2[10];
  plVar2 = (longlong *)param_2[0xb];
  param_1[0xb] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  plVar2 = (longlong *)param_2[0xc];
  param_1[0xc] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  plVar2 = (longlong *)param_2[0xd];
  param_1[0xd] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  plVar2 = (longlong *)param_2[0xe];
  param_1[0xe] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  plVar2 = (longlong *)param_2[0xf];
  param_1[0xf] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  plVar2 = (longlong *)param_2[0x10];
  param_1[0x10] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  *(char *)(param_1 + 0x11) = (char)param_2[0x11];
  *(int32_t *)((longlong)param_1 + 0x8c) = *(int32_t *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(int32_t *)((longlong)param_1 + 0x94) = *(int32_t *)((longlong)param_2 + 0x94);
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  uVar7 = *(uint64_t *)((longlong)param_2 + 0xa4);
  *(uint64_t *)((longlong)param_1 + 0x9c) = *(uint64_t *)((longlong)param_2 + 0x9c);
  *(uint64_t *)((longlong)param_1 + 0xa4) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0xb4);
  *(uint64_t *)((longlong)param_1 + 0xac) = *(uint64_t *)((longlong)param_2 + 0xac);
  *(uint64_t *)((longlong)param_1 + 0xb4) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0xc4);
  *(uint64_t *)((longlong)param_1 + 0xbc) = *(uint64_t *)((longlong)param_2 + 0xbc);
  *(uint64_t *)((longlong)param_1 + 0xc4) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0xd4);
  *(uint64_t *)((longlong)param_1 + 0xcc) = *(uint64_t *)((longlong)param_2 + 0xcc);
  *(uint64_t *)((longlong)param_1 + 0xd4) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0xe4);
  *(uint64_t *)((longlong)param_1 + 0xdc) = *(uint64_t *)((longlong)param_2 + 0xdc);
  *(uint64_t *)((longlong)param_1 + 0xe4) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0xf4);
  *(uint64_t *)((longlong)param_1 + 0xec) = *(uint64_t *)((longlong)param_2 + 0xec);
  *(uint64_t *)((longlong)param_1 + 0xf4) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0x104);
  *(uint64_t *)((longlong)param_1 + 0xfc) = *(uint64_t *)((longlong)param_2 + 0xfc);
  *(uint64_t *)((longlong)param_1 + 0x104) = uVar7;
  uVar7 = *(uint64_t *)((longlong)param_2 + 0x114);
  *(uint64_t *)((longlong)param_1 + 0x10c) = *(uint64_t *)((longlong)param_2 + 0x10c);
  *(uint64_t *)((longlong)param_1 + 0x114) = uVar7;
  *(int32_t *)((longlong)param_1 + 0x11c) = *(int32_t *)((longlong)param_2 + 0x11c);
  *(char *)(param_1 + 0x24) = (char)param_2[0x24];
  *(int8_t *)((longlong)param_1 + 0x121) = *(int8_t *)((longlong)param_2 + 0x121);
  *(int8_t *)((longlong)param_1 + 0x122) = *(int8_t *)((longlong)param_2 + 0x122);
  *(int8_t *)((longlong)param_1 + 0x123) = *(int8_t *)((longlong)param_2 + 0x123);
  *(int8_t *)((longlong)param_1 + 0x124) = *(int8_t *)((longlong)param_2 + 0x124);
  *(int8_t *)((longlong)param_1 + 0x125) = *(int8_t *)((longlong)param_2 + 0x125);
  *(int8_t *)((longlong)param_1 + 0x126) = *(int8_t *)((longlong)param_2 + 0x126);
  *(int8_t *)((longlong)param_1 + 0x127) = *(int8_t *)((longlong)param_2 + 0x127);
  lVar6 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = lVar6;
  lVar6 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = lVar6;
  lVar6 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = lVar6;
  *(int *)(param_1 + 0x2b) = (int)param_2[0x2b];
  uVar7 = *(uint64_t *)((longlong)param_2 + 0x164);
  *(uint64_t *)((longlong)param_1 + 0x15c) = *(uint64_t *)((longlong)param_2 + 0x15c);
  *(uint64_t *)((longlong)param_1 + 0x164) = uVar7;
  *(int32_t *)((longlong)param_1 + 0x16c) = *(int32_t *)((longlong)param_2 + 0x16c);
  *(char *)(param_1 + 0x2e) = (char)param_2[0x2e];
  return param_1;
}



uint64_t *
FUN_180500130(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x38))();
  }
  *param_1 = &unknown_var_5552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x40,param_3,param_4,uVar1);
  }
  return param_1;
}



uint64_t * FUN_180500190(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_5552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}



uint64_t FUN_1805001c0(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *param_1;
  fVar4 = *(float *)(param_1 + 5) - *(float *)(param_1 + 4);
  fVar3 = *(float *)((longlong)param_1 + 0x2c) - *(float *)((longlong)param_1 + 0x24);
  fVar5 = ((*(float *)(lVar1 + 0xc) - *(float *)((longlong)param_1 + 0x24)) * fVar3 +
          (*(float *)(lVar1 + 8) - *(float *)(param_1 + 4)) * fVar4) /
          (fVar3 * fVar3 + fVar4 * fVar4);
  fVar2 = 0.0;
  if ((0.0 <= fVar5) && (fVar2 = fVar5, 1.0 <= fVar5)) {
    fVar2 = 1.0;
  }
  fVar3 = *(float *)(lVar1 + 0xc) - (fVar3 * fVar2 + *(float *)((longlong)param_1 + 0x24));
  fVar2 = *(float *)(lVar1 + 8) - (fVar4 * fVar2 + *(float *)(param_1 + 4));
  fVar2 = fVar2 * fVar2 + fVar3 * fVar3;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  fVar2 < *(float *)(param_1 + 6) || fVar2 == *(float *)(param_1 + 6));
}






// 函数: void FUN_1805a0610(longlong param_1,uint64_t param_2)
void FUN_1805a0610(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  longlong lVar2;
  int8_t uVar3;
  int32_t uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x108);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x8f8) + 0x9e8);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int32_t *)(lVar2 + 0xf0);
  }
  if ((((*(uint *)(lVar1 + 0x56c) & 0x800) == 0) || (*(longlong *)(lVar1 + 0x590) == 0)) ||
     (*(char *)(*(longlong *)(lVar1 + 0x590) + 0x34bc) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_1805a0690(param_1,param_2,lVar2,*(uint64_t *)(*(longlong *)(lVar1 + 0x8f8) + 0x9f0),uVar3,
                uVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805a0690(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
                      byte param_5,int param_6)

{
  uint64_t *puVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte bVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  int aiStackX_18 [2];
  int32_t auStackX_20 [2];
  int32_t auStack_58 [2];
  int8_t auStack_50 [16];
  
  lVar13 = *(longlong *)(param_1 + 0x108);
  bVar14 = (byte)((uint)*(int32_t *)(lVar13 + 0x564) >> 0x1f) ^ 1;
  if (param_4 == 0) {
    iVar20 = -1;
    uVar12 = param_2;
  }
  else {
    iVar20 = *(int *)((longlong)*(int *)(param_4 + 0xf0) * 0xa0 + 100 +
                     *(longlong *)(param_4 + 0xd0));
    uVar12 = param_2 & 0xffffffff;
  }
  if (param_3 != 0) {
    lVar19 = (longlong)param_6 * 0xa0 + *(longlong *)(param_3 + 0xd0);
    iVar2 = *(int *)(lVar19 + 100);
    if (iVar2 < 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_18054f900((longlong)iVar2 * 0x170 + _DAT_180c95ff0,uVar12,bVar14,iVar20,param_5);
      if ((lVar8 == 0) && ((*(byte *)(lVar19 + 0x50) >> 1 & 1) != 0)) {
        if ((*(longlong *)(lVar13 + 0x628) == param_3) && (*(int *)(lVar13 + 0x644) == param_6)) {
          iVar5 = *(int *)(lVar13 + 0x640);
        }
        else {
          aiStackX_18[0] = 0xffffffff;
          auStack_58[0] = 0xffffffff;
          auStackX_20[0] = 0xffffffff;
          FUN_18050e440(lVar13,param_3,auStack_58,auStackX_20,aiStackX_18,auStack_50,param_6);
          iVar5 = aiStackX_18[0];
        }
        if (-1 < iVar5) {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x8f8);
          lVar19 = *(longlong *)((longlong)iVar5 * 0x1f8 + 0xd8 + lVar13);
          iVar11 = 0;
          iVar5 = (int)((*(longlong *)((longlong)iVar5 * 0x1f8 + 0xe0 + lVar13) - lVar19) / 0xa0);
          if (0 < iVar5) {
            puVar15 = (uint *)(lVar19 + 0x50);
            lVar13 = 0;
            do {
              if ((*puVar15 >> 8 & 1) != 0) goto LAB_1805a0863;
              iVar11 = iVar11 + 1;
              lVar13 = lVar13 + 1;
              puVar15 = puVar15 + 0x28;
            } while (lVar13 < iVar5);
          }
          iVar11 = -1;
LAB_1805a0863:
          iVar5 = *(int *)((longlong)iVar11 * 0xa0 + 100 + lVar19);
          if ((-1 < iVar5) && (iVar5 != iVar2)) {
            lVar8 = FUN_18054f900((longlong)iVar5 * 0x170 + _DAT_180c95ff0,param_2 & 0xffffffff,
                                  bVar14,iVar20,param_5);
          }
        }
      }
    }
    return lVar8;
  }
  uVar18 = 0xffffffff;
  lVar13 = *(longlong *)(_DAT_180c95ff0 + 0x38);
  puVar15 = (uint *)0x0;
  uVar17 = (int)uVar12 * 2 + 2;
  uVar12 = (ulonglong)*(uint *)(_DAT_180c95ff0 + 0x40);
  uVar16 = (uint)bVar14;
  uVar10 = 0xffffffff;
  if (iVar20 < 0) {
    uVar9 = (param_5 | 2) << 0xb | (uint)bVar14 | uVar17;
    for (puVar3 = *(uint **)(lVar13 + ((ulonglong)(longlong)(int)uVar9 % uVar12) * 8);
        (puVar7 = puVar15, puVar3 != (uint *)0x0 && (puVar7 = puVar3, uVar9 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar13 + *(longlong *)(_DAT_180c95ff0 + 0x40) * 8);
    }
    puVar3 = *(uint **)(lVar13 + *(longlong *)(_DAT_180c95ff0 + 0x40) * 8);
    if ((puVar7 == puVar3) || (uVar18 = puVar7[1], uVar18 != 0)) {
      uVar17 = (uint)param_5 << 0xb | uVar16 | uVar17;
      for (puVar7 = *(uint **)(lVar13 + ((ulonglong)(longlong)(int)uVar17 % uVar12) * 8);
          (puVar6 = puVar15, puVar7 != (uint *)0x0 && (puVar6 = puVar7, uVar17 != *puVar7));
          puVar7 = *(uint **)(puVar7 + 2)) {
      }
      puVar15 = puVar3;
      if (puVar6 != (uint *)0x0) {
        puVar15 = puVar6;
      }
      uVar10 = 0xffffffff;
      if (puVar15 != puVar3) {
        uVar10 = puVar15[1];
      }
    }
  }
  else {
    uVar9 = (uint)param_5 << 0xb | uVar16 | uVar17;
    for (puVar3 = *(uint **)(lVar13 + ((ulonglong)(longlong)(int)uVar9 % uVar12) * 8);
        (puVar7 = puVar15, puVar3 != (uint *)0x0 && (puVar7 = puVar3, uVar9 != *puVar3));
        puVar3 = *(uint **)(puVar3 + 2)) {
    }
    uVar4 = *(ulonglong *)(_DAT_180c95ff0 + 0x40);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar13 + uVar4 * 8);
    }
    puVar1 = (uint64_t *)(lVar13 + uVar4 * 8);
    if ((puVar7 == (uint *)*puVar1) || (uVar18 = puVar7[1], uVar18 != 0)) {
      uVar10 = iVar20 + 1;
      if (iVar20 < -1) {
        uVar10 = 0;
      }
      uVar10 = (uVar10 | (uint)param_5 << 6) << 5 | (uint)bVar14 | uVar17;
      for (puVar3 = *(uint **)(lVar13 + ((ulonglong)(longlong)(int)uVar10 % uVar12) * 8);
          (puVar7 = puVar15, puVar3 != (uint *)0x0 && (puVar7 = puVar3, uVar10 != *puVar3));
          puVar3 = *(uint **)(puVar3 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*puVar1;
      }
      puVar3 = *(uint **)(lVar13 + uVar4 * 8);
      if (puVar7 == puVar3) {
        iVar2 = *(int *)((longlong)iVar20 * 0x170 + 0x20 + _DAT_180c95ff0);
        if (iVar2 != iVar20) {
          uVar10 = iVar2 + 1;
          if (iVar2 < -1) {
            uVar10 = 0;
          }
          uVar17 = (uVar10 | (uint)param_5 << 6) << 5 | uVar16 | uVar17;
          for (puVar6 = *(uint **)(lVar13 + ((ulonglong)(longlong)(int)uVar17 % (uVar4 & 0xffffffff)
                                            ) * 8);
              (puVar7 = puVar15, puVar6 != (uint *)0x0 && (puVar7 = puVar6, uVar17 != *puVar6));
              puVar6 = *(uint **)(puVar6 + 2)) {
          }
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)*puVar1;
          }
        }
        uVar10 = 0xffffffff;
        if (puVar7 == puVar3) goto FUN_18054fba8;
      }
      uVar10 = puVar7[1];
    }
  }
FUN_18054fba8:
  if (((int)uVar18 < 0) || ((-1 < (int)uVar10 && ((int)uVar10 < (int)uVar18)))) {
    uVar18 = uVar10;
  }
  if (-1 < (int)uVar18) {
    return (longlong)(int)uVar18 * 0x108 + *(longlong *)(_DAT_180c95ff0 + 0x28);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805a06f1(uint64_t param_1,uint64_t param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong unaff_RBP;
  int8_t unaff_SIL;
  longlong unaff_RDI;
  uint *puVar6;
  longlong lVar7;
  int32_t unaff_R15D;
  longlong in_stack_000000a0;
  int32_t in_stack_000000a8;
  int iStack00000000000000b0;
  int8_t in_stack_000000c0;
  int in_stack_000000c8;
  
  lVar7 = (longlong)in_stack_000000c8 * 0xa0 + *(longlong *)(param_3 + 0xd0);
  iVar1 = *(int *)(lVar7 + 100);
  if (iVar1 < 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_18054f900((longlong)iVar1 * 0x170 + _DAT_180c95ff0,param_2,unaff_SIL,unaff_R15D,
                          in_stack_000000c0);
    if ((lVar4 == 0) && ((*(byte *)(lVar7 + 0x50) >> 1 & 1) != 0)) {
      if ((*(longlong *)(unaff_RDI + 0x628) == unaff_RBP) &&
         (*(int *)(unaff_RDI + 0x644) == in_stack_000000c8)) {
        iStack00000000000000b0 = *(int *)(unaff_RDI + 0x640);
      }
      else {
        iStack00000000000000b0 = -1;
        FUN_18050e440();
      }
      if (-1 < iStack00000000000000b0) {
        lVar7 = *(longlong *)(*(longlong *)(in_stack_000000a0 + 0x108) + 0x8f8);
        lVar3 = *(longlong *)((longlong)iStack00000000000000b0 * 0x1f8 + 0xd8 + lVar7);
        iVar5 = 0;
        iVar2 = (int)((*(longlong *)((longlong)iStack00000000000000b0 * 0x1f8 + 0xe0 + lVar7) -
                      lVar3) / 0xa0);
        if (0 < iVar2) {
          puVar6 = (uint *)(lVar3 + 0x50);
          lVar7 = 0;
          do {
            if ((*puVar6 >> 8 & 1) != 0) goto LAB_1805a0863;
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + 1;
            puVar6 = puVar6 + 0x28;
          } while (lVar7 < iVar2);
        }
        iVar5 = -1;
LAB_1805a0863:
        iVar2 = *(int *)((longlong)iVar5 * 0xa0 + 100 + lVar3);
        if ((-1 < iVar2) && (iVar2 != iVar1)) {
          lVar4 = FUN_18054f900((longlong)iVar2 * 0x170 + _DAT_180c95ff0,in_stack_000000a8,unaff_SIL
                                ,unaff_R15D,in_stack_000000c0);
        }
      }
    }
  }
  return lVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805a073a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RBP;
  int8_t unaff_SIL;
  longlong unaff_RDI;
  uint *puVar6;
  int unaff_R12D;
  longlong unaff_R13;
  int unaff_R14D;
  int32_t unaff_R15D;
  longlong in_stack_000000a0;
  int32_t in_stack_000000a8;
  int iStack00000000000000b0;
  int8_t in_stack_000000c0;
  
  lVar3 = FUN_18054f900(param_1 + _DAT_180c95ff0);
  if ((lVar3 == 0) && ((*(byte *)(unaff_R13 + 0x50) >> 1 & 1) != 0)) {
    if ((*(longlong *)(unaff_RDI + 0x628) == unaff_RBP) &&
       (*(int *)(unaff_RDI + 0x644) == unaff_R14D)) {
      iStack00000000000000b0 = *(int *)(unaff_RDI + 0x640);
    }
    else {
      iStack00000000000000b0 = -1;
      FUN_18050e440();
    }
    if (-1 < iStack00000000000000b0) {
      lVar5 = *(longlong *)(*(longlong *)(in_stack_000000a0 + 0x108) + 0x8f8);
      lVar2 = *(longlong *)((longlong)iStack00000000000000b0 * 0x1f8 + 0xd8 + lVar5);
      iVar4 = 0;
      iVar1 = (int)((*(longlong *)((longlong)iStack00000000000000b0 * 0x1f8 + 0xe0 + lVar5) - lVar2)
                   / 0xa0);
      if (0 < iVar1) {
        puVar6 = (uint *)(lVar2 + 0x50);
        lVar5 = 0;
        do {
          if ((*puVar6 >> 8 & 1) != 0) goto LAB_1805a0863;
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 1;
          puVar6 = puVar6 + 0x28;
        } while (lVar5 < iVar1);
      }
      iVar4 = -1;
LAB_1805a0863:
      iVar1 = *(int *)((longlong)iVar4 * 0xa0 + 100 + lVar2);
      if ((-1 < iVar1) && (iVar1 != unaff_R12D)) {
        lVar3 = FUN_18054f900((longlong)iVar1 * 0x170 + _DAT_180c95ff0,in_stack_000000a8,unaff_SIL,
                              unaff_R15D,in_stack_000000c0);
      }
    }
  }
  return lVar3;
}






// 函数: void FUN_1805a08ae(void)
void FUN_1805a08ae(void)

{
  return;
}






// 函数: void FUN_1805a08c7(void)
void FUN_1805a08c7(void)

{
  return;
}



uint64_t FUN_1805a08cc(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1805a08d2(uint64_t param_1,int param_2)

{
  uint64_t *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  byte unaff_SIL;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int unaff_R15D;
  uint *puStack0000000000000058;
  byte in_stack_000000c0;
  
  uVar13 = 0xffffffff;
  lVar3 = *(longlong *)(_DAT_180c95ff0 + 0x38);
  puVar10 = (uint *)0x0;
  uVar12 = param_2 * 2 + 2;
  uVar14 = (ulonglong)*(uint *)(_DAT_180c95ff0 + 0x40);
  uVar11 = (uint)unaff_SIL;
  uVar9 = 0xffffffff;
  if (unaff_R15D < 0) {
    uVar8 = (in_stack_000000c0 | 2) << 0xb | (uint)unaff_SIL | uVar12;
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar8 % uVar14) * 8);
        (puVar7 = puVar10, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar8 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + *(longlong *)(_DAT_180c95ff0 + 0x40) * 8);
    }
    puVar4 = *(uint **)(lVar3 + *(longlong *)(_DAT_180c95ff0 + 0x40) * 8);
    if ((puVar7 == puVar4) || (uVar13 = puVar7[1], uVar13 != 0)) {
      uVar12 = (uint)in_stack_000000c0 << 0xb | uVar11 | uVar12;
      for (puVar7 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar12 % uVar14) * 8);
          (puVar6 = puVar10, puVar7 != (uint *)0x0 && (puVar6 = puVar7, uVar12 != *puVar7));
          puVar7 = *(uint **)(puVar7 + 2)) {
      }
      puStack0000000000000058 = puVar4;
      if (puVar6 != (uint *)0x0) {
        puStack0000000000000058 = puVar6;
      }
      uVar9 = 0xffffffff;
      if (puStack0000000000000058 != puVar4) {
        uVar9 = puStack0000000000000058[1];
      }
    }
  }
  else {
    uVar8 = (uint)in_stack_000000c0 << 0xb | uVar11 | uVar12;
    for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar8 % uVar14) * 8);
        (puVar7 = puVar10, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar8 != *puVar4));
        puVar4 = *(uint **)(puVar4 + 2)) {
    }
    uVar5 = *(ulonglong *)(_DAT_180c95ff0 + 0x40);
    if (puVar7 == (uint *)0x0) {
      puVar7 = *(uint **)(lVar3 + uVar5 * 8);
    }
    puVar1 = (uint64_t *)(lVar3 + uVar5 * 8);
    if ((puVar7 == (uint *)*puVar1) || (uVar13 = puVar7[1], uVar13 != 0)) {
      uVar9 = unaff_R15D + 1;
      if (unaff_R15D < -1) {
        uVar9 = 0;
      }
      uVar9 = (uVar9 | (uint)in_stack_000000c0 << 6) << 5 | (uint)unaff_SIL | uVar12;
      for (puVar4 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar9 % uVar14) * 8);
          (puVar7 = puVar10, puVar4 != (uint *)0x0 && (puVar7 = puVar4, uVar9 != *puVar4));
          puVar4 = *(uint **)(puVar4 + 2)) {
      }
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)*puVar1;
      }
      puVar4 = *(uint **)(lVar3 + uVar5 * 8);
      if (puVar7 == puVar4) {
        iVar2 = *(int *)((longlong)unaff_R15D * 0x170 + 0x20 + _DAT_180c95ff0);
        if (iVar2 != unaff_R15D) {
          uVar9 = iVar2 + 1;
          if (iVar2 < -1) {
            uVar9 = 0;
          }
          uVar12 = (uVar9 | (uint)in_stack_000000c0 << 6) << 5 | uVar11 | uVar12;
          for (puVar6 = *(uint **)(lVar3 + ((ulonglong)(longlong)(int)uVar12 % (uVar5 & 0xffffffff))
                                           * 8);
              (puVar7 = puVar10, puVar6 != (uint *)0x0 && (puVar7 = puVar6, uVar12 != *puVar6));
              puVar6 = *(uint **)(puVar6 + 2)) {
          }
          if (puVar7 == (uint *)0x0) {
            puVar7 = (uint *)*puVar1;
          }
        }
        uVar9 = 0xffffffff;
        if (puVar7 == puVar4) goto FUN_18054fba8;
      }
      uVar9 = puVar7[1];
    }
  }
FUN_18054fba8:
  if (((int)uVar13 < 0) || ((-1 < (int)uVar9 && ((int)uVar9 < (int)uVar13)))) {
    uVar13 = uVar9;
  }
  if (-1 < (int)uVar13) {
    return (longlong)(int)uVar13 * 0x108 + *(longlong *)(_DAT_180c95ff0 + 0x28);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a0900(longlong param_1,ulonglong param_2)
void FUN_1805a0900(longlong param_1,ulonglong param_2)

{
  int8_t uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x108);
  uVar7 = *(ulonglong *)(*(longlong *)(lVar4 + 0x8f8) + 0x9e8);
  if (uVar7 != 0) {
    uVar7 = (ulonglong)
            *(uint *)((longlong)*(int *)(uVar7 + 0xf0) * 0xa0 + 100 + *(longlong *)(uVar7 + 0xd0));
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x8f8) + 0x9f0);
  lVar5 = (longlong)(int)uVar7 * 0x170 + _DAT_180c95ff0;
  uVar1 = *(int8_t *)(*(longlong *)(lVar4 + 0x590) + 0x34bc);
  if (lVar3 != 0) {
    bVar6 = (byte)((uint)*(int32_t *)(lVar4 + 0x564) >> 0x1f) ^ 1;
    iVar2 = *(int *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar3 + 0xd0));
    lVar4 = FUN_18054f900(lVar5,param_2 & 0xffffffff,bVar6,iVar2,uVar1);
    if (lVar4 == 0) {
      FUN_18054f900((longlong)iVar2 * 0x170 + _DAT_180c95ff0,param_2 & 0xffffffff,bVar6,iVar2,uVar1)
      ;
    }
    return;
  }
  FUN_18054f900(lVar5,param_2,*(uint *)(lVar4 + 0x564) >> 0x1f ^ 1,0xffffffff,uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a0978(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)
void FUN_1805a0978(uint64_t param_1,uint64_t param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong in_RAX;
  longlong lVar2;
  int32_t unaff_EBX;
  byte bVar3;
  
  bVar3 = (byte)((uint)*(int32_t *)(param_4 + 0x564) >> 0x1f) ^ 1;
  iVar1 = *(int *)(in_RAX * 0xa0 + 100 + *(longlong *)(param_3 + 0xd0));
  lVar2 = FUN_18054f900(param_1,unaff_EBX,bVar3,iVar1);
  if (lVar2 == 0) {
    FUN_18054f900((longlong)iVar1 * 0x170 + _DAT_180c95ff0,unaff_EBX,bVar3,iVar1);
  }
  return;
}






// 函数: void FUN_1805a09ed(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805a09ed(uint64_t param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  FUN_18054f900(param_1,param_2,*(uint *)(param_4 + 0x564) >> 0x1f ^ 1,0xffffffff);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_1805a0a20(longlong param_1,int32_t param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x108);
  uVar3 = *(ulonglong *)(*(longlong *)(lVar2 + 0x8f8) + 0x9e8);
  if (uVar3 != 0) {
    uVar3 = (ulonglong)
            *(uint *)((longlong)*(int *)(uVar3 + 0xf0) * 0xa0 + 100 + *(longlong *)(uVar3 + 0xd0));
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x8f8) + 0x9f0);
  if (lVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(int32_t *)
             ((longlong)*(int *)(lVar1 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar1 + 0xd0));
  }
  lVar2 = FUN_18054f900((longlong)(int)uVar3 * 0x170 + _DAT_180c95ff0,param_2,
                        *(uint *)(lVar2 + 0x564) >> 0x1f ^ 1,uVar4,
                        *(int8_t *)(*(longlong *)(lVar2 + 0x590) + 0x34bc));
  if (lVar2 != 0) {
    return *(int32_t *)(lVar2 + 0x104);
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805a0af0(longlong param_1,float param_2,char param_3)
void FUN_1805a0af0(longlong param_1,float param_2,char param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if (0.0 < param_2) {
    if ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x200) * 8) -
               *(longlong *)(param_1 + 0x1f8)) * -1e-05 < param_2) {
      *(longlong *)(param_1 + 0x1f8) =
           *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x200) * 8) -
           (longlong)(param_2 * -100000.0);
    }
    if ((((param_3 != '\0') && (_DAT_180c92514 - 2U < 2)) &&
        (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x108) + 0x8e8), plVar2 != (longlong *)0x0)
        ) && (*plVar2 != 0)) {
      lVar6 = FUN_1805b5ad0();
      cVar3 = FUN_180645c10(lVar6,0,&unknown_var_3504_ptr);
      if (cVar3 != '\0') {
        cVar3 = FUN_180645c10(lVar6,6,&unknown_var_3472_ptr);
        if (cVar3 != '\0') {
          uVar4 = FUN_18055f6f0(&unknown_var_2976_ptr,param_2);
          uVar7 = *(int *)(lVar6 + 0x5c4) >> 0x1f & 0x1f;
          iVar5 = *(int *)(lVar6 + 0x5c4) + uVar7;
          puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 0x598) + (longlong)(iVar5 >> 5) * 4);
          *puVar1 = *puVar1 | (ulonglong)uVar4 << (((byte)iVar5 & 0x1f) - (char)uVar7 & 0x3f);
          *(int *)(lVar6 + 0x5c4) = *(int *)(lVar6 + 0x5c4) + 8;
          *(int *)(lVar6 + 0x5c8) = *(int *)(lVar6 + 0x5c8) + 8;
        }
      }
      FUN_1805b5b20(**(uint64_t **)(*(longlong *)(param_1 + 0x108) + 0x8e8));
    }
  }
  return;
}






// 函数: void FUN_1805a0b96(void)
void FUN_1805a0b96(void)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RBX;
  
  lVar5 = FUN_1805b5ad0();
  cVar2 = FUN_180645c10(lVar5,0,&unknown_var_3504_ptr);
  if (cVar2 != '\0') {
    cVar2 = FUN_180645c10(lVar5,6,&unknown_var_3472_ptr);
    if (cVar2 != '\0') {
      uVar3 = FUN_18055f6f0(&unknown_var_2976_ptr);
      uVar6 = *(int *)(lVar5 + 0x5c4) >> 0x1f & 0x1f;
      iVar4 = *(int *)(lVar5 + 0x5c4) + uVar6;
      puVar1 = (ulonglong *)(*(longlong *)(lVar5 + 0x598) + (longlong)(iVar4 >> 5) * 4);
      *puVar1 = *puVar1 | (ulonglong)uVar3 << (((byte)iVar4 & 0x1f) - (char)uVar6 & 0x3f);
      *(int *)(lVar5 + 0x5c4) = *(int *)(lVar5 + 0x5c4) + 8;
      *(int *)(lVar5 + 0x5c8) = *(int *)(lVar5 + 0x5c8) + 8;
    }
  }
  FUN_1805b5b20(**(uint64_t **)(*(longlong *)(unaff_RBX + 0x108) + 0x8e8));
  return;
}






// 函数: void FUN_1805a0c37(void)
void FUN_1805a0c37(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




