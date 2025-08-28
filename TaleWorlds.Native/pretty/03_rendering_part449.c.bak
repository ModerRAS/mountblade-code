#define StringProcessor FUN_1805a3b20  // 字符串处理器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part449.c - 8 个函数

// 函数: void FUN_180510ff0(void)
void FUN_180510ff0(void)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar6;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  int32_t uVar7;
  int32_t uVar8;
  float fVar9;
  float unaff_XMM7_Da;
  float fVar10;
  float unaff_XMM9_Da;
  uint64_t in_stack_00000020;
  float in_stack_000000b0;
  float in_stack_000000c0;
  
  uVar8 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  plVar1 = *(longlong **)(unaff_RSI + 0x590);
  fVar10 = *(float *)(unaff_R14 + 0x188);
  pcVar2 = *(code **)(*plVar1 + 0x90);
  lVar4 = FUN_180532320();
  fVar9 = *(float *)(lVar4 + 8);
  fVar6 = (float)(*pcVar2)(plVar1,0);
  fVar10 = (fVar9 - fVar6) * fVar10;
  if (fVar10 <= unaff_XMM9_Da) {
    fVar10 = unaff_XMM9_Da;
  }
  if (*(int *)(unaff_R14 + 0x1f0) != -1) {
    lVar4 = FUN_18053a5a0(&system_data_5f30,*(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0xac));
    lVar5 = FUN_180532320(lVar4);
    fVar6 = extraout_XMM0_Da;
    if (lVar5 != 0) {
      fVar9 = *(float *)(lVar4 + 0x188);
      lVar4 = FUN_180532320(lVar4);
      fVar10 = fVar10 + fVar9 * *(float *)(lVar4 + 8);
      fVar6 = extraout_XMM0_Da_00;
    }
  }
  lVar4 = (longlong)*(int *)(unaff_RSI + 0x564) * 0xa60;
  *(longlong *)(lVar4 + 0x3768 + *(longlong *)(unaff_RSI + 0x8d8)) =
       *(longlong *)
        (unaff_R15 + (longlong)*(int *)(lVar4 + 0x3770 + *(longlong *)(unaff_RSI + 0x8d8)) * 8) +
       0x5af310800000;
  uVar7 = FUN_18052e450(fVar6,0xffffffff,CONCAT71((int7)((ulonglong)lVar4 >> 8),1),fVar10);
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar7 = FUN_1805ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                          CONCAT44(uVar8,0xffffffff));
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      FUN_18052e130(uVar7,0xffffffff);
    }
    FUN_1805989b0(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(longlong *)(unaff_RSI + 0x658) != 0)) {
    FUN_18058ac10(*(uint64_t *)(unaff_RSI + 0x590));
    FUN_18052b890();
    plVar1 = *(longlong **)(unaff_RSI + 0x590);
    uVar8 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((longlong)plVar1 + 0x9c) = uVar8;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar3 = func_0x00018052ae60();
  if (cVar3 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar3 = func_0x000180522f60();
        if (cVar3 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          in_stack_000000b0 = 0.0;
          in_stack_000000c0 = 0.0;
          FUN_18058c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar10 = in_stack_000000b0 - *(float *)(unaff_RSI + 0xa44);
          fVar9 = in_stack_000000c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar10 + fVar10) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar9 + fVar9) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        FUN_18050d690();
      }
      FUN_18058b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&stack0x000000b0,&stack0x000000c0,
                    &stack0x00000030);
      *(float *)(unaff_RSI + 0xa4c) = in_stack_000000b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = in_stack_000000c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          FUN_18050ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        FUN_18050c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      FUN_180532390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      FUN_180532740();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180511050(void)
