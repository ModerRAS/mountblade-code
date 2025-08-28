#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part046_sub002_sub002.c - 1 个函数

// 函数: void FUN_1802b18a0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_1802b18a0(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *puVar7;
  int8_t auStack_118 [32];
  uint64_t uStack_f8;
  uint64_t uStack_f0;
  uint64_t uStack_e8;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  uint64_t uStack_c8;
  void *puStack_b8;
  void *puStack_b0;
  uint64_t uStack_58;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_118;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_d8 = param_3;
  uStack_e8 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5080_ptr,0);
  uStack_f0 = 0;
  uStack_f8 = 0;
  uVar4 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5608_ptr,0);
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0x6c) != *(float *)(param_4 + 0x6c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5648_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0x6c));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0x8c) != *(float *)(param_4 + 0x8c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5784_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0x8c));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x12) != *(float *)(param_4 + 0x90))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5824_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x12));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0x94) != *(float *)(param_4 + 0x94))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5712_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0x94));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x13) != *(float *)(param_4 + 0x98))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5752_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x13));
  }
  if ((((param_4 == 0) || (*(float *)(param_1 + 0xfc) != *(float *)(param_4 + 0x7e0))) ||
      (*(float *)((int64_t)param_1 + 0x7e4) != *(float *)(param_4 + 0x7e4))) ||
     (*(float *)(param_1 + 0xfd) != *(float *)(param_4 + 0x7e8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5936_ptr);
    FUN_18062fb40(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0xfc);
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0xfe) != *(float *)(param_4 + 0x7f0))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5864_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0xfe));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0xff) != *(float *)(param_4 + 0x7f8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5992_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0xff));
  }
  if ((((param_4 == 0) || (*(float *)(param_1 + 0x104) != *(float *)(param_4 + 0x820))) ||
      (*(float *)((int64_t)param_1 + 0x824) != *(float *)(param_4 + 0x824))) ||
     (*(float *)(param_1 + 0x105) != *(float *)(param_4 + 0x828))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6352_ptr);
    FUN_18062fb40(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x104);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x106) != *(float *)(param_4 + 0x830))) ||
     ((*(float *)((int64_t)param_1 + 0x834) != *(float *)(param_4 + 0x834) ||
      (*(float *)(param_1 + 0x107) != *(float *)(param_4 + 0x838))))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5952_ptr);
    FUN_18062fb40(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x106);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x108) != *(float *)(param_4 + 0x840))) ||
     ((*(float *)((int64_t)param_1 + 0x844) != *(float *)(param_4 + 0x844) ||
      (*(float *)(param_1 + 0x109) != *(float *)(param_4 + 0x848))))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5272_ptr);
    FUN_18062fb40(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x108);
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x10a) != *(float *)(param_4 + 0x850))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5968_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x10a));
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x111) != *(float *)(param_4 + 0x888))) ||
     (*(float *)((int64_t)param_1 + 0x88c) != *(float *)(param_4 + 0x88c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6096_ptr);
    FUN_1806307a0(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x111);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x112) != *(float *)(param_4 + 0x890))) ||
     (*(float *)((int64_t)param_1 + 0x894) != *(float *)(param_4 + 0x894))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6112_ptr);
    FUN_1806307a0(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x112);
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8a8) != *(int *)(param_1 + 0x115))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6040_ptr);
    FUN_180630c80(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x115));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8ac) != *(int *)((int64_t)param_1 + 0x8ac))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6072_ptr);
    FUN_180630c80(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0x8ac));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x8b0) != *(int *)(param_1 + 0x116))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6168_ptr);
    FUN_18062f640(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x116));
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x113) != *(float *)(param_4 + 0x898))) ||
     (*(float *)((int64_t)param_1 + 0x89c) != *(float *)(param_4 + 0x89c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6200_ptr);
    FUN_1806307a0(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x113);
  }
  if (((param_4 == 0) || (*(float *)(param_1 + 0x114) != *(float *)(param_4 + 0x8a0))) ||
     (*(float *)((int64_t)param_1 + 0x8a4) != *(float *)(param_4 + 0x8a4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6128_ptr);
    FUN_1806307a0(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 0x114);
  }
  if (((param_4 == 0) || (*(int *)(param_4 + 0x854) != *(int *)((int64_t)param_1 + 0x854))) ||
     (*(int *)(param_4 + 0x858) != *(int *)(param_1 + 0x10b))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6144_ptr);
    FUN_180630980(param_2,uVar5,&memory_allocator_3692_ptr,(int *)((int64_t)param_1 + 0x854));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x85c) != *(int *)((int64_t)param_1 + 0x85c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6248_ptr);
    FUN_18062f640(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0x85c));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x10c) != *(float *)(param_4 + 0x860))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6280_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x10c));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0x9c) != *(float *)(param_4 + 0x9c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6352_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0x9c));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x14) != *(float *)(param_4 + 0xa0))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6384_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x14));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0xa4) != *(float *)(param_4 + 0xa4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6312_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0xa4));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x15) != *(float *)(param_4 + 0xa8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6328_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x15));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0xac) != *(float *)(param_4 + 0xac))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6456_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0xac));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0xb4) != *(float *)(param_4 + 0xb4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6408_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0xb4));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x17) != *(float *)(param_4 + 0xb8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6432_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x17));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0xbc) != *(float *)(param_4 + 0xbc))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6568_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0xbc));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x18) != *(float *)(param_4 + 0xc0))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6592_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x18));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0xc4) != *(float *)(param_4 + 0xc4))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6512_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0xc4));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x19) != *(float *)(param_4 + 200))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6536_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x19));
  }
  if ((param_4 == 0) || (*(float *)((int64_t)param_1 + 0xcc) != *(float *)(param_4 + 0xcc))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6648_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)((int64_t)param_1 + 0xcc));
  }
  if ((param_4 == 0) || (*(float *)(param_1 + 0x1b) != *(float *)(param_4 + 0xd8))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6616_ptr);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&memory_allocator_3692_ptr,*(int32_t *)(param_1 + 0x1b));
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 100) != *(int *)((int64_t)param_1 + 100))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6664_ptr);
    if ((*(int *)((int64_t)param_1 + 100) == 0) ||
       (puVar7 = &processed_var_4584_ptr, *(int *)((int64_t)param_1 + 100) != 1)) {
      puVar7 = &processed_var_4552_ptr;
    }
    SystemAllocationProcessor(param_2,uVar5,&memory_allocator_3692_ptr,puVar7);
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x47c) != *(int *)((int64_t)param_1 + 0x47c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5664_ptr);
    iVar2 = *(int *)((int64_t)param_1 + 0x47c);
    if (iVar2 == 0) {
LAB_1802b2ba1:
      puVar7 = &processed_var_4752_ptr;
    }
    else if (iVar2 == 1) {
      puVar7 = &processed_var_4808_ptr;
    }
    else {
      if (iVar2 != 2) goto LAB_1802b2ba1;
      puVar7 = &processed_var_4816_ptr;
    }
    SystemAllocationProcessor(param_2,uVar5,&memory_allocator_3692_ptr,puVar7);
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 0x478) == *(int *)(param_1 + 0x8f))) goto LAB_1802b2c74;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
  func_0x0001800a1de0(uVar4,uVar5);
  SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5560_ptr);
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
    puVar7 = &processed_var_4680_ptr;
  }
  else {
    if (iVar2 != 4) goto LAB_1802b2c37;
    puVar7 = &processed_var_4712_ptr;
  }
  SystemAllocationProcessor(param_2,uVar5,&memory_allocator_3692_ptr,puVar7);
