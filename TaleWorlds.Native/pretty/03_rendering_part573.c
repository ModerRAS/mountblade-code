#include "TaleWorlds.Native.Split.h"

// 03_rendering_part573.c - 16 个函数

// 函数: void FUN_18057e860(longlong param_1)
void FUN_18057e860(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057e880(undefined8 *param_1)
void FUN_18057e880(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &UNK_180a36e08;
  plVar1 = (longlong *)param_1[4];
  lVar3 = *plVar1;
  plVar2 = plVar1;
  if (lVar3 == 0) {
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    while (lVar3 == 0) {
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  if (lVar3 != plVar1[param_1[5]]) {
    do {
      (**(code **)**(undefined8 **)(lVar3 + 8))();
      lVar3 = *(longlong *)(lVar3 + 0x38);
      while (lVar3 == 0) {
        plVar2 = plVar2 + 1;
        lVar3 = *plVar2;
      }
    } while (lVar3 != *(longlong *)(param_1[4] + param_1[5] * 8));
  }
  plVar1 = (longlong *)param_1[10];
  lVar3 = *plVar1;
  plVar2 = plVar1;
  if (lVar3 == 0) {
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    while (lVar3 == 0) {
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  if (lVar3 != plVar1[param_1[0xb]]) {
    do {
      (**(code **)**(undefined8 **)(lVar3 + 8))();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      while (lVar3 == 0) {
        plVar2 = plVar2 + 1;
        lVar3 = *plVar2;
      }
    } while (lVar3 != *(longlong *)(param_1[10] + param_1[0xb] * 8));
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  FUN_18033ad00(param_1 + 9);
  FUN_18033ad00(param_1 + 9);
  if ((1 < (ulonglong)param_1[0xb]) && (param_1[10] != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_18057ef40(param_1 + 3);
  *param_1 = &UNK_180a36e78;
  return;
}



undefined8
FUN_18057ea00(longlong param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,
             float *param_6,undefined1 *param_7,float *param_8)

{
  float *pfVar1;
  undefined1 *puVar2;
  float *pfVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined *puStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined2 uStack_138;
  undefined8 uStack_134;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined2 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined8 uStack_90;
  
  pfVar3 = param_8;
  puVar2 = param_7;
  pfVar1 = param_6;
  uStack_90 = 0xfffffffffffffffe;
  *param_6 = 3.4028235e+38;
  *param_7 = 0;
  param_8[0] = 0.0;
  param_8[1] = 0.0;
  param_8[2] = 0.0;
  param_8[3] = 0.0;
  fStack_160 = param_2[2];
  fStack_170 = param_3[2] - fStack_160;
  fStack_164 = param_2[1];
  fStack_174 = param_3[1] - fStack_164;
  fStack_168 = *param_2;
  fStack_178 = *param_3 - fStack_168;
  fVar7 = fStack_178 * fStack_178 + fStack_174 * fStack_174 + fStack_170 * fStack_170;
  auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
  fVar8 = auVar6._0_4_;
  fVar8 = fVar8 * 0.5 * (3.0 - fVar7 * fVar8 * fVar8);
  fStack_178 = fVar8 * fStack_178;
  fStack_174 = fVar8 * fStack_174;
  fStack_170 = fVar8 * fStack_170;
  puStack_e8 = &UNK_180a36e58;
  uStack_e0 = param_5;
  uVar5 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 7;
  lStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0xffffffff;
  uStack_138 = 0;
  uStack_134 = 0;
  fStack_12c = 0.0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_120 = 0x7f7fffff00000000;
  if (param_4 <= 0.01) {
    uStack_118 = 0;
    puStack_158 = &UNK_180a23cf0;
    param_5 = CONCAT22(param_5._2_2_,1);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x2b0))
                      (*(longlong **)(param_1 + 8),&fStack_168,&fStack_178,fVar8 * fVar7,
                       &puStack_158,&param_5,&uStack_d8,&puStack_e8,0);
    if (cVar4 != '\0') {
      uVar5 = *(undefined8 *)(lStack_150 + 0x10);
      *pfVar3 = (float)uStack_134;
      pfVar3[1] = uStack_134._4_4_;
      pfVar3[2] = fStack_12c;
      pfVar3[3] = 3.4028235e+38;
      *pfVar1 = SQRT((*param_2 - *pfVar3) * (*param_2 - *pfVar3) +
                     (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]) +
                     (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]));
    }
  }
  else {
    puStack_158 = &UNK_180a23cb0;
    param_6._0_4_ = 0;
    uStack_b0 = 0;
    uStack_a8 = 0x3f80000000000000;
    param_5 = CONCAT22(param_5._2_2_,0x201);
    param_6._4_4_ = param_4;
    fStack_c0 = fStack_178;
    fStack_bc = fStack_174;
    fStack_b8 = fStack_170;
    fStack_a0 = fStack_168;
    fStack_9c = fStack_164;
    fStack_98 = fStack_160;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x2b8))
                      (*(longlong **)(param_1 + 8),&param_6,&uStack_b0,&fStack_c0,fVar8 * fVar7,
                       &puStack_158,&param_5,&uStack_d8,&puStack_e8,0,0);
    if (cVar4 != '\0') {
      *puVar2 = uStack_120._4_4_ <= 0.0;
      uVar5 = *(undefined8 *)(lStack_150 + 0x10);
      *pfVar3 = (float)uStack_134;
      pfVar3[1] = uStack_134._4_4_;
      pfVar3[2] = fStack_12c;
      pfVar3[3] = 3.4028235e+38;
      *pfVar1 = SQRT((*param_2 - *pfVar3) * (*param_2 - *pfVar3) +
                     (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]) +
                     (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]));
    }
  }
  return uVar5;
}





