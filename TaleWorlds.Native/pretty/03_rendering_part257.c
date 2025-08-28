#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part257.c - 11 个函数

// 函数: void FUN_18040fcba(int param_1)
void FUN_18040fcba(int param_1)

{
  int64_t lVar1;
  int32_t uVar2;
  int iVar3;
  int *piVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int iVar9;
  int64_t unaff_RSI;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int unaff_R12D;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t unaff_R15;
  int iStack0000000000000044;
  int64_t lStack0000000000000058;
  uint64_t in_stack_00000070;
  int64_t lStack0000000000000088;
  int64_t lStack00000000000000a0;
  int64_t lStack00000000000000b0;
  uint64_t in_stack_000000d0;
  
  param_1 = unaff_R12D - param_1;
  FUN_180413dc0();
  FUN_180411840();
  lVar5 = malloc((int64_t)(param_1 * 3) * 0x18);
  lStack0000000000000058 = (int64_t)param_1;
  lVar6 = malloc(lStack0000000000000058 * 0xc);
  if (lVar5 == 0) {
    lVar5 = lVar6;
    if (lVar6 != 0) goto LAB_1804101ac;
  }
  else {
    if (lVar6 != 0) {
      iStack0000000000000044 = 0;
      if (0 < param_1) {
        uVar11 = 0;
        lStack00000000000000a0 = 0;
        lStack0000000000000088 = 0;
        lStack00000000000000b0 = 2;
        uVar14 = uVar11;
        lVar12 = unaff_RSI;
        do {
          iVar9 = 0;
          lVar10 = 0;
          lVar8 = lVar5 + uVar11 * 0x18;
          lVar13 = -4;
          do {
            if (((*(byte *)(lVar12 + 0x4c) & 4) == 0) &&
               (lVar1 = lStack00000000000000b0 + lVar10, *(int64_t *)(unaff_RSI + lVar1 * 8) == 0))
            {
              uVar2 = *(int32_t *)(unaff_R15 + (lStack0000000000000088 + lVar10) * 4);
              uVar11 = uVar11 + 1;
              *(int64_t *)(unaff_RSI + lVar1 * 8) = lVar8;
              *(int32_t *)(lVar8 + 0x10) = uVar2;
              lVar8 = lVar8 + 0x18;
              *(uint *)(*(int64_t *)(unaff_RSI + lVar1 * 8) + 0x14) =
                   *(uint *)(lVar12 + 0x4c) >> 3 & 1;
              **(int32_t **)(unaff_RSI + lVar1 * 8) = 0;
              *(int64_t *)(*(int64_t *)(unaff_RSI + lVar1 * 8) + 8) =
                   lVar6 + (int64_t)(int)uVar14 * 4;
              piVar4 = *(int **)(unaff_RSI + lVar1 * 8);
              *(int *)(*(int64_t *)(piVar4 + 2) + (int64_t)*piVar4 * 4) = iStack0000000000000044;
              *piVar4 = *piVar4 + 1;
              lVar7 = 8;
              if (0 < iVar9) {
                lVar7 = lVar13;
              }
              iVar3 = *(int *)(lVar12 + lVar7);
              if (-1 < *(int *)(unaff_RSI + (lStack00000000000000a0 + lVar10) * 4)) {
                FUN_180411e20();
              }
              if (-1 < iVar3) {
                FUN_180411e20();
              }
              uVar14 = (uint64_t)(uint)((int)uVar14 + **(int **)(unaff_RSI + lVar1 * 8));
            }
            iVar9 = iVar9 + 1;
            lVar10 = lVar10 + 1;
            lVar13 = lVar13 + 4;
          } while (iVar9 < 3);
          iStack0000000000000044 = iStack0000000000000044 + 1;
          lVar12 = lVar12 + 0x58;
          lStack0000000000000088 = lStack0000000000000088 + 3;
          lStack00000000000000a0 = lStack00000000000000a0 + 0x16;
          lStack00000000000000b0 = lStack00000000000000b0 + 0xb;
          lStack0000000000000058 = lStack0000000000000058 + -1;
        } while (lStack0000000000000058 != 0);
      }
      lVar6 = malloc((int64_t)in_stack_00000070._4_4_ * 0x28);
      if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
        memset(lVar6,0,(int64_t)in_stack_00000070._4_4_ * 0x28);
      }
      free();
      free();
      free(lVar5);
      goto LAB_18040ff37;
    }
LAB_1804101ac:
    free(lVar5);
  }
  free();
