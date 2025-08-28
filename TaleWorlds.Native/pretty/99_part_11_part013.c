#include "TaleWorlds.Native.Split.h"

// 99_part_11_part013.c - 18 个函数

// 函数: void FUN_1806e6240(longlong param_1,uint64_t param_2)
void FUN_1806e6240(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1806f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be07a0);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}



uint * FUN_1806e6280(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((longlong)puVar6 + 10) = 2;
    *(void **)puVar6 = &unknown_var_5144_ptr;
    *(void **)(puVar6 + 6) = &unknown_var_5512_ptr;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar5 + 0x70;
    *(ulonglong *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar4 = FUN_1806f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be07a0);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}



float FUN_1806e6330(longlong *param_1)

{
  longlong lVar1;
  int8_t auStack_28 [40];
  
  lVar1 = (**(code **)(*param_1 + 0x48))(param_1,auStack_28);
  return SQRT(*(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x10) +
              *(float *)(lVar1 + 0x14) * *(float *)(lVar1 + 0x14) +
              *(float *)(lVar1 + 0x18) * *(float *)(lVar1 + 0x18));
}



bool FUN_1806e64e0(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be07a0,0x70);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}






// 函数: void FUN_1806e6560(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
void FUN_1806e6560(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4,
                  byte param_5)

{
  byte bVar1;
  byte bVar2;
  uint64_t uVar3;
  float fVar4;
  int8_t auStack_48 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int8_t auStack_28 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  FUN_1806df310(auStack_28,auStack_48,param_2,param_3,param_4);
  if ((param_5 & 1) != 0) {
    (**(code **)(*param_1 + 8))(param_1,auStack_28,auStack_48);
  }
  if ((param_5 & 2) != 0) {
    bVar1 = (byte)*(int16_t *)(param_2 + 100);
    bVar2 = bVar1 >> 1 & 1;
    bVar1 = bVar1 >> 2 & 1;
    if ((bVar1 != 0) || (bVar2 != 0)) {
      uVar3 = 0xff00;
      fVar4 = SQRT((fStack_34 - fStack_14) * (fStack_34 - fStack_14) +
                   (fStack_38 - fStack_18) * (fStack_38 - fStack_18) +
                   (fStack_30 - fStack_10) * (fStack_30 - fStack_10));
      if ((bVar2 != 0) &&
         (uVar3 = 0xff00, *(float *)(param_2 + 0x54) <= fVar4 && fVar4 != *(float *)(param_2 + 0x54)
         )) {
        uVar3 = 0xff0000;
      }
      if ((bVar1 != 0) && (fVar4 < *(float *)(param_2 + 0x50))) {
        uVar3 = 0xff;
      }
      (**(code **)(*param_1 + 0x30))(param_1,&fStack_18,&fStack_38,uVar3);
    }
  }
  return;
}



