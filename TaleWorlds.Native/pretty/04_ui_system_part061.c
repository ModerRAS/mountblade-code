#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part061.c - 5 个函数

// 函数: void FUN_180698c64(uint64_t param_1)
void FUN_180698c64(uint64_t param_1)

{
  int32_t *unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_R13;
  byte unaff_R15B;
  uint64_t in_stack_00000090;
  int64_t in_stack_000000a0;
  int in_stack_000000a8;
  
  do {
    if (0 < *(int *)(unaff_R13 + 3000)) {
      if (*(char *)(unaff_RSI + 9) != '\0') {
        unaff_R15B = unaff_R15B >> 1;
      }
                    // WARNING: Subroutine does not return
      memset(param_1,unaff_R15B,0x10);
    }
    unaff_RSI = unaff_RSI + 0x4c;
    func_0x0001800285b0((int64_t)(unaff_RBX[4] * in_stack_000000a8 * 0x10) +
                        *(int64_t *)(unaff_RBX + 0xe),
                        (int64_t)(*(int *)(in_stack_000000a0 + 0x10) * in_stack_000000a8 * 0x10) +
                        *(int64_t *)(in_stack_000000a0 + 0x38),unaff_RBX[4],
                        *(int *)(in_stack_000000a0 + 0x10),*unaff_RBX);
    func_0x0001800285b0((int64_t)(unaff_RBX[9] * in_stack_000000a8 * 8) +
                        *(int64_t *)(unaff_RBX + 0x10),
                        (int64_t)(*(int *)(in_stack_000000a0 + 0x24) * in_stack_000000a8 * 8) +
                        *(int64_t *)(in_stack_000000a0 + 0x40),unaff_RBX[9],
                        *(int *)(in_stack_000000a0 + 0x24),unaff_RBX[5]);
    func_0x0001800285b0((int64_t)(unaff_RBX[9] * in_stack_000000a8 * 8) +
                        *(int64_t *)(unaff_RBX + 0x12),
                        (int64_t)(*(int *)(in_stack_000000a0 + 0x24) * in_stack_000000a8 * 8) +
                        *(int64_t *)(in_stack_000000a0 + 0x48),unaff_RBX[9],
                        *(int *)(in_stack_000000a0 + 0x24),unaff_RBX[5]);
    in_stack_000000a8 = in_stack_000000a8 + 1;
    param_1 = in_stack_00000090;
  } while (in_stack_000000a8 < *(int *)(unaff_R13 + 0xbb4));
  return;
}





// 函数: void FUN_180698e02(void)
void FUN_180698e02(void)

{
  FUN_18069c540();
  return;
}



