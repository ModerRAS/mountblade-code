#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part477.c - 6 个函数

// 函数: void FUN_180522d09(longlong param_1,longlong param_2)
void FUN_180522d09(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int32_t uVar4;
  longlong in_RAX;
  uint uVar5;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int32_t in_XMM0_Da;
  
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (param_2 == 0) goto LAB_180522ef8;
  uVar5 = *(uint *)(lVar2 + 8);
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  if ((uVar5 >> 0x11 & 1) == 0) {
    if ((uVar5 >> 0x12 & 1) == 0) {
      if ((uVar5 >> 0x13 & 1) == 0) {
        if ((uVar5 >> 0x10 & 1) == 0) goto LAB_180522e20;
        uVar4 = func_0x00018052dcc0(*(int32_t *)(lVar2 + 0x20));
        uVar4 = FUN_180557b40(*(uint64_t *)(unaff_RBX + 0x598),uVar4,1,0xffffffff,0);
        *(int32_t *)(unaff_RBP + -0x2c) = uVar4;
        *(uint64_t *)(unaff_RBP + -0x28) = 0;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x2c) = 0xffffffff;
        *(uint64_t *)(unaff_RBP + -0x28) = 0x2021;
      }
      *(int32_t *)(unaff_RBP + -0x20) = 0;
      *(int32_t *)(unaff_RBP + -0x1c) = 0;
      *(int32_t *)(unaff_RBP + -0x18) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x14) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -0x10) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -8) = 0x1000000;
      *(int32_t *)(unaff_RBP + -0xc) = 0x3ecccccd;
      *(int8_t *)(unaff_RBP + -4) = 0;
      *(int32_t *)(unaff_RBP + -0x30) = 0;
      in_XMM0_Da = FUN_18051ec50(0,unaff_RBP + -0x30);
    }
    else {
      in_XMM0_Da = FUN_180524930(in_XMM0_Da,0,0);
    }
  }
  else {
    in_XMM0_Da = FUN_180524930(in_XMM0_Da,1,0);
  }
LAB_180522e20:
  uVar5 = *(uint *)(lVar2 + 8);
  if ((uVar5 >> 0x14 & 1) != 0) {
    in_XMM0_Da = func_0x00018057a770(*(uint64_t *)(unaff_RBX + 0x590),
                                     *(float *)(lVar2 + 0x24) * *(float *)(lVar2 + 0x24) +
                                     *(float *)(lVar2 + 0x28) * *(float *)(lVar2 + 0x28) +
                                     *(float *)(lVar2 + 0x2c) * *(float *)(lVar2 + 0x2c));
    uVar5 = *(uint *)(lVar2 + 8);
  }
  if ((((uVar5 & 0x20400000) != 0) && (_DAT_180c92514 != 1)) && (_DAT_180c92514 != 4)) {
    bVar1 = *(byte *)(lVar2 + 0x40);
    lVar3 = *(longlong *)(unaff_RBX + 0x598);
    *(int32_t *)(unaff_RBP + -0x1c) = 0;
    *(int32_t *)(unaff_RBP + -0x18) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x14) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x10) = 0xbe4ccccd;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x20) = 0;
    *(int32_t *)(unaff_RBP + -8) = 0x1000000;
    *(int32_t *)(unaff_RBP + -0xc) = 0x3ecccccd;
    *(int8_t *)(unaff_RBP + -4) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 0;
    if ((bVar1 & 1) == 0) {
      uVar4 = *(int32_t *)(lVar3 + 0x198);
    }
    else if ((uVar5 >> 0x1d & 1) == 0) {
      uVar4 = *(int32_t *)(lVar3 + 0x194);
    }
    else {
      uVar4 = *(int32_t *)(lVar3 + 0x1a4);
    }
    *(int32_t *)(unaff_RBP + -0x2c) = uVar4;
    in_XMM0_Da = FUN_18051ec50(0,unaff_RBP + -0x30);
  }
  if ((*(uint *)(lVar2 + 8) >> 0x17 & 1) != 0) {
    FUN_18052c030(in_XMM0_Da,6);
  }
