#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part480.c - 11 个函数

// 函数: void FUN_180524ea6(void)
void FUN_180524ea6(void)

{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  uint64_t uVar5;
  int iVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong lVar8;
  int32_t uVar9;
  char unaff_DIL;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float unaff_XMM11_Da;
  float *in_stack_000000f0;
  char in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
  cVar3 = '\0';
  cVar2 = func_0x000180522f60();
  if (((cVar2 != '\0') && (unaff_R15 != 0)) && (cVar2 = func_0x00018038b3c0(), cVar2 != '\0')) {
    cVar2 = FUN_18038d0a0();
    if (cVar2 != '\0') goto LAB_180525170;
    iVar6 = 0;
    iVar10 = 0;
    if (*(byte *)(unaff_R15 + 0xa8) != 0) {
      lVar7 = 0x60;
      do {
        iVar10 = iVar6;
        if (1 < *(byte *)(*(longlong *)(unaff_R15 + lVar7) + 0x20)) break;
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
        iVar10 = 0;
      } while (iVar6 < (int)(uint)*(byte *)(unaff_R15 + 0xa8));
    }
    puVar1 = *(uint64_t **)(unaff_R15 + 0x60 + (longlong)iVar10 * 8);
    uVar5 = *(uint64_t *)*puVar1;
    fStack0000000000000108 = (float)uVar5;
    fStack000000000000010c = (float)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(uint64_t *)puVar1[1];
    fStack0000000000000100 = (float)uVar5;
    fStack0000000000000104 = (float)((ulonglong)uVar5 >> 0x20);
    fVar17 = fStack0000000000000100 - fStack0000000000000108;
    fVar16 = fStack0000000000000104 - fStack000000000000010c;
    fVar13 = fVar16 * fVar16 + fVar17 * fVar17;
    auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar14 = auVar15._0_4_;
    fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
    fVar17 = fVar17 * fVar13;
    fVar16 = fVar16 * fVar13;
    if (0.0 < (fStack000000000000010c - unaff_R13[1]) * fVar16 +
              (fStack0000000000000108 - *unaff_R13) * fVar17 !=
        0.0 < (fStack0000000000000104 - unaff_R13[1]) * fVar16 +
              (fStack0000000000000100 - *unaff_R13) * fVar17) {
      cVar3 = '\x01';
    }
  }
  if (cVar3 == '\0') {
    lVar7 = 0;
    if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
      lVar11 = unaff_RBX + 0x290;
      iVar10 = *(int *)(unaff_RBX + 0x12b8);
      cVar2 = *(char *)(unaff_RBX + 0x12b4);
      lVar8 = *(longlong *)(**(longlong **)(unaff_RBX + 0x198) + 0x20);
      while( true ) {
        if (cVar2 == '\0') {
          iVar6 = (int)(*(longlong *)(lVar11 + 0x1008) - *(longlong *)(lVar11 + 0x1000) >> 5);
        }
        else {
          iVar6 = *(int *)(lVar11 + 0x1020);
        }
        if (iVar6 <= iVar10) break;
        lVar12 = (longlong)iVar10 * 0x20;
        lVar4 = lVar11;
        if (cVar2 == '\0') {
          lVar4 = *(longlong *)(lVar11 + 0x1000);
        }
        if (*(longlong *)(lVar12 + 0x10 + lVar4) != 0) {
          lVar4 = lVar11;
          if (cVar2 == '\0') {
            lVar4 = *(longlong *)(lVar11 + 0x1000);
          }
          uVar5 = *(uint64_t *)(lVar12 + 0x10 + lVar4);
          cVar3 = FUN_18038d0a0(uVar5,lVar8 + 0xc);
          if ((cVar3 != '\0') &&
             (fVar13 = (float)func_0x00018038d2f0(uVar5,lVar8 + 0xc),
             ABS(*(float *)(lVar8 + 0x14) - fVar13) < unaff_XMM11_Da)) {
            lVar7 = lVar11;
            if (cVar2 == '\0') {
              lVar7 = *(longlong *)(lVar11 + 0x1000);
            }
            lVar7 = *(longlong *)(lVar12 + 0x10 + lVar7);
          }
        }
        iVar10 = iVar10 + 1;
      }
      unaff_DIL = '\0';
    }
    unaff_R12 = unaff_R15;
    unaff_R13 = in_stack_000000f0;
    if ((lVar7 != 0) && (lVar7 != unaff_R15)) {
      unaff_DIL = '\x01';
      *(longlong *)(unaff_R14 + 0x9d8) = lVar7;
      in_stack_000000f8 = '\x01';
      unaff_R12 = lVar7;
    }
  }
