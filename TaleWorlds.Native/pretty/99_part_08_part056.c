#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part056.c - 12 个函数

// 函数: void FUN_1805af7db(void)
void FUN_1805af7db(void)

{
  int iVar1;
  longlong *plVar2;
  int8_t uVar3;
  longlong lVar4;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  longlong unaff_RDI;
  int32_t uVar5;
  float unaff_XMM7_Da;
  
  if (((((*(uint *)(unaff_RBX + 0x24) & 0x800) == 0) ||
       ((*(uint *)(unaff_RDI + 0x56c) & 0x800) == 0)) || (*(longlong *)(unaff_RDI + 0x590) == 0)) ||
     (*(char *)(*(longlong *)(unaff_RDI + 0x590) + 0x34bc) == (char)unaff_EBP)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(int8_t *)(unaff_RBX + 0x50) = uVar3;
  plVar2 = *(longlong **)(unaff_RDI + 0x590);
  if (plVar2 == (longlong *)0x0) {
    *(uint64_t *)(unaff_RBX + 0x184) = 0;
    *(uint64_t *)(unaff_RBX + 0x18c) = 0;
    *(int8_t *)(unaff_RBX + 0x170) = 1;
    *(int32_t *)(unaff_RBX + 0x174) = unaff_EBP;
    *(int32_t *)(unaff_RBX + 0xf0) = 0x3f800000;
  }
  else {
    if (((*(int *)(unaff_RBX + 0x78) == 0x18) || (*(int *)(unaff_RBX + 0x78) == 0x27)) &&
       ((*(uint *)(unaff_RBX + 0x24) & 0x800) == 0)) {
      uVar5 = (**(code **)(*plVar2 + 0x90))(plVar2,0);
    }
    else {
      uVar5 = 0;
    }
    *(int32_t *)(unaff_RBX + 0x88) = uVar5;
    if ((*(int *)(unaff_RBX + 0x74) == -1) || (*(int *)(unaff_RBX + 0x7c) == 0x23)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int32_t *)(*(longlong *)(unaff_RDI + 0x590) + 0x2434);
    }
    *(int32_t *)(unaff_RBX + 0x8c) = uVar5;
    if ((*(ulonglong *)(unaff_RBX + 0x60) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RDI + 0x20) + 0x34));
    }
    *(int32_t *)(unaff_RBX + 0x184) = 0;
    *(int32_t *)(unaff_RBX + 0x188) = 0;
    *(int32_t *)(unaff_RBX + 0x18c) = 0;
    *(int32_t *)(unaff_RBX + 400) = 0;
    if ((*(uint *)(unaff_RBX + 0x24) & 0x800) == 0) {
      *(int8_t *)(unaff_RBX + 0x170) = 1;
      *(int32_t *)(unaff_RBX + 0x174) = unaff_EBP;
      *(int32_t *)(unaff_RBX + 0xf0) = 0x3f800000;
      lVar4 = *(longlong *)(unaff_RDI + 0x590);
      *(int32_t *)(unaff_RBX + 0x1c0) = *(int32_t *)(*(longlong *)(lVar4 + 0x2598) + 8);
      *(int32_t *)(unaff_RBX + 0x14c) = *(int32_t *)(*(longlong *)(lVar4 + 0x2590) + 0x10);
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x2590) + 0xc);
      if (1 < iVar1) {
        lVar4 = FUN_18065cec0((longlong)iVar1 * 0x30 +
                              *(longlong *)(*(longlong *)(lVar4 + 0x2590) + 0xc78),0);
        unaff_XMM7_Da = *(float *)(lVar4 + 0x10);
      }
      goto LAB_1805af9eb;
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x590);
    if ((unaff_XMM7_Da == *(float *)(lVar4 + 0x90)) && (unaff_XMM7_Da == *(float *)(lVar4 + 0x94)))
    {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(int8_t *)(unaff_RBX + 0x170) = uVar3;
    *(int32_t *)(unaff_RBX + 0xf0) = *(int32_t *)(lVar4 + 0x25a8);
    *(int32_t *)(unaff_RBX + 0x174) = *(int32_t *)(lVar4 + 0x95d4);
  }
  *(int32_t *)(unaff_RBX + 0x14c) = unaff_EBP;
  *(int32_t *)(unaff_RBX + 0x1c0) = unaff_EBP;
