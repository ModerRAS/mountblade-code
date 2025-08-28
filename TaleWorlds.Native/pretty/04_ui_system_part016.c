#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part016.c - 14 个函数

// 函数: void FUN_18065bba0(int64_t param_1,int64_t param_2,float *param_3,char param_4)
void FUN_18065bba0(int64_t param_1,int64_t param_2,float *param_3,char param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  float *pfVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = (int64_t)*(int *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x60) == 0) {
    if ('\0' < param_4) {
      for (lVar2 = (int64_t)param_4; lVar2 != 0; lVar2 = lVar2 + -1) {
        *param_3 = 0.0;
        param_3 = param_3 + 1;
      }
      return;
    }
  }
  else {
    lVar7 = 0;
    uVar1 = *(uint64_t *)(param_2 + 0x150);
    fVar9 = 1.0;
    if (3 < lVar2) {
      pfVar4 = (float *)(param_1 + 0x6c);
      lVar6 = (lVar2 - 4U >> 2) + 1;
      lVar7 = lVar6 * 4;
      do {
        if (((int)pfVar4[2] - 2U < 2) && (fVar9 = fVar9 - *pfVar4, fVar9 <= 0.0)) {
          fVar9 = 0.0;
        }
        if (((int)pfVar4[0x4d8] - 2U < 2) && (fVar9 = fVar9 - pfVar4[0x4d6], fVar9 <= 0.0)) {
          fVar9 = 0.0;
        }
        if (((int)pfVar4[0x9ae] - 2U < 2) && (fVar9 = fVar9 - pfVar4[0x9ac], fVar9 <= 0.0)) {
          fVar9 = 0.0;
        }
        if (((int)pfVar4[0xe84] - 2U < 2) && (fVar9 = fVar9 - pfVar4[0xe82], fVar9 <= 0.0)) {
          fVar9 = 0.0;
        }
        pfVar4 = pfVar4 + 0x1358;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar7 < lVar2) {
      pfVar4 = (float *)(param_1 + 0x6c + lVar7 * 0x1358);
      lVar2 = lVar2 - lVar7;
      do {
        if (((int)pfVar4[2] - 2U < 2) && (fVar9 = fVar9 - *pfVar4, fVar9 <= 0.0)) {
          fVar9 = 0.0;
        }
        pfVar4 = pfVar4 + 0x4d6;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    fVar8 = *(float *)(param_1 + 0x6150);
    uVar5 = (uint64_t)(uint)(int)param_4;
    fVar9 = ((fVar8 * 6.0 - 15.0) * fVar8 + 10.0) * fVar8 * fVar8 * fVar8 * fVar9;
    if ('\0' < param_4) {
      uVar3 = 1;
      do {
        if ((uVar1 & uVar3) == 0) {
LAB_18065bd31:
          fVar8 = 0.0;
        }
        else if (1.001358e-05 < fVar9) {
          fVar8 = 1.0 - fVar9;
          if (0.99999 < fVar9) goto LAB_18065bd31;
        }
        else {
          fVar8 = 1.0;
        }
        *param_3 = fVar8;
        param_3 = param_3 + 1;
        uVar3 = uVar3 << 1 | (uint64_t)((int64_t)uVar3 < 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}





// 函数: void FUN_18065bbcf(int64_t param_1,int64_t param_2,float *param_3)
void FUN_18065bbcf(int64_t param_1,int64_t param_2,float *param_3)

{
  uint64_t uVar1;
  int64_t in_RAX;
  uint64_t uVar2;
  float *pfVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  char in_R10B;
  int64_t in_R11;
  float fVar7;
  float fVar8;
  
  lVar5 = 0;
  uVar1 = *(uint64_t *)(param_2 + 0x150);
  fVar8 = 1.0;
  if (3 < in_RAX) {
    pfVar3 = (float *)(param_1 + 0x6c);
    lVar6 = (in_RAX - 4U >> 2) + 1;
    lVar5 = lVar6 * 4;
    do {
      if (((int)pfVar3[2] - 2U < 2) && (fVar8 = fVar8 - *pfVar3, fVar8 <= 0.0)) {
        fVar8 = 0.0;
      }
      if (((int)pfVar3[0x4d8] - 2U < 2) && (fVar8 = fVar8 - pfVar3[0x4d6], fVar8 <= 0.0)) {
        fVar8 = 0.0;
      }
      if (((int)pfVar3[0x9ae] - 2U < 2) && (fVar8 = fVar8 - pfVar3[0x9ac], fVar8 <= 0.0)) {
        fVar8 = 0.0;
      }
      if (((int)pfVar3[0xe84] - 2U < 2) && (fVar8 = fVar8 - pfVar3[0xe82], fVar8 <= 0.0)) {
        fVar8 = 0.0;
      }
      pfVar3 = pfVar3 + 0x1358;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar5 < in_RAX) {
    pfVar3 = (float *)(in_R11 + 0x6c + lVar5 * 0x1358);
    lVar5 = in_RAX - lVar5;
    do {
      if (((int)pfVar3[2] - 2U < 2) && (fVar8 = fVar8 - *pfVar3, fVar8 <= 0.0)) {
        fVar8 = 0.0;
      }
      pfVar3 = pfVar3 + 0x4d6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  fVar7 = *(float *)(in_R11 + 0x6150);
  uVar4 = (uint64_t)(uint)(int)in_R10B;
  fVar8 = ((fVar7 * 6.0 - 15.0) * fVar7 + 10.0) * fVar7 * fVar7 * fVar7 * fVar8;
  if ('\0' < in_R10B) {
    uVar2 = 1;
    do {
      if ((uVar1 & uVar2) == 0) {
LAB_18065bd31:
        fVar7 = 0.0;
      }
      else if (1.001358e-05 < fVar8) {
        fVar7 = 1.0 - fVar8;
        if (0.99999 < fVar8) goto LAB_18065bd31;
      }
      else {
        fVar7 = 1.0;
      }
      *param_3 = fVar7;
      param_3 = param_3 + 1;
      uVar2 = uVar2 << 1 | (uint64_t)((int64_t)uVar2 < 0);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}





// 函数: void FUN_18065bd4f(void)
void FUN_18065bd4f(void)

{
  return;
}





// 函数: void FUN_18065bd60(int64_t param_1)
void FUN_18065bd60(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  
  puVar5 = (uint64_t *)(param_1 + 0x1398);
  lVar2 = 4;
  do {
    *(int32_t *)(puVar5 + -0x266) = 0xffffffff;
    puVar4 = puVar5 + -0x264;
    *(int32_t *)((int64_t)puVar5 + -0x132c) = 0x3f800000;
    lVar6 = 0x12;
    puVar5[-0x265] = 0x3f800000;
    puVar5[-0x1b] = 0;
    do {
      *(int32_t *)(puVar4 + 0x20) = 0xffffffff;
      lVar3 = 4;
      puVar1 = puVar4;
      do {
        *puVar1 = 0xffffffffffffffff;
        puVar1[1] = 0xffffffffffffffff;
        puVar1[2] = 0xffffffffffffffff;
        puVar1[3] = 0xffffffffffffffff;
        puVar1[4] = 0xffffffffffffffff;
        puVar1[5] = 0xffffffffffffffff;
        puVar1[6] = 0xffffffffffffffff;
        puVar1[7] = 0xffffffffffffffff;
        lVar3 = lVar3 + -1;
        puVar1 = puVar1 + 8;
      } while (lVar3 != 0);
      puVar4 = (uint64_t *)((int64_t)puVar4 + 0x104);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar5[-0x1a] = 0;
    puVar5[-0x19] = 0;
    *(int32_t *)(puVar5 + -0x17) = 0x7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0xb4) = 0x7149f2ca;
    *(int32_t *)(puVar5 + -0x16) = 0x7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0xac) = 0x7f7fffff;
    puVar5[-0x18] = 0x7149f2ca7149f2ca;
    *(int32_t *)(puVar5 + -0x15) = 0x7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0xa4) = 0x7149f2ca;
    *(int32_t *)(puVar5 + -0x14) = 0x7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0x9c) = 0x7f7fffff;
    *(int16_t *)(puVar5 + -0x13) = 0;
    *(uint64_t *)((int64_t)puVar5 + -0x94) = 0;
    *(uint64_t *)((int64_t)puVar5 + -0x8c) = 0;
    *(uint64_t *)((int64_t)puVar5 + -0x84) = 0;
    *(uint64_t *)((int64_t)puVar5 + -0x7c) = 0;
    *(int32_t *)((int64_t)puVar5 + -0x74) = 0;
    *(int8_t *)(puVar5 + -0xe) = 0;
    *(uint64_t *)((int64_t)puVar5 + -0x6c) = 0;
    *(uint64_t *)((int64_t)puVar5 + -100) = 0;
    *(int32_t *)((int64_t)puVar5 + -0x54) = 0x7149f2ca;
    *(int32_t *)(puVar5 + -10) = 0x7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0x4c) = 0x7149f2ca;
    *(int32_t *)(puVar5 + -9) = 0x7f7fffff;
    *(uint64_t *)((int64_t)puVar5 + -0x5c) = 0x7149f2ca7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0x44) = 0x7149f2ca;
    *(int32_t *)(puVar5 + -8) = 0x7149f2ca;
    *(int32_t *)((int64_t)puVar5 + -0x3c) = 0x7149f2ca;
    *(int32_t *)(puVar5 + -7) = 0x7f7fffff;
    *(int16_t *)((int64_t)puVar5 + -0x34) = 0;
    puVar5[-6] = 0;
    puVar5[-5] = 0;
    puVar5[-4] = 0;
    puVar5[-3] = 0;
    *(int32_t *)(puVar5 + -2) = 0;
    *(int8_t *)((int64_t)puVar5 + -0xc) = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    *(int32_t *)(puVar5 + 1) = 0;
    *(int32_t *)((int64_t)puVar5 + 0xc) = 0x1010000;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(int32_t *)(puVar5 + 4) = 0;
    *(int32_t *)((int64_t)puVar5 + 0x24) = 0x1010000;
    puVar5 = puVar5 + 0x26b;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  func_0x000180668820(param_1 + 0x4dc8);
  *(int32_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x6120) = 0;
  return;
}





// 函数: void FUN_18065bf60(int64_t param_1)
void FUN_18065bf60(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(uint *)(param_1 + 0x20) ^ 0x80000000);
}





// 函数: void FUN_18065c070(int64_t param_1)
void FUN_18065c070(int64_t param_1)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(uint *)(param_1 + 0x20) ^ 0x80000000);
}





// 函数: void FUN_18065c20a(int64_t param_1)
void FUN_18065c20a(int64_t param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int64_t unaff_RBP;
  int8_t *unaff_RSI;
  float *unaff_RDI;
  char *pcVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  int64_t lStack0000000000000028;
  int64_t lStack0000000000000030;
  int32_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000048;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000058;
  uint64_t in_stack_00000060;
  int8_t *puStack0000000000000070;
  char *pcStack0000000000000088;
  float fStack0000000000000090;
  float fStack0000000000000098;
  uint64_t in_stack_000000a0;
  int64_t in_stack_000001b0;
  int8_t *in_stack_000001c0;
  float fStack00000000000001c8;
  
  pcStack0000000000000088 = (char *)(param_1 + 0x1300);
  do {
    pfVar8 = (float *)(pcStack0000000000000088 + 0x9c);
    iVar7 = 0;
    pcVar6 = pcStack0000000000000088;
    do {
      if (*pcVar6 != '\0') {
        if (*(char *)((int64_t)pfVar8 + 10) == '\0') {
          fVar9 = 0.0;
        }
        else {
          fVar9 = pfVar8[1] * 0.05;
        }
        if (fVar9 + pfVar8[-3] < *pfVar8) {
          fVar9 = unaff_RDI[9];
          fVar1 = unaff_RDI[10];
          fVar2 = unaff_RDI[6];
          fStack0000000000000090 = unaff_RDI[2];
          fVar3 = unaff_RDI[8];
          fVar4 = unaff_RDI[4];
          fVar5 = unaff_RDI[5];
          fVar10 = fVar5 * fVar1 - fVar9 * fVar2;
          fStack0000000000000098 = fVar9 * fStack0000000000000090;
          fStack00000000000001c8 =
               ((((fVar5 * unaff_RDI[0xe] - unaff_RDI[0xd] * fVar2) * fVar3 -
                 fVar4 * (fVar9 * unaff_RDI[0xe] - unaff_RDI[0xd] * fVar1)) -
                fVar10 * unaff_RDI[0xc]) +
               (fVar3 * fVar2 - fVar4 * unaff_RDI[10]) * *(float *)(pcVar6 + -0x1c) +
               *(float *)(pcVar6 + -0x20) * fVar10) *
               (1.0 / ((unaff_RDI[1] * fVar2 - fVar5 * fStack0000000000000090) * fVar3 +
                      *unaff_RDI * fVar10 + fVar4 * (fStack0000000000000098 - unaff_RDI[1] * fVar1))
               );
          uStack0000000000000058 = *(int32_t *)(param_1 + 0x44);
          lStack0000000000000030 = param_1 + 0x6178;
          uStack0000000000000050 = *(int32_t *)(param_1 + 0x40);
          lStack0000000000000028 = param_1 + 0x6150;
          uStack0000000000000048 = *(int32_t *)(param_1 + 0x38);
          uStack0000000000000040 = 0;
          uStack0000000000000038 = 0;
          puStack0000000000000070 = unaff_RSI;
          FUN_180669700(pcStack0000000000000088 + -0x1298,&stack0x00000078,
                        *(uint64_t *)(unaff_RBP + 0x208),iVar7,*unaff_RSI);
                    // WARNING: Subroutine does not return
          FUN_1808fd400(*(int32_t *)(in_stack_000001b0 + 0x20));
        }
      }
      unaff_RSI = unaff_RSI + 1;
      iVar7 = iVar7 + 1;
      pcVar6 = pcVar6 + 100;
      pfVar8 = pfVar8 + 6;
    } while (iVar7 < 2);
    pcStack0000000000000088 = pcStack0000000000000088 + 0x1358;
    in_stack_00000060._4_4_ = in_stack_00000060._4_4_ + 1;
    unaff_RSI = in_stack_000001c0;
    if (*(int *)(param_1 + 0x60) <= in_stack_00000060._4_4_) {
      *(int32_t *)(param_1 + 0x58) = in_stack_000000a0._4_4_;
      return;
    }
  } while( true );
}





// 函数: void FUN_18065c8ba(int32_t param_1)
void FUN_18065c8ba(int32_t param_1)

{
  int64_t in_RCX;
  
  *(int32_t *)(in_RCX + 0x58) = param_1;
  return;
}





// 函数: void FUN_18065c8f0(void)
void FUN_18065c8f0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_18065cb80(int64_t param_1)
void FUN_18065cb80(int64_t param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    fVar4 = 0.0;
    pfVar2 = (float *)(param_1 + 0x6c);
    iVar1 = iVar3;
    do {
      if (fVar4 < *pfVar2) {
        if (iVar3 < iVar1) {
          func_0x0001806689f0((int64_t)iVar3 * 0x1358 + 0x68 + param_1,
                              param_1 + 0x68 + (int64_t)iVar1 * 0x1358);
        }
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 0x4d6;
    } while (iVar1 < *(int *)(param_1 + 0x60));
    *(int *)(param_1 + 0x60) = iVar3;
    return;
  }
  *(int32_t *)(param_1 + 0x60) = 0;
  return;
}





// 函数: void FUN_18065cb98(int64_t param_1)
void FUN_18065cb98(int64_t param_1)

{
  int unaff_EBX;
  float *pfVar1;
  int64_t unaff_RDI;
  int in_R11D;
  float fVar2;
  
  fVar2 = 0.0;
  pfVar1 = (float *)(param_1 + 0x6c);
  do {
    if (fVar2 < *pfVar1) {
      if (in_R11D < unaff_EBX) {
        func_0x0001806689f0((int64_t)in_R11D * 0x1358 + 0x68 + unaff_RDI,
                            unaff_RDI + 0x68 + (int64_t)unaff_EBX * 0x1358);
      }
      in_R11D = in_R11D + 1;
    }
    unaff_EBX = unaff_EBX + 1;
    pfVar1 = pfVar1 + 0x4d6;
  } while (unaff_EBX < *(int *)(unaff_RDI + 0x60));
  *(int *)(unaff_RDI + 0x60) = in_R11D;
  return;
}





// 函数: void FUN_18065cbfa(int64_t param_1)
void FUN_18065cbfa(int64_t param_1)

{
  int32_t in_R11D;
  
  *(int32_t *)(param_1 + 0x60) = in_R11D;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18065cc10(int64_t param_1)
void FUN_18065cc10(int64_t param_1)

{
  int64_t *plVar1;
  uint64_t uVar2;
  uint uVar3;
  int32_t uVar5;
  int8_t auStack_98 [32];
  void *apuStack_78 [10];
  uint64_t uStack_28;
  uint64_t uVar4;
  
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  apuStack_78[0] = &unknown_var_3028_ptr;
  apuStack_78[1] = &unknown_var_3040_ptr;
  apuStack_78[2] = &unknown_var_3120_ptr;
  apuStack_78[3] = &unknown_var_2636_ptr;
  apuStack_78[4] = &unknown_var_3104_ptr;
  apuStack_78[5] = &unknown_var_2712_ptr;
  apuStack_78[6] = &unknown_var_3152_ptr;
  apuStack_78[7] = &unknown_var_3136_ptr;
  apuStack_78[8] = &unknown_var_3056_ptr;
  apuStack_78[9] = &unknown_var_3048_ptr;
  plVar1 = (int64_t *)(**(code **)(*ui_system_data_config + 0x70))(ui_system_data_config,&unknown_var_1840_ptr);
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,*(int32_t *)(param_1 + 0x38));
  (**(code **)(*plVar1 + 0x70))(plVar1,&system_data_fd38);
  plVar1 = (int64_t *)(**(code **)(*ui_system_data_config + 0x70))(ui_system_data_config,&unknown_var_1864_ptr);
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,*(int32_t *)(param_1 + 0x3c));
  (**(code **)(*plVar1 + 0x70))(plVar1,&system_data_fd38);
  plVar1 = (int64_t *)(**(code **)(*ui_system_data_config + 0x70))(ui_system_data_config,&unknown_var_1936_ptr);
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,*(int32_t *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x70))(plVar1,&system_data_fd38);
  plVar1 = (int64_t *)(**(code **)(*ui_system_data_config + 0x70))(ui_system_data_config,&unknown_var_1952_ptr);
  plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,*(int32_t *)(param_1 + 0x44));
  (**(code **)(*plVar1 + 0x70))(plVar1,&system_data_fd38);
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)(param_1 + 0x60)) {
    do {
      plVar1 = (int64_t *)(**(code **)(*ui_system_data_config + 0x70))(ui_system_data_config,&unknown_var_1896_ptr);
      plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,*(int32_t *)(param_1 + 4));
      (**(code **)(*plVar1 + 0x70))(plVar1,&system_data_fd38);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x60));
  }
  do {
    if (0.0 < *(float *)(param_1 + 0x6150 + uVar2 * 4)) {
      plVar1 = (int64_t *)(**(code **)(*ui_system_data_config + 0x70))(ui_system_data_config,&unknown_var_1912_ptr);
      plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x70))(plVar1,apuStack_78[uVar2]);
      plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x70))(plVar1,&unknown_var_1880_ptr);
      if (uVar2 == 0) {
        uVar5 = *(int32_t *)(param_1 + 0x3c);
      }
      else if ((int64_t)uVar2 < 9) {
        if (uVar2 - 7 < 2) {
          uVar5 = *(int32_t *)(param_1 + 0x44);
        }
        else {
          uVar5 = *(int32_t *)(param_1 + 0x38);
        }
      }
      else {
        uVar5 = *(int32_t *)(param_1 + 0x40);
      }
      plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x28))(plVar1,uVar5);
      plVar1 = (int64_t *)(**(code **)(*plVar1 + 0x70))(plVar1,&system_data_c248);
      (**(code **)(*plVar1 + 0x28))(plVar1,*(int32_t *)(param_1 + 0x6150 + uVar2 * 4));
    }
    uVar2 = uVar2 + 1;
  } while ((int64_t)uVar2 < 10);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_98);
}



