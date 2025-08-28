#include "TaleWorlds.Native.Split.h"

// 99_part_11_part016.c - 7 个函数

// 函数: void FUN_1806ea2c2(void)
void FUN_1806ea2c2(void)

{
  return;
}



int64_t FUN_1806ea2e0(float *param_1,float *param_2,uint64_t param_3,int32_t *param_4,
                      int32_t *param_5,int64_t param_6,int64_t param_7,uint64_t param_8,
                      float *param_9,float *param_10)

{
  ushort uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  ushort uVar5;
  byte bVar6;
  float *pfVar7;
  char cVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfStack_168;
  float *pfStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
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
  
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar2;
  param_4[2] = uVar3;
  param_4[3] = uVar4;
  pfStack_168 = param_1;
  pfStack_160 = param_1;
  FUN_1806df310(&fStack_108,&fStack_128,param_5,param_6,param_7);
  fVar10 = *(float *)(param_6 + 0x10);
  fVar14 = *(float *)(param_6 + 0x14);
  param_2[2] = fStack_110 - *(float *)(param_6 + 0x18);
  param_2[1] = fStack_114 - fVar14;
  *param_2 = fStack_118 - fVar10;
  fStack_158 = fStack_118 - *(float *)(param_6 + 0x10);
  fStack_154 = fStack_114 - *(float *)(param_6 + 0x14);
  fStack_140 = fStack_f8;
  fStack_150 = fStack_110 - *(float *)(param_6 + 0x18);
  fStack_148 = fStack_114 - *(float *)(param_7 + 0x14);
  fStack_134 = fStack_118;
  fStack_130 = fStack_114;
  fStack_14c = fStack_118 - *(float *)(param_7 + 0x10);
  fStack_138 = fStack_f0;
  fStack_144 = fStack_110 - *(float *)(param_7 + 0x18);
  fStack_12c = fStack_110;
  fStack_13c = fStack_f4;
  if (fStack_108 * fStack_128 + fStack_104 * fStack_124 + fStack_100 * fStack_120 +
      fStack_11c * fStack_fc < 0.0) {
    fStack_128 = -fStack_128;
    fStack_124 = -fStack_124;
    fStack_120 = -fStack_120;
    fStack_11c = -fStack_11c;
  }
  bVar6 = *(byte *)(param_5 + 0x1d) >> 1 & 1;
  if ((bVar6 == 0) ||
     ((float)param_5[0x1a] <= (float)param_5[0x19] && (float)param_5[0x19] != (float)param_5[0x1a]))
  {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  fVar14 = (fStack_118 - fStack_f8) + (fStack_118 - fStack_f8);
  fVar15 = (fStack_114 - fStack_f4) + (fStack_114 - fStack_f4);
  fVar13 = fStack_fc * fStack_fc - 0.5;
  fVar16 = (fStack_110 - fStack_f0) + (fStack_110 - fStack_f0);
  fVar10 = fStack_104 * fVar15 + fStack_108 * fVar14 + fStack_100 * fVar16;
  fVar12 = (fVar13 * fVar14 - (fStack_104 * fVar16 - fStack_100 * fVar15) * fStack_fc) +
           fStack_108 * fVar10;
  fStack_e4 = (fVar13 * fVar15 - (fStack_100 * fVar14 - fStack_108 * fVar16) * fStack_fc) +
              fStack_104 * fVar10;
  fStack_e0 = (fVar13 * fVar16 - (fStack_108 * fVar15 - fStack_104 * fVar14) * fStack_fc) +
              fStack_100 * fVar10;
  fStack_e8 = fVar12;
  FUN_1806e1790(&pfStack_168,&fStack_108,&fStack_128,&fStack_e8,cVar8 + '\x06',7,&fStack_d8,
                &fStack_c8);
  fVar10 = *(float *)(param_6 + 0x14);
  fVar14 = *(float *)(param_6 + 0x18);
  *param_9 = fStack_d8 + *(float *)(param_6 + 0x10);
  param_9[1] = fStack_d4 + fVar10;
  param_9[2] = fStack_d0 + fVar14;
  fVar10 = *(float *)(param_7 + 0x18);
  fVar14 = *(float *)(param_7 + 0x10);
  param_10[1] = fStack_c4 + *(float *)(param_7 + 0x14);
  param_10[2] = fStack_c0 + fVar10;
  *param_10 = fStack_c8 + fVar14;
  if ((bVar6 == 0) || (cVar8 != '\0')) goto LAB_1806eaa01;
  fVar14 = fStack_108 + fStack_108;
  fVar11 = (fStack_104 + fStack_104) * fStack_fc;
  fVar15 = fStack_100 * fVar14 - fVar11;
  fVar10 = (float)param_5[0x17];
  fVar16 = fStack_108 * fVar14 + fVar13 + fVar13;
  fVar13 = (fStack_100 + fStack_100) * fStack_fc + fStack_104 * fVar14;
  if ((0.0 < fVar10) || (0.0 < (float)param_5[0x16])) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)param_5[0x18];
  }
  pfVar7 = pfStack_160;
  if ((float)param_5[0x19] < fVar12 + fVar9) {
    fVar10 = (float)param_5[0x19] - fVar12;
    *(int16_t *)((int64_t)pfStack_160 + 0x4e) = 0;
    pfStack_160[2] = fVar15;
    *pfStack_160 = fVar16;
    pfStack_160[1] = fVar13;
    pfStack_160[4] = fVar15 * fStack_154 - fVar13 * fStack_150;
    pfStack_160[5] = fVar16 * fStack_150 - fVar15 * fStack_158;
    pfStack_160[6] = fVar13 * fStack_158 - fVar16 * fStack_154;
    pfStack_160[10] = fVar15;
    pfStack_160[8] = fVar16;
    pfStack_160[9] = fVar13;
    pfStack_160[0xc] = fVar15 * fStack_148 - fVar13 * fStack_144;
    pfStack_160[0xd] = fVar16 * fStack_144 - fVar15 * fStack_14c;
    pfStack_160[0xe] = fVar13 * fStack_14c - fVar16 * fStack_148;
    uVar1 = *(ushort *)(pfStack_160 + 0x13);
    pfStack_160[3] = fVar10;
    pfVar7 = pfStack_160 + 0x14;
    if ((0.0 < (float)param_5[0x17]) || (0.0 < (float)param_5[0x16])) {
      uVar5 = uVar1 | 0x11;
      pfStack_160[0x10] = (float)param_5[0x16];
      pfStack_160[0x11] = (float)param_5[0x17];
    }
    else {
      *(int16_t *)((int64_t)pfStack_160 + 0x4e) = 0x801;
      pfStack_160[0x10] = (float)param_5[0x14];
      pfStack_160[0x11] = (float)param_5[0x15];
      uVar5 = uVar1 | 0x18;
      if (fVar10 <= 0.0) {
        uVar5 = uVar1 | 0x10;
      }
      if (0.0 < (float)param_5[0x14]) {
        pfStack_160[0xb] = 0.0;
        *(ushort *)(pfStack_160 + 0x13) = uVar5 | 4;
        fVar10 = (float)param_5[0x17];
        goto LAB_1806ea88d;
      }
    }
    *(ushort *)(pfStack_160 + 0x13) = uVar5;
    pfStack_160[0xb] = 0.0;
    fVar10 = (float)param_5[0x17];
  }
