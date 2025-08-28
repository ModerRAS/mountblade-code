#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part035.c - 2 个函数

// 函数: void FUN_180287610(int64_t param_1,float *param_2,float *param_3)
void FUN_180287610(int64_t param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float *pfVar7;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_198 [44];
  int32_t uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [8];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  fStack_158 = *param_2;
  fStack_154 = param_2[1];
  uVar5 = *(uint64_t *)param_2;
  fStack_150 = param_2[2];
  fStack_14c = param_2[3];
  uVar6 = *(uint64_t *)(param_2 + 2);
  pfVar7 = afStack_138 + 2;
  fStack_148 = param_2[8];
  fStack_144 = param_2[9];
  fStack_140 = param_2[10];
  fStack_13c = param_2[0xb];
  lVar8 = 8;
  fVar1 = *param_3;
  afStack_138[1] = param_3[1];
  fVar2 = param_3[2];
  afStack_138[4] = param_3[4];
  fVar3 = param_3[5];
  fVar4 = param_3[6];
  fStack_168 = param_2[4];
  fStack_164 = param_2[5];
  fStack_160 = param_2[6];
  fStack_15c = param_2[7];
  fVar11 = 3.4028235e+38;
  fVar15 = -3.4028235e+38;
  fVar13 = 3.4028235e+38;
  fVar17 = -3.4028235e+38;
  fVar12 = -3.4028235e+38;
  fVar14 = 3.4028235e+38;
  afStack_138[0] = fVar1;
  afStack_138[2] = fVar2;
  afStack_138[5] = fVar3;
  afStack_138[6] = fVar4;
  fStack_118 = fVar1;
  fStack_114 = fVar3;
  fStack_110 = fVar2;
  fStack_108 = afStack_138[4];
  fStack_104 = fVar3;
  fStack_100 = fVar2;
  fStack_f8 = fVar1;
  fStack_f4 = afStack_138[1];
  fStack_f0 = fVar4;
  fStack_e8 = afStack_138[4];
  fStack_e4 = afStack_138[1];
  fStack_e0 = fVar4;
  fStack_d8 = fVar1;
  fStack_d4 = fVar3;
  fStack_d0 = fVar4;
  fStack_c8 = afStack_138[4];
  fStack_c4 = afStack_138[1];
  fStack_c0 = fVar2;
  do {
    fVar9 = pfVar7[-2];
    fVar16 = pfVar7[-1];
    fVar18 = *pfVar7;
    fVar10 = fVar9 * fStack_158 + fVar16 * fStack_154 + fVar18 * fStack_150;
    pfVar7[-2] = fVar10;
    pfVar7[-1] = fVar9 * fStack_168 + fVar16 * fStack_164 + fVar18 * fStack_160;
    *pfVar7 = fVar9 * fStack_148 + fVar16 * fStack_144 + fVar18 * fStack_140;
    pfVar7[1] = fVar9 * fStack_13c + fVar16 * fStack_13c + fVar18 * fStack_13c;
    if (fVar10 <= fVar14) {
      fVar14 = fVar10;
    }
    fVar9 = pfVar7[-1];
    if (fVar9 <= fVar11) {
      fVar11 = fVar9;
    }
    fVar16 = *pfVar7;
    if (fVar16 <= fVar13) {
      fVar13 = fVar16;
    }
    if (fVar15 <= fVar10) {
      fVar15 = fVar10;
    }
    if (fVar17 <= fVar9) {
      fVar17 = fVar9;
    }
    if (fVar12 <= fVar16) {
      fVar12 = fVar16;
    }
    pfVar7 = pfVar7 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  fVar12 = param_3[4];
  uStack_16c = 0x7f7fffff;
  fVar9 = fVar12 - fVar1;
  fVar13 = param_3[1];
  fVar16 = (fVar15 - fVar14) * 0.5;
  fVar18 = (fVar17 - fVar11) * 0.5;
  fVar9 = SQRT((fVar3 - param_3[1]) * (fVar3 - param_3[1]) + fVar9 * fVar9 +
               (fVar4 - fVar2) * (fVar4 - fVar2));
  fVar17 = fVar9 * 0.5;
  fVar11 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[10];
  *(uint64_t *)(param_1 + 0xc0) = uVar5;
  *(uint64_t *)(param_1 + 200) = uVar6;
  *(float *)(param_1 + 0xd0) = fStack_168;
  *(float *)(param_1 + 0xd4) = fStack_164;
  *(float *)(param_1 + 0xd8) = fStack_160;
  *(float *)(param_1 + 0xdc) = fStack_15c;
  *(float *)(param_1 + 0xe0) = fStack_148;
  *(float *)(param_1 + 0xe4) = fStack_144;
  *(float *)(param_1 + 0xe8) = fStack_140;
  *(float *)(param_1 + 0xec) = fStack_13c;
  *(float *)(param_1 + 0xf0) = (fVar12 + fVar1) * 0.5 + fVar17 * fVar11;
  *(float *)(param_1 + 0xf4) = fVar17 * fVar14 + (fVar3 + fVar13) * 0.5;
  *(float *)(param_1 + 0xf8) = (fVar2 + fVar4) * 0.5 + fVar17 * fVar15;
  *(int32_t *)(param_1 + 0xfc) = 0x7f7fffff;
  FUN_1802864f0(param_1);
  *(float *)(param_1 + 0x118) = fVar9;
  *(float *)(param_1 + 0x104) = -fVar16;
  *(float *)(param_1 + 0x110) = -fVar18;
  *(float *)(param_1 + 0x108) = fVar16;
  *(float *)(param_1 + 0x10c) = fVar18;
  *(int8_t *)(param_1 + 0x100) = 0;
  *(int32_t *)(param_1 + 0x114) = 0x3f800000;
  FUN_1802864f0();
                    // WARNING: Subroutine does not return
  CoreSystemConfigManager(uStack_b8 ^ (uint64_t)auStack_198);
}



float * FUN_1802879b0(int64_t param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xe0);
  fVar2 = *(float *)(param_1 + 0xf4);
  fVar3 = *(float *)(param_1 + 0xe4);
  fVar4 = *(float *)(param_1 + 0xe8);
  fVar5 = *(float *)(param_1 + 0xf8);
  *param_2 = *(float *)(param_1 + 0xf0) - fVar1 * param_3;
  param_2[1] = fVar2 - fVar3 * param_3;
  param_2[2] = fVar5 - fVar4 * param_3;
  param_2[3] = 3.4028235e+38;
  param_2[4] = -fVar1;
  param_2[5] = -fVar3;
  param_2[6] = -fVar4;
  param_2[7] = 3.4028235e+38;
  return param_2;
}