uint64_t FUN_180698e20(int64_t param_1,uint64_t *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  uint64_t in_stack_ffffffffffffffa8;
  int32_t uVar8;
  
  uVar8 = (int32_t)((uint64_t)in_stack_ffffffffffffffa8 >> 0x20);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  puVar4 = *(uint64_t **)(param_1 + 0x778);
  iVar6 = (*(int *)(param_1 + 0x1920) * 10) / 6;
  if (puVar4 == (uint64_t *)0x0) {
    return 0xffffffff;
  }
  if (0x3f < iVar6) {
    iVar6 = 0x3f;
  }
  if (uVar1 == 0) {
    uVar5 = puVar4[1];
    *param_2 = *puVar4;
    param_2[1] = uVar5;
    uVar5 = puVar4[3];
    param_2[2] = puVar4[2];
    param_2[3] = uVar5;
    uVar5 = puVar4[5];
    param_2[4] = puVar4[4];
    param_2[5] = uVar5;
    uVar5 = puVar4[7];
    param_2[6] = puVar4[6];
    param_2[7] = uVar5;
    uVar5 = puVar4[9];
    param_2[8] = puVar4[8];
    param_2[9] = uVar5;
    uVar5 = puVar4[0xb];
    param_2[10] = puVar4[10];
    param_2[0xb] = uVar5;
    uVar5 = puVar4[0xd];
    param_2[0xc] = puVar4[0xc];
    param_2[0xd] = uVar5;
    uVar5 = puVar4[0xf];
    param_2[0xe] = puVar4[0xe];
    param_2[0xf] = uVar5;
    uVar5 = puVar4[0x11];
    param_2[0x10] = puVar4[0x10];
    param_2[0x11] = uVar5;
    *(int32_t *)param_2 = *(int32_t *)(param_1 + 0x760);
    iVar6 = *(int *)(param_1 + 0x764);
    *(int *)((int64_t)param_2 + 4) = iVar6;
    *(int *)(param_2 + 3) = iVar6 / 2;
    *(int32_t *)(param_1 + 0x2e38) = *(int32_t *)(param_1 + 0xbd0);
    *(int32_t *)(param_1 + 0x2e3c) = 1;
  }
  else {
    if ((((uVar1 & 0x400) != 0) && (*(int *)(param_1 + 0xb90) == 0)) && ((uVar1 & 3) != 0)) {
      iVar6 = FUN_180697e60(param_1 + 0xb00,*(int *)(param_1 + 0x760) + 0xfU & 0xfffffff0,
                            *(int *)(param_1 + 0x764) + 0xfU & 0xfffffff0,0x20);
      if (iVar6 != 0) {
        SystemInitializationProcessor(param_1,2,&processed_var_6048_ptr);
      }
      *(int32_t *)(param_1 + 0xb90) = 1;
                    // WARNING: Subroutine does not return
      memset(*(uint64_t *)(param_1 + 0xb58),0x80,(int64_t)*(int *)(param_1 + 0xad8));
    }
    func_0x000180001000();
    if ((((uVar1 & 0x400) == 0) || (*(int *)(param_1 + 0x2e3c) == 0)) ||
       ((*(uint *)(param_1 + 0x221c) < 2 ||
        ((0x3b < *(int *)(param_1 + 0x2e38) ||
         (*(int *)(param_1 + 0xbd0) - *(int *)(param_1 + 0x2e38) < 0x14)))))) {
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 1) == 0) {
          FUN_18069c540(*(uint64_t *)(param_1 + 0x778),param_1 + 0xa70);
        }
        else {
          FUN_180698bb0(param_1,*(uint64_t *)(param_1 + 0x778),param_1 + 0xa70,iVar6,
                        CONCAT44(uVar8,1),0);
        }
      }
      else {
        iVar7 = iVar6 + (uVar2 - 5) * 10;
        FUN_180698bb0(param_1,*(uint64_t *)(param_1 + 0x778),param_1 + 0xa70,iVar7,
                      CONCAT44(uVar8,1),0);
        FUN_180698b00(param_1 + 0xa70,iVar7);
      }
      *(int32_t *)(param_1 + 0x2e38) = *(int32_t *)(param_1 + 0xbd0);
    }
    else {
      FUN_18069e6e0(param_1);
      if (((uVar1 & 3) != 0) && (*(int *)(param_1 + 0xb90) != 0)) {
        FUN_18069c540(param_1 + 0xa70,param_1 + 0xb00);
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 1) != 0) {
            FUN_180698bb0(param_1,param_1 + 0xb00,param_1 + 0xa70,iVar6,CONCAT44(uVar8,1),0);
          }
        }
        else {
          iVar7 = iVar6 + (uVar2 - 5) * 10;
          FUN_180698bb0(param_1,param_1 + 0xb00,param_1 + 0xa70,iVar7,CONCAT44(uVar8,1),0);
          FUN_180698b00(param_1 + 0xa70,iVar7);
        }
      }
      *(int *)(param_1 + 0x2e38) = *(int *)(param_1 + 0x2e38) * 3 + *(int *)(param_1 + 0xbd0) >> 2;
    }
    *(int32_t *)(param_1 + 0x2e3c) = 1;
    if ((uVar1 & 4) != 0) {
      if ((*(int *)(param_1 + 0x2230) != iVar6) || (*(uint *)(param_1 + 0x2234) != uVar3)) {
        FUN_1806988d0((int *)(param_1 + 0x2230),0x3f - iVar6,uVar3);
      }
      func_0x000180028cc5(*(uint64_t *)(param_1 + 0xaa8),param_1 + 0x2238,param_1 + 0x2e40,
                          param_1 + 0x2e50,param_1 + 0x2e60,*(int32_t *)(param_1 + 0xa70),
                          *(int32_t *)(param_1 + 0xa74),*(int32_t *)(param_1 + 0xa80));
    }
    uVar5 = *(uint64_t *)(param_1 + 0xa78);
    *param_2 = *(uint64_t *)(param_1 + 0xa70);
    param_2[1] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xa88);
    param_2[2] = *(uint64_t *)(param_1 + 0xa80);
    param_2[3] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xa98);
    param_2[4] = *(uint64_t *)(param_1 + 0xa90);
    param_2[5] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xaa8);
    param_2[6] = *(uint64_t *)(param_1 + 0xaa0);
    param_2[7] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xab8);
    param_2[8] = *(uint64_t *)(param_1 + 0xab0);
    param_2[9] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xac8);
    param_2[10] = *(uint64_t *)(param_1 + 0xac0);
    param_2[0xb] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xad8);
    param_2[0xc] = *(uint64_t *)(param_1 + 0xad0);
    param_2[0xd] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xae8);
    param_2[0xe] = *(uint64_t *)(param_1 + 0xae0);
    param_2[0xf] = uVar5;
    uVar5 = *(uint64_t *)(param_1 + 0xaf8);
    param_2[0x10] = *(uint64_t *)(param_1 + 0xaf0);
    param_2[0x11] = uVar5;
    *(int32_t *)param_2 = *(int32_t *)(param_1 + 0x760);
    iVar6 = *(int *)(param_1 + 0x764);
    *(int *)((int64_t)param_2 + 4) = iVar6;
    *(int *)(param_2 + 3) = iVar6 / 2;
  }
  return 0;
}



