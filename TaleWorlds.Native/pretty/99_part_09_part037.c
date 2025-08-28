#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// $fun 的语义化别名
#define $alias_name $fun


// 99_part_09_part037.c - 6 个函数

// 函数: void FUN_1805ce220(int64_t *param_1)
void FUN_1805ce220(int64_t *param_1)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int *piVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = 1.0;
  if (((((int)param_1[0x2f1] != 0) &&
       (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) -
                      param_1[0x2ed]) * 1e-05)) && (*(uint *)((int64_t)param_1 + 0x178c) < 10)) &&
     ((0x241U >> (*(uint *)((int64_t)param_1 + 0x178c) & 0x1f) & 1) != 0)) {
    lVar3 = func_0x0001805b7270(param_1 + 1);
    if (lVar3 == 0) {
      param_1[0x2f1] = 0;
      param_1[0x2ed] =
           *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) + -0x8000000000000000;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)param_1 + 0x158c) =
             *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
      }
      goto FUN_1805ce79d;
    }
    cVar2 = FUN_1805b7d90(param_1);
    if (cVar2 != '\0') {
      param_1[0x2ed] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ee] * 8) + -100;
      goto FUN_1805ce79d;
    }
  }
  cVar2 = func_0x0001805b7d30(param_1);
  if (cVar2 == '\0') {
    *(uint *)((int64_t)param_1 + 0x159c) = *(uint *)((int64_t)param_1 + 0x159c) | 0x4000;
  }
  plVar1 = param_1 + 1;
  piVar4 = (int *)SystemCore_Executor(plVar1);
  if (*piVar4 == 2) goto FUN_1805ce79d;
  if ((0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ec] * 8) -
                    param_1[0x2eb]) * 1e-05) &&
     (*(int32_t *)((int64_t)param_1 + 0x178c) = 0, *(int *)(*param_1 + 0x1fc) - 1U < 2)) {
    *(uint *)((int64_t)param_1 + 0x158c) =
         *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  }
  piVar4 = (int *)SystemCore_Executor(plVar1);
  if (*piVar4 == 1) {
    if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
      SystemCore_Validator(plVar1);
    }
    if (((*(char *)((int64_t)param_1 + 0xd5) != '\0') &&
        (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) -
                      param_1[0x2dc]) * 1e-05)) &&
       (((lVar3 = func_0x0001805b6e80(plVar1), lVar3 == 0 ||
         (lVar3 = func_0x0001805b6e80(), *(int *)(lVar3 + 0x30) < 1)) ||
        ((((*(uint *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar3 + 8) < 1)) ||
         (lVar3 = func_0x0001805b6e80(plVar1),
         (*(byte *)((int64_t)
                    *(int *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                            *(int64_t *)(lVar3 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10)
         == 0)))))) {
      fVar7 = *(float *)(*param_1 + 0x2e8);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      SystemCore_ResourceHandler0(plVar1);
      fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
      if ((1.0 - fVar6 < fVar7) &&
         ((cVar2 = func_0x0001805b7bd0(param_1), cVar2 != '\0' ||
          (cVar2 = FUN_1805d06b0(), cVar2 == '\0')))) {
        param_1[0x2e9] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
             (int64_t)(*(float *)(*param_1 + 0x2ec) * 100000.0);
        *(int32_t *)((int64_t)param_1 + 0x178c) = 7;
        *(int8_t *)(param_1 + 0x2e4) = 0;
        param_1[0x2de] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
             (int64_t)(*(float *)(*param_1 + 0x2ec) * -100000.0);
      }
    }
    goto FUN_1805ce79d;
  }
  if ((*(byte *)(param_1 + 2) & 0x80) == 0) {
    SystemCore_Validator(plVar1);
  }
  if (*(char *)((int64_t)param_1 + 0xd5) != '\0') {
    if ((*(uint *)(param_1 + 2) & 0x10000000) == 0) {
      FUN_1805d5680(plVar1);
    }
    if ((((int)param_1[0x24] < 2) &&
        (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) -
                      param_1[0x2dc]) * 1e-05)) &&
       (((lVar3 = func_0x0001805b6e80(plVar1), lVar3 == 0 ||
         (lVar3 = func_0x0001805b6e80(), *(int *)(lVar3 + 0x30) < 1)) ||
        ((((*(uint *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar3 + 8) < 1)) ||
         (lVar3 = func_0x0001805b6e80(plVar1),
         (*(byte *)((int64_t)
                    *(int *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 +
                            *(int64_t *)(lVar3 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10)
         == 0)))))) {
      if (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
                       param_1[0x2de]) * 1e-05) {
        piVar4 = (int *)SystemCore_Executor(plVar1);
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
        SystemCore_ResourceHandler0(plVar1);
        fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
        if (fVar7 <= 1.0 - fVar6) goto LAB_1805ce5b6;
      }
      cVar2 = func_0x0001805b7bd0(param_1);
      if ((cVar2 != '\0') || (cVar2 = FUN_1805d06b0(), cVar2 == '\0')) {
        param_1[0x2e9] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2ea] * 8) -
             (int64_t)(*(float *)(*param_1 + 0x2ec) * 100000.0);
        *(int32_t *)((int64_t)param_1 + 0x178c) = 7;
        *(int8_t *)(param_1 + 0x2e4) = 0;
        goto FUN_1805ce79d;
      }
    }
  }
