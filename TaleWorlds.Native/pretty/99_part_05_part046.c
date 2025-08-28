#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part046.c - 7 个函数

// 函数: void FUN_1802f76c2(int32_t param_1)
void FUN_1802f76c2(int32_t param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint uVar4;
  uint uVar5;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar6;
  float fVar7;
  int in_stack_000000b0;
  
  FUN_180085020(param_1,&stack0x00000050);
  FUN_18062fb40();
  FUN_18062fb40();
  FUN_18062fb40();
  if (*(longlong *)(unaff_RDI + 0x158) != 0) {
    FUN_180630b20();
  }
  if (((*(float *)(unaff_RDI + 0x50) != 0.0) || (*(float *)(unaff_RDI + 0x54) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x58) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)(unaff_RDI + 0x60) != 0.0) || (*(float *)(unaff_RDI + 100) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x68) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)(unaff_RDI + 0x284) != 1.0) || (*(float *)(unaff_RDI + 0x288) != 1.0)) ||
     (*(float *)(unaff_RDI + 0x28c) != 1.0)) {
    fVar7 = *(float *)(unaff_RDI + 0x288) * 256.0;
    uVar1 = (uint)(longlong)(*(float *)(unaff_RDI + 0x290) * 256.0);
    fVar6 = *(float *)(unaff_RDI + 0x284) * 256.0;
    uVar5 = 0xff;
    if (uVar1 < 0xff) {
      uVar5 = uVar1;
    }
    uVar2 = (uint)(longlong)fVar6;
    uVar1 = 0xff;
    if (uVar2 < 0xff) {
      uVar1 = uVar2;
    }
    uVar3 = (uint)(longlong)fVar7;
    uVar2 = 0xff;
    if (uVar3 < 0xff) {
      uVar2 = uVar3;
    }
    uVar4 = (uint)(longlong)(*(float *)(unaff_RDI + 0x28c) * 256.0);
    uVar3 = 0xff;
    if (uVar4 < 0xff) {
      uVar3 = uVar4;
    }
    FUN_18062f640(fVar6,fVar7,&unknown_var_8684_ptr,((uVar5 << 8 | uVar1) << 8 | uVar2) << 8 | uVar3);
  }
  if (((*(float *)(unaff_RDI + 0xa8) != 0.0) || (*(float *)(unaff_RDI + 0xac) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xb0) != 0.0)) {
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_180630240();
  }
  if ((*(longlong *)(unaff_RBX + 0x30) != unaff_R15) ||
     (*(longlong *)(unaff_RBX + 0x40) != unaff_R15)) {
    if (in_stack_000000b0 != 0) {
      FUN_180630c80();
    }
    if (*(longlong *)(unaff_R14 + 0x30) == unaff_R15) {
      *(longlong *)(unaff_RBX + 0x50) = unaff_R15;
      *(longlong *)(unaff_R14 + 0x30) = unaff_RBX;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_R14 + 0x38);
      *(longlong *)(*(longlong *)(unaff_R14 + 0x38) + 0x58) = unaff_RBX;
    }
    *(longlong *)(unaff_R14 + 0x38) = unaff_RBX;
    *(longlong *)(unaff_RBX + 0x20) = unaff_R14;
    *(longlong *)(unaff_RBX + 0x58) = unaff_R15;
  }
  return;
}






// 函数: void FUN_1802f7a46(void)
void FUN_1802f7a46(void)

{
  longlong unaff_RBX;
  longlong unaff_R14;
  longlong unaff_R15;
  int in_stack_000000b0;
  
  if (*(longlong *)(unaff_RBX + 0x40) != unaff_R15) {
    if (in_stack_000000b0 != 0) {
      FUN_180630c80();
    }
    if (*(longlong *)(unaff_R14 + 0x30) == unaff_R15) {
      *(longlong *)(unaff_RBX + 0x50) = unaff_R15;
      *(longlong *)(unaff_R14 + 0x30) = unaff_RBX;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_R14 + 0x38);
      *(longlong *)(*(longlong *)(unaff_R14 + 0x38) + 0x58) = unaff_RBX;
    }
    *(longlong *)(unaff_R14 + 0x38) = unaff_RBX;
    *(longlong *)(unaff_RBX + 0x20) = unaff_R14;
    *(longlong *)(unaff_RBX + 0x58) = unaff_R15;
  }
  return;
}






