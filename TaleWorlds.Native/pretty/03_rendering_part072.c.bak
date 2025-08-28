#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part072.c - 6 个函数

// 函数: void FUN_180309bd0(longlong param_1,float param_2,int32_t param_3,char param_4,
void FUN_180309bd0(longlong param_1,float param_2,int32_t param_3,char param_4,
                  uint64_t *param_5,uint64_t param_6,char param_7)

{
  uint64_t uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_7 == '\0') {
    param_2 = param_2 + *(float *)(param_1 + 0x114);
    *(float *)(param_1 + 0x114) = param_2;
    fVar3 = 1.0 / (float)*(int *)(param_1 + 0x11c);
    if (param_4 == '\0') {
      if (param_2 <= fVar3) {
        *(int32_t *)(param_1 + 0x118) = 0;
      }
      else {
        fVar4 = *(float *)(param_1 + 0x60) - *(float *)(param_5 + 7);
        fVar7 = *(float *)(param_1 + 0x5c) - *(float *)((longlong)param_5 + 0x34);
        fVar6 = *(float *)(param_1 + 0x58) - *(float *)(param_5 + 6);
        if (50.0 < SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4) * (1.0 / param_2)) {
          uVar1 = param_5[1];
          *(uint64_t *)(param_1 + 0xd0) = *param_5;
          *(uint64_t *)(param_1 + 0xd8) = uVar1;
          uVar1 = param_5[3];
          *(uint64_t *)(param_1 + 0xe0) = param_5[2];
          *(uint64_t *)(param_1 + 0xe8) = uVar1;
          uVar1 = param_5[5];
          *(uint64_t *)(param_1 + 0xf0) = param_5[4];
          *(uint64_t *)(param_1 + 0xf8) = uVar1;
          uVar1 = param_5[7];
          *(uint64_t *)(param_1 + 0x100) = param_5[6];
          *(uint64_t *)(param_1 + 0x108) = uVar1;
          uVar1 = param_5[1];
          *(uint64_t *)(param_1 + 0x90) = *param_5;
          *(uint64_t *)(param_1 + 0x98) = uVar1;
          uVar1 = param_5[3];
          *(uint64_t *)(param_1 + 0xa0) = param_5[2];
          *(uint64_t *)(param_1 + 0xa8) = uVar1;
          uVar1 = param_5[5];
          *(uint64_t *)(param_1 + 0xb0) = param_5[4];
          *(uint64_t *)(param_1 + 0xb8) = uVar1;
          uVar1 = param_5[7];
          *(uint64_t *)(param_1 + 0xc0) = param_5[6];
          *(uint64_t *)(param_1 + 200) = uVar1;
        }
        iVar2 = (int)(param_2 * (float)*(int *)(param_1 + 0x11c));
        *(int *)(param_1 + 0x118) = iVar2;
        fVar8 = (float)iVar2 * fVar3;
        fVar5 = fVar8 / param_2;
        *(float *)(param_1 + 0x114) = param_2 - fVar8;
        uVar1 = param_5[1];
        *(uint64_t *)(param_1 + 0xd0) = *param_5;
        *(uint64_t *)(param_1 + 0xd8) = uVar1;
        uVar1 = param_5[3];
        *(uint64_t *)(param_1 + 0xe0) = param_5[2];
        *(uint64_t *)(param_1 + 0xe8) = uVar1;
        uVar1 = param_5[5];
        *(uint64_t *)(param_1 + 0xf0) = param_5[4];
        *(uint64_t *)(param_1 + 0xf8) = uVar1;
        fVar4 = *(float *)(param_5 + 7);
        fVar6 = *(float *)((longlong)param_5 + 0x34);
        fVar7 = *(float *)(param_5 + 6);
        *(float *)(param_1 + 0x124) = fVar3;
        *(float *)(param_1 + 0x128) = fVar3;
        fVar3 = (fVar7 - *(float *)(param_1 + 0xc0)) * fVar5 + *(float *)(param_1 + 0xc0);
        fVar8 = *(float *)(param_1 + 0x8c) / fVar8;
        *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x78);
        *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0x80);
        *(float *)(param_1 + 0x100) = fVar3;
        *(float *)(param_1 + 0x104) =
             (fVar6 - *(float *)(param_1 + 0xc4)) * fVar5 + *(float *)(param_1 + 0xc4);
        *(float *)(param_1 + 0x108) =
             (fVar4 - *(float *)(param_1 + 200)) * fVar5 + *(float *)(param_1 + 200);
        *(int32_t *)(param_1 + 0x10c) = 0x7f7fffff;
        *(float *)(param_1 + 0x78) = (fVar3 - *(float *)(param_1 + 0xc0)) * fVar8;
        *(float *)(param_1 + 0x7c) =
             (*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0xc4)) * fVar8;
        *(float *)(param_1 + 0x80) =
             (*(float *)(param_1 + 0x108) - *(float *)(param_1 + 200)) * fVar8;
        *(int32_t *)(param_1 + 0x84) = 0x7f7fffff;
        if (0.0 < *(float *)(param_1 + 0x88)) {
          func_0x00018030a230();
        }
        *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_1 + 0xd0);
        *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(param_1 + 0xd8);
        *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_1 + 0xe0);
        *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_1 + 0xe8);
        *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_1 + 0xf0);
        *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xf8);
        *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0x100);
        *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0x108);
      }
    }
    else {
      uVar1 = param_5[1];
      *(uint64_t *)(param_1 + 0x90) = *param_5;
      *(uint64_t *)(param_1 + 0x98) = uVar1;
      uVar1 = param_5[3];
      *(uint64_t *)(param_1 + 0xa0) = param_5[2];
      *(uint64_t *)(param_1 + 0xa8) = uVar1;
      uVar1 = param_5[5];
      *(uint64_t *)(param_1 + 0xb0) = param_5[4];
      *(uint64_t *)(param_1 + 0xb8) = uVar1;
      uVar1 = param_5[7];
      *(uint64_t *)(param_1 + 0xc0) = param_5[6];
      *(uint64_t *)(param_1 + 200) = uVar1;
      uVar1 = param_5[1];
      *(uint64_t *)(param_1 + 0xd0) = *param_5;
      *(uint64_t *)(param_1 + 0xd8) = uVar1;
      uVar1 = param_5[3];
      *(uint64_t *)(param_1 + 0xe0) = param_5[2];
      *(uint64_t *)(param_1 + 0xe8) = uVar1;
      uVar1 = param_5[5];
      *(uint64_t *)(param_1 + 0xf0) = param_5[4];
      *(uint64_t *)(param_1 + 0xf8) = uVar1;
      uVar1 = param_5[7];
      *(uint64_t *)(param_1 + 0x100) = param_5[6];
      *(uint64_t *)(param_1 + 0x108) = uVar1;
      *(int32_t *)(param_1 + 0x114) = 0;
      *(float *)(param_1 + 0x124) = fVar3;
      *(float *)(param_1 + 0x128) = fVar3;
      *(int32_t *)(param_1 + 0x118) = 1;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x60) - *(float *)(param_5 + 7);
    fVar6 = *(float *)(param_1 + 0x5c) - *(float *)((longlong)param_5 + 0x34);
    fVar4 = *(float *)(param_1 + 0x58) - *(float *)(param_5 + 6);
    fVar7 = 1.0 / param_2;
    if (50.0 < SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3) * fVar7) {
      uVar1 = param_5[1];
      *(uint64_t *)(param_1 + 0xd0) = *param_5;
      *(uint64_t *)(param_1 + 0xd8) = uVar1;
      uVar1 = param_5[3];
      *(uint64_t *)(param_1 + 0xe0) = param_5[2];
      *(uint64_t *)(param_1 + 0xe8) = uVar1;
      uVar1 = param_5[5];
      *(uint64_t *)(param_1 + 0xf0) = param_5[4];
      *(uint64_t *)(param_1 + 0xf8) = uVar1;
      uVar1 = param_5[7];
      *(uint64_t *)(param_1 + 0x100) = param_5[6];
      *(uint64_t *)(param_1 + 0x108) = uVar1;
    }
    *(int32_t *)(param_1 + 0x118) = 1;
    *(float *)(param_1 + 0x124) = param_2;
    *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0x78);
    *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0x80);
    *(int32_t *)(param_1 + 0x114) = 0;
    fVar3 = *(float *)(param_1 + 0x8c);
    fVar4 = *(float *)(param_5 + 7);
    fVar6 = *(float *)((longlong)param_5 + 0x34);
    *(float *)(param_1 + 0x78) =
         (*(float *)(param_5 + 6) - *(float *)(param_1 + 0x100)) * fVar7 * fVar3;
    *(float *)(param_1 + 0x7c) = (fVar6 - *(float *)(param_1 + 0x104)) * fVar7 * fVar3;
    *(float *)(param_1 + 0x80) = (fVar4 - *(float *)(param_1 + 0x108)) * fVar7 * fVar3;
    *(int32_t *)(param_1 + 0x84) = 0x7f7fffff;
    if (0.0 < *(float *)(param_1 + 0x88)) {
      func_0x00018030a230();
    }
    *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_1 + 0xd0);
    *(uint64_t *)(param_1 + 0x98) = *(uint64_t *)(param_1 + 0xd8);
    *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_1 + 0xe0);
    *(uint64_t *)(param_1 + 0xa8) = *(uint64_t *)(param_1 + 0xe8);
    *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_1 + 0xf0);
    *(uint64_t *)(param_1 + 0xb8) = *(uint64_t *)(param_1 + 0xf8);
    *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_1 + 0x100);
    *(uint64_t *)(param_1 + 200) = *(uint64_t *)(param_1 + 0x108);
    uVar1 = param_5[1];
    *(uint64_t *)(param_1 + 0xd0) = *param_5;
    *(uint64_t *)(param_1 + 0xd8) = uVar1;
    uVar1 = param_5[3];
    *(uint64_t *)(param_1 + 0xe0) = param_5[2];
    *(uint64_t *)(param_1 + 0xe8) = uVar1;
    uVar1 = param_5[5];
    *(uint64_t *)(param_1 + 0xf0) = param_5[4];
    *(uint64_t *)(param_1 + 0xf8) = uVar1;
    uVar1 = param_5[7];
    *(uint64_t *)(param_1 + 0x100) = param_5[6];
    *(uint64_t *)(param_1 + 0x108) = uVar1;
    *(int32_t *)(param_1 + 0x128) = param_3;
  }
  uVar1 = param_5[1];
  *(uint64_t *)(param_1 + 0x28) = *param_5;
  *(uint64_t *)(param_1 + 0x30) = uVar1;
  uVar1 = param_5[3];
  *(uint64_t *)(param_1 + 0x38) = param_5[2];
  *(uint64_t *)(param_1 + 0x40) = uVar1;
  uVar1 = param_5[5];
  *(uint64_t *)(param_1 + 0x48) = param_5[4];
  *(uint64_t *)(param_1 + 0x50) = uVar1;
  uVar1 = param_5[7];
  *(uint64_t *)(param_1 + 0x58) = param_5[6];
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  return;
}





