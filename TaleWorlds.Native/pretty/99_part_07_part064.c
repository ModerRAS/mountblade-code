#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part064.c - 5 个函数

// 函数: void FUN_1804d6ba0(void)
void FUN_1804d6ba0(void)

{
  uint64_t *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int in_EAX;
  uint uVar7;
  ulonglong uVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  uint64_t unaff_RBX;
  uint *puVar13;
  float *unaff_RBP;
  int iVar14;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  uint *puVar15;
  longlong in_R11;
  longlong lVar16;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar40;
  float fVar41;
  int32_t unaff_XMM8_Db;
  float fVar42;
  float fVar43;
  int32_t unaff_XMM8_Dc;
  float fVar44;
  int32_t unaff_XMM8_Dd;
  float fVar45;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int iStackX_20;
  longlong *in_stack_00000028;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  *(uint64_t *)(in_R11 + 0x18) = unaff_RBX;
  *(uint64_t *)(in_R11 + -0x38) = unaff_R15;
  *(uint64_t *)(in_R11 + -0x20) = unaff_R12;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R13;
  *(uint64_t *)(in_R11 + -0x30) = unaff_R14;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM9_Dd;
  uVar17 = unaff_RSI;
  do {
    lVar3 = *unaff_RDI;
    iVar14 = (int)unaff_RSI;
    if (iVar14 < *(int *)(lVar3 + 0x5bc)) {
      uVar8 = (longlong)*(int *)(lVar3 + 0x608) & uVar17;
      lVar11 = *(longlong *)(*(longlong *)(lVar3 + 0x5e8) + (longlong)(iVar14 >> 10) * 8);
      in_EAX = iStackX_20;
      if (*(int *)(lVar11 + uVar8 * 0x28) == -1) goto LAB_1804d6c16;
      puVar13 = (uint *)(lVar11 + (uVar8 * 5 + 1) * 8);
    }
    else {
LAB_1804d6c16:
      puVar13 = (uint *)0x0;
    }
    if (puVar13 != (uint *)0x0) {
      lVar16 = (longlong)(int)(*(uint *)(lVar3 + 0x2b18) & *puVar13) * 0xd8;
      lVar11 = *(longlong *)(*(longlong *)(lVar3 + 11000) + (longlong)((int)*puVar13 >> 10) * 8);
      uVar2 = *(uint *)(lVar11 + 0x18 + lVar16);
      lVar12 = (longlong)(int)(*(uint *)(lVar3 + 0x4a8) & uVar2);
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x488) + (longlong)((int)uVar2 >> 10) * 8);
      if ((char)puVar13[1] == -1) {
        if (*(longlong **)(puVar13 + 2) == (longlong *)0x0) {
          puVar1 = (uint64_t *)(lVar4 + 8 + lVar12 * 0x48);
          _fStack0000000000000030 = *puVar1;
          _fStack0000000000000038 = puVar1[1];
          puVar1 = (uint64_t *)(lVar4 + 0x18 + lVar12 * 0x48);
          _fStack0000000000000040 = *puVar1;
          _fStack0000000000000048 = puVar1[1];
          pfVar9 = (float *)(lVar4 + 0x28 + lVar12 * 0x48);
          fStack0000000000000050 = *pfVar9;
          fStack0000000000000054 = pfVar9[1];
          fStack0000000000000058 = pfVar9[2];
          fStack000000000000005c = pfVar9[3];
          puVar1 = (uint64_t *)(lVar4 + 0x38 + lVar12 * 0x48);
          _fStack0000000000000060 = *puVar1;
          _fStack0000000000000068 = puVar1[1];
        }
        else {
          pfVar10 = (float *)(**(code **)(**(longlong **)(puVar13 + 2) + 0x158))();
          pfVar9 = (float *)(lVar4 + 8 + lVar12 * 0x48);
          fVar20 = *pfVar9;
          fVar22 = pfVar9[1];
          fVar24 = pfVar9[2];
          fVar25 = pfVar9[3];
          pfVar9 = (float *)(lVar4 + 0x18 + lVar12 * 0x48);
          fVar29 = *pfVar9;
          fVar30 = pfVar9[1];
          fVar31 = pfVar9[2];
          fVar33 = pfVar9[3];
          pfVar9 = (float *)(lVar4 + 0x28 + lVar12 * 0x48);
          fVar35 = *pfVar9;
          fVar37 = pfVar9[1];
          fVar39 = pfVar9[2];
          fVar41 = pfVar9[3];
          fVar21 = pfVar10[1];
          fVar23 = *pfVar10;
          fVar38 = pfVar10[2];
          fVar27 = pfVar10[5];
          fVar26 = pfVar10[9];
          fVar28 = pfVar10[0xd];
          fVar19 = pfVar10[4];
          fVar40 = fVar21 * fVar29 + fVar23 * fVar20 + fVar38 * fVar35;
          fVar42 = fVar21 * fVar30 + fVar23 * fVar22 + fVar38 * fVar37;
          fVar44 = fVar21 * fVar31 + fVar23 * fVar24 + fVar38 * fVar39;
          fVar45 = fVar21 * fVar33 + fVar23 * fVar25 + fVar38 * fVar41;
          fVar21 = pfVar10[6];
          fVar23 = pfVar10[8];
          unaff_RBP[0x10] = fVar40;
          unaff_RBP[0x11] = fVar42;
          unaff_RBP[0x12] = fVar44;
          unaff_RBP[0x13] = fVar45;
          fVar43 = fVar27 * fVar29 + fVar19 * fVar20 + fVar21 * fVar35;
          fVar32 = fVar27 * fVar30 + fVar19 * fVar22 + fVar21 * fVar37;
          fVar34 = fVar27 * fVar31 + fVar19 * fVar24 + fVar21 * fVar39;
          fVar36 = fVar27 * fVar33 + fVar19 * fVar25 + fVar21 * fVar41;
          fVar21 = pfVar10[10];
          fVar38 = pfVar10[0xc];
          fStack0000000000000050 = fVar26 * fVar29 + fVar23 * fVar20 + fVar21 * fVar35;
          fStack0000000000000054 = fVar26 * fVar30 + fVar23 * fVar22 + fVar21 * fVar37;
          fStack0000000000000058 = fVar26 * fVar31 + fVar23 * fVar24 + fVar21 * fVar39;
          fStack000000000000005c = fVar26 * fVar33 + fVar23 * fVar25 + fVar21 * fVar41;
          fVar21 = pfVar10[0xe];
          pfVar9 = (float *)(lVar4 + 0x38 + lVar12 * 0x48);
          fVar23 = *pfVar9;
          fVar27 = pfVar9[1];
          fVar26 = pfVar9[2];
          fVar19 = pfVar9[3];
          unaff_RBP[0x14] = fVar43;
          unaff_RBP[0x15] = fVar32;
          unaff_RBP[0x16] = fVar34;
          unaff_RBP[0x17] = fVar36;
          _fStack0000000000000030 = CONCAT44(fVar42,fVar40);
          _fStack0000000000000038 = CONCAT44(fVar45,fVar44);
          unaff_RBP[0x18] = fStack0000000000000050;
          unaff_RBP[0x19] = fStack0000000000000054;
          unaff_RBP[0x1a] = fStack0000000000000058;
          unaff_RBP[0x1b] = fStack000000000000005c;
          _fStack0000000000000040 = CONCAT44(fVar32,fVar43);
          _fStack0000000000000048 = CONCAT44(fVar36,fVar34);
          fVar23 = fVar28 * fVar29 + fVar38 * fVar20 + fVar21 * fVar35 + fVar23;
          fVar27 = fVar28 * fVar30 + fVar38 * fVar22 + fVar21 * fVar37 + fVar27;
          fVar26 = fVar28 * fVar31 + fVar38 * fVar24 + fVar21 * fVar39 + fVar26;
          fVar19 = fVar28 * fVar33 + fVar38 * fVar25 + fVar21 * fVar41 + fVar19;
          unaff_RBP[0x1c] = fVar23;
          unaff_RBP[0x1d] = fVar27;
          unaff_RBP[0x1e] = fVar26;
          unaff_RBP[0x1f] = fVar19;
          _fStack0000000000000060 = CONCAT44(fVar27,fVar23);
          _fStack0000000000000068 = CONCAT44(fVar19,fVar26);
        }
      }
      else {
        uVar2 = *(uint *)(lVar11 + 0x1c + lVar16);
        puVar15 = (uint *)((longlong)(char)puVar13[1] * 0x100 +
                          *(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(lVar3 + 0x698) + (longlong)((int)uVar2 >> 10) * 8) + 8
                             + (longlong)(int)(*(uint *)(lVar3 + 0x6b8) & uVar2) * 0x30) + 0x18));
        do {
          LOCK();
          uVar2 = *puVar15;
          *puVar15 = *puVar15 | 1;
          UNLOCK();
        } while ((uVar2 & 1) != 0);
        fVar21 = (float)puVar15[1];
        fVar23 = (float)puVar15[2];
        fVar38 = (float)puVar15[3];
        fVar27 = (float)puVar15[4];
        fVar28 = (float)puVar15[5];
        fVar19 = (float)puVar15[6];
        fVar20 = (float)puVar15[7];
        fVar26 = (float)puVar15[8];
        unaff_RBP[0x20] = fVar21;
        unaff_RBP[0x21] = fVar23;
        unaff_RBP[0x22] = fVar38;
        unaff_RBP[0x23] = fVar27;
        unaff_RBP[0x24] = fVar28;
        unaff_RBP[0x25] = fVar19;
        unaff_RBP[0x26] = fVar20;
        unaff_RBP[0x27] = fVar26;
        *puVar15 = 0;
        unaff_RBP[-0x18] = fVar21;
        unaff_RBP[-0x17] = fVar23;
        unaff_RBP[-0x16] = fVar38;
        unaff_RBP[-0x15] = fVar27;
        unaff_RBP[-0x14] = fVar28;
        unaff_RBP[-0x13] = fVar19;
        unaff_RBP[-0x12] = fVar20;
        unaff_RBP[-0x11] = fVar26;
        FUN_18063b5f0(&stack0x00000070,unaff_RBP + -0x18);
        pfVar9 = (float *)(lVar4 + 8 + lVar12 * 0x48);
        fVar22 = *pfVar9;
        fVar24 = pfVar9[1];
        fVar25 = pfVar9[2];
        fVar29 = pfVar9[3];
        plVar5 = *(longlong **)(puVar13 + 2);
        fVar21 = unaff_RBP[-0x20];
        fVar23 = unaff_RBP[-0x1c];
        pfVar9 = (float *)(lVar4 + 0x18 + lVar12 * 0x48);
        fVar30 = *pfVar9;
        fVar31 = pfVar9[1];
        fVar33 = pfVar9[2];
        fVar35 = pfVar9[3];
        pfVar9 = (float *)(lVar4 + 0x28 + lVar12 * 0x48);
        fVar37 = *pfVar9;
        fVar39 = pfVar9[1];
        fVar41 = pfVar9[2];
        fVar43 = pfVar9[3];
        fVar38 = unaff_RBP[-0x1f];
        fVar40 = fStack0000000000000070 * fVar22 + fStack0000000000000074 * fVar30 +
                 in_stack_00000078 * fVar37;
        fVar42 = fStack0000000000000070 * fVar24 + fStack0000000000000074 * fVar31 +
                 in_stack_00000078 * fVar39;
        fVar44 = fStack0000000000000070 * fVar25 + fStack0000000000000074 * fVar33 +
                 in_stack_00000078 * fVar41;
        fVar45 = fStack0000000000000070 * fVar29 + fStack0000000000000074 * fVar35 +
                 in_stack_00000078 * fVar43;
        fVar27 = unaff_RBP[-0x1e];
        fVar26 = unaff_RBP[-0x1b];
        fVar32 = fVar21 * fVar22 + fVar38 * fVar30 + fVar27 * fVar37;
        fVar34 = fVar21 * fVar24 + fVar38 * fVar31 + fVar27 * fVar39;
        fVar36 = fVar21 * fVar25 + fVar38 * fVar33 + fVar27 * fVar41;
        fVar38 = fVar21 * fVar29 + fVar38 * fVar35 + fVar27 * fVar43;
        fVar21 = unaff_RBP[-0x1a];
        unaff_RBP[-0x10] = fVar40;
        unaff_RBP[-0xf] = fVar42;
        unaff_RBP[-0xe] = fVar44;
        unaff_RBP[-0xd] = fVar45;
        fStack0000000000000050 = fVar23 * fVar22 + fVar26 * fVar30 + fVar21 * fVar37;
        fStack0000000000000054 = fVar23 * fVar24 + fVar26 * fVar31 + fVar21 * fVar39;
        fStack0000000000000058 = fVar23 * fVar25 + fVar26 * fVar33 + fVar21 * fVar41;
        fStack000000000000005c = fVar23 * fVar29 + fVar26 * fVar35 + fVar21 * fVar43;
        unaff_RBP[-0xc] = fVar32;
        unaff_RBP[-0xb] = fVar34;
        unaff_RBP[-10] = fVar36;
        unaff_RBP[-9] = fVar38;
        unaff_RBP[-8] = fStack0000000000000050;
        unaff_RBP[-7] = fStack0000000000000054;
        unaff_RBP[-6] = fStack0000000000000058;
        unaff_RBP[-5] = fStack000000000000005c;
        pfVar9 = (float *)(lVar4 + 0x38 + lVar12 * 0x48);
        _fStack0000000000000030 = CONCAT44(fVar42,fVar40);
        _fStack0000000000000038 = CONCAT44(fVar45,fVar44);
        _fStack0000000000000040 = CONCAT44(fVar34,fVar32);
        _fStack0000000000000048 = CONCAT44(fVar38,fVar36);
        fVar21 = fVar28 * fVar22 + fVar19 * fVar30 + fVar20 * fVar37 + *pfVar9;
        fVar23 = fVar28 * fVar24 + fVar19 * fVar31 + fVar20 * fVar39 + pfVar9[1];
        fVar38 = fVar28 * fVar25 + fVar19 * fVar33 + fVar20 * fVar41 + pfVar9[2];
        fVar27 = fVar28 * fVar29 + fVar19 * fVar35 + fVar20 * fVar43 + pfVar9[3];
        _fStack0000000000000060 = CONCAT44(fVar23,fVar21);
        _fStack0000000000000068 = CONCAT44(fVar27,fVar38);
        unaff_RBP[-4] = fVar21;
        unaff_RBP[-3] = fVar23;
        unaff_RBP[-2] = fVar38;
        unaff_RBP[-1] = fVar27;
        if (plVar5 != (longlong *)0x0) {
          pfVar9 = (float *)(**(code **)(*plVar5 + 0x158))();
          fVar21 = pfVar9[1];
          fVar23 = *pfVar9;
          fVar38 = pfVar9[2];
          fVar27 = pfVar9[5];
          fVar26 = pfVar9[9];
          fVar28 = pfVar9[0xd];
          fVar22 = fVar28 * fStack0000000000000040;
          fVar24 = fVar28 * fStack0000000000000044;
          fVar25 = fVar28 * fStack0000000000000048;
          fVar28 = fVar28 * fStack000000000000004c;
          fVar19 = pfVar9[4];
          fVar41 = fVar21 * fStack0000000000000040 + fVar23 * fStack0000000000000030 +
                   fVar38 * fStack0000000000000050;
          fVar43 = fVar21 * fStack0000000000000044 + fVar23 * fStack0000000000000034 +
                   fVar38 * fStack0000000000000054;
          fVar32 = fVar21 * fStack0000000000000048 + fVar23 * fStack0000000000000038 +
                   fVar38 * fStack0000000000000058;
          fVar34 = fVar21 * fStack000000000000004c + fVar23 * fStack000000000000003c +
                   fVar38 * fStack000000000000005c;
          fVar21 = pfVar9[6];
          fVar23 = pfVar9[8];
          *unaff_RBP = fVar41;
          unaff_RBP[1] = fVar43;
          unaff_RBP[2] = fVar32;
          unaff_RBP[3] = fVar34;
          fVar33 = fVar27 * fStack0000000000000040 + fVar19 * fStack0000000000000030 +
                   fVar21 * fStack0000000000000050;
          fVar35 = fVar27 * fStack0000000000000044 + fVar19 * fStack0000000000000034 +
                   fVar21 * fStack0000000000000054;
          fVar37 = fVar27 * fStack0000000000000048 + fVar19 * fStack0000000000000038 +
                   fVar21 * fStack0000000000000058;
          fVar39 = fVar27 * fStack000000000000004c + fVar19 * fStack000000000000003c +
                   fVar21 * fStack000000000000005c;
          fVar21 = pfVar9[10];
          fVar38 = pfVar9[0xc];
          fVar27 = fVar38 * fStack0000000000000030;
          fVar19 = fVar38 * fStack0000000000000034;
          fVar20 = fVar38 * fStack0000000000000038;
          fVar38 = fVar38 * fStack000000000000003c;
          fVar29 = fVar26 * fStack0000000000000040 + fVar23 * fStack0000000000000030 +
                   fVar21 * fStack0000000000000050;
          fVar30 = fVar26 * fStack0000000000000044 + fVar23 * fStack0000000000000034 +
                   fVar21 * fStack0000000000000054;
          fVar31 = fVar26 * fStack0000000000000048 + fVar23 * fStack0000000000000038 +
                   fVar21 * fStack0000000000000058;
          fVar23 = fVar26 * fStack000000000000004c + fVar23 * fStack000000000000003c +
                   fVar21 * fStack000000000000005c;
          fVar21 = pfVar9[0xe];
          _fStack0000000000000030 = CONCAT44(fVar43,fVar41);
          _fStack0000000000000038 = CONCAT44(fVar34,fVar32);
          unaff_RBP[4] = fVar33;
          unaff_RBP[5] = fVar35;
          unaff_RBP[6] = fVar37;
          unaff_RBP[7] = fVar39;
          unaff_RBP[8] = fVar29;
          unaff_RBP[9] = fVar30;
          unaff_RBP[10] = fVar31;
          unaff_RBP[0xb] = fVar23;
          _fStack0000000000000040 = CONCAT44(fVar35,fVar33);
          _fStack0000000000000048 = CONCAT44(fVar39,fVar37);
          fStack0000000000000060 =
               fVar22 + fVar27 + fVar21 * fStack0000000000000050 + fStack0000000000000060;
          fStack0000000000000064 =
               fVar24 + fVar19 + fVar21 * fStack0000000000000054 + fStack0000000000000064;
          fStack0000000000000068 =
               fVar25 + fVar20 + fVar21 * fStack0000000000000058 + fStack0000000000000068;
          fStack000000000000006c =
               fVar28 + fVar38 + fVar21 * fStack000000000000005c + fStack000000000000006c;
          unaff_RBP[0xc] = fStack0000000000000060;
          unaff_RBP[0xd] = fStack0000000000000064;
          unaff_RBP[0xe] = fStack0000000000000068;
          unaff_RBP[0xf] = fStack000000000000006c;
          fStack0000000000000050 = fVar29;
          fStack0000000000000054 = fVar30;
          fStack0000000000000058 = fVar31;
          fStack000000000000005c = fVar23;
        }
      }
      (**(code **)(**(longlong **)(puVar13 + 4) + 0x1b8))
                (*(longlong **)(puVar13 + 4),*(int32_t *)in_stack_00000028[1],&stack0x00000030);
      cVar6 = (**(code **)(**(longlong **)(puVar13 + 4) + 0x138))();
      unaff_RDI = in_stack_00000028;
      in_EAX = iStackX_20;
      if (cVar6 != '\0') {
        lVar3 = *in_stack_00000028;
        puVar13 = (uint *)(lVar3 + 0x6c0);
        LOCK();
        uVar2 = *puVar13;
        *puVar13 = *puVar13 + 1;
        UNLOCK();
        uVar7 = uVar2 >> 6;
        if (*(longlong *)(lVar3 + 0x6c8 + (ulonglong)uVar7 * 8) == 0) {
          lVar11 = FUN_18062b420(system_memory_pool_ptr,0x100,0x17);
          plVar5 = (longlong *)(lVar3 + 0x6c8 + (ulonglong)uVar7 * 8);
          LOCK();
          bVar18 = *plVar5 == 0;
          if (bVar18) {
            *plVar5 = lVar11;
          }
          UNLOCK();
          if ((!bVar18) && (lVar11 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
        }
        *(int *)(*(longlong *)(lVar3 + 0x6c8 + (ulonglong)uVar7 * 8) +
                (ulonglong)(uVar2 + uVar7 * -0x40) * 4) = iVar14;
      }
    }
    unaff_RSI = (ulonglong)(iVar14 + 1U);
    uVar17 = uVar17 + 1;
    if (in_EAX <= (int)(iVar14 + 1U)) {
                    // WARNING: Subroutine does not return
      FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x28) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}






