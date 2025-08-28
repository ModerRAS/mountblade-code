#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part250.c - 6 个函数

// 函数: void FUN_18080e076(void)
void FUN_18080e076(void)

{
  int64_t in_RAX;
  int32_t *puVar1;
  int64_t lVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int32_t in_R10D;
  int64_t in_stack_00000048;
  int64_t in_stack_00000050;
  uint64_t in_stack_000000b0;
  
  lVar4 = 0x20 - in_RAX;
  puVar3 = (int32_t *)(in_stack_00000048 + 0x80 + in_RAX * 4);
  do {
    puVar1 = puVar3;
    lVar2 = in_stack_00000050;
    if (0 < in_stack_00000050) {
      do {
        puVar1[0x20] = in_R10D;
        *puVar1 = in_R10D;
        puVar1[-0x20] = in_R10D;
        lVar2 = lVar2 + -1;
        puVar1 = puVar1 + 0x80;
      } while (lVar2 != 0);
    }
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_000000b0 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18080e0e0(int64_t param_1,int64_t param_2,int *param_3)
void FUN_18080e0e0(int64_t param_1,int64_t param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int8_t *puVar3;
  int64_t lVar4;
  int8_t auStack_878 [32];
  int iStack_858;
  int8_t auStack_848 [256];
  int8_t auStack_748 [768];
  int8_t auStack_448 [1024];
  uint64_t uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_878;
  iVar1 = *(int *)(*(int64_t *)(param_1 + 0x178) + 0x4850);
  iVar2 = FUN_18080d840(param_1,auStack_848,auStack_748);
  if (iVar2 == 0) {
    iVar2 = 0;
    *param_3 = 0;
    do {
      iStack_858 = iVar2 >> 2;
      FUN_18080dae0(param_1,auStack_848,auStack_448,auStack_748);
      puVar3 = auStack_448;
      lVar4 = 3;
      do {
        iStack_858 = *(int *)(*(int64_t *)(param_1 + 8) + 0xc);
        if (iStack_858 < 3) {
          iStack_858 = iVar1;
        }
        FUN_180815ca0(param_1,param_2,puVar3,iVar1);
        if (param_2 != 0) {
          param_2 = param_2 + (int64_t)(*(int *)(*(int64_t *)(param_1 + 8) + 0xc) << 5) * 2;
        }
        *param_3 = *param_3 + 0x20;
        puVar3 = puVar3 + 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xc);
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_878);
}





// 函数: void FUN_18080e131(void)
void FUN_18080e131(void)

{
  int64_t unaff_RBP;
  int64_t lVar1;
  int64_t unaff_RDI;
  int *unaff_R14;
  int iVar2;
  uint64_t in_stack_00000830;
  
  iVar2 = 0;
  *unaff_R14 = 0;
  do {
    FUN_18080dae0();
    lVar1 = 3;
    do {
      FUN_180815ca0();
      if (unaff_RDI != 0) {
        unaff_RDI = unaff_RDI + (int64_t)(*(int *)(*(int64_t *)(unaff_RBP + 8) + 0xc) << 5) * 2;
      }
      *unaff_R14 = *unaff_R14 + 0x20;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000830 ^ (uint64_t)&stack0x00000000);
}





// 函数: void FUN_18080e1fd(void)
void FUN_18080e1fd(void)

{
  uint64_t in_stack_00000830;
  
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(in_stack_00000830 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18080e220(int64_t param_1)
void FUN_18080e220(int64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uStack_1d8;
  uint64_t uStack_1d0;
  int32_t uStack_1c8;
  uint64_t auStack_1c0 [5];
  int aiStack_198 [96];
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)&uStack_1d8;
  lVar1 = *(int64_t *)(param_1 + 0x178);
  aiStack_198[0] = 0;
  aiStack_198[1] = 2;
  aiStack_198[2] = 2;
  aiStack_198[3] = 2;
  aiStack_198[8] = 0;
  aiStack_198[9] = 0;
  aiStack_198[10] = 1;
  aiStack_198[0xb] = 1;
  aiStack_198[0x10] = 0;
  aiStack_198[0x11] = 2;
  aiStack_198[0x12] = 2;
  aiStack_198[0x13] = 0;
  aiStack_198[0x18] = 1;
  aiStack_198[0x19] = 1;
  aiStack_198[0x1a] = 1;
  aiStack_198[0x1b] = 1;
  aiStack_198[4] = 2;
  aiStack_198[5] = 2;
  aiStack_198[6] = 2;
  aiStack_198[7] = 0;
  aiStack_198[0x20] = 0;
  aiStack_198[0x21] = 2;
  aiStack_198[0x22] = 2;
  aiStack_198[0x23] = 2;
  aiStack_198[0xc] = 1;
  aiStack_198[0xd] = 1;
  aiStack_198[0xe] = 1;
  aiStack_198[0xf] = 0;
  aiStack_198[0x28] = 0;
  aiStack_198[0x29] = 0;
  aiStack_198[0x2a] = 0;
  aiStack_198[0x2b] = 0;
  aiStack_198[0x14] = 0;
  aiStack_198[0x15] = 0;
  aiStack_198[0x16] = 1;
  aiStack_198[0x17] = 1;
  aiStack_198[0x30] = 0;
  aiStack_198[0x31] = 2;
  aiStack_198[0x32] = 2;
  aiStack_198[0x33] = 0;
  aiStack_198[0x1c] = 1;
  aiStack_198[0x1d] = 1;
  aiStack_198[0x1e] = 1;
  aiStack_198[0x1f] = 0;
  aiStack_198[0x38] = 0;
  aiStack_198[0x39] = 0;
  aiStack_198[0x3a] = 0;
  aiStack_198[0x3b] = 0;
  aiStack_198[0x24] = 2;
  aiStack_198[0x25] = 2;
  aiStack_198[0x26] = 2;
  aiStack_198[0x27] = 0;
  aiStack_198[0x40] = 0;
  aiStack_198[0x41] = 3;
  aiStack_198[0x42] = 3;
  aiStack_198[0x43] = 3;
  aiStack_198[0x2c] = 0;
  aiStack_198[0x2d] = 0;
  aiStack_198[0x2e] = 0;
  aiStack_198[0x2f] = 0;
  aiStack_198[0x34] = 0;
  aiStack_198[0x35] = 0;
  aiStack_198[0x36] = 0;
  aiStack_198[0x37] = 0;
  aiStack_198[0x3c] = 0;
  aiStack_198[0x3d] = 0;
  aiStack_198[0x3e] = 0;
  aiStack_198[0x3f] = 0;
  auStack_1c0[0] = 0x180be82e0;
  aiStack_198[0x48] = 0;
  aiStack_198[0x49] = 0;
  aiStack_198[0x4a] = 1;
  aiStack_198[0x4b] = 1;
  aiStack_198[0x44] = 3;
  aiStack_198[0x45] = 3;
  aiStack_198[0x46] = 3;
  aiStack_198[0x47] = 0;
  auStack_1c0[1] = 0x180be8760;
  aiStack_198[0x50] = 0;
  aiStack_198[0x51] = 3;
  aiStack_198[0x52] = 3;
  aiStack_198[0x53] = 0;
  aiStack_198[0x4c] = 1;
  aiStack_198[0x4d] = 1;
  aiStack_198[0x4e] = 1;
  aiStack_198[0x4f] = 0;
  auStack_1c0[2] = 0x180be8c10;
  aiStack_198[0x58] = 1;
  aiStack_198[0x59] = 1;
  aiStack_198[0x5a] = 1;
  aiStack_198[0x5b] = 1;
  aiStack_198[0x54] = 0;
  aiStack_198[0x55] = 0;
  aiStack_198[0x56] = 1;
  aiStack_198[0x57] = 1;
  auStack_1c0[3] = 0x180be8d50;
  uStack_1d8 = 0x1e0000001b;
  uStack_1d0 = 0xc00000008;
  auStack_1c0[4] = 0x180be8f10;
  aiStack_198[0x5c] = 1;
  aiStack_198[0x5d] = 1;
  aiStack_198[0x5e] = 1;
  aiStack_198[0x5f] = 0;
  uStack_1c8 = 0x1e;
  if (*(int *)(lVar1 + 0x485c) == 0) {
    iVar2 = aiStack_198
            [((int64_t)(2 - *(int *)(lVar1 + 0x4850)) + (int64_t)*(int *)(lVar1 + 0x4874) * 2) *
             0x10 + (int64_t)*(int *)(lVar1 + 0x4870)];
  }
  else {
    iVar2 = 4;
  }
  *(uint64_t *)(lVar1 + 0x4848) = auStack_1c0[iVar2];
  *(int32_t *)(*(int64_t *)(param_1 + 0x178) + 0x4858) =
       *(int32_t *)((int64_t)&uStack_1d8 + (int64_t)iVar2 * 4);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)&uStack_1d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18080e440(void)
void FUN_18080e440(void)

{
  int8_t *puVar1;
  float fVar2;
  int8_t uVar3;
  int8_t uVar4;
  int8_t *puVar5;
  uint64_t uVar6;
  float *pfVar7;
  uint uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int16_t *puVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qb;
  int8_t auStack_198 [32];
  int aiStack_178 [4];
  uint64_t auStack_168 [4];
  float afStack_148 [28];
  int16_t uStack_d8;
  int8_t uStack_d6;
  int32_t uStack_d5;
  int32_t uStack_d1;
  int16_t uStack_cd;
  int8_t uStack_cb;
  int32_t uStack_ca;
  int32_t uStack_c6;
  int32_t uStack_c2;
  int8_t uStack_be;
  uint64_t uStack_b8;
  
  uStack_b8 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_198;
  puVar12 = &uStack_d8;
  afStack_148[0] = 0.0;
  afStack_148[1] = -0.6666667;
  afStack_148[2] = 0.6666667;
  afStack_148[3] = 0.2857143;
  uVar14 = 0;
  afStack_148[8] = 0.007843138;
  afStack_148[9] = 0.0039138943;
  afStack_148[10] = 0.0019550342;
  afStack_148[0xb] = 0.0009770396;
  afStack_148[4] = 0.13333334;
  afStack_148[5] = 0.06451613;
  afStack_148[6] = 0.031746034;
  afStack_148[7] = 0.015748031;
  uStack_d5 = 0;
  uStack_ca = 0;
  afStack_148[0x10] = 3.0518044e-05;
  afStack_148[0x11] = -0.8;
  afStack_148[0x12] = -0.4;
  afStack_148[0x13] = 0.4;
  afStack_148[0xc] = 0.0004884005;
  afStack_148[0xd] = 0.00024417043;
  afStack_148[0xe] = 0.00012207776;
  afStack_148[0xf] = 6.103702e-05;
  auStack_168[0] = 0x180c36fc0;
  afStack_148[0x18] = 0.22222222;
  afStack_148[0x14] = 0.8;
  afStack_148[0x15] = -0.8888889;
  afStack_148[0x16] = -0.44444445;
  afStack_148[0x17] = -0.22222222;
  auStack_168[1] = 0x180c37020;
  afStack_148[0x1a] = 0.8888889;
  afStack_148[0x19] = 0.44444445;
  uStack_d8 = 1;
  uStack_d6 = 2;
  uStack_d1 = 0x12110000;
  uStack_cd = 0x1300;
  uStack_cb = 0x14;
  uStack_c6 = 0x17160115;
  uStack_c2 = 0x2191800;
  uStack_be = 0x1a;
  aiStack_178[0] = 3;
  aiStack_178[1] = 5;
  aiStack_178[2] = 9;
  auStack_168[2] = 0x180c371a0;
  uVar9 = uVar14;
  do {
    lVar11 = (int64_t)aiStack_178[uVar9];
    puVar5 = (int8_t *)auStack_168[uVar9];
    uVar10 = uVar14;
    if (0 < lVar11) {
      do {
        uVar3 = *(int8_t *)((int64_t)puVar12 + uVar10);
        uVar13 = uVar14;
        do {
          uVar4 = *(int8_t *)((int64_t)puVar12 + uVar13);
          uVar6 = uVar14;
          do {
            puVar1 = (int8_t *)((int64_t)puVar12 + uVar6);
            uVar6 = uVar6 + 1;
            *puVar5 = *puVar1;
            puVar5[1] = uVar4;
            puVar5[2] = uVar3;
            puVar5 = puVar5 + 3;
          } while ((int64_t)uVar6 < lVar11);
          uVar13 = uVar13 + 1;
        } while ((int64_t)uVar13 < lVar11);
        uVar10 = uVar10 + 1;
      } while ((int64_t)uVar10 < lVar11);
    }
    uVar9 = uVar9 + 1;
    puVar12 = (int16_t *)((int64_t)puVar12 + 9);
  } while ((int64_t)uVar9 < 3);
  pfVar15 = afStack_148;
  pfVar16 = (float *)0x180c37da0;
  lVar11 = 0x1b;
  do {
    fVar2 = *pfVar15;
    pfVar7 = pfVar16;
    uVar9 = uVar14;
    do {
      uVar18 = thunk_FUN_1808fea60();
      uVar8 = (int)uVar9 + 4;
      uVar9 = (uint64_t)uVar8;
      *pfVar7 = (float)uVar18 * fVar2;
      pfVar7[1] = (float)((uint64_t)uVar18 >> 0x20) * fVar2;
      pfVar7[2] = (float)extraout_XMM0_Qb * fVar2;
      pfVar7[3] = (float)((uint64_t)extraout_XMM0_Qb >> 0x20) * fVar2;
      pfVar7 = pfVar7 + 4;
    } while ((int)uVar8 < 0x3c);
    if ((int)uVar8 < 0x3f) {
      uVar9 = (uint64_t)(0x3f - uVar8);
      do {
        fVar17 = (float)powf();
        *pfVar7 = fVar17 * fVar2;
        pfVar7 = pfVar7 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    pfVar16 = pfVar16 + 0x40;
    *pfVar7 = 0.0;
    pfVar15 = pfVar15 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_b8 ^ (uint64_t)auStack_198);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



