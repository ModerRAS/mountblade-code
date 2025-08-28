#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part115.c - 9 个函数

// 函数: void FUN_180127d80(void)
// 功能: 执行游戏对象选择和碰撞检测逻辑
void FUN_180127d80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar5;
  longlong lVar6;
  longlong in_RAX;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  longlong *plVar10;
  undefined8 unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong in_R10;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fStackX_8;
  float fStackX_c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fVar4;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_RBP;
  lVar9 = 0;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RDI;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  lVar13 = *(longlong *)(in_R10 + 0x1b78);
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  if (lVar13 == 0) {
    lVar13 = 0;
    lVar5 = lVar9;
  }
  else {
    lVar5 = *(longlong *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(in_R10 + 0x1c80);
    lVar13 = *(longlong *)(in_R10 + 0x1b78);
  }
  lVar7 = lVar9;
  if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0xc) & 0x200) == 0)) {
    lVar7 = lVar13;
  }
  fVar1 = *(float *)(in_R10 + 0x167c);
  fVar2 = *(float *)(in_R10 + 0x1680);
  fStack0000000000000070 = *(float *)(in_R10 + 0x167c);
  fStack0000000000000074 = *(float *)(in_R10 + 0x1680);
  if (*(char *)(in_R10 + 0xcb) != '\0') {
    fStack0000000000000070 = fVar1;
    if (fVar1 <= 4.0) {
      fStack0000000000000070 = 4.0;
    }
    fStack0000000000000074 = fVar2;
    if (fVar2 <= 4.0) {
      fStack0000000000000074 = 4.0;
    }
  }
  lVar11 = lVar9;
  if (0 < *(int *)(in_R10 + 0x1aa0)) {
    lVar8 = (longlong)*(int *)(in_R10 + 0x1aa0) + -1;
    plVar10 = (longlong *)(*(longlong *)(in_R10 + 0x1aa8) + lVar8 * 8);
    lVar12 = lVar7;
    do {
      lVar6 = *plVar10;
      lVar7 = lVar12;
      if ((((*(char *)(lVar6 + 0xaf) != '\0') && (*(char *)(lVar6 + 0xb6) == '\0')) &&
          ((*(uint *)(lVar6 + 0xc) >> 9 & 1) == 0)) &&
         (*(longlong *)(lVar6 + 0x28) == *(longlong *)(in_R10 + 0x1c80))) {
        fStackX_8 = (float)*(undefined8 *)(lVar6 + 0x240);
        fStackX_c = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x240) >> 0x20);
        fVar3 = fVar1;
        fVar4 = fVar2;
        if ((*(uint *)(lVar6 + 0xc) & 0x1000002) == 0) {
          fVar3 = fStack0000000000000070;
          fVar4 = fStack0000000000000074;
        }
        fVar15 = *(float *)(in_R10 + 0x118);
        if ((((float)*(undefined8 *)(lVar6 + 0x238) - fVar3 <= fVar15) &&
            (fVar14 = *(float *)(in_R10 + 0x11c),
            (float)((ulonglong)*(undefined8 *)(lVar6 + 0x238) >> 0x20) - fVar4 <= fVar14)) &&
           ((fVar15 < fStackX_8 + fVar3 && (fVar14 < fStackX_c + fVar4)))) {
          if (*(short *)(lVar6 + 0x268) != 0) {
            fVar15 = fVar15 - *(float *)(lVar6 + 0x40);
            fVar14 = fVar14 - *(float *)(lVar6 + 0x44);
            if ((((float)(int)*(short *)(lVar6 + 0x26c) <= fVar15) &&
                ((float)(int)*(short *)(lVar6 + 0x26e) <= fVar14)) &&
               ((fVar15 < (float)((int)*(short *)(lVar6 + 0x268) + (int)*(short *)(lVar6 + 0x26c))
                && (fVar14 < (float)((int)*(short *)(lVar6 + 0x26a) + (int)*(short *)(lVar6 + 0x26e)
                                    ))))) goto LAB_180127fd0;
          }
          lVar7 = lVar6;
          if (lVar12 != 0) {
            lVar7 = lVar12;
          }
          if ((lVar11 == 0) &&
             ((lVar13 == 0 || (*(longlong *)(lVar6 + 0x3a0) != *(longlong *)(lVar13 + 0x3a0))))) {
            lVar11 = lVar6;
          }
          if ((lVar7 != 0) && (lVar11 != 0)) break;
        }
      }
