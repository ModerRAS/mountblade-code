#include "TaleWorlds.Native.Split.h"

// 03_rendering_part425.c - 10 个函数

// 函数: void FUN_18049bbcd(uint64_t param_1,float param_2,uint64_t param_3,float param_4,
void FUN_18049bbcd(uint64_t param_1,float param_2,uint64_t param_3,float param_4,
                  uint64_t param_5,int32_t param_6)

{
  int8_t auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint64_t uVar8;
  float fVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  int32_t uVar15;
  int32_t uVar16;
  int32_t uVar17;
  int32_t uVar18;
  int32_t uVar19;
  int32_t uVar20;
  int32_t uVar21;
  ushort uVar22;
  int iVar23;
  float *pfVar24;
  uint64_t *unaff_RBX;
  ushort unaff_DI;
  int16_t unaff_0000003a;
  int32_t unaff_0000003c;
  ushort uVar25;
  uint64_t *in_R9;
  ulonglong uVar26;
  ushort in_R11W;
  float *unaff_R13;
  uint uVar27;
  uint64_t uVar28;
  double dVar29;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  int8_t auVar32 [16];
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM15_Da;
  int32_t unaff_XMM15_Dc;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  uint64_t in_stack_00000068;
  uint64_t in_stack_00000070;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  int32_t in_stack_000000c0;
  int32_t in_stack_000000c8;
  int32_t in_stack_000000d0;
  int32_t in_stack_000000d8;
  
  uVar26 = (ulonglong)in_R11W;
  do {
    _fStack0000000000000040 = *in_R9;
    _fStack0000000000000048 = in_R9[1];
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
      if (fStack0000000000000040 <= param_4) {
        param_4 = fStack0000000000000040;
      }
    }
    if (uVar22 != 1) {
      fVar33 = fStack0000000000000044;
      if (fStack0000000000000044 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000044 <= param_4) {
        param_4 = fStack0000000000000044;
      }
    }
    if (uVar22 != 2) {
      fVar33 = fStack0000000000000048;
      if (fStack0000000000000048 <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack0000000000000048 <= param_4) {
        param_4 = fStack0000000000000048;
      }
    }
    if (uVar22 != 3) {
      fVar33 = fStack000000000000004c;
      if (fStack000000000000004c <= param_2) {
        fVar33 = param_2;
      }
      param_2 = fVar33;
      if (fStack000000000000004c <= param_4) {
        param_4 = fStack000000000000004c;
      }
    }
    in_R9 = in_R9 + 2;
    uVar26 = uVar26 - 1;
  } while (uVar26 != 0);
  uVar27 = 1;
  iVar23 = CONCAT22(unaff_0000003a,unaff_DI);
  *(float *)(unaff_RBX + 1) = param_2 + 1.1920929e-07;
  *(float *)((longlong)unaff_RBX + 0xc) = param_4 - 1.1920929e-07;
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



// 函数: void FUN_18049bd21(void)
void FUN_18049bd21(void)

