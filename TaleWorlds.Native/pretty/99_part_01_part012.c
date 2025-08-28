#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part012.c - 3 个函数
// 函数: void function_0ab6f0(int64_t param_1)
void function_0ab6f0(int64_t param_1)
{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int iVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int8_t stack_array_178 [32];
  int64_t lStack_158;
  uint64_t *plocal_var_150;
  uint64_t local_var_148;
  int32_t local_var_140;
  int32_t local_var_13c;
  void *plocal_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  uint64_t local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int32_t local_var_110;
  int32_t local_var_10c;
  int32_t local_var_108;
  int32_t local_var_104;
  uint64_t local_var_100;
  void *plocal_var_f8;
  int32_t local_var_f0;
  int32_t local_var_ec;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  void *plocal_var_d8;
  int32_t local_var_d0;
  int32_t local_var_cc;
  int32_t local_var_c8;
  int32_t local_var_c4;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int32_t local_var_a8;
  int32_t local_var_a4;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  uint64_t local_var_80;
  void *plocal_var_78;
  int32_t local_var_70;
  int32_t local_var_6c;
  int32_t local_var_68;
  int32_t local_var_64;
  uint64_t local_var_60;
  void *plocal_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  uint64_t local_var_40;
  uint64_t local_var_38;
  lVar1 = system_global_data_ptr;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_f0 = 0;
  uVar2 = SystemFunction_0001800ab380(4);
  local_var_e8 = 0;
  plocal_var_d8 = &processed_var_6236_ptr;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_ec = uVar2;
  uVar3 = SystemFunction_0001800ab380(0);
  local_var_c8 = 1;
  plocal_var_b8 = &processed_var_6272_ptr;
  local_var_c4 = 0xffffffff;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_cc = uVar3;
  uVar4 = SystemFunction_0001800ab380(2);
  local_var_a8 = 2;
  plocal_var_98 = &processed_var_6264_ptr;
  local_var_a4 = 0xffffffff;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_ac = uVar4;
  uVar5 = SystemFunction_0001800ab380(0xd);
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_80 = 0;
  plocal_var_150 = &local_var_148;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x90);
  local_var_140 = uVar5;
  local_var_8c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,4,*(uint64_t *)(lVar1 + 0x88));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1d88) = local_var_148;
  plocal_var_150 = &local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  plocal_var_98 = &processed_var_6264_ptr;
  plocal_var_d8 = &processed_var_6236_ptr;
  plocal_var_b8 = &processed_var_6272_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_80 = 0;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0xb8);
  local_var_ec = uVar2;
  local_var_cc = uVar3;
  local_var_ac = uVar4;
  local_var_8c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,4,*(uint64_t *)(lVar1 + 0xb0));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1d90) = local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_f0 = 0;
  local_var_13c = SystemFunction_0001800ab380(0xb);
  plocal_var_d8 = &processed_var_6284_ptr;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_ec = local_var_13c;
  uVar7 = SystemFunction_0001800ab380(10);
  plocal_var_b8 = &processed_var_6236_ptr;
  plocal_var_150 = &local_var_148;
  local_var_c0 = 0;
  plocal_var_98 = &processed_var_6272_ptr;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0xe0);
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,4,*(uint64_t *)(lVar1 + 0xd8));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1d98) = local_var_148;
  plocal_var_150 = &local_var_148;
  plocal_var_d8 = &processed_var_6284_ptr;
  plocal_var_f8 = &processed_var_6248_ptr;
  plocal_var_b8 = &processed_var_6236_ptr;
  local_var_f0 = 0;
  plocal_var_98 = &processed_var_6272_ptr;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0xe0);
  local_var_ec = uVar2;
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,4,*(uint64_t *)(lVar1 + 0xd8));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1de8) = local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_ec = local_var_13c;
  plocal_var_d8 = &processed_var_6284_ptr;
  plocal_var_b8 = &processed_var_6236_ptr;
  plocal_var_98 = &processed_var_6272_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_70 = 0;
  local_var_60 = 0;
  plocal_var_78 = &processed_var_6264_ptr;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x108);
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  local_var_6c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,5,*(uint64_t *)(lVar1 + 0x100));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1da0) = local_var_148;
  plocal_var_150 = &local_var_148;
  plocal_var_d8 = &processed_var_6284_ptr;
  plocal_var_f8 = &processed_var_6248_ptr;
  plocal_var_b8 = &processed_var_6236_ptr;
  local_var_f0 = 0;
  plocal_var_98 = &processed_var_6272_ptr;
  plocal_var_78 = &processed_var_6264_ptr;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_70 = 0;
  local_var_60 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x108);
  local_var_ec = uVar2;
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  local_var_6c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,5);
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  uVar8 = 0;
  *(uint64_t *)(param_1 + 0x1df0) = local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  plocal_var_d8 = &processed_var_6236_ptr;
  plocal_var_b8 = &processed_var_6272_ptr;
  plocal_var_98 = &processed_var_6272_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_a0 = 0;
  local_var_90 = 1;
  local_var_ec = uVar2;
  local_var_cc = uVar3;
  local_var_ac = uVar4;
  uVar5 = SystemFunction_0001800ab380(3);
  plocal_var_150 = &local_var_148;
  plocal_var_78 = &processed_var_6264_ptr;
  local_var_6c = local_var_140;
  local_var_70 = (int32_t)uVar8;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x158);
  local_var_8c = uVar5;
  local_var_80 = uVar8;
  local_var_60 = uVar8;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,5,*(uint64_t *)(lVar1 + 0x150));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1db0) = local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_f0 = 0;
  plocal_var_d8 = &processed_var_6236_ptr;
  plocal_var_b8 = &processed_var_6272_ptr;
  plocal_var_98 = &processed_var_6272_ptr;
  plocal_var_78 = &processed_var_6264_ptr;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_80 = 0;
  local_var_70 = 0;
  local_var_60 = 0;
  local_var_6c = local_var_140;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_90 = 1;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x180);
  local_var_ec = uVar2;
  local_var_cc = uVar3;
  local_var_ac = uVar4;
  local_var_8c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,5,*(uint64_t *)(lVar1 + 0x178));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1db8) = local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_ec = local_var_13c;
  plocal_var_d8 = &processed_var_6284_ptr;
  plocal_var_b8 = &processed_var_6236_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_60 = 0;
  plocal_var_98 = &processed_var_6272_ptr;
  plocal_var_78 = &processed_var_6272_ptr;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_70 = 1;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x1a8);
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  local_var_6c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,5,*(uint64_t *)(lVar1 + 0x1a0));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1dc0) = local_var_148;
  plocal_var_150 = &local_var_148;
  plocal_var_d8 = &processed_var_6284_ptr;
  plocal_var_f8 = &processed_var_6248_ptr;
  plocal_var_b8 = &processed_var_6236_ptr;
  local_var_f0 = 0;
  plocal_var_98 = &processed_var_6272_ptr;
  plocal_var_78 = &processed_var_6272_ptr;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_60 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_70 = 1;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x1a8);
  local_var_ec = uVar2;
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  local_var_6c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,5,*(uint64_t *)(lVar1 + 0x1a0));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1df8) = local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_ec = local_var_13c;
  plocal_var_d8 = &processed_var_6284_ptr;
  plocal_var_b8 = &processed_var_6236_ptr;
  plocal_var_98 = &processed_var_6272_ptr;
  plocal_var_78 = &processed_var_6272_ptr;
  plocal_var_58 = &processed_var_6264_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_80 = 0;
  local_var_60 = 0;
  local_var_50 = 0;
  local_var_40 = 0;
  local_var_4c = local_var_140;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_70 = 1;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  local_var_48 = 5;
  local_var_44 = 0xffffffff;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x1d0);
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  local_var_6c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,6,*(uint64_t *)(lVar1 + 0x1c8));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1dc8) = local_var_148;
  plocal_var_150 = &local_var_148;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  plocal_var_b8 = &processed_var_6236_ptr;
  plocal_var_98 = &processed_var_6272_ptr;
  plocal_var_78 = &processed_var_6272_ptr;
  plocal_var_58 = &processed_var_6264_ptr;
  plocal_var_d8 = &processed_var_6284_ptr;
  local_var_4c = local_var_140;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_c0 = 0;
  local_var_b0 = 0;
  local_var_a8 = 2;
  local_var_a4 = 0xffffffff;
  local_var_a0 = 0;
  local_var_90 = 0;
  local_var_88 = 3;
  local_var_84 = 0xffffffff;
  local_var_80 = 0;
  local_var_70 = 1;
  local_var_68 = 4;
  local_var_64 = 0xffffffff;
  local_var_60 = 0;
  local_var_50 = 0;
  local_var_48 = 5;
  local_var_44 = 0xffffffff;
  local_var_40 = 0;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x1d0);
  local_var_ec = uVar2;
  local_var_cc = uVar7;
  local_var_ac = uVar3;
  local_var_8c = uVar4;
  local_var_6c = uVar5;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,6,*(uint64_t *)(lVar1 + 0x1c8));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1e00) = local_var_148;
  plocal_var_118 = &processed_var_6236_ptr;
  plocal_var_138 = &processed_var_6248_ptr;
  local_var_130 = 0;
  local_var_128 = 0;
  local_var_120 = 0;
  local_var_110 = 0;
  local_var_108 = 1;
  local_var_104 = 0xffffffff;
  local_var_100 = 0;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x130);
  local_var_12c = uVar2;
  local_var_10c = uVar3;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_138,2,*(uint64_t *)(lVar1 + 0x128))
  ;
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1da8) = local_var_148;
  plocal_var_138 = &processed_var_6248_ptr;
  local_var_130 = 0;
  local_var_128 = 0;
  local_var_120 = 0;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x220);
  local_var_12c = uVar2;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_138,1,*(uint64_t *)(lVar1 + 0x218))
  ;
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  plocal_var_150 = &local_var_148;
  *(uint64_t *)(param_1 + 0x1dd8) = local_var_148;
  plocal_var_d8 = &processed_var_6272_ptr;
  plocal_var_f8 = &processed_var_6248_ptr;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d0 = 0;
  local_var_c8 = 1;
  local_var_c4 = 0xffffffff;
  local_var_c0 = 0;
  lStack_158 = (int64_t)*(int *)(lVar1 + 0x248);
  local_var_ec = uVar2;
  local_var_cc = uVar4;
  iVar6 = (**(code **)(**(int64_t **)(param_1 + 0x1d78) + 0x58))
                    (*(int64_t **)(param_1 + 0x1d78),&plocal_var_f8,2,*(uint64_t *)(lVar1 + 0x240));
  if (iVar6 < 0) {
    SystemCore_Loader(iVar6,&processed_var_6304_ptr);
  }
  *(uint64_t *)(param_1 + 0x1de0) = local_var_148;
  *(uint64_t *)(param_1 + 0x1dd0) = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0ac530(int64_t param_1)