LAB_180522ef8:
  if (((*(uint *)(lVar2 + 8) >> 0x15 & 1) != 0) &&
     ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) -
             *(longlong *)(unaff_RBX + 0x230)) * -1e-05 < 0.5)) {
    *(longlong *)(unaff_RBX + 0x230) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) + 50000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180522d1d(int32_t param_1)
void FUN_180522d1d(int32_t param_1)

{
  byte bVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong in_RAX;
  uint in_ECX;
  uint uVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  uint64_t unaff_RSI;
  longlong unaff_RDI;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RSI;
  if ((in_ECX >> 0x11 & 1) == 0) {
    if ((in_ECX >> 0x12 & 1) == 0) {
      if ((in_ECX >> 0x13 & 1) == 0) {
        if ((in_ECX >> 0x10 & 1) == 0) goto LAB_180522e20;
        uVar3 = func_0x00018052dcc0(*(int32_t *)(unaff_RDI + 0x20));
        uVar3 = FUN_180557b40(*(uint64_t *)(unaff_RBX + 0x598),uVar3,1,0xffffffff,0);
        *(int32_t *)(unaff_RBP + -0x2c) = uVar3;
        *(uint64_t *)(unaff_RBP + -0x28) = 0;
      }
      else {
        *(int32_t *)(unaff_RBP + -0x2c) = 0xffffffff;
        *(uint64_t *)(unaff_RBP + -0x28) = 0x2021;
      }
      *(int32_t *)(unaff_RBP + -0x20) = 0;
      *(int32_t *)(unaff_RBP + -0x1c) = 0;
      *(int32_t *)(unaff_RBP + -0x18) = 0x3f800000;
      *(int32_t *)(unaff_RBP + -0x14) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -0x10) = 0xbe4ccccd;
      *(int32_t *)(unaff_RBP + -8) = 0x1000000;
      *(int32_t *)(unaff_RBP + -0xc) = 0x3ecccccd;
      *(int8_t *)(unaff_RBP + -4) = 0;
      *(int32_t *)(unaff_RBP + -0x30) = 0;
      param_1 = FUN_18051ec50(0,unaff_RBP + -0x30);
    }
    else {
      param_1 = FUN_180524930(param_1,0,0);
    }
  }
  else {
    param_1 = FUN_180524930(param_1,1,0);
  }
LAB_180522e20:
  uVar4 = *(uint *)(unaff_RDI + 8);
  if ((uVar4 >> 0x14 & 1) != 0) {
    param_1 = func_0x00018057a770(*(uint64_t *)(unaff_RBX + 0x590),
                                  *(float *)(unaff_RDI + 0x24) * *(float *)(unaff_RDI + 0x24) +
                                  *(float *)(unaff_RDI + 0x28) * *(float *)(unaff_RDI + 0x28) +
                                  *(float *)(unaff_RDI + 0x2c) * *(float *)(unaff_RDI + 0x2c));
    uVar4 = *(uint *)(unaff_RDI + 8);
  }
  if ((((uVar4 & 0x20400000) != 0) && (_DAT_180c92514 != 1)) && (_DAT_180c92514 != 4)) {
    bVar1 = *(byte *)(unaff_RDI + 0x40);
    lVar2 = *(longlong *)(unaff_RBX + 0x598);
    *(int32_t *)(unaff_RBP + -0x1c) = 0;
    *(int32_t *)(unaff_RBP + -0x18) = 0x3f800000;
    *(int32_t *)(unaff_RBP + -0x14) = 0xbe4ccccd;
    *(int32_t *)(unaff_RBP + -0x10) = 0xbe4ccccd;
    *(uint64_t *)(unaff_RBP + -0x28) = 0;
    *(int32_t *)(unaff_RBP + -0x20) = 0;
    *(int32_t *)(unaff_RBP + -8) = 0x1000000;
    *(int32_t *)(unaff_RBP + -0xc) = 0x3ecccccd;
    *(int8_t *)(unaff_RBP + -4) = 0;
    *(int32_t *)(unaff_RBP + -0x30) = 0;
    if ((bVar1 & 1) == 0) {
      uVar3 = *(int32_t *)(lVar2 + 0x198);
    }
    else if ((uVar4 >> 0x1d & 1) == 0) {
      uVar3 = *(int32_t *)(lVar2 + 0x194);
    }
    else {
      uVar3 = *(int32_t *)(lVar2 + 0x1a4);
    }
    *(int32_t *)(unaff_RBP + -0x2c) = uVar3;
    param_1 = FUN_18051ec50(0,unaff_RBP + -0x30);
  }
  if ((*(uint *)(unaff_RDI + 8) >> 0x17 & 1) != 0) {
    FUN_18052c030(param_1,6);
  }
  if (((*(uint *)(unaff_RDI + 8) >> 0x15 & 1) != 0) &&
     ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) -
             *(longlong *)(unaff_RBX + 0x230)) * -1e-05 < 0.5)) {
    *(longlong *)(unaff_RBX + 0x230) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) + 50000;
  }
  return;
}