LAB_1805ce5b6:
  *(int32_t *)((int64_t)param_1 + 0x178c) = 0;
  if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
    *(uint *)((int64_t)param_1 + 0x158c) =
         *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
  }
FUN_1805ce79d:
  if (*(int *)((int64_t)param_1 + 0x178c) == 6) {
    if ((*(uint *)(param_1 + 2) & 0x10000000) == 0) {
      FUN_1805d5680(param_1 + 1);
    }
    if ((1 < (int)param_1[0x24]) ||
       (0.0 <= (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
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
        param_1[0x292] = *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x293] * 8);
      }
    }
    else {
      *(int32_t *)((int64_t)param_1 + 0x178c) = 0;
      if (*(int *)(*param_1 + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)param_1 + 0x158c) =
             *(uint *)((int64_t)param_1 + 0x158c) & 0xfffffc3f | 0x4000;
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
  int64_t lVar4;
  uint uVar5;
  int unaff_EBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t unaff_R14;
  float fVar6;
  float fVar7;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  piVar3 = (int *)SystemCore_Executor();
  cVar2 = (char)unaff_EBP;
  if (*piVar3 == 1) {
    if ((*(byte *)(unaff_RSI + 8) & 0x80) == 0) {
      SystemCore_Validator();
    }
    if (((*(char *)(unaff_RSI + 0xcd) != cVar2) &&
        (unaff_XMM8_Da <
         (float)(*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2dd] * 8) - unaff_RDI[0x2dc])
         * unaff_XMM7_Da)) &&
       (((lVar4 = func_0x0001805b6e80(), lVar4 == 0 ||
         (lVar4 = func_0x0001805b6e80(), *(int *)(lVar4 + 0x30) <= unaff_EBP)) ||
        ((((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar4 + 8) <= (short)unaff_EBP)) ||
         (lVar4 = func_0x0001805b6e80(),
         (*(byte *)((int64_t)
                    *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                            *(int64_t *)(lVar4 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10)
         == 0)))))) {
      fVar7 = *(float *)(*unaff_RDI + 0x2e8);
      uVar5 = *(uint *)(unaff_RDI + 0x272) << 0xd ^ *(uint *)(unaff_RDI + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RDI + 0x272) = uVar5;
      SystemCore_ResourceHandler0();
      fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
      if ((unaff_XMM9_Da - fVar6 < fVar7) &&
         ((cVar1 = func_0x0001805b7bd0(), cVar1 != '\0' || (cVar1 = FUN_1805d06b0(), cVar1 == '\0'))
         )) {
        unaff_RDI[0x2e9] =
             *(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2ea] * 8) -
             (int64_t)(*(float *)(*unaff_RDI + 0x2ec) * 100000.0);
        *(int32_t *)((int64_t)unaff_RDI + 0x178c) = 7;
        *(char *)(unaff_RDI + 0x2e4) = cVar2;
        unaff_RDI[0x2de] =
             *(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2df] * 8) -
             (int64_t)(*(float *)(*unaff_RDI + 0x2ec) * -100000.0);
      }
    }
    goto LAB_1805ce793;
  }
  if ((*(byte *)(unaff_RSI + 8) & 0x80) == 0) {
    SystemCore_Validator();
  }
  if (*(char *)(unaff_RSI + 0xcd) != cVar2) {
    if ((*(uint *)(unaff_RSI + 8) & 0x10000000) == 0) {
      FUN_1805d5680();
    }
    if (((*(int *)(unaff_RSI + 0x118) < 2) &&
        (unaff_XMM8_Da <
         (float)(*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2dd] * 8) - unaff_RDI[0x2dc])
         * unaff_XMM7_Da)) &&
       (((lVar4 = func_0x0001805b6e80(), lVar4 == 0 ||
         (lVar4 = func_0x0001805b6e80(), *(int *)(lVar4 + 0x30) <= unaff_EBP)) ||
        ((((*(uint *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar4 + 0xd0))
            >> 9 & 1) != 0 && (*(short *)(lVar4 + 8) <= (short)unaff_EBP)) ||
         (lVar4 = func_0x0001805b6e80(),
         (*(byte *)((int64_t)
                    *(int *)((int64_t)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 +
                            *(int64_t *)(lVar4 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10)
         == 0)))))) {
      if (unaff_XMM8_Da <
          (float)(*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2df] * 8) - unaff_RDI[0x2de])
          * unaff_XMM7_Da) {
        piVar3 = (int *)SystemCore_Executor();
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
        SystemCore_ResourceHandler0();
        fVar6 = (float)powf((float)(uVar5 - 1) * 2.3283064e-10);
        if (fVar7 <= unaff_XMM9_Da - fVar6) goto LAB_1805ce5b6;
      }
      cVar1 = func_0x0001805b7bd0();
      if ((cVar1 != '\0') || (cVar1 = FUN_1805d06b0(), cVar1 == '\0')) {
        unaff_RDI[0x2e9] =
             *(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2ea] * 8) -
             (int64_t)(*(float *)(*unaff_RDI + 0x2ec) * 100000.0);
        *(int32_t *)((int64_t)unaff_RDI + 0x178c) = 7;
        *(char *)(unaff_RDI + 0x2e4) = cVar2;
        goto LAB_1805ce793;
      }
    }
  }
