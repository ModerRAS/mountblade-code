#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part617.c - 6 个函数

// 函数: void FUN_18060c1a0(int32_t *param_1,int8_t param_2,uint64_t param_3,int32_t param_4,
void FUN_18060c1a0(int32_t *param_1,int8_t param_2,uint64_t param_3,int32_t param_4,
                  int32_t param_5,int32_t param_6)

{
  longlong lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint uVar5;
  uint64_t *puVar6;
  int *piVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint64_t *puVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  float fVar20;
  int8_t auVar21 [16];
  float fVar22;
  uint64_t in_stack_ffffffffffffffe8;
  
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  FUN_1804bbcc0(0x180c95de0,param_1,param_4,param_5);
  lVar8 = FUN_18062b1e0(system_memory_pool_ptr,0x570,4,3);
  *(int32_t *)(lVar8 + 0x568) = 0x41c64e6d;
  *(int8_t *)(lVar8 + 0x56c) = 0;
  *param_1 = param_6;
  FUN_180570190(lVar8,param_4,param_5,param_1,(ulonglong)uVar4 << 0x20);
  FUN_1804bc1f0(0x180c95de0,lVar8,param_2);
  uVar14 = 0;
  *(uint64_t *)(param_1 + 4) = 0;
  *(uint64_t *)(param_1 + 6) = 0;
  *(uint64_t *)(param_1 + 8) = 0;
  *(uint64_t *)(param_1 + 10) = 0;
  *(uint64_t *)(param_1 + 0xc) = 0;
  *(uint64_t *)(param_1 + 0xe) = 0;
  *(uint64_t *)(param_1 + 0x10) = 0;
  *(uint64_t *)(param_1 + 0x12) = 0;
  uVar11 = *(ulonglong *)(param_1 + 4) & 0xffffffffffffffc0 | (longlong)*(int *)(lVar8 + 8);
  *(ulonglong *)(param_1 + 4) = uVar11;
  uVar11 = (longlong)*(int *)(lVar8 + 4) << 6 | uVar11 & 0xfffffffffffff03f;
  *(ulonglong *)(param_1 + 4) = uVar11;
  uVar11 = (longlong)*(int *)(lVar8 + 0x18) << 0xc | uVar11 & 0xfffffffffffc0fff;
  *(ulonglong *)(param_1 + 4) = uVar11;
  uVar11 = (longlong)(int)(*(float *)(lVar8 + 0x558) * 63.0) << 0x12 | uVar11 & 0xffffffffff03ffff;
  *(ulonglong *)(param_1 + 4) = uVar11;
  uVar11 = (longlong)*(int *)(lVar8 + 0x20) << 0x18 | uVar11 & 0xffffffffc0ffffff;
  *(ulonglong *)(param_1 + 4) = uVar11;
  *(ulonglong *)(param_1 + 4) =
       (longlong)(int)(*(float *)(lVar8 + 0x54c) * 63.0) << 0x1e | uVar11 & 0xfffffff03fffffff;
  *param_1 = *(int32_t *)(lVar8 + 0x53c);
  param_1[1] = *(int32_t *)(lVar8 + 0x540);
  param_1[2] = *(int32_t *)(lVar8 + 0x544);
  uVar11 = (longlong)(int)(*(float *)(lVar8 + 0x550) * 63.0) << 0x2a |
           *(ulonglong *)(param_1 + 4) & 0xffff03ffffffffff;
  *(ulonglong *)(param_1 + 4) = uVar11;
  *(ulonglong *)(param_1 + 4) =
       (longlong)(int)(*(float *)(lVar8 + 0x548) * 63.0) << 0x30 | uVar11 & 0xffc0ffffffffffff;
  uVar11 = *(ulonglong *)(param_1 + 0xe) & 0xffffffff80000000 | (longlong)*(int *)(lVar8 + 0x28);
  *(ulonglong *)(param_1 + 0xe) = uVar11;
  *(ulonglong *)(param_1 + 0xe) =
       (longlong)*(int *)(lVar8 + 0x2c) << 0x20 | uVar11 & 0x80000000ffffffff;
  uVar11 = *(ulonglong *)(param_1 + 0x10) & 0xffffffff80000000 | (longlong)*(int *)(lVar8 + 0x30);
  *(ulonglong *)(param_1 + 0x10) = uVar11;
  *(ulonglong *)(param_1 + 0x10) =
       (longlong)*(int *)(lVar8 + 0x34) << 0x20 | uVar11 & 0x80000000ffffffff;
  uVar11 = *(ulonglong *)(param_1 + 0x12) & 0xffffffffffffffc0 | (longlong)*(int *)(lVar8 + 0x24);
  *(ulonglong *)(param_1 + 0x12) = uVar11;
  uVar11 = (longlong)*(int *)(lVar8 + 0x1c) << 6 | uVar11 & 0xfffffffffffff03f;
  *(ulonglong *)(param_1 + 0x12) = uVar11;
  uVar15 = (longlong)*(int *)(lVar8 + 0xc) << 0xc | uVar11 & 0xfffffffffffc0fff;
  *(ulonglong *)(param_1 + 0x12) = uVar15;
  uVar11 = (ulonglong)(-(uint)(*(char *)(lVar8 + 0x564) != '\0') & 0x40000);
  *(ulonglong *)(param_1 + 0x12) = uVar15 & 0xfffffffffffbffff | uVar11;
  fVar20 = *(float *)(lVar8 + 0x55c);
  fVar22 = 0.0;
  if ((0.0 <= fVar20) && (fVar22 = fVar20, 1.0 <= fVar20)) {
    fVar22 = 1.0;
  }
  uVar11 = (longlong)(int)(fVar22 * 63.0) << 0x13 | uVar15 & 0xfffffffffe03ffff | uVar11;
  puVar16 = (uint64_t *)0x180c95e98;
  *(ulonglong *)(param_1 + 0x12) = uVar11;
  *(ulonglong *)(param_1 + 0x12) =
       (longlong)(int)(*(float *)(lVar8 + 0x560) * 63.0) << 0x19 | uVar11 & 0xffffffff81ffffff;
  uVar4 = func_0x0001804bb950(lVar8);
  puVar3 = (uint64_t *)puVar16[2];
  puVar6 = puVar16;
  while (puVar2 = puVar3, puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < uVar4) {
      puVar3 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = (uint64_t *)puVar2[1];
      puVar6 = puVar2;
    }
  }
  if ((puVar6 == puVar16) || (uVar4 < *(uint *)(puVar6 + 4))) {
    puVar6 = (uint64_t *)FUN_1804c0610(puVar16,&stack0x00000010);
    puVar6 = (uint64_t *)*puVar6;
  }
  lVar1 = puVar6[5];
  iVar10 = *(int *)(lVar1 + 0x298);
  if (0 < iVar10) {
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x290) + 0x44);
    uVar11 = uVar14;
    uVar15 = uVar14;
    do {
      iVar18 = (int)uVar15;
      if (*piVar7 == 0x3c) goto LAB_1804bd86c;
      uVar15 = (ulonglong)(iVar18 + 1);
      uVar11 = uVar11 + 1;
      piVar7 = piVar7 + 0x2a;
    } while ((longlong)uVar11 < (longlong)iVar10);
  }
  iVar18 = -1;