uint64_t FUN_18065cec0(int64_t param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  
  iVar3 = 0;
  lVar1 = *(int64_t *)(param_1 + (int64_t)param_2 * 8);
  plVar4 = (int64_t *)(lVar1 + 0x198);
  do {
    if ((int64_t *)*plVar4 != (int64_t *)0x0) {
      iVar2 = (**(code **)(*(int64_t *)*plVar4 + 0x18))();
      if (iVar2 == 1) {
        return *(uint64_t *)(lVar1 + 0x198 + (int64_t)iVar3 * 8);
      }
    }
    iVar3 = iVar3 + 1;
    plVar4 = plVar4 + 1;
  } while (iVar3 < 2);
  return 0;
}



uint64_t * FUN_18065cf30(uint64_t *param_1,uint64_t param_2)

{
  param_1[399] = 0;
  *param_1 = &unknown_var_1984_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xc88);
  }
  return param_1;
}



uint64_t FUN_18065cf70(int64_t param_1,float param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  uVar4 = (uint64_t)*(int *)(param_1 + 0x10);
  lVar8 = uVar4 * 0x30;
  uVar7 = uVar4;
  do {
    iVar6 = 0;
    lVar5 = 0;
    lVar2 = *(int64_t *)(lVar8 + *(int64_t *)(param_1 + 0xc78));
    plVar3 = (int64_t *)(lVar2 + 0x198);
    do {
      if ((int64_t *)*plVar3 != (int64_t *)0x0) {
        iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))();
        if (iVar1 == 1) {
          lVar2 = *(int64_t *)(lVar2 + 0x198 + lVar5 * 8);
          goto LAB_18065cfea;
        }
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar6 < 2);
    lVar2 = 0;
LAB_18065cfea:
    if ((param_2 < *(float *)(lVar2 + 0x10) || param_2 == *(float *)(lVar2 + 0x10)) ||
       (*(int *)(param_1 + 8) + -1 <= (int)uVar4)) {
      lVar8 = uVar7 * 0x30;
      do {
        iVar6 = 0;
        lVar5 = 0;
        lVar2 = *(int64_t *)(lVar8 + *(int64_t *)(param_1 + 0xc78));
        plVar3 = (int64_t *)(lVar2 + 0x198);
        do {
          if ((int64_t *)*plVar3 != (int64_t *)0x0) {
            iVar1 = (**(code **)(*(int64_t *)*plVar3 + 0x18))();
            if (iVar1 == 1) {
              lVar2 = *(int64_t *)(lVar2 + 0x198 + lVar5 * 8);
              goto LAB_18065d05a;
            }
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (iVar6 < 2);
        lVar2 = 0;
LAB_18065d05a:
        if ((*(float *)(lVar2 + 0xc) <= param_2) || ((int64_t)uVar7 < 1)) {
          return uVar4 & 0xffffffff;
        }
        uVar4 = (uint64_t)((int)uVar4 - 1);
        uVar7 = uVar7 - 1;
        lVar8 = lVar8 + -0x30;
      } while( true );
    }
    uVar4 = (uint64_t)((int)uVar4 + 1);
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x30;
  } while( true );
}





// 函数: void FUN_18065d0a0(int64_t param_1,float param_2,uint64_t param_3,float param_4)
void FUN_18065d0a0(int64_t param_1,float param_2,uint64_t param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int32_t uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
  uVar4 = (int)uVar2 >> 0x1f;
  if ((int)((uVar2 ^ uVar4) - uVar4) < 2) {
    fVar6 = 2.0;
  }
  else {
    fVar6 = 4.0;
  }
  fVar12 = 1.0;
  fVar11 = (2.0 - param_4) * fVar6 * param_2;
  fVar6 = fVar11 + *(float *)(param_1 + 0x2c);
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  *(float *)(param_1 + 0x2c) = fVar6;
  uVar4 = FUN_18065cf70(fVar6,*(int32_t *)(param_1 + 0x1c));
  uVar2 = uVar4;
  if ((1 < (int)uVar4) &&
     (uVar2 = *(uint *)(param_1 + 0xc), (int)*(uint *)(param_1 + 0xc) < (int)uVar4)) {
    uVar2 = uVar4;
  }
  if (((uVar2 & 0xfffffffd) == 0) &&
     (ABS(*(float *)(param_1 + 0x1c)) * 2.0 < ABS(*(float *)(param_1 + 0x18)))) {
    uVar2 = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar2 != uVar4) {
    fVar6 = *(float *)(param_1 + 0x2c);
    if (fVar6 <= 0.9999) {
      if (fVar11 + 0.0001 <= fVar6) {
        if ((uVar4 != 1) || (0.5 < fVar6)) {
          fVar6 = fVar11 * 1.5 + fVar6;
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
          *(float *)(param_1 + 0x2c) = fVar6;
        }
        else {
          uVar4 = 1;
          fVar6 = fVar6 - (fVar11 + fVar11);
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          *(float *)(param_1 + 0x2c) = fVar6;
        }
      }
      else {
        *(uint *)(param_1 + 0x10) = uVar2;
        *(int32_t *)(param_1 + 0x2c) = 0;
        uVar4 = uVar2;
      }
    }
    else {
      *(uint *)(param_1 + 0x14) = uVar4;
      *(uint *)(param_1 + 0x10) = uVar2;
      *(int32_t *)(param_1 + 0x2c) = 0;
      uVar4 = uVar2;
    }
  }
  fVar6 = 0.0;
  fVar11 = 0.0;
  if (uVar4 == 1) {
    fVar10 = 0.2;
    fVar9 = 0.05;
    uVar4 = 1;
  }
  else {
    fVar9 = (1.0 - param_4) * 3.5 + 0.4;
    fVar10 = (1.0 - param_4) * 4.0 + 0.5;
  }
  fVar7 = *(float *)(param_1 + 0x34);
  fVar1 = *(float *)(param_1 + 0x38);
  if (fVar7 + fVar1 <= 0.0) {
    fVar9 = fVar10;
  }
  fVar10 = ABS(*(float *)(param_1 + 0x18));
  if (fVar10 <= fVar9) {
    if ((*(char *)(param_1 + 0x28) != '\0') || ((fVar1 == 0.0 && (fVar7 == 0.0)))) {
      if (*(char *)(param_1 + 0x29) == '\0') {
        fVar9 = 0.5;
      }
      else {
        fVar9 = 0.1;
      }
      if ((fVar9 < *(float *)(param_1 + 0x20)) && (uVar4 == 1)) {
        *(char *)(param_1 + 0x28) = (char)uVar4;
        goto LAB_18065d2fb;
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        fVar9 = 0.5;
      }
      else {
        fVar9 = 0.1;
      }
      if ((-*(float *)(param_1 + 0x20) <= fVar9) || (uVar4 != 1)) {
        if ((fVar1 == 0.0) && (fVar7 == 0.0)) {
          *(int8_t *)(param_1 + 0x28) = 0;
        }
      }
      else {
        *(char *)(param_1 + 0x28) = (char)uVar4;
        fVar11 = 1.0;
      }
    }
  }
  else if ((*(char *)(param_1 + 0x28) == '\0') || ((fVar7 == 0.0 && (fVar1 == 0.0)))) {
    *(int8_t *)(param_1 + 0x28) = 0;
    if (*(float *)(param_1 + 0x18) <= 0.0) {
LAB_18065d2fb:
      fVar6 = 1.0;
    }
    else {
      fVar11 = 1.0;
    }
  }
  fVar9 = *(float *)(param_1 + 0x2c);
  fVar9 = (3.0 - (fVar9 + fVar9)) * fVar9 * fVar9;
  if (uVar4 == 1) {
    fVar10 = (float)FUN_180660070(*(int64_t *)(param_1 + 0xc78) + 0x30,fVar10);
  }
  else {
    fVar10 = (float)FUN_18065ffa0((int64_t)(int)uVar4 * 0x30 + *(int64_t *)(param_1 + 0xc78),
                                  *(int32_t *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x14) == 1) {
    fVar7 = (float)FUN_180660070(*(int64_t *)(param_1 + 0xc78) + 0x30,
                                 *(uint *)(param_1 + 0x18) & 0x7fffffff);
  }
  else {
    fVar7 = (float)FUN_18065ffa0((int64_t)*(int *)(param_1 + 0x14) * 0x30 +
                                 *(int64_t *)(param_1 + 0xc78),*(int32_t *)(param_1 + 0x1c));
  }
  fVar9 = fVar10 * fVar9 + fVar7 * (1.0 - fVar9);
  if (fVar9 <= 0.0) {
LAB_18065d446:
    fVar10 = 0.0;
  }
  else {
    lVar3 = FUN_18065cec0((int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78)
                          ,0);
    fVar10 = *(float *)(lVar3 + 8) / fVar9;
    if ((fVar10 == 0.0) ||
       (fVar10 = ABS(*(float *)(param_1 + 0x1c)) / ((param_4 * 0.9 + 0.1) * fVar10), fVar10 < 0.0))
    goto LAB_18065d446;
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  if ((*(char *)(param_1 + 0x28) == '\0') && ((fVar6 != 0.0 || (fVar11 != 0.0)))) {
    lVar3 = FUN_18065cec0((int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78)
                          ,2);
    fVar9 = (*(float *)(param_1 + 0x18) * fVar9) / *(float *)(lVar3 + 8);
    if (0.0 <= *(float *)(param_1 + 0x18)) {
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      fVar11 = fVar11 * fVar9 * *(float *)(param_1 + 0x2c);
    }
    else {
      fVar9 = -fVar9;
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      fVar6 = fVar6 * fVar9 * *(float *)(param_1 + 0x2c);
    }
  }
  fVar9 = *(float *)(param_1 + 0x38);
  fVar7 = 5.0;
  if (fVar9 <= fVar6) {
    if (fVar9 < fVar6) {
      fVar9 = param_2 + param_2 + fVar9;
      if (fVar6 <= fVar9) {
        fVar9 = fVar6;
      }
      goto LAB_18065d515;
    }
  }
  else {
    if (*(char *)(param_1 + 0x28) == '\0') {
      fVar9 = fVar9 - param_2 * 5.0;
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
    }
    else {
      fVar9 = fVar9 - param_2 * 4.0;
      if (fVar9 <= fVar6) {
        fVar9 = fVar6;
      }
    }
LAB_18065d515:
    *(float *)(param_1 + 0x38) = fVar9;
  }
  fVar6 = *(float *)(param_1 + 0x34);
  if (fVar6 <= fVar11) {
    if (fVar11 <= fVar6) goto LAB_18065d55b;
    fVar6 = param_2 + param_2 + fVar6;
    if (fVar11 <= fVar6) {
      fVar6 = fVar11;
    }
  }
  else {
    if (*(char *)(param_1 + 0x28) != '\0') {
      fVar7 = 4.0;
    }
    fVar6 = fVar6 - fVar7 * param_2;
    if (fVar6 <= fVar11) {
      fVar6 = fVar11;
    }
  }
  *(float *)(param_1 + 0x34) = fVar6;
LAB_18065d55b:
  fVar11 = *(float *)(param_1 + 0x30);
  if (fVar11 <= fVar10) {
    if (fVar11 < fVar10) {
      fVar11 = param_2 + param_2 + fVar11;
      if (fVar10 <= fVar11) {
        fVar11 = fVar10;
      }
      *(float *)(param_1 + 0x30) = fVar11;
    }
  }
  else {
    fVar11 = fVar11 - param_2 * 4.0;
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
    *(float *)(param_1 + 0x30) = fVar11;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if ((iVar5 == 1) && ((fVar9 != 0.0 || (fVar6 != 0.0)))) {
    fVar6 = (float)FUN_180660070(*(int64_t *)(param_1 + 0xc78) + 0x30,
                                 *(uint *)(param_1 + 0x18) & 0x7fffffff);
    iVar5 = *(int *)(param_1 + 0x10);
    fVar6 = param_2 / fVar6;
  }
  else {
    fVar6 = 0.0;
  }
  if ((iVar5 == 1) || ((*(int *)(param_1 + 0x14) == 1 && (*(float *)(param_1 + 0x2c) != 1.0)))) {
    uVar8 = fmodf(param_2 / *(float *)(*(int64_t *)
                                        (*(int64_t *)(param_1 + 0xc78) + 8 + (int64_t)iVar5 * 0x30
                                        ) + 0x188) + *(float *)(param_1 + 0x44),0x3f800000);
    *(int32_t *)(param_1 + 0x44) = uVar8;
  }
  else {
    *(int32_t *)(param_1 + 0x44) = 0;
  }
  if ((iVar5 == 1) && (*(float *)(param_1 + 0x2c) == 1.0)) {
    *(int32_t *)(param_1 + 0x40) = 0;
  }
  else {
    fVar9 = (float)FUN_18065ffa0((int64_t)iVar5 * 0x30 + *(int64_t *)(param_1 + 0xc78),
                                 *(uint *)(param_1 + 0x1c) & 0x7fffffff);
    fVar11 = param_2 / fVar9;
    if (param_2 / fVar9 <= fVar6) {
      fVar11 = fVar6;
    }
    fVar11 = fVar11 + *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x40) = fVar11;
    if (1.0 < fVar11) {
      uVar8 = fmodf(fVar11,0x3f800000);
      *(int32_t *)(param_1 + 0x40) = uVar8;
    }
  }
  if ((0.0 < *(float *)(param_1 + 0x38)) || (0.0 < *(float *)(param_1 + 0x34))) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      fVar6 = *(float *)(param_1 + 0x20);
      lVar3 = (int64_t)*(int *)(param_1 + 0x10) * 0x30 + *(int64_t *)(param_1 + 0xc78);
      fVar11 = *(float *)(*(int64_t *)(lVar3 + 0x20) + 0x188);
      lVar3 = FUN_18065cec0(lVar3,4);
      fVar6 = (ABS(fVar6) / (fVar11 * *(float *)(lVar3 + 8))) * param_2;
    }
    fVar6 = fVar6 + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = fVar6;
    if (1.0 < fVar6) {
      *(float *)(param_1 + 0x24) = fVar6 - 1.0;
    }
  }
  else {
    *(int32_t *)(param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    fVar6 = 0.5;
  }
  else {
    fVar6 = 0.1;
  }
  if (*(float *)(param_1 + 0x20) <= fVar6) {
    if (((*(int *)(param_1 + 0x10) != 5) &&
        ((*(int *)(param_1 + 0x14) != 5 ||
         (1.0 < *(float *)(param_1 + 0x2c) || *(float *)(param_1 + 0x2c) == 1.0)))) ||
       (fVar6 = *(float *)(param_1 + 0x3c), fVar6 < 0.001)) {
      *(int32_t *)(param_1 + 0x3c) = 0;
    }
    else {
      *(float *)(param_1 + 0x3c) = fVar6 - fVar6 * param_2 * 4.0;
    }
  }
  else {
    if (((*(int *)(param_1 + 0x10) == 5) ||
        ((*(int *)(param_1 + 0x14) == 5 &&
         (*(float *)(param_1 + 0x2c) <= 1.0 && *(float *)(param_1 + 0x2c) != 1.0)))) &&
       (fVar6 = *(float *)(param_1 + 0x3c), fVar6 <= 0.999)) {
      fVar12 = (1.0 - fVar6) * param_2 * 4.0 + fVar6;
    }
    *(float *)(param_1 + 0x3c) = fVar12;
  }
  return;
}





