#include "TaleWorlds.Native.Split.h"

// 05_networking_part046.c - 3 个函数

// 函数: void FUN_180864e8c(float param_1,longlong param_2,float param_3,float param_4)
void FUN_180864e8c(float param_1,longlong param_2,float param_3,float param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong in_R9;
  longlong in_R10;
  float fVar3;
  float fVar4;
  float in_XMM4_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar8;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStackX_20;
  float fStackX_24;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float in_stack_00000050;
  float in_stack_00000078;
  
  if (unaff_RBX < param_2) {
    fVar8 = (unaff_XMM11_Da / param_1) * *(float *)(unaff_RDI + 0x300);
    puVar2 = (undefined8 *)(in_R9 + 0x560 + unaff_RBX * 0x44);
    do {
      lVar1 = 0x24;
      if (*(char *)((longlong)puVar2 + 0x34) == '\0') {
        lVar1 = in_R10;
      }
      fVar5 = in_XMM4_Da - (float)*(undefined8 *)(lVar1 + (longlong)puVar2);
      param_3 = param_3 - *(float *)(lVar1 + 8 + (longlong)puVar2);
      param_4 = param_4 - (float)((ulonglong)*(undefined8 *)(lVar1 + (longlong)puVar2) >> 0x20);
      fVar3 = SQRT(param_4 * param_4 + fVar5 * fVar5 + param_3 * param_3);
      fVar4 = unaff_XMM6_Da;
      fVar6 = unaff_XMM6_Da;
      fVar7 = unaff_XMM6_Da;
      if (unaff_XMM6_Da < fVar3) {
        fVar3 = unaff_XMM14_Da / fVar3;
        fVar4 = fVar3 * param_3;
        fVar6 = fVar3 * param_4;
        fVar7 = fVar3 * fVar5;
      }
      fVar5 = (fVar7 * unaff_XMM13_Da + fVar6 * unaff_XMM15_Da + fVar4 * unaff_XMM12_Da) * fVar8 +
              unaff_XMM9_Da;
      fVar3 = unaff_XMM6_Da;
      if (fVar5 != unaff_XMM6_Da) {
        fStackX_24 = (float)((ulonglong)*puVar2 >> 0x20);
        fStackX_20 = (float)*puVar2;
        fVar3 = ((fVar7 * fStackX_20 + fVar6 * fStackX_24 + fVar4 * *(float *)(puVar2 + 1)) * fVar8
                + unaff_XMM9_Da) / fVar5;
        if (fVar3 <= unaff_XMM6_Da) {
          fVar3 = unaff_XMM6_Da;
        }
      }
      lVar1 = unaff_RBX * 4;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x44);
      unaff_RBX = unaff_RBX + 1;
      unaff_XMM10_Da = unaff_XMM10_Da + fVar3 * *(float *)(unaff_RBP + -0x80 + lVar1);
      param_3 = in_stack_00000050;
      param_4 = fStack000000000000004c;
      in_XMM4_Da = fStack0000000000000048;
    } while (unaff_RBX < param_2);
  }
  *(float *)(unaff_RDI + 0x2fc) = unaff_XMM10_Da;
  if ((unaff_XMM10_Da != in_stack_00000078) && (*(longlong *)(unaff_RDI + 0x2b0) != 0)) {
    fVar8 = *(float *)(unaff_RDI + 0x2f8) * unaff_XMM10_Da;
    if (unaff_XMM6_Da <= fVar8) {
      unaff_XMM6_Da = fVar8;
      unaff_XMM6_Db = 0;
      if (100.0 <= fVar8) {
        unaff_XMM6_Da = 100.0;
        unaff_XMM6_Db = 0;
      }
    }
    func_0x000180853cc0(*(longlong *)(unaff_RDI + 0x2b0),CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da));
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x60) ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180865027(float param_1)
void FUN_180865027(float param_1)

{
  longlong unaff_RBP;
  longlong unaff_RDI;
  float fVar1;
  float unaff_XMM6_Da;
  
  *(undefined4 *)(unaff_RDI + 0x2fc) = 0x3f800000;
  if ((param_1 != 1.0) && (*(longlong *)(unaff_RDI + 0x2b0) != 0)) {
    fVar1 = *(float *)(unaff_RDI + 0x2f8) * 1.0;
    if ((unaff_XMM6_Da <= fVar1) && (unaff_XMM6_Da = fVar1, 100.0 <= fVar1)) {
      unaff_XMM6_Da = 100.0;
    }
    func_0x000180853cc0(*(longlong *)(unaff_RDI + 0x2b0),unaff_XMM6_Da);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -0x60) ^ (ulonglong)&stack0x00000000);
}