uint64_t FUN_180698f21(int64_t param_1)

{
  uint64_t uVar1;
  int iVar2;
  uint unaff_EBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  int unaff_R12D;
  int unaff_R13D;
  uint64_t *unaff_R14;
  int unaff_R15D;
  int32_t extraout_XMM0_Da;
  int32_t uVar3;
  uint64_t in_stack_00000020;
  int32_t uVar4;
  
  uVar4 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  if ((((unaff_EBP & 0x400) != 0) && (*(int *)(param_1 + 0xb90) == 0)) && ((unaff_EBP & 3) != 0)) {
    iVar2 = FUN_180697e60(param_1 + 0xb00,*(int *)(param_1 + 0x760) + 0xfU & 0xfffffff0,
                          *(int *)(param_1 + 0x764) + 0xfU & 0xfffffff0,0x20);
    if (iVar2 != 0) {
      SystemInitializationProcessor(extraout_XMM0_Da,2,&processed_var_6048_ptr);
    }
    *(int32_t *)(unaff_RSI + 0xb90) = 1;
                    // WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RSI + 0xb58),0x80,(int64_t)*(int *)(unaff_RSI + 0xad8));
  }
  uVar3 = func_0x000180001000();
  if ((((unaff_EBP & 0x400) == 0) || (*(int *)(unaff_RSI + 0x2e3c) == 0)) ||
     ((*(uint *)(unaff_RSI + 0x221c) < 2 ||
      ((0x3b < *(int *)(unaff_RSI + 0x2e38) ||
       (*(int *)(unaff_RSI + 0xbd0) - *(int *)(unaff_RSI + 0x2e38) < 0x14)))))) {
    if ((unaff_EBP & 2) == 0) {
      if ((unaff_EBP & 1) == 0) {
        FUN_18069c540(*(uint64_t *)(unaff_RSI + 0x778),unaff_RSI + 0xa70);
      }
      else {
        FUN_180698bb0(uVar3,*(uint64_t *)(unaff_RSI + 0x778),unaff_RSI + 0xa70,unaff_R15D,
                      CONCAT44(uVar4,1));
      }
    }
    else {
      iVar2 = unaff_R15D + (unaff_EDI + -5) * 10;
      FUN_180698bb0(uVar3,*(uint64_t *)(unaff_RSI + 0x778),unaff_RSI + 0xa70,iVar2,
                    CONCAT44(uVar4,1));
      FUN_180698b00(unaff_RSI + 0xa70,iVar2);
    }
    *(int32_t *)(unaff_RSI + 0x2e38) = *(int32_t *)(unaff_RSI + 0xbd0);
  }
  else {
    FUN_18069e6e0();
    if (((unaff_EBP & 3) != 0) && (*(int *)(unaff_RSI + 0xb90) != 0)) {
      uVar3 = FUN_18069c540(unaff_RSI + 0xa70,unaff_RSI + 0xb00);
      if ((unaff_EBP & 2) == 0) {
        if ((unaff_EBP & 1) != 0) {
          FUN_180698bb0(uVar3,unaff_RSI + 0xb00,unaff_RSI + 0xa70,unaff_R15D,CONCAT44(uVar4,1));
        }
      }
      else {
        iVar2 = unaff_R15D + (unaff_EDI + -5) * 10;
        FUN_180698bb0(uVar3,unaff_RSI + 0xb00,unaff_RSI + 0xa70,iVar2,CONCAT44(uVar4,1));
        FUN_180698b00(unaff_RSI + 0xa70,iVar2);
      }
    }
    *(int *)(unaff_RSI + 0x2e38) =
         *(int *)(unaff_RSI + 0x2e38) * 3 + *(int *)(unaff_RSI + 0xbd0) >> 2;
  }
  *(int32_t *)(unaff_RSI + 0x2e3c) = 1;
  if ((unaff_EBP & 4) != 0) {
    if ((*(int *)(unaff_RSI + 0x2230) != unaff_R15D) || (*(int *)(unaff_RSI + 0x2234) != unaff_R13D)
       ) {
      FUN_1806988d0((int *)(unaff_RSI + 0x2230),unaff_R12D - unaff_R15D,unaff_R13D);
    }
    func_0x000180028cc5(*(uint64_t *)(unaff_RSI + 0xaa8),unaff_RSI + 0x2238,unaff_RSI + 0x2e40,
                        unaff_RSI + 0x2e50,unaff_RSI + 0x2e60);
  }
  uVar1 = *(uint64_t *)(unaff_RSI + 0xa78);
  *unaff_R14 = *(uint64_t *)(unaff_RSI + 0xa70);
  unaff_R14[1] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xa88);
  unaff_R14[2] = *(uint64_t *)(unaff_RSI + 0xa80);
  unaff_R14[3] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xa98);
  unaff_R14[4] = *(uint64_t *)(unaff_RSI + 0xa90);
  unaff_R14[5] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xaa8);
  unaff_R14[6] = *(uint64_t *)(unaff_RSI + 0xaa0);
  unaff_R14[7] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xab8);
  unaff_R14[8] = *(uint64_t *)(unaff_RSI + 0xab0);
  unaff_R14[9] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xac8);
  unaff_R14[10] = *(uint64_t *)(unaff_RSI + 0xac0);
  unaff_R14[0xb] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xad8);
  unaff_R14[0xc] = *(uint64_t *)(unaff_RSI + 0xad0);
  unaff_R14[0xd] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xae8);
  unaff_R14[0xe] = *(uint64_t *)(unaff_RSI + 0xae0);
  unaff_R14[0xf] = uVar1;
  uVar1 = *(uint64_t *)(unaff_RSI + 0xaf8);
  unaff_R14[0x10] = *(uint64_t *)(unaff_RSI + 0xaf0);
  unaff_R14[0x11] = uVar1;
  *(int32_t *)unaff_R14 = *(int32_t *)(unaff_RSI + 0x760);
  iVar2 = *(int *)(unaff_RSI + 0x764);
  *(int *)((int64_t)unaff_R14 + 4) = iVar2;
  *(int *)(unaff_R14 + 3) = iVar2 / 2;
  return 0;
}



