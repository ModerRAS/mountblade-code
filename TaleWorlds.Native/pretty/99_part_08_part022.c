#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part022.c - 5 个函数

// 函数: void FUN_1804f55bd(void)
void FUN_1804f55bd(void)

{
  return;
}



uint64_t *
FUN_1804f5600(uint64_t param_1,uint64_t *param_2,uint64_t *param_3,float param_4,
             int64_t param_5)

{
  bool bVar1;
  char cVar2;
  float *pfVar3;
  uint64_t uVar4;
  int iVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int8_t auVar12 [16];
  float fVar13;
  float fVar14;
  int32_t uVar15;
  int32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int aiStackX_18 [2];
  float fStackX_20;
  uint64_t uStack_178;
  int64_t lStack_170;
  uint64_t uStack_168;
  uint64_t uStack_160;
  float fStack_158;
  int32_t uStack_154;
  float fStack_150;
  int32_t uStack_14c;
  int32_t uStack_148;
  int32_t uStack_144;
  uint64_t uStack_140;
  int iStack_138;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  int64_t lStack_118;
  uint64_t uStack_110;
  uint64_t uStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  
  param_2[7] = 0;
  *param_2 = *param_3;
  uVar6 = param_3[4];
  fStackX_20 = 1.1754944e-38;
  param_2[3] = param_3[3];
  param_2[4] = uVar6;
  uVar6 = param_3[6];
  param_2[5] = param_3[5];
  param_2[6] = uVar6;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[7] = param_3[7];
  *(int32_t *)(param_2 + 8) = *(int32_t *)(param_3 + 8);
  uStack_178 = *param_3;
  uStack_160._0_4_ = *(float *)(param_3 + 3);
  uStack_160._4_4_ = *(float *)((int64_t)param_3 + 0x1c);
  fStack_158 = *(float *)(param_3 + 4);
  uStack_154 = *(int32_t *)((int64_t)param_3 + 0x24);
  lStack_170 = param_3[1];
  fStack_150 = *(float *)(param_3 + 5);
  uStack_14c = *(int32_t *)((int64_t)param_3 + 0x2c);
  uStack_148 = *(int32_t *)(param_3 + 6);
  uStack_144 = *(int32_t *)((int64_t)param_3 + 0x34);
  uStack_168 = param_3[2];
  uStack_140 = param_3[7];
  iStack_138 = *(int *)(param_3 + 8);
  cVar2 = FUN_1804f6190((float)uStack_160,&uStack_160);
  if (cVar2 == '\0') {
    FUN_1804f6240(param_1,aiStackX_18,&uStack_160);
  }
  uVar15 = *(int32_t *)(param_3 + 3);
  uVar16 = *(int32_t *)((int64_t)param_3 + 0x1c);
  uStack_108 = param_3[3];
  fStack_158 = *(float *)(param_3 + 4);
  uStack_154 = *(int32_t *)((int64_t)param_3 + 0x24);
  uStack_100 = param_3[4];
  lStack_170 = param_3[1];
  fStack_150 = *(float *)(param_3 + 5);
  uStack_14c = *(int32_t *)((int64_t)param_3 + 0x2c);
  uStack_f8 = param_3[5];
  uStack_148 = *(int32_t *)(param_3 + 6);
  uStack_144 = *(int32_t *)((int64_t)param_3 + 0x34);
  uStack_f0 = param_3[6];
  uStack_168 = param_3[2];
  iStack_138 = *(int *)(param_3 + 8);
  fVar11 = -param_4;
  uVar6 = *param_3;
  uVar4 = param_3[7];
  lStack_118 = lStack_170;
  uStack_110 = uStack_168;
  aiStackX_18[0] = iStack_138;
  fVar21 = fVar11;
  fStack_128 = fVar11;
  do {
    if (param_4 <= fVar11) {
      return param_2;
    }
    bVar1 = true;
    uStack_160 = CONCAT44(uVar16,uVar15);
    uStack_178 = uVar6;
    uStack_140 = uVar4;
    iVar5 = iStack_138;
    if (fVar21 < param_4) {
      do {
        fStack_124 = fVar11 + *(float *)(param_3 + 3);
        fStack_120 = fVar21 + *(float *)((int64_t)param_3 + 0x1c);
        if (((float)uStack_160 != fStack_124) || (uStack_160._4_4_ != fStack_120)) {
          uStack_160 = CONCAT44(fStack_120,fStack_124);
          iVar5 = 0;
          iStack_138 = 0;
        }
        if (bVar1) {
          bVar1 = false;
          uStack_100 = CONCAT44(uStack_154,fStack_158);
          uStack_f8 = CONCAT44(uStack_14c,fStack_150);
          uStack_f0 = CONCAT44(uStack_144,uStack_148);
          lStack_118 = lStack_170;
          uStack_110 = uStack_168;
          uStack_108 = uStack_160;
          uVar4 = uStack_140;
          uVar6 = uStack_178;
          aiStackX_18[0] = iVar5;
        }
        cVar2 = FUN_1804f6190(param_1,&uStack_160);
        if (((cVar2 != '\0') && (SystemCore_Validator(&uStack_178,1), iVar5 = iStack_138, 0 < iStack_138))
           && (lStack_170 != 0)) {
          SystemCore_Validator(&uStack_178,1);
          pfVar3 = &fStack_150;
          fVar13 = *(float *)(param_5 + 0x18) - (float)uStack_160;
          fVar14 = *(float *)(param_5 + 0x1c) - uStack_160._4_4_;
          if (iStack_138 < 1) {
            pfVar3 = (float *)&system_data_ad20;
          }
          fVar9 = fVar14 * fVar14 + fVar13 * fVar13;
          auVar12 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar17 = auVar12._0_4_;
          fVar9 = fVar17 * 0.5 * (3.0 - fVar9 * fVar17 * fVar17);
          fVar13 = fVar14 * fVar9 * pfVar3[1] + fVar13 * fVar9 * *pfVar3;
          iVar5 = iStack_138;
          if (0.0 <= fVar13) {
            if (0.5 <= fVar13) {
              if (0.71 <= fVar13) goto LAB_1804f5c4c;
              fVar13 = fVar13 - 0.5;
              fVar17 = 0.20000002 - fVar13 * 0.28571433;
              fVar18 = 0.8 - fVar13 * 1.1428572;
              fVar14 = 1.2 - fVar13 * 1.7142859;
              fVar19 = 0.010000001 - fVar13 * 0.014285716;
              fVar20 = 0.004 - fVar13 * 0.005714286;
              fVar9 = 0.080000006 - fVar13 * 0.11428572;
              fVar13 = 0.32 - fVar13 * 0.45714286;
            }
            else {
              fVar18 = fVar13 * 1.44 + 0.080000006;
              fVar17 = fVar13 * 0.36000004 + 0.020000001;
              fVar14 = fVar13 * 2.16 + 0.120000005;
              fVar19 = fVar13 * 0.018000001 + 0.001;
              fVar20 = fVar13 * 0.0072000003 + 0.00040000002;
              fVar9 = fVar13 * 0.14400001 + 0.008;
              fVar13 = fVar13 * 0.576 + 0.031999998;
            }
            if ((20.0 < ABS(fVar11)) || (20.0 < ABS(fVar21))) {
              SystemCore_Validator(&uStack_178,1);
              fVar14 = fStack_158;
              if (iStack_138 < 1) {
                fVar14 = -NAN;
              }
              SystemCore_Validator(param_5,3);
              if (*(int *)(param_5 + 0x40) < 3) {
                fVar7 = -NAN;
              }
              else {
                fVar7 = *(float *)(param_5 + 0x20);
              }
              fVar14 = fVar14 - fVar7;
              if (-20.0 <= fVar14) {
                if (20.0 <= fVar14) {
                  fVar14 = 20.0;
                }
              }
              else {
                fVar14 = -20.0;
              }
              fVar8 = (ABS(fVar21) + ABS(fVar11)) * 0.5;
              fVar10 = param_4 * 0.5;
              fVar7 = fVar10;
              if ((fVar10 <= fVar8) && (fVar7 = fVar8, param_4 <= fVar8)) {
                fVar7 = param_4;
              }
              fVar14 = (fVar19 * fVar14 + fVar17 + fVar18) -
                       (fVar9 + fVar13 + fVar14 * fVar20) * ((fVar7 - fVar10) / fVar10);
            }
            iVar5 = iStack_138;
            if (fStackX_20 < fVar14) {
              *param_2 = uStack_178;
              param_2[1] = lStack_170;
              param_2[2] = uStack_168;
              param_2[7] = uStack_140;
              param_2[3] = uStack_160;
              param_2[4] = CONCAT44(uStack_154,fStack_158);
              *(int *)(param_2 + 8) = iStack_138;
              param_2[5] = CONCAT44(uStack_14c,fStack_150);
              param_2[6] = CONCAT44(uStack_144,uStack_148);
              fStackX_20 = fVar14;
            }
          }
        }
LAB_1804f5c4c:
        fVar21 = fVar21 + param_4 * 0.05;
      } while (fVar21 < param_4);
      lStack_170 = lStack_118;
      uStack_168 = uStack_110;
      uVar15 = (int32_t)uStack_108;
      uVar16 = uStack_108._4_4_;
      fStack_158 = (float)uStack_100;
      uStack_154 = uStack_100._4_4_;
      fStack_150 = (float)uStack_f8;
      uStack_14c = uStack_f8._4_4_;
      uStack_148 = (int32_t)uStack_f0;
      uStack_144 = uStack_f0._4_4_;
      iStack_138 = aiStackX_18[0];
      fVar21 = fStack_128;
    }
    fVar11 = fVar11 + param_4 * 0.05;
  } while( true );
}