LAB_1805ce5b6:
  *(int *)((int64_t)unaff_RDI + 0x178c) = unaff_EBP;
  if (*(int *)(*unaff_RDI + 0x1fc) - 1U < 2) {
    *(uint *)((int64_t)unaff_RDI + 0x158c) =
         *(uint *)((int64_t)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
  }
LAB_1805ce793:
  if (*(int *)((int64_t)unaff_RDI + 0x178c) == 6) {
    if ((*(uint *)(unaff_RSI + 8) & 0x10000000) == 0) {
      FUN_1805d5680();
    }
    if ((1 < *(int *)(unaff_RSI + 0x118)) ||
       (unaff_XMM8_Da <=
        (float)(*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2df] * 8) - unaff_RDI[0x2de]) *
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
        unaff_RDI[0x292] = *(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x293] * 8);
      }
    }
    else {
      *(int *)((int64_t)unaff_RDI + 0x178c) = unaff_EBP;
      if (*(int *)(*unaff_RDI + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)unaff_RDI + 0x158c) =
             *(uint *)((int64_t)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
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
  int32_t unaff_EBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  int64_t lVar4;
  int64_t unaff_R14;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  if (*(int *)((int64_t)unaff_RDI + 0x178c) == 6) {
    if ((*(uint *)(unaff_RSI + 8) & 0x10000000) == 0) {
      FUN_1805d5680();
    }
    if ((1 < *(int *)(unaff_RSI + 0x118)) ||
       (unaff_XMM8_Da <=
        (float)(*(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x2df] * 8) - unaff_RDI[0x2de]) *
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
        unaff_RDI[0x292] = *(int64_t *)(unaff_R14 + (int64_t)(int)unaff_RDI[0x293] * 8);
      }
    }
    else {
      *(int32_t *)((int64_t)unaff_RDI + 0x178c) = unaff_EBP;
      if (*(int *)(*unaff_RDI + 0x1fc) - 1U < 2) {
        *(uint *)((int64_t)unaff_RDI + 0x158c) =
             *(uint *)((int64_t)unaff_RDI + 0x158c) & 0xfffffc3f | 0x4000;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ce8c0(int64_t *param_1)
void FUN_1805ce8c0(int64_t *param_1)

{
  int iVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
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
  if (0.0 < (float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
                   param_1[0x2de]) * 1e-05) {
    iVar1 = *(int *)(*(int64_t *)(*param_1 + 0x590) + 0x2498);
    if (iVar1 == -1) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)((int64_t)iVar1 * 0x68 + 0x60 + system_system_config);
    }
    if (cVar2 == '\x06') {
      if ((*(char *)((int64_t)param_1 + 0x16d7) == '\0') &&
         (fVar9 = *(float *)(*param_1 + 0x374),
         uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
         uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
         *(uint *)(param_1 + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
        lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(int64_t *)(lVar3 + 0x220);
        fVar9 = *(float *)(*param_1 + 0x378);
        uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(param_1 + 0x272) = uVar5;
        param_1[0x2de] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
             (int64_t)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(int64_t *)(&system_error_code + (int64_t)iVar1 * 8) - lVar3) * 1.0);
        *(int8_t *)((int64_t)param_1 + 0x16d7) = 1;
      }
    }
    else {
      *(int8_t *)((int64_t)param_1 + 0x16d7) = 0;
    }
    if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(param_1 + 1);
    }
    cVar2 = func_0x0001805213f0(param_1[0x1d]);
    if (cVar2 == '\0') {
      *(int8_t *)((int64_t)param_1 + 0x16d6) = 0;
    }
    else if ((*(char *)((int64_t)param_1 + 0x16d6) == '\0') &&
            (fVar9 = *(float *)(*param_1 + 0x370),
            uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272),
            uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
            *(uint *)(param_1 + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
      fVar9 = 0.0;
      lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
      iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2450);
      if ((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config) < 0x2f)) {
LAB_1805ceb8f:
        lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
        iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2498);
        if ((iVar1 != -1) && (0x2e < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config))) {
          lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
          iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2498);
          if ((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config) < 0x33)) {
            lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
            uVar7 = 1;
            goto LAB_1805cebf9;
          }
        }
      }
      else {
        lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
        iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2450);
        if ((iVar1 != -1) && (0x32 < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config)))
        goto LAB_1805ceb8f;
        lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
        uVar4 = func_0x000180534e20(*(uint64_t *)(lVar3 + 0x590),0);
        if ((uVar4 & 0x2000000000) == 0) goto LAB_1805ceb8f;
        lVar3 = SystemCore_MemoryAllocator(param_1 + 1);
        uVar7 = 0;