uint64_t FUN_18069916b(void)

{
  int iVar1;
  uint64_t uVar2;
  int64_t unaff_RSI;
  int unaff_R12D;
  int unaff_R13D;
  uint64_t *unaff_R14;
  int unaff_R15D;
  
  if ((*(int *)(unaff_RSI + 0x2230) != unaff_R15D) || (*(int *)(unaff_RSI + 0x2234) != unaff_R13D))
  {
    FUN_1806988d0((int *)(unaff_RSI + 0x2230),unaff_R12D - unaff_R15D,unaff_R13D);
  }
  func_0x000180028cc5(*(uint64_t *)(unaff_RSI + 0xaa8),unaff_RSI + 0x2238,unaff_RSI + 0x2e40,
                      unaff_RSI + 0x2e50,unaff_RSI + 0x2e60);
  uVar2 = *(uint64_t *)(unaff_RSI + 0xa78);
  *unaff_R14 = *(uint64_t *)(unaff_RSI + 0xa70);
  unaff_R14[1] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xa88);
  unaff_R14[2] = *(uint64_t *)(unaff_RSI + 0xa80);
  unaff_R14[3] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xa98);
  unaff_R14[4] = *(uint64_t *)(unaff_RSI + 0xa90);
  unaff_R14[5] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xaa8);
  unaff_R14[6] = *(uint64_t *)(unaff_RSI + 0xaa0);
  unaff_R14[7] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xab8);
  unaff_R14[8] = *(uint64_t *)(unaff_RSI + 0xab0);
  unaff_R14[9] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xac8);
  unaff_R14[10] = *(uint64_t *)(unaff_RSI + 0xac0);
  unaff_R14[0xb] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xad8);
  unaff_R14[0xc] = *(uint64_t *)(unaff_RSI + 0xad0);
  unaff_R14[0xd] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xae8);
  unaff_R14[0xe] = *(uint64_t *)(unaff_RSI + 0xae0);
  unaff_R14[0xf] = uVar2;
  uVar2 = *(uint64_t *)(unaff_RSI + 0xaf8);
  unaff_R14[0x10] = *(uint64_t *)(unaff_RSI + 0xaf0);
  unaff_R14[0x11] = uVar2;
  *(int32_t *)unaff_R14 = *(int32_t *)(unaff_RSI + 0x760);
  iVar1 = *(int *)(unaff_RSI + 0x764);
  *(int *)((int64_t)unaff_R14 + 4) = iVar1;
  *(int *)(unaff_R14 + 3) = iVar1 / 2;
  return 0;
}