// 函数: void FUN_1804f577b(float param_1,int param_2,float param_3)
void FUN_1804f577b(float param_1,int param_2,float param_3)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t in_RAX;
  float *pfVar4;
  uint64_t in_RCX;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_R13;
  int64_t unaff_R14;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int8_t auVar11 [16];
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_XMM15_Da;
  float fStackX_20;
  uint64_t uStack0000000000000030;
  int64_t lStack0000000000000038;
  uint64_t uStack0000000000000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  int32_t uStack0000000000000054;
  float fStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  uint64_t uStack0000000000000068;
  int iStack0000000000000070;
  
  lVar1 = *(int64_t *)(unaff_RBP + 0xd0);
  do {
    bVar2 = true;
    _fStack0000000000000048 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
    uStack0000000000000030 = unaff_R13;
    lStack0000000000000038 = in_RAX;
    uStack0000000000000040 = in_RCX;
    fStack0000000000000050 = unaff_XMM6_Dc;
    uStack0000000000000054 = unaff_XMM6_Dd;
    fStack0000000000000058 = unaff_XMM8_Da;
    uStack000000000000005c = unaff_XMM8_Db;
    uStack0000000000000060 = unaff_XMM8_Dc;
    uStack0000000000000064 = unaff_XMM8_Dd;
    uStack0000000000000068 = unaff_RBX;
    iStack0000000000000070 = param_2;
    if (param_3 < unaff_XMM15_Da) {
      do {
        fVar7 = unaff_XMM7_Da + *(float *)(unaff_R14 + 0x18);
        fVar10 = param_3 + *(float *)(unaff_R14 + 0x1c);
        *(float *)(unaff_RBP + -0x7c) = fVar7;
        *(float *)(unaff_RBP + -0x78) = fVar10;
        if ((fStack0000000000000048 != fVar7) || (fStack000000000000004c != fVar10)) {
          _fStack0000000000000048 = *(uint64_t *)(unaff_RBP + -0x7c);
          param_2 = 0;
          iStack0000000000000070 = 0;
        }
        if (bVar2) {
          bVar2 = false;
          *(int64_t *)(unaff_RBP + -0x70) = lStack0000000000000038;
          *(uint64_t *)(unaff_RBP + -0x68) = uStack0000000000000040;
          *(uint64_t *)(unaff_RBP + -0x60) = _fStack0000000000000048;
          *(uint64_t *)(unaff_RBP + -0x58) =
               CONCAT44(uStack0000000000000054,fStack0000000000000050);
          *(int *)(unaff_RBP + 0xc0) = param_2;
          *(uint64_t *)(unaff_RBP + -0x50) =
               CONCAT44(uStack000000000000005c,fStack0000000000000058);
          *(uint64_t *)(unaff_RBP + -0x48) =
               CONCAT44(uStack0000000000000064,uStack0000000000000060);
          unaff_RBX = uStack0000000000000068;
          unaff_R13 = uStack0000000000000030;
        }
        cVar3 = FUN_1804f6190(*(uint64_t *)(unaff_RBP + 0xb0),&stack0x00000048);
        if (((cVar3 != '\0') &&
            (SystemCore_Validator(&stack0x00000030,1), param_2 = iStack0000000000000070,
            0 < iStack0000000000000070)) && (lStack0000000000000038 != 0)) {
          SystemCore_Validator(&stack0x00000030,1);
          pfVar4 = &stack0x00000058;
          fVar7 = *(float *)(lVar1 + 0x18) - fStack0000000000000048;
          fVar10 = *(float *)(lVar1 + 0x1c) - fStack000000000000004c;
          if (iStack0000000000000070 < 1) {
            pfVar4 = (float *)&system_data_ad20;
          }
          fVar8 = fVar10 * fVar10 + fVar7 * fVar7;
          auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar12 = auVar11._0_4_;
          fVar8 = fVar12 * 0.5 * (3.0 - fVar8 * fVar12 * fVar12);
          fVar7 = fVar10 * fVar8 * pfVar4[1] + fVar7 * fVar8 * *pfVar4;
          param_2 = iStack0000000000000070;
          if (0.0 <= fVar7) {
            if (0.5 <= fVar7) {
              if (0.71 <= fVar7) goto LAB_1804f5c4c;
              fVar7 = fVar7 - 0.5;
              fVar12 = 0.20000002 - fVar7 * 0.28571433;
              fVar13 = 0.8 - fVar7 * 1.1428572;
              fVar10 = 1.2 - fVar7 * 1.7142859;
              fVar14 = 0.010000001 - fVar7 * 0.014285716;
              fVar15 = 0.004 - fVar7 * 0.005714286;
              fVar8 = 0.080000006 - fVar7 * 0.11428572;
              fVar7 = 0.32 - fVar7 * 0.45714286;
            }
            else {
              fVar13 = fVar7 * 1.44 + 0.080000006;
              fVar12 = fVar7 * 0.36000004 + 0.020000001;
              fVar10 = fVar7 * 2.16 + 0.120000005;
              fVar14 = fVar7 * 0.018000001 + 0.001;
              fVar15 = fVar7 * 0.0072000003 + 0.00040000002;
              fVar8 = fVar7 * 0.14400001 + 0.008;
              fVar7 = fVar7 * 0.576 + 0.031999998;
            }
            if ((20.0 < ABS(unaff_XMM7_Da)) || (20.0 < ABS(param_3))) {
              SystemCore_Validator(&stack0x00000030,1);
              fVar10 = fStack0000000000000050;
              if (iStack0000000000000070 < 1) {
                fVar10 = -NAN;
              }
              SystemCore_Validator(lVar1,3);
              if (*(int *)(lVar1 + 0x40) < 3) {
                fVar5 = -NAN;
              }
              else {
                fVar5 = *(float *)(lVar1 + 0x20);
              }
              fVar10 = fVar10 - fVar5;
              if (-20.0 <= fVar10) {
                if (20.0 <= fVar10) {
                  fVar10 = 20.0;
                }
              }
              else {
                fVar10 = -20.0;
              }
              fVar6 = (ABS(param_3) + ABS(unaff_XMM7_Da)) * 0.5;
              fVar9 = unaff_XMM15_Da * 0.5;
              fVar5 = fVar9;
              if ((fVar9 <= fVar6) && (fVar5 = fVar6, unaff_XMM15_Da <= fVar6)) {
                fVar5 = unaff_XMM15_Da;
              }
              fVar10 = (fVar14 * fVar10 + fVar12 + fVar13) -
                       (fVar8 + fVar7 + fVar10 * fVar15) * ((fVar5 - fVar9) / fVar9);
              unaff_XMM7_Da = fStackX_20;
            }
            param_2 = iStack0000000000000070;
            if (*(float *)(unaff_RBP + 200) <= fVar10 && fVar10 != *(float *)(unaff_RBP + 200)) {
              *unaff_RSI = uStack0000000000000030;
              unaff_RSI[1] = lStack0000000000000038;
              unaff_RSI[2] = uStack0000000000000040;
              unaff_RSI[7] = uStack0000000000000068;
              *(float *)(unaff_RBP + 200) = fVar10;
              unaff_RSI[3] = _fStack0000000000000048;
              unaff_RSI[4] = CONCAT44(uStack0000000000000054,fStack0000000000000050);
              *(int *)(unaff_RSI + 8) = iStack0000000000000070;
              unaff_RSI[5] = CONCAT44(uStack000000000000005c,fStack0000000000000058);
              unaff_RSI[6] = CONCAT44(uStack0000000000000064,uStack0000000000000060);
            }
          }
        }
LAB_1804f5c4c:
        param_1 = *(float *)(unaff_RBP + 0xb8);
        param_3 = param_3 + param_1;
      } while (param_3 < unaff_XMM15_Da);
      unaff_XMM6_Da = *(int32_t *)(unaff_RBP + -0x60);
      unaff_XMM6_Db = *(int32_t *)(unaff_RBP + -0x5c);
      unaff_XMM6_Dc = *(float *)(unaff_RBP + -0x58);
      unaff_XMM6_Dd = *(int32_t *)(unaff_RBP + -0x54);
      in_RAX = *(int64_t *)(unaff_RBP + -0x70);
      unaff_XMM8_Da = *(float *)(unaff_RBP + -0x50);
      unaff_XMM8_Db = *(int32_t *)(unaff_RBP + -0x4c);
      unaff_XMM8_Dc = *(int32_t *)(unaff_RBP + -0x48);
      unaff_XMM8_Dd = *(int32_t *)(unaff_RBP + -0x44);
      in_RCX = *(uint64_t *)(unaff_RBP + -0x68);
      param_3 = *(float *)(unaff_RBP + -0x80);
      param_2 = *(int *)(unaff_RBP + 0xc0);
    }
    unaff_XMM7_Da = unaff_XMM7_Da + param_1;
    fStackX_20 = unaff_XMM7_Da;
    if (unaff_XMM15_Da <= unaff_XMM7_Da) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1804f5ce1(void)
void FUN_1804f5ce1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f5d10(int64_t param_1,int param_2,float *param_3,float param_4,uint64_t param_5,
void FUN_1804f5d10(int64_t param_1,int param_2,float *param_3,float param_4,uint64_t param_5,
                  char param_6)

{
  float *pfVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  uint64_t *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int64_t *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int64_t *plStack_138;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_120;
  int iStack_11c;
  uint64_t uStack_118;
  float fStack_110;
  int64_t lStack_108;
  uint64_t uStack_100;
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  
  uStack_b8 = 0xfffffffffffffffe;
  param_5._0_4_ = 0;
  if ((((*(byte *)(param_1 + 0x87b714) & 1) != 0) && (system_status_flag != 1)) && (system_status_flag != 4)
     ) {
    if (param_6 == '\0') {
      fVar18 = 4.0;
    }
    else {
      fVar18 = 8.0;
    }
    uStack_118 = 0;
    plStack_138 = (int64_t *)0x0;
    fVar13 = *(float *)(param_1 + 0x98d240) * 10.0;
    fVar17 = param_4 + param_4;
    if (fVar13 <= param_4 + param_4) {
      fVar17 = fVar13;
    }
    FUN_1804ff330(param_1 + 0x98d230,param_3,fVar17,&plStack_138);
    if (plStack_138 != (int64_t *)0x0) {
      fVar7 = uStack_118._4_4_;
      fVar13 = (float)uStack_118;
      plVar12 = plStack_138;
      iVar9 = iStack_120;
      iVar10 = iStack_12c;
      iVar11 = iStack_130;
LAB_1804f5e40:
      lVar5 = *plVar12;
      if ((((*(int *)(lVar5 + 0x10) != param_2) && ((*(uint *)(lVar5 + 0x56c) & 0x10000) != 0)) &&
          ((*(int *)(lVar5 + 0x570) == 1 &&
           (((*(byte *)(lVar5 + 0x51c) & 0x40) == 0 && (*(int *)(lVar5 + 0x568) == 1)))))) &&
         ((iVar9 = iStack_120, param_2 < 0 ||
          (*(int *)(lVar5 + 0x10) != *(int *)((int64_t)param_2 * 0xa60 + 0x3604 + param_1))))) {
        lVar6 = *(int64_t *)(lVar5 + 0x20);
        fVar14 = *(float *)(lVar6 + 0x10) - param_3[1];
        fVar16 = *(float *)(lVar6 + 0xc) - *param_3;
        fVar15 = (*(float *)(*(int64_t *)(lVar5 + 0x6d8) + 0x904) + *(float *)(lVar6 + 0x14)) -
                 param_3[2];
        fVar14 = fVar16 * fVar16 + fVar14 * fVar14 + fVar15 * fVar15;
        if (fVar14 < fVar17 * fVar17) {
          *(float *)(*(int64_t *)(lVar5 + 0x6e0) + 0x13d4) =
               (param_4 * param_4) / (fVar14 + fVar18) +
               *(float *)(*(int64_t *)(lVar5 + 0x6e0) + 0x13d4);
          pfVar1 = (float *)(*(int64_t *)(lVar5 + 0x6e0) + 0x13d4);
          if (1.0 < *pfVar1 || *pfVar1 == 1.0) {
            puVar2 = (uint *)(*(int64_t *)(lVar5 + 0x6e0) + 0x1484);
            *puVar2 = *puVar2 | 1;
            uStack_100 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x8d8) + 0x18);
            uStack_c8 = 0;
            uStack_e8 = *(uint64_t *)param_3;
            uStack_e0 = *(uint64_t *)(param_3 + 2);
            uStack_d8 = 0;
            uStack_d4 = 0;
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_f8 = 0;
            uStack_f0 = 0;
            puVar8 = (uint64_t *)FUN_1803975b0();
            uStack_c8 = *puVar8;
            uStack_c0 = 0;
            lVar6 = *(int64_t *)(lVar5 + 0x6e0);
            *(uint64_t *)(lVar6 + 0x13d8) = uStack_100;
            *(int32_t *)(lVar6 + 0x13f0) = (int32_t)uStack_e8;
            *(int32_t *)(lVar6 + 0x13f4) = uStack_e8._4_4_;
            *(int32_t *)(lVar6 + 0x13f8) = (int32_t)uStack_e0;
            *(int32_t *)(lVar6 + 0x13fc) = uStack_e0._4_4_;
            *(int32_t *)(lVar6 + 0x1400) = uStack_d8;
            *(int32_t *)(lVar6 + 0x1404) = uStack_d4;
            *(int32_t *)(lVar6 + 0x1408) = uStack_d0;
            *(int32_t *)(lVar6 + 0x140c) = uStack_cc;
            *(uint64_t *)(lVar6 + 0x13e0) = uStack_f8;
            *(uint64_t *)(lVar6 + 0x13e8) = uStack_f0;
            *(uint64_t *)(lVar6 + 0x1410) = uStack_c8;
            *(int32_t *)(lVar6 + 0x1418) = 0;
            puVar3 = (ushort *)(*(int64_t *)(lVar5 + 0x6e0) + 0x130);
            *puVar3 = *puVar3 | 0x200;
            FUN_1805a43d0(lVar5 + 0x28);
            lStack_108 = system_system_data_memory;
            iVar4 = *(int *)(lVar5 + 0x18);
            if ((iVar4 != 0) && (system_cache_buffer != 0)) {
              (**(code **)(system_cache_buffer + 0x30))(iVar4);
            }
            (**(code **)(lStack_108 + 0x58))(iVar4,1);
            param_5._0_4_ = (uint)param_5 & 0xfffffffe;
            iVar9 = iStack_120;
            if ((iVar4 != 0) && (system_cache_buffer != 0)) {
              (**(code **)(system_cache_buffer + 0x18))(iVar4);
              iVar9 = iStack_120;
            }
          }
        }
      }
      plVar12 = (int64_t *)plVar12[3];
      while (plVar12 == (int64_t *)0x0) {
        if (iVar11 == iVar9) {
          if (iVar10 == iStack_11c) break;
          iVar10 = iVar10 + 1;
          iVar11 = iStack_128;
          iStack_12c = iVar10;
        }
        else {
          iVar11 = iVar11 + 1;
        }
        iVar9 = iStack_120;
        iStack_130 = iVar11;
        plVar12 = *(int64_t **)
                   ((int64_t)(iStack_12c * *(int *)(param_1 + 0x98d238) + iVar11) * 9 +
                   *(int64_t *)(param_1 + 0x98d248));
      }
      do {
        if ((plVar12 == (int64_t *)0x0) ||
           (fVar14 = fVar7 - *(float *)((int64_t)plVar12 + 0xc),
           (fVar13 - *(float *)(plVar12 + 1)) * (fVar13 - *(float *)(plVar12 + 1)) + fVar14 * fVar14
           <= fStack_110)) goto LAB_1804f613d;
        plVar12 = (int64_t *)plVar12[3];
        while (plVar12 == (int64_t *)0x0) {
          if (iVar11 == iVar9) {
            if (iVar10 == iStack_11c) break;
            iVar10 = iVar10 + 1;
            iVar11 = iStack_128;
            iStack_12c = iVar10;
          }
          else {
            iVar11 = iVar11 + 1;
          }
          iVar9 = iStack_120;
          iStack_130 = iVar11;
          plVar12 = *(int64_t **)
                     ((int64_t)(iStack_12c * *(int *)(param_1 + 0x98d238) + iVar11) * 9 +
                     *(int64_t *)(param_1 + 0x98d248));
        }
      } while( true );
    }
  }
  return;
LAB_1804f613d:
  if (plVar12 == (int64_t *)0x0) {
    return;
  }
  goto LAB_1804f5e40;
}