LAB_1804bd86c:
  if (0 < iVar10) {
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x290) + 0x44);
    uVar11 = uVar14;
    uVar15 = uVar14;
    do {
      iVar17 = (int)uVar15;
      if (*piVar7 == 0x3d) goto LAB_1804bd89d;
      uVar15 = (ulonglong)(iVar17 + 1);
      uVar11 = uVar11 + 1;
      piVar7 = piVar7 + 0x2a;
    } while ((longlong)uVar11 < (longlong)iVar10);
  }
  iVar17 = -1;
LAB_1804bd89d:
  if (0 < iVar10) {
    pfVar19 = (float *)(lVar8 + 0x3c);
    do {
      uVar13 = (uint)uVar14;
      uVar5 = uVar13 & 0xf;
      uVar4 = uVar13;
      if ((int)uVar13 < 0) {
        uVar4 = uVar13 + 0xf;
        uVar5 = uVar5 - 0x10;
      }
      bVar9 = (char)uVar5 * '\x04';
      iVar10 = (int)uVar4 >> 4;
      fVar22 = *pfVar19 * 15.0;
      iVar12 = (int)fVar22;
      fVar20 = fVar22;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar22)) {
        auVar21._4_4_ = fVar22;
        auVar21._0_4_ = fVar22;
        auVar21._8_8_ = 0;
        uVar4 = movmskps(uVar5,auVar21);
        fVar20 = (float)(int)(iVar12 - (uVar4 & 1));
      }
      if ((iVar10 + 1 != iVar18) && (iVar10 + 1 != iVar17)) {
        iVar12 = (int)fVar20;
        if (0.5 < fVar22 - fVar20) {
          iVar12 = (int)fVar20 + 1;
        }
        *(ulonglong *)(param_1 + (longlong)iVar10 * 2 + 6) =
             (longlong)iVar12 << (bVar9 & 0x3f) |
             ~(0xfL << (bVar9 & 0x3f)) & *(ulonglong *)(param_1 + (longlong)iVar10 * 2 + 6);
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      pfVar19 = pfVar19 + 1;
    } while ((int)(uVar13 + 1) < *(int *)(lVar1 + 0x298));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060c270(int32_t param_1,int32_t param_2)