LAB_180127fd0:
      plVar10 = plVar10 + -1;
      lVar8 = lVar8 + -1;
      lVar12 = lVar7;
    } while (-1 < lVar8);
  }
  *(longlong *)(in_R10 + 0x1b00) = lVar7;
  if (lVar7 != 0) {
    lVar9 = *(longlong *)(lVar7 + 0x3a0);
  }
  *(longlong *)(in_R10 + 0x1b08) = lVar9;
  *(longlong *)(in_R10 + 0x1b10) = lVar11;
  if (lVar13 != 0) {
    *(longlong *)(lVar13 + 0x28) = lVar5;
  }
  return;
}





// 函数: void FUN_180127d8a(void)
// 功能: 执行带标记参数的游戏对象选择和碰撞检测逻辑
void FUN_180127d8a(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar5;
  longlong lVar6;
  longlong in_RAX;
  longlong lVar7;
  longlong lVar8;
  longlong unaff_RBP;
  longlong *plVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong in_R10;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fStackX_8;
  float fStackX_c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fVar4;
  
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  lVar13 = *(longlong *)(in_R10 + 0x1b78);
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  *(undefined4 *)(in_RAX + -0x48) = unaff_XMM8_Da;
  *(undefined4 *)(in_RAX + -0x44) = unaff_XMM8_Db;
  *(undefined4 *)(in_RAX + -0x40) = unaff_XMM8_Dc;
  *(undefined4 *)(in_RAX + -0x3c) = unaff_XMM8_Dd;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM9_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM9_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM9_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM9_Dd;
  if (lVar13 == 0) {
    lVar13 = 0;
    lVar5 = unaff_RBP;
  }
  else {
    lVar5 = *(longlong *)(lVar13 + 0x28);
    *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(in_R10 + 0x1c80);
    lVar13 = *(longlong *)(in_R10 + 0x1b78);
  }
  lVar7 = unaff_RBP;
  if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0xc) & 0x200) == 0)) {
    lVar7 = lVar13;
  }
  fVar1 = *(float *)(in_R10 + 0x167c);
  fVar2 = *(float *)(in_R10 + 0x1680);
  fStack0000000000000070 = *(float *)(in_R10 + 0x167c);
  cVar10 = (char)unaff_RBP;
  fStack0000000000000074 = *(float *)(in_R10 + 0x1680);
  if (*(char *)(in_R10 + 0xcb) != cVar10) {
    fStack0000000000000070 = fVar1;
    if (fVar1 <= 4.0) {
      fStack0000000000000070 = 4.0;
    }
    fStack0000000000000074 = fVar2;
    if (fVar2 <= 4.0) {
      fStack0000000000000074 = 4.0;
    }
  }
  lVar11 = unaff_RBP;
  if (0 < *(int *)(in_R10 + 0x1aa0)) {
    lVar8 = (longlong)*(int *)(in_R10 + 0x1aa0) + -1;
    plVar9 = (longlong *)(*(longlong *)(in_R10 + 0x1aa8) + lVar8 * 8);
    lVar12 = lVar7;
    do {
      lVar6 = *plVar9;
      lVar7 = lVar12;
      if ((((*(char *)(lVar6 + 0xaf) != cVar10) && (*(char *)(lVar6 + 0xb6) == cVar10)) &&
          ((*(uint *)(lVar6 + 0xc) >> 9 & 1) == 0)) &&
         (*(longlong *)(lVar6 + 0x28) == *(longlong *)(in_R10 + 0x1c80))) {
        fStackX_8 = (float)*(undefined8 *)(lVar6 + 0x240);
        fStackX_c = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x240) >> 0x20);
        fVar3 = fVar1;
        fVar4 = fVar2;
        if ((*(uint *)(lVar6 + 0xc) & 0x1000002) == 0) {
          fVar3 = fStack0000000000000070;
          fVar4 = fStack0000000000000074;
        }
        fVar15 = *(float *)(in_R10 + 0x118);
        if ((((float)*(undefined8 *)(lVar6 + 0x238) - fVar3 <= fVar15) &&
            (fVar14 = *(float *)(in_R10 + 0x11c),
            (float)((ulonglong)*(undefined8 *)(lVar6 + 0x238) >> 0x20) - fVar4 <= fVar14)) &&
           ((fVar15 < fStackX_8 + fVar3 && (fVar14 < fStackX_c + fVar4)))) {
          if (*(short *)(lVar6 + 0x268) != 0) {
            fVar15 = fVar15 - *(float *)(lVar6 + 0x40);
            fVar14 = fVar14 - *(float *)(lVar6 + 0x44);
            if ((((float)(int)*(short *)(lVar6 + 0x26c) <= fVar15) &&
                ((float)(int)*(short *)(lVar6 + 0x26e) <= fVar14)) &&
               ((fVar15 < (float)((int)*(short *)(lVar6 + 0x268) + (int)*(short *)(lVar6 + 0x26c))
                && (fVar14 < (float)((int)*(short *)(lVar6 + 0x26a) + (int)*(short *)(lVar6 + 0x26e)
                                    ))))) goto LAB_180127fd0;
          }
          lVar7 = lVar6;
          if (lVar12 != 0) {
            lVar7 = lVar12;
          }
          if ((lVar11 == 0) &&
             ((lVar13 == 0 || (*(longlong *)(lVar6 + 0x3a0) != *(longlong *)(lVar13 + 0x3a0))))) {
            lVar11 = lVar6;
          }
          if ((lVar7 != 0) && (lVar11 != 0)) break;
        }
      }
