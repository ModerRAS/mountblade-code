#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part057.c - 5 个函数

// 函数: void FUN_1805b0660(int64_t param_1,float param_2,float param_3)
void FUN_1805b0660(int64_t param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
  uint *puVar11;
  int iVar12;
  int64_t lVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  int8_t auStack_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  int8_t auStack_c8 [16];
  int8_t auStack_b8 [16];
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  uint64_t uStack_88;
  
  uStack_88 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_128;
  iVar12 = 0;
  lVar7 = *(int64_t *)(*(int64_t *)(param_1 + 0xc08) + 0x6d8);
  lVar8 = *(int64_t *)(*(int64_t *)(param_1 + 0xc08) + 0x658);
  lVar9 = *(int64_t *)(lVar7 + 0x8a8);
  lVar13 = *(int64_t *)(lVar7 + 0x850);
  *(int8_t *)(param_1 + 1) = 0;
  if ('\0' < *(char *)(lVar7 + 0x858)) {
    lVar8 = *(int64_t *)(lVar8 + 0x18);
    pfVar14 = (float *)(lVar13 + 0x24);
    fStack_fc = 3.4028235e+38;
    fStack_ec = 3.4028235e+38;
    do {
      puVar11 = (uint *)((int64_t)*(char *)(pfVar14 + 2) * 0x100 + lVar8);
      do {
        LOCK();
        uVar1 = *puVar11;
        *puVar11 = *puVar11 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_e8 = puVar11[1];
      uStack_e4 = puVar11[2];
      uStack_e0 = puVar11[3];
      uStack_dc = puVar11[4];
      fVar2 = (float)puVar11[5];
      fVar16 = (float)puVar11[6];
      fVar3 = (float)puVar11[7];
      uStack_cc = puVar11[8];
      *puVar11 = 0;
      lVar13 = (int64_t)*(char *)(param_1 + 1) * 6;
      fStack_d8 = fVar2;
      fStack_d4 = fVar16;
      fStack_d0 = fVar3;
      uStack_a8 = uStack_e8;
      uStack_a4 = uStack_e4;
      uStack_a0 = uStack_e0;
      uStack_9c = uStack_dc;
      fStack_98 = fVar2;
      fStack_94 = fVar16;
      fStack_90 = fVar3;
      uStack_8c = uStack_cc;
      pfVar10 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_c8,pfVar14 + -9);
      fStack_108 = fVar2 + *pfVar10;
      fStack_104 = fVar16 + pfVar10[1];
      fStack_100 = fVar3 + pfVar10[2];
      pfVar10 = (float *)(param_1 + 4 + lVar13 * 8);
      *pfVar10 = fStack_108;
      pfVar10[1] = fStack_104;
      pfVar10[2] = fStack_100;
      pfVar10[3] = fStack_fc;
      pfVar10 = (float *)FUN_1801c0fb0(&uStack_e8,auStack_b8,pfVar14 + -5);
      bVar6 = *(byte *)((int64_t)pfVar14 + 10);
      fStack_f8 = fVar2 + *pfVar10;
      fStack_f4 = fVar16 + pfVar10[1];
      fStack_f0 = fVar3 + pfVar10[2];
      fVar2 = *pfVar14;
      fVar16 = pfVar14[-1];
      *(float *)(param_1 + 0x24 + lVar13 * 8) = fVar2;
      *(float *)(param_1 + 0x28 + lVar13 * 8) = fVar2;
      *(float *)(param_1 + 0x2c + lVar13 * 8) = fVar16;
      pfVar10 = (float *)(param_1 + 0x14 + lVar13 * 8);
      *pfVar10 = fStack_f8;
      pfVar10[1] = fStack_f4;
      pfVar10[2] = fStack_f0;
      pfVar10[3] = fStack_ec;
      if ((bVar6 & 1) != 0) {
        *(float *)(param_1 + 0x2c + lVar13 * 8) = fVar16 * 0.6;
        *(float *)(param_1 + 0x24 + lVar13 * 8) = fVar2 * 0.6;
        *(float *)(param_1 + 0x28 + lVar13 * 8) = fVar2 * 0.6;
      }
      fVar16 = *(float *)(param_1 + 0xc + lVar13 * 8);
      fVar3 = *(float *)(param_1 + 0x1c + lVar13 * 8);
      fVar4 = *(float *)(lVar9 + 0x98);
      fVar15 = fVar16;
      if (fVar16 <= fVar3) {
        fVar15 = fVar3;
      }
      fVar5 = *(float *)(lVar9 + 0xa8);
      if (param_2 <= fVar15 * fVar4 + fVar5 + fVar2) {
        if (fVar3 <= fVar16) {
          fVar16 = fVar3;
        }
        if ((fVar16 * fVar4 + fVar5) - fVar2 <= param_3) {
          *(int8_t *)(param_1 + 0x30 + lVar13 * 8) = *(int8_t *)(pfVar14 + 2);
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
        }
      }
      iVar12 = iVar12 + 1;
      pfVar14 = pfVar14 + 0xc;
    } while (iVar12 < *(char *)(lVar7 + 0x858));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_88 ^ (uint64_t)auStack_128);
}