// 函数: void FUN_1804d7115(void)
void FUN_1804d7115(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xa0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d7130(longlong param_1,longlong param_2)
void FUN_1804d7130(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t *puStackX_8;
  longlong lStackX_10;
  int32_t *puStackX_18;
  uint64_t uVar4;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_30;
  int32_t uStack_2c;
  int32_t **ppuStack_28;
  void *puStack_20;
  code *pcStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  iVar1 = *(int *)(SYSTEM_STATE_MANAGER + 0x1c0);
  lVar2 = *(longlong *)(system_main_module_state + 0x3d8);
  uStack_40 = (int32_t)param_1;
  uStack_3c = (int32_t)((ulonglong)param_1 >> 0x20);
  lStackX_10 = param_2;
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x110) == 0)) {
    if (iVar1 == 0) {
      puStackX_8 = (int32_t *)CONCAT44(puStackX_8._4_4_,*(int32_t *)(param_2 + 0x8220));
      puStack_20 = &unknown_var_1360_ptr;
      pcStack_18 = (code *)&unknown_var_1344_ptr;
      uVar3 = *(int32_t *)(param_1 + 0x614);
    }
    else {
      if (iVar1 != 1) {
        if (iVar1 != 2) goto LAB_1804d7287;
        goto LAB_1804d7222;
      }
      puStackX_8 = (int32_t *)CONCAT44(puStackX_8._4_4_,*(int32_t *)(param_2 + 0x8220));
      puStack_20 = &unknown_var_1280_ptr;
      pcStack_18 = (code *)&unknown_var_1264_ptr;
      uVar3 = *(int32_t *)(param_1 + 0x614);
    }
  }
  else {
LAB_1804d7222:
    puStackX_8 = (int32_t *)CONCAT44(puStackX_8._4_4_,*(int32_t *)(param_2 + 0x8220));
    puStack_20 = &unknown_var_1200_ptr;
    pcStack_18 = (code *)&unknown_var_1184_ptr;
    uVar3 = *(int32_t *)(param_1 + 0x614);
  }
  uStack_2c = uStack_3c;
  uStack_30 = uStack_40;
  ppuStack_28 = &puStackX_8;
  puStackX_18 = &uStack_30;
  FUN_18015b810(lVar2,0,uVar3,4,0xffffffffffffffff,puStackX_18,0xfffffffffffffffe);