// 函数: void FUN_180522eeb(int32_t param_1)
void FUN_180522eeb(int32_t param_1)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  FUN_18052c030(param_1,6);
  if (((*(uint *)(unaff_RDI + 8) >> 0x15 & 1) != 0) &&
     ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) -
             *(longlong *)(unaff_RBX + 0x230)) * -1e-05 < 0.5)) {
    *(longlong *)(unaff_RBX + 0x230) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) + 50000;
  }
  return;
}





// 函数: void FUN_180522f0a(void)
void FUN_180522f0a(void)

{
  longlong unaff_RBX;
  
  if ((float)(*(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) -
             *(longlong *)(unaff_RBX + 0x230)) * -1e-05 < 0.5) {
    *(longlong *)(unaff_RBX + 0x230) =
         *(longlong *)(&system_error_code + (longlong)*(int *)(unaff_RBX + 0x238) * 8) + 50000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_180522fd0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  longlong lVar4;
  int32_t uVar5;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_4192_ptr;
  *param_1 = &unknown_var_7216_ptr;
  *(int32_t *)(param_1 + 3) = 0;
  *(int32_t *)(param_1 + 0xe) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x7c) = 0xffff;
  *(int32_t *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x74) = 0xffffffffbf800000;
  *(int8_t *)(param_1 + 0xd) = 0;
  *(int32_t *)(param_1 + 0x16) = 0xf149f2ca;
  *(int32_t *)(param_1 + 0x1e) = 0xf149f2ca;
  *(int8_t *)(param_1 + 0x20) = 0xff;
  *(int32_t *)(param_1 + 0x22) = 1;
  uVar1 = _DAT_180c8ed38;
  param_1[0x21] = _DAT_180c8ed38;
  *(int32_t *)(param_1 + 0x24) = 1;
  param_1[0x23] = uVar1;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(uint64_t *)((longlong)param_1 + 0x174) = 0;
  *(uint64_t *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(uint64_t *)((longlong)param_1 + 0x1cc) = 0;
  *(uint64_t *)((longlong)param_1 + 0x1d4) = 0;
  func_0x0001805b0bf0(param_1 + 0x27,0,param_3,param_4,0xfffffffffffffffe);
  param_1[0x43] = 0;
  *(int32_t *)(param_1 + 0x45) = 1;
  param_1[0x44] = uVar1;
  *(int32_t *)(param_1 + 0x47) = 1;
  param_1[0x46] = uVar1;
  *(int32_t *)(param_1 + 0x49) = 1;
  param_1[0x48] = uVar1;
  *(int32_t *)(param_1 + 0x4b) = 1;
  param_1[0x4a] = uVar1;
  *(int32_t *)(param_1 + 0x4d) = 1;
  param_1[0x4c] = uVar1;
  *(int32_t *)(param_1 + 0x4f) = 1;
  param_1[0x4e] = uVar1;
  lVar4 = 5;
  puVar2 = param_1 + 0x59;
  do {
    puVar3 = puVar2;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    lVar4 = lVar4 + -1;
    puVar2 = puVar3 + 8;
  } while (lVar4 != 0);
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(uint64_t *)((longlong)param_1 + 0x4cc) = 0;
  *(uint64_t *)((longlong)param_1 + 0x4c4) = 0;
  *(uint64_t *)((longlong)param_1 + 0x4cc) = 0;
  *(uint64_t *)((longlong)param_1 + 0x49c) = 0x3f80000000000000;
  *(int32_t *)((longlong)param_1 + 0x4a4) = 0;
  uVar5 = atan2f(0x80000000,0x3f800000);
  *(int32_t *)((longlong)param_1 + 0x4ac) = uVar5;
  *(int8_t *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(int32_t *)(param_1 + 0x98) = 0xffffffff;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(int32_t *)(param_1 + 0x9f) = 0xbf800000;
  param_1[0xa2] = 7;
  *(int32_t *)(param_1 + 0xa3) = 0;
  param_1[0x9e] = 0;
  *(int32_t *)(param_1 + 0xa0) = 0xffffffff;
  *(uint64_t *)((longlong)param_1 + 0x504) = 0xfffffffffffffffb;
  *(int32_t *)((longlong)param_1 + 0x50c) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x4fc) = 0;
  *(int8_t *)((longlong)param_1 + 0x51c) = 0;
  *(int32_t *)(param_1 + 0xb6) = 1;
  param_1[0xb5] = uVar1;
  *(int32_t *)(param_1 + 0xb8) = 1;
  param_1[0xb7] = uVar1;
  *(int32_t *)(param_1 + 0xba) = 1;
  param_1[0xb9] = uVar1;
  *(int32_t *)(param_1 + 0xbc) = 1;
  param_1[0xbb] = uVar1;
  param_1[0xbe] = 0;
  param_1[0xc1] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0xffffffffffffffff;
  param_1[200] = 0xffffffffffffffff;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(int32_t *)(param_1 + 0xcd) = 0xc2c80000;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0xffffffffffffffff;
  param_1[0xd5] = 0;
  *(int32_t *)(param_1 + 0xd8) = 1;
  param_1[0xd7] = uVar1;
  *(int32_t *)(param_1 + 0xda) = 1;
  param_1[0xd9] = uVar1;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(int32_t *)(param_1 + 0xdf) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x6fc) = 0xff7fffff;
  *(int32_t *)(param_1 + 0xe0) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x704) = 0xff7fffff;
  *(int32_t *)(param_1 + 0xe3) = 1;
  param_1[0xe2] = uVar1;
  *(int8_t *)((longlong)param_1 + 0x744) = 0;
  *(int32_t *)(param_1 + 0xe9) = 0x41c64e6d;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(int32_t *)(param_1 + 0x123) = 3;
  param_1[300] = 0;
  param_1[0x125] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[300] = param_1[0x128];
  *(int32_t *)(param_1 + 0x12d) = 0;
  *(int32_t *)(param_1 + 0x12f) = 1;
  param_1[0x12e] = uVar1;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  *(int32_t *)(param_1 + 0x138) = 3;
  *(int32_t *)(param_1 + 0x140) = 1;
  param_1[0x13f] = uVar1;
  *(int32_t *)(param_1 + 0x143) = 1;
  param_1[0x142] = uVar1;
  param_1[0x11b] = 0;
  param_1[0xdc] = 0;
  param_1[0x11f] = 0;
  param_1[0x11c] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xb2] = 0;
  param_1[0x134] = 0;
  *(int8_t *)((longlong)param_1 + 0x1c) = 0;
  *(int8_t *)(param_1 + 0x83) = 0;
  *(uint64_t *)((longlong)param_1 + 0x41c) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x424) = 0;
  *(uint64_t *)((longlong)param_1 + 0x42c) = 0x3f80000000000000;
  *(uint64_t *)((longlong)param_1 + 0x434) = 0;
  *(uint64_t *)((longlong)param_1 + 0x43c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x444) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x44c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x454) = 0x3f80000000000000;
  *(uint64_t *)((longlong)param_1 + 0x45c) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x464) = 0;
  *(uint64_t *)((longlong)param_1 + 0x46c) = 0x3f80000000000000;
  *(uint64_t *)((longlong)param_1 + 0x474) = 0;
  *(uint64_t *)((longlong)param_1 + 0x47c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x484) = 0x3f800000;
  *(uint64_t *)((longlong)param_1 + 0x48c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x494) = 0x3f80000000000000;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xc9] = 0;
  return param_1;
}



