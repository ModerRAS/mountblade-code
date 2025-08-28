#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_09_part042.c - 9 个函数

// 函数: void FUN_1805d057f(void)
void FUN_1805d057f(void)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  longlong *unaff_RSI;
  longlong unaff_R14;
  float fVar4;
  float fVar5;
  
  piVar2 = (int *)FUN_1805b7660(unaff_RSI + 1);
  if (*piVar2 == 1) {
    fVar5 = *(float *)(*unaff_RSI + 0x2e8);
  }
  else {
    fVar5 = *(float *)(*unaff_RSI + 0x350);
  }
  uVar3 = *(uint *)(unaff_RSI + 0x272) << 0xd ^ *(uint *)(unaff_RSI + 0x272);
  uVar3 = uVar3 >> 0x11 ^ uVar3;
  uVar3 = uVar3 << 5 ^ uVar3;
  *(uint *)(unaff_RSI + 0x272) = uVar3;
  FUN_1805b7740(unaff_RSI + 1);
  fVar4 = (float)powf((float)(uVar3 - 1) * 2.3283064e-10);
  if ((1.0 - fVar4 < fVar5) &&
     (((unaff_RSI[0x41e] != 0 &&
       (((int)unaff_RSI[0x295] - 5U < 2 ||
        (((*(byte *)((longlong)unaff_RSI + 0x209c) & 1) != 0 &&
         ((*(byte *)(unaff_RSI + 0x413) & 1) != 0)))))) || (cVar1 = FUN_1805d06b0(), cVar1 == '\0'))
     )) {
    unaff_RSI[0x2e9] =
         *(longlong *)(unaff_R14 + (longlong)(int)unaff_RSI[0x2ea] * 8) -
         (longlong)(*(float *)(*unaff_RSI + 0x31c) * 100000.0);
    *(int32_t *)((longlong)unaff_RSI + 0x178c) = 7;
    *(int8_t *)(unaff_RSI + 0x2e4) = 0;
  }
  return;
}






// 函数: void FUN_1805d061e(void)
void FUN_1805d061e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_R14;
  
  if (((unaff_RSI[0x41e] == 0) ||
      ((1 < (int)unaff_RSI[0x295] - 5U &&
       (((*(byte *)((longlong)unaff_RSI + 0x209c) & 1) == 0 ||
        ((*(byte *)(unaff_RSI + 0x413) & 1) == 0)))))) && (cVar1 = FUN_1805d06b0(), cVar1 != '\0'))
  {
    return;
  }
  unaff_RSI[0x2e9] =
       *(longlong *)(unaff_R14 + (longlong)(int)unaff_RSI[0x2ea] * 8) -
       (longlong)(*(float *)(*unaff_RSI + 0x31c) * 100000.0);
  *(int32_t *)((longlong)unaff_RSI + 0x178c) = 7;
  *(int8_t *)(unaff_RSI + 0x2e4) = 0;
  return;
}






// 函数: void FUN_1805d0697(void)
void FUN_1805d0697(void)

{
  return;
}