void function_0ac530(int64_t param_1)
{
  int iVar1;
  uint64_t uVar2;
  int8_t uVar3;
  int32_t stack_special_x_8;
  int32_t stack_special_x_c;
  stack_special_x_8 = 0x7000000;
  uVar3 = 0;
  stack_special_x_c = 1;
  if ((*(int *)(SYSTEM_STATE_MANAGER + 0x4d0) - 3U & 0xfffffffd) == 0) {
    uVar3 = 2;
  }
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e08) = uVar2;
  stack_special_x_8 = 0x7000200;
  stack_special_x_c = 1;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e10) = uVar2;
  stack_special_x_8 = 0x7000007;
  stack_special_x_c = 1;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e18) = uVar2;
  stack_special_x_8 = 0x7000207;
  stack_special_x_c = 1;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e20) = uVar2;
  stack_special_x_8 = 0x7000107;
  stack_special_x_c = 1;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e28) = uVar2;
  iVar1 = *(int *)(SYSTEM_STATE_MANAGER + 0x310);
  if (iVar1 == 0) {
    stack_special_x_c = 1;
    stack_special_x_8 = 6;
    goto LAB_1800ac67e;
  }
  if (iVar1 == 1) {
    stack_special_x_8 = 7;
    stack_special_x_c = 1;
    goto LAB_1800ac67e;
  }
  if (iVar1 == 2) {
LAB_1800ac673:
    stack_special_x_c = 2;
  }
  else if (iVar1 == 3) {
    stack_special_x_c = 4;
  }
  else if (iVar1 == 4) {
    stack_special_x_c = 8;
  }
  else {
    if (iVar1 != 5) goto LAB_1800ac673;
    stack_special_x_c = 0x10;
  }
  stack_special_x_8._0_3_ = CONCAT12(uVar3,8);
  stack_special_x_8 = (uint)(uint3)stack_special_x_8;
