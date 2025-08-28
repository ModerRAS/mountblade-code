#include "TaleWorlds.Native.Split.h"

// 03_rendering_part335.c - 35 个函数

// 函数: void FUN_180445570(longlong *param_1,char param_2)
void FUN_180445570(longlong *param_1,char param_2)

{
  undefined4 auStackX_10 [6];
  
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x128))(param_1,&UNK_180995a3c);
    return;
  }
  auStackX_10[0] = 0;
  (**(code **)(*param_1 + 0x128))(param_1,auStackX_10);
  return;
}



undefined8 *
FUN_180445610(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &UNK_180a2a448;
  FUN_18022f410(param_1 + 2);
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x48,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_180445680(undefined4 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  plVar2 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x48,8,3,0xfffffffffffffffe);
  *plVar2 = (longlong)&UNK_180a21690;
  *plVar2 = (longlong)&UNK_180a21720;
  *(undefined4 *)(plVar2 + 1) = 0;
  *plVar2 = (longlong)&UNK_180a2a448;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[7] = 0;
  plVar2[5] = 0;
  *(undefined1 *)(plVar2 + 4) = 0;
  FUN_18022f2e0(plVar2 + 2,param_2,0);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uStack_40 = SUB84(plVar2,0);
  uStack_3c = (undefined4)((ulonglong)plVar2 >> 0x20);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uVar1;
  param_1[3] = uStack_34;
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return param_1;
}





// 函数: void FUN_1804457b0(longlong param_1,undefined4 param_2,undefined8 param_3,float *param_4,
void FUN_1804457b0(longlong param_1,undefined4 param_2,undefined8 param_3,float *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint auStackX_8 [2];
  
  uVar1 = (uint)(longlong)(param_4[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(longlong)(*param_4 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)(longlong)(param_4[1] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar2 = (uint)(longlong)(param_4[2] * 256.0);
  auStackX_8[0] = 0xff;
  if (uVar2 < 0xff) {
    auStackX_8[0] = uVar2;
  }
  auStackX_8[0] = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | auStackX_8[0];
  FUN_1802350e0(param_1 + 0x10,param_2,param_3,auStackX_8,param_5);
  return;
}





// 函数: void FUN_180445870(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180445870(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_5[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_5 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_5[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_5[2] * 256.0);
  param_5._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_5._0_4_ = uVar1;
  }
  param_5._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_5;
  FUN_180235270(param_1 + 0x10,param_2,param_3,param_4,&param_5,param_6);
  return;
}





// 函数: void FUN_180445970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180445970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_8[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_8 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_8[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_8[2] * 256.0);
  param_8._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_8._0_4_ = uVar1;
  }
  param_8._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_8;
                    // WARNING: Subroutine does not return
  FUN_1802354f0(param_1 + 0x10,param_2,param_3,param_4,param_5,param_6,param_7,&param_8);
}





