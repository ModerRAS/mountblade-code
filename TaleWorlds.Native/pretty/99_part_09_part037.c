#include "TaleWorlds.Native.Split.h"

// 99_part_09_part037.c - 6 个函数

// 函数: void FUN_1805ce220(longlong *param_1)
void FUN_1805ce220(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 1.0;
  if (((((int)param_1[0x2f1] != 0) &&
       (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) -
                      param_1[0x2ed]) * 1e-05)) && (*(uint *)((longlong)param_1 + 0x178c) < 10)) &&
     ((0x241U >> (*(uint *)((longlong)param_1 + 0x178c) & 0x1f) & 1) != 0)) {
    lVar3 = func_0x0001805b7270(param_1 + 1);
    if (lVar3 == 0) {
      param_1[0x2f1] = 0;
      param_1[0x2ed] =
           *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) + -0x8000000000000000;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)param_1 + 0x158c) =
             *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      }
      goto FUN_1805ce79d;
    }
    cVar2 = FUN_1805b7d90(param_1);
    if (cVar2 != '\0') {
      param_1[0x2ed] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ee] * 8) + -100;
      goto FUN_1805ce79d;
    }
  }
  cVar2 = func_0x0001805b7d30(param_1);
  if (cVar2 == '\0') {
    *(uint *)((longlong)param_1 + 0x159c) = *(uint *)((longlong)param_1 + 0x159c) | 0x4000;
  }
  plVar1 = param_1 + 1;
  piVar4 = (int *)FUN_1805b7660(plVar1);
  if (*piVar4 == 2) goto FUN_1805ce79d;
  if ((0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ec] * 8) -
                    param_1[0x2eb]) * 1e-05) &&
     (*(undefined4 *)((longlong)param_1 + 0x178c) = 0, *(int *)(*param_1 + 0x1fc) - 1U < 2)) {
    *(uint *)((longlong)param_1 + 0x158c) =
         *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  }
  piVar4 = (int *)FUN_1805b7660(plVar1);
  if (*piVar4 == 1) {
    if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
      FUN_1805d4440(plVar1);
    }
    if (((*(char *)((longlong)param_1 + 0xd5) != '\0') &&
        (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
                      param_1[0x2dc]) * 1e-05)) &&
       (((lVar3 = func_0x0001805b6e80(plVar1), lVar3 == 0 ||
         (lVar3 = func_0x0001805b6e80(), *(int *)(lVar3 + 0x30) < 1)) ||
        ((((*(uint *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar3 + 8) < 1)) ||
         (lVar3 = func_0x0001805b6e80(plVar1),
         (*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar3 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)))))) {
      fVar7 = *(float *)(*param_1 + 0x2e8);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      FUN_1805b7740(plVar1);
      fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
      if ((1.0 - fVar6 < fVar7) &&
         ((cVar2 = func_0x0001805b7bd0(param_1), cVar2 != '\0' ||
          (cVar2 = FUN_1805d06b0(), cVar2 == '\0')))) {
        param_1[0x2e9] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
             (longlong)(*(float *)(*param_1 + 0x2ec) * 100000.0);
        *(undefined4 *)((longlong)param_1 + 0x178c) = 7;
        *(undefined1 *)(param_1 + 0x2e4) = 0;
        param_1[0x2de] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
             (longlong)(*(float *)(*param_1 + 0x2ec) * -100000.0);
      }
    }
    goto FUN_1805ce79d;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    FUN_1805d4440(plVar1);
  }
  if (*(char *)((longlong)param_1 + 0xd5) != '\0') {
    if ((*(uint *)(param_1 + 2) & 0x10000000) == 0) {
      FUN_1805d5680(plVar1);
    }
    if ((((int)param_1[0x24] < 2) &&
        (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
                      param_1[0x2dc]) * 1e-05)) &&
       (((lVar3 = func_0x0001805b6e80(plVar1), lVar3 == 0 ||
         (lVar3 = func_0x0001805b6e80(), *(int *)(lVar3 + 0x30) < 1)) ||
        ((((*(uint *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar3 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar3 + 8) < 1)) ||
         (lVar3 = func_0x0001805b6e80(plVar1),
         (*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar3 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)))))) {
      if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
                       param_1[0x2de]) * 1e-05) {
        piVar4 = (int *)FUN_1805b7660(plVar1);
        if (*piVar4 == 3) {
          fVar7 = *(float *)(*param_1 + 0x350);
        }
        else {
          fVar7 = *(float *)(*param_1 + 0x2e8);
        }
        uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(param_1 + 0x272) = uVar5;
        FUN_1805b7740(plVar1);
        fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
        if (fVar7 <= 1.0 - fVar6) goto LAB_1805ce5b6;
      }
      cVar2 = func_0x0001805b7bd0(param_1);
      if ((cVar2 != '\0') || (cVar2 = FUN_1805d06b0(), cVar2 == '\0')) {
        param_1[0x2e9] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2ea] * 8) -
             (longlong)(*(float *)(*param_1 + 0x2ec) * 100000.0);
        *(undefined4 *)((longlong)param_1 + 0x178c) = 7;
        *(undefined1 *)(param_1 + 0x2e4) = 0;
        goto FUN_1805ce79d;
      }
    }
  }