void FUN_180511050(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong unaff_R15;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  uint64_t in_stack_00000020;
  int32_t uVar8;
  float in_stack_000000b0;
  float in_stack_000000c0;
  
  uVar8 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  lVar3 = FUN_18053a5a0(&system_data_5f30,*(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0xac));
  lVar4 = FUN_180532320(lVar3);
  uVar5 = extraout_XMM0_Da;
  if (lVar4 != 0) {
    fVar6 = *(float *)(lVar3 + 0x188);
    lVar3 = FUN_180532320(lVar3);
    unaff_XMM8_Da = unaff_XMM8_Da + fVar6 * *(float *)(lVar3 + 8);
    uVar5 = extraout_XMM0_Da_00;
  }
  lVar3 = (longlong)*(int *)(unaff_RSI + 0x564) * 0xa60;
  *(longlong *)(lVar3 + 0x3768 + *(longlong *)(unaff_RSI + 0x8d8)) =
       *(longlong *)
        (unaff_R15 + (longlong)*(int *)(lVar3 + 0x3770 + *(longlong *)(unaff_RSI + 0x8d8)) * 8) +
       0x5af310800000;
  uVar5 = FUN_18052e450(uVar5,0xffffffff,CONCAT71((int7)((ulonglong)lVar3 >> 8),1),unaff_XMM8_Da);
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar5 = FUN_1805ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                          CONCAT44(uVar8,0xffffffff));
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      FUN_18052e130(uVar5,0xffffffff);
    }
    FUN_1805989b0(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(longlong *)(unaff_RSI + 0x658) != 0)) {
    FUN_18058ac10(*(uint64_t *)(unaff_RSI + 0x590));
    FUN_18052b890();
    plVar1 = *(longlong **)(unaff_RSI + 0x590);
    uVar5 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((longlong)plVar1 + 0x9c) = uVar5;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar2 = func_0x00018052ae60();
  if (cVar2 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar2 = func_0x000180522f60();
        if (cVar2 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          in_stack_000000b0 = 0.0;
          in_stack_000000c0 = 0.0;
          FUN_18058c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar6 = in_stack_000000b0 - *(float *)(unaff_RSI + 0xa44);
          fVar7 = in_stack_000000c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar6 + fVar6) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar7 + fVar7) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        FUN_18050d690();
      }
      FUN_18058b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&stack0x000000b0,&stack0x000000c0,
                    &stack0x00000030);
      *(float *)(unaff_RSI + 0xa4c) = in_stack_000000b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = in_stack_000000c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          FUN_18050ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        FUN_18050c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      FUN_180532390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      FUN_180532740();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180511098(int32_t param_1)
void FUN_180511098(int32_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_R15;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  uint64_t in_stack_00000020;
  int32_t uVar7;
  float in_stack_000000b0;
  float in_stack_000000c0;
  
  uVar7 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  lVar3 = (longlong)*(int *)(unaff_RSI + 0x564) * 0xa60;
  *(longlong *)(lVar3 + 0x3768 + *(longlong *)(unaff_RSI + 0x8d8)) =
       *(longlong *)
        (unaff_R15 + (longlong)*(int *)(lVar3 + 0x3770 + *(longlong *)(unaff_RSI + 0x8d8)) * 8) +
       0x5af310800000;
  uVar4 = FUN_18052e450(param_1,0xffffffff,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar4 = FUN_1805ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                          CONCAT44(uVar7,0xffffffff));
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      FUN_18052e130(uVar4,0xffffffff);
    }
    FUN_1805989b0(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(longlong *)(unaff_RSI + 0x658) != 0)) {
    FUN_18058ac10(*(uint64_t *)(unaff_RSI + 0x590));
    FUN_18052b890();
    plVar1 = *(longlong **)(unaff_RSI + 0x590);
    uVar4 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((longlong)plVar1 + 0x9c) = uVar4;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar2 = func_0x00018052ae60();
  if (cVar2 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar2 = func_0x000180522f60();
        if (cVar2 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          in_stack_000000b0 = 0.0;
          in_stack_000000c0 = 0.0;
          FUN_18058c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar5 = in_stack_000000b0 - *(float *)(unaff_RSI + 0xa44);
          fVar6 = in_stack_000000c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar5 + fVar5) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar6 + fVar6) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        FUN_18050d690();
      }
      FUN_18058b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&stack0x000000b0,&stack0x000000c0,
                    &stack0x00000030);
      *(float *)(unaff_RSI + 0xa4c) = in_stack_000000b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = in_stack_000000c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          FUN_18050ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        FUN_18050c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      FUN_180532390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      FUN_180532740();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805110a0(int32_t param_1)