LAB_1806ea88d:
  fVar11 = fVar11 - fStack_100 * fVar14;
  fVar16 = -fVar16;
  fVar13 = -fVar13;
  if ((0.0 < fVar10) || (0.0 < (float)param_5[0x16])) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = (float)param_5[0x18];
  }
  pfStack_160 = pfVar7;
  if (-(float)param_5[0x1a] < fVar10 + -fVar12) {
    fVar10 = -(float)param_5[0x1a] - -fVar12;
    pfStack_160 = pfVar7 + 0x14;
    *(int16_t *)((int64_t)pfVar7 + 0x4e) = 0;
    *pfVar7 = fVar16;
    pfVar7[2] = fVar11;
    pfVar7[1] = fVar13;
    pfVar7[4] = fVar11 * fStack_154 - fStack_150 * fVar13;
    pfVar7[5] = fVar16 * fStack_150 - fVar11 * fStack_158;
    pfVar7[6] = fStack_158 * fVar13 - fVar16 * fStack_154;
    pfVar7[10] = fVar11;
    pfVar7[8] = fVar16;
    pfVar7[9] = fVar13;
    pfVar7[0xc] = fVar11 * fStack_148 - fStack_144 * fVar13;
    pfVar7[0xd] = fVar16 * fStack_144 - fVar11 * fStack_14c;
    pfVar7[0xe] = fStack_14c * fVar13 - fVar16 * fStack_148;
    uVar1 = *(ushort *)(pfVar7 + 0x13);
    pfVar7[3] = fVar10;
    if ((0.0 < (float)param_5[0x17]) || (0.0 < (float)param_5[0x16])) {
      uVar5 = uVar1 | 0x11;
      pfVar7[0x10] = (float)param_5[0x16];
      pfVar7[0x11] = (float)param_5[0x17];
    }
    else {
      *(int16_t *)((int64_t)pfVar7 + 0x4e) = 0x801;
      pfVar7[0x10] = (float)param_5[0x14];
      pfVar7[0x11] = (float)param_5[0x15];
      uVar5 = uVar1 | 0x18;
      if (fVar10 <= 0.0) {
        uVar5 = uVar1 | 0x10;
      }
      if (0.0 < (float)param_5[0x14]) {
        pfVar7[0xb] = 0.0;
        *(ushort *)(pfVar7 + 0x13) = uVar5 | 4;
        goto LAB_1806eaa01;
      }
    }
    *(ushort *)(pfVar7 + 0x13) = uVar5;
    pfVar7[0xb] = 0.0;
  }