// 函数: void FUN_1805b06e0(void)
void FUN_1805b06e0(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  uint *puVar10;
  int unaff_EBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t in_R9;
  int64_t lVar11;
  float *in_R11;
  int64_t unaff_R14;
  uint unaff_R15D;
  float fVar12;
  float fVar13;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fStack000000000000002c;
  float fStack000000000000003c;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  uint uStack000000000000005c;
  uint uStack0000000000000080;
  uint uStack0000000000000084;
  uint uStack0000000000000088;
  uint uStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  uint uStack000000000000009c;
  uint64_t in_stack_000000a0;
  
  fStack000000000000002c = 3.4028235e+38;
  fStack000000000000003c = 3.4028235e+38;
  do {
    puVar10 = (uint *)((int64_t)*(char *)(in_R11 + 2) * 0x100 + unaff_R14);
    do {
      LOCK();
      uVar1 = *puVar10;
      *puVar10 = *puVar10 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack0000000000000040 = puVar10[1];
    uStack0000000000000044 = puVar10[2];
    uStack0000000000000048 = puVar10[3];
    uStack000000000000004c = puVar10[4];
    fVar6 = (float)puVar10[5];
    fVar7 = (float)puVar10[6];
    fVar8 = (float)puVar10[7];
    uStack000000000000005c = puVar10[8];
    *puVar10 = unaff_R15D;
    lVar11 = (int64_t)*(char *)(in_R9 + 1) * 6;
    fStack0000000000000050 = fVar6;
    fStack0000000000000054 = fVar7;
    fStack0000000000000058 = fVar8;
    uStack0000000000000080 = uStack0000000000000040;
    uStack0000000000000084 = uStack0000000000000044;
    uStack0000000000000088 = uStack0000000000000048;
    uStack000000000000008c = uStack000000000000004c;
    fStack0000000000000090 = fVar6;
    fStack0000000000000094 = fVar7;
    fStack0000000000000098 = fVar8;
    uStack000000000000009c = uStack000000000000005c;
    pfVar9 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000060,in_R11 + -9);
    fVar13 = fVar6 + *pfVar9;
    fVar12 = pfVar9[1];
    fVar2 = pfVar9[2];
    pfVar9 = (float *)(in_R9 + 4 + lVar11 * 8);
    *pfVar9 = fVar13;
    pfVar9[1] = fVar7 + fVar12;
    pfVar9[2] = fVar8 + fVar2;
    pfVar9[3] = fStack000000000000002c;
    pfVar9 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000070,in_R11 + -5,fVar13,fVar13);
    bVar5 = *(byte *)((int64_t)in_R11 + 10);
    fVar12 = *pfVar9;
    fVar2 = pfVar9[1];
    fVar13 = pfVar9[2];
    fVar3 = *in_R11;
    fVar4 = in_R11[-1];
    *(float *)(in_R9 + 0x24 + lVar11 * 8) = fVar3;
    *(float *)(in_R9 + 0x28 + lVar11 * 8) = fVar3;
    *(float *)(in_R9 + 0x2c + lVar11 * 8) = fVar4;
    pfVar9 = (float *)(in_R9 + 0x14 + lVar11 * 8);
    *pfVar9 = fVar6 + fVar12;
    pfVar9[1] = fVar7 + fVar2;
    pfVar9[2] = fVar8 + fVar13;
    pfVar9[3] = fStack000000000000003c;
    if ((bVar5 & 1) != 0) {
      *(float *)(in_R9 + 0x2c + lVar11 * 8) = fVar4 * 0.6;
      *(float *)(in_R9 + 0x24 + lVar11 * 8) = fVar3 * 0.6;
      *(float *)(in_R9 + 0x28 + lVar11 * 8) = fVar3 * 0.6;
    }
    fVar12 = *(float *)(in_R9 + 0xc + lVar11 * 8);
    fVar2 = *(float *)(in_R9 + 0x1c + lVar11 * 8);
    fVar13 = fVar12;
    if (fVar12 <= fVar2) {
      fVar13 = fVar2;
    }
    if (unaff_XMM11_Da <=
        fVar13 * *(float *)(unaff_RSI + 0x98) + *(float *)(unaff_RSI + 0xa8) + fVar3) {
      if (fVar2 <= fVar12) {
        fVar12 = fVar2;
      }
      if ((fVar12 * *(float *)(unaff_RSI + 0x98) + *(float *)(unaff_RSI + 0xa8)) - fVar3 <=
          unaff_XMM10_Da) {
        *(int8_t *)(in_R9 + 0x30 + lVar11 * 8) = *(int8_t *)(in_R11 + 2);
        *(char *)(in_R9 + 1) = *(char *)(in_R9 + 1) + '\x01';
      }
    }
    unaff_EBX = unaff_EBX + 1;
    in_R11 = in_R11 + 0xc;
  } while (unaff_EBX < *(char *)(unaff_RDI + 0x858));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_1805b08fe(void)