uint64_t FUN_180523530(uint64_t param_1,ulonglong param_2)

{
  FUN_180523570();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa60);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180523570(uint64_t *param_1)
void FUN_180523570(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  uint64_t uVar6;
  ulonglong uVar4;
  
  uVar6 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_7216_ptr;
  uVar4 = 0;
  if ((*(int *)(param_1 + 3) != 0) && (_DAT_180c8f008 != 0)) {
    (**(code **)(_DAT_180c8f008 + 0x18))();
  }
  *(int32_t *)(param_1 + 3) = 0;
  if (param_1[0x11c] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x11c] = 0;
  lVar2 = param_1[0x11f];
  if (lVar2 != 0) {
    FUN_1808fc8a8(lVar2 + 8,0x1f8,5,FUN_18058f420,uVar6);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  param_1[0x11f] = 0;
  FUN_180532af0(param_1[0xdc]);
  param_1[0xdc] = 0;
  lVar2 = param_1[0x134];
  if (lVar2 == 0) {
    param_1[0x134] = 0;
    plVar1 = param_1 + 0x120;
    lVar2 = *plVar1;
    uVar5 = uVar4;
    if (param_1[0x121] - lVar2 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(uVar5 + lVar2);
        if (lVar2 != 0) {
          FUN_18058f420(lVar2);
                    // WARNING: Subroutine does not return
          FUN_18064e900(lVar2);
        }
        *(uint64_t *)(uVar5 + *plVar1) = 0;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        lVar2 = *plVar1;
        uVar5 = uVar5 + 8;
      } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(param_1[0x121] - lVar2 >> 3));
    }
    param_1[0x121] = lVar2;
    if (param_1[0x135] == 0) {
      if (*plVar1 == 0) {
        if ((longlong *)param_1[0xde] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0xde] + 0x38))();
        }
        if ((longlong *)param_1[0xdd] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0xdd] + 0x38))();
        }
        if ((longlong *)param_1[0xdb] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0xdb] + 0x38))();
        }
        param_1[0xcb] = 0;
        if ((longlong *)param_1[0xca] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0xca] + 0x38))();
        }
        if ((longlong *)param_1[0xbe] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[0xbe] + 0x38))();
        }
        if ((*(int *)(param_1 + 3) != 0) && (_DAT_180c8f008 != 0)) {
          (**(code **)(_DAT_180c8f008 + 0x18))();
        }
        *param_1 = &unknown_var_4192_ptr;
        *param_1 = &unknown_var_3696_ptr;
        *param_1 = &unknown_var_3552_ptr;
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_1808fc8a8(lVar2,0x10,0x40,FUN_180534590);
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar2);
}





// 函数: void FUN_1805237e0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1805237e0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lStack_30;
  int32_t uStack_28;
  int8_t auStack_20 [24];
  
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x8be) != '\0') {
      FUN_18053fcb0(lVar1,1,param_3,param_4,0xfffffffffffffffe);
      uStack_28 = *(int32_t *)(lVar1 + 0x938);
      lStack_30 = lVar1;
      FUN_1804dd4d0(*(longlong *)(lVar1 + 0x930) + 0x2b58,auStack_20,&lStack_30);
    }
    plVar2 = *(longlong **)(param_1 + 0x6d8);
    *(uint64_t *)(param_1 + 0x6d8) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x650);
  *(uint64_t *)(param_1 + 0x650) = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x984) = 0;
  *(uint64_t *)(param_1 + 0x738) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



