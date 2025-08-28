#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_08_part053.c - 6 个函数

// 函数: void FUN_1805ad601(uint64_t param_1,longlong param_2,longlong param_3)
void FUN_1805ad601(uint64_t param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  char cVar10;
  longlong in_RAX;
  uint *puVar11;
  longlong *unaff_RBX;
  float *unaff_RBP;
  char *unaff_RDI;
  longlong in_R11;
  float fVar12;
  float fVar13;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int8_t auVar18 [16];
  float fVar19;
  float fVar20;
  int32_t unaff_XMM6_Da;
  float fVar21;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  float fVar22;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  int32_t unaff_XMM13_Da;
  int32_t unaff_XMM13_Db;
  int32_t unaff_XMM13_Dc;
  int32_t unaff_XMM13_Dd;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Db;
  int32_t unaff_XMM14_Dc;
  int32_t unaff_XMM14_Dd;
  int32_t unaff_XMM15_Da;
  float fVar23;
  int32_t unaff_XMM15_Db;
  int32_t unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  ulonglong in_stack_00000020;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  float in_stack_00000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  int32_t uStack000000000000007c;
  
  *(int32_t *)(in_R11 + -0x38) = unaff_XMM6_Da;
  *(int32_t *)(in_R11 + -0x34) = unaff_XMM6_Db;
  *(int32_t *)(in_R11 + -0x30) = unaff_XMM6_Dc;
  *(int32_t *)(in_R11 + -0x2c) = unaff_XMM6_Dd;
  *(int32_t *)(in_R11 + -0x48) = unaff_XMM7_Da;
  *(int32_t *)(in_R11 + -0x44) = unaff_XMM7_Db;
  *(int32_t *)(in_R11 + -0x40) = unaff_XMM7_Dc;
  *(int32_t *)(in_R11 + -0x3c) = unaff_XMM7_Dd;
  *(int32_t *)(in_R11 + -0x58) = unaff_XMM8_Da;
  *(int32_t *)(in_R11 + -0x54) = unaff_XMM8_Db;
  *(int32_t *)(in_R11 + -0x50) = unaff_XMM8_Dc;
  *(int32_t *)(in_R11 + -0x4c) = unaff_XMM8_Dd;
  *(int32_t *)(in_R11 + -0x68) = unaff_XMM9_Da;
  *(int32_t *)(in_R11 + -100) = unaff_XMM9_Db;
  *(int32_t *)(in_R11 + -0x60) = unaff_XMM9_Dc;
  *(int32_t *)(in_R11 + -0x5c) = unaff_XMM9_Dd;
  *(int32_t *)(in_R11 + -0x78) = unaff_XMM10_Da;
  *(int32_t *)(in_R11 + -0x74) = unaff_XMM10_Db;
  *(int32_t *)(in_R11 + -0x70) = unaff_XMM10_Dc;
  *(int32_t *)(in_R11 + -0x6c) = unaff_XMM10_Dd;
  *(int32_t *)(in_R11 + -0x88) = unaff_XMM11_Da;
  *(int32_t *)(in_R11 + -0x84) = unaff_XMM11_Db;
  *(int32_t *)(in_R11 + -0x80) = unaff_XMM11_Dc;
  *(int32_t *)(in_R11 + -0x7c) = unaff_XMM11_Dd;
  *(int32_t *)(in_R11 + -0x98) = unaff_XMM12_Da;
  *(int32_t *)(in_R11 + -0x94) = unaff_XMM12_Db;
  *(int32_t *)(in_R11 + -0x90) = unaff_XMM12_Dc;
  *(int32_t *)(in_R11 + -0x8c) = unaff_XMM12_Dd;
  *(int32_t *)(in_R11 + -0xa8) = unaff_XMM13_Da;
  *(int32_t *)(in_R11 + -0xa4) = unaff_XMM13_Db;
  *(int32_t *)(in_R11 + -0xa0) = unaff_XMM13_Dc;
  *(int32_t *)(in_R11 + -0x9c) = unaff_XMM13_Dd;
  puVar11 = (uint *)(param_2 * 0x100 + *(longlong *)(in_RAX + 0x18));
  *(int32_t *)(in_R11 + -0xb8) = unaff_XMM14_Da;
  *(int32_t *)(in_R11 + -0xb4) = unaff_XMM14_Db;
  *(int32_t *)(in_R11 + -0xb0) = unaff_XMM14_Dc;
  *(int32_t *)(in_R11 + -0xac) = unaff_XMM14_Dd;
  *(int32_t *)(in_R11 + -200) = unaff_XMM15_Da;
  *(int32_t *)(in_R11 + -0xc4) = unaff_XMM15_Db;
  *(int32_t *)(in_R11 + -0xc0) = unaff_XMM15_Dc;
  *(int32_t *)(in_R11 + -0xbc) = unaff_XMM15_Dd;
  do {
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = *puVar11 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  fVar15 = (float)puVar11[1];
  fVar13 = (float)puVar11[2];
  fVar17 = (float)puVar11[3];
  fVar2 = (float)puVar11[4];
  fVar12 = (float)puVar11[5];
  fVar21 = (float)puVar11[6];
  fVar19 = (float)puVar11[7];
  fVar20 = (float)puVar11[8];
  unaff_RBP[0x2c] = fVar15;
  unaff_RBP[0x2d] = fVar13;
  unaff_RBP[0x2e] = fVar17;
  unaff_RBP[0x2f] = fVar2;
  unaff_RBP[0x30] = fVar12;
  unaff_RBP[0x31] = fVar21;
  unaff_RBP[0x32] = fVar19;
  unaff_RBP[0x33] = fVar20;
  unaff_RBP[0x14] = fVar15;
  unaff_RBP[0x15] = fVar13;
  unaff_RBP[0x16] = fVar17;
  unaff_RBP[0x17] = fVar2;
  *puVar11 = 0;
  unaff_RBP[0x18] = fVar12;
  unaff_RBP[0x19] = fVar21;
  unaff_RBP[0x1a] = fVar19;
  unaff_RBP[0x1b] = fVar20;
  unaff_RBP[-0x10] = fVar15;
  unaff_RBP[-0xf] = fVar13;
  unaff_RBP[-0xe] = fVar17;
  unaff_RBP[-0xd] = fVar2;
  unaff_RBP[-0xc] = fVar12;
  unaff_RBP[-0xb] = fVar21;
  unaff_RBP[-10] = fVar19;
  unaff_RBP[-9] = fVar20;
  FUN_18063b5f0(unaff_RBP + -8,unaff_RBP + -0x10);
  fVar22 = *unaff_RBP;
  fVar23 = unaff_RBP[1];
  fVar5 = unaff_RBP[-4];
  fVar6 = unaff_RBP[-3];
  unaff_RBP[-0x19] = 3.4028235e+38;
  fVar15 = *(float *)(param_3 + 0x70);
  fVar13 = *(float *)(param_3 + 0x80);
  fVar17 = *(float *)(param_3 + 0x84);
  fVar2 = *(float *)(param_3 + 0x74);
  in_stack_00000078 = *(float *)(param_3 + 0x98);
  fVar7 = unaff_RBP[-8];
  fVar8 = unaff_RBP[-7];
  unaff_RBP[-0x1d] = 3.4028235e+38;
  unaff_RBP[0x24] = fVar22;
  unaff_RBP[0x25] = fVar23;
  unaff_RBP[0x26] = unaff_RBP[2];
  unaff_RBP[0x27] = unaff_RBP[3];
  fVar16 = fVar12 * fVar15 + fVar21 * fVar13 + *(float *)(param_3 + 0xa0);
  unaff_RBP[0x28] = fVar12;
  unaff_RBP[0x29] = fVar21;
  unaff_RBP[0x2a] = fVar19;
  unaff_RBP[0x2b] = fVar20;
  fVar12 = fVar12 * fVar2 + fVar21 * fVar17 + *(float *)(param_3 + 0xa4);
  fVar21 = fVar19 * in_stack_00000078 + *(float *)(param_3 + 0xa8);
  unaff_RBP[0x20] = fVar5;
  unaff_RBP[0x21] = fVar6;
  unaff_RBP[0x22] = unaff_RBP[-2];
  unaff_RBP[0x23] = unaff_RBP[-1];
  unaff_RBP[-0x14] = fVar16;
  unaff_RBP[-0x13] = fVar12;
  unaff_RBP[-0x12] = fVar21;
  unaff_RBP[-0x11] = 3.4028235e+38;
  unaff_RBP[0x10] = fVar16;
  unaff_RBP[0x11] = fVar12;
  unaff_RBP[0x12] = fVar21;
  unaff_RBP[0x13] = 3.4028235e+38;
  fVar16 = fVar22 * fVar2 + fVar23 * fVar17;
  fVar21 = unaff_RBP[2] * in_stack_00000078;
  fVar22 = fVar22 * fVar15 + fVar23 * fVar13;
  fVar19 = fVar5 * fVar2 + fVar6 * fVar17;
  fVar23 = unaff_RBP[-2] * in_stack_00000078;
  fVar20 = fVar5 * fVar15 + fVar6 * fVar13;
  unaff_RBP[0x1c] = fVar7;
  unaff_RBP[0x1d] = fVar8;
  unaff_RBP[0x1e] = unaff_RBP[-6];
  unaff_RBP[0x1f] = unaff_RBP[-5];
  bVar3 = *(byte *)((longlong)unaff_RBX + 0x41);
  lVar4 = unaff_RBX[1];
  in_stack_00000070 = fVar7 * fVar15 + fVar8 * fVar13;
  fVar12 = unaff_RBP[-0x1d];
  fStack0000000000000074 = fVar7 * fVar2 + fVar8 * fVar17;
  in_stack_00000078 = unaff_RBP[-6] * in_stack_00000078;
  fVar2 = unaff_RBP[-0x19];
  unaff_RBP[-0x20] = fVar20;
  unaff_RBP[-0x1f] = fVar19;
  unaff_RBP[-0x1e] = fVar23;
  unaff_RBP[-0x1d] = fVar12;
  unaff_RBP[8] = fVar20;
  unaff_RBP[9] = fVar19;
  unaff_RBP[10] = fVar23;
  unaff_RBP[0xb] = fVar12;
  unaff_RBP[4] = in_stack_00000070;
  unaff_RBP[5] = fStack0000000000000074;
  unaff_RBP[6] = in_stack_00000078;
  unaff_RBP[7] = 3.4028235e+38;
  fVar15 = *(float *)((longlong)unaff_RBX + 0x34);
  fVar13 = *(float *)(unaff_RBX + 6);
  uStack000000000000007c = 0x7f7fffff;
  fVar17 = *(float *)(unaff_RBX + 7);
  unaff_RBP[0xc] = fVar22;
  unaff_RBP[0xd] = fVar16;
  unaff_RBP[0xe] = fVar21;
  unaff_RBP[0xf] = fVar2;
  unaff_RBP[-0x1c] = fVar22;
  unaff_RBP[-0x1b] = fVar16;
  unaff_RBP[-0x1a] = fVar21;
  unaff_RBP[-0x19] = fVar2;
  in_stack_00000050 =
       fVar15 * fVar20 + in_stack_00000070 * fVar13 + fVar17 * fVar22 + unaff_RBP[-0x14];
  fStack0000000000000054 =
       fVar15 * fVar19 + fStack0000000000000074 * fVar13 + fVar17 * fVar16 + unaff_RBP[-0x13];
  in_stack_00000058 =
       fVar15 * fVar23 + in_stack_00000078 * fVar13 + fVar17 * fVar21 + unaff_RBP[-0x12];
  fStack000000000000005c =
       fVar15 * fVar12 + fVar13 * 3.4028235e+38 + fVar17 * fVar2 + unaff_RBP[-0x11];
  cVar10 = FUN_180527720(lVar4,bVar3 >> 4 & 1);
  puVar11 = (uint *)((longlong)cVar10 * 0x100 +
                    *(longlong *)(*(longlong *)(unaff_RBX[1] + 0x658) + 0x18));
  do {
    LOCK();
    uVar1 = *puVar11;
    *puVar11 = *puVar11 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uVar9 = *(uint64_t *)(puVar11 + 3);
  in_stack_00000060 = (float)puVar11[5];
  fVar15 = (float)puVar11[6];
  in_stack_00000068 = (float)puVar11[7];
  fVar13 = (float)puVar11[8];
  *(uint64_t *)(unaff_RBP + 0x34) = *(uint64_t *)(puVar11 + 1);
  *(uint64_t *)(unaff_RBP + 0x36) = uVar9;
  unaff_RBP[0x38] = in_stack_00000060;
  unaff_RBP[0x39] = fVar15;
  unaff_RBP[0x3a] = in_stack_00000068;
  unaff_RBP[0x3b] = fVar13;
  in_stack_00000060 = in_stack_00000060 - in_stack_00000050;
  *puVar11 = 0;
  bVar3 = *(byte *)(unaff_RBX + 5);
  unaff_RBP[-0x15] = 3.4028235e+38;
  fStack000000000000006c = unaff_RBP[-0x15];
  fVar15 = fVar15 - fStack0000000000000054;
  in_stack_00000068 = in_stack_00000068 - in_stack_00000058;
  fVar13 = in_stack_00000060 * in_stack_00000060 + fVar15 * fVar15 +
           in_stack_00000068 * in_stack_00000068;
  auVar18 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar17 = auVar18._0_4_;
  fVar13 = fVar17 * 0.5 * (3.0 - fVar13 * fVar17 * fVar17);
  in_stack_00000060 = in_stack_00000060 * fVar13;
  fVar15 = fVar15 * fVar13;
  in_stack_00000068 = in_stack_00000068 * fVar13;
  fStack0000000000000064 = fVar15;
  if ((bVar3 & 1) != 0) {
    fVar15 = (float)FUN_1805ab6a0(unaff_RBX + 9,*unaff_RBX);
  }
  if (*(int *)(*unaff_RBX + 0x568) != 1) {
    fVar15 = (float)FUN_1804f83f0(*(uint64_t *)(*unaff_RBX + 0x8d8),system_system_config,
                                  &stack0x00000050,1,in_stack_00000020 & 0xffffffffffffff00);
  }
  uVar14 = FUN_1805ac830(fVar15,unaff_RBX[2],bVar3 & 1,&stack0x00000050,&stack0x00000060);
  if (*unaff_RDI == '\0') {
    FUN_1805afe90(uVar14,0xff7fffff);
  }
  cVar10 = '\0';
  if ('\0' < unaff_RDI[1]) {
    do {
      if (unaff_RDI[((longlong)cVar10 + 1) * 0x30] == (char)unaff_RBX[8]) {
        *(int8_t *)((longlong)unaff_RBX + (longlong)cVar10 + 0x70) = 1;
        break;
      }
      cVar10 = cVar10 + '\x01';
    } while (cVar10 < unaff_RDI[1]);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x3c) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ad956(uint64_t param_1,uint64_t param_2,uint *param_3)
void FUN_1805ad956(uint64_t param_1,uint64_t param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  uint64_t uVar3;
  char cVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RDI;
  uint unaff_R15D;
  float fVar5;
  int32_t uVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  int32_t uStack000000000000006c;
  
  do {
    LOCK();
    uVar1 = *param_3;
    *param_3 = *param_3 | 1;
    UNLOCK();
  } while ((uVar1 & 1) != 0);
  uVar3 = *(uint64_t *)(param_3 + 3);
  fStack0000000000000060 = (float)param_3[5];
  fVar7 = (float)param_3[6];
  fStack0000000000000068 = (float)param_3[7];
  uVar1 = param_3[8];
  *(uint64_t *)(unaff_RBP + 0xd0) = *(uint64_t *)(param_3 + 1);
  *(uint64_t *)(unaff_RBP + 0xd8) = uVar3;
  *(float *)(unaff_RBP + 0xe0) = fStack0000000000000060;
  *(float *)(unaff_RBP + 0xe4) = fVar7;
  *(float *)(unaff_RBP + 0xe8) = fStack0000000000000068;
  *(uint *)(unaff_RBP + 0xec) = uVar1;
  fStack0000000000000060 = fStack0000000000000060 - fStack0000000000000050;
  *param_3 = unaff_R15D;
  bVar2 = *(byte *)(unaff_RBX + 5);
  *(int32_t *)(unaff_RBP + -0x54) = 0x7f7fffff;
  uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x54);
  fVar7 = fVar7 - fStack0000000000000054;
  fStack0000000000000068 = fStack0000000000000068 - in_stack_00000058;
  fVar5 = fStack0000000000000060 * fStack0000000000000060 + fVar7 * fVar7 +
          fStack0000000000000068 * fStack0000000000000068;
  auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar8 = auVar9._0_4_;
  fVar5 = fVar8 * 0.5 * (3.0 - fVar5 * fVar8 * fVar8);
  fStack0000000000000060 = fStack0000000000000060 * fVar5;
  fVar7 = fVar7 * fVar5;
  fStack0000000000000068 = fStack0000000000000068 * fVar5;
  fStack0000000000000064 = fVar7;
  if ((bVar2 & 1) != 0) {
    fVar7 = (float)FUN_1805ab6a0(unaff_RBX + 9,*unaff_RBX);
  }
  if (*(int *)(*unaff_RBX + 0x568) != 1) {
    fVar7 = (float)FUN_1804f83f0(*(uint64_t *)(*unaff_RBX + 0x8d8),system_system_config,&stack0x00000050
                                 ,1,(char)unaff_R15D);
  }
  uVar6 = FUN_1805ac830(fVar7,unaff_RBX[2],bVar2 & 1,&stack0x00000050,&stack0x00000060);
  if (*unaff_RDI == '\0') {
    FUN_1805afe90(uVar6,0xff7fffff);
  }
  cVar4 = '\0';
  if ('\0' < unaff_RDI[1]) {
    do {
      if (unaff_RDI[((longlong)cVar4 + 1) * 0x30] == (char)unaff_RBX[8]) {
        *(int8_t *)((longlong)unaff_RBX + (longlong)cVar4 + 0x70) = 1;
        break;
      }
      cVar4 = cVar4 + '\x01';
    } while (cVar4 < unaff_RDI[1]);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xf0) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1805adaf5(void)
void FUN_1805adaf5(void)

{
  char cVar1;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  FUN_1805afe90();
  cVar1 = '\0';
  if ('\0' < *(char *)(unaff_RDI + 1)) {
    do {
      if (*(char *)(unaff_RDI + ((longlong)cVar1 + 1) * 0x30) == *(char *)(unaff_RBX + 0x40)) {
        *(int8_t *)(unaff_RBX + 0x70 + (longlong)cVar1) = 1;
        break;
      }
      cVar1 = cVar1 + '\x01';
    } while (cVar1 < *(char *)(unaff_RDI + 1));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xf0) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1805adb60(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar4 = *(int32_t *)((longlong)param_2 + 0x24);
  uVar5 = *(int32_t *)(param_2 + 5);
  uVar6 = *(int32_t *)((longlong)param_2 + 0x2c);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((longlong)param_1 + 0x24) = uVar4;
  *(int32_t *)(param_1 + 5) = uVar5;
  *(int32_t *)((longlong)param_1 + 0x2c) = uVar6;
  uVar4 = *(int32_t *)((longlong)param_2 + 0x34);
  uVar5 = *(int32_t *)(param_2 + 7);
  uVar6 = *(int32_t *)((longlong)param_2 + 0x3c);
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  *(int32_t *)((longlong)param_1 + 0x34) = uVar4;
  *(int32_t *)(param_1 + 7) = uVar5;
  *(int32_t *)((longlong)param_1 + 0x3c) = uVar6;
  *(int8_t *)(param_1 + 8) = *(int8_t *)(param_2 + 8);
  *(int8_t *)((longlong)param_1 + 0x41) = *(int8_t *)((longlong)param_2 + 0x41);
  lVar9 = (longlong)(param_2[10] - param_2[9]) >> 3;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar1;
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_18062b420(system_memory_pool_ptr,lVar9 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  param_1[9] = lVar8;
  param_1[10] = lVar8;
  param_1[0xb] = lVar8 + lVar9 * 8;
  plVar11 = (longlong *)param_1[9];
  plVar2 = (longlong *)param_2[10];
  for (plVar10 = (longlong *)param_2[9]; plVar10 != plVar2; plVar10 = plVar10 + 1) {
    plVar3 = (longlong *)*plVar10;
    *plVar11 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))();
    }
    plVar11 = plVar11 + 1;
  }
  param_1[10] = plVar11;
  plVar11 = (longlong *)param_2[0xd];
  param_1[0xd] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x28))();
  }
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar7 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar7;
  uVar7 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar7;
  uVar7 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar7;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805adca0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805adca0(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  longlong lVar10;
  longlong lVar11;
  int32_t *puVar12;
  longlong lVar13;
  
  puVar12 = (int32_t *)param_1[1];
  puVar7 = (int32_t *)*param_1;
  lVar13 = ((longlong)puVar12 - (longlong)puVar7) / 0xb0;
  puVar6 = (uint64_t *)0x0;
  if (lVar13 == 0) {
    lVar13 = 1;
  }
  else {
    lVar13 = lVar13 * 2;
    if (lVar13 == 0) goto LAB_1805add23;
  }
  puVar6 = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar13 * 0xb0,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar12 = (int32_t *)param_1[1];
  puVar7 = (int32_t *)*param_1;
LAB_1805add23:
  puVar9 = puVar6;
  if (puVar7 != puVar12) {
    lVar11 = (longlong)puVar6 - (longlong)puVar7;
    puVar7 = puVar7 + 0x18;
    do {
      *puVar9 = *(uint64_t *)(puVar7 + -0x18);
      *(uint64_t *)(lVar11 + -0x58 + (longlong)puVar7) = *(uint64_t *)(puVar7 + -0x16);
      uVar3 = *(uint64_t *)(puVar7 + -0x12);
      puVar8 = (uint64_t *)(lVar11 + -0x50 + (longlong)puVar7);
      *puVar8 = *(uint64_t *)(puVar7 + -0x14);
      puVar8[1] = uVar3;
      uVar3 = *(uint64_t *)(puVar7 + -0xe);
      puVar8 = (uint64_t *)(lVar11 + -0x40 + (longlong)puVar7);
      *puVar8 = *(uint64_t *)(puVar7 + -0x10);
      puVar8[1] = uVar3;
      uVar3 = *(uint64_t *)(puVar7 + -10);
      puVar8 = (uint64_t *)(lVar11 + -0x30 + (longlong)puVar7);
      *puVar8 = *(uint64_t *)(puVar7 + -0xc);
      puVar8[1] = uVar3;
      *(int8_t *)(lVar11 + -0x20 + (longlong)puVar7) = *(int8_t *)(puVar7 + -8);
      *(int8_t *)(lVar11 + -0x1f + (longlong)puVar7) = *(int8_t *)((longlong)puVar7 + -0x1f)
      ;
      puVar8 = (uint64_t *)((longlong)puVar7 + lVar11 + -0x18);
      *puVar8 = 0;
      *(uint64_t *)(lVar11 + -0x10 + (longlong)puVar7) = 0;
      *(uint64_t *)(lVar11 + -8 + (longlong)puVar7) = 0;
      *(int32_t *)(lVar11 + (longlong)puVar7) = *puVar7;
      uVar3 = *puVar8;
      *puVar8 = *(uint64_t *)(puVar7 + -6);
      *(uint64_t *)(puVar7 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar11 + -0x10 + (longlong)puVar7);
      *(uint64_t *)(lVar11 + -0x10 + (longlong)puVar7) = *(uint64_t *)(puVar7 + -4);
      *(uint64_t *)(puVar7 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar11 + -8 + (longlong)puVar7);
      *(uint64_t *)(lVar11 + -8 + (longlong)puVar7) = *(uint64_t *)(puVar7 + -2);
      *(uint64_t *)(puVar7 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar11 + (longlong)puVar7);
      *(int32_t *)(lVar11 + (longlong)puVar7) = *puVar7;
      *puVar7 = uVar2;
      *(uint64_t *)(lVar11 + 8 + (longlong)puVar7) = *(uint64_t *)(puVar7 + 2);
      *(uint64_t *)(puVar7 + 2) = 0;
      uVar3 = *(uint64_t *)(puVar7 + 6);
      puVar8 = (uint64_t *)(lVar11 + 0x10 + (longlong)puVar7);
      *puVar8 = *(uint64_t *)(puVar7 + 4);
      puVar8[1] = uVar3;
      uVar3 = *(uint64_t *)(puVar7 + 10);
      puVar8 = (uint64_t *)(lVar11 + 0x20 + (longlong)puVar7);
      *puVar8 = *(uint64_t *)(puVar7 + 8);
      puVar8[1] = uVar3;
      uVar2 = puVar7[0xd];
      uVar4 = puVar7[0xe];
      uVar5 = puVar7[0xf];
      puVar1 = (int32_t *)(lVar11 + 0x30 + (longlong)puVar7);
      *puVar1 = puVar7[0xc];
      puVar1[1] = uVar2;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      uVar3 = *(uint64_t *)(puVar7 + 0x12);
      puVar8 = (uint64_t *)(lVar11 + 0x40 + (longlong)puVar7);
      *puVar8 = *(uint64_t *)(puVar7 + 0x10);
      puVar8[1] = uVar3;
      puVar9 = puVar9 + 0x16;
      puVar1 = puVar7 + 0x14;
      puVar7 = puVar7 + 0x2c;
    } while (puVar1 != puVar12);
  }
  FUN_1805adb60(puVar9,param_2);
  lVar11 = param_1[1];
  lVar10 = *param_1;
  if (lVar10 != lVar11) {
    do {
      if (*(longlong **)(lVar10 + 0x68) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar10 + 0x68) + 0x38))();
      }
      FUN_180057830();
      lVar10 = lVar10 + 0xb0;
    } while (lVar10 != lVar11);
    lVar10 = *param_1;
  }
  if (lVar10 == 0) {
    *param_1 = (longlong)puVar6;
    param_1[1] = (longlong)(puVar9 + 0x16);
    param_1[2] = (longlong)(puVar6 + lVar13 * 0x16);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar10);
}