LAB_1805cebf9:
        fVar9 = (float)(**(code **)(**(int64_t **)(lVar3 + 0x590) + 0xb8))
                                 (*(int64_t **)(lVar3 + 0x590),uVar7);
      }
      fVar8 = *(float *)(*param_1 + 0x378);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      param_1[0x2de] =
           *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2df] * 8) -
           (int64_t)
           ((((float)(uVar5 - 1) * fVar8 * 4.656613e-10 - fVar8) + 1.0) * fVar9 * -100000.0);
      *(int8_t *)((int64_t)param_1 + 0x16d6) = 1;
    }
  }
  if ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) - param_1[0x2dc]) *
      1e-05 <= 0.0) {
    return;
  }
  if ((*(uint *)(param_1 + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(param_1 + 1);
  }
  iVar1 = *(int *)(*(int64_t *)(param_1[0x1d] + 0x590) + 0x2498);
  if (iVar1 == -1) {
    cVar2 = -1;
  }
  else {
    cVar2 = *(char *)((int64_t)iVar1 * 0x68 + 0x60 + system_system_config);
  }
  if (cVar2 == '\x06') {
    if (*(char *)((int64_t)param_1 + 0x16d5) == '\0') {
      fVar9 = *(float *)(*param_1 + 0x368);
      uVar5 = *(uint *)(param_1 + 0x272) << 0xd ^ *(uint *)(param_1 + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(param_1 + 0x272) = uVar5;
      if ((float)(uVar5 - 1) * 2.3283064e-10 < fVar9) {
        lVar3 = *param_1;
        fVar9 = *(float *)(lVar3 + 0x378);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(int64_t *)(lVar3 + 0x220);
        uVar5 = uVar5 << 0xd ^ uVar5;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(param_1 + 0x272) = uVar5;
        param_1[0x2dc] =
             *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) -
             (int64_t)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(int64_t *)(&system_error_code + (int64_t)iVar1 * 8) - lVar3) * 1.0);
        *(int8_t *)((int64_t)param_1 + 0x16d5) = 1;
      }
    }
  }
  else {
    *(int8_t *)((int64_t)param_1 + 0x16d5) = 0;
  }
  lVar3 = *param_1;
  cVar2 = func_0x0001805213f0(lVar3);
  if (cVar2 == '\0') {
    *(int8_t *)((int64_t)param_1 + 0x16d4) = 0;
    return;
  }
  if (*(char *)((int64_t)param_1 + 0x16d4) != '\0') {
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
  plVar6 = *(int64_t **)(lVar3 + 0x590);
  iVar1 = (int)plVar6[0x48a];
  lVar3 = system_system_config;
  if ((((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config) < 0x2f)) ||
      (0x32 < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config))) ||
     (uVar4 = func_0x000180534e20(plVar6,0), fVar8 = extraout_XMM0_Da, (uVar4 & 0x2000000000) == 0))
  {
    iVar1 = (int)plVar6[0x493];
    if (((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + lVar3) < 0x2f)) ||
       (0x32 < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + lVar3))) goto LAB_1805ceec6;
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
       *(int64_t *)(&system_error_code + (int64_t)(int)param_1[0x2dd] * 8) -
       (int64_t)((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) * fVar10 * -100000.0);
  *(int8_t *)((int64_t)param_1 + 0x16d4) = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805ce8f7(void)
