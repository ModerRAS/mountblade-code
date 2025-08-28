#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part443.c - 9 个函数

// 函数: void FUN_18050d2a0(longlong param_1)
void FUN_18050d2a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int8_t auStack_88 [32];
  int8_t uStack_68;
  uint uStack_58;
  uint auStack_50 [8];
  ulonglong uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  if ((_DAT_180c92514 == 1) || (_DAT_180c92514 == 4)) goto FUN_18050d463;
  uVar7 = 0;
  uVar1 = *(uint *)(param_1 + 0x4c4);
  uVar6 = 0xffffffff;
  if (((uVar1 >> 8 & 1) == 0) || (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8) == 0)) {
    if (((uVar1 >> 9 & 1) != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0) != 0)) {
      uVar4 = 1;
      goto LAB_18050d343;
    }
  }
  else {
    uVar4 = 0;
LAB_18050d343:
    uStack_68 = 0;
    FUN_18050b440(param_1,uVar4,0xffffffff,(uVar1 & 0xf0) != 0);
  }
  if ((uVar1 & 0xf0) != 0) {
    uVar2 = *(uint *)(param_1 + 0x564) >> 0x1f ^ 1;
    puVar9 = auStack_50 + 4;
    puVar10 = auStack_50;
    auStack_50[0] = 0x10;
    auStack_50[1] = 0x20;
    auStack_50[2] = 0x40;
    auStack_50[3] = 0x80;
    uStack_58 = uVar2;
    uVar8 = uVar7;
    do {
      if ((*puVar10 & uVar1) != 0) {
        *puVar9 = uVar7;
        if (uVar6 == 0xffffffff) {
          iVar3 = FUN_180537650(*(uint64_t *)(param_1 + 0x8f8),uVar7,uVar2,
                                *(int32_t *)(param_1 + 0x56c));
          if (iVar3 == 0) {
            uVar6 = uVar8;
          }
        }
        uVar8 = uVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 1;
    } while ((int)uVar7 < 4);
    lVar5 = 0;
    if (uVar6 == 0xffffffff) {
      uVar6 = 0;
    }
    if (0 < (longlong)(int)uVar8) {
      do {
        if ((int)uVar6 != lVar5) {
          FUN_18050bbd0(param_1,auStack_50[lVar5 + 4],1);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uVar8);
    }
    FUN_18050bbd0(param_1,auStack_50[(longlong)(int)uVar6 + 4],0,0);
  }
  FUN_18050cca0(param_1);
FUN_18050d463:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_88);
}