// 函数: void FUN_180309dae(longlong param_1,longlong param_2,uint64_t *param_3,char param_4)
void FUN_180309dae(longlong param_1,longlong param_2,uint64_t *param_3,char param_4)

{
  uint64_t uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM3_Da;
  int in_XMM4_Da;
  float in_XMM5_Da;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  
  fVar8 = in_XMM5_Da + *(float *)(param_1 + 0x114);
  *(float *)(param_1 + 0x114) = fVar8;
  fVar10 = in_XMM3_Da / (float)in_XMM4_Da;
  if (param_4 == '\0') {
    if (fVar8 <= fVar10) {
      *(int32_t *)(param_1 + 0x118) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x60) - *(float *)(param_3 + 7);
      fVar6 = *(float *)(param_1 + 0x5c) - *(float *)((longlong)param_3 + 0x34);
      fVar5 = *(float *)(param_1 + 0x58) - *(float *)(param_3 + 6);
      if (50.0 < SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) * (in_XMM3_Da / fVar8)) {
        uVar1 = param_3[1];
        *(uint64_t *)(param_1 + 0xd0) = *param_3;
        *(uint64_t *)(param_1 + 0xd8) = uVar1;
        uVar1 = param_3[3];
        *(uint64_t *)(param_1 + 0xe0) = param_3[2];
        *(uint64_t *)(param_1 + 0xe8) = uVar1;
        uVar1 = param_3[5];
        *(uint64_t *)(param_1 + 0xf0) = param_3[4];
        *(uint64_t *)(param_1 + 0xf8) = uVar1;
        uVar1 = param_3[7];
        *(uint64_t *)(param_1 + 0x100) = param_3[6];
        *(uint64_t *)(param_1 + 0x108) = uVar1;
        uVar1 = param_3[1];
        *(uint64_t *)(param_1 + 0x90) = *param_3;
        *(uint64_t *)(param_1 + 0x98) = uVar1;
        uVar1 = param_3[3];
        *(uint64_t *)(param_1 + 0xa0) = param_3[2];
        *(uint64_t *)(param_1 + 0xa8) = uVar1;
        uVar1 = param_3[5];
        *(uint64_t *)(param_1 + 0xb0) = param_3[4];
        *(uint64_t *)(param_1 + 0xb8) = uVar1;
        uVar1 = param_3[7];
        *(uint64_t *)(param_1 + 0xc0) = param_3[6];
        *(uint64_t *)(param_1 + 200) = uVar1;
      }
      iVar2 = (int)(fVar8 * (float)in_XMM4_Da);
      *(int *)(param_1 + 0x118) = iVar2;
      fVar9 = (float)iVar2 * fVar10;
      fVar7 = fVar9 / fVar8;
      *(float *)(param_1 + 0x114) = fVar8 - fVar9;
      uVar1 = param_3[1];
      *(uint64_t *)(param_1 + 0xd0) = *param_3;
      *(uint64_t *)(param_1 + 0xd8) = uVar1;
      uVar1 = param_3[3];
      *(uint64_t *)(param_1 + 0xe0) = param_3[2];
      *(uint64_t *)(param_1 + 0xe8) = uVar1;
      uVar1 = param_3[5];
      *(uint64_t *)(param_1 + 0xf0) = param_3[4];
      *(uint64_t *)(param_1 + 0xf8) = uVar1;
      fVar8 = *(float *)(param_1 + 0xc4);
      fVar4 = *(float *)(param_3 + 7);
      fVar5 = *(float *)((longlong)param_3 + 0x34);
      fVar6 = *(float *)(param_3 + 6);
      *(float *)(param_1 + 0x124) = fVar10;
      *(float *)(param_1 + 0x128) = fVar10;
      pfVar3 = (float *)(param_1 + 0x78);
      fStack0000000000000028 =
           (fVar4 - *(float *)(param_1 + 200)) * fVar7 + *(float *)(param_1 + 200);
      fVar6 = (fVar6 - *(float *)(param_1 + 0xc0)) * fVar7 + *(float *)(param_1 + 0xc0);
      uVar1 = *(uint64_t *)(param_1 + 0x80);
      fVar9 = *(float *)(param_2 + 0x8c) / fVar9;
      *(uint64_t *)(param_2 + 0x68) = *(uint64_t *)pfVar3;
      *(uint64_t *)(param_2 + 0x70) = uVar1;
      *(float *)(param_2 + 0x100) = fVar6;
      *(float *)(param_2 + 0x104) = (fVar5 - fVar8) * fVar7 + fVar8;
      *(float *)(param_2 + 0x108) = fStack0000000000000028;
      *(int32_t *)(param_2 + 0x10c) = 0x7f7fffff;
      uStack000000000000002c = 0x7f7fffff;
      fVar10 = (*(float *)(param_2 + 0x104) - *(float *)(param_2 + 0xc4)) * fVar9;
      fVar4 = (*(float *)(param_2 + 0x108) - *(float *)(param_2 + 200)) * fVar9;
      fVar8 = *(float *)(param_2 + 0x88);
      *pfVar3 = (fVar6 - *(float *)(param_2 + 0xc0)) * fVar9;
      *(float *)(param_1 + 0x7c) = fVar10;
      *(float *)(param_1 + 0x80) = fVar4;
      *(int32_t *)(param_1 + 0x84) = 0x7f7fffff;
      if (0.0 < fVar8) {
        func_0x00018030a230(pfVar3,fVar8,fVar10,fVar4,fVar6);
      }
      *(uint64_t *)(param_2 + 0x90) = *(uint64_t *)(param_2 + 0xd0);
      *(uint64_t *)(param_2 + 0x98) = *(uint64_t *)(param_2 + 0xd8);
      *(uint64_t *)(param_2 + 0xa0) = *(uint64_t *)(param_2 + 0xe0);
      *(uint64_t *)(param_2 + 0xa8) = *(uint64_t *)(param_2 + 0xe8);
      *(uint64_t *)(param_2 + 0xb0) = *(uint64_t *)(param_2 + 0xf0);
      *(uint64_t *)(param_2 + 0xb8) = *(uint64_t *)(param_2 + 0xf8);
      *(uint64_t *)(param_2 + 0xc0) = *(uint64_t *)(param_2 + 0x100);
      *(uint64_t *)(param_2 + 200) = *(uint64_t *)(param_2 + 0x108);
    }
  }
  else {
    uVar1 = param_3[1];
    *(uint64_t *)(param_1 + 0x90) = *param_3;
    *(uint64_t *)(param_1 + 0x98) = uVar1;
    uVar1 = param_3[3];
    *(uint64_t *)(param_1 + 0xa0) = param_3[2];
    *(uint64_t *)(param_1 + 0xa8) = uVar1;
    uVar1 = param_3[5];
    *(uint64_t *)(param_1 + 0xb0) = param_3[4];
    *(uint64_t *)(param_1 + 0xb8) = uVar1;
    uVar1 = param_3[7];
    *(uint64_t *)(param_1 + 0xc0) = param_3[6];
    *(uint64_t *)(param_1 + 200) = uVar1;
    uVar1 = param_3[1];
    *(uint64_t *)(param_1 + 0xd0) = *param_3;
    *(uint64_t *)(param_1 + 0xd8) = uVar1;
    uVar1 = param_3[3];
    *(uint64_t *)(param_1 + 0xe0) = param_3[2];
    *(uint64_t *)(param_1 + 0xe8) = uVar1;
    uVar1 = param_3[5];
    *(uint64_t *)(param_1 + 0xf0) = param_3[4];
    *(uint64_t *)(param_1 + 0xf8) = uVar1;
    uVar1 = param_3[7];
    *(uint64_t *)(param_1 + 0x100) = param_3[6];
    *(uint64_t *)(param_1 + 0x108) = uVar1;
    *(int32_t *)(param_1 + 0x114) = 0;
    *(float *)(param_1 + 0x124) = fVar10;
    *(float *)(param_1 + 0x128) = fVar10;
    *(int32_t *)(param_1 + 0x118) = 1;
  }
  uVar1 = param_3[1];
  *(uint64_t *)(param_2 + 0x28) = *param_3;
  *(uint64_t *)(param_2 + 0x30) = uVar1;
  uVar1 = param_3[3];
  *(uint64_t *)(param_2 + 0x38) = param_3[2];
  *(uint64_t *)(param_2 + 0x40) = uVar1;
  uVar1 = param_3[5];
  *(uint64_t *)(param_2 + 0x48) = param_3[4];
  *(uint64_t *)(param_2 + 0x50) = uVar1;
  uVar1 = param_3[7];
  *(uint64_t *)(param_2 + 0x58) = param_3[6];
  *(uint64_t *)(param_2 + 0x60) = uVar1;
  return;
}