{
  int8_t auVar1 [16];
  double dVar2;
  double dVar3;
  int iVar4;
  uint64_t *unaff_RBX;
  int unaff_ESI;
  int unaff_EDI;
  int32_t unaff_0000003c;
  float *unaff_R13;
  uint unaff_R15D;
  uint64_t uVar5;
  double dVar6;
  int8_t auVar7 [16];
  int8_t auVar8 [16];
  int8_t auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uStack0000000000000028;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  double in_stack_00000050;
  uint64_t uStack0000000000000058;
  uint64_t uStack0000000000000060;
  uint64_t uStack0000000000000068;
  uint64_t uStack0000000000000070;
  
  do {
    uStack0000000000000058 = 0;
    uStack0000000000000060 = 0;
    uStack0000000000000068 = 0;
    uStack0000000000000070 = 0;
    uStack0000000000000028 = unaff_R15D;
    uVar5 = FUN_18049b8a0();
    FUN_18040f060(uVar5,&stack0x00000058,&stack0x00000030,&stack0x00000040,unaff_R15D);
    dVar11 = (double)fStack0000000000000044;
    dVar14 = (double)fStack0000000000000040;
    dVar16 = (double)fStack0000000000000048;
    dVar2 = (double)fStack000000000000004c;
    auVar7._0_8_ = dVar2 * dVar2;
    auVar7._8_8_ = 0;
    dVar15 = (double)*unaff_R13;
    dVar12 = (double)unaff_R13[1];
    dVar6 = (double)unaff_R13[2];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar11 * dVar11 + dVar14 * dVar14 + dVar16 * dVar16 + auVar7._0_8_;
    auVar8 = sqrtpd(auVar7,auVar8);
    dVar13 = 1.0 / auVar8._0_8_;
    dVar3 = (double)unaff_R13[3];
    auVar9._0_8_ = dVar3 * dVar3;
    auVar9._8_8_ = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar15 * dVar15 + dVar12 * dVar12 + dVar6 * dVar6 + auVar9._0_8_;
    auVar8 = sqrtpd(auVar9,auVar1);
    dVar10 = 1.0 / auVar8._0_8_;
    dVar6 = dVar10 * dVar12 * dVar13 * dVar11 + dVar10 * dVar15 * dVar13 * dVar14 +
            dVar10 * dVar6 * dVar13 * dVar16 + dVar10 * dVar3 * dVar13 * dVar2;
    if (0.0 <= dVar6) {
      if ((1.0 < dVar6) || (dVar6 < -1.0)) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = (double)acos();
        dVar6 = dVar6 + dVar6;
      }
    }
    else {
      dVar6 = 3.4028234663852886e+38;
    }
    if (in_stack_00000050 < dVar6) {
      unaff_R15D = unaff_R15D + 1;
      if (0x1d < (int)unaff_R15D) break;
      unaff_ESI = unaff_ESI + -1;
      unaff_R13 = unaff_R13 + -4;
    }
    unaff_ESI = unaff_ESI + 1;
    unaff_R13 = unaff_R13 + 4;
  } while (unaff_ESI < (int)(uint)*(ushort *)(unaff_RBX + 2));
  *(char *)((longlong)unaff_RBX + 0x12) = (char)unaff_R15D;
  iVar4 = unaff_EDI;
  if (*(ushort *)(unaff_RBX + 2) != 0) {
    iVar4 = (((unaff_R15D & 0xff) + 1) * 3 + (uint)*(byte *)((longlong)unaff_RBX + 0x13)) *
            (uint)*(ushort *)(unaff_RBX + 2) + -1;
    iVar4 = (((int)(iVar4 + (iVar4 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar4 == 0) {
    uVar5 = CONCAT44(unaff_0000003c,unaff_EDI);
  }
  else {
    uVar5 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,4);
  }
  *unaff_RBX = uVar5;
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(longlong)iVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049bf85(void)
void FUN_18049bf85(void)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *unaff_RBX;
  int unaff_EDI;
  int32_t unaff_0000003c;
  byte unaff_R15B;
  
  *(byte *)((longlong)unaff_RBX + 0x12) = unaff_R15B;
  iVar1 = unaff_EDI;
  if (*(ushort *)(unaff_RBX + 2) != 0) {
    iVar1 = ((unaff_R15B + 1) * 3 + (uint)*(byte *)((longlong)unaff_RBX + 0x13)) *
            (uint)*(ushort *)(unaff_RBX + 2) + -1;
    iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar1 == 0) {
    uVar2 = CONCAT44(unaff_0000003c,unaff_EDI);
  }
  else {
    uVar2 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,4);
  }
  *unaff_RBX = uVar2;
                    // WARNING: Subroutine does not return
  memset(uVar2,0,(longlong)iVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049bfb4(uint64_t param_1,ushort param_2)
void FUN_18049bfb4(uint64_t param_1,ushort param_2)

{
  int iVar1;
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  byte unaff_R15B;
  
  iVar1 = ((unaff_R15B + 1) * 3 + (uint)*(byte *)((longlong)unaff_RBX + 0x13)) * (uint)param_2 + -1;
  iVar1 = (((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 4;
  if (iVar1 != 0) {
    unaff_RDI = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar1,4);
  }
  *unaff_RBX = unaff_RDI;
                    // WARNING: Subroutine does not return
  memset(unaff_RDI,0,(longlong)iVar1);
}





// 函数: void FUN_18049bff8(void)
void FUN_18049bff8(void)

{
  uint64_t *unaff_RBX;
  uint64_t unaff_RDI;
  
  *unaff_RBX = unaff_RDI;
                    // WARNING: Subroutine does not return
  memset();
}





// 函数: void FUN_18049c040(void)
void FUN_18049c040(void)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  longlong *unaff_RBX;
  int unaff_EDI;
  float *unaff_R12;
  uint uStack0000000000000028;
  uint64_t in_stack_00000030;
  ulonglong in_stack_00000078;
  
  do {
    uStack0000000000000028 = (uint)*(byte *)((longlong)unaff_RBX + 0x12);
    FUN_18049b8a0();
    bVar4 = (byte)in_stack_00000030._4_4_ & 0xf;
    iVar3 = in_stack_00000030._4_4_;
    if (in_stack_00000030._4_4_ < 0) {
      iVar3 = in_stack_00000030._4_4_ + 0xf;
      bVar4 = bVar4 - 0x10;
    }
    in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + (uint)*(byte *)((longlong)unaff_RBX + 0x13);
    unaff_EDI = unaff_EDI + 1;
    fVar2 = *unaff_R12;
    unaff_R12 = unaff_R12 + 1;
    puVar1 = (uint *)(*unaff_RBX + (longlong)(iVar3 >> 4) * 2);
    *puVar1 = *puVar1 | ((int)fVar2 & 0xffffU) << (bVar4 & 0x1f);
  } while (unaff_EDI < (int)(uint)*(ushort *)(unaff_RBX + 2));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18049c0c6(void)
void FUN_18049c0c6(void)

{
  ulonglong in_stack_00000078;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18049c0f0(longlong *param_1,int32_t *param_2,longlong param_3)
void FUN_18049c0f0(longlong *param_1,int32_t *param_2,longlong param_3)

{
  uint64_t uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  *(int32_t *)(param_1 + 9) = *param_2;
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar7 = (ulonglong)uVar2;
  *(ushort *)(param_1 + 6) = uVar2;
  fVar13 = 0.0;
  pfVar5 = *(float **)(param_2 + 0xc);
  cVar6 = '\0';
  fVar14 = fVar13;
  if (uVar2 != 0) {
    do {
      fVar13 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      if (fVar13 <= fVar14) {
        fVar13 = fVar14;
      }
      uVar7 = uVar7 - 1;
      fVar14 = fVar13;
    } while (uVar7 != 0);
  }
  uVar4 = (int)fVar13;
  if ((int)fVar13 < 1) {
    uVar4 = 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
    cVar6 = cVar6 + '\x01';
  }
  *(char *)((longlong)param_1 + 0x33) = cVar6;
  FUN_18049b010(param_1 + 4,*(uint64_t *)(param_2 + 10),*(uint64_t *)(param_2 + 0xc));
  lVar11 = (longlong)(int)((*(longlong *)(param_2 + 4) - *(longlong *)(param_2 + 2)) / 0x48);
  FUN_18049b770(param_1);
  if (0 < lVar11) {
    lVar8 = 0;
    lVar9 = 0;
    lVar12 = 0;
    do {
      uVar1 = *(uint64_t *)(param_3 + lVar9 * 8);
      fVar13 = 0.0;
      lVar3 = *(longlong *)(param_2 + 2);
      lVar10 = *param_1 + lVar12;
      uVar2 = *(ushort *)(lVar8 + 0x10 + lVar3);
      *(ushort *)(lVar10 + 0x10) = uVar2;
      pfVar5 = *(float **)(lVar8 + 8 + lVar3);
      if (uVar2 != 0) {
        uVar7 = (ulonglong)uVar2;
        fVar14 = fVar13;
        do {
          fVar13 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          if (fVar13 <= fVar14) {
            fVar13 = fVar14;
          }
          uVar7 = uVar7 - 1;
          fVar14 = fVar13;
        } while (uVar7 != 0);
      }
      uVar4 = (uint)fVar13;
      if ((int)uVar4 < 1) {
        uVar4 = 1;
      }
      cVar6 = '\0';
      for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
        cVar6 = cVar6 + '\x01';
      }
      *(char *)(lVar10 + 0x13) = cVar6;
      FUN_18049bb60(lVar10,*(uint64_t *)(lVar8 + lVar3),*(uint64_t *)(lVar8 + 8 + lVar3),uVar1);
      FUN_180483d80(lVar10 + 0x14,lVar3 + 0x12 + lVar8);
      FUN_180483e80(lVar10 + 0x26,lVar3 + 0x24 + lVar8);
      FUN_180483d80(lVar10 + 0x38,lVar3 + 0x36 + lVar8);
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x4a;
      lVar8 = lVar8 + 0x48;
    } while (lVar9 < lVar11);
  }
  *(int32_t *)((longlong)param_1 + 0x4c) = param_2[0x18];
  *(int32_t *)(param_1 + 10) = param_2[0x19];
  return;
}





// 函数: void FUN_18049c1ae(void)
void FUN_18049c1ae(void)

{
  uint64_t uVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong unaff_RDI;
  longlong *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong lVar11;
  float fVar12;
  float fVar13;
  longlong in_stack_00000060;
  
  lVar8 = 0;
  lVar9 = 0;
  lVar11 = 0;
  do {
    uVar1 = *(uint64_t *)(unaff_RDI + lVar9 * 8);
    fVar12 = 0.0;
    lVar3 = *(longlong *)(unaff_R14 + 8);
    lVar10 = *unaff_R12 + lVar11;
    uVar2 = *(ushort *)(lVar8 + 0x10 + lVar3);
    *(ushort *)(lVar10 + 0x10) = uVar2;
    pfVar5 = *(float **)(lVar8 + 8 + lVar3);
    if (uVar2 != 0) {
      uVar7 = (ulonglong)uVar2;
      fVar13 = fVar12;
      do {
        fVar12 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        if (fVar12 <= fVar13) {
          fVar12 = fVar13;
        }
        uVar7 = uVar7 - 1;
        fVar13 = fVar12;
      } while (uVar7 != 0);
    }
    uVar4 = (uint)fVar12;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    cVar6 = '\0';
    for (; uVar4 != 0; uVar4 = uVar4 >> 1) {
      cVar6 = cVar6 + '\x01';
    }
    *(char *)(lVar10 + 0x13) = cVar6;
    FUN_18049bb60(lVar10,*(uint64_t *)(lVar8 + lVar3),*(uint64_t *)(lVar8 + 8 + lVar3),uVar1);
    FUN_180483d80(lVar10 + 0x14,lVar3 + 0x12 + lVar8);
    FUN_180483e80(lVar10 + 0x26,lVar3 + 0x24 + lVar8);
    FUN_180483d80(lVar10 + 0x38,lVar3 + 0x36 + lVar8);
    lVar9 = lVar9 + 1;
    lVar11 = lVar11 + 0x4a;
    lVar8 = lVar8 + 0x48;
    unaff_RDI = in_stack_00000060;
  } while (lVar9 < unaff_R13);
  *(int32_t *)((longlong)unaff_R12 + 0x4c) = *(int32_t *)(unaff_R14 + 0x60);
  *(int32_t *)(unaff_R12 + 10) = *(int32_t *)(unaff_R14 + 100);
  return;
}





// 函数: void FUN_18049c2ac(void)
void FUN_18049c2ac(void)

{
  longlong unaff_R12;
  longlong unaff_R14;
  
  *(int32_t *)(unaff_R12 + 0x4c) = *(int32_t *)(unaff_R14 + 0x60);
  *(int32_t *)(unaff_R12 + 0x50) = *(int32_t *)(unaff_R14 + 100);
  return;
}



uint64_t * FUN_18049c2d0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a2c980;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