void FUN_1805110a0(int32_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RSI;
  longlong lVar3;
  longlong unaff_R15;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  uint64_t in_stack_00000020;
  int32_t uVar7;
  float in_stack_000000b0;
  float in_stack_000000c0;
  
  uVar7 = (int32_t)((ulonglong)in_stack_00000020 >> 0x20);
  lVar3 = (longlong)*(int *)(unaff_RSI + 0x564) * 0xa60;
  *(longlong *)(lVar3 + 0x3768 + *(longlong *)(unaff_RSI + 0x8d8)) =
       *(longlong *)
        (unaff_R15 + (longlong)*(int *)(lVar3 + 0x3770 + *(longlong *)(unaff_RSI + 0x8d8)) * 8) +
       0x5af310800000;
  uVar4 = FUN_18052e450(param_1,0xffffffff,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar4 = FUN_1805ed670(system_status_flag,1,*(int32_t *)(unaff_RSI + 0x10),0xffffffff,
                          CONCAT44(uVar7,0xffffffff));
  }
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      FUN_18052e130(uVar4,0xffffffff);
    }
    FUN_1805989b0(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(longlong *)(unaff_RSI + 0x658) != 0)) {
    FUN_18058ac10(*(uint64_t *)(unaff_RSI + 0x590));
    FUN_18052b890();
    plVar1 = *(longlong **)(unaff_RSI + 0x590);
    uVar4 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((longlong)plVar1 + 0x9c) = uVar4;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar2 = func_0x00018052ae60();
  if (cVar2 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar2 = func_0x000180522f60();
        if (cVar2 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          in_stack_000000b0 = 0.0;
          in_stack_000000c0 = 0.0;
          FUN_18058c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar5 = in_stack_000000b0 - *(float *)(unaff_RSI + 0xa44);
          fVar6 = in_stack_000000c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar5 + fVar5) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar6 + fVar6) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        FUN_18050d690();
      }
      FUN_18058b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&stack0x000000b0,&stack0x000000c0,
                    &stack0x00000030);
      *(float *)(unaff_RSI + 0xa4c) = in_stack_000000b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = in_stack_000000c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          FUN_18050ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        FUN_18050c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      FUN_180532390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      FUN_180532740();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18051112d(int32_t param_1)
void FUN_18051112d(int32_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RSI;
  int32_t uVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float in_stack_000000b0;
  float in_stack_000000c0;
  
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      FUN_18052e130(param_1,0xffffffff);
    }
    FUN_1805989b0(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(longlong *)(unaff_RSI + 0x658) != 0)) {
    FUN_18058ac10(*(uint64_t *)(unaff_RSI + 0x590));
    FUN_18052b890();
    plVar1 = *(longlong **)(unaff_RSI + 0x590);
    uVar3 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((longlong)plVar1 + 0x9c) = uVar3;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar2 = func_0x00018052ae60();
  if (cVar2 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar2 = func_0x000180522f60();
        if (cVar2 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          in_stack_000000b0 = 0.0;
          in_stack_000000c0 = 0.0;
          FUN_18058c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar4 = in_stack_000000b0 - *(float *)(unaff_RSI + 0xa44);
          fVar5 = in_stack_000000c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar4 + fVar4) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar5 + fVar5) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        FUN_18050d690();
      }
      FUN_18058b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&stack0x000000b0,&stack0x000000c0,
                    &stack0x00000030);
      *(float *)(unaff_RSI + 0xa4c) = in_stack_000000b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = in_stack_000000c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          FUN_18050ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        FUN_18050c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      FUN_180532390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      FUN_180532740();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180511135(int32_t param_1)