bool FUN_1805d06b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint64_t *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  uint64_t uStackX_8;
  uint64_t uStackX_10;
  uint64_t uStackX_18;
  float fStackX_20;
  float fStackX_24;
  
  lVar8 = 0;
  iVar10 = 0;
  if ((char)param_1[0x438] == '\0') {
    iVar5 = *(int *)((longlong)param_1 + 0x14b4);
  }
  else {
    iVar5 = *(int *)((longlong)param_1 + 0x21c4);
  }
  if (-1 < iVar5) {
    lVar1 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x3778 + param_1[0x291]);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != '\0')) {
      lVar1 = *(longlong *)(*param_1 + 0x9d8);
      if ((char)param_1[0x438] == '\0') {
        iVar5 = *(int *)((longlong)param_1 + 0x14b4);
      }
      else {
        iVar5 = *(int *)((longlong)param_1 + 0x21c4);
      }
      lVar2 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x3a78 + param_1[0x291]);
      if ((((char)param_1[0x2e] == '\0') || (param_1[0x2c] != lVar1)) || (param_1[0x2d] != lVar2)) {
        if (((lVar1 == 0) || (lVar2 == 0)) || (lVar1 == lVar2)) {
          param_1[0x2c] = lVar1;
          param_1[0x2d] = lVar2;
          *(int32_t *)((longlong)param_1 + 0x174) = 0;
          *(int8_t *)(param_1 + 0x2e) = 1;
        }
        else {
          if ((*(byte *)(param_1 + 2) & 1) == 0) {
            FUN_1805d3210(param_1 + 1);
          }
          uStackX_10 = param_1[8];
          lVar6 = func_0x0001805d1df0(param_1);
          uVar3 = *(uint64_t *)(*(longlong *)(lVar6 + 0x20) + 0xc);
          uStackX_8._0_4_ = (float)uVar3;
          uStackX_8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          fVar11 = (float)uStackX_8 - (float)uStackX_10;
          fVar12 = uStackX_8._4_4_ - uStackX_10._4_4_;
          uStackX_18 = CONCAT44(fVar12,fVar11);
          uStackX_8 = uVar3;
          lVar6 = FUN_18038b490(lVar1,&uStackX_10,&uStackX_18,1);
          fStackX_20 = -fVar11;
          fStackX_24 = -fVar12;
          lVar7 = FUN_18038b490(lVar2,&uStackX_8,&fStackX_20,1);
          iVar10 = 0;
          if ((lVar6 != 0) && (iVar10 = 0, lVar7 != 0)) {
            if ((*(byte *)(lVar6 + 0x21) & 1) == 0) {
              iVar10 = 0;
              if ((*(char *)(lVar6 + 0x20) == '\x02') &&
                 (lVar8 = *(longlong *)(lVar6 + 0x10), iVar10 = 0, lVar8 == lVar1)) {
                lVar8 = *(longlong *)(lVar6 + 0x18);
              }
            }
            else {
              iVar10 = 1;
            }
            bVar4 = true;
            if ((*(byte *)(lVar7 + 0x21) & 1) == 0) {
              if (*(char *)(lVar7 + 0x20) == '\x02') {
                lVar8 = *(longlong *)(lVar7 + 0x10);
                if (lVar8 == lVar2) {
                  lVar8 = *(longlong *)(lVar7 + 0x18);
                }
                bVar4 = false;
              }
            }
            else {
              iVar10 = iVar10 + 1;
            }
            if ((iVar10 == 1) && (lVar8 != 0)) {
              if (bVar4) {
                uStackX_18 = CONCAT44(fVar12,fVar11) ^ 0x8000000080000000;
              }
              puVar9 = &uStackX_8;
              if (!bVar4) {
                puVar9 = &uStackX_10;
              }
              lVar8 = FUN_18038b490(lVar8,puVar9,&uStackX_18,0);
              if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x21) & 1) != 0)) {
                iVar10 = 2;
              }
            }
          }
          param_1[0x2c] = lVar1;
          param_1[0x2d] = lVar2;
          *(int *)((longlong)param_1 + 0x174) = iVar10;
          *(int8_t *)(param_1 + 0x2e) = 1;
        }
      }
      else {
        iVar10 = *(int *)((longlong)param_1 + 0x174);
      }
      goto LAB_1805d096f;
    }
  }
  *(int8_t *)(param_1 + 0x2e) = 0;
LAB_1805d096f:
  if ((*(byte *)(param_1 + 2) & 0x10) == 0) {
    FUN_1805d3770(param_1 + 1);
  }
  return (int)((*(float *)((longlong)param_1 + 0xa4) <= 0.2 &&
               *(float *)((longlong)param_1 + 0xa4) != 0.2) + 1) <= iVar10;
}



