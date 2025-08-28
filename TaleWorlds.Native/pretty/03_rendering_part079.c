#include "TaleWorlds.Native.Split.h"

// 03_rendering_part079.c - 3 个函数

// 函数: void FUN_18030ef70(uint64_t param_1,longlong param_2,int32_t *param_3)
void FUN_18030ef70(uint64_t param_1,longlong param_2,int32_t *param_3)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  longlong lVar4;
  int32_t *puVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = (float)param_3[0xb] * 0.0027777778;
  fVar10 = -0.5;
  if ((-0.5 <= fVar7) && (fVar10 = fVar7, 0.5 <= fVar7)) {
    fVar10 = 0.5;
  }
  fVar7 = (float)param_3[0xc] * 0.01;
  if (-1.0 <= fVar7) {
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  else {
    fVar7 = -1.0;
  }
  fVar8 = (float)param_3[0xd] * 0.01;
  fVar9 = -1.0;
  if ((-1.0 <= fVar8) && (fVar9 = fVar8, 1.0 <= fVar8)) {
    fVar9 = 1.0;
  }
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  *(float *)(lVar4 + 0x20) = fVar10;
  *(float *)(lVar4 + 0x24) = fVar7;
  *(float *)(lVar4 + 0x28) = fVar9;
  *(int32_t *)(lVar4 + 0x2c) = 0;
  puVar5 = *(int32_t **)(param_2 + 0x2c8);
  uVar1 = param_3[5];
  uVar2 = param_3[7];
  uVar3 = param_3[4];
  *puVar5 = param_3[6];
  puVar5[1] = uVar3;
  puVar5[2] = uVar1;
  puVar5[3] = uVar2;
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  uVar6 = *(uint64_t *)(param_3 + 0x12);
  *(uint64_t *)(lVar4 + 0x10) = *(uint64_t *)(param_3 + 0x10);
  *(uint64_t *)(lVar4 + 0x18) = uVar6;
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  uVar1 = param_3[0xf];
  uVar3 = param_3[10];
  uVar2 = param_3[0xe];
  *(int32_t *)(lVar4 + 0x60) = param_3[9];
  *(int32_t *)(lVar4 + 100) = uVar3;
  *(int32_t *)(lVar4 + 0x68) = uVar2;
  *(int32_t *)(lVar4 + 0x6c) = uVar1;
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  *(int32_t *)(lVar4 + 0x50) = param_3[2];
  *(int32_t *)(lVar4 + 0x54) = uVar3;
  *(int32_t *)(lVar4 + 0x58) = uVar1;
  *(int32_t *)(lVar4 + 0x5c) = uVar2;
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  uVar6 = *(uint64_t *)(param_3 + 0x16);
  *(uint64_t *)(lVar4 + 0x30) = *(uint64_t *)(param_3 + 0x14);
  *(uint64_t *)(lVar4 + 0x38) = uVar6;
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  uVar1 = param_3[0x1a];
  *(int32_t *)(lVar4 + 0x40) = param_3[0x19];
  *(int32_t *)(lVar4 + 0x44) = uVar1;
  *(int32_t *)(lVar4 + 0x48) = 0;
  *(int32_t *)(lVar4 + 0x4c) = 0;
  uVar3 = param_3[0x1c];
  uVar1 = param_3[0x1e];
  uVar2 = param_3[0x1d];
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  *(int32_t *)(lVar4 + 0xb0) = param_3[0x1b];
  *(int32_t *)(lVar4 + 0xb4) = uVar3;
  *(int32_t *)(lVar4 + 0xb8) = uVar2;
  *(int32_t *)(lVar4 + 0xbc) = uVar1;
  lVar4 = *(longlong *)(param_2 + 0x2c8);
  fVar10 = (float)param_3[0x20];
  fVar7 = (float)param_3[0x1e];
  *(float *)(lVar4 + 0xc0) = (float)param_3[0x1f] - (float)param_3[0x1d];
  *(float *)(lVar4 + 0xc4) = fVar10 - fVar7;
  *(int32_t *)(lVar4 + 200) = 0;
  *(int32_t *)(lVar4 + 0xcc) = 0;
  return;
}