// 函数: void FUN_1802f7aa9(void)
void FUN_1802f7aa9(void)

{
  uint uVar1;
  longlong in_RAX;
  longlong lVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  longlong *unaff_RDI;
  uint uVar6;
  uint uVar7;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar8;
  int32_t uStack0000000000000034;
  int32_t uStack000000000000003c;
  int in_stack_000000b0;
  
  lVar2 = (**(code **)(in_RAX + 0x158))();
  uStack0000000000000034 = *(int32_t *)(lVar2 + 0x34);
  uStack000000000000003c = *(int32_t *)(lVar2 + 0x3c);
  uVar3 = unaff_RBP;
  if (*unaff_RDI != unaff_R12) {
    uVar3 = (**(code **)(*unaff_RDI + 0x158))();
  }
  FUN_1801c1720(uVar3,&stack0x00000040);
  if (*unaff_RDI != unaff_R12) {
    unaff_RBP = (**(code **)(*unaff_RDI + 0x158))();
  }
  FUN_180085020(unaff_RBP,&stack0x00000050);
  FUN_18062fb40();
  FUN_18062fb40();
  FUN_18062fb40();
  if (unaff_RDI[0x2b] != 0) {
    FUN_180630b20();
  }
  if (((*(float *)(unaff_RDI + 10) != 0.0) || (*(float *)((longlong)unaff_RDI + 0x54) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xb) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)(unaff_RDI + 0xc) != 0.0) || (*(float *)((longlong)unaff_RDI + 100) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xd) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)((longlong)unaff_RDI + 0x284) != 1.0) || (*(float *)(unaff_RDI + 0x51) != 1.0)) ||
     (*(float *)((longlong)unaff_RDI + 0x28c) != 1.0)) {
    uVar1 = (uint)(longlong)(*(float *)(unaff_RDI + 0x52) * 256.0);
    fVar8 = *(float *)((longlong)unaff_RDI + 0x284) * 256.0;
    uVar7 = 0xff;
    if (uVar1 < 0xff) {
      uVar7 = uVar1;
    }
    uVar4 = (uint)(longlong)fVar8;
    uVar1 = 0xff;
    if (uVar4 < 0xff) {
      uVar1 = uVar4;
    }
    uVar5 = (uint)(longlong)(*(float *)(unaff_RDI + 0x51) * 256.0);
    uVar4 = 0xff;
    if (uVar5 < 0xff) {
      uVar4 = uVar5;
    }
    uVar6 = (uint)(longlong)(*(float *)((longlong)unaff_RDI + 0x28c) * 256.0);
    uVar5 = 0xff;
    if (uVar6 < 0xff) {
      uVar5 = uVar6;
    }
    FUN_18062f640(fVar8,*(float *)(unaff_RDI + 0x51) * 256.0,&unknown_var_8684_ptr,
                  ((uVar7 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5);
  }
  if (((*(float *)(unaff_RDI + 0x15) != 0.0) || (*(float *)((longlong)unaff_RDI + 0xac) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x16) != 0.0)) {
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_180630240();
  }
  if ((*(longlong *)(unaff_RBX + 0x30) != unaff_R15) ||
     (*(longlong *)(unaff_RBX + 0x40) != unaff_R15)) {
    if (in_stack_000000b0 != 0) {
      FUN_180630c80();
    }
    if (*(longlong *)(unaff_R14 + 0x30) == unaff_R15) {
      *(longlong *)(unaff_RBX + 0x50) = unaff_R15;
      *(longlong *)(unaff_R14 + 0x30) = unaff_RBX;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_R14 + 0x38);
      *(longlong *)(*(longlong *)(unaff_R14 + 0x38) + 0x58) = unaff_RBX;
    }
    *(longlong *)(unaff_R14 + 0x38) = unaff_RBX;
    *(longlong *)(unaff_RBX + 0x20) = unaff_R14;
    *(longlong *)(unaff_RBX + 0x58) = unaff_R15;
  }
  return;
}