bool FUN_1805d06d8(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  bool bVar4;
  int in_EAX;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint64_t *puVar9;
  longlong *unaff_RBX;
  char cVar10;
  longlong unaff_RSI;
  int unaff_EDI;
  int32_t extraout_XMM0_Da;
  float fVar11;
  float fVar12;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  ulonglong in_stack_00000090;
  float fStack0000000000000098;
  float fStack000000000000009c;
  
  cVar10 = (char)unaff_RSI;
  if (-1 < in_EAX) {
    lVar1 = *(longlong *)((longlong)in_EAX * 0xa60 + 0x3778 + *(longlong *)(param_1 + 0x1488));
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x8be) != cVar10)) {
      lVar1 = *(longlong *)(*unaff_RBX + 0x9d8);
      if (param_2 == '\0') {
        iVar5 = *(int *)((longlong)unaff_RBX + 0x14b4);
      }
      else {
        iVar5 = *(int *)((longlong)unaff_RBX + 0x21c4);
      }
      lVar2 = *(longlong *)((longlong)iVar5 * 0xa60 + 0x3a78 + *(longlong *)(param_1 + 0x1488));
      if ((((char)unaff_RBX[0x2e] == cVar10) || (unaff_RBX[0x2c] != lVar1)) ||
         (unaff_RBX[0x2d] != lVar2)) {
        if (((lVar1 == 0) || (lVar2 == 0)) || (lVar1 == lVar2)) {
          unaff_RBX[0x2c] = lVar1;
          unaff_RBX[0x2d] = lVar2;
          *(int *)((longlong)unaff_RBX + 0x174) = (int)unaff_RSI;
          *(int8_t *)(unaff_RBX + 0x2e) = 1;
        }
        else {
          if ((*(byte *)(unaff_RBX + 2) & 1) == 0) {
            FUN_1805d3210(unaff_RBX + 1);
          }
          _fStack0000000000000088 = unaff_RBX[8];
          lVar6 = func_0x0001805d1df0();
          uVar3 = *(uint64_t *)(*(longlong *)(lVar6 + 0x20) + 0xc);
          fStack0000000000000080 = (float)uVar3;
          fStack0000000000000084 = (float)((ulonglong)uVar3 >> 0x20);
          fVar11 = fStack0000000000000080 - fStack0000000000000088;
          fVar12 = fStack0000000000000084 - fStack000000000000008c;
          in_stack_00000090 = CONCAT44(fVar12,fVar11);
          _fStack0000000000000080 = uVar3;
          lVar6 = FUN_18038b490(lVar1,&stack0x00000088,&stack0x00000090,1);
          fStack0000000000000098 = -fVar11;
          fStack000000000000009c = -fVar12;
          lVar7 = FUN_18038b490(lVar2,&stack0x00000080,&stack0x00000098,1);
          if ((lVar6 != 0) && (lVar7 != 0)) {
            lVar8 = unaff_RSI;
            if ((*(byte *)(lVar6 + 0x21) & 1) == 0) {
              if ((*(char *)(lVar6 + 0x20) == '\x02') &&
                 (lVar8 = *(longlong *)(lVar6 + 0x10), lVar8 == lVar1)) {
                lVar8 = *(longlong *)(lVar6 + 0x18);
              }
            }
            else {
              unaff_EDI = 1;
            }
            bVar4 = true;
            if ((*(byte *)(lVar7 + 0x21) & 1) == 0) {
              if (*(char *)(lVar7 + 0x20) == '\x02') {
                lVar8 = *(longlong *)(lVar7 + 0x10);
                if (lVar8 == lVar2) {
                  lVar8 = *(longlong *)(lVar7 + 0x18);
                }
                bVar4 = false;
              }
            }
            else {
              unaff_EDI = unaff_EDI + 1;
            }
            if ((unaff_EDI == 1) && (lVar8 != 0)) {
              if (bVar4) {
                in_stack_00000090 = CONCAT44(fVar12,fVar11) ^ 0x8000000080000000;
              }
              puVar9 = (uint64_t *)&stack0x00000080;
              if (!bVar4) {
                puVar9 = (uint64_t *)&stack0x00000088;
              }
              lVar6 = FUN_18038b490(extraout_XMM0_Da,puVar9,&stack0x00000090,0);
              if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x21) & 1) != 0)) {
                unaff_EDI = 2;
              }
            }
          }
          unaff_RBX[0x2c] = lVar1;
          unaff_RBX[0x2d] = lVar2;
          *(int *)((longlong)unaff_RBX + 0x174) = unaff_EDI;
          *(int8_t *)(unaff_RBX + 0x2e) = 1;
        }
      }
      else {
        unaff_EDI = *(int *)((longlong)unaff_RBX + 0x174);
      }
      goto LAB_1805d096f;
    }
  }
  *(char *)(unaff_RBX + 0x2e) = cVar10;
LAB_1805d096f:
  if ((*(byte *)(unaff_RBX + 2) & 0x10) == 0) {
    FUN_1805d3770(unaff_RBX + 1);
  }
  return (int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                       *(float *)((longlong)unaff_RBX + 0xa4) <= 0.2 &&
                       *(float *)((longlong)unaff_RBX + 0xa4) != 0.2) + 1 <= unaff_EDI;
}