void FUN_18060c270(int32_t param_1,int32_t param_2)

{
  int32_t in_stack_00000030;
  uint64_t in_stack_00000038;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  int8_t auStack_5c8 [32];
  int32_t uStack_5a8;
  uint64_t uStack_5a0;
  uint64_t uStack_598;
  uint64_t uStack_590;
  int8_t auStack_588 [16];
  int32_t uStack_578;
  int32_t uStack_574;
  ulonglong uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_5c8;
  uStack_590 = in_stack_00000048;
  uStack_598 = in_stack_00000040;
  uStack_5a0 = in_stack_00000038;
  uStack_5a8 = in_stack_00000030;
  uStack_578 = param_1;
  uStack_574 = param_2;
  FUN_1804bd980(0x180c95de0,auStack_588);
  FUN_1804bd560(0x180c95de0,auStack_588,in_stack_00000050);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_5c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060c310(longlong param_1)
void FUN_18060c310(longlong param_1)

{
  float fVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  uint auStackX_8 [2];
  int8_t auStackX_10 [24];
  
  auStackX_8[0] =
       func_0x0001804bb9d0(*(int32_t *)(param_1 + 0x10),*(int32_t *)(param_1 + 0x14),
                           *(int32_t *)(param_1 + 0x53c));
  puVar3 = (uint64_t *)0x180c95e98;
  puVar2 = render_system_memory;
  while (puVar2 != (uint64_t *)0x0) {
    if (*(uint *)(puVar2 + 4) < auStackX_8[0]) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar3 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_10,0,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  pfVar7 = (float *)(param_1 + 0x40);
  lVar6 = 0x40;
  pfVar4 = (float *)(*(longlong *)(puVar3[5] + 0x290) + 0x48);
  pfVar5 = (float *)(*(longlong *)(puVar3[5] + 0x290) + 0x198);
  do {
    fVar1 = pfVar4[1];
    fVar8 = *pfVar4;
    if ((((0.0 <= fVar1) || (0.0 <= fVar8)) && ((fVar1 <= 0.0 || (fVar8 <= 0.0)))) &&
       (1e-06 <= ABS(fVar1 - fVar8))) {
      fVar8 = (-1.0 / ABS(fVar1 - fVar8)) * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      pfVar7[-1] = fVar8;
    }
    fVar1 = pfVar4[0x2b];
    fVar8 = pfVar4[0x2a];
    if ((((0.0 <= fVar1) || (0.0 <= fVar8)) && ((fVar1 <= 0.0 || (fVar8 <= 0.0)))) &&
       (1e-06 <= ABS(fVar1 - fVar8))) {
      fVar8 = (-1.0 / ABS(fVar1 - fVar8)) * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      *pfVar7 = fVar8;
    }
    fVar1 = pfVar5[1];
    fVar8 = *pfVar5;
    if ((((0.0 <= fVar1) || (0.0 <= fVar8)) && ((fVar1 <= 0.0 || (fVar8 <= 0.0)))) &&
       (1e-06 <= ABS(fVar1 - fVar8))) {
      fVar8 = (-1.0 / ABS(fVar1 - fVar8)) * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      pfVar7[1] = fVar8;
    }
    fVar1 = pfVar5[0x2b];
    fVar8 = pfVar5[0x2a];
    if (((0.0 <= fVar1) || (0.0 <= fVar8)) &&
       (((fVar1 <= 0.0 || (fVar8 <= 0.0)) && (1e-06 <= ABS(fVar1 - fVar8))))) {
      fVar8 = (-1.0 / ABS(fVar1 - fVar8)) * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      pfVar7[2] = fVar8;
    }
    fVar1 = pfVar5[0x55];
    fVar8 = pfVar5[0x54];
    if ((((0.0 <= fVar1) || (0.0 <= fVar8)) && ((fVar1 <= 0.0 || (fVar8 <= 0.0)))) &&
       (1e-06 <= ABS(fVar1 - fVar8))) {
      fVar8 = (-1.0 / ABS(fVar1 - fVar8)) * fVar8;
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      pfVar7[3] = fVar8;
    }
    pfVar7 = pfVar7 + 5;
    pfVar4 = pfVar4 + 0xd2;
    pfVar5 = pfVar5 + 0xd2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060c590(int param_1,longlong param_2,int32_t param_3,int32_t param_4,uint param_5)
void FUN_18060c590(int param_1,longlong param_2,int32_t param_3,int32_t param_4,uint param_5)

{
  uint64_t *puVar1;
  void *puVar2;
  uint64_t *puVar3;
  void *puVar4;
  int8_t auStackX_10 [8];
  
  param_5 = func_0x0001804bb9d0(param_3,param_4,param_5);
  puVar3 = (uint64_t *)0x180c95e98;
  puVar1 = render_system_memory;
  while (puVar1 != (uint64_t *)0x0) {
    if (*(uint *)(puVar1 + 4) < param_5) {
      puVar1 = (uint64_t *)*puVar1;
    }
    else {
      puVar3 = puVar1;
      puVar1 = (uint64_t *)puVar1[1];
    }
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (param_5 < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_10,puVar3,puVar3,&param_5);
    puVar3 = (uint64_t *)*puVar3;
  }
  puVar2 = *(void **)(*(longlong *)(puVar3[5] + 0x290) + 0x28 + (longlong)param_1 * 0xa8);
  puVar4 = &system_buffer_ptr;
  if (puVar2 != (void *)0x0) {
    puVar4 = puVar2;
  }
                    // WARNING: Subroutine does not return
  memcpy(param_2 + 0x14,puVar4,
         (longlong)*(int *)(*(longlong *)(puVar3[5] + 0x290) + 0x30 + (longlong)param_1 * 0xa8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18060c6a0(int param_1,uint param_2,float param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint64_t in_R8;
  uint auStackX_8 [2];
  int8_t auStackX_20 [8];
  void *puStack_80;
  int32_t *puStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_48;
  
  uVar7 = 0;
  if (5.0 <= param_3) {
    if (10.0 <= param_3) {
      if (16.0 <= param_3) {
        uVar7 = (21.0 <= param_3) + 3;
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar7;
  puVar3 = (uint64_t *)0x180c95e98;
  puVar5 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar5 + 4) < auStackX_8[0]) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar3 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_20,in_R8,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  if (puVar3[5] != 0) {
    return *(int32_t *)(puVar3[5] + 0x298);
  }
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (int32_t *)0x0;
  uStack_70 = 0;
  puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_78 = 0;
  uVar1 = FUN_18064e990(puStack_78);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puStack_78 = 0x65636146;
  puStack_78[1] = 0x736e695f;
  puStack_78[2] = 0x636e6174;
  puStack_78[3] = 0x6f662065;
  puStack_78[4] = 0x61722072;
  *(int16_t *)(puStack_78 + 5) = 0x6563;
  *(int8_t *)((longlong)puStack_78 + 0x16) = 0;
  uStack_70 = 0x16;
  FUN_180628380(&puStack_80,param_1);
  uVar9 = uStack_70 + 0xc;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0xd;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060c883;
      puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060c883:
  puVar5 = (uint64_t *)((ulonglong)uStack_70 + (longlong)puStack_78);
  *puVar5 = 0x6e656720726f6620;
  *(int32_t *)(puVar5 + 1) = 0x20726564;
  *(int8_t *)((longlong)puVar5 + 0xc) = 0;
  uStack_70 = uVar9;
  FUN_180628380(&puStack_80,param_2);
  uVar9 = uStack_70 + 0x13;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0x14;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060c91c;
      puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060c91c:
  puVar6 = (int32_t *)((ulonglong)uStack_70 + (longlong)puStack_78);
  *puVar6 = 0x726f6620;
  puVar6[1] = 0x74616d20;
  puVar6[2] = 0x74697275;
  puVar6[3] = 0x79742079;
  puVar6[4] = 0x206570;
  uStack_70 = uVar9;
  lVar4 = FUN_1805705b0(&puStack_60,uVar7);
  if (0 < *(int *)(lVar4 + 0x10)) {
    iVar8 = uStack_70 + *(int *)(lVar4 + 0x10);
    if (iVar8 != 0) {
      uVar7 = iVar8 + 1;
      if (puStack_78 == (int32_t *)0x0) {
        if ((int)uVar7 < 0x10) {
          uVar7 = 0x10;
        }
        puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
        *(int8_t *)puStack_78 = 0;
      }
      else {
        if (uVar7 <= (uint)uStack_68) goto LAB_18060c9b2;
        puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
      }
      uVar1 = FUN_18064e990(puStack_78);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
    }
LAB_18060c9b2:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((ulonglong)uStack_70 + (longlong)puStack_78),*(uint64_t *)(lVar4 + 8),
           (longlong)(*(int *)(lVar4 + 0x10) + 1));
  }
  puStack_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &system_state_ptr;
  iVar8 = uStack_70 + 0x2f;
  if (iVar8 != 0) {
    uVar7 = uStack_70 + 0x30;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar7 <= (uint)uStack_68) goto LAB_18060ca50;
      puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060ca50:
  puVar5 = (uint64_t *)((ulonglong)uStack_70 + (longlong)puStack_78);
  *puVar5 = 0x20746f6e20736920;
  puVar5[1] = 0x6e6920646e756f66;
  *(int32_t *)(puVar5 + 2) = 0x74656720;
  *(int32_t *)((longlong)puVar5 + 0x14) = 0x6361665f;
  *(int32_t *)(puVar5 + 3) = 0x65675f65;
  *(int32_t *)((longlong)puVar5 + 0x1c) = 0x6e695f6e;
  *(int32_t *)(puVar5 + 4) = 0x6e617473;
  *(int32_t *)((longlong)puVar5 + 0x24) = 0x5f736563;
  *(int32_t *)(puVar5 + 5) = 0x676e656c;
  *(int32_t *)((longlong)puVar5 + 0x2c) = 0x216874;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (puStack_78 != (int32_t *)0x0) {
    puVar6 = puStack_78;
  }
  uStack_70 = iVar8;
  FUN_180626f80(puVar6);
  puStack_80 = &system_data_buffer_ptr;
  if (puStack_78 == (int32_t *)0x0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_18060cad0(int32_t param_1,int32_t param_2,int32_t *param_3)
void FUN_18060cad0(int32_t param_1,int32_t param_2,int32_t *param_3)

{
  FUN_1804bba40(0x180c95de0,param_1,param_2,*param_3,
                (float)((uint)(*(ulonglong *)(param_3 + 0x12) >> 0x13) & 0x3f) * 0.015873017);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18060cb10(int param_1,uint param_2,uint64_t param_3)

{
  int32_t uVar1;
  uint uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  uint64_t *puVar5;
  int32_t *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float in_XMM2_Da;
  uint auStackX_8 [2];
  int8_t auStackX_20 [8];
  void *puStack_80;
  int32_t *puStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_48;
  
  uVar7 = 0;
  if (5.0 <= in_XMM2_Da) {
    if (10.0 <= in_XMM2_Da) {
      if (16.0 <= in_XMM2_Da) {
        uVar7 = (21.0 <= in_XMM2_Da) + 3;
      }
      else {
        uVar7 = 2;
      }
    }
    else {
      uVar7 = 1;
    }
  }
  auStackX_8[0] = (param_1 << 8 | param_2) << 8 | uVar7;
  puVar3 = (uint64_t *)0x180c95e98;
  puVar5 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar5 + 4) < auStackX_8[0]) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar3 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
  }
  if ((puVar3 == (uint64_t *)0x180c95e98) || (auStackX_8[0] < *(uint *)(puVar3 + 4))) {
    puVar3 = (uint64_t *)FUN_1804c0610(0x180c95e98,auStackX_20,param_3,puVar3,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  if (puVar3[5] != 0) {
    return *(int32_t *)(puVar3[5] + 0x9d8);
  }
  puStack_80 = &system_data_buffer_ptr;
  uStack_68 = 0;
  puStack_78 = (int32_t *)0x0;
  uStack_70 = 0;
  puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,0x17,0x13);
  *(int8_t *)puStack_78 = 0;
  uVar1 = FUN_18064e990(puStack_78);
  uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  *puStack_78 = 0x65636146;
  puStack_78[1] = 0x736e695f;
  puStack_78[2] = 0x636e6174;
  puStack_78[3] = 0x6f662065;
  puStack_78[4] = 0x61722072;
  *(int16_t *)(puStack_78 + 5) = 0x6563;
  *(int8_t *)((longlong)puStack_78 + 0x16) = 0;
  uStack_70 = 0x16;
  FUN_180628380(&puStack_80,param_1);
  uVar9 = uStack_70 + 0xc;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0xd;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060ccf3;
      puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060ccf3:
  puVar5 = (uint64_t *)((ulonglong)uStack_70 + (longlong)puStack_78);
  *puVar5 = 0x6e656720726f6620;
  *(int32_t *)(puVar5 + 1) = 0x20726564;
  *(int8_t *)((longlong)puVar5 + 0xc) = 0;
  uStack_70 = uVar9;
  FUN_180628380(&puStack_80,param_2);
  uVar9 = uStack_70 + 0x13;
  if (uVar9 != 0) {
    uVar2 = uStack_70 + 0x14;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar2 < 0x10) {
        uVar2 = 0x10;
      }
      puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar2,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar2 <= (uint)uStack_68) goto LAB_18060cd8c;
      puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar2,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060cd8c:
  puVar6 = (int32_t *)((ulonglong)uStack_70 + (longlong)puStack_78);
  *puVar6 = 0x726f6620;
  puVar6[1] = 0x74616d20;
  puVar6[2] = 0x74697275;
  puVar6[3] = 0x79742079;
  puVar6[4] = 0x206570;
  uStack_70 = uVar9;
  lVar4 = FUN_1805705b0(&puStack_60,uVar7);
  if (0 < *(int *)(lVar4 + 0x10)) {
    iVar8 = uStack_70 + *(int *)(lVar4 + 0x10);
    if (iVar8 != 0) {
      uVar7 = iVar8 + 1;
      if (puStack_78 == (int32_t *)0x0) {
        if ((int)uVar7 < 0x10) {
          uVar7 = 0x10;
        }
        puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
        *(int8_t *)puStack_78 = 0;
      }
      else {
        if (uVar7 <= (uint)uStack_68) goto LAB_18060ce22;
        puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
      }
      uVar1 = FUN_18064e990(puStack_78);
      uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
    }
LAB_18060ce22:
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((ulonglong)uStack_70 + (longlong)puStack_78),*(uint64_t *)(lVar4 + 8),
           (longlong)(*(int *)(lVar4 + 0x10) + 1));
  }
  puStack_60 = &system_data_buffer_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &system_state_ptr;
  iVar8 = uStack_70 + 0x25;
  if (iVar8 != 0) {
    uVar7 = uStack_70 + 0x26;
    if (puStack_78 == (int32_t *)0x0) {
      if ((int)uVar7 < 0x10) {
        uVar7 = 0x10;
      }
      puStack_78 = (int32_t *)FUN_18062b420(system_memory_pool_ptr,(longlong)(int)uVar7,0x13);
      *(int8_t *)puStack_78 = 0;
    }
    else {
      if (uVar7 <= (uint)uStack_68) goto LAB_18060cec0;
      puStack_78 = (int32_t *)FUN_18062b8b0(system_memory_pool_ptr,puStack_78,uVar7,0x10,0x13);
    }
    uVar1 = FUN_18064e990(puStack_78);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar1);
  }
LAB_18060cec0:
  puVar6 = (int32_t *)((ulonglong)uStack_70 + (longlong)puStack_78);
  *puVar6 = 0x6e207369;
  puVar6[1] = 0x6620746f;
  puVar6[2] = 0x646e756f;
  puVar6[3] = 0x206e6920;
  puVar6[4] = 0x5f746567;
  puVar6[5] = 0x72696168;
  puVar6[6] = 0x6c6f635f;
  puVar6[7] = 0x635f726f;
  puVar6[8] = 0x746e756f;
  *(int16_t *)(puVar6 + 9) = 0x21;
  puVar6 = (int32_t *)&system_buffer_ptr;
  if (puStack_78 != (int32_t *)0x0) {
    puVar6 = puStack_78;
  }
  uStack_70 = iVar8;
  FUN_180626f80(puVar6);
  puStack_80 = &system_data_buffer_ptr;
  if (puStack_78 == (int32_t *)0x0) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t FUN_18060cf50(void)

{
  uint uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  
  uVar1 = func_0x0001804bb9d0();
  puVar2 = (uint64_t *)0x180c95e98;
  puVar3 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar3 + 4) < uVar1) {
        puVar3 = (uint64_t *)*puVar3;
      }
      else {
        puVar2 = puVar3;
        puVar3 = (uint64_t *)puVar3[1];
      }
    } while (puVar3 != (uint64_t *)0x0);
    if ((puVar2 != (uint64_t *)0x180c95e98) && (*(uint *)(puVar2 + 4) <= uVar1))
    goto LAB_18060cf9b;
  }
  puVar2 = (uint64_t *)0x180c95e98;
LAB_18060cf9b:
  if (puVar2[5] == 0) {
    FUN_180626f80(&unknown_var_7872_ptr);
    return 0;
  }
  return *(int32_t *)(puVar2[5] + 0x3c0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18060cfd0(void)
void FUN_18060cfd0(void)

{
  longlong lVar1;
  uint uVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *puVar5;
  longlong lVar6;
  int8_t *in_R9;
  
  uVar2 = func_0x0001804bb9d0();
  puVar3 = (uint64_t *)0x180c95e98;
  puVar5 = render_system_memory;
  if (render_system_memory != (uint64_t *)0x0) {
    do {
      if (*(uint *)(puVar5 + 4) < uVar2) {
        puVar5 = (uint64_t *)*puVar5;
      }
      else {
        puVar3 = puVar5;
        puVar5 = (uint64_t *)puVar5[1];
      }
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar3 != (uint64_t *)0x180c95e98) && (*(uint *)(puVar3 + 4) <= uVar2))
    goto LAB_18060d01b;
  }
  puVar3 = (uint64_t *)0x180c95e98;
LAB_18060d01b:
  lVar1 = puVar3[5];
  iVar4 = 0;
  if (0 < *(int *)(lVar1 + 0x3c0)) {
    lVar6 = 0;
    do {
      lVar6 = lVar6 + 8;
      iVar4 = iVar4 + 1;
      *in_R9 = *(int8_t *)(*(longlong *)(*(longlong *)(lVar1 + 0x3b8) + -8 + lVar6) + 0x40);
      in_R9 = in_R9 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x3c0));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