LAB_1805af9eb:
  *(float *)(unaff_RBX + 0x148) = unaff_XMM7_Da;
  return;
}






// 函数: void FUN_1805af88b(void)
void FUN_1805af88b(void)

{
  longlong in_RAX;
  longlong unaff_RDI;
  uint64_t uStack0000000000000028;
  
  uStack0000000000000028 = *(uint64_t *)(in_RAX + 0xc4);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(int32_t *)(*(longlong *)(unaff_RDI + 0x20) + 0x34));
}






// 函数: void FUN_1805af8e9(void)
void FUN_1805af8e9(void)

{
  int iVar1;
  int8_t uVar2;
  longlong lVar3;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  longlong unaff_RDI;
  float unaff_XMM7_Da;
  uint64_t uStack0000000000000028;
  
  uStack0000000000000028 = 0;
  *(int32_t *)(unaff_RBX + 0x184) = 0;
  *(int32_t *)(unaff_RBX + 0x188) = 0;
  *(int32_t *)(unaff_RBX + 0x18c) = 0;
  *(int32_t *)(unaff_RBX + 400) = 0;
  if ((*(uint *)(unaff_RBX + 0x24) & 0x800) == 0) {
    *(int8_t *)(unaff_RBX + 0x170) = 1;
    *(int32_t *)(unaff_RBX + 0x174) = unaff_EBP;
    *(int32_t *)(unaff_RBX + 0xf0) = 0x3f800000;
    lVar3 = *(longlong *)(unaff_RDI + 0x590);
    *(int32_t *)(unaff_RBX + 0x1c0) = *(int32_t *)(*(longlong *)(lVar3 + 0x2598) + 8);
    *(int32_t *)(unaff_RBX + 0x14c) = *(int32_t *)(*(longlong *)(lVar3 + 0x2590) + 0x10);
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x2590) + 0xc);
    if (1 < iVar1) {
      lVar3 = FUN_18065cec0((longlong)iVar1 * 0x30 +
                            *(longlong *)(*(longlong *)(lVar3 + 0x2590) + 0xc78),0);
      unaff_XMM7_Da = *(float *)(lVar3 + 0x10);
    }
  }
  else {
    lVar3 = *(longlong *)(unaff_RDI + 0x590);
    if ((unaff_XMM7_Da == *(float *)(lVar3 + 0x90)) && (unaff_XMM7_Da == *(float *)(lVar3 + 0x94)))
    {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(int8_t *)(unaff_RBX + 0x170) = uVar2;
    *(int32_t *)(unaff_RBX + 0xf0) = *(int32_t *)(lVar3 + 0x25a8);
    *(int32_t *)(unaff_RBX + 0x174) = *(int32_t *)(lVar3 + 0x95d4);
    *(int32_t *)(unaff_RBX + 0x14c) = unaff_EBP;
    *(int32_t *)(unaff_RBX + 0x1c0) = unaff_EBP;
  }
  *(float *)(unaff_RBX + 0x148) = unaff_XMM7_Da;
  return;
}






// 函数: void FUN_1805afa10(longlong param_1,longlong param_2)
void FUN_1805afa10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int32_t uVar2;
  
  *(int32_t *)(param_1 + 0xc4) = *(int32_t *)(param_2 + 0x3ec);
  *(int32_t *)(param_1 + 200) = *(int32_t *)(param_2 + 0x3f0);
  *(int32_t *)(param_1 + 0xcc) = *(int32_t *)(param_2 + 0x3f4);
  *(int32_t *)(param_1 + 0xd0) = *(int32_t *)(param_2 + 0x3f8);
  *(int32_t *)(param_1 + 0xd4) = *(int32_t *)(param_2 + 0x410);
  *(int32_t *)(param_1 + 0xd8) = *(int32_t *)(param_2 + 0x414);
  *(int32_t *)(param_1 + 0x13c) = *(int32_t *)(param_2 + 0x404);
  *(int32_t *)(param_1 + 0x140) = *(int32_t *)(param_2 + 0x408);
  *(int32_t *)(param_1 + 0x144) = *(int32_t *)(param_2 + 0x40c);
  uVar2 = FUN_180524cf0(param_2);
  *(int32_t *)(param_1 + 0x158) = uVar2;
  if ((-1 < *(int *)(param_2 + 0x564)) &&
     (lVar1 = (longlong)*(int *)(param_2 + 0x564) * 0xa60 + *(longlong *)(param_2 + 0x8d8),
     *(int *)(lVar1 + 0x3600) == *(int *)(param_2 + 0x10))) {
    FUN_1805afdd0(*(uint64_t *)(lVar1 + 0x37d8),lVar1 + 0x30a0,param_2);
    uVar2 = FUN_180524cf0(lVar1 + 0x30a0);
    *(int32_t *)(*(longlong *)(lVar1 + 0x37d8) + 0x158) = uVar2;
  }
  return;
}