void FUN_180511135(int32_t param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RSI;
  int32_t uVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float in_stack_000000b0;
  float in_stack_000000c0;
  
  if (*(int *)(unaff_RSI + 0x568) - 3U < 2) {
    if (*(int *)(unaff_RSI + 0x560) != -1) {
      FUN_18052e130(param_1,0xffffffff);
    }
    FUN_1805989b0(&system_data_f0c8);
  }
  if ((unaff_XMM9_Da < unaff_XMM7_Da) && (*(longlong *)(unaff_RSI + 0x658) != 0)) {
    FUN_18058ac10(*(uint64_t *)(unaff_RSI + 0x590));
    FUN_18052b890();
    plVar1 = *(longlong **)(unaff_RSI + 0x590);
    uVar3 = (**(code **)(*plVar1 + 0x158))(plVar1);
    *(int32_t *)((longlong)plVar1 + 0x9c) = uVar3;
    if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) == 0) {
      *(int32_t *)(*(longlong *)(unaff_RSI + 0x590) + 0x2540) =
           *(int32_t *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x590) + 0x2590) + 0x24);
    }
  }
  cVar2 = func_0x00018052ae60();
  if (cVar2 == '\0') {
    if (unaff_XMM9_Da < unaff_XMM7_Da) {
      if (*(int *)(unaff_RSI + 0x564) < 0) {
        cVar2 = func_0x000180522f60();
        if (cVar2 == '\0') {
          *(int32_t *)(unaff_RSI + 0xa40) = 0xbfc90fdb;
          *(int32_t *)(unaff_RSI + 0xa44) = 0x3fc90fdb;
        }
        else {
          in_stack_000000b0 = 0.0;
          in_stack_000000c0 = 0.0;
          FUN_18058c7f0(*(uint64_t *)(unaff_RSI + 0x590));
          fVar4 = in_stack_000000b0 - *(float *)(unaff_RSI + 0xa44);
          fVar5 = in_stack_000000c0 - *(float *)(unaff_RSI + 0xa40);
          *(float *)(unaff_RSI + 0xa44) =
               (fVar4 + fVar4) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa44);
          *(float *)(unaff_RSI + 0xa40) =
               (fVar5 + fVar5) * unaff_XMM7_Da + *(float *)(unaff_RSI + 0xa40);
        }
      }
      else {
        FUN_18050d690();
      }
      FUN_18058b9f0(*(uint64_t *)(unaff_RSI + 0x590),1,&stack0x000000b0,&stack0x000000c0,
                    &stack0x00000030);
      *(float *)(unaff_RSI + 0xa4c) = in_stack_000000b0 * 1.2566371;
      *(float *)(unaff_RSI + 0xa48) = in_stack_000000c0 * -1.3659099;
      if ((*(uint *)(unaff_RSI + 0x56c) & 0x800) != 0) {
        if (((system_status_flag == 1) || (system_status_flag == 4)) && (*(int *)(unaff_RSI + 0x570) != 2))
        {
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b0) = 0;
          *(int32_t *)(*(longlong *)(unaff_RSI + 0x728) + 0x5b4) = 0;
        }
        else {
          FUN_18050ebe0();
        }
      }
      if (((system_status_flag != 1) && (system_status_flag != 4)) &&
         (((*(uint *)(unaff_RSI + 0x56c) & 0x4000) != 0 && (*(int *)(unaff_RSI + 0x568) == 1)))) {
        FUN_18050c260();
      }
    }
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 0) {
      FUN_180532390();
    }
    else if (*(int *)(SYSTEM_STATE_MANAGER + 0x1c0) == 1) {
      FUN_180532740();
    }
  }
  return;
}





