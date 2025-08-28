#include "TaleWorlds.Native.Split.h"

// 03_rendering_part424.c - 3 个函数

// 函数: void FUN_18049bb60(ulonglong *param_1,float *param_2,undefined8 param_3,double param_4)
void FUN_18049bb60(ulonglong *param_1,float *param_2,undefined8 param_3,double param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  ushort uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  float *pfVar17;
  int iVar18;
  ushort uVar19;
  float *pfVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_158 [32];
  float *pfStack_138;
  uint uStack_130;
  undefined4 uStack_128;
  undefined4 auStack_124 [3];
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  ulonglong uVar16;
  
  uStack_e0 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  uVar1 = (ushort)param_1[2];
  dStack_108 = param_4;
  if (uVar1 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(_DAT_180bf00a8 ^ (ulonglong)auStack_158 ^ (ulonglong)auStack_158);
  }
  fVar26 = -3.4028235e+38;
  fVar28 = 3.4028235e+38;
  uVar14 = 0;
  uVar21 = (ulonglong)uVar1;
  pfVar20 = param_2;
  do {
    uStack_118 = *(undefined8 *)pfVar20;
    uStack_110 = *(undefined8 *)(pfVar20 + 2);
    pfVar17 = (float *)&uStack_118;
    uVar9 = uStack_118;
    uVar10 = uStack_110;
    fVar27 = 0.0;
    iVar13 = 0;
    uVar16 = uVar14;
    uVar19 = 0;
    do {
      uVar12 = (ushort)uVar16;
      fVar11 = ABS(*pfVar17);
      if (ABS(*pfVar17) <= fVar27) {
        uVar12 = uVar19;
        fVar11 = fVar27;
      }
      fVar27 = fVar11;
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      pfVar17 = pfVar17 + 1;
      uVar19 = uVar12;
    } while ((int)uVar15 < 4);
    uStack_118._4_4_ = (float)((ulonglong)uStack_118 >> 0x20);
    uStack_110._4_4_ = (float)((ulonglong)uStack_110 >> 0x20);
    pfVar17 = (float *)((longlong)&uStack_118 + (ulonglong)uVar12 * 4);
    if (*pfVar17 <= 0.0 && *pfVar17 != 0.0) {
      uStack_118._0_4_ = -(float)uStack_118;
      uStack_118._4_4_ = -uStack_118._4_4_;
      uStack_110._0_4_ = -(float)uStack_110;
      uStack_110._4_4_ = -uStack_110._4_4_;
    }
    if (uVar12 != 0) {
      fVar27 = (float)uStack_118;
      if ((float)uStack_118 <= fVar26) {
        fVar27 = fVar26;
      }
      fVar26 = fVar27;
      if ((float)uStack_118 <= fVar28) {
        fVar28 = (float)uStack_118;
      }
    }
    if (uVar12 != 1) {
      fVar27 = uStack_118._4_4_;
      if (uStack_118._4_4_ <= fVar26) {
        fVar27 = fVar26;
      }
      fVar26 = fVar27;
      if (uStack_118._4_4_ <= fVar28) {
        fVar28 = uStack_118._4_4_;
      }
    }
    if (uVar12 != 2) {
      fVar27 = (float)uStack_110;
      if ((float)uStack_110 <= fVar26) {
        fVar27 = fVar26;
      }
      fVar26 = fVar27;
      if ((float)uStack_110 <= fVar28) {
        fVar28 = (float)uStack_110;
      }
    }
    if (uVar12 != 3) {
      fVar27 = uStack_110._4_4_;
      if (uStack_110._4_4_ <= fVar26) {
        fVar27 = fVar26;
      }
      fVar26 = fVar27;
      if (uStack_110._4_4_ <= fVar28) {
        fVar28 = uStack_110._4_4_;
      }
    }
    pfVar20 = pfVar20 + 4;
    uVar21 = uVar21 - 1;
  } while (uVar21 != 0);
  uVar15 = 1;
  *(float *)(param_1 + 1) = fVar26 + 1.1920929e-07;
  *(float *)((longlong)param_1 + 0xc) = fVar28 - 1.1920929e-07;
  uVar21 = uVar14;
  uStack_118 = uVar9;
  uStack_110 = uVar10;
  if (uVar1 != 0) {
    do {
      iVar18 = (int)uVar21;
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      auStack_124[0] = 0;
      uStack_128 = 0;
      pfStack_138 = param_2;
      uStack_130 = uVar15;
      FUN_18049b8a0(param_1,&uStack_100,auStack_124,&uStack_128);
      uStack_128 = 0;
      pfStack_138 = (float *)CONCAT44(pfStack_138._4_4_,uVar15);
      FUN_18040f060(param_1,&uStack_100,&uStack_128,&uStack_118);
      dVar30 = (double)uStack_118._4_4_;
      dVar3 = (double)(float)uStack_118;
      dVar5 = (double)(float)uStack_110;
      dVar7 = (double)uStack_110._4_4_;
      auVar23._0_8_ = dVar7 * dVar7;
      auVar23._8_8_ = 0;
      dVar4 = (double)*param_2;
      dVar31 = (double)param_2[1];
      dVar6 = (double)param_2[2];
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar30 * dVar30 + dVar3 * dVar3 + dVar5 * dVar5 + auVar23._0_8_;
      auVar24 = sqrtpd(auVar23,auVar24);
      dVar22 = 1.0 / auVar24._0_8_;
      dVar8 = (double)param_2[3];
      auVar25._0_8_ = dVar8 * dVar8;
      auVar25._8_8_ = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar4 * dVar4 + dVar31 * dVar31 + dVar6 * dVar6 + auVar25._0_8_;
      auVar24 = sqrtpd(auVar25,auVar2);
      dVar29 = 1.0 / auVar24._0_8_;
      dVar22 = dVar29 * dVar31 * dVar22 * dVar30 + dVar29 * dVar4 * dVar22 * dVar3 +
               dVar29 * dVar6 * dVar22 * dVar5 + dVar29 * dVar8 * dVar22 * dVar7;
      if (0.0 <= dVar22) {
        if ((1.0 < dVar22) || (dVar22 < -1.0)) {
          dVar22 = 0.0;
        }
        else {
          dVar22 = (double)acos();
          dVar22 = dVar22 + dVar22;
        }
      }
      else {
        dVar22 = 3.4028234663852886e+38;
      }
      if (dStack_108 < dVar22) {
        uVar15 = uVar15 + 1;
        if (0x1d < (int)uVar15) break;
        iVar18 = iVar18 + -1;
        param_2 = param_2 + -4;
      }
      param_2 = param_2 + 4;
      uVar21 = (ulonglong)(iVar18 + 1U);
    } while ((int)(iVar18 + 1U) < (int)(uint)(ushort)param_1[2]);
  }
  *(char *)((longlong)param_1 + 0x12) = (char)uVar15;
  if ((ushort)param_1[2] != 0) {
    iVar13 = (((uVar15 & 0xff) + 1) * 3 + (uint)*(byte *)((longlong)param_1 + 0x13)) *
             (uint)(ushort)param_1[2] + -1;
    iVar13 = (((int)(iVar13 + (iVar13 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar13 = ((int)(iVar13 + (iVar13 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar13 != 0) {
    uVar14 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar13,4);
  }
  *param_1 = uVar14;
                    // WARNING: Subroutine does not return
  memset(uVar14,0,(longlong)iVar13);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049bbb3(undefined8 param_1,float param_2,undefined8 param_3,undefined8 *param_4,
void FUN_18049bbb3(undefined8 param_1,float param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  ushort uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  float *pfVar27;
  ulonglong *unaff_RBX;
  int iVar28;
  ushort uVar29;
  ulonglong uVar30;
  ushort in_R11W;
  float *unaff_R13;
  undefined8 uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float in_XMM3_Da;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Dc;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  ulonglong uVar26;
  
  uVar24 = 0;
  uVar30 = (ulonglong)in_R11W;
  do {
    _fStack0000000000000040 = *param_4;
    _fStack0000000000000048 = param_4[1];
    pfVar27 = &stack0x00000040;
    uVar31 = _fStack0000000000000040;
    uVar8 = _fStack0000000000000048;
    fVar36 = 0.0;
    iVar23 = 0;
    uVar26 = uVar24;
    uVar29 = 0;
    do {
      uVar22 = (ushort)uVar26;
      fVar21 = ABS(*pfVar27);
      if (ABS(*pfVar27) <= fVar36) {
        uVar22 = uVar29;
        fVar21 = fVar36;
      }
      fVar36 = fVar21;
      uVar25 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar25;
      pfVar27 = pfVar27 + 1;
      uVar29 = uVar22;
    } while ((int)uVar25 < 4);
    fStack0000000000000044 = (float)((ulonglong)_fStack0000000000000040 >> 0x20);
    fStack000000000000004c = (float)((ulonglong)_fStack0000000000000048 >> 0x20);
    if (*(float *)((longlong)&stack0x00000040 + (ulonglong)uVar22 * 4) <= 0.0 &&
        *(float *)((longlong)&stack0x00000040 + (ulonglong)uVar22 * 4) != 0.0) {
      fStack0000000000000040 = -fStack0000000000000040;
      fStack0000000000000044 = -fStack0000000000000044;
      fStack0000000000000048 = -fStack0000000000000048;
      fStack000000000000004c = -fStack000000000000004c;
    }
    if (uVar22 != 0) {
      fVar36 = fStack0000000000000040;
      if (fStack0000000000000040 <= param_2) {
        fVar36 = param_2;
      }
      param_2 = fVar36;
      if (fStack0000000000000040 <= in_XMM3_Da) {
        in_XMM3_Da = fStack0000000000000040;
      }
    }
    if (uVar22 != 1) {
      fVar36 = fStack0000000000000044;
      if (fStack0000000000000044 <= param_2) {
        fVar36 = param_2;
      }
      param_2 = fVar36;
      if (fStack0000000000000044 <= in_XMM3_Da) {
        in_XMM3_Da = fStack0000000000000044;
      }
    }
    if (uVar22 != 2) {
      fVar36 = fStack0000000000000048;
      if (fStack0000000000000048 <= param_2) {
        fVar36 = param_2;
      }
      param_2 = fVar36;
      if (fStack0000000000000048 <= in_XMM3_Da) {
        in_XMM3_Da = fStack0000000000000048;
      }
    }
    if (uVar22 != 3) {
      fVar36 = fStack000000000000004c;
      if (fStack000000000000004c <= param_2) {
        fVar36 = param_2;
      }
      param_2 = fVar36;
      if (fStack000000000000004c <= in_XMM3_Da) {
        in_XMM3_Da = fStack000000000000004c;
      }
    }
    param_4 = param_4 + 2;
    uVar30 = uVar30 - 1;
  } while (uVar30 != 0);
  uVar25 = 1;
  *(float *)(unaff_RBX + 1) = param_2 + 1.1920929e-07;
  *(float *)((longlong)unaff_RBX + 0xc) = in_XMM3_Da - 1.1920929e-07;
  uVar30 = uVar24;
  _fStack0000000000000040 = uVar31;
  _fStack0000000000000048 = uVar8;
  uVar9 = unaff_XMM15_Da;
  uVar10 = unaff_XMM15_Dc;
  uVar11 = unaff_XMM14_Da;
  uVar12 = unaff_XMM14_Dc;
  uVar13 = unaff_XMM13_Da;
  uVar14 = unaff_XMM13_Dc;
  uVar15 = unaff_XMM12_Da;
  uVar16 = unaff_XMM12_Dc;
  uVar17 = unaff_XMM11_Da;
  uVar18 = unaff_XMM11_Dc;
  uVar19 = unaff_XMM10_Da;
  uVar20 = unaff_XMM10_Dc;
  if (in_R11W != 0) {
    do {
      in_stack_000000d8 = uVar20;
      in_stack_000000d0 = uVar19;
      in_stack_000000c8 = uVar18;
      in_stack_000000c0 = uVar17;
      in_stack_000000b8 = uVar16;
      in_stack_000000b0 = uVar15;
      in_stack_000000a8 = uVar14;
      in_stack_000000a0 = uVar13;
      in_stack_00000098 = uVar12;
      in_stack_00000090 = uVar11;
      in_stack_00000088 = uVar10;
      in_stack_00000080 = uVar9;
      iVar28 = (int)uVar30;
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      param_6._4_4_ = 0;
      param_6._0_4_ = 0;
      uVar31 = FUN_18049b8a0();
      param_6._0_4_ = 0;
      FUN_18040f060(uVar31,&stack0x00000058,&param_6,&stack0x00000040,uVar25);
      dVar38 = (double)fStack0000000000000044;
      dVar2 = (double)fStack0000000000000040;
      dVar4 = (double)fStack0000000000000048;
      dVar6 = (double)fStack000000000000004c;
      auVar33._0_8_ = dVar6 * dVar6;
      auVar33._8_8_ = 0;
      dVar3 = (double)*unaff_R13;
      dVar39 = (double)unaff_R13[1];
      dVar5 = (double)unaff_R13[2];
      auVar34._8_8_ = 0;
      auVar34._0_8_ = dVar38 * dVar38 + dVar2 * dVar2 + dVar4 * dVar4 + auVar33._0_8_;
      auVar34 = sqrtpd(auVar33,auVar34);
      dVar32 = 1.0 / auVar34._0_8_;
      dVar7 = (double)unaff_R13[3];
      auVar35._0_8_ = dVar7 * dVar7;
      auVar35._8_8_ = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar3 * dVar3 + dVar39 * dVar39 + dVar5 * dVar5 + auVar35._0_8_;
      auVar34 = sqrtpd(auVar35,auVar1);
      dVar37 = 1.0 / auVar34._0_8_;
      dVar32 = dVar37 * dVar39 * dVar32 * dVar38 + dVar37 * dVar3 * dVar32 * dVar2 +
               dVar37 * dVar5 * dVar32 * dVar4 + dVar37 * dVar7 * dVar32 * dVar6;
      if (0.0 <= dVar32) {
        if ((1.0 < dVar32) || (dVar32 < -1.0)) {
          dVar32 = 0.0;
        }
        else {
          dVar32 = (double)acos();
          dVar32 = dVar32 + dVar32;
        }
      }
      else {
        dVar32 = 3.4028234663852886e+38;
      }
      if (in_stack_00000050 < dVar32) {
        uVar25 = uVar25 + 1;
        if (0x1d < (int)uVar25) break;
        iVar28 = iVar28 + -1;
        unaff_R13 = unaff_R13 + -4;
      }
      unaff_R13 = unaff_R13 + 4;
      uVar30 = (ulonglong)(iVar28 + 1U);
      uVar9 = in_stack_00000080;
      uVar10 = in_stack_00000088;
      uVar11 = in_stack_00000090;
      uVar12 = in_stack_00000098;
      uVar13 = in_stack_000000a0;
      uVar14 = in_stack_000000a8;
      uVar15 = in_stack_000000b0;
      uVar16 = in_stack_000000b8;
      uVar17 = in_stack_000000c0;
      uVar18 = in_stack_000000c8;
      uVar19 = in_stack_000000d0;
      uVar20 = in_stack_000000d8;
    } while ((int)(iVar28 + 1U) < (int)(uint)(ushort)unaff_RBX[2]);
  }
  *(char *)((longlong)unaff_RBX + 0x12) = (char)uVar25;
  if ((ushort)unaff_RBX[2] != 0) {
    iVar23 = (((uVar25 & 0xff) + 1) * 3 + (uint)*(byte *)((longlong)unaff_RBX + 0x13)) *
             (uint)(ushort)unaff_RBX[2] + -1;
    iVar23 = (((int)(iVar23 + (iVar23 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar23 = ((int)(iVar23 + (iVar23 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar23 != 0) {
    uVar24 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar23,4);
  }
  *unaff_RBX = uVar24;
                    // WARNING: Subroutine does not return
  memset(uVar24,0,(longlong)iVar23);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049bbc5(undefined8 param_1,float param_2,undefined8 param_3,undefined8 *param_4,
void FUN_18049bbc5(undefined8 param_1,float param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ushort uVar22;
  int iVar23;
  float *pfVar24;
  undefined8 *unaff_RBX;
  ushort unaff_DI;
  undefined2 unaff_0000003a;
  undefined4 unaff_0000003c;
  ushort uVar25;
  ulonglong uVar26;
  ushort in_R11W;
  float *unaff_R13;
  uint uVar27;
  undefined8 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float in_XMM3_Da;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Dc;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  
  uVar26 = (ulonglong)in_R11W;
  do {
    _fStack0000000000000040 = *param_4;
    _fStack0000000000000048 = param_4[1];
    pfVar24 = &stack0x00000040;
    uVar28 = _fStack0000000000000040;
    uVar8 = _fStack0000000000000048;
    fVar33 = 0.0;
    iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
    uVar25 = unaff_DI;
    do {
      uVar22 = (ushort)iVar23;
      fVar9 = ABS(*pfVar24);
      if (ABS(*pfVar24) <= fVar33) {
        uVar22 = uVar25;
        fVar9 = fVar33;
      }
      fVar33 = fVar9;
      iVar23 = iVar23 + 1;
      pfVar24 = pfVar24 + 1;
      uVar25 = uVar22;
    } while (iVar23 < 4);
    fStack0000000000000044 = (float)((ulonglong)_fStack0000000000000040 >> 0x20);
    fStack000000000000004c = (float)((ulonglong)_fStack0000000000000048 >> 0x20);
    if (*(float *)((longlong)&stack0x00000040 + (ulonglong)uVar22 * 4) <= 0.0 &&
        *(float *)((longlong)&stack0x00000040 + (ulonglong)uVar22 * 4) != 0.0) {
      fStack0000000000000040 = -fStack0000000000000040;
      fStack0000000000000044 = -fStack0000000000000044;
      fStack0000000000000048 = -fStack0000000000000048;
      fStack000000000000004c = -fStack000000000000004c;
    }
    if (uVar22 != 0) {
      fVar33 = fStack0000000000000040;
      if (fStack0000000000000040 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000040 <= in_XMM3_Da) {
        in_XMM3_Da = fStack0000000000000040;
      }
    }
    if (uVar22 != 1) {
      fVar33 = fStack0000000000000044;
      if (fStack0000000000000044 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000044 <= in_XMM3_Da) {
        in_XMM3_Da = fStack0000000000000044;
      }
    }
    if (uVar22 != 2) {
      fVar33 = fStack0000000000000048;
      if (fStack0000000000000048 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000048 <= in_XMM3_Da) {
        in_XMM3_Da = fStack0000000000000048;
      }
    }
    if (uVar22 != 3) {
      fVar33 = fStack000000000000004c;
      if (fStack000000000000004c <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack000000000000004c <= in_XMM3_Da) {
        in_XMM3_Da = fStack000000000000004c;
      }
    }
    param_4 = param_4 + 2;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
  uVar27 = 1;
  iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
  *(float *)(unaff_RBX + 1) = param_2 + 1.1920929e-07;
  *(float *)((longlong)unaff_RBX + 0xc) = in_XMM3_Da - 1.1920929e-07;
  _fStack0000000000000040 = uVar28;
  _fStack0000000000000048 = uVar8;
  uVar10 = unaff_XMM15_Da;
  uVar11 = unaff_XMM15_Dc;
  uVar12 = unaff_XMM14_Da;
  uVar13 = unaff_XMM14_Dc;
  uVar14 = unaff_XMM13_Da;
  uVar15 = unaff_XMM13_Dc;
  uVar16 = unaff_XMM12_Da;
  uVar17 = unaff_XMM12_Dc;
  uVar18 = unaff_XMM11_Da;
  uVar19 = unaff_XMM11_Dc;
  uVar20 = unaff_XMM10_Da;
  uVar21 = unaff_XMM10_Dc;
  if (unaff_DI < in_R11W) {
    do {
      in_stack_000000d8 = uVar21;
      in_stack_000000d0 = uVar20;
      in_stack_000000c8 = uVar19;
      in_stack_000000c0 = uVar18;
      in_stack_000000b8 = uVar17;
      in_stack_000000b0 = uVar16;
      in_stack_000000a8 = uVar15;
      in_stack_000000a0 = uVar14;
      in_stack_00000098 = uVar13;
      in_stack_00000090 = uVar12;
      in_stack_00000088 = uVar11;
      in_stack_00000080 = uVar10;
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      uVar28 = FUN_18049b8a0();
      param_6 = CONCAT22(unaff_0000003a,unaff_DI);
      FUN_18040f060(uVar28,&stack0x00000058,&param_6,&stack0x00000040,uVar27);
      dVar35 = (double)fStack0000000000000044;
      dVar2 = (double)fStack0000000000000040;
      dVar4 = (double)fStack0000000000000048;
      dVar6 = (double)fStack000000000000004c;
      auVar30._0_8_ = dVar6 * dVar6;
      auVar30._8_8_ = 0;
      dVar3 = (double)*unaff_R13;
      dVar36 = (double)unaff_R13[1];
      dVar5 = (double)unaff_R13[2];
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar35 * dVar35 + dVar2 * dVar2 + dVar4 * dVar4 + auVar30._0_8_;
      auVar31 = sqrtpd(auVar30,auVar31);
      dVar29 = 1.0 / auVar31._0_8_;
      dVar7 = (double)unaff_R13[3];
      auVar32._0_8_ = dVar7 * dVar7;
      auVar32._8_8_ = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = dVar3 * dVar3 + dVar36 * dVar36 + dVar5 * dVar5 + auVar32._0_8_;
      auVar31 = sqrtpd(auVar32,auVar1);
      dVar34 = 1.0 / auVar31._0_8_;
      dVar29 = dVar34 * dVar36 * dVar29 * dVar35 + dVar34 * dVar3 * dVar29 * dVar2 +
               dVar34 * dVar5 * dVar29 * dVar4 + dVar34 * dVar7 * dVar29 * dVar6;
      if (0.0 <= dVar29) {
        if ((1.0 < dVar29) || (dVar29 < -1.0)) {
          dVar29 = 0.0;
        }
        else {
          dVar29 = (double)acos();
          dVar29 = dVar29 + dVar29;
        }
      }
      else {
        dVar29 = 3.4028234663852886e+38;
      }
      if (in_stack_00000050 < dVar29) {
        uVar27 = uVar27 + 1;
        if (0x1d < (int)uVar27) break;
        iVar23 = iVar23 + -1;
        unaff_R13 = unaff_R13 + -4;
      }
      iVar23 = iVar23 + 1;
      unaff_R13 = unaff_R13 + 4;
      uVar10 = in_stack_00000080;
      uVar11 = in_stack_00000088;
      uVar12 = in_stack_00000090;
      uVar13 = in_stack_00000098;
      uVar14 = in_stack_000000a0;
      uVar15 = in_stack_000000a8;
      uVar16 = in_stack_000000b0;
      uVar17 = in_stack_000000b8;
      uVar18 = in_stack_000000c0;
      uVar19 = in_stack_000000c8;
      uVar20 = in_stack_000000d0;
      uVar21 = in_stack_000000d8;
    } while (iVar23 < (int)(uint)*(ushort *)(unaff_RBX + 2));
  }
  *(char *)((longlong)unaff_RBX + 0x12) = (char)uVar27;
  if (*(ushort *)(unaff_RBX + 2) == 0) {
    iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
  }
  else {
    iVar23 = (((uVar27 & 0xff) + 1) * 3 + (uint)*(byte *)((longlong)unaff_RBX + 0x13)) *
             (uint)*(ushort *)(unaff_RBX + 2) + -1;
    iVar23 = (((int)(iVar23 + (iVar23 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar23 = ((int)(iVar23 + (iVar23 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar23 == 0) {
    uVar28 = CONCAT44(unaff_0000003c,CONCAT22(unaff_0000003a,unaff_DI));
  }
  else {
    uVar28 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar23,4);
  }
  *unaff_RBX = uVar28;
                    // WARNING: Subroutine does not return
  memset(uVar28,0,(longlong)iVar23);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