LAB_1802b2c74:
  if ((param_4 == 0) || (*(int *)(param_4 + 0x148) != *(int *)(param_1 + 0x29))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5688_ptr);
    if (*(int *)(param_1 + 0x29) == 1) {
      puVar7 = &processed_var_4744_ptr;
    }
    else if (*(int *)(param_1 + 0x29) == 2) {
      puVar7 = &processed_var_4756_ptr;
    }
    else {
      puVar7 = &processed_var_4764_ptr;
    }
    SystemAllocationProcessor(param_2,uVar5,&memory_allocator_3692_ptr,puVar7);
  }
  if ((param_4 == 0) || (*(int *)(param_4 + 0x14c) != *(int *)((int64_t)param_1 + 0x14c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_5624_ptr);
    puVar7 = &processed_var_4592_ptr;
    if (*(int *)((int64_t)param_1 + 0x14c) == 0) {
      puVar7 = &processed_var_4608_ptr;
    }
    SystemAllocationProcessor(param_2,uVar5,&memory_allocator_3692_ptr,puVar7);
  }
  if (((param_4 == 0) || (*(float *)(param_4 + 0x464) != *(float *)((int64_t)param_1 + 0x464))) ||
     (*(float *)(param_4 + 0x460) != *(float *)(param_1 + 0x8c))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6712_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&system_data_4ee4,*(int32_t *)((int64_t)param_1 + 0x464));
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&processed_var_7472_ptr,*(int32_t *)(param_1 + 0x8c));
  }
  if (((param_4 == 0) || (*(float *)(param_4 + 0x46c) != *(float *)((int64_t)param_1 + 0x46c))) ||
     (*(float *)(param_4 + 0x468) != *(float *)(param_1 + 0x8d))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6848_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&system_data_4ee4,*(int32_t *)((int64_t)param_1 + 0x46c));
    uStack_f8 = uStack_f8 & 0xffffffffffffff00;
    FUN_18062f990(param_2,uVar5,&processed_var_7472_ptr,*(int32_t *)(param_1 + 0x8d));
  }
  if (((param_4 == 0) || (*(float *)(param_4 + 0x74) != *(float *)((int64_t)param_1 + 0x74))) ||
     (*(float *)(param_4 + 0x70) != *(float *)(param_1 + 0xe))) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6864_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0xe,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x1c8,param_1 + 0x39), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6360_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x39,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x3a,&processed_var_6808_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x158,param_1 + 0x2b), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6824_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x2b,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x2c,&processed_var_6808_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x200,param_1 + 0x40), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&rendering_buffer_2136_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x40,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x41,&processed_var_6808_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x238,param_1 + 0x47), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6808_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x47,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x48,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x2d8,param_1 + 0x5b), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6920_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x5b,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x5c,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 400,param_1 + 0x32), cVar3 == '\0'))
  {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6936_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x32,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x33,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x310,param_1 + 0x62), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6888_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x62,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 99,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x348,param_1 + 0x69), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6904_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x69,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x6a,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x380,param_1 + 0x70), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6992_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x70,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x71,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x3b8,param_1 + 0x77), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_7008_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x77,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x78,&processed_var_5648_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x3f0,param_1 + 0x7e), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6960_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x7e,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x7f,&processed_var_6808_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = func_0x000180270b70(param_4 + 0x428,param_1 + 0x85), cVar3 == '\0')
     ) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_9808_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    FUN_1802bf620(param_1 + 0x85,param_2,uVar5);
    uStack_f8 = CONCAT44(uStack_f8._4_4_,0x1e);
    FUN_180416900(param_1 + 0x86,&ui_system_data_1588_ptr,param_2,uVar5);
  }
  if ((param_4 == 0) || (cVar3 = FUN_180270b10(param_4 + 0x270,param_1 + 0x4e), cVar3 == '\0')) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6976_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,0x1e);
    uStack_f8 = uVar5;
    FUN_1802bf590(param_1 + 0x4e,&processed_var_5648_ptr,&processed_var_6808_ptr,param_2);
  }
  if (((param_4 == 0) || (*(int64_t *)(param_4 + 0x30) != param_1[6])) ||
     (*(int64_t *)(param_4 + 0x38) != param_1[7])) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6632_ptr);
    FUN_18062fd40(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 6);
  }
  if (((param_4 == 0) || (*(int64_t *)(param_4 + 0x20) != param_1[4])) ||
     (*(int64_t *)(param_4 + 0x28) != param_1[5])) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr);
    func_0x0001800a1de0(uVar4,uVar5);
    SystemAllocationProcessor(param_2,uVar5,&system_data_3a84,&processed_var_6688_ptr);
    FUN_18062fd40(param_2,uVar5,&memory_allocator_3692_ptr,param_1 + 4);
  }
  uStack_f0 = 0;
  uStack_f8 = 0;
  uVar5 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4216_ptr);
  puVar1 = (uint *)(param_1 + 0xc);
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4856_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 1) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 9 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5088_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x200) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 2) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4880_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 2) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 4) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4824_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 4) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 8) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4840_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 8) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 0x10) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4960_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x10) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 0x20) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4984_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x20) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) & 0x40) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4896_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x40) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || ((char)((byte)*(int32_t *)(param_4 + 0x60) ^ (byte)*puVar1) < '\0')) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_4936_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x80) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 8 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5072_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x100) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x12 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5240_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x40000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x13 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5272_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x80000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 10 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5024_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x400) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xb & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5048_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x800) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xc & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5168_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x1000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x14 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_7032_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x100000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xd & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5200_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x2000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xe & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5112_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x4000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0xf & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5144_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x8000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x10 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5304_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x10000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (((*(uint *)(param_4 + 0x60) ^ *puVar1) >> 0x11 & 1) != 0)) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_4260_ptr,0);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_5328_ptr);
    puVar7 = &rendering_buffer_2328_ptr;
    if ((*puVar1 & 0x20000) == 0) {
      puVar7 = &rendering_buffer_2336_ptr;
    }
    SystemAllocationProcessor(param_2,uVar6,&memory_allocator_3692_ptr,puVar7);
    func_0x0001800a1de0(uVar5,uVar6);
  }
  if ((param_4 == 0) || (cVar3 = FUN_1802709c0(param_4 + 0x480,param_1 + 0x90), cVar3 == '\0')) {
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar6 = FUN_1804c12a0(param_2 + 0x60,1,&processed_var_5544_ptr,0);
    func_0x0001800a1de0(uVar4,uVar6);
    SystemAllocationProcessor(param_2,uVar6,&system_data_3a84,&processed_var_7112_ptr);
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
    uStack_cc = *(int32_t *)((int64_t)param_1 + 0xc);
    FUN_180639630(&uStack_d8,&puStack_b8,1);
    puVar7 = &system_buffer_ptr;
    if (puStack_b0 != (void *)0x0) {
      puVar7 = puStack_b0;
    }
    SystemAllocationProcessor(param_2,uVar6,&processed_var_6228_ptr,puVar7);
    puStack_b8 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_118);
}