undefined8 FUN_1808650a0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lStackX_8;
  undefined1 auStack_78 [80];
  
  if ((*(longlong *)(param_1 + 0x350) == 0) && (*(longlong *)(param_1 + 0x480) != 0)) {
    lVar7 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8);
    uVar8 = FUN_1808c7f30(*(undefined8 *)(lVar7 + 0xd0),&lStackX_8);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if ((int)lStackX_8 == 2) {
      if (*(int *)(param_1 + 0x2e4) != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x2e4) = 2;
      FUN_180768b70(param_1 + 0x2ec);
      lVar7 = *(longlong *)(param_1 + 0x80);
      if (lVar7 == 0) {
        return 0;
      }
      uVar6 = FUN_1808605e0(param_1);
      *(undefined4 *)(lVar7 + 0x80) = uVar6;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2e4) = 3;
  uVar8 = FUN_1808624a0(param_1);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  plVar13 = (longlong *)0x0;
  plVar1 = (longlong *)(param_1 + 0x240);
  plVar10 = (longlong *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar10 = plVar13;
  }
  plVar3 = plVar13;
  if (plVar10 != (longlong *)0x0) {
    plVar3 = plVar10 + 3;
  }
  while (plVar3 != plVar1) {
    plVar10 = plVar3 + -3;
    if (plVar3 == (longlong *)0x0) {
      plVar10 = plVar13;
    }
    uVar8 = FUN_1808d5da0(plVar10);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (plVar3 == plVar1) break;
    plVar10 = (longlong *)(*plVar3 + -0x18);
    if (*plVar3 == 0) {
      plVar10 = plVar13;
    }
    plVar3 = plVar13;
    if (plVar10 != (longlong *)0x0) {
      plVar3 = plVar10 + 3;
    }
  }
  plVar10 = (longlong *)(*plVar1 + -0x18);
  if (*plVar1 == 0) {
    plVar10 = plVar13;
  }
  plVar3 = plVar13;
  if (plVar10 != (longlong *)0x0) {
    plVar3 = plVar10 + 3;
  }
  while (plVar3 != plVar1) {
    plVar10 = plVar3 + -3;
    if (plVar3 == (longlong *)0x0) {
      plVar10 = plVar13;
    }
    uVar8 = FUN_1808d74e0(plVar10,1);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (plVar3 == plVar1) break;
    plVar10 = (longlong *)(*plVar3 + -0x18);
    if (*plVar3 == 0) {
      plVar10 = plVar13;
    }
    plVar3 = plVar13;
    if (plVar10 != (longlong *)0x0) {
      plVar3 = plVar10 + 3;
    }
  }
  uVar8 = FUN_1808b2f30(param_1 + 8,10);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar8 = FUN_1808b2f30(param_1 + 8,0x1e);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  uVar8 = FUN_1808b2f30(param_1 + 8,0x1f);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  lVar7 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8);
  if ((*(uint *)(lVar7 + 0xf8) >> 4 & 1) != 0) {
    puVar11 = (undefined8 *)(param_1 + 0x490);
    puVar2 = (undefined8 *)*puVar11;
    puVar4 = puVar2;
    while (puVar4 != puVar11) {
      if ((*(byte *)((longlong)puVar2 + 0x1c) & 1) != 0) {
        if (*(int *)(puVar2[2] + 0xd0) != 0) {
          *(uint *)((longlong)puVar2 + 0x1c) = *(uint *)((longlong)puVar2 + 0x1c) | 0x20;
          cVar5 = FUN_1808b0820(puVar2[2] + 200);
          uVar9 = 0x40;
          if (cVar5 != '\0') {
            uVar9 = 0;
          }
          *(uint *)((longlong)puVar2 + 0x1c) =
               (-(uint)(cVar5 != '\0') & 0x40 | *(uint *)((longlong)puVar2 + 0x1c)) & ~uVar9;
        }
      }
      if (puVar2 != puVar11) {
        puVar2 = (undefined8 *)*puVar2;
        puVar4 = puVar2;
      }
    }
  }
  FUN_18085ba10(param_1 + 200,auStack_78);
  lVar7 = *(longlong *)(param_1 + 0x88);
  for (uVar12 = *(ulonglong *)(lVar7 + 0xa0);
      (*(ulonglong *)(lVar7 + 0xa0) <= uVar12 &&
      (uVar12 < (longlong)*(int *)(lVar7 + 0xa8) * 0x10 + *(ulonglong *)(lVar7 + 0xa0)));
      uVar12 = uVar12 + 0x10) {
    lStackX_8 = 0;
    uVar8 = FUN_180860480(param_1,uVar12,&lStackX_8);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    *(uint *)(lStackX_8 + 0x1c) = *(uint *)(lStackX_8 + 0x1c) | 0x80;
    if ((((*(uint *)(lStackX_8 + 0x1c) >> 5 & 1) == 0) ||
        ((*(uint *)(lStackX_8 + 0x1c) >> 6 & 1) != 0)) &&
       (uVar8 = FUN_1808c7260(auStack_78,lStackX_8,1), (int)uVar8 != 0)) {
      return uVar8;
    }
  }
  uVar8 = FUN_18085aca0(param_1 + 200);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  for (puVar11 = *(undefined8 **)(param_1 + 0x4c0);
      (*(undefined8 **)(param_1 + 0x4c0) <= puVar11 &&
      (puVar11 < *(undefined8 **)(param_1 + 0x4c0) + *(int *)(param_1 + 0x4c8)));
      puVar11 = puVar11 + 1) {
    uVar8 = FUN_1808b42b0(*puVar11);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  uVar8 = FUN_180851ba0(*(undefined8 *)(param_1 + 0x2b0),
                        *(uint *)(param_1 + 0x2d8) >> 0xc & 0xffffff01);
  if ((int)uVar8 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (lVar7 != 0) {
      uVar6 = FUN_1808605e0(param_1);
      *(undefined4 *)(lVar7 + 0x80) = uVar6;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x480);
    if ((puVar11 != (undefined8 *)0x0) &&
       (uVar8 = (**(code **)*puVar11)(puVar11,param_1,(uint)param_2 * 8 + 8,0), (int)uVar8 != 0)) {
      return uVar8;
    }
    return 0;
  }
  return uVar8;
}