bool FUN_1805d078a(void)

{
  uint64_t uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t *puVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int unaff_EDI;
  longlong unaff_R14;
  bool in_ZF;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  float fVar7;
  float fVar8;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  ulonglong in_stack_00000090;
  float in_stack_00000098;
  float fStack000000000000009c;
  
  if (in_ZF) {
    FUN_1805d3210(unaff_RBX + 8);
  }
  _fStack0000000000000088 = *(uint64_t *)(unaff_RBX + 0x40);
  lVar3 = func_0x0001805d1df0();
  uVar1 = *(uint64_t *)(*(longlong *)(lVar3 + 0x20) + 0xc);
  fStack0000000000000080 = (float)uVar1;
  fStack0000000000000084 = (float)((ulonglong)uVar1 >> 0x20);
  fVar7 = fStack0000000000000080 - fStack0000000000000088;
  fVar8 = fStack0000000000000084 - fStack000000000000008c;
  in_stack_00000090 = CONCAT44(fVar8,fVar7);
  _fStack0000000000000080 = uVar1;
  lVar3 = FUN_18038b490(extraout_XMM0_Da,&stack0x00000088,&stack0x00000090,1);
  in_stack_00000098 = -fVar7;
  fStack000000000000009c = -fVar8;
  lVar4 = FUN_18038b490(extraout_XMM0_Da_00,&stack0x00000080,&stack0x00000098,1);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    lVar5 = unaff_RSI;
    if ((*(byte *)(lVar3 + 0x21) & 1) == 0) {
      if ((*(char *)(lVar3 + 0x20) == '\x02') &&
         (lVar5 = *(longlong *)(lVar3 + 0x10), lVar5 == unaff_RBP)) {
        lVar5 = *(longlong *)(lVar3 + 0x18);
      }
    }
    else {
      unaff_EDI = 1;
    }
    bVar2 = true;
    if ((*(byte *)(lVar4 + 0x21) & 1) == 0) {
      if (*(char *)(lVar4 + 0x20) == '\x02') {
        lVar5 = *(longlong *)(lVar4 + 0x10);
        if (lVar5 == unaff_R14) {
          lVar5 = *(longlong *)(lVar4 + 0x18);
        }
        bVar2 = false;
      }
    }
    else {
      unaff_EDI = unaff_EDI + 1;
    }
    if ((unaff_EDI == 1) && (lVar5 != 0)) {
      if (bVar2) {
        in_stack_00000090 = CONCAT44(fVar8,fVar7) ^ 0x8000000080000000;
      }
      puVar6 = (uint64_t *)&stack0x00000080;
      if (!bVar2) {
        puVar6 = (uint64_t *)&stack0x00000088;
      }
      lVar3 = FUN_18038b490(extraout_XMM0_Da_01,puVar6,&stack0x00000090,0);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x21) & 1) != 0)) {
        unaff_EDI = 2;
      }
    }
  }
  *(longlong *)(unaff_RBX + 0x160) = unaff_RBP;
  *(longlong *)(unaff_RBX + 0x168) = unaff_R14;
  *(int *)(unaff_RBX + 0x174) = unaff_EDI;
  *(int8_t *)(unaff_RBX + 0x170) = 1;
  if ((*(byte *)(unaff_RBX + 0x10) & 0x10) == 0) {
    FUN_1805d3770(unaff_RBX + 8);
  }
  return (int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                       *(float *)(unaff_RBX + 0xa4) <= 0.2 && *(float *)(unaff_RBX + 0xa4) != 0.2) +
         1 <= unaff_EDI;
}



bool FUN_1805d094b(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  int unaff_EDI;
  uint64_t unaff_R14;
  
  *(uint64_t *)(unaff_RBX + 0x160) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x168) = unaff_R14;
  *(int *)(unaff_RBX + 0x174) = (int)unaff_RSI;
  *(int8_t *)(unaff_RBX + 0x170) = 1;
  if ((*(byte *)(unaff_RBX + 0x10) & 0x10) == 0) {
    FUN_1805d3770(unaff_RBX + 8);
  }
  return (int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                       *(float *)(unaff_RBX + 0xa4) <= 0.2 && *(float *)(unaff_RBX + 0xa4) != 0.2) +
         1 <= unaff_EDI;
}



