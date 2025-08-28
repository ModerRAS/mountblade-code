#include "TaleWorlds.Native.Split.h"

// 05_networking_part043.c - 3 个函数

// 函数: void FUN_180863c8b(ulonglong param_1,int param_2,uint64_t param_3,longlong param_4)
void FUN_180863c8b(ulonglong param_1,int param_2,uint64_t param_3,longlong param_4)

{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int32_t *in_RAX;
  uint64_t *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *pfVar10;
  uint uVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint unaff_EDI;
  ulonglong uVar12;
  int unaff_R13D;
  longlong unaff_R15;
  float fVar13;
  float fVar14;
  int8_t uStackX_20;
  int iStackX_24;
  uint64_t *puStack0000000000000028;
  int32_t *puStack0000000000000030;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  uint64_t in_stack_00000070;
  uint64_t in_stack_00000078;
  
  puStack0000000000000028 = (uint64_t *)(unaff_RBP + -0x5c);
  param_1 = param_1 & 0xffffffff;
  puStack0000000000000030 = in_RAX;
  lVar8 = unaff_R15;
  do {
    if ((unaff_ESI & unaff_EDI) != 0) {
      puVar7 = (uint64_t *)
               FUN_1808d2850((longlong)unaff_R13D * 0x44 + 0x554 + param_4,unaff_RBP + 0x180,
                             unaff_RBP + 0x144,uStackX_20);
      uVar5 = puVar7[1];
      param_4 = *(longlong *)(unaff_RBX + 0x2c8);
      param_2 = iStackX_24 + 1;
      *puStack0000000000000028 = *puVar7;
      puStack0000000000000028[1] = uVar5;
      uVar2 = *(int32_t *)((longlong)puVar7 + 0x14);
      uVar3 = *(int32_t *)(puVar7 + 3);
      uVar4 = *(int32_t *)((longlong)puVar7 + 0x1c);
      *(int32_t *)(puStack0000000000000028 + 2) = *(int32_t *)(puVar7 + 2);
      *(int32_t *)((longlong)puStack0000000000000028 + 0x14) = uVar2;
      *(int32_t *)(puStack0000000000000028 + 3) = uVar3;
      *(int32_t *)((longlong)puStack0000000000000028 + 0x1c) = uVar4;
      uVar2 = *(int32_t *)((longlong)puVar7 + 0x24);
      uVar3 = *(int32_t *)(puVar7 + 5);
      uVar4 = *(int32_t *)((longlong)puVar7 + 0x2c);
      *(int32_t *)(puStack0000000000000028 + 4) = *(int32_t *)(puVar7 + 4);
      *(int32_t *)((longlong)puStack0000000000000028 + 0x24) = uVar2;
      *(int32_t *)(puStack0000000000000028 + 5) = uVar3;
      *(int32_t *)((longlong)puStack0000000000000028 + 0x2c) = uVar4;
      puStack0000000000000028 = puStack0000000000000028 + 6;
      *puStack0000000000000030 = *(int32_t *)(param_4 + 0x590 + param_1);
      puStack0000000000000030 = puStack0000000000000030 + 1;
      iStackX_24 = param_2;
    }
    unaff_R13D = unaff_R13D + 1;
    unaff_EDI = unaff_EDI << 1 | (uint)((int)unaff_EDI < 0);
    param_1 = param_1 + 0x44;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  uVar9 = 0;
  in_stack_00000070 = *(uint64_t *)(unaff_RBP + 0x144);
  in_stack_00000078 = *(uint64_t *)(unaff_RBP + 0x14c);
  *(int *)(unaff_RBP + -0x60) = param_2;
  *(uint64_t *)(unaff_RBP + -0x80) = *(uint64_t *)(unaff_RBP + 0x154);
  *(uint64_t *)(unaff_RBP + -0x78) = *(uint64_t *)(unaff_RBP + 0x15c);
  *(uint64_t *)(unaff_RBP + -0x70) = *(uint64_t *)(unaff_RBP + 0x164);
  *(uint64_t *)(unaff_RBP + -0x68) = *(uint64_t *)(unaff_RBP + 0x16c);
  if (param_2 == 1) {
    in_stack_00000040 = *(uint64_t *)(unaff_RBP + -0x5c);
    in_stack_00000048 = *(uint64_t *)(unaff_RBP + -0x54);
    in_stack_00000050 = *(uint64_t *)(unaff_RBP + -0x4c);
    in_stack_00000058 = *(uint64_t *)(unaff_RBP + -0x44);
    uStack0000000000000060 = *(int32_t *)(unaff_RBP + -0x3c);
    uStack0000000000000064 = *(int32_t *)(unaff_RBP + -0x38);
    uStack0000000000000068 = *(int32_t *)(unaff_RBP + -0x34);
    uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x30);
  }
  else {
    fVar14 = 3.4028235e+38;
    uVar12 = uVar9;
    if (3 < unaff_R15) {
      uVar11 = 1;
      pfVar10 = (float *)(unaff_RBP + -0x5c);
      lVar8 = (unaff_R15 - 4U >> 2) + 1;
      uVar9 = (ulonglong)(uint)((int)lVar8 * 4);
      uVar12 = lVar8 * 4;
      do {
        if (((unaff_ESI & uVar11) != 0) &&
           (fVar13 = pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10 + pfVar10[2] * pfVar10[2],
           fVar13 <= fVar14)) {
          fVar14 = fVar13;
        }
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        if (((unaff_ESI & uVar11) != 0) &&
           (fVar13 = pfVar10[0xc] * pfVar10[0xc] + pfVar10[0xd] * pfVar10[0xd] +
                     pfVar10[0xe] * pfVar10[0xe], fVar13 <= fVar14)) {
          fVar14 = fVar13;
        }
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        if (((unaff_ESI & uVar11) != 0) &&
           (fVar13 = pfVar10[0x18] * pfVar10[0x18] + pfVar10[0x19] * pfVar10[0x19] +
                     pfVar10[0x1a] * pfVar10[0x1a], fVar13 <= fVar14)) {
          fVar14 = fVar13;
        }
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        if (((unaff_ESI & uVar11) != 0) &&
           (fVar13 = pfVar10[0x24] * pfVar10[0x24] + pfVar10[0x25] * pfVar10[0x25] +
                     pfVar10[0x26] * pfVar10[0x26], fVar13 <= fVar14)) {
          fVar14 = fVar13;
        }
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        pfVar10 = pfVar10 + 0x30;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((longlong)uVar12 < unaff_R15) {
      bVar1 = (byte)uVar9 & 0x1f;
      uVar11 = 1 << bVar1 | 1U >> 0x20 - bVar1;
      pfVar10 = (float *)(unaff_RBP + -0x5c + uVar12 * 0x30);
      lVar8 = unaff_R15 - uVar12;
      do {
        if (((unaff_ESI & uVar11) != 0) &&
           (fVar13 = pfVar10[1] * pfVar10[1] + *pfVar10 * *pfVar10 + pfVar10[2] * pfVar10[2],
           fVar13 <= fVar14)) {
          fVar14 = fVar13;
        }
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
        pfVar10 = pfVar10 + 0xc;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uStack0000000000000060 = 0x3f800000;
    uStack0000000000000068 = 0x3f800000;
    in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,SQRT(fVar14));
  }
  for (puVar7 = *(uint64_t **)(unaff_RBX + 0x4c0);
      (*(uint64_t **)(unaff_RBX + 0x4c0) <= puVar7 &&
      (puVar7 < *(uint64_t **)(unaff_RBX + 0x4c0) + *(int *)(unaff_RBX + 0x4c8)));
      puVar7 = puVar7 + 1) {
    iVar6 = FUN_1808b5060(*puVar7,&stack0x00000040,unaff_RBP + -0x60);
    if (iVar6 != 0) goto LAB_180864019;
  }
  iVar6 = FUN_180864850();
  if (iVar6 == 0) {
    *(int32_t *)(unaff_RBX + 0x2f0) = 0xbf800000;
    for (puVar7 = *(uint64_t **)(unaff_RBX + 0x270);
        (*(uint64_t **)(unaff_RBX + 0x270) <= puVar7 &&
        (puVar7 < *(uint64_t **)(unaff_RBX + 0x270) + *(int *)(unaff_RBX + 0x278)));
        puVar7 = puVar7 + 1) {
      iVar6 = FUN_1808d6e30(*puVar7);
      if (iVar6 != 0) goto LAB_180864019;
    }
    iVar6 = FUN_1808d15f0(unaff_RBX + 0x378,unaff_RBX + 0x28,*(int8_t *)(unaff_RBX + 0x5d));
    if (iVar6 == 0) {
      iVar6 = FUN_1808d15f0(unaff_RBX + 0x3f8,unaff_RBX + 0x28,*(int8_t *)(unaff_RBX + 0x5d));
      if (iVar6 == 0) {
        *(int8_t *)(unaff_RBX + 0x5c) = 0;
      }
    }
  }
LAB_180864019:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1b0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180863d75(int32_t param_1,int param_2,uint64_t param_3)
void FUN_180863d75(int32_t param_1,int param_2,uint64_t param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong in_RCX;
  float *pfVar4;
  uint64_t *puVar5;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint unaff_EDI;
  ulonglong uVar7;
  longlong unaff_R15;
  uint64_t in_XMM1_Qa;
  int32_t in_XMM1_Dc;
  int32_t in_XMM1_Dd;
  float fVar8;
  int32_t in_XMM2_Dc;
  int32_t in_XMM2_Dd;
  float fVar9;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  uint64_t in_stack_00000050;
  uint64_t in_stack_00000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  int32_t uStack0000000000000070;
  
  *(int *)(unaff_RBP + -0x60) = param_2;
  *(int *)(unaff_RBP + -0x80) = (int)in_XMM1_Qa;
  *(int *)(unaff_RBP + -0x7c) = (int)((ulonglong)in_XMM1_Qa >> 0x20);
  *(int32_t *)(unaff_RBP + -0x78) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + -0x74) = in_XMM1_Dd;
  *(int *)(unaff_RBP + -0x70) = (int)param_3;
  *(int *)(unaff_RBP + -0x6c) = (int)((ulonglong)param_3 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x68) = in_XMM2_Dc;
  *(int32_t *)(unaff_RBP + -100) = in_XMM2_Dd;
  if (param_2 == 1) {
    in_stack_00000040 = *(uint64_t *)(unaff_RBP + -0x5c);
    in_stack_00000048 = *(uint64_t *)(unaff_RBP + -0x54);
    in_stack_00000050 = *(uint64_t *)(unaff_RBP + -0x4c);
    in_stack_00000058 = *(uint64_t *)(unaff_RBP + -0x44);
    uStack0000000000000060 = *(int32_t *)(unaff_RBP + -0x3c);
    uStack0000000000000064 = *(int32_t *)(unaff_RBP + -0x38);
    uStack0000000000000068 = *(int32_t *)(unaff_RBP + -0x34);
    uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x30);
  }
  else {
    fVar9 = 3.4028235e+38;
    uVar7 = in_RCX;
    if (3 < unaff_R15) {
      pfVar4 = (float *)(unaff_RBP + -0x5c);
      lVar3 = (unaff_R15 - 4U >> 2) + 1;
      in_RCX = (ulonglong)(uint)((int)lVar3 * 4);
      uVar7 = lVar3 * 4;
      uVar6 = unaff_EDI;
      do {
        if (((unaff_ESI & uVar6) != 0) &&
           (fVar8 = pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4 + pfVar4[2] * pfVar4[2],
           fVar8 <= fVar9)) {
          fVar9 = fVar8;
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        if (((unaff_ESI & uVar6) != 0) &&
           (fVar8 = pfVar4[0xc] * pfVar4[0xc] + pfVar4[0xd] * pfVar4[0xd] +
                    pfVar4[0xe] * pfVar4[0xe], fVar8 <= fVar9)) {
          fVar9 = fVar8;
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        if (((unaff_ESI & uVar6) != 0) &&
           (fVar8 = pfVar4[0x18] * pfVar4[0x18] + pfVar4[0x19] * pfVar4[0x19] +
                    pfVar4[0x1a] * pfVar4[0x1a], fVar8 <= fVar9)) {
          fVar9 = fVar8;
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        if (((unaff_ESI & uVar6) != 0) &&
           (fVar8 = pfVar4[0x24] * pfVar4[0x24] + pfVar4[0x25] * pfVar4[0x25] +
                    pfVar4[0x26] * pfVar4[0x26], fVar8 <= fVar9)) {
          fVar9 = fVar8;
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        pfVar4 = pfVar4 + 0x30;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if ((longlong)uVar7 < unaff_R15) {
      bVar1 = (byte)in_RCX & 0x1f;
      uVar6 = unaff_EDI << bVar1 | unaff_EDI >> 0x20 - bVar1;
      pfVar4 = (float *)(unaff_RBP + -0x5c + uVar7 * 0x30);
      lVar3 = unaff_R15 - uVar7;
      do {
        if (((unaff_ESI & uVar6) != 0) &&
           (fVar8 = pfVar4[1] * pfVar4[1] + *pfVar4 * *pfVar4 + pfVar4[2] * pfVar4[2],
           fVar8 <= fVar9)) {
          fVar9 = fVar8;
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        pfVar4 = pfVar4 + 0xc;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uStack0000000000000060 = 0x3f800000;
    uStack0000000000000068 = 0x3f800000;
    in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,SQRT(fVar9));
  }
  uStack0000000000000070 = param_1;
  for (puVar5 = *(uint64_t **)(unaff_RBX + 0x4c0);
      (*(uint64_t **)(unaff_RBX + 0x4c0) <= puVar5 &&
      (puVar5 < *(uint64_t **)(unaff_RBX + 0x4c0) + *(int *)(unaff_RBX + 0x4c8)));
      puVar5 = puVar5 + 1) {
    iVar2 = FUN_1808b5060(*puVar5,&stack0x00000040,unaff_RBP + -0x60);
    if (iVar2 != 0) goto LAB_180864019;
  }
  iVar2 = FUN_180864850();
  if (iVar2 == 0) {
    *(int32_t *)(unaff_RBX + 0x2f0) = 0xbf800000;
    for (puVar5 = *(uint64_t **)(unaff_RBX + 0x270);
        (*(uint64_t **)(unaff_RBX + 0x270) <= puVar5 &&
        (puVar5 < *(uint64_t **)(unaff_RBX + 0x270) + *(int *)(unaff_RBX + 0x278)));
        puVar5 = puVar5 + 1) {
      iVar2 = FUN_1808d6e30(*puVar5);
      if (iVar2 != 0) goto LAB_180864019;
    }
    iVar2 = FUN_1808d15f0(unaff_RBX + 0x378);
    if (iVar2 == 0) {
      iVar2 = FUN_1808d15f0(unaff_RBX + 0x3f8);
      if (iVar2 == 0) {
        *(int8_t *)(unaff_RBX + 0x5c) = 0;
      }
    }
  }
LAB_180864019:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1b0) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180863d92(void)
void FUN_180863d92(void)

{
  int iVar1;
  uint64_t *puVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t uStack0000000000000040;
  uint64_t uStack0000000000000048;
  uint64_t uStack0000000000000050;
  uint64_t uStack0000000000000058;
  int32_t uStack0000000000000060;
  int32_t uStack0000000000000064;
  int32_t uStack0000000000000068;
  int32_t uStack000000000000006c;
  
  uStack0000000000000040 = *(uint64_t *)(unaff_RBP + -0x5c);
  uStack0000000000000048 = *(uint64_t *)(unaff_RBP + -0x54);
  uStack0000000000000050 = *(uint64_t *)(unaff_RBP + -0x4c);
  uStack0000000000000058 = *(uint64_t *)(unaff_RBP + -0x44);
  uStack0000000000000060 = *(int32_t *)(unaff_RBP + -0x3c);
  uStack0000000000000064 = *(int32_t *)(unaff_RBP + -0x38);
  uStack0000000000000068 = *(int32_t *)(unaff_RBP + -0x34);
  uStack000000000000006c = *(int32_t *)(unaff_RBP + -0x30);
  for (puVar2 = *(uint64_t **)(unaff_RBX + 0x4c0);
      (*(uint64_t **)(unaff_RBX + 0x4c0) <= puVar2 &&
      (puVar2 < *(uint64_t **)(unaff_RBX + 0x4c0) + *(int *)(unaff_RBX + 0x4c8)));
      puVar2 = puVar2 + 1) {
    iVar1 = FUN_1808b5060(*puVar2,&stack0x00000040,unaff_RBP + -0x60);
    if (iVar1 != 0) goto LAB_180864019;
  }
  iVar1 = FUN_180864850();
  if (iVar1 == 0) {
    *(int32_t *)(unaff_RBX + 0x2f0) = 0xbf800000;
    for (puVar2 = *(uint64_t **)(unaff_RBX + 0x270);
        (*(uint64_t **)(unaff_RBX + 0x270) <= puVar2 &&
        (puVar2 < *(uint64_t **)(unaff_RBX + 0x270) + *(int *)(unaff_RBX + 0x278)));
        puVar2 = puVar2 + 1) {
      iVar1 = FUN_1808d6e30(*puVar2);
      if (iVar1 != 0) goto LAB_180864019;
    }
    iVar1 = FUN_1808d15f0(unaff_RBX + 0x378);
    if (iVar1 == 0) {
      iVar1 = FUN_1808d15f0(unaff_RBX + 0x3f8);
      if (iVar1 == 0) {
        *(int8_t *)(unaff_RBX + 0x5c) = 0;
      }
    }
  }
LAB_180864019:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x1b0) ^ (ulonglong)&stack0x00000000);
}