LAB_1805ce5b6:
  *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
  if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
    *(uint *)((longlong)param_1 + 0x158c) =
         *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  }
FUN_1805ce79d:
  if (*(int *)((longlong)param_1 + 0x178c) == 6) {
    if ((*(uint *)(param_1 + 2) & 0x10000000) == 0) {
      FUN_1805d5680(param_1 + 1);
    }
    if ((1 < (int)param_1[0x24]) ||
       (0.0 <= (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
                      param_1[0x2de]) * 1e-05)) {
      lVar3 = *param_1;
      cVar2 = func_0x00018051f6a0(lVar3);
      if (cVar2 != '\0') {
        fVar8 = 0.6667;
      }
      fVar7 = *(float *)(lVar3 + 0x314);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      if ((float)(uVar5 - 1) * 2.3283064e-10 < fVar8 * fVar7) {
        param_1[0x292] = *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x293] * 8);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x178c) = 0;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)param_1 + 0x158c) =
             *(uint *)((longlong)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ce3c5(void)
void FUN_1805ce3c5(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong unaff_R14;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  piVar3 = (int *)FUN_1805b7660();
  cVar2 = (char)unaff_EBP;
  if (*piVar3 == 1) {
    if ((*(byte *)(unaff_RSI + 8) & 0x80) == 0) {
      FUN_1805d4440();
    }
    if (((*(char *)(unaff_RSI + 0xcd) != cVar2) &&
        (unaff_XMM8_Da <
         (float)(*(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2dd] * 8) - unaff_RDI[0x2dc])
         * unaff_XMM7_Da)) &&
       (((lVar4 = func_0x0001805b6e80(), lVar4 == 0 ||
         (lVar4 = func_0x0001805b6e80(), *(int *)(lVar4 + 0x30) <= unaff_EBP)) ||
        ((((*(uint *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar4 + 8) <= (short)unaff_EBP)) ||
         (lVar4 = func_0x0001805b6e80(),
         (*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar4 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)))))) {
      fVar7 = *(float *)(*unaff_RDI + 0x2e8);
      uVar5 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RDI + 0x272) = uVar5;
      FUN_1805b7740();
      fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
      if ((unaff_XMM9_Da - fVar6 < fVar7) &&
         ((cVar1 = func_0x0001805b7bd0(), cVar1 != '\0' || (cVar1 = FUN_1805d06b0(), cVar1 == '\0'))
         )) {
        unaff_RDI[0x2e9] =
             *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
             (longlong)(*(float *)(*unaff_RDI + 0x2ec) * 100000.0);
        *(undefined4 *)((longlong)unaff_RDI + 0x178c) = 7;
        *(char *)(unaff_RDI + 0x2e4) = cVar2;
        unaff_RDI[0x2de] =
             *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2df] * 8) -
             (longlong)(*(float *)(*unaff_RDI + 0x2ec) * -100000.0);
      }
    }
    goto LAB_1805ce793;
  }
  if ((*(byte *)(unaff_RSI + 8) & 0x80) == 0) {
    FUN_1805d4440();
  }
  if (*(char *)(unaff_RSI + 0xcd) != cVar2) {
    if ((*(uint *)(unaff_RSI + 8) & 0x10000000) == 0) {
      FUN_1805d5680();
    }
    if (((*(int *)(unaff_RSI + 0x118) < 2) &&
        (unaff_XMM8_Da <
         (float)(*(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2dd] * 8) - unaff_RDI[0x2dc])
         * unaff_XMM7_Da)) &&
       (((lVar4 = func_0x0001805b6e80(), lVar4 == 0 ||
         (lVar4 = func_0x0001805b6e80(), *(int *)(lVar4 + 0x30) <= unaff_EBP)) ||
        ((((*(uint *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar4 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar4 + 8) <= (short)unaff_EBP)) ||
         (lVar4 = func_0x0001805b6e80(),
         (*(byte *)((longlong)
                    *(int *)((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                            *(longlong *)(lVar4 + 0xd0)) * 0x170 + 0x140 + _DAT_180c95ff0) & 0x10)
         == 0)))))) {
      if (unaff_XMM8_Da <
          (float)(*(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2df] * 8) - unaff_RDI[0x2de])
          * unaff_XMM7_Da) {
        piVar3 = (int *)FUN_1805b7660();
        if (*piVar3 == 3) {
          fVar7 = *(float *)(*unaff_RDI + 0x350);
        }
        else {
          fVar7 = *(float *)(*unaff_RDI + 0x2e8);
        }
        uVar5 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(unaff_RDI + 0x272) = uVar5;
        FUN_1805b7740();
        fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
        if (fVar7 <= unaff_XMM9_Da - fVar6) goto LAB_1805ce5b6;
      }
      cVar1 = func_0x0001805b7bd0();
      if ((cVar1 != '\0') || (cVar1 = FUN_1805d06b0(), cVar1 == '\0')) {
        unaff_RDI[0x2e9] =
             *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2ea] * 8) -
             (longlong)(*(float *)(*unaff_RDI + 0x2ec) * 100000.0);
        *(undefined4 *)((longlong)unaff_RDI + 0x178c) = 7;
        *(char *)(unaff_RDI + 0x2e4) = cVar2;
        goto LAB_1805ce793;
      }
    }
  }