float * FUN_180287b30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_cc;
  float fStack_bc;
  float fStack_ac;
  
  fVar11 = param_1[0xd];
  fVar1 = param_1[0xe];
  fVar2 = param_1[8];
  fVar3 = param_1[4];
  fVar4 = param_1[9];
  fVar5 = *param_1;
  fVar6 = param_1[5];
  fVar7 = param_1[10];
  fVar8 = param_1[1];
  fVar9 = param_1[6];
  fVar10 = param_1[2];
  param_2[0xc] = -param_1[0xc];
  param_2[0xd] = -fVar11;
  param_2[0xe] = -fVar1;
  param_2[0xf] = 3.4028235e+38;
  fVar1 = param_2[0xd];
  fVar11 = param_2[0xc];
  fVar12 = param_2[0xe];
  param_2[0xc] = fVar5 * fVar11 + fVar8 * fVar1 + fVar10 * fVar12;
  param_2[0xd] = fVar3 * fVar11 + fVar6 * fVar1 + fVar9 * fVar12;
  param_2[0xe] = fVar2 * fVar11 + fVar4 * fVar1 + fVar7 * fVar12;
  param_2[0xf] = 3.4028235e+38;
  *param_2 = fVar5;
  param_2[1] = fVar3;
  param_2[2] = fVar2;
  param_2[3] = fStack_cc;
  fVar1 = param_1[2];
  param_2[4] = fVar8;
  param_2[5] = fVar6;
  param_2[6] = fVar4;
  param_2[7] = fStack_bc;
  param_2[8] = fVar1;
  param_2[9] = fVar9;
  param_2[10] = fVar7;
  param_2[0xb] = fStack_ac;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180287d30(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int8_t auStack_50 [24];
  int8_t auStack_38 [32];
  
  puVar8 = (uint64_t *)0x0;
  uVar10 = 0xf;
  uVar9 = 1;
  do {
    uVar10 = uVar10 | uVar10 >> (((byte)uVar9 & 7) << 3);
    uVar9 = uVar9 * 2;
  } while (uVar9 < 8);
  param_1[9] = uVar10 + 1;
  if (uVar10 + 1 < 0x401) {
    puVar4 = (uint64_t *)FUN_1801ee790();
    if (puVar4 == (uint64_t *)0x0) {
      FUN_180287f70(auStack_38);
                    // WARNING: Subroutine does not return
      _CxxThrowException(auStack_38,&rendering_buffer_2600_ptr);
    }
    puVar4[0x10] = puVar4;
  }
  else {
    param_1[9] = 0x200;
    puVar5 = puVar8;
    puVar6 = puVar8;
    puVar7 = puVar8;
    do {
      lVar1 = param_1[9];
      lVar2 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar1 * 0x1c + 0xaa,3);
      puVar3 = puVar8;
      if (lVar2 != 0) {
        puVar3 = (uint64_t *)((uint64_t)(-(int)lVar2 & 7) + lVar2);
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[0x10] = 0;
        puVar3[0x11] = (uint64_t)(-(int)(puVar3 + 0x14) & 3) + (int64_t)(puVar3 + 0x14);
        puVar3[0x12] = lVar1 + -1;
        puVar3[0x13] = lVar2;
      }
      if (puVar3 == (uint64_t *)0x0) {
        FUN_180287f70(auStack_50);
                    // WARNING: Subroutine does not return
        _CxxThrowException(auStack_50,&rendering_buffer_2600_ptr);
      }
      puVar4 = puVar3;
      if (puVar5 != (uint64_t *)0x0) {
        puVar6[0x10] = puVar3;
        puVar4 = puVar5;
      }
      puVar3[0x10] = puVar4;
      puVar7 = (uint64_t *)((int64_t)puVar7 + 1);
      puVar5 = puVar4;
      puVar6 = puVar3;
    } while (puVar7 != (uint64_t *)0x2);
  }
  *param_1 = puVar4;
  param_1[8] = puVar4;
  LOCK();
  render_system_config_config = 0;
  UNLOCK();
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180287ed0(char *param_1,int param_2,int param_3)
void FUN_180287ed0(char *param_1,int param_2,int param_3)

{
  if (*param_1 == '\0') {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
    *param_1 = '\x01';
    return;
  }
  if ((*(int *)(param_1 + 4) == param_2) && (*(int *)(param_1 + 8) == param_3)) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_180062300(system_message_context,&processed_var_9840_ptr,*(int *)(param_1 + 4),*(int32_t *)(param_1 + 8),
                param_2,param_3);
}



uint64_t * FUN_180287f20(uint64_t *param_1,int64_t param_2)

{
  *param_1 = &processed_var_9816_ptr;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = &processed_var_9840_ptr;
  return param_1;
}



uint64_t * FUN_180287f70(uint64_t *param_1)

{
  *param_1 = &processed_var_9816_ptr;
  param_1[2] = 0;
  param_1[1] = &processed_var_9912_ptr;
  *param_1 = &processed_var_9840_ptr;
  return param_1;
}



uint64_t *
FUN_180287fc0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x16;
  strcpy_s(param_2[1],0x80,&system_data_6c50,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



