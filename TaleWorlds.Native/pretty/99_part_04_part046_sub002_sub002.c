#include "TaleWorlds.Native.Split.h"

// 99_part_04_part046_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802b18a0(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4)
void FUN_1802b18a0(uint64_t *param_1,longlong param_2,uint64_t param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  int8_t auStack_118 [32];
  ulonglong uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  void *puStack_b8;
  void *puStack_b0;
  ulonglong uStack_58;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_d8 = param_3;
  uStack_e8 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a18048,0);
  uStack_f0 = 0;
  uStack_f8 = 0;
  uVar4 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b48,0);
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0x6c) != *(float *)(param_4 + 0x6c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15b70);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0x6c));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0x8c) != *(float *)(param_4 + 0x8c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15bf8);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0x8c));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x12) != *(float *)(param_4 + 0x90))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15c20);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x12));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0x94) != *(float *)(param_4 + 0x94))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15bb0);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0x94));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x13) != *(float *)(param_4 + 0x98))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15bd8);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x13));
  }
  if ((((param_4 == 0) || (*(float *)(param_1 + 0xfc) != *(float *)(param_4 + 0x7e0))) ||
      (*(float *)((longlong)param_1 + 0x7e4) != *(float *)(param_4 + 0x7e4))) ||
     (*(float *)(param_1 + 0xfd) != *(float *)(param_4 + 0x7e8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15c90);
    FUN_18062fb40(param_2,uVar5,&UNK_180a0696c,param_1 + 0xfc);
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0xfe) != *(float *)(param_4 + 0x7f0))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15c48);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0xfe));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0xff) != *(float *)(param_4 + 0x7f8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15cc8);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0xff));
  }
  if ((((param_4 == 0) || (*(float *)(param_1 + 0x104) != *(float *)(param_4 + 0x820))) ||
      (*(float *)((longlong)param_1 + 0x824) != *(float *)(param_4 + 0x824))) ||
     (*(float *)(param_1 + 0x105) != *(float *)(param_4 + 0x828))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a04cc0);
    FUN_18062fb40(param_2,uVar5,&UNK_180a0696c,param_1 + 0x104);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x106) != *(float *)(param_4 + 0x830))) ||
     ((*(float *)((longlong)param_1 + 0x834) != *(float *)(param_4 + 0x834) ||
      (*(float *)(param_1 + 0x107) != *(float *)(param_4 + 0x838))))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15ca0);
    FUN_18062fb40(param_2,uVar5,&UNK_180a0696c,param_1 + 0x106);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x108) != *(float *)(param_4 + 0x840))) ||
     ((*(float *)((longlong)param_1 + 0x844) != *(float *)(param_4 + 0x844) ||
      (*(float *)(param_1 + 0x109) != *(float *)(param_4 + 0x848))))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a159f8);
    FUN_18062fb40(param_2,uVar5,&UNK_180a0696c,param_1 + 0x108);
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x10a) != *(float *)(param_4 + 0x850))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15cb0);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x10a));
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x111) != *(float *)(param_4 + 0x888))) ||
     (*(float *)((longlong)param_1 + 0x88c) != *(float *)(param_4 + 0x88c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d30);
    FUN_1806307a0(param_2,uVar5,&UNK_180a0696c,param_1 + 0x111);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x112) != *(float *)(param_4 + 0x890))) ||
     (*(float *)((longlong)param_1 + 0x894) != *(float *)(param_4 + 0x894))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d40);
    FUN_1806307a0(param_2,uVar5,&UNK_180a0696c,param_1 + 0x112);
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8a8) != *(int *)(param_1 + 0x115))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15cf8);
    FUN_180630c80(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x115));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8ac) != *(int *)((longlong)param_1 + 0x8ac))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d18);
    FUN_180630c80(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0x8ac));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8b0) != *(int *)(param_1 + 0x116))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d78);
    FUN_18062f640(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x116));
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x113) != *(float *)(param_4 + 0x898))) ||
     (*(float *)((longlong)param_1 + 0x89c) != *(float *)(param_4 + 0x89c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d98);
    FUN_1806307a0(param_2,uVar5,&UNK_180a0696c,param_1 + 0x113);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x114) != *(float *)(param_4 + 0x8a0))) ||
     (*(float *)((longlong)param_1 + 0x8a4) != *(float *)(param_4 + 0x8a4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d50);
    FUN_1806307a0(param_2,uVar5,&UNK_180a0696c,param_1 + 0x114);
  }
  if (((param_4 == 0) || (*(int *)(param_4 + 0x854) != *(int *)((longlong)param_1 + 0x854))) ||
     (*(int *)(param_4 + 0x858) != *(int *)(param_1 + 0x10b))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15d60);
    FUN_180630980(param_2,uVar5,&UNK_180a0696c,(int *)((longlong)param_1 + 0x854));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x85c) != *(int *)((longlong)param_1 + 0x85c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15dc8);
    FUN_18062f640(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0x85c));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x10c) != *(float *)(param_4 + 0x860))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15de8);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x10c));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0x9c) != *(float *)(param_4 + 0x9c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e30);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0x9c));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x14) != *(float *)(param_4 + 0xa0))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e50);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x14));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0xa4) != *(float *)(param_4 + 0xa4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e08);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0xa4));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x15) != *(float *)(param_4 + 0xa8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e18);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x15));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0xac) != *(float *)(param_4 + 0xac))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e98);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0xac));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0xb4) != *(float *)(param_4 + 0xb4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e68);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0xb4));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x17) != *(float *)(param_4 + 0xb8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15e80);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x17));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0xbc) != *(float *)(param_4 + 0xbc))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f08);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0xbc));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x18) != *(float *)(param_4 + 0xc0))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f20);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x18));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0xc4) != *(float *)(param_4 + 0xc4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15ed0);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0xc4));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x19) != *(float *)(param_4 + 200))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15ee8);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x19));
  }
  if ((param_4 == 0) || (*(float *)((longlong)param_1 + 0xcc) != *(float *)(param_4 + 0xcc))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f58);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)((longlong)param_1 + 0xcc));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x1b) != *(float *)(param_4 + 0xd8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f38);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a0696c,*(int32_t *)(param_1 + 0x1b));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 100) != *(int *)((longlong)param_1 + 100))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f68);
    if ((*(int *)((longlong)param_1 + 100) == 0) ||
       (puVar7 = &UNK_180a15748, *(int *)((longlong)param_1 + 100) != 1)) {
      puVar7 = &UNK_180a15728;
    }
    FUN_180630b20(param_2,uVar5,&UNK_180a0696c,puVar7);
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x47c) != *(int *)((longlong)param_1 + 0x47c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15b80);
    iVar2 = *(int *)((longlong)param_1 + 0x47c);
    if (iVar2 == 0) {
LAB_1802b2ba1:
      puVar7 = &UNK_180a157f0;
    }
    else if (iVar2 == 1) {
      puVar7 = &UNK_180a15828;
    }
    else {
      if (iVar2 != 2) goto LAB_1802b2ba1;
      puVar7 = &UNK_180a15830;
    }
    FUN_180630b20(param_2,uVar5,&UNK_180a0696c,puVar7);
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 0x478) == *(int *)(param_1 + 0x8f))) goto LAB_1802b2c74;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
  func_0x0001800a1de0(uVar4,uVar5);
  FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15b18);
  iVar2 = *(int *)(param_1 + 0x8f);
  if (iVar2 == 0) {
    puVar7 = &system_data_b57c;
  }
  else if (iVar2 == 1) {
LAB_1802b2c37:
    puVar7 = &system_data_57e4;
  }
  else if (iVar2 == 2) {
    puVar7 = &system_data_57e0;
  }
  else if (iVar2 == 3) {
    puVar7 = &UNK_180a157a8;
  }
  else {
    if (iVar2 != 4) goto LAB_1802b2c37;
    puVar7 = &UNK_180a157c8;
  }
  FUN_180630b20(param_2,uVar5,&UNK_180a0696c,puVar7);