// 函数: void FUN_1802f7acb(void)
void FUN_1802f7acb(void)

{
  uint uVar1;
  longlong in_RAX;
  uint64_t uVar2;
  uint uVar3;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint uVar5;
  uint uVar6;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar7;
  float fVar8;
  int in_stack_000000b0;
  
  uVar2 = (**(code **)(in_RAX + 0x158))();
  FUN_180085020(uVar2,&stack0x00000050);
  FUN_18062fb40();
  FUN_18062fb40();
  FUN_18062fb40();
  if (*(longlong *)(unaff_RDI + 0x158) != 0) {
    FUN_180630b20();
  }
  if (((*(float *)(unaff_RDI + 0x50) != 0.0) || (*(float *)(unaff_RDI + 0x54) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x58) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)(unaff_RDI + 0x60) != 0.0) || (*(float *)(unaff_RDI + 100) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x68) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)(unaff_RDI + 0x284) != 1.0) || (*(float *)(unaff_RDI + 0x288) != 1.0)) ||
     (*(float *)(unaff_RDI + 0x28c) != 1.0)) {
    fVar8 = *(float *)(unaff_RDI + 0x288) * 256.0;
    uVar1 = (uint)(longlong)(*(float *)(unaff_RDI + 0x290) * 256.0);
    fVar7 = *(float *)(unaff_RDI + 0x284) * 256.0;
    uVar6 = 0xff;
    if (uVar1 < 0xff) {
      uVar6 = uVar1;
    }
    uVar3 = (uint)(longlong)fVar7;
    uVar1 = 0xff;
    if (uVar3 < 0xff) {
      uVar1 = uVar3;
    }
    uVar4 = (uint)(longlong)fVar8;
    uVar3 = 0xff;
    if (uVar4 < 0xff) {
      uVar3 = uVar4;
    }
    uVar5 = (uint)(longlong)(*(float *)(unaff_RDI + 0x28c) * 256.0);
    uVar4 = 0xff;
    if (uVar5 < 0xff) {
      uVar4 = uVar5;
    }
    FUN_18062f640(fVar7,fVar8,&unknown_var_8684_ptr,((uVar6 << 8 | uVar1) << 8 | uVar3) << 8 | uVar4);
  }
  if (((*(float *)(unaff_RDI + 0xa8) != 0.0) || (*(float *)(unaff_RDI + 0xac) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xb0) != 0.0)) {
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_180630240();
  }
  if ((*(longlong *)(unaff_RBX + 0x30) != unaff_R15) ||
     (*(longlong *)(unaff_RBX + 0x40) != unaff_R15)) {
    if (in_stack_000000b0 != 0) {
      FUN_180630c80();
    }
    if (*(longlong *)(unaff_R14 + 0x30) == unaff_R15) {
      *(longlong *)(unaff_RBX + 0x50) = unaff_R15;
      *(longlong *)(unaff_R14 + 0x30) = unaff_RBX;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_R14 + 0x38);
      *(longlong *)(*(longlong *)(unaff_R14 + 0x38) + 0x58) = unaff_RBX;
    }
    *(longlong *)(unaff_R14 + 0x38) = unaff_RBX;
    *(longlong *)(unaff_RBX + 0x20) = unaff_R14;
    *(longlong *)(unaff_RBX + 0x58) = unaff_R15;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f7ae0(longlong param_1,longlong param_2)