LAB_180127fd0:
      plVar9 = plVar9 + -1;
      lVar8 = lVar8 + -1;
      lVar12 = lVar7;
    } while (-1 < lVar8);
  }
  *(longlong *)(in_R10 + 0x1b00) = lVar7;
  if (lVar7 != 0) {
    unaff_RBP = *(longlong *)(lVar7 + 0x3a0);
  }
  *(longlong *)(in_R10 + 0x1b08) = unaff_RBP;
  *(longlong *)(in_R10 + 0x1b10) = lVar11;
  if (lVar13 != 0) {
    *(longlong *)(lVar13 + 0x28) = lVar5;
  }
  return;
}





// 函数: void FUN_180127e4e(void)
// 功能: 执行索引范围的游戏对象搜索和碰撞检测
void FUN_180127e4e(void)

{
  longlong lVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R14;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float fStackX_8;
  float fStackX_c;
  
  lVar3 = in_RAX + -1;
  plVar4 = (longlong *)(*(longlong *)(in_R10 + 0x1aa8) + lVar3 * 8);
  do {
    lVar1 = *plVar4;
    lVar2 = in_R9;
    if ((((*(char *)(lVar1 + 0xaf) != (char)unaff_RBP) &&
         (*(char *)(lVar1 + 0xb6) == (char)unaff_RBP)) && ((*(uint *)(lVar1 + 0xc) >> 9 & 1) == 0))
       && (*(longlong *)(lVar1 + 0x28) == *(longlong *)(in_R10 + 0x1c80))) {
      fVar5 = (float)*(undefined8 *)(lVar1 + 0x238);
      fVar6 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x238) >> 0x20);
      fStackX_8 = (float)*(undefined8 *)(lVar1 + 0x240);
      fStackX_c = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x240) >> 0x20);
      if ((*(uint *)(lVar1 + 0xc) & 0x1000002) == 0) {
        fVar5 = fVar5 - unaff_XMM8_Da;
        fVar6 = fVar6 - unaff_XMM9_Da;
        fStackX_8 = fStackX_8 + unaff_XMM8_Da;
        fStackX_c = fStackX_c + unaff_XMM9_Da;
      }
      else {
        fVar5 = fVar5 - unaff_XMM6_Da;
        fVar6 = fVar6 - unaff_XMM7_Da;
        fStackX_8 = fStackX_8 + unaff_XMM6_Da;
        fStackX_c = fStackX_c + unaff_XMM7_Da;
      }
      fVar7 = *(float *)(in_R10 + 0x118);
      if (fVar5 <= fVar7) {
        fVar5 = *(float *)(in_R10 + 0x11c);
        if (((fVar6 <= fVar5) && (fVar7 < fStackX_8)) && (fVar5 < fStackX_c)) {
          if (*(short *)(lVar1 + 0x268) != 0) {
            fVar7 = fVar7 - *(float *)(lVar1 + 0x40);
            fVar5 = fVar5 - *(float *)(lVar1 + 0x44);
            if ((((float)(int)*(short *)(lVar1 + 0x26c) <= fVar7) &&
                ((float)(int)*(short *)(lVar1 + 0x26e) <= fVar5)) &&
               ((fVar7 < (float)((int)*(short *)(lVar1 + 0x268) + (int)*(short *)(lVar1 + 0x26c)) &&
                (fVar5 < (float)((int)*(short *)(lVar1 + 0x26a) + (int)*(short *)(lVar1 + 0x26e)))))
               ) goto LAB_180127fd0;
          }
          lVar2 = lVar1;
          if (in_R9 != 0) {
            lVar2 = in_R9;
          }
          if ((unaff_RDI == 0) &&
             ((in_R11 == 0 || (*(longlong *)(lVar1 + 0x3a0) != *(longlong *)(in_R11 + 0x3a0))))) {
            unaff_RDI = lVar1;
          }
          if ((lVar2 != 0) && (unaff_RDI != 0)) break;
        }
      }
    }