LAB_18040ff37:
  free();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18040ff57(void)
void FUN_18040ff57(void)

{
  uint64_t in_stack_000000d0;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18040ff84(void)
void FUN_18040ff84(void)

{
                    // WARNING: Subroutine does not return
  memset();
}





// 函数: void FUN_1804101c3(void)
void FUN_1804101c3(void)

{
  uint64_t in_stack_000000d0;
  
  free();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000d0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180410220(int64_t param_1,int64_t *param_2,int param_3)
void FUN_180410220(int64_t param_1,int64_t *param_2,int param_3)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_138 [48];
  int iStack_108;
  int64_t lStack_100;
  int64_t lStack_f8;
  int64_t lStack_f0;
  int64_t lStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint64_t uStack_a8;
  
  uStack_a8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  lStack_f8 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,&fStack_c8,0,0);
  iStack_108 = param_3 * 3;
  lVar4 = (int64_t)iStack_108;
  if (1 < lVar4) {
    lVar3 = 1;
    fVar5 = fStack_c4;
    fVar7 = fStack_c0;
    fVar9 = fStack_c4;
    fVar10 = fStack_c0;
    fVar11 = fStack_c8;
    fVar6 = fStack_c8;
    do {
      uVar1 = *(uint *)(param_1 + lVar3 * 4);
      (**(code **)(*param_2 + 0x10))(param_2,&fStack_c8,(int)uVar1 >> 2,uVar1 & 3);
      fVar12 = fStack_c8;
      if ((fVar6 <= fStack_c8) && (fVar12 = fVar6, fVar11 < fStack_c8)) {
        fVar11 = fStack_c8;
      }
      fVar6 = fStack_c4;
      if ((fVar5 <= fStack_c4) && (fVar6 = fVar5, fVar9 < fStack_c4)) {
        fVar9 = fStack_c4;
      }
      fVar8 = fStack_c0;
      if ((fVar7 <= fStack_c0) && (fVar8 = fVar7, fVar10 < fStack_c0)) {
        fVar10 = fStack_c0;
      }
      lVar3 = lVar3 + 1;
      fVar5 = fVar6;
      fVar7 = fVar8;
      fVar6 = fVar12;
    } while (lVar3 < lVar4);
  }
  lVar4 = malloc((int64_t)param_3 * 0xc);
  lStack_f0 = lVar4;
  lVar3 = malloc(0x2000);
  lStack_d8 = lVar3;
  lStack_100 = malloc(0x2000);
  lVar2 = malloc(0x2000);
  if (lVar4 != 0) {
    if (((lVar3 != 0) && (lStack_100 != 0)) && (lVar2 != 0)) {
                    // WARNING: Subroutine does not return
      memset(lVar3,0,0x2000);
    }
    free(lVar4);
  }
  if (lVar3 != 0) {
    free(lVar3);
  }
  if (lStack_100 != 0) {
    free(lStack_100);
  }
  if (lVar2 != 0) {
    free(lVar2);
  }
  FUN_180411040(param_1,param_2,param_3);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_a8 ^ (uint64_t)auStack_138);
}





// 函数: void FUN_180410261(int64_t param_1,uint64_t param_2,int param_3)
void FUN_180410261(int64_t param_1,uint64_t param_2,int param_3)