longlong * FUN_18030f1e0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  longlong lVar4;
  longlong *plStackX_8;
  longlong *aplStackX_10 [3];
  
  lVar4 = (longlong)*(int *)(param_1 + 0x124) * 0x20;
  iVar1 = *(int *)(param_1 + 0x128);
  uVar2 = (ulonglong)iVar1;
  if (uVar2 < (ulonglong)
              (*(longlong *)(lVar4 + 0x138 + param_1) - *(longlong *)(lVar4 + 0x130 + param_1) >> 3)
     ) {
    *(int *)(param_1 + 0x128) = iVar1 + 1;
    return *(longlong **)(*(longlong *)(lVar4 + 0x130 + param_1) + uVar2 * 8);
  }
  *(int *)(param_1 + 0x128) = iVar1 + 1;
  puVar3 = (uint64_t *)FUN_1800bf2a0(param_1,aplStackX_10,lVar4,uVar2,0xfffffffffffffffe);
  FUN_1800763c0(*puVar3,&plStackX_8);
  if (aplStackX_10[0] != (longlong *)0x0) {
    (**(code **)(*aplStackX_10[0] + 0x38))();
  }
  (**(code **)(plStackX_8[2] + 0x10))(plStackX_8 + 2,&UNK_180a1a6e0);
  FUN_1800b88d0(param_1 + 0x130 + (longlong)*(int *)(param_1 + 0x124) * 0x20,&plStackX_8);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return plStackX_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030f2c0(longlong param_1)
void FUN_18030f2c0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  uint64_t uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_48;
  *(int32_t *)(param_1 + 0x328) = 0xffffffff;
  uVar2 = 0;
  do {
    uStack_28 = 0;
    uStack_20 = 0;
    iVar1 = XInputGetState(uVar2,&uStack_28);
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x328) = uVar2;
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  iVar1 = FUN_1808ee740(*(int32_t *)(param_1 + 0x32c),0,0,0);
  *(int *)(param_1 + 0x330) = iVar1;
  if (iVar1 == -0x7f6dfffc) {
    iVar1 = FUN_1808ee620(*(int32_t *)(param_1 + 0x32c),0,0);
    *(int *)(param_1 + 0x330) = iVar1;
  }
  FUN_1808eed90(iVar1,2);
  if (_DAT_180c86878 != (longlong *)0x0) {
    (**(code **)(*_DAT_180c86878 + 0x88))();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_48);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030f390(longlong param_1)