LAB_1805ce5b6:
  *(int *)((longlong)unaff_RDI + 0x178c) = unaff_EBP;
  if (*(int *)(*unaff_RDI + 0x1fc) - 1U < 2) {
    *(uint *)((longlong)unaff_RDI + 0x158c) =
         *(uint *)((longlong)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
  }
LAB_1805ce793:
  if (*(int *)((longlong)unaff_RDI + 0x178c) == 6) {
    if ((*(uint *)(unaff_RSI + 8) & 0x10000000) == 0) {
      FUN_1805d5680();
    }
    if ((1 < *(int *)(unaff_RSI + 0x118)) ||
       (unaff_XMM8_Da <=
        (float)(*(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2df] * 8) - unaff_RDI[0x2de]) *
        unaff_XMM7_Da)) {
      lVar4 = *unaff_RDI;
      cVar2 = func_0x00018051f6a0(lVar4);
      if (cVar2 != '\0') {
        unaff_XMM9_Da = 0.6667;
      }
      fVar7 = *(float *)(lVar4 + 0x314);
      uVar5 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RDI + 0x272) = uVar5;
      if ((float)(uVar5 - 1) * 2.3283064e-10 < unaff_XMM9_Da * fVar7) {
        unaff_RDI[0x292] = *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x293] * 8);
      }
    }
    else {
      *(int *)((longlong)unaff_RDI + 0x178c) = unaff_EBP;
      if (*(int *)(*unaff_RDI + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)unaff_RDI + 0x158c) =
             *(uint *)((longlong)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  return;
}






// 函数: void FUN_1805ce79d(void)
void FUN_1805ce79d(void)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 unaff_EBP;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong unaff_R14;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  if (*(int *)((longlong)unaff_RDI + 0x178c) == 6) {
    if ((*(uint *)(unaff_RSI + 8) & 0x10000000) == 0) {
      FUN_1805d5680();
    }
    if ((1 < *(int *)(unaff_RSI + 0x118)) ||
       (unaff_XMM8_Da <=
        (float)(*(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x2df] * 8) - unaff_RDI[0x2de]) *
        unaff_XMM7_Da)) {
      lVar4 = *unaff_RDI;
      cVar2 = func_0x00018051f6a0(lVar4);
      if (cVar2 != '\0') {
        unaff_XMM9_Da = 0.6667;
      }
      fVar1 = *(float *)(lVar4 + 0x314);
      uVar3 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      uVar3 = uVar3 << 5 ^ uVar3;
      *(uint *)(unaff_RDI + 0x272) = uVar3;
      if ((float)(uVar3 - 1) * 2.3283064e-10 < unaff_XMM9_Da * fVar1) {
        unaff_RDI[0x292] = *(longlong *)(unaff_R14 + (longlong)(int)unaff_RDI[0x293] * 8);
      }
    }
    else {
      *(undefined4 *)((longlong)unaff_RDI + 0x178c) = unaff_EBP;
      if (*(int *)(*unaff_RDI + 0x1fc) - 1U < 2) {
        *(uint *)((longlong)unaff_RDI + 0x158c) =
             *(uint *)((longlong)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ce8c0(longlong *param_1)
void FUN_1805ce8c0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  if (param_1[0x1d] == 0) {
    return;
  }
  fVar10 = 0.0;
  if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
                   param_1[0x2de]) * 1e-05) {
    iVar1 = *(int *)(*(longlong *)(*param_1 + 0x590) + 0x2498);
    if (iVar1 == -1) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)((longlong)iVar1 * 0x68 + 0x60 + _DAT_180c96150);
    }
    if (cVar2 == '\x06') {
      if ((*(char *)((longlong)param_1 + 0x16d7) == '\0') &&
         (fVar9 = *(float *)(*param_1 + 0x374),
         uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
         uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
         *(uint *)(param_1 + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
        lVar3 = FUN_1805b74c0(param_1 + 1);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(longlong *)(lVar3 + 0x220);
        fVar9 = *(float *)(*param_1 + 0x378);
        uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(param_1 + 0x272) = uVar5;
        param_1[0x2de] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
             (longlong)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)iVar1 * 8) - lVar3) * 1.0);
        *(undefined1 *)((longlong)param_1 + 0x16d7) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x16d7) = 0;
    }
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    cVar2 = func_0x0001805213f0(param_1[0x1d]);
    if (cVar2 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x16d6) = 0;
    }
    else if ((*(char *)((longlong)param_1 + 0x16d6) == '\0') &&
            (fVar9 = *(float *)(*param_1 + 0x370),
            uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
            uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
            *(uint *)(param_1 + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
      fVar9 = 0.0;
      lVar3 = FUN_1805b74c0(param_1 + 1);
      iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2450);
      if ((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) < 0x2f)) {
LAB_1805ceb8f:
        lVar3 = FUN_1805b74c0(param_1 + 1);
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2498);
        if ((iVar1 != -1) && (0x2e < *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150))) {
          lVar3 = FUN_1805b74c0(param_1 + 1);
          iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2498);
          if ((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) < 0x33)) {
            lVar3 = FUN_1805b74c0(param_1 + 1);
            uVar7 = 1;
            goto LAB_1805cebf9;
          }
        }
      }
      else {
        lVar3 = FUN_1805b74c0(param_1 + 1);
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2450);
        if ((iVar1 != -1) && (0x32 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150)))
        goto LAB_1805ceb8f;
        lVar3 = FUN_1805b74c0(param_1 + 1);
        uVar4 = func_0x000180534e20(*(undefined8 *)(lVar3 + 0x590),0);
        if ((uVar4 & 0x2000000000) == 0) goto LAB_1805ceb8f;
        lVar3 = FUN_1805b74c0(param_1 + 1);
        uVar7 = 0;