// 函数: void FUN_180445a80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180445a80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,float *param_11,float *param_12,
                  float *param_13)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(longlong)(param_13[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(longlong)(*param_13 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(longlong)(param_13[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_13[2] * 256.0);
  param_13._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_13._0_4_ = uVar1;
  }
  param_13._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_13;
  uVar2 = (uint)(longlong)(param_12[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(longlong)(*param_12 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(longlong)(param_12[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_12[2] * 256.0);
  param_12._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_12._0_4_ = uVar1;
  }
  param_12._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_12;
  uVar2 = (uint)(longlong)(param_11[3] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar3 = (uint)(longlong)(*param_11 * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar1 = (uint)(longlong)(param_11[1] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_11[2] * 256.0);
  param_11._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_11._0_4_ = uVar1;
  }
  param_11._0_4_ = ((uVar4 << 8 | uVar2) << 8 | uVar3) << 8 | (uint)param_11;
  FUN_1802355d0(param_1 + 0x10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                param_10,&param_11,&param_12,&param_13);
  return;
}





// 函数: void FUN_180445cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180445cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  FUN_1802356b0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}





// 函数: void FUN_180445dc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180445dc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  FUN_1802358c0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}





// 函数: void FUN_180445eb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
void FUN_180445eb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(longlong)(param_6[3] * 256.0);
  uVar2 = 0xff;
  if (uVar3 < 0xff) {
    uVar2 = uVar3;
  }
  uVar4 = (uint)(longlong)(*param_6 * 256.0);
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  uVar1 = (uint)(longlong)(param_6[1] * 256.0);
  uVar4 = 0xff;
  if (uVar1 < 0xff) {
    uVar4 = uVar1;
  }
  uVar1 = (uint)(longlong)(param_6[2] * 256.0);
  param_6._0_4_ = 0xff;
  if (uVar1 < 0xff) {
    param_6._0_4_ = uVar1;
  }
  param_6._0_4_ = ((uVar2 << 8 | uVar3) << 8 | uVar4) << 8 | (uint)param_6;
  FUN_180235ae0(param_1 + 0x10,param_2,param_3,param_4,param_5,&param_6);
  return;
}





// 函数: void FUN_180445fd0(longlong param_1,undefined4 param_2)
void FUN_180445fd0(longlong param_1,undefined4 param_2)

{
  undefined4 auStackX_10 [6];
  
  auStackX_10[0] = param_2;
  FUN_180236e60(param_1 + 0x10,auStackX_10);
  return;
}





// 函数: void FUN_180446010(longlong param_1)
void FUN_180446010(longlong param_1)

{
  FUN_180235ca0(param_1 + 0x10);
  return;
}





// 函数: void FUN_180446080(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_180446080(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0x7f7fffff;
  FUN_1802333f0(param_1 + 0x10,&uStack_18,param_2,param_3);
  return;
}





// 函数: void FUN_1804460c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_1804460c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180231180(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5);
  return;
}





// 函数: void FUN_1804460f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_1804460f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_1802318b0(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5);
  return;
}





// 函数: void FUN_180446120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_180446120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_1802325e0(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5,param_6);
  return;
}





// 函数: void FUN_180446160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_180446160(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 auStackX_20 [2];
  
  auStackX_20[0] = param_4;
  FUN_180232d10(param_1 + 0x10,param_2,param_3,auStackX_20,&param_5,param_6);
  return;
}





// 函数: void FUN_1804461b0(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
void FUN_1804461b0(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint auStackX_8 [2];
  
  uVar1 = (uint)(longlong)(param_4[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(longlong)(*param_4 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar2 = (uint)(longlong)(param_4[1] * 256.0);
  uVar4 = 0xff;
  if (uVar2 < 0xff) {
    uVar4 = uVar2;
  }
  uVar2 = (uint)(longlong)(param_4[2] * 256.0);
  auStackX_8[0] = 0xff;
  if (uVar2 < 0xff) {
    auStackX_8[0] = uVar2;
  }
  auStackX_8[0] = ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | auStackX_8[0];
  FUN_1802309b0(param_1 + 0x10,param_2,param_3,auStackX_8,&param_5);
  return;
}





// 函数: void FUN_1804462a0(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1804462a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,1,0,0,1);
  return;
}





// 函数: void FUN_1804462e0(longlong param_1)
void FUN_1804462e0(longlong param_1)

{
  FUN_180235ca0(param_1 + 0x10);
  return;
}





// 函数: void FUN_180446320(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
void FUN_180446320(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,1,0,0,param_5);
  return;
}





// 函数: void FUN_180446370(longlong param_1)
void FUN_180446370(longlong param_1)

{
  FUN_180235ca0(param_1 + 0x10);
  return;
}





// 函数: void FUN_1804463b0(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1804463b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,0,0,0,1);
  return;
}





// 函数: void FUN_1804463f0(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1804463f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,0,1,0,1);
  return;
}