undefined8 FUN_180865286(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined1 auStackX_20 [8];
  
  puVar8 = (undefined8 *)(unaff_RDI + 0x490);
  puVar1 = (undefined8 *)*puVar8;
  puVar3 = puVar1;
  while (puVar3 != puVar8) {
    if ((*(byte *)((longlong)puVar1 + 0x1c) & 1) != 0) {
      if (*(uint *)(puVar1[2] + 0xd0) != (uint)unaff_R12) {
        *(uint *)((longlong)puVar1 + 0x1c) = *(uint *)((longlong)puVar1 + 0x1c) | 0x20;
        cVar4 = FUN_1808b0820(puVar1[2] + 200);
        uVar7 = 0x40;
        if (cVar4 != '\0') {
          uVar7 = (uint)unaff_R12;
        }
        *(uint *)((longlong)puVar1 + 0x1c) =
             (-(uint)(cVar4 != '\0') & 0x40 | *(uint *)((longlong)puVar1 + 0x1c)) & ~uVar7;
      }
    }
    if (puVar1 != puVar8) {
      puVar1 = (undefined8 *)*puVar1;
      puVar3 = puVar1;
    }
  }
  FUN_18085ba10(unaff_RDI + 200,auStackX_20);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  uVar9 = *(ulonglong *)(lVar2 + 0xa0);
  while( true ) {
    if ((uVar9 < *(ulonglong *)(lVar2 + 0xa0)) ||
       ((longlong)*(int *)(lVar2 + 0xa8) * 0x10 + *(ulonglong *)(lVar2 + 0xa0) <= uVar9)) {
      uVar6 = FUN_18085aca0(unaff_RDI + 200);
      if ((int)uVar6 == 0) {
        for (puVar8 = *(undefined8 **)(unaff_RDI + 0x4c0);
            (*(undefined8 **)(unaff_RDI + 0x4c0) <= puVar8 &&
            (puVar8 < *(undefined8 **)(unaff_RDI + 0x4c0) + *(int *)(unaff_RDI + 0x4c8)));
            puVar8 = puVar8 + 1) {
          uVar6 = FUN_1808b42b0(*puVar8);
          if ((int)uVar6 != 0) {
            return uVar6;
          }
        }
        uVar6 = FUN_180851ba0(*(undefined8 *)(unaff_RDI + 0x2b0),
                              *(uint *)(unaff_RDI + 0x2d8) >> 0xc & 0xffffff01);
        if ((int)uVar6 == 0) {
          lVar2 = *(longlong *)(unaff_RDI + 0x80);
          if (lVar2 != 0) {
            uVar5 = FUN_1808605e0();
            *(undefined4 *)(lVar2 + 0x80) = uVar5;
          }
          if ((*(undefined8 **)(unaff_RDI + 0x480) == (undefined8 *)0x0) ||
             (uVar6 = (**(code **)**(undefined8 **)(unaff_RDI + 0x480))(), (int)uVar6 == 0)) {
            uVar6 = 0;
          }
        }
      }
      return uVar6;
    }
    uVar6 = FUN_180860480();
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *(uint *)(unaff_R12 + 0x1c) = *(uint *)(unaff_R12 + 0x1c) | 0x80;
    if ((((*(uint *)(unaff_R12 + 0x1c) >> 5 & 1) == 0) ||
        ((*(uint *)(unaff_R12 + 0x1c) >> 6 & 1) != 0)) &&
       (uVar6 = FUN_1808c7260(auStackX_20,unaff_R12,1), (int)uVar6 != 0)) break;
    uVar9 = uVar9 + 0x10;
  }
  return uVar6;
}