LAB_1805cebf9:
        fVar9 = (float)(**(code **)(**(longlong **)(lVar3 + 0x590) + 0xb8))
                                 (*(longlong **)(lVar3 + 0x590),uVar7);
      }
      fVar8 = *(float *)(*param_1 + 0x378);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      param_1[0x2de] =
           *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2df] * 8) -
           (longlong)
           ((((float)(uVar5 - 1) * fVar8 * 4.656613e-10 - fVar8) + 1.0) * fVar9 * -100000.0);
      *(undefined1 *)((longlong)param_1 + 0x16d6) = 1;
    }
  }
  if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) - param_1[0x2dc]) *
      1e-05 <= 0.0) {
    return;
  }
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  iVar1 = *(int *)(*(longlong *)(param_1[0x1d] + 0x590) + 0x2498);
  if (iVar1 == -1) {
    cVar2 = -1;
  }
  else {
    cVar2 = *(char *)((longlong)iVar1 * 0x68 + 0x60 + _DAT_180c96150);
  }
  if (cVar2 == '\x06') {
    if (*(char *)((longlong)param_1 + 0x16d5) == '\0') {
      fVar9 = *(float *)(*param_1 + 0x368);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      if ((float)(uVar5 - 1) * 2.3283064e-10 < fVar9) {
        lVar3 = *param_1;
        fVar9 = *(float *)(lVar3 + 0x378);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(longlong *)(lVar3 + 0x220);
        uVar5 = uVar5 << 0xd ^ uVar5;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(param_1 + 0x272) = uVar5;
        param_1[0x2dc] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
             (longlong)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)iVar1 * 8) - lVar3) * 1.0);
        *(undefined1 *)((longlong)param_1 + 0x16d5) = 1;
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x16d5) = 0;
  }
  lVar3 = *param_1;
  cVar2 = func_0x0001805213f0(lVar3);
  if (cVar2 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x16d4) = 0;
    return;
  }
  if (*(char *)((longlong)param_1 + 0x16d4) != '\0') {
    return;
  }
  fVar9 = *(float *)(lVar3 + 0x368);
  uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
  uVar5 = uVar5 >> 0x11 ^ uVar5;
  uVar5 = uVar5 << 5 ^ uVar5;
  *(uint *)(param_1 + 0x272) = uVar5;
  fVar8 = (float)(uVar5 - 1) * 2.3283064e-10;
  if (fVar9 <= fVar8) {
    return;
  }
  plVar6 = *(longlong **)(lVar3 + 0x590);
  iVar1 = (int)plVar6[0x48a];
  lVar3 = _DAT_180c96150;
  if ((((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) < 0x2f)) ||
      (0x32 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150))) ||
     (uVar4 = func_0x000180534e20(plVar6,0), fVar8 = extraout_XMM0_Da, (uVar4 & 0x2000000000) == 0))
  {
    iVar1 = (int)plVar6[0x493];
    if (((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + lVar3) < 0x2f)) ||
       (0x32 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + lVar3))) goto LAB_1805ceec6;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  fVar10 = (float)(**(code **)(*plVar6 + 0xb8))(fVar8,uVar7);