// 函数: void FUN_1805113d8(void)
void FUN_1805113d8(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805113f0(longlong param_1,float param_2)
void FUN_1805113f0(longlong param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int32_t uVar20;
  char acStackX_8 [8];
  int32_t in_stack_ffffffffffffff88;
  int32_t uStack_68;
  int32_t uStack_64;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_54;
  uint64_t uStack_4c;
  int32_t uStack_44;
  int32_t uStack_40;
  int8_t uStack_3c;
  
  if ((system_status_flag == 1) || (system_status_flag == 4)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (*(int *)(param_1 + 0x560) < 0) {
    if ((*(int *)(param_1 + 0x568) == 1) && (-1 < *(int *)(param_1 + 0x564))) {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) & 0xfff87ff3;
    }
    if (!bVar8) {
      if ((*(int *)(param_1 + 0x568) == 1) && (*(int *)(param_1 + 0x570) == 1)) {
        FUN_180511e70();
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x728);
        if ((lVar5 != 0) &&
           (((*(char *)(lVar5 + 0x601) == '\0' && ((*(uint *)(param_1 + 0x56c) & 0x800) != 0)) &&
            (*(int *)(param_1 + 0x570) != 1)))) {
          *(int8_t *)(lVar5 + 0x601) = 1;
          if (((*(longlong *)(param_1 + 0x590) != 0) &&
              (iVar10 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2450), iVar10 != -1)) &&
             (*(int *)((longlong)iVar10 * 0x68 + 0x58 + render_system_memory) == 0x22)) {
            uStack_54 = 0x3f80000000000000;
            uStack_4c = 0xbe4ccccdbe4ccccd;
            uStack_58 = 0;
            uStack_44 = 0x3ecccccd;
            uStack_40 = 0x1000000;
            uStack_3c = 0;
            uStack_68 = 0;
            uStack_64 = 0xffffffff;
            uStack_60 = 1;
            FUN_18051ec50(param_1,&uStack_68);
          }
        }
        if ((((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) &&
           ((*(int *)(param_1 + 0x570) == 0 &&
            (lVar5 = *(longlong *)(param_1 + 0x8e0), 0 < *(int *)(lVar5 + 0x30))))) {
          uVar20 = *(int32_t *)(lVar5 + 8 + (longlong)*(int *)(lVar5 + 0x34) * 4);
          *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + -1;
          *(int *)(lVar5 + 0x34) = (*(int *)(lVar5 + 0x34) + 1) % 10;
          *(int32_t *)(param_1 + 0x4c8) = uVar20;
        }
      }
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x8d8);
    lVar13 = (longlong)*(int *)(param_1 + 0x560) * 0xa60;
    *(int32_t *)(param_1 + 0x4c8) = *(int32_t *)(lVar13 + 0x3568 + lVar5);
    *(uint64_t *)(param_1 + 0x4cc) = *(uint64_t *)(lVar13 + 0x356c + lVar5);
    *(uint *)(param_1 + 0x4c4) = *(uint *)(lVar13 + 0x3564 + lVar5) & 0x7800c;
  }
  if (*(char *)(param_1 + 0x984) == '\0') {
    return;
  }
  if (((*(longlong *)(*(longlong *)(param_1 + 0x6d8) + 0x8a8) != 0) &&
      (*(longlong *)(param_1 + 0x9a0) != 0)) &&
     (FUN_180525cb0(param_1,param_2), *(longlong *)(param_1 + 0x9a0) != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x658);
    uVar16 = 0;
    cVar9 = *(char *)(lVar5 + 0x20);
    if ('\0' < cVar9) {
      lVar19 = 0;
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 0x9a0);
        if ((((*(ulonglong *)(lVar12 + 0x400) >> (uVar16 & 0x3f) & 1) != 0) &&
            (*(longlong *)(lVar12 + lVar13) != 0)) &&
           ((fVar2 = *(float *)(lVar12 + 8 + lVar13), 0.0 <= fVar2 && (0.25 < fVar2)))) {
          lVar6 = *(longlong *)(lVar5 + 0x18);
          cVar3 = *(char *)(lVar19 + 0xa0 + lVar6);
          if ((-1 < cVar3) &&
             (pfVar1 = (float *)((longlong)cVar3 * 0x10 + 8 + lVar12),
             0.0 < *pfVar1 || *pfVar1 == 0.0)) {
            *(ulonglong *)(lVar12 + 0x400) =
                 *(ulonglong *)(lVar12 + 0x400) | 1L << ((longlong)cVar3 & 0x3fU);
          }
          bVar14 = *(byte *)(lVar19 + 0xa1 + lVar6);
          if ('\0' < (char)bVar14) {
            lVar12 = 0;
            uVar17 = (ulonglong)bVar14;
            do {
              lVar7 = *(longlong *)(param_1 + 0x9a0);
              uVar18 = (ulonglong)*(char *)(lVar12 + *(longlong *)(lVar19 + 0xa8 + lVar6));
              pfVar1 = (float *)(lVar7 + 8 + uVar18 * 0x10);
              if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
                *(ulonglong *)(lVar7 + 0x400) =
                     *(ulonglong *)(lVar7 + 0x400) | 1L << (uVar18 & 0x3f);
              }
              lVar12 = lVar12 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
        }
        bVar14 = (char)uVar16 + 1;
        uVar16 = (ulonglong)bVar14;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x100;
      } while ((char)bVar14 < cVar9);
    }
  }
  FUN_18052af20(param_1);
  cVar9 = func_0x00018052ae60(param_1);
  if (cVar9 != '\0') {
    return;
  }
  FUN_180521480(param_1);
  if (param_2 <= 0.0) {
    return;
  }
  if (bVar8) {
    return;
  }
  if (*(int *)(param_1 + 0x568) != 1) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x56c);
  if ((uVar4 >> 0xe & 1) == 0) {
    return;
  }
  FUN_18050d2a0(param_1);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
  if (lVar5 == 0) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x4c4) >> 10;
  acStackX_8[0] = '\x01';
  if ((uVar15 & 1) == 0) {
    cVar9 = FUN_1805a3ab0(param_1 + 0x28);
    if ((cVar9 == '\0') || (cVar9 = StringProcessor(param_1 + 0x28,acStackX_8), cVar9 != '\0'))
    goto LAB_18051181d;
    bVar8 = true;
LAB_1805117e1:
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2498);
    if ((iVar10 == -1) || (*(int *)((longlong)iVar10 * 0x68 + 0x58 + render_system_memory) != 0x21)) {
      iVar10 = *(int *)(lVar5 + 0xf0);
      iVar11 = FUN_180590480(lVar5,iVar10 + 1,uVar4,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,
                             CONCAT31((int3)((uint)in_stack_ffffffffffffff88 >> 8),
                                      (byte)((uint)*(int32_t *)
                                                    (*(longlong *)(param_1 + 0x8f8) + 0x9e4) >> 0x1f
                                            )) ^ 1,1);
      if ((iVar11 != iVar10) && (iVar11 != -1)) {
        *(int *)(param_1 + 0x2c0) = iVar11;
      }
      if (bVar8) {
        if (acStackX_8[0] == '\0') goto LAB_180511946;
        *(int *)(*(longlong *)(param_1 + 0x8f8) + 0xa14) = iVar10;
      }
    }
    else {
      *(uint *)(param_1 + 0x4c4) = *(uint *)(param_1 + 0x4c4) & 0xfffffbff;
    }
  }
  else {
LAB_18051181d:
    bVar8 = false;
    if ((uVar15 & 1) != 0) goto LAB_1805117e1;
    if (((-1 < *(int *)(*(longlong *)(param_1 + 0x8f8) + 0xa14)) &&
        ((*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar5 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar5 + 0xd0)) * 0x170 + 0x140 + render_system_memory) & 0x10)
         == 0)) && (cVar9 = StringProcessor(param_1 + 0x28,acStackX_8), cVar9 != '\0')) {
      uVar20 = *(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0xa14);
      iVar10 = func_0x000180590580(lVar5,uVar20,*(uint *)(param_1 + 0x564) >> 0x1f ^ 1,
                                   *(uint *)(*(longlong *)(param_1 + 0x8f8) + 0x9e4) >> 0x1f ^ 1,
                                   uVar4);
      if (iVar10 != 0) {
        *(int32_t *)(param_1 + 0x2c0) = uVar20;
      }
    }
  }
  if (acStackX_8[0] != '\0') {
    return;
  }
LAB_180511946:
  *(int32_t *)(*(longlong *)(param_1 + 0x8f8) + 0xa14) = 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