undefined8 FUN_1808652fd(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong unaff_R12;
  undefined1 auStackX_20 [8];
  
  FUN_18085ba10(unaff_RDI + 200,auStackX_20);
  lVar1 = *(longlong *)(unaff_RDI + 0x88);
  uVar5 = *(ulonglong *)(lVar1 + 0xa0);
  while( true ) {
    if ((uVar5 < *(ulonglong *)(lVar1 + 0xa0)) ||
       ((longlong)*(int *)(lVar1 + 0xa8) * 0x10 + *(ulonglong *)(lVar1 + 0xa0) <= uVar5)) {
      uVar3 = FUN_18085aca0(unaff_RDI + 200);
      if ((int)uVar3 == 0) {
        for (puVar4 = *(undefined8 **)(unaff_RDI + 0x4c0);
            (*(undefined8 **)(unaff_RDI + 0x4c0) <= puVar4 &&
            (puVar4 < *(undefined8 **)(unaff_RDI + 0x4c0) + *(int *)(unaff_RDI + 0x4c8)));
            puVar4 = puVar4 + 1) {
          uVar3 = FUN_1808b42b0(*puVar4);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        uVar3 = FUN_180851ba0(*(undefined8 *)(unaff_RDI + 0x2b0),
                              *(uint *)(unaff_RDI + 0x2d8) >> 0xc & 0xffffff01);
        if ((int)uVar3 == 0) {
          lVar1 = *(longlong *)(unaff_RDI + 0x80);
          if (lVar1 != 0) {
            uVar2 = FUN_1808605e0();
            *(undefined4 *)(lVar1 + 0x80) = uVar2;
          }
          if ((*(undefined8 **)(unaff_RDI + 0x480) != (undefined8 *)0x0) &&
             (uVar3 = (**(code **)**(undefined8 **)(unaff_RDI + 0x480))(), (int)uVar3 != 0)) {
            return uVar3;
          }
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    uVar3 = FUN_180860480();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(uint *)(unaff_R12 + 0x1c) = *(uint *)(unaff_R12 + 0x1c) | 0x80;
    if ((((*(uint *)(unaff_R12 + 0x1c) >> 5 & 1) == 0) ||
        ((*(uint *)(unaff_R12 + 0x1c) >> 6 & 1) != 0)) &&
       (uVar3 = FUN_1808c7260(auStackX_20,unaff_R12,1), (int)uVar3 != 0)) break;
    uVar5 = uVar5 + 0x10;
  }
  return uVar3;
}



undefined8 FUN_180865470(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar4 = *(int *)(param_1 + 0x488);
  plVar1 = (longlong *)(param_1 + 0x4a0);
  plVar5 = (longlong *)0x0;
  plVar3 = (longlong *)(*plVar1 + -0x70);
  if (*plVar1 == 0) {
    plVar3 = plVar5;
  }
  plVar2 = plVar5;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = plVar3 + 0xe;
  }
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -0xe;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = plVar5;
    }
    FUN_180865470(plVar3);
    plVar3 = plVar2 + 0x83;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = (longlong *)0x488;
    }
    iVar4 = iVar4 + (int)*plVar3;
    if (plVar2 == plVar1) break;
    plVar3 = (longlong *)(*plVar2 + -0x70);
    if (*plVar2 == 0) {
      plVar3 = plVar5;
    }
    plVar2 = plVar5;
    if (plVar3 != (longlong *)0x0) {
      plVar2 = plVar3 + 0xe;
    }
  }
  *(int *)(param_1 + 0x48c) = iVar4;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    func_0x00018084e700(*(longlong *)(param_1 + 0x2b8),iVar4);
  }
  return 0;
}