// 函数: void FUN_180446430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
void FUN_180446430(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_180235ca0(param_1 + 0x10,param_2,param_3,0xff,&uStack_18,1,0,1,param_5);
  return;
}





// 函数: void FUN_180446480(longlong param_1,int param_2,float *param_3)
void FUN_180446480(longlong param_1,int param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(longlong)(param_3[3] * 256.0);
  uVar3 = 0xff;
  if (uVar1 < 0xff) {
    uVar3 = uVar1;
  }
  uVar4 = (uint)(longlong)(*param_3 * 256.0);
  uVar1 = 0xff;
  if (uVar4 < 0xff) {
    uVar1 = uVar4;
  }
  uVar5 = (uint)(longlong)(param_3[1] * 256.0);
  uVar4 = 0xff;
  if (uVar5 < 0xff) {
    uVar4 = uVar5;
  }
  uVar2 = (uint)(longlong)(param_3[2] * 256.0);
  uVar5 = 0xff;
  if (uVar2 < 0xff) {
    uVar5 = uVar2;
  }
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + 0x54 + (longlong)param_2 * 0x5c) =
       ((uVar3 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}





// 函数: void FUN_180446610(longlong param_1,undefined8 *param_2)
void FUN_180446610(longlong param_1,undefined8 *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  uStack_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_1802379d0(param_1 + 0x10,&uStack_48);
  return;
}





// 函数: void FUN_180446650(longlong param_1,undefined8 *param_2)
void FUN_180446650(longlong param_1,undefined8 *param_2)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  uStack_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_180237b10(param_1 + 0x10,&uStack_48);
  return;
}





// 函数: void FUN_180446690(longlong param_1,float *param_2)
void FUN_180446690(longlong param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar3 = (uint)(longlong)(param_2[3] * 256.0);
  uVar1 = 0xff;
  if (uVar3 < 0xff) {
    uVar1 = uVar3;
  }
  uVar5 = (uint)(longlong)(*param_2 * 256.0);
  uVar3 = 0xff;
  if (uVar5 < 0xff) {
    uVar3 = uVar5;
  }
  uVar7 = (uint)(longlong)(param_2[1] * 256.0);
  uVar5 = 0xff;
  if (uVar7 < 0xff) {
    uVar5 = uVar7;
  }
  uVar2 = (uint)(longlong)(param_2[2] * 256.0);
  uVar7 = 0xff;
  if (uVar2 < 0xff) {
    uVar7 = uVar2;
  }
  iVar4 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x60)) {
    lVar6 = 0;
    do {
      lVar6 = lVar6 + 0x5c;
      iVar4 = iVar4 + 1;
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + -8 + lVar6) =
           ((uVar1 << 8 | uVar3) << 8 | uVar5) << 8 | uVar7;
    } while (iVar4 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x60));
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



float * FUN_180446760(float *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (*(int *)(*(longlong *)(param_2 + 0x18) + 0x60) < 1) {
    puVar2 = (uint *)&DAT_180bf661c;
  }
  else {
    puVar2 = (uint *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x68) + 0x54 +
                     (longlong)param_3 * 0x5c);
  }
  uVar1 = *puVar2;
  *param_1 = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
  param_1[2] = (float)(uVar1 & 0xff) * 0.003921569;
  param_1[3] = (float)(uVar1 >> 0x18) * 0.003921569;
  return param_1;
}