LAB_180127fd0:
    plVar4 = plVar4 + -1;
    lVar3 = lVar3 + -1;
    in_R9 = lVar2;
  } while (-1 < lVar3);
  *(longlong *)(in_R10 + 0x1b00) = lVar2;
  if (lVar2 != 0) {
    unaff_RBP = *(undefined8 *)(lVar2 + 0x3a0);
  }
  *(undefined8 *)(in_R10 + 0x1b08) = unaff_RBP;
  *(longlong *)(in_R10 + 0x1b10) = unaff_RDI;
  if (in_R11 != 0) {
    *(undefined8 *)(in_R11 + 0x28) = unaff_R14;
  }
  return;
}





// 函数: void FUN_180127fe8(void)
// 功能: 设置游戏对象选择结果
void FUN_180127fe8(void)

{
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R14;
  
  *(longlong *)(in_R10 + 0x1b00) = in_R9;
  if (in_R9 != 0) {
    unaff_RBP = *(undefined8 *)(in_R9 + 0x3a0);
  }
  *(undefined8 *)(in_R10 + 0x1b08) = unaff_RBP;
  *(undefined8 *)(in_R10 + 0x1b10) = unaff_RDI;
  if (in_R11 != 0) {
    *(undefined8 *)(in_R11 + 0x28) = unaff_R14;
  }
  return;
}





// 函数: void FUN_18012800a(void)
// 功能: 更新游戏对象属性引用
void FUN_18012800a(void)

{
  undefined8 unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R14;
  
  *(undefined8 *)(in_R10 + 0x1b08) = *(undefined8 *)(in_R9 + 0x3a0);
  *(undefined8 *)(in_R10 + 0x1b10) = unaff_RDI;
  if (in_R11 != 0) {
    *(undefined8 *)(in_R11 + 0x28) = unaff_R14;
  }
  return;
}





// 函数: void FUN_180128031(void)
// 功能: 重置游戏对象链表指针
void FUN_180128031(void)

{
  longlong in_R11;
  undefined8 unaff_R14;
  
  *(undefined8 *)(in_R11 + 0x28) = unaff_R14;
  return;
}