uint64_t
FUN_1806e6660(float *param_1,float *param_2,uint64_t param_3,int32_t *param_4,
             int32_t *param_5,longlong param_6,longlong param_7,uint64_t param_8,float *param_9
             ,float *param_10)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int8_t auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_4 = *param_5;
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  FUN_1806df310(auStack_b8,auStack_d8,param_5,param_6,param_7);
  fVar8 = *(float *)(param_6 + 0x14);
  fVar9 = *(float *)(param_6 + 0x18);
  fStack_a8 = fStack_a8 - fStack_c8;
  fStack_a4 = fStack_a4 - fStack_c4;
  *param_2 = fStack_c8 - *(float *)(param_6 + 0x10);
  param_2[1] = fStack_c4 - fVar8;
  param_2[2] = fStack_c0 - fVar9;
  fVar10 = fStack_c8 - *(float *)(param_6 + 0x10);
  fVar14 = fStack_c4 - *(float *)(param_6 + 0x14);
  fVar12 = fStack_c8 - *(float *)(param_7 + 0x10);
  fVar15 = fStack_c4 - *(float *)(param_7 + 0x14);
  fVar9 = fStack_c0 - *(float *)(param_6 + 0x18);
  fVar11 = fStack_c0 - *(float *)(param_7 + 0x18);
  *param_9 = fStack_c8;
  param_9[1] = fStack_c4;
  param_9[2] = fStack_c0;
  param_10[1] = fStack_c4;
  fStack_a0 = fStack_a0 - fStack_c0;
  *param_10 = fStack_c8;
  param_10[2] = fStack_c0;
  fVar8 = SQRT(fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fStack_a0 * fStack_a0);
  if (0.0 < fVar8) {
    fVar7 = 1.0 / fVar8;
    fStack_a8 = fVar7 * fStack_a8;
    fStack_a4 = fVar7 * fStack_a4;
    fStack_a0 = fVar7 * fStack_a0;
  }
  bVar4 = (byte)*(int16_t *)(param_5 + 0x19) >> 2 & 1;
  bVar5 = (byte)*(int16_t *)(param_5 + 0x19) >> 1 & 1;
  if (fVar8 < 1.1920929e-07) {
    fStack_a8 = 1.0;
    fStack_a4 = 0.0;
    fStack_a0 = 0.0;
  }
  *(int16_t *)(param_1 + 0x13) = 0x10;
  *param_1 = fStack_a8;
  param_1[1] = fStack_a4;
  param_1[2] = fStack_a0;
  fVar7 = fVar14 * fStack_a0 - fVar9 * fStack_a4;
  param_1[4] = fVar7;
  fVar9 = fVar9 * fStack_a8 - fVar10 * fStack_a0;
  param_1[5] = fVar9;
  fVar10 = fVar10 * fStack_a4 - fVar14 * fStack_a8;
  fVar13 = fVar15 * fStack_a0 - fVar11 * fStack_a4;
  param_1[6] = fVar10;
  param_1[8] = fStack_a8;
  param_1[9] = fStack_a4;
  param_1[10] = fStack_a0;
  fVar14 = fVar12 * fStack_a4 - fVar15 * fStack_a8;
  param_1[0xc] = fVar13;
  fVar11 = fVar11 * fStack_a8 - fVar12 * fStack_a0;
  param_1[0xe] = fVar14;
  param_1[0xd] = fVar11;
  if ((*(byte *)(param_5 + 0x19) & 8) != 0) {
    *(ushort *)(param_1 + 0x13) = *(ushort *)(param_1 + 0x13) | 1;
    param_1[0x10] = (float)param_5[0x17];
    param_1[0x11] = (float)param_5[0x18];
  }
  fVar12 = (float)param_5[0x14];
  fVar15 = (float)param_5[0x15];
  if ((fVar12 == fVar15) && (bVar4 != 0)) {
    if (bVar5 != 0) {
      fVar9 = (float)param_5[0x16];
      fVar8 = fVar8 - fVar15;
      if (fVar8 <= fVar9) {
        if (-fVar9 <= fVar8) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = fVar9 + fVar8;
        }
      }
      else {
        fVar8 = fVar8 - fVar9;
      }
      param_1[3] = fVar8;
      return 1;
    }
  }
  else if ((bVar5 != 0) && (fVar15 < fVar8)) {
    fVar9 = (float)param_5[0x16];
    param_1[0xf] = 0.0;
    param_1[3] = (fVar8 - fVar15) - fVar9;
    return 1;
  }
  if (bVar4 == 0) {
    if (bVar5 != 0) {
      *(ushort *)(param_1 + 0x13) = *(ushort *)(param_1 + 0x13) | 8;
      param_1[0xb] = -3.4028235e+38;
      param_1[0xf] = 0.0;
      param_1[3] = fVar8 - fVar15;
      return 0;
    }
  }
  else {
    if (fVar12 <= fVar8) {
      param_1[0xf] = 3.4028235e+38;
      param_1[0xb] = 0.0;
      *(ushort *)(param_1 + 0x13) = *(ushort *)(param_1 + 0x13) | 8;
      if (bVar5 == 0) {
        param_1[3] = fVar8 - fVar12;
        return 0;
      }
      param_1[3] = fVar8 - fVar12;
      *(int16_t *)(param_1 + 0x27) = 0x10;
      param_1[0x14] = fStack_a8;
      param_1[0x15] = fStack_a4;
      param_1[0x16] = fStack_a0;
      param_1[0x18] = fVar7;
      param_1[0x19] = fVar9;
      param_1[0x1a] = fVar10;
      param_1[0x1c] = fStack_a8;
      param_1[0x1d] = fStack_a4;
      param_1[0x1e] = fStack_a0;
      param_1[0x20] = fVar13;
      param_1[0x21] = fVar11;
      param_1[0x22] = fVar14;
      if ((*(byte *)(param_5 + 0x19) & 8) == 0) {
        uVar6 = 0x10;
      }
      else {
        *(ushort *)(param_1 + 0x27) = *(ushort *)(param_1 + 0x27) | 1;
        uVar6 = *(ushort *)(param_1 + 0x27);
        param_1[0x24] = (float)param_5[0x17];
        param_1[0x25] = (float)param_5[0x18];
      }
      fVar9 = (float)param_5[0x15];
      param_1[0x1f] = -3.4028235e+38;
      param_1[0x23] = 0.0;
      *(ushort *)(param_1 + 0x27) = uVar6 | 8;
      param_1[0x17] = fVar8 - fVar9;
      return 2;
    }
    fVar9 = (float)param_5[0x16];
    param_1[0xb] = 0.0;
    param_1[3] = (fVar8 - fVar12) + fVar9;
  }
  return 1;
}