// 函数: void FUN_180446810(longlong param_1,float param_2)
void FUN_180446810(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar3 + 0x60)) {
    lVar6 = 0;
    uVar1 = (uint)(longlong)(param_2 * 256.0);
    uVar5 = 0xff;
    if (uVar1 < 0xff) {
      uVar5 = uVar1;
    }
    do {
      lVar6 = lVar6 + 0x5c;
      uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x68) + -8 + lVar6);
      uVar4 = (uint)(longlong)((float)(uVar1 >> 0x10 & 0xff) * 1.0039216);
      uVar8 = 0xff;
      if (uVar4 < 0xff) {
        uVar8 = uVar4;
      }
      uVar2 = (uint)(longlong)((float)(uVar1 >> 8 & 0xff) * 1.0039216);
      uVar4 = 0xff;
      if (uVar2 < 0xff) {
        uVar4 = uVar2;
      }
      uVar2 = (uint)(longlong)((float)(uVar1 & 0xff) * 1.0039216);
      uVar1 = 0xff;
      if (uVar2 < 0xff) {
        uVar1 = uVar2;
      }
      iVar7 = iVar7 + 1;
      *(uint *)(*(longlong *)(lVar3 + 0x68) + -8 + lVar6) =
           ((uVar8 | uVar5 << 8) << 8 | uVar4) << 8 | uVar1;
      lVar3 = *(longlong *)(param_1 + 0x18);
    } while (iVar7 < *(int *)(lVar3 + 0x60));
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}





// 函数: void FUN_18044682c(longlong param_1,float param_2)
void FUN_18044682c(longlong param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint unaff_EDI;
  uint uVar6;
  longlong in_R11;
  
  uVar5 = (ulonglong)unaff_EDI;
  uVar4 = 0xff;
  if ((uint)(longlong)param_2 < 0xff) {
    uVar4 = (uint)(longlong)param_2;
  }
  do {
    uVar5 = uVar5 + 0x5c;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x68) + -8 + uVar5);
    uVar3 = (uint)(longlong)((float)(uVar1 >> 0x10 & 0xff) * 1.0039216);
    uVar6 = 0xff;
    if (uVar3 < 0xff) {
      uVar6 = uVar3;
    }
    uVar2 = (uint)(longlong)((float)(uVar1 >> 8 & 0xff) * 1.0039216);
    uVar3 = 0xff;
    if (uVar2 < 0xff) {
      uVar3 = uVar2;
    }
    uVar2 = (uint)(longlong)((float)(uVar1 & 0xff) * 1.0039216);
    uVar1 = 0xff;
    if (uVar2 < 0xff) {
      uVar1 = uVar2;
    }
    unaff_EDI = unaff_EDI + 1;
    *(uint *)(*(longlong *)(param_1 + 0x68) + -8 + uVar5) =
         ((uVar6 | uVar4 << 8) << 8 | uVar3) << 8 | uVar1;
    param_1 = *(longlong *)(in_R11 + 0x18);
  } while ((int)unaff_EDI < *(int *)(param_1 + 0x60));
  *(undefined1 *)(in_R11 + 0x40) = 1;
  return;
}





// 函数: void FUN_1804468f7(void)
void FUN_1804468f7(void)

{
  longlong in_R11;
  
  *(undefined1 *)(in_R11 + 0x40) = 1;
  return;
}





// 函数: void FUN_180446960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)
void FUN_180446960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  FUN_180233690(param_1 + 0x10,auStack_40,param_2,param_3,param_4);
  if (puStack_30 != (undefined8 *)0x0) {
    FUN_18004b790(auStack_40,*puStack_30);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puStack_30);
  }
  return;
}





// 函数: void FUN_180446a60(longlong param_1,int param_2)
void FUN_180446a60(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iStack_18;
  int iStack_14;
  
  iVar4 = 0;
  piVar2 = *(int **)(*(longlong *)(param_1 + 0x18) + 0x90);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x88);
  if (0 < iVar1) {
    iStack_14 = (int)((ulonglong)*(undefined8 *)(piVar2 + (longlong)param_2 * 3) >> 0x20);
    iStack_18 = (int)*(undefined8 *)(piVar2 + (longlong)param_2 * 3);
    piVar3 = piVar2;
    while (((*piVar3 != iStack_18 || (piVar3[1] != iStack_14)) ||
           (piVar3[2] != piVar2[(longlong)param_2 * 3 + 2]))) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 3;
      if (iVar1 <= iVar4) {
        return;
      }
    }
    if (-1 < iVar4) {
                    // WARNING: Subroutine does not return
      memmove(piVar2 + (longlong)iVar4 * 3,piVar2 + (longlong)(iVar4 + 1) * 3,
              (longlong)((iVar1 - iVar4) + -1) * 0xc);
    }
  }
  return;
}