// 函数: ulonglong FUN_180128040(undefined8 *param_1,undefined8 *param_2,char param_3)
// 功能: 检测两个游戏对象之间的碰撞关系
ulonglong FUN_180128040(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  float *in_RAX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  fStack_50 = (float)*param_2;
  fStack_4c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_58 = (float)*param_1;
  fStack_54 = (float)((ulonglong)*param_1 >> 0x20);
  fVar2 = fStack_58;
  fVar3 = fStack_4c;
  fVar4 = fStack_54;
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    in_RAX = (float *)(lVar1 + 0x228);
    fVar2 = *in_RAX;
    if (*in_RAX <= fStack_58) {
      fVar2 = fStack_58;
    }
    fVar4 = *(float *)(lVar1 + 0x22c);
    if (*(float *)(lVar1 + 0x22c) <= fStack_54) {
      fVar4 = fStack_54;
    }
    fVar3 = *(float *)(lVar1 + 0x234);
    if (fStack_4c <= *(float *)(lVar1 + 0x234)) {
      fVar3 = fStack_4c;
    }
    if (*(float *)(lVar1 + 0x230) <= fStack_50) {
      fStack_50 = *(float *)(lVar1 + 0x230);
    }
  }
  if ((((fVar2 - *(float *)(_DAT_180c8a9b0 + 0x167c) <= *(float *)(_DAT_180c8a9b0 + 0x118)) &&
       (fVar4 - *(float *)(_DAT_180c8a9b0 + 0x1680) <= *(float *)(_DAT_180c8a9b0 + 0x11c))) &&
      (*(float *)(_DAT_180c8a9b0 + 0x118) < *(float *)(_DAT_180c8a9b0 + 0x167c) + fStack_50)) &&
     (*(float *)(_DAT_180c8a9b0 + 0x11c) < *(float *)(_DAT_180c8a9b0 + 0x1680) + fVar3)) {
    in_RAX = *(float **)(_DAT_180c8a9b0 + 0x1c80);
    if (((fVar4 < in_RAX[3] + in_RAX[5]) && (in_RAX[3] < fVar3)) &&
       ((fVar2 < in_RAX[2] + in_RAX[4] && (in_RAX[2] < fStack_50)))) {
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// 函数: undefined8 FUN_180128280(int param_1,char param_2)
// 功能: 检查游戏对象属性和动画状态
undefined8 FUN_180128280(int param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  
  fVar3 = *(float *)(_DAT_180c8a9b0 + 0x424 + (longlong)param_1 * 4);
  if (fVar3 == 0.0) {
    return 1;
  }
  if ((param_2 != '\0') && (*(float *)(_DAT_180c8a9b0 + 0x90) < fVar3)) {
    fVar3 = fVar3 - *(float *)(_DAT_180c8a9b0 + 0x90);
    fVar1 = *(float *)(_DAT_180c8a9b0 + 0x94);
    fVar2 = (float)fmodf(fVar3 - *(float *)(_DAT_180c8a9b0 + 0x18),fVar1);
    fmodf(fVar3,fVar1);
    if (fVar1 * 0.5 < extraout_XMM0_Da != fVar1 * 0.5 < fVar2) {
      return 1;
    }
  }
  return 0;
}



// 函数: undefined1 FUN_1801282c7(undefined8 param_1,undefined8 param_2,longlong param_3)
// 功能: 比较游戏对象的旋转角度关系
undefined1 FUN_1801282c7(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_XMM8_Da;
  
  fVar3 = *(float *)(param_3 + 0x94) * 0.5;
  fVar1 = (float)fmodf(unaff_XMM8_Da - *(float *)(param_3 + 0x18),*(float *)(param_3 + 0x94));
  fVar2 = (float)fmodf();
  if (fVar3 < fVar2 == fVar3 < fVar1) {
    return 0;
  }
  return 1;
}



// 函数: undefined1 FUN_180128336(void)
// 功能: 返回空状态检查结果
undefined1 FUN_180128336(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801283f0(longlong param_1,int param_2,float *param_3,undefined8 param_4,uint param_5)
// 功能: 初始化游戏对象并设置其属性
void FUN_1801283f0(longlong param_1,int param_2,float *param_3,undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_188 [32];
  longlong lStack_168;
  int iStack_160;
  float fStack_158;
  float fStack_154;
  undefined1 auStack_148 [256];
  ulonglong uStack_48;
  
  lVar6 = _DAT_180c8a9b0;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_188;
  puVar3 = *(undefined8 **)(_DAT_180c8a9b0 + 0x1af8);
  uVar2 = *(uint *)((longlong)puVar3 + 0xc);
  func_0x00018012df80(&fStack_158);
  uVar7 = 0;
  fVar8 = (float)(int)param_3[1];
  fVar9 = (float)(int)*param_3;
  bVar5 = fVar9 == 0.0;
  if (fVar8 == 0.0) {
    uVar7 = 2;
  }
  if ((fVar9 <= 0.0) && (fVar9 = fVar9 + fStack_158, fVar9 <= 4.0)) {
    fVar9 = 4.0;
  }
  if ((fVar8 <= 0.0) && (fVar8 = fVar8 + fStack_154, fVar8 <= 4.0)) {
    fVar8 = 4.0;
  }
  *(float *)(lVar6 + 0x1c04) = fVar9;
  *(float *)(lVar6 + 0x1c08) = fVar8;
  *(undefined4 *)(lVar6 + 0x1bd4) = 1;
  if (param_1 == 0) {
    lStack_168 = CONCAT44(lStack_168._4_4_,param_2);
    FUN_180121200(auStack_148,0x100,&UNK_180a064a8,*puVar3);
  }
  else {
    lStack_168 = param_1;
    iStack_160 = param_2;
    FUN_180121200(auStack_148,0x100,&UNK_180a06490,*puVar3);
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x1650);
  FUN_1801299b0(auStack_148,0,param_5 | uVar2 & 4 | 0x1200103);
  lVar4 = *(longlong *)(lVar6 + 0x1af8);
  *(undefined4 *)(lVar6 + 0x1650) = uVar1;
  *(int *)(lVar4 + 0x88) = param_2;
  *(uint *)(lVar4 + 0xd0) = uVar7 | bVar5;
  if (*(short *)(lVar4 + 0xb8) == 1) {
    puVar3[0x20] = *(undefined8 *)(lVar4 + 0x40);
  }
  if (((*(int *)(lVar6 + 0x1ca4) == param_2) && ((param_5 & 0x800000) == 0)) &&
     ((*(int *)(lVar4 + 0x174) != 0 || (*(char *)(lVar4 + 0x17d) != '\0')))) {
    FUN_18012d2e0(lVar4);
    func_0x000180131810(lVar4,0);
    func_0x000180123e90(param_2 + 1,lVar4);
    *(undefined4 *)(lVar6 + 0x1b60) = 2;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_188);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801285e0(void)
// 功能: 处理游戏对象的边界框和碰撞检测
void FUN_1801285e0(void)

{
  char *pcVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined8 uStackX_8;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined *puStack_40;
  
  lVar5 = _DAT_180c8a9b0;
  lVar11 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  if (*(short *)(lVar11 + 0xb8) < 2) {
    uStackX_8 = *(undefined8 *)(lVar11 + 0x48);
    fVar12 = (float)uStackX_8;
    if (((*(uint *)(lVar11 + 0xd0) & 1) != 0) && ((float)uStackX_8 <= 4.0)) {
      uStackX_8._4_4_ = (float)((ulonglong)uStackX_8 >> 0x20);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,0x40800000);
      fVar12 = 4.0;
    }
    fVar13 = uStackX_8._4_4_;
    if (((*(uint *)(lVar11 + 0xd0) & 2) != 0) && (uStackX_8._4_4_ <= 4.0)) {
      uStackX_8 = CONCAT44(0x40800000,(float)uStackX_8);
      fVar13 = 4.0;
    }
    FUN_18012cfe0();
    fVar3 = *(float *)(*(longlong *)(lVar5 + 0x1af8) + 0x100);
    fVar12 = fVar3 + fVar12;
    fVar4 = *(float *)(*(longlong *)(lVar5 + 0x1af8) + 0x104);
    fVar13 = fVar4 + fVar13;
    fStack_58 = fVar3;
    fStack_54 = fVar4;
    fStack_50 = fVar12;
    fStack_4c = fVar13;
    func_0x000180124080(&uStackX_8,0);
    lVar10 = _DAT_180c8a9b0;
    if (((*(int *)(lVar11 + 0x174) == 0) && (*(char *)(lVar11 + 0x17d) == '\0')) ||
       ((*(uint *)(lVar11 + 0xc) & 0x800000) != 0)) {
      lVar11 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
      *(undefined8 *)(lVar11 + 0x144) = 0;
      *(float *)(lVar11 + 0x14c) = fStack_58;
      *(float *)(lVar11 + 0x150) = fStack_54;
      *(float *)(lVar11 + 0x154) = fStack_50;
      *(float *)(lVar11 + 0x158) = fStack_4c;
      lVar5 = *(longlong *)(lVar10 + 0x1af8);
      if (((((*(float *)(lVar5 + 0x22c) <= fVar13 && fVar13 != *(float *)(lVar5 + 0x22c)) &&
            (fVar4 < *(float *)(lVar5 + 0x234))) &&
           ((*(float *)(lVar5 + 0x228) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x228) &&
            (fVar3 < *(float *)(lVar5 + 0x230))))) || (*(char *)(lVar10 + 0x2e38) != '\0')) &&
         (cVar6 = FUN_180128040(&fStack_58,&fStack_50,1), cVar6 != '\0')) {
        *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 1;
      }
    }
    else {
      FUN_180124190(&fStack_58,*(undefined4 *)(lVar11 + 0x88),0);
      if (*(int *)(lVar11 + 0x88) == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
        FUN_1801230e0(&fStack_58,1);
      }
      if ((*(int *)(lVar11 + 0x174) == 0) && (lVar11 == *(longlong *)(lVar5 + 0x1c98))) {
        fStack_50 = fStack_50 + 2.0;
        fStack_4c = fStack_4c + 2.0;
        fStack_58 = fStack_58 - 2.0;
        fStack_54 = fStack_54 - 2.0;
        if (*(int *)(lVar5 + 0x1ca0) == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
          FUN_1801230e0(&fStack_58,2);
        }
      }
    }
    return;
  }
  if ((1 < *(int *)(_DAT_180c8a9b0 + 0x1ad0)) || (*(char *)(_DAT_180c8a9b0 + 2) == '\0')) {
    lVar11 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    if (*(longlong *)(lVar11 + 0x210) != 0) {
      puStack_40 = (undefined *)0x18012d024;
      FUN_180134b80();
    }
    uVar7 = *(uint *)(lVar11 + 0xc);
    if ((uVar7 >> 0x1d & 1) == 0) {
      puStack_40 = (undefined *)0x18012d039;
      FUN_180126d80();
      uVar7 = *(uint *)(lVar11 + 0xc);
    }
    lVar9 = _DAT_180c8a9b0;
    lVar10 = 0;
    if (((uVar7 >> 0x18 & 1) == 0) && (pcVar1 = (char *)(_DAT_180c8a9b0 + 0x2e38), *pcVar1 != '\0'))
    {
      puStack_40 = (undefined *)0x18012d075;
      FUN_18013c760(&UNK_180a0677c);
      if (*(longlong *)(lVar9 + 0x2e40) != 0) {
        puStack_40 = (undefined *)0x18012d087;
        lVar8 = __acrt_iob_func(1);
        if (*(longlong *)(lVar9 + 0x2e40) == lVar8) {
          puStack_40 = (undefined *)0x18012d099;
          fflush();
        }
        else {
          puStack_40 = (undefined *)0x18012d0a1;
          fclose();
        }
        *(undefined8 *)(lVar9 + 0x2e40) = 0;
      }
      piVar2 = (int *)(lVar9 + 0x2e48);
      lVar8 = *(longlong *)(lVar9 + 0x2e50);
      if ((lVar8 != 0) && (1 < *piVar2 + -1)) {
        if (*(code **)(_DAT_180c8a9b0 + 0x100) != (code *)0x0) {
          puStack_40 = (undefined *)0x18012d0e1;
          (**(code **)(_DAT_180c8a9b0 + 0x100))(*(undefined8 *)(_DAT_180c8a9b0 + 0x108),lVar8);
          lVar8 = *(longlong *)(lVar9 + 0x2e50);
        }
        lVar9 = _DAT_180c8a9b0;
        if (lVar8 != 0) {
          piVar2[0] = 0;
          piVar2[1] = 0;
          if (lVar9 != 0) {
            piVar2 = (int *)(lVar9 + 0x3a8);
            *piVar2 = *piVar2 + -1;
          }
                    // WARNING: Subroutine does not return
          puStack_40 = &UNK_18012d10b;
          FUN_180059ba0(lVar8,_DAT_180c8a9a8);
        }
      }
      lVar9 = _DAT_180c8a9b0;
      *pcVar1 = '\0';
    }
    if (((*(longlong *)(lVar11 + 0x408) != 0) && ((*(byte *)(lVar11 + 0x432) & 2) != 0)) &&
       (lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0x408) + 0x68), lVar8 != 0)) {
      fVar12 = *(float *)(lVar11 + 0x11c);
      fVar13 = *(float *)(lVar11 + 0x74);
      *(float *)(lVar8 + 0x118) =
           (*(float *)(lVar11 + 0x118) + *(float *)(lVar11 + 0x70)) - *(float *)(lVar8 + 0x70);
      *(float *)(lVar8 + 0x11c) = (fVar12 + fVar13) - *(float *)(lVar8 + 0x74);
    }
    *(int *)(lVar5 + 0x1ad0) = *(int *)(lVar5 + 0x1ad0) + -1;
    if ((*(uint *)(lVar11 + 0xc) & 0x4000000) != 0) {
      *(int *)(lVar5 + 0x1bc0) = *(int *)(lVar5 + 0x1bc0) + -1;
    }
    if (*(int *)(lVar5 + 0x1ad0) != 0) {
      lVar10 = *(longlong *)
                (*(longlong *)(lVar5 + 0x1ad8) + -8 + (longlong)*(int *)(lVar5 + 0x1ad0) * 8);
    }
    *(longlong *)(lVar9 + 0x1af8) = lVar10;
    if (lVar10 != 0) {
      fVar12 = *(float *)(lVar9 + 0x19fc) * *(float *)(lVar10 + 0x2d8) * *(float *)(lVar10 + 0x2dc);
      *(float *)(lVar9 + 0x1a10) = fVar12;
      *(float *)(lVar9 + 0x19f8) = fVar12;
    }
    if (*(longlong *)(lVar5 + 0x1af8) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x1af8) + 0x28);
      if (lVar11 != 0) {
        *(undefined4 *)(lVar11 + 0x54) = *(undefined4 *)(lVar9 + 0x1a90);
      }
      if (((*(longlong *)(lVar9 + 0x1c78) != lVar11) &&
          (*(longlong *)(lVar9 + 0x1c78) = lVar11, lVar11 != 0)) &&
         (*(code **)(lVar9 + 0x15c0) != (code *)0x0)) {
                    // WARNING: Could not recover jumptable at 0x00018012d226. Too many branches
                    // WARNING: Treating indirect jump as call
        (**(code **)(lVar9 + 0x15c0))();
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012862b(undefined8 param_1)
// 功能: 更新游戏对象的位置和边界信息
void FUN_18012862b(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  ulonglong in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  *(undefined8 *)(unaff_RBP + 0x10) = param_1;
  fVar13 = *(float *)(unaff_RBP + 0x10);
  if (((in_RAX & 1) != 0) && (fVar13 <= 4.0)) {
    *(undefined4 *)(unaff_RBP + 0x10) = 0x40800000;
    fVar13 = 4.0;
  }
  fVar12 = *(float *)(unaff_RBP + 0x14);
  if (((in_RAX & 2) != 0) && (fVar12 <= 4.0)) {
    *(undefined4 *)(unaff_RBP + 0x14) = 0x40800000;
    fVar12 = 4.0;
  }
  FUN_18012cfe0();
  lVar4 = *(longlong *)(unaff_RDI + 0x1af8);
  fVar1 = *(float *)(lVar4 + 0x100);
  *(float *)(unaff_RBP + -0x50) = fVar1;
  fVar13 = fVar1 + fVar13;
  fVar2 = *(float *)(lVar4 + 0x104);
  *(float *)(unaff_RBP + -0x4c) = fVar2;
  fVar12 = fVar2 + fVar12;
  *(float *)(unaff_RBP + -0x48) = fVar13;
  *(float *)(unaff_RBP + -0x44) = fVar12;
  func_0x000180124080(unaff_RBP + 0x10,0);
  lVar4 = _DAT_180c8a9b0;
  if (((*(int *)(unaff_RBX + 0x174) == 0) && (*(char *)(unaff_RBX + 0x17d) == '\0')) ||
     ((*(uint *)(unaff_RBX + 0xc) & 0x800000) != 0)) {
    uVar6 = *(undefined4 *)(unaff_RBP + -0x50);
    uVar7 = *(undefined4 *)(unaff_RBP + -0x4c);
    uVar8 = *(undefined4 *)(unaff_RBP + -0x48);
    uVar9 = *(undefined4 *)(unaff_RBP + -0x44);
    lVar11 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
    *(undefined8 *)(lVar11 + 0x144) = 0;
    *(undefined4 *)(lVar11 + 0x14c) = uVar6;
    *(undefined4 *)(lVar11 + 0x150) = uVar7;
    *(undefined4 *)(lVar11 + 0x154) = uVar8;
    *(undefined4 *)(lVar11 + 0x158) = uVar9;
    lVar5 = *(longlong *)(lVar4 + 0x1af8);
    if ((((*(float *)(lVar5 + 0x22c) <= fVar12 && fVar12 != *(float *)(lVar5 + 0x22c)) &&
         (fVar2 < *(float *)(lVar5 + 0x234))) &&
        ((*(float *)(lVar5 + 0x228) <= fVar13 && fVar13 != *(float *)(lVar5 + 0x228) &&
         (fVar1 < *(float *)(lVar5 + 0x230))))) || (*(char *)(lVar4 + 0x2e38) != '\0')) {
      cVar10 = FUN_180128040(unaff_RBP + -0x50,unaff_RBP + -0x48,1);
      if (cVar10 != '\0') {
        *(uint *)(lVar11 + 0x148) = *(uint *)(lVar11 + 0x148) | 1;
      }
    }
  }
  else {
    FUN_180124190(unaff_RBP + -0x50,*(undefined4 *)(unaff_RBX + 0x88),0);
    if (*(int *)(unaff_RBX + 0x88) == *(int *)(_DAT_180c8a9b0 + 0x1ca0)) {
      FUN_1801230e0(unaff_RBP + -0x50,1);
    }
    if ((*(int *)(unaff_RBX + 0x174) == 0) && (unaff_RBX == *(longlong *)(unaff_RDI + 0x1c98))) {
      iVar3 = *(int *)(_DAT_180c8a9b0 + 0x1ca0);
      *(float *)(unaff_RBP + -0x48) = *(float *)(unaff_RBP + -0x48) + 2.0;
      *(float *)(unaff_RBP + -0x44) = *(float *)(unaff_RBP + -0x44) + 2.0;
      *(float *)(unaff_RBP + -0x50) = *(float *)(unaff_RBP + -0x50) - 2.0;
      *(float *)(unaff_RBP + -0x4c) = *(float *)(unaff_RBP + -0x4c) - 2.0;
      if (*(int *)(unaff_RDI + 0x1ca0) == iVar3) {
        FUN_1801230e0(unaff_RBP + -0x50,2);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