LAB_1806eaa01:
  return ((int64_t)pfStack_160 - (int64_t)pfStack_168) / 0x50;
}



uint64_t *
FUN_1806eaa80(uint64_t *param_1,int16_t param_2,int16_t *param_3,uint64_t param_4,
             float *param_5,uint64_t param_6,float *param_7,int param_8)

{
  int16_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int32_t *puVar7;
  float *pfVar8;
  int32_t *puVar9;
  uint64_t *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [160];
  
  puVar7 = (int32_t *)0x0;
  uVar1 = *param_3;
  *(int16_t *)(param_1 + 1) = param_2;
  *(int16_t *)((int64_t)param_1 + 10) = uVar1;
  *param_1 = &processed_var_6568_ptr;
  param_1[3] = &processed_var_6904_ptr;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_8 != 0) {
    plVar6 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    puVar7 = (int32_t *)
             (**(code **)(*plVar6 + 8))(plVar6,param_8,&ui_system_data_1832_ptr,&memory_allocator_3536_ptr,0x1c6);
  }
  fVar11 = param_5[1];
  fVar13 = *param_5;
  fVar16 = param_5[2];
  fVar12 = param_5[3];
  fVar15 = param_5[4];
  fVar17 = param_5[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_5[5];
  *(float *)(param_1 + 5) = fVar13 * fVar14;
  *(float *)((int64_t)param_1 + 0x2c) = fVar11 * fVar14;
  *(float *)(param_1 + 6) = fVar16 * fVar14;
  *(float *)((int64_t)param_1 + 0x34) = fVar12 * fVar14;
  *(float *)(param_1 + 7) = fVar15;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)((int64_t)param_1 + 0x3c) = fVar18;
  fVar11 = param_7[1];
  fVar13 = *param_7;
  fVar16 = param_7[2];
  fVar12 = param_7[3];
  fVar15 = param_7[5];
  fVar17 = param_7[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_7[4];
  *(float *)((int64_t)param_1 + 0x44) = fVar13 * fVar14;
  *(float *)(param_1 + 9) = fVar11 * fVar14;
  *(float *)((int64_t)param_1 + 0x4c) = fVar16 * fVar14;
  *(float *)(param_1 + 10) = fVar12 * fVar14;
  *(float *)((int64_t)param_1 + 0x54) = fVar18;
  *(float *)(param_1 + 0xb) = fVar15;
  *(float *)((int64_t)param_1 + 0x5c) = fVar17;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_4);
  fVar11 = *pfVar8;
  fVar13 = pfVar8[1];
  fStack_c8 = -fVar11;
  fStack_c4 = -fVar13;
  fStack_bc = pfVar8[3];
  fVar16 = pfVar8[2];
  fStack_c0 = -fVar16;
  fVar18 = (param_5[4] - pfVar8[4]) + (param_5[4] - pfVar8[4]);
  fVar17 = (param_5[5] - pfVar8[5]) + (param_5[5] - pfVar8[5]);
  fVar20 = (param_5[6] - pfVar8[6]) + (param_5[6] - pfVar8[6]);
  fVar15 = fStack_bc * fStack_bc - 0.5;
  fVar12 = fVar13 * fVar17 + fVar18 * fVar11 + fVar16 * fVar20;
  fVar19 = (fVar16 * fVar17 - fVar13 * fVar20) * fStack_bc;
  fVar14 = (fVar11 * fVar20 - fVar16 * fVar18) * fStack_bc;
  fVar21 = (fVar13 * fVar18 - fVar11 * fVar17) * fStack_bc;
  puVar9 = (int32_t *)SystemCore_Initializer(&fStack_c8,auStack_b8,param_5);
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  puVar7[4] = *puVar9;
  puVar7[5] = uVar2;
  puVar7[6] = uVar3;
  puVar7[7] = uVar4;
  puVar7[8] = fVar19 + fVar15 * fVar18 + fVar11 * fVar12;
  puVar7[9] = fVar14 + fVar15 * fVar17 + fVar13 * fVar12;
  puVar7[10] = fVar21 + fVar15 * fVar20 + fVar16 * fVar12;
  pfVar8 = (float *)FUN_1806dfd60(param_1,auStack_a8,param_6);
  fStack_c8 = -*pfVar8;
  fStack_c4 = -pfVar8[1];
  fStack_bc = pfVar8[3];
  fStack_c0 = -pfVar8[2];
  fVar15 = (param_7[4] - pfVar8[4]) + (param_7[4] - pfVar8[4]);
  fVar12 = (param_7[5] - pfVar8[5]) + (param_7[5] - pfVar8[5]);
  fVar14 = (param_7[6] - pfVar8[6]) + (param_7[6] - pfVar8[6]);
  fVar16 = fStack_bc * fStack_bc - 0.5;
  fVar13 = fStack_c4 * fVar12 + fStack_c8 * fVar15 + fStack_c0 * fVar14;
  fVar11 = fStack_c8 * fVar13;
  fVar18 = (fStack_c4 * fVar14 - fStack_c0 * fVar12) * fStack_bc;
  fVar19 = fStack_c0 * fVar13;
  fVar13 = fStack_c4 * fVar13;
  fVar17 = (fStack_c0 * fVar15 - fStack_c8 * fVar14) * fStack_bc;
  fVar20 = (fStack_c8 * fVar12 - fStack_c4 * fVar15) * fStack_bc;
  puVar10 = (uint64_t *)SystemCore_Initializer(&fStack_c8,auStack_b8,param_7);
  uVar5 = puVar10[1];
  *(uint64_t *)(puVar7 + 0xb) = *puVar10;
  *(uint64_t *)(puVar7 + 0xd) = uVar5;
  puVar7[0xf] = fVar18 + fVar16 * fVar15 + fVar11;
  puVar7[0x10] = fVar17 + fVar16 * fVar12 + fVar13;
  puVar7[0x11] = fVar20 + fVar16 * fVar14 + fVar19;
  *puVar7 = 0x3f800000;
  puVar7[1] = 0x3f800000;
  puVar7[2] = 0x3f800000;
  puVar7[3] = 0x3f800000;
  param_1[0xd] = puVar7;
  return param_1;
}