uint64_t *
FUN_1806e6b00(uint64_t *param_1,int16_t param_2,int16_t *param_3,uint64_t param_4,
             float *param_5,uint64_t param_6,float *param_7,int param_8)

{
  int16_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  longlong *plVar6;
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
  *(int16_t *)((longlong)param_1 + 10) = uVar1;
  *param_1 = &unknown_var_4704_ptr;
  param_1[3] = &unknown_var_5064_ptr;
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[2] = 0;
  if (param_8 != 0) {
    plVar6 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    puVar7 = (int32_t *)
             (**(code **)(*plVar6 + 8))(plVar6,param_8,&unknown_var_1832_ptr,&unknown_var_3536_ptr,0x1c6);
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
  *(float *)((longlong)param_1 + 0x2c) = fVar11 * fVar14;
  *(float *)(param_1 + 6) = fVar16 * fVar14;
  *(float *)((longlong)param_1 + 0x34) = fVar12 * fVar14;
  *(float *)(param_1 + 7) = fVar15;
  *(float *)(param_1 + 8) = fVar17;
  *(float *)((longlong)param_1 + 0x3c) = fVar18;
  fVar11 = param_7[1];
  fVar13 = *param_7;
  fVar16 = param_7[2];
  fVar12 = param_7[3];
  fVar15 = param_7[5];
  fVar17 = param_7[6];
  fVar14 = 1.0 / SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar16 * fVar16 + fVar12 * fVar12);
  fVar18 = param_7[4];
  *(float *)((longlong)param_1 + 0x44) = fVar13 * fVar14;
  *(float *)(param_1 + 9) = fVar11 * fVar14;
  *(float *)((longlong)param_1 + 0x4c) = fVar16 * fVar14;
  *(float *)(param_1 + 10) = fVar12 * fVar14;
  *(float *)((longlong)param_1 + 0x54) = fVar18;
  *(float *)(param_1 + 0xb) = fVar15;
  *(float *)((longlong)param_1 + 0x5c) = fVar17;
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
  puVar9 = (int32_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_5);
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
  puVar10 = (uint64_t *)FUN_1800fcb90(&fStack_c8,auStack_b8,param_7);
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






// 函数: void FUN_1806e7030(uint64_t *param_1)
void FUN_1806e7030(uint64_t *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &unknown_var_4704_ptr;
  param_1[3] = &unknown_var_5064_ptr;
  if ((*(byte *)((longlong)param_1 + 10) & 1) != 0) {
    lVar1 = param_1[0xd];
    if (lVar1 != 0) {
      plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
      (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
    }
    param_1[0xd] = 0;
  }
  param_1[3] = &unknown_var_1416_ptr;
  *param_1 = &unknown_var_2408_ptr;
  return;
}






// 函数: void FUN_1806e7054(longlong param_1)
void FUN_1806e7054(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t *unaff_RBX;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
    (**(code **)(*plVar2 + 0x10))(plVar2,lVar1);
  }
  unaff_RBX[0xd] = 0;
  unaff_RBX[3] = &unknown_var_1416_ptr;
  *unaff_RBX = &unknown_var_2408_ptr;
  return;
}






// 函数: void FUN_1806e7082(void)
void FUN_1806e7082(void)

{
  uint64_t *unaff_RBX;
  
  unaff_RBX[3] = &unknown_var_1416_ptr;
  *unaff_RBX = &unknown_var_2408_ptr;
  return;
}



longlong FUN_1806e70b0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FUN_1806e7030();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        plVar1 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
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



uint64_t FUN_1806e7130(uint64_t param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = strcmp();
  if (iVar2 != 0) {
    lVar3 = 0;
    lVar4 = lVar3;
    do {
      pcVar1 = &unknown_var_2448_ptr + lVar4;
      lVar4 = lVar4 + 1;
      if (*pcVar1 != *(char *)(param_2 + -1 + lVar4)) {
        do {
          lVar4 = lVar3 + 1;
          if (*(char *)(param_2 + lVar3) != (&unknown_var_2396_ptr)[lVar3]) {
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int16_t *
FUN_1806e71c0(int16_t *param_1,uint param_2,uint *param_3,uint param_4,uint *param_5,
             int16_t *param_6)

{
  char cVar1;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int16_t uStack_20;
  int16_t uStack_1e;
  int16_t uStack_1c;
  int16_t uStack_1a;
  int16_t uStack_18;
  int16_t uStack_16;
  int16_t uStack_14;
  int16_t uStack_12;
  
  if (((param_2 | param_4) & 0x20) != 0) {
    *param_1 = 0;
    *param_6 = 0x414;
    return param_1;
  }
  if (*(char *)((ulonglong)*param_3 * 0x20 + (ulonglong)*param_5 + 0x180be07c0) != '\0') {
    uStack_20 = (int16_t)param_3[2];
    uStack_1e = *(int16_t *)((longlong)param_3 + 10);
    uStack_1c = (int16_t)param_3[3];
    uStack_1a = *(int16_t *)((longlong)param_3 + 0xe);
    uStack_18 = (int16_t)param_5[2];
    uStack_16 = *(int16_t *)((longlong)param_5 + 10);
    uStack_14 = (int16_t)param_5[3];
    uStack_12 = *(int16_t *)((longlong)param_5 + 0xe);
    uStack_28 = 0;
    (**(code **)(&unknown_var_5696_ptr + (longlong)_DAT_180c0c300 * 8))(&uStack_28,&uStack_20,0x180c0c310);
    uStack_30 = 0;
    (**(code **)(&unknown_var_5696_ptr + (longlong)_DAT_180c0c304 * 8))(&uStack_30,&uStack_18,0x180c0c318);
    uStack_38 = 0;
    (**(code **)(&unknown_var_5696_ptr + (longlong)_DAT_180c0c308 * 8))(&uStack_38,&uStack_28,&uStack_30);
    if (((((short)uStack_38 == 0) && (uStack_38._2_2_ == 0)) && (uStack_38._4_2_ == 0)) &&
       (uStack_38._6_2_ == 0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    if (cVar1 == system_data_c30c) {
      *param_1 = 0;
      *param_6 = 0x401;
      return param_1;
    }
  }
  *param_1 = 2;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1806e71ec(uint *param_1,longlong param_2,longlong param_3)
void FUN_1806e71ec(uint *param_1,longlong param_2,longlong param_3)

{
  int16_t *puVar1;
  char cVar2;
  longlong lVar3;
  int16_t *unaff_RBX;
  longlong unaff_RBP;
  
  if (*(char *)(param_2 + (ulonglong)*param_1 + 0x180be07c0) != '\0') {
    *(int16_t *)(unaff_RBP + -0x18) = *(int16_t *)(param_3 + 8);
    *(int16_t *)(unaff_RBP + -0x16) = *(int16_t *)(param_3 + 10);
    *(int16_t *)(unaff_RBP + -0x14) = *(int16_t *)(param_3 + 0xc);
    *(int16_t *)(unaff_RBP + -0x12) = *(int16_t *)(param_3 + 0xe);
    *(short *)(unaff_RBP + -0x10) = (short)param_1[2];
    *(int16_t *)(unaff_RBP + -0xe) = *(int16_t *)((longlong)param_1 + 10);
    *(short *)(unaff_RBP + -0xc) = (short)param_1[3];
    *(int16_t *)(unaff_RBP + -10) = *(int16_t *)((longlong)param_1 + 0xe);
    lVar3 = (longlong)_DAT_180c0c300;
    *(uint64_t *)(unaff_RBP + -0x20) = 0;
    (**(code **)(&unknown_var_5696_ptr + lVar3 * 8))(unaff_RBP + -0x20,unaff_RBP + -0x18,0x180c0c310);
    lVar3 = (longlong)_DAT_180c0c304;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    (**(code **)(&unknown_var_5696_ptr + lVar3 * 8))(unaff_RBP + -0x28,unaff_RBP + -0x10,0x180c0c318);
    lVar3 = (longlong)_DAT_180c0c308;
    *(uint64_t *)(unaff_RBP + -0x30) = 0;
    (**(code **)(&unknown_var_5696_ptr + lVar3 * 8))(unaff_RBP + -0x30,unaff_RBP + -0x20,unaff_RBP + -0x28)
    ;
    if ((((*(short *)(unaff_RBP + -0x30) == 0) && (*(short *)(unaff_RBP + -0x2e) == 0)) &&
        (*(short *)(unaff_RBP + -0x2c) == 0)) && (*(short *)(unaff_RBP + -0x2a) == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
    if (cVar2 == system_data_c30c) {
      puVar1 = *(int16_t **)(unaff_RBP + 0x38);
      *unaff_RBX = 0;
      *puVar1 = 0x401;
      return;
    }
  }
  *unaff_RBX = 2;
  return;
}






// 函数: void FUN_1806e72fe(void)
void FUN_1806e72fe(void)

{
  int16_t *unaff_RBX;
  
  *unaff_RBX = 2;
  return;
}






// 函数: void FUN_1806e7308(void)
void FUN_1806e7308(void)

{
  int16_t *puVar1;
  int16_t *unaff_RBX;
  longlong unaff_RBP;
  
  puVar1 = *(int16_t **)(unaff_RBP + 0x38);
  *unaff_RBX = 0;
  *puVar1 = 0x414;
  return;
}



int16_t FUN_1806e7390(longlong *param_1)

{
  uint uVar1;
  int32_t *puVar2;
  longlong *aplStackX_8 [4];
  int16_t uStack_28;
  int8_t auStack_18 [16];
  
  uStack_28 = 0;
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (uVar1 < 3) {
    aplStackX_8[0] = (longlong *)0x0;
    (**(code **)(*param_1 + 0xb8))(param_1,aplStackX_8,1);
    puVar2 = (int32_t *)(**(code **)(*aplStackX_8[0] + 0xa8))(aplStackX_8[0],auStack_18);
    uStack_28 = (int16_t)*puVar2;
  }
  return uStack_28;
}






// 函数: void FUN_1806e7400(longlong *param_1,uint param_2)
void FUN_1806e7400(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plStackX_8;
  uint auStack_18 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (uVar1 < 3) {
    uVar1 = 0;
    iVar2 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (iVar2 != 0) {
      do {
        (**(code **)(*param_1 + 0xb8))(param_1,&plStackX_8,1,uVar1);
        (**(code **)(*plStackX_8 + 0xa8))(plStackX_8,auStack_18);
        auStack_18[0] = param_2 & 0xffff;
        (**(code **)(*plStackX_8 + 0xa0))(plStackX_8,auStack_18);
        uVar1 = uVar1 + 1;
        uVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
      } while (uVar1 < uVar3);
    }
  }
  return;
}






// 函数: void FUN_1806e7421(void)
void FUN_1806e7421(void)

{
  int iVar1;
  uint uVar2;
  longlong in_RAX;
  longlong *unaff_RBX;
  uint uVar3;
  int8_t auStackX_20 [8];
  longlong *in_stack_00000040;
  
  uVar3 = 0;
  iVar1 = (**(code **)(in_RAX + 0xb0))();
  if (iVar1 != 0) {
    do {
      (**(code **)(*unaff_RBX + 0xb8))();
      (**(code **)(*in_stack_00000040 + 0xa8))(in_stack_00000040,auStackX_20);
      (**(code **)(*in_stack_00000040 + 0xa0))(in_stack_00000040,auStackX_20);
      uVar3 = uVar3 + 1;
      uVar2 = (**(code **)(*unaff_RBX + 0xb0))();
    } while (uVar3 < uVar2);
  }
  return;
}






// 函数: void FUN_1806e748d(void)
void FUN_1806e748d(void)

{
  return;
}



int16_t * FUN_1806e7540(int16_t *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int16_t uVar3;
  int16_t uVar4;
  longlong *plStackX_10;
  uint64_t uStack_20;
  int8_t auStack_18 [16];
  
  uStack_20 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (uVar1 < 3) {
    plStackX_10 = (longlong *)0x0;
    (**(code **)(*param_2 + 0xb8))(param_2,&plStackX_10,1,0);
    lVar2 = (**(code **)(*plStackX_10 + 0xa8))(plStackX_10,auStack_18);
    uVar4 = (int16_t)((uint)*(int32_t *)(lVar2 + 8) >> 0x10);
    uVar3 = (int16_t)((uint)*(int32_t *)(lVar2 + 0xc) >> 0x10);
    uStack_20 = *(uint64_t *)(lVar2 + 8);
  }
  *param_1 = (int16_t)uStack_20;
  param_1[2] = uStack_20._4_2_;
  param_1[1] = uVar4;
  param_1[3] = uVar3;
  return param_1;
}






// 函数: void FUN_1806e75f0(longlong *param_1,int32_t *param_2)
void FUN_1806e75f0(longlong *param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plStackX_8;
  int8_t auStack_18 [8];
  int32_t uStack_10;
  int32_t uStack_c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (**(code **)(*param_1 + 0x28))();
  if (uVar3 < 3) {
    uVar3 = 0;
    iVar4 = (**(code **)(*param_1 + 0xb0))(param_1);
    if (iVar4 != 0) {
      do {
        (**(code **)(*param_1 + 0xb8))(param_1,&plStackX_8,1,uVar3);
        (**(code **)(*plStackX_8 + 0xa8))(plStackX_8,auStack_18);
        uStack_10 = uVar1;
        uStack_c = uVar2;
        (**(code **)(*plStackX_8 + 0xa0))(plStackX_8,auStack_18);
        uVar3 = uVar3 + 1;
        uVar5 = (**(code **)(*param_1 + 0xb0))(param_1);
      } while (uVar3 < uVar5);
    }
  }
  return;
}






// 函数: void FUN_1806e762c(void)
void FUN_1806e762c(void)

{
  int iVar1;
  uint uVar2;
  longlong in_RAX;
  longlong *unaff_RBX;
  uint uVar3;
  int8_t auStackX_20 [8];
  longlong *in_stack_00000040;
  
  uVar3 = 0;
  iVar1 = (**(code **)(in_RAX + 0xb0))();
  if (iVar1 != 0) {
    do {
      (**(code **)(*unaff_RBX + 0xb8))();
      (**(code **)(*in_stack_00000040 + 0xa8))(in_stack_00000040,auStackX_20);
      (**(code **)(*in_stack_00000040 + 0xa0))(in_stack_00000040,auStackX_20);
      uVar3 = uVar3 + 1;
      uVar2 = (**(code **)(*unaff_RBX + 0xb0))();
    } while (uVar3 < uVar2);
  }
  return;
}






// 函数: void FUN_1806e769f(void)
void FUN_1806e769f(void)

{
  return;
}



longlong *
FUN_1806e78b0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *puVar4;
  longlong lVar5;
  int16_t auStackX_8 [4];
  uint64_t in_stack_ffffffffffffffb8;
  int32_t uVar6;
  uint64_t in_stack_ffffffffffffffc0;
  uint64_t uVar7;
  int32_t uVar8;
  
  uVar8 = (int32_t)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar6 = (int32_t)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  plVar2 = (longlong *)_getAllocator_shdfnd_physx__YAAEAVPxAllocatorCallback_2_XZ();
  plVar3 = (longlong *)PxGetFoundation();
  cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (cVar1 == '\0') {
    puVar4 = &unknown_var_1728_ptr;
  }
  else {
    puVar4 = (void *)__std_type_info_name(0x180bfc670,0x180c827e0);
  }
  plVar2 = (longlong *)
           (**(code **)(*plVar2 + 8))(plVar2,0x70,puVar4,&unknown_var_6496_ptr,CONCAT44(uVar6,0x2d));
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1);
    auStackX_8[0] = 3;
    uVar7 = param_4;
    FUN_1806e8b10(plVar2,0x103,auStackX_8,param_2,param_3,param_4,param_5,0x60,&unknown_var_6480_ptr);
    uVar8 = (int32_t)((ulonglong)uVar7 >> 0x20);
    *plVar2 = (longlong)&unknown_var_6112_ptr;
    plVar2[3] = (longlong)&unknown_var_6400_ptr;
    lVar5 = plVar2[0xd];
    *(int32_t *)(lVar5 + 0x50) = 0x501502f9;
    *(int32_t *)(lVar5 + 0x54) = 0x40490fdb;
  }
  lVar5 = (**(code **)(*param_1 + 0xd0))
                    (param_1,param_2,param_4,plVar2 + 3,0x180be0bc0,CONCAT44(uVar8,0x60));
  plVar2[0xc] = lVar5;
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}






// 函数: void FUN_1806e7a20(longlong param_1,longlong *param_2)
void FUN_1806e7a20(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))(param_2,*(uint64_t *)(param_1 + 0x68),0x60);
  }
                    // WARNING: Could not recover jumptable at 0x0001806e7a6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_2 + 0x20))(param_2,*(uint64_t *)(param_1 + 0x20));
  return;
}






// 函数: void FUN_1806e7ad0(longlong param_1,uint64_t param_2)
void FUN_1806e7ad0(longlong param_1,uint64_t param_2)

{
  uint64_t uVar1;
  
  uVar1 = FUN_1806f59e0(param_2,*(uint64_t *)(param_1 + 0x60),param_1 + 0x18,0x180be0bc0);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}



uint * FUN_1806e7b10(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  uint64_t uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_1;
  if (puVar6 == (uint *)0x0) {
    lVar2 = 0;
    puVar6 = (uint *)0x0;
  }
  else {
    *(int16_t *)((longlong)puVar6 + 10) = 2;
    *(void **)puVar6 = &unknown_var_6112_ptr;
    *(void **)(puVar6 + 6) = &unknown_var_6400_ptr;
    lVar2 = *param_1;
  }
  *param_1 = lVar2 + 0x70;
  if (*(longlong *)(puVar6 + 0x1a) != 0) {
    uVar5 = *(longlong *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    *(ulonglong *)(param_2 + 8) = uVar5 + 0x60;
    *(ulonglong *)(puVar6 + 0x1a) = uVar5;
  }
  uVar1 = **(uint **)(param_2 + 8);
  puVar3 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar3;
  if (uVar1 == 0) {
    puVar3 = (uint *)0x0;
  }
  *(uint **)(puVar6 + 8) = puVar3;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  uVar4 = FUN_1806f59e0(param_2,*(uint64_t *)(puVar6 + 0x18),puVar6 + 6,0x180be0bc0);
  *(uint64_t *)(puVar6 + 0x18) = uVar4;
  return puVar6;
}



bool FUN_1806e7c20(longlong param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0xd0))(param_2,param_3,param_4,param_1 + 0x18,0x180be0bc0,0x60);
  *(longlong *)(param_1 + 0x60) = lVar1;
  return lVar1 != 0;
}






// 函数: void FUN_1806e7c90(longlong param_1,uint64_t param_2,uint64_t param_3)
void FUN_1806e7c90(longlong param_1,uint64_t param_2,uint64_t param_3)

{
  int8_t auStack_130 [32];
  int8_t auStack_110 [48];
  int8_t auStack_e0 [200];
  
  FUN_1806dee40(param_1,param_2,param_3,auStack_e0,auStack_110,auStack_130,1);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(param_1 + 0x54) * 0.5);
}






// 函数: void FUN_1806e7ceb(void)
void FUN_1806e7ceb(void)

{
  float fVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  int8_t unaff_DIL;
  uint8_t unaff_00000039;
  float fVar2;
  int8_t *puStack0000000000000028;
  int8_t uStack0000000000000030;
  float fStack000000000000005c;
  float fStack000000000000006c;
  
  *(ulonglong *)(in_RAX + 0x10) = CONCAT71(unaff_00000039,unaff_DIL);
  puStack0000000000000028 = &stack0x00000078;
  uStack0000000000000030 = 1;
  FUN_1806dee40();
  fStack000000000000005c = *(float *)(unaff_RBP + -0x74);
  fVar1 = *(float *)(unaff_RBX + 0x50);
  fVar2 = *(float *)(unaff_RBP + -0x78) * *(float *)(unaff_RBP + -0x78) +
          fStack000000000000005c * fStack000000000000005c +
          *(float *)(unaff_RBP + -0x70) * *(float *)(unaff_RBP + -0x70);
  if (fVar1 * fVar1 < fVar2) {
    fStack000000000000005c = (1.0 / SQRT(fVar2)) * fStack000000000000005c * fVar1;
  }
  fStack000000000000006c = fStack000000000000005c;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(unaff_RBX + 0x54) * 0.5);
}






