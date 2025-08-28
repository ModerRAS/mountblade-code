#include "TaleWorlds.Native.Split.h"

// 99_part_08_part075.c - 1 个函数

// 函数: void FUN_1805baa98(void)
void FUN_1805baa98(void)

{
  longlong lVar1;
  int in_EAX;
  float *pfVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int unaff_EBP;
  int unaff_ESI;
  ulonglong uVar8;
  longlong *in_R9;
  longlong lVar9;
  longlong in_R11;
  ulonglong unaff_R14;
  float fVar10;
  float fVar11;
  float fVar12;
  uint in_XMM3_Da;
  float in_XMM4_Da;
  
  do {
    lVar7 = (longlong)in_EAX * 0xa60;
    if (((*(int *)(lVar7 + 0x3608 + in_R11) == 1) && (in_EAX != *(int *)(*in_R9 + 0x10))) &&
       (unaff_EBP == (int)*(float *)(lVar7 + 0x33fc + in_R11))) {
      lVar9 = *(longlong *)(*in_R9 + 0x20);
      lVar1 = *(longlong *)(lVar7 + 0x30c0 + in_R11);
      fVar12 = *(float *)(lVar9 + 0xc) - *(float *)(lVar1 + 0xc);
      fVar11 = *(float *)(lVar9 + 0x10) - *(float *)(lVar1 + 0x10);
      fVar10 = *(float *)(lVar9 + 0x14) - *(float *)(lVar1 + 0x14);
      fVar10 = (float)((uint)(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10) ^ in_XMM3_Da);
      if (in_XMM4_Da < fVar10) {
        iVar5 = *(int *)((longlong)in_R9 + 0x1b6c);
        uVar4 = unaff_R14 & 0xffffffff;
        uVar8 = unaff_R14;
        if (0 < iVar5) {
          pfVar2 = (float *)((longlong)in_R9 + 0x17b4);
          do {
            if (*pfVar2 <= fVar10) break;
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            uVar8 = uVar8 + 1;
            pfVar2 = pfVar2 + 0xf;
          } while ((int)uVar3 < iVar5);
          if (0xf < (longlong)uVar8) goto LAB_1805babfd;
        }
        if (iVar5 < 0x10) {
          iVar5 = iVar5 + 1;
          *(int *)((longlong)in_R9 + 0x1b6c) = iVar5;
        }
        lVar9 = (longlong)(iVar5 + -1);
        if ((longlong)uVar8 < lVar9) {
          puVar6 = (undefined8 *)((lVar9 + 0x65) * 0x3c + (longlong)in_R9);
          lVar9 = lVar9 - uVar8;
          do {
            *puVar6 = *(undefined8 *)((longlong)puVar6 + -0x3c);
            puVar6[1] = *(undefined8 *)((longlong)puVar6 + -0x34);
            puVar6[2] = *(undefined8 *)((longlong)puVar6 + -0x2c);
            puVar6[3] = *(undefined8 *)((longlong)puVar6 + -0x24);
            puVar6[4] = *(undefined8 *)((longlong)puVar6 + -0x1c);
            puVar6[5] = *(undefined8 *)((longlong)puVar6 + -0x14);
            puVar6[6] = *(undefined8 *)((longlong)puVar6 + -0xc);
            *(undefined4 *)(puVar6 + 7) = *(undefined4 *)((longlong)puVar6 + -4);
            puVar6 = (undefined8 *)((longlong)puVar6 + -0x3c);
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        lVar9 = (uVar8 + 0x65) * 0x3c;
        iVar5 = *(int *)(lVar7 + 0x30b0 + in_R11);
        if (*(int *)(lVar9 + (longlong)in_R9) != iVar5) {
          *(int *)(lVar9 + (longlong)in_R9) = iVar5;
          lVar7 = uVar8 * 0x3c;
          *(float *)(lVar7 + 0x17b4 + (longlong)in_R9) = fVar10;
          *(undefined8 *)(lVar7 + 0x17e0 + (longlong)in_R9) = 0x7149f2ca;
          *(int *)(lVar7 + 0x17bc + (longlong)in_R9) = (int)unaff_R14;
        }
      }
    }
LAB_1805babfd:
    in_R11 = in_R9[0x291];
    in_EAX = (int)*(short *)(in_R11 + 0x52dda0 + (longlong)in_EAX * 2);
    if (unaff_ESI <= in_EAX) {
      return;
    }
  } while( true );
}