// 函数: void FUN_1805afdd0(longlong param_1,longlong param_2,longlong param_3)
void FUN_1805afdd0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int32_t uVar2;
  
  if (param_3 == 0) {
    *(int32_t *)(param_1 + 0x1d0) = 0xffffffff;
    *(int32_t *)(param_1 + 0x138) = 0x42480000;
    uVar2 = 0;
  }
  else {
    *(int32_t *)(param_1 + 0x1d0) = *(int32_t *)(param_3 + 0x10);
    *(int32_t *)(param_1 + 0x138) = *(int32_t *)(param_3 + 0x3d8);
    uVar2 = *(int32_t *)(param_3 + 0x570);
  }
  *(int32_t *)(param_1 + 0x17c) = uVar2;
  *(bool *)(param_1 + 0x99) = param_3 != 0;
  uVar2 = FUN_180524cf0(param_2);
  *(int32_t *)(param_1 + 0x158) = uVar2;
  if (*(char *)(param_1 + 0x99) != '\0') {
    lVar1 = (longlong)*(int *)(param_2 + 0x560) * 0xa60;
    if (*(int *)(lVar1 + 0x3608 + *(longlong *)(param_2 + 0x8d8)) == 1) {
      *(int32_t *)(param_1 + 0x1dc) =
           *(int32_t *)(lVar1 + 0x3a20 + *(longlong *)(param_2 + 0x8d8));
      return;
    }
  }
  *(int32_t *)(param_1 + 0x1dc) = *(int32_t *)(param_2 + 0x980);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805afe90(int8_t *param_1)
void FUN_1805afe90(int8_t *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar2 = *(longlong *)(param_1 + 0xc08);
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x590) + 0x2498);
  if (iVar1 != -1) {
    if (((((byte)(*(char *)((longlong)iVar1 * 0x68 + 0x60 + _DAT_180c96150) - 5U) < 2) &&
         (*(int *)(lVar2 + 0x1fc) == 7)) && ((*(uint *)(lVar2 + 0x56c) & 0x4000) != 0)) &&
       (((lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x8f8) + 0x9f0), lVar3 != 0 &&
         (0 < *(int *)(lVar3 + 0x30))) &&
        ((uVar4 = *(ulonglong *)
                   ((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0)),
         (uVar4 >> 9 & 1) == 0 || (0 < *(short *)(lVar3 + 8))))))) {
      bVar5 = false;
      if ((uVar4 >> 0x1c & 1) != 0) {
        bVar5 = true;
      }
    }
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x658) + 0xd8) != 0) {
    if (bVar5) {
      FUN_1805affa0();
      *param_1 = 1;
      return;
    }
    FUN_1805b0320();
    *param_1 = 1;
    return;
  }
  if (bVar5) {
    FUN_1805b0660();
    *param_1 = 1;
    return;
  }
  FUN_1805b0940(param_1);
  *param_1 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805affa0(longlong param_1,float param_2,float param_3)