// 函数: void FUN_180309e9d(longlong param_1,float param_2,uint64_t *param_3,float param_4)
void FUN_180309e9d(longlong param_1,float param_2,uint64_t *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  longlong in_RDX;
  float in_XMM0_Da;
  float in_XMM2_Da;
  float fVar6;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar7;
  float fVar8;
  float unaff_XMM8_Da;
  float fStack0000000000000028;
  int32_t uStack000000000000002c;
  
  if (50.0 < SQRT(in_XMM2_Da + param_2 + in_XMM0_Da) * param_4) {
    uVar5 = param_3[1];
    *(uint64_t *)(param_1 + 0xd0) = *param_3;
    *(uint64_t *)(param_1 + 0xd8) = uVar5;
    uVar5 = param_3[3];
    *(uint64_t *)(param_1 + 0xe0) = param_3[2];
    *(uint64_t *)(param_1 + 0xe8) = uVar5;
    uVar5 = param_3[5];
    *(uint64_t *)(param_1 + 0xf0) = param_3[4];
    *(uint64_t *)(param_1 + 0xf8) = uVar5;
    uVar5 = param_3[7];
    *(uint64_t *)(param_1 + 0x100) = param_3[6];
    *(uint64_t *)(param_1 + 0x108) = uVar5;
    uVar5 = param_3[1];
    *(uint64_t *)(param_1 + 0x90) = *param_3;
    *(uint64_t *)(param_1 + 0x98) = uVar5;
    uVar5 = param_3[3];
    *(uint64_t *)(param_1 + 0xa0) = param_3[2];
    *(uint64_t *)(param_1 + 0xa8) = uVar5;
    uVar5 = param_3[5];
    *(uint64_t *)(param_1 + 0xb0) = param_3[4];
    *(uint64_t *)(param_1 + 0xb8) = uVar5;
    uVar5 = param_3[7];
    *(uint64_t *)(param_1 + 0xc0) = param_3[6];
    *(uint64_t *)(param_1 + 200) = uVar5;
  }
  *(int *)(param_1 + 0x118) = (int)(in_XMM5_Da * in_XMM4_Da);
  fVar8 = (float)(int)(in_XMM5_Da * in_XMM4_Da) * unaff_XMM8_Da;
  fVar6 = fVar8 / in_XMM5_Da;
  *(float *)(param_1 + 0x114) = in_XMM5_Da - fVar8;
  uVar5 = param_3[1];
  *(uint64_t *)(param_1 + 0xd0) = *param_3;
  *(uint64_t *)(param_1 + 0xd8) = uVar5;
  uVar5 = param_3[3];
  *(uint64_t *)(param_1 + 0xe0) = param_3[2];
  *(uint64_t *)(param_1 + 0xe8) = uVar5;
  uVar5 = param_3[5];
  *(uint64_t *)(param_1 + 0xf0) = param_3[4];
  *(uint64_t *)(param_1 + 0xf8) = uVar5;
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar2 = *(float *)(param_3 + 7);
  fVar3 = *(float *)((longlong)param_3 + 0x34);
  fVar4 = *(float *)(param_3 + 6);
  *(float *)(param_1 + 0x124) = unaff_XMM8_Da;
  *(float *)(param_1 + 0x128) = unaff_XMM8_Da;
  fStack0000000000000028 = (fVar2 - *(float *)(param_1 + 200)) * fVar6 + *(float *)(param_1 + 200);
  fVar7 = (fVar4 - *(float *)(param_1 + 0xc0)) * fVar6 + *(float *)(param_1 + 0xc0);
  uVar5 = *(uint64_t *)(param_1 + 0x80);
  fVar8 = *(float *)(in_RDX + 0x8c) / fVar8;
  *(uint64_t *)(in_RDX + 0x68) = *(uint64_t *)(param_1 + 0x78);
  *(uint64_t *)(in_RDX + 0x70) = uVar5;
  *(float *)(in_RDX + 0x100) = fVar7;
  *(float *)(in_RDX + 0x104) = (fVar3 - fVar1) * fVar6 + fVar1;
  *(float *)(in_RDX + 0x108) = fStack0000000000000028;
  *(int32_t *)(in_RDX + 0x10c) = 0x7f7fffff;
  fVar1 = *(float *)(in_RDX + 0x104);
  fVar2 = *(float *)(in_RDX + 0xc4);
  fVar3 = *(float *)(in_RDX + 0x108);
  fVar4 = *(float *)(in_RDX + 200);
  uStack000000000000002c = 0x7f7fffff;
  fVar6 = *(float *)(in_RDX + 0x88);
  *(float *)(param_1 + 0x78) = (fVar7 - *(float *)(in_RDX + 0xc0)) * fVar8;
  *(float *)(param_1 + 0x7c) = (fVar1 - fVar2) * fVar8;
  *(float *)(param_1 + 0x80) = (fVar3 - fVar4) * fVar8;
  *(int32_t *)(param_1 + 0x84) = 0x7f7fffff;
  if (0.0 < fVar6) {
    func_0x00018030a230();
  }
  *(uint64_t *)(in_RDX + 0x90) = *(uint64_t *)(in_RDX + 0xd0);
  *(uint64_t *)(in_RDX + 0x98) = *(uint64_t *)(in_RDX + 0xd8);
  *(uint64_t *)(in_RDX + 0xa0) = *(uint64_t *)(in_RDX + 0xe0);
  *(uint64_t *)(in_RDX + 0xa8) = *(uint64_t *)(in_RDX + 0xe8);
  *(uint64_t *)(in_RDX + 0xb0) = *(uint64_t *)(in_RDX + 0xf0);
  *(uint64_t *)(in_RDX + 0xb8) = *(uint64_t *)(in_RDX + 0xf8);
  *(uint64_t *)(in_RDX + 0xc0) = *(uint64_t *)(in_RDX + 0x100);
  *(uint64_t *)(in_RDX + 200) = *(uint64_t *)(in_RDX + 0x108);
  uVar5 = param_3[1];
  *(uint64_t *)(in_RDX + 0x28) = *param_3;
  *(uint64_t *)(in_RDX + 0x30) = uVar5;
  uVar5 = param_3[3];
  *(uint64_t *)(in_RDX + 0x38) = param_3[2];
  *(uint64_t *)(in_RDX + 0x40) = uVar5;
  uVar5 = param_3[5];
  *(uint64_t *)(in_RDX + 0x48) = param_3[4];
  *(uint64_t *)(in_RDX + 0x50) = uVar5;
  uVar5 = param_3[7];
  *(uint64_t *)(in_RDX + 0x58) = param_3[6];
  *(uint64_t *)(in_RDX + 0x60) = uVar5;
  return;
}





