#include "TaleWorlds.Native.Split.h"

// 03_rendering_part149.c - 13 个函数

// 函数: void FUN_18035ddf2(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)
void FUN_18035ddf2(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  int in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong in_R11;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 unaff_XMM6_Da;
  float fVar4;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar5;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  
  *(undefined4 *)(in_R11 + -0x18) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x14) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x10) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0xc) = unaff_XMM6_Dd;
  *(undefined4 *)(in_R11 + -0x28) = unaff_XMM8_Da;
  *(undefined4 *)(in_R11 + -0x24) = unaff_XMM8_Db;
  *(undefined4 *)(in_R11 + -0x20) = unaff_XMM8_Dc;
  *(undefined4 *)(in_R11 + -0x1c) = unaff_XMM8_Dd;
  if (in_EAX == 0) {
    fVar3 = *(float *)(unaff_RBP + -0x59) - *(float *)(unaff_RBP + -0x69);
    fVar1 = *(float *)(unaff_RBP + -0x51) - *(float *)(unaff_RBP + -0x61);
    fVar2 = *(float *)(unaff_RBP + -0x55) - *(float *)(unaff_RBP + -0x65);
    param_4 = *(float *)(unaff_RBP + -0x49) * *(float *)(unaff_RBP + -0x49) +
              *(float *)(unaff_RBP + -0x45) * *(float *)(unaff_RBP + -0x45) +
              *(float *)(unaff_RBP + -0x41) * *(float *)(unaff_RBP + -0x41) <
              fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
    if (!(bool)param_4) goto LAB_18035dfab;
  }
  else {
    if (in_EAX != 1) {
      return;
    }
    *(undefined4 *)(unaff_RBP + 3) = 0;
    *(undefined4 *)(unaff_RBP + 0x13) = 0;
    *(undefined4 *)(unaff_RBP + 0x23) = 0;
    *(undefined4 *)(unaff_RBP + 0x33) = 0x3f800000;
    FUN_180084760(unaff_RBP + -9,unaff_RBP + -0x49);
    fVar1 = *(float *)(unaff_RBP + -0x69);
    fVar2 = *(float *)(unaff_RBP + -0x65);
    fVar3 = *(float *)(unaff_RBP + -0x61);
    fVar5 = *(float *)(unaff_RBP + -0x49) * fVar1 + *(float *)(unaff_RBP + -0x39) * fVar2 +
            *(float *)(unaff_RBP + -0x29) * fVar3 + *(float *)(unaff_RBP + -0x19);
    fVar4 = *(float *)(unaff_RBP + -0x45) * fVar1 + *(float *)(unaff_RBP + -0x35) * fVar2 +
            *(float *)(unaff_RBP + -0x25) * fVar3 + *(float *)(unaff_RBP + -0x15);
    fVar1 = *(float *)(unaff_RBP + -0x41) * fVar1 + *(float *)(unaff_RBP + -0x31) * fVar2 +
            *(float *)(unaff_RBP + -0x21) * fVar3 + *(float *)(unaff_RBP + -0x11);
    if ((((fVar5 < -1.0) || (1.0 < fVar5)) || (fVar4 < -1.0)) ||
       (((1.0 < fVar4 || (fVar1 < -1.0)) || (1.0 < fVar1)))) goto LAB_18035de70;
LAB_18035dfab:
    if (*(char *)(unaff_RBX + 0x70) == '\0') {
      (**(code **)(*param_3 + 0xa8))(param_3,unaff_RBP + -0x59);
      (**(code **)(**(longlong **)(unaff_RBX + 0xb8) + 0x60))();
      *(undefined1 *)(unaff_RBX + 0x70) = 1;
      return;
    }
  }
  if (param_4 == '\0') {
    return;
  }
LAB_18035de70:
  if (*(char *)(unaff_RBX + 0x70) != '\0') {
    (**(code **)(*param_3 + 0x68))(param_3);
    *(undefined1 *)(unaff_RBX + 0x70) = 0;
  }
  return;
}





// 函数: void FUN_18035de94(void)
void FUN_18035de94(void)

{
  return;
}