void FUN_1805affa0(longlong param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auStack_158 [32];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  int8_t auStack_f8 [16];
  int8_t auStack_e8 [16];
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  ulonglong uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_158;
  iVar11 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xc08) + 0x6d8);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xc08) + 0x658);
  lVar6 = *(longlong *)(lVar4 + 0x8a8);
  lVar7 = *(longlong *)(lVar4 + 0x850);
  lVar9 = *(longlong *)(lVar5 + 0xd8);
  *(int8_t *)(param_1 + 1) = 0;
  if ('\0' < *(char *)(lVar4 + 0x858)) {
    pfVar12 = (float *)(lVar7 + 0x24);
    lVar5 = *(longlong *)(lVar5 + 0x18);
    lVar7 = *(longlong *)(lVar9 + 0x18);
    fStack_12c = 3.4028235e+38;
    fStack_11c = 3.4028235e+38;
    do {
      lVar9 = (longlong)*(char *)(pfVar12 + 2);
      fVar17 = *(float *)(lVar7 + 4 + lVar9 * 0x10);
      fVar16 = *(float *)(lVar7 + lVar9 * 0x10);
      fVar15 = *(float *)(lVar7 + 8 + lVar9 * 0x10);
      fVar13 = fVar16;
      if (fVar17 <= fVar16) {
        if (fVar17 < fVar15) {
          fVar13 = fVar15;
          fVar17 = fVar16;
        }
      }
      else if (fVar16 <= fVar15) {
        fVar13 = fVar15;
      }
      puVar10 = (uint *)(lVar9 * 0x100 + lVar5);
      do {
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_118 = puVar10[1];
      uStack_114 = puVar10[2];
      uStack_110 = puVar10[3];
      uStack_10c = puVar10[4];
      fVar16 = (float)puVar10[5];
      fVar15 = (float)puVar10[6];
      fVar14 = (float)puVar10[7];
      uStack_fc = puVar10[8];
      *puVar10 = 0;
      lVar9 = (longlong)*(char *)(param_1 + 1) * 6;
      fStack_108 = fVar16;
      fStack_104 = fVar15;
      fStack_100 = fVar14;
      uStack_d8 = uStack_118;
      uStack_d4 = uStack_114;
      uStack_d0 = uStack_110;
      uStack_cc = uStack_10c;
      fStack_c8 = fVar16;
      fStack_c4 = fVar15;
      fStack_c0 = fVar14;
      uStack_bc = uStack_fc;
      pfVar8 = (float *)FUN_1801c0fb0(&uStack_118,auStack_f8,pfVar12 + -9);
      fStack_138 = fVar16 + *pfVar8;
      fStack_134 = fVar15 + pfVar8[1];
      fStack_130 = fVar14 + pfVar8[2];
      pfVar8 = (float *)(param_1 + 4 + lVar9 * 8);
      *pfVar8 = fStack_138;
      pfVar8[1] = fStack_134;
      pfVar8[2] = fStack_130;
      pfVar8[3] = fStack_12c;
      pfVar8 = (float *)FUN_1801c0fb0(&uStack_118,auStack_e8,pfVar12 + -5);
      bVar3 = *(byte *)((longlong)pfVar12 + 10);
      fStack_128 = fVar16 + *pfVar8;
      fStack_124 = fVar15 + pfVar8[1];
      fStack_120 = fVar14 + pfVar8[2];
      fVar16 = *pfVar12;
      fVar15 = pfVar12[-1];
      *(float *)(param_1 + 0x28 + lVar9 * 8) = fVar16;
      fVar17 = fVar16 * (fVar17 + fVar13) * 0.5;
      pfVar8 = (float *)(param_1 + 0x14 + lVar9 * 8);
      *pfVar8 = fStack_128;
      pfVar8[1] = fStack_124;
      pfVar8[2] = fStack_120;
      pfVar8[3] = fStack_11c;
      *(float *)(param_1 + 0x24 + lVar9 * 8) = fVar17;
      *(float *)(param_1 + 0x2c + lVar9 * 8) = fVar15;
      if ((bVar3 & 1) != 0) {
        *(float *)(param_1 + 0x24 + lVar9 * 8) = fVar17 * 0.6;
        *(float *)(param_1 + 0x2c + lVar9 * 8) = fVar15 * 0.6;
        *(float *)(param_1 + 0x28 + lVar9 * 8) = fVar16 * 0.6;
      }
      fVar15 = *(float *)(param_1 + 0xc + lVar9 * 8);
      if (fVar16 <= fVar17) {
        fVar16 = fVar17;
      }
      fVar17 = *(float *)(param_1 + 0x1c + lVar9 * 8);
      fVar13 = *(float *)(lVar6 + 0x98);
      fVar14 = fVar15;
      if (fVar15 <= fVar17) {
        fVar14 = fVar17;
      }
      fVar2 = *(float *)(lVar6 + 0xa8);
      if (param_2 <= fVar14 * fVar13 + fVar2 + fVar16) {
        if (fVar17 <= fVar15) {
          fVar15 = fVar17;
        }
        if ((fVar15 * fVar13 + fVar2) - fVar16 <= param_3) {
          *(int8_t *)(param_1 + 0x30 + lVar9 * 8) = *(int8_t *)(pfVar12 + 2);
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
        }
      }
      iVar11 = iVar11 + 1;
      pfVar12 = pfVar12 + 0xc;
    } while (iVar11 < *(char *)(lVar4 + 0x858));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_b8 ^ (ulonglong)auStack_158);
}