LAB_1802b2c74:
  if ((param_4 == 0) || (*(int *)(param_4 + 0x148) != *(int *)(param_1 + 0x29))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15b98);
    if (*(int *)(param_1 + 0x29) == 1) {
      puVar7 = &UNK_180a157e8;
    }
    else if (*(int *)(param_1 + 0x29) == 2) {
      puVar7 = &UNK_180a157f4;
    }
    else {
      puVar7 = &UNK_180a157fc;
    }
    FUN_180630b20(param_2,uVar5,&UNK_180a0696c,puVar7);
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x14c) != *(int *)((longlong)param_1 + 0x14c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15b58);
    puVar7 = &UNK_180a15750;
    if (*(int *)((longlong)param_1 + 0x14c) == 0) {
      puVar7 = &UNK_180a15760;
    }
    FUN_180630b20(param_2,uVar5,&UNK_180a0696c,puVar7);
  }
  if (((param_4 == 0) || (*(float *)(param_4 + 0x464) != *(float *)((longlong)param_1 + 0x464))) ||
     (*(float *)(param_4 + 0x460) != *(float *)(param_1 + 0x8c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f98);
    func_0x0001800a1de0(uVar4,uVar5);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&system_data_4ee4,*(int32_t *)((longlong)param_1 + 0x464));
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a16290,*(int32_t *)(param_1 + 0x8c));
  }
  if (((param_4 == 0) || (*(float *)(param_4 + 0x46c) != *(float *)((longlong)param_1 + 0x46c))) ||
     (*(float *)(param_4 + 0x468) != *(float *)(param_1 + 0x8d))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16020);
    func_0x0001800a1de0(uVar4,uVar5);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&system_data_4ee4,*(int32_t *)((longlong)param_1 + 0x46c));
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&UNK_180a16290,*(int32_t *)(param_1 + 0x8d));
  }
  if (((param_4 == 0) || (*(float *)(param_4 + 0x74) != *(float *)((longlong)param_1 + 0x74))) ||
     (*(float *)(param_4 + 0x70) != *(float *)(param_1 + 0xe))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16030);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0xe,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x1c8,param_1 + 0x39), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a04cc8);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x39,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x3a,&UNK_180a15ff8,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x158,param_1 + 0x2b), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16008);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x2b,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x2c,&UNK_180a15ff8,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x200,param_1 + 0x40), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a0b178);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x40,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x41,&UNK_180a15ff8,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x238,param_1 + 0x47), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15ff8);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x47,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x48,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x2d8,param_1 + 0x5b), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16068);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x5b,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x5c,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 400,param_1 + 0x32), cVar3 == '\0'))
  {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16078);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x32,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x33,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x310,param_1 + 0x62), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16048);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x62,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 99,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x348,param_1 + 0x69), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16058);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x69,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x6a,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x380,param_1 + 0x70), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a160b0);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x70,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x71,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x3b8,param_1 + 0x77), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a160c0);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x77,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x78,&UNK_180a15b70,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x3f0,param_1 + 0x7e), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a16090);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x7e,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x7f,&UNK_180a15ff8,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x428,param_1 + 0x85), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a05a40);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x85,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x86,&UNK_180a0af54,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = FUN_180270b10(param_4 + 0x270,param_1 + 0x4e), cVar3 == '\0')) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a160a0);
    func_0x0001800a1de0(uVar4,uVar5);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,0x1e);
    uStack_f8 = uVar5;
    FUN_1802bf590(param_1 + 0x4e,&UNK_180a15b70,&UNK_180a15ff8,param_2);
  }
  if (((param_4 == 0) || (*(longlong *)(param_4 + 0x30) != param_1[6])) ||
     (*(longlong *)(param_4 + 0x38) != param_1[7])) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f48);
    FUN_18062fd40(param_2,uVar5,&UNK_180a0696c,param_1 + 6);
  }
  if (((param_4 == 0) || (*(longlong *)(param_4 + 0x20) != param_1[4])) ||
     (*(longlong *)(param_4 + 0x28) != param_1[5])) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_180630b20(param_2,uVar5,&system_data_3a84,&UNK_180a15f80);
    FUN_18062fd40(param_2,uVar5,&UNK_180a0696c,param_1 + 4);
  }
  uStack_f0 = 0;
  uStack_f8 = 0;
  uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06b78);
  puVar1 = (uint *)(param_1 + 0xc);
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15858);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 1) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 9 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15940);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x200) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 2) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15870);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 2) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 4) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15838);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 4) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 8) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15848);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 8) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 0x10) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a158c0);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x10) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 0x20) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a158d8);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x20) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 0x40) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15880);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x40) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || ((char)((byte)*(int32_t *)(param_4 + 0x60) ^ (byte)*puVar1) < '\0')) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a158a8);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x80) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 8 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15930);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x100) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x12 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a159d8);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x40000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x13 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a159f8);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x80000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 10 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15900);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x400) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xb & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15918);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x800) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xc & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15990);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x1000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x14 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a160d8);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x100000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xd & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a159b0);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x2000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xe & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15958);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x4000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xf & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15978);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x8000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x10 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15a18);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x10000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x11 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a06ba4,0);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a15a30);
    puVar7 = &UNK_180a06418;
    if ((*puVar1 & 0x20000) == 0) {
      puVar7 = &UNK_180a06420;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a0696c,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (cVar3 = FUN_1802709c0(param_4 + 0x480,param_1 + 0x90), cVar3 == '\0')) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&UNK_180a15b08,0);
    func_0x0001800a1de0(uVar4,uVar6);
    FUN_180630b20(param_2,uVar6,&system_data_3a84,&UNK_180a16128);
    FUN_180415c50(param_1 + 0x90,param_2,uVar6);
  }
  uVar6 = uStack_e8;
  func_0x0001802bf540(uStack_e8,uVar5);
  func_0x0001802bf540(uVar6,uVar4);
  cVar3 = func_0x0001802bf540(uStack_d8,uVar6);
  if (cVar3 != '\0') {
    FUN_180049cd0(&puStack_b8);
    uStack_d8 = *param_1;
    uStack_d0 = *(int32_t *)(param_1 + 1);
    uStack_cc = *(int32_t *)((longlong)param_1 + 0xc);
    FUN_180639630(&uStack_d8,&puStack_b8,1);
    puVar7 = &system_buffer_ptr;
    if (puStack_b0 != (void *)0x0) {
      puVar7 = puStack_b0;
    }
    FUN_180630b20(param_2,uVar6,&UNK_180a04c44,puVar7);
    puStack_b8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_118);
}