LAB_1805ceec6:
  fVar9 = *(float *)(*param_1 + 0x378);
  uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
  uVar5 = uVar5 >> 0x11 ^ uVar5;
  uVar5 = uVar5 << 5 ^ uVar5;
  *(uint *)(param_1 + 0x272) = uVar5;
  param_1[0x2dc] =
       *(longlong *)(&DAT_180c8ed30 + (longlong)(int)param_1[0x2dd] * 8) -
       (longlong)((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) * fVar10 * -100000.0);
  *(undefined1 *)((longlong)param_1 + 0x16d4) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ce8f7(void)
void FUN_1805ce8f7(void)

{
  int iVar1;
  char cVar2;
  longlong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *unaff_RBX;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if (0.0 < (float)(*(longlong *)(&DAT_180c8ed30 + in_RAX * 8) - unaff_RBX[0x2de]) * 1e-05) {
    iVar1 = *(int *)(*(longlong *)(*unaff_RBX + 0x590) + 0x2498);
    if (iVar1 == -1) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)((longlong)iVar1 * 0x68 + 0x60 + _DAT_180c96150);
    }
    if (cVar2 == '\x06') {
      if ((*(char *)((longlong)unaff_RBX + 0x16d7) == '\0') &&
         (fVar9 = *(float *)(*unaff_RBX + 0x374),
         uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
         uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
         *(uint *)(unaff_RBX + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
        lVar3 = FUN_1805b74c0(unaff_RBX + 1);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(longlong *)(lVar3 + 0x220);
        fVar9 = *(float *)(*unaff_RBX + 0x378);
        uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(unaff_RBX + 0x272) = uVar5;
        unaff_RBX[0x2de] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RBX[0x2df] * 8) -
             (longlong)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)iVar1 * 8) - lVar3) * 1.0);
        *(undefined1 *)((longlong)unaff_RBX + 0x16d7) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)unaff_RBX + 0x16d7) = 0;
    }
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    cVar2 = func_0x0001805213f0(unaff_RBX[0x1d]);
    if (cVar2 == '\0') {
      *(undefined1 *)((longlong)unaff_RBX + 0x16d6) = 0;
    }
    else if ((*(char *)((longlong)unaff_RBX + 0x16d6) == '\0') &&
            (fVar9 = *(float *)(*unaff_RBX + 0x370),
            uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
            uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
            *(uint *)(unaff_RBX + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
      fVar9 = 0.0;
      lVar3 = FUN_1805b74c0(unaff_RBX + 1);
      iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2450);
      if ((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) < 0x2f)) {
LAB_1805ceb8f:
        lVar3 = FUN_1805b74c0(unaff_RBX + 1);
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2498);
        if ((iVar1 != -1) && (0x2e < *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150))) {
          lVar3 = FUN_1805b74c0(unaff_RBX + 1);
          iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2498);
          if ((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) < 0x33)) {
            lVar3 = FUN_1805b74c0(unaff_RBX + 1);
            uVar7 = 1;
            goto LAB_1805cebf9;
          }
        }
      }
      else {
        lVar3 = FUN_1805b74c0(unaff_RBX + 1);
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x590) + 0x2450);
        if ((iVar1 != -1) && (0x32 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150)))
        goto LAB_1805ceb8f;
        lVar3 = FUN_1805b74c0(unaff_RBX + 1);
        uVar4 = func_0x000180534e20(*(undefined8 *)(lVar3 + 0x590),0);
        if ((uVar4 & 0x2000000000) == 0) goto LAB_1805ceb8f;
        lVar3 = FUN_1805b74c0(unaff_RBX + 1);
        uVar7 = 0;