// 函数: void FUN_180699280(uint64_t param_1,int64_t param_2)
void FUN_180699280(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t lVar9;
  uint64_t in_stack_ffffffffffffffa8;
  uint64_t uVar10;
  int32_t uVar11;
  
  uVar11 = (int32_t)((uint64_t)in_stack_ffffffffffffffa8 >> 0x20);
  if (*(char *)(*(int64_t *)(param_2 + 0xf00) + 9) == '\0') {
    if (0x3fffffbe < *(int *)(*(int64_t *)(param_2 + 0xfb8) + 0x18) - 0x41U) {
      iVar2 = FUN_18069cf80(param_1);
      *(bool *)(*(int64_t *)(param_2 + 0xf00) + 9) = iVar2 == 0;
    }
  }
  else {
    func_0x00018069d1c0(param_2);
  }
  cVar1 = **(char **)(param_2 + 0xf00);
  if (*(char *)(param_2 + 0xf60) != '\0') {
    func_0x00018069ba40(param_1,param_2);
  }
  if (*(char *)(*(int64_t *)(param_2 + 0xf00) + 2) == '\0') {
    FUN_18069c080(param_2,*(uint64_t *)(param_2 + 0xf20),*(uint64_t *)(param_2 + 0xf28),
                  *(uint64_t *)(param_2 + 0xf38),*(uint64_t *)(param_2 + 0xf40),
                  *(int32_t *)(param_2 + 0xf4c),*(uint64_t *)(param_2 + 0xeb0),
                  *(uint64_t *)(param_2 + 0xeb8),*(int32_t *)(param_2 + 0xe94));
    if (cVar1 == '\x04') {
      iVar2 = *(int *)(param_2 + 0xe80);
      if (*(char *)(*(int64_t *)(param_2 + 0xf00) + 9) != '\0') {
        *(uint64_t *)(param_2 + 0x7c0) = 0;
        *(uint64_t *)(param_2 + 0x7c8) = 0;
        *(uint64_t *)(param_2 + 2000) = 0;
        *(int8_t *)(param_2 + 0x7d8) = 0;
      }
      lVar4 = *(int64_t *)(param_2 + 0xf18);
      pcVar8 = (char *)(param_2 + 0x7c0);
      lVar3 = (int64_t)*(int *)(param_2 + 0xe80);
      puVar5 = (uint64_t *)(param_2 + 0x860);
      lVar9 = 0xc;
      lVar6 = *(int64_t *)(param_2 + 0xea8) - lVar3;
      lVar7 = 0x10;
      *(int32_t *)(lVar6 + 0x10 + lVar3 * 4) = *(int32_t *)(lVar4 + 0x10);
      *(int32_t *)(lVar6 + 0x10 + lVar3 * 8) = *(int32_t *)(lVar4 + 0x10);
      *(int32_t *)(lVar6 + 0x10 + lVar3 * 0xc) = *(int32_t *)(lVar4 + 0x10);
      do {
        lVar3 = (int64_t)*(int *)(puVar5 + 4) + *(int64_t *)(param_2 + 0xea8);
        lVar4 = lVar3;
        FUN_18069d280(lVar3 - iVar2,lVar3 + -1,iVar2,
                      *(int32_t *)(lVar9 + *(int64_t *)(param_2 + 0xf00)),lVar3,iVar2,
                      *(int8_t *)((lVar3 - iVar2) + -1));
        uVar11 = (int32_t)((uint64_t)lVar4 >> 0x20);
        if (*pcVar8 != '\0') {
          if (*pcVar8 < '\x02') {
            uVar10 = CONCAT44(uVar11,iVar2);
            func_0x00018001a59e((int)*(short *)*puVar5 * (int)*(short *)(param_2 + 0x7e0),lVar3,
                                iVar2,lVar3,uVar10);
            uVar11 = (int32_t)((uint64_t)uVar10 >> 0x20);
            *(int32_t *)*puVar5 = 0;
          }
          else {
            func_0x00018001a682(*puVar5,param_2 + 0x7e0,lVar3,iVar2);
          }
        }
        lVar9 = lVar9 + 4;
        puVar5 = puVar5 + 7;
        pcVar8 = pcVar8 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    else {
      uVar10 = *(uint64_t *)(param_2 + 0xea8);
      FUN_18069c200(param_2,*(uint64_t *)(param_2 + 0xf18),*(uint64_t *)(param_2 + 0xf30),
                    *(int32_t *)(param_2 + 0xf48),uVar10,*(int32_t *)(param_2 + 0xe80));
      uVar11 = (int32_t)((uint64_t)uVar10 >> 0x20);
    }
  }
  else {
    FUN_18069de90(param_2);
  }
  if (*(char *)(*(int64_t *)(param_2 + 0xf00) + 9) == '\0') {
    if (cVar1 != '\x04') {
      lVar4 = param_2 + 0x7e0;
      if (cVar1 != '\t') {
        puVar5 = (uint64_t *)(param_2 + 0xda0);
        if (*(char *)(param_2 + 0x7d8) < '\x02') {
          **(short **)(param_2 + 0xda8) = *(short *)(param_2 + 0x820) * *(short *)*puVar5;
          func_0x00018069cbb0(*(uint64_t *)(param_2 + 0xda8),param_2 + 0x180);
          *(int32_t *)*puVar5 = 0;
        }
        else {
          func_0x00018069c8f0(puVar5,param_2 + 0x820);
          func_0x00018001c560(*(uint64_t *)(param_2 + 0xda8),param_2 + 0x180);
          puVar5 = (uint64_t *)*puVar5;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
        }
        lVar4 = param_2 + 0x800;
      }
      lVar3 = param_2 + 0x7c0;
      FUN_18069c820(param_2 + 0x180,lVar4,*(uint64_t *)(param_2 + 0xea8),
                    *(int32_t *)(param_2 + 0xe80),lVar3);
      uVar11 = (int32_t)((uint64_t)lVar3 >> 0x20);
    }
    FUN_18069c710(param_2 + 0x380,param_2 + 0x840,*(uint64_t *)(param_2 + 0xeb0),
                  *(uint64_t *)(param_2 + 0xeb8),CONCAT44(uVar11,*(int32_t *)(param_2 + 0xe94))
                  ,param_2 + 2000);
  }
  return;
}





// 函数: void FUN_1806993a0(void)
void FUN_1806993a0(void)

{
  int iVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBX;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int32_t uVar10;
  int8_t uStack0000000000000030;
  int in_stack_00000088;
  
  iVar1 = *(int *)(unaff_RBX + 0xe80);
  if (*(char *)(in_RAX + 9) != '\0') {
    *(uint64_t *)(unaff_RBX + 0x7c0) = 0;
    *(uint64_t *)(unaff_RBX + 0x7c8) = 0;
    *(uint64_t *)(unaff_RBX + 2000) = 0;
    *(int8_t *)(unaff_RBX + 0x7d8) = 0;
  }
  lVar3 = *(int64_t *)(unaff_RBX + 0xf18);
  pcVar7 = (char *)(unaff_RBX + 0x7c0);
  lVar2 = (int64_t)*(int *)(unaff_RBX + 0xe80);
  puVar4 = (uint64_t *)(unaff_RBX + 0x860);
  lVar8 = 0xc;
  lVar5 = *(int64_t *)(unaff_RBX + 0xea8) - lVar2;
  lVar6 = 0x10;
  *(int32_t *)(lVar5 + 0x10 + lVar2 * 4) = *(int32_t *)(lVar3 + 0x10);
  *(int32_t *)(lVar5 + 0x10 + lVar2 * 8) = *(int32_t *)(lVar3 + 0x10);
  *(int32_t *)(lVar5 + 0x10 + lVar2 * 0xc) = *(int32_t *)(lVar3 + 0x10);
  do {
    lVar2 = (int64_t)*(int *)(puVar4 + 4) + *(int64_t *)(unaff_RBX + 0xea8);
    uStack0000000000000030 = *(int8_t *)((lVar2 - iVar1) + -1);
    lVar3 = lVar2;
    FUN_18069d280(lVar2 - iVar1,lVar2 + -1,iVar1,
                  *(int32_t *)(lVar8 + *(int64_t *)(unaff_RBX + 0xf00)),lVar2);
    uVar10 = (int32_t)((uint64_t)lVar3 >> 0x20);
    if (*pcVar7 != '\0') {
      if (*pcVar7 < '\x02') {
        uVar9 = CONCAT44(uVar10,iVar1);
        func_0x00018001a59e((int)*(short *)*puVar4 * (int)*(short *)(unaff_RBX + 0x7e0),lVar2,iVar1,
                            lVar2,uVar9);
        uVar10 = (int32_t)((uint64_t)uVar9 >> 0x20);
        *(int32_t *)*puVar4 = 0;
      }
      else {
        func_0x00018001a682(*puVar4,unaff_RBX + 0x7e0,lVar2,iVar1);
      }
    }
    lVar8 = lVar8 + 4;
    puVar4 = puVar4 + 7;
    pcVar7 = pcVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (*(char *)(*(int64_t *)(unaff_RBX + 0xf00) + 9) == '\0') {
    if (in_stack_00000088 != 4) {
      lVar3 = unaff_RBX + 0x7e0;
      if (in_stack_00000088 != 9) {
        puVar4 = (uint64_t *)(unaff_RBX + 0xda0);
        if (*(char *)(unaff_RBX + 0x7d8) < '\x02') {
          **(short **)(unaff_RBX + 0xda8) = *(short *)(unaff_RBX + 0x820) * *(short *)*puVar4;
          func_0x00018069cbb0(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          *(int32_t *)*puVar4 = 0;
        }
        else {
          func_0x00018069c8f0(puVar4,unaff_RBX + 0x820);
          func_0x00018001c560(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          puVar4 = (uint64_t *)*puVar4;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        lVar3 = unaff_RBX + 0x800;
      }
      lVar2 = unaff_RBX + 0x7c0;
      FUN_18069c820(unaff_RBX + 0x180,lVar3,*(uint64_t *)(unaff_RBX + 0xea8),
                    *(int32_t *)(unaff_RBX + 0xe80),lVar2);
      uVar10 = (int32_t)((uint64_t)lVar2 >> 0x20);
    }
    FUN_18069c710(unaff_RBX + 0x380,unaff_RBX + 0x840,*(uint64_t *)(unaff_RBX + 0xeb0),
                  *(uint64_t *)(unaff_RBX + 0xeb8),
                  CONCAT44(uVar10,*(int32_t *)(unaff_RBX + 0xe94)));
  }
  return;
}





// 函数: void FUN_180699508(void)
void FUN_180699508(void)

{
  uint64_t *puVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int unaff_ESI;
  uint64_t in_stack_00000020;
  int64_t lVar3;
  int32_t uVar4;
  
  uVar4 = (int32_t)((uint64_t)in_stack_00000020 >> 0x20);
  FUN_18069de90();
  if (*(char *)(*(int64_t *)(unaff_RBX + 0xf00) + 9) == '\0') {
    if (unaff_ESI != 4) {
      lVar2 = unaff_RBX + 0x7e0;
      if (unaff_ESI != 9) {
        puVar1 = (uint64_t *)(unaff_RBX + 0xda0);
        if (*(char *)(unaff_RBX + 0x7d8) < '\x02') {
          **(short **)(unaff_RBX + 0xda8) = *(short *)(unaff_RBX + 0x820) * *(short *)*puVar1;
          func_0x00018069cbb0(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          *(int32_t *)*puVar1 = 0;
        }
        else {
          func_0x00018069c8f0(puVar1,unaff_RBX + 0x820);
          func_0x00018001c560(*(uint64_t *)(unaff_RBX + 0xda8),unaff_RBX + 0x180);
          puVar1 = (uint64_t *)*puVar1;
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        lVar2 = unaff_RBX + 0x800;
      }
      lVar3 = unaff_RBX + 0x7c0;
      FUN_18069c820(unaff_RBX + 0x180,lVar2,*(uint64_t *)(unaff_RBX + 0xea8),
                    *(int32_t *)(unaff_RBX + 0xe80),lVar3);
      uVar4 = (int32_t)((uint64_t)lVar3 >> 0x20);
    }
    FUN_18069c710(unaff_RBX + 0x380,unaff_RBX + 0x840,*(uint64_t *)(unaff_RBX + 0xeb0),
                  *(uint64_t *)(unaff_RBX + 0xeb8),
                  CONCAT44(uVar4,*(int32_t *)(unaff_RBX + 0xe94)));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