// 函数: void FUN_18050d2d5(longlong param_1)
void FUN_18050d2d5(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t unaff_RBX;
  longlong lVar5;
  longlong unaff_RBP;
  int iVar6;
  uint64_t unaff_RSI;
  int iVar7;
  uint64_t unaff_RDI;
  longlong in_R11;
  int iVar8;
  uint64_t unaff_R13;
  int *piVar9;
  uint *puVar10;
  uint uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  ulonglong in_stack_00000058;
  
  *(uint64_t *)(in_R11 + 0x10) = unaff_RBX;
  iVar7 = 0;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x20) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x18) = unaff_R13;
  uVar1 = *(uint *)(param_1 + 0x4c4);
  iVar6 = -1;
  if (((uVar1 >> 8 & 1) == 0) || (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8) == 0)) {
    if (((uVar1 >> 9 & 1) == 0) || (*(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0) == 0))
    goto LAB_18050d34f;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  FUN_18050b440(param_1,uVar4,0xffffffff,(uVar1 & 0xf0) != 0,0);
LAB_18050d34f:
  if ((uVar1 & 0xf0) != 0) {
    uVar2 = *(uint *)(unaff_RBP + 0x564);
    piVar9 = (int *)&stack0x00000048;
    puVar10 = &stack0x00000038;
    uStack0000000000000038 = 0x10;
    uStack000000000000003c = 0x20;
    uStack0000000000000040 = 0x40;
    uStack0000000000000044 = 0x80;
    iVar8 = iVar7;
    do {
      if ((*puVar10 & uVar1) != 0) {
        *piVar9 = iVar7;
        if (iVar6 == -1) {
          iVar3 = FUN_180537650(*(uint64_t *)(unaff_RBP + 0x8f8),iVar7,uVar2 >> 0x1f ^ 1,
                                *(int32_t *)(unaff_RBP + 0x56c));
          if (iVar3 == 0) {
            iVar6 = iVar8;
          }
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      iVar7 = iVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar7 < 4);
    lVar5 = 0;
    if (iVar6 == -1) {
      iVar6 = 0;
    }
    if (0 < (longlong)iVar8) {
      do {
        if (iVar6 != lVar5) {
          FUN_18050bbd0();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar8);
    }
    FUN_18050bbd0();
  }
  FUN_18050cca0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18050d362(void)
void FUN_18050d362(void)

{
  uint in_EAX;
  int iVar1;
  int unaff_EBX;
  longlong lVar2;
  longlong unaff_RBP;
  int unaff_ESI;
  int unaff_EDI;
  uint unaff_R13D;
  int *piVar3;
  uint *puVar4;
  uint uStack0000000000000030;
  uint uStack0000000000000038;
  int32_t uStack000000000000003c;
  int32_t uStack0000000000000040;
  int32_t uStack0000000000000044;
  ulonglong in_stack_00000058;
  
  piVar3 = (int *)&stack0x00000048;
  puVar4 = &stack0x00000038;
  uStack0000000000000038 = 0x10;
  uStack000000000000003c = 0x20;
  uStack0000000000000040 = 0x40;
  uStack0000000000000044 = 0x80;
  uStack0000000000000030 = in_EAX ^ 1;
  do {
    if ((*puVar4 & unaff_R13D) != 0) {
      *piVar3 = unaff_EDI;
      if (unaff_ESI == -1) {
        iVar1 = FUN_180537650(*(uint64_t *)(unaff_RBP + 0x8f8),unaff_EDI,(in_EAX ^ 1) & 0xff,
                              *(int32_t *)(unaff_RBP + 0x56c));
        if (iVar1 == 0) {
          unaff_ESI = unaff_EBX;
        }
      }
      unaff_EBX = unaff_EBX + 1;
      piVar3 = piVar3 + 1;
    }
    unaff_EDI = unaff_EDI + 1;
    puVar4 = puVar4 + 1;
  } while (unaff_EDI < 4);
  lVar2 = 0;
  if (unaff_ESI == -1) {
    unaff_ESI = 0;
  }
  if (0 < (longlong)unaff_EBX) {
    do {
      if (unaff_ESI != lVar2) {
        FUN_18050bbd0();
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < unaff_EBX);
  }
  FUN_18050bbd0();
  FUN_18050cca0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18050d401(void)
void FUN_18050d401(void)

{
  longlong unaff_RBX;
  int unaff_ESI;
  longlong unaff_RDI;
  ulonglong in_stack_00000058;
  
  do {
    if (unaff_ESI != unaff_RBX) {
      FUN_18050bbd0();
    }
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < unaff_RDI);
  FUN_18050bbd0();
  FUN_18050cca0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18050d43e(void)
void FUN_18050d43e(void)

{
  ulonglong in_stack_00000058;
  
  FUN_18050cca0();
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18050d463(void)
void FUN_18050d463(void)

{
  ulonglong in_stack_00000058;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000058 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_18050d480(longlong param_1,int32_t *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int32_t uVar9;
  
  uVar8 = 0;
  plVar2 = *(longlong **)
            ((longlong)*(int *)(param_1 + 0x564) * 0xa60 + 0x3630 + *(longlong *)(param_1 + 0x8d8));
  uVar7 = *(uint *)(plVar2 + 0x48a);
  uVar1 = *(uint *)(plVar2 + 0x493);
  uVar6 = uVar8;
  if (plVar2[0x48c] != 0) {
    uVar6 = (uint)*(uint64_t *)(plVar2[0x48c] + 0x1d0);
  }
  if ((char)plVar2[0x48e] != '\0') {
    uVar6 = 0;
  }
  if (((((uint)plVar2[0x48e] | uVar6) & 0xff) == 0) ||
     (*(int *)(*(longlong *)
                ((longlong)*(int *)(*(longlong *)(param_1 + 0x590) + 0xac) * 0xe0 + 0x78 +
                _DAT_180c95fb0) + (longlong)(int)uVar7 * 8) < 0)) {
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x8f8) + 0x9e8);
    if (lVar3 != 0) {
      uVar8 = *(uint *)((longlong)*(int *)(lVar3 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar3 + 0xd0))
      ;
    }
    *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x590) + 0x2518) =
         (longlong)(int)uVar8 * 0x170 + _DAT_180c95ff0;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x590);
    lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x8f8) + 0x9f0);
    if (lVar4 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = *(int32_t *)
               ((longlong)*(int *)(lVar4 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar4 + 0xd0));
    }
    lVar4 = *(longlong *)(lVar3 + 0x2500);
    if ((lVar4 != 0) &&
       (uVar5 = FUN_18054f2b0(*(uint64_t *)(lVar3 + 0x2518),
                              *(int32_t *)(*(longlong *)(lVar4 + 0xb0) + 0x20),
                              *(int32_t *)(*(longlong *)(lVar4 + 0x2590) + 0x10),uVar9,
                              *(int32_t *)(lVar4 + 0x2450)), (int)uVar5 != -1)) {
      return uVar5;
    }
    if ((uVar7 == 0xffffffff) ||
       (*(int *)(*(longlong *)
                  ((longlong)*(int *)(*(longlong *)(param_1 + 0x590) + 0xac) * 0xe0 + 0x78 +
                  _DAT_180c95fb0) + (longlong)(int)uVar7 * 8) < 0)) {
      uVar7 = 0xffffffff;
      if ((uVar1 != 0xffffffff) &&
         (uVar7 = 0xffffffff,
         -1 < *(int *)(*(longlong *)
                        ((longlong)*(int *)(*(longlong *)(param_1 + 0x590) + 0xac) * 0xe0 + 0x78 +
                        _DAT_180c95fb0) + (longlong)(int)uVar1 * 8))) {
        uVar7 = uVar1;
      }
      return (ulonglong)uVar7;
    }
  }
  else {
    uVar9 = (**(code **)(*plVar2 + 0x80))(plVar2,0);
    *param_2 = uVar9;
  }
  return (ulonglong)uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050d690(longlong param_1)
void FUN_18050d690(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x590);
  lVar3 = 0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  lVar5 = (longlong)*(int *)(lVar1 + 0x12b0);
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (3 < lVar5) {
    pfVar2 = (float *)(lVar1 + 0x12c4);
    lVar6 = (lVar5 - 4U >> 2) + 1;
    lVar3 = lVar6 * 4;
    do {
      fVar7 = fVar8;
      if (*(short *)(*(longlong *)(pfVar2 + -3) + 0x7e) != -1) {
        lVar4 = (longlong)*(short *)(*(longlong *)(pfVar2 + -3) + 0x7e) * 0x68 + _DAT_180c95ed0;
        if (0.0 < pfVar2[1]) {
          fVar7 = *(float *)(lVar4 + 0x40);
          if (*(float *)(lVar4 + 0x40) <= fVar8) {
            fVar7 = fVar8;
          }
          if (*(float *)(lVar4 + 0x44) <= fVar9) {
            fVar9 = *(float *)(lVar4 + 0x44);
          }
        }
        fVar11 = fVar11 + *pfVar2 * *(float *)(lVar4 + 0x44);
        fVar10 = fVar10 + *pfVar2 * *(float *)(lVar4 + 0x40);
      }
      fVar8 = fVar7;
      if (*(short *)(*(longlong *)(pfVar2 + 0xf) + 0x7e) != -1) {
        lVar4 = (longlong)*(short *)(*(longlong *)(pfVar2 + 0xf) + 0x7e) * 0x68 + _DAT_180c95ed0;
        if (0.0 < pfVar2[0x13]) {
          fVar8 = *(float *)(lVar4 + 0x40);
          if (*(float *)(lVar4 + 0x40) <= fVar7) {
            fVar8 = fVar7;
          }
          if (*(float *)(lVar4 + 0x44) <= fVar9) {
            fVar9 = *(float *)(lVar4 + 0x44);
          }
        }
        fVar11 = fVar11 + pfVar2[0x12] * *(float *)(lVar4 + 0x44);
        fVar10 = fVar10 + pfVar2[0x12] * *(float *)(lVar4 + 0x40);
      }
      fVar7 = fVar8;
      if (*(short *)(*(longlong *)(pfVar2 + 0x21) + 0x7e) != -1) {
        lVar4 = (longlong)*(short *)(*(longlong *)(pfVar2 + 0x21) + 0x7e) * 0x68 + _DAT_180c95ed0;
        if (0.0 < pfVar2[0x25]) {
          fVar7 = *(float *)(lVar4 + 0x40);
          if (*(float *)(lVar4 + 0x40) <= fVar8) {
            fVar7 = fVar8;
          }
          if (*(float *)(lVar4 + 0x44) <= fVar9) {
            fVar9 = *(float *)(lVar4 + 0x44);
          }
        }
        fVar11 = fVar11 + pfVar2[0x24] * *(float *)(lVar4 + 0x44);
        fVar10 = fVar10 + pfVar2[0x24] * *(float *)(lVar4 + 0x40);
      }
      fVar8 = fVar7;
      if (*(short *)(*(longlong *)(pfVar2 + 0x33) + 0x7e) != -1) {
        lVar4 = (longlong)*(short *)(*(longlong *)(pfVar2 + 0x33) + 0x7e) * 0x68 + _DAT_180c95ed0;
        if (0.0 < pfVar2[0x37]) {
          fVar8 = *(float *)(lVar4 + 0x40);
          if (*(float *)(lVar4 + 0x40) <= fVar7) {
            fVar8 = fVar7;
          }
          if (*(float *)(lVar4 + 0x44) <= fVar9) {
            fVar9 = *(float *)(lVar4 + 0x44);
          }
        }
        fVar11 = fVar11 + pfVar2[0x36] * *(float *)(lVar4 + 0x44);
        fVar10 = fVar10 + pfVar2[0x36] * *(float *)(lVar4 + 0x40);
      }
      pfVar2 = pfVar2 + 0x48;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lVar3 < lVar5) {
    lVar5 = lVar5 - lVar3;
    pfVar2 = (float *)(lVar1 + 0x12c4 + lVar3 * 0x48);
    fVar7 = fVar8;
    do {
      fVar8 = fVar7;
      if (*(short *)(*(longlong *)(pfVar2 + -3) + 0x7e) != -1) {
        lVar3 = (longlong)*(short *)(*(longlong *)(pfVar2 + -3) + 0x7e) * 0x68 + _DAT_180c95ed0;
        if (0.0 < pfVar2[1]) {
          fVar8 = *(float *)(lVar3 + 0x40);
          if (*(float *)(lVar3 + 0x40) <= fVar7) {
            fVar8 = fVar7;
          }
          if (*(float *)(lVar3 + 0x44) <= fVar9) {
            fVar9 = *(float *)(lVar3 + 0x44);
          }
        }
        fVar11 = fVar11 + *pfVar2 * *(float *)(lVar3 + 0x44);
        fVar10 = fVar10 + *pfVar2 * *(float *)(lVar3 + 0x40);
      }
      pfVar2 = pfVar2 + 0x12;
      lVar5 = lVar5 + -1;
      fVar7 = fVar8;
    } while (lVar5 != 0);
  }
  if (fVar11 <= fVar9) {
    fVar9 = fVar11;
  }
  if (fVar8 <= fVar10) {
    fVar8 = fVar10;
  }
  *(float *)(param_1 + 0xa40) = fVar9;
  *(float *)(param_1 + 0xa44) = fVar8;
  return;
}



ulonglong FUN_18050d900(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  int8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar3 = *(longlong *)(param_1 + 0x8d8);
  uVar7 = 0;
  fVar18 = 0.07;
  uVar12 = 0xffffffff;
  uVar1 = *(uint *)(lVar3 + 0x52ed94);
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x30b0);
    uVar10 = uVar7;
    do {
      if (-1 < *piVar6) goto LAB_18050d968;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x298;
    } while ((longlong)uVar7 < (longlong)(int)uVar1);
  }
  uVar10 = (ulonglong)uVar1;
LAB_18050d968:
  if ((int)uVar10 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 0x10);
    do {
      iVar8 = (int)uVar10;
      if ((((iVar8 != iVar2) &&
           (lVar11 = (longlong)iVar8 * 0xa60 + lVar3, *(int *)(lVar11 + 0x3608) == 1)) &&
          ((*(byte *)(lVar11 + 0x360c) & 8) != 0)) &&
         (cVar5 = func_0x000180508390(param_1,lVar11 + 0x30a0), cVar5 == '\0')) {
        lVar11 = *(longlong *)(lVar11 + 0x30c0);
        lVar4 = *(longlong *)(param_1 + 0x20);
        fVar16 = *(float *)(lVar11 + 0xc) - *(float *)(lVar4 + 0xc);
        fVar17 = *(float *)(lVar11 + 0x10) - *(float *)(lVar4 + 0x10);
        fVar13 = *(float *)(lVar11 + 0x14) - *(float *)(lVar4 + 0x14);
        fVar15 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
        auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar13 = auVar14._0_4_;
        fVar13 = fVar13 * 0.5 * (3.0 - fVar15 * fVar13 * fVar13);
        fVar16 = fVar17 * fVar13 * *(float *)(param_1 + 0x4a0) +
                 fVar16 * fVar13 * *(float *)(param_1 + 0x49c) + 0.5;
        if (0.0 <= fVar16) {
          if (1.2 <= fVar16) {
            fVar16 = 1.2;
          }
        }
        else {
          fVar16 = 0.0;
        }
        fVar13 = 1.0 / (fVar13 * fVar15 + 0.5);
        if (0.0 <= fVar13) {
          if (1.0 <= fVar13) {
            fVar13 = 1.0;
          }
        }
        else {
          fVar13 = 0.0;
        }
        if (fVar18 < fVar13 * fVar16) {
          uVar12 = uVar10;
          fVar18 = fVar13 * fVar16;
        }
      }
      uVar9 = (uint)*(short *)(lVar3 + 0x52dda0 + (longlong)iVar8 * 2);
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar1);
  }
  return uVar12;
}