// 函数: void FUN_1806eafb0(uint64_t *param_1)
void FUN_1806eafb0(uint64_t *param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  
  *param_1 = &processed_var_6568_ptr;
  param_1[3] = &processed_var_6904_ptr;
  if ((*(byte *)((int64_t)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &ui_system_data_1416_ptr;
  *param_1 = &rendering_buffer_2408_ptr;
  return;
}






// 函数: void FUN_1806eafd4(int64_t param_1)
void FUN_1806eafd4(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t *unaff_RBX;
  
  lVar1 = *(int64_t *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &ui_system_data_1416_ptr;
  *unaff_RBX = &rendering_buffer_2408_ptr;
  return;
}






// 函数: void FUN_1806eb002(void)
void FUN_1806eb002(void)

{
  uint64_t *unaff_RBX;
  
  unaff_RBX[3] = &ui_system_data_1416_ptr;
  *unaff_RBX = &rendering_buffer_2408_ptr;
  return;
}



int64_t FUN_1806eb030(int64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  
  FUN_1806eafb0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        return param_1;
      }
    }
    else {
      _guard_check_icall(param_1,0x70);
    }
  }
  return param_1;
}



int32_t FUN_1806eb0a0(int64_t *param_1)

{
  int64_t lVar1;
  int8_t auStack_28 [40];
  
  lVar1 = (**(code **)(*param_1 + 0x48))(param_1,auStack_28);
  return *(int32_t *)(lVar1 + 0x10);
}



int32_t FUN_1806eb0d0(int64_t *param_1)

{
  int32_t *puVar1;
  int8_t auStack_18 [24];
  
  puVar1 = (int32_t *)(**(code **)(*param_1 + 0x50))(param_1,auStack_18);
  return *puVar1;
}



uint64_t FUN_1806eb0f0(uint64_t param_1,int64_t param_2)

{
  char *pcVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &rendering_buffer_2448_ptr + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&rendering_buffer_2396_ptr)[lVar3]) {
            return 0;
          }
          lVar3 = lVar4;
        } while (lVar4 != 7);
        return 1;
      }
    } while (lVar4 != 8);
  }
  return 1;
}