undefined8 FUN_18086547c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int unaff_ESI;
  longlong *plVar4;
  
  plVar1 = (longlong *)(param_1 + 0x4a0);
  plVar4 = (longlong *)0x0;
  plVar3 = (longlong *)(*plVar1 + -0x70);
  if (*plVar1 == 0) {
    plVar3 = plVar4;
  }
  plVar2 = plVar4;
  if (plVar3 != (longlong *)0x0) {
    plVar2 = plVar3 + 0xe;
  }
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -0xe;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = plVar4;
    }
    FUN_180865470(plVar3);
    plVar3 = plVar2 + 0x83;
    if (plVar2 == (longlong *)0x0) {
      plVar3 = (longlong *)0x488;
    }
    unaff_ESI = unaff_ESI + (int)*plVar3;
    if (plVar2 == plVar1) break;
    plVar3 = (longlong *)(*plVar2 + -0x70);
    if (*plVar2 == 0) {
      plVar3 = plVar4;
    }
    plVar2 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      plVar2 = plVar3 + 0xe;
    }
  }
  *(int *)(param_1 + 0x48c) = unaff_ESI;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    func_0x00018084e700(*(longlong *)(param_1 + 0x2b8),unaff_ESI);
  }
  return 0;
}



undefined8 FUN_1808654be(void)

{
  longlong *plVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *unaff_R14;
  
  do {
    FUN_180865470();
    plVar1 = unaff_RBX + 0x83;
    if (unaff_RBX == (longlong *)0x0) {
      plVar1 = (longlong *)0x488;
    }
    unaff_ESI = unaff_ESI + (int)*plVar1;
    if (unaff_RBX == unaff_RDI) break;
    plVar1 = (longlong *)(*unaff_RBX + -0x70);
    if (*unaff_RBX == 0) {
      plVar1 = unaff_R14;
    }
    unaff_RBX = unaff_R14;
    if (plVar1 != (longlong *)0x0) {
      unaff_RBX = plVar1 + 0xe;
    }
  } while (unaff_RBX != unaff_RDI);
  *(int *)(unaff_RBP + 0x48c) = unaff_ESI;
  if (*(longlong *)(unaff_RBP + 0x2b8) != 0) {
    func_0x00018084e700(*(longlong *)(unaff_RBP + 0x2b8),unaff_ESI);
  }
  return 0;
}



undefined8 FUN_18086551b(void)

{
  longlong unaff_RBP;
  undefined4 unaff_ESI;
  
  *(undefined4 *)(unaff_RBP + 0x48c) = unaff_ESI;
  if (*(longlong *)(unaff_RBP + 0x2b8) != 0) {
    func_0x00018084e700(*(longlong *)(unaff_RBP + 0x2b8),unaff_ESI);
  }
  return 0;
}



undefined8 FUN_180865541(undefined8 param_1)

{
  undefined4 unaff_ESI;
  
  func_0x00018084e700(param_1,unaff_ESI);
  return 0;
}