{
  uint uVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t in_R11;
  int64_t *unaff_R15;
  int32_t in_XMM0_Da;
  float fVar6;
  int32_t unaff_XMM6_Da;
  float fVar7;
  float fVar8;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  float fVar11;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  float fVar12;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  float fVar13;
  float fVar14;
  int64_t lStack0000000000000040;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  uint64_t in_stack_00000090;
  
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
  lStack0000000000000040 = param_1;
  fVar6 = (float)(**(code **)(in_RAX + 0x10))(in_XMM0_Da,&stack0x00000070,0,0);
  if (1 < (int64_t)(param_3 * 3)) {
    lVar5 = 1;
    fVar7 = fStack0000000000000074;
    fVar9 = in_stack_00000078;
    fVar11 = fStack0000000000000074;
    fVar12 = in_stack_00000078;
    fVar13 = fStack0000000000000070;
    fVar8 = fStack0000000000000070;
    do {
      uVar1 = *(uint *)(param_1 + lVar5 * 4);
      (**(code **)(*unaff_R15 + 0x10))(fVar6,&stack0x00000070,(int)uVar1 >> 2,uVar1 & 3);
      fVar14 = fStack0000000000000070;
      if ((fVar8 <= fStack0000000000000070) && (fVar14 = fVar8, fVar13 < fStack0000000000000070)) {
        fVar13 = fStack0000000000000070;
      }
      fVar8 = fStack0000000000000074;
      if ((fVar7 <= fStack0000000000000074) && (fVar8 = fVar7, fVar11 < fStack0000000000000074)) {
        fVar11 = fStack0000000000000074;
      }
      fVar10 = in_stack_00000078;
      if ((fVar9 <= in_stack_00000078) && (fVar10 = fVar9, fVar12 < in_stack_00000078)) {
        fVar12 = in_stack_00000078;
      }
      lVar5 = lVar5 + 1;
      fVar6 = in_stack_00000078;
      fVar7 = fVar8;
      fVar9 = fVar10;
      fVar8 = fVar14;
    } while (lVar5 < param_3 * 3);
  }
  lVar5 = malloc((int64_t)param_3 * 0xc);
  lVar2 = malloc(0x2000);
  lVar3 = malloc(0x2000);
  lVar4 = malloc(0x2000);
  if (lVar5 != 0) {
    if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
                    // WARNING: Subroutine does not return
      memset(lVar2,0,0x2000);
    }
    free(lVar5);
  }
  if (lVar2 != 0) {
    free(lVar2);
  }
  if (lVar3 != 0) {
    free(lVar3);
  }
  if (lVar4 != 0) {
    free(lVar4);
  }
  FUN_180411040(param_1);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_180410400(void)
void FUN_180410400(void)

