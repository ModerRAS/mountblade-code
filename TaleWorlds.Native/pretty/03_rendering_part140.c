#include "TaleWorlds.Native.Split.h"

// 03_rendering_part140.c - 15 个函数

// 函数: void FUN_18034f6f2(void)
void FUN_18034f6f2(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar1;
  int8_t auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM14_Da;
  float unaff_XMM14_Db;
  float unaff_XMM14_Dc;
  float unaff_XMM15_Da;
  float unaff_XMM15_Db;
  float unaff_XMM15_Dc;
  int32_t unaff_XMM15_Dd;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  float in_stack_00000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  int32_t uStack000000000000004c;
  float in_stack_00000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  int32_t uStack000000000000005c;
  float in_stack_00000060;
  float in_stack_00000068;
  int32_t uStack000000000000007c;
  
  FUN_180085020(&stack0x00000030,unaff_RBP + -0x80);
  fVar7 = unaff_XMM14_Da - *(float *)(unaff_RDI + 0x1b8);
  fVar6 = unaff_XMM14_Db - *(float *)(unaff_RDI + 0x1bc);
  fVar5 = unaff_XMM14_Dc - *(float *)(unaff_RDI + 0x1c0);
  fVar1 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
  auVar2 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar4 = auVar2._0_4_;
  fVar3 = fVar4 * 0.5 * (3.0 - fVar1 * fVar4 * fVar4);
  fVar1 = unaff_XMM15_Db * unaff_XMM15_Db + unaff_XMM15_Da * unaff_XMM15_Da +
          unaff_XMM15_Dc * unaff_XMM15_Dc;
  auVar2 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar4 = auVar2._0_4_;
  fStack0000000000000054 = fVar4 * 0.5 * (3.0 - fVar1 * fVar4 * fVar4);
  in_stack_00000058 = unaff_XMM15_Dc * fStack0000000000000054;
  in_stack_00000050 = unaff_XMM15_Da * fStack0000000000000054;
  fStack0000000000000054 = unaff_XMM15_Db * fStack0000000000000054;
  fVar9 = fStack0000000000000054 * fVar5 * fVar3 - in_stack_00000058 * fVar6 * fVar3;
  fVar8 = in_stack_00000058 * fVar7 * fVar3 - in_stack_00000050 * fVar5 * fVar3;
  uStack000000000000007c = 0x7f7fffff;
  fVar7 = in_stack_00000050 * fVar6 * fVar3 - fStack0000000000000054 * fVar7 * fVar3;
  fVar1 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
  auVar2 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar4 = auVar2._0_4_;
  fVar1 = fVar4 * 0.5 * (3.0 - fVar1 * fVar4 * fVar4);
  fVar8 = fVar8 * fVar1;
  fVar7 = fVar7 * fVar1;
  fVar9 = fVar9 * fVar1;
  fVar6 = in_stack_00000058 * fVar8 - fStack0000000000000054 * fVar7;
  fVar5 = fVar7 * in_stack_00000050 - in_stack_00000058 * fVar9;
  fVar3 = fStack0000000000000054 * fVar9 - fVar8 * in_stack_00000050;
  fVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
  auVar2 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar4 = auVar2._0_4_;
  fVar4 = fVar4 * 0.5 * (3.0 - fVar1 * fVar4 * fVar4);
  uStack000000000000004c = 0x7f7fffff;
  fVar1 = *(float *)(unaff_RBP + -0x80);
  fStack0000000000000044 = *(float *)(unaff_RBP + -0x7c);
  in_stack_00000040 = fStack0000000000000044 * fVar6 * fVar4;
  in_stack_00000030 = CONCAT44(fVar1 * fVar8,fVar1 * fVar9);
  in_stack_00000048 = fVar3 * fVar4 * fStack0000000000000044;
  fStack0000000000000044 = fVar5 * fVar4 * fStack0000000000000044;
  in_stack_00000038 = CONCAT44(0x7f7fffff,fVar1 * fVar7);
  fVar1 = *(float *)(unaff_RBP + -0x78);
  in_stack_00000050 = fVar1 * in_stack_00000050;
  fStack0000000000000054 = fStack0000000000000054 * fVar1;
  in_stack_00000058 = in_stack_00000058 * fVar1;
  uStack000000000000005c = unaff_XMM15_Dd;
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    in_stack_00000030 = *(uint64_t *)(unaff_RBP + -0x70);
    in_stack_00000038 = *(uint64_t *)(unaff_RBP + -0x68);
    in_stack_00000040 = *(float *)(unaff_RBP + -0x60);
    fStack0000000000000044 = *(float *)(unaff_RBP + -0x5c);
    in_stack_00000048 = *(float *)(unaff_RBP + -0x58);
    uStack000000000000004c = *(int32_t *)(unaff_RBP + -0x54);
    in_stack_00000050 = *(float *)(unaff_RBP + -0x50);
    fStack0000000000000054 = *(float *)(unaff_RBP + -0x4c);
    in_stack_00000058 = *(float *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
    in_stack_00000060 = unaff_XMM14_Da;
    in_stack_00000068 = unaff_XMM14_Dc;
  }
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034fabd(void)
void FUN_18034fabd(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int32_t unaff_XMM14_Da;
  int32_t unaff_XMM14_Dc;
  uint64_t in_stack_00000030;
  uint64_t in_stack_00000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  
  if (*(char *)(unaff_RBX + 0x99) != '\0') {
    in_stack_00000030 = *(uint64_t *)(unaff_RBP + -0x70);
    in_stack_00000038 = *(uint64_t *)(unaff_RBP + -0x68);
    uStack0000000000000040 = *(int32_t *)(unaff_RBP + -0x60);
    uStack0000000000000044 = *(int32_t *)(unaff_RBP + -0x5c);
    uStack0000000000000048 = *(int32_t *)(unaff_RBP + -0x58);
    uStack000000000000004c = *(int32_t *)(unaff_RBP + -0x54);
    uStack0000000000000050 = *(int32_t *)(unaff_RBP + -0x50);
    uStack0000000000000054 = *(int32_t *)(unaff_RBP + -0x4c);
    uStack0000000000000058 = *(int32_t *)(unaff_RBP + -0x48);
    uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
    in_stack_00000060 = unaff_XMM14_Da;
    in_stack_00000068 = unaff_XMM14_Dc;
  }
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034facf(void)
void FUN_18034facf(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t uStack0000000000000030;
  uint64_t uStack0000000000000038;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  int32_t uStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  
  uStack0000000000000030 = *(uint64_t *)(unaff_RBP + -0x70);
  uStack0000000000000038 = *(uint64_t *)(unaff_RBP + -0x68);
  uStack0000000000000040 = *(int32_t *)(unaff_RBP + -0x60);
  uStack0000000000000044 = *(int32_t *)(unaff_RBP + -0x5c);
  uStack0000000000000048 = *(int32_t *)(unaff_RBP + -0x58);
  uStack000000000000004c = *(int32_t *)(unaff_RBP + -0x54);
  uStack0000000000000050 = *(int32_t *)(unaff_RBP + -0x50);
  uStack0000000000000054 = *(int32_t *)(unaff_RBP + -0x4c);
  uStack0000000000000058 = *(int32_t *)(unaff_RBP + -0x48);
  uStack000000000000005c = *(int32_t *)(unaff_RBP + -0x44);
  FUN_1802ea790(*(uint64_t *)(unaff_RBX + 0x18),&stack0x00000030);
  return;
}





// 函数: void FUN_18034fb07(void)
void FUN_18034fb07(void)

{
  return;
}



uint64_t *
FUN_18034fb20(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1e060;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034fb70(longlong param_1)
void FUN_18034fb70(longlong param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  void *puStack_48;
  uint64_t *puStack_40;
  int32_t uStack_38;
  uint64_t uStack_30;
  
  FUN_1802e9fa0(*(uint64_t *)(param_1 + 0x18),0,0,0);
  uVar1 = _DAT_180c86930;
  puStack_48 = &UNK_180a3c3e0;
  uStack_30 = 0;
  puStack_40 = (uint64_t *)0x0;
  uStack_38 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  puStack_40 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar2);
  *puVar3 = 0x6c616d5f64616568;
  *(int32_t *)(puVar3 + 1) = 0x785f65;
  uStack_38 = 0xb;
  FUN_1800b6de0(uVar1,&puStack_48,1);
  puStack_48 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034fd50(longlong param_1)
void FUN_18034fd50(longlong param_1)

{
  int8_t uVar1;
  
  if ((*(char *)(param_1 + 0x70) == '\0') ||
     (*(int *)(_DAT_180c86920 + 0x770) != *(int *)(param_1 + 0x74))) {
    *(int32_t *)(param_1 + 0x74) = *(int32_t *)(_DAT_180c86920 + 0x770);
    uVar1 = FUN_18034fb70(param_1);
    *(int8_t *)(param_1 + 0x70) = uVar1;
  }
  return;
}



uint64_t *
FUN_18034fd90(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1e220;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa8,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18034fde0(uint64_t *param_1)
void FUN_18034fde0(uint64_t *param_1)

{
  int32_t uVar1;
  uint64_t *puVar2;
  void *puStack_b8;
  uint64_t *puStack_b0;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a1e220;
  *(int32_t *)(param_1 + 0x14) = 0x3f800000;
  param_1[0xe] = 0x4044000000000000;
  param_1[0xf] = 0x4010000000000000;
  *(int32_t *)(param_1 + 0x12) = 0;
  *(int32_t *)((longlong)param_1 + 0x94) = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  *(int32_t *)((longlong)param_1 + 0x9c) = 0;
  *(int32_t *)(param_1 + 0x14) = 0x3f800000;
  param_1[0x10] = 0x4024000000000000;
  param_1[0x11] = 0x3fd0000000000000;
  puStack_b8 = &UNK_180a3c3e0;
  uStack_a0 = 0;
  puStack_b0 = (uint64_t *)0x0;
  uStack_a8 = 0;
  puVar2 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(int8_t *)puVar2 = 0;
  puStack_b0 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
  *puVar2 = 0x6f6d412065766f4d;
  *(int32_t *)(puVar2 + 1) = 0x746e75;
  uStack_a8 = 0xb;
  FUN_1803460a0(param_1,&puStack_b8,param_1 + 0xe,1);
  puStack_b8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}





// 函数: void FUN_180350120(longlong param_1,float param_2)
void FUN_180350120(longlong param_1,float param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  uint64_t uStack_48;
  uint64_t uStack_40;
  int32_t uStack_38;
  float fStack_34;
  float fStack_30;
  int32_t uStack_2c;
  
  uStack_38 = *(int32_t *)(param_1 + 0x94);
  fVar2 = (float)*(double *)(param_1 + 0x78) + 0.001;
  uStack_58 = 0;
  uStack_54 = 0x3f800000;
  uStack_50 = 0;
  uStack_4c = 0;
  fVar3 = 1.0 / fVar2;
  uStack_68 = 0x3f800000;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_40 = 0x3f800000;
  fStack_30 = *(float *)(param_1 + 0x9c);
  fVar3 = (*(float *)(param_1 + 0x90) - (float)(int)(*(float *)(param_1 + 0x90) * fVar3) * fVar2) *
          fVar3;
  fStack_34 = (float)*(double *)(param_1 + 0x70) * fVar3 + *(float *)(param_1 + 0x98);
  uStack_2c = 0x7f7fffff;
  dVar1 = (double)sin(SUB84((double)fVar3 * *(double *)(param_1 + 0x80),0));
  fStack_30 = (float)(dVar1 * *(double *)(param_1 + 0x88));
  FUN_1802ea790(*(uint64_t *)(param_1 + 0x18),&uStack_68);
  *(float *)(param_1 + 0x90) = param_2 + *(float *)(param_1 + 0x90);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180350270(uint64_t param_1)
void FUN_180350270(uint64_t param_1)

{
  int8_t auStack_248 [32];
  int32_t uStack_228;
  void **appuStack_220 [2];
  uint64_t uStack_210;
  void *apuStack_208 [11];
  int32_t uStack_1b0;
  void *puStack_1a8;
  int8_t *puStack_1a0;
  int32_t uStack_198;
  int8_t auStack_190 [72];
  void *puStack_148;
  int8_t *puStack_140;
  int32_t uStack_138;
  int8_t auStack_130 [72];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [72];
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_210 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_248;
  uStack_228 = 0;
  puStack_1a8 = &UNK_1809fcc58;
  puStack_1a0 = auStack_190;
  auStack_190[0] = 0;
  uStack_198 = 0xb;
  strcpy_s(auStack_190,0x40,&DAT_180a1e1c8);
  FUN_1800b8300(apuStack_208,&puStack_1a8);
  uStack_1b0 = 1;
  uStack_228 = 1;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &UNK_18098bcb0;
  puStack_1a8 = &UNK_18098bcb0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xd;
  strcpy_s(auStack_130,0x40,&DAT_180a1e208);
  FUN_1800b8300(apuStack_208,&puStack_148);
  uStack_1b0 = 1;
  uStack_228 = 2;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 0x12;
  strcpy_s(auStack_d0,0x40,&DAT_180a1e1f0);
  FUN_1800b8300(apuStack_208,&puStack_e8);
  uStack_1b0 = 1;
  uStack_228 = 4;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0x15;
  strcpy_s(auStack_70,0x40,&DAT_180a1e1d8);
  FUN_1800b8300(apuStack_208,&puStack_88);
  uStack_1b0 = 1;
  uStack_228 = 8;
  FUN_180180730(param_1,appuStack_220,apuStack_208);
  uStack_228 = 0;
  appuStack_220[0] = apuStack_208;
  apuStack_208[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_248);
}



uint64_t * FUN_180350540(uint64_t *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 3;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int32_t *)(param_1 + 0x1a) = 3;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  *(int8_t *)(param_1 + 2) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180350610(void)
void FUN_180350610(void)

{
  uint64_t uVar1;
  
  if (_DAT_180c8ecb8 == 0) {
    uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0xd8,8,3);
    _DAT_180c8ecb8 = FUN_180350540(uVar1);
  }
  return;
}





// 函数: void FUN_180350650(longlong param_1,longlong param_2)
void FUN_180350650(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 6;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(longlong)plVar2 - (longlong)plVar1);
      }
      *(longlong **)(param_1 + 0x20) = plVar2 + -6;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(longlong)plVar2 - (longlong)plVar1);
      }
      *(longlong **)(param_1 + 0x40) = plVar2 + -3;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 6;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 6;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(longlong)plVar2 - (longlong)plVar1);
      }
      *(longlong **)(param_1 + 0x60) = plVar2 + -6;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x80);
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(longlong)plVar2 - (longlong)plVar1);
      }
      *(longlong **)(param_1 + 0x80) = plVar2 + -3;
    }
  }
  plVar2 = *(longlong **)(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != plVar2) {
    do {
      if (*plVar3 == param_2) break;
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar2);
    if (plVar3 != plVar2) {
      plVar1 = plVar3 + 3;
      if (plVar1 < plVar2) {
                    // WARNING: Subroutine does not return
        memmove(plVar3,plVar1,(longlong)plVar2 - (longlong)plVar1);
      }
      *(longlong **)(param_1 + 0xa0) = plVar2 + -3;
    }
  }
  return;
}