// 函数: void FUN_18035dea5(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)
void FUN_18035dea5(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (in_EAX != 1) {
    return;
  }
  *(undefined4 *)(unaff_RBP + 3) = 0;
  *(undefined4 *)(unaff_RBP + 0x13) = 0;
  *(undefined4 *)(unaff_RBP + 0x23) = 0;
  *(undefined4 *)(unaff_RBP + 0x33) = 0x3f800000;
  FUN_180084760(unaff_RBP + -9,unaff_RBP + -0x49);
  fVar3 = *(float *)(unaff_RBP + -0x69);
  fVar1 = *(float *)(unaff_RBP + -0x65);
  fVar2 = *(float *)(unaff_RBP + -0x61);
  fVar5 = *(float *)(unaff_RBP + -0x49) * fVar3 + *(float *)(unaff_RBP + -0x39) * fVar1 +
          *(float *)(unaff_RBP + -0x29) * fVar2 + *(float *)(unaff_RBP + -0x19);
  fVar4 = *(float *)(unaff_RBP + -0x45) * fVar3 + *(float *)(unaff_RBP + -0x35) * fVar1 +
          *(float *)(unaff_RBP + -0x25) * fVar2 + *(float *)(unaff_RBP + -0x15);
  fVar3 = *(float *)(unaff_RBP + -0x41) * fVar3 + *(float *)(unaff_RBP + -0x31) * fVar1 +
          *(float *)(unaff_RBP + -0x21) * fVar2 + *(float *)(unaff_RBP + -0x11);
  if ((((-1.0 <= fVar5) && (fVar5 <= 1.0)) && (-1.0 <= fVar4)) &&
     (((fVar4 <= 1.0 && (-1.0 <= fVar3)) && (fVar3 <= 1.0)))) {
    if (*(char *)(unaff_RBX + 0x70) == '\0') {
      (**(code **)(*param_3 + 0xa8))(param_3,unaff_RBP + -0x59);
      (**(code **)(**(longlong **)(unaff_RBX + 0xb8) + 0x60))();
      *(undefined1 *)(unaff_RBX + 0x70) = 1;
      return;
    }
    if (param_4 == '\0') {
      return;
    }
  }
  if (*(char *)(unaff_RBX + 0x70) != '\0') {
    (**(code **)(*param_3 + 0x68))(param_3);
    *(undefined1 *)(unaff_RBX + 0x70) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035dfe0(undefined8 *param_1)
void FUN_18035dfe0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uVar4 = 0xfffffffffffffffe;
  puVar3 = param_1;
  FUN_1803456e0();
  *puVar3 = &UNK_180a1f268;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x756c6156;
  *(undefined2 *)(puVar2 + 1) = 0x65;
  uStack_50 = 5;
  FUN_1803460a0(param_1,&puStack_60,param_1 + 0xe,2,uVar4);
  puStack_60 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_18035e170(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e1c0(undefined8 param_1,undefined8 param_2)
void FUN_18035e1c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x18035e1e8;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar4 = &UNK_180a1f268;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined4 *)0x0;
  uStack_50 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x756c6156;
  *(undefined2 *)(puVar2 + 1) = 0x65;
  uStack_50 = 5;
  FUN_1803460a0(puVar3,&puStack_60,puVar3 + 0xe,2,uVar5);
  puStack_60 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e200(undefined8 param_1)
void FUN_18035e200(undefined8 param_1)

{
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined **appuStack_160 [2];
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *apuStack_88 [11];
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 5;
  strcpy_s(auStack_130,0x40,&DAT_1809fd7b0);
  FUN_1800b8300(apuStack_88,&puStack_148);
  uStack_30 = 2;
  uStack_168 = 1;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 6;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&DAT_180a064d8);
  FUN_1800b8300(apuStack_88,&puStack_e8);
  uStack_30 = 0xb;
  uStack_168 = 2;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e390(undefined8 param_1,undefined8 param_2)
void FUN_18035e390(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  FUN_1803456e0(puVar2,param_2,param_1);
  *puVar3 = &UNK_180a1f3e8;
  puStack_40 = &UNK_180a3c3e0;
  uStack_28 = 0;
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  puVar3 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar3 = 0;
  puStack_38 = puVar3;
  uVar1 = FUN_18064e990(puVar3);
  uStack_28 = CONCAT44(uStack_28._4_4_,uVar1);
  *puVar3 = 0x65746172656e6547;
  *(undefined1 *)(puVar3 + 1) = 0;
  uStack_30 = 8;
  FUN_1803460a0(puVar2,&puStack_40,puVar2 + 0xe,0xb);
  puStack_40 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e4b0(undefined8 param_1)
void FUN_18035e4b0(undefined8 param_1)

{
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined **appuStack_e8 [2];
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_c0 [72];
  undefined *apuStack_78 [11];
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  uStack_f8 = 0;
  puStack_d8 = &UNK_1809fcc58;
  puStack_d0 = auStack_c0;
  auStack_c0[0] = 0;
  uStack_c8 = 8;
  strcpy_s(auStack_c0,0x40,&DAT_180a1f3d0);
  FUN_1800b8300(apuStack_78,&puStack_d8);
  uStack_20 = 0xb;
  uStack_f8 = 1;
  FUN_180180730(param_1,appuStack_e8,apuStack_78);
  uStack_f8 = 0;
  appuStack_e8[0] = apuStack_78;
  apuStack_78[0] = &UNK_18098bcb0;
  puStack_d8 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e5c0(undefined8 *param_1)
void FUN_18035e5c0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a1f578;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x654d206b63656843;
  *(undefined4 *)(puVar2 + 1) = 0x73656873;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0;
  uStack_50 = 0xc;
  FUN_1803460a0(param_1,&puStack_60,param_1 + 0xe,0xb,uVar3);
  puStack_60 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e750(undefined8 param_1,undefined8 param_2)
void FUN_18035e750(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_30;
  
  uStack_30 = 0x18035e778;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x78,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar2 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar2 = &UNK_180a1f578;
  puStack_60 = &UNK_180a3c3e0;
  uStack_48 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_58 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_48 = CONCAT44(uStack_48._4_4_,uVar1);
  *puVar2 = 0x654d206b63656843;
  *(undefined4 *)(puVar2 + 1) = 0x73656873;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0;
  uStack_50 = 0xc;
  FUN_1803460a0(puVar3,&puStack_60,puVar3 + 0xe,0xb,uVar4);
  puStack_60 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e790(undefined8 param_1)
void FUN_18035e790(undefined8 param_1)

{
  undefined1 auStack_188 [32];
  undefined4 uStack_168;
  undefined **appuStack_160 [2];
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *apuStack_88 [11];
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_150 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  uStack_168 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 0xc;
  strcpy_s(auStack_130,0x40,&DAT_180a1f560);
  FUN_1800b8300(apuStack_88,&puStack_148);
  uStack_30 = 0xb;
  uStack_168 = 1;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 9;
  appuStack_160[0] = apuStack_88;
  strcpy_s(auStack_d0,0x40,&DAT_180a1f550);
  FUN_1800b8300(apuStack_88,&puStack_e8);
  uStack_30 = 0xb;
  uStack_168 = 2;
  FUN_180180730(param_1,appuStack_160,apuStack_88);
  uStack_168 = 0;
  apuStack_88[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  appuStack_160[0] = apuStack_88;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035e920(undefined8 *param_1)
void FUN_18035e920(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = param_1;
  FUN_1803456e0();
  *puVar2 = &UNK_180a1f788;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70614d776f6c46;
  uStack_80 = 7;
  FUN_1803460a0(param_1,&puStack_90,param_1 + 0xe,7,uVar3);
  puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_18035eb50(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_1803457d0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18035eba0(undefined8 param_1,undefined8 param_2)
void FUN_18035eba0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_30;
  
  uStack_30 = 0x18035ebc8;
  puVar3 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x88,8,3);
  uVar4 = 0xfffffffffffffffe;
  puVar2 = puVar3;
  FUN_1803456e0(puVar3,param_2,param_1);
  *puVar2 = &UNK_180a1f788;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puStack_90 = &UNK_180a3c3e0;
  uStack_78 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13);
  *(undefined1 *)puVar2 = 0;
  puStack_88 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_78 = CONCAT44(uStack_78._4_4_,uVar1);
  *puVar2 = 0x70614d776f6c46;
  uStack_80 = 7;
  FUN_1803460a0(puVar3,&puStack_90,puVar3 + 0xe,7,uVar4);
  puStack_90 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