int FUN_18050d971(float param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int unaff_EBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar4;
  int unaff_R14D;
  int unaff_R15D;
  float extraout_XMM0_Da;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM10_Da;
  
  iVar1 = *(int *)(unaff_RSI + 0x10);
  do {
    if (((unaff_EBX != iVar1) &&
        (lVar4 = (longlong)unaff_EBX * 0xa60 + unaff_RBP, *(int *)(lVar4 + 0x3608) == 1)) &&
       ((*(byte *)(lVar4 + 0x360c) & 8) != 0)) {
      cVar3 = func_0x000180508390(param_1,lVar4 + 0x30a0);
      param_1 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        lVar4 = *(longlong *)(lVar4 + 0x30c0);
        lVar2 = *(longlong *)(unaff_RSI + 0x20);
        fVar8 = *(float *)(lVar4 + 0xc) - *(float *)(lVar2 + 0xc);
        fVar9 = *(float *)(lVar4 + 0x10) - *(float *)(lVar2 + 0x10);
        fVar5 = *(float *)(lVar4 + 0x14) - *(float *)(lVar2 + 0x14);
        fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + fVar5 * fVar5;
        auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 * 0.5 * (3.0 - fVar7 * fVar5 * fVar5);
        fVar8 = fVar9 * fVar5 * *(float *)(unaff_RSI + 0x4a0) +
                fVar8 * fVar5 * *(float *)(unaff_RSI + 0x49c) + 0.5;
        if (0.0 <= fVar8) {
          if (1.2 <= fVar8) {
            fVar8 = 1.2;
          }
        }
        else {
          fVar8 = 0.0;
        }
        param_1 = 1.0 / (fVar5 * fVar7 + 0.5);
        if (0.0 <= param_1) {
          if (1.0 <= param_1) {
            param_1 = 1.0;
          }
        }
        else {
          param_1 = 0.0;
        }
        param_1 = param_1 * fVar8;
        if (unaff_XMM10_Da < param_1) {
          unaff_XMM10_Da = param_1;
          unaff_R14D = unaff_EBX;
        }
      }
    }
    unaff_EBX = (int)*(short *)(unaff_RBP + 0x52dda0 + (longlong)unaff_EBX * 2);
  } while (unaff_EBX < unaff_R15D);
  return unaff_R14D;
}