float * FUN_1805aded0(longlong param_1,float *param_2,float param_3,float *param_4)

{
  int8_t auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0xb8);
  param_2[3] = 3.4028235e+38;
  fVar4 = (param_3 * fVar5 + *(float *)(param_1 + 200)) -
          (param_3 * *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x88));
  fVar3 = (param_3 * *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xcc)) -
          (param_3 * *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x8c));
  fVar2 = (param_3 * *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xd0)) -
          (param_3 * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x90));
  fVar6 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
  auVar1 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar5 = auVar1._0_4_;
  fVar5 = fVar5 * 0.5 * (3.0 - fVar6 * fVar5 * fVar5);
  *param_2 = fVar4 * fVar5;
  param_2[1] = fVar3 * fVar5;
  param_2[2] = fVar2 * fVar5;
  if (param_4 != (float *)0x0) {
    *param_4 = fVar5 * fVar6;
  }
  return param_2;
}






// 函数: void FUN_1805ae000(longlong param_1,uint64_t param_2,longlong *param_3,int32_t param_4,
void FUN_1805ae000(longlong param_1,uint64_t param_2,longlong *param_3,int32_t param_4,
                  int8_t param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(uint64_t *)(param_1 + 0x10) = param_2;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x38) = param_4;
  *(int8_t *)(param_1 + 0x20) = param_5;
  *(uint64_t *)(param_1 + 0x28) =
       *(uint64_t *)(&system_error_code + (longlong)*(int *)(param_1 + 0x30) * 8);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x38))();
  }
  return;
}






// 函数: void FUN_1805ae0b0(longlong param_1)
void FUN_1805ae0b0(longlong param_1)

{
  longlong *plVar1;
  
  *(uint64_t *)(param_1 + 0x10) = 0;
  plVar1 = *(longlong **)(param_1 + 0x18);
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001805ae0e4. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x38))();
    return;
  }
  return;
}