LAB_1804d7287:
  puStackX_8 = &uStack_30;
  ppuStack_28 = (int32_t **)&lStackX_10;
  puStack_20 = &unknown_var_8640_ptr;
  pcStack_18 = FUN_1804dee90;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_18015b810(uStack_40,0,*(int32_t *)(param_1 + 0x2c3c),4,0xffffffffffffffff,&uStack_30,uVar4)
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804d72f0(longlong *param_1,int param_2,int param_3)
void FUN_1804d72f0(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  int aiStackX_10 [4];
  int32_t **ppuStackX_20;
  uint64_t uVar12;
  int *apiStack_60 [2];
  void *puStack_50;
  code *pcStack_48;
  
  uVar12 = 0xfffffffffffffffe;
  uVar9 = (ulonglong)param_2;
  uVar7 = uVar9;
  if (param_2 < param_3) {
    do {
      lVar5 = *param_1;
      iVar8 = (int)uVar7;
      if (iVar8 < *(int *)(lVar5 + 0x50c)) {
        lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x538) + (longlong)(iVar8 >> 10) * 8);
        uVar7 = (longlong)*(int *)(lVar5 + 0x558) & uVar9;
        if ((*(int *)(lVar6 + uVar7 * 0x18) != -1) &&
           (puVar11 = (uint *)(uVar7 * 0x18 + 8 + lVar6), puVar11 != (uint *)0x0)) {
          lVar10 = (longlong)(int)(*(uint *)(lVar5 + 0x2b18) & *puVar11) * 0xd8 +
                   *(longlong *)(*(longlong *)(lVar5 + 11000) + (longlong)((int)*puVar11 >> 10) * 8)
          ;
          uVar2 = *(uint *)(lVar10 + 0x14);
          lVar6 = (longlong)((int)uVar2 >> 10) * 8;
          if (*(char *)(*(longlong *)(lVar6 + *(longlong *)(lVar5 + 0x3f8)) + 8 +
                       (longlong)(int)(*(uint *)(lVar5 + 0x418) & uVar2) * 0xc) != '\0') {
            iVar3 = *(int *)(*(longlong *)(lVar6 + *(longlong *)(lVar5 + 0x2cf0)) + 8 +
                            (longlong)(int)(*(uint *)(lVar5 + 0x2d10) & uVar2) * 0xc);
            iVar4 = *(int *)(lVar5 + 0xa8);
            uVar2 = *(uint *)(lVar10 + 0x1c);
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x698) + (longlong)((int)uVar2 >> 10) * 8);
            cVar1 = *(char *)(lVar6 + 0x2c +
                             (longlong)(int)(*(uint *)(lVar5 + 0x6b8) & uVar2) * 0x30);
            aiStackX_10[0] = (*(int *)(SYSTEM_STATE_MANAGER + 0xe00) != 0) - 1;
            ppuStackX_20 = apiStack_60;
            puStack_50 = &unknown_var_1168_ptr;
            pcStack_48 = FUN_18054afe0;
            apiStack_60[0] = aiStackX_10;
            FUN_18054a4b0(*(longlong *)(puVar11 + 2) + 0xe0,apiStack_60,(longlong)(int)uVar2,lVar6,
                          uVar12);
            lVar5 = *(longlong *)(puVar11 + 2);
            if ((((iVar3 == iVar4) && (cVar1 == '\0')) && (*(int *)(lVar5 + 0x154) == iVar3 - iVar4)
                ) && ((*(longlong *)(system_main_module_state + 0x3d8) == 0 ||
                      (*(int *)(*(longlong *)(system_main_module_state + 0x3d8) + 0x110) != 2)))) {
              FUN_180548880(lVar5,*(int8_t *)(lVar5 + 0x191));
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar7 = (ulonglong)(iVar8 + 1U);
    } while ((int)(iVar8 + 1U) < param_3);
  }
  return;
}