LAB_180525170:
  if ((unaff_R15 == unaff_R12) && (cVar2 = func_0x000180522f60(), cVar2 == '\0')) {
    lVar7 = *(longlong *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar5 = FUN_180396100(lVar7 + 0x2a68,unaff_R13,lVar7 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
    }
    else {
      lVar11 = lVar7 + 0x2a68;
      uVar9 = 2;
      if ((*(byte *)(unaff_R12 + 0x139) & 4) != 0) {
        uVar9 = 5;
      }
      iVar10 = FUN_1803965f0(lVar11);
      lVar8 = (longlong)iVar10;
      FUN_18038de80(lVar11,iVar10);
      *(int32_t *)(unaff_R12 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar7 + 0x2fc0 + lVar8 * 4);
      FUN_180395ea0(lVar11,iVar10,unaff_R13,unaff_R12,uVar9);
      *(int32_t *)(lVar7 + 0x2fe0 + lVar8 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar5 = FUN_180396100(*(longlong *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                            *(longlong *)(unaff_R14 + 0x660) + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
      unaff_DIL = in_stack_000000f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}





// 函数: void FUN_180524ef5(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_180524ef5(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  uint64_t *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  uint64_t uVar5;
  int iVar6;
  longlong lVar7;
  longlong unaff_RBX;
  longlong lVar8;
  int32_t uVar9;
  char unaff_DIL;
  int iVar10;
  char in_R10B;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_R12;
  float *unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar13;
  float fVar14;
  int8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float unaff_XMM11_Da;
  float *in_stack_000000f0;
  char in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
  iVar6 = 0;
  iVar10 = param_4;
  if (param_3 != 0) {
    lVar7 = 0x60;
    do {
      iVar10 = iVar6;
      if (1 < *(byte *)(*(longlong *)(unaff_R15 + lVar7) + 0x20)) break;
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      iVar10 = param_4;
    } while (iVar6 < param_3);
  }
  puVar1 = *(uint64_t **)(unaff_R15 + 0x60 + (longlong)iVar10 * 8);
  uVar5 = *(uint64_t *)*puVar1;
  fStack0000000000000108 = (float)uVar5;
  fStack000000000000010c = (float)((ulonglong)uVar5 >> 0x20);
  lVar7 = *(longlong *)puVar1[1];
  fStack0000000000000100 = (float)lVar7;
  fStack0000000000000104 = (float)((ulonglong)lVar7 >> 0x20);
  fVar17 = fStack0000000000000100 - fStack0000000000000108;
  fVar16 = fStack0000000000000104 - fStack000000000000010c;
  fVar13 = fVar16 * fVar16 + fVar17 * fVar17;
  auVar15 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
  fVar14 = auVar15._0_4_;
  fVar13 = fVar14 * 0.5 * (3.0 - fVar13 * fVar14 * fVar14);
  fVar17 = fVar17 * fVar13;
  fVar16 = fVar16 * fVar13;
  if (0.0 < (fStack000000000000010c - unaff_R13[1]) * fVar16 +
            (fStack0000000000000108 - *unaff_R13) * fVar17 !=
      0.0 < (fStack0000000000000104 - unaff_R13[1]) * fVar16 +
            (fStack0000000000000100 - *unaff_R13) * fVar17) {
    in_R10B = '\x01';
  }
  _fStack0000000000000100 = lVar7;
  _fStack0000000000000108 = uVar5;
  if (in_R10B == '\0') {
    lVar7 = 0;
    if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
      lVar11 = unaff_RBX + 0x290;
      iVar10 = *(int *)(unaff_RBX + 0x12b8);
      cVar3 = *(char *)(unaff_RBX + 0x12b4);
      lVar8 = *(longlong *)(**(longlong **)(unaff_RBX + 0x198) + 0x20);
      while( true ) {
        if (cVar3 == '\0') {
          iVar6 = (int)(*(longlong *)(lVar11 + 0x1008) - *(longlong *)(lVar11 + 0x1000) >> 5);
        }
        else {
          iVar6 = *(int *)(lVar11 + 0x1020);
        }
        if (iVar6 <= iVar10) break;
        lVar12 = (longlong)iVar10 * 0x20;
        lVar4 = lVar11;
        if (cVar3 == '\0') {
          lVar4 = *(longlong *)(lVar11 + 0x1000);
        }
        if (*(longlong *)(lVar12 + 0x10 + lVar4) != 0) {
          lVar4 = lVar11;
          if (cVar3 == '\0') {
            lVar4 = *(longlong *)(lVar11 + 0x1000);
          }
          uVar5 = *(uint64_t *)(lVar12 + 0x10 + lVar4);
          cVar2 = FUN_18038d0a0(uVar5,lVar8 + 0xc);
          if ((cVar2 != '\0') &&
             (fVar13 = (float)func_0x00018038d2f0(uVar5,lVar8 + 0xc),
             ABS(*(float *)(lVar8 + 0x14) - fVar13) < unaff_XMM11_Da)) {
            lVar7 = lVar11;
            if (cVar3 == '\0') {
              lVar7 = *(longlong *)(lVar11 + 0x1000);
            }
            lVar7 = *(longlong *)(lVar12 + 0x10 + lVar7);
          }
        }
        iVar10 = iVar10 + 1;
      }
      unaff_DIL = '\0';
    }
    unaff_R12 = unaff_R15;
    unaff_R13 = in_stack_000000f0;
    if ((lVar7 != 0) && (lVar7 != unaff_R15)) {
      unaff_DIL = '\x01';
      *(longlong *)(unaff_R14 + 0x9d8) = lVar7;
      in_stack_000000f8 = '\x01';
      unaff_R12 = lVar7;
    }
  }
  if ((unaff_R15 == unaff_R12) && (cVar3 = func_0x000180522f60(), cVar3 == '\0')) {
    lVar7 = *(longlong *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar5 = FUN_180396100(lVar7 + 0x2a68,unaff_R13,lVar7 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
    }
    else {
      lVar11 = lVar7 + 0x2a68;
      _fStack0000000000000100 = 0;
      uVar9 = 2;
      if ((*(byte *)(unaff_R12 + 0x139) & 4) != 0) {
        uVar9 = 5;
      }
      iVar10 = FUN_1803965f0(lVar11);
      lVar8 = (longlong)iVar10;
      FUN_18038de80(lVar11,iVar10);
      *(int32_t *)(unaff_R12 + 0x40 + lVar8 * 4) = *(int32_t *)(lVar7 + 0x2fc0 + lVar8 * 4);
      FUN_180395ea0(lVar11,iVar10,unaff_R13,unaff_R12,uVar9);
      *(int32_t *)(lVar7 + 0x2fe0 + lVar8 * 4) = 0;
      *(longlong *)(unaff_R14 + 0x9d8) = _fStack0000000000000100;
      unaff_DIL = in_stack_000000f8;
      if (_fStack0000000000000100 == 0) {
        uVar5 = FUN_180396100(*(longlong *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                              *(longlong *)(unaff_R14 + 0x660) + 0x28c8,1);
        *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
      }
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}





// 函数: void FUN_180525053(void)
void FUN_180525053(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint64_t uVar6;
  longlong unaff_RBX;
  longlong lVar7;
  int32_t uVar8;
  char unaff_DIL;
  int iVar9;
  char in_R10B;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_R12;
  uint64_t unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar12;
  float unaff_XMM11_Da;
  uint64_t in_stack_000000f0;
  char in_stack_000000f8;
  
  if (in_R10B == '\0') {
    lVar5 = 0;
    if (*(char *)(unaff_RBX + 0x12bc) != '\0') {
      lVar10 = unaff_RBX + 0x290;
      iVar9 = *(int *)(unaff_RBX + 0x12b8);
      cVar2 = *(char *)(unaff_RBX + 0x12b4);
      lVar7 = *(longlong *)(**(longlong **)(unaff_RBX + 0x198) + 0x20);
      while( true ) {
        if (cVar2 == '\0') {
          iVar3 = (int)(*(longlong *)(lVar10 + 0x1008) - *(longlong *)(lVar10 + 0x1000) >> 5);
        }
        else {
          iVar3 = *(int *)(lVar10 + 0x1020);
        }
        if (iVar3 <= iVar9) break;
        lVar11 = (longlong)iVar9 * 0x20;
        lVar4 = lVar10;
        if (cVar2 == '\0') {
          lVar4 = *(longlong *)(lVar10 + 0x1000);
        }
        if (*(longlong *)(lVar11 + 0x10 + lVar4) != 0) {
          lVar4 = lVar10;
          if (cVar2 == '\0') {
            lVar4 = *(longlong *)(lVar10 + 0x1000);
          }
          uVar6 = *(uint64_t *)(lVar11 + 0x10 + lVar4);
          cVar1 = FUN_18038d0a0(uVar6,lVar7 + 0xc);
          if ((cVar1 != '\0') &&
             (fVar12 = (float)func_0x00018038d2f0(uVar6,lVar7 + 0xc),
             ABS(*(float *)(lVar7 + 0x14) - fVar12) < unaff_XMM11_Da)) {
            lVar5 = lVar10;
            if (cVar2 == '\0') {
              lVar5 = *(longlong *)(lVar10 + 0x1000);
            }
            lVar5 = *(longlong *)(lVar11 + 0x10 + lVar5);
          }
        }
        iVar9 = iVar9 + 1;
      }
      unaff_DIL = '\0';
    }
    unaff_R12 = unaff_R15;
    unaff_R13 = in_stack_000000f0;
    if ((lVar5 != 0) && (lVar5 != unaff_R15)) {
      unaff_DIL = '\x01';
      *(longlong *)(unaff_R14 + 0x9d8) = lVar5;
      in_stack_000000f8 = '\x01';
      unaff_R12 = lVar5;
    }
  }
  if ((unaff_R15 == unaff_R12) && (cVar2 = func_0x000180522f60(), cVar2 == '\0')) {
    lVar5 = *(longlong *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar6 = FUN_180396100(lVar5 + 0x2a68,unaff_R13,lVar5 + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar6;
    }
    else {
      lVar10 = lVar5 + 0x2a68;
      uVar8 = 2;
      if ((*(byte *)(unaff_R12 + 0x139) & 4) != 0) {
        uVar8 = 5;
      }
      iVar9 = FUN_1803965f0(lVar10);
      lVar7 = (longlong)iVar9;
      FUN_18038de80(lVar10,iVar9);
      *(int32_t *)(unaff_R12 + 0x40 + lVar7 * 4) = *(int32_t *)(lVar5 + 0x2fc0 + lVar7 * 4);
      FUN_180395ea0(lVar10,iVar9,unaff_R13,unaff_R12,uVar8);
      *(int32_t *)(lVar5 + 0x2fe0 + lVar7 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar6 = FUN_180396100(*(longlong *)(unaff_R14 + 0x660) + 0x2a68,unaff_R13,
                            *(longlong *)(unaff_R14 + 0x660) + 0x28c8,1);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar6;
      unaff_DIL = in_stack_000000f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}





// 函数: void FUN_180525178(void)
void FUN_180525178(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  longlong lVar6;
  char unaff_DIL;
  longlong unaff_R12;
  longlong unaff_R14;
  longlong unaff_R15;
  char in_stack_000000f8;
  
  if ((unaff_R15 == unaff_R12) && (cVar3 = func_0x000180522f60(), cVar3 == '\0')) {
    lVar2 = *(longlong *)(unaff_R14 + 0x660);
    if (unaff_R12 == 0) {
      uVar5 = FUN_180396100(lVar2 + 0x2a68);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
    }
    else {
      lVar1 = lVar2 + 0x2a68;
      iVar4 = FUN_1803965f0(lVar1);
      lVar6 = (longlong)iVar4;
      FUN_18038de80(lVar1,iVar4);
      *(int32_t *)(unaff_R12 + 0x40 + lVar6 * 4) = *(int32_t *)(lVar2 + 0x2fc0 + lVar6 * 4);
      FUN_180395ea0(lVar1,iVar4);
      *(int32_t *)(lVar2 + 0x2fe0 + lVar6 * 4) = 0;
      *(uint64_t *)(unaff_R14 + 0x9d8) = 0;
      uVar5 = FUN_180396100(*(longlong *)(unaff_R14 + 0x660) + 0x2a68);
      *(uint64_t *)(unaff_R14 + 0x9d8) = uVar5;
      unaff_DIL = in_stack_000000f8;
    }
  }
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}





// 函数: void FUN_1805252a5(void)
void FUN_1805252a5(void)

{
  char unaff_DIL;
  longlong unaff_R14;
  longlong unaff_R15;
  
  if ((unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8)) && (unaff_DIL == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}





// 函数: void FUN_1805252d4(void)
void FUN_1805252d4(void)

{
  return;
}





// 函数: void FUN_1805252e2(void)
void FUN_1805252e2(void)

{
  return;
}





// 函数: void FUN_1805252ef(longlong param_1)
void FUN_1805252ef(longlong param_1)

{
  uint64_t uVar1;
  char unaff_DIL;
  longlong unaff_R14;
  longlong unaff_R15;
  
  uVar1 = FUN_180396100(param_1 + 0x2a68);
  *(uint64_t *)(unaff_R14 + 0x9d8) = uVar1;
  if (((*(int *)(unaff_R14 + 0x570) == 1) && (unaff_R15 != *(longlong *)(unaff_R14 + 0x9d8))) &&
     (unaff_DIL == '\0')) {
    FUN_1805e48c0(*(longlong *)(unaff_R14 + 0x6e0) + 0x178);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1805253f0(longlong param_1,longlong param_2,char param_3,char param_4,int param_5,
void FUN_1805253f0(longlong param_1,longlong param_2,char param_3,char param_4,int param_5,
                  uint64_t param_6,longlong param_7,int param_8,uint64_t *param_9,
                  uint64_t *param_10)

{
  longlong lVar1;
  ulonglong uVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  void *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  int8_t auStack_228 [32];
  uint64_t **ppuStack_208;
  uint64_t **ppuStack_200;
  int iStack_1f8;
  int32_t uStack_1f0;
  longlong *plStack_1e8;
  char cStack_1c8;
  int8_t uStack_1c7;
  int32_t uStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  longlong lStack_1b0;
  longlong lStack_1a8;
  uint64_t *puStack_198;
  uint64_t uStack_190;
  uint64_t *puStack_188;
  uint64_t uStack_180;
  uint64_t uStack_178;
  void *puStack_170;
  void *puStack_168;
  int32_t uStack_160;
  uint8_t auStack_158 [32];
  longlong alStack_138 [4];
  int32_t auStack_118 [2];
  int8_t auStack_110 [152];
  int iStack_78;
  ulonglong uStack_68;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_68 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_228;
  iStack_1bc = param_8;
  lStack_1a8 = param_7;
  puStack_188 = param_9;
  puStack_198 = param_10;
  uStack_1c4 = 0;
  uStack_1c7 = param_7 != 0;
  if (param_7 == 0) {
    if (param_5 < 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)param_5 * 0x1f8 + 8 +
              *(longlong *)((longlong)param_8 * 0xa60 + 0x3998 + *(longlong *)(param_1 + 0x8d8));
    }
  }
  else {
    lVar8 = *(longlong *)(param_7 + 0xf0);
  }
  cStack_1c8 = param_3;
  if (*(char *)(param_2 + 0xd0) != '\0') {
    FUN_18050df10(param_1,param_4,param_8,uStack_1c7);
  }
  iStack_1b8 = *(int *)(param_2 + 0xc);
  lVar1 = *(longlong *)(param_1 + 0x8f8);
  if (param_4 < '\0') {
    lVar9 = *(longlong *)(lVar1 + 0x9f0);
  }
  else {
    lVar9 = lVar1 + 8 + (longlong)param_4 * 0x1f8;
  }
  if (iStack_1b8 == 0) {
    if (cStack_1c8 == '\0') goto LAB_1805259ed;
  }
  else if ((((iStack_1b8 != 5) && (lVar9 != 0)) &&
           ((*(ulonglong *)
              ((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar9 + 0xd0)) >> 0x1c
            & 1) != 0)) && (0 < *(int *)(param_2 + 200))) {
    iVar14 = (int)param_4;
    if (param_4 < '\0') {
      iVar14 = *(int *)(lVar1 + 0x9e4);
    }
    iStack_1c0 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      lStack_1b0 = render_system_data_memory;
      iStack_1c0 = *(int *)(param_2 + 200);
      iVar13 = *(int *)(param_1 + 0x18);
      iStack_1b4 = iVar13;
      if ((iVar13 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x30))(iVar13);
      }
      uStack_1c4 = 1;
      (**(code **)(lStack_1b0 + 0x80))(iVar13,iVar14,iStack_1c0);
      uStack_1c4 = 0;
      if ((iVar13 != 0) && (system_cache_buffer != 0)) {
        (**(code **)(system_cache_buffer + 0x18))(iVar13);
      }
    }
  }
  iVar14 = iStack_1bc;
  iVar13 = iStack_1b8;
  if (*(char *)(param_2 + 0xd0) == '\0') {
    iVar12 = -1;
    iVar11 = -1;
    lVar1 = *(longlong *)(param_1 + 0x8f8);
    if (param_4 < '\0') {
      lVar9 = *(longlong *)(lVar1 + 0x9f0);
    }
    else {
      lVar9 = lVar1 + 8 + (longlong)param_4 * 0x1f8;
    }
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x2498);
    if (((iVar13 == -1) || (*(char *)((longlong)iVar13 * 0x68 + 0x60 + render_system_memory) < '\x05')) ||
       ('\x06' < *(char *)((longlong)iVar13 * 0x68 + 0x60 + render_system_memory))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((((lStack_1a8 == 0) && (!bVar7)) && (param_4 < '\0')) ||
       (((lVar9 == 0 || (*(int *)(lVar9 + 0x30) < 1)) ||
        (((uVar2 = *(ulonglong *)
                    ((longlong)*(int *)(lVar9 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar9 + 0xd0)),
          (uVar2 >> 9 & 1) != 0 && (*(short *)(lVar9 + 8) < 1)) || ((uVar2 >> 0x1c & 1) == 0)))))) {
      if (*(longlong *)(lVar1 + 0x9e8) != 0) {
        if (lVar8 != 0) {
          iVar11 = *(int *)(lVar8 + 0x34);
        }
        iVar12 = *(int *)(*(longlong *)(lVar1 + 0x9e8) + 0x34);
        goto LAB_1805256ec;
      }
    }
    else {
      if (lVar8 != 0) {
        iVar11 = *(int *)(lVar8 + 0x34);
      }
      iVar12 = *(int *)(lVar9 + 0x34);
LAB_1805256ec:
      ppuStack_200 = (uint64_t **)((ulonglong)ppuStack_200 & 0xffffffffffffff00);
      FUN_1804f5d10(*(uint64_t *)(param_1 + 0x8d8),iStack_1bc,param_2 + 0x6c,0x41200000);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
                 0x48) < render_system_config_memory) && (FUN_1808fcb90(&system_ptr_9ef8), render_system_config_memory == -1)) {
      puStack_170 = &unknown_var_672_ptr;
      puStack_168 = auStack_158;
      auStack_158[0] = 0;
      uStack_160 = 0xc;
      strcpy_s(auStack_158,0x20,&unknown_var_5088_ptr);
      render_system_config_memory = FUN_180191c00(render_system_data_memory,&puStack_170);
      puStack_170 = &unknown_var_720_ptr;
      FUN_1808fcb30(&system_ptr_9ef8);
    }
    if (iVar11 == -1) {
      iVar11 = render_system_config_memory;
    }
    if (iVar12 == -1) {
      iVar12 = render_system_config_memory;
    }
    ppuStack_208 = (uint64_t **)FUN_18004a130;
    iStack_1c0 = iVar12;
    FUN_1808fc838(alStack_138,0x30,4,FUN_1801c2890);
    iVar13 = iStack_1b8;
    plStack_1e8 = (longlong *)0x0;
    iStack_78 = 0;
    if (iStack_1b8 == 4) {
      uVar15 = 0x3dcccccd;
LAB_1805257df:
      puStack_170 = &unknown_var_7512_ptr;
      puStack_168 = auStack_158;
      auStack_158[0] = 0;
      uStack_160 = 0xe;
      strcpy_s(auStack_158,0x10,&unknown_var_6896_ptr);
      lVar8 = (longlong)iStack_78;
      puVar10 = &system_buffer_ptr;
      if (puStack_168 != (void *)0x0) {
        puVar10 = puStack_168;
      }
      (**(code **)(alStack_138[lVar8 * 6] + 0x10))(alStack_138 + lVar8 * 6,puVar10);
      auStack_118[lVar8 * 0xc] = 0xffffffff;
      auStack_118[lVar8 * 0xc + 1] = uVar15;
      auStack_110[lVar8 * 0x30] = 1;
      iStack_78 = iStack_78 + 1;
      plStack_1e8 = alStack_138;
      puStack_170 = &unknown_var_720_ptr;
      iVar12 = iStack_1c0;
    }
    else {
      if (iStack_1b8 == 5) {
        uVar15 = 0x3e4ccccd;
        goto LAB_1805257df;
      }
      if (cStack_1c8 != '\0') {
        uVar15 = 0x3e99999a;
        goto LAB_1805257df;
      }
    }
    uStack_1f0 = *(int32_t *)(param_1 + 0x10);
    iStack_1f8 = iVar14;
    FUN_1804f81c0(*(uint64_t *)(param_1 + 0x8d8),iVar11,iVar12,param_2 + 0x6c);
    FUN_1808fc8a8(alStack_138,0x30,4,FUN_18004a130);
  }
  if (iVar13 != 0) {
    iStack_1c0 = 0;
    if (-1 < iVar14) {
      iVar14 = *(int *)((longlong)iVar14 * 0xa60 + 0x30b8 + *(longlong *)(param_1 + 0x8d8));
      if ((iVar14 != 0) && (system_cache_buffer != 0)) {
        iStack_1b8 = iVar14;
        (**(code **)(system_cache_buffer + 0x30))(iVar14);
      }
      iStack_1b8 = 0;
      uStack_1c4 = 0;
      iStack_1c0 = iVar14;
    }
    iVar13 = iStack_1c0;
    lVar8 = render_system_data_memory;
    puVar3 = (uint64_t *)*puStack_198;
    uVar4 = puStack_198[1];
    puVar5 = (uint64_t *)*puStack_188;
    uVar6 = puStack_188[1];
    iVar14 = *(int *)(param_1 + 0x18);
    iStack_1b4 = iVar14;
    if ((iVar14 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar14);
    }
    uStack_1c4 = 4;
    iStack_1f8 = CONCAT31(iStack_1f8._1_3_,uStack_1c7);
    ppuStack_200 = &puStack_188;
    ppuStack_208 = &puStack_198;
    puStack_198 = puVar5;
    uStack_190 = uVar6;
    puStack_188 = puVar3;
    uStack_180 = uVar4;
    (**(code **)(lVar8 + 0x230))
              (*(int32_t *)(*(longlong *)(param_1 + 0x8d8) + 0x98d928),iVar14,iVar13,param_2);
    uStack_1c4 = 0;
    if ((iVar14 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar14);
    }
    if ((iVar13 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar13);
    }
  }
LAB_1805259ed:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_68 ^ (ulonglong)auStack_228);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180525ac0(longlong param_1,char param_2)
void FUN_180525ac0(longlong param_1,char param_2)

{
  int32_t uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = FUN_18062b1e0(system_memory_pool_ptr,0x408,8,3);
  FUN_1808fc838(lVar5,0x10,0x40,FUN_180534540,FUN_180534590);
  lVar6 = 0;
  *(uint64_t *)(lVar5 + 0x400) = 0;
  *(longlong *)(param_1 + 0x9a0) = lVar5;
  *(ulonglong *)(lVar5 + 0x400) = *(ulonglong *)(lVar5 + 0x400) | 1L << ((longlong)param_2 & 0x3fU);
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    uVar1 = *(int32_t *)(param_1 + 0x10);
    iVar4 = _Mtx_lock(0x180c95528);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    cVar3 = FUN_180645c10(0x180c95578,0,&unknown_var_3504_ptr);
    if (((cVar3 != '\0') && (cVar3 = FUN_180645c10(0x180c95578,9,&unknown_var_3472_ptr), cVar3 != '\0')) &&
       (cVar3 = FUN_180645c10(0x180c95578,uVar1,&unknown_var_3424_ptr), cVar3 != '\0')) {
      FUN_180645c10(0x180c95578,(int)param_2,&unknown_var_3040_ptr);
    }
    render_system_memory = render_system_memory & 0xffffffff00000000;
    iVar4 = (int)(render_system_memory - render_system_memory >> 3);
    lVar5 = render_system_memory;
    if (0 < iVar4) {
      do {
        lVar2 = *(longlong *)(lVar5 + lVar6 * 8);
        if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x58f8) + 0x1c) != '\0')) {
          FUN_1805b59d0(lVar2,0x180c95578);
          lVar5 = render_system_memory;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
    if (render_system_memory != 0) {
      FUN_180567f30(render_system_memory,0x180c95578);
    }
    render_system_memory = 0;
                    // WARNING: Subroutine does not return
    memset(render_system_memory,0,(longlong)(render_system_memory >> 3));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180525cb0(longlong param_1,float param_2)
void FUN_180525cb0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint64_t uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plStackX_18;
  longlong *plStackX_20;
  
  uVar7 = 0;
  do {
    cVar6 = (char)uVar7;
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0x9a0) + 0x400) >> (uVar7 & 0x3f) & 1) != 0) {
      plVar8 = (longlong *)((longlong)cVar6 * 0x10 + *(longlong *)(param_1 + 0x9a0));
      if (*(float *)(plVar8 + 1) <= 5.0) {
        if (*plVar8 == 0) {
          FUN_1802ac200(uVar7,&plStackX_18,&unknown_var_6872_ptr);
          if (plStackX_18 != (longlong *)0x0) {
            uVar3 = FUN_18062b1e0(system_memory_pool_ptr,0x168,8,3);
            plVar4 = (longlong *)FUN_1802ac390(uVar3);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plStackX_20 = plStackX_18;
            if (plStackX_18 != (longlong *)0x0) {
              (**(code **)(*plStackX_18 + 0x28))();
            }
            FUN_1802adab0(plVar4,&plStackX_20);
            uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x9a0) + 0x400);
            uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
            uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
            *(bool *)((longlong)plVar4 + 0x15a) =
                 (char)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ==
                 '\x01';
            lVar1 = *(longlong *)(param_1 + 0x6d8);
            FUN_1802fbf30(*(uint64_t *)(*(longlong *)(lVar1 + 0x8a8) + 0x260),uVar7,plVar4,
                          plVar4 + 10);
            FUN_180544ac0(lVar1);
            (**(code **)(*plVar4 + 0x28))(plVar4);
            plVar2 = (longlong *)*plVar8;
            *plVar8 = (longlong)plVar4;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x38))();
            }
            (**(code **)(*plVar4 + 0x38))(plVar4);
          }
          if (plStackX_18 != (longlong *)0x0) {
            (**(code **)(*plStackX_18 + 0x38))();
          }
        }
        else {
          *(float *)(plVar8 + 1) = *(float *)(plVar8 + 1) + param_2;
        }
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x6d8);
        FUN_1803004f0(*(uint64_t *)(*(longlong *)(lVar1 + 0x8a8) + 0x260),uVar7,*plVar8);
        FUN_180544ac0(lVar1);
        *(int32_t *)(plVar8 + 1) = 0xbf800000;
        *(int8_t *)(*plVar8 + 0x159) = 0;
        plVar4 = (longlong *)*plVar8;
        *plVar8 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x38))();
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x9a0) + 0x400) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x9a0) + 0x400) &
             ~(1L << ((longlong)cVar6 & 0x3fU));
        plVar8 = *(longlong **)(param_1 + 0x9a0);
        if (plVar8[0x80] == 0) {
          if (plVar8 == (longlong *)0x0) {
            *(uint64_t *)(param_1 + 0x9a0) = 0;
            return;
          }
          plStackX_18 = plVar8;
          FUN_1808fc8a8(plVar8,0x10,0x40,FUN_180534590,plVar4);
                    // WARNING: Subroutine does not return
          FUN_18064e900(plVar8);
        }
      }
    }
    uVar7 = (ulonglong)(byte)(cVar6 + 1U);
    if ('?' < (char)(cVar6 + 1U)) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