int32_t FUN_18050db3d(void)

{
  int32_t unaff_R14D;
  
  return unaff_R14D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050db60(longlong param_1)
void FUN_18050db60(longlong param_1)

{
  int8_t uVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int32_t uVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int8_t auStack_88 [32];
  int8_t uStack_68;
  int aiStack_58 [4];
  ulonglong uStack_48;
  
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_88;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
  if ((lVar7 != 0) &&
     ((*(byte *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar7 + 0xd0)) >> 1
      & 1) != 0)) goto FUN_18050dec2;
  iVar10 = 0;
  lVar11 = *(longlong *)(param_1 + 0x8d8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x9f0);
  if ((int)*(float *)(_DAT_180c95fc8 + 0xc) < 2) {
    fVar14 = *(float *)(lVar11 + 0x98d294);
    fVar16 = *(float *)(lVar11 + 0x98d298);
    fVar17 = *(float *)(lVar11 + 0x98d28c);
    fVar18 = *(float *)(lVar11 + 0x98d290);
    if ((int)*(float *)(_DAT_180c95fc8 + 0xc) == 0) {
      fVar14 = *(float *)(lVar11 + 0x98d298);
      fVar16 = *(float *)(lVar11 + 0x98d294);
      fVar17 = *(float *)(lVar11 + 0x98d290);
      fVar18 = *(float *)(lVar11 + 0x98d28c);
    }
    fVar15 = fVar14;
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1730) != 0) {
      fVar15 = fVar16;
      fVar16 = fVar14;
    }
    piVar5 = aiStack_58;
    lVar11 = 4;
    do {
      if (fVar17 + fVar18 + fVar15 + fVar16 == 0.0) {
        iVar6 = *(int *)(param_1 + 0x688);
        *piVar5 = iVar6;
        if (iVar6 == 0) {
LAB_18050dd0d:
          fVar16 = -1e+08;
        }
        else if (iVar6 == 1) {
LAB_18050dcf6:
          fVar15 = -1e+08;
        }
        else {
          if (iVar6 == 2) goto LAB_18050dce0;
          if (iVar6 == 3) goto LAB_18050dcc9;
          *piVar5 = 1;
          fVar15 = -1e+08;
        }
      }
      else if (((fVar17 < fVar18) || (fVar17 < fVar15)) || (fVar17 < fVar16)) {
        if (((fVar18 < fVar17) || (fVar18 < fVar15)) || (fVar18 < fVar16)) {
          if (((fVar16 <= fVar15) && (fVar17 <= fVar15)) && (fVar18 <= fVar15)) {
            *piVar5 = 1;
            goto LAB_18050dcf6;
          }
          if (((fVar16 < fVar15) || (fVar16 < fVar17)) || (fVar16 < fVar18)) goto LAB_18050dd10;
          *piVar5 = 0;
          goto LAB_18050dd0d;
        }
        *piVar5 = 2;
LAB_18050dce0:
        fVar18 = -1e+08;
      }
      else {
        *piVar5 = 3;
LAB_18050dcc9:
        fVar17 = -1e+08;
      }
LAB_18050dd10:
      piVar5 = piVar5 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar9 = aiStack_58[2];
    iVar8 = aiStack_58[1];
    iVar6 = aiStack_58[0];
  }
  else {
    iVar6 = *(int *)(lVar11 + 0x98d948);
    if (iVar6 == 0) {
      iVar9 = 2;
LAB_18050dd9a:
      iVar8 = 1;
    }
    else if (iVar6 == 1) {
      iVar9 = 2;
      iVar8 = 0;
    }
    else {
      iVar9 = 0;
      if ((iVar6 == 2) || (iVar9 = 0, iVar6 == 3)) goto LAB_18050dd9a;
      aiStack_58[0] = 1;
      aiStack_58[1] = 0;
      uVar3 = aiStack_58._0_8_;
      aiStack_58[2] = 2;
      aiStack_58[3] = 3;
      uVar4 = aiStack_58._8_8_;
      aiStack_58[2] = 2;
      aiStack_58[1] = 0;
      aiStack_58[0] = 1;
      iVar9 = aiStack_58[2];
      iVar8 = aiStack_58[1];
      iVar6 = aiStack_58[0];
      aiStack_58._0_8_ = uVar3;
      aiStack_58._8_8_ = uVar4;
    }
  }
  *(int *)(param_1 + 0x688) = iVar6;
  if (lVar7 != 0) {
    iVar10 = *(int *)((longlong)*(int *)(lVar7 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar7 + 0xd0));
  }
  lVar7 = (longlong)iVar10 * 0x170 + _DAT_180c95ff0;
  if (lVar2 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    uVar12 = *(int32_t *)
              ((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar2 + 0xd0));
  }
  bVar13 = (byte)((uint)*(int32_t *)(param_1 + 0x564) >> 0x1f) ^ 1;
  uVar1 = *(int8_t *)(*(longlong *)(param_1 + 0x590) + 0x34bc);
  uStack_68 = uVar1;
  lVar11 = FUN_18054f900(lVar7,iVar6,bVar13,uVar12);
  if (((lVar11 == 0) || (*(int *)(lVar11 + 0x104) == -1)) &&
     ((uStack_68 = uVar1, lVar11 = FUN_18054f900(lVar7,iVar8,bVar13,uVar12), lVar11 == 0 ||
      (*(int *)(lVar11 + 0x104) == -1)))) {
    uStack_68 = uVar1;
    FUN_18054f900(lVar7,iVar9,bVar13,uVar12);
  }