void FUN_1805ce8f7(void)

{
  int iVar1;
  char cVar2;
  int64_t in_RAX;
  int64_t lVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *unaff_RBX;
  float fVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  if (0.0 < (float)(*(int64_t *)(&system_error_code + in_RAX * 8) - unaff_RBX[0x2de]) * 1e-05) {
    iVar1 = *(int *)(*(int64_t *)(*unaff_RBX + 0x590) + 0x2498);
    if (iVar1 == -1) {
      cVar2 = -1;
    }
    else {
      cVar2 = *(char *)((int64_t)iVar1 * 0x68 + 0x60 + system_system_config);
    }
    if (cVar2 == '\x06') {
      if ((*(char *)((int64_t)unaff_RBX + 0x16d7) == '\0') &&
         (fVar9 = *(float *)(*unaff_RBX + 0x374),
         uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
         uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
         *(uint *)(unaff_RBX + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
        lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(int64_t *)(lVar3 + 0x220);
        fVar9 = *(float *)(*unaff_RBX + 0x378);
        uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(unaff_RBX + 0x272) = uVar5;
        unaff_RBX[0x2de] =
             *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2df] * 8) -
             (int64_t)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(int64_t *)(&system_error_code + (int64_t)iVar1 * 8) - lVar3) * 1.0);
        *(int8_t *)((int64_t)unaff_RBX + 0x16d7) = 1;
      }
    }
    else {
      *(int8_t *)((int64_t)unaff_RBX + 0x16d7) = 0;
    }
    if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
      func_0x0001805d4cd0(unaff_RBX + 1);
    }
    cVar2 = func_0x0001805213f0(unaff_RBX[0x1d]);
    if (cVar2 == '\0') {
      *(int8_t *)((int64_t)unaff_RBX + 0x16d6) = 0;
    }
    else if ((*(char *)((int64_t)unaff_RBX + 0x16d6) == '\0') &&
            (fVar9 = *(float *)(*unaff_RBX + 0x370),
            uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272),
            uVar5 = uVar5 >> 0x11 ^ uVar5, uVar5 = uVar5 << 5 ^ uVar5,
            *(uint *)(unaff_RBX + 0x272) = uVar5, (float)(uVar5 - 1) * 2.3283064e-10 < fVar9)) {
      fVar9 = 0.0;
      lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
      iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2450);
      if ((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config) < 0x2f)) {
LAB_1805ceb8f:
        lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
        iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2498);
        if ((iVar1 != -1) && (0x2e < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config))) {
          lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
          iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2498);
          if ((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config) < 0x33)) {
            lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
            uVar7 = 1;
            goto LAB_1805cebf9;
          }
        }
      }
      else {
        lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
        iVar1 = *(int *)(*(int64_t *)(lVar3 + 0x590) + 0x2450);
        if ((iVar1 != -1) && (0x32 < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config)))
        goto LAB_1805ceb8f;
        lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
        uVar4 = func_0x000180534e20(*(uint64_t *)(lVar3 + 0x590),0);
        if ((uVar4 & 0x2000000000) == 0) goto LAB_1805ceb8f;
        lVar3 = SystemCore_MemoryAllocator(unaff_RBX + 1);
        uVar7 = 0;