// 函数: void FUN_18030a08b(uint64_t param_1,longlong param_2,uint64_t *param_3)
void FUN_18030a08b(uint64_t param_1,longlong param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  
  func_0x00018030a230();
  *(uint64_t *)(param_2 + 0x90) = *(uint64_t *)(param_2 + 0xd0);
  *(uint64_t *)(param_2 + 0x98) = *(uint64_t *)(param_2 + 0xd8);
  *(uint64_t *)(param_2 + 0xa0) = *(uint64_t *)(param_2 + 0xe0);
  *(uint64_t *)(param_2 + 0xa8) = *(uint64_t *)(param_2 + 0xe8);
  *(uint64_t *)(param_2 + 0xb0) = *(uint64_t *)(param_2 + 0xf0);
  *(uint64_t *)(param_2 + 0xb8) = *(uint64_t *)(param_2 + 0xf8);
  *(uint64_t *)(param_2 + 0xc0) = *(uint64_t *)(param_2 + 0x100);
  *(uint64_t *)(param_2 + 200) = *(uint64_t *)(param_2 + 0x108);
  uVar1 = param_3[1];
  *(uint64_t *)(param_2 + 0x28) = *param_3;
  *(uint64_t *)(param_2 + 0x30) = uVar1;
  uVar1 = param_3[3];
  *(uint64_t *)(param_2 + 0x38) = param_3[2];
  *(uint64_t *)(param_2 + 0x40) = uVar1;
  uVar1 = param_3[5];
  *(uint64_t *)(param_2 + 0x48) = param_3[4];
  *(uint64_t *)(param_2 + 0x50) = uVar1;
  uVar1 = param_3[7];
  *(uint64_t *)(param_2 + 0x58) = param_3[6];
  *(uint64_t *)(param_2 + 0x60) = uVar1;
  return;
}