// 函数: void FUN_1805b001e(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805b001e(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong in_RAX;
  float *pfVar9;
  longlong lVar10;
  uint *puVar11;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R11;
  float *pfVar12;
  uint unaff_R12D;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
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
  ulonglong in_stack_000000a0;
  
  pfVar12 = (float *)(in_R11 + 0x24);
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar5 = *(longlong *)(in_RAX + 0x18);
  fStack000000000000002c = 3.4028235e+38;
  fStack000000000000003c = 3.4028235e+38;
  do {
    lVar10 = (longlong)*(char *)(pfVar12 + 2);
    fVar18 = *(float *)(lVar5 + 4 + lVar10 * 0x10);
    fVar15 = *(float *)(lVar5 + lVar10 * 0x10);
    fVar14 = *(float *)(lVar5 + 8 + lVar10 * 0x10);
    fVar13 = fVar15;
    if (fVar18 <= fVar15) {
      if (fVar18 < fVar14) {
        fVar13 = fVar14;
        fVar18 = fVar15;
      }
    }
    else if (fVar15 <= fVar14) {
      fVar13 = fVar14;
    }
    puVar11 = (uint *)(lVar10 * 0x100 + lVar4);
    do {
      LOCK();
      uVar1 = *puVar11;
      *puVar11 = *puVar11 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack0000000000000040 = puVar11[1];
    uStack0000000000000044 = puVar11[2];
    uStack0000000000000048 = puVar11[3];
    uStack000000000000004c = puVar11[4];
    fVar6 = (float)puVar11[5];
    fVar7 = (float)puVar11[6];
    fVar8 = (float)puVar11[7];
    uStack000000000000005c = puVar11[8];
    *puVar11 = unaff_R12D;
    lVar10 = (longlong)*(char *)(param_4 + 1) * 6;
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
    pfVar9 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000060,pfVar12 + -9);
    fVar16 = fVar6 + *pfVar9;
    fVar15 = pfVar9[1];
    fVar14 = pfVar9[2];
    pfVar9 = (float *)(param_4 + 4 + lVar10 * 8);
    *pfVar9 = fVar16;
    pfVar9[1] = fVar7 + fVar15;
    pfVar9[2] = fVar8 + fVar14;
    pfVar9[3] = fStack000000000000002c;
    pfVar9 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000070,pfVar12 + -5,fVar16,fVar16);
    bVar3 = *(byte *)((longlong)pfVar12 + 10);
    fVar15 = *pfVar9;
    fVar14 = pfVar9[1];
    fVar16 = pfVar9[2];
    fVar17 = *pfVar12;
    fVar2 = pfVar12[-1];
    *(float *)(param_4 + 0x28 + lVar10 * 8) = fVar17;
    fVar18 = fVar17 * (fVar18 + fVar13) * 0.5;
    pfVar9 = (float *)(param_4 + 0x14 + lVar10 * 8);
    *pfVar9 = fVar6 + fVar15;
    pfVar9[1] = fVar7 + fVar14;
    pfVar9[2] = fVar8 + fVar16;
    pfVar9[3] = fStack000000000000003c;
    *(float *)(param_4 + 0x24 + lVar10 * 8) = fVar18;
    *(float *)(param_4 + 0x2c + lVar10 * 8) = fVar2;
    if ((bVar3 & 1) != 0) {
      *(float *)(param_4 + 0x24 + lVar10 * 8) = fVar18 * 0.6;
      *(float *)(param_4 + 0x2c + lVar10 * 8) = fVar2 * 0.6;
      *(float *)(param_4 + 0x28 + lVar10 * 8) = fVar17 * 0.6;
    }
    fVar15 = *(float *)(param_4 + 0xc + lVar10 * 8);
    if (fVar17 <= fVar18) {
      fVar17 = fVar18;
    }
    fVar18 = *(float *)(param_4 + 0x1c + lVar10 * 8);
    fVar14 = fVar15;
    if (fVar15 <= fVar18) {
      fVar14 = fVar18;
    }
    if (unaff_XMM12_Da <=
        fVar14 * *(float *)(unaff_RBP + 0x98) + *(float *)(unaff_RBP + 0xa8) + fVar17) {
      if (fVar18 <= fVar15) {
        fVar15 = fVar18;
      }
      if ((fVar15 * *(float *)(unaff_RBP + 0x98) + *(float *)(unaff_RBP + 0xa8)) - fVar17 <=
          unaff_XMM11_Da) {
        *(int8_t *)(param_4 + 0x30 + lVar10 * 8) = *(int8_t *)(pfVar12 + 2);
        *(char *)(param_4 + 1) = *(char *)(param_4 + 1) + '\x01';
      }
    }
    unaff_EBX = unaff_EBX + 1;
    pfVar12 = pfVar12 + 0xc;
  } while (unaff_EBX < *(char *)(unaff_RDI + 0x858));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805b02ed(void)
