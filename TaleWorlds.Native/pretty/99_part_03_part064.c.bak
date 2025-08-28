#include "TaleWorlds.Native.Split.h"

// 99_part_03_part064.c - 7 个函数

// 函数: void FUN_18023690b(void)
void FUN_18023690b(void)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  bool bVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  void *puVar12;
  int *piVar13;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  uint64_t uVar14;
  int unaff_R12D;
  uint64_t unaff_R14;
  uint uVar15;
  uint64_t uVar16;
  float fVar17;
  float unaff_XMM8_Da;
  byte bStackX_20;
  uint uStack0000000000000048;
  int64_t in_stack_00000058;
  int64_t in_stack_00000068;
  int64_t in_stack_00000070;
  int64_t in_stack_00000078;
  
  lVar3 = *(int64_t *)(unaff_RBP + -0x78);
  if (*(int *)(unaff_RDI + 0x10) == *(int *)(lVar3 + 200)) {
    uVar16 = unaff_R14 & 0xffffffff;
    uVar14 = unaff_R14;
    if (0 < *(int *)(lVar3 + 200)) {
      do {
        lVar11 = *(int64_t *)(lVar3 + 0xd0);
        lVar4 = unaff_RSI[1];
        piVar13 = (int *)(lVar4 + 200);
        uVar7 = *(uint64_t *)(uVar14 + lVar11);
        uVar8 = ((uint64_t *)(uVar14 + lVar11))[1];
        iVar10 = *piVar13;
        iVar9 = *(int *)(lVar4 + 0xcc);
        uStack0000000000000048 =
             CONCAT13(*(int8_t *)(uVar14 + 0x13 + lVar11),
                      CONCAT12(*(int8_t *)(uVar14 + 0x12 + lVar11),
                               CONCAT11(*(int8_t *)(uVar14 + 0x11 + lVar11),
                                        *(int8_t *)(uVar14 + 0x10 + lVar11))));
        if (iVar9 <= iVar10) {
          if (iVar9 < 2) {
            iVar9 = 8;
          }
          else {
            iVar9 = (iVar9 >> 1) + iVar9;
          }
          *(int *)(lVar4 + 0xcc) = iVar9;
          FUN_180085e30(piVar13);
          iVar10 = *piVar13;
        }
        lVar11 = *(int64_t *)(lVar4 + 0xd0);
        uVar15 = (int)uVar16 + 1;
        uVar16 = (uint64_t)uVar15;
        puVar1 = (uint64_t *)(lVar11 + (int64_t)iVar10 * 0x14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(uint *)(lVar11 + 0x10 + (int64_t)iVar10 * 0x14) = uStack0000000000000048;
        *piVar13 = *piVar13 + 1;
        uVar14 = uVar14 + 0x14;
      } while ((int)uVar15 < *(int *)(lVar3 + 200));
    }
  }
  else {
    if (bStackX_20 == 0xff) {
      if (*(int64_t *)(in_stack_00000068 + 0x1b0) == 0) {
        in_stack_00000068 = in_stack_00000068 + 0x10;
      }
      else {
        in_stack_00000068 = func_0x000180079240();
      }
      puVar12 = &system_buffer_ptr;
      if (*(void **)(in_stack_00000068 + 8) != (void *)0x0) {
        puVar12 = *(void **)(in_stack_00000068 + 8);
      }
      FUN_180627020(&unknown_var_8000_ptr,puVar12);
      bStackX_20 = 0;
    }
    if ((int)*(char *)(*unaff_RSI + 0xf6) < (char)bStackX_20 + 1) {
      *(byte *)(*unaff_RSI + 0xf6) = bStackX_20 + 1;
    }
    uVar14 = unaff_R14 & 0xffffffff;
    if (0 < *(int *)(unaff_RDI + 0x10)) {
      do {
        lVar3 = unaff_RSI[1];
        piVar13 = (int *)(lVar3 + 200);
        iVar10 = *(int *)(lVar3 + 0xcc);
        iVar9 = *piVar13;
        uStack0000000000000048 = (uint)bStackX_20;
        if (iVar10 <= iVar9) {
          if (iVar10 < 2) {
            iVar10 = 8;
          }
          else {
            iVar10 = (iVar10 >> 1) + iVar10;
          }
          *(int *)(lVar3 + 0xcc) = iVar10;
          FUN_180085e30(piVar13);
          iVar9 = *piVar13;
        }
        lVar3 = *(int64_t *)(lVar3 + 0xd0);
        uVar15 = (int)uVar14 + 1;
        uVar14 = (uint64_t)uVar15;
        puVar2 = (int32_t *)(lVar3 + (int64_t)iVar9 * 0x14);
        *puVar2 = 0x3f800000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(uint *)(lVar3 + 0x10 + (int64_t)iVar9 * 0x14) = uStack0000000000000048;
        *piVar13 = *piVar13 + 1;
      } while ((int)uVar15 < *(int *)(unaff_RDI + 0x10));
    }
  }
  bVar5 = false;
  bVar6 = false;
  fVar17 = *(float *)(unaff_RBP + -0x50) * *(float *)(unaff_RBP + -0x38);
  if ((*(char *)(*unaff_RSI + 0xff) == '\0') ||
     (*(char *)(*(int64_t *)(unaff_RBP + 0x30) + 0xff) != '\0')) {
    if (unaff_XMM8_Da <=
        (*(float *)(unaff_RBP + -0x40) * *(float *)(unaff_RBP + -0x48) - fVar17) *
        *(float *)(unaff_RBP + -0x2c) +
        (*(float *)(unaff_RBP + -0x4c) * *(float *)(unaff_RBP + -0x38) -
        *(float *)(unaff_RBP + -0x48) * *(float *)(unaff_RBP + -0x3c)) *
        *(float *)(unaff_RBP + -0x30) +
        (*(float *)(unaff_RBP + -0x50) * *(float *)(unaff_RBP + -0x3c) -
        *(float *)(unaff_RBP + -0x40) * *(float *)(unaff_RBP + -0x4c)) *
        *(float *)(unaff_RBP + -0x28)) {
      bVar5 = true;
    }
    else {
      bVar6 = true;
    }
  }
  else {
    bVar6 = true;
    bVar5 = true;
  }
  if (*(int *)(in_stack_00000058 + 0x88) != 0) {
    do {
      lVar3 = *(int64_t *)(in_stack_00000058 + 0x90);
      lVar11 = (int64_t)(int)unaff_R14;
      if (bVar5) {
        fVar17 = (float)FUN_180235410(fVar17,*(int *)(lVar3 + lVar11 * 0xc) + unaff_R12D,
                                      *(int *)(lVar3 + 4 + lVar11 * 0xc) + unaff_R12D,
                                      *(int *)(lVar3 + 8 + lVar11 * 0xc) + unaff_R12D);
      }
      if (bVar6) {
        fVar17 = (float)FUN_180235410(fVar17,*(int *)(lVar3 + lVar11 * 0xc) + unaff_R12D,
                                      *(int *)(lVar3 + 8 + lVar11 * 0xc) + unaff_R12D,
                                      *(int *)(lVar3 + 4 + lVar11 * 0xc) + unaff_R12D);
      }
      uVar15 = (int)unaff_R14 + 1;
      unaff_R14 = (uint64_t)uVar15;
    } while (uVar15 < *(uint *)(in_stack_00000058 + 0x88));
  }
  lVar3 = *(int64_t *)(unaff_RBP + 0x38);
  *(int16_t *)(unaff_RSI + 6) = 0x101;
  *(int8_t *)((int64_t)unaff_RSI + 0x32) = 1;
  if (lVar3 == 0) {
    if (in_stack_00000070 != 0) {
      FUN_18007f840(in_stack_00000070);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(in_stack_00000070);
    }
    if (in_stack_00000078 != 0) {
      FUN_18007f840(in_stack_00000078);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(in_stack_00000078);
    }
    lVar3 = *(int64_t *)(unaff_RBP + -0x80);
    if (lVar3 != 0) {
      FUN_18007f840(lVar3);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar3);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x140) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180236b64(char param_1)
void FUN_180236b64(char param_1)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  char unaff_R13B;
  uint unaff_R14D;
  char unaff_R15B;
  int64_t in_stack_00000058;
  int64_t in_stack_00000070;
  int64_t in_stack_00000078;
  
  if (*(char *)(*(int64_t *)(unaff_RBP + 0x30) + 0xff) == unaff_R15B) {
    unaff_R15B = '\x01';
    unaff_R13B = '\x01';
  }
  else if (param_1 == '\0') {
    unaff_R13B = '\x01';
  }
  else {
    unaff_R15B = '\x01';
  }
  if (*(int *)(in_stack_00000058 + 0x88) != 0) {
    do {
      if (unaff_R13B != '\0') {
        FUN_180235410();
      }
      if (unaff_R15B != '\0') {
        FUN_180235410();
      }
      unaff_R14D = unaff_R14D + 1;
    } while (unaff_R14D < *(uint *)(in_stack_00000058 + 0x88));
  }
  lVar1 = *(int64_t *)(unaff_RBP + 0x38);
  *(int16_t *)(unaff_RSI + 0x30) = 0x101;
  *(int8_t *)(unaff_RSI + 0x32) = 1;
  if (lVar1 == 0) {
    if (in_stack_00000070 != 0) {
      FUN_18007f840(in_stack_00000070);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(in_stack_00000070);
    }
    if (in_stack_00000078 != 0) {
      FUN_18007f840(in_stack_00000078);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(in_stack_00000078);
    }
    lVar1 = *(int64_t *)(unaff_RBP + -0x80);
    if (lVar1 != 0) {
      FUN_18007f840(lVar1);
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(lVar1);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x140) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180236c4b(void)
void FUN_180236c4b(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t in_stack_00000070;
  int64_t in_stack_00000078;
  
  if (in_stack_00000070 != 0) {
    FUN_18007f840(in_stack_00000070);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(in_stack_00000070);
  }
  if (in_stack_00000078 != 0) {
    FUN_18007f840(in_stack_00000078);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(in_stack_00000078);
  }
  lVar1 = *(int64_t *)(unaff_RBP + -0x80);
  if (lVar1 != 0) {
    FUN_18007f840(lVar1);
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(uint64_t *)(unaff_RBP + 0x140) ^ (uint64_t)&stack0x00000000);
}






// 函数: void FUN_180236e60(int64_t param_1,float *param_2)
void FUN_180236e60(int64_t param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  
  lVar10 = *(int64_t *)(param_1 + 8);
  uVar13 = 0;
  uVar6 = uVar13;
  if (*(int *)(lVar10 + 0x60) == 0) {
    *(int8_t *)(param_1 + 0x30) = 1;
    *(int8_t *)(param_1 + 0x32) = 1;
    return;
  }
  do {
    lVar4 = *(int64_t *)(lVar10 + 0x18);
    fVar1 = *param_2;
    lVar10 = *(int64_t *)(lVar10 + 0x68);
    lVar11 = (int64_t)(int)uVar6;
    lVar5 = lVar11 * 0x5c;
    fVar2 = *(float *)(lVar10 + 0x38 + lVar5);
    fVar3 = *(float *)(lVar10 + 0x3c + lVar5);
    lVar9 = (int64_t)*(int *)(lVar10 + lVar5);
    *(float *)(lVar4 + lVar9 * 0x10) =
         fVar1 * *(float *)(lVar10 + 0x34 + lVar5) + *(float *)(lVar4 + lVar9 * 0x10);
    *(float *)(lVar4 + 4 + lVar9 * 0x10) = fVar2 * fVar1 + *(float *)(lVar4 + 4 + lVar9 * 0x10);
    *(float *)(lVar4 + 8 + lVar9 * 0x10) = fVar3 * fVar1 + *(float *)(lVar4 + 8 + lVar9 * 0x10);
    lVar10 = *(int64_t *)(param_1 + 8);
    if (*(int *)(lVar10 + 0x38) != 0) {
      lVar4 = *(int64_t *)(lVar10 + 0x40);
      fVar1 = *param_2;
      lVar10 = *(int64_t *)(lVar10 + 0x68);
      fVar2 = *(float *)(lVar10 + 0x38 + lVar5);
      fVar3 = *(float *)(lVar10 + 0x3c + lVar5);
      *(float *)(lVar4 + lVar9 * 0x10) =
           fVar1 * *(float *)(lVar10 + 0x34 + lVar5) + *(float *)(lVar4 + lVar9 * 0x10);
      *(float *)(lVar4 + 4 + lVar9 * 0x10) = fVar2 * fVar1 + *(float *)(lVar4 + 4 + lVar9 * 0x10);
      *(float *)(lVar4 + 8 + lVar9 * 0x10) = fVar3 * fVar1 + *(float *)(lVar4 + 8 + lVar9 * 0x10);
      lVar10 = *(int64_t *)(param_1 + 8);
    }
    uVar8 = uVar13;
    uVar12 = uVar13;
    if (*(short *)(lVar10 + 0xc0) != 0) {
      do {
        fVar1 = *param_2;
        uVar7 = (int)uVar8 + 1;
        lVar10 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0xb0);
        lVar4 = *(int64_t *)(lVar10 + 8 + uVar12);
        lVar10 = *(int64_t *)(lVar10 + 0x30 + uVar12);
        fVar2 = *(float *)(lVar10 + 4 + lVar11 * 0x10);
        fVar3 = *(float *)(lVar10 + 8 + lVar11 * 0x10);
        *(float *)(lVar4 + lVar9 * 0x10) =
             fVar1 * *(float *)(lVar10 + lVar11 * 0x10) + *(float *)(lVar4 + lVar9 * 0x10);
        *(float *)(lVar4 + 4 + lVar9 * 0x10) = fVar2 * fVar1 + *(float *)(lVar4 + 4 + lVar9 * 0x10);
        *(float *)(lVar4 + 8 + lVar9 * 0x10) = fVar3 * fVar1 + *(float *)(lVar4 + 8 + lVar9 * 0x10);
        lVar10 = *(int64_t *)(param_1 + 8);
        uVar8 = (uint64_t)uVar7;
        uVar12 = uVar12 + 0x50;
      } while ((int)uVar7 < (int)(uint)*(ushort *)(lVar10 + 0xc0));
    }
    uVar7 = (int)uVar6 + 1;
    uVar6 = (uint64_t)uVar7;
  } while (uVar7 < *(uint *)(lVar10 + 0x60));
  *(int8_t *)(param_1 + 0x30) = 1;
  *(int8_t *)(param_1 + 0x32) = 1;
  return;
}






// 函数: void FUN_180236e8b(void)
void FUN_180236e8b(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t unaff_RBX;
  float *unaff_RBP;
  uint unaff_ESI;
  uint uVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t in_R9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t unaff_R14;
  
  do {
    lVar4 = *(int64_t *)(in_R9 + 0x18);
    fVar1 = *unaff_RBP;
    lVar5 = *(int64_t *)(in_R9 + 0x68);
    lVar10 = (int64_t)(int)unaff_ESI;
    lVar6 = lVar10 * 0x5c;
    fVar2 = *(float *)(lVar5 + 0x38 + lVar6);
    fVar3 = *(float *)(lVar5 + 0x3c + lVar6);
    lVar9 = (int64_t)*(int *)(lVar5 + lVar6);
    *(float *)(lVar4 + lVar9 * 0x10) =
         fVar1 * *(float *)(lVar5 + 0x34 + lVar6) + *(float *)(lVar4 + lVar9 * 0x10);
    *(float *)(lVar4 + 4 + lVar9 * 0x10) = fVar2 * fVar1 + *(float *)(lVar4 + 4 + lVar9 * 0x10);
    *(float *)(lVar4 + 8 + lVar9 * 0x10) = fVar3 * fVar1 + *(float *)(lVar4 + 8 + lVar9 * 0x10);
    in_R9 = *(int64_t *)(unaff_RBX + 8);
    if (*(int *)(in_R9 + 0x38) != (int)unaff_R14) {
      lVar4 = *(int64_t *)(in_R9 + 0x40);
      fVar1 = *unaff_RBP;
      lVar5 = *(int64_t *)(in_R9 + 0x68);
      fVar2 = *(float *)(lVar5 + 0x38 + lVar6);
      fVar3 = *(float *)(lVar5 + 0x3c + lVar6);
      *(float *)(lVar4 + lVar9 * 0x10) =
           fVar1 * *(float *)(lVar5 + 0x34 + lVar6) + *(float *)(lVar4 + lVar9 * 0x10);
      *(float *)(lVar4 + 4 + lVar9 * 0x10) = fVar2 * fVar1 + *(float *)(lVar4 + 4 + lVar9 * 0x10);
      *(float *)(lVar4 + 8 + lVar9 * 0x10) = fVar3 * fVar1 + *(float *)(lVar4 + 8 + lVar9 * 0x10);
      in_R9 = *(int64_t *)(unaff_RBX + 8);
    }
    uVar8 = unaff_R14 & 0xffffffff;
    uVar11 = unaff_R14;
    if ((ushort)unaff_R14 < *(ushort *)(in_R9 + 0xc0)) {
      do {
        fVar1 = *unaff_RBP;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (uint64_t)uVar7;
        lVar4 = *(int64_t *)(*(int64_t *)(unaff_RBX + 8) + 0xb0);
        lVar5 = *(int64_t *)(lVar4 + 8 + uVar11);
        lVar4 = *(int64_t *)(lVar4 + 0x30 + uVar11);
        fVar2 = *(float *)(lVar4 + 4 + lVar10 * 0x10);
        fVar3 = *(float *)(lVar4 + 8 + lVar10 * 0x10);
        *(float *)(lVar5 + lVar9 * 0x10) =
             fVar1 * *(float *)(lVar4 + lVar10 * 0x10) + *(float *)(lVar5 + lVar9 * 0x10);
        *(float *)(lVar5 + 4 + lVar9 * 0x10) = fVar2 * fVar1 + *(float *)(lVar5 + 4 + lVar9 * 0x10);
        *(float *)(lVar5 + 8 + lVar9 * 0x10) = fVar3 * fVar1 + *(float *)(lVar5 + 8 + lVar9 * 0x10);
        in_R9 = *(int64_t *)(unaff_RBX + 8);
        uVar11 = uVar11 + 0x50;
      } while ((int)uVar7 < (int)(uint)*(ushort *)(in_R9 + 0xc0));
    }
    unaff_ESI = unaff_ESI + 1;
  } while (unaff_ESI < *(uint *)(in_R9 + 0x60));
  *(int8_t *)(unaff_RBX + 0x30) = 1;
  *(int8_t *)(unaff_RBX + 0x32) = 1;
  return;
}






// 函数: void FUN_180237012(int64_t param_1)
void FUN_180237012(int64_t param_1)

{
  *(int8_t *)(param_1 + 0x30) = 1;
  *(int8_t *)(param_1 + 0x32) = 1;
  return;
}






// 函数: void FUN_180237030(int64_t param_1,float *param_2,char param_3,float param_4)
void FUN_180237030(int64_t param_1,float *param_2,char param_3,float param_4)

{
  int32_t uVar1;
  bool bVar2;
  uint uVar3;
  uint64_t uVar4;
  float *pfVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint uVar10;
  uint uVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int8_t auVar17 [16];
  float fVar18;
  
  lVar9 = *(int64_t *)(param_1 + 8);
  uVar10 = 0;
  lVar6 = 0;
  lVar12 = (int64_t)*(int *)(lVar9 + 0x10);
  if (3 < lVar12) {
    lVar7 = 0;
    lVar8 = (lVar12 - 4U >> 2) + 1;
    lVar6 = lVar8 * 4;
    do {
      lVar9 = *(int64_t *)(lVar9 + 0x18);
      *(float *)(lVar7 + lVar9) = *(float *)(lVar7 + lVar9) * *param_2;
      *(float *)(lVar7 + 4 + lVar9) = *(float *)(lVar7 + 4 + lVar9) * param_2[1];
      *(float *)(lVar7 + 8 + lVar9) = *(float *)(lVar7 + 8 + lVar9) * param_2[2];
      lVar9 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar9 + 0x38) != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x40);
        *(float *)(lVar7 + lVar9) = *param_2 * *(float *)(lVar7 + lVar9);
        *(float *)(lVar7 + 4 + lVar9) = param_2[1] * *(float *)(lVar7 + 4 + lVar9);
        *(float *)(lVar7 + 8 + lVar9) = *(float *)(lVar7 + 8 + lVar9) * param_2[2];
        lVar9 = *(int64_t *)(param_1 + 8);
      }
      lVar9 = *(int64_t *)(lVar9 + 0x18);
      *(float *)(lVar9 + 0x10 + lVar7) = *(float *)(lVar9 + 0x10 + lVar7) * *param_2;
      *(float *)(lVar9 + 0x14 + lVar7) = *(float *)(lVar9 + 0x14 + lVar7) * param_2[1];
      *(float *)(lVar9 + 0x18 + lVar7) = *(float *)(lVar9 + 0x18 + lVar7) * param_2[2];
      lVar9 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar9 + 0x38) != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x40);
        *(float *)(lVar9 + 0x10 + lVar7) = *param_2 * *(float *)(lVar9 + 0x10 + lVar7);
        *(float *)(lVar9 + 0x14 + lVar7) = param_2[1] * *(float *)(lVar9 + 0x14 + lVar7);
        *(float *)(lVar9 + 0x18 + lVar7) = *(float *)(lVar9 + 0x18 + lVar7) * param_2[2];
        lVar9 = *(int64_t *)(param_1 + 8);
      }
      lVar9 = *(int64_t *)(lVar9 + 0x18);
      *(float *)(lVar7 + 0x20 + lVar9) = *(float *)(lVar7 + 0x20 + lVar9) * *param_2;
      *(float *)(lVar7 + 0x24 + lVar9) = *(float *)(lVar7 + 0x24 + lVar9) * param_2[1];
      *(float *)(lVar7 + 0x28 + lVar9) = *(float *)(lVar7 + 0x28 + lVar9) * param_2[2];
      lVar9 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar9 + 0x38) != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x40);
        *(float *)(lVar7 + 0x20 + lVar9) = *param_2 * *(float *)(lVar7 + 0x20 + lVar9);
        *(float *)(lVar7 + 0x24 + lVar9) = param_2[1] * *(float *)(lVar7 + 0x24 + lVar9);
        *(float *)(lVar7 + 0x28 + lVar9) = *(float *)(lVar7 + 0x28 + lVar9) * param_2[2];
        lVar9 = *(int64_t *)(param_1 + 8);
      }
      lVar9 = *(int64_t *)(lVar9 + 0x18);
      *(float *)(lVar7 + 0x30 + lVar9) = *(float *)(lVar7 + 0x30 + lVar9) * *param_2;
      *(float *)(lVar7 + 0x34 + lVar9) = *(float *)(lVar7 + 0x34 + lVar9) * param_2[1];
      *(float *)(lVar7 + 0x38 + lVar9) = *(float *)(lVar7 + 0x38 + lVar9) * param_2[2];
      lVar9 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar9 + 0x38) != 0) {
        lVar9 = *(int64_t *)(lVar9 + 0x40);
        *(float *)(lVar7 + 0x30 + lVar9) = *param_2 * *(float *)(lVar7 + 0x30 + lVar9);
        *(float *)(lVar7 + 0x34 + lVar9) = param_2[1] * *(float *)(lVar7 + 0x34 + lVar9);
        *(float *)(lVar7 + 0x38 + lVar9) = *(float *)(lVar7 + 0x38 + lVar9) * param_2[2];
        lVar9 = *(int64_t *)(param_1 + 8);
      }
      lVar7 = lVar7 + 0x40;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if (lVar6 < lVar12) {
    lVar7 = lVar6 << 4;
    lVar12 = lVar12 - lVar6;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x18);
      *(float *)(lVar7 + lVar6) = *(float *)(lVar7 + lVar6) * *param_2;
      *(float *)(lVar7 + 4 + lVar6) = *(float *)(lVar7 + 4 + lVar6) * param_2[1];
      *(float *)(lVar7 + 8 + lVar6) = *(float *)(lVar7 + 8 + lVar6) * param_2[2];
      lVar9 = *(int64_t *)(param_1 + 8);
      if (*(int *)(lVar9 + 0x38) != 0) {
        lVar6 = *(int64_t *)(lVar9 + 0x40);
        *(float *)(lVar7 + lVar6) = *param_2 * *(float *)(lVar7 + lVar6);
        *(float *)(lVar7 + 4 + lVar6) = param_2[1] * *(float *)(lVar7 + 4 + lVar6);
        *(float *)(lVar7 + 8 + lVar6) = *(float *)(lVar7 + 8 + lVar6) * param_2[2];
        lVar9 = *(int64_t *)(param_1 + 8);
      }
      lVar7 = lVar7 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if ((param_3 != '\0') && (*(int *)(lVar9 + 0x60) == 4)) {
    lVar6 = *(int64_t *)(lVar9 + 0x68);
    param_4 = (*(float *)(lVar6 + 0x48) - *(float *)(lVar6 + 0x100)) * param_4;
    *(float *)(lVar6 + 0x48) = param_4 + *(float *)(lVar6 + 0x100);
    lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
    *(float *)(lVar6 + 0xa4) = param_4 + *(float *)(lVar6 + 0x100);
    lVar9 = *(int64_t *)(param_1 + 8);
  }
  uVar11 = 0;
  if (*(short *)(lVar9 + 0xc0) != 0) {
    do {
      lVar6 = *(int64_t *)(lVar9 + 0xb0);
      uVar4 = (uint64_t)uVar11;
      pfVar5 = *(float **)(lVar6 + 8 + uVar4 * 0x50);
      *(float **)(lVar6 + 0x10 + uVar4 * 0x50) = pfVar5;
      *(float **)(lVar6 + 0x18 + uVar4 * 0x50) =
           pfVar5 + (int64_t)*(int *)(lVar6 + uVar4 * 0x50) * 4;
      for (; lVar9 = *(int64_t *)(param_1 + 8),
          *(float **)(*(int64_t *)(lVar9 + 0xb0) + 0x18 + uVar4 * 0x50) != pfVar5;
          pfVar5 = pfVar5 + 4) {
        *pfVar5 = *param_2 * *pfVar5;
        pfVar5[1] = param_2[1] * pfVar5[1];
        pfVar5[2] = param_2[2] * pfVar5[2];
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(ushort *)(lVar9 + 0xc0));
  }
  uVar11 = 0;
  if (*(int *)(lVar9 + 0x60) != 0) {
    do {
      lVar9 = (int64_t)(int)uVar11 * 0x5c;
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar6 + 0x34 + lVar9) = *(float *)(lVar6 + 0x34 + lVar9) * *param_2;
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar6 + 0x38 + lVar9) = param_2[1] * *(float *)(lVar6 + 0x38 + lVar9);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar6 + 0x3c + lVar9) = param_2[2] * *(float *)(lVar6 + 0x3c + lVar9);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar13 = *(float *)(lVar6 + 0x38 + lVar9);
      fVar15 = *(float *)(lVar6 + 0x34 + lVar9);
      fVar16 = *(float *)(lVar6 + 0x3c + lVar9);
      fVar14 = fVar15 * fVar15 + fVar13 * fVar13 + fVar16 * fVar16;
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar18 = auVar17._0_4_;
      fVar14 = fVar18 * 0.5 * (3.0 - fVar14 * fVar18 * fVar18);
      *(float *)(lVar6 + 0x34 + lVar9) = fVar15 * fVar14;
      *(float *)(lVar6 + 0x38 + lVar9) = fVar13 * fVar14;
      *(float *)(lVar6 + 0x3c + lVar9) = fVar16 * fVar14;
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar6 + 4 + lVar9) = *param_2 * *(float *)(lVar6 + 4 + lVar9);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar6 + 8 + lVar9) = param_2[1] * *(float *)(lVar6 + 8 + lVar9);
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      *(float *)(lVar6 + 0xc + lVar9) = *(float *)(lVar6 + 0xc + lVar9) * param_2[2];
      lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar13 = *(float *)(lVar6 + 8 + lVar9);
      fVar15 = *(float *)(lVar6 + 4 + lVar9);
      fVar16 = *(float *)(lVar6 + 0xc + lVar9);
      fVar14 = fVar15 * fVar15 + fVar13 * fVar13 + fVar16 * fVar16;
      auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar18 = auVar17._0_4_;
      uVar11 = uVar11 + 1;
      fVar14 = fVar18 * 0.5 * (3.0 - fVar14 * fVar18 * fVar18);
      *(float *)(lVar6 + 4 + lVar9) = fVar15 * fVar14;
      *(float *)(lVar6 + 8 + lVar9) = fVar13 * fVar14;
      *(float *)(lVar6 + 0xc + lVar9) = fVar16 * fVar14;
      lVar9 = *(int64_t *)(param_1 + 8);
    } while (uVar11 < *(uint *)(lVar9 + 0x60));
  }
  bVar2 = *param_2 <= 0.0 && *param_2 != 0.0;
  uVar11 = bVar2 + 1;
  if (0.0 <= param_2[1]) {
    uVar11 = (uint)bVar2;
  }
  uVar3 = uVar11 + 1;
  if (0.0 <= param_2[2]) {
    uVar3 = uVar11;
  }
  if ((uVar3 - 1 & 0xfffffffd) == 0) {
    uVar11 = 0;
    if (*(int *)(lVar9 + 0x88) != 0) {
      do {
        lVar9 = (int64_t)(int)uVar11;
        uVar11 = uVar11 + 1;
        lVar6 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90);
        uVar1 = *(int32_t *)(lVar6 + lVar9 * 0xc);
        *(int32_t *)(lVar6 + lVar9 * 0xc) = *(int32_t *)(lVar6 + 8 + lVar9 * 0xc);
        *(int32_t *)(*(int64_t *)(*(int64_t *)(param_1 + 8) + 0x90) + 8 + lVar9 * 0xc) = uVar1;
      } while (uVar11 < *(uint *)(*(int64_t *)(param_1 + 8) + 0x88));
    }
    *(int8_t *)(param_1 + 0x31) = 1;
  }
  *(int8_t *)(param_1 + 0x30) = 1;
  *(int8_t *)(param_1 + 0x32) = 1;
  if ((uVar3 != 0) && (*(int *)(*(int64_t *)(param_1 + 8) + 0x60) != 0)) {
    do {
      lVar6 = (int64_t)(int)uVar10;
      uVar10 = uVar10 + 1;
      lVar6 = lVar6 * 0x5c + *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
      fVar18 = *(float *)(lVar6 + 0x14) * *param_2;
      *(float *)(lVar6 + 0x14) = fVar18;
      fVar13 = *(float *)(lVar6 + 0x18) * param_2[1];
      *(float *)(lVar6 + 0x18) = fVar13;
      fVar14 = *(float *)(lVar6 + 0x1c) * param_2[2];
      fVar15 = fVar18 * fVar18 + fVar13 * fVar13 + fVar14 * fVar14;
      auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar16 = auVar17._0_4_;
      fVar15 = fVar16 * 0.5 * (3.0 - fVar15 * fVar16 * fVar16);
      *(float *)(lVar6 + 0x14) = fVar15 * fVar18;
      *(float *)(lVar6 + 0x18) = fVar15 * fVar13;
      *(float *)(lVar6 + 0x1c) = fVar15 * fVar14;
      fVar18 = *param_2 * *(float *)(lVar6 + 0x24);
      *(float *)(lVar6 + 0x24) = fVar18;
      fVar13 = param_2[1] * *(float *)(lVar6 + 0x28);
      *(float *)(lVar6 + 0x28) = fVar13;
      fVar14 = param_2[2] * *(float *)(lVar6 + 0x2c);
      fVar15 = fVar13 * fVar13 + fVar18 * fVar18 + fVar14 * fVar14;
      auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
      fVar16 = auVar17._0_4_;
      fVar15 = fVar16 * 0.5 * (3.0 - fVar15 * fVar16 * fVar16);
      *(float *)(lVar6 + 0x24) = fVar15 * fVar18;
      *(float *)(lVar6 + 0x28) = fVar15 * fVar13;
      *(float *)(lVar6 + 0x2c) = fVar15 * fVar14;
    } while (uVar10 < *(uint *)(*(int64_t *)(param_1 + 8) + 0x60));
  }
  *(int8_t *)(param_1 + 0x30) = 1;
  return;
}