uint64_t FUN_1804f6190(int64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char *pcVar8;
  
  lVar1 = *(int64_t *)(param_1 + 0x98d8f8);
  lVar4 = *(int64_t *)(param_1 + 0x98d900) - lVar1;
  uVar6 = 0;
  lVar2 = lVar4 >> 0x3f;
  lVar4 = lVar4 / 0x70 + lVar2;
  uVar3 = -lVar2;
  uVar7 = lVar4 + uVar3;
  if (lVar4 != lVar2) {
    pcVar8 = (char *)(lVar1 + 0x68);
    uVar3 = uVar6;
    do {
      uVar3 = FUN_18063e7e0(uVar3 * 0x70 + lVar1,param_2);
      if ((char)uVar3 != *pcVar8) {
        return uVar3 & 0xffffffffffffff00;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar5;
      pcVar8 = pcVar8 + 0x70;
      uVar3 = (uint64_t)(int)uVar5;
    } while (uVar3 < uVar7);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



uint64_t * FUN_1804f6240(int64_t param_1,uint64_t *param_2,uint64_t param_3)

{
  int64_t lVar1;
  uint64_t *puVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  float fVar7;
  float fVar8;
  uint64_t uStackX_8;
  
  fVar8 = 3.4028235e+38;
  puVar2 = (uint64_t *)FUN_1803975b0();
  lVar6 = *(int64_t *)(param_1 + 0x98d8f8);
  iVar3 = 0;
  *param_2 = *puVar2;
  lVar5 = *(int64_t *)(param_1 + 0x98d900) - lVar6;
  lVar1 = lVar5 >> 0x3f;
  if (lVar5 / 0x70 + lVar1 != lVar1) {
    uVar4 = 0;
    do {
      uStackX_8 = 0;
      fVar7 = (float)FUN_18063ee10(uVar4 * 0x70 + lVar6,param_3,&uStackX_8);
      if (fVar7 < fVar8) {
        *param_2 = uStackX_8;
        fVar8 = fVar7;
      }
      lVar6 = *(int64_t *)(param_1 + 0x98d8f8);
      iVar3 = iVar3 + 1;
      uVar4 = (uint64_t)iVar3;
    } while (uVar4 < (uint64_t)((*(int64_t *)(param_1 + 0x98d900) - lVar6) / 0x70));
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804f6330(int64_t param_1,uint64_t param_2,uint64_t param_3)
void FUN_1804f6330(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
  char cVar1;
  int8_t auStack_578 [1376];
  
  SystemCore_ConfigurationHandler0(param_1 + 0x98d990);
  FUN_1804fb680(param_1 + 0x87bd28);
  *(int8_t *)(param_1 + 0x98d2d0) = 0;
  *(int32_t *)(param_1 + 0x98d930) = 0xffffffff;
  *(int8_t *)(param_1 + 0x98d9d0) = 0;
  *(int32_t *)(param_1 + 0x87b760) = 0;
  if (*(int64_t *)(param_1 + 0x87b768) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(uint64_t *)(param_1 + 0x87b768) = 0;
  *(int32_t *)(param_1 + 0x87b770) = 0;
  FUN_1805b30a0(param_1 + 0x87b768,8);
  *(uint64_t *)(param_1 + 0x98d94c) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x98d954) = 0;
  *(uint64_t *)(param_1 + 0x98d95c) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x98d964) = 0;
  *(int32_t *)(param_1 + 0x98d96c) = 0;
  *(int32_t *)(param_1 + 0x98d970) = 0;
  *(int32_t *)(param_1 + 0x98d974) = 0x3f800000;
  *(int32_t *)(param_1 + 0x98d978) = 0;
  *(int32_t *)(param_1 + 0x98d97c) = 0;
  *(int32_t *)(param_1 + 0x98d980) = 0;
  *(int32_t *)(param_1 + 0x98d984) = 0;
  *(int32_t *)(param_1 + 0x98d988) = 0x3f800000;
  *(int32_t *)(param_1 + 0x98d948) = 0;
  *(int32_t *)(param_1 + 0x87b714) = 0;
  FUN_1805f3360(system_system_memory);
  if (*(void **)*system_system_data_memory == &processed_var_424_ptr) {
    cVar1 = *(int *)(system_system_data_memory + 0xe0) != 0;
  }
  else {
    cVar1 = (**(code **)(*(void **)*system_system_data_memory + 0x48))();
  }
  if (cVar1 == '\0') {
    system_memory_flags = timeGetTime();
  }
  else {
    system_memory_flags = 0xb061;
  }
  system_memory_flags = system_memory_flags ^ 0x41c64e6d;
  *(int32_t *)(param_1 + 0x87b7a8) = 1;
  FUN_1804f3510(param_1);
  *(uint64_t *)(param_1 + 0x87b788) =
       *(uint64_t *)(&system_error_code + (int64_t)*(int *)(param_1 + 0x87b790) * 8);
  CoreMemoryPoolReallocator(system_memory_pool_ptr,0x620,8,3);
                    // WARNING: Subroutine does not return
  memcpy(auStack_578,param_3,0x554);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