// 函数: void FUN_18057eec0(undefined8 *param_1)
void FUN_18057eec0(undefined8 *param_1)

{
  *param_1 = &UNK_180a36e58;
  *param_1 = &UNK_180a23f80;
  return;
}



undefined8 *
FUN_18057eef0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a36e58;
  *param_1 = &UNK_180a23f80;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_18057ef40(longlong param_1)
void FUN_18057ef40(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057ef46(longlong param_1)
void FUN_18057ef46(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(param_1 + 8);
  uVar5 = 0;
  if (uVar6 != 0) {
    do {
      lVar2 = *(longlong *)(lVar4 + uVar5 * 8);
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
    uVar6 = *(ulonglong *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((1 < uVar6) && (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    uVar6 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar6 != 0) {
      lVar4 = uVar6 + 0x80 + ((longlong)puVar3 - uVar6 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar6 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar6,CONCAT71(0xff000000,*(void ***)(uVar6 + 0x70) == &ExceptionList),
                            puVar3,uVar6,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057ef70(void)
void FUN_18057ef70(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  longlong unaff_R14;
  undefined8 unaff_R15;
  
  do {
    lVar3 = *(longlong *)(unaff_R14 + unaff_RDI * 8);
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *(undefined8 *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < *(ulonglong *)(unaff_RBP + 0x10)) &&
     (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057efa6(void)
void FUN_18057efa6(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  undefined8 unaff_R15;
  
  *(undefined8 *)(unaff_RBP + 0x18) = unaff_R15;
  if ((1 < unaff_RSI) && (puVar2 = *(undefined8 **)(unaff_RBP + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18057efc4(void)
void FUN_18057efc4(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(unaff_RBP + 8);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18057efe0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar1 + uVar2 * 8);
  if (plVar3 != (longlong *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (longlong *)plVar3[7];
    } while (plVar3 != (longlong *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),1);
  plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x40,*(undefined1 *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                          *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
  }
  plVar3[7] = *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  *(longlong **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057f03b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18057f03b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x40,*(undefined1 *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(undefined1 *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  puVar2[7] = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(undefined8 **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f15e(undefined8 param_1,undefined8 param_2)
void FUN_18057f15e(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(undefined1 *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void FUN_18057f17a(ulonglong param_1)
void FUN_18057f17a(ulonglong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(undefined8 *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(undefined8 *)(unaff_R12 + 0x38) = *(undefined8 *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f1a0(void)
void FUN_18057f1a0(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_R12 + 0x38) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 *
FUN_18057f1f0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar2 = param_5 % (ulonglong)*(uint *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar1 + uVar2 * 8);
  if (plVar3 != (longlong *)0x0) {
    do {
      if (*param_4 == *plVar3) {
        *param_2 = plVar3;
        param_2[1] = lVar1 + uVar2 * 8;
        *(undefined1 *)(param_2 + 2) = 0;
        return param_2;
      }
      plVar3 = (longlong *)plVar3[2];
    } while (plVar3 != (longlong *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(ulonglong)*(uint *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18),1);
  plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(param_1 + 0x2c));
  *plVar3 = *param_4;
  plVar3[1] = 0;
  plVar3[2] = 0;
  if ((char)param_5 != '\0') {
    uVar4 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)param_5._4_4_ * 8 + 8,8,
                          *(undefined1 *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar4,0,(ulonglong)param_5._4_4_ * 8);
  }
  plVar3[2] = *(longlong *)(*(longlong *)(param_1 + 8) + uVar2 * 8);
  *(longlong **)(*(longlong *)(param_1 + 8) + uVar2 * 8) = plVar3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 1;
  *param_2 = plVar3;
  param_2[1] = lVar1 + uVar2 * 8;
  *(undefined1 *)(param_2 + 2) = 1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18057f24b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18057f24b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_RBX;
  longlong unaff_RDI;
  longlong unaff_R13;
  undefined8 *unaff_R15;
  char cStack0000000000000080;
  uint uStack0000000000000084;
  
  FUN_18066c220(param_1,&stack0x00000080,param_3,param_4,1);
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x18,*(undefined1 *)(unaff_RDI + 0x2c));
  *puVar2 = *unaff_RBX;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (cStack0000000000000080 != '\0') {
    uVar3 = FUN_18062b1e0(_DAT_180c8ed18,(ulonglong)uStack0000000000000084 * 8 + 8,8,
                          *(undefined1 *)(unaff_RDI + 0x2c));
                    // WARNING: Subroutine does not return
    memset(uVar3,0,(ulonglong)uStack0000000000000084 * 8);
  }
  puVar2[2] = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(undefined8 **)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = puVar2;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = puVar2;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f34e(undefined8 param_1,undefined8 param_2)
void FUN_18057f34e(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 *unaff_R15;
  
  *unaff_R15 = in_RAX;
  unaff_R15[1] = param_2;
  *(undefined1 *)(unaff_R15 + 2) = 0;
  return;
}





// 函数: void FUN_18057f36a(ulonglong param_1)
void FUN_18057f36a(ulonglong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong *unaff_R15;
  
  if ((1 < param_1) && (*(longlong *)(unaff_RDI + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(*(longlong *)(unaff_RDI + 8));
  }
  *(undefined8 *)(unaff_RDI + 0x10) = unaff_RBP;
  *(longlong *)(unaff_RDI + 8) = unaff_R14;
  *(undefined8 *)(unaff_R12 + 0x10) = *(undefined8 *)(unaff_R14 + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}





// 函数: void FUN_18057f390(void)
void FUN_18057f390(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong *unaff_R15;
  
  *(undefined8 *)(unaff_R12 + 0x10) = *(undefined8 *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8);
  *(longlong *)(*(longlong *)(unaff_RDI + 8) + unaff_R13 * 8) = unaff_R12;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *unaff_R15 = unaff_R12;
  unaff_R15[1] = lVar1 + unaff_R13 * 8;
  *(undefined1 *)(unaff_R15 + 2) = 1;
  return;
}



undefined8 * FUN_18057f3e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_180a36e78;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