void FUN_1805b08fe(void)

{
  uint64_t in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b0940(int64_t param_1,float param_2,float param_3)
void FUN_1805b0940(int64_t param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int8_t auStack_118 [32];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  int8_t auStack_b8 [16];
  int8_t auStack_a8 [16];
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  uint uStack_7c;
  uint64_t uStack_78;
  
  uStack_78 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  iVar12 = 0;
  lVar5 = *(int64_t *)(*(int64_t *)(param_1 + 0xc08) + 0x6d8);
  lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 0xc08) + 0x658);
  lVar7 = *(int64_t *)(lVar5 + 0x8a8);
  lVar8 = *(int64_t *)(lVar5 + 0x850);
  *(int8_t *)(param_1 + 1) = 0;
  if ('\0' < *(char *)(lVar5 + 0x858)) {
    lVar6 = *(int64_t *)(lVar6 + 0x18);
    pfVar11 = (float *)(lVar8 + 0x24);
    fStack_ec = 3.4028235e+38;
    fStack_dc = 3.4028235e+38;
    do {
      puVar10 = (uint *)((int64_t)*(char *)(pfVar11 + 2) * 0x100 + lVar6);
      do {
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_d8 = puVar10[1];
      uStack_d4 = puVar10[2];
      uStack_d0 = puVar10[3];
      uStack_cc = puVar10[4];
      fVar14 = (float)puVar10[5];
      fVar4 = (float)puVar10[6];
      fVar3 = (float)puVar10[7];
      uStack_bc = puVar10[8];
      *puVar10 = 0;
      lVar8 = (int64_t)*(char *)(param_1 + 1);
      fStack_c8 = fVar14;
      fStack_c4 = fVar4;
      fStack_c0 = fVar3;
      uStack_98 = uStack_d8;
      uStack_94 = uStack_d4;
      uStack_90 = uStack_d0;
      uStack_8c = uStack_cc;
      fStack_88 = fVar14;
      fStack_84 = fVar4;
      fStack_80 = fVar3;
      uStack_7c = uStack_bc;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_d8,auStack_b8,pfVar11 + -9);
      fStack_f8 = fVar14 + *pfVar9;
      fStack_f4 = fVar4 + pfVar9[1];
      fStack_f0 = fVar3 + pfVar9[2];
      pfVar9 = (float *)(param_1 + 4 + lVar8 * 0x30);
      *pfVar9 = fStack_f8;
      pfVar9[1] = fStack_f4;
      pfVar9[2] = fStack_f0;
      pfVar9[3] = fStack_ec;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_d8,auStack_a8,pfVar11 + -5);
      fVar2 = *pfVar11;
      fStack_e8 = fVar14 + *pfVar9;
      fStack_e4 = fVar4 + pfVar9[1];
      fStack_e0 = fVar3 + pfVar9[2];
      fVar14 = *(float *)(param_1 + 0xc + lVar8 * 0x30);
      fVar4 = pfVar11[-1];
      *(float *)(param_1 + 0x24 + lVar8 * 0x30) = fVar2;
      *(float *)(param_1 + 0x28 + lVar8 * 0x30) = fVar2;
      *(float *)(param_1 + 0x2c + lVar8 * 0x30) = fVar4;
      pfVar9 = (float *)(param_1 + 0x14 + lVar8 * 0x30);
      *pfVar9 = fStack_e8;
      pfVar9[1] = fStack_e4;
      pfVar9[2] = fStack_e0;
      pfVar9[3] = fStack_dc;
      fVar4 = *(float *)(lVar7 + 0x98);
      fVar3 = *(float *)(lVar7 + 0xa8);
      fVar13 = fVar14;
      if (fVar14 <= fStack_e0) {
        fVar13 = fStack_e0;
      }
      if (param_2 <= fVar13 * fVar4 + fVar3 + fVar2) {
        if (fStack_e0 <= fVar14) {
          fVar14 = fStack_e0;
        }
        if ((fVar14 * fVar4 + fVar3) - fVar2 <= param_3) {
          *(int8_t *)(param_1 + 0x30 + lVar8 * 0x30) = *(int8_t *)(pfVar11 + 2);
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
        }
      }
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 0xc;
    } while (iVar12 < *(char *)(lVar5 + 0x858));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (uint64_t)auStack_118);
}