LAB_1800ac67e:
  stack_special_x_8._0_2_ = (ushort)(byte)stack_special_x_8;
  stack_special_x_8 = CONCAT13(7,(uint3)stack_special_x_8);
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e30) = uVar2;
  stack_special_x_8 = 0x300020a;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e38) = uVar2;
  stack_special_x_8 = 0x600020a;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e40) = uVar2;
  stack_special_x_8 = 0x300030a;
  uVar2 = SystemCore_PerformanceMonitor(param_1,&stack_special_x_8);
  *(uint64_t *)(param_1 + 0x1e48) = uVar2;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0ac700(int64_t param_1)
void function_0ac700(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int8_t uVar3;
  uint uVar4;
  uint64_t *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int8_t stack_array_b8 [32];
  uint local_var_98;
  uint local_var_94;
  int iStack_90;
  int64_t lStack_88;
  uint local_var_80;
  int iStack_7c;
  uint64_t local_var_78;
  uint local_var_70;
  uint local_var_6c;
  int32_t local_var_68;
  uint local_var_64;
  int8_t local_var_60;
  char cStack_5f;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  iStack_90 = 0;
  puVar5 = (uint64_t *)(param_1 + 0x21b8);
  uVar3 = 0;
  lStack_88 = param_1;
  do {
    iStack_7c = 0;
    local_var_98 = (uint)((char)iStack_90 == '\0');
    do {
      local_var_80 = 0;
      local_var_94 = (uint)((char)iStack_7c == '\0');
      do {
        iVar8 = 0;
        uVar6 = local_var_80 & 0xff;
        do {
          uVar7 = 0;
          do {
            uVar4 = 0;
            do {
              iVar2 = 0;
              do {
                if ((char)iVar2 == '\0') {
                  uVar3 = 0x1f;
                }
                else if ((char)iVar2 == '\x01') {
                  uVar3 = 0x80;
                }
                local_var_68 = 4;
                switch(uVar6) {
                case 0:
                  local_var_68 = 1;
                  break;
                case 1:
                  local_var_68 = 2;
                  break;
                case 2:
                  local_var_68 = 3;
                  break;
                case 4:
                  local_var_68 = 5;
                  break;
                case 5:
                  local_var_68 = 6;
                  break;
                case 6:
                  local_var_68 = 7;
                  break;
                case 7:
                  local_var_68 = 8;
                }
                local_var_64 = (uint)((char)iVar8 == '\0');
                if ((char)iVar8 == '\0') {
                  local_var_54 = 1;
                  local_var_5c = 1;
                  local_var_58 = 1;
                  cStack_5f = -((char)uVar4 != '\0');
                  switch(uVar4 & 0xff) {
                  case 1:
                    local_var_54 = 2;
                    break;
                  case 2:
                    local_var_54 = 3;
                    break;
                  case 3:
                    local_var_54 = 4;
                    break;
                  case 4:
                    local_var_54 = 5;
                    break;
                  case 5:
                    local_var_54 = 6;
                    break;
                  case 6:
                    local_var_54 = 7;
                    break;
                  case 7:
                    local_var_54 = 8;
                  }
                  local_var_50 = 4;
                  switch(uVar7 & 0xff) {
                  case 0:
                    local_var_50 = 1;
                    break;
                  case 1:
                    local_var_50 = 2;
                    break;
                  case 2:
                    local_var_50 = 3;
                    break;
                  case 4:
                    local_var_50 = 5;
                    break;
                  case 5:
                    local_var_50 = 6;
                    break;
                  case 6:
                    local_var_50 = 7;
                    break;
                  case 7:
                    local_var_50 = 8;
                  }
                  local_var_44 = 1;
                  local_var_4c = 1;
                  local_var_48 = 1;
                  switch(uVar4 & 0xff) {
                  case 1:
                    local_var_44 = 2;
                    break;
                  case 2:
                    local_var_44 = 3;
                    break;
                  case 3:
                    local_var_44 = 4;
                    break;
                  case 4:
                    local_var_44 = 5;
                    break;
                  case 5:
                    local_var_44 = 6;
                    break;
                  case 6:
                    local_var_44 = 7;
                    break;
                  case 7:
                    local_var_44 = 8;
                  }
                  local_var_40 = 4;
                  switch(uVar7 & 0xff) {
                  case 0:
                    local_var_40 = 1;
                    break;
                  case 1:
                    local_var_40 = 2;
                    break;
                  case 2:
                    local_var_40 = 3;
                    break;
                  case 4:
                    local_var_40 = 5;
                    break;
                  case 5:
                    local_var_40 = 6;
                    break;
                  case 6:
                    local_var_40 = 7;
                    break;
                  case 7:
                    local_var_40 = 8;
                  }
                  local_var_60 = uVar3;
                }
                local_var_70 = local_var_98;
                local_var_6c = local_var_94;
                iVar1 = (**(code **)(**(int64_t **)(lStack_88 + 0x1d78) + 0xa8))
                                  (*(int64_t **)(lStack_88 + 0x1d78),&local_var_70,&local_var_78);
                if (iVar1 < 0) {
                  SystemCore_Loader(iVar1,&processed_var_6064_ptr);
                }
                iVar2 = iVar2 + 1;
                *puVar5 = local_var_78;
                puVar5 = puVar5 + 1;
              } while (iVar2 < 2);
              uVar4 = uVar4 + 1;
            } while ((int)uVar4 < 8);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 8);
          iVar8 = iVar8 + 1;
        } while (iVar8 < 2);
        local_var_80 = local_var_80 + 1;
      } while ((int)local_var_80 < 8);
      iStack_7c = iStack_7c + 1;
    } while (iStack_7c < 2);
    iStack_90 = iStack_90 + 1;
  } while (iStack_90 < 2);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_b8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address