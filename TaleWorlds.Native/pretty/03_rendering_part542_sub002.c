#include "TaleWorlds.Native.Split.h"

// 03_rendering_part542_sub002.c - 1 个函数

// 函数: void FUN_1805655b0(undefined8 *param_1,int param_2,int param_3)
void FUN_1805655b0(undefined8 *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar12 = (longlong)param_2;
  if (lVar12 < param_3) {
    uStack_70 = 0;
    uStack_6c = 0x7f7fffff;
    lVar11 = lVar12 * 0xc;
    do {
      lVar8 = 0;
      fVar14 = 3.4028235e+38;
      cVar1 = *(char *)param_1[3];
      uStack_78 = *(undefined4 *)(*(longlong *)param_1[1] + lVar12 * 8);
      uVar2 = *(uint *)param_1[2];
      uStack_74 = *(undefined4 *)(*(longlong *)param_1[1] + 4 + lVar12 * 8);
      lVar3 = *(longlong *)*param_1;
      lVar9 = lVar8;
      if (*(longlong *)(lVar3 + 0x2ee8) - *(longlong *)(lVar3 + 12000) >> 3 != 0) {
        puVar6 = (undefined8 *)func_0x000180388c90(lVar3 + 0x28c8,&uStack_78);
        plVar4 = (longlong *)puVar6[1];
        for (plVar10 = (longlong *)*puVar6; lVar9 = lVar8, plVar10 != plVar4; plVar10 = plVar10 + 1)
        {
          lVar9 = *plVar10;
          if (((((*(uint *)(lVar9 + 0x134) & uVar2 & 0xfffffffe) == (uVar2 & 0xfffffffe)) ||
               ((*(uint *)(lVar9 + 0x134) & 1) != 0)) && ((*(byte *)(lVar9 + 0x139) & 1) != 0)) &&
             (((*(byte *)(lVar9 + 0x139) & 2) == 0 &&
              (cVar5 = FUN_18038d0a0(lVar9,&uStack_78), cVar5 != '\0')))) {
            if (cVar1 != '\0') break;
            fVar13 = (float)func_0x00018038d2f0(lVar9,&uStack_78);
            fVar13 = ABS(fVar13);
            if ((fVar13 < 100.0) && (fVar13 < fVar14)) {
              lVar8 = lVar9;
              fVar14 = fVar13;
            }
          }
        }
      }
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined4 *)(lVar9 + 300);
      }
      *(undefined4 *)(lVar11 + *(longlong *)param_1[4]) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined4 *)(lVar9 + 0x130);
      }
      *(undefined4 *)(*(longlong *)param_1[4] + 4 + lVar11) = uVar7;
      if (lVar9 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined4 *)(lVar9 + 0x128);
      }
      lVar12 = lVar12 + 1;
      *(undefined4 *)(*(longlong *)param_1[4] + 8 + lVar11) = uVar7;
      lVar11 = lVar11 + 0xc;
    } while (lVar12 < param_3);
  }
  return;
}