undefined8 FUN_180865550(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uStackX_18;
  undefined8 uStackX_20;
  
  lVar17 = *(longlong *)(param_1 + 0x4e0);
  uStackX_20 = 0;
  uStackX_18 = 0;
  uVar9 = FUN_18073a200(*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x4c0),&uStackX_18);
  if (((int)uVar9 == 0) && (uVar9 = FUN_18073c4c0(uStackX_18,&uStackX_20,0), (int)uVar9 == 0)) {
    puVar16 = (undefined8 *)(lVar17 + 0x20);
    while( true ) {
      puVar1 = puVar16 + -4;
      if ((puVar1 < *(undefined8 **)(param_1 + 0x4e0)) ||
         (*(undefined8 **)(param_1 + 0x4e0) + (longlong)*(int *)(param_1 + 0x4e8) * 7 <= puVar1))
      break;
      if ((param_2 == '\0') &&
         (cVar8 = FUN_180863210(*puVar16,puVar16[2],uStackX_20), cVar8 == '\0')) {
        puVar16 = puVar16 + 7;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x480);
        if ((plVar3 != (longlong *)0x0) &&
           (uVar9 = (**(code **)(*plVar3 + 0x10))
                              (plVar3,param_1,puVar1,puVar16 + -2,*puVar16,
                               *(undefined4 *)(puVar16 + 1)), (int)uVar9 != 0)) {
          return uVar9;
        }
        iVar4 = (int)(((longlong)puVar1 - *(longlong *)(param_1 + 0x4e0)) / 0x38);
        if ((iVar4 < 0) || (*(int *)(param_1 + 0x4e8) <= iVar4)) {
          return 0x1c;
        }
        FUN_180840270(*(longlong *)(param_1 + 0x4e0) + 0x10 + (longlong)iVar4 * 0x38);
        iVar11 = *(int *)(param_1 + 0x4e8);
        iVar12 = (iVar11 - iVar4) + -1;
        if (0 < iVar12) {
          iVar15 = 0;
          lVar17 = *(longlong *)(param_1 + 0x4e0) + (longlong)iVar4 * 0x38;
          lVar18 = (longlong)iVar12;
          if (0 < iVar12) {
            lVar14 = lVar17 + 0x1c;
            lVar10 = (lVar17 + 0x38) - lVar17;
            do {
              *(undefined8 *)(lVar14 + -0xc) = 0;
              *(undefined8 *)(lVar14 + -4) = 0;
              *(undefined8 *)(lVar14 + 0x14) = *(undefined8 *)(lVar14 + lVar10 + 0x14);
              puVar2 = (undefined4 *)(lVar10 + -0x1c + lVar14);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              *(undefined4 *)(lVar14 + -0x1c) = *puVar2;
              *(undefined4 *)(lVar14 + -0x18) = uVar5;
              *(undefined4 *)(lVar14 + -0x14) = uVar6;
              *(undefined4 *)(lVar14 + -0x10) = uVar7;
              if (*(int *)(lVar10 + -4 + lVar14) < 1) {
                puVar13 = &DAT_18098bc73;
              }
              else {
                puVar13 = *(undefined **)(lVar10 + -0xc + lVar14);
              }
              FUN_18084e110(lVar14 + -0xc,puVar13);
              *(undefined8 *)(lVar14 + 4) = *(undefined8 *)(lVar10 + 4 + lVar14);
              *(undefined4 *)(lVar14 + 0xc) = *(undefined4 *)(lVar10 + 0xc + lVar14);
              FUN_180840270((longlong)iVar15 * 0x38 + 0x10 + lVar17 + 0x38);
              iVar15 = iVar15 + 1;
              lVar14 = lVar14 + 0x38;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            iVar11 = *(int *)(param_1 + 0x4e8);
          }
        }
        *(int *)(param_1 + 0x4e8) = iVar11 + -1;
      }
    }
    uVar9 = 0;
  }
  return uVar9;
}