uint64_t * FUN_1803507f0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a1e428;
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x38))();
  }
  param_1[0xe] = &UNK_180a3c3e0;
  if (param_1[0xf] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x11) = 0;
  param_1[0xe] = &UNK_18098bcb0;
  FUN_1803457d0(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x98);
  }
  return param_1;
}



uint64_t *
FUN_1803508a0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a1e5a0;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1803508f0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803508f0(uint64_t param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  void *puStack_60;
  uint64_t *puStack_58;
  int32_t uStack_50;
  uint64_t uStack_48;
  void *puStack_40;
  uint64_t *puStack_38;
  int32_t uStack_30;
  uint64_t uStack_28;
  
  if ((*(int *)(param_2 + 0x10) == 8) &&
     (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&DAT_180a1e3a0,(char)param_3,param_4,
                     0xfffffffffffffffe), iVar1 == 0)) {
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x74736143796152;
    uStack_50 = 7;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x6867696548746547;
    *(int32_t *)(puVar3 + 1) = 0x744174;
    uStack_30 = 0xb;
    uStack_28._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    puStack_40 = &UNK_18098bcb0;
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x43656c7573706143;
    *(int32_t *)(puVar3 + 1) = 0x747361;
    uStack_50 = 0xb;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar4 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x11,0x13);
    *(int8_t *)puVar4 = 0;
    puStack_38 = (uint64_t *)puVar4;
    uVar2 = FUN_18064e990(puVar4);
    *puVar4 = 0x73706143;
    puVar4[1] = 0x43656c75;
    puVar4[2] = 0x696c6c6f;
    puVar4[3] = 0x6e6f6973;
    *(int8_t *)(puVar4 + 4) = 0;
    uStack_30 = 0x10;
    uStack_28._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_38 = (uint64_t *)0x0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    puStack_40 = &UNK_18098bcb0;
    puStack_60 = &UNK_180a3c3e0;
    uStack_48 = 0;
    puStack_58 = (uint64_t *)0x0;
    uStack_50 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_58 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    *puVar3 = 0x74696d69786f7250;
    *(int32_t *)(puVar3 + 1) = 0x73655479;
    *(int16_t *)((longlong)puVar3 + 0xc) = 0x74;
    uStack_50 = 0xd;
    uStack_48._0_4_ = uVar2;
    FUN_180066df0(param_3,&puStack_60);
    puStack_60 = &UNK_180a3c3e0;
    if (puStack_58 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_58 = (uint64_t *)0x0;
    uStack_48 = (ulonglong)uStack_48._4_4_ << 0x20;
    puStack_60 = &UNK_18098bcb0;
    puStack_40 = &UNK_180a3c3e0;
    uStack_28 = 0;
    puStack_38 = (uint64_t *)0x0;
    uStack_30 = 0;
    puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    puStack_38 = puVar3;
    uVar2 = FUN_18064e990(puVar3);
    uStack_28 = CONCAT44(uStack_28._4_4_,uVar2);
    *puVar3 = 0x546e696172726554;
    *(int32_t *)(puVar3 + 1) = 0x747365;
    uStack_30 = 0xb;
    FUN_180066df0(param_3,&puStack_40);
    puStack_40 = &UNK_180a3c3e0;
    if (puStack_38 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180350ca0(void)
void FUN_180350ca0(void)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  uint64_t in_R9;
  void *puStack_d8;
  uint64_t *puStack_d0;
  int32_t uStack_c8;
  uint64_t uStack_c0;
  
  uVar1 = _DAT_180c86930;
  puStack_d8 = &UNK_180a3c3e0;
  uStack_c0 = 0;
  puStack_d0 = (uint64_t *)0x0;
  uStack_c8 = 0;
  puVar3 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,in_R9,0,0xfffffffffffffffe);
  *(int8_t *)puVar3 = 0;
  puStack_d0 = puVar3;
  uVar2 = FUN_18064e990(puVar3);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar2);
  *puVar3 = 0x6f6c5f6775626564;
  *(int32_t *)(puVar3 + 1) = 0x656d5f64;
  *(int16_t *)((longlong)puVar3 + 0xc) = 0x6873;
  *(int8_t *)((longlong)puVar3 + 0xe) = 0;
  uStack_c8 = 0xe;
  FUN_1800b6de0(uVar1,&puStack_d8,1);
  puStack_d8 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180351010(uint64_t param_1)
void FUN_180351010(uint64_t param_1)

{
  int8_t auStack_118 [32];
  int32_t uStack_f8;
  uint64_t uStack_f0;
  void **appuStack_e8 [2];
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [72];
  void *apuStack_78 [11];
  int32_t uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 8;
  strcpy_s(auStack_c0,0x40,&DAT_180a1e3a0);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 9;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}





// 函数: void FUN_180351120(uint64_t param_1,longlong param_2)
void FUN_180351120(uint64_t param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)(param_2 + 0x10) != 8) ||
     (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&DAT_180a1e3a0), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x10) != 5) {
      return;
    }
    lVar2 = 0;
    do {
      lVar3 = lVar2 + 1;
      if (*(char *)(*(longlong *)(param_2 + 8) + lVar2) != (&UNK_180a01714)[lVar2]) {
        return;
      }
      lVar2 = lVar3;
    } while (lVar3 != 6);
  }
  FUN_180351190(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