// 函数: void FUN_18030a0da(uint64_t param_1,longlong param_2,uint64_t *param_3)
void FUN_18030a0da(uint64_t param_1,longlong param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  
  uVar1 = param_3[1];
  *(uint64_t *)(param_2 + 0x28) = *param_3;
  *(uint64_t *)(param_2 + 0x30) = uVar1;
  uVar1 = param_3[3];
  *(uint64_t *)(param_2 + 0x38) = param_3[2];
  *(uint64_t *)(param_2 + 0x40) = uVar1;
  uVar1 = param_3[5];
  *(uint64_t *)(param_2 + 0x48) = param_3[4];
  *(uint64_t *)(param_2 + 0x50) = uVar1;
  uVar1 = param_3[7];
  *(uint64_t *)(param_2 + 0x58) = param_3[6];
  *(uint64_t *)(param_2 + 0x60) = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_18030a110(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int aiStackX_10 [2];
  uint64_t *puStackX_18;
  uint64_t uVar4;
  longlong lVar5;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_4072_ptr;
  lVar2 = render_system_data_config;
  aiStackX_10[0] = *(int *)(param_1 + 2);
  lVar3 = (longlong)aiStackX_10[0];
  lVar1 = render_system_data_config + 0x2b8;
  lVar5 = lVar1;
  AcquireSRWLockExclusive(lVar1);
  *(int8_t *)(lVar2 + 1) = 1;
  *(int8_t *)(*(longlong *)(lVar2 + 0x180) + lVar3 * 0x30) = 0;
  FUN_1800571e0(lVar2 + 0xe0,aiStackX_10,param_3,param_4,uVar4,lVar5,1);
  *(int32_t *)(param_1 + 2) = 0xffffffff;
  ReleaseSRWLockExclusive(lVar1);
  if ((longlong *)param_1[0x30] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x30] + 0x38))();
  }
  param_1[0x1c] = &system_state_ptr;
  param_1[7] = &system_state_ptr;
  puStackX_18 = param_1 + 3;
  FUN_1800f89b0();
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x188);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int * FUN_18030a2a0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar8 = param_3 + 0xffU & 0xffffff00;
  iVar6 = _Mtx_lock(param_1 + 6);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  while( true ) {
    plVar2 = *(longlong **)(param_1 + 2);
    for (plVar3 = plVar2; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
      uVar1 = *(uint *)(plVar3 + 2);
      if ((int)uVar8 <= (int)uVar1) {
        iVar6 = *(int *)((longlong)plVar3 + 0x14);
        if (uVar1 == uVar8) {
          if (plVar3 == plVar2) {
            *(longlong *)(param_1 + 2) = *plVar2;
          }
          if (plVar3 == *(longlong **)(param_1 + 4)) {
            *(longlong *)(param_1 + 4) = (*(longlong **)(param_1 + 4))[1];
          }
          if ((longlong *)plVar3[1] != (longlong *)0x0) {
            *(longlong *)plVar3[1] = *plVar3;
          }
          if (*plVar3 != 0) {
            *(longlong *)(*plVar3 + 8) = plVar3[1];
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar3);
        }
        *(uint *)((longlong)plVar3 + 0x14) = iVar6 + uVar8;
        *(uint *)(plVar3 + 2) = uVar1 - uVar8;
        *param_2 = iVar6;
        param_2[1] = uVar8;
        goto LAB_18030a42d;
      }
    }
    if ((char)param_1[1] == '\0') break;
    iVar6 = *param_1;
    iVar5 = iVar6 * 2;
    lVar4 = *(longlong *)(param_1 + 4);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x14) + *(int *)(lVar4 + 0x10) != iVar6)) {
      puVar7 = (uint64_t *)
               FUN_18062b1e0(system_memory_pool_ptr,0x18,8,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),3),
                             uVar9);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(int32_t *)(puVar7 + 2) = 0;
      *(int32_t *)((longlong)puVar7 + 0x14) = 0xffffffff;
      *(int *)((longlong)puVar7 + 0x14) = *param_1;
      *(int *)(puVar7 + 2) = iVar5 - *param_1;
      puVar7[1] = *(uint64_t *)(param_1 + 4);
      if (*(uint64_t **)(param_1 + 4) != (uint64_t *)0x0) {
        **(uint64_t **)(param_1 + 4) = puVar7;
      }
      if ((*(longlong *)(param_1 + 2) == 0) && (*(longlong *)(param_1 + 4) == 0)) {
        *(uint64_t **)(param_1 + 2) = puVar7;
      }
      *(uint64_t **)(param_1 + 4) = puVar7;
      *param_1 = iVar5;
    }
    else {
      *(int *)(lVar4 + 0x10) = (*(int *)(lVar4 + 0x10) - iVar6) + iVar5;
      *param_1 = iVar5;
    }
  }
  param_2[0] = -1;
  param_2[1] = -1;