void FUN_18030f390(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int8_t auVar4 [16];
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int32_t uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  int8_t auVar21 [16];
  int8_t auVar22 [16];
  int8_t auVar23 [16];
  int8_t auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int8_t auStack_298 [32];
  int32_t uStack_278;
  float fStack_270;
  int32_t uStack_26c;
  ulonglong uStack_268;
  uint64_t uStack_260;
  ulonglong uStack_258;
  uint64_t uStack_250;
  ulonglong uStack_248;
  uint64_t uStack_240;
  ulonglong uStack_238;
  int32_t uStack_230;
  int8_t uStack_22c;
  uint64_t uStack_228;
  int iStack_220;
  int iStack_21c;
  uint64_t uStack_210;
  uint64_t uStack_208;
  uint uStack_1f8;
  byte bStack_1f4;
  byte bStack_1f3;
  byte bStack_1f2;
  byte bStack_1f1;
  byte bStack_1f0;
  byte bStack_1ef;
  int32_t uStack_1d0;
  int32_t uStack_1cc;
  int32_t uStack_1c8;
  char cStack_1c4;
  ushort uStack_1bc;
  ushort uStack_1ba;
  int8_t auStack_178 [128];
  int8_t auStack_f8 [8];
  byte bStack_f0;
  byte bStack_ef;
  char cStack_ec;
  ulonglong uStack_d8;
  
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_298;
  *(int32_t *)(param_1 + 100) = 0;
  cVar13 = '\x01';
  if (*(int *)(param_1 + 0x328) != -1) {
    uStack_210 = 0;
    uStack_208 = 0;
    iVar6 = XInputGetState(*(int *)(param_1 + 0x328),&uStack_210);
    if (iVar6 == 0) {
      fVar26 = (float)(int)(short)uStack_208 * 1.5259022e-05 +
               (float)(int)(short)uStack_208 * 1.5259022e-05 + 1.5259022e-05;
      fVar27 = (float)(int)uStack_208._2_2_ * 1.5259022e-05 +
               (float)(int)uStack_208._2_2_ * 1.5259022e-05 + 1.5259022e-05;
      fVar28 = (float)(int)uStack_208._4_2_ * 1.5259022e-05 +
               (float)(int)uStack_208._4_2_ * 1.5259022e-05 + 1.5259022e-05;
      fVar25 = (float)(int)uStack_208._6_2_ * 1.5259022e-05 +
               (float)(int)uStack_208._6_2_ * 1.5259022e-05 + 1.5259022e-05;
      uVar9 = (uint)uStack_210._7_1_;
      uStack_250 = CONCAT44(uStack_250._4_4_,(float)uStack_210._6_1_ * 0.003921569);
      uStack_278 = fVar25;
      FUN_1803109a0(param_1,0xf0,uStack_210._4_1_ & 1);
      FUN_1803109a0(param_1,0xf1,uStack_210._4_1_ >> 1 & 1);
      FUN_1803109a0(param_1,0xf2,uStack_210._4_1_ >> 2 & 1);
      FUN_1803109a0(param_1,0xf3,uStack_210._4_1_ >> 3 & 1);
      FUN_1803109a0(param_1,0xf6,(byte)(uStack_210 >> 0x28) >> 6 & 1);
      FUN_1803109a0(param_1,0xf4,uStack_210._4_2_ >> 0xf);
      FUN_1803109a0(param_1,0xf5,(byte)(uStack_210 >> 0x28) >> 4 & 1);
      FUN_1803109a0(param_1,0xf7,(byte)(uStack_210 >> 0x28) >> 5 & 1);
      FUN_1803109a0(param_1,0xfa,uStack_210._4_1_ >> 5 & 1);
      FUN_1803109a0(param_1,0xfb,uStack_210._4_1_ >> 4 & 1);
      FUN_1803109a0(param_1,0xf8,(byte)(uStack_210 >> 0x28) & 1);
      FUN_1803109a0(param_1,0xf9,(byte)(uStack_210 >> 0x28) >> 1 & 1);
      FUN_1803109a0(param_1,0xfc,uStack_210._4_1_ >> 6 & 1);
      FUN_1803109a0(param_1,0xfd,uStack_210._4_1_ >> 7);
      if ((float)uStack_250 <= 0.1) {
        uStack_258 = 0;
      }
      else {
        uStack_260 = uStack_250 & 0xffffffff;
        uStack_258 = uStack_260;
      }
      uStack_260._0_5_ = CONCAT14(0xfe,(int)uStack_260);
      FUN_180310a00(param_1,&uStack_260);
      if ((float)uVar9 * 0.003921569 <= 0.1) {
        uStack_258 = 0;
      }
      else {
        uStack_260 = (ulonglong)(uint)((float)uVar9 * 0.003921569);
        uStack_258 = uStack_260;
      }
      uStack_260._0_5_ = CONCAT14(0xff,(int)uStack_260);
      FUN_180310a00(param_1,&uStack_260);
      lVar15 = _DAT_180c868d0;
      fVar26 = fVar26 * fVar26 + fVar27 * fVar27;
      if (0.014344389 <= fVar26) {
        auVar21._8_8_ = 0;
        auVar21._0_8_ = CONCAT44(0,fVar26);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = CONCAT44(0,fVar26);
        auVar19 = rsqrtss(auVar19,auVar21);
        fVar25 = auVar19._0_4_;
        atan2f();
        fVar26 = (fVar25 * 0.5 * (3.0 - fVar26 * fVar25 * fVar25) * fVar26 - 0.11976806) * 1.1360642
        ;
        fVar25 = (float)sinf();
        fVar25 = -(fVar25 * fVar26);
        if (-1.0 <= fVar25) {
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
        }
        else {
          fVar25 = -1.0;
        }
        fVar27 = (float)cosf();
        fVar27 = fVar27 * fVar26;
        if (-1.0 <= fVar27) {
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
        }
        else {
          fVar27 = -1.0;
        }
        uStack_260 = CONCAT44(fVar27,fVar25);
        *(int8_t *)(lVar15 + 0x2028) = 0;
        fVar25 = uStack_278;
      }
      else {
        uStack_260 = 0;
      }
      uVar7 = uStack_260;
      fVar25 = fVar28 * fVar28 + fVar25 * fVar25;
      uVar12 = 0;
      if (0.017578954 <= fVar25) {
        auVar22._8_8_ = 0;
        auVar22._0_8_ = CONCAT44(0,fVar25);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = CONCAT44(0,fVar25);
        auVar19 = rsqrtss(auVar18,auVar22);
        fVar26 = auVar19._0_4_;
        atan2f();
        fVar26 = (fVar26 * 0.5 * (3.0 - fVar25 * fVar26 * fVar26) * fVar25 - 0.13258564) * 1.1528516
        ;
        fVar25 = (float)sinf();
        fVar25 = -(fVar25 * fVar26);
        if (-1.0 <= fVar25) {
          if (1.0 <= fVar25) {
            fVar25 = 1.0;
          }
        }
        else {
          fVar25 = -1.0;
        }
        fVar27 = (float)cosf();
        fVar27 = fVar27 * fVar26;
        if (-1.0 <= fVar27) {
          if (1.0 <= fVar27) {
            fVar27 = 1.0;
          }
        }
        else {
          fVar27 = -1.0;
        }
        uStack_240 = CONCAT44(fVar27,fVar25);
        *(int8_t *)(lVar15 + 0x2028) = 0;
        uVar12 = uStack_240;
      }
      if (uStack_210._4_2_ != 0) {
        *(int8_t *)(lVar15 + 0x2028) = 0;
      }
      uStack_26c._0_1_ = 0xde;
      uStack_268 = uVar7;
      uStack_240 = uVar12;
      FUN_180310a00(param_1,&fStack_270);
      uStack_26c = CONCAT31(uStack_26c._1_3_,0xdf);
      uStack_268 = uVar12;
      FUN_180310a00(param_1,&fStack_270);
      fVar25 = uStack_260._4_4_;
      fStack_270 = uStack_260._4_4_;
      uStack_26c = 0;
      uStack_248 = (ulonglong)(uint)uStack_260._4_4_;
      uStack_250._0_5_ = CONCAT14(0xe8,(float)uStack_250);
      FUN_180310a00(param_1,&uStack_250);
      fStack_270 = -fVar25;
      uStack_26c = 0;
      uStack_248 = (ulonglong)(uint)fStack_270;
      uStack_250._0_5_ = CONCAT14(0xe9,(float)uStack_250);
      FUN_180310a00(param_1,&uStack_250);
      uVar7 = uStack_260;
      uStack_260 = uStack_260 & 0xffffffff;
      uStack_268 = uStack_260;
      uStack_26c._0_1_ = 0xeb;
      FUN_180310a00(param_1,&fStack_270);
      uStack_260 = uVar7 & 0xffffffff ^ 0x80000000;
      uStack_268 = uStack_260;
      uStack_26c._0_1_ = 0xea;
      FUN_180310a00(param_1,&fStack_270);
      uVar9 = (uint)uStack_240._4_4_;
      uStack_260 = (ulonglong)(uint)uStack_240._4_4_;
      uStack_268 = uStack_260;
      uStack_26c._0_1_ = 0xec;
      FUN_180310a00(param_1,&fStack_270);
      uStack_260 = (ulonglong)uVar9 ^ 0x80000000;
      uStack_268 = uStack_260;
      uStack_26c = CONCAT31(uStack_26c._1_3_,0xed);
      FUN_180310a00(param_1,&fStack_270);
      uVar7 = uStack_240;
      uStack_260 = uStack_240 & 0xffffffff;
      uStack_238 = uStack_260;
      uStack_240._0_5_ = CONCAT14(0xef,(float)uStack_240);
      FUN_180310a00(param_1,&uStack_240);
      uStack_260 = uVar7 & 0xffffffff ^ 0x80000000;
      uStack_238 = uStack_260;
      uStack_240._0_5_ = CONCAT14(0xee,(float)uStack_240);
      FUN_180310a00(param_1,&uStack_240);
      fVar27 = _DAT_180bf3ff8;
      fVar25 = 0.0;
      fVar26 = 0.0;
      if (*(char *)(param_1 + 0x80) != '\0') {
        fVar25 = *(float *)(param_1 + 0x88);
        fVar26 = *(float *)(param_1 + 0x84);
      }
      cVar8 = *(char *)(param_1 + 0x7f);
      if (*(char *)(param_1 + 0x7f) != '\0') {
        cVar8 = '\0';
        *(int8_t *)(param_1 + 0x7f) = 0;
        if (*(byte *)(param_1 + 400) < *(byte *)(param_1 + 0x8c)) {
          uVar7 = (ulonglong)*(byte *)(param_1 + 400);
          fVar25 = *(float *)(param_1 + 0x90 + uVar7 * 4);
          *(float *)(param_1 + 0x110 + uVar7 * 4) = *(float *)(param_1 + 0x110 + uVar7 * 4) - fVar27
          ;
          if (*(float *)(param_1 + 0x110 + (ulonglong)*(byte *)(param_1 + 400) * 4) <= 0.0) {
            *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) + 1;
          }
          *(int8_t *)(param_1 + 0x7f) = 1;
          cVar8 = '\x01';
        }
        if (*(byte *)(param_1 + 0x191) < *(byte *)(param_1 + 0x8d)) {
          uVar7 = (ulonglong)*(byte *)(param_1 + 0x191);
          fVar26 = *(float *)(param_1 + 0xd0 + uVar7 * 4);
          *(float *)(param_1 + 0x150 + uVar7 * 4) = *(float *)(param_1 + 0x150 + uVar7 * 4) - fVar27
          ;
          if (*(float *)(param_1 + 0x150 + (ulonglong)*(byte *)(param_1 + 0x191) * 4) <= 0.0) {
            *(byte *)(param_1 + 0x191) = *(byte *)(param_1 + 0x191) + 1;
          }
          *(int8_t *)(param_1 + 0x7f) = 1;
          cVar8 = cVar13;
        }
      }
      if ((*(int *)(_DAT_180c86920 + 0x2300) != 0) &&
         ((*(char *)(param_1 + 0x80) != '\0' || (cVar8 != '\0')))) {
        uStack_278 = (float)CONCAT22((short)(int)(fVar26 * 65535.0),(short)(int)(fVar25 * 65535.0));
        XInputSetState(*(int32_t *)(param_1 + 0x328),&uStack_278);
      }
      *(int32_t *)(param_1 + 100) = 1;
    }
    else {
      *(int32_t *)(param_1 + 0x328) = 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x330) == -1) {
    *(int32_t *)(param_1 + 0x330) = 0xffffffff;
  }
  else {
    FUN_1808ee3e0(*(int *)(param_1 + 0x330),auStack_f8);
    iVar6 = FUN_1808ee7d0(*(int32_t *)(param_1 + 0x330),&uStack_1f8);
    if (iVar6 == 0) {
      if (cStack_ec == '\0') {
        if (*(char *)(param_1 + 0x7e) != '\0') {
          (**(code **)(_DAT_180c8a9c0 + 0x50))();
          *(int8_t *)(param_1 + 0x7e) = 0;
        }
      }
      else {
        fVar25 = 0.1;
        if (0.1 <= (float)bStack_f0 * 0.003921569) {
          fVar25 = (float)bStack_f0 * 0.003921569;
        }
        fVar26 = 0.1;
        if (0.1 <= (float)bStack_ef * 0.003921569) {
          fVar26 = (float)bStack_ef * 0.003921569;
        }
        fVar28 = ((float)bStack_1f4 * 0.003921569 + (float)bStack_1f4 * 0.003921569) - 1.0;
        fVar27 = 1.0 - ((float)bStack_1f3 * 0.003921569 + (float)bStack_1f3 * 0.003921569);
        uStack_210 = CONCAT44(uStack_210._4_4_,fVar27);
        fStack_270 = ((float)bStack_1f2 * 0.003921569 + (float)bStack_1f2 * 0.003921569) - 1.0;
        uStack_240 = CONCAT44(uStack_240._4_4_,
                              1.0 - ((float)bStack_1f1 * 0.003921569 +
                                    (float)bStack_1f1 * 0.003921569));
        uStack_250 = CONCAT44(uStack_250._4_4_,(float)bStack_1f0 * 0.003921569);
        uVar9 = uStack_1f8 >> 0x14;
        uStack_278 = (float)bStack_1ef * 0.003921569;
        FUN_1803109a0(param_1,0xf0,(byte)(uStack_1f8 >> 4) & 1);
        FUN_1803109a0(param_1,0xf1,
                      CONCAT31((uint3)(uStack_1f8 >> 0xe),(char)(uStack_1f8 >> 6)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf2,
                      CONCAT31((uint3)(uStack_1f8 >> 0xf),(char)(uStack_1f8 >> 7)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf3,
                      CONCAT31((uint3)(uStack_1f8 >> 0xd),(char)(uStack_1f8 >> 5)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf6,
                      CONCAT31((uint3)(uStack_1f8 >> 0x17),(char)(uStack_1f8 >> 0xf)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf4,
                      CONCAT31((uint3)(uStack_1f8 >> 0x14),(char)(uStack_1f8 >> 0xc)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf5,
                      CONCAT31((uint3)(uStack_1f8 >> 0x16),(char)(uStack_1f8 >> 0xe)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf7,
                      CONCAT31((uint3)(uStack_1f8 >> 0x15),(char)(uStack_1f8 >> 0xd)) & 0xffffff01);
        FUN_1803109a0(param_1,0xfa,(byte)uVar9 & 1);
        FUN_1803109a0(param_1,0xfb,
                      CONCAT31((uint3)(uStack_1f8 >> 0xb),(char)(uStack_1f8 >> 3)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf8,
                      CONCAT31((uint3)(uStack_1f8 >> 0x12),(char)(uStack_1f8 >> 10)) & 0xffffff01);
        FUN_1803109a0(param_1,0xf9,
                      CONCAT31((uint3)(uStack_1f8 >> 0x13),(char)(uStack_1f8 >> 0xb)) & 0xffffff01);
        FUN_1803109a0(param_1,0xfc,
                      CONCAT31((uint3)(uStack_1f8 >> 9),(char)(uStack_1f8 >> 1)) & 0xffffff01);
        FUN_1803109a0(param_1,0xfd,
                      CONCAT31((uint3)(uStack_1f8 >> 10),(char)(uStack_1f8 >> 2)) & 0xffffff01);
        if ((float)uStack_250 <= 0.1) {
          uStack_248 = 0;
        }
        else {
          uStack_250 = uStack_250 & 0xffffffff;
          uStack_248 = uStack_250;
        }
        uStack_250._0_5_ = CONCAT14(0xfe,(float)uStack_250);
        FUN_180310a00(param_1,&uStack_250);
        if (uStack_278 <= 0.1) {
          uStack_248 = 0;
        }
        else {
          uStack_250 = (ulonglong)(uint)uStack_278;
          uStack_248 = uStack_250;
        }
        uStack_250._0_5_ = CONCAT14(0xff,(float)uStack_250);
        FUN_180310a00(param_1,&uStack_250);
        iVar6 = *(int *)(_DAT_180c86920 + 0x2300);
        if (cStack_1c4 == '\0') {
          if ((((*(float *)(param_1 + 0x68) != -1.0) && (*(float *)(param_1 + 0x68) <= 0.2)) &&
              (*(char *)(param_1 + 0x7c) == '\0')) &&
             (fVar16 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x6c),
             fVar17 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x70),
             SQRT(fVar16 * fVar16 + fVar17 * fVar17) <= 35.0)) {
            uStack_250 = 0x3f800000;
            uStack_228 = 0x3f800000;
            uStack_22c = 0xe7;
            FUN_180310a00(param_1,&uStack_230);
          }
          uStack_228 = 0;
          uStack_22c = 0xe7;
          FUN_180310a00(param_1,&uStack_230);
          *(int8_t *)(param_1 + 0x7c) = 0;
          *(int32_t *)(param_1 + 0x68) = 0xbf800000;
          *(uint64_t *)(param_1 + 0x6c) = 0;
          *(uint64_t *)(param_1 + 0x74) = 0;
          cVar8 = '\0';
        }
        else {
          if ((uVar9 & 1) != 0) {
            *(int8_t *)(param_1 + 0x7c) = 1;
          }
          if (*(float *)(param_1 + 0x68) == -1.0) {
            fVar16 = 0.0;
            uStack_250 = CONCAT44((float)uStack_1ba,(float)uStack_1bc);
            *(ulonglong *)(param_1 + 0x6c) = uStack_250;
          }
          else {
            fVar16 = *(float *)(param_1 + 0x68) + _DAT_180bf3ff8;
          }
          *(float *)(param_1 + 0x68) = fVar16;
          uStack_248 = 0;
          uStack_250._0_5_ = CONCAT14(0xe7,(float)uStack_250);
          FUN_180310a00(param_1,&uStack_250);
          uStack_250 = CONCAT44((float)uStack_1ba,(float)uStack_1bc);
          *(ulonglong *)(param_1 + 0x74) = uStack_250;
          cVar8 = cVar13;
        }
        *(char *)(param_1 + 0x7d) = cVar8;
        lVar15 = _DAT_180c868d0;
        fVar27 = fVar28 * fVar28 + fVar27 * fVar27;
        if (fVar25 * fVar25 <= fVar27) {
          fVar28 = (float)system_state_01f0;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = CONCAT44(0,fVar27);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = CONCAT44(0,fVar27);
          auVar19 = rsqrtss(auVar23,auVar4);
          fVar16 = auVar19._0_4_;
          atan2f();
          fVar27 = (fVar16 * 0.5 * (fVar28 - fVar27 * fVar16 * fVar16) * fVar27 - fVar25) /
                   (1.0 - fVar25);
          fVar25 = (float)sinf();
          fVar25 = -(fVar25 * fVar27);
          if (-1.0 <= fVar25) {
            if (1.0 <= fVar25) {
              fVar25 = 1.0;
            }
          }
          else {
            fVar25 = -1.0;
          }
          fVar28 = (float)cosf();
          fVar28 = fVar28 * fVar27;
          if (-1.0 <= fVar28) {
            if (1.0 <= fVar28) {
              fVar28 = 1.0;
            }
          }
          else {
            fVar28 = -1.0;
          }
          uStack_210 = CONCAT44(fVar28,fVar25);
          *(int8_t *)(lVar15 + 0x2028) = 0;
          uVar7 = uStack_210;
        }
        else {
          uVar7 = 0;
        }
        lVar5 = _DAT_180c86920;
        *(int32_t *)(param_1 + 0x338) = uStack_1d0;
        *(int32_t *)(param_1 + 0x340) = uStack_1c8;
        *(int32_t *)(param_1 + 0x33c) = uStack_1cc;
        uStack_210 = uVar7;
        if (*(int *)(lVar5 + 0x2530) != 0) {
          if (cStack_1c4 == '\0') {
            *(int32_t *)(param_1 + 0x334) = 0;
          }
          else {
            uVar2 = *(ushort *)(param_1 + 0x334);
            uVar3 = *(ushort *)(param_1 + 0x336);
            *(short *)(param_1 + 0x334) = (short)(int)(float)uStack_1bc;
            fVar27 = (float)uStack_1bc - (float)uVar2;
            fVar25 = (float)uStack_1ba - (float)uVar3;
            *(short *)(param_1 + 0x336) = (short)(int)(float)uStack_1ba;
            if ((((float)uVar2 != 0.0) || ((float)uVar3 != 0.0)) &&
               ((0.5 <= ABS(fVar27) || (0.5 <= ABS(fVar25))))) {
              iVar10 = (int)fVar27;
              uStack_228 = 0;
              uStack_230 = 0;
              iVar14 = (int)fVar25;
              iStack_220 = iVar10;
              iStack_21c = iVar14;
              FUN_1801edeb0();
              lVar15 = _DAT_180c868d0;
              if (*(char *)(_DAT_180c86950 + 0x1609) != '\0') {
                uStack_250 = CONCAT44(iVar14,iVar10);
                FUN_180174080(*(uint64_t *)(_DAT_180c86870 + 8),uStack_250);
                lVar15 = _DAT_180c868d0;
              }
            }
            *(int8_t *)(lVar15 + 0x2028) = 0;
          }
        }
        fVar25 = fStack_270 * fStack_270 + (float)uStack_240 * (float)uStack_240;
        if (fVar26 * fVar26 <= fVar25) {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = CONCAT44(0,fVar25);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = CONCAT44(0,fVar25);
          auVar19 = rsqrtss(auVar20,auVar24);
          fVar27 = auVar19._0_4_;
          atan2f();
          fVar26 = (fVar27 * 0.5 * (3.0 - fVar25 * fVar27 * fVar27) * fVar25 - fVar26) /
                   (1.0 - fVar26);
          fVar25 = (float)sinf();
          fVar25 = -(fVar25 * fVar26);
          if (-1.0 <= fVar25) {
            if (1.0 <= fVar25) {
              fVar25 = 1.0;
            }
          }
          else {
            fVar25 = -1.0;
          }
          fVar27 = (float)cosf();
          fVar27 = fVar27 * fVar26;
          fVar26 = -1.0;
          if ((-1.0 <= fVar27) && (fVar26 = fVar27, 1.0 <= fVar27)) {
            fVar26 = 1.0;
          }
          *(int8_t *)(lVar15 + 0x2028) = 0;
        }
        else {
          fVar25 = 0.0;
          fVar26 = 0.0;
        }
        if (uStack_1f8 != 0) {
          *(int8_t *)(lVar15 + 0x2028) = 0;
        }
        uStack_22c = 0xde;
        uStack_228 = uVar7;
        uStack_240._0_4_ = fVar25;
        uStack_240._4_4_ = fVar26;
        FUN_180310a00(param_1,&uStack_230);
        uStack_22c = 0xdf;
        uStack_228._0_4_ = fVar25;
        uStack_228._4_4_ = fVar26;
        FUN_180310a00(param_1,&uStack_230);
        fVar25 = uStack_210._4_4_;
        fStack_270 = uStack_210._4_4_;
        uStack_26c = 0;
        uStack_228 = (ulonglong)(uint)uStack_210._4_4_;
        uStack_22c = 0xe8;
        FUN_180310a00(param_1,&uStack_230);
        fStack_270 = -fVar25;
        uStack_26c = 0;
        uStack_228 = (ulonglong)(uint)fStack_270;
        uStack_22c = 0xe9;
        FUN_180310a00(param_1,&uStack_230);
        fVar25 = (float)uStack_210;
        fStack_270 = (float)uStack_210;
        uStack_26c = 0;
        uStack_228 = uStack_210 & 0xffffffff;
        uStack_22c = 0xeb;
        FUN_180310a00(param_1,&uStack_230);
        fStack_270 = -fVar25;
        uStack_26c = 0;
        uStack_228 = (ulonglong)(uint)fStack_270;
        uStack_22c = 0xea;
        FUN_180310a00(param_1,&uStack_230);
        fVar25 = uStack_240._4_4_;
        fStack_270 = uStack_240._4_4_;
        uStack_26c = 0;
        uStack_228 = (ulonglong)(uint)uStack_240._4_4_;
        uStack_22c = 0xec;
        FUN_180310a00(param_1,&uStack_230);
        fStack_270 = -fVar25;
        uStack_26c = 0;
        uStack_228 = (ulonglong)(uint)fStack_270;
        uStack_22c = 0xed;
        FUN_180310a00(param_1,&uStack_230);
        fVar25 = (float)uStack_240;
        uStack_240 = (ulonglong)(uint)(float)uStack_240;
        uStack_228 = uStack_240;
        uStack_22c = 0xef;
        FUN_180310a00(param_1,&uStack_230);
        uStack_240 = (ulonglong)(uint)fVar25 ^ 0x80000000;
        uStack_228 = uStack_240;
        uStack_22c = 0xee;
        FUN_180310a00(param_1,&uStack_230);
        fVar27 = _DAT_180bf3ff8;
        fVar25 = 0.0;
        fVar26 = 0.0;
        if (*(char *)(param_1 + 0x80) != '\0') {
          fVar25 = *(float *)(param_1 + 0x88);
          fVar26 = *(float *)(param_1 + 0x84);
        }
        cVar8 = *(char *)(param_1 + 0x7f);
        if (*(char *)(param_1 + 0x7f) != '\0') {
          cVar8 = '\0';
          *(int8_t *)(param_1 + 0x7f) = 0;
          if (*(byte *)(param_1 + 400) < *(byte *)(param_1 + 0x8c)) {
            uVar7 = (ulonglong)*(byte *)(param_1 + 400);
            fVar25 = *(float *)(param_1 + 0x90 + uVar7 * 4);
            *(float *)(param_1 + 0x110 + uVar7 * 4) =
                 *(float *)(param_1 + 0x110 + uVar7 * 4) - fVar27;
            if (*(float *)(param_1 + 0x110 + (ulonglong)*(byte *)(param_1 + 400) * 4) <= 0.0) {
              *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) + 1;
            }
            *(int8_t *)(param_1 + 0x7f) = 1;
            cVar8 = '\x01';
          }
          if (*(byte *)(param_1 + 0x191) < *(byte *)(param_1 + 0x8d)) {
            uVar7 = (ulonglong)*(byte *)(param_1 + 0x191);
            fVar26 = *(float *)(param_1 + 0xd0 + uVar7 * 4);
            *(float *)(param_1 + 0x150 + uVar7 * 4) =
                 *(float *)(param_1 + 0x150 + uVar7 * 4) - fVar27;
            if (*(float *)(param_1 + 0x150 + (ulonglong)*(byte *)(param_1 + 0x191) * 4) <= 0.0) {
              *(byte *)(param_1 + 0x191) = *(byte *)(param_1 + 0x191) + 1;
            }
            *(int8_t *)(param_1 + 0x7f) = 1;
            cVar8 = cVar13;
          }
        }
        if ((iVar6 != 0) && ((*(char *)(param_1 + 0x80) != '\0' || (cVar8 != '\0')))) {
          uStack_278._0_2_ = CONCAT11((char)(int)(fVar26 * 255.0),(char)(int)(fVar25 * 255.0));
          FUN_1808eecf0(*(int32_t *)(param_1 + 0x330),&uStack_278);
          fVar27 = _DAT_180bf3ff8;
        }
        if (*(char *)(param_1 + 0x192) != '\0') {
          bVar1 = *(byte *)(param_1 + 0x318);
          *(int8_t *)(param_1 + 0x192) = 0;
          if (bVar1 < *(byte *)(param_1 + 0x194)) {
            *(float *)(param_1 + 0x298 + (ulonglong)bVar1 * 4) =
                 *(float *)(param_1 + 0x298 + (ulonglong)bVar1 * 4) - fVar27;
            if (*(float *)(param_1 + 0x298 + (ulonglong)*(byte *)(param_1 + 0x318) * 4) <= 0.0) {
              *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) + 1;
            }
            *(int8_t *)(param_1 + 0x192) = 1;
          }
          bVar1 = *(byte *)(param_1 + 0x319);
          if (bVar1 < *(byte *)(param_1 + 0x195)) {
            *(float *)(param_1 + 0x2d8 + (ulonglong)bVar1 * 4) =
                 *(float *)(param_1 + 0x2d8 + (ulonglong)bVar1 * 4) - fVar27;
            if (*(float *)(param_1 + 0x2d8 + (ulonglong)*(byte *)(param_1 + 0x319) * 4) <= 0.0) {
              *(byte *)(param_1 + 0x319) = *(byte *)(param_1 + 0x319) + 1;
            }
            *(int8_t *)(param_1 + 0x192) = 1;
          }
                    // WARNING: Subroutine does not return
          memset(auStack_178,0,0x78);
        }
        uVar11 = 4;
        *(int32_t *)(param_1 + 100) = 4;
        iVar6 = FUN_1808ee530(*(int32_t *)(param_1 + 0x330),&uStack_260);
        if ((iVar6 == 0) && ((int)uStack_260 != 0)) {
          if ((int)uStack_260 == 1) {
            uVar11 = 2;
          }
          *(int32_t *)(param_1 + 100) = uVar11;
        }
        *(int8_t *)(param_1 + 0x7e) = 1;
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_298);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