int64_t *
FUN_1806eb180(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void *puVar4;
  int64_t lVar5;
  int16_t auStackX_8 [4];
  uint64_t in_stack_ffffffffffffff98;
  int32_t uVar6;
  uint64_t in_stack_ffffffffffffffa0;
  uint64_t uVar7;
  int32_t uVar8;
  
  uVar8 = (int32_t)((uint64_t)in_stack_ffffffffffffffa0 >> 0x20);
  uVar6 = (int32_t)((uint64_t)in_stack_ffffffffffffff98 >> 0x20);
  plVar2 = (int64_t *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (int64_t *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    puVar4 = &ui_system_data_1728_ptr;
  }
  else {
    puVar4 = (void *)__std_type_info_name(0x180bfc6d0,0x180c827e0);
  }
  plVar2 = (int64_t *)
           (**(code **)(*plVar2 + 8))(plVar2,0x70,puVar4,&processed_var_8368_ptr,CONCAT44(uVar6,0x2f));
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    auStackX_8[0] = 3;
    uVar7 = param_4;
    FUN_1806ecc10(plVar2,0x100,auStackX_8,param_2,param_3,param_4,param_5,0x80,&processed_var_8336_ptr);
    uVar8 = (int32_t)((uint64_t)uVar7 >> 0x20);
    lVar5 = plVar2[0xd];
    *plVar2 = (int64_t)&processed_var_7928_ptr;
    plVar2[3] = (int64_t)&processed_var_8256_ptr;
    *(int32_t *)(lVar5 + 0x6c) = 0x501502f9;
    *(int32_t *)(lVar5 + 0x50) = 0;
    *(int32_t *)(lVar5 + 0x54) = 0x3f000000;
    *(int32_t *)(lVar5 + 0x58) = 0;
    *(int32_t *)(lVar5 + 0x5c) = 0;
    *(uint64_t *)(lVar5 + 0x60) = 0x3fc90fdb3dcccccd;
    *(int32_t *)(lVar5 + 0x68) = 0x3fc90fdb;
    *(int16_t *)(lVar5 + 0x70) = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar2 + 3,0x180be0c00,CONCAT44(uVar8,0x80));
  plVar2[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (int64_t *)0x0;
  }
  return plVar2;
}