{
  int64_t in_RAX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t in_stack_00000038;
  uint64_t in_stack_00000090;
  
  if (((unaff_RSI != 0) && (in_stack_00000038 != 0)) && (in_RAX != 0)) {
                    // WARNING: Subroutine does not return
    memset();
  }
  free();
  if (unaff_RSI != 0) {
    free();
  }
  if (in_stack_00000038 != 0) {
    free(in_stack_00000038);
  }
  if (unaff_RBP != 0) {
    free();
  }
  FUN_180411040();
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000090 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1804107f0(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4,int param_5)
void FUN_1804107f0(int64_t param_1,int64_t param_2,int64_t *param_3,int param_4,int param_5)

{
  int32_t *puVar1;
  int32_t *puVar2;
  float *pfVar3;
  int32_t uVar4;
  int32_t uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  int32_t uVar13;
  int32_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  uint uVar21;
  int64_t lVar22;
  float *pfVar23;
  int iVar24;
  uint uVar25;
  uint64_t uVar26;
  int64_t lVar27;
  int iVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int *piVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int8_t auStack_198 [32];
  int iStack_178;
  int64_t lStack_168;
  int iStack_160;
  int64_t *plStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int *piStack_140;
  int64_t lStack_138;
  uint64_t uStack_130;
  float fStack_128;
  uint64_t uStack_120;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint64_t uStack_d0;
  
  uStack_d0 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  lVar31 = (int64_t)param_5;
  lStack_168 = param_1;
  plStack_158 = param_3;
  lStack_138 = lVar31;
  do {
    lVar30 = (int64_t)param_4;
    lVar22 = 0;
    uVar4 = *(int32_t *)(param_2 + lVar30 * 0x10);
    iVar24 = param_4 + 1;
    uVar5 = *(int32_t *)(param_2 + 4 + lVar30 * 0x10);
    lVar32 = 3;
    fStack_118 = *(float *)(param_2 + 8 + lVar30 * 0x10);
    fStack_128 = fStack_118;
    uStack_120 = (int *)CONCAT44(uVar5,uVar4);
    uStack_130 = CONCAT44(uVar5,uVar4);
    lVar29 = (int64_t)iVar24;
    do {
      if (iVar24 <= param_5) {
        lVar27 = lVar29;
        iVar28 = iVar24;
        if (3 < (param_5 - iVar24) + 1) {
          fVar34 = *(float *)((int64_t)&uStack_120 + lVar22 * 4);
          pfVar23 = (float *)(param_2 + (lVar22 + (lVar29 + 2) * 4) * 4);
          uVar21 = ((param_5 - iVar24) - 3U >> 2) + 1;
          uVar26 = (uint64_t)uVar21;
          iVar28 = iVar24 + uVar21 * 4;
          lVar27 = lVar29 + (uint64_t)uVar21 * 4;
          do {
            fVar35 = pfVar23[-8];
            fVar36 = fVar35;
            if ((fVar34 <= fVar35) &&
               (pfVar3 = (float *)((int64_t)&uStack_130 + lVar22 * 4), fVar36 = fVar34,
               *pfVar3 <= fVar35 && fVar35 != *pfVar3)) {
              *(float *)((int64_t)&uStack_130 + lVar22 * 4) = fVar35;
            }
            fVar34 = pfVar23[-4];
            fVar35 = fVar34;
            if ((fVar36 <= fVar34) &&
               (pfVar3 = (float *)((int64_t)&uStack_130 + lVar22 * 4), fVar35 = fVar36,
               *pfVar3 <= fVar34 && fVar34 != *pfVar3)) {
              *(float *)((int64_t)&uStack_130 + lVar22 * 4) = fVar34;
            }
            fVar34 = *pfVar23;
            fVar36 = fVar34;
            if ((fVar35 <= fVar34) &&
               (pfVar3 = (float *)((int64_t)&uStack_130 + lVar22 * 4), fVar36 = fVar35,
               *pfVar3 <= fVar34 && fVar34 != *pfVar3)) {
              *(float *)((int64_t)&uStack_130 + lVar22 * 4) = fVar34;
            }
            fVar35 = pfVar23[4];
            fVar34 = fVar35;
            if ((fVar36 <= fVar35) &&
               (pfVar3 = (float *)((int64_t)&uStack_130 + lVar22 * 4), fVar34 = fVar36,
               *pfVar3 <= fVar35 && fVar35 != *pfVar3)) {
              *(float *)((int64_t)&uStack_130 + lVar22 * 4) = fVar35;
            }
            pfVar23 = pfVar23 + 0x10;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
          *(float *)((int64_t)&uStack_120 + lVar22 * 4) = fVar34;
        }
        if (iVar28 <= param_5) {
          pfVar23 = (float *)(param_2 + (lVar22 + lVar27 * 4) * 4);
          lVar27 = (int64_t)((param_5 - iVar28) + 1);
          fVar34 = *(float *)((int64_t)&uStack_120 + lVar22 * 4);
          do {
            fVar35 = *pfVar23;
            fVar36 = fVar35;
            if ((fVar34 <= fVar35) &&
               (pfVar3 = (float *)((int64_t)&uStack_130 + lVar22 * 4), fVar36 = fVar34,
               *pfVar3 <= fVar35 && fVar35 != *pfVar3)) {
              *(float *)((int64_t)&uStack_130 + lVar22 * 4) = fVar35;
            }
            pfVar23 = pfVar23 + 4;
            lVar27 = lVar27 + -1;
            fVar34 = fVar36;
          } while (lVar27 != 0);
          *(float *)((int64_t)&uStack_120 + lVar22 * 4) = fVar36;
        }
      }
      lVar22 = lVar22 + 1;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    if ((uStack_130._4_4_ - uStack_120._4_4_ <= (float)uStack_130 - (float)uStack_120) ||
       (uStack_130._4_4_ - uStack_120._4_4_ <= fStack_128 - fStack_118)) {
      lVar22 = 0;
      if ((float)uStack_130 - (float)uStack_120 < fStack_128 - fStack_118) {
        lVar22 = 2;
      }
    }
    else {
      lVar22 = 1;
    }
    fVar34 = *(float *)((int64_t)&uStack_130 + lVar22 * 4);
    fVar35 = *(float *)((int64_t)&uStack_120 + lVar22 * 4);
    fVar36 = (fVar35 + fVar34) * 0.5;
    if ((fVar34 <= fVar36) || (fVar36 <= fVar35)) {
      if (lVar30 <= lVar31) {
        uStack_120 = (int *)(param_2 + 0xc + lVar30 * 0x10);
        lVar31 = lVar30;
        piVar33 = uStack_120;
        piStack_140 = uStack_120;
        do {
          uStack_130 = (int64_t)*uStack_120;
          uVar21 = *(uint *)(lStack_168 + uStack_130 * 4);
          uVar25 = uVar21 & 3;
          iVar24 = (int)uVar21 >> 2;
          (**(code **)(*param_3 + 0x10))(param_3,&fStack_110,iVar24,uVar25);
          (**(code **)(*param_3 + 0x18))(param_3,&fStack_100,iVar24,uVar25);
          (**(code **)(*param_3 + 0x20))(param_3,&fStack_150,iVar24,uVar25);
          fVar19 = fStack_f8;
          fVar18 = fStack_fc;
          fVar17 = fStack_100;
          fVar16 = fStack_108;
          fVar15 = fStack_10c;
          fVar36 = fStack_110;
          fVar35 = fStack_14c;
          fVar34 = fStack_150;
          iStack_160 = -1;
          bVar8 = true;
          lVar22 = lVar30;
          if (lVar30 < lVar31) {
            do {
              if (!bVar8) goto LAB_180410cf2;
              iStack_160 = *piVar33;
              uVar21 = *(uint *)(lStack_168 + (int64_t)iStack_160 * 4);
              uVar25 = uVar21 & 3;
              iVar24 = (int)uVar21 >> 2;
              (**(code **)(*plStack_158 + 0x10))(plStack_158,&fStack_f0,iVar24,uVar25);
              (**(code **)(*plStack_158 + 0x18))(plStack_158,&fStack_e0,iVar24,uVar25);
              (**(code **)(*plStack_158 + 0x20))(plStack_158,&fStack_148,iVar24,uVar25);
              if (((((fVar36 == fStack_f0) && (fVar15 == fStack_ec)) && (fVar16 == fStack_e8)) &&
                  ((fVar17 == fStack_e0 && (fVar18 == fStack_dc)))) &&
                 ((fVar19 == fStack_d8 && ((fVar34 == fStack_148 && (fVar35 == fStack_144)))))) {
                bVar8 = false;
              }
              else {
                lVar22 = lVar22 + 1;
                piVar33 = piVar33 + 4;
              }
            } while (lVar22 < lVar31);
            piVar33 = piStack_140;
            if (!bVar8) {
LAB_180410cf2:
              *(int32_t *)(lStack_168 + uStack_130 * 4) =
                   *(int32_t *)(lStack_168 + (int64_t)iStack_160 * 4);
              piVar33 = piStack_140;
            }
          }
          lVar31 = lVar31 + 1;
          uStack_120 = uStack_120 + 4;
          param_3 = plStack_158;
        } while (lVar31 <= lStack_138);
      }
      break;
    }
    lVar32 = lVar31;
    lVar29 = lVar31;
    iVar24 = param_4;
    iVar28 = param_5;
    if (lVar30 < lVar31) {
      do {
        bVar8 = false;
        bVar9 = false;
        do {
          lVar27 = lVar30;
          if (lVar32 <= lVar27) goto LAB_180410abf;
          pfVar23 = (float *)(param_2 + (lVar22 + lVar27 * 4) * 4);
          bVar6 = fVar36 == *pfVar23;
          bVar7 = fVar36 < *pfVar23;
          bVar8 = bVar7 || bVar6;
          iVar20 = iVar24 + 1;
          if (bVar7 || bVar6) {
            iVar20 = iVar24;
          }
          iVar24 = iVar20;
          lVar29 = lVar32;
          lVar30 = lVar27 + 1;
        } while (!bVar7 && !bVar6);
        do {
          lVar32 = lVar29;
          if (lVar32 <= lVar27) break;
          pfVar23 = (float *)(param_2 + (lVar22 + lVar32 * 4) * 4);
          bVar6 = fVar36 != *pfVar23;
          bVar7 = *pfVar23 <= fVar36;
          bVar9 = bVar7 && bVar6;
          iVar20 = iVar28 + -1;
          if (bVar7 && bVar6) {
            iVar20 = iVar28;
          }
          iVar28 = iVar20;
          lVar29 = lVar32 + -1;
        } while (!bVar7 || !bVar6);
LAB_180410abf:
        lVar29 = lVar32;
        lVar30 = lVar27;
        if ((bVar8) && (bVar9)) {
          iVar24 = iVar24 + 1;
          lVar30 = lVar27 + 1;
          iVar28 = iVar28 + -1;
          lVar29 = lVar32 + -1;
          puVar1 = (int32_t *)(param_2 + lVar32 * 0x10);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar10 = puVar1[3];
          puVar2 = (int32_t *)(param_2 + lVar27 * 0x10);
          uVar11 = *puVar2;
          uVar12 = puVar2[1];
          uVar13 = puVar2[2];
          uVar14 = puVar2[3];
          puVar2 = (int32_t *)(param_2 + lVar27 * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar10;
          puVar1 = (int32_t *)(param_2 + lVar32 * 0x10);
          *puVar1 = uVar11;
          puVar1[1] = uVar12;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
        }
        lVar32 = lVar29;
      } while (lVar30 < lVar29);
    }
    if (iVar24 == iVar28) {
      pfVar23 = (float *)(param_2 + (lVar22 + lVar29 * 4) * 4);
      if (fVar36 < *pfVar23 || fVar36 == *pfVar23) {
        iVar28 = iVar28 + -1;
      }
      else {
        iVar24 = iVar24 + 1;
      }
    }
    if (param_4 < iVar28) {
      iStack_178 = iVar28;
      FUN_1804107f0(lStack_168,param_2,param_3,param_4);
    }
    param_4 = iVar24;
  } while (iVar24 < param_5);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_d0 ^ (uint64_t)auStack_198);
}





// 函数: void FUN_180410b4b(uint64_t param_1,int64_t param_2)
void FUN_180410b4b(uint64_t param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int iVar12;
  int64_t *unaff_R12;
  int64_t unaff_R13;
  int64_t lVar13;
  int64_t unaff_R15;
  int *piVar14;
  int64_t in_stack_00000030;
  int iStack0000000000000038;
  int64_t *in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int *piStack0000000000000058;
  int64_t in_stack_00000060;
  int64_t lStack0000000000000068;
  int *piStack0000000000000078;
  
  piStack0000000000000078 = (int *)(unaff_R15 + unaff_RSI * 0x10);
  piVar14 = piStack0000000000000078;
  piStack0000000000000058 = piStack0000000000000078;
  do {
    lStack0000000000000068 = (int64_t)*piStack0000000000000078;
    uVar7 = *(uint *)(param_2 + lStack0000000000000068 * 4);
    uVar11 = uVar7 & 3;
    iVar12 = (int)uVar7 >> 2;
    (**(code **)(*unaff_R12 + 0x10))(unaff_R12,unaff_RBP + -0x78,iVar12,uVar11);
    (**(code **)(*unaff_R12 + 0x18))(unaff_R12,unaff_RBP + -0x68,iVar12,uVar11);
    (**(code **)(*unaff_R12 + 0x20))(unaff_R12,&stack0x00000048,iVar12,uVar11);
    fVar10 = fStack000000000000004c;
    fVar9 = fStack0000000000000048;
    iStack0000000000000038 = -1;
    bVar8 = true;
    if (unaff_RSI < unaff_R13) {
      fVar1 = *(float *)(unaff_RBP + -0x70);
      fVar2 = *(float *)(unaff_RBP + -0x74);
      fVar3 = *(float *)(unaff_RBP + -0x78);
      fVar4 = *(float *)(unaff_RBP + -0x60);
      fVar5 = *(float *)(unaff_RBP + -100);
      fVar6 = *(float *)(unaff_RBP + -0x68);
      lVar13 = unaff_RSI;
      do {
        if (!bVar8) goto LAB_180410cf2;
        iStack0000000000000038 = *piVar14;
        uVar7 = *(uint *)(in_stack_00000030 + (int64_t)iStack0000000000000038 * 4);
        uVar11 = uVar7 & 3;
        iVar12 = (int)uVar7 >> 2;
        (**(code **)(*in_stack_00000040 + 0x10))(in_stack_00000040,unaff_RBP + -0x58,iVar12,uVar11);
        (**(code **)(*in_stack_00000040 + 0x18))(in_stack_00000040,unaff_RBP + -0x48,iVar12,uVar11);
        (**(code **)(*in_stack_00000040 + 0x20))(in_stack_00000040,&stack0x00000050,iVar12,uVar11);
        if (((((fVar3 == *(float *)(unaff_RBP + -0x58)) && (fVar2 == *(float *)(unaff_RBP + -0x54)))
             && (fVar1 == *(float *)(unaff_RBP + -0x50))) &&
            ((fVar6 == *(float *)(unaff_RBP + -0x48) && (fVar5 == *(float *)(unaff_RBP + -0x44)))))
           && ((fVar4 == *(float *)(unaff_RBP + -0x40) &&
               ((fVar9 == fStack0000000000000050 && (fVar10 == fStack0000000000000054)))))) {
          bVar8 = false;
        }
        else {
          lVar13 = lVar13 + 1;
          piVar14 = piVar14 + 4;
        }
      } while (lVar13 < unaff_R13);
      piVar14 = piStack0000000000000058;
      if (!bVar8) {
LAB_180410cf2:
        *(int32_t *)(in_stack_00000030 + lStack0000000000000068 * 4) =
             *(int32_t *)(in_stack_00000030 + (int64_t)iStack0000000000000038 * 4);
        piVar14 = piStack0000000000000058;
      }
    }
    unaff_R13 = unaff_R13 + 1;
    piStack0000000000000078 = piStack0000000000000078 + 4;
    param_2 = in_stack_00000030;
    unaff_R12 = in_stack_00000040;
    if (in_stack_00000060 < unaff_R13) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x38) ^ (uint64_t)&stack0x00000000);
    }
  } while( true );
}