void FUN_1805b02ed(void)

{
  ulonglong in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805b0320(longlong param_1,float param_2,float param_3)
void FUN_1805b0320(longlong param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  longlong lVar10;
  uint *puVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auStack_148 [32];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  int8_t auStack_e8 [16];
  int8_t auStack_d8 [16];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  ulonglong uStack_a8;
  
  uStack_a8 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  iVar13 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xc08) + 0x6d8);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xc08) + 0x658);
  lVar5 = *(longlong *)(lVar3 + 0x8a8);
  lVar6 = *(longlong *)(lVar3 + 0x850);
  lVar10 = *(longlong *)(lVar4 + 0xd8);
  *(int8_t *)(param_1 + 1) = 0;
  if ('\0' < *(char *)(lVar3 + 0x858)) {
    pfVar12 = (float *)(lVar6 + 0x24);
    lVar4 = *(longlong *)(lVar4 + 0x18);
    lVar6 = *(longlong *)(lVar10 + 0x18);
    fStack_11c = 3.4028235e+38;
    fStack_10c = 3.4028235e+38;
    do {
      lVar10 = (longlong)*(char *)(pfVar12 + 2);
      fVar14 = *(float *)(lVar6 + 4 + lVar10 * 0x10);
      fVar17 = *(float *)(lVar6 + lVar10 * 0x10);
      fVar16 = *(float *)(lVar6 + 8 + lVar10 * 0x10);
      fVar15 = fVar17;
      if (fVar14 <= fVar17) {
        if (fVar14 < fVar16) {
          fVar15 = fVar16;
          fVar14 = fVar17;
        }
      }
      else if (fVar17 <= fVar16) {
        fVar15 = fVar16;
      }
      puVar11 = (uint *)(lVar10 * 0x100 + lVar4);
      do {
        LOCK();
        uVar1 = *puVar11;
        *puVar11 = *puVar11 | 1;
        UNLOCK();
      } while ((uVar1 & 1) != 0);
      uStack_108 = puVar11[1];
      uStack_104 = puVar11[2];
      uStack_100 = puVar11[3];
      uStack_fc = puVar11[4];
      fVar2 = (float)puVar11[5];
      fVar7 = (float)puVar11[6];
      fVar8 = (float)puVar11[7];
      uStack_ec = puVar11[8];
      *puVar11 = 0;
      lVar10 = (longlong)*(char *)(param_1 + 1);
      fStack_f8 = fVar2;
      fStack_f4 = fVar7;
      fStack_f0 = fVar8;
      uStack_c8 = uStack_108;
      uStack_c4 = uStack_104;
      uStack_c0 = uStack_100;
      uStack_bc = uStack_fc;
      fStack_b8 = fVar2;
      fStack_b4 = fVar7;
      fStack_b0 = fVar8;
      uStack_ac = uStack_ec;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_108,auStack_e8,pfVar12 + -9);
      fStack_128 = fVar2 + *pfVar9;
      fStack_124 = fVar7 + pfVar9[1];
      fStack_120 = fVar8 + pfVar9[2];
      pfVar9 = (float *)(param_1 + 4 + lVar10 * 0x30);
      *pfVar9 = fStack_128;
      pfVar9[1] = fStack_124;
      pfVar9[2] = fStack_120;
      pfVar9[3] = fStack_11c;
      pfVar9 = (float *)FUN_1801c0fb0(&uStack_108,auStack_d8,pfVar12 + -5);
      fVar17 = *pfVar12;
      fVar16 = *(float *)(param_1 + 0xc + lVar10 * 0x30);
      fStack_118 = fVar2 + *pfVar9;
      fStack_114 = fVar7 + pfVar9[1];
      fStack_110 = fVar8 + pfVar9[2];
      *(float *)(param_1 + 0x2c + lVar10 * 0x30) = pfVar12[-1];
      *(float *)(param_1 + 0x28 + lVar10 * 0x30) = fVar17;
      fVar14 = fVar17 * (fVar14 + fVar15) * 0.5;
      *(float *)(param_1 + 0x24 + lVar10 * 0x30) = fVar14;
      if (fVar17 <= fVar14) {
        fVar17 = fVar14;
      }
      pfVar9 = (float *)(param_1 + 0x14 + lVar10 * 0x30);
      *pfVar9 = fStack_118;
      pfVar9[1] = fStack_114;
      pfVar9[2] = fStack_110;
      pfVar9[3] = fStack_10c;
      fVar14 = *(float *)(lVar5 + 0x98);
      fVar15 = fVar16;
      if (fVar16 <= fStack_110) {
        fVar15 = fStack_110;
      }
      fVar2 = *(float *)(lVar5 + 0xa8);
      if (param_2 <= fVar15 * fVar14 + fVar2 + fVar17) {
        if (fStack_110 <= fVar16) {
          fVar16 = fStack_110;
        }
        if ((fVar16 * fVar14 + fVar2) - fVar17 <= param_3) {
          *(int8_t *)(param_1 + 0x30 + lVar10 * 0x30) = *(int8_t *)(pfVar12 + 2);
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
        }
      }
      iVar13 = iVar13 + 1;
      pfVar12 = pfVar12 + 0xc;
    } while (iVar13 < *(char *)(lVar3 + 0x858));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_a8 ^ (ulonglong)auStack_148);
}