LAB_1805cebf9:
        fVar9 = (float)(**(code **)(**(longlong **)(lVar3 + 0x590) + 0xb8))
                                 (*(longlong **)(lVar3 + 0x590),uVar7);
      }
      fVar8 = *(float *)(*unaff_RBX + 0x378);
      uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RBX + 0x272) = uVar5;
      unaff_RBX[0x2de] =
           *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RBX[0x2df] * 8) -
           (longlong)
           ((((float)(uVar5 - 1) * fVar8 * 4.656613e-10 - fVar8) + 1.0) * fVar9 * -100000.0);
      *(undefined1 *)((longlong)unaff_RBX + 0x16d6) = 1;
    }
  }
  if ((float)(*(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]
             ) * 1e-05 <= 0.0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(unaff_RBX + 1);
  }
  iVar1 = *(int *)(*(longlong *)(unaff_RBX[0x1d] + 0x590) + 0x2498);
  if (iVar1 == -1) {
    cVar2 = -1;
  }
  else {
    cVar2 = *(char *)((longlong)iVar1 * 0x68 + 0x60 + _DAT_180c96150);
  }
  if (cVar2 == '\x06') {
    if (*(char *)((longlong)unaff_RBX + 0x16d5) == '\0') {
      fVar9 = *(float *)(*unaff_RBX + 0x368);
      uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RBX + 0x272) = uVar5;
      if ((float)(uVar5 - 1) * 2.3283064e-10 < fVar9) {
        lVar3 = *unaff_RBX;
        fVar9 = *(float *)(lVar3 + 0x378);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(longlong *)(lVar3 + 0x220);
        uVar5 = uVar5 << 0xd ^ uVar5;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(unaff_RBX + 0x272) = uVar5;
        unaff_RBX[0x2dc] =
             *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RBX[0x2dd] * 8) -
             (longlong)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(longlong *)(&DAT_180c8ed30 + (longlong)iVar1 * 8) - lVar3) * 1.0);
        *(undefined1 *)((longlong)unaff_RBX + 0x16d5) = 1;
      }
    }
  }
  else {
    *(undefined1 *)((longlong)unaff_RBX + 0x16d5) = 0;
  }
  lVar3 = *unaff_RBX;
  cVar2 = func_0x0001805213f0(lVar3);
  if (cVar2 == '\0') {
    *(undefined1 *)((longlong)unaff_RBX + 0x16d4) = 0;
    return;
  }
  if (*(char *)((longlong)unaff_RBX + 0x16d4) != '\0') {
    return;
  }
  fVar9 = *(float *)(lVar3 + 0x368);
  uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
  uVar5 = uVar5 >> 0x11 ^ uVar5;
  uVar5 = uVar5 << 5 ^ uVar5;
  *(uint *)(unaff_RBX + 0x272) = uVar5;
  fVar8 = (float)(uVar5 - 1) * 2.3283064e-10;
  if (fVar9 <= fVar8) {
    return;
  }
  plVar6 = *(longlong **)(lVar3 + 0x590);
  iVar1 = (int)plVar6[0x48a];
  lVar3 = _DAT_180c96150;
  if ((((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150) < 0x2f)) ||
      (0x32 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + _DAT_180c96150))) ||
     (uVar4 = func_0x000180534e20(plVar6,0), fVar8 = extraout_XMM0_Da, (uVar4 & 0x2000000000) == 0))
  {
    iVar1 = (int)plVar6[0x493];
    if (((iVar1 == -1) || (*(int *)((longlong)iVar1 * 0x68 + 0x58 + lVar3) < 0x2f)) ||
       (0x32 < *(int *)((longlong)iVar1 * 0x68 + 0x58 + lVar3))) goto LAB_1805ceec6;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  fVar10 = (float)(**(code **)(*plVar6 + 0xb8))(fVar8,uVar7);
LAB_1805ceec6:
  fVar9 = *(float *)(*unaff_RBX + 0x378);
  uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
  uVar5 = uVar5 >> 0x11 ^ uVar5;
  uVar5 = uVar5 << 5 ^ uVar5;
  *(uint *)(unaff_RBX + 0x272) = uVar5;
  unaff_RBX[0x2dc] =
       *(longlong *)(&DAT_180c8ed30 + (longlong)(int)unaff_RBX[0x2dd] * 8) -
       (longlong)((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) * fVar10 * -100000.0);
  *(undefined1 *)((longlong)unaff_RBX + 0x16d4) = 1;
  return;
}






// 函数: void FUN_1805cef5c(void)
void FUN_1805cef5c(void)

{
  return;
}