bool FUN_1805d097f(void)

{
  longlong unaff_RBX;
  uint64_t unaff_RSI;
  int unaff_EDI;
  
  FUN_1805d3770(unaff_RBX + 8);
  return (int)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),
                       *(float *)(unaff_RBX + 0xa4) <= 0.2 && *(float *)(unaff_RBX + 0xa4) != 0.2) +
         1 <= unaff_EDI;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d09b0(longlong *param_1)
void FUN_1805d09b0(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint64_t uVar3;
  float fVar4;
  int32_t uStackX_8;
  int32_t uStackX_c;
  
  uVar1 = *(ushort *)(param_1 + 0x26);
  if (uVar1 == 0) {
    return;
  }
  if ((char)uVar1 < '\0') {
    *(uint *)((longlong)param_1 + 0x209c) = *(uint *)((longlong)param_1 + 0x209c) | 0x800;
    uVar1 = *(ushort *)(param_1 + 0x26);
    *(int32_t *)(param_1 + 0x29a) = 0xffffffff;
  }
  if ((uVar1 & 0x10) != 0) {
    *(int32_t *)((longlong)param_1 + 0x1b6c) = 0;
    *(int8_t *)(param_1 + 0x2f5) = 0;
    param_1[0x2f3] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x2f4] * 8);
    *(int32_t *)((longlong)param_1 + 0x1c0c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c14) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c1c) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c24) = 0xffffffff;
    *(int32_t *)((longlong)param_1 + 0x1c2c) = 0;
    *(int32_t *)((longlong)param_1 + 0x200c) = 0;
    *(int8_t *)(param_1 + 0x389) = 0;
    param_1[0x387] = *(longlong *)(&system_error_code + (longlong)(int)param_1[0x388] * 8);
    if ((*(uint *)((longlong)param_1 + 0x209c) >> 0xb & 1) == 0) {
      FUN_180508220(param_1);
    }
    FUN_180508010(param_1);
    uVar1 = *(ushort *)(param_1 + 0x26);
  }
  if ((uVar1 & 8) != 0) {
    FUN_1805d5c90(param_1);
    uVar1 = *(ushort *)(param_1 + 0x26);
  }
  if ((uVar1 & 1) == 0) goto LAB_1805d0bad;
  if (*(int *)(*param_1 + 0x568) == 1) {
    fVar4 = (float)FUN_1805c9600(param_1,2,0,0,0,0,0);
    if (fVar4 <= 0.0) goto LAB_1805d0af2;
    uVar3 = 1;
  }
  else {
LAB_1805d0af2:
    uVar3 = 0;
  }
  FUN_1805b77f0(param_1,uVar3);
  if ((char)param_1[0x386] == '\0') {
    param_1[3] = 0;
    param_1[4] = 0;
    *(int32_t *)(param_1 + 5) = 0;
    *(int32_t *)((longlong)param_1 + 0x2c) = 0xbf800000;
    param_1[6] = 0;
    *(int32_t *)(param_1 + 7) = 0xffffffff;
    if ((((int)param_1[0x295] - 2U & 0xfffffffd) == 0) ||
       ((((lVar2 = func_0x0001805b6e80(param_1 + 1), lVar2 != 0 &&
          (lVar2 = func_0x0001805b6e80(), 0 < *(int *)(lVar2 + 0x30))) &&
         (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0))
           & 0x200) == 0 || (0 < *(short *)(lVar2 + 8))))) &&
        (lVar2 = func_0x0001805b6e80(),
        (*(byte *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
         1 & 1) != 0)))) {
      FUN_180508010(param_1);
    }
  }
  else {
    FUN_1805d5a50(param_1 + 1);
  }