// 函数: void FUN_1805b039e(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)
void FUN_1805b039e(longlong param_1,uint64_t param_2,uint64_t param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  longlong in_RAX;
  float *pfVar7;
  longlong lVar8;
  uint *puVar9;
  longlong unaff_RDI;
  longlong in_R10;
  float *pfVar10;
  int in_R11D;
  uint unaff_R12D;
  longlong unaff_R15;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_XMM10_Da;
  float unaff_XMM12_Da;
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
  ulonglong in_stack_000000a0;
  
  pfVar10 = (float *)(in_R10 + 0x24);
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(in_RAX + 0x18);
  fStack000000000000002c = 3.4028235e+38;
  fStack000000000000003c = 3.4028235e+38;
  do {
    lVar8 = (longlong)*(char *)(pfVar10 + 2);
    fVar12 = *(float *)(lVar4 + 4 + lVar8 * 0x10);
    fVar15 = *(float *)(lVar4 + lVar8 * 0x10);
    fVar14 = *(float *)(lVar4 + 8 + lVar8 * 0x10);
    fVar11 = fVar15;
    if (fVar12 <= fVar15) {
      if (fVar12 < fVar14) {
        fVar11 = fVar14;
        fVar12 = fVar15;
      }
    }
    else if (fVar15 <= fVar14) {
      fVar11 = fVar14;
    }
    puVar9 = (uint *)(lVar8 * 0x100 + lVar3);
    do {
      LOCK();
      uVar1 = *puVar9;
      *puVar9 = *puVar9 | 1;
      UNLOCK();
    } while ((uVar1 & 1) != 0);
    uStack0000000000000040 = puVar9[1];
    uStack0000000000000044 = puVar9[2];
    uStack0000000000000048 = puVar9[3];
    uStack000000000000004c = puVar9[4];
    fVar5 = (float)puVar9[5];
    fVar6 = (float)puVar9[6];
    fVar16 = (float)puVar9[7];
    uStack000000000000005c = puVar9[8];
    *puVar9 = unaff_R12D;
    lVar8 = (longlong)*(char *)(param_4 + 1);
    fStack0000000000000050 = fVar5;
    fStack0000000000000054 = fVar6;
    fStack0000000000000058 = fVar16;
    uStack0000000000000080 = uStack0000000000000040;
    uStack0000000000000084 = uStack0000000000000044;
    uStack0000000000000088 = uStack0000000000000048;
    uStack000000000000008c = uStack000000000000004c;
    fStack0000000000000090 = fVar5;
    fStack0000000000000094 = fVar6;
    fStack0000000000000098 = fVar16;
    uStack000000000000009c = uStack000000000000005c;
    pfVar7 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000060,pfVar10 + -9);
    fVar13 = fVar5 + *pfVar7;
    fVar15 = pfVar7[1];
    fVar14 = pfVar7[2];
    pfVar7 = (float *)(param_4 + 4 + lVar8 * 0x30);
    *pfVar7 = fVar13;
    pfVar7[1] = fVar6 + fVar15;
    pfVar7[2] = fVar16 + fVar14;
    pfVar7[3] = fStack000000000000002c;
    pfVar7 = (float *)FUN_1801c0fb0(&stack0x00000040,&stack0x00000070,pfVar10 + -5,fVar13,fVar13);
    fVar15 = *pfVar10;
    fVar14 = *(float *)(param_4 + 0xc + lVar8 * 0x30);
    fVar13 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar16 = fVar16 + pfVar7[2];
    *(float *)(param_4 + 0x2c + lVar8 * 0x30) = pfVar10[-1];
    *(float *)(param_4 + 0x28 + lVar8 * 0x30) = fVar15;
    fVar12 = fVar15 * (fVar12 + fVar11) * 0.5;
    *(float *)(param_4 + 0x24 + lVar8 * 0x30) = fVar12;
    if (fVar15 <= fVar12) {
      fVar15 = fVar12;
    }
    pfVar7 = (float *)(param_4 + 0x14 + lVar8 * 0x30);
    *pfVar7 = fVar5 + fVar13;
    pfVar7[1] = fVar6 + fVar2;
    pfVar7[2] = fVar16;
    pfVar7[3] = fStack000000000000003c;
    fVar12 = fVar14;
    if (fVar14 <= fVar16) {
      fVar12 = fVar16;
    }
    if (unaff_XMM12_Da <=
        fVar12 * *(float *)(unaff_R15 + 0x98) + *(float *)(unaff_R15 + 0xa8) + fVar15) {
      if (fVar16 <= fVar14) {
        fVar14 = fVar16;
      }
      if ((fVar14 * *(float *)(unaff_R15 + 0x98) + *(float *)(unaff_R15 + 0xa8)) - fVar15 <=
          unaff_XMM10_Da) {
        *(int8_t *)(param_4 + 0x30 + lVar8 * 0x30) = *(int8_t *)(pfVar10 + 2);
        *(char *)(param_4 + 1) = *(char *)(param_4 + 1) + '\x01';
      }
    }
    in_R11D = in_R11D + 1;
    pfVar10 = pfVar10 + 0xc;
  } while (in_R11D < *(char *)(unaff_RDI + 0x858));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805b062b(void)
void FUN_1805b062b(void)

{
  ulonglong in_stack_000000a0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000000a0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