// 函数: void FUN_1805b09bc(void)
void FUN_1805b09bc(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t lVar6;
  float *pfVar7;
  uint *puVar8;
  int64_t unaff_RBP;
  int64_t unaff_RDI;
  int64_t in_R9;
  float *in_R10;
  int in_R11D;
  int64_t unaff_R14;
  uint unaff_R15D;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fStack000000000000002c;
  float fStack000000000000003c;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  uint uStack000000000000005c;
  uint uStack0000000000000080;
  uint uStack0000000000000084;
  uint uStack0000000000000088;
  uint uStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  uint uStack000000000000009c;
  uint64_t in_stack_000000a0;
  
  fStack000000000000002c = 3.4028235e+38;
  fStack000000000000003c = 3.4028235e+38;
  do {
    puVar8 = (uint *)((int64_t)*(char *)(in_R10 + 2) * 0x100 + unaff_RBP);
    do {
      LOCK();
      uVar1 = *puVar8;
      *puVar8 = *puVar8 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack0000000000000040 = puVar8[1];
    uStack0000000000000044 = puVar8[2];
    uStack0000000000000048 = puVar8[3];
    uStack000000000000004c = puVar8[4];
    fVar4 = (float)puVar8[5];
    fVar5 = (float)puVar8[6];
    fVar12 = (float)puVar8[7];
    uStack000000000000005c = puVar8[8];
    *puVar8 = unaff_R15D;
    lVar6 = (int64_t)*(char *)(in_R9 + 1);
    fStack0000000000000050 = fVar4;
    fStack0000000000000054 = fVar5;
    fStack0000000000000058 = fVar12;
    uStack0000000000000080 = uStack0000000000000040;
    uStack0000000000000084 = uStack0000000000000044;
    uStack0000000000000088 = uStack0000000000000048;
    uStack000000000000008c = uStack000000000000004c;
    fStack0000000000000090 = fVar4;
    fStack0000000000000094 = fVar5;
    fStack0000000000000098 = fVar12;
    uStack000000000000009c = uStack000000000000005c;
    pfVar7 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000060,in_R10 + -9);
    fVar11 = fVar4 + *pfVar7;
    fVar2 = pfVar7[1];
    fVar9 = pfVar7[2];
    pfVar7 = (float *)(in_R9 + 4 + lVar6 * 0x30);
    *pfVar7 = fVar11;
    pfVar7[1] = fVar5 + fVar2;
    pfVar7[2] = fVar12 + fVar9;
    pfVar7[3] = fStack000000000000002c;
    pfVar7 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000070,in_R10 + -5,fVar11,fVar11);
    fVar2 = *in_R10;
    fVar9 = *pfVar7;
    fVar11 = pfVar7[1];
    fVar12 = fVar12 + pfVar7[2];
    fVar10 = *(float *)(in_R9 + 0xc + lVar6 * 0x30);
    fVar3 = in_R10[-1];
    *(float *)(in_R9 + 0x24 + lVar6 * 0x30) = fVar2;
    *(float *)(in_R9 + 0x28 + lVar6 * 0x30) = fVar2;
    *(float *)(in_R9 + 0x2c + lVar6 * 0x30) = fVar3;
    pfVar7 = (float *)(in_R9 + 0x14 + lVar6 * 0x30);
    *pfVar7 = fVar4 + fVar9;
    pfVar7[1] = fVar5 + fVar11;
    pfVar7[2] = fVar12;
    pfVar7[3] = fStack000000000000003c;
    fVar9 = fVar10;
    if (fVar10 <= fVar12) {
      fVar9 = fVar12;
    }
    if (unaff_XMM10_Da <=
        fVar9 * *(float *)(unaff_R14 + 0x98) + *(float *)(unaff_R14 + 0xa8) + fVar2) {
      if (fVar12 <= fVar10) {
        fVar10 = fVar12;
      }
      if ((fVar10 * *(float *)(unaff_R14 + 0x98) + *(float *)(unaff_R14 + 0xa8)) - fVar2 <=
          unaff_XMM9_Da) {
        *(int8_t *)(in_R9 + 0x30 + lVar6 * 0x30) = *(int8_t *)(in_R10 + 2);
        *(char *)(in_R9 + 1) = *(char *)(in_R9 + 1) + '\x01';
      }
    }
    in_R11D = in_R11D + 1;
    in_R10 = in_R10 + 0xc;
  } while (in_R11D < *(char *)(unaff_RDI + 0x858));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (uint64_t)&stack0x00000000);
}