// 函数: void FUN_1806eb350(int64_t param_1,int64_t *param_2)
void FUN_1806eb350(int64_t param_1,int64_t *param_2)

{
  if (*(int64_t *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x80);
  }
                    // WARNING: Could not recover jumptable at 0x0001806eb39c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}






// 函数: void FUN_1806eb400(int64_t param_1,uint64_t param_2)
void FUN_1806eb400(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1806f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be0c00);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}



uint * FUN_1806eb440(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((int64_t)puVar6 + 10) = 2;
    *(void **)puVar6 = &processed_var_7928_ptr;
    *(void **)(puVar6 + 6) = &processed_var_8256_ptr;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x70;
  if (*(int64_t *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(int64_t *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(uint64_t *)(param_2 + 8) = uVar5 + 0x80;
    *(uint64_t *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar1;
  uVar4 = FUN_1806f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be0c00);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}



float FUN_1806eb600(int64_t *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_48 [72];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,auStack_48);
  fVar6 = *pfVar2;
  fVar1 = pfVar2[3];
  if (fVar6 == 0.0) {
    fVar5 = 0.0;
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar6 * fVar6);
    fVar5 = fVar6 * fVar3;
    fVar3 = fVar1 * fVar3;
  }
  fVar6 = -fVar5 * fVar6;
  fVar4 = pfVar2[1] * fVar3 + -fVar5 * pfVar2[2];
  fVar5 = fVar1 * fVar3 - fVar6;
  if (fVar5 < 0.0) {
    fVar4 = -fVar4;
    fVar5 = fVar6 - fVar1 * fVar3;
  }
  fVar6 = (float)atan2f(fVar4,fVar5 + 1.0);
  return fVar6 * 4.0;
}



float FUN_1806eb6d0(int64_t *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int8_t auStack_48 [72];
  
  pfVar2 = (float *)(**(code **)(*param_1 + 0x48))(param_1,auStack_48);
  fVar6 = *pfVar2;
  fVar1 = pfVar2[3];
  if (fVar6 == 0.0) {
    fVar5 = 0.0;
    fVar3 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar6 * fVar6);
    fVar5 = fVar6 * fVar3;
    fVar3 = fVar1 * fVar3;
  }
  fVar6 = -fVar5 * fVar6;
  fVar4 = pfVar2[2] * fVar3 - -fVar5 * pfVar2[1];
  fVar5 = fVar1 * fVar3 - fVar6;
  if (fVar5 < 0.0) {
    fVar4 = -fVar4;
    fVar5 = fVar6 - fVar1 * fVar3;
  }
  fVar6 = (float)atan2f(fVar4,fVar5 + 1.0);
  return fVar6 * 4.0;
}



bool FUN_1806eb7a0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be0c00,0x80);
  *(int64_t *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}