undefined8 FUN_1808655bb(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  longlong lVar14;
  char unaff_BPL;
  int iVar15;
  longlong unaff_RSI;
  undefined8 *puVar16;
  longlong unaff_RDI;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puStack0000000000000030;
  longlong in_stack_000000a0;
  char in_stack_000000a8;
  undefined8 in_stack_000000b8;
  
  puVar16 = (undefined8 *)(unaff_RSI + 0x20);
  puStack0000000000000030 = puVar16;
  while( true ) {
    while( true ) {
      puVar1 = puVar16 + -4;
      if ((puVar1 < *(undefined8 **)(unaff_RDI + 0x4e0)) ||
         (*(undefined8 **)(unaff_RDI + 0x4e0) + (longlong)*(int *)(unaff_RDI + 0x4e8) * 7 <= puVar1)
         ) {
        return 0;
      }
      if ((unaff_BPL != '\0') ||
         (cVar8 = FUN_180863210(*puVar16,puVar16[2],in_stack_000000b8), cVar8 != '\0')) break;
      puVar16 = puVar16 + 7;
      puStack0000000000000030 = puVar16;
    }
    plVar3 = *(longlong **)(unaff_RDI + 0x480);
    if ((plVar3 != (longlong *)0x0) &&
       (uVar9 = (**(code **)(*plVar3 + 0x10))(plVar3,unaff_RDI,puVar1,puVar16 + -2,*puVar16),
       (int)uVar9 != 0)) break;
    iVar4 = (int)(((longlong)puVar1 - *(longlong *)(unaff_RDI + 0x4e0)) / 0x38);
    if ((iVar4 < 0) || (*(int *)(unaff_RDI + 0x4e8) <= iVar4)) {
      return 0x1c;
    }
    FUN_180840270(*(longlong *)(unaff_RDI + 0x4e0) + 0x10 + (longlong)iVar4 * 0x38);
    iVar11 = *(int *)(unaff_RDI + 0x4e8);
    iVar12 = (iVar11 - iVar4) + -1;
    if (0 < iVar12) {
      iVar15 = 0;
      lVar17 = *(longlong *)(unaff_RDI + 0x4e0) + (longlong)iVar4 * 0x38;
      lVar18 = (longlong)iVar12;
      unaff_BPL = in_stack_000000a8;
      if (0 < iVar12) {
        lVar14 = lVar17 + 0x1c;
        lVar10 = (lVar17 + 0x38) - lVar17;
        do {
          *(undefined8 *)(lVar14 + -0xc) = 0;
          *(undefined8 *)(lVar14 + -4) = 0;
          *(undefined8 *)(lVar14 + 0x14) = *(undefined8 *)(lVar14 + lVar10 + 0x14);
          puVar2 = (undefined4 *)(lVar10 + -0x1c + lVar14);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          *(undefined4 *)(lVar14 + -0x1c) = *puVar2;
          *(undefined4 *)(lVar14 + -0x18) = uVar5;
          *(undefined4 *)(lVar14 + -0x14) = uVar6;
          *(undefined4 *)(lVar14 + -0x10) = uVar7;
          if (*(int *)(lVar10 + -4 + lVar14) < 1) {
            puVar13 = &DAT_18098bc73;
          }
          else {
            puVar13 = *(undefined **)(lVar10 + -0xc + lVar14);
          }
          FUN_18084e110(lVar14 + -0xc,puVar13);
          *(undefined8 *)(lVar14 + 4) = *(undefined8 *)(lVar10 + 4 + lVar14);
          *(undefined4 *)(lVar14 + 0xc) = *(undefined4 *)(lVar10 + 0xc + lVar14);
          FUN_180840270((longlong)iVar15 * 0x38 + 0x10 + lVar17 + 0x38);
          iVar15 = iVar15 + 1;
          lVar14 = lVar14 + 0x38;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        iVar11 = *(int *)(in_stack_000000a0 + 0x4e8);
        puVar16 = puStack0000000000000030;
        unaff_RDI = in_stack_000000a0;
      }
    }
    *(int *)(unaff_RDI + 0x4e8) = iVar11 + -1;
  }
  return uVar9;
}





// 函数: void FUN_1808657eb(void)
void FUN_1808657eb(void)

{
  return;
}



undefined8 FUN_180865800(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  char acStackX_8 [8];
  char acStackX_18 [16];
  
  acStackX_8[0] = '\0';
  uVar4 = FUN_18085d650(param_1 + 200,acStackX_8);
  if ((int)uVar4 == 0) {
    if (acStackX_8[0] == (char)uVar4) {
LAB_1808659de:
      *param_2 = 0;
    }
    else {
      plVar10 = (longlong *)0x0;
      plVar1 = (longlong *)(param_1 + 0x250);
      plVar9 = (longlong *)(*plVar1 + -8);
      if (*plVar1 == 0) {
        plVar9 = plVar10;
      }
      plVar8 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        plVar8 = plVar9 + 1;
      }
      if (plVar8 != plVar1) {
        do {
          plVar9 = plVar8 + 2;
          if (plVar8 == (longlong *)0x0) {
            plVar9 = (longlong *)&DAT_00000018;
          }
          if ((*(uint *)(*plVar9 + 0x34) >> 1 & 1) == 0) {
            plVar7 = plVar8 + -1;
            if (plVar8 == (longlong *)0x0) {
              plVar7 = plVar10;
            }
            cVar3 = func_0x0001808d5fb0(plVar7);
            if (cVar3 == '\0') goto LAB_1808659de;
            fVar11 = *(float *)(*plVar9 + 0x40);
            if (fVar11 != 0.0) {
              pfVar5 = (float *)(plVar8 + 4);
              if (plVar8 == (longlong *)0x0) {
                pfVar5 = (float *)0x28;
              }
              fVar2 = *pfVar5;
              fVar11 = (float)func_0x00018084dcc0(*plVar9,fVar11 + fVar2);
              if (fVar11 != fVar2) goto LAB_1808659de;
            }
          }
          if (plVar8 == plVar1) break;
          plVar9 = (longlong *)(*plVar8 + -8);
          if (*plVar8 == 0) {
            plVar9 = plVar10;
          }
          plVar8 = plVar10;
          if (plVar9 != (longlong *)0x0) {
            plVar8 = plVar9 + 1;
          }
        } while (plVar8 != plVar1);
      }
      plVar1 = (longlong *)(param_1 + 0x400);
      plVar9 = (longlong *)(*plVar1 + -0x20);
      if (*plVar1 == 0) {
        plVar9 = plVar10;
      }
      plVar8 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        plVar8 = plVar9 + 4;
      }
      while (plVar8 != plVar1) {
        plVar9 = plVar8 + -4;
        if (plVar8 == (longlong *)0x0) {
          plVar9 = plVar10;
        }
        lVar6 = (**(code **)*plVar9)(plVar9);
        if ((((*(int *)(lVar6 + 0x60) == 0) && (*(int *)(lVar6 + 100) == 0)) &&
            (*(int *)(lVar6 + 0x68) == 0)) && (*(int *)(lVar6 + 0x6c) == 0)) {
          acStackX_18[0] = '\0';
          uVar4 = (**(code **)(*plVar9 + 0x50))(plVar9,acStackX_18);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (acStackX_18[0] == '\0') goto LAB_1808659de;
        }
        if (plVar8 == plVar1) break;
        plVar9 = (longlong *)(*plVar8 + -0x20);
        if (*plVar8 == 0) {
          plVar9 = plVar10;
        }
        plVar8 = plVar10;
        if (plVar9 != (longlong *)0x0) {
          plVar8 = plVar9 + 4;
        }
      }
      *param_2 = 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_18086582c(void)

{
  longlong *plVar1;
  float fVar2;
  char in_AL;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RBP;
  longlong *plVar9;
  undefined1 *unaff_R14;
  longlong *plVar10;
  float fVar11;
  char in_stack_00000080;
  char in_stack_00000090;
  
  if (in_stack_00000080 == in_AL) {
LAB_1808659de:
    *unaff_R14 = 0;
  }
  else {
    plVar10 = (longlong *)0x0;
    plVar1 = (longlong *)(unaff_RBP + 0x250);
    plVar9 = (longlong *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      plVar9 = plVar10;
    }
    plVar8 = plVar10;
    if (plVar9 != (longlong *)0x0) {
      plVar8 = plVar9 + 1;
    }
    if (plVar8 != plVar1) {
      do {
        plVar9 = plVar8 + 2;
        if (plVar8 == (longlong *)0x0) {
          plVar9 = (longlong *)&DAT_00000018;
        }
        if ((*(uint *)(*plVar9 + 0x34) >> 1 & 1) == 0) {
          plVar7 = plVar8 + -1;
          if (plVar8 == (longlong *)0x0) {
            plVar7 = plVar10;
          }
          cVar3 = func_0x0001808d5fb0(plVar7);
          if (cVar3 == '\0') goto LAB_1808659de;
          fVar11 = *(float *)(*plVar9 + 0x40);
          if (fVar11 != 0.0) {
            pfVar4 = (float *)(plVar8 + 4);
            if (plVar8 == (longlong *)0x0) {
              pfVar4 = (float *)0x28;
            }
            fVar2 = *pfVar4;
            fVar11 = (float)func_0x00018084dcc0(*plVar9,fVar11 + fVar2);
            if (fVar11 != fVar2) goto LAB_1808659de;
          }
        }
        if (plVar8 == plVar1) break;
        plVar9 = (longlong *)(*plVar8 + -8);
        if (*plVar8 == 0) {
          plVar9 = plVar10;
        }
        plVar8 = plVar10;
        if (plVar9 != (longlong *)0x0) {
          plVar8 = plVar9 + 1;
        }
      } while (plVar8 != plVar1);
    }
    plVar1 = (longlong *)(unaff_RBP + 0x400);
    plVar9 = (longlong *)(*plVar1 + -0x20);
    if (*plVar1 == 0) {
      plVar9 = plVar10;
    }
    plVar8 = plVar10;
    if (plVar9 != (longlong *)0x0) {
      plVar8 = plVar9 + 4;
    }
    while (plVar8 != plVar1) {
      plVar9 = plVar8 + -4;
      if (plVar8 == (longlong *)0x0) {
        plVar9 = plVar10;
      }
      lVar5 = (**(code **)*plVar9)(plVar9);
      if ((((*(int *)(lVar5 + 0x60) == 0) && (*(int *)(lVar5 + 100) == 0)) &&
          (*(int *)(lVar5 + 0x68) == 0)) && (*(int *)(lVar5 + 0x6c) == 0)) {
        in_stack_00000090 = '\0';
        uVar6 = (**(code **)(*plVar9 + 0x50))(plVar9,&stack0x00000090);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (in_stack_00000090 == '\0') goto LAB_1808659de;
      }
      if (plVar8 == plVar1) break;
      plVar9 = (longlong *)(*plVar8 + -0x20);
      if (*plVar8 == 0) {
        plVar9 = plVar10;
      }
      plVar8 = plVar10;
      if (plVar9 != (longlong *)0x0) {
        plVar8 = plVar9 + 4;
      }
    }
    *unaff_R14 = 1;
  }
  return 0;
}