LAB_18030a42d:
  iVar6 = _Mtx_unlock(param_1 + 6);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030a460(longlong param_1,uint64_t param_2)
void FUN_18030a460(longlong param_1,uint64_t param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint64_t *puVar7;
  int iStackX_14;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  iVar6 = _Mtx_lock(param_1 + 0x18);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  iVar6 = (int)param_2;
  iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
  do {
    if (plVar3 == (longlong *)0x0) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      if (lVar4 == 0) {
        puVar7 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3,uVar8);
        *(int *)((longlong)puVar7 + 0x14) = iVar6;
        *(int *)(puVar7 + 2) = iStackX_14;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(uint64_t **)(param_1 + 0x10) = puVar7;
LAB_18030a65e:
        *(uint64_t **)(param_1 + 8) = puVar7;
      }
      else if (*(int *)(lVar4 + 0x14) + *(int *)(lVar4 + 0x10) == iVar6) {
        *(int *)(lVar4 + 0x10) = iStackX_14 + *(int *)(lVar4 + 0x10);
      }
      else {
        puVar7 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3,uVar8);
        puVar7[1] = 0;
        *(int *)((longlong)puVar7 + 0x14) = iVar6;
        *(int *)(puVar7 + 2) = iStackX_14;
        *puVar7 = 0;
        puVar7[1] = *(uint64_t *)(param_1 + 0x10);
        **(uint64_t **)(param_1 + 0x10) = puVar7;
        *(uint64_t **)(param_1 + 0x10) = puVar7;
      }