// 函数: void FUN_180410d77(void)
void FUN_180410d77(void)

{
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(*(uint64_t *)(unaff_RBP + -0x38) ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180410da0(int64_t param_1,int64_t *param_2,int64_t param_3,int param_4)
void FUN_180410da0(int64_t param_1,int64_t *param_2,int64_t param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int64_t lVar12;
  int iVar13;
  int iVar14;
  int64_t lVar15;
  int64_t lVar16;
  int8_t auStack_148 [32];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int64_t lStack_118;
  int64_t lStack_110;
  int64_t lStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint64_t uStack_c0;
  
  if (param_4 < 1) {
    return;
  }
  uStack_c0 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  lVar16 = 0;
  lStack_108 = (int64_t)param_4;
  lStack_118 = param_3;
  do {
    lStack_110 = (int64_t)*(int *)(lStack_118 + lVar16 * 4);
    uVar1 = *(uint *)(param_1 + lStack_110 * 4);
    uVar11 = uVar1 & 3;
    iVar13 = (int)uVar1 >> 2;
    (**(code **)(*param_2 + 0x10))(param_2,&fStack_100,iVar13,uVar11);
    (**(code **)(*param_2 + 0x18))(param_2,&fStack_f0,iVar13,uVar11);
    (**(code **)(*param_2 + 0x20))(param_2,&fStack_128,iVar13,uVar11);
    fVar10 = fStack_e8;
    fVar9 = fStack_ec;
    fVar8 = fStack_f0;
    fVar7 = fStack_f8;
    fVar6 = fStack_fc;
    fVar5 = fStack_100;
    fVar4 = fStack_124;
    fVar3 = fStack_128;
    bVar2 = true;
    lVar12 = 0;
    lVar15 = 0xffffffff;
    if (0 < lVar16) {
      do {
        iVar13 = (int)lVar15;
        if (!bVar2) goto LAB_180410f7e;
        iVar13 = *(int *)(lStack_118 + lVar12 * 4);
        lVar15 = (int64_t)iVar13;
        uVar1 = *(uint *)(param_1 + lVar15 * 4);
        uVar11 = uVar1 & 3;
        iVar14 = (int)uVar1 >> 2;
        (**(code **)(*param_2 + 0x10))(param_2,&fStack_e0,iVar14,uVar11);
        (**(code **)(*param_2 + 0x18))(param_2,&fStack_d0,iVar14,uVar11);
        (**(code **)(*param_2 + 0x20))(param_2,&fStack_120,iVar14,uVar11);
        if (((((fVar5 == fStack_e0) && (fVar6 == fStack_dc)) && (fVar7 == fStack_d8)) &&
            ((fVar8 == fStack_d0 && (fVar9 == fStack_cc)))) &&
           ((fVar10 == fStack_c8 && ((fVar3 == fStack_120 && (fVar4 == fStack_11c)))))) {
          bVar2 = false;
        }
        else {
          lVar12 = lVar12 + 1;
        }
      } while (lVar12 < lVar16);
      if (!bVar2) {
LAB_180410f7e:
        *(int32_t *)(param_1 + lStack_110 * 4) = *(int32_t *)(param_1 + (int64_t)iVar13 * 4);
      }
    }
    lVar16 = lVar16 + 1;
    if (lStack_108 <= lVar16) {
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_c0 ^ (uint64_t)auStack_148);
    }
  } while( true );
}