LAB_1805d0bad:
  uVar1 = *(ushort *)(param_1 + 0x26);
  if ((uVar1 & 2) != 0) {
    FUN_1805d62c0(param_1);
    uVar1 = *(ushort *)(param_1 + 0x26);
  }
  if ((uVar1 & 4) != 0) {
    FUN_1805be620(param_1,*(int32_t *)((longlong)param_1 + 0x134));
    uVar1 = *(ushort *)(param_1 + 0x26);
  }
  if ((uVar1 & 0x20) != 0) {
    if ((*(uint *)(param_1 + 2) & 0x20) == 0) {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x8f8) + 0x9e8);
      param_1[0x15] = lVar2;
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x20;
    }
    else {
      lVar2 = param_1[0x15];
    }
    if ((lVar2 != 0) &&
       ((*(byte *)((longlong)
                   *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                           *(longlong *)(lVar2 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10) !=
        0)) {
      func_0x0001805cef70(param_1);
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x26);
  if ((uVar1 & 0x40) != 0) {
    uStackX_8 = (int32_t)param_1[0x27];
    uStackX_c = 0xffffffff;
    FUN_1805d1c80(param_1,&uStackX_8,0);
    uVar1 = *(ushort *)(param_1 + 0x26);
  }
  if ((uVar1 & 0x100) != 0) {
    *(int32_t *)(param_1 + 0x2f2) = 0;
  }
  if ((uVar1 & 0x200) != 0) {
    *(int32_t *)(param_1 + 0x277) = 0;
  }
  *(int16_t *)(param_1 + 0x26) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d09c9(longlong param_1)
void FUN_1805d09c9(longlong param_1)

{
  ushort in_AX;
  ushort uVar1;
  longlong lVar2;
  uint64_t uVar3;
  longlong *unaff_RBX;
  float in_XMM0_Da;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  int32_t in_stack_00000060;
  int32_t uStack0000000000000064;
  
  if ((char)in_AX < '\0') {
    *(uint *)(param_1 + 0x209c) = *(uint *)(param_1 + 0x209c) | 0x800;
    in_AX = *(ushort *)(param_1 + 0x130);
    *(int32_t *)(param_1 + 0x14d0) = 0xffffffff;
  }
  if ((in_AX & 0x10) != 0) {
    *(int32_t *)(param_1 + 0x1b6c) = 0;
    *(int8_t *)(param_1 + 0x17a8) = 0;
    unaff_RBX[0x2f3] = *(longlong *)(&system_error_code + (longlong)*(int *)(param_1 + 0x17a0) * 8);
    *(int32_t *)((longlong)unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c2c) = 0;
    *(int32_t *)((longlong)unaff_RBX + 0x200c) = 0;
    *(int8_t *)(unaff_RBX + 0x389) = 0;
    unaff_RBX[0x387] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x388] * 8);
    if ((*(uint *)((longlong)unaff_RBX + 0x209c) >> 0xb & 1) == 0) {
      FUN_180508220();
    }
    in_XMM0_Da = (float)FUN_180508010();
    in_AX = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((in_AX & 8) != 0) {
    in_XMM0_Da = (float)FUN_1805d5c90();
    in_AX = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((in_AX & 1) == 0) goto LAB_1805d0bad;
  if (*(int *)(*unaff_RBX + 0x568) == 1) {
    in_XMM0_Da = (float)FUN_1805c9600(in_XMM0_Da,2,0,0,0);
    if (in_XMM0_Da <= 0.0) goto LAB_1805d0af2;
    uVar3 = 1;
  }
  else {
LAB_1805d0af2:
    uVar3 = 0;
  }
  FUN_1805b77f0(in_XMM0_Da,uVar3);
  if ((char)unaff_RBX[0x386] != '\0') {
    in_XMM0_Da = (float)FUN_1805d5a50(unaff_RBX + 1);
    goto LAB_1805d0bad;
  }
  unaff_RBX[3] = 0;
  unaff_RBX[4] = 0;
  *(int32_t *)(unaff_RBX + 5) = 0;
  *(int32_t *)((longlong)unaff_RBX + 0x2c) = 0xbf800000;
  unaff_RBX[6] = 0;
  *(int32_t *)(unaff_RBX + 7) = 0xffffffff;
  if (((int)unaff_RBX[0x295] - 2U & 0xfffffffd) != 0) {
    lVar2 = func_0x0001805b6e80(unaff_RBX + 1);
    in_XMM0_Da = extraout_XMM0_Da;
    if (lVar2 == 0) goto LAB_1805d0bad;
    lVar2 = func_0x0001805b6e80();
    in_XMM0_Da = extraout_XMM0_Da_00;
    if (*(int *)(lVar2 + 0x30) < 1) goto LAB_1805d0bad;
    if (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) &
         0x200) != 0) && (*(short *)(lVar2 + 8) < 1)) goto LAB_1805d0bad;
    lVar2 = func_0x0001805b6e80();
    in_XMM0_Da = extraout_XMM0_Da_01;
    if ((*(byte *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
         1 & 1) == 0) goto LAB_1805d0bad;
  }
  in_XMM0_Da = (float)FUN_180508010();
LAB_1805d0bad:
  uVar1 = *(ushort *)(unaff_RBX + 0x26);
  if ((uVar1 & 2) != 0) {
    in_XMM0_Da = (float)FUN_1805d62c0();
    uVar1 = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((uVar1 & 4) != 0) {
    in_XMM0_Da = (float)FUN_1805be620(in_XMM0_Da,*(int32_t *)((longlong)unaff_RBX + 0x134));
    uVar1 = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((uVar1 & 0x20) != 0) {
    if ((*(uint *)(unaff_RBX + 2) & 0x20) == 0) {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
      unaff_RBX[0x15] = lVar2;
      *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
    }
    else {
      lVar2 = unaff_RBX[0x15];
    }
    if ((lVar2 != 0) &&
       ((*(byte *)((longlong)
                   *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                           *(longlong *)(lVar2 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10) !=
        0)) {
      in_XMM0_Da = (float)func_0x0001805cef70();
    }
  }
  uVar1 = *(ushort *)(unaff_RBX + 0x26);
  if ((uVar1 & 0x40) != 0) {
    in_stack_00000060 = (int32_t)unaff_RBX[0x27];
    uStack0000000000000064 = 0xffffffff;
    FUN_1805d1c80(in_XMM0_Da,&stack0x00000060,0);
    uVar1 = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((uVar1 & 0x100) != 0) {
    *(int32_t *)(unaff_RBX + 0x2f2) = 0;
  }
  if ((uVar1 & 0x200) != 0) {
    *(int32_t *)(unaff_RBX + 0x277) = 0;
  }
  *(int16_t *)(unaff_RBX + 0x26) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805d09d3(float param_1)
void FUN_1805d09d3(float param_1)

{
  ushort in_AX;
  ushort uVar1;
  longlong lVar2;
  longlong in_RCX;
  uint64_t uVar3;
  longlong *unaff_RBX;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  int32_t in_stack_00000060;
  int32_t uStack0000000000000064;
  
  if ((char)in_AX < '\0') {
    *(uint *)(in_RCX + 0x209c) = *(uint *)(in_RCX + 0x209c) | 0x800;
    in_AX = *(ushort *)(in_RCX + 0x130);
    *(int32_t *)(in_RCX + 0x14d0) = 0xffffffff;
  }
  if ((in_AX & 0x10) != 0) {
    *(int32_t *)(in_RCX + 0x1b6c) = 0;
    *(int8_t *)(in_RCX + 0x17a8) = 0;
    unaff_RBX[0x2f3] = *(longlong *)(&system_error_code + (longlong)*(int *)(in_RCX + 0x17a0) * 8);
    *(int32_t *)((longlong)unaff_RBX + 0x1c0c) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c14) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c1c) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c24) = 0xffffffff;
    *(int32_t *)((longlong)unaff_RBX + 0x1c2c) = 0;
    *(int32_t *)((longlong)unaff_RBX + 0x200c) = 0;
    *(int8_t *)(unaff_RBX + 0x389) = 0;
    unaff_RBX[0x387] = *(longlong *)(&system_error_code + (longlong)(int)unaff_RBX[0x388] * 8);
    if ((*(uint *)((longlong)unaff_RBX + 0x209c) >> 0xb & 1) == 0) {
      FUN_180508220();
    }
    param_1 = (float)FUN_180508010();
    in_AX = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((in_AX & 8) != 0) {
    param_1 = (float)FUN_1805d5c90();
    in_AX = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((in_AX & 1) == 0) goto LAB_1805d0bad;
  if (*(int *)(*unaff_RBX + 0x568) == 1) {
    param_1 = (float)FUN_1805c9600(param_1,2,0,0,0);
    if (param_1 <= 0.0) goto LAB_1805d0af2;
    uVar3 = 1;
  }
  else {
LAB_1805d0af2:
    uVar3 = 0;
  }
  FUN_1805b77f0(param_1,uVar3);
  if ((char)unaff_RBX[0x386] != '\0') {
    param_1 = (float)FUN_1805d5a50(unaff_RBX + 1);
    goto LAB_1805d0bad;
  }
  unaff_RBX[3] = 0;
  unaff_RBX[4] = 0;
  *(int32_t *)(unaff_RBX + 5) = 0;
  *(int32_t *)((longlong)unaff_RBX + 0x2c) = 0xbf800000;
  unaff_RBX[6] = 0;
  *(int32_t *)(unaff_RBX + 7) = 0xffffffff;
  if (((int)unaff_RBX[0x295] - 2U & 0xfffffffd) != 0) {
    lVar2 = func_0x0001805b6e80(unaff_RBX + 1);
    param_1 = extraout_XMM0_Da;
    if (lVar2 == 0) goto LAB_1805d0bad;
    lVar2 = func_0x0001805b6e80();
    param_1 = extraout_XMM0_Da_00;
    if (*(int *)(lVar2 + 0x30) < 1) goto LAB_1805d0bad;
    if (((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) &
         0x200) != 0) && (*(short *)(lVar2 + 8) < 1)) goto LAB_1805d0bad;
    lVar2 = func_0x0001805b6e80();
    param_1 = extraout_XMM0_Da_01;
    if ((*(byte *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar2 + 0xd0)) >>
         1 & 1) == 0) goto LAB_1805d0bad;
  }
  param_1 = (float)FUN_180508010();
LAB_1805d0bad:
  uVar1 = *(ushort *)(unaff_RBX + 0x26);
  if ((uVar1 & 2) != 0) {
    param_1 = (float)FUN_1805d62c0();
    uVar1 = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((uVar1 & 4) != 0) {
    param_1 = (float)FUN_1805be620(param_1,*(int32_t *)((longlong)unaff_RBX + 0x134));
    uVar1 = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((uVar1 & 0x20) != 0) {
    if ((*(uint *)(unaff_RBX + 2) & 0x20) == 0) {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)unaff_RBX[1] + 0x8f8) + 0x9e8);
      unaff_RBX[0x15] = lVar2;
      *(uint *)(unaff_RBX + 2) = *(uint *)(unaff_RBX + 2) | 0x20;
    }
    else {
      lVar2 = unaff_RBX[0x15];
    }
    if ((lVar2 != 0) &&
       ((*(byte *)((longlong)
                   *(int *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 +
                           *(longlong *)(lVar2 + 0xd0)) * 0x170 + 0x140 + system_system_config) & 0x10) !=
        0)) {
      param_1 = (float)func_0x0001805cef70();
    }
  }
  uVar1 = *(ushort *)(unaff_RBX + 0x26);
  if ((uVar1 & 0x40) != 0) {
    in_stack_00000060 = (int32_t)unaff_RBX[0x27];
    uStack0000000000000064 = 0xffffffff;
    FUN_1805d1c80(param_1,&stack0x00000060,0);
    uVar1 = *(ushort *)(unaff_RBX + 0x26);
  }
  if ((uVar1 & 0x100) != 0) {
    *(int32_t *)(unaff_RBX + 0x2f2) = 0;
  }
  if ((uVar1 & 0x200) != 0) {
    *(int32_t *)(unaff_RBX + 0x277) = 0;
  }
  *(int16_t *)(unaff_RBX + 0x26) = 0;
  return;
}






// 函数: void FUN_1805d0c9e(void)
void FUN_1805d0c9e(void)

{
  ushort in_AX;
  longlong unaff_RBX;
  ushort unaff_SI;
  int32_t unaff_EDI;
  
  *(int32_t *)(unaff_RBX + 0x1790) = unaff_EDI;
  if ((unaff_SI & in_AX) != 0) {
    *(int32_t *)(unaff_RBX + 0x13b8) = unaff_EDI;
  }
  *(short *)(unaff_RBX + 0x130) = (short)unaff_EDI;
  return;
}






// 函数: void FUN_1805d0cae(void)
void FUN_1805d0cae(void)

{
  longlong unaff_RBX;
  int32_t unaff_EDI;
  
  *(int32_t *)(unaff_RBX + 0x13b8) = unaff_EDI;
  *(short *)(unaff_RBX + 0x130) = (short)unaff_EDI;
  return;
}






// 函数: void FUN_1805d0cc0(void)
void FUN_1805d0cc0(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