LAB_18030a662:
      iVar6 = _Mtx_unlock(param_1 + 0x18);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      return;
    }
    iVar1 = *(int *)((longlong)plVar3 + 0x14);
    if (iVar6 < iVar1) {
      plVar5 = (longlong *)plVar3[1];
      if (plVar5 == (longlong *)0x0) {
        if (iStackX_14 + iVar6 != iVar1) {
          puVar7 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3,uVar8);
          *(int *)((longlong)puVar7 + 0x14) = iVar6;
          *(int *)(puVar7 + 2) = iStackX_14;
          *puVar7 = plVar3;
          puVar7[1] = 0;
          plVar3[1] = (longlong)puVar7;
          goto LAB_18030a65e;
        }
        *(int *)((longlong)plVar3 + 0x14) = iVar1 - iStackX_14;
        *(int *)(plVar3 + 2) = (int)plVar3[2] + iStackX_14;
      }
      else {
        iVar2 = (int)plVar5[2];
        if (*(int *)((longlong)plVar5 + 0x14) + iVar2 == iVar6) {
          if (iStackX_14 + iVar6 == iVar1) {
            if (plVar3 == *(longlong **)(param_1 + 0x10)) {
              *(longlong **)(param_1 + 0x10) = plVar5;
              iVar2 = (int)plVar5[2];
            }
            *(int *)(plVar5 + 2) = (int)plVar3[2] + iVar2 + iStackX_14;
            lVar4 = *plVar3;
            *plVar5 = lVar4;
            if (lVar4 != 0) {
              *(longlong **)(lVar4 + 8) = plVar5;
            }
                    // WARNING: Subroutine does not return
            FUN_18064e900(plVar3);
          }
          *(int *)(plVar5 + 2) = iVar2 + iStackX_14;
        }
        else if (iStackX_14 + iVar6 == iVar1) {
          *(int *)((longlong)plVar3 + 0x14) = iVar1 - iStackX_14;
          *(int *)(plVar3 + 2) = (int)plVar3[2] + iStackX_14;
        }
        else {
          puVar7 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3,uVar8);
          *(int *)((longlong)puVar7 + 0x14) = iVar6;
          *(int *)(puVar7 + 2) = iStackX_14;
          *puVar7 = plVar3;
          puVar7[1] = plVar5;
          *plVar5 = (longlong)puVar7;
          plVar3[1] = (longlong)puVar7;
        }
      }
      goto LAB_18030a662;
    }
    plVar3 = (longlong *)*plVar3;
  } while( true );
}



uint64_t *
FUN_18030a6a0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x1c;
  strcpy_s(param_2[1],0x80,&unknown_var_4304_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