// 函数: void FUN_1806eb810(int64_t param_1,int32_t *param_2,int32_t *param_3,char param_4)
void FUN_1806eb810(int64_t param_1,int32_t *param_2,int32_t *param_3,char param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar19;
  uint64_t uStack_160;
  uint64_t uStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  
  FUN_1806dee40(param_1,param_2,param_3,&fStack_e0,&fStack_118,&fStack_138,1);
  fStack_140 = *(float *)(param_1 + 0x6c);
  fVar6 = fStack_128 * fStack_128 + fStack_124 * fStack_124 + fStack_120 * fStack_120;
  if (fStack_140 * fStack_140 < fVar6) {
    fVar14 = 1.0 / SQRT(fVar6);
    fVar15 = fVar14 * fStack_128 * fStack_140;
    fVar6 = fVar14 * fStack_124 * fStack_140;
    fStack_140 = fVar14 * fStack_120 * fStack_140;
    if (param_4 == '\0') {
      fVar14 = *(float *)(param_1 + 0x10);
      fVar12 = *(float *)(param_1 + 0x1c);
      fVar18 = *(float *)(param_1 + 0x14);
      fVar7 = *(float *)(param_1 + 0x18);
      fVar9 = -(*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28));
      fVar16 = fVar12 * fVar12 - 0.5;
      fVar13 = -(*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x24));
      fVar11 = -(*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x20));
      fVar8 = fVar13 * fVar18 + fVar11 * fVar14 + fVar9 * fVar7;
      fStack_150 = (fVar16 * fVar11 - (fVar9 * fVar18 - fVar13 * fVar7) * fVar12) + fVar8 * fVar14;
      fVar10 = -fStack_138;
      fStack_f8 = -fStack_134;
      fStack_f4 = -fStack_130;
      fStack_148 = (fVar16 * fVar9 - (fVar13 * fVar14 - fVar11 * fVar18) * fVar12) + fVar8 * fVar7;
      uStack_160 = *(uint64_t *)(param_1 + 0x10) ^ 0x8000000080000000;
      uStack_158 = *(uint64_t *)(param_1 + 0x18) ^ 0x80000000;
      fStack_14c = (fVar16 * fVar13 - (fVar11 * fVar7 - fVar9 * fVar14) * fVar12) + fVar8 * fVar18;
      fStack_e4 = fStack_12c;
      fVar8 = (fStack_14c - fVar6) + (fStack_14c - fVar6);
      fVar18 = (fStack_148 - fStack_140) + (fStack_148 - fStack_140);
      fVar12 = (fStack_150 - fVar15) + (fStack_150 - fVar15);
      fVar6 = fStack_12c * fStack_12c - 0.5;
      fVar16 = fVar8 * fStack_f8 + fVar12 * fVar10 + fVar18 * fStack_f4;
      fVar15 = fVar16 * fStack_f8;
      fVar9 = (fVar18 * fStack_f8 - fVar8 * fStack_f4) * fStack_12c + fVar6 * fVar12;
      fVar7 = (fVar12 * fStack_f4 - fVar18 * fVar10) * fStack_12c + fVar6 * fVar8;
      fVar14 = fVar16 * fStack_f4;
      fVar19 = (fVar8 * fVar10 - fVar12 * fStack_f8) * fStack_12c + fVar6 * fVar18;
      fStack_f0 = fVar10;
      fStack_ec = fStack_f8;
      fStack_e8 = fStack_f4;
      puVar4 = (uint64_t *)SystemCore_Initializer(&fStack_f0,&fStack_138,&uStack_160);
      uStack_160 = *puVar4;
      uStack_158 = puVar4[1];
      fVar12 = fStack_10c * fStack_10c - 0.5;
      fVar13 = (fVar16 + fVar16) * fVar10 + fVar9 + fVar9;
      fVar18 = (fVar16 + fVar16) * fStack_f8 + fVar7 + fVar7;
      fVar17 = (fVar16 + fVar16) * fStack_f4 + fVar19 + fVar19;
      fVar6 = fStack_114 * fVar18 + fStack_118 * fVar13 + fStack_110 * fVar17;
      fVar8 = (fStack_114 * fVar17 - fStack_110 * fVar18) * fStack_10c + fVar12 * fVar13 +
              fStack_118 * fVar6 + fStack_108;
      fVar11 = (fStack_118 * fVar18 - fStack_114 * fVar13) * fStack_10c + fVar12 * fVar17 +
               fStack_110 * fVar6 + fStack_100;
      fVar6 = (fStack_110 * fVar13 - fStack_118 * fVar17) * fStack_10c + fVar12 * fVar18 +
              fStack_114 * fVar6 + fStack_104;
      fStack_150 = fVar16 * fVar10 + fVar9;
      fStack_14c = fVar15 + fVar7;
      fStack_148 = fVar14 + fVar19;
      puVar5 = (int32_t *)SystemCore_Initializer(&fStack_118,&fStack_f0,&uStack_160);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *param_2 = *puVar5;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      param_2[4] = fVar8;
      param_2[5] = fVar6;
      param_2[6] = fVar11;
    }
    else {
      fVar14 = *(float *)(param_1 + 0x2c);
      fStack_10c = *(float *)(param_1 + 0x38);
      fVar12 = *(float *)(param_1 + 0x30);
      fVar18 = *(float *)(param_1 + 0x34);
      fVar10 = -(*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40));
      fVar8 = -(*(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x44));
      fVar17 = fStack_10c * fStack_10c - 0.5;
      fVar11 = -(*(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c));
      fVar7 = fVar12 * fVar10 + fVar14 * fVar11 + fVar18 * fVar8;
      fStack_108 = (fVar17 * fVar11 - (fVar12 * fVar8 - fVar18 * fVar10) * fStack_10c) +
                   fVar14 * fVar7;
      fVar16 = fStack_108 + fStack_108;
      fStack_118 = -fVar14;
      fStack_104 = (fVar17 * fVar10 - (fVar18 * fVar11 - fVar14 * fVar8) * fStack_10c) +
                   fVar12 * fVar7;
      fStack_114 = -fVar12;
      fVar13 = fStack_104 + fStack_104;
      fVar9 = fStack_12c * fStack_12c - 0.5;
      fStack_110 = -fVar18;
      fStack_100 = (fVar17 * fVar8 - (fVar14 * fVar10 - fVar12 * fVar11) * fStack_10c) +
                   fVar18 * fVar7;
      fVar18 = fStack_100 + fStack_100;
      fVar14 = fStack_134 * fVar13 + fStack_138 * fVar16 + fStack_130 * fVar18;
      fVar8 = (fStack_134 * fVar18 - fStack_130 * fVar13) * fStack_12c + fVar9 * fVar16 +
              fStack_138 * fVar14 + fVar15;
      fVar12 = (fStack_138 * fVar13 - fStack_134 * fVar16) * fStack_12c + fVar9 * fVar18 +
               fStack_130 * fVar14 + fStack_140;
      fVar18 = (fStack_130 * fVar16 - fStack_138 * fVar18) * fStack_12c + fVar9 * fVar13 +
               fStack_134 * fVar14 + fVar6;
      fStack_150 = fVar15;
      fStack_14c = fVar6;
      fStack_148 = fStack_140;
      puVar4 = (uint64_t *)SystemCore_Initializer(&uStack_160,&fStack_f0,&fStack_118);
      uStack_160 = *puVar4;
      uStack_158 = puVar4[1];
      fVar9 = fVar8 + fVar8;
      fVar7 = fVar18 + fVar18;
      fVar14 = fVar12 + fVar12;
      fVar15 = fStack_d4 * fStack_d4 - 0.5;
      fVar6 = fStack_dc * fVar7 + fStack_e0 * fVar9 + fStack_d8 * fVar14;
      fStack_150 = fVar8;
      fStack_14c = fVar18;
      fStack_148 = fVar12;
      puVar5 = (int32_t *)SystemCore_Initializer(&fStack_e0,&fStack_138,&uStack_160);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *param_3 = *puVar5;
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      param_3[4] = (fStack_dc * fVar14 - fStack_d8 * fVar7) * fStack_d4 + fVar15 * fVar9 +
                   fStack_e0 * fVar6 + fStack_d0;
      param_3[5] = (fStack_d8 * fVar9 - fStack_e0 * fVar14) * fStack_d4 + fVar15 * fVar7 +
                   fStack_dc * fVar6 + fStack_cc;
      param_3[6] = (fStack_e0 * fVar7 - fStack_dc * fVar9) * fStack_d4 + fVar15 * fVar14 +
                   fStack_d8 * fVar6 + fStack_c8;
      param_2 = param_3;
    }
                    // WARNING: Subroutine does not return
    FUN_1806e1390(param_2);
  }
  return;
}