LAB_1805cebf9:
        fVar9 = (float)(**(code **)(**(int64_t **)(lVar3 + 0x590) + 0xb8))
                                 (*(int64_t **)(lVar3 + 0x590),uVar7);
      }
      fVar8 = *(float *)(*unaff_RBX + 0x378);
      uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RBX + 0x272) = uVar5;
      unaff_RBX[0x2de] =
           *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2df] * 8) -
           (int64_t)
           ((((float)(uVar5 - 1) * fVar8 * 4.656613e-10 - fVar8) + 1.0) * fVar9 * -100000.0);
      *(int8_t *)((int64_t)unaff_RBX + 0x16d6) = 1;
    }
  }
  if ((float)(*(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2dd] * 8) - unaff_RBX[0x2dc]
             ) * 1e-05 <= 0.0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 2) & 0x200) == 0) {
    func_0x0001805d4cd0(unaff_RBX + 1);
  }
  iVar1 = *(int *)(*(int64_t *)(unaff_RBX[0x1d] + 0x590) + 0x2498);
  if (iVar1 == -1) {
    cVar2 = -1;
  }
  else {
    cVar2 = *(char *)((int64_t)iVar1 * 0x68 + 0x60 + system_system_config);
  }
  if (cVar2 == '\x06') {
    if (*(char *)((int64_t)unaff_RBX + 0x16d5) == '\0') {
      fVar9 = *(float *)(*unaff_RBX + 0x368);
      uVar5 = *(uint *)(unaff_RBX + 0x272) << 0xd ^ *(uint *)(unaff_RBX + 0x272);
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      *(uint *)(unaff_RBX + 0x272) = uVar5;
      if ((float)(uVar5 - 1) * 2.3283064e-10 < fVar9) {
        lVar3 = *unaff_RBX;
        fVar9 = *(float *)(lVar3 + 0x378);
        iVar1 = *(int *)(lVar3 + 0x228);
        lVar3 = *(int64_t *)(lVar3 + 0x220);
        uVar5 = uVar5 << 0xd ^ uVar5;
        uVar5 = uVar5 >> 0x11 ^ uVar5;
        uVar5 = uVar5 << 5 ^ uVar5;
        *(uint *)(unaff_RBX + 0x272) = uVar5;
        unaff_RBX[0x2dc] =
             *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2dd] * 8) -
             (int64_t)
             ((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) *
              (float)(*(int64_t *)(&system_error_code + (int64_t)iVar1 * 8) - lVar3) * 1.0);
        *(int8_t *)((int64_t)unaff_RBX + 0x16d5) = 1;
      }
    }
  }
  else {
    *(int8_t *)((int64_t)unaff_RBX + 0x16d5) = 0;
  }
  lVar3 = *unaff_RBX;
  cVar2 = func_0x0001805213f0(lVar3);
  if (cVar2 == '\0') {
    *(int8_t *)((int64_t)unaff_RBX + 0x16d4) = 0;
    return;
  }
  if (*(char *)((int64_t)unaff_RBX + 0x16d4) != '\0') {
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
  plVar6 = *(int64_t **)(lVar3 + 0x590);
  iVar1 = (int)plVar6[0x48a];
  lVar3 = system_system_config;
  if ((((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config) < 0x2f)) ||
      (0x32 < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + system_system_config))) ||
     (uVar4 = func_0x000180534e20(plVar6,0), fVar8 = extraout_XMM0_Da, (uVar4 & 0x2000000000) == 0))
  {
    iVar1 = (int)plVar6[0x493];
    if (((iVar1 == -1) || (*(int *)((int64_t)iVar1 * 0x68 + 0x58 + lVar3) < 0x2f)) ||
       (0x32 < *(int *)((int64_t)iVar1 * 0x68 + 0x58 + lVar3))) goto LAB_1805ceec6;
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
       *(int64_t *)(&system_error_code + (int64_t)(int)unaff_RBX[0x2dd] * 8) -
       (int64_t)((((float)(uVar5 - 1) * fVar9 * 4.656613e-10 - fVar9) + 1.0) * fVar10 * -100000.0);
  *(int8_t *)((int64_t)unaff_RBX + 0x16d4) = 1;
  return;
}






// 函数: void FUN_1805cef5c(void)
void FUN_1805cef5c(void)

{
  return;
}