undefined4 *
FUN_180446b20(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plStackX_8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  
  FUN_18022cb40(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (undefined4)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x000180446c4b)

undefined8 * FUN_180446ba0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plStackX_8;
  longlong *plStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  longlong lStack_20;
  
  uVar1 = FUN_180627910(&puStack_28);
  FUN_1800b3060(uVar1,&plStackX_8,&puStack_28);
  plStack_38 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0xffffffff;
    puStack_28 = &UNK_180a3c3e0;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  else {
    uStack_30 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plStack_38 + 0x28))(plStack_38);
    if (plStackX_8 != (longlong *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    puStack_28 = &UNK_180a3c3e0;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *param_1 = plStack_38;
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  return param_1;
}



undefined4 * FUN_180446ca0(undefined4 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plStackX_8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  FUN_1800b5e80(param_1,&plStackX_8);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1,0);
  uStack_14 = (undefined4)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  param_1[2] = uVar2;
  param_1[3] = uStack_c;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



undefined4 * FUN_180446d20(undefined4 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da;
  longlong *plStackX_8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  cVar2 = *(char *)(param_2 + 0x38c);
  if (cVar2 == '\t') {
    cVar2 = func_0x00018022d300(param_2,param_2,param_2);
    *(char *)(param_2 + 0x38c) = cVar2;
    in_XMM0_Da = extraout_XMM0_Da;
  }
  FUN_1800b5ec0(in_XMM0_Da,&plStackX_8,cVar2);
  plVar1 = plStackX_8;
  if (plStackX_8 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_18 = SUB84(plVar1,0);
  uStack_14 = (undefined4)((ulonglong)plVar1 >> 0x20);
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  param_1[2] = uVar3;
  param_1[3] = uStack_c;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}





// 函数: void FUN_180446dc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)
void FUN_180446dc0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [88];
  
  uVar1 = FUN_1800b8300(auStack_60,param_2 + 0x10,param_3,param_4,0xfffffffffffffffe);
  FUN_18022ccc0(param_1,uVar1);
  return;
}



longlong * FUN_180446e70(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  plStack_20 = *(longlong **)(param_2 + 0xb8 + (longlong)param_3 * 8);
  if (plStack_20 == (longlong *)0x0) {
    plStack_20 = (longlong *)0x0;
    uStack_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    uStack_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (longlong)plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}



longlong * FUN_180446f00(longlong *param_1,longlong param_2)

{
  longlong *plStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  plStack_20 = *(longlong **)(param_2 + 0x1e0);
  if (plStack_20 == (longlong *)0x0) {
    plStack_20 = (longlong *)0x0;
    uStack_18 = 0xffffffff;
  }
  else {
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    uStack_18 = (**(code **)(*plStack_20 + 8))(plStack_20);
    (**(code **)(*plStack_20 + 0x28))(plStack_20);
    (**(code **)(*plStack_20 + 0x38))(plStack_20);
  }
  *param_1 = (longlong)plStack_20;
  param_1[1] = CONCAT44(uStack_14,uStack_18);
  return param_1;
}





// 函数: void FUN_180446fa0(longlong param_1,undefined8 param_2)
void FUN_180446fa0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x140) = param_2;
  FUN_18022dd60();
  *(undefined2 *)(param_1 + 0x3c0) = 0xffff;
  return;
}





// 函数: void FUN_180446fd0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
void FUN_180446fd0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x288) = param_2;
  *(undefined4 *)(param_1 + 0x28c) = param_3;
  *(undefined4 *)(param_1 + 0x290) = param_4;
  *(undefined4 *)(param_1 + 0x294) = param_5;
  return;
}