// 函数: void FUN_1804d7500(longlong param_1,uint param_2,int32_t param_3)
void FUN_1804d7500(longlong param_1,uint param_2,int32_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint64_t *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  int16_t uStack_dc;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int32_t uStack_c8;
  int8_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int16_t uStack_b4;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  int8_t uStack_94;
  uint64_t uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  if (param_2 != 0xffffffff) {
    uVar5 = *(uint *)(param_1 + 0x3c0);
    lVar13 = (longlong)(int)(*(uint *)(param_1 + 0x2b18) & param_2) * 0xd8;
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 11000) + (longlong)((int)param_2 >> 10) * 8);
    uVar6 = *(uint *)(lVar8 + 0x24 + lVar13);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)((int)uVar6 >> 10) * 8);
    uVar12 = *(uint *)(lVar8 + 0x1c + lVar13);
    if ((uVar12 != 0xffffffff) && (lVar10 = *(longlong *)(lVar8 + 0x98 + lVar13), lVar10 != 0)) {
      uVar7 = *(uint *)(lVar8 + 0x18 + lVar13);
      uVar14 = 0;
      lVar13 = (longlong)(int)(*(uint *)(param_1 + 0x6b8) & uVar12);
      uStack_e8 = 0;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x698) + (longlong)((int)uVar12 >> 10) * 8);
      uStack_dc = 0xff01;
      uStack_d8 = 0;
      uStack_d0 = *(int32_t *)(lVar8 + 0x1c + lVar13 * 0x30);
      uStack_98 = *(int32_t *)(lVar8 + 0x28 + lVar13 * 0x30);
      uStack_cc = *(int32_t *)(lVar8 + 0x18 + lVar13 * 0x30);
      uStack_c8 = *(int32_t *)(lVar8 + 0x14 + lVar13 * 0x30);
      uStack_c4 = *(int8_t *)(lVar8 + 0x10 + lVar13 * 0x30);
      uStack_bc = *(int32_t *)(lVar8 + 0x20 + lVar13 * 0x30);
      uStack_c0 = *(int32_t *)(lVar8 + 0x24 + lVar13 * 0x30);
      lVar11 = (longlong)(int)(*(uint *)(param_1 + 0x4a8) & uVar7);
      uStack_b8 = 0;
      uStack_b4 = 0x400;
      uStack_b0 = 0;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x488) + (longlong)((int)uVar7 >> 10) * 8);
      lVar13 = *(longlong *)(param_1 + 8);
      uStack_a8 = 0;
      uStack_a0 = 0;
      pfVar1 = (float *)(lVar8 + 0x28 + lVar11 * 0x48);
      uStack_94 = 0;
      pfVar2 = (float *)(lVar8 + 8 + lVar11 * 0x48);
      uStack_80 = 0;
      pfVar3 = (float *)(lVar8 + 0x18 + lVar11 * 0x48);
      puVar4 = (uint64_t *)(lVar8 + 0x38 + lVar11 * 0x48);
      uStack_48 = *puVar4;
      uStack_40 = puVar4[1];
      fVar20 = *pfVar2 * 0.0;
      fVar21 = pfVar2[1] * 0.0;
      fVar22 = pfVar2[2] * 0.0;
      fVar23 = pfVar2[3] * 0.0;
      fStack_68 = *pfVar1 * 0.0;
      fStack_64 = pfVar1[1] * 0.0;
      fStack_60 = pfVar1[2] * 0.0;
      fStack_5c = pfVar1[3] * 0.0;
      fVar16 = *pfVar3 * 0.0;
      fVar17 = pfVar3[1] * 0.0;
      fVar18 = pfVar3[2] * 0.0;
      fVar19 = pfVar3[3] * 0.0;
      fStack_78 = *pfVar2 * 1.3 + fVar16 + fStack_68;
      fStack_74 = pfVar2[1] * 1.3 + fVar17 + fStack_64;
      fStack_70 = pfVar2[2] * 1.3 + fVar18 + fStack_60;
      fStack_6c = pfVar2[3] * 1.3 + fVar19 + fStack_5c;
      fStack_68 = *pfVar3 * 1.3 + fVar20 + fStack_68;
      fStack_64 = pfVar3[1] * 1.3 + fVar21 + fStack_64;
      fStack_60 = pfVar3[2] * 1.3 + fVar22 + fStack_60;
      fStack_5c = pfVar3[3] * 1.3 + fVar23 + fStack_5c;
      fStack_58 = *pfVar1 * 1.0 + fVar20 + fVar16;
      fStack_54 = pfVar1[1] * 1.0 + fVar21 + fVar17;
      fStack_50 = pfVar1[2] * 1.0 + fVar22 + fVar18;
      fStack_4c = pfVar1[3] * 1.0 + fVar23 + fVar19;
      uVar15 = uVar14;
      uStack_e0 = param_3;
      if (*(longlong *)(param_1 + 0x10) - lVar13 >> 3 != 0) {
        do {
          if (((*(ushort *)(lVar9 + 8 + (longlong)(int)(uVar5 & uVar6) * 0xc) &
               1 << ((byte)uVar14 & 0x1f)) != 0) &&
             (1 < *(int *)(*(longlong *)(uVar15 + lVar13) + 0x178))) {
            FUN_180077750(lVar10,*(longlong *)(uVar15 + lVar13),&fStack_78,0,&uStack_e8);
          }
          lVar13 = *(longlong *)(param_1 + 8);
          uVar12 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar12;
          uVar15 = uVar15 + 8;
        } while ((ulonglong)(longlong)(int)uVar12 <
                 (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar13 >> 3));
      }
    }
  }
  return;
}