void FUN_1802f7ae0(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  int32_t *puVar3;
  longlong *plVar4;
  uint64_t uVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plStackX_8;
  void *puStack_118;
  longlong lStack_110;
  int32_t uStack_108;
  ulonglong uStack_100;
  void *puStack_f8;
  longlong lStack_f0;
  int32_t uStack_e8;
  ulonglong uStack_e0;
  void *puStack_d8;
  longlong lStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  uint64_t uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puStack_d8 = &unknown_var_3456_ptr;
  uStack_c0 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  uVar1 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar1 != 0) {
    FUN_180628f30(&puStack_d8,puVar7,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
    puVar7 = *(uint **)(param_2 + 8);
  }
  *(uint *)(param_1 + 0x17c) = *puVar7;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 4;
  lVar8 = *(longlong *)(param_2 + 8);
  lVar9 = 4;
  do {
    lVar8 = lVar8 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(longlong *)(param_2 + 8) = lVar8;
  uVar5 = FUN_18062b1e0(_DAT_180c8ed18,0x298,8,3);
  plVar6 = (longlong *)FUN_1802f5f70(uVar5);
  puStack_f8 = &unknown_var_3456_ptr;
  uStack_e0 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  uVar1 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar1 != 0) {
    FUN_180628f30(&puStack_f8,puVar7,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  }
  puStack_118 = &unknown_var_3456_ptr;
  uStack_100 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  uVar1 = **(uint **)(param_2 + 8);
  puVar7 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar7;
  if (uVar1 != 0) {
    FUN_180628f30(&puStack_118,puVar7,uVar1);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar1;
  }
  pcVar2 = *(code **)(*plVar6 + 0x118);
  uVar5 = FUN_1800b30d0(_DAT_180c86930,&plStackX_8,&puStack_118,1);
  (*pcVar2)(plVar6,uVar5);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  puVar3 = *(int32_t **)(param_2 + 8);
  uStack_b8 = *puVar3;
  uStack_b4 = puVar3[1];
  uStack_b0 = puVar3[2];
  uStack_ac = puVar3[3];
  *(int32_t **)(param_2 + 8) = puVar3 + 4;
  (**(code **)(*plVar6 + 0x108))(plVar6,&uStack_b8);
  puVar3 = *(int32_t **)(param_2 + 8);
  uStack_a8 = *puVar3;
  uStack_a4 = puVar3[1];
  uStack_a0 = puVar3[2];
  uStack_9c = puVar3[3];
  *(int32_t **)(param_2 + 8) = puVar3 + 4;
  (**(code **)(*plVar6 + 0x108))(plVar6,&uStack_a8);
  puVar3 = *(int32_t **)(param_2 + 8);
  uStack_98 = *puVar3;
  uStack_94 = puVar3[1];
  uStack_90 = puVar3[2];
  uStack_8c = puVar3[3];
  *(int32_t **)(param_2 + 8) = puVar3 + 4;
  (**(code **)(*plVar6 + 400))(plVar6,&uStack_98);
  plVar4 = *(longlong **)(param_2 + 8);
  lVar8 = *plVar4;
  lVar9 = plVar4[1];
  *(longlong **)(param_2 + 8) = plVar4 + 2;
  plVar6[0xc] = lVar8;
  plVar6[0xd] = lVar9;
  puStack_118 = &unknown_var_3456_ptr;
  if (lStack_110 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_110 = 0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &unknown_var_720_ptr;
  puStack_f8 = &unknown_var_3456_ptr;
  if (lStack_f0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_f0 = 0;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  puStack_f8 = &unknown_var_720_ptr;
  puStack_d8 = &unknown_var_3456_ptr;
  if (lStack_d0 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}






// 函数: void FUN_1802f7e30(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802f7e30(longlong *param_1,longlong *param_2,uint64_t param_3,uint64_t param_4)

{
  ulonglong uVar1;
  int32_t uVar2;
  longlong lVar3;
  int iVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  uint *puVar7;
  void *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int8_t *puVar15;
  void *puStack_80;
  int8_t *puStack_78;
  uint uStack_70;
  uint64_t uStack_68;
  void *puStack_60;
  longlong lStack_58;
  int32_t uStack_48;
  
  uVar5 = (**(code **)(*param_1 + 0x90))(param_1,&puStack_60,param_3,param_4,0xfffffffffffffffe);
  FUN_180639ec0(param_2,uVar5);
  puStack_60 = &unknown_var_3456_ptr;
  if (lStack_58 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_58 = 0;
  uStack_48 = 0;
  puStack_60 = &unknown_var_720_ptr;
  FUN_180639ec0(param_2,param_1 + 0x27);
  uVar2 = *(int32_t *)((longlong)param_1 + 0x17c);
  puVar6 = (int32_t *)param_2[1];
  if ((ulonglong)((*param_2 - (longlong)puVar6) + param_2[2]) < 5) {
    FUN_180639bf0(param_2,(longlong)puVar6 + (4 - *param_2));
    puVar6 = (int32_t *)param_2[1];
  }
  *puVar6 = uVar2;
  puVar6 = (int32_t *)(param_2[1] + 4);
  param_2[1] = (longlong)puVar6;
  if ((void *)*param_1 == &unknown_var_1008_ptr) {
    plVar11 = param_1 + 0x30;
  }
  else {
    plVar11 = (longlong *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    puVar6 = (int32_t *)param_2[1];
  }
  lVar14 = 4;
  do {
    lVar9 = 4;
    do {
      lVar3 = *plVar11;
      if ((ulonglong)((*param_2 - (longlong)puVar6) + param_2[2]) < 5) {
        FUN_180639bf0(param_2,(longlong)puVar6 + (4 - *param_2));
        puVar6 = (int32_t *)param_2[1];
      }
      *puVar6 = (int)lVar3;
      puVar6 = (int32_t *)(param_2[1] + 4);
      param_2[1] = (longlong)puVar6;
      plVar11 = (longlong *)((longlong)plVar11 + 4);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  lVar14 = param_1[0x2b];
  puStack_80 = &unknown_var_3456_ptr;
  uStack_68 = 0;
  puStack_78 = (int8_t *)0x0;
  uStack_70 = 0;
  FUN_1806277c0(&puStack_80,*(int32_t *)(lVar14 + 0x20));
  if (*(int *)(lVar14 + 0x20) < 1) {
    if ((*(longlong *)(lVar14 + 0x18) != 0) && (uStack_70 = 0, puStack_78 != (int8_t *)0x0)) {
      *puStack_78 = 0;
    }
    while ((0 < (int)uStack_70 && (lVar14 = strstr(puStack_78,&system_data_ff10), lVar14 != 0))) {
      iVar13 = 6;
      iVar4 = (int)lVar14 - (int)puStack_78;
      if (uStack_70 < iVar4 + 6U) {
        iVar13 = uStack_70 - iVar4;
      }
      uVar12 = iVar4 + iVar13;
      if (uVar12 < uStack_70) {
        lVar14 = (longlong)(int)uVar12;
        do {
          puStack_78[lVar14 - iVar13] = puStack_78[lVar14];
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 1;
        } while (uVar12 < uStack_70);
      }
      uStack_70 = uStack_70 - iVar13;
      puStack_78[uStack_70] = 0;
    }
    uVar12 = uStack_70;
    uVar10 = (ulonglong)uStack_70;
    uVar1 = uVar10 + 4;
    puVar7 = (uint *)param_2[1];
    if ((ulonglong)((*param_2 - (longlong)puVar7) + param_2[2]) <= uVar1) {
      FUN_180639bf0(param_2,(longlong)puVar7 + (uVar1 - *param_2));
      puVar7 = (uint *)param_2[1];
    }
    *puVar7 = uVar12;
    lVar14 = param_2[1];
    param_2[1] = lVar14 + 4;
    puVar15 = &system_buffer_ptr;
    if (puStack_78 != (int8_t *)0x0) {
      puVar15 = puStack_78;
    }
                    // WARNING: Subroutine does not return
    memcpy(lVar14 + 4,puVar15,uVar10);
  }
  puVar8 = &system_buffer_ptr;
  if (*(void **)(lVar14 + 0x18) != (void *)0x0) {
    puVar8 = *(void **)(lVar14 + 0x18);
  }
                    // WARNING: Subroutine does not return
  memcpy(puStack_78,puVar8,(longlong)(*(int *)(lVar14 + 0x20) + 1));
}






// 函数: void FUN_1802f8160(longlong param_1,uint64_t *param_2)
void FUN_1802f8160(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  char cVar16;
  int8_t uVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  pfVar18 = (float *)(param_1 + 0x180);
  cVar16 = func_0x000180285980();
  if (cVar16 != '\0') {
    uVar12 = param_2[1];
    *(uint64_t *)pfVar18 = *param_2;
    *(uint64_t *)(pfVar18 + 2) = uVar12;
    uVar12 = param_2[3];
    *(uint64_t *)(pfVar18 + 4) = param_2[2];
    *(uint64_t *)(pfVar18 + 6) = uVar12;
    fVar19 = *(float *)((longlong)param_2 + 0x24);
    fVar24 = *(float *)(param_2 + 5);
    fVar22 = *(float *)((longlong)param_2 + 0x2c);
    pfVar18[8] = *(float *)(param_2 + 4);
    pfVar18[9] = fVar19;
    pfVar18[10] = fVar24;
    pfVar18[0xb] = fVar22;
    fVar19 = *(float *)((longlong)param_2 + 0x34);
    fVar24 = *(float *)(param_2 + 7);
    fVar22 = *(float *)((longlong)param_2 + 0x3c);
    pfVar18[0xc] = *(float *)(param_2 + 6);
    pfVar18[0xd] = fVar19;
    pfVar18[0xe] = fVar24;
    pfVar18[0xf] = fVar22;
    uVar17 = func_0x00018023a100();
    *(int8_t *)(param_1 + 0x160) = uVar17;
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 == 0) {
      uVar12 = *(uint64_t *)(pfVar18 + 2);
      uVar13 = *(uint64_t *)(pfVar18 + 4);
      uVar14 = *(uint64_t *)(pfVar18 + 6);
      *(uint64_t *)(param_1 + 0x204) = *(uint64_t *)pfVar18;
      *(uint64_t *)(param_1 + 0x20c) = uVar12;
      uVar12 = *(uint64_t *)(pfVar18 + 8);
      uVar15 = *(uint64_t *)(pfVar18 + 10);
      *(uint64_t *)(param_1 + 0x214) = uVar13;
      *(uint64_t *)(param_1 + 0x21c) = uVar14;
      uVar13 = *(uint64_t *)(pfVar18 + 0xc);
      uVar14 = *(uint64_t *)(pfVar18 + 0xe);
      *(uint64_t *)(param_1 + 0x224) = uVar12;
      *(uint64_t *)(param_1 + 0x22c) = uVar15;
      *(uint64_t *)(param_1 + 0x234) = uVar13;
      *(uint64_t *)(param_1 + 0x23c) = uVar14;
    }
    else {
      fVar31 = *(float *)(lVar1 + 0x80);
      fVar32 = *(float *)(lVar1 + 0x84);
      fVar33 = *(float *)(lVar1 + 0x88);
      fVar34 = *(float *)(lVar1 + 0x8c);
      fVar19 = *pfVar18;
      fVar24 = pfVar18[2];
      fVar22 = pfVar18[5];
      fVar23 = pfVar18[9];
      fVar20 = pfVar18[0xd];
      fVar35 = *(float *)(lVar1 + 0x70);
      fVar36 = *(float *)(lVar1 + 0x74);
      fVar2 = *(float *)(lVar1 + 0x78);
      fVar3 = *(float *)(lVar1 + 0x7c);
      fVar4 = *(float *)(lVar1 + 0x90);
      fVar5 = *(float *)(lVar1 + 0x94);
      fVar6 = *(float *)(lVar1 + 0x98);
      fVar7 = *(float *)(lVar1 + 0x9c);
      fVar21 = pfVar18[1];
      fVar28 = pfVar18[4];
      fVar30 = pfVar18[6];
      fVar25 = pfVar18[8];
      fVar26 = pfVar18[10];
      fVar27 = pfVar18[0xc];
      fVar29 = pfVar18[0xe];
      fVar8 = *(float *)(lVar1 + 0xa0);
      fVar9 = *(float *)(lVar1 + 0xa4);
      fVar10 = *(float *)(lVar1 + 0xa8);
      fVar11 = *(float *)(lVar1 + 0xac);
      *(float *)(param_1 + 0x204) = fVar21 * fVar31 + fVar19 * fVar35 + fVar24 * fVar4;
      *(float *)(param_1 + 0x208) = fVar21 * fVar32 + fVar19 * fVar36 + fVar24 * fVar5;
      *(float *)(param_1 + 0x20c) = fVar21 * fVar33 + fVar19 * fVar2 + fVar24 * fVar6;
      *(float *)(param_1 + 0x210) = fVar21 * fVar34 + fVar19 * fVar3 + fVar24 * fVar7;
      *(float *)(param_1 + 0x214) = fVar22 * fVar31 + fVar28 * fVar35 + fVar30 * fVar4;
      *(float *)(param_1 + 0x218) = fVar22 * fVar32 + fVar28 * fVar36 + fVar30 * fVar5;
      *(float *)(param_1 + 0x21c) = fVar22 * fVar33 + fVar28 * fVar2 + fVar30 * fVar6;
      *(float *)(param_1 + 0x220) = fVar22 * fVar34 + fVar28 * fVar3 + fVar30 * fVar7;
      *(float *)(param_1 + 0x224) = fVar23 * fVar31 + fVar25 * fVar35 + fVar26 * fVar4;
      *(float *)(param_1 + 0x228) = fVar23 * fVar32 + fVar25 * fVar36 + fVar26 * fVar5;
      *(float *)(param_1 + 0x22c) = fVar23 * fVar33 + fVar25 * fVar2 + fVar26 * fVar6;
      *(float *)(param_1 + 0x230) = fVar23 * fVar34 + fVar25 * fVar3 + fVar26 * fVar7;
      *(float *)(param_1 + 0x234) = fVar20 * fVar31 + fVar27 * fVar35 + fVar29 * fVar4 + fVar8;
      *(float *)(param_1 + 0x238) = fVar20 * fVar32 + fVar27 * fVar36 + fVar29 * fVar5 + fVar9;
      *(float *)(param_1 + 0x23c) = fVar20 * fVar33 + fVar27 * fVar2 + fVar29 * fVar6 + fVar10;
      *(float *)(param_1 + 0x240) = fVar20 * fVar34 + fVar27 * fVar3 + fVar29 * fVar7 + fVar11;
    }
    pfVar18 = (float *)(param_1 + 0x204);
    *(int32_t *)(param_1 + 0x240) = 0x3f800000;
    *(int32_t *)(param_1 + 0x210) = 0;
    *(int32_t *)(param_1 + 0x220) = 0;
    *(int32_t *)(param_1 + 0x230) = 0;
    fVar19 = *(float *)(param_1 + 0x21c);
    fVar24 = *(float *)(param_1 + 0x238);
    fVar22 = *(float *)(param_1 + 0x228);
    fVar23 = *(float *)(param_1 + 0x208);
    fVar20 = *(float *)(param_1 + 0x23c);
    fVar21 = *(float *)(param_1 + 0x20c);
    fVar28 = *(float *)(param_1 + 0x22c);
    fVar30 = *(float *)(param_1 + 0x218);
    fVar29 = fVar20 * fVar22 - fVar24 * fVar28;
    fVar26 = fVar20 * fVar30 - fVar24 * fVar19;
    fVar27 = fVar20 * fVar23 - fVar24 * fVar21;
    fVar34 = fVar30 * fVar28 - fVar22 * fVar19;
    fVar25 = fVar23 * fVar28 - fVar22 * fVar21;
    *(float *)(param_1 + 0x244) = fVar34;
    fVar24 = fVar23 * fVar19 - fVar30 * fVar21;
    fVar35 = fVar21 * *(float *)(param_1 + 0x228) - fVar28 * *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x248) = fVar35;
    *(int32_t *)(param_1 + 0x250) = 0;
    fVar36 = fVar19 * *(float *)(param_1 + 0x208) - fVar21 * *(float *)(param_1 + 0x218);
    *(float *)(param_1 + 0x24c) = fVar36;
    fVar20 = fVar19 * *(float *)(param_1 + 0x224) - fVar28 * *(float *)(param_1 + 0x214);
    *(float *)(param_1 + 0x254) = fVar20;
    fVar32 = fVar28 * *pfVar18 - fVar21 * *(float *)(param_1 + 0x224);
    *(float *)(param_1 + 600) = fVar32;
    *(int32_t *)(param_1 + 0x260) = 0;
    fVar31 = fVar21 * *(float *)(param_1 + 0x214) - fVar19 * *pfVar18;
    *(float *)(param_1 + 0x25c) = fVar31;
    fVar21 = fVar22 * *(float *)(param_1 + 0x214) - fVar30 * *(float *)(param_1 + 0x224);
    *(float *)(param_1 + 0x264) = fVar21;
    fVar19 = fVar23 * *(float *)(param_1 + 0x224) - fVar22 * *pfVar18;
    *(float *)(param_1 + 0x268) = fVar19;
    *(int32_t *)(param_1 + 0x270) = 0;
    fVar33 = fVar30 * *pfVar18 - fVar23 * *(float *)(param_1 + 0x214);
    *(float *)(param_1 + 0x26c) = fVar33;
    fVar22 = (fVar26 * *(float *)(param_1 + 0x224) - fVar29 * *(float *)(param_1 + 0x214)) -
             fVar34 * *(float *)(param_1 + 0x234);
    *(float *)(param_1 + 0x274) = fVar22;
    fVar30 = (fVar29 * *pfVar18 - fVar27 * *(float *)(param_1 + 0x224)) +
             fVar25 * *(float *)(param_1 + 0x234);
    *(float *)(param_1 + 0x278) = fVar30;
    fVar28 = (fVar27 * *(float *)(param_1 + 0x214) - fVar26 * *pfVar18) -
             fVar24 * *(float *)(param_1 + 0x234);
    *(float *)(param_1 + 0x27c) = fVar28;
    fVar23 = (fVar34 * *pfVar18 - fVar25 * *(float *)(param_1 + 0x214)) +
             fVar24 * *(float *)(param_1 + 0x224);
    *(float *)(param_1 + 0x280) = fVar23;
    fVar24 = fVar35 * *(float *)(param_1 + 0x214) + fVar34 * *pfVar18 +
             fVar36 * *(float *)(param_1 + 0x224);
    if (fVar24 != 1.0) {
      fVar24 = 1.0 / fVar24;
      *(float *)(param_1 + 0x254) = fVar20 * fVar24;
      *(float *)(param_1 + 0x264) = fVar21 * fVar24;
      *(float *)(param_1 + 0x244) = fVar34 * fVar24;
      *(float *)(param_1 + 0x248) = fVar35 * fVar24;
      *(float *)(param_1 + 0x24c) = fVar36 * fVar24;
      *(float *)(param_1 + 600) = fVar32 * fVar24;
      *(float *)(param_1 + 0x25c) = fVar31 * fVar24;
      *(float *)(param_1 + 0x268) = fVar19 * fVar24;
      *(float *)(param_1 + 0x26c) = fVar33 * fVar24;
      *(float *)(param_1 + 0x274) = fVar22 * fVar24;
      *(float *)(param_1 + 0x278) = fVar30 * fVar24;
      *(float *)(param_1 + 0x27c) = fVar28 * fVar24;
      *(float *)(param_1 + 0x280) = fVar23 * fVar24;
    }
    return;
  }
  return;
}