FUN_18050dec2:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18050dbc7(uint64_t param_1,uint64_t param_2,int param_3,longlong param_4,
void FUN_18050dbc7(uint64_t param_1,uint64_t param_2,int param_3,longlong param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7,ulonglong param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)

{
  int8_t uVar1;
  longlong in_RAX;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong in_R10;
  longlong in_R11;
  int32_t uVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  
  lVar7 = *(longlong *)(in_R11 + 0x8d8);
  lVar2 = *(longlong *)(param_4 + 0x9f0);
  if ((int)*(float *)(in_RAX + 0xc) < 2) {
    fVar10 = *(float *)(lVar7 + 0x98d294);
    fVar12 = *(float *)(lVar7 + 0x98d298);
    fVar13 = *(float *)(lVar7 + 0x98d28c);
    fVar14 = *(float *)(lVar7 + 0x98d290);
    if ((int)*(float *)(in_RAX + 0xc) == 0) {
      fVar10 = *(float *)(lVar7 + 0x98d298);
      fVar12 = *(float *)(lVar7 + 0x98d294);
      fVar13 = *(float *)(lVar7 + 0x98d290);
      fVar14 = *(float *)(lVar7 + 0x98d28c);
    }
    fVar11 = fVar10;
    if (*(int *)(SYSTEM_STATE_MANAGER + 0x1730) != param_3) {
      fVar11 = fVar12;
      fVar12 = fVar10;
    }
    piVar3 = (int *)&param_6;
    lVar7 = 4;
    param_10 = unaff_XMM6_Da;
    param_11 = unaff_XMM6_Dc;
    do {
      if (fVar13 + fVar14 + fVar11 + fVar12 == 0.0) {
        iVar4 = *(int *)(in_R11 + 0x688);
        *piVar3 = iVar4;
        if (iVar4 == 0) {
LAB_18050dd0d:
          fVar12 = -1e+08;
        }
        else if (iVar4 == 1) {
LAB_18050dcf6:
          fVar11 = -1e+08;
        }
        else {
          if (iVar4 == 2) goto LAB_18050dce0;
          if (iVar4 == 3) goto LAB_18050dcc9;
          *piVar3 = 1;
          fVar11 = -1e+08;
        }
      }
      else if (((fVar13 < fVar14) || (fVar13 < fVar11)) || (fVar13 < fVar12)) {
        if (((fVar14 < fVar13) || (fVar14 < fVar11)) || (fVar14 < fVar12)) {
          if (((fVar12 <= fVar11) && (fVar13 <= fVar11)) && (fVar14 <= fVar11)) {
            *piVar3 = 1;
            goto LAB_18050dcf6;
          }
          if (((fVar12 < fVar11) || (fVar12 < fVar13)) || (fVar12 < fVar14)) goto LAB_18050dd10;
          *piVar3 = param_3;
          goto LAB_18050dd0d;
        }
        *piVar3 = 2;
LAB_18050dce0:
        fVar14 = -1e+08;
      }
      else {
        *piVar3 = 3;
LAB_18050dcc9:
        fVar13 = -1e+08;
      }
LAB_18050dd10:
      piVar3 = piVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar6 = (int)param_7;
    iVar5 = param_6._4_4_;
    iVar4 = (int)param_6;
    goto LAB_18050dd9f;
  }
  iVar4 = *(int *)(lVar7 + 0x98d948);
  if (iVar4 == 0) {
    iVar6 = 2;
  }
  else {
    if (iVar4 == 1) {
      iVar6 = 2;
      iVar5 = param_3;
      goto LAB_18050dd9f;
    }
    iVar6 = param_3;
    if ((iVar4 != 2) && (iVar4 != 3)) {
      param_6 = 1;
      param_7 = 0x300000002;
      param_7._0_4_ = 2;
      param_6._4_4_ = 0;
      param_6._0_4_ = 1;
      iVar6 = (int)param_7;
      iVar5 = param_6._4_4_;
      iVar4 = (int)param_6;
      goto LAB_18050dd9f;
    }
  }
  iVar5 = 1;
LAB_18050dd9f:
  *(int *)(in_R11 + 0x688) = iVar4;
  if (in_R10 != 0) {
    param_3 = *(int *)((longlong)*(int *)(in_R10 + 0xf0) * 0xa0 + 100 + *(longlong *)(in_R10 + 0xd0)
                      );
  }
  lVar7 = (longlong)param_3 * 0x170 + _DAT_180c95ff0;
  if (lVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(int32_t *)
             ((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 100 + *(longlong *)(lVar2 + 0xd0));
  }
  bVar9 = (byte)((uint)*(int32_t *)(in_R11 + 0x564) >> 0x1f) ^ 1;
  uVar1 = *(int8_t *)(*(longlong *)(in_R11 + 0x590) + 0x34bc);
  lVar2 = FUN_18054f900(lVar7,iVar4,bVar9,uVar8,uVar1);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x104) == -1)) &&
     ((lVar2 = FUN_18054f900(lVar7,iVar5,bVar9,uVar8,uVar1), lVar2 == 0 ||
      (*(int *)(lVar2 + 0x104) == -1)))) {
    FUN_18054f900(lVar7,iVar6,bVar9,uVar8,uVar1);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(param_8 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



