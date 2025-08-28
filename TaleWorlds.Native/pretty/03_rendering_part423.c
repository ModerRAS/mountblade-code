#include "TaleWorlds.Native.Split.h"

// 03_rendering_part423.c - 8 个函数

// 函数: void FUN_18049b010(ulonglong *param_1,float *param_2,uint64_t param_3,double param_4)
void FUN_18049b010(ulonglong *param_1,float *param_2,uint64_t param_3,double param_4)

{
  uint uVar1;
  ulonglong *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int8_t auStack_e8 [32];
  uint uStack_c8;
  int32_t auStack_b8 [2];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  ulonglong auStack_a0 [15];
  
  auStack_a0[4] = _DAT_180bf00a8 ^ (ulonglong)auStack_e8;
  uVar3 = (ushort)param_1[2];
  uVar9 = (ulonglong)uVar3;
  if (uVar3 == 0) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(_DAT_180bf00a8 ^ (ulonglong)auStack_e8 ^ (ulonglong)auStack_e8);
  }
  pfVar7 = param_2 + 1;
  fVar16 = -3.4028235e+38;
  fVar17 = 3.4028235e+38;
  do {
    fVar19 = *pfVar7;
    fVar18 = pfVar7[-1];
    fVar15 = pfVar7[1];
    fVar14 = fVar19;
    if (fVar19 < fVar18) {
      fVar14 = fVar18;
    }
    if (fVar14 <= fVar15) {
      fVar14 = fVar15;
    }
    if (fVar14 <= fVar16) {
      fVar14 = fVar16;
    }
    if (fVar19 <= fVar18) {
      fVar18 = fVar19;
    }
    if (fVar15 <= fVar18) {
      fVar18 = fVar15;
    }
    pfVar7 = pfVar7 + 4;
    if (fVar17 <= fVar18) {
      fVar18 = fVar17;
    }
    uVar9 = uVar9 - 1;
    fVar16 = fVar14;
    fVar17 = fVar18;
  } while (uVar9 != 0);
  uVar12 = 1;
  uVar9 = 0;
  iVar6 = 0;
  *(float *)(param_1 + 1) = fVar14 + 1.1920929e-07;
  *(float *)((longlong)param_1 + 0xc) = fVar18 - 1.1920929e-07;
  if (uVar3 != 0) {
    uVar11 = uVar9;
    do {
      iVar10 = (int)uVar11;
      fVar16 = *(float *)((longlong)param_1 + 0xc);
      fVar17 = *param_2;
      fVar19 = param_2[1];
      fVar18 = param_2[2];
      auStack_a0[1] = 0;
      auStack_a0[2] = 0;
      uVar13 = 1 << ((byte)uVar12 & 0x1f);
      auStack_a0[3] = 0;
      uVar1 = uVar13 - 1;
      fVar15 = 1.0 / ((*(float *)(param_1 + 1) - fVar16) / (float)uVar1);
      uVar4 = (uint)((fVar17 - fVar16) * fVar15 + 0.5);
      if (uVar13 <= uVar4) {
        uVar4 = uVar1;
      }
      auStack_a0[0] = (ulonglong)uVar4;
      uVar4 = (uint)((fVar19 - fVar16) * fVar15 + 0.5);
      uVar11 = (ulonglong)uVar4;
      if (uVar13 <= uVar4) {
        uVar11 = (ulonglong)uVar1;
      }
      bVar8 = (byte)uVar12 & 0x1f;
      uVar4 = uVar12;
      if ((int)uVar12 < 0) {
        uVar4 = uVar12 + 0x1f;
        bVar8 = bVar8 - 0x20;
      }
      puVar2 = (ulonglong *)((longlong)auStack_a0 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar2 = *puVar2 | uVar11 << (bVar8 & 0x3f);
      iVar5 = uVar12 * 2;
      uVar4 = (uint)((fVar18 - fVar16) * fVar15 + 0.5);
      if (uVar13 <= uVar4) {
        uVar4 = uVar1;
      }
      bVar8 = (byte)iVar5 & 0x1f;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x1f;
        bVar8 = bVar8 - 0x20;
      }
      auStack_b8[0] = 0;
      puVar2 = (ulonglong *)((longlong)auStack_a0 + (longlong)(iVar5 >> 5) * 4);
      *puVar2 = *puVar2 | (ulonglong)uVar4 << (bVar8 & 0x3f);
      uStack_c8 = uVar12;
      FUN_180406120(param_1,auStack_a0,auStack_b8,&fStack_b0);
      fVar19 = fVar19 - fStack_ac;
      fVar18 = fVar18 - fStack_a8;
      if (param_4 * param_4 <
          (double)((fVar17 - fStack_b0) * (fVar17 - fStack_b0) + fVar19 * fVar19 + fVar18 * fVar18))
      {
        uVar12 = uVar12 + 1;
        if (0x1d < (int)uVar12) break;
        iVar10 = iVar10 + -1;
        param_2 = param_2 + -4;
      }
      uVar11 = (ulonglong)(iVar10 + 1U);
      param_2 = param_2 + 4;
    } while ((int)(iVar10 + 1U) < (int)(uint)(ushort)param_1[2]);
  }
  uVar3 = (ushort)param_1[2];
  *(char *)((longlong)param_1 + 0x12) = (char)uVar12;
  if (uVar3 != 0) {
    iVar6 = ((uint)*(byte *)((longlong)param_1 + 0x13) + (uVar12 & 0xff) * 3) * (uint)uVar3 + -1;
    iVar6 = (((int)(iVar6 + (iVar6 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar6 = ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar6 != 0) {
    uVar9 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,CONCAT71((uint7)(byte)(uVar3 >> 8),4));
  }
  *param_1 = uVar9;
                    // WARNING: Subroutine does not return
  memset(uVar9,0,(longlong)iVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049b063(void)
void FUN_18049b063(void)

{
  uint uVar1;
  ulonglong *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *in_RAX;
  byte bVar7;
  ulonglong uVar8;
  uint64_t unaff_RBX;
  int iVar9;
  uint64_t unaff_RBP;
  ulonglong uVar10;
  uint uVar11;
  uint64_t unaff_RSI;
  ulonglong *unaff_RDI;
  ushort in_R9W;
  uint uVar12;
  longlong in_R11;
  float *unaff_R13;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_XMM4_Da;
  float in_XMM5_Da;
  int32_t unaff_XMM6_Da;
  float fVar16;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  float fVar17;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  double unaff_XMM9_Qa;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  ulonglong in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  uint64_t in_stack_00000060;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  int32_t in_stack_000000b0;
  int32_t in_stack_000000b8;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBP;
  *(uint64_t *)(in_R11 + -0x20) = unaff_RSI;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  uVar8 = (ulonglong)in_R9W;
  do {
    fVar14 = *in_RAX;
    fVar13 = in_RAX[-1];
    fVar17 = in_RAX[1];
    fVar16 = fVar14;
    if (fVar14 < fVar13) {
      fVar16 = fVar13;
    }
    if (fVar16 <= fVar17) {
      fVar16 = fVar17;
    }
    if (fVar16 <= in_XMM4_Da) {
      fVar16 = in_XMM4_Da;
    }
    if (fVar14 <= fVar13) {
      fVar13 = fVar14;
    }
    if (fVar17 <= fVar13) {
      fVar13 = fVar17;
    }
    in_RAX = in_RAX + 4;
    if (in_XMM5_Da <= fVar13) {
      fVar13 = in_XMM5_Da;
    }
    uVar8 = uVar8 - 1;
    in_XMM4_Da = fVar16;
    in_XMM5_Da = fVar13;
  } while (uVar8 != 0);
  uVar11 = 1;
  uVar8 = 0;
  iVar6 = 0;
  *(float *)(unaff_RDI + 1) = fVar16 + 1.1920929e-07;
  *(float *)((longlong)unaff_RDI + 0xc) = fVar13 - 1.1920929e-07;
  if (in_R9W != 0) {
    uVar10 = uVar8;
    in_stack_000000a0 = unaff_XMM7_Da;
    in_stack_000000a8 = unaff_XMM7_Dc;
    in_stack_000000b0 = unaff_XMM6_Da;
    in_stack_000000b8 = unaff_XMM6_Dc;
    do {
      iVar9 = (int)uVar10;
      fVar14 = *(float *)((longlong)unaff_RDI + 0xc);
      fVar13 = *unaff_R13;
      fVar17 = unaff_R13[1];
      fVar16 = unaff_R13[2];
      in_stack_00000050 = 0;
      in_stack_00000058 = 0;
      uVar12 = 1 << ((byte)uVar11 & 0x1f);
      in_stack_00000060 = 0;
      uVar1 = uVar12 - 1;
      fVar15 = 1.0 / ((*(float *)(unaff_RDI + 1) - fVar14) / (float)uVar1);
      uVar4 = (uint)((fVar13 - fVar14) * fVar15 + 0.5);
      if (uVar12 <= uVar4) {
        uVar4 = uVar1;
      }
      in_stack_00000048 = (ulonglong)uVar4;
      uVar4 = (uint)((fVar17 - fVar14) * fVar15 + 0.5);
      uVar10 = (ulonglong)uVar4;
      if (uVar12 <= uVar4) {
        uVar10 = (ulonglong)uVar1;
      }
      bVar7 = (byte)uVar11 & 0x1f;
      uVar4 = uVar11;
      if ((int)uVar11 < 0) {
        uVar4 = uVar11 + 0x1f;
        bVar7 = bVar7 - 0x20;
      }
      puVar2 = (ulonglong *)((longlong)&stack0x00000048 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar2 = *puVar2 | uVar10 << (bVar7 & 0x3f);
      iVar5 = uVar11 * 2;
      fVar14 = (fVar16 - fVar14) * fVar15 + 0.5;
      uVar4 = (uint)fVar14;
      if (uVar12 <= uVar4) {
        uVar4 = uVar1;
      }
      bVar7 = (byte)iVar5 & 0x1f;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0x1f;
        bVar7 = bVar7 - 0x20;
      }
      in_stack_00000030 = 0;
      puVar2 = (ulonglong *)((longlong)&stack0x00000048 + (longlong)(iVar5 >> 5) * 4);
      *puVar2 = *puVar2 | (ulonglong)uVar4 << (bVar7 & 0x3f);
      FUN_180406120(fVar14,&stack0x00000048,&stack0x00000030,&stack0x00000038,uVar11);
      fVar17 = fVar17 - fStack000000000000003c;
      fVar16 = fVar16 - in_stack_00000040;
      if (unaff_XMM9_Qa * unaff_XMM9_Qa <
          (double)((fVar13 - fStack0000000000000038) * (fVar13 - fStack0000000000000038) +
                   fVar17 * fVar17 + fVar16 * fVar16)) {
        uVar11 = uVar11 + 1;
        if (0x1d < (int)uVar11) break;
        iVar9 = iVar9 + -1;
        unaff_R13 = unaff_R13 + -4;
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      unaff_R13 = unaff_R13 + 4;
    } while ((int)(iVar9 + 1U) < (int)(uint)(ushort)unaff_RDI[2]);
  }
  uVar3 = (ushort)unaff_RDI[2];
  *(char *)((longlong)unaff_RDI + 0x12) = (char)uVar11;
  if (uVar3 != 0) {
    iVar6 = ((uint)*(byte *)((longlong)unaff_RDI + 0x13) + (uVar11 & 0xff) * 3) * (uint)uVar3 + -1;
    iVar6 = (((int)(iVar6 + (iVar6 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar6 = ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar6 != 0) {
    uVar8 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar6,CONCAT71((uint7)(byte)(uVar3 >> 8),4));
  }
  *unaff_RDI = uVar8;
                    // WARNING: Subroutine does not return
  memset(uVar8,0,(longlong)iVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049b105(void)
void FUN_18049b105(void)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  byte bVar6;
  int unaff_EBX;
  int32_t unaff_0000001c;
  int unaff_EBP;
  uint unaff_ESI;
  uint64_t *unaff_RDI;
  ulonglong uVar7;
  uint uVar8;
  float *unaff_R13;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM8_Da;
  double unaff_XMM9_Qa;
  float unaff_XMM10_Da;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000040;
  ulonglong uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  
  do {
    fVar9 = *(float *)((longlong)unaff_RDI + 0xc);
    fVar11 = *unaff_R13;
    fVar13 = unaff_R13[1];
    fVar12 = unaff_R13[2];
    uStack0000000000000050 = 0;
    uStack0000000000000058 = 0;
    uVar8 = 1 << ((byte)unaff_ESI & 0x1f);
    uVar1 = uVar8 - 1;
    fVar10 = unaff_XMM10_Da / ((*(float *)(unaff_RDI + 1) - fVar9) / (float)uVar1);
    uVar3 = (uint)((fVar11 - fVar9) * fVar10 + unaff_XMM8_Da);
    if (uVar8 <= uVar3) {
      uVar3 = uVar1;
    }
    uStack0000000000000048 = (ulonglong)uVar3;
    uVar3 = (uint)((fVar13 - fVar9) * fVar10 + unaff_XMM8_Da);
    uVar7 = (ulonglong)uVar3;
    if (uVar8 <= uVar3) {
      uVar7 = (ulonglong)uVar1;
    }
    bVar6 = (byte)unaff_ESI & 0x1f;
    uVar3 = unaff_ESI;
    if ((int)unaff_ESI < 0) {
      uVar3 = unaff_ESI + 0x1f;
      bVar6 = bVar6 - 0x20;
    }
    *(ulonglong *)((longlong)&stack0x00000048 + (longlong)((int)uVar3 >> 5) * 4) =
         *(ulonglong *)((longlong)&stack0x00000048 + (longlong)((int)uVar3 >> 5) * 4) |
         uVar7 << (bVar6 & 0x3f);
    iVar4 = unaff_ESI * 2;
    fVar9 = (fVar12 - fVar9) * fVar10 + unaff_XMM8_Da;
    uVar3 = (uint)fVar9;
    if (uVar8 <= uVar3) {
      uVar3 = uVar1;
    }
    bVar6 = (byte)iVar4 & 0x1f;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
      bVar6 = bVar6 - 0x20;
    }
    *(ulonglong *)((longlong)&stack0x00000048 + (longlong)(iVar4 >> 5) * 4) =
         *(ulonglong *)((longlong)&stack0x00000048 + (longlong)(iVar4 >> 5) * 4) |
         (ulonglong)uVar3 << (bVar6 & 0x3f);
    FUN_180406120(fVar9,&stack0x00000048,&stack0x00000030,&stack0x00000038,unaff_ESI);
    fVar13 = fVar13 - fStack000000000000003c;
    fVar12 = fVar12 - in_stack_00000040;
    if (unaff_XMM9_Qa * unaff_XMM9_Qa <
        (double)((fVar11 - fStack0000000000000038) * (fVar11 - fStack0000000000000038) +
                 fVar13 * fVar13 + fVar12 * fVar12)) {
      unaff_ESI = unaff_ESI + 1;
      if (0x1d < (int)unaff_ESI) break;
      unaff_EBP = unaff_EBP + -1;
      unaff_R13 = unaff_R13 + -4;
    }
    unaff_EBP = unaff_EBP + 1;
    unaff_R13 = unaff_R13 + 4;
  } while (unaff_EBP < (int)(uint)*(ushort *)(unaff_RDI + 2));
  uVar2 = *(ushort *)(unaff_RDI + 2);
  *(char *)((longlong)unaff_RDI + 0x12) = (char)unaff_ESI;
  iVar4 = unaff_EBX;
  if (uVar2 != 0) {
    iVar4 = ((uint)*(byte *)((longlong)unaff_RDI + 0x13) + (unaff_ESI & 0xff) * 3) * (uint)uVar2 +
            -1;
    iVar4 = (((int)(iVar4 + (iVar4 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar4 = ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar4 == 0) {
    uVar5 = CONCAT44(unaff_0000001c,unaff_EBX);
  }
  else {
    uVar5 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,CONCAT71((uint7)(byte)(uVar2 >> 8),4));
  }
  *unaff_RDI = uVar5;
                    // WARNING: Subroutine does not return
  memset(uVar5,0,(longlong)iVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049b290(void)
void FUN_18049b290(void)

{
  ushort uVar1;
  int iVar2;
  uint64_t uVar3;
  int unaff_EBX;
  int32_t unaff_0000001c;
  byte unaff_SIL;
  uint64_t *unaff_RDI;
  
  uVar1 = *(ushort *)(unaff_RDI + 2);
  *(byte *)((longlong)unaff_RDI + 0x12) = unaff_SIL;
  iVar2 = unaff_EBX;
  if (uVar1 != 0) {
    iVar2 = ((uint)*(byte *)((longlong)unaff_RDI + 0x13) + (uint)unaff_SIL + (uint)unaff_SIL * 2) *
            (uint)uVar1 + -1;
    iVar2 = (((int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6) + 1) * 0x40;
    iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 4;
  }
  if (iVar2 == 0) {
    uVar3 = CONCAT44(unaff_0000001c,unaff_EBX);
  }
  else {
    uVar3 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar2,CONCAT71((uint7)(byte)(uVar1 >> 8),4));
  }
  *unaff_RDI = uVar3;
                    // WARNING: Subroutine does not return
  memset(uVar3,0,(longlong)iVar2);
}





// 函数: void FUN_18049b486(void)
void FUN_18049b486(void)

{
  ulonglong in_stack_00000068;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000068 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18049b4b0(uint64_t *param_1,ulonglong param_2)
void FUN_18049b4b0(uint64_t *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint64_t *puVar9;
  ulonglong uVar10;
  
  puVar9 = (uint64_t *)param_1[1];
  if ((ulonglong)((param_1[2] - (longlong)puVar9) / 0x4a) < param_2) {
    puVar5 = (uint64_t *)*param_1;
    lVar2 = ((longlong)puVar9 - (longlong)puVar5) / 0x4a;
    uVar10 = lVar2 * 2;
    if (lVar2 == 0) {
      uVar10 = 1;
    }
    if (uVar10 < lVar2 + param_2) {
      uVar10 = lVar2 + param_2;
    }
    puVar3 = (uint64_t *)0x0;
    if (uVar10 != 0) {
      puVar3 = (uint64_t *)
               FUN_18062b420(_DAT_180c8ed18,uVar10 * 0x4a,*(int8_t *)(param_1 + 3),puVar9,
                             0xfffffffffffffffe);
      puVar9 = (uint64_t *)param_1[1];
      puVar5 = (uint64_t *)*param_1;
    }
    puVar4 = puVar3;
    if (puVar5 != puVar9) {
      puVar6 = (uint64_t *)((longlong)puVar3 + 0x1c);
      do {
        *puVar4 = 0;
        *(uint64_t *)((longlong)puVar6 + -0x14) = 0;
        *(int32_t *)((longlong)puVar6 + -0xc) = 0;
        *(int16_t *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        *(int16_t *)((longlong)puVar6 + 0x1a) = 0;
        *(uint64_t *)((longlong)puVar6 + 10) = 0;
        *(uint64_t *)((longlong)puVar6 + 0x12) = 0;
        *(int16_t *)((longlong)puVar6 + 0x2c) = 0;
        *(uint64_t *)((longlong)puVar6 + 0x1c) = 0;
        *(uint64_t *)((longlong)puVar6 + 0x24) = 0;
        puVar4 = (uint64_t *)((longlong)puVar4 + 0x4a);
        lVar2 = (longlong)puVar6 + (0x2e - (longlong)puVar3);
        puVar6 = (uint64_t *)((longlong)puVar6 + 0x4a);
      } while ((uint64_t *)((longlong)puVar5 + lVar2) != puVar9);
    }
    if (param_2 != 0) {
      puVar9 = (uint64_t *)((longlong)puVar4 + 0x1c);
      uVar8 = param_2;
      do {
        *(uint64_t *)((longlong)puVar9 + -0x1c) = 0;
        *(uint64_t *)((longlong)puVar9 + -0x14) = 0;
        *(int32_t *)((longlong)puVar9 + -0xc) = 0;
        *(int16_t *)(puVar9 + 1) = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        *(int16_t *)((longlong)puVar9 + 0x1a) = 0;
        *(uint64_t *)((longlong)puVar9 + 10) = 0;
        *(uint64_t *)((longlong)puVar9 + 0x12) = 0;
        *(int16_t *)((longlong)puVar9 + 0x2c) = 0;
        *(uint64_t *)((longlong)puVar9 + 0x1c) = 0;
        *(uint64_t *)((longlong)puVar9 + 0x24) = 0;
        puVar9 = (uint64_t *)((longlong)puVar9 + 0x4a);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    plVar1 = (longlong *)param_1[1];
    plVar7 = (longlong *)*param_1;
    if (plVar7 != plVar1) {
      do {
        if (plVar7[7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar7[7] = 0;
        if (plVar7[8] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar7[8] = 0;
        if (*(longlong *)((longlong)plVar7 + 0x26) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar7 + 0x26) = 0;
        if (*(longlong *)((longlong)plVar7 + 0x2e) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar7 + 0x2e) = 0;
        if (*(longlong *)((longlong)plVar7 + 0x14) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar7 + 0x14) = 0;
        if (*(longlong *)((longlong)plVar7 + 0x1c) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar7 + 0x1c) = 0;
        if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar7 = 0;
        plVar7 = (longlong *)((longlong)plVar7 + 0x4a);
      } while (plVar7 != plVar1);
      plVar7 = (longlong *)*param_1;
    }
    if (plVar7 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar7);
    }
    *param_1 = puVar3;
    param_1[1] = param_2 * 0x4a + (longlong)puVar4;
    param_1[2] = uVar10 * 0x4a + (longlong)puVar3;
  }
  else {
    if (param_2 != 0) {
      puVar5 = (uint64_t *)((longlong)puVar9 + 0x1c);
      uVar10 = param_2;
      do {
        *puVar9 = 0;
        *(uint64_t *)((longlong)puVar5 + -0x14) = 0;
        *(int32_t *)((longlong)puVar5 + -0xc) = 0;
        *(int16_t *)(puVar5 + 1) = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        *(int16_t *)((longlong)puVar5 + 0x1a) = 0;
        *(uint64_t *)((longlong)puVar5 + 10) = 0;
        *(uint64_t *)((longlong)puVar5 + 0x12) = 0;
        *(int16_t *)((longlong)puVar5 + 0x2c) = 0;
        *(uint64_t *)((longlong)puVar5 + 0x1c) = 0;
        *(uint64_t *)((longlong)puVar5 + 0x24) = 0;
        puVar9 = (uint64_t *)((longlong)puVar9 + 0x4a);
        puVar5 = (uint64_t *)((longlong)puVar5 + 0x4a);
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      puVar9 = (uint64_t *)param_1[1];
    }
    param_1[1] = param_2 * 0x4a + (longlong)puVar9;
  }
  return;
}





// 函数: void FUN_18049b770(longlong *param_1,ulonglong param_2)
void FUN_18049b770(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_1[1];
  lVar5 = *param_1;
  uVar2 = ((longlong)plVar1 - lVar5) / 0x4a;
  if (uVar2 < param_2) {
    lVar4 = param_2 - uVar2;
    FUN_18049b4b0(param_1,lVar4,(longlong)plVar1 - lVar5,lVar4,0xfffffffffffffffe);
  }
  else {
    plVar3 = (longlong *)(param_2 * 0x4a + lVar5);
    if (plVar3 != plVar1) {
      do {
        if (plVar3[7] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar3[7] = 0;
        if (plVar3[8] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar3[8] = 0;
        if (*(longlong *)((longlong)plVar3 + 0x26) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar3 + 0x26) = 0;
        if (*(longlong *)((longlong)plVar3 + 0x2e) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar3 + 0x2e) = 0;
        if (*(longlong *)((longlong)plVar3 + 0x14) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar3 + 0x14) = 0;
        if (*(longlong *)((longlong)plVar3 + 0x1c) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(uint64_t *)((longlong)plVar3 + 0x1c) = 0;
        if (*plVar3 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *plVar3 = 0;
        plVar3 = (longlong *)((longlong)plVar3 + 0x4a);
      } while (plVar3 != plVar1);
      lVar5 = *param_1;
    }
    param_1[1] = param_2 * 0x4a + lVar5;
  }
  return;
}





// 函数: void FUN_18049b8a0(longlong param_1,longlong param_2,int *param_3,int *param_4,float *param_5,
void FUN_18049b8a0(longlong param_1,longlong param_2,int *param_3,int *param_4,float *param_5,
                  int param_6)

{
  ushort *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float afStack_58 [12];
  
  iVar12 = 0;
  afStack_58[0] = *param_5;
  afStack_58[1] = param_5[1];
  afStack_58[2] = param_5[2];
  afStack_58[3] = param_5[3];
  uVar14 = 0;
  FUN_180084000(afStack_58);
  pfVar11 = afStack_58;
  fVar18 = 0.0;
  do {
    fVar16 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    fVar16 = ABS(fVar16);
    fVar17 = fVar16;
    if (fVar16 <= fVar18) {
      fVar17 = fVar18;
    }
    uVar6 = (ushort)iVar12;
    if (fVar16 <= fVar18) {
      uVar6 = (ushort)uVar14;
    }
    iVar12 = iVar12 + 1;
    uVar14 = (ulonglong)uVar6;
    fVar18 = fVar17;
  } while (iVar12 < 4);
  bVar4 = afStack_58[uVar6] != 0.0;
  bVar5 = afStack_58[uVar6] <= 0.0;
  if (bVar5 && bVar4) {
    afStack_58[0] = -afStack_58[0];
    afStack_58[1] = -afStack_58[1];
    afStack_58[2] = -afStack_58[2];
    afStack_58[3] = -afStack_58[3];
  }
  iVar8 = *param_3;
  uVar9 = iVar8 >> 0x1f & 7;
  iVar7 = iVar8 + uVar9;
  iVar12 = iVar8 + 3;
  *param_3 = iVar12;
  puVar1 = (ushort *)((iVar7 >> 3) + param_2);
  *puVar1 = *puVar1 | (ushort)(bVar5 && bVar4) << (((byte)iVar7 & 7) - (char)uVar9 & 0x1f);
  uVar9 = iVar8 + 1 >> 0x1f & 0xf;
  iVar8 = iVar8 + 1 + uVar9;
  iVar7 = *param_4 + 3;
  *param_4 = iVar7;
  uVar15 = 1 << ((byte)param_6 & 0x1f);
  puVar2 = (uint *)(param_2 + (longlong)(iVar8 >> 4) * 2);
  *puVar2 = *puVar2 | (uint)uVar6 << (((byte)iVar8 & 0xf) - (char)uVar9 & 0x1f);
  fVar18 = *(float *)(param_1 + 0xc);
  uVar9 = uVar15 - 1;
  fVar16 = (*(float *)(param_1 + 8) - fVar18) / (float)uVar9;
  if (uVar6 != 0) {
    uVar13 = (uint)((afStack_58[0] - fVar18) / fVar16 + 0.5);
    if (uVar15 <= uVar13) {
      uVar13 = uVar9;
    }
    uVar10 = iVar12 >> 0x1f & 0x1f;
    iVar8 = iVar12 + uVar10;
    iVar12 = iVar12 + param_6;
    *param_3 = iVar12;
    puVar3 = (ulonglong *)(param_2 + (longlong)(iVar8 >> 5) * 4);
    *puVar3 = *puVar3 | (ulonglong)uVar13 << (((byte)iVar8 & 0x1f) - (char)uVar10 & 0x3f);
    iVar7 = iVar7 + param_6;
    *param_4 = iVar7;
  }
  if (uVar6 != 1) {
    uVar13 = (uint)((afStack_58[1] - fVar18) / fVar16 + 0.5);
    if (uVar15 <= uVar13) {
      uVar13 = uVar9;
    }
    uVar10 = iVar12 >> 0x1f & 0x1f;
    iVar8 = iVar12 + uVar10;
    iVar12 = iVar12 + param_6;
    *param_3 = iVar12;
    puVar3 = (ulonglong *)(param_2 + (longlong)(iVar8 >> 5) * 4);
    *puVar3 = *puVar3 | (ulonglong)uVar13 << (((byte)iVar8 & 0x1f) - (char)uVar10 & 0x3f);
    iVar7 = iVar7 + param_6;
    *param_4 = iVar7;
  }
  if (uVar6 != 2) {
    uVar13 = (uint)((afStack_58[2] - fVar18) / fVar16 + 0.5);
    if (uVar15 <= uVar13) {
      uVar13 = uVar9;
    }
    uVar10 = iVar12 >> 0x1f & 0x1f;
    iVar8 = iVar12 + uVar10;
    iVar12 = iVar12 + param_6;
    *param_3 = iVar12;
    puVar3 = (ulonglong *)(param_2 + (longlong)(iVar8 >> 5) * 4);
    *puVar3 = *puVar3 | (ulonglong)uVar13 << (((byte)iVar8 & 0x1f) - (char)uVar10 & 0x3f);
    iVar7 = iVar7 + param_6;
    *param_4 = iVar7;
  }
  if (uVar6 != 3) {
    uVar13 = (uint)((afStack_58[3] - fVar18) / fVar16 + 0.5);
    if (uVar15 <= uVar13) {
      uVar13 = uVar9;
    }
    uVar9 = iVar12 >> 0x1f & 0x1f;
    iVar8 = iVar12 + uVar9;
    *param_3 = iVar12 + param_6;
    puVar3 = (ulonglong *)(param_2 + (longlong)(iVar8 >> 5) * 4);
    *puVar3 = *puVar3 | (ulonglong)uVar13 << (((byte)iVar8 & 0x1f) - (char)uVar9 & 0x3f);
    *param_4 = iVar7 + param_6;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



